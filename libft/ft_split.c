/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:09:23 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 19:09:24 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_lst(char **lst, int i)
{
	while (i >= 0)
		free(lst[i--]);
	free(lst);
	return (NULL);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	set_word(char **lst, char const *s, char c, int i)
{
	size_t	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	lst[i] = ft_substr(s, 0, word_len);
	return (word_len);
}

static char	**malloc_list(char const *s, char c)
{
	char	**lst;

	lst = (char **)ft_malloc_gc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	return (lst);
}

/**
 * @brief Splits a string into an array of substrings using a delimiter.
 *
 * This function takes a string `s` and splits it into an array of
 * null-terminated substrings, separated by the character `c`.
 * The array of substrings is dynamically allocated, and the last
 * element of the array is set to `NULL` to indicate the end.
 *
 * @param s The input string to be split.
 * @param c The delimiter character used to separate substrings in the string.
 * @return char** A null-terminated array of substrings. If memory allocation
 * fails or if `s` is NULL, the function returns NULL.
 *
 * @note The caller is responsible for freeing the memory allocated for the
 * array and the individual substrings.
 *
 * @example
 * char **result = ft_split("Hello,World,42", ',');
 * The resulting array would be:
 * result[0] = "Hello"
 * result[1] = "World"
 * result[2] = "42"
 * result[3] = NULL
 */
char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;
	size_t	word_len;

	if (!s)
		return (NULL);
	lst = malloc_list(s, c);
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = set_word(lst, s, c, i);
			if (!lst[i++])
				return (free_lst(lst, i - 2));
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
