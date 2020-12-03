/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:59:08 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 16:00:48 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_fibonacci(int index);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		printf("O index %s da sequencia fibonacci é : %d\n", argv[1], ft_fibonacci(atoi(argv[1])));
}
