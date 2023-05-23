/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:53:25 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/15 15:53:26 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;

public:
    HumanB( std::string name );
    ~HumanB();

    void    attack( void ) const;
    void    setWeapon( Weapon& weapon );
};

