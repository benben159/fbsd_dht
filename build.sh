cc -c common_dht_read.c -o common_dht_read.o
cc -c pi_dht_read.c -o pi_dht_read.o
cc -c main.c -o main.o
cc -lgpio -o test_dht11.out common_dht_read.o pi_dht_read.o main.o

