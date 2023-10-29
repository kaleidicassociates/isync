#define F_DRAFT 1
#define F_FLAGGED 2
#define F_FORWARDED 4
#define F_ANSWERED 8
#define F_SEEN 16
#define F_DELETED 32
#define F__NUM_BITS 6
#define F__STRINGS "DRAFT\0FLAGGED\0FORWARDED\0ANSWERED\0SEEN\0DELETED"
#define F__OFFSETS 0, 6, 14, 24, 33, 38

#define M_RECENT 1
#define M_DEAD 2
#define M_EXPUNGE 4
#define M_FLAGS 8
#define M_DATE 16
#define M_SIZE 32
#define M_BODY 64
#define M_HEADER 128
#define M__NUM_BITS 8
#define M__STRINGS "RECENT\0DEAD\0EXPUNGE\0FLAGS\0DATE\0SIZE\0BODY\0HEADER"
#define M__OFFSETS 0, 7, 12, 20, 26, 31, 36, 41

#define OPEN_PAIRED 1
#define OPEN_OLD 2
#define OPEN_NEW 4
#define OPEN_FIND 8
#define OPEN_FLAGS 16
#define OPEN_OLD_SIZE 32
#define OPEN_NEW_SIZE 64
#define OPEN_PAIRED_IDS 128
#define OPEN_APPEND 256
#define OPEN_SETFLAGS 512
#define OPEN_EXPUNGE 1024
#define OPEN_UID_EXPUNGE 2048
#define OPEN__NUM_BITS 12
#define OPEN__STRINGS "PAIRED\0OLD\0NEW\0FIND\0FLAGS\0OLD_SIZE\0NEW_SIZE\0PAIRED_IDS\0APPEND\0SETFLAGS\0EXPUNGE\0UID_EXPUNGE"
#define OPEN__OFFSETS 0, 7, 11, 15, 20, 26, 35, 44, 55, 62, 71, 79
