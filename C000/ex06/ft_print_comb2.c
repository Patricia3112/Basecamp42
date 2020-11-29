/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:02:14 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/29 00:26:54 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	int a;
	int b;

	if (n > 9)
	{
		a = n / 10;
		b = n % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void	ft_print_comb2(void)
{
	int d;
	int e;

	d = 0;
	while (d <= 99)
	{
		e = d + 1;
		while (e <= 99)
		{
			ft_putint(d);
			ft_putchar(' ');
			ft_putint(e);
			if (d < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			e++;
		}
		d++;
	}
}
