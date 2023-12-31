#define S_DEAD 1
#define S_EXPIRE 2
#define S_EXPIRED 4
#define S_NEXPIRE 8
#define S_PENDING 16
#define S_DUMMY(b) (32 << (b))
#define S_SKIPPED 128
#define S_GONE(b) (256 << (b))
#define S_DEL(b) (1024 << (b))
#define S_DELETE 4096
#define S_UPGRADE 8192
#define S_PURGE 16384
#define S_PURGED 32768
#define S__NUM_BITS 16
#define S__STRINGS "DEAD\0EXPIRE\0EXPIRED\0NEXPIRE\0PENDING\0F-DUMMY\0N-DUMMY\0SKIPPED\0F-GONE\0N-GONE\0F-DEL\0N-DEL\0DELETE\0UPGRADE\0PURGE\0PURGED"
#define S__OFFSETS 0, 5, 12, 20, 28, 36, 44, 52, 60, 67, 74, 80, 86, 93, 101, 107

