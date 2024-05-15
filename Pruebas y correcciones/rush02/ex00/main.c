/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsevilla <fsevilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:25:12 by fsevilla          #+#    #+#             */
/*   Updated: 2023/11/12 23:25:13 by fsevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void read_file(char *, char ***);

void ft_get_number_break_down(char *, char ***);

void ft_init_array(char ***formatted_dict, int rows, int cols, int depth)
{
	int i;
	int j;

	i = 0;
  	while (i < rows) {
	   	// Allocate memory for the second dimension (columns) in each row
        formatted_dict[i] = (char **)malloc(cols * sizeof(char *));
        // Check if allocation was successful
        if (formatted_dict[i] == NULL) {
            printf("Memory allocation failed for the second dimension in row %d.\n", i);
        	return ;
		}
		j = 0;
        while (j < cols) {
            // Allocate memory for the third dimension (depth) in each column
            formatted_dict[i][j] = (char *)malloc(depth * sizeof(char));
            // Check if allocation was successful
            if (formatted_dict[i][j] == NULL) {
                printf("Memory allocation failed for the third dimension in row %d, column %d.\n", i, j);
 				return ;
            }
            j++;
        }
        i++;
    }
}

int	ft_is_number_positive(char *n)
{
	int	i;

	i = 0;
	if (n[i] == '\0')
		return (0);
	while (n[i] != 0)
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char ***formatted_dict;
	int rows;
	int cols;
	int depth;
	int index;

	index = 0;
	rows = 100;
	cols = 2;
	depth = 50;
	// Allocate memory for the first dimension (rows)
    formatted_dict = (char ***)malloc(rows * sizeof(char **));
	ft_init_array(formatted_dict, rows, cols, depth);
	read_file("numbers.dict", formatted_dict);
	
	i = 0;
	j = 0;
	printf("%s\n", formatted_dict[0][1]);

	if ((argc >= 2 && argc <= 3)
		&& ft_is_number_positive(argv[argc - 1]))
	{
		ft_get_number_break_down((argv[argc - 1]), formatted_dict);
	}
	else
		write(1, "Error\n", 6);
}
