#ifndef LAL_LOGMANAGER_H
#define LAL_LOGMANAGER_H

#include <iostream>
#include <fstream>

static std::ofstream lg;

void open_log(){
    try {
        lg.open("lal.log");
    }
    catch (...) {
        std::cout << "ERROR: Can't open log file\n";
    }
}

void close_log() {
    if (lg.is_open()) {
        lg.close();
    }
}

#endif //LAL_LOGMANAGER_H