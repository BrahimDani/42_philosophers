/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 00:19:37 by brdani            #+#    #+#             */
/*   Updated: 2025/07/26 01:15:54 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

typedef struct s_rule
{
	int				nb_philo;
	long long		time_die;
	long long		time_eat;
	long long		time_sleep;
	int				must_eat;
	pthread_mutex_t	*fork;
	pthread_mutex_t	print;
	long long		start_time;
}					t_rules;

typedef struct s_philo
{
	int				id;
	int				meal_eaten;
	long long		last_meal;
	pthread_t		thread;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	t_rules			*rules;
}					t_philo;

# include <pthread.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/time.h>
# include <stdio.h>

#endif