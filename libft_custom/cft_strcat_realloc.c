/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cft_strcat_realloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:06 by nveneros          #+#    #+#             */
/*   Updated: 2025/01/16 09:14:11 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

/**
 * Function for concat 2strings and realloc the first 
 * 
 * s1 first string, is source for free.
 * s2 second string, is only source.
 * return a new string result concatenation of s1 && s2.
 */

char	*cft_strcat_realloc(char *s1, char *s2)
{
	char	*output;
	int		i;
	int		j;

	i = 0;
	j = 0 ;
	output = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[i])
	{
		output[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		output[i + j] = s2[j];
		j++;
	}
	output[i + j] = '\0';
	free(s1);
	return (output);
}
