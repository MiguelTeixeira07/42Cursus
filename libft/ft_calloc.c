/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:54:30 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/25 20:10:45 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int main(void)
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *ft_arr;
    int i, ft_zero = 1;

    ft_arr = (int *)ft_calloc(nmemb, size);
    if (!ft_arr)
    {
        printf("ft_calloc retornou NULL\n");
        return 1;
    }

    for (i = 0; i < (int)nmemb; i++)
        if (ft_arr[i] != '\0')
            ft_zero = 0;

    printf("ft_calloc inicialização a zero: %s\n", ft_zero ? "OK" : "FAIL");

    free(ft_arr);
    return 0;
}*/