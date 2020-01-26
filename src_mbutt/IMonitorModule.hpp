/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:54:01 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/25 21:19:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

class IMonitorModule
{
	public:
		virtual ~IMonitorModule(void) { };
		virtual void update(void) = 0;
};

#endif
*/


#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

class IMonitorModule
{
	public:
		virtual ~IMonitorModule(void) { };
		virtual void update(void) = 0;
};

#endif
