unit HAnimBehaviorPrototypes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Switch606: TSwitchNode;
PositionInterpolator608: TPositionInterpolatorNode;
OrientationInterpolator611: TOrientationInterpolatorNode;
OrientationInterpolator614: TOrientationInterpolatorNode;
OrientationInterpolator617: TOrientationInterpolatorNode;
OrientationInterpolator620: TOrientationInterpolatorNode;
OrientationInterpolator623: TOrientationInterpolatorNode;
OrientationInterpolator626: TOrientationInterpolatorNode;
OrientationInterpolator629: TOrientationInterpolatorNode;
OrientationInterpolator632: TOrientationInterpolatorNode;
OrientationInterpolator635: TOrientationInterpolatorNode;
OrientationInterpolator638: TOrientationInterpolatorNode;
OrientationInterpolator641: TOrientationInterpolatorNode;
OrientationInterpolator644: TOrientationInterpolatorNode;
OrientationInterpolator647: TOrientationInterpolatorNode;
OrientationInterpolator650: TOrientationInterpolatorNode;
OrientationInterpolator653: TOrientationInterpolatorNode;
OrientationInterpolator656: TOrientationInterpolatorNode;
OrientationInterpolator659: TOrientationInterpolatorNode;
OrientationInterpolator662: TOrientationInterpolatorNode;
OrientationInterpolator665: TOrientationInterpolatorNode;
OrientationInterpolator668: TOrientationInterpolatorNode;
OrientationInterpolator671: TOrientationInterpolatorNode;
OrientationInterpolator674: TOrientationInterpolatorNode;
OrientationInterpolator677: TOrientationInterpolatorNode;
OrientationInterpolator680: TOrientationInterpolatorNode;
OrientationInterpolator683: TOrientationInterpolatorNode;
OrientationInterpolator686: TOrientationInterpolatorNode;
OrientationInterpolator689: TOrientationInterpolatorNode;
OrientationInterpolator692: TOrientationInterpolatorNode;
OrientationInterpolator695: TOrientationInterpolatorNode;
OrientationInterpolator698: TOrientationInterpolatorNode;
OrientationInterpolator701: TOrientationInterpolatorNode;
OrientationInterpolator704: TOrientationInterpolatorNode;
OrientationInterpolator707: TOrientationInterpolatorNode;
OrientationInterpolator710: TOrientationInterpolatorNode;
OrientationInterpolator713: TOrientationInterpolatorNode;
OrientationInterpolator716: TOrientationInterpolatorNode;
OrientationInterpolator719: TOrientationInterpolatorNode;
OrientationInterpolator722: TOrientationInterpolatorNode;
OrientationInterpolator725: TOrientationInterpolatorNode;
OrientationInterpolator728: TOrientationInterpolatorNode;
OrientationInterpolator731: TOrientationInterpolatorNode;
OrientationInterpolator734: TOrientationInterpolatorNode;
OrientationInterpolator737: TOrientationInterpolatorNode;
OrientationInterpolator740: TOrientationInterpolatorNode;
OrientationInterpolator743: TOrientationInterpolatorNode;
OrientationInterpolator746: TOrientationInterpolatorNode;
OrientationInterpolator749: TOrientationInterpolatorNode;
OrientationInterpolator752: TOrientationInterpolatorNode;
OrientationInterpolator755: TOrientationInterpolatorNode;
OrientationInterpolator758: TOrientationInterpolatorNode;
OrientationInterpolator761: TOrientationInterpolatorNode;
OrientationInterpolator764: TOrientationInterpolatorNode;
OrientationInterpolator767: TOrientationInterpolatorNode;
OrientationInterpolator770: TOrientationInterpolatorNode;
OrientationInterpolator773: TOrientationInterpolatorNode;
OrientationInterpolator776: TOrientationInterpolatorNode;
OrientationInterpolator779: TOrientationInterpolatorNode;
OrientationInterpolator782: TOrientationInterpolatorNode;
OrientationInterpolator785: TOrientationInterpolatorNode;
OrientationInterpolator788: TOrientationInterpolatorNode;
OrientationInterpolator791: TOrientationInterpolatorNode;
OrientationInterpolator794: TOrientationInterpolatorNode;
OrientationInterpolator797: TOrientationInterpolatorNode;
OrientationInterpolator800: TOrientationInterpolatorNode;
OrientationInterpolator803: TOrientationInterpolatorNode;
OrientationInterpolator806: TOrientationInterpolatorNode;
OrientationInterpolator809: TOrientationInterpolatorNode;
OrientationInterpolator812: TOrientationInterpolatorNode;
OrientationInterpolator815: TOrientationInterpolatorNode;
OrientationInterpolator818: TOrientationInterpolatorNode;
OrientationInterpolator821: TOrientationInterpolatorNode;
OrientationInterpolator824: TOrientationInterpolatorNode;
OrientationInterpolator827: TOrientationInterpolatorNode;
OrientationInterpolator830: TOrientationInterpolatorNode;
OrientationInterpolator833: TOrientationInterpolatorNode;
OrientationInterpolator836: TOrientationInterpolatorNode;
OrientationInterpolator839: TOrientationInterpolatorNode;
OrientationInterpolator842: TOrientationInterpolatorNode;
OrientationInterpolator845: TOrientationInterpolatorNode;
OrientationInterpolator848: TOrientationInterpolatorNode;
OrientationInterpolator851: TOrientationInterpolatorNode;
OrientationInterpolator854: TOrientationInterpolatorNode;
OrientationInterpolator857: TOrientationInterpolatorNode;
OrientationInterpolator860: TOrientationInterpolatorNode;
OrientationInterpolator863: TOrientationInterpolatorNode;
OrientationInterpolator866: TOrientationInterpolatorNode;
OrientationInterpolator869: TOrientationInterpolatorNode;
OrientationInterpolator872: TOrientationInterpolatorNode;
OrientationInterpolator875: TOrientationInterpolatorNode;
OrientationInterpolator878: TOrientationInterpolatorNode;
OrientationInterpolator881: TOrientationInterpolatorNode;
OrientationInterpolator884: TOrientationInterpolatorNode;
OrientationInterpolator887: TOrientationInterpolatorNode;
OrientationInterpolator890: TOrientationInterpolatorNode;
OrientationInterpolator893: TOrientationInterpolatorNode;
OrientationInterpolator896: TOrientationInterpolatorNode;
OrientationInterpolator899: TOrientationInterpolatorNode;
OrientationInterpolator902: TOrientationInterpolatorNode;
OrientationInterpolator905: TOrientationInterpolatorNode;
OrientationInterpolator908: TOrientationInterpolatorNode;
OrientationInterpolator911: TOrientationInterpolatorNode;
OrientationInterpolator914: TOrientationInterpolatorNode;
OrientationInterpolator917: TOrientationInterpolatorNode;
OrientationInterpolator920: TOrientationInterpolatorNode;
OrientationInterpolator923: TOrientationInterpolatorNode;
OrientationInterpolator926: TOrientationInterpolatorNode;
OrientationInterpolator929: TOrientationInterpolatorNode;
OrientationInterpolator932: TOrientationInterpolatorNode;
OrientationInterpolator935: TOrientationInterpolatorNode;
OrientationInterpolator938: TOrientationInterpolatorNode;
OrientationInterpolator941: TOrientationInterpolatorNode;
OrientationInterpolator944: TOrientationInterpolatorNode;
OrientationInterpolator947: TOrientationInterpolatorNode;
OrientationInterpolator950: TOrientationInterpolatorNode;
OrientationInterpolator953: TOrientationInterpolatorNode;
OrientationInterpolator956: TOrientationInterpolatorNode;
OrientationInterpolator959: TOrientationInterpolatorNode;
OrientationInterpolator962: TOrientationInterpolatorNode;
OrientationInterpolator965: TOrientationInterpolatorNode;
OrientationInterpolator968: TOrientationInterpolatorNode;
OrientationInterpolator971: TOrientationInterpolatorNode;
OrientationInterpolator974: TOrientationInterpolatorNode;
OrientationInterpolator977: TOrientationInterpolatorNode;
OrientationInterpolator980: TOrientationInterpolatorNode;
OrientationInterpolator983: TOrientationInterpolatorNode;
OrientationInterpolator986: TOrientationInterpolatorNode;
OrientationInterpolator989: TOrientationInterpolatorNode;
OrientationInterpolator992: TOrientationInterpolatorNode;
OrientationInterpolator995: TOrientationInterpolatorNode;
OrientationInterpolator998: TOrientationInterpolatorNode;
OrientationInterpolator1001: TOrientationInterpolatorNode;
OrientationInterpolator1004: TOrientationInterpolatorNode;
OrientationInterpolator1007: TOrientationInterpolatorNode;
OrientationInterpolator1010: TOrientationInterpolatorNode;
OrientationInterpolator1013: TOrientationInterpolatorNode;
OrientationInterpolator1016: TOrientationInterpolatorNode;
OrientationInterpolator1019: TOrientationInterpolatorNode;
OrientationInterpolator1022: TOrientationInterpolatorNode;
OrientationInterpolator1025: TOrientationInterpolatorNode;
OrientationInterpolator1028: TOrientationInterpolatorNode;
OrientationInterpolator1031: TOrientationInterpolatorNode;
OrientationInterpolator1034: TOrientationInterpolatorNode;
OrientationInterpolator1037: TOrientationInterpolatorNode;
OrientationInterpolator1040: TOrientationInterpolatorNode;
OrientationInterpolator1043: TOrientationInterpolatorNode;
OrientationInterpolator1046: TOrientationInterpolatorNode;
OrientationInterpolator1049: TOrientationInterpolatorNode;
OrientationInterpolator1052: TOrientationInterpolatorNode;
OrientationInterpolator1055: TOrientationInterpolatorNode;
OrientationInterpolator1058: TOrientationInterpolatorNode;
OrientationInterpolator1061: TOrientationInterpolatorNode;
OrientationInterpolator1064: TOrientationInterpolatorNode;
OrientationInterpolator1067: TOrientationInterpolatorNode;
OrientationInterpolator1070: TOrientationInterpolatorNode;
OrientationInterpolator1073: TOrientationInterpolatorNode;
OrientationInterpolator1076: TOrientationInterpolatorNode;
OrientationInterpolator1079: TOrientationInterpolatorNode;
OrientationInterpolator1082: TOrientationInterpolatorNode;
OrientationInterpolator1085: TOrientationInterpolatorNode;
OrientationInterpolator1088: TOrientationInterpolatorNode;
OrientationInterpolator1091: TOrientationInterpolatorNode;
OrientationInterpolator1094: TOrientationInterpolatorNode;
OrientationInterpolator1097: TOrientationInterpolatorNode;
OrientationInterpolator1100: TOrientationInterpolatorNode;
OrientationInterpolator1103: TOrientationInterpolatorNode;
OrientationInterpolator1106: TOrientationInterpolatorNode;
OrientationInterpolator1109: TOrientationInterpolatorNode;
OrientationInterpolator1112: TOrientationInterpolatorNode;
OrientationInterpolator1115: TOrientationInterpolatorNode;
OrientationInterpolator1118: TOrientationInterpolatorNode;
OrientationInterpolator1121: TOrientationInterpolatorNode;
OrientationInterpolator1124: TOrientationInterpolatorNode;
OrientationInterpolator1127: TOrientationInterpolatorNode;
OrientationInterpolator1130: TOrientationInterpolatorNode;
OrientationInterpolator1133: TOrientationInterpolatorNode;
OrientationInterpolator1136: TOrientationInterpolatorNode;
OrientationInterpolator1139: TOrientationInterpolatorNode;
OrientationInterpolator1142: TOrientationInterpolatorNode;
OrientationInterpolator1145: TOrientationInterpolatorNode;
OrientationInterpolator1148: TOrientationInterpolatorNode;
OrientationInterpolator1151: TOrientationInterpolatorNode;
OrientationInterpolator1154: TOrientationInterpolatorNode;
OrientationInterpolator1157: TOrientationInterpolatorNode;
OrientationInterpolator1160: TOrientationInterpolatorNode;
OrientationInterpolator1163: TOrientationInterpolatorNode;
OrientationInterpolator1166: TOrientationInterpolatorNode;
OrientationInterpolator1169: TOrientationInterpolatorNode;
OrientationInterpolator1172: TOrientationInterpolatorNode;
X3DPrototype1175: TX3DPrototype;
X3DInterfaceDeclaration1176: TX3DInterfaceDeclaration;
SFInt321177: TSFInt32;
MFNode1178: TMFNode;
SFInt321179: TSFInt32;
SFInt321180: TSFInt32;
SFInt321181: TSFInt32;
MFNode1182: TMFNode;
MFBool1183: TMFBool;
SFInt321184: TSFInt32;
SFInt321185: TSFInt32;
SFTime1186: TSFTime;
SFTime1187: TSFTime;
X3DPrototype1188: TX3DPrototype;
Switch1189: TSwitchNode;
Group1191: TGroupNode;
TimeSensor1193: TTimeSensorNode;
Switch1195: TSwitchNode;
Script1197: TScriptNode;
MFNode1198: TMFNode;
SFInt321199: TSFInt32;
SFInt321200: TSFInt32;
SFInt321201: TSFInt32;
MFNode1202: TMFNode;
MFBool1203: TMFBool;
SFInt321204: TSFInt32;
SFInt321205: TSFInt32;
SFNode1206: TSFNode;
TimeSensor1207: TTimeSensorNode;
SFInt321208: TSFInt32;
SFBool1209: TSFBool;
X3DPrototype1211: TX3DPrototypeNode;
MFFloat1212: TMFFloat;
MFVec3f1213: TMFVec3f;
MFFloat1214: TMFFloat;
MFRotation1215: TMFRotation;
X3DPrototype1216: TX3DPrototypeNode;
MFNode1217: TMFNode;
HAnimHumanoid1218: THAnimHumanoidNode;
SFInt321219: TSFInt32;
MFNode1220: TMFNode;
X3DPrototype1221: TX3DPrototypeNode;
MFBool1222: TMFBool;

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
Group18 := TGroupNode.Create;;
WorldInfo19 := TWorldInfoNode.Create;;
WorldInfo19.Title := 'HAnimBehaviorPrototypes.x3d';
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(WorldInfo19);
X3DPrototype20 := TX3DPrototype.Create;;
X3DPrototype20.Appinfo := 'The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.';
X3DPrototype20.Documentation := 'https://www.web3d.org/files/specifications/19774/V1.0/';
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);;
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
end;

