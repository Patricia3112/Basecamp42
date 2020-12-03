/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:37:17 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 17:37:35 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char in1[] = "String";
	char out1[10] = "Piscina";
	char in2[] = "String";
	char out2[10] = "Basecamp";

	ft_strcat(out1, in1);
	printf("A string concatenada é '%s'\n", out1);
	return (0);
}
