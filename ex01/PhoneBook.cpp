/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:18:01 by strieste          #+#    #+#             */
/*   Updated: 2026/02/05 14:06:18 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor" << std::endl;
}

void	PhoneBook::addNew(int number)
{
	this->_contact[number].newContact();
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor" << std::endl;
}

void	PhoneBook::printContact(int number)
{
	int	index;
	
	std::cout << "Choose index of contact : ";
	std::cin >> index;
	number++;
	while (index < number || index > number)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10, '\n');
		}
		this->searchContact(number);
		std::cout << "\033[31mChoose a valide index of contact : \033[0m";
		std::cin >> index;
	}
	this->_contact[index - 1].printOne();
	return ;
}


void	PhoneBook::searchContact(int number)
{
	int			count;
	std::string	buff;

	if (number > 8)
		number = 8;
	std::cout << "──────────────────────────────────────────────" << std::endl;
	buff = "Index";
	std::cout << std::setw(15 - buff.length()) << buff << "|";
	buff = "First name";
	std::cout << std::setw(15 - buff.length()) << buff << "|";
	buff = "Last name";
	std::cout << std::setw(15 - buff.length()) << buff << "|";
	buff = "Nickname";
	std::cout << std::setw(15 - buff.length()) << buff << "|" << std::endl;
	std::cout << "──────────────────────────────────────────────" << std::endl;

	count = 0;
	while (count < number)
	{
		this->_contact[count].printAll(count + 1);
		std::cout << "──────────────────────────────────────────────" << std::endl;
		count++;
	}
	return ;
}
