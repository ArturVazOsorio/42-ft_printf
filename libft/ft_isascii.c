/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:36:56 by aantela-          #+#    #+#             */
/*   Updated: 2026/04/20 14:42:44 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d",ft_isascii('a'));
	printf("%d",ft_isascii(128));
	printf("%d",ft_isascii('z'));
	printf("%d",ft_isascii(300));
	printf("%d",ft_isascii('+'));
	printf("%d",ft_isascii(256));
}*/
