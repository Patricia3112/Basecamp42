/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:18:46 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 02:23:14 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
		int i;
	char str[6];

    str[0] = 'P';
    str[1] = 'i';
    str[2] = 'S';
    str[3] = 'c';
    str[4] = 'i';
    str[5] = 'n';
	str[6] = 'A';
    i = 0;
    i = ft_strlen(str);
    printf("Tamanho: %d", i);
    return (0);
}
