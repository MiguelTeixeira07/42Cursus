/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migteixe <migteixe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:59:39 by migteixe          #+#    #+#             */
/*   Updated: 2025/11/12 17:59:39 by migteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	size_t	len;

	i = 0;
	ptr = (char *)s;
	len = ft_strlen(ptr);
	while (i <= (int)len)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	dest = malloc((ft_strlen((char *)s) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	out = malloc(size1 + size2 + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < size1 + size2)
	{
		if (i < size1)
			out[i] = s1[i];
		else
			out[i] = s2[i - size1];
		i++;
	}
	out[i] = '\0';
	return (out);
}

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen((char *)src);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
