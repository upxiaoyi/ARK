/*
* This source file is part of ArkGameFrame
* For the latest info, see https://github.com/ArkGame
*
* Copyright (c) 2013-2018 ArkGame authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#pragma once

#include "SDK/Interface/AFIKernelModule.h"
#include "SDK/Interface/AFILogModule.h"
#include "SDK/Interface/AFIPluginManager.h"
#include "SDK/Proto/ARKDataDefine.hpp"
#include "SDK/Interface/AFIElementModule.h"
#include "Server/Interface/AFIGameLogicModule.h"
#include "Server/Interface/AFILevelModule.h"
#include "Server/Interface/AFIPropertyConfigModule.h"

class AFCLevelModule : public AFILevelModule
{
public:
    explicit AFCLevelModule(AFIPluginManager* p)
    {
        pPluginManager = p;
    }
    virtual ~AFCLevelModule() = default;

    virtual bool Init();
    virtual bool Shut();
    virtual bool Update();
    virtual bool PostInit();

    virtual int AddExp(const AFGUID& self, const int nExp);

private:
    AFIPropertyConfigModule* m_pPropertyConfigModule;
    AFIKernelModule* m_pKernelModule;
    AFILogModule* m_pLogModule;
    AFIElementModule* m_pElementModule;
};