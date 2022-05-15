// C program to illustrate \r escape
// sequence
#include <stdio.h>
#include<time.h>
void delay(int no_of_sec)
{
    int milli_sec;
    milli_sec = 1000*no_of_sec;
    clock_t start_time=clock();
    while(clock()<start_time+milli_sec);
}
int main(void)
{
	// Here we are using \r, which
	// is carriage return character.
	printf("Hello Wor \bld\n");
	return (0);
}

// C program to illustrate
// \b escape sequence
/*#include <stdio.h>
int main(void)
{
    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    printf("Hello Geeks\b\b\b\bF");
    return (0);
}*/
/*#include<stdio.h>
void display();  //Funtion defination//
void display()   //Function defination//
{
    printf("Function is running\n");
}
int main()
{
   int a;
   display();  //Function Call//
return 0;
}*/