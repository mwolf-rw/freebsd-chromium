--- third_party/leveldatabase/env_chromium.cc.orig	2020-11-13 06:37:03 UTC
+++ third_party/leveldatabase/env_chromium.cc
@@ -39,7 +39,11 @@
 #include "third_party/leveldatabase/leveldb_chrome.h"
 #include "third_party/leveldatabase/leveldb_features.h"
 #include "third_party/leveldatabase/src/include/leveldb/options.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 
 using base::FilePath;
 using base::trace_event::MemoryAllocatorDump;
