/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:45:07 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/14 22:23:30 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

int	countwords(const char *s)
{
	int	count;
	int	i;

	if (!s || !*s)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			count++;
		i++;
	}
	if (i > 0 && s[i - 1] != '\n')
		count++;
	return (count);
}

size_t	wordsize(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	**ft_split(const char *s)
{
	int		i;
	int		total;
	char	**out;
	size_t	len;

	if (!s)
		return (NULL);
	total = countwords(s);
	out = malloc((total + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	while (*s && i < total)
	{
		len = wordsize(s);
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

char	*get_next_line(int fd)
{
	char			buffer[BUFFER_SIZE + 1];
	ssize_t			r;
	char			*file;
	static char		**out;
	static int		i;

	if (!out)
	{
		file = NULL;
		r = BUFFER_SIZE;
		while (r == BUFFER_SIZE)
		{
			r = read(fd, buffer, BUFFER_SIZE);
			if (r < 0)
				return (NULL);
			buffer[r] = '\0';
			file = ft_modstrjoin(file, buffer);
		}
		out = ft_split(file);
		i = 0;
		return (out[0]);
	}
	if (!out[i++])
		return (NULL);
	return (out[i]);
}

int	main() {
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	while ((line = get_next_line(fd)))
		printf("%s", line);
	close(fd);
	return (0);
}