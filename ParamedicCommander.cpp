//
// Created by omerugi on 26/05/2020.
//

#include "ParamedicCommander.hpp"

void ParamedicCommander::heal() {
    this->health_points=200;
}

void ParamedicCommander::attack(std::vector<std::vector<Soldier *>> &board, std::pair<int, int> location) {
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(location.first>0&&location.first<board.size()&&location.second>0&&location.second<board[0].size()&&board[location.first+i][location.second+j]->player==this->player){
                board[location.first+i][location.second+j]->heal();
            }
        }
    }

    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]!= nullptr&&board[i][j]->type.compare("Paramedic")==0&&board[i][j]->player==this->player){
                board[i][j]->attack(board,location);
            }

        }
    }
}
