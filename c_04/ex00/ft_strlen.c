/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:36:06 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 23:49:42 by lpaulo-m         ###   ########.fr       */
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
