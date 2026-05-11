/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:27:39 by dufama            #+#    #+#             */
/*   Updated: 2026/05/07 15:27:39 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
class Intern {
	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& assign);
		~Intern();
		AForm* makeForm(std::string formName, std::string target) ;
};

#endif