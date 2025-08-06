#include "app/app.h"

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace datafeed;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: ./main <DATA_FILENAME> <STOCK_LOCATE_FILENAME>\n";
        exit(EXIT_FAILURE);
    }
    const char* filename = argv[1];
    const char* symbol = argv[2];
    App app(filename, symbol);
    app.start();
}
