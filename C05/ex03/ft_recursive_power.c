/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:11:48 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 17:16:15 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int nb, int power, int result, int count)
{
	if (count < power)
	{
		count++;
		return (ft_recursive(nb, power, result *= nb, count));
	}
	return (result);
}

int		ft_recursive_power(int nb, int power)
{
	int result;
	int i;

	i = 0;
	if (power < 0)
		return (0);
	result = 1;
	return (ft_recursive(nb, power, result, i));
}
