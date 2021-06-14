--- third_party/blink/renderer/platform/graphics/video_frame_submitter.cc.orig	2021-05-12 22:06:01 UTC
+++ third_party/blink/renderer/platform/graphics/video_frame_submitter.cc
@@ -201,7 +201,7 @@ void VideoFrameSubmitter::OnBeginFrame(
     if (viz::FrameTokenGT(pair.key, *next_frame_token_))
       continue;
     auto& feedback = pair.value.presentation_feedback;
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
     // TODO: On Linux failure flag is unreliable, and perfectly rendered frames
     // are reported as failures all the time.
     bool presentation_failure = false;
