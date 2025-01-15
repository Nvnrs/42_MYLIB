/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:57:08 by nveneros          #+#    #+#             */
/*   Updated: 2025/01/15 17:02:37 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <sys/stat.h>
// #include <fcntl.h>

// int	main(void)
// {
//	
// 	// TEST FILE
// 	// int	fd;
// 	// fd = open("e.txt", O_RDWR);
// 	// if (fd == -1)
// 	// 	return -1;
//
// 	// int fd = 1;
// 	// ft_putchar_fd('c', fd);
// 	return (0);
// }