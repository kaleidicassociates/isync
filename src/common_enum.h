#define DEBUG_MAILDIR 1
#define DEBUG_NET 2
#define DEBUG_NET_ALL 4
#define DEBUG_SYNC 8
#define DEBUG_MAIN 16
#define DEBUG_DRV 32
#define DEBUG_DRV_ALL 64
#define DEBUG_CRASH 128
#define PROGRESS 256
#define DRYRUN 512
#define EXT_EXIT 1024
#define ZERODELAY 2048
#define KEEPJOURNAL 4096
#define FORCEJOURNAL 8192
#define FORCEASYNC(b) (16384 << (b))
#define FAKEEXPUNGE 65536
#define FAKEDUMBSTORE 131072
#define DEBUG__STRINGS "DEBUG_MAILDIR\0DEBUG_NET\0DEBUG_NET_ALL\0DEBUG_SYNC\0DEBUG_MAIN\0DEBUG_DRV\0DEBUG_DRV_ALL\0DEBUG_CRASH\0PROGRESS\0DRYRUN\0EXT_EXIT\0ZERODELAY\0KEEPJOURNAL\0FORCEJOURNAL\0F-FORCEASYNC\0N-FORCEASYNC\0FAKEEXPUNGE\0FAKEDUMBSTORE"
#define DEBUG__OFFSETS 0, 14, 24, 38, 49, 60, 70, 84, 96, 105, 112, 121, 131, 143, 156, 169, 182, 194
