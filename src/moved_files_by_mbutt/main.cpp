/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 19:37:34 by jchiang-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/01/26 15:37:51 by mbutt            ###   ########.fr       */
=======
/*   Updated: 2020/01/26 15:49:50 by jchiang-         ###   ########.fr       */
>>>>>>> 0eecb168944fc3ee67cfa1c7d2aeea2d494e5dbb
/*                                                                            */
/* ************************************************************************** */

#include "ManagerModule.hpp"
#include "NcursesDisplay.hpp"
#include "GraphicDisplay.hpp"


int main(int argc, char **argv)
{
<<<<<<< HEAD
	ManagerModule mn = ManagerModule();
	NcursesDisplay nc = NcursesDisplay();
	nc.render(&mn);
//	sfmlinit();
	return 0;
=======
	if (argc == 2) {
		std::string text = "Text";
		std::string graph = "Graph";
		ManagerModule mn = ManagerModule();
		if (!text.compare(argv[1])) {
			NcursesDisplay nc = NcursesDisplay();
			nc.render(&mn);
			return 0;
		} else if (!graph.compare(argv[1])) {
			GraphicDisplay gh = GraphicDisplay();
			gh.render(&mn);
		}
	}
	std::cout << "Usage: ./ft_gkrellm [Text / Graph]" << std::endl;
	return -1;
>>>>>>> 0eecb168944fc3ee67cfa1c7d2aeea2d494e5dbb
}
