/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:06:00 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 14:06:00 by migteixe         ###   ########.fr       */
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
	out = malloc(size);
	if (!out)
		return (NULL);
	if (n < 0)
	{
		nb = -n;
		out[0] = '-';
	}
	out[size] = '\0';
	while (nb > 0)
	{
		out[--size] = '0' + (nb % 10);
		nb /= 10;
	}
	return (out);
}

/*int main() {
	printf("%s%%\n", ft_itoa(-12345));
}*/