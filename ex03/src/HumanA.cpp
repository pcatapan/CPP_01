/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:52:53 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/17 20:04:39 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {
    std::cout << this->_name << " has been created." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " has been destroyed." << std::endl;
}

void    HumanA::attack( void ) const {
    if (this->_weapon.getType() != "") {
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
    } else {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}