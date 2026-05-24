/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 03:11:56 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/14 07:24:13 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Conta o numero de palavras em s separadas pelo delimitador c.
 *        Usa uma flag in_word para detetar transicoes de separador para letra.
 * @param s Ponteiro para a string a analisar.
 * @param c Caractere delimitador.
 * @return Numero de palavras encontradas.
 */

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}
/**
 * @brief Liberta todas as strings alocadas em tab e o proprio array.
 *        Seguro para libertacao parcial pois ft_calloc garante NULL
 *        nas posicoes nao preenchidas.
 * @param tab Array de strings a libertar.
 */

static void	free_all(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/**
 * @brief Preenche o array tab com substrings de s separadas por c.
 *        Para cada palavra: salta separadores, calcula o comprimento,
 *        aloca com ft_substr e guarda no array. Termina tab com NULL.
 * @param tab Array de strings ja alocado com ft_calloc.
 * @param s   Ponteiro para a string de origem.
 * @param c   Caractere delimitador.
 * @return 1 em caso de sucesso, 0 se algum ft_substr falhar.
 */
static int	fill_tab(char **tab, const char *s, char c)
{
	size_t	word;
	size_t	len;

	word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			tab[word] = ft_substr(s, 0, len);
			if (!tab[word])
				return (0);
			word++;
			s += len;
		}
	}
	tab[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, s, c))
	{
		free_all(tab);
		return (NULL);
	}
	return (tab);
}
