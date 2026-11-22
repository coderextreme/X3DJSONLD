unit HAnimBehaviorPrototypes;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHAnimBehaviorPrototypes: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
SFInt3222: TSFInt32;
SFBool23: TSFBool;
SFTime24: TSFTime;
SFBool25: TSFBool;
SFTime26: TSFTime;
SFTime27: TSFTime;
SFTime28: TSFTime;
SFTime29: TSFTime;
SFTime30: TSFTime;
SFBool31: TSFBool;
SFBool32: TSFBool;
SFBool33: TSFBool;
SFBool34: TSFBool;
SFFloat35: TSFFloat;
MFFloat36: TMFFloat;
MFVec3f37: TMFVec3f;
SFVec3f38: TSFVec3f;
MFFloat39: TMFFloat;
MFRotation40: TMFRotation;
SFRotation41: TSFRotation;
MFFloat42: TMFFloat;
MFRotation43: TMFRotation;
SFRotation44: TSFRotation;
MFFloat45: TMFFloat;
MFRotation46: TMFRotation;
SFRotation47: TSFRotation;
MFFloat48: TMFFloat;
MFRotation49: TMFRotation;
SFRotation50: TSFRotation;
MFFloat51: TMFFloat;
MFRotation52: TMFRotation;
SFRotation53: TSFRotation;
MFFloat54: TMFFloat;
MFRotation55: TMFRotation;
SFRotation56: TSFRotation;
MFFloat57: TMFFloat;
MFRotation58: TMFRotation;
SFRotation59: TSFRotation;
MFFloat60: TMFFloat;
MFRotation61: TMFRotation;
SFRotation62: TSFRotation;
MFFloat63: TMFFloat;
MFRotation64: TMFRotation;
SFRotation65: TSFRotation;
MFFloat66: TMFFloat;
MFRotation67: TMFRotation;
SFRotation68: TSFRotation;
MFFloat69: TMFFloat;
MFRotation70: TMFRotation;
SFRotation71: TSFRotation;
MFFloat72: TMFFloat;
MFRotation73: TMFRotation;
SFRotation74: TSFRotation;
MFFloat75: TMFFloat;
MFRotation76: TMFRotation;
SFRotation77: TSFRotation;
MFFloat78: TMFFloat;
MFRotation79: TMFRotation;
SFRotation80: TSFRotation;
MFFloat81: TMFFloat;
MFRotation82: TMFRotation;
SFRotation83: TSFRotation;
MFFloat84: TMFFloat;
MFRotation85: TMFRotation;
SFRotation86: TSFRotation;
MFFloat87: TMFFloat;
MFRotation88: TMFRotation;
SFRotation89: TSFRotation;
MFFloat90: TMFFloat;
MFRotation91: TMFRotation;
SFRotation92: TSFRotation;
MFFloat93: TMFFloat;
MFRotation94: TMFRotation;
SFRotation95: TSFRotation;
MFFloat96: TMFFloat;
MFRotation97: TMFRotation;
SFRotation98: TSFRotation;
MFFloat99: TMFFloat;
MFRotation100: TMFRotation;
SFRotation101: TSFRotation;
MFFloat102: TMFFloat;
MFRotation103: TMFRotation;
SFRotation104: TSFRotation;
MFFloat105: TMFFloat;
MFRotation106: TMFRotation;
SFRotation107: TSFRotation;
MFFloat108: TMFFloat;
MFRotation109: TMFRotation;
SFRotation110: TSFRotation;
MFFloat111: TMFFloat;
MFRotation112: TMFRotation;
SFRotation113: TSFRotation;
MFFloat114: TMFFloat;
MFRotation115: TMFRotation;
SFRotation116: TSFRotation;
MFFloat117: TMFFloat;
MFRotation118: TMFRotation;
SFRotation119: TSFRotation;
MFFloat120: TMFFloat;
MFRotation121: TMFRotation;
SFRotation122: TSFRotation;
MFFloat123: TMFFloat;
MFRotation124: TMFRotation;
SFRotation125: TSFRotation;
MFFloat126: TMFFloat;
MFRotation127: TMFRotation;
SFRotation128: TSFRotation;
MFFloat129: TMFFloat;
MFRotation130: TMFRotation;
SFRotation131: TSFRotation;
MFFloat132: TMFFloat;
MFRotation133: TMFRotation;
SFRotation134: TSFRotation;
MFFloat135: TMFFloat;
MFRotation136: TMFRotation;
SFRotation137: TSFRotation;
MFFloat138: TMFFloat;
MFRotation139: TMFRotation;
SFRotation140: TSFRotation;
MFFloat141: TMFFloat;
MFRotation142: TMFRotation;
SFRotation143: TSFRotation;
MFFloat144: TMFFloat;
MFRotation145: TMFRotation;
SFRotation146: TSFRotation;
MFFloat147: TMFFloat;
MFRotation148: TMFRotation;
SFRotation149: TSFRotation;
MFFloat150: TMFFloat;
MFRotation151: TMFRotation;
SFRotation152: TSFRotation;
MFFloat153: TMFFloat;
MFRotation154: TMFRotation;
SFRotation155: TSFRotation;
MFFloat156: TMFFloat;
MFRotation157: TMFRotation;
SFRotation158: TSFRotation;
MFFloat159: TMFFloat;
MFRotation160: TMFRotation;
SFRotation161: TSFRotation;
MFFloat162: TMFFloat;
MFRotation163: TMFRotation;
SFRotation164: TSFRotation;
MFFloat165: TMFFloat;
MFRotation166: TMFRotation;
SFRotation167: TSFRotation;
MFFloat168: TMFFloat;
MFRotation169: TMFRotation;
SFRotation170: TSFRotation;
MFFloat171: TMFFloat;
MFRotation172: TMFRotation;
SFRotation173: TSFRotation;
MFFloat174: TMFFloat;
MFRotation175: TMFRotation;
SFRotation176: TSFRotation;
MFFloat177: TMFFloat;
MFRotation178: TMFRotation;
SFRotation179: TSFRotation;
MFFloat180: TMFFloat;
MFRotation181: TMFRotation;
SFRotation182: TSFRotation;
MFFloat183: TMFFloat;
MFRotation184: TMFRotation;
SFRotation185: TSFRotation;
MFFloat186: TMFFloat;
MFRotation187: TMFRotation;
SFRotation188: TSFRotation;
MFFloat189: TMFFloat;
MFRotation190: TMFRotation;
SFRotation191: TSFRotation;
MFFloat192: TMFFloat;
MFRotation193: TMFRotation;
SFRotation194: TSFRotation;
MFFloat195: TMFFloat;
MFRotation196: TMFRotation;
SFRotation197: TSFRotation;
MFFloat198: TMFFloat;
MFRotation199: TMFRotation;
SFRotation200: TSFRotation;
MFFloat201: TMFFloat;
MFRotation202: TMFRotation;
SFRotation203: TSFRotation;
MFFloat204: TMFFloat;
MFRotation205: TMFRotation;
SFRotation206: TSFRotation;
MFFloat207: TMFFloat;
MFRotation208: TMFRotation;
SFRotation209: TSFRotation;
MFFloat210: TMFFloat;
MFRotation211: TMFRotation;
SFRotation212: TSFRotation;
MFFloat213: TMFFloat;
MFRotation214: TMFRotation;
SFRotation215: TSFRotation;
MFFloat216: TMFFloat;
MFRotation217: TMFRotation;
SFRotation218: TSFRotation;
MFFloat219: TMFFloat;
MFRotation220: TMFRotation;
SFRotation221: TSFRotation;
MFFloat222: TMFFloat;
MFRotation223: TMFRotation;
SFRotation224: TSFRotation;
MFFloat225: TMFFloat;
MFRotation226: TMFRotation;
SFRotation227: TSFRotation;
MFFloat228: TMFFloat;
MFRotation229: TMFRotation;
SFRotation230: TSFRotation;
MFFloat231: TMFFloat;
MFRotation232: TMFRotation;
SFRotation233: TSFRotation;
MFFloat234: TMFFloat;
MFRotation235: TMFRotation;
SFRotation236: TSFRotation;
MFFloat237: TMFFloat;
MFRotation238: TMFRotation;
SFRotation239: TSFRotation;
MFFloat240: TMFFloat;
MFRotation241: TMFRotation;
SFRotation242: TSFRotation;
MFFloat243: TMFFloat;
MFRotation244: TMFRotation;
SFRotation245: TSFRotation;
MFFloat246: TMFFloat;
MFRotation247: TMFRotation;
SFRotation248: TSFRotation;
MFFloat249: TMFFloat;
MFRotation250: TMFRotation;
SFRotation251: TSFRotation;
MFFloat252: TMFFloat;
MFRotation253: TMFRotation;
SFRotation254: TSFRotation;
MFFloat255: TMFFloat;
MFRotation256: TMFRotation;
SFRotation257: TSFRotation;
MFFloat258: TMFFloat;
MFRotation259: TMFRotation;
SFRotation260: TSFRotation;
MFFloat261: TMFFloat;
MFRotation262: TMFRotation;
SFRotation263: TSFRotation;
MFFloat264: TMFFloat;
MFRotation265: TMFRotation;
SFRotation266: TSFRotation;
MFFloat267: TMFFloat;
MFRotation268: TMFRotation;
SFRotation269: TSFRotation;
MFFloat270: TMFFloat;
MFRotation271: TMFRotation;
SFRotation272: TSFRotation;
MFFloat273: TMFFloat;
MFRotation274: TMFRotation;
SFRotation275: TSFRotation;
MFFloat276: TMFFloat;
MFRotation277: TMFRotation;
SFRotation278: TSFRotation;
MFFloat279: TMFFloat;
MFRotation280: TMFRotation;
SFRotation281: TSFRotation;
MFFloat282: TMFFloat;
MFRotation283: TMFRotation;
SFRotation284: TSFRotation;
MFFloat285: TMFFloat;
MFRotation286: TMFRotation;
SFRotation287: TSFRotation;
MFFloat288: TMFFloat;
MFRotation289: TMFRotation;
SFRotation290: TSFRotation;
MFFloat291: TMFFloat;
MFRotation292: TMFRotation;
SFRotation293: TSFRotation;
MFFloat294: TMFFloat;
MFRotation295: TMFRotation;
SFRotation296: TSFRotation;
MFFloat297: TMFFloat;
MFRotation298: TMFRotation;
SFRotation299: TSFRotation;
MFFloat300: TMFFloat;
MFRotation301: TMFRotation;
SFRotation302: TSFRotation;
MFFloat303: TMFFloat;
MFRotation304: TMFRotation;
SFRotation305: TSFRotation;
MFFloat306: TMFFloat;
MFRotation307: TMFRotation;
SFRotation308: TSFRotation;
MFFloat309: TMFFloat;
MFRotation310: TMFRotation;
SFRotation311: TSFRotation;
MFFloat312: TMFFloat;
MFRotation313: TMFRotation;
SFRotation314: TSFRotation;
MFFloat315: TMFFloat;
MFRotation316: TMFRotation;
SFRotation317: TSFRotation;
MFFloat318: TMFFloat;
MFRotation319: TMFRotation;
SFRotation320: TSFRotation;
MFFloat321: TMFFloat;
MFRotation322: TMFRotation;
SFRotation323: TSFRotation;
MFFloat324: TMFFloat;
MFRotation325: TMFRotation;
SFRotation326: TSFRotation;
MFFloat327: TMFFloat;
MFRotation328: TMFRotation;
SFRotation329: TSFRotation;
MFFloat330: TMFFloat;
MFRotation331: TMFRotation;
SFRotation332: TSFRotation;
MFFloat333: TMFFloat;
MFRotation334: TMFRotation;
SFRotation335: TSFRotation;
MFFloat336: TMFFloat;
MFRotation337: TMFRotation;
SFRotation338: TSFRotation;
MFFloat339: TMFFloat;
MFRotation340: TMFRotation;
SFRotation341: TSFRotation;
MFFloat342: TMFFloat;
MFRotation343: TMFRotation;
SFRotation344: TSFRotation;
MFFloat345: TMFFloat;
MFRotation346: TMFRotation;
SFRotation347: TSFRotation;
MFFloat348: TMFFloat;
MFRotation349: TMFRotation;
SFRotation350: TSFRotation;
MFFloat351: TMFFloat;
MFRotation352: TMFRotation;
SFRotation353: TSFRotation;
MFFloat354: TMFFloat;
MFRotation355: TMFRotation;
SFRotation356: TSFRotation;
MFFloat357: TMFFloat;
MFRotation358: TMFRotation;
SFRotation359: TSFRotation;
MFFloat360: TMFFloat;
MFRotation361: TMFRotation;
SFRotation362: TSFRotation;
MFFloat363: TMFFloat;
MFRotation364: TMFRotation;
SFRotation365: TSFRotation;
MFFloat366: TMFFloat;
MFRotation367: TMFRotation;
SFRotation368: TSFRotation;
MFFloat369: TMFFloat;
MFRotation370: TMFRotation;
SFRotation371: TSFRotation;
MFFloat372: TMFFloat;
MFRotation373: TMFRotation;
SFRotation374: TSFRotation;
MFFloat375: TMFFloat;
MFRotation376: TMFRotation;
SFRotation377: TSFRotation;
MFFloat378: TMFFloat;
MFRotation379: TMFRotation;
SFRotation380: TSFRotation;
MFFloat381: TMFFloat;
MFRotation382: TMFRotation;
SFRotation383: TSFRotation;
MFFloat384: TMFFloat;
MFRotation385: TMFRotation;
SFRotation386: TSFRotation;
MFFloat387: TMFFloat;
MFRotation388: TMFRotation;
SFRotation389: TSFRotation;
MFFloat390: TMFFloat;
MFRotation391: TMFRotation;
SFRotation392: TSFRotation;
MFFloat393: TMFFloat;
MFRotation394: TMFRotation;
SFRotation395: TSFRotation;
MFFloat396: TMFFloat;
MFRotation397: TMFRotation;
SFRotation398: TSFRotation;
MFFloat399: TMFFloat;
MFRotation400: TMFRotation;
SFRotation401: TSFRotation;
MFFloat402: TMFFloat;
MFRotation403: TMFRotation;
SFRotation404: TSFRotation;
MFFloat405: TMFFloat;
MFRotation406: TMFRotation;
SFRotation407: TSFRotation;
MFFloat408: TMFFloat;
MFRotation409: TMFRotation;
SFRotation410: TSFRotation;
MFFloat411: TMFFloat;
MFRotation412: TMFRotation;
SFRotation413: TSFRotation;
MFFloat414: TMFFloat;
MFRotation415: TMFRotation;
SFRotation416: TSFRotation;
MFFloat417: TMFFloat;
MFRotation418: TMFRotation;
SFRotation419: TSFRotation;
MFFloat420: TMFFloat;
MFRotation421: TMFRotation;
SFRotation422: TSFRotation;
MFFloat423: TMFFloat;
MFRotation424: TMFRotation;
SFRotation425: TSFRotation;
MFFloat426: TMFFloat;
MFRotation427: TMFRotation;
SFRotation428: TSFRotation;
MFFloat429: TMFFloat;
MFRotation430: TMFRotation;
SFRotation431: TSFRotation;
MFFloat432: TMFFloat;
MFRotation433: TMFRotation;
SFRotation434: TSFRotation;
MFFloat435: TMFFloat;
MFRotation436: TMFRotation;
SFRotation437: TSFRotation;
MFFloat438: TMFFloat;
MFRotation439: TMFRotation;
SFRotation440: TSFRotation;
MFFloat441: TMFFloat;
MFRotation442: TMFRotation;
SFRotation443: TSFRotation;
MFFloat444: TMFFloat;
MFRotation445: TMFRotation;
SFRotation446: TSFRotation;
MFFloat447: TMFFloat;
MFRotation448: TMFRotation;
SFRotation449: TSFRotation;
MFFloat450: TMFFloat;
MFRotation451: TMFRotation;
SFRotation452: TSFRotation;
MFFloat453: TMFFloat;
MFRotation454: TMFRotation;
SFRotation455: TSFRotation;
MFFloat456: TMFFloat;
MFRotation457: TMFRotation;
SFRotation458: TSFRotation;
MFFloat459: TMFFloat;
MFRotation460: TMFRotation;
SFRotation461: TSFRotation;
MFFloat462: TMFFloat;
MFRotation463: TMFRotation;
SFRotation464: TSFRotation;
MFFloat465: TMFFloat;
MFRotation466: TMFRotation;
SFRotation467: TSFRotation;
MFFloat468: TMFFloat;
MFRotation469: TMFRotation;
SFRotation470: TSFRotation;
MFFloat471: TMFFloat;
MFRotation472: TMFRotation;
SFRotation473: TSFRotation;
MFFloat474: TMFFloat;
MFRotation475: TMFRotation;
SFRotation476: TSFRotation;
MFFloat477: TMFFloat;
MFRotation478: TMFRotation;
SFRotation479: TSFRotation;
MFFloat480: TMFFloat;
MFRotation481: TMFRotation;
SFRotation482: TSFRotation;
MFFloat483: TMFFloat;
MFRotation484: TMFRotation;
SFRotation485: TSFRotation;
MFFloat486: TMFFloat;
MFRotation487: TMFRotation;
SFRotation488: TSFRotation;
MFFloat489: TMFFloat;
MFRotation490: TMFRotation;
SFRotation491: TSFRotation;
MFFloat492: TMFFloat;
MFRotation493: TMFRotation;
SFRotation494: TSFRotation;
MFFloat495: TMFFloat;
MFRotation496: TMFRotation;
SFRotation497: TSFRotation;
MFFloat498: TMFFloat;
MFRotation499: TMFRotation;
SFRotation500: TSFRotation;
MFFloat501: TMFFloat;
MFRotation502: TMFRotation;
SFRotation503: TSFRotation;
MFFloat504: TMFFloat;
MFRotation505: TMFRotation;
SFRotation506: TSFRotation;
MFFloat507: TMFFloat;
MFRotation508: TMFRotation;
SFRotation509: TSFRotation;
MFFloat510: TMFFloat;
MFRotation511: TMFRotation;
SFRotation512: TSFRotation;
MFFloat513: TMFFloat;
MFRotation514: TMFRotation;
SFRotation515: TSFRotation;
MFFloat516: TMFFloat;
MFRotation517: TMFRotation;
SFRotation518: TSFRotation;
MFFloat519: TMFFloat;
MFRotation520: TMFRotation;
SFRotation521: TSFRotation;
MFFloat522: TMFFloat;
MFRotation523: TMFRotation;
SFRotation524: TSFRotation;
MFFloat525: TMFFloat;
MFRotation526: TMFRotation;
SFRotation527: TSFRotation;
MFFloat528: TMFFloat;
MFRotation529: TMFRotation;
SFRotation530: TSFRotation;
MFFloat531: TMFFloat;
MFRotation532: TMFRotation;
SFRotation533: TSFRotation;
MFFloat534: TMFFloat;
MFRotation535: TMFRotation;
SFRotation536: TSFRotation;
MFFloat537: TMFFloat;
MFRotation538: TMFRotation;
SFRotation539: TSFRotation;
MFFloat540: TMFFloat;
MFRotation541: TMFRotation;
SFRotation542: TSFRotation;
MFFloat543: TMFFloat;
MFRotation544: TMFRotation;
SFRotation545: TSFRotation;
MFFloat546: TMFFloat;
MFRotation547: TMFRotation;
SFRotation548: TSFRotation;
MFFloat549: TMFFloat;
MFRotation550: TMFRotation;
SFRotation551: TSFRotation;
MFFloat552: TMFFloat;
MFRotation553: TMFRotation;
SFRotation554: TSFRotation;
MFFloat555: TMFFloat;
MFRotation556: TMFRotation;
SFRotation557: TSFRotation;
MFFloat558: TMFFloat;
MFRotation559: TMFRotation;
SFRotation560: TSFRotation;
MFFloat561: TMFFloat;
MFRotation562: TMFRotation;
SFRotation563: TSFRotation;
MFFloat564: TMFFloat;
MFRotation565: TMFRotation;
SFRotation566: TSFRotation;
MFFloat567: TMFFloat;
MFRotation568: TMFRotation;
SFRotation569: TSFRotation;
MFFloat570: TMFFloat;
MFRotation571: TMFRotation;
SFRotation572: TSFRotation;
MFFloat573: TMFFloat;
MFRotation574: TMFRotation;
SFRotation575: TSFRotation;
MFFloat576: TMFFloat;
MFRotation577: TMFRotation;
SFRotation578: TSFRotation;
MFFloat579: TMFFloat;
MFRotation580: TMFRotation;
SFRotation581: TSFRotation;
MFFloat582: TMFFloat;
MFRotation583: TMFRotation;
SFRotation584: TSFRotation;
MFFloat585: TMFFloat;
MFRotation586: TMFRotation;
SFRotation587: TSFRotation;
MFFloat588: TMFFloat;
MFRotation589: TMFRotation;
SFRotation590: TSFRotation;
MFFloat591: TMFFloat;
MFRotation592: TMFRotation;
SFRotation593: TSFRotation;
MFFloat594: TMFFloat;
MFRotation595: TMFRotation;
SFRotation596: TSFRotation;
MFFloat597: TMFFloat;
MFRotation598: TMFRotation;
SFRotation599: TSFRotation;
MFFloat600: TMFFloat;
MFRotation601: TMFRotation;
SFRotation602: TSFRotation;
X3DPrototype603: TX3DPrototype;
TimeSensor604: TTimeSensorNode;
IS605: TIS;
connect606: Tconnect;
connect607: Tconnect;
connect608: Tconnect;
connect609: Tconnect;
connect610: Tconnect;
connect611: Tconnect;
connect612: Tconnect;
connect613: Tconnect;
connect614: Tconnect;
connect615: Tconnect;
connect616: Tconnect;
connect617: Tconnect;
connect618: Tconnect;
Switch619: TSwitchNode;
IS620: TIS;
connect621: Tconnect;
PositionInterpolator622: TPositionInterpolatorNode;
IS623: TIS;
connect624: Tconnect;
connect625: Tconnect;
connect626: Tconnect;
OrientationInterpolator628: TOrientationInterpolatorNode;
IS629: TIS;
connect630: Tconnect;
connect631: Tconnect;
connect632: Tconnect;
OrientationInterpolator634: TOrientationInterpolatorNode;
IS635: TIS;
connect636: Tconnect;
connect637: Tconnect;
connect638: Tconnect;
OrientationInterpolator640: TOrientationInterpolatorNode;
IS641: TIS;
connect642: Tconnect;
connect643: Tconnect;
connect644: Tconnect;
OrientationInterpolator646: TOrientationInterpolatorNode;
IS647: TIS;
connect648: Tconnect;
connect649: Tconnect;
connect650: Tconnect;
OrientationInterpolator652: TOrientationInterpolatorNode;
IS653: TIS;
connect654: Tconnect;
connect655: Tconnect;
connect656: Tconnect;
OrientationInterpolator658: TOrientationInterpolatorNode;
IS659: TIS;
connect660: Tconnect;
connect661: Tconnect;
connect662: Tconnect;
OrientationInterpolator664: TOrientationInterpolatorNode;
IS665: TIS;
connect666: Tconnect;
connect667: Tconnect;
connect668: Tconnect;
OrientationInterpolator670: TOrientationInterpolatorNode;
IS671: TIS;
connect672: Tconnect;
connect673: Tconnect;
connect674: Tconnect;
OrientationInterpolator676: TOrientationInterpolatorNode;
IS677: TIS;
connect678: Tconnect;
connect679: Tconnect;
connect680: Tconnect;
OrientationInterpolator682: TOrientationInterpolatorNode;
IS683: TIS;
connect684: Tconnect;
connect685: Tconnect;
connect686: Tconnect;
OrientationInterpolator688: TOrientationInterpolatorNode;
IS689: TIS;
connect690: Tconnect;
connect691: Tconnect;
connect692: Tconnect;
OrientationInterpolator694: TOrientationInterpolatorNode;
IS695: TIS;
connect696: Tconnect;
connect697: Tconnect;
connect698: Tconnect;
OrientationInterpolator700: TOrientationInterpolatorNode;
IS701: TIS;
connect702: Tconnect;
connect703: Tconnect;
connect704: Tconnect;
OrientationInterpolator706: TOrientationInterpolatorNode;
IS707: TIS;
connect708: Tconnect;
connect709: Tconnect;
connect710: Tconnect;
OrientationInterpolator712: TOrientationInterpolatorNode;
IS713: TIS;
connect714: Tconnect;
connect715: Tconnect;
connect716: Tconnect;
OrientationInterpolator718: TOrientationInterpolatorNode;
IS719: TIS;
connect720: Tconnect;
connect721: Tconnect;
connect722: Tconnect;
OrientationInterpolator724: TOrientationInterpolatorNode;
IS725: TIS;
connect726: Tconnect;
connect727: Tconnect;
connect728: Tconnect;
OrientationInterpolator730: TOrientationInterpolatorNode;
IS731: TIS;
connect732: Tconnect;
connect733: Tconnect;
connect734: Tconnect;
OrientationInterpolator736: TOrientationInterpolatorNode;
IS737: TIS;
connect738: Tconnect;
connect739: Tconnect;
connect740: Tconnect;
OrientationInterpolator742: TOrientationInterpolatorNode;
IS743: TIS;
connect744: Tconnect;
connect745: Tconnect;
connect746: Tconnect;
OrientationInterpolator748: TOrientationInterpolatorNode;
IS749: TIS;
connect750: Tconnect;
connect751: Tconnect;
connect752: Tconnect;
OrientationInterpolator754: TOrientationInterpolatorNode;
IS755: TIS;
connect756: Tconnect;
connect757: Tconnect;
connect758: Tconnect;
OrientationInterpolator760: TOrientationInterpolatorNode;
IS761: TIS;
connect762: Tconnect;
connect763: Tconnect;
connect764: Tconnect;
OrientationInterpolator766: TOrientationInterpolatorNode;
IS767: TIS;
connect768: Tconnect;
connect769: Tconnect;
connect770: Tconnect;
OrientationInterpolator772: TOrientationInterpolatorNode;
IS773: TIS;
connect774: Tconnect;
connect775: Tconnect;
connect776: Tconnect;
OrientationInterpolator778: TOrientationInterpolatorNode;
IS779: TIS;
connect780: Tconnect;
connect781: Tconnect;
connect782: Tconnect;
OrientationInterpolator784: TOrientationInterpolatorNode;
IS785: TIS;
connect786: Tconnect;
connect787: Tconnect;
connect788: Tconnect;
OrientationInterpolator790: TOrientationInterpolatorNode;
IS791: TIS;
connect792: Tconnect;
connect793: Tconnect;
connect794: Tconnect;
OrientationInterpolator796: TOrientationInterpolatorNode;
IS797: TIS;
connect798: Tconnect;
connect799: Tconnect;
connect800: Tconnect;
OrientationInterpolator802: TOrientationInterpolatorNode;
IS803: TIS;
connect804: Tconnect;
connect805: Tconnect;
connect806: Tconnect;
OrientationInterpolator808: TOrientationInterpolatorNode;
IS809: TIS;
connect810: Tconnect;
connect811: Tconnect;
connect812: Tconnect;
OrientationInterpolator814: TOrientationInterpolatorNode;
IS815: TIS;
connect816: Tconnect;
connect817: Tconnect;
connect818: Tconnect;
OrientationInterpolator820: TOrientationInterpolatorNode;
IS821: TIS;
connect822: Tconnect;
connect823: Tconnect;
connect824: Tconnect;
OrientationInterpolator826: TOrientationInterpolatorNode;
IS827: TIS;
connect828: Tconnect;
connect829: Tconnect;
connect830: Tconnect;
OrientationInterpolator832: TOrientationInterpolatorNode;
IS833: TIS;
connect834: Tconnect;
connect835: Tconnect;
connect836: Tconnect;
OrientationInterpolator838: TOrientationInterpolatorNode;
IS839: TIS;
connect840: Tconnect;
connect841: Tconnect;
connect842: Tconnect;
OrientationInterpolator844: TOrientationInterpolatorNode;
IS845: TIS;
connect846: Tconnect;
connect847: Tconnect;
connect848: Tconnect;
OrientationInterpolator850: TOrientationInterpolatorNode;
IS851: TIS;
connect852: Tconnect;
connect853: Tconnect;
connect854: Tconnect;
OrientationInterpolator856: TOrientationInterpolatorNode;
IS857: TIS;
connect858: Tconnect;
connect859: Tconnect;
connect860: Tconnect;
OrientationInterpolator862: TOrientationInterpolatorNode;
IS863: TIS;
connect864: Tconnect;
connect865: Tconnect;
connect866: Tconnect;
OrientationInterpolator868: TOrientationInterpolatorNode;
IS869: TIS;
connect870: Tconnect;
connect871: Tconnect;
connect872: Tconnect;
OrientationInterpolator874: TOrientationInterpolatorNode;
IS875: TIS;
connect876: Tconnect;
connect877: Tconnect;
connect878: Tconnect;
OrientationInterpolator880: TOrientationInterpolatorNode;
IS881: TIS;
connect882: Tconnect;
connect883: Tconnect;
connect884: Tconnect;
OrientationInterpolator886: TOrientationInterpolatorNode;
IS887: TIS;
connect888: Tconnect;
connect889: Tconnect;
connect890: Tconnect;
OrientationInterpolator892: TOrientationInterpolatorNode;
IS893: TIS;
connect894: Tconnect;
connect895: Tconnect;
connect896: Tconnect;
OrientationInterpolator898: TOrientationInterpolatorNode;
IS899: TIS;
connect900: Tconnect;
connect901: Tconnect;
connect902: Tconnect;
OrientationInterpolator904: TOrientationInterpolatorNode;
IS905: TIS;
connect906: Tconnect;
connect907: Tconnect;
connect908: Tconnect;
OrientationInterpolator910: TOrientationInterpolatorNode;
IS911: TIS;
connect912: Tconnect;
connect913: Tconnect;
connect914: Tconnect;
OrientationInterpolator916: TOrientationInterpolatorNode;
IS917: TIS;
connect918: Tconnect;
connect919: Tconnect;
connect920: Tconnect;
OrientationInterpolator922: TOrientationInterpolatorNode;
IS923: TIS;
connect924: Tconnect;
connect925: Tconnect;
connect926: Tconnect;
OrientationInterpolator928: TOrientationInterpolatorNode;
IS929: TIS;
connect930: Tconnect;
connect931: Tconnect;
connect932: Tconnect;
OrientationInterpolator934: TOrientationInterpolatorNode;
IS935: TIS;
connect936: Tconnect;
connect937: Tconnect;
connect938: Tconnect;
OrientationInterpolator940: TOrientationInterpolatorNode;
IS941: TIS;
connect942: Tconnect;
connect943: Tconnect;
connect944: Tconnect;
OrientationInterpolator946: TOrientationInterpolatorNode;
IS947: TIS;
connect948: Tconnect;
connect949: Tconnect;
connect950: Tconnect;
OrientationInterpolator952: TOrientationInterpolatorNode;
IS953: TIS;
connect954: Tconnect;
connect955: Tconnect;
connect956: Tconnect;
OrientationInterpolator958: TOrientationInterpolatorNode;
IS959: TIS;
connect960: Tconnect;
connect961: Tconnect;
connect962: Tconnect;
OrientationInterpolator964: TOrientationInterpolatorNode;
IS965: TIS;
connect966: Tconnect;
connect967: Tconnect;
connect968: Tconnect;
OrientationInterpolator970: TOrientationInterpolatorNode;
IS971: TIS;
connect972: Tconnect;
connect973: Tconnect;
connect974: Tconnect;
OrientationInterpolator976: TOrientationInterpolatorNode;
IS977: TIS;
connect978: Tconnect;
connect979: Tconnect;
connect980: Tconnect;
OrientationInterpolator982: TOrientationInterpolatorNode;
IS983: TIS;
connect984: Tconnect;
connect985: Tconnect;
connect986: Tconnect;
OrientationInterpolator988: TOrientationInterpolatorNode;
IS989: TIS;
connect990: Tconnect;
connect991: Tconnect;
connect992: Tconnect;
OrientationInterpolator994: TOrientationInterpolatorNode;
IS995: TIS;
connect996: Tconnect;
connect997: Tconnect;
connect998: Tconnect;
OrientationInterpolator1000: TOrientationInterpolatorNode;
IS1001: TIS;
connect1002: Tconnect;
connect1003: Tconnect;
connect1004: Tconnect;
OrientationInterpolator1006: TOrientationInterpolatorNode;
IS1007: TIS;
connect1008: Tconnect;
connect1009: Tconnect;
connect1010: Tconnect;
OrientationInterpolator1012: TOrientationInterpolatorNode;
IS1013: TIS;
connect1014: Tconnect;
connect1015: Tconnect;
connect1016: Tconnect;
OrientationInterpolator1018: TOrientationInterpolatorNode;
IS1019: TIS;
connect1020: Tconnect;
connect1021: Tconnect;
connect1022: Tconnect;
OrientationInterpolator1024: TOrientationInterpolatorNode;
IS1025: TIS;
connect1026: Tconnect;
connect1027: Tconnect;
connect1028: Tconnect;
OrientationInterpolator1030: TOrientationInterpolatorNode;
IS1031: TIS;
connect1032: Tconnect;
connect1033: Tconnect;
connect1034: Tconnect;
OrientationInterpolator1036: TOrientationInterpolatorNode;
IS1037: TIS;
connect1038: Tconnect;
connect1039: Tconnect;
connect1040: Tconnect;
OrientationInterpolator1042: TOrientationInterpolatorNode;
IS1043: TIS;
connect1044: Tconnect;
connect1045: Tconnect;
connect1046: Tconnect;
OrientationInterpolator1048: TOrientationInterpolatorNode;
IS1049: TIS;
connect1050: Tconnect;
connect1051: Tconnect;
connect1052: Tconnect;
OrientationInterpolator1054: TOrientationInterpolatorNode;
IS1055: TIS;
connect1056: Tconnect;
connect1057: Tconnect;
connect1058: Tconnect;
OrientationInterpolator1060: TOrientationInterpolatorNode;
IS1061: TIS;
connect1062: Tconnect;
connect1063: Tconnect;
connect1064: Tconnect;
OrientationInterpolator1066: TOrientationInterpolatorNode;
IS1067: TIS;
connect1068: Tconnect;
connect1069: Tconnect;
connect1070: Tconnect;
OrientationInterpolator1072: TOrientationInterpolatorNode;
IS1073: TIS;
connect1074: Tconnect;
connect1075: Tconnect;
connect1076: Tconnect;
OrientationInterpolator1078: TOrientationInterpolatorNode;
IS1079: TIS;
connect1080: Tconnect;
connect1081: Tconnect;
connect1082: Tconnect;
OrientationInterpolator1084: TOrientationInterpolatorNode;
IS1085: TIS;
connect1086: Tconnect;
connect1087: Tconnect;
connect1088: Tconnect;
OrientationInterpolator1090: TOrientationInterpolatorNode;
IS1091: TIS;
connect1092: Tconnect;
connect1093: Tconnect;
connect1094: Tconnect;
OrientationInterpolator1096: TOrientationInterpolatorNode;
IS1097: TIS;
connect1098: Tconnect;
connect1099: Tconnect;
connect1100: Tconnect;
OrientationInterpolator1102: TOrientationInterpolatorNode;
IS1103: TIS;
connect1104: Tconnect;
connect1105: Tconnect;
connect1106: Tconnect;
OrientationInterpolator1108: TOrientationInterpolatorNode;
IS1109: TIS;
connect1110: Tconnect;
connect1111: Tconnect;
connect1112: Tconnect;
OrientationInterpolator1114: TOrientationInterpolatorNode;
IS1115: TIS;
connect1116: Tconnect;
connect1117: Tconnect;
connect1118: Tconnect;
OrientationInterpolator1120: TOrientationInterpolatorNode;
IS1121: TIS;
connect1122: Tconnect;
connect1123: Tconnect;
connect1124: Tconnect;
OrientationInterpolator1126: TOrientationInterpolatorNode;
IS1127: TIS;
connect1128: Tconnect;
connect1129: Tconnect;
connect1130: Tconnect;
OrientationInterpolator1132: TOrientationInterpolatorNode;
IS1133: TIS;
connect1134: Tconnect;
connect1135: Tconnect;
connect1136: Tconnect;
OrientationInterpolator1138: TOrientationInterpolatorNode;
IS1139: TIS;
connect1140: Tconnect;
connect1141: Tconnect;
connect1142: Tconnect;
OrientationInterpolator1144: TOrientationInterpolatorNode;
IS1145: TIS;
connect1146: Tconnect;
connect1147: Tconnect;
connect1148: Tconnect;
OrientationInterpolator1150: TOrientationInterpolatorNode;
IS1151: TIS;
connect1152: Tconnect;
connect1153: Tconnect;
connect1154: Tconnect;
OrientationInterpolator1156: TOrientationInterpolatorNode;
IS1157: TIS;
connect1158: Tconnect;
connect1159: Tconnect;
connect1160: Tconnect;
OrientationInterpolator1162: TOrientationInterpolatorNode;
IS1163: TIS;
connect1164: Tconnect;
connect1165: Tconnect;
connect1166: Tconnect;
OrientationInterpolator1168: TOrientationInterpolatorNode;
IS1169: TIS;
connect1170: Tconnect;
connect1171: Tconnect;
connect1172: Tconnect;
OrientationInterpolator1174: TOrientationInterpolatorNode;
IS1175: TIS;
connect1176: Tconnect;
connect1177: Tconnect;
connect1178: Tconnect;
OrientationInterpolator1180: TOrientationInterpolatorNode;
IS1181: TIS;
connect1182: Tconnect;
connect1183: Tconnect;
connect1184: Tconnect;
OrientationInterpolator1186: TOrientationInterpolatorNode;
IS1187: TIS;
connect1188: Tconnect;
connect1189: Tconnect;
connect1190: Tconnect;
OrientationInterpolator1192: TOrientationInterpolatorNode;
IS1193: TIS;
connect1194: Tconnect;
connect1195: Tconnect;
connect1196: Tconnect;
OrientationInterpolator1198: TOrientationInterpolatorNode;
IS1199: TIS;
connect1200: Tconnect;
connect1201: Tconnect;
connect1202: Tconnect;
OrientationInterpolator1204: TOrientationInterpolatorNode;
IS1205: TIS;
connect1206: Tconnect;
connect1207: Tconnect;
connect1208: Tconnect;
OrientationInterpolator1210: TOrientationInterpolatorNode;
IS1211: TIS;
connect1212: Tconnect;
connect1213: Tconnect;
connect1214: Tconnect;
OrientationInterpolator1216: TOrientationInterpolatorNode;
IS1217: TIS;
connect1218: Tconnect;
connect1219: Tconnect;
connect1220: Tconnect;
OrientationInterpolator1222: TOrientationInterpolatorNode;
IS1223: TIS;
connect1224: Tconnect;
connect1225: Tconnect;
connect1226: Tconnect;
OrientationInterpolator1228: TOrientationInterpolatorNode;
IS1229: TIS;
connect1230: Tconnect;
connect1231: Tconnect;
connect1232: Tconnect;
OrientationInterpolator1234: TOrientationInterpolatorNode;
IS1235: TIS;
connect1236: Tconnect;
connect1237: Tconnect;
connect1238: Tconnect;
OrientationInterpolator1240: TOrientationInterpolatorNode;
IS1241: TIS;
connect1242: Tconnect;
connect1243: Tconnect;
connect1244: Tconnect;
OrientationInterpolator1246: TOrientationInterpolatorNode;
IS1247: TIS;
connect1248: Tconnect;
connect1249: Tconnect;
connect1250: Tconnect;
OrientationInterpolator1252: TOrientationInterpolatorNode;
IS1253: TIS;
connect1254: Tconnect;
connect1255: Tconnect;
connect1256: Tconnect;
OrientationInterpolator1258: TOrientationInterpolatorNode;
IS1259: TIS;
connect1260: Tconnect;
connect1261: Tconnect;
connect1262: Tconnect;
OrientationInterpolator1264: TOrientationInterpolatorNode;
IS1265: TIS;
connect1266: Tconnect;
connect1267: Tconnect;
connect1268: Tconnect;
OrientationInterpolator1270: TOrientationInterpolatorNode;
IS1271: TIS;
connect1272: Tconnect;
connect1273: Tconnect;
connect1274: Tconnect;
OrientationInterpolator1276: TOrientationInterpolatorNode;
IS1277: TIS;
connect1278: Tconnect;
connect1279: Tconnect;
connect1280: Tconnect;
OrientationInterpolator1282: TOrientationInterpolatorNode;
IS1283: TIS;
connect1284: Tconnect;
connect1285: Tconnect;
connect1286: Tconnect;
OrientationInterpolator1288: TOrientationInterpolatorNode;
IS1289: TIS;
connect1290: Tconnect;
connect1291: Tconnect;
connect1292: Tconnect;
OrientationInterpolator1294: TOrientationInterpolatorNode;
IS1295: TIS;
connect1296: Tconnect;
connect1297: Tconnect;
connect1298: Tconnect;
OrientationInterpolator1300: TOrientationInterpolatorNode;
IS1301: TIS;
connect1302: Tconnect;
connect1303: Tconnect;
connect1304: Tconnect;
OrientationInterpolator1306: TOrientationInterpolatorNode;
IS1307: TIS;
connect1308: Tconnect;
connect1309: Tconnect;
connect1310: Tconnect;
OrientationInterpolator1312: TOrientationInterpolatorNode;
IS1313: TIS;
connect1314: Tconnect;
connect1315: Tconnect;
connect1316: Tconnect;
OrientationInterpolator1318: TOrientationInterpolatorNode;
IS1319: TIS;
connect1320: Tconnect;
connect1321: Tconnect;
connect1322: Tconnect;
OrientationInterpolator1324: TOrientationInterpolatorNode;
IS1325: TIS;
connect1326: Tconnect;
connect1327: Tconnect;
connect1328: Tconnect;
OrientationInterpolator1330: TOrientationInterpolatorNode;
IS1331: TIS;
connect1332: Tconnect;
connect1333: Tconnect;
connect1334: Tconnect;
OrientationInterpolator1336: TOrientationInterpolatorNode;
IS1337: TIS;
connect1338: Tconnect;
connect1339: Tconnect;
connect1340: Tconnect;
OrientationInterpolator1342: TOrientationInterpolatorNode;
IS1343: TIS;
connect1344: Tconnect;
connect1345: Tconnect;
connect1346: Tconnect;
OrientationInterpolator1348: TOrientationInterpolatorNode;
IS1349: TIS;
connect1350: Tconnect;
connect1351: Tconnect;
connect1352: Tconnect;
OrientationInterpolator1354: TOrientationInterpolatorNode;
IS1355: TIS;
connect1356: Tconnect;
connect1357: Tconnect;
connect1358: Tconnect;
OrientationInterpolator1360: TOrientationInterpolatorNode;
IS1361: TIS;
connect1362: Tconnect;
connect1363: Tconnect;
connect1364: Tconnect;
OrientationInterpolator1366: TOrientationInterpolatorNode;
IS1367: TIS;
connect1368: Tconnect;
connect1369: Tconnect;
connect1370: Tconnect;
OrientationInterpolator1372: TOrientationInterpolatorNode;
IS1373: TIS;
connect1374: Tconnect;
connect1375: Tconnect;
connect1376: Tconnect;
OrientationInterpolator1378: TOrientationInterpolatorNode;
IS1379: TIS;
connect1380: Tconnect;
connect1381: Tconnect;
connect1382: Tconnect;
OrientationInterpolator1384: TOrientationInterpolatorNode;
IS1385: TIS;
connect1386: Tconnect;
connect1387: Tconnect;
connect1388: Tconnect;
OrientationInterpolator1390: TOrientationInterpolatorNode;
IS1391: TIS;
connect1392: Tconnect;
connect1393: Tconnect;
connect1394: Tconnect;
OrientationInterpolator1396: TOrientationInterpolatorNode;
IS1397: TIS;
connect1398: Tconnect;
connect1399: Tconnect;
connect1400: Tconnect;
OrientationInterpolator1402: TOrientationInterpolatorNode;
IS1403: TIS;
connect1404: Tconnect;
connect1405: Tconnect;
connect1406: Tconnect;
OrientationInterpolator1408: TOrientationInterpolatorNode;
IS1409: TIS;
connect1410: Tconnect;
connect1411: Tconnect;
connect1412: Tconnect;
OrientationInterpolator1414: TOrientationInterpolatorNode;
IS1415: TIS;
connect1416: Tconnect;
connect1417: Tconnect;
connect1418: Tconnect;
OrientationInterpolator1420: TOrientationInterpolatorNode;
IS1421: TIS;
connect1422: Tconnect;
connect1423: Tconnect;
connect1424: Tconnect;
OrientationInterpolator1426: TOrientationInterpolatorNode;
IS1427: TIS;
connect1428: Tconnect;
connect1429: Tconnect;
connect1430: Tconnect;
OrientationInterpolator1432: TOrientationInterpolatorNode;
IS1433: TIS;
connect1434: Tconnect;
connect1435: Tconnect;
connect1436: Tconnect;
OrientationInterpolator1438: TOrientationInterpolatorNode;
IS1439: TIS;
connect1440: Tconnect;
connect1441: Tconnect;
connect1442: Tconnect;
OrientationInterpolator1444: TOrientationInterpolatorNode;
IS1445: TIS;
connect1446: Tconnect;
connect1447: Tconnect;
connect1448: Tconnect;
OrientationInterpolator1450: TOrientationInterpolatorNode;
IS1451: TIS;
connect1452: Tconnect;
connect1453: Tconnect;
connect1454: Tconnect;
OrientationInterpolator1456: TOrientationInterpolatorNode;
IS1457: TIS;
connect1458: Tconnect;
connect1459: Tconnect;
connect1460: Tconnect;
OrientationInterpolator1462: TOrientationInterpolatorNode;
IS1463: TIS;
connect1464: Tconnect;
connect1465: Tconnect;
connect1466: Tconnect;
OrientationInterpolator1468: TOrientationInterpolatorNode;
IS1469: TIS;
connect1470: Tconnect;
connect1471: Tconnect;
connect1472: Tconnect;
OrientationInterpolator1474: TOrientationInterpolatorNode;
IS1475: TIS;
connect1476: Tconnect;
connect1477: Tconnect;
connect1478: Tconnect;
OrientationInterpolator1480: TOrientationInterpolatorNode;
IS1481: TIS;
connect1482: Tconnect;
connect1483: Tconnect;
connect1484: Tconnect;
OrientationInterpolator1486: TOrientationInterpolatorNode;
IS1487: TIS;
connect1488: Tconnect;
connect1489: Tconnect;
connect1490: Tconnect;
OrientationInterpolator1492: TOrientationInterpolatorNode;
IS1493: TIS;
connect1494: Tconnect;
connect1495: Tconnect;
connect1496: Tconnect;
OrientationInterpolator1498: TOrientationInterpolatorNode;
IS1499: TIS;
connect1500: Tconnect;
connect1501: Tconnect;
connect1502: Tconnect;
OrientationInterpolator1504: TOrientationInterpolatorNode;
IS1505: TIS;
connect1506: Tconnect;
connect1507: Tconnect;
connect1508: Tconnect;
OrientationInterpolator1510: TOrientationInterpolatorNode;
IS1511: TIS;
connect1512: Tconnect;
connect1513: Tconnect;
connect1514: Tconnect;
OrientationInterpolator1516: TOrientationInterpolatorNode;
IS1517: TIS;
connect1518: Tconnect;
connect1519: Tconnect;
connect1520: Tconnect;
OrientationInterpolator1522: TOrientationInterpolatorNode;
IS1523: TIS;
connect1524: Tconnect;
connect1525: Tconnect;
connect1526: Tconnect;
OrientationInterpolator1528: TOrientationInterpolatorNode;
IS1529: TIS;
connect1530: Tconnect;
connect1531: Tconnect;
connect1532: Tconnect;
OrientationInterpolator1534: TOrientationInterpolatorNode;
IS1535: TIS;
connect1536: Tconnect;
connect1537: Tconnect;
connect1538: Tconnect;
OrientationInterpolator1540: TOrientationInterpolatorNode;
IS1541: TIS;
connect1542: Tconnect;
connect1543: Tconnect;
connect1544: Tconnect;
OrientationInterpolator1546: TOrientationInterpolatorNode;
IS1547: TIS;
connect1548: Tconnect;
connect1549: Tconnect;
connect1550: Tconnect;
OrientationInterpolator1552: TOrientationInterpolatorNode;
IS1553: TIS;
connect1554: Tconnect;
connect1555: Tconnect;
connect1556: Tconnect;
OrientationInterpolator1558: TOrientationInterpolatorNode;
IS1559: TIS;
connect1560: Tconnect;
connect1561: Tconnect;
connect1562: Tconnect;
OrientationInterpolator1564: TOrientationInterpolatorNode;
IS1565: TIS;
connect1566: Tconnect;
connect1567: Tconnect;
connect1568: Tconnect;
OrientationInterpolator1570: TOrientationInterpolatorNode;
IS1571: TIS;
connect1572: Tconnect;
connect1573: Tconnect;
connect1574: Tconnect;
OrientationInterpolator1576: TOrientationInterpolatorNode;
IS1577: TIS;
connect1578: Tconnect;
connect1579: Tconnect;
connect1580: Tconnect;
OrientationInterpolator1582: TOrientationInterpolatorNode;
IS1583: TIS;
connect1584: Tconnect;
connect1585: Tconnect;
connect1586: Tconnect;
OrientationInterpolator1588: TOrientationInterpolatorNode;
IS1589: TIS;
connect1590: Tconnect;
connect1591: Tconnect;
connect1592: Tconnect;
OrientationInterpolator1594: TOrientationInterpolatorNode;
IS1595: TIS;
connect1596: Tconnect;
connect1597: Tconnect;
connect1598: Tconnect;
OrientationInterpolator1600: TOrientationInterpolatorNode;
IS1601: TIS;
connect1602: Tconnect;
connect1603: Tconnect;
connect1604: Tconnect;
OrientationInterpolator1606: TOrientationInterpolatorNode;
IS1607: TIS;
connect1608: Tconnect;
connect1609: Tconnect;
connect1610: Tconnect;
OrientationInterpolator1612: TOrientationInterpolatorNode;
IS1613: TIS;
connect1614: Tconnect;
connect1615: Tconnect;
connect1616: Tconnect;
OrientationInterpolator1618: TOrientationInterpolatorNode;
IS1619: TIS;
connect1620: Tconnect;
connect1621: Tconnect;
connect1622: Tconnect;
OrientationInterpolator1624: TOrientationInterpolatorNode;
IS1625: TIS;
connect1626: Tconnect;
connect1627: Tconnect;
connect1628: Tconnect;
OrientationInterpolator1630: TOrientationInterpolatorNode;
IS1631: TIS;
connect1632: Tconnect;
connect1633: Tconnect;
connect1634: Tconnect;
OrientationInterpolator1636: TOrientationInterpolatorNode;
IS1637: TIS;
connect1638: Tconnect;
connect1639: Tconnect;
connect1640: Tconnect;
OrientationInterpolator1642: TOrientationInterpolatorNode;
IS1643: TIS;
connect1644: Tconnect;
connect1645: Tconnect;
connect1646: Tconnect;
OrientationInterpolator1648: TOrientationInterpolatorNode;
IS1649: TIS;
connect1650: Tconnect;
connect1651: Tconnect;
connect1652: Tconnect;
OrientationInterpolator1654: TOrientationInterpolatorNode;
IS1655: TIS;
connect1656: Tconnect;
connect1657: Tconnect;
connect1658: Tconnect;
OrientationInterpolator1660: TOrientationInterpolatorNode;
IS1661: TIS;
connect1662: Tconnect;
connect1663: Tconnect;
connect1664: Tconnect;
OrientationInterpolator1666: TOrientationInterpolatorNode;
IS1667: TIS;
connect1668: Tconnect;
connect1669: Tconnect;
connect1670: Tconnect;
OrientationInterpolator1672: TOrientationInterpolatorNode;
IS1673: TIS;
connect1674: Tconnect;
connect1675: Tconnect;
connect1676: Tconnect;
OrientationInterpolator1678: TOrientationInterpolatorNode;
IS1679: TIS;
connect1680: Tconnect;
connect1681: Tconnect;
connect1682: Tconnect;
OrientationInterpolator1684: TOrientationInterpolatorNode;
IS1685: TIS;
connect1686: Tconnect;
connect1687: Tconnect;
connect1688: Tconnect;
OrientationInterpolator1690: TOrientationInterpolatorNode;
IS1691: TIS;
connect1692: Tconnect;
connect1693: Tconnect;
connect1694: Tconnect;
OrientationInterpolator1696: TOrientationInterpolatorNode;
IS1697: TIS;
connect1698: Tconnect;
connect1699: Tconnect;
connect1700: Tconnect;
OrientationInterpolator1702: TOrientationInterpolatorNode;
IS1703: TIS;
connect1704: Tconnect;
connect1705: Tconnect;
connect1706: Tconnect;
OrientationInterpolator1708: TOrientationInterpolatorNode;
IS1709: TIS;
connect1710: Tconnect;
connect1711: Tconnect;
connect1712: Tconnect;
OrientationInterpolator1714: TOrientationInterpolatorNode;
IS1715: TIS;
connect1716: Tconnect;
connect1717: Tconnect;
connect1718: Tconnect;
OrientationInterpolator1720: TOrientationInterpolatorNode;
IS1721: TIS;
connect1722: Tconnect;
connect1723: Tconnect;
connect1724: Tconnect;
OrientationInterpolator1726: TOrientationInterpolatorNode;
IS1727: TIS;
connect1728: Tconnect;
connect1729: Tconnect;
connect1730: Tconnect;
OrientationInterpolator1732: TOrientationInterpolatorNode;
IS1733: TIS;
connect1734: Tconnect;
connect1735: Tconnect;
connect1736: Tconnect;
OrientationInterpolator1738: TOrientationInterpolatorNode;
IS1739: TIS;
connect1740: Tconnect;
connect1741: Tconnect;
connect1742: Tconnect;
OrientationInterpolator1744: TOrientationInterpolatorNode;
IS1745: TIS;
connect1746: Tconnect;
connect1747: Tconnect;
connect1748: Tconnect;
OrientationInterpolator1750: TOrientationInterpolatorNode;
IS1751: TIS;
connect1752: Tconnect;
connect1753: Tconnect;
connect1754: Tconnect;
X3DPrototype1756: TX3DPrototype;
X3DInterfaceDeclaration1757: TX3DInterfaceDeclaration;
SFInt321758: TSFInt32;
MFNode1759: TMFNode;
SFInt321760: TSFInt32;
SFInt321761: TSFInt32;
SFInt321762: TSFInt32;
MFNode1763: TMFNode;
MFBool1764: TMFBool;
SFInt321765: TSFInt32;
SFInt321766: TSFInt32;
SFTime1767: TSFTime;
SFTime1768: TSFTime;
X3DPrototype1769: TX3DPrototype;
Switch1770: TSwitchNode;
IS1771: TIS;
connect1772: Tconnect;
connect1773: Tconnect;
Group1774: TGroupNode;
IS1775: TIS;
connect1776: Tconnect;
TimeSensor1777: TTimeSensorNode;
IS1778: TIS;
connect1779: Tconnect;
connect1780: Tconnect;
Switch1781: TSwitchNode;
IS1782: TIS;
connect1783: Tconnect;
Script1784: TScriptNode;
MFNode1785: TMFNode;
SFInt321786: TSFInt32;
SFInt321787: TSFInt32;
SFInt321788: TSFInt32;
MFNode1789: TMFNode;
MFBool1790: TMFBool;
SFInt321791: TSFInt32;
SFInt321792: TSFInt32;
SFNode1793: TSFNode;
TimeSensor1794: TTimeSensorNode;
SFInt321795: TSFInt32;
SFBool1796: TSFBool;
IS1797: TIS;
connect1798: Tconnect;
connect1799: Tconnect;
connect1800: Tconnect;
connect1801: Tconnect;
connect1802: Tconnect;
connect1803: Tconnect;
connect1804: Tconnect;
connect1805: Tconnect;
X3DPrototype1806: TX3DPrototypeNode;
MFFloat1807: TMFFloat;
MFVec3f1808: TMFVec3f;
MFFloat1809: TMFFloat;
MFRotation1810: TMFRotation;
X3DPrototype1811: TX3DPrototypeNode;
MFNode1812: TMFNode;
HAnimHumanoid1813: THAnimHumanoidNode;
SFInt321814: TSFInt32;
MFNode1815: TMFNode;
X3DPrototype1816: TX3DPrototypeNode;
MFBool1817: TMFBool;

procedure InitHAnimBehaviorPrototypesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'HAnimBehaviorPrototypes.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor';
{ METHOD .Meta }
X3D0.Meta['created'] := '2 May 2006';
{ METHOD .Meta }
X3D0.Meta['modified'] := '4 July 2020';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'Web3D2007BlendedBehaviorsChangeableBodies.pdf';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'InterchangableActorsViaDynamicRoutingPrototypes.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ApaydinThesis.pdf';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'X3D HAnim humanoid animation behaviors';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'under development. should joint translations be exposed? upgrade to HAnim v2.2';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'HAnimBehaviorPrototypes.x3d';
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(WorldInfo19);
X3DPrototype20 := TX3DPrototype.Create;
X3DPrototype20.Appinfo := 'The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.';
X3DPrototype20.Documentation := 'https://www.web3d.org/files/specifications/19774/V1.0/';
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);
{ supported Level of Articulation (LOA) }
{ shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations }
{ TODO: add other X3D 3.0 TimeSensor fields (pause etc.) }
{ Not supported: animated translation of individual joints }
{ pass in key/keyValue array pairs for single PositionInterpolator }
{ pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint }
SFInt3222 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration21, false, 'supportedLOA');
SFInt3222.Appinfo := 'Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
SFInt3222.Value := '-1';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration21.AddSFInt32([SFInt3222]);
SFBool23 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'enabled');
SFBool23.Appinfo := 'is this behavior enabled?';
SFBool23.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool23]);
SFTime24 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'cycleInterval');
SFTime24.Appinfo := 'how long do these interpolators take to execute?';
SFTime24.Value := '1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime24]);
end;

procedure InitHAnimBehaviorPrototypesPart1;
begin

SFBool25 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'loop');
SFBool25.Appinfo := 'whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).';
SFBool25.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool25]);
SFTime26 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'startTime');
SFTime26.Appinfo := 'when time now >= startTime isActive becomes true and TimeSensor becomes active';
SFTime26.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime26]);
SFTime27 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'stopTime');
SFTime27.Appinfo := 'when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive';
SFTime27.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime27]);
SFTime28 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'pauseTime');
SFTime28.Appinfo := 'when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused';
SFTime28.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime28]);
SFTime29 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'resumeTime');
SFTime29.Appinfo := 'when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive';
SFTime29.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime29]);
SFTime30 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'cycleTime');
SFTime30.Appinfo := 'cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime30]);
SFBool31 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'isActive');
SFBool31.Appinfo := 'isActive true/false events are sent when TimeSensor starts/stops running';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool31]);
SFBool32 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'isPaused');
SFBool32.Appinfo := 'isPaused true/false events are sent when TimeSensor is paused/resumed';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool32]);
SFBool33 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'elapsedTime');
SFBool33.Appinfo := 'current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool33]);
SFBool34 := TSFBool.CreateUndefined(X3DInterfaceDeclaration21, false, 'time');
SFBool34.Appinfo := 'continuously sends the absolute time (since January 1 1970)';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration21.AddSFBool([SFBool34]);
SFFloat35 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'fraction_changed');
SFFloat35.Appinfo := 'fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration21.AddSFFloat([SFFloat35]);
MFFloat36 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_translation_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat36]);
end;

procedure InitHAnimBehaviorPrototypesPart2;
begin

MFVec3f37 := TMFVec3f.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_translation_keyValue');
{ no default value }
{ METHOD .AddMFVec3f }
X3DInterfaceDeclaration21.AddMFVec3f([MFVec3f37]);
SFVec3f38 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_translation_changed');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration21.AddSFVec3f([SFVec3f38]);
MFFloat39 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_rotation_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat39]);
MFRotation40 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_rotation_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation40]);
SFRotation41 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_rotation_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation41]);
MFFloat42 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat42]);
MFRotation43 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation43]);
SFRotation44 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation44]);
MFFloat45 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat45]);
MFRotation46 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation46]);
SFRotation47 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation47]);
MFFloat48 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat48]);
MFRotation49 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation49]);
SFRotation50 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation50]);
MFFloat51 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat51]);
MFRotation52 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation52]);
SFRotation53 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c4_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation53]);
MFFloat54 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c5_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat54]);
MFRotation55 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation55]);
SFRotation56 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation56]);
end;

procedure InitHAnimBehaviorPrototypesPart3;
begin

MFFloat57 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c6_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat57]);
MFRotation58 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c6_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation58]);
SFRotation59 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c6_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation59]);
MFFloat60 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'c7_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat60]);
MFRotation61 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c7_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation61]);
SFRotation62 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c7_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation62]);
MFFloat63 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'jaw_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat63]);
MFRotation64 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'jaw_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation64]);
SFRotation65 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'jaw_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation65]);
MFFloat66 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat66]);
MFRotation67 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation67]);
SFRotation68 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation68]);
MFFloat69 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat69]);
MFRotation70 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation70]);
SFRotation71 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation71]);
MFFloat72 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat72]);
MFRotation73 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation73]);
SFRotation74 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation74]);
MFFloat75 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat75]);
MFRotation76 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation76]);
end;

procedure InitHAnimBehaviorPrototypesPart4;
begin

SFRotation77 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l4_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation77]);
MFFloat78 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l5_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat78]);
MFRotation79 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation79]);
SFRotation80 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation80]);
MFFloat81 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_acromioclavicular_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat81]);
MFRotation82 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_acromioclavicular_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation82]);
SFRotation83 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_acromioclavicular_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation83]);
MFFloat84 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ankle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat84]);
MFRotation85 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ankle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation85]);
SFRotation86 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ankle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation86]);
MFFloat87 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_calf_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat87]);
MFRotation88 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_calf_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation88]);
SFRotation89 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_calf_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation89]);
MFFloat90 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_clavicle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat90]);
MFRotation91 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_clavicle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation91]);
SFRotation92 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_clavicle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation92]);
MFFloat93 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_elbow_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat93]);
MFRotation94 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_elbow_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation94]);
SFRotation95 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_elbow_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation95]);
MFFloat96 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat96]);
end;

procedure InitHAnimBehaviorPrototypesPart5;
begin

MFRotation97 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation97]);
SFRotation98 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation98]);
MFFloat99 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_joint_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat99]);
MFRotation100 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_joint_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation100]);
SFRotation101 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_joint_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation101]);
MFFloat102 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyebrow_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat102]);
MFRotation103 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyebrow_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation103]);
SFRotation104 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyebrow_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation104]);
MFFloat105 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyebrow_joint_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat105]);
MFRotation106 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyebrow_joint_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation106]);
SFRotation107 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyebrow_joint_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation107]);
MFFloat108 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyelid_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat108]);
MFRotation109 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyelid_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation109]);
SFRotation110 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyelid_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation110]);
MFFloat111 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyelid_joint_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat111]);
MFRotation112 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyelid_joint_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation112]);
SFRotation113 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyelid_joint_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation113]);
MFFloat114 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forearm_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat114]);
MFRotation115 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forearm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation115]);
SFRotation116 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forearm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation116]);
end;

procedure InitHAnimBehaviorPrototypesPart6;
begin

MFFloat117 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forefoot_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat117]);
MFRotation118 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forefoot_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation118]);
SFRotation119 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forefoot_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation119]);
MFFloat120 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hand_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat120]);
MFRotation121 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hand_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation121]);
SFRotation122 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hand_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation122]);
MFFloat123 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hindfoot_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat123]);
MFRotation124 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hindfoot_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation124]);
SFRotation125 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hindfoot_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation125]);
MFFloat126 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hip_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat126]);
MFRotation127 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hip_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation127]);
SFRotation128 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_hip_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation128]);
MFFloat129 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat129]);
MFRotation130 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation130]);
SFRotation131 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation131]);
MFFloat132 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat132]);
MFRotation133 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation133]);
SFRotation134 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation134]);
MFFloat135 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat135]);
MFRotation136 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation136]);
end;

procedure InitHAnimBehaviorPrototypesPart7;
begin

SFRotation137 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation137]);
MFFloat138 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat138]);
MFRotation139 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation139]);
SFRotation140 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation140]);
MFFloat141 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat141]);
MFRotation142 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation142]);
SFRotation143 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation143]);
MFFloat144 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat144]);
MFRotation145 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation145]);
SFRotation146 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation146]);
MFFloat147 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat147]);
MFRotation148 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation148]);
SFRotation149 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation149]);
MFFloat150 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat150]);
MFRotation151 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation151]);
SFRotation152 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation152]);
MFFloat153 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_knee_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat153]);
MFRotation154 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_knee_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation154]);
SFRotation155 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_knee_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation155]);
MFFloat156 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_metatarsal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat156]);
end;

procedure InitHAnimBehaviorPrototypesPart8;
begin

MFRotation157 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_metatarsal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation157]);
SFRotation158 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_metatarsal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation158]);
MFFloat159 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middistal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat159]);
MFRotation160 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middistal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation160]);
SFRotation161 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middistal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation161]);
MFFloat162 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat162]);
MFRotation163 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation163]);
SFRotation164 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation164]);
MFFloat165 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat165]);
MFRotation166 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation166]);
SFRotation167 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation167]);
MFFloat168 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat168]);
MFRotation169 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation169]);
SFRotation170 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation170]);
MFFloat171 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat171]);
MFRotation172 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation172]);
SFRotation173 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation173]);
MFFloat174 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat174]);
MFRotation175 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation175]);
SFRotation176 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation176]);
end;

procedure InitHAnimBehaviorPrototypesPart9;
begin

MFFloat177 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat177]);
MFRotation178 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation178]);
SFRotation179 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation179]);
MFFloat180 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat180]);
MFRotation181 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation181]);
SFRotation182 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation182]);
MFFloat183 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat183]);
MFRotation184 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation184]);
SFRotation185 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation185]);
MFFloat186 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midproximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat186]);
MFRotation187 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midproximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation187]);
SFRotation188 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midproximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation188]);
MFFloat189 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midtarsal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat189]);
MFRotation190 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midtarsal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation190]);
SFRotation191 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_midtarsal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation191]);
MFFloat192 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat192]);
MFRotation193 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation193]);
SFRotation194 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation194]);
MFFloat195 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat195]);
MFRotation196 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation196]);
end;

