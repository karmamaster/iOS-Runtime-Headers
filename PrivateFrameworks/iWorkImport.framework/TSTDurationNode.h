/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTDurationNode : TSTExpressionNode {
    BOOL mBlank;
    struct TSTDurationWrapper { 
        double timeInterval; 
        struct { 
            unsigned int mUseAutomaticUnits : 1; 
            int mDurationUnitSmallest; 
            int mDurationUnitLargest; 
            int mDurationStyle; 
        } durationFormat; 
    } mValue;
}

@property (getter=isBlank, nonatomic) BOOL blank;
@property (nonatomic) struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; } value;

- (id).cxx_construct;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; oneway void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; bool x29; bool x30; void*x31; const out void*x32; out long doublex33; int x34; double x35; void*x36; void*x37; int x38; long x39; void*x40; out unsigned char x41; const void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; short x48; short x49; BOOL x50; out double x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; oneway void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; unsigned short x102; void*x103; short x104; void*x105; void*x106; void*x107; void*x108; unsigned long x109; int x110; unsigned int x111/* : ? */; const void*x112; const void*x113; void*x114; void*x115; const int x116; void x117; void*x118; void*x119; void*x120; void*x121; const void*x122; void*x123; void*x124; void*x125; out const void*x126; short x127; void*x128; unsigned char x129; out void*x130; void*x131; void*x132; short x133; short x134; void*x135; unsigned int x136; void*x137; float x138; const void*x139; void*x140; void*x141; void*x142; out const void*x143; void*x144; unsigned char x145; out void*x146; void*x147; void*x148; short x149; short x150; void*x151; unsigned int x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; oneway void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; unsigned char x169; void*x170; bool x171; void*x172; void*x173; void*x174; void*x175; long doublex176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; int x201; void*x202; void*x203; void*x204; int x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; oneway void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; unsigned char x231; void*x232; bool x233; void*x234; void*x235; void*x236; void*x237; long doublex238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; oneway void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; unsigned short x262; void*x263; short x264; void*x265; void*x266; void*x267; void*x268; unsigned long x269; int x270; unsigned int x271/* : ? */; const void*x272; const void*x273; void*x274; void*x275; const int x276; void x277; void*x278; void*x279; void*x280; void*x281; const void*x282; void*x283; void*x284; void*x285; out const void*x286; short x287; void*x288; bycopy float x289; float x290; int x291; BOOL x292; void*x293; unsigned int x294; void*x295; void*x296; out const void*x297; void*x298; float x299; const void*x300; void*x301; void*x302; void*x303; out const void*x304; void*x305; bycopy float x306; float x307; int x308; BOOL x309; void*x310; unsigned int x311; void*x312; void*x313; out const void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; oneway void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; oneway void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; oneway void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; unsigned int x532; unsigned short x533; void*x534; out const void*x535; unsigned int x536/* : ? */; out void*x537; const double x538; void*x539; out void*x540; out void x541; void*x542; const unsigned short x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; oneway void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; unsigned int x572; unsigned short x573; void*x574; out const void*x575; unsigned int x576/* : ? */; out void*x577; const double x578; void*x579; out void*x580; out void x581; void*x582; const unsigned short x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; oneway void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; BOOL x676; BOOL x677; void*x678; short x679; short x680; out const void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; void*x693; void*x694; void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; bycopy int x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; int x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; oneway void*x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; BOOL x734; BOOL x735; void*x736; short x737; short x738; out const void*x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; unsigned long long x787; const void*x788; void*x789; unsigned long long x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; unsigned long long x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; oneway void*x832; void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; unsigned char x839; void*x840; long x841; long doublex842; void*x843; unsigned char x844; void*x845; long x846; void*x847; in double x848; void*x849; const unsigned short x850; void*x851; const void x852; void*x853; const unsigned int x854; in void x855; int x856; void*x857; void*x858; unsigned int x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; void*x868; void*x869; void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; oneway void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; void*x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; void*x1016; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; oneway void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; void*x1054; void*x1055; void*x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; long long x1067; void*x1068; void*x1069; void*x1070; void*x1071; void*x1072; void*x1073; void*x1074; void*x1075; void*x1076; void*x1077; void*x1078; void*x1079; void*x1080; void*x1081; void*x1082; void*x1083; void*x1084; double x1085; void*x1086; void*x1087; void*x1088; void*x1089; void*x1090; void*x1091; void*x1092; void*x1093; void*x1094; void*x1095; void*x1096; void*x1097; void*x1098; void*x1099; void*x1100; void*x1101; void*x1102; void*x1103; void*x1104; void*x1105; void*x1106; void*x1107; void*x1108; void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; void*x1123; void*x1124; void*x1125; int x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; unsigned long long x1161; int x1162; void*x1163; void*x1164; void*x1165; void*x1166; void*x1167; void*x1168; void*x1169; void*x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; oneway void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; Class x1211; void*x1212; void*x1213; void*x1214; long doublex1215; long doublex1216; void*x1217; float x1218; void*x1219; const const void*x1220; double x1221; long doublex1222; void*x1223; long x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; int x1230; long x1231; unsigned int x1232/* : ? */; out void*x1233; bycopy void*x1234; void*x1235; const void*x1236; void*x1237; int x1238; out in void*x1239; void*x1240; void*x1241; void*x1242; unsigned short x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; void*x1254; void*x1255; void*x1256; void*x1257; void*x1258; void*x1259; void*x1260; void*x1261; void*x1262; void*x1263; void*x1264; void*x1265; void*x1266; void*x1267; void*x1268; void*x1269; void*x1270; void*x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; unsigned int x1279; long x1280; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; void*x1289; void*x1290; void*x1291; void*x1292; void*x1293; void*x1294; void*x1295; void*x1296; void*x1297; void*x1298; void*x1299; void*x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; void*x1306; void*x1307; oneway void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; void*x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; void*x1330; void*x1331; void*x1332; void*x1333; void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; oneway void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; void*x1345; unsigned char x1346; long doublex1347; long doublex1348; void*x1349; void*x1350; out const void*x1351; BOOL x1352; void*x1353; short x1354; void*x1355; unsigned short x1356; BOOL x1357; out const void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; void*x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; void*x1369; void*x1370; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 symbolTable:(struct TSCESymbolTable { id x1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSString>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSString> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::hash<unsigned int>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::equal_to<unsigned int>, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct vector<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > >, std::__1::allocator<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > > > { struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_4_1_1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_4_1_2; struct __compressed_pair<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > *, std::__1::allocator<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > > > { struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_3_2_1; } x_4_1_3; } x4; }*)arg3;
- (id)date;
- (id)description;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })durationWrapper;
- (id)exportString;
- (id)format;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct DurationNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 duration:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isBlank;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData { unsigned int x1; unsigned int x2; })recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct DurationNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBlank:(BOOL)arg1;
- (void)setValue:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg1;
- (id)string;
- (int)tokenType;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })value;

@end
