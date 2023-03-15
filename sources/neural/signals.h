#define ROUTINE   2
#define NOREPLY   3
#define REQUEST   4
#define RESPONSE  5
#define JOBS      6
#define BROADCAST 7
#define 
struct signal{
	uint16_t id;
	bool live = FALSE;
	uint8_t type;
	size_t bodysize;
	char body[];
};

struct neuralLiveStream{
	bool live = TRUE;
	size_t bodysize;
	char body[];
}

typedef struct signal 			neuralSignal_t
typedef struct neuralLiveStream neuralLivestream_t
