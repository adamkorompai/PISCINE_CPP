/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:19:52 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/28 14:18:14 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();	
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& other);
		
		WrongAnimal& operator=(const WrongAnimal& other);

		virtual ~WrongAnimal();
		
		std::string		getType() const;
		void	makeSound() const;	
};

#endif