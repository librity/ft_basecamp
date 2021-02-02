/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:02:39 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 00:50:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

void	initialize_board(int board[4][4])
{
	int	current_row;
	int	current_column;

	current_row = 0;
	while (current_row < 4)
	{
		current_column = 0;
		while (current_column < 4)
		{
			board[current_row][current_column] = 0;
			current_column++;
		}
		current_row++;
	}
}

void	copy_board(int original[4][4], int copy[4][4])
{
	int current_row;
	int current_column;

	current_row = 0;
	while (current_row < 4)
	{
		current_column = 0;
		while (current_column < 4)
		{
			copy[current_row][current_column] =
				original[current_row][current_column];
			current_column++;
		}
		current_row++;
	}
}

void	print_board(int board[4][4])
{
	int	current_row;
	int	current_column;

	current_row = 0;
	while (current_row < 4)
	{
		current_column = 0;
		while (current_column < 4)
		{
			put_number_as_char(board[current_row][current_column]);
			if (current_column != 4 - 1)
				put_char(' ');
			current_column++;
		}
		put_char('\n');
		current_row++;
	}
}
