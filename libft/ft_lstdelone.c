/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:17:03 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:17:04 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
/**
 * ft_lstdelone - Deletes a single element of a linked list.
 *
 * @alst: A pointer to the pointer of the element to be deleted.
 * @del: A function pointer to a function used to delete the content of the element.
 *
 * This function takes as parameters the address of a pointer to a linked list element (`alst`)
 * and a function pointer `del` to delete the content of that element. The `del` function
 * is called to free the content of the element (using `del(content, content_size)`), and
 * then the memory for the element itself is freed. Finally, the pointer to the element is set to `NULL`
 * to avoid a dangling pointer.
 *
 * This function only deletes the specific element pointed to by `alst`, not the entire list.
 * If the list or the element does not exist (`alst` or `*alst` is NULL), the function does nothing.
 *
 * Return: None (void).
 */
{
	if (alst && *alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
