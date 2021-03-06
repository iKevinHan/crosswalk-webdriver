// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef XWALK_TEST_XWALKDRIVER_XWALK_DEBUGGER_TRACKER_H_
#define XWALK_TEST_XWALKDRIVER_XWALK_DEBUGGER_TRACKER_H_

#include <string>

#include "base/basictypes.h"
#include "base/compiler_specific.h"
#include "xwalk/test/xwalkdriver/xwalk/devtools_event_listener.h"

namespace base {
class DictionaryValue;
}

class DevToolsClient;
class Status;

// Tracks the debugger state of the page.
class DebuggerTracker : public DevToolsEventListener {
 public:
  explicit DebuggerTracker(DevToolsClient* client);
  virtual ~DebuggerTracker();

  // Overridden from DevToolsEventListener:
  virtual Status OnEvent(DevToolsClient* client,
                         const std::string& method,
                         const base::DictionaryValue& params) OVERRIDE;

 private:
  DISALLOW_COPY_AND_ASSIGN(DebuggerTracker);
};

#endif  // XWALK_TEST_XWALKDRIVER_XWALK_DEBUGGER_TRACKER_H_
