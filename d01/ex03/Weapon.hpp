/*   Updated: 2022/11/12 09:39:17 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

public:
	Weapon(std::string type);
	~Weapon();

	/*						ACCESSOR						*/
	void		setType(std::string type);
	std::string	&getType(void);
	
private:
	std::string _type;

};

#endif