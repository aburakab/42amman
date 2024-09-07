/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:35:30 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:35:32 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_sign(char c)
{
	int	sign;

	if (c == '-')
		sign = -1;
	else
		sign = 1;
	return (sign);
}

static void	skip_spaces(const char *str, size_t *i)
{
	while (ft_isspace(str[(*i)]))
		i++;
}

int	ft_atoi(const char *str)
/**
 * ft_atoi - Converts a string to an integer.
 *
 * @str: The null-terminated string to be converted.
 *
 * This function converts the initial portion of the string `str` to an integer (of type `int`).
 * The conversion skips any leading whitespace characters (' ', '\t', '\n', '\v', '\f', '\r')
 * and handles an optional sign ('+' or '-') before the digits. The function continues converting
 * digits until a non-numeric character is encountered, at which point the conversion stops.
 *
 * If the string does not contain a valid numeric sequence, the function returns 0.
 *
 * Return: The converted integer value, or 0 if no valid conversion could be performed.
 */
{
	unsigned long	result;
	unsigned long	border;
	size_t			i;
	int				sign;
	long			max_long;

	result = 0;
	max_long = (long)(((unsigned long) ~0L) >> 1);
	border = (unsigned long)(max_long / 10);
	i = 0;
	skip_spaces(str, &i);
	sign = get_sign(str[i]);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if ((result > border || (result == border && (str[i] - '0') > 7))
			&& sign == 1)
			return (-1);
		else if ((result > border || (result == border && (str[i] - '0') > 8))
			&& sign == -1)
			return (0);
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)(result * sign));
}
