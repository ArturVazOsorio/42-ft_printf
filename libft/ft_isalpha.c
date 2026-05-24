/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:30:45 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/13 02:39:00 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_isalpha('A'));
	printf("%d",ft_isalpha('1'));
	printf("%d",ft_isalpha('b'));
	printf("%d",ft_isalpha('2'));
	printf("%d",ft_isalpha('z'));
	printf("%d",ft_isalpha('0'));
}*/
