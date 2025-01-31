VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "aspartan2e"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL a(55:0)
        SIGNAL b(55:0)
        SIGNAL amask(6:0)
        SIGNAL a(55:48)
        SIGNAL b(55:48)
        SIGNAL a(47:40)
        SIGNAL b(47:40)
        SIGNAL a(39:32)
        SIGNAL b(39:32)
        SIGNAL a(31:24)
        SIGNAL b(31:24)
        SIGNAL XLXN_12
        SIGNAL XLXN_13
        SIGNAL XLXN_14
        SIGNAL XLXN_15
        SIGNAL XLXN_16
        SIGNAL XLXN_17
        SIGNAL XLXN_18
        SIGNAL a(23:16)
        SIGNAL b(23:16)
        SIGNAL a(15:8)
        SIGNAL b(15:8)
        SIGNAL a(7:0)
        SIGNAL b(7:0)
        SIGNAL XLXN_25
        SIGNAL XLXN_26
        SIGNAL XLXN_27
        SIGNAL XLXN_28
        SIGNAL XLXN_29
        SIGNAL XLXN_30
        SIGNAL XLXN_31
        SIGNAL amask(6)
        SIGNAL amask(5)
        SIGNAL amask(4)
        SIGNAL amask(3)
        SIGNAL amask(2)
        SIGNAL amask(1)
        SIGNAL amask(0)
        SIGNAL match
        PORT Input a(55:0)
        PORT Input b(55:0)
        PORT Input amask(6:0)
        PORT Output match
        BEGIN BLOCKDEF comp8
            TIMESTAMP 2000 1 1 10 10 10
            RECTANGLE N 64 -384 320 -64 
            LINE N 384 -224 320 -224 
            RECTANGLE N 0 -332 64 -308 
            LINE N 0 -320 64 -320 
            RECTANGLE N 0 -140 64 -116 
            LINE N 0 -128 64 -128 
        END BLOCKDEF
        BEGIN BLOCKDEF or2b1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 32 -64 
            CIRCLE N 32 -76 56 -52 
            LINE N 0 -128 64 -128 
            LINE N 256 -96 192 -96 
            LINE N 112 -48 48 -48 
            ARC N 28 -144 204 32 192 -96 112 -144 
            LINE N 112 -144 48 -144 
            ARC N -40 -152 72 -40 48 -48 48 -144 
            ARC N 28 -224 204 -48 112 -48 192 -96 
        END BLOCKDEF
        BEGIN BLOCKDEF and7
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -448 64 -64 
            ARC N 96 -304 192 -208 144 -208 144 -304 
            LINE N 64 -304 144 -304 
            LINE N 144 -208 64 -208 
            LINE N 256 -256 192 -256 
            LINE N 0 -448 64 -448 
            LINE N 0 -384 64 -384 
            LINE N 0 -320 64 -320 
            LINE N 0 -256 64 -256 
            LINE N 0 -192 64 -192 
            LINE N 0 -128 64 -128 
            LINE N 0 -64 64 -64 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 comp8
            PIN A(7:0) a(55:48)
            PIN B(7:0) b(55:48)
            PIN EQ XLXN_12
        END BLOCK
        BEGIN BLOCK XLXI_2 comp8
            PIN A(7:0) a(47:40)
            PIN B(7:0) b(47:40)
            PIN EQ XLXN_13
        END BLOCK
        BEGIN BLOCK XLXI_3 comp8
            PIN A(7:0) a(39:32)
            PIN B(7:0) b(39:32)
            PIN EQ XLXN_14
        END BLOCK
        BEGIN BLOCK XLXI_4 comp8
            PIN A(7:0) a(31:24)
            PIN B(7:0) b(31:24)
            PIN EQ XLXN_15
        END BLOCK
        BEGIN BLOCK XLXI_5 comp8
            PIN A(7:0) a(23:16)
            PIN B(7:0) b(23:16)
            PIN EQ XLXN_16
        END BLOCK
        BEGIN BLOCK XLXI_6 comp8
            PIN A(7:0) a(15:8)
            PIN B(7:0) b(15:8)
            PIN EQ XLXN_17
        END BLOCK
        BEGIN BLOCK XLXI_7 comp8
            PIN A(7:0) a(7:0)
            PIN B(7:0) b(7:0)
            PIN EQ XLXN_18
        END BLOCK
        BEGIN BLOCK XLXI_8 or2b1
            PIN I0 amask(6)
            PIN I1 XLXN_12
            PIN O
        END BLOCK
        BEGIN BLOCK XLXI_9 or2b1
            PIN I0 amask(5)
            PIN I1 XLXN_13
            PIN O XLXN_26
        END BLOCK
        BEGIN BLOCK XLXI_10 or2b1
            PIN I0 amask(4)
            PIN I1 XLXN_14
            PIN O XLXN_27
        END BLOCK
        BEGIN BLOCK XLXI_11 or2b1
            PIN I0 amask(3)
            PIN I1 XLXN_15
            PIN O XLXN_28
        END BLOCK
        BEGIN BLOCK XLXI_12 or2b1
            PIN I0 amask(2)
            PIN I1 XLXN_16
            PIN O XLXN_29
        END BLOCK
        BEGIN BLOCK XLXI_13 or2b1
            PIN I0 amask(1)
            PIN I1 XLXN_17
            PIN O XLXN_30
        END BLOCK
        BEGIN BLOCK XLXI_14 or2b1
            PIN I0 amask(0)
            PIN I1 XLXN_18
            PIN O XLXN_31
        END BLOCK
        BEGIN BLOCK XLXI_15 and7
            PIN I0 XLXN_31
            PIN I1 XLXN_30
            PIN I2 XLXN_29
            PIN I3 XLXN_28
            PIN I4 XLXN_27
            PIN I5 XLXN_26
            PIN I6 XLXN_25
            PIN O match
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_1 560 864 R0
        INSTANCE XLXI_2 560 1344 R0
        INSTANCE XLXI_3 560 1840 R0
        INSTANCE XLXI_4 560 2352 R0
        INSTANCE XLXI_5 1920 1072 R0
        INSTANCE XLXI_6 1920 1584 R0
        INSTANCE XLXI_7 1920 2144 R0
        INSTANCE XLXI_8 1328 768 R0
        INSTANCE XLXI_9 1312 1248 R0
        INSTANCE XLXI_10 1312 1728 R0
        INSTANCE XLXI_11 1360 2256 R0
        INSTANCE XLXI_12 2464 976 R0
        INSTANCE XLXI_13 2464 1488 R0
        INSTANCE XLXI_14 2464 2048 R0
        INSTANCE XLXI_15 2912 1648 R0
        BEGIN BRANCH a(55:0)
            WIRE 592 128 864 128
        END BRANCH
        BEGIN BRANCH b(55:0)
            WIRE 592 240 864 240
        END BRANCH
        IOMARKER 592 128 a(55:0) R180 28
        IOMARKER 592 240 b(55:0) R180 28
        BEGIN BRANCH amask(6:0)
            WIRE 1296 128 1584 128
        END BRANCH
        IOMARKER 1296 128 amask(6:0) R180 28
        BEGIN BRANCH a(55:48)
            WIRE 384 544 560 544
        END BRANCH
        BEGIN BRANCH b(55:48)
            WIRE 400 736 560 736
        END BRANCH
        BEGIN BRANCH a(47:40)
            WIRE 416 1024 560 1024
        END BRANCH
        BEGIN BRANCH b(47:40)
            WIRE 416 1216 560 1216
        END BRANCH
        BEGIN BRANCH a(39:32)
            WIRE 400 1520 560 1520
        END BRANCH
        BEGIN BRANCH b(39:32)
            WIRE 400 1712 560 1712
        END BRANCH
        BEGIN BRANCH a(31:24)
            WIRE 416 2032 560 2032
        END BRANCH
        BEGIN BRANCH b(31:24)
            WIRE 416 2224 560 2224
        END BRANCH
        BEGIN BRANCH XLXN_12
            WIRE 944 640 1328 640
        END BRANCH
        BEGIN BRANCH XLXN_13
            WIRE 944 1120 1312 1120
        END BRANCH
        BEGIN BRANCH XLXN_14
            WIRE 944 1616 1120 1616
            WIRE 1120 1600 1120 1616
            WIRE 1120 1600 1312 1600
        END BRANCH
        BEGIN BRANCH XLXN_15
            WIRE 944 2128 1360 2128
        END BRANCH
        BEGIN BRANCH XLXN_16
            WIRE 2304 848 2464 848
        END BRANCH
        BEGIN BRANCH XLXN_17
            WIRE 2304 1360 2464 1360
        END BRANCH
        BEGIN BRANCH XLXN_18
            WIRE 2304 1920 2464 1920
        END BRANCH
        BEGIN BRANCH a(23:16)
            WIRE 1808 752 1920 752
        END BRANCH
        BEGIN BRANCH b(23:16)
            WIRE 1808 944 1920 944
        END BRANCH
        BEGIN BRANCH a(15:8)
            WIRE 1808 1264 1920 1264
        END BRANCH
        BEGIN BRANCH b(15:8)
            WIRE 1808 1456 1920 1456
        END BRANCH
        BEGIN BRANCH a(7:0)
            WIRE 1840 1824 1920 1824
        END BRANCH
        BEGIN BRANCH b(7:0)
            WIRE 1824 2016 1920 2016
        END BRANCH
        BEGIN BRANCH XLXN_25
            WIRE 1584 656 2912 656
            WIRE 2912 656 2912 1200
        END BRANCH
        BEGIN BRANCH XLXN_26
            WIRE 1568 1152 2320 1152
            WIRE 2320 1152 2320 1264
            WIRE 2320 1264 2912 1264
        END BRANCH
        BEGIN BRANCH XLXN_27
            WIRE 1568 1632 2320 1632
            WIRE 2320 1328 2320 1632
            WIRE 2320 1328 2912 1328
        END BRANCH
        BEGIN BRANCH XLXN_28
            WIRE 1616 2160 2800 2160
            WIRE 2800 1392 2800 2160
            WIRE 2800 1392 2912 1392
        END BRANCH
        BEGIN BRANCH XLXN_29
            WIRE 2720 880 2816 880
            WIRE 2816 880 2816 1456
            WIRE 2816 1456 2912 1456
        END BRANCH
        BEGIN BRANCH XLXN_30
            WIRE 2720 1392 2784 1392
            WIRE 2784 1392 2784 1520
            WIRE 2784 1520 2912 1520
        END BRANCH
        BEGIN BRANCH XLXN_31
            WIRE 2720 1952 2912 1952
            WIRE 2912 1584 2912 1952
        END BRANCH
        BEGIN BRANCH amask(6)
            WIRE 1168 704 1328 704
        END BRANCH
        BEGIN BRANCH amask(5)
            WIRE 1168 1184 1312 1184
        END BRANCH
        BEGIN BRANCH amask(4)
            WIRE 1168 1664 1312 1664
        END BRANCH
        BEGIN BRANCH amask(3)
            WIRE 1168 2192 1360 2192
        END BRANCH
        BEGIN BRANCH amask(2)
            WIRE 2352 912 2464 912
        END BRANCH
        BEGIN BRANCH amask(1)
            WIRE 2384 1424 2464 1424
        END BRANCH
        BEGIN BRANCH amask(0)
            WIRE 2320 1984 2464 1984
        END BRANCH
        BEGIN BRANCH match
            WIRE 3168 1392 3248 1392
        END BRANCH
        IOMARKER 3248 1392 match R0 28
    END SHEET
END SCHEMATIC