procedure InitHAnimBehaviorPrototypesPart10;
begin

SFRotation197 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation197]);
MFFloat198 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat198]);
MFRotation199 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation199]);
SFRotation200 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation200]);
MFFloat201 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat201]);
MFRotation202 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation202]);
SFRotation203 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation203]);
MFFloat204 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat204]);
MFRotation205 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation205]);
SFRotation206 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation206]);
MFFloat207 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat207]);
MFRotation208 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation208]);
SFRotation209 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation209]);
MFFloat210 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat210]);
MFRotation211 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation211]);
SFRotation212 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation212]);
MFFloat213 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat213]);
MFRotation214 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation214]);
SFRotation215 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation215]);
MFFloat216 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat216]);
end;

procedure InitHAnimBehaviorPrototypesPart11;
begin

MFRotation217 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation217]);
SFRotation218 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation218]);
MFFloat219 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat219]);
MFRotation220 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation220]);
SFRotation221 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation221]);
MFFloat222 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat222]);
MFRotation223 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation223]);
SFRotation224 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation224]);
MFFloat225 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat225]);
MFRotation226 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation226]);
SFRotation227 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation227]);
MFFloat228 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat228]);
MFRotation229 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation229]);
SFRotation230 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation230]);
MFFloat231 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat231]);
MFRotation232 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation232]);
SFRotation233 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation233]);
MFFloat234 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat234]);
MFRotation235 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation235]);
SFRotation236 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation236]);
end;

procedure InitHAnimBehaviorPrototypesPart12;
begin

MFFloat237 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat237]);
MFRotation238 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation238]);
SFRotation239 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation239]);
MFFloat240 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_scapula_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat240]);
MFRotation241 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_scapula_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation241]);
SFRotation242 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_scapula_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation242]);
MFFloat243 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_shoulder_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat243]);
MFRotation244 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_shoulder_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation244]);
SFRotation245 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_shoulder_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation245]);
MFFloat246 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_sternoclavicular_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat246]);
MFRotation247 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_sternoclavicular_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation247]);
SFRotation248 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_sternoclavicular_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation248]);
MFFloat249 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_subtalar_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat249]);
MFRotation250 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_subtalar_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation250]);
SFRotation251 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_subtalar_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation251]);
MFFloat252 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thigh_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat252]);
MFRotation253 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thigh_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation253]);
SFRotation254 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thigh_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation254]);
MFFloat255 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat255]);
MFRotation256 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation256]);
end;

procedure InitHAnimBehaviorPrototypesPart13;
begin

SFRotation257 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation257]);
MFFloat258 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat258]);
MFRotation259 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation259]);
SFRotation260 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation260]);
MFFloat261 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat261]);
MFRotation262 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation262]);
SFRotation263 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation263]);
MFFloat264 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat264]);
MFRotation265 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation265]);
SFRotation266 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation266]);
MFFloat267 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat267]);
MFRotation268 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation268]);
SFRotation269 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation269]);
MFFloat270 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat270]);
MFRotation271 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation271]);
SFRotation272 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation272]);
MFFloat273 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_upperarm_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat273]);
MFRotation274 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_upperarm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation274]);
SFRotation275 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_upperarm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation275]);
MFFloat276 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_wrist_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat276]);
end;

procedure InitHAnimBehaviorPrototypesPart14;
begin

MFRotation277 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_wrist_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation277]);
SFRotation278 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_wrist_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation278]);
MFFloat279 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'pelvis_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat279]);
MFRotation280 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'pelvis_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation280]);
SFRotation281 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'pelvis_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation281]);
MFFloat282 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_acromioclavicular_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat282]);
MFRotation283 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_acromioclavicular_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation283]);
SFRotation284 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_acromioclavicular_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation284]);
MFFloat285 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ankle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat285]);
MFRotation286 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ankle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation286]);
SFRotation287 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ankle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation287]);
MFFloat288 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_calf_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat288]);
MFRotation289 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_calf_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation289]);
SFRotation290 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_calf_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation290]);
MFFloat291 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_clavicle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat291]);
MFRotation292 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_clavicle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation292]);
SFRotation293 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_clavicle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation293]);
MFFloat294 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat294]);
MFRotation295 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation295]);
SFRotation296 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation296]);
end;

procedure InitHAnimBehaviorPrototypesPart15;
begin

MFFloat297 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyeball_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat297]);
MFRotation298 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyeball_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation298]);
SFRotation299 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyeball_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation299]);
MFFloat300 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyeball_joint_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat300]);
MFRotation301 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyeball_joint_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation301]);
SFRotation302 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyeball_joint_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation302]);
MFFloat303 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyebrow_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat303]);
MFRotation304 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyebrow_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation304]);
SFRotation305 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyebrow_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation305]);
MFFloat306 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyebrow_joint_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat306]);
MFRotation307 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyebrow_joint_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation307]);
SFRotation308 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyebrow_joint_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation308]);
MFFloat309 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyelid_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat309]);
MFRotation310 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyelid_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation310]);
SFRotation311 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyelid_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation311]);
MFFloat312 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyelid_joint_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat312]);
MFRotation313 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyelid_joint_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation313]);
SFRotation314 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_eyelid_joint_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation314]);
MFFloat315 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forearm_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat315]);
MFRotation316 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forearm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation316]);
end;

procedure InitHAnimBehaviorPrototypesPart16;
begin

SFRotation317 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forearm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation317]);
MFFloat318 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forefoot_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat318]);
MFRotation319 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forefoot_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation319]);
SFRotation320 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forefoot_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation320]);
MFFloat321 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hand_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat321]);
MFRotation322 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hand_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation322]);
SFRotation323 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hand_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation323]);
MFFloat324 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hindfoot_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat324]);
MFRotation325 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hindfoot_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation325]);
SFRotation326 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hindfoot_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation326]);
MFFloat327 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hip_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat327]);
MFRotation328 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hip_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation328]);
SFRotation329 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_hip_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation329]);
MFFloat330 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat330]);
MFRotation331 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation331]);
SFRotation332 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation332]);
MFFloat333 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat333]);
MFRotation334 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation334]);
SFRotation335 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation335]);
MFFloat336 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat336]);
end;

procedure InitHAnimBehaviorPrototypesPart17;
begin

MFRotation337 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation337]);
SFRotation338 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation338]);
MFFloat339 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat339]);
MFRotation340 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation340]);
SFRotation341 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation341]);
MFFloat342 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat342]);
MFRotation343 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation343]);
SFRotation344 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation344]);
MFFloat345 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat345]);
MFRotation346 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation346]);
SFRotation347 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation347]);
MFFloat348 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat348]);
MFRotation349 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation349]);
SFRotation350 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation350]);
MFFloat351 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat351]);
MFRotation352 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation352]);
SFRotation353 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation353]);
MFFloat354 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_knee_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat354]);
MFRotation355 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_knee_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation355]);
SFRotation356 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_knee_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation356]);
end;

procedure InitHAnimBehaviorPrototypesPart18;
begin

MFFloat357 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_metatarsal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat357]);
MFRotation358 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_metatarsal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation358]);
SFRotation359 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_metatarsal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation359]);
MFFloat360 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middistal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat360]);
MFRotation361 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middistal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation361]);
SFRotation362 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middistal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation362]);
MFFloat363 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat363]);
MFRotation364 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation364]);
SFRotation365 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation365]);
MFFloat366 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat366]);
MFRotation367 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation367]);
SFRotation368 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation368]);
MFFloat369 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat369]);
MFRotation370 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation370]);
SFRotation371 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation371]);
MFFloat372 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat372]);
MFRotation373 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation373]);
SFRotation374 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation374]);
MFFloat375 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat375]);
MFRotation376 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation376]);
end;

procedure InitHAnimBehaviorPrototypesPart19;
begin

SFRotation377 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation377]);
MFFloat378 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat378]);
MFRotation379 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation379]);
SFRotation380 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation380]);
MFFloat381 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat381]);
MFRotation382 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation382]);
SFRotation383 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation383]);
MFFloat384 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat384]);
MFRotation385 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation385]);
SFRotation386 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation386]);
MFFloat387 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midproximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat387]);
MFRotation388 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midproximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation388]);
SFRotation389 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midproximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation389]);
MFFloat390 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midtarsal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat390]);
MFRotation391 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midtarsal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation391]);
SFRotation392 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_midtarsal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation392]);
MFFloat393 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat393]);
MFRotation394 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation394]);
SFRotation395 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation395]);
MFFloat396 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat396]);
end;

procedure InitHAnimBehaviorPrototypesPart20;
begin

MFRotation397 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation397]);
SFRotation398 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation398]);
MFFloat399 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat399]);
MFRotation400 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation400]);
SFRotation401 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation401]);
MFFloat402 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat402]);
MFRotation403 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation403]);
SFRotation404 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation404]);
MFFloat405 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat405]);
MFRotation406 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation406]);
SFRotation407 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation407]);
MFFloat408 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat408]);
MFRotation409 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation409]);
SFRotation410 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation410]);
MFFloat411 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat411]);
MFRotation412 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation412]);
SFRotation413 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation413]);
MFFloat414 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat414]);
MFRotation415 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation415]);
SFRotation416 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation416]);
end;

procedure InitHAnimBehaviorPrototypesPart21;
begin

MFFloat417 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat417]);
MFRotation418 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring0_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation418]);
SFRotation419 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation419]);
MFFloat420 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat420]);
MFRotation421 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation421]);
SFRotation422 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation422]);
MFFloat423 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat423]);
MFRotation424 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation424]);
SFRotation425 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation425]);
MFFloat426 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat426]);
MFRotation427 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation427]);
SFRotation428 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation428]);
MFFloat429 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat429]);
MFRotation430 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation430]);
SFRotation431 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation431]);
MFFloat432 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat432]);
MFRotation433 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation433]);
SFRotation434 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation434]);
MFFloat435 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat435]);
MFRotation436 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation436]);
end;

procedure InitHAnimBehaviorPrototypesPart22;
begin

SFRotation437 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation437]);
MFFloat438 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat438]);
MFRotation439 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation439]);
SFRotation440 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation440]);
MFFloat441 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_scapula_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat441]);
MFRotation442 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_scapula_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation442]);
SFRotation443 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_scapula_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation443]);
MFFloat444 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_shoulder_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat444]);
MFRotation445 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_shoulder_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation445]);
SFRotation446 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_shoulder_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation446]);
MFFloat447 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_sternoclavicular_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat447]);
MFRotation448 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_sternoclavicular_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation448]);
SFRotation449 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_sternoclavicular_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation449]);
MFFloat450 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_subtalar_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat450]);
MFRotation451 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_subtalar_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation451]);
SFRotation452 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_subtalar_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation452]);
MFFloat453 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thigh_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat453]);
MFRotation454 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thigh_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation454]);
SFRotation455 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thigh_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation455]);
MFFloat456 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat456]);
end;

procedure InitHAnimBehaviorPrototypesPart23;
begin

MFRotation457 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation457]);
SFRotation458 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation458]);
MFFloat459 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat459]);
MFRotation460 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation460]);
SFRotation461 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation461]);
MFFloat462 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat462]);
MFRotation463 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation463]);
SFRotation464 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation464]);
MFFloat465 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat465]);
MFRotation466 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation466]);
SFRotation467 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation467]);
MFFloat468 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_metacarpal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat468]);
MFRotation469 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_metacarpal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation469]);
SFRotation470 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_metacarpal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation470]);
MFFloat471 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_proximal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat471]);
MFRotation472 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation472]);
SFRotation473 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation473]);
MFFloat474 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_upperarm_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat474]);
MFRotation475 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_upperarm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation475]);
SFRotation476 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_upperarm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation476]);
end;

procedure InitHAnimBehaviorPrototypesPart24;
begin

MFFloat477 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_wrist_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat477]);
MFRotation478 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_wrist_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation478]);
SFRotation479 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_wrist_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation479]);
MFFloat480 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'sacroiliac_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat480]);
MFRotation481 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'sacroiliac_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation481]);
SFRotation482 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'sacroiliac_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation482]);
MFFloat483 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'sacrum_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat483]);
MFRotation484 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'sacrum_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation484]);
SFRotation485 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'sacrum_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation485]);
MFFloat486 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'skull_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat486]);
MFRotation487 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'skull_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation487]);
SFRotation488 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'skull_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation488]);
MFFloat489 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'skullbase_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat489]);
MFRotation490 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'skullbase_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation490]);
SFRotation491 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'skullbase_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation491]);
MFFloat492 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't10_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat492]);
MFRotation493 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't10_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation493]);
SFRotation494 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't10_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation494]);
MFFloat495 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't11_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat495]);
MFRotation496 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't11_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation496]);
end;

procedure InitHAnimBehaviorPrototypesPart25;
begin

SFRotation497 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't11_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation497]);
MFFloat498 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't12_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat498]);
MFRotation499 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't12_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation499]);
SFRotation500 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't12_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation500]);
MFFloat501 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat501]);
MFRotation502 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation502]);
SFRotation503 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation503]);
MFFloat504 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat504]);
MFRotation505 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation505]);
SFRotation506 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation506]);
MFFloat507 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat507]);
MFRotation508 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation508]);
SFRotation509 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation509]);
MFFloat510 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat510]);
MFRotation511 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation511]);
SFRotation512 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't4_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation512]);
MFFloat513 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't5_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat513]);
MFRotation514 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation514]);
SFRotation515 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation515]);
MFFloat516 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't6_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat516]);
end;

procedure InitHAnimBehaviorPrototypesPart26;
begin

MFRotation517 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't6_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation517]);
SFRotation518 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't6_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation518]);
MFFloat519 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't7_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat519]);
MFRotation520 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't7_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation520]);
SFRotation521 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't7_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation521]);
MFFloat522 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't8_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat522]);
MFRotation523 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't8_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation523]);
SFRotation524 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't8_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation524]);
MFFloat525 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't9_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat525]);
MFRotation526 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't9_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation526]);
SFRotation527 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't9_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation527]);
MFFloat528 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'temporomandibular_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat528]);
MFRotation529 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'temporomandibular_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation529]);
SFRotation530 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'temporomandibular_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation530]);
MFFloat531 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat531]);
MFRotation532 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation532]);
SFRotation533 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation533]);
MFFloat534 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat534]);
MFRotation535 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation535]);
SFRotation536 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation536]);
end;

procedure InitHAnimBehaviorPrototypesPart27;
begin

MFFloat537 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat537]);
MFRotation538 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation538]);
SFRotation539 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation539]);
MFFloat540 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat540]);
MFRotation541 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation541]);
SFRotation542 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc4_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation542]);
MFFloat543 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc5_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat543]);
MFRotation544 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation544]);
SFRotation545 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation545]);
MFFloat546 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc6_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat546]);
MFRotation547 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc6_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation547]);
SFRotation548 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc6_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation548]);
MFFloat549 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc7_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat549]);
MFRotation550 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc7_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation550]);
SFRotation551 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc7_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation551]);
MFFloat552 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat552]);
MFRotation553 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation553]);
SFRotation554 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation554]);
MFFloat555 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat555]);
MFRotation556 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation556]);
end;

procedure InitHAnimBehaviorPrototypesPart28;
begin

SFRotation557 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation557]);
MFFloat558 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat558]);
MFRotation559 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation559]);
SFRotation560 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation560]);
MFFloat561 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat561]);
MFRotation562 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation562]);
SFRotation563 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl4_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation563]);
MFFloat564 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl5_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat564]);
MFRotation565 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation565]);
SFRotation566 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation566]);
MFFloat567 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt10_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat567]);
MFRotation568 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt10_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation568]);
SFRotation569 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt10_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation569]);
MFFloat570 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt11_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat570]);
MFRotation571 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt11_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation571]);
SFRotation572 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt11_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation572]);
MFFloat573 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt12_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat573]);
MFRotation574 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt12_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation574]);
SFRotation575 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt12_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation575]);
MFFloat576 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat576]);
end;

procedure InitHAnimBehaviorPrototypesPart29;
begin

MFRotation577 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation577]);
SFRotation578 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation578]);
MFFloat579 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat579]);
MFRotation580 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation580]);
SFRotation581 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation581]);
MFFloat582 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt3_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat582]);
MFRotation583 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt3_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation583]);
SFRotation584 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt3_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation584]);
MFFloat585 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat585]);
MFRotation586 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation586]);
SFRotation587 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt4_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation587]);
MFFloat588 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt5_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat588]);
MFRotation589 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation589]);
SFRotation590 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation590]);
MFFloat591 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt6_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat591]);
MFRotation592 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt6_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation592]);
SFRotation593 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt6_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation593]);
MFFloat594 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt7_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat594]);
MFRotation595 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt7_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation595]);
SFRotation596 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt7_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation596]);
end;

procedure InitHAnimBehaviorPrototypesPart30;
begin

MFFloat597 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt8_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat597]);
MFRotation598 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt8_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation598]);
SFRotation599 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt8_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation599]);
MFFloat600 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt9_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat600]);
MFRotation601 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt9_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation601]);
SFRotation602 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt9_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation602]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype20.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration21]);
X3DPrototype603 := TX3DPrototype.Create;
{ design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators }
TimeSensor604 := TTimeSensorNode.Create;
IS605 := TIS.Create;
connect606 := Tconnect.Create;
connect606.NodeField := 'enabled';
connect606.ProtoField := 'enabled';
{ METHOD .Connect }
IS605.Connect := connect606;
connect607 := Tconnect.Create;
connect607.NodeField := 'cycleInterval';
connect607.ProtoField := 'cycleInterval';
{ METHOD .Connect }
IS605.Connect := connect607;
connect608 := Tconnect.Create;
connect608.NodeField := 'loop';
connect608.ProtoField := 'loop';
{ METHOD .Connect }
IS605.Connect := connect608;
connect609 := Tconnect.Create;
connect609.NodeField := 'startTime';
connect609.ProtoField := 'startTime';
{ METHOD .Connect }
IS605.Connect := connect609;
connect610 := Tconnect.Create;
connect610.NodeField := 'stopTime';
connect610.ProtoField := 'stopTime';
{ METHOD .Connect }
IS605.Connect := connect610;
connect611 := Tconnect.Create;
connect611.NodeField := 'pauseTime';
connect611.ProtoField := 'pauseTime';
{ METHOD .Connect }
IS605.Connect := connect611;
end;

procedure InitHAnimBehaviorPrototypesPart31;
begin

connect612 := Tconnect.Create;
connect612.NodeField := 'resumeTime';
connect612.ProtoField := 'resumeTime';
{ METHOD .Connect }
IS605.Connect := connect612;
connect613 := Tconnect.Create;
connect613.NodeField := 'cycleTime';
connect613.ProtoField := 'cycleTime';
{ METHOD .Connect }
IS605.Connect := connect613;
connect614 := Tconnect.Create;
connect614.NodeField := 'isActive';
connect614.ProtoField := 'isActive';
{ METHOD .Connect }
IS605.Connect := connect614;
connect615 := Tconnect.Create;
connect615.NodeField := 'isPaused';
connect615.ProtoField := 'isPaused';
{ METHOD .Connect }
IS605.Connect := connect615;
connect616 := Tconnect.Create;
connect616.NodeField := 'elapsedTime';
connect616.ProtoField := 'elapsedTime';
{ METHOD .Connect }
IS605.Connect := connect616;
connect617 := Tconnect.Create;
connect617.NodeField := 'time';
connect617.ProtoField := 'time';
{ METHOD .Connect }
IS605.Connect := connect617;
connect618 := Tconnect.Create;
connect618.NodeField := 'fraction_changed';
connect618.ProtoField := 'fraction_changed';
{ METHOD .Connect }
IS605.Connect := connect618;
{ METHOD .IS }
TimeSensor604.IS := IS605;
{ METHOD .AddTimeSensor }
X3DPrototype603.AddTimeSensor([TimeSensor604]);
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Switch619 := TSwitchNode.Create;
Switch619.WhichChoice := -1;
IS620 := TIS.Create;
connect621 := Tconnect.Create;
connect621.NodeField := 'whichChoice';
connect621.ProtoField := 'supportedLOA';
{ METHOD .Connect }
IS620.Connect := connect621;
{ METHOD .IS }
Switch619.IS := IS620;
{ METHOD .AddSwitch }
X3DPrototype603.AddSwitch([Switch619]);
PositionInterpolator622 := TPositionInterpolatorNode.Create;
end;

procedure InitHAnimBehaviorPrototypesPart32;
begin

IS623 := TIS.Create;
connect624 := Tconnect.Create;
connect624.NodeField := 'key';
connect624.ProtoField := 'HumanoidRoot_translation_key';
{ METHOD .Connect }
IS623.Connect := connect624;
connect625 := Tconnect.Create;
connect625.NodeField := 'keyValue';
connect625.ProtoField := 'HumanoidRoot_translation_keyValue';
{ METHOD .Connect }
IS623.Connect := connect625;
connect626 := Tconnect.Create;
connect626.NodeField := 'value_changed';
connect626.ProtoField := 'HumanoidRoot_translation_changed';
{ METHOD .Connect }
IS623.Connect := connect626;
{ METHOD .IS }
PositionInterpolator622.IS := IS623;
{ METHOD .AddPositionInterpolator }
X3DPrototype603.AddPositionInterpolator([PositionInterpolator622]);
{ Original "BehaviorClock.EventFraction_changed TO HumanoidRootPI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO HumanoidRootPI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, PositionInterpolator622.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator628 := TOrientationInterpolatorNode.Create;
IS629 := TIS.Create;
connect630 := Tconnect.Create;
connect630.NodeField := 'key';
connect630.ProtoField := 'HumanoidRoot_rotation_key';
{ METHOD .Connect }
IS629.Connect := connect630;
connect631 := Tconnect.Create;
connect631.NodeField := 'keyValue';
connect631.ProtoField := 'HumanoidRoot_rotation_keyValue';
{ METHOD .Connect }
IS629.Connect := connect631;
connect632 := Tconnect.Create;
connect632.NodeField := 'value_changed';
connect632.ProtoField := 'HumanoidRoot_rotation_changed';
{ METHOD .Connect }
IS629.Connect := connect632;
{ METHOD .IS }
OrientationInterpolator628.IS := IS629;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator628]);
{ Original "BehaviorClock.EventFraction_changed TO HumanoidRootOI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO HumanoidRootOI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator628.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator634 := TOrientationInterpolatorNode.Create;
IS635 := TIS.Create;
connect636 := Tconnect.Create;
connect636.NodeField := 'key';
connect636.ProtoField := 'c1_key';
{ METHOD .Connect }
IS635.Connect := connect636;
connect637 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart33;
begin

connect637.NodeField := 'keyValue';
connect637.ProtoField := 'c1_keyValue';
{ METHOD .Connect }
IS635.Connect := connect637;
connect638 := Tconnect.Create;
connect638.NodeField := 'value_changed';
connect638.ProtoField := 'c1_changed';
{ METHOD .Connect }
IS635.Connect := connect638;
{ METHOD .IS }
OrientationInterpolator634.IS := IS635;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator634]);
{ Original "BehaviorClock.EventFraction_changed TO c1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator634.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator640 := TOrientationInterpolatorNode.Create;
IS641 := TIS.Create;
connect642 := Tconnect.Create;
connect642.NodeField := 'key';
connect642.ProtoField := 'c2_key';
{ METHOD .Connect }
IS641.Connect := connect642;
connect643 := Tconnect.Create;
connect643.NodeField := 'keyValue';
connect643.ProtoField := 'c2_keyValue';
{ METHOD .Connect }
IS641.Connect := connect643;
connect644 := Tconnect.Create;
connect644.NodeField := 'value_changed';
connect644.ProtoField := 'c2_changed';
{ METHOD .Connect }
IS641.Connect := connect644;
{ METHOD .IS }
OrientationInterpolator640.IS := IS641;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator640]);
{ Original "BehaviorClock.EventFraction_changed TO c2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator640.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator646 := TOrientationInterpolatorNode.Create;
IS647 := TIS.Create;
connect648 := Tconnect.Create;
connect648.NodeField := 'key';
connect648.ProtoField := 'c3_key';
{ METHOD .Connect }
IS647.Connect := connect648;
connect649 := Tconnect.Create;
connect649.NodeField := 'keyValue';
connect649.ProtoField := 'c3_keyValue';
{ METHOD .Connect }
IS647.Connect := connect649;
connect650 := Tconnect.Create;
connect650.NodeField := 'value_changed';
connect650.ProtoField := 'c3_changed';
end;

procedure InitHAnimBehaviorPrototypesPart34;
begin

{ METHOD .Connect }
IS647.Connect := connect650;
{ METHOD .IS }
OrientationInterpolator646.IS := IS647;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator646]);
{ Original "BehaviorClock.EventFraction_changed TO c3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator646.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator652 := TOrientationInterpolatorNode.Create;
IS653 := TIS.Create;
connect654 := Tconnect.Create;
connect654.NodeField := 'key';
connect654.ProtoField := 'c4_key';
{ METHOD .Connect }
IS653.Connect := connect654;
connect655 := Tconnect.Create;
connect655.NodeField := 'keyValue';
connect655.ProtoField := 'c4_keyValue';
{ METHOD .Connect }
IS653.Connect := connect655;
connect656 := Tconnect.Create;
connect656.NodeField := 'value_changed';
connect656.ProtoField := 'c4_changed';
{ METHOD .Connect }
IS653.Connect := connect656;
{ METHOD .IS }
OrientationInterpolator652.IS := IS653;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator652]);
{ Original "BehaviorClock.EventFraction_changed TO c4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator652.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator658 := TOrientationInterpolatorNode.Create;
IS659 := TIS.Create;
connect660 := Tconnect.Create;
connect660.NodeField := 'key';
connect660.ProtoField := 'c5_key';
{ METHOD .Connect }
IS659.Connect := connect660;
connect661 := Tconnect.Create;
connect661.NodeField := 'keyValue';
connect661.ProtoField := 'c5_keyValue';
{ METHOD .Connect }
IS659.Connect := connect661;
connect662 := Tconnect.Create;
connect662.NodeField := 'value_changed';
connect662.ProtoField := 'c5_changed';
{ METHOD .Connect }
IS659.Connect := connect662;
{ METHOD .IS }
OrientationInterpolator658.IS := IS659;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator658]);
{ Original "BehaviorClock.EventFraction_changed TO c5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator658.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator664 := TOrientationInterpolatorNode.Create;
IS665 := TIS.Create;
end;

procedure InitHAnimBehaviorPrototypesPart35;
begin

connect666 := Tconnect.Create;
connect666.NodeField := 'key';
connect666.ProtoField := 'c6_key';
{ METHOD .Connect }
IS665.Connect := connect666;
connect667 := Tconnect.Create;
connect667.NodeField := 'keyValue';
connect667.ProtoField := 'c6_keyValue';
{ METHOD .Connect }
IS665.Connect := connect667;
connect668 := Tconnect.Create;
connect668.NodeField := 'value_changed';
connect668.ProtoField := 'c6_changed';
{ METHOD .Connect }
IS665.Connect := connect668;
{ METHOD .IS }
OrientationInterpolator664.IS := IS665;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator664]);
{ Original "BehaviorClock.EventFraction_changed TO c6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator664.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator670 := TOrientationInterpolatorNode.Create;
IS671 := TIS.Create;
connect672 := Tconnect.Create;
connect672.NodeField := 'key';
connect672.ProtoField := 'c7_key';
{ METHOD .Connect }
IS671.Connect := connect672;
connect673 := Tconnect.Create;
connect673.NodeField := 'keyValue';
connect673.ProtoField := 'c7_keyValue';
{ METHOD .Connect }
IS671.Connect := connect673;
connect674 := Tconnect.Create;
connect674.NodeField := 'value_changed';
connect674.ProtoField := 'c7_changed';
{ METHOD .Connect }
IS671.Connect := connect674;
{ METHOD .IS }
OrientationInterpolator670.IS := IS671;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator670]);
{ Original "BehaviorClock.EventFraction_changed TO c7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator670.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator676 := TOrientationInterpolatorNode.Create;
IS677 := TIS.Create;
connect678 := Tconnect.Create;
connect678.NodeField := 'key';
connect678.ProtoField := 'jaw_key';
{ METHOD .Connect }
IS677.Connect := connect678;
connect679 := Tconnect.Create;
connect679.NodeField := 'keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart36;
begin

connect679.ProtoField := 'jaw_keyValue';
{ METHOD .Connect }
IS677.Connect := connect679;
connect680 := Tconnect.Create;
connect680.NodeField := 'value_changed';
connect680.ProtoField := 'jaw_changed';
{ METHOD .Connect }
IS677.Connect := connect680;
{ METHOD .IS }
OrientationInterpolator676.IS := IS677;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator676]);
{ Original "BehaviorClock.EventFraction_changed TO jaw_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO jaw_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator676.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator682 := TOrientationInterpolatorNode.Create;
IS683 := TIS.Create;
connect684 := Tconnect.Create;
connect684.NodeField := 'key';
connect684.ProtoField := 'l1_key';
{ METHOD .Connect }
IS683.Connect := connect684;
connect685 := Tconnect.Create;
connect685.NodeField := 'keyValue';
connect685.ProtoField := 'l1_keyValue';
{ METHOD .Connect }
IS683.Connect := connect685;
connect686 := Tconnect.Create;
connect686.NodeField := 'value_changed';
connect686.ProtoField := 'l1_changed';
{ METHOD .Connect }
IS683.Connect := connect686;
{ METHOD .IS }
OrientationInterpolator682.IS := IS683;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator682]);
{ Original "BehaviorClock.EventFraction_changed TO l1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator682.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator688 := TOrientationInterpolatorNode.Create;
IS689 := TIS.Create;
connect690 := Tconnect.Create;
connect690.NodeField := 'key';
connect690.ProtoField := 'l2_key';
{ METHOD .Connect }
IS689.Connect := connect690;
connect691 := Tconnect.Create;
connect691.NodeField := 'keyValue';
connect691.ProtoField := 'l2_keyValue';
{ METHOD .Connect }
IS689.Connect := connect691;
connect692 := Tconnect.Create;
connect692.NodeField := 'value_changed';
connect692.ProtoField := 'l2_changed';
{ METHOD .Connect }
IS689.Connect := connect692;
end;

procedure InitHAnimBehaviorPrototypesPart37;
begin

{ METHOD .IS }
OrientationInterpolator688.IS := IS689;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator688]);
{ Original "BehaviorClock.EventFraction_changed TO l2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator688.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator694 := TOrientationInterpolatorNode.Create;
IS695 := TIS.Create;
connect696 := Tconnect.Create;
connect696.NodeField := 'key';
connect696.ProtoField := 'l3_key';
{ METHOD .Connect }
IS695.Connect := connect696;
connect697 := Tconnect.Create;
connect697.NodeField := 'keyValue';
connect697.ProtoField := 'l3_keyValue';
{ METHOD .Connect }
IS695.Connect := connect697;
connect698 := Tconnect.Create;
connect698.NodeField := 'value_changed';
connect698.ProtoField := 'l3_changed';
{ METHOD .Connect }
IS695.Connect := connect698;
{ METHOD .IS }
OrientationInterpolator694.IS := IS695;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator694]);
{ Original "BehaviorClock.EventFraction_changed TO l3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator694.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator700 := TOrientationInterpolatorNode.Create;
IS701 := TIS.Create;
connect702 := Tconnect.Create;
connect702.NodeField := 'key';
connect702.ProtoField := 'l4_key';
{ METHOD .Connect }
IS701.Connect := connect702;
connect703 := Tconnect.Create;
connect703.NodeField := 'keyValue';
connect703.ProtoField := 'l4_keyValue';
{ METHOD .Connect }
IS701.Connect := connect703;
connect704 := Tconnect.Create;
connect704.NodeField := 'value_changed';
connect704.ProtoField := 'l4_changed';
{ METHOD .Connect }
IS701.Connect := connect704;
{ METHOD .IS }
OrientationInterpolator700.IS := IS701;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator700]);
{ Original "BehaviorClock.EventFraction_changed TO l4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator700.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator706 := TOrientationInterpolatorNode.Create;
IS707 := TIS.Create;
connect708 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart38;
begin

connect708.NodeField := 'key';
connect708.ProtoField := 'l5_key';
{ METHOD .Connect }
IS707.Connect := connect708;
connect709 := Tconnect.Create;
connect709.NodeField := 'keyValue';
connect709.ProtoField := 'l5_keyValue';
{ METHOD .Connect }
IS707.Connect := connect709;
connect710 := Tconnect.Create;
connect710.NodeField := 'value_changed';
connect710.ProtoField := 'l5_changed';
{ METHOD .Connect }
IS707.Connect := connect710;
{ METHOD .IS }
OrientationInterpolator706.IS := IS707;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator706]);
{ Original "BehaviorClock.EventFraction_changed TO l5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator706.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator712 := TOrientationInterpolatorNode.Create;
IS713 := TIS.Create;
connect714 := Tconnect.Create;
connect714.NodeField := 'key';
connect714.ProtoField := 'l_acromioclavicular_key';
{ METHOD .Connect }
IS713.Connect := connect714;
connect715 := Tconnect.Create;
connect715.NodeField := 'keyValue';
connect715.ProtoField := 'l_acromioclavicular_keyValue';
{ METHOD .Connect }
IS713.Connect := connect715;
connect716 := Tconnect.Create;
connect716.NodeField := 'value_changed';
connect716.ProtoField := 'l_acromioclavicular_changed';
{ METHOD .Connect }
IS713.Connect := connect716;
{ METHOD .IS }
OrientationInterpolator712.IS := IS713;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator712]);
{ Original "BehaviorClock.EventFraction_changed TO l_acromioclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_acromioclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator712.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator718 := TOrientationInterpolatorNode.Create;
IS719 := TIS.Create;
connect720 := Tconnect.Create;
connect720.NodeField := 'key';
connect720.ProtoField := 'l_ankle_key';
{ METHOD .Connect }
IS719.Connect := connect720;
connect721 := Tconnect.Create;
connect721.NodeField := 'keyValue';
connect721.ProtoField := 'l_ankle_keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart39;
begin

{ METHOD .Connect }
IS719.Connect := connect721;
connect722 := Tconnect.Create;
connect722.NodeField := 'value_changed';
connect722.ProtoField := 'l_ankle_changed';
{ METHOD .Connect }
IS719.Connect := connect722;
{ METHOD .IS }
OrientationInterpolator718.IS := IS719;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator718]);
{ Original "BehaviorClock.EventFraction_changed TO l_ankle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ankle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator718.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator724 := TOrientationInterpolatorNode.Create;
IS725 := TIS.Create;
connect726 := Tconnect.Create;
connect726.NodeField := 'key';
connect726.ProtoField := 'l_calf_key';
{ METHOD .Connect }
IS725.Connect := connect726;
connect727 := Tconnect.Create;
connect727.NodeField := 'keyValue';
connect727.ProtoField := 'l_calf_keyValue';
{ METHOD .Connect }
IS725.Connect := connect727;
connect728 := Tconnect.Create;
connect728.NodeField := 'value_changed';
connect728.ProtoField := 'l_calf_changed';
{ METHOD .Connect }
IS725.Connect := connect728;
{ METHOD .IS }
OrientationInterpolator724.IS := IS725;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator724]);
{ Original "BehaviorClock.EventFraction_changed TO l_calf_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_calf_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator724.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator730 := TOrientationInterpolatorNode.Create;
IS731 := TIS.Create;
connect732 := Tconnect.Create;
connect732.NodeField := 'key';
connect732.ProtoField := 'l_clavicle_key';
{ METHOD .Connect }
IS731.Connect := connect732;
connect733 := Tconnect.Create;
connect733.NodeField := 'keyValue';
connect733.ProtoField := 'l_clavicle_keyValue';
{ METHOD .Connect }
IS731.Connect := connect733;
connect734 := Tconnect.Create;
connect734.NodeField := 'value_changed';
connect734.ProtoField := 'l_clavicle_changed';
{ METHOD .Connect }
IS731.Connect := connect734;
{ METHOD .IS }
OrientationInterpolator730.IS := IS731;
end;

procedure InitHAnimBehaviorPrototypesPart40;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator730]);
{ Original "BehaviorClock.EventFraction_changed TO l_clavicle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_clavicle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator730.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator736 := TOrientationInterpolatorNode.Create;
IS737 := TIS.Create;
connect738 := Tconnect.Create;
connect738.NodeField := 'key';
connect738.ProtoField := 'l_elbow_key';
{ METHOD .Connect }
IS737.Connect := connect738;
connect739 := Tconnect.Create;
connect739.NodeField := 'keyValue';
connect739.ProtoField := 'l_elbow_keyValue';
{ METHOD .Connect }
IS737.Connect := connect739;
connect740 := Tconnect.Create;
connect740.NodeField := 'value_changed';
connect740.ProtoField := 'l_elbow_changed';
{ METHOD .Connect }
IS737.Connect := connect740;
{ METHOD .IS }
OrientationInterpolator736.IS := IS737;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator736]);
{ Original "BehaviorClock.EventFraction_changed TO l_elbow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_elbow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator736.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator742 := TOrientationInterpolatorNode.Create;
IS743 := TIS.Create;
connect744 := Tconnect.Create;
connect744.NodeField := 'key';
connect744.ProtoField := 'l_eyeball_key';
{ METHOD .Connect }
IS743.Connect := connect744;
connect745 := Tconnect.Create;
connect745.NodeField := 'keyValue';
connect745.ProtoField := 'l_eyeball_keyValue';
{ METHOD .Connect }
IS743.Connect := connect745;
connect746 := Tconnect.Create;
connect746.NodeField := 'value_changed';
connect746.ProtoField := 'l_eyeball_changed';
{ METHOD .Connect }
IS743.Connect := connect746;
{ METHOD .IS }
OrientationInterpolator742.IS := IS743;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator742]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyeball_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyeball_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator742.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator748 := TOrientationInterpolatorNode.Create;
IS749 := TIS.Create;
connect750 := Tconnect.Create;
connect750.NodeField := 'key';
end;

