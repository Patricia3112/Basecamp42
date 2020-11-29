/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:21:42 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/22 17:11:23 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int line;
	int column;

	line = y;
	while (line > 0)
	{
		column = x;
		while (column >= 1)
		{
			if (column == x)
				ft_putchar('A');
			else if (column == 1)
				ft_putchar('C');
			else
			{
				if (line == 1 || line == y)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			column--;
		}
		ft_putchar('\n');
		line--;
	}
}
