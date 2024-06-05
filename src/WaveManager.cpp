#include "WaveManager.hpp"

void WaveManager::HandleSpawn(float currentTime, std::vector<std::shared_ptr<Monster>>& monsters, int waveNumber, int& killCount, float deltaTime) {
    float baseSpawnRate = 2.0f;
    float spawnRateIncrease = 0.1f;
    float spawnRate = baseSpawnRate / (1 + spawnRateIncrease * (waveNumber - 1));
    int maxEnnemies = waveNumber * 10;
    static float spawnTimer = 0.0f;

    spawnTimer += deltaTime;
    std::cout << "Spawn Rate: " << spawnRate << std::endl;

    if (monsters.size() < maxEnnemies && killCount < maxEnnemies && spawnTimer > spawnRate) {
        monsters.push_back(GameObjectFactory::createMonster("Firebug", 50, 50, 65, 54, 100, 100.0f, firebugAnimation));
        spawnTimer = 0.0f;
    }
}