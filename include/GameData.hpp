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
#include "GameObjectFactory.hpp"

    extern std::vector<AnimationData> animationsFirebug;

    extern std::vector<AnimationData> animationsScorpion;
    
    extern std::vector<AnimationData> animationsTower01;

    extern std::vector<AnimationData> animationsWeapon01Level01;
    extern std::vector<AnimationData> animationsWeapon01Level02;
    extern std::vector<AnimationData> animationsWeapon01Level03;

    extern std::vector<AnimationData> animationsArrowLevel01;
    extern std::vector<AnimationData> animationsArrowLevel02;
    extern std::vector<AnimationData> animationsArrowLevel03;

    extern std::vector<AnimationData> animationsTower02;

    extern std::vector<AnimationData> animationsWeapon02Level01;
    extern std::vector<AnimationData> animationsWeapon02Level02;
    extern std::vector<AnimationData> animationsWeapon02Level03;

    extern std::vector<AnimationData> animationsthunderLevel01;
    extern std::vector<AnimationData> animationsthunderLevel02;
    extern std::vector<AnimationData> animationsthunderLevel03;

    extern Animation firebugAnimation;
    extern Animation scorpionAnimation;

    extern Animation tower01Animation;
    extern Animation weapon01Level01Animation;
    extern Animation weapon01Level02Animation;
    extern Animation weapon01Level03Animation;

    extern Animation arrowLevel01Animation;
    extern Animation arrowLevel02Animation;
    extern Animation arrowLevel03Animation;

    extern Animation tower02Animation;
    extern Animation weapon02Level01Animation;
    extern Animation weapon02Level02Animation;
    extern Animation weapon02Level03Animation;

    extern Animation thunderLevel01Animation;
    extern Animation thunderLevel02Animation;
    extern Animation thunderLevel03Animation;
    
    extern std::vector<std::shared_ptr<Monster>> monsters;
    extern std::vector<std::shared_ptr<Projectile>> projectiles;
    extern std::vector<std::shared_ptr<Tower>> towers;

    extern std::shared_ptr<Projectile> arrowLevel01;
    extern std::shared_ptr<Projectile> arrowLevel02;
    extern std::shared_ptr<Projectile> arrowLevel03;

    extern std::shared_ptr<Weapon> weapon01Level01;
    extern std::shared_ptr<Weapon> weapon01Level02;
    extern std::shared_ptr<Weapon> weapon01Level03;

    extern std::shared_ptr<Projectile> thunderLevel01;
    extern std::shared_ptr<Projectile> thunderLevel02;
    extern std::shared_ptr<Projectile> thunderLevel03;

    extern std::shared_ptr<Weapon> weapon02Level01;
    extern std::shared_ptr<Weapon> weapon02Level02;
    extern std::shared_ptr<Weapon> weapon02Level03;

    extern std::shared_ptr<Tower> tower;
    extern std::shared_ptr<Tower> tower02;

    extern int killCount;
    extern int waveNumber;
    extern float currentTime;
    extern int money;
    extern int lives;
    extern std::string state;

#endif