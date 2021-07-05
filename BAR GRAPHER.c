#include<stdio.h>
#include<string.h>
int largest(int a,int b,int c){
    if(a>b&&a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;


}
void barl(int n){

    for(int i=0;i<n;i++)    {
        printf("%c%c%c%c",219,219,219,219);
        printf("____");
    }
    printf("\n");
}
void bar(int n){

    for(int i=0;i<n;i++){
        printf("%c%c%c%c\t",219,219,219,219);
    }
    printf("\n");
}
void barf(int n){

    for(int i=0;i<n;i++){
        printf("%c%c%c%c\t",219,219,219,219);
    }


}
void base(int a){
    for(int i=0;i<a;i++){
        printf("%c",223);
    }
    printf("\n");
}
int main(){
    int a,b,c,d,e,n,y[5],l,pt,start=0,variable[15],value[15];
    printf("Enter the scale step: ");
    scanf("%d",&l);
    char x[5][15];
    printf("Enter name of variable followed by value and input values in the same order\n");
    puts("i.e \nName\tscore\nDAAKI\t00");
    base(15);
    scanf("%s%s",variable,value);
    for(int i=0;i<strlen(variable);i++)
        printf("_");
    printf("  ");
    for(int i=0;i<strlen(value);i++)
        printf("_");
    printf("\n");

    for(int i=0;i<5;i++)
        scanf("%s%d",&x[i][0],&y[i]);
    a=y[0];
    b=y[1];
    c=y[2];
    d=y[3];
    e=y[4];
    n=largest(a,b,largest(c,d,e))+5;

    int no=20;
    printf("\t\t\t%c",218);
    for(int i=0;i<no;i++)
        printf("%c",196);
     printf("%c\n",191);
     printf("\t\t\t%c  THE HISTOGRAM     %c",179,179);
     printf("\n\t\t\t%c",192);
     for(int i=0;i<no;i++)
         printf("%c",196);
    printf("%c\n",217);
    for(int j=n;j>0;j--)
    {
        if(j+1<10)
            printf(" ");
            if((j+1)%l==0)
                printf("%d-%c\n",j+1,179);
            else
            {
                if(j+1>10)
                    printf("   %c\n",179);
                else
                    printf("  %c\n",179);
            }
        if(j==largest(a,b,largest(c,d,e)))
        {

            for(int i=largest(a,b,largest(c,d,e));i>0;i--)
            {
                if(i<10)
                    printf(" ");
                else if(i%l!=0)
                    printf(" ");
                if(i<=a&&i<=b&&i<=c&&i<=d&&i<=e)
                {
                    pt++;
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        bar(5);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        bar(5);
                    }
                    if(pt>=l&&largest(a,b,largest(c,d,e))>20&&i%l==0)
                    {
                        start=i-l;
                        break;

                    }
                }
                else if(i<=a&&i<=b&&i<=c&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        bar(4);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        bar(4);
                    }

                }


                /*For only a, b, c, and e present*/
                 else if(i<=a&&i<=b&&i<=c&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(3);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(3);
                        printf("\t");
                        bar(1);
                    }
                }


                /*For only a, b, and c*/
                 else if(i<=a&&i<=b&&i<=c&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        bar(3);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        bar(3);
                    }

                }



                /*For only a, b, d and e present*/
                else if(i<=a&&i<=b&&!(i<=c)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(2);
                        printf("\t");
                        bar(2);
                    }
                    else
                    {
                        printf("  %c\t",179);

                        printf("  %c\t",i,179);
                        barf(2);
                        printf("\t");
                        bar(2);
                    }
                }



                /*For only a, b, and d present*/
                else if(i<=a&&i<=b&&!(i<=c)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(2);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(2);
                        printf("\t");
                        bar(1);
                    }
                }


                /*For only a, b, and e present*/
                else if(i<=a&&i<=b&&!(i<=c)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(2);
                        printf("\t\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t");
                        barf(2);
                        printf("\t\t");
                        bar(1);
                    }
                }


                /*For only a and b present*/
                else if(i<=a&&i<=b&&!(i<=c)&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        bar(2);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        bar(2);
                    }
                }



                /*For only b,c, d, and e present*/
                else if(i<=b&&i<=c&&!(i<=a)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        bar(4);
                    }
                    else
                    {
                        printf("  %c\t\t",179);
                        bar(4);
                    }
                }


                /*For only b,c and d present*/
                else if(i<=b&&i<=c&&!(i<=a)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        bar(3);
                    }
                    else
                    {
                        printf("  %c\t\t",179);
                        bar(3);
                    }
                }


                /*For only b,c, and e present*/
                else if(i<=b&&i<=c&&!(i<=a)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        barf(2);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t",179);
                        barf(2);
                        printf("\t");
                        bar(1);
                    }
                }


                /*For only b and c present*/
                else if(i<=b&&i<=c&&!(i<=a)&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        bar(2);
                    }

                    else
                    {
                        printf("  %c\t\t",179);
                        bar(2);
                    }
                }



                /*For only a, c, d, and e present*/
                else if(i<=a&&i<=c&&!(i<=b)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t");
                        bar(3);
                    }

                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t");
                        bar(3);
                    }
                }
                else if(i<=a&&i<=c&&!(i<=b)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t");
                        bar(2);
                    }

                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t");
                        bar(2);
                    }
                }



                /*For only a, c and e present*/
                else if(i<=a&&i<=c&&!(i<=b)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t");
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t");
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                }




                /*For only a and c present*/
                else if(i<=a&&i<=c&&!(i<=b)&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t");
                        bar(1);
                    }

                }




                /*For only a, d and e*/
                else if(i<=a&&!(i<=b)&&!(i<=c)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t\t");
                        bar(2);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t\t");
                        bar(2);
                    }

                }


                /*For only a and d present*/
                else if(i<=a&&!(i<=b)&&!(i<=c)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t\t");
                        bar(1);
                    }

                }



                /*For only a and e present*/
                else if(i<=a&&!(i<=b)&&!(i<=c)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i,179);
                        barf(1);
                        printf("\t\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        barf(1);
                        printf("\t\t");
                        bar(1);
                    }
                }

                /*For only a present*/
                else if(i<=a&&!(i<=b)&&!(i<=c)&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t",i);
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t",179);
                        bar(1);
                    }
                }


                /*For only b, d and e*/
                else if(i<=b&&!(i<=a)&&!(i<=c)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        barf(1);
                        printf("\t");
                        bar(2);
                    }
                    else
                    {
                        printf("  %c\t\t",179);
                        barf(1);
                        printf("\t");
                        bar(2);
                    }
                }


                /*For only b and d present*/
                else if(i<=b&&!(i<=a)&&!(i<=c)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t",179);
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                }

                /*For only b and e present*/
                else if(i<=b&&!(i<=a)&&!(i<=c)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        barf(1);
                        printf("\t\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t",179);
                        barf(1);
                        printf("\t\t");
                        bar(1);
                    }
                }

                /*For only b present*/
                else if(i<=b&&!(i<=a)&&!(i<=c)&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t",i,179);
                        bar(1);
                    }

                    else
                    {
                        printf("  %c\t\t",179);
                        bar(1);
                    }
                }




                /*For only c, d and e present*/
                else if(i<=c&&!(i<=a)&&!(i<=b)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t",i,179);
                        bar(3);
                    }
                    else
                    {
                        printf("  %c\t\t\t",179);
                        bar(3);
                    }
                }

                /*For only c and d present*/
                else if(i<=c&&!(i<=a)&&!(i<=b)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t",i,179);
                        printf("  %c\t\t\t",179);
                        barf(1);
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t\t",179);
                        barf(1);
                        bar(1);
                    }
                }


                /*For only c and e present*/
                else if(i<=c&&!(i<=a)&&!(i<=b)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t",i,179);
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t\t",179);
                        barf(1);
                        printf("\t");
                        bar(1);
                    }
                }


                /*For only c present*/
                else if(i<=c&&!(i<=a)&&!(i<=b)&&!(i<=d)&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t",i,179);
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t\t",179);
                        bar(1);
                    }
                }



                /*For only d and e present*/
                else if(!(i<=c)&&!(i<=a)&&!(i<=b)&&i<=d&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t\t",i,179);
                        bar(2);
                    }
                    else
                    {
                        printf("  %c\t\t\t\t",179);
                        bar(2);
                    }
                }


                /*For only e present*/
                 else if(!(i<=c)&&!(i<=a)&&!(i<=b)&&!(i<=d)&&i<=e)
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t\t\t",i,179);
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t\t\t\t",179);
                        bar(1);
                    }
                }


                /*For only d present*/
                 else if(!(i<=c)&&!(i<=a)&&!(i<=b)&&i<=d&&!(i<=e))
                {
                    if(i%l==0)
                    {
                        printf("%d-%c\t\t\t\t",i,179);
                        bar(1);
                    }
                    else
                    {
                        printf("  %c\t\t\t\t",179);
                        bar(1);
                    }
                }


}
            j=0;
        }



    }
    if(start>0)
    {
        for(int i=0;i<l-1;i++)
        {
             printf("   %c\t",179);
             bar(5);
        }
        printf("%d-%c____",start,179);
        barl(5);

    }
    else
    {
        printf(" %d-%c____",start,179);
        barl(5);
    }
    printf("\t%s\t%s\t%s\t%s\t%s\n",x[0],x[1],x[2],x[3],x[4]);
    printf("\n\t\t%s\n\n",variable);
    main();
}
