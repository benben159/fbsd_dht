#include <stdio.h>
#include "common_dht_read.h"
#include "pi_dht_read.h"

int main(int argc, char **argv) {
	float humidity, temperature;
	int rv = pi_dht_read(DHT11, 4, &humidity, &temperature);
	if (rv == DHT_SUCCESS){
		printf("humidity: %.2f%%; temperature: %.2f deg C\n", humidity, temperature);
	} else if (rv == DHT_ERROR_TIMEOUT) {
		fprintf(stderr, "sensor reading timeout, try again later\n");
	} else if (rv == DHT_ERROR_GPIO) {
		fprintf(stderr, "error accessing gpio controller\n");
	} else if (rv == DHT_ERROR_CHECKSUM) {
		fprintf(stderr, "checksum error, try again later\n");
	}
	return 0;
}
