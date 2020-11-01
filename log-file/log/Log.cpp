
#ifndef _LOGGER_H_
#define _LOGGER_H_

#include "Cipher-s-Caesar.h"
#include <direct.h>

class Logger
{
	std::string logFileName; 
	std::ofstream outLog; 

public:

	Logger(std::string logFileName);
	
	Logger();

	char* getCurrentDateAndTime(char* currentDateAndTimeStr);


	void startLoging();

	void endLoging();

	void writeLog(const char* fileName, bool infected, char* signatureName);

	std::vector<std::string> GetAllSuspectedFiles();
};

#endif