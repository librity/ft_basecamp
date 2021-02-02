/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:39:57 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 22:40:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	not_a_letter_or_null(char character)
{
	int not_an_uppercase_letter;
	int not_a_lowercase_letter;
	int not_a_null_character;

	not_an_uppercase_letter = (character < 'a' || character > 'z');
	not_a_lowercase_letter = (character < 'A' || character > 'Z');
	not_a_null_character = character != '\0';
	return (not_an_uppercase_letter &&
			not_a_lowercase_letter &&
			not_a_null_character);
}

int	ft_str_is_alpha(char *str)
{
	char	current_character;
	int		iterator;

	current_character = str[0];
	if (current_character == '\0')
		return (1);
	iterator = 1;
	while (current_character != '\0')
	{
		if (not_a_letter_or_null(current_character))
			return (0);
		current_character = str[iterator];
		iterator++;
	}
	return (1);
}
