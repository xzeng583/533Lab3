VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "aspartan2e"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL match
        SIGNAL XLXN_2
        SIGNAL XLXN_3
        SIGNAL XLXN_4
        SIGNAL XLXN_5
        SIGNAL XLXN_6
        SIGNAL XLXN_8
        SIGNAL XLXN_7
        SIGNAL XLXN_9
        SIGNAL XLXN_10
        SIGNAL datacomp(55:0)
        SIGNAL wildcard(6:0)
        SIGNAL datain(55:0)
        SIGNAL XLXN_15(55:0)
        SIGNAL XLXN_16(55:0)
        SIGNAL XLXN_18(6:0)
        SIGNAL datain(63:8)
        SIGNAL datain(71:16)
        SIGNAL datain(79:24)
        SIGNAL datain(87:32)
        SIGNAL datain(95:40)
        SIGNAL datain(103:48)
        SIGNAL datain(111:56)
        SIGNAL datain(111:0)
        PORT Output match
        PORT Input datacomp(55:0)
        PORT Input wildcard(6:0)
        PORT Input datain(111:0)
        BEGIN BLOCKDEF comparator
            TIMESTAMP 2025 1 30 7 4 17
            RECTANGLE N 64 -192 320 0 
            RECTANGLE N 0 -172 64 -148 
            LINE N 64 -160 0 -160 
            RECTANGLE N 0 -108 64 -84 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            LINE N 320 -160 384 -160 
        END BLOCKDEF
        BEGIN BLOCKDEF or8
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 48 -64 
            LINE N 0 -128 48 -128 
            LINE N 0 -192 48 -192 
            LINE N 0 -384 48 -384 
            LINE N 0 -448 48 -448 
            LINE N 0 -512 48 -512 
            LINE N 256 -288 192 -288 
            LINE N 0 -320 64 -320 
            LINE N 0 -256 64 -256 
            ARC N 28 -336 204 -160 192 -288 112 -336 
            LINE N 112 -240 48 -240 
            ARC N 28 -416 204 -240 112 -240 192 -288 
            ARC N -40 -344 72 -232 48 -240 48 -336 
            LINE N 112 -336 48 -336 
            LINE N 48 -336 48 -512 
            LINE N 48 -64 48 -240 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(55:0)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_2
        END BLOCK
        BEGIN BLOCK XLXI_2 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(63:8)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_3
        END BLOCK
        BEGIN BLOCK XLXI_3 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(71:16)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_4
        END BLOCK
        BEGIN BLOCK XLXI_4 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(79:24)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_5
        END BLOCK
        BEGIN BLOCK XLXI_5 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(87:32)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_6
        END BLOCK
        BEGIN BLOCK XLXI_6 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(95:40)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_9
        END BLOCK
        BEGIN BLOCK XLXI_7 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(103:48)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_8
        END BLOCK
        BEGIN BLOCK XLXI_8 comparator
            PIN a(55:0) datacomp(55:0)
            PIN b(55:0) datain(111:56)
            PIN amask(6:0) wildcard(6:0)
            PIN match XLXN_10
        END BLOCK
        BEGIN BLOCK XLXI_9 or8
            PIN I0 XLXN_10
            PIN I1 XLXN_8
            PIN I2 XLXN_9
            PIN I3 XLXN_6
            PIN I4 XLXN_5
            PIN I5 XLXN_4
            PIN I6 XLXN_3
            PIN I7 XLXN_2
            PIN O match
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN INSTANCE XLXI_1 656 400 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_2 656 656 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_3 656 928 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_4 656 1184 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_5 656 1456 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_6 656 1728 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_7 656 2016 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_8 656 2304 R0
        END INSTANCE
        INSTANCE XLXI_9 2352 1472 R0
        BEGIN BRANCH match
            WIRE 2608 1184 2752 1184
            WIRE 2752 1184 2768 1184
        END BRANCH
        IOMARKER 2768 1184 match R0 28
        BEGIN BRANCH XLXN_2
            WIRE 1040 240 1056 240
            WIRE 1056 240 2352 240
            WIRE 2352 240 2352 960
        END BRANCH
        BEGIN BRANCH XLXN_3
            WIRE 1040 496 1056 496
            WIRE 1056 496 1696 496
            WIRE 1696 496 1696 1024
            WIRE 1696 1024 2352 1024
        END BRANCH
        BEGIN BRANCH XLXN_4
            WIRE 1040 768 1056 768
            WIRE 1056 768 1680 768
            WIRE 1680 768 1680 1088
            WIRE 1680 1088 2352 1088
        END BRANCH
        BEGIN BRANCH XLXN_5
            WIRE 1040 1024 1056 1024
            WIRE 1056 1024 1664 1024
            WIRE 1664 1024 1664 1152
            WIRE 1664 1152 2352 1152
        END BRANCH
        BEGIN BRANCH XLXN_6
            WIRE 1040 1296 1056 1296
            WIRE 1056 1296 1696 1296
            WIRE 1696 1216 1696 1296
            WIRE 1696 1216 2352 1216
        END BRANCH
        BEGIN BRANCH XLXN_8
            WIRE 1040 1856 1056 1856
            WIRE 1056 1856 1728 1856
            WIRE 1728 1344 1728 1856
            WIRE 1728 1344 2352 1344
        END BRANCH
        BEGIN BRANCH XLXN_9
            WIRE 1040 1568 1712 1568
            WIRE 1712 1296 1712 1568
            WIRE 1712 1296 2272 1296
            WIRE 2272 1280 2352 1280
            WIRE 2272 1280 2272 1296
        END BRANCH
        BEGIN BRANCH XLXN_10
            WIRE 1040 2144 2352 2144
            WIRE 2352 1408 2352 2144
        END BRANCH
        BEGIN BRANCH datacomp(55:0)
            WIRE 224 240 320 240
            WIRE 320 240 656 240
            WIRE 320 240 320 496
            WIRE 320 496 656 496
            WIRE 320 496 320 768
            WIRE 320 768 656 768
            WIRE 320 768 320 1024
            WIRE 320 1024 656 1024
            WIRE 320 1024 320 1296
            WIRE 320 1296 656 1296
            WIRE 320 1296 320 1568
            WIRE 320 1568 656 1568
            WIRE 320 1568 320 1856
            WIRE 320 1856 320 2144
            WIRE 320 2144 656 2144
            WIRE 320 1856 656 1856
        END BRANCH
        BEGIN BRANCH wildcard(6:0)
            WIRE 288 368 352 368
            WIRE 352 368 656 368
            WIRE 352 368 352 624
            WIRE 352 624 656 624
            WIRE 352 624 352 896
            WIRE 352 896 656 896
            WIRE 352 896 352 1152
            WIRE 352 1152 656 1152
            WIRE 352 1152 352 1424
            WIRE 352 1424 656 1424
            WIRE 352 1424 352 1696
            WIRE 352 1696 656 1696
            WIRE 352 1696 352 1984
            WIRE 352 1984 352 2272
            WIRE 352 2272 656 2272
            WIRE 352 1984 656 1984
        END BRANCH
        IOMARKER 224 240 datacomp(55:0) R180 28
        IOMARKER 288 368 wildcard(6:0) R180 28
        BEGIN BRANCH datain(55:0)
            WIRE 480 304 656 304
        END BRANCH
        BEGIN BRANCH datain(63:8)
            WIRE 480 560 656 560
        END BRANCH
        BEGIN BRANCH datain(71:16)
            WIRE 496 832 656 832
        END BRANCH
        BEGIN BRANCH datain(79:24)
            WIRE 496 1088 656 1088
        END BRANCH
        BEGIN BRANCH datain(87:32)
            WIRE 480 1360 656 1360
        END BRANCH
        BEGIN BRANCH datain(95:40)
            WIRE 480 1632 656 1632
        END BRANCH
        BEGIN BRANCH datain(103:48)
            WIRE 480 1920 656 1920
        END BRANCH
        BEGIN BRANCH datain(111:56)
            WIRE 480 2208 656 2208
        END BRANCH
        BEGIN BRANCH datain(111:0)
            WIRE 368 96 640 96
        END BRANCH
        IOMARKER 368 96 datain(111:0) R180 28
    END SHEET
END SCHEMATIC
