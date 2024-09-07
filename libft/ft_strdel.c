/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:14:17 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:14:18 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strdel(char **as)
/**
 * ft_strdel - Frees the memory of a string and sets the pointer to NULL.
 *
 * @as: A pointer to the string (char *) that needs to be deleted.
 *
 * This function takes a double pointer to a string (char **as), frees the memory
 * that the string points to, and then sets the pointer itself to NULL to avoid
 * dangling pointers. It ensures that the memory is properly deallocated and
 * the pointer is safely reset. The function does nothing if the input pointer
 * or the pointer it points to is NULL.
 *
 * Return: None (void).
 */
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}
