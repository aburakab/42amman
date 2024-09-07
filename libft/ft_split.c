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
#include <stdlib.h>

static int	count_words(const char *str, char delimiter)
/**
 * @brief Counts the number of substrings separated by the delimiter.
 * 
 * @param str The input string.
 * @param delimiter The character used to separate substrings.
 * @return int The number of substrings.
 */
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*allocate_word(const char *str, int start, int end)
/**
 * @brief Allocates and returns a substring from start to end index.
 * 
 * @param str The input string.
 * @param start The starting index of the substring.
 * @param end The ending index of the substring.
 * @return char* A newly allocated substring.
 */
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **result, int word_index)
/**
 * @brief Frees the allocated memory in case of failure.
 * 
 * @param result The array of strings to free.
 * @param word_index The number of strings to free.
 */
{
	int	i;

	i = 0;
	while (i < word_index)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *str, char delimiter)
/**
 * @brief Splits the string `str` into an array of strings, using the `delimiter`.
 * 
 * The function dynamically allocates memory for each substring and returns
 * an array of strings. Each substring is separated by the delimiter character.
 * 
 * @param str The input string to split.
 * @param delimiter The character used to split the string.
 * @return char** A dynamically allocated array of substrings, or NULL on failure.
 */
{
	char	**result;
	int		i;
	int		start ;
	int		word_index;

	i = 0;
	start = -1;
	word_index = 0;
	result = (char **)ft_memalloc(
			sizeof(char *) * (count_words(str, delimiter) + 1));
	if (!str || !result)
		return (NULL);
	while (str[i])
	{
		if (str[i] != delimiter && start == -1)
			start = i;
		else if ((str[i] == delimiter || str[i + 1] == '\0') && start != -1)
		{
			if (str[i] == delimiter)
				result[word_index] = allocate_word(str, start, i);
			else
				result[word_index] = allocate_word(str, start, i + 1);
			if (!result[word_index++])
			{
				free_split(result, word_index - 1);
				return (NULL);
			}
			start = -1;
		}
		i++;
	}
	result[word_index] = NULL;
	return (result);
}
