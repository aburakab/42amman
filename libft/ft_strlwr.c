/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlwr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:31:58 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 17:32:00 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlwr(char *s)
{
	size_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = ft_tolower(s[i]);
			i++;
		}
	}
	return (s);
}
