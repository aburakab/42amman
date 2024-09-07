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

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
/**
 * @brief Trims characters from the start and end of the string s1 that are found in the set.
 * 
 * This function allocates a new string with leading and trailing characters
 * removed that are part of the set of characters passed in `set`.
 * 
 * @param s1 The input string to be trimmed.
 * @param set The set of characters to remove from the start and end of the string.
 * @return A newly allocated trimmed string, or NULL on memory allocation failure.
 */
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed_str = (char *)ft_memalloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strncpy(trimmed_str, s1 + start, end - start);
	return (trimmed_str);
}
