/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:41:38 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/15 15:41:39 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
    Zombie *zombiz = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombiz[i].setName(name);
    }
    return zombiz;
}