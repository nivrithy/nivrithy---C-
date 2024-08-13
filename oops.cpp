// #include<iostream>
// #include<string>
// using namespace std;
// class person {
//     private:
//     string name;
//     int age;
//     public:
//     person(string n,int a) {
//         name=n;
//         age=a;
//     }
//     void displayinfo() {
//         cout<<"name:"<<name<<", age:"<<age<<" years old!"<<endl<<endl;
//     }
//     string getname() {
//         return name;
//     }
//     int getage() {
//         return age;
//     }
//     void setname(string n) {
//         name=n;
//     }
//     void setage(int a) {
//         age=a;
//     }
// };

// int main() {
//     person person1("nivi",21);
//     person person2("mirra",22);
//     person1.displayinfo();
//     person2.displayinfo();
//     cout<<endl;
//     cout<<"before modification : "<<person1.getname()
//     <<"is"<<person1.getage()<<" years old.!"<<endl<<endl;
//     person1.setname("nivrithy");
//     person1.setage(20);
//     cout<<"after modification : "<<person1.getname()
//     <<"is now"<<person1.getage()<<"years old.!"<<endl<<endl;
//     return 0;
// }


// CONSTRUCTOR

// #include <iostream>
// #include<string>
// using namespace std;
// class person {
//     private:
//     string name;int age;
//     public:
//     person (string n,int a) {
//         name=n;
//         age=a;
//         cout<<"constructor called for "<<name<<endl<<endl;
//     }
//     void displayinfo() {
//         cout<<"name: "<<name<<" is "<<age<<" years old! "<<endl<<endl;
//     }
// };

// int main() {
//     person person1("ramesh",35);
//     person person2("devi",30);
//     person1.displayinfo();
//     person2.displayinfo();
//     return 0;
// }

// MEMBER FUNCTION

// #include<iostream>
// #include <string>
// using namespace std;
// class person{
//     private:
//     string name;int age;
//     public:
//     person(string n,int a) : name(n),age(a) {}
//     void setname(string n) {
//         name=n;
//     }
//     void setage(int a) {
//         age=a;
//     }
//     void displayinfo() {
//         cout<<"name:"<<name<<" is "<<age<<" years old!"<<endl<<endl;
//     }
// };

// int main() {
//     person person1("nikhil",21);
//     person person2("rohan",22);
//     cout<<"initial information: "<<endl;
//     person1.displayinfo();
//     person2.displayinfo();
//     person1.setname("niki");
//     person2.setage(28);
//     cout<<"modified information : "<<endl;
//     person1.displayinfo();
//     person2.displayinfo();
//     return 0;
// }

// METHODS

// #include<iostream>
// #include<string>
// using namespace std;
// class car {
//     private:
//     string make; string model; int year;
//     public:
//     car(string make,string model,int year) {
//         this->make=make;
//         this->model=model;
//         this->year=year;
//     }
//     void displayinfo() {
//         cout<<"car info:"<<endl<<endl;
//         cout<<"make:"<<make<<endl<<endl;
//         cout<<"model:"<<model<<endl<<endl;
//         cout<<"year:"<<year<<endl<<endl;
//     }
//     void accelerate() {
//         cout<<"the car is accelerating"<<endl<<endl;
//     }
//     void brake() {
//         cout<<"the car is stopped"<<endl<<endl;
//     }
// };

// int main() {
//     car mycar("toyota","camry",2022);
//     car nocar("ford","mustang",2023);
//     mycar.displayinfo();
//     mycar.accelerate();
//     cout<<"\n";
//     nocar.displayinfo();
//     nocar.brake();
//     return 0;
// }