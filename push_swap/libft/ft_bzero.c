/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:30:22 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/20 16:30:23 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <strings.h>
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*int main() {
	char str1[] = "ganda frase de testes";
	char str2[] = "ganda frase de testes";

    bzero(str1, 0);
	ft_bzero(str2, 0);

    for (int i = 0; i < sizeof(str1); i++)
        printf("%c", str1[i]);

	printf("\n");
	
	for (int i = 0; i < sizeof(str2); i++)
        printf("%c", str2[i]);
}*/