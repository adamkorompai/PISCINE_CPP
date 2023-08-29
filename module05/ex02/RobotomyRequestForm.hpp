/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:37:58 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 11:42:57 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();	
		RobotomyRequestForm(const std::string target);	
		RobotomyRequestForm(const RobotomyRequestForm& other);

		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
			
		~RobotomyRequestForm();	

		void	action(const Bureaucrat& other) const;
};

#endif