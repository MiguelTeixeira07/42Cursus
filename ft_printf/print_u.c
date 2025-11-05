/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:54:20 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/01 13:54:20 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += print_u(num / 10);
	write(1, (char []){'0' + num % 10}, 1);
	count++;
	return (count);
}
