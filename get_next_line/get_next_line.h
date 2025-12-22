/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:51 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/18 20:43:06 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, char c);
char	*ft_modstrjoin(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif