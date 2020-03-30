/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:04:11 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 16:21:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <string>
class Logger
{
	private:
	std::string const logFile;
	void logToConsole(std::string const &log);
	void logToFile(std::string const &log);
	std::string makeLogEntry(std::string msg);

	public:
	Logger(std:: string const _logFile);
	void log(std::string const &dest, std::string const &message);
};

#endif