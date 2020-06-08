//
// Created by omerugi on 26/05/2020.
//

#ifndef EX3CPP_PARAMEDIC_HPP
#define EX3CPP_PARAMEDIC_HPP


#include "Soldier.hpp"

class Paramedic:public Soldier {
public:
    explicit Paramedic(int p):Soldier(p,100,0,1,"Paramedic"){};
    Paramedic(int p,int hp,int dpa,int hpa,string t):Soldier(p,hp,dpa,hpa,t){};
    void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location) override;
    void heal() override;
};


#endif //EX3CPP_PARAMEDIC_HPP
