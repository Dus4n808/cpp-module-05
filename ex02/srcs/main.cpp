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
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>
#include <ostream>

void testShrubbery(Bureaucrat& toTest, AForm& form) {
	try {
		toTest.executeForm(form);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

void testRobotomy(Bureaucrat& toTest, AForm& form) {
	try {
		toTest.executeForm(form);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

void testPresidential(Bureaucrat& toTest, AForm& form) {
	try {
		toTest.executeForm(form);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}


int main()
{
	std::srand(std::time(NULL));

	//Bureaucrat
	Bureaucrat Shurb("Shurb", 150);
	Bureaucrat Robot("Robot", 150);
	Bureaucrat Pres("President", 1);

	//Form
	ShrubberyCreationForm FormShurb;
	RobotomyRequestForm FormRobot;
	PresidentialPardonForm FormPres;

	//Not signed
	testShrubbery(Shurb, FormShurb);
	testRobotomy(Robot, FormRobot);
	testPresidential(Pres, FormPres);

	//sign
	Pres.signForm(FormShurb);
	Pres.signForm(FormRobot);
	Pres.signForm(FormPres);

	testShrubbery(Shurb, FormShurb);
	testRobotomy(Robot, FormRobot);
	testPresidential(Pres, FormPres);
}
