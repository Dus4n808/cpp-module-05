/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:40:36 by dufama            #+#    #+#             */
/*   Updated: 2026/05/01 14:31:12 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"
#include <exception>
#include <iostream>
#include <ostream>

void tryToAddGrade(Bureaucrat& toTest, int grade) {
	try {
		for (int i = 0; i < grade; i++)
			toTest.increment();
		std::cout << toTest << std::endl << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl << std::endl;
	}
}

void tryToDecrement(Bureaucrat& toTest, int grade) {
	try {
		for (int i = 0; i < grade; i++)
			toTest.decrement();
		std::cout << toTest << std::endl << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl << std::endl;
	}
}

void tryToSigned(Bureaucrat& toTest, Form& form) {
	try {
		toTest.signForm(form);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}


int main()
{
	//Form
	Form formA("Loi", 12, 1);
	Form formB("Pacte", 100, 100);

	std::cout << formA << std::endl;
	std::cout << formB << std::endl;

	//Bureaucrat
	Bureaucrat b("Paul", 60);
	Bureaucrat a("Alain", 1);

	//test error
	tryToSigned(b, formA);

	
	//test success
	tryToSigned(a, formA);
}
