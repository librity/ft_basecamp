/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:31:33 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/12/02 20:41:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *program_name;

	(void)argc;
	program_name = *argv;
	while (*program_name)
	{
		write(1, program_name, 1);
		program_name++;
	}
	write(1, "\n", 1);
	return (0);
}
