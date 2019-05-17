#ifndef DOLPHIN_MEMORY_ENGINE_MEMWATCHCONSOLE_H
#define DOLPHIN_MEMORY_ENGINE_MEMWATCHCONSOLE_H
#include "../../MemoryWatch/MemWatchEntry.h"


class MemwatchConsole {

public:
    MemwatchConsole();

    void PrintFormated(MemWatchEntry* m);

private:

};


#endif //DOLPHIN_MEMORY_ENGINE_MEMWATCHCONSOLE_H
