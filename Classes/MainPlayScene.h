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
    
    void menuStartCallback(cocos2d::Ref* sender);
    void menuAboutCallback(cocos2d::Ref* sender);
};

#endif /* MainPlayScene_hpp */
