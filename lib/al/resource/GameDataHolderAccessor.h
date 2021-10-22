#pragma once

namespace al {
    class IUseSceneObjHolder;
    class SceneObjHolder;
    class ISceneObj;
}

class GameDataHolderAccessor {
public:
    GameDataHolderAccessor(const al::IUseSceneObjHolder*);
    GameDataHolderAccessor(const al::SceneObjHolder*);

private:
    al::ISceneObj* mSceneObj;
};