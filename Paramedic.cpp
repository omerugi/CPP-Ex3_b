//
// Created by omerugi on 26/05/2020.
//

#include "Paramedic.hpp"



void Paramedic::heal() {
    this->health_points=100;
}

void Paramedic::attack(std::vector<std::vector<Soldier *>> &board, std::pair<int, int> location) {

    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(location.first+i>0&&location.first+i<board.size()&&location.second+j>0&&location.second+j<board[0].size()&&board[location.first+i][location.second+j]!= nullptr&&board[location.first+i][location.second+j]->player==this->player){
                board[location.first+i][location.second+j]->heal();
            }
        }
    }
}

