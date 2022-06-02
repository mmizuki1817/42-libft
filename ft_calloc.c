/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:38:26 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/30 21:01:34 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buf;
	size_t	ms;

	if (size != 0 && SIZE_MAX / size < n)
		return (NULL);
	ms = n * size;
	buf = (void *)malloc(ms);
	if (buf == NULL)
		return (NULL);
	ft_bzero(buf, ms);
	return (buf);
}
