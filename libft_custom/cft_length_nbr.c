/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cft_length_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:41:02 by nveneros          #+#    #+#             */
/*   Updated: 2025/01/15 17:03:19 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

unsigned int	cft_length_nbr(long nb)
{
	unsigned int	length;

	length = 0;
	if (nb < 0)
	{
		length++;
		nb = nb * -1;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		length++;
	}
	length++;
	return (length);
}
