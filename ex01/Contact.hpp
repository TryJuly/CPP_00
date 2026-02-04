/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 09:44:22 by strieste          #+#    #+#             */
/*   Updated: 2026/02/04 14:04:45 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include "iostream"

class	Contact
{
	public:
		Contact();
		~Contact();
		
		void	newContact();
		void	print();
		void	printAll();
	private:
		std::string	_name;
		std::string	_secret;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phone_number;
};

#endif