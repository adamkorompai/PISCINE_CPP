/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:30:10 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/01 14:44:10 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat Adam("adam", 149);
	Bureaucrat Alex("alex", 2);

	try {
		std::cout << Adam << std::endl;
		Adam.decrementGrade();
		std::cout << Adam << std::endl;
		Adam.decrementGrade();

		std::cout << Alex << std::endl;
		Alex.incrementGrade();
		std::cout << Alex << std::endl;
		Alex.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}