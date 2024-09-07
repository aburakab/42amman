/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:20:49 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:20:50 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
/**
 * ft_lstdel - Deletes an entire linked list and frees its memory.
 *
 * @alst: A pointer to the pointer of the first element of the linked list.
 * @del: A function pointer to a function used to delete the content of each element.
 *
 * This function deletes and frees each element of the linked list starting from the element
 * pointed to by `alst`. For each element, it calls the `del` function to free the content
 * (using `del(content, content_size)`) and then frees the memory for the element itself.
 *
 * After freeing all the elements, the pointer to the list is set to `NULL` to avoid dangling pointers.
 *
 * Return: None (void).
 */
{
	if (alst && *alst && del)
	{
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(&(*alst), del);
	}
}
