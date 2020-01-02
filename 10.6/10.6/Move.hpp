//
//  Move.hpp
//  10.6
//
//  Created by 丁子丰 on 2020/1/2.
//  Copyright © 2020 Woolaowu. All rights reserved.
//

#ifndef Move_hpp
#define Move_hpp

#include <stdio.h>
class Move {
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void showmove() const;
        Move add(const Move & m) const;
        void reset(double a = 0, double b = 0);
};
#endif /* Move_hpp */
