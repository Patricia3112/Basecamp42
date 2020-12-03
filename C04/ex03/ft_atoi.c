/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:30:22 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/03 17:58:52 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_operator(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '\t'
			|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int result;
	int i;
	int operator;

	result = 0;
	i = 0;
	operator = 1;
	while (ft_space(str[i]))
		i++;
	while (ft_operator(str[i]))
	{
		if (str[i] == '-')
			operator *= -1;
		else
			operator *= 1;
		i++;
	}
	while (ft_number(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * operator);
}
