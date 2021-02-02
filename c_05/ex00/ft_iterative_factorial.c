/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:44:23 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/03 04:06:24 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int number;
	int factorial;

	number = nb;
	if (number < 0)
		return (0);
	if (number == 0 || number == 1)
		return (1);
	factorial = 1;
	while (number > 1)
	{
		factorial *= number;
		number--;
	}
	return (factorial);
}
