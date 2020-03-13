
/*@
predicate lowerOrEqual(integer a, integer b, integer c) = a <= b && a <= c;
predicate anyEqual(integer a, integer b, integer c) = a == b || b == c || a == c;

ensures (\result == 0 && anyEqual(a,b,c))
|| (\result == 1 && lowerOrEqual(a,b,c))
|| (\result == 3 && lowerOrEqual(c,a,b))
|| \result == 2;
*/
int caseResult(int a, int b, int c);