/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 09:44:19 by strieste          #+#    #+#             */
/*   Updated: 2026/02/06 21:35:16 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_name = "";
	this->_lastname = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_secret = "";
	return ;
}

void	Contact::newContact(void)
{
	std::cout << std::endl;
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

void	Contact::printOne(void)
{
	std::cout << "\033[32mName: \033[0m" << this->_name << std::endl;
	std::cout << "\033[32mLast name: \033[0m" << this->_lastname << std::endl;
	std::cout << "\033[32mNickname: \033[0m" << this->_nickname << std::endl;
	std::cout << "\033[32mPhone number: \033[0m" << this->_phone_number << std::endl;
	std::cout <<  "\033[32mDarkest secret: \033[0m" << this->_secret << std::endl;
	std::cout << std::endl;
	return ;
}

void	Contact::printAll(int count)
{
	std::string	buff;
	
	std::cout << std::setw(12) << count << std::right << "|";
	buff = stringSize(this->_name);
	std::cout << std::setw(12) << buff << std::right << "|";
	buff = stringSize(this->_lastname);
	std::cout << std::setw(12) << buff << std::right << "|";
	buff = stringSize(this->_nickname);
	std::cout << std::setw(12) << buff << std::right << "|" << std::endl;
}

std::string	Contact::stringSize(std::string str)
{
	std::string	buff;

	if (str.length() > 10)
	{
		buff = str.substr(0, 10);
		buff[9] = '.';
		return (buff);
	}
	buff = str.substr(0, 10);
	return (buff);
}

Contact::~Contact(void)
{
	this->_name = "";
	this->_lastname = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_secret = "";
	return ;
}
