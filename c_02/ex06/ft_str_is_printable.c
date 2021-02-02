/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 01:08:49 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/27 01:34:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	not_printable(char character)
{
	int not_a_printable_letter;

	not_a_printable_letter = (character < 32);
	return (not_a_printable_letter);
}

int	ft_str_is_printable(char *str)
{
	char	current_character;
	int		iterator;

	current_character = str[0];
	if (current_character == '\0')
		return (1);
	iterator = 1;
	while (current_character != '\0')
	{
		if (not_printable(current_character))
			return (0);
		current_character = str[iterator];
		iterator++;
	}
	return (1);
}
