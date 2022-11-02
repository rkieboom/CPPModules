/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:02:10 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/25 23:38:23 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	Data *data = new Data;
	uintptr_t ptr;

	data->name = "Rowan";
	data->number = 42;
	std::cout << "Data ptr = " << data << std::endl;
	ptr = serialize(data);
	std::cout << "Ptr = " << ptr << std::endl;
	data = deserialize(ptr);
	std::cout << "Data ptr = " << data << std::endl;	
	
	delete data;

	return (0);
}