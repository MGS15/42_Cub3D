/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_handlers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:07:23 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/23 18:45:39 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/headers/cub3d.h"

void	*ft_malloc(int size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
	{
		printf("malloc failed!!\n");
		exit(EXIT_FAILURE);
	}
	return (ptr);
}
