/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:16:58 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/11 13:46:54 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int n;
	int m;

	n = 1;
	m = 3;

	char j;
	char k;


	ft_swap(&n,&m);

	j = n +'0';
	k = m +'0'; 

	write(1, &j, 1);
	write(1, &k, 1);
	write(1, "\n", 1);
	printf("%d%d", n, m);
	
	return(0);
}*/

/*int main(void)
{
    char n;
    char m;

    n = "7";
    m = "3";

    ft_swap(&n,&m);
    write(1, &n, 1);
    write(1, &m, 1);
    printf("%d%d", n, m);

    return(0);
}*/
