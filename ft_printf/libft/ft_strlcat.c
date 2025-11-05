/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:56:26 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/21 19:15:54 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main() {
	char dest1[20] = "Ola ";
	char dest2[20] = "Ola ";
	char src[] = "mundo!";
	size_t res1 = ft_strlcat(dest1, src, sizeof(dest1));
	size_t res2 = strlcat(dest2, src, sizeof(dest2));

	printf("ft_strlcat: %s (ret=%zu)\n", dest1, res1);
	printf("strlcat   : %s (ret=%zu)\n", dest2, res2);
}*/