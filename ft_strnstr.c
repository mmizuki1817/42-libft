/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:42:26 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/30 04:24:18 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr_main(const char *big, const char *little, size_t len, size_t n)
{
	size_t	i;
	size_t	len_little;

	len_little = ft_strlen(little);
	while (n--)
	{
		i = 0;
		while (little[i] != '\0')
		{
			if (len == 0)
				return (NULL);
			len--;
			if (*big == little[i])
			{
				if (i + 1 == len_little)
					return ((char *)(big - i));
				big++;
				i++;
			}
			else
				break ;
		}
		big++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	size_t	len_little;
	size_t	len_big;

	if (!little)
		return ((char *)big);
	if (!big)
		return (NULL);
	len_little = ft_strlen(little);
	len_big = ft_strlen(big);
	if (*little == '\0')
		return ((char *)big);
	if (len == 0 || len_big < len_little)
		return (NULL);
	n = len_big - len_little + 1;
	return (strnstr_main(big, little, len, n));
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *s;
	char *little;
	printf("%s", ft_strnstr(s, little, 10));
}
*/
