//
// Created by zach on 5/14/19.
//

#include "MemwatchConsole.h"
#include <string>
#include <stdio.h>
#include <iostream>


void MemwatchConsole::PrintFormatL(std::string lab, std::string mem){
    this->PrintAll();



    for (auto l : this->labelvals){
        if ( strcmp(l.second , lab.c_str() ) == 0) {
            int i = l.first;
            lablememvals[i].first = lab;
            lablememvals[i].second = mem;
            break;
        }
    }
}

void MemwatchConsole::PrintAll(){

    for (auto lab : this->lablememvals){
        std::cout << lab.first << ": " << lab.second << std::endl;
    }

}