procedure InitHAnimBehaviorPrototypesPart41;
begin

connect750.ProtoField := 'l_eyeball_joint_key';
{ METHOD .Connect }
IS749.Connect := connect750;
connect751 := Tconnect.Create;
connect751.NodeField := 'keyValue';
connect751.ProtoField := 'l_eyeball_joint_keyValue';
{ METHOD .Connect }
IS749.Connect := connect751;
connect752 := Tconnect.Create;
connect752.NodeField := 'value_changed';
connect752.ProtoField := 'l_eyeball_joint_changed';
{ METHOD .Connect }
IS749.Connect := connect752;
{ METHOD .IS }
OrientationInterpolator748.IS := IS749;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator748]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyeball_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyeball_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator748.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator754 := TOrientationInterpolatorNode.Create;
IS755 := TIS.Create;
connect756 := Tconnect.Create;
connect756.NodeField := 'key';
connect756.ProtoField := 'l_eyebrow_key';
{ METHOD .Connect }
IS755.Connect := connect756;
connect757 := Tconnect.Create;
connect757.NodeField := 'keyValue';
connect757.ProtoField := 'l_eyebrow_keyValue';
{ METHOD .Connect }
IS755.Connect := connect757;
connect758 := Tconnect.Create;
connect758.NodeField := 'value_changed';
connect758.ProtoField := 'l_eyebrow_changed';
{ METHOD .Connect }
IS755.Connect := connect758;
{ METHOD .IS }
OrientationInterpolator754.IS := IS755;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator754]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyebrow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyebrow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator754.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator760 := TOrientationInterpolatorNode.Create;
IS761 := TIS.Create;
connect762 := Tconnect.Create;
connect762.NodeField := 'key';
connect762.ProtoField := 'l_eyebrow_joint_key';
{ METHOD .Connect }
IS761.Connect := connect762;
connect763 := Tconnect.Create;
connect763.NodeField := 'keyValue';
connect763.ProtoField := 'l_eyebrow_joint_keyValue';
{ METHOD .Connect }
IS761.Connect := connect763;
end;

procedure InitHAnimBehaviorPrototypesPart42;
begin

connect764 := Tconnect.Create;
connect764.NodeField := 'value_changed';
connect764.ProtoField := 'l_eyebrow_joint_changed';
{ METHOD .Connect }
IS761.Connect := connect764;
{ METHOD .IS }
OrientationInterpolator760.IS := IS761;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator760]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyebrow_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyebrow_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator760.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator766 := TOrientationInterpolatorNode.Create;
IS767 := TIS.Create;
connect768 := Tconnect.Create;
connect768.NodeField := 'key';
connect768.ProtoField := 'l_eyelid_key';
{ METHOD .Connect }
IS767.Connect := connect768;
connect769 := Tconnect.Create;
connect769.NodeField := 'keyValue';
connect769.ProtoField := 'l_eyelid_keyValue';
{ METHOD .Connect }
IS767.Connect := connect769;
connect770 := Tconnect.Create;
connect770.NodeField := 'value_changed';
connect770.ProtoField := 'l_eyelid_changed';
{ METHOD .Connect }
IS767.Connect := connect770;
{ METHOD .IS }
OrientationInterpolator766.IS := IS767;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator766]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyelid_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyelid_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator766.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator772 := TOrientationInterpolatorNode.Create;
IS773 := TIS.Create;
connect774 := Tconnect.Create;
connect774.NodeField := 'key';
connect774.ProtoField := 'l_eyelid_joint_key';
{ METHOD .Connect }
IS773.Connect := connect774;
connect775 := Tconnect.Create;
connect775.NodeField := 'keyValue';
connect775.ProtoField := 'l_eyelid_joint_keyValue';
{ METHOD .Connect }
IS773.Connect := connect775;
connect776 := Tconnect.Create;
connect776.NodeField := 'value_changed';
connect776.ProtoField := 'l_eyelid_joint_changed';
{ METHOD .Connect }
IS773.Connect := connect776;
{ METHOD .IS }
OrientationInterpolator772.IS := IS773;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator772]);
end;

procedure InitHAnimBehaviorPrototypesPart43;
begin

{ Original "BehaviorClock.EventFraction_changed TO l_eyelid_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyelid_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator772.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator778 := TOrientationInterpolatorNode.Create;
IS779 := TIS.Create;
connect780 := Tconnect.Create;
connect780.NodeField := 'key';
connect780.ProtoField := 'l_forearm_key';
{ METHOD .Connect }
IS779.Connect := connect780;
connect781 := Tconnect.Create;
connect781.NodeField := 'keyValue';
connect781.ProtoField := 'l_forearm_keyValue';
{ METHOD .Connect }
IS779.Connect := connect781;
connect782 := Tconnect.Create;
connect782.NodeField := 'value_changed';
connect782.ProtoField := 'l_forearm_changed';
{ METHOD .Connect }
IS779.Connect := connect782;
{ METHOD .IS }
OrientationInterpolator778.IS := IS779;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator778]);
{ Original "BehaviorClock.EventFraction_changed TO l_forearm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_forearm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator778.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator784 := TOrientationInterpolatorNode.Create;
IS785 := TIS.Create;
connect786 := Tconnect.Create;
connect786.NodeField := 'key';
connect786.ProtoField := 'l_forefoot_key';
{ METHOD .Connect }
IS785.Connect := connect786;
connect787 := Tconnect.Create;
connect787.NodeField := 'keyValue';
connect787.ProtoField := 'l_forefoot_keyValue';
{ METHOD .Connect }
IS785.Connect := connect787;
connect788 := Tconnect.Create;
connect788.NodeField := 'value_changed';
connect788.ProtoField := 'l_forefoot_changed';
{ METHOD .Connect }
IS785.Connect := connect788;
{ METHOD .IS }
OrientationInterpolator784.IS := IS785;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator784]);
{ Original "BehaviorClock.EventFraction_changed TO l_forefoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_forefoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator784.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator790 := TOrientationInterpolatorNode.Create;
IS791 := TIS.Create;
connect792 := Tconnect.Create;
connect792.NodeField := 'key';
connect792.ProtoField := 'l_hand_key';
end;

procedure InitHAnimBehaviorPrototypesPart44;
begin

{ METHOD .Connect }
IS791.Connect := connect792;
connect793 := Tconnect.Create;
connect793.NodeField := 'keyValue';
connect793.ProtoField := 'l_hand_keyValue';
{ METHOD .Connect }
IS791.Connect := connect793;
connect794 := Tconnect.Create;
connect794.NodeField := 'value_changed';
connect794.ProtoField := 'l_hand_changed';
{ METHOD .Connect }
IS791.Connect := connect794;
{ METHOD .IS }
OrientationInterpolator790.IS := IS791;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator790]);
{ Original "BehaviorClock.EventFraction_changed TO l_hand_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_hand_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator790.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator796 := TOrientationInterpolatorNode.Create;
IS797 := TIS.Create;
connect798 := Tconnect.Create;
connect798.NodeField := 'key';
connect798.ProtoField := 'l_hindfoot_key';
{ METHOD .Connect }
IS797.Connect := connect798;
connect799 := Tconnect.Create;
connect799.NodeField := 'keyValue';
connect799.ProtoField := 'l_hindfoot_keyValue';
{ METHOD .Connect }
IS797.Connect := connect799;
connect800 := Tconnect.Create;
connect800.NodeField := 'value_changed';
connect800.ProtoField := 'l_hindfoot_changed';
{ METHOD .Connect }
IS797.Connect := connect800;
{ METHOD .IS }
OrientationInterpolator796.IS := IS797;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator796]);
{ Original "BehaviorClock.EventFraction_changed TO l_hindfoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_hindfoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator796.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator802 := TOrientationInterpolatorNode.Create;
IS803 := TIS.Create;
connect804 := Tconnect.Create;
connect804.NodeField := 'key';
connect804.ProtoField := 'l_hip_key';
{ METHOD .Connect }
IS803.Connect := connect804;
connect805 := Tconnect.Create;
connect805.NodeField := 'keyValue';
connect805.ProtoField := 'l_hip_keyValue';
{ METHOD .Connect }
IS803.Connect := connect805;
connect806 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart45;
begin

connect806.NodeField := 'value_changed';
connect806.ProtoField := 'l_hip_changed';
{ METHOD .Connect }
IS803.Connect := connect806;
{ METHOD .IS }
OrientationInterpolator802.IS := IS803;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator802]);
{ Original "BehaviorClock.EventFraction_changed TO l_hip_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_hip_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator802.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator808 := TOrientationInterpolatorNode.Create;
IS809 := TIS.Create;
connect810 := Tconnect.Create;
connect810.NodeField := 'key';
connect810.ProtoField := 'l_index0_key';
{ METHOD .Connect }
IS809.Connect := connect810;
connect811 := Tconnect.Create;
connect811.NodeField := 'keyValue';
connect811.ProtoField := 'l_index0_keyValue';
{ METHOD .Connect }
IS809.Connect := connect811;
connect812 := Tconnect.Create;
connect812.NodeField := 'value_changed';
connect812.ProtoField := 'l_index0_changed';
{ METHOD .Connect }
IS809.Connect := connect812;
{ METHOD .IS }
OrientationInterpolator808.IS := IS809;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator808]);
{ Original "BehaviorClock.EventFraction_changed TO l_index0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator808.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator814 := TOrientationInterpolatorNode.Create;
IS815 := TIS.Create;
connect816 := Tconnect.Create;
connect816.NodeField := 'key';
connect816.ProtoField := 'l_index1_key';
{ METHOD .Connect }
IS815.Connect := connect816;
connect817 := Tconnect.Create;
connect817.NodeField := 'keyValue';
connect817.ProtoField := 'l_index1_keyValue';
{ METHOD .Connect }
IS815.Connect := connect817;
connect818 := Tconnect.Create;
connect818.NodeField := 'value_changed';
connect818.ProtoField := 'l_index1_changed';
{ METHOD .Connect }
IS815.Connect := connect818;
{ METHOD .IS }
OrientationInterpolator814.IS := IS815;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator814]);
{ Original "BehaviorClock.EventFraction_changed TO l_index1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator814.EventSet_fraction);
end;

procedure InitHAnimBehaviorPrototypesPart46;
begin

{ METHOD .AddX3DROUTE }
OrientationInterpolator820 := TOrientationInterpolatorNode.Create;
IS821 := TIS.Create;
connect822 := Tconnect.Create;
connect822.NodeField := 'key';
connect822.ProtoField := 'l_index2_key';
{ METHOD .Connect }
IS821.Connect := connect822;
connect823 := Tconnect.Create;
connect823.NodeField := 'keyValue';
connect823.ProtoField := 'l_index2_keyValue';
{ METHOD .Connect }
IS821.Connect := connect823;
connect824 := Tconnect.Create;
connect824.NodeField := 'value_changed';
connect824.ProtoField := 'l_index2_changed';
{ METHOD .Connect }
IS821.Connect := connect824;
{ METHOD .IS }
OrientationInterpolator820.IS := IS821;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator820]);
{ Original "BehaviorClock.EventFraction_changed TO l_index2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator820.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator826 := TOrientationInterpolatorNode.Create;
IS827 := TIS.Create;
connect828 := Tconnect.Create;
connect828.NodeField := 'key';
connect828.ProtoField := 'l_index3_key';
{ METHOD .Connect }
IS827.Connect := connect828;
connect829 := Tconnect.Create;
connect829.NodeField := 'keyValue';
connect829.ProtoField := 'l_index3_keyValue';
{ METHOD .Connect }
IS827.Connect := connect829;
connect830 := Tconnect.Create;
connect830.NodeField := 'value_changed';
connect830.ProtoField := 'l_index3_changed';
{ METHOD .Connect }
IS827.Connect := connect830;
{ METHOD .IS }
OrientationInterpolator826.IS := IS827;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator826]);
{ Original "BehaviorClock.EventFraction_changed TO l_index3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator826.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator832 := TOrientationInterpolatorNode.Create;
IS833 := TIS.Create;
connect834 := Tconnect.Create;
connect834.NodeField := 'key';
connect834.ProtoField := 'l_index_distal_key';
{ METHOD .Connect }
IS833.Connect := connect834;
end;

procedure InitHAnimBehaviorPrototypesPart47;
begin

connect835 := Tconnect.Create;
connect835.NodeField := 'keyValue';
connect835.ProtoField := 'l_index_distal_keyValue';
{ METHOD .Connect }
IS833.Connect := connect835;
connect836 := Tconnect.Create;
connect836.NodeField := 'value_changed';
connect836.ProtoField := 'l_index_distal_changed';
{ METHOD .Connect }
IS833.Connect := connect836;
{ METHOD .IS }
OrientationInterpolator832.IS := IS833;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator832]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator832.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator838 := TOrientationInterpolatorNode.Create;
IS839 := TIS.Create;
connect840 := Tconnect.Create;
connect840.NodeField := 'key';
connect840.ProtoField := 'l_index_metacarpal_key';
{ METHOD .Connect }
IS839.Connect := connect840;
connect841 := Tconnect.Create;
connect841.NodeField := 'keyValue';
connect841.ProtoField := 'l_index_metacarpal_keyValue';
{ METHOD .Connect }
IS839.Connect := connect841;
connect842 := Tconnect.Create;
connect842.NodeField := 'value_changed';
connect842.ProtoField := 'l_index_metacarpal_changed';
{ METHOD .Connect }
IS839.Connect := connect842;
{ METHOD .IS }
OrientationInterpolator838.IS := IS839;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator838]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator838.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator844 := TOrientationInterpolatorNode.Create;
IS845 := TIS.Create;
connect846 := Tconnect.Create;
connect846.NodeField := 'key';
connect846.ProtoField := 'l_index_middle_key';
{ METHOD .Connect }
IS845.Connect := connect846;
connect847 := Tconnect.Create;
connect847.NodeField := 'keyValue';
connect847.ProtoField := 'l_index_middle_keyValue';
{ METHOD .Connect }
IS845.Connect := connect847;
connect848 := Tconnect.Create;
connect848.NodeField := 'value_changed';
end;

procedure InitHAnimBehaviorPrototypesPart48;
begin

connect848.ProtoField := 'l_index_middle_changed';
{ METHOD .Connect }
IS845.Connect := connect848;
{ METHOD .IS }
OrientationInterpolator844.IS := IS845;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator844]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator844.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator850 := TOrientationInterpolatorNode.Create;
IS851 := TIS.Create;
connect852 := Tconnect.Create;
connect852.NodeField := 'key';
connect852.ProtoField := 'l_index_proximal_key';
{ METHOD .Connect }
IS851.Connect := connect852;
connect853 := Tconnect.Create;
connect853.NodeField := 'keyValue';
connect853.ProtoField := 'l_index_proximal_keyValue';
{ METHOD .Connect }
IS851.Connect := connect853;
connect854 := Tconnect.Create;
connect854.NodeField := 'value_changed';
connect854.ProtoField := 'l_index_proximal_changed';
{ METHOD .Connect }
IS851.Connect := connect854;
{ METHOD .IS }
OrientationInterpolator850.IS := IS851;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator850]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator850.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator856 := TOrientationInterpolatorNode.Create;
IS857 := TIS.Create;
connect858 := Tconnect.Create;
connect858.NodeField := 'key';
connect858.ProtoField := 'l_knee_key';
{ METHOD .Connect }
IS857.Connect := connect858;
connect859 := Tconnect.Create;
connect859.NodeField := 'keyValue';
connect859.ProtoField := 'l_knee_keyValue';
{ METHOD .Connect }
IS857.Connect := connect859;
connect860 := Tconnect.Create;
connect860.NodeField := 'value_changed';
connect860.ProtoField := 'l_knee_changed';
{ METHOD .Connect }
IS857.Connect := connect860;
{ METHOD .IS }
OrientationInterpolator856.IS := IS857;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator856]);
{ Original "BehaviorClock.EventFraction_changed TO l_knee_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_knee_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator856.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator862 := TOrientationInterpolatorNode.Create;
end;

procedure InitHAnimBehaviorPrototypesPart49;
begin

IS863 := TIS.Create;
connect864 := Tconnect.Create;
connect864.NodeField := 'key';
connect864.ProtoField := 'l_metatarsal_key';
{ METHOD .Connect }
IS863.Connect := connect864;
connect865 := Tconnect.Create;
connect865.NodeField := 'keyValue';
connect865.ProtoField := 'l_metatarsal_keyValue';
{ METHOD .Connect }
IS863.Connect := connect865;
connect866 := Tconnect.Create;
connect866.NodeField := 'value_changed';
connect866.ProtoField := 'l_metatarsal_changed';
{ METHOD .Connect }
IS863.Connect := connect866;
{ METHOD .IS }
OrientationInterpolator862.IS := IS863;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator862]);
{ Original "BehaviorClock.EventFraction_changed TO l_metatarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_metatarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator862.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator868 := TOrientationInterpolatorNode.Create;
IS869 := TIS.Create;
connect870 := Tconnect.Create;
connect870.NodeField := 'key';
connect870.ProtoField := 'l_middistal_key';
{ METHOD .Connect }
IS869.Connect := connect870;
connect871 := Tconnect.Create;
connect871.NodeField := 'keyValue';
connect871.ProtoField := 'l_middistal_keyValue';
{ METHOD .Connect }
IS869.Connect := connect871;
connect872 := Tconnect.Create;
connect872.NodeField := 'value_changed';
connect872.ProtoField := 'l_middistal_changed';
{ METHOD .Connect }
IS869.Connect := connect872;
{ METHOD .IS }
OrientationInterpolator868.IS := IS869;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator868]);
{ Original "BehaviorClock.EventFraction_changed TO l_middistal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middistal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator868.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator874 := TOrientationInterpolatorNode.Create;
IS875 := TIS.Create;
connect876 := Tconnect.Create;
connect876.NodeField := 'key';
connect876.ProtoField := 'l_middle0_key';
{ METHOD .Connect }
IS875.Connect := connect876;
connect877 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart50;
begin

connect877.NodeField := 'keyValue';
connect877.ProtoField := 'l_middle0_keyValue';
{ METHOD .Connect }
IS875.Connect := connect877;
connect878 := Tconnect.Create;
connect878.NodeField := 'value_changed';
connect878.ProtoField := 'l_middle0_changed';
{ METHOD .Connect }
IS875.Connect := connect878;
{ METHOD .IS }
OrientationInterpolator874.IS := IS875;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator874]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator874.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator880 := TOrientationInterpolatorNode.Create;
IS881 := TIS.Create;
connect882 := Tconnect.Create;
connect882.NodeField := 'key';
connect882.ProtoField := 'l_middle1_key';
{ METHOD .Connect }
IS881.Connect := connect882;
connect883 := Tconnect.Create;
connect883.NodeField := 'keyValue';
connect883.ProtoField := 'l_middle1_keyValue';
{ METHOD .Connect }
IS881.Connect := connect883;
connect884 := Tconnect.Create;
connect884.NodeField := 'value_changed';
connect884.ProtoField := 'l_middle1_changed';
{ METHOD .Connect }
IS881.Connect := connect884;
{ METHOD .IS }
OrientationInterpolator880.IS := IS881;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator880]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator880.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator886 := TOrientationInterpolatorNode.Create;
IS887 := TIS.Create;
connect888 := Tconnect.Create;
connect888.NodeField := 'key';
connect888.ProtoField := 'l_middle2_key';
{ METHOD .Connect }
IS887.Connect := connect888;
connect889 := Tconnect.Create;
connect889.NodeField := 'keyValue';
connect889.ProtoField := 'l_middle2_keyValue';
{ METHOD .Connect }
IS887.Connect := connect889;
connect890 := Tconnect.Create;
connect890.NodeField := 'value_changed';
connect890.ProtoField := 'l_middle2_changed';
end;

procedure InitHAnimBehaviorPrototypesPart51;
begin

{ METHOD .Connect }
IS887.Connect := connect890;
{ METHOD .IS }
OrientationInterpolator886.IS := IS887;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator886]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator886.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator892 := TOrientationInterpolatorNode.Create;
IS893 := TIS.Create;
connect894 := Tconnect.Create;
connect894.NodeField := 'key';
connect894.ProtoField := 'l_middle3_key';
{ METHOD .Connect }
IS893.Connect := connect894;
connect895 := Tconnect.Create;
connect895.NodeField := 'keyValue';
connect895.ProtoField := 'l_middle3_keyValue';
{ METHOD .Connect }
IS893.Connect := connect895;
connect896 := Tconnect.Create;
connect896.NodeField := 'value_changed';
connect896.ProtoField := 'l_middle3_changed';
{ METHOD .Connect }
IS893.Connect := connect896;
{ METHOD .IS }
OrientationInterpolator892.IS := IS893;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator892]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator892.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator898 := TOrientationInterpolatorNode.Create;
IS899 := TIS.Create;
connect900 := Tconnect.Create;
connect900.NodeField := 'key';
connect900.ProtoField := 'l_middle_distal_key';
{ METHOD .Connect }
IS899.Connect := connect900;
connect901 := Tconnect.Create;
connect901.NodeField := 'keyValue';
connect901.ProtoField := 'l_middle_distal_keyValue';
{ METHOD .Connect }
IS899.Connect := connect901;
connect902 := Tconnect.Create;
connect902.NodeField := 'value_changed';
connect902.ProtoField := 'l_middle_distal_changed';
{ METHOD .Connect }
IS899.Connect := connect902;
{ METHOD .IS }
OrientationInterpolator898.IS := IS899;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator898]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator898.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator904 := TOrientationInterpolatorNode.Create;
IS905 := TIS.Create;
end;

procedure InitHAnimBehaviorPrototypesPart52;
begin

connect906 := Tconnect.Create;
connect906.NodeField := 'key';
connect906.ProtoField := 'l_middle_metacarpal_key';
{ METHOD .Connect }
IS905.Connect := connect906;
connect907 := Tconnect.Create;
connect907.NodeField := 'keyValue';
connect907.ProtoField := 'l_middle_metacarpal_keyValue';
{ METHOD .Connect }
IS905.Connect := connect907;
connect908 := Tconnect.Create;
connect908.NodeField := 'value_changed';
connect908.ProtoField := 'l_middle_metacarpal_changed';
{ METHOD .Connect }
IS905.Connect := connect908;
{ METHOD .IS }
OrientationInterpolator904.IS := IS905;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator904]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator904.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator910 := TOrientationInterpolatorNode.Create;
IS911 := TIS.Create;
connect912 := Tconnect.Create;
connect912.NodeField := 'key';
connect912.ProtoField := 'l_middle_middle_key';
{ METHOD .Connect }
IS911.Connect := connect912;
connect913 := Tconnect.Create;
connect913.NodeField := 'keyValue';
connect913.ProtoField := 'l_middle_middle_keyValue';
{ METHOD .Connect }
IS911.Connect := connect913;
connect914 := Tconnect.Create;
connect914.NodeField := 'value_changed';
connect914.ProtoField := 'l_middle_middle_changed';
{ METHOD .Connect }
IS911.Connect := connect914;
{ METHOD .IS }
OrientationInterpolator910.IS := IS911;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator910]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator910.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator916 := TOrientationInterpolatorNode.Create;
IS917 := TIS.Create;
connect918 := Tconnect.Create;
connect918.NodeField := 'key';
connect918.ProtoField := 'l_middle_proximal_key';
{ METHOD .Connect }
IS917.Connect := connect918;
connect919 := Tconnect.Create;
connect919.NodeField := 'keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart53;
begin

connect919.ProtoField := 'l_middle_proximal_keyValue';
{ METHOD .Connect }
IS917.Connect := connect919;
connect920 := Tconnect.Create;
connect920.NodeField := 'value_changed';
connect920.ProtoField := 'l_middle_proximal_changed';
{ METHOD .Connect }
IS917.Connect := connect920;
{ METHOD .IS }
OrientationInterpolator916.IS := IS917;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator916]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator916.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator922 := TOrientationInterpolatorNode.Create;
IS923 := TIS.Create;
connect924 := Tconnect.Create;
connect924.NodeField := 'key';
connect924.ProtoField := 'l_midproximal_key';
{ METHOD .Connect }
IS923.Connect := connect924;
connect925 := Tconnect.Create;
connect925.NodeField := 'keyValue';
connect925.ProtoField := 'l_midproximal_keyValue';
{ METHOD .Connect }
IS923.Connect := connect925;
connect926 := Tconnect.Create;
connect926.NodeField := 'value_changed';
connect926.ProtoField := 'l_midproximal_changed';
{ METHOD .Connect }
IS923.Connect := connect926;
{ METHOD .IS }
OrientationInterpolator922.IS := IS923;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator922]);
{ Original "BehaviorClock.EventFraction_changed TO l_midproximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_midproximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator922.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator928 := TOrientationInterpolatorNode.Create;
IS929 := TIS.Create;
connect930 := Tconnect.Create;
connect930.NodeField := 'key';
connect930.ProtoField := 'l_midtarsal_key';
{ METHOD .Connect }
IS929.Connect := connect930;
connect931 := Tconnect.Create;
connect931.NodeField := 'keyValue';
connect931.ProtoField := 'l_midtarsal_keyValue';
{ METHOD .Connect }
IS929.Connect := connect931;
connect932 := Tconnect.Create;
connect932.NodeField := 'value_changed';
connect932.ProtoField := 'l_midtarsal_changed';
{ METHOD .Connect }
IS929.Connect := connect932;
end;

procedure InitHAnimBehaviorPrototypesPart54;
begin

{ METHOD .IS }
OrientationInterpolator928.IS := IS929;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator928]);
{ Original "BehaviorClock.EventFraction_changed TO l_midtarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_midtarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator928.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator934 := TOrientationInterpolatorNode.Create;
IS935 := TIS.Create;
connect936 := Tconnect.Create;
connect936.NodeField := 'key';
connect936.ProtoField := 'l_pinky0_key';
{ METHOD .Connect }
IS935.Connect := connect936;
connect937 := Tconnect.Create;
connect937.NodeField := 'keyValue';
connect937.ProtoField := 'l_pinky0_keyValue';
{ METHOD .Connect }
IS935.Connect := connect937;
connect938 := Tconnect.Create;
connect938.NodeField := 'value_changed';
connect938.ProtoField := 'l_pinky0_changed';
{ METHOD .Connect }
IS935.Connect := connect938;
{ METHOD .IS }
OrientationInterpolator934.IS := IS935;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator934]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator934.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator940 := TOrientationInterpolatorNode.Create;
IS941 := TIS.Create;
connect942 := Tconnect.Create;
connect942.NodeField := 'key';
connect942.ProtoField := 'l_pinky1_key';
{ METHOD .Connect }
IS941.Connect := connect942;
connect943 := Tconnect.Create;
connect943.NodeField := 'keyValue';
connect943.ProtoField := 'l_pinky1_keyValue';
{ METHOD .Connect }
IS941.Connect := connect943;
connect944 := Tconnect.Create;
connect944.NodeField := 'value_changed';
connect944.ProtoField := 'l_pinky1_changed';
{ METHOD .Connect }
IS941.Connect := connect944;
{ METHOD .IS }
OrientationInterpolator940.IS := IS941;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator940]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator940.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator946 := TOrientationInterpolatorNode.Create;
IS947 := TIS.Create;
connect948 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart55;
begin

