function HAnimBehaviorPrototypes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
ProtoDeclare20: TProtoDeclareNode;
ProtoInterface21: TProtoInterfaceNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
field48: TfieldNode;
field49: TfieldNode;
field50: TfieldNode;
field51: TfieldNode;
field52: TfieldNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
field67: TfieldNode;
field68: TfieldNode;
field69: TfieldNode;
field70: TfieldNode;
field71: TfieldNode;
field72: TfieldNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
field77: TfieldNode;
field78: TfieldNode;
field79: TfieldNode;
field80: TfieldNode;
field81: TfieldNode;
field82: TfieldNode;
field83: TfieldNode;
field84: TfieldNode;
field85: TfieldNode;
field86: TfieldNode;
field87: TfieldNode;
field88: TfieldNode;
field89: TfieldNode;
field90: TfieldNode;
field91: TfieldNode;
field92: TfieldNode;
field93: TfieldNode;
field94: TfieldNode;
field95: TfieldNode;
field96: TfieldNode;
field97: TfieldNode;
field98: TfieldNode;
field99: TfieldNode;
field100: TfieldNode;
field101: TfieldNode;
field102: TfieldNode;
field103: TfieldNode;
field104: TfieldNode;
field105: TfieldNode;
field106: TfieldNode;
field107: TfieldNode;
field108: TfieldNode;
field109: TfieldNode;
field110: TfieldNode;
field111: TfieldNode;
field112: TfieldNode;
field113: TfieldNode;
field114: TfieldNode;
field115: TfieldNode;
field116: TfieldNode;
field117: TfieldNode;
field118: TfieldNode;
field119: TfieldNode;
field120: TfieldNode;
field121: TfieldNode;
field122: TfieldNode;
field123: TfieldNode;
field124: TfieldNode;
field125: TfieldNode;
field126: TfieldNode;
field127: TfieldNode;
field128: TfieldNode;
field129: TfieldNode;
field130: TfieldNode;
field131: TfieldNode;
field132: TfieldNode;
field133: TfieldNode;
field134: TfieldNode;
field135: TfieldNode;
field136: TfieldNode;
field137: TfieldNode;
field138: TfieldNode;
field139: TfieldNode;
field140: TfieldNode;
field141: TfieldNode;
field142: TfieldNode;
field143: TfieldNode;
field144: TfieldNode;
field145: TfieldNode;
field146: TfieldNode;
field147: TfieldNode;
field148: TfieldNode;
field149: TfieldNode;
field150: TfieldNode;
field151: TfieldNode;
field152: TfieldNode;
field153: TfieldNode;
field154: TfieldNode;
field155: TfieldNode;
field156: TfieldNode;
field157: TfieldNode;
field158: TfieldNode;
field159: TfieldNode;
field160: TfieldNode;
field161: TfieldNode;
field162: TfieldNode;
field163: TfieldNode;
field164: TfieldNode;
field165: TfieldNode;
field166: TfieldNode;
field167: TfieldNode;
field168: TfieldNode;
field169: TfieldNode;
field170: TfieldNode;
field171: TfieldNode;
field172: TfieldNode;
field173: TfieldNode;
field174: TfieldNode;
field175: TfieldNode;
field176: TfieldNode;
field177: TfieldNode;
field178: TfieldNode;
field179: TfieldNode;
field180: TfieldNode;
field181: TfieldNode;
field182: TfieldNode;
field183: TfieldNode;
field184: TfieldNode;
field185: TfieldNode;
field186: TfieldNode;
field187: TfieldNode;
field188: TfieldNode;
field189: TfieldNode;
field190: TfieldNode;
field191: TfieldNode;
field192: TfieldNode;
field193: TfieldNode;
field194: TfieldNode;
field195: TfieldNode;
field196: TfieldNode;
field197: TfieldNode;
field198: TfieldNode;
field199: TfieldNode;
field200: TfieldNode;
field201: TfieldNode;
field202: TfieldNode;
field203: TfieldNode;
field204: TfieldNode;
field205: TfieldNode;
field206: TfieldNode;
field207: TfieldNode;
field208: TfieldNode;
field209: TfieldNode;
field210: TfieldNode;
field211: TfieldNode;
field212: TfieldNode;
field213: TfieldNode;
field214: TfieldNode;
field215: TfieldNode;
field216: TfieldNode;
field217: TfieldNode;
field218: TfieldNode;
field219: TfieldNode;
field220: TfieldNode;
field221: TfieldNode;
field222: TfieldNode;
field223: TfieldNode;
field224: TfieldNode;
field225: TfieldNode;
field226: TfieldNode;
field227: TfieldNode;
field228: TfieldNode;
field229: TfieldNode;
field230: TfieldNode;
field231: TfieldNode;
field232: TfieldNode;
field233: TfieldNode;
field234: TfieldNode;
field235: TfieldNode;
field236: TfieldNode;
field237: TfieldNode;
field238: TfieldNode;
field239: TfieldNode;
field240: TfieldNode;
field241: TfieldNode;
field242: TfieldNode;
field243: TfieldNode;
field244: TfieldNode;
field245: TfieldNode;
field246: TfieldNode;
field247: TfieldNode;
field248: TfieldNode;
field249: TfieldNode;
field250: TfieldNode;
field251: TfieldNode;
field252: TfieldNode;
field253: TfieldNode;
field254: TfieldNode;
field255: TfieldNode;
field256: TfieldNode;
field257: TfieldNode;
field258: TfieldNode;
field259: TfieldNode;
field260: TfieldNode;
field261: TfieldNode;
field262: TfieldNode;
field263: TfieldNode;
field264: TfieldNode;
field265: TfieldNode;
field266: TfieldNode;
field267: TfieldNode;
field268: TfieldNode;
field269: TfieldNode;
field270: TfieldNode;
field271: TfieldNode;
field272: TfieldNode;
field273: TfieldNode;
field274: TfieldNode;
field275: TfieldNode;
field276: TfieldNode;
field277: TfieldNode;
field278: TfieldNode;
field279: TfieldNode;
field280: TfieldNode;
field281: TfieldNode;
field282: TfieldNode;
field283: TfieldNode;
field284: TfieldNode;
field285: TfieldNode;
field286: TfieldNode;
field287: TfieldNode;
field288: TfieldNode;
field289: TfieldNode;
field290: TfieldNode;
field291: TfieldNode;
field292: TfieldNode;
field293: TfieldNode;
field294: TfieldNode;
field295: TfieldNode;
field296: TfieldNode;
field297: TfieldNode;
field298: TfieldNode;
field299: TfieldNode;
field300: TfieldNode;
field301: TfieldNode;
field302: TfieldNode;
field303: TfieldNode;
field304: TfieldNode;
field305: TfieldNode;
field306: TfieldNode;
field307: TfieldNode;
field308: TfieldNode;
field309: TfieldNode;
field310: TfieldNode;
field311: TfieldNode;
field312: TfieldNode;
field313: TfieldNode;
field314: TfieldNode;
field315: TfieldNode;
field316: TfieldNode;
field317: TfieldNode;
field318: TfieldNode;
field319: TfieldNode;
field320: TfieldNode;
field321: TfieldNode;
field322: TfieldNode;
field323: TfieldNode;
field324: TfieldNode;
field325: TfieldNode;
field326: TfieldNode;
field327: TfieldNode;
field328: TfieldNode;
field329: TfieldNode;
field330: TfieldNode;
field331: TfieldNode;
field332: TfieldNode;
field333: TfieldNode;
field334: TfieldNode;
field335: TfieldNode;
field336: TfieldNode;
field337: TfieldNode;
field338: TfieldNode;
field339: TfieldNode;
field340: TfieldNode;
field341: TfieldNode;
field342: TfieldNode;
field343: TfieldNode;
field344: TfieldNode;
field345: TfieldNode;
field346: TfieldNode;
field347: TfieldNode;
field348: TfieldNode;
field349: TfieldNode;
field350: TfieldNode;
field351: TfieldNode;
field352: TfieldNode;
field353: TfieldNode;
field354: TfieldNode;
field355: TfieldNode;
field356: TfieldNode;
field357: TfieldNode;
field358: TfieldNode;
field359: TfieldNode;
field360: TfieldNode;
field361: TfieldNode;
field362: TfieldNode;
field363: TfieldNode;
field364: TfieldNode;
field365: TfieldNode;
field366: TfieldNode;
field367: TfieldNode;
field368: TfieldNode;
field369: TfieldNode;
field370: TfieldNode;
field371: TfieldNode;
field372: TfieldNode;
field373: TfieldNode;
field374: TfieldNode;
field375: TfieldNode;
field376: TfieldNode;
field377: TfieldNode;
field378: TfieldNode;
field379: TfieldNode;
field380: TfieldNode;
field381: TfieldNode;
field382: TfieldNode;
field383: TfieldNode;
field384: TfieldNode;
field385: TfieldNode;
field386: TfieldNode;
field387: TfieldNode;
field388: TfieldNode;
field389: TfieldNode;
field390: TfieldNode;
field391: TfieldNode;
field392: TfieldNode;
field393: TfieldNode;
field394: TfieldNode;
field395: TfieldNode;
field396: TfieldNode;
field397: TfieldNode;
field398: TfieldNode;
field399: TfieldNode;
field400: TfieldNode;
field401: TfieldNode;
field402: TfieldNode;
field403: TfieldNode;
field404: TfieldNode;
field405: TfieldNode;
field406: TfieldNode;
field407: TfieldNode;
field408: TfieldNode;
field409: TfieldNode;
field410: TfieldNode;
field411: TfieldNode;
field412: TfieldNode;
field413: TfieldNode;
field414: TfieldNode;
field415: TfieldNode;
field416: TfieldNode;
field417: TfieldNode;
field418: TfieldNode;
field419: TfieldNode;
field420: TfieldNode;
field421: TfieldNode;
field422: TfieldNode;
field423: TfieldNode;
field424: TfieldNode;
field425: TfieldNode;
field426: TfieldNode;
field427: TfieldNode;
field428: TfieldNode;
field429: TfieldNode;
field430: TfieldNode;
field431: TfieldNode;
field432: TfieldNode;
field433: TfieldNode;
field434: TfieldNode;
field435: TfieldNode;
field436: TfieldNode;
field437: TfieldNode;
field438: TfieldNode;
field439: TfieldNode;
field440: TfieldNode;
field441: TfieldNode;
field442: TfieldNode;
field443: TfieldNode;
field444: TfieldNode;
field445: TfieldNode;
field446: TfieldNode;
field447: TfieldNode;
field448: TfieldNode;
field449: TfieldNode;
field450: TfieldNode;
field451: TfieldNode;
field452: TfieldNode;
field453: TfieldNode;
field454: TfieldNode;
field455: TfieldNode;
field456: TfieldNode;
field457: TfieldNode;
field458: TfieldNode;
field459: TfieldNode;
field460: TfieldNode;
field461: TfieldNode;
field462: TfieldNode;
field463: TfieldNode;
field464: TfieldNode;
field465: TfieldNode;
field466: TfieldNode;
field467: TfieldNode;
field468: TfieldNode;
field469: TfieldNode;
field470: TfieldNode;
field471: TfieldNode;
field472: TfieldNode;
field473: TfieldNode;
field474: TfieldNode;
field475: TfieldNode;
field476: TfieldNode;
field477: TfieldNode;
field478: TfieldNode;
field479: TfieldNode;
field480: TfieldNode;
field481: TfieldNode;
field482: TfieldNode;
field483: TfieldNode;
field484: TfieldNode;
field485: TfieldNode;
field486: TfieldNode;
field487: TfieldNode;
field488: TfieldNode;
field489: TfieldNode;
field490: TfieldNode;
field491: TfieldNode;
field492: TfieldNode;
field493: TfieldNode;
field494: TfieldNode;
field495: TfieldNode;
field496: TfieldNode;
field497: TfieldNode;
field498: TfieldNode;
field499: TfieldNode;
field500: TfieldNode;
field501: TfieldNode;
field502: TfieldNode;
field503: TfieldNode;
field504: TfieldNode;
field505: TfieldNode;
field506: TfieldNode;
field507: TfieldNode;
field508: TfieldNode;
field509: TfieldNode;
field510: TfieldNode;
field511: TfieldNode;
field512: TfieldNode;
field513: TfieldNode;
field514: TfieldNode;
field515: TfieldNode;
field516: TfieldNode;
field517: TfieldNode;
field518: TfieldNode;
field519: TfieldNode;
field520: TfieldNode;
field521: TfieldNode;
field522: TfieldNode;
field523: TfieldNode;
field524: TfieldNode;
field525: TfieldNode;
field526: TfieldNode;
field527: TfieldNode;
field528: TfieldNode;
field529: TfieldNode;
field530: TfieldNode;
field531: TfieldNode;
field532: TfieldNode;
field533: TfieldNode;
field534: TfieldNode;
field535: TfieldNode;
field536: TfieldNode;
field537: TfieldNode;
field538: TfieldNode;
field539: TfieldNode;
field540: TfieldNode;
field541: TfieldNode;
field542: TfieldNode;
field543: TfieldNode;
field544: TfieldNode;
field545: TfieldNode;
field546: TfieldNode;
field547: TfieldNode;
field548: TfieldNode;
field549: TfieldNode;
field550: TfieldNode;
field551: TfieldNode;
field552: TfieldNode;
field553: TfieldNode;
field554: TfieldNode;
field555: TfieldNode;
field556: TfieldNode;
field557: TfieldNode;
field558: TfieldNode;
field559: TfieldNode;
field560: TfieldNode;
field561: TfieldNode;
field562: TfieldNode;
field563: TfieldNode;
field564: TfieldNode;
field565: TfieldNode;
field566: TfieldNode;
field567: TfieldNode;
field568: TfieldNode;
field569: TfieldNode;
field570: TfieldNode;
field571: TfieldNode;
field572: TfieldNode;
field573: TfieldNode;
field574: TfieldNode;
field575: TfieldNode;
field576: TfieldNode;
field577: TfieldNode;
field578: TfieldNode;
field579: TfieldNode;
field580: TfieldNode;
field581: TfieldNode;
field582: TfieldNode;
field583: TfieldNode;
field584: TfieldNode;
field585: TfieldNode;
field586: TfieldNode;
field587: TfieldNode;
field588: TfieldNode;
field589: TfieldNode;
field590: TfieldNode;
field591: TfieldNode;
field592: TfieldNode;
field593: TfieldNode;
field594: TfieldNode;
field595: TfieldNode;
field596: TfieldNode;
field597: TfieldNode;
field598: TfieldNode;
field599: TfieldNode;
field600: TfieldNode;
field601: TfieldNode;
field602: TfieldNode;
ProtoBody603: TProtoBodyNode;
TimeSensor604: TTimeSensorNode;
IS605: TISNode;
connect606: TconnectNode;
connect607: TconnectNode;
connect608: TconnectNode;
connect609: TconnectNode;
connect610: TconnectNode;
connect611: TconnectNode;
connect612: TconnectNode;
connect613: TconnectNode;
connect614: TconnectNode;
connect615: TconnectNode;
connect616: TconnectNode;
connect617: TconnectNode;
connect618: TconnectNode;
Switch619: TSwitchNode;
IS620: TISNode;
connect621: TconnectNode;
PositionInterpolator622: TPositionInterpolatorNode;
IS623: TISNode;
connect624: TconnectNode;
connect625: TconnectNode;
connect626: TconnectNode;
OrientationInterpolator628: TOrientationInterpolatorNode;
IS629: TISNode;
connect630: TconnectNode;
connect631: TconnectNode;
connect632: TconnectNode;
OrientationInterpolator634: TOrientationInterpolatorNode;
IS635: TISNode;
connect636: TconnectNode;
connect637: TconnectNode;
connect638: TconnectNode;
OrientationInterpolator640: TOrientationInterpolatorNode;
IS641: TISNode;
connect642: TconnectNode;
connect643: TconnectNode;
connect644: TconnectNode;
OrientationInterpolator646: TOrientationInterpolatorNode;
IS647: TISNode;
connect648: TconnectNode;
connect649: TconnectNode;
connect650: TconnectNode;
OrientationInterpolator652: TOrientationInterpolatorNode;
IS653: TISNode;
connect654: TconnectNode;
connect655: TconnectNode;
connect656: TconnectNode;
OrientationInterpolator658: TOrientationInterpolatorNode;
IS659: TISNode;
connect660: TconnectNode;
connect661: TconnectNode;
connect662: TconnectNode;
OrientationInterpolator664: TOrientationInterpolatorNode;
IS665: TISNode;
connect666: TconnectNode;
connect667: TconnectNode;
connect668: TconnectNode;
OrientationInterpolator670: TOrientationInterpolatorNode;
IS671: TISNode;
connect672: TconnectNode;
connect673: TconnectNode;
connect674: TconnectNode;
OrientationInterpolator676: TOrientationInterpolatorNode;
IS677: TISNode;
connect678: TconnectNode;
connect679: TconnectNode;
connect680: TconnectNode;
OrientationInterpolator682: TOrientationInterpolatorNode;
IS683: TISNode;
connect684: TconnectNode;
connect685: TconnectNode;
connect686: TconnectNode;
OrientationInterpolator688: TOrientationInterpolatorNode;
IS689: TISNode;
connect690: TconnectNode;
connect691: TconnectNode;
connect692: TconnectNode;
OrientationInterpolator694: TOrientationInterpolatorNode;
IS695: TISNode;
connect696: TconnectNode;
connect697: TconnectNode;
connect698: TconnectNode;
OrientationInterpolator700: TOrientationInterpolatorNode;
IS701: TISNode;
connect702: TconnectNode;
connect703: TconnectNode;
connect704: TconnectNode;
OrientationInterpolator706: TOrientationInterpolatorNode;
IS707: TISNode;
connect708: TconnectNode;
connect709: TconnectNode;
connect710: TconnectNode;
OrientationInterpolator712: TOrientationInterpolatorNode;
IS713: TISNode;
connect714: TconnectNode;
connect715: TconnectNode;
connect716: TconnectNode;
OrientationInterpolator718: TOrientationInterpolatorNode;
IS719: TISNode;
connect720: TconnectNode;
connect721: TconnectNode;
connect722: TconnectNode;
OrientationInterpolator724: TOrientationInterpolatorNode;
IS725: TISNode;
connect726: TconnectNode;
connect727: TconnectNode;
connect728: TconnectNode;
OrientationInterpolator730: TOrientationInterpolatorNode;
IS731: TISNode;
connect732: TconnectNode;
connect733: TconnectNode;
connect734: TconnectNode;
OrientationInterpolator736: TOrientationInterpolatorNode;
IS737: TISNode;
connect738: TconnectNode;
connect739: TconnectNode;
connect740: TconnectNode;
OrientationInterpolator742: TOrientationInterpolatorNode;
IS743: TISNode;
connect744: TconnectNode;
connect745: TconnectNode;
connect746: TconnectNode;
OrientationInterpolator748: TOrientationInterpolatorNode;
IS749: TISNode;
connect750: TconnectNode;
connect751: TconnectNode;
connect752: TconnectNode;
OrientationInterpolator754: TOrientationInterpolatorNode;
IS755: TISNode;
connect756: TconnectNode;
connect757: TconnectNode;
connect758: TconnectNode;
OrientationInterpolator760: TOrientationInterpolatorNode;
IS761: TISNode;
connect762: TconnectNode;
connect763: TconnectNode;
connect764: TconnectNode;
OrientationInterpolator766: TOrientationInterpolatorNode;
IS767: TISNode;
connect768: TconnectNode;
connect769: TconnectNode;
connect770: TconnectNode;
OrientationInterpolator772: TOrientationInterpolatorNode;
IS773: TISNode;
connect774: TconnectNode;
connect775: TconnectNode;
connect776: TconnectNode;
OrientationInterpolator778: TOrientationInterpolatorNode;
IS779: TISNode;
connect780: TconnectNode;
connect781: TconnectNode;
connect782: TconnectNode;
OrientationInterpolator784: TOrientationInterpolatorNode;
IS785: TISNode;
connect786: TconnectNode;
connect787: TconnectNode;
connect788: TconnectNode;
OrientationInterpolator790: TOrientationInterpolatorNode;
IS791: TISNode;
connect792: TconnectNode;
connect793: TconnectNode;
connect794: TconnectNode;
OrientationInterpolator796: TOrientationInterpolatorNode;
IS797: TISNode;
connect798: TconnectNode;
connect799: TconnectNode;
connect800: TconnectNode;
OrientationInterpolator802: TOrientationInterpolatorNode;
IS803: TISNode;
connect804: TconnectNode;
connect805: TconnectNode;
connect806: TconnectNode;
OrientationInterpolator808: TOrientationInterpolatorNode;
IS809: TISNode;
connect810: TconnectNode;
connect811: TconnectNode;
connect812: TconnectNode;
OrientationInterpolator814: TOrientationInterpolatorNode;
IS815: TISNode;
connect816: TconnectNode;
connect817: TconnectNode;
connect818: TconnectNode;
OrientationInterpolator820: TOrientationInterpolatorNode;
IS821: TISNode;
connect822: TconnectNode;
connect823: TconnectNode;
connect824: TconnectNode;
OrientationInterpolator826: TOrientationInterpolatorNode;
IS827: TISNode;
connect828: TconnectNode;
connect829: TconnectNode;
connect830: TconnectNode;
OrientationInterpolator832: TOrientationInterpolatorNode;
IS833: TISNode;
connect834: TconnectNode;
connect835: TconnectNode;
connect836: TconnectNode;
OrientationInterpolator838: TOrientationInterpolatorNode;
IS839: TISNode;
connect840: TconnectNode;
connect841: TconnectNode;
connect842: TconnectNode;
OrientationInterpolator844: TOrientationInterpolatorNode;
IS845: TISNode;
connect846: TconnectNode;
connect847: TconnectNode;
connect848: TconnectNode;
OrientationInterpolator850: TOrientationInterpolatorNode;
IS851: TISNode;
connect852: TconnectNode;
connect853: TconnectNode;
connect854: TconnectNode;
OrientationInterpolator856: TOrientationInterpolatorNode;
IS857: TISNode;
connect858: TconnectNode;
connect859: TconnectNode;
connect860: TconnectNode;
OrientationInterpolator862: TOrientationInterpolatorNode;
IS863: TISNode;
connect864: TconnectNode;
connect865: TconnectNode;
connect866: TconnectNode;
OrientationInterpolator868: TOrientationInterpolatorNode;
IS869: TISNode;
connect870: TconnectNode;
connect871: TconnectNode;
connect872: TconnectNode;
OrientationInterpolator874: TOrientationInterpolatorNode;
IS875: TISNode;
connect876: TconnectNode;
connect877: TconnectNode;
connect878: TconnectNode;
OrientationInterpolator880: TOrientationInterpolatorNode;
IS881: TISNode;
connect882: TconnectNode;
connect883: TconnectNode;
connect884: TconnectNode;
OrientationInterpolator886: TOrientationInterpolatorNode;
IS887: TISNode;
connect888: TconnectNode;
connect889: TconnectNode;
connect890: TconnectNode;
OrientationInterpolator892: TOrientationInterpolatorNode;
IS893: TISNode;
connect894: TconnectNode;
connect895: TconnectNode;
connect896: TconnectNode;
OrientationInterpolator898: TOrientationInterpolatorNode;
IS899: TISNode;
connect900: TconnectNode;
connect901: TconnectNode;
connect902: TconnectNode;
OrientationInterpolator904: TOrientationInterpolatorNode;
IS905: TISNode;
connect906: TconnectNode;
connect907: TconnectNode;
connect908: TconnectNode;
OrientationInterpolator910: TOrientationInterpolatorNode;
IS911: TISNode;
connect912: TconnectNode;
connect913: TconnectNode;
connect914: TconnectNode;
OrientationInterpolator916: TOrientationInterpolatorNode;
IS917: TISNode;
connect918: TconnectNode;
connect919: TconnectNode;
connect920: TconnectNode;
OrientationInterpolator922: TOrientationInterpolatorNode;
IS923: TISNode;
connect924: TconnectNode;
connect925: TconnectNode;
connect926: TconnectNode;
OrientationInterpolator928: TOrientationInterpolatorNode;
IS929: TISNode;
connect930: TconnectNode;
connect931: TconnectNode;
connect932: TconnectNode;
OrientationInterpolator934: TOrientationInterpolatorNode;
IS935: TISNode;
connect936: TconnectNode;
connect937: TconnectNode;
connect938: TconnectNode;
OrientationInterpolator940: TOrientationInterpolatorNode;
IS941: TISNode;
connect942: TconnectNode;
connect943: TconnectNode;
connect944: TconnectNode;
OrientationInterpolator946: TOrientationInterpolatorNode;
IS947: TISNode;
connect948: TconnectNode;
connect949: TconnectNode;
connect950: TconnectNode;
OrientationInterpolator952: TOrientationInterpolatorNode;
IS953: TISNode;
connect954: TconnectNode;
connect955: TconnectNode;
connect956: TconnectNode;
OrientationInterpolator958: TOrientationInterpolatorNode;
IS959: TISNode;
connect960: TconnectNode;
connect961: TconnectNode;
connect962: TconnectNode;
OrientationInterpolator964: TOrientationInterpolatorNode;
IS965: TISNode;
connect966: TconnectNode;
connect967: TconnectNode;
connect968: TconnectNode;
OrientationInterpolator970: TOrientationInterpolatorNode;
IS971: TISNode;
connect972: TconnectNode;
connect973: TconnectNode;
connect974: TconnectNode;
OrientationInterpolator976: TOrientationInterpolatorNode;
IS977: TISNode;
connect978: TconnectNode;
connect979: TconnectNode;
connect980: TconnectNode;
OrientationInterpolator982: TOrientationInterpolatorNode;
IS983: TISNode;
connect984: TconnectNode;
connect985: TconnectNode;
connect986: TconnectNode;
OrientationInterpolator988: TOrientationInterpolatorNode;
IS989: TISNode;
connect990: TconnectNode;
connect991: TconnectNode;
connect992: TconnectNode;
OrientationInterpolator994: TOrientationInterpolatorNode;
IS995: TISNode;
connect996: TconnectNode;
connect997: TconnectNode;
connect998: TconnectNode;
OrientationInterpolator1000: TOrientationInterpolatorNode;
IS1001: TISNode;
connect1002: TconnectNode;
connect1003: TconnectNode;
connect1004: TconnectNode;
OrientationInterpolator1006: TOrientationInterpolatorNode;
IS1007: TISNode;
connect1008: TconnectNode;
connect1009: TconnectNode;
connect1010: TconnectNode;
OrientationInterpolator1012: TOrientationInterpolatorNode;
IS1013: TISNode;
connect1014: TconnectNode;
connect1015: TconnectNode;
connect1016: TconnectNode;
OrientationInterpolator1018: TOrientationInterpolatorNode;
IS1019: TISNode;
connect1020: TconnectNode;
connect1021: TconnectNode;
connect1022: TconnectNode;
OrientationInterpolator1024: TOrientationInterpolatorNode;
IS1025: TISNode;
connect1026: TconnectNode;
connect1027: TconnectNode;
connect1028: TconnectNode;
OrientationInterpolator1030: TOrientationInterpolatorNode;
IS1031: TISNode;
connect1032: TconnectNode;
connect1033: TconnectNode;
connect1034: TconnectNode;
OrientationInterpolator1036: TOrientationInterpolatorNode;
IS1037: TISNode;
connect1038: TconnectNode;
connect1039: TconnectNode;
connect1040: TconnectNode;
OrientationInterpolator1042: TOrientationInterpolatorNode;
IS1043: TISNode;
connect1044: TconnectNode;
connect1045: TconnectNode;
connect1046: TconnectNode;
OrientationInterpolator1048: TOrientationInterpolatorNode;
IS1049: TISNode;
connect1050: TconnectNode;
connect1051: TconnectNode;
connect1052: TconnectNode;
OrientationInterpolator1054: TOrientationInterpolatorNode;
IS1055: TISNode;
connect1056: TconnectNode;
connect1057: TconnectNode;
connect1058: TconnectNode;
OrientationInterpolator1060: TOrientationInterpolatorNode;
IS1061: TISNode;
connect1062: TconnectNode;
connect1063: TconnectNode;
connect1064: TconnectNode;
OrientationInterpolator1066: TOrientationInterpolatorNode;
IS1067: TISNode;
connect1068: TconnectNode;
connect1069: TconnectNode;
connect1070: TconnectNode;
OrientationInterpolator1072: TOrientationInterpolatorNode;
IS1073: TISNode;
connect1074: TconnectNode;
connect1075: TconnectNode;
connect1076: TconnectNode;
OrientationInterpolator1078: TOrientationInterpolatorNode;
IS1079: TISNode;
connect1080: TconnectNode;
connect1081: TconnectNode;
connect1082: TconnectNode;
OrientationInterpolator1084: TOrientationInterpolatorNode;
IS1085: TISNode;
connect1086: TconnectNode;
connect1087: TconnectNode;
connect1088: TconnectNode;
OrientationInterpolator1090: TOrientationInterpolatorNode;
IS1091: TISNode;
connect1092: TconnectNode;
connect1093: TconnectNode;
connect1094: TconnectNode;
OrientationInterpolator1096: TOrientationInterpolatorNode;
IS1097: TISNode;
connect1098: TconnectNode;
connect1099: TconnectNode;
connect1100: TconnectNode;
OrientationInterpolator1102: TOrientationInterpolatorNode;
IS1103: TISNode;
connect1104: TconnectNode;
connect1105: TconnectNode;
connect1106: TconnectNode;
OrientationInterpolator1108: TOrientationInterpolatorNode;
IS1109: TISNode;
connect1110: TconnectNode;
connect1111: TconnectNode;
connect1112: TconnectNode;
OrientationInterpolator1114: TOrientationInterpolatorNode;
IS1115: TISNode;
connect1116: TconnectNode;
connect1117: TconnectNode;
connect1118: TconnectNode;
OrientationInterpolator1120: TOrientationInterpolatorNode;
IS1121: TISNode;
connect1122: TconnectNode;
connect1123: TconnectNode;
connect1124: TconnectNode;
OrientationInterpolator1126: TOrientationInterpolatorNode;
IS1127: TISNode;
connect1128: TconnectNode;
connect1129: TconnectNode;
connect1130: TconnectNode;
OrientationInterpolator1132: TOrientationInterpolatorNode;
IS1133: TISNode;
connect1134: TconnectNode;
connect1135: TconnectNode;
connect1136: TconnectNode;
OrientationInterpolator1138: TOrientationInterpolatorNode;
IS1139: TISNode;
connect1140: TconnectNode;
connect1141: TconnectNode;
connect1142: TconnectNode;
OrientationInterpolator1144: TOrientationInterpolatorNode;
IS1145: TISNode;
connect1146: TconnectNode;
connect1147: TconnectNode;
connect1148: TconnectNode;
OrientationInterpolator1150: TOrientationInterpolatorNode;
IS1151: TISNode;
connect1152: TconnectNode;
connect1153: TconnectNode;
connect1154: TconnectNode;
OrientationInterpolator1156: TOrientationInterpolatorNode;
IS1157: TISNode;
connect1158: TconnectNode;
connect1159: TconnectNode;
connect1160: TconnectNode;
OrientationInterpolator1162: TOrientationInterpolatorNode;
IS1163: TISNode;
connect1164: TconnectNode;
connect1165: TconnectNode;
connect1166: TconnectNode;
OrientationInterpolator1168: TOrientationInterpolatorNode;
IS1169: TISNode;
connect1170: TconnectNode;
connect1171: TconnectNode;
connect1172: TconnectNode;
OrientationInterpolator1174: TOrientationInterpolatorNode;
IS1175: TISNode;
connect1176: TconnectNode;
connect1177: TconnectNode;
connect1178: TconnectNode;
OrientationInterpolator1180: TOrientationInterpolatorNode;
IS1181: TISNode;
connect1182: TconnectNode;
connect1183: TconnectNode;
connect1184: TconnectNode;
OrientationInterpolator1186: TOrientationInterpolatorNode;
IS1187: TISNode;
connect1188: TconnectNode;
connect1189: TconnectNode;
connect1190: TconnectNode;
OrientationInterpolator1192: TOrientationInterpolatorNode;
IS1193: TISNode;
connect1194: TconnectNode;
connect1195: TconnectNode;
connect1196: TconnectNode;
OrientationInterpolator1198: TOrientationInterpolatorNode;
IS1199: TISNode;
connect1200: TconnectNode;
connect1201: TconnectNode;
connect1202: TconnectNode;
OrientationInterpolator1204: TOrientationInterpolatorNode;
IS1205: TISNode;
connect1206: TconnectNode;
connect1207: TconnectNode;
connect1208: TconnectNode;
OrientationInterpolator1210: TOrientationInterpolatorNode;
IS1211: TISNode;
connect1212: TconnectNode;
connect1213: TconnectNode;
connect1214: TconnectNode;
OrientationInterpolator1216: TOrientationInterpolatorNode;
IS1217: TISNode;
connect1218: TconnectNode;
connect1219: TconnectNode;
connect1220: TconnectNode;
OrientationInterpolator1222: TOrientationInterpolatorNode;
IS1223: TISNode;
connect1224: TconnectNode;
connect1225: TconnectNode;
connect1226: TconnectNode;
OrientationInterpolator1228: TOrientationInterpolatorNode;
IS1229: TISNode;
connect1230: TconnectNode;
connect1231: TconnectNode;
connect1232: TconnectNode;
OrientationInterpolator1234: TOrientationInterpolatorNode;
IS1235: TISNode;
connect1236: TconnectNode;
connect1237: TconnectNode;
connect1238: TconnectNode;
OrientationInterpolator1240: TOrientationInterpolatorNode;
IS1241: TISNode;
connect1242: TconnectNode;
connect1243: TconnectNode;
connect1244: TconnectNode;
OrientationInterpolator1246: TOrientationInterpolatorNode;
IS1247: TISNode;
connect1248: TconnectNode;
connect1249: TconnectNode;
connect1250: TconnectNode;
OrientationInterpolator1252: TOrientationInterpolatorNode;
IS1253: TISNode;
connect1254: TconnectNode;
connect1255: TconnectNode;
connect1256: TconnectNode;
OrientationInterpolator1258: TOrientationInterpolatorNode;
IS1259: TISNode;
connect1260: TconnectNode;
connect1261: TconnectNode;
connect1262: TconnectNode;
OrientationInterpolator1264: TOrientationInterpolatorNode;
IS1265: TISNode;
connect1266: TconnectNode;
connect1267: TconnectNode;
connect1268: TconnectNode;
OrientationInterpolator1270: TOrientationInterpolatorNode;
IS1271: TISNode;
connect1272: TconnectNode;
connect1273: TconnectNode;
connect1274: TconnectNode;
OrientationInterpolator1276: TOrientationInterpolatorNode;
IS1277: TISNode;
connect1278: TconnectNode;
connect1279: TconnectNode;
connect1280: TconnectNode;
OrientationInterpolator1282: TOrientationInterpolatorNode;
IS1283: TISNode;
connect1284: TconnectNode;
connect1285: TconnectNode;
connect1286: TconnectNode;
OrientationInterpolator1288: TOrientationInterpolatorNode;
IS1289: TISNode;
connect1290: TconnectNode;
connect1291: TconnectNode;
connect1292: TconnectNode;
OrientationInterpolator1294: TOrientationInterpolatorNode;
IS1295: TISNode;
connect1296: TconnectNode;
connect1297: TconnectNode;
connect1298: TconnectNode;
OrientationInterpolator1300: TOrientationInterpolatorNode;
IS1301: TISNode;
connect1302: TconnectNode;
connect1303: TconnectNode;
connect1304: TconnectNode;
OrientationInterpolator1306: TOrientationInterpolatorNode;
IS1307: TISNode;
connect1308: TconnectNode;
connect1309: TconnectNode;
connect1310: TconnectNode;
OrientationInterpolator1312: TOrientationInterpolatorNode;
IS1313: TISNode;
connect1314: TconnectNode;
connect1315: TconnectNode;
connect1316: TconnectNode;
OrientationInterpolator1318: TOrientationInterpolatorNode;
IS1319: TISNode;
connect1320: TconnectNode;
connect1321: TconnectNode;
connect1322: TconnectNode;
OrientationInterpolator1324: TOrientationInterpolatorNode;
IS1325: TISNode;
connect1326: TconnectNode;
connect1327: TconnectNode;
connect1328: TconnectNode;
OrientationInterpolator1330: TOrientationInterpolatorNode;
IS1331: TISNode;
connect1332: TconnectNode;
connect1333: TconnectNode;
connect1334: TconnectNode;
OrientationInterpolator1336: TOrientationInterpolatorNode;
IS1337: TISNode;
connect1338: TconnectNode;
connect1339: TconnectNode;
connect1340: TconnectNode;
OrientationInterpolator1342: TOrientationInterpolatorNode;
IS1343: TISNode;
connect1344: TconnectNode;
connect1345: TconnectNode;
connect1346: TconnectNode;
OrientationInterpolator1348: TOrientationInterpolatorNode;
IS1349: TISNode;
connect1350: TconnectNode;
connect1351: TconnectNode;
connect1352: TconnectNode;
OrientationInterpolator1354: TOrientationInterpolatorNode;
IS1355: TISNode;
connect1356: TconnectNode;
connect1357: TconnectNode;
connect1358: TconnectNode;
OrientationInterpolator1360: TOrientationInterpolatorNode;
IS1361: TISNode;
connect1362: TconnectNode;
connect1363: TconnectNode;
connect1364: TconnectNode;
OrientationInterpolator1366: TOrientationInterpolatorNode;
IS1367: TISNode;
connect1368: TconnectNode;
connect1369: TconnectNode;
connect1370: TconnectNode;
OrientationInterpolator1372: TOrientationInterpolatorNode;
IS1373: TISNode;
connect1374: TconnectNode;
connect1375: TconnectNode;
connect1376: TconnectNode;
OrientationInterpolator1378: TOrientationInterpolatorNode;
IS1379: TISNode;
connect1380: TconnectNode;
connect1381: TconnectNode;
connect1382: TconnectNode;
OrientationInterpolator1384: TOrientationInterpolatorNode;
IS1385: TISNode;
connect1386: TconnectNode;
connect1387: TconnectNode;
connect1388: TconnectNode;
OrientationInterpolator1390: TOrientationInterpolatorNode;
IS1391: TISNode;
connect1392: TconnectNode;
connect1393: TconnectNode;
connect1394: TconnectNode;
OrientationInterpolator1396: TOrientationInterpolatorNode;
IS1397: TISNode;
connect1398: TconnectNode;
connect1399: TconnectNode;
connect1400: TconnectNode;
OrientationInterpolator1402: TOrientationInterpolatorNode;
IS1403: TISNode;
connect1404: TconnectNode;
connect1405: TconnectNode;
connect1406: TconnectNode;
OrientationInterpolator1408: TOrientationInterpolatorNode;
IS1409: TISNode;
connect1410: TconnectNode;
connect1411: TconnectNode;
connect1412: TconnectNode;
OrientationInterpolator1414: TOrientationInterpolatorNode;
IS1415: TISNode;
connect1416: TconnectNode;
connect1417: TconnectNode;
connect1418: TconnectNode;
OrientationInterpolator1420: TOrientationInterpolatorNode;
IS1421: TISNode;
connect1422: TconnectNode;
connect1423: TconnectNode;
connect1424: TconnectNode;
OrientationInterpolator1426: TOrientationInterpolatorNode;
IS1427: TISNode;
connect1428: TconnectNode;
connect1429: TconnectNode;
connect1430: TconnectNode;
OrientationInterpolator1432: TOrientationInterpolatorNode;
IS1433: TISNode;
connect1434: TconnectNode;
connect1435: TconnectNode;
connect1436: TconnectNode;
OrientationInterpolator1438: TOrientationInterpolatorNode;
IS1439: TISNode;
connect1440: TconnectNode;
connect1441: TconnectNode;
connect1442: TconnectNode;
OrientationInterpolator1444: TOrientationInterpolatorNode;
IS1445: TISNode;
connect1446: TconnectNode;
connect1447: TconnectNode;
connect1448: TconnectNode;
OrientationInterpolator1450: TOrientationInterpolatorNode;
IS1451: TISNode;
connect1452: TconnectNode;
connect1453: TconnectNode;
connect1454: TconnectNode;
OrientationInterpolator1456: TOrientationInterpolatorNode;
IS1457: TISNode;
connect1458: TconnectNode;
connect1459: TconnectNode;
connect1460: TconnectNode;
OrientationInterpolator1462: TOrientationInterpolatorNode;
IS1463: TISNode;
connect1464: TconnectNode;
connect1465: TconnectNode;
connect1466: TconnectNode;
OrientationInterpolator1468: TOrientationInterpolatorNode;
IS1469: TISNode;
connect1470: TconnectNode;
connect1471: TconnectNode;
connect1472: TconnectNode;
OrientationInterpolator1474: TOrientationInterpolatorNode;
IS1475: TISNode;
connect1476: TconnectNode;
connect1477: TconnectNode;
connect1478: TconnectNode;
OrientationInterpolator1480: TOrientationInterpolatorNode;
IS1481: TISNode;
connect1482: TconnectNode;
connect1483: TconnectNode;
connect1484: TconnectNode;
OrientationInterpolator1486: TOrientationInterpolatorNode;
IS1487: TISNode;
connect1488: TconnectNode;
connect1489: TconnectNode;
connect1490: TconnectNode;
OrientationInterpolator1492: TOrientationInterpolatorNode;
IS1493: TISNode;
connect1494: TconnectNode;
connect1495: TconnectNode;
connect1496: TconnectNode;
OrientationInterpolator1498: TOrientationInterpolatorNode;
IS1499: TISNode;
connect1500: TconnectNode;
connect1501: TconnectNode;
connect1502: TconnectNode;
OrientationInterpolator1504: TOrientationInterpolatorNode;
IS1505: TISNode;
connect1506: TconnectNode;
connect1507: TconnectNode;
connect1508: TconnectNode;
OrientationInterpolator1510: TOrientationInterpolatorNode;
IS1511: TISNode;
connect1512: TconnectNode;
connect1513: TconnectNode;
connect1514: TconnectNode;
OrientationInterpolator1516: TOrientationInterpolatorNode;
IS1517: TISNode;
connect1518: TconnectNode;
connect1519: TconnectNode;
connect1520: TconnectNode;
OrientationInterpolator1522: TOrientationInterpolatorNode;
IS1523: TISNode;
connect1524: TconnectNode;
connect1525: TconnectNode;
connect1526: TconnectNode;
OrientationInterpolator1528: TOrientationInterpolatorNode;
IS1529: TISNode;
connect1530: TconnectNode;
connect1531: TconnectNode;
connect1532: TconnectNode;
OrientationInterpolator1534: TOrientationInterpolatorNode;
IS1535: TISNode;
connect1536: TconnectNode;
connect1537: TconnectNode;
connect1538: TconnectNode;
OrientationInterpolator1540: TOrientationInterpolatorNode;
IS1541: TISNode;
connect1542: TconnectNode;
connect1543: TconnectNode;
connect1544: TconnectNode;
OrientationInterpolator1546: TOrientationInterpolatorNode;
IS1547: TISNode;
connect1548: TconnectNode;
connect1549: TconnectNode;
connect1550: TconnectNode;
OrientationInterpolator1552: TOrientationInterpolatorNode;
IS1553: TISNode;
connect1554: TconnectNode;
connect1555: TconnectNode;
connect1556: TconnectNode;
OrientationInterpolator1558: TOrientationInterpolatorNode;
IS1559: TISNode;
connect1560: TconnectNode;
connect1561: TconnectNode;
connect1562: TconnectNode;
OrientationInterpolator1564: TOrientationInterpolatorNode;
IS1565: TISNode;
connect1566: TconnectNode;
connect1567: TconnectNode;
connect1568: TconnectNode;
OrientationInterpolator1570: TOrientationInterpolatorNode;
IS1571: TISNode;
connect1572: TconnectNode;
connect1573: TconnectNode;
connect1574: TconnectNode;
OrientationInterpolator1576: TOrientationInterpolatorNode;
IS1577: TISNode;
connect1578: TconnectNode;
connect1579: TconnectNode;
connect1580: TconnectNode;
OrientationInterpolator1582: TOrientationInterpolatorNode;
IS1583: TISNode;
connect1584: TconnectNode;
connect1585: TconnectNode;
connect1586: TconnectNode;
OrientationInterpolator1588: TOrientationInterpolatorNode;
IS1589: TISNode;
connect1590: TconnectNode;
connect1591: TconnectNode;
connect1592: TconnectNode;
OrientationInterpolator1594: TOrientationInterpolatorNode;
IS1595: TISNode;
connect1596: TconnectNode;
connect1597: TconnectNode;
connect1598: TconnectNode;
OrientationInterpolator1600: TOrientationInterpolatorNode;
IS1601: TISNode;
connect1602: TconnectNode;
connect1603: TconnectNode;
connect1604: TconnectNode;
OrientationInterpolator1606: TOrientationInterpolatorNode;
IS1607: TISNode;
connect1608: TconnectNode;
connect1609: TconnectNode;
connect1610: TconnectNode;
OrientationInterpolator1612: TOrientationInterpolatorNode;
IS1613: TISNode;
connect1614: TconnectNode;
connect1615: TconnectNode;
connect1616: TconnectNode;
OrientationInterpolator1618: TOrientationInterpolatorNode;
IS1619: TISNode;
connect1620: TconnectNode;
connect1621: TconnectNode;
connect1622: TconnectNode;
OrientationInterpolator1624: TOrientationInterpolatorNode;
IS1625: TISNode;
connect1626: TconnectNode;
connect1627: TconnectNode;
connect1628: TconnectNode;
OrientationInterpolator1630: TOrientationInterpolatorNode;
IS1631: TISNode;
connect1632: TconnectNode;
connect1633: TconnectNode;
connect1634: TconnectNode;
OrientationInterpolator1636: TOrientationInterpolatorNode;
IS1637: TISNode;
connect1638: TconnectNode;
connect1639: TconnectNode;
connect1640: TconnectNode;
OrientationInterpolator1642: TOrientationInterpolatorNode;
IS1643: TISNode;
connect1644: TconnectNode;
connect1645: TconnectNode;
connect1646: TconnectNode;
OrientationInterpolator1648: TOrientationInterpolatorNode;
IS1649: TISNode;
connect1650: TconnectNode;
connect1651: TconnectNode;
connect1652: TconnectNode;
OrientationInterpolator1654: TOrientationInterpolatorNode;
IS1655: TISNode;
connect1656: TconnectNode;
connect1657: TconnectNode;
connect1658: TconnectNode;
OrientationInterpolator1660: TOrientationInterpolatorNode;
IS1661: TISNode;
connect1662: TconnectNode;
connect1663: TconnectNode;
connect1664: TconnectNode;
OrientationInterpolator1666: TOrientationInterpolatorNode;
IS1667: TISNode;
connect1668: TconnectNode;
connect1669: TconnectNode;
connect1670: TconnectNode;
OrientationInterpolator1672: TOrientationInterpolatorNode;
IS1673: TISNode;
connect1674: TconnectNode;
connect1675: TconnectNode;
connect1676: TconnectNode;
OrientationInterpolator1678: TOrientationInterpolatorNode;
IS1679: TISNode;
connect1680: TconnectNode;
connect1681: TconnectNode;
connect1682: TconnectNode;
OrientationInterpolator1684: TOrientationInterpolatorNode;
IS1685: TISNode;
connect1686: TconnectNode;
connect1687: TconnectNode;
connect1688: TconnectNode;
OrientationInterpolator1690: TOrientationInterpolatorNode;
IS1691: TISNode;
connect1692: TconnectNode;
connect1693: TconnectNode;
connect1694: TconnectNode;
OrientationInterpolator1696: TOrientationInterpolatorNode;
IS1697: TISNode;
connect1698: TconnectNode;
connect1699: TconnectNode;
connect1700: TconnectNode;
OrientationInterpolator1702: TOrientationInterpolatorNode;
IS1703: TISNode;
connect1704: TconnectNode;
connect1705: TconnectNode;
connect1706: TconnectNode;
OrientationInterpolator1708: TOrientationInterpolatorNode;
IS1709: TISNode;
connect1710: TconnectNode;
connect1711: TconnectNode;
connect1712: TconnectNode;
OrientationInterpolator1714: TOrientationInterpolatorNode;
IS1715: TISNode;
connect1716: TconnectNode;
connect1717: TconnectNode;
connect1718: TconnectNode;
OrientationInterpolator1720: TOrientationInterpolatorNode;
IS1721: TISNode;
connect1722: TconnectNode;
connect1723: TconnectNode;
connect1724: TconnectNode;
OrientationInterpolator1726: TOrientationInterpolatorNode;
IS1727: TISNode;
connect1728: TconnectNode;
connect1729: TconnectNode;
connect1730: TconnectNode;
OrientationInterpolator1732: TOrientationInterpolatorNode;
IS1733: TISNode;
connect1734: TconnectNode;
connect1735: TconnectNode;
connect1736: TconnectNode;
OrientationInterpolator1738: TOrientationInterpolatorNode;
IS1739: TISNode;
connect1740: TconnectNode;
connect1741: TconnectNode;
connect1742: TconnectNode;
OrientationInterpolator1744: TOrientationInterpolatorNode;
IS1745: TISNode;
connect1746: TconnectNode;
connect1747: TconnectNode;
connect1748: TconnectNode;
OrientationInterpolator1750: TOrientationInterpolatorNode;
IS1751: TISNode;
connect1752: TconnectNode;
connect1753: TconnectNode;
connect1754: TconnectNode;
ProtoDeclare1756: TProtoDeclareNode;
ProtoInterface1757: TProtoInterfaceNode;
field1758: TfieldNode;
field1759: TfieldNode;
field1760: TfieldNode;
field1761: TfieldNode;
field1762: TfieldNode;
field1763: TfieldNode;
field1764: TfieldNode;
field1765: TfieldNode;
field1766: TfieldNode;
field1767: TfieldNode;
field1768: TfieldNode;
ProtoBody1769: TProtoBodyNode;
Switch1770: TSwitchNode;
IS1771: TISNode;
connect1772: TconnectNode;
connect1773: TconnectNode;
Group1774: TGroupNode;
IS1775: TISNode;
connect1776: TconnectNode;
TimeSensor1777: TTimeSensorNode;
IS1778: TISNode;
connect1779: TconnectNode;
connect1780: TconnectNode;
Switch1781: TSwitchNode;
IS1782: TISNode;
connect1783: TconnectNode;
Script1784: TScriptNode;
field1785: TfieldNode;
field1786: TfieldNode;
field1787: TfieldNode;
field1788: TfieldNode;
field1789: TfieldNode;
field1790: TfieldNode;
field1791: TfieldNode;
field1792: TfieldNode;
field1793: TfieldNode;
TimeSensor1794: TTimeSensorNode;
field1795: TfieldNode;
field1796: TfieldNode;
IS1797: TISNode;
connect1798: TconnectNode;
connect1799: TconnectNode;
connect1800: TconnectNode;
connect1801: TconnectNode;
connect1802: TconnectNode;
connect1803: TconnectNode;
connect1804: TconnectNode;
connect1805: TconnectNode;
ProtoInstance1806: TProtoInstanceNode;
fieldValue1807: TfieldValueNode;
fieldValue1808: TfieldValueNode;
fieldValue1809: TfieldValueNode;
fieldValue1810: TfieldValueNode;
ProtoInstance1811: TProtoInstanceNode;
fieldValue1812: TfieldValueNode;
HAnimHumanoid1813: THAnimHumanoidNode;
fieldValue1814: TfieldValueNode;
fieldValue1815: TfieldValueNode;
ProtoInstance1816: TProtoInstanceNode;
fieldValue1817: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnimBehaviorPrototypes.x3d';
X3D0.Meta['description'] := 'Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.';
X3D0.Meta['creator'] := 'Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor';
X3D0.Meta['created'] := '2 May 2006';
X3D0.Meta['modified'] := '4 July 2020';
X3D0.Meta['reference'] := 'Web3D2007BlendedBehaviorsChangeableBodies.pdf';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html';
X3D0.Meta['reference'] := 'InterchangableActorsViaDynamicRoutingPrototypes.x3d';
X3D0.Meta['reference'] := 'ApaydinThesis.pdf';
X3D0.Meta['subject'] := 'X3D HAnim humanoid animation behaviors';
X3D0.Meta['warning'] := 'under development. should joint translations be exposed? upgrade to HAnim v2.2';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'HAnimBehaviorPrototypes.x3d';
{ .AddChildren }
Group18.AddChildren([WorldInfo19]);
ProtoDeclare20 := TProtoDeclareNode.Create;
ProtoDeclare20.NameField := 'HAnimBehavior';
ProtoDeclare20.Appinfo := 'The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.';
ProtoDeclare20.Documentation := 'https://www.web3d.org/files/specifications/19774/V1.0/';
ProtoInterface21 := TProtoInterfaceNode.Create;
{ supported Level of Articulation (LOA) }
{ shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations }
{ TODO: add other X3D 3.0 TimeSensor fields (pause etc.) }
{ Not supported: animated translation of individual joints }
{ pass in key/keyValue array pairs for single PositionInterpolator }
{ pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint }
field22 := TfieldNode.Create;
field22.NameField := 'supportedLOA';
field22.AccessType := 'inputOutput';
field22.Appinfo := 'Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
field22.Type := 'SFInt32';
field22.Value := '-1';
{ .AddField }
ProtoInterface21.Field := field22;
field23 := TfieldNode.Create;
field23.NameField := 'enabled';
field23.AccessType := 'inputOutput';
field23.Appinfo := 'is this behavior enabled?';
field23.Type := 'SFBool';
field23.Value := 'true';
{ .AddField }
ProtoInterface21.Field := field23;
field24 := TfieldNode.Create;
field24.NameField := 'cycleInterval';
field24.AccessType := 'inputOutput';
field24.Appinfo := 'how long do these interpolators take to execute?';
field24.Type := 'SFTime';
field24.Value := '1';
{ .AddField }
ProtoInterface21.Field := field24;
field25 := TfieldNode.Create;
field25.NameField := 'loop';
field25.AccessType := 'inputOutput';
field25.Appinfo := 'whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).';
field25.Type := 'SFBool';
field25.Value := 'false';
{ .AddField }
ProtoInterface21.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'startTime';
field26.AccessType := 'inputOutput';
field26.Appinfo := 'when time now >= startTime isActive becomes true and TimeSensor becomes active';
field26.Type := 'SFTime';
field26.Value := '0';
{ .AddField }
ProtoInterface21.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'stopTime';
field27.AccessType := 'inputOutput';
field27.Appinfo := 'when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive';
field27.Type := 'SFTime';
field27.Value := '0';
{ .AddField }
ProtoInterface21.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'pauseTime';
field28.AccessType := 'inputOutput';
field28.Appinfo := 'when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused';
field28.Type := 'SFTime';
field28.Value := '0';
{ .AddField }
ProtoInterface21.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'resumeTime';
field29.AccessType := 'inputOutput';
field29.Appinfo := 'when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive';
field29.Type := 'SFTime';
field29.Value := '0';
{ .AddField }
ProtoInterface21.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'cycleTime';
field30.AccessType := 'outputOnly';
field30.Appinfo := 'cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle';
field30.Type := 'SFTime';
{ .AddField }
ProtoInterface21.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'isActive';
field31.AccessType := 'outputOnly';
field31.Appinfo := 'isActive true/false events are sent when TimeSensor starts/stops running';
field31.Type := 'SFBool';
{ .AddField }
ProtoInterface21.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'isPaused';
field32.AccessType := 'outputOnly';
field32.Appinfo := 'isPaused true/false events are sent when TimeSensor is paused/resumed';
field32.Type := 'SFBool';
{ .AddField }
ProtoInterface21.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'elapsedTime';
field33.AccessType := 'outputOnly';
field33.Appinfo := 'current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time';
field33.Type := 'SFBool';
{ .AddField }
ProtoInterface21.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'time';
field34.AccessType := 'outputOnly';
field34.Appinfo := 'continuously sends the absolute time (since January 1 1970)';
field34.Type := 'SFBool';
{ .AddField }
ProtoInterface21.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'fraction_changed';
field35.AccessType := 'outputOnly';
field35.Appinfo := 'fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.';
field35.Type := 'SFFloat';
{ .AddField }
ProtoInterface21.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'HumanoidRoot_translation_key';
field36.AccessType := 'inputOutput';
field36.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'HumanoidRoot_translation_keyValue';
field37.AccessType := 'inputOutput';
field37.Type := 'MFVec3f';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'HumanoidRoot_translation_changed';
field38.AccessType := 'outputOnly';
field38.Type := 'SFVec3f';
{ .AddField }
ProtoInterface21.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'HumanoidRoot_rotation_key';
field39.AccessType := 'inputOutput';
field39.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'HumanoidRoot_rotation_keyValue';
field40.AccessType := 'inputOutput';
field40.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'HumanoidRoot_rotation_changed';
field41.AccessType := 'outputOnly';
field41.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'c1_key';
field42.AccessType := 'inputOutput';
field42.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'c1_keyValue';
field43.AccessType := 'inputOutput';
field43.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'c1_changed';
field44.AccessType := 'outputOnly';
field44.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'c2_key';
field45.AccessType := 'inputOutput';
field45.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'c2_keyValue';
field46.AccessType := 'inputOutput';
field46.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'c2_changed';
field47.AccessType := 'outputOnly';
field47.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'c3_key';
field48.AccessType := 'inputOutput';
field48.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field48;
field49 := TfieldNode.Create;
field49.NameField := 'c3_keyValue';
field49.AccessType := 'inputOutput';
field49.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field49;
field50 := TfieldNode.Create;
field50.NameField := 'c3_changed';
field50.AccessType := 'outputOnly';
field50.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field50;
field51 := TfieldNode.Create;
field51.NameField := 'c4_key';
field51.AccessType := 'inputOutput';
field51.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field51;
field52 := TfieldNode.Create;
field52.NameField := 'c4_keyValue';
field52.AccessType := 'inputOutput';
field52.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field52;
field53 := TfieldNode.Create;
field53.NameField := 'c4_changed';
field53.AccessType := 'outputOnly';
field53.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'c5_key';
field54.AccessType := 'inputOutput';
field54.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'c5_keyValue';
field55.AccessType := 'inputOutput';
field55.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'c5_changed';
field56.AccessType := 'outputOnly';
field56.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'c6_key';
field57.AccessType := 'inputOutput';
field57.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'c6_keyValue';
field58.AccessType := 'inputOutput';
field58.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'c6_changed';
field59.AccessType := 'outputOnly';
field59.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'c7_key';
field60.AccessType := 'inputOutput';
field60.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'c7_keyValue';
field61.AccessType := 'inputOutput';
field61.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'c7_changed';
field62.AccessType := 'outputOnly';
field62.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'jaw_key';
field63.AccessType := 'inputOutput';
field63.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'jaw_keyValue';
field64.AccessType := 'inputOutput';
field64.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'jaw_changed';
field65.AccessType := 'outputOnly';
field65.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'l1_key';
field66.AccessType := 'inputOutput';
field66.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field66;
field67 := TfieldNode.Create;
field67.NameField := 'l1_keyValue';
field67.AccessType := 'inputOutput';
field67.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field67;
field68 := TfieldNode.Create;
field68.NameField := 'l1_changed';
field68.AccessType := 'outputOnly';
field68.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field68;
field69 := TfieldNode.Create;
field69.NameField := 'l2_key';
field69.AccessType := 'inputOutput';
field69.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field69;
field70 := TfieldNode.Create;
field70.NameField := 'l2_keyValue';
field70.AccessType := 'inputOutput';
field70.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field70;
field71 := TfieldNode.Create;
field71.NameField := 'l2_changed';
field71.AccessType := 'outputOnly';
field71.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field71;
field72 := TfieldNode.Create;
field72.NameField := 'l3_key';
field72.AccessType := 'inputOutput';
field72.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field72;
field73 := TfieldNode.Create;
field73.NameField := 'l3_keyValue';
field73.AccessType := 'inputOutput';
field73.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'l3_changed';
field74.AccessType := 'outputOnly';
field74.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'l4_key';
field75.AccessType := 'inputOutput';
field75.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field75;
field76 := TfieldNode.Create;
field76.NameField := 'l4_keyValue';
field76.AccessType := 'inputOutput';
field76.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field76;
field77 := TfieldNode.Create;
field77.NameField := 'l4_changed';
field77.AccessType := 'outputOnly';
field77.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field77;
field78 := TfieldNode.Create;
field78.NameField := 'l5_key';
field78.AccessType := 'inputOutput';
field78.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field78;
field79 := TfieldNode.Create;
field79.NameField := 'l5_keyValue';
field79.AccessType := 'inputOutput';
field79.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field79;
field80 := TfieldNode.Create;
field80.NameField := 'l5_changed';
field80.AccessType := 'outputOnly';
field80.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field80;
field81 := TfieldNode.Create;
field81.NameField := 'l_acromioclavicular_key';
field81.AccessType := 'inputOutput';
field81.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field81;
field82 := TfieldNode.Create;
field82.NameField := 'l_acromioclavicular_keyValue';
field82.AccessType := 'inputOutput';
field82.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field82;
field83 := TfieldNode.Create;
field83.NameField := 'l_acromioclavicular_changed';
field83.AccessType := 'outputOnly';
field83.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field83;
field84 := TfieldNode.Create;
field84.NameField := 'l_ankle_key';
field84.AccessType := 'inputOutput';
field84.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field84;
field85 := TfieldNode.Create;
field85.NameField := 'l_ankle_keyValue';
field85.AccessType := 'inputOutput';
field85.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field85;
field86 := TfieldNode.Create;
field86.NameField := 'l_ankle_changed';
field86.AccessType := 'outputOnly';
field86.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field86;
field87 := TfieldNode.Create;
field87.NameField := 'l_calf_key';
field87.AccessType := 'inputOutput';
field87.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field87;
field88 := TfieldNode.Create;
field88.NameField := 'l_calf_keyValue';
field88.AccessType := 'inputOutput';
field88.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field88;
field89 := TfieldNode.Create;
field89.NameField := 'l_calf_changed';
field89.AccessType := 'outputOnly';
field89.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field89;
field90 := TfieldNode.Create;
field90.NameField := 'l_clavicle_key';
field90.AccessType := 'inputOutput';
field90.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field90;
field91 := TfieldNode.Create;
field91.NameField := 'l_clavicle_keyValue';
field91.AccessType := 'inputOutput';
field91.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field91;
field92 := TfieldNode.Create;
field92.NameField := 'l_clavicle_changed';
field92.AccessType := 'outputOnly';
field92.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field92;
field93 := TfieldNode.Create;
field93.NameField := 'l_elbow_key';
field93.AccessType := 'inputOutput';
field93.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field93;
field94 := TfieldNode.Create;
field94.NameField := 'l_elbow_keyValue';
field94.AccessType := 'inputOutput';
field94.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field94;
field95 := TfieldNode.Create;
field95.NameField := 'l_elbow_changed';
field95.AccessType := 'outputOnly';
field95.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field95;
field96 := TfieldNode.Create;
field96.NameField := 'l_eyeball_key';
field96.AccessType := 'inputOutput';
field96.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field96;
field97 := TfieldNode.Create;
field97.NameField := 'l_eyeball_keyValue';
field97.AccessType := 'inputOutput';
field97.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field97;
field98 := TfieldNode.Create;
field98.NameField := 'l_eyeball_changed';
field98.AccessType := 'outputOnly';
field98.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field98;
field99 := TfieldNode.Create;
field99.NameField := 'l_eyeball_joint_key';
field99.AccessType := 'inputOutput';
field99.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field99;
field100 := TfieldNode.Create;
field100.NameField := 'l_eyeball_joint_keyValue';
field100.AccessType := 'inputOutput';
field100.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field100;
field101 := TfieldNode.Create;
field101.NameField := 'l_eyeball_joint_changed';
field101.AccessType := 'outputOnly';
field101.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field101;
field102 := TfieldNode.Create;
field102.NameField := 'l_eyebrow_key';
field102.AccessType := 'inputOutput';
field102.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field102;
field103 := TfieldNode.Create;
field103.NameField := 'l_eyebrow_keyValue';
field103.AccessType := 'inputOutput';
field103.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field103;
field104 := TfieldNode.Create;
field104.NameField := 'l_eyebrow_changed';
field104.AccessType := 'outputOnly';
field104.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field104;
field105 := TfieldNode.Create;
field105.NameField := 'l_eyebrow_joint_key';
field105.AccessType := 'inputOutput';
field105.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field105;
field106 := TfieldNode.Create;
field106.NameField := 'l_eyebrow_joint_keyValue';
field106.AccessType := 'inputOutput';
field106.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field106;
field107 := TfieldNode.Create;
field107.NameField := 'l_eyebrow_joint_changed';
field107.AccessType := 'outputOnly';
field107.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field107;
field108 := TfieldNode.Create;
field108.NameField := 'l_eyelid_key';
field108.AccessType := 'inputOutput';
field108.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field108;
field109 := TfieldNode.Create;
field109.NameField := 'l_eyelid_keyValue';
field109.AccessType := 'inputOutput';
field109.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field109;
field110 := TfieldNode.Create;
field110.NameField := 'l_eyelid_changed';
field110.AccessType := 'outputOnly';
field110.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field110;
field111 := TfieldNode.Create;
field111.NameField := 'l_eyelid_joint_key';
field111.AccessType := 'inputOutput';
field111.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field111;
field112 := TfieldNode.Create;
field112.NameField := 'l_eyelid_joint_keyValue';
field112.AccessType := 'inputOutput';
field112.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field112;
field113 := TfieldNode.Create;
field113.NameField := 'l_eyelid_joint_changed';
field113.AccessType := 'outputOnly';
field113.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field113;
field114 := TfieldNode.Create;
field114.NameField := 'l_forearm_key';
field114.AccessType := 'inputOutput';
field114.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field114;
field115 := TfieldNode.Create;
field115.NameField := 'l_forearm_keyValue';
field115.AccessType := 'inputOutput';
field115.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field115;
field116 := TfieldNode.Create;
field116.NameField := 'l_forearm_changed';
field116.AccessType := 'outputOnly';
field116.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field116;
field117 := TfieldNode.Create;
field117.NameField := 'l_forefoot_key';
field117.AccessType := 'inputOutput';
field117.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field117;
field118 := TfieldNode.Create;
field118.NameField := 'l_forefoot_keyValue';
field118.AccessType := 'inputOutput';
field118.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field118;
field119 := TfieldNode.Create;
field119.NameField := 'l_forefoot_changed';
field119.AccessType := 'outputOnly';
field119.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field119;
field120 := TfieldNode.Create;
field120.NameField := 'l_hand_key';
field120.AccessType := 'inputOutput';
field120.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field120;
field121 := TfieldNode.Create;
field121.NameField := 'l_hand_keyValue';
field121.AccessType := 'inputOutput';
field121.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field121;
field122 := TfieldNode.Create;
field122.NameField := 'l_hand_changed';
field122.AccessType := 'outputOnly';
field122.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field122;
field123 := TfieldNode.Create;
field123.NameField := 'l_hindfoot_key';
field123.AccessType := 'inputOutput';
field123.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field123;
field124 := TfieldNode.Create;
field124.NameField := 'l_hindfoot_keyValue';
field124.AccessType := 'inputOutput';
field124.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field124;
field125 := TfieldNode.Create;
field125.NameField := 'l_hindfoot_changed';
field125.AccessType := 'outputOnly';
field125.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field125;
field126 := TfieldNode.Create;
field126.NameField := 'l_hip_key';
field126.AccessType := 'inputOutput';
field126.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field126;
field127 := TfieldNode.Create;
field127.NameField := 'l_hip_keyValue';
field127.AccessType := 'inputOutput';
field127.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field127;
field128 := TfieldNode.Create;
field128.NameField := 'l_hip_changed';
field128.AccessType := 'outputOnly';
field128.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field128;
field129 := TfieldNode.Create;
field129.NameField := 'l_index0_key';
field129.AccessType := 'inputOutput';
field129.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field129;
field130 := TfieldNode.Create;
field130.NameField := 'l_index0_keyValue';
field130.AccessType := 'inputOutput';
field130.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field130;
field131 := TfieldNode.Create;
field131.NameField := 'l_index0_changed';
field131.AccessType := 'outputOnly';
field131.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field131;
field132 := TfieldNode.Create;
field132.NameField := 'l_index1_key';
field132.AccessType := 'inputOutput';
field132.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field132;
field133 := TfieldNode.Create;
field133.NameField := 'l_index1_keyValue';
field133.AccessType := 'inputOutput';
field133.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field133;
field134 := TfieldNode.Create;
field134.NameField := 'l_index1_changed';
field134.AccessType := 'outputOnly';
field134.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field134;
field135 := TfieldNode.Create;
field135.NameField := 'l_index2_key';
field135.AccessType := 'inputOutput';
field135.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field135;
field136 := TfieldNode.Create;
field136.NameField := 'l_index2_keyValue';
field136.AccessType := 'inputOutput';
field136.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field136;
field137 := TfieldNode.Create;
field137.NameField := 'l_index2_changed';
field137.AccessType := 'outputOnly';
field137.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field137;
field138 := TfieldNode.Create;
field138.NameField := 'l_index3_key';
field138.AccessType := 'inputOutput';
field138.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field138;
field139 := TfieldNode.Create;
field139.NameField := 'l_index3_keyValue';
field139.AccessType := 'inputOutput';
field139.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field139;
field140 := TfieldNode.Create;
field140.NameField := 'l_index3_changed';
field140.AccessType := 'outputOnly';
field140.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field140;
field141 := TfieldNode.Create;
field141.NameField := 'l_index_distal_key';
field141.AccessType := 'inputOutput';
field141.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field141;
field142 := TfieldNode.Create;
field142.NameField := 'l_index_distal_keyValue';
field142.AccessType := 'inputOutput';
field142.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field142;
field143 := TfieldNode.Create;
field143.NameField := 'l_index_distal_changed';
field143.AccessType := 'outputOnly';
field143.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field143;
field144 := TfieldNode.Create;
field144.NameField := 'l_index_metacarpal_key';
field144.AccessType := 'inputOutput';
field144.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field144;
field145 := TfieldNode.Create;
field145.NameField := 'l_index_metacarpal_keyValue';
field145.AccessType := 'inputOutput';
field145.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field145;
field146 := TfieldNode.Create;
field146.NameField := 'l_index_metacarpal_changed';
field146.AccessType := 'outputOnly';
field146.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field146;
field147 := TfieldNode.Create;
field147.NameField := 'l_index_middle_key';
field147.AccessType := 'inputOutput';
field147.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field147;
field148 := TfieldNode.Create;
field148.NameField := 'l_index_middle_keyValue';
field148.AccessType := 'inputOutput';
field148.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field148;
field149 := TfieldNode.Create;
field149.NameField := 'l_index_middle_changed';
field149.AccessType := 'outputOnly';
field149.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field149;
field150 := TfieldNode.Create;
field150.NameField := 'l_index_proximal_key';
field150.AccessType := 'inputOutput';
field150.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field150;
field151 := TfieldNode.Create;
field151.NameField := 'l_index_proximal_keyValue';
field151.AccessType := 'inputOutput';
field151.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field151;
field152 := TfieldNode.Create;
field152.NameField := 'l_index_proximal_changed';
field152.AccessType := 'outputOnly';
field152.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field152;
field153 := TfieldNode.Create;
field153.NameField := 'l_knee_key';
field153.AccessType := 'inputOutput';
field153.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field153;
field154 := TfieldNode.Create;
field154.NameField := 'l_knee_keyValue';
field154.AccessType := 'inputOutput';
field154.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field154;
field155 := TfieldNode.Create;
field155.NameField := 'l_knee_changed';
field155.AccessType := 'outputOnly';
field155.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field155;
field156 := TfieldNode.Create;
field156.NameField := 'l_metatarsal_key';
field156.AccessType := 'inputOutput';
field156.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field156;
field157 := TfieldNode.Create;
field157.NameField := 'l_metatarsal_keyValue';
field157.AccessType := 'inputOutput';
field157.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field157;
field158 := TfieldNode.Create;
field158.NameField := 'l_metatarsal_changed';
field158.AccessType := 'outputOnly';
field158.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field158;
field159 := TfieldNode.Create;
field159.NameField := 'l_middistal_key';
field159.AccessType := 'inputOutput';
field159.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field159;
field160 := TfieldNode.Create;
field160.NameField := 'l_middistal_keyValue';
field160.AccessType := 'inputOutput';
field160.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field160;
field161 := TfieldNode.Create;
field161.NameField := 'l_middistal_changed';
field161.AccessType := 'outputOnly';
field161.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field161;
field162 := TfieldNode.Create;
field162.NameField := 'l_middle0_key';
field162.AccessType := 'inputOutput';
field162.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field162;
field163 := TfieldNode.Create;
field163.NameField := 'l_middle0_keyValue';
field163.AccessType := 'inputOutput';
field163.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field163;
field164 := TfieldNode.Create;
field164.NameField := 'l_middle0_changed';
field164.AccessType := 'outputOnly';
field164.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field164;
field165 := TfieldNode.Create;
field165.NameField := 'l_middle1_key';
field165.AccessType := 'inputOutput';
field165.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field165;
field166 := TfieldNode.Create;
field166.NameField := 'l_middle1_keyValue';
field166.AccessType := 'inputOutput';
field166.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field166;
field167 := TfieldNode.Create;
field167.NameField := 'l_middle1_changed';
field167.AccessType := 'outputOnly';
field167.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field167;
field168 := TfieldNode.Create;
field168.NameField := 'l_middle2_key';
field168.AccessType := 'inputOutput';
field168.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field168;
field169 := TfieldNode.Create;
field169.NameField := 'l_middle2_keyValue';
field169.AccessType := 'inputOutput';
field169.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field169;
field170 := TfieldNode.Create;
field170.NameField := 'l_middle2_changed';
field170.AccessType := 'outputOnly';
field170.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field170;
field171 := TfieldNode.Create;
field171.NameField := 'l_middle3_key';
field171.AccessType := 'inputOutput';
field171.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field171;
field172 := TfieldNode.Create;
field172.NameField := 'l_middle3_keyValue';
field172.AccessType := 'inputOutput';
field172.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field172;
field173 := TfieldNode.Create;
field173.NameField := 'l_middle3_changed';
field173.AccessType := 'outputOnly';
field173.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field173;
field174 := TfieldNode.Create;
field174.NameField := 'l_middle_distal_key';
field174.AccessType := 'inputOutput';
field174.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field174;
field175 := TfieldNode.Create;
field175.NameField := 'l_middle_distal_keyValue';
field175.AccessType := 'inputOutput';
field175.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field175;
field176 := TfieldNode.Create;
field176.NameField := 'l_middle_distal_changed';
field176.AccessType := 'outputOnly';
field176.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field176;
field177 := TfieldNode.Create;
field177.NameField := 'l_middle_metacarpal_key';
field177.AccessType := 'inputOutput';
field177.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field177;
field178 := TfieldNode.Create;
field178.NameField := 'l_middle_metacarpal_keyValue';
field178.AccessType := 'inputOutput';
field178.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field178;
field179 := TfieldNode.Create;
field179.NameField := 'l_middle_metacarpal_changed';
field179.AccessType := 'outputOnly';
field179.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field179;
field180 := TfieldNode.Create;
field180.NameField := 'l_middle_middle_key';
field180.AccessType := 'inputOutput';
field180.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field180;
field181 := TfieldNode.Create;
field181.NameField := 'l_middle_middle_keyValue';
field181.AccessType := 'inputOutput';
field181.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field181;
field182 := TfieldNode.Create;
field182.NameField := 'l_middle_middle_changed';
field182.AccessType := 'outputOnly';
field182.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field182;
field183 := TfieldNode.Create;
field183.NameField := 'l_middle_proximal_key';
field183.AccessType := 'inputOutput';
field183.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field183;
field184 := TfieldNode.Create;
field184.NameField := 'l_middle_proximal_keyValue';
field184.AccessType := 'inputOutput';
field184.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field184;
field185 := TfieldNode.Create;
field185.NameField := 'l_middle_proximal_changed';
field185.AccessType := 'outputOnly';
field185.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field185;
field186 := TfieldNode.Create;
field186.NameField := 'l_midproximal_key';
field186.AccessType := 'inputOutput';
field186.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field186;
field187 := TfieldNode.Create;
field187.NameField := 'l_midproximal_keyValue';
field187.AccessType := 'inputOutput';
field187.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field187;
field188 := TfieldNode.Create;
field188.NameField := 'l_midproximal_changed';
field188.AccessType := 'outputOnly';
field188.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field188;
field189 := TfieldNode.Create;
field189.NameField := 'l_midtarsal_key';
field189.AccessType := 'inputOutput';
field189.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field189;
field190 := TfieldNode.Create;
field190.NameField := 'l_midtarsal_keyValue';
field190.AccessType := 'inputOutput';
field190.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field190;
field191 := TfieldNode.Create;
field191.NameField := 'l_midtarsal_changed';
field191.AccessType := 'outputOnly';
field191.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field191;
field192 := TfieldNode.Create;
field192.NameField := 'l_pinky0_key';
field192.AccessType := 'inputOutput';
field192.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field192;
field193 := TfieldNode.Create;
field193.NameField := 'l_pinky0_keyValue';
field193.AccessType := 'inputOutput';
field193.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field193;
field194 := TfieldNode.Create;
field194.NameField := 'l_pinky0_changed';
field194.AccessType := 'outputOnly';
field194.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field194;
field195 := TfieldNode.Create;
field195.NameField := 'l_pinky1_key';
field195.AccessType := 'inputOutput';
field195.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field195;
field196 := TfieldNode.Create;
field196.NameField := 'l_pinky1_keyValue';
field196.AccessType := 'inputOutput';
field196.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field196;
field197 := TfieldNode.Create;
field197.NameField := 'l_pinky1_changed';
field197.AccessType := 'outputOnly';
field197.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field197;
field198 := TfieldNode.Create;
field198.NameField := 'l_pinky2_key';
field198.AccessType := 'inputOutput';
field198.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field198;
field199 := TfieldNode.Create;
field199.NameField := 'l_pinky2_keyValue';
field199.AccessType := 'inputOutput';
field199.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field199;
field200 := TfieldNode.Create;
field200.NameField := 'l_pinky2_changed';
field200.AccessType := 'outputOnly';
field200.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field200;
field201 := TfieldNode.Create;
field201.NameField := 'l_pinky3_key';
field201.AccessType := 'inputOutput';
field201.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field201;
field202 := TfieldNode.Create;
field202.NameField := 'l_pinky3_keyValue';
field202.AccessType := 'inputOutput';
field202.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field202;
field203 := TfieldNode.Create;
field203.NameField := 'l_pinky3_changed';
field203.AccessType := 'outputOnly';
field203.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field203;
field204 := TfieldNode.Create;
field204.NameField := 'l_pinky_distal_key';
field204.AccessType := 'inputOutput';
field204.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field204;
field205 := TfieldNode.Create;
field205.NameField := 'l_pinky_distal_keyValue';
field205.AccessType := 'inputOutput';
field205.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field205;
field206 := TfieldNode.Create;
field206.NameField := 'l_pinky_distal_changed';
field206.AccessType := 'outputOnly';
field206.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field206;
field207 := TfieldNode.Create;
field207.NameField := 'l_pinky_metacarpal_key';
field207.AccessType := 'inputOutput';
field207.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field207;
field208 := TfieldNode.Create;
field208.NameField := 'l_pinky_metacarpal_keyValue';
field208.AccessType := 'inputOutput';
field208.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field208;
field209 := TfieldNode.Create;
field209.NameField := 'l_pinky_metacarpal_changed';
field209.AccessType := 'outputOnly';
field209.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field209;
field210 := TfieldNode.Create;
field210.NameField := 'l_pinky_middle_key';
field210.AccessType := 'inputOutput';
field210.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field210;
field211 := TfieldNode.Create;
field211.NameField := 'l_pinky_middle_keyValue';
field211.AccessType := 'inputOutput';
field211.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field211;
field212 := TfieldNode.Create;
field212.NameField := 'l_pinky_middle_changed';
field212.AccessType := 'outputOnly';
field212.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field212;
field213 := TfieldNode.Create;
field213.NameField := 'l_pinky_proximal_key';
field213.AccessType := 'inputOutput';
field213.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field213;
field214 := TfieldNode.Create;
field214.NameField := 'l_pinky_proximal_keyValue';
field214.AccessType := 'inputOutput';
field214.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field214;
field215 := TfieldNode.Create;
field215.NameField := 'l_pinky_proximal_changed';
field215.AccessType := 'outputOnly';
field215.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field215;
field216 := TfieldNode.Create;
field216.NameField := 'l_ring0_key';
field216.AccessType := 'inputOutput';
field216.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field216;
field217 := TfieldNode.Create;
field217.NameField := 'l_ring0_keyValue';
field217.AccessType := 'inputOutput';
field217.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field217;
field218 := TfieldNode.Create;
field218.NameField := 'l_ring0_changed';
field218.AccessType := 'outputOnly';
field218.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field218;
field219 := TfieldNode.Create;
field219.NameField := 'l_ring1_key';
field219.AccessType := 'inputOutput';
field219.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field219;
field220 := TfieldNode.Create;
field220.NameField := 'l_ring1_keyValue';
field220.AccessType := 'inputOutput';
field220.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field220;
field221 := TfieldNode.Create;
field221.NameField := 'l_ring1_changed';
field221.AccessType := 'outputOnly';
field221.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field221;
field222 := TfieldNode.Create;
field222.NameField := 'l_ring2_key';
field222.AccessType := 'inputOutput';
field222.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field222;
field223 := TfieldNode.Create;
field223.NameField := 'l_ring2_keyValue';
field223.AccessType := 'inputOutput';
field223.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field223;
field224 := TfieldNode.Create;
field224.NameField := 'l_ring2_changed';
field224.AccessType := 'outputOnly';
field224.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field224;
field225 := TfieldNode.Create;
field225.NameField := 'l_ring3_key';
field225.AccessType := 'inputOutput';
field225.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field225;
field226 := TfieldNode.Create;
field226.NameField := 'l_ring3_keyValue';
field226.AccessType := 'inputOutput';
field226.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field226;
field227 := TfieldNode.Create;
field227.NameField := 'l_ring3_changed';
field227.AccessType := 'outputOnly';
field227.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field227;
field228 := TfieldNode.Create;
field228.NameField := 'l_ring_distal_key';
field228.AccessType := 'inputOutput';
field228.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field228;
field229 := TfieldNode.Create;
field229.NameField := 'l_ring_distal_keyValue';
field229.AccessType := 'inputOutput';
field229.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field229;
field230 := TfieldNode.Create;
field230.NameField := 'l_ring_distal_changed';
field230.AccessType := 'outputOnly';
field230.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field230;
field231 := TfieldNode.Create;
field231.NameField := 'l_ring_metacarpal_key';
field231.AccessType := 'inputOutput';
field231.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field231;
field232 := TfieldNode.Create;
field232.NameField := 'l_ring_metacarpal_keyValue';
field232.AccessType := 'inputOutput';
field232.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field232;
field233 := TfieldNode.Create;
field233.NameField := 'l_ring_metacarpal_changed';
field233.AccessType := 'outputOnly';
field233.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field233;
field234 := TfieldNode.Create;
field234.NameField := 'l_ring_middle_key';
field234.AccessType := 'inputOutput';
field234.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field234;
field235 := TfieldNode.Create;
field235.NameField := 'l_ring_middle_keyValue';
field235.AccessType := 'inputOutput';
field235.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field235;
field236 := TfieldNode.Create;
field236.NameField := 'l_ring_middle_changed';
field236.AccessType := 'outputOnly';
field236.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field236;
field237 := TfieldNode.Create;
field237.NameField := 'l_ring_proximal_key';
field237.AccessType := 'inputOutput';
field237.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field237;
field238 := TfieldNode.Create;
field238.NameField := 'l_ring_proximal_keyValue';
field238.AccessType := 'inputOutput';
field238.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field238;
field239 := TfieldNode.Create;
field239.NameField := 'l_ring_proximal_changed';
field239.AccessType := 'outputOnly';
field239.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field239;
field240 := TfieldNode.Create;
field240.NameField := 'l_scapula_key';
field240.AccessType := 'inputOutput';
field240.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field240;
field241 := TfieldNode.Create;
field241.NameField := 'l_scapula_keyValue';
field241.AccessType := 'inputOutput';
field241.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field241;
field242 := TfieldNode.Create;
field242.NameField := 'l_scapula_changed';
field242.AccessType := 'outputOnly';
field242.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field242;
field243 := TfieldNode.Create;
field243.NameField := 'l_shoulder_key';
field243.AccessType := 'inputOutput';
field243.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field243;
field244 := TfieldNode.Create;
field244.NameField := 'l_shoulder_keyValue';
field244.AccessType := 'inputOutput';
field244.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field244;
field245 := TfieldNode.Create;
field245.NameField := 'l_shoulder_changed';
field245.AccessType := 'outputOnly';
field245.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field245;
field246 := TfieldNode.Create;
field246.NameField := 'l_sternoclavicular_key';
field246.AccessType := 'inputOutput';
field246.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field246;
field247 := TfieldNode.Create;
field247.NameField := 'l_sternoclavicular_keyValue';
field247.AccessType := 'inputOutput';
field247.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field247;
field248 := TfieldNode.Create;
field248.NameField := 'l_sternoclavicular_changed';
field248.AccessType := 'outputOnly';
field248.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field248;
field249 := TfieldNode.Create;
field249.NameField := 'l_subtalar_key';
field249.AccessType := 'inputOutput';
field249.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field249;
field250 := TfieldNode.Create;
field250.NameField := 'l_subtalar_keyValue';
field250.AccessType := 'inputOutput';
field250.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field250;
field251 := TfieldNode.Create;
field251.NameField := 'l_subtalar_changed';
field251.AccessType := 'outputOnly';
field251.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field251;
field252 := TfieldNode.Create;
field252.NameField := 'l_thigh_key';
field252.AccessType := 'inputOutput';
field252.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field252;
field253 := TfieldNode.Create;
field253.NameField := 'l_thigh_keyValue';
field253.AccessType := 'inputOutput';
field253.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field253;
field254 := TfieldNode.Create;
field254.NameField := 'l_thigh_changed';
field254.AccessType := 'outputOnly';
field254.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field254;
field255 := TfieldNode.Create;
field255.NameField := 'l_thumb1_key';
field255.AccessType := 'inputOutput';
field255.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field255;
field256 := TfieldNode.Create;
field256.NameField := 'l_thumb1_keyValue';
field256.AccessType := 'inputOutput';
field256.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field256;
field257 := TfieldNode.Create;
field257.NameField := 'l_thumb1_changed';
field257.AccessType := 'outputOnly';
field257.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field257;
field258 := TfieldNode.Create;
field258.NameField := 'l_thumb2_key';
field258.AccessType := 'inputOutput';
field258.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field258;
field259 := TfieldNode.Create;
field259.NameField := 'l_thumb2_keyValue';
field259.AccessType := 'inputOutput';
field259.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field259;
field260 := TfieldNode.Create;
field260.NameField := 'l_thumb2_changed';
field260.AccessType := 'outputOnly';
field260.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field260;
field261 := TfieldNode.Create;
field261.NameField := 'l_thumb3_key';
field261.AccessType := 'inputOutput';
field261.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field261;
field262 := TfieldNode.Create;
field262.NameField := 'l_thumb3_keyValue';
field262.AccessType := 'inputOutput';
field262.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field262;
field263 := TfieldNode.Create;
field263.NameField := 'l_thumb3_changed';
field263.AccessType := 'outputOnly';
field263.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field263;
field264 := TfieldNode.Create;
field264.NameField := 'l_thumb_distal_key';
field264.AccessType := 'inputOutput';
field264.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field264;
field265 := TfieldNode.Create;
field265.NameField := 'l_thumb_distal_keyValue';
field265.AccessType := 'inputOutput';
field265.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field265;
field266 := TfieldNode.Create;
field266.NameField := 'l_thumb_distal_changed';
field266.AccessType := 'outputOnly';
field266.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field266;
field267 := TfieldNode.Create;
field267.NameField := 'l_thumb_metacarpal_key';
field267.AccessType := 'inputOutput';
field267.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field267;
field268 := TfieldNode.Create;
field268.NameField := 'l_thumb_metacarpal_keyValue';
field268.AccessType := 'inputOutput';
field268.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field268;
field269 := TfieldNode.Create;
field269.NameField := 'l_thumb_metacarpal_changed';
field269.AccessType := 'outputOnly';
field269.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field269;
field270 := TfieldNode.Create;
field270.NameField := 'l_thumb_proximal_key';
field270.AccessType := 'inputOutput';
field270.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field270;
field271 := TfieldNode.Create;
field271.NameField := 'l_thumb_proximal_keyValue';
field271.AccessType := 'inputOutput';
field271.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field271;
field272 := TfieldNode.Create;
field272.NameField := 'l_thumb_proximal_changed';
field272.AccessType := 'outputOnly';
field272.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field272;
field273 := TfieldNode.Create;
field273.NameField := 'l_upperarm_key';
field273.AccessType := 'inputOutput';
field273.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field273;
field274 := TfieldNode.Create;
field274.NameField := 'l_upperarm_keyValue';
field274.AccessType := 'inputOutput';
field274.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field274;
field275 := TfieldNode.Create;
field275.NameField := 'l_upperarm_changed';
field275.AccessType := 'outputOnly';
field275.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field275;
field276 := TfieldNode.Create;
field276.NameField := 'l_wrist_key';
field276.AccessType := 'inputOutput';
field276.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field276;
field277 := TfieldNode.Create;
field277.NameField := 'l_wrist_keyValue';
field277.AccessType := 'inputOutput';
field277.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field277;
field278 := TfieldNode.Create;
field278.NameField := 'l_wrist_changed';
field278.AccessType := 'outputOnly';
field278.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field278;
field279 := TfieldNode.Create;
field279.NameField := 'pelvis_key';
field279.AccessType := 'inputOutput';
field279.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field279;
field280 := TfieldNode.Create;
field280.NameField := 'pelvis_keyValue';
field280.AccessType := 'inputOutput';
field280.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field280;
field281 := TfieldNode.Create;
field281.NameField := 'pelvis_changed';
field281.AccessType := 'outputOnly';
field281.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field281;
field282 := TfieldNode.Create;
field282.NameField := 'r_acromioclavicular_key';
field282.AccessType := 'inputOutput';
field282.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field282;
field283 := TfieldNode.Create;
field283.NameField := 'r_acromioclavicular_keyValue';
field283.AccessType := 'inputOutput';
field283.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field283;
field284 := TfieldNode.Create;
field284.NameField := 'r_acromioclavicular_changed';
field284.AccessType := 'outputOnly';
field284.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field284;
field285 := TfieldNode.Create;
field285.NameField := 'r_ankle_key';
field285.AccessType := 'inputOutput';
field285.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field285;
field286 := TfieldNode.Create;
field286.NameField := 'r_ankle_keyValue';
field286.AccessType := 'inputOutput';
field286.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field286;
field287 := TfieldNode.Create;
field287.NameField := 'r_ankle_changed';
field287.AccessType := 'outputOnly';
field287.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field287;
field288 := TfieldNode.Create;
field288.NameField := 'r_calf_key';
field288.AccessType := 'inputOutput';
field288.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field288;
field289 := TfieldNode.Create;
field289.NameField := 'r_calf_keyValue';
field289.AccessType := 'inputOutput';
field289.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field289;
field290 := TfieldNode.Create;
field290.NameField := 'r_calf_changed';
field290.AccessType := 'outputOnly';
field290.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field290;
field291 := TfieldNode.Create;
field291.NameField := 'r_clavicle_key';
field291.AccessType := 'inputOutput';
field291.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field291;
field292 := TfieldNode.Create;
field292.NameField := 'r_clavicle_keyValue';
field292.AccessType := 'inputOutput';
field292.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field292;
field293 := TfieldNode.Create;
field293.NameField := 'r_clavicle_changed';
field293.AccessType := 'outputOnly';
field293.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field293;
field294 := TfieldNode.Create;
field294.NameField := 'r_elbow_key';
field294.AccessType := 'inputOutput';
field294.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field294;
field295 := TfieldNode.Create;
field295.NameField := 'r_elbow_keyValue';
field295.AccessType := 'inputOutput';
field295.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field295;
field296 := TfieldNode.Create;
field296.NameField := 'r_elbow_changed';
field296.AccessType := 'outputOnly';
field296.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field296;
field297 := TfieldNode.Create;
field297.NameField := 'r_eyeball_key';
field297.AccessType := 'inputOutput';
field297.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field297;
field298 := TfieldNode.Create;
field298.NameField := 'r_eyeball_keyValue';
field298.AccessType := 'inputOutput';
field298.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field298;
field299 := TfieldNode.Create;
field299.NameField := 'r_eyeball_changed';
field299.AccessType := 'outputOnly';
field299.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field299;
field300 := TfieldNode.Create;
field300.NameField := 'r_eyeball_joint_key';
field300.AccessType := 'inputOutput';
field300.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field300;
field301 := TfieldNode.Create;
field301.NameField := 'r_eyeball_joint_keyValue';
field301.AccessType := 'inputOutput';
field301.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field301;
field302 := TfieldNode.Create;
field302.NameField := 'r_eyeball_joint_changed';
field302.AccessType := 'outputOnly';
field302.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field302;
field303 := TfieldNode.Create;
field303.NameField := 'r_eyebrow_key';
field303.AccessType := 'inputOutput';
field303.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field303;
field304 := TfieldNode.Create;
field304.NameField := 'r_eyebrow_keyValue';
field304.AccessType := 'inputOutput';
field304.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field304;
field305 := TfieldNode.Create;
field305.NameField := 'r_eyebrow_changed';
field305.AccessType := 'outputOnly';
field305.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field305;
field306 := TfieldNode.Create;
field306.NameField := 'r_eyebrow_joint_key';
field306.AccessType := 'inputOutput';
field306.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field306;
field307 := TfieldNode.Create;
field307.NameField := 'r_eyebrow_joint_keyValue';
field307.AccessType := 'inputOutput';
field307.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field307;
field308 := TfieldNode.Create;
field308.NameField := 'r_eyebrow_joint_changed';
field308.AccessType := 'outputOnly';
field308.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field308;
field309 := TfieldNode.Create;
field309.NameField := 'r_eyelid_key';
field309.AccessType := 'inputOutput';
field309.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field309;
field310 := TfieldNode.Create;
field310.NameField := 'r_eyelid_keyValue';
field310.AccessType := 'inputOutput';
field310.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field310;
field311 := TfieldNode.Create;
field311.NameField := 'r_eyelid_changed';
field311.AccessType := 'outputOnly';
field311.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field311;
field312 := TfieldNode.Create;
field312.NameField := 'r_eyelid_joint_key';
field312.AccessType := 'inputOutput';
field312.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field312;
field313 := TfieldNode.Create;
field313.NameField := 'r_eyelid_joint_keyValue';
field313.AccessType := 'inputOutput';
field313.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field313;
field314 := TfieldNode.Create;
field314.NameField := 'r_eyelid_joint_changed';
field314.AccessType := 'outputOnly';
field314.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field314;
field315 := TfieldNode.Create;
field315.NameField := 'r_forearm_key';
field315.AccessType := 'inputOutput';
field315.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field315;
field316 := TfieldNode.Create;
field316.NameField := 'r_forearm_keyValue';
field316.AccessType := 'inputOutput';
field316.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field316;
field317 := TfieldNode.Create;
field317.NameField := 'r_forearm_changed';
field317.AccessType := 'outputOnly';
field317.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field317;
field318 := TfieldNode.Create;
field318.NameField := 'r_forefoot_key';
field318.AccessType := 'inputOutput';
field318.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field318;
field319 := TfieldNode.Create;
field319.NameField := 'r_forefoot_keyValue';
field319.AccessType := 'inputOutput';
field319.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field319;
field320 := TfieldNode.Create;
field320.NameField := 'r_forefoot_changed';
field320.AccessType := 'outputOnly';
field320.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field320;
field321 := TfieldNode.Create;
field321.NameField := 'r_hand_key';
field321.AccessType := 'inputOutput';
field321.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field321;
field322 := TfieldNode.Create;
field322.NameField := 'r_hand_keyValue';
field322.AccessType := 'inputOutput';
field322.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field322;
field323 := TfieldNode.Create;
field323.NameField := 'r_hand_changed';
field323.AccessType := 'outputOnly';
field323.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field323;
field324 := TfieldNode.Create;
field324.NameField := 'r_hindfoot_key';
field324.AccessType := 'inputOutput';
field324.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field324;
field325 := TfieldNode.Create;
field325.NameField := 'r_hindfoot_keyValue';
field325.AccessType := 'inputOutput';
field325.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field325;
field326 := TfieldNode.Create;
field326.NameField := 'r_hindfoot_changed';
field326.AccessType := 'outputOnly';
field326.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field326;
field327 := TfieldNode.Create;
field327.NameField := 'r_hip_key';
field327.AccessType := 'inputOutput';
field327.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field327;
field328 := TfieldNode.Create;
field328.NameField := 'r_hip_keyValue';
field328.AccessType := 'inputOutput';
field328.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field328;
field329 := TfieldNode.Create;
field329.NameField := 'r_hip_changed';
field329.AccessType := 'outputOnly';
field329.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field329;
field330 := TfieldNode.Create;
field330.NameField := 'r_index0_key';
field330.AccessType := 'inputOutput';
field330.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field330;
field331 := TfieldNode.Create;
field331.NameField := 'r_index0_keyValue';
field331.AccessType := 'inputOutput';
field331.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field331;
field332 := TfieldNode.Create;
field332.NameField := 'r_index0_changed';
field332.AccessType := 'outputOnly';
field332.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field332;
field333 := TfieldNode.Create;
field333.NameField := 'r_index1_key';
field333.AccessType := 'inputOutput';
field333.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field333;
field334 := TfieldNode.Create;
field334.NameField := 'r_index1_keyValue';
field334.AccessType := 'inputOutput';
field334.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field334;
field335 := TfieldNode.Create;
field335.NameField := 'r_index1_changed';
field335.AccessType := 'outputOnly';
field335.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field335;
field336 := TfieldNode.Create;
field336.NameField := 'r_index2_key';
field336.AccessType := 'inputOutput';
field336.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field336;
field337 := TfieldNode.Create;
field337.NameField := 'r_index2_keyValue';
field337.AccessType := 'inputOutput';
field337.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field337;
field338 := TfieldNode.Create;
field338.NameField := 'r_index2_changed';
field338.AccessType := 'outputOnly';
field338.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field338;
field339 := TfieldNode.Create;
field339.NameField := 'r_index3_key';
field339.AccessType := 'inputOutput';
field339.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field339;
field340 := TfieldNode.Create;
field340.NameField := 'r_index3_keyValue';
field340.AccessType := 'inputOutput';
field340.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field340;
field341 := TfieldNode.Create;
field341.NameField := 'r_index3_changed';
field341.AccessType := 'outputOnly';
field341.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field341;
field342 := TfieldNode.Create;
field342.NameField := 'r_index_distal_key';
field342.AccessType := 'inputOutput';
field342.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field342;
field343 := TfieldNode.Create;
field343.NameField := 'r_index_distal_keyValue';
field343.AccessType := 'inputOutput';
field343.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field343;
field344 := TfieldNode.Create;
field344.NameField := 'r_index_distal_changed';
field344.AccessType := 'outputOnly';
field344.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field344;
field345 := TfieldNode.Create;
field345.NameField := 'r_index_metacarpal_key';
field345.AccessType := 'inputOutput';
field345.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field345;
field346 := TfieldNode.Create;
field346.NameField := 'r_index_metacarpal_keyValue';
field346.AccessType := 'inputOutput';
field346.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field346;
field347 := TfieldNode.Create;
field347.NameField := 'r_index_metacarpal_changed';
field347.AccessType := 'outputOnly';
field347.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field347;
field348 := TfieldNode.Create;
field348.NameField := 'r_index_middle_key';
field348.AccessType := 'inputOutput';
field348.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field348;
field349 := TfieldNode.Create;
field349.NameField := 'r_index_middle_keyValue';
field349.AccessType := 'inputOutput';
field349.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field349;
field350 := TfieldNode.Create;
field350.NameField := 'r_index_middle_changed';
field350.AccessType := 'outputOnly';
field350.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field350;
field351 := TfieldNode.Create;
field351.NameField := 'r_index_proximal_key';
field351.AccessType := 'inputOutput';
field351.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field351;
field352 := TfieldNode.Create;
field352.NameField := 'r_index_proximal_keyValue';
field352.AccessType := 'inputOutput';
field352.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field352;
field353 := TfieldNode.Create;
field353.NameField := 'r_index_proximal_changed';
field353.AccessType := 'outputOnly';
field353.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field353;
field354 := TfieldNode.Create;
field354.NameField := 'r_knee_key';
field354.AccessType := 'inputOutput';
field354.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field354;
field355 := TfieldNode.Create;
field355.NameField := 'r_knee_keyValue';
field355.AccessType := 'inputOutput';
field355.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field355;
field356 := TfieldNode.Create;
field356.NameField := 'r_knee_changed';
field356.AccessType := 'outputOnly';
field356.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field356;
field357 := TfieldNode.Create;
field357.NameField := 'r_metatarsal_key';
field357.AccessType := 'inputOutput';
field357.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field357;
field358 := TfieldNode.Create;
field358.NameField := 'r_metatarsal_keyValue';
field358.AccessType := 'inputOutput';
field358.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field358;
field359 := TfieldNode.Create;
field359.NameField := 'r_metatarsal_changed';
field359.AccessType := 'outputOnly';
field359.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field359;
field360 := TfieldNode.Create;
field360.NameField := 'r_middistal_key';
field360.AccessType := 'inputOutput';
field360.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field360;
field361 := TfieldNode.Create;
field361.NameField := 'r_middistal_keyValue';
field361.AccessType := 'inputOutput';
field361.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field361;
field362 := TfieldNode.Create;
field362.NameField := 'r_middistal_changed';
field362.AccessType := 'outputOnly';
field362.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field362;
field363 := TfieldNode.Create;
field363.NameField := 'r_middle0_key';
field363.AccessType := 'inputOutput';
field363.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field363;
field364 := TfieldNode.Create;
field364.NameField := 'r_middle0_keyValue';
field364.AccessType := 'inputOutput';
field364.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field364;
field365 := TfieldNode.Create;
field365.NameField := 'r_middle0_changed';
field365.AccessType := 'outputOnly';
field365.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field365;
field366 := TfieldNode.Create;
field366.NameField := 'r_middle1_key';
field366.AccessType := 'inputOutput';
field366.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field366;
field367 := TfieldNode.Create;
field367.NameField := 'r_middle1_keyValue';
field367.AccessType := 'inputOutput';
field367.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field367;
field368 := TfieldNode.Create;
field368.NameField := 'r_middle1_changed';
field368.AccessType := 'outputOnly';
field368.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field368;
field369 := TfieldNode.Create;
field369.NameField := 'r_middle2_key';
field369.AccessType := 'inputOutput';
field369.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field369;
field370 := TfieldNode.Create;
field370.NameField := 'r_middle2_keyValue';
field370.AccessType := 'inputOutput';
field370.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field370;
field371 := TfieldNode.Create;
field371.NameField := 'r_middle2_changed';
field371.AccessType := 'outputOnly';
field371.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field371;
field372 := TfieldNode.Create;
field372.NameField := 'r_middle3_key';
field372.AccessType := 'inputOutput';
field372.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field372;
field373 := TfieldNode.Create;
field373.NameField := 'r_middle3_keyValue';
field373.AccessType := 'inputOutput';
field373.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field373;
field374 := TfieldNode.Create;
field374.NameField := 'r_middle3_changed';
field374.AccessType := 'outputOnly';
field374.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field374;
field375 := TfieldNode.Create;
field375.NameField := 'r_middle_distal_key';
field375.AccessType := 'inputOutput';
field375.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field375;
field376 := TfieldNode.Create;
field376.NameField := 'r_middle_distal_keyValue';
field376.AccessType := 'inputOutput';
field376.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field376;
field377 := TfieldNode.Create;
field377.NameField := 'r_middle_distal_changed';
field377.AccessType := 'outputOnly';
field377.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field377;
field378 := TfieldNode.Create;
field378.NameField := 'r_middle_metacarpal_key';
field378.AccessType := 'inputOutput';
field378.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field378;
field379 := TfieldNode.Create;
field379.NameField := 'r_middle_metacarpal_keyValue';
field379.AccessType := 'inputOutput';
field379.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field379;
field380 := TfieldNode.Create;
field380.NameField := 'r_middle_metacarpal_changed';
field380.AccessType := 'outputOnly';
field380.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field380;
field381 := TfieldNode.Create;
field381.NameField := 'r_middle_middle_key';
field381.AccessType := 'inputOutput';
field381.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field381;
field382 := TfieldNode.Create;
field382.NameField := 'r_middle_middle_keyValue';
field382.AccessType := 'inputOutput';
field382.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field382;
field383 := TfieldNode.Create;
field383.NameField := 'r_middle_middle_changed';
field383.AccessType := 'outputOnly';
field383.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field383;
field384 := TfieldNode.Create;
field384.NameField := 'r_middle_proximal_key';
field384.AccessType := 'inputOutput';
field384.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field384;
field385 := TfieldNode.Create;
field385.NameField := 'r_middle_proximal_keyValue';
field385.AccessType := 'inputOutput';
field385.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field385;
field386 := TfieldNode.Create;
field386.NameField := 'r_middle_proximal_changed';
field386.AccessType := 'outputOnly';
field386.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field386;
field387 := TfieldNode.Create;
field387.NameField := 'r_midproximal_key';
field387.AccessType := 'inputOutput';
field387.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field387;
field388 := TfieldNode.Create;
field388.NameField := 'r_midproximal_keyValue';
field388.AccessType := 'inputOutput';
field388.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field388;
field389 := TfieldNode.Create;
field389.NameField := 'r_midproximal_changed';
field389.AccessType := 'outputOnly';
field389.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field389;
field390 := TfieldNode.Create;
field390.NameField := 'r_midtarsal_key';
field390.AccessType := 'inputOutput';
field390.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field390;
field391 := TfieldNode.Create;
field391.NameField := 'r_midtarsal_keyValue';
field391.AccessType := 'inputOutput';
field391.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field391;
field392 := TfieldNode.Create;
field392.NameField := 'r_midtarsal_changed';
field392.AccessType := 'outputOnly';
field392.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field392;
field393 := TfieldNode.Create;
field393.NameField := 'r_pinky0_key';
field393.AccessType := 'inputOutput';
field393.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field393;
field394 := TfieldNode.Create;
field394.NameField := 'r_pinky0_keyValue';
field394.AccessType := 'inputOutput';
field394.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field394;
field395 := TfieldNode.Create;
field395.NameField := 'r_pinky0_changed';
field395.AccessType := 'outputOnly';
field395.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field395;
field396 := TfieldNode.Create;
field396.NameField := 'r_pinky1_key';
field396.AccessType := 'inputOutput';
field396.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field396;
field397 := TfieldNode.Create;
field397.NameField := 'r_pinky1_keyValue';
field397.AccessType := 'inputOutput';
field397.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field397;
field398 := TfieldNode.Create;
field398.NameField := 'r_pinky1_changed';
field398.AccessType := 'outputOnly';
field398.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field398;
field399 := TfieldNode.Create;
field399.NameField := 'r_pinky2_key';
field399.AccessType := 'inputOutput';
field399.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field399;
field400 := TfieldNode.Create;
field400.NameField := 'r_pinky2_keyValue';
field400.AccessType := 'inputOutput';
field400.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field400;
field401 := TfieldNode.Create;
field401.NameField := 'r_pinky2_changed';
field401.AccessType := 'outputOnly';
field401.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field401;
field402 := TfieldNode.Create;
field402.NameField := 'r_pinky3_key';
field402.AccessType := 'inputOutput';
field402.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field402;
field403 := TfieldNode.Create;
field403.NameField := 'r_pinky3_keyValue';
field403.AccessType := 'inputOutput';
field403.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field403;
field404 := TfieldNode.Create;
field404.NameField := 'r_pinky3_changed';
field404.AccessType := 'outputOnly';
field404.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field404;
field405 := TfieldNode.Create;
field405.NameField := 'r_pinky_distal_key';
field405.AccessType := 'inputOutput';
field405.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field405;
field406 := TfieldNode.Create;
field406.NameField := 'r_pinky_distal_keyValue';
field406.AccessType := 'inputOutput';
field406.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field406;
field407 := TfieldNode.Create;
field407.NameField := 'r_pinky_distal_changed';
field407.AccessType := 'outputOnly';
field407.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field407;
field408 := TfieldNode.Create;
field408.NameField := 'r_pinky_metacarpal_key';
field408.AccessType := 'inputOutput';
field408.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field408;
field409 := TfieldNode.Create;
field409.NameField := 'r_pinky_metacarpal_keyValue';
field409.AccessType := 'inputOutput';
field409.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field409;
field410 := TfieldNode.Create;
field410.NameField := 'r_pinky_metacarpal_changed';
field410.AccessType := 'outputOnly';
field410.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field410;
field411 := TfieldNode.Create;
field411.NameField := 'r_pinky_middle_key';
field411.AccessType := 'inputOutput';
field411.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field411;
field412 := TfieldNode.Create;
field412.NameField := 'r_pinky_middle_keyValue';
field412.AccessType := 'inputOutput';
field412.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field412;
field413 := TfieldNode.Create;
field413.NameField := 'r_pinky_middle_changed';
field413.AccessType := 'outputOnly';
field413.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field413;
field414 := TfieldNode.Create;
field414.NameField := 'r_pinky_proximal_key';
field414.AccessType := 'inputOutput';
field414.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field414;
field415 := TfieldNode.Create;
field415.NameField := 'r_pinky_proximal_keyValue';
field415.AccessType := 'inputOutput';
field415.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field415;
field416 := TfieldNode.Create;
field416.NameField := 'r_pinky_proximal_changed';
field416.AccessType := 'outputOnly';
field416.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field416;
field417 := TfieldNode.Create;
field417.NameField := 'r_ring0_key';
field417.AccessType := 'inputOutput';
field417.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field417;
field418 := TfieldNode.Create;
field418.NameField := 'r_ring0_keyValue';
field418.AccessType := 'inputOutput';
field418.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field418;
field419 := TfieldNode.Create;
field419.NameField := 'r_ring0_changed';
field419.AccessType := 'outputOnly';
field419.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field419;
field420 := TfieldNode.Create;
field420.NameField := 'r_ring1_key';
field420.AccessType := 'inputOutput';
field420.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field420;
field421 := TfieldNode.Create;
field421.NameField := 'r_ring1_keyValue';
field421.AccessType := 'inputOutput';
field421.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field421;
field422 := TfieldNode.Create;
field422.NameField := 'r_ring1_changed';
field422.AccessType := 'outputOnly';
field422.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field422;
field423 := TfieldNode.Create;
field423.NameField := 'r_ring2_key';
field423.AccessType := 'inputOutput';
field423.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field423;
field424 := TfieldNode.Create;
field424.NameField := 'r_ring2_keyValue';
field424.AccessType := 'inputOutput';
field424.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field424;
field425 := TfieldNode.Create;
field425.NameField := 'r_ring2_changed';
field425.AccessType := 'outputOnly';
field425.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field425;
field426 := TfieldNode.Create;
field426.NameField := 'r_ring3_key';
field426.AccessType := 'inputOutput';
field426.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field426;
field427 := TfieldNode.Create;
field427.NameField := 'r_ring3_keyValue';
field427.AccessType := 'inputOutput';
field427.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field427;
field428 := TfieldNode.Create;
field428.NameField := 'r_ring3_changed';
field428.AccessType := 'outputOnly';
field428.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field428;
field429 := TfieldNode.Create;
field429.NameField := 'r_ring_distal_key';
field429.AccessType := 'inputOutput';
field429.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field429;
field430 := TfieldNode.Create;
field430.NameField := 'r_ring_distal_keyValue';
field430.AccessType := 'inputOutput';
field430.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field430;
field431 := TfieldNode.Create;
field431.NameField := 'r_ring_distal_changed';
field431.AccessType := 'outputOnly';
field431.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field431;
field432 := TfieldNode.Create;
field432.NameField := 'r_ring_metacarpal_key';
field432.AccessType := 'inputOutput';
field432.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field432;
field433 := TfieldNode.Create;
field433.NameField := 'r_ring_metacarpal_keyValue';
field433.AccessType := 'inputOutput';
field433.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field433;
field434 := TfieldNode.Create;
field434.NameField := 'r_ring_metacarpal_changed';
field434.AccessType := 'outputOnly';
field434.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field434;
field435 := TfieldNode.Create;
field435.NameField := 'r_ring_middle_key';
field435.AccessType := 'inputOutput';
field435.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field435;
field436 := TfieldNode.Create;
field436.NameField := 'r_ring_middle_keyValue';
field436.AccessType := 'inputOutput';
field436.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field436;
field437 := TfieldNode.Create;
field437.NameField := 'r_ring_middle_changed';
field437.AccessType := 'outputOnly';
field437.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field437;
field438 := TfieldNode.Create;
field438.NameField := 'r_ring_proximal_key';
field438.AccessType := 'inputOutput';
field438.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field438;
field439 := TfieldNode.Create;
field439.NameField := 'r_ring_proximal_keyValue';
field439.AccessType := 'inputOutput';
field439.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field439;
field440 := TfieldNode.Create;
field440.NameField := 'r_ring_proximal_changed';
field440.AccessType := 'outputOnly';
field440.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field440;
field441 := TfieldNode.Create;
field441.NameField := 'r_scapula_key';
field441.AccessType := 'inputOutput';
field441.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field441;
field442 := TfieldNode.Create;
field442.NameField := 'r_scapula_keyValue';
field442.AccessType := 'inputOutput';
field442.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field442;
field443 := TfieldNode.Create;
field443.NameField := 'r_scapula_changed';
field443.AccessType := 'outputOnly';
field443.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field443;
field444 := TfieldNode.Create;
field444.NameField := 'r_shoulder_key';
field444.AccessType := 'inputOutput';
field444.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field444;
field445 := TfieldNode.Create;
field445.NameField := 'r_shoulder_keyValue';
field445.AccessType := 'inputOutput';
field445.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field445;
field446 := TfieldNode.Create;
field446.NameField := 'r_shoulder_changed';
field446.AccessType := 'outputOnly';
field446.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field446;
field447 := TfieldNode.Create;
field447.NameField := 'r_sternoclavicular_key';
field447.AccessType := 'inputOutput';
field447.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field447;
field448 := TfieldNode.Create;
field448.NameField := 'r_sternoclavicular_keyValue';
field448.AccessType := 'inputOutput';
field448.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field448;
field449 := TfieldNode.Create;
field449.NameField := 'r_sternoclavicular_changed';
field449.AccessType := 'outputOnly';
field449.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field449;
field450 := TfieldNode.Create;
field450.NameField := 'r_subtalar_key';
field450.AccessType := 'inputOutput';
field450.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field450;
field451 := TfieldNode.Create;
field451.NameField := 'r_subtalar_keyValue';
field451.AccessType := 'inputOutput';
field451.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field451;
field452 := TfieldNode.Create;
field452.NameField := 'r_subtalar_changed';
field452.AccessType := 'outputOnly';
field452.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field452;
field453 := TfieldNode.Create;
field453.NameField := 'r_thigh_key';
field453.AccessType := 'inputOutput';
field453.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field453;
field454 := TfieldNode.Create;
field454.NameField := 'r_thigh_keyValue';
field454.AccessType := 'inputOutput';
field454.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field454;
field455 := TfieldNode.Create;
field455.NameField := 'r_thigh_changed';
field455.AccessType := 'outputOnly';
field455.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field455;
field456 := TfieldNode.Create;
field456.NameField := 'r_thumb1_key';
field456.AccessType := 'inputOutput';
field456.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field456;
field457 := TfieldNode.Create;
field457.NameField := 'r_thumb1_keyValue';
field457.AccessType := 'inputOutput';
field457.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field457;
field458 := TfieldNode.Create;
field458.NameField := 'r_thumb1_changed';
field458.AccessType := 'outputOnly';
field458.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field458;
field459 := TfieldNode.Create;
field459.NameField := 'r_thumb2_key';
field459.AccessType := 'inputOutput';
field459.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field459;
field460 := TfieldNode.Create;
field460.NameField := 'r_thumb2_keyValue';
field460.AccessType := 'inputOutput';
field460.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field460;
field461 := TfieldNode.Create;
field461.NameField := 'r_thumb2_changed';
field461.AccessType := 'outputOnly';
field461.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field461;
field462 := TfieldNode.Create;
field462.NameField := 'r_thumb3_key';
field462.AccessType := 'inputOutput';
field462.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field462;
field463 := TfieldNode.Create;
field463.NameField := 'r_thumb3_keyValue';
field463.AccessType := 'inputOutput';
field463.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field463;
field464 := TfieldNode.Create;
field464.NameField := 'r_thumb3_changed';
field464.AccessType := 'outputOnly';
field464.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field464;
field465 := TfieldNode.Create;
field465.NameField := 'r_thumb_distal_key';
field465.AccessType := 'inputOutput';
field465.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field465;
field466 := TfieldNode.Create;
field466.NameField := 'r_thumb_distal_keyValue';
field466.AccessType := 'inputOutput';
field466.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field466;
field467 := TfieldNode.Create;
field467.NameField := 'r_thumb_distal_changed';
field467.AccessType := 'outputOnly';
field467.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field467;
field468 := TfieldNode.Create;
field468.NameField := 'r_thumb_metacarpal_key';
field468.AccessType := 'inputOutput';
field468.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field468;
field469 := TfieldNode.Create;
field469.NameField := 'r_thumb_metacarpal_keyValue';
field469.AccessType := 'inputOutput';
field469.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field469;
field470 := TfieldNode.Create;
field470.NameField := 'r_thumb_metacarpal_changed';
field470.AccessType := 'outputOnly';
field470.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field470;
field471 := TfieldNode.Create;
field471.NameField := 'r_thumb_proximal_key';
field471.AccessType := 'inputOutput';
field471.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field471;
field472 := TfieldNode.Create;
field472.NameField := 'r_thumb_proximal_keyValue';
field472.AccessType := 'inputOutput';
field472.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field472;
field473 := TfieldNode.Create;
field473.NameField := 'r_thumb_proximal_changed';
field473.AccessType := 'outputOnly';
field473.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field473;
field474 := TfieldNode.Create;
field474.NameField := 'r_upperarm_key';
field474.AccessType := 'inputOutput';
field474.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field474;
field475 := TfieldNode.Create;
field475.NameField := 'r_upperarm_keyValue';
field475.AccessType := 'inputOutput';
field475.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field475;
field476 := TfieldNode.Create;
field476.NameField := 'r_upperarm_changed';
field476.AccessType := 'outputOnly';
field476.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field476;
field477 := TfieldNode.Create;
field477.NameField := 'r_wrist_key';
field477.AccessType := 'inputOutput';
field477.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field477;
field478 := TfieldNode.Create;
field478.NameField := 'r_wrist_keyValue';
field478.AccessType := 'inputOutput';
field478.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field478;
field479 := TfieldNode.Create;
field479.NameField := 'r_wrist_changed';
field479.AccessType := 'outputOnly';
field479.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field479;
field480 := TfieldNode.Create;
field480.NameField := 'sacroiliac_key';
field480.AccessType := 'inputOutput';
field480.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field480;
field481 := TfieldNode.Create;
field481.NameField := 'sacroiliac_keyValue';
field481.AccessType := 'inputOutput';
field481.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field481;
field482 := TfieldNode.Create;
field482.NameField := 'sacroiliac_changed';
field482.AccessType := 'outputOnly';
field482.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field482;
field483 := TfieldNode.Create;
field483.NameField := 'sacrum_key';
field483.AccessType := 'inputOutput';
field483.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field483;
field484 := TfieldNode.Create;
field484.NameField := 'sacrum_keyValue';
field484.AccessType := 'inputOutput';
field484.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field484;
field485 := TfieldNode.Create;
field485.NameField := 'sacrum_changed';
field485.AccessType := 'outputOnly';
field485.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field485;
field486 := TfieldNode.Create;
field486.NameField := 'skull_key';
field486.AccessType := 'inputOutput';
field486.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field486;
field487 := TfieldNode.Create;
field487.NameField := 'skull_keyValue';
field487.AccessType := 'inputOutput';
field487.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field487;
field488 := TfieldNode.Create;
field488.NameField := 'skull_changed';
field488.AccessType := 'outputOnly';
field488.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field488;
field489 := TfieldNode.Create;
field489.NameField := 'skullbase_key';
field489.AccessType := 'inputOutput';
field489.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field489;
field490 := TfieldNode.Create;
field490.NameField := 'skullbase_keyValue';
field490.AccessType := 'inputOutput';
field490.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field490;
field491 := TfieldNode.Create;
field491.NameField := 'skullbase_changed';
field491.AccessType := 'outputOnly';
field491.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field491;
field492 := TfieldNode.Create;
field492.NameField := 't10_key';
field492.AccessType := 'inputOutput';
field492.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field492;
field493 := TfieldNode.Create;
field493.NameField := 't10_keyValue';
field493.AccessType := 'inputOutput';
field493.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field493;
field494 := TfieldNode.Create;
field494.NameField := 't10_changed';
field494.AccessType := 'outputOnly';
field494.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field494;
field495 := TfieldNode.Create;
field495.NameField := 't11_key';
field495.AccessType := 'inputOutput';
field495.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field495;
field496 := TfieldNode.Create;
field496.NameField := 't11_keyValue';
field496.AccessType := 'inputOutput';
field496.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field496;
field497 := TfieldNode.Create;
field497.NameField := 't11_changed';
field497.AccessType := 'outputOnly';
field497.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field497;
field498 := TfieldNode.Create;
field498.NameField := 't12_key';
field498.AccessType := 'inputOutput';
field498.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field498;
field499 := TfieldNode.Create;
field499.NameField := 't12_keyValue';
field499.AccessType := 'inputOutput';
field499.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field499;
field500 := TfieldNode.Create;
field500.NameField := 't12_changed';
field500.AccessType := 'outputOnly';
field500.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field500;
field501 := TfieldNode.Create;
field501.NameField := 't1_key';
field501.AccessType := 'inputOutput';
field501.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field501;
field502 := TfieldNode.Create;
field502.NameField := 't1_keyValue';
field502.AccessType := 'inputOutput';
field502.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field502;
field503 := TfieldNode.Create;
field503.NameField := 't1_changed';
field503.AccessType := 'outputOnly';
field503.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field503;
field504 := TfieldNode.Create;
field504.NameField := 't2_key';
field504.AccessType := 'inputOutput';
field504.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field504;
field505 := TfieldNode.Create;
field505.NameField := 't2_keyValue';
field505.AccessType := 'inputOutput';
field505.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field505;
field506 := TfieldNode.Create;
field506.NameField := 't2_changed';
field506.AccessType := 'outputOnly';
field506.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field506;
field507 := TfieldNode.Create;
field507.NameField := 't3_key';
field507.AccessType := 'inputOutput';
field507.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field507;
field508 := TfieldNode.Create;
field508.NameField := 't3_keyValue';
field508.AccessType := 'inputOutput';
field508.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field508;
field509 := TfieldNode.Create;
field509.NameField := 't3_changed';
field509.AccessType := 'outputOnly';
field509.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field509;
field510 := TfieldNode.Create;
field510.NameField := 't4_key';
field510.AccessType := 'inputOutput';
field510.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field510;
field511 := TfieldNode.Create;
field511.NameField := 't4_keyValue';
field511.AccessType := 'inputOutput';
field511.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field511;
field512 := TfieldNode.Create;
field512.NameField := 't4_changed';
field512.AccessType := 'outputOnly';
field512.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field512;
field513 := TfieldNode.Create;
field513.NameField := 't5_key';
field513.AccessType := 'inputOutput';
field513.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field513;
field514 := TfieldNode.Create;
field514.NameField := 't5_keyValue';
field514.AccessType := 'inputOutput';
field514.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field514;
field515 := TfieldNode.Create;
field515.NameField := 't5_changed';
field515.AccessType := 'outputOnly';
field515.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field515;
field516 := TfieldNode.Create;
field516.NameField := 't6_key';
field516.AccessType := 'inputOutput';
field516.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field516;
field517 := TfieldNode.Create;
field517.NameField := 't6_keyValue';
field517.AccessType := 'inputOutput';
field517.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field517;
field518 := TfieldNode.Create;
field518.NameField := 't6_changed';
field518.AccessType := 'outputOnly';
field518.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field518;
field519 := TfieldNode.Create;
field519.NameField := 't7_key';
field519.AccessType := 'inputOutput';
field519.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field519;
field520 := TfieldNode.Create;
field520.NameField := 't7_keyValue';
field520.AccessType := 'inputOutput';
field520.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field520;
field521 := TfieldNode.Create;
field521.NameField := 't7_changed';
field521.AccessType := 'outputOnly';
field521.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field521;
field522 := TfieldNode.Create;
field522.NameField := 't8_key';
field522.AccessType := 'inputOutput';
field522.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field522;
field523 := TfieldNode.Create;
field523.NameField := 't8_keyValue';
field523.AccessType := 'inputOutput';
field523.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field523;
field524 := TfieldNode.Create;
field524.NameField := 't8_changed';
field524.AccessType := 'outputOnly';
field524.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field524;
field525 := TfieldNode.Create;
field525.NameField := 't9_key';
field525.AccessType := 'inputOutput';
field525.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field525;
field526 := TfieldNode.Create;
field526.NameField := 't9_keyValue';
field526.AccessType := 'inputOutput';
field526.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field526;
field527 := TfieldNode.Create;
field527.NameField := 't9_changed';
field527.AccessType := 'outputOnly';
field527.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field527;
field528 := TfieldNode.Create;
field528.NameField := 'temporomandibular_key';
field528.AccessType := 'inputOutput';
field528.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field528;
field529 := TfieldNode.Create;
field529.NameField := 'temporomandibular_keyValue';
field529.AccessType := 'inputOutput';
field529.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field529;
field530 := TfieldNode.Create;
field530.NameField := 'temporomandibular_changed';
field530.AccessType := 'outputOnly';
field530.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field530;
field531 := TfieldNode.Create;
field531.NameField := 'vc1_key';
field531.AccessType := 'inputOutput';
field531.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field531;
field532 := TfieldNode.Create;
field532.NameField := 'vc1_keyValue';
field532.AccessType := 'inputOutput';
field532.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field532;
field533 := TfieldNode.Create;
field533.NameField := 'vc1_changed';
field533.AccessType := 'outputOnly';
field533.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field533;
field534 := TfieldNode.Create;
field534.NameField := 'vc2_key';
field534.AccessType := 'inputOutput';
field534.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field534;
field535 := TfieldNode.Create;
field535.NameField := 'vc2_keyValue';
field535.AccessType := 'inputOutput';
field535.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field535;
field536 := TfieldNode.Create;
field536.NameField := 'vc2_changed';
field536.AccessType := 'outputOnly';
field536.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field536;
field537 := TfieldNode.Create;
field537.NameField := 'vc3_key';
field537.AccessType := 'inputOutput';
field537.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field537;
field538 := TfieldNode.Create;
field538.NameField := 'vc3_keyValue';
field538.AccessType := 'inputOutput';
field538.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field538;
field539 := TfieldNode.Create;
field539.NameField := 'vc3_changed';
field539.AccessType := 'outputOnly';
field539.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field539;
field540 := TfieldNode.Create;
field540.NameField := 'vc4_key';
field540.AccessType := 'inputOutput';
field540.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field540;
field541 := TfieldNode.Create;
field541.NameField := 'vc4_keyValue';
field541.AccessType := 'inputOutput';
field541.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field541;
field542 := TfieldNode.Create;
field542.NameField := 'vc4_changed';
field542.AccessType := 'outputOnly';
field542.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field542;
field543 := TfieldNode.Create;
field543.NameField := 'vc5_key';
field543.AccessType := 'inputOutput';
field543.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field543;
field544 := TfieldNode.Create;
field544.NameField := 'vc5_keyValue';
field544.AccessType := 'inputOutput';
field544.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field544;
field545 := TfieldNode.Create;
field545.NameField := 'vc5_changed';
field545.AccessType := 'outputOnly';
field545.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field545;
field546 := TfieldNode.Create;
field546.NameField := 'vc6_key';
field546.AccessType := 'inputOutput';
field546.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field546;
field547 := TfieldNode.Create;
field547.NameField := 'vc6_keyValue';
field547.AccessType := 'inputOutput';
field547.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field547;
field548 := TfieldNode.Create;
field548.NameField := 'vc6_changed';
field548.AccessType := 'outputOnly';
field548.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field548;
field549 := TfieldNode.Create;
field549.NameField := 'vc7_key';
field549.AccessType := 'inputOutput';
field549.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field549;
field550 := TfieldNode.Create;
field550.NameField := 'vc7_keyValue';
field550.AccessType := 'inputOutput';
field550.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field550;
field551 := TfieldNode.Create;
field551.NameField := 'vc7_changed';
field551.AccessType := 'outputOnly';
field551.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field551;
field552 := TfieldNode.Create;
field552.NameField := 'vl1_key';
field552.AccessType := 'inputOutput';
field552.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field552;
field553 := TfieldNode.Create;
field553.NameField := 'vl1_keyValue';
field553.AccessType := 'inputOutput';
field553.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field553;
field554 := TfieldNode.Create;
field554.NameField := 'vl1_changed';
field554.AccessType := 'outputOnly';
field554.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field554;
field555 := TfieldNode.Create;
field555.NameField := 'vl2_key';
field555.AccessType := 'inputOutput';
field555.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field555;
field556 := TfieldNode.Create;
field556.NameField := 'vl2_keyValue';
field556.AccessType := 'inputOutput';
field556.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field556;
field557 := TfieldNode.Create;
field557.NameField := 'vl2_changed';
field557.AccessType := 'outputOnly';
field557.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field557;
field558 := TfieldNode.Create;
field558.NameField := 'vl3_key';
field558.AccessType := 'inputOutput';
field558.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field558;
field559 := TfieldNode.Create;
field559.NameField := 'vl3_keyValue';
field559.AccessType := 'inputOutput';
field559.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field559;
field560 := TfieldNode.Create;
field560.NameField := 'vl3_changed';
field560.AccessType := 'outputOnly';
field560.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field560;
field561 := TfieldNode.Create;
field561.NameField := 'vl4_key';
field561.AccessType := 'inputOutput';
field561.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field561;
field562 := TfieldNode.Create;
field562.NameField := 'vl4_keyValue';
field562.AccessType := 'inputOutput';
field562.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field562;
field563 := TfieldNode.Create;
field563.NameField := 'vl4_changed';
field563.AccessType := 'outputOnly';
field563.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field563;
field564 := TfieldNode.Create;
field564.NameField := 'vl5_key';
field564.AccessType := 'inputOutput';
field564.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field564;
field565 := TfieldNode.Create;
field565.NameField := 'vl5_keyValue';
field565.AccessType := 'inputOutput';
field565.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field565;
field566 := TfieldNode.Create;
field566.NameField := 'vl5_changed';
field566.AccessType := 'outputOnly';
field566.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field566;
field567 := TfieldNode.Create;
field567.NameField := 'vt10_key';
field567.AccessType := 'inputOutput';
field567.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field567;
field568 := TfieldNode.Create;
field568.NameField := 'vt10_keyValue';
field568.AccessType := 'inputOutput';
field568.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field568;
field569 := TfieldNode.Create;
field569.NameField := 'vt10_changed';
field569.AccessType := 'outputOnly';
field569.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field569;
field570 := TfieldNode.Create;
field570.NameField := 'vt11_key';
field570.AccessType := 'inputOutput';
field570.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field570;
field571 := TfieldNode.Create;
field571.NameField := 'vt11_keyValue';
field571.AccessType := 'inputOutput';
field571.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field571;
field572 := TfieldNode.Create;
field572.NameField := 'vt11_changed';
field572.AccessType := 'outputOnly';
field572.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field572;
field573 := TfieldNode.Create;
field573.NameField := 'vt12_key';
field573.AccessType := 'inputOutput';
field573.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field573;
field574 := TfieldNode.Create;
field574.NameField := 'vt12_keyValue';
field574.AccessType := 'inputOutput';
field574.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field574;
field575 := TfieldNode.Create;
field575.NameField := 'vt12_changed';
field575.AccessType := 'outputOnly';
field575.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field575;
field576 := TfieldNode.Create;
field576.NameField := 'vt1_key';
field576.AccessType := 'inputOutput';
field576.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field576;
field577 := TfieldNode.Create;
field577.NameField := 'vt1_keyValue';
field577.AccessType := 'inputOutput';
field577.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field577;
field578 := TfieldNode.Create;
field578.NameField := 'vt1_changed';
field578.AccessType := 'outputOnly';
field578.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field578;
field579 := TfieldNode.Create;
field579.NameField := 'vt2_key';
field579.AccessType := 'inputOutput';
field579.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field579;
field580 := TfieldNode.Create;
field580.NameField := 'vt2_keyValue';
field580.AccessType := 'inputOutput';
field580.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field580;
field581 := TfieldNode.Create;
field581.NameField := 'vt2_changed';
field581.AccessType := 'outputOnly';
field581.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field581;
field582 := TfieldNode.Create;
field582.NameField := 'vt3_key';
field582.AccessType := 'inputOutput';
field582.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field582;
field583 := TfieldNode.Create;
field583.NameField := 'vt3_keyValue';
field583.AccessType := 'inputOutput';
field583.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field583;
field584 := TfieldNode.Create;
field584.NameField := 'vt3_changed';
field584.AccessType := 'outputOnly';
field584.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field584;
field585 := TfieldNode.Create;
field585.NameField := 'vt4_key';
field585.AccessType := 'inputOutput';
field585.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field585;
field586 := TfieldNode.Create;
field586.NameField := 'vt4_keyValue';
field586.AccessType := 'inputOutput';
field586.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field586;
field587 := TfieldNode.Create;
field587.NameField := 'vt4_changed';
field587.AccessType := 'outputOnly';
field587.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field587;
field588 := TfieldNode.Create;
field588.NameField := 'vt5_key';
field588.AccessType := 'inputOutput';
field588.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field588;
field589 := TfieldNode.Create;
field589.NameField := 'vt5_keyValue';
field589.AccessType := 'inputOutput';
field589.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field589;
field590 := TfieldNode.Create;
field590.NameField := 'vt5_changed';
field590.AccessType := 'outputOnly';
field590.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field590;
field591 := TfieldNode.Create;
field591.NameField := 'vt6_key';
field591.AccessType := 'inputOutput';
field591.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field591;
field592 := TfieldNode.Create;
field592.NameField := 'vt6_keyValue';
field592.AccessType := 'inputOutput';
field592.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field592;
field593 := TfieldNode.Create;
field593.NameField := 'vt6_changed';
field593.AccessType := 'outputOnly';
field593.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field593;
field594 := TfieldNode.Create;
field594.NameField := 'vt7_key';
field594.AccessType := 'inputOutput';
field594.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field594;
field595 := TfieldNode.Create;
field595.NameField := 'vt7_keyValue';
field595.AccessType := 'inputOutput';
field595.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field595;
field596 := TfieldNode.Create;
field596.NameField := 'vt7_changed';
field596.AccessType := 'outputOnly';
field596.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field596;
field597 := TfieldNode.Create;
field597.NameField := 'vt8_key';
field597.AccessType := 'inputOutput';
field597.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field597;
field598 := TfieldNode.Create;
field598.NameField := 'vt8_keyValue';
field598.AccessType := 'inputOutput';
field598.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field598;
field599 := TfieldNode.Create;
field599.NameField := 'vt8_changed';
field599.AccessType := 'outputOnly';
field599.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field599;
field600 := TfieldNode.Create;
field600.NameField := 'vt9_key';
field600.AccessType := 'inputOutput';
field600.Type := 'MFFloat';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field600;
field601 := TfieldNode.Create;
field601.NameField := 'vt9_keyValue';
field601.AccessType := 'inputOutput';
field601.Type := 'MFRotation';
{ no default value }
{ .AddField }
ProtoInterface21.Field := field601;
field602 := TfieldNode.Create;
field602.NameField := 'vt9_changed';
field602.AccessType := 'outputOnly';
field602.Type := 'SFRotation';
{ .AddField }
ProtoInterface21.Field := field602;
{ .SetProtoInterface }
ProtoDeclare20.ProtoInterface := ProtoInterface21;
ProtoBody603 := TProtoBodyNode.Create;
{ design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators }
TimeSensor604 := TTimeSensorNode.Create;
IS605 := TISNode.Create;
connect606 := TconnectNode.Create;
connect606.NodeField := 'enabled';
connect606.ProtoField := 'enabled';
{ .AddConnect }
IS605.Connect := connect606;
connect607 := TconnectNode.Create;
connect607.NodeField := 'cycleInterval';
connect607.ProtoField := 'cycleInterval';
{ .AddConnect }
IS605.Connect := connect607;
connect608 := TconnectNode.Create;
connect608.NodeField := 'loop';
connect608.ProtoField := 'loop';
{ .AddConnect }
IS605.Connect := connect608;
connect609 := TconnectNode.Create;
connect609.NodeField := 'startTime';
connect609.ProtoField := 'startTime';
{ .AddConnect }
IS605.Connect := connect609;
connect610 := TconnectNode.Create;
connect610.NodeField := 'stopTime';
connect610.ProtoField := 'stopTime';
{ .AddConnect }
IS605.Connect := connect610;
connect611 := TconnectNode.Create;
connect611.NodeField := 'pauseTime';
connect611.ProtoField := 'pauseTime';
{ .AddConnect }
IS605.Connect := connect611;
connect612 := TconnectNode.Create;
connect612.NodeField := 'resumeTime';
connect612.ProtoField := 'resumeTime';
{ .AddConnect }
IS605.Connect := connect612;
connect613 := TconnectNode.Create;
connect613.NodeField := 'cycleTime';
connect613.ProtoField := 'cycleTime';
{ .AddConnect }
IS605.Connect := connect613;
connect614 := TconnectNode.Create;
connect614.NodeField := 'isActive';
connect614.ProtoField := 'isActive';
{ .AddConnect }
IS605.Connect := connect614;
connect615 := TconnectNode.Create;
connect615.NodeField := 'isPaused';
connect615.ProtoField := 'isPaused';
{ .AddConnect }
IS605.Connect := connect615;
connect616 := TconnectNode.Create;
connect616.NodeField := 'elapsedTime';
connect616.ProtoField := 'elapsedTime';
{ .AddConnect }
IS605.Connect := connect616;
connect617 := TconnectNode.Create;
connect617.NodeField := 'time';
connect617.ProtoField := 'time';
{ .AddConnect }
IS605.Connect := connect617;
connect618 := TconnectNode.Create;
connect618.NodeField := 'fraction_changed';
connect618.ProtoField := 'fraction_changed';
{ .AddConnect }
IS605.Connect := connect618;
{ .SetIS }
TimeSensor604.IS := IS605;
{ .AddChildren }
ProtoBody603.AddChildren([TimeSensor604]);
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Switch619 := TSwitchNode.Create;
Switch619.WhichChoice := -1;
IS620 := TISNode.Create;
connect621 := TconnectNode.Create;
connect621.NodeField := 'whichChoice';
connect621.ProtoField := 'supportedLOA';
{ .AddConnect }
IS620.Connect := connect621;
{ .SetIS }
Switch619.IS := IS620;
{ .AddChildren }
ProtoBody603.AddChildren([Switch619]);
PositionInterpolator622 := TPositionInterpolatorNode.Create;
IS623 := TISNode.Create;
connect624 := TconnectNode.Create;
connect624.NodeField := 'key';
connect624.ProtoField := 'HumanoidRoot_translation_key';
{ .AddConnect }
IS623.Connect := connect624;
connect625 := TconnectNode.Create;
connect625.NodeField := 'keyValue';
connect625.ProtoField := 'HumanoidRoot_translation_keyValue';
{ .AddConnect }
IS623.Connect := connect625;
connect626 := TconnectNode.Create;
connect626.NodeField := 'value_changed';
connect626.ProtoField := 'HumanoidRoot_translation_changed';
{ .AddConnect }
IS623.Connect := connect626;
{ .SetIS }
PositionInterpolator622.IS := IS623;
{ .AddChildren }
ProtoBody603.AddChildren([PositionInterpolator622]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, PositionInterpolator622.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator628 := TOrientationInterpolatorNode.Create;
IS629 := TISNode.Create;
connect630 := TconnectNode.Create;
connect630.NodeField := 'key';
connect630.ProtoField := 'HumanoidRoot_rotation_key';
{ .AddConnect }
IS629.Connect := connect630;
connect631 := TconnectNode.Create;
connect631.NodeField := 'keyValue';
connect631.ProtoField := 'HumanoidRoot_rotation_keyValue';
{ .AddConnect }
IS629.Connect := connect631;
connect632 := TconnectNode.Create;
connect632.NodeField := 'value_changed';
connect632.ProtoField := 'HumanoidRoot_rotation_changed';
{ .AddConnect }
IS629.Connect := connect632;
{ .SetIS }
OrientationInterpolator628.IS := IS629;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator628]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator628.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator634 := TOrientationInterpolatorNode.Create;
IS635 := TISNode.Create;
connect636 := TconnectNode.Create;
connect636.NodeField := 'key';
connect636.ProtoField := 'c1_key';
{ .AddConnect }
IS635.Connect := connect636;
connect637 := TconnectNode.Create;
connect637.NodeField := 'keyValue';
connect637.ProtoField := 'c1_keyValue';
{ .AddConnect }
IS635.Connect := connect637;
connect638 := TconnectNode.Create;
connect638.NodeField := 'value_changed';
connect638.ProtoField := 'c1_changed';
{ .AddConnect }
IS635.Connect := connect638;
{ .SetIS }
OrientationInterpolator634.IS := IS635;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator634]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator634.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator640 := TOrientationInterpolatorNode.Create;
IS641 := TISNode.Create;
connect642 := TconnectNode.Create;
connect642.NodeField := 'key';
connect642.ProtoField := 'c2_key';
{ .AddConnect }
IS641.Connect := connect642;
connect643 := TconnectNode.Create;
connect643.NodeField := 'keyValue';
connect643.ProtoField := 'c2_keyValue';
{ .AddConnect }
IS641.Connect := connect643;
connect644 := TconnectNode.Create;
connect644.NodeField := 'value_changed';
connect644.ProtoField := 'c2_changed';
{ .AddConnect }
IS641.Connect := connect644;
{ .SetIS }
OrientationInterpolator640.IS := IS641;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator640]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator640.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator646 := TOrientationInterpolatorNode.Create;
IS647 := TISNode.Create;
connect648 := TconnectNode.Create;
connect648.NodeField := 'key';
connect648.ProtoField := 'c3_key';
{ .AddConnect }
IS647.Connect := connect648;
connect649 := TconnectNode.Create;
connect649.NodeField := 'keyValue';
connect649.ProtoField := 'c3_keyValue';
{ .AddConnect }
IS647.Connect := connect649;
connect650 := TconnectNode.Create;
connect650.NodeField := 'value_changed';
connect650.ProtoField := 'c3_changed';
{ .AddConnect }
IS647.Connect := connect650;
{ .SetIS }
OrientationInterpolator646.IS := IS647;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator646]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator646.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator652 := TOrientationInterpolatorNode.Create;
IS653 := TISNode.Create;
connect654 := TconnectNode.Create;
connect654.NodeField := 'key';
connect654.ProtoField := 'c4_key';
{ .AddConnect }
IS653.Connect := connect654;
connect655 := TconnectNode.Create;
connect655.NodeField := 'keyValue';
connect655.ProtoField := 'c4_keyValue';
{ .AddConnect }
IS653.Connect := connect655;
connect656 := TconnectNode.Create;
connect656.NodeField := 'value_changed';
connect656.ProtoField := 'c4_changed';
{ .AddConnect }
IS653.Connect := connect656;
{ .SetIS }
OrientationInterpolator652.IS := IS653;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator652]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator652.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator658 := TOrientationInterpolatorNode.Create;
IS659 := TISNode.Create;
connect660 := TconnectNode.Create;
connect660.NodeField := 'key';
connect660.ProtoField := 'c5_key';
{ .AddConnect }
IS659.Connect := connect660;
connect661 := TconnectNode.Create;
connect661.NodeField := 'keyValue';
connect661.ProtoField := 'c5_keyValue';
{ .AddConnect }
IS659.Connect := connect661;
connect662 := TconnectNode.Create;
connect662.NodeField := 'value_changed';
connect662.ProtoField := 'c5_changed';
{ .AddConnect }
IS659.Connect := connect662;
{ .SetIS }
OrientationInterpolator658.IS := IS659;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator658]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator658.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator664 := TOrientationInterpolatorNode.Create;
IS665 := TISNode.Create;
connect666 := TconnectNode.Create;
connect666.NodeField := 'key';
connect666.ProtoField := 'c6_key';
{ .AddConnect }
IS665.Connect := connect666;
connect667 := TconnectNode.Create;
connect667.NodeField := 'keyValue';
connect667.ProtoField := 'c6_keyValue';
{ .AddConnect }
IS665.Connect := connect667;
connect668 := TconnectNode.Create;
connect668.NodeField := 'value_changed';
connect668.ProtoField := 'c6_changed';
{ .AddConnect }
IS665.Connect := connect668;
{ .SetIS }
OrientationInterpolator664.IS := IS665;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator664]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator664.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator670 := TOrientationInterpolatorNode.Create;
IS671 := TISNode.Create;
connect672 := TconnectNode.Create;
connect672.NodeField := 'key';
connect672.ProtoField := 'c7_key';
{ .AddConnect }
IS671.Connect := connect672;
connect673 := TconnectNode.Create;
connect673.NodeField := 'keyValue';
connect673.ProtoField := 'c7_keyValue';
{ .AddConnect }
IS671.Connect := connect673;
connect674 := TconnectNode.Create;
connect674.NodeField := 'value_changed';
connect674.ProtoField := 'c7_changed';
{ .AddConnect }
IS671.Connect := connect674;
{ .SetIS }
OrientationInterpolator670.IS := IS671;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator670]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator670.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator676 := TOrientationInterpolatorNode.Create;
IS677 := TISNode.Create;
connect678 := TconnectNode.Create;
connect678.NodeField := 'key';
connect678.ProtoField := 'jaw_key';
{ .AddConnect }
IS677.Connect := connect678;
connect679 := TconnectNode.Create;
connect679.NodeField := 'keyValue';
connect679.ProtoField := 'jaw_keyValue';
{ .AddConnect }
IS677.Connect := connect679;
connect680 := TconnectNode.Create;
connect680.NodeField := 'value_changed';
connect680.ProtoField := 'jaw_changed';
{ .AddConnect }
IS677.Connect := connect680;
{ .SetIS }
OrientationInterpolator676.IS := IS677;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator676]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator676.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator682 := TOrientationInterpolatorNode.Create;
IS683 := TISNode.Create;
connect684 := TconnectNode.Create;
connect684.NodeField := 'key';
connect684.ProtoField := 'l1_key';
{ .AddConnect }
IS683.Connect := connect684;
connect685 := TconnectNode.Create;
connect685.NodeField := 'keyValue';
connect685.ProtoField := 'l1_keyValue';
{ .AddConnect }
IS683.Connect := connect685;
connect686 := TconnectNode.Create;
connect686.NodeField := 'value_changed';
connect686.ProtoField := 'l1_changed';
{ .AddConnect }
IS683.Connect := connect686;
{ .SetIS }
OrientationInterpolator682.IS := IS683;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator682]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator682.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator688 := TOrientationInterpolatorNode.Create;
IS689 := TISNode.Create;
connect690 := TconnectNode.Create;
connect690.NodeField := 'key';
connect690.ProtoField := 'l2_key';
{ .AddConnect }
IS689.Connect := connect690;
connect691 := TconnectNode.Create;
connect691.NodeField := 'keyValue';
connect691.ProtoField := 'l2_keyValue';
{ .AddConnect }
IS689.Connect := connect691;
connect692 := TconnectNode.Create;
connect692.NodeField := 'value_changed';
connect692.ProtoField := 'l2_changed';
{ .AddConnect }
IS689.Connect := connect692;
{ .SetIS }
OrientationInterpolator688.IS := IS689;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator688]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator688.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator694 := TOrientationInterpolatorNode.Create;
IS695 := TISNode.Create;
connect696 := TconnectNode.Create;
connect696.NodeField := 'key';
connect696.ProtoField := 'l3_key';
{ .AddConnect }
IS695.Connect := connect696;
connect697 := TconnectNode.Create;
connect697.NodeField := 'keyValue';
connect697.ProtoField := 'l3_keyValue';
{ .AddConnect }
IS695.Connect := connect697;
connect698 := TconnectNode.Create;
connect698.NodeField := 'value_changed';
connect698.ProtoField := 'l3_changed';
{ .AddConnect }
IS695.Connect := connect698;
{ .SetIS }
OrientationInterpolator694.IS := IS695;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator694]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator694.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator700 := TOrientationInterpolatorNode.Create;
IS701 := TISNode.Create;
connect702 := TconnectNode.Create;
connect702.NodeField := 'key';
connect702.ProtoField := 'l4_key';
{ .AddConnect }
IS701.Connect := connect702;
connect703 := TconnectNode.Create;
connect703.NodeField := 'keyValue';
connect703.ProtoField := 'l4_keyValue';
{ .AddConnect }
IS701.Connect := connect703;
connect704 := TconnectNode.Create;
connect704.NodeField := 'value_changed';
connect704.ProtoField := 'l4_changed';
{ .AddConnect }
IS701.Connect := connect704;
{ .SetIS }
OrientationInterpolator700.IS := IS701;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator700]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator700.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator706 := TOrientationInterpolatorNode.Create;
IS707 := TISNode.Create;
connect708 := TconnectNode.Create;
connect708.NodeField := 'key';
connect708.ProtoField := 'l5_key';
{ .AddConnect }
IS707.Connect := connect708;
connect709 := TconnectNode.Create;
connect709.NodeField := 'keyValue';
connect709.ProtoField := 'l5_keyValue';
{ .AddConnect }
IS707.Connect := connect709;
connect710 := TconnectNode.Create;
connect710.NodeField := 'value_changed';
connect710.ProtoField := 'l5_changed';
{ .AddConnect }
IS707.Connect := connect710;
{ .SetIS }
OrientationInterpolator706.IS := IS707;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator706]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator706.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator712 := TOrientationInterpolatorNode.Create;
IS713 := TISNode.Create;
connect714 := TconnectNode.Create;
connect714.NodeField := 'key';
connect714.ProtoField := 'l_acromioclavicular_key';
{ .AddConnect }
IS713.Connect := connect714;
connect715 := TconnectNode.Create;
connect715.NodeField := 'keyValue';
connect715.ProtoField := 'l_acromioclavicular_keyValue';
{ .AddConnect }
IS713.Connect := connect715;
connect716 := TconnectNode.Create;
connect716.NodeField := 'value_changed';
connect716.ProtoField := 'l_acromioclavicular_changed';
{ .AddConnect }
IS713.Connect := connect716;
{ .SetIS }
OrientationInterpolator712.IS := IS713;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator712]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator712.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator718 := TOrientationInterpolatorNode.Create;
IS719 := TISNode.Create;
connect720 := TconnectNode.Create;
connect720.NodeField := 'key';
connect720.ProtoField := 'l_ankle_key';
{ .AddConnect }
IS719.Connect := connect720;
connect721 := TconnectNode.Create;
connect721.NodeField := 'keyValue';
connect721.ProtoField := 'l_ankle_keyValue';
{ .AddConnect }
IS719.Connect := connect721;
connect722 := TconnectNode.Create;
connect722.NodeField := 'value_changed';
connect722.ProtoField := 'l_ankle_changed';
{ .AddConnect }
IS719.Connect := connect722;
{ .SetIS }
OrientationInterpolator718.IS := IS719;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator718]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator718.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator724 := TOrientationInterpolatorNode.Create;
IS725 := TISNode.Create;
connect726 := TconnectNode.Create;
connect726.NodeField := 'key';
connect726.ProtoField := 'l_calf_key';
{ .AddConnect }
IS725.Connect := connect726;
connect727 := TconnectNode.Create;
connect727.NodeField := 'keyValue';
connect727.ProtoField := 'l_calf_keyValue';
{ .AddConnect }
IS725.Connect := connect727;
connect728 := TconnectNode.Create;
connect728.NodeField := 'value_changed';
connect728.ProtoField := 'l_calf_changed';
{ .AddConnect }
IS725.Connect := connect728;
{ .SetIS }
OrientationInterpolator724.IS := IS725;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator724]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator724.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator730 := TOrientationInterpolatorNode.Create;
IS731 := TISNode.Create;
connect732 := TconnectNode.Create;
connect732.NodeField := 'key';
connect732.ProtoField := 'l_clavicle_key';
{ .AddConnect }
IS731.Connect := connect732;
connect733 := TconnectNode.Create;
connect733.NodeField := 'keyValue';
connect733.ProtoField := 'l_clavicle_keyValue';
{ .AddConnect }
IS731.Connect := connect733;
connect734 := TconnectNode.Create;
connect734.NodeField := 'value_changed';
connect734.ProtoField := 'l_clavicle_changed';
{ .AddConnect }
IS731.Connect := connect734;
{ .SetIS }
OrientationInterpolator730.IS := IS731;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator730]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator730.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator736 := TOrientationInterpolatorNode.Create;
IS737 := TISNode.Create;
connect738 := TconnectNode.Create;
connect738.NodeField := 'key';
connect738.ProtoField := 'l_elbow_key';
{ .AddConnect }
IS737.Connect := connect738;
connect739 := TconnectNode.Create;
connect739.NodeField := 'keyValue';
connect739.ProtoField := 'l_elbow_keyValue';
{ .AddConnect }
IS737.Connect := connect739;
connect740 := TconnectNode.Create;
connect740.NodeField := 'value_changed';
connect740.ProtoField := 'l_elbow_changed';
{ .AddConnect }
IS737.Connect := connect740;
{ .SetIS }
OrientationInterpolator736.IS := IS737;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator736]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator736.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator742 := TOrientationInterpolatorNode.Create;
IS743 := TISNode.Create;
connect744 := TconnectNode.Create;
connect744.NodeField := 'key';
connect744.ProtoField := 'l_eyeball_key';
{ .AddConnect }
IS743.Connect := connect744;
connect745 := TconnectNode.Create;
connect745.NodeField := 'keyValue';
connect745.ProtoField := 'l_eyeball_keyValue';
{ .AddConnect }
IS743.Connect := connect745;
connect746 := TconnectNode.Create;
connect746.NodeField := 'value_changed';
connect746.ProtoField := 'l_eyeball_changed';
{ .AddConnect }
IS743.Connect := connect746;
{ .SetIS }
OrientationInterpolator742.IS := IS743;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator742]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator742.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator748 := TOrientationInterpolatorNode.Create;
IS749 := TISNode.Create;
connect750 := TconnectNode.Create;
connect750.NodeField := 'key';
connect750.ProtoField := 'l_eyeball_joint_key';
{ .AddConnect }
IS749.Connect := connect750;
connect751 := TconnectNode.Create;
connect751.NodeField := 'keyValue';
connect751.ProtoField := 'l_eyeball_joint_keyValue';
{ .AddConnect }
IS749.Connect := connect751;
connect752 := TconnectNode.Create;
connect752.NodeField := 'value_changed';
connect752.ProtoField := 'l_eyeball_joint_changed';
{ .AddConnect }
IS749.Connect := connect752;
{ .SetIS }
OrientationInterpolator748.IS := IS749;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator748]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator748.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator754 := TOrientationInterpolatorNode.Create;
IS755 := TISNode.Create;
connect756 := TconnectNode.Create;
connect756.NodeField := 'key';
connect756.ProtoField := 'l_eyebrow_key';
{ .AddConnect }
IS755.Connect := connect756;
connect757 := TconnectNode.Create;
connect757.NodeField := 'keyValue';
connect757.ProtoField := 'l_eyebrow_keyValue';
{ .AddConnect }
IS755.Connect := connect757;
connect758 := TconnectNode.Create;
connect758.NodeField := 'value_changed';
connect758.ProtoField := 'l_eyebrow_changed';
{ .AddConnect }
IS755.Connect := connect758;
{ .SetIS }
OrientationInterpolator754.IS := IS755;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator754]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator754.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator760 := TOrientationInterpolatorNode.Create;
IS761 := TISNode.Create;
connect762 := TconnectNode.Create;
connect762.NodeField := 'key';
connect762.ProtoField := 'l_eyebrow_joint_key';
{ .AddConnect }
IS761.Connect := connect762;
connect763 := TconnectNode.Create;
connect763.NodeField := 'keyValue';
connect763.ProtoField := 'l_eyebrow_joint_keyValue';
{ .AddConnect }
IS761.Connect := connect763;
connect764 := TconnectNode.Create;
connect764.NodeField := 'value_changed';
connect764.ProtoField := 'l_eyebrow_joint_changed';
{ .AddConnect }
IS761.Connect := connect764;
{ .SetIS }
OrientationInterpolator760.IS := IS761;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator760]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator760.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator766 := TOrientationInterpolatorNode.Create;
IS767 := TISNode.Create;
connect768 := TconnectNode.Create;
connect768.NodeField := 'key';
connect768.ProtoField := 'l_eyelid_key';
{ .AddConnect }
IS767.Connect := connect768;
connect769 := TconnectNode.Create;
connect769.NodeField := 'keyValue';
connect769.ProtoField := 'l_eyelid_keyValue';
{ .AddConnect }
IS767.Connect := connect769;
connect770 := TconnectNode.Create;
connect770.NodeField := 'value_changed';
connect770.ProtoField := 'l_eyelid_changed';
{ .AddConnect }
IS767.Connect := connect770;
{ .SetIS }
OrientationInterpolator766.IS := IS767;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator766]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator766.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator772 := TOrientationInterpolatorNode.Create;
IS773 := TISNode.Create;
connect774 := TconnectNode.Create;
connect774.NodeField := 'key';
connect774.ProtoField := 'l_eyelid_joint_key';
{ .AddConnect }
IS773.Connect := connect774;
connect775 := TconnectNode.Create;
connect775.NodeField := 'keyValue';
connect775.ProtoField := 'l_eyelid_joint_keyValue';
{ .AddConnect }
IS773.Connect := connect775;
connect776 := TconnectNode.Create;
connect776.NodeField := 'value_changed';
connect776.ProtoField := 'l_eyelid_joint_changed';
{ .AddConnect }
IS773.Connect := connect776;
{ .SetIS }
OrientationInterpolator772.IS := IS773;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator772]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator772.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator778 := TOrientationInterpolatorNode.Create;
IS779 := TISNode.Create;
connect780 := TconnectNode.Create;
connect780.NodeField := 'key';
connect780.ProtoField := 'l_forearm_key';
{ .AddConnect }
IS779.Connect := connect780;
connect781 := TconnectNode.Create;
connect781.NodeField := 'keyValue';
connect781.ProtoField := 'l_forearm_keyValue';
{ .AddConnect }
IS779.Connect := connect781;
connect782 := TconnectNode.Create;
connect782.NodeField := 'value_changed';
connect782.ProtoField := 'l_forearm_changed';
{ .AddConnect }
IS779.Connect := connect782;
{ .SetIS }
OrientationInterpolator778.IS := IS779;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator778]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator778.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator784 := TOrientationInterpolatorNode.Create;
IS785 := TISNode.Create;
connect786 := TconnectNode.Create;
connect786.NodeField := 'key';
connect786.ProtoField := 'l_forefoot_key';
{ .AddConnect }
IS785.Connect := connect786;
connect787 := TconnectNode.Create;
connect787.NodeField := 'keyValue';
connect787.ProtoField := 'l_forefoot_keyValue';
{ .AddConnect }
IS785.Connect := connect787;
connect788 := TconnectNode.Create;
connect788.NodeField := 'value_changed';
connect788.ProtoField := 'l_forefoot_changed';
{ .AddConnect }
IS785.Connect := connect788;
{ .SetIS }
OrientationInterpolator784.IS := IS785;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator784]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator784.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator790 := TOrientationInterpolatorNode.Create;
IS791 := TISNode.Create;
connect792 := TconnectNode.Create;
connect792.NodeField := 'key';
connect792.ProtoField := 'l_hand_key';
{ .AddConnect }
IS791.Connect := connect792;
connect793 := TconnectNode.Create;
connect793.NodeField := 'keyValue';
connect793.ProtoField := 'l_hand_keyValue';
{ .AddConnect }
IS791.Connect := connect793;
connect794 := TconnectNode.Create;
connect794.NodeField := 'value_changed';
connect794.ProtoField := 'l_hand_changed';
{ .AddConnect }
IS791.Connect := connect794;
{ .SetIS }
OrientationInterpolator790.IS := IS791;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator790]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator790.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator796 := TOrientationInterpolatorNode.Create;
IS797 := TISNode.Create;
connect798 := TconnectNode.Create;
connect798.NodeField := 'key';
connect798.ProtoField := 'l_hindfoot_key';
{ .AddConnect }
IS797.Connect := connect798;
connect799 := TconnectNode.Create;
connect799.NodeField := 'keyValue';
connect799.ProtoField := 'l_hindfoot_keyValue';
{ .AddConnect }
IS797.Connect := connect799;
connect800 := TconnectNode.Create;
connect800.NodeField := 'value_changed';
connect800.ProtoField := 'l_hindfoot_changed';
{ .AddConnect }
IS797.Connect := connect800;
{ .SetIS }
OrientationInterpolator796.IS := IS797;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator796]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator796.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator802 := TOrientationInterpolatorNode.Create;
IS803 := TISNode.Create;
connect804 := TconnectNode.Create;
connect804.NodeField := 'key';
connect804.ProtoField := 'l_hip_key';
{ .AddConnect }
IS803.Connect := connect804;
connect805 := TconnectNode.Create;
connect805.NodeField := 'keyValue';
connect805.ProtoField := 'l_hip_keyValue';
{ .AddConnect }
IS803.Connect := connect805;
connect806 := TconnectNode.Create;
connect806.NodeField := 'value_changed';
connect806.ProtoField := 'l_hip_changed';
{ .AddConnect }
IS803.Connect := connect806;
{ .SetIS }
OrientationInterpolator802.IS := IS803;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator802]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator802.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator808 := TOrientationInterpolatorNode.Create;
IS809 := TISNode.Create;
connect810 := TconnectNode.Create;
connect810.NodeField := 'key';
connect810.ProtoField := 'l_index0_key';
{ .AddConnect }
IS809.Connect := connect810;
connect811 := TconnectNode.Create;
connect811.NodeField := 'keyValue';
connect811.ProtoField := 'l_index0_keyValue';
{ .AddConnect }
IS809.Connect := connect811;
connect812 := TconnectNode.Create;
connect812.NodeField := 'value_changed';
connect812.ProtoField := 'l_index0_changed';
{ .AddConnect }
IS809.Connect := connect812;
{ .SetIS }
OrientationInterpolator808.IS := IS809;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator808]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator808.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator814 := TOrientationInterpolatorNode.Create;
IS815 := TISNode.Create;
connect816 := TconnectNode.Create;
connect816.NodeField := 'key';
connect816.ProtoField := 'l_index1_key';
{ .AddConnect }
IS815.Connect := connect816;
connect817 := TconnectNode.Create;
connect817.NodeField := 'keyValue';
connect817.ProtoField := 'l_index1_keyValue';
{ .AddConnect }
IS815.Connect := connect817;
connect818 := TconnectNode.Create;
connect818.NodeField := 'value_changed';
connect818.ProtoField := 'l_index1_changed';
{ .AddConnect }
IS815.Connect := connect818;
{ .SetIS }
OrientationInterpolator814.IS := IS815;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator814]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator814.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator820 := TOrientationInterpolatorNode.Create;
IS821 := TISNode.Create;
connect822 := TconnectNode.Create;
connect822.NodeField := 'key';
connect822.ProtoField := 'l_index2_key';
{ .AddConnect }
IS821.Connect := connect822;
connect823 := TconnectNode.Create;
connect823.NodeField := 'keyValue';
connect823.ProtoField := 'l_index2_keyValue';
{ .AddConnect }
IS821.Connect := connect823;
connect824 := TconnectNode.Create;
connect824.NodeField := 'value_changed';
connect824.ProtoField := 'l_index2_changed';
{ .AddConnect }
IS821.Connect := connect824;
{ .SetIS }
OrientationInterpolator820.IS := IS821;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator820]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator820.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator826 := TOrientationInterpolatorNode.Create;
IS827 := TISNode.Create;
connect828 := TconnectNode.Create;
connect828.NodeField := 'key';
connect828.ProtoField := 'l_index3_key';
{ .AddConnect }
IS827.Connect := connect828;
connect829 := TconnectNode.Create;
connect829.NodeField := 'keyValue';
connect829.ProtoField := 'l_index3_keyValue';
{ .AddConnect }
IS827.Connect := connect829;
connect830 := TconnectNode.Create;
connect830.NodeField := 'value_changed';
connect830.ProtoField := 'l_index3_changed';
{ .AddConnect }
IS827.Connect := connect830;
{ .SetIS }
OrientationInterpolator826.IS := IS827;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator826]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator826.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator832 := TOrientationInterpolatorNode.Create;
IS833 := TISNode.Create;
connect834 := TconnectNode.Create;
connect834.NodeField := 'key';
connect834.ProtoField := 'l_index_distal_key';
{ .AddConnect }
IS833.Connect := connect834;
connect835 := TconnectNode.Create;
connect835.NodeField := 'keyValue';
connect835.ProtoField := 'l_index_distal_keyValue';
{ .AddConnect }
IS833.Connect := connect835;
connect836 := TconnectNode.Create;
connect836.NodeField := 'value_changed';
connect836.ProtoField := 'l_index_distal_changed';
{ .AddConnect }
IS833.Connect := connect836;
{ .SetIS }
OrientationInterpolator832.IS := IS833;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator832]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator832.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator838 := TOrientationInterpolatorNode.Create;
IS839 := TISNode.Create;
connect840 := TconnectNode.Create;
connect840.NodeField := 'key';
connect840.ProtoField := 'l_index_metacarpal_key';
{ .AddConnect }
IS839.Connect := connect840;
connect841 := TconnectNode.Create;
connect841.NodeField := 'keyValue';
connect841.ProtoField := 'l_index_metacarpal_keyValue';
{ .AddConnect }
IS839.Connect := connect841;
connect842 := TconnectNode.Create;
connect842.NodeField := 'value_changed';
connect842.ProtoField := 'l_index_metacarpal_changed';
{ .AddConnect }
IS839.Connect := connect842;
{ .SetIS }
OrientationInterpolator838.IS := IS839;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator838]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator838.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator844 := TOrientationInterpolatorNode.Create;
IS845 := TISNode.Create;
connect846 := TconnectNode.Create;
connect846.NodeField := 'key';
connect846.ProtoField := 'l_index_middle_key';
{ .AddConnect }
IS845.Connect := connect846;
connect847 := TconnectNode.Create;
connect847.NodeField := 'keyValue';
connect847.ProtoField := 'l_index_middle_keyValue';
{ .AddConnect }
IS845.Connect := connect847;
connect848 := TconnectNode.Create;
connect848.NodeField := 'value_changed';
connect848.ProtoField := 'l_index_middle_changed';
{ .AddConnect }
IS845.Connect := connect848;
{ .SetIS }
OrientationInterpolator844.IS := IS845;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator844]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator844.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator850 := TOrientationInterpolatorNode.Create;
IS851 := TISNode.Create;
connect852 := TconnectNode.Create;
connect852.NodeField := 'key';
connect852.ProtoField := 'l_index_proximal_key';
{ .AddConnect }
IS851.Connect := connect852;
connect853 := TconnectNode.Create;
connect853.NodeField := 'keyValue';
connect853.ProtoField := 'l_index_proximal_keyValue';
{ .AddConnect }
IS851.Connect := connect853;
connect854 := TconnectNode.Create;
connect854.NodeField := 'value_changed';
connect854.ProtoField := 'l_index_proximal_changed';
{ .AddConnect }
IS851.Connect := connect854;
{ .SetIS }
OrientationInterpolator850.IS := IS851;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator850]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator850.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator856 := TOrientationInterpolatorNode.Create;
IS857 := TISNode.Create;
connect858 := TconnectNode.Create;
connect858.NodeField := 'key';
connect858.ProtoField := 'l_knee_key';
{ .AddConnect }
IS857.Connect := connect858;
connect859 := TconnectNode.Create;
connect859.NodeField := 'keyValue';
connect859.ProtoField := 'l_knee_keyValue';
{ .AddConnect }
IS857.Connect := connect859;
connect860 := TconnectNode.Create;
connect860.NodeField := 'value_changed';
connect860.ProtoField := 'l_knee_changed';
{ .AddConnect }
IS857.Connect := connect860;
{ .SetIS }
OrientationInterpolator856.IS := IS857;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator856]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator856.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator862 := TOrientationInterpolatorNode.Create;
IS863 := TISNode.Create;
connect864 := TconnectNode.Create;
connect864.NodeField := 'key';
connect864.ProtoField := 'l_metatarsal_key';
{ .AddConnect }
IS863.Connect := connect864;
connect865 := TconnectNode.Create;
connect865.NodeField := 'keyValue';
connect865.ProtoField := 'l_metatarsal_keyValue';
{ .AddConnect }
IS863.Connect := connect865;
connect866 := TconnectNode.Create;
connect866.NodeField := 'value_changed';
connect866.ProtoField := 'l_metatarsal_changed';
{ .AddConnect }
IS863.Connect := connect866;
{ .SetIS }
OrientationInterpolator862.IS := IS863;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator862]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator862.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator868 := TOrientationInterpolatorNode.Create;
IS869 := TISNode.Create;
connect870 := TconnectNode.Create;
connect870.NodeField := 'key';
connect870.ProtoField := 'l_middistal_key';
{ .AddConnect }
IS869.Connect := connect870;
connect871 := TconnectNode.Create;
connect871.NodeField := 'keyValue';
connect871.ProtoField := 'l_middistal_keyValue';
{ .AddConnect }
IS869.Connect := connect871;
connect872 := TconnectNode.Create;
connect872.NodeField := 'value_changed';
connect872.ProtoField := 'l_middistal_changed';
{ .AddConnect }
IS869.Connect := connect872;
{ .SetIS }
OrientationInterpolator868.IS := IS869;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator868]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator868.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator874 := TOrientationInterpolatorNode.Create;
IS875 := TISNode.Create;
connect876 := TconnectNode.Create;
connect876.NodeField := 'key';
connect876.ProtoField := 'l_middle0_key';
{ .AddConnect }
IS875.Connect := connect876;
connect877 := TconnectNode.Create;
connect877.NodeField := 'keyValue';
connect877.ProtoField := 'l_middle0_keyValue';
{ .AddConnect }
IS875.Connect := connect877;
connect878 := TconnectNode.Create;
connect878.NodeField := 'value_changed';
connect878.ProtoField := 'l_middle0_changed';
{ .AddConnect }
IS875.Connect := connect878;
{ .SetIS }
OrientationInterpolator874.IS := IS875;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator874]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator874.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator880 := TOrientationInterpolatorNode.Create;
IS881 := TISNode.Create;
connect882 := TconnectNode.Create;
connect882.NodeField := 'key';
connect882.ProtoField := 'l_middle1_key';
{ .AddConnect }
IS881.Connect := connect882;
connect883 := TconnectNode.Create;
connect883.NodeField := 'keyValue';
connect883.ProtoField := 'l_middle1_keyValue';
{ .AddConnect }
IS881.Connect := connect883;
connect884 := TconnectNode.Create;
connect884.NodeField := 'value_changed';
connect884.ProtoField := 'l_middle1_changed';
{ .AddConnect }
IS881.Connect := connect884;
{ .SetIS }
OrientationInterpolator880.IS := IS881;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator880]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator880.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator886 := TOrientationInterpolatorNode.Create;
IS887 := TISNode.Create;
connect888 := TconnectNode.Create;
connect888.NodeField := 'key';
connect888.ProtoField := 'l_middle2_key';
{ .AddConnect }
IS887.Connect := connect888;
connect889 := TconnectNode.Create;
connect889.NodeField := 'keyValue';
connect889.ProtoField := 'l_middle2_keyValue';
{ .AddConnect }
IS887.Connect := connect889;
connect890 := TconnectNode.Create;
connect890.NodeField := 'value_changed';
connect890.ProtoField := 'l_middle2_changed';
{ .AddConnect }
IS887.Connect := connect890;
{ .SetIS }
OrientationInterpolator886.IS := IS887;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator886]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator886.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator892 := TOrientationInterpolatorNode.Create;
IS893 := TISNode.Create;
connect894 := TconnectNode.Create;
connect894.NodeField := 'key';
connect894.ProtoField := 'l_middle3_key';
{ .AddConnect }
IS893.Connect := connect894;
connect895 := TconnectNode.Create;
connect895.NodeField := 'keyValue';
connect895.ProtoField := 'l_middle3_keyValue';
{ .AddConnect }
IS893.Connect := connect895;
connect896 := TconnectNode.Create;
connect896.NodeField := 'value_changed';
connect896.ProtoField := 'l_middle3_changed';
{ .AddConnect }
IS893.Connect := connect896;
{ .SetIS }
OrientationInterpolator892.IS := IS893;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator892]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator892.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator898 := TOrientationInterpolatorNode.Create;
IS899 := TISNode.Create;
connect900 := TconnectNode.Create;
connect900.NodeField := 'key';
connect900.ProtoField := 'l_middle_distal_key';
{ .AddConnect }
IS899.Connect := connect900;
connect901 := TconnectNode.Create;
connect901.NodeField := 'keyValue';
connect901.ProtoField := 'l_middle_distal_keyValue';
{ .AddConnect }
IS899.Connect := connect901;
connect902 := TconnectNode.Create;
connect902.NodeField := 'value_changed';
connect902.ProtoField := 'l_middle_distal_changed';
{ .AddConnect }
IS899.Connect := connect902;
{ .SetIS }
OrientationInterpolator898.IS := IS899;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator898]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator898.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator904 := TOrientationInterpolatorNode.Create;
IS905 := TISNode.Create;
connect906 := TconnectNode.Create;
connect906.NodeField := 'key';
connect906.ProtoField := 'l_middle_metacarpal_key';
{ .AddConnect }
IS905.Connect := connect906;
connect907 := TconnectNode.Create;
connect907.NodeField := 'keyValue';
connect907.ProtoField := 'l_middle_metacarpal_keyValue';
{ .AddConnect }
IS905.Connect := connect907;
connect908 := TconnectNode.Create;
connect908.NodeField := 'value_changed';
connect908.ProtoField := 'l_middle_metacarpal_changed';
{ .AddConnect }
IS905.Connect := connect908;
{ .SetIS }
OrientationInterpolator904.IS := IS905;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator904]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator904.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator910 := TOrientationInterpolatorNode.Create;
IS911 := TISNode.Create;
connect912 := TconnectNode.Create;
connect912.NodeField := 'key';
connect912.ProtoField := 'l_middle_middle_key';
{ .AddConnect }
IS911.Connect := connect912;
connect913 := TconnectNode.Create;
connect913.NodeField := 'keyValue';
connect913.ProtoField := 'l_middle_middle_keyValue';
{ .AddConnect }
IS911.Connect := connect913;
connect914 := TconnectNode.Create;
connect914.NodeField := 'value_changed';
connect914.ProtoField := 'l_middle_middle_changed';
{ .AddConnect }
IS911.Connect := connect914;
{ .SetIS }
OrientationInterpolator910.IS := IS911;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator910]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator910.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator916 := TOrientationInterpolatorNode.Create;
IS917 := TISNode.Create;
connect918 := TconnectNode.Create;
connect918.NodeField := 'key';
connect918.ProtoField := 'l_middle_proximal_key';
{ .AddConnect }
IS917.Connect := connect918;
connect919 := TconnectNode.Create;
connect919.NodeField := 'keyValue';
connect919.ProtoField := 'l_middle_proximal_keyValue';
{ .AddConnect }
IS917.Connect := connect919;
connect920 := TconnectNode.Create;
connect920.NodeField := 'value_changed';
connect920.ProtoField := 'l_middle_proximal_changed';
{ .AddConnect }
IS917.Connect := connect920;
{ .SetIS }
OrientationInterpolator916.IS := IS917;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator916]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator916.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator922 := TOrientationInterpolatorNode.Create;
IS923 := TISNode.Create;
connect924 := TconnectNode.Create;
connect924.NodeField := 'key';
connect924.ProtoField := 'l_midproximal_key';
{ .AddConnect }
IS923.Connect := connect924;
connect925 := TconnectNode.Create;
connect925.NodeField := 'keyValue';
connect925.ProtoField := 'l_midproximal_keyValue';
{ .AddConnect }
IS923.Connect := connect925;
connect926 := TconnectNode.Create;
connect926.NodeField := 'value_changed';
connect926.ProtoField := 'l_midproximal_changed';
{ .AddConnect }
IS923.Connect := connect926;
{ .SetIS }
OrientationInterpolator922.IS := IS923;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator922]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator922.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator928 := TOrientationInterpolatorNode.Create;
IS929 := TISNode.Create;
connect930 := TconnectNode.Create;
connect930.NodeField := 'key';
connect930.ProtoField := 'l_midtarsal_key';
{ .AddConnect }
IS929.Connect := connect930;
connect931 := TconnectNode.Create;
connect931.NodeField := 'keyValue';
connect931.ProtoField := 'l_midtarsal_keyValue';
{ .AddConnect }
IS929.Connect := connect931;
connect932 := TconnectNode.Create;
connect932.NodeField := 'value_changed';
connect932.ProtoField := 'l_midtarsal_changed';
{ .AddConnect }
IS929.Connect := connect932;
{ .SetIS }
OrientationInterpolator928.IS := IS929;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator928]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator928.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator934 := TOrientationInterpolatorNode.Create;
IS935 := TISNode.Create;
connect936 := TconnectNode.Create;
connect936.NodeField := 'key';
connect936.ProtoField := 'l_pinky0_key';
{ .AddConnect }
IS935.Connect := connect936;
connect937 := TconnectNode.Create;
connect937.NodeField := 'keyValue';
connect937.ProtoField := 'l_pinky0_keyValue';
{ .AddConnect }
IS935.Connect := connect937;
connect938 := TconnectNode.Create;
connect938.NodeField := 'value_changed';
connect938.ProtoField := 'l_pinky0_changed';
{ .AddConnect }
IS935.Connect := connect938;
{ .SetIS }
OrientationInterpolator934.IS := IS935;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator934]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator934.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator940 := TOrientationInterpolatorNode.Create;
IS941 := TISNode.Create;
connect942 := TconnectNode.Create;
connect942.NodeField := 'key';
connect942.ProtoField := 'l_pinky1_key';
{ .AddConnect }
IS941.Connect := connect942;
connect943 := TconnectNode.Create;
connect943.NodeField := 'keyValue';
connect943.ProtoField := 'l_pinky1_keyValue';
{ .AddConnect }
IS941.Connect := connect943;
connect944 := TconnectNode.Create;
connect944.NodeField := 'value_changed';
connect944.ProtoField := 'l_pinky1_changed';
{ .AddConnect }
IS941.Connect := connect944;
{ .SetIS }
OrientationInterpolator940.IS := IS941;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator940]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator940.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator946 := TOrientationInterpolatorNode.Create;
IS947 := TISNode.Create;
connect948 := TconnectNode.Create;
connect948.NodeField := 'key';
connect948.ProtoField := 'l_pinky2_key';
{ .AddConnect }
IS947.Connect := connect948;
connect949 := TconnectNode.Create;
connect949.NodeField := 'keyValue';
connect949.ProtoField := 'l_pinky2_keyValue';
{ .AddConnect }
IS947.Connect := connect949;
connect950 := TconnectNode.Create;
connect950.NodeField := 'value_changed';
connect950.ProtoField := 'l_pinky2_changed';
{ .AddConnect }
IS947.Connect := connect950;
{ .SetIS }
OrientationInterpolator946.IS := IS947;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator946]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator946.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator952 := TOrientationInterpolatorNode.Create;
IS953 := TISNode.Create;
connect954 := TconnectNode.Create;
connect954.NodeField := 'key';
connect954.ProtoField := 'l_pinky3_key';
{ .AddConnect }
IS953.Connect := connect954;
connect955 := TconnectNode.Create;
connect955.NodeField := 'keyValue';
connect955.ProtoField := 'l_pinky3_keyValue';
{ .AddConnect }
IS953.Connect := connect955;
connect956 := TconnectNode.Create;
connect956.NodeField := 'value_changed';
connect956.ProtoField := 'l_pinky3_changed';
{ .AddConnect }
IS953.Connect := connect956;
{ .SetIS }
OrientationInterpolator952.IS := IS953;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator952]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator952.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator958 := TOrientationInterpolatorNode.Create;
IS959 := TISNode.Create;
connect960 := TconnectNode.Create;
connect960.NodeField := 'key';
connect960.ProtoField := 'l_pinky_distal_key';
{ .AddConnect }
IS959.Connect := connect960;
connect961 := TconnectNode.Create;
connect961.NodeField := 'keyValue';
connect961.ProtoField := 'l_pinky_distal_keyValue';
{ .AddConnect }
IS959.Connect := connect961;
connect962 := TconnectNode.Create;
connect962.NodeField := 'value_changed';
connect962.ProtoField := 'l_pinky_distal_changed';
{ .AddConnect }
IS959.Connect := connect962;
{ .SetIS }
OrientationInterpolator958.IS := IS959;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator958]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator958.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator964 := TOrientationInterpolatorNode.Create;
IS965 := TISNode.Create;
connect966 := TconnectNode.Create;
connect966.NodeField := 'key';
connect966.ProtoField := 'l_pinky_metacarpal_key';
{ .AddConnect }
IS965.Connect := connect966;
connect967 := TconnectNode.Create;
connect967.NodeField := 'keyValue';
connect967.ProtoField := 'l_pinky_metacarpal_keyValue';
{ .AddConnect }
IS965.Connect := connect967;
connect968 := TconnectNode.Create;
connect968.NodeField := 'value_changed';
connect968.ProtoField := 'l_pinky_metacarpal_changed';
{ .AddConnect }
IS965.Connect := connect968;
{ .SetIS }
OrientationInterpolator964.IS := IS965;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator964]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator964.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator970 := TOrientationInterpolatorNode.Create;
IS971 := TISNode.Create;
connect972 := TconnectNode.Create;
connect972.NodeField := 'key';
connect972.ProtoField := 'l_pinky_middle_key';
{ .AddConnect }
IS971.Connect := connect972;
connect973 := TconnectNode.Create;
connect973.NodeField := 'keyValue';
connect973.ProtoField := 'l_pinky_middle_keyValue';
{ .AddConnect }
IS971.Connect := connect973;
connect974 := TconnectNode.Create;
connect974.NodeField := 'value_changed';
connect974.ProtoField := 'l_pinky_middle_changed';
{ .AddConnect }
IS971.Connect := connect974;
{ .SetIS }
OrientationInterpolator970.IS := IS971;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator970]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator970.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator976 := TOrientationInterpolatorNode.Create;
IS977 := TISNode.Create;
connect978 := TconnectNode.Create;
connect978.NodeField := 'key';
connect978.ProtoField := 'l_pinky_proximal_key';
{ .AddConnect }
IS977.Connect := connect978;
connect979 := TconnectNode.Create;
connect979.NodeField := 'keyValue';
connect979.ProtoField := 'l_pinky_proximal_keyValue';
{ .AddConnect }
IS977.Connect := connect979;
connect980 := TconnectNode.Create;
connect980.NodeField := 'value_changed';
connect980.ProtoField := 'l_pinky_proximal_changed';
{ .AddConnect }
IS977.Connect := connect980;
{ .SetIS }
OrientationInterpolator976.IS := IS977;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator976]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator976.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator982 := TOrientationInterpolatorNode.Create;
IS983 := TISNode.Create;
connect984 := TconnectNode.Create;
connect984.NodeField := 'key';
connect984.ProtoField := 'l_ring0_key';
{ .AddConnect }
IS983.Connect := connect984;
connect985 := TconnectNode.Create;
connect985.NodeField := 'keyValue';
connect985.ProtoField := 'l_ring0_keyValue';
{ .AddConnect }
IS983.Connect := connect985;
connect986 := TconnectNode.Create;
connect986.NodeField := 'value_changed';
connect986.ProtoField := 'l_ring0_changed';
{ .AddConnect }
IS983.Connect := connect986;
{ .SetIS }
OrientationInterpolator982.IS := IS983;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator982]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator982.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator988 := TOrientationInterpolatorNode.Create;
IS989 := TISNode.Create;
connect990 := TconnectNode.Create;
connect990.NodeField := 'key';
connect990.ProtoField := 'l_ring1_key';
{ .AddConnect }
IS989.Connect := connect990;
connect991 := TconnectNode.Create;
connect991.NodeField := 'keyValue';
connect991.ProtoField := 'l_ring1_keyValue';
{ .AddConnect }
IS989.Connect := connect991;
connect992 := TconnectNode.Create;
connect992.NodeField := 'value_changed';
connect992.ProtoField := 'l_ring1_changed';
{ .AddConnect }
IS989.Connect := connect992;
{ .SetIS }
OrientationInterpolator988.IS := IS989;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator988]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator988.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator994 := TOrientationInterpolatorNode.Create;
IS995 := TISNode.Create;
connect996 := TconnectNode.Create;
connect996.NodeField := 'key';
connect996.ProtoField := 'l_ring2_key';
{ .AddConnect }
IS995.Connect := connect996;
connect997 := TconnectNode.Create;
connect997.NodeField := 'keyValue';
connect997.ProtoField := 'l_ring2_keyValue';
{ .AddConnect }
IS995.Connect := connect997;
connect998 := TconnectNode.Create;
connect998.NodeField := 'value_changed';
connect998.ProtoField := 'l_ring2_changed';
{ .AddConnect }
IS995.Connect := connect998;
{ .SetIS }
OrientationInterpolator994.IS := IS995;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator994]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator994.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1000 := TOrientationInterpolatorNode.Create;
IS1001 := TISNode.Create;
connect1002 := TconnectNode.Create;
connect1002.NodeField := 'key';
connect1002.ProtoField := 'l_ring3_key';
{ .AddConnect }
IS1001.Connect := connect1002;
connect1003 := TconnectNode.Create;
connect1003.NodeField := 'keyValue';
connect1003.ProtoField := 'l_ring3_keyValue';
{ .AddConnect }
IS1001.Connect := connect1003;
connect1004 := TconnectNode.Create;
connect1004.NodeField := 'value_changed';
connect1004.ProtoField := 'l_ring3_changed';
{ .AddConnect }
IS1001.Connect := connect1004;
{ .SetIS }
OrientationInterpolator1000.IS := IS1001;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1000]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1000.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1006 := TOrientationInterpolatorNode.Create;
IS1007 := TISNode.Create;
connect1008 := TconnectNode.Create;
connect1008.NodeField := 'key';
connect1008.ProtoField := 'l_ring_distal_key';
{ .AddConnect }
IS1007.Connect := connect1008;
connect1009 := TconnectNode.Create;
connect1009.NodeField := 'keyValue';
connect1009.ProtoField := 'l_ring_distal_keyValue';
{ .AddConnect }
IS1007.Connect := connect1009;
connect1010 := TconnectNode.Create;
connect1010.NodeField := 'value_changed';
connect1010.ProtoField := 'l_ring_distal_changed';
{ .AddConnect }
IS1007.Connect := connect1010;
{ .SetIS }
OrientationInterpolator1006.IS := IS1007;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1006]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1006.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1012 := TOrientationInterpolatorNode.Create;
IS1013 := TISNode.Create;
connect1014 := TconnectNode.Create;
connect1014.NodeField := 'key';
connect1014.ProtoField := 'l_ring_metacarpal_key';
{ .AddConnect }
IS1013.Connect := connect1014;
connect1015 := TconnectNode.Create;
connect1015.NodeField := 'keyValue';
connect1015.ProtoField := 'l_ring_metacarpal_keyValue';
{ .AddConnect }
IS1013.Connect := connect1015;
connect1016 := TconnectNode.Create;
connect1016.NodeField := 'value_changed';
connect1016.ProtoField := 'l_ring_metacarpal_changed';
{ .AddConnect }
IS1013.Connect := connect1016;
{ .SetIS }
OrientationInterpolator1012.IS := IS1013;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1012]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1012.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1018 := TOrientationInterpolatorNode.Create;
IS1019 := TISNode.Create;
connect1020 := TconnectNode.Create;
connect1020.NodeField := 'key';
connect1020.ProtoField := 'l_ring_middle_key';
{ .AddConnect }
IS1019.Connect := connect1020;
connect1021 := TconnectNode.Create;
connect1021.NodeField := 'keyValue';
connect1021.ProtoField := 'l_ring_middle_keyValue';
{ .AddConnect }
IS1019.Connect := connect1021;
connect1022 := TconnectNode.Create;
connect1022.NodeField := 'value_changed';
connect1022.ProtoField := 'l_ring_middle_changed';
{ .AddConnect }
IS1019.Connect := connect1022;
{ .SetIS }
OrientationInterpolator1018.IS := IS1019;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1018]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1018.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1024 := TOrientationInterpolatorNode.Create;
IS1025 := TISNode.Create;
connect1026 := TconnectNode.Create;
connect1026.NodeField := 'key';
connect1026.ProtoField := 'l_ring_proximal_key';
{ .AddConnect }
IS1025.Connect := connect1026;
connect1027 := TconnectNode.Create;
connect1027.NodeField := 'keyValue';
connect1027.ProtoField := 'l_ring_proximal_keyValue';
{ .AddConnect }
IS1025.Connect := connect1027;
connect1028 := TconnectNode.Create;
connect1028.NodeField := 'value_changed';
connect1028.ProtoField := 'l_ring_proximal_changed';
{ .AddConnect }
IS1025.Connect := connect1028;
{ .SetIS }
OrientationInterpolator1024.IS := IS1025;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1024]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1024.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1030 := TOrientationInterpolatorNode.Create;
IS1031 := TISNode.Create;
connect1032 := TconnectNode.Create;
connect1032.NodeField := 'key';
connect1032.ProtoField := 'l_scapula_key';
{ .AddConnect }
IS1031.Connect := connect1032;
connect1033 := TconnectNode.Create;
connect1033.NodeField := 'keyValue';
connect1033.ProtoField := 'l_scapula_keyValue';
{ .AddConnect }
IS1031.Connect := connect1033;
connect1034 := TconnectNode.Create;
connect1034.NodeField := 'value_changed';
connect1034.ProtoField := 'l_scapula_changed';
{ .AddConnect }
IS1031.Connect := connect1034;
{ .SetIS }
OrientationInterpolator1030.IS := IS1031;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1030]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1030.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1036 := TOrientationInterpolatorNode.Create;
IS1037 := TISNode.Create;
connect1038 := TconnectNode.Create;
connect1038.NodeField := 'key';
connect1038.ProtoField := 'l_shoulder_key';
{ .AddConnect }
IS1037.Connect := connect1038;
connect1039 := TconnectNode.Create;
connect1039.NodeField := 'keyValue';
connect1039.ProtoField := 'l_shoulder_keyValue';
{ .AddConnect }
IS1037.Connect := connect1039;
connect1040 := TconnectNode.Create;
connect1040.NodeField := 'value_changed';
connect1040.ProtoField := 'l_shoulder_changed';
{ .AddConnect }
IS1037.Connect := connect1040;
{ .SetIS }
OrientationInterpolator1036.IS := IS1037;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1036]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1036.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1042 := TOrientationInterpolatorNode.Create;
IS1043 := TISNode.Create;
connect1044 := TconnectNode.Create;
connect1044.NodeField := 'key';
connect1044.ProtoField := 'l_sternoclavicular_key';
{ .AddConnect }
IS1043.Connect := connect1044;
connect1045 := TconnectNode.Create;
connect1045.NodeField := 'keyValue';
connect1045.ProtoField := 'l_sternoclavicular_keyValue';
{ .AddConnect }
IS1043.Connect := connect1045;
connect1046 := TconnectNode.Create;
connect1046.NodeField := 'value_changed';
connect1046.ProtoField := 'l_sternoclavicular_changed';
{ .AddConnect }
IS1043.Connect := connect1046;
{ .SetIS }
OrientationInterpolator1042.IS := IS1043;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1042]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1042.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1048 := TOrientationInterpolatorNode.Create;
IS1049 := TISNode.Create;
connect1050 := TconnectNode.Create;
connect1050.NodeField := 'key';
connect1050.ProtoField := 'l_subtalar_key';
{ .AddConnect }
IS1049.Connect := connect1050;
connect1051 := TconnectNode.Create;
connect1051.NodeField := 'keyValue';
connect1051.ProtoField := 'l_subtalar_keyValue';
{ .AddConnect }
IS1049.Connect := connect1051;
connect1052 := TconnectNode.Create;
connect1052.NodeField := 'value_changed';
connect1052.ProtoField := 'l_subtalar_changed';
{ .AddConnect }
IS1049.Connect := connect1052;
{ .SetIS }
OrientationInterpolator1048.IS := IS1049;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1048]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1048.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1054 := TOrientationInterpolatorNode.Create;
IS1055 := TISNode.Create;
connect1056 := TconnectNode.Create;
connect1056.NodeField := 'key';
connect1056.ProtoField := 'l_thigh_key';
{ .AddConnect }
IS1055.Connect := connect1056;
connect1057 := TconnectNode.Create;
connect1057.NodeField := 'keyValue';
connect1057.ProtoField := 'l_thigh_keyValue';
{ .AddConnect }
IS1055.Connect := connect1057;
connect1058 := TconnectNode.Create;
connect1058.NodeField := 'value_changed';
connect1058.ProtoField := 'l_thigh_changed';
{ .AddConnect }
IS1055.Connect := connect1058;
{ .SetIS }
OrientationInterpolator1054.IS := IS1055;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1054]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1054.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1060 := TOrientationInterpolatorNode.Create;
IS1061 := TISNode.Create;
connect1062 := TconnectNode.Create;
connect1062.NodeField := 'key';
connect1062.ProtoField := 'l_thumb1_key';
{ .AddConnect }
IS1061.Connect := connect1062;
connect1063 := TconnectNode.Create;
connect1063.NodeField := 'keyValue';
connect1063.ProtoField := 'l_thumb1_keyValue';
{ .AddConnect }
IS1061.Connect := connect1063;
connect1064 := TconnectNode.Create;
connect1064.NodeField := 'value_changed';
connect1064.ProtoField := 'l_thumb1_changed';
{ .AddConnect }
IS1061.Connect := connect1064;
{ .SetIS }
OrientationInterpolator1060.IS := IS1061;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1060]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1060.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1066 := TOrientationInterpolatorNode.Create;
IS1067 := TISNode.Create;
connect1068 := TconnectNode.Create;
connect1068.NodeField := 'key';
connect1068.ProtoField := 'l_thumb2_key';
{ .AddConnect }
IS1067.Connect := connect1068;
connect1069 := TconnectNode.Create;
connect1069.NodeField := 'keyValue';
connect1069.ProtoField := 'l_thumb2_keyValue';
{ .AddConnect }
IS1067.Connect := connect1069;
connect1070 := TconnectNode.Create;
connect1070.NodeField := 'value_changed';
connect1070.ProtoField := 'l_thumb2_changed';
{ .AddConnect }
IS1067.Connect := connect1070;
{ .SetIS }
OrientationInterpolator1066.IS := IS1067;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1066]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1066.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1072 := TOrientationInterpolatorNode.Create;
IS1073 := TISNode.Create;
connect1074 := TconnectNode.Create;
connect1074.NodeField := 'key';
connect1074.ProtoField := 'l_thumb3_key';
{ .AddConnect }
IS1073.Connect := connect1074;
connect1075 := TconnectNode.Create;
connect1075.NodeField := 'keyValue';
connect1075.ProtoField := 'l_thumb3_keyValue';
{ .AddConnect }
IS1073.Connect := connect1075;
connect1076 := TconnectNode.Create;
connect1076.NodeField := 'value_changed';
connect1076.ProtoField := 'l_thumb3_changed';
{ .AddConnect }
IS1073.Connect := connect1076;
{ .SetIS }
OrientationInterpolator1072.IS := IS1073;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1072]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1072.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1078 := TOrientationInterpolatorNode.Create;
IS1079 := TISNode.Create;
connect1080 := TconnectNode.Create;
connect1080.NodeField := 'key';
connect1080.ProtoField := 'l_thumb_distal_key';
{ .AddConnect }
IS1079.Connect := connect1080;
connect1081 := TconnectNode.Create;
connect1081.NodeField := 'keyValue';
connect1081.ProtoField := 'l_thumb_distal_keyValue';
{ .AddConnect }
IS1079.Connect := connect1081;
connect1082 := TconnectNode.Create;
connect1082.NodeField := 'value_changed';
connect1082.ProtoField := 'l_thumb_distal_changed';
{ .AddConnect }
IS1079.Connect := connect1082;
{ .SetIS }
OrientationInterpolator1078.IS := IS1079;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1078]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1078.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1084 := TOrientationInterpolatorNode.Create;
IS1085 := TISNode.Create;
connect1086 := TconnectNode.Create;
connect1086.NodeField := 'key';
connect1086.ProtoField := 'l_thumb_metacarpal_key';
{ .AddConnect }
IS1085.Connect := connect1086;
connect1087 := TconnectNode.Create;
connect1087.NodeField := 'keyValue';
connect1087.ProtoField := 'l_thumb_metacarpal_keyValue';
{ .AddConnect }
IS1085.Connect := connect1087;
connect1088 := TconnectNode.Create;
connect1088.NodeField := 'value_changed';
connect1088.ProtoField := 'l_thumb_metacarpal_changed';
{ .AddConnect }
IS1085.Connect := connect1088;
{ .SetIS }
OrientationInterpolator1084.IS := IS1085;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1084]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1084.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1090 := TOrientationInterpolatorNode.Create;
IS1091 := TISNode.Create;
connect1092 := TconnectNode.Create;
connect1092.NodeField := 'key';
connect1092.ProtoField := 'l_thumb_proximal_key';
{ .AddConnect }
IS1091.Connect := connect1092;
connect1093 := TconnectNode.Create;
connect1093.NodeField := 'keyValue';
connect1093.ProtoField := 'l_thumb_proximal_keyValue';
{ .AddConnect }
IS1091.Connect := connect1093;
connect1094 := TconnectNode.Create;
connect1094.NodeField := 'value_changed';
connect1094.ProtoField := 'l_thumb_proximal_changed';
{ .AddConnect }
IS1091.Connect := connect1094;
{ .SetIS }
OrientationInterpolator1090.IS := IS1091;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1090]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1090.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1096 := TOrientationInterpolatorNode.Create;
IS1097 := TISNode.Create;
connect1098 := TconnectNode.Create;
connect1098.NodeField := 'key';
connect1098.ProtoField := 'l_upperarm_key';
{ .AddConnect }
IS1097.Connect := connect1098;
connect1099 := TconnectNode.Create;
connect1099.NodeField := 'keyValue';
connect1099.ProtoField := 'l_upperarm_keyValue';
{ .AddConnect }
IS1097.Connect := connect1099;
connect1100 := TconnectNode.Create;
connect1100.NodeField := 'value_changed';
connect1100.ProtoField := 'l_upperarm_changed';
{ .AddConnect }
IS1097.Connect := connect1100;
{ .SetIS }
OrientationInterpolator1096.IS := IS1097;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1096]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1096.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1102 := TOrientationInterpolatorNode.Create;
IS1103 := TISNode.Create;
connect1104 := TconnectNode.Create;
connect1104.NodeField := 'key';
connect1104.ProtoField := 'l_wrist_key';
{ .AddConnect }
IS1103.Connect := connect1104;
connect1105 := TconnectNode.Create;
connect1105.NodeField := 'keyValue';
connect1105.ProtoField := 'l_wrist_keyValue';
{ .AddConnect }
IS1103.Connect := connect1105;
connect1106 := TconnectNode.Create;
connect1106.NodeField := 'value_changed';
connect1106.ProtoField := 'l_wrist_changed';
{ .AddConnect }
IS1103.Connect := connect1106;
{ .SetIS }
OrientationInterpolator1102.IS := IS1103;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1102]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1102.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1108 := TOrientationInterpolatorNode.Create;
IS1109 := TISNode.Create;
connect1110 := TconnectNode.Create;
connect1110.NodeField := 'key';
connect1110.ProtoField := 'pelvis_key';
{ .AddConnect }
IS1109.Connect := connect1110;
connect1111 := TconnectNode.Create;
connect1111.NodeField := 'keyValue';
connect1111.ProtoField := 'pelvis_keyValue';
{ .AddConnect }
IS1109.Connect := connect1111;
connect1112 := TconnectNode.Create;
connect1112.NodeField := 'value_changed';
connect1112.ProtoField := 'pelvis_changed';
{ .AddConnect }
IS1109.Connect := connect1112;
{ .SetIS }
OrientationInterpolator1108.IS := IS1109;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1108]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1108.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1114 := TOrientationInterpolatorNode.Create;
IS1115 := TISNode.Create;
connect1116 := TconnectNode.Create;
connect1116.NodeField := 'key';
connect1116.ProtoField := 'r_acromioclavicular_key';
{ .AddConnect }
IS1115.Connect := connect1116;
connect1117 := TconnectNode.Create;
connect1117.NodeField := 'keyValue';
connect1117.ProtoField := 'r_acromioclavicular_keyValue';
{ .AddConnect }
IS1115.Connect := connect1117;
connect1118 := TconnectNode.Create;
connect1118.NodeField := 'value_changed';
connect1118.ProtoField := 'r_acromioclavicular_changed';
{ .AddConnect }
IS1115.Connect := connect1118;
{ .SetIS }
OrientationInterpolator1114.IS := IS1115;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1114]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1114.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1120 := TOrientationInterpolatorNode.Create;
IS1121 := TISNode.Create;
connect1122 := TconnectNode.Create;
connect1122.NodeField := 'key';
connect1122.ProtoField := 'r_ankle_key';
{ .AddConnect }
IS1121.Connect := connect1122;
connect1123 := TconnectNode.Create;
connect1123.NodeField := 'keyValue';
connect1123.ProtoField := 'r_ankle_keyValue';
{ .AddConnect }
IS1121.Connect := connect1123;
connect1124 := TconnectNode.Create;
connect1124.NodeField := 'value_changed';
connect1124.ProtoField := 'r_ankle_changed';
{ .AddConnect }
IS1121.Connect := connect1124;
{ .SetIS }
OrientationInterpolator1120.IS := IS1121;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1120]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1120.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1126 := TOrientationInterpolatorNode.Create;
IS1127 := TISNode.Create;
connect1128 := TconnectNode.Create;
connect1128.NodeField := 'key';
connect1128.ProtoField := 'r_calf_key';
{ .AddConnect }
IS1127.Connect := connect1128;
connect1129 := TconnectNode.Create;
connect1129.NodeField := 'keyValue';
connect1129.ProtoField := 'r_calf_keyValue';
{ .AddConnect }
IS1127.Connect := connect1129;
connect1130 := TconnectNode.Create;
connect1130.NodeField := 'value_changed';
connect1130.ProtoField := 'r_calf_changed';
{ .AddConnect }
IS1127.Connect := connect1130;
{ .SetIS }
OrientationInterpolator1126.IS := IS1127;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1126]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1126.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1132 := TOrientationInterpolatorNode.Create;
IS1133 := TISNode.Create;
connect1134 := TconnectNode.Create;
connect1134.NodeField := 'key';
connect1134.ProtoField := 'r_clavicle_key';
{ .AddConnect }
IS1133.Connect := connect1134;
connect1135 := TconnectNode.Create;
connect1135.NodeField := 'keyValue';
connect1135.ProtoField := 'r_clavicle_keyValue';
{ .AddConnect }
IS1133.Connect := connect1135;
connect1136 := TconnectNode.Create;
connect1136.NodeField := 'value_changed';
connect1136.ProtoField := 'r_clavicle_changed';
{ .AddConnect }
IS1133.Connect := connect1136;
{ .SetIS }
OrientationInterpolator1132.IS := IS1133;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1132]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1132.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1138 := TOrientationInterpolatorNode.Create;
IS1139 := TISNode.Create;
connect1140 := TconnectNode.Create;
connect1140.NodeField := 'key';
connect1140.ProtoField := 'r_elbow_key';
{ .AddConnect }
IS1139.Connect := connect1140;
connect1141 := TconnectNode.Create;
connect1141.NodeField := 'keyValue';
connect1141.ProtoField := 'r_elbow_keyValue';
{ .AddConnect }
IS1139.Connect := connect1141;
connect1142 := TconnectNode.Create;
connect1142.NodeField := 'value_changed';
connect1142.ProtoField := 'r_elbow_changed';
{ .AddConnect }
IS1139.Connect := connect1142;
{ .SetIS }
OrientationInterpolator1138.IS := IS1139;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1138]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1138.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1144 := TOrientationInterpolatorNode.Create;
IS1145 := TISNode.Create;
connect1146 := TconnectNode.Create;
connect1146.NodeField := 'key';
connect1146.ProtoField := 'r_eyeball_key';
{ .AddConnect }
IS1145.Connect := connect1146;
connect1147 := TconnectNode.Create;
connect1147.NodeField := 'keyValue';
connect1147.ProtoField := 'r_eyeball_keyValue';
{ .AddConnect }
IS1145.Connect := connect1147;
connect1148 := TconnectNode.Create;
connect1148.NodeField := 'value_changed';
connect1148.ProtoField := 'r_eyeball_changed';
{ .AddConnect }
IS1145.Connect := connect1148;
{ .SetIS }
OrientationInterpolator1144.IS := IS1145;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1144]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1144.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1150 := TOrientationInterpolatorNode.Create;
IS1151 := TISNode.Create;
connect1152 := TconnectNode.Create;
connect1152.NodeField := 'key';
connect1152.ProtoField := 'r_eyeball_joint_key';
{ .AddConnect }
IS1151.Connect := connect1152;
connect1153 := TconnectNode.Create;
connect1153.NodeField := 'keyValue';
connect1153.ProtoField := 'r_eyeball_joint_keyValue';
{ .AddConnect }
IS1151.Connect := connect1153;
connect1154 := TconnectNode.Create;
connect1154.NodeField := 'value_changed';
connect1154.ProtoField := 'r_eyeball_joint_changed';
{ .AddConnect }
IS1151.Connect := connect1154;
{ .SetIS }
OrientationInterpolator1150.IS := IS1151;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1150]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1150.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1156 := TOrientationInterpolatorNode.Create;
IS1157 := TISNode.Create;
connect1158 := TconnectNode.Create;
connect1158.NodeField := 'key';
connect1158.ProtoField := 'r_eyebrow_key';
{ .AddConnect }
IS1157.Connect := connect1158;
connect1159 := TconnectNode.Create;
connect1159.NodeField := 'keyValue';
connect1159.ProtoField := 'r_eyebrow_keyValue';
{ .AddConnect }
IS1157.Connect := connect1159;
connect1160 := TconnectNode.Create;
connect1160.NodeField := 'value_changed';
connect1160.ProtoField := 'r_eyebrow_changed';
{ .AddConnect }
IS1157.Connect := connect1160;
{ .SetIS }
OrientationInterpolator1156.IS := IS1157;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1156]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1156.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1162 := TOrientationInterpolatorNode.Create;
IS1163 := TISNode.Create;
connect1164 := TconnectNode.Create;
connect1164.NodeField := 'key';
connect1164.ProtoField := 'r_eyebrow_joint_key';
{ .AddConnect }
IS1163.Connect := connect1164;
connect1165 := TconnectNode.Create;
connect1165.NodeField := 'keyValue';
connect1165.ProtoField := 'r_eyebrow_joint_keyValue';
{ .AddConnect }
IS1163.Connect := connect1165;
connect1166 := TconnectNode.Create;
connect1166.NodeField := 'value_changed';
connect1166.ProtoField := 'r_eyebrow_joint_changed';
{ .AddConnect }
IS1163.Connect := connect1166;
{ .SetIS }
OrientationInterpolator1162.IS := IS1163;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1162]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1162.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1168 := TOrientationInterpolatorNode.Create;
IS1169 := TISNode.Create;
connect1170 := TconnectNode.Create;
connect1170.NodeField := 'key';
connect1170.ProtoField := 'r_eyelid_key';
{ .AddConnect }
IS1169.Connect := connect1170;
connect1171 := TconnectNode.Create;
connect1171.NodeField := 'keyValue';
connect1171.ProtoField := 'r_eyelid_keyValue';
{ .AddConnect }
IS1169.Connect := connect1171;
connect1172 := TconnectNode.Create;
connect1172.NodeField := 'value_changed';
connect1172.ProtoField := 'r_eyelid_changed';
{ .AddConnect }
IS1169.Connect := connect1172;
{ .SetIS }
OrientationInterpolator1168.IS := IS1169;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1168]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1168.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1174 := TOrientationInterpolatorNode.Create;
IS1175 := TISNode.Create;
connect1176 := TconnectNode.Create;
connect1176.NodeField := 'key';
connect1176.ProtoField := 'r_eyelid_joint_key';
{ .AddConnect }
IS1175.Connect := connect1176;
connect1177 := TconnectNode.Create;
connect1177.NodeField := 'keyValue';
connect1177.ProtoField := 'r_eyelid_joint_keyValue';
{ .AddConnect }
IS1175.Connect := connect1177;
connect1178 := TconnectNode.Create;
connect1178.NodeField := 'value_changed';
connect1178.ProtoField := 'r_eyelid_joint_changed';
{ .AddConnect }
IS1175.Connect := connect1178;
{ .SetIS }
OrientationInterpolator1174.IS := IS1175;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1174]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1174.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1180 := TOrientationInterpolatorNode.Create;
IS1181 := TISNode.Create;
connect1182 := TconnectNode.Create;
connect1182.NodeField := 'key';
connect1182.ProtoField := 'r_forearm_key';
{ .AddConnect }
IS1181.Connect := connect1182;
connect1183 := TconnectNode.Create;
connect1183.NodeField := 'keyValue';
connect1183.ProtoField := 'r_forearm_keyValue';
{ .AddConnect }
IS1181.Connect := connect1183;
connect1184 := TconnectNode.Create;
connect1184.NodeField := 'value_changed';
connect1184.ProtoField := 'r_forearm_changed';
{ .AddConnect }
IS1181.Connect := connect1184;
{ .SetIS }
OrientationInterpolator1180.IS := IS1181;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1180]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1180.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1186 := TOrientationInterpolatorNode.Create;
IS1187 := TISNode.Create;
connect1188 := TconnectNode.Create;
connect1188.NodeField := 'key';
connect1188.ProtoField := 'r_forefoot_key';
{ .AddConnect }
IS1187.Connect := connect1188;
connect1189 := TconnectNode.Create;
connect1189.NodeField := 'keyValue';
connect1189.ProtoField := 'r_forefoot_keyValue';
{ .AddConnect }
IS1187.Connect := connect1189;
connect1190 := TconnectNode.Create;
connect1190.NodeField := 'value_changed';
connect1190.ProtoField := 'r_forefoot_changed';
{ .AddConnect }
IS1187.Connect := connect1190;
{ .SetIS }
OrientationInterpolator1186.IS := IS1187;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1186]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1186.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1192 := TOrientationInterpolatorNode.Create;
IS1193 := TISNode.Create;
connect1194 := TconnectNode.Create;
connect1194.NodeField := 'key';
connect1194.ProtoField := 'r_hand_key';
{ .AddConnect }
IS1193.Connect := connect1194;
connect1195 := TconnectNode.Create;
connect1195.NodeField := 'keyValue';
connect1195.ProtoField := 'r_hand_keyValue';
{ .AddConnect }
IS1193.Connect := connect1195;
connect1196 := TconnectNode.Create;
connect1196.NodeField := 'value_changed';
connect1196.ProtoField := 'r_hand_changed';
{ .AddConnect }
IS1193.Connect := connect1196;
{ .SetIS }
OrientationInterpolator1192.IS := IS1193;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1192]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1192.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1198 := TOrientationInterpolatorNode.Create;
IS1199 := TISNode.Create;
connect1200 := TconnectNode.Create;
connect1200.NodeField := 'key';
connect1200.ProtoField := 'r_hindfoot_key';
{ .AddConnect }
IS1199.Connect := connect1200;
connect1201 := TconnectNode.Create;
connect1201.NodeField := 'keyValue';
connect1201.ProtoField := 'r_hindfoot_keyValue';
{ .AddConnect }
IS1199.Connect := connect1201;
connect1202 := TconnectNode.Create;
connect1202.NodeField := 'value_changed';
connect1202.ProtoField := 'r_hindfoot_changed';
{ .AddConnect }
IS1199.Connect := connect1202;
{ .SetIS }
OrientationInterpolator1198.IS := IS1199;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1198]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1198.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1204 := TOrientationInterpolatorNode.Create;
IS1205 := TISNode.Create;
connect1206 := TconnectNode.Create;
connect1206.NodeField := 'key';
connect1206.ProtoField := 'r_hip_key';
{ .AddConnect }
IS1205.Connect := connect1206;
connect1207 := TconnectNode.Create;
connect1207.NodeField := 'keyValue';
connect1207.ProtoField := 'r_hip_keyValue';
{ .AddConnect }
IS1205.Connect := connect1207;
connect1208 := TconnectNode.Create;
connect1208.NodeField := 'value_changed';
connect1208.ProtoField := 'r_hip_changed';
{ .AddConnect }
IS1205.Connect := connect1208;
{ .SetIS }
OrientationInterpolator1204.IS := IS1205;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1204]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1204.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1210 := TOrientationInterpolatorNode.Create;
IS1211 := TISNode.Create;
connect1212 := TconnectNode.Create;
connect1212.NodeField := 'key';
connect1212.ProtoField := 'r_index0_key';
{ .AddConnect }
IS1211.Connect := connect1212;
connect1213 := TconnectNode.Create;
connect1213.NodeField := 'keyValue';
connect1213.ProtoField := 'r_index0_keyValue';
{ .AddConnect }
IS1211.Connect := connect1213;
connect1214 := TconnectNode.Create;
connect1214.NodeField := 'value_changed';
connect1214.ProtoField := 'r_index0_changed';
{ .AddConnect }
IS1211.Connect := connect1214;
{ .SetIS }
OrientationInterpolator1210.IS := IS1211;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1210]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1210.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1216 := TOrientationInterpolatorNode.Create;
IS1217 := TISNode.Create;
connect1218 := TconnectNode.Create;
connect1218.NodeField := 'key';
connect1218.ProtoField := 'r_index1_key';
{ .AddConnect }
IS1217.Connect := connect1218;
connect1219 := TconnectNode.Create;
connect1219.NodeField := 'keyValue';
connect1219.ProtoField := 'r_index1_keyValue';
{ .AddConnect }
IS1217.Connect := connect1219;
connect1220 := TconnectNode.Create;
connect1220.NodeField := 'value_changed';
connect1220.ProtoField := 'r_index1_changed';
{ .AddConnect }
IS1217.Connect := connect1220;
{ .SetIS }
OrientationInterpolator1216.IS := IS1217;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1216]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1216.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1222 := TOrientationInterpolatorNode.Create;
IS1223 := TISNode.Create;
connect1224 := TconnectNode.Create;
connect1224.NodeField := 'key';
connect1224.ProtoField := 'r_index2_key';
{ .AddConnect }
IS1223.Connect := connect1224;
connect1225 := TconnectNode.Create;
connect1225.NodeField := 'keyValue';
connect1225.ProtoField := 'r_index2_keyValue';
{ .AddConnect }
IS1223.Connect := connect1225;
connect1226 := TconnectNode.Create;
connect1226.NodeField := 'value_changed';
connect1226.ProtoField := 'r_index2_changed';
{ .AddConnect }
IS1223.Connect := connect1226;
{ .SetIS }
OrientationInterpolator1222.IS := IS1223;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1222]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1222.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1228 := TOrientationInterpolatorNode.Create;
IS1229 := TISNode.Create;
connect1230 := TconnectNode.Create;
connect1230.NodeField := 'key';
connect1230.ProtoField := 'r_index3_key';
{ .AddConnect }
IS1229.Connect := connect1230;
connect1231 := TconnectNode.Create;
connect1231.NodeField := 'keyValue';
connect1231.ProtoField := 'r_index3_keyValue';
{ .AddConnect }
IS1229.Connect := connect1231;
connect1232 := TconnectNode.Create;
connect1232.NodeField := 'value_changed';
connect1232.ProtoField := 'r_index3_changed';
{ .AddConnect }
IS1229.Connect := connect1232;
{ .SetIS }
OrientationInterpolator1228.IS := IS1229;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1228]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1228.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1234 := TOrientationInterpolatorNode.Create;
IS1235 := TISNode.Create;
connect1236 := TconnectNode.Create;
connect1236.NodeField := 'key';
connect1236.ProtoField := 'r_index_distal_key';
{ .AddConnect }
IS1235.Connect := connect1236;
connect1237 := TconnectNode.Create;
connect1237.NodeField := 'keyValue';
connect1237.ProtoField := 'r_index_distal_keyValue';
{ .AddConnect }
IS1235.Connect := connect1237;
connect1238 := TconnectNode.Create;
connect1238.NodeField := 'value_changed';
connect1238.ProtoField := 'r_index_distal_changed';
{ .AddConnect }
IS1235.Connect := connect1238;
{ .SetIS }
OrientationInterpolator1234.IS := IS1235;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1234]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1234.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1240 := TOrientationInterpolatorNode.Create;
IS1241 := TISNode.Create;
connect1242 := TconnectNode.Create;
connect1242.NodeField := 'key';
connect1242.ProtoField := 'r_index_metacarpal_key';
{ .AddConnect }
IS1241.Connect := connect1242;
connect1243 := TconnectNode.Create;
connect1243.NodeField := 'keyValue';
connect1243.ProtoField := 'r_index_metacarpal_keyValue';
{ .AddConnect }
IS1241.Connect := connect1243;
connect1244 := TconnectNode.Create;
connect1244.NodeField := 'value_changed';
connect1244.ProtoField := 'r_index_metacarpal_changed';
{ .AddConnect }
IS1241.Connect := connect1244;
{ .SetIS }
OrientationInterpolator1240.IS := IS1241;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1240]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1240.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1246 := TOrientationInterpolatorNode.Create;
IS1247 := TISNode.Create;
connect1248 := TconnectNode.Create;
connect1248.NodeField := 'key';
connect1248.ProtoField := 'r_index_middle_key';
{ .AddConnect }
IS1247.Connect := connect1248;
connect1249 := TconnectNode.Create;
connect1249.NodeField := 'keyValue';
connect1249.ProtoField := 'r_index_middle_keyValue';
{ .AddConnect }
IS1247.Connect := connect1249;
connect1250 := TconnectNode.Create;
connect1250.NodeField := 'value_changed';
connect1250.ProtoField := 'r_index_middle_changed';
{ .AddConnect }
IS1247.Connect := connect1250;
{ .SetIS }
OrientationInterpolator1246.IS := IS1247;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1246]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1246.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1252 := TOrientationInterpolatorNode.Create;
IS1253 := TISNode.Create;
connect1254 := TconnectNode.Create;
connect1254.NodeField := 'key';
connect1254.ProtoField := 'r_index_proximal_key';
{ .AddConnect }
IS1253.Connect := connect1254;
connect1255 := TconnectNode.Create;
connect1255.NodeField := 'keyValue';
connect1255.ProtoField := 'r_index_proximal_keyValue';
{ .AddConnect }
IS1253.Connect := connect1255;
connect1256 := TconnectNode.Create;
connect1256.NodeField := 'value_changed';
connect1256.ProtoField := 'r_index_proximal_changed';
{ .AddConnect }
IS1253.Connect := connect1256;
{ .SetIS }
OrientationInterpolator1252.IS := IS1253;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1252]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1252.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1258 := TOrientationInterpolatorNode.Create;
IS1259 := TISNode.Create;
connect1260 := TconnectNode.Create;
connect1260.NodeField := 'key';
connect1260.ProtoField := 'r_knee_key';
{ .AddConnect }
IS1259.Connect := connect1260;
connect1261 := TconnectNode.Create;
connect1261.NodeField := 'keyValue';
connect1261.ProtoField := 'r_knee_keyValue';
{ .AddConnect }
IS1259.Connect := connect1261;
connect1262 := TconnectNode.Create;
connect1262.NodeField := 'value_changed';
connect1262.ProtoField := 'r_knee_changed';
{ .AddConnect }
IS1259.Connect := connect1262;
{ .SetIS }
OrientationInterpolator1258.IS := IS1259;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1258]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1258.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1264 := TOrientationInterpolatorNode.Create;
IS1265 := TISNode.Create;
connect1266 := TconnectNode.Create;
connect1266.NodeField := 'key';
connect1266.ProtoField := 'r_metatarsal_key';
{ .AddConnect }
IS1265.Connect := connect1266;
connect1267 := TconnectNode.Create;
connect1267.NodeField := 'keyValue';
connect1267.ProtoField := 'r_metatarsal_keyValue';
{ .AddConnect }
IS1265.Connect := connect1267;
connect1268 := TconnectNode.Create;
connect1268.NodeField := 'value_changed';
connect1268.ProtoField := 'r_metatarsal_changed';
{ .AddConnect }
IS1265.Connect := connect1268;
{ .SetIS }
OrientationInterpolator1264.IS := IS1265;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1264]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1264.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1270 := TOrientationInterpolatorNode.Create;
IS1271 := TISNode.Create;
connect1272 := TconnectNode.Create;
connect1272.NodeField := 'key';
connect1272.ProtoField := 'r_middistal_key';
{ .AddConnect }
IS1271.Connect := connect1272;
connect1273 := TconnectNode.Create;
connect1273.NodeField := 'keyValue';
connect1273.ProtoField := 'r_middistal_keyValue';
{ .AddConnect }
IS1271.Connect := connect1273;
connect1274 := TconnectNode.Create;
connect1274.NodeField := 'value_changed';
connect1274.ProtoField := 'r_middistal_changed';
{ .AddConnect }
IS1271.Connect := connect1274;
{ .SetIS }
OrientationInterpolator1270.IS := IS1271;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1270]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1270.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1276 := TOrientationInterpolatorNode.Create;
IS1277 := TISNode.Create;
connect1278 := TconnectNode.Create;
connect1278.NodeField := 'key';
connect1278.ProtoField := 'r_middle0_key';
{ .AddConnect }
IS1277.Connect := connect1278;
connect1279 := TconnectNode.Create;
connect1279.NodeField := 'keyValue';
connect1279.ProtoField := 'r_middle0_keyValue';
{ .AddConnect }
IS1277.Connect := connect1279;
connect1280 := TconnectNode.Create;
connect1280.NodeField := 'value_changed';
connect1280.ProtoField := 'r_middle0_changed';
{ .AddConnect }
IS1277.Connect := connect1280;
{ .SetIS }
OrientationInterpolator1276.IS := IS1277;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1276]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1276.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1282 := TOrientationInterpolatorNode.Create;
IS1283 := TISNode.Create;
connect1284 := TconnectNode.Create;
connect1284.NodeField := 'key';
connect1284.ProtoField := 'r_middle1_key';
{ .AddConnect }
IS1283.Connect := connect1284;
connect1285 := TconnectNode.Create;
connect1285.NodeField := 'keyValue';
connect1285.ProtoField := 'r_middle1_keyValue';
{ .AddConnect }
IS1283.Connect := connect1285;
connect1286 := TconnectNode.Create;
connect1286.NodeField := 'value_changed';
connect1286.ProtoField := 'r_middle1_changed';
{ .AddConnect }
IS1283.Connect := connect1286;
{ .SetIS }
OrientationInterpolator1282.IS := IS1283;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1282]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1282.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1288 := TOrientationInterpolatorNode.Create;
IS1289 := TISNode.Create;
connect1290 := TconnectNode.Create;
connect1290.NodeField := 'key';
connect1290.ProtoField := 'r_middle2_key';
{ .AddConnect }
IS1289.Connect := connect1290;
connect1291 := TconnectNode.Create;
connect1291.NodeField := 'keyValue';
connect1291.ProtoField := 'r_middle2_keyValue';
{ .AddConnect }
IS1289.Connect := connect1291;
connect1292 := TconnectNode.Create;
connect1292.NodeField := 'value_changed';
connect1292.ProtoField := 'r_middle2_changed';
{ .AddConnect }
IS1289.Connect := connect1292;
{ .SetIS }
OrientationInterpolator1288.IS := IS1289;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1288]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1288.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1294 := TOrientationInterpolatorNode.Create;
IS1295 := TISNode.Create;
connect1296 := TconnectNode.Create;
connect1296.NodeField := 'key';
connect1296.ProtoField := 'r_middle3_key';
{ .AddConnect }
IS1295.Connect := connect1296;
connect1297 := TconnectNode.Create;
connect1297.NodeField := 'keyValue';
connect1297.ProtoField := 'r_middle3_keyValue';
{ .AddConnect }
IS1295.Connect := connect1297;
connect1298 := TconnectNode.Create;
connect1298.NodeField := 'value_changed';
connect1298.ProtoField := 'r_middle3_changed';
{ .AddConnect }
IS1295.Connect := connect1298;
{ .SetIS }
OrientationInterpolator1294.IS := IS1295;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1294]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1294.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1300 := TOrientationInterpolatorNode.Create;
IS1301 := TISNode.Create;
connect1302 := TconnectNode.Create;
connect1302.NodeField := 'key';
connect1302.ProtoField := 'r_middle_distal_key';
{ .AddConnect }
IS1301.Connect := connect1302;
connect1303 := TconnectNode.Create;
connect1303.NodeField := 'keyValue';
connect1303.ProtoField := 'r_middle_distal_keyValue';
{ .AddConnect }
IS1301.Connect := connect1303;
connect1304 := TconnectNode.Create;
connect1304.NodeField := 'value_changed';
connect1304.ProtoField := 'r_middle_distal_changed';
{ .AddConnect }
IS1301.Connect := connect1304;
{ .SetIS }
OrientationInterpolator1300.IS := IS1301;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1300]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1300.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1306 := TOrientationInterpolatorNode.Create;
IS1307 := TISNode.Create;
connect1308 := TconnectNode.Create;
connect1308.NodeField := 'key';
connect1308.ProtoField := 'r_middle_metacarpal_key';
{ .AddConnect }
IS1307.Connect := connect1308;
connect1309 := TconnectNode.Create;
connect1309.NodeField := 'keyValue';
connect1309.ProtoField := 'r_middle_metacarpal_keyValue';
{ .AddConnect }
IS1307.Connect := connect1309;
connect1310 := TconnectNode.Create;
connect1310.NodeField := 'value_changed';
connect1310.ProtoField := 'r_middle_metacarpal_changed';
{ .AddConnect }
IS1307.Connect := connect1310;
{ .SetIS }
OrientationInterpolator1306.IS := IS1307;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1306]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1306.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1312 := TOrientationInterpolatorNode.Create;
IS1313 := TISNode.Create;
connect1314 := TconnectNode.Create;
connect1314.NodeField := 'key';
connect1314.ProtoField := 'r_middle_middle_key';
{ .AddConnect }
IS1313.Connect := connect1314;
connect1315 := TconnectNode.Create;
connect1315.NodeField := 'keyValue';
connect1315.ProtoField := 'r_middle_middle_keyValue';
{ .AddConnect }
IS1313.Connect := connect1315;
connect1316 := TconnectNode.Create;
connect1316.NodeField := 'value_changed';
connect1316.ProtoField := 'r_middle_middle_changed';
{ .AddConnect }
IS1313.Connect := connect1316;
{ .SetIS }
OrientationInterpolator1312.IS := IS1313;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1312]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1312.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1318 := TOrientationInterpolatorNode.Create;
IS1319 := TISNode.Create;
connect1320 := TconnectNode.Create;
connect1320.NodeField := 'key';
connect1320.ProtoField := 'r_middle_proximal_key';
{ .AddConnect }
IS1319.Connect := connect1320;
connect1321 := TconnectNode.Create;
connect1321.NodeField := 'keyValue';
connect1321.ProtoField := 'r_middle_proximal_keyValue';
{ .AddConnect }
IS1319.Connect := connect1321;
connect1322 := TconnectNode.Create;
connect1322.NodeField := 'value_changed';
connect1322.ProtoField := 'r_middle_proximal_changed';
{ .AddConnect }
IS1319.Connect := connect1322;
{ .SetIS }
OrientationInterpolator1318.IS := IS1319;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1318]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1318.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1324 := TOrientationInterpolatorNode.Create;
IS1325 := TISNode.Create;
connect1326 := TconnectNode.Create;
connect1326.NodeField := 'key';
connect1326.ProtoField := 'r_midproximal_key';
{ .AddConnect }
IS1325.Connect := connect1326;
connect1327 := TconnectNode.Create;
connect1327.NodeField := 'keyValue';
connect1327.ProtoField := 'r_midproximal_keyValue';
{ .AddConnect }
IS1325.Connect := connect1327;
connect1328 := TconnectNode.Create;
connect1328.NodeField := 'value_changed';
connect1328.ProtoField := 'r_midproximal_changed';
{ .AddConnect }
IS1325.Connect := connect1328;
{ .SetIS }
OrientationInterpolator1324.IS := IS1325;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1324]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1324.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1330 := TOrientationInterpolatorNode.Create;
IS1331 := TISNode.Create;
connect1332 := TconnectNode.Create;
connect1332.NodeField := 'key';
connect1332.ProtoField := 'r_midtarsal_key';
{ .AddConnect }
IS1331.Connect := connect1332;
connect1333 := TconnectNode.Create;
connect1333.NodeField := 'keyValue';
connect1333.ProtoField := 'r_midtarsal_keyValue';
{ .AddConnect }
IS1331.Connect := connect1333;
connect1334 := TconnectNode.Create;
connect1334.NodeField := 'value_changed';
connect1334.ProtoField := 'r_midtarsal_changed';
{ .AddConnect }
IS1331.Connect := connect1334;
{ .SetIS }
OrientationInterpolator1330.IS := IS1331;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1330]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1330.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1336 := TOrientationInterpolatorNode.Create;
IS1337 := TISNode.Create;
connect1338 := TconnectNode.Create;
connect1338.NodeField := 'key';
connect1338.ProtoField := 'r_pinky0_key';
{ .AddConnect }
IS1337.Connect := connect1338;
connect1339 := TconnectNode.Create;
connect1339.NodeField := 'keyValue';
connect1339.ProtoField := 'r_pinky0_keyValue';
{ .AddConnect }
IS1337.Connect := connect1339;
connect1340 := TconnectNode.Create;
connect1340.NodeField := 'value_changed';
connect1340.ProtoField := 'r_pinky0_changed';
{ .AddConnect }
IS1337.Connect := connect1340;
{ .SetIS }
OrientationInterpolator1336.IS := IS1337;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1336]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1336.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1342 := TOrientationInterpolatorNode.Create;
IS1343 := TISNode.Create;
connect1344 := TconnectNode.Create;
connect1344.NodeField := 'key';
connect1344.ProtoField := 'r_pinky1_key';
{ .AddConnect }
IS1343.Connect := connect1344;
connect1345 := TconnectNode.Create;
connect1345.NodeField := 'keyValue';
connect1345.ProtoField := 'r_pinky1_keyValue';
{ .AddConnect }
IS1343.Connect := connect1345;
connect1346 := TconnectNode.Create;
connect1346.NodeField := 'value_changed';
connect1346.ProtoField := 'r_pinky1_changed';
{ .AddConnect }
IS1343.Connect := connect1346;
{ .SetIS }
OrientationInterpolator1342.IS := IS1343;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1342]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1342.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1348 := TOrientationInterpolatorNode.Create;
IS1349 := TISNode.Create;
connect1350 := TconnectNode.Create;
connect1350.NodeField := 'key';
connect1350.ProtoField := 'r_pinky2_key';
{ .AddConnect }
IS1349.Connect := connect1350;
connect1351 := TconnectNode.Create;
connect1351.NodeField := 'keyValue';
connect1351.ProtoField := 'r_pinky2_keyValue';
{ .AddConnect }
IS1349.Connect := connect1351;
connect1352 := TconnectNode.Create;
connect1352.NodeField := 'value_changed';
connect1352.ProtoField := 'r_pinky2_changed';
{ .AddConnect }
IS1349.Connect := connect1352;
{ .SetIS }
OrientationInterpolator1348.IS := IS1349;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1348]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1348.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1354 := TOrientationInterpolatorNode.Create;
IS1355 := TISNode.Create;
connect1356 := TconnectNode.Create;
connect1356.NodeField := 'key';
connect1356.ProtoField := 'r_pinky3_key';
{ .AddConnect }
IS1355.Connect := connect1356;
connect1357 := TconnectNode.Create;
connect1357.NodeField := 'keyValue';
connect1357.ProtoField := 'r_pinky3_keyValue';
{ .AddConnect }
IS1355.Connect := connect1357;
connect1358 := TconnectNode.Create;
connect1358.NodeField := 'value_changed';
connect1358.ProtoField := 'r_pinky3_changed';
{ .AddConnect }
IS1355.Connect := connect1358;
{ .SetIS }
OrientationInterpolator1354.IS := IS1355;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1354]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1354.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1360 := TOrientationInterpolatorNode.Create;
IS1361 := TISNode.Create;
connect1362 := TconnectNode.Create;
connect1362.NodeField := 'key';
connect1362.ProtoField := 'r_pinky_distal_key';
{ .AddConnect }
IS1361.Connect := connect1362;
connect1363 := TconnectNode.Create;
connect1363.NodeField := 'keyValue';
connect1363.ProtoField := 'r_pinky_distal_keyValue';
{ .AddConnect }
IS1361.Connect := connect1363;
connect1364 := TconnectNode.Create;
connect1364.NodeField := 'value_changed';
connect1364.ProtoField := 'r_pinky_distal_changed';
{ .AddConnect }
IS1361.Connect := connect1364;
{ .SetIS }
OrientationInterpolator1360.IS := IS1361;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1360]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1360.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1366 := TOrientationInterpolatorNode.Create;
IS1367 := TISNode.Create;
connect1368 := TconnectNode.Create;
connect1368.NodeField := 'key';
connect1368.ProtoField := 'r_pinky_metacarpal_key';
{ .AddConnect }
IS1367.Connect := connect1368;
connect1369 := TconnectNode.Create;
connect1369.NodeField := 'keyValue';
connect1369.ProtoField := 'r_pinky_metacarpal_keyValue';
{ .AddConnect }
IS1367.Connect := connect1369;
connect1370 := TconnectNode.Create;
connect1370.NodeField := 'value_changed';
connect1370.ProtoField := 'r_pinky_metacarpal_changed';
{ .AddConnect }
IS1367.Connect := connect1370;
{ .SetIS }
OrientationInterpolator1366.IS := IS1367;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1366]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1366.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1372 := TOrientationInterpolatorNode.Create;
IS1373 := TISNode.Create;
connect1374 := TconnectNode.Create;
connect1374.NodeField := 'key';
connect1374.ProtoField := 'r_pinky_middle_key';
{ .AddConnect }
IS1373.Connect := connect1374;
connect1375 := TconnectNode.Create;
connect1375.NodeField := 'keyValue';
connect1375.ProtoField := 'r_pinky_middle_keyValue';
{ .AddConnect }
IS1373.Connect := connect1375;
connect1376 := TconnectNode.Create;
connect1376.NodeField := 'value_changed';
connect1376.ProtoField := 'r_pinky_middle_changed';
{ .AddConnect }
IS1373.Connect := connect1376;
{ .SetIS }
OrientationInterpolator1372.IS := IS1373;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1372]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1372.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1378 := TOrientationInterpolatorNode.Create;
IS1379 := TISNode.Create;
connect1380 := TconnectNode.Create;
connect1380.NodeField := 'key';
connect1380.ProtoField := 'r_pinky_proximal_key';
{ .AddConnect }
IS1379.Connect := connect1380;
connect1381 := TconnectNode.Create;
connect1381.NodeField := 'keyValue';
connect1381.ProtoField := 'r_pinky_proximal_keyValue';
{ .AddConnect }
IS1379.Connect := connect1381;
connect1382 := TconnectNode.Create;
connect1382.NodeField := 'value_changed';
connect1382.ProtoField := 'r_pinky_proximal_changed';
{ .AddConnect }
IS1379.Connect := connect1382;
{ .SetIS }
OrientationInterpolator1378.IS := IS1379;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1378]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1378.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1384 := TOrientationInterpolatorNode.Create;
IS1385 := TISNode.Create;
connect1386 := TconnectNode.Create;
connect1386.NodeField := 'key';
connect1386.ProtoField := 'r_ring0_key';
{ .AddConnect }
IS1385.Connect := connect1386;
connect1387 := TconnectNode.Create;
connect1387.NodeField := 'keyValue';
connect1387.ProtoField := 'r_ring0_keyValue';
{ .AddConnect }
IS1385.Connect := connect1387;
connect1388 := TconnectNode.Create;
connect1388.NodeField := 'value_changed';
connect1388.ProtoField := 'r_ring0_changed';
{ .AddConnect }
IS1385.Connect := connect1388;
{ .SetIS }
OrientationInterpolator1384.IS := IS1385;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1384]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1384.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1390 := TOrientationInterpolatorNode.Create;
IS1391 := TISNode.Create;
connect1392 := TconnectNode.Create;
connect1392.NodeField := 'key';
connect1392.ProtoField := 'r_ring1_key';
{ .AddConnect }
IS1391.Connect := connect1392;
connect1393 := TconnectNode.Create;
connect1393.NodeField := 'keyValue';
connect1393.ProtoField := 'r_ring1_keyValue';
{ .AddConnect }
IS1391.Connect := connect1393;
connect1394 := TconnectNode.Create;
connect1394.NodeField := 'value_changed';
connect1394.ProtoField := 'r_ring1_changed';
{ .AddConnect }
IS1391.Connect := connect1394;
{ .SetIS }
OrientationInterpolator1390.IS := IS1391;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1390]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1390.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1396 := TOrientationInterpolatorNode.Create;
IS1397 := TISNode.Create;
connect1398 := TconnectNode.Create;
connect1398.NodeField := 'key';
connect1398.ProtoField := 'r_ring2_key';
{ .AddConnect }
IS1397.Connect := connect1398;
connect1399 := TconnectNode.Create;
connect1399.NodeField := 'keyValue';
connect1399.ProtoField := 'r_ring2_keyValue';
{ .AddConnect }
IS1397.Connect := connect1399;
connect1400 := TconnectNode.Create;
connect1400.NodeField := 'value_changed';
connect1400.ProtoField := 'r_ring2_changed';
{ .AddConnect }
IS1397.Connect := connect1400;
{ .SetIS }
OrientationInterpolator1396.IS := IS1397;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1396]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1396.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1402 := TOrientationInterpolatorNode.Create;
IS1403 := TISNode.Create;
connect1404 := TconnectNode.Create;
connect1404.NodeField := 'key';
connect1404.ProtoField := 'r_ring3_key';
{ .AddConnect }
IS1403.Connect := connect1404;
connect1405 := TconnectNode.Create;
connect1405.NodeField := 'keyValue';
connect1405.ProtoField := 'r_ring3_keyValue';
{ .AddConnect }
IS1403.Connect := connect1405;
connect1406 := TconnectNode.Create;
connect1406.NodeField := 'value_changed';
connect1406.ProtoField := 'r_ring3_changed';
{ .AddConnect }
IS1403.Connect := connect1406;
{ .SetIS }
OrientationInterpolator1402.IS := IS1403;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1402]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1402.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1408 := TOrientationInterpolatorNode.Create;
IS1409 := TISNode.Create;
connect1410 := TconnectNode.Create;
connect1410.NodeField := 'key';
connect1410.ProtoField := 'r_ring_distal_key';
{ .AddConnect }
IS1409.Connect := connect1410;
connect1411 := TconnectNode.Create;
connect1411.NodeField := 'keyValue';
connect1411.ProtoField := 'r_ring_distal_keyValue';
{ .AddConnect }
IS1409.Connect := connect1411;
connect1412 := TconnectNode.Create;
connect1412.NodeField := 'value_changed';
connect1412.ProtoField := 'r_ring_distal_changed';
{ .AddConnect }
IS1409.Connect := connect1412;
{ .SetIS }
OrientationInterpolator1408.IS := IS1409;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1408]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1408.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1414 := TOrientationInterpolatorNode.Create;
IS1415 := TISNode.Create;
connect1416 := TconnectNode.Create;
connect1416.NodeField := 'key';
connect1416.ProtoField := 'r_ring_metacarpal_key';
{ .AddConnect }
IS1415.Connect := connect1416;
connect1417 := TconnectNode.Create;
connect1417.NodeField := 'keyValue';
connect1417.ProtoField := 'r_ring_metacarpal_keyValue';
{ .AddConnect }
IS1415.Connect := connect1417;
connect1418 := TconnectNode.Create;
connect1418.NodeField := 'value_changed';
connect1418.ProtoField := 'r_ring_metacarpal_changed';
{ .AddConnect }
IS1415.Connect := connect1418;
{ .SetIS }
OrientationInterpolator1414.IS := IS1415;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1414]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1414.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1420 := TOrientationInterpolatorNode.Create;
IS1421 := TISNode.Create;
connect1422 := TconnectNode.Create;
connect1422.NodeField := 'key';
connect1422.ProtoField := 'r_ring_middle_key';
{ .AddConnect }
IS1421.Connect := connect1422;
connect1423 := TconnectNode.Create;
connect1423.NodeField := 'keyValue';
connect1423.ProtoField := 'r_ring_middle_keyValue';
{ .AddConnect }
IS1421.Connect := connect1423;
connect1424 := TconnectNode.Create;
connect1424.NodeField := 'value_changed';
connect1424.ProtoField := 'r_ring_middle_changed';
{ .AddConnect }
IS1421.Connect := connect1424;
{ .SetIS }
OrientationInterpolator1420.IS := IS1421;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1420]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1420.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1426 := TOrientationInterpolatorNode.Create;
IS1427 := TISNode.Create;
connect1428 := TconnectNode.Create;
connect1428.NodeField := 'key';
connect1428.ProtoField := 'r_ring_proximal_key';
{ .AddConnect }
IS1427.Connect := connect1428;
connect1429 := TconnectNode.Create;
connect1429.NodeField := 'keyValue';
connect1429.ProtoField := 'r_ring_proximal_keyValue';
{ .AddConnect }
IS1427.Connect := connect1429;
connect1430 := TconnectNode.Create;
connect1430.NodeField := 'value_changed';
connect1430.ProtoField := 'r_ring_proximal_changed';
{ .AddConnect }
IS1427.Connect := connect1430;
{ .SetIS }
OrientationInterpolator1426.IS := IS1427;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1426]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1426.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1432 := TOrientationInterpolatorNode.Create;
IS1433 := TISNode.Create;
connect1434 := TconnectNode.Create;
connect1434.NodeField := 'key';
connect1434.ProtoField := 'r_scapula_key';
{ .AddConnect }
IS1433.Connect := connect1434;
connect1435 := TconnectNode.Create;
connect1435.NodeField := 'keyValue';
connect1435.ProtoField := 'r_scapula_keyValue';
{ .AddConnect }
IS1433.Connect := connect1435;
connect1436 := TconnectNode.Create;
connect1436.NodeField := 'value_changed';
connect1436.ProtoField := 'r_scapula_changed';
{ .AddConnect }
IS1433.Connect := connect1436;
{ .SetIS }
OrientationInterpolator1432.IS := IS1433;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1432]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1432.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1438 := TOrientationInterpolatorNode.Create;
IS1439 := TISNode.Create;
connect1440 := TconnectNode.Create;
connect1440.NodeField := 'key';
connect1440.ProtoField := 'r_shoulder_key';
{ .AddConnect }
IS1439.Connect := connect1440;
connect1441 := TconnectNode.Create;
connect1441.NodeField := 'keyValue';
connect1441.ProtoField := 'r_shoulder_keyValue';
{ .AddConnect }
IS1439.Connect := connect1441;
connect1442 := TconnectNode.Create;
connect1442.NodeField := 'value_changed';
connect1442.ProtoField := 'r_shoulder_changed';
{ .AddConnect }
IS1439.Connect := connect1442;
{ .SetIS }
OrientationInterpolator1438.IS := IS1439;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1438]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1438.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1444 := TOrientationInterpolatorNode.Create;
IS1445 := TISNode.Create;
connect1446 := TconnectNode.Create;
connect1446.NodeField := 'key';
connect1446.ProtoField := 'r_sternoclavicular_key';
{ .AddConnect }
IS1445.Connect := connect1446;
connect1447 := TconnectNode.Create;
connect1447.NodeField := 'keyValue';
connect1447.ProtoField := 'r_sternoclavicular_keyValue';
{ .AddConnect }
IS1445.Connect := connect1447;
connect1448 := TconnectNode.Create;
connect1448.NodeField := 'value_changed';
connect1448.ProtoField := 'r_sternoclavicular_changed';
{ .AddConnect }
IS1445.Connect := connect1448;
{ .SetIS }
OrientationInterpolator1444.IS := IS1445;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1444]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1444.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1450 := TOrientationInterpolatorNode.Create;
IS1451 := TISNode.Create;
connect1452 := TconnectNode.Create;
connect1452.NodeField := 'key';
connect1452.ProtoField := 'r_subtalar_key';
{ .AddConnect }
IS1451.Connect := connect1452;
connect1453 := TconnectNode.Create;
connect1453.NodeField := 'keyValue';
connect1453.ProtoField := 'r_subtalar_keyValue';
{ .AddConnect }
IS1451.Connect := connect1453;
connect1454 := TconnectNode.Create;
connect1454.NodeField := 'value_changed';
connect1454.ProtoField := 'r_subtalar_changed';
{ .AddConnect }
IS1451.Connect := connect1454;
{ .SetIS }
OrientationInterpolator1450.IS := IS1451;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1450]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1450.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1456 := TOrientationInterpolatorNode.Create;
IS1457 := TISNode.Create;
connect1458 := TconnectNode.Create;
connect1458.NodeField := 'key';
connect1458.ProtoField := 'r_thigh_key';
{ .AddConnect }
IS1457.Connect := connect1458;
connect1459 := TconnectNode.Create;
connect1459.NodeField := 'keyValue';
connect1459.ProtoField := 'r_thigh_keyValue';
{ .AddConnect }
IS1457.Connect := connect1459;
connect1460 := TconnectNode.Create;
connect1460.NodeField := 'value_changed';
connect1460.ProtoField := 'r_thigh_changed';
{ .AddConnect }
IS1457.Connect := connect1460;
{ .SetIS }
OrientationInterpolator1456.IS := IS1457;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1456]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1456.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1462 := TOrientationInterpolatorNode.Create;
IS1463 := TISNode.Create;
connect1464 := TconnectNode.Create;
connect1464.NodeField := 'key';
connect1464.ProtoField := 'r_thumb1_key';
{ .AddConnect }
IS1463.Connect := connect1464;
connect1465 := TconnectNode.Create;
connect1465.NodeField := 'keyValue';
connect1465.ProtoField := 'r_thumb1_keyValue';
{ .AddConnect }
IS1463.Connect := connect1465;
connect1466 := TconnectNode.Create;
connect1466.NodeField := 'value_changed';
connect1466.ProtoField := 'r_thumb1_changed';
{ .AddConnect }
IS1463.Connect := connect1466;
{ .SetIS }
OrientationInterpolator1462.IS := IS1463;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1462]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1462.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
IS1469 := TISNode.Create;
connect1470 := TconnectNode.Create;
connect1470.NodeField := 'key';
connect1470.ProtoField := 'r_thumb2_key';
{ .AddConnect }
IS1469.Connect := connect1470;
connect1471 := TconnectNode.Create;
connect1471.NodeField := 'keyValue';
connect1471.ProtoField := 'r_thumb2_keyValue';
{ .AddConnect }
IS1469.Connect := connect1471;
connect1472 := TconnectNode.Create;
connect1472.NodeField := 'value_changed';
connect1472.ProtoField := 'r_thumb2_changed';
{ .AddConnect }
IS1469.Connect := connect1472;
{ .SetIS }
OrientationInterpolator1468.IS := IS1469;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1468]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1468.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
IS1475 := TISNode.Create;
connect1476 := TconnectNode.Create;
connect1476.NodeField := 'key';
connect1476.ProtoField := 'r_thumb3_key';
{ .AddConnect }
IS1475.Connect := connect1476;
connect1477 := TconnectNode.Create;
connect1477.NodeField := 'keyValue';
connect1477.ProtoField := 'r_thumb3_keyValue';
{ .AddConnect }
IS1475.Connect := connect1477;
connect1478 := TconnectNode.Create;
connect1478.NodeField := 'value_changed';
connect1478.ProtoField := 'r_thumb3_changed';
{ .AddConnect }
IS1475.Connect := connect1478;
{ .SetIS }
OrientationInterpolator1474.IS := IS1475;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1474]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1474.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
IS1481 := TISNode.Create;
connect1482 := TconnectNode.Create;
connect1482.NodeField := 'key';
connect1482.ProtoField := 'r_thumb_distal_key';
{ .AddConnect }
IS1481.Connect := connect1482;
connect1483 := TconnectNode.Create;
connect1483.NodeField := 'keyValue';
connect1483.ProtoField := 'r_thumb_distal_keyValue';
{ .AddConnect }
IS1481.Connect := connect1483;
connect1484 := TconnectNode.Create;
connect1484.NodeField := 'value_changed';
connect1484.ProtoField := 'r_thumb_distal_changed';
{ .AddConnect }
IS1481.Connect := connect1484;
{ .SetIS }
OrientationInterpolator1480.IS := IS1481;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1480]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1480.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1486 := TOrientationInterpolatorNode.Create;
IS1487 := TISNode.Create;
connect1488 := TconnectNode.Create;
connect1488.NodeField := 'key';
connect1488.ProtoField := 'r_thumb_metacarpal_key';
{ .AddConnect }
IS1487.Connect := connect1488;
connect1489 := TconnectNode.Create;
connect1489.NodeField := 'keyValue';
connect1489.ProtoField := 'r_thumb_metacarpal_keyValue';
{ .AddConnect }
IS1487.Connect := connect1489;
connect1490 := TconnectNode.Create;
connect1490.NodeField := 'value_changed';
connect1490.ProtoField := 'r_thumb_metacarpal_changed';
{ .AddConnect }
IS1487.Connect := connect1490;
{ .SetIS }
OrientationInterpolator1486.IS := IS1487;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1486]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1486.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1492 := TOrientationInterpolatorNode.Create;
IS1493 := TISNode.Create;
connect1494 := TconnectNode.Create;
connect1494.NodeField := 'key';
connect1494.ProtoField := 'r_thumb_proximal_key';
{ .AddConnect }
IS1493.Connect := connect1494;
connect1495 := TconnectNode.Create;
connect1495.NodeField := 'keyValue';
connect1495.ProtoField := 'r_thumb_proximal_keyValue';
{ .AddConnect }
IS1493.Connect := connect1495;
connect1496 := TconnectNode.Create;
connect1496.NodeField := 'value_changed';
connect1496.ProtoField := 'r_thumb_proximal_changed';
{ .AddConnect }
IS1493.Connect := connect1496;
{ .SetIS }
OrientationInterpolator1492.IS := IS1493;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1492]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1492.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1498 := TOrientationInterpolatorNode.Create;
IS1499 := TISNode.Create;
connect1500 := TconnectNode.Create;
connect1500.NodeField := 'key';
connect1500.ProtoField := 'r_upperarm_key';
{ .AddConnect }
IS1499.Connect := connect1500;
connect1501 := TconnectNode.Create;
connect1501.NodeField := 'keyValue';
connect1501.ProtoField := 'r_upperarm_keyValue';
{ .AddConnect }
IS1499.Connect := connect1501;
connect1502 := TconnectNode.Create;
connect1502.NodeField := 'value_changed';
connect1502.ProtoField := 'r_upperarm_changed';
{ .AddConnect }
IS1499.Connect := connect1502;
{ .SetIS }
OrientationInterpolator1498.IS := IS1499;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1498]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1498.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1504 := TOrientationInterpolatorNode.Create;
IS1505 := TISNode.Create;
connect1506 := TconnectNode.Create;
connect1506.NodeField := 'key';
connect1506.ProtoField := 'r_wrist_key';
{ .AddConnect }
IS1505.Connect := connect1506;
connect1507 := TconnectNode.Create;
connect1507.NodeField := 'keyValue';
connect1507.ProtoField := 'r_wrist_keyValue';
{ .AddConnect }
IS1505.Connect := connect1507;
connect1508 := TconnectNode.Create;
connect1508.NodeField := 'value_changed';
connect1508.ProtoField := 'r_wrist_changed';
{ .AddConnect }
IS1505.Connect := connect1508;
{ .SetIS }
OrientationInterpolator1504.IS := IS1505;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1504]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1504.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1510 := TOrientationInterpolatorNode.Create;
IS1511 := TISNode.Create;
connect1512 := TconnectNode.Create;
connect1512.NodeField := 'key';
connect1512.ProtoField := 'sacroiliac_key';
{ .AddConnect }
IS1511.Connect := connect1512;
connect1513 := TconnectNode.Create;
connect1513.NodeField := 'keyValue';
connect1513.ProtoField := 'sacroiliac_keyValue';
{ .AddConnect }
IS1511.Connect := connect1513;
connect1514 := TconnectNode.Create;
connect1514.NodeField := 'value_changed';
connect1514.ProtoField := 'sacroiliac_changed';
{ .AddConnect }
IS1511.Connect := connect1514;
{ .SetIS }
OrientationInterpolator1510.IS := IS1511;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1510]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1510.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1516 := TOrientationInterpolatorNode.Create;
IS1517 := TISNode.Create;
connect1518 := TconnectNode.Create;
connect1518.NodeField := 'key';
connect1518.ProtoField := 'sacrum_key';
{ .AddConnect }
IS1517.Connect := connect1518;
connect1519 := TconnectNode.Create;
connect1519.NodeField := 'keyValue';
connect1519.ProtoField := 'sacrum_keyValue';
{ .AddConnect }
IS1517.Connect := connect1519;
connect1520 := TconnectNode.Create;
connect1520.NodeField := 'value_changed';
connect1520.ProtoField := 'sacrum_changed';
{ .AddConnect }
IS1517.Connect := connect1520;
{ .SetIS }
OrientationInterpolator1516.IS := IS1517;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1516]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1516.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1522 := TOrientationInterpolatorNode.Create;
IS1523 := TISNode.Create;
connect1524 := TconnectNode.Create;
connect1524.NodeField := 'key';
connect1524.ProtoField := 'skull_key';
{ .AddConnect }
IS1523.Connect := connect1524;
connect1525 := TconnectNode.Create;
connect1525.NodeField := 'keyValue';
connect1525.ProtoField := 'skull_keyValue';
{ .AddConnect }
IS1523.Connect := connect1525;
connect1526 := TconnectNode.Create;
connect1526.NodeField := 'value_changed';
connect1526.ProtoField := 'skull_changed';
{ .AddConnect }
IS1523.Connect := connect1526;
{ .SetIS }
OrientationInterpolator1522.IS := IS1523;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1522]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1522.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1528 := TOrientationInterpolatorNode.Create;
IS1529 := TISNode.Create;
connect1530 := TconnectNode.Create;
connect1530.NodeField := 'key';
connect1530.ProtoField := 'skullbase_key';
{ .AddConnect }
IS1529.Connect := connect1530;
connect1531 := TconnectNode.Create;
connect1531.NodeField := 'keyValue';
connect1531.ProtoField := 'skullbase_keyValue';
{ .AddConnect }
IS1529.Connect := connect1531;
connect1532 := TconnectNode.Create;
connect1532.NodeField := 'value_changed';
connect1532.ProtoField := 'skullbase_changed';
{ .AddConnect }
IS1529.Connect := connect1532;
{ .SetIS }
OrientationInterpolator1528.IS := IS1529;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1528]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1528.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1534 := TOrientationInterpolatorNode.Create;
IS1535 := TISNode.Create;
connect1536 := TconnectNode.Create;
connect1536.NodeField := 'key';
connect1536.ProtoField := 't1_key';
{ .AddConnect }
IS1535.Connect := connect1536;
connect1537 := TconnectNode.Create;
connect1537.NodeField := 'keyValue';
connect1537.ProtoField := 't1_keyValue';
{ .AddConnect }
IS1535.Connect := connect1537;
connect1538 := TconnectNode.Create;
connect1538.NodeField := 'value_changed';
connect1538.ProtoField := 't1_changed';
{ .AddConnect }
IS1535.Connect := connect1538;
{ .SetIS }
OrientationInterpolator1534.IS := IS1535;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1534]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1534.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1540 := TOrientationInterpolatorNode.Create;
IS1541 := TISNode.Create;
connect1542 := TconnectNode.Create;
connect1542.NodeField := 'key';
connect1542.ProtoField := 't2_key';
{ .AddConnect }
IS1541.Connect := connect1542;
connect1543 := TconnectNode.Create;
connect1543.NodeField := 'keyValue';
connect1543.ProtoField := 't2_keyValue';
{ .AddConnect }
IS1541.Connect := connect1543;
connect1544 := TconnectNode.Create;
connect1544.NodeField := 'value_changed';
connect1544.ProtoField := 't2_changed';
{ .AddConnect }
IS1541.Connect := connect1544;
{ .SetIS }
OrientationInterpolator1540.IS := IS1541;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1540]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1540.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1546 := TOrientationInterpolatorNode.Create;
IS1547 := TISNode.Create;
connect1548 := TconnectNode.Create;
connect1548.NodeField := 'key';
connect1548.ProtoField := 't3_key';
{ .AddConnect }
IS1547.Connect := connect1548;
connect1549 := TconnectNode.Create;
connect1549.NodeField := 'keyValue';
connect1549.ProtoField := 't3_keyValue';
{ .AddConnect }
IS1547.Connect := connect1549;
connect1550 := TconnectNode.Create;
connect1550.NodeField := 'value_changed';
connect1550.ProtoField := 't3_changed';
{ .AddConnect }
IS1547.Connect := connect1550;
{ .SetIS }
OrientationInterpolator1546.IS := IS1547;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1546]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1546.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1552 := TOrientationInterpolatorNode.Create;
IS1553 := TISNode.Create;
connect1554 := TconnectNode.Create;
connect1554.NodeField := 'key';
connect1554.ProtoField := 't4_key';
{ .AddConnect }
IS1553.Connect := connect1554;
connect1555 := TconnectNode.Create;
connect1555.NodeField := 'keyValue';
connect1555.ProtoField := 't4_keyValue';
{ .AddConnect }
IS1553.Connect := connect1555;
connect1556 := TconnectNode.Create;
connect1556.NodeField := 'value_changed';
connect1556.ProtoField := 't4_changed';
{ .AddConnect }
IS1553.Connect := connect1556;
{ .SetIS }
OrientationInterpolator1552.IS := IS1553;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1552]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1552.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1558 := TOrientationInterpolatorNode.Create;
IS1559 := TISNode.Create;
connect1560 := TconnectNode.Create;
connect1560.NodeField := 'key';
connect1560.ProtoField := 't5_key';
{ .AddConnect }
IS1559.Connect := connect1560;
connect1561 := TconnectNode.Create;
connect1561.NodeField := 'keyValue';
connect1561.ProtoField := 't5_keyValue';
{ .AddConnect }
IS1559.Connect := connect1561;
connect1562 := TconnectNode.Create;
connect1562.NodeField := 'value_changed';
connect1562.ProtoField := 't5_changed';
{ .AddConnect }
IS1559.Connect := connect1562;
{ .SetIS }
OrientationInterpolator1558.IS := IS1559;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1558]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1558.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1564 := TOrientationInterpolatorNode.Create;
IS1565 := TISNode.Create;
connect1566 := TconnectNode.Create;
connect1566.NodeField := 'key';
connect1566.ProtoField := 't6_key';
{ .AddConnect }
IS1565.Connect := connect1566;
connect1567 := TconnectNode.Create;
connect1567.NodeField := 'keyValue';
connect1567.ProtoField := 't6_keyValue';
{ .AddConnect }
IS1565.Connect := connect1567;
connect1568 := TconnectNode.Create;
connect1568.NodeField := 'value_changed';
connect1568.ProtoField := 't6_changed';
{ .AddConnect }
IS1565.Connect := connect1568;
{ .SetIS }
OrientationInterpolator1564.IS := IS1565;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1564]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1564.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1570 := TOrientationInterpolatorNode.Create;
IS1571 := TISNode.Create;
connect1572 := TconnectNode.Create;
connect1572.NodeField := 'key';
connect1572.ProtoField := 't7_key';
{ .AddConnect }
IS1571.Connect := connect1572;
connect1573 := TconnectNode.Create;
connect1573.NodeField := 'keyValue';
connect1573.ProtoField := 't7_keyValue';
{ .AddConnect }
IS1571.Connect := connect1573;
connect1574 := TconnectNode.Create;
connect1574.NodeField := 'value_changed';
connect1574.ProtoField := 't7_changed';
{ .AddConnect }
IS1571.Connect := connect1574;
{ .SetIS }
OrientationInterpolator1570.IS := IS1571;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1570]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1570.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1576 := TOrientationInterpolatorNode.Create;
IS1577 := TISNode.Create;
connect1578 := TconnectNode.Create;
connect1578.NodeField := 'key';
connect1578.ProtoField := 't8_key';
{ .AddConnect }
IS1577.Connect := connect1578;
connect1579 := TconnectNode.Create;
connect1579.NodeField := 'keyValue';
connect1579.ProtoField := 't8_keyValue';
{ .AddConnect }
IS1577.Connect := connect1579;
connect1580 := TconnectNode.Create;
connect1580.NodeField := 'value_changed';
connect1580.ProtoField := 't8_changed';
{ .AddConnect }
IS1577.Connect := connect1580;
{ .SetIS }
OrientationInterpolator1576.IS := IS1577;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1576]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1576.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1582 := TOrientationInterpolatorNode.Create;
IS1583 := TISNode.Create;
connect1584 := TconnectNode.Create;
connect1584.NodeField := 'key';
connect1584.ProtoField := 't9_key';
{ .AddConnect }
IS1583.Connect := connect1584;
connect1585 := TconnectNode.Create;
connect1585.NodeField := 'keyValue';
connect1585.ProtoField := 't9_keyValue';
{ .AddConnect }
IS1583.Connect := connect1585;
connect1586 := TconnectNode.Create;
connect1586.NodeField := 'value_changed';
connect1586.ProtoField := 't9_changed';
{ .AddConnect }
IS1583.Connect := connect1586;
{ .SetIS }
OrientationInterpolator1582.IS := IS1583;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1582]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1582.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1588 := TOrientationInterpolatorNode.Create;
IS1589 := TISNode.Create;
connect1590 := TconnectNode.Create;
connect1590.NodeField := 'key';
connect1590.ProtoField := 't10_key';
{ .AddConnect }
IS1589.Connect := connect1590;
connect1591 := TconnectNode.Create;
connect1591.NodeField := 'keyValue';
connect1591.ProtoField := 't10_keyValue';
{ .AddConnect }
IS1589.Connect := connect1591;
connect1592 := TconnectNode.Create;
connect1592.NodeField := 'value_changed';
connect1592.ProtoField := 't10_changed';
{ .AddConnect }
IS1589.Connect := connect1592;
{ .SetIS }
OrientationInterpolator1588.IS := IS1589;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1588]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1588.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1594 := TOrientationInterpolatorNode.Create;
IS1595 := TISNode.Create;
connect1596 := TconnectNode.Create;
connect1596.NodeField := 'key';
connect1596.ProtoField := 't11_key';
{ .AddConnect }
IS1595.Connect := connect1596;
connect1597 := TconnectNode.Create;
connect1597.NodeField := 'keyValue';
connect1597.ProtoField := 't11_keyValue';
{ .AddConnect }
IS1595.Connect := connect1597;
connect1598 := TconnectNode.Create;
connect1598.NodeField := 'value_changed';
connect1598.ProtoField := 't11_changed';
{ .AddConnect }
IS1595.Connect := connect1598;
{ .SetIS }
OrientationInterpolator1594.IS := IS1595;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1594]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1594.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1600 := TOrientationInterpolatorNode.Create;
IS1601 := TISNode.Create;
connect1602 := TconnectNode.Create;
connect1602.NodeField := 'key';
connect1602.ProtoField := 't12_key';
{ .AddConnect }
IS1601.Connect := connect1602;
connect1603 := TconnectNode.Create;
connect1603.NodeField := 'keyValue';
connect1603.ProtoField := 't12_keyValue';
{ .AddConnect }
IS1601.Connect := connect1603;
connect1604 := TconnectNode.Create;
connect1604.NodeField := 'value_changed';
connect1604.ProtoField := 't12_changed';
{ .AddConnect }
IS1601.Connect := connect1604;
{ .SetIS }
OrientationInterpolator1600.IS := IS1601;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1600]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1600.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1606 := TOrientationInterpolatorNode.Create;
IS1607 := TISNode.Create;
connect1608 := TconnectNode.Create;
connect1608.NodeField := 'key';
connect1608.ProtoField := 'temporomandibular_key';
{ .AddConnect }
IS1607.Connect := connect1608;
connect1609 := TconnectNode.Create;
connect1609.NodeField := 'keyValue';
connect1609.ProtoField := 'temporomandibular_keyValue';
{ .AddConnect }
IS1607.Connect := connect1609;
connect1610 := TconnectNode.Create;
connect1610.NodeField := 'value_changed';
connect1610.ProtoField := 'temporomandibular_changed';
{ .AddConnect }
IS1607.Connect := connect1610;
{ .SetIS }
OrientationInterpolator1606.IS := IS1607;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1606]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1606.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1612 := TOrientationInterpolatorNode.Create;
IS1613 := TISNode.Create;
connect1614 := TconnectNode.Create;
connect1614.NodeField := 'key';
connect1614.ProtoField := 'vc1_key';
{ .AddConnect }
IS1613.Connect := connect1614;
connect1615 := TconnectNode.Create;
connect1615.NodeField := 'keyValue';
connect1615.ProtoField := 'vc1_keyValue';
{ .AddConnect }
IS1613.Connect := connect1615;
connect1616 := TconnectNode.Create;
connect1616.NodeField := 'value_changed';
connect1616.ProtoField := 'vc1_changed';
{ .AddConnect }
IS1613.Connect := connect1616;
{ .SetIS }
OrientationInterpolator1612.IS := IS1613;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1612]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1612.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1618 := TOrientationInterpolatorNode.Create;
IS1619 := TISNode.Create;
connect1620 := TconnectNode.Create;
connect1620.NodeField := 'key';
connect1620.ProtoField := 'vc2_key';
{ .AddConnect }
IS1619.Connect := connect1620;
connect1621 := TconnectNode.Create;
connect1621.NodeField := 'keyValue';
connect1621.ProtoField := 'vc2_keyValue';
{ .AddConnect }
IS1619.Connect := connect1621;
connect1622 := TconnectNode.Create;
connect1622.NodeField := 'value_changed';
connect1622.ProtoField := 'vc2_changed';
{ .AddConnect }
IS1619.Connect := connect1622;
{ .SetIS }
OrientationInterpolator1618.IS := IS1619;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1618]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1618.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1624 := TOrientationInterpolatorNode.Create;
IS1625 := TISNode.Create;
connect1626 := TconnectNode.Create;
connect1626.NodeField := 'key';
connect1626.ProtoField := 'vc3_key';
{ .AddConnect }
IS1625.Connect := connect1626;
connect1627 := TconnectNode.Create;
connect1627.NodeField := 'keyValue';
connect1627.ProtoField := 'vc3_keyValue';
{ .AddConnect }
IS1625.Connect := connect1627;
connect1628 := TconnectNode.Create;
connect1628.NodeField := 'value_changed';
connect1628.ProtoField := 'vc3_changed';
{ .AddConnect }
IS1625.Connect := connect1628;
{ .SetIS }
OrientationInterpolator1624.IS := IS1625;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1624]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1624.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1630 := TOrientationInterpolatorNode.Create;
IS1631 := TISNode.Create;
connect1632 := TconnectNode.Create;
connect1632.NodeField := 'key';
connect1632.ProtoField := 'vc4_key';
{ .AddConnect }
IS1631.Connect := connect1632;
connect1633 := TconnectNode.Create;
connect1633.NodeField := 'keyValue';
connect1633.ProtoField := 'vc4_keyValue';
{ .AddConnect }
IS1631.Connect := connect1633;
connect1634 := TconnectNode.Create;
connect1634.NodeField := 'value_changed';
connect1634.ProtoField := 'vc4_changed';
{ .AddConnect }
IS1631.Connect := connect1634;
{ .SetIS }
OrientationInterpolator1630.IS := IS1631;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1630]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1630.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1636 := TOrientationInterpolatorNode.Create;
IS1637 := TISNode.Create;
connect1638 := TconnectNode.Create;
connect1638.NodeField := 'key';
connect1638.ProtoField := 'vc5_key';
{ .AddConnect }
IS1637.Connect := connect1638;
connect1639 := TconnectNode.Create;
connect1639.NodeField := 'keyValue';
connect1639.ProtoField := 'vc5_keyValue';
{ .AddConnect }
IS1637.Connect := connect1639;
connect1640 := TconnectNode.Create;
connect1640.NodeField := 'value_changed';
connect1640.ProtoField := 'vc5_changed';
{ .AddConnect }
IS1637.Connect := connect1640;
{ .SetIS }
OrientationInterpolator1636.IS := IS1637;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1636]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1636.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1642 := TOrientationInterpolatorNode.Create;
IS1643 := TISNode.Create;
connect1644 := TconnectNode.Create;
connect1644.NodeField := 'key';
connect1644.ProtoField := 'vc6_key';
{ .AddConnect }
IS1643.Connect := connect1644;
connect1645 := TconnectNode.Create;
connect1645.NodeField := 'keyValue';
connect1645.ProtoField := 'vc6_keyValue';
{ .AddConnect }
IS1643.Connect := connect1645;
connect1646 := TconnectNode.Create;
connect1646.NodeField := 'value_changed';
connect1646.ProtoField := 'vc6_changed';
{ .AddConnect }
IS1643.Connect := connect1646;
{ .SetIS }
OrientationInterpolator1642.IS := IS1643;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1642]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1642.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1648 := TOrientationInterpolatorNode.Create;
IS1649 := TISNode.Create;
connect1650 := TconnectNode.Create;
connect1650.NodeField := 'key';
connect1650.ProtoField := 'vc7_key';
{ .AddConnect }
IS1649.Connect := connect1650;
connect1651 := TconnectNode.Create;
connect1651.NodeField := 'keyValue';
connect1651.ProtoField := 'vc7_keyValue';
{ .AddConnect }
IS1649.Connect := connect1651;
connect1652 := TconnectNode.Create;
connect1652.NodeField := 'value_changed';
connect1652.ProtoField := 'vc7_changed';
{ .AddConnect }
IS1649.Connect := connect1652;
{ .SetIS }
OrientationInterpolator1648.IS := IS1649;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1648]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1648.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1654 := TOrientationInterpolatorNode.Create;
IS1655 := TISNode.Create;
connect1656 := TconnectNode.Create;
connect1656.NodeField := 'key';
connect1656.ProtoField := 'vl1_key';
{ .AddConnect }
IS1655.Connect := connect1656;
connect1657 := TconnectNode.Create;
connect1657.NodeField := 'keyValue';
connect1657.ProtoField := 'vl1_keyValue';
{ .AddConnect }
IS1655.Connect := connect1657;
connect1658 := TconnectNode.Create;
connect1658.NodeField := 'value_changed';
connect1658.ProtoField := 'vl1_changed';
{ .AddConnect }
IS1655.Connect := connect1658;
{ .SetIS }
OrientationInterpolator1654.IS := IS1655;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1654]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1654.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1660 := TOrientationInterpolatorNode.Create;
IS1661 := TISNode.Create;
connect1662 := TconnectNode.Create;
connect1662.NodeField := 'key';
connect1662.ProtoField := 'vl2_key';
{ .AddConnect }
IS1661.Connect := connect1662;
connect1663 := TconnectNode.Create;
connect1663.NodeField := 'keyValue';
connect1663.ProtoField := 'vl2_keyValue';
{ .AddConnect }
IS1661.Connect := connect1663;
connect1664 := TconnectNode.Create;
connect1664.NodeField := 'value_changed';
connect1664.ProtoField := 'vl2_changed';
{ .AddConnect }
IS1661.Connect := connect1664;
{ .SetIS }
OrientationInterpolator1660.IS := IS1661;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1660]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1660.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1666 := TOrientationInterpolatorNode.Create;
IS1667 := TISNode.Create;
connect1668 := TconnectNode.Create;
connect1668.NodeField := 'key';
connect1668.ProtoField := 'vl3_key';
{ .AddConnect }
IS1667.Connect := connect1668;
connect1669 := TconnectNode.Create;
connect1669.NodeField := 'keyValue';
connect1669.ProtoField := 'vl3_keyValue';
{ .AddConnect }
IS1667.Connect := connect1669;
connect1670 := TconnectNode.Create;
connect1670.NodeField := 'value_changed';
connect1670.ProtoField := 'vl3_changed';
{ .AddConnect }
IS1667.Connect := connect1670;
{ .SetIS }
OrientationInterpolator1666.IS := IS1667;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1666]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1666.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1672 := TOrientationInterpolatorNode.Create;
IS1673 := TISNode.Create;
connect1674 := TconnectNode.Create;
connect1674.NodeField := 'key';
connect1674.ProtoField := 'vl4_key';
{ .AddConnect }
IS1673.Connect := connect1674;
connect1675 := TconnectNode.Create;
connect1675.NodeField := 'keyValue';
connect1675.ProtoField := 'vl4_keyValue';
{ .AddConnect }
IS1673.Connect := connect1675;
connect1676 := TconnectNode.Create;
connect1676.NodeField := 'value_changed';
connect1676.ProtoField := 'vl4_changed';
{ .AddConnect }
IS1673.Connect := connect1676;
{ .SetIS }
OrientationInterpolator1672.IS := IS1673;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1672]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1672.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1678 := TOrientationInterpolatorNode.Create;
IS1679 := TISNode.Create;
connect1680 := TconnectNode.Create;
connect1680.NodeField := 'key';
connect1680.ProtoField := 'vl5_key';
{ .AddConnect }
IS1679.Connect := connect1680;
connect1681 := TconnectNode.Create;
connect1681.NodeField := 'keyValue';
connect1681.ProtoField := 'vl5_keyValue';
{ .AddConnect }
IS1679.Connect := connect1681;
connect1682 := TconnectNode.Create;
connect1682.NodeField := 'value_changed';
connect1682.ProtoField := 'vl5_changed';
{ .AddConnect }
IS1679.Connect := connect1682;
{ .SetIS }
OrientationInterpolator1678.IS := IS1679;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1678]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1678.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1684 := TOrientationInterpolatorNode.Create;
IS1685 := TISNode.Create;
connect1686 := TconnectNode.Create;
connect1686.NodeField := 'key';
connect1686.ProtoField := 'vt1_key';
{ .AddConnect }
IS1685.Connect := connect1686;
connect1687 := TconnectNode.Create;
connect1687.NodeField := 'keyValue';
connect1687.ProtoField := 'vt1_keyValue';
{ .AddConnect }
IS1685.Connect := connect1687;
connect1688 := TconnectNode.Create;
connect1688.NodeField := 'value_changed';
connect1688.ProtoField := 'vt1_changed';
{ .AddConnect }
IS1685.Connect := connect1688;
{ .SetIS }
OrientationInterpolator1684.IS := IS1685;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1684]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1684.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1690 := TOrientationInterpolatorNode.Create;
IS1691 := TISNode.Create;
connect1692 := TconnectNode.Create;
connect1692.NodeField := 'key';
connect1692.ProtoField := 'vt2_key';
{ .AddConnect }
IS1691.Connect := connect1692;
connect1693 := TconnectNode.Create;
connect1693.NodeField := 'keyValue';
connect1693.ProtoField := 'vt2_keyValue';
{ .AddConnect }
IS1691.Connect := connect1693;
connect1694 := TconnectNode.Create;
connect1694.NodeField := 'value_changed';
connect1694.ProtoField := 'vt2_changed';
{ .AddConnect }
IS1691.Connect := connect1694;
{ .SetIS }
OrientationInterpolator1690.IS := IS1691;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1690]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1690.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1696 := TOrientationInterpolatorNode.Create;
IS1697 := TISNode.Create;
connect1698 := TconnectNode.Create;
connect1698.NodeField := 'key';
connect1698.ProtoField := 'vt3_key';
{ .AddConnect }
IS1697.Connect := connect1698;
connect1699 := TconnectNode.Create;
connect1699.NodeField := 'keyValue';
connect1699.ProtoField := 'vt3_keyValue';
{ .AddConnect }
IS1697.Connect := connect1699;
connect1700 := TconnectNode.Create;
connect1700.NodeField := 'value_changed';
connect1700.ProtoField := 'vt3_changed';
{ .AddConnect }
IS1697.Connect := connect1700;
{ .SetIS }
OrientationInterpolator1696.IS := IS1697;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1696]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1696.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1702 := TOrientationInterpolatorNode.Create;
IS1703 := TISNode.Create;
connect1704 := TconnectNode.Create;
connect1704.NodeField := 'key';
connect1704.ProtoField := 'vt4_key';
{ .AddConnect }
IS1703.Connect := connect1704;
connect1705 := TconnectNode.Create;
connect1705.NodeField := 'keyValue';
connect1705.ProtoField := 'vt4_keyValue';
{ .AddConnect }
IS1703.Connect := connect1705;
connect1706 := TconnectNode.Create;
connect1706.NodeField := 'value_changed';
connect1706.ProtoField := 'vt4_changed';
{ .AddConnect }
IS1703.Connect := connect1706;
{ .SetIS }
OrientationInterpolator1702.IS := IS1703;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1702]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1702.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1708 := TOrientationInterpolatorNode.Create;
IS1709 := TISNode.Create;
connect1710 := TconnectNode.Create;
connect1710.NodeField := 'key';
connect1710.ProtoField := 'vt5_key';
{ .AddConnect }
IS1709.Connect := connect1710;
connect1711 := TconnectNode.Create;
connect1711.NodeField := 'keyValue';
connect1711.ProtoField := 'vt5_keyValue';
{ .AddConnect }
IS1709.Connect := connect1711;
connect1712 := TconnectNode.Create;
connect1712.NodeField := 'value_changed';
connect1712.ProtoField := 'vt5_changed';
{ .AddConnect }
IS1709.Connect := connect1712;
{ .SetIS }
OrientationInterpolator1708.IS := IS1709;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1708]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1708.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1714 := TOrientationInterpolatorNode.Create;
IS1715 := TISNode.Create;
connect1716 := TconnectNode.Create;
connect1716.NodeField := 'key';
connect1716.ProtoField := 'vt6_key';
{ .AddConnect }
IS1715.Connect := connect1716;
connect1717 := TconnectNode.Create;
connect1717.NodeField := 'keyValue';
connect1717.ProtoField := 'vt6_keyValue';
{ .AddConnect }
IS1715.Connect := connect1717;
connect1718 := TconnectNode.Create;
connect1718.NodeField := 'value_changed';
connect1718.ProtoField := 'vt6_changed';
{ .AddConnect }
IS1715.Connect := connect1718;
{ .SetIS }
OrientationInterpolator1714.IS := IS1715;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1714]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1714.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1720 := TOrientationInterpolatorNode.Create;
IS1721 := TISNode.Create;
connect1722 := TconnectNode.Create;
connect1722.NodeField := 'key';
connect1722.ProtoField := 'vt7_key';
{ .AddConnect }
IS1721.Connect := connect1722;
connect1723 := TconnectNode.Create;
connect1723.NodeField := 'keyValue';
connect1723.ProtoField := 'vt7_keyValue';
{ .AddConnect }
IS1721.Connect := connect1723;
connect1724 := TconnectNode.Create;
connect1724.NodeField := 'value_changed';
connect1724.ProtoField := 'vt7_changed';
{ .AddConnect }
IS1721.Connect := connect1724;
{ .SetIS }
OrientationInterpolator1720.IS := IS1721;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1720]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1720.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1726 := TOrientationInterpolatorNode.Create;
IS1727 := TISNode.Create;
connect1728 := TconnectNode.Create;
connect1728.NodeField := 'key';
connect1728.ProtoField := 'vt8_key';
{ .AddConnect }
IS1727.Connect := connect1728;
connect1729 := TconnectNode.Create;
connect1729.NodeField := 'keyValue';
connect1729.ProtoField := 'vt8_keyValue';
{ .AddConnect }
IS1727.Connect := connect1729;
connect1730 := TconnectNode.Create;
connect1730.NodeField := 'value_changed';
connect1730.ProtoField := 'vt8_changed';
{ .AddConnect }
IS1727.Connect := connect1730;
{ .SetIS }
OrientationInterpolator1726.IS := IS1727;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1726]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1726.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1732 := TOrientationInterpolatorNode.Create;
IS1733 := TISNode.Create;
connect1734 := TconnectNode.Create;
connect1734.NodeField := 'key';
connect1734.ProtoField := 'vt9_key';
{ .AddConnect }
IS1733.Connect := connect1734;
connect1735 := TconnectNode.Create;
connect1735.NodeField := 'keyValue';
connect1735.ProtoField := 'vt9_keyValue';
{ .AddConnect }
IS1733.Connect := connect1735;
connect1736 := TconnectNode.Create;
connect1736.NodeField := 'value_changed';
connect1736.ProtoField := 'vt9_changed';
{ .AddConnect }
IS1733.Connect := connect1736;
{ .SetIS }
OrientationInterpolator1732.IS := IS1733;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1732]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1732.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1738 := TOrientationInterpolatorNode.Create;
IS1739 := TISNode.Create;
connect1740 := TconnectNode.Create;
connect1740.NodeField := 'key';
connect1740.ProtoField := 'vt10_key';
{ .AddConnect }
IS1739.Connect := connect1740;
connect1741 := TconnectNode.Create;
connect1741.NodeField := 'keyValue';
connect1741.ProtoField := 'vt10_keyValue';
{ .AddConnect }
IS1739.Connect := connect1741;
connect1742 := TconnectNode.Create;
connect1742.NodeField := 'value_changed';
connect1742.ProtoField := 'vt10_changed';
{ .AddConnect }
IS1739.Connect := connect1742;
{ .SetIS }
OrientationInterpolator1738.IS := IS1739;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1738]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1738.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1744 := TOrientationInterpolatorNode.Create;
IS1745 := TISNode.Create;
connect1746 := TconnectNode.Create;
connect1746.NodeField := 'key';
connect1746.ProtoField := 'vt11_key';
{ .AddConnect }
IS1745.Connect := connect1746;
connect1747 := TconnectNode.Create;
connect1747.NodeField := 'keyValue';
connect1747.ProtoField := 'vt11_keyValue';
{ .AddConnect }
IS1745.Connect := connect1747;
connect1748 := TconnectNode.Create;
connect1748.NodeField := 'value_changed';
connect1748.ProtoField := 'vt11_changed';
{ .AddConnect }
IS1745.Connect := connect1748;
{ .SetIS }
OrientationInterpolator1744.IS := IS1745;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1744]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1744.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1750 := TOrientationInterpolatorNode.Create;
IS1751 := TISNode.Create;
connect1752 := TconnectNode.Create;
connect1752.NodeField := 'key';
connect1752.ProtoField := 'vt12_key';
{ .AddConnect }
IS1751.Connect := connect1752;
connect1753 := TconnectNode.Create;
connect1753.NodeField := 'keyValue';
connect1753.ProtoField := 'vt12_keyValue';
{ .AddConnect }
IS1751.Connect := connect1753;
connect1754 := TconnectNode.Create;
connect1754.NodeField := 'value_changed';
connect1754.ProtoField := 'vt12_changed';
{ .AddConnect }
IS1751.Connect := connect1754;
{ .SetIS }
OrientationInterpolator1750.IS := IS1751;
{ .AddChildren }
ProtoBody603.AddChildren([OrientationInterpolator1750]);
ProtoBody603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1750.EventSet_fraction);
{ .AddX3DRoute }
{ .SetProtoBody }
ProtoDeclare20.ProtoBody := ProtoBody603;
{ .AddChildren }
Group18.AddChildren([ProtoDeclare20]);
ProtoDeclare1756 := TProtoDeclareNode.Create;
ProtoDeclare1756.NameField := 'HAnimBodyBehaviorChooser';
ProtoDeclare1756.Appinfo := 'The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.';
ProtoInterface1757 := TProtoInterfaceNode.Create;
{ TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs }
{ accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints }
{ shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs }
{ TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName }
{ TODO: consider addBody, removeBody, addBehavior, removeBehavior }
{ TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName }
field1758 := TfieldNode.Create;
field1758.NameField := 'supportedLOA';
field1758.AccessType := 'inputOutput';
field1758.Appinfo := 'Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
field1758.Type := 'SFInt32';
field1758.Value := '-1';
{ .AddField }
ProtoInterface1757.Field := field1758;
field1759 := TfieldNode.Create;
field1759.NameField := 'HumanoidArray';
field1759.AccessType := 'initializeOnly';
field1759.Appinfo := '[HAnimHumanoid] nodes only';
field1759.Type := 'MFNode';
{ default NULL }
{ .AddField }
ProtoInterface1757.Field := field1759;
field1760 := TfieldNode.Create;
field1760.NameField := 'whichBody';
field1760.AccessType := 'initializeOnly';
field1760.Appinfo := 'whichBody is selected default is initial member of HumanoidArray';
field1760.Type := 'SFInt32';
field1760.Value := '-1';
{ .AddField }
ProtoInterface1757.Field := field1760;
field1761 := TfieldNode.Create;
field1761.NameField := 'set_whichBody';
field1761.AccessType := 'inputOnly';
field1761.Appinfo := 'whichBody is selected default is none';
field1761.Type := 'SFInt32';
{ .AddField }
ProtoInterface1757.Field := field1761;
field1762 := TfieldNode.Create;
field1762.NameField := 'whichBody_changed';
field1762.AccessType := 'outputOnly';
field1762.Appinfo := 'whichBody is selected default is none';
field1762.Type := 'SFInt32';
{ .AddField }
ProtoInterface1757.Field := field1762;
field1763 := TfieldNode.Create;
field1763.NameField := 'hAnimBehaviorNodes';
field1763.AccessType := 'initializeOnly';
field1763.Appinfo := '[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.';
field1763.Type := 'MFNode';
{ default NULL }
{ .AddField }
ProtoInterface1757.Field := field1763;
field1764 := TfieldNode.Create;
field1764.NameField := 'enabledBehaviorsArray';
field1764.AccessType := 'initializeOnly';
field1764.Appinfo := 'indicate which HAnimBehavior nodes are activated, empty indicates all enabled true';
field1764.Type := 'MFBool';
{ no default values }
{ .AddField }
ProtoInterface1757.Field := field1764;
field1765 := TfieldNode.Create;
field1765.NameField := 'enableBehavior';
field1765.AccessType := 'inputOnly';
field1765.Appinfo := 'enable corresponding behavior identified by index number';
field1765.Type := 'SFInt32';
{ .AddField }
ProtoInterface1757.Field := field1765;
field1766 := TfieldNode.Create;
field1766.NameField := 'disableBehavior';
field1766.AccessType := 'inputOnly';
field1766.Appinfo := 'disable corresponding behavior identified by index number';
field1766.Type := 'SFInt32';
{ .AddField }
ProtoInterface1757.Field := field1766;
field1767 := TfieldNode.Create;
field1767.NameField := 'startTime';
field1767.AccessType := 'inputOutput';
field1767.Type := 'SFTime';
field1767.Value := '0';
{ .AddField }
ProtoInterface1757.Field := field1767;
field1768 := TfieldNode.Create;
field1768.NameField := 'stopTime';
field1768.AccessType := 'inputOutput';
field1768.Type := 'SFTime';
field1768.Value := '0';
{ .AddField }
ProtoInterface1757.Field := field1768;
{ .SetProtoInterface }
ProtoDeclare1756.ProtoInterface := ProtoInterface1757;
ProtoBody1769 := TProtoBodyNode.Create;
Switch1770 := TSwitchNode.Create;
Switch1770.WhichChoice := -1;
IS1771 := TISNode.Create;
connect1772 := TconnectNode.Create;
connect1772.NodeField := 'whichChoice';
connect1772.ProtoField := 'whichBody';
{ .AddConnect }
IS1771.Connect := connect1772;
connect1773 := TconnectNode.Create;
connect1773.NodeField := 'children';
connect1773.ProtoField := 'HumanoidArray';
{ .AddConnect }
IS1771.Connect := connect1773;
{ .SetIS }
Switch1770.IS := IS1771;
{ .AddChildren }
ProtoBody1769.AddChildren([Switch1770]);
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Group1774 := TGroupNode.Create;
IS1775 := TISNode.Create;
connect1776 := TconnectNode.Create;
connect1776.NodeField := 'children';
connect1776.ProtoField := 'hAnimBehaviorNodes';
{ .AddConnect }
IS1775.Connect := connect1776;
{ .SetIS }
Group1774.IS := IS1775;
{ .AddChildren }
ProtoBody1769.AddChildren([Group1774]);
TimeSensor1777 := TTimeSensorNode.Create;
IS1778 := TISNode.Create;
connect1779 := TconnectNode.Create;
connect1779.NodeField := 'startTime';
connect1779.ProtoField := 'startTime';
{ .AddConnect }
IS1778.Connect := connect1779;
connect1780 := TconnectNode.Create;
connect1780.NodeField := 'stopTime';
connect1780.ProtoField := 'stopTime';
{ .AddConnect }
IS1778.Connect := connect1780;
{ .SetIS }
TimeSensor1777.IS := IS1778;
{ .AddChildren }
ProtoBody1769.AddChildren([TimeSensor1777]);
Switch1781 := TSwitchNode.Create;
Switch1781.WhichChoice := -1;
IS1782 := TISNode.Create;
connect1783 := TconnectNode.Create;
connect1783.NodeField := 'whichChoice';
connect1783.ProtoField := 'supportedLOA';
{ .AddConnect }
IS1782.Connect := connect1783;
{ .SetIS }
Switch1781.IS := IS1782;
{ .AddChildren }
ProtoBody1769.AddChildren([Switch1781]);
Script1784 := TScriptNode.Create;
Script1784.DirectOutput := True;
Script1784.SetUrl(['HAnimBehaviorPrototypesScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js']);
field1785 := TfieldNode.Create;
field1785.NameField := 'HumanoidArray';
field1785.AccessType := 'initializeOnly';
field1785.Appinfo := '[HAnimHumanoid] nodes only';
field1785.Type := 'MFNode';
{ .AddField }
Script1784.Field := field1785;
field1786 := TfieldNode.Create;
field1786.NameField := 'whichBody';
field1786.AccessType := 'initializeOnly';
field1786.Appinfo := 'whichBody is selected default is none';
field1786.Type := 'SFInt32';
{ .AddField }
Script1784.Field := field1786;
field1787 := TfieldNode.Create;
field1787.NameField := 'set_whichBody';
field1787.AccessType := 'inputOnly';
field1787.Appinfo := 'whichBody is selected default is none';
field1787.Type := 'SFInt32';
{ .AddField }
Script1784.Field := field1787;
field1788 := TfieldNode.Create;
field1788.NameField := 'whichBody_changed';
field1788.AccessType := 'outputOnly';
field1788.Appinfo := 'whichBody is selected default is none';
field1788.Type := 'SFInt32';
{ .AddField }
Script1784.Field := field1788;
field1789 := TfieldNode.Create;
field1789.NameField := 'hAnimBehaviorNodes';
field1789.AccessType := 'initializeOnly';
field1789.Appinfo := '[HAnimBehavior] nodes only';
field1789.Type := 'MFNode';
{ TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed }
{ .AddField }
Script1784.Field := field1789;
field1790 := TfieldNode.Create;
field1790.NameField := 'enabledBehaviorsArray';
field1790.AccessType := 'initializeOnly';
field1790.Type := 'MFBool';
{ .AddField }
Script1784.Field := field1790;
field1791 := TfieldNode.Create;
field1791.NameField := 'enableBehavior';
field1791.AccessType := 'inputOnly';
field1791.Appinfo := 'enable corresponding behavior';
field1791.Type := 'SFInt32';
{ .AddField }
Script1784.Field := field1791;
field1792 := TfieldNode.Create;
field1792.NameField := 'disableBehavior';
field1792.AccessType := 'inputOnly';
field1792.Appinfo := 'enable corresponding behavior';
field1792.Type := 'SFInt32';
{ .AddField }
Script1784.Field := field1792;
field1793 := TfieldNode.Create;
field1793.NameField := 'timeSensorNode';
field1793.AccessType := 'initializeOnly';
field1793.Type := 'SFNode';
TimeSensor1794 := TTimeSensorNode.Create;
TimeSensor1794 := TimeSensor1777;
{ .AddChildren }
field1793.AddChildren([TimeSensor1794]);
{ .AddField }
Script1784.Field := field1793;
field1795 := TfieldNode.Create;
field1795.NameField := 'previousBodyIndex';
field1795.AccessType := 'initializeOnly';
field1795.Appinfo := 'remember prior body index to avoid unnecessary ROUTE teardown and creation';
field1795.Type := 'SFInt32';
field1795.Value := '-1';
{ .AddField }
Script1784.Field := field1795;
field1796 := TfieldNode.Create;
field1796.NameField := 'traceEnabled';
field1796.AccessType := 'initializeOnly';
field1796.Type := 'SFBool';
field1796.Value := 'true';
{ .AddField }
Script1784.Field := field1796;
IS1797 := TISNode.Create;
connect1798 := TconnectNode.Create;
connect1798.NodeField := 'HumanoidArray';
connect1798.ProtoField := 'HumanoidArray';
{ .AddConnect }
IS1797.Connect := connect1798;
connect1799 := TconnectNode.Create;
connect1799.NodeField := 'whichBody';
connect1799.ProtoField := 'whichBody';
{ .AddConnect }
IS1797.Connect := connect1799;
connect1800 := TconnectNode.Create;
connect1800.NodeField := 'set_whichBody';
connect1800.ProtoField := 'set_whichBody';
{ .AddConnect }
IS1797.Connect := connect1800;
connect1801 := TconnectNode.Create;
connect1801.NodeField := 'whichBody_changed';
connect1801.ProtoField := 'whichBody_changed';
{ .AddConnect }
IS1797.Connect := connect1801;
connect1802 := TconnectNode.Create;
connect1802.NodeField := 'hAnimBehaviorNodes';
connect1802.ProtoField := 'hAnimBehaviorNodes';
{ .AddConnect }
IS1797.Connect := connect1802;
connect1803 := TconnectNode.Create;
connect1803.NodeField := 'enabledBehaviorsArray';
connect1803.ProtoField := 'enabledBehaviorsArray';
{ .AddConnect }
IS1797.Connect := connect1803;
connect1804 := TconnectNode.Create;
connect1804.NodeField := 'enableBehavior';
connect1804.ProtoField := 'enableBehavior';
{ .AddConnect }
IS1797.Connect := connect1804;
connect1805 := TconnectNode.Create;
connect1805.NodeField := 'disableBehavior';
connect1805.ProtoField := 'disableBehavior';
{ .AddConnect }
IS1797.Connect := connect1805;
{ .SetIS }
Script1784.IS := IS1797;
{ .AddChildren }
ProtoBody1769.AddChildren([Script1784]);
{ .SetProtoBody }
ProtoDeclare1756.ProtoBody := ProtoBody1769;
{ .AddChildren }
Group18.AddChildren([ProtoDeclare1756]);
{ TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype. }
ProtoInstance1806 := TProtoInstanceNode.Create;
ProtoInstance1806.NameField := 'HAnimBehavior';
{ only one PositionInterpolator key/keyValue definition for entire humanoid - optional }
{ must have paired overrides of each key/keyValue array being defined }
fieldValue1807 := TfieldValueNode.Create;
fieldValue1807.NameField := 'HumanoidRoot_translation_key';
fieldValue1807.Value := '0 0.25 0.5 0.75 1';
{ .AddFieldValue }
ProtoInstance1806.FieldValue := fieldValue1807;
fieldValue1808 := TfieldValueNode.Create;
fieldValue1808.NameField := 'HumanoidRoot_translation_keyValue';
fieldValue1808.Value := '0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50';
{ .AddFieldValue }
ProtoInstance1806.FieldValue := fieldValue1808;
fieldValue1809 := TfieldValueNode.Create;
fieldValue1809.NameField := 'r_ankle_key';
fieldValue1809.Value := '0 0.5 1';
{ .AddFieldValue }
ProtoInstance1806.FieldValue := fieldValue1809;
fieldValue1810 := TfieldValueNode.Create;
fieldValue1810.NameField := 'r_ankle_keyValue';
fieldValue1810.Value := '0 1 0 0 0 1 0 0.2 0 1 0 0.4';
{ .AddFieldValue }
ProtoInstance1806.FieldValue := fieldValue1810;
{ .AddChildren }
Group18.AddChildren([ProtoInstance1806]);
ProtoInstance1811 := TProtoInstanceNode.Create;
ProtoInstance1811.NameField := 'HAnimBodyBehaviorChooser';
fieldValue1812 := TfieldValueNode.Create;
fieldValue1812.NameField := 'HumanoidArray';
HAnimHumanoid1813 := THAnimHumanoidNode.Create;
HAnimHumanoid1813.NameField := 'DiamondManLOA-1';
HAnimHumanoid1813.Version := '2.0';
{ .AddChildren }
fieldValue1812.AddChildren([HAnimHumanoid1813]);
{ .AddFieldValue }
ProtoInstance1811.FieldValue := fieldValue1812;
fieldValue1814 := TfieldValueNode.Create;
fieldValue1814.NameField := 'whichBody';
fieldValue1814.Value := '0';
{ .AddFieldValue }
ProtoInstance1811.FieldValue := fieldValue1814;
fieldValue1815 := TfieldValueNode.Create;
fieldValue1815.NameField := 'hAnimBehaviorNodes';
ProtoInstance1816 := TProtoInstanceNode.Create;
ProtoInstance1816 := ProtoInstance1806;
{ .AddChildren }
fieldValue1815.AddChildren([ProtoInstance1816]);
{ .AddFieldValue }
ProtoInstance1811.FieldValue := fieldValue1815;
fieldValue1817 := TfieldValueNode.Create;
fieldValue1817.NameField := 'enabledBehaviorsArray';
fieldValue1817.Value := 'true';
{ .AddFieldValue }
ProtoInstance1811.FieldValue := fieldValue1817;
{ .AddChildren }
Group18.AddChildren([ProtoInstance1811]);
{ .AddGroup }
X3D0.AddChildren([Group18]);
Result := X3D0;
end;
