// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {

    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-nettraf", 1, 16},
    {"", "sb-volume", 1, 10},
    {"", "sb-clock", 60, 1},
    {"", "internet", 5, 4},
    {"", "brightness", 1, 11},
    {"", "battery", 5, 3},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
