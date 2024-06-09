#include "GameManager.hpp"

GameManager::GameManager(std::string state)
{
    this->state = state;
}

void GameManager::update(float deltaTime, std::vector<std::shared_ptr<Monster>>& monsters,
std::vector<std::shared_ptr<Projectile>>& projectiles, std::vector<std::shared_ptr<Tower>>& towers, int& killCount, int& money, float& currentTime)
{
    if (state == "game")
    {
    for (auto it = monsters.begin(); it != monsters.end();) {
        auto& monster = *it;

        if (monster->isDead && monster->animation.animationName != "die") {
            monster->animation.setAnimation("die", true);
            monster->animation.setFrameTime(0.1f);
        }

        monster->update(deltaTime);

        if (monster->isDead && monster->animation.isFinished()) {
            it = monsters.erase(it);
            killCount++;
            money += 10;
        } else {
            ++it;
        }

        if (!monster->isDead) {
            std::cout << "monster position : " << monster->positionX << " / " << monster->positionY << std::endl;
            handleMovement(deltaTime, monster);
        }
    }

        for (auto& tower : towers) {
            tower->update(deltaTime);           
            
            auto projectile = tower->shoot(monsters, currentTime);

        if (projectile != nullptr) {
            projectiles.push_back(projectile);
        }

        for (auto& projectile : projectiles) {
            projectile->update(deltaTime);
        }
        }
    }
}

void GameManager::handleMovement(float deltatime, std::shared_ptr<Monster>& monster)
{
    if (monster->positionX > 700 && monster->positionX < 750 && monster->positionY < 1600 && monster->positionY > 1150) {
        std::cout << "move up" << std::endl;
        monster->moveUp(deltatime);
    }
    else if ((monster->positionX < 1000 && monster->positionY > 300 && monster->positionY < 400) || (monster->positionX < 710 && monster->positionY < 1350 && monster->positionY > 1300) || (monster->positionX > 700 && monster->positionX < 1600 && monster->positionY < 1200 && monster->positionY > 1100) || (monster->positionX > 1600 && monster->positionY > 1350)) {
        std::cout << "move right" << std::endl;
        monster->moveRight(deltatime);
    }
    else if (monster->positionX < 1050 && monster->positionX >200 && monster->positionY > 800 && monster->positionY < 1000){
        std::cout << "move left" << std::endl;
        monster->moveLeft(deltatime);
    }
    else if ((monster->positionX < 200) || (monster->positionX > 1000 && monster->positionY > 300 && monster->positionY < 1000) || (monster->positionX > 1600)){
        std::cout << "move down" << std::endl;
        monster->moveDown(deltatime);
    }
}