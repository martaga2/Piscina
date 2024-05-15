/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:53:53 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/11 13:49:37 by martaga2         ###   ########.fr       */
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
#include <unistd.h>

int	main(void)
{
	int n;
	int m;

	n = 7;
	m = 3;

	ft_ultimate_div_mod(&n, &m);
	printf("%d\n%d", n, m);
	return (0);
}*/
