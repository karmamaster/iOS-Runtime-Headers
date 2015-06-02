/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    struct RefPtr<IPC::Connection> { 
        struct Connection {} *m_ptr; 
    } _connection;
    unsigned long long _customProtocolID;
    struct CustomProtocolManagerProxy { int (**x1)(); struct ChildProcessProxy {} *x2; struct WebContext {} *x3; struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; } *_customProtocolManagerProxy;
    unsigned int _storagePolicy;
    NSURLConnection *_urlConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithCustomProtocolManagerProxy:(struct CustomProtocolManagerProxy { int (**x1)(); struct ChildProcessProxy {} *x2; struct WebContext {} *x3; struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; }*)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3 connection:(struct Connection { struct atomic<int> { int x_1_1_1; } x1; struct Client {} *x2; bool x3; struct atomic<unsigned long long> { unsigned long long x_4_1_1; } x4; bool x5; bool x6; int (*x7)(); bool x8; struct RefPtr<WorkQueue> { struct WorkQueue {} *x_9_1_1; } x9; struct RunLoop {} *x10; struct HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > > { struct HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> > { struct KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_11_1_1; } x11; unsigned int x12; unsigned int x13; unsigned int x14; bool x15; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_16_1_1; } x16; struct Deque<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0> { unsigned int x_17_1_1; unsigned int x_17_1_2; struct VectorBuffer<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0> { struct unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_17_1_3; } x17; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_18_1_1; } x18; struct Deque<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0> { unsigned int x_19_1_1; unsigned int x_19_1_2; struct VectorBuffer<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0> { struct unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_19_1_3; } x19; struct condition_variable { struct _opaque_pthread_cond_t { long x_1_2_1; BOOL x_1_2_2[24]; } x_20_1_1; } x20; struct mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_21_1_1; } x21; struct WaitForMessageState {} *x22; struct RefPtr<IPC::Connection::SyncMessageState> { struct SyncMessageState {} *x_23_1_1; } x23; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_24_1_1; } x24; bool x25; struct Vector<IPC::Connection::PendingSyncReply, 0, WTF::CrashOnOverflow> { struct PendingSyncReply {} *x_26_1_1; unsigned int x_26_1_2; unsigned int x_26_1_3; } x26; struct HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_27_1_1; } x27; unsigned int x28; id x29; id x30; /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*x31; void*x32; unsigned char x33; void*x34; void*x35; const void*x36; inout unsigned short x37; bycopy unsigned int x38/* : ? */; void*x39; void*x40; BOOL x41; void*x42; void*x43; bycopy unsigned short x44; void*x45; void*x46; void*x47; BOOL x48; void*x49; out unsigned int x50/* : ? */; void*x51; void*x52; BOOL x53; void*x54; void*x55; void*x56; char *x57; void*x58; void*x59; id x60; }*)arg4;

@end
