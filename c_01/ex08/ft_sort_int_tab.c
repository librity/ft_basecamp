/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 04:38:25 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 05:26:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int iterator;
	int jterator;
	int auxiliary;

	iterator = 0;
	while (iterator < size)
	{
		jterator = iterator + 1;
		while (jterator < size)
		{
			if (tab[iterator] > tab[jterator])
			{
				auxiliary = tab[iterator];
				tab[iterator] = tab[jterator];
				tab[jterator] = auxiliary;
			}
			jterator++;
		}
		iterator++;
	}
}
