romb		OBJECTHEADER <OBJ_SCALE16,256,romb2,0,COL_BLACK1,5,15,14>
		DB	054,034,070	;   0
		DB	074,034,070	;   1
		DB	054,094,072	;   2
		DB	074,094,072	;   3
		DB	054,080,064	;   4
		DB	054,078,064	;   5
		DB	054,082,066	;   6
		DB	054,082,068	;   7
		DB	054,080,070	;   8
		DB	054,078,070	;   9
		DB	054,076,068	;  10
		DB	054,076,066	;  11
		DB	054,060,064	;  12
		DB	054,062,066	;  13
		DB	054,062,068	;  14
		DB	054,060,070	;  15
		DB	054,058,070	;  16
		DB	054,056,068	;  17
		DB	054,056,066	;  18
		DB	054,058,064	;  19
		DB	054,042,070	;  20
		DB	054,040,070	;  21
		DB	054,038,068	;  22
		DB	054,038,066	;  23
		DB	054,040,064	;  24
		DB	054,042,064	;  25
		DB	054,044,066	;  26
		DB	054,044,068	;  27
		DB	074,042,070	;  28
		DB	074,044,068	;  29
		DB	074,044,066	;  30
		DB	074,042,064	;  31
		DB	074,040,064	;  32
		DB	074,038,066	;  33
		DB	074,038,068	;  34
		DB	074,040,070	;  35
		DB	074,060,070	;  36
		DB	074,062,068	;  37
		DB	074,062,066	;  38
		DB	074,060,064	;  39
		DB	074,058,064	;  40
		DB	074,056,066	;  41
		DB	074,056,068	;  42
		DB	074,058,070	;  43
		DB	074,080,070	;  44
		DB	074,082,068	;  45
		DB	074,082,066	;  46
		DB	074,080,064	;  47
		DB	074,078,064	;  48
		DB	074,076,066	;  49
		DB	074,076,068	;  50
		DB	074,078,070	;  51
		DB	054,090,068	;  52
		DB	054,082,074	;  53
		DB	054,082,078	;  54
		DB	054,034,078	;  55
		DB	074,090,068	;  56
		DB	074,034,078	;  57
		DB	074,082,078	;  58
		DB	074,082,074	;  59
		DB	072,088,074	;  60
		DB	056,088,074	;  61
		DB	054,094,070	;  62
		DB	074,094,070	;  63
		DB	058,094,072	;  64
		DB	058,094,070	;  65
		DB	070,094,072	;  66
		DB	070,094,070	;  67
		DB	056,068,078	;  68
		DB	072,068,078	;  69
		DB	056,052,078	;  70
		DB	072,052,078	;  71
		DB	070,066,080	;  72
		DB	070,054,080	;  73
		DB	058,054,080	;  74
		DB	058,066,080	;  75
		DB	064,070,080	;  76
		DB	068,070,082	;  77
		DB	060,070,082	;  78
		DB	060,070,088	;  79
		DB	068,070,088	;  80
		DB	064,070,090	;  81
		DB	054,068,086	;  82
		DB	054,068,082	;  83
		DB	058,068,082	;  84
		DB	058,068,086	;  85
		DB	070,068,086	;  86
		DB	070,068,082	;  87
		DB	074,068,082	;  88
		DB	074,068,086	;  89
		DB	068,062,092	;  90
		DB	074,062,092	;  91
		DB	074,064,090	;  92
		DB	068,064,090	;  93
		DB	060,064,090	;  94
		DB	054,064,090	;  95
		DB	060,062,092	;  96
		DB	054,062,092	;  97
		DB	054,042,082	;  98
		DB	060,042,082	;  99
		DB	060,044,080	; 100
		DB	054,044,080	; 101
		DB	068,042,082	; 102
		DB	074,042,082	; 103
		DB	074,044,080	; 104
		DB	068,044,080	; 105
		DB	060,068,090	; 106
		DB	060,068,080	; 107
		DB	068,068,080	; 108
		DB	068,068,090	; 109
		DB	054,064,086	; 110
		DB	054,064,082	; 111
		DB	060,068,086	; 112
		DB	068,068,086	; 113
		DB	060,064,086	; 114
		DB	068,064,086	; 115
		DB	074,064,086	; 116
		DB	074,064,082	; 117
		DB	060,064,080	; 118
		DB	068,064,080	; 119
		DB	060,054,088	; 120
		DB	068,054,088	; 121
		DB	060,056,082	; 122
		DB	068,056,082	; 123
		DB	074,034,074	; 124
		DB	054,034,074	; 125
		DB	-1

		DW	OFFSET	romb_1

		EVEN

