/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:01:20 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 14:01:24 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
/**
 * ft_bzero - Sets a block of memory to zero.
 *
 * @s: The pointer to the memory block to be zeroed.
 * @n: The number of bytes to set to zero.
 *
 * This function writes `n` zeroed bytes to the memory area pointed to by `s`.
 * It effectively clears a block of memory by setting all bytes in the specified
 * range to `0`. If `n` is zero, the function does nothing.
 *
 * This function is often used to initialize memory before use or to reset
 * memory content to a known state.
 *
 * Return: None (void).
 */
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}
