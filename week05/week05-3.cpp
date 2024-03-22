#include <stdio.h>
2	int main()
3	{
4	/// int a,b;
5	    int a[4];
6	    int b[4] = { 10, 20, 30, 40 };
7	    a[0] = 9;
8	    a[1] = 8;
9	    a[2] = 7;
10	    a[3] = 6;
11
12	    for(int i=0; i<4; i++){
13	        printf("i:%d a[i]:%d b[i]:%d\n", i, a[i],b[i]);
14	    }
15	}
