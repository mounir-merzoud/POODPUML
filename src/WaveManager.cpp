#include "WaveManager.hpp"
#include <random>

WaveManager::WaveManager(float currentTime, std::vector<std::shared_ptr<Monster>>& monsters, int& waveNumber, int& killCount)
    : currentTime(currentTime), monsters(monsters), waveNumber(waveNumber), killCount(killCount), spawnTimer(0.0f), timeRemaining(0.0f)
{

}

void WaveManager::HandleSpawn(float deltatime) {
    float baseSpawnRate = 2.0f;
    float spawnRateIncrease = 0.1f;
    float spawnRate = baseSpawnRate / (1 + spawnRateIncrease * (this->waveNumber - 1));
    int maxEnnemies = waveNumber * 10;

    spawnTimer += deltatime;

    timeRemaining -= deltatime;

    if (timeRemaining <= 0.0f && this->monsters.size() < maxEnnemies && killCount < maxEnnemies && spawnTimer > spawnRate) {
        this->SpawnMonster();
        spawnTimer = 0.0f;
    }

    if (killCount >= maxEnnemies) {
        this->waveNumber++;
        killCount = 0;
        timeRemaining = 10.0f; // Add a 10-second delay between waves
    }
}

void WaveManager::SpawnMonster() {
    int randomNumber = rand() % 100;
    if (randomNumber < 50 + this->waveNumber * 5) {
        this->monsters.push_back(GameObjectFactory::createScorpion(150,5,scorpionAnimation));
    } else {
        this->monsters.push_back(GameObjectFactory::createFirebug(150,5,firebugAnimation));
    }
}