/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:35:01 by dufama            #+#    #+#             */
/*   Updated: 2026/05/07 09:35:01 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PresidentialPardonForm.hpp"
#include <iostream>

//===== FCO =====

//Default constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

//Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy) , _target(copy._target) {}

//Assign
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& assign) {
	if (this != &assign) {
		AForm::operator=(*this);
		_target = assign._target;
	}
	return *this;
}

//Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}

//===== Methods ======

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (getIsSigned() == false)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << _target << " you are pardoned by Zaphod Beeblebrox!" << std::endl;	
}
