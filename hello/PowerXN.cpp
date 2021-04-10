// C++ program to calculate pow(x,n) 
#include<iostream> 
using namespace std; 
class gfg 
{ 
      
/* Function to calculate x raised to the power y */
public: 
int power(int x, unsigned int y) 
{ 
    // if(y==0)
    //     return 1;
    // else if(y%2==1)
    //     return x*power(x, y/2)*power(x, y/2);//odd number enter an infinite recursion
    // else 
    //     return power(power(x,y/2), 2);  
    int C = 0;
    if (y == 1)
        return x;
    C = power(x, y/2);
    C = C * C;
    if (y % 2 == 1) 
        C = C * x;
    return C;

    // if (y == 0) 
    //     return 1; 
    // else if (y % 2 == 0) 
    //     return power(x, y / 2) * power(x, y / 2); 
    // else
    //     return x * power(x, y / 2) * power(x, y / 2);  
    
    // if (y == 0) return 1;
    // if (y == 1) return x;
    // if (y == 2) return x * x;
    // return power(x, y % 2) * power(power(x, y / 2), 2);
} 
}; 
  
/* Driver code */
int main() 
{ 
    gfg g; 
    int x = 2; 
    unsigned int y = 3; 
  
    cout << g.power(x, y); 
    return 0; 
} 