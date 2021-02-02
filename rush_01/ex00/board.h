/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:12:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/29 22:37:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

void	initialize_board(int board[4][4]);
void	copy_board(int original[4][4], int copy[4][4]);
void	print_board(int board[4][4]);

#endif
