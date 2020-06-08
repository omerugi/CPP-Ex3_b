//
// Created by omerugi on 24/05/2020.
//

#ifndef EX3CPP_FOOTCOMMANDER_HPP
#define EX3CPP_FOOTCOMMANDER_HPP


#include "FootSoldier.hpp"

class FootCommander: public FootSoldier {

public:
    explicit FootCommander(int i):FootSoldier(i,150,20,0,"FootCommander"){};
    void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location) override;
    void heal() override;
};


#endif //EX3CPP_FOOTCOMMANDER_HPP
