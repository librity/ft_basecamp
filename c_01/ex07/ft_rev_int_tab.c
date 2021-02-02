/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 04:03:00 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 04:37:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int auxiliary[size];
	int iterator;

	iterator = 0;
	while (iterator < size)
	{
		auxiliary[size - 1 - iterator] = tab[iterator];
		iterator++;
	}
	iterator = 0;
	while (iterator < size)
	{
		tab[iterator] = auxiliary[iterator];
		iterator++;
	}
}
