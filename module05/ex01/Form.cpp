/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:38:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 11:21:36 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("basic form"), _signed(false), _grade_sign(10), _grade_exec(10)
{
}

Form::Form(std::string name) : _name(name), _signed(false), _grade_sign(1), _grade_exec(1)
{
}

Form::Form(std::string name, const unsigned int grade_s, const unsigned int grade_e) : _name(name), _signed(false), _grade_sign(grade_s), _grade_exec(grade_e)
{
	if (grade_s  < 1 || grade_e < 1)
		throw Form::GradeTooHighException();
	else if (grade_s > 150 || grade_e > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name), _signed(other._signed), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{
}

Form& Form::operator=(const Form& other)
{
	return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return this->_name;
}

bool	Form::isSigned() const
{
	return this->_signed;
}

unsigned int Form::getGradeSign() const
{
	return this->_grade_sign;
}

unsigned int Form::getGradeExec() const
{
	return this->_grade_exec;
}

void	Form::beSigned(const Bureaucrat& worker)
{
	if (worker.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& other)
{
	o << "Form : " << other.getName() << " { signed : " << std::boolalpha << other.isSigned() << ", grade for sign : " << other.getGradeSign() << ", grade for exec: " << other.getGradeExec() << "}\n";
	return o;
}