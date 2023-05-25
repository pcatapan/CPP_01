/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:32:02 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/15 16:33:03 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Replace
{
private:
	std::string _inFile;
	std::string _outFile;

public:
	Replace( std::string filename);
	~Replace();

	void	replace( std::string s1, std::string s2);
};

#endif