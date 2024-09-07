/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:32:38 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 16:32:40 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
/**
 * ft_strsub - Extracts a substring from a given string.
 *
 * @s: The input string from which the substring is extracted.
 * @start: The starting index of the substring in the input string.
 * @len: The length of the substring to be extracted.
 *
 * This function allocates (with malloc) and returns a new string which is a
 * substring of the input string 's'. The substring begins at index 'start'
 * and is of length 'len'. The substring is null-terminated. If the allocation
 * fails or if the input string 's' is NULL, the function returns NULL.
 *
 * The caller is responsible for freeing the memory allocated for the returned
 * substring to avoid memory leaks.
 *
 * Return: A pointer to the newly allocated substring, or NULL if the allocation
 * fails or if 's' is NULL.
 */
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s || start + len > ft_strlen(s))
		return (NULL);
	result = ft_strnew(len);
	if (result)
	{
		while (len)
		{
			result[i++] = s[start++];
			len--;
		}
		result[i] = '\0';
	}
	return (result);
}
