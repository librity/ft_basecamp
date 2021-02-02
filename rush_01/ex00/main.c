/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 22:32:23 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 01:39:33 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		g_borders[4 * 4];

int		main(int argc, char **argv)
{
	char	*raw_arguments;

	if (argc != 2)
		return (generic_error());
	raw_arguments = fetch_second_argument(argv);
	if (!is_valid_argument(raw_arguments))
		return (generic_error());
	parse_arguments(raw_arguments);
	return (solve_or_fail());
}
