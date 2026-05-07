/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:00:50 by dufama            #+#    #+#             */
/*   Updated: 2026/05/06 19:00:50 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

//===== FCO ======

//Default constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) , _target(target) {}

//copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy) , _target(copy._target) {}

//Assing constructor
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& assing) {
	if (this != &assing) {
		AForm::operator=(*this);
		_target = assing._target;
	}
	return  *this;
}

//Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}

// ===== Methods =====

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (this->getIsSigned() == false)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "Brzzzzzzzz , Brzzzzzzzz" << std::endl;
	int random = rand() % 2;
	if (random == 1)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << _target << " Robotomy failed!" << std::endl;
}
