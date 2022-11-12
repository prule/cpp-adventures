//
// Created by Paul Rule on 11/11/22.
//
#include <iostream>

#include "Controller.h"
#include "Sample.h"

Controller::Controller(Sample& sample): sample(sample) {
}

void Controller::go() {
    sample.increment();
}