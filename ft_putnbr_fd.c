/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:54 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/29 23:40:32 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	li;

	li = (int)n;
	if (li < 0)
	{
		ft_putchar_fd('-', fd);
		li = li * (-1);
	}
	if (li < 10)
		ft_putchar_fd(li + '0', fd);
	else
	{
		ft_putnbr_fd(li / 10, fd);
		ft_putnbr_fd(li % 10, fd);
	}
}
