#include <stdio.h>

void printBinary(int n,int i)
{
	//print the binary representation of a number n ip to i-bits.
	int k;
	for(k= i-1;k>=0;k--){
		if((n>>k)&1)
		printf("1");
		else
		printf("0");
	}
}
typedef union { 
  
    float f; 
    struct
    { 
  
        // Order is important. 
        // Here the members of the union data structure 
        // use the same memory (32 bits). 
        // The ordering is taken 
        // from the LSB to the MSB. 
        unsigned int mantissa : 23; //bit fields
        unsigned int exponent : 8; 
        unsigned int sign : 1; 
  
    } raw; 
} myfloat;
// Function to convert real value 
// to IEEE foating point representation 
void printIEEE(myfloat var) 
{ 
  
    // Prints the IEEE 754 representation 
    // of a float value (32 bits) 
  
    printf("%d | ", var.raw.sign); 
    printBinary(var.raw.exponent, 8); 
    printf(" | "); 
    printBinary(var.raw.mantissa, 23); 
    printf("\n"); 
} 
// Driver Code 
int main() 
{ 
  
    // Instantiate the union 
    myfloat var1,var2,var3; 
    int t;
    // Get the real value 
    var1.f = 1.875;
	var2.f = 0; 
    for(t=0;t<10;t++){
	var1.f=var1.f+t;
	var2.f=var2.f+t;
	var3.f=var1.f+var2.f;
	printf("Numbers of case= %d \n",t);
    // Get the IEEE floating point representation 
    printf("//IEEE 754 representation of x = %f is : \n", 
           var1.f);
	printIEEE(var1); 
    printf("//IEEE 754 representation of y =%f is : \n", 
           var2.f); 
    printIEEE(var2); 
    
    
    printf("//IEEE 754 representation of x+y =%f is : \n", 
           var3.f); 
    printIEEE(var3);
    }
    return 0; 
} 
