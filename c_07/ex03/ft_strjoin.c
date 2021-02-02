/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:43:10 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/04 19:56:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calculate_string_length(char *initial_position)
{
	char *final_position;

	final_position = initial_position;
	while (*final_position)
		final_position++;
	return (final_position - initial_position);
}

int		calculate_total_bytes(int size, char **strings, char *separator)
{
	int total_size;
	int total_bytes;
	int separators_length;
	int strings_length;
	int current_string;

	separators_length = calculate_string_length(separator) * (size - 1);
	current_string = 0;
	strings_length = 0;
	while (current_string < size)
	{
		strings_length += calculate_string_length(strings[current_string]);
		current_string++;
	}
	total_size = strings_length + separators_length + 1;
	total_bytes = sizeof(**strings) * total_size;
	return (total_bytes);
}

char	*write_string(char *string_writer, char *to_write)
{
	while (*to_write)
	{
		*string_writer = *to_write;
		to_write++;
		string_writer++;
	}
	return (string_writer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_string;
	char	*string_writer;
	int		total_size;
	int		iterator;

	if (size == 0)
		return (malloc(sizeof(*final_string)));
	total_size = calculate_total_bytes(size, strs, sep);
	string_writer = malloc(total_size);
	if (!string_writer)
		return (0);
	final_string = string_writer;
	iterator = 0;
	while (iterator < size)
	{
		string_writer = write_string(string_writer, strs[iterator]);
		if (iterator != size - 1)
			string_writer = write_string(string_writer, sep);
		iterator++;
	}
	string_writer++;
	*string_writer = '\0';
	return (final_string);
}
