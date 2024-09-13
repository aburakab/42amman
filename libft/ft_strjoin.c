/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:40:36 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 16:40:37 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	do_join(const char *s1, const char *s2,
					char *result, const char *start)
{
	if (start == NULL)
		return ;
	if (s1)
		while (*s1)
			*result++ = *s1++;
	if (s2)
		while (*s2)
			*result++ = *s2++;
	*result = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
/**
 * ft_strjoin - Concatenates two strings.
 *
 * @s1: The destination string to which `s2` will be appended.
 * @s2: The source string to be appended to `s1`.
 *
 * This function appends the string `s2` to the end of the string `s1`. The null terminator
 * of `s1` is overwritten, and a new null terminator is added at the end of the concatenated
 * string. The destination string `s1` must have enough space to hold both its original content
 * and the content of `s2`. The source string `s2` remains unchanged.
 *
 * Return: A pointer to the destination string `s1`, now containing the concatenated result.
 */
{
	char	*result;
	char	*start;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (NULL);
	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = ft_strlen(s1);
	if (s2)
		len2 = ft_strlen(s2);
	result = ft_strnew((len1) + (len2));
	start = result;
	do_join(s1, s2, result, start);
	return (start);
}
