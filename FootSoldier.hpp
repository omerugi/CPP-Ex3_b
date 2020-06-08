//
// Created by omerugi on 24/05/2020.
//

#ifndef EX3CPP_FOOTSOLDIER_HPP
#define EX3CPP_FOOTSOLDIER_HPP


#include "Soldier.hpp"

class FootSoldier: public Soldier {
public:
    explicit FootSoldier(int i) : Soldier(i,100,10,0,"FootSoldier"){};
    FootSoldier(int p,int hp,int dpa,int hpa,string t):Soldier(p,hp,dpa,hpa,t){};
    void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location) override;
    void heal() override;
};


#endif //EX3CPP_FOOTSOLDIER_HPP
