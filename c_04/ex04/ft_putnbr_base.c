/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 05:43:35 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/01 18:35:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char character)
{
	write(1, &character, 1);
}

int		ft_strlen(char *str)
{
	unsigned int	length;
	char			current_char;

	length = 0;
	while (1)
	{
		current_char = str[length];
		if (current_char == '\0')
			break ;
		length++;
	}
	return (length);
}

int		is_invalid_base(char *base, int base_length)
{
	int			current_position;
	int			used_characters_position;
	char		used_characters[base_length + 1];

	if (base_length == 0 || base_length == 1)
		return (1);
	current_position = 0;
	used_characters[0] = '\0';
	while (base[current_position] != '\0')
	{
		if (base[current_position] == '+' || base[current_position] == '-')
			return (1);
		used_characters_position = 0;
		while (used_characters[used_characters_position] != '\0')
		{
			if (used_characters[used_characters_position]
				== base[current_position])
				return (1);
			used_characters_position++;
		}
		used_characters[used_characters_position] = base[current_position];
		used_characters[used_characters_position + 1] = '\0';
		current_position++;
	}
	return (0);
}

void	print_number_with_base(int nb, const int base_length, char *base)
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
	if (number >= base_length)
	{
		carryover = number / base_length;
		print_number_with_base(carryover, base_length, base);
	}
	first_digit = number % base_length;
	put_char(base[first_digit]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	const int	base_length = ft_strlen(base);

	if (is_invalid_base(base, base_length))
		return ;
	print_number_with_base(nbr, base_length, base);
}
