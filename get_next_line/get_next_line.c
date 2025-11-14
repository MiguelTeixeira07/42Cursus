/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:45:07 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/12 14:45:07 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

char	*empty_buffer(const char *buffer)
{
	ssize_t	i;
	char	out[BUFFER_SIZE];

	i = 0;
	while (buffer[i++] != '\n');
	i++;
	while (buffer[i] != '\n')
		out[i] = buffer[i++];
	out[i] = '\0';
	return (out);
}

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1];
	static ssize_t	bytes_read;
	char		*out;
	ssize_t		i;
	
	i = 0;
	if (bytes_read)
	{
		out = empty_buffer(buffer);
	}
}

int main() {
	int fd = open("test.txt", O_RDONLY);
	char *str = malloc(1);

	do {
		free(str);
		str = get_next_line(fd);
		printf("%s\n", str);
	} while(str[0]);

	return 0;
}