/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:54:40 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/06 15:47:57 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	 main(void)
{
	int h;
	int j;

	h = 3;
	j = 5;

	ft_swap(&h, &j);

	printf("%d %d", h, j);
	
	return (0);
}
*/
