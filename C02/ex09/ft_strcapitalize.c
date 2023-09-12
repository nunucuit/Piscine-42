/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:52:36 by gabrsanc          #+#    #+#             */
/*   Updated: 2023/08/28 14:48:33 by gabrsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	caps;

	i = 0;
	caps = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			caps = 0;
		}
		if (caps == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			caps = 0;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&&!(str[i] >= 'A' && str[i] <= 'Z')
			&&!(str[i] >= '0' && str[i] <= '9'))
			caps = 1;
		i++;
	}
	return (str);
}
