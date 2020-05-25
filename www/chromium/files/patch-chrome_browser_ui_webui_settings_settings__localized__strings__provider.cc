--- chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc.orig	2020-05-13 18:40:25 UTC
+++ chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc
@@ -285,7 +285,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
     {"minimumFont", IDS_SETTINGS_MINIMUM_FONT_SIZE_LABEL},
     {"tiny", IDS_SETTINGS_TINY_FONT_SIZE},
     {"huge", IDS_SETTINGS_HUGE_FONT_SIZE},
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
     {"systemTheme", IDS_SETTINGS_SYSTEM_THEME},
     {"useSystemTheme", IDS_SETTINGS_USE_SYSTEM_THEME},
     {"classicTheme", IDS_SETTINGS_CLASSIC_THEME},
