//
// Created by omerugi on 26/05/2020.
//

#ifndef EX3CPP_SNIPERCOMMANDER_HPP
#define EX3CPP_SNIPERCOMMANDER_HPP

#include "Sniper.hpp"

class SniperCommander: public Sniper {
public:
    explicit SniperCommander(int p):Sniper(p,120,100,0,"SniperCommander"){};
    void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location) override;
    void heal() override;

};


#endif //EX3CPP_SNIPERCOMMANDER_HPP
