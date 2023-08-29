/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:30:10 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/29 14:53:58 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Intern adam;

	AForm* shrub;
	AForm* robotomy;
	AForm* presidential;
	AForm* fake;

	try
	{
		shrub = adam.makeForm("shruberry creation", "home");
		robotomy = adam.makeForm("robotomy request", "alex");
		presidential = adam.makeForm("presidential pardon", "oboma");
		fake = adam.makeForm("fake", "nope");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat alex("adam", 147);
	
	alex.executeForm(*shrub);
	alex.signForm(*shrub);
	alex.executeForm(*shrub);
	
	return 0;
}