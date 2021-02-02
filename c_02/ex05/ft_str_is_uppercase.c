/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 23:31:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 23:35:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	not_uppercase_or_null(char character)
{
	int not_a_uppercase_letter;
	int not_a_null_character;

	not_a_uppercase_letter = (character < 'A' || character > 'Z');
	not_a_null_character = character != '\0';
	return (not_a_uppercase_letter && not_a_null_character);
}

int	ft_str_is_uppercase(char *str)
{
	char	current_character;
	int		iterator;

	current_character = str[0];
	if (current_character == '\0')
		return (1);
	iterator = 1;
	while (current_character != '\0')
	{
		if (not_uppercase_or_null(current_character))
			return (0);
		current_character = str[iterator];
		iterator++;
	}
	return (1);
}
