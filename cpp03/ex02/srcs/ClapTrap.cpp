/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:21:38 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/10 19:49:38 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define GRY	"\033[1;30m"
#define RED	"\033[0;31m"
#define GRN	"\033[0;32m"
#define CYN	"\033[0;36m"
#define END	"\033[0m"
#define UNDERLINE "\033[4m"


/* CONSTRUCTOR */

ClapTrap::ClapTrap() :
_name(NULL),
_hit(100),
_energy(50),
_damage(20)
{ 
	std::cout << "Base class	CONSTRUCTOR called - " << std::endl;
	return; 
}

ClapTrap::ClapTrap(const std::string name) :
_name(name),
_hit(100),
_energy(50),
_damage(20)
{ 
	std::cout << "Base class	CONSTRUCTOR called - " << getName() << std::endl;
	return; 
}

ClapTrap::ClapTrap(const ClapTrap &c) :
_name(c._name),
_hit(c._hit),
_energy(c._energy),
_damage(c._damage)
{
	std::cout << "Base class	COPY CONSTRUCTOR called - "  << getName() << std::endl;
	return;
}

void ClapTrap::operator=(const ClapTrap &n)
{
	std::cout << "Base class	COPY ASSIGNMENT operator called - " << getName() << std::endl;
	const_cast<std::string&>(_name) = n.getName();
	_hit 							= n.getHit();
	_energy							= n.getEnergy();
	_damage							= n.getDamage();
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Base class	DESTRUCTOR called - "  << getName() << std::endl;
	return;
}




/* MEMBER FUNCTIONS */

std::string ClapTrap::getName( void ) const 
{
	//std::cout << "getName member function called" << std::endl;
	return ( this->_name );
}
int	ClapTrap::getHit( void ) const
{
	//std::cout << "getHit member function called" << std::endl;
	return ( this->_hit );
}
int	ClapTrap::getEnergy( void ) const
{
	//std::cout << "getPointBits member function called" << std::endl;
	return ( this->_energy );
}
int	ClapTrap::getDamage( void ) const
{
	//std::cout << "getDamage member function called" << std::endl;
	return ( this->_damage );
}
void	ClapTrap::setHit( int hit )
{
	//std::cout << "setHit member function called" << std::endl;
	_hit = hit;
}
void	ClapTrap::setEnergy( int Energy )
{
	//std::cout << "setEnergy member function called" << std::endl;
	_energy = Energy;
}
void	ClapTrap::setDamage( int damage )
{
	//std::cout << "setDamage member function called" << std::endl;
	_damage = damage;
}


void ClapTrap::attack(const std::string& target)
{
	if (_energy == 0)
		std::cout << GRY << getName() <<" has no energy and pass" << END << std::endl << std::endl;
	else if (_hit > 0)
	{
		std::cout
		<< CYN << getName()
		<< " attacks " << target
		<< ", causing " << getDamage()
		<< " points of damage!" << END << std::endl;
		_energy--;
	
		std::cout
		<< UNDERLINE << getName() << END
		<< "		Health : " << getHit() << std::endl
		<< "		Energy : " << getEnergy() 
		<< " (" << getEnergy() + 1 << RED << "-1" << END << ")"
		<< std::endl
		<< "		Damage : " << getDamage() << std::endl
		<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout 
	<< RED << getName()
	<< " take " << amount
	<< " domage " << std::endl << END;
	_hit -= amount;

	std::cout
	<< UNDERLINE << getName() << END
	<< "		Health : " << getHit()
	<< " (" << getHit() + amount << RED << "-" << amount << END << ")" << std::endl
	<< "		Energy : " << getEnergy() << std::endl
	<< "		Damage : " << getDamage() << std::endl
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0)
		std::cout << GRY << getName() <<" has no energy and pass" << END << std::endl << std::endl;
	else if (_hit > 0)
	{
		std::cout
		<< GRN << getName() 
		<< " repaired " << amount
		<< " health " << END << std::endl;
		_hit += amount;
		_energy--;
	
		std::cout
		<< UNDERLINE << getName() << END
		<< "		Health : " << getHit()
		<< " (" << getHit() - amount << GRN << "+" << amount << END << ")" << std::endl
		<< "		Energy : " << getEnergy() << std::endl
		<< "		Damage : " << getDamage() << std::endl
		<< std::endl;
	}
}

std::ostream &operator<<(std::ostream &cout, const ClapTrap &instance)
{
	cout
	<< instance.getName() << std::endl
	<< "Health : " << instance.getHit() << std::endl
	<< "Energy : " << instance.getEnergy() << std::endl
	<< "Damage : " << instance.getDamage() << std::endl
	<< std::endl;
	return (cout);
}
