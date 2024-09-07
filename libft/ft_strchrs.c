/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:21:34 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/22 19:21:35 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrs(const char *s, int c)
/**
 * ft_strchrs - Searches a string for the first occurrence of any character from a set.
 *
 * @s: The input string in which to search.
 * @c: A set of characters (passed as an int, typically a string) to search for in the input string.
 *
 * This function searches the string `s` for the first occurrence of any character from the set `c`.
 * The function returns a pointer to the first character in `s` that matches any character from `c`.
 * If no such character is found, the function returns NULL.
 *
 * If `c` contains only one character, the function behaves like `ft_strchr`. If `c` contains
 * multiple characters, the function acts like a search for any of the characters from the set.
 *
 * Return: A pointer to the first occurrence of any character from `c` in the string `s`,
 * or NULL if no such character is found.
 */
{
	if (!s)
		return (NULL);
	return (ft_strchr(s, c));
}
