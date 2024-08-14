// #include<iostream>
// #include<fstream>
// using namespace std;
// int main() {
//     ofstream outfile("create.txt");
//     if (!outfile.is_open()) {
//         cerr<<"error"<<endl;
//         return 1;
//     }
//     cout<<"enter some txt to write to the file"<<endl;
//     string inputtext;
//     while(getline(cin,inputtext)) {
//         outfile<<inputtext<<endl;
//     }
//     outfile.close();
//     ifstream infile("create.txt");
//     if (! infile.is_open()) {
//         cerr<<"error"<<endl;
//         return 1;
//     }
//     cout<<endl;
//     cout<<"contents of the file :"<<endl;
//     string line;
//     while (getline(infile,line)) {
//         cout<<line<<endl;
//     }
//     infile.close();
//     return 0;
// }

// WRITING TO THE FILE

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main() {
//     ofstream outfile("write.txt");
//     if (outfile.is_open()) {
//         outfile<<"hello file handling in c++"<<endl;
//         outfile<<"this is a small example"<<endl;
//         outfile.close();
//         cout<<"data has been entered"<<endl;
//     } else {
//         cerr<<"unable to open file for writing"<<endl;
//         return 1;
//     }
//     ifstream infile("write.txt");
//     if (infile.is_open()) {
//         string line;
//         cout<<"content of the file: "<<endl;
//         while (getline(infile,line)) {
//             cout<<line<<endl;
//         }
//         infile.close();
//     } else {
//         cerr<<"unable to open the file for reading"<<endl;
//         return 1;
//     }
//     return 0;
// }

//APPEND TO THE FILE

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main() {
//     ofstream outputfile("append.txt");
//     if (!outputfile) {
//         cerr<<"error in cretaing the file"<<endl;
//         return 1;
//     }
//     outputfile<<"initial data\n";
//     outputfile.close();
//     ofstream appendfile("append.txt", ios::app);
//     if (!appendfile) {
//         cerr<<"error opening the file for appending"<<endl;
//         return 1;
//     }
//     appendfile<<"append data\n";
//     appendfile.close();
//     cout<<"data appended successfully"<<endl;
//     return 0;

// }

// SYNCHRONOUS READ

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main() {
//     ifstream inputfile("sync.txt");
//     if (!inputfile.is_open()) {
//         cerr<<"error opening the file"<<endl;
//         return 1;
//     } 
//     string line;
//     while (getline(inputfile,line)) {
//         cout<<line<<endl;
//     }
//     inputfile.close();
//     return 0;
// }

// ASYNCHRONOUS READ

#include<iostream>
// #include<fstream>
// #include<future>
// using namespace std;
// future<string> readfileasync(string filename) {
//     return async(launch::async,[filename](){
//         ifstream file (filename);
//         if (file.is_open()){
//             string content ((istreambuf_iterator<char>(file)),
//             (istreambuf_iterator<char>()));
//             return content;
//         } else {
//             throw runtime_error("unable to open the file");
//         }
//     });
// }

// int main() {
//     string filename="async.txt";
//     future<string> result=readfileasync(filename);
//     try {
//         string filecontent=result.get();
//         cout<<"file content :\n"<<filecontent<<endl;
//     } catch (exception e) {
//         cerr<<"error:"<<e.what()<<endl;
//     }
//     return 0;
// }

// REMOVING A FILE

// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string filename="third.cpp";
//     int result=remove("third.cpp");
//     cout<<result<<endl;
//     if (result==0) {
//         cout<<"file deleted successfully"<<endl;
//     } else {
//         cout<<"file not found"<<endl;
//     }
//     return 0;

// }