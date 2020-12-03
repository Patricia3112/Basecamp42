/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:28:44 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 18:03:28 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(+2147483647);
	printf("\n");
	ft_putnbr(4224);
	printf("\n");
}
