/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:26:18 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:26:20 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
/**
 * ft_lstadd - Adds a new element at the beginning of a linked list.
 *
 * @alst: A pointer to the pointer of the first element of the linked list.
 * @new: The new element to be added to the list.
 *
 * This function adds the element `new` to the beginning of the linked list. The `new` element
 * becomes the new first element, and its `next` pointer is set to point to the previous first
 * element of the list (i.e., `*alst`). If `*alst` is NULL, this means the list was empty, and
 * `new` becomes the only element in the list.
 *
 * After the addition, `*alst` is updated to point to the new element.
 *
 * Return: None (void).
 */
{
	if (alst)
	{
		if (new)
			new->next = *alst;
		*alst = new;
	}
}
