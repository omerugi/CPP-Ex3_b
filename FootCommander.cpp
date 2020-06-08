//
// Created by omerugi on 24/05/2020.
//

#include "FootCommander.hpp"
#include <string>
#include <math.h>


void FootCommander::attack(std::vector<std::vector<Soldier *>> &board, std::pair<int, int> location) {
    Soldier sol(0, 0, 0, 0, "nothing");
    Soldier *s=&sol;
    int x = 0;
    int y = 0;
    double d=787878978978979;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            double newd=sqrt(pow(location.first-i,2)+pow(location.second-j,2));
            if ( board[i][j]!= nullptr && board[i][j]->player != this->player && newd < d) {
                s = board[i][j];
                x = i;
                y = j;
                d=newd;
            }

        }
    }
    string type=(*s).type;
    if ((*s).type.compare("nothing") != 0) {
        (*s).health_points -= 20;
        int hp=(*s).health_points;
        if ((*s).health_points <= 0) {
            board[x][y] = nullptr;
        }
    }

    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){

            if(board[i][j]!= nullptr&&(board[i][j]->type).compare("FootSoldier")==0&&board[i][j]->player==this->player){
                board[i][j]->attack(board,location);
            }

        }
    }

}

void FootCommander::heal() {
    this->health_points=150;
}
