/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 03:07:09 by aantela-          #+#    #+#             */
/*   Updated: 2026/04/27 03:09:48 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*#include <stdio.h>

int main(void)
{
    char    *str = "hello, world";
    char    *result;

    result = ft_strchr(str, 'o');
    if (result)
        printf("Found: %s\n", result);  // "o, world"

    result = ft_strchr(str, 'z');
    if (!result)
        printf("Not found\n");          // "Not found"

    result = ft_strchr(str, '\0');
    printf("Null term pointer: %p\n", result); // points to end of string
}*/
