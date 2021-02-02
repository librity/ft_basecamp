/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 03:33:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/26 03:42:00 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int ratio;
	int remainder;

	if (b == 0)
		return ;
	ratio = *a / *b;
	remainder = *a % *b;
	*a = ratio;
	*b = remainder;
}
