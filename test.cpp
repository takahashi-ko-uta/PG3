#include "test.h"
#include <stdio.h>

void SceneChange::PrintScene() {
    printf("sceneNo:%d\nsceneName:%s\n\n", scene, SCENE_NAME[scene]);
}

void SceneChange::ChangeScene(int sceneNo) {
    scene = sceneNo;
}

SceneChange* SceneChange::GetInstance()
{
    static SceneChange sceneManager;

    return &sceneManager;
}

const char SceneChange::SCENE_NAME[4][10] =
{
    "Title",
    "NewGame",
    "GamePlay",
    "GameClear",
};