/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:50 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:55:49 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

static std::string	createAsciiTree(void)
{
	std::string tree =
"\
                                                 \n\
                       O                         \n\
                      ***                        \n\
                     **O**                       \n\
                    *******                      \n\
                   *********                     \n\
                  ***********                    \n\
                   ******o**                     \n\
                  ***********                    \n\
                 ****o********                   \n\
                ***************                  \n\
               ****o***o********                 \n\
              *******************                \n\
            ***********************              \n\
               *****O***********                 \n\
              **********o********                \n\
             ****************o****               \n\
            **O********************              \n\
           ***********o********O****             \n\
         *****************************           \n\
             *********************               \n\
            ***o*******************              \n\
           ***********o*******o*****             \n\
          ***************************            \n\
         ***********************O*****           \n\
        ***O***************************          \n\
      ***********************************        \n\
           *************************             \n\
          *******o********o**********            \n\
         *****************************           \n\
        **************o****************          \n\
       *************************O*******         \n\
      *****O*****************************        \n\
    **************o************************      \n\
          ***************************            \n\
         *************o***************           \n\
        ***********o*******************          \n\
       **************************O******         \n\
      ***o******************O************        \n\
    ***o***********o****************o******      \n\
                      ###                        \n\
                      ###                        \n\
                      ###                        \n\
                  ###########                    \n\
                  ###########                    \n\
";
return tree;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	std::cout << target << " constructor called!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " deconstructor called!\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream myfile(this->getName() + "_shrubbery", std::ios::out);
	if (!myfile.is_open() || myfile.bad())
		throw Form::FailedToOpenFile();
	myfile << createAsciiTree();
	myfile.close();
}
