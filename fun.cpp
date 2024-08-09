// USING INT

// #include<iostream>
// using namespace std;
// int rect_area() {
//     int l=10,w=5;
//     return l*w;
// }
// int main() {
//     cout<<"area is : "<<rect_area()<<endl;
//     return 0;
// }

//USING VOID

// #include <iostream>
// using namespace std;
// void rect_area() {
//     int l=10,w=5;
//     cout<<"area is : "<<l*w<<endl;
// }
// int main() {
//     rect_area();
//     return 0;
// }

// WITHIN RETURN TYPE & WITHIN ARGUEMENT 

#include<iostream>
using namespace std;
int rect_area(int l ,int w) {
    return l*w;
}
int main() {
    int l,w;
    cout<<"length : ";
    cin>>l;
    cout<<"width : ";
    cin>>w;
    cout<<"area is : "<<rect_area(l,w)<<endl;
    return 0;
}