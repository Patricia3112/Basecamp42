/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:59:20 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/22 15:20:03 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(char a, char b, char c, int length)
{
	int column;

	column = length;

	while(column >= 1)
	{
		if (column == length)
		{
			ft_putchar(a);
		}
		else if (column == 1)
		{
			ft_putchar(c);
		}
		else 
		{
			ft_putchar(b);
		}
		column--;		
	}
}

void	rush(int x, int y)
{
	int line;

	line = y;
	while (line > 0)
	{
		if (line == y || line == 1)
		{
			print('A', 'B', 'C', x);
		}
		else
		{
			print('A', ' ', 'C', x);
		}
		ft_putchar('\n');
		line--;			
	}	
}
