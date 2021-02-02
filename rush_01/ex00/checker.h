/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:12:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/29 23:29:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

int	does_not_satisfy_upper_border(int board[4][4]);
int	does_not_satisfy_lower_border(int board[4][4]);
int	does_not_satisfy_left_border(int board[4][4]);
int	does_not_satisfy_right_border(int board[4][4]);
int	is_valid_solution(int board[4][4]);

#endif
