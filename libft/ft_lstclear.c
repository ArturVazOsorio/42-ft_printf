/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 02:43:43 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/12 02:58:42 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*now;
	t_list	*temp_next;

	now = *lst;
	while (now != NULL)
	{
		temp_next = now->next;
		ft_lstdelone(now, del);
		now = temp_next;
	}
	*lst = NULL;
}
