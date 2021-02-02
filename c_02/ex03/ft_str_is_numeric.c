/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:41:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 23:10:49 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	not_a_number_or_null(char character)
{
	int not_a_number;
	int not_a_null_character;

	not_a_number = (character < '0' || character > '9');
	not_a_null_character = character != '\0';
	return (not_a_number && not_a_null_character);
}

int	ft_str_is_numeric(char *str)
{
	char	current_character;
	int		iterator;

	current_character = str[0];
	if (current_character == '\0')
		return (1);
	iterator = 1;
	while (current_character != '\0')
	{
		if (not_a_number_or_null(current_character))
			return (0);
		current_character = str[iterator];
		iterator++;
	}
	return (1);
}
