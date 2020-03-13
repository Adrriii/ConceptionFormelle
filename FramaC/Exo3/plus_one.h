#include <limits.h>

/*@ requires a < INT_MAX
&& a >= -1;
ensures \result >= 0;
*/
int plus_one(int a);