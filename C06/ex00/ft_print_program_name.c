/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:49:36 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 23:51:29 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	
	void	ft_putstr(char *str)
	{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
	write(1, &str[i], 1);
	i++;
	}
	write(1, "\n", 1);
	}
	
	int	main(int argc, char **argv)
	{
	if (argc == 0)
	return (0);
	ft_putstr(argv[0]);
	return (0);
	}
