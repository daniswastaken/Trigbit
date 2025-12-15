#pragma once
#include <Arduino.h>

#ifndef TRIG_H
#define TRIG_H

void trigInit();
void trigPickNext();

const char *trigQuestion();
const char *trigAnswer();

#endif
