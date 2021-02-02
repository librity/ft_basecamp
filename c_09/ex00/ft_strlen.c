/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:22 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/04 20:42:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		length;
	char	current_char;

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
