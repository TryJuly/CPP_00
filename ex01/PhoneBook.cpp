/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:18:01 by strieste          #+#    #+#             */
/*   Updated: 2026/02/04 14:14:04 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor" << std::endl;
}

void	PhoneBook::add_new(int number)
{
	this->_contact[number].newContact();
}

void	PhoneBook::print(void)
{
	this->_contact->print(0);
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor" << std::endl;
}
