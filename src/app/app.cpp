#include "app.h"

#include <iostream>
#include <memory>
#include <string>

namespace datafeed {

App::App(const char* filename, const char* symbol):filename(filename), symbol(symbol) {}

void App::start() {
    std::cout << "App running" << std::endl;
}

}
