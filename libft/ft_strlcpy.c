/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:26:11 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/23 15:05:12 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen((char *)src);
	if (size != 0)
	{
		while (src[i] && i + 1 < size)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (src_len);
}

/*int	main() {
	char dest1[20];
	char dest2[20];
	char src[] = "mundo!";
	size_t res1 = ft_strlcpy(dest1, src, 4);
	size_t res2 = strlcpy(dest2, src, 4);

	printf("ft_strlcat: %s (ret=%zu)\n", dest1, res1);
	printf("strlcat   : %s (ret=%zu)\n", dest2, res2);
}*/