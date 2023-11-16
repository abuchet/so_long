/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:12:06 by tblaase           #+#    #+#             */
/*   Updated: 2023/05/01 16:57:32 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_win(t_data *data)
{
	ft_printf("You found all the Dragon Balls and summoned Shenron.\n");
	ft_printf("Your wish has been granted!\n");
	ft_printf("Is %d moves really the best you can do?\n", data->counter);
	exit(EXIT_SUCCESS);
}
