/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:41:34 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:41:35 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
/**
 * ft_putstr_fd - Outputs a string to the given file descriptor.
 *
 * @s: The null-terminated string to be written.
 * @fd: The file descriptor where the string will be written.
 *
 * This function writes the string `s` to the file descriptor `fd`. It outputs
 * the string character by character until it reaches the null-terminator (`\0`).
 * The function does nothing if the string `s` is `NULL`.
 *
 * The file descriptor `fd` can refer to standard output (1), standard error (2),
 * or any valid file descriptor.
 *
 * Return: None (void).
 */
{
	if (s)
		(void)!write(fd, s, ft_strlen(s));
}
