/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:45:07 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/21 19:01:18 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1];
	ssize_t			bytes_read;
	char			*out;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	out = NULL;
	while (1)
	{
		if (!*buffer)
		{
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			if (bytes_read < 0)
				return (free(out), NULL);
			if (bytes_read == 0)
				return (out);
			buffer[bytes_read] = '\0';
		}
		out = ft_modstrjoin(out, buffer);
		move_buffer(buffer);
		if (!out || ft_strchr(out, '\n'))
			return (out);
	}
}

int	main() {
	int		fd;
	char	*line;

	fd = open("1char.txt", O_RDONLY);
	if (fd < 0)
		return (1);
 	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
