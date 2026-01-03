/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:29:10 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 19:08:48 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	size_t	len;

	i = 0;
	ptr = (char *)s;
	len = ft_strlen(ptr);
	while (i <= (int)len)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*int main() {
	char str1[] = "ganda frase de testes";
	char str2[] = "ganda frase de testes";

    printf("%s\n%s", ft_strchr(str1, 'd'), strchr(str2, 'd'));
}*/