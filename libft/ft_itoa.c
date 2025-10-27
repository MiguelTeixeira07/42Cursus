/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:06:00 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 19:00:52 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

static int	outsize(int n)
{
	int	size;

	size = (n <= 0);
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		size;
	char	*out;

	nb = n;
	size = outsize(n);
	out = malloc(size + 1);
	if (!out)
		return (NULL);
	out[size] = '\0';
	if (n == 0)
		out[0] = '0';
	if (n < 0)
	{
		nb = -nb;
		out[0] = '-';
	}
	while (nb > 0)
	{
		out[--size] = '0' + (nb % 10);
		nb /= 10;
	}
	return (out);
}

/*int main() {
	printf("%s%%\n", ft_itoa(0));
}*/