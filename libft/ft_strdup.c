/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:01:07 by moaljabe          #+#    #+#             */
/*   Updated: 2018/06/30 15:01:09 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
/**
 * ft_strdup - Duplicates a string.
 *
 * @s1: The input string to be duplicated.
 *
 * This function allocates memory (with `malloc`) for a copy of the string `s1` and
 * copies the contents of `s1` into the newly allocated memory. The copied string is
 * null-terminated. If memory allocation fails, the function returns `NULL`.
 *
 * The caller is responsible for freeing the memory allocated for the duplicated string
 * to avoid memory leaks.
 *
 * Return: A pointer to the newly allocated and duplicated string, or NULL if memory
 * allocation fails.
 */
{
	size_t	i;
	char	*result;

	result = ft_strnew(ft_strlen(s1));
	if (result)
	{
		i = 0;
		while (s1[i])
		{
			result[i] = s1[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}
