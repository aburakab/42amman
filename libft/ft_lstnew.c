/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:06:31 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:06:32 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
/**
 * ft_lstnew - Allocates and initializes a new linked list element.
 *
 * @content: A pointer to the content to be stored in the new element.
 * @content_size: The size of the content to be stored.
 *
 * This function allocates memory (with `malloc`) for a new linked list element of type `t_list`.
 * The `content` field is initialized to the value of the `content` parameter, and the `content_size`
 * field is set to the value of `content_size`. If `content` is NULL, the function sets the `content`
 * field to `NULL` and `content_size` to 0.
 *
 * The `next` pointer of the new element is initialized to `NULL`.
 *
 * Return: A pointer to the newly allocated list element, or NULL if memory allocation fails.
 */
{
	t_list	*res;

	res = (t_list *) ft_malloc_gc(sizeof(t_list));
	if (res)
	{
		if (!content)
		{
			res->content = NULL;
			res->content_size = 0;
		}
		else
		{
			res->content = ft_malloc_gc(content_size);
			if (!(res->content))
			{
				free(res);
				return (NULL);
			}
			ft_memcpy(res->content, content, content_size);
			res->content_size = content_size;
		}
		res->next = NULL;
	}
	return (res);
}