procedure InitHAnimBehaviorPrototypesPart1;
begin

SFTime24 := TSFTime.CreateUndefined(X3DInterfaceDeclaration21, false, 'cycleInterval');
SFTime24.Appinfo := 'how long do these interpolators take to execute?';
SFTime24.Value := '1';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration21.AddSFTime([SFTime24]);
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
end;

procedure InitHAnimBehaviorPrototypesPart2;
begin

SFFloat35.Appinfo := 'fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration21.AddSFFloat([SFFloat35]);
MFFloat36 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'HumanoidRoot_translation_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat36]);
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
end;

procedure InitHAnimBehaviorPrototypesPart3;
begin

MFRotation55 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c5_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation55]);
SFRotation56 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'c5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation56]);
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
end;

procedure InitHAnimBehaviorPrototypesPart4;
begin

MFFloat75 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l4_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat75]);
MFRotation76 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l4_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation76]);
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
end;

procedure InitHAnimBehaviorPrototypesPart5;
begin

SFRotation95 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_elbow_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation95]);
MFFloat96 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_eyeball_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat96]);
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
end;

procedure InitHAnimBehaviorPrototypesPart6;
begin

MFRotation115 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forearm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation115]);
SFRotation116 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_forearm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation116]);
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
end;

