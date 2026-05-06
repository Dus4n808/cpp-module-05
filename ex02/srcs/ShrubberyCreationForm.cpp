/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:57:16 by dufama            #+#    #+#             */
/*   Updated: 2026/05/06 17:57:16 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>


// ====== FCO =====

//Default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) , _target(target) {}

//copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) , _target(copy._target) {}

//Operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign) {
	if (this != &assign) {
		AForm::operator=(assign);
		_target = assign._target;
	}
	return  *this;
}

//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

// ===== Methods ======

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (this->getIsSigned() == false)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	
	std::string filename = _target + "_shrubbery";
	std::ofstream newFile(filename.c_str());
	if (newFile.is_open()) {
        newFile << "      					&(`)&&  & &&\n"
                   "                     && &\\/&\\|& (`)|/&&&&\n"
                   "                     &\\/(/&/&||/&  /_/&/_&\n"
                   "                  &(`)&\\/&|(,)/& \\/&&& & (`)\n"
                   "              &&&&_\\_&&_\\ |& |&&&/&&_/_& &&\n"
                   "                 (`) &&&& &| &| /& & (`)& /&&\n"
                   "                  &&_---&--\\&&|&&-&&--&-(`)~\n"
                   "                    &&      |||}\n"
                   "                        Y  {||{\n"
                   "                        {}_}|||}\n"
                   "       ,~,    ,~,           ||}\n"
                   "       )))    )))     , -=-~'{`.-^- _\n"
                   "      ((((,  .-``-.         `}\n"
                   "      \\) \\  (/\\  /)         {\n"
                   "      (( \\\\=/ | (/\n"
                   "      |/` \\   / ))\n"
                   "      (| (/  /  \\|\n"
                   "       -_ -_  \\) |)\n"
                   "            --  _-\n";
                   
        newFile.close();
    } else {
    	std::cerr << "Error: could not open file " << filename << std::endl;
    }
}
