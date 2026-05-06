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
#include "../headers/RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>
#include <ostream>



int main()
{
	std::srand(std::time(NULL));
	Bureaucrat paul("Paul", 1);
	RobotomyRequestForm formulaire("test");
	try {
		paul.signForm(formulaire);
		paul.executeForm(formulaire);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
}
