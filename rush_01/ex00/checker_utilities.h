/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utilities.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:12:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/29 23:19:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_UTILITIES_H
# define CHECKER_UTILITIES_H

void	iterate_row_forwards(int board[4][4], int current_column,
								int *tallest_box, int *visible_box_count);
void	iterate_row_backwards(int board[4][4], int current_column,
								int *tallest_box, int *visible_box_count);
void	iterate_column_forwards(int board[4][4], int current_row,
								int *tallest_box, int *visible_box_count);
void	iterate_column_backwards(int board[4][4], int current_row,
								int *tallest_box, int *visible_box_count);

#endif
