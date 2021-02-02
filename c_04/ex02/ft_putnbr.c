/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:55:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 23:58:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	number;
	int			first_digit;
	int			carryover;

	number = nb;
	if (number < 0)
	{
		put_char('-');
		number *= -1;
	}
	if (number >= 10)
	{
		carryover = number / 10;
		ft_putnbr(carryover);
	}
	first_digit = number % 10;
	put_char('0' + first_digit);
}
