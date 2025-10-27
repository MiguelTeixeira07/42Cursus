/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:04:37 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 20:19:05 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) < (size_t)start)
		return (ft_strdup(""));
	ptr = (char *)s + start;
	if (ft_strlen(ptr) < len)
		len = ft_strlen(ptr);
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, ptr, len + 1);
	return (out);
}

/*int main() {
	printf("%s", ft_substr("eu gosto de mamar", 0, 17));
}*/