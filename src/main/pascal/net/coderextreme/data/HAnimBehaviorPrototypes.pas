unit HAnimBehaviorPrototypes;

interface

uses X3DNodes;

function CreateHAnimBehaviorPrototypes: TX3DRootNode;

implementation

uses CastleVectors;

function CreateHAnimBehaviorPrototypes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
X3DField29: TX3DField;
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
X3DField48: TX3DField;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DField67: TX3DField;
X3DField68: TX3DField;
X3DField69: TX3DField;
X3DField70: TX3DField;
X3DField71: TX3DField;
X3DField72: TX3DField;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
X3DField76: TX3DField;
X3DField77: TX3DField;
X3DField78: TX3DField;
X3DField79: TX3DField;
X3DField80: TX3DField;
X3DField81: TX3DField;
X3DField82: TX3DField;
X3DField83: TX3DField;
X3DField84: TX3DField;
X3DField85: TX3DField;
X3DField86: TX3DField;
X3DField87: TX3DField;
X3DField88: TX3DField;
X3DField89: TX3DField;
X3DField90: TX3DField;
X3DField91: TX3DField;
X3DField92: TX3DField;
X3DField93: TX3DField;
X3DField94: TX3DField;
X3DField95: TX3DField;
X3DField96: TX3DField;
X3DField97: TX3DField;
X3DField98: TX3DField;
X3DField99: TX3DField;
X3DField100: TX3DField;
X3DField101: TX3DField;
X3DField102: TX3DField;
X3DField103: TX3DField;
X3DField104: TX3DField;
X3DField105: TX3DField;
X3DField106: TX3DField;
X3DField107: TX3DField;
X3DField108: TX3DField;
X3DField109: TX3DField;
X3DField110: TX3DField;
X3DField111: TX3DField;
X3DField112: TX3DField;
X3DField113: TX3DField;
X3DField114: TX3DField;
X3DField115: TX3DField;
X3DField116: TX3DField;
X3DField117: TX3DField;
X3DField118: TX3DField;
X3DField119: TX3DField;
X3DField120: TX3DField;
X3DField121: TX3DField;
X3DField122: TX3DField;
X3DField123: TX3DField;
X3DField124: TX3DField;
X3DField125: TX3DField;
X3DField126: TX3DField;
X3DField127: TX3DField;
X3DField128: TX3DField;
X3DField129: TX3DField;
X3DField130: TX3DField;
X3DField131: TX3DField;
X3DField132: TX3DField;
X3DField133: TX3DField;
X3DField134: TX3DField;
X3DField135: TX3DField;
X3DField136: TX3DField;
X3DField137: TX3DField;
X3DField138: TX3DField;
X3DField139: TX3DField;
X3DField140: TX3DField;
X3DField141: TX3DField;
X3DField142: TX3DField;
X3DField143: TX3DField;
X3DField144: TX3DField;
X3DField145: TX3DField;
X3DField146: TX3DField;
X3DField147: TX3DField;
X3DField148: TX3DField;
X3DField149: TX3DField;
X3DField150: TX3DField;
X3DField151: TX3DField;
X3DField152: TX3DField;
X3DField153: TX3DField;
X3DField154: TX3DField;
X3DField155: TX3DField;
X3DField156: TX3DField;
X3DField157: TX3DField;
X3DField158: TX3DField;
X3DField159: TX3DField;
X3DField160: TX3DField;
X3DField161: TX3DField;
X3DField162: TX3DField;
X3DField163: TX3DField;
X3DField164: TX3DField;
X3DField165: TX3DField;
X3DField166: TX3DField;
X3DField167: TX3DField;
X3DField168: TX3DField;
X3DField169: TX3DField;
X3DField170: TX3DField;
X3DField171: TX3DField;
X3DField172: TX3DField;
X3DField173: TX3DField;
X3DField174: TX3DField;
X3DField175: TX3DField;
X3DField176: TX3DField;
X3DField177: TX3DField;
X3DField178: TX3DField;
X3DField179: TX3DField;
X3DField180: TX3DField;
X3DField181: TX3DField;
X3DField182: TX3DField;
X3DField183: TX3DField;
X3DField184: TX3DField;
X3DField185: TX3DField;
X3DField186: TX3DField;
X3DField187: TX3DField;
X3DField188: TX3DField;
X3DField189: TX3DField;
X3DField190: TX3DField;
X3DField191: TX3DField;
X3DField192: TX3DField;
X3DField193: TX3DField;
X3DField194: TX3DField;
X3DField195: TX3DField;
X3DField196: TX3DField;
X3DField197: TX3DField;
X3DField198: TX3DField;
X3DField199: TX3DField;
X3DField200: TX3DField;
X3DField201: TX3DField;
X3DField202: TX3DField;
X3DField203: TX3DField;
X3DField204: TX3DField;
X3DField205: TX3DField;
X3DField206: TX3DField;
X3DField207: TX3DField;
X3DField208: TX3DField;
X3DField209: TX3DField;
X3DField210: TX3DField;
X3DField211: TX3DField;
X3DField212: TX3DField;
X3DField213: TX3DField;
X3DField214: TX3DField;
X3DField215: TX3DField;
X3DField216: TX3DField;
X3DField217: TX3DField;
X3DField218: TX3DField;
X3DField219: TX3DField;
X3DField220: TX3DField;
X3DField221: TX3DField;
X3DField222: TX3DField;
X3DField223: TX3DField;
X3DField224: TX3DField;
X3DField225: TX3DField;
X3DField226: TX3DField;
X3DField227: TX3DField;
X3DField228: TX3DField;
X3DField229: TX3DField;
X3DField230: TX3DField;
X3DField231: TX3DField;
X3DField232: TX3DField;
X3DField233: TX3DField;
X3DField234: TX3DField;
X3DField235: TX3DField;
X3DField236: TX3DField;
X3DField237: TX3DField;
X3DField238: TX3DField;
X3DField239: TX3DField;
X3DField240: TX3DField;
X3DField241: TX3DField;
X3DField242: TX3DField;
X3DField243: TX3DField;
X3DField244: TX3DField;
X3DField245: TX3DField;
X3DField246: TX3DField;
X3DField247: TX3DField;
X3DField248: TX3DField;
X3DField249: TX3DField;
X3DField250: TX3DField;
X3DField251: TX3DField;
X3DField252: TX3DField;
X3DField253: TX3DField;
X3DField254: TX3DField;
X3DField255: TX3DField;
X3DField256: TX3DField;
X3DField257: TX3DField;
X3DField258: TX3DField;
X3DField259: TX3DField;
X3DField260: TX3DField;
X3DField261: TX3DField;
X3DField262: TX3DField;
X3DField263: TX3DField;
X3DField264: TX3DField;
X3DField265: TX3DField;
X3DField266: TX3DField;
X3DField267: TX3DField;
X3DField268: TX3DField;
X3DField269: TX3DField;
X3DField270: TX3DField;
X3DField271: TX3DField;
X3DField272: TX3DField;
X3DField273: TX3DField;
X3DField274: TX3DField;
X3DField275: TX3DField;
X3DField276: TX3DField;
X3DField277: TX3DField;
X3DField278: TX3DField;
X3DField279: TX3DField;
X3DField280: TX3DField;
X3DField281: TX3DField;
X3DField282: TX3DField;
X3DField283: TX3DField;
X3DField284: TX3DField;
X3DField285: TX3DField;
X3DField286: TX3DField;
X3DField287: TX3DField;
X3DField288: TX3DField;
X3DField289: TX3DField;
X3DField290: TX3DField;
X3DField291: TX3DField;
X3DField292: TX3DField;
X3DField293: TX3DField;
X3DField294: TX3DField;
X3DField295: TX3DField;
X3DField296: TX3DField;
X3DField297: TX3DField;
X3DField298: TX3DField;
X3DField299: TX3DField;
X3DField300: TX3DField;
X3DField301: TX3DField;
X3DField302: TX3DField;
X3DField303: TX3DField;
X3DField304: TX3DField;
X3DField305: TX3DField;
X3DField306: TX3DField;
X3DField307: TX3DField;
X3DField308: TX3DField;
X3DField309: TX3DField;
X3DField310: TX3DField;
X3DField311: TX3DField;
X3DField312: TX3DField;
X3DField313: TX3DField;
X3DField314: TX3DField;
X3DField315: TX3DField;
X3DField316: TX3DField;
X3DField317: TX3DField;
X3DField318: TX3DField;
X3DField319: TX3DField;
X3DField320: TX3DField;
X3DField321: TX3DField;
X3DField322: TX3DField;
X3DField323: TX3DField;
X3DField324: TX3DField;
X3DField325: TX3DField;
X3DField326: TX3DField;
X3DField327: TX3DField;
X3DField328: TX3DField;
X3DField329: TX3DField;
X3DField330: TX3DField;
X3DField331: TX3DField;
X3DField332: TX3DField;
X3DField333: TX3DField;
X3DField334: TX3DField;
X3DField335: TX3DField;
X3DField336: TX3DField;
X3DField337: TX3DField;
X3DField338: TX3DField;
X3DField339: TX3DField;
X3DField340: TX3DField;
X3DField341: TX3DField;
X3DField342: TX3DField;
X3DField343: TX3DField;
X3DField344: TX3DField;
X3DField345: TX3DField;
X3DField346: TX3DField;
X3DField347: TX3DField;
X3DField348: TX3DField;
X3DField349: TX3DField;
X3DField350: TX3DField;
X3DField351: TX3DField;
X3DField352: TX3DField;
X3DField353: TX3DField;
X3DField354: TX3DField;
X3DField355: TX3DField;
X3DField356: TX3DField;
X3DField357: TX3DField;
X3DField358: TX3DField;
X3DField359: TX3DField;
X3DField360: TX3DField;
X3DField361: TX3DField;
X3DField362: TX3DField;
X3DField363: TX3DField;
X3DField364: TX3DField;
X3DField365: TX3DField;
X3DField366: TX3DField;
X3DField367: TX3DField;
X3DField368: TX3DField;
X3DField369: TX3DField;
X3DField370: TX3DField;
X3DField371: TX3DField;
X3DField372: TX3DField;
X3DField373: TX3DField;
X3DField374: TX3DField;
X3DField375: TX3DField;
X3DField376: TX3DField;
X3DField377: TX3DField;
X3DField378: TX3DField;
X3DField379: TX3DField;
X3DField380: TX3DField;
X3DField381: TX3DField;
X3DField382: TX3DField;
X3DField383: TX3DField;
X3DField384: TX3DField;
X3DField385: TX3DField;
X3DField386: TX3DField;
X3DField387: TX3DField;
X3DField388: TX3DField;
X3DField389: TX3DField;
X3DField390: TX3DField;
X3DField391: TX3DField;
X3DField392: TX3DField;
X3DField393: TX3DField;
X3DField394: TX3DField;
X3DField395: TX3DField;
X3DField396: TX3DField;
X3DField397: TX3DField;
X3DField398: TX3DField;
X3DField399: TX3DField;
X3DField400: TX3DField;
X3DField401: TX3DField;
X3DField402: TX3DField;
X3DField403: TX3DField;
X3DField404: TX3DField;
X3DField405: TX3DField;
X3DField406: TX3DField;
X3DField407: TX3DField;
X3DField408: TX3DField;
X3DField409: TX3DField;
X3DField410: TX3DField;
X3DField411: TX3DField;
X3DField412: TX3DField;
X3DField413: TX3DField;
X3DField414: TX3DField;
X3DField415: TX3DField;
X3DField416: TX3DField;
X3DField417: TX3DField;
X3DField418: TX3DField;
X3DField419: TX3DField;
X3DField420: TX3DField;
X3DField421: TX3DField;
X3DField422: TX3DField;
X3DField423: TX3DField;
X3DField424: TX3DField;
X3DField425: TX3DField;
X3DField426: TX3DField;
X3DField427: TX3DField;
X3DField428: TX3DField;
X3DField429: TX3DField;
X3DField430: TX3DField;
X3DField431: TX3DField;
X3DField432: TX3DField;
X3DField433: TX3DField;
X3DField434: TX3DField;
X3DField435: TX3DField;
X3DField436: TX3DField;
X3DField437: TX3DField;
X3DField438: TX3DField;
X3DField439: TX3DField;
X3DField440: TX3DField;
X3DField441: TX3DField;
X3DField442: TX3DField;
X3DField443: TX3DField;
X3DField444: TX3DField;
X3DField445: TX3DField;
X3DField446: TX3DField;
X3DField447: TX3DField;
X3DField448: TX3DField;
X3DField449: TX3DField;
X3DField450: TX3DField;
X3DField451: TX3DField;
X3DField452: TX3DField;
X3DField453: TX3DField;
X3DField454: TX3DField;
X3DField455: TX3DField;
X3DField456: TX3DField;
X3DField457: TX3DField;
X3DField458: TX3DField;
X3DField459: TX3DField;
X3DField460: TX3DField;
X3DField461: TX3DField;
X3DField462: TX3DField;
X3DField463: TX3DField;
X3DField464: TX3DField;
X3DField465: TX3DField;
X3DField466: TX3DField;
X3DField467: TX3DField;
X3DField468: TX3DField;
X3DField469: TX3DField;
X3DField470: TX3DField;
X3DField471: TX3DField;
X3DField472: TX3DField;
X3DField473: TX3DField;
X3DField474: TX3DField;
X3DField475: TX3DField;
X3DField476: TX3DField;
X3DField477: TX3DField;
X3DField478: TX3DField;
X3DField479: TX3DField;
X3DField480: TX3DField;
X3DField481: TX3DField;
X3DField482: TX3DField;
X3DField483: TX3DField;
X3DField484: TX3DField;
X3DField485: TX3DField;
X3DField486: TX3DField;
X3DField487: TX3DField;
X3DField488: TX3DField;
X3DField489: TX3DField;
X3DField490: TX3DField;
X3DField491: TX3DField;
X3DField492: TX3DField;
X3DField493: TX3DField;
X3DField494: TX3DField;
X3DField495: TX3DField;
X3DField496: TX3DField;
X3DField497: TX3DField;
X3DField498: TX3DField;
X3DField499: TX3DField;
X3DField500: TX3DField;
X3DField501: TX3DField;
X3DField502: TX3DField;
X3DField503: TX3DField;
X3DField504: TX3DField;
X3DField505: TX3DField;
X3DField506: TX3DField;
X3DField507: TX3DField;
X3DField508: TX3DField;
X3DField509: TX3DField;
X3DField510: TX3DField;
X3DField511: TX3DField;
X3DField512: TX3DField;
X3DField513: TX3DField;
X3DField514: TX3DField;
X3DField515: TX3DField;
X3DField516: TX3DField;
X3DField517: TX3DField;
X3DField518: TX3DField;
X3DField519: TX3DField;
X3DField520: TX3DField;
X3DField521: TX3DField;
X3DField522: TX3DField;
X3DField523: TX3DField;
X3DField524: TX3DField;
X3DField525: TX3DField;
X3DField526: TX3DField;
X3DField527: TX3DField;
X3DField528: TX3DField;
X3DField529: TX3DField;
X3DField530: TX3DField;
X3DField531: TX3DField;
X3DField532: TX3DField;
X3DField533: TX3DField;
X3DField534: TX3DField;
X3DField535: TX3DField;
X3DField536: TX3DField;
X3DField537: TX3DField;
X3DField538: TX3DField;
X3DField539: TX3DField;
X3DField540: TX3DField;
X3DField541: TX3DField;
X3DField542: TX3DField;
X3DField543: TX3DField;
X3DField544: TX3DField;
X3DField545: TX3DField;
X3DField546: TX3DField;
X3DField547: TX3DField;
X3DField548: TX3DField;
X3DField549: TX3DField;
X3DField550: TX3DField;
X3DField551: TX3DField;
X3DField552: TX3DField;
X3DField553: TX3DField;
X3DField554: TX3DField;
X3DField555: TX3DField;
X3DField556: TX3DField;
X3DField557: TX3DField;
X3DField558: TX3DField;
X3DField559: TX3DField;
X3DField560: TX3DField;
X3DField561: TX3DField;
X3DField562: TX3DField;
X3DField563: TX3DField;
X3DField564: TX3DField;
X3DField565: TX3DField;
X3DField566: TX3DField;
X3DField567: TX3DField;
X3DField568: TX3DField;
X3DField569: TX3DField;
X3DField570: TX3DField;
X3DField571: TX3DField;
X3DField572: TX3DField;
X3DField573: TX3DField;
X3DField574: TX3DField;
X3DField575: TX3DField;
X3DField576: TX3DField;
X3DField577: TX3DField;
X3DField578: TX3DField;
X3DField579: TX3DField;
X3DField580: TX3DField;
X3DField581: TX3DField;
X3DField582: TX3DField;
X3DField583: TX3DField;
X3DField584: TX3DField;
X3DField585: TX3DField;
X3DField586: TX3DField;
X3DField587: TX3DField;
X3DField588: TX3DField;
X3DField589: TX3DField;
X3DField590: TX3DField;
X3DField591: TX3DField;
X3DField592: TX3DField;
X3DField593: TX3DField;
X3DField594: TX3DField;
X3DField595: TX3DField;
X3DField596: TX3DField;
X3DField597: TX3DField;
X3DField598: TX3DField;
X3DField599: TX3DField;
X3DField600: TX3DField;
X3DField601: TX3DField;
X3DField602: TX3DField;
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
X3DField1758: TX3DField;
X3DField1759: TX3DField;
X3DField1760: TX3DField;
X3DField1761: TX3DField;
X3DField1762: TX3DField;
X3DField1763: TX3DField;
X3DField1764: TX3DField;
X3DField1765: TX3DField;
X3DField1766: TX3DField;
X3DField1767: TX3DField;
X3DField1768: TX3DField;
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
X3DField1785: TX3DField;
X3DField1786: TX3DField;
X3DField1787: TX3DField;
X3DField1788: TX3DField;
X3DField1789: TX3DField;
X3DField1790: TX3DField;
X3DField1791: TX3DField;
X3DField1792: TX3DField;
X3DField1793: TX3DField;
TimeSensor1794: TTimeSensorNode;
X3DField1795: TX3DField;
X3DField1796: TX3DField;
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
X3DPrototype20 := TX3DPrototype.Create;
X3DPrototype20.NameField := 'HAnimBehavior';
X3DPrototype20.Appinfo := 'The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.';
X3DPrototype20.Documentation := 'https://www.web3d.org/files/specifications/19774/V1.0/';
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);
{ supported Level of Articulation (LOA) }
{ shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations }
{ TODO: add other X3D 3.0 TimeSensor fields (pause etc.) }
{ Not supported: animated translation of individual joints }
{ pass in key/keyValue array pairs for single PositionInterpolator }
{ pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint }
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'supportedLOA';
X3DField22.AccessType := 'inputOutput';
X3DField22.Appinfo := 'Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
X3DField22.Type := 'SFInt32';
X3DField22.Value := '-1';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'enabled';
X3DField23.AccessType := 'inputOutput';
X3DField23.Appinfo := 'is this behavior enabled?';
X3DField23.Type := 'SFBool';
X3DField23.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'cycleInterval';
X3DField24.AccessType := 'inputOutput';
X3DField24.Appinfo := 'how long do these interpolators take to execute?';
X3DField24.Type := 'SFTime';
X3DField24.Value := '1';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'loop';
X3DField25.AccessType := 'inputOutput';
X3DField25.Appinfo := 'whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).';
X3DField25.Type := 'SFBool';
X3DField25.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'startTime';
X3DField26.AccessType := 'inputOutput';
X3DField26.Appinfo := 'when time now >= startTime isActive becomes true and TimeSensor becomes active';
X3DField26.Type := 'SFTime';
X3DField26.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'stopTime';
X3DField27.AccessType := 'inputOutput';
X3DField27.Appinfo := 'when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive';
X3DField27.Type := 'SFTime';
X3DField27.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'pauseTime';
X3DField28.AccessType := 'inputOutput';
X3DField28.Appinfo := 'when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused';
X3DField28.Type := 'SFTime';
X3DField28.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'resumeTime';
X3DField29.AccessType := 'inputOutput';
X3DField29.Appinfo := 'when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive';
X3DField29.Type := 'SFTime';
X3DField29.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField29;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'cycleTime';
X3DField30.AccessType := 'outputOnly';
X3DField30.Appinfo := 'cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle';
X3DField30.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'isActive';
X3DField31.AccessType := 'outputOnly';
X3DField31.Appinfo := 'isActive true/false events are sent when TimeSensor starts/stops running';
X3DField31.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'isPaused';
X3DField32.AccessType := 'outputOnly';
X3DField32.Appinfo := 'isPaused true/false events are sent when TimeSensor is paused/resumed';
X3DField32.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'elapsedTime';
X3DField33.AccessType := 'outputOnly';
X3DField33.Appinfo := 'current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time';
X3DField33.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'time';
X3DField34.AccessType := 'outputOnly';
X3DField34.Appinfo := 'continuously sends the absolute time (since January 1 1970)';
X3DField34.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'fraction_changed';
X3DField35.AccessType := 'outputOnly';
X3DField35.Appinfo := 'fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.';
X3DField35.Type := 'SFFloat';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'HumanoidRoot_translation_key';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'HumanoidRoot_translation_keyValue';
X3DField37.AccessType := 'inputOutput';
X3DField37.Type := 'MFVec3f';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'HumanoidRoot_translation_changed';
X3DField38.AccessType := 'outputOnly';
X3DField38.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'HumanoidRoot_rotation_key';
X3DField39.AccessType := 'inputOutput';
X3DField39.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'HumanoidRoot_rotation_keyValue';
X3DField40.AccessType := 'inputOutput';
X3DField40.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'HumanoidRoot_rotation_changed';
X3DField41.AccessType := 'outputOnly';
X3DField41.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'c1_key';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'c1_keyValue';
X3DField43.AccessType := 'inputOutput';
X3DField43.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'c1_changed';
X3DField44.AccessType := 'outputOnly';
X3DField44.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'c2_key';
X3DField45.AccessType := 'inputOutput';
X3DField45.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'c2_keyValue';
X3DField46.AccessType := 'inputOutput';
X3DField46.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'c2_changed';
X3DField47.AccessType := 'outputOnly';
X3DField47.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'c3_key';
X3DField48.AccessType := 'inputOutput';
X3DField48.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField48;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'c3_keyValue';
X3DField49.AccessType := 'inputOutput';
X3DField49.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'c3_changed';
X3DField50.AccessType := 'outputOnly';
X3DField50.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'c4_key';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'c4_keyValue';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'c4_changed';
X3DField53.AccessType := 'outputOnly';
X3DField53.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'c5_key';
X3DField54.AccessType := 'inputOutput';
X3DField54.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'c5_keyValue';
X3DField55.AccessType := 'inputOutput';
X3DField55.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'c5_changed';
X3DField56.AccessType := 'outputOnly';
X3DField56.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'c6_key';
X3DField57.AccessType := 'inputOutput';
X3DField57.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'c6_keyValue';
X3DField58.AccessType := 'inputOutput';
X3DField58.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'c6_changed';
X3DField59.AccessType := 'outputOnly';
X3DField59.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'c7_key';
X3DField60.AccessType := 'inputOutput';
X3DField60.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'c7_keyValue';
X3DField61.AccessType := 'inputOutput';
X3DField61.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'c7_changed';
X3DField62.AccessType := 'outputOnly';
X3DField62.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'jaw_key';
X3DField63.AccessType := 'inputOutput';
X3DField63.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'jaw_keyValue';
X3DField64.AccessType := 'inputOutput';
X3DField64.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'jaw_changed';
X3DField65.AccessType := 'outputOnly';
X3DField65.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'l1_key';
X3DField66.AccessType := 'inputOutput';
X3DField66.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'l1_keyValue';
X3DField67.AccessType := 'inputOutput';
X3DField67.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField67;
X3DField68 := TX3DField.Create;
X3DField68.NameField := 'l1_changed';
X3DField68.AccessType := 'outputOnly';
X3DField68.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField68;
X3DField69 := TX3DField.Create;
X3DField69.NameField := 'l2_key';
X3DField69.AccessType := 'inputOutput';
X3DField69.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField69;
X3DField70 := TX3DField.Create;
X3DField70.NameField := 'l2_keyValue';
X3DField70.AccessType := 'inputOutput';
X3DField70.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField70;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'l2_changed';
X3DField71.AccessType := 'outputOnly';
X3DField71.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'l3_key';
X3DField72.AccessType := 'inputOutput';
X3DField72.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'l3_keyValue';
X3DField73.AccessType := 'inputOutput';
X3DField73.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'l3_changed';
X3DField74.AccessType := 'outputOnly';
X3DField74.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'l4_key';
X3DField75.AccessType := 'inputOutput';
X3DField75.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField75;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'l4_keyValue';
X3DField76.AccessType := 'inputOutput';
X3DField76.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField76;
X3DField77 := TX3DField.Create;
X3DField77.NameField := 'l4_changed';
X3DField77.AccessType := 'outputOnly';
X3DField77.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField77;
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'l5_key';
X3DField78.AccessType := 'inputOutput';
X3DField78.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'l5_keyValue';
X3DField79.AccessType := 'inputOutput';
X3DField79.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField79;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'l5_changed';
X3DField80.AccessType := 'outputOnly';
X3DField80.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'l_acromioclavicular_key';
X3DField81.AccessType := 'inputOutput';
X3DField81.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField81;
X3DField82 := TX3DField.Create;
X3DField82.NameField := 'l_acromioclavicular_keyValue';
X3DField82.AccessType := 'inputOutput';
X3DField82.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField82;
X3DField83 := TX3DField.Create;
X3DField83.NameField := 'l_acromioclavicular_changed';
X3DField83.AccessType := 'outputOnly';
X3DField83.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField83;
X3DField84 := TX3DField.Create;
X3DField84.NameField := 'l_ankle_key';
X3DField84.AccessType := 'inputOutput';
X3DField84.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField84;
X3DField85 := TX3DField.Create;
X3DField85.NameField := 'l_ankle_keyValue';
X3DField85.AccessType := 'inputOutput';
X3DField85.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField85;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'l_ankle_changed';
X3DField86.AccessType := 'outputOnly';
X3DField86.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'l_calf_key';
X3DField87.AccessType := 'inputOutput';
X3DField87.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField87;
X3DField88 := TX3DField.Create;
X3DField88.NameField := 'l_calf_keyValue';
X3DField88.AccessType := 'inputOutput';
X3DField88.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField88;
X3DField89 := TX3DField.Create;
X3DField89.NameField := 'l_calf_changed';
X3DField89.AccessType := 'outputOnly';
X3DField89.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField89;
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'l_clavicle_key';
X3DField90.AccessType := 'inputOutput';
X3DField90.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField90;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'l_clavicle_keyValue';
X3DField91.AccessType := 'inputOutput';
X3DField91.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'l_clavicle_changed';
X3DField92.AccessType := 'outputOnly';
X3DField92.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField92;
X3DField93 := TX3DField.Create;
X3DField93.NameField := 'l_elbow_key';
X3DField93.AccessType := 'inputOutput';
X3DField93.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField93;
X3DField94 := TX3DField.Create;
X3DField94.NameField := 'l_elbow_keyValue';
X3DField94.AccessType := 'inputOutput';
X3DField94.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField94;
X3DField95 := TX3DField.Create;
X3DField95.NameField := 'l_elbow_changed';
X3DField95.AccessType := 'outputOnly';
X3DField95.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField95;
X3DField96 := TX3DField.Create;
X3DField96.NameField := 'l_eyeball_key';
X3DField96.AccessType := 'inputOutput';
X3DField96.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField96;
X3DField97 := TX3DField.Create;
X3DField97.NameField := 'l_eyeball_keyValue';
X3DField97.AccessType := 'inputOutput';
X3DField97.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField97;
X3DField98 := TX3DField.Create;
X3DField98.NameField := 'l_eyeball_changed';
X3DField98.AccessType := 'outputOnly';
X3DField98.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField98;
X3DField99 := TX3DField.Create;
X3DField99.NameField := 'l_eyeball_joint_key';
X3DField99.AccessType := 'inputOutput';
X3DField99.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField99;
X3DField100 := TX3DField.Create;
X3DField100.NameField := 'l_eyeball_joint_keyValue';
X3DField100.AccessType := 'inputOutput';
X3DField100.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField100;
X3DField101 := TX3DField.Create;
X3DField101.NameField := 'l_eyeball_joint_changed';
X3DField101.AccessType := 'outputOnly';
X3DField101.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField101;
X3DField102 := TX3DField.Create;
X3DField102.NameField := 'l_eyebrow_key';
X3DField102.AccessType := 'inputOutput';
X3DField102.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField102;
X3DField103 := TX3DField.Create;
X3DField103.NameField := 'l_eyebrow_keyValue';
X3DField103.AccessType := 'inputOutput';
X3DField103.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField103;
X3DField104 := TX3DField.Create;
X3DField104.NameField := 'l_eyebrow_changed';
X3DField104.AccessType := 'outputOnly';
X3DField104.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField104;
X3DField105 := TX3DField.Create;
X3DField105.NameField := 'l_eyebrow_joint_key';
X3DField105.AccessType := 'inputOutput';
X3DField105.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField105;
X3DField106 := TX3DField.Create;
X3DField106.NameField := 'l_eyebrow_joint_keyValue';
X3DField106.AccessType := 'inputOutput';
X3DField106.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField106;
X3DField107 := TX3DField.Create;
X3DField107.NameField := 'l_eyebrow_joint_changed';
X3DField107.AccessType := 'outputOnly';
X3DField107.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField107;
X3DField108 := TX3DField.Create;
X3DField108.NameField := 'l_eyelid_key';
X3DField108.AccessType := 'inputOutput';
X3DField108.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField108;
X3DField109 := TX3DField.Create;
X3DField109.NameField := 'l_eyelid_keyValue';
X3DField109.AccessType := 'inputOutput';
X3DField109.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField109;
X3DField110 := TX3DField.Create;
X3DField110.NameField := 'l_eyelid_changed';
X3DField110.AccessType := 'outputOnly';
X3DField110.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField110;
X3DField111 := TX3DField.Create;
X3DField111.NameField := 'l_eyelid_joint_key';
X3DField111.AccessType := 'inputOutput';
X3DField111.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField111;
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'l_eyelid_joint_keyValue';
X3DField112.AccessType := 'inputOutput';
X3DField112.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField112;
X3DField113 := TX3DField.Create;
X3DField113.NameField := 'l_eyelid_joint_changed';
X3DField113.AccessType := 'outputOnly';
X3DField113.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField113;
X3DField114 := TX3DField.Create;
X3DField114.NameField := 'l_forearm_key';
X3DField114.AccessType := 'inputOutput';
X3DField114.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField114;
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'l_forearm_keyValue';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField115;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'l_forearm_changed';
X3DField116.AccessType := 'outputOnly';
X3DField116.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'l_forefoot_key';
X3DField117.AccessType := 'inputOutput';
X3DField117.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField117;
X3DField118 := TX3DField.Create;
X3DField118.NameField := 'l_forefoot_keyValue';
X3DField118.AccessType := 'inputOutput';
X3DField118.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField118;
X3DField119 := TX3DField.Create;
X3DField119.NameField := 'l_forefoot_changed';
X3DField119.AccessType := 'outputOnly';
X3DField119.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField119;
X3DField120 := TX3DField.Create;
X3DField120.NameField := 'l_hand_key';
X3DField120.AccessType := 'inputOutput';
X3DField120.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField120;
X3DField121 := TX3DField.Create;
X3DField121.NameField := 'l_hand_keyValue';
X3DField121.AccessType := 'inputOutput';
X3DField121.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField121;
X3DField122 := TX3DField.Create;
X3DField122.NameField := 'l_hand_changed';
X3DField122.AccessType := 'outputOnly';
X3DField122.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField122;
X3DField123 := TX3DField.Create;
X3DField123.NameField := 'l_hindfoot_key';
X3DField123.AccessType := 'inputOutput';
X3DField123.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField123;
X3DField124 := TX3DField.Create;
X3DField124.NameField := 'l_hindfoot_keyValue';
X3DField124.AccessType := 'inputOutput';
X3DField124.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField124;
X3DField125 := TX3DField.Create;
X3DField125.NameField := 'l_hindfoot_changed';
X3DField125.AccessType := 'outputOnly';
X3DField125.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField125;
X3DField126 := TX3DField.Create;
X3DField126.NameField := 'l_hip_key';
X3DField126.AccessType := 'inputOutput';
X3DField126.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField126;
X3DField127 := TX3DField.Create;
X3DField127.NameField := 'l_hip_keyValue';
X3DField127.AccessType := 'inputOutput';
X3DField127.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField127;
X3DField128 := TX3DField.Create;
X3DField128.NameField := 'l_hip_changed';
X3DField128.AccessType := 'outputOnly';
X3DField128.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField128;
X3DField129 := TX3DField.Create;
X3DField129.NameField := 'l_index0_key';
X3DField129.AccessType := 'inputOutput';
X3DField129.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField129;
X3DField130 := TX3DField.Create;
X3DField130.NameField := 'l_index0_keyValue';
X3DField130.AccessType := 'inputOutput';
X3DField130.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField130;
X3DField131 := TX3DField.Create;
X3DField131.NameField := 'l_index0_changed';
X3DField131.AccessType := 'outputOnly';
X3DField131.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField131;
X3DField132 := TX3DField.Create;
X3DField132.NameField := 'l_index1_key';
X3DField132.AccessType := 'inputOutput';
X3DField132.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField132;
X3DField133 := TX3DField.Create;
X3DField133.NameField := 'l_index1_keyValue';
X3DField133.AccessType := 'inputOutput';
X3DField133.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField133;
X3DField134 := TX3DField.Create;
X3DField134.NameField := 'l_index1_changed';
X3DField134.AccessType := 'outputOnly';
X3DField134.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField134;
X3DField135 := TX3DField.Create;
X3DField135.NameField := 'l_index2_key';
X3DField135.AccessType := 'inputOutput';
X3DField135.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField135;
X3DField136 := TX3DField.Create;
X3DField136.NameField := 'l_index2_keyValue';
X3DField136.AccessType := 'inputOutput';
X3DField136.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField136;
X3DField137 := TX3DField.Create;
X3DField137.NameField := 'l_index2_changed';
X3DField137.AccessType := 'outputOnly';
X3DField137.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField137;
X3DField138 := TX3DField.Create;
X3DField138.NameField := 'l_index3_key';
X3DField138.AccessType := 'inputOutput';
X3DField138.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField138;
X3DField139 := TX3DField.Create;
X3DField139.NameField := 'l_index3_keyValue';
X3DField139.AccessType := 'inputOutput';
X3DField139.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField139;
X3DField140 := TX3DField.Create;
X3DField140.NameField := 'l_index3_changed';
X3DField140.AccessType := 'outputOnly';
X3DField140.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField140;
X3DField141 := TX3DField.Create;
X3DField141.NameField := 'l_index_distal_key';
X3DField141.AccessType := 'inputOutput';
X3DField141.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField141;
X3DField142 := TX3DField.Create;
X3DField142.NameField := 'l_index_distal_keyValue';
X3DField142.AccessType := 'inputOutput';
X3DField142.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField142;
X3DField143 := TX3DField.Create;
X3DField143.NameField := 'l_index_distal_changed';
X3DField143.AccessType := 'outputOnly';
X3DField143.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField143;
X3DField144 := TX3DField.Create;
X3DField144.NameField := 'l_index_metacarpal_key';
X3DField144.AccessType := 'inputOutput';
X3DField144.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField144;
X3DField145 := TX3DField.Create;
X3DField145.NameField := 'l_index_metacarpal_keyValue';
X3DField145.AccessType := 'inputOutput';
X3DField145.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField145;
X3DField146 := TX3DField.Create;
X3DField146.NameField := 'l_index_metacarpal_changed';
X3DField146.AccessType := 'outputOnly';
X3DField146.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField146;
X3DField147 := TX3DField.Create;
X3DField147.NameField := 'l_index_middle_key';
X3DField147.AccessType := 'inputOutput';
X3DField147.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField147;
X3DField148 := TX3DField.Create;
X3DField148.NameField := 'l_index_middle_keyValue';
X3DField148.AccessType := 'inputOutput';
X3DField148.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField148;
X3DField149 := TX3DField.Create;
X3DField149.NameField := 'l_index_middle_changed';
X3DField149.AccessType := 'outputOnly';
X3DField149.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField149;
X3DField150 := TX3DField.Create;
X3DField150.NameField := 'l_index_proximal_key';
X3DField150.AccessType := 'inputOutput';
X3DField150.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField150;
X3DField151 := TX3DField.Create;
X3DField151.NameField := 'l_index_proximal_keyValue';
X3DField151.AccessType := 'inputOutput';
X3DField151.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField151;
X3DField152 := TX3DField.Create;
X3DField152.NameField := 'l_index_proximal_changed';
X3DField152.AccessType := 'outputOnly';
X3DField152.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField152;
X3DField153 := TX3DField.Create;
X3DField153.NameField := 'l_knee_key';
X3DField153.AccessType := 'inputOutput';
X3DField153.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField153;
X3DField154 := TX3DField.Create;
X3DField154.NameField := 'l_knee_keyValue';
X3DField154.AccessType := 'inputOutput';
X3DField154.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField154;
X3DField155 := TX3DField.Create;
X3DField155.NameField := 'l_knee_changed';
X3DField155.AccessType := 'outputOnly';
X3DField155.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField155;
X3DField156 := TX3DField.Create;
X3DField156.NameField := 'l_metatarsal_key';
X3DField156.AccessType := 'inputOutput';
X3DField156.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField156;
X3DField157 := TX3DField.Create;
X3DField157.NameField := 'l_metatarsal_keyValue';
X3DField157.AccessType := 'inputOutput';
X3DField157.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField157;
X3DField158 := TX3DField.Create;
X3DField158.NameField := 'l_metatarsal_changed';
X3DField158.AccessType := 'outputOnly';
X3DField158.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField158;
X3DField159 := TX3DField.Create;
X3DField159.NameField := 'l_middistal_key';
X3DField159.AccessType := 'inputOutput';
X3DField159.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField159;
X3DField160 := TX3DField.Create;
X3DField160.NameField := 'l_middistal_keyValue';
X3DField160.AccessType := 'inputOutput';
X3DField160.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField160;
X3DField161 := TX3DField.Create;
X3DField161.NameField := 'l_middistal_changed';
X3DField161.AccessType := 'outputOnly';
X3DField161.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField161;
X3DField162 := TX3DField.Create;
X3DField162.NameField := 'l_middle0_key';
X3DField162.AccessType := 'inputOutput';
X3DField162.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField162;
X3DField163 := TX3DField.Create;
X3DField163.NameField := 'l_middle0_keyValue';
X3DField163.AccessType := 'inputOutput';
X3DField163.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField163;
X3DField164 := TX3DField.Create;
X3DField164.NameField := 'l_middle0_changed';
X3DField164.AccessType := 'outputOnly';
X3DField164.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField164;
X3DField165 := TX3DField.Create;
X3DField165.NameField := 'l_middle1_key';
X3DField165.AccessType := 'inputOutput';
X3DField165.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField165;
X3DField166 := TX3DField.Create;
X3DField166.NameField := 'l_middle1_keyValue';
X3DField166.AccessType := 'inputOutput';
X3DField166.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField166;
X3DField167 := TX3DField.Create;
X3DField167.NameField := 'l_middle1_changed';
X3DField167.AccessType := 'outputOnly';
X3DField167.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField167;
X3DField168 := TX3DField.Create;
X3DField168.NameField := 'l_middle2_key';
X3DField168.AccessType := 'inputOutput';
X3DField168.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField168;
X3DField169 := TX3DField.Create;
X3DField169.NameField := 'l_middle2_keyValue';
X3DField169.AccessType := 'inputOutput';
X3DField169.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField169;
X3DField170 := TX3DField.Create;
X3DField170.NameField := 'l_middle2_changed';
X3DField170.AccessType := 'outputOnly';
X3DField170.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField170;
X3DField171 := TX3DField.Create;
X3DField171.NameField := 'l_middle3_key';
X3DField171.AccessType := 'inputOutput';
X3DField171.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField171;
X3DField172 := TX3DField.Create;
X3DField172.NameField := 'l_middle3_keyValue';
X3DField172.AccessType := 'inputOutput';
X3DField172.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField172;
X3DField173 := TX3DField.Create;
X3DField173.NameField := 'l_middle3_changed';
X3DField173.AccessType := 'outputOnly';
X3DField173.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField173;
X3DField174 := TX3DField.Create;
X3DField174.NameField := 'l_middle_distal_key';
X3DField174.AccessType := 'inputOutput';
X3DField174.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField174;
X3DField175 := TX3DField.Create;
X3DField175.NameField := 'l_middle_distal_keyValue';
X3DField175.AccessType := 'inputOutput';
X3DField175.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField175;
X3DField176 := TX3DField.Create;
X3DField176.NameField := 'l_middle_distal_changed';
X3DField176.AccessType := 'outputOnly';
X3DField176.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField176;
X3DField177 := TX3DField.Create;
X3DField177.NameField := 'l_middle_metacarpal_key';
X3DField177.AccessType := 'inputOutput';
X3DField177.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField177;
X3DField178 := TX3DField.Create;
X3DField178.NameField := 'l_middle_metacarpal_keyValue';
X3DField178.AccessType := 'inputOutput';
X3DField178.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField178;
X3DField179 := TX3DField.Create;
X3DField179.NameField := 'l_middle_metacarpal_changed';
X3DField179.AccessType := 'outputOnly';
X3DField179.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField179;
X3DField180 := TX3DField.Create;
X3DField180.NameField := 'l_middle_middle_key';
X3DField180.AccessType := 'inputOutput';
X3DField180.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField180;
X3DField181 := TX3DField.Create;
X3DField181.NameField := 'l_middle_middle_keyValue';
X3DField181.AccessType := 'inputOutput';
X3DField181.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField181;
X3DField182 := TX3DField.Create;
X3DField182.NameField := 'l_middle_middle_changed';
X3DField182.AccessType := 'outputOnly';
X3DField182.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField182;
X3DField183 := TX3DField.Create;
X3DField183.NameField := 'l_middle_proximal_key';
X3DField183.AccessType := 'inputOutput';
X3DField183.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField183;
X3DField184 := TX3DField.Create;
X3DField184.NameField := 'l_middle_proximal_keyValue';
X3DField184.AccessType := 'inputOutput';
X3DField184.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField184;
X3DField185 := TX3DField.Create;
X3DField185.NameField := 'l_middle_proximal_changed';
X3DField185.AccessType := 'outputOnly';
X3DField185.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField185;
X3DField186 := TX3DField.Create;
X3DField186.NameField := 'l_midproximal_key';
X3DField186.AccessType := 'inputOutput';
X3DField186.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField186;
X3DField187 := TX3DField.Create;
X3DField187.NameField := 'l_midproximal_keyValue';
X3DField187.AccessType := 'inputOutput';
X3DField187.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField187;
X3DField188 := TX3DField.Create;
X3DField188.NameField := 'l_midproximal_changed';
X3DField188.AccessType := 'outputOnly';
X3DField188.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField188;
X3DField189 := TX3DField.Create;
X3DField189.NameField := 'l_midtarsal_key';
X3DField189.AccessType := 'inputOutput';
X3DField189.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField189;
X3DField190 := TX3DField.Create;
X3DField190.NameField := 'l_midtarsal_keyValue';
X3DField190.AccessType := 'inputOutput';
X3DField190.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField190;
X3DField191 := TX3DField.Create;
X3DField191.NameField := 'l_midtarsal_changed';
X3DField191.AccessType := 'outputOnly';
X3DField191.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField191;
X3DField192 := TX3DField.Create;
X3DField192.NameField := 'l_pinky0_key';
X3DField192.AccessType := 'inputOutput';
X3DField192.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField192;
X3DField193 := TX3DField.Create;
X3DField193.NameField := 'l_pinky0_keyValue';
X3DField193.AccessType := 'inputOutput';
X3DField193.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField193;
X3DField194 := TX3DField.Create;
X3DField194.NameField := 'l_pinky0_changed';
X3DField194.AccessType := 'outputOnly';
X3DField194.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField194;
X3DField195 := TX3DField.Create;
X3DField195.NameField := 'l_pinky1_key';
X3DField195.AccessType := 'inputOutput';
X3DField195.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField195;
X3DField196 := TX3DField.Create;
X3DField196.NameField := 'l_pinky1_keyValue';
X3DField196.AccessType := 'inputOutput';
X3DField196.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField196;
X3DField197 := TX3DField.Create;
X3DField197.NameField := 'l_pinky1_changed';
X3DField197.AccessType := 'outputOnly';
X3DField197.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField197;
X3DField198 := TX3DField.Create;
X3DField198.NameField := 'l_pinky2_key';
X3DField198.AccessType := 'inputOutput';
X3DField198.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField198;
X3DField199 := TX3DField.Create;
X3DField199.NameField := 'l_pinky2_keyValue';
X3DField199.AccessType := 'inputOutput';
X3DField199.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField199;
X3DField200 := TX3DField.Create;
X3DField200.NameField := 'l_pinky2_changed';
X3DField200.AccessType := 'outputOnly';
X3DField200.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField200;
X3DField201 := TX3DField.Create;
X3DField201.NameField := 'l_pinky3_key';
X3DField201.AccessType := 'inputOutput';
X3DField201.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField201;
X3DField202 := TX3DField.Create;
X3DField202.NameField := 'l_pinky3_keyValue';
X3DField202.AccessType := 'inputOutput';
X3DField202.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField202;
X3DField203 := TX3DField.Create;
X3DField203.NameField := 'l_pinky3_changed';
X3DField203.AccessType := 'outputOnly';
X3DField203.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField203;
X3DField204 := TX3DField.Create;
X3DField204.NameField := 'l_pinky_distal_key';
X3DField204.AccessType := 'inputOutput';
X3DField204.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField204;
X3DField205 := TX3DField.Create;
X3DField205.NameField := 'l_pinky_distal_keyValue';
X3DField205.AccessType := 'inputOutput';
X3DField205.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField205;
X3DField206 := TX3DField.Create;
X3DField206.NameField := 'l_pinky_distal_changed';
X3DField206.AccessType := 'outputOnly';
X3DField206.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField206;
X3DField207 := TX3DField.Create;
X3DField207.NameField := 'l_pinky_metacarpal_key';
X3DField207.AccessType := 'inputOutput';
X3DField207.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField207;
X3DField208 := TX3DField.Create;
X3DField208.NameField := 'l_pinky_metacarpal_keyValue';
X3DField208.AccessType := 'inputOutput';
X3DField208.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField208;
X3DField209 := TX3DField.Create;
X3DField209.NameField := 'l_pinky_metacarpal_changed';
X3DField209.AccessType := 'outputOnly';
X3DField209.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField209;
X3DField210 := TX3DField.Create;
X3DField210.NameField := 'l_pinky_middle_key';
X3DField210.AccessType := 'inputOutput';
X3DField210.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField210;
X3DField211 := TX3DField.Create;
X3DField211.NameField := 'l_pinky_middle_keyValue';
X3DField211.AccessType := 'inputOutput';
X3DField211.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField211;
X3DField212 := TX3DField.Create;
X3DField212.NameField := 'l_pinky_middle_changed';
X3DField212.AccessType := 'outputOnly';
X3DField212.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField212;
X3DField213 := TX3DField.Create;
X3DField213.NameField := 'l_pinky_proximal_key';
X3DField213.AccessType := 'inputOutput';
X3DField213.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField213;
X3DField214 := TX3DField.Create;
X3DField214.NameField := 'l_pinky_proximal_keyValue';
X3DField214.AccessType := 'inputOutput';
X3DField214.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField214;
X3DField215 := TX3DField.Create;
X3DField215.NameField := 'l_pinky_proximal_changed';
X3DField215.AccessType := 'outputOnly';
X3DField215.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField215;
X3DField216 := TX3DField.Create;
X3DField216.NameField := 'l_ring0_key';
X3DField216.AccessType := 'inputOutput';
X3DField216.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField216;
X3DField217 := TX3DField.Create;
X3DField217.NameField := 'l_ring0_keyValue';
X3DField217.AccessType := 'inputOutput';
X3DField217.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField217;
X3DField218 := TX3DField.Create;
X3DField218.NameField := 'l_ring0_changed';
X3DField218.AccessType := 'outputOnly';
X3DField218.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField218;
X3DField219 := TX3DField.Create;
X3DField219.NameField := 'l_ring1_key';
X3DField219.AccessType := 'inputOutput';
X3DField219.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField219;
X3DField220 := TX3DField.Create;
X3DField220.NameField := 'l_ring1_keyValue';
X3DField220.AccessType := 'inputOutput';
X3DField220.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField220;
X3DField221 := TX3DField.Create;
X3DField221.NameField := 'l_ring1_changed';
X3DField221.AccessType := 'outputOnly';
X3DField221.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField221;
X3DField222 := TX3DField.Create;
X3DField222.NameField := 'l_ring2_key';
X3DField222.AccessType := 'inputOutput';
X3DField222.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField222;
X3DField223 := TX3DField.Create;
X3DField223.NameField := 'l_ring2_keyValue';
X3DField223.AccessType := 'inputOutput';
X3DField223.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField223;
X3DField224 := TX3DField.Create;
X3DField224.NameField := 'l_ring2_changed';
X3DField224.AccessType := 'outputOnly';
X3DField224.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField224;
X3DField225 := TX3DField.Create;
X3DField225.NameField := 'l_ring3_key';
X3DField225.AccessType := 'inputOutput';
X3DField225.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField225;
X3DField226 := TX3DField.Create;
X3DField226.NameField := 'l_ring3_keyValue';
X3DField226.AccessType := 'inputOutput';
X3DField226.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField226;
X3DField227 := TX3DField.Create;
X3DField227.NameField := 'l_ring3_changed';
X3DField227.AccessType := 'outputOnly';
X3DField227.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField227;
X3DField228 := TX3DField.Create;
X3DField228.NameField := 'l_ring_distal_key';
X3DField228.AccessType := 'inputOutput';
X3DField228.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField228;
X3DField229 := TX3DField.Create;
X3DField229.NameField := 'l_ring_distal_keyValue';
X3DField229.AccessType := 'inputOutput';
X3DField229.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField229;
X3DField230 := TX3DField.Create;
X3DField230.NameField := 'l_ring_distal_changed';
X3DField230.AccessType := 'outputOnly';
X3DField230.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField230;
X3DField231 := TX3DField.Create;
X3DField231.NameField := 'l_ring_metacarpal_key';
X3DField231.AccessType := 'inputOutput';
X3DField231.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField231;
X3DField232 := TX3DField.Create;
X3DField232.NameField := 'l_ring_metacarpal_keyValue';
X3DField232.AccessType := 'inputOutput';
X3DField232.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField232;
X3DField233 := TX3DField.Create;
X3DField233.NameField := 'l_ring_metacarpal_changed';
X3DField233.AccessType := 'outputOnly';
X3DField233.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField233;
X3DField234 := TX3DField.Create;
X3DField234.NameField := 'l_ring_middle_key';
X3DField234.AccessType := 'inputOutput';
X3DField234.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField234;
X3DField235 := TX3DField.Create;
X3DField235.NameField := 'l_ring_middle_keyValue';
X3DField235.AccessType := 'inputOutput';
X3DField235.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField235;
X3DField236 := TX3DField.Create;
X3DField236.NameField := 'l_ring_middle_changed';
X3DField236.AccessType := 'outputOnly';
X3DField236.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField236;
X3DField237 := TX3DField.Create;
X3DField237.NameField := 'l_ring_proximal_key';
X3DField237.AccessType := 'inputOutput';
X3DField237.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField237;
X3DField238 := TX3DField.Create;
X3DField238.NameField := 'l_ring_proximal_keyValue';
X3DField238.AccessType := 'inputOutput';
X3DField238.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField238;
X3DField239 := TX3DField.Create;
X3DField239.NameField := 'l_ring_proximal_changed';
X3DField239.AccessType := 'outputOnly';
X3DField239.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField239;
X3DField240 := TX3DField.Create;
X3DField240.NameField := 'l_scapula_key';
X3DField240.AccessType := 'inputOutput';
X3DField240.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField240;
X3DField241 := TX3DField.Create;
X3DField241.NameField := 'l_scapula_keyValue';
X3DField241.AccessType := 'inputOutput';
X3DField241.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField241;
X3DField242 := TX3DField.Create;
X3DField242.NameField := 'l_scapula_changed';
X3DField242.AccessType := 'outputOnly';
X3DField242.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField242;
X3DField243 := TX3DField.Create;
X3DField243.NameField := 'l_shoulder_key';
X3DField243.AccessType := 'inputOutput';
X3DField243.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField243;
X3DField244 := TX3DField.Create;
X3DField244.NameField := 'l_shoulder_keyValue';
X3DField244.AccessType := 'inputOutput';
X3DField244.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField244;
X3DField245 := TX3DField.Create;
X3DField245.NameField := 'l_shoulder_changed';
X3DField245.AccessType := 'outputOnly';
X3DField245.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField245;
X3DField246 := TX3DField.Create;
X3DField246.NameField := 'l_sternoclavicular_key';
X3DField246.AccessType := 'inputOutput';
X3DField246.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField246;
X3DField247 := TX3DField.Create;
X3DField247.NameField := 'l_sternoclavicular_keyValue';
X3DField247.AccessType := 'inputOutput';
X3DField247.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField247;
X3DField248 := TX3DField.Create;
X3DField248.NameField := 'l_sternoclavicular_changed';
X3DField248.AccessType := 'outputOnly';
X3DField248.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField248;
X3DField249 := TX3DField.Create;
X3DField249.NameField := 'l_subtalar_key';
X3DField249.AccessType := 'inputOutput';
X3DField249.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField249;
X3DField250 := TX3DField.Create;
X3DField250.NameField := 'l_subtalar_keyValue';
X3DField250.AccessType := 'inputOutput';
X3DField250.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField250;
X3DField251 := TX3DField.Create;
X3DField251.NameField := 'l_subtalar_changed';
X3DField251.AccessType := 'outputOnly';
X3DField251.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField251;
X3DField252 := TX3DField.Create;
X3DField252.NameField := 'l_thigh_key';
X3DField252.AccessType := 'inputOutput';
X3DField252.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField252;
X3DField253 := TX3DField.Create;
X3DField253.NameField := 'l_thigh_keyValue';
X3DField253.AccessType := 'inputOutput';
X3DField253.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField253;
X3DField254 := TX3DField.Create;
X3DField254.NameField := 'l_thigh_changed';
X3DField254.AccessType := 'outputOnly';
X3DField254.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField254;
X3DField255 := TX3DField.Create;
X3DField255.NameField := 'l_thumb1_key';
X3DField255.AccessType := 'inputOutput';
X3DField255.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField255;
X3DField256 := TX3DField.Create;
X3DField256.NameField := 'l_thumb1_keyValue';
X3DField256.AccessType := 'inputOutput';
X3DField256.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField256;
X3DField257 := TX3DField.Create;
X3DField257.NameField := 'l_thumb1_changed';
X3DField257.AccessType := 'outputOnly';
X3DField257.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField257;
X3DField258 := TX3DField.Create;
X3DField258.NameField := 'l_thumb2_key';
X3DField258.AccessType := 'inputOutput';
X3DField258.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField258;
X3DField259 := TX3DField.Create;
X3DField259.NameField := 'l_thumb2_keyValue';
X3DField259.AccessType := 'inputOutput';
X3DField259.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField259;
X3DField260 := TX3DField.Create;
X3DField260.NameField := 'l_thumb2_changed';
X3DField260.AccessType := 'outputOnly';
X3DField260.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField260;
X3DField261 := TX3DField.Create;
X3DField261.NameField := 'l_thumb3_key';
X3DField261.AccessType := 'inputOutput';
X3DField261.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField261;
X3DField262 := TX3DField.Create;
X3DField262.NameField := 'l_thumb3_keyValue';
X3DField262.AccessType := 'inputOutput';
X3DField262.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField262;
X3DField263 := TX3DField.Create;
X3DField263.NameField := 'l_thumb3_changed';
X3DField263.AccessType := 'outputOnly';
X3DField263.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField263;
X3DField264 := TX3DField.Create;
X3DField264.NameField := 'l_thumb_distal_key';
X3DField264.AccessType := 'inputOutput';
X3DField264.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField264;
X3DField265 := TX3DField.Create;
X3DField265.NameField := 'l_thumb_distal_keyValue';
X3DField265.AccessType := 'inputOutput';
X3DField265.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField265;
X3DField266 := TX3DField.Create;
X3DField266.NameField := 'l_thumb_distal_changed';
X3DField266.AccessType := 'outputOnly';
X3DField266.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField266;
X3DField267 := TX3DField.Create;
X3DField267.NameField := 'l_thumb_metacarpal_key';
X3DField267.AccessType := 'inputOutput';
X3DField267.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField267;
X3DField268 := TX3DField.Create;
X3DField268.NameField := 'l_thumb_metacarpal_keyValue';
X3DField268.AccessType := 'inputOutput';
X3DField268.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField268;
X3DField269 := TX3DField.Create;
X3DField269.NameField := 'l_thumb_metacarpal_changed';
X3DField269.AccessType := 'outputOnly';
X3DField269.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField269;
X3DField270 := TX3DField.Create;
X3DField270.NameField := 'l_thumb_proximal_key';
X3DField270.AccessType := 'inputOutput';
X3DField270.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField270;
X3DField271 := TX3DField.Create;
X3DField271.NameField := 'l_thumb_proximal_keyValue';
X3DField271.AccessType := 'inputOutput';
X3DField271.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField271;
X3DField272 := TX3DField.Create;
X3DField272.NameField := 'l_thumb_proximal_changed';
X3DField272.AccessType := 'outputOnly';
X3DField272.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField272;
X3DField273 := TX3DField.Create;
X3DField273.NameField := 'l_upperarm_key';
X3DField273.AccessType := 'inputOutput';
X3DField273.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField273;
X3DField274 := TX3DField.Create;
X3DField274.NameField := 'l_upperarm_keyValue';
X3DField274.AccessType := 'inputOutput';
X3DField274.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField274;
X3DField275 := TX3DField.Create;
X3DField275.NameField := 'l_upperarm_changed';
X3DField275.AccessType := 'outputOnly';
X3DField275.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField275;
X3DField276 := TX3DField.Create;
X3DField276.NameField := 'l_wrist_key';
X3DField276.AccessType := 'inputOutput';
X3DField276.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField276;
X3DField277 := TX3DField.Create;
X3DField277.NameField := 'l_wrist_keyValue';
X3DField277.AccessType := 'inputOutput';
X3DField277.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField277;
X3DField278 := TX3DField.Create;
X3DField278.NameField := 'l_wrist_changed';
X3DField278.AccessType := 'outputOnly';
X3DField278.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField278;
X3DField279 := TX3DField.Create;
X3DField279.NameField := 'pelvis_key';
X3DField279.AccessType := 'inputOutput';
X3DField279.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField279;
X3DField280 := TX3DField.Create;
X3DField280.NameField := 'pelvis_keyValue';
X3DField280.AccessType := 'inputOutput';
X3DField280.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField280;
X3DField281 := TX3DField.Create;
X3DField281.NameField := 'pelvis_changed';
X3DField281.AccessType := 'outputOnly';
X3DField281.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField281;
X3DField282 := TX3DField.Create;
X3DField282.NameField := 'r_acromioclavicular_key';
X3DField282.AccessType := 'inputOutput';
X3DField282.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField282;
X3DField283 := TX3DField.Create;
X3DField283.NameField := 'r_acromioclavicular_keyValue';
X3DField283.AccessType := 'inputOutput';
X3DField283.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField283;
X3DField284 := TX3DField.Create;
X3DField284.NameField := 'r_acromioclavicular_changed';
X3DField284.AccessType := 'outputOnly';
X3DField284.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField284;
X3DField285 := TX3DField.Create;
X3DField285.NameField := 'r_ankle_key';
X3DField285.AccessType := 'inputOutput';
X3DField285.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField285;
X3DField286 := TX3DField.Create;
X3DField286.NameField := 'r_ankle_keyValue';
X3DField286.AccessType := 'inputOutput';
X3DField286.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField286;
X3DField287 := TX3DField.Create;
X3DField287.NameField := 'r_ankle_changed';
X3DField287.AccessType := 'outputOnly';
X3DField287.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField287;
X3DField288 := TX3DField.Create;
X3DField288.NameField := 'r_calf_key';
X3DField288.AccessType := 'inputOutput';
X3DField288.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField288;
X3DField289 := TX3DField.Create;
X3DField289.NameField := 'r_calf_keyValue';
X3DField289.AccessType := 'inputOutput';
X3DField289.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField289;
X3DField290 := TX3DField.Create;
X3DField290.NameField := 'r_calf_changed';
X3DField290.AccessType := 'outputOnly';
X3DField290.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField290;
X3DField291 := TX3DField.Create;
X3DField291.NameField := 'r_clavicle_key';
X3DField291.AccessType := 'inputOutput';
X3DField291.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField291;
X3DField292 := TX3DField.Create;
X3DField292.NameField := 'r_clavicle_keyValue';
X3DField292.AccessType := 'inputOutput';
X3DField292.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField292;
X3DField293 := TX3DField.Create;
X3DField293.NameField := 'r_clavicle_changed';
X3DField293.AccessType := 'outputOnly';
X3DField293.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField293;
X3DField294 := TX3DField.Create;
X3DField294.NameField := 'r_elbow_key';
X3DField294.AccessType := 'inputOutput';
X3DField294.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField294;
X3DField295 := TX3DField.Create;
X3DField295.NameField := 'r_elbow_keyValue';
X3DField295.AccessType := 'inputOutput';
X3DField295.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField295;
X3DField296 := TX3DField.Create;
X3DField296.NameField := 'r_elbow_changed';
X3DField296.AccessType := 'outputOnly';
X3DField296.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField296;
X3DField297 := TX3DField.Create;
X3DField297.NameField := 'r_eyeball_key';
X3DField297.AccessType := 'inputOutput';
X3DField297.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField297;
X3DField298 := TX3DField.Create;
X3DField298.NameField := 'r_eyeball_keyValue';
X3DField298.AccessType := 'inputOutput';
X3DField298.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField298;
X3DField299 := TX3DField.Create;
X3DField299.NameField := 'r_eyeball_changed';
X3DField299.AccessType := 'outputOnly';
X3DField299.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField299;
X3DField300 := TX3DField.Create;
X3DField300.NameField := 'r_eyeball_joint_key';
X3DField300.AccessType := 'inputOutput';
X3DField300.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField300;
X3DField301 := TX3DField.Create;
X3DField301.NameField := 'r_eyeball_joint_keyValue';
X3DField301.AccessType := 'inputOutput';
X3DField301.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField301;
X3DField302 := TX3DField.Create;
X3DField302.NameField := 'r_eyeball_joint_changed';
X3DField302.AccessType := 'outputOnly';
X3DField302.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField302;
X3DField303 := TX3DField.Create;
X3DField303.NameField := 'r_eyebrow_key';
X3DField303.AccessType := 'inputOutput';
X3DField303.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField303;
X3DField304 := TX3DField.Create;
X3DField304.NameField := 'r_eyebrow_keyValue';
X3DField304.AccessType := 'inputOutput';
X3DField304.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField304;
X3DField305 := TX3DField.Create;
X3DField305.NameField := 'r_eyebrow_changed';
X3DField305.AccessType := 'outputOnly';
X3DField305.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField305;
X3DField306 := TX3DField.Create;
X3DField306.NameField := 'r_eyebrow_joint_key';
X3DField306.AccessType := 'inputOutput';
X3DField306.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField306;
X3DField307 := TX3DField.Create;
X3DField307.NameField := 'r_eyebrow_joint_keyValue';
X3DField307.AccessType := 'inputOutput';
X3DField307.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField307;
X3DField308 := TX3DField.Create;
X3DField308.NameField := 'r_eyebrow_joint_changed';
X3DField308.AccessType := 'outputOnly';
X3DField308.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField308;
X3DField309 := TX3DField.Create;
X3DField309.NameField := 'r_eyelid_key';
X3DField309.AccessType := 'inputOutput';
X3DField309.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField309;
X3DField310 := TX3DField.Create;
X3DField310.NameField := 'r_eyelid_keyValue';
X3DField310.AccessType := 'inputOutput';
X3DField310.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField310;
X3DField311 := TX3DField.Create;
X3DField311.NameField := 'r_eyelid_changed';
X3DField311.AccessType := 'outputOnly';
X3DField311.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField311;
X3DField312 := TX3DField.Create;
X3DField312.NameField := 'r_eyelid_joint_key';
X3DField312.AccessType := 'inputOutput';
X3DField312.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField312;
X3DField313 := TX3DField.Create;
X3DField313.NameField := 'r_eyelid_joint_keyValue';
X3DField313.AccessType := 'inputOutput';
X3DField313.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField313;
X3DField314 := TX3DField.Create;
X3DField314.NameField := 'r_eyelid_joint_changed';
X3DField314.AccessType := 'outputOnly';
X3DField314.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField314;
X3DField315 := TX3DField.Create;
X3DField315.NameField := 'r_forearm_key';
X3DField315.AccessType := 'inputOutput';
X3DField315.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField315;
X3DField316 := TX3DField.Create;
X3DField316.NameField := 'r_forearm_keyValue';
X3DField316.AccessType := 'inputOutput';
X3DField316.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField316;
X3DField317 := TX3DField.Create;
X3DField317.NameField := 'r_forearm_changed';
X3DField317.AccessType := 'outputOnly';
X3DField317.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField317;
X3DField318 := TX3DField.Create;
X3DField318.NameField := 'r_forefoot_key';
X3DField318.AccessType := 'inputOutput';
X3DField318.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField318;
X3DField319 := TX3DField.Create;
X3DField319.NameField := 'r_forefoot_keyValue';
X3DField319.AccessType := 'inputOutput';
X3DField319.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField319;
X3DField320 := TX3DField.Create;
X3DField320.NameField := 'r_forefoot_changed';
X3DField320.AccessType := 'outputOnly';
X3DField320.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField320;
X3DField321 := TX3DField.Create;
X3DField321.NameField := 'r_hand_key';
X3DField321.AccessType := 'inputOutput';
X3DField321.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField321;
X3DField322 := TX3DField.Create;
X3DField322.NameField := 'r_hand_keyValue';
X3DField322.AccessType := 'inputOutput';
X3DField322.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField322;
X3DField323 := TX3DField.Create;
X3DField323.NameField := 'r_hand_changed';
X3DField323.AccessType := 'outputOnly';
X3DField323.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField323;
X3DField324 := TX3DField.Create;
X3DField324.NameField := 'r_hindfoot_key';
X3DField324.AccessType := 'inputOutput';
X3DField324.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField324;
X3DField325 := TX3DField.Create;
X3DField325.NameField := 'r_hindfoot_keyValue';
X3DField325.AccessType := 'inputOutput';
X3DField325.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField325;
X3DField326 := TX3DField.Create;
X3DField326.NameField := 'r_hindfoot_changed';
X3DField326.AccessType := 'outputOnly';
X3DField326.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField326;
X3DField327 := TX3DField.Create;
X3DField327.NameField := 'r_hip_key';
X3DField327.AccessType := 'inputOutput';
X3DField327.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField327;
X3DField328 := TX3DField.Create;
X3DField328.NameField := 'r_hip_keyValue';
X3DField328.AccessType := 'inputOutput';
X3DField328.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField328;
X3DField329 := TX3DField.Create;
X3DField329.NameField := 'r_hip_changed';
X3DField329.AccessType := 'outputOnly';
X3DField329.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField329;
X3DField330 := TX3DField.Create;
X3DField330.NameField := 'r_index0_key';
X3DField330.AccessType := 'inputOutput';
X3DField330.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField330;
X3DField331 := TX3DField.Create;
X3DField331.NameField := 'r_index0_keyValue';
X3DField331.AccessType := 'inputOutput';
X3DField331.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField331;
X3DField332 := TX3DField.Create;
X3DField332.NameField := 'r_index0_changed';
X3DField332.AccessType := 'outputOnly';
X3DField332.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField332;
X3DField333 := TX3DField.Create;
X3DField333.NameField := 'r_index1_key';
X3DField333.AccessType := 'inputOutput';
X3DField333.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField333;
X3DField334 := TX3DField.Create;
X3DField334.NameField := 'r_index1_keyValue';
X3DField334.AccessType := 'inputOutput';
X3DField334.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField334;
X3DField335 := TX3DField.Create;
X3DField335.NameField := 'r_index1_changed';
X3DField335.AccessType := 'outputOnly';
X3DField335.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField335;
X3DField336 := TX3DField.Create;
X3DField336.NameField := 'r_index2_key';
X3DField336.AccessType := 'inputOutput';
X3DField336.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField336;
X3DField337 := TX3DField.Create;
X3DField337.NameField := 'r_index2_keyValue';
X3DField337.AccessType := 'inputOutput';
X3DField337.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField337;
X3DField338 := TX3DField.Create;
X3DField338.NameField := 'r_index2_changed';
X3DField338.AccessType := 'outputOnly';
X3DField338.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField338;
X3DField339 := TX3DField.Create;
X3DField339.NameField := 'r_index3_key';
X3DField339.AccessType := 'inputOutput';
X3DField339.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField339;
X3DField340 := TX3DField.Create;
X3DField340.NameField := 'r_index3_keyValue';
X3DField340.AccessType := 'inputOutput';
X3DField340.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField340;
X3DField341 := TX3DField.Create;
X3DField341.NameField := 'r_index3_changed';
X3DField341.AccessType := 'outputOnly';
X3DField341.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField341;
X3DField342 := TX3DField.Create;
X3DField342.NameField := 'r_index_distal_key';
X3DField342.AccessType := 'inputOutput';
X3DField342.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField342;
X3DField343 := TX3DField.Create;
X3DField343.NameField := 'r_index_distal_keyValue';
X3DField343.AccessType := 'inputOutput';
X3DField343.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField343;
X3DField344 := TX3DField.Create;
X3DField344.NameField := 'r_index_distal_changed';
X3DField344.AccessType := 'outputOnly';
X3DField344.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField344;
X3DField345 := TX3DField.Create;
X3DField345.NameField := 'r_index_metacarpal_key';
X3DField345.AccessType := 'inputOutput';
X3DField345.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField345;
X3DField346 := TX3DField.Create;
X3DField346.NameField := 'r_index_metacarpal_keyValue';
X3DField346.AccessType := 'inputOutput';
X3DField346.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField346;
X3DField347 := TX3DField.Create;
X3DField347.NameField := 'r_index_metacarpal_changed';
X3DField347.AccessType := 'outputOnly';
X3DField347.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField347;
X3DField348 := TX3DField.Create;
X3DField348.NameField := 'r_index_middle_key';
X3DField348.AccessType := 'inputOutput';
X3DField348.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField348;
X3DField349 := TX3DField.Create;
X3DField349.NameField := 'r_index_middle_keyValue';
X3DField349.AccessType := 'inputOutput';
X3DField349.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField349;
X3DField350 := TX3DField.Create;
X3DField350.NameField := 'r_index_middle_changed';
X3DField350.AccessType := 'outputOnly';
X3DField350.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField350;
X3DField351 := TX3DField.Create;
X3DField351.NameField := 'r_index_proximal_key';
X3DField351.AccessType := 'inputOutput';
X3DField351.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField351;
X3DField352 := TX3DField.Create;
X3DField352.NameField := 'r_index_proximal_keyValue';
X3DField352.AccessType := 'inputOutput';
X3DField352.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField352;
X3DField353 := TX3DField.Create;
X3DField353.NameField := 'r_index_proximal_changed';
X3DField353.AccessType := 'outputOnly';
X3DField353.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField353;
X3DField354 := TX3DField.Create;
X3DField354.NameField := 'r_knee_key';
X3DField354.AccessType := 'inputOutput';
X3DField354.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField354;
X3DField355 := TX3DField.Create;
X3DField355.NameField := 'r_knee_keyValue';
X3DField355.AccessType := 'inputOutput';
X3DField355.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField355;
X3DField356 := TX3DField.Create;
X3DField356.NameField := 'r_knee_changed';
X3DField356.AccessType := 'outputOnly';
X3DField356.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField356;
X3DField357 := TX3DField.Create;
X3DField357.NameField := 'r_metatarsal_key';
X3DField357.AccessType := 'inputOutput';
X3DField357.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField357;
X3DField358 := TX3DField.Create;
X3DField358.NameField := 'r_metatarsal_keyValue';
X3DField358.AccessType := 'inputOutput';
X3DField358.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField358;
X3DField359 := TX3DField.Create;
X3DField359.NameField := 'r_metatarsal_changed';
X3DField359.AccessType := 'outputOnly';
X3DField359.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField359;
X3DField360 := TX3DField.Create;
X3DField360.NameField := 'r_middistal_key';
X3DField360.AccessType := 'inputOutput';
X3DField360.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField360;
X3DField361 := TX3DField.Create;
X3DField361.NameField := 'r_middistal_keyValue';
X3DField361.AccessType := 'inputOutput';
X3DField361.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField361;
X3DField362 := TX3DField.Create;
X3DField362.NameField := 'r_middistal_changed';
X3DField362.AccessType := 'outputOnly';
X3DField362.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField362;
X3DField363 := TX3DField.Create;
X3DField363.NameField := 'r_middle0_key';
X3DField363.AccessType := 'inputOutput';
X3DField363.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField363;
X3DField364 := TX3DField.Create;
X3DField364.NameField := 'r_middle0_keyValue';
X3DField364.AccessType := 'inputOutput';
X3DField364.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField364;
X3DField365 := TX3DField.Create;
X3DField365.NameField := 'r_middle0_changed';
X3DField365.AccessType := 'outputOnly';
X3DField365.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField365;
X3DField366 := TX3DField.Create;
X3DField366.NameField := 'r_middle1_key';
X3DField366.AccessType := 'inputOutput';
X3DField366.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField366;
X3DField367 := TX3DField.Create;
X3DField367.NameField := 'r_middle1_keyValue';
X3DField367.AccessType := 'inputOutput';
X3DField367.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField367;
X3DField368 := TX3DField.Create;
X3DField368.NameField := 'r_middle1_changed';
X3DField368.AccessType := 'outputOnly';
X3DField368.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField368;
X3DField369 := TX3DField.Create;
X3DField369.NameField := 'r_middle2_key';
X3DField369.AccessType := 'inputOutput';
X3DField369.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField369;
X3DField370 := TX3DField.Create;
X3DField370.NameField := 'r_middle2_keyValue';
X3DField370.AccessType := 'inputOutput';
X3DField370.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField370;
X3DField371 := TX3DField.Create;
X3DField371.NameField := 'r_middle2_changed';
X3DField371.AccessType := 'outputOnly';
X3DField371.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField371;
X3DField372 := TX3DField.Create;
X3DField372.NameField := 'r_middle3_key';
X3DField372.AccessType := 'inputOutput';
X3DField372.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField372;
X3DField373 := TX3DField.Create;
X3DField373.NameField := 'r_middle3_keyValue';
X3DField373.AccessType := 'inputOutput';
X3DField373.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField373;
X3DField374 := TX3DField.Create;
X3DField374.NameField := 'r_middle3_changed';
X3DField374.AccessType := 'outputOnly';
X3DField374.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField374;
X3DField375 := TX3DField.Create;
X3DField375.NameField := 'r_middle_distal_key';
X3DField375.AccessType := 'inputOutput';
X3DField375.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField375;
X3DField376 := TX3DField.Create;
X3DField376.NameField := 'r_middle_distal_keyValue';
X3DField376.AccessType := 'inputOutput';
X3DField376.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField376;
X3DField377 := TX3DField.Create;
X3DField377.NameField := 'r_middle_distal_changed';
X3DField377.AccessType := 'outputOnly';
X3DField377.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField377;
X3DField378 := TX3DField.Create;
X3DField378.NameField := 'r_middle_metacarpal_key';
X3DField378.AccessType := 'inputOutput';
X3DField378.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField378;
X3DField379 := TX3DField.Create;
X3DField379.NameField := 'r_middle_metacarpal_keyValue';
X3DField379.AccessType := 'inputOutput';
X3DField379.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField379;
X3DField380 := TX3DField.Create;
X3DField380.NameField := 'r_middle_metacarpal_changed';
X3DField380.AccessType := 'outputOnly';
X3DField380.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField380;
X3DField381 := TX3DField.Create;
X3DField381.NameField := 'r_middle_middle_key';
X3DField381.AccessType := 'inputOutput';
X3DField381.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField381;
X3DField382 := TX3DField.Create;
X3DField382.NameField := 'r_middle_middle_keyValue';
X3DField382.AccessType := 'inputOutput';
X3DField382.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField382;
X3DField383 := TX3DField.Create;
X3DField383.NameField := 'r_middle_middle_changed';
X3DField383.AccessType := 'outputOnly';
X3DField383.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField383;
X3DField384 := TX3DField.Create;
X3DField384.NameField := 'r_middle_proximal_key';
X3DField384.AccessType := 'inputOutput';
X3DField384.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField384;
X3DField385 := TX3DField.Create;
X3DField385.NameField := 'r_middle_proximal_keyValue';
X3DField385.AccessType := 'inputOutput';
X3DField385.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField385;
X3DField386 := TX3DField.Create;
X3DField386.NameField := 'r_middle_proximal_changed';
X3DField386.AccessType := 'outputOnly';
X3DField386.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField386;
X3DField387 := TX3DField.Create;
X3DField387.NameField := 'r_midproximal_key';
X3DField387.AccessType := 'inputOutput';
X3DField387.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField387;
X3DField388 := TX3DField.Create;
X3DField388.NameField := 'r_midproximal_keyValue';
X3DField388.AccessType := 'inputOutput';
X3DField388.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField388;
X3DField389 := TX3DField.Create;
X3DField389.NameField := 'r_midproximal_changed';
X3DField389.AccessType := 'outputOnly';
X3DField389.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField389;
X3DField390 := TX3DField.Create;
X3DField390.NameField := 'r_midtarsal_key';
X3DField390.AccessType := 'inputOutput';
X3DField390.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField390;
X3DField391 := TX3DField.Create;
X3DField391.NameField := 'r_midtarsal_keyValue';
X3DField391.AccessType := 'inputOutput';
X3DField391.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField391;
X3DField392 := TX3DField.Create;
X3DField392.NameField := 'r_midtarsal_changed';
X3DField392.AccessType := 'outputOnly';
X3DField392.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField392;
X3DField393 := TX3DField.Create;
X3DField393.NameField := 'r_pinky0_key';
X3DField393.AccessType := 'inputOutput';
X3DField393.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField393;
X3DField394 := TX3DField.Create;
X3DField394.NameField := 'r_pinky0_keyValue';
X3DField394.AccessType := 'inputOutput';
X3DField394.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField394;
X3DField395 := TX3DField.Create;
X3DField395.NameField := 'r_pinky0_changed';
X3DField395.AccessType := 'outputOnly';
X3DField395.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField395;
X3DField396 := TX3DField.Create;
X3DField396.NameField := 'r_pinky1_key';
X3DField396.AccessType := 'inputOutput';
X3DField396.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField396;
X3DField397 := TX3DField.Create;
X3DField397.NameField := 'r_pinky1_keyValue';
X3DField397.AccessType := 'inputOutput';
X3DField397.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField397;
X3DField398 := TX3DField.Create;
X3DField398.NameField := 'r_pinky1_changed';
X3DField398.AccessType := 'outputOnly';
X3DField398.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField398;
X3DField399 := TX3DField.Create;
X3DField399.NameField := 'r_pinky2_key';
X3DField399.AccessType := 'inputOutput';
X3DField399.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField399;
X3DField400 := TX3DField.Create;
X3DField400.NameField := 'r_pinky2_keyValue';
X3DField400.AccessType := 'inputOutput';
X3DField400.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField400;
X3DField401 := TX3DField.Create;
X3DField401.NameField := 'r_pinky2_changed';
X3DField401.AccessType := 'outputOnly';
X3DField401.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField401;
X3DField402 := TX3DField.Create;
X3DField402.NameField := 'r_pinky3_key';
X3DField402.AccessType := 'inputOutput';
X3DField402.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField402;
X3DField403 := TX3DField.Create;
X3DField403.NameField := 'r_pinky3_keyValue';
X3DField403.AccessType := 'inputOutput';
X3DField403.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField403;
X3DField404 := TX3DField.Create;
X3DField404.NameField := 'r_pinky3_changed';
X3DField404.AccessType := 'outputOnly';
X3DField404.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField404;
X3DField405 := TX3DField.Create;
X3DField405.NameField := 'r_pinky_distal_key';
X3DField405.AccessType := 'inputOutput';
X3DField405.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField405;
X3DField406 := TX3DField.Create;
X3DField406.NameField := 'r_pinky_distal_keyValue';
X3DField406.AccessType := 'inputOutput';
X3DField406.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField406;
X3DField407 := TX3DField.Create;
X3DField407.NameField := 'r_pinky_distal_changed';
X3DField407.AccessType := 'outputOnly';
X3DField407.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField407;
X3DField408 := TX3DField.Create;
X3DField408.NameField := 'r_pinky_metacarpal_key';
X3DField408.AccessType := 'inputOutput';
X3DField408.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField408;
X3DField409 := TX3DField.Create;
X3DField409.NameField := 'r_pinky_metacarpal_keyValue';
X3DField409.AccessType := 'inputOutput';
X3DField409.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField409;
X3DField410 := TX3DField.Create;
X3DField410.NameField := 'r_pinky_metacarpal_changed';
X3DField410.AccessType := 'outputOnly';
X3DField410.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField410;
X3DField411 := TX3DField.Create;
X3DField411.NameField := 'r_pinky_middle_key';
X3DField411.AccessType := 'inputOutput';
X3DField411.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField411;
X3DField412 := TX3DField.Create;
X3DField412.NameField := 'r_pinky_middle_keyValue';
X3DField412.AccessType := 'inputOutput';
X3DField412.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField412;
X3DField413 := TX3DField.Create;
X3DField413.NameField := 'r_pinky_middle_changed';
X3DField413.AccessType := 'outputOnly';
X3DField413.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField413;
X3DField414 := TX3DField.Create;
X3DField414.NameField := 'r_pinky_proximal_key';
X3DField414.AccessType := 'inputOutput';
X3DField414.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField414;
X3DField415 := TX3DField.Create;
X3DField415.NameField := 'r_pinky_proximal_keyValue';
X3DField415.AccessType := 'inputOutput';
X3DField415.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField415;
X3DField416 := TX3DField.Create;
X3DField416.NameField := 'r_pinky_proximal_changed';
X3DField416.AccessType := 'outputOnly';
X3DField416.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField416;
X3DField417 := TX3DField.Create;
X3DField417.NameField := 'r_ring0_key';
X3DField417.AccessType := 'inputOutput';
X3DField417.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField417;
X3DField418 := TX3DField.Create;
X3DField418.NameField := 'r_ring0_keyValue';
X3DField418.AccessType := 'inputOutput';
X3DField418.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField418;
X3DField419 := TX3DField.Create;
X3DField419.NameField := 'r_ring0_changed';
X3DField419.AccessType := 'outputOnly';
X3DField419.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField419;
X3DField420 := TX3DField.Create;
X3DField420.NameField := 'r_ring1_key';
X3DField420.AccessType := 'inputOutput';
X3DField420.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField420;
X3DField421 := TX3DField.Create;
X3DField421.NameField := 'r_ring1_keyValue';
X3DField421.AccessType := 'inputOutput';
X3DField421.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField421;
X3DField422 := TX3DField.Create;
X3DField422.NameField := 'r_ring1_changed';
X3DField422.AccessType := 'outputOnly';
X3DField422.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField422;
X3DField423 := TX3DField.Create;
X3DField423.NameField := 'r_ring2_key';
X3DField423.AccessType := 'inputOutput';
X3DField423.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField423;
X3DField424 := TX3DField.Create;
X3DField424.NameField := 'r_ring2_keyValue';
X3DField424.AccessType := 'inputOutput';
X3DField424.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField424;
X3DField425 := TX3DField.Create;
X3DField425.NameField := 'r_ring2_changed';
X3DField425.AccessType := 'outputOnly';
X3DField425.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField425;
X3DField426 := TX3DField.Create;
X3DField426.NameField := 'r_ring3_key';
X3DField426.AccessType := 'inputOutput';
X3DField426.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField426;
X3DField427 := TX3DField.Create;
X3DField427.NameField := 'r_ring3_keyValue';
X3DField427.AccessType := 'inputOutput';
X3DField427.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField427;
X3DField428 := TX3DField.Create;
X3DField428.NameField := 'r_ring3_changed';
X3DField428.AccessType := 'outputOnly';
X3DField428.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField428;
X3DField429 := TX3DField.Create;
X3DField429.NameField := 'r_ring_distal_key';
X3DField429.AccessType := 'inputOutput';
X3DField429.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField429;
X3DField430 := TX3DField.Create;
X3DField430.NameField := 'r_ring_distal_keyValue';
X3DField430.AccessType := 'inputOutput';
X3DField430.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField430;
X3DField431 := TX3DField.Create;
X3DField431.NameField := 'r_ring_distal_changed';
X3DField431.AccessType := 'outputOnly';
X3DField431.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField431;
X3DField432 := TX3DField.Create;
X3DField432.NameField := 'r_ring_metacarpal_key';
X3DField432.AccessType := 'inputOutput';
X3DField432.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField432;
X3DField433 := TX3DField.Create;
X3DField433.NameField := 'r_ring_metacarpal_keyValue';
X3DField433.AccessType := 'inputOutput';
X3DField433.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField433;
X3DField434 := TX3DField.Create;
X3DField434.NameField := 'r_ring_metacarpal_changed';
X3DField434.AccessType := 'outputOnly';
X3DField434.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField434;
X3DField435 := TX3DField.Create;
X3DField435.NameField := 'r_ring_middle_key';
X3DField435.AccessType := 'inputOutput';
X3DField435.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField435;
X3DField436 := TX3DField.Create;
X3DField436.NameField := 'r_ring_middle_keyValue';
X3DField436.AccessType := 'inputOutput';
X3DField436.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField436;
X3DField437 := TX3DField.Create;
X3DField437.NameField := 'r_ring_middle_changed';
X3DField437.AccessType := 'outputOnly';
X3DField437.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField437;
X3DField438 := TX3DField.Create;
X3DField438.NameField := 'r_ring_proximal_key';
X3DField438.AccessType := 'inputOutput';
X3DField438.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField438;
X3DField439 := TX3DField.Create;
X3DField439.NameField := 'r_ring_proximal_keyValue';
X3DField439.AccessType := 'inputOutput';
X3DField439.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField439;
X3DField440 := TX3DField.Create;
X3DField440.NameField := 'r_ring_proximal_changed';
X3DField440.AccessType := 'outputOnly';
X3DField440.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField440;
X3DField441 := TX3DField.Create;
X3DField441.NameField := 'r_scapula_key';
X3DField441.AccessType := 'inputOutput';
X3DField441.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField441;
X3DField442 := TX3DField.Create;
X3DField442.NameField := 'r_scapula_keyValue';
X3DField442.AccessType := 'inputOutput';
X3DField442.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField442;
X3DField443 := TX3DField.Create;
X3DField443.NameField := 'r_scapula_changed';
X3DField443.AccessType := 'outputOnly';
X3DField443.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField443;
X3DField444 := TX3DField.Create;
X3DField444.NameField := 'r_shoulder_key';
X3DField444.AccessType := 'inputOutput';
X3DField444.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField444;
X3DField445 := TX3DField.Create;
X3DField445.NameField := 'r_shoulder_keyValue';
X3DField445.AccessType := 'inputOutput';
X3DField445.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField445;
X3DField446 := TX3DField.Create;
X3DField446.NameField := 'r_shoulder_changed';
X3DField446.AccessType := 'outputOnly';
X3DField446.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField446;
X3DField447 := TX3DField.Create;
X3DField447.NameField := 'r_sternoclavicular_key';
X3DField447.AccessType := 'inputOutput';
X3DField447.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField447;
X3DField448 := TX3DField.Create;
X3DField448.NameField := 'r_sternoclavicular_keyValue';
X3DField448.AccessType := 'inputOutput';
X3DField448.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField448;
X3DField449 := TX3DField.Create;
X3DField449.NameField := 'r_sternoclavicular_changed';
X3DField449.AccessType := 'outputOnly';
X3DField449.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField449;
X3DField450 := TX3DField.Create;
X3DField450.NameField := 'r_subtalar_key';
X3DField450.AccessType := 'inputOutput';
X3DField450.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField450;
X3DField451 := TX3DField.Create;
X3DField451.NameField := 'r_subtalar_keyValue';
X3DField451.AccessType := 'inputOutput';
X3DField451.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField451;
X3DField452 := TX3DField.Create;
X3DField452.NameField := 'r_subtalar_changed';
X3DField452.AccessType := 'outputOnly';
X3DField452.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField452;
X3DField453 := TX3DField.Create;
X3DField453.NameField := 'r_thigh_key';
X3DField453.AccessType := 'inputOutput';
X3DField453.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField453;
X3DField454 := TX3DField.Create;
X3DField454.NameField := 'r_thigh_keyValue';
X3DField454.AccessType := 'inputOutput';
X3DField454.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField454;
X3DField455 := TX3DField.Create;
X3DField455.NameField := 'r_thigh_changed';
X3DField455.AccessType := 'outputOnly';
X3DField455.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField455;
X3DField456 := TX3DField.Create;
X3DField456.NameField := 'r_thumb1_key';
X3DField456.AccessType := 'inputOutput';
X3DField456.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField456;
X3DField457 := TX3DField.Create;
X3DField457.NameField := 'r_thumb1_keyValue';
X3DField457.AccessType := 'inputOutput';
X3DField457.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField457;
X3DField458 := TX3DField.Create;
X3DField458.NameField := 'r_thumb1_changed';
X3DField458.AccessType := 'outputOnly';
X3DField458.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField458;
X3DField459 := TX3DField.Create;
X3DField459.NameField := 'r_thumb2_key';
X3DField459.AccessType := 'inputOutput';
X3DField459.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField459;
X3DField460 := TX3DField.Create;
X3DField460.NameField := 'r_thumb2_keyValue';
X3DField460.AccessType := 'inputOutput';
X3DField460.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField460;
X3DField461 := TX3DField.Create;
X3DField461.NameField := 'r_thumb2_changed';
X3DField461.AccessType := 'outputOnly';
X3DField461.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField461;
X3DField462 := TX3DField.Create;
X3DField462.NameField := 'r_thumb3_key';
X3DField462.AccessType := 'inputOutput';
X3DField462.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField462;
X3DField463 := TX3DField.Create;
X3DField463.NameField := 'r_thumb3_keyValue';
X3DField463.AccessType := 'inputOutput';
X3DField463.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField463;
X3DField464 := TX3DField.Create;
X3DField464.NameField := 'r_thumb3_changed';
X3DField464.AccessType := 'outputOnly';
X3DField464.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField464;
X3DField465 := TX3DField.Create;
X3DField465.NameField := 'r_thumb_distal_key';
X3DField465.AccessType := 'inputOutput';
X3DField465.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField465;
X3DField466 := TX3DField.Create;
X3DField466.NameField := 'r_thumb_distal_keyValue';
X3DField466.AccessType := 'inputOutput';
X3DField466.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField466;
X3DField467 := TX3DField.Create;
X3DField467.NameField := 'r_thumb_distal_changed';
X3DField467.AccessType := 'outputOnly';
X3DField467.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField467;
X3DField468 := TX3DField.Create;
X3DField468.NameField := 'r_thumb_metacarpal_key';
X3DField468.AccessType := 'inputOutput';
X3DField468.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField468;
X3DField469 := TX3DField.Create;
X3DField469.NameField := 'r_thumb_metacarpal_keyValue';
X3DField469.AccessType := 'inputOutput';
X3DField469.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField469;
X3DField470 := TX3DField.Create;
X3DField470.NameField := 'r_thumb_metacarpal_changed';
X3DField470.AccessType := 'outputOnly';
X3DField470.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField470;
X3DField471 := TX3DField.Create;
X3DField471.NameField := 'r_thumb_proximal_key';
X3DField471.AccessType := 'inputOutput';
X3DField471.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField471;
X3DField472 := TX3DField.Create;
X3DField472.NameField := 'r_thumb_proximal_keyValue';
X3DField472.AccessType := 'inputOutput';
X3DField472.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField472;
X3DField473 := TX3DField.Create;
X3DField473.NameField := 'r_thumb_proximal_changed';
X3DField473.AccessType := 'outputOnly';
X3DField473.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField473;
X3DField474 := TX3DField.Create;
X3DField474.NameField := 'r_upperarm_key';
X3DField474.AccessType := 'inputOutput';
X3DField474.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField474;
X3DField475 := TX3DField.Create;
X3DField475.NameField := 'r_upperarm_keyValue';
X3DField475.AccessType := 'inputOutput';
X3DField475.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField475;
X3DField476 := TX3DField.Create;
X3DField476.NameField := 'r_upperarm_changed';
X3DField476.AccessType := 'outputOnly';
X3DField476.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField476;
X3DField477 := TX3DField.Create;
X3DField477.NameField := 'r_wrist_key';
X3DField477.AccessType := 'inputOutput';
X3DField477.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField477;
X3DField478 := TX3DField.Create;
X3DField478.NameField := 'r_wrist_keyValue';
X3DField478.AccessType := 'inputOutput';
X3DField478.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField478;
X3DField479 := TX3DField.Create;
X3DField479.NameField := 'r_wrist_changed';
X3DField479.AccessType := 'outputOnly';
X3DField479.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField479;
X3DField480 := TX3DField.Create;
X3DField480.NameField := 'sacroiliac_key';
X3DField480.AccessType := 'inputOutput';
X3DField480.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField480;
X3DField481 := TX3DField.Create;
X3DField481.NameField := 'sacroiliac_keyValue';
X3DField481.AccessType := 'inputOutput';
X3DField481.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField481;
X3DField482 := TX3DField.Create;
X3DField482.NameField := 'sacroiliac_changed';
X3DField482.AccessType := 'outputOnly';
X3DField482.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField482;
X3DField483 := TX3DField.Create;
X3DField483.NameField := 'sacrum_key';
X3DField483.AccessType := 'inputOutput';
X3DField483.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField483;
X3DField484 := TX3DField.Create;
X3DField484.NameField := 'sacrum_keyValue';
X3DField484.AccessType := 'inputOutput';
X3DField484.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField484;
X3DField485 := TX3DField.Create;
X3DField485.NameField := 'sacrum_changed';
X3DField485.AccessType := 'outputOnly';
X3DField485.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField485;
X3DField486 := TX3DField.Create;
X3DField486.NameField := 'skull_key';
X3DField486.AccessType := 'inputOutput';
X3DField486.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField486;
X3DField487 := TX3DField.Create;
X3DField487.NameField := 'skull_keyValue';
X3DField487.AccessType := 'inputOutput';
X3DField487.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField487;
X3DField488 := TX3DField.Create;
X3DField488.NameField := 'skull_changed';
X3DField488.AccessType := 'outputOnly';
X3DField488.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField488;
X3DField489 := TX3DField.Create;
X3DField489.NameField := 'skullbase_key';
X3DField489.AccessType := 'inputOutput';
X3DField489.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField489;
X3DField490 := TX3DField.Create;
X3DField490.NameField := 'skullbase_keyValue';
X3DField490.AccessType := 'inputOutput';
X3DField490.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField490;
X3DField491 := TX3DField.Create;
X3DField491.NameField := 'skullbase_changed';
X3DField491.AccessType := 'outputOnly';
X3DField491.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField491;
X3DField492 := TX3DField.Create;
X3DField492.NameField := 't10_key';
X3DField492.AccessType := 'inputOutput';
X3DField492.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField492;
X3DField493 := TX3DField.Create;
X3DField493.NameField := 't10_keyValue';
X3DField493.AccessType := 'inputOutput';
X3DField493.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField493;
X3DField494 := TX3DField.Create;
X3DField494.NameField := 't10_changed';
X3DField494.AccessType := 'outputOnly';
X3DField494.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField494;
X3DField495 := TX3DField.Create;
X3DField495.NameField := 't11_key';
X3DField495.AccessType := 'inputOutput';
X3DField495.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField495;
X3DField496 := TX3DField.Create;
X3DField496.NameField := 't11_keyValue';
X3DField496.AccessType := 'inputOutput';
X3DField496.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField496;
X3DField497 := TX3DField.Create;
X3DField497.NameField := 't11_changed';
X3DField497.AccessType := 'outputOnly';
X3DField497.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField497;
X3DField498 := TX3DField.Create;
X3DField498.NameField := 't12_key';
X3DField498.AccessType := 'inputOutput';
X3DField498.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField498;
X3DField499 := TX3DField.Create;
X3DField499.NameField := 't12_keyValue';
X3DField499.AccessType := 'inputOutput';
X3DField499.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField499;
X3DField500 := TX3DField.Create;
X3DField500.NameField := 't12_changed';
X3DField500.AccessType := 'outputOnly';
X3DField500.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField500;
X3DField501 := TX3DField.Create;
X3DField501.NameField := 't1_key';
X3DField501.AccessType := 'inputOutput';
X3DField501.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField501;
X3DField502 := TX3DField.Create;
X3DField502.NameField := 't1_keyValue';
X3DField502.AccessType := 'inputOutput';
X3DField502.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField502;
X3DField503 := TX3DField.Create;
X3DField503.NameField := 't1_changed';
X3DField503.AccessType := 'outputOnly';
X3DField503.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField503;
X3DField504 := TX3DField.Create;
X3DField504.NameField := 't2_key';
X3DField504.AccessType := 'inputOutput';
X3DField504.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField504;
X3DField505 := TX3DField.Create;
X3DField505.NameField := 't2_keyValue';
X3DField505.AccessType := 'inputOutput';
X3DField505.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField505;
X3DField506 := TX3DField.Create;
X3DField506.NameField := 't2_changed';
X3DField506.AccessType := 'outputOnly';
X3DField506.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField506;
X3DField507 := TX3DField.Create;
X3DField507.NameField := 't3_key';
X3DField507.AccessType := 'inputOutput';
X3DField507.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField507;
X3DField508 := TX3DField.Create;
X3DField508.NameField := 't3_keyValue';
X3DField508.AccessType := 'inputOutput';
X3DField508.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField508;
X3DField509 := TX3DField.Create;
X3DField509.NameField := 't3_changed';
X3DField509.AccessType := 'outputOnly';
X3DField509.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField509;
X3DField510 := TX3DField.Create;
X3DField510.NameField := 't4_key';
X3DField510.AccessType := 'inputOutput';
X3DField510.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField510;
X3DField511 := TX3DField.Create;
X3DField511.NameField := 't4_keyValue';
X3DField511.AccessType := 'inputOutput';
X3DField511.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField511;
X3DField512 := TX3DField.Create;
X3DField512.NameField := 't4_changed';
X3DField512.AccessType := 'outputOnly';
X3DField512.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField512;
X3DField513 := TX3DField.Create;
X3DField513.NameField := 't5_key';
X3DField513.AccessType := 'inputOutput';
X3DField513.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField513;
X3DField514 := TX3DField.Create;
X3DField514.NameField := 't5_keyValue';
X3DField514.AccessType := 'inputOutput';
X3DField514.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField514;
X3DField515 := TX3DField.Create;
X3DField515.NameField := 't5_changed';
X3DField515.AccessType := 'outputOnly';
X3DField515.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField515;
X3DField516 := TX3DField.Create;
X3DField516.NameField := 't6_key';
X3DField516.AccessType := 'inputOutput';
X3DField516.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField516;
X3DField517 := TX3DField.Create;
X3DField517.NameField := 't6_keyValue';
X3DField517.AccessType := 'inputOutput';
X3DField517.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField517;
X3DField518 := TX3DField.Create;
X3DField518.NameField := 't6_changed';
X3DField518.AccessType := 'outputOnly';
X3DField518.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField518;
X3DField519 := TX3DField.Create;
X3DField519.NameField := 't7_key';
X3DField519.AccessType := 'inputOutput';
X3DField519.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField519;
X3DField520 := TX3DField.Create;
X3DField520.NameField := 't7_keyValue';
X3DField520.AccessType := 'inputOutput';
X3DField520.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField520;
X3DField521 := TX3DField.Create;
X3DField521.NameField := 't7_changed';
X3DField521.AccessType := 'outputOnly';
X3DField521.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField521;
X3DField522 := TX3DField.Create;
X3DField522.NameField := 't8_key';
X3DField522.AccessType := 'inputOutput';
X3DField522.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField522;
X3DField523 := TX3DField.Create;
X3DField523.NameField := 't8_keyValue';
X3DField523.AccessType := 'inputOutput';
X3DField523.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField523;
X3DField524 := TX3DField.Create;
X3DField524.NameField := 't8_changed';
X3DField524.AccessType := 'outputOnly';
X3DField524.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField524;
X3DField525 := TX3DField.Create;
X3DField525.NameField := 't9_key';
X3DField525.AccessType := 'inputOutput';
X3DField525.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField525;
X3DField526 := TX3DField.Create;
X3DField526.NameField := 't9_keyValue';
X3DField526.AccessType := 'inputOutput';
X3DField526.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField526;
X3DField527 := TX3DField.Create;
X3DField527.NameField := 't9_changed';
X3DField527.AccessType := 'outputOnly';
X3DField527.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField527;
X3DField528 := TX3DField.Create;
X3DField528.NameField := 'temporomandibular_key';
X3DField528.AccessType := 'inputOutput';
X3DField528.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField528;
X3DField529 := TX3DField.Create;
X3DField529.NameField := 'temporomandibular_keyValue';
X3DField529.AccessType := 'inputOutput';
X3DField529.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField529;
X3DField530 := TX3DField.Create;
X3DField530.NameField := 'temporomandibular_changed';
X3DField530.AccessType := 'outputOnly';
X3DField530.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField530;
X3DField531 := TX3DField.Create;
X3DField531.NameField := 'vc1_key';
X3DField531.AccessType := 'inputOutput';
X3DField531.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField531;
X3DField532 := TX3DField.Create;
X3DField532.NameField := 'vc1_keyValue';
X3DField532.AccessType := 'inputOutput';
X3DField532.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField532;
X3DField533 := TX3DField.Create;
X3DField533.NameField := 'vc1_changed';
X3DField533.AccessType := 'outputOnly';
X3DField533.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField533;
X3DField534 := TX3DField.Create;
X3DField534.NameField := 'vc2_key';
X3DField534.AccessType := 'inputOutput';
X3DField534.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField534;
X3DField535 := TX3DField.Create;
X3DField535.NameField := 'vc2_keyValue';
X3DField535.AccessType := 'inputOutput';
X3DField535.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField535;
X3DField536 := TX3DField.Create;
X3DField536.NameField := 'vc2_changed';
X3DField536.AccessType := 'outputOnly';
X3DField536.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField536;
X3DField537 := TX3DField.Create;
X3DField537.NameField := 'vc3_key';
X3DField537.AccessType := 'inputOutput';
X3DField537.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField537;
X3DField538 := TX3DField.Create;
X3DField538.NameField := 'vc3_keyValue';
X3DField538.AccessType := 'inputOutput';
X3DField538.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField538;
X3DField539 := TX3DField.Create;
X3DField539.NameField := 'vc3_changed';
X3DField539.AccessType := 'outputOnly';
X3DField539.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField539;
X3DField540 := TX3DField.Create;
X3DField540.NameField := 'vc4_key';
X3DField540.AccessType := 'inputOutput';
X3DField540.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField540;
X3DField541 := TX3DField.Create;
X3DField541.NameField := 'vc4_keyValue';
X3DField541.AccessType := 'inputOutput';
X3DField541.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField541;
X3DField542 := TX3DField.Create;
X3DField542.NameField := 'vc4_changed';
X3DField542.AccessType := 'outputOnly';
X3DField542.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField542;
X3DField543 := TX3DField.Create;
X3DField543.NameField := 'vc5_key';
X3DField543.AccessType := 'inputOutput';
X3DField543.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField543;
X3DField544 := TX3DField.Create;
X3DField544.NameField := 'vc5_keyValue';
X3DField544.AccessType := 'inputOutput';
X3DField544.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField544;
X3DField545 := TX3DField.Create;
X3DField545.NameField := 'vc5_changed';
X3DField545.AccessType := 'outputOnly';
X3DField545.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField545;
X3DField546 := TX3DField.Create;
X3DField546.NameField := 'vc6_key';
X3DField546.AccessType := 'inputOutput';
X3DField546.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField546;
X3DField547 := TX3DField.Create;
X3DField547.NameField := 'vc6_keyValue';
X3DField547.AccessType := 'inputOutput';
X3DField547.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField547;
X3DField548 := TX3DField.Create;
X3DField548.NameField := 'vc6_changed';
X3DField548.AccessType := 'outputOnly';
X3DField548.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField548;
X3DField549 := TX3DField.Create;
X3DField549.NameField := 'vc7_key';
X3DField549.AccessType := 'inputOutput';
X3DField549.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField549;
X3DField550 := TX3DField.Create;
X3DField550.NameField := 'vc7_keyValue';
X3DField550.AccessType := 'inputOutput';
X3DField550.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField550;
X3DField551 := TX3DField.Create;
X3DField551.NameField := 'vc7_changed';
X3DField551.AccessType := 'outputOnly';
X3DField551.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField551;
X3DField552 := TX3DField.Create;
X3DField552.NameField := 'vl1_key';
X3DField552.AccessType := 'inputOutput';
X3DField552.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField552;
X3DField553 := TX3DField.Create;
X3DField553.NameField := 'vl1_keyValue';
X3DField553.AccessType := 'inputOutput';
X3DField553.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField553;
X3DField554 := TX3DField.Create;
X3DField554.NameField := 'vl1_changed';
X3DField554.AccessType := 'outputOnly';
X3DField554.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField554;
X3DField555 := TX3DField.Create;
X3DField555.NameField := 'vl2_key';
X3DField555.AccessType := 'inputOutput';
X3DField555.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField555;
X3DField556 := TX3DField.Create;
X3DField556.NameField := 'vl2_keyValue';
X3DField556.AccessType := 'inputOutput';
X3DField556.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField556;
X3DField557 := TX3DField.Create;
X3DField557.NameField := 'vl2_changed';
X3DField557.AccessType := 'outputOnly';
X3DField557.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField557;
X3DField558 := TX3DField.Create;
X3DField558.NameField := 'vl3_key';
X3DField558.AccessType := 'inputOutput';
X3DField558.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField558;
X3DField559 := TX3DField.Create;
X3DField559.NameField := 'vl3_keyValue';
X3DField559.AccessType := 'inputOutput';
X3DField559.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField559;
X3DField560 := TX3DField.Create;
X3DField560.NameField := 'vl3_changed';
X3DField560.AccessType := 'outputOnly';
X3DField560.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField560;
X3DField561 := TX3DField.Create;
X3DField561.NameField := 'vl4_key';
X3DField561.AccessType := 'inputOutput';
X3DField561.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField561;
X3DField562 := TX3DField.Create;
X3DField562.NameField := 'vl4_keyValue';
X3DField562.AccessType := 'inputOutput';
X3DField562.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField562;
X3DField563 := TX3DField.Create;
X3DField563.NameField := 'vl4_changed';
X3DField563.AccessType := 'outputOnly';
X3DField563.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField563;
X3DField564 := TX3DField.Create;
X3DField564.NameField := 'vl5_key';
X3DField564.AccessType := 'inputOutput';
X3DField564.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField564;
X3DField565 := TX3DField.Create;
X3DField565.NameField := 'vl5_keyValue';
X3DField565.AccessType := 'inputOutput';
X3DField565.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField565;
X3DField566 := TX3DField.Create;
X3DField566.NameField := 'vl5_changed';
X3DField566.AccessType := 'outputOnly';
X3DField566.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField566;
X3DField567 := TX3DField.Create;
X3DField567.NameField := 'vt10_key';
X3DField567.AccessType := 'inputOutput';
X3DField567.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField567;
X3DField568 := TX3DField.Create;
X3DField568.NameField := 'vt10_keyValue';
X3DField568.AccessType := 'inputOutput';
X3DField568.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField568;
X3DField569 := TX3DField.Create;
X3DField569.NameField := 'vt10_changed';
X3DField569.AccessType := 'outputOnly';
X3DField569.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField569;
X3DField570 := TX3DField.Create;
X3DField570.NameField := 'vt11_key';
X3DField570.AccessType := 'inputOutput';
X3DField570.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField570;
X3DField571 := TX3DField.Create;
X3DField571.NameField := 'vt11_keyValue';
X3DField571.AccessType := 'inputOutput';
X3DField571.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField571;
X3DField572 := TX3DField.Create;
X3DField572.NameField := 'vt11_changed';
X3DField572.AccessType := 'outputOnly';
X3DField572.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField572;
X3DField573 := TX3DField.Create;
X3DField573.NameField := 'vt12_key';
X3DField573.AccessType := 'inputOutput';
X3DField573.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField573;
X3DField574 := TX3DField.Create;
X3DField574.NameField := 'vt12_keyValue';
X3DField574.AccessType := 'inputOutput';
X3DField574.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField574;
X3DField575 := TX3DField.Create;
X3DField575.NameField := 'vt12_changed';
X3DField575.AccessType := 'outputOnly';
X3DField575.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField575;
X3DField576 := TX3DField.Create;
X3DField576.NameField := 'vt1_key';
X3DField576.AccessType := 'inputOutput';
X3DField576.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField576;
X3DField577 := TX3DField.Create;
X3DField577.NameField := 'vt1_keyValue';
X3DField577.AccessType := 'inputOutput';
X3DField577.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField577;
X3DField578 := TX3DField.Create;
X3DField578.NameField := 'vt1_changed';
X3DField578.AccessType := 'outputOnly';
X3DField578.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField578;
X3DField579 := TX3DField.Create;
X3DField579.NameField := 'vt2_key';
X3DField579.AccessType := 'inputOutput';
X3DField579.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField579;
X3DField580 := TX3DField.Create;
X3DField580.NameField := 'vt2_keyValue';
X3DField580.AccessType := 'inputOutput';
X3DField580.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField580;
X3DField581 := TX3DField.Create;
X3DField581.NameField := 'vt2_changed';
X3DField581.AccessType := 'outputOnly';
X3DField581.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField581;
X3DField582 := TX3DField.Create;
X3DField582.NameField := 'vt3_key';
X3DField582.AccessType := 'inputOutput';
X3DField582.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField582;
X3DField583 := TX3DField.Create;
X3DField583.NameField := 'vt3_keyValue';
X3DField583.AccessType := 'inputOutput';
X3DField583.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField583;
X3DField584 := TX3DField.Create;
X3DField584.NameField := 'vt3_changed';
X3DField584.AccessType := 'outputOnly';
X3DField584.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField584;
X3DField585 := TX3DField.Create;
X3DField585.NameField := 'vt4_key';
X3DField585.AccessType := 'inputOutput';
X3DField585.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField585;
X3DField586 := TX3DField.Create;
X3DField586.NameField := 'vt4_keyValue';
X3DField586.AccessType := 'inputOutput';
X3DField586.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField586;
X3DField587 := TX3DField.Create;
X3DField587.NameField := 'vt4_changed';
X3DField587.AccessType := 'outputOnly';
X3DField587.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField587;
X3DField588 := TX3DField.Create;
X3DField588.NameField := 'vt5_key';
X3DField588.AccessType := 'inputOutput';
X3DField588.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField588;
X3DField589 := TX3DField.Create;
X3DField589.NameField := 'vt5_keyValue';
X3DField589.AccessType := 'inputOutput';
X3DField589.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField589;
X3DField590 := TX3DField.Create;
X3DField590.NameField := 'vt5_changed';
X3DField590.AccessType := 'outputOnly';
X3DField590.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField590;
X3DField591 := TX3DField.Create;
X3DField591.NameField := 'vt6_key';
X3DField591.AccessType := 'inputOutput';
X3DField591.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField591;
X3DField592 := TX3DField.Create;
X3DField592.NameField := 'vt6_keyValue';
X3DField592.AccessType := 'inputOutput';
X3DField592.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField592;
X3DField593 := TX3DField.Create;
X3DField593.NameField := 'vt6_changed';
X3DField593.AccessType := 'outputOnly';
X3DField593.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField593;
X3DField594 := TX3DField.Create;
X3DField594.NameField := 'vt7_key';
X3DField594.AccessType := 'inputOutput';
X3DField594.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField594;
X3DField595 := TX3DField.Create;
X3DField595.NameField := 'vt7_keyValue';
X3DField595.AccessType := 'inputOutput';
X3DField595.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField595;
X3DField596 := TX3DField.Create;
X3DField596.NameField := 'vt7_changed';
X3DField596.AccessType := 'outputOnly';
X3DField596.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField596;
X3DField597 := TX3DField.Create;
X3DField597.NameField := 'vt8_key';
X3DField597.AccessType := 'inputOutput';
X3DField597.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField597;
X3DField598 := TX3DField.Create;
X3DField598.NameField := 'vt8_keyValue';
X3DField598.AccessType := 'inputOutput';
X3DField598.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField598;
X3DField599 := TX3DField.Create;
X3DField599.NameField := 'vt8_changed';
X3DField599.AccessType := 'outputOnly';
X3DField599.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField599;
X3DField600 := TX3DField.Create;
X3DField600.NameField := 'vt9_key';
X3DField600.AccessType := 'inputOutput';
X3DField600.Type := 'MFFloat';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField600;
X3DField601 := TX3DField.Create;
X3DField601.NameField := 'vt9_keyValue';
X3DField601.AccessType := 'inputOutput';
X3DField601.Type := 'MFRotation';
{ no default value }
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField601;
X3DField602 := TX3DField.Create;
X3DField602.NameField := 'vt9_changed';
X3DField602.AccessType := 'outputOnly';
X3DField602.Type := 'SFRotation';
{ .AddX3DField }
X3DInterfaceDeclaration21.X3DField := X3DField602;
{ .SetX3DInterfaceDeclaration }
X3DPrototype20.X3DInterfaceDeclaration := X3DInterfaceDeclaration21;
X3DPrototype603 := TX3DPrototype.Create;
{ design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators }
TimeSensor604 := TTimeSensorNode.Create;
IS605 := TIS.Create;
connect606 := Tconnect.Create;
connect606.NodeField := 'enabled';
connect606.ProtoField := 'enabled';
{ .AddConnect }
IS605.Connect := connect606;
connect607 := Tconnect.Create;
connect607.NodeField := 'cycleInterval';
connect607.ProtoField := 'cycleInterval';
{ .AddConnect }
IS605.Connect := connect607;
connect608 := Tconnect.Create;
connect608.NodeField := 'loop';
connect608.ProtoField := 'loop';
{ .AddConnect }
IS605.Connect := connect608;
connect609 := Tconnect.Create;
connect609.NodeField := 'startTime';
connect609.ProtoField := 'startTime';
{ .AddConnect }
IS605.Connect := connect609;
connect610 := Tconnect.Create;
connect610.NodeField := 'stopTime';
connect610.ProtoField := 'stopTime';
{ .AddConnect }
IS605.Connect := connect610;
connect611 := Tconnect.Create;
connect611.NodeField := 'pauseTime';
connect611.ProtoField := 'pauseTime';
{ .AddConnect }
IS605.Connect := connect611;
connect612 := Tconnect.Create;
connect612.NodeField := 'resumeTime';
connect612.ProtoField := 'resumeTime';
{ .AddConnect }
IS605.Connect := connect612;
connect613 := Tconnect.Create;
connect613.NodeField := 'cycleTime';
connect613.ProtoField := 'cycleTime';
{ .AddConnect }
IS605.Connect := connect613;
connect614 := Tconnect.Create;
connect614.NodeField := 'isActive';
connect614.ProtoField := 'isActive';
{ .AddConnect }
IS605.Connect := connect614;
connect615 := Tconnect.Create;
connect615.NodeField := 'isPaused';
connect615.ProtoField := 'isPaused';
{ .AddConnect }
IS605.Connect := connect615;
connect616 := Tconnect.Create;
connect616.NodeField := 'elapsedTime';
connect616.ProtoField := 'elapsedTime';
{ .AddConnect }
IS605.Connect := connect616;
connect617 := Tconnect.Create;
connect617.NodeField := 'time';
connect617.ProtoField := 'time';
{ .AddConnect }
IS605.Connect := connect617;
connect618 := Tconnect.Create;
connect618.NodeField := 'fraction_changed';
connect618.ProtoField := 'fraction_changed';
{ .AddConnect }
IS605.Connect := connect618;
{ .SetIS }
TimeSensor604.IS := IS605;
{ .AddTimeSensor }
X3DPrototype603.TimeSensor := TimeSensor604;
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Switch619 := TSwitchNode.Create;
Switch619.WhichChoice := -1;
IS620 := TIS.Create;
connect621 := Tconnect.Create;
connect621.NodeField := 'whichChoice';
connect621.ProtoField := 'supportedLOA';
{ .AddConnect }
IS620.Connect := connect621;
{ .SetIS }
Switch619.IS := IS620;
{ .AddSwitch }
X3DPrototype603.Switch := Switch619;
PositionInterpolator622 := TPositionInterpolatorNode.Create;
IS623 := TIS.Create;
connect624 := Tconnect.Create;
connect624.NodeField := 'key';
connect624.ProtoField := 'HumanoidRoot_translation_key';
{ .AddConnect }
IS623.Connect := connect624;
connect625 := Tconnect.Create;
connect625.NodeField := 'keyValue';
connect625.ProtoField := 'HumanoidRoot_translation_keyValue';
{ .AddConnect }
IS623.Connect := connect625;
connect626 := Tconnect.Create;
connect626.NodeField := 'value_changed';
connect626.ProtoField := 'HumanoidRoot_translation_changed';
{ .AddConnect }
IS623.Connect := connect626;
{ .SetIS }
PositionInterpolator622.IS := IS623;
{ .AddPositionInterpolator }
X3DPrototype603.PositionInterpolator := PositionInterpolator622;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, PositionInterpolator622.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator628 := TOrientationInterpolatorNode.Create;
IS629 := TIS.Create;
connect630 := Tconnect.Create;
connect630.NodeField := 'key';
connect630.ProtoField := 'HumanoidRoot_rotation_key';
{ .AddConnect }
IS629.Connect := connect630;
connect631 := Tconnect.Create;
connect631.NodeField := 'keyValue';
connect631.ProtoField := 'HumanoidRoot_rotation_keyValue';
{ .AddConnect }
IS629.Connect := connect631;
connect632 := Tconnect.Create;
connect632.NodeField := 'value_changed';
connect632.ProtoField := 'HumanoidRoot_rotation_changed';
{ .AddConnect }
IS629.Connect := connect632;
{ .SetIS }
OrientationInterpolator628.IS := IS629;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator628;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator628.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator634 := TOrientationInterpolatorNode.Create;
IS635 := TIS.Create;
connect636 := Tconnect.Create;
connect636.NodeField := 'key';
connect636.ProtoField := 'c1_key';
{ .AddConnect }
IS635.Connect := connect636;
connect637 := Tconnect.Create;
connect637.NodeField := 'keyValue';
connect637.ProtoField := 'c1_keyValue';
{ .AddConnect }
IS635.Connect := connect637;
connect638 := Tconnect.Create;
connect638.NodeField := 'value_changed';
connect638.ProtoField := 'c1_changed';
{ .AddConnect }
IS635.Connect := connect638;
{ .SetIS }
OrientationInterpolator634.IS := IS635;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator634;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator634.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator640 := TOrientationInterpolatorNode.Create;
IS641 := TIS.Create;
connect642 := Tconnect.Create;
connect642.NodeField := 'key';
connect642.ProtoField := 'c2_key';
{ .AddConnect }
IS641.Connect := connect642;
connect643 := Tconnect.Create;
connect643.NodeField := 'keyValue';
connect643.ProtoField := 'c2_keyValue';
{ .AddConnect }
IS641.Connect := connect643;
connect644 := Tconnect.Create;
connect644.NodeField := 'value_changed';
connect644.ProtoField := 'c2_changed';
{ .AddConnect }
IS641.Connect := connect644;
{ .SetIS }
OrientationInterpolator640.IS := IS641;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator640;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator640.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator646 := TOrientationInterpolatorNode.Create;
IS647 := TIS.Create;
connect648 := Tconnect.Create;
connect648.NodeField := 'key';
connect648.ProtoField := 'c3_key';
{ .AddConnect }
IS647.Connect := connect648;
connect649 := Tconnect.Create;
connect649.NodeField := 'keyValue';
connect649.ProtoField := 'c3_keyValue';
{ .AddConnect }
IS647.Connect := connect649;
connect650 := Tconnect.Create;
connect650.NodeField := 'value_changed';
connect650.ProtoField := 'c3_changed';
{ .AddConnect }
IS647.Connect := connect650;
{ .SetIS }
OrientationInterpolator646.IS := IS647;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator646;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator646.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator652 := TOrientationInterpolatorNode.Create;
IS653 := TIS.Create;
connect654 := Tconnect.Create;
connect654.NodeField := 'key';
connect654.ProtoField := 'c4_key';
{ .AddConnect }
IS653.Connect := connect654;
connect655 := Tconnect.Create;
connect655.NodeField := 'keyValue';
connect655.ProtoField := 'c4_keyValue';
{ .AddConnect }
IS653.Connect := connect655;
connect656 := Tconnect.Create;
connect656.NodeField := 'value_changed';
connect656.ProtoField := 'c4_changed';
{ .AddConnect }
IS653.Connect := connect656;
{ .SetIS }
OrientationInterpolator652.IS := IS653;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator652;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator652.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator658 := TOrientationInterpolatorNode.Create;
IS659 := TIS.Create;
connect660 := Tconnect.Create;
connect660.NodeField := 'key';
connect660.ProtoField := 'c5_key';
{ .AddConnect }
IS659.Connect := connect660;
connect661 := Tconnect.Create;
connect661.NodeField := 'keyValue';
connect661.ProtoField := 'c5_keyValue';
{ .AddConnect }
IS659.Connect := connect661;
connect662 := Tconnect.Create;
connect662.NodeField := 'value_changed';
connect662.ProtoField := 'c5_changed';
{ .AddConnect }
IS659.Connect := connect662;
{ .SetIS }
OrientationInterpolator658.IS := IS659;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator658;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator658.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator664 := TOrientationInterpolatorNode.Create;
IS665 := TIS.Create;
connect666 := Tconnect.Create;
connect666.NodeField := 'key';
connect666.ProtoField := 'c6_key';
{ .AddConnect }
IS665.Connect := connect666;
connect667 := Tconnect.Create;
connect667.NodeField := 'keyValue';
connect667.ProtoField := 'c6_keyValue';
{ .AddConnect }
IS665.Connect := connect667;
connect668 := Tconnect.Create;
connect668.NodeField := 'value_changed';
connect668.ProtoField := 'c6_changed';
{ .AddConnect }
IS665.Connect := connect668;
{ .SetIS }
OrientationInterpolator664.IS := IS665;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator664;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator664.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator670 := TOrientationInterpolatorNode.Create;
IS671 := TIS.Create;
connect672 := Tconnect.Create;
connect672.NodeField := 'key';
connect672.ProtoField := 'c7_key';
{ .AddConnect }
IS671.Connect := connect672;
connect673 := Tconnect.Create;
connect673.NodeField := 'keyValue';
connect673.ProtoField := 'c7_keyValue';
{ .AddConnect }
IS671.Connect := connect673;
connect674 := Tconnect.Create;
connect674.NodeField := 'value_changed';
connect674.ProtoField := 'c7_changed';
{ .AddConnect }
IS671.Connect := connect674;
{ .SetIS }
OrientationInterpolator670.IS := IS671;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator670;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator670.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator676 := TOrientationInterpolatorNode.Create;
IS677 := TIS.Create;
connect678 := Tconnect.Create;
connect678.NodeField := 'key';
connect678.ProtoField := 'jaw_key';
{ .AddConnect }
IS677.Connect := connect678;
connect679 := Tconnect.Create;
connect679.NodeField := 'keyValue';
connect679.ProtoField := 'jaw_keyValue';
{ .AddConnect }
IS677.Connect := connect679;
connect680 := Tconnect.Create;
connect680.NodeField := 'value_changed';
connect680.ProtoField := 'jaw_changed';
{ .AddConnect }
IS677.Connect := connect680;
{ .SetIS }
OrientationInterpolator676.IS := IS677;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator676;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator676.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator682 := TOrientationInterpolatorNode.Create;
IS683 := TIS.Create;
connect684 := Tconnect.Create;
connect684.NodeField := 'key';
connect684.ProtoField := 'l1_key';
{ .AddConnect }
IS683.Connect := connect684;
connect685 := Tconnect.Create;
connect685.NodeField := 'keyValue';
connect685.ProtoField := 'l1_keyValue';
{ .AddConnect }
IS683.Connect := connect685;
connect686 := Tconnect.Create;
connect686.NodeField := 'value_changed';
connect686.ProtoField := 'l1_changed';
{ .AddConnect }
IS683.Connect := connect686;
{ .SetIS }
OrientationInterpolator682.IS := IS683;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator682;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator682.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator688 := TOrientationInterpolatorNode.Create;
IS689 := TIS.Create;
connect690 := Tconnect.Create;
connect690.NodeField := 'key';
connect690.ProtoField := 'l2_key';
{ .AddConnect }
IS689.Connect := connect690;
connect691 := Tconnect.Create;
connect691.NodeField := 'keyValue';
connect691.ProtoField := 'l2_keyValue';
{ .AddConnect }
IS689.Connect := connect691;
connect692 := Tconnect.Create;
connect692.NodeField := 'value_changed';
connect692.ProtoField := 'l2_changed';
{ .AddConnect }
IS689.Connect := connect692;
{ .SetIS }
OrientationInterpolator688.IS := IS689;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator688;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator688.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator694 := TOrientationInterpolatorNode.Create;
IS695 := TIS.Create;
connect696 := Tconnect.Create;
connect696.NodeField := 'key';
connect696.ProtoField := 'l3_key';
{ .AddConnect }
IS695.Connect := connect696;
connect697 := Tconnect.Create;
connect697.NodeField := 'keyValue';
connect697.ProtoField := 'l3_keyValue';
{ .AddConnect }
IS695.Connect := connect697;
connect698 := Tconnect.Create;
connect698.NodeField := 'value_changed';
connect698.ProtoField := 'l3_changed';
{ .AddConnect }
IS695.Connect := connect698;
{ .SetIS }
OrientationInterpolator694.IS := IS695;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator694;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator694.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator700 := TOrientationInterpolatorNode.Create;
IS701 := TIS.Create;
connect702 := Tconnect.Create;
connect702.NodeField := 'key';
connect702.ProtoField := 'l4_key';
{ .AddConnect }
IS701.Connect := connect702;
connect703 := Tconnect.Create;
connect703.NodeField := 'keyValue';
connect703.ProtoField := 'l4_keyValue';
{ .AddConnect }
IS701.Connect := connect703;
connect704 := Tconnect.Create;
connect704.NodeField := 'value_changed';
connect704.ProtoField := 'l4_changed';
{ .AddConnect }
IS701.Connect := connect704;
{ .SetIS }
OrientationInterpolator700.IS := IS701;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator700;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator700.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator706 := TOrientationInterpolatorNode.Create;
IS707 := TIS.Create;
connect708 := Tconnect.Create;
connect708.NodeField := 'key';
connect708.ProtoField := 'l5_key';
{ .AddConnect }
IS707.Connect := connect708;
connect709 := Tconnect.Create;
connect709.NodeField := 'keyValue';
connect709.ProtoField := 'l5_keyValue';
{ .AddConnect }
IS707.Connect := connect709;
connect710 := Tconnect.Create;
connect710.NodeField := 'value_changed';
connect710.ProtoField := 'l5_changed';
{ .AddConnect }
IS707.Connect := connect710;
{ .SetIS }
OrientationInterpolator706.IS := IS707;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator706;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator706.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator712 := TOrientationInterpolatorNode.Create;
IS713 := TIS.Create;
connect714 := Tconnect.Create;
connect714.NodeField := 'key';
connect714.ProtoField := 'l_acromioclavicular_key';
{ .AddConnect }
IS713.Connect := connect714;
connect715 := Tconnect.Create;
connect715.NodeField := 'keyValue';
connect715.ProtoField := 'l_acromioclavicular_keyValue';
{ .AddConnect }
IS713.Connect := connect715;
connect716 := Tconnect.Create;
connect716.NodeField := 'value_changed';
connect716.ProtoField := 'l_acromioclavicular_changed';
{ .AddConnect }
IS713.Connect := connect716;
{ .SetIS }
OrientationInterpolator712.IS := IS713;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator712;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator712.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator718 := TOrientationInterpolatorNode.Create;
IS719 := TIS.Create;
connect720 := Tconnect.Create;
connect720.NodeField := 'key';
connect720.ProtoField := 'l_ankle_key';
{ .AddConnect }
IS719.Connect := connect720;
connect721 := Tconnect.Create;
connect721.NodeField := 'keyValue';
connect721.ProtoField := 'l_ankle_keyValue';
{ .AddConnect }
IS719.Connect := connect721;
connect722 := Tconnect.Create;
connect722.NodeField := 'value_changed';
connect722.ProtoField := 'l_ankle_changed';
{ .AddConnect }
IS719.Connect := connect722;
{ .SetIS }
OrientationInterpolator718.IS := IS719;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator718;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator718.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator724 := TOrientationInterpolatorNode.Create;
IS725 := TIS.Create;
connect726 := Tconnect.Create;
connect726.NodeField := 'key';
connect726.ProtoField := 'l_calf_key';
{ .AddConnect }
IS725.Connect := connect726;
connect727 := Tconnect.Create;
connect727.NodeField := 'keyValue';
connect727.ProtoField := 'l_calf_keyValue';
{ .AddConnect }
IS725.Connect := connect727;
connect728 := Tconnect.Create;
connect728.NodeField := 'value_changed';
connect728.ProtoField := 'l_calf_changed';
{ .AddConnect }
IS725.Connect := connect728;
{ .SetIS }
OrientationInterpolator724.IS := IS725;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator724;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator724.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator730 := TOrientationInterpolatorNode.Create;
IS731 := TIS.Create;
connect732 := Tconnect.Create;
connect732.NodeField := 'key';
connect732.ProtoField := 'l_clavicle_key';
{ .AddConnect }
IS731.Connect := connect732;
connect733 := Tconnect.Create;
connect733.NodeField := 'keyValue';
connect733.ProtoField := 'l_clavicle_keyValue';
{ .AddConnect }
IS731.Connect := connect733;
connect734 := Tconnect.Create;
connect734.NodeField := 'value_changed';
connect734.ProtoField := 'l_clavicle_changed';
{ .AddConnect }
IS731.Connect := connect734;
{ .SetIS }
OrientationInterpolator730.IS := IS731;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator730;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator730.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator736 := TOrientationInterpolatorNode.Create;
IS737 := TIS.Create;
connect738 := Tconnect.Create;
connect738.NodeField := 'key';
connect738.ProtoField := 'l_elbow_key';
{ .AddConnect }
IS737.Connect := connect738;
connect739 := Tconnect.Create;
connect739.NodeField := 'keyValue';
connect739.ProtoField := 'l_elbow_keyValue';
{ .AddConnect }
IS737.Connect := connect739;
connect740 := Tconnect.Create;
connect740.NodeField := 'value_changed';
connect740.ProtoField := 'l_elbow_changed';
{ .AddConnect }
IS737.Connect := connect740;
{ .SetIS }
OrientationInterpolator736.IS := IS737;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator736;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator736.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator742 := TOrientationInterpolatorNode.Create;
IS743 := TIS.Create;
connect744 := Tconnect.Create;
connect744.NodeField := 'key';
connect744.ProtoField := 'l_eyeball_key';
{ .AddConnect }
IS743.Connect := connect744;
connect745 := Tconnect.Create;
connect745.NodeField := 'keyValue';
connect745.ProtoField := 'l_eyeball_keyValue';
{ .AddConnect }
IS743.Connect := connect745;
connect746 := Tconnect.Create;
connect746.NodeField := 'value_changed';
connect746.ProtoField := 'l_eyeball_changed';
{ .AddConnect }
IS743.Connect := connect746;
{ .SetIS }
OrientationInterpolator742.IS := IS743;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator742;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator742.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator748 := TOrientationInterpolatorNode.Create;
IS749 := TIS.Create;
connect750 := Tconnect.Create;
connect750.NodeField := 'key';
connect750.ProtoField := 'l_eyeball_joint_key';
{ .AddConnect }
IS749.Connect := connect750;
connect751 := Tconnect.Create;
connect751.NodeField := 'keyValue';
connect751.ProtoField := 'l_eyeball_joint_keyValue';
{ .AddConnect }
IS749.Connect := connect751;
connect752 := Tconnect.Create;
connect752.NodeField := 'value_changed';
connect752.ProtoField := 'l_eyeball_joint_changed';
{ .AddConnect }
IS749.Connect := connect752;
{ .SetIS }
OrientationInterpolator748.IS := IS749;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator748;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator748.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator754 := TOrientationInterpolatorNode.Create;
IS755 := TIS.Create;
connect756 := Tconnect.Create;
connect756.NodeField := 'key';
connect756.ProtoField := 'l_eyebrow_key';
{ .AddConnect }
IS755.Connect := connect756;
connect757 := Tconnect.Create;
connect757.NodeField := 'keyValue';
connect757.ProtoField := 'l_eyebrow_keyValue';
{ .AddConnect }
IS755.Connect := connect757;
connect758 := Tconnect.Create;
connect758.NodeField := 'value_changed';
connect758.ProtoField := 'l_eyebrow_changed';
{ .AddConnect }
IS755.Connect := connect758;
{ .SetIS }
OrientationInterpolator754.IS := IS755;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator754;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator754.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator760 := TOrientationInterpolatorNode.Create;
IS761 := TIS.Create;
connect762 := Tconnect.Create;
connect762.NodeField := 'key';
connect762.ProtoField := 'l_eyebrow_joint_key';
{ .AddConnect }
IS761.Connect := connect762;
connect763 := Tconnect.Create;
connect763.NodeField := 'keyValue';
connect763.ProtoField := 'l_eyebrow_joint_keyValue';
{ .AddConnect }
IS761.Connect := connect763;
connect764 := Tconnect.Create;
connect764.NodeField := 'value_changed';
connect764.ProtoField := 'l_eyebrow_joint_changed';
{ .AddConnect }
IS761.Connect := connect764;
{ .SetIS }
OrientationInterpolator760.IS := IS761;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator760;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator760.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator766 := TOrientationInterpolatorNode.Create;
IS767 := TIS.Create;
connect768 := Tconnect.Create;
connect768.NodeField := 'key';
connect768.ProtoField := 'l_eyelid_key';
{ .AddConnect }
IS767.Connect := connect768;
connect769 := Tconnect.Create;
connect769.NodeField := 'keyValue';
connect769.ProtoField := 'l_eyelid_keyValue';
{ .AddConnect }
IS767.Connect := connect769;
connect770 := Tconnect.Create;
connect770.NodeField := 'value_changed';
connect770.ProtoField := 'l_eyelid_changed';
{ .AddConnect }
IS767.Connect := connect770;
{ .SetIS }
OrientationInterpolator766.IS := IS767;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator766;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator766.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator772 := TOrientationInterpolatorNode.Create;
IS773 := TIS.Create;
connect774 := Tconnect.Create;
connect774.NodeField := 'key';
connect774.ProtoField := 'l_eyelid_joint_key';
{ .AddConnect }
IS773.Connect := connect774;
connect775 := Tconnect.Create;
connect775.NodeField := 'keyValue';
connect775.ProtoField := 'l_eyelid_joint_keyValue';
{ .AddConnect }
IS773.Connect := connect775;
connect776 := Tconnect.Create;
connect776.NodeField := 'value_changed';
connect776.ProtoField := 'l_eyelid_joint_changed';
{ .AddConnect }
IS773.Connect := connect776;
{ .SetIS }
OrientationInterpolator772.IS := IS773;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator772;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator772.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator778 := TOrientationInterpolatorNode.Create;
IS779 := TIS.Create;
connect780 := Tconnect.Create;
connect780.NodeField := 'key';
connect780.ProtoField := 'l_forearm_key';
{ .AddConnect }
IS779.Connect := connect780;
connect781 := Tconnect.Create;
connect781.NodeField := 'keyValue';
connect781.ProtoField := 'l_forearm_keyValue';
{ .AddConnect }
IS779.Connect := connect781;
connect782 := Tconnect.Create;
connect782.NodeField := 'value_changed';
connect782.ProtoField := 'l_forearm_changed';
{ .AddConnect }
IS779.Connect := connect782;
{ .SetIS }
OrientationInterpolator778.IS := IS779;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator778;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator778.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator784 := TOrientationInterpolatorNode.Create;
IS785 := TIS.Create;
connect786 := Tconnect.Create;
connect786.NodeField := 'key';
connect786.ProtoField := 'l_forefoot_key';
{ .AddConnect }
IS785.Connect := connect786;
connect787 := Tconnect.Create;
connect787.NodeField := 'keyValue';
connect787.ProtoField := 'l_forefoot_keyValue';
{ .AddConnect }
IS785.Connect := connect787;
connect788 := Tconnect.Create;
connect788.NodeField := 'value_changed';
connect788.ProtoField := 'l_forefoot_changed';
{ .AddConnect }
IS785.Connect := connect788;
{ .SetIS }
OrientationInterpolator784.IS := IS785;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator784;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator784.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator790 := TOrientationInterpolatorNode.Create;
IS791 := TIS.Create;
connect792 := Tconnect.Create;
connect792.NodeField := 'key';
connect792.ProtoField := 'l_hand_key';
{ .AddConnect }
IS791.Connect := connect792;
connect793 := Tconnect.Create;
connect793.NodeField := 'keyValue';
connect793.ProtoField := 'l_hand_keyValue';
{ .AddConnect }
IS791.Connect := connect793;
connect794 := Tconnect.Create;
connect794.NodeField := 'value_changed';
connect794.ProtoField := 'l_hand_changed';
{ .AddConnect }
IS791.Connect := connect794;
{ .SetIS }
OrientationInterpolator790.IS := IS791;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator790;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator790.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator796 := TOrientationInterpolatorNode.Create;
IS797 := TIS.Create;
connect798 := Tconnect.Create;
connect798.NodeField := 'key';
connect798.ProtoField := 'l_hindfoot_key';
{ .AddConnect }
IS797.Connect := connect798;
connect799 := Tconnect.Create;
connect799.NodeField := 'keyValue';
connect799.ProtoField := 'l_hindfoot_keyValue';
{ .AddConnect }
IS797.Connect := connect799;
connect800 := Tconnect.Create;
connect800.NodeField := 'value_changed';
connect800.ProtoField := 'l_hindfoot_changed';
{ .AddConnect }
IS797.Connect := connect800;
{ .SetIS }
OrientationInterpolator796.IS := IS797;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator796;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator796.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator802 := TOrientationInterpolatorNode.Create;
IS803 := TIS.Create;
connect804 := Tconnect.Create;
connect804.NodeField := 'key';
connect804.ProtoField := 'l_hip_key';
{ .AddConnect }
IS803.Connect := connect804;
connect805 := Tconnect.Create;
connect805.NodeField := 'keyValue';
connect805.ProtoField := 'l_hip_keyValue';
{ .AddConnect }
IS803.Connect := connect805;
connect806 := Tconnect.Create;
connect806.NodeField := 'value_changed';
connect806.ProtoField := 'l_hip_changed';
{ .AddConnect }
IS803.Connect := connect806;
{ .SetIS }
OrientationInterpolator802.IS := IS803;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator802;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator802.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator808 := TOrientationInterpolatorNode.Create;
IS809 := TIS.Create;
connect810 := Tconnect.Create;
connect810.NodeField := 'key';
connect810.ProtoField := 'l_index0_key';
{ .AddConnect }
IS809.Connect := connect810;
connect811 := Tconnect.Create;
connect811.NodeField := 'keyValue';
connect811.ProtoField := 'l_index0_keyValue';
{ .AddConnect }
IS809.Connect := connect811;
connect812 := Tconnect.Create;
connect812.NodeField := 'value_changed';
connect812.ProtoField := 'l_index0_changed';
{ .AddConnect }
IS809.Connect := connect812;
{ .SetIS }
OrientationInterpolator808.IS := IS809;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator808;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator808.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator814 := TOrientationInterpolatorNode.Create;
IS815 := TIS.Create;
connect816 := Tconnect.Create;
connect816.NodeField := 'key';
connect816.ProtoField := 'l_index1_key';
{ .AddConnect }
IS815.Connect := connect816;
connect817 := Tconnect.Create;
connect817.NodeField := 'keyValue';
connect817.ProtoField := 'l_index1_keyValue';
{ .AddConnect }
IS815.Connect := connect817;
connect818 := Tconnect.Create;
connect818.NodeField := 'value_changed';
connect818.ProtoField := 'l_index1_changed';
{ .AddConnect }
IS815.Connect := connect818;
{ .SetIS }
OrientationInterpolator814.IS := IS815;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator814;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator814.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator820 := TOrientationInterpolatorNode.Create;
IS821 := TIS.Create;
connect822 := Tconnect.Create;
connect822.NodeField := 'key';
connect822.ProtoField := 'l_index2_key';
{ .AddConnect }
IS821.Connect := connect822;
connect823 := Tconnect.Create;
connect823.NodeField := 'keyValue';
connect823.ProtoField := 'l_index2_keyValue';
{ .AddConnect }
IS821.Connect := connect823;
connect824 := Tconnect.Create;
connect824.NodeField := 'value_changed';
connect824.ProtoField := 'l_index2_changed';
{ .AddConnect }
IS821.Connect := connect824;
{ .SetIS }
OrientationInterpolator820.IS := IS821;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator820;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator820.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator826 := TOrientationInterpolatorNode.Create;
IS827 := TIS.Create;
connect828 := Tconnect.Create;
connect828.NodeField := 'key';
connect828.ProtoField := 'l_index3_key';
{ .AddConnect }
IS827.Connect := connect828;
connect829 := Tconnect.Create;
connect829.NodeField := 'keyValue';
connect829.ProtoField := 'l_index3_keyValue';
{ .AddConnect }
IS827.Connect := connect829;
connect830 := Tconnect.Create;
connect830.NodeField := 'value_changed';
connect830.ProtoField := 'l_index3_changed';
{ .AddConnect }
IS827.Connect := connect830;
{ .SetIS }
OrientationInterpolator826.IS := IS827;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator826;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator826.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator832 := TOrientationInterpolatorNode.Create;
IS833 := TIS.Create;
connect834 := Tconnect.Create;
connect834.NodeField := 'key';
connect834.ProtoField := 'l_index_distal_key';
{ .AddConnect }
IS833.Connect := connect834;
connect835 := Tconnect.Create;
connect835.NodeField := 'keyValue';
connect835.ProtoField := 'l_index_distal_keyValue';
{ .AddConnect }
IS833.Connect := connect835;
connect836 := Tconnect.Create;
connect836.NodeField := 'value_changed';
connect836.ProtoField := 'l_index_distal_changed';
{ .AddConnect }
IS833.Connect := connect836;
{ .SetIS }
OrientationInterpolator832.IS := IS833;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator832;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator832.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator838 := TOrientationInterpolatorNode.Create;
IS839 := TIS.Create;
connect840 := Tconnect.Create;
connect840.NodeField := 'key';
connect840.ProtoField := 'l_index_metacarpal_key';
{ .AddConnect }
IS839.Connect := connect840;
connect841 := Tconnect.Create;
connect841.NodeField := 'keyValue';
connect841.ProtoField := 'l_index_metacarpal_keyValue';
{ .AddConnect }
IS839.Connect := connect841;
connect842 := Tconnect.Create;
connect842.NodeField := 'value_changed';
connect842.ProtoField := 'l_index_metacarpal_changed';
{ .AddConnect }
IS839.Connect := connect842;
{ .SetIS }
OrientationInterpolator838.IS := IS839;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator838;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator838.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator844 := TOrientationInterpolatorNode.Create;
IS845 := TIS.Create;
connect846 := Tconnect.Create;
connect846.NodeField := 'key';
connect846.ProtoField := 'l_index_middle_key';
{ .AddConnect }
IS845.Connect := connect846;
connect847 := Tconnect.Create;
connect847.NodeField := 'keyValue';
connect847.ProtoField := 'l_index_middle_keyValue';
{ .AddConnect }
IS845.Connect := connect847;
connect848 := Tconnect.Create;
connect848.NodeField := 'value_changed';
connect848.ProtoField := 'l_index_middle_changed';
{ .AddConnect }
IS845.Connect := connect848;
{ .SetIS }
OrientationInterpolator844.IS := IS845;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator844;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator844.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator850 := TOrientationInterpolatorNode.Create;
IS851 := TIS.Create;
connect852 := Tconnect.Create;
connect852.NodeField := 'key';
connect852.ProtoField := 'l_index_proximal_key';
{ .AddConnect }
IS851.Connect := connect852;
connect853 := Tconnect.Create;
connect853.NodeField := 'keyValue';
connect853.ProtoField := 'l_index_proximal_keyValue';
{ .AddConnect }
IS851.Connect := connect853;
connect854 := Tconnect.Create;
connect854.NodeField := 'value_changed';
connect854.ProtoField := 'l_index_proximal_changed';
{ .AddConnect }
IS851.Connect := connect854;
{ .SetIS }
OrientationInterpolator850.IS := IS851;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator850;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator850.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator856 := TOrientationInterpolatorNode.Create;
IS857 := TIS.Create;
connect858 := Tconnect.Create;
connect858.NodeField := 'key';
connect858.ProtoField := 'l_knee_key';
{ .AddConnect }
IS857.Connect := connect858;
connect859 := Tconnect.Create;
connect859.NodeField := 'keyValue';
connect859.ProtoField := 'l_knee_keyValue';
{ .AddConnect }
IS857.Connect := connect859;
connect860 := Tconnect.Create;
connect860.NodeField := 'value_changed';
connect860.ProtoField := 'l_knee_changed';
{ .AddConnect }
IS857.Connect := connect860;
{ .SetIS }
OrientationInterpolator856.IS := IS857;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator856;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator856.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator862 := TOrientationInterpolatorNode.Create;
IS863 := TIS.Create;
connect864 := Tconnect.Create;
connect864.NodeField := 'key';
connect864.ProtoField := 'l_metatarsal_key';
{ .AddConnect }
IS863.Connect := connect864;
connect865 := Tconnect.Create;
connect865.NodeField := 'keyValue';
connect865.ProtoField := 'l_metatarsal_keyValue';
{ .AddConnect }
IS863.Connect := connect865;
connect866 := Tconnect.Create;
connect866.NodeField := 'value_changed';
connect866.ProtoField := 'l_metatarsal_changed';
{ .AddConnect }
IS863.Connect := connect866;
{ .SetIS }
OrientationInterpolator862.IS := IS863;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator862;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator862.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator868 := TOrientationInterpolatorNode.Create;
IS869 := TIS.Create;
connect870 := Tconnect.Create;
connect870.NodeField := 'key';
connect870.ProtoField := 'l_middistal_key';
{ .AddConnect }
IS869.Connect := connect870;
connect871 := Tconnect.Create;
connect871.NodeField := 'keyValue';
connect871.ProtoField := 'l_middistal_keyValue';
{ .AddConnect }
IS869.Connect := connect871;
connect872 := Tconnect.Create;
connect872.NodeField := 'value_changed';
connect872.ProtoField := 'l_middistal_changed';
{ .AddConnect }
IS869.Connect := connect872;
{ .SetIS }
OrientationInterpolator868.IS := IS869;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator868;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator868.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator874 := TOrientationInterpolatorNode.Create;
IS875 := TIS.Create;
connect876 := Tconnect.Create;
connect876.NodeField := 'key';
connect876.ProtoField := 'l_middle0_key';
{ .AddConnect }
IS875.Connect := connect876;
connect877 := Tconnect.Create;
connect877.NodeField := 'keyValue';
connect877.ProtoField := 'l_middle0_keyValue';
{ .AddConnect }
IS875.Connect := connect877;
connect878 := Tconnect.Create;
connect878.NodeField := 'value_changed';
connect878.ProtoField := 'l_middle0_changed';
{ .AddConnect }
IS875.Connect := connect878;
{ .SetIS }
OrientationInterpolator874.IS := IS875;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator874;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator874.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator880 := TOrientationInterpolatorNode.Create;
IS881 := TIS.Create;
connect882 := Tconnect.Create;
connect882.NodeField := 'key';
connect882.ProtoField := 'l_middle1_key';
{ .AddConnect }
IS881.Connect := connect882;
connect883 := Tconnect.Create;
connect883.NodeField := 'keyValue';
connect883.ProtoField := 'l_middle1_keyValue';
{ .AddConnect }
IS881.Connect := connect883;
connect884 := Tconnect.Create;
connect884.NodeField := 'value_changed';
connect884.ProtoField := 'l_middle1_changed';
{ .AddConnect }
IS881.Connect := connect884;
{ .SetIS }
OrientationInterpolator880.IS := IS881;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator880;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator880.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator886 := TOrientationInterpolatorNode.Create;
IS887 := TIS.Create;
connect888 := Tconnect.Create;
connect888.NodeField := 'key';
connect888.ProtoField := 'l_middle2_key';
{ .AddConnect }
IS887.Connect := connect888;
connect889 := Tconnect.Create;
connect889.NodeField := 'keyValue';
connect889.ProtoField := 'l_middle2_keyValue';
{ .AddConnect }
IS887.Connect := connect889;
connect890 := Tconnect.Create;
connect890.NodeField := 'value_changed';
connect890.ProtoField := 'l_middle2_changed';
{ .AddConnect }
IS887.Connect := connect890;
{ .SetIS }
OrientationInterpolator886.IS := IS887;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator886;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator886.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator892 := TOrientationInterpolatorNode.Create;
IS893 := TIS.Create;
connect894 := Tconnect.Create;
connect894.NodeField := 'key';
connect894.ProtoField := 'l_middle3_key';
{ .AddConnect }
IS893.Connect := connect894;
connect895 := Tconnect.Create;
connect895.NodeField := 'keyValue';
connect895.ProtoField := 'l_middle3_keyValue';
{ .AddConnect }
IS893.Connect := connect895;
connect896 := Tconnect.Create;
connect896.NodeField := 'value_changed';
connect896.ProtoField := 'l_middle3_changed';
{ .AddConnect }
IS893.Connect := connect896;
{ .SetIS }
OrientationInterpolator892.IS := IS893;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator892;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator892.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator898 := TOrientationInterpolatorNode.Create;
IS899 := TIS.Create;
connect900 := Tconnect.Create;
connect900.NodeField := 'key';
connect900.ProtoField := 'l_middle_distal_key';
{ .AddConnect }
IS899.Connect := connect900;
connect901 := Tconnect.Create;
connect901.NodeField := 'keyValue';
connect901.ProtoField := 'l_middle_distal_keyValue';
{ .AddConnect }
IS899.Connect := connect901;
connect902 := Tconnect.Create;
connect902.NodeField := 'value_changed';
connect902.ProtoField := 'l_middle_distal_changed';
{ .AddConnect }
IS899.Connect := connect902;
{ .SetIS }
OrientationInterpolator898.IS := IS899;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator898;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator898.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator904 := TOrientationInterpolatorNode.Create;
IS905 := TIS.Create;
connect906 := Tconnect.Create;
connect906.NodeField := 'key';
connect906.ProtoField := 'l_middle_metacarpal_key';
{ .AddConnect }
IS905.Connect := connect906;
connect907 := Tconnect.Create;
connect907.NodeField := 'keyValue';
connect907.ProtoField := 'l_middle_metacarpal_keyValue';
{ .AddConnect }
IS905.Connect := connect907;
connect908 := Tconnect.Create;
connect908.NodeField := 'value_changed';
connect908.ProtoField := 'l_middle_metacarpal_changed';
{ .AddConnect }
IS905.Connect := connect908;
{ .SetIS }
OrientationInterpolator904.IS := IS905;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator904;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator904.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator910 := TOrientationInterpolatorNode.Create;
IS911 := TIS.Create;
connect912 := Tconnect.Create;
connect912.NodeField := 'key';
connect912.ProtoField := 'l_middle_middle_key';
{ .AddConnect }
IS911.Connect := connect912;
connect913 := Tconnect.Create;
connect913.NodeField := 'keyValue';
connect913.ProtoField := 'l_middle_middle_keyValue';
{ .AddConnect }
IS911.Connect := connect913;
connect914 := Tconnect.Create;
connect914.NodeField := 'value_changed';
connect914.ProtoField := 'l_middle_middle_changed';
{ .AddConnect }
IS911.Connect := connect914;
{ .SetIS }
OrientationInterpolator910.IS := IS911;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator910;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator910.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator916 := TOrientationInterpolatorNode.Create;
IS917 := TIS.Create;
connect918 := Tconnect.Create;
connect918.NodeField := 'key';
connect918.ProtoField := 'l_middle_proximal_key';
{ .AddConnect }
IS917.Connect := connect918;
connect919 := Tconnect.Create;
connect919.NodeField := 'keyValue';
connect919.ProtoField := 'l_middle_proximal_keyValue';
{ .AddConnect }
IS917.Connect := connect919;
connect920 := Tconnect.Create;
connect920.NodeField := 'value_changed';
connect920.ProtoField := 'l_middle_proximal_changed';
{ .AddConnect }
IS917.Connect := connect920;
{ .SetIS }
OrientationInterpolator916.IS := IS917;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator916;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator916.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator922 := TOrientationInterpolatorNode.Create;
IS923 := TIS.Create;
connect924 := Tconnect.Create;
connect924.NodeField := 'key';
connect924.ProtoField := 'l_midproximal_key';
{ .AddConnect }
IS923.Connect := connect924;
connect925 := Tconnect.Create;
connect925.NodeField := 'keyValue';
connect925.ProtoField := 'l_midproximal_keyValue';
{ .AddConnect }
IS923.Connect := connect925;
connect926 := Tconnect.Create;
connect926.NodeField := 'value_changed';
connect926.ProtoField := 'l_midproximal_changed';
{ .AddConnect }
IS923.Connect := connect926;
{ .SetIS }
OrientationInterpolator922.IS := IS923;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator922;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator922.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator928 := TOrientationInterpolatorNode.Create;
IS929 := TIS.Create;
connect930 := Tconnect.Create;
connect930.NodeField := 'key';
connect930.ProtoField := 'l_midtarsal_key';
{ .AddConnect }
IS929.Connect := connect930;
connect931 := Tconnect.Create;
connect931.NodeField := 'keyValue';
connect931.ProtoField := 'l_midtarsal_keyValue';
{ .AddConnect }
IS929.Connect := connect931;
connect932 := Tconnect.Create;
connect932.NodeField := 'value_changed';
connect932.ProtoField := 'l_midtarsal_changed';
{ .AddConnect }
IS929.Connect := connect932;
{ .SetIS }
OrientationInterpolator928.IS := IS929;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator928;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator928.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator934 := TOrientationInterpolatorNode.Create;
IS935 := TIS.Create;
connect936 := Tconnect.Create;
connect936.NodeField := 'key';
connect936.ProtoField := 'l_pinky0_key';
{ .AddConnect }
IS935.Connect := connect936;
connect937 := Tconnect.Create;
connect937.NodeField := 'keyValue';
connect937.ProtoField := 'l_pinky0_keyValue';
{ .AddConnect }
IS935.Connect := connect937;
connect938 := Tconnect.Create;
connect938.NodeField := 'value_changed';
connect938.ProtoField := 'l_pinky0_changed';
{ .AddConnect }
IS935.Connect := connect938;
{ .SetIS }
OrientationInterpolator934.IS := IS935;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator934;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator934.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator940 := TOrientationInterpolatorNode.Create;
IS941 := TIS.Create;
connect942 := Tconnect.Create;
connect942.NodeField := 'key';
connect942.ProtoField := 'l_pinky1_key';
{ .AddConnect }
IS941.Connect := connect942;
connect943 := Tconnect.Create;
connect943.NodeField := 'keyValue';
connect943.ProtoField := 'l_pinky1_keyValue';
{ .AddConnect }
IS941.Connect := connect943;
connect944 := Tconnect.Create;
connect944.NodeField := 'value_changed';
connect944.ProtoField := 'l_pinky1_changed';
{ .AddConnect }
IS941.Connect := connect944;
{ .SetIS }
OrientationInterpolator940.IS := IS941;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator940;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator940.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator946 := TOrientationInterpolatorNode.Create;
IS947 := TIS.Create;
connect948 := Tconnect.Create;
connect948.NodeField := 'key';
connect948.ProtoField := 'l_pinky2_key';
{ .AddConnect }
IS947.Connect := connect948;
connect949 := Tconnect.Create;
connect949.NodeField := 'keyValue';
connect949.ProtoField := 'l_pinky2_keyValue';
{ .AddConnect }
IS947.Connect := connect949;
connect950 := Tconnect.Create;
connect950.NodeField := 'value_changed';
connect950.ProtoField := 'l_pinky2_changed';
{ .AddConnect }
IS947.Connect := connect950;
{ .SetIS }
OrientationInterpolator946.IS := IS947;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator946;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator946.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator952 := TOrientationInterpolatorNode.Create;
IS953 := TIS.Create;
connect954 := Tconnect.Create;
connect954.NodeField := 'key';
connect954.ProtoField := 'l_pinky3_key';
{ .AddConnect }
IS953.Connect := connect954;
connect955 := Tconnect.Create;
connect955.NodeField := 'keyValue';
connect955.ProtoField := 'l_pinky3_keyValue';
{ .AddConnect }
IS953.Connect := connect955;
connect956 := Tconnect.Create;
connect956.NodeField := 'value_changed';
connect956.ProtoField := 'l_pinky3_changed';
{ .AddConnect }
IS953.Connect := connect956;
{ .SetIS }
OrientationInterpolator952.IS := IS953;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator952;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator952.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator958 := TOrientationInterpolatorNode.Create;
IS959 := TIS.Create;
connect960 := Tconnect.Create;
connect960.NodeField := 'key';
connect960.ProtoField := 'l_pinky_distal_key';
{ .AddConnect }
IS959.Connect := connect960;
connect961 := Tconnect.Create;
connect961.NodeField := 'keyValue';
connect961.ProtoField := 'l_pinky_distal_keyValue';
{ .AddConnect }
IS959.Connect := connect961;
connect962 := Tconnect.Create;
connect962.NodeField := 'value_changed';
connect962.ProtoField := 'l_pinky_distal_changed';
{ .AddConnect }
IS959.Connect := connect962;
{ .SetIS }
OrientationInterpolator958.IS := IS959;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator958;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator958.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator964 := TOrientationInterpolatorNode.Create;
IS965 := TIS.Create;
connect966 := Tconnect.Create;
connect966.NodeField := 'key';
connect966.ProtoField := 'l_pinky_metacarpal_key';
{ .AddConnect }
IS965.Connect := connect966;
connect967 := Tconnect.Create;
connect967.NodeField := 'keyValue';
connect967.ProtoField := 'l_pinky_metacarpal_keyValue';
{ .AddConnect }
IS965.Connect := connect967;
connect968 := Tconnect.Create;
connect968.NodeField := 'value_changed';
connect968.ProtoField := 'l_pinky_metacarpal_changed';
{ .AddConnect }
IS965.Connect := connect968;
{ .SetIS }
OrientationInterpolator964.IS := IS965;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator964;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator964.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator970 := TOrientationInterpolatorNode.Create;
IS971 := TIS.Create;
connect972 := Tconnect.Create;
connect972.NodeField := 'key';
connect972.ProtoField := 'l_pinky_middle_key';
{ .AddConnect }
IS971.Connect := connect972;
connect973 := Tconnect.Create;
connect973.NodeField := 'keyValue';
connect973.ProtoField := 'l_pinky_middle_keyValue';
{ .AddConnect }
IS971.Connect := connect973;
connect974 := Tconnect.Create;
connect974.NodeField := 'value_changed';
connect974.ProtoField := 'l_pinky_middle_changed';
{ .AddConnect }
IS971.Connect := connect974;
{ .SetIS }
OrientationInterpolator970.IS := IS971;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator970;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator970.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator976 := TOrientationInterpolatorNode.Create;
IS977 := TIS.Create;
connect978 := Tconnect.Create;
connect978.NodeField := 'key';
connect978.ProtoField := 'l_pinky_proximal_key';
{ .AddConnect }
IS977.Connect := connect978;
connect979 := Tconnect.Create;
connect979.NodeField := 'keyValue';
connect979.ProtoField := 'l_pinky_proximal_keyValue';
{ .AddConnect }
IS977.Connect := connect979;
connect980 := Tconnect.Create;
connect980.NodeField := 'value_changed';
connect980.ProtoField := 'l_pinky_proximal_changed';
{ .AddConnect }
IS977.Connect := connect980;
{ .SetIS }
OrientationInterpolator976.IS := IS977;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator976;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator976.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator982 := TOrientationInterpolatorNode.Create;
IS983 := TIS.Create;
connect984 := Tconnect.Create;
connect984.NodeField := 'key';
connect984.ProtoField := 'l_ring0_key';
{ .AddConnect }
IS983.Connect := connect984;
connect985 := Tconnect.Create;
connect985.NodeField := 'keyValue';
connect985.ProtoField := 'l_ring0_keyValue';
{ .AddConnect }
IS983.Connect := connect985;
connect986 := Tconnect.Create;
connect986.NodeField := 'value_changed';
connect986.ProtoField := 'l_ring0_changed';
{ .AddConnect }
IS983.Connect := connect986;
{ .SetIS }
OrientationInterpolator982.IS := IS983;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator982;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator982.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator988 := TOrientationInterpolatorNode.Create;
IS989 := TIS.Create;
connect990 := Tconnect.Create;
connect990.NodeField := 'key';
connect990.ProtoField := 'l_ring1_key';
{ .AddConnect }
IS989.Connect := connect990;
connect991 := Tconnect.Create;
connect991.NodeField := 'keyValue';
connect991.ProtoField := 'l_ring1_keyValue';
{ .AddConnect }
IS989.Connect := connect991;
connect992 := Tconnect.Create;
connect992.NodeField := 'value_changed';
connect992.ProtoField := 'l_ring1_changed';
{ .AddConnect }
IS989.Connect := connect992;
{ .SetIS }
OrientationInterpolator988.IS := IS989;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator988;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator988.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator994 := TOrientationInterpolatorNode.Create;
IS995 := TIS.Create;
connect996 := Tconnect.Create;
connect996.NodeField := 'key';
connect996.ProtoField := 'l_ring2_key';
{ .AddConnect }
IS995.Connect := connect996;
connect997 := Tconnect.Create;
connect997.NodeField := 'keyValue';
connect997.ProtoField := 'l_ring2_keyValue';
{ .AddConnect }
IS995.Connect := connect997;
connect998 := Tconnect.Create;
connect998.NodeField := 'value_changed';
connect998.ProtoField := 'l_ring2_changed';
{ .AddConnect }
IS995.Connect := connect998;
{ .SetIS }
OrientationInterpolator994.IS := IS995;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator994;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator994.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1000 := TOrientationInterpolatorNode.Create;
IS1001 := TIS.Create;
connect1002 := Tconnect.Create;
connect1002.NodeField := 'key';
connect1002.ProtoField := 'l_ring3_key';
{ .AddConnect }
IS1001.Connect := connect1002;
connect1003 := Tconnect.Create;
connect1003.NodeField := 'keyValue';
connect1003.ProtoField := 'l_ring3_keyValue';
{ .AddConnect }
IS1001.Connect := connect1003;
connect1004 := Tconnect.Create;
connect1004.NodeField := 'value_changed';
connect1004.ProtoField := 'l_ring3_changed';
{ .AddConnect }
IS1001.Connect := connect1004;
{ .SetIS }
OrientationInterpolator1000.IS := IS1001;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1000;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1000.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1006 := TOrientationInterpolatorNode.Create;
IS1007 := TIS.Create;
connect1008 := Tconnect.Create;
connect1008.NodeField := 'key';
connect1008.ProtoField := 'l_ring_distal_key';
{ .AddConnect }
IS1007.Connect := connect1008;
connect1009 := Tconnect.Create;
connect1009.NodeField := 'keyValue';
connect1009.ProtoField := 'l_ring_distal_keyValue';
{ .AddConnect }
IS1007.Connect := connect1009;
connect1010 := Tconnect.Create;
connect1010.NodeField := 'value_changed';
connect1010.ProtoField := 'l_ring_distal_changed';
{ .AddConnect }
IS1007.Connect := connect1010;
{ .SetIS }
OrientationInterpolator1006.IS := IS1007;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1006;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1006.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1012 := TOrientationInterpolatorNode.Create;
IS1013 := TIS.Create;
connect1014 := Tconnect.Create;
connect1014.NodeField := 'key';
connect1014.ProtoField := 'l_ring_metacarpal_key';
{ .AddConnect }
IS1013.Connect := connect1014;
connect1015 := Tconnect.Create;
connect1015.NodeField := 'keyValue';
connect1015.ProtoField := 'l_ring_metacarpal_keyValue';
{ .AddConnect }
IS1013.Connect := connect1015;
connect1016 := Tconnect.Create;
connect1016.NodeField := 'value_changed';
connect1016.ProtoField := 'l_ring_metacarpal_changed';
{ .AddConnect }
IS1013.Connect := connect1016;
{ .SetIS }
OrientationInterpolator1012.IS := IS1013;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1012;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1012.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1018 := TOrientationInterpolatorNode.Create;
IS1019 := TIS.Create;
connect1020 := Tconnect.Create;
connect1020.NodeField := 'key';
connect1020.ProtoField := 'l_ring_middle_key';
{ .AddConnect }
IS1019.Connect := connect1020;
connect1021 := Tconnect.Create;
connect1021.NodeField := 'keyValue';
connect1021.ProtoField := 'l_ring_middle_keyValue';
{ .AddConnect }
IS1019.Connect := connect1021;
connect1022 := Tconnect.Create;
connect1022.NodeField := 'value_changed';
connect1022.ProtoField := 'l_ring_middle_changed';
{ .AddConnect }
IS1019.Connect := connect1022;
{ .SetIS }
OrientationInterpolator1018.IS := IS1019;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1018;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1018.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1024 := TOrientationInterpolatorNode.Create;
IS1025 := TIS.Create;
connect1026 := Tconnect.Create;
connect1026.NodeField := 'key';
connect1026.ProtoField := 'l_ring_proximal_key';
{ .AddConnect }
IS1025.Connect := connect1026;
connect1027 := Tconnect.Create;
connect1027.NodeField := 'keyValue';
connect1027.ProtoField := 'l_ring_proximal_keyValue';
{ .AddConnect }
IS1025.Connect := connect1027;
connect1028 := Tconnect.Create;
connect1028.NodeField := 'value_changed';
connect1028.ProtoField := 'l_ring_proximal_changed';
{ .AddConnect }
IS1025.Connect := connect1028;
{ .SetIS }
OrientationInterpolator1024.IS := IS1025;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1024;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1024.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1030 := TOrientationInterpolatorNode.Create;
IS1031 := TIS.Create;
connect1032 := Tconnect.Create;
connect1032.NodeField := 'key';
connect1032.ProtoField := 'l_scapula_key';
{ .AddConnect }
IS1031.Connect := connect1032;
connect1033 := Tconnect.Create;
connect1033.NodeField := 'keyValue';
connect1033.ProtoField := 'l_scapula_keyValue';
{ .AddConnect }
IS1031.Connect := connect1033;
connect1034 := Tconnect.Create;
connect1034.NodeField := 'value_changed';
connect1034.ProtoField := 'l_scapula_changed';
{ .AddConnect }
IS1031.Connect := connect1034;
{ .SetIS }
OrientationInterpolator1030.IS := IS1031;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1030;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1030.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1036 := TOrientationInterpolatorNode.Create;
IS1037 := TIS.Create;
connect1038 := Tconnect.Create;
connect1038.NodeField := 'key';
connect1038.ProtoField := 'l_shoulder_key';
{ .AddConnect }
IS1037.Connect := connect1038;
connect1039 := Tconnect.Create;
connect1039.NodeField := 'keyValue';
connect1039.ProtoField := 'l_shoulder_keyValue';
{ .AddConnect }
IS1037.Connect := connect1039;
connect1040 := Tconnect.Create;
connect1040.NodeField := 'value_changed';
connect1040.ProtoField := 'l_shoulder_changed';
{ .AddConnect }
IS1037.Connect := connect1040;
{ .SetIS }
OrientationInterpolator1036.IS := IS1037;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1036;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1036.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1042 := TOrientationInterpolatorNode.Create;
IS1043 := TIS.Create;
connect1044 := Tconnect.Create;
connect1044.NodeField := 'key';
connect1044.ProtoField := 'l_sternoclavicular_key';
{ .AddConnect }
IS1043.Connect := connect1044;
connect1045 := Tconnect.Create;
connect1045.NodeField := 'keyValue';
connect1045.ProtoField := 'l_sternoclavicular_keyValue';
{ .AddConnect }
IS1043.Connect := connect1045;
connect1046 := Tconnect.Create;
connect1046.NodeField := 'value_changed';
connect1046.ProtoField := 'l_sternoclavicular_changed';
{ .AddConnect }
IS1043.Connect := connect1046;
{ .SetIS }
OrientationInterpolator1042.IS := IS1043;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1042;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1042.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1048 := TOrientationInterpolatorNode.Create;
IS1049 := TIS.Create;
connect1050 := Tconnect.Create;
connect1050.NodeField := 'key';
connect1050.ProtoField := 'l_subtalar_key';
{ .AddConnect }
IS1049.Connect := connect1050;
connect1051 := Tconnect.Create;
connect1051.NodeField := 'keyValue';
connect1051.ProtoField := 'l_subtalar_keyValue';
{ .AddConnect }
IS1049.Connect := connect1051;
connect1052 := Tconnect.Create;
connect1052.NodeField := 'value_changed';
connect1052.ProtoField := 'l_subtalar_changed';
{ .AddConnect }
IS1049.Connect := connect1052;
{ .SetIS }
OrientationInterpolator1048.IS := IS1049;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1048;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1048.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1054 := TOrientationInterpolatorNode.Create;
IS1055 := TIS.Create;
connect1056 := Tconnect.Create;
connect1056.NodeField := 'key';
connect1056.ProtoField := 'l_thigh_key';
{ .AddConnect }
IS1055.Connect := connect1056;
connect1057 := Tconnect.Create;
connect1057.NodeField := 'keyValue';
connect1057.ProtoField := 'l_thigh_keyValue';
{ .AddConnect }
IS1055.Connect := connect1057;
connect1058 := Tconnect.Create;
connect1058.NodeField := 'value_changed';
connect1058.ProtoField := 'l_thigh_changed';
{ .AddConnect }
IS1055.Connect := connect1058;
{ .SetIS }
OrientationInterpolator1054.IS := IS1055;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1054;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1054.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1060 := TOrientationInterpolatorNode.Create;
IS1061 := TIS.Create;
connect1062 := Tconnect.Create;
connect1062.NodeField := 'key';
connect1062.ProtoField := 'l_thumb1_key';
{ .AddConnect }
IS1061.Connect := connect1062;
connect1063 := Tconnect.Create;
connect1063.NodeField := 'keyValue';
connect1063.ProtoField := 'l_thumb1_keyValue';
{ .AddConnect }
IS1061.Connect := connect1063;
connect1064 := Tconnect.Create;
connect1064.NodeField := 'value_changed';
connect1064.ProtoField := 'l_thumb1_changed';
{ .AddConnect }
IS1061.Connect := connect1064;
{ .SetIS }
OrientationInterpolator1060.IS := IS1061;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1060;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1060.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1066 := TOrientationInterpolatorNode.Create;
IS1067 := TIS.Create;
connect1068 := Tconnect.Create;
connect1068.NodeField := 'key';
connect1068.ProtoField := 'l_thumb2_key';
{ .AddConnect }
IS1067.Connect := connect1068;
connect1069 := Tconnect.Create;
connect1069.NodeField := 'keyValue';
connect1069.ProtoField := 'l_thumb2_keyValue';
{ .AddConnect }
IS1067.Connect := connect1069;
connect1070 := Tconnect.Create;
connect1070.NodeField := 'value_changed';
connect1070.ProtoField := 'l_thumb2_changed';
{ .AddConnect }
IS1067.Connect := connect1070;
{ .SetIS }
OrientationInterpolator1066.IS := IS1067;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1066;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1066.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1072 := TOrientationInterpolatorNode.Create;
IS1073 := TIS.Create;
connect1074 := Tconnect.Create;
connect1074.NodeField := 'key';
connect1074.ProtoField := 'l_thumb3_key';
{ .AddConnect }
IS1073.Connect := connect1074;
connect1075 := Tconnect.Create;
connect1075.NodeField := 'keyValue';
connect1075.ProtoField := 'l_thumb3_keyValue';
{ .AddConnect }
IS1073.Connect := connect1075;
connect1076 := Tconnect.Create;
connect1076.NodeField := 'value_changed';
connect1076.ProtoField := 'l_thumb3_changed';
{ .AddConnect }
IS1073.Connect := connect1076;
{ .SetIS }
OrientationInterpolator1072.IS := IS1073;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1072;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1072.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1078 := TOrientationInterpolatorNode.Create;
IS1079 := TIS.Create;
connect1080 := Tconnect.Create;
connect1080.NodeField := 'key';
connect1080.ProtoField := 'l_thumb_distal_key';
{ .AddConnect }
IS1079.Connect := connect1080;
connect1081 := Tconnect.Create;
connect1081.NodeField := 'keyValue';
connect1081.ProtoField := 'l_thumb_distal_keyValue';
{ .AddConnect }
IS1079.Connect := connect1081;
connect1082 := Tconnect.Create;
connect1082.NodeField := 'value_changed';
connect1082.ProtoField := 'l_thumb_distal_changed';
{ .AddConnect }
IS1079.Connect := connect1082;
{ .SetIS }
OrientationInterpolator1078.IS := IS1079;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1078;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1078.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1084 := TOrientationInterpolatorNode.Create;
IS1085 := TIS.Create;
connect1086 := Tconnect.Create;
connect1086.NodeField := 'key';
connect1086.ProtoField := 'l_thumb_metacarpal_key';
{ .AddConnect }
IS1085.Connect := connect1086;
connect1087 := Tconnect.Create;
connect1087.NodeField := 'keyValue';
connect1087.ProtoField := 'l_thumb_metacarpal_keyValue';
{ .AddConnect }
IS1085.Connect := connect1087;
connect1088 := Tconnect.Create;
connect1088.NodeField := 'value_changed';
connect1088.ProtoField := 'l_thumb_metacarpal_changed';
{ .AddConnect }
IS1085.Connect := connect1088;
{ .SetIS }
OrientationInterpolator1084.IS := IS1085;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1084;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1084.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1090 := TOrientationInterpolatorNode.Create;
IS1091 := TIS.Create;
connect1092 := Tconnect.Create;
connect1092.NodeField := 'key';
connect1092.ProtoField := 'l_thumb_proximal_key';
{ .AddConnect }
IS1091.Connect := connect1092;
connect1093 := Tconnect.Create;
connect1093.NodeField := 'keyValue';
connect1093.ProtoField := 'l_thumb_proximal_keyValue';
{ .AddConnect }
IS1091.Connect := connect1093;
connect1094 := Tconnect.Create;
connect1094.NodeField := 'value_changed';
connect1094.ProtoField := 'l_thumb_proximal_changed';
{ .AddConnect }
IS1091.Connect := connect1094;
{ .SetIS }
OrientationInterpolator1090.IS := IS1091;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1090;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1090.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1096 := TOrientationInterpolatorNode.Create;
IS1097 := TIS.Create;
connect1098 := Tconnect.Create;
connect1098.NodeField := 'key';
connect1098.ProtoField := 'l_upperarm_key';
{ .AddConnect }
IS1097.Connect := connect1098;
connect1099 := Tconnect.Create;
connect1099.NodeField := 'keyValue';
connect1099.ProtoField := 'l_upperarm_keyValue';
{ .AddConnect }
IS1097.Connect := connect1099;
connect1100 := Tconnect.Create;
connect1100.NodeField := 'value_changed';
connect1100.ProtoField := 'l_upperarm_changed';
{ .AddConnect }
IS1097.Connect := connect1100;
{ .SetIS }
OrientationInterpolator1096.IS := IS1097;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1096;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1096.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1102 := TOrientationInterpolatorNode.Create;
IS1103 := TIS.Create;
connect1104 := Tconnect.Create;
connect1104.NodeField := 'key';
connect1104.ProtoField := 'l_wrist_key';
{ .AddConnect }
IS1103.Connect := connect1104;
connect1105 := Tconnect.Create;
connect1105.NodeField := 'keyValue';
connect1105.ProtoField := 'l_wrist_keyValue';
{ .AddConnect }
IS1103.Connect := connect1105;
connect1106 := Tconnect.Create;
connect1106.NodeField := 'value_changed';
connect1106.ProtoField := 'l_wrist_changed';
{ .AddConnect }
IS1103.Connect := connect1106;
{ .SetIS }
OrientationInterpolator1102.IS := IS1103;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1102;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1102.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1108 := TOrientationInterpolatorNode.Create;
IS1109 := TIS.Create;
connect1110 := Tconnect.Create;
connect1110.NodeField := 'key';
connect1110.ProtoField := 'pelvis_key';
{ .AddConnect }
IS1109.Connect := connect1110;
connect1111 := Tconnect.Create;
connect1111.NodeField := 'keyValue';
connect1111.ProtoField := 'pelvis_keyValue';
{ .AddConnect }
IS1109.Connect := connect1111;
connect1112 := Tconnect.Create;
connect1112.NodeField := 'value_changed';
connect1112.ProtoField := 'pelvis_changed';
{ .AddConnect }
IS1109.Connect := connect1112;
{ .SetIS }
OrientationInterpolator1108.IS := IS1109;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1108;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1108.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1114 := TOrientationInterpolatorNode.Create;
IS1115 := TIS.Create;
connect1116 := Tconnect.Create;
connect1116.NodeField := 'key';
connect1116.ProtoField := 'r_acromioclavicular_key';
{ .AddConnect }
IS1115.Connect := connect1116;
connect1117 := Tconnect.Create;
connect1117.NodeField := 'keyValue';
connect1117.ProtoField := 'r_acromioclavicular_keyValue';
{ .AddConnect }
IS1115.Connect := connect1117;
connect1118 := Tconnect.Create;
connect1118.NodeField := 'value_changed';
connect1118.ProtoField := 'r_acromioclavicular_changed';
{ .AddConnect }
IS1115.Connect := connect1118;
{ .SetIS }
OrientationInterpolator1114.IS := IS1115;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1114;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1114.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1120 := TOrientationInterpolatorNode.Create;
IS1121 := TIS.Create;
connect1122 := Tconnect.Create;
connect1122.NodeField := 'key';
connect1122.ProtoField := 'r_ankle_key';
{ .AddConnect }
IS1121.Connect := connect1122;
connect1123 := Tconnect.Create;
connect1123.NodeField := 'keyValue';
connect1123.ProtoField := 'r_ankle_keyValue';
{ .AddConnect }
IS1121.Connect := connect1123;
connect1124 := Tconnect.Create;
connect1124.NodeField := 'value_changed';
connect1124.ProtoField := 'r_ankle_changed';
{ .AddConnect }
IS1121.Connect := connect1124;
{ .SetIS }
OrientationInterpolator1120.IS := IS1121;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1120;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1120.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1126 := TOrientationInterpolatorNode.Create;
IS1127 := TIS.Create;
connect1128 := Tconnect.Create;
connect1128.NodeField := 'key';
connect1128.ProtoField := 'r_calf_key';
{ .AddConnect }
IS1127.Connect := connect1128;
connect1129 := Tconnect.Create;
connect1129.NodeField := 'keyValue';
connect1129.ProtoField := 'r_calf_keyValue';
{ .AddConnect }
IS1127.Connect := connect1129;
connect1130 := Tconnect.Create;
connect1130.NodeField := 'value_changed';
connect1130.ProtoField := 'r_calf_changed';
{ .AddConnect }
IS1127.Connect := connect1130;
{ .SetIS }
OrientationInterpolator1126.IS := IS1127;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1126;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1126.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1132 := TOrientationInterpolatorNode.Create;
IS1133 := TIS.Create;
connect1134 := Tconnect.Create;
connect1134.NodeField := 'key';
connect1134.ProtoField := 'r_clavicle_key';
{ .AddConnect }
IS1133.Connect := connect1134;
connect1135 := Tconnect.Create;
connect1135.NodeField := 'keyValue';
connect1135.ProtoField := 'r_clavicle_keyValue';
{ .AddConnect }
IS1133.Connect := connect1135;
connect1136 := Tconnect.Create;
connect1136.NodeField := 'value_changed';
connect1136.ProtoField := 'r_clavicle_changed';
{ .AddConnect }
IS1133.Connect := connect1136;
{ .SetIS }
OrientationInterpolator1132.IS := IS1133;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1132;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1132.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1138 := TOrientationInterpolatorNode.Create;
IS1139 := TIS.Create;
connect1140 := Tconnect.Create;
connect1140.NodeField := 'key';
connect1140.ProtoField := 'r_elbow_key';
{ .AddConnect }
IS1139.Connect := connect1140;
connect1141 := Tconnect.Create;
connect1141.NodeField := 'keyValue';
connect1141.ProtoField := 'r_elbow_keyValue';
{ .AddConnect }
IS1139.Connect := connect1141;
connect1142 := Tconnect.Create;
connect1142.NodeField := 'value_changed';
connect1142.ProtoField := 'r_elbow_changed';
{ .AddConnect }
IS1139.Connect := connect1142;
{ .SetIS }
OrientationInterpolator1138.IS := IS1139;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1138;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1138.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1144 := TOrientationInterpolatorNode.Create;
IS1145 := TIS.Create;
connect1146 := Tconnect.Create;
connect1146.NodeField := 'key';
connect1146.ProtoField := 'r_eyeball_key';
{ .AddConnect }
IS1145.Connect := connect1146;
connect1147 := Tconnect.Create;
connect1147.NodeField := 'keyValue';
connect1147.ProtoField := 'r_eyeball_keyValue';
{ .AddConnect }
IS1145.Connect := connect1147;
connect1148 := Tconnect.Create;
connect1148.NodeField := 'value_changed';
connect1148.ProtoField := 'r_eyeball_changed';
{ .AddConnect }
IS1145.Connect := connect1148;
{ .SetIS }
OrientationInterpolator1144.IS := IS1145;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1144;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1144.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1150 := TOrientationInterpolatorNode.Create;
IS1151 := TIS.Create;
connect1152 := Tconnect.Create;
connect1152.NodeField := 'key';
connect1152.ProtoField := 'r_eyeball_joint_key';
{ .AddConnect }
IS1151.Connect := connect1152;
connect1153 := Tconnect.Create;
connect1153.NodeField := 'keyValue';
connect1153.ProtoField := 'r_eyeball_joint_keyValue';
{ .AddConnect }
IS1151.Connect := connect1153;
connect1154 := Tconnect.Create;
connect1154.NodeField := 'value_changed';
connect1154.ProtoField := 'r_eyeball_joint_changed';
{ .AddConnect }
IS1151.Connect := connect1154;
{ .SetIS }
OrientationInterpolator1150.IS := IS1151;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1150;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1150.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1156 := TOrientationInterpolatorNode.Create;
IS1157 := TIS.Create;
connect1158 := Tconnect.Create;
connect1158.NodeField := 'key';
connect1158.ProtoField := 'r_eyebrow_key';
{ .AddConnect }
IS1157.Connect := connect1158;
connect1159 := Tconnect.Create;
connect1159.NodeField := 'keyValue';
connect1159.ProtoField := 'r_eyebrow_keyValue';
{ .AddConnect }
IS1157.Connect := connect1159;
connect1160 := Tconnect.Create;
connect1160.NodeField := 'value_changed';
connect1160.ProtoField := 'r_eyebrow_changed';
{ .AddConnect }
IS1157.Connect := connect1160;
{ .SetIS }
OrientationInterpolator1156.IS := IS1157;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1156;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1156.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1162 := TOrientationInterpolatorNode.Create;
IS1163 := TIS.Create;
connect1164 := Tconnect.Create;
connect1164.NodeField := 'key';
connect1164.ProtoField := 'r_eyebrow_joint_key';
{ .AddConnect }
IS1163.Connect := connect1164;
connect1165 := Tconnect.Create;
connect1165.NodeField := 'keyValue';
connect1165.ProtoField := 'r_eyebrow_joint_keyValue';
{ .AddConnect }
IS1163.Connect := connect1165;
connect1166 := Tconnect.Create;
connect1166.NodeField := 'value_changed';
connect1166.ProtoField := 'r_eyebrow_joint_changed';
{ .AddConnect }
IS1163.Connect := connect1166;
{ .SetIS }
OrientationInterpolator1162.IS := IS1163;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1162;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1162.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1168 := TOrientationInterpolatorNode.Create;
IS1169 := TIS.Create;
connect1170 := Tconnect.Create;
connect1170.NodeField := 'key';
connect1170.ProtoField := 'r_eyelid_key';
{ .AddConnect }
IS1169.Connect := connect1170;
connect1171 := Tconnect.Create;
connect1171.NodeField := 'keyValue';
connect1171.ProtoField := 'r_eyelid_keyValue';
{ .AddConnect }
IS1169.Connect := connect1171;
connect1172 := Tconnect.Create;
connect1172.NodeField := 'value_changed';
connect1172.ProtoField := 'r_eyelid_changed';
{ .AddConnect }
IS1169.Connect := connect1172;
{ .SetIS }
OrientationInterpolator1168.IS := IS1169;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1168;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1168.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1174 := TOrientationInterpolatorNode.Create;
IS1175 := TIS.Create;
connect1176 := Tconnect.Create;
connect1176.NodeField := 'key';
connect1176.ProtoField := 'r_eyelid_joint_key';
{ .AddConnect }
IS1175.Connect := connect1176;
connect1177 := Tconnect.Create;
connect1177.NodeField := 'keyValue';
connect1177.ProtoField := 'r_eyelid_joint_keyValue';
{ .AddConnect }
IS1175.Connect := connect1177;
connect1178 := Tconnect.Create;
connect1178.NodeField := 'value_changed';
connect1178.ProtoField := 'r_eyelid_joint_changed';
{ .AddConnect }
IS1175.Connect := connect1178;
{ .SetIS }
OrientationInterpolator1174.IS := IS1175;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1174;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1174.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1180 := TOrientationInterpolatorNode.Create;
IS1181 := TIS.Create;
connect1182 := Tconnect.Create;
connect1182.NodeField := 'key';
connect1182.ProtoField := 'r_forearm_key';
{ .AddConnect }
IS1181.Connect := connect1182;
connect1183 := Tconnect.Create;
connect1183.NodeField := 'keyValue';
connect1183.ProtoField := 'r_forearm_keyValue';
{ .AddConnect }
IS1181.Connect := connect1183;
connect1184 := Tconnect.Create;
connect1184.NodeField := 'value_changed';
connect1184.ProtoField := 'r_forearm_changed';
{ .AddConnect }
IS1181.Connect := connect1184;
{ .SetIS }
OrientationInterpolator1180.IS := IS1181;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1180;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1180.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1186 := TOrientationInterpolatorNode.Create;
IS1187 := TIS.Create;
connect1188 := Tconnect.Create;
connect1188.NodeField := 'key';
connect1188.ProtoField := 'r_forefoot_key';
{ .AddConnect }
IS1187.Connect := connect1188;
connect1189 := Tconnect.Create;
connect1189.NodeField := 'keyValue';
connect1189.ProtoField := 'r_forefoot_keyValue';
{ .AddConnect }
IS1187.Connect := connect1189;
connect1190 := Tconnect.Create;
connect1190.NodeField := 'value_changed';
connect1190.ProtoField := 'r_forefoot_changed';
{ .AddConnect }
IS1187.Connect := connect1190;
{ .SetIS }
OrientationInterpolator1186.IS := IS1187;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1186;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1186.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1192 := TOrientationInterpolatorNode.Create;
IS1193 := TIS.Create;
connect1194 := Tconnect.Create;
connect1194.NodeField := 'key';
connect1194.ProtoField := 'r_hand_key';
{ .AddConnect }
IS1193.Connect := connect1194;
connect1195 := Tconnect.Create;
connect1195.NodeField := 'keyValue';
connect1195.ProtoField := 'r_hand_keyValue';
{ .AddConnect }
IS1193.Connect := connect1195;
connect1196 := Tconnect.Create;
connect1196.NodeField := 'value_changed';
connect1196.ProtoField := 'r_hand_changed';
{ .AddConnect }
IS1193.Connect := connect1196;
{ .SetIS }
OrientationInterpolator1192.IS := IS1193;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1192;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1192.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1198 := TOrientationInterpolatorNode.Create;
IS1199 := TIS.Create;
connect1200 := Tconnect.Create;
connect1200.NodeField := 'key';
connect1200.ProtoField := 'r_hindfoot_key';
{ .AddConnect }
IS1199.Connect := connect1200;
connect1201 := Tconnect.Create;
connect1201.NodeField := 'keyValue';
connect1201.ProtoField := 'r_hindfoot_keyValue';
{ .AddConnect }
IS1199.Connect := connect1201;
connect1202 := Tconnect.Create;
connect1202.NodeField := 'value_changed';
connect1202.ProtoField := 'r_hindfoot_changed';
{ .AddConnect }
IS1199.Connect := connect1202;
{ .SetIS }
OrientationInterpolator1198.IS := IS1199;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1198;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1198.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1204 := TOrientationInterpolatorNode.Create;
IS1205 := TIS.Create;
connect1206 := Tconnect.Create;
connect1206.NodeField := 'key';
connect1206.ProtoField := 'r_hip_key';
{ .AddConnect }
IS1205.Connect := connect1206;
connect1207 := Tconnect.Create;
connect1207.NodeField := 'keyValue';
connect1207.ProtoField := 'r_hip_keyValue';
{ .AddConnect }
IS1205.Connect := connect1207;
connect1208 := Tconnect.Create;
connect1208.NodeField := 'value_changed';
connect1208.ProtoField := 'r_hip_changed';
{ .AddConnect }
IS1205.Connect := connect1208;
{ .SetIS }
OrientationInterpolator1204.IS := IS1205;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1204;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1204.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1210 := TOrientationInterpolatorNode.Create;
IS1211 := TIS.Create;
connect1212 := Tconnect.Create;
connect1212.NodeField := 'key';
connect1212.ProtoField := 'r_index0_key';
{ .AddConnect }
IS1211.Connect := connect1212;
connect1213 := Tconnect.Create;
connect1213.NodeField := 'keyValue';
connect1213.ProtoField := 'r_index0_keyValue';
{ .AddConnect }
IS1211.Connect := connect1213;
connect1214 := Tconnect.Create;
connect1214.NodeField := 'value_changed';
connect1214.ProtoField := 'r_index0_changed';
{ .AddConnect }
IS1211.Connect := connect1214;
{ .SetIS }
OrientationInterpolator1210.IS := IS1211;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1210;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1210.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1216 := TOrientationInterpolatorNode.Create;
IS1217 := TIS.Create;
connect1218 := Tconnect.Create;
connect1218.NodeField := 'key';
connect1218.ProtoField := 'r_index1_key';
{ .AddConnect }
IS1217.Connect := connect1218;
connect1219 := Tconnect.Create;
connect1219.NodeField := 'keyValue';
connect1219.ProtoField := 'r_index1_keyValue';
{ .AddConnect }
IS1217.Connect := connect1219;
connect1220 := Tconnect.Create;
connect1220.NodeField := 'value_changed';
connect1220.ProtoField := 'r_index1_changed';
{ .AddConnect }
IS1217.Connect := connect1220;
{ .SetIS }
OrientationInterpolator1216.IS := IS1217;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1216;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1216.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1222 := TOrientationInterpolatorNode.Create;
IS1223 := TIS.Create;
connect1224 := Tconnect.Create;
connect1224.NodeField := 'key';
connect1224.ProtoField := 'r_index2_key';
{ .AddConnect }
IS1223.Connect := connect1224;
connect1225 := Tconnect.Create;
connect1225.NodeField := 'keyValue';
connect1225.ProtoField := 'r_index2_keyValue';
{ .AddConnect }
IS1223.Connect := connect1225;
connect1226 := Tconnect.Create;
connect1226.NodeField := 'value_changed';
connect1226.ProtoField := 'r_index2_changed';
{ .AddConnect }
IS1223.Connect := connect1226;
{ .SetIS }
OrientationInterpolator1222.IS := IS1223;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1222;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1222.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1228 := TOrientationInterpolatorNode.Create;
IS1229 := TIS.Create;
connect1230 := Tconnect.Create;
connect1230.NodeField := 'key';
connect1230.ProtoField := 'r_index3_key';
{ .AddConnect }
IS1229.Connect := connect1230;
connect1231 := Tconnect.Create;
connect1231.NodeField := 'keyValue';
connect1231.ProtoField := 'r_index3_keyValue';
{ .AddConnect }
IS1229.Connect := connect1231;
connect1232 := Tconnect.Create;
connect1232.NodeField := 'value_changed';
connect1232.ProtoField := 'r_index3_changed';
{ .AddConnect }
IS1229.Connect := connect1232;
{ .SetIS }
OrientationInterpolator1228.IS := IS1229;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1228;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1228.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1234 := TOrientationInterpolatorNode.Create;
IS1235 := TIS.Create;
connect1236 := Tconnect.Create;
connect1236.NodeField := 'key';
connect1236.ProtoField := 'r_index_distal_key';
{ .AddConnect }
IS1235.Connect := connect1236;
connect1237 := Tconnect.Create;
connect1237.NodeField := 'keyValue';
connect1237.ProtoField := 'r_index_distal_keyValue';
{ .AddConnect }
IS1235.Connect := connect1237;
connect1238 := Tconnect.Create;
connect1238.NodeField := 'value_changed';
connect1238.ProtoField := 'r_index_distal_changed';
{ .AddConnect }
IS1235.Connect := connect1238;
{ .SetIS }
OrientationInterpolator1234.IS := IS1235;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1234;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1234.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1240 := TOrientationInterpolatorNode.Create;
IS1241 := TIS.Create;
connect1242 := Tconnect.Create;
connect1242.NodeField := 'key';
connect1242.ProtoField := 'r_index_metacarpal_key';
{ .AddConnect }
IS1241.Connect := connect1242;
connect1243 := Tconnect.Create;
connect1243.NodeField := 'keyValue';
connect1243.ProtoField := 'r_index_metacarpal_keyValue';
{ .AddConnect }
IS1241.Connect := connect1243;
connect1244 := Tconnect.Create;
connect1244.NodeField := 'value_changed';
connect1244.ProtoField := 'r_index_metacarpal_changed';
{ .AddConnect }
IS1241.Connect := connect1244;
{ .SetIS }
OrientationInterpolator1240.IS := IS1241;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1240;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1240.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1246 := TOrientationInterpolatorNode.Create;
IS1247 := TIS.Create;
connect1248 := Tconnect.Create;
connect1248.NodeField := 'key';
connect1248.ProtoField := 'r_index_middle_key';
{ .AddConnect }
IS1247.Connect := connect1248;
connect1249 := Tconnect.Create;
connect1249.NodeField := 'keyValue';
connect1249.ProtoField := 'r_index_middle_keyValue';
{ .AddConnect }
IS1247.Connect := connect1249;
connect1250 := Tconnect.Create;
connect1250.NodeField := 'value_changed';
connect1250.ProtoField := 'r_index_middle_changed';
{ .AddConnect }
IS1247.Connect := connect1250;
{ .SetIS }
OrientationInterpolator1246.IS := IS1247;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1246;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1246.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1252 := TOrientationInterpolatorNode.Create;
IS1253 := TIS.Create;
connect1254 := Tconnect.Create;
connect1254.NodeField := 'key';
connect1254.ProtoField := 'r_index_proximal_key';
{ .AddConnect }
IS1253.Connect := connect1254;
connect1255 := Tconnect.Create;
connect1255.NodeField := 'keyValue';
connect1255.ProtoField := 'r_index_proximal_keyValue';
{ .AddConnect }
IS1253.Connect := connect1255;
connect1256 := Tconnect.Create;
connect1256.NodeField := 'value_changed';
connect1256.ProtoField := 'r_index_proximal_changed';
{ .AddConnect }
IS1253.Connect := connect1256;
{ .SetIS }
OrientationInterpolator1252.IS := IS1253;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1252;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1252.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1258 := TOrientationInterpolatorNode.Create;
IS1259 := TIS.Create;
connect1260 := Tconnect.Create;
connect1260.NodeField := 'key';
connect1260.ProtoField := 'r_knee_key';
{ .AddConnect }
IS1259.Connect := connect1260;
connect1261 := Tconnect.Create;
connect1261.NodeField := 'keyValue';
connect1261.ProtoField := 'r_knee_keyValue';
{ .AddConnect }
IS1259.Connect := connect1261;
connect1262 := Tconnect.Create;
connect1262.NodeField := 'value_changed';
connect1262.ProtoField := 'r_knee_changed';
{ .AddConnect }
IS1259.Connect := connect1262;
{ .SetIS }
OrientationInterpolator1258.IS := IS1259;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1258;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1258.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1264 := TOrientationInterpolatorNode.Create;
IS1265 := TIS.Create;
connect1266 := Tconnect.Create;
connect1266.NodeField := 'key';
connect1266.ProtoField := 'r_metatarsal_key';
{ .AddConnect }
IS1265.Connect := connect1266;
connect1267 := Tconnect.Create;
connect1267.NodeField := 'keyValue';
connect1267.ProtoField := 'r_metatarsal_keyValue';
{ .AddConnect }
IS1265.Connect := connect1267;
connect1268 := Tconnect.Create;
connect1268.NodeField := 'value_changed';
connect1268.ProtoField := 'r_metatarsal_changed';
{ .AddConnect }
IS1265.Connect := connect1268;
{ .SetIS }
OrientationInterpolator1264.IS := IS1265;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1264;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1264.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1270 := TOrientationInterpolatorNode.Create;
IS1271 := TIS.Create;
connect1272 := Tconnect.Create;
connect1272.NodeField := 'key';
connect1272.ProtoField := 'r_middistal_key';
{ .AddConnect }
IS1271.Connect := connect1272;
connect1273 := Tconnect.Create;
connect1273.NodeField := 'keyValue';
connect1273.ProtoField := 'r_middistal_keyValue';
{ .AddConnect }
IS1271.Connect := connect1273;
connect1274 := Tconnect.Create;
connect1274.NodeField := 'value_changed';
connect1274.ProtoField := 'r_middistal_changed';
{ .AddConnect }
IS1271.Connect := connect1274;
{ .SetIS }
OrientationInterpolator1270.IS := IS1271;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1270;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1270.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1276 := TOrientationInterpolatorNode.Create;
IS1277 := TIS.Create;
connect1278 := Tconnect.Create;
connect1278.NodeField := 'key';
connect1278.ProtoField := 'r_middle0_key';
{ .AddConnect }
IS1277.Connect := connect1278;
connect1279 := Tconnect.Create;
connect1279.NodeField := 'keyValue';
connect1279.ProtoField := 'r_middle0_keyValue';
{ .AddConnect }
IS1277.Connect := connect1279;
connect1280 := Tconnect.Create;
connect1280.NodeField := 'value_changed';
connect1280.ProtoField := 'r_middle0_changed';
{ .AddConnect }
IS1277.Connect := connect1280;
{ .SetIS }
OrientationInterpolator1276.IS := IS1277;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1276;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1276.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1282 := TOrientationInterpolatorNode.Create;
IS1283 := TIS.Create;
connect1284 := Tconnect.Create;
connect1284.NodeField := 'key';
connect1284.ProtoField := 'r_middle1_key';
{ .AddConnect }
IS1283.Connect := connect1284;
connect1285 := Tconnect.Create;
connect1285.NodeField := 'keyValue';
connect1285.ProtoField := 'r_middle1_keyValue';
{ .AddConnect }
IS1283.Connect := connect1285;
connect1286 := Tconnect.Create;
connect1286.NodeField := 'value_changed';
connect1286.ProtoField := 'r_middle1_changed';
{ .AddConnect }
IS1283.Connect := connect1286;
{ .SetIS }
OrientationInterpolator1282.IS := IS1283;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1282;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1282.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1288 := TOrientationInterpolatorNode.Create;
IS1289 := TIS.Create;
connect1290 := Tconnect.Create;
connect1290.NodeField := 'key';
connect1290.ProtoField := 'r_middle2_key';
{ .AddConnect }
IS1289.Connect := connect1290;
connect1291 := Tconnect.Create;
connect1291.NodeField := 'keyValue';
connect1291.ProtoField := 'r_middle2_keyValue';
{ .AddConnect }
IS1289.Connect := connect1291;
connect1292 := Tconnect.Create;
connect1292.NodeField := 'value_changed';
connect1292.ProtoField := 'r_middle2_changed';
{ .AddConnect }
IS1289.Connect := connect1292;
{ .SetIS }
OrientationInterpolator1288.IS := IS1289;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1288;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1288.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1294 := TOrientationInterpolatorNode.Create;
IS1295 := TIS.Create;
connect1296 := Tconnect.Create;
connect1296.NodeField := 'key';
connect1296.ProtoField := 'r_middle3_key';
{ .AddConnect }
IS1295.Connect := connect1296;
connect1297 := Tconnect.Create;
connect1297.NodeField := 'keyValue';
connect1297.ProtoField := 'r_middle3_keyValue';
{ .AddConnect }
IS1295.Connect := connect1297;
connect1298 := Tconnect.Create;
connect1298.NodeField := 'value_changed';
connect1298.ProtoField := 'r_middle3_changed';
{ .AddConnect }
IS1295.Connect := connect1298;
{ .SetIS }
OrientationInterpolator1294.IS := IS1295;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1294;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1294.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1300 := TOrientationInterpolatorNode.Create;
IS1301 := TIS.Create;
connect1302 := Tconnect.Create;
connect1302.NodeField := 'key';
connect1302.ProtoField := 'r_middle_distal_key';
{ .AddConnect }
IS1301.Connect := connect1302;
connect1303 := Tconnect.Create;
connect1303.NodeField := 'keyValue';
connect1303.ProtoField := 'r_middle_distal_keyValue';
{ .AddConnect }
IS1301.Connect := connect1303;
connect1304 := Tconnect.Create;
connect1304.NodeField := 'value_changed';
connect1304.ProtoField := 'r_middle_distal_changed';
{ .AddConnect }
IS1301.Connect := connect1304;
{ .SetIS }
OrientationInterpolator1300.IS := IS1301;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1300;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1300.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1306 := TOrientationInterpolatorNode.Create;
IS1307 := TIS.Create;
connect1308 := Tconnect.Create;
connect1308.NodeField := 'key';
connect1308.ProtoField := 'r_middle_metacarpal_key';
{ .AddConnect }
IS1307.Connect := connect1308;
connect1309 := Tconnect.Create;
connect1309.NodeField := 'keyValue';
connect1309.ProtoField := 'r_middle_metacarpal_keyValue';
{ .AddConnect }
IS1307.Connect := connect1309;
connect1310 := Tconnect.Create;
connect1310.NodeField := 'value_changed';
connect1310.ProtoField := 'r_middle_metacarpal_changed';
{ .AddConnect }
IS1307.Connect := connect1310;
{ .SetIS }
OrientationInterpolator1306.IS := IS1307;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1306;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1306.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1312 := TOrientationInterpolatorNode.Create;
IS1313 := TIS.Create;
connect1314 := Tconnect.Create;
connect1314.NodeField := 'key';
connect1314.ProtoField := 'r_middle_middle_key';
{ .AddConnect }
IS1313.Connect := connect1314;
connect1315 := Tconnect.Create;
connect1315.NodeField := 'keyValue';
connect1315.ProtoField := 'r_middle_middle_keyValue';
{ .AddConnect }
IS1313.Connect := connect1315;
connect1316 := Tconnect.Create;
connect1316.NodeField := 'value_changed';
connect1316.ProtoField := 'r_middle_middle_changed';
{ .AddConnect }
IS1313.Connect := connect1316;
{ .SetIS }
OrientationInterpolator1312.IS := IS1313;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1312;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1312.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1318 := TOrientationInterpolatorNode.Create;
IS1319 := TIS.Create;
connect1320 := Tconnect.Create;
connect1320.NodeField := 'key';
connect1320.ProtoField := 'r_middle_proximal_key';
{ .AddConnect }
IS1319.Connect := connect1320;
connect1321 := Tconnect.Create;
connect1321.NodeField := 'keyValue';
connect1321.ProtoField := 'r_middle_proximal_keyValue';
{ .AddConnect }
IS1319.Connect := connect1321;
connect1322 := Tconnect.Create;
connect1322.NodeField := 'value_changed';
connect1322.ProtoField := 'r_middle_proximal_changed';
{ .AddConnect }
IS1319.Connect := connect1322;
{ .SetIS }
OrientationInterpolator1318.IS := IS1319;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1318;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1318.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1324 := TOrientationInterpolatorNode.Create;
IS1325 := TIS.Create;
connect1326 := Tconnect.Create;
connect1326.NodeField := 'key';
connect1326.ProtoField := 'r_midproximal_key';
{ .AddConnect }
IS1325.Connect := connect1326;
connect1327 := Tconnect.Create;
connect1327.NodeField := 'keyValue';
connect1327.ProtoField := 'r_midproximal_keyValue';
{ .AddConnect }
IS1325.Connect := connect1327;
connect1328 := Tconnect.Create;
connect1328.NodeField := 'value_changed';
connect1328.ProtoField := 'r_midproximal_changed';
{ .AddConnect }
IS1325.Connect := connect1328;
{ .SetIS }
OrientationInterpolator1324.IS := IS1325;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1324;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1324.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1330 := TOrientationInterpolatorNode.Create;
IS1331 := TIS.Create;
connect1332 := Tconnect.Create;
connect1332.NodeField := 'key';
connect1332.ProtoField := 'r_midtarsal_key';
{ .AddConnect }
IS1331.Connect := connect1332;
connect1333 := Tconnect.Create;
connect1333.NodeField := 'keyValue';
connect1333.ProtoField := 'r_midtarsal_keyValue';
{ .AddConnect }
IS1331.Connect := connect1333;
connect1334 := Tconnect.Create;
connect1334.NodeField := 'value_changed';
connect1334.ProtoField := 'r_midtarsal_changed';
{ .AddConnect }
IS1331.Connect := connect1334;
{ .SetIS }
OrientationInterpolator1330.IS := IS1331;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1330;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1330.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1336 := TOrientationInterpolatorNode.Create;
IS1337 := TIS.Create;
connect1338 := Tconnect.Create;
connect1338.NodeField := 'key';
connect1338.ProtoField := 'r_pinky0_key';
{ .AddConnect }
IS1337.Connect := connect1338;
connect1339 := Tconnect.Create;
connect1339.NodeField := 'keyValue';
connect1339.ProtoField := 'r_pinky0_keyValue';
{ .AddConnect }
IS1337.Connect := connect1339;
connect1340 := Tconnect.Create;
connect1340.NodeField := 'value_changed';
connect1340.ProtoField := 'r_pinky0_changed';
{ .AddConnect }
IS1337.Connect := connect1340;
{ .SetIS }
OrientationInterpolator1336.IS := IS1337;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1336;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1336.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1342 := TOrientationInterpolatorNode.Create;
IS1343 := TIS.Create;
connect1344 := Tconnect.Create;
connect1344.NodeField := 'key';
connect1344.ProtoField := 'r_pinky1_key';
{ .AddConnect }
IS1343.Connect := connect1344;
connect1345 := Tconnect.Create;
connect1345.NodeField := 'keyValue';
connect1345.ProtoField := 'r_pinky1_keyValue';
{ .AddConnect }
IS1343.Connect := connect1345;
connect1346 := Tconnect.Create;
connect1346.NodeField := 'value_changed';
connect1346.ProtoField := 'r_pinky1_changed';
{ .AddConnect }
IS1343.Connect := connect1346;
{ .SetIS }
OrientationInterpolator1342.IS := IS1343;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1342;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1342.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1348 := TOrientationInterpolatorNode.Create;
IS1349 := TIS.Create;
connect1350 := Tconnect.Create;
connect1350.NodeField := 'key';
connect1350.ProtoField := 'r_pinky2_key';
{ .AddConnect }
IS1349.Connect := connect1350;
connect1351 := Tconnect.Create;
connect1351.NodeField := 'keyValue';
connect1351.ProtoField := 'r_pinky2_keyValue';
{ .AddConnect }
IS1349.Connect := connect1351;
connect1352 := Tconnect.Create;
connect1352.NodeField := 'value_changed';
connect1352.ProtoField := 'r_pinky2_changed';
{ .AddConnect }
IS1349.Connect := connect1352;
{ .SetIS }
OrientationInterpolator1348.IS := IS1349;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1348;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1348.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1354 := TOrientationInterpolatorNode.Create;
IS1355 := TIS.Create;
connect1356 := Tconnect.Create;
connect1356.NodeField := 'key';
connect1356.ProtoField := 'r_pinky3_key';
{ .AddConnect }
IS1355.Connect := connect1356;
connect1357 := Tconnect.Create;
connect1357.NodeField := 'keyValue';
connect1357.ProtoField := 'r_pinky3_keyValue';
{ .AddConnect }
IS1355.Connect := connect1357;
connect1358 := Tconnect.Create;
connect1358.NodeField := 'value_changed';
connect1358.ProtoField := 'r_pinky3_changed';
{ .AddConnect }
IS1355.Connect := connect1358;
{ .SetIS }
OrientationInterpolator1354.IS := IS1355;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1354;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1354.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1360 := TOrientationInterpolatorNode.Create;
IS1361 := TIS.Create;
connect1362 := Tconnect.Create;
connect1362.NodeField := 'key';
connect1362.ProtoField := 'r_pinky_distal_key';
{ .AddConnect }
IS1361.Connect := connect1362;
connect1363 := Tconnect.Create;
connect1363.NodeField := 'keyValue';
connect1363.ProtoField := 'r_pinky_distal_keyValue';
{ .AddConnect }
IS1361.Connect := connect1363;
connect1364 := Tconnect.Create;
connect1364.NodeField := 'value_changed';
connect1364.ProtoField := 'r_pinky_distal_changed';
{ .AddConnect }
IS1361.Connect := connect1364;
{ .SetIS }
OrientationInterpolator1360.IS := IS1361;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1360;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1360.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1366 := TOrientationInterpolatorNode.Create;
IS1367 := TIS.Create;
connect1368 := Tconnect.Create;
connect1368.NodeField := 'key';
connect1368.ProtoField := 'r_pinky_metacarpal_key';
{ .AddConnect }
IS1367.Connect := connect1368;
connect1369 := Tconnect.Create;
connect1369.NodeField := 'keyValue';
connect1369.ProtoField := 'r_pinky_metacarpal_keyValue';
{ .AddConnect }
IS1367.Connect := connect1369;
connect1370 := Tconnect.Create;
connect1370.NodeField := 'value_changed';
connect1370.ProtoField := 'r_pinky_metacarpal_changed';
{ .AddConnect }
IS1367.Connect := connect1370;
{ .SetIS }
OrientationInterpolator1366.IS := IS1367;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1366;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1366.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1372 := TOrientationInterpolatorNode.Create;
IS1373 := TIS.Create;
connect1374 := Tconnect.Create;
connect1374.NodeField := 'key';
connect1374.ProtoField := 'r_pinky_middle_key';
{ .AddConnect }
IS1373.Connect := connect1374;
connect1375 := Tconnect.Create;
connect1375.NodeField := 'keyValue';
connect1375.ProtoField := 'r_pinky_middle_keyValue';
{ .AddConnect }
IS1373.Connect := connect1375;
connect1376 := Tconnect.Create;
connect1376.NodeField := 'value_changed';
connect1376.ProtoField := 'r_pinky_middle_changed';
{ .AddConnect }
IS1373.Connect := connect1376;
{ .SetIS }
OrientationInterpolator1372.IS := IS1373;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1372;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1372.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1378 := TOrientationInterpolatorNode.Create;
IS1379 := TIS.Create;
connect1380 := Tconnect.Create;
connect1380.NodeField := 'key';
connect1380.ProtoField := 'r_pinky_proximal_key';
{ .AddConnect }
IS1379.Connect := connect1380;
connect1381 := Tconnect.Create;
connect1381.NodeField := 'keyValue';
connect1381.ProtoField := 'r_pinky_proximal_keyValue';
{ .AddConnect }
IS1379.Connect := connect1381;
connect1382 := Tconnect.Create;
connect1382.NodeField := 'value_changed';
connect1382.ProtoField := 'r_pinky_proximal_changed';
{ .AddConnect }
IS1379.Connect := connect1382;
{ .SetIS }
OrientationInterpolator1378.IS := IS1379;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1378;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1378.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1384 := TOrientationInterpolatorNode.Create;
IS1385 := TIS.Create;
connect1386 := Tconnect.Create;
connect1386.NodeField := 'key';
connect1386.ProtoField := 'r_ring0_key';
{ .AddConnect }
IS1385.Connect := connect1386;
connect1387 := Tconnect.Create;
connect1387.NodeField := 'keyValue';
connect1387.ProtoField := 'r_ring0_keyValue';
{ .AddConnect }
IS1385.Connect := connect1387;
connect1388 := Tconnect.Create;
connect1388.NodeField := 'value_changed';
connect1388.ProtoField := 'r_ring0_changed';
{ .AddConnect }
IS1385.Connect := connect1388;
{ .SetIS }
OrientationInterpolator1384.IS := IS1385;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1384;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1384.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1390 := TOrientationInterpolatorNode.Create;
IS1391 := TIS.Create;
connect1392 := Tconnect.Create;
connect1392.NodeField := 'key';
connect1392.ProtoField := 'r_ring1_key';
{ .AddConnect }
IS1391.Connect := connect1392;
connect1393 := Tconnect.Create;
connect1393.NodeField := 'keyValue';
connect1393.ProtoField := 'r_ring1_keyValue';
{ .AddConnect }
IS1391.Connect := connect1393;
connect1394 := Tconnect.Create;
connect1394.NodeField := 'value_changed';
connect1394.ProtoField := 'r_ring1_changed';
{ .AddConnect }
IS1391.Connect := connect1394;
{ .SetIS }
OrientationInterpolator1390.IS := IS1391;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1390;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1390.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1396 := TOrientationInterpolatorNode.Create;
IS1397 := TIS.Create;
connect1398 := Tconnect.Create;
connect1398.NodeField := 'key';
connect1398.ProtoField := 'r_ring2_key';
{ .AddConnect }
IS1397.Connect := connect1398;
connect1399 := Tconnect.Create;
connect1399.NodeField := 'keyValue';
connect1399.ProtoField := 'r_ring2_keyValue';
{ .AddConnect }
IS1397.Connect := connect1399;
connect1400 := Tconnect.Create;
connect1400.NodeField := 'value_changed';
connect1400.ProtoField := 'r_ring2_changed';
{ .AddConnect }
IS1397.Connect := connect1400;
{ .SetIS }
OrientationInterpolator1396.IS := IS1397;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1396;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1396.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1402 := TOrientationInterpolatorNode.Create;
IS1403 := TIS.Create;
connect1404 := Tconnect.Create;
connect1404.NodeField := 'key';
connect1404.ProtoField := 'r_ring3_key';
{ .AddConnect }
IS1403.Connect := connect1404;
connect1405 := Tconnect.Create;
connect1405.NodeField := 'keyValue';
connect1405.ProtoField := 'r_ring3_keyValue';
{ .AddConnect }
IS1403.Connect := connect1405;
connect1406 := Tconnect.Create;
connect1406.NodeField := 'value_changed';
connect1406.ProtoField := 'r_ring3_changed';
{ .AddConnect }
IS1403.Connect := connect1406;
{ .SetIS }
OrientationInterpolator1402.IS := IS1403;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1402;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1402.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1408 := TOrientationInterpolatorNode.Create;
IS1409 := TIS.Create;
connect1410 := Tconnect.Create;
connect1410.NodeField := 'key';
connect1410.ProtoField := 'r_ring_distal_key';
{ .AddConnect }
IS1409.Connect := connect1410;
connect1411 := Tconnect.Create;
connect1411.NodeField := 'keyValue';
connect1411.ProtoField := 'r_ring_distal_keyValue';
{ .AddConnect }
IS1409.Connect := connect1411;
connect1412 := Tconnect.Create;
connect1412.NodeField := 'value_changed';
connect1412.ProtoField := 'r_ring_distal_changed';
{ .AddConnect }
IS1409.Connect := connect1412;
{ .SetIS }
OrientationInterpolator1408.IS := IS1409;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1408;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1408.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1414 := TOrientationInterpolatorNode.Create;
IS1415 := TIS.Create;
connect1416 := Tconnect.Create;
connect1416.NodeField := 'key';
connect1416.ProtoField := 'r_ring_metacarpal_key';
{ .AddConnect }
IS1415.Connect := connect1416;
connect1417 := Tconnect.Create;
connect1417.NodeField := 'keyValue';
connect1417.ProtoField := 'r_ring_metacarpal_keyValue';
{ .AddConnect }
IS1415.Connect := connect1417;
connect1418 := Tconnect.Create;
connect1418.NodeField := 'value_changed';
connect1418.ProtoField := 'r_ring_metacarpal_changed';
{ .AddConnect }
IS1415.Connect := connect1418;
{ .SetIS }
OrientationInterpolator1414.IS := IS1415;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1414;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1414.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1420 := TOrientationInterpolatorNode.Create;
IS1421 := TIS.Create;
connect1422 := Tconnect.Create;
connect1422.NodeField := 'key';
connect1422.ProtoField := 'r_ring_middle_key';
{ .AddConnect }
IS1421.Connect := connect1422;
connect1423 := Tconnect.Create;
connect1423.NodeField := 'keyValue';
connect1423.ProtoField := 'r_ring_middle_keyValue';
{ .AddConnect }
IS1421.Connect := connect1423;
connect1424 := Tconnect.Create;
connect1424.NodeField := 'value_changed';
connect1424.ProtoField := 'r_ring_middle_changed';
{ .AddConnect }
IS1421.Connect := connect1424;
{ .SetIS }
OrientationInterpolator1420.IS := IS1421;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1420;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1420.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1426 := TOrientationInterpolatorNode.Create;
IS1427 := TIS.Create;
connect1428 := Tconnect.Create;
connect1428.NodeField := 'key';
connect1428.ProtoField := 'r_ring_proximal_key';
{ .AddConnect }
IS1427.Connect := connect1428;
connect1429 := Tconnect.Create;
connect1429.NodeField := 'keyValue';
connect1429.ProtoField := 'r_ring_proximal_keyValue';
{ .AddConnect }
IS1427.Connect := connect1429;
connect1430 := Tconnect.Create;
connect1430.NodeField := 'value_changed';
connect1430.ProtoField := 'r_ring_proximal_changed';
{ .AddConnect }
IS1427.Connect := connect1430;
{ .SetIS }
OrientationInterpolator1426.IS := IS1427;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1426;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1426.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1432 := TOrientationInterpolatorNode.Create;
IS1433 := TIS.Create;
connect1434 := Tconnect.Create;
connect1434.NodeField := 'key';
connect1434.ProtoField := 'r_scapula_key';
{ .AddConnect }
IS1433.Connect := connect1434;
connect1435 := Tconnect.Create;
connect1435.NodeField := 'keyValue';
connect1435.ProtoField := 'r_scapula_keyValue';
{ .AddConnect }
IS1433.Connect := connect1435;
connect1436 := Tconnect.Create;
connect1436.NodeField := 'value_changed';
connect1436.ProtoField := 'r_scapula_changed';
{ .AddConnect }
IS1433.Connect := connect1436;
{ .SetIS }
OrientationInterpolator1432.IS := IS1433;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1432;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1432.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1438 := TOrientationInterpolatorNode.Create;
IS1439 := TIS.Create;
connect1440 := Tconnect.Create;
connect1440.NodeField := 'key';
connect1440.ProtoField := 'r_shoulder_key';
{ .AddConnect }
IS1439.Connect := connect1440;
connect1441 := Tconnect.Create;
connect1441.NodeField := 'keyValue';
connect1441.ProtoField := 'r_shoulder_keyValue';
{ .AddConnect }
IS1439.Connect := connect1441;
connect1442 := Tconnect.Create;
connect1442.NodeField := 'value_changed';
connect1442.ProtoField := 'r_shoulder_changed';
{ .AddConnect }
IS1439.Connect := connect1442;
{ .SetIS }
OrientationInterpolator1438.IS := IS1439;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1438;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1438.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1444 := TOrientationInterpolatorNode.Create;
IS1445 := TIS.Create;
connect1446 := Tconnect.Create;
connect1446.NodeField := 'key';
connect1446.ProtoField := 'r_sternoclavicular_key';
{ .AddConnect }
IS1445.Connect := connect1446;
connect1447 := Tconnect.Create;
connect1447.NodeField := 'keyValue';
connect1447.ProtoField := 'r_sternoclavicular_keyValue';
{ .AddConnect }
IS1445.Connect := connect1447;
connect1448 := Tconnect.Create;
connect1448.NodeField := 'value_changed';
connect1448.ProtoField := 'r_sternoclavicular_changed';
{ .AddConnect }
IS1445.Connect := connect1448;
{ .SetIS }
OrientationInterpolator1444.IS := IS1445;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1444;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1444.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1450 := TOrientationInterpolatorNode.Create;
IS1451 := TIS.Create;
connect1452 := Tconnect.Create;
connect1452.NodeField := 'key';
connect1452.ProtoField := 'r_subtalar_key';
{ .AddConnect }
IS1451.Connect := connect1452;
connect1453 := Tconnect.Create;
connect1453.NodeField := 'keyValue';
connect1453.ProtoField := 'r_subtalar_keyValue';
{ .AddConnect }
IS1451.Connect := connect1453;
connect1454 := Tconnect.Create;
connect1454.NodeField := 'value_changed';
connect1454.ProtoField := 'r_subtalar_changed';
{ .AddConnect }
IS1451.Connect := connect1454;
{ .SetIS }
OrientationInterpolator1450.IS := IS1451;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1450;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1450.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1456 := TOrientationInterpolatorNode.Create;
IS1457 := TIS.Create;
connect1458 := Tconnect.Create;
connect1458.NodeField := 'key';
connect1458.ProtoField := 'r_thigh_key';
{ .AddConnect }
IS1457.Connect := connect1458;
connect1459 := Tconnect.Create;
connect1459.NodeField := 'keyValue';
connect1459.ProtoField := 'r_thigh_keyValue';
{ .AddConnect }
IS1457.Connect := connect1459;
connect1460 := Tconnect.Create;
connect1460.NodeField := 'value_changed';
connect1460.ProtoField := 'r_thigh_changed';
{ .AddConnect }
IS1457.Connect := connect1460;
{ .SetIS }
OrientationInterpolator1456.IS := IS1457;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1456;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1456.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1462 := TOrientationInterpolatorNode.Create;
IS1463 := TIS.Create;
connect1464 := Tconnect.Create;
connect1464.NodeField := 'key';
connect1464.ProtoField := 'r_thumb1_key';
{ .AddConnect }
IS1463.Connect := connect1464;
connect1465 := Tconnect.Create;
connect1465.NodeField := 'keyValue';
connect1465.ProtoField := 'r_thumb1_keyValue';
{ .AddConnect }
IS1463.Connect := connect1465;
connect1466 := Tconnect.Create;
connect1466.NodeField := 'value_changed';
connect1466.ProtoField := 'r_thumb1_changed';
{ .AddConnect }
IS1463.Connect := connect1466;
{ .SetIS }
OrientationInterpolator1462.IS := IS1463;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1462;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1462.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
IS1469 := TIS.Create;
connect1470 := Tconnect.Create;
connect1470.NodeField := 'key';
connect1470.ProtoField := 'r_thumb2_key';
{ .AddConnect }
IS1469.Connect := connect1470;
connect1471 := Tconnect.Create;
connect1471.NodeField := 'keyValue';
connect1471.ProtoField := 'r_thumb2_keyValue';
{ .AddConnect }
IS1469.Connect := connect1471;
connect1472 := Tconnect.Create;
connect1472.NodeField := 'value_changed';
connect1472.ProtoField := 'r_thumb2_changed';
{ .AddConnect }
IS1469.Connect := connect1472;
{ .SetIS }
OrientationInterpolator1468.IS := IS1469;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1468;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1468.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
IS1475 := TIS.Create;
connect1476 := Tconnect.Create;
connect1476.NodeField := 'key';
connect1476.ProtoField := 'r_thumb3_key';
{ .AddConnect }
IS1475.Connect := connect1476;
connect1477 := Tconnect.Create;
connect1477.NodeField := 'keyValue';
connect1477.ProtoField := 'r_thumb3_keyValue';
{ .AddConnect }
IS1475.Connect := connect1477;
connect1478 := Tconnect.Create;
connect1478.NodeField := 'value_changed';
connect1478.ProtoField := 'r_thumb3_changed';
{ .AddConnect }
IS1475.Connect := connect1478;
{ .SetIS }
OrientationInterpolator1474.IS := IS1475;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1474;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1474.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
IS1481 := TIS.Create;
connect1482 := Tconnect.Create;
connect1482.NodeField := 'key';
connect1482.ProtoField := 'r_thumb_distal_key';
{ .AddConnect }
IS1481.Connect := connect1482;
connect1483 := Tconnect.Create;
connect1483.NodeField := 'keyValue';
connect1483.ProtoField := 'r_thumb_distal_keyValue';
{ .AddConnect }
IS1481.Connect := connect1483;
connect1484 := Tconnect.Create;
connect1484.NodeField := 'value_changed';
connect1484.ProtoField := 'r_thumb_distal_changed';
{ .AddConnect }
IS1481.Connect := connect1484;
{ .SetIS }
OrientationInterpolator1480.IS := IS1481;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1480;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1480.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1486 := TOrientationInterpolatorNode.Create;
IS1487 := TIS.Create;
connect1488 := Tconnect.Create;
connect1488.NodeField := 'key';
connect1488.ProtoField := 'r_thumb_metacarpal_key';
{ .AddConnect }
IS1487.Connect := connect1488;
connect1489 := Tconnect.Create;
connect1489.NodeField := 'keyValue';
connect1489.ProtoField := 'r_thumb_metacarpal_keyValue';
{ .AddConnect }
IS1487.Connect := connect1489;
connect1490 := Tconnect.Create;
connect1490.NodeField := 'value_changed';
connect1490.ProtoField := 'r_thumb_metacarpal_changed';
{ .AddConnect }
IS1487.Connect := connect1490;
{ .SetIS }
OrientationInterpolator1486.IS := IS1487;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1486;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1486.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1492 := TOrientationInterpolatorNode.Create;
IS1493 := TIS.Create;
connect1494 := Tconnect.Create;
connect1494.NodeField := 'key';
connect1494.ProtoField := 'r_thumb_proximal_key';
{ .AddConnect }
IS1493.Connect := connect1494;
connect1495 := Tconnect.Create;
connect1495.NodeField := 'keyValue';
connect1495.ProtoField := 'r_thumb_proximal_keyValue';
{ .AddConnect }
IS1493.Connect := connect1495;
connect1496 := Tconnect.Create;
connect1496.NodeField := 'value_changed';
connect1496.ProtoField := 'r_thumb_proximal_changed';
{ .AddConnect }
IS1493.Connect := connect1496;
{ .SetIS }
OrientationInterpolator1492.IS := IS1493;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1492;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1492.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1498 := TOrientationInterpolatorNode.Create;
IS1499 := TIS.Create;
connect1500 := Tconnect.Create;
connect1500.NodeField := 'key';
connect1500.ProtoField := 'r_upperarm_key';
{ .AddConnect }
IS1499.Connect := connect1500;
connect1501 := Tconnect.Create;
connect1501.NodeField := 'keyValue';
connect1501.ProtoField := 'r_upperarm_keyValue';
{ .AddConnect }
IS1499.Connect := connect1501;
connect1502 := Tconnect.Create;
connect1502.NodeField := 'value_changed';
connect1502.ProtoField := 'r_upperarm_changed';
{ .AddConnect }
IS1499.Connect := connect1502;
{ .SetIS }
OrientationInterpolator1498.IS := IS1499;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1498;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1498.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1504 := TOrientationInterpolatorNode.Create;
IS1505 := TIS.Create;
connect1506 := Tconnect.Create;
connect1506.NodeField := 'key';
connect1506.ProtoField := 'r_wrist_key';
{ .AddConnect }
IS1505.Connect := connect1506;
connect1507 := Tconnect.Create;
connect1507.NodeField := 'keyValue';
connect1507.ProtoField := 'r_wrist_keyValue';
{ .AddConnect }
IS1505.Connect := connect1507;
connect1508 := Tconnect.Create;
connect1508.NodeField := 'value_changed';
connect1508.ProtoField := 'r_wrist_changed';
{ .AddConnect }
IS1505.Connect := connect1508;
{ .SetIS }
OrientationInterpolator1504.IS := IS1505;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1504;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1504.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1510 := TOrientationInterpolatorNode.Create;
IS1511 := TIS.Create;
connect1512 := Tconnect.Create;
connect1512.NodeField := 'key';
connect1512.ProtoField := 'sacroiliac_key';
{ .AddConnect }
IS1511.Connect := connect1512;
connect1513 := Tconnect.Create;
connect1513.NodeField := 'keyValue';
connect1513.ProtoField := 'sacroiliac_keyValue';
{ .AddConnect }
IS1511.Connect := connect1513;
connect1514 := Tconnect.Create;
connect1514.NodeField := 'value_changed';
connect1514.ProtoField := 'sacroiliac_changed';
{ .AddConnect }
IS1511.Connect := connect1514;
{ .SetIS }
OrientationInterpolator1510.IS := IS1511;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1510;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1510.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1516 := TOrientationInterpolatorNode.Create;
IS1517 := TIS.Create;
connect1518 := Tconnect.Create;
connect1518.NodeField := 'key';
connect1518.ProtoField := 'sacrum_key';
{ .AddConnect }
IS1517.Connect := connect1518;
connect1519 := Tconnect.Create;
connect1519.NodeField := 'keyValue';
connect1519.ProtoField := 'sacrum_keyValue';
{ .AddConnect }
IS1517.Connect := connect1519;
connect1520 := Tconnect.Create;
connect1520.NodeField := 'value_changed';
connect1520.ProtoField := 'sacrum_changed';
{ .AddConnect }
IS1517.Connect := connect1520;
{ .SetIS }
OrientationInterpolator1516.IS := IS1517;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1516;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1516.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1522 := TOrientationInterpolatorNode.Create;
IS1523 := TIS.Create;
connect1524 := Tconnect.Create;
connect1524.NodeField := 'key';
connect1524.ProtoField := 'skull_key';
{ .AddConnect }
IS1523.Connect := connect1524;
connect1525 := Tconnect.Create;
connect1525.NodeField := 'keyValue';
connect1525.ProtoField := 'skull_keyValue';
{ .AddConnect }
IS1523.Connect := connect1525;
connect1526 := Tconnect.Create;
connect1526.NodeField := 'value_changed';
connect1526.ProtoField := 'skull_changed';
{ .AddConnect }
IS1523.Connect := connect1526;
{ .SetIS }
OrientationInterpolator1522.IS := IS1523;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1522;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1522.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1528 := TOrientationInterpolatorNode.Create;
IS1529 := TIS.Create;
connect1530 := Tconnect.Create;
connect1530.NodeField := 'key';
connect1530.ProtoField := 'skullbase_key';
{ .AddConnect }
IS1529.Connect := connect1530;
connect1531 := Tconnect.Create;
connect1531.NodeField := 'keyValue';
connect1531.ProtoField := 'skullbase_keyValue';
{ .AddConnect }
IS1529.Connect := connect1531;
connect1532 := Tconnect.Create;
connect1532.NodeField := 'value_changed';
connect1532.ProtoField := 'skullbase_changed';
{ .AddConnect }
IS1529.Connect := connect1532;
{ .SetIS }
OrientationInterpolator1528.IS := IS1529;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1528;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1528.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1534 := TOrientationInterpolatorNode.Create;
IS1535 := TIS.Create;
connect1536 := Tconnect.Create;
connect1536.NodeField := 'key';
connect1536.ProtoField := 't1_key';
{ .AddConnect }
IS1535.Connect := connect1536;
connect1537 := Tconnect.Create;
connect1537.NodeField := 'keyValue';
connect1537.ProtoField := 't1_keyValue';
{ .AddConnect }
IS1535.Connect := connect1537;
connect1538 := Tconnect.Create;
connect1538.NodeField := 'value_changed';
connect1538.ProtoField := 't1_changed';
{ .AddConnect }
IS1535.Connect := connect1538;
{ .SetIS }
OrientationInterpolator1534.IS := IS1535;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1534;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1534.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1540 := TOrientationInterpolatorNode.Create;
IS1541 := TIS.Create;
connect1542 := Tconnect.Create;
connect1542.NodeField := 'key';
connect1542.ProtoField := 't2_key';
{ .AddConnect }
IS1541.Connect := connect1542;
connect1543 := Tconnect.Create;
connect1543.NodeField := 'keyValue';
connect1543.ProtoField := 't2_keyValue';
{ .AddConnect }
IS1541.Connect := connect1543;
connect1544 := Tconnect.Create;
connect1544.NodeField := 'value_changed';
connect1544.ProtoField := 't2_changed';
{ .AddConnect }
IS1541.Connect := connect1544;
{ .SetIS }
OrientationInterpolator1540.IS := IS1541;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1540;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1540.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1546 := TOrientationInterpolatorNode.Create;
IS1547 := TIS.Create;
connect1548 := Tconnect.Create;
connect1548.NodeField := 'key';
connect1548.ProtoField := 't3_key';
{ .AddConnect }
IS1547.Connect := connect1548;
connect1549 := Tconnect.Create;
connect1549.NodeField := 'keyValue';
connect1549.ProtoField := 't3_keyValue';
{ .AddConnect }
IS1547.Connect := connect1549;
connect1550 := Tconnect.Create;
connect1550.NodeField := 'value_changed';
connect1550.ProtoField := 't3_changed';
{ .AddConnect }
IS1547.Connect := connect1550;
{ .SetIS }
OrientationInterpolator1546.IS := IS1547;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1546;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1546.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1552 := TOrientationInterpolatorNode.Create;
IS1553 := TIS.Create;
connect1554 := Tconnect.Create;
connect1554.NodeField := 'key';
connect1554.ProtoField := 't4_key';
{ .AddConnect }
IS1553.Connect := connect1554;
connect1555 := Tconnect.Create;
connect1555.NodeField := 'keyValue';
connect1555.ProtoField := 't4_keyValue';
{ .AddConnect }
IS1553.Connect := connect1555;
connect1556 := Tconnect.Create;
connect1556.NodeField := 'value_changed';
connect1556.ProtoField := 't4_changed';
{ .AddConnect }
IS1553.Connect := connect1556;
{ .SetIS }
OrientationInterpolator1552.IS := IS1553;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1552;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1552.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1558 := TOrientationInterpolatorNode.Create;
IS1559 := TIS.Create;
connect1560 := Tconnect.Create;
connect1560.NodeField := 'key';
connect1560.ProtoField := 't5_key';
{ .AddConnect }
IS1559.Connect := connect1560;
connect1561 := Tconnect.Create;
connect1561.NodeField := 'keyValue';
connect1561.ProtoField := 't5_keyValue';
{ .AddConnect }
IS1559.Connect := connect1561;
connect1562 := Tconnect.Create;
connect1562.NodeField := 'value_changed';
connect1562.ProtoField := 't5_changed';
{ .AddConnect }
IS1559.Connect := connect1562;
{ .SetIS }
OrientationInterpolator1558.IS := IS1559;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1558;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1558.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1564 := TOrientationInterpolatorNode.Create;
IS1565 := TIS.Create;
connect1566 := Tconnect.Create;
connect1566.NodeField := 'key';
connect1566.ProtoField := 't6_key';
{ .AddConnect }
IS1565.Connect := connect1566;
connect1567 := Tconnect.Create;
connect1567.NodeField := 'keyValue';
connect1567.ProtoField := 't6_keyValue';
{ .AddConnect }
IS1565.Connect := connect1567;
connect1568 := Tconnect.Create;
connect1568.NodeField := 'value_changed';
connect1568.ProtoField := 't6_changed';
{ .AddConnect }
IS1565.Connect := connect1568;
{ .SetIS }
OrientationInterpolator1564.IS := IS1565;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1564;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1564.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1570 := TOrientationInterpolatorNode.Create;
IS1571 := TIS.Create;
connect1572 := Tconnect.Create;
connect1572.NodeField := 'key';
connect1572.ProtoField := 't7_key';
{ .AddConnect }
IS1571.Connect := connect1572;
connect1573 := Tconnect.Create;
connect1573.NodeField := 'keyValue';
connect1573.ProtoField := 't7_keyValue';
{ .AddConnect }
IS1571.Connect := connect1573;
connect1574 := Tconnect.Create;
connect1574.NodeField := 'value_changed';
connect1574.ProtoField := 't7_changed';
{ .AddConnect }
IS1571.Connect := connect1574;
{ .SetIS }
OrientationInterpolator1570.IS := IS1571;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1570;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1570.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1576 := TOrientationInterpolatorNode.Create;
IS1577 := TIS.Create;
connect1578 := Tconnect.Create;
connect1578.NodeField := 'key';
connect1578.ProtoField := 't8_key';
{ .AddConnect }
IS1577.Connect := connect1578;
connect1579 := Tconnect.Create;
connect1579.NodeField := 'keyValue';
connect1579.ProtoField := 't8_keyValue';
{ .AddConnect }
IS1577.Connect := connect1579;
connect1580 := Tconnect.Create;
connect1580.NodeField := 'value_changed';
connect1580.ProtoField := 't8_changed';
{ .AddConnect }
IS1577.Connect := connect1580;
{ .SetIS }
OrientationInterpolator1576.IS := IS1577;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1576;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1576.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1582 := TOrientationInterpolatorNode.Create;
IS1583 := TIS.Create;
connect1584 := Tconnect.Create;
connect1584.NodeField := 'key';
connect1584.ProtoField := 't9_key';
{ .AddConnect }
IS1583.Connect := connect1584;
connect1585 := Tconnect.Create;
connect1585.NodeField := 'keyValue';
connect1585.ProtoField := 't9_keyValue';
{ .AddConnect }
IS1583.Connect := connect1585;
connect1586 := Tconnect.Create;
connect1586.NodeField := 'value_changed';
connect1586.ProtoField := 't9_changed';
{ .AddConnect }
IS1583.Connect := connect1586;
{ .SetIS }
OrientationInterpolator1582.IS := IS1583;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1582;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1582.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1588 := TOrientationInterpolatorNode.Create;
IS1589 := TIS.Create;
connect1590 := Tconnect.Create;
connect1590.NodeField := 'key';
connect1590.ProtoField := 't10_key';
{ .AddConnect }
IS1589.Connect := connect1590;
connect1591 := Tconnect.Create;
connect1591.NodeField := 'keyValue';
connect1591.ProtoField := 't10_keyValue';
{ .AddConnect }
IS1589.Connect := connect1591;
connect1592 := Tconnect.Create;
connect1592.NodeField := 'value_changed';
connect1592.ProtoField := 't10_changed';
{ .AddConnect }
IS1589.Connect := connect1592;
{ .SetIS }
OrientationInterpolator1588.IS := IS1589;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1588;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1588.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1594 := TOrientationInterpolatorNode.Create;
IS1595 := TIS.Create;
connect1596 := Tconnect.Create;
connect1596.NodeField := 'key';
connect1596.ProtoField := 't11_key';
{ .AddConnect }
IS1595.Connect := connect1596;
connect1597 := Tconnect.Create;
connect1597.NodeField := 'keyValue';
connect1597.ProtoField := 't11_keyValue';
{ .AddConnect }
IS1595.Connect := connect1597;
connect1598 := Tconnect.Create;
connect1598.NodeField := 'value_changed';
connect1598.ProtoField := 't11_changed';
{ .AddConnect }
IS1595.Connect := connect1598;
{ .SetIS }
OrientationInterpolator1594.IS := IS1595;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1594;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1594.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1600 := TOrientationInterpolatorNode.Create;
IS1601 := TIS.Create;
connect1602 := Tconnect.Create;
connect1602.NodeField := 'key';
connect1602.ProtoField := 't12_key';
{ .AddConnect }
IS1601.Connect := connect1602;
connect1603 := Tconnect.Create;
connect1603.NodeField := 'keyValue';
connect1603.ProtoField := 't12_keyValue';
{ .AddConnect }
IS1601.Connect := connect1603;
connect1604 := Tconnect.Create;
connect1604.NodeField := 'value_changed';
connect1604.ProtoField := 't12_changed';
{ .AddConnect }
IS1601.Connect := connect1604;
{ .SetIS }
OrientationInterpolator1600.IS := IS1601;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1600;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1600.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1606 := TOrientationInterpolatorNode.Create;
IS1607 := TIS.Create;
connect1608 := Tconnect.Create;
connect1608.NodeField := 'key';
connect1608.ProtoField := 'temporomandibular_key';
{ .AddConnect }
IS1607.Connect := connect1608;
connect1609 := Tconnect.Create;
connect1609.NodeField := 'keyValue';
connect1609.ProtoField := 'temporomandibular_keyValue';
{ .AddConnect }
IS1607.Connect := connect1609;
connect1610 := Tconnect.Create;
connect1610.NodeField := 'value_changed';
connect1610.ProtoField := 'temporomandibular_changed';
{ .AddConnect }
IS1607.Connect := connect1610;
{ .SetIS }
OrientationInterpolator1606.IS := IS1607;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1606;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1606.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1612 := TOrientationInterpolatorNode.Create;
IS1613 := TIS.Create;
connect1614 := Tconnect.Create;
connect1614.NodeField := 'key';
connect1614.ProtoField := 'vc1_key';
{ .AddConnect }
IS1613.Connect := connect1614;
connect1615 := Tconnect.Create;
connect1615.NodeField := 'keyValue';
connect1615.ProtoField := 'vc1_keyValue';
{ .AddConnect }
IS1613.Connect := connect1615;
connect1616 := Tconnect.Create;
connect1616.NodeField := 'value_changed';
connect1616.ProtoField := 'vc1_changed';
{ .AddConnect }
IS1613.Connect := connect1616;
{ .SetIS }
OrientationInterpolator1612.IS := IS1613;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1612;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1612.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1618 := TOrientationInterpolatorNode.Create;
IS1619 := TIS.Create;
connect1620 := Tconnect.Create;
connect1620.NodeField := 'key';
connect1620.ProtoField := 'vc2_key';
{ .AddConnect }
IS1619.Connect := connect1620;
connect1621 := Tconnect.Create;
connect1621.NodeField := 'keyValue';
connect1621.ProtoField := 'vc2_keyValue';
{ .AddConnect }
IS1619.Connect := connect1621;
connect1622 := Tconnect.Create;
connect1622.NodeField := 'value_changed';
connect1622.ProtoField := 'vc2_changed';
{ .AddConnect }
IS1619.Connect := connect1622;
{ .SetIS }
OrientationInterpolator1618.IS := IS1619;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1618;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1618.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1624 := TOrientationInterpolatorNode.Create;
IS1625 := TIS.Create;
connect1626 := Tconnect.Create;
connect1626.NodeField := 'key';
connect1626.ProtoField := 'vc3_key';
{ .AddConnect }
IS1625.Connect := connect1626;
connect1627 := Tconnect.Create;
connect1627.NodeField := 'keyValue';
connect1627.ProtoField := 'vc3_keyValue';
{ .AddConnect }
IS1625.Connect := connect1627;
connect1628 := Tconnect.Create;
connect1628.NodeField := 'value_changed';
connect1628.ProtoField := 'vc3_changed';
{ .AddConnect }
IS1625.Connect := connect1628;
{ .SetIS }
OrientationInterpolator1624.IS := IS1625;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1624;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1624.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1630 := TOrientationInterpolatorNode.Create;
IS1631 := TIS.Create;
connect1632 := Tconnect.Create;
connect1632.NodeField := 'key';
connect1632.ProtoField := 'vc4_key';
{ .AddConnect }
IS1631.Connect := connect1632;
connect1633 := Tconnect.Create;
connect1633.NodeField := 'keyValue';
connect1633.ProtoField := 'vc4_keyValue';
{ .AddConnect }
IS1631.Connect := connect1633;
connect1634 := Tconnect.Create;
connect1634.NodeField := 'value_changed';
connect1634.ProtoField := 'vc4_changed';
{ .AddConnect }
IS1631.Connect := connect1634;
{ .SetIS }
OrientationInterpolator1630.IS := IS1631;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1630;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1630.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1636 := TOrientationInterpolatorNode.Create;
IS1637 := TIS.Create;
connect1638 := Tconnect.Create;
connect1638.NodeField := 'key';
connect1638.ProtoField := 'vc5_key';
{ .AddConnect }
IS1637.Connect := connect1638;
connect1639 := Tconnect.Create;
connect1639.NodeField := 'keyValue';
connect1639.ProtoField := 'vc5_keyValue';
{ .AddConnect }
IS1637.Connect := connect1639;
connect1640 := Tconnect.Create;
connect1640.NodeField := 'value_changed';
connect1640.ProtoField := 'vc5_changed';
{ .AddConnect }
IS1637.Connect := connect1640;
{ .SetIS }
OrientationInterpolator1636.IS := IS1637;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1636;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1636.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1642 := TOrientationInterpolatorNode.Create;
IS1643 := TIS.Create;
connect1644 := Tconnect.Create;
connect1644.NodeField := 'key';
connect1644.ProtoField := 'vc6_key';
{ .AddConnect }
IS1643.Connect := connect1644;
connect1645 := Tconnect.Create;
connect1645.NodeField := 'keyValue';
connect1645.ProtoField := 'vc6_keyValue';
{ .AddConnect }
IS1643.Connect := connect1645;
connect1646 := Tconnect.Create;
connect1646.NodeField := 'value_changed';
connect1646.ProtoField := 'vc6_changed';
{ .AddConnect }
IS1643.Connect := connect1646;
{ .SetIS }
OrientationInterpolator1642.IS := IS1643;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1642;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1642.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1648 := TOrientationInterpolatorNode.Create;
IS1649 := TIS.Create;
connect1650 := Tconnect.Create;
connect1650.NodeField := 'key';
connect1650.ProtoField := 'vc7_key';
{ .AddConnect }
IS1649.Connect := connect1650;
connect1651 := Tconnect.Create;
connect1651.NodeField := 'keyValue';
connect1651.ProtoField := 'vc7_keyValue';
{ .AddConnect }
IS1649.Connect := connect1651;
connect1652 := Tconnect.Create;
connect1652.NodeField := 'value_changed';
connect1652.ProtoField := 'vc7_changed';
{ .AddConnect }
IS1649.Connect := connect1652;
{ .SetIS }
OrientationInterpolator1648.IS := IS1649;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1648;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1648.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1654 := TOrientationInterpolatorNode.Create;
IS1655 := TIS.Create;
connect1656 := Tconnect.Create;
connect1656.NodeField := 'key';
connect1656.ProtoField := 'vl1_key';
{ .AddConnect }
IS1655.Connect := connect1656;
connect1657 := Tconnect.Create;
connect1657.NodeField := 'keyValue';
connect1657.ProtoField := 'vl1_keyValue';
{ .AddConnect }
IS1655.Connect := connect1657;
connect1658 := Tconnect.Create;
connect1658.NodeField := 'value_changed';
connect1658.ProtoField := 'vl1_changed';
{ .AddConnect }
IS1655.Connect := connect1658;
{ .SetIS }
OrientationInterpolator1654.IS := IS1655;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1654;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1654.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1660 := TOrientationInterpolatorNode.Create;
IS1661 := TIS.Create;
connect1662 := Tconnect.Create;
connect1662.NodeField := 'key';
connect1662.ProtoField := 'vl2_key';
{ .AddConnect }
IS1661.Connect := connect1662;
connect1663 := Tconnect.Create;
connect1663.NodeField := 'keyValue';
connect1663.ProtoField := 'vl2_keyValue';
{ .AddConnect }
IS1661.Connect := connect1663;
connect1664 := Tconnect.Create;
connect1664.NodeField := 'value_changed';
connect1664.ProtoField := 'vl2_changed';
{ .AddConnect }
IS1661.Connect := connect1664;
{ .SetIS }
OrientationInterpolator1660.IS := IS1661;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1660;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1660.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1666 := TOrientationInterpolatorNode.Create;
IS1667 := TIS.Create;
connect1668 := Tconnect.Create;
connect1668.NodeField := 'key';
connect1668.ProtoField := 'vl3_key';
{ .AddConnect }
IS1667.Connect := connect1668;
connect1669 := Tconnect.Create;
connect1669.NodeField := 'keyValue';
connect1669.ProtoField := 'vl3_keyValue';
{ .AddConnect }
IS1667.Connect := connect1669;
connect1670 := Tconnect.Create;
connect1670.NodeField := 'value_changed';
connect1670.ProtoField := 'vl3_changed';
{ .AddConnect }
IS1667.Connect := connect1670;
{ .SetIS }
OrientationInterpolator1666.IS := IS1667;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1666;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1666.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1672 := TOrientationInterpolatorNode.Create;
IS1673 := TIS.Create;
connect1674 := Tconnect.Create;
connect1674.NodeField := 'key';
connect1674.ProtoField := 'vl4_key';
{ .AddConnect }
IS1673.Connect := connect1674;
connect1675 := Tconnect.Create;
connect1675.NodeField := 'keyValue';
connect1675.ProtoField := 'vl4_keyValue';
{ .AddConnect }
IS1673.Connect := connect1675;
connect1676 := Tconnect.Create;
connect1676.NodeField := 'value_changed';
connect1676.ProtoField := 'vl4_changed';
{ .AddConnect }
IS1673.Connect := connect1676;
{ .SetIS }
OrientationInterpolator1672.IS := IS1673;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1672;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1672.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1678 := TOrientationInterpolatorNode.Create;
IS1679 := TIS.Create;
connect1680 := Tconnect.Create;
connect1680.NodeField := 'key';
connect1680.ProtoField := 'vl5_key';
{ .AddConnect }
IS1679.Connect := connect1680;
connect1681 := Tconnect.Create;
connect1681.NodeField := 'keyValue';
connect1681.ProtoField := 'vl5_keyValue';
{ .AddConnect }
IS1679.Connect := connect1681;
connect1682 := Tconnect.Create;
connect1682.NodeField := 'value_changed';
connect1682.ProtoField := 'vl5_changed';
{ .AddConnect }
IS1679.Connect := connect1682;
{ .SetIS }
OrientationInterpolator1678.IS := IS1679;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1678;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1678.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1684 := TOrientationInterpolatorNode.Create;
IS1685 := TIS.Create;
connect1686 := Tconnect.Create;
connect1686.NodeField := 'key';
connect1686.ProtoField := 'vt1_key';
{ .AddConnect }
IS1685.Connect := connect1686;
connect1687 := Tconnect.Create;
connect1687.NodeField := 'keyValue';
connect1687.ProtoField := 'vt1_keyValue';
{ .AddConnect }
IS1685.Connect := connect1687;
connect1688 := Tconnect.Create;
connect1688.NodeField := 'value_changed';
connect1688.ProtoField := 'vt1_changed';
{ .AddConnect }
IS1685.Connect := connect1688;
{ .SetIS }
OrientationInterpolator1684.IS := IS1685;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1684;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1684.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1690 := TOrientationInterpolatorNode.Create;
IS1691 := TIS.Create;
connect1692 := Tconnect.Create;
connect1692.NodeField := 'key';
connect1692.ProtoField := 'vt2_key';
{ .AddConnect }
IS1691.Connect := connect1692;
connect1693 := Tconnect.Create;
connect1693.NodeField := 'keyValue';
connect1693.ProtoField := 'vt2_keyValue';
{ .AddConnect }
IS1691.Connect := connect1693;
connect1694 := Tconnect.Create;
connect1694.NodeField := 'value_changed';
connect1694.ProtoField := 'vt2_changed';
{ .AddConnect }
IS1691.Connect := connect1694;
{ .SetIS }
OrientationInterpolator1690.IS := IS1691;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1690;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1690.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1696 := TOrientationInterpolatorNode.Create;
IS1697 := TIS.Create;
connect1698 := Tconnect.Create;
connect1698.NodeField := 'key';
connect1698.ProtoField := 'vt3_key';
{ .AddConnect }
IS1697.Connect := connect1698;
connect1699 := Tconnect.Create;
connect1699.NodeField := 'keyValue';
connect1699.ProtoField := 'vt3_keyValue';
{ .AddConnect }
IS1697.Connect := connect1699;
connect1700 := Tconnect.Create;
connect1700.NodeField := 'value_changed';
connect1700.ProtoField := 'vt3_changed';
{ .AddConnect }
IS1697.Connect := connect1700;
{ .SetIS }
OrientationInterpolator1696.IS := IS1697;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1696;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1696.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1702 := TOrientationInterpolatorNode.Create;
IS1703 := TIS.Create;
connect1704 := Tconnect.Create;
connect1704.NodeField := 'key';
connect1704.ProtoField := 'vt4_key';
{ .AddConnect }
IS1703.Connect := connect1704;
connect1705 := Tconnect.Create;
connect1705.NodeField := 'keyValue';
connect1705.ProtoField := 'vt4_keyValue';
{ .AddConnect }
IS1703.Connect := connect1705;
connect1706 := Tconnect.Create;
connect1706.NodeField := 'value_changed';
connect1706.ProtoField := 'vt4_changed';
{ .AddConnect }
IS1703.Connect := connect1706;
{ .SetIS }
OrientationInterpolator1702.IS := IS1703;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1702;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1702.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1708 := TOrientationInterpolatorNode.Create;
IS1709 := TIS.Create;
connect1710 := Tconnect.Create;
connect1710.NodeField := 'key';
connect1710.ProtoField := 'vt5_key';
{ .AddConnect }
IS1709.Connect := connect1710;
connect1711 := Tconnect.Create;
connect1711.NodeField := 'keyValue';
connect1711.ProtoField := 'vt5_keyValue';
{ .AddConnect }
IS1709.Connect := connect1711;
connect1712 := Tconnect.Create;
connect1712.NodeField := 'value_changed';
connect1712.ProtoField := 'vt5_changed';
{ .AddConnect }
IS1709.Connect := connect1712;
{ .SetIS }
OrientationInterpolator1708.IS := IS1709;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1708;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1708.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1714 := TOrientationInterpolatorNode.Create;
IS1715 := TIS.Create;
connect1716 := Tconnect.Create;
connect1716.NodeField := 'key';
connect1716.ProtoField := 'vt6_key';
{ .AddConnect }
IS1715.Connect := connect1716;
connect1717 := Tconnect.Create;
connect1717.NodeField := 'keyValue';
connect1717.ProtoField := 'vt6_keyValue';
{ .AddConnect }
IS1715.Connect := connect1717;
connect1718 := Tconnect.Create;
connect1718.NodeField := 'value_changed';
connect1718.ProtoField := 'vt6_changed';
{ .AddConnect }
IS1715.Connect := connect1718;
{ .SetIS }
OrientationInterpolator1714.IS := IS1715;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1714;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1714.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1720 := TOrientationInterpolatorNode.Create;
IS1721 := TIS.Create;
connect1722 := Tconnect.Create;
connect1722.NodeField := 'key';
connect1722.ProtoField := 'vt7_key';
{ .AddConnect }
IS1721.Connect := connect1722;
connect1723 := Tconnect.Create;
connect1723.NodeField := 'keyValue';
connect1723.ProtoField := 'vt7_keyValue';
{ .AddConnect }
IS1721.Connect := connect1723;
connect1724 := Tconnect.Create;
connect1724.NodeField := 'value_changed';
connect1724.ProtoField := 'vt7_changed';
{ .AddConnect }
IS1721.Connect := connect1724;
{ .SetIS }
OrientationInterpolator1720.IS := IS1721;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1720;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1720.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1726 := TOrientationInterpolatorNode.Create;
IS1727 := TIS.Create;
connect1728 := Tconnect.Create;
connect1728.NodeField := 'key';
connect1728.ProtoField := 'vt8_key';
{ .AddConnect }
IS1727.Connect := connect1728;
connect1729 := Tconnect.Create;
connect1729.NodeField := 'keyValue';
connect1729.ProtoField := 'vt8_keyValue';
{ .AddConnect }
IS1727.Connect := connect1729;
connect1730 := Tconnect.Create;
connect1730.NodeField := 'value_changed';
connect1730.ProtoField := 'vt8_changed';
{ .AddConnect }
IS1727.Connect := connect1730;
{ .SetIS }
OrientationInterpolator1726.IS := IS1727;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1726;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1726.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1732 := TOrientationInterpolatorNode.Create;
IS1733 := TIS.Create;
connect1734 := Tconnect.Create;
connect1734.NodeField := 'key';
connect1734.ProtoField := 'vt9_key';
{ .AddConnect }
IS1733.Connect := connect1734;
connect1735 := Tconnect.Create;
connect1735.NodeField := 'keyValue';
connect1735.ProtoField := 'vt9_keyValue';
{ .AddConnect }
IS1733.Connect := connect1735;
connect1736 := Tconnect.Create;
connect1736.NodeField := 'value_changed';
connect1736.ProtoField := 'vt9_changed';
{ .AddConnect }
IS1733.Connect := connect1736;
{ .SetIS }
OrientationInterpolator1732.IS := IS1733;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1732;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1732.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1738 := TOrientationInterpolatorNode.Create;
IS1739 := TIS.Create;
connect1740 := Tconnect.Create;
connect1740.NodeField := 'key';
connect1740.ProtoField := 'vt10_key';
{ .AddConnect }
IS1739.Connect := connect1740;
connect1741 := Tconnect.Create;
connect1741.NodeField := 'keyValue';
connect1741.ProtoField := 'vt10_keyValue';
{ .AddConnect }
IS1739.Connect := connect1741;
connect1742 := Tconnect.Create;
connect1742.NodeField := 'value_changed';
connect1742.ProtoField := 'vt10_changed';
{ .AddConnect }
IS1739.Connect := connect1742;
{ .SetIS }
OrientationInterpolator1738.IS := IS1739;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1738;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1738.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1744 := TOrientationInterpolatorNode.Create;
IS1745 := TIS.Create;
connect1746 := Tconnect.Create;
connect1746.NodeField := 'key';
connect1746.ProtoField := 'vt11_key';
{ .AddConnect }
IS1745.Connect := connect1746;
connect1747 := Tconnect.Create;
connect1747.NodeField := 'keyValue';
connect1747.ProtoField := 'vt11_keyValue';
{ .AddConnect }
IS1745.Connect := connect1747;
connect1748 := Tconnect.Create;
connect1748.NodeField := 'value_changed';
connect1748.ProtoField := 'vt11_changed';
{ .AddConnect }
IS1745.Connect := connect1748;
{ .SetIS }
OrientationInterpolator1744.IS := IS1745;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1744;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1744.EventSet_fraction);
{ .AddX3DRoute }
OrientationInterpolator1750 := TOrientationInterpolatorNode.Create;
IS1751 := TIS.Create;
connect1752 := Tconnect.Create;
connect1752.NodeField := 'key';
connect1752.ProtoField := 'vt12_key';
{ .AddConnect }
IS1751.Connect := connect1752;
connect1753 := Tconnect.Create;
connect1753.NodeField := 'keyValue';
connect1753.ProtoField := 'vt12_keyValue';
{ .AddConnect }
IS1751.Connect := connect1753;
connect1754 := Tconnect.Create;
connect1754.NodeField := 'value_changed';
connect1754.ProtoField := 'vt12_changed';
{ .AddConnect }
IS1751.Connect := connect1754;
{ .SetIS }
OrientationInterpolator1750.IS := IS1751;
{ .AddOrientationInterpolator }
X3DPrototype603.OrientationInterpolator := OrientationInterpolator1750;
X3DPrototype603.AddRoute(TimeSensor604.EventFraction_changed, OrientationInterpolator1750.EventSet_fraction);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype20.X3DPrototype := X3DPrototype603;
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype20;
X3DPrototype1756 := TX3DPrototype.Create;
X3DPrototype1756.NameField := 'HAnimBodyBehaviorChooser';
X3DPrototype1756.Appinfo := 'The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.';
X3DInterfaceDeclaration1757 := TX3DInterfaceDeclaration.Create(nil);
{ TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs }
{ accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints }
{ shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs }
{ TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName }
{ TODO: consider addBody, removeBody, addBehavior, removeBehavior }
{ TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName }
X3DField1758 := TX3DField.Create;
X3DField1758.NameField := 'supportedLOA';
X3DField1758.AccessType := 'inputOutput';
X3DField1758.Appinfo := 'Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.';
X3DField1758.Type := 'SFInt32';
X3DField1758.Value := '-1';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1758;
X3DField1759 := TX3DField.Create;
X3DField1759.NameField := 'HumanoidArray';
X3DField1759.AccessType := 'initializeOnly';
X3DField1759.Appinfo := '[HAnimHumanoid] nodes only';
X3DField1759.Type := 'MFNode';
{ default NULL }
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1759;
X3DField1760 := TX3DField.Create;
X3DField1760.NameField := 'whichBody';
X3DField1760.AccessType := 'initializeOnly';
X3DField1760.Appinfo := 'whichBody is selected default is initial member of HumanoidArray';
X3DField1760.Type := 'SFInt32';
X3DField1760.Value := '-1';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1760;
X3DField1761 := TX3DField.Create;
X3DField1761.NameField := 'set_whichBody';
X3DField1761.AccessType := 'inputOnly';
X3DField1761.Appinfo := 'whichBody is selected default is none';
X3DField1761.Type := 'SFInt32';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1761;
X3DField1762 := TX3DField.Create;
X3DField1762.NameField := 'whichBody_changed';
X3DField1762.AccessType := 'outputOnly';
X3DField1762.Appinfo := 'whichBody is selected default is none';
X3DField1762.Type := 'SFInt32';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1762;
X3DField1763 := TX3DField.Create;
X3DField1763.NameField := 'hAnimBehaviorNodes';
X3DField1763.AccessType := 'initializeOnly';
X3DField1763.Appinfo := '[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.';
X3DField1763.Type := 'MFNode';
{ default NULL }
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1763;
X3DField1764 := TX3DField.Create;
X3DField1764.NameField := 'enabledBehaviorsArray';
X3DField1764.AccessType := 'initializeOnly';
X3DField1764.Appinfo := 'indicate which HAnimBehavior nodes are activated, empty indicates all enabled true';
X3DField1764.Type := 'MFBool';
{ no default values }
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1764;
X3DField1765 := TX3DField.Create;
X3DField1765.NameField := 'enableBehavior';
X3DField1765.AccessType := 'inputOnly';
X3DField1765.Appinfo := 'enable corresponding behavior identified by index number';
X3DField1765.Type := 'SFInt32';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1765;
X3DField1766 := TX3DField.Create;
X3DField1766.NameField := 'disableBehavior';
X3DField1766.AccessType := 'inputOnly';
X3DField1766.Appinfo := 'disable corresponding behavior identified by index number';
X3DField1766.Type := 'SFInt32';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1766;
X3DField1767 := TX3DField.Create;
X3DField1767.NameField := 'startTime';
X3DField1767.AccessType := 'inputOutput';
X3DField1767.Type := 'SFTime';
X3DField1767.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1767;
X3DField1768 := TX3DField.Create;
X3DField1768.NameField := 'stopTime';
X3DField1768.AccessType := 'inputOutput';
X3DField1768.Type := 'SFTime';
X3DField1768.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration1757.X3DField := X3DField1768;
{ .SetX3DInterfaceDeclaration }
X3DPrototype1756.X3DInterfaceDeclaration := X3DInterfaceDeclaration1757;
X3DPrototype1769 := TX3DPrototype.Create;
Switch1770 := TSwitchNode.Create;
Switch1770.WhichChoice := -1;
IS1771 := TIS.Create;
connect1772 := Tconnect.Create;
connect1772.NodeField := 'whichChoice';
connect1772.ProtoField := 'whichBody';
{ .AddConnect }
IS1771.Connect := connect1772;
connect1773 := Tconnect.Create;
connect1773.NodeField := 'children';
connect1773.ProtoField := 'HumanoidArray';
{ .AddConnect }
IS1771.Connect := connect1773;
{ .SetIS }
Switch1770.IS := IS1771;
{ .SetSwitch }
X3DPrototype1769.Switch := Switch1770;
{ note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless }
Group1774 := TGroupNode.Create;
IS1775 := TIS.Create;
connect1776 := Tconnect.Create;
connect1776.NodeField := 'children';
connect1776.ProtoField := 'hAnimBehaviorNodes';
{ .AddConnect }
IS1775.Connect := connect1776;
{ .SetIS }
Group1774.IS := IS1775;
{ .AddGroup }
X3DPrototype1769.AddChildren([Group1774]);
TimeSensor1777 := TTimeSensorNode.Create;
IS1778 := TIS.Create;
connect1779 := Tconnect.Create;
connect1779.NodeField := 'startTime';
connect1779.ProtoField := 'startTime';
{ .AddConnect }
IS1778.Connect := connect1779;
connect1780 := Tconnect.Create;
connect1780.NodeField := 'stopTime';
connect1780.ProtoField := 'stopTime';
{ .AddConnect }
IS1778.Connect := connect1780;
{ .SetIS }
TimeSensor1777.IS := IS1778;
{ .AddTimeSensor }
X3DPrototype1769.TimeSensor := TimeSensor1777;
Switch1781 := TSwitchNode.Create;
Switch1781.WhichChoice := -1;
IS1782 := TIS.Create;
connect1783 := Tconnect.Create;
connect1783.NodeField := 'whichChoice';
connect1783.ProtoField := 'supportedLOA';
{ .AddConnect }
IS1782.Connect := connect1783;
{ .SetIS }
Switch1781.IS := IS1782;
{ .AddSwitch }
X3DPrototype1769.Switch := Switch1781;
Script1784 := TScriptNode.Create;
Script1784.DirectOutput := True;
Script1784.SetUrl(['HAnimBehaviorPrototypesScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js']);
X3DField1785 := TX3DField.Create;
X3DField1785.NameField := 'HumanoidArray';
X3DField1785.AccessType := 'initializeOnly';
X3DField1785.Appinfo := '[HAnimHumanoid] nodes only';
X3DField1785.Type := 'MFNode';
{ .SetX3DField }
Script1784.X3DField := X3DField1785;
X3DField1786 := TX3DField.Create;
X3DField1786.NameField := 'whichBody';
X3DField1786.AccessType := 'initializeOnly';
X3DField1786.Appinfo := 'whichBody is selected default is none';
X3DField1786.Type := 'SFInt32';
{ .AddX3DField }
Script1784.X3DField := X3DField1786;
X3DField1787 := TX3DField.Create;
X3DField1787.NameField := 'set_whichBody';
X3DField1787.AccessType := 'inputOnly';
X3DField1787.Appinfo := 'whichBody is selected default is none';
X3DField1787.Type := 'SFInt32';
{ .AddX3DField }
Script1784.X3DField := X3DField1787;
X3DField1788 := TX3DField.Create;
X3DField1788.NameField := 'whichBody_changed';
X3DField1788.AccessType := 'outputOnly';
X3DField1788.Appinfo := 'whichBody is selected default is none';
X3DField1788.Type := 'SFInt32';
{ .AddX3DField }
Script1784.X3DField := X3DField1788;
X3DField1789 := TX3DField.Create;
X3DField1789.NameField := 'hAnimBehaviorNodes';
X3DField1789.AccessType := 'initializeOnly';
X3DField1789.Appinfo := '[HAnimBehavior] nodes only';
X3DField1789.Type := 'MFNode';
{ TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed }
{ .AddX3DField }
Script1784.X3DField := X3DField1789;
X3DField1790 := TX3DField.Create;
X3DField1790.NameField := 'enabledBehaviorsArray';
X3DField1790.AccessType := 'initializeOnly';
X3DField1790.Type := 'MFBool';
{ .AddX3DField }
Script1784.X3DField := X3DField1790;
X3DField1791 := TX3DField.Create;
X3DField1791.NameField := 'enableBehavior';
X3DField1791.AccessType := 'inputOnly';
X3DField1791.Appinfo := 'enable corresponding behavior';
X3DField1791.Type := 'SFInt32';
{ .AddX3DField }
Script1784.X3DField := X3DField1791;
X3DField1792 := TX3DField.Create;
X3DField1792.NameField := 'disableBehavior';
X3DField1792.AccessType := 'inputOnly';
X3DField1792.Appinfo := 'enable corresponding behavior';
X3DField1792.Type := 'SFInt32';
{ .AddX3DField }
Script1784.X3DField := X3DField1792;
X3DField1793 := TX3DField.Create;
X3DField1793.NameField := 'timeSensorNode';
X3DField1793.AccessType := 'initializeOnly';
X3DField1793.Type := 'SFNode';
TimeSensor1794 := TimeSensor1777;
{ .SetTimeSensor }
X3DField1793.TimeSensor := TimeSensor1794;
{ .AddX3DField }
Script1784.X3DField := X3DField1793;
X3DField1795 := TX3DField.Create;
X3DField1795.NameField := 'previousBodyIndex';
X3DField1795.AccessType := 'initializeOnly';
X3DField1795.Appinfo := 'remember prior body index to avoid unnecessary ROUTE teardown and creation';
X3DField1795.Type := 'SFInt32';
X3DField1795.Value := '-1';
{ .AddX3DField }
Script1784.X3DField := X3DField1795;
X3DField1796 := TX3DField.Create;
X3DField1796.NameField := 'traceEnabled';
X3DField1796.AccessType := 'initializeOnly';
X3DField1796.Type := 'SFBool';
X3DField1796.Value := 'true';
{ .AddX3DField }
Script1784.X3DField := X3DField1796;
IS1797 := TIS.Create;
connect1798 := Tconnect.Create;
connect1798.NodeField := 'HumanoidArray';
connect1798.ProtoField := 'HumanoidArray';
{ .AddConnect }
IS1797.Connect := connect1798;
connect1799 := Tconnect.Create;
connect1799.NodeField := 'whichBody';
connect1799.ProtoField := 'whichBody';
{ .AddConnect }
IS1797.Connect := connect1799;
connect1800 := Tconnect.Create;
connect1800.NodeField := 'set_whichBody';
connect1800.ProtoField := 'set_whichBody';
{ .AddConnect }
IS1797.Connect := connect1800;
connect1801 := Tconnect.Create;
connect1801.NodeField := 'whichBody_changed';
connect1801.ProtoField := 'whichBody_changed';
{ .AddConnect }
IS1797.Connect := connect1801;
connect1802 := Tconnect.Create;
connect1802.NodeField := 'hAnimBehaviorNodes';
connect1802.ProtoField := 'hAnimBehaviorNodes';
{ .AddConnect }
IS1797.Connect := connect1802;
connect1803 := Tconnect.Create;
connect1803.NodeField := 'enabledBehaviorsArray';
connect1803.ProtoField := 'enabledBehaviorsArray';
{ .AddConnect }
IS1797.Connect := connect1803;
connect1804 := Tconnect.Create;
connect1804.NodeField := 'enableBehavior';
connect1804.ProtoField := 'enableBehavior';
{ .AddConnect }
IS1797.Connect := connect1804;
connect1805 := Tconnect.Create;
connect1805.NodeField := 'disableBehavior';
connect1805.ProtoField := 'disableBehavior';
{ .AddConnect }
IS1797.Connect := connect1805;
{ .SetIS }
Script1784.IS := IS1797;
{ .AddScript }
X3DPrototype1769.Script := Script1784;
{ .AddX3DPrototype }
X3DPrototype1756.X3DPrototype := X3DPrototype1769;
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype1756;
{ TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype. }
X3DPrototype1806 := TX3DPrototypeNode.Create;
X3DPrototype1806.NameField := 'HAnimBehavior';
{ only one PositionInterpolator key/keyValue definition for entire humanoid - optional }
{ must have paired overrides of each key/keyValue array being defined }
MFFloat1807 := TMFFloat.Create(HAnimBehavior2, false, 'HumanoidRoot_translation_key', ([0,0.25,0.5,0.75,1]));
MFFloat1807.NameField := 'HumanoidRoot_translation_key';
MFFloat1807.Value := '0 0.25 0.5 0.75 1';
{ .AddMFFloat }
X3DPrototype1806.MFFloat := MFFloat1807;
MFVec3f1808 := TMFVec3f.Create(HAnimBehavior2, false, 'HumanoidRoot_translation_keyValue', ([Vector3(0,0,0),Vector3(0,0,10),Vector3(0,0,20),Vector3(0,0,30),Vector3(0,0,40),Vector3(0,0,50)]));
MFVec3f1808.NameField := 'HumanoidRoot_translation_keyValue';
MFVec3f1808.Value := '0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50';
{ .AddMFVec3f }
X3DPrototype1806.MFVec3f := MFVec3f1808;
MFFloat1809 := TMFFloat.Create(HAnimBehavior2, false, 'r_ankle_key', ([0,0.5,1]));
MFFloat1809.NameField := 'r_ankle_key';
MFFloat1809.Value := '0 0.5 1';
{ .AddMFFloat }
X3DPrototype1806.MFFloat := MFFloat1809;
MFRotation1810 := TMFRotation.Create(HAnimBehavior2, false, 'r_ankle_keyValue', ([Vector4(0,1,0,0),Vector4(0,1,0,0.2),Vector4(0,1,0,0.4)]));
MFRotation1810.NameField := 'r_ankle_keyValue';
MFRotation1810.Value := '0 1 0 0 0 1 0 0.2 0 1 0 0.4';
{ .AddMFRotation }
X3DPrototype1806.MFRotation := MFRotation1810;
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype1806;
X3DPrototype1811 := TX3DPrototypeNode.Create;
X3DPrototype1811.NameField := 'HAnimBodyBehaviorChooser';
MFNode1812 := TMFNode.Create;
MFNode1812.NameField := 'HumanoidArray';
HAnimHumanoid1813 := THAnimHumanoidNode.Create;
HAnimHumanoid1813.NameField := 'DiamondManLOA-1';
HAnimHumanoid1813.Version := '2.0';
{ .SetHAnimHumanoid }
MFNode1812.HAnimHumanoid := HAnimHumanoid1813;
{ .SetMFNode }
X3DPrototype1811.MFNode := MFNode1812;
SFInt321814 := TSFInt32.Create(HAnimBodyBehaviorChooser2, false, 'whichBody', 0);
SFInt321814.NameField := 'whichBody';
SFInt321814.Value := '0';
{ .AddSFInt32 }
X3DPrototype1811.SFInt32 := SFInt321814;
MFNode1815 := TMFNode.Create;
MFNode1815.NameField := 'hAnimBehaviorNodes';
X3DPrototype1816.NameField := 'HAnimBehavior';
X3DPrototype1816 := X3DPrototype1806;
{ .SetX3DPrototype }
MFNode1815.X3DPrototype := X3DPrototype1816;
{ .AddMFNode }
X3DPrototype1811.MFNode := MFNode1815;
MFBool1817 := TMFBool.Create(HAnimBodyBehaviorChooser2, false, 'enabledBehaviorsArray', (True));
MFBool1817.NameField := 'enabledBehaviorsArray';
MFBool1817.Value := 'true';
{ .AddMFBool }
X3DPrototype1811.MFBool := MFBool1817;
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype1811;
{ .AddGroup }
X3D0.AddChildren([Group18]);
Result := X3D0;
end;

begin
end.
