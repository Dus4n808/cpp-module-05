/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:42:49 by dufama            #+#    #+#             */
/*   Updated: 2026/05/04 13:38:01 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include <ostream>

//Defautl
Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

//Default
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
   
}

//Copy
Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {}

//Assign
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& assign) {
	if (this != &assign)
		this->_grade = assign._grade;
	return *this;
}

//Destructor
Bureaucrat::~Bureaucrat() {}


// === Methods ===

const std::string& Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::increment() {
    if (_grade > 1)
        _grade -= 1;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrement() {
	if (_grade < 150)
		_grade += 1;
	else
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

// === Overload ===
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", Bureaucrat grade : " << b.getGrade();
    return os;
}


