VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "virtex2"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL firstword
        SIGNAL lastword
        SIGNAL drop_pkt
        SIGNAL clk
        SIGNAL fifowrite
        SIGNAL XLXN_7
        SIGNAL XLXN_8
        SIGNAL XLXN_11
        SIGNAL XLXN_12
        SIGNAL XLXN_13
        SIGNAL XLXN_16(7:0)
        SIGNAL XLXN_24
        SIGNAL XLXN_25
        SIGNAL XLXN_26
        SIGNAL fiforead
        SIGNAL rst
        SIGNAL XLXN_32
        SIGNAL in_fifo(71:0)
        SIGNAL XLXN_34(71:0)
        SIGNAL out_fifo(71:0)
        SIGNAL XLXN_40
        SIGNAL valid_data
        SIGNAL waddr(7:0)
        SIGNAL XLXN_48(7:0)
        SIGNAL raddr(7:0)
        PORT Input firstword
        PORT Input lastword
        PORT Input drop_pkt
        PORT Input clk
        PORT Input fifowrite
        PORT Input fiforead
        PORT Input rst
        PORT Input in_fifo(71:0)
        PORT Output out_fifo(71:0)
        PORT Output valid_data
        BEGIN BLOCKDEF fd
            TIMESTAMP 2000 1 1 10 10 10
            RECTANGLE N 64 -320 320 -64 
            LINE N 0 -128 64 -128 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
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
        BEGIN BLOCKDEF comp8
            TIMESTAMP 2000 1 1 10 10 10
            RECTANGLE N 64 -384 320 -64 
            LINE N 384 -224 320 -224 
            RECTANGLE N 0 -332 64 -308 
            LINE N 0 -320 64 -320 
            RECTANGLE N 0 -140 64 -116 
            LINE N 0 -128 64 -128 
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
        BEGIN BLOCKDEF fdc
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -128 64 -128 
            LINE N 0 -32 64 -32 
            LINE N 0 -256 64 -256 
            LINE N 384 -256 320 -256 
            RECTANGLE N 64 -320 320 -64 
            LINE N 64 -112 80 -128 
            LINE N 80 -128 64 -144 
            LINE N 192 -64 192 -32 
            LINE N 192 -32 64 -32 
        END BLOCKDEF
        BEGIN BLOCKDEF or2
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 64 -64 
            LINE N 0 -128 64 -128 
            LINE N 256 -96 192 -96 
            ARC N 28 -224 204 -48 112 -48 192 -96 
            ARC N -40 -152 72 -40 48 -48 48 -144 
            LINE N 112 -144 48 -144 
            ARC N 28 -144 204 32 192 -96 112 -144 
            LINE N 112 -48 48 -48 
        END BLOCKDEF
        BEGIN BLOCKDEF and2b1
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -48 64 -144 
            LINE N 64 -144 144 -144 
            LINE N 144 -48 64 -48 
            ARC N 96 -144 192 -48 144 -48 144 -144 
            LINE N 256 -96 192 -96 
            LINE N 0 -128 64 -128 
            LINE N 0 -64 40 -64 
            CIRCLE N 40 -76 64 -52 
        END BLOCKDEF
        BEGIN BLOCKDEF and3b2
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 0 -64 40 -64 
            CIRCLE N 40 -76 64 -52 
            LINE N 0 -128 40 -128 
            CIRCLE N 40 -140 64 -116 
            LINE N 0 -192 64 -192 
            LINE N 256 -128 192 -128 
            LINE N 64 -64 64 -192 
            ARC N 96 -176 192 -80 144 -80 144 -176 
            LINE N 144 -80 64 -80 
            LINE N 64 -176 144 -176 
        END BLOCKDEF
        BEGIN BLOCKDEF SDPM9B
            TIMESTAMP 2025 1 30 9 45 20
            RECTANGLE N 32 0 256 496 
            BEGIN LINE W 0 48 32 48 
            END LINE
            BEGIN LINE W 0 80 32 80 
            END LINE
            LINE N 0 112 32 112 
            LINE N 0 240 32 240 
            BEGIN LINE W 0 272 32 272 
            END LINE
            LINE N 0 464 32 464 
            BEGIN LINE W 256 272 288 272 
            END LINE
        END BLOCKDEF
        BEGIN BLOCKDEF vcc
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 64 -32 64 -64 
            LINE N 64 0 64 -32 
            LINE N 96 -64 32 -64 
        END BLOCKDEF
        BEGIN BLOCKDEF cb8cle
            TIMESTAMP 2000 1 1 10 10 10
            RECTANGLE N 64 -448 320 -64 
            LINE N 0 -192 64 -192 
            LINE N 192 -32 64 -32 
            LINE N 192 -64 192 -32 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
            LINE N 0 -128 64 -128 
            LINE N 0 -32 64 -32 
            LINE N 0 -256 64 -256 
            LINE N 0 -384 64 -384 
            RECTANGLE N 0 -396 64 -372 
            LINE N 384 -384 320 -384 
            LINE N 384 -192 320 -192 
            RECTANGLE N 320 -396 384 -372 
            LINE N 384 -128 320 -128 
        END BLOCKDEF
        BEGIN BLOCKDEF cb8ce
            TIMESTAMP 2000 1 1 10 10 10
            LINE N 384 -128 320 -128 
            RECTANGLE N 320 -268 384 -244 
            LINE N 384 -256 320 -256 
            LINE N 0 -192 64 -192 
            LINE N 192 -32 64 -32 
            LINE N 192 -64 192 -32 
            LINE N 80 -128 64 -144 
            LINE N 64 -112 80 -128 
            LINE N 0 -128 64 -128 
            LINE N 0 -32 64 -32 
            LINE N 384 -192 320 -192 
            RECTANGLE N 64 -320 320 -64 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 fd
            PIN C clk
            PIN D firstword
            PIN Q XLXN_12
        END BLOCK
        BEGIN BLOCK XLXI_2 fd
            PIN C clk
            PIN D lastword
            PIN Q XLXN_13
        END BLOCK
        BEGIN BLOCK XLXI_3 fd
            PIN C clk
            PIN D drop_pkt
            PIN Q XLXN_8
        END BLOCK
        BEGIN BLOCK XLXI_4 fd8ce
            PIN C clk
            PIN CE XLXN_7
            PIN CLR rst
            PIN D(7:0) waddr(7:0)
            PIN Q(7:0) XLXN_16(7:0)
        END BLOCK
        BEGIN BLOCK XLXI_5 comp8
            PIN A(7:0) waddr(7:0)
            PIN B(7:0) raddr(7:0)
            PIN EQ XLXN_25
        END BLOCK
        BEGIN BLOCK XLXI_6 comp8
            PIN A(7:0) raddr(7:0)
            PIN B(7:0) XLXN_16(7:0)
            PIN EQ XLXN_26
        END BLOCK
        BEGIN BLOCK XLXI_7 fd
            PIN C clk
            PIN D fifowrite
            PIN Q XLXN_24
        END BLOCK
        BEGIN BLOCK XLXI_8 reg9B
            PIN D(71:0) in_fifo(71:0)
            PIN clr rst
            PIN clk clk
            PIN ce XLXN_40
            PIN Q(71:0) XLXN_34(71:0)
        END BLOCK
        BEGIN BLOCK XLXI_11 fdc
            PIN C clk
            PIN CLR rst
            PIN D XLXN_32
            PIN Q valid_data
        END BLOCK
        BEGIN BLOCK XLXI_12 or2
            PIN I0 XLXN_13
            PIN I1 XLXN_12
            PIN O XLXN_11
        END BLOCK
        BEGIN BLOCK XLXI_13 and2b1
            PIN I0 XLXN_8
            PIN I1 XLXN_11
            PIN O XLXN_7
        END BLOCK
        BEGIN BLOCK XLXI_14 and3b2
            PIN I0 XLXN_26
            PIN I1 XLXN_25
            PIN I2 fiforead
            PIN O XLXN_32
        END BLOCK
        BEGIN BLOCK XLXI_15 SDPM9B
            PIN addra(7:0) waddr(7:0)
            PIN dina(71:0) XLXN_34(71:0)
            PIN wea XLXN_24
            PIN clka clk
            PIN addrb(7:0) raddr(7:0)
            PIN clkb clk
            PIN doutb(71:0) out_fifo(71:0)
        END BLOCK
        BEGIN BLOCK XLXI_16 vcc
            PIN P XLXN_40
        END BLOCK
        BEGIN BLOCK XLXI_17 cb8cle
            PIN C clk
            PIN CE XLXN_24
            PIN CLR rst
            PIN D(7:0) XLXN_16(7:0)
            PIN L XLXN_8
            PIN CEO
            PIN Q(7:0) waddr(7:0)
            PIN TC
        END BLOCK
        BEGIN BLOCK XLXI_18 cb8ce
            PIN C clk
            PIN CE XLXN_32
            PIN CLR rst
            PIN CEO
            PIN Q(7:0) raddr(7:0)
            PIN TC
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 3520 2720
        INSTANCE XLXI_1 480 592 R0
        INSTANCE XLXI_2 480 976 R0
        INSTANCE XLXI_4 592 1360 R0
        INSTANCE XLXI_7 1584 720 R0
        INSTANCE XLXI_11 2272 2336 R0
        INSTANCE XLXI_12 1120 768 R0
        INSTANCE XLXI_13 1680 880 R0
        INSTANCE XLXI_14 1824 1536 R0
        INSTANCE XLXI_3 608 2432 R0
        INSTANCE XLXI_5 1248 1632 R0
        INSTANCE XLXI_6 1264 2176 R0
        BEGIN INSTANCE XLXI_8 2432 704 R0
        END INSTANCE
        BEGIN BRANCH firstword
            WIRE 336 336 480 336
        END BRANCH
        BEGIN BRANCH lastword
            WIRE 368 720 480 720
        END BRANCH
        BEGIN BRANCH drop_pkt
            WIRE 480 2176 608 2176
        END BRANCH
        BEGIN BRANCH fifowrite
            WIRE 1520 464 1584 464
        END BRANCH
        IOMARKER 336 336 firstword R180 28
        IOMARKER 368 720 lastword R180 28
        IOMARKER 480 2176 drop_pkt R180 28
        IOMARKER 480 2304 clk R180 28
        IOMARKER 1520 464 fifowrite R180 28
        BEGIN BRANCH XLXN_7
            WIRE 528 960 528 1168
            WIRE 528 1168 592 1168
            WIRE 528 960 2016 960
            WIRE 1936 784 2016 784
            WIRE 2016 784 2016 960
        END BRANCH
        BEGIN BRANCH XLXN_8
            WIRE 992 2176 2160 2176
            WIRE 1680 816 2160 816
            WIRE 2160 816 2160 2176
            WIRE 2160 816 2192 816
            WIRE 2192 816 2192 1120
            WIRE 2192 1120 2256 1120
        END BRANCH
        BEGIN BRANCH XLXN_11
            WIRE 1376 672 1520 672
            WIRE 1520 672 1520 752
            WIRE 1520 752 1680 752
        END BRANCH
        BEGIN BRANCH XLXN_12
            WIRE 864 336 992 336
            WIRE 992 336 992 640
            WIRE 992 640 1120 640
        END BRANCH
        BEGIN BRANCH XLXN_13
            WIRE 864 720 992 720
            WIRE 992 704 992 720
            WIRE 992 704 1120 704
        END BRANCH
        BEGIN BRANCH XLXN_16(7:0)
            WIRE 976 1104 1120 1104
            WIRE 1120 1104 1600 1104
            WIRE 1120 1104 1120 2048
            WIRE 1120 2048 1264 2048
            WIRE 1600 992 1600 1104
            WIRE 1600 992 2256 992
        END BRANCH
        BEGIN BRANCH XLXN_24
            WIRE 1968 464 2096 464
            WIRE 2096 464 2096 1184
            WIRE 2096 1184 2112 1184
            WIRE 2112 1184 2256 1184
            WIRE 2112 1184 2112 1392
            WIRE 2112 1392 2688 1392
            WIRE 2688 1168 2688 1392
            WIRE 2688 1168 2944 1168
        END BRANCH
        BEGIN BRANCH XLXN_25
            WIRE 1632 1408 1824 1408
        END BRANCH
        BEGIN BRANCH XLXN_26
            WIRE 1648 1952 1728 1952
            WIRE 1728 1472 1728 1952
            WIRE 1728 1472 1824 1472
        END BRANCH
        BEGIN BRANCH fiforead
            WIRE 1744 1344 1824 1344
        END BRANCH
        IOMARKER 1744 1344 fiforead R180 28
        BEGIN BRANCH rst
            WIRE 592 1328 592 1632
            WIRE 592 1632 2176 1632
            WIRE 1856 1200 1936 1200
            WIRE 1936 1200 2096 1200
            WIRE 2096 1200 2096 1344
            WIRE 2096 1344 2096 1840
            WIRE 2096 1840 2096 2304
            WIRE 2096 2304 2272 2304
            WIRE 2096 1840 2240 1840
            WIRE 2240 1840 2272 1840
            WIRE 2096 1344 2256 1344
            WIRE 2096 1200 2176 1200
            WIRE 2176 1200 2176 1632
            WIRE 1936 1136 1936 1200
            WIRE 1936 1136 2048 1136
            WIRE 2048 544 2048 1136
            WIRE 2048 544 2432 544
        END BRANCH
        IOMARKER 1856 1200 rst R180 28
        BEGIN BRANCH in_fifo(71:0)
            WIRE 2352 480 2432 480
        END BRANCH
        IOMARKER 2352 480 in_fifo(71:0) R180 28
        BEGIN INSTANCE XLXI_15 2944 1056 R0
        END INSTANCE
        BEGIN BRANCH XLXN_34(71:0)
            WIRE 2816 480 2896 480
            WIRE 2896 480 2896 1136
            WIRE 2896 1136 2944 1136
        END BRANCH
        BEGIN BRANCH out_fifo(71:0)
            WIRE 3232 1328 3296 1328
        END BRANCH
        IOMARKER 3296 1328 out_fifo(71:0) R0 28
        INSTANCE XLXI_16 2320 384 R0
        BEGIN BRANCH XLXN_40
            WIRE 2384 384 2384 672
            WIRE 2384 672 2432 672
        END BRANCH
        BEGIN BRANCH valid_data
            WIRE 2656 2080 2800 2080
        END BRANCH
        IOMARKER 2800 2080 valid_data R0 28
        BEGIN BRANCH waddr(7:0)
            WIRE 544 1104 592 1104
            WIRE 544 1104 544 1392
            WIRE 544 1392 1040 1392
            WIRE 1040 896 1040 1312
            WIRE 1040 1312 1040 1392
            WIRE 1040 1312 1248 1312
            WIRE 1040 896 2784 896
            WIRE 2784 896 2784 992
            WIRE 2784 992 2784 1104
            WIRE 2784 1104 2944 1104
            WIRE 2640 992 2784 992
        END BRANCH
        INSTANCE XLXI_17 2256 1376 R0
        BEGIN BRANCH clk
            WIRE 416 464 480 464
            WIRE 416 464 416 592
            WIRE 416 592 416 848
            WIRE 416 848 416 976
            WIRE 416 976 496 976
            WIRE 496 976 496 1232
            WIRE 496 1232 496 2304
            WIRE 496 2304 608 2304
            WIRE 496 1232 592 1232
            WIRE 496 976 2032 976
            WIRE 2032 976 2144 976
            WIRE 2144 976 2144 1248
            WIRE 2144 1248 2144 1376
            WIRE 2144 1376 2144 1744
            WIRE 2144 1744 2144 2208
            WIRE 2144 2208 2272 2208
            WIRE 2144 1744 2240 1744
            WIRE 2240 1744 2272 1744
            WIRE 2144 1376 2640 1376
            WIRE 2144 1248 2256 1248
            WIRE 416 848 480 848
            WIRE 416 592 1584 592
            WIRE 480 2304 496 2304
            WIRE 2032 608 2032 976
            WIRE 2032 608 2432 608
            WIRE 2640 1296 2640 1376
            WIRE 2640 1296 2800 1296
            WIRE 2800 1296 2944 1296
            WIRE 2800 1296 2800 1520
            WIRE 2800 1520 2944 1520
        END BRANCH
        BEGIN BRANCH XLXN_32
            WIRE 2080 1408 2192 1408
            WIRE 2192 1408 2192 1680
            WIRE 2192 1680 2192 1744
            WIRE 2192 1744 2192 2080
            WIRE 2192 2080 2272 2080
            WIRE 2192 1680 2240 1680
            WIRE 2240 1680 2272 1680
        END BRANCH
        INSTANCE XLXI_18 2272 1872 R0
        BEGIN BRANCH raddr(7:0)
            WIRE 1184 1696 1232 1696
            WIRE 1232 1696 1232 1856
            WIRE 1232 1856 1264 1856
            WIRE 1184 1696 1184 2368
            WIRE 1184 2368 2784 2368
            WIRE 1232 1504 1248 1504
            WIRE 1232 1504 1232 1696
            WIRE 2656 1616 2784 1616
            WIRE 2784 1616 2784 2368
            WIRE 2784 1328 2784 1616
            WIRE 2784 1328 2944 1328
        END BRANCH
    END SHEET
END SCHEMATIC
