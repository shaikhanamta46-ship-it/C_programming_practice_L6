#include <stdio.h>

int main() {
    int i = 72;
    int* j = &i;//J is the pointer pointing to i(j is integer pointer)
    int k = 67;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",k);

    printf("The value at address j is %d\n",*(&i));
    return 0;
}

#include <stdio.h>

//other types
int main() {
    char i = 'A';
    char* j = &i;//J is the pointer pointing to i(j is characte pointer)
    float k = 67.56;
    float* k1 = &k;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",k);

    printf("The value at address j is %f\n",*(&i));
    return 0;
}

/*#include <stdio.h>
int main (){
int i = 8;
int *j;
j = &i;
printf("add i= %u\n",&i);
printf("add i= %u\n",j);
printf("add j= %u\n",&j);
printf("value i= %d\n",i);
printf("value i= %d\n",*(&i));
printf("value i= %d\n",*j);
return 0;
}
*/

//pointer to pointer
#include <stdio.h>



int main() {
    int i = 24;
    int* j = &i;
    int** k = &j;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));
    
    
    
     

    return 0;
}
/*Yaad Rakhne Ki Trick
a      = value
&p     = address

*p     = 1 step piche
**p    = 2 step piche
***p   = 3 step piche

Example:

***r
 ↓
**q
 ↓
*p
 ↓
a
 ↓
10*/


//call by value



#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    a = 12;
    return (a + b);
}
int main() {
    int x = 6, y = 1;
    printf("The sum of x and y is %d\n",sum(x,y));
    printf("The value of x is %d",sum(x,y));
    return 0;
}
/*Call by Value's easiest definition

Jab function ko variable ki copy bheji jaati hai, original variable nahi, to use Call by Value kehte hain.*/

//call by reference
#include <stdio.h>


//sum should change the value of x and y..
int sum(int*, int*);
int sum(int* a, int* b){
    *a = 12;
    return (*a + *b);
}
int main() {
    int x = 6, y = 1;
    printf("The sum of x and y is %d\n",sum(&x,&y));
    printf("The value of x is %d",x);
    return 0;
}

//swapping in c
#include <stdio.h>

void swap(int*,int*);

void swap(int* a, int* b){
    int* temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int a = 4 , b = 6;
    swap(&a,&b);
    printf("The value of a is %d the value of b is %d",a,b);
    
    return 0;
}
