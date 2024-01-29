<div style="text-align: center;">
  <h1 align="center"style="text-decoration: underline;">Minitalk Project</h1>
  <div style="display: flex; flex-direction: column; align-items: center;">
    <img src="https://raw.githubusercontent.com/Loky-Coffee/Minitalk/main/%20'Minitalk'%20project%20.png" align="center" alt="the 'push_swap' algorithm" width="1024" height="512" />
  </div>
</div>

## Overview
Minitalk is a simple client-server communication program using UNIX signals. The program enables a client to send messages to a server, which then prints these messages to the console. It demonstrates the basics of signal handling and interprocess communication in C.

## Prerequisites
Ensure you have GCC (GNU Compiler Collection) installed on your system to compile the program. This project is developed and tested on UNIX-based systems.

## Installation
To install Minitalk, simply clone this repository and build the executable files using the provided Makefile.

```bash
git clone https://github.com/Loky-Coffee/Minitalk.git
cd Minitalk
make
```
This will create two executables: client and server.

## Usage
First, start the server to get its PID (Process ID):

```bash
./server
```

The server will display its PID on the console. Then, run the client with the server's PID and the message to be sent:

```bash
./client [Server PID] [Message]
```

## Bonus Features
Server Acknowledgment: The server acknowledges the receipt of each message by sending a signal back to the client.
Unicode Characters Support: The program supports sending and receiving Unicode characters.

## Testing
The Makefile also includes special test rules for manual and automated testing. Use make test for automated tests and make t for manual tests.

## Cleaning
To remove all object and executable files, use:

```bash
make fclean
```

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
