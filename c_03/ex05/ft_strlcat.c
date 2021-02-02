/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:57:00 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 23:15:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				calculate_string_length(char *string)
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

void			copy_string_up_to(int remaining_size,
									char *source, char *destination)
{
	while (*source != '\0')
	{
		if (remaining_size != 1)
		{
			*destination = *source;
			destination++;
			remaining_size--;
		}
		source++;
	}
	*destination = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	remaining_size;
	unsigned int	destination_length;
	char			*source;
	char			*destination;

	destination = dest;
	source = src;
	remaining_size = size - 1;
	while (remaining_size != 0 && *destination != '\0')
	{
		destination++;
		remaining_size--;
	}
	destination_length = destination - dest;
	remaining_size = size - destination_length;
	if (remaining_size == 0)
		return (destination_length + calculate_string_length(source));
	copy_string_up_to(remaining_size, source, destination);
	return (destination_length + (source - src));
}
