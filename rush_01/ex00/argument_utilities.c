/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_utilities.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:01:57 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/29 23:04:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid_number(char character)
{
	return (character >= '1' && character <= '4');
}

int		is_space(char character)
{
	return (character == ' ');
}
