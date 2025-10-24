/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:55:35 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 16:55:35 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*int main() {
	int fd;
	char str[] = "xQc";

	fd = open("teste.txt", O_CREAT | O_WRONLY);
	if (fd != -1)
	{
		ft_putendl_fd(str, fd);
		close(fd);
	}
}*/