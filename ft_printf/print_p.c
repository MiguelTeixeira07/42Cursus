/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:34:58 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/06 11:36:48 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	unsigned long	num;

	num = (unsigned long)ptr;
	if (ptr)
	{
		write(1, "0x", 2);
		return (2 + print_x(num, 'x'));
	}
	write(1, "(nil)", 5);
	return (5);
}
