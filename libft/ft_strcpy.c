/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:00:47 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:00:51 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
/**
 * ft_strcpy - Copies a string to another string.
 *
 * @dst: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 *
 * This function copies the string pointed to by `src` (including the null terminator `\0`)
 * into the buffer pointed to by `dst`. The strings must not overlap, and the destination
 * buffer `dst` must be large enough to hold the source string, including the null terminator.
 *
 * The function returns `dst`, which now contains a copy of the string `src`.
 *
 * Return: A pointer to the destination string `dst`.
 */
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
