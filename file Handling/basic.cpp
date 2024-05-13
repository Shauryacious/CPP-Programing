#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //! CREATE OPEN AND WRITE ON FILE
    ofstream onFile;
    onFile.open("/Users/shauryaagrawal/Desktop/file.txt");
    onFile<<"Radhe Radhe";
    cout<<"Create & write"<<endl;
    onFile.close();

    // //! READ FILE
    // ifstream inFile;
    // string str;
    // inFile.open("/Users/shauryaagrawal/Desktop/file.txt");
    // while(getline(inFile, str)){
    //     cout<<str;
    // }
    
    // cout<<endl<<"reading done";
    // inFile.close();

    //! COPY FILE
    ifstream inFile;
    inFile.open("/Users/shauryaagrawal/Desktop/file.txt");
    char chr;
    fstream onFileCopy;
    onFileCopy.open("/Users/shauryaagrawal/Desktop/fileCopy.txt");

    while(inFile.get(chr)){
        onFileCopy.put(chr);
    }
    cout<<endl<<"Copied Succesfull"<<endl;
    inFile.close();
    onFileCopy.close();


}