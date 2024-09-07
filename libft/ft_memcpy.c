/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 14:01:33 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 14:01:35 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
/**
 * ft_memcpy - Copies memory from one location to another.
 *
 * @dst: The destination buffer where the memory will be copied.
 * @src: The source buffer from which the memory will be copied.
 * @n: The number of bytes to copy from `src` to `dst`.
 *
 * This function copies `n` bytes from the memory area `src` to the memory area `dst`.
 * The memory areas must not overlap, as the behavior is undefined if they do. If `n` is zero,
 * the function does nothing.
 *
 * Return: A pointer to the destination memory area `dst`.
 */
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
