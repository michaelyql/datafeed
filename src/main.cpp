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
    const char* data = argv[1];
    const char* symbols = argv[2];
    App app(data, symbols);
    app.start();
}
