#include <stdbool.h>
#include "Tools/matrix.h"

#define TOLERANCE 0.00001
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280

typedef struct App
{
} App;

void appInit(App *app);
void appUpdate(App *app);
void appShutdown(App *app);