procedure InitHAnimBehaviorPrototypesPart7;
begin

MFFloat135 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat135]);
MFRotation136 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_index2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation136]);
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
end;

procedure InitHAnimBehaviorPrototypesPart8;
begin

SFRotation155 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_knee_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation155]);
MFFloat156 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_metatarsal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat156]);
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
end;

procedure InitHAnimBehaviorPrototypesPart9;
begin

MFRotation175 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation175]);
SFRotation176 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_middle_distal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation176]);
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
end;

procedure InitHAnimBehaviorPrototypesPart10;
begin

MFFloat195 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat195]);
MFRotation196 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation196]);
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
end;

procedure InitHAnimBehaviorPrototypesPart11;
begin

SFRotation215 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_pinky_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation215]);
MFFloat216 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring0_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat216]);
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
end;

procedure InitHAnimBehaviorPrototypesPart12;
begin

MFRotation235 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation235]);
SFRotation236 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_ring_middle_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation236]);
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
end;

procedure InitHAnimBehaviorPrototypesPart13;
begin

MFFloat255 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat255]);
MFRotation256 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_thumb1_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation256]);
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
end;

procedure InitHAnimBehaviorPrototypesPart14;
begin

SFRotation275 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_upperarm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation275]);
MFFloat276 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'l_wrist_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat276]);
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
end;

procedure InitHAnimBehaviorPrototypesPart15;
begin

MFRotation295 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation295]);
SFRotation296 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_elbow_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation296]);
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
end;

procedure InitHAnimBehaviorPrototypesPart16;
begin

MFFloat315 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forearm_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat315]);
MFRotation316 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_forearm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation316]);
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
end;

procedure InitHAnimBehaviorPrototypesPart17;
begin

SFRotation335 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index1_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation335]);
MFFloat336 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_index2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat336]);
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
end;

procedure InitHAnimBehaviorPrototypesPart18;
begin

MFRotation355 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_knee_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation355]);
SFRotation356 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_knee_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation356]);
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
end;

procedure InitHAnimBehaviorPrototypesPart19;
begin

