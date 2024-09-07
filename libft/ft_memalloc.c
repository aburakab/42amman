/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:00:08 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:00:09 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
/**
 * ft_memalloc - Allocates and initializes a block of memory.
 *
 * @size: The size of the memory block to allocate in bytes.
 *
 * This function allocates a block of memory of `size` bytes using malloc. The allocated
 * memory is initialized to 0 (all bytes set to zero) to ensure that the memory is clean
 * and does not contain any garbage values. If memory allocation fails, the function
 * returns NULL.
 *
 * The caller is responsible for freeing the memory allocated by this function to avoid
 * memory leaks.
 *
 * Return: A pointer to the newly allocated and zero-initialized memory block, or NULL
 * if memory allocation fails.
 */
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
