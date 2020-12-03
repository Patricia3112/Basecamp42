/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:38:00 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 17:42:55 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char			in1[] = "String";
	char			out1[10] = "Piscina";
	unsigned	int	n;

	n = 4;
	ft_strncat(out1, in1, n);
	printf("A string concatenada com %d caracteres é '%s'\n", n, out1);
	return (0);
}
