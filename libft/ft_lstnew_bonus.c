/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:17:09 by nveneros          #+#    #+#             */
/*   Updated: 2025/01/15 17:02:37 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mylib42.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*el;

	el = malloc(sizeof(t_list));
	if (el == NULL)
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}

// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew("salut je test");
// 	printf("first el %s", (char *)list->content);
// }