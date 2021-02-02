/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:44:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/03 06:33:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calculate_string_size(char *string)
{
	int size;

	size = 1;
	while (*string != '\0')
	{
		string++;
		size++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*destination;
	char	*initial_destination;
	int		total_size;

	total_size = sizeof(*destination) * calculate_string_size(src);
	initial_destination = malloc(total_size);
	destination = initial_destination;
	while (*src != '\0')
	{
		*destination = *src;
		src++;
		destination++;
	}
	*destination = '\0';
	return (initial_destination);
}
