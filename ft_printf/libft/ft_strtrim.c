/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:35:58 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 20:38:53 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*out;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && start < end && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && end > start && ft_strchr(set, s1[end - 1]))
		end--;
	out = malloc((end - start + 1));
	if (out)
		ft_strlcpy(out, s1 + start, end - start + 1);
	return (out);
}

/*int main() {
	printf("%s%%\n", ft_strtrim("-+--=Hello+world++--", "+-="));
}*/