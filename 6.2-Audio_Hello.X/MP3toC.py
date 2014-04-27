#!/usr/bin/python
#
# Convert MP3 files to C arrays
#
# usage: python MP3toC.py name[.mp3] > name.h
#    or: ./MP3toC.py name[.mp3] > name.h
#
import sys

# identify source file
argc =  len( sys.argv)

if argc != 2:
    print "usage ./MP3toC.py name[.mp3] > name.h"
    sys.exit( 1)

source = sys.argv[1]
source_list = source.split('.')

# check if an extension was given, otherwise append .mp3
if len( source_list) == 1:	
    source += '.mp3'
 
try:
    fsource = open( source, "rb")
except IOError:
    sys.stderr.write( 'File %s not found!\n' % source)
    sys.exit( 1)

# produce include file heading
print """
/*
 * audio resource %s
 */

// initialized data
const BYTE """ % source,

# use the file name as the resource name 
print '_' + source.split(".")[0] + "[] = {"

try:
    while( 1):
        b = fsource.read(16)
        for c in b:
            print "%#0.2x," % ord(c),
        print
        if len( b) < 16:
            print "};"
            break

finally:
    fsource.close()

print

