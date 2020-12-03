/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:56:40 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 19:44:33 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	in1[] = "Me chamo Patricia";
	char	pattern1[] = "Me";
	char	*res;

	res = ft_strstr(in1, pattern1);
	printf("A string achada '%s'\n", res);
	return (0);
}
