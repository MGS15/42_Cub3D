/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:00:32 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/28 12:56:03 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "../../libs/libft/libft.h"
# include "../../libs/mlx/mlx.h"

// parssing:
void	ft_chk_map_ext(char *av);

void	ft_read_map( char *file, t_root *root );
char	*ft_read_file( int fd );

#endif