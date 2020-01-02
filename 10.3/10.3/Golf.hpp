//
//  Golf.hpp
//  10.3
//
//  Created by 丁子丰 on 2019/12/30.
//  Copyright © 2019 Woolaowu. All rights reserved.
//

#ifndef Golf_hpp
#define Golf_hpp

#include <stdio.h>
const int LEN = 40;
class Golf{
private:
    //static const int LEN = 40;
    char fullname[LEN];
    int handicap;
public:
    Golf();
    Golf(const char * name, int hc);
    //void setgolf(golf & g, const char * name, int hc);
    void setgolf();
    void showgolf() const;
};





#endif /* golf_hpp */
