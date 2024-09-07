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
		if (ft_strcmp(s1, s2))
			return (0);
		return (1);
	}
	return (0);
}
