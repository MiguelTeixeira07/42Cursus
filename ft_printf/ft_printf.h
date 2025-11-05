/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:52:07 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/05 17:22:56 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);

int	print_c(char c);						//Done
int	print_s(char *str);						//Done
int	print_p(void *ptr);
int	print_d(int num);						//Done
int	print_u(unsigned int num);				//Done
int	print_x(unsigned long num, char caps);	//Done
int	print_percent(void);					//Done

#endif