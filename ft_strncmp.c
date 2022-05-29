/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:41:27 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/13 06:53:44 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*buf1;
	unsigned char	*buf2;

	if (n == 0)
		return (0);
	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	while (*buf1 == *buf2)
	{
		if ((*buf1 == '\0') || n == 1)
			return (0);
		n--;
		buf1++;
		buf2++;
	}
	return (*buf1 - *buf2);
}
