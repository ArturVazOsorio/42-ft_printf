/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 05:49:40 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/02 07:07:19 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (!big && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		n = 0;
		while (little[n] && big[n + i] == little[n] && (i + n) < len)
			n++;
		if (little[n] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n\n",ft_strnstr("lorem ipsum dolor sit amet", "sit", 25));
	printf("%s",ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 10));
}*/
