/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:39:04 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 03:41:53 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int value;

	i = 0;
	--size;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			value = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = value;
			i = 0;
		}
		else
		i++;
}		
