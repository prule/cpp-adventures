//
// Created by Paul Rule on 10/11/22.
//

#include "Sample.h"

Sample::Sample(int x) {
    Sample::x = x;
}

int Sample::getX() {
    return Sample::x;
}

void Sample::increment() {
    Sample::x++;
}