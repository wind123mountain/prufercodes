#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,i=0,j;
    printf("nhap so canh: "); scanf("%d",&n);
    int a[n], b[n], deg[n+1], prufer[n];
    for (k=0;k<=n;k++)
	    deg[k]=0;
    for (k=0;k<n;k++)
    {
	  printf("\nnhap canh:    ");
	  scanf("%d  %d",&a[k],&b[k]);
	  deg[a[k]]=deg[a[k]]+1;
	  deg[b[k]]=deg[b[k]]+1;
      }
    while (i<n-1)
	 for (k=1;k<=n;k++)
	  if (deg[k]==1)
	  	{
	  		for(j=0;j<n;j++)
	  		{
	  			if (a[j]==k && deg[b[j]]!=0) 
	  			 {
				   deg[b[j]]=deg[b[j]]-1;
				   prufer[i++]=b[j];
				   break;
			       }
	  			if (b[j]==k && deg[a[j]]!=0) 
	  			 {
	  			 	deg[a[j]]=deg[a[j]]-1;
	  			 	prufer[i++]=a[j];
	  			 	break;
			       }
			   }
	        deg[k]=0;
			break;		 
	       }

	printf("\nma prufercode cua cay:\n\n");
	for (k=0;k<n-1;k++)
	 printf(" %d ",prufer[k]);
	return 0;
}
