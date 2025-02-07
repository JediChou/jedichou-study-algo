#!/usr/bin/env python
import thread
from time import sleep, ctime

def loop0():
    print 'start loop0 at:', ctime()
    sleep(4)
    print 'loop 0 done at:', ctime()

def loop1():
    print 'start loop1 at:', ctime()
    sleep(2)
    print 'loop1 done at:', ctime()

def main():
    print 'start at:', ctime
    thread.start_new_thread(loop0, ())
    thread.start_new_thread(loop1, ())
    sleep(6)
    print 'all Done at:', ctime()

if __name__ == "__main__":
    main()

