/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 03:06:05 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/30 01:43:03 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*front(char *s, const char *set)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		while (set[i] != '\0')
		{
			if (*s == set[i])
			{
				s++;
				i = 0;
			}
			else
				i++;
		}
		if (i == ft_strlen(set))
			break ;
	}
	return (s);
}

char	*end(char *s, const char *set)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = s + ft_strlen(s) - 1;
	while (1)
	{
		while (set[i] != '\0')
		{
			if (*tmp == set[i])
			{
				tmp--;
				i = 0;
			}
			else
				i++;
		}
		if (i == ft_strlen(set))
			break ;
	}
	return (tmp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	char	*s;

	s = (char *)s1;
	if (!s || !set)
		return (NULL);
	s = front(s, set);
	if (!s)
		return (NULL);
	tmp = end(s, set);
	return (ft_substr(s, 0, tmp - s + 1));
}
