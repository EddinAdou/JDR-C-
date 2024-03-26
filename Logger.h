#include <iostream>
#include <string>
#include <iostream>//
// Created by eddin on 26/03/24.
//

#ifndef UNTITLED_LOGGER_H
#define UNTITLED_LOGGER_H


class Logger {
public:
    static Logger &getInstance();
    void log(const std::string &message);

private:
    Logger();
    Logger(Logger const &) = delete;
    void operator=(Logger const &) = delete;
};


#endif //UNTITLED_LOGGER_H
