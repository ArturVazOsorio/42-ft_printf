/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 06:11:51 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/09 06:20:23 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_total;
	char	*str;

	len_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(len_total, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_total);
	ft_strlcat(str, s2, len_total);
	return (str);
}
