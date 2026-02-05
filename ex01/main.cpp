/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:02:25 by strieste          #+#    #+#             */
/*   Updated: 2026/02/05 13:55:38 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	search_contact(PhoneBook *phone_book, int number);
void	add_contact(PhoneBook *phone_book, int number);
void	command_not_found(void);

int	main(void)
{
	std::string	command;
	PhoneBook	phone_book;
	int			number;
	int			index;
	
	number = 0;
	index = 0;
	while (1)
	{
		std::cout << "Enter your command : " << std::endl;
		std::cin >> command;
		if (!command.compare("ADD"))
		{
			add_contact(&phone_book, index);
			index++;
			number++;
		}
		else if (!command.compare("SEARCH"))
			search_contact(&phone_book, number);
		else if (!command.compare("EXIT"))
			break ;
		else
			command_not_found();
		if (index == 8)
			index = 0;
	}
	return (0);
}

void	add_contact(PhoneBook *phone_book, int number)
{
	(*phone_book).addNew(number);
	return ;
}

void	search_contact(PhoneBook *phone_book, int number)
{
	if (number > 0)
	{
		(*phone_book).searchContact(number);
		(*phone_book).printContact(number);
	}
	else
		std::cout << "\033[31mNo contact found\033[0m" << std::endl;
	return ;
}

void	command_not_found(void)
{
	std::cout << "Choice of command :" << std::endl;
	std::cout << "- \033[32mADD\033[0m" << std::endl;
	std::cout << "- \033[32mSEARCH\033[0m" << std::endl;
	std::cout << "- \033[32mEXIT\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}
