//
//  excepcls.cpp
//  Udemytutor
//
//  Created by tanvi jain on 03/03/2019.
//  Copyright © 2019 aalto. All rights reserved.
//
#include <iostream>

using namespace std;

class myexception: public exception{
public:
    virtual const char* what() const throw() {
        return "Something bad happened";
    }
};

class Test{
public:
    void goesWrong() {
        throw myexception();
    }
};

int main() {
    Test test;
    try{
        test.goesWrong();
    }
    catch(myexception &e){
        cout << e.what()<< endl;
    }
    return 0;
}
