include<stdio.h>
void main()
{
        int i=0,j=0,k=0,n1,n2,n3;

        printf("Enter the size of array1 :");
        scanf("%d",&n1);

        int a1[n1];

        printf("Enter the elements in ascending order :");
        for(i=0;i<n1;i++)
                scanf("%d",&a1[i]);

        printf("Enter the size of array2 :");
        scanf("%d",&n2);

        int a2[n2];

        printf("Enter the elements in ascending order :");
        for(i=0;i<n2;i++)
        {
                scanf("%d",&a2[i]);
        }

        int a3[n1+n2];
        n3=n1+n2;
        i=0,j=0;

        while(i< n1&& j<n2)
        {
                if(a1[i]<a2[j])
                {
                        a3[k++]=a1[i];
                        i++;
                }
                else
                {
                        a3[k++]=a2[j];
                        j++;
                }
        }
        while(i<n1)
        {
                a3[k++]=a1[i++];

        }
        while(j<n2)
        {
                a3[k++]=a2[j++];
        }

printf("Merged array is\n");
        for(i=0;i<n3;i++)
                printf("%d  ",a3[i]);

}


