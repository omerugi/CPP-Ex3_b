//
// Created by omerugi on 24/05/2020.
//

#ifndef EX3CPP_SOLDIER_HPP
#define EX3CPP_SOLDIER_HPP
#include <vector>
#include <string>

using namespace std;

class Soldier {
public:
    int health_points;
    int damage_per_activity;
    int health_per_activity;
    int player;
    string type;
    int x;
    int y;
    explicit Soldier(int p,int hp,int dpa,int hpa,string t):player(p),health_points(hp),damage_per_activity(dpa),health_per_activity(hpa),type(t){};
    virtual void attack(std::vector<std::vector<Soldier*>>&board, std::pair<int,int>location){};
    virtual void heal(){};
};


#endif //EX3CPP_SOLDIER_HPP
