#ifndef GameManager_hpp
#define GameManager_hpp
#include "GameData.hpp"

class GameManager {
    public:
        GameManager(std::string& state);
        void update(float deltaTime, std::vector<std::shared_ptr<Monster>>& monsters, std::vector<std::shared_ptr<Projectile>>& projectiles,
        std::vector<std::shared_ptr<Tower>>& towers, int& killCount, int& money, float& currentTime);
        void handleMovement(float deltatime, std::shared_ptr<Monster>& monster);
        void checkLose(std::vector<std::shared_ptr<Monster>>& monsters, int& lives);

    private:
        std::string& state;
};

#endif