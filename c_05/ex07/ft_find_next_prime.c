/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:49:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/03 04:02:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	closest_square_root(int nb)
{
	unsigned int	square_root;
	unsigned int	test_root;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	test_root = 0;
	square_root = 0;
	while (square_root <= (unsigned int)nb)
	{
		test_root++;
		square_root = test_root * test_root;
	}
	test_root -= 1;
	return (test_root);
}

int	is_prime(int nb)
{
	unsigned int	square_root;
	unsigned int	divisor;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	divisor = 2;
	square_root = closest_square_root(nb);
	while (divisor <= square_root)
	{
		if ((unsigned int)nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (is_prime(nb))
			return (nb);
		nb++;
	}
}
