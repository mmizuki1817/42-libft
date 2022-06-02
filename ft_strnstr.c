/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 22:52:32 by mimatsub          #+#    #+#             */
/*   Updated: 2022/06/02 22:52:32 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

static char	*strnstr_main(const char *big, const char *little, \
size_t len, size_t n)
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

	if (!big && little && len == 0)
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
