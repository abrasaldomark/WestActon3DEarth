/*
 *  ScreenObject.cpp
 *  WhirlyGlobeLib
 *
 *  Created by jmnavarro
 *  Copyright 2011-2016 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import "ScreenObject.h"

using namespace Eigen;

namespace WhirlyKit
{

SimplePoly::SimplePoly() :
    texID(EmptyIdentity),
    color(255,255,255,255)
{
}

SimplePoly::~SimplePoly()
{

}

StringWrapper::StringWrapper() :
    mat(Matrix3d::Identity()),
    size(0.0,0.0)
{
}
    
StringWrapper::~StringWrapper()
{
}

ScreenObject::ScreenObject()
{
}

ScreenObject::~ScreenObject()
{
}

}
