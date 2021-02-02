/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 00:06:18 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/23 18:34:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_top(int length)
{
	int i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i < length)
			ft_putchar('*');
		else
			ft_putchar('\\');
		i++;
	}
	ft_putchar('\n');
}

void	put_middle(int length)
{
	int i;

	i = 1;
	while (i <= length)
	{
		if (i == 1 || i == length)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	put_bottom(int length)
{
	int j;

	j = 1;
	while (j <= length)
	{
		if (j == 1)
			ft_putchar('\\');
		else if (j == length)
			ft_putchar('/');
		else
			ft_putchar('*');
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
			put_top(x);
		else if (j != y)
			put_middle(x);
		else
			put_bottom(x);
		j++;
	}
}
