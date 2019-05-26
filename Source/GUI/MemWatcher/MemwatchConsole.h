#ifndef DOLPHIN_MEMORY_ENGINE_MEMWATCHCONSOLE_H
#define DOLPHIN_MEMORY_ENGINE_MEMWATCHCONSOLE_H

#include "../../MemoryWatch/MemWatchEntry.h"
#include <string>
#include <map>
#define NUMBER_OF_LABELS 8

class MemwatchConsole {

public:
    MemwatchConsole(){};

    void PrintFormatL(std::string lab, std::string mem);

private:

    void PrintAll();

    /*storage for the labels*/
    std::array<std::pair<std::string, std::string> , NUMBER_OF_LABELS > lablememvals;

    /*label names in the saved file*/
    enum lvals {

        P1DIR,
        P1HEALTH,
        P1XPOS,
        P1YPOS,

        P2DIR,
        P2HEALTH,
        P2XPOS,
        P2YPOS
    };

    const std::map< enum lvals, const char*> labelvals = {
            {P1DIR , "P1Dir"},
            {P1HEALTH, "P2Health"},
            {P1XPOS , "P1Xpos"},
            {P1YPOS , "P1ypos"},

            {P2DIR , "P2Dir"},
            {P2HEALTH, "P2Health"},
            {P2XPOS , "P2Xpos"},
            {P2YPOS , "P2YPos"}
    };


};
/*
 * P2Dir -1
>
P2Health 62
P2Xpos ???
P2YPos ???
P1type 1
P1Dir 1
P1Health 40
P1Xpos ???
P1ypos ???
P2Dir -1
P2Health 62
 */


#endif //DOLPHIN_MEMORY_ENGINE_MEMWATCHCONSOLE_H
