/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:37:30 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 16:37:30 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main() {
	int fd;

	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	fd = open("teste.txt", O_CREAT | O_WRONLY);
	if (fd != -1)
	{
		ft_putchar_fd('B', fd);
		ft_putchar_fd('\n', fd);
		close(fd);
	}
}*/