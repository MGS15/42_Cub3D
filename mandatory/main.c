/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:56:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/27 17:39:07 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/cub3d.h"
#include "headers/types.h"
#include "headers/macros.h"

void	ft_draw( t_root *root )
{
}

void	ft_read_map( char *file, t_root *root )
{
	char	**map;

	map = ft_split(file, '\n');
	if (!map)
		return ;
	root->map.data = map;
}

char	*ft_read_file( int fd )
{
	static char		*res;
	char			*buf;
	int				n;

	buf = (char *)malloc(sizeof(char) + 2);
	if (!buf)
		return (NULL);
	if (!res)
		res = ft_strdup("");
	n = 1;
	while (n != 0)
	{
		n = read(fd, buf, 1);
		if (n == -1)
		{
			free (buf);
			free (res);
			return (NULL);
		}
		buf[n] = '\0';
		res = ft_strjoin(res, buf);
	}
	free (buf);
	return (res);
}

int	main( int c, char **av )
{
	t_root	root;
	int		fd;
	char	*map_file;

	if (c != 2 || !av[1])
	{
		printf("\033[0;31mA map in format `*.cub` is required!\033[0;37m\n");
		return (EXIT_FAILURE);
	}
	fd = open(av[1], O_RDONLY);
	if (fd != 3)
		return (0);
	map_file = ft_read_file(fd);
	if (!map_file)
		return (0);
	ft_read_map(map_file, &root);
	close(fd);
	return (0);
}