connect948.NodeField := 'key';
connect948.ProtoField := 'l_pinky2_key';
{ METHOD .Connect }
IS947.Connect := connect948;
connect949 := Tconnect.Create;
connect949.NodeField := 'keyValue';
connect949.ProtoField := 'l_pinky2_keyValue';
{ METHOD .Connect }
IS947.Connect := connect949;
connect950 := Tconnect.Create;
connect950.NodeField := 'value_changed';
connect950.ProtoField := 'l_pinky2_changed';
{ METHOD .Connect }
IS947.Connect := connect950;
{ METHOD .IS }
OrientationInterpolator946.IS := IS947;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator946]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator946.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator952 := TOrientationInterpolatorNode.Create;
IS953 := TIS.Create;
connect954 := Tconnect.Create;
connect954.NodeField := 'key';
connect954.ProtoField := 'l_pinky3_key';
{ METHOD .Connect }
IS953.Connect := connect954;
connect955 := Tconnect.Create;
connect955.NodeField := 'keyValue';
connect955.ProtoField := 'l_pinky3_keyValue';
{ METHOD .Connect }
IS953.Connect := connect955;
connect956 := Tconnect.Create;
connect956.NodeField := 'value_changed';
connect956.ProtoField := 'l_pinky3_changed';
{ METHOD .Connect }
IS953.Connect := connect956;
{ METHOD .IS }
OrientationInterpolator952.IS := IS953;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator952]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator952.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator958 := TOrientationInterpolatorNode.Create;
IS959 := TIS.Create;
connect960 := Tconnect.Create;
connect960.NodeField := 'key';
connect960.ProtoField := 'l_pinky_distal_key';
{ METHOD .Connect }
IS959.Connect := connect960;
connect961 := Tconnect.Create;
connect961.NodeField := 'keyValue';
connect961.ProtoField := 'l_pinky_distal_keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart56;
begin

{ METHOD .Connect }
IS959.Connect := connect961;
connect962 := Tconnect.Create;
connect962.NodeField := 'value_changed';
connect962.ProtoField := 'l_pinky_distal_changed';
{ METHOD .Connect }
IS959.Connect := connect962;
{ METHOD .IS }
OrientationInterpolator958.IS := IS959;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator958]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator958.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator964 := TOrientationInterpolatorNode.Create;
IS965 := TIS.Create;
connect966 := Tconnect.Create;
connect966.NodeField := 'key';
connect966.ProtoField := 'l_pinky_metacarpal_key';
{ METHOD .Connect }
IS965.Connect := connect966;
connect967 := Tconnect.Create;
connect967.NodeField := 'keyValue';
connect967.ProtoField := 'l_pinky_metacarpal_keyValue';
{ METHOD .Connect }
IS965.Connect := connect967;
connect968 := Tconnect.Create;
connect968.NodeField := 'value_changed';
connect968.ProtoField := 'l_pinky_metacarpal_changed';
{ METHOD .Connect }
IS965.Connect := connect968;
{ METHOD .IS }
OrientationInterpolator964.IS := IS965;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator964]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator964.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator970 := TOrientationInterpolatorNode.Create;
IS971 := TIS.Create;
connect972 := Tconnect.Create;
connect972.NodeField := 'key';
connect972.ProtoField := 'l_pinky_middle_key';
{ METHOD .Connect }
IS971.Connect := connect972;
connect973 := Tconnect.Create;
connect973.NodeField := 'keyValue';
connect973.ProtoField := 'l_pinky_middle_keyValue';
{ METHOD .Connect }
IS971.Connect := connect973;
connect974 := Tconnect.Create;
connect974.NodeField := 'value_changed';
connect974.ProtoField := 'l_pinky_middle_changed';
{ METHOD .Connect }
IS971.Connect := connect974;
{ METHOD .IS }
OrientationInterpolator970.IS := IS971;
end;

procedure InitHAnimBehaviorPrototypesPart57;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator970]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator970.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator976 := TOrientationInterpolatorNode.Create;
IS977 := TIS.Create;
connect978 := Tconnect.Create;
connect978.NodeField := 'key';
connect978.ProtoField := 'l_pinky_proximal_key';
{ METHOD .Connect }
IS977.Connect := connect978;
connect979 := Tconnect.Create;
connect979.NodeField := 'keyValue';
connect979.ProtoField := 'l_pinky_proximal_keyValue';
{ METHOD .Connect }
IS977.Connect := connect979;
connect980 := Tconnect.Create;
connect980.NodeField := 'value_changed';
connect980.ProtoField := 'l_pinky_proximal_changed';
{ METHOD .Connect }
IS977.Connect := connect980;
{ METHOD .IS }
OrientationInterpolator976.IS := IS977;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator976]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator976.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator982 := TOrientationInterpolatorNode.Create;
IS983 := TIS.Create;
connect984 := Tconnect.Create;
connect984.NodeField := 'key';
connect984.ProtoField := 'l_ring0_key';
{ METHOD .Connect }
IS983.Connect := connect984;
connect985 := Tconnect.Create;
connect985.NodeField := 'keyValue';
connect985.ProtoField := 'l_ring0_keyValue';
{ METHOD .Connect }
IS983.Connect := connect985;
connect986 := Tconnect.Create;
connect986.NodeField := 'value_changed';
connect986.ProtoField := 'l_ring0_changed';
{ METHOD .Connect }
IS983.Connect := connect986;
{ METHOD .IS }
OrientationInterpolator982.IS := IS983;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator982]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator982.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator988 := TOrientationInterpolatorNode.Create;
IS989 := TIS.Create;
connect990 := Tconnect.Create;
connect990.NodeField := 'key';
end;

procedure InitHAnimBehaviorPrototypesPart58;
begin

connect990.ProtoField := 'l_ring1_key';
{ METHOD .Connect }
IS989.Connect := connect990;
connect991 := Tconnect.Create;
connect991.NodeField := 'keyValue';
connect991.ProtoField := 'l_ring1_keyValue';
{ METHOD .Connect }
IS989.Connect := connect991;
connect992 := Tconnect.Create;
connect992.NodeField := 'value_changed';
connect992.ProtoField := 'l_ring1_changed';
{ METHOD .Connect }
IS989.Connect := connect992;
{ METHOD .IS }
OrientationInterpolator988.IS := IS989;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator988]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator988.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator994 := TOrientationInterpolatorNode.Create;
IS995 := TIS.Create;
connect996 := Tconnect.Create;
connect996.NodeField := 'key';
connect996.ProtoField := 'l_ring2_key';
{ METHOD .Connect }
IS995.Connect := connect996;
connect997 := Tconnect.Create;
connect997.NodeField := 'keyValue';
connect997.ProtoField := 'l_ring2_keyValue';
{ METHOD .Connect }
IS995.Connect := connect997;
connect998 := Tconnect.Create;
connect998.NodeField := 'value_changed';
connect998.ProtoField := 'l_ring2_changed';
{ METHOD .Connect }
IS995.Connect := connect998;
{ METHOD .IS }
OrientationInterpolator994.IS := IS995;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator994]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator994.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1000 := TOrientationInterpolatorNode.Create;
IS1001 := TIS.Create;
connect1002 := Tconnect.Create;
connect1002.NodeField := 'key';
connect1002.ProtoField := 'l_ring3_key';
{ METHOD .Connect }
IS1001.Connect := connect1002;
connect1003 := Tconnect.Create;
connect1003.NodeField := 'keyValue';
connect1003.ProtoField := 'l_ring3_keyValue';
{ METHOD .Connect }
IS1001.Connect := connect1003;
end;

procedure InitHAnimBehaviorPrototypesPart59;
begin

connect1004 := Tconnect.Create;
connect1004.NodeField := 'value_changed';
connect1004.ProtoField := 'l_ring3_changed';
{ METHOD .Connect }
IS1001.Connect := connect1004;
{ METHOD .IS }
OrientationInterpolator1000.IS := IS1001;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1000]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1000.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1006 := TOrientationInterpolatorNode.Create;
IS1007 := TIS.Create;
connect1008 := Tconnect.Create;
connect1008.NodeField := 'key';
connect1008.ProtoField := 'l_ring_distal_key';
{ METHOD .Connect }
IS1007.Connect := connect1008;
connect1009 := Tconnect.Create;
connect1009.NodeField := 'keyValue';
connect1009.ProtoField := 'l_ring_distal_keyValue';
{ METHOD .Connect }
IS1007.Connect := connect1009;
connect1010 := Tconnect.Create;
connect1010.NodeField := 'value_changed';
connect1010.ProtoField := 'l_ring_distal_changed';
{ METHOD .Connect }
IS1007.Connect := connect1010;
{ METHOD .IS }
OrientationInterpolator1006.IS := IS1007;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1006]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1006.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1012 := TOrientationInterpolatorNode.Create;
IS1013 := TIS.Create;
connect1014 := Tconnect.Create;
connect1014.NodeField := 'key';
connect1014.ProtoField := 'l_ring_metacarpal_key';
{ METHOD .Connect }
IS1013.Connect := connect1014;
connect1015 := Tconnect.Create;
connect1015.NodeField := 'keyValue';
connect1015.ProtoField := 'l_ring_metacarpal_keyValue';
{ METHOD .Connect }
IS1013.Connect := connect1015;
connect1016 := Tconnect.Create;
connect1016.NodeField := 'value_changed';
connect1016.ProtoField := 'l_ring_metacarpal_changed';
{ METHOD .Connect }
IS1013.Connect := connect1016;
{ METHOD .IS }
OrientationInterpolator1012.IS := IS1013;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1012]);
end;

procedure InitHAnimBehaviorPrototypesPart60;
begin

{ Original "BehaviorClock.EventFraction_changed TO l_ring_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1012.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1018 := TOrientationInterpolatorNode.Create;
IS1019 := TIS.Create;
connect1020 := Tconnect.Create;
connect1020.NodeField := 'key';
connect1020.ProtoField := 'l_ring_middle_key';
{ METHOD .Connect }
IS1019.Connect := connect1020;
connect1021 := Tconnect.Create;
connect1021.NodeField := 'keyValue';
connect1021.ProtoField := 'l_ring_middle_keyValue';
{ METHOD .Connect }
IS1019.Connect := connect1021;
connect1022 := Tconnect.Create;
connect1022.NodeField := 'value_changed';
connect1022.ProtoField := 'l_ring_middle_changed';
{ METHOD .Connect }
IS1019.Connect := connect1022;
{ METHOD .IS }
OrientationInterpolator1018.IS := IS1019;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1018]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1018.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1024 := TOrientationInterpolatorNode.Create;
IS1025 := TIS.Create;
connect1026 := Tconnect.Create;
connect1026.NodeField := 'key';
connect1026.ProtoField := 'l_ring_proximal_key';
{ METHOD .Connect }
IS1025.Connect := connect1026;
connect1027 := Tconnect.Create;
connect1027.NodeField := 'keyValue';
connect1027.ProtoField := 'l_ring_proximal_keyValue';
{ METHOD .Connect }
IS1025.Connect := connect1027;
connect1028 := Tconnect.Create;
connect1028.NodeField := 'value_changed';
connect1028.ProtoField := 'l_ring_proximal_changed';
{ METHOD .Connect }
IS1025.Connect := connect1028;
{ METHOD .IS }
OrientationInterpolator1024.IS := IS1025;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1024]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1024.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1030 := TOrientationInterpolatorNode.Create;
IS1031 := TIS.Create;
connect1032 := Tconnect.Create;
connect1032.NodeField := 'key';
connect1032.ProtoField := 'l_scapula_key';
end;

procedure InitHAnimBehaviorPrototypesPart61;
begin

{ METHOD .Connect }
IS1031.Connect := connect1032;
connect1033 := Tconnect.Create;
connect1033.NodeField := 'keyValue';
connect1033.ProtoField := 'l_scapula_keyValue';
{ METHOD .Connect }
IS1031.Connect := connect1033;
connect1034 := Tconnect.Create;
connect1034.NodeField := 'value_changed';
connect1034.ProtoField := 'l_scapula_changed';
{ METHOD .Connect }
IS1031.Connect := connect1034;
{ METHOD .IS }
OrientationInterpolator1030.IS := IS1031;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1030]);
{ Original "BehaviorClock.EventFraction_changed TO l_scapula_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_scapula_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1030.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1036 := TOrientationInterpolatorNode.Create;
IS1037 := TIS.Create;
connect1038 := Tconnect.Create;
connect1038.NodeField := 'key';
connect1038.ProtoField := 'l_shoulder_key';
{ METHOD .Connect }
IS1037.Connect := connect1038;
connect1039 := Tconnect.Create;
connect1039.NodeField := 'keyValue';
connect1039.ProtoField := 'l_shoulder_keyValue';
{ METHOD .Connect }
IS1037.Connect := connect1039;
connect1040 := Tconnect.Create;
connect1040.NodeField := 'value_changed';
connect1040.ProtoField := 'l_shoulder_changed';
{ METHOD .Connect }
IS1037.Connect := connect1040;
{ METHOD .IS }
OrientationInterpolator1036.IS := IS1037;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1036]);
{ Original "BehaviorClock.EventFraction_changed TO l_shoulder_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_shoulder_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1036.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1042 := TOrientationInterpolatorNode.Create;
IS1043 := TIS.Create;
connect1044 := Tconnect.Create;
connect1044.NodeField := 'key';
connect1044.ProtoField := 'l_sternoclavicular_key';
{ METHOD .Connect }
IS1043.Connect := connect1044;
connect1045 := Tconnect.Create;
connect1045.NodeField := 'keyValue';
connect1045.ProtoField := 'l_sternoclavicular_keyValue';
{ METHOD .Connect }
IS1043.Connect := connect1045;
connect1046 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart62;
begin

connect1046.NodeField := 'value_changed';
connect1046.ProtoField := 'l_sternoclavicular_changed';
{ METHOD .Connect }
IS1043.Connect := connect1046;
{ METHOD .IS }
OrientationInterpolator1042.IS := IS1043;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1042]);
{ Original "BehaviorClock.EventFraction_changed TO l_sternoclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_sternoclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1042.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1048 := TOrientationInterpolatorNode.Create;
IS1049 := TIS.Create;
connect1050 := Tconnect.Create;
connect1050.NodeField := 'key';
connect1050.ProtoField := 'l_subtalar_key';
{ METHOD .Connect }
IS1049.Connect := connect1050;
connect1051 := Tconnect.Create;
connect1051.NodeField := 'keyValue';
connect1051.ProtoField := 'l_subtalar_keyValue';
{ METHOD .Connect }
IS1049.Connect := connect1051;
connect1052 := Tconnect.Create;
connect1052.NodeField := 'value_changed';
connect1052.ProtoField := 'l_subtalar_changed';
{ METHOD .Connect }
IS1049.Connect := connect1052;
{ METHOD .IS }
OrientationInterpolator1048.IS := IS1049;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1048]);
{ Original "BehaviorClock.EventFraction_changed TO l_subtalar_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_subtalar_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1048.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1054 := TOrientationInterpolatorNode.Create;
IS1055 := TIS.Create;
connect1056 := Tconnect.Create;
connect1056.NodeField := 'key';
connect1056.ProtoField := 'l_thigh_key';
{ METHOD .Connect }
IS1055.Connect := connect1056;
connect1057 := Tconnect.Create;
connect1057.NodeField := 'keyValue';
connect1057.ProtoField := 'l_thigh_keyValue';
{ METHOD .Connect }
IS1055.Connect := connect1057;
connect1058 := Tconnect.Create;
connect1058.NodeField := 'value_changed';
connect1058.ProtoField := 'l_thigh_changed';
{ METHOD .Connect }
IS1055.Connect := connect1058;
{ METHOD .IS }
OrientationInterpolator1054.IS := IS1055;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1054]);
{ Original "BehaviorClock.EventFraction_changed TO l_thigh_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thigh_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1054.EventSet_fraction);
end;

procedure InitHAnimBehaviorPrototypesPart63;
begin

{ METHOD .AddX3DROUTE }
OrientationInterpolator1060 := TOrientationInterpolatorNode.Create;
IS1061 := TIS.Create;
connect1062 := Tconnect.Create;
connect1062.NodeField := 'key';
connect1062.ProtoField := 'l_thumb1_key';
{ METHOD .Connect }
IS1061.Connect := connect1062;
connect1063 := Tconnect.Create;
connect1063.NodeField := 'keyValue';
connect1063.ProtoField := 'l_thumb1_keyValue';
{ METHOD .Connect }
IS1061.Connect := connect1063;
connect1064 := Tconnect.Create;
connect1064.NodeField := 'value_changed';
connect1064.ProtoField := 'l_thumb1_changed';
{ METHOD .Connect }
IS1061.Connect := connect1064;
{ METHOD .IS }
OrientationInterpolator1060.IS := IS1061;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1060]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1060.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1066 := TOrientationInterpolatorNode.Create;
IS1067 := TIS.Create;
connect1068 := Tconnect.Create;
connect1068.NodeField := 'key';
connect1068.ProtoField := 'l_thumb2_key';
{ METHOD .Connect }
IS1067.Connect := connect1068;
connect1069 := Tconnect.Create;
connect1069.NodeField := 'keyValue';
connect1069.ProtoField := 'l_thumb2_keyValue';
{ METHOD .Connect }
IS1067.Connect := connect1069;
connect1070 := Tconnect.Create;
connect1070.NodeField := 'value_changed';
connect1070.ProtoField := 'l_thumb2_changed';
{ METHOD .Connect }
IS1067.Connect := connect1070;
{ METHOD .IS }
OrientationInterpolator1066.IS := IS1067;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1066]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1066.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1072 := TOrientationInterpolatorNode.Create;
IS1073 := TIS.Create;
connect1074 := Tconnect.Create;
connect1074.NodeField := 'key';
connect1074.ProtoField := 'l_thumb3_key';
{ METHOD .Connect }
IS1073.Connect := connect1074;
end;

procedure InitHAnimBehaviorPrototypesPart64;
begin

connect1075 := Tconnect.Create;
connect1075.NodeField := 'keyValue';
connect1075.ProtoField := 'l_thumb3_keyValue';
{ METHOD .Connect }
IS1073.Connect := connect1075;
connect1076 := Tconnect.Create;
connect1076.NodeField := 'value_changed';
connect1076.ProtoField := 'l_thumb3_changed';
{ METHOD .Connect }
IS1073.Connect := connect1076;
{ METHOD .IS }
OrientationInterpolator1072.IS := IS1073;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1072]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1072.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1078 := TOrientationInterpolatorNode.Create;
IS1079 := TIS.Create;
connect1080 := Tconnect.Create;
connect1080.NodeField := 'key';
connect1080.ProtoField := 'l_thumb_distal_key';
{ METHOD .Connect }
IS1079.Connect := connect1080;
connect1081 := Tconnect.Create;
connect1081.NodeField := 'keyValue';
connect1081.ProtoField := 'l_thumb_distal_keyValue';
{ METHOD .Connect }
IS1079.Connect := connect1081;
connect1082 := Tconnect.Create;
connect1082.NodeField := 'value_changed';
connect1082.ProtoField := 'l_thumb_distal_changed';
{ METHOD .Connect }
IS1079.Connect := connect1082;
{ METHOD .IS }
OrientationInterpolator1078.IS := IS1079;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1078]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1078.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1084 := TOrientationInterpolatorNode.Create;
IS1085 := TIS.Create;
connect1086 := Tconnect.Create;
connect1086.NodeField := 'key';
connect1086.ProtoField := 'l_thumb_metacarpal_key';
{ METHOD .Connect }
IS1085.Connect := connect1086;
connect1087 := Tconnect.Create;
connect1087.NodeField := 'keyValue';
connect1087.ProtoField := 'l_thumb_metacarpal_keyValue';
{ METHOD .Connect }
IS1085.Connect := connect1087;
connect1088 := Tconnect.Create;
connect1088.NodeField := 'value_changed';
end;

procedure InitHAnimBehaviorPrototypesPart65;
begin

connect1088.ProtoField := 'l_thumb_metacarpal_changed';
{ METHOD .Connect }
IS1085.Connect := connect1088;
{ METHOD .IS }
OrientationInterpolator1084.IS := IS1085;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1084]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1084.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1090 := TOrientationInterpolatorNode.Create;
IS1091 := TIS.Create;
connect1092 := Tconnect.Create;
connect1092.NodeField := 'key';
connect1092.ProtoField := 'l_thumb_proximal_key';
{ METHOD .Connect }
IS1091.Connect := connect1092;
connect1093 := Tconnect.Create;
connect1093.NodeField := 'keyValue';
connect1093.ProtoField := 'l_thumb_proximal_keyValue';
{ METHOD .Connect }
IS1091.Connect := connect1093;
connect1094 := Tconnect.Create;
connect1094.NodeField := 'value_changed';
connect1094.ProtoField := 'l_thumb_proximal_changed';
{ METHOD .Connect }
IS1091.Connect := connect1094;
{ METHOD .IS }
OrientationInterpolator1090.IS := IS1091;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1090]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1090.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1096 := TOrientationInterpolatorNode.Create;
IS1097 := TIS.Create;
connect1098 := Tconnect.Create;
connect1098.NodeField := 'key';
connect1098.ProtoField := 'l_upperarm_key';
{ METHOD .Connect }
IS1097.Connect := connect1098;
connect1099 := Tconnect.Create;
connect1099.NodeField := 'keyValue';
connect1099.ProtoField := 'l_upperarm_keyValue';
{ METHOD .Connect }
IS1097.Connect := connect1099;
connect1100 := Tconnect.Create;
connect1100.NodeField := 'value_changed';
connect1100.ProtoField := 'l_upperarm_changed';
{ METHOD .Connect }
IS1097.Connect := connect1100;
{ METHOD .IS }
OrientationInterpolator1096.IS := IS1097;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1096]);
{ Original "BehaviorClock.EventFraction_changed TO l_upperarm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_upperarm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1096.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1102 := TOrientationInterpolatorNode.Create;
end;

procedure InitHAnimBehaviorPrototypesPart66;
begin

IS1103 := TIS.Create;
connect1104 := Tconnect.Create;
connect1104.NodeField := 'key';
connect1104.ProtoField := 'l_wrist_key';
{ METHOD .Connect }
IS1103.Connect := connect1104;
connect1105 := Tconnect.Create;
connect1105.NodeField := 'keyValue';
connect1105.ProtoField := 'l_wrist_keyValue';
{ METHOD .Connect }
IS1103.Connect := connect1105;
connect1106 := Tconnect.Create;
connect1106.NodeField := 'value_changed';
connect1106.ProtoField := 'l_wrist_changed';
{ METHOD .Connect }
IS1103.Connect := connect1106;
{ METHOD .IS }
OrientationInterpolator1102.IS := IS1103;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1102]);
{ Original "BehaviorClock.EventFraction_changed TO l_wrist_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_wrist_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1102.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1108 := TOrientationInterpolatorNode.Create;
IS1109 := TIS.Create;
connect1110 := Tconnect.Create;
connect1110.NodeField := 'key';
connect1110.ProtoField := 'pelvis_key';
{ METHOD .Connect }
IS1109.Connect := connect1110;
connect1111 := Tconnect.Create;
connect1111.NodeField := 'keyValue';
connect1111.ProtoField := 'pelvis_keyValue';
{ METHOD .Connect }
IS1109.Connect := connect1111;
connect1112 := Tconnect.Create;
connect1112.NodeField := 'value_changed';
connect1112.ProtoField := 'pelvis_changed';
{ METHOD .Connect }
IS1109.Connect := connect1112;
{ METHOD .IS }
OrientationInterpolator1108.IS := IS1109;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1108]);
{ Original "BehaviorClock.EventFraction_changed TO pelvis_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO pelvis_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1108.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1114 := TOrientationInterpolatorNode.Create;
IS1115 := TIS.Create;
connect1116 := Tconnect.Create;
connect1116.NodeField := 'key';
connect1116.ProtoField := 'r_acromioclavicular_key';
{ METHOD .Connect }
IS1115.Connect := connect1116;
connect1117 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart67;
begin

connect1117.NodeField := 'keyValue';
connect1117.ProtoField := 'r_acromioclavicular_keyValue';
{ METHOD .Connect }
IS1115.Connect := connect1117;
connect1118 := Tconnect.Create;
connect1118.NodeField := 'value_changed';
connect1118.ProtoField := 'r_acromioclavicular_changed';
{ METHOD .Connect }
IS1115.Connect := connect1118;
{ METHOD .IS }
OrientationInterpolator1114.IS := IS1115;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1114]);
{ Original "BehaviorClock.EventFraction_changed TO r_acromioclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_acromioclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1114.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1120 := TOrientationInterpolatorNode.Create;
IS1121 := TIS.Create;
connect1122 := Tconnect.Create;
connect1122.NodeField := 'key';
connect1122.ProtoField := 'r_ankle_key';
{ METHOD .Connect }
IS1121.Connect := connect1122;
connect1123 := Tconnect.Create;
connect1123.NodeField := 'keyValue';
connect1123.ProtoField := 'r_ankle_keyValue';
{ METHOD .Connect }
IS1121.Connect := connect1123;
connect1124 := Tconnect.Create;
connect1124.NodeField := 'value_changed';
connect1124.ProtoField := 'r_ankle_changed';
{ METHOD .Connect }
IS1121.Connect := connect1124;
{ METHOD .IS }
OrientationInterpolator1120.IS := IS1121;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1120]);
{ Original "BehaviorClock.EventFraction_changed TO r_ankle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ankle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1120.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1126 := TOrientationInterpolatorNode.Create;
IS1127 := TIS.Create;
connect1128 := Tconnect.Create;
connect1128.NodeField := 'key';
connect1128.ProtoField := 'r_calf_key';
{ METHOD .Connect }
IS1127.Connect := connect1128;
connect1129 := Tconnect.Create;
connect1129.NodeField := 'keyValue';
connect1129.ProtoField := 'r_calf_keyValue';
{ METHOD .Connect }
IS1127.Connect := connect1129;
connect1130 := Tconnect.Create;
connect1130.NodeField := 'value_changed';
connect1130.ProtoField := 'r_calf_changed';
end;

procedure InitHAnimBehaviorPrototypesPart68;
begin

{ METHOD .Connect }
IS1127.Connect := connect1130;
{ METHOD .IS }
OrientationInterpolator1126.IS := IS1127;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1126]);
{ Original "BehaviorClock.EventFraction_changed TO r_calf_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_calf_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1126.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1132 := TOrientationInterpolatorNode.Create;
IS1133 := TIS.Create;
connect1134 := Tconnect.Create;
connect1134.NodeField := 'key';
connect1134.ProtoField := 'r_clavicle_key';
{ METHOD .Connect }
IS1133.Connect := connect1134;
connect1135 := Tconnect.Create;
connect1135.NodeField := 'keyValue';
connect1135.ProtoField := 'r_clavicle_keyValue';
{ METHOD .Connect }
IS1133.Connect := connect1135;
connect1136 := Tconnect.Create;
connect1136.NodeField := 'value_changed';
connect1136.ProtoField := 'r_clavicle_changed';
{ METHOD .Connect }
IS1133.Connect := connect1136;
{ METHOD .IS }
OrientationInterpolator1132.IS := IS1133;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1132]);
{ Original "BehaviorClock.EventFraction_changed TO r_clavicle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_clavicle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1132.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1138 := TOrientationInterpolatorNode.Create;
IS1139 := TIS.Create;
connect1140 := Tconnect.Create;
connect1140.NodeField := 'key';
connect1140.ProtoField := 'r_elbow_key';
{ METHOD .Connect }
IS1139.Connect := connect1140;
connect1141 := Tconnect.Create;
connect1141.NodeField := 'keyValue';
connect1141.ProtoField := 'r_elbow_keyValue';
{ METHOD .Connect }
IS1139.Connect := connect1141;
connect1142 := Tconnect.Create;
connect1142.NodeField := 'value_changed';
connect1142.ProtoField := 'r_elbow_changed';
{ METHOD .Connect }
IS1139.Connect := connect1142;
{ METHOD .IS }
OrientationInterpolator1138.IS := IS1139;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1138]);
{ Original "BehaviorClock.EventFraction_changed TO r_elbow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_elbow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1138.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1144 := TOrientationInterpolatorNode.Create;
IS1145 := TIS.Create;
end;

procedure InitHAnimBehaviorPrototypesPart69;
begin

connect1146 := Tconnect.Create;
connect1146.NodeField := 'key';
connect1146.ProtoField := 'r_eyeball_key';
{ METHOD .Connect }
IS1145.Connect := connect1146;
connect1147 := Tconnect.Create;
connect1147.NodeField := 'keyValue';
connect1147.ProtoField := 'r_eyeball_keyValue';
{ METHOD .Connect }
IS1145.Connect := connect1147;
connect1148 := Tconnect.Create;
connect1148.NodeField := 'value_changed';
connect1148.ProtoField := 'r_eyeball_changed';
{ METHOD .Connect }
IS1145.Connect := connect1148;
{ METHOD .IS }
OrientationInterpolator1144.IS := IS1145;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1144]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyeball_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyeball_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1144.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1150 := TOrientationInterpolatorNode.Create;
IS1151 := TIS.Create;
connect1152 := Tconnect.Create;
connect1152.NodeField := 'key';
connect1152.ProtoField := 'r_eyeball_joint_key';
{ METHOD .Connect }
IS1151.Connect := connect1152;
connect1153 := Tconnect.Create;
connect1153.NodeField := 'keyValue';
connect1153.ProtoField := 'r_eyeball_joint_keyValue';
{ METHOD .Connect }
IS1151.Connect := connect1153;
connect1154 := Tconnect.Create;
connect1154.NodeField := 'value_changed';
connect1154.ProtoField := 'r_eyeball_joint_changed';
{ METHOD .Connect }
IS1151.Connect := connect1154;
{ METHOD .IS }
OrientationInterpolator1150.IS := IS1151;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1150]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyeball_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyeball_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1150.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1156 := TOrientationInterpolatorNode.Create;
IS1157 := TIS.Create;
connect1158 := Tconnect.Create;
connect1158.NodeField := 'key';
connect1158.ProtoField := 'r_eyebrow_key';
{ METHOD .Connect }
IS1157.Connect := connect1158;
connect1159 := Tconnect.Create;
connect1159.NodeField := 'keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart70;
begin

connect1159.ProtoField := 'r_eyebrow_keyValue';
{ METHOD .Connect }
IS1157.Connect := connect1159;
connect1160 := Tconnect.Create;
connect1160.NodeField := 'value_changed';
connect1160.ProtoField := 'r_eyebrow_changed';
{ METHOD .Connect }
IS1157.Connect := connect1160;
{ METHOD .IS }
OrientationInterpolator1156.IS := IS1157;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1156]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyebrow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyebrow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1156.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1162 := TOrientationInterpolatorNode.Create;
IS1163 := TIS.Create;
connect1164 := Tconnect.Create;
connect1164.NodeField := 'key';
connect1164.ProtoField := 'r_eyebrow_joint_key';
{ METHOD .Connect }
IS1163.Connect := connect1164;
connect1165 := Tconnect.Create;
connect1165.NodeField := 'keyValue';
connect1165.ProtoField := 'r_eyebrow_joint_keyValue';
{ METHOD .Connect }
IS1163.Connect := connect1165;
connect1166 := Tconnect.Create;
connect1166.NodeField := 'value_changed';
connect1166.ProtoField := 'r_eyebrow_joint_changed';
{ METHOD .Connect }
IS1163.Connect := connect1166;
{ METHOD .IS }
OrientationInterpolator1162.IS := IS1163;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1162]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyebrow_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyebrow_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1162.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1168 := TOrientationInterpolatorNode.Create;
IS1169 := TIS.Create;
connect1170 := Tconnect.Create;
connect1170.NodeField := 'key';
connect1170.ProtoField := 'r_eyelid_key';
{ METHOD .Connect }
IS1169.Connect := connect1170;
connect1171 := Tconnect.Create;
connect1171.NodeField := 'keyValue';
connect1171.ProtoField := 'r_eyelid_keyValue';
{ METHOD .Connect }
IS1169.Connect := connect1171;
connect1172 := Tconnect.Create;
connect1172.NodeField := 'value_changed';
connect1172.ProtoField := 'r_eyelid_changed';
{ METHOD .Connect }
IS1169.Connect := connect1172;
end;

procedure InitHAnimBehaviorPrototypesPart71;
begin

