/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:47:51 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 15:47:52 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	char	*ptr;

	ptr = ft_memchr(s, '\0', maxlen);
	if (ptr)
		return ((size_t)(ptr - s));
	return (maxlen);
}
