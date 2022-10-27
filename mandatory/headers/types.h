/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:47:27 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/27 17:11:59 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct s_map
{
	char	**data;
}	t_map;

typedef struct s_root
{
	t_map	map;
}t_root;

#endif