/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:56:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/03 21:36:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*numbers;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	numbers = malloc(sizeof(*numbers) * size);
	if (!numbers)
	{
		*range = 0;
		return (-1);
	}
	*range = numbers;
	while (min < max)
	{
		*numbers = min;
		numbers++;
		min++;
	}
	return (size);
}