romb_1		DW	593

romblo_hi	DB	028h,152,208,202,-1
		DW	OFFSET romblo-$-2	; 
		DW	OFFSET rombhicn_lf-$-2	; 
		DB	-1

rombhicn_lf	DB	028h,198,214,212,-1
		DW	OFFSET rombhicn_rt-$-2	; 
		DW	OFFSET rombhilf-$-2	; 
		DB	-1

rombhicn_rt	DB	028h,204,218,216,-1
		DW	OFFSET rombhicn-$-2	; 
		DW	OFFSET rombhirt-$-2	; 
		DB	-1


romblo		LABEL	BYTE
		DB	008h,COL_OLIVE4,44,14,108,110,00,-1	; face 21
		DB	000h,7,COL_OLIVE4,04,106,14,104,124,-1	; face 20
		DB	004h,11,COL_NEW_GREY3,COL_NEW_GREY3,14,16,18,20,22,10,08,12,-1	; face 6
		DB	004h,11,COL_NEW_GREY3,COL_NEW_GREY3,26,28,30,32,34,36,38,24,-1	; face 7
		DB	004h,11,COL_NEW_GREY3,COL_NEW_GREY3,54,40,42,44,46,48,50,52,-1	; face 8
		DB	002h,4,COL_OLIVE3,106,250,-1		; line 66
		DB	002h,4,COL_OLIVE3,124,00,-1		; line 67
		DB	008h,COL_OLIVE4,02,114,116,90,68,-1	; face 21
		DB	000h,7,COL_OLIVE4,112,90,118,06,126,-1	; face 20
		DB	004h,11,COL_NEW_GREY3,COL_NEW_GREY3,90,92,94,96,98,100,102,88,-1	; face 14
		DB	004h,11,COL_NEW_GREY3,COL_NEW_GREY3,82,84,86,72,74,76,78,80,-1	; face 15
		DB	004h,11,COL_NEW_GREY3,COL_NEW_GREY3,60,62,64,66,68,70,56,58,-1	; face 16
		DB	002h,4,COL_OLIVE3,248,118,-1		; line 68
		DB	002h,4,COL_OLIVE3,02,126,-1		; line 69
		DB	008h,COL_OLIVE3,122,106,04,-1		; face 17
		DB	008h,COL_OLIVE3,06,118,120,-1		; face 18
		DB	008h,COL_DK_CYAN3,108,106,122,-1	; face 19
		DB	008h,COL_DK_CYAN3,120,118,116,-1	; face 20
		DB	008h,COL_OLIVE2,122,04,06,120,-1	; face 26
		DB	008h,COL_OLIVE4,06,04,124,126,-1	; face 21
		DB	000h,6,COL_GREY1,128,04,124,130,-1	; face 23
		DB	000h,6,COL_GREY1,06,132,134,126,-1	; face 24
		DB	002h,7,COL_GREY2,128,04,124,130,128,-1	; line 64
		DB	002h,7,COL_GREY2,06,132,134,126,06,-1	; line 65
		DB	008h,COL_OLIVE5,126,124,104,112,-1	; face 22
		DB	008h,COL_DK_CYAN2,120,116,108,122,-1	; face 47
		DB	002h,6,COL_OLIVE3,120,116,108,122,-1	; line 79
		DB	008h,COL_OLIVE2,116,114,110,108,-1	; face 25
		DB	008h,COL_OLIVE3,148,140,136,150,-1	; face 30
		DB	008h,COL_OLIVE3,144,138,142,146,-1	; face 31
		DB	008h,COL_OLIVE4,150,136,138,144,-1	; face 32
		DB	008h,COL_OLIVE4,146,142,140,148,-1	; face 33
		DB	008h,COL_OLIVE5,110,114,02,00,-1	; face 43
		DB	002h,4,COL_OLIVE3,250,248,-1		; line 70
		DB	008h,COL_OLIVE6,00,02,68,44,-1		; face 50
		DB	-1

