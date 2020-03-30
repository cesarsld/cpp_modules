/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:11:58 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 16:55:55 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <map>
#include <chrono>
#include <fstream>

Logger::Logger(std::string const _logFile):
logFile(_logFile)
{}

void Logger::logToConsole(std::string const &log)
{
	std::cout << makeLogEntry(log) << std::endl;
}

void Logger::logToFile(std::string const &log)
{
	std::ofstream file;
	file.open(logFile, std::ios::app);
	file << makeLogEntry(log) << std::endl;
	file.close();
}

std::string Logger::makeLogEntry(std::string msg)
{
	std::string _new;
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	time_t to_time = std::chrono::system_clock::to_time_t(now);
	tm tm = *localtime(&to_time);
	
	_new = "[" + std::to_string(tm.tm_year + 1900) + "-"; 
	_new +=  (tm.tm_mon < 10? "0" : "" )+ std::to_string(tm.tm_mon) + "-";
	_new += std::to_string(tm.tm_mday) + " ";
	_new += std::to_string(tm.tm_hour) + ":";
	_new += std::to_string(tm.tm_min) + ":";
	_new += std::to_string(tm.tm_sec) + "] " + msg;
	return (_new);
}


void Logger::log(std::string const &dest, std::string const &message)
{
	typedef void (Logger::*Action)(const std::string&);
	std::map<std::string, Action> table;
	table["console"] = &Logger::logToConsole;
	table["file"] = &Logger::logToFile;
	if (table.find(dest) == table.end())
		std::cout << "Invalid action" << std::endl;
	else
		(this->*table[dest])(message);
}