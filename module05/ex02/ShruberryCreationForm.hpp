/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:30:32 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/08 14:38:37 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShruberryCreationForm : public AForm
{
	public:
		ShruberryCreationForm(const std::string target);
		ShruberryCreationForm(const ShruberryCreationForm& other);

		ShruberryCreationForm& operator=(const ShruberryCreationForm& other);

		~ShruberryCreationForm();

		void	action(const Bureaucrat& executor) const;
		
};


#endif