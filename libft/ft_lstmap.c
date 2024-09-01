/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:44:19 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:44:20 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_del(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

static void	set(t_list *elem, t_list **lst, t_list **prev)
{
	(*lst) = (*lst)->next;
	(*prev) = elem;
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
/**
 * @brief Iterates over a list and applies a function to each element,
 * creating a new list with the results.
 *
 * This function takes a linked list `lst` and applies the function `f` to each
 * element's content, creating a new list with the results of `f`. If the allocation
 * of any element in the new list fails, the entire new list is deleted using the
 * `del` function, and `NULL` is returned.
 *
 * @param lst The linked list to iterate over.
 * @param f The function to apply to each element's content.
 * @param del The function to delete the content of an element if needed.
 *
 * @return
 * - A new list where each element is the result of applying `f` to the content of
 *   the corresponding element of `lst`.\n
 * - `NULL` if memory allocation fails for any new element.
 */
{
	t_list	*elem;
	t_list	*prev;
	t_list	*head;

	prev = NULL;
	head = NULL;
	if (f)
	{
		while (lst)
		{
			elem = f(lst);
			if (!elem)
			{
				if (head)
					ft_lstdel(&head, &ft_del);
				return (NULL);
			}
			if (prev)
				prev->next = elem;
			else
				head = elem;
			set(elem, &lst, &prev);
		}
	}
	return (head);
}
