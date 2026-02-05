/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:55:49 by strieste          #+#    #+#             */
/*   Updated: 2026/02/05 11:00:31 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		
		void	addNew(int number);
		void	printContact(int number);
		void	searchContact(int number);
	private:
	Contact _contact[8];
};

#endif