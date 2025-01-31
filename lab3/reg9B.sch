VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "aspartan2e"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL D(71:64)
        SIGNAL D(63:48)
        SIGNAL D(47:32)
        SIGNAL D(31:16)
        SIGNAL D(15:0)
        SIGNAL D(71:0)
        SIGNAL Q(71:0)
        SIGNAL Q(63:48)
        SIGNAL Q(47:32)
        SIGNAL Q(31:16)
        SIGNAL Q(15:0)
        SIGNAL clr
        SIGNAL clk
        SIGNAL XLXN_18
        SIGNAL XLXN_19
        SIGNAL XLXN_20
        SIGNAL ce
        SIGNAL XLXN_23
        SIGNAL Q(71:64)
        PORT Input D(71:0)
        PORT Output Q(71:0)
        PORT Input clr
        PORT Input clk
        PORT Input ce
        BEGIN BLOCKDEF fd16ce
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 0 -32 64 -32 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
            RECTANGLE N 320 -268 384 -244 
            RECTANGLE N 0 -268 64 -244 
            LINE N 192 -32 64 -32 
            LINE N 192 -64 192 -32 
            RECTANGLE N 64 -320 320 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF fd8ce
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -128 64 -128 
            LINE N 0 -192 64 -192 
            LINE N 0 -32 64 -32 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 192 -32 64 -32 
            LINE N 192 -64 192 -32 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
            RECTANGLE N 320 -268 384 -244 
            RECTANGLE N 0 -268 64 -244 
            RECTANGLE N 64 -320 320 -64 
        END BLOCKDEF
        BEGIN BLOCK XLXI_2 fd16ce
            PIN C clk
            PIN CE ce
            PIN CLR clr
            PIN D(15:0) D(63:48)
            PIN Q(15:0) Q(63:48)
        END BLOCK
        BEGIN BLOCK XLXI_3 fd16ce
            PIN C clk
            PIN CE ce
            PIN CLR clr
            PIN D(15:0) D(47:32)
            PIN Q(15:0) Q(47:32)
        END BLOCK
        BEGIN BLOCK XLXI_4 fd16ce
            PIN C clk
            PIN CE ce
            PIN CLR clr
            PIN D(15:0) D(31:16)
            PIN Q(15:0) Q(31:16)
        END BLOCK
        BEGIN BLOCK XLXI_5 fd16ce
            PIN C clk
            PIN CE ce
            PIN CLR clr
            PIN D(15:0) D(15:0)
            PIN Q(15:0) Q(15:0)
        END BLOCK
        BEGIN BLOCK XLXI_6 fd8ce
            PIN C clk
            PIN CE ce
            PIN CLR clr
            PIN D(7:0) D(71:64)
            PIN Q(7:0) Q(71:64)
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_2 1088 1328 R0
        INSTANCE XLXI_3 1088 1776 R0
        INSTANCE XLXI_4 1088 2208 R0
        INSTANCE XLXI_5 1088 2624 R0
        BEGIN BRANCH D(71:64)
            WIRE 880 624 1088 624
            WIRE 1088 624 1136 624
        END BRANCH
        BEGIN BRANCH D(63:48)
            WIRE 896 1072 1088 1072
        END BRANCH
        BEGIN BRANCH D(47:32)
            WIRE 896 1520 1088 1520
        END BRANCH
        BEGIN BRANCH D(31:16)
            WIRE 880 1952 1088 1952
        END BRANCH
        BEGIN BRANCH D(15:0)
            WIRE 880 2368 1088 2368
        END BRANCH
        BEGIN BRANCH D(71:0)
            WIRE 896 304 1168 304
        END BRANCH
        BEGIN BRANCH Q(71:0)
            WIRE 1392 304 1712 304
        END BRANCH
        IOMARKER 896 304 D(71:0) R180 28
        IOMARKER 1712 304 Q(71:0) R0 28
        BEGIN BRANCH Q(63:48)
            WIRE 1472 1072 1728 1072
        END BRANCH
        BEGIN BRANCH Q(47:32)
            WIRE 1472 1520 1728 1520
        END BRANCH
        BEGIN BRANCH Q(31:16)
            WIRE 1472 1952 1712 1952
        END BRANCH
        BEGIN BRANCH Q(15:0)
            WIRE 1472 2368 1696 2368
        END BRANCH
        BEGIN BRANCH clr
            WIRE 592 2592 976 2592
            WIRE 976 2592 1088 2592
            WIRE 976 848 1088 848
            WIRE 1088 848 1136 848
            WIRE 976 848 976 1296
            WIRE 976 1296 1088 1296
            WIRE 976 1296 976 1744
            WIRE 976 1744 1088 1744
            WIRE 976 1744 976 2176
            WIRE 976 2176 976 2592
            WIRE 976 2176 1088 2176
        END BRANCH
        BEGIN BRANCH clk
            WIRE 592 2496 1040 2496
            WIRE 1040 2496 1088 2496
            WIRE 1040 752 1088 752
            WIRE 1088 752 1136 752
            WIRE 1040 752 1040 1200
            WIRE 1040 1200 1088 1200
            WIRE 1040 1200 1040 1648
            WIRE 1040 1648 1088 1648
            WIRE 1040 1648 1040 2080
            WIRE 1040 2080 1040 2496
            WIRE 1040 2080 1088 2080
        END BRANCH
        IOMARKER 592 2496 clk R180 28
        IOMARKER 592 2592 clr R180 28
        INSTANCE XLXI_6 1136 880 R0
        BEGIN BRANCH ce
            WIRE 576 2432 1008 2432
            WIRE 1008 2432 1088 2432
            WIRE 1008 688 1136 688
            WIRE 1008 688 1008 1136
            WIRE 1008 1136 1088 1136
            WIRE 1008 1136 1008 1584
            WIRE 1008 1584 1088 1584
            WIRE 1008 1584 1008 2016
            WIRE 1008 2016 1088 2016
            WIRE 1008 2016 1008 2288
            WIRE 1008 2288 1008 2432
        END BRANCH
        IOMARKER 576 2432 ce R180 28
        BEGIN BRANCH Q(71:64)
            WIRE 1520 624 1728 624
        END BRANCH
    END SHEET
END SCHEMATIC
