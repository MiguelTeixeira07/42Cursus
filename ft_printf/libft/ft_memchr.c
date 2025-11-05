/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:12:23 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/20 19:14:05 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*int main() {
	char	str[] = "ganda frase de teste";
	int		ch = 'd';
	size_t	n = 10;

	void *res1 = memchr(str, ch, n);
	void *res2 = ft_memchr(str, ch, n);

	printf("memchr:    %p\n", res1 ? (char *)res1 : "NULL");
	printf("ft_memchr: %p\n", res2 ? (char *)res2 : "NULL");
}*/