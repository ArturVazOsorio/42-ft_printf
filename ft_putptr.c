/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 04:49:37 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/24 19:26:55 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void	*ptr)
{
	int	len;

	if (!ptr)
		return (ft_putstr("(nil)"));
	len = 0;
	len = len + ft_putstr("0x");
	len = len + ft_puthex((unsigned long)ptr, 'x');
	return (len);
}
