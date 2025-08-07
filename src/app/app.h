#ifndef DATAFEED_H
#define DATAFEED_H 

#include "../engine/strategyEngine.h"

#include <iostream>
#include <memory>
#include <string>

#include <fcntl.h>
#include <unistd.h>

#include <sys/mman.h>
#include <sys/stat.h>

#include <cstdlib>
#include <cstddef>
#include <cstdint>

namespace datafeed {
class App {
    const char* _data_filename;
    const char* _stock_locate_filename;
    uint8_t* _data;
    size_t _size;

    void load_file_mmap();
    void parse_itch_feed();
    void parse_stock_locate();
public: 
    App(const char* data_filename, const char* stock_locate_filename);
    void start();
};
}

#endif // DATAFEED_H
