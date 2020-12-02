/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:39:27 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 03:43:12 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        ft_sort_int_tab(int *tab, int size);

int         main(void)
{
    int tab[4];
    int size;

tab[0] = -1;
    tab[1] = 2;
    tab[2] = 1;
    tab[3] = 3;
    size = 4;
    printf("Ordem inicial: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    ft_sort_int_tab(&tab[0], size);
    printf("Ordem crescente: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
}
