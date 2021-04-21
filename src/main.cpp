#include "kurutu_math.h"

int main()
{
    v3 v(2, 3, 4);
    v3 v1(5, 6, 7);

    v = v + v;
    v = v - v;
    v = v * v;
    v = v / v;
    v = v + 1.0f;

    return 0;
}
