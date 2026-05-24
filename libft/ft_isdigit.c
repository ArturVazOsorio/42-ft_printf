/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:13:14 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/12 05:25:39 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_isdigit('a'));
	printf("%d",ft_isdigit('a'));
	printf("%d",ft_isdigit('2'));
	printf("%d",ft_isdigit('a'));
	printf("%d",ft_isdigit('1'));
	printf("%d",ft_isdigit('b'));
	printf("%d",ft_isdigit('3'));
	printf("%d",ft_isdigit('c'));
}*/
