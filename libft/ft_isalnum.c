/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:31:03 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/13 02:38:34 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/** 
 * @brief utilizando a biblioteca do libft chama 2 funcao para validacao*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_isalnum('a'));
	printf("%d",ft_isalnum('+'));
	printf("%d",ft_isalnum('Z'));
	printf("%d",ft_isalnum('-'));
	printf("%d",ft_isalnum('9'));
	printf("%d",ft_isalnum('!'));
}*/
