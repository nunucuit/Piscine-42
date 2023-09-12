/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:55:23 by gabrsanc          #+#    #+#             */
/*   Updated: 2023/08/23 22:06:47 by gabrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	num;
	int	c;
	int	d;
	int	u;

	num = 12;
	while (num != 790)
	{
		c = num / 100;
		d = (num - c * 100) / 10;
		u = (num - c * 100) - d * 10;
		if (u > d && d > c)
		{
			ft_putchar('0' + c);
			ft_putchar('0' + d);
			ft_putchar('0' + u);
			if (num != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		num++;
	}
}