{ METHOD .IS }
OrientationInterpolator1168.IS := IS1169;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1168]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyelid_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyelid_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1168.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1174 := TOrientationInterpolatorNode.Create;
IS1175 := TIS.Create;
connect1176 := Tconnect.Create;
connect1176.NodeField := 'key';
connect1176.ProtoField := 'r_eyelid_joint_key';
{ METHOD .Connect }
IS1175.Connect := connect1176;
connect1177 := Tconnect.Create;
connect1177.NodeField := 'keyValue';
connect1177.ProtoField := 'r_eyelid_joint_keyValue';
{ METHOD .Connect }
IS1175.Connect := connect1177;
connect1178 := Tconnect.Create;
connect1178.NodeField := 'value_changed';
connect1178.ProtoField := 'r_eyelid_joint_changed';
{ METHOD .Connect }
IS1175.Connect := connect1178;
{ METHOD .IS }
OrientationInterpolator1174.IS := IS1175;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1174]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyelid_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyelid_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1174.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1180 := TOrientationInterpolatorNode.Create;
IS1181 := TIS.Create;
connect1182 := Tconnect.Create;
connect1182.NodeField := 'key';
connect1182.ProtoField := 'r_forearm_key';
{ METHOD .Connect }
IS1181.Connect := connect1182;
connect1183 := Tconnect.Create;
connect1183.NodeField := 'keyValue';
connect1183.ProtoField := 'r_forearm_keyValue';
{ METHOD .Connect }
IS1181.Connect := connect1183;
connect1184 := Tconnect.Create;
connect1184.NodeField := 'value_changed';
connect1184.ProtoField := 'r_forearm_changed';
{ METHOD .Connect }
IS1181.Connect := connect1184;
{ METHOD .IS }
OrientationInterpolator1180.IS := IS1181;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1180]);
{ Original "BehaviorClock.EventFraction_changed TO r_forearm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_forearm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1180.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1186 := TOrientationInterpolatorNode.Create;
IS1187 := TIS.Create;
connect1188 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart72;
begin

connect1188.NodeField := 'key';
connect1188.ProtoField := 'r_forefoot_key';
{ METHOD .Connect }
IS1187.Connect := connect1188;
connect1189 := Tconnect.Create;
connect1189.NodeField := 'keyValue';
connect1189.ProtoField := 'r_forefoot_keyValue';
{ METHOD .Connect }
IS1187.Connect := connect1189;
connect1190 := Tconnect.Create;
connect1190.NodeField := 'value_changed';
connect1190.ProtoField := 'r_forefoot_changed';
{ METHOD .Connect }
IS1187.Connect := connect1190;
{ METHOD .IS }
OrientationInterpolator1186.IS := IS1187;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1186]);
{ Original "BehaviorClock.EventFraction_changed TO r_forefoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_forefoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1186.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1192 := TOrientationInterpolatorNode.Create;
IS1193 := TIS.Create;
connect1194 := Tconnect.Create;
connect1194.NodeField := 'key';
connect1194.ProtoField := 'r_hand_key';
{ METHOD .Connect }
IS1193.Connect := connect1194;
connect1195 := Tconnect.Create;
connect1195.NodeField := 'keyValue';
connect1195.ProtoField := 'r_hand_keyValue';
{ METHOD .Connect }
IS1193.Connect := connect1195;
connect1196 := Tconnect.Create;
connect1196.NodeField := 'value_changed';
connect1196.ProtoField := 'r_hand_changed';
{ METHOD .Connect }
IS1193.Connect := connect1196;
{ METHOD .IS }
OrientationInterpolator1192.IS := IS1193;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1192]);
{ Original "BehaviorClock.EventFraction_changed TO r_hand_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_hand_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1192.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1198 := TOrientationInterpolatorNode.Create;
IS1199 := TIS.Create;
connect1200 := Tconnect.Create;
connect1200.NodeField := 'key';
connect1200.ProtoField := 'r_hindfoot_key';
{ METHOD .Connect }
IS1199.Connect := connect1200;
connect1201 := Tconnect.Create;
connect1201.NodeField := 'keyValue';
connect1201.ProtoField := 'r_hindfoot_keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart73;
begin

{ METHOD .Connect }
IS1199.Connect := connect1201;
connect1202 := Tconnect.Create;
connect1202.NodeField := 'value_changed';
connect1202.ProtoField := 'r_hindfoot_changed';
{ METHOD .Connect }
IS1199.Connect := connect1202;
{ METHOD .IS }
OrientationInterpolator1198.IS := IS1199;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1198]);
{ Original "BehaviorClock.EventFraction_changed TO r_hindfoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_hindfoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1198.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1204 := TOrientationInterpolatorNode.Create;
IS1205 := TIS.Create;
connect1206 := Tconnect.Create;
connect1206.NodeField := 'key';
connect1206.ProtoField := 'r_hip_key';
{ METHOD .Connect }
IS1205.Connect := connect1206;
connect1207 := Tconnect.Create;
connect1207.NodeField := 'keyValue';
connect1207.ProtoField := 'r_hip_keyValue';
{ METHOD .Connect }
IS1205.Connect := connect1207;
connect1208 := Tconnect.Create;
connect1208.NodeField := 'value_changed';
connect1208.ProtoField := 'r_hip_changed';
{ METHOD .Connect }
IS1205.Connect := connect1208;
{ METHOD .IS }
OrientationInterpolator1204.IS := IS1205;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1204]);
{ Original "BehaviorClock.EventFraction_changed TO r_hip_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_hip_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1204.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1210 := TOrientationInterpolatorNode.Create;
IS1211 := TIS.Create;
connect1212 := Tconnect.Create;
connect1212.NodeField := 'key';
connect1212.ProtoField := 'r_index0_key';
{ METHOD .Connect }
IS1211.Connect := connect1212;
connect1213 := Tconnect.Create;
connect1213.NodeField := 'keyValue';
connect1213.ProtoField := 'r_index0_keyValue';
{ METHOD .Connect }
IS1211.Connect := connect1213;
connect1214 := Tconnect.Create;
connect1214.NodeField := 'value_changed';
connect1214.ProtoField := 'r_index0_changed';
{ METHOD .Connect }
IS1211.Connect := connect1214;
{ METHOD .IS }
OrientationInterpolator1210.IS := IS1211;
end;

procedure InitHAnimBehaviorPrototypesPart74;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1210]);
{ Original "BehaviorClock.EventFraction_changed TO r_index0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1210.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1216 := TOrientationInterpolatorNode.Create;
IS1217 := TIS.Create;
connect1218 := Tconnect.Create;
connect1218.NodeField := 'key';
connect1218.ProtoField := 'r_index1_key';
{ METHOD .Connect }
IS1217.Connect := connect1218;
connect1219 := Tconnect.Create;
connect1219.NodeField := 'keyValue';
connect1219.ProtoField := 'r_index1_keyValue';
{ METHOD .Connect }
IS1217.Connect := connect1219;
connect1220 := Tconnect.Create;
connect1220.NodeField := 'value_changed';
connect1220.ProtoField := 'r_index1_changed';
{ METHOD .Connect }
IS1217.Connect := connect1220;
{ METHOD .IS }
OrientationInterpolator1216.IS := IS1217;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1216]);
{ Original "BehaviorClock.EventFraction_changed TO r_index1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1216.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1222 := TOrientationInterpolatorNode.Create;
IS1223 := TIS.Create;
connect1224 := Tconnect.Create;
connect1224.NodeField := 'key';
connect1224.ProtoField := 'r_index2_key';
{ METHOD .Connect }
IS1223.Connect := connect1224;
connect1225 := Tconnect.Create;
connect1225.NodeField := 'keyValue';
connect1225.ProtoField := 'r_index2_keyValue';
{ METHOD .Connect }
IS1223.Connect := connect1225;
connect1226 := Tconnect.Create;
connect1226.NodeField := 'value_changed';
connect1226.ProtoField := 'r_index2_changed';
{ METHOD .Connect }
IS1223.Connect := connect1226;
{ METHOD .IS }
OrientationInterpolator1222.IS := IS1223;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1222]);
{ Original "BehaviorClock.EventFraction_changed TO r_index2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1222.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1228 := TOrientationInterpolatorNode.Create;
IS1229 := TIS.Create;
connect1230 := Tconnect.Create;
connect1230.NodeField := 'key';
end;

procedure InitHAnimBehaviorPrototypesPart75;
begin

connect1230.ProtoField := 'r_index3_key';
{ METHOD .Connect }
IS1229.Connect := connect1230;
connect1231 := Tconnect.Create;
connect1231.NodeField := 'keyValue';
connect1231.ProtoField := 'r_index3_keyValue';
{ METHOD .Connect }
IS1229.Connect := connect1231;
connect1232 := Tconnect.Create;
connect1232.NodeField := 'value_changed';
connect1232.ProtoField := 'r_index3_changed';
{ METHOD .Connect }
IS1229.Connect := connect1232;
{ METHOD .IS }
OrientationInterpolator1228.IS := IS1229;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1228]);
{ Original "BehaviorClock.EventFraction_changed TO r_index3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1228.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1234 := TOrientationInterpolatorNode.Create;
IS1235 := TIS.Create;
connect1236 := Tconnect.Create;
connect1236.NodeField := 'key';
connect1236.ProtoField := 'r_index_distal_key';
{ METHOD .Connect }
IS1235.Connect := connect1236;
connect1237 := Tconnect.Create;
connect1237.NodeField := 'keyValue';
connect1237.ProtoField := 'r_index_distal_keyValue';
{ METHOD .Connect }
IS1235.Connect := connect1237;
connect1238 := Tconnect.Create;
connect1238.NodeField := 'value_changed';
connect1238.ProtoField := 'r_index_distal_changed';
{ METHOD .Connect }
IS1235.Connect := connect1238;
{ METHOD .IS }
OrientationInterpolator1234.IS := IS1235;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1234]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1234.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1240 := TOrientationInterpolatorNode.Create;
IS1241 := TIS.Create;
connect1242 := Tconnect.Create;
connect1242.NodeField := 'key';
connect1242.ProtoField := 'r_index_metacarpal_key';
{ METHOD .Connect }
IS1241.Connect := connect1242;
connect1243 := Tconnect.Create;
connect1243.NodeField := 'keyValue';
connect1243.ProtoField := 'r_index_metacarpal_keyValue';
{ METHOD .Connect }
IS1241.Connect := connect1243;
end;

procedure InitHAnimBehaviorPrototypesPart76;
begin

connect1244 := Tconnect.Create;
connect1244.NodeField := 'value_changed';
connect1244.ProtoField := 'r_index_metacarpal_changed';
{ METHOD .Connect }
IS1241.Connect := connect1244;
{ METHOD .IS }
OrientationInterpolator1240.IS := IS1241;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1240]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1240.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1246 := TOrientationInterpolatorNode.Create;
IS1247 := TIS.Create;
connect1248 := Tconnect.Create;
connect1248.NodeField := 'key';
connect1248.ProtoField := 'r_index_middle_key';
{ METHOD .Connect }
IS1247.Connect := connect1248;
connect1249 := Tconnect.Create;
connect1249.NodeField := 'keyValue';
connect1249.ProtoField := 'r_index_middle_keyValue';
{ METHOD .Connect }
IS1247.Connect := connect1249;
connect1250 := Tconnect.Create;
connect1250.NodeField := 'value_changed';
connect1250.ProtoField := 'r_index_middle_changed';
{ METHOD .Connect }
IS1247.Connect := connect1250;
{ METHOD .IS }
OrientationInterpolator1246.IS := IS1247;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1246]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1246.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1252 := TOrientationInterpolatorNode.Create;
IS1253 := TIS.Create;
connect1254 := Tconnect.Create;
connect1254.NodeField := 'key';
connect1254.ProtoField := 'r_index_proximal_key';
{ METHOD .Connect }
IS1253.Connect := connect1254;
connect1255 := Tconnect.Create;
connect1255.NodeField := 'keyValue';
connect1255.ProtoField := 'r_index_proximal_keyValue';
{ METHOD .Connect }
IS1253.Connect := connect1255;
connect1256 := Tconnect.Create;
connect1256.NodeField := 'value_changed';
connect1256.ProtoField := 'r_index_proximal_changed';
{ METHOD .Connect }
IS1253.Connect := connect1256;
{ METHOD .IS }
OrientationInterpolator1252.IS := IS1253;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1252]);
end;

procedure InitHAnimBehaviorPrototypesPart77;
begin

{ Original "BehaviorClock.EventFraction_changed TO r_index_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1252.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1258 := TOrientationInterpolatorNode.Create;
IS1259 := TIS.Create;
connect1260 := Tconnect.Create;
connect1260.NodeField := 'key';
connect1260.ProtoField := 'r_knee_key';
{ METHOD .Connect }
IS1259.Connect := connect1260;
connect1261 := Tconnect.Create;
connect1261.NodeField := 'keyValue';
connect1261.ProtoField := 'r_knee_keyValue';
{ METHOD .Connect }
IS1259.Connect := connect1261;
connect1262 := Tconnect.Create;
connect1262.NodeField := 'value_changed';
connect1262.ProtoField := 'r_knee_changed';
{ METHOD .Connect }
IS1259.Connect := connect1262;
{ METHOD .IS }
OrientationInterpolator1258.IS := IS1259;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1258]);
{ Original "BehaviorClock.EventFraction_changed TO r_knee_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_knee_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1258.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1264 := TOrientationInterpolatorNode.Create;
IS1265 := TIS.Create;
connect1266 := Tconnect.Create;
connect1266.NodeField := 'key';
connect1266.ProtoField := 'r_metatarsal_key';
{ METHOD .Connect }
IS1265.Connect := connect1266;
connect1267 := Tconnect.Create;
connect1267.NodeField := 'keyValue';
connect1267.ProtoField := 'r_metatarsal_keyValue';
{ METHOD .Connect }
IS1265.Connect := connect1267;
connect1268 := Tconnect.Create;
connect1268.NodeField := 'value_changed';
connect1268.ProtoField := 'r_metatarsal_changed';
{ METHOD .Connect }
IS1265.Connect := connect1268;
{ METHOD .IS }
OrientationInterpolator1264.IS := IS1265;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1264]);
{ Original "BehaviorClock.EventFraction_changed TO r_metatarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_metatarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1264.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1270 := TOrientationInterpolatorNode.Create;
IS1271 := TIS.Create;
connect1272 := Tconnect.Create;
connect1272.NodeField := 'key';
connect1272.ProtoField := 'r_middistal_key';
end;

procedure InitHAnimBehaviorPrototypesPart78;
begin

{ METHOD .Connect }
IS1271.Connect := connect1272;
connect1273 := Tconnect.Create;
connect1273.NodeField := 'keyValue';
connect1273.ProtoField := 'r_middistal_keyValue';
{ METHOD .Connect }
IS1271.Connect := connect1273;
connect1274 := Tconnect.Create;
connect1274.NodeField := 'value_changed';
connect1274.ProtoField := 'r_middistal_changed';
{ METHOD .Connect }
IS1271.Connect := connect1274;
{ METHOD .IS }
OrientationInterpolator1270.IS := IS1271;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1270]);
{ Original "BehaviorClock.EventFraction_changed TO r_middistal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middistal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1270.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1276 := TOrientationInterpolatorNode.Create;
IS1277 := TIS.Create;
connect1278 := Tconnect.Create;
connect1278.NodeField := 'key';
connect1278.ProtoField := 'r_middle0_key';
{ METHOD .Connect }
IS1277.Connect := connect1278;
connect1279 := Tconnect.Create;
connect1279.NodeField := 'keyValue';
connect1279.ProtoField := 'r_middle0_keyValue';
{ METHOD .Connect }
IS1277.Connect := connect1279;
connect1280 := Tconnect.Create;
connect1280.NodeField := 'value_changed';
connect1280.ProtoField := 'r_middle0_changed';
{ METHOD .Connect }
IS1277.Connect := connect1280;
{ METHOD .IS }
OrientationInterpolator1276.IS := IS1277;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1276]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1276.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1282 := TOrientationInterpolatorNode.Create;
IS1283 := TIS.Create;
connect1284 := Tconnect.Create;
connect1284.NodeField := 'key';
connect1284.ProtoField := 'r_middle1_key';
{ METHOD .Connect }
IS1283.Connect := connect1284;
connect1285 := Tconnect.Create;
connect1285.NodeField := 'keyValue';
connect1285.ProtoField := 'r_middle1_keyValue';
{ METHOD .Connect }
IS1283.Connect := connect1285;
connect1286 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart79;
begin

connect1286.NodeField := 'value_changed';
connect1286.ProtoField := 'r_middle1_changed';
{ METHOD .Connect }
IS1283.Connect := connect1286;
{ METHOD .IS }
OrientationInterpolator1282.IS := IS1283;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1282]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1282.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1288 := TOrientationInterpolatorNode.Create;
IS1289 := TIS.Create;
connect1290 := Tconnect.Create;
connect1290.NodeField := 'key';
connect1290.ProtoField := 'r_middle2_key';
{ METHOD .Connect }
IS1289.Connect := connect1290;
connect1291 := Tconnect.Create;
connect1291.NodeField := 'keyValue';
connect1291.ProtoField := 'r_middle2_keyValue';
{ METHOD .Connect }
IS1289.Connect := connect1291;
connect1292 := Tconnect.Create;
connect1292.NodeField := 'value_changed';
connect1292.ProtoField := 'r_middle2_changed';
{ METHOD .Connect }
IS1289.Connect := connect1292;
{ METHOD .IS }
OrientationInterpolator1288.IS := IS1289;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1288]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1288.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1294 := TOrientationInterpolatorNode.Create;
IS1295 := TIS.Create;
connect1296 := Tconnect.Create;
connect1296.NodeField := 'key';
connect1296.ProtoField := 'r_middle3_key';
{ METHOD .Connect }
IS1295.Connect := connect1296;
connect1297 := Tconnect.Create;
connect1297.NodeField := 'keyValue';
connect1297.ProtoField := 'r_middle3_keyValue';
{ METHOD .Connect }
IS1295.Connect := connect1297;
connect1298 := Tconnect.Create;
connect1298.NodeField := 'value_changed';
connect1298.ProtoField := 'r_middle3_changed';
{ METHOD .Connect }
IS1295.Connect := connect1298;
{ METHOD .IS }
OrientationInterpolator1294.IS := IS1295;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1294]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1294.EventSet_fraction);
end;

procedure InitHAnimBehaviorPrototypesPart80;
begin

{ METHOD .AddX3DROUTE }
OrientationInterpolator1300 := TOrientationInterpolatorNode.Create;
IS1301 := TIS.Create;
connect1302 := Tconnect.Create;
connect1302.NodeField := 'key';
connect1302.ProtoField := 'r_middle_distal_key';
{ METHOD .Connect }
IS1301.Connect := connect1302;
connect1303 := Tconnect.Create;
connect1303.NodeField := 'keyValue';
connect1303.ProtoField := 'r_middle_distal_keyValue';
{ METHOD .Connect }
IS1301.Connect := connect1303;
connect1304 := Tconnect.Create;
connect1304.NodeField := 'value_changed';
connect1304.ProtoField := 'r_middle_distal_changed';
{ METHOD .Connect }
IS1301.Connect := connect1304;
{ METHOD .IS }
OrientationInterpolator1300.IS := IS1301;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1300]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1300.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1306 := TOrientationInterpolatorNode.Create;
IS1307 := TIS.Create;
connect1308 := Tconnect.Create;
connect1308.NodeField := 'key';
connect1308.ProtoField := 'r_middle_metacarpal_key';
{ METHOD .Connect }
IS1307.Connect := connect1308;
connect1309 := Tconnect.Create;
connect1309.NodeField := 'keyValue';
connect1309.ProtoField := 'r_middle_metacarpal_keyValue';
{ METHOD .Connect }
IS1307.Connect := connect1309;
connect1310 := Tconnect.Create;
connect1310.NodeField := 'value_changed';
connect1310.ProtoField := 'r_middle_metacarpal_changed';
{ METHOD .Connect }
IS1307.Connect := connect1310;
{ METHOD .IS }
OrientationInterpolator1306.IS := IS1307;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1306]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1306.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1312 := TOrientationInterpolatorNode.Create;
IS1313 := TIS.Create;
connect1314 := Tconnect.Create;
connect1314.NodeField := 'key';
connect1314.ProtoField := 'r_middle_middle_key';
{ METHOD .Connect }
IS1313.Connect := connect1314;
end;

procedure InitHAnimBehaviorPrototypesPart81;
begin

connect1315 := Tconnect.Create;
connect1315.NodeField := 'keyValue';
connect1315.ProtoField := 'r_middle_middle_keyValue';
{ METHOD .Connect }
IS1313.Connect := connect1315;
connect1316 := Tconnect.Create;
connect1316.NodeField := 'value_changed';
connect1316.ProtoField := 'r_middle_middle_changed';
{ METHOD .Connect }
IS1313.Connect := connect1316;
{ METHOD .IS }
OrientationInterpolator1312.IS := IS1313;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1312]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1312.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1318 := TOrientationInterpolatorNode.Create;
IS1319 := TIS.Create;
connect1320 := Tconnect.Create;
connect1320.NodeField := 'key';
connect1320.ProtoField := 'r_middle_proximal_key';
{ METHOD .Connect }
IS1319.Connect := connect1320;
connect1321 := Tconnect.Create;
connect1321.NodeField := 'keyValue';
connect1321.ProtoField := 'r_middle_proximal_keyValue';
{ METHOD .Connect }
IS1319.Connect := connect1321;
connect1322 := Tconnect.Create;
connect1322.NodeField := 'value_changed';
connect1322.ProtoField := 'r_middle_proximal_changed';
{ METHOD .Connect }
IS1319.Connect := connect1322;
{ METHOD .IS }
OrientationInterpolator1318.IS := IS1319;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1318]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1318.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1324 := TOrientationInterpolatorNode.Create;
IS1325 := TIS.Create;
connect1326 := Tconnect.Create;
connect1326.NodeField := 'key';
connect1326.ProtoField := 'r_midproximal_key';
{ METHOD .Connect }
IS1325.Connect := connect1326;
connect1327 := Tconnect.Create;
connect1327.NodeField := 'keyValue';
connect1327.ProtoField := 'r_midproximal_keyValue';
{ METHOD .Connect }
IS1325.Connect := connect1327;
connect1328 := Tconnect.Create;
connect1328.NodeField := 'value_changed';
end;

procedure InitHAnimBehaviorPrototypesPart82;
begin

connect1328.ProtoField := 'r_midproximal_changed';
{ METHOD .Connect }
IS1325.Connect := connect1328;
{ METHOD .IS }
OrientationInterpolator1324.IS := IS1325;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1324]);
{ Original "BehaviorClock.EventFraction_changed TO r_midproximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_midproximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1324.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1330 := TOrientationInterpolatorNode.Create;
IS1331 := TIS.Create;
connect1332 := Tconnect.Create;
connect1332.NodeField := 'key';
connect1332.ProtoField := 'r_midtarsal_key';
{ METHOD .Connect }
IS1331.Connect := connect1332;
connect1333 := Tconnect.Create;
connect1333.NodeField := 'keyValue';
connect1333.ProtoField := 'r_midtarsal_keyValue';
{ METHOD .Connect }
IS1331.Connect := connect1333;
connect1334 := Tconnect.Create;
connect1334.NodeField := 'value_changed';
connect1334.ProtoField := 'r_midtarsal_changed';
{ METHOD .Connect }
IS1331.Connect := connect1334;
{ METHOD .IS }
OrientationInterpolator1330.IS := IS1331;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1330]);
{ Original "BehaviorClock.EventFraction_changed TO r_midtarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_midtarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1330.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1336 := TOrientationInterpolatorNode.Create;
IS1337 := TIS.Create;
connect1338 := Tconnect.Create;
connect1338.NodeField := 'key';
connect1338.ProtoField := 'r_pinky0_key';
{ METHOD .Connect }
IS1337.Connect := connect1338;
connect1339 := Tconnect.Create;
connect1339.NodeField := 'keyValue';
connect1339.ProtoField := 'r_pinky0_keyValue';
{ METHOD .Connect }
IS1337.Connect := connect1339;
connect1340 := Tconnect.Create;
connect1340.NodeField := 'value_changed';
connect1340.ProtoField := 'r_pinky0_changed';
{ METHOD .Connect }
IS1337.Connect := connect1340;
{ METHOD .IS }
OrientationInterpolator1336.IS := IS1337;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1336]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1336.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1342 := TOrientationInterpolatorNode.Create;
end;

procedure InitHAnimBehaviorPrototypesPart83;
begin

IS1343 := TIS.Create;
connect1344 := Tconnect.Create;
connect1344.NodeField := 'key';
connect1344.ProtoField := 'r_pinky1_key';
{ METHOD .Connect }
IS1343.Connect := connect1344;
connect1345 := Tconnect.Create;
connect1345.NodeField := 'keyValue';
connect1345.ProtoField := 'r_pinky1_keyValue';
{ METHOD .Connect }
IS1343.Connect := connect1345;
connect1346 := Tconnect.Create;
connect1346.NodeField := 'value_changed';
connect1346.ProtoField := 'r_pinky1_changed';
{ METHOD .Connect }
IS1343.Connect := connect1346;
{ METHOD .IS }
OrientationInterpolator1342.IS := IS1343;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1342]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1342.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1348 := TOrientationInterpolatorNode.Create;
IS1349 := TIS.Create;
connect1350 := Tconnect.Create;
connect1350.NodeField := 'key';
connect1350.ProtoField := 'r_pinky2_key';
{ METHOD .Connect }
IS1349.Connect := connect1350;
connect1351 := Tconnect.Create;
connect1351.NodeField := 'keyValue';
connect1351.ProtoField := 'r_pinky2_keyValue';
{ METHOD .Connect }
IS1349.Connect := connect1351;
connect1352 := Tconnect.Create;
connect1352.NodeField := 'value_changed';
connect1352.ProtoField := 'r_pinky2_changed';
{ METHOD .Connect }
IS1349.Connect := connect1352;
{ METHOD .IS }
OrientationInterpolator1348.IS := IS1349;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1348]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1348.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1354 := TOrientationInterpolatorNode.Create;
IS1355 := TIS.Create;
connect1356 := Tconnect.Create;
connect1356.NodeField := 'key';
connect1356.ProtoField := 'r_pinky3_key';
{ METHOD .Connect }
IS1355.Connect := connect1356;
connect1357 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart84;
begin

connect1357.NodeField := 'keyValue';
connect1357.ProtoField := 'r_pinky3_keyValue';
{ METHOD .Connect }
IS1355.Connect := connect1357;
connect1358 := Tconnect.Create;
connect1358.NodeField := 'value_changed';
connect1358.ProtoField := 'r_pinky3_changed';
{ METHOD .Connect }
IS1355.Connect := connect1358;
{ METHOD .IS }
OrientationInterpolator1354.IS := IS1355;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1354]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1354.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1360 := TOrientationInterpolatorNode.Create;
IS1361 := TIS.Create;
connect1362 := Tconnect.Create;
connect1362.NodeField := 'key';
connect1362.ProtoField := 'r_pinky_distal_key';
{ METHOD .Connect }
IS1361.Connect := connect1362;
connect1363 := Tconnect.Create;
connect1363.NodeField := 'keyValue';
connect1363.ProtoField := 'r_pinky_distal_keyValue';
{ METHOD .Connect }
IS1361.Connect := connect1363;
connect1364 := Tconnect.Create;
connect1364.NodeField := 'value_changed';
connect1364.ProtoField := 'r_pinky_distal_changed';
{ METHOD .Connect }
IS1361.Connect := connect1364;
{ METHOD .IS }
OrientationInterpolator1360.IS := IS1361;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1360]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1360.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1366 := TOrientationInterpolatorNode.Create;
IS1367 := TIS.Create;
connect1368 := Tconnect.Create;
connect1368.NodeField := 'key';
connect1368.ProtoField := 'r_pinky_metacarpal_key';
{ METHOD .Connect }
IS1367.Connect := connect1368;
connect1369 := Tconnect.Create;
connect1369.NodeField := 'keyValue';
connect1369.ProtoField := 'r_pinky_metacarpal_keyValue';
{ METHOD .Connect }
IS1367.Connect := connect1369;
connect1370 := Tconnect.Create;
connect1370.NodeField := 'value_changed';
connect1370.ProtoField := 'r_pinky_metacarpal_changed';
end;

procedure InitHAnimBehaviorPrototypesPart85;
begin

{ METHOD .Connect }
IS1367.Connect := connect1370;
{ METHOD .IS }
OrientationInterpolator1366.IS := IS1367;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1366]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1366.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1372 := TOrientationInterpolatorNode.Create;
IS1373 := TIS.Create;
connect1374 := Tconnect.Create;
connect1374.NodeField := 'key';
connect1374.ProtoField := 'r_pinky_middle_key';
{ METHOD .Connect }
IS1373.Connect := connect1374;
connect1375 := Tconnect.Create;
connect1375.NodeField := 'keyValue';
connect1375.ProtoField := 'r_pinky_middle_keyValue';
{ METHOD .Connect }
IS1373.Connect := connect1375;
connect1376 := Tconnect.Create;
connect1376.NodeField := 'value_changed';
connect1376.ProtoField := 'r_pinky_middle_changed';
{ METHOD .Connect }
IS1373.Connect := connect1376;
{ METHOD .IS }
OrientationInterpolator1372.IS := IS1373;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1372]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1372.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1378 := TOrientationInterpolatorNode.Create;
IS1379 := TIS.Create;
connect1380 := Tconnect.Create;
connect1380.NodeField := 'key';
connect1380.ProtoField := 'r_pinky_proximal_key';
{ METHOD .Connect }
IS1379.Connect := connect1380;
connect1381 := Tconnect.Create;
connect1381.NodeField := 'keyValue';
connect1381.ProtoField := 'r_pinky_proximal_keyValue';
{ METHOD .Connect }
IS1379.Connect := connect1381;
connect1382 := Tconnect.Create;
connect1382.NodeField := 'value_changed';
connect1382.ProtoField := 'r_pinky_proximal_changed';
{ METHOD .Connect }
IS1379.Connect := connect1382;
{ METHOD .IS }
OrientationInterpolator1378.IS := IS1379;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1378]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1378.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1384 := TOrientationInterpolatorNode.Create;
IS1385 := TIS.Create;
end;

procedure InitHAnimBehaviorPrototypesPart86;
begin

connect1386 := Tconnect.Create;
connect1386.NodeField := 'key';
connect1386.ProtoField := 'r_ring0_key';
{ METHOD .Connect }
IS1385.Connect := connect1386;
connect1387 := Tconnect.Create;
connect1387.NodeField := 'keyValue';
connect1387.ProtoField := 'r_ring0_keyValue';
{ METHOD .Connect }
IS1385.Connect := connect1387;
connect1388 := Tconnect.Create;
connect1388.NodeField := 'value_changed';
connect1388.ProtoField := 'r_ring0_changed';
{ METHOD .Connect }
IS1385.Connect := connect1388;
{ METHOD .IS }
OrientationInterpolator1384.IS := IS1385;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1384]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1384.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1390 := TOrientationInterpolatorNode.Create;
IS1391 := TIS.Create;
connect1392 := Tconnect.Create;
connect1392.NodeField := 'key';
connect1392.ProtoField := 'r_ring1_key';
{ METHOD .Connect }
IS1391.Connect := connect1392;
connect1393 := Tconnect.Create;
connect1393.NodeField := 'keyValue';
connect1393.ProtoField := 'r_ring1_keyValue';
{ METHOD .Connect }
IS1391.Connect := connect1393;
connect1394 := Tconnect.Create;
connect1394.NodeField := 'value_changed';
connect1394.ProtoField := 'r_ring1_changed';
{ METHOD .Connect }
IS1391.Connect := connect1394;
{ METHOD .IS }
OrientationInterpolator1390.IS := IS1391;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1390]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1390.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1396 := TOrientationInterpolatorNode.Create;
IS1397 := TIS.Create;
connect1398 := Tconnect.Create;
connect1398.NodeField := 'key';
connect1398.ProtoField := 'r_ring2_key';
{ METHOD .Connect }
IS1397.Connect := connect1398;
connect1399 := Tconnect.Create;
connect1399.NodeField := 'keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart87;
begin

connect1399.ProtoField := 'r_ring2_keyValue';
{ METHOD .Connect }
IS1397.Connect := connect1399;
connect1400 := Tconnect.Create;
connect1400.NodeField := 'value_changed';
connect1400.ProtoField := 'r_ring2_changed';
{ METHOD .Connect }
IS1397.Connect := connect1400;
{ METHOD .IS }
OrientationInterpolator1396.IS := IS1397;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1396]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1396.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1402 := TOrientationInterpolatorNode.Create;
IS1403 := TIS.Create;
connect1404 := Tconnect.Create;
connect1404.NodeField := 'key';
connect1404.ProtoField := 'r_ring3_key';
{ METHOD .Connect }
IS1403.Connect := connect1404;
connect1405 := Tconnect.Create;
connect1405.NodeField := 'keyValue';
connect1405.ProtoField := 'r_ring3_keyValue';
{ METHOD .Connect }
IS1403.Connect := connect1405;
connect1406 := Tconnect.Create;
connect1406.NodeField := 'value_changed';
connect1406.ProtoField := 'r_ring3_changed';
{ METHOD .Connect }
IS1403.Connect := connect1406;
{ METHOD .IS }
OrientationInterpolator1402.IS := IS1403;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1402]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1402.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1408 := TOrientationInterpolatorNode.Create;
IS1409 := TIS.Create;
connect1410 := Tconnect.Create;
connect1410.NodeField := 'key';
connect1410.ProtoField := 'r_ring_distal_key';
{ METHOD .Connect }
IS1409.Connect := connect1410;
connect1411 := Tconnect.Create;
connect1411.NodeField := 'keyValue';
connect1411.ProtoField := 'r_ring_distal_keyValue';
{ METHOD .Connect }
IS1409.Connect := connect1411;
connect1412 := Tconnect.Create;
connect1412.NodeField := 'value_changed';
connect1412.ProtoField := 'r_ring_distal_changed';
{ METHOD .Connect }
IS1409.Connect := connect1412;
end;

procedure InitHAnimBehaviorPrototypesPart88;
begin

{ METHOD .IS }
OrientationInterpolator1408.IS := IS1409;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1408]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1408.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1414 := TOrientationInterpolatorNode.Create;
IS1415 := TIS.Create;
connect1416 := Tconnect.Create;
connect1416.NodeField := 'key';
connect1416.ProtoField := 'r_ring_metacarpal_key';
{ METHOD .Connect }
IS1415.Connect := connect1416;
connect1417 := Tconnect.Create;
connect1417.NodeField := 'keyValue';
connect1417.ProtoField := 'r_ring_metacarpal_keyValue';
{ METHOD .Connect }
IS1415.Connect := connect1417;
connect1418 := Tconnect.Create;
connect1418.NodeField := 'value_changed';
connect1418.ProtoField := 'r_ring_metacarpal_changed';
{ METHOD .Connect }
IS1415.Connect := connect1418;
{ METHOD .IS }
OrientationInterpolator1414.IS := IS1415;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1414]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1414.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1420 := TOrientationInterpolatorNode.Create;
IS1421 := TIS.Create;
connect1422 := Tconnect.Create;
connect1422.NodeField := 'key';
connect1422.ProtoField := 'r_ring_middle_key';
{ METHOD .Connect }
IS1421.Connect := connect1422;
connect1423 := Tconnect.Create;
connect1423.NodeField := 'keyValue';
connect1423.ProtoField := 'r_ring_middle_keyValue';
{ METHOD .Connect }
IS1421.Connect := connect1423;
connect1424 := Tconnect.Create;
connect1424.NodeField := 'value_changed';
connect1424.ProtoField := 'r_ring_middle_changed';
{ METHOD .Connect }
IS1421.Connect := connect1424;
{ METHOD .IS }
OrientationInterpolator1420.IS := IS1421;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1420]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1420.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1426 := TOrientationInterpolatorNode.Create;
IS1427 := TIS.Create;
connect1428 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart89;
begin

