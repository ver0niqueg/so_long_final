/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:23:00 by vgalmich          #+#    #+#             */
/*   Updated: 2024/10/15 19:49:32 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	print_error(char *message, t_game *game)
{
	if (game->map_alloc == true)
		free_map(game);
	free(game);
	ft_printf(RED"Error\n"GREY"%s\n"RESENT, message);
	exit (EXIT_FAILURE);
}
