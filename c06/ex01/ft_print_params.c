/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:46:29 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/28 20:24:39 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	v;

	v = 1;
	i = 0;
	while (v < argc)
	{
		while (argv[v][i])
		{
			i++;
		}
		write(1, argv[v], i);
		write(1, "\n", 1);
		v++;
		i = 0;
	}
	return (0);
}
