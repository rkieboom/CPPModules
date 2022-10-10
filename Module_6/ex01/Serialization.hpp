/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:54:11 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/10 15:27:51 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <cstdint>
# include <iostream>

typedef struct Data_s
{
	int number;
	std::string name;
	
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
