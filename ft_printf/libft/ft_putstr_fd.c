/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:48:49 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 16:48:49 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*int main() {
	int fd;
	char str[] = "xQc\n";

	ft_putstr_fd(str, 1);

	fd = open("teste.txt", O_CREAT | O_WRONLY);
	if (fd != -1)
	{
		ft_putstr_fd(str, fd);
		close(fd);
	}
}*/