/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_colors_extra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:31:39 by nveneros          #+#    #+#             */
/*   Updated: 2025/04/08 11:53:35 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

void	print_yellow(void)
{
	printf("\033[0;35m");
}

void	print_cyan(void)
{
	printf("\033[0;36m");
}

void	print_purple(void)
{
	printf("\033[0;35m");
}

void	print_reset(void)
{
	printf("\033[0m");
}
