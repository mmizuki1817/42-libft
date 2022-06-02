/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:46:13 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/13 07:04:09 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		len;
	size_t		i;
	size_t		j;
	
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
	{
		len = src_len + size;
		return (len);
	}
	i = dst_len;
	j = 0;
	while (size - dst_len > 1 && src[j] != '\0')
	{
		dst[i++] = src[j++];
		size--;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*
int main(void)
{
	printf("%sa", ft_strnstr(NULL, "he", 1)); //segfa
	printf("%sb", strnstr(NULL, "he", 1)); //segfa

	printf("%sc", ft_strnstr(NULL, "he", 0)); //null
	printf("%sd", strnstr(NULL, "he", 0)); //null

	printf("%se", ft_strnstr("he", NULL, 2)); //segfa
	printf("%sf", strnstr("he", NULL, 2)); //segfa


	printf("%se", ft_strnstr("he", NULL, 5)); //segfa
	printf("%sf", strnstr("he", NULL, 5)); //segfa

	printf("%sg", ft_strnstr("he", NULL, 0)); //segfa
	printf("%sh", strnstr("he", NULL, 0)); //segfa

	printf("%si", ft_strnstr(NULL, NULL, 5)); //segfa
	printf("%sj", strnstr(NULL, NULL, 5)); //segfa


	printf("%sk", ft_strnstr(NULL, NULL, 0)); //segfa
	printf("%sl", strnstr(NULL, NULL, 0)); //segfa
}
*/
