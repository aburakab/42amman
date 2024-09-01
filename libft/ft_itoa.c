/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:17:03 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 21:17:04 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n, int minus)
{
	int	numlen;

	numlen = 1;
	while (n)
	{
		n /= 10;
		numlen++;
	}
	return (numlen + minus);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		numlen;
	int		is_negative;
	int		digit;

	if (n < 0)
		is_negative = 1;
	else
		is_negative = 0;
	numlen = ft_numlen(n, is_negative);
	str = ft_strnew(numlen);
	if (str)
	{
		str[numlen--] = '\0';
		while (numlen >= is_negative)
		{
			digit = n % 10;
			str[numlen--] = FT_ABS(digit) + '0';
			n /= 10;
		}
		if (is_negative)
			str[0] = '-';
	}
	return (str);
}
