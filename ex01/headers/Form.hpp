/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:14:59 by dufama            #+#    #+#             */
/*   Updated: 2026/05/05 11:14:59 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FORM_HPP
#define FORM_HPP

#include <string>


class Form {
	private:
		std::string const _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		//FCO
		Form();
		Form(std::string const name, const int gradeToSign, const int gradeToExectue);
		Form(const Form& copy);
		Form& operator=(const Form& assign);
		~Form();
		
		//methods
};

#endif