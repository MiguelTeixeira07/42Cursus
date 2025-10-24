/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:04:37 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/24 13:04:37 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	char	*ptr;
	int		i;

	out = malloc(len + 1);
	if (!out)
		return (NULL);
	ptr = (char *)s + start;
	i = -1;
	while (++i < len)
		out[i] = ptr[i];
	out[i] = '\0';
	return (out);
}

/*int main() {
	printf("%s", ft_substr("eu gosto de mamar", 0, 17));
}*/