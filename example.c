#include<stdio.h>
main()
{

	int i,j,n,m;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Enter the start value:\n");
    scanf("%d",&m);
    printf("\n");
    for(i=m;i>=n;i--)
    {
        for(j=m;j>=i;j--)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
}
