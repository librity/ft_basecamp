/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 05:38:30 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/03 15:55:15 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *initial_range;
	int *range;
	int total_size;

	if (min >= max)
		return (0);
	total_size = sizeof(*range) * (max - min);
	initial_range = malloc(total_size);
	if (!initial_range)
		return (0);
	range = initial_range;
	while (min < max)
	{
		*range = min;
		min++;
		range++;
	}
	return (initial_range);
}
