--- chrome/browser/about_flags.cc.orig	Thu Apr 14 08:35:25 2016
+++ chrome/browser/about_flags.cc	Thu Apr 14 08:35:48 2016
@@ -673,7 +673,7 @@
      kOsLinux | kOsCrOS | kOsWin | kOsAndroid,
      ENABLE_DISABLE_VALUE_TYPE(switches::kEnableSmoothScrolling,
                                switches::kDisableSmoothScrolling)},
-#if defined(USE_AURA) || defined(OS_LINUX)
+#if defined(USE_AURA) || defined(OS_LINUX) || defined(OS_BSD)
     {"overlay-scrollbars", IDS_FLAGS_OVERLAY_SCROLLBARS_NAME,
      IDS_FLAGS_OVERLAY_SCROLLBARS_DESCRIPTION,
      // Uses the system preference on Mac (a different implementation).
@@ -1729,7 +1729,7 @@
      IDS_FLAGS_ENABLE_MATERIAL_DESIGN_EXTENSIONS_DESCRIPTION, kOsDesktop,
      SINGLE_VALUE_TYPE(switches::kEnableMaterialDesignExtensions)},
 #endif
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
     {"enable-input-ime-api", IDS_FLAGS_ENABLE_INPUT_IME_API_NAME,
      IDS_FLAGS_ENABLE_INPUT_IME_API_DESCRIPTION, kOsWin | kOsLinux,
      ENABLE_DISABLE_VALUE_TYPE(switches::kEnableInputImeAPI,
