/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 05:32:54 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 01:12:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	iterate_row_forwards(int board[4][4], int current_column,
								int *tallest_box, int *visible_box_count)
{
	int current_row;

	current_row = 0;
	while (current_row < 4)
	{
		if (board[current_row][current_column] > *tallest_box)
		{
			*tallest_box = board[current_row][current_column];
			*visible_box_count = *visible_box_count + 1;
		}
		current_row++;
	}
}

void	iterate_row_backwards(int board[4][4], int current_column,
								int *tallest_box, int *visible_box_count)
{
	int current_row;

	current_row = 3;
	while (current_row >= 0)
	{
		if (board[current_row][current_column] > *tallest_box)
		{
			*tallest_box = board[current_row][current_column];
			*visible_box_count = *visible_box_count + 1;
		}
		current_row--;
	}
}

void	iterate_column_forwards(int board[4][4], int current_row,
								int *tallest_box, int *visible_box_count)
{
	int current_column;

	current_column = 0;
	while (current_column < 4)
	{
		if (board[current_row][current_column] > *tallest_box)
		{
			*tallest_box = board[current_row][current_column];
			*visible_box_count = *visible_box_count + 1;
		}
		current_column++;
	}
}

void	iterate_column_backwards(int board[4][4], int current_row,
								int *tallest_box, int *visible_box_count)
{
	int current_column;

	current_column = 3;
	while (current_column >= 0)
	{
		if (board[current_row][current_column] > *tallest_box)
		{
			*tallest_box = board[current_row][current_column];
			*visible_box_count = *visible_box_count + 1;
		}
		current_column--;
	}
}