rombhicn	LABEL	BYTE
		DB	008h,COL_OLIVE5,240,236,238,242,-1	; face 55
		DB	008h,COL_OLIVE5,218,212,214,216,-1	; face 43
		DB	00Ch,COL_GREY3,COL_GREY4,162,158,156,152,154,160,-1	; face 42
		DB	008h,COL_OLIVE2,188,212,218,186,-1	; face 44
		DB	008h,COL_OLIVE4,188,228,224,212,-1	; face 50
		DB	008h,COL_OLIVE4,186,218,226,230,-1	; face 51
		DB	008h,COL_OLIVE4,236,240,244,-1		; face 49
		DB	008h,COL_OLIVE4,238,246,242,-1		; face 50
		DB	008h,COL_OLIVE5,240,242,246,244,-1	; face 53
		DB	008h,COL_OLIVE5,246,146,148,244,-1	; face 54
		DB	008h,COL_OLIVE5,188,186,230,228,-1	; face 58
		DB	008h,COL_OLIVE5,236,228,230,238,-1	; face 79
		DB	-1

rombhirt	LABEL	BYTE
		DB	008h,COL_OLIVE3,238,146,246,-1		; face 52
		DB	008h,COL_GREY2,184,186,210,208,-1	; face 61
		DB	008h,COL_OLIVE5,238,230,232,234,-1	; face 78
		DB	008h,COL_OLIVE2,232,230,226,178,-1	; face 48
		DB	008h,COL_NEW_GREY2,180,204,210,186,-1	; face 63
		DB	008h,COL_OLIVE5,176,178,226,216,-1	; face 46
		DB	00Ch,COL_GREY3,COL_GREY4,172,174,176,178,-1	; face 43
		DB	008h,COL_GREY1,182,180,186,184,-1	; face 44
		DB	008h,COL_NEW_GREY1,204,180,182,206,-1	; face 47
		DB	008h,COL_NEW_GREY2,206,182,184,208,-1	; face 49
		DB	008h,COL_GREY2,204,206,208,210,-1	; face 50
		DB	008h,COL_OLIVE4,232,178,176,234,-1	; face 49
		DB	008h,COL_OLIVE6,176,216,238,234,-1	; face 56
		DB	-1

rombhilf	LABEL	BYTE
		DB	008h,COL_OLIVE3,236,244,148,-1		; face 51
		DB	008h,COL_GREY2,188,190,202,200,-1	; face 60
		DB	008h,COL_OLIVE5,222,220,228,236,-1	; face 77
		DB	008h,COL_OLIVE2,228,220,164,224,-1	; face 47
		DB	008h,COL_NEW_GREY2,198,192,188,200,-1	; face 62
		DB	008h,COL_OLIVE5,214,224,164,166,-1	; face 45
		DB	00Ch,COL_GREY3,COL_GREY4,170,164,166,168,-1	; face 42
		DB	008h,COL_GREY1,192,194,190,188,-1	; face 45
		DB	008h,COL_NEW_GREY1,196,194,192,198,-1	; face 46
		DB	008h,COL_NEW_GREY2,194,196,202,190,-1	; face 48
		DB	008h,COL_GREY2,196,198,200,202,-1	; face 51
		DB	008h,COL_OLIVE4,164,220,222,166,-1	; face 45
		DB	008h,COL_OLIVE6,214,166,222,236,-1	; face 57
		DB	-1

		EVEN

