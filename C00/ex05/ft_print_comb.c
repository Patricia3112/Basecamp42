/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:27:01 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/29 00:22:35 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	digitos[3];

	digitos[0] = 48;
	while (digitos[0] <= 55)
	{
		digitos[1] = digitos[0] + 1;
		while (digitos[1] <= 56)
		{
			digitos[2] = digitos[1] + 1;
			while (digitos[2] <= 57)
			{
				ft_putchar(digitos[0]);
				ft_putchar(digitos[1]);
				ft_putchar(digitos[2]);
				if (digitos[0] < 55 || digitos[1] < 56 || digitos[2] < 57)
					write(1, ", ", 2);
				digitos[2]++;
			}
			digitos[1]++;
		}
		digitos[0]++;
	}
}
