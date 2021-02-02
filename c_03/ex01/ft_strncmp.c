/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:02:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 19:08:44 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	iterator;
	char			s1_current;
	char			s2_current;

	iterator = 0;
	s1_current = s1[0];
	s2_current = s2[0];
	while ((s1_current != '\0' || s2_current != '\0') && iterator < n)
	{
		if (s1_current != s2_current)
			return (s1_current - s2_current);
		iterator++;
		s1_current = s1[iterator];
		s2_current = s2[iterator];
	}
	return (0);
}
