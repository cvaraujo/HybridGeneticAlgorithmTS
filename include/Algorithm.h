//
// Created by carlos on 26/04/18.
//

#ifndef PUREGENETICALGORITHM_ALGORITHM_H
#define PUREGENETICALGORITHM_ALGORITHM_H

#include "Includes.h"
#include "Population.h"


class Algorithm {
    static constexpr double uniformRate = 0.6;
    static constexpr double mutationRate = 0.1;
    static const int tournamentSize = 2;

    static Individual *defaultCrossover(Individual *individual1, Individual *individual2);

    static void defaultMutation(Individual *individual);

    static void constrainedMutation(Individual *individual);

    static Individual *tournament(Population *population);

public:
    static void defaultEvolvePopulation(Population *population, int newInd);

    static void constrainedEvolvePopulation(Population *population, int newInd);

    static void hybridEvolvePopulation(Population *population, int newInd);

};


#endif //PUREGENETICALGORITHM_ALGORITHM_H
