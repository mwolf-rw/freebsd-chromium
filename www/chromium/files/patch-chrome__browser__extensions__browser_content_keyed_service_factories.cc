--- chrome/browser/extensions/browser_context_keyed_service_factories.cc.orig.port	Sat Apr 16 12:36:19 2016
+++ chrome/browser/extensions/browser_context_keyed_service_factories.cc	Sat Apr 16 12:36:29 2016
@@ -64,7 +64,7 @@
 #include "chrome/browser/chromeos/extensions/media_player_api.h"
 #include "chrome/browser/extensions/api/input_ime/input_ime_api.h"
 #include "chrome/browser/extensions/api/log_private/log_private_api.h"
-#elif defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
 #include "chrome/browser/extensions/api/input_ime/input_ime_api.h"
 #endif
 
@@ -105,7 +105,7 @@ void EnsureBrowserContextKeyedServiceFactoriesBuilt() 
 #if defined(OS_CHROMEOS)
   extensions::InputImeAPI::GetFactoryInstance();
   extensions::InputMethodAPI::GetFactoryInstance();
-#elif defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   extensions::InputImeAPI::GetFactoryInstance();
 #endif
   extensions::LanguageSettingsPrivateDelegateFactory::GetInstance();
