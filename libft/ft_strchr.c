/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 18:40:01 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 18:40:04 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
/**
 * @brief Locates the first occurrence of the character `c` in the string `s`.
 *
 * This function searches for the first occurrence of the character `c` in the string `s`.
 * The null terminator `\0` is considered part of the string, so if `c` is `\0`,
 * the function returns a pointer to the null terminator.
 *
 * @param s The string in which to search for the character `c`.
 * @param c The character to search for, passed as an `int` but interpreted as a `char`.
 *
 * @return
 * - A pointer to the first occurrence of the character `c` in the string `s`.
 * - `NULL` if the character `c` is not found in the string.
 */
{
	char	*ptr;
	char	sym;

	ptr = (char *)s;
	sym = (char)c;
	while (*ptr && *ptr != sym)
		ptr++;
	if (*ptr == sym)
		return (ptr);
	return (NULL);
}
