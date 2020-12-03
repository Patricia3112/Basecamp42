/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:17:30 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 04:35:24 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str1 = "Aqui tem 23 caracteres ";
	printf("String a ser contada: %s\n", str1);
	printf("strlen: %lu\n", strlen(str1));
	printf("ft_strlen: %d\n", ft_strlen(str1));
}
