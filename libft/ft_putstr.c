/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:14:58 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:14:59 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *s)
/**
 * ft_putstr - Outputs a string to the standard output.
 *
 * @s: The null-terminated string to be written.
 *
 * This function writes the string `s` to the standard output (file descriptor 1).
 * It outputs the string character by character until it reaches the null terminator (`\0`).
 * If the string `s` is `NULL`, the function does nothing.
 *
 * Return: None (void).
 */
{
	if (s)
		write(1, s, ft_strlen(s));
}