MFFloat375 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_distal_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat375]);
MFRotation376 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_middle_distal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation376]);
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
end;

procedure InitHAnimBehaviorPrototypesPart20;
begin

SFRotation395 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky0_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation395]);
MFFloat396 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat396]);
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
end;

procedure InitHAnimBehaviorPrototypesPart21;
begin

MFRotation415 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_proximal_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation415]);
SFRotation416 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_pinky_proximal_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation416]);
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
end;

procedure InitHAnimBehaviorPrototypesPart22;
begin

MFFloat435 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_middle_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat435]);
MFRotation436 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_ring_middle_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation436]);
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
end;

procedure InitHAnimBehaviorPrototypesPart23;
begin

SFRotation455 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thigh_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation455]);
MFFloat456 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_thumb1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat456]);
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
end;

procedure InitHAnimBehaviorPrototypesPart24;
begin

MFRotation475 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_upperarm_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation475]);
SFRotation476 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'r_upperarm_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation476]);
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
end;

procedure InitHAnimBehaviorPrototypesPart25;
begin

MFFloat495 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't11_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat495]);
MFRotation496 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't11_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation496]);
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
end;

procedure InitHAnimBehaviorPrototypesPart26;
begin

SFRotation515 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 't5_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation515]);
MFFloat516 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 't6_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat516]);
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
end;

procedure InitHAnimBehaviorPrototypesPart27;
begin

MFRotation535 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation535]);
SFRotation536 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vc2_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation536]);
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
end;

procedure InitHAnimBehaviorPrototypesPart28;
begin

MFFloat555 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl2_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat555]);
MFRotation556 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vl2_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation556]);
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
end;

procedure InitHAnimBehaviorPrototypesPart29;
begin

SFRotation575 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt12_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation575]);
MFFloat576 := TMFFloat.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt1_key');
{ no default value }
{ METHOD .AddMFFloat }
X3DInterfaceDeclaration21.AddMFFloat([MFFloat576]);
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
end;

procedure InitHAnimBehaviorPrototypesPart30;
begin

