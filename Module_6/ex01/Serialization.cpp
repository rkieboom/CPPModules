/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serialization.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:54:04 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/10 15:08:54 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
