#ifndef IPV4_H
	#define IPV4_H

struct ipv4{
	int version:       4;
	int ihl:           4;
	int dscp:          6;
	int ecn:           2;
	int total_length: 16;
	int id:           16;
	int flags:         3;
	int frag_offset:  13;
	int ttl:           8;
	int proto:         8;
	int checksum:     16;
	int src:          32;
	int dsc:          32;
};
#endif
