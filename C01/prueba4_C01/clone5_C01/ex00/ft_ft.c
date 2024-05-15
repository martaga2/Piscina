/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:41:52 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/10 10:47:53 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int forma1;
	int	*forma2;

	ft_ft(&forma1);
	ft_ft(forma2);

	forma1 = 56;
	*forma2 = 56;


	write(1, &forma1, 1);
	write(1, "\n", 1);

	write(1, forma2, 1);
	write(1, "\n", 1);
	
	printf("%d\n", forma1);
	printf("%d\n", *forma2);
	return (0);
}*/
