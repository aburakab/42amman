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

#include "libft.h"

static int	number_of_digits(int nb)
/**
 * @brief Calculates the number of digits in an integer.
 * 
 * This function takes an integer `nb` and returns the number of digits
 * in its decimal representation. If `nb` is zero or negative, the 
 * function accounts for the negative sign and counts the digits accordingly.
 * 
 * @param nb The integer whose number of digits is to be calculated.
 * @return int The number of digits in the integer. If the number is 
 * zero or negative, the count includes the negative sign as well.
 * 
 * @note A zero or negative number will increase the length by 1.
 */
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = number_of_digits(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-')
			str[i--] = '0' + -(n % 10);
		else
			str[i--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
