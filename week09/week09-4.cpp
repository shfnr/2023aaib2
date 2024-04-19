#include <stdio.h>
2	int myAdd(int a, int b){
3	    return a+b;
4	}
5	void myPrint(int a){
6	    for(int i=1; i<=a; i++) printf("*");
7	    printf("\n");
8	}
9	int main()
10	{
11	    int ans = myAdd(3, 4);
12	    printf("Hello ans: %d\n", ans);
13	    myPrint(7);
14	    myPrint(6);
15	    myPrint(5);
16	    myPrint(4);
17	}
