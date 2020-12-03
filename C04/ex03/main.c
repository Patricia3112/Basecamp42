/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:30:35 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 18:04:45 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *str;
	int result;

	str = " ---+--+1234ab567";
	result = ft_atoi(str);
	printf("Result: %d\n", result);
	str = "234ab567";
	result = ft_atoi(str);
	printf("Result: %d\n", result);
}
