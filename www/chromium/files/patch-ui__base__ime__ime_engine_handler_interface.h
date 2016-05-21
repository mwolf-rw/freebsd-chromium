--- ui/base/ime/ime_engine_handler_interface.h.orig	Sat Apr 16 12:34:20 2016
+++ ui/base/ime/ime_engine_handler_interface.h	Sat Apr 16 12:34:25 2016
@@ -138,7 +138,7 @@
   // Hides the input view window (from API call).
   virtual void HideInputView() = 0;
 
-#elif defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
 
   // Get the id of the IME extension.
   virtual std::string GetExtensionId() const = 0;
