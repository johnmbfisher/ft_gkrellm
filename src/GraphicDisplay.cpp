/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GraphicDisplay.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:37:48 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/26 18:35:48 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GraphicDisplay.hpp"

GraphicDisplay::GraphicDisplay(void) {

    _font.loadFromFile("fonts/arial.ttf");

}

GraphicDisplay::GraphicDisplay(const GraphicDisplay & copy) { *this = copy; }
GraphicDisplay &GraphicDisplay::operator = (const GraphicDisplay & inputClass) {

	(void)inputClass;
	return *this;
}
GraphicDisplay::~GraphicDisplay(void) { }

void GraphicDisplay::render(ManagerModule * mn) {

    sf::RenderWindow window(sf::VideoMode(600, 1800), "SFML window");
	// Set Font
	sf::Font	font1;
	font1.loadFromFile("./fonts/lucon.ttf");

	sf::Texture	tt1;
	tt1.loadFromFile("./img/body.png");
	tt1.setSmooth(true);
	// set body sprite
	sf::Sprite	s1;
	s1.setTexture(tt1);

	sf::Texture	tt2;
	tt2.loadFromFile("./img/title.png");
	tt2.setSmooth(true);
	// set title sprite
	sf::Sprite	s2;
	s2.setTexture(tt2);

	sf::FloatRect	fr;

    while (window.isOpen())
    {
        // Process events
        sf::Event event;
		int i = 0;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
		mn->update();
		mn->allModuleInfo();
        // Clear screen
        window.clear();
        s2.setPosition(0, 0);
        window.draw(s2);
		s1.setPosition(0, 60);
        window.draw(s1);
		for (std::vector<std::string>::iterator it = mn->tmInfo.begin(); it != mn->tmInfo.end(); ++it) {
			sf::Text	title;
			sf::Text	text;
			title.setString("Activity Monitor");
			title.setFont(_font);
			title.setCharacterSize(40);
			title.setFillColor(sf::Color::White);
			title.setPosition(180, 5);
			if (it == mn->tmInfo.begin())
				continue;
			else {
				text.setString(*it + "\n");
				text.setFont(_font);
				text.setCharacterSize(25);
				text.setPosition(40, 110 + i);
				i += 30;
			}
			window.draw(title);
			window.draw(text);
		}
		for (std::vector<std::string>::iterator it = mn->cpuInfo.begin(); it != mn->cpuInfo.end(); ++it) {
			sf::Text	title;
			sf::Text	text;
			title.setString("CPU Info");
			title.setFont(_font);
			title.setCharacterSize(40);
			title.setFillColor(sf::Color::White);
			title.setPosition(210, 130);
			if (it == mn->cpuInfo.begin())
				continue;
			else {
				text.setString(*it + "\n");
				text.setFont(_font);
				text.setCharacterSize(25);
				text.setPosition(40, 180 + i);
				i += 30;
			}
			window.draw(title);
			window.draw(text);
		}
		for (std::vector<std::string>::iterator it = mn->osInfo.begin(); it != mn->osInfo.end(); ++it) {
			sf::Text	title;
			sf::Text	text;
			title.setString("OS Info");
			title.setFont(_font);
			title.setCharacterSize(40);
			title.setFillColor(sf::Color::White);
			title.setPosition(215, 370);
			if (it == mn->osInfo.begin())
				continue;
			else {
				text.setString(*it + "\n");
				text.setFont(_font);
				text.setCharacterSize(25);
				text.setPosition(40, 275 + i);
				i += 30;
			}
			window.draw(title);
			window.draw(text);
		}
		for (std::vector<std::string>::iterator it = mn->nwInfo.begin(); it != mn->nwInfo.end(); ++it) {
			sf::Text	title;
			sf::Text	text;
			title.setString("Network Info");
			title.setFont(_font);
			title.setCharacterSize(40);
			title.setFillColor(sf::Color::White);
			title.setPosition(195, 670);
			if (it == mn->nwInfo.begin())
				continue;
			else {
				text.setString(*it + "\n");
				text.setFont(_font);
				text.setCharacterSize(25);
				text.setPosition(40, 370 + i);
				i += 30;
			}
			window.draw(title);
			window.draw(text);
		}
		for (std::vector<std::string>::iterator it = mn->rmInfo.begin(); it != mn->rmInfo.end(); ++it) {
			sf::Text	title;
			sf::Text	text;
			title.setString("RAM Info");
			title.setFont(_font);
			title.setCharacterSize(40);
			title.setFillColor(sf::Color::White);
			title.setPosition(200, 830);
			if (it == mn->rmInfo.begin())
				continue;
			else {
				text.setString(*it + "\n");
				text.setFont(_font);
				text.setCharacterSize(25);
				text.setPosition(40, 480 + i);
				i += 30;
			}
			window.draw(title);
			window.draw(text);
		}
		for (std::vector<std::string>::iterator it = mn->ponyInfo.begin(); it != mn->ponyInfo.end(); ++it) {
			sf::Text	title;
			title.setString("Pony Info");
			title.setFont(_font);
			title.setCharacterSize(40);
			title.setFillColor(sf::Color::White);
			title.setPosition(200, 1100);
			sf::Text text(*it + "\n", _font, 25);
			text.setPosition(40, 590  + i);
			i += 30;
			window.draw(title);
			window.draw(text);
		}
        // Draw the sprite
//        window.draw(sprite);
        // Draw the string
        // Update the window
        window.display();
    }
}
