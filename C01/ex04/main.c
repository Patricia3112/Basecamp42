/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:03:44 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 01:17:18 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	
	a = 7;
	b = 3;
	
	printf("Divisao %d / %d", a, b);
	ft_ultimate_div_mod(&a, &b);
    printf("\nResultado da divisão %d\n", a);
	printf("Modulo %d ", b);
	return(0);	
}
