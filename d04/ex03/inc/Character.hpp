/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:02:12 by genouf            #+#    #+#             */
/*   Updated: 2022/11/20 15:18:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ICharacter.hpp>

class Character : public ICharacter {
	
public:
	Character(void);
	Character(std::string const _name);
	Character(Character const &src);
	Character & operator=(Character const &rhs);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	std::string	_name;
	AMateria	*_inventory[4];
	AMateria	**_trash;
	int			_trash_size;
	void		use_trash(AMateria *m);

};