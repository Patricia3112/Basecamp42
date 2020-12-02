/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:10:50 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/30 22:45:00 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

log int		main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 6;
	b = 3;
	printf("Divisão %d / %d", a, b);
	ft_div_mod(a, b, &div, &mod);
    printf("\nResultado da divisão %d\n", div);
    printf("Modulo %d ", mod);
	return(0);	
}
