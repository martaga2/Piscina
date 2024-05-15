/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:10:07 by martaga2          #+#    #+#             */
/*   Updated: 2023/10/29 19:39:31 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}

/*
int	main(void)
{
	int	n;

	n = 0;
	ft_is_negative(n);
	n = 8;
	ft_is_negative(n);
	n = -3;
	ft_is_negative(n);
	return (0);
}
*/
