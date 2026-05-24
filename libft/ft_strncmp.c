/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 05:50:14 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/11 03:22:22 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h> // Função original

// Protótipo da sua função
int ft_strncmp(const char *s1, const char *s2, size_t n);

void rodar_teste(const char *s1, const char *s2, size_t n)
{
    int res_original = strncmp(s1, s2, n);
    int res_ft = ft_strncmp(s1, s2, n);

    printf("Comparando [%s] com [%s] (n = %zu):\n", s1, s2, n);
    printf("  Original: %d\n", res_original);
    printf("  Sua ft:   %d\n", res_ft);

    if (res_original == res_ft)
        printf("  ✅ SUCESSO\n");
    else if ((res_original > 0 && res_ft > 0) ||
	(res_original < 0 && res_ft < 0))
        printf("  ⚠️  DIFERENTE (Mas o sinal está correto)\n");
    else
        printf("  ❌ FALHA\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("--- INICIANDO TESTES FT_STRNCMP ---\n\n");

    // Teste 1: Strings idênticas
    rodar_teste("Aperte o Play", "Aperte o Play", 15);

    // Teste 2: Diferença após o limite n
    rodar_teste("Bananas", "Bananeira", 5);

    // Teste 3: Diferença dentro do limite n
    rodar_teste("Abacaxi", "Abacate", 7);

    // Teste 4: Uma string é menor que a outra
    rodar_teste("C", "C++", 3);

    // Teste 5: n é zero (deve retornar 0)
    rodar_teste("Teste", "Diferente", 0);

    // Teste 6: Caracteres especiais (para testar o unsigned char)
    rodar_teste("\200", "\0", 1);

    return (0);
}*/
