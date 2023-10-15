/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 20:54:11 by nosilves          #+#    #+#             */
/*   Updated: 2023/06/07 13:08:50 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserva (utilizando malloc(3)) un array de strings resultante de separar la 
 * string ’s’ en substrings utilizando el caracter ’c’ como delimitador. 
 * El array debe terminar con un puntero NULL.*/

#include "libft.h"

int	count_words(char const *s, char c)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || (s[i - 1] == c)))
			words++;
		i++;
	}
	return (words);
}

int	count_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

void	freedom_is_beauty(char **matrix, int pasted_words)
{
	while (pasted_words--)
		free(matrix[pasted_words]);
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**matrix;
	int		pasted_words;
	int		i;

	i = -1;
	pasted_words = 0;
	words = count_words(s, c);
	matrix = malloc((words + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			matrix[pasted_words] = ft_substr(s, i, count_word_len(&s[i], c));
			if (!matrix[pasted_words++])
			{
				freedom_is_beauty(matrix, (pasted_words - 1));
				return (NULL);
			}
		}
	}
	matrix[pasted_words] = NULL;
	return (matrix);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char **splite;
	int	i;

	i = 0;
	if (argc > 1)
		printf ("%d", count_words(argv[1], ' '));
	splite = ft_split(argv[1], ' ');
	while (splite[i] != NULL)
	{
		printf ("palabra: |%s|", splite[i]);
		i++;
	}
}*/
