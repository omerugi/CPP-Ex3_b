//
// Created by omerugi on 26/05/2020.
//

#include "SniperCommander.hpp"

void SniperCommander::attack(std::vector<std::vector<Soldier *>> &board, std::pair<int, int> location) {
    Soldier sol(0, 0, 0, 0, "nothing");
    Soldier *s=&sol;
    int x = 0;
    int y = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if ( board[i][j]!= nullptr && board[i][j]->player != this->player && board[i][j]->health_points > (*s).health_points) {
                s = board[i][j];
                x = i;
                y = j;
            }

        }
    }
    string type=(*s).type;
    if ((*s).type.compare("nothing") != 0) {
        (*s).health_points -= 100;
        int hp=(*s).health_points;
        if ((*s).health_points <= 0) {
            board[x][y] = nullptr;
        }
    }

    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]!= nullptr&&board[i][j]->type.compare("Sniper")==0&&board[i][j]->player==this->player){
                board[i][j]->attack(board,location);
            }

        }
    }
}

void SniperCommander::heal() {
    this->health_points=120;
}
