/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:36:00 by vgalmich          #+#    #+#             */
/*   Updated: 2024/10/15 19:54:23 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


/* fonction qui check les arguments passes sur la ligne de commande */
void	ft_check_args(int argc, char **argv, t_game *game)
{
	if (argc > 2)
		print_error("Too many arguments", game);
	if (argc < 2)
		print_error("Map file is missing", game);
}
