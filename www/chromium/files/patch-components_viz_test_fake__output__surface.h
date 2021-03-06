--- components/viz/test/fake_output_surface.h.orig	2020-09-08 19:14:05 UTC
+++ components/viz/test/fake_output_surface.h
@@ -82,7 +82,7 @@ class FakeOutputSurface : public OutputSurface {
       UpdateVSyncParametersCallback callback) override;
   void SetDisplayTransformHint(gfx::OverlayTransform transform) override;
   gfx::OverlayTransform GetDisplayTransform() override;
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   void SetNeedsSwapSizeNotifications(
       bool needs_swap_size_notifications) override;
 #endif
