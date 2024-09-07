/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 20:33:03 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 20:33:05 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
/**
 * ft_strcmp - Compares two strings lexicographically.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * This function compares the two null-terminated strings `s1` and `s2` lexicographically,
 * character by character. It compares the ASCII values of corresponding characters
 * from both strings. The comparison continues until a differing character is found or
 * until a null terminator is reached.
 *
 * If the strings are identical, the function returns 0. If they differ, the function
 * returns a negative value if `s1` is lexicographically less than `s2`, or a positive value
 * if `s1` is greater than `s2`.
 *
 * Return: 0 if the strings are identical, a negative value if `s1` is less than `s2`, or a
 * positive value if `s1` is greater than `s2`.
 */
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (ptr1[i] || ptr2[i])
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
