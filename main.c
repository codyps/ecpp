
#include <stdlib.h>
#include <stdio.h>

/* tokenizer gets arrays of bytes, and each time emit 0 or more tokens */
struct token {
	const char *token;
	size_t token_len;
	size_t alloc_len;
};

struct tokenizer {
	struct list_head input_buffers;
	struct list_head tokens;
};

struct tokentok_feed(struct tokenizer *tok, char *data, size_t data_len)
{

}

int main(int argc, char **argv)
{
	return 0;
}
