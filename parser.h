#ifndef PARSER

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

std::string parse_file(std::string FileName)
{
    std::string complete_string;
    std::string buffer_string;
    std::ifstream file;
    file.open("pirel.txt");
    while(std::getline(file, buffer_string))
    {
        complete_string = complete_string + buffer_string + '\n';
    }
    return complete_string;
}
#define PARSER ACTIVATED

#endif