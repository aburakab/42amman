/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:47:49 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 16:47:50 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
/**
 * ft_strtrim - Trims whitespace from the beginning and end of a string.
 *
 * @s: The input string to be trimmed.
 *
 * This function allocates (with malloc) and returns a copy of the string `s` with
 * leading and trailing whitespace characters removed. Whitespace characters are
 * defined as spaces (' '), tabs ('\t'), and newlines ('\n'). If the string consists
 * entirely of whitespace characters, an empty string is returned. If the input
 * string `s` is NULL or if memory allocation fails, the function returns NULL.
 *
 * The caller is responsible for freeing the memory allocated for the returned trimmed
 * string to avoid memory leaks.
 *
 * Return: A pointer to the newly allocated trimmed string, or NULL if memory
 * allocation fails or if the input string `s` is NULL.
 */
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	finish;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	finish = ft_strlen(s);
	while (ft_isblank(s[start]) || s[start] == '\n')
		start++;
	while (finish && (ft_isblank(s[finish - 1]) || s[finish - 1] == '\n'))
		finish--;
	if (finish > start)
		result = ft_strnew(finish - start);
	else
		result = ft_strnew(0);
	if (result)
	{
		while (start < finish)
			result[i++] = s[start++];
		result[i] = '\0';
	}
	return (result);
}
