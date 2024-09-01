/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:02:16 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 14:02:17 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
/**
 * @brief Copies `len` bytes from memory area `src` to memory area `dst`.
 *
 * This function copies `len` bytes from the memory area `src` to the memory area `dst`.
 * Unlike `ft_memcpy`, `ft_memmove` is safe to use when the source and destination memory
 * areas overlap, because it copies the bytes in a non-destructive manner.
 *
 * @param dst The destination memory area where the bytes are to be copied.
 * @param src The source memory area from which the bytes are to be copied.
 * @param len The number of bytes to copy.
 *
 * @return A pointer to the destination memory area `dst`.
 *
 * @note If `dst` and `src` overlap, the function ensures that the original bytes in
 * `src` are copied to `dst` before they are overwritten.
 */
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
