#include<iostream>
using namespace std;
// int main(){

//     int number = 10;
//     int* ptr = &number;//ptr now hold address of number
//     int val = *ptr;
//     cout<<"Value of number is: "<<*ptr<<endl;// prints 10
//     cout<<"Value of ptr is: "<<ptr<<endl;//prints the memory address
//     cout<<"Value of val is: "<<val<<endl;

// //     return 0;
// // }
// int main(){

//     int x = 10;
//     int* ptr = &x;
//     cout<<*ptr<<endl;//print

// //Dereferencing to read
//     int value = *ptr;//prints 10

// //Dereferencing to modify
//     *ptr = 99;//change x = 10 to x = 99

//     cout<<*ptr<<endl;//prints 99
//     cout<<ptr<<endl;//print the memory address
//     cout<<&x<<endl;//print the memory address
//     return 0;
// }
// 

// int main() {
//     int *ptr1;
//     char *ptr2;
    
//     // Finding size using sizeof()
//     cout << sizeof(ptr1) << endl;
//     cout << sizeof(ptr2);
    
//     return 0;
// }
int main(){

    int arr[4]={1, 2, 3, 4};
    int* ptr = arr;//ptr point to first element of array
    for(int i=0; i<4; i++){
        cout<<(*ptr+i)<<"\t";
        cout<<(ptr+i)<<endl;
    }
    
    return 0;
}