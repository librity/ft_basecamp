/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:43:07 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/02 20:51:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_string(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int current_argument;

	current_argument = argc - 1;
	while (current_argument > 0)
	{
		put_string(argv[current_argument]);
		current_argument--;
	}
	return (0);
}
