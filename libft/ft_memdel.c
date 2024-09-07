/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:04:36 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:04:38 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_memdel(void **ap)
/**
 * ft_memdel - Frees memory and sets the pointer to NULL.
 *
 * @ap: A pointer to the memory block to be freed.
 *
 * This function takes a pointer to a memory block (`void **ap`), frees the memory
 * it points to (using `free()`), and then sets the pointer itself to `NULL` to avoid
 * dangling pointers. If `ap` or the memory pointed to by `*ap` is NULL, the function
 * does nothing.
 *
 * This is useful for safely freeing dynamically allocated memory and ensuring
 * that the pointer is not left pointing to invalid memory.
 *
 * Return: None (void).
 */
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
