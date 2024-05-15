/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:29:32 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/12 09:15:04 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int n;
	int m;
	int div;
	int mod;
	
	n = 9;
	m = 4;

	ft_div_mod(n, m, &div, &mod);

	printf("%d\n%d", div, mod);

	return (0);
}*/
