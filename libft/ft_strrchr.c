/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 18:40:14 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 18:40:16 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
/**
 * ft_strrchr - Locates the last occurrence of a character in a string.
 *
 * @s: The string in which to search for the character.
 * @c: The character to be located, passed as an int but interpreted as a char.
 *
 * This function searches for the last occurrence of the character `c` (converted to a char)
 * in the string `s`. The null-terminator (`'\0'`) is considered part of the string, so if
 * `c` is `'\0'`, the function returns a pointer to the null terminator of the string.
 *
 * If `c` is found, the function returns a pointer to the last occurrence of `c` in the string.
 * If `c` is not found, the function returns NULL.
 *
 * Return: A pointer to the last occurrence of `c` in the string `s`, or NULL if `c` is not found.
 */
{
	char	*ptr;
	char	sym;

	ptr = (char *)s + ft_strlen(s);
	sym = (char)c;
	while (ptr >= s)
	{
		if (*ptr == sym)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
