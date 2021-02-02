/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:19 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/04 20:44:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
