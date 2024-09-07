/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:26:19 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:26:21 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
/**
 * ft_striter - Applies a function to each character of a string.
 *
 * @s: The string to iterate over.
 * @f: A function that is applied to each character of the string.
 *
 * This function takes a string `s` and a function `f` as arguments. It applies the
 * function `f` to each character of the string `s`. The function `f` takes a pointer
 * to a character as its argument and can modify the string directly, as it operates
 * on each character by reference.
 *
 * The iteration stops when the null terminator (`'\0'`) of the string is reached.
 * If the input string `s` or the function `f` is NULL, the function does nothing.
 *
 * Return: None (void).
 */
{
	if (s && f)
		while (*s)
			f(s++);
}
