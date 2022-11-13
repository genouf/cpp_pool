/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:53:25 by genouf            #+#    #+#             */
/*   Updated: 2022/11/13 18:22:38 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	
public:
	Harl(void);
	~Harl();
	
	/*						FUNCTIONS						*/
	void	complain(std::string level) const;

private:
	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

};

typedef	void (Harl::*function_h)(void) const;

#endif