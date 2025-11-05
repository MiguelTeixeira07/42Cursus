/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:52:15 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/01 13:52:15 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int num)
{
	long int	nb;
	int			count;

	nb = num;
	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		count += print_d(nb / 10);
	write(1, (char []){'0' + nb % 10}, 1);
	count++;
	return (count);
}
