
/*@
predicate lowerOrEqual(integer a, integer b, integer c) = a <= b && a <= c;
predicate anyEqual(integer a, integer b, integer c) = a == b || b == c || a == c;
*/

/*@
behavior a:
    assumes anyEqual(a,b,c);
    ensures \result == 0;

behavior b:
    assumes lowerOrEqual(a,b,c);
    ensures \result == 1;

behavior c:
    assumes lowerOrEqual(c,a,b);
    ensures \result == 3;

behavior d:
    ensures \result == 2;

complete behaviors d;
disjoint behaviors a,b,c;
*/
int caseResult(int a, int b, int c);