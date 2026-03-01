//Pointer:
// is a variable that stores the memory address of another variable
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int a =10;
//     int *p;
//     p=&a;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&a;
// }

// int main(){
//     int arr[5]={9,1,8,2,7};
//     int *p=arr;
//     //p++;
//     cout<<*p<<endl;
//     cout<<arr[0]<<endl;
//     cout<<*(arr+0)<<endl;
//     cout<<p<<endl;
//     for(int i=0;i<5;i++){
//         cout<<*(p+i)<<endl;
//     }
// }



// int main(){
//     int x=10;
//     void *p=&x;
//     cout<<*(int*)p<<endl;
// }



//pointer to pointer

// int main(){
//     int p=20;
//     int q=30;
//     int *x;
//     int **y;
//     x=&p;
//     y=&x;
//     cout<<*x<<endl;
//     cout<<**y<<endl;
// }

// int main(){
//     int *p=new int;
//     *p=10;
//     cout<<*p<<endl;
// }

// int main(){
//     int arr[8]={9,1,2,3,4,8,7,6};
//     int *p=arr;
//     cout<<*p<<endl;
//     cout<<*(arr+5)<<endl;
//     cout<<*(p+2);
// }

// void func(int *p){
//     *p=100;
//     cout<<*p;
// }
// int main(){
//     int x=50;
//     func(&x);
// }
// void func(int x){
//     x=100;
// }
// int main(){
//     int a=50;
//     func(a);
//     cout<<a;
// }
void func(int *p){
    *p=500;
}
int main(){
    int a=50;
    func(&a);
    cout<<a;
}