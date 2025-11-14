/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:42:23 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/06 11:33:39 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(unsigned long num, char caps)
{
	const char	*base;
	int			count;

	count = 0;
	if (caps == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		count += print_x(num / 16, caps);
	write(1, &base[num % 16], 1);
	count++;
	return (count);
}

/*int main() {
	print_x(5, 1);
}*/
