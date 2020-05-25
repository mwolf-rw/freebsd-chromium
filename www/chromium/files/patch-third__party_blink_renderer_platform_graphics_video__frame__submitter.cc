--- third_party/blink/renderer/platform/graphics/video_frame_submitter.cc.orig	2020-05-15 15:25:13 UTC
+++ third_party/blink/renderer/platform/graphics/video_frame_submitter.cc
@@ -187,7 +187,7 @@ void VideoFrameSubmitter::OnBeginFrame(
     if (viz::FrameTokenGT(pair.key, *next_frame_token_))
       continue;
 
-#ifdef OS_LINUX
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO: On Linux failure flag is unreliable, and perfectly rendered frames
     // are reported as failures all the time.
     bool presentation_failure = false;
