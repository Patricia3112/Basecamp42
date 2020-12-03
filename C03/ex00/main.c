/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:27:43 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 19:32:38 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	s11[] = "Piscina";
	char	s21[] = "Piscina";
	char	s12[] = "Basecamp";
	char 	s22[] = "\105";
	int  	res;

	printf("As strings são '%s' e '%s'\n", s11, s21);
	res = ft_strcmp(s11, s21);
	printf("result: %d\n", res);
	printf("As strings são '%s' e '%s'\n", s12, s22);
	res = strcmp(s12, s22);
	printf("result: %d\n", res);
	return (0);
}
