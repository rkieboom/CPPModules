/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:21 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/11 16:34:01 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>
#include <map>

class	Karen
{
	typedef void (Karen::*MFP)(void);
	std::map <std::string, MFP> fmap;

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		void	complain(std::string level);
};

#endif