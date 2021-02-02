/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 05:32:54 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 01:12:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_utilities.h"

extern int	g_borders[4 * 4];

int	does_not_satisfy_upper_border(int board[4][4])
{
	int current_column;
	int visible_box_count;
	int tallest_box;
	int border_index;

	border_index = 0;
	current_column = 0;
	while (border_index < 4)
	{
		visible_box_count = 0;
		tallest_box = 0;
		iterate_row_forwards(board, current_column,
								&tallest_box, &visible_box_count);
		if (visible_box_count != g_borders[border_index])
			return (1);
		border_index++;
		current_column++;
	}
	return (0);
}

int	does_not_satisfy_lower_border(int board[4][4])
{
	int current_column;
	int visible_box_count;
	int tallest_box;
	int border_index;

	border_index = 4;
	current_column = 0;
	while (border_index < 8)
	{
		visible_box_count = 0;
		tallest_box = 0;
		iterate_row_backwards(board, current_column,
								&tallest_box, &visible_box_count);
		if (visible_box_count != g_borders[border_index])
			return (1);
		border_index++;
		current_column++;
	}
	return (0);
}

int	does_not_satisfy_left_border(int board[4][4])
{
	int current_row;
	int visible_box_count;
	int tallest_box;
	int border_index;

	border_index = 8;
	current_row = 0;
	while (border_index < 12)
	{
		visible_box_count = 0;
		tallest_box = 0;
		iterate_column_forwards(board, current_row,
								&tallest_box, &visible_box_count);
		if (visible_box_count != g_borders[border_index])
			return (1);
		border_index++;
		current_row++;
	}
	return (0);
}

int	does_not_satisfy_right_border(int board[4][4])
{
	int current_row;
	int visible_box_count;
	int tallest_box;
	int border_index;

	current_row = 0;
	border_index = 12;
	while (border_index < 16)
	{
		visible_box_count = 0;
		tallest_box = 0;
		iterate_column_backwards(board, current_row,
									&tallest_box, &visible_box_count);
		if (visible_box_count != g_borders[border_index])
			return (1);
		border_index++;
		current_row++;
	}
	return (0);
}

int	is_valid_solution(int board[4][4])
{
	if (does_not_satisfy_upper_border(board))
		return (0);
	if (does_not_satisfy_lower_border(board))
		return (0);
	if (does_not_satisfy_left_border(board))
		return (0);
	if (does_not_satisfy_right_border(board))
		return (0);
	return (1);
}
