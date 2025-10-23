/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:51:01 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/23 14:51:02 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*last;

	i = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
			last = &ptr[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&ptr[i]);
	return (last);
}

/*int main() {
	char str1[] = "ganda frase de testes";
	char str2[] = "ganda frase de testes";

    printf("%s\n%s", ft_strrchr(str1, 'd'), strrchr(str2, 'd'));
}*/