/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:02:34 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 14:02:35 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/**
 * ft_memchr - Locates the first occurrence of a byte in a memory block.
 *
 * @s: The memory block to search.
 * @c: The byte to search for, interpreted as an unsigned char.
 * @n: The number of bytes to examine in the memory block.
 *
 * This function scans the first `n` bytes of the memory block pointed to by `s`
 * for the first occurrence of the byte `c` (converted to an unsigned char).
 * If the byte `c` is found, a pointer to the matching byte in the memory block
 * is returned. If `c` is not found within the first `n` bytes, the function
 * returns `NULL`.
 *
 * Return: A pointer to the first occurrence of the byte `c` in the memory block,
 * or `NULL` if `c` is not found within the first `n` bytes.
 */
{
	unsigned char	*ptr;
	unsigned char	sym;

	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*ptr == sym)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
