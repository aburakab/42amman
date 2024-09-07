/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:09:29 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:09:30 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
/**
 * ft_strnew - Allocates and initializes a new string of a given size.
 *
 * @size: The size of the string to allocate (number of characters).
 *
 * This function allocates memory for a new string of `size + 1` bytes. The extra byte
 * is used to null-terminate the string. The allocated memory is initialized to 0 (all
 * characters set to '\0'). This ensures that the string is properly null-terminated,
 * even if no characters are written to it. If memory allocation fails, the function
 * returns NULL.
 *
 * The caller is responsible for freeing the memory allocated for the new string.
 *
 * Return: A pointer to the newly allocated string, or NULL if memory allocation fails.
 */
{
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}
