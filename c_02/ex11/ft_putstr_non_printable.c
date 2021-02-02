/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 04:57:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/28 00:09:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_char_as_hex(char character)
{
	char	*hex_characters;
	int		left;
	int		right;

	hex_characters = "0123456789abcdef";
	left = character / 16;
	right = character % 16;
	put_char('\\');
	put_char(hex_characters[left]);
	put_char(hex_characters[right]);
}

int		is_unprintable(char character)
{
	int is_control_character;
	int is_delete;

	is_control_character = (character >= 0 && character <= 31);
	is_delete = (character == 127);
	return (is_control_character || is_delete);
}

void	ft_putstr_non_printable(char *str)
{
	char	current_character;
	int		iterator;

	iterator = 0;
	current_character = str[iterator];
	while (current_character != '\0')
	{
		if (is_unprintable(current_character))
			print_char_as_hex(current_character);
		else
			put_char(str[iterator]);
		iterator++;
		current_character = str[iterator];
	}
	if (current_character == '\0')
		print_char_as_hex('\0');
}
