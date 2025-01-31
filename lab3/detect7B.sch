VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2p"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL XLXN_1(111:0)
        SIGNAL pipe1(71:0)
        SIGNAL pipe0(47:0)
        SIGNAL pipe1(63:0)
        SIGNAL clk
        SIGNAL XLXN_8
        SIGNAL ce
        SIGNAL pipe0(71:0)
        SIGNAL XLXN_13
        SIGNAL XLXN_14
        SIGNAL match
        SIGNAL match_en
        SIGNAL mrst
        SIGNAL hwregA(62:56)
        SIGNAL hwregA(63:0)
        SIGNAL hwergA(55:0)
        PORT Input pipe1(71:0)
        PORT Input clk
        PORT Input ce
        PORT Output pipe0(71:0)
        PORT Output match
        PORT Input match_en
        PORT Input mrst
        PORT Input hwregA(63:0)
        BEGIN BLOCKDEF busmerge
            TIMESTAMP 2025 1 30 7 20 57
            RECTANGLE N 64 -128 320 0 
            RECTANGLE N 0 -108 64 -84 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            RECTANGLE N 320 -108 384 -84 
            LINE N 320 -96 384 -96 
        END BLOCKDEF
        BEGIN BLOCKDEF wordmatch
            TIMESTAMP 2025 1 30 7 22 51
            RECTANGLE N 64 -192 320 0 
            RECTANGLE N 0 -172 64 -148 
            LINE N 64 -160 0 -160 
            RECTANGLE N 0 -108 64 -84 
            LINE N 64 -96 0 -96 
            RECTANGLE N 0 -44 64 -20 
            LINE N 64 -32 0 -32 
            LINE N 320 -160 384 -160 
        END BLOCKDEF
        BEGIN BLOCKDEF reg9B
            TIMESTAMP 2025 1 30 7 22 57
            RECTANGLE N 64 -256 320 0 
            RECTANGLE N 0 -236 64 -212 
            LINE N 64 -224 0 -224 
            LINE N 64 -160 0 -160 
            LINE N 64 -96 0 -96 
            LINE N 64 -32 0 -32 
            RECTANGLE N 320 -236 384 -212 
            LINE N 320 -224 384 -224 
        END BLOCKDEF
        BEGIN BLOCKDEF fd
            TIMESTAMP 2000 1 1 10 10 10
            RECTANGLE N 64 -320 320 -64 
            LINE N 0 -128 64 -128 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
        END BLOCKDEF
        BEGIN BLOCKDEF fdce
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 0 -32 64 -32 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 64 -112 80 -128 
            LINE N 80 -128 64 -144 
            LINE N 192 -64 192 -32 
            LINE N 192 -32 64 -32 
            RECTANGLE N 64 -320 320 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF and3b1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 40 -64 
            CIRCLE N 40 -76 64 -52 
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 256 -128 192 -128 
            LINE N 64 -64 64 -192 
            ARC N 96 -176 192 -80 144 -80 144 -176 
            LINE N 144 -80 64 -80 
            LINE N 64 -176 144 -176 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 busmerge
            PIN da(47:0) pipe0(47:0)
            PIN db(63:0) pipe1(63:0)
            PIN q(111:0) XLXN_1(111:0)
        END BLOCK
        BEGIN BLOCK XLXI_2 wordmatch
            PIN datacomp(55:0) hwergA(55:0)
            PIN wildcard(6:0) hwregA(62:56)
            PIN datain(111:0) XLXN_1(111:0)
            PIN match XLXN_14
        END BLOCK
        BEGIN BLOCK XLXI_3 reg9B
            PIN D(71:0) pipe1(71:0)
            PIN clr XLXN_8
            PIN clk clk
            PIN ce ce
            PIN Q(71:0) pipe0(71:0)
        END BLOCK
        BEGIN BLOCK XLXI_4 fd
            PIN C clk
            PIN D mrst
            PIN Q XLXN_8
        END BLOCK
        BEGIN BLOCK XLXI_5 fdce
            PIN C clk
            PIN CE XLXN_13
            PIN CLR XLXN_8
            PIN D XLXN_13
            PIN Q match
        END BLOCK
        BEGIN BLOCK XLXI_6 and3b1
            PIN I0 match
            PIN I1 match_en
            PIN I2 XLXN_14
            PIN O XLXN_13
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        BEGIN INSTANCE XLXI_1 864 1328 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_2 1456 1264 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_3 848 896 R0
        END INSTANCE
        BEGIN BRANCH XLXN_1(111:0)
            WIRE 1248 1232 1456 1232
        END BRANCH
        BEGIN BRANCH pipe1(71:0)
            WIRE 640 672 848 672
        END BRANCH
        BEGIN BRANCH pipe0(47:0)
            WIRE 688 1232 864 1232
        END BRANCH
        BEGIN BRANCH pipe1(63:0)
            WIRE 688 1296 864 1296
        END BRANCH
        IOMARKER 640 672 pipe1(71:0) R180 28
        BEGIN BRANCH clk
            WIRE 720 800 752 800
            WIRE 752 800 848 800
            WIRE 752 800 752 912
            WIRE 752 912 752 1568
            WIRE 752 1568 2128 1568
            WIRE 752 912 1904 912
            WIRE 1904 912 1904 1200
            WIRE 1904 1200 2592 1200
        END BRANCH
        INSTANCE XLXI_4 2128 1696 R0
        INSTANCE XLXI_5 2592 1328 R0
        INSTANCE XLXI_6 2112 1200 R0
        BEGIN BRANCH XLXN_8
            WIRE 800 736 848 736
            WIRE 800 736 800 1952
            WIRE 800 1952 2592 1952
            WIRE 2512 1440 2592 1440
            WIRE 2592 1440 2592 1952
            WIRE 2592 1296 2592 1440
        END BRANCH
        BEGIN BRANCH ce
            WIRE 720 864 848 864
        END BRANCH
        IOMARKER 720 800 clk R180 28
        IOMARKER 720 864 ce R180 28
        BEGIN BRANCH pipe0(71:0)
            WIRE 1232 672 1408 672
        END BRANCH
        IOMARKER 1408 672 pipe0(71:0) R0 28
        BEGIN BRANCH XLXN_13
            WIRE 2368 1072 2432 1072
            WIRE 2432 1072 2592 1072
            WIRE 2432 1072 2432 1136
            WIRE 2432 1136 2592 1136
        END BRANCH
        BEGIN BRANCH XLXN_14
            WIRE 1840 1104 1968 1104
            WIRE 1968 1008 1968 1104
            WIRE 1968 1008 2112 1008
        END BRANCH
        BEGIN BRANCH match
            WIRE 2064 1136 2112 1136
            WIRE 2064 1136 2064 1360
            WIRE 2064 1360 3024 1360
            WIRE 2976 1072 3024 1072
            WIRE 3024 1072 3136 1072
            WIRE 3024 1072 3024 1360
        END BRANCH
        IOMARKER 3136 1072 match R0 28
        BEGIN BRANCH match_en
            WIRE 1792 1280 1792 1360
            WIRE 1792 1280 2096 1280
            WIRE 2096 1072 2112 1072
            WIRE 2096 1072 2096 1280
        END BRANCH
        IOMARKER 1792 1360 match_en R90 28
        BEGIN BRANCH mrst
            WIRE 2048 1440 2128 1440
        END BRANCH
        IOMARKER 2048 1440 mrst R180 28
        BEGIN BRANCH hwregA(62:56)
            WIRE 1296 1168 1456 1168
        END BRANCH
        BEGIN BRANCH hwregA(63:0)
            WIRE 800 288 1072 288
        END BRANCH
        IOMARKER 800 288 hwregA(63:0) R180 28
        BEGIN BRANCH hwergA(55:0)
            WIRE 1312 1104 1456 1104
        END BRANCH
    END SHEET
END SCHEMATIC
