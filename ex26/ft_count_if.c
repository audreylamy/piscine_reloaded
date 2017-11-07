/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:46:36 by alamy             #+#    #+#             */
/*   Updated: 2017/11/07 17:23:05 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			i++;
			nb++;
		}
		else if (f(tab[i]) == 0)
		{
			i++;
		}
	}
	return (nb);
}