connect1428.NodeField := 'key';
connect1428.ProtoField := 'r_ring_proximal_key';
{ METHOD .Connect }
IS1427.Connect := connect1428;
connect1429 := Tconnect.Create;
connect1429.NodeField := 'keyValue';
connect1429.ProtoField := 'r_ring_proximal_keyValue';
{ METHOD .Connect }
IS1427.Connect := connect1429;
connect1430 := Tconnect.Create;
connect1430.NodeField := 'value_changed';
connect1430.ProtoField := 'r_ring_proximal_changed';
{ METHOD .Connect }
IS1427.Connect := connect1430;
{ METHOD .IS }
OrientationInterpolator1426.IS := IS1427;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1426]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1426.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1432 := TOrientationInterpolatorNode.Create;
IS1433 := TIS.Create;
connect1434 := Tconnect.Create;
connect1434.NodeField := 'key';
connect1434.ProtoField := 'r_scapula_key';
{ METHOD .Connect }
IS1433.Connect := connect1434;
connect1435 := Tconnect.Create;
connect1435.NodeField := 'keyValue';
connect1435.ProtoField := 'r_scapula_keyValue';
{ METHOD .Connect }
IS1433.Connect := connect1435;
connect1436 := Tconnect.Create;
connect1436.NodeField := 'value_changed';
connect1436.ProtoField := 'r_scapula_changed';
{ METHOD .Connect }
IS1433.Connect := connect1436;
{ METHOD .IS }
OrientationInterpolator1432.IS := IS1433;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1432]);
{ Original "BehaviorClock.EventFraction_changed TO r_scapula_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_scapula_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1432.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1438 := TOrientationInterpolatorNode.Create;
IS1439 := TIS.Create;
connect1440 := Tconnect.Create;
connect1440.NodeField := 'key';
connect1440.ProtoField := 'r_shoulder_key';
{ METHOD .Connect }
IS1439.Connect := connect1440;
connect1441 := Tconnect.Create;
connect1441.NodeField := 'keyValue';
connect1441.ProtoField := 'r_shoulder_keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart90;
begin

{ METHOD .Connect }
IS1439.Connect := connect1441;
connect1442 := Tconnect.Create;
connect1442.NodeField := 'value_changed';
connect1442.ProtoField := 'r_shoulder_changed';
{ METHOD .Connect }
IS1439.Connect := connect1442;
{ METHOD .IS }
OrientationInterpolator1438.IS := IS1439;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1438]);
{ Original "BehaviorClock.EventFraction_changed TO r_shoulder_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_shoulder_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1438.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1444 := TOrientationInterpolatorNode.Create;
IS1445 := TIS.Create;
connect1446 := Tconnect.Create;
connect1446.NodeField := 'key';
connect1446.ProtoField := 'r_sternoclavicular_key';
{ METHOD .Connect }
IS1445.Connect := connect1446;
connect1447 := Tconnect.Create;
connect1447.NodeField := 'keyValue';
connect1447.ProtoField := 'r_sternoclavicular_keyValue';
{ METHOD .Connect }
IS1445.Connect := connect1447;
connect1448 := Tconnect.Create;
connect1448.NodeField := 'value_changed';
connect1448.ProtoField := 'r_sternoclavicular_changed';
{ METHOD .Connect }
IS1445.Connect := connect1448;
{ METHOD .IS }
OrientationInterpolator1444.IS := IS1445;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1444]);
{ Original "BehaviorClock.EventFraction_changed TO r_sternoclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_sternoclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1444.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1450 := TOrientationInterpolatorNode.Create;
IS1451 := TIS.Create;
connect1452 := Tconnect.Create;
connect1452.NodeField := 'key';
connect1452.ProtoField := 'r_subtalar_key';
{ METHOD .Connect }
IS1451.Connect := connect1452;
connect1453 := Tconnect.Create;
connect1453.NodeField := 'keyValue';
connect1453.ProtoField := 'r_subtalar_keyValue';
{ METHOD .Connect }
IS1451.Connect := connect1453;
connect1454 := Tconnect.Create;
connect1454.NodeField := 'value_changed';
connect1454.ProtoField := 'r_subtalar_changed';
{ METHOD .Connect }
IS1451.Connect := connect1454;
{ METHOD .IS }
OrientationInterpolator1450.IS := IS1451;
end;

procedure InitHAnimBehaviorPrototypesPart91;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1450]);
{ Original "BehaviorClock.EventFraction_changed TO r_subtalar_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_subtalar_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1450.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1456 := TOrientationInterpolatorNode.Create;
IS1457 := TIS.Create;
connect1458 := Tconnect.Create;
connect1458.NodeField := 'key';
connect1458.ProtoField := 'r_thigh_key';
{ METHOD .Connect }
IS1457.Connect := connect1458;
connect1459 := Tconnect.Create;
connect1459.NodeField := 'keyValue';
connect1459.ProtoField := 'r_thigh_keyValue';
{ METHOD .Connect }
IS1457.Connect := connect1459;
connect1460 := Tconnect.Create;
connect1460.NodeField := 'value_changed';
connect1460.ProtoField := 'r_thigh_changed';
{ METHOD .Connect }
IS1457.Connect := connect1460;
{ METHOD .IS }
OrientationInterpolator1456.IS := IS1457;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1456]);
{ Original "BehaviorClock.EventFraction_changed TO r_thigh_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thigh_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1456.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1462 := TOrientationInterpolatorNode.Create;
IS1463 := TIS.Create;
connect1464 := Tconnect.Create;
connect1464.NodeField := 'key';
connect1464.ProtoField := 'r_thumb1_key';
{ METHOD .Connect }
IS1463.Connect := connect1464;
connect1465 := Tconnect.Create;
connect1465.NodeField := 'keyValue';
connect1465.ProtoField := 'r_thumb1_keyValue';
{ METHOD .Connect }
IS1463.Connect := connect1465;
connect1466 := Tconnect.Create;
connect1466.NodeField := 'value_changed';
connect1466.ProtoField := 'r_thumb1_changed';
{ METHOD .Connect }
IS1463.Connect := connect1466;
{ METHOD .IS }
OrientationInterpolator1462.IS := IS1463;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1462]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1462.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
IS1469 := TIS.Create;
connect1470 := Tconnect.Create;
connect1470.NodeField := 'key';
end;

procedure InitHAnimBehaviorPrototypesPart92;
begin

connect1470.ProtoField := 'r_thumb2_key';
{ METHOD .Connect }
IS1469.Connect := connect1470;
connect1471 := Tconnect.Create;
connect1471.NodeField := 'keyValue';
connect1471.ProtoField := 'r_thumb2_keyValue';
{ METHOD .Connect }
IS1469.Connect := connect1471;
connect1472 := Tconnect.Create;
connect1472.NodeField := 'value_changed';
connect1472.ProtoField := 'r_thumb2_changed';
{ METHOD .Connect }
IS1469.Connect := connect1472;
{ METHOD .IS }
OrientationInterpolator1468.IS := IS1469;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1468]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1468.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
IS1475 := TIS.Create;
connect1476 := Tconnect.Create;
connect1476.NodeField := 'key';
connect1476.ProtoField := 'r_thumb3_key';
{ METHOD .Connect }
IS1475.Connect := connect1476;
connect1477 := Tconnect.Create;
connect1477.NodeField := 'keyValue';
connect1477.ProtoField := 'r_thumb3_keyValue';
{ METHOD .Connect }
IS1475.Connect := connect1477;
connect1478 := Tconnect.Create;
connect1478.NodeField := 'value_changed';
connect1478.ProtoField := 'r_thumb3_changed';
{ METHOD .Connect }
IS1475.Connect := connect1478;
{ METHOD .IS }
OrientationInterpolator1474.IS := IS1475;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1474]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1474.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
IS1481 := TIS.Create;
connect1482 := Tconnect.Create;
connect1482.NodeField := 'key';
connect1482.ProtoField := 'r_thumb_distal_key';
{ METHOD .Connect }
IS1481.Connect := connect1482;
connect1483 := Tconnect.Create;
connect1483.NodeField := 'keyValue';
connect1483.ProtoField := 'r_thumb_distal_keyValue';
{ METHOD .Connect }
IS1481.Connect := connect1483;
end;

procedure InitHAnimBehaviorPrototypesPart93;
begin

connect1484 := Tconnect.Create;
connect1484.NodeField := 'value_changed';
connect1484.ProtoField := 'r_thumb_distal_changed';
{ METHOD .Connect }
IS1481.Connect := connect1484;
{ METHOD .IS }
OrientationInterpolator1480.IS := IS1481;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1480]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1480.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1486 := TOrientationInterpolatorNode.Create;
IS1487 := TIS.Create;
connect1488 := Tconnect.Create;
connect1488.NodeField := 'key';
connect1488.ProtoField := 'r_thumb_metacarpal_key';
{ METHOD .Connect }
IS1487.Connect := connect1488;
connect1489 := Tconnect.Create;
connect1489.NodeField := 'keyValue';
connect1489.ProtoField := 'r_thumb_metacarpal_keyValue';
{ METHOD .Connect }
IS1487.Connect := connect1489;
connect1490 := Tconnect.Create;
connect1490.NodeField := 'value_changed';
connect1490.ProtoField := 'r_thumb_metacarpal_changed';
{ METHOD .Connect }
IS1487.Connect := connect1490;
{ METHOD .IS }
OrientationInterpolator1486.IS := IS1487;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1486]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1486.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1492 := TOrientationInterpolatorNode.Create;
IS1493 := TIS.Create;
connect1494 := Tconnect.Create;
connect1494.NodeField := 'key';
connect1494.ProtoField := 'r_thumb_proximal_key';
{ METHOD .Connect }
IS1493.Connect := connect1494;
connect1495 := Tconnect.Create;
connect1495.NodeField := 'keyValue';
connect1495.ProtoField := 'r_thumb_proximal_keyValue';
{ METHOD .Connect }
IS1493.Connect := connect1495;
connect1496 := Tconnect.Create;
connect1496.NodeField := 'value_changed';
connect1496.ProtoField := 'r_thumb_proximal_changed';
{ METHOD .Connect }
IS1493.Connect := connect1496;
{ METHOD .IS }
OrientationInterpolator1492.IS := IS1493;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1492]);
end;

procedure InitHAnimBehaviorPrototypesPart94;
begin

{ Original "BehaviorClock.EventFraction_changed TO r_thumb_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1492.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1498 := TOrientationInterpolatorNode.Create;
IS1499 := TIS.Create;
connect1500 := Tconnect.Create;
connect1500.NodeField := 'key';
connect1500.ProtoField := 'r_upperarm_key';
{ METHOD .Connect }
IS1499.Connect := connect1500;
connect1501 := Tconnect.Create;
connect1501.NodeField := 'keyValue';
connect1501.ProtoField := 'r_upperarm_keyValue';
{ METHOD .Connect }
IS1499.Connect := connect1501;
connect1502 := Tconnect.Create;
connect1502.NodeField := 'value_changed';
connect1502.ProtoField := 'r_upperarm_changed';
{ METHOD .Connect }
IS1499.Connect := connect1502;
{ METHOD .IS }
OrientationInterpolator1498.IS := IS1499;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1498]);
{ Original "BehaviorClock.EventFraction_changed TO r_upperarm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_upperarm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1498.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1504 := TOrientationInterpolatorNode.Create;
IS1505 := TIS.Create;
connect1506 := Tconnect.Create;
connect1506.NodeField := 'key';
connect1506.ProtoField := 'r_wrist_key';
{ METHOD .Connect }
IS1505.Connect := connect1506;
connect1507 := Tconnect.Create;
connect1507.NodeField := 'keyValue';
connect1507.ProtoField := 'r_wrist_keyValue';
{ METHOD .Connect }
IS1505.Connect := connect1507;
connect1508 := Tconnect.Create;
connect1508.NodeField := 'value_changed';
connect1508.ProtoField := 'r_wrist_changed';
{ METHOD .Connect }
IS1505.Connect := connect1508;
{ METHOD .IS }
OrientationInterpolator1504.IS := IS1505;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1504]);
{ Original "BehaviorClock.EventFraction_changed TO r_wrist_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_wrist_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1504.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1510 := TOrientationInterpolatorNode.Create;
IS1511 := TIS.Create;
connect1512 := Tconnect.Create;
connect1512.NodeField := 'key';
connect1512.ProtoField := 'sacroiliac_key';
end;

procedure InitHAnimBehaviorPrototypesPart95;
begin

{ METHOD .Connect }
IS1511.Connect := connect1512;
connect1513 := Tconnect.Create;
connect1513.NodeField := 'keyValue';
connect1513.ProtoField := 'sacroiliac_keyValue';
{ METHOD .Connect }
IS1511.Connect := connect1513;
connect1514 := Tconnect.Create;
connect1514.NodeField := 'value_changed';
connect1514.ProtoField := 'sacroiliac_changed';
{ METHOD .Connect }
IS1511.Connect := connect1514;
{ METHOD .IS }
OrientationInterpolator1510.IS := IS1511;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1510]);
{ Original "BehaviorClock.EventFraction_changed TO sacroiliac_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO sacroiliac_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1510.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1516 := TOrientationInterpolatorNode.Create;
IS1517 := TIS.Create;
connect1518 := Tconnect.Create;
connect1518.NodeField := 'key';
connect1518.ProtoField := 'sacrum_key';
{ METHOD .Connect }
IS1517.Connect := connect1518;
connect1519 := Tconnect.Create;
connect1519.NodeField := 'keyValue';
connect1519.ProtoField := 'sacrum_keyValue';
{ METHOD .Connect }
IS1517.Connect := connect1519;
connect1520 := Tconnect.Create;
connect1520.NodeField := 'value_changed';
connect1520.ProtoField := 'sacrum_changed';
{ METHOD .Connect }
IS1517.Connect := connect1520;
{ METHOD .IS }
OrientationInterpolator1516.IS := IS1517;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1516]);
{ Original "BehaviorClock.EventFraction_changed TO sacrum_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO sacrum_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1516.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1522 := TOrientationInterpolatorNode.Create;
IS1523 := TIS.Create;
connect1524 := Tconnect.Create;
connect1524.NodeField := 'key';
connect1524.ProtoField := 'skull_key';
{ METHOD .Connect }
IS1523.Connect := connect1524;
connect1525 := Tconnect.Create;
connect1525.NodeField := 'keyValue';
connect1525.ProtoField := 'skull_keyValue';
{ METHOD .Connect }
IS1523.Connect := connect1525;
connect1526 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart96;
begin

connect1526.NodeField := 'value_changed';
connect1526.ProtoField := 'skull_changed';
{ METHOD .Connect }
IS1523.Connect := connect1526;
{ METHOD .IS }
OrientationInterpolator1522.IS := IS1523;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1522]);
{ Original "BehaviorClock.EventFraction_changed TO skull_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO skull_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1522.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1528 := TOrientationInterpolatorNode.Create;
IS1529 := TIS.Create;
connect1530 := Tconnect.Create;
connect1530.NodeField := 'key';
connect1530.ProtoField := 'skullbase_key';
{ METHOD .Connect }
IS1529.Connect := connect1530;
connect1531 := Tconnect.Create;
connect1531.NodeField := 'keyValue';
connect1531.ProtoField := 'skullbase_keyValue';
{ METHOD .Connect }
IS1529.Connect := connect1531;
connect1532 := Tconnect.Create;
connect1532.NodeField := 'value_changed';
connect1532.ProtoField := 'skullbase_changed';
{ METHOD .Connect }
IS1529.Connect := connect1532;
{ METHOD .IS }
OrientationInterpolator1528.IS := IS1529;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1528]);
{ Original "BehaviorClock.EventFraction_changed TO skullbase_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO skullbase_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1528.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1534 := TOrientationInterpolatorNode.Create;
IS1535 := TIS.Create;
connect1536 := Tconnect.Create;
connect1536.NodeField := 'key';
connect1536.ProtoField := 't1_key';
{ METHOD .Connect }
IS1535.Connect := connect1536;
connect1537 := Tconnect.Create;
connect1537.NodeField := 'keyValue';
connect1537.ProtoField := 't1_keyValue';
{ METHOD .Connect }
IS1535.Connect := connect1537;
connect1538 := Tconnect.Create;
connect1538.NodeField := 'value_changed';
connect1538.ProtoField := 't1_changed';
{ METHOD .Connect }
IS1535.Connect := connect1538;
{ METHOD .IS }
OrientationInterpolator1534.IS := IS1535;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1534]);
{ Original "BehaviorClock.EventFraction_changed TO t1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1534.EventSet_fraction);
end;

procedure InitHAnimBehaviorPrototypesPart97;
begin

{ METHOD .AddX3DROUTE }
OrientationInterpolator1540 := TOrientationInterpolatorNode.Create;
IS1541 := TIS.Create;
connect1542 := Tconnect.Create;
connect1542.NodeField := 'key';
connect1542.ProtoField := 't2_key';
{ METHOD .Connect }
IS1541.Connect := connect1542;
connect1543 := Tconnect.Create;
connect1543.NodeField := 'keyValue';
connect1543.ProtoField := 't2_keyValue';
{ METHOD .Connect }
IS1541.Connect := connect1543;
connect1544 := Tconnect.Create;
connect1544.NodeField := 'value_changed';
connect1544.ProtoField := 't2_changed';
{ METHOD .Connect }
IS1541.Connect := connect1544;
{ METHOD .IS }
OrientationInterpolator1540.IS := IS1541;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1540]);
{ Original "BehaviorClock.EventFraction_changed TO t2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1540.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1546 := TOrientationInterpolatorNode.Create;
IS1547 := TIS.Create;
connect1548 := Tconnect.Create;
connect1548.NodeField := 'key';
connect1548.ProtoField := 't3_key';
{ METHOD .Connect }
IS1547.Connect := connect1548;
connect1549 := Tconnect.Create;
connect1549.NodeField := 'keyValue';
connect1549.ProtoField := 't3_keyValue';
{ METHOD .Connect }
IS1547.Connect := connect1549;
connect1550 := Tconnect.Create;
connect1550.NodeField := 'value_changed';
connect1550.ProtoField := 't3_changed';
{ METHOD .Connect }
IS1547.Connect := connect1550;
{ METHOD .IS }
OrientationInterpolator1546.IS := IS1547;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1546]);
{ Original "BehaviorClock.EventFraction_changed TO t3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1546.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1552 := TOrientationInterpolatorNode.Create;
IS1553 := TIS.Create;
connect1554 := Tconnect.Create;
connect1554.NodeField := 'key';
connect1554.ProtoField := 't4_key';
{ METHOD .Connect }
IS1553.Connect := connect1554;
end;

procedure InitHAnimBehaviorPrototypesPart98;
begin

connect1555 := Tconnect.Create;
connect1555.NodeField := 'keyValue';
connect1555.ProtoField := 't4_keyValue';
{ METHOD .Connect }
IS1553.Connect := connect1555;
connect1556 := Tconnect.Create;
connect1556.NodeField := 'value_changed';
connect1556.ProtoField := 't4_changed';
{ METHOD .Connect }
IS1553.Connect := connect1556;
{ METHOD .IS }
OrientationInterpolator1552.IS := IS1553;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1552]);
{ Original "BehaviorClock.EventFraction_changed TO t4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1552.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1558 := TOrientationInterpolatorNode.Create;
IS1559 := TIS.Create;
connect1560 := Tconnect.Create;
connect1560.NodeField := 'key';
connect1560.ProtoField := 't5_key';
{ METHOD .Connect }
IS1559.Connect := connect1560;
connect1561 := Tconnect.Create;
connect1561.NodeField := 'keyValue';
connect1561.ProtoField := 't5_keyValue';
{ METHOD .Connect }
IS1559.Connect := connect1561;
connect1562 := Tconnect.Create;
connect1562.NodeField := 'value_changed';
connect1562.ProtoField := 't5_changed';
{ METHOD .Connect }
IS1559.Connect := connect1562;
{ METHOD .IS }
OrientationInterpolator1558.IS := IS1559;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1558]);
{ Original "BehaviorClock.EventFraction_changed TO t5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1558.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1564 := TOrientationInterpolatorNode.Create;
IS1565 := TIS.Create;
connect1566 := Tconnect.Create;
connect1566.NodeField := 'key';
connect1566.ProtoField := 't6_key';
{ METHOD .Connect }
IS1565.Connect := connect1566;
connect1567 := Tconnect.Create;
connect1567.NodeField := 'keyValue';
connect1567.ProtoField := 't6_keyValue';
{ METHOD .Connect }
IS1565.Connect := connect1567;
connect1568 := Tconnect.Create;
connect1568.NodeField := 'value_changed';
end;

procedure InitHAnimBehaviorPrototypesPart99;
begin

connect1568.ProtoField := 't6_changed';
{ METHOD .Connect }
IS1565.Connect := connect1568;
{ METHOD .IS }
OrientationInterpolator1564.IS := IS1565;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1564]);
{ Original "BehaviorClock.EventFraction_changed TO t6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1564.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1570 := TOrientationInterpolatorNode.Create;
IS1571 := TIS.Create;
connect1572 := Tconnect.Create;
connect1572.NodeField := 'key';
connect1572.ProtoField := 't7_key';
{ METHOD .Connect }
IS1571.Connect := connect1572;
connect1573 := Tconnect.Create;
connect1573.NodeField := 'keyValue';
connect1573.ProtoField := 't7_keyValue';
{ METHOD .Connect }
IS1571.Connect := connect1573;
connect1574 := Tconnect.Create;
connect1574.NodeField := 'value_changed';
connect1574.ProtoField := 't7_changed';
{ METHOD .Connect }
IS1571.Connect := connect1574;
{ METHOD .IS }
OrientationInterpolator1570.IS := IS1571;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1570]);
{ Original "BehaviorClock.EventFraction_changed TO t7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1570.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1576 := TOrientationInterpolatorNode.Create;
IS1577 := TIS.Create;
connect1578 := Tconnect.Create;
connect1578.NodeField := 'key';
connect1578.ProtoField := 't8_key';
{ METHOD .Connect }
IS1577.Connect := connect1578;
connect1579 := Tconnect.Create;
connect1579.NodeField := 'keyValue';
connect1579.ProtoField := 't8_keyValue';
{ METHOD .Connect }
IS1577.Connect := connect1579;
connect1580 := Tconnect.Create;
connect1580.NodeField := 'value_changed';
connect1580.ProtoField := 't8_changed';
{ METHOD .Connect }
IS1577.Connect := connect1580;
{ METHOD .IS }
OrientationInterpolator1576.IS := IS1577;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1576]);
{ Original "BehaviorClock.EventFraction_changed TO t8_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t8_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1576.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1582 := TOrientationInterpolatorNode.Create;
end;

procedure InitHAnimBehaviorPrototypesPart100;
begin

IS1583 := TIS.Create;
connect1584 := Tconnect.Create;
connect1584.NodeField := 'key';
connect1584.ProtoField := 't9_key';
{ METHOD .Connect }
IS1583.Connect := connect1584;
connect1585 := Tconnect.Create;
connect1585.NodeField := 'keyValue';
connect1585.ProtoField := 't9_keyValue';
{ METHOD .Connect }
IS1583.Connect := connect1585;
connect1586 := Tconnect.Create;
connect1586.NodeField := 'value_changed';
connect1586.ProtoField := 't9_changed';
{ METHOD .Connect }
IS1583.Connect := connect1586;
{ METHOD .IS }
OrientationInterpolator1582.IS := IS1583;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1582]);
{ Original "BehaviorClock.EventFraction_changed TO t9_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t9_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1582.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1588 := TOrientationInterpolatorNode.Create;
IS1589 := TIS.Create;
connect1590 := Tconnect.Create;
connect1590.NodeField := 'key';
connect1590.ProtoField := 't10_key';
{ METHOD .Connect }
IS1589.Connect := connect1590;
connect1591 := Tconnect.Create;
connect1591.NodeField := 'keyValue';
connect1591.ProtoField := 't10_keyValue';
{ METHOD .Connect }
IS1589.Connect := connect1591;
connect1592 := Tconnect.Create;
connect1592.NodeField := 'value_changed';
connect1592.ProtoField := 't10_changed';
{ METHOD .Connect }
IS1589.Connect := connect1592;
{ METHOD .IS }
OrientationInterpolator1588.IS := IS1589;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1588]);
{ Original "BehaviorClock.EventFraction_changed TO t10_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t10_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1588.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1594 := TOrientationInterpolatorNode.Create;
IS1595 := TIS.Create;
connect1596 := Tconnect.Create;
connect1596.NodeField := 'key';
connect1596.ProtoField := 't11_key';
{ METHOD .Connect }
IS1595.Connect := connect1596;
connect1597 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart101;
begin

connect1597.NodeField := 'keyValue';
connect1597.ProtoField := 't11_keyValue';
{ METHOD .Connect }
IS1595.Connect := connect1597;
connect1598 := Tconnect.Create;
connect1598.NodeField := 'value_changed';
connect1598.ProtoField := 't11_changed';
{ METHOD .Connect }
IS1595.Connect := connect1598;
{ METHOD .IS }
OrientationInterpolator1594.IS := IS1595;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1594]);
{ Original "BehaviorClock.EventFraction_changed TO t11_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t11_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1594.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1600 := TOrientationInterpolatorNode.Create;
IS1601 := TIS.Create;
connect1602 := Tconnect.Create;
connect1602.NodeField := 'key';
connect1602.ProtoField := 't12_key';
{ METHOD .Connect }
IS1601.Connect := connect1602;
connect1603 := Tconnect.Create;
connect1603.NodeField := 'keyValue';
connect1603.ProtoField := 't12_keyValue';
{ METHOD .Connect }
IS1601.Connect := connect1603;
connect1604 := Tconnect.Create;
connect1604.NodeField := 'value_changed';
connect1604.ProtoField := 't12_changed';
{ METHOD .Connect }
IS1601.Connect := connect1604;
{ METHOD .IS }
OrientationInterpolator1600.IS := IS1601;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1600]);
{ Original "BehaviorClock.EventFraction_changed TO t12_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t12_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1600.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1606 := TOrientationInterpolatorNode.Create;
IS1607 := TIS.Create;
connect1608 := Tconnect.Create;
connect1608.NodeField := 'key';
connect1608.ProtoField := 'temporomandibular_key';
{ METHOD .Connect }
IS1607.Connect := connect1608;
connect1609 := Tconnect.Create;
connect1609.NodeField := 'keyValue';
connect1609.ProtoField := 'temporomandibular_keyValue';
{ METHOD .Connect }
IS1607.Connect := connect1609;
connect1610 := Tconnect.Create;
connect1610.NodeField := 'value_changed';
connect1610.ProtoField := 'temporomandibular_changed';
end;

procedure InitHAnimBehaviorPrototypesPart102;
begin

{ METHOD .Connect }
IS1607.Connect := connect1610;
{ METHOD .IS }
OrientationInterpolator1606.IS := IS1607;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1606]);
{ Original "BehaviorClock.EventFraction_changed TO temporomandibular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO temporomandibular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1606.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1612 := TOrientationInterpolatorNode.Create;
IS1613 := TIS.Create;
connect1614 := Tconnect.Create;
connect1614.NodeField := 'key';
connect1614.ProtoField := 'vc1_key';
{ METHOD .Connect }
IS1613.Connect := connect1614;
connect1615 := Tconnect.Create;
connect1615.NodeField := 'keyValue';
connect1615.ProtoField := 'vc1_keyValue';
{ METHOD .Connect }
IS1613.Connect := connect1615;
connect1616 := Tconnect.Create;
connect1616.NodeField := 'value_changed';
connect1616.ProtoField := 'vc1_changed';
{ METHOD .Connect }
IS1613.Connect := connect1616;
{ METHOD .IS }
OrientationInterpolator1612.IS := IS1613;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1612]);
{ Original "BehaviorClock.EventFraction_changed TO vc1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1612.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1618 := TOrientationInterpolatorNode.Create;
IS1619 := TIS.Create;
connect1620 := Tconnect.Create;
connect1620.NodeField := 'key';
connect1620.ProtoField := 'vc2_key';
{ METHOD .Connect }
IS1619.Connect := connect1620;
connect1621 := Tconnect.Create;
connect1621.NodeField := 'keyValue';
connect1621.ProtoField := 'vc2_keyValue';
{ METHOD .Connect }
IS1619.Connect := connect1621;
connect1622 := Tconnect.Create;
connect1622.NodeField := 'value_changed';
connect1622.ProtoField := 'vc2_changed';
{ METHOD .Connect }
IS1619.Connect := connect1622;
{ METHOD .IS }
OrientationInterpolator1618.IS := IS1619;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1618]);
{ Original "BehaviorClock.EventFraction_changed TO vc2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1618.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1624 := TOrientationInterpolatorNode.Create;
IS1625 := TIS.Create;
end;

procedure InitHAnimBehaviorPrototypesPart103;
begin

connect1626 := Tconnect.Create;
connect1626.NodeField := 'key';
connect1626.ProtoField := 'vc3_key';
{ METHOD .Connect }
IS1625.Connect := connect1626;
connect1627 := Tconnect.Create;
connect1627.NodeField := 'keyValue';
connect1627.ProtoField := 'vc3_keyValue';
{ METHOD .Connect }
IS1625.Connect := connect1627;
connect1628 := Tconnect.Create;
connect1628.NodeField := 'value_changed';
connect1628.ProtoField := 'vc3_changed';
{ METHOD .Connect }
IS1625.Connect := connect1628;
{ METHOD .IS }
OrientationInterpolator1624.IS := IS1625;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1624]);
{ Original "BehaviorClock.EventFraction_changed TO vc3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1624.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1630 := TOrientationInterpolatorNode.Create;
IS1631 := TIS.Create;
connect1632 := Tconnect.Create;
connect1632.NodeField := 'key';
connect1632.ProtoField := 'vc4_key';
{ METHOD .Connect }
IS1631.Connect := connect1632;
connect1633 := Tconnect.Create;
connect1633.NodeField := 'keyValue';
connect1633.ProtoField := 'vc4_keyValue';
{ METHOD .Connect }
IS1631.Connect := connect1633;
connect1634 := Tconnect.Create;
connect1634.NodeField := 'value_changed';
connect1634.ProtoField := 'vc4_changed';
{ METHOD .Connect }
IS1631.Connect := connect1634;
{ METHOD .IS }
OrientationInterpolator1630.IS := IS1631;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1630]);
{ Original "BehaviorClock.EventFraction_changed TO vc4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1630.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1636 := TOrientationInterpolatorNode.Create;
IS1637 := TIS.Create;
connect1638 := Tconnect.Create;
connect1638.NodeField := 'key';
connect1638.ProtoField := 'vc5_key';
{ METHOD .Connect }
IS1637.Connect := connect1638;
connect1639 := Tconnect.Create;
connect1639.NodeField := 'keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart104;
begin

connect1639.ProtoField := 'vc5_keyValue';
{ METHOD .Connect }
IS1637.Connect := connect1639;
connect1640 := Tconnect.Create;
connect1640.NodeField := 'value_changed';
connect1640.ProtoField := 'vc5_changed';
{ METHOD .Connect }
IS1637.Connect := connect1640;
{ METHOD .IS }
OrientationInterpolator1636.IS := IS1637;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1636]);
{ Original "BehaviorClock.EventFraction_changed TO vc5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1636.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1642 := TOrientationInterpolatorNode.Create;
IS1643 := TIS.Create;
connect1644 := Tconnect.Create;
connect1644.NodeField := 'key';
connect1644.ProtoField := 'vc6_key';
{ METHOD .Connect }
IS1643.Connect := connect1644;
connect1645 := Tconnect.Create;
connect1645.NodeField := 'keyValue';
connect1645.ProtoField := 'vc6_keyValue';
{ METHOD .Connect }
IS1643.Connect := connect1645;
connect1646 := Tconnect.Create;
connect1646.NodeField := 'value_changed';
connect1646.ProtoField := 'vc6_changed';
{ METHOD .Connect }
IS1643.Connect := connect1646;
{ METHOD .IS }
OrientationInterpolator1642.IS := IS1643;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1642]);
{ Original "BehaviorClock.EventFraction_changed TO vc6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1642.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1648 := TOrientationInterpolatorNode.Create;
IS1649 := TIS.Create;
connect1650 := Tconnect.Create;
connect1650.NodeField := 'key';
connect1650.ProtoField := 'vc7_key';
{ METHOD .Connect }
IS1649.Connect := connect1650;
connect1651 := Tconnect.Create;
connect1651.NodeField := 'keyValue';
connect1651.ProtoField := 'vc7_keyValue';
{ METHOD .Connect }
IS1649.Connect := connect1651;
connect1652 := Tconnect.Create;
connect1652.NodeField := 'value_changed';
connect1652.ProtoField := 'vc7_changed';
{ METHOD .Connect }
IS1649.Connect := connect1652;
end;

procedure InitHAnimBehaviorPrototypesPart105;
begin

{ METHOD .IS }
OrientationInterpolator1648.IS := IS1649;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1648]);
{ Original "BehaviorClock.EventFraction_changed TO vc7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1648.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1654 := TOrientationInterpolatorNode.Create;
IS1655 := TIS.Create;
connect1656 := Tconnect.Create;
connect1656.NodeField := 'key';
connect1656.ProtoField := 'vl1_key';
{ METHOD .Connect }
IS1655.Connect := connect1656;
connect1657 := Tconnect.Create;
connect1657.NodeField := 'keyValue';
connect1657.ProtoField := 'vl1_keyValue';
{ METHOD .Connect }
IS1655.Connect := connect1657;
connect1658 := Tconnect.Create;
connect1658.NodeField := 'value_changed';
connect1658.ProtoField := 'vl1_changed';
{ METHOD .Connect }
IS1655.Connect := connect1658;
{ METHOD .IS }
OrientationInterpolator1654.IS := IS1655;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1654]);
{ Original "BehaviorClock.EventFraction_changed TO vl1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1654.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1660 := TOrientationInterpolatorNode.Create;
IS1661 := TIS.Create;
connect1662 := Tconnect.Create;
connect1662.NodeField := 'key';
connect1662.ProtoField := 'vl2_key';
{ METHOD .Connect }
IS1661.Connect := connect1662;
connect1663 := Tconnect.Create;
connect1663.NodeField := 'keyValue';
connect1663.ProtoField := 'vl2_keyValue';
{ METHOD .Connect }
IS1661.Connect := connect1663;
connect1664 := Tconnect.Create;
connect1664.NodeField := 'value_changed';
connect1664.ProtoField := 'vl2_changed';
{ METHOD .Connect }
IS1661.Connect := connect1664;
{ METHOD .IS }
OrientationInterpolator1660.IS := IS1661;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1660]);
{ Original "BehaviorClock.EventFraction_changed TO vl2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1660.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1666 := TOrientationInterpolatorNode.Create;
IS1667 := TIS.Create;
connect1668 := Tconnect.Create;
end;

procedure InitHAnimBehaviorPrototypesPart106;
begin

connect1668.NodeField := 'key';
connect1668.ProtoField := 'vl3_key';
{ METHOD .Connect }
IS1667.Connect := connect1668;
connect1669 := Tconnect.Create;
connect1669.NodeField := 'keyValue';
connect1669.ProtoField := 'vl3_keyValue';
{ METHOD .Connect }
IS1667.Connect := connect1669;
connect1670 := Tconnect.Create;
connect1670.NodeField := 'value_changed';
connect1670.ProtoField := 'vl3_changed';
{ METHOD .Connect }
IS1667.Connect := connect1670;
{ METHOD .IS }
OrientationInterpolator1666.IS := IS1667;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1666]);
{ Original "BehaviorClock.EventFraction_changed TO vl3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1666.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1672 := TOrientationInterpolatorNode.Create;
IS1673 := TIS.Create;
connect1674 := Tconnect.Create;
connect1674.NodeField := 'key';
connect1674.ProtoField := 'vl4_key';
{ METHOD .Connect }
IS1673.Connect := connect1674;
connect1675 := Tconnect.Create;
connect1675.NodeField := 'keyValue';
connect1675.ProtoField := 'vl4_keyValue';
{ METHOD .Connect }
IS1673.Connect := connect1675;
connect1676 := Tconnect.Create;
connect1676.NodeField := 'value_changed';
connect1676.ProtoField := 'vl4_changed';
{ METHOD .Connect }
IS1673.Connect := connect1676;
{ METHOD .IS }
OrientationInterpolator1672.IS := IS1673;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1672]);
{ Original "BehaviorClock.EventFraction_changed TO vl4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1672.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1678 := TOrientationInterpolatorNode.Create;
IS1679 := TIS.Create;
connect1680 := Tconnect.Create;
connect1680.NodeField := 'key';
connect1680.ProtoField := 'vl5_key';
{ METHOD .Connect }
IS1679.Connect := connect1680;
connect1681 := Tconnect.Create;
connect1681.NodeField := 'keyValue';
connect1681.ProtoField := 'vl5_keyValue';
end;

procedure InitHAnimBehaviorPrototypesPart107;
begin

{ METHOD .Connect }
IS1679.Connect := connect1681;
connect1682 := Tconnect.Create;
connect1682.NodeField := 'value_changed';
connect1682.ProtoField := 'vl5_changed';
{ METHOD .Connect }
IS1679.Connect := connect1682;
{ METHOD .IS }
OrientationInterpolator1678.IS := IS1679;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1678]);
{ Original "BehaviorClock.EventFraction_changed TO vl5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1678.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1684 := TOrientationInterpolatorNode.Create;
IS1685 := TIS.Create;
connect1686 := Tconnect.Create;
connect1686.NodeField := 'key';
connect1686.ProtoField := 'vt1_key';
{ METHOD .Connect }
IS1685.Connect := connect1686;
connect1687 := Tconnect.Create;
connect1687.NodeField := 'keyValue';
connect1687.ProtoField := 'vt1_keyValue';
{ METHOD .Connect }
IS1685.Connect := connect1687;
connect1688 := Tconnect.Create;
connect1688.NodeField := 'value_changed';
connect1688.ProtoField := 'vt1_changed';
{ METHOD .Connect }
IS1685.Connect := connect1688;
{ METHOD .IS }
OrientationInterpolator1684.IS := IS1685;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1684]);
{ Original "BehaviorClock.EventFraction_changed TO vt1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1684.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1690 := TOrientationInterpolatorNode.Create;
IS1691 := TIS.Create;
connect1692 := Tconnect.Create;
connect1692.NodeField := 'key';
connect1692.ProtoField := 'vt2_key';
{ METHOD .Connect }
IS1691.Connect := connect1692;
connect1693 := Tconnect.Create;
connect1693.NodeField := 'keyValue';
connect1693.ProtoField := 'vt2_keyValue';
{ METHOD .Connect }
IS1691.Connect := connect1693;
connect1694 := Tconnect.Create;
connect1694.NodeField := 'value_changed';
connect1694.ProtoField := 'vt2_changed';
{ METHOD .Connect }
IS1691.Connect := connect1694;
{ METHOD .IS }
OrientationInterpolator1690.IS := IS1691;
end;

procedure InitHAnimBehaviorPrototypesPart108;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1690]);
{ Original "BehaviorClock.EventFraction_changed TO vt2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1690.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1696 := TOrientationInterpolatorNode.Create;
IS1697 := TIS.Create;
connect1698 := Tconnect.Create;
connect1698.NodeField := 'key';
connect1698.ProtoField := 'vt3_key';
{ METHOD .Connect }
IS1697.Connect := connect1698;
connect1699 := Tconnect.Create;
connect1699.NodeField := 'keyValue';
connect1699.ProtoField := 'vt3_keyValue';
{ METHOD .Connect }
IS1697.Connect := connect1699;
connect1700 := Tconnect.Create;
connect1700.NodeField := 'value_changed';
connect1700.ProtoField := 'vt3_changed';
{ METHOD .Connect }
IS1697.Connect := connect1700;
{ METHOD .IS }
OrientationInterpolator1696.IS := IS1697;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1696]);
{ Original "BehaviorClock.EventFraction_changed TO vt3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1696.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1702 := TOrientationInterpolatorNode.Create;
IS1703 := TIS.Create;
connect1704 := Tconnect.Create;
connect1704.NodeField := 'key';
connect1704.ProtoField := 'vt4_key';
{ METHOD .Connect }
IS1703.Connect := connect1704;
connect1705 := Tconnect.Create;
connect1705.NodeField := 'keyValue';
connect1705.ProtoField := 'vt4_keyValue';
{ METHOD .Connect }
IS1703.Connect := connect1705;
connect1706 := Tconnect.Create;
connect1706.NodeField := 'value_changed';
connect1706.ProtoField := 'vt4_changed';
{ METHOD .Connect }
IS1703.Connect := connect1706;
{ METHOD .IS }
OrientationInterpolator1702.IS := IS1703;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1702]);
{ Original "BehaviorClock.EventFraction_changed TO vt4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1702.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1708 := TOrientationInterpolatorNode.Create;
IS1709 := TIS.Create;
connect1710 := Tconnect.Create;
connect1710.NodeField := 'key';
end;

procedure InitHAnimBehaviorPrototypesPart109;
begin

connect1710.ProtoField := 'vt5_key';
{ METHOD .Connect }
IS1709.Connect := connect1710;
connect1711 := Tconnect.Create;
connect1711.NodeField := 'keyValue';
connect1711.ProtoField := 'vt5_keyValue';
{ METHOD .Connect }
IS1709.Connect := connect1711;
connect1712 := Tconnect.Create;
connect1712.NodeField := 'value_changed';
connect1712.ProtoField := 'vt5_changed';
{ METHOD .Connect }
IS1709.Connect := connect1712;
{ METHOD .IS }
OrientationInterpolator1708.IS := IS1709;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1708]);
{ Original "BehaviorClock.EventFraction_changed TO vt5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1708.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1714 := TOrientationInterpolatorNode.Create;
IS1715 := TIS.Create;
connect1716 := Tconnect.Create;
connect1716.NodeField := 'key';
connect1716.ProtoField := 'vt6_key';
{ METHOD .Connect }
IS1715.Connect := connect1716;
connect1717 := Tconnect.Create;
connect1717.NodeField := 'keyValue';
connect1717.ProtoField := 'vt6_keyValue';
{ METHOD .Connect }
IS1715.Connect := connect1717;
connect1718 := Tconnect.Create;
connect1718.NodeField := 'value_changed';
connect1718.ProtoField := 'vt6_changed';
{ METHOD .Connect }
IS1715.Connect := connect1718;
{ METHOD .IS }
OrientationInterpolator1714.IS := IS1715;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1714]);
{ Original "BehaviorClock.EventFraction_changed TO vt6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1714.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1720 := TOrientationInterpolatorNode.Create;
IS1721 := TIS.Create;
connect1722 := Tconnect.Create;
connect1722.NodeField := 'key';
connect1722.ProtoField := 'vt7_key';
{ METHOD .Connect }
IS1721.Connect := connect1722;
connect1723 := Tconnect.Create;
connect1723.NodeField := 'keyValue';
connect1723.ProtoField := 'vt7_keyValue';
{ METHOD .Connect }
IS1721.Connect := connect1723;
end;

procedure InitHAnimBehaviorPrototypesPart110;
begin

connect1724 := Tconnect.Create;
connect1724.NodeField := 'value_changed';
connect1724.ProtoField := 'vt7_changed';
{ METHOD .Connect }
IS1721.Connect := connect1724;
{ METHOD .IS }
OrientationInterpolator1720.IS := IS1721;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1720]);
{ Original "BehaviorClock.EventFraction_changed TO vt7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1720.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1726 := TOrientationInterpolatorNode.Create;
IS1727 := TIS.Create;
connect1728 := Tconnect.Create;
connect1728.NodeField := 'key';
connect1728.ProtoField := 'vt8_key';
{ METHOD .Connect }
IS1727.Connect := connect1728;
connect1729 := Tconnect.Create;
connect1729.NodeField := 'keyValue';
connect1729.ProtoField := 'vt8_keyValue';
{ METHOD .Connect }
IS1727.Connect := connect1729;
connect1730 := Tconnect.Create;
connect1730.NodeField := 'value_changed';
connect1730.ProtoField := 'vt8_changed';
{ METHOD .Connect }
IS1727.Connect := connect1730;
{ METHOD .IS }
OrientationInterpolator1726.IS := IS1727;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1726]);
{ Original "BehaviorClock.EventFraction_changed TO vt8_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt8_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1726.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1732 := TOrientationInterpolatorNode.Create;
IS1733 := TIS.Create;
connect1734 := Tconnect.Create;
connect1734.NodeField := 'key';
connect1734.ProtoField := 'vt9_key';
{ METHOD .Connect }
IS1733.Connect := connect1734;
connect1735 := Tconnect.Create;
connect1735.NodeField := 'keyValue';
connect1735.ProtoField := 'vt9_keyValue';
{ METHOD .Connect }
IS1733.Connect := connect1735;
connect1736 := Tconnect.Create;
connect1736.NodeField := 'value_changed';
connect1736.ProtoField := 'vt9_changed';
{ METHOD .Connect }
IS1733.Connect := connect1736;
{ METHOD .IS }
OrientationInterpolator1732.IS := IS1733;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1732]);
end;

