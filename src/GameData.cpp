#include "GameData.hpp"

// Define animations using structs
    std::vector<AnimationData> animationsFirebug = {
        { "walkDown", { {31, 196, 65, 54}, {162, 196, 65, 54}, {287, 196, 65, 54}, {418, 196, 65, 54},
        {543, 196, 65, 54}, {674, 196, 65, 54}, {799, 196, 65, 54}, {930, 196, 65, 54} } },
        { "walkUp", { {30, 259, 65, 54}, {162, 259, 65, 54}, {287, 259, 65, 54}, {418, 259, 65, 54},
        {543, 259, 65, 54}, {674, 259, 65, 54}, {799, 259, 65, 54}, {930, 259, 65, 54} } },
        { "walkRight", { {30, 335, 65, 34}, {162, 335, 65, 34}, {287, 335, 65, 34}, {418, 335, 65, 34},
        {543, 335, 65, 34}, {674, 335, 65, 34}, {799, 335, 65, 34}, {930, 335, 65, 34} } },
        { "walkLeft", { {30, 335, 65, 34}, {162, 335, 65, 34}, {287, 335, 65, 34}, {418, 335, 65, 34},
        {543, 335, 65, 34}, {674, 335, 65, 34}, {799, 335, 65, 34}, {930, 335, 65, 34} } },
        { "die", { {31, 388, 65, 54}, {159, 388, 65, 54}, {287, 388, 65, 54}, {418, 388, 65, 54},
        {543, 388, 65, 54}, {674, 388, 65, 54}, {799, 388, 65, 54}, {930, 388, 65, 54} } }
        };
    
    std::vector<AnimationData> animationsTower01 = {
        { "idle", { {0, 29, 64, 97} } }
    };

    std::vector<AnimationData> animationsWeapon01 = {
        { "idle", { {30, 25, 37, 45} } },
        { "shoot", { {30, 25, 37, 45}, {123, 3, 41, 67}, {219, 36, 41, 34}, {315, 36, 41, 34}, {411, 36, 41, 34}, {509, 36, 37, 34} } }
    };

    std::vector<AnimationData> animationsArrow = {
        { "idle", { {0, 0, 7, 40} } }
    };

    Animation firebugAnimation(animationsFirebug, "walkDown", "assets/sprites/Monsters/firebug.png");
    Animation firebugDeathAnimation(animationsFirebug, "die", "assets/sprites/Monsters/firebug.png");

    Animation tower01Animation(animationsTower01, "idle", "assets/sprites/Towers/Tower01.png");
    Animation weapon01Animation(animationsWeapon01, "idle", "assets/sprites/Weapons/Tower01-Level01-Weapon.png");
    Animation arrowAnimation(animationsArrow, "idle", "assets/sprites/Projectiles/Tower 01 - Level 01 - Projectile.png");

    std::vector<std::shared_ptr<Monster>> monsters;
    std::vector<std::shared_ptr<Projectile>> projectiles;
    std::vector<std::shared_ptr<Tower>> towers;

    int killCount = 0;