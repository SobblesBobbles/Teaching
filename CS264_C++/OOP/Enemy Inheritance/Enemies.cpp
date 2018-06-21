//
//  Enemies.cpp
//  FML
//
//  Created by Stephen O Brien on 19/11/2017.
//  Copyright © 2017 Stephen O Brien. All rights reserved.
//

#include "Enemies.hpp"
#include "Header.h"
#include <iostream>
#include <cstring>

using namespace std;

Enemy ::Enemy(){
    attackPower = 0;
    
}
void Enemy :: declaration()
{
    cout<<"You thought you could get away didnt you? Hahahahah"<<endl;
}

void Enemy::attributes(bool a) {
   
    goblin_bo = a;
    
}
bool Enemy::getGoblin(){
    if (goblin_bo)
    {
        cout<<"Yes i am a goblin"<<endl;}
    return goblin_bo;
}

    
    
    
void Enemy::attack(){
     cout<<"Watch out! There's an enemy"<<endl;
    }


Monster :: Monster(){
    attackPower = 100;
}

void Monster :: attack(){
    cout<<"Im a monster and I'm going to destroy you!"<<endl;
}

Zombie::Zombie(){
    attackPower = 10;
    
}

void Zombie::attack(){
    cout<<"brains.brains.brains."<<endl;
}


