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

    extern std::vector<AnimationData> animationsScorpion;
    
    extern std::vector<AnimationData> animationsTower01;

    extern std::vector<AnimationData> animationsWeapon01Level01;
    extern std::vector<AnimationData> animationsWeapon01Level02;
    extern std::vector<AnimationData> animationsWeapon01Level03;

    extern std::vector<AnimationData> animationsArrowLevel01;
    extern std::vector<AnimationData> animationsArrowLevel02;
    extern std::vector<AnimationData> animationsArrowLevel03;

    extern Animation firebugAnimation;
    extern Animation scorpionAnimation;

    extern Animation tower01Animation;
    extern Animation weapon01Level01Animation;
    extern Animation weapon01Level02Animation;
    extern Animation weapon01Level03Animation;

    extern Animation arrowLevel01Animation;
    extern Animation arrowLevel02Animation;
    extern Animation arrowLevel03Animation;

    extern std::vector<std::shared_ptr<Monster>> monsters;
    extern std::vector<std::shared_ptr<Projectile>> projectiles;
    extern std::vector<std::shared_ptr<Tower>> towers;

    extern int killCount;

#endif