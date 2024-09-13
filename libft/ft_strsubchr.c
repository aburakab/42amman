/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:05:08 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/26 14:05:09 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubchr(const char *s, char c)
/**
 * ft_strsubchr - Extracts a substring from the start of a string up to a specific character.
 *
 * @s: The input string from which the substring is extracted.
 * @c: The character up to which the substring is extracted.
 *
 * This function searches the string `s` for the first occurrence of the character `c`.
 * It allocates (with malloc) and returns a new string which is a substring of `s`,
 * starting from the beginning of `s` and ending just before the character `c`.
 * The returned substring is null-terminated. If the character `c` is not found in the string `s`,
 * the entire string `s` is duplicated. If memory allocation fails or if the input string `s` is
 * NULL, the function returns NULL.
 *
 * The caller is responsible for freeing the memory allocated for the returned substring
 * to avoid memory leaks.
 *
 * Return: A pointer to the newly allocated substring, or NULL if memory allocation fails or if `s` is NULL.
 */
{
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = ft_strchr(s, c);
	if (!ptr)
		return (NULL);
	return (ft_strsub(s, 0, ptr - s));
}
