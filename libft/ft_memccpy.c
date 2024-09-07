/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:01:50 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 14:01:51 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
/**
 * ft_memccpy - Copies memory until a specified character is found or a limit is reached.
 *
 * @dst: The destination buffer where the memory will be copied to.
 * @src: The source buffer from which the memory will be copied.
 * @c: The character to stop copying at (as an unsigned char).
 * @n: The maximum number of bytes to copy.
 *
 * This function copies up to `n` bytes from the memory area `src` to `dst`.
 * If the character `c` (converted to unsigned char) is encountered in the source
 * buffer, the function stops copying and returns a pointer to the next character
 * in the destination buffer after `c`. If `c` is not found in the first `n` bytes,
 * the function copies all `n` bytes and returns `NULL`.
 *
 * Return: A pointer to the byte after `c` in the destination buffer if `c` is found,
 * or `NULL` if `c` is not found within the first `n` bytes.
 */
{
	unsigned char	sym;
	unsigned char	*d;
	unsigned char	*s;

	sym = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
		if (*(d - 1) == sym)
			return (d);
	}
	return (NULL);
}
