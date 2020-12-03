/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:26:01 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 18:02:47 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned  int nbr_unsigned;
	
	nbr_unsigned = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr_unsigned = nb * (-1);
	}
	if (nbr_unsigned >= 0 && nbr_unsigned <= 9)
		ft_putchar(nb + 48);
	else if (nbr_unsigned > 9)
	{
		ft_putnbr(nbr_unsigned / 10);
		ft_putnbr(nbr_unsigned % 10);
	}
}
