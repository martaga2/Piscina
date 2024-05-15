/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:22:45 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/06 16:35:16 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int	main (void)
{
	int	h;
	int	j;
	h	= 10;
	j	= 3;
	
	ft_ultimate_div_mod(&h, &j);
	printf("%d %d", h, j);
	return(0);
}
*/
