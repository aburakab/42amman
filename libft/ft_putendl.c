/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:18:10 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:18:11 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
/**
 * ft_putendl - Outputs a string followed by a newline to the standard output.
 *
 * @s: The null-terminated string to be written.
 *
 * This function writes the string `s` to the standard output (file descriptor 1), followed by
 * a newline character (`\n`). The function outputs the string character by character until
 * the null-terminator (`\0`) is reached, and then writes a newline. If the string `s` is `NULL`,
 * the function does nothing.
 *
 * Return: None (void).
 */
{
	if (s)
		write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}
