/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 20:07:05 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/25 19:56:02 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATETIMEMODULE_HPP
# define DATETIMEMODULE_HPP

#include "IMonitorModule.hpp"

#include <ctime>
#include <iostream>
#include <string>

class DateTimeModule : public IMonitorModule
{
	private:
		time_t _now;
		tm *_currentTime;
	public:
		DateTimeModule(void);
		DateTimeModule(const DateTimeModule & copy);
		DateTimeModule &operator = (const DateTimeModule & inputClass);
		~DateTimeModule(void);

		// Getter for each time
		std::string getCurrentYear(void) const;
		std::string getCurrentMonth(void) const;
		std::string getCurrentDay(void) const;
		std::string getCurrentHour(void) const;
		std::string getCurrentMin(void) const;
		std::string getCurrentSec(void) const;

		// Refresh Timer
		void refreshCurrentTime(void);

		void update(void);
};

std::string convertIntToChar(int number);
#endif
