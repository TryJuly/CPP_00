/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 09:44:19 by strieste          #+#    #+#             */
/*   Updated: 2026/02/04 14:14:21 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

void	Contact::newContact(void)
{
	std::cout << "First name : ";
	std::cin >> this->_name;
	std::cout << std::endl;
	std::cout << "Lastname : ";
	std::cin >> this->_lastname;
	std::cout << std::endl;
	std::cout << "Nickname : ";
	std::cin >> this->_nickname;
	std::cout << std::endl;
	std::cout << "Phone number : ";
	std::cin >> this->_phone_number;
	std::cout << std::endl;
	std::cout << "The darkest secret : ";
	std::cin >> this->_secret;
	std::cout << std::endl;
	return ;
}

void	Contact::print(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->_lastname << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_secret << std::endl;
	return ;
}

void	Contact::printAll(void)
{
	
}

// void	Contact::newContact(std::string name, std::string lastname, std::string nickname, std::string secret, std::string number)
// {
// 	this->name = name;
// 	this->lastname = lastname;
// 	this->nickname = nickname;
// 	this->secret = secret;
// 	this->phone_number= number;
// }

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
