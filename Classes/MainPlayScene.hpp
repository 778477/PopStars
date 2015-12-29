//
//  MainPlayScene.hpp
//  PopStars
//
//  Created by 郭妙友 on 15/12/29.
//
//

#ifndef MainPlayScene_hpp
#define MainPlayScene_hpp

#include "cocos2d.h"

class MainPlayScene : public cocos2d::LayerColor
{
public:
    static cocos2d::Scene* createScene();
    
    bool init();
};

#endif /* MainPlayScene_hpp */
