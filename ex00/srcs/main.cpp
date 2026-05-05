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

void testForLoopIncrement(void) {
	std::cout << "=== Bureaucrat 150 to 1 ===" << std::endl;
	try {
		Bureaucrat a("Paul", 150);
		for (int i = 0; i < 150; i++) {
			std::cout << a << std::endl;
			a.increment();
		}
	} catch (const std::exception& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

void testForLoopDecrement(void) {
	std::cout << "=== Bureaucrat 1 to 150 ===" << std::endl;
	try {
		Bureaucrat b("Benoit", 1);
		for (int i = 0; i < 150; i++) {
			std::cout << b << std::endl;
			b.decrement();
		}
	} catch (const std::exception& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

int main()
{
	testForLoopIncrement();
	testForLoopDecrement();
	try {
		Bureaucrat c("Charles", 151);
	} catch (const std::exception& e) {
		std::cerr << "Error to create Bureaucrate : " << e.what() << std::endl;
	}
}
