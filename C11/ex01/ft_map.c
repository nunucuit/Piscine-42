/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:36:43 by gabrsanc          #+#    #+#             */
/*   Updated: 2023/09/10 15:57:17 by gabrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_mul(int a)
{
	return (a * 2);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*res;
	int	*dest;

	dest = res = (int *)malloc(length * sizeof(int));
	if (!dest)
		return (NULL);

	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

int main (void)
{
	int	i;
	int *tab;
	int length;
	int *res;

	length = 10;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	res = ft_map(tab, length, &ft_mul);
	i = 0;
	while ( i < length)
	{
		printf( "%i", res[i]);
		i++;
	}
}
