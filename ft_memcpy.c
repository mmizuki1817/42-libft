/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:00:11 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/11 01:34:49 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0 || buf1 == buf2)
		return (buf1);
	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	while (n--)
	{
		*s1++ = *s2++;
	}
	return (buf1);
}
