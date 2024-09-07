/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:39:07 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:39:12 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
/**
 * ft_putchar_fd - Outputs a character to the given file descriptor.
 *
 * @c: The character to be written.
 * @fd: The file descriptor where the character will be written.
 *
 * This function writes the character `c` to the specified file descriptor `fd`. The file
 * descriptor can refer to standard output (1), standard error (2), or any valid file descriptor
 * for writing.
 *
 * Return: None (void).
 */
{
	(void)!write(fd, &c, 1);
}
