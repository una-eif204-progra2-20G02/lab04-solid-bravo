//
// Created by Victor on 20/8/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAME_H
#define LAB04_SOLID_STREAMINGGAME_H
#include "Game.h"

class StreamingGame: public Game {
private:

public:
    StreamingGame();

    StreamingGame(const std::string &name, double price, double tax);

    virtual ~StreamingGame();


    std::string toString() override;

};


#endif //LAB04_SOLID_STREAMINGGAME_H
