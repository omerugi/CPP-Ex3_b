//
// Created by omerugi on 26/05/2020.
//

#ifndef EX3CPP_SNIPER_HPP
#define EX3CPP_SNIPER_HPP

#include "Soldier.hpp"
class Sniper: public Soldier {
public:
    explicit Sniper(int p):Soldier(p,100,50,0,"Sniper"){};
    Sniper(int p,int hp,int dpa,int hpa,string t):Soldier(p,hp,dpa,hpa,t){};
    void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location) override;
    void heal() override;
};


#endif //EX3CPP_SNIPER_HPP
