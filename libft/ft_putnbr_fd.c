/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:58:16 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/03 16:58:17 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putnbr_fd (-21, fd);
			ft_putnbr_fd (47483648, fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 0 && n < 10)
	{
		n = n + '0';
		ft_putchar_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd (n / 10, fd);
		n = n % 10 + '0';
		ft_putchar_fd(n, fd);
	}
}
