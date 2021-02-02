/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 05:56:27 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/24 18:06:04 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_triad(char a, char b, char c)
{
	put_char(a);
	put_char(b);
	put_char(c);
	if (a != '7')
	{
		put_char(',');
		put_char(' ');
	}
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	second = '1';
	third = '2';
	while (first < '8')
	{
		ft_print_triad(first, second, third);
		third++;
		if (third > '9')
		{
			second++;
			third = second + 1;
		}
		if (second > '8')
		{
			first++;
			second = first + 1;
			third = second + 1;
		}
	}
}
