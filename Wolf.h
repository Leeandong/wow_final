//
// Created by 李安东 on 2018/3/11.
//

#ifndef WAR2_0_WOLF_H
#define WAR2_0_WOLF_H


#include "Warriors.h"
#include <string>
#include "Global.h"
using namespace std;

class Wolf: public Warriors {
private:string name="wolf";
public:
    Wolf(int serial_num, int strength);
    virtual void fightback(Warriors *p); //反击函数
    virtual void Hurted(int a);  //受伤函数
    virtual void attack(Warriors *p); //攻击函数


};


#endif //WAR2_0_WOLF_H
