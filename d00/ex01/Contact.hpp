/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:18:46 by genouf            #+#    #+#             */
/*   Updated: 2022/11/09 12:10:58 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
	
public:
	Contact(void);
	~Contact();
	
	/*						ACCESSOR						*/
	void	setContact(std::string first_n, std::string last_n, std::string nick, std::string num, std::string secrt);
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getNumber(void) const;
	std::string	getSecret(void) const;
	
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string number;
	std::string secret;
	
};

#endif
