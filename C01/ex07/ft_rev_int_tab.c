/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:26:26 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 03:45:13 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int value;

	i = 0;
	size--;
	while (i <= size)
	{
		value = tab[i];
		tab[i] = tab[size];
		tab[size] = value;
		i++;
		size--;
	}
}
