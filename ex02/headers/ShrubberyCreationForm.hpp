/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:43:39 by dufama            #+#    #+#             */
/*   Updated: 2026/05/06 17:43:39 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
	public:
	//FCO
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& assign);
		~ShrubberyCreationForm();
	//Methods inherit
		void execute(const Bureaucrat& executor) const;
		
};

#endif