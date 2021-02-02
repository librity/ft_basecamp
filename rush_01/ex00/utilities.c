/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:51:06 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 00:41:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char character)
{
	write(1, &character, 1);
}

void	put_number_as_char(int number)
{
	const char number_characters[6] = "01234";

	put_char(number_characters[number]);
}

void	put_string(const char *string, int length)
{
	int		iterator;
	char	current_char;

	current_char = string[0];
	iterator = 1;
	while (current_char != '\0' && iterator <= length)
	{
		put_char(current_char);
		current_char = string[iterator];
		iterator++;
	}
}

int		count_string_length(char *string)
{
	const int	overflow_limit = 100;
	int			length;
	char		current_char;

	current_char = string[0];
	length = 1;
	while (current_char != '\0' && length < overflow_limit)
	{
		current_char = string[length];
		length++;
	}
	return (length);
}
