/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 03:42:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 03:56:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		iterator;
	char	current_char;

	current_char = str[0];
	iterator = 1;
	while (current_char != '\0')
	{
		write(1, &current_char, 1);
		current_char = str[iterator];
		iterator++;
	}
}
