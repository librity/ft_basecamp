/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:12:27 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 00:00:44 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

int		should_stop_checking(int index);
void	handle_final_solution(int board[4][4]);
void	check_if_valid_so_far(int board[4][4], int iterator, int index,
								int *valid_so_far);
void	recursive_board_generator(int board[4][4], int index);
int		solve_or_fail(void);

#endif
