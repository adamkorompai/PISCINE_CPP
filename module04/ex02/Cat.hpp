/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:03:27 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/01 11:28:46 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& other);

		Cat& operator=(const Cat& other);

		~Cat();

		Brain* getBrain() const;
		
		void	makeSound() const;
	private:
		Brain* _brain;
};

#endif