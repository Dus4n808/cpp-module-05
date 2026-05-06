/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:15:02 by dufama            #+#    #+#             */
/*   Updated: 2026/05/05 11:15:02 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Form.hpp"
#include <ios>
#include <ostream>
#include <iomanip>

// ===== FCO =====

//Default
Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(1), _gradeToExecute(1) {}

//Default constructor
Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {}

//Copy constructor
Form::Form(const Form& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

//Assign constructor
Form& Form::operator=(const Form& assign) {
	if (this != &assign)
		_isSigned = assign._isSigned;
	return  *this;
}

//Destructror
Form::~Form() {}

//Overload
std::ostream& operator<<(std::ostream& os, const Form& b) {
	os << std::left 
	<< std::setw(20) << "Form : " << b.getName() << std::endl
	<< std::setw(20) << std::boolalpha << "Is signed : " << b.getIsSigned() << std::noboolalpha << std::endl
	<< std::setw(20) << "Grade to sign : " << b.getGradeToSign() << std::endl
	<< std::setw(20) << "Grade to execute : " << b.getGradeToExecute() << std::endl;
	return  os;
}

// ===== Exception =====

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

// ===== Methods =====

const std::string& Form::getName() const {
	return _name;
}

bool Form::getIsSigned() const {
	return  _isSigned;
}

int Form::getGradeToSign() const {
	return  _gradeToSign;
}

int Form::getGradeToExecute() const {
	return  _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& t) {
	if (t.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

