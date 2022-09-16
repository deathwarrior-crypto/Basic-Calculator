#include <iostream>
#include <math.h>
using namespace std;

int calculator(int, int, int);

int main(){
    int a,b,c, g;
    cout<< "Please enter the first number and second number" << endl;
    cin >> a >> b;
    cout << "Please enter the math operator you want to perform -- 1 for +, 2 for -, 3 for *, 4 for /, 5 for ^" << endl;
    cin >> c;
    g = calculator(a,b,c);
    if (c == 1){
        cout << a << " + " << b << " = " << g << endl;
    }else if(c==2){
        cout << a << " - " << b << " = " << g << endl;
    }else if(c==3){
        cout << a << " * " << b << " = " << g << endl;
    }else if(c==4){
        cout << a << " / " << b << " = " << g << endl;
    }else if(c==5){
        cout << a << " ^ " << b << " = " << g << endl;
    }return 0;
}

int calculator (int x, int y, int z){
    int h;
    if (z == 1){
        h = x+y;
        return h;
    }else if (z == 2){
        h = x-y;
        return h;
    }else if (z == 3){
        h = x*y;
        return h;
    }else if (z == 4){
        h = x/y;
        return h;
    }else if (z == 5){
        h = pow(x,y);
        return h;
    }
}