                                                                                                                                                                                                                                                                                                   #include<stdio.h>
void main()
{
        int u[20],a[10],b[10];
        int n,na,nb;

        printf("Enter the size of universal set :");
        scanf("%d",&n);

        int ab[n],bb[n],ub[n];

        printf("Enter the elements of universal set :");
        for(int i=1;i<=n;i++)
                scanf("%d",&u[i]);

        printf("Enter the size of set A :");
        scanf("%d",&na);
        if(na>n)
                printf("Size exceeds");
        else
        {
                printf("Enter the elements of set A :");
                for(int i=1;i<=na;i++)
                        scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=na;j++)
                {
                        if(u[i]==a[j])
                        {       ab[i]=1;
                                break;
                        }
                        else
                                ab[i]=0;
                }

        }
        printf("Enter the size of set B :");
        scanf("%d",&nb);
        if(nb>n)
                printf("Size exceeds");
        else
        {
                printf("Enter the elements of set B :");
                for(int i=1;i<=nb;i++)
                        scanf("%d",&b[i]);
        }
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=nb;j++)
                {
                        if(u[i]==b[j])
                        {       bb[i]=1;
                                break;
                        }
                        else
                                bb[i]=0;
                }

        }


        printf("\nBit string of set A:");
        for(int i=1;i<=n;i++)
        {
                printf("%d  ",ab[i]);
        }

        printf("\nBit string of set B :");
        for(int i=1;i<=n;i++)
        {
                printf("%d  ",bb[i]);
        }



        int inter[n],complement[n],diff[n],un[n];
        for(int i=1;i<=n;i++)
        {
                if(ab[i]&&bb[i]==1)
                        inter[i]=1;
                else
                        inter[i]=0;
                if(ab[i]||bb[i]==1)
                        un[i]=1;
                else
                        un[i]=0;

        }
        printf("\nBit string of Union :");
        for(int i=1;i<=n;i++)
        {
                printf("%d  ",un[i]);
         }
        printf("\nUnion :");
        for(int i=1;i<=n;i++)
        {
                if(un[i]==1)
                        printf("%d  ",u[i]);
        }



        printf("\nBit string of Intersection:");
        for(int i=1;i<=n;i++)
        {
                printf("%d  ",inter[i]);
         }
        printf("\nIntersection :");
        for(int i=1;i<=n;i++)
        {
                if(inter[i]==1)
                        printf("%d  ",u[i]);
        }




        printf("\nBit string of Differance :");

        for(int i=1;i<=n;i++)
        {
                complement[i]=!bb[i];
                diff[i]=ab[i]&&complement[i];
                printf("%d  ",diff[i]);
        }
        printf("\nDifferance :");

        for(int i=1;i<=n;i++)
        {
                if(diff[i]==1)
                        printf("%d  ",u[i]);
        }

}


