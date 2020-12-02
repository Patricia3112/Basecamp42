/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:53:45 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/29 19:51:17 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int i;
	int *********nbr;
	int ********nbr1;
	int *******nbr2;
    int ******nbr3;
    int *****nbr4;
    int ****nbr5;
    int ***nbr6;
    int **nbr7;
    int *nbr8;
	
	i = 1;
	nbr8 = &i;
	nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr1 = &nbr2;
    nbr = &nbr1;  
		ft_ultimate_ft(nbr);
		printf("%d", i);	
		return(0);
}