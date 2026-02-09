/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:55:49 by strieste          #+#    #+#             */
/*   Updated: 2026/02/07 11:01:03 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		
		void	addNew(int number);
		void	printContact(void);
		void	searchContact(void);
	private:
		int		_nb_contact;
		Contact _contact[8];
};

#endif