/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:14:59 by dufama            #+#    #+#             */
/*   Updated: 2026/05/05 11:14:59 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <ostream>
#include <string>

class Form {
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		//FCO
		Form();
		Form(std::string const name, const int gradeToSign, const int gradeToExectue);
		Form(const Form& copy);
		Form& operator=(const Form& assign);
		~Form();

		//Exception
		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw(); 
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		
		//methods
		// Getters
		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(const Bureaucrat& t);	
};

//Overload
std::ostream& operator<<(std::ostream& os, const Form& b);

#endif