/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:05:41 by aantela-          #+#    #+#             */
/*   Updated: 2026/04/22 14:23:50 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_temp;

	ptr_temp = (unsigned char *) s;
	while (n > 0)
	{
		*ptr_temp = (unsigned char) c;
		ptr_temp++;
		n--;
	}
	return (s);
}
