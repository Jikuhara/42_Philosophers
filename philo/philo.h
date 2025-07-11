/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:39:50 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 13:50:00 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHOLO_H

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

typedef struct
{
	int philo_num;
	int time_to_die_ms;
	int time_to_eat_ms;
	int time_to_sleep_ms;
	int number_of_times_each_philosopher_must_eat;
} philo_info_t;

#endif
