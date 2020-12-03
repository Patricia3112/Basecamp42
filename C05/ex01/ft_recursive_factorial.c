/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:31:31 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 15:40:32 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_calc_factorial(int cont, int factorial, int nb)
{
	if (cont < nb + 1)
	{
		factorial = factorial * cont++;
		factorial = ft_calc_factorial(cont, factorial, nb);
	}
	return (factorial);
}

int		ft_recursive_factorial(int nb)
{
	int factorial;
	int i;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	
