#ifndef DATAFEED_H
#define DATAFEED_H 

#include "../engine/strategyEngine.h"

namespace datafeed {
class App {
    const char* filename;
    const char* symbol;
public: 
    App(const char* filename, const char* symbol);
    void start();
};
}

#endif // DATAFEED_H
