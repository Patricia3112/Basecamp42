/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:18:16 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 18:11:58 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	sq;
	unsigned int	i;

	i = 0;
	sq = 0;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (nb);
	while (sq < (unsigned int)nb)
	{
		sq = i * i;
		i++;
	}
	i--;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
