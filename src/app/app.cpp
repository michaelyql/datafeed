#include "app.h"

#include <iostream>
#include <memory>
#include <string>

namespace datafeed {

App::App(const char* data, const char* symbols) : 
    _data(data), 
    _symbols(symbols) {} 

void App::start() {
    std::cout << "App running" << std::endl;
}

} // namespace datafeed 
