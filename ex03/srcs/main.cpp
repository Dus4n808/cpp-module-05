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
#include "../headers/Intern.hpp"
#include <exception>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <ostream>




int main()
{
	std::srand(std::time(NULL));
	Intern slave;
	Bureaucrat Steve("Steve", 1);
	AForm* form;
	form = slave.makeForm("robotomy sdf", "Steve Jobs");
	try {
		if (form != NULL) {
			Steve.signForm(*form);
			Steve.executeForm(*form);
		}
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	delete form;
}
