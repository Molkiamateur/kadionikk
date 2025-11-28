

int cell_state(int n, int curstate) {
    if (! curstate) return ( n==3 );
    return (n==2)||(n==3);
}


frame conway_Naive(frame start, int gens) {
//   ###            #                 #                        #
//   #  #           #                 #                        #
//   #   #   ###   ####    ###        #       ###    ###    ## #
//   #   #      #   #         #       #      #   #      #  #  ##
//   #   #   ####   #      ####       #      #   #   ####  #   #
//   #  #   #   #   #  #  #   #       #      #   #  #   #  #   #
//   ###     ####    ##    ####       #####   ###    ####   ####
//
// data from frame is loaded in a local table to make computation easier
    int width = start.width();
    int size  = start.cells();
    char *map_orig = new char[size];

    for(int i=0; i<size/8; i++) {
        unsigned char c = start.data()[i];
        map_orig[i*8 + 0] = (c >> 7) & 1;
        map_orig[i*8 + 1] = (c >> 6) & 1;
        map_orig[i*8 + 2] = (c >> 5) & 1;
        map_orig[i*8 + 3] = (c >> 4) & 1;
        map_orig[i*8 + 4] = (c >> 3) & 1;
        map_orig[i*8 + 5] = (c >> 2) & 1;
        map_orig[i*8 + 6] = (c >> 1) & 1;
        map_orig[i*8 + 7] = (c >> 0) & 1;
    }


//    ###                                #             #      #
//   #   #                               #             #
//   #       ###   ## #   ####   #   #  ####    ###   ####   ##    ###   # ##
//   #      #   #  # # #  #   #  #   #   #         #   #      #   #   #  ##  #
//   #      #   #  # # #  #   #  #   #   #      ####   #      #   #   #  #   #
//   #   #  #   #  # # #  ####   #  ##   #  #  #   #   #  #   #   #   #  #   #
//    ###    ###   #   #  #       ## #    ##    ####    ##   ###   ###   #   #
//                        #

    // computation is performed from map_orig, and new generation is stored
    // in map_dest. So there is no risk to erase useful data when computing
    // a cell

    char *map_dest = new char[size];
    for (int generation =0; generation<gens; generation+=1) {

        //    ##    ##   ###   #   #  ####  ###    ###
        //   #  #  #  #  #  #  ##  #  #     #  #  #
        //   #     #  #  ###   # # #  ###   ###    ##
        //   #  #  #  #  #  #  #  ##  #     #  #     #
        //    ##    ##   #  #  #   #  ####  #  #  ###
        //
        // up left
        map_dest[0] = cell_state(map_orig[1      ]
                               + map_orig[width  ]
                               + map_orig[width+1]
                               , map_orig[0      ]);
        // up right
        map_dest[width-1] = cell_state(map_orig[  width - 2]
                                     + map_orig[2*width - 1]
                                     + map_orig[2*width - 2]
                                     , map_orig  [width - 1]);
        // down left
        map_dest[size-width] = cell_state(map_orig[size -   width +1]
                                        + map_orig[size - 2*width   ]
                                        + map_orig[size - 2*width +1]
                                        , map_orig[size -   width   ]);
        // down right
        map_dest[size-1] = cell_state(map_orig[size         - 2]
                                    + map_orig[size - width - 1]
                                    + map_orig[size - width - 2]
                                    , map_orig[size         - 1]);

        //   ###    ##   ###   ###   ####  ###    ###
        //   #  #  #  #  #  #  #  #  #     #  #  #
        //   ###   #  #  ###   #  #  ###   ###    ##
        //   #  #  #  #  #  #  #  #  #     #  #     #
        //   ###    ##   #  #  ###   ####  #  #  ###
        //

        // horizontal
        for (int i=1; i<width-1; i++) {
            // up
            map_dest[i] = cell_state(map_orig[i         - 1]
                                   + map_orig[i         + 1]
                                   + map_orig[i + width - 1]
                                   + map_orig[i + width    ]
                                   + map_orig[i + width + 1]
                                   , map_orig[i            ]);
            // down
            int ref = size - width + i;
            map_dest[ref] = cell_state(map_orig[ref         - 1]
                                     + map_orig[ref         + 1]
                                     + map_orig[ref - width - 1]
                                     + map_orig[ref - width    ]
                                     + map_orig[ref - width + 1]
                                     , map_orig[ref            ]);
        }

        // vertical
        for (int i=width; i<size-width; i += width) {
            //left
            map_dest[i] = cell_state(map_orig[i         + 1]
                                   + map_orig[i - width    ]
                                   + map_orig[i - width + 1]
                                   + map_orig[i + width    ]
                                   + map_orig[i + width + 1]
                                   , map_orig[i            ]);
            // right
            int ref = i + width - 1;
            map_dest[ref] = cell_state(map_orig[ref         - 1]
                                     + map_orig[ref - width    ]
                                     + map_orig[ref - width - 1]
                                     + map_orig[ref + width    ]
                                     + map_orig[ref + width - 1]
                                     , map_orig[ref            ]);
        }

        //   ###  #   #  #   #  ####  ###
        //    #   ##  #  ##  #  #     #  #
        //    #   # # #  # # #  ###   ###
        //    #   #  ##  #  ##  #     #  #
        //   ###  #   #  #   #  ####  #  #
        //

        for (int x=1; x<width-1; x+=1) {
            for (int y=width; y < size-width; y+=width) {
                map_dest[x+y] = cell_state(map_orig[x+y         - 1]
                                         + map_orig[x+y         + 1]
                                         + map_orig[x+y - width - 1]
                                         + map_orig[x+y - width    ]
                                         + map_orig[x+y - width + 1]
                                         + map_orig[x+y + width - 1]
                                         + map_orig[x+y + width    ]
                                         + map_orig[x+y + width + 1]
                                         , map_orig[x+y            ]);
            }
        }

        // table switch,
        // new generation is now the reference one.
        // buffer of old generation, is re-used for next generation
        char *tmp = map_orig;
        map_orig = map_dest;
        map_dest = tmp;
    }

//   ###            #                 ####                 #      #
//   #  #           #                 #   #                #
//   #   #   ###   ####    ###        #   #   ###    ###   #  #  ##   # ##    ###
//   #   #      #   #         #       ####       #  #   #  # #    #   ##  #  #   #
//   #   #   ####   #      ####       #       ####  #      ##     #   #   #  #  ##
//   #  #   #   #   #  #  #   #       #      #   #  #      # #    #   #   #   ## #
//   ###     ####    ##    ####       #       ####   ####  #  #  ###  #   #      #
//                                                                            ###
// Storing last generation computed in a frame object to let main() use it.

    frame newf;
    newf.set_w_h(width, start.height());
    char *map = newf.data();

    for (int i=0; i<size/8; i++) {
        map[i] = (map_orig[8*i + 0] << 7)
               + (map_orig[8*i + 1] << 6)
               + (map_orig[8*i + 2] << 5)
               + (map_orig[8*i + 3] << 4)
               + (map_orig[8*i + 4] << 3)
               + (map_orig[8*i + 5] << 2)
               + (map_orig[8*i + 6] << 1)
               + (map_orig[8*i + 7] << 0);

    }
    delete[] map_dest;
    delete[] map_orig;
    return newf;
}