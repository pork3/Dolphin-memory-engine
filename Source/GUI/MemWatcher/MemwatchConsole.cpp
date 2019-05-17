//
// Created by zach on 5/14/19.
//

#include "MemwatchConsole.h"
#include <string>
#include <stdio.h>
void MemwatchConsole::PrintFormated(MemWatchEntry* m){

    std::string name = m->getLabel().toStdString();
    std::string value = m->getStringFromMemory();

    printf("%s: %s\n", name,value);

}
