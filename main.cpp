#include "test.h"

int main()
{
    SceneChange* sceneManager = SceneChange::GetInstance();
    while (true)
    {
        sceneManager->PrintScene();

    input:
        int putNum = 0;

        printf("0~3�������Ă�������\n");

        scanf_s("%d", &putNum);

        switch (putNum)
        {
        case 0:    case 1:    case 2:    case 3://0�`3�̂����ꂩ�̃{�^���������Ƃ�
            sceneManager->ChangeScene(putNum);
            break;
        }
    }
}







