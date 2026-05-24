/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:23:49 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/10 18:30:17 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char teste[] = "ababaaaMy Name Is Simonbbaaaaab";
	char tes[] = "ab";
	printf("%s,\n", ft_strtrim(teste, tes));
	
}*/
