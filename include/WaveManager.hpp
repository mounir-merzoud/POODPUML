#ifndef WaveManager_HPP
#define WaveManager_HPP
#include <vector>
#include "GameObjectFactory.hpp"
#include "GameData.hpp"


class WaveManager {
    public:
        WaveManager(float currentTime, std::vector<std::shared_ptr<Monster>>& monsters, int waveNumber, int& killCount);
        void HandleSpawn(float deltaTime);
        void SpawnMonster();

    private:
        float currentTime;
        std::vector<std::shared_ptr<Monster>>& monsters;
        int waveNumber;
        int& killCount;
        float spawnTimer;
        bool waveActive;
        float timeRemaining;
};

#endif