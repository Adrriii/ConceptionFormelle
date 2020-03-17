
/*@
predicate lowerOrEqual(integer a, integer b, integer c) = a <= b && a <= c;
predicate anyEqual(integer a, integer b, integer c) = a == b || b == c || a == c;
predicate b(integer a,integer b,integer c) = !anyEqual(a,b,c);
predicate c(integer a,integer b,integer c) = !anyEqual(a,b,c) && !b(a,b,c);
predicate d(integer a,integer b,integer c) = !anyEqual(a,b,c) && !b(a,b,c) && !c(a,b,c);
*/

/*@
behavior a:
    assumes anyEqual(a,b,c);
    ensures \result == 0;

behavior b:
    assumes b(a,b,c) && lowerOrEqual(a,b,c);
    ensures \result == 1;

behavior c:
    assumes c(a,b,c) && (b <= a && a <= c);
    ensures \result == 2;

behavior d:
    assumes d(c,a,b) && lowerOrEqual(c,a,b);
    ensures \result == 3;

behavior e:
    assumes d(a,b,c) && !lowerOrEqual(c,a,b);
    ensures \result == 2;

disjoint behaviors a,b,c,d,e;
*/
int caseResult(int a, int b, int c);