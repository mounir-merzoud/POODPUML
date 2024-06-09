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

    std::vector<AnimationData> animationsTower02 = {
        { "level01", { {0, 81, 64, 110} } },
        { "level02", { {64, 72, 64, 119} } },
        { "level03", { {128, 63, 64, 128} } }
    };

    std::vector<AnimationData> animationsWeapon02Level01 = {
        { "idle", { {10, 10, 27, 27}, {58, 10, 27, 27}, {108, 10, 27, 27}, {154, 10, 27, 27}, {202, 10, 27, 27}, {252, 10, 27, 27}, {298, 10, 27, 27},
        {346, 10, 27, 27}, {394, 10, 27, 27}, {442, 10, 27, 27} } },
        { "shoot", { {10, 58, 27, 27}, {57, 57, 29, 27}, {104, 56, 31, 27}, {151, 56, 33, 27}, {199, 56, 33, 27}, {247, 56, 33, 27}, {295, 56, 33, 27},
        {343, 56, 33, 27}, {391, 56, 33, 27}, {439, 56, 33, 27}, {487, 56, 33, 27}, {535, 56, 33, 27}, {583, 56, 33, 27}, {632, 56, 31, 27}, {681, 56, 29, 27} } }
    };

    std::vector<AnimationData> animationsWeapon02Level02 = {
        { "idle", { {18, 9, 27, 45}, {82, 9, 27, 45}, {146, 9, 27, 45}, {210, 9, 27, 45}, {274, 9, 27, 45}, {338, 9, 27, 45}, {402, 9, 27, 45},
        {466, 9, 27, 45}, {530, 9, 27, 45}, {594, 9, 27, 45} } },
        { "shoot", { {18, 72, 27, 45}, {82, 72, 27, 45}, {146, 72, 27, 45}, {209, 72, 29, 45}, {272, 72, 31, 45}, {335, 72, 33, 45}, {399, 72, 33, 45},
        {463, 72, 33, 45}, {527, 72, 33, 45}, {591, 72, 33, 45}, {655, 72, 33, 45}, {719, 72, 33, 45}, {783, 72, 33, 45}, {847, 72, 33, 45}, 
        {912, 72, 31, 45}, {977, 72, 29, 45}, {1042, 72, 27, 45} } }
    };

    std::vector<AnimationData> animationsWeapon02Level03 = {
        { "idle", { {18, 2, 27, 60}, {82, 2, 27, 60}, {146, 2, 27, 60}, {210, 2, 27, 60}, {274, 2, 27, 60}, {338, 2, 27, 60}, {402, 2, 27, 60},
        {466, 2, 27, 60}, {530, 2, 27, 60}, {594, 2, 27, 60}, {658, 2, 27, 60}, {722, 2, 27, 60}, {786, 2, 27, 60}, {850, 2, 27, 60},
        {914, 2, 27, 60}, {978, 2, 27, 60}, {1042, 2, 27, 60}, {1106, 2, 27, 60}, {1170, 2, 27, 60}, {1234, 2, 27, 60} } },
        { "shoot", { {18, 66, 27, 60}, {82, 66, 27, 60}, {146, 66, 27, 60}, {210, 66, 27, 60}, {268, 66, 39, 60}, {330, 66, 43, 60}, {392, 66, 47, 60}, 
        {456, 66, 47, 60}, {520, 66, 47, 60}, {584, 66, 47, 60}, {648, 66, 47, 60}, {712, 66, 47, 60}, {776, 66, 47, 60}, {840, 66, 47, 60}, {904, 66, 47, 60},
        {968, 66, 47, 60}, {1032, 66, 47, 60}, {1096, 66, 47, 60}, {1160, 66, 47, 60} } }
    };

    std::vector<AnimationData> animationsthunderLevel01 = {
        { "idle", { {8, 6, 18, 18}, {38, 6, 18, 18}, {70, 6, 18, 18}, {104, 6, 18, 18}, {132, 6, 18, 18} } }
    };

    std::vector<AnimationData> animationsthunderLevel02 = {
        { "idle", { {8, 6, 18, 18}, {38, 6, 18, 18}, {70, 6, 18, 18}, {104, 6, 18, 18}, {132, 6, 18, 18} } }
    };

    std::vector<AnimationData> animationsthunderLevel03 = {
        { "idle", { {8, 6, 18, 18}, {38, 6, 18, 18}, {70, 6, 18, 18}, {104, 6, 18, 18}, {132, 6, 18, 18} } }
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

    Animation tower02Animation(animationsTower02, "level01", "assets/sprites/Towers/Tower02.png");
    Animation weapon02Level01Animation(animationsWeapon02Level01, "idle", "assets/sprites/Weapons/Tower 02 - Level 01 - Weapon.png");
    Animation weapon02Level02Animation(animationsWeapon02Level02, "idle", "assets/sprites/Weapons/Tower 02 - Level 02 - Weapon.png");
    Animation weapon02Level03Animation(animationsWeapon02Level03, "idle", "assets/sprites/Weapons/Tower 02 - Level 03 - Weapon.png");

    Animation thunderLevel01Animation(animationsthunderLevel01, "idle", "assets/sprites/Projectiles/Tower 02 - Level 01 - Projectile.png");
    Animation thunderLevel02Animation(animationsthunderLevel02, "idle", "assets/sprites/Projectiles/Tower 02 - Level 02 - Projectile.png");
    Animation thunderLevel03Animation(animationsthunderLevel03, "idle", "assets/sprites/Projectiles/Tower 02 - Level 03 - Projectile.png");

    std::vector<std::shared_ptr<Monster>> monsters;
    std::vector<std::shared_ptr<Projectile>> projectiles;
    std::vector<std::shared_ptr<Tower>> towers;

    std::shared_ptr<Projectile> arrowLevel01 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel01Animation);
    std::shared_ptr<Projectile> arrowLevel02 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel02Animation);
    std::shared_ptr<Projectile> arrowLevel03 = GameObjectFactory::createProjectile(100, 100, 10, 10, 50, 1000.0f, 45, arrowLevel03Animation);

    std::shared_ptr<Weapon> weapon01Level01 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel01, weapon01Level01Animation);
    std::shared_ptr<Weapon> weapon01Level02 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel02, weapon01Level02Animation);
    std::shared_ptr<Weapon> weapon01Level03 = GameObjectFactory::createWeapon("Crossbow", 100, 100, 35, 45, 750.0f, 1.0f, arrowLevel03, weapon01Level03Animation);

    std::shared_ptr<Projectile> thunderLevel01 = GameObjectFactory::createProjectile(100, 100, 10, 10, 100, 500.0f, 45, thunderLevel01Animation);
    std::shared_ptr<Projectile> thunderLevel02 = GameObjectFactory::createProjectile(100, 100, 10, 10, 100, 500.0f, 45, thunderLevel02Animation);
    std::shared_ptr<Projectile> thunderLevel03 = GameObjectFactory::createProjectile(100, 100, 10, 10, 100, 500.0f, 45, thunderLevel03Animation);

    std::shared_ptr<Weapon> weapon02Level01 = GameObjectFactory::createWeapon("Crystal", 100, 100, 35, 45, 1000.0f, 3.0f, thunderLevel01, weapon02Level01Animation);
    std::shared_ptr<Weapon> weapon02Level02 = GameObjectFactory::createWeapon("Crystal", 100, 100, 35, 45, 1000.0f, 3.0f, thunderLevel02, weapon02Level02Animation);
    std::shared_ptr<Weapon> weapon02Level03 = GameObjectFactory::createWeapon("Crystal", 100, 100, 35, 45, 1000.0f, 3.0f, thunderLevel03, weapon02Level03Animation);

    std::shared_ptr<Tower> tower = GameObjectFactory::createTower("Tower01", 200, 400, 64, 127, weapon01Level01, 100, tower01Animation);
    std::shared_ptr<Tower> tower02 = GameObjectFactory::createTower("Tower02", 200, 800, 64, 127, weapon02Level01, 100, tower02Animation);
    //std::shared_ptr<Tower> tower03 = GameObjectFactory::createTower("Tower03", 400, 400, 64, 127, weaponLevel03, 100, tower01Animation);

    int killCount = 0;