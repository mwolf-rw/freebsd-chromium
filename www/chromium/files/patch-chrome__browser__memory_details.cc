--- chrome/browser/memory_details.cc.orig	2014-10-10 08:54:10 UTC
+++ chrome/browser/memory_details.cc
@@ -33,7 +33,7 @@
 #include "content/public/common/content_constants.h"
 #include "ui/base/l10n/l10n_util.h"
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include "content/public/browser/zygote_host_linux.h"
 #endif
 
@@ -365,7 +365,7 @@
       }
     }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
     if (content::ZygoteHost::GetInstance()->IsZygotePid(process.pid)) {
       process.process_type = content::PROCESS_TYPE_ZYGOTE;
     }
