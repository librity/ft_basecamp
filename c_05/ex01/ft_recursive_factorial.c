/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:25:54 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/02 03:29:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int number;
	int factorial;

	number = nb;
	if (number < 0)
		return (0);
	if (number == 0 || number == 1)
		return (1);
	factorial = number * ft_recursive_factorial(number - 1);
	return (factorial);
}
