// WHILE LOOP 

// #include<iostream>
// using namespace std;
// int main() {
//     cout<<"counting 10 numbers"<<endl;
//     int count=1;
//     while (count<=10) {
//         cout<<"counting : "<<count<<endl;
//         count=count+1;
//     }
//     cout<<endl<<endl;
//     return 0;
// }

// #include<iostream> 
// #include <string>
// using namespace std;
// int main() {
//     string list[]={"nivi","devi"};
//     cout<<"miss."<<list[0]<<endl;
//     cout<<"miss."<<list[1]<<endl;
//     return 0;

// }

// #include<iostream> 
// #include <string>
// using namespace std;
// int main() {
//     string list[]={"nivi","devi"};
//     int count=0;
//     while(count<=3) {
//         cout<<"miss."<<list[count]<<endl;
//         count+=1;
//         }
//         cout<<endl;
//         return 0;
// }

//DO WHILE LOOP

// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     i=1;
//     do{
//         cout<<i<<endl;
//         i++;
//     } while(i<=5);
//     return 0;
// }

// FOR LOOP

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=1; i<=5; ++i) {
//         cout<<"number: "<<i<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int numbers[]={1,2,3,4,};
//     for(int num:numbers) {
//         cout<<num<<" ";
//         }
//         cout<<endl;
//         return 0;
// }

// BREAK 

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=1; i<=5; ++i) {
//         cout<<i<<" ";
//         if (i==3) {
//             cout<<"breaking the loop";
//             break;
//         }
//     }
//     cout<<endl<<endl;
//     cout<<"loop finished"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i=0;
//     while (i<5) {
//         cout<<"count: "<<i<<endl;
//         i++;
//         if(i==3) {
//             cout<<"breaking the loop at 3"<<endl;
//             break;
//         }
//     }
//     cout<<"loop finished"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i=0;
//     while (i<5) {
//         cout<<"count: "<<i<<endl;
//         i++;
//         if(i>=5) {
//             cout<<"exiting the loop"<<endl;
//         }
//     }
//     return 0;
// }

//CONTINUE

// #include<iostream>
// using namespace std;
// int main() {
//     int i=0;
//     while (i<5) {
//         i++;
//         if(i%2!=0) {
//             continue;
//         }
//         cout<<"current value of i: "<<i<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i=0;
//     while (i<5) {
//         cout<<"count :"<<i<<endl;
//         i++;
//     }
//     cout<<endl;
//     cout<<"loop ended"<<endl<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=1; i<=10; ++i) {
//         if(i%2!=0) {
//             continue;
//         }
//         cout<<i<<" is even"<<endl;
//     }
//     return 0;
// }