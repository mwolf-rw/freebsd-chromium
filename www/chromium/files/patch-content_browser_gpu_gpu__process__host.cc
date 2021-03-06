--- content/browser/gpu/gpu_process_host.cc.orig	2020-09-08 19:14:05 UTC
+++ content/browser/gpu/gpu_process_host.cc
@@ -220,7 +220,7 @@ static const char* const kSwitchNames[] = {
     service_manager::switches::kGpuSandboxFailuresFatal,
     service_manager::switches::kDisableGpuSandbox,
     service_manager::switches::kNoSandbox,
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
     switches::kDisableDevShmUsage,
 #endif
 #if defined(OS_WIN)
@@ -1117,7 +1117,7 @@ bool GpuProcessHost::LaunchGpuProcess() {
   std::unique_ptr<base::CommandLine> cmd_line =
       std::make_unique<base::CommandLine>(base::CommandLine::NO_PROGRAM);
 #else
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   int child_flags = gpu_launcher.empty() ? ChildProcessHost::CHILD_ALLOW_SELF
                                          : ChildProcessHost::CHILD_NORMAL;
 #elif defined(OS_MACOSX)
