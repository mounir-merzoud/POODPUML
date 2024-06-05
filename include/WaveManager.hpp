#ifndef WaveManager_HPP
#define WaveManager_HPP
#include <vector>
#include "GameObjectFactory.hpp"
#include "GameData.hpp"


class WaveManager {
    public:
        static void HandleSpawn(float currentTime, std::vector<std::shared_ptr<Monster>>& monsters, int waveNumber, int& killCount, float deltaTime);
};

#endif