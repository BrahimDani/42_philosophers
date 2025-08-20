/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 00:18:30 by brdani            #+#    #+#             */
/*   Updated: 2025/07/26 01:30:25 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	/*
		ac[2] = nombre de philo
		ac[3] = temps pour mourir
		ac[4] = temps pour manger 
		ac[5] = temps pour dormir
		(optionel)ac[6] = nombre de fois ou les philo doivent manger

		tout les temps sont en miliseconde (usleep * 1000)
	*/
	if (check_argument(argc, argv))
		return (1);
	if (argc == 6)
	{
		/*
			ici c'est exactement la meme chose mais les philo ont un nombre de tour pour manger (en gros si je donne ac[6] = 4 il iront graille tous que 4 fois)
			
		*/
	}
}