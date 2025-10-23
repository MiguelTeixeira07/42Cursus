/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:06:23 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/21 15:06:24 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;
	unsigned char	*ptrd;

	ptrs = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	if (ptrd == ptrs || n == 0)
		return (dest);
	if (ptrd > ptrs && ptrd < ptrs + n)
	{
		i = n;
		while (i-- > 0)
			ptrd[i] = ptrs[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}

/*int main() {
	char src[] = "abcdefgh";
	char dest1[] = "XXXXXXXX";
	char dest2[] = "XXXXXXXX";

	ft_memmove(dest1, src, 4);
	memmove(dest2, src, 4);

	printf("%s\n%s", dest1, dest2);

	char overlap1[] = "abcdefgh";
	char overlap2[] = "abcdefgh";
	ft_memmove(overlap1 + 2, overlap1, 3);
	memmove(overlap2 + 2, overlap2, 3);
	printf("\nft_memcpy: %s\nmemcpy:    %s\n", overlap1, overlap2);
}*/