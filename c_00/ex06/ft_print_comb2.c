/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:47:06 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 01:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_number(int number)
{
	char tens;
	char ones;

	if (number > 9)
		tens = number / 10;
	else
		tens = 0;
	ones = (number - tens * 10);
	put_char('0' + tens);
	put_char('0' + ones);
}

void	print_numbers(int first, int second)
{
	print_number(first);
	put_char(' ');
	print_number(second);
	if (first < 98)
	{
		put_char(',');
		put_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	second = 1;
	while (second < 100)
	{
		print_numbers(first, second);
		second++;
		if (second > 99)
		{
			first++;
			second = first + 1;
		}
	}
}
