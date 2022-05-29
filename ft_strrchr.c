/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:18:49 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/11 16:50:04 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	len;

	tmp = (char *)s;
	len = ft_strlen(tmp) + 1;
	tmp = tmp + len - 1;
	while (len-- > 0)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
