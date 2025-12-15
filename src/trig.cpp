#include <trig.h>

struct TrigEntry
{
    const char *label; // left side
    const char *value; // right side (symbolic)
};

const TrigEntry sincostan[] = {
    // SIN
    {"Sin 0°", "0"},
    {"Sin 30°", "1/2"},
    {"Sin 37°", "3/5"},
    {"Sin 45°", "√2/2"},
    {"Sin 53°", "4/5"},
    {"Sin 60°", "√3/2"},
    {"Sin 90°", "1"},

    // COS
    {"Cos 0°", "1"},
    {"Cos 30°", "√3/2"},
    {"Cos 37°", "4/5"},
    {"Cos 45°", "√2/2"},
    {"Cos 53°", "3/5"},
    {"Cos 60°", "1/2"},
    {"Cos 90°", "0"},

    // TAN
    {"Tan 0°", "0"},
    {"Tan 30°", "√3/3"},
    {"Tan 45°", "1"},
    {"Tan 60°", "√3"},
    {"Tan 90°", "undef"} // undefined
};


