/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:54:10 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 15:54:11 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
/**
 * ft_lstadd_back - Adds a new element to the end of a linked list.
 *
 * @alst: A pointer to the pointer of the first element of the linked list.
 * @new: The new element to be added to the end of the list.
 *
 * This function adds the element `new` to the end of the linked list. If the list is
 * empty (i.e., `*alst` is NULL), the new element becomes the first element of the list.
 * Otherwise, the function iterates through the list to find the last element and appends
 * the new element to the end.
 *
 * The new element's `next` pointer is set to `NULL` to mark it as the last element.
 *
 * Return: None (void).
 */
{
	t_list	*ptr;

	if (alst && *alst)
	{
		ptr = *alst;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	else if (alst)
		*alst = new;
}
