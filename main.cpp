#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

#include "matrix.h"
#include "time.h"
#include "parser.h"

int main()
{
    
    matrix screen;
    screen.edit(2, 3, 'P');

    while(true)
    {
        matrix::window_clear_screen();
        screen.display();
    }
    return 0;
}