romb2		OBJECTHEADER <OBJ_SCALE8,1024,romb3,0,COL_BLACK1,2,7,6>
		DB	060,050,066	;   0
		DB	068,050,066	;   1
		DB	060,078,068	;   2
		DB	068,078,068	;   3
		DB	060,072,064	;   4
		DB	060,070,064	;   5
		DB	060,072,066	;   6
		DB	060,070,066	;   7
		DB	060,064,064	;   8
		DB	060,064,066	;   9
		DB	060,060,066	;  10
		DB	060,060,064	;  11
		DB	060,054,066	;  12
		DB	060,052,066	;  13
		DB	060,052,064	;  14
		DB	060,054,064	;  15
		DB	068,054,066	;  16
		DB	068,054,064	;  17
		DB	068,052,064	;  18
		DB	068,052,066	;  19
		DB	068,064,066	;  20
		DB	068,064,064	;  21
		DB	068,060,064	;  22
		DB	068,060,066	;  23
		DB	068,072,066	;  24
		DB	068,072,064	;  25
		DB	068,070,064	;  26
		DB	068,070,066	;  27
		DB	060,072,068	;  28
		DB	060,072,070	;  29
		DB	060,050,070	;  30
		DB	068,050,070	;  31
		DB	068,072,070	;  32
		DB	068,072,068	;  33
		DB	068,076,068	;  34
		DB	060,076,068	;  35
		DB	060,078,066	;  36
		DB	068,078,066	;  37
		DB	060,066,070	;  38
		DB	068,066,070	;  39
		DB	060,058,070	;  40
		DB	068,058,070	;  41
		DB	066,064,072	;  42
		DB	066,060,072	;  43
		DB	062,060,072	;  44
		DB	062,064,072	;  45
		DB	068,066,072	;  46
		DB	066,066,072	;  47
		DB	062,066,072	;  48
		DB	062,066,076	;  49
		DB	066,066,076	;  50
		DB	060,066,074	;  51
		DB	060,066,072	;  52
		DB	062,066,074	;  53
		DB	066,066,074	;  54
		DB	068,066,074	;  55
		DB	066,064,076	;  56
		DB	068,064,076	;  57
		DB	062,064,076	;  58
		DB	060,064,076	;  59
		DB	060,054,072	;  60
		DB	062,054,072	;  61
		DB	066,054,072	;  62
		DB	068,054,072	;  63
		DB	060,064,074	;  64
		DB	060,064,072	;  65
		DB	062,064,074	;  66
		DB	066,064,074	;  67
		DB	068,064,074	;  68
		DB	068,064,072	;  69
		DB	062,060,076	;  70
		DB	066,060,076	;  71
		DB	068,050,068	;  72
		DB	060,050,068	;  73
		DB	-1

		DW	OFFSET	romb2_1

		EVEN

romb2_1		DW	407

romblo_hi2	DB	028h,92,126,120,-1
		DW	OFFSET romblo2-$-2	; 
		DW	OFFSET rombhicn_lf2-$-2	; 
		DB	-1

rombhicn_lf2	DB	028h,122,96,98,-1
		DW	OFFSET rombhicn_rt2-$-2	; 
		DW	OFFSET rombhilf2-$-2	; 
		DB	-1

rombhicn_rt2	DB	028h,124,100,94,-1
		DW	OFFSET rombhicn2-$-2	; 
		DW	OFFSET rombhirt2-$-2	; 
		DB	-1


