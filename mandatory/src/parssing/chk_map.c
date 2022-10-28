/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:13:37 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/28 11:58:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub3d.h"
#include "../headers/types.h"
#include "../headers/macros.h"

void	ft_chk_map_ext(char *av)
{
	char	*ext;
	int		i;

	i = 0;
	while (av[i] != '\0')
		i++;
	ext = ft_strnstr(&av[1], ".cub", i);
	if (!ext || ft_strncmp(ext, ".cub", 5))
		printf("\033[0;31mA Invalid extention\033[0;37m\n");
}
