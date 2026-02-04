/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:02:25 by strieste          #+#    #+#             */
/*   Updated: 2026/02/04 14:12:26 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	search_contact(PhoneBook phone_book);
void	add_contact(PhoneBook phone_book, int number);

int	main(void)
{
	std::string	command;
	PhoneBook	phone_book;
	int			number;
	
	number = 0;
	while (1)
	{
		std::cout << "Enter your command: " << std::endl;
		std::cin >> command;
		if (!command.compare("ADD"))
		{
			add_contact(phone_book, number);
			number++;
		}
		else if (!command.compare("SEARCH"))
			search_contact(phone_book);
		else if (!command.compare("EXIT"))
			break ;
		else
		{
			std::cout << "Choice of command :" << std::endl;
			std::cout << "- ADD" << std::endl;
			std::cout << "- SEARCH" << std::endl;
			std::cout << "- EXIT" << std::endl;
			std::cout << std::endl;
		}
		if (number == 8)
			number = 0;
	}
	return (0);
}

void	add_contact(PhoneBook phone_book, int number)
{
	phone_book.add_new(number);
	return ;
}

void	search_contact(PhoneBook phone_book)
{
	(void)phone_book;
	phone_book.print();
}
