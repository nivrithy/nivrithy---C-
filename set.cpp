//EXPLICIT TYPE ANNOTATION

//#include <iostream>
//#include<string>
//#include<set>
//using namespace std;
//int main() {
    //set<string> books={
        //"python",
        //"java",
        //"dart",
        //"c++"
    //};
    //for (string element:books) {
        //cout<<element<<endl;
    //}
    //cout<<endl;
    //return 0;
//}

//IMPLICIT TYPE INFERENCE

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     auto sentence=string("hi,welcome to mgis");
//     cout<<"greetings:"<<sentence<<endl;
//     return 0;
//}

//SET OF NUMBERS

// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     set<int> num={
//         1,2,3,4,5
//     };
//     for (int numbers:num) {
//         cout<<"the set is : "<< numbers;
//     }
//     return 0;
// }

//INSERT INTO SET

// #include<iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<string>myset={"nivi","subi","nikhil","devi","ramesh"};
//     cout<<"set elements:";
//     for (string element:myset) {
//         cout<<" "<<element;
//     }
//     cout<<endl;
//     myset.insert("rithu");
//     cout<<"updated set: ";
//     for (string element:myset) {
//         cout<<" "<<element;
//     }
//     cout<<endl;
//     return 0;
// }


//REMOVING

// #include<iostream>
// #include<set>
// using namespace std;
// int main() {
//    set<string>myset={"nivi","subi","nikhil","devi","ramesh","rithu"};
//      cout<<"set elements:";
//      for (string element:myset) {
//          cout<<" "<<element;
//      }
//      cout<<endl;
//      myset.erase("rithu");
//      for (string element:myset) {
//         cout<<element<<endl;
//      }
//      return 0;
// }
     
//CLEAR

// #include <iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<string> books={"python","c++","c","dart","java"};
//     cout<<"original set : ";
//     for (string element:books) {
//         cout<<element<<" ";
//     }
//     cout<<endl<<endl;
//     books.clear();
//     cout<<"set after clearing : ";
//     for (string element:books) {
//         cout<<element<<" ";
//     }
//     cout<<endl<<endl;
//     return 0;
// }

//FIND AN ITEM

// #include <iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<string> books={"python","c++","c","dart","java"};
//     auto it=books.find("dart");
//     if (it !=books.end()) {
//         cout<<"dart is found"<<endl;
//     } else {
//         cout<<"dart not found"<<endl;
//     }
//     return 0;
// }

//REPACEMENT IN SET

// #include <iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<string> books={"python","c++","c","dart","java"};
//     cout<<"original set : ";
//     for (string element:books) {
//         cout<<element<<" ";
//     }
//     cout<<endl<<endl;
//     books.erase("c");
//     books.insert("pandas");
//     cout<<"set after replacement : ";
//     for (string element:books) {
//         cout<<element<<" ";
//     }
//     cout<<endl<<endl;
//     return 0;
// }
    
// RESETTING OF SET

// #include <iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<string> books={"python","c++","c","dart","java"};
//     cout<<"original set : ";
//     for (string element:books) {
//         cout<<element<<" ";
//     }
//     cout<<endl<<endl;
//     books.clear();
//     cout<<"set after resetting : ";
//     for (string element:books) {
//     cout<<element<<" ";
//     }
//     cout<<endl<<endl;
//     return 0;
// }

//SIZE OF SET

// #include <iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<string> books={"python","c++","c","dart","java"};
//     cout<<"size of set : "<<books.size()<<endl<<endl;
//     return 0;
// }

//UNION OPERATION

// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main() {
//     unordered_set<int> set1={1,2,3,4,5};
//     unordered_set<int> set2={3,4,5,6,7};
//     unordered_set<int> unionset;
//     unionset.insert(set1.begin(),set1.end());
//     unionset.insert(set2.begin(),set2.end());
//     cout<<"union set";
//     for (int elem:unionset) {
//         cout<<elem<<" ";
//     }
//     cout<<endl<<endl;
//     return 0;
// }

//DIFFERENCE

// #include<iostream>
// #include<set>
// #include<algorithm>
// using namespace std;
// int main() {
//     set<int> set1={1,2,3,4,5};
//     set<int> set2={3,4,5,6,7};
//     set<int> difference;
//     set_difference(set1.begin(),set1.end(),set2.begin(),set2.end(),
//     inserter(difference,difference.begin()));
    
//     cout<<"difference :";
//     for (int value:difference) {
//         cout<<value<<" "; 
//     }
//     cout<<endl<<endl;
//     return 0;
// }



         
        


