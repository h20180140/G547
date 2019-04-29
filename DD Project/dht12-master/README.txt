IMPORTANT NOTE : 
PLEASE REFER TO THE DOCUMENTATION.docx FILE FOR A DETAILED DOCUMENTATION OF THE WORKING OF THE CODE AND THE PROJECT
We were planning to only read the humidity values as per our project topic, but then we have also implemented temperature and CRC verification (check user space code). So, all the values being displyed using this driver are authentic values.

COMPILATION PROCEDURE
---------------------
1)Change directory and move into the dht12-master folder using cd commands.

2)Modify the kdir in the makefile to the kernel source of the test platform

3)Compile the driver

Command to execute : make all

4)Move into the test_app directory and compile the user space progrma (dht12_app) using gcc.

cd test_app
gcc dht12_app.c

TESTING PROCEDURE
-----------------

1)Move back to dht12-master directory and load driver copy dht12_drv.ko into the kernel using insmod command.

	sudo insmod ht12_drv.ko

2)To install the device, give write permission using the following command to the file specified

	sudo chmod 666 /sys/bus/i2c/devices/i2c-1/new_device

3)Now run the shell script dht_add_device.sh using the following command (from add_device folder)
	
	./dht12_add_device.sh

4)Give read permission to the newly created device file using the following command.
	
	sudo chmod 666 /dev/DHT12

5)To get the sensor readings, compile (using gcc) and run the user space program (from test_app)
	 
	./dht12_app 
	OR
	./a.out
