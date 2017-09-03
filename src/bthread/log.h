// bthread - A M:N threading library to make applications more concurrent.
// Copyright (c) 2014 baidu-rpc authors.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Author: Ge,Jun (gejun@baidu.com)
// Date: Mon Sep 15 10:51:15 CST 2014

#ifndef BAIDU_BTHREAD_LOG_H
#define BAIDU_BTHREAD_LOG_H

#ifdef BAIDU_INTERNAL
#include "bthread/comlog_initializer.h"
#endif

#define BT_VLOG VLOG(100)

#endif // BAIDU_BTHREAD_LOG_H
