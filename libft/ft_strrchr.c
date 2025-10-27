/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:51:01 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 19:28:28 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
		if ((unsigned char)*s++ == (unsigned char)c)
			last = (char *)s - 1;
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (last);
}

/*int main() {
	char str1[] = "bonjour";
	char str2[] = "bonjour";

    printf("%s\n%s", ft_strrchr(str1, 's'), strrchr(str2, 's'));
}*/