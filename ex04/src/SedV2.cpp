/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:24:13 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/15 16:33:52 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/replace.hpp"

Replace::Replace(std::string filename) : _inFile(filename){
	this->_outFile = this->_inFile + ".replace";
}

Replace::~Replace ( void ) {

}

void    Replace::replace( std::string toFind, std::string replace) {
	std::ifstream   ifs;
	std::ofstream   ofs;

	ifs.open(_inFile.c_str(), std::ios_base::in);
	if (ifs.is_open()) {
		std::string content;
		if (std::getline(ifs, content, '\0')) {
			ofs.open(_outFile.c_str(), std::ios_base::out);
			size_t          pos = content.find(toFind);
			while ( pos != std::string::npos ) {
				content.erase(pos, toFind.length());
				content.insert(pos, replace);
				pos = content.find(toFind);
			}
			ofs << content;
			ofs.close();
		}
		else {
			std::cerr << "Empty file found." << std::endl;
		}
		ifs.close();
	} else {
		std::cerr << "Unable to open the file." << std::endl;
		exit(EXIT_FAILURE);
	}
}
