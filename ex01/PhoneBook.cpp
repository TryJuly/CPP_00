/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:18:01 by strieste          #+#    #+#             */
/*   Updated: 2026/02/07 10:50:30 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nb_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::addNew(int number)
{
	if (number == 8)
		number = 0;
	this->_contact[number].newContact();
	this->_nb_contact++;
	number++;
	return ;
}

// PhoneBook::~PhoneBook(void)
// {}

void	PhoneBook::printContact(void)
{
	int	index;
	
	std::cout << "Choose index of contact : ";
	std::cin >> index;
	while (std::cin.fail() || (index < 1 || (index - 1) >= this->_nb_contact))
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		this->searchContact();
		std::cout << "\033[31mChoose a valide index of contact : \033[0m";
		std::cin >> index;
	}
	this->_contact[index - 1].printOne();
	return ;
}

void	PhoneBook::searchContact(void)
{
	int			count;
	std::string	buff;

	if (this->_nb_contact < 1)
		return ;
	if ( this->_nb_contact > 8)
		this->_nb_contact = 8;
	std::cout << "────────────────────────────────────────────────────" << std::endl;
	buff = "Index";
	std::cout << std::setw(12) << buff << std::right << "|";
	buff = "First name";
	std::cout << std::setw(12) << buff << std::right << "|";
	buff = "Last name";
	std::cout << std::setw(12) << buff << std::right << "|";
	buff = "Nickname";
	std::cout << std::setw(12) << buff << std::right << "|" << std::endl;
	std::cout << "────────────────────────────────────────────────────" << std::endl;
	count = 0;
	while (count < this->_nb_contact)
	{
		this->_contact[count].printAll(count + 1);
		std::cout << "────────────────────────────────────────────────────" << std::endl;
		count++;
	}
	return ;
}
