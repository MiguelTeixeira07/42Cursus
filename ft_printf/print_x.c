/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:42:23 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/02 18:42:23 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(int num, char caps)
{
	const char	*base;

	if (caps)
		base = "0123457689ABCDEF";
	else
		base = "0123456789abcdef";
	write(1, &base[num], 16);
	return (5);
}

/*int main() {
	print_x(5, 1);
}*/
