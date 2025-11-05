/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:00:46 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 20:00:46 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	out = malloc(size1 + size2 + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < size1 + size2)
	{
		if (i < size1)
			out[i] = s1[i];
		else
			out[i] = s2[i - size1];
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*int main() {
	printf("%s%%\n", ft_strjoin("Hello ", "world!"));
}*/