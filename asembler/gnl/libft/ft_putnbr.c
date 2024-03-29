/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddodukal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:36:39 by ddodukal          #+#    #+#             */
/*   Updated: 2018/10/25 13:41:19 by ddodukal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putchar('8');
	}
	else
	{
		if (n < 0)
		{
			ft_putchar(45);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putchar('0' + n % 10);
		}
		else
		{
			ft_putchar('0' + n % 10);
		}
	}
}
