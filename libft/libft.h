/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:37:38 by migteixe          #+#    #+#             */
/*   Updated: 2025/10/23 18:00:42 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);												//Done
int		ft_isdigit(int c);												//Done
int		ft_isalnum(int c);												//Done
int		ft_isascii(int c);												//Done
int		ft_isprint(int c);												//Done
int		ft_toupper(int c);												//Done
int		ft_tolower(int c);												//Done
int		ft_strncmp(const char *s1, const char *s2, size_t n);			//Done
int		ft_memcmp(const void *s1, const void *s2, size_t n);			//Done
int		ft_atoi(const char *nptr);										//Done
void	*ft_memset(void *s, int c, size_t n);							//Done
void	ft_bzero(void *s, size_t n);									//Done
void	*ft_memcpy(void *dest, const void *src, size_t n);				//Done
void	*ft_memmove(void *dest, const void *src, size_t n);				//Done
void	*ft_memchr(const void *s, int c, size_t n);						//Done
void	*ft_calloc(size_t nmemb, size_t size);							//Done
size_t	ft_strlen(char *str);											//Done
size_t	ft_strlcpy(char *dst, const char *src, size_t size);			//Done
size_t	ft_strlcat(char *dst, const char *src, size_t size);			//Done
char	*ft_strchr(const char *s, int c);								//Done
char	*ft_strrchr(const char *s, int c);								//Done
char	*ft_strnstr(const char *big, const char *little, size_t len);	//Done
char	*ft_strdup(const char *s);										//Done

char	*ft_substr(char const *s, unsigned int start, size_t len);		//Done
char	*ft_strjoin(char const *s1, char const *s2);					//Done
char	*ft_strtrim(char const *s1, char const *set);					//Done
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);												//Done
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));		//Done
void	ft_striteri(char *s, void (*f)(unsigned int, char*));			//Done
void	ft_putchar_fd(char c, int fd);									//Done
void	ft_putstr_fd(char *s, int fd);									//Done
void	ft_putendl_fd(char *s, int fd);									//Done
void	ft_putnbr_fd(int n, int fd);									//Done

#endif