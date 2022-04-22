#ifndef TIME

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include "matrix.h"


void sleep(int seconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
#define TIME ACTIVATED

#endif

