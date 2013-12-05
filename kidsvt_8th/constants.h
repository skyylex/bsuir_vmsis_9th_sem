#define MEGABIT 1000000

#define RAM_CAPACITY_ROWS 1024
#define RAM_CAPACITY_COLUMNS 1024

#define FOUND_FAULT 5
#define NO_EXISTING_FAULT 6

// ### faults types
#define BROKEN_CELL 109
#define NO_FAULT 0
#define PNPSFK5 10
#define ANPSFK9 20

// ### values
#define PNPSFK5_VALUE 1

/*
TOP_LEFT TOP_MIDDLE TOP_RIGHT

LEFT_MIDDLE ###BASE RIGHT_MIDDLE

BOTTOM_LEFT BOTTOM_MIDDLE BOTTOM_RIGHT
*/

//links
#define TOP_RIGHT 10
#define TOP_LEFT 11
#define TOP_MIDDLE 12

#define BOTTOM_RIGHT 20
#define BOTTOM_LEFT 21
#define BOTTOM_MIDDLE 22

#define LEFT_MIDDLE 32
#define RIGHT_MIDDLE 42
