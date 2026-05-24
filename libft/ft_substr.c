/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:55:01 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/14 07:23:14 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*sub;

	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	if (len > 0)
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/*#include <stdio.h>

int main(void)
{
    char *result;

    // Teste 1 — caso normal
    result = ft_substr("Hello, World!", 7, 5);
    printf("Teste 1: '%s' (esperado: 'World')\n", result);
    free(result);

    // Teste 2 — start além do fim da string
    result = ft_substr("Hello", 10, 3);
    printf("Teste 2: '%s' (esperado: '')\n", result);
    free(result);

    // Teste 3 — len maior que o resto da string
    result = ft_substr("Hello", 3, 100);
    printf("Teste 3: '%s' (esperado: 'lo')\n", result);
    free(result);

    // Teste 4 — start = 0, copia tudo
    result = ft_substr("Hello", 0, 5);
    printf("Teste 4: '%s' (esperado: 'Hello')\n", result);
    free(result);

    // Teste 5 — len = 0
    result = ft_substr("Hello", 1, 0);
    printf("Teste 5: '%s' (esperado: '')\n", result);
    free(result);

    // Teste 6 — string vazia
    result = ft_substr("", 0, 5);
    printf("Teste 6: '%s' (esperado: '')\n", result);
    free(result);

    return (0);
}*/
