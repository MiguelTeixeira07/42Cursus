/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:15:21 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/27 15:14:31 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (16384);
	return (0);
}

/*int main() {
	printf("%d", isprint(','));
}*/