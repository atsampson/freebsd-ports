--- chrome/browser/ui/views/tabs/tab_drag_controller.cc.orig	2015-01-26 10:43:43 UTC
+++ chrome/browser/ui/views/tabs/tab_drag_controller.cc
@@ -266,7 +266,7 @@
   //     synchronous on desktop Linux, so use that.
   // - Ash
   //     Releasing capture on Ash cancels gestures so avoid it.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   can_release_capture_ = false;
 #else
   can_release_capture_ =
@@ -621,7 +621,7 @@
     // that to effect the position of any windows.
     SetWindowPositionManaged(browser_widget->GetNativeWindow(), false);
 
-#if !defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if (!defined(OS_LINUX) && !defined(OS_BSD)) || defined(OS_CHROMEOS)
     // EndMoveLoop is going to snap the window back to its original location.
     // Hide it so users don't see this. Hiding a window in Linux aura causes
     // it to lose capture so skip it.
@@ -1791,7 +1791,7 @@
     if (dragged_window)
       exclude.insert(dragged_window);
   }
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // Exclude windows which are pending deletion via Browser::TabStripEmpty().
   // These windows can be returned in the Linux Aura port because the browser
   // window which was used for dragging is not hidden once all of its tabs are