romblo2		LABEL	BYTE
		DB	008h,COL_OLIVE4,12,58,60,00,-1		; face 21
		DB	000h,6,COL_OLIVE4,04,56,12,72,-1	; face 20
		DB	004h,7,COL_NEW_GREY3,COL_NEW_GREY3,12,14,10,08,-1	; face 6
		DB	004h,7,COL_NEW_GREY3,COL_NEW_GREY3,16,18,20,22,-1	; face 7
		DB	004h,7,COL_NEW_GREY3,COL_NEW_GREY3,24,26,28,30,-1	; face 8
		DB	002h,4,COL_OLIVE3,56,146,-1		; line 66
		DB	002h,4,COL_OLIVE3,72,00,-1		; line 67
		DB	008h,COL_OLIVE4,02,62,64,48,-1		; face 21
		DB	000h,6,COL_OLIVE4,48,66,06,74,-1	; face 20
		DB	004h,7,COL_NEW_GREY3,COL_NEW_GREY3,48,50,52,54,-1	; face 14
		DB	004h,7,COL_NEW_GREY3,COL_NEW_GREY3,44,46,40,42,-1	; face 15
		DB	004h,7,COL_NEW_GREY3,COL_NEW_GREY3,34,36,38,32,-1	; face 16
		DB	002h,4,COL_OLIVE3,144,66,-1		; line 68
		DB	002h,4,COL_OLIVE3,02,74,-1		; line 69
		DB	008h,COL_DK_CYAN3,58,56,70,-1		; face 19
		DB	008h,COL_DK_CYAN3,68,66,64,-1		; face 20
		DB	008h,COL_OLIVE2,70,04,06,68,-1		; face 26
		DB	008h,COL_OLIVE4,06,04,72,74,-1		; face 21
		DB	002h,4,COL_GREY1,06,74,-1		; line 59
		DB	002h,4,COL_GREY1,72,04,-1		; line 60
		DB	008h,COL_DK_CYAN2,68,64,58,70,-1	; face 47
		DB	002h,6,COL_OLIVE3,68,64,58,70,-1	; line 79
		DB	008h,COL_OLIVE2,64,62,60,58,-1		; face 25
		DB	008h,COL_OLIVE3,88,80,76,90,-1		; face 30
		DB	008h,COL_OLIVE3,84,78,82,86,-1		; face 31
		DB	008h,COL_OLIVE4,90,76,78,84,-1		; face 32
		DB	008h,COL_OLIVE4,86,82,80,88,-1		; face 33
		DB	008h,COL_OLIVE5,60,62,02,00,-1		; face 43
		DB	002h,4,COL_OLIVE3,146,144,-1		; line 70
		DB	-1

rombhicn2	LABEL	BYTE
		DB	008h,COL_OLIVE5,140,90,84,142,-1	; face 55
		DB	00Ch,COL_GREY3,COL_GREY4,98,96,94,100,-1	; face 42
		DB	008h,COL_OLIVE2,116,98,100,112,-1	; face 44
		DB	008h,COL_OLIVE4,116,132,106,98,-1	; face 50
		DB	008h,COL_OLIVE4,112,100,108,134,-1	; face 51
		DB	008h,COL_OLIVE4,90,140,88,-1		; face 49
		DB	008h,COL_OLIVE4,84,86,142,-1		; face 50
		DB	008h,COL_OLIVE5,140,142,86,88,-1	; face 53
		DB	008h,COL_OLIVE5,116,112,134,132,-1	; face 58
		DB	008h,COL_OLIVE5,90,132,134,84,-1	; face 79
		DB	-1

rombhirt2	LABEL	BYTE
		DB	008h,COL_OLIVE5,84,134,136,138,-1	; face 78
		DB	008h,COL_OLIVE2,136,134,108,110,-1	; face 48
		DB	00Ch,COL_GREY3,COL_GREY4,108,94,92,110,-1	; face 43
		DB	00Ch,COL_NEW_GREY1,COL_GREY2,124,112,114,126,-1	; face 47
		DB	006h,5,COL_NEW_GREY1,COL_NEW_GREY1,114,112,-1	; line 64
		DB	008h,COL_OLIVE4,136,110,92,138,-1	; face 49
		DB	-1

rombhilf2	LABEL	BYTE
		DB	008h,COL_OLIVE5,130,128,132,90,-1	; face 77
		DB	008h,COL_OLIVE2,132,128,102,106,-1	; face 47
		DB	00Ch,COL_GREY3,COL_GREY4,106,102,104,96,-1	; face 42
		DB	00Ch,COL_NEW_GREY1,COL_GREY2,120,118,116,122,-1	; face 46
		DB	006h,5,COL_NEAR_WHITE1,COL_NEAR_WHITE1,116,118,-1	; line 63
		DB	008h,COL_OLIVE4,102,128,130,104,-1	; face 45
		DB	-1

		EVEN

romb3		OBJECTHEADER <OBJ_SCALE4,4096,-1,1,COL_OLIVE3,1,3,3>
		DB	062,058,064	;   0
		DB	066,058,064	;   1
		DB	062,070,066	;   2
		DB	066,070,066	;   3
		DB	062,068,066	;   4
		DB	062,058,066	;   5
		DB	066,058,066	;   6
		DB	066,068,066	;   7
		DB	062,070,064	;   8
		DB	066,070,064	;   9
		DB	062,064,066	;  10
		DB	066,064,066	;  11
		DB	062,062,066	;  12
		DB	066,062,066	;  13
		DB	064,064,068	;  14
		DB	064,062,068	;  15
		DB	066,064,068	;  16
		DB	064,064,070	;  17
		DB	062,064,068	;  18
		DB	066,064,070	;  19
		DB	062,064,070	;  20
		DB	062,060,068	;  21
		DB	064,060,068	;  22
		DB	066,060,068	;  23
		DB	064,062,070	;  24
		DB	-1

		DW	OFFSET	romb3_1

		EVEN

romb3_1		DW	149

romblo_hi3	DB	028h,32,46,42,-1
		DW	OFFSET romblo3-$-2	; 
		DW	OFFSET rombhicn3-$-2	; 
		DB	-1


romblo3		LABEL	BYTE
		DB	008h,COL_OLIVE4,00,16,04,10,-1		; face 33
		DB	008h,COL_OLIVE4,12,06,18,02,-1		; face 32
		DB	008h,COL_OLIVE4,06,04,16,18,-1		; face 21
		DB	002h,4,COL_GREY1,06,18,-1		; line 59
		DB	002h,4,COL_GREY1,16,04,-1		; line 60
		DB	008h,COL_DK_CYAN2,06,14,08,04,-1	; face 47
		DB	008h,COL_OLIVE2,14,12,10,08,-1		; face 25
		DB	008h,COL_OLIVE3,30,24,20,28,-1		; face 30
		DB	008h,COL_OLIVE3,28,22,26,30,-1		; face 31
		DB	008h,COL_OLIVE4,28,20,22,-1		; face 32
		DB	008h,COL_OLIVE4,30,26,24,-1		; face 33
		DB	008h,COL_OLIVE5,10,12,02,00,-1		; face 43
		DB	-1

rombhicn3	LABEL	BYTE
		DB	00Ch,COL_OLIVE4,COL_OLIVE4,28,48,30,-1	; face 49
		DB	00Ah,COL_OLIVE5,34,28,-1		; face 58
		DB	00Eh,COL_GREY3,COL_GREY4,28,32,-1	; face 43
		DB	00Ch,COL_NEW_GREY1,COL_GREY2,44,34,38,46,-1	; face 47
		DB	006h,5,COL_NEW_GREY1,COL_NEW_GREY1,38,34,-1	; line 64
		DB	00Eh,COL_GREY3,COL_GREY4,28,36,-1	; face 42
		DB	00Ch,COL_NEW_GREY1,COL_GREY2,42,40,34,44,-1	; face 46
		DB	006h,5,COL_NEAR_WHITE1,COL_NEAR_WHITE1,34,40,-1	; line 63
		DB	-1

		EVEN

