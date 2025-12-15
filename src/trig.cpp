#include "trig.h"
#include <Arduino.h>

struct TrigEntry {
    const char* label;
    const char* value;
};

static const TrigEntry sincostan[] = {
    {"Sin 0°", "0"},
    {"Sin 30°", "1/2"},
    {"Sin 37°", "3/5"},
    {"Sin 45°", "√2/2"},
    {"Sin 53°", "4/5"},
    {"Sin 60°", "√3/2"},
    {"Sin 90°", "1"},

    {"Cos 0°", "1"},
    {"Cos 30°", "√3/2"},
    {"Cos 37°", "4/5"},
    {"Cos 45°", "√2/2"},
    {"Cos 53°", "3/5"},
    {"Cos 60°", "1/2"},
    {"Cos 90°", "0"},

    {"Tan 0°", "0"},
    {"Tan 30°", "√3/3"},
    {"Tan 45°", "1"},
    {"Tan 60°", "√3"},
    {"Tan 90°", "undef"}
};

static const size_t COUNT =
    sizeof(sincostan) / sizeof(sincostan[0]);

// state (private)
static int lastIndex = -1;
static const TrigEntry* current = nullptr;

void trigInit() {
    randomSeed(esp_random());
}

void trigPickNext() {
    if (COUNT == 0) return;

    int index;
    do {
        index = random(COUNT);
    } while (index == lastIndex && COUNT > 1);

    lastIndex = index;
    current = &sincostan[index];
}

const char* trigQuestion() {
    return current ? current->label : "";
}

const char* trigAnswer() {
    return current ? current->value : "";
}