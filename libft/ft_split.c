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

#include <stdlib.h>

static int	count_words(const char *str, char delimiter)
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
{
	while (word_index-- > 0)
		free(result[word_index]);
	free(result);
}

static void	process_word(char const *str, char delimiter,
							char **result, int *ptr_word_index)
{
	int	i;
	int	start;
	int	word_index;

	i = 0;
	start = -1;
	word_index = *ptr_word_index;
	while (str[i])
	{
		if (str[i] != delimiter && start == -1)
			start = i;
		else if ((str[i] == delimiter || str[i + 1] == '\0') && start != -1)
		{
			if (str[i + 1] == '\0' && str[i] != delimiter)
				i++;
			result[word_index] = allocate_word(str, start, i);
			if (!result[word_index])
				return (free_split(result, word_index));
			word_index++;
			start = -1;
		}
		i++;
	}
	*ptr_word_index = word_index;
}

char	**ft_split(char const *str, char delimiter)
{
	char	**result;
	int		word_index;
	int		word_count;

	if (!str)
		return (NULL);
	word_count = count_words(str, delimiter);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	word_index = 0;
	process_word(str, delimiter, result, &word_index);
	if (!result[word_index])
	{
		free(result);
		return (NULL);
	}
	result[word_index] = NULL;
	return (result);
}
