/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:32:16 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:32:17 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
/**
 * ft_lstiter - Iterates through a linked list and applies a function to each element.
 *
 * @lst: The pointer to the first element of the linked list.
 * @f: The function to apply to each element of the list.
 *
 * This function traverses the linked list starting from the element `lst`, and applies
 * the function `f` to each element in the list. The function `f` takes a pointer to the
 * current element (`t_list *elem`) as an argument, allowing the caller to modify the
 * elements of the list if needed.
 *
 * If the list is empty (`lst` is NULL), the function does nothing.
 *
 * Return: None (void).
 */
{
	if (f)
	{
		while (lst)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
