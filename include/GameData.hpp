#ifndef GameData_hpp
#define GameData_hpp
#include <vector>
#include <string>
#include "Animation.hpp"
#include "Monster.hpp"
#include "Projectile.hpp"
#include "Tower.hpp"
#include "Weapon.hpp"
#include <memory>

    extern std::vector<AnimationData> animationsFirebug;
    
    extern std::vector<AnimationData> animationsTower01;

    extern std::vector<AnimationData> animationsWeapon01;

    extern std::vector<AnimationData> animationsArrow;

    extern Animation firebugAnimation;
    extern Animation firebugDeathAnimation;

    extern Animation tower01Animation;
    extern Animation weapon01Animation;
    extern Animation arrowAnimation;

    extern std::vector<std::shared_ptr<Monster>> monsters;
    extern std::vector<std::shared_ptr<Projectile>> projectiles;
    extern std::vector<std::shared_ptr<Tower>> towers;

    extern int killCount;

#endif