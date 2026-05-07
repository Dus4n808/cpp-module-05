/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:32:05 by dufama            #+#    #+#             */
/*   Updated: 2026/05/07 15:32:05 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/Intern.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"

//FCO

//Default constructor
Intern::Intern() {}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string formName, std::string target) {
	std::string tab[] = {"shruberry request", "president request", "robotomy request"};
	AForm *ptr = NULL;
	int i = 0;
	while (i < 3) {
		if (tab[i] == formName)
			break;
		i++;
	}
	switch (i) {
		case 0:
			ptr = new ShrubberyCreationForm(target);
			break;
		case 1:
			ptr = new PresidentialPardonForm(target);
			break;
		case 2:
			ptr = new RobotomyRequestForm(target);
			break ;
		default:
			std::cerr << "Form not found" << std::endl;
			
	}
	return ptr;
}