procedure InitHAnimBehaviorPrototypesPart111;
begin

{ Original "BehaviorClock.EventFraction_changed TO vt9_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt9_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1732.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1738 := TOrientationInterpolatorNode.Create;
IS1739 := TIS.Create;
connect1740 := Tconnect.Create;
connect1740.NodeField := 'key';
connect1740.ProtoField := 'vt10_key';
{ METHOD .Connect }
IS1739.Connect := connect1740;
connect1741 := Tconnect.Create;
connect1741.NodeField := 'keyValue';
connect1741.ProtoField := 'vt10_keyValue';
{ METHOD .Connect }
IS1739.Connect := connect1741;
connect1742 := Tconnect.Create;
connect1742.NodeField := 'value_changed';
connect1742.ProtoField := 'vt10_changed';
{ METHOD .Connect }
IS1739.Connect := connect1742;
{ METHOD .IS }
OrientationInterpolator1738.IS := IS1739;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1738]);
{ Original "BehaviorClock.EventFraction_changed TO vt10_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt10_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1738.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1744 := TOrientationInterpolatorNode.Create;
IS1745 := TIS.Create;
connect1746 := Tconnect.Create;
connect1746.NodeField := 'key';
connect1746.ProtoField := 'vt11_key';
{ METHOD .Connect }
IS1745.Connect := connect1746;
connect1747 := Tconnect.Create;
connect1747.NodeField := 'keyValue';
connect1747.ProtoField := 'vt11_keyValue';
{ METHOD .Connect }
IS1745.Connect := connect1747;
connect1748 := Tconnect.Create;
connect1748.NodeField := 'value_changed';
connect1748.ProtoField := 'vt11_changed';
{ METHOD .Connect }
IS1745.Connect := connect1748;
{ METHOD .IS }
OrientationInterpolator1744.IS := IS1745;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1744]);
{ Original "BehaviorClock.EventFraction_changed TO vt11_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt11_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1744.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1750 := TOrientationInterpolatorNode.Create;
IS1751 := TIS.Create;
connect1752 := Tconnect.Create;
connect1752.NodeField := 'key';
connect1752.ProtoField := 'vt12_key';
end;

procedure InitHAnimBehaviorPrototypesPart112;
begin

{ METHOD .Connect }
IS1751.Connect := connect1752;
connect1753 := Tconnect.Create;
connect1753.NodeField := 'keyValue';
connect1753.ProtoField := 'vt12_keyValue';
{ METHOD .Connect }
IS1751.Connect := connect1753;
connect1754 := Tconnect.Create;
connect1754.NodeField := 'value_changed';
connect1754.ProtoField := 'vt12_changed';
{ METHOD .Connect }
IS1751.Connect := connect1754;
{ METHOD .IS }
OrientationInterpolator1750.IS := IS1751;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1750]);
{ Original "BehaviorClock.EventFraction_changed TO vt12_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt12_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1750.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype20.AddX3DPrototype([X3DPrototype603]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype20]);
X3DPrototype1756 := TX3DPrototype.Create;
X3DPrototype1756.Appinfo := 'The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.';
X3DInterfaceDeclaration1757 := TX3DInterfaceDeclaration.Create(nil);
{ TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs }
{ accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints }
{ shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs }
{ TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName }
{ TODO: consider addBody, removeBody, addBehavior, removeBehavior }
{ TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName }
SFInt321758 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1757, false, 'supportedLOA');
SFInt321758.Appinfo := 'Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
SFInt321758.Value := '-1';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1757.AddSFInt32([SFInt321758]);
MFNode1759 := TMFNode.CreateUndefined(X3DInterfaceDeclaration1757, false, 'HumanoidArray');
MFNode1759.Appinfo := '[HAnimHumanoid] nodes only';
{ default NULL }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration1757.AddMFNode([MFNode1759]);
SFInt321760 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1757, false, 'whichBody');
SFInt321760.Appinfo := 'whichBody is selected default is initial member of HumanoidArray';
SFInt321760.Value := '-1';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1757.AddSFInt32([SFInt321760]);
SFInt321761 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1757, false, 'set_whichBody');
SFInt321761.Appinfo := 'whichBody is selected default is none';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1757.AddSFInt32([SFInt321761]);
SFInt321762 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1757, false, 'whichBody_changed');
SFInt321762.Appinfo := 'whichBody is selected default is none';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1757.AddSFInt32([SFInt321762]);
MFNode1763 := TMFNode.CreateUndefined(X3DInterfaceDeclaration1757, false, 'hAnimBehaviorNodes');
MFNode1763.Appinfo := '[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.';
{ default NULL }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration1757.AddMFNode([MFNode1763]);
MFBool1764 := TMFBool.CreateUndefined(X3DInterfaceDeclaration1757, false, 'enabledBehaviorsArray');
MFBool1764.Appinfo := 'indicate which HAnimBehavior nodes are activated, empty indicates all enabled true';
{ no default values }
{ METHOD .AddMFBool }
X3DInterfaceDeclaration1757.AddMFBool([MFBool1764]);
end;

procedure InitHAnimBehaviorPrototypesPart113;
begin

SFInt321765 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1757, false, 'enableBehavior');
SFInt321765.Appinfo := 'enable corresponding behavior identified by index number';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1757.AddSFInt32([SFInt321765]);
SFInt321766 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1757, false, 'disableBehavior');
SFInt321766.Appinfo := 'disable corresponding behavior identified by index number';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1757.AddSFInt32([SFInt321766]);
SFTime1767 := TSFTime.CreateUndefined(X3DInterfaceDeclaration1757, false, 'startTime');
SFTime1767.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration1757.AddSFTime([SFTime1767]);
SFTime1768 := TSFTime.CreateUndefined(X3DInterfaceDeclaration1757, false, 'stopTime');
SFTime1768.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration1757.AddSFTime([SFTime1768]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype1756.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration1757]);
X3DPrototype1769 := TX3DPrototype.Create;
Switch1770 := TSwitchNode.Create;
Switch1770.WhichChoice := -1;
IS1771 := TIS.Create;
connect1772 := Tconnect.Create;
connect1772.NodeField := 'whichChoice';
connect1772.ProtoField := 'whichBody';
{ METHOD .Connect }
IS1771.Connect := connect1772;
connect1773 := Tconnect.Create;
connect1773.NodeField := 'children';
connect1773.ProtoField := 'HumanoidArray';
{ METHOD .Connect }
IS1771.Connect := connect1773;
{ METHOD .IS }
Switch1770.IS := IS1771;
{ METHOD .AddSwitch }
X3DPrototype1769.AddSwitch([Switch1770]);
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Group1774 := TGroupNode.Create;
IS1775 := TIS.Create;
connect1776 := Tconnect.Create;
connect1776.NodeField := 'children';
connect1776.ProtoField := 'hAnimBehaviorNodes';
{ METHOD .Connect }
IS1775.Connect := connect1776;
{ METHOD .IS }
Group1774.IS := IS1775;
{ METHOD .AddGroup }
X3DPrototype1769.AddChildren([Group1774]);
TimeSensor1777 := TTimeSensorNode.Create;
IS1778 := TIS.Create;
connect1779 := Tconnect.Create;
connect1779.NodeField := 'startTime';
connect1779.ProtoField := 'startTime';
end;

procedure InitHAnimBehaviorPrototypesPart114;
begin

{ METHOD .Connect }
IS1778.Connect := connect1779;
connect1780 := Tconnect.Create;
connect1780.NodeField := 'stopTime';
connect1780.ProtoField := 'stopTime';
{ METHOD .Connect }
IS1778.Connect := connect1780;
{ METHOD .IS }
TimeSensor1777.IS := IS1778;
{ METHOD .AddTimeSensor }
X3DPrototype1769.AddTimeSensor([TimeSensor1777]);
Switch1781 := TSwitchNode.Create;
Switch1781.WhichChoice := -1;
IS1782 := TIS.Create;
connect1783 := Tconnect.Create;
connect1783.NodeField := 'whichChoice';
connect1783.ProtoField := 'supportedLOA';
{ METHOD .Connect }
IS1782.Connect := connect1783;
{ METHOD .IS }
Switch1781.IS := IS1782;
{ METHOD .AddSwitch }
X3DPrototype1769.AddSwitch([Switch1781]);
Script1784 := TScriptNode.Create;
Script1784.DirectOutput := True;
Script1784.SetUrl(['HAnimBehaviorPrototypesScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js']);
MFNode1785 := TMFNode.CreateUndefined(Script1784, false, 'HumanoidArray');
MFNode1785.Appinfo := '[HAnimHumanoid] nodes only';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(MFNode1785);
SFInt321786 := TSFInt32.CreateUndefined(Script1784, false, 'whichBody');
SFInt321786.Appinfo := 'whichBody is selected default is none';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFInt321786);
SFInt321787 := TSFInt32.CreateUndefined(Script1784, false, 'set_whichBody');
SFInt321787.Appinfo := 'whichBody is selected default is none';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFInt321787);
SFInt321788 := TSFInt32.CreateUndefined(Script1784, false, 'whichBody_changed');
SFInt321788.Appinfo := 'whichBody is selected default is none';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFInt321788);
MFNode1789 := TMFNode.CreateUndefined(Script1784, false, 'hAnimBehaviorNodes');
MFNode1789.Appinfo := '[HAnimBehavior] nodes only';
{ TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed }
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(MFNode1789);
MFBool1790 := TMFBool.CreateUndefined(Script1784, false, 'enabledBehaviorsArray');
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(MFBool1790);
SFInt321791 := TSFInt32.CreateUndefined(Script1784, false, 'enableBehavior');
SFInt321791.Appinfo := 'enable corresponding behavior';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFInt321791);
SFInt321792 := TSFInt32.CreateUndefined(Script1784, false, 'disableBehavior');
end;

procedure InitHAnimBehaviorPrototypesPart115;
begin

SFInt321792.Appinfo := 'enable corresponding behavior';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFInt321792);
SFNode1793 := TSFNode.CreateUndefined(Script1784, false, 'timeSensorNode');
{ METHOD .AddTimeSensor }
SFNode1793.AddTimeSensor([TimeSensor1777]);
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFNode1793);
SFInt321795 := TSFInt32.CreateUndefined(Script1784, false, 'previousBodyIndex');
SFInt321795.Appinfo := 'remember prior body index to avoid unnecessary ROUTE teardown and creation';
SFInt321795.Value := '-1';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFInt321795);
SFBool1796 := TSFBool.CreateUndefined(Script1784, false, 'traceEnabled');
SFBool1796.Value := 'true';
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(SFBool1796);
IS1797 := TIS.Create;
connect1798 := Tconnect.Create;
connect1798.NodeField := 'HumanoidArray';
connect1798.ProtoField := 'HumanoidArray';
{ METHOD .Connect }
IS1797.Connect := connect1798;
connect1799 := Tconnect.Create;
connect1799.NodeField := 'whichBody';
connect1799.ProtoField := 'whichBody';
{ METHOD .Connect }
IS1797.Connect := connect1799;
connect1800 := Tconnect.Create;
connect1800.NodeField := 'set_whichBody';
connect1800.ProtoField := 'set_whichBody';
{ METHOD .Connect }
IS1797.Connect := connect1800;
connect1801 := Tconnect.Create;
connect1801.NodeField := 'whichBody_changed';
connect1801.ProtoField := 'whichBody_changed';
{ METHOD .Connect }
IS1797.Connect := connect1801;
connect1802 := Tconnect.Create;
connect1802.NodeField := 'hAnimBehaviorNodes';
connect1802.ProtoField := 'hAnimBehaviorNodes';
{ METHOD .Connect }
IS1797.Connect := connect1802;
connect1803 := Tconnect.Create;
connect1803.NodeField := 'enabledBehaviorsArray';
connect1803.ProtoField := 'enabledBehaviorsArray';
{ METHOD .Connect }
IS1797.Connect := connect1803;
connect1804 := Tconnect.Create;
connect1804.NodeField := 'enableBehavior';
connect1804.ProtoField := 'enableBehavior';
end;

procedure InitHAnimBehaviorPrototypesPart116;
begin

{ METHOD .Connect }
IS1797.Connect := connect1804;
connect1805 := Tconnect.Create;
connect1805.NodeField := 'disableBehavior';
connect1805.ProtoField := 'disableBehavior';
{ METHOD .Connect }
IS1797.Connect := connect1805;
{ METHOD .Fd.AddCustomField }
Script1784.AddCustomField(IS1797);
{ METHOD .AddScript }
X3DPrototype1769.AddScript([Script1784]);
{ METHOD .AddX3DPrototype }
X3DPrototype1756.AddX3DPrototype([X3DPrototype1769]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype1756]);
{ TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype. }
X3DPrototype1806 := TX3DPrototypeNode.Create;
{ only one PositionInterpolator key/keyValue definition for entire humanoid - optional }
{ must have paired overrides of each key/keyValue array being defined }
MFFloat1807 := TMFFloat.CreateUndefined(X3DPrototype1806, false, 'HumanoidRoot_translation_key');
MFFloat1807.Value := '0 0.25 0.5 0.75 1';
{ METHOD .AddMFFloat }
X3DPrototype1806.AddMFFloat([MFFloat1807]);
MFVec3f1808 := TMFVec3f.CreateUndefined(X3DPrototype1806, false, 'HumanoidRoot_translation_keyValue');
MFVec3f1808.Value := '0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50';
{ METHOD .AddMFVec3f }
X3DPrototype1806.AddMFVec3f([MFVec3f1808]);
MFFloat1809 := TMFFloat.CreateUndefined(X3DPrototype1806, false, 'r_ankle_key');
MFFloat1809.Value := '0 0.5 1';
{ METHOD .AddMFFloat }
X3DPrototype1806.AddMFFloat([MFFloat1809]);
MFRotation1810 := TMFRotation.CreateUndefined(X3DPrototype1806, false, 'r_ankle_keyValue');
MFRotation1810.Value := '0 1 0 0 0 1 0 0.2 0 1 0 0.4';
{ METHOD .AddMFRotation }
X3DPrototype1806.AddMFRotation([MFRotation1810]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype1806]);
X3DPrototype1811 := TX3DPrototypeNode.Create;
MFNode1812 := TMFNode.CreateUndefined(X3DPrototype1811, false, 'HumanoidArray');
HAnimHumanoid1813 := THAnimHumanoidNode.Create;
HAnimHumanoid1813.Version := '2.0';
{ METHOD .AddHAnimHumanoid }
MFNode1812.AddHAnimHumanoid([HAnimHumanoid1813]);
{ METHOD .AddMFNode }
X3DPrototype1811.AddMFNode([MFNode1812]);
SFInt321814 := TSFInt32.CreateUndefined(X3DPrototype1811, false, 'whichBody');
SFInt321814.Value := '0';
{ METHOD .AddSFInt32 }
X3DPrototype1811.AddSFInt32([SFInt321814]);
MFNode1815 := TMFNode.CreateUndefined(X3DPrototype1811, false, 'hAnimBehaviorNodes');
{ METHOD .AddX3DPrototype }
MFNode1815.AddX3DPrototype([X3DPrototype1806]);
{ METHOD .AddMFNode }
X3DPrototype1811.AddMFNode([MFNode1815]);
MFBool1817 := TMFBool.CreateUndefined(X3DPrototype1811, false, 'enabledBehaviorsArray');
MFBool1817.Value := 'true';
{ METHOD .AddMFBool }
X3DPrototype1811.AddMFBool([MFBool1817]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype1811]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group18]);
end;

function CreateHAnimBehaviorPrototypes: TX3DRootNode;
begin
InitHAnimBehaviorPrototypesPart0;
InitHAnimBehaviorPrototypesPart1;
InitHAnimBehaviorPrototypesPart2;
InitHAnimBehaviorPrototypesPart3;
InitHAnimBehaviorPrototypesPart4;
InitHAnimBehaviorPrototypesPart5;
InitHAnimBehaviorPrototypesPart6;
InitHAnimBehaviorPrototypesPart7;
InitHAnimBehaviorPrototypesPart8;
InitHAnimBehaviorPrototypesPart9;
InitHAnimBehaviorPrototypesPart10;
InitHAnimBehaviorPrototypesPart11;
InitHAnimBehaviorPrototypesPart12;
InitHAnimBehaviorPrototypesPart13;
InitHAnimBehaviorPrototypesPart14;
InitHAnimBehaviorPrototypesPart15;
InitHAnimBehaviorPrototypesPart16;
InitHAnimBehaviorPrototypesPart17;
InitHAnimBehaviorPrototypesPart18;
InitHAnimBehaviorPrototypesPart19;
InitHAnimBehaviorPrototypesPart20;
InitHAnimBehaviorPrototypesPart21;
InitHAnimBehaviorPrototypesPart22;
InitHAnimBehaviorPrototypesPart23;
InitHAnimBehaviorPrototypesPart24;
InitHAnimBehaviorPrototypesPart25;
InitHAnimBehaviorPrototypesPart26;
InitHAnimBehaviorPrototypesPart27;
InitHAnimBehaviorPrototypesPart28;
InitHAnimBehaviorPrototypesPart29;
InitHAnimBehaviorPrototypesPart30;
InitHAnimBehaviorPrototypesPart31;
InitHAnimBehaviorPrototypesPart32;
InitHAnimBehaviorPrototypesPart33;
InitHAnimBehaviorPrototypesPart34;
InitHAnimBehaviorPrototypesPart35;
InitHAnimBehaviorPrototypesPart36;
InitHAnimBehaviorPrototypesPart37;
InitHAnimBehaviorPrototypesPart38;
InitHAnimBehaviorPrototypesPart39;
InitHAnimBehaviorPrototypesPart40;
InitHAnimBehaviorPrototypesPart41;
InitHAnimBehaviorPrototypesPart42;
InitHAnimBehaviorPrototypesPart43;
InitHAnimBehaviorPrototypesPart44;
InitHAnimBehaviorPrototypesPart45;
InitHAnimBehaviorPrototypesPart46;
InitHAnimBehaviorPrototypesPart47;
InitHAnimBehaviorPrototypesPart48;
InitHAnimBehaviorPrototypesPart49;
InitHAnimBehaviorPrototypesPart50;
InitHAnimBehaviorPrototypesPart51;
InitHAnimBehaviorPrototypesPart52;
InitHAnimBehaviorPrototypesPart53;
InitHAnimBehaviorPrototypesPart54;
InitHAnimBehaviorPrototypesPart55;
InitHAnimBehaviorPrototypesPart56;
InitHAnimBehaviorPrototypesPart57;
InitHAnimBehaviorPrototypesPart58;
InitHAnimBehaviorPrototypesPart59;
InitHAnimBehaviorPrototypesPart60;
InitHAnimBehaviorPrototypesPart61;
InitHAnimBehaviorPrototypesPart62;
InitHAnimBehaviorPrototypesPart63;
InitHAnimBehaviorPrototypesPart64;
InitHAnimBehaviorPrototypesPart65;
InitHAnimBehaviorPrototypesPart66;
InitHAnimBehaviorPrototypesPart67;
InitHAnimBehaviorPrototypesPart68;
InitHAnimBehaviorPrototypesPart69;
InitHAnimBehaviorPrototypesPart70;
InitHAnimBehaviorPrototypesPart71;
InitHAnimBehaviorPrototypesPart72;
InitHAnimBehaviorPrototypesPart73;
InitHAnimBehaviorPrototypesPart74;
InitHAnimBehaviorPrototypesPart75;
InitHAnimBehaviorPrototypesPart76;
InitHAnimBehaviorPrototypesPart77;
InitHAnimBehaviorPrototypesPart78;
InitHAnimBehaviorPrototypesPart79;
InitHAnimBehaviorPrototypesPart80;
InitHAnimBehaviorPrototypesPart81;
InitHAnimBehaviorPrototypesPart82;
InitHAnimBehaviorPrototypesPart83;
InitHAnimBehaviorPrototypesPart84;
InitHAnimBehaviorPrototypesPart85;
InitHAnimBehaviorPrototypesPart86;
InitHAnimBehaviorPrototypesPart87;
InitHAnimBehaviorPrototypesPart88;
InitHAnimBehaviorPrototypesPart89;
InitHAnimBehaviorPrototypesPart90;
InitHAnimBehaviorPrototypesPart91;
InitHAnimBehaviorPrototypesPart92;
InitHAnimBehaviorPrototypesPart93;
InitHAnimBehaviorPrototypesPart94;
InitHAnimBehaviorPrototypesPart95;
InitHAnimBehaviorPrototypesPart96;
InitHAnimBehaviorPrototypesPart97;
InitHAnimBehaviorPrototypesPart98;
InitHAnimBehaviorPrototypesPart99;
InitHAnimBehaviorPrototypesPart100;
InitHAnimBehaviorPrototypesPart101;
InitHAnimBehaviorPrototypesPart102;
InitHAnimBehaviorPrototypesPart103;
InitHAnimBehaviorPrototypesPart104;
InitHAnimBehaviorPrototypesPart105;
InitHAnimBehaviorPrototypesPart106;
InitHAnimBehaviorPrototypesPart107;
InitHAnimBehaviorPrototypesPart108;
InitHAnimBehaviorPrototypesPart109;
InitHAnimBehaviorPrototypesPart110;
InitHAnimBehaviorPrototypesPart111;
InitHAnimBehaviorPrototypesPart112;
InitHAnimBehaviorPrototypesPart113;
InitHAnimBehaviorPrototypesPart114;
InitHAnimBehaviorPrototypesPart115;
InitHAnimBehaviorPrototypesPart116;
Result := X3D0;
end;

begin
end.
