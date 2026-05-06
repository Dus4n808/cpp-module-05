/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:57:37 by dufama            #+#    #+#             */
/*   Updated: 2026/05/06 18:57:37 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
	public:
	//FCO
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& assign);
		~RobotomyRequestForm();

	//Methods inherit
		void execute(const Bureaucrat& executor) const;
};

#endif