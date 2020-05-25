--- net/url_request/url_fetcher.h.orig	2020-05-13 18:40:33 UTC
+++ net/url_request/url_fetcher.h
@@ -114,7 +114,7 @@ class NET_EXPORT URLFetcher {
   // The unannotated Create() methods are not available on desktop Linux +
   // Windows. They are available on other platforms, since we only audit network
   // annotations on Linux & Windows.
-#if (!defined(OS_WIN) && !defined(OS_LINUX)) || defined(OS_CHROMEOS)
+#if (!defined(OS_WIN) && !defined(OS_LINUX) && !defined(OS_BSD)) || defined(OS_CHROMEOS)
   // |url| is the URL to send the request to. It must be valid.
   // |request_type| is the type of request to make.
   // |d| the object that will receive the callback on fetch completion.
