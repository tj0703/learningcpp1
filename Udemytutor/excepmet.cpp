//
//  main.cpp
//  Udemytutor
//
//  Created by tanvi jain on 01/03/2019.
//  Copyright © 2019 aalto. All rights reserved.
//

#include <iostream>
using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = false;
    if(error1){
        throw "something went wrong";
    }
    if(error2){
        throw string("something went wrong");
    }
}
class CanGoWrong{
public:
    CanGoWrong() {
        char *pMemory = new char[999999999999999999];
        delete [] pMemory;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    try{
        CanGoWrong wrong;
    }
    catch(bad_alloc &e){
        cout << "caught exception :" << e.what() << endl;
    }
    try{
    mightGoWrong();
    }
    catch(int e){
        cout<< "error code:" << e<<endl;
    }
    catch(const char * e){
        cout<< "error code:" << e<<endl;
    }
    catch(string e){
        cout<< "error code:" << e<<endl;
    }
    cout << "still running" << endl;
    exit(8);
    return 0;
}
