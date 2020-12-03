/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:36:32 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 17:35:38 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char			in11[] = "\42";
	char			in21[] = "\0";
	char			in12[] = "Basecamp";
	char			in22[] = "Basecamp";
	unsigned	int	size;
	int				res;

	size = 5;
	res = ft_strncmp(in11, in21, size);
	printf("Result: %d\n", res);
	printf("\n");
	res = ft_strncmp(in12, in22, size);
	printf("Result: %d\n", res);
	printf("\n");
return (0);
}
