/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:24 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 15:33:23 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		virtual void	makeSound() const;
		std::string getType() const;



	Animal();
	Animal(Animal &other);
	Animal& operator= (Animal &other);
	~Animal();
};

#endif