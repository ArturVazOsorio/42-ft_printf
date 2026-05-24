/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:15:43 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/13 04:24:19 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*duplicate;

	len = (ft_strlen(s) + 1);
	duplicate = ft_calloc(len, sizeof(char));
	if (!duplicate)
		return (NULL);
	ft_strlcpy(duplicate, s, len);
	return (duplicate);
}

/*#include <stdio.h>
int main(void)
{
	char src[] = "Hello World!";
	char *str;
	str = ft_strdup(src);
	if (str)
	{
		printf("%s\n", str);
		free(str); // Clean up your mess!
    }
    return (0);
}*/