MFRotation595 := TMFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt7_keyValue');
{ no default value }
{ METHOD .AddMFRotation }
X3DInterfaceDeclaration21.AddMFRotation([MFRotation595]);
SFRotation596 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration21, false, 'vt7_changed');
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration21.AddSFRotation([SFRotation596]);
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
X3DPrototype603 := TX3DPrototype.Create;;
{ design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators }
TimeSensor604 := TTimeSensorNode.Create;;
{ METHOD .AddTimeSensor }
X3DPrototype603.AddTimeSensor([TimeSensor604]);
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Switch606 := TSwitchNode.Create;;
Switch606.WhichChoice := -1;
{ METHOD .AddSwitch }
X3DPrototype603.AddSwitch([Switch606]);
PositionInterpolator608 := TPositionInterpolatorNode.Create;;
{ METHOD .AddPositionInterpolator }
X3DPrototype603.AddPositionInterpolator([PositionInterpolator608]);
{ Original "BehaviorClock.EventFraction_changed TO HumanoidRootPI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO HumanoidRootPI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, PositionInterpolator608.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator611 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator611]);
{ Original "BehaviorClock.EventFraction_changed TO HumanoidRootOI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO HumanoidRootOI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator611.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator614 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator614]);
{ Original "BehaviorClock.EventFraction_changed TO c1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator614.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator617 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart31;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator617]);
{ Original "BehaviorClock.EventFraction_changed TO c2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator617.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator620 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator620]);
{ Original "BehaviorClock.EventFraction_changed TO c3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator620.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator623 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator623]);
{ Original "BehaviorClock.EventFraction_changed TO c4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator623.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator626 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator626]);
{ Original "BehaviorClock.EventFraction_changed TO c5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator626.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator629 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator629]);
{ Original "BehaviorClock.EventFraction_changed TO c6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator629.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator632 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator632]);
{ Original "BehaviorClock.EventFraction_changed TO c7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO c7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator632.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator635 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator635]);
{ Original "BehaviorClock.EventFraction_changed TO jaw_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO jaw_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator635.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator638 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator638]);
{ Original "BehaviorClock.EventFraction_changed TO l1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator638.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator641 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator641]);
{ Original "BehaviorClock.EventFraction_changed TO l2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator641.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator644 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator644]);
{ Original "BehaviorClock.EventFraction_changed TO l3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator644.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator647 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart32;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator647]);
{ Original "BehaviorClock.EventFraction_changed TO l4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator647.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator650 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator650]);
{ Original "BehaviorClock.EventFraction_changed TO l5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator650.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator653 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator653]);
{ Original "BehaviorClock.EventFraction_changed TO l_acromioclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_acromioclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator653.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator656 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator656]);
{ Original "BehaviorClock.EventFraction_changed TO l_ankle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ankle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator656.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator659 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator659]);
{ Original "BehaviorClock.EventFraction_changed TO l_calf_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_calf_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator659.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator662 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator662]);
{ Original "BehaviorClock.EventFraction_changed TO l_clavicle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_clavicle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator662.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator665 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator665]);
{ Original "BehaviorClock.EventFraction_changed TO l_elbow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_elbow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator665.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator668 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator668]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyeball_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyeball_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator668.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator671 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator671]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyeball_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyeball_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator671.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator674 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator674]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyebrow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyebrow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator674.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator677 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart33;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator677]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyebrow_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyebrow_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator677.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator680 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator680]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyelid_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyelid_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator680.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator683 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator683]);
{ Original "BehaviorClock.EventFraction_changed TO l_eyelid_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_eyelid_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator683.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator686 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator686]);
{ Original "BehaviorClock.EventFraction_changed TO l_forearm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_forearm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator686.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator689 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator689]);
{ Original "BehaviorClock.EventFraction_changed TO l_forefoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_forefoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator689.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator692 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator692]);
{ Original "BehaviorClock.EventFraction_changed TO l_hand_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_hand_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator692.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator695 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator695]);
{ Original "BehaviorClock.EventFraction_changed TO l_hindfoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_hindfoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator695.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator698 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator698]);
{ Original "BehaviorClock.EventFraction_changed TO l_hip_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_hip_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator698.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator701 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator701]);
{ Original "BehaviorClock.EventFraction_changed TO l_index0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator701.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator704 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator704]);
{ Original "BehaviorClock.EventFraction_changed TO l_index1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator704.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator707 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart34;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator707]);
{ Original "BehaviorClock.EventFraction_changed TO l_index2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator707.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator710 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator710]);
{ Original "BehaviorClock.EventFraction_changed TO l_index3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator710.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator713 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator713]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator713.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator716 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator716]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator716.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator719 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator719]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator719.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator722 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator722]);
{ Original "BehaviorClock.EventFraction_changed TO l_index_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_index_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator722.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator725 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator725]);
{ Original "BehaviorClock.EventFraction_changed TO l_knee_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_knee_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator725.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator728 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator728]);
{ Original "BehaviorClock.EventFraction_changed TO l_metatarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_metatarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator728.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator731 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator731]);
{ Original "BehaviorClock.EventFraction_changed TO l_middistal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middistal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator731.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator734 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator734]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator734.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator737 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart35;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator737]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator737.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator740 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator740]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator740.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator743 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator743]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator743.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator746 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator746]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator746.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator749 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator749]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator749.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator752 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator752]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator752.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator755 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator755]);
{ Original "BehaviorClock.EventFraction_changed TO l_middle_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_middle_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator755.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator758 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator758]);
{ Original "BehaviorClock.EventFraction_changed TO l_midproximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_midproximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator758.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator761 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator761]);
{ Original "BehaviorClock.EventFraction_changed TO l_midtarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_midtarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator761.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator764 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator764]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator764.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator767 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart36;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator767]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator767.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator770 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator770]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator770.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator773 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator773]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator773.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator776 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator776]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator776.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator779 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator779]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator779.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator782 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator782]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator782.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator785 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator785]);
{ Original "BehaviorClock.EventFraction_changed TO l_pinky_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_pinky_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator785.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator788 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator788]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator788.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator791 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator791]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator791.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator794 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator794]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator794.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator797 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart37;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator797]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator797.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator800 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator800]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator800.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator803 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator803]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator803.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator806 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator806]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator806.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator809 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator809]);
{ Original "BehaviorClock.EventFraction_changed TO l_ring_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_ring_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator809.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator812 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator812]);
{ Original "BehaviorClock.EventFraction_changed TO l_scapula_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_scapula_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator812.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator815 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator815]);
{ Original "BehaviorClock.EventFraction_changed TO l_shoulder_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_shoulder_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator815.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator818 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator818]);
{ Original "BehaviorClock.EventFraction_changed TO l_sternoclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_sternoclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator818.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator821 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator821]);
{ Original "BehaviorClock.EventFraction_changed TO l_subtalar_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_subtalar_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator821.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator824 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator824]);
{ Original "BehaviorClock.EventFraction_changed TO l_thigh_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thigh_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator824.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator827 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart38;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator827]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator827.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator830 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator830]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator830.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator833 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator833]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator833.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator836 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator836]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator836.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator839 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator839]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator839.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator842 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator842]);
{ Original "BehaviorClock.EventFraction_changed TO l_thumb_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_thumb_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator842.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator845 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator845]);
{ Original "BehaviorClock.EventFraction_changed TO l_upperarm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_upperarm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator845.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator848 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator848]);
{ Original "BehaviorClock.EventFraction_changed TO l_wrist_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO l_wrist_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator848.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator851 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator851]);
{ Original "BehaviorClock.EventFraction_changed TO pelvis_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO pelvis_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator851.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator854 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator854]);
{ Original "BehaviorClock.EventFraction_changed TO r_acromioclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_acromioclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator854.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator857 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart39;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator857]);
{ Original "BehaviorClock.EventFraction_changed TO r_ankle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ankle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator857.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator860 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator860]);
{ Original "BehaviorClock.EventFraction_changed TO r_calf_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_calf_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator860.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator863 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator863]);
{ Original "BehaviorClock.EventFraction_changed TO r_clavicle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_clavicle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator863.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator866 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator866]);
{ Original "BehaviorClock.EventFraction_changed TO r_elbow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_elbow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator866.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator869 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator869]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyeball_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyeball_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator869.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator872 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator872]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyeball_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyeball_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator872.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator875 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator875]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyebrow_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyebrow_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator875.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator878 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator878]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyebrow_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyebrow_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator878.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator881 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator881]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyelid_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyelid_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator881.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator884 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator884]);
{ Original "BehaviorClock.EventFraction_changed TO r_eyelid_joint_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_eyelid_joint_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator884.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator887 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart40;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator887]);
{ Original "BehaviorClock.EventFraction_changed TO r_forearm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_forearm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator887.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator890 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator890]);
{ Original "BehaviorClock.EventFraction_changed TO r_forefoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_forefoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator890.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator893 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator893]);
{ Original "BehaviorClock.EventFraction_changed TO r_hand_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_hand_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator893.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator896 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator896]);
{ Original "BehaviorClock.EventFraction_changed TO r_hindfoot_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_hindfoot_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator896.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator899 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator899]);
{ Original "BehaviorClock.EventFraction_changed TO r_hip_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_hip_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator899.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator902 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator902]);
{ Original "BehaviorClock.EventFraction_changed TO r_index0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator902.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator905 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator905]);
{ Original "BehaviorClock.EventFraction_changed TO r_index1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator905.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator908 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator908]);
{ Original "BehaviorClock.EventFraction_changed TO r_index2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator908.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator911 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator911]);
{ Original "BehaviorClock.EventFraction_changed TO r_index3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator911.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator914 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator914]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator914.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator917 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart41;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator917]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator917.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator920 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator920]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator920.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator923 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator923]);
{ Original "BehaviorClock.EventFraction_changed TO r_index_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_index_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator923.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator926 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator926]);
{ Original "BehaviorClock.EventFraction_changed TO r_knee_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_knee_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator926.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator929 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator929]);
{ Original "BehaviorClock.EventFraction_changed TO r_metatarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_metatarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator929.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator932 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator932]);
{ Original "BehaviorClock.EventFraction_changed TO r_middistal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middistal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator932.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator935 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator935]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator935.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator938 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator938]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator938.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator941 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator941]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator941.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator944 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator944]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator944.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator947 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart42;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator947]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator947.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator950 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator950]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator950.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator953 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator953]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator953.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator956 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator956]);
{ Original "BehaviorClock.EventFraction_changed TO r_middle_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_middle_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator956.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator959 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator959]);
{ Original "BehaviorClock.EventFraction_changed TO r_midproximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_midproximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator959.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator962 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator962]);
{ Original "BehaviorClock.EventFraction_changed TO r_midtarsal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_midtarsal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator962.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator965 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator965]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator965.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator968 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator968]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator968.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator971 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator971]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator971.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator974 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator974]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator974.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator977 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart43;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator977]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator977.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator980 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator980]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator980.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator983 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator983]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator983.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator986 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator986]);
{ Original "BehaviorClock.EventFraction_changed TO r_pinky_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_pinky_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator986.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator989 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator989]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring0_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring0_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator989.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator992 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator992]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator992.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator995 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator995]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator995.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator998 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator998]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator998.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1001 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1001]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1001.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1004 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1004]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1004.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1007 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart44;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1007]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_middle_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_middle_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1007.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1010 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1010]);
{ Original "BehaviorClock.EventFraction_changed TO r_ring_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_ring_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1010.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1013 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1013]);
{ Original "BehaviorClock.EventFraction_changed TO r_scapula_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_scapula_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1013.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1016 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1016]);
{ Original "BehaviorClock.EventFraction_changed TO r_shoulder_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_shoulder_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1016.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1019 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1019]);
{ Original "BehaviorClock.EventFraction_changed TO r_sternoclavicular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_sternoclavicular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1019.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1022 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1022]);
{ Original "BehaviorClock.EventFraction_changed TO r_subtalar_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_subtalar_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1022.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1025 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1025]);
{ Original "BehaviorClock.EventFraction_changed TO r_thigh_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thigh_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1025.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1028 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1028]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1028.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1031 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1031]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1031.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1034 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1034]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1034.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1037 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart45;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1037]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb_distal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb_distal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1037.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1040 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1040]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb_metacarpal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb_metacarpal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1040.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1043 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1043]);
{ Original "BehaviorClock.EventFraction_changed TO r_thumb_proximal_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_thumb_proximal_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1043.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1046 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1046]);
{ Original "BehaviorClock.EventFraction_changed TO r_upperarm_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_upperarm_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1046.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1049 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1049]);
{ Original "BehaviorClock.EventFraction_changed TO r_wrist_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO r_wrist_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1049.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1052 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1052]);
{ Original "BehaviorClock.EventFraction_changed TO sacroiliac_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO sacroiliac_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1052.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1055 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1055]);
{ Original "BehaviorClock.EventFraction_changed TO sacrum_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO sacrum_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1055.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1058 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1058]);
{ Original "BehaviorClock.EventFraction_changed TO skull_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO skull_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1058.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1061 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1061]);
{ Original "BehaviorClock.EventFraction_changed TO skullbase_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO skullbase_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1061.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1064 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1064]);
{ Original "BehaviorClock.EventFraction_changed TO t1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1064.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1067 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart46;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1067]);
{ Original "BehaviorClock.EventFraction_changed TO t2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1067.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1070 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1070]);
{ Original "BehaviorClock.EventFraction_changed TO t3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1070.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1073 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1073]);
{ Original "BehaviorClock.EventFraction_changed TO t4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1073.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1076 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1076]);
{ Original "BehaviorClock.EventFraction_changed TO t5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1076.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1079 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1079]);
{ Original "BehaviorClock.EventFraction_changed TO t6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1079.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1082 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1082]);
{ Original "BehaviorClock.EventFraction_changed TO t7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1082.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1085 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1085]);
{ Original "BehaviorClock.EventFraction_changed TO t8_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t8_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1085.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1088 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1088]);
{ Original "BehaviorClock.EventFraction_changed TO t9_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t9_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1088.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1091 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1091]);
{ Original "BehaviorClock.EventFraction_changed TO t10_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t10_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1091.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1094 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1094]);
{ Original "BehaviorClock.EventFraction_changed TO t11_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t11_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1094.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1097 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart47;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1097]);
{ Original "BehaviorClock.EventFraction_changed TO t12_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO t12_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1097.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1100 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1100]);
{ Original "BehaviorClock.EventFraction_changed TO temporomandibular_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO temporomandibular_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1100.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1103 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1103]);
{ Original "BehaviorClock.EventFraction_changed TO vc1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1103.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1106 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1106]);
{ Original "BehaviorClock.EventFraction_changed TO vc2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1106.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1109 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1109]);
{ Original "BehaviorClock.EventFraction_changed TO vc3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1109.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1112 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1112]);
{ Original "BehaviorClock.EventFraction_changed TO vc4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1112.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1115 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1115]);
{ Original "BehaviorClock.EventFraction_changed TO vc5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1115.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1118 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1118]);
{ Original "BehaviorClock.EventFraction_changed TO vc6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1118.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1121 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1121]);
{ Original "BehaviorClock.EventFraction_changed TO vc7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vc7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1121.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1124 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1124]);
{ Original "BehaviorClock.EventFraction_changed TO vl1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1124.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1127 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart48;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1127]);
{ Original "BehaviorClock.EventFraction_changed TO vl2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1127.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1130 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1130]);
{ Original "BehaviorClock.EventFraction_changed TO vl3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1130.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1133 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1133]);
{ Original "BehaviorClock.EventFraction_changed TO vl4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1133.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1136 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1136]);
{ Original "BehaviorClock.EventFraction_changed TO vl5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vl5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1136.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1139 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1139]);
{ Original "BehaviorClock.EventFraction_changed TO vt1_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt1_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1139.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1142 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1142]);
{ Original "BehaviorClock.EventFraction_changed TO vt2_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt2_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1142.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1145 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1145]);
{ Original "BehaviorClock.EventFraction_changed TO vt3_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt3_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1145.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1148 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1148]);
{ Original "BehaviorClock.EventFraction_changed TO vt4_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt4_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1148.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1151 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1151]);
{ Original "BehaviorClock.EventFraction_changed TO vt5_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt5_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1151.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1154 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1154]);
{ Original "BehaviorClock.EventFraction_changed TO vt6_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt6_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1154.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1157 := TOrientationInterpolatorNode.Create;;
end;

procedure InitHAnimBehaviorPrototypesPart49;
begin

{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1157]);
{ Original "BehaviorClock.EventFraction_changed TO vt7_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt7_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1157.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1160 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1160]);
{ Original "BehaviorClock.EventFraction_changed TO vt8_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt8_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1160.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1163 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1163]);
{ Original "BehaviorClock.EventFraction_changed TO vt9_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt9_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1163.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1166 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1166]);
{ Original "BehaviorClock.EventFraction_changed TO vt10_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt10_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1166.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1169 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1169]);
{ Original "BehaviorClock.EventFraction_changed TO vt11_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt11_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1169.EventSet_fraction);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1172 := TOrientationInterpolatorNode.Create;;
{ METHOD .AddOrientationInterpolator }
X3DPrototype603.AddOrientationInterpolator([OrientationInterpolator1172]);
{ Original "BehaviorClock.EventFraction_changed TO vt12_OI.EventSet_fraction }
{ Sample BehaviorClock.EventFraction_changed TO vt12_OI.EventSet_fraction}
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1172.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype20.AddX3DPrototype([X3DPrototype603]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype20]);
X3DPrototype1175 := TX3DPrototype.Create;;
X3DPrototype1175.Appinfo := 'The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.';
X3DInterfaceDeclaration1176 := TX3DInterfaceDeclaration.Create(nil);;
{ TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs }
{ accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints }
{ shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs }
{ TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName }
{ TODO: consider addBody, removeBody, addBehavior, removeBehavior }
{ TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName }
SFInt321177 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1176, false, 'supportedLOA');
SFInt321177.Appinfo := 'Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
SFInt321177.Value := '-1';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1176.AddSFInt32([SFInt321177]);
MFNode1178 := TMFNode.CreateUndefined(X3DInterfaceDeclaration1176, false, 'HumanoidArray');
MFNode1178.Appinfo := '[HAnimHumanoid] nodes only';
{ default NULL }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration1176.AddMFNode([MFNode1178]);
SFInt321179 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1176, false, 'whichBody');
SFInt321179.Appinfo := 'whichBody is selected default is initial member of HumanoidArray';
SFInt321179.Value := '-1';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1176.AddSFInt32([SFInt321179]);
end;

procedure InitHAnimBehaviorPrototypesPart50;
begin

SFInt321180 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1176, false, 'set_whichBody');
SFInt321180.Appinfo := 'whichBody is selected default is none';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1176.AddSFInt32([SFInt321180]);
SFInt321181 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1176, false, 'whichBody_changed');
SFInt321181.Appinfo := 'whichBody is selected default is none';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1176.AddSFInt32([SFInt321181]);
MFNode1182 := TMFNode.CreateUndefined(X3DInterfaceDeclaration1176, false, 'hAnimBehaviorNodes');
MFNode1182.Appinfo := '[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.';
{ default NULL }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration1176.AddMFNode([MFNode1182]);
MFBool1183 := TMFBool.CreateUndefined(X3DInterfaceDeclaration1176, false, 'enabledBehaviorsArray');
MFBool1183.Appinfo := 'indicate which HAnimBehavior nodes are activated, empty indicates all enabled true';
{ no default values }
{ METHOD .AddMFBool }
X3DInterfaceDeclaration1176.AddMFBool([MFBool1183]);
SFInt321184 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1176, false, 'enableBehavior');
SFInt321184.Appinfo := 'enable corresponding behavior identified by index number';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1176.AddSFInt32([SFInt321184]);
SFInt321185 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration1176, false, 'disableBehavior');
SFInt321185.Appinfo := 'disable corresponding behavior identified by index number';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration1176.AddSFInt32([SFInt321185]);
SFTime1186 := TSFTime.CreateUndefined(X3DInterfaceDeclaration1176, false, 'startTime');
SFTime1186.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration1176.AddSFTime([SFTime1186]);
SFTime1187 := TSFTime.CreateUndefined(X3DInterfaceDeclaration1176, false, 'stopTime');
SFTime1187.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration1176.AddSFTime([SFTime1187]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype1175.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration1176]);
X3DPrototype1188 := TX3DPrototype.Create;;
Switch1189 := TSwitchNode.Create;;
Switch1189.WhichChoice := -1;
{ METHOD .AddSwitch }
X3DPrototype1188.AddSwitch([Switch1189]);
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Group1191 := TGroupNode.Create;;
{ METHOD .AddGroup }
X3DPrototype1188.AddChildren([Group1191]);
TimeSensor1193 := TTimeSensorNode.Create;;
{ METHOD .AddTimeSensor }
X3DPrototype1188.AddTimeSensor([TimeSensor1193]);
Switch1195 := TSwitchNode.Create;;
Switch1195.WhichChoice := -1;
end;

procedure InitHAnimBehaviorPrototypesPart51;
begin

{ METHOD .AddSwitch }
X3DPrototype1188.AddSwitch([Switch1195]);
Script1197 := TScriptNode.Create;;
Script1197.DirectOutput := True;
Script1197.SetUrl(['HAnimBehaviorPrototypesScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js']);
MFNode1198 := TMFNode.CreateUndefined(Script1197, false, 'HumanoidArray');
MFNode1198.Appinfo := '[HAnimHumanoid] nodes only';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(MFNode1198);
SFInt321199 := TSFInt32.CreateUndefined(Script1197, false, 'whichBody');
SFInt321199.Appinfo := 'whichBody is selected default is none';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFInt321199);
SFInt321200 := TSFInt32.CreateUndefined(Script1197, false, 'set_whichBody');
SFInt321200.Appinfo := 'whichBody is selected default is none';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFInt321200);
SFInt321201 := TSFInt32.CreateUndefined(Script1197, false, 'whichBody_changed');
SFInt321201.Appinfo := 'whichBody is selected default is none';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFInt321201);
MFNode1202 := TMFNode.CreateUndefined(Script1197, false, 'hAnimBehaviorNodes');
MFNode1202.Appinfo := '[HAnimBehavior] nodes only';
{ TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed }
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(MFNode1202);
MFBool1203 := TMFBool.CreateUndefined(Script1197, false, 'enabledBehaviorsArray');
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(MFBool1203);
SFInt321204 := TSFInt32.CreateUndefined(Script1197, false, 'enableBehavior');
SFInt321204.Appinfo := 'enable corresponding behavior';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFInt321204);
SFInt321205 := TSFInt32.CreateUndefined(Script1197, false, 'disableBehavior');
SFInt321205.Appinfo := 'enable corresponding behavior';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFInt321205);
SFNode1206 := TSFNode.CreateUndefined(Script1197, false, 'timeSensorNode');
{ METHOD .AddTimeSensor }
SFNode1206.AddTimeSensor([TimeSensor1193]);
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFNode1206);
SFInt321208 := TSFInt32.CreateUndefined(Script1197, false, 'previousBodyIndex');
SFInt321208.Appinfo := 'remember prior body index to avoid unnecessary ROUTE teardown and creation';
SFInt321208.Value := '-1';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFInt321208);
SFBool1209 := TSFBool.CreateUndefined(Script1197, false, 'traceEnabled');
SFBool1209.Value := 'true';
{ METHOD .Fd.AddCustomField }
Script1197.AddCustomField(SFBool1209);
{ METHOD .AddScript }
X3DPrototype1188.AddScript([Script1197]);
{ METHOD .AddX3DPrototype }
X3DPrototype1175.AddX3DPrototype([X3DPrototype1188]);
end;

procedure InitHAnimBehaviorPrototypesPart52;
begin

{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype1175]);
{ TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype. }
X3DPrototype1211 := TX3DPrototypeNode;
{ only one PositionInterpolator key/keyValue definition for entire humanoid - optional }
{ must have paired overrides of each key/keyValue array being defined }
MFFloat1212 := TMFFloat.CreateUndefined(X3DPrototype1211, false, 'HumanoidRoot_translation_key');
MFFloat1212.Value := '0 0.25 0.5 0.75 1';
{ METHOD .AddMFFloat }
X3DPrototype1211.AddMFFloat([MFFloat1212]);
MFVec3f1213 := TMFVec3f.CreateUndefined(X3DPrototype1211, false, 'HumanoidRoot_translation_keyValue');
MFVec3f1213.Value := '0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50';
{ METHOD .AddMFVec3f }
X3DPrototype1211.AddMFVec3f([MFVec3f1213]);
MFFloat1214 := TMFFloat.CreateUndefined(X3DPrototype1211, false, 'r_ankle_key');
MFFloat1214.Value := '0 0.5 1';
{ METHOD .AddMFFloat }
X3DPrototype1211.AddMFFloat([MFFloat1214]);
MFRotation1215 := TMFRotation.CreateUndefined(X3DPrototype1211, false, 'r_ankle_keyValue');
MFRotation1215.Value := '0 1 0 0 0 1 0 0.2 0 1 0 0.4';
{ METHOD .AddMFRotation }
X3DPrototype1211.AddMFRotation([MFRotation1215]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype1211]);
X3DPrototype1216 := TX3DPrototypeNode;
MFNode1217 := TMFNode.CreateUndefined(X3DPrototype1216, false, 'HumanoidArray');
HAnimHumanoid1218 := THAnimHumanoidNode.Create;;
HAnimHumanoid1218.Version := '2.0';
{ METHOD .AddHAnimHumanoid }
MFNode1217.AddHAnimHumanoid([HAnimHumanoid1218]);
{ METHOD .AddMFNode }
X3DPrototype1216.AddMFNode([MFNode1217]);
SFInt321219 := TSFInt32.CreateUndefined(X3DPrototype1216, false, 'whichBody');
SFInt321219.Value := '0';
{ METHOD .AddSFInt32 }
X3DPrototype1216.AddSFInt32([SFInt321219]);
MFNode1220 := TMFNode.CreateUndefined(X3DPrototype1216, false, 'hAnimBehaviorNodes');
{ METHOD .AddX3DPrototype }
MFNode1220.AddX3DPrototype([X3DPrototype1211]);
{ METHOD .AddMFNode }
X3DPrototype1216.AddMFNode([MFNode1220]);
MFBool1222 := TMFBool.CreateUndefined(X3DPrototype1216, false, 'enabledBehaviorsArray');
MFBool1222.Value := 'true';
{ METHOD .AddMFBool }
X3DPrototype1216.AddMFBool([MFBool1222]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype1216]);
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
Result := X3D0;
end;

begin
end.
