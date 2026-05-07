/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:15:02 by dufama            #+#    #+#             */
/*   Updated: 2026/05/05 11:15:02 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AForm.hpp"
#include <ios>
#include <ostream>
#include <iomanip>

// ===== FCO =====

//Default
AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(1), _gradeToExecute(1) {}

//Default constructor
AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {}

//Copy constructor
AForm::AForm(const AForm& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

//Assign constructor
AForm& AForm::operator=(const AForm& assign) {
	if (this != &assign)
		_isSigned = assign._isSigned;
	return  *this;
}

//Destructror
AForm::~AForm() {}

//Overload
std::ostream& operator<<(std::ostream& os, const AForm& b) {
	os << std::left 
	<< std::setw(20) << "AForm : " << b.getName() << std::endl
	<< std::setw(20) << std::boolalpha << "Is signed : " << b.getIsSigned() << std::noboolalpha << std::endl
	<< std::setw(20) << "Grade to sign : " << b.getGradeToSign() << std::endl
	<< std::setw(20) << "Grade to execute : " << b.getGradeToExecute() << std::endl;
	return  os;
}

// ===== Exception =====

const char * AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char * AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char * AForm::IsAlreadySigned::what() const throw() {
	return  "Is already signed";
}

const char * AForm::FormNotSigned::what() const throw() {
	return "Is not signed";
}

// ===== Methods =====

const std::string& AForm::getName() const {
	return _name;
}

bool AForm::getIsSigned() const {
	return  _isSigned;
}

int AForm::getGradeToSign() const {
	return  _gradeToSign;
}

int AForm::getGradeToExecute() const {
	return  _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& t) {
	if (_isSigned == true)
		throw IsAlreadySigned();
	if (t.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

