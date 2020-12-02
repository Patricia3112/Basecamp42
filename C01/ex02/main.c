/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:30:32 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/30 19:03:09 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	
	int *a = 0;
	int *b = 0;
    int valor1;
    int valor2;
	
	valor1 = 10;
	valor2 = 3;
	a = &valor1;
	b = &valor2;
	ft_putchar(*a + '0');
    ft_putchar(' ');
    ft_putchar(*b + '0');    
    ft_swap(a, b);
    ft_putchar('\n');
    ft_putchar(*a + '0');
    ft_putchar(' ');
    ft_putchar(*b + '0'); 
}
