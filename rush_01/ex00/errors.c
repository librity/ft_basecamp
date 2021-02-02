/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:49:58 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 00:36:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int		generic_error(void)
{
	const char	error_message[7] = "Error\n";

	put_string(error_message, 7);
	return (2);
}
