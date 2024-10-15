/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:11:34 by vgalmich          #+#    #+#             */
/*   Updated: 2024/10/15 19:46:10 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h"
# include "../Libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>


// structure pour le joueur
typedef struct	s_player
{
	int		x;
	int		y;
	void	*img;
}				t_player;

// structure pour les images
typedef struct	s_image
{
	void	*xpn_ptr;
	int		x;
	int		y;
}				t_image;

// structure pour la map
typedef struct	s_map
{
	int			rows;
	int			columns;
	int			stars;
	int			exit;
	t_player	player;
}				t_map;

// structure qui rassemble toutes les infos du jeu
typedef struct	s_game
{
	bool	map_alloc;
	void	*mlx_ptr;
	void	*win_ptr;
	t_map	map;
	t_image	player_front;
	t_image	player_back;
	t_image	player_left;
	t_image	player_right;
	t_image	floor;
	t_image	wall;
	t_image	stars;
	t_image	closed_exit;
	t_image	opened_exit;
}				t_game;

// structure pour checker
typedef struct	s_check
{
	int	stars;
	int	exit;
}				t_check;


#endif
