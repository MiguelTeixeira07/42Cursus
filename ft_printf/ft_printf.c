/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:52:00 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/05 17:17:58 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	choose(char c, va_list *args)
{
	if (c == 'c')
		return (print_c(va_arg(*args, int)));
	if (c == 's')
		return (print_s(va_arg(*args, char *)));
	if (c == 'p')
		return (print_p(va_arg(*args, void *)));
	if (c == 'd' || c == 'i')
		return (print_d(va_arg(*args, int)));
	if (c == 'u')
		return (print_u(va_arg(*args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (print_x(va_arg(*args, unsigned int), c));
	if (c == '%')
		return (print_c('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	long	num_chars;

	va_start(args, str);
	i = 0;
	num_chars = 0;
	while (str[i])
	{
		if (str[i] == '%')
			num_chars += choose(str[++i], &args);
		else
		{
			write(1, &str[i], 1);
			num_chars++;
		}
		i++;
	}
	va_end(args);
	return (num_chars);
}
