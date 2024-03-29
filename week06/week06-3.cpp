/*等差級數列印
輸入首項、公差、項數，輸出前n項
*/
#include <stdio.h>
int main()
{
	int i,a,d,n,an;
	scanf("%d %d %d",&a,&d,&n);
	an=a;
	for(i=1;i<n;i++){
		printf("%d,",an);
		an+=d;
	}
	printf("%d",an);
}
