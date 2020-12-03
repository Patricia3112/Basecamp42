/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:57:04 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 15:57:36 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		printf("O número %s elevado a %s é: %d\n", argv[1], argv[2], ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
