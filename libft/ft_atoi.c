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
	int	neg;
	int	i;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
