/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:23:42 by vgalmich          #+#    #+#             */
/*   Updated: 2024/10/15 19:26:47 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// free all allocated memory
// free images
// free map

void	free_images(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->wall.xpm_ptr)
	// same
}
