/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:02:13 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 15:02:15 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
/**
 * ft_strncpy - Copies up to `len` characters from a string.
 *
 * @dst: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * @len: The maximum number of characters to copy.
 *
 * This function copies up to `len` characters from the string `src` to `dst`. If the length
 * of `src` is less than `len`, the remaining characters in `dst` are filled with null bytes (`'\0'`).
 * Unlike `strcpy`, this function does not automatically null-terminate `dst` if `src` is longer
 * than `len`, so it's the caller's responsibility to ensure that the destination string is properly
 * null-terminated if needed.
 *
 * If `src` is shorter than `len`, null characters will be written to `dst` until `len` characters
 * are copied.
 *
 * Return: A pointer to the destination string `dst`.
 */
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
