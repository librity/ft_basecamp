/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 01:56:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/27 01:59:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase_letter(char character)
{
	int is_uppercase;

	is_uppercase = (character >= 'A' && character <= 'Z');
	return (is_uppercase);
}

char	*ft_strlowcase(char *str)
{
	char	current_char;
	int		iterator;

	iterator = 0;
	current_char = str[iterator];
	while (current_char != '\0')
	{
		if (is_uppercase_letter(current_char))
			str[iterator] = current_char + 32;
		iterator++;
		current_char = str[iterator];
	}
	return (str);
}
