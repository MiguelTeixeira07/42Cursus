/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:14:27 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 19:14:27 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	ptr = (char *)s;
	out = malloc(ft_strlen(ptr) + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		out[i] = f(i, ptr[i]);
		i++;
	}
	out [i] = '\0';
	return (out);
}

/*char	to_upper_even(unsigned int i, char c) {
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

int	main() {
	char	str[] = "hello world";

	printf("%s\n", ft_strmapi(str, to_upper_even));
	return (0);
}*/