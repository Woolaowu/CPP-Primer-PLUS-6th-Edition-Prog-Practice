//
//  Person.hpp
//  10.2
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

using namespace std;
class Person{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person() {lname = ""; fname[0] = '\0';} //inline doesn't need definition again
    Person(const string & ln, const char * fn = "Heyyou");
    void show() const;
    void formalshow() const;
    
};
#endif /* Person_hpp */
