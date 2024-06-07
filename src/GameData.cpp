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

    std::vector<AnimationData> animationsScorpion = {
        { "walkDown", { {9, 193, 45, 58}, {72, 193, 45, 58}, {136, 193, 45, 58}, {200, 193, 45, 58},
        {264, 193, 45, 58}, {329, 193, 45, 58}, {393, 193, 45, 58}, {457, 193, 45, 58}}},
        { "walkUp", { {9, 260, 45, 58}, {72, 260, 45, 58}, {136, 260, 45, 58}, {200, 260, 45, 58},
        {264, 260, 45, 58}, {329, 260, 45, 58}, {393, 260, 45, 58}, {457, 260, 45, 58}}},
        { "walkLeft", { {6, 333, 53, 48}, {70, 333, 53, 48}, {134, 333, 53, 48}, {198, 333, 53, 48},
        {262, 333, 53, 48}, {326, 333, 53, 48}, {390, 333, 53, 48}, {454, 333, 53, 48}}},
        { "walkRight", { {6, 333, 53, 48}, {70, 333, 53, 48}, {134, 333, 53, 48}, {198, 333, 53, 48},
        {262, 333, 53, 48}, {326, 333, 53, 48}, {390, 333, 53, 48}, {454, 333, 53, 48}}},
        { "die", { {9, 386, 46, 57}, {73, 386, 46, 57}, {137, 386, 46, 57}, {201, 386, 46, 57}, {265, 386, 46, 57},
        {329, 386, 46, 57}, {393, 386, 46, 57}, {457, 386, 46, 57} } }
    };
    
    std::vector<AnimationData> animationsTower01 = {
        { "level01", { {0, 29, 64, 97} } },
        { "level02", { {64, 21, 64, 106} } },
        { "level03", { {128, 12, 64, 115} } }
    };

    std::vector<AnimationData> animationsWeapon01Level01 = {
        { "idle", { {30, 25, 37, 45} } },
        { "shoot", { {30, 25, 37, 45}, {123, 3, 41, 67}, {219, 36, 41, 34}, {315, 36, 41, 34}, {411, 36, 41, 34}, {509, 36, 37, 34} } }
    };

    std::vector<AnimationData> animationsWeapon01Level02 = {
        { "idle", { { 25, 25, 44, 44} } },
        { "shoot", { { 25, 25, 44, 44}, { 117, 2, 51, 67}, {213, 37, 52, 32}, {309, 37, 52, 32}, {405, 37, 52, 32}, {503, 37, 48, 32} } }
    };

    std::vector<AnimationData> animationsWeapon01Level03 = {
        { "idle", { { 22, 25, 51, 44} } },
        { "shoot", { { 22, 25, 51, 44}, { 112, 1, 63, 68}, { 208, 36, 63, 33}, { 304, 36, 63, 33}, { 400, 36, 63, 33}, { 502, 36, 51, 33} } }
    };

    std::vector<AnimationData> animationsArrowLevel01 = {
        { "idle", { {0, 0, 7, 40}, {9, 0, 5, 40}, {17, 0, 5, 40} } }
    };

    std::vector<AnimationData> animationsArrowLevel02 = {
        { "idle", { {0, 0, 13, 40}, {16, 0, 13, 40}, {31, 0, 12, 40} } }
    };

    std::vector<AnimationData> animationsArrowLevel03 = {
        { "idle", { {0, 0, 21, 40}, {23, 0, 19, 40}, {45, 0, 19, 40} } }
    };

    Animation firebugAnimation(animationsFirebug, "walkDown", "assets/sprites/Monsters/firebug.png");
    Animation scorpionAnimation(animationsScorpion, "walkDown", "assets/sprites/Monsters/scorpion.png");

    Animation tower01Animation(animationsTower01, "level01", "assets/sprites/Towers/Tower01.png");
    Animation weapon01Level01Animation(animationsWeapon01Level01, "idle", "assets/sprites/Weapons/Tower01-Level01-Weapon.png");
    Animation weapon01Level02Animation(animationsWeapon01Level02, "idle", "assets/sprites/Weapons/Tower 01 - Level 02 - Weapon.png");
    Animation weapon01Level03Animation(animationsWeapon01Level03, "idle", "assets/sprites/Weapons/Tower 01 - Level 03 - Weapon.png");

    Animation arrowLevel01Animation(animationsArrowLevel01, "idle", "assets/sprites/Projectiles/Tower 01 - Level 01 - Projectile.png");
    Animation arrowLevel02Animation(animationsArrowLevel02, "idle", "assets/sprites/Projectiles/Tower 01 - Level 02 - Projectile.png");
    Animation arrowLevel03Animation(animationsArrowLevel03, "idle", "assets/sprites/Projectiles/Tower 01 - Level 03 - Projectile.png");

    std::vector<std::shared_ptr<Monster>> monsters;
    std::vector<std::shared_ptr<Projectile>> projectiles;
    std::vector<std::shared_ptr<Tower>> towers;

    std::shared_ptr<Projectile> arrowLevel01 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel01Animation);
    std::shared_ptr<Projectile> arrowLevel02 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel02Animation);
    std::shared_ptr<Projectile> arrowLevel03 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel03Animation);

    std::shared_ptr<Weapon> weaponLevel01 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel01, weapon01Level01Animation);
    std::shared_ptr<Weapon> weaponLevel02 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel02, weapon01Level02Animation);
    std::shared_ptr<Weapon> weaponLevel03 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel03, weapon01Level03Animation);

    std::shared_ptr<Tower> tower = GameObjectFactory::createTower("Tower01", 200, 400, 64, 127, weaponLevel01, 100, tower01Animation);
    //std::shared_ptr<Tower> tower02 = GameObjectFactory::createTower("Tower02", 300, 400, 64, 127, weaponLevel02, 100, tower01Animation);
    //std::shared_ptr<Tower> tower03 = GameObjectFactory::createTower("Tower03", 400, 400, 64, 127, weaponLevel03, 100, tower01Animation);

    int killCount = 0;