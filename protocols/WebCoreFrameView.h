/* Generated by RuntimeBrowser.
 */

@protocol WebCoreFrameView

@required

- (struct Frame { int (**x1)(); unsigned int x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; struct FrameLoader { struct Frame {} *x_8_1_1; struct FrameLoaderClient {} *x_8_1_2; struct unique_ptr<WebCore::PolicyChecker, std::__1::default_delete<WebCore::PolicyChecker> > { struct __compressed_pair<WebCore::PolicyChecker *, std::__1::default_delete<WebCore::PolicyChecker> > { struct PolicyChecker {} *x_1_3_1; } x_3_2_1; } x_8_1_3; struct unique_ptr<WebCore::HistoryController, std::__1::default_delete<WebCore::HistoryController> > { struct __compressed_pair<WebCore::HistoryController *, std::__1::default_delete<WebCore::HistoryController> > { struct HistoryController {} *x_1_3_1; } x_4_2_1; } x_8_1_4; struct ResourceLoadNotifier { struct Frame {} *x_5_2_1; } x_8_1_5; struct unique_ptr<WebCore::SubframeLoader, std::__1::default_delete<WebCore::SubframeLoader> > { struct __compressed_pair<WebCore::SubframeLoader *, std::__1::default_delete<WebCore::SubframeLoader> > { struct SubframeLoader {} *x_1_3_1; } x_6_2_1; } x_8_1_6; struct FrameLoaderStateMachine { int x_7_2_1; } x_8_1_7; struct unique_ptr<WebCore::IconController, std::__1::default_delete<WebCore::IconController> > { struct __compressed_pair<WebCore::IconController *, std::__1::default_delete<WebCore::IconController> > { struct IconController {} *x_1_3_1; } x_8_2_1; } x_8_1_8; struct MixedContentChecker { struct Frame {} *x_9_2_1; } x_8_1_9; struct unique_ptr<WebCore::FrameLoader::FrameProgressTracker, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> > { struct __compressed_pair<WebCore::FrameLoader::FrameProgressTracker *, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> > { struct FrameProgressTracker {} *x_1_3_1; } x_10_2_1; } x_8_1_10; int x_8_1_11; int x_8_1_12; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_13_2_1; } x_8_1_13; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_14_2_1; } x_8_1_14; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_15_2_1; } x_8_1_15; bool x_8_1_16; bool x_8_1_17; bool x_8_1_18; bool x_8_1_19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_20_2_1; } x_8_1_20; bool x_8_1_21; bool x_8_1_22; bool x_8_1_23; int x_8_1_24; bool x_8_1_25; struct RefPtr<WebCore::SerializedScriptValue> { struct SerializedScriptValue {} *x_26_2_1; } x_8_1_26; bool x_8_1_27; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_28_2_1; unsigned int x_28_2_2 : 1; unsigned int x_28_2_3 : 1; int x_28_2_4; int x_28_2_5; int x_28_2_6; int x_28_2_7; int x_28_2_8; int x_28_2_9; int x_28_2_10; int x_28_2_11; int x_28_2_12; int x_28_2_13; } x_8_1_28; struct Timer<WebCore::FrameLoader> { int (**x_29_2_1)(); double x_29_2_2; double x_29_2_3; double x_29_2_4; int x_29_2_5; unsigned int x_29_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_29_2_7; struct function<void ()>={type=[12C] {} x_29_2_8; struct __base<void ()> {} *x_29_2_9; } x_8_1_29; } x8; bool x9; bool x10; struct Frame {} *x11; struct HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct Frame {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_12_1_1; } x12; bool x13; bool x14; bool x15; bool x16; int x17; struct RefPtr<WebCore::FrameNetworkingContext> { struct FrameNetworkingContext {} *x_18_1_1; } x18; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_19_1_1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; int x_19_1_4; int x_19_1_5; int x_19_1_6; int x_19_1_7; int x_19_1_8; int x_19_1_9; int x_19_1_10; int x_19_1_11; int x_19_1_12; int x_19_1_13; } x19; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_20_1_1; } x20; struct unique_ptr<WebCore::PageActivityAssertionToken, std::__1::default_delete<WebCore::PageActivityAssertionToken> > { struct __compressed_pair<WebCore::PageActivityAssertionToken *, std::__1::default_delete<WebCore::PageActivityAssertionToken> > { struct PageActivityAssertionToken {} *x_1_2_1; } x_21_1_1; } x21; }*)_web_frame:(void *)arg1; // needs 1 arg types, found 24: /* Warning: Unrecognized filer type: '}' using 'void*' */ void*, struct HTMLFrameOwnerElement {}*, struct RefPtr<WebCore::FrameView> { struct FrameView {} *x1; }, struct RefPtr<WebCore::Document> { struct Document {} *x1; }, struct unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> > { struct __compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> > { struct ScriptController {} *x_1_1_1; } x1; }, struct unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> > { struct __compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> > { struct Editor {} *x_1_1_1; } x1; }, struct unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> > { struct __compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> > { struct FrameSelection {} *x_1_1_1; } x1; }, struct unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> > { struct __compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> > { struct EventHandler {} *x_1_1_1; } x1; }, struct unique_ptr<WebCore::AnimationController, std::__1::default_delete<WebCore::AnimationController> > { struct __compressed_pair<WebCore::AnimationController *, std::__1::default_delete<WebCore::AnimationController> > { struct AnimationController {} *x_1_1_1; } x1; }, struct Timer<WebCore::Frame> { int (**x1)(); double x2; double x3; double x4; int x5; unsigned int x6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x7; struct function<void ()>={type=[12C] {} x8; struct __base<void ()> {} *x9; }, void*, float, struct IntPoint { int x1; int x2; }, struct ViewportArguments { int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; bool x13; }, bool, int, struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_2_1_1; int x_2_1_2; unsigned int x_2_1_3 : 3; unsigned int x_2_1_4 : 1; } x2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; int x_3_1_2; unsigned int x_3_1_3 : 3; unsigned int x_3_1_4 : 1; } x3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; int x_4_1_2; unsigned int x_4_1_3 : 3; unsigned int x_4_1_4 : 1; } x4; int x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; }, struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_2_1_1; int x_2_1_2; unsigned int x_2_1_3 : 3; unsigned int x_2_1_4 : 1; } x2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; int x_3_1_2; unsigned int x_3_1_3 : 3; unsigned int x_3_1_4 : 1; } x3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; int x_4_1_2; unsigned int x_4_1_3 : 3; unsigned int x_4_1_4 : 1; } x4; int x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; }, float, float, int, void*, id, SEL

@end
