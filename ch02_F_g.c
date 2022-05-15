#include<stdio.h>
int main()
{
    int a,b,c,largest,s1,s2,valid;
  //Taking input of all three sides//
    printf("\nEnter First side of triangle : ");
    scanf("%d",&a);
    printf("\nEnter Second side of triangle : ");
    scanf("%d",&b);
    printf("\nEnter Third side of triangle : ");
    scanf("%d",&c);

//Finding largest side and other two sides//

     if(a>b && a>c)
   { largest=a;
        s1=b;
        s2=c;
      }
    else if(b>c && b>a)
    {
        largest=b;
        s1=c;
        s2=a;
      }
    else if(c>b && c>a)
    {
        largest=c;
        s1=a;
        s2=b;
      }
    else 
    largest = 0;
    
    //Checking if triangle is valid or not//

                if(s1+s2>largest)
                valid=1;
                else
                valid=0;
            if(valid==1)
            {

//Scalene triangle//

        if(a!=b && a!=c && b!=c)
        printf("\nTriangle is Scalene\n");

    //Equilateral triangle//

        else if(a==b && b==c && a==c)
        printf("\nTriangle is Equilateral\n");

      //Isosceles triangle//

        else if(a==b && a!=c)
        printf("\nTriangle is Isosceles\n");
        else if(b==c && b!=a)
        printf("\nTriangle is Isosceles\n");
        else if(c==a && c!=b)
        printf("\nTriangle is Isosceles\n");

        //Right angled triangle//

        else if(largest*largest==(s1*s1)+(s2*s2))
        printf("\nRight angled Triangle\n");
        return 0;
            }

      //Invalid triangle//
      
    else
    printf("\nTHE TRIANGLE IS Invalid\n\nPlease Enter Valid Triangle\n");
}