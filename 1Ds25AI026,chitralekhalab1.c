#include <stdio.h>

int main() {
    int a[7]={1,2,4,3,9,0};
    int last=5;
    //1.Traversal
    printf("Traversal\n");
    for(int i=0;i<=last;i++)
    {
        printf("%d,",a[i]);
        
    }
    //2.Linear search
    printf("\n\nLinear search\n");
    int key=9;
    for(int i=1;i<=last;i++)
    {
        if(key=a[i])
        {
            printf("No Found at index=%d",i);
            break;
        }
    }
    //3.Finding Maximum
    printf("\n\nFinding Maximum\n");
    int max=a[0];
    for(int i=1;i<=last;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("Max Element is=%d",max);
    
    //4.Finding Minimum
    printf("\n\nFinding Minimum\n");
    int min=a[0];
    for(int i=1;i<=last;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("Min Element is=%d",min);
    
    //5.Insertion
    printf("\n\nInsertion\n");
    int val_ins=99;
    int pos_ins=3;
    printf("\nArray before insertiopn\n");
    for(int i=0;i<=last;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nInsertion of key=%d at index pos=%d\n",val_ins,pos_ins);
    for(int i=last;i>=pos_ins;i--)
    {
        a[i+1]=a[i];
        
    }
    a[pos_ins]=val_ins;
    last++;
    printf("\nArray after insertion at given pos\n");
    for(int i=0;i<=last;i++)
    {
        printf("%d,",a[i]);
    }
    //6.Deletion
    printf("\n\nDeletion\n");
    int val_del=3;
    int pos_del=3;
    printf("\nArray before deletion\n");
    for(int i=0;i<=last;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\n\nDeletion of element at index pos=%d\n",pos_del);
    for(int i=pos_del;i<=last;i++)
    {
        a[i]=a[i+1];
    }
    last--;
    printf("\nArray after deletion\n");
    for(int i=0;i<=last;i++)
    {
        printf("%d,",a[i]);
    }
    
    //7.sum of all elements
    int sum=0;
    printf("sum of all elements\n");
    for(int i=0;i<=last;i++)
    {
        sum=sum+a[i];
        
    }
    printf("sum=%d",sum);
    
    
    
    
    
    
    
    
	
}

