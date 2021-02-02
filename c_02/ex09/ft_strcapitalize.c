/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 02:00:56 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/27 23:51:19 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		a_letter_or_number(char character)
{
	int is_uppercase;
	int is_lowercase;
	int is_number;

	is_uppercase = (character >= 'A' && character <= 'Z');
	is_lowercase = (character >= 'a' && character <= 'z');
	is_number = (character >= '0' && character <= '9');
	return (is_uppercase || is_lowercase || is_number);
}

int		is_lowercase_and_not_before_number(char previous, char current)
{
	int current_is_lowercase;
	int previous_isnt_number;

	current_is_lowercase = (current >= 'a' && current <= 'z');
	previous_isnt_number = (previous < '0' || previous > '9');
	return (current_is_lowercase && previous_isnt_number);
}

char	*ft_strcapitalize(char *str)
{
	char	lower_to_upper;
	char	previous;
	char	current;
	int		iterator;

	lower_to_upper = 'a' - 'A';
	iterator = 0;
	previous = str[-1];
	current = str[0];
	while (current != '\0')
	{
		if (!a_letter_or_number(previous))
			if (is_lowercase_and_not_before_number(previous, current))
				str[iterator] -= lower_to_upper;
		iterator++;
		current = str[iterator];
		previous = str[iterator - 1];
	}
	return (str);
}
