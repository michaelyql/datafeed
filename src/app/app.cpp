#include "app.h"

namespace datafeed {

App::App(const char* data_filename, const char* stock_locate_filename) : 
    _data_filename(data_filename), 
    _stock_locate_filename(stock_locate_filename),
    _data(nullptr),
    _size(0) {} 

void App::start() {
    parse_itch_feed();
    parse_stock_locate();
}

void App::load_file_mmap() {
    int fd = open(_data_filename, O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }
    struct stat st;
    if (fstat(fd, &st) != 0) {
        perror("fstat");
        close(fd);
        exit(EXIT_FAILURE);
    }
    _size = st.st_size;
    _data = static_cast<uint8_t*>(mmap(nullptr, _size, PROT_READ, MAP_PRIVATE, fd, 0));
    if (_data == MAP_FAILED) {
        perror("mmap");
        close(fd);
    }
    close(fd);
}

void App::parse_itch_feed() {
    load_file_mmap();
}

void App::parse_stock_locate() {

}

} // namespace datafeed 
