//
// Created by omerugi on 24/05/2020.
//

#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
#include "Board.hpp"

using namespace WarGame;

Soldier *&Board::operator[](std::pair<int, int> location) {
    return board[location.first][location.second];
}

Soldier *Board::operator[](std::pair<int, int> location) const {
    return board[location.first][location.second];
}

void Board::move(uint player_number, std::pair<int, int> source, Board::MoveDIR direction) {
    if(board[source.first][source.second]==nullptr){
        throw runtime_error("no one there");
    }
    if(board[source.first][source.second]->player!=player_number){
        throw runtime_error("no your soldier");
    }
    if (direction == Board::MoveDIR::Up) {
        if(source.first==board.size()-1){
            throw runtime_error("out of lenght");
        }
        if(board[source.first+1][source.second]!= nullptr){
            throw runtime_error("someone there");
        }
        Soldier *s=board[source.first][source.second];
        board[source.first][source.second]=nullptr;
        board[source.first+1][source.second]=s;
        s->attack(this->board,source);
    }
    if (direction == Board::MoveDIR::Down) {
        if(source.first==0){
            throw runtime_error("out of lenght");
        }
        if(board[source.first-1][source.second]!= nullptr){
            throw runtime_error("someone there");
        }
        Soldier *s=board[source.first][source.second];
        board[source.first][source.second]=nullptr;
        board[source.first-1][source.second]=s;
        s->attack(this->board,source);

    }
    if (direction == Board::MoveDIR::Right) {
        if(source.first==board[0].size()-1){
            throw runtime_error("out of lenght");
        }
        if(board[source.first][source.second+1]!= nullptr){
            throw runtime_error("someone there");
        }
        Soldier *s=board[source.first][source.second];
        board[source.first][source.second]=nullptr;
        board[source.first][source.second+1]=s;
        s->attack(this->board,source);

    }
    if (direction == Board::MoveDIR::Left) {
        if(source.first==0){
            throw runtime_error("out of lenght");
        }
        if(board[source.first][source.second-1]!= nullptr){
            throw runtime_error("someone there");
        }
        Soldier *s=board[source.first][source.second];
        board[source.first][source.second]=nullptr;
        board[source.first][source.second-1]=s;
        s->attack(this->board,source);

    }


}

bool Board::has_soldiers(uint player_number) const {

    for (const auto &i : board) {
        for (auto j : i) {
            if (j != nullptr && j->player == player_number)
                return true;
        }
    }
    return false;
}
