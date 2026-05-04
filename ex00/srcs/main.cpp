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
#include <exception>
#include <iostream>


int main()
{
	Bureaucrat a("Paul", 150);
	Bureaucrat b("Benoit", 1);
	try {
		a.decrement();
	} catch (std::exception& e) {
		std::cerr << "Erreur " << e.what() << std::endl;
	}
	try {
		b.increment();
	} catch (std::exception& e) {
		std::cerr << "Erreur " << e.what() << std::endl;
	}
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
