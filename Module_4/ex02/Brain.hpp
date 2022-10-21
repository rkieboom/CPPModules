/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 15:40:59 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 15:44:16 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		std::string ideas[100];

	Brain();
	Brain(Brain &other);
	Brain& operator= (Brain &other);
	~Brain();
};

#endif