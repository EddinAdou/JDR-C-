#include "Logger.h"
#include <iostream>//
// Created by eddin on 26/03/24.
//

#include "Logger.h"
 Logger &Logger::getInstance() {
    static Logger instance;
    return instance;
}
void Logger::log(const std::string &message){
    std::cout << message << std::endl;
}

Logger::Logger() {}