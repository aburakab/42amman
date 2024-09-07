/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:44:35 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:44:37 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
/**
 * ft_putendl_fd - Outputs a string followed by a newline to the given file descriptor.
 *
 * @s: The null-terminated string to be written.
 * @fd: The file descriptor where the string and newline will be written.
 *
 * This function writes the string `s` to the file descriptor `fd`, followed by a newline
 * character (`\n`). The string is output character by character until the null terminator (`\0`)
 * is reached, and then a newline is written. If the string `s` is `NULL`, the function does nothing.
 *
 * The file descriptor `fd` can refer to standard output (1), standard error (2), or any valid file descriptor.
 *
 * Return: None (void).
 */
{
	if (s)
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
