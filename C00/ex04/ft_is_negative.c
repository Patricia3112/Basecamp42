/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:27:24 by psilva-f          #+#    #+#             */
/*   Updated: 2020/11/28 23:47:53 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char positive;
	char negative;

	positive = 'P';
	negative = 'N';
	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &positive, 1);
}
