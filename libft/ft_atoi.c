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

int	ft_atoi(const char *str)
{
	unsigned long	result;
	unsigned long	border;
	size_t			i;
	int				sign;

	result = 0;
	border = (unsigned long)(FT_LONG_MAX / 10);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
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
