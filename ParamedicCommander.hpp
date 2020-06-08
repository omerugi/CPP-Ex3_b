//
// Created by omerugi on 26/05/2020.
//

#ifndef EX3CPP_PARAMEDICCOMMANDER_HPP
#define EX3CPP_PARAMEDICCOMMANDER_HPP

#include "Paramedic.hpp"

class ParamedicCommander:public Paramedic {
public:
    explicit ParamedicCommander(int p):Paramedic(p,200,0,1,"ParamedicCommander"){};
    void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location) override;
    void heal() override;
};


#endif //EX3CPP_PARAMEDICCOMMANDER_HPP
