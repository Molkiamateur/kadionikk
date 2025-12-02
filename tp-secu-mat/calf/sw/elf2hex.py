###
 # File: elf2hex.py                                                            #
 # Created Date: 2023-02-26 08:53:02 pm                                        #
 # Author: Mathieu Escouteloup                                                 #
 # -----                                                                       #
 # Last Modified: 2025-02-13 04:51:05 pm                                       #
 # Modified By: Mathieu Escouteloup                                            #
 # Email: mathieu.escouteloup@enseirb-matmeca.fr                               #
 # -----                                                                       #
 # License: See LICENSE.md                                                     #
 # Copyright (c) 2025 ENSEIRB-MATMECA                                          #
 # -----                                                                       #
 # Description:                                                                #
###

import argparse
from elftools.elf.elffile import ELFFile
from elftools.elf.sections import NoteSection, SymbolTableSection, Section
from elftools.elf.segments import Segment


parser = argparse.ArgumentParser(description="SecBench Power CW305")

parser.add_argument("-i", "--INPUT", help="Input file")
parser.add_argument("-o", "--OUTPUT", help="Output file", default="out.hex")
parser.add_argument("-s", "--OFFSET", help="Offset address", default="0x00000000")
parser.add_argument("-l", "--LINE", help="Line bytes", type=int, default=16)
parser.add_argument("-w", "--WORD", help="Word bytes", type=int, default=1)

ARGS = parser.parse_args()


def read_elf_file(input, output, offset, wide, word):
    e = ELFFile(open(input, 'rb'))
    
    acc = bytearray()
    for seg in e.iter_segments():
        acc = extend_with_segment(acc, int(offset, 0), seg)

    whole_string = gen_string(acc, wide, word)

    # write to output file
    with open(output, "w") as hex_file:
        hex_file.write(whole_string)
    

def extend_with_segment(acc, offset, segment): 
    seg_start = segment['p_paddr']
    seg_size = segment['p_memsz']
    seg_end = seg_start + seg_size

    # Print for debug
    # print("NEW SECTION")
    # print(hex(seg_start))
    # print(hex(seg_size))
    # print(hex(seg_end))
    # print(hex(offset))

    if (seg_start >= offset):
        data = segment.data()  

        while len(acc) < (seg_end - offset):
            acc += bytearray(1)

        for d in range(len(data)):
            acc[seg_start + d - offset] = data[d]
    # else:
    #     print("Ignored.")
    
    return acc

def gen_string(byte_data, wide, word):
    str_word = ""
    str_out = ""

    bcount = 1
    bdata = bytes(byte_data)

    for b in bdata:
        s = "%02x" % b

        # Word string
        if (word == 1):
            str_word = s
        elif ((bcount % word) == 1):
            str_word = s
        else:
            str_word = s + str_word

        # Output string
        if ((bcount % word) == 0):
            str_out += str_word

            if ((bcount % wide) == 0):
               str_out += '\n'
            else:
               str_out += ' ' 

        # Next byte
        bcount = bcount + 1

    return str_out

if __name__ == '__main__':
    read_elf_file(ARGS.INPUT, ARGS.OUTPUT, ARGS.OFFSET, ARGS.LINE, ARGS.WORD)