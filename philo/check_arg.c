/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 01:18:57 by brdani            #+#    #+#             */
/*   Updated: 2025/07/26 01:36:30 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"


int	check_argument(int argc, char **argv)
{
	if (check_digit(argv))
		return (1);
	if (check_arg(argc, argv))
		return(1);
	if (check_action(argc, argv));
		return (1);
	return (0);
}

long long int	ft_atoll(const char *str)
{
	int				negative;
	int				i;
	long long int	nb;

	i = 0;
	negative = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = negative * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * negative);
}

int	check_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] && i <= 6)
	{
		j = 0
		while (argv[i][j])
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				printf("Error: digit isn't allowed !\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_arg(int argc, char **argv)
{
	if (argc > 6 || argc < 5)
	{
		printf("Error: Wrong numbers of arguments\n");
		return (1);
	}
	if (ft_atoll(argv[1] < 1))
	{
		printf("Error: You need more philosphers on the table\n")
		return (1);
	}
	if (ft_atoll(argv[2] < 60) || ft_atoll(argv[3] < 60) 
			|| ft_atoll(argv[4] < 60))
	{
		printf("Error: Philo don't have enough time for their actions\n");
		return (1);
	}
	if (ft_atoll(argv[1] > 200))
	{
		printf("Error: There is not enought food for every philosophers\n")
		return (1);
	}
	return (0);
}

int check_action(int argc, char **argv)
{
	if (argc == 6)
	{
		if (ft_atoll(argv[5]) < 1 || ft_atoll(argv[5]) > 2147483647)
		{
			printf("Error: Philosophers need more or less actions\n");
			return (1);
		}
	}
	if (ft_atoll(argv[2] > 2147483647) || ft_atoll(argv[3] > 2147483647) 
			|| ft_atoll(argv[4]) > 2147483647)
	{
		printf("Error: Argument above INT_MAX\n");
		return(1);
	}
}
