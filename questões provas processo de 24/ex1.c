#include <stdio.h>

int func(int x){
    if (x < 1) return 0;
    return x + func(x - 1);
    }

int main() {

    int a = 10, b;
    int c;

    for (b = 0; b < 4; b++){
        for (c = b; c <= b; c++){
            a += func(c);
        }
        
    }
    
    //qual será o resultado de a?
    

}

