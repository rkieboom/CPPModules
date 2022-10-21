/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:32 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 16:12:19 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		void				setIdeas(const std::string&);
		void				printIdeas(void);
		void				makeSound() const;

	Dog();
	Dog(Dog &other);
	Dog& operator= (Dog &other);
	virtual ~Dog();
};

#endif