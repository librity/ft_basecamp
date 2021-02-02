/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 05:32:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 01:53:33 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "board.h"
#include "checker.h"
#include "errors.h"

extern int	g_borders[4 * 4];
int			g_final_solution[4][4];
int			g_found_final_solution = 0;

int		should_stop_checking(int index)
{
	int is_last_iteration;

	is_last_iteration = (index == 16);
	return (is_last_iteration || g_found_final_solution);
}

void	handle_final_solution(int board[4][4])
{
	g_found_final_solution = 1;
	copy_board(board, g_final_solution);
}

void	check_if_valid_so_far(int board[4][4], int iterator, int index,
								int *valid_so_far)
{
	int row_or_column;

	row_or_column = 0;
	while (row_or_column < index / 4 || row_or_column < index % 4)
	{
		if (iterator == board[row_or_column][index % 4] ||
			iterator == board[index / 4][row_or_column])
			*valid_so_far = 0;
		row_or_column++;
	}
}

void	recursive_board_generator(int board[4][4], int index)
{
	int test_board[4][4];
	int valid_so_far;
	int iterator;

	if (should_stop_checking(index))
	{
		if (is_valid_solution(board))
			handle_final_solution(board);
		return ;
	}
	iterator = 1;
	while (iterator <= 4)
	{
		valid_so_far = 1;
		copy_board(board, test_board);
		check_if_valid_so_far(board, iterator, index, &valid_so_far);
		if (valid_so_far)
		{
			test_board[index / 4][index % 4] = iterator;
			recursive_board_generator(test_board, index + 1);
			test_board[index / 4][index % 4] = 0;
		}
		iterator++;
	}
}

int		solve_or_fail(void)
{
	int	board[4][4];

	initialize_board(board);
	recursive_board_generator(board, 0);
	if (!g_found_final_solution)
		return (generic_error());
	print_board(g_final_solution);
	return (0);
}
