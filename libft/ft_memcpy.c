/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:24:26 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 17:54:06 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptrd;
	const unsigned char	*ptrs;

	if (!dest && !src)
		return (NULL);
	ptrd = (unsigned char *)dest;
	ptrs = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}

/*int main() {
	char src[] = "abcdefgh";
	char dest1[] = "XXXXXXXX";
	char dest2[] = "XXXXXXXX";

	ft_memcpy(dest1, src, 4);
	memcpy(dest2, src, 4);

	printf("%s\n%s", dest1, dest2);
}*/