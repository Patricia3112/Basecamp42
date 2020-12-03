# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    main                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/03 13:34:23 by psilva-f          #+#    #+#              #
#    Updated: 2020/12/03 15:41:04 by psilva-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <stdlib.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		printf("Fatorial de %s é : %d\n", argv[1], ft_recursive_factorial(atoi(argv[1])));
}
