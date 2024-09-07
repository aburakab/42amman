/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:11:41 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 20:11:49 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
/**
 * ft_strstr - Locates the first occurrence of a substring in a string.
 *
 * @haystack: The string in which to search for the substring (needle).
 * @needle: The substring to be located in the haystack.
 *
 * This function searches for the first occurrence of the substring `needle`
 * in the string `haystack`. The terminating null bytes (`'\0'`) are not compared.
 * If `needle` is an empty string, the function returns `haystack`. If `needle`
 * is not found in `haystack`, the function returns NULL. Otherwise, it returns
 * a pointer to the first character of the first occurrence of `needle` in `haystack`.
 *
 * Return: A pointer to the first occurrence of `needle` in `haystack`, or NULL
 * if `needle` is not found.
 */
{
	char	*h;
	size_t	needle_len;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return (h);
	i = 0;
	while (h[i])
	{
		j = 0;
		while (needle[j] && needle[j] == h[i + j])
			j++;
		if (j == needle_len)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
