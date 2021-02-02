/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 01:35:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/27 01:55:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase_letter(char character)
{
	int is_lowercase;

	is_lowercase = (character >= 'a' && character <= 'z');
	return (is_lowercase);
}

char	*ft_strupcase(char *str)
{
	char	current_char;
	int		iterator;

	iterator = 0;
	current_char = str[iterator];
	while (current_char != '\0')
	{
		if (is_lowercase_letter(current_char))
			str[iterator] = current_char - 32;
		iterator++;
		current_char = str[iterator];
	}
	return (str);
}
