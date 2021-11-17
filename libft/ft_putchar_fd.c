/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:07:58 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:08:26 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
    int fd;
    fd = open("tett.txt", O_CREAT | O_RDWR);
    ft_putchar_fd('a', fd);
}
*/