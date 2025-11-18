/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:45:07 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/18 22:38:49 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1];
	static ssize_t	bytes_read;
	char			*out;

	if (read(fd, buffer, 0) != 0)
		return (NULL);
	out = NULL;
	if (bytes_read && ft_strlen(buffer) != (size_t)bytes_read)
	{
		out = ft_modstrjoin(out, buffer + ft_strlen(buffer));
		*ft_strchr(buffer, '\n') = ' ';
	}
	while (!ft_strchr(out, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(out), NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		out = ft_modstrjoin(out, buffer);
	}
	return (out);
}

/* int	main() {
	int		fd;
	char	*line;
	char	name[] = "read_error.txt";

	fd = open("read_error.txt", O_RDONLY);
	if (fd < 0)
		return (1);
 	line = get_next_line(fd);
	printf("%s", line);
	if (BUFFER_SIZE > 100) {
		char *temp;
		do {
			temp = get_next_line(fd);
			free(temp);
		} while (temp != NULL);
	}
	line = get_next_line(fd);
	printf("%s", line);
	close(fd);
	fd = open(name, O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	while ((line = get_next_line(fd)))
		printf("%s", line);
	close(fd);
	return (0);
} */