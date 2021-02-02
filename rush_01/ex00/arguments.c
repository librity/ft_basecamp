/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:01:57 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 01:40:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"
#include "argument_utilities.h"

extern int		g_borders[4 * 4];

char	*fetch_second_argument(char **arguments_array)
{
	arguments_array++;
	return (*arguments_array);
}

int		has_valid_format(char *input)
{
	char	current_character;
	int		valid_number_count;
	int		iterator;

	iterator = 0;
	valid_number_count = 0;
	current_character = input[iterator];
	while (current_character != '\0' && iterator < 31)
	{
		if (iterator % 2 == 0)
		{
			if (is_valid_number(current_character))
				valid_number_count++;
			else
				return (0);
		}
		else if (!is_space(current_character))
			return (0);
		iterator++;
		current_character = input[iterator];
	}
	if (valid_number_count != 16)
		return (0);
	return (1);
}

int		is_valid_argument(char *input)
{
	const int	expected_length = 32;
	int			has_correct_length;

	has_correct_length = count_string_length(input) == expected_length;
	return (has_correct_length && has_valid_format(input));
}

void	parse_arguments(char *input)
{
	char	current_character;
	int		string_iterator;
	int		borders_iterator;

	string_iterator = 0;
	borders_iterator = 0;
	current_character = input[string_iterator];
	while (current_character != '\0' && string_iterator < 31)
	{
		if (is_valid_number(current_character))
		{
			g_borders[borders_iterator] = current_character - '0';
			borders_iterator++;
		}
		string_iterator++;
		current_character = input[string_iterator];
	}
}
