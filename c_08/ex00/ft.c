/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/04 21:48:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int auxiliary;

	auxiliary = *a;
	*a = *b;
	*b = auxiliary;
}

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

int	ft_strcmp(char *s1, char *s2)
{
	char	s1_current;
	char	s2_current;
	int		iterator;

	iterator = 0;
	s1_current = s1[0];
	s2_current = s2[0];
	while (s1_current != '\0' || s2_current != '\0')
	{
		if (s1_current < s2_current)
			return (-1);
		else if (s1_current > s2_current)
			return (1);
		iterator++;
		s1_current = s1[iterator];
		s2_current = s2[iterator];
	}
	return (0);
}

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
