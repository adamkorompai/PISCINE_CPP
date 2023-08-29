/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:38:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 11:21:04 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("basic form"), _target(""), _signed(false), _grade_sign(10), _grade_exec(10)
{
}

AForm::AForm(std::string name) : _name(name), _target(""),  _signed(false), _grade_sign(1), _grade_exec(1)
{
}

AForm::AForm(std::string name, std::string target) : _name(name), _target(target), _signed(false), _grade_sign(1), _grade_exec(1)
{
}

AForm::AForm(std::string name, std::string target, const unsigned int grade_s, const unsigned int grade_e) : _name(name), _target(target), _signed(false), _grade_sign(grade_s), _grade_exec(grade_e)
{
	if (grade_s  < 1 || grade_e < 1)
		throw AForm::GradeTooHighException();
	else if (grade_s > 150 || grade_e > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(std::string name, const unsigned int grade_s, const unsigned int grade_e) : _name(name), _target(""), _signed(false), _grade_sign(grade_s), _grade_exec(grade_e)
{
	if (grade_s  < 1 || grade_e < 1)
		throw AForm::GradeTooHighException();
	else if (grade_s > 150 || grade_e > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other) : _name(other._name), _target(other._target), _signed(other._signed), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{
}

AForm& AForm::operator=(const AForm& other)
{
	return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return this->_name;
}

bool	AForm::isSigned() const
{
	return this->_signed;
}

unsigned int AForm::getGradeSign() const
{
	return this->_grade_sign;
}

unsigned int AForm::getGradeExec() const
{
	return this->_grade_exec;
}

std::string AForm::getTarget() const
{
	return this->_target;
}

void	AForm::beSigned(const Bureaucrat& worker)
{
	if (worker.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!this->isSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const AForm& other)
{
	o << "Form : " << other.getName() << " { signed : " << std::boolalpha << other.isSigned() << ", grade for sign : " << other.getGradeSign() << ", grade for exec: " << other.getGradeExec() << "}\n";
	return o;
}