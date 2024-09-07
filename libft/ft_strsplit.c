/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:09:23 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 19:09:24 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *str, char delimiter)
{
	size_t	words;

	words = 0;
	while (*str)
	{
		while (*str == delimiter)
			str++;
		if (*str)
		{
			words++;
			while (*str && *str != delimiter)
				str++;
		}
	}
	return (words);
}

static char	*ft_get_word(char *word, char delimiter)
{
	char	*start;

	start = word;
	while (*word && *word != delimiter)
		word++;
	*word = '\0';
	return (ft_strdup(start));
}

/*static void	ft_free_words(char **words, size_t i)
{
	while (i--)
		ft_strdel(&(words[i]));
	free(*words);
}*/

static int	add_word_then_next(char **words, char *word, char **str, size_t *i)
{
	size_t	word_index;

	if (word != NULL)
	{
		words[(*i)] = word;
		(*str) += (ft_strlen(word) + 1);
		(*i)++;
	}
	else
	{
		word_index = *i;
		while (word_index--)
			ft_strdel(&(words[word_index]));
		free(*words);
		return (0);
	}
	return (1);
}

static char	**ft_get_words(char *str, char delimiter, size_t words_count)
{
	char	**words;
	char	*word;
	size_t	i;

	i = 0;
	words = (char **)ft_memalloc(sizeof(char *) * (words_count + 1));
	if (words)
	{
		while (i < words_count)
		{
			while (*str == delimiter)
				str++;
			if (!*str)
				continue ;
			word = ft_get_word(str, delimiter);
			if (!add_word_then_next(words, word, &str, &i))
				return (NULL);
		}
		words[i] = NULL;
	}
	return (words);
}

char	**ft_strsplit(char const *str, char delimiter)
/**
 * ft_strsplit - Splits a string into an array of strings using a delimiter.
 *
 * @str: The input string to be split.
 * @delimiter: The delimiter character used to split the string.
 *
 * This function takes a string 'str' and a character 'delimiter' as the delimiter.
 * It returns a dynamically allocated array of strings (char **) where each
 * element is a substring of 'str' separated by the delimiter 'delimiter'. The array
 * is terminated by a NULL pointer to mark the end.
 *
 * The function ignores consecutive occurrences of the delimiter, meaning
 * empty substrings between consecutive delimiters are not included in the
 * resulting array. Memory for both the array and the substrings is allocated
 * dynamically, so it is the caller'str responsibility to free the memory.
 *
 * Return: A pointer to the array of split strings (char **), or NULL if
 * memory allocation fails or if the input string 'str' is NULL.
 */
{
	char	**words;
	char	*line;

	line = ft_strdup((char *)str);
	if (!str || !line)
		return (NULL);
	words = ft_get_words(line, delimiter, ft_count_words(line, delimiter));
	free(line);
	return (words);
}
