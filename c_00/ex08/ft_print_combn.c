/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 01:11:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/24 19:07:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		has_strictly_increasing_digits(int *number, int length)
{
	int iterator;

	iterator = 0;
	while (iterator < length - 1)
	{
		if (number[iterator] >= number[iterator + 1])
			return (0);
		iterator++;
	}
	return (1);
}

int		equals_last_number(int *current_number, int *last_number, int length)
{
	int iterator;

	iterator = 0;
	while (iterator < length)
	{
		if (current_number[iterator] != last_number[iterator])
		{
			return (0);
		}
		iterator++;
	}
	return (1);
}

void	print_number(int *number, int length, int is_first)
{
	char	current_char;
	int		iterator;

	if (!is_first)
		write(1, ", ", 2);
	iterator = 0;
	while (iterator < length)
	{
		current_char = '0' + number[iterator];
		write(1, &current_char, 1);
		iterator++;
	}
}

void	generate_first_and_last(int *first_number, int *last_number, int length)
{
	int iterator;
	int first_increment;

	iterator = 0;
	while (iterator < length)
	{
		first_number[iterator] = iterator;
		last_number[iterator] = 10 - length + iterator;
		iterator++;
	}
	print_number(first_number, length, 1);
	first_increment = first_number[length - 1] + 1;
	first_number[length - 1] = first_increment;
}

void	ft_print_combn(int n)
{
	int number[n];
	int last_number[n];
	int iterator;

	if (n <= 0 || n >= 10)
		return ;
	generate_first_and_last(number, last_number, n);
	while (1)
	{
		if (has_strictly_increasing_digits(number, n))
			print_number(number, n, 0);
		if (equals_last_number(number, last_number, n))
			break ;
		iterator = n - 1;
		number[iterator]++;
		while (iterator != 0)
		{
			if (iterator && number[iterator] > 9)
			{
				number[iterator] = 0;
				number[iterator - 1]++;
			}
			iterator--;
		}
	}
}
