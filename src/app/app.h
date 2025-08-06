#ifndef DATAFEED_H
#define DATAFEED_H 

#include "../engine/strategyEngine.h"

namespace datafeed {
class App {
    const char* _data;
    const char* _symbols;
public: 
    App(const char* data, const char* symbols);
    void start();
};
}

#endif // DATAFEED_H
