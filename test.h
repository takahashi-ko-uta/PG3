#pragma once
#include <stdio.h>



class SceneChange
{
private:
    static const char SCENE_NAME[4][10];

    int scene = 0;

    SceneChange() = default;

    ~SceneChange() = default;
public:
    static SceneChange* GetInstance();
    //コピーコンストラクタを無効にする
    SceneChange(const SceneChange& obj) = delete;
    //代入演算子を無効化する
    SceneChange& operator=(const SceneChange& obj) = delete;

    void PrintScene();

    void ChangeScene(int sceneNo);

    
};
