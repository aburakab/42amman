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

static size_t	ft_itoa_len(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num >= 1)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_num_to_str(long num, char *str, size_t len)
{
	str = ft_strnew(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	len--;
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
/**
 * ft_itoa - Converts an integer to a null-terminated string.
 *
 * @n: The integer to be converted to a string.
 *
 * This function allocates (with malloc) and returns a string representing the integer `n`.
 * The function handles negative numbers, zero, and positive numbers. It converts the
 * integer to a string of digits, ensuring the string is null-terminated.
 *
 * If memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly allocated string representing the integer, or NULL
 * if memory allocation fails.
 */
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = ft_itoa_len(num);
	str = 0;
	str = ft_num_to_str(num, str, len);
	if (!str)
		return (NULL);
	return (str);
}
