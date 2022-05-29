/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:38:26 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/26 19:46:11 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buf;
	size_t	ms;

	ms = n * size;
	if (ms == 0)
		ms = 1;
	buf = malloc(ms);
	if (buf == NULL)
		return (NULL);
	ft_bzero(buf, ms);
	return (buf);
}
