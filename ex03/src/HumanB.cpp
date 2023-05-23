/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:53:00 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/17 20:04:41 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
    this->_weapon = NULL;
    std::cout << this->_name << " has been created." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " has been destroyed." << std::endl;
}

void    HumanB::setWeapon( Weapon& weapon ) {
    this->_weapon = &weapon;
}

void    HumanB::attack( void ) const {
    if (this->_weapon != NULL && this->_weapon->getType() != "") {
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    } else {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}
