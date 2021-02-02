/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 02:46:24 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/27 04:57:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	calculate_string_length(char *string)
{
	char	current_char;
	int		iterator;

	iterator = 0;
	current_char = string[iterator];
	if (string)
		while (current_char != '\0')
		{
			iterator++;
			current_char = string[iterator];
		}
	return (iterator);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			current_char;
	unsigned int	iterator;

	if (src == 0)
		return (0);
	if (size > 0)
	{
		iterator = 0;
		current_char = src[iterator];
		while (current_char != '\0' && iterator < (size - 1))
		{
			dest[iterator] = current_char;
			iterator++;
			current_char = src[iterator];
		}
		dest[iterator] = '\0';
	}
	return (calculate_string_length(src));
}
