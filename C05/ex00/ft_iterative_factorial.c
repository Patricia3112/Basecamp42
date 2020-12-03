/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:51:34 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 13:00:34 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i < nb + 1)
		factorial = factorial * i++;
	return (factorial);
}
