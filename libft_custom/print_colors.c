/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_colors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:31:39 by nveneros          #+#    #+#             */
/*   Updated: 2025/04/08 11:53:28 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

void	print_black(void)
{
	printf("\033[0;30m");
}

void	print_white(void)
{
	printf("\033[0;37m");
}

void	print_blue(void)
{
	printf("\033[0;34m");
}

void	print_red(void)
{
	printf("\033[0;31m");
}

void	print_green(void)
{
	printf("\033[0;32m");
}
