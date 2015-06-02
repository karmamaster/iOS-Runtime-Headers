/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityTextMarker : NSObject {
    struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject *, WTF::KeyValuePair<WebCore::RenderObject *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::RenderObject *, unsigned int> >, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::RenderObject *> > { struct KeyValuePair<WebCore::RenderObject *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget *, WTF::KeyValuePair<WebCore::Widget *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Widget *, unsigned int> >, WTF::PtrHash<WebCore::Widget *>, WTF::HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Widget *> > { struct KeyValuePair<WebCore::Widget *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Node *, WTF::KeyValuePair<WebCore::Node *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Node *, unsigned int> >, WTF::PtrHash<WebCore::Node *>, WTF::HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Node *> > { struct KeyValuePair<WebCore::Node *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<WebCore::Node *, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct HashTable<WebCore::Node *, WebCore::Node *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct unique_ptr<WebCore::AXComputedObjectAttributeCache, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct __compressed_pair<WebCore::AXComputedObjectAttributeCache *, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct AXComputedObjectAttributeCache {} *x_1_2_1; } x_7_1_1; } x7; struct HashSet<unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct Timer<WebCore::AXObjectCache> { int (**x_9_1_1)(); double x_9_1_2; double x_9_1_3; double x_9_1_4; int x_9_1_5; unsigned int x_9_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_9_1_7; struct function<void ()>={type=[12C] {} x_9_1_8; struct __base<void ()> {} *x_9_1_9; } x9; } *_cache;
    struct TextMarkerData { 
        unsigned int axID; 
        struct Node {} *node; 
        int offset; 
        int affinity; 
    } _textMarkerData;
}

+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject *, WTF::KeyValuePair<WebCore::RenderObject *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::RenderObject *, unsigned int> >, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::RenderObject *> > { struct KeyValuePair<WebCore::RenderObject *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget *, WTF::KeyValuePair<WebCore::Widget *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Widget *, unsigned int> >, WTF::PtrHash<WebCore::Widget *>, WTF::HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Widget *> > { struct KeyValuePair<WebCore::Widget *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Node *, WTF::KeyValuePair<WebCore::Node *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Node *, unsigned int> >, WTF::PtrHash<WebCore::Node *>, WTF::HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Node *> > { struct KeyValuePair<WebCore::Node *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<WebCore::Node *, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct HashTable<WebCore::Node *, WebCore::Node *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct unique_ptr<WebCore::AXComputedObjectAttributeCache, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct __compressed_pair<WebCore::AXComputedObjectAttributeCache *, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct AXComputedObjectAttributeCache {} *x_1_2_1; } x_7_1_1; } x7; struct HashSet<unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct Timer<WebCore::AXObjectCache> { int (**x_9_1_1)(); double x_9_1_2; double x_9_1_3; double x_9_1_4; int x_9_1_5; unsigned int x_9_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_9_1_7; struct function<void ()>={type=[12C] {} x_9_1_8; struct __base<void ()> {} *x_9_1_9; } x9; }*)arg2;

- (id).cxx_construct;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject *, WTF::KeyValuePair<WebCore::RenderObject *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::RenderObject *, unsigned int> >, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::RenderObject *> > { struct KeyValuePair<WebCore::RenderObject *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget *, WTF::KeyValuePair<WebCore::Widget *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Widget *, unsigned int> >, WTF::PtrHash<WebCore::Widget *>, WTF::HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Widget *> > { struct KeyValuePair<WebCore::Widget *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Node *, WTF::KeyValuePair<WebCore::Node *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Node *, unsigned int> >, WTF::PtrHash<WebCore::Node *>, WTF::HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Node *> > { struct KeyValuePair<WebCore::Node *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<WebCore::Node *, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct HashTable<WebCore::Node *, WebCore::Node *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct unique_ptr<WebCore::AXComputedObjectAttributeCache, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct __compressed_pair<WebCore::AXComputedObjectAttributeCache *, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct AXComputedObjectAttributeCache {} *x_1_2_1; } x_7_1_1; } x7; struct HashSet<unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct Timer<WebCore::AXObjectCache> { int (**x_9_1_1)(); double x_9_1_2; double x_9_1_3; double x_9_1_4; int x_9_1_5; unsigned int x_9_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_9_1_7; struct function<void ()>={type=[12C] {} x_9_1_8; struct __base<void ()> {} *x_9_1_9; } x9; }*)arg2;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned int x1; struct Node {} *x2; int x3; int x4; }*)arg1 cache:(struct AXObjectCache { struct Document {} *x1; struct HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::AccessibilityObject> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::RefPtr<WebCore::AccessibilityObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::RenderObject *, WTF::KeyValuePair<WebCore::RenderObject *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::RenderObject *, unsigned int> >, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashMap<WebCore::RenderObject *, unsigned int, WTF::PtrHash<WebCore::RenderObject *>, WTF::HashTraits<WebCore::RenderObject *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::RenderObject *> > { struct KeyValuePair<WebCore::RenderObject *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Widget *, WTF::KeyValuePair<WebCore::Widget *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Widget *, unsigned int> >, WTF::PtrHash<WebCore::Widget *>, WTF::HashMap<WebCore::Widget *, unsigned int, WTF::PtrHash<WebCore::Widget *>, WTF::HashTraits<WebCore::Widget *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Widget *> > { struct KeyValuePair<WebCore::Widget *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> > { struct HashTable<WebCore::Node *, WTF::KeyValuePair<WebCore::Node *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Node *, unsigned int> >, WTF::PtrHash<WebCore::Node *>, WTF::HashMap<WebCore::Node *, unsigned int, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Node *> > { struct KeyValuePair<WebCore::Node *, unsigned int> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; struct HashSet<WebCore::Node *, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct HashTable<WebCore::Node *, WebCore::Node *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Node *>, WTF::HashTraits<WebCore::Node *>, WTF::HashTraits<WebCore::Node *> > { struct Node {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct unique_ptr<WebCore::AXComputedObjectAttributeCache, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct __compressed_pair<WebCore::AXComputedObjectAttributeCache *, std::__1::default_delete<WebCore::AXComputedObjectAttributeCache> > { struct AXComputedObjectAttributeCache {} *x_1_2_1; } x_7_1_1; } x7; struct HashSet<unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct Timer<WebCore::AXObjectCache> { int (**x_9_1_1)(); double x_9_1_2; double x_9_1_3; double x_9_1_4; int x_9_1_5; unsigned int x_9_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_9_1_7; struct function<void ()>={type=[12C] {} x_9_1_8; struct __base<void ()> {} *x_9_1_9; } x9; }*)arg2;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })visiblePosition;

@end
