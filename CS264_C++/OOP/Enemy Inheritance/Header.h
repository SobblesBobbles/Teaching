//
//  Header.h
//  FML
//
//  Created by Stephen O Brien on 19/11/2017.
//  Copyright © 2017 Stephen O Brien. All rights reserved.
//

#ifndef Header_h
#define Header_h

class Enemy {
protected:
    int attackPower;
    bool goblin_bo;
    
  
    
    
public:
    Enemy();
 void declaration();
 void  attack();
void attributes(bool);
bool getGoblin();
   
  
    
};

class Monster : public Enemy {
    public :
    
    Monster();
    
    
   
    void  attack();
    
    
};

class Zombie :public Enemy  {
public:
    Zombie();
    void attack();
};



#endif /* Header_h */
