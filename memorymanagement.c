#include<stdio.h> 
int main()
{
int i,j,arr[100],pt[20],val,pgno,offset,phymem,fs,nf;
printf("\n Memory Management paging\n");
printf("enter the size of physical memory");
scanf("%d",&phymem);
for(i=20,j=0;i<phymem+20,j<phymem;i++,j++) 
arr[i]=j;
printf("\n Enter size of frame or page");
scanf("%d",&fs);
nf=phymem/fs;
printf("No of frame available are\t%d",nf); 
printf("\n Enter the page table"); 
for(i=0;i<nf;i++)
{
scanf("%d",&pt[i]);
}
printf("\n Enter the page no"); 
scanf("%d",&pgno);
printf("\n Enter the offset"); 
scanf("%d",&offset);
val=(fs*pt[pgno])+offset;
printf("the physical address is:%d\n",arr[val]);
return 0;
    
}
