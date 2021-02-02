/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:12:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 21:23:42 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calculate_string_length(char *string)
{
	int		iterator;
	char	current_character;

	iterator = 0;
	while (1)
	{
		current_character = string[iterator];
		if (current_character == '\0')
			break ;
		iterator++;
	}
	return (iterator);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	destination_length;
	unsigned int	iterator;
	char			source_character;

	destination_length = calculate_string_length(dest);
	iterator = 0;
	source_character = src[0];
	while (source_character != '\0')
	{
		dest[destination_length + iterator] = source_character;
		iterator++;
		source_character = src[iterator];
	}
	dest[destination_length + iterator] = '\0';
	return (dest);
}
