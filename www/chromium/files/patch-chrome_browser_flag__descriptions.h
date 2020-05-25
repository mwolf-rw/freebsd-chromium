--- chrome/browser/flag_descriptions.h.orig	2020-05-13 18:40:22 UTC
+++ chrome/browser/flag_descriptions.h
@@ -18,9 +18,9 @@
 #include "ppapi/buildflags/buildflags.h"
 #include "printing/buildflags/buildflags.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "base/allocator/buildflags.h"
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
 // This file declares strings used in chrome://flags. These messages are not
 // translated, because instead of end-users they target Chromium developers and
@@ -2167,14 +2167,14 @@ extern const char kZeroStateFilesDescription[];
 
 #endif  // #if defined(OS_CHROMEOS)
 
-#if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
 
 #if BUILDFLAG(USE_TCMALLOC)
 extern const char kDynamicTcmallocName[];
 extern const char kDynamicTcmallocDescription[];
 #endif  // BUILDFLAG(USE_TCMALLOC)
 
-#endif  // #if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#endif  // #if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
 
 // All views-based platforms --------------------------------------------------
 
@@ -2193,12 +2193,12 @@ extern const char kReopenTabInProductHelpDescription[]
 
 // Random platform combinations -----------------------------------------------
 
-#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 extern const char kWebGL2ComputeContextName[];
 extern const char kWebGL2ComputeContextDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 #if BUILDFLAG(ENABLE_CLICK_TO_CALL)
 
@@ -2207,7 +2207,7 @@ extern const char kClickToCallUIDescription[];
 
 #endif  // BUILDFLAG(ENABLE_CLICK_TO_CALL)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
 
 extern const char kRemoteCopyReceiverName[];
@@ -2219,15 +2219,15 @@ extern const char kRemoteCopyImageNotificationDescript
 extern const char kRemoteCopyProgressNotificationName[];
 extern const char kRemoteCopyProgressNotificationDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) ||
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
         // defined(OS_CHROMEOS)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 
 extern const char kDirectManipulationStylusName[];
 extern const char kDirectManipulationStylusDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
 
