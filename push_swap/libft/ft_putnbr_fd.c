/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:17:53 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 19:04:14 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	write(fd, (char []){'0' + nb % 10}, 1);
}

/*int main() {
	int fd;

	fd = open("teste.txt", O_CREAT | O_WRONLY);
	if (fd != -1)
	{
		ft_putnbr_fd(12345, fd);
		close(fd);
	}
}*/