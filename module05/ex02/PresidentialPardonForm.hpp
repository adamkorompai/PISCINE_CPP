/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:23:21 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 11:26:04 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();	
		PresidentialPardonForm(const std::string target);	
		PresidentialPardonForm(const PresidentialPardonForm& other);
		
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		
		~PresidentialPardonForm();
		
		void	action(const Bureaucrat& other) const;
};

#endif