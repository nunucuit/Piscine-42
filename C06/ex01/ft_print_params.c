/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:42:08 by gabrsanc          #+#    #+#             */
/*   Updated: 2023/08/30 18:45:14 by gabrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
	return (0);
}