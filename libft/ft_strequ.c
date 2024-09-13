/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:19:17 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 16:19:18 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(const char *s1, const char *s2)
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

int	ft_strequ(char const *s1, char const *s2)
/**
 * ft_strequ - Compares two strings for equality.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * This function compares the two strings `s1` and `s2` to check if they are identical.
 * The comparison is done lexicographically, meaning the strings are compared character
 * by character. If the two strings are identical (including the null terminator), the
 * function returns 1 (true). If the strings are different, the function returns 0 (false).
 *
 * If either `s1` or `s2` is NULL, the function returns 0 (false).
 *
 * Return: 1 if the strings are equal, 0 if they are not.
 */
{
	if (s1 && s2)
	{
		if (compare(s1, s2))
			return (0);
		return (1);
	}
	return (0);
}
