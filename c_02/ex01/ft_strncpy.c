/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:30:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/27 21:30:24 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iterator;
	char			current_character;

	iterator = 0;
	current_character = src[iterator];
	while (current_character != '\0' && iterator < n)
	{
		dest[iterator] = src[iterator];
		iterator++;
		current_character = src[iterator];
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}
