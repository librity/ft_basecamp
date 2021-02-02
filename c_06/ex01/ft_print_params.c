/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:38:42 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/02 20:40:43 by lpaulo-m         ###   ########.fr       */
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

	argv++;
	current_argument = 1;
	while (current_argument < argc)
	{
		put_string(*argv);
		current_argument++;
		argv++;
	}
	return (0);
}
