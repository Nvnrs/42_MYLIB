/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cft_putnbr_ui_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:12:19 by nveneros          #+#    #+#             */
/*   Updated: 2025/01/15 17:03:14 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

void	cft_putnbr_ui_fd(unsigned int nb, int fd)
{
	if (nb >= 10)
	{
		cft_putnbr_ui_fd(nb / 10, fd);
		cft_putnbr_ui_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
	}
}
