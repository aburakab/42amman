/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:01:02 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 14:01:10 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
/**
 * ft_memset - Fills a block of memory with a specified value.
 *
 * @b: The pointer to the memory area to be filled.
 * @c: The byte value to fill the memory area with (converted to unsigned char).
 * @len: The number of bytes to be filled.
 *
 * This function fills the first `len` bytes of the memory area pointed to by `b` with the
 * constant byte value `c` (after converting it to an unsigned char). It is commonly used to
 * initialize or reset memory.
 *
 * Return: A pointer to the memory area `b`.
 */
{
	unsigned char	*ptr;
	unsigned char	sym;

	ptr = (unsigned char *)b;
	sym = (unsigned char)c;
	while (len--)
		*ptr++ = sym;
	return (b);
}
