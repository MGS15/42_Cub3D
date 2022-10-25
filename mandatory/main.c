/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:56:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/25 09:59:12 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/cub3d.h"
#include "headers/types.h"
#include "headers/macros.h"

int	main(int c, char **v)
{
	if (c != 2 || !v[1])
	{
		printf("\033[0;31mA map in format `*.cub` is required!\033[0;37m\n");
		return (EXIT_FAILURE);
	}
}