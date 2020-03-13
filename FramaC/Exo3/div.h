#include "limits.h"

/*@ 
requires b != 0
&& a/b <= INT_MAX 
&& a/b >= INT_MIN;
ensures \result == a/b;
*/
int div(int a, int b);