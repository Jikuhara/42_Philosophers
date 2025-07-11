/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 01:36:25 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 13:31:16 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char const *argv[])
{
	int philo_num;
	int time_to_die_ms;
	int time_to_eat_ms;
	int time_to_sleep_ms;
	int number_of_times_each_philosopher_must_eat;

	if (argc != 5 && argc != 6)
	{
		printf("Your input is wrong.\n");
		return (1);
	}
	philo_num = atoi(argv[1]);
	time_to_die_ms = atoi(argv[2]);
	time_to_eat_ms = atoi(argv[3]);
	time_to_sleep_ms = atoi(argv[4]);
	if (argc == 6)
		number_of_times_each_philosopher_must_eat = atoi(argv[5]);

 
	printf("Hello World!");
	return (0);
}

