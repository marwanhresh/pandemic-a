#ifndef OPERATIONSEXPERT_HPP
#define OPERATIONSEXPERT_HPP

#include "Player.hpp"
#include "Board.hpp"

namespace pandemic {
    class OperationsExpert : public Player {
    public:
        OperationsExpert(Board &board, City city) ;
        Player& build() override;

    };
}


#endif //UNTITLED5_OPERATIONSEXPERT_HPP
