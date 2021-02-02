/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/01 17:24:44 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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

int	is_number_character(char character)
{
	return (character >= '0' && character <= '9');
}

int	is_whitespace(char character)
{
	return (character == '\n' || character == '\t' ||
			character == '\v' || character == '\r' ||
			character == '\f' || character == ' ');
}

int	is_plus_or_minus(char character)
{
	return (character == '+' || character == '-');
}

int	ft_atoi(char *str)
{
	int		current_position;
	int		current_number;
	int		total;
	int		sign;

	sign = 1;
	total = 0;
	current_position = 0;
	if (ft_strlen(str) == 0)
		return (0);
	while (is_whitespace(str[current_position]))
		current_position++;
	while (is_plus_or_minus(str[current_position]))
	{
		if (str[current_position] == '-')
			sign *= -1;
		current_position++;
	}
	while (is_number_character(str[current_position]))
	{
		current_number = str[current_position] - '0';
		total = total * 10 + current_number;
		current_position++;
	}
	return (sign * total);
}
