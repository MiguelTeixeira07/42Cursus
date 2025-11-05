/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:35:31 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/25 00:35:31 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

static int	countwords(const char *s, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static size_t	wordsize(const char **s, char c)
{
	size_t	i;

	while (**s && **s == c)
		(*s)++;
	i = 0;
	while ((*s)[i] && (*s)[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		total;
	char	**out;
	size_t	len;

	if (!s)
		return (NULL);
	total = countwords(s, c);
	out = malloc((total + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	while (*s && i < total)
	{
		len = wordsize(&s, c);
		out[i] = malloc(len + 1);
		if (!out[i])
			return (NULL);
		ft_strlcpy(out[i], s, len + 1);
		s += len;
		i++;
	}
	out[i] = NULL;
	return (out);
}

/*int main() {
	char **result;
	int i;

	result = ft_split("  ola  eu sou o Miguel e sou bue fixe  ! ", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("Palavra %d: \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/