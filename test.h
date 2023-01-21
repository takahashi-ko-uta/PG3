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
    //�R�s�[�R���X�g���N�^�𖳌��ɂ���
    SceneChange(const SceneChange& obj) = delete;
    //������Z�q�𖳌�������
    SceneChange& operator=(const SceneChange& obj) = delete;

    void PrintScene();

    void ChangeScene(int sceneNo);

    
};
