//
// Created by Paul Rule on 11/11/22.
//

#ifndef SAMPLE3_CONTROLLER_H
#define SAMPLE3_CONTROLLER_H


#include "Sample.h"

class Controller {

    Sample& sample;

public:
    explicit Controller(Sample& sample);
    void go();
};


#endif //SAMPLE3_CONTROLLER_H
