#include<iostream> 
using namespace std; 
 //defalut values 
int volume(int l=9, int b=8, int h=7) 
{ 
    return (l*b*h); 
} 
  

int main() 
{   cout <<"voume of 0 argument\t"<< volume() << endl;
    cout <<"voume of 1 argument\t"<<volume(8) << endl; 
    cout <<"voume of 2 argument\t"<< volume(5,4) << endl; 
    cout <<"voume of 3 argument\t"<< volume(8,3,9) << endl; 
    return 0; 
}
