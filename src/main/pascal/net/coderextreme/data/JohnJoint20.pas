unit JohnJoint20;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateJohnJoint20: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group11: TGroupNode;
Transform12: TTransformNode;
Shape13: TShapeNode;
IndexedLineSet14: TIndexedLineSetNode;
Coordinate15: TCoordinateNode;
Color16: TColorNode;
Group17: TGroupNode;
Transform18: TTransformNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Sphere26: TSphereNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
LineSet31: TLineSetNode;
ColorRGBA32: TColorRGBANode;
Coordinate33: TCoordinateNode;
Transform34: TTransformNode;
Shape35: TShapeNode;
IndexedFaceSet36: TIndexedFaceSetNode;
ColorRGBA37: TColorRGBANode;
Coordinate38: TCoordinateNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
NavigationInfo41: TNavigationInfoNode;
Viewpoint42: TViewpointNode;
HAnimHumanoid43: THAnimHumanoidNode;
Shape44: TShapeNode;
IndexedFaceSet45: TIndexedFaceSetNode;
Coordinate46: TCoordinateNode;
Color47: TColorNode;
Appearance48: TAppearanceNode;
ImageTexture49: TImageTextureNode;
Material50: TMaterialNode;
Coordinate51: TCoordinateNode;
HAnimJoint52: THAnimJointNode;
HAnimSegment53: THAnimSegmentNode;
HAnimDisplacer54: THAnimDisplacerNode;
HAnimDisplacer55: THAnimDisplacerNode;
Transform56: TTransformNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
Shape59: TShapeNode;
LineSet60: TLineSetNode;
Coordinate61: TCoordinateNode;
ColorRGBA62: TColorRGBANode;
HAnimSite63: THAnimSiteNode;
TouchSensor64: TTouchSensorNode;
Shape65: TShapeNode;
HAnimSite66: THAnimSiteNode;
TouchSensor67: TTouchSensorNode;
Shape68: TShapeNode;
HAnimSite69: THAnimSiteNode;
TouchSensor70: TTouchSensorNode;
Shape71: TShapeNode;
HAnimSite72: THAnimSiteNode;
TouchSensor73: TTouchSensorNode;
Shape74: TShapeNode;
HAnimSite75: THAnimSiteNode;
TouchSensor76: TTouchSensorNode;
Shape77: TShapeNode;
HAnimSite78: THAnimSiteNode;
TouchSensor79: TTouchSensorNode;
Shape80: TShapeNode;
HAnimSite81: THAnimSiteNode;
TouchSensor82: TTouchSensorNode;
Shape83: TShapeNode;
HAnimSite84: THAnimSiteNode;
TouchSensor85: TTouchSensorNode;
Shape86: TShapeNode;
HAnimSite87: THAnimSiteNode;
TouchSensor88: TTouchSensorNode;
Shape89: TShapeNode;
HAnimSite90: THAnimSiteNode;
TouchSensor91: TTouchSensorNode;
Shape92: TShapeNode;
Shape93: TShapeNode;
LineSet94: TLineSetNode;
Coordinate95: TCoordinateNode;
ColorRGBA96: TColorRGBANode;
HAnimSite97: THAnimSiteNode;
TouchSensor98: TTouchSensorNode;
Shape99: TShapeNode;
HAnimSite100: THAnimSiteNode;
TouchSensor101: TTouchSensorNode;
Shape102: TShapeNode;
HAnimSite103: THAnimSiteNode;
TouchSensor104: TTouchSensorNode;
Shape105: TShapeNode;
HAnimJoint106: THAnimJointNode;
HAnimSegment107: THAnimSegmentNode;
Transform108: TTransformNode;
Transform109: TTransformNode;
Shape110: TShapeNode;
Shape111: TShapeNode;
LineSet112: TLineSetNode;
Coordinate113: TCoordinateNode;
ColorRGBA114: TColorRGBANode;
HAnimSite115: THAnimSiteNode;
TouchSensor116: TTouchSensorNode;
Shape117: TShapeNode;
HAnimSite118: THAnimSiteNode;
TouchSensor119: TTouchSensorNode;
Shape120: TShapeNode;
HAnimSite121: THAnimSiteNode;
TouchSensor122: TTouchSensorNode;
Shape123: TShapeNode;
HAnimSite124: THAnimSiteNode;
TouchSensor125: TTouchSensorNode;
Shape126: TShapeNode;
Shape127: TShapeNode;
LineSet128: TLineSetNode;
Coordinate129: TCoordinateNode;
ColorRGBA130: TColorRGBANode;
HAnimSite131: THAnimSiteNode;
TouchSensor132: TTouchSensorNode;
Shape133: TShapeNode;
HAnimSite134: THAnimSiteNode;
TouchSensor135: TTouchSensorNode;
Shape136: TShapeNode;
HAnimSite137: THAnimSiteNode;
TouchSensor138: TTouchSensorNode;
Shape139: TShapeNode;
HAnimSite140: THAnimSiteNode;
TouchSensor141: TTouchSensorNode;
Shape142: TShapeNode;
HAnimJoint143: THAnimJointNode;
HAnimSegment144: THAnimSegmentNode;
Transform145: TTransformNode;
Transform146: TTransformNode;
Shape147: TShapeNode;
Shape148: TShapeNode;
LineSet149: TLineSetNode;
Coordinate150: TCoordinateNode;
ColorRGBA151: TColorRGBANode;
HAnimSite152: THAnimSiteNode;
TouchSensor153: TTouchSensorNode;
Shape154: TShapeNode;
HAnimSite155: THAnimSiteNode;
TouchSensor156: TTouchSensorNode;
Shape157: TShapeNode;
HAnimSite158: THAnimSiteNode;
TouchSensor159: TTouchSensorNode;
Shape160: TShapeNode;
HAnimJoint161: THAnimJointNode;
HAnimSegment162: THAnimSegmentNode;
Transform163: TTransformNode;
Transform164: TTransformNode;
Shape165: TShapeNode;
Shape166: TShapeNode;
LineSet167: TLineSetNode;
Coordinate168: TCoordinateNode;
ColorRGBA169: TColorRGBANode;
HAnimSite170: THAnimSiteNode;
TouchSensor171: TTouchSensorNode;
Shape172: TShapeNode;
HAnimSite173: THAnimSiteNode;
TouchSensor174: TTouchSensorNode;
Shape175: TShapeNode;
HAnimJoint176: THAnimJointNode;
HAnimSegment177: THAnimSegmentNode;
Transform178: TTransformNode;
Transform179: TTransformNode;
Shape180: TShapeNode;
Shape181: TShapeNode;
LineSet182: TLineSetNode;
Coordinate183: TCoordinateNode;
ColorRGBA184: TColorRGBANode;
Shape185: TShapeNode;
LineSet186: TLineSetNode;
Coordinate187: TCoordinateNode;
ColorRGBA188: TColorRGBANode;
HAnimJoint189: THAnimJointNode;
HAnimSegment190: THAnimSegmentNode;
Transform191: TTransformNode;
Transform192: TTransformNode;
Shape193: TShapeNode;
Shape194: TShapeNode;
LineSet195: TLineSetNode;
Coordinate196: TCoordinateNode;
ColorRGBA197: TColorRGBANode;
Shape198: TShapeNode;
LineSet199: TLineSetNode;
Coordinate200: TCoordinateNode;
ColorRGBA201: TColorRGBANode;
Shape202: TShapeNode;
LineSet203: TLineSetNode;
Coordinate204: TCoordinateNode;
ColorRGBA205: TColorRGBANode;
HAnimJoint206: THAnimJointNode;
HAnimSegment207: THAnimSegmentNode;
Transform208: TTransformNode;
Transform209: TTransformNode;
Shape210: TShapeNode;
Shape211: TShapeNode;
LineSet212: TLineSetNode;
Coordinate213: TCoordinateNode;
ColorRGBA214: TColorRGBANode;
HAnimJoint215: THAnimJointNode;
HAnimSegment216: THAnimSegmentNode;
Transform217: TTransformNode;
Transform218: TTransformNode;
Shape219: TShapeNode;
Shape220: TShapeNode;
LineSet221: TLineSetNode;
Coordinate222: TCoordinateNode;
ColorRGBA223: TColorRGBANode;
HAnimSite224: THAnimSiteNode;
TouchSensor225: TTouchSensorNode;
Shape226: TShapeNode;
HAnimJoint227: THAnimJointNode;
HAnimSegment228: THAnimSegmentNode;
Transform229: TTransformNode;
Transform230: TTransformNode;
Shape231: TShapeNode;
Shape232: TShapeNode;
LineSet233: TLineSetNode;
Coordinate234: TCoordinateNode;
ColorRGBA235: TColorRGBANode;
HAnimSite236: THAnimSiteNode;
TouchSensor237: TTouchSensorNode;
Shape238: TShapeNode;
HAnimJoint239: THAnimJointNode;
HAnimJoint240: THAnimJointNode;
HAnimSegment241: THAnimSegmentNode;
Transform242: TTransformNode;
Transform243: TTransformNode;
Shape244: TShapeNode;
Shape245: TShapeNode;
LineSet246: TLineSetNode;
Coordinate247: TCoordinateNode;
ColorRGBA248: TColorRGBANode;
HAnimJoint249: THAnimJointNode;
HAnimSegment250: THAnimSegmentNode;
Transform251: TTransformNode;
Transform252: TTransformNode;
Shape253: TShapeNode;
Shape254: TShapeNode;
LineSet255: TLineSetNode;
Coordinate256: TCoordinateNode;
ColorRGBA257: TColorRGBANode;
HAnimJoint258: THAnimJointNode;
HAnimSegment259: THAnimSegmentNode;
Transform260: TTransformNode;
Transform261: TTransformNode;
Shape262: TShapeNode;
Shape263: TShapeNode;
LineSet264: TLineSetNode;
Coordinate265: TCoordinateNode;
ColorRGBA266: TColorRGBANode;
HAnimJoint267: THAnimJointNode;
HAnimSegment268: THAnimSegmentNode;
Transform269: TTransformNode;
Transform270: TTransformNode;
Shape271: TShapeNode;
Shape272: TShapeNode;
LineSet273: TLineSetNode;
Coordinate274: TCoordinateNode;
ColorRGBA275: TColorRGBANode;
HAnimSite276: THAnimSiteNode;
TouchSensor277: TTouchSensorNode;
Shape278: TShapeNode;
HAnimJoint279: THAnimJointNode;
HAnimJoint280: THAnimJointNode;
HAnimSegment281: THAnimSegmentNode;
Transform282: TTransformNode;
Transform283: TTransformNode;
Shape284: TShapeNode;
Shape285: TShapeNode;
LineSet286: TLineSetNode;
Coordinate287: TCoordinateNode;
ColorRGBA288: TColorRGBANode;
HAnimJoint289: THAnimJointNode;
HAnimSegment290: THAnimSegmentNode;
Transform291: TTransformNode;
Transform292: TTransformNode;
Shape293: TShapeNode;
Shape294: TShapeNode;
LineSet295: TLineSetNode;
Coordinate296: TCoordinateNode;
ColorRGBA297: TColorRGBANode;
HAnimJoint298: THAnimJointNode;
HAnimSegment299: THAnimSegmentNode;
Transform300: TTransformNode;
Transform301: TTransformNode;
Shape302: TShapeNode;
Shape303: TShapeNode;
LineSet304: TLineSetNode;
Coordinate305: TCoordinateNode;
ColorRGBA306: TColorRGBANode;
HAnimJoint307: THAnimJointNode;
HAnimSegment308: THAnimSegmentNode;
Transform309: TTransformNode;
Transform310: TTransformNode;
Shape311: TShapeNode;
Shape312: TShapeNode;
LineSet313: TLineSetNode;
Coordinate314: TCoordinateNode;
ColorRGBA315: TColorRGBANode;
HAnimSite316: THAnimSiteNode;
TouchSensor317: TTouchSensorNode;
Shape318: TShapeNode;
HAnimJoint319: THAnimJointNode;
HAnimJoint320: THAnimJointNode;
HAnimSegment321: THAnimSegmentNode;
Transform322: TTransformNode;
Transform323: TTransformNode;
Shape324: TShapeNode;
Shape325: TShapeNode;
LineSet326: TLineSetNode;
Coordinate327: TCoordinateNode;
ColorRGBA328: TColorRGBANode;
HAnimJoint329: THAnimJointNode;
HAnimSegment330: THAnimSegmentNode;
Transform331: TTransformNode;
Transform332: TTransformNode;
Shape333: TShapeNode;
Shape334: TShapeNode;
LineSet335: TLineSetNode;
Coordinate336: TCoordinateNode;
ColorRGBA337: TColorRGBANode;
Shape338: TShapeNode;
LineSet339: TLineSetNode;
Coordinate340: TCoordinateNode;
ColorRGBA341: TColorRGBANode;
HAnimJoint342: THAnimJointNode;
HAnimSegment343: THAnimSegmentNode;
Transform344: TTransformNode;
Transform345: TTransformNode;
Shape346: TShapeNode;
Shape347: TShapeNode;
LineSet348: TLineSetNode;
Coordinate349: TCoordinateNode;
ColorRGBA350: TColorRGBANode;
HAnimJoint351: THAnimJointNode;
HAnimSegment352: THAnimSegmentNode;
Transform353: TTransformNode;
Transform354: TTransformNode;
Shape355: TShapeNode;
Shape356: TShapeNode;
LineSet357: TLineSetNode;
Coordinate358: TCoordinateNode;
ColorRGBA359: TColorRGBANode;
HAnimJoint360: THAnimJointNode;
HAnimSegment361: THAnimSegmentNode;
Transform362: TTransformNode;
Transform363: TTransformNode;
Shape364: TShapeNode;
Shape365: TShapeNode;
LineSet366: TLineSetNode;
Coordinate367: TCoordinateNode;
ColorRGBA368: TColorRGBANode;
HAnimSite369: THAnimSiteNode;
TouchSensor370: TTouchSensorNode;
Shape371: TShapeNode;
HAnimJoint372: THAnimJointNode;
HAnimJoint373: THAnimJointNode;
HAnimSegment374: THAnimSegmentNode;
Transform375: TTransformNode;
Transform376: TTransformNode;
Shape377: TShapeNode;
Shape378: TShapeNode;
LineSet379: TLineSetNode;
Coordinate380: TCoordinateNode;
ColorRGBA381: TColorRGBANode;
HAnimSite382: THAnimSiteNode;
TouchSensor383: TTouchSensorNode;
Shape384: TShapeNode;
HAnimJoint385: THAnimJointNode;
HAnimSegment386: THAnimSegmentNode;
Transform387: TTransformNode;
Transform388: TTransformNode;
Shape389: TShapeNode;
Shape390: TShapeNode;
LineSet391: TLineSetNode;
Coordinate392: TCoordinateNode;
ColorRGBA393: TColorRGBANode;
HAnimJoint394: THAnimJointNode;
HAnimSegment395: THAnimSegmentNode;
Transform396: TTransformNode;
Transform397: TTransformNode;
Shape398: TShapeNode;
Shape399: TShapeNode;
LineSet400: TLineSetNode;
Coordinate401: TCoordinateNode;
ColorRGBA402: TColorRGBANode;
HAnimSite403: THAnimSiteNode;
TouchSensor404: TTouchSensorNode;
Shape405: TShapeNode;
HAnimJoint406: THAnimJointNode;
HAnimJoint407: THAnimJointNode;
HAnimSegment408: THAnimSegmentNode;
Transform409: TTransformNode;
Transform410: TTransformNode;
Shape411: TShapeNode;
Shape412: TShapeNode;
LineSet413: TLineSetNode;
Coordinate414: TCoordinateNode;
ColorRGBA415: TColorRGBANode;
HAnimSite416: THAnimSiteNode;
TouchSensor417: TTouchSensorNode;
Shape418: TShapeNode;
HAnimSite419: THAnimSiteNode;
TouchSensor420: TTouchSensorNode;
Shape421: TShapeNode;
HAnimSite422: THAnimSiteNode;
TouchSensor423: TTouchSensorNode;
Shape424: TShapeNode;
HAnimJoint425: THAnimJointNode;
HAnimSegment426: THAnimSegmentNode;
Transform427: TTransformNode;
Transform428: TTransformNode;
Shape429: TShapeNode;
Shape430: TShapeNode;
LineSet431: TLineSetNode;
Coordinate432: TCoordinateNode;
ColorRGBA433: TColorRGBANode;
HAnimSite434: THAnimSiteNode;
TouchSensor435: TTouchSensorNode;
Shape436: TShapeNode;
HAnimSite437: THAnimSiteNode;
TouchSensor438: TTouchSensorNode;
Shape439: TShapeNode;
HAnimJoint440: THAnimJointNode;
HAnimSegment441: THAnimSegmentNode;
Transform442: TTransformNode;
Transform443: TTransformNode;
Shape444: TShapeNode;
Shape445: TShapeNode;
LineSet446: TLineSetNode;
Coordinate447: TCoordinateNode;
ColorRGBA448: TColorRGBANode;
Shape449: TShapeNode;
LineSet450: TLineSetNode;
Coordinate451: TCoordinateNode;
ColorRGBA452: TColorRGBANode;
HAnimJoint453: THAnimJointNode;
HAnimSegment454: THAnimSegmentNode;
Transform455: TTransformNode;
Transform456: TTransformNode;
Shape457: TShapeNode;
Shape458: TShapeNode;
LineSet459: TLineSetNode;
Coordinate460: TCoordinateNode;
ColorRGBA461: TColorRGBANode;
Shape462: TShapeNode;
LineSet463: TLineSetNode;
Coordinate464: TCoordinateNode;
ColorRGBA465: TColorRGBANode;
Shape466: TShapeNode;
LineSet467: TLineSetNode;
Coordinate468: TCoordinateNode;
ColorRGBA469: TColorRGBANode;
HAnimJoint470: THAnimJointNode;
HAnimSegment471: THAnimSegmentNode;
Transform472: TTransformNode;
Transform473: TTransformNode;
Shape474: TShapeNode;
Shape475: TShapeNode;
LineSet476: TLineSetNode;
Coordinate477: TCoordinateNode;
ColorRGBA478: TColorRGBANode;
HAnimJoint479: THAnimJointNode;
HAnimSegment480: THAnimSegmentNode;
Transform481: TTransformNode;
Transform482: TTransformNode;
Shape483: TShapeNode;
Shape484: TShapeNode;
LineSet485: TLineSetNode;
Coordinate486: TCoordinateNode;
ColorRGBA487: TColorRGBANode;
HAnimSite488: THAnimSiteNode;
TouchSensor489: TTouchSensorNode;
Shape490: TShapeNode;
HAnimJoint491: THAnimJointNode;
HAnimSegment492: THAnimSegmentNode;
Transform493: TTransformNode;
Transform494: TTransformNode;
Shape495: TShapeNode;
Shape496: TShapeNode;
LineSet497: TLineSetNode;
Coordinate498: TCoordinateNode;
ColorRGBA499: TColorRGBANode;
HAnimSite500: THAnimSiteNode;
TouchSensor501: TTouchSensorNode;
Shape502: TShapeNode;
HAnimJoint503: THAnimJointNode;
HAnimJoint504: THAnimJointNode;
HAnimSegment505: THAnimSegmentNode;
Transform506: TTransformNode;
Transform507: TTransformNode;
Shape508: TShapeNode;
Shape509: TShapeNode;
LineSet510: TLineSetNode;
Coordinate511: TCoordinateNode;
ColorRGBA512: TColorRGBANode;
HAnimJoint513: THAnimJointNode;
HAnimSegment514: THAnimSegmentNode;
Transform515: TTransformNode;
Transform516: TTransformNode;
Shape517: TShapeNode;
Shape518: TShapeNode;
LineSet519: TLineSetNode;
Coordinate520: TCoordinateNode;
ColorRGBA521: TColorRGBANode;
HAnimJoint522: THAnimJointNode;
HAnimSegment523: THAnimSegmentNode;
Transform524: TTransformNode;
Transform525: TTransformNode;
Shape526: TShapeNode;
Shape527: TShapeNode;
LineSet528: TLineSetNode;
Coordinate529: TCoordinateNode;
ColorRGBA530: TColorRGBANode;
HAnimJoint531: THAnimJointNode;
HAnimSegment532: THAnimSegmentNode;
Transform533: TTransformNode;
Transform534: TTransformNode;
Shape535: TShapeNode;
Shape536: TShapeNode;
LineSet537: TLineSetNode;
Coordinate538: TCoordinateNode;
ColorRGBA539: TColorRGBANode;
HAnimSite540: THAnimSiteNode;
TouchSensor541: TTouchSensorNode;
Shape542: TShapeNode;
HAnimJoint543: THAnimJointNode;
HAnimJoint544: THAnimJointNode;
HAnimSegment545: THAnimSegmentNode;
Transform546: TTransformNode;
Transform547: TTransformNode;
Shape548: TShapeNode;
Shape549: TShapeNode;
LineSet550: TLineSetNode;
Coordinate551: TCoordinateNode;
ColorRGBA552: TColorRGBANode;
HAnimJoint553: THAnimJointNode;
HAnimSegment554: THAnimSegmentNode;
Transform555: TTransformNode;
Transform556: TTransformNode;
Shape557: TShapeNode;
Shape558: TShapeNode;
LineSet559: TLineSetNode;
Coordinate560: TCoordinateNode;
ColorRGBA561: TColorRGBANode;
HAnimJoint562: THAnimJointNode;
HAnimSegment563: THAnimSegmentNode;
Transform564: TTransformNode;
Transform565: TTransformNode;
Shape566: TShapeNode;
Shape567: TShapeNode;
LineSet568: TLineSetNode;
Coordinate569: TCoordinateNode;
ColorRGBA570: TColorRGBANode;
HAnimJoint571: THAnimJointNode;
HAnimSegment572: THAnimSegmentNode;
Transform573: TTransformNode;
Transform574: TTransformNode;
Shape575: TShapeNode;
Shape576: TShapeNode;
LineSet577: TLineSetNode;
Coordinate578: TCoordinateNode;
ColorRGBA579: TColorRGBANode;
HAnimSite580: THAnimSiteNode;
TouchSensor581: TTouchSensorNode;
Shape582: TShapeNode;
HAnimJoint583: THAnimJointNode;
HAnimJoint584: THAnimJointNode;
HAnimSegment585: THAnimSegmentNode;
Transform586: TTransformNode;
Transform587: TTransformNode;
Shape588: TShapeNode;
Shape589: TShapeNode;
LineSet590: TLineSetNode;
Coordinate591: TCoordinateNode;
ColorRGBA592: TColorRGBANode;
HAnimJoint593: THAnimJointNode;
HAnimSegment594: THAnimSegmentNode;
Transform595: TTransformNode;
Transform596: TTransformNode;
Shape597: TShapeNode;
Shape598: TShapeNode;
LineSet599: TLineSetNode;
Coordinate600: TCoordinateNode;
ColorRGBA601: TColorRGBANode;
Shape602: TShapeNode;
LineSet603: TLineSetNode;
Coordinate604: TCoordinateNode;
ColorRGBA605: TColorRGBANode;
HAnimJoint606: THAnimJointNode;
HAnimSegment607: THAnimSegmentNode;
Transform608: TTransformNode;
Transform609: TTransformNode;
Shape610: TShapeNode;
Shape611: TShapeNode;
LineSet612: TLineSetNode;
Coordinate613: TCoordinateNode;
ColorRGBA614: TColorRGBANode;
HAnimJoint615: THAnimJointNode;
HAnimSegment616: THAnimSegmentNode;
Transform617: TTransformNode;
Transform618: TTransformNode;
Shape619: TShapeNode;
Shape620: TShapeNode;
LineSet621: TLineSetNode;
Coordinate622: TCoordinateNode;
ColorRGBA623: TColorRGBANode;
HAnimJoint624: THAnimJointNode;
HAnimSegment625: THAnimSegmentNode;
Transform626: TTransformNode;
Transform627: TTransformNode;
Shape628: TShapeNode;
Shape629: TShapeNode;
LineSet630: TLineSetNode;
Coordinate631: TCoordinateNode;
ColorRGBA632: TColorRGBANode;
HAnimSite633: THAnimSiteNode;
TouchSensor634: TTouchSensorNode;
Shape635: TShapeNode;
HAnimJoint636: THAnimJointNode;
HAnimJoint637: THAnimJointNode;
HAnimSegment638: THAnimSegmentNode;
Transform639: TTransformNode;
Transform640: TTransformNode;
Shape641: TShapeNode;
Shape642: TShapeNode;
LineSet643: TLineSetNode;
Coordinate644: TCoordinateNode;
ColorRGBA645: TColorRGBANode;
HAnimSite646: THAnimSiteNode;
TouchSensor647: TTouchSensorNode;
Shape648: TShapeNode;
HAnimJoint649: THAnimJointNode;
HAnimSegment650: THAnimSegmentNode;
Transform651: TTransformNode;
Transform652: TTransformNode;
Shape653: TShapeNode;
Shape654: TShapeNode;
LineSet655: TLineSetNode;
Coordinate656: TCoordinateNode;
ColorRGBA657: TColorRGBANode;
HAnimJoint658: THAnimJointNode;
HAnimSegment659: THAnimSegmentNode;
Transform660: TTransformNode;
Transform661: TTransformNode;
Shape662: TShapeNode;
Shape663: TShapeNode;
LineSet664: TLineSetNode;
Coordinate665: TCoordinateNode;
ColorRGBA666: TColorRGBANode;
HAnimSite667: THAnimSiteNode;
TouchSensor668: TTouchSensorNode;
Shape669: TShapeNode;
HAnimJoint670: THAnimJointNode;
HAnimJoint671: THAnimJointNode;
HAnimSegment672: THAnimSegmentNode;
Transform673: TTransformNode;
Transform674: TTransformNode;
Shape675: TShapeNode;
Shape676: TShapeNode;
LineSet677: TLineSetNode;
Coordinate678: TCoordinateNode;
ColorRGBA679: TColorRGBANode;
HAnimJoint680: THAnimJointNode;
HAnimSegment681: THAnimSegmentNode;
Transform682: TTransformNode;
Transform683: TTransformNode;
Shape684: TShapeNode;
Shape685: TShapeNode;
LineSet686: TLineSetNode;
Coordinate687: TCoordinateNode;
ColorRGBA688: TColorRGBANode;
HAnimJoint689: THAnimJointNode;
HAnimSegment690: THAnimSegmentNode;
Transform691: TTransformNode;
Transform692: TTransformNode;
Shape693: TShapeNode;
Shape694: TShapeNode;
LineSet695: TLineSetNode;
Coordinate696: TCoordinateNode;
ColorRGBA697: TColorRGBANode;
HAnimSite698: THAnimSiteNode;
TouchSensor699: TTouchSensorNode;
Shape700: TShapeNode;
HAnimSite701: THAnimSiteNode;
TouchSensor702: TTouchSensorNode;
Shape703: TShapeNode;
HAnimSite704: THAnimSiteNode;
TouchSensor705: TTouchSensorNode;
Shape706: TShapeNode;
HAnimJoint707: THAnimJointNode;
HAnimSegment708: THAnimSegmentNode;
Transform709: TTransformNode;
Transform710: TTransformNode;
Shape711: TShapeNode;
Shape712: TShapeNode;
LineSet713: TLineSetNode;
Coordinate714: TCoordinateNode;
ColorRGBA715: TColorRGBANode;
HAnimJoint716: THAnimJointNode;
HAnimSegment717: THAnimSegmentNode;
Transform718: TTransformNode;
Transform719: TTransformNode;
Shape720: TShapeNode;
Shape721: TShapeNode;
LineSet722: TLineSetNode;
Coordinate723: TCoordinateNode;
ColorRGBA724: TColorRGBANode;
HAnimJoint725: THAnimJointNode;
HAnimSegment726: THAnimSegmentNode;
Transform727: TTransformNode;
Transform728: TTransformNode;
Shape729: TShapeNode;
Shape730: TShapeNode;
LineSet731: TLineSetNode;
Coordinate732: TCoordinateNode;
ColorRGBA733: TColorRGBANode;
HAnimJoint734: THAnimJointNode;
HAnimSegment735: THAnimSegmentNode;
Transform736: TTransformNode;
Transform737: TTransformNode;
Shape738: TShapeNode;
Shape739: TShapeNode;
LineSet740: TLineSetNode;
Coordinate741: TCoordinateNode;
ColorRGBA742: TColorRGBANode;
HAnimSite743: THAnimSiteNode;
TouchSensor744: TTouchSensorNode;
Shape745: TShapeNode;
HAnimJoint746: THAnimJointNode;
HAnimSegment747: THAnimSegmentNode;
Transform748: TTransformNode;
Transform749: TTransformNode;
Shape750: TShapeNode;
Shape751: TShapeNode;
LineSet752: TLineSetNode;
Coordinate753: TCoordinateNode;
ColorRGBA754: TColorRGBANode;
HAnimSite755: THAnimSiteNode;
TouchSensor756: TTouchSensorNode;
Shape757: TShapeNode;
HAnimSite758: THAnimSiteNode;
TouchSensor759: TTouchSensorNode;
Shape760: TShapeNode;
HAnimJoint761: THAnimJointNode;
HAnimSegment762: THAnimSegmentNode;
Transform763: TTransformNode;
Transform764: TTransformNode;
Shape765: TShapeNode;
Shape766: TShapeNode;
LineSet767: TLineSetNode;
Coordinate768: TCoordinateNode;
ColorRGBA769: TColorRGBANode;
HAnimJoint770: THAnimJointNode;
HAnimSegment771: THAnimSegmentNode;
Transform772: TTransformNode;
Transform773: TTransformNode;
Shape774: TShapeNode;
Shape775: TShapeNode;
LineSet776: TLineSetNode;
Coordinate777: TCoordinateNode;
ColorRGBA778: TColorRGBANode;
HAnimJoint779: THAnimJointNode;
HAnimSegment780: THAnimSegmentNode;
Transform781: TTransformNode;
Transform782: TTransformNode;
Shape783: TShapeNode;
Shape784: TShapeNode;
LineSet785: TLineSetNode;
Coordinate786: TCoordinateNode;
ColorRGBA787: TColorRGBANode;
HAnimSite788: THAnimSiteNode;
TouchSensor789: TTouchSensorNode;
Shape790: TShapeNode;
HAnimSite791: THAnimSiteNode;
TouchSensor792: TTouchSensorNode;
Shape793: TShapeNode;
HAnimSite794: THAnimSiteNode;
TouchSensor795: TTouchSensorNode;
Shape796: TShapeNode;
HAnimSite797: THAnimSiteNode;
TouchSensor798: TTouchSensorNode;
Shape799: TShapeNode;
HAnimJoint800: THAnimJointNode;
HAnimSegment801: THAnimSegmentNode;
Transform802: TTransformNode;
Transform803: TTransformNode;
Shape804: TShapeNode;
Shape805: TShapeNode;
LineSet806: TLineSetNode;
Coordinate807: TCoordinateNode;
ColorRGBA808: TColorRGBANode;
HAnimSite809: THAnimSiteNode;
TouchSensor810: TTouchSensorNode;
Shape811: TShapeNode;
HAnimJoint812: THAnimJointNode;
HAnimSegment813: THAnimSegmentNode;
Transform814: TTransformNode;
Transform815: TTransformNode;
Shape816: TShapeNode;
Shape817: TShapeNode;
LineSet818: TLineSetNode;
Coordinate819: TCoordinateNode;
ColorRGBA820: TColorRGBANode;
HAnimJoint821: THAnimJointNode;
HAnimSegment822: THAnimSegmentNode;
Transform823: TTransformNode;
Transform824: TTransformNode;
Shape825: TShapeNode;
Shape826: TShapeNode;
LineSet827: TLineSetNode;
Coordinate828: TCoordinateNode;
ColorRGBA829: TColorRGBANode;
HAnimJoint830: THAnimJointNode;
HAnimSegment831: THAnimSegmentNode;
Transform832: TTransformNode;
Transform833: TTransformNode;
Shape834: TShapeNode;
Shape835: TShapeNode;
LineSet836: TLineSetNode;
Coordinate837: TCoordinateNode;
ColorRGBA838: TColorRGBANode;
HAnimJoint839: THAnimJointNode;
HAnimSegment840: THAnimSegmentNode;
Transform841: TTransformNode;
Transform842: TTransformNode;
Shape843: TShapeNode;
Shape844: TShapeNode;
LineSet845: TLineSetNode;
Coordinate846: TCoordinateNode;
ColorRGBA847: TColorRGBANode;
HAnimSite848: THAnimSiteNode;
TouchSensor849: TTouchSensorNode;
Shape850: TShapeNode;
HAnimSite851: THAnimSiteNode;
TouchSensor852: TTouchSensorNode;
Shape853: TShapeNode;
HAnimJoint854: THAnimJointNode;
HAnimSegment855: THAnimSegmentNode;
Transform856: TTransformNode;
Transform857: TTransformNode;
Shape858: TShapeNode;
Shape859: TShapeNode;
LineSet860: TLineSetNode;
Coordinate861: TCoordinateNode;
ColorRGBA862: TColorRGBANode;
HAnimSite863: THAnimSiteNode;
TouchSensor864: TTouchSensorNode;
Shape865: TShapeNode;
HAnimSite866: THAnimSiteNode;
TouchSensor867: TTouchSensorNode;
Shape868: TShapeNode;
Shape869: TShapeNode;
LineSet870: TLineSetNode;
Coordinate871: TCoordinateNode;
ColorRGBA872: TColorRGBANode;
HAnimSite873: THAnimSiteNode;
TouchSensor874: TTouchSensorNode;
Shape875: TShapeNode;
HAnimSite876: THAnimSiteNode;
TouchSensor877: TTouchSensorNode;
Shape878: TShapeNode;
HAnimSite879: THAnimSiteNode;
TouchSensor880: TTouchSensorNode;
Shape881: TShapeNode;
HAnimSite882: THAnimSiteNode;
TouchSensor883: TTouchSensorNode;
Shape884: TShapeNode;
HAnimSite885: THAnimSiteNode;
TouchSensor886: TTouchSensorNode;
Shape887: TShapeNode;
Shape888: TShapeNode;
LineSet889: TLineSetNode;
Coordinate890: TCoordinateNode;
ColorRGBA891: TColorRGBANode;
HAnimSite892: THAnimSiteNode;
TouchSensor893: TTouchSensorNode;
Shape894: TShapeNode;
HAnimSite895: THAnimSiteNode;
TouchSensor896: TTouchSensorNode;
Shape897: TShapeNode;
HAnimSite898: THAnimSiteNode;
TouchSensor899: TTouchSensorNode;
Shape900: TShapeNode;
HAnimSite901: THAnimSiteNode;
TouchSensor902: TTouchSensorNode;
Shape903: TShapeNode;
HAnimSite904: THAnimSiteNode;
TouchSensor905: TTouchSensorNode;
Shape906: TShapeNode;
HAnimJoint907: THAnimJointNode;
HAnimSegment908: THAnimSegmentNode;
Transform909: TTransformNode;
Transform910: TTransformNode;
Shape911: TShapeNode;
Shape912: TShapeNode;
LineSet913: TLineSetNode;
Coordinate914: TCoordinateNode;
ColorRGBA915: TColorRGBANode;
HAnimJoint916: THAnimJointNode;
HAnimSegment917: THAnimSegmentNode;
Transform918: TTransformNode;
Transform919: TTransformNode;
Shape920: TShapeNode;
Shape921: TShapeNode;
LineSet922: TLineSetNode;
Coordinate923: TCoordinateNode;
ColorRGBA924: TColorRGBANode;
HAnimJoint925: THAnimJointNode;
HAnimSegment926: THAnimSegmentNode;
Transform927: TTransformNode;
Transform928: TTransformNode;
Shape929: TShapeNode;
Shape930: TShapeNode;
LineSet931: TLineSetNode;
Coordinate932: TCoordinateNode;
ColorRGBA933: TColorRGBANode;
HAnimJoint934: THAnimJointNode;
HAnimSegment935: THAnimSegmentNode;
Transform936: TTransformNode;
Transform937: TTransformNode;
Shape938: TShapeNode;
Shape939: TShapeNode;
LineSet940: TLineSetNode;
Coordinate941: TCoordinateNode;
ColorRGBA942: TColorRGBANode;
HAnimJoint943: THAnimJointNode;
HAnimSegment944: THAnimSegmentNode;
Transform945: TTransformNode;
Transform946: TTransformNode;
Shape947: TShapeNode;
Shape948: TShapeNode;
LineSet949: TLineSetNode;
Coordinate950: TCoordinateNode;
ColorRGBA951: TColorRGBANode;
HAnimSite952: THAnimSiteNode;
TouchSensor953: TTouchSensorNode;
Shape954: TShapeNode;
HAnimJoint955: THAnimJointNode;
HAnimSegment956: THAnimSegmentNode;
Transform957: TTransformNode;
Transform958: TTransformNode;
Shape959: TShapeNode;
Shape960: TShapeNode;
LineSet961: TLineSetNode;
Coordinate962: TCoordinateNode;
ColorRGBA963: TColorRGBANode;
HAnimJoint964: THAnimJointNode;
HAnimSegment965: THAnimSegmentNode;
Transform966: TTransformNode;
Transform967: TTransformNode;
Shape968: TShapeNode;
Shape969: TShapeNode;
LineSet970: TLineSetNode;
Coordinate971: TCoordinateNode;
ColorRGBA972: TColorRGBANode;
HAnimSite973: THAnimSiteNode;
TouchSensor974: TTouchSensorNode;
Shape975: TShapeNode;
HAnimSite976: THAnimSiteNode;
TouchSensor977: TTouchSensorNode;
Shape978: TShapeNode;
HAnimSite979: THAnimSiteNode;
TouchSensor980: TTouchSensorNode;
Shape981: TShapeNode;
HAnimSite982: THAnimSiteNode;
TouchSensor983: TTouchSensorNode;
Shape984: TShapeNode;
HAnimSite985: THAnimSiteNode;
TouchSensor986: TTouchSensorNode;
Shape987: TShapeNode;
HAnimSite988: THAnimSiteNode;
TouchSensor989: TTouchSensorNode;
Shape990: TShapeNode;
HAnimSite991: THAnimSiteNode;
TouchSensor992: TTouchSensorNode;
Shape993: TShapeNode;
HAnimSite994: THAnimSiteNode;
TouchSensor995: TTouchSensorNode;
Shape996: TShapeNode;
HAnimSite997: THAnimSiteNode;
TouchSensor998: TTouchSensorNode;
Shape999: TShapeNode;
HAnimSite1000: THAnimSiteNode;
TouchSensor1001: TTouchSensorNode;
Shape1002: TShapeNode;
HAnimSite1003: THAnimSiteNode;
TouchSensor1004: TTouchSensorNode;
Shape1005: TShapeNode;
HAnimJoint1006: THAnimJointNode;
HAnimSegment1007: THAnimSegmentNode;
Transform1008: TTransformNode;
Transform1009: TTransformNode;
Shape1010: TShapeNode;
Shape1011: TShapeNode;
LineSet1012: TLineSetNode;
Coordinate1013: TCoordinateNode;
ColorRGBA1014: TColorRGBANode;
Shape1015: TShapeNode;
LineSet1016: TLineSetNode;
Coordinate1017: TCoordinateNode;
ColorRGBA1018: TColorRGBANode;
Shape1019: TShapeNode;
LineSet1020: TLineSetNode;
Coordinate1021: TCoordinateNode;
ColorRGBA1022: TColorRGBANode;
Shape1023: TShapeNode;
LineSet1024: TLineSetNode;
Coordinate1025: TCoordinateNode;
ColorRGBA1026: TColorRGBANode;
Shape1027: TShapeNode;
LineSet1028: TLineSetNode;
Coordinate1029: TCoordinateNode;
ColorRGBA1030: TColorRGBANode;
Shape1031: TShapeNode;
LineSet1032: TLineSetNode;
Coordinate1033: TCoordinateNode;
ColorRGBA1034: TColorRGBANode;
Shape1035: TShapeNode;
LineSet1036: TLineSetNode;
Coordinate1037: TCoordinateNode;
ColorRGBA1038: TColorRGBANode;
HAnimSite1039: THAnimSiteNode;
TouchSensor1040: TTouchSensorNode;
Shape1041: TShapeNode;
HAnimSite1042: THAnimSiteNode;
TouchSensor1043: TTouchSensorNode;
Shape1044: TShapeNode;
HAnimSite1045: THAnimSiteNode;
TouchSensor1046: TTouchSensorNode;
Shape1047: TShapeNode;
HAnimSite1048: THAnimSiteNode;
TouchSensor1049: TTouchSensorNode;
Shape1050: TShapeNode;
HAnimJoint1051: THAnimJointNode;
HAnimJoint1052: THAnimJointNode;
HAnimJoint1053: THAnimJointNode;
HAnimJoint1054: THAnimJointNode;
HAnimJoint1055: THAnimJointNode;
HAnimJoint1056: THAnimJointNode;
HAnimJoint1057: THAnimJointNode;
HAnimDisplacer1058: THAnimDisplacerNode;
HAnimJoint1059: THAnimJointNode;
HAnimSegment1060: THAnimSegmentNode;
Transform1061: TTransformNode;
Transform1062: TTransformNode;
Shape1063: TShapeNode;
Shape1064: TShapeNode;
LineSet1065: TLineSetNode;
Coordinate1066: TCoordinateNode;
ColorRGBA1067: TColorRGBANode;
HAnimJoint1068: THAnimJointNode;
HAnimSegment1069: THAnimSegmentNode;
Transform1070: TTransformNode;
Transform1071: TTransformNode;
Shape1072: TShapeNode;
Shape1073: TShapeNode;
LineSet1074: TLineSetNode;
Coordinate1075: TCoordinateNode;
ColorRGBA1076: TColorRGBANode;
HAnimSite1077: THAnimSiteNode;
TouchSensor1078: TTouchSensorNode;
Shape1079: TShapeNode;
HAnimSite1080: THAnimSiteNode;
TouchSensor1081: TTouchSensorNode;
Shape1082: TShapeNode;
HAnimJoint1083: THAnimJointNode;
HAnimSegment1084: THAnimSegmentNode;
Transform1085: TTransformNode;
Transform1086: TTransformNode;
Shape1087: TShapeNode;
Shape1088: TShapeNode;
LineSet1089: TLineSetNode;
Coordinate1090: TCoordinateNode;
ColorRGBA1091: TColorRGBANode;
HAnimSite1092: THAnimSiteNode;
TouchSensor1093: TTouchSensorNode;
Shape1094: TShapeNode;
HAnimSite1095: THAnimSiteNode;
TouchSensor1096: TTouchSensorNode;
Shape1097: TShapeNode;
HAnimSite1098: THAnimSiteNode;
TouchSensor1099: TTouchSensorNode;
Shape1100: TShapeNode;
HAnimSite1101: THAnimSiteNode;
TouchSensor1102: TTouchSensorNode;
Shape1103: TShapeNode;
HAnimJoint1104: THAnimJointNode;
HAnimSegment1105: THAnimSegmentNode;
Transform1106: TTransformNode;
Transform1107: TTransformNode;
Shape1108: TShapeNode;
Shape1109: TShapeNode;
LineSet1110: TLineSetNode;
Coordinate1111: TCoordinateNode;
ColorRGBA1112: TColorRGBANode;
HAnimSite1113: THAnimSiteNode;
TouchSensor1114: TTouchSensorNode;
Shape1115: TShapeNode;
HAnimJoint1116: THAnimJointNode;
HAnimSegment1117: THAnimSegmentNode;
Transform1118: TTransformNode;
Transform1119: TTransformNode;
Shape1120: TShapeNode;
Shape1121: TShapeNode;
LineSet1122: TLineSetNode;
Coordinate1123: TCoordinateNode;
ColorRGBA1124: TColorRGBANode;
Shape1125: TShapeNode;
LineSet1126: TLineSetNode;
Coordinate1127: TCoordinateNode;
ColorRGBA1128: TColorRGBANode;
Shape1129: TShapeNode;
LineSet1130: TLineSetNode;
Coordinate1131: TCoordinateNode;
ColorRGBA1132: TColorRGBANode;
Shape1133: TShapeNode;
LineSet1134: TLineSetNode;
Coordinate1135: TCoordinateNode;
ColorRGBA1136: TColorRGBANode;
HAnimJoint1137: THAnimJointNode;
HAnimSegment1138: THAnimSegmentNode;
Transform1139: TTransformNode;
Transform1140: TTransformNode;
Shape1141: TShapeNode;
Shape1142: TShapeNode;
LineSet1143: TLineSetNode;
Coordinate1144: TCoordinateNode;
ColorRGBA1145: TColorRGBANode;
HAnimJoint1146: THAnimJointNode;
HAnimSegment1147: THAnimSegmentNode;
Transform1148: TTransformNode;
Transform1149: TTransformNode;
Shape1150: TShapeNode;
Shape1151: TShapeNode;
LineSet1152: TLineSetNode;
Coordinate1153: TCoordinateNode;
ColorRGBA1154: TColorRGBANode;
HAnimJoint1155: THAnimJointNode;
HAnimSegment1156: THAnimSegmentNode;
Transform1157: TTransformNode;
Transform1158: TTransformNode;
Shape1159: TShapeNode;
Shape1160: TShapeNode;
LineSet1161: TLineSetNode;
Coordinate1162: TCoordinateNode;
ColorRGBA1163: TColorRGBANode;
HAnimSite1164: THAnimSiteNode;
TouchSensor1165: TTouchSensorNode;
Shape1166: TShapeNode;
HAnimJoint1167: THAnimJointNode;
HAnimJoint1168: THAnimJointNode;
HAnimSegment1169: THAnimSegmentNode;
Transform1170: TTransformNode;
Transform1171: TTransformNode;
Shape1172: TShapeNode;
Shape1173: TShapeNode;
LineSet1174: TLineSetNode;
Coordinate1175: TCoordinateNode;
ColorRGBA1176: TColorRGBANode;
HAnimSite1177: THAnimSiteNode;
TouchSensor1178: TTouchSensorNode;
Shape1179: TShapeNode;
HAnimJoint1180: THAnimJointNode;
HAnimSegment1181: THAnimSegmentNode;
Transform1182: TTransformNode;
Transform1183: TTransformNode;
Shape1184: TShapeNode;
Shape1185: TShapeNode;
LineSet1186: TLineSetNode;
Coordinate1187: TCoordinateNode;
ColorRGBA1188: TColorRGBANode;
HAnimJoint1189: THAnimJointNode;
HAnimSegment1190: THAnimSegmentNode;
Transform1191: TTransformNode;
Transform1192: TTransformNode;
Shape1193: TShapeNode;
Shape1194: TShapeNode;
LineSet1195: TLineSetNode;
Coordinate1196: TCoordinateNode;
ColorRGBA1197: TColorRGBANode;
HAnimJoint1198: THAnimJointNode;
HAnimSegment1199: THAnimSegmentNode;
Transform1200: TTransformNode;
Transform1201: TTransformNode;
Shape1202: TShapeNode;
Shape1203: TShapeNode;
LineSet1204: TLineSetNode;
Coordinate1205: TCoordinateNode;
ColorRGBA1206: TColorRGBANode;
HAnimSite1207: THAnimSiteNode;
TouchSensor1208: TTouchSensorNode;
Shape1209: TShapeNode;
HAnimSite1210: THAnimSiteNode;
TouchSensor1211: TTouchSensorNode;
Shape1212: TShapeNode;
HAnimJoint1213: THAnimJointNode;
HAnimJoint1214: THAnimJointNode;
HAnimSegment1215: THAnimSegmentNode;
Transform1216: TTransformNode;
Transform1217: TTransformNode;
Shape1218: TShapeNode;
Shape1219: TShapeNode;
LineSet1220: TLineSetNode;
Coordinate1221: TCoordinateNode;
ColorRGBA1222: TColorRGBANode;
HAnimSite1223: THAnimSiteNode;
TouchSensor1224: TTouchSensorNode;
Shape1225: TShapeNode;
HAnimJoint1226: THAnimJointNode;
HAnimSegment1227: THAnimSegmentNode;
Transform1228: TTransformNode;
Transform1229: TTransformNode;
Shape1230: TShapeNode;
Shape1231: TShapeNode;
LineSet1232: TLineSetNode;
Coordinate1233: TCoordinateNode;
ColorRGBA1234: TColorRGBANode;
HAnimJoint1235: THAnimJointNode;
HAnimSegment1236: THAnimSegmentNode;
Transform1237: TTransformNode;
Transform1238: TTransformNode;
Shape1239: TShapeNode;
Shape1240: TShapeNode;
LineSet1241: TLineSetNode;
Coordinate1242: TCoordinateNode;
ColorRGBA1243: TColorRGBANode;
HAnimJoint1244: THAnimJointNode;
HAnimSegment1245: THAnimSegmentNode;
Transform1246: TTransformNode;
Transform1247: TTransformNode;
Shape1248: TShapeNode;
Shape1249: TShapeNode;
LineSet1250: TLineSetNode;
Coordinate1251: TCoordinateNode;
ColorRGBA1252: TColorRGBANode;
HAnimSite1253: THAnimSiteNode;
TouchSensor1254: TTouchSensorNode;
Shape1255: TShapeNode;
HAnimJoint1256: THAnimJointNode;
HAnimJoint1257: THAnimJointNode;
HAnimSegment1258: THAnimSegmentNode;
Transform1259: TTransformNode;
Transform1260: TTransformNode;
Shape1261: TShapeNode;
Shape1262: TShapeNode;
LineSet1263: TLineSetNode;
Coordinate1264: TCoordinateNode;
ColorRGBA1265: TColorRGBANode;
Shape1266: TShapeNode;
LineSet1267: TLineSetNode;
Coordinate1268: TCoordinateNode;
ColorRGBA1269: TColorRGBANode;
HAnimSite1270: THAnimSiteNode;
TouchSensor1271: TTouchSensorNode;
Shape1272: TShapeNode;
HAnimJoint1273: THAnimJointNode;
HAnimSegment1274: THAnimSegmentNode;
Transform1275: TTransformNode;
Transform1276: TTransformNode;
Shape1277: TShapeNode;
Shape1278: TShapeNode;
LineSet1279: TLineSetNode;
Coordinate1280: TCoordinateNode;
ColorRGBA1281: TColorRGBANode;
HAnimJoint1282: THAnimJointNode;
HAnimSegment1283: THAnimSegmentNode;
Transform1284: TTransformNode;
Transform1285: TTransformNode;
Shape1286: TShapeNode;
Shape1287: TShapeNode;
LineSet1288: TLineSetNode;
Coordinate1289: TCoordinateNode;
ColorRGBA1290: TColorRGBANode;
HAnimJoint1291: THAnimJointNode;
HAnimSegment1292: THAnimSegmentNode;
Transform1293: TTransformNode;
Transform1294: TTransformNode;
Shape1295: TShapeNode;
Shape1296: TShapeNode;
LineSet1297: TLineSetNode;
Coordinate1298: TCoordinateNode;
ColorRGBA1299: TColorRGBANode;
HAnimSite1300: THAnimSiteNode;
TouchSensor1301: TTouchSensorNode;
Shape1302: TShapeNode;
HAnimJoint1303: THAnimJointNode;
HAnimJoint1304: THAnimJointNode;
HAnimSegment1305: THAnimSegmentNode;
Transform1306: TTransformNode;
Transform1307: TTransformNode;
Shape1308: TShapeNode;
Shape1309: TShapeNode;
LineSet1310: TLineSetNode;
Coordinate1311: TCoordinateNode;
ColorRGBA1312: TColorRGBANode;
HAnimJoint1313: THAnimJointNode;
HAnimSegment1314: THAnimSegmentNode;
Transform1315: TTransformNode;
Transform1316: TTransformNode;
Shape1317: TShapeNode;
Shape1318: TShapeNode;
LineSet1319: TLineSetNode;
Coordinate1320: TCoordinateNode;
ColorRGBA1321: TColorRGBANode;
HAnimJoint1322: THAnimJointNode;
HAnimSegment1323: THAnimSegmentNode;
Transform1324: TTransformNode;
Transform1325: TTransformNode;
Shape1326: TShapeNode;
Shape1327: TShapeNode;
LineSet1328: TLineSetNode;
Coordinate1329: TCoordinateNode;
ColorRGBA1330: TColorRGBANode;
HAnimSite1331: THAnimSiteNode;
TouchSensor1332: TTouchSensorNode;
Shape1333: TShapeNode;
HAnimJoint1334: THAnimJointNode;
HAnimJoint1335: THAnimJointNode;
HAnimSegment1336: THAnimSegmentNode;
Transform1337: TTransformNode;
Transform1338: TTransformNode;
Shape1339: TShapeNode;
Shape1340: TShapeNode;
LineSet1341: TLineSetNode;
Coordinate1342: TCoordinateNode;
ColorRGBA1343: TColorRGBANode;
HAnimJoint1344: THAnimJointNode;
HAnimSegment1345: THAnimSegmentNode;
Transform1346: TTransformNode;
Transform1347: TTransformNode;
Shape1348: TShapeNode;
Shape1349: TShapeNode;
LineSet1350: TLineSetNode;
Coordinate1351: TCoordinateNode;
ColorRGBA1352: TColorRGBANode;
HAnimSite1353: THAnimSiteNode;
TouchSensor1354: TTouchSensorNode;
Shape1355: TShapeNode;
HAnimSite1356: THAnimSiteNode;
TouchSensor1357: TTouchSensorNode;
Shape1358: TShapeNode;
HAnimJoint1359: THAnimJointNode;
HAnimSegment1360: THAnimSegmentNode;
Transform1361: TTransformNode;
Transform1362: TTransformNode;
Shape1363: TShapeNode;
Shape1364: TShapeNode;
LineSet1365: TLineSetNode;
Coordinate1366: TCoordinateNode;
ColorRGBA1367: TColorRGBANode;
HAnimSite1368: THAnimSiteNode;
TouchSensor1369: TTouchSensorNode;
Shape1370: TShapeNode;
HAnimSite1371: THAnimSiteNode;
TouchSensor1372: TTouchSensorNode;
Shape1373: TShapeNode;
HAnimSite1374: THAnimSiteNode;
TouchSensor1375: TTouchSensorNode;
Shape1376: TShapeNode;
HAnimSite1377: THAnimSiteNode;
TouchSensor1378: TTouchSensorNode;
Shape1379: TShapeNode;
HAnimJoint1380: THAnimJointNode;
HAnimSegment1381: THAnimSegmentNode;
Transform1382: TTransformNode;
Transform1383: TTransformNode;
Shape1384: TShapeNode;
Shape1385: TShapeNode;
LineSet1386: TLineSetNode;
Coordinate1387: TCoordinateNode;
ColorRGBA1388: TColorRGBANode;
HAnimSite1389: THAnimSiteNode;
TouchSensor1390: TTouchSensorNode;
Shape1391: TShapeNode;
HAnimJoint1392: THAnimJointNode;
HAnimSegment1393: THAnimSegmentNode;
Transform1394: TTransformNode;
Transform1395: TTransformNode;
Shape1396: TShapeNode;
Shape1397: TShapeNode;
LineSet1398: TLineSetNode;
Coordinate1399: TCoordinateNode;
ColorRGBA1400: TColorRGBANode;
Shape1401: TShapeNode;
LineSet1402: TLineSetNode;
Coordinate1403: TCoordinateNode;
ColorRGBA1404: TColorRGBANode;
Shape1405: TShapeNode;
LineSet1406: TLineSetNode;
Coordinate1407: TCoordinateNode;
ColorRGBA1408: TColorRGBANode;
Shape1409: TShapeNode;
LineSet1410: TLineSetNode;
Coordinate1411: TCoordinateNode;
ColorRGBA1412: TColorRGBANode;
HAnimJoint1413: THAnimJointNode;
HAnimSegment1414: THAnimSegmentNode;
Transform1415: TTransformNode;
Transform1416: TTransformNode;
Shape1417: TShapeNode;
Shape1418: TShapeNode;
LineSet1419: TLineSetNode;
Coordinate1420: TCoordinateNode;
ColorRGBA1421: TColorRGBANode;
HAnimJoint1422: THAnimJointNode;
HAnimSegment1423: THAnimSegmentNode;
Transform1424: TTransformNode;
Transform1425: TTransformNode;
Shape1426: TShapeNode;
Shape1427: TShapeNode;
LineSet1428: TLineSetNode;
Coordinate1429: TCoordinateNode;
ColorRGBA1430: TColorRGBANode;
HAnimJoint1431: THAnimJointNode;
HAnimSegment1432: THAnimSegmentNode;
Transform1433: TTransformNode;
Transform1434: TTransformNode;
Shape1435: TShapeNode;
Shape1436: TShapeNode;
LineSet1437: TLineSetNode;
Coordinate1438: TCoordinateNode;
ColorRGBA1439: TColorRGBANode;
HAnimSite1440: THAnimSiteNode;
TouchSensor1441: TTouchSensorNode;
Shape1442: TShapeNode;
HAnimJoint1443: THAnimJointNode;
HAnimJoint1444: THAnimJointNode;
HAnimSegment1445: THAnimSegmentNode;
Transform1446: TTransformNode;
Transform1447: TTransformNode;
Shape1448: TShapeNode;
Shape1449: TShapeNode;
LineSet1450: TLineSetNode;
Coordinate1451: TCoordinateNode;
ColorRGBA1452: TColorRGBANode;
HAnimSite1453: THAnimSiteNode;
TouchSensor1454: TTouchSensorNode;
Shape1455: TShapeNode;
HAnimJoint1456: THAnimJointNode;
HAnimSegment1457: THAnimSegmentNode;
Transform1458: TTransformNode;
Transform1459: TTransformNode;
Shape1460: TShapeNode;
Shape1461: TShapeNode;
LineSet1462: TLineSetNode;
Coordinate1463: TCoordinateNode;
ColorRGBA1464: TColorRGBANode;
HAnimJoint1465: THAnimJointNode;
HAnimSegment1466: THAnimSegmentNode;
Transform1467: TTransformNode;
Transform1468: TTransformNode;
Shape1469: TShapeNode;
Shape1470: TShapeNode;
LineSet1471: TLineSetNode;
Coordinate1472: TCoordinateNode;
ColorRGBA1473: TColorRGBANode;
HAnimJoint1474: THAnimJointNode;
HAnimSegment1475: THAnimSegmentNode;
Transform1476: TTransformNode;
Transform1477: TTransformNode;
Shape1478: TShapeNode;
Shape1479: TShapeNode;
LineSet1480: TLineSetNode;
Coordinate1481: TCoordinateNode;
ColorRGBA1482: TColorRGBANode;
HAnimSite1483: THAnimSiteNode;
TouchSensor1484: TTouchSensorNode;
Shape1485: TShapeNode;
HAnimSite1486: THAnimSiteNode;
TouchSensor1487: TTouchSensorNode;
Shape1488: TShapeNode;
HAnimJoint1489: THAnimJointNode;
HAnimJoint1490: THAnimJointNode;
HAnimSegment1491: THAnimSegmentNode;
Transform1492: TTransformNode;
Transform1493: TTransformNode;
Shape1494: TShapeNode;
Shape1495: TShapeNode;
LineSet1496: TLineSetNode;
Coordinate1497: TCoordinateNode;
ColorRGBA1498: TColorRGBANode;
HAnimSite1499: THAnimSiteNode;
TouchSensor1500: TTouchSensorNode;
Shape1501: TShapeNode;
HAnimJoint1502: THAnimJointNode;
HAnimSegment1503: THAnimSegmentNode;
Transform1504: TTransformNode;
Transform1505: TTransformNode;
Shape1506: TShapeNode;
Shape1507: TShapeNode;
LineSet1508: TLineSetNode;
Coordinate1509: TCoordinateNode;
ColorRGBA1510: TColorRGBANode;
HAnimJoint1511: THAnimJointNode;
HAnimSegment1512: THAnimSegmentNode;
Transform1513: TTransformNode;
Transform1514: TTransformNode;
Shape1515: TShapeNode;
Shape1516: TShapeNode;
LineSet1517: TLineSetNode;
Coordinate1518: TCoordinateNode;
ColorRGBA1519: TColorRGBANode;
HAnimJoint1520: THAnimJointNode;
HAnimSegment1521: THAnimSegmentNode;
Transform1522: TTransformNode;
Transform1523: TTransformNode;
Shape1524: TShapeNode;
Shape1525: TShapeNode;
LineSet1526: TLineSetNode;
Coordinate1527: TCoordinateNode;
ColorRGBA1528: TColorRGBANode;
HAnimSite1529: THAnimSiteNode;
TouchSensor1530: TTouchSensorNode;
Shape1531: TShapeNode;
HAnimJoint1532: THAnimJointNode;
HAnimJoint1533: THAnimJointNode;
HAnimSegment1534: THAnimSegmentNode;
Transform1535: TTransformNode;
Transform1536: TTransformNode;
Shape1537: TShapeNode;
Shape1538: TShapeNode;
LineSet1539: TLineSetNode;
Coordinate1540: TCoordinateNode;
ColorRGBA1541: TColorRGBANode;
Shape1542: TShapeNode;
LineSet1543: TLineSetNode;
Coordinate1544: TCoordinateNode;
ColorRGBA1545: TColorRGBANode;
HAnimSite1546: THAnimSiteNode;
TouchSensor1547: TTouchSensorNode;
Shape1548: TShapeNode;
HAnimJoint1549: THAnimJointNode;
HAnimSegment1550: THAnimSegmentNode;
Transform1551: TTransformNode;
Transform1552: TTransformNode;
Shape1553: TShapeNode;
Shape1554: TShapeNode;
LineSet1555: TLineSetNode;
Coordinate1556: TCoordinateNode;
ColorRGBA1557: TColorRGBANode;
HAnimJoint1558: THAnimJointNode;
HAnimSegment1559: THAnimSegmentNode;
Transform1560: TTransformNode;
Transform1561: TTransformNode;
Shape1562: TShapeNode;
Shape1563: TShapeNode;
LineSet1564: TLineSetNode;
Coordinate1565: TCoordinateNode;
ColorRGBA1566: TColorRGBANode;
HAnimJoint1567: THAnimJointNode;
HAnimSegment1568: THAnimSegmentNode;
Transform1569: TTransformNode;
Transform1570: TTransformNode;
Shape1571: TShapeNode;
Shape1572: TShapeNode;
LineSet1573: TLineSetNode;
Coordinate1574: TCoordinateNode;
ColorRGBA1575: TColorRGBANode;
HAnimSite1576: THAnimSiteNode;
TouchSensor1577: TTouchSensorNode;
Shape1578: TShapeNode;
HAnimJoint1579: THAnimJointNode;
HAnimJoint1580: THAnimJointNode;
HAnimSegment1581: THAnimSegmentNode;
Transform1582: TTransformNode;
Transform1583: TTransformNode;
Shape1584: TShapeNode;
Shape1585: TShapeNode;
LineSet1586: TLineSetNode;
Coordinate1587: TCoordinateNode;
ColorRGBA1588: TColorRGBANode;
HAnimJoint1589: THAnimJointNode;
HAnimSegment1590: THAnimSegmentNode;
Transform1591: TTransformNode;
Transform1592: TTransformNode;
Shape1593: TShapeNode;
Shape1594: TShapeNode;
LineSet1595: TLineSetNode;
Coordinate1596: TCoordinateNode;
ColorRGBA1597: TColorRGBANode;
HAnimJoint1598: THAnimJointNode;
HAnimSegment1599: THAnimSegmentNode;
Transform1600: TTransformNode;
Transform1601: TTransformNode;
Shape1602: TShapeNode;
Shape1603: TShapeNode;
LineSet1604: TLineSetNode;
Coordinate1605: TCoordinateNode;
ColorRGBA1606: TColorRGBANode;
HAnimSite1607: THAnimSiteNode;
TouchSensor1608: TTouchSensorNode;
Shape1609: TShapeNode;
HAnimJoint1610: THAnimJointNode;
HAnimJoint1611: THAnimJointNode;
HAnimJoint1612: THAnimJointNode;
HAnimJoint1613: THAnimJointNode;
HAnimJoint1614: THAnimJointNode;
HAnimJoint1615: THAnimJointNode;
HAnimJoint1616: THAnimJointNode;
HAnimJoint1617: THAnimJointNode;
HAnimJoint1618: THAnimJointNode;
HAnimJoint1619: THAnimJointNode;
HAnimJoint1620: THAnimJointNode;
HAnimJoint1621: THAnimJointNode;
HAnimJoint1622: THAnimJointNode;
HAnimJoint1623: THAnimJointNode;
HAnimJoint1624: THAnimJointNode;
HAnimJoint1625: THAnimJointNode;
HAnimJoint1626: THAnimJointNode;
HAnimJoint1627: THAnimJointNode;
HAnimJoint1628: THAnimJointNode;
HAnimJoint1629: THAnimJointNode;
HAnimJoint1630: THAnimJointNode;
HAnimJoint1631: THAnimJointNode;
HAnimJoint1632: THAnimJointNode;
HAnimJoint1633: THAnimJointNode;
HAnimJoint1634: THAnimJointNode;
HAnimJoint1635: THAnimJointNode;
HAnimJoint1636: THAnimJointNode;
HAnimJoint1637: THAnimJointNode;
HAnimJoint1638: THAnimJointNode;
HAnimJoint1639: THAnimJointNode;
HAnimJoint1640: THAnimJointNode;
HAnimJoint1641: THAnimJointNode;
HAnimJoint1642: THAnimJointNode;
HAnimJoint1643: THAnimJointNode;
HAnimJoint1644: THAnimJointNode;
HAnimJoint1645: THAnimJointNode;
HAnimJoint1646: THAnimJointNode;
HAnimJoint1647: THAnimJointNode;
HAnimJoint1648: THAnimJointNode;
HAnimJoint1649: THAnimJointNode;
HAnimJoint1650: THAnimJointNode;
HAnimJoint1651: THAnimJointNode;
HAnimJoint1652: THAnimJointNode;
HAnimJoint1653: THAnimJointNode;
HAnimJoint1654: THAnimJointNode;
HAnimJoint1655: THAnimJointNode;
HAnimJoint1656: THAnimJointNode;
HAnimJoint1657: THAnimJointNode;
HAnimJoint1658: THAnimJointNode;
HAnimJoint1659: THAnimJointNode;
HAnimJoint1660: THAnimJointNode;
HAnimJoint1661: THAnimJointNode;
HAnimJoint1662: THAnimJointNode;
HAnimJoint1663: THAnimJointNode;
HAnimJoint1664: THAnimJointNode;
HAnimJoint1665: THAnimJointNode;
HAnimJoint1666: THAnimJointNode;
HAnimJoint1667: THAnimJointNode;
HAnimJoint1668: THAnimJointNode;
HAnimJoint1669: THAnimJointNode;
HAnimJoint1670: THAnimJointNode;
HAnimJoint1671: THAnimJointNode;
HAnimJoint1672: THAnimJointNode;
HAnimJoint1673: THAnimJointNode;
HAnimJoint1674: THAnimJointNode;
HAnimJoint1675: THAnimJointNode;
HAnimJoint1676: THAnimJointNode;
HAnimJoint1677: THAnimJointNode;
HAnimJoint1678: THAnimJointNode;
HAnimJoint1679: THAnimJointNode;
HAnimJoint1680: THAnimJointNode;
HAnimJoint1681: THAnimJointNode;
HAnimJoint1682: THAnimJointNode;
HAnimJoint1683: THAnimJointNode;
HAnimJoint1684: THAnimJointNode;
HAnimJoint1685: THAnimJointNode;
HAnimJoint1686: THAnimJointNode;
HAnimJoint1687: THAnimJointNode;
HAnimJoint1688: THAnimJointNode;
HAnimJoint1689: THAnimJointNode;
HAnimJoint1690: THAnimJointNode;
HAnimJoint1691: THAnimJointNode;
HAnimJoint1692: THAnimJointNode;
HAnimJoint1693: THAnimJointNode;
HAnimJoint1694: THAnimJointNode;
HAnimJoint1695: THAnimJointNode;
HAnimJoint1696: THAnimJointNode;
HAnimJoint1697: THAnimJointNode;
HAnimJoint1698: THAnimJointNode;
HAnimJoint1699: THAnimJointNode;
HAnimJoint1700: THAnimJointNode;
HAnimJoint1701: THAnimJointNode;
HAnimJoint1702: THAnimJointNode;
HAnimJoint1703: THAnimJointNode;
HAnimJoint1704: THAnimJointNode;
HAnimJoint1705: THAnimJointNode;
HAnimJoint1706: THAnimJointNode;
HAnimJoint1707: THAnimJointNode;
HAnimJoint1708: THAnimJointNode;
HAnimJoint1709: THAnimJointNode;
HAnimJoint1710: THAnimJointNode;
HAnimJoint1711: THAnimJointNode;
HAnimJoint1712: THAnimJointNode;
HAnimJoint1713: THAnimJointNode;
HAnimJoint1714: THAnimJointNode;
HAnimJoint1715: THAnimJointNode;
HAnimJoint1716: THAnimJointNode;
HAnimJoint1717: THAnimJointNode;
HAnimJoint1718: THAnimJointNode;
HAnimJoint1719: THAnimJointNode;
HAnimJoint1720: THAnimJointNode;
HAnimJoint1721: THAnimJointNode;
HAnimJoint1722: THAnimJointNode;
HAnimJoint1723: THAnimJointNode;
HAnimJoint1724: THAnimJointNode;
HAnimJoint1725: THAnimJointNode;
HAnimJoint1726: THAnimJointNode;
HAnimJoint1727: THAnimJointNode;
HAnimJoint1728: THAnimJointNode;
HAnimJoint1729: THAnimJointNode;
HAnimJoint1730: THAnimJointNode;
HAnimJoint1731: THAnimJointNode;
HAnimJoint1732: THAnimJointNode;
HAnimJoint1733: THAnimJointNode;
HAnimJoint1734: THAnimJointNode;
HAnimJoint1735: THAnimJointNode;
HAnimJoint1736: THAnimJointNode;
HAnimJoint1737: THAnimJointNode;
HAnimJoint1738: THAnimJointNode;
HAnimJoint1739: THAnimJointNode;
HAnimJoint1740: THAnimJointNode;
HAnimJoint1741: THAnimJointNode;
HAnimJoint1742: THAnimJointNode;
HAnimJoint1743: THAnimJointNode;
HAnimJoint1744: THAnimJointNode;
HAnimJoint1745: THAnimJointNode;
HAnimJoint1746: THAnimJointNode;
HAnimJoint1747: THAnimJointNode;
HAnimJoint1748: THAnimJointNode;
HAnimJoint1749: THAnimJointNode;
HAnimJoint1750: THAnimJointNode;
HAnimJoint1751: THAnimJointNode;
HAnimJoint1752: THAnimJointNode;
HAnimJoint1753: THAnimJointNode;
HAnimJoint1754: THAnimJointNode;
HAnimJoint1755: THAnimJointNode;
HAnimJoint1756: THAnimJointNode;

procedure InitJohnJoint20Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'JohnJoint20.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'h2.pl';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 Jan 2023';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '9 November 2020';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group11 := TGroupNode.Create;;
Transform12 := TTransformNode.Create;;
{ DEF for markerfor XYZ axes }
Shape13 := TShapeNode.Create;;
{ RGB lines showing XYZ axes }
IndexedLineSet14 := TIndexedLineSetNode.Create;;
IndexedLineSet14.SetColorIndex([0,1,2]);
IndexedLineSet14.ColorPerVertex := False;
IndexedLineSet14.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate15 := TCoordinateNode.Create;;
Coordinate15.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet14.Coord := Coordinate15;
Color16 := TColorNode.Create;;
Color16.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedLineSet14.Color := Color16;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape13.Geometry := IndexedLineSet14;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform12);
Group17 := TGroupNode.Create;;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform18 := TTransformNode.Create;;
Transform19 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part1;
begin
;
Transform19.Translation := Vector3(0,2,0);
Shape20 := TShapeNode.Create;;
Sphere21 := TSphereNode.Create;;
Sphere21.Radius := 0.02;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;;
Material23 := TMaterialNode.Create;;
Material23.DiffuseColor := Vector3(0.8,0,0);
Material23.Transparency := 0.3;
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform19);
Transform24 := TTransformNode.Create;;
Transform24.Translation := Vector3(0,2.1,0);
Shape25 := TShapeNode.Create;;
Sphere26 := TSphereNode.Create;;
Sphere26.Radius := 0.02;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape25.Geometry := Sphere26;
Appearance27 := TAppearanceNode.Create;;
Material28 := TMaterialNode.Create;;
Material28.DiffuseColor := Vector3(0,0,0.8);
Material28.Transparency := 0.3;
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape25.Appearance := Appearance27;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;;
Transform29.Translation := Vector3(0,2.05,0);
end;

procedure InitJohnJoint20Part2;
begin

Shape30 := TShapeNode.Create;;
LineSet31 := TLineSetNode.Create;;
LineSet31.SetVertexCount([2]);
ColorRGBA32 := TColorRGBANode.Create;;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;;
Coordinate33.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet31.Coord := Coordinate33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape30.Geometry := LineSet31;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform29);
Transform34 := TTransformNode.Create;;
Transform34.Translation := Vector3(0,2.1,0);
Shape35 := TShapeNode.Create;;
IndexedFaceSet36 := TIndexedFaceSetNode.Create;;
IndexedFaceSet36.CreaseAngle := 0.5;
IndexedFaceSet36.Solid := False;
IndexedFaceSet36.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA37 := TColorRGBANode.Create;;
ColorRGBA37.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet36.Color := ColorRGBA37;
Coordinate38 := TCoordinateNode.Create;;
Coordinate38.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet36.Coord := Coordinate38;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape35.Geometry := IndexedFaceSet36;
Appearance39 := TAppearanceNode.Create;;
Material40 := TMaterialNode.Create;;
Material40.DiffuseColor := Vector3(1,1,0);
end;

procedure InitJohnJoint20Part3;
begin

Material40.Transparency := 0.3;
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape35.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Transform34.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform34);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform18);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Group17);
NavigationInfo41 := TNavigationInfoNode.Create;;
NavigationInfo41.Speed := 1.5;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo41);
Viewpoint42 := TViewpointNode.Create;;
Viewpoint42.Description := 'default';
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint42);
HAnimHumanoid43 := THAnimHumanoidNode.Create;;
HAnimHumanoid43.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid43.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
Shape44 := TShapeNode.Create;;
IndexedFaceSet45 := TIndexedFaceSetNode.Create;;
IndexedFaceSet45.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet45.CreaseAngle := 3.1;
Coordinate46 := TCoordinateNode.Create;;
Coordinate46.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
end;

procedure InitJohnJoint20Part4;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet45.Coord := Coordinate46;
Color47 := TColorNode.Create;;
Color47.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet45.Color := Color47;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape44.Geometry := IndexedFaceSet45;
Appearance48 := TAppearanceNode.Create;;
ImageTexture49 := TImageTextureNode.Create;;
ImageTexture49.SetUrl(['../resources/images/zBlueSpiralBkg2.gif','../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance48.Texture := ImageTexture49;
Material50 := TMaterialNode.Create;;
Material50.AmbientIntensity := 0.6;
Material50.DiffuseColor := Vector3(1,1,1);
Material50.Shininess := 0.6;
Material50.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance48.Material := Material50;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape44.Appearance := Appearance48;
{ METHOD .SetSkin }
HAnimHumanoid43.Skin := Shape44;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid43.FdSkinCoord.Set(Coordinate46);
HAnimJoint52 := THAnimJointNode.Create;;
HAnimJoint52.Center := Vector3(0,0.824,0.0277);
HAnimSegment53 := THAnimSegmentNode.Create;;
HAnimDisplacer54 := THAnimDisplacerNode.Create;;
HAnimDisplacer54.SetCoordIndex([0]);
HAnimDisplacer54.SetDisplacements([Vector3(0,0,0)]);
{ METHOD .Displacers }
{ METHOD.SET .Displacers }
HAnimSegment53.Displacers := HAnimDisplacer54;
HAnimDisplacer55 := THAnimDisplacerNode.Create;;
HAnimDisplacer55.SetCoordIndex([0]);
HAnimDisplacer55.SetDisplacements([Vector3(0,0,0)]);
end;

procedure InitJohnJoint20Part5;
begin

{ METHOD .Displacers }
{ METHOD.SET .Displacers }
HAnimSegment53.Displacers := HAnimDisplacer55;
Transform56 := TTransformNode.Create;;
{ Empty Transform }
Transform57 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform57.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Transform57);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Transform56);
Shape59 := TShapeNode.Create;;
LineSet60 := TLineSetNode.Create;;
LineSet60.SetVertexCount([2]);
Coordinate61 := TCoordinateNode.Create;;
Coordinate61.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet60.Coord := Coordinate61;
{ from humanoid_root to sacroiliac vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet60.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape59.Geometry := LineSet60;
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Shape59);
HAnimSite63 := THAnimSiteNode.Create;;
HAnimSite63.Translation := Vector3(0,1,0);
TouchSensor64 := TTouchSensorNode.Create;;
TouchSensor64.Description := 'HAnimSite buttocks_standing_wall_contact_point_pt';
{ METHOD .FdChildren.Add }
HAnimSite63.FdChildren.Add(TouchSensor64);
{ METHOD .FdChildren.Add }
HAnimSite63.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite63);
HAnimSite66 := THAnimSiteNode.Create;;
HAnimSite66.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor67 := TTouchSensorNode.Create;;
TouchSensor67.Description := 'HAnimSite crotch_pt';
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(TouchSensor67);
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite66);
HAnimSite69 := THAnimSiteNode.Create;;
end;

procedure InitJohnJoint20Part6;
begin

HAnimSite69.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor70 := TTouchSensorNode.Create;;
TouchSensor70.Description := 'HAnimSite l_asis_pt';
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(TouchSensor70);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite69);
HAnimSite72 := THAnimSiteNode.Create;;
HAnimSite72.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor73 := TTouchSensorNode.Create;;
TouchSensor73.Description := 'HAnimSite l_iliocristale_pt';
{ METHOD .FdChildren.Add }
HAnimSite72.FdChildren.Add(TouchSensor73);
{ METHOD .FdChildren.Add }
HAnimSite72.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite72);
HAnimSite75 := THAnimSiteNode.Create;;
HAnimSite75.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor76 := TTouchSensorNode.Create;;
TouchSensor76.Description := 'HAnimSite l_psis_pt';
{ METHOD .FdChildren.Add }
HAnimSite75.FdChildren.Add(TouchSensor76);
{ METHOD .FdChildren.Add }
HAnimSite75.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite75);
HAnimSite78 := THAnimSiteNode.Create;;
HAnimSite78.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor79 := TTouchSensorNode.Create;;
TouchSensor79.Description := 'HAnimSite l_trochanterion_pt';
{ METHOD .FdChildren.Add }
HAnimSite78.FdChildren.Add(TouchSensor79);
{ METHOD .FdChildren.Add }
HAnimSite78.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite78);
HAnimSite81 := THAnimSiteNode.Create;;
HAnimSite81.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor82 := TTouchSensorNode.Create;;
TouchSensor82.Description := 'HAnimSite r_asis_pt';
end;

procedure InitJohnJoint20Part7;
begin

{ METHOD .FdChildren.Add }
HAnimSite81.FdChildren.Add(TouchSensor82);
{ METHOD .FdChildren.Add }
HAnimSite81.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite81);
HAnimSite84 := THAnimSiteNode.Create;;
HAnimSite84.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor85 := TTouchSensorNode.Create;;
TouchSensor85.Description := 'HAnimSite r_iliocristale_pt';
{ METHOD .FdChildren.Add }
HAnimSite84.FdChildren.Add(TouchSensor85);
{ METHOD .FdChildren.Add }
HAnimSite84.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite84);
HAnimSite87 := THAnimSiteNode.Create;;
HAnimSite87.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor88 := TTouchSensorNode.Create;;
TouchSensor88.Description := 'HAnimSite r_psis_pt';
{ METHOD .FdChildren.Add }
HAnimSite87.FdChildren.Add(TouchSensor88);
{ METHOD .FdChildren.Add }
HAnimSite87.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite87);
HAnimSite90 := THAnimSiteNode.Create;;
HAnimSite90.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor91 := TTouchSensorNode.Create;;
TouchSensor91.Description := 'HAnimSite r_trochanterion_pt';
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(TouchSensor91);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite90);
Shape93 := TShapeNode.Create;;
LineSet94 := TLineSetNode.Create;;
LineSet94.SetVertexCount([2]);
Coordinate95 := TCoordinateNode.Create;;
Coordinate95.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet94.Coord := Coordinate95;
{ from humanoid_root to vl5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet94.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part8;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape93.Geometry := LineSet94;
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(Shape93);
HAnimSite97 := THAnimSiteNode.Create;;
HAnimSite97.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor98 := TTouchSensorNode.Create;;
TouchSensor98.Description := 'HAnimSite navel_pt';
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(TouchSensor98);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite97);
HAnimSite100 := THAnimSiteNode.Create;;
HAnimSite100.Translation := Vector3(0,1,0);
TouchSensor101 := TTouchSensorNode.Create;;
TouchSensor101.Description := 'HAnimSite waist_preferred_anterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite100.FdChildren.Add(TouchSensor101);
{ METHOD .FdChildren.Add }
HAnimSite100.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite100);
HAnimSite103 := THAnimSiteNode.Create;;
HAnimSite103.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor104 := TTouchSensorNode.Create;;
TouchSensor104.Description := 'HAnimSite waist_preferred_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite103.FdChildren.Add(TouchSensor104);
{ METHOD .FdChildren.Add }
HAnimSite103.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment53.FdChildren.Add(HAnimSite103);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimSegment53);
HAnimJoint106 := THAnimJointNode.Create;;
HAnimJoint106.Center := Vector3(0,0.9149,0.0016);
HAnimSegment107 := THAnimSegmentNode.Create;;
Transform108 := TTransformNode.Create;;
{ Empty Transform }
Transform109 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform109.FdChildren.Add(Shape25);
end;

procedure InitJohnJoint20Part9;
begin

{ METHOD .FdChildren.Add }
Transform108.FdChildren.Add(Transform109);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Transform108);
Shape111 := TShapeNode.Create;;
LineSet112 := TLineSetNode.Create;;
LineSet112.SetVertexCount([2]);
Coordinate113 := TCoordinateNode.Create;;
Coordinate113.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet112.Coord := Coordinate113;
{ from sacroiliac to l_hip vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet112.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape111.Geometry := LineSet112;
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Shape111);
HAnimSite115 := THAnimSiteNode.Create;;
HAnimSite115.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor116 := TTouchSensorNode.Create;;
TouchSensor116.Description := 'HAnimSite l_femoral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite115.FdChildren.Add(TouchSensor116);
{ METHOD .FdChildren.Add }
HAnimSite115.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite115);
HAnimSite118 := THAnimSiteNode.Create;;
HAnimSite118.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor119 := TTouchSensorNode.Create;;
TouchSensor119.Description := 'HAnimSite l_femoral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(TouchSensor119);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite118);
HAnimSite121 := THAnimSiteNode.Create;;
HAnimSite121.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor122 := TTouchSensorNode.Create;;
TouchSensor122.Description := 'HAnimSite l_knee_crease_pt';
{ METHOD .FdChildren.Add }
HAnimSite121.FdChildren.Add(TouchSensor122);
{ METHOD .FdChildren.Add }
HAnimSite121.FdChildren.Add(Shape35);
end;

procedure InitJohnJoint20Part10;
begin

{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite121);
HAnimSite124 := THAnimSiteNode.Create;;
HAnimSite124.Translation := Vector3(0,1,0);
TouchSensor125 := TTouchSensorNode.Create;;
TouchSensor125.Description := 'HAnimSite l_suprapatella_pt';
{ METHOD .FdChildren.Add }
HAnimSite124.FdChildren.Add(TouchSensor125);
{ METHOD .FdChildren.Add }
HAnimSite124.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite124);
Shape127 := TShapeNode.Create;;
LineSet128 := TLineSetNode.Create;;
LineSet128.SetVertexCount([2]);
Coordinate129 := TCoordinateNode.Create;;
Coordinate129.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet128.Coord := Coordinate129;
{ from sacroiliac to r_hip vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet128.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape127.Geometry := LineSet128;
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Shape127);
HAnimSite131 := THAnimSiteNode.Create;;
HAnimSite131.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor132 := TTouchSensorNode.Create;;
TouchSensor132.Description := 'HAnimSite r_femoral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite131.FdChildren.Add(TouchSensor132);
{ METHOD .FdChildren.Add }
HAnimSite131.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite131);
HAnimSite134 := THAnimSiteNode.Create;;
HAnimSite134.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor135 := TTouchSensorNode.Create;;
TouchSensor135.Description := 'HAnimSite r_femoral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite134.FdChildren.Add(TouchSensor135);
{ METHOD .FdChildren.Add }
HAnimSite134.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite134);
end;

procedure InitJohnJoint20Part11;
begin

HAnimSite137 := THAnimSiteNode.Create;;
HAnimSite137.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor138 := TTouchSensorNode.Create;;
TouchSensor138.Description := 'HAnimSite r_knee_crease_pt';
{ METHOD .FdChildren.Add }
HAnimSite137.FdChildren.Add(TouchSensor138);
{ METHOD .FdChildren.Add }
HAnimSite137.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite137);
HAnimSite140 := THAnimSiteNode.Create;;
HAnimSite140.Translation := Vector3(0,1,0);
TouchSensor141 := TTouchSensorNode.Create;;
TouchSensor141.Description := 'HAnimSite r_suprapatella_pt';
{ METHOD .FdChildren.Add }
HAnimSite140.FdChildren.Add(TouchSensor141);
{ METHOD .FdChildren.Add }
HAnimSite140.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(HAnimSite140);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimSegment107);
HAnimJoint143 := THAnimJointNode.Create;;
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment144 := THAnimSegmentNode.Create;;
Transform145 := TTransformNode.Create;;
{ Empty Transform }
Transform146 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform146.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform145.FdChildren.Add(Transform146);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Transform145);
Shape148 := TShapeNode.Create;;
LineSet149 := TLineSetNode.Create;;
LineSet149.SetVertexCount([2]);
Coordinate150 := TCoordinateNode.Create;;
Coordinate150.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet149.Coord := Coordinate150;
end;

procedure InitJohnJoint20Part12;
begin

{ from l_hip to l_knee vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet149.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape148.Geometry := LineSet149;
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Shape148);
HAnimSite152 := THAnimSiteNode.Create;;
HAnimSite152.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor153 := TTouchSensorNode.Create;;
TouchSensor153.Description := 'HAnimSite l_lateral_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(TouchSensor153);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite152);
HAnimSite155 := THAnimSiteNode.Create;;
HAnimSite155.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor156 := TTouchSensorNode.Create;;
TouchSensor156.Description := 'HAnimSite l_medial_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite155.FdChildren.Add(TouchSensor156);
{ METHOD .FdChildren.Add }
HAnimSite155.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite155);
HAnimSite158 := THAnimSiteNode.Create;;
HAnimSite158.Translation := Vector3(0,1,0);
TouchSensor159 := TTouchSensorNode.Create;;
TouchSensor159.Description := 'HAnimSite l_tibiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite158.FdChildren.Add(TouchSensor159);
{ METHOD .FdChildren.Add }
HAnimSite158.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite158);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimSegment144);
HAnimJoint161 := THAnimJointNode.Create;;
HAnimJoint161.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment162 := THAnimSegmentNode.Create;;
Transform163 := TTransformNode.Create;;
{ Empty Transform }
Transform164 := TTransformNode.Create;;
end;

procedure InitJohnJoint20Part13;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform163.FdChildren.Add(Transform164);
{ METHOD .FdChildren.Add }
HAnimSegment162.FdChildren.Add(Transform163);
Shape166 := TShapeNode.Create;;
LineSet167 := TLineSetNode.Create;;
LineSet167.SetVertexCount([2]);
Coordinate168 := TCoordinateNode.Create;;
Coordinate168.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet167.Coord := Coordinate168;
{ from l_knee to l_talocrural vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet167.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape166.Geometry := LineSet167;
{ METHOD .FdChildren.Add }
HAnimSegment162.FdChildren.Add(Shape166);
HAnimSite170 := THAnimSiteNode.Create;;
HAnimSite170.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor171 := TTouchSensorNode.Create;;
TouchSensor171.Description := 'HAnimSite l_calcaneus_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite170.FdChildren.Add(TouchSensor171);
{ METHOD .FdChildren.Add }
HAnimSite170.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment162.FdChildren.Add(HAnimSite170);
HAnimSite173 := THAnimSiteNode.Create;;
HAnimSite173.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor174 := TTouchSensorNode.Create;;
TouchSensor174.Description := 'HAnimSite l_sphyrion_pt';
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(TouchSensor174);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment162.FdChildren.Add(HAnimSite173);
{ METHOD .FdChildren.Add }
HAnimJoint161.FdChildren.Add(HAnimSegment162);
HAnimJoint176 := THAnimJointNode.Create;;
HAnimJoint176.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment177 := THAnimSegmentNode.Create;;
Transform178 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part14;
begin
;
Transform178.Scale := Vector3(0.15,0.15,0.15);
Transform178.Translation := Vector3(0.08,0.06,-0.025);
Transform178.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform179 := TTransformNode.Create;;
{ Empty Transform left foot }
{ METHOD .FdChildren.Add }
Transform179.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform178.FdChildren.Add(Transform179);
{ METHOD .FdChildren.Add }
HAnimSegment177.FdChildren.Add(Transform178);
Shape181 := TShapeNode.Create;;
LineSet182 := TLineSetNode.Create;;
LineSet182.SetVertexCount([2]);
Coordinate183 := TCoordinateNode.Create;;
Coordinate183.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet182.Coord := Coordinate183;
{ from l_talocrural to l_talocalcaneonavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet182.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape181.Geometry := LineSet182;
{ METHOD .FdChildren.Add }
HAnimSegment177.FdChildren.Add(Shape181);
Shape185 := TShapeNode.Create;;
LineSet186 := TLineSetNode.Create;;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;;
Coordinate187.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet186.Coord := Coordinate187;
{ from l_talocrural to l_calcaneocuboid vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet186.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape185.Geometry := LineSet186;
{ METHOD .FdChildren.Add }
HAnimSegment177.FdChildren.Add(Shape185);
{ METHOD .FdChildren.Add }
HAnimJoint176.FdChildren.Add(HAnimSegment177);
HAnimJoint189 := THAnimJointNode.Create;;
HAnimJoint189.Center := Vector3(0,1,0);
HAnimSegment190 := THAnimSegmentNode.Create;;
Transform191 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part15;
begin
;
{ Empty Transform }
Transform192 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform192.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform191.FdChildren.Add(Transform192);
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(Transform191);
Shape194 := TShapeNode.Create;;
LineSet195 := TLineSetNode.Create;;
LineSet195.SetVertexCount([2]);
Coordinate196 := TCoordinateNode.Create;;
Coordinate196.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet195.Coord := Coordinate196;
{ from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet195.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape194.Geometry := LineSet195;
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(Shape194);
Shape198 := TShapeNode.Create;;
LineSet199 := TLineSetNode.Create;;
LineSet199.SetVertexCount([2]);
Coordinate200 := TCoordinateNode.Create;;
Coordinate200.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet199.Coord := Coordinate200;
{ from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet199.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape198.Geometry := LineSet199;
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(Shape198);
Shape202 := TShapeNode.Create;;
LineSet203 := TLineSetNode.Create;;
LineSet203.SetVertexCount([2]);
Coordinate204 := TCoordinateNode.Create;;
Coordinate204.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet203.Coord := Coordinate204;
{ from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet203.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part16;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape202.Geometry := LineSet203;
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(Shape202);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimSegment190);
HAnimJoint206 := THAnimJointNode.Create;;
HAnimJoint206.Center := Vector3(0,1,0);
HAnimSegment207 := THAnimSegmentNode.Create;;
Transform208 := TTransformNode.Create;;
{ Empty Transform }
Transform209 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform208.FdChildren.Add(Transform209);
{ METHOD .FdChildren.Add }
HAnimSegment207.FdChildren.Add(Transform208);
Shape211 := TShapeNode.Create;;
LineSet212 := TLineSetNode.Create;;
LineSet212.SetVertexCount([2]);
Coordinate213 := TCoordinateNode.Create;;
Coordinate213.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet212.Coord := Coordinate213;
{ from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet212.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape211.Geometry := LineSet212;
{ METHOD .FdChildren.Add }
HAnimSegment207.FdChildren.Add(Shape211);
{ METHOD .FdChildren.Add }
HAnimJoint206.FdChildren.Add(HAnimSegment207);
HAnimJoint215 := THAnimJointNode.Create;;
HAnimJoint215.Center := Vector3(0,1,0);
HAnimSegment216 := THAnimSegmentNode.Create;;
Transform217 := TTransformNode.Create;;
{ Empty Transform }
Transform218 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform218.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform217.FdChildren.Add(Transform218);
{ METHOD .FdChildren.Add }
HAnimSegment216.FdChildren.Add(Transform217);
end;

procedure InitJohnJoint20Part17;
begin

Shape220 := TShapeNode.Create;;
LineSet221 := TLineSetNode.Create;;
LineSet221.SetVertexCount([2]);
Coordinate222 := TCoordinateNode.Create;;
Coordinate222.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet221.Coord := Coordinate222;
{ from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet221.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape220.Geometry := LineSet221;
{ METHOD .FdChildren.Add }
HAnimSegment216.FdChildren.Add(Shape220);
HAnimSite224 := THAnimSiteNode.Create;;
HAnimSite224.Translation := Vector3(0,1,0);
TouchSensor225 := TTouchSensorNode.Create;;
TouchSensor225.Description := 'HAnimSite l_metatarsal_phalanx_1_pt';
{ METHOD .FdChildren.Add }
HAnimSite224.FdChildren.Add(TouchSensor225);
{ METHOD .FdChildren.Add }
HAnimSite224.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment216.FdChildren.Add(HAnimSite224);
{ METHOD .FdChildren.Add }
HAnimJoint215.FdChildren.Add(HAnimSegment216);
HAnimJoint227 := THAnimJointNode.Create;;
HAnimJoint227.Center := Vector3(0,1,0);
HAnimSegment228 := THAnimSegmentNode.Create;;
Transform229 := TTransformNode.Create;;
{ Empty Transform }
Transform230 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform230.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(Transform230);
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(Transform229);
Shape232 := TShapeNode.Create;;
LineSet233 := TLineSetNode.Create;;
LineSet233.SetVertexCount([2]);
Coordinate234 := TCoordinateNode.Create;
end;

procedure InitJohnJoint20Part18;
begin
;
Coordinate234.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet233.Coord := Coordinate234;
{ from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet233.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape232.Geometry := LineSet233;
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(Shape232);
HAnimSite236 := THAnimSiteNode.Create;;
HAnimSite236.Translation := Vector3(0,1,0);
TouchSensor237 := TTouchSensorNode.Create;;
TouchSensor237.Description := 'HAnimSite l_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite236.FdChildren.Add(TouchSensor237);
{ METHOD .FdChildren.Add }
HAnimSite236.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment228.FdChildren.Add(HAnimSite236);
{ METHOD .FdChildren.Add }
HAnimJoint227.FdChildren.Add(HAnimSegment228);
HAnimJoint239 := THAnimJointNode.Create;;
HAnimJoint239.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint227.FdChildren.Add(HAnimJoint239);
{ METHOD .FdChildren.Add }
HAnimJoint215.FdChildren.Add(HAnimJoint227);
{ METHOD .FdChildren.Add }
HAnimJoint206.FdChildren.Add(HAnimJoint215);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimJoint206);
HAnimJoint240 := THAnimJointNode.Create;;
HAnimJoint240.Center := Vector3(0,1,0);
HAnimSegment241 := THAnimSegmentNode.Create;;
Transform242 := TTransformNode.Create;;
{ Empty Transform }
Transform243 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform243.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform242.FdChildren.Add(Transform243);
{ METHOD .FdChildren.Add }
HAnimSegment241.FdChildren.Add(Transform242);
Shape245 := TShapeNode.Create;;
LineSet246 := TLineSetNode.Create;;
LineSet246.SetVertexCount([2]);
end;

procedure InitJohnJoint20Part19;
begin

Coordinate247 := TCoordinateNode.Create;;
Coordinate247.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet246.Coord := Coordinate247;
{ from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet246.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape245.Geometry := LineSet246;
{ METHOD .FdChildren.Add }
HAnimSegment241.FdChildren.Add(Shape245);
{ METHOD .FdChildren.Add }
HAnimJoint240.FdChildren.Add(HAnimSegment241);
HAnimJoint249 := THAnimJointNode.Create;;
HAnimJoint249.Center := Vector3(0,1,0);
HAnimSegment250 := THAnimSegmentNode.Create;;
Transform251 := TTransformNode.Create;;
{ Empty Transform }
Transform252 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform252.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform251.FdChildren.Add(Transform252);
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Transform251);
Shape254 := TShapeNode.Create;;
LineSet255 := TLineSetNode.Create;;
LineSet255.SetVertexCount([2]);
Coordinate256 := TCoordinateNode.Create;;
Coordinate256.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet255.Coord := Coordinate256;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet255.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape254.Geometry := LineSet255;
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Shape254);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimSegment250);
HAnimJoint258 := THAnimJointNode.Create;;
HAnimJoint258.Center := Vector3(0,1,0);
HAnimSegment259 := THAnimSegmentNode.Create;;
Transform260 := TTransformNode.Create;;
end;

procedure InitJohnJoint20Part20;
begin

{ Empty Transform }
Transform261 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform261.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform260.FdChildren.Add(Transform261);
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Transform260);
Shape263 := TShapeNode.Create;;
LineSet264 := TLineSetNode.Create;;
LineSet264.SetVertexCount([2]);
Coordinate265 := TCoordinateNode.Create;;
Coordinate265.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet264.Coord := Coordinate265;
{ from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet264.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape263.Geometry := LineSet264;
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Shape263);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimSegment259);
HAnimJoint267 := THAnimJointNode.Create;;
HAnimJoint267.Center := Vector3(0,1,0);
HAnimSegment268 := THAnimSegmentNode.Create;;
Transform269 := TTransformNode.Create;;
{ Empty Transform }
Transform270 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform269.FdChildren.Add(Transform270);
{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(Transform269);
Shape272 := TShapeNode.Create;;
LineSet273 := TLineSetNode.Create;;
LineSet273.SetVertexCount([2]);
Coordinate274 := TCoordinateNode.Create;;
Coordinate274.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet273.Coord := Coordinate274;
{ from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet273.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part21;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape272.Geometry := LineSet273;
{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(Shape272);
HAnimSite276 := THAnimSiteNode.Create;;
HAnimSite276.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor277 := TTouchSensorNode.Create;;
TouchSensor277.Description := 'HAnimSite l_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite276.FdChildren.Add(TouchSensor277);
{ METHOD .FdChildren.Add }
HAnimSite276.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment268.FdChildren.Add(HAnimSite276);
{ METHOD .FdChildren.Add }
HAnimJoint267.FdChildren.Add(HAnimSegment268);
HAnimJoint279 := THAnimJointNode.Create;;
HAnimJoint279.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint267.FdChildren.Add(HAnimJoint279);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimJoint267);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimJoint258);
{ METHOD .FdChildren.Add }
HAnimJoint240.FdChildren.Add(HAnimJoint249);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimJoint240);
HAnimJoint280 := THAnimJointNode.Create;;
HAnimJoint280.Center := Vector3(0,1,0);
HAnimSegment281 := THAnimSegmentNode.Create;;
Transform282 := TTransformNode.Create;;
{ Empty Transform }
Transform283 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform283.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform282.FdChildren.Add(Transform283);
{ METHOD .FdChildren.Add }
HAnimSegment281.FdChildren.Add(Transform282);
Shape285 := TShapeNode.Create;;
LineSet286 := TLineSetNode.Create;;
LineSet286.SetVertexCount([2]);
Coordinate287 := TCoordinateNode.Create;;
Coordinate287.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
end;

procedure InitJohnJoint20Part22;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet286.Coord := Coordinate287;
{ from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet286.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape285.Geometry := LineSet286;
{ METHOD .FdChildren.Add }
HAnimSegment281.FdChildren.Add(Shape285);
{ METHOD .FdChildren.Add }
HAnimJoint280.FdChildren.Add(HAnimSegment281);
HAnimJoint289 := THAnimJointNode.Create;;
HAnimJoint289.Center := Vector3(0,1,0);
HAnimSegment290 := THAnimSegmentNode.Create;;
Transform291 := TTransformNode.Create;;
{ Empty Transform }
Transform292 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform292.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform292);
{ METHOD .FdChildren.Add }
HAnimSegment290.FdChildren.Add(Transform291);
Shape294 := TShapeNode.Create;;
LineSet295 := TLineSetNode.Create;;
LineSet295.SetVertexCount([2]);
Coordinate296 := TCoordinateNode.Create;;
Coordinate296.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet295.Coord := Coordinate296;
{ from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet295.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape294.Geometry := LineSet295;
{ METHOD .FdChildren.Add }
HAnimSegment290.FdChildren.Add(Shape294);
{ METHOD .FdChildren.Add }
HAnimJoint289.FdChildren.Add(HAnimSegment290);
HAnimJoint298 := THAnimJointNode.Create;;
HAnimJoint298.Center := Vector3(0,1,0);
HAnimSegment299 := THAnimSegmentNode.Create;;
Transform300 := TTransformNode.Create;;
{ Empty Transform }
Transform301 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform301.FdChildren.Add(Shape25);
end;

procedure InitJohnJoint20Part23;
begin

{ METHOD .FdChildren.Add }
Transform300.FdChildren.Add(Transform301);
{ METHOD .FdChildren.Add }
HAnimSegment299.FdChildren.Add(Transform300);
Shape303 := TShapeNode.Create;;
LineSet304 := TLineSetNode.Create;;
LineSet304.SetVertexCount([2]);
Coordinate305 := TCoordinateNode.Create;;
Coordinate305.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet304.Coord := Coordinate305;
{ from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet304.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape303.Geometry := LineSet304;
{ METHOD .FdChildren.Add }
HAnimSegment299.FdChildren.Add(Shape303);
{ METHOD .FdChildren.Add }
HAnimJoint298.FdChildren.Add(HAnimSegment299);
HAnimJoint307 := THAnimJointNode.Create;;
HAnimJoint307.Center := Vector3(0,1,0);
HAnimSegment308 := THAnimSegmentNode.Create;;
Transform309 := TTransformNode.Create;;
{ Empty Transform }
Transform310 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform310.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform309.FdChildren.Add(Transform310);
{ METHOD .FdChildren.Add }
HAnimSegment308.FdChildren.Add(Transform309);
Shape312 := TShapeNode.Create;;
LineSet313 := TLineSetNode.Create;;
LineSet313.SetVertexCount([2]);
Coordinate314 := TCoordinateNode.Create;;
Coordinate314.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet313.Coord := Coordinate314;
{ from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet313.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape312.Geometry := LineSet313;
{ METHOD .FdChildren.Add }
HAnimSegment308.FdChildren.Add(Shape312);
HAnimSite316 := THAnimSiteNode.Create;
end;

procedure InitJohnJoint20Part24;
begin
;
HAnimSite316.Translation := Vector3(0,1,0);
TouchSensor317 := TTouchSensorNode.Create;;
TouchSensor317.Description := 'HAnimSite l_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite316.FdChildren.Add(TouchSensor317);
{ METHOD .FdChildren.Add }
HAnimSite316.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment308.FdChildren.Add(HAnimSite316);
{ METHOD .FdChildren.Add }
HAnimJoint307.FdChildren.Add(HAnimSegment308);
HAnimJoint319 := THAnimJointNode.Create;;
HAnimJoint319.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint307.FdChildren.Add(HAnimJoint319);
{ METHOD .FdChildren.Add }
HAnimJoint298.FdChildren.Add(HAnimJoint307);
{ METHOD .FdChildren.Add }
HAnimJoint289.FdChildren.Add(HAnimJoint298);
{ METHOD .FdChildren.Add }
HAnimJoint280.FdChildren.Add(HAnimJoint289);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimJoint280);
{ METHOD .FdChildren.Add }
HAnimJoint176.FdChildren.Add(HAnimJoint189);
HAnimJoint320 := THAnimJointNode.Create;;
HAnimJoint320.Center := Vector3(0,1,0);
HAnimSegment321 := THAnimSegmentNode.Create;;
Transform322 := TTransformNode.Create;;
{ Empty Transform }
Transform323 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform323.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform322.FdChildren.Add(Transform323);
{ METHOD .FdChildren.Add }
HAnimSegment321.FdChildren.Add(Transform322);
Shape325 := TShapeNode.Create;;
LineSet326 := TLineSetNode.Create;;
LineSet326.SetVertexCount([2]);
Coordinate327 := TCoordinateNode.Create;;
Coordinate327.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet326.Coord := Coordinate327;
{ from l_calcaneocuboid to l_transversetarsal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet326.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part25;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape325.Geometry := LineSet326;
{ METHOD .FdChildren.Add }
HAnimSegment321.FdChildren.Add(Shape325);
{ METHOD .FdChildren.Add }
HAnimJoint320.FdChildren.Add(HAnimSegment321);
HAnimJoint329 := THAnimJointNode.Create;;
HAnimJoint329.Center := Vector3(0,1,0);
HAnimSegment330 := THAnimSegmentNode.Create;;
Transform331 := TTransformNode.Create;;
{ Empty Transform }
Transform332 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform332.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform331.FdChildren.Add(Transform332);
{ METHOD .FdChildren.Add }
HAnimSegment330.FdChildren.Add(Transform331);
Shape334 := TShapeNode.Create;;
LineSet335 := TLineSetNode.Create;;
LineSet335.SetVertexCount([2]);
Coordinate336 := TCoordinateNode.Create;;
Coordinate336.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet335.Coord := Coordinate336;
{ from l_transversetarsal to l_tarsometatarsal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet335.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape334.Geometry := LineSet335;
{ METHOD .FdChildren.Add }
HAnimSegment330.FdChildren.Add(Shape334);
Shape338 := TShapeNode.Create;;
LineSet339 := TLineSetNode.Create;;
LineSet339.SetVertexCount([2]);
Coordinate340 := TCoordinateNode.Create;;
Coordinate340.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet339.Coord := Coordinate340;
{ from l_transversetarsal to l_tarsometatarsal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet339.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape338.Geometry := LineSet339;
{ METHOD .FdChildren.Add }
HAnimSegment330.FdChildren.Add(Shape338);
{ METHOD .FdChildren.Add }
HAnimJoint329.FdChildren.Add(HAnimSegment330);
end;

procedure InitJohnJoint20Part26;
begin

HAnimJoint342 := THAnimJointNode.Create;;
HAnimJoint342.Center := Vector3(0,1,0);
HAnimSegment343 := THAnimSegmentNode.Create;;
Transform344 := TTransformNode.Create;;
{ Empty Transform }
Transform345 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform345.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform344.FdChildren.Add(Transform345);
{ METHOD .FdChildren.Add }
HAnimSegment343.FdChildren.Add(Transform344);
Shape347 := TShapeNode.Create;;
LineSet348 := TLineSetNode.Create;;
LineSet348.SetVertexCount([2]);
Coordinate349 := TCoordinateNode.Create;;
Coordinate349.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet348.Coord := Coordinate349;
{ from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet348.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape347.Geometry := LineSet348;
{ METHOD .FdChildren.Add }
HAnimSegment343.FdChildren.Add(Shape347);
{ METHOD .FdChildren.Add }
HAnimJoint342.FdChildren.Add(HAnimSegment343);
HAnimJoint351 := THAnimJointNode.Create;;
HAnimJoint351.Center := Vector3(0,1,0);
HAnimSegment352 := THAnimSegmentNode.Create;;
Transform353 := TTransformNode.Create;;
{ Empty Transform }
Transform354 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform354.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform353.FdChildren.Add(Transform354);
{ METHOD .FdChildren.Add }
HAnimSegment352.FdChildren.Add(Transform353);
Shape356 := TShapeNode.Create;;
LineSet357 := TLineSetNode.Create;
end;

procedure InitJohnJoint20Part27;
begin
;
LineSet357.SetVertexCount([2]);
Coordinate358 := TCoordinateNode.Create;;
Coordinate358.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet357.Coord := Coordinate358;
{ from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet357.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape356.Geometry := LineSet357;
{ METHOD .FdChildren.Add }
HAnimSegment352.FdChildren.Add(Shape356);
{ METHOD .FdChildren.Add }
HAnimJoint351.FdChildren.Add(HAnimSegment352);
HAnimJoint360 := THAnimJointNode.Create;;
HAnimJoint360.Center := Vector3(0,1,0);
HAnimSegment361 := THAnimSegmentNode.Create;;
Transform362 := TTransformNode.Create;;
{ Empty Transform }
Transform363 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform363.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform362.FdChildren.Add(Transform363);
{ METHOD .FdChildren.Add }
HAnimSegment361.FdChildren.Add(Transform362);
Shape365 := TShapeNode.Create;;
LineSet366 := TLineSetNode.Create;;
LineSet366.SetVertexCount([2]);
Coordinate367 := TCoordinateNode.Create;;
Coordinate367.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet366.Coord := Coordinate367;
{ from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet366.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape365.Geometry := LineSet366;
{ METHOD .FdChildren.Add }
HAnimSegment361.FdChildren.Add(Shape365);
HAnimSite369 := THAnimSiteNode.Create;;
HAnimSite369.Translation := Vector3(0,1,0);
TouchSensor370 := TTouchSensorNode.Create;;
TouchSensor370.Description := 'HAnimSite l_tarsal_distal_phalanx_4_tip';
end;

procedure InitJohnJoint20Part28;
begin

{ METHOD .FdChildren.Add }
HAnimSite369.FdChildren.Add(TouchSensor370);
{ METHOD .FdChildren.Add }
HAnimSite369.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment361.FdChildren.Add(HAnimSite369);
{ METHOD .FdChildren.Add }
HAnimJoint360.FdChildren.Add(HAnimSegment361);
HAnimJoint372 := THAnimJointNode.Create;;
HAnimJoint372.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint360.FdChildren.Add(HAnimJoint372);
{ METHOD .FdChildren.Add }
HAnimJoint351.FdChildren.Add(HAnimJoint360);
{ METHOD .FdChildren.Add }
HAnimJoint342.FdChildren.Add(HAnimJoint351);
{ METHOD .FdChildren.Add }
HAnimJoint329.FdChildren.Add(HAnimJoint342);
HAnimJoint373 := THAnimJointNode.Create;;
HAnimJoint373.Center := Vector3(0,1,0);
HAnimSegment374 := THAnimSegmentNode.Create;;
Transform375 := TTransformNode.Create;;
{ Empty Transform }
Transform376 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform376.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform375.FdChildren.Add(Transform376);
{ METHOD .FdChildren.Add }
HAnimSegment374.FdChildren.Add(Transform375);
Shape378 := TShapeNode.Create;;
LineSet379 := TLineSetNode.Create;;
LineSet379.SetVertexCount([2]);
Coordinate380 := TCoordinateNode.Create;;
Coordinate380.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet379.Coord := Coordinate380;
{ from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet379.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape378.Geometry := LineSet379;
{ METHOD .FdChildren.Add }
HAnimSegment374.FdChildren.Add(Shape378);
HAnimSite382 := THAnimSiteNode.Create;;
HAnimSite382.Translation := Vector3(0,1,0);
TouchSensor383 := TTouchSensorNode.Create;;
end;

procedure InitJohnJoint20Part29;
begin

TouchSensor383.Description := 'HAnimSite l_metatarsal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite382.FdChildren.Add(TouchSensor383);
{ METHOD .FdChildren.Add }
HAnimSite382.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment374.FdChildren.Add(HAnimSite382);
{ METHOD .FdChildren.Add }
HAnimJoint373.FdChildren.Add(HAnimSegment374);
HAnimJoint385 := THAnimJointNode.Create;;
HAnimJoint385.Center := Vector3(0,1,0);
HAnimSegment386 := THAnimSegmentNode.Create;;
Transform387 := TTransformNode.Create;;
{ Empty Transform }
Transform388 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform388.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform387.FdChildren.Add(Transform388);
{ METHOD .FdChildren.Add }
HAnimSegment386.FdChildren.Add(Transform387);
Shape390 := TShapeNode.Create;;
LineSet391 := TLineSetNode.Create;;
LineSet391.SetVertexCount([2]);
Coordinate392 := TCoordinateNode.Create;;
Coordinate392.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet391.Coord := Coordinate392;
{ from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet391.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape390.Geometry := LineSet391;
{ METHOD .FdChildren.Add }
HAnimSegment386.FdChildren.Add(Shape390);
{ METHOD .FdChildren.Add }
HAnimJoint385.FdChildren.Add(HAnimSegment386);
HAnimJoint394 := THAnimJointNode.Create;;
HAnimJoint394.Center := Vector3(0,1,0);
HAnimSegment395 := THAnimSegmentNode.Create;;
Transform396 := TTransformNode.Create;;
{ Empty Transform }
Transform397 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform397.FdChildren.Add(Shape25);
end;

procedure InitJohnJoint20Part30;
begin

{ METHOD .FdChildren.Add }
Transform396.FdChildren.Add(Transform397);
{ METHOD .FdChildren.Add }
HAnimSegment395.FdChildren.Add(Transform396);
Shape399 := TShapeNode.Create;;
LineSet400 := TLineSetNode.Create;;
LineSet400.SetVertexCount([2]);
Coordinate401 := TCoordinateNode.Create;;
Coordinate401.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet400.Coord := Coordinate401;
{ from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet400.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape399.Geometry := LineSet400;
{ METHOD .FdChildren.Add }
HAnimSegment395.FdChildren.Add(Shape399);
HAnimSite403 := THAnimSiteNode.Create;;
HAnimSite403.Translation := Vector3(0,1,0);
TouchSensor404 := TTouchSensorNode.Create;;
TouchSensor404.Description := 'HAnimSite l_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite403.FdChildren.Add(TouchSensor404);
{ METHOD .FdChildren.Add }
HAnimSite403.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment395.FdChildren.Add(HAnimSite403);
{ METHOD .FdChildren.Add }
HAnimJoint394.FdChildren.Add(HAnimSegment395);
HAnimJoint406 := THAnimJointNode.Create;;
HAnimJoint406.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint394.FdChildren.Add(HAnimJoint406);
{ METHOD .FdChildren.Add }
HAnimJoint385.FdChildren.Add(HAnimJoint394);
{ METHOD .FdChildren.Add }
HAnimJoint373.FdChildren.Add(HAnimJoint385);
{ METHOD .FdChildren.Add }
HAnimJoint329.FdChildren.Add(HAnimJoint373);
{ METHOD .FdChildren.Add }
HAnimJoint320.FdChildren.Add(HAnimJoint329);
{ METHOD .FdChildren.Add }
HAnimJoint176.FdChildren.Add(HAnimJoint320);
{ METHOD .FdChildren.Add }
HAnimJoint161.FdChildren.Add(HAnimJoint176);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimJoint161);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint143);
HAnimJoint407 := THAnimJointNode.Create;;
HAnimJoint407.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment408 := THAnimSegmentNode.Create;
end;

procedure InitJohnJoint20Part31;
begin
;
Transform409 := TTransformNode.Create;;
{ Empty Transform }
Transform410 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform410.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform409.FdChildren.Add(Transform410);
{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(Transform409);
Shape412 := TShapeNode.Create;;
LineSet413 := TLineSetNode.Create;;
LineSet413.SetVertexCount([2]);
Coordinate414 := TCoordinateNode.Create;;
Coordinate414.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet413.Coord := Coordinate414;
{ from r_hip to r_knee vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet413.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape412.Geometry := LineSet413;
{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(Shape412);
HAnimSite416 := THAnimSiteNode.Create;;
HAnimSite416.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor417 := TTouchSensorNode.Create;;
TouchSensor417.Description := 'HAnimSite r_lateral_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(TouchSensor417);
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(HAnimSite416);
HAnimSite419 := THAnimSiteNode.Create;;
HAnimSite419.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor420 := TTouchSensorNode.Create;;
TouchSensor420.Description := 'HAnimSite r_medial_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite419.FdChildren.Add(TouchSensor420);
{ METHOD .FdChildren.Add }
HAnimSite419.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(HAnimSite419);
HAnimSite422 := THAnimSiteNode.Create;;
end;

procedure InitJohnJoint20Part32;
begin

HAnimSite422.Translation := Vector3(0,1,0);
TouchSensor423 := TTouchSensorNode.Create;;
TouchSensor423.Description := 'HAnimSite r_tibiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite422.FdChildren.Add(TouchSensor423);
{ METHOD .FdChildren.Add }
HAnimSite422.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(HAnimSite422);
{ METHOD .FdChildren.Add }
HAnimJoint407.FdChildren.Add(HAnimSegment408);
HAnimJoint425 := THAnimJointNode.Create;;
HAnimJoint425.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment426 := THAnimSegmentNode.Create;;
Transform427 := TTransformNode.Create;;
{ Empty Transform }
Transform428 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform428.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform427.FdChildren.Add(Transform428);
{ METHOD .FdChildren.Add }
HAnimSegment426.FdChildren.Add(Transform427);
Shape430 := TShapeNode.Create;;
LineSet431 := TLineSetNode.Create;;
LineSet431.SetVertexCount([2]);
Coordinate432 := TCoordinateNode.Create;;
Coordinate432.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet431.Coord := Coordinate432;
{ from r_knee to r_talocrural vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet431.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape430.Geometry := LineSet431;
{ METHOD .FdChildren.Add }
HAnimSegment426.FdChildren.Add(Shape430);
HAnimSite434 := THAnimSiteNode.Create;;
HAnimSite434.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor435 := TTouchSensorNode.Create;;
TouchSensor435.Description := 'HAnimSite r_calcaneus_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite434.FdChildren.Add(TouchSensor435);
{ METHOD .FdChildren.Add }
HAnimSite434.FdChildren.Add(Shape35);
end;

procedure InitJohnJoint20Part33;
begin

{ METHOD .FdChildren.Add }
HAnimSegment426.FdChildren.Add(HAnimSite434);
HAnimSite437 := THAnimSiteNode.Create;;
HAnimSite437.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor438 := TTouchSensorNode.Create;;
TouchSensor438.Description := 'HAnimSite r_sphyrion_pt';
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(TouchSensor438);
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment426.FdChildren.Add(HAnimSite437);
{ METHOD .FdChildren.Add }
HAnimJoint425.FdChildren.Add(HAnimSegment426);
HAnimJoint440 := THAnimJointNode.Create;;
HAnimJoint440.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment441 := THAnimSegmentNode.Create;;
Transform442 := TTransformNode.Create;;
Transform442.Scale := Vector3(0.15,0.15,0.15);
Transform442.Translation := Vector3(-0.05,0.06,-0.025);
Transform442.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform443 := TTransformNode.Create;;
{ Empty Transform right foot }
{ METHOD .FdChildren.Add }
Transform443.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform442.FdChildren.Add(Transform443);
{ METHOD .FdChildren.Add }
HAnimSegment441.FdChildren.Add(Transform442);
Shape445 := TShapeNode.Create;;
LineSet446 := TLineSetNode.Create;;
LineSet446.SetVertexCount([2]);
Coordinate447 := TCoordinateNode.Create;;
Coordinate447.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet446.Coord := Coordinate447;
{ from r_talocrural to r_talocalcaneonavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet446.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape445.Geometry := LineSet446;
{ METHOD .FdChildren.Add }
HAnimSegment441.FdChildren.Add(Shape445);
Shape449 := TShapeNode.Create;;
end;

procedure InitJohnJoint20Part34;
begin

LineSet450 := TLineSetNode.Create;;
LineSet450.SetVertexCount([2]);
Coordinate451 := TCoordinateNode.Create;;
Coordinate451.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet450.Coord := Coordinate451;
{ from r_talocrural to r_calcaneocuboid vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet450.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape449.Geometry := LineSet450;
{ METHOD .FdChildren.Add }
HAnimSegment441.FdChildren.Add(Shape449);
{ METHOD .FdChildren.Add }
HAnimJoint440.FdChildren.Add(HAnimSegment441);
HAnimJoint453 := THAnimJointNode.Create;;
HAnimJoint453.Center := Vector3(0,1,0);
HAnimSegment454 := THAnimSegmentNode.Create;;
Transform455 := TTransformNode.Create;;
{ Empty Transform }
Transform456 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform456.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform455.FdChildren.Add(Transform456);
{ METHOD .FdChildren.Add }
HAnimSegment454.FdChildren.Add(Transform455);
Shape458 := TShapeNode.Create;;
LineSet459 := TLineSetNode.Create;;
LineSet459.SetVertexCount([2]);
Coordinate460 := TCoordinateNode.Create;;
Coordinate460.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet459.Coord := Coordinate460;
{ from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet459.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape458.Geometry := LineSet459;
{ METHOD .FdChildren.Add }
HAnimSegment454.FdChildren.Add(Shape458);
Shape462 := TShapeNode.Create;;
LineSet463 := TLineSetNode.Create;;
LineSet463.SetVertexCount([2]);
end;

procedure InitJohnJoint20Part35;
begin

Coordinate464 := TCoordinateNode.Create;;
Coordinate464.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet463.Coord := Coordinate464;
{ from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet463.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape462.Geometry := LineSet463;
{ METHOD .FdChildren.Add }
HAnimSegment454.FdChildren.Add(Shape462);
Shape466 := TShapeNode.Create;;
LineSet467 := TLineSetNode.Create;;
LineSet467.SetVertexCount([2]);
Coordinate468 := TCoordinateNode.Create;;
Coordinate468.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet467.Coord := Coordinate468;
{ from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet467.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape466.Geometry := LineSet467;
{ METHOD .FdChildren.Add }
HAnimSegment454.FdChildren.Add(Shape466);
{ METHOD .FdChildren.Add }
HAnimJoint453.FdChildren.Add(HAnimSegment454);
HAnimJoint470 := THAnimJointNode.Create;;
HAnimJoint470.Center := Vector3(0,1,0);
HAnimSegment471 := THAnimSegmentNode.Create;;
Transform472 := TTransformNode.Create;;
{ Empty Transform }
Transform473 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform473.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform472.FdChildren.Add(Transform473);
{ METHOD .FdChildren.Add }
HAnimSegment471.FdChildren.Add(Transform472);
Shape475 := TShapeNode.Create;;
LineSet476 := TLineSetNode.Create;;
LineSet476.SetVertexCount([2]);
Coordinate477 := TCoordinateNode.Create;;
Coordinate477.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
end;

procedure InitJohnJoint20Part36;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet476.Coord := Coordinate477;
{ from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet476.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape475.Geometry := LineSet476;
{ METHOD .FdChildren.Add }
HAnimSegment471.FdChildren.Add(Shape475);
{ METHOD .FdChildren.Add }
HAnimJoint470.FdChildren.Add(HAnimSegment471);
HAnimJoint479 := THAnimJointNode.Create;;
HAnimJoint479.Center := Vector3(0,1,0);
HAnimSegment480 := THAnimSegmentNode.Create;;
Transform481 := TTransformNode.Create;;
{ Empty Transform }
Transform482 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform482.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform481.FdChildren.Add(Transform482);
{ METHOD .FdChildren.Add }
HAnimSegment480.FdChildren.Add(Transform481);
Shape484 := TShapeNode.Create;;
LineSet485 := TLineSetNode.Create;;
LineSet485.SetVertexCount([2]);
Coordinate486 := TCoordinateNode.Create;;
Coordinate486.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet485.Coord := Coordinate486;
{ from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet485.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape484.Geometry := LineSet485;
{ METHOD .FdChildren.Add }
HAnimSegment480.FdChildren.Add(Shape484);
HAnimSite488 := THAnimSiteNode.Create;;
HAnimSite488.Translation := Vector3(0,1,0);
TouchSensor489 := TTouchSensorNode.Create;;
TouchSensor489.Description := 'HAnimSite r_metatarsal_phalanx_1_pt';
{ METHOD .FdChildren.Add }
HAnimSite488.FdChildren.Add(TouchSensor489);
{ METHOD .FdChildren.Add }
HAnimSite488.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment480.FdChildren.Add(HAnimSite488);
{ METHOD .FdChildren.Add }
HAnimJoint479.FdChildren.Add(HAnimSegment480);
HAnimJoint491 := THAnimJointNode.Create;
end;

procedure InitJohnJoint20Part37;
begin
;
HAnimJoint491.Center := Vector3(0,1,0);
HAnimSegment492 := THAnimSegmentNode.Create;;
Transform493 := TTransformNode.Create;;
{ Empty Transform }
Transform494 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform494.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform493.FdChildren.Add(Transform494);
{ METHOD .FdChildren.Add }
HAnimSegment492.FdChildren.Add(Transform493);
Shape496 := TShapeNode.Create;;
LineSet497 := TLineSetNode.Create;;
LineSet497.SetVertexCount([2]);
Coordinate498 := TCoordinateNode.Create;;
Coordinate498.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet497.Coord := Coordinate498;
{ from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet497.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape496.Geometry := LineSet497;
{ METHOD .FdChildren.Add }
HAnimSegment492.FdChildren.Add(Shape496);
HAnimSite500 := THAnimSiteNode.Create;;
HAnimSite500.Translation := Vector3(0.1,-1.05,0);
TouchSensor501 := TTouchSensorNode.Create;;
TouchSensor501.Description := 'HAnimSite r_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite500.FdChildren.Add(TouchSensor501);
{ METHOD .FdChildren.Add }
HAnimSite500.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment492.FdChildren.Add(HAnimSite500);
{ METHOD .FdChildren.Add }
HAnimJoint491.FdChildren.Add(HAnimSegment492);
HAnimJoint503 := THAnimJointNode.Create;;
HAnimJoint503.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint491.FdChildren.Add(HAnimJoint503);
{ METHOD .FdChildren.Add }
HAnimJoint479.FdChildren.Add(HAnimJoint491);
{ METHOD .FdChildren.Add }
HAnimJoint470.FdChildren.Add(HAnimJoint479);
{ METHOD .FdChildren.Add }
HAnimJoint453.FdChildren.Add(HAnimJoint470);
end;

procedure InitJohnJoint20Part38;
begin

HAnimJoint504 := THAnimJointNode.Create;;
HAnimJoint504.Center := Vector3(0,1,0);
HAnimSegment505 := THAnimSegmentNode.Create;;
Transform506 := TTransformNode.Create;;
{ Empty Transform }
Transform507 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform507.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform506.FdChildren.Add(Transform507);
{ METHOD .FdChildren.Add }
HAnimSegment505.FdChildren.Add(Transform506);
Shape509 := TShapeNode.Create;;
LineSet510 := TLineSetNode.Create;;
LineSet510.SetVertexCount([2]);
Coordinate511 := TCoordinateNode.Create;;
Coordinate511.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet510.Coord := Coordinate511;
{ from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet510.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape509.Geometry := LineSet510;
{ METHOD .FdChildren.Add }
HAnimSegment505.FdChildren.Add(Shape509);
{ METHOD .FdChildren.Add }
HAnimJoint504.FdChildren.Add(HAnimSegment505);
HAnimJoint513 := THAnimJointNode.Create;;
HAnimJoint513.Center := Vector3(0,1,0);
HAnimSegment514 := THAnimSegmentNode.Create;;
Transform515 := TTransformNode.Create;;
{ Empty Transform }
Transform516 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform516.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform515.FdChildren.Add(Transform516);
{ METHOD .FdChildren.Add }
HAnimSegment514.FdChildren.Add(Transform515);
Shape518 := TShapeNode.Create;;
LineSet519 := TLineSetNode.Create;
end;

procedure InitJohnJoint20Part39;
begin
;
LineSet519.SetVertexCount([2]);
Coordinate520 := TCoordinateNode.Create;;
Coordinate520.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet519.Coord := Coordinate520;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet519.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape518.Geometry := LineSet519;
{ METHOD .FdChildren.Add }
HAnimSegment514.FdChildren.Add(Shape518);
{ METHOD .FdChildren.Add }
HAnimJoint513.FdChildren.Add(HAnimSegment514);
HAnimJoint522 := THAnimJointNode.Create;;
HAnimJoint522.Center := Vector3(0,1,0);
HAnimSegment523 := THAnimSegmentNode.Create;;
Transform524 := TTransformNode.Create;;
{ Empty Transform }
Transform525 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform525.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform524.FdChildren.Add(Transform525);
{ METHOD .FdChildren.Add }
HAnimSegment523.FdChildren.Add(Transform524);
Shape527 := TShapeNode.Create;;
LineSet528 := TLineSetNode.Create;;
LineSet528.SetVertexCount([2]);
Coordinate529 := TCoordinateNode.Create;;
Coordinate529.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet528.Coord := Coordinate529;
{ from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet528.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape527.Geometry := LineSet528;
{ METHOD .FdChildren.Add }
HAnimSegment523.FdChildren.Add(Shape527);
{ METHOD .FdChildren.Add }
HAnimJoint522.FdChildren.Add(HAnimSegment523);
HAnimJoint531 := THAnimJointNode.Create;;
HAnimJoint531.Center := Vector3(0,1,0);
HAnimSegment532 := THAnimSegmentNode.Create;;
end;

procedure InitJohnJoint20Part40;
begin

Transform533 := TTransformNode.Create;;
{ Empty Transform }
Transform534 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform534.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform533.FdChildren.Add(Transform534);
{ METHOD .FdChildren.Add }
HAnimSegment532.FdChildren.Add(Transform533);
Shape536 := TShapeNode.Create;;
LineSet537 := TLineSetNode.Create;;
LineSet537.SetVertexCount([2]);
Coordinate538 := TCoordinateNode.Create;;
Coordinate538.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet537.Coord := Coordinate538;
{ from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet537.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape536.Geometry := LineSet537;
{ METHOD .FdChildren.Add }
HAnimSegment532.FdChildren.Add(Shape536);
HAnimSite540 := THAnimSiteNode.Create;;
HAnimSite540.Translation := Vector3(-0.05,-1.12,0);
TouchSensor541 := TTouchSensorNode.Create;;
TouchSensor541.Description := 'HAnimSite r_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite540.FdChildren.Add(TouchSensor541);
{ METHOD .FdChildren.Add }
HAnimSite540.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment532.FdChildren.Add(HAnimSite540);
{ METHOD .FdChildren.Add }
HAnimJoint531.FdChildren.Add(HAnimSegment532);
HAnimJoint543 := THAnimJointNode.Create;;
HAnimJoint543.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint531.FdChildren.Add(HAnimJoint543);
{ METHOD .FdChildren.Add }
HAnimJoint522.FdChildren.Add(HAnimJoint531);
{ METHOD .FdChildren.Add }
HAnimJoint513.FdChildren.Add(HAnimJoint522);
{ METHOD .FdChildren.Add }
HAnimJoint504.FdChildren.Add(HAnimJoint513);
{ METHOD .FdChildren.Add }
HAnimJoint453.FdChildren.Add(HAnimJoint504);
HAnimJoint544 := THAnimJointNode.Create;;
HAnimJoint544.Center := Vector3(0,1,0);
end;

procedure InitJohnJoint20Part41;
begin

HAnimSegment545 := THAnimSegmentNode.Create;;
Transform546 := TTransformNode.Create;;
{ Empty Transform }
Transform547 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform547.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform546.FdChildren.Add(Transform547);
{ METHOD .FdChildren.Add }
HAnimSegment545.FdChildren.Add(Transform546);
Shape549 := TShapeNode.Create;;
LineSet550 := TLineSetNode.Create;;
LineSet550.SetVertexCount([2]);
Coordinate551 := TCoordinateNode.Create;;
Coordinate551.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet550.Coord := Coordinate551;
{ from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet550.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape549.Geometry := LineSet550;
{ METHOD .FdChildren.Add }
HAnimSegment545.FdChildren.Add(Shape549);
{ METHOD .FdChildren.Add }
HAnimJoint544.FdChildren.Add(HAnimSegment545);
HAnimJoint553 := THAnimJointNode.Create;;
HAnimJoint553.Center := Vector3(0,1,0);
HAnimSegment554 := THAnimSegmentNode.Create;;
Transform555 := TTransformNode.Create;;
{ Empty Transform }
Transform556 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform556.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform555.FdChildren.Add(Transform556);
{ METHOD .FdChildren.Add }
HAnimSegment554.FdChildren.Add(Transform555);
Shape558 := TShapeNode.Create;;
LineSet559 := TLineSetNode.Create;;
LineSet559.SetVertexCount([2]);
Coordinate560 := TCoordinateNode.Create;
end;

procedure InitJohnJoint20Part42;
begin
;
Coordinate560.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet559.Coord := Coordinate560;
{ from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet559.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape558.Geometry := LineSet559;
{ METHOD .FdChildren.Add }
HAnimSegment554.FdChildren.Add(Shape558);
{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimSegment554);
HAnimJoint562 := THAnimJointNode.Create;;
HAnimJoint562.Center := Vector3(0,1,0);
HAnimSegment563 := THAnimSegmentNode.Create;;
Transform564 := TTransformNode.Create;;
{ Empty Transform }
Transform565 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform565.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform564.FdChildren.Add(Transform565);
{ METHOD .FdChildren.Add }
HAnimSegment563.FdChildren.Add(Transform564);
Shape567 := TShapeNode.Create;;
LineSet568 := TLineSetNode.Create;;
LineSet568.SetVertexCount([2]);
Coordinate569 := TCoordinateNode.Create;;
Coordinate569.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet568.Coord := Coordinate569;
{ from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet568.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape567.Geometry := LineSet568;
{ METHOD .FdChildren.Add }
HAnimSegment563.FdChildren.Add(Shape567);
{ METHOD .FdChildren.Add }
HAnimJoint562.FdChildren.Add(HAnimSegment563);
HAnimJoint571 := THAnimJointNode.Create;;
HAnimJoint571.Center := Vector3(0,1,0);
HAnimSegment572 := THAnimSegmentNode.Create;;
Transform573 := TTransformNode.Create;;
{ Empty Transform }
Transform574 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part43;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform574.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform573.FdChildren.Add(Transform574);
{ METHOD .FdChildren.Add }
HAnimSegment572.FdChildren.Add(Transform573);
Shape576 := TShapeNode.Create;;
LineSet577 := TLineSetNode.Create;;
LineSet577.SetVertexCount([2]);
Coordinate578 := TCoordinateNode.Create;;
Coordinate578.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet577.Coord := Coordinate578;
{ from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet577.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape576.Geometry := LineSet577;
{ METHOD .FdChildren.Add }
HAnimSegment572.FdChildren.Add(Shape576);
HAnimSite580 := THAnimSiteNode.Create;;
HAnimSite580.Translation := Vector3(-0.15,-1.13,0);
TouchSensor581 := TTouchSensorNode.Create;;
TouchSensor581.Description := 'HAnimSite r_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite580.FdChildren.Add(TouchSensor581);
{ METHOD .FdChildren.Add }
HAnimSite580.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment572.FdChildren.Add(HAnimSite580);
{ METHOD .FdChildren.Add }
HAnimJoint571.FdChildren.Add(HAnimSegment572);
HAnimJoint583 := THAnimJointNode.Create;;
HAnimJoint583.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint571.FdChildren.Add(HAnimJoint583);
{ METHOD .FdChildren.Add }
HAnimJoint562.FdChildren.Add(HAnimJoint571);
{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimJoint562);
{ METHOD .FdChildren.Add }
HAnimJoint544.FdChildren.Add(HAnimJoint553);
{ METHOD .FdChildren.Add }
HAnimJoint453.FdChildren.Add(HAnimJoint544);
{ METHOD .FdChildren.Add }
HAnimJoint440.FdChildren.Add(HAnimJoint453);
HAnimJoint584 := THAnimJointNode.Create;;
HAnimJoint584.Center := Vector3(0,1,0);
HAnimSegment585 := THAnimSegmentNode.Create;;
end;

procedure InitJohnJoint20Part44;
begin

Transform586 := TTransformNode.Create;;
{ Empty Transform }
Transform587 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform587.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform586.FdChildren.Add(Transform587);
{ METHOD .FdChildren.Add }
HAnimSegment585.FdChildren.Add(Transform586);
Shape589 := TShapeNode.Create;;
LineSet590 := TLineSetNode.Create;;
LineSet590.SetVertexCount([2]);
Coordinate591 := TCoordinateNode.Create;;
Coordinate591.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet590.Coord := Coordinate591;
{ from r_calcaneocuboid to r_transversetarsal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet590.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape589.Geometry := LineSet590;
{ METHOD .FdChildren.Add }
HAnimSegment585.FdChildren.Add(Shape589);
{ METHOD .FdChildren.Add }
HAnimJoint584.FdChildren.Add(HAnimSegment585);
HAnimJoint593 := THAnimJointNode.Create;;
HAnimJoint593.Center := Vector3(0,1,0);
HAnimSegment594 := THAnimSegmentNode.Create;;
Transform595 := TTransformNode.Create;;
{ Empty Transform }
Transform596 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform596.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform595.FdChildren.Add(Transform596);
{ METHOD .FdChildren.Add }
HAnimSegment594.FdChildren.Add(Transform595);
Shape598 := TShapeNode.Create;;
LineSet599 := TLineSetNode.Create;;
LineSet599.SetVertexCount([2]);
Coordinate600 := TCoordinateNode.Create;;
Coordinate600.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
end;

procedure InitJohnJoint20Part45;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet599.Coord := Coordinate600;
{ from r_transversetarsal to r_tarsometatarsal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet599.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape598.Geometry := LineSet599;
{ METHOD .FdChildren.Add }
HAnimSegment594.FdChildren.Add(Shape598);
Shape602 := TShapeNode.Create;;
LineSet603 := TLineSetNode.Create;;
LineSet603.SetVertexCount([2]);
Coordinate604 := TCoordinateNode.Create;;
Coordinate604.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet603.Coord := Coordinate604;
{ from r_transversetarsal to r_tarsometatarsal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet603.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape602.Geometry := LineSet603;
{ METHOD .FdChildren.Add }
HAnimSegment594.FdChildren.Add(Shape602);
{ METHOD .FdChildren.Add }
HAnimJoint593.FdChildren.Add(HAnimSegment594);
HAnimJoint606 := THAnimJointNode.Create;;
HAnimJoint606.Center := Vector3(0,1,0);
HAnimSegment607 := THAnimSegmentNode.Create;;
Transform608 := TTransformNode.Create;;
{ Empty Transform }
Transform609 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform609.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform608.FdChildren.Add(Transform609);
{ METHOD .FdChildren.Add }
HAnimSegment607.FdChildren.Add(Transform608);
Shape611 := TShapeNode.Create;;
LineSet612 := TLineSetNode.Create;;
LineSet612.SetVertexCount([2]);
Coordinate613 := TCoordinateNode.Create;;
Coordinate613.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet612.Coord := Coordinate613;
{ from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet612.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape611.Geometry := LineSet612;
end;

procedure InitJohnJoint20Part46;
begin

{ METHOD .FdChildren.Add }
HAnimSegment607.FdChildren.Add(Shape611);
{ METHOD .FdChildren.Add }
HAnimJoint606.FdChildren.Add(HAnimSegment607);
HAnimJoint615 := THAnimJointNode.Create;;
HAnimJoint615.Center := Vector3(0,1,0);
HAnimSegment616 := THAnimSegmentNode.Create;;
Transform617 := TTransformNode.Create;;
{ Empty Transform }
Transform618 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform618.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform617.FdChildren.Add(Transform618);
{ METHOD .FdChildren.Add }
HAnimSegment616.FdChildren.Add(Transform617);
Shape620 := TShapeNode.Create;;
LineSet621 := TLineSetNode.Create;;
LineSet621.SetVertexCount([2]);
Coordinate622 := TCoordinateNode.Create;;
Coordinate622.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet621.Coord := Coordinate622;
{ from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet621.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape620.Geometry := LineSet621;
{ METHOD .FdChildren.Add }
HAnimSegment616.FdChildren.Add(Shape620);
{ METHOD .FdChildren.Add }
HAnimJoint615.FdChildren.Add(HAnimSegment616);
HAnimJoint624 := THAnimJointNode.Create;;
HAnimJoint624.Center := Vector3(0,1,0);
HAnimSegment625 := THAnimSegmentNode.Create;;
Transform626 := TTransformNode.Create;;
{ Empty Transform }
Transform627 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform627.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform626.FdChildren.Add(Transform627);
{ METHOD .FdChildren.Add }
HAnimSegment625.FdChildren.Add(Transform626);
Shape629 := TShapeNode.Create;
end;

procedure InitJohnJoint20Part47;
begin
;
LineSet630 := TLineSetNode.Create;;
LineSet630.SetVertexCount([2]);
Coordinate631 := TCoordinateNode.Create;;
Coordinate631.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet630.Coord := Coordinate631;
{ from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet630.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape629.Geometry := LineSet630;
{ METHOD .FdChildren.Add }
HAnimSegment625.FdChildren.Add(Shape629);
HAnimSite633 := THAnimSiteNode.Create;;
HAnimSite633.Translation := Vector3(-0.25,-1.1,0);
TouchSensor634 := TTouchSensorNode.Create;;
TouchSensor634.Description := 'HAnimSite r_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite633.FdChildren.Add(TouchSensor634);
{ METHOD .FdChildren.Add }
HAnimSite633.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment625.FdChildren.Add(HAnimSite633);
{ METHOD .FdChildren.Add }
HAnimJoint624.FdChildren.Add(HAnimSegment625);
HAnimJoint636 := THAnimJointNode.Create;;
HAnimJoint636.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint624.FdChildren.Add(HAnimJoint636);
{ METHOD .FdChildren.Add }
HAnimJoint615.FdChildren.Add(HAnimJoint624);
{ METHOD .FdChildren.Add }
HAnimJoint606.FdChildren.Add(HAnimJoint615);
{ METHOD .FdChildren.Add }
HAnimJoint593.FdChildren.Add(HAnimJoint606);
HAnimJoint637 := THAnimJointNode.Create;;
HAnimJoint637.Center := Vector3(0,1,0);
HAnimSegment638 := THAnimSegmentNode.Create;;
Transform639 := TTransformNode.Create;;
{ Empty Transform }
Transform640 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform640.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform639.FdChildren.Add(Transform640);
{ METHOD .FdChildren.Add }
HAnimSegment638.FdChildren.Add(Transform639);
end;

procedure InitJohnJoint20Part48;
begin

Shape642 := TShapeNode.Create;;
LineSet643 := TLineSetNode.Create;;
LineSet643.SetVertexCount([2]);
Coordinate644 := TCoordinateNode.Create;;
Coordinate644.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet643.Coord := Coordinate644;
{ from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet643.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape642.Geometry := LineSet643;
{ METHOD .FdChildren.Add }
HAnimSegment638.FdChildren.Add(Shape642);
HAnimSite646 := THAnimSiteNode.Create;;
HAnimSite646.Translation := Vector3(0,1,0);
TouchSensor647 := TTouchSensorNode.Create;;
TouchSensor647.Description := 'HAnimSite r_metatarsal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite646.FdChildren.Add(TouchSensor647);
{ METHOD .FdChildren.Add }
HAnimSite646.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment638.FdChildren.Add(HAnimSite646);
{ METHOD .FdChildren.Add }
HAnimJoint637.FdChildren.Add(HAnimSegment638);
HAnimJoint649 := THAnimJointNode.Create;;
HAnimJoint649.Center := Vector3(0,1,0);
HAnimSegment650 := THAnimSegmentNode.Create;;
Transform651 := TTransformNode.Create;;
{ Empty Transform }
Transform652 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform652.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform651.FdChildren.Add(Transform652);
{ METHOD .FdChildren.Add }
HAnimSegment650.FdChildren.Add(Transform651);
Shape654 := TShapeNode.Create;;
LineSet655 := TLineSetNode.Create;;
LineSet655.SetVertexCount([2]);
Coordinate656 := TCoordinateNode.Create;
end;

procedure InitJohnJoint20Part49;
begin
;
Coordinate656.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet655.Coord := Coordinate656;
{ from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet655.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape654.Geometry := LineSet655;
{ METHOD .FdChildren.Add }
HAnimSegment650.FdChildren.Add(Shape654);
{ METHOD .FdChildren.Add }
HAnimJoint649.FdChildren.Add(HAnimSegment650);
HAnimJoint658 := THAnimJointNode.Create;;
HAnimJoint658.Center := Vector3(0,1,0);
HAnimSegment659 := THAnimSegmentNode.Create;;
Transform660 := TTransformNode.Create;;
{ Empty Transform }
Transform661 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform661.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform660.FdChildren.Add(Transform661);
{ METHOD .FdChildren.Add }
HAnimSegment659.FdChildren.Add(Transform660);
Shape663 := TShapeNode.Create;;
LineSet664 := TLineSetNode.Create;;
LineSet664.SetVertexCount([2]);
Coordinate665 := TCoordinateNode.Create;;
Coordinate665.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet664.Coord := Coordinate665;
{ from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet664.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape663.Geometry := LineSet664;
{ METHOD .FdChildren.Add }
HAnimSegment659.FdChildren.Add(Shape663);
HAnimSite667 := THAnimSiteNode.Create;;
HAnimSite667.Translation := Vector3(-0.34,-1.05,0);
TouchSensor668 := TTouchSensorNode.Create;;
TouchSensor668.Description := 'HAnimSite r_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite667.FdChildren.Add(TouchSensor668);
{ METHOD .FdChildren.Add }
HAnimSite667.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment659.FdChildren.Add(HAnimSite667);
end;

procedure InitJohnJoint20Part50;
begin

{ METHOD .FdChildren.Add }
HAnimJoint658.FdChildren.Add(HAnimSegment659);
HAnimJoint670 := THAnimJointNode.Create;;
HAnimJoint670.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint658.FdChildren.Add(HAnimJoint670);
{ METHOD .FdChildren.Add }
HAnimJoint649.FdChildren.Add(HAnimJoint658);
{ METHOD .FdChildren.Add }
HAnimJoint637.FdChildren.Add(HAnimJoint649);
{ METHOD .FdChildren.Add }
HAnimJoint593.FdChildren.Add(HAnimJoint637);
{ METHOD .FdChildren.Add }
HAnimJoint584.FdChildren.Add(HAnimJoint593);
{ METHOD .FdChildren.Add }
HAnimJoint440.FdChildren.Add(HAnimJoint584);
{ METHOD .FdChildren.Add }
HAnimJoint425.FdChildren.Add(HAnimJoint440);
{ METHOD .FdChildren.Add }
HAnimJoint407.FdChildren.Add(HAnimJoint425);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint407);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint106);
HAnimJoint671 := THAnimJointNode.Create;;
HAnimJoint671.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment672 := THAnimSegmentNode.Create;;
Transform673 := TTransformNode.Create;;
{ Empty Transform }
Transform674 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform674.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform673.FdChildren.Add(Transform674);
{ METHOD .FdChildren.Add }
HAnimSegment672.FdChildren.Add(Transform673);
Shape676 := TShapeNode.Create;;
LineSet677 := TLineSetNode.Create;;
LineSet677.SetVertexCount([2]);
Coordinate678 := TCoordinateNode.Create;;
Coordinate678.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet677.Coord := Coordinate678;
{ from vl5 to vl4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet677.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape676.Geometry := LineSet677;
{ METHOD .FdChildren.Add }
HAnimSegment672.FdChildren.Add(Shape676);
{ METHOD .FdChildren.Add }
HAnimJoint671.FdChildren.Add(HAnimSegment672);
HAnimJoint680 := THAnimJointNode.Create;
end;

procedure InitJohnJoint20Part51;
begin
;
HAnimJoint680.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment681 := THAnimSegmentNode.Create;;
Transform682 := TTransformNode.Create;;
{ Empty Transform }
Transform683 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform683.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform682.FdChildren.Add(Transform683);
{ METHOD .FdChildren.Add }
HAnimSegment681.FdChildren.Add(Transform682);
Shape685 := TShapeNode.Create;;
LineSet686 := TLineSetNode.Create;;
LineSet686.SetVertexCount([2]);
Coordinate687 := TCoordinateNode.Create;;
Coordinate687.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet686.Coord := Coordinate687;
{ from vl4 to vl3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet686.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape685.Geometry := LineSet686;
{ METHOD .FdChildren.Add }
HAnimSegment681.FdChildren.Add(Shape685);
{ METHOD .FdChildren.Add }
HAnimJoint680.FdChildren.Add(HAnimSegment681);
HAnimJoint689 := THAnimJointNode.Create;;
HAnimJoint689.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment690 := THAnimSegmentNode.Create;;
Transform691 := TTransformNode.Create;;
{ Empty Transform }
Transform692 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform692.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform691.FdChildren.Add(Transform692);
{ METHOD .FdChildren.Add }
HAnimSegment690.FdChildren.Add(Transform691);
Shape694 := TShapeNode.Create;;
LineSet695 := TLineSetNode.Create;;
end;

procedure InitJohnJoint20Part52;
begin

LineSet695.SetVertexCount([2]);
Coordinate696 := TCoordinateNode.Create;;
Coordinate696.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet695.Coord := Coordinate696;
{ from vl3 to vl2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet695.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape694.Geometry := LineSet695;
{ METHOD .FdChildren.Add }
HAnimSegment690.FdChildren.Add(Shape694);
HAnimSite698 := THAnimSiteNode.Create;;
HAnimSite698.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor699 := TTouchSensorNode.Create;;
TouchSensor699.Description := 'HAnimSite l_rib10_pt';
{ METHOD .FdChildren.Add }
HAnimSite698.FdChildren.Add(TouchSensor699);
{ METHOD .FdChildren.Add }
HAnimSite698.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment690.FdChildren.Add(HAnimSite698);
HAnimSite701 := THAnimSiteNode.Create;;
HAnimSite701.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor702 := TTouchSensorNode.Create;;
TouchSensor702.Description := 'HAnimSite r_rib10_pt';
{ METHOD .FdChildren.Add }
HAnimSite701.FdChildren.Add(TouchSensor702);
{ METHOD .FdChildren.Add }
HAnimSite701.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment690.FdChildren.Add(HAnimSite701);
HAnimSite704 := THAnimSiteNode.Create;;
HAnimSite704.Translation := Vector3(0,1,0);
TouchSensor705 := TTouchSensorNode.Create;;
TouchSensor705.Description := 'HAnimSite spine_2_middle_back_pt';
{ METHOD .FdChildren.Add }
HAnimSite704.FdChildren.Add(TouchSensor705);
{ METHOD .FdChildren.Add }
HAnimSite704.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment690.FdChildren.Add(HAnimSite704);
{ METHOD .FdChildren.Add }
HAnimJoint689.FdChildren.Add(HAnimSegment690);
HAnimJoint707 := THAnimJointNode.Create;;
HAnimJoint707.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment708 := THAnimSegmentNode.Create;
end;

procedure InitJohnJoint20Part53;
begin
;
Transform709 := TTransformNode.Create;;
{ Empty Transform }
Transform710 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform710.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform709.FdChildren.Add(Transform710);
{ METHOD .FdChildren.Add }
HAnimSegment708.FdChildren.Add(Transform709);
Shape712 := TShapeNode.Create;;
LineSet713 := TLineSetNode.Create;;
LineSet713.SetVertexCount([2]);
Coordinate714 := TCoordinateNode.Create;;
Coordinate714.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet713.Coord := Coordinate714;
{ from vl2 to vl1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet713.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape712.Geometry := LineSet713;
{ METHOD .FdChildren.Add }
HAnimSegment708.FdChildren.Add(Shape712);
{ METHOD .FdChildren.Add }
HAnimJoint707.FdChildren.Add(HAnimSegment708);
HAnimJoint716 := THAnimJointNode.Create;;
HAnimJoint716.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment717 := THAnimSegmentNode.Create;;
Transform718 := TTransformNode.Create;;
{ Empty Transform }
Transform719 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform719.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform718.FdChildren.Add(Transform719);
{ METHOD .FdChildren.Add }
HAnimSegment717.FdChildren.Add(Transform718);
Shape721 := TShapeNode.Create;;
LineSet722 := TLineSetNode.Create;;
LineSet722.SetVertexCount([2]);
Coordinate723 := TCoordinateNode.Create;;
end;

procedure InitJohnJoint20Part54;
begin

Coordinate723.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet722.Coord := Coordinate723;
{ from vl1 to vt12 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet722.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape721.Geometry := LineSet722;
{ METHOD .FdChildren.Add }
HAnimSegment717.FdChildren.Add(Shape721);
{ METHOD .FdChildren.Add }
HAnimJoint716.FdChildren.Add(HAnimSegment717);
HAnimJoint725 := THAnimJointNode.Create;;
HAnimJoint725.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment726 := THAnimSegmentNode.Create;;
Transform727 := TTransformNode.Create;;
{ Empty Transform }
Transform728 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform728.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform727.FdChildren.Add(Transform728);
{ METHOD .FdChildren.Add }
HAnimSegment726.FdChildren.Add(Transform727);
Shape730 := TShapeNode.Create;;
LineSet731 := TLineSetNode.Create;;
LineSet731.SetVertexCount([2]);
Coordinate732 := TCoordinateNode.Create;;
Coordinate732.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet731.Coord := Coordinate732;
{ from vt12 to vt11 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet731.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape730.Geometry := LineSet731;
{ METHOD .FdChildren.Add }
HAnimSegment726.FdChildren.Add(Shape730);
{ METHOD .FdChildren.Add }
HAnimJoint725.FdChildren.Add(HAnimSegment726);
HAnimJoint734 := THAnimJointNode.Create;;
HAnimJoint734.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment735 := THAnimSegmentNode.Create;;
Transform736 := TTransformNode.Create;;
{ Empty Transform }
Transform737 := TTransformNode.Create;;
end;

procedure InitJohnJoint20Part55;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform737.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform736.FdChildren.Add(Transform737);
{ METHOD .FdChildren.Add }
HAnimSegment735.FdChildren.Add(Transform736);
Shape739 := TShapeNode.Create;;
LineSet740 := TLineSetNode.Create;;
LineSet740.SetVertexCount([2]);
Coordinate741 := TCoordinateNode.Create;;
Coordinate741.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet740.Coord := Coordinate741;
{ from vt11 to vt10 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet740.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape739.Geometry := LineSet740;
{ METHOD .FdChildren.Add }
HAnimSegment735.FdChildren.Add(Shape739);
HAnimSite743 := THAnimSiteNode.Create;;
HAnimSite743.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor744 := TTouchSensorNode.Create;;
TouchSensor744.Description := 'HAnimSite substernale_pt';
{ METHOD .FdChildren.Add }
HAnimSite743.FdChildren.Add(TouchSensor744);
{ METHOD .FdChildren.Add }
HAnimSite743.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment735.FdChildren.Add(HAnimSite743);
{ METHOD .FdChildren.Add }
HAnimJoint734.FdChildren.Add(HAnimSegment735);
HAnimJoint746 := THAnimJointNode.Create;;
HAnimJoint746.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment747 := THAnimSegmentNode.Create;;
Transform748 := TTransformNode.Create;;
{ Empty Transform }
Transform749 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform749.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform748.FdChildren.Add(Transform749);
{ METHOD .FdChildren.Add }
HAnimSegment747.FdChildren.Add(Transform748);
Shape751 := TShapeNode.Create;;
LineSet752 := TLineSetNode.Create;
end;

procedure InitJohnJoint20Part56;
begin
;
LineSet752.SetVertexCount([2]);
Coordinate753 := TCoordinateNode.Create;;
Coordinate753.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet752.Coord := Coordinate753;
{ from vt10 to vt9 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet752.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape751.Geometry := LineSet752;
{ METHOD .FdChildren.Add }
HAnimSegment747.FdChildren.Add(Shape751);
HAnimSite755 := THAnimSiteNode.Create;;
HAnimSite755.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor756 := TTouchSensorNode.Create;;
TouchSensor756.Description := 'HAnimSite l_thelion_pt';
{ METHOD .FdChildren.Add }
HAnimSite755.FdChildren.Add(TouchSensor756);
{ METHOD .FdChildren.Add }
HAnimSite755.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment747.FdChildren.Add(HAnimSite755);
HAnimSite758 := THAnimSiteNode.Create;;
HAnimSite758.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor759 := TTouchSensorNode.Create;;
TouchSensor759.Description := 'HAnimSite r_thelion_pt';
{ METHOD .FdChildren.Add }
HAnimSite758.FdChildren.Add(TouchSensor759);
{ METHOD .FdChildren.Add }
HAnimSite758.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment747.FdChildren.Add(HAnimSite758);
{ METHOD .FdChildren.Add }
HAnimJoint746.FdChildren.Add(HAnimSegment747);
HAnimJoint761 := THAnimJointNode.Create;;
HAnimJoint761.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment762 := THAnimSegmentNode.Create;;
Transform763 := TTransformNode.Create;;
{ Empty Transform }
Transform764 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform764.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform763.FdChildren.Add(Transform764);
{ METHOD .FdChildren.Add }
HAnimSegment762.FdChildren.Add(Transform763);
end;

procedure InitJohnJoint20Part57;
begin

Shape766 := TShapeNode.Create;;
LineSet767 := TLineSetNode.Create;;
LineSet767.SetVertexCount([2]);
Coordinate768 := TCoordinateNode.Create;;
Coordinate768.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet767.Coord := Coordinate768;
{ from vt9 to vt8 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet767.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape766.Geometry := LineSet767;
{ METHOD .FdChildren.Add }
HAnimSegment762.FdChildren.Add(Shape766);
{ METHOD .FdChildren.Add }
HAnimJoint761.FdChildren.Add(HAnimSegment762);
HAnimJoint770 := THAnimJointNode.Create;;
HAnimJoint770.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment771 := THAnimSegmentNode.Create;;
Transform772 := TTransformNode.Create;;
{ Empty Transform }
Transform773 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform773.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform772.FdChildren.Add(Transform773);
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(Transform772);
Shape775 := TShapeNode.Create;;
LineSet776 := TLineSetNode.Create;;
LineSet776.SetVertexCount([2]);
Coordinate777 := TCoordinateNode.Create;;
Coordinate777.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet776.Coord := Coordinate777;
{ from vt8 to vt7 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet776.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape775.Geometry := LineSet776;
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(Shape775);
{ METHOD .FdChildren.Add }
HAnimJoint770.FdChildren.Add(HAnimSegment771);
HAnimJoint779 := THAnimJointNode.Create;;
end;

procedure InitJohnJoint20Part58;
begin

HAnimJoint779.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment780 := THAnimSegmentNode.Create;;
Transform781 := TTransformNode.Create;;
{ Empty Transform }
Transform782 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform782.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform781.FdChildren.Add(Transform782);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(Transform781);
Shape784 := TShapeNode.Create;;
LineSet785 := TLineSetNode.Create;;
LineSet785.SetVertexCount([2]);
Coordinate786 := TCoordinateNode.Create;;
Coordinate786.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet785.Coord := Coordinate786;
{ from vt7 to vt6 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet785.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape784.Geometry := LineSet785;
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(Shape784);
HAnimSite788 := THAnimSiteNode.Create;;
HAnimSite788.Translation := Vector3(0,1,0);
TouchSensor789 := TTouchSensorNode.Create;;
TouchSensor789.Description := 'HAnimSite l_chest_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite788.FdChildren.Add(TouchSensor789);
{ METHOD .FdChildren.Add }
HAnimSite788.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(HAnimSite788);
HAnimSite791 := THAnimSiteNode.Create;;
HAnimSite791.Translation := Vector3(0,1,0);
TouchSensor792 := TTouchSensorNode.Create;;
TouchSensor792.Description := 'HAnimSite mesosternale_pt';
{ METHOD .FdChildren.Add }
HAnimSite791.FdChildren.Add(TouchSensor792);
{ METHOD .FdChildren.Add }
HAnimSite791.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(HAnimSite791);
end;

procedure InitJohnJoint20Part59;
begin

HAnimSite794 := THAnimSiteNode.Create;;
HAnimSite794.Translation := Vector3(0,1,0);
TouchSensor795 := TTouchSensorNode.Create;;
TouchSensor795.Description := 'HAnimSite r_chest_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite794.FdChildren.Add(TouchSensor795);
{ METHOD .FdChildren.Add }
HAnimSite794.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(HAnimSite794);
HAnimSite797 := THAnimSiteNode.Create;;
HAnimSite797.Translation := Vector3(0,1,0);
TouchSensor798 := TTouchSensorNode.Create;;
TouchSensor798.Description := 'HAnimSite rear_center_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite797.FdChildren.Add(TouchSensor798);
{ METHOD .FdChildren.Add }
HAnimSite797.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment780.FdChildren.Add(HAnimSite797);
{ METHOD .FdChildren.Add }
HAnimJoint779.FdChildren.Add(HAnimSegment780);
HAnimJoint800 := THAnimJointNode.Create;;
HAnimJoint800.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment801 := THAnimSegmentNode.Create;;
Transform802 := TTransformNode.Create;;
{ Empty Transform }
Transform803 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform803.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform802.FdChildren.Add(Transform803);
{ METHOD .FdChildren.Add }
HAnimSegment801.FdChildren.Add(Transform802);
Shape805 := TShapeNode.Create;;
LineSet806 := TLineSetNode.Create;;
LineSet806.SetVertexCount([2]);
Coordinate807 := TCoordinateNode.Create;;
Coordinate807.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet806.Coord := Coordinate807;
end;

procedure InitJohnJoint20Part60;
begin

{ from vt6 to vt5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet806.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape805.Geometry := LineSet806;
{ METHOD .FdChildren.Add }
HAnimSegment801.FdChildren.Add(Shape805);
HAnimSite809 := THAnimSiteNode.Create;;
HAnimSite809.Translation := Vector3(0,1,0);
TouchSensor810 := TTouchSensorNode.Create;;
TouchSensor810.Description := 'HAnimSite spine_1_middle_back_pt';
{ METHOD .FdChildren.Add }
HAnimSite809.FdChildren.Add(TouchSensor810);
{ METHOD .FdChildren.Add }
HAnimSite809.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment801.FdChildren.Add(HAnimSite809);
{ METHOD .FdChildren.Add }
HAnimJoint800.FdChildren.Add(HAnimSegment801);
HAnimJoint812 := THAnimJointNode.Create;;
HAnimJoint812.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment813 := THAnimSegmentNode.Create;;
Transform814 := TTransformNode.Create;;
{ Empty Transform }
Transform815 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform815.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform814.FdChildren.Add(Transform815);
{ METHOD .FdChildren.Add }
HAnimSegment813.FdChildren.Add(Transform814);
Shape817 := TShapeNode.Create;;
LineSet818 := TLineSetNode.Create;;
LineSet818.SetVertexCount([2]);
Coordinate819 := TCoordinateNode.Create;;
Coordinate819.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet818.Coord := Coordinate819;
{ from vt5 to vt4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet818.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape817.Geometry := LineSet818;
{ METHOD .FdChildren.Add }
HAnimSegment813.FdChildren.Add(Shape817);
{ METHOD .FdChildren.Add }
HAnimJoint812.FdChildren.Add(HAnimSegment813);
HAnimJoint821 := THAnimJointNode.Create;;
end;

procedure InitJohnJoint20Part61;
begin

HAnimJoint821.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment822 := THAnimSegmentNode.Create;;
Transform823 := TTransformNode.Create;;
{ Empty Transform }
Transform824 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform824.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform823.FdChildren.Add(Transform824);
{ METHOD .FdChildren.Add }
HAnimSegment822.FdChildren.Add(Transform823);
Shape826 := TShapeNode.Create;;
LineSet827 := TLineSetNode.Create;;
LineSet827.SetVertexCount([2]);
Coordinate828 := TCoordinateNode.Create;;
Coordinate828.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet827.Coord := Coordinate828;
{ from vt4 to vt3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet827.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape826.Geometry := LineSet827;
{ METHOD .FdChildren.Add }
HAnimSegment822.FdChildren.Add(Shape826);
{ METHOD .FdChildren.Add }
HAnimJoint821.FdChildren.Add(HAnimSegment822);
HAnimJoint830 := THAnimJointNode.Create;;
HAnimJoint830.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment831 := THAnimSegmentNode.Create;;
Transform832 := TTransformNode.Create;;
{ Empty Transform }
Transform833 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform833.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform832.FdChildren.Add(Transform833);
{ METHOD .FdChildren.Add }
HAnimSegment831.FdChildren.Add(Transform832);
Shape835 := TShapeNode.Create;;
LineSet836 := TLineSetNode.Create;;
LineSet836.SetVertexCount([2]);
end;

procedure InitJohnJoint20Part62;
begin

Coordinate837 := TCoordinateNode.Create;;
Coordinate837.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet836.Coord := Coordinate837;
{ from vt3 to vt2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet836.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape835.Geometry := LineSet836;
{ METHOD .FdChildren.Add }
HAnimSegment831.FdChildren.Add(Shape835);
{ METHOD .FdChildren.Add }
HAnimJoint830.FdChildren.Add(HAnimSegment831);
HAnimJoint839 := THAnimJointNode.Create;;
HAnimJoint839.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment840 := THAnimSegmentNode.Create;;
Transform841 := TTransformNode.Create;;
{ Empty Transform }
Transform842 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform842.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform841.FdChildren.Add(Transform842);
{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(Transform841);
Shape844 := TShapeNode.Create;;
LineSet845 := TLineSetNode.Create;;
LineSet845.SetVertexCount([2]);
Coordinate846 := TCoordinateNode.Create;;
Coordinate846.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet845.Coord := Coordinate846;
{ from vt2 to vt1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet845.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape844.Geometry := LineSet845;
{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(Shape844);
HAnimSite848 := THAnimSiteNode.Create;;
HAnimSite848.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor849 := TTouchSensorNode.Create;;
TouchSensor849.Description := 'HAnimSite cervicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite848.FdChildren.Add(TouchSensor849);
{ METHOD .FdChildren.Add }
HAnimSite848.FdChildren.Add(Shape35);
end;

procedure InitJohnJoint20Part63;
begin

{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(HAnimSite848);
HAnimSite851 := THAnimSiteNode.Create;;
HAnimSite851.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor852 := TTouchSensorNode.Create;;
TouchSensor852.Description := 'HAnimSite suprasternale_pt';
{ METHOD .FdChildren.Add }
HAnimSite851.FdChildren.Add(TouchSensor852);
{ METHOD .FdChildren.Add }
HAnimSite851.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(HAnimSite851);
{ METHOD .FdChildren.Add }
HAnimJoint839.FdChildren.Add(HAnimSegment840);
HAnimJoint854 := THAnimJointNode.Create;;
HAnimJoint854.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment855 := THAnimSegmentNode.Create;;
Transform856 := TTransformNode.Create;;
{ Empty Transform }
Transform857 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform857.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform856.FdChildren.Add(Transform857);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Transform856);
Shape859 := TShapeNode.Create;;
LineSet860 := TLineSetNode.Create;;
LineSet860.SetVertexCount([2]);
Coordinate861 := TCoordinateNode.Create;;
Coordinate861.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet860.Coord := Coordinate861;
{ from vt1 to vc7 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet860.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape859.Geometry := LineSet860;
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Shape859);
HAnimSite863 := THAnimSiteNode.Create;;
HAnimSite863.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor864 := TTouchSensorNode.Create;;
end;

procedure InitJohnJoint20Part64;
begin

TouchSensor864.Description := 'HAnimSite l_neck_base_pt';
{ METHOD .FdChildren.Add }
HAnimSite863.FdChildren.Add(TouchSensor864);
{ METHOD .FdChildren.Add }
HAnimSite863.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite863);
HAnimSite866 := THAnimSiteNode.Create;;
HAnimSite866.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor867 := TTouchSensorNode.Create;;
TouchSensor867.Description := 'HAnimSite r_neck_base_pt';
{ METHOD .FdChildren.Add }
HAnimSite866.FdChildren.Add(TouchSensor867);
{ METHOD .FdChildren.Add }
HAnimSite866.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite866);
Shape869 := TShapeNode.Create;;
LineSet870 := TLineSetNode.Create;;
LineSet870.SetVertexCount([2]);
Coordinate871 := TCoordinateNode.Create;;
Coordinate871.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet870.Coord := Coordinate871;
{ from vt1 to l_sternoclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet870.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape869.Geometry := LineSet870;
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Shape869);
HAnimSite873 := THAnimSiteNode.Create;;
HAnimSite873.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor874 := TTouchSensorNode.Create;;
TouchSensor874.Description := 'HAnimSite l_acromion_pt';
{ METHOD .FdChildren.Add }
HAnimSite873.FdChildren.Add(TouchSensor874);
{ METHOD .FdChildren.Add }
HAnimSite873.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite873);
HAnimSite876 := THAnimSiteNode.Create;;
HAnimSite876.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor877 := TTouchSensorNode.Create;;
TouchSensor877.Description := 'HAnimSite l_axilla_distal_pt';
end;

procedure InitJohnJoint20Part65;
begin

{ METHOD .FdChildren.Add }
HAnimSite876.FdChildren.Add(TouchSensor877);
{ METHOD .FdChildren.Add }
HAnimSite876.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite876);
HAnimSite879 := THAnimSiteNode.Create;;
HAnimSite879.Translation := Vector3(0,1,0);
TouchSensor880 := TTouchSensorNode.Create;;
TouchSensor880.Description := 'HAnimSite l_axilla_posterior_folds_pt';
{ METHOD .FdChildren.Add }
HAnimSite879.FdChildren.Add(TouchSensor880);
{ METHOD .FdChildren.Add }
HAnimSite879.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite879);
HAnimSite882 := THAnimSiteNode.Create;;
HAnimSite882.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor883 := TTouchSensorNode.Create;;
TouchSensor883.Description := 'HAnimSite l_axilla_proximal_pt';
{ METHOD .FdChildren.Add }
HAnimSite882.FdChildren.Add(TouchSensor883);
{ METHOD .FdChildren.Add }
HAnimSite882.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite882);
HAnimSite885 := THAnimSiteNode.Create;;
HAnimSite885.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor886 := TTouchSensorNode.Create;;
TouchSensor886.Description := 'HAnimSite l_clavicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite885.FdChildren.Add(TouchSensor886);
{ METHOD .FdChildren.Add }
HAnimSite885.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite885);
Shape888 := TShapeNode.Create;;
LineSet889 := TLineSetNode.Create;;
LineSet889.SetVertexCount([2]);
Coordinate890 := TCoordinateNode.Create;;
Coordinate890.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet889.Coord := Coordinate890;
{ from vt1 to r_sternoclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet889.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part66;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape888.Geometry := LineSet889;
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Shape888);
HAnimSite892 := THAnimSiteNode.Create;;
HAnimSite892.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor893 := TTouchSensorNode.Create;;
TouchSensor893.Description := 'HAnimSite r_acromion_pt';
{ METHOD .FdChildren.Add }
HAnimSite892.FdChildren.Add(TouchSensor893);
{ METHOD .FdChildren.Add }
HAnimSite892.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite892);
HAnimSite895 := THAnimSiteNode.Create;;
HAnimSite895.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor896 := TTouchSensorNode.Create;;
TouchSensor896.Description := 'HAnimSite r_axilla_distal_pt';
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(TouchSensor896);
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite895);
HAnimSite898 := THAnimSiteNode.Create;;
HAnimSite898.Translation := Vector3(0,1,0);
TouchSensor899 := TTouchSensorNode.Create;;
TouchSensor899.Description := 'HAnimSite r_axilla_posterior_folds_pt';
{ METHOD .FdChildren.Add }
HAnimSite898.FdChildren.Add(TouchSensor899);
{ METHOD .FdChildren.Add }
HAnimSite898.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite898);
HAnimSite901 := THAnimSiteNode.Create;;
HAnimSite901.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor902 := TTouchSensorNode.Create;;
TouchSensor902.Description := 'HAnimSite r_axilla_proximal_pt';
{ METHOD .FdChildren.Add }
HAnimSite901.FdChildren.Add(TouchSensor902);
{ METHOD .FdChildren.Add }
HAnimSite901.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite901);
HAnimSite904 := THAnimSiteNode.Create;;
end;

procedure InitJohnJoint20Part67;
begin

HAnimSite904.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor905 := TTouchSensorNode.Create;;
TouchSensor905.Description := 'HAnimSite r_clavicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite904.FdChildren.Add(TouchSensor905);
{ METHOD .FdChildren.Add }
HAnimSite904.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(HAnimSite904);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimSegment855);
HAnimJoint907 := THAnimJointNode.Create;;
HAnimJoint907.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment908 := THAnimSegmentNode.Create;;
Transform909 := TTransformNode.Create;;
{ Empty Transform }
Transform910 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform910.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform909.FdChildren.Add(Transform910);
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(Transform909);
Shape912 := TShapeNode.Create;;
LineSet913 := TLineSetNode.Create;;
LineSet913.SetVertexCount([2]);
Coordinate914 := TCoordinateNode.Create;;
Coordinate914.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet913.Coord := Coordinate914;
{ from vc7 to vc6 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet913.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape912.Geometry := LineSet913;
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(Shape912);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimSegment908);
HAnimJoint916 := THAnimJointNode.Create;;
HAnimJoint916.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment917 := THAnimSegmentNode.Create;;
Transform918 := TTransformNode.Create;;
end;

procedure InitJohnJoint20Part68;
begin

{ Empty Transform }
Transform919 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform919.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform918.FdChildren.Add(Transform919);
{ METHOD .FdChildren.Add }
HAnimSegment917.FdChildren.Add(Transform918);
Shape921 := TShapeNode.Create;;
LineSet922 := TLineSetNode.Create;;
LineSet922.SetVertexCount([2]);
Coordinate923 := TCoordinateNode.Create;;
Coordinate923.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet922.Coord := Coordinate923;
{ from vc6 to vc5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet922.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape921.Geometry := LineSet922;
{ METHOD .FdChildren.Add }
HAnimSegment917.FdChildren.Add(Shape921);
{ METHOD .FdChildren.Add }
HAnimJoint916.FdChildren.Add(HAnimSegment917);
HAnimJoint925 := THAnimJointNode.Create;;
HAnimJoint925.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment926 := THAnimSegmentNode.Create;;
Transform927 := TTransformNode.Create;;
{ Empty Transform }
Transform928 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform928.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform927.FdChildren.Add(Transform928);
{ METHOD .FdChildren.Add }
HAnimSegment926.FdChildren.Add(Transform927);
Shape930 := TShapeNode.Create;;
LineSet931 := TLineSetNode.Create;;
LineSet931.SetVertexCount([2]);
Coordinate932 := TCoordinateNode.Create;;
Coordinate932.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet931.Coord := Coordinate932;
{ from vc5 to vc4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet931.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part69;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape930.Geometry := LineSet931;
{ METHOD .FdChildren.Add }
HAnimSegment926.FdChildren.Add(Shape930);
{ METHOD .FdChildren.Add }
HAnimJoint925.FdChildren.Add(HAnimSegment926);
HAnimJoint934 := THAnimJointNode.Create;;
HAnimJoint934.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment935 := THAnimSegmentNode.Create;;
Transform936 := TTransformNode.Create;;
{ Empty Transform }
Transform937 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform937.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform936.FdChildren.Add(Transform937);
{ METHOD .FdChildren.Add }
HAnimSegment935.FdChildren.Add(Transform936);
Shape939 := TShapeNode.Create;;
LineSet940 := TLineSetNode.Create;;
LineSet940.SetVertexCount([2]);
Coordinate941 := TCoordinateNode.Create;;
Coordinate941.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet940.Coord := Coordinate941;
{ from vc4 to vc3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet940.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape939.Geometry := LineSet940;
{ METHOD .FdChildren.Add }
HAnimSegment935.FdChildren.Add(Shape939);
{ METHOD .FdChildren.Add }
HAnimJoint934.FdChildren.Add(HAnimSegment935);
HAnimJoint943 := THAnimJointNode.Create;;
HAnimJoint943.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment944 := THAnimSegmentNode.Create;;
Transform945 := TTransformNode.Create;;
{ Empty Transform }
Transform946 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform946.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform945.FdChildren.Add(Transform946);
{ METHOD .FdChildren.Add }
HAnimSegment944.FdChildren.Add(Transform945);
end;

procedure InitJohnJoint20Part70;
begin

Shape948 := TShapeNode.Create;;
LineSet949 := TLineSetNode.Create;;
LineSet949.SetVertexCount([2]);
Coordinate950 := TCoordinateNode.Create;;
Coordinate950.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet949.Coord := Coordinate950;
{ from vc3 to vc2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet949.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape948.Geometry := LineSet949;
{ METHOD .FdChildren.Add }
HAnimSegment944.FdChildren.Add(Shape948);
HAnimSite952 := THAnimSiteNode.Create;;
HAnimSite952.Translation := Vector3(0,1,0);
TouchSensor953 := TTouchSensorNode.Create;;
TouchSensor953.Description := 'HAnimSite adams_apple_pt';
{ METHOD .FdChildren.Add }
HAnimSite952.FdChildren.Add(TouchSensor953);
{ METHOD .FdChildren.Add }
HAnimSite952.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment944.FdChildren.Add(HAnimSite952);
{ METHOD .FdChildren.Add }
HAnimJoint943.FdChildren.Add(HAnimSegment944);
HAnimJoint955 := THAnimJointNode.Create;;
HAnimJoint955.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment956 := THAnimSegmentNode.Create;;
Transform957 := TTransformNode.Create;;
{ Empty Transform }
Transform958 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform958.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform957.FdChildren.Add(Transform958);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(Transform957);
Shape960 := TShapeNode.Create;;
LineSet961 := TLineSetNode.Create;;
LineSet961.SetVertexCount([2]);
Coordinate962 := TCoordinateNode.Create;
end;

procedure InitJohnJoint20Part71;
begin
;
Coordinate962.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet961.Coord := Coordinate962;
{ from vc2 to vc1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet961.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape960.Geometry := LineSet961;
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(Shape960);
{ METHOD .FdChildren.Add }
HAnimJoint955.FdChildren.Add(HAnimSegment956);
HAnimJoint964 := THAnimJointNode.Create;;
HAnimJoint964.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment965 := THAnimSegmentNode.Create;;
Transform966 := TTransformNode.Create;;
{ Empty Transform }
Transform967 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform967.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform966.FdChildren.Add(Transform967);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(Transform966);
Shape969 := TShapeNode.Create;;
LineSet970 := TLineSetNode.Create;;
LineSet970.SetVertexCount([2]);
Coordinate971 := TCoordinateNode.Create;;
Coordinate971.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet970.Coord := Coordinate971;
{ from vc1 to skullbase vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet970.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape969.Geometry := LineSet970;
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(Shape969);
HAnimSite973 := THAnimSiteNode.Create;;
HAnimSite973.Translation := Vector3(0,1,0);
TouchSensor974 := TTouchSensorNode.Create;;
TouchSensor974.Description := 'HAnimSite glabella_pt';
{ METHOD .FdChildren.Add }
HAnimSite973.FdChildren.Add(TouchSensor974);
{ METHOD .FdChildren.Add }
HAnimSite973.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite973);
end;

procedure InitJohnJoint20Part72;
begin

HAnimSite976 := THAnimSiteNode.Create;;
HAnimSite976.Translation := Vector3(0,1,0);
TouchSensor977 := TTouchSensorNode.Create;;
TouchSensor977.Description := 'HAnimSite l_ectocanthus_pt';
{ METHOD .FdChildren.Add }
HAnimSite976.FdChildren.Add(TouchSensor977);
{ METHOD .FdChildren.Add }
HAnimSite976.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite976);
HAnimSite979 := THAnimSiteNode.Create;;
HAnimSite979.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor980 := TTouchSensorNode.Create;;
TouchSensor980.Description := 'HAnimSite l_infraorbitale_pt';
{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(TouchSensor980);
{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite979);
HAnimSite982 := THAnimSiteNode.Create;;
HAnimSite982.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor983 := TTouchSensorNode.Create;;
TouchSensor983.Description := 'HAnimSite l_tragion_pt';
{ METHOD .FdChildren.Add }
HAnimSite982.FdChildren.Add(TouchSensor983);
{ METHOD .FdChildren.Add }
HAnimSite982.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite982);
HAnimSite985 := THAnimSiteNode.Create;;
HAnimSite985.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor986 := TTouchSensorNode.Create;;
TouchSensor986.Description := 'HAnimSite nuchale_pt';
{ METHOD .FdChildren.Add }
HAnimSite985.FdChildren.Add(TouchSensor986);
{ METHOD .FdChildren.Add }
HAnimSite985.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite985);
HAnimSite988 := THAnimSiteNode.Create;;
HAnimSite988.Translation := Vector3(0,1,0);
TouchSensor989 := TTouchSensorNode.Create;
end;

procedure InitJohnJoint20Part73;
begin
;
TouchSensor989.Description := 'HAnimSite opisthocranion_pt';
{ METHOD .FdChildren.Add }
HAnimSite988.FdChildren.Add(TouchSensor989);
{ METHOD .FdChildren.Add }
HAnimSite988.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite988);
HAnimSite991 := THAnimSiteNode.Create;;
HAnimSite991.Translation := Vector3(0,1,0);
TouchSensor992 := TTouchSensorNode.Create;;
TouchSensor992.Description := 'HAnimSite r_ectocanthus_pt';
{ METHOD .FdChildren.Add }
HAnimSite991.FdChildren.Add(TouchSensor992);
{ METHOD .FdChildren.Add }
HAnimSite991.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite991);
HAnimSite994 := THAnimSiteNode.Create;;
HAnimSite994.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor995 := TTouchSensorNode.Create;;
TouchSensor995.Description := 'HAnimSite r_infraorbitale_pt';
{ METHOD .FdChildren.Add }
HAnimSite994.FdChildren.Add(TouchSensor995);
{ METHOD .FdChildren.Add }
HAnimSite994.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite994);
HAnimSite997 := THAnimSiteNode.Create;;
HAnimSite997.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor998 := TTouchSensorNode.Create;;
TouchSensor998.Description := 'HAnimSite r_tragion_pt';
{ METHOD .FdChildren.Add }
HAnimSite997.FdChildren.Add(TouchSensor998);
{ METHOD .FdChildren.Add }
HAnimSite997.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite997);
HAnimSite1000 := THAnimSiteNode.Create;;
HAnimSite1000.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor1001 := TTouchSensorNode.Create;;
TouchSensor1001.Description := 'HAnimSite sellion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1000.FdChildren.Add(TouchSensor1001);
{ METHOD .FdChildren.Add }
HAnimSite1000.FdChildren.Add(Shape35);
end;

procedure InitJohnJoint20Part74;
begin

{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite1000);
HAnimSite1003 := THAnimSiteNode.Create;;
HAnimSite1003.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor1004 := TTouchSensorNode.Create;;
TouchSensor1004.Description := 'HAnimSite skull_vertex_pt';
{ METHOD .FdChildren.Add }
HAnimSite1003.FdChildren.Add(TouchSensor1004);
{ METHOD .FdChildren.Add }
HAnimSite1003.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment965.FdChildren.Add(HAnimSite1003);
{ METHOD .FdChildren.Add }
HAnimJoint964.FdChildren.Add(HAnimSegment965);
HAnimJoint1006 := THAnimJointNode.Create;;
HAnimJoint1006.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment1007 := THAnimSegmentNode.Create;;
Transform1008 := TTransformNode.Create;;
{ Empty Transform }
Transform1009 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1009.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1008.FdChildren.Add(Transform1009);
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Transform1008);
Shape1011 := TShapeNode.Create;;
LineSet1012 := TLineSetNode.Create;;
LineSet1012.SetVertexCount([2]);
Coordinate1013 := TCoordinateNode.Create;;
Coordinate1013.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1012.Coord := Coordinate1013;
{ from skullbase to l_eyelid_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1012.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1011.Geometry := LineSet1012;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1011);
Shape1015 := TShapeNode.Create;;
LineSet1016 := TLineSetNode.Create;;
LineSet1016.SetVertexCount([2]);
end;

procedure InitJohnJoint20Part75;
begin

Coordinate1017 := TCoordinateNode.Create;;
Coordinate1017.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1016.Coord := Coordinate1017;
{ from skullbase to r_eyelid_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1016.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1015.Geometry := LineSet1016;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1015);
Shape1019 := TShapeNode.Create;;
LineSet1020 := TLineSetNode.Create;;
LineSet1020.SetVertexCount([2]);
Coordinate1021 := TCoordinateNode.Create;;
Coordinate1021.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1020.Coord := Coordinate1021;
{ from skullbase to l_eyeball_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1020.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1019.Geometry := LineSet1020;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1019);
Shape1023 := TShapeNode.Create;;
LineSet1024 := TLineSetNode.Create;;
LineSet1024.SetVertexCount([2]);
Coordinate1025 := TCoordinateNode.Create;;
Coordinate1025.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1024.Coord := Coordinate1025;
{ from skullbase to r_eyeball_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1024.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1023.Geometry := LineSet1024;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1023);
Shape1027 := TShapeNode.Create;;
LineSet1028 := TLineSetNode.Create;;
LineSet1028.SetVertexCount([2]);
Coordinate1029 := TCoordinateNode.Create;;
Coordinate1029.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1028.Coord := Coordinate1029;
end;

procedure InitJohnJoint20Part76;
begin

{ from skullbase to l_eyebrow_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1028.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1027.Geometry := LineSet1028;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1027);
Shape1031 := TShapeNode.Create;;
LineSet1032 := TLineSetNode.Create;;
LineSet1032.SetVertexCount([2]);
Coordinate1033 := TCoordinateNode.Create;;
Coordinate1033.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1032.Coord := Coordinate1033;
{ from skullbase to r_eyebrow_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1032.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1031.Geometry := LineSet1032;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1031);
Shape1035 := TShapeNode.Create;;
LineSet1036 := TLineSetNode.Create;;
LineSet1036.SetVertexCount([2]);
Coordinate1037 := TCoordinateNode.Create;;
Coordinate1037.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1036.Coord := Coordinate1037;
{ from skullbase to temporomandibular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1036.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1035.Geometry := LineSet1036;
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(Shape1035);
HAnimSite1039 := THAnimSiteNode.Create;;
HAnimSite1039.Translation := Vector3(0.0631,1.553,0.033);
TouchSensor1040 := TTouchSensorNode.Create;;
TouchSensor1040.Description := 'HAnimSite l_gonion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(TouchSensor1040);
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(HAnimSite1039);
HAnimSite1042 := THAnimSiteNode.Create;;
HAnimSite1042.Translation := Vector3(0,1,0);
TouchSensor1043 := TTouchSensorNode.Create;
end;

procedure InitJohnJoint20Part77;
begin
;
TouchSensor1043.Description := 'HAnimSite menton_pt';
{ METHOD .FdChildren.Add }
HAnimSite1042.FdChildren.Add(TouchSensor1043);
{ METHOD .FdChildren.Add }
HAnimSite1042.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(HAnimSite1042);
HAnimSite1045 := THAnimSiteNode.Create;;
HAnimSite1045.Translation := Vector3(-0.052,1.5529,0.0347);
TouchSensor1046 := TTouchSensorNode.Create;;
TouchSensor1046.Description := 'HAnimSite r_gonion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1045.FdChildren.Add(TouchSensor1046);
{ METHOD .FdChildren.Add }
HAnimSite1045.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(HAnimSite1045);
HAnimSite1048 := THAnimSiteNode.Create;;
HAnimSite1048.Translation := Vector3(0.0061,1.541,0.0805);
TouchSensor1049 := TTouchSensorNode.Create;;
TouchSensor1049.Description := 'HAnimSite supramenton_pt';
{ METHOD .FdChildren.Add }
HAnimSite1048.FdChildren.Add(TouchSensor1049);
{ METHOD .FdChildren.Add }
HAnimSite1048.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1007.FdChildren.Add(HAnimSite1048);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimSegment1007);
HAnimJoint1051 := THAnimJointNode.Create;;
HAnimJoint1051.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1051);
HAnimJoint1052 := THAnimJointNode.Create;;
HAnimJoint1052.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1052);
HAnimJoint1053 := THAnimJointNode.Create;;
HAnimJoint1053.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1053);
HAnimJoint1054 := THAnimJointNode.Create;;
HAnimJoint1054.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1054);
end;

procedure InitJohnJoint20Part78;
begin

HAnimJoint1055 := THAnimJointNode.Create;;
HAnimJoint1055.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1055);
HAnimJoint1056 := THAnimJointNode.Create;;
HAnimJoint1056.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1056);
HAnimJoint1057 := THAnimJointNode.Create;;
HAnimJoint1057.Center := Vector3(0,1,0);
{ METHOD .FdChildren.Add }
HAnimJoint1006.FdChildren.Add(HAnimJoint1057);
HAnimDisplacer1058 := THAnimDisplacerNode.Create;;
HAnimDisplacer1058.SetCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer1058.SetDisplacements([Vector3(0,0.15,0),Vector3(0,0,0.15),Vector3(-0.1,0,0.15),Vector3(0.1,0,0.05),Vector3(0,-0.02,0.05),Vector3(-0.15,0,0),Vector3(-0.05,0,0),Vector3(0.15,0,0),Vector3(0.05,0,0),Vector3(0,0,-0.15)]);
{ METHOD .Displacers }
{ METHOD.SET .Displacers }
HAnimJoint1006.Displacers := HAnimDisplacer1058;
{ METHOD .FdChildren.Add }
HAnimJoint964.FdChildren.Add(HAnimJoint1006);
{ METHOD .FdChildren.Add }
HAnimJoint955.FdChildren.Add(HAnimJoint964);
{ METHOD .FdChildren.Add }
HAnimJoint943.FdChildren.Add(HAnimJoint955);
{ METHOD .FdChildren.Add }
HAnimJoint934.FdChildren.Add(HAnimJoint943);
{ METHOD .FdChildren.Add }
HAnimJoint925.FdChildren.Add(HAnimJoint934);
{ METHOD .FdChildren.Add }
HAnimJoint916.FdChildren.Add(HAnimJoint925);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimJoint916);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimJoint907);
HAnimJoint1059 := THAnimJointNode.Create;;
HAnimJoint1059.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment1060 := THAnimSegmentNode.Create;;
Transform1061 := TTransformNode.Create;;
{ Empty Transform }
Transform1062 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1062.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1061.FdChildren.Add(Transform1062);
{ METHOD .FdChildren.Add }
HAnimSegment1060.FdChildren.Add(Transform1061);
Shape1064 := TShapeNode.Create;;
LineSet1065 := TLineSetNode.Create;
end;

procedure InitJohnJoint20Part79;
begin
;
LineSet1065.SetVertexCount([2]);
Coordinate1066 := TCoordinateNode.Create;;
Coordinate1066.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1065.Coord := Coordinate1066;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1065.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1064.Geometry := LineSet1065;
{ METHOD .FdChildren.Add }
HAnimSegment1060.FdChildren.Add(Shape1064);
{ METHOD .FdChildren.Add }
HAnimJoint1059.FdChildren.Add(HAnimSegment1060);
HAnimJoint1068 := THAnimJointNode.Create;;
HAnimJoint1068.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment1069 := THAnimSegmentNode.Create;;
Transform1070 := TTransformNode.Create;;
{ Empty Transform }
Transform1071 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1071.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1070.FdChildren.Add(Transform1071);
{ METHOD .FdChildren.Add }
HAnimSegment1069.FdChildren.Add(Transform1070);
Shape1073 := TShapeNode.Create;;
LineSet1074 := TLineSetNode.Create;;
LineSet1074.SetVertexCount([2]);
Coordinate1075 := TCoordinateNode.Create;;
Coordinate1075.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1074.Coord := Coordinate1075;
{ from l_acromioclavicular to l_shoulder vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1074.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1073.Geometry := LineSet1074;
{ METHOD .FdChildren.Add }
HAnimSegment1069.FdChildren.Add(Shape1073);
HAnimSite1077 := THAnimSiteNode.Create;;
HAnimSite1077.Translation := Vector3(0,1,0);
TouchSensor1078 := TTouchSensorNode.Create;;
TouchSensor1078.Description := 'HAnimSite l_bideltoid_pt';
end;

procedure InitJohnJoint20Part80;
begin

{ METHOD .FdChildren.Add }
HAnimSite1077.FdChildren.Add(TouchSensor1078);
{ METHOD .FdChildren.Add }
HAnimSite1077.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1069.FdChildren.Add(HAnimSite1077);
HAnimSite1080 := THAnimSiteNode.Create;;
HAnimSite1080.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor1081 := TTouchSensorNode.Create;;
TouchSensor1081.Description := 'HAnimSite l_humeral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1080.FdChildren.Add(TouchSensor1081);
{ METHOD .FdChildren.Add }
HAnimSite1080.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1069.FdChildren.Add(HAnimSite1080);
{ METHOD .FdChildren.Add }
HAnimJoint1068.FdChildren.Add(HAnimSegment1069);
HAnimJoint1083 := THAnimJointNode.Create;;
HAnimJoint1083.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment1084 := THAnimSegmentNode.Create;;
Transform1085 := TTransformNode.Create;;
{ Empty Transform }
Transform1086 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1086.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1085.FdChildren.Add(Transform1086);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Transform1085);
Shape1088 := TShapeNode.Create;;
LineSet1089 := TLineSetNode.Create;;
LineSet1089.SetVertexCount([2]);
Coordinate1090 := TCoordinateNode.Create;;
Coordinate1090.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1089.Coord := Coordinate1090;
{ from l_shoulder to l_elbow vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1089.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1088.Geometry := LineSet1089;
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Shape1088);
HAnimSite1092 := THAnimSiteNode.Create;;
HAnimSite1092.Translation := Vector3(0.1735,1.1272,-0.1113);
end;

procedure InitJohnJoint20Part81;
begin

TouchSensor1093 := TTouchSensorNode.Create;;
TouchSensor1093.Description := 'HAnimSite l_humeral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1092.FdChildren.Add(TouchSensor1093);
{ METHOD .FdChildren.Add }
HAnimSite1092.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(HAnimSite1092);
HAnimSite1095 := THAnimSiteNode.Create;;
HAnimSite1095.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor1096 := TTouchSensorNode.Create;;
TouchSensor1096.Description := 'HAnimSite l_olecranon_pt';
{ METHOD .FdChildren.Add }
HAnimSite1095.FdChildren.Add(TouchSensor1096);
{ METHOD .FdChildren.Add }
HAnimSite1095.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(HAnimSite1095);
HAnimSite1098 := THAnimSiteNode.Create;;
HAnimSite1098.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor1099 := TTouchSensorNode.Create;;
TouchSensor1099.Description := 'HAnimSite l_radial_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1098.FdChildren.Add(TouchSensor1099);
{ METHOD .FdChildren.Add }
HAnimSite1098.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(HAnimSite1098);
HAnimSite1101 := THAnimSiteNode.Create;;
HAnimSite1101.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor1102 := TTouchSensorNode.Create;;
TouchSensor1102.Description := 'HAnimSite l_radiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1101.FdChildren.Add(TouchSensor1102);
{ METHOD .FdChildren.Add }
HAnimSite1101.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(HAnimSite1101);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimSegment1084);
HAnimJoint1104 := THAnimJointNode.Create;;
HAnimJoint1104.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment1105 := THAnimSegmentNode.Create;;
Transform1106 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part82;
begin
;
{ Empty Transform }
Transform1107 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1107.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1106.FdChildren.Add(Transform1107);
{ METHOD .FdChildren.Add }
HAnimSegment1105.FdChildren.Add(Transform1106);
Shape1109 := TShapeNode.Create;;
LineSet1110 := TLineSetNode.Create;;
LineSet1110.SetVertexCount([2]);
Coordinate1111 := TCoordinateNode.Create;;
Coordinate1111.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1110.Coord := Coordinate1111;
{ from l_elbow to l_radiocarpal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1110.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1109.Geometry := LineSet1110;
{ METHOD .FdChildren.Add }
HAnimSegment1105.FdChildren.Add(Shape1109);
HAnimSite1113 := THAnimSiteNode.Create;;
HAnimSite1113.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor1114 := TTouchSensorNode.Create;;
TouchSensor1114.Description := 'HAnimSite l_ulnar_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1113.FdChildren.Add(TouchSensor1114);
{ METHOD .FdChildren.Add }
HAnimSite1113.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1105.FdChildren.Add(HAnimSite1113);
{ METHOD .FdChildren.Add }
HAnimJoint1104.FdChildren.Add(HAnimSegment1105);
HAnimJoint1116 := THAnimJointNode.Create;;
HAnimJoint1116.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment1117 := THAnimSegmentNode.Create;;
Transform1118 := TTransformNode.Create;;
Transform1118.Scale := Vector3(0.2,0.2,0.2);
Transform1118.Translation := Vector3(0.2,0.85,-0.05);
Transform1118.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform1119 := TTransformNode.Create;;
end;

procedure InitJohnJoint20Part83;
begin

Transform1119.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
{ METHOD .FdChildren.Add }
Transform1119.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1118.FdChildren.Add(Transform1119);
{ METHOD .FdChildren.Add }
HAnimSegment1117.FdChildren.Add(Transform1118);
Shape1121 := TShapeNode.Create;;
LineSet1122 := TLineSetNode.Create;;
LineSet1122.SetVertexCount([2]);
Coordinate1123 := TCoordinateNode.Create;;
Coordinate1123.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1122.Coord := Coordinate1123;
{ from l_radiocarpal to l_midcarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1122.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1121.Geometry := LineSet1122;
{ METHOD .FdChildren.Add }
HAnimSegment1117.FdChildren.Add(Shape1121);
Shape1125 := TShapeNode.Create;;
LineSet1126 := TLineSetNode.Create;;
LineSet1126.SetVertexCount([2]);
Coordinate1127 := TCoordinateNode.Create;;
Coordinate1127.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1126.Coord := Coordinate1127;
{ from l_radiocarpal to l_midcarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1126.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1125.Geometry := LineSet1126;
{ METHOD .FdChildren.Add }
HAnimSegment1117.FdChildren.Add(Shape1125);
Shape1129 := TShapeNode.Create;;
LineSet1130 := TLineSetNode.Create;;
LineSet1130.SetVertexCount([2]);
Coordinate1131 := TCoordinateNode.Create;;
Coordinate1131.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1130.Coord := Coordinate1131;
{ from l_radiocarpal to l_midcarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1130.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1129.Geometry := LineSet1130;
{ METHOD .FdChildren.Add }
HAnimSegment1117.FdChildren.Add(Shape1129);
end;

procedure InitJohnJoint20Part84;
begin

Shape1133 := TShapeNode.Create;;
LineSet1134 := TLineSetNode.Create;;
LineSet1134.SetVertexCount([2]);
Coordinate1135 := TCoordinateNode.Create;;
Coordinate1135.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1134.Coord := Coordinate1135;
{ from l_radiocarpal to l_midcarpal_4_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1134.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1133.Geometry := LineSet1134;
{ METHOD .FdChildren.Add }
HAnimSegment1117.FdChildren.Add(Shape1133);
{ METHOD .FdChildren.Add }
HAnimJoint1116.FdChildren.Add(HAnimSegment1117);
HAnimJoint1137 := THAnimJointNode.Create;;
HAnimJoint1137.Center := Vector3(0,1,0);
HAnimSegment1138 := THAnimSegmentNode.Create;;
Transform1139 := TTransformNode.Create;;
{ Empty Transform }
Transform1140 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1140.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1139.FdChildren.Add(Transform1140);
{ METHOD .FdChildren.Add }
HAnimSegment1138.FdChildren.Add(Transform1139);
Shape1142 := TShapeNode.Create;;
LineSet1143 := TLineSetNode.Create;;
LineSet1143.SetVertexCount([2]);
Coordinate1144 := TCoordinateNode.Create;;
Coordinate1144.SetPoint([Vector3(0,1,0),Vector3(0.1924,0.8472,-0.0534)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1143.Coord := Coordinate1144;
{ from l_midcarpal_1 to l_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1143.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1142.Geometry := LineSet1143;
{ METHOD .FdChildren.Add }
HAnimSegment1138.FdChildren.Add(Shape1142);
{ METHOD .FdChildren.Add }
HAnimJoint1137.FdChildren.Add(HAnimSegment1138);
HAnimJoint1146 := THAnimJointNode.Create;;
end;

procedure InitJohnJoint20Part85;
begin

HAnimJoint1146.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1147 := THAnimSegmentNode.Create;;
Transform1148 := TTransformNode.Create;;
{ Empty Transform }
Transform1149 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1149.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1148.FdChildren.Add(Transform1149);
{ METHOD .FdChildren.Add }
HAnimSegment1147.FdChildren.Add(Transform1148);
Shape1151 := TShapeNode.Create;;
LineSet1152 := TLineSetNode.Create;;
LineSet1152.SetVertexCount([2]);
Coordinate1153 := TCoordinateNode.Create;;
Coordinate1153.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1152.Coord := Coordinate1153;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1152.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1151.Geometry := LineSet1152;
{ METHOD .FdChildren.Add }
HAnimSegment1147.FdChildren.Add(Shape1151);
{ METHOD .FdChildren.Add }
HAnimJoint1146.FdChildren.Add(HAnimSegment1147);
HAnimJoint1155 := THAnimJointNode.Create;;
HAnimJoint1155.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1156 := THAnimSegmentNode.Create;;
Transform1157 := TTransformNode.Create;;
{ Empty Transform }
Transform1158 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1158.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1157.FdChildren.Add(Transform1158);
{ METHOD .FdChildren.Add }
HAnimSegment1156.FdChildren.Add(Transform1157);
Shape1160 := TShapeNode.Create;;
LineSet1161 := TLineSetNode.Create;;
LineSet1161.SetVertexCount([2]);
end;

procedure InitJohnJoint20Part86;
begin

Coordinate1162 := TCoordinateNode.Create;;
Coordinate1162.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1161.Coord := Coordinate1162;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1161.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1160.Geometry := LineSet1161;
{ METHOD .FdChildren.Add }
HAnimSegment1156.FdChildren.Add(Shape1160);
HAnimSite1164 := THAnimSiteNode.Create;;
HAnimSite1164.Translation := Vector3(0,1,0);
TouchSensor1165 := TTouchSensorNode.Create;;
TouchSensor1165.Description := 'HAnimSite l_carpal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite1164.FdChildren.Add(TouchSensor1165);
{ METHOD .FdChildren.Add }
HAnimSite1164.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1156.FdChildren.Add(HAnimSite1164);
{ METHOD .FdChildren.Add }
HAnimJoint1155.FdChildren.Add(HAnimSegment1156);
HAnimJoint1167 := THAnimJointNode.Create;;
HAnimJoint1167.Center := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
HAnimJoint1155.FdChildren.Add(HAnimJoint1167);
{ METHOD .FdChildren.Add }
HAnimJoint1146.FdChildren.Add(HAnimJoint1155);
{ METHOD .FdChildren.Add }
HAnimJoint1137.FdChildren.Add(HAnimJoint1146);
{ METHOD .FdChildren.Add }
HAnimJoint1116.FdChildren.Add(HAnimJoint1137);
HAnimJoint1168 := THAnimJointNode.Create;;
HAnimJoint1168.Center := Vector3(0,1,0);
HAnimSegment1169 := THAnimSegmentNode.Create;;
Transform1170 := TTransformNode.Create;;
{ Empty Transform }
Transform1171 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1171.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1170.FdChildren.Add(Transform1171);
{ METHOD .FdChildren.Add }
HAnimSegment1169.FdChildren.Add(Transform1170);
Shape1173 := TShapeNode.Create;;
LineSet1174 := TLineSetNode.Create;;
end;

procedure InitJohnJoint20Part87;
begin

LineSet1174.SetVertexCount([2]);
Coordinate1175 := TCoordinateNode.Create;;
Coordinate1175.SetPoint([Vector3(0,1,0),Vector3(0.1983,0.8024,-0.028)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1174.Coord := Coordinate1175;
{ from l_midcarpal_2 to l_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1174.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1173.Geometry := LineSet1174;
{ METHOD .FdChildren.Add }
HAnimSegment1169.FdChildren.Add(Shape1173);
HAnimSite1177 := THAnimSiteNode.Create;;
HAnimSite1177.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1178 := TTouchSensorNode.Create;;
TouchSensor1178.Description := 'HAnimSite l_metacarpal_phalanx_2_pt';
{ METHOD .FdChildren.Add }
HAnimSite1177.FdChildren.Add(TouchSensor1178);
{ METHOD .FdChildren.Add }
HAnimSite1177.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1169.FdChildren.Add(HAnimSite1177);
{ METHOD .FdChildren.Add }
HAnimJoint1168.FdChildren.Add(HAnimSegment1169);
HAnimJoint1180 := THAnimJointNode.Create;;
HAnimJoint1180.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1181 := THAnimSegmentNode.Create;;
Transform1182 := TTransformNode.Create;;
{ Empty Transform }
Transform1183 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1183.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1182.FdChildren.Add(Transform1183);
{ METHOD .FdChildren.Add }
HAnimSegment1181.FdChildren.Add(Transform1182);
Shape1185 := TShapeNode.Create;;
LineSet1186 := TLineSetNode.Create;;
LineSet1186.SetVertexCount([2]);
Coordinate1187 := TCoordinateNode.Create;;
Coordinate1187.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1186.Coord := Coordinate1187;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1186.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part88;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1185.Geometry := LineSet1186;
{ METHOD .FdChildren.Add }
HAnimSegment1181.FdChildren.Add(Shape1185);
{ METHOD .FdChildren.Add }
HAnimJoint1180.FdChildren.Add(HAnimSegment1181);
HAnimJoint1189 := THAnimJointNode.Create;;
HAnimJoint1189.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment1190 := THAnimSegmentNode.Create;;
Transform1191 := TTransformNode.Create;;
{ Empty Transform }
Transform1192 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1192.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1191.FdChildren.Add(Transform1192);
{ METHOD .FdChildren.Add }
HAnimSegment1190.FdChildren.Add(Transform1191);
Shape1194 := TShapeNode.Create;;
LineSet1195 := TLineSetNode.Create;;
LineSet1195.SetVertexCount([2]);
Coordinate1196 := TCoordinateNode.Create;;
Coordinate1196.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1195.Coord := Coordinate1196;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1195.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1194.Geometry := LineSet1195;
{ METHOD .FdChildren.Add }
HAnimSegment1190.FdChildren.Add(Shape1194);
{ METHOD .FdChildren.Add }
HAnimJoint1189.FdChildren.Add(HAnimSegment1190);
HAnimJoint1198 := THAnimJointNode.Create;;
HAnimJoint1198.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1199 := THAnimSegmentNode.Create;;
Transform1200 := TTransformNode.Create;;
{ Empty Transform }
Transform1201 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1201.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1200.FdChildren.Add(Transform1201);
{ METHOD .FdChildren.Add }
HAnimSegment1199.FdChildren.Add(Transform1200);
end;

procedure InitJohnJoint20Part89;
begin

Shape1203 := TShapeNode.Create;;
LineSet1204 := TLineSetNode.Create;;
LineSet1204.SetVertexCount([2]);
Coordinate1205 := TCoordinateNode.Create;;
Coordinate1205.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1204.Coord := Coordinate1205;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1204.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1203.Geometry := LineSet1204;
{ METHOD .FdChildren.Add }
HAnimSegment1199.FdChildren.Add(Shape1203);
HAnimSite1207 := THAnimSiteNode.Create;;
HAnimSite1207.Translation := Vector3(0,1,0);
TouchSensor1208 := TTouchSensorNode.Create;;
TouchSensor1208.Description := 'HAnimSite l_carpal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite1207.FdChildren.Add(TouchSensor1208);
{ METHOD .FdChildren.Add }
HAnimSite1207.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1199.FdChildren.Add(HAnimSite1207);
HAnimSite1210 := THAnimSiteNode.Create;;
HAnimSite1210.Translation := Vector3(0.2056,0.6743,-0.0482);
TouchSensor1211 := TTouchSensorNode.Create;;
TouchSensor1211.Description := 'HAnimSite l_dactylion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1210.FdChildren.Add(TouchSensor1211);
{ METHOD .FdChildren.Add }
HAnimSite1210.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1199.FdChildren.Add(HAnimSite1210);
{ METHOD .FdChildren.Add }
HAnimJoint1198.FdChildren.Add(HAnimSegment1199);
HAnimJoint1213 := THAnimJointNode.Create;;
HAnimJoint1213.Center := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint1198.FdChildren.Add(HAnimJoint1213);
{ METHOD .FdChildren.Add }
HAnimJoint1189.FdChildren.Add(HAnimJoint1198);
{ METHOD .FdChildren.Add }
HAnimJoint1180.FdChildren.Add(HAnimJoint1189);
{ METHOD .FdChildren.Add }
HAnimJoint1168.FdChildren.Add(HAnimJoint1180);
{ METHOD .FdChildren.Add }
HAnimJoint1116.FdChildren.Add(HAnimJoint1168);
HAnimJoint1214 := THAnimJointNode.Create;
end;

procedure InitJohnJoint20Part90;
begin
;
HAnimJoint1214.Center := Vector3(0,1,0);
HAnimSegment1215 := THAnimSegmentNode.Create;;
Transform1216 := TTransformNode.Create;;
{ Empty Transform }
Transform1217 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1217.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1216.FdChildren.Add(Transform1217);
{ METHOD .FdChildren.Add }
HAnimSegment1215.FdChildren.Add(Transform1216);
Shape1219 := TShapeNode.Create;;
LineSet1220 := TLineSetNode.Create;;
LineSet1220.SetVertexCount([2]);
Coordinate1221 := TCoordinateNode.Create;;
Coordinate1221.SetPoint([Vector3(0,1,0),Vector3(0.1987,0.8029,-0.053)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1220.Coord := Coordinate1221;
{ from l_midcarpal_3 to l_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1220.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1219.Geometry := LineSet1220;
{ METHOD .FdChildren.Add }
HAnimSegment1215.FdChildren.Add(Shape1219);
HAnimSite1223 := THAnimSiteNode.Create;;
HAnimSite1223.Translation := Vector3(0,1,0);
TouchSensor1224 := TTouchSensorNode.Create;;
TouchSensor1224.Description := 'HAnimSite l_metacarpal_phalanx_3_pt';
{ METHOD .FdChildren.Add }
HAnimSite1223.FdChildren.Add(TouchSensor1224);
{ METHOD .FdChildren.Add }
HAnimSite1223.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1215.FdChildren.Add(HAnimSite1223);
{ METHOD .FdChildren.Add }
HAnimJoint1214.FdChildren.Add(HAnimSegment1215);
HAnimJoint1226 := THAnimJointNode.Create;;
HAnimJoint1226.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1227 := THAnimSegmentNode.Create;;
Transform1228 := TTransformNode.Create;;
end;

procedure InitJohnJoint20Part91;
begin

{ Empty Transform }
Transform1229 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1229.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1228.FdChildren.Add(Transform1229);
{ METHOD .FdChildren.Add }
HAnimSegment1227.FdChildren.Add(Transform1228);
Shape1231 := TShapeNode.Create;;
LineSet1232 := TLineSetNode.Create;;
LineSet1232.SetVertexCount([2]);
Coordinate1233 := TCoordinateNode.Create;;
Coordinate1233.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1232.Coord := Coordinate1233;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1232.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1231.Geometry := LineSet1232;
{ METHOD .FdChildren.Add }
HAnimSegment1227.FdChildren.Add(Shape1231);
{ METHOD .FdChildren.Add }
HAnimJoint1226.FdChildren.Add(HAnimSegment1227);
HAnimJoint1235 := THAnimJointNode.Create;;
HAnimJoint1235.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1236 := THAnimSegmentNode.Create;;
Transform1237 := TTransformNode.Create;;
{ Empty Transform }
Transform1238 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1238.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1237.FdChildren.Add(Transform1238);
{ METHOD .FdChildren.Add }
HAnimSegment1236.FdChildren.Add(Transform1237);
Shape1240 := TShapeNode.Create;;
LineSet1241 := TLineSetNode.Create;;
LineSet1241.SetVertexCount([2]);
Coordinate1242 := TCoordinateNode.Create;;
Coordinate1242.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1241.Coord := Coordinate1242;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1241.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part92;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1240.Geometry := LineSet1241;
{ METHOD .FdChildren.Add }
HAnimSegment1236.FdChildren.Add(Shape1240);
{ METHOD .FdChildren.Add }
HAnimJoint1235.FdChildren.Add(HAnimSegment1236);
HAnimJoint1244 := THAnimJointNode.Create;;
HAnimJoint1244.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1245 := THAnimSegmentNode.Create;;
Transform1246 := TTransformNode.Create;;
{ Empty Transform }
Transform1247 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1247.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1246.FdChildren.Add(Transform1247);
{ METHOD .FdChildren.Add }
HAnimSegment1245.FdChildren.Add(Transform1246);
Shape1249 := TShapeNode.Create;;
LineSet1250 := TLineSetNode.Create;;
LineSet1250.SetVertexCount([2]);
Coordinate1251 := TCoordinateNode.Create;;
Coordinate1251.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1250.Coord := Coordinate1251;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1250.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1249.Geometry := LineSet1250;
{ METHOD .FdChildren.Add }
HAnimSegment1245.FdChildren.Add(Shape1249);
HAnimSite1253 := THAnimSiteNode.Create;;
HAnimSite1253.Translation := Vector3(0,1,0);
TouchSensor1254 := TTouchSensorNode.Create;;
TouchSensor1254.Description := 'HAnimSite l_carpal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite1253.FdChildren.Add(TouchSensor1254);
{ METHOD .FdChildren.Add }
HAnimSite1253.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1245.FdChildren.Add(HAnimSite1253);
{ METHOD .FdChildren.Add }
HAnimJoint1244.FdChildren.Add(HAnimSegment1245);
HAnimJoint1256 := THAnimJointNode.Create;;
HAnimJoint1256.Center := Vector3(0.2026,0.7011,-0.0494);
end;

procedure InitJohnJoint20Part93;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1244.FdChildren.Add(HAnimJoint1256);
{ METHOD .FdChildren.Add }
HAnimJoint1235.FdChildren.Add(HAnimJoint1244);
{ METHOD .FdChildren.Add }
HAnimJoint1226.FdChildren.Add(HAnimJoint1235);
{ METHOD .FdChildren.Add }
HAnimJoint1214.FdChildren.Add(HAnimJoint1226);
{ METHOD .FdChildren.Add }
HAnimJoint1116.FdChildren.Add(HAnimJoint1214);
HAnimJoint1257 := THAnimJointNode.Create;;
HAnimJoint1257.Center := Vector3(0,1,0);
HAnimSegment1258 := THAnimSegmentNode.Create;;
Transform1259 := TTransformNode.Create;;
{ Empty Transform }
Transform1260 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1260.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1259.FdChildren.Add(Transform1260);
{ METHOD .FdChildren.Add }
HAnimSegment1258.FdChildren.Add(Transform1259);
Shape1262 := TShapeNode.Create;;
LineSet1263 := TLineSetNode.Create;;
LineSet1263.SetVertexCount([2]);
Coordinate1264 := TCoordinateNode.Create;;
Coordinate1264.SetPoint([Vector3(0,1,0),Vector3(0.1956,0.8019,-0.0794)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1263.Coord := Coordinate1264;
{ from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1263.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1262.Geometry := LineSet1263;
{ METHOD .FdChildren.Add }
HAnimSegment1258.FdChildren.Add(Shape1262);
Shape1266 := TShapeNode.Create;;
LineSet1267 := TLineSetNode.Create;;
LineSet1267.SetVertexCount([2]);
Coordinate1268 := TCoordinateNode.Create;;
Coordinate1268.SetPoint([Vector3(0,1,0),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1267.Coord := Coordinate1268;
{ from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1267.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1266.Geometry := LineSet1267;
end;

procedure InitJohnJoint20Part94;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1258.FdChildren.Add(Shape1266);
HAnimSite1270 := THAnimSiteNode.Create;;
HAnimSite1270.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1271 := TTouchSensorNode.Create;;
TouchSensor1271.Description := 'HAnimSite l_metacarpal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite1270.FdChildren.Add(TouchSensor1271);
{ METHOD .FdChildren.Add }
HAnimSite1270.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1258.FdChildren.Add(HAnimSite1270);
{ METHOD .FdChildren.Add }
HAnimJoint1257.FdChildren.Add(HAnimSegment1258);
HAnimJoint1273 := THAnimJointNode.Create;;
HAnimJoint1273.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1274 := THAnimSegmentNode.Create;;
Transform1275 := TTransformNode.Create;;
{ Empty Transform }
Transform1276 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1276.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1275.FdChildren.Add(Transform1276);
{ METHOD .FdChildren.Add }
HAnimSegment1274.FdChildren.Add(Transform1275);
Shape1278 := TShapeNode.Create;;
LineSet1279 := TLineSetNode.Create;;
LineSet1279.SetVertexCount([2]);
Coordinate1280 := TCoordinateNode.Create;;
Coordinate1280.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1279.Coord := Coordinate1280;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1279.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1278.Geometry := LineSet1279;
{ METHOD .FdChildren.Add }
HAnimSegment1274.FdChildren.Add(Shape1278);
{ METHOD .FdChildren.Add }
HAnimJoint1273.FdChildren.Add(HAnimSegment1274);
HAnimJoint1282 := THAnimJointNode.Create;;
HAnimJoint1282.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1283 := THAnimSegmentNode.Create;
end;

procedure InitJohnJoint20Part95;
begin
;
Transform1284 := TTransformNode.Create;;
{ Empty Transform }
Transform1285 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1285.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1284.FdChildren.Add(Transform1285);
{ METHOD .FdChildren.Add }
HAnimSegment1283.FdChildren.Add(Transform1284);
Shape1287 := TShapeNode.Create;;
LineSet1288 := TLineSetNode.Create;;
LineSet1288.SetVertexCount([2]);
Coordinate1289 := TCoordinateNode.Create;;
Coordinate1289.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1288.Coord := Coordinate1289;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1288.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1287.Geometry := LineSet1288;
{ METHOD .FdChildren.Add }
HAnimSegment1283.FdChildren.Add(Shape1287);
{ METHOD .FdChildren.Add }
HAnimJoint1282.FdChildren.Add(HAnimSegment1283);
HAnimJoint1291 := THAnimJointNode.Create;;
HAnimJoint1291.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1292 := THAnimSegmentNode.Create;;
Transform1293 := TTransformNode.Create;;
{ Empty Transform }
Transform1294 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1294.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1293.FdChildren.Add(Transform1294);
{ METHOD .FdChildren.Add }
HAnimSegment1292.FdChildren.Add(Transform1293);
Shape1296 := TShapeNode.Create;;
LineSet1297 := TLineSetNode.Create;;
LineSet1297.SetVertexCount([2]);
Coordinate1298 := TCoordinateNode.Create;;
end;

procedure InitJohnJoint20Part96;
begin

Coordinate1298.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1297.Coord := Coordinate1298;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1297.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1296.Geometry := LineSet1297;
{ METHOD .FdChildren.Add }
HAnimSegment1292.FdChildren.Add(Shape1296);
HAnimSite1300 := THAnimSiteNode.Create;;
HAnimSite1300.Translation := Vector3(0,1,0);
TouchSensor1301 := TTouchSensorNode.Create;;
TouchSensor1301.Description := 'HAnimSite l_carpal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite1300.FdChildren.Add(TouchSensor1301);
{ METHOD .FdChildren.Add }
HAnimSite1300.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1292.FdChildren.Add(HAnimSite1300);
{ METHOD .FdChildren.Add }
HAnimJoint1291.FdChildren.Add(HAnimSegment1292);
HAnimJoint1303 := THAnimJointNode.Create;;
HAnimJoint1303.Center := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
HAnimJoint1291.FdChildren.Add(HAnimJoint1303);
{ METHOD .FdChildren.Add }
HAnimJoint1282.FdChildren.Add(HAnimJoint1291);
{ METHOD .FdChildren.Add }
HAnimJoint1273.FdChildren.Add(HAnimJoint1282);
{ METHOD .FdChildren.Add }
HAnimJoint1257.FdChildren.Add(HAnimJoint1273);
HAnimJoint1304 := THAnimJointNode.Create;;
HAnimJoint1304.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1305 := THAnimSegmentNode.Create;;
Transform1306 := TTransformNode.Create;;
{ Empty Transform }
Transform1307 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1307.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1306.FdChildren.Add(Transform1307);
{ METHOD .FdChildren.Add }
HAnimSegment1305.FdChildren.Add(Transform1306);
Shape1309 := TShapeNode.Create;;
LineSet1310 := TLineSetNode.Create;;
LineSet1310.SetVertexCount([2]);
Coordinate1311 := TCoordinateNode.Create;
end;

procedure InitJohnJoint20Part97;
begin
;
Coordinate1311.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1310.Coord := Coordinate1311;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1310.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1309.Geometry := LineSet1310;
{ METHOD .FdChildren.Add }
HAnimSegment1305.FdChildren.Add(Shape1309);
{ METHOD .FdChildren.Add }
HAnimJoint1304.FdChildren.Add(HAnimSegment1305);
HAnimJoint1313 := THAnimJointNode.Create;;
HAnimJoint1313.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment1314 := THAnimSegmentNode.Create;;
Transform1315 := TTransformNode.Create;;
{ Empty Transform }
Transform1316 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1316.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1315.FdChildren.Add(Transform1316);
{ METHOD .FdChildren.Add }
HAnimSegment1314.FdChildren.Add(Transform1315);
Shape1318 := TShapeNode.Create;;
LineSet1319 := TLineSetNode.Create;;
LineSet1319.SetVertexCount([2]);
Coordinate1320 := TCoordinateNode.Create;;
Coordinate1320.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1319.Coord := Coordinate1320;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1319.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1318.Geometry := LineSet1319;
{ METHOD .FdChildren.Add }
HAnimSegment1314.FdChildren.Add(Shape1318);
{ METHOD .FdChildren.Add }
HAnimJoint1313.FdChildren.Add(HAnimSegment1314);
HAnimJoint1322 := THAnimJointNode.Create;;
HAnimJoint1322.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1323 := THAnimSegmentNode.Create;;
Transform1324 := TTransformNode.Create;;
{ Empty Transform }
Transform1325 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part98;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1325.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1324.FdChildren.Add(Transform1325);
{ METHOD .FdChildren.Add }
HAnimSegment1323.FdChildren.Add(Transform1324);
Shape1327 := TShapeNode.Create;;
LineSet1328 := TLineSetNode.Create;;
LineSet1328.SetVertexCount([2]);
Coordinate1329 := TCoordinateNode.Create;;
Coordinate1329.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1328.Coord := Coordinate1329;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1328.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1327.Geometry := LineSet1328;
{ METHOD .FdChildren.Add }
HAnimSegment1323.FdChildren.Add(Shape1327);
HAnimSite1331 := THAnimSiteNode.Create;;
HAnimSite1331.Translation := Vector3(0,1,0);
TouchSensor1332 := TTouchSensorNode.Create;;
TouchSensor1332.Description := 'HAnimSite l_carpal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite1331.FdChildren.Add(TouchSensor1332);
{ METHOD .FdChildren.Add }
HAnimSite1331.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1323.FdChildren.Add(HAnimSite1331);
{ METHOD .FdChildren.Add }
HAnimJoint1322.FdChildren.Add(HAnimSegment1323);
HAnimJoint1334 := THAnimJointNode.Create;;
HAnimJoint1334.Center := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
HAnimJoint1322.FdChildren.Add(HAnimJoint1334);
{ METHOD .FdChildren.Add }
HAnimJoint1313.FdChildren.Add(HAnimJoint1322);
{ METHOD .FdChildren.Add }
HAnimJoint1304.FdChildren.Add(HAnimJoint1313);
{ METHOD .FdChildren.Add }
HAnimJoint1257.FdChildren.Add(HAnimJoint1304);
{ METHOD .FdChildren.Add }
HAnimJoint1116.FdChildren.Add(HAnimJoint1257);
{ METHOD .FdChildren.Add }
HAnimJoint1104.FdChildren.Add(HAnimJoint1116);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimJoint1104);
{ METHOD .FdChildren.Add }
HAnimJoint1068.FdChildren.Add(HAnimJoint1083);
{ METHOD .FdChildren.Add }
HAnimJoint1059.FdChildren.Add(HAnimJoint1068);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimJoint1059);
HAnimJoint1335 := THAnimJointNode.Create;
end;

procedure InitJohnJoint20Part99;
begin
;
HAnimJoint1335.Center := Vector3(-0.0694,1.46,-0.033);
HAnimSegment1336 := THAnimSegmentNode.Create;;
Transform1337 := TTransformNode.Create;;
{ Empty Transform }
Transform1338 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1338.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1337.FdChildren.Add(Transform1338);
{ METHOD .FdChildren.Add }
HAnimSegment1336.FdChildren.Add(Transform1337);
Shape1340 := TShapeNode.Create;;
LineSet1341 := TLineSetNode.Create;;
LineSet1341.SetVertexCount([2]);
Coordinate1342 := TCoordinateNode.Create;;
Coordinate1342.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1341.Coord := Coordinate1342;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1341.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1340.Geometry := LineSet1341;
{ METHOD .FdChildren.Add }
HAnimSegment1336.FdChildren.Add(Shape1340);
{ METHOD .FdChildren.Add }
HAnimJoint1335.FdChildren.Add(HAnimSegment1336);
HAnimJoint1344 := THAnimJointNode.Create;;
HAnimJoint1344.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimSegment1345 := THAnimSegmentNode.Create;;
Transform1346 := TTransformNode.Create;;
{ Empty Transform }
Transform1347 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1347.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1346.FdChildren.Add(Transform1347);
{ METHOD .FdChildren.Add }
HAnimSegment1345.FdChildren.Add(Transform1346);
Shape1349 := TShapeNode.Create;;
LineSet1350 := TLineSetNode.Create;;
end;

procedure InitJohnJoint20Part100;
begin

LineSet1350.SetVertexCount([2]);
Coordinate1351 := TCoordinateNode.Create;;
Coordinate1351.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1350.Coord := Coordinate1351;
{ from r_acromioclavicular to r_shoulder vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1350.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1349.Geometry := LineSet1350;
{ METHOD .FdChildren.Add }
HAnimSegment1345.FdChildren.Add(Shape1349);
HAnimSite1353 := THAnimSiteNode.Create;;
HAnimSite1353.Translation := Vector3(0,1,0);
TouchSensor1354 := TTouchSensorNode.Create;;
TouchSensor1354.Description := 'HAnimSite r_bideltoid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1353.FdChildren.Add(TouchSensor1354);
{ METHOD .FdChildren.Add }
HAnimSite1353.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1345.FdChildren.Add(HAnimSite1353);
HAnimSite1356 := THAnimSiteNode.Create;;
HAnimSite1356.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1357 := TTouchSensorNode.Create;;
TouchSensor1357.Description := 'HAnimSite r_humeral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1356.FdChildren.Add(TouchSensor1357);
{ METHOD .FdChildren.Add }
HAnimSite1356.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1345.FdChildren.Add(HAnimSite1356);
{ METHOD .FdChildren.Add }
HAnimJoint1344.FdChildren.Add(HAnimSegment1345);
HAnimJoint1359 := THAnimJointNode.Create;;
HAnimJoint1359.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment1360 := THAnimSegmentNode.Create;;
Transform1361 := TTransformNode.Create;;
{ Empty Transform }
Transform1362 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1362.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1361.FdChildren.Add(Transform1362);
{ METHOD .FdChildren.Add }
HAnimSegment1360.FdChildren.Add(Transform1361);
Shape1364 := TShapeNode.Create;
end;

procedure InitJohnJoint20Part101;
begin
;
LineSet1365 := TLineSetNode.Create;;
LineSet1365.SetVertexCount([2]);
Coordinate1366 := TCoordinateNode.Create;;
Coordinate1366.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1365.Coord := Coordinate1366;
{ from r_shoulder to r_elbow vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1365.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1364.Geometry := LineSet1365;
{ METHOD .FdChildren.Add }
HAnimSegment1360.FdChildren.Add(Shape1364);
HAnimSite1368 := THAnimSiteNode.Create;;
HAnimSite1368.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1369 := TTouchSensorNode.Create;;
TouchSensor1369.Description := 'HAnimSite r_humeral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1368.FdChildren.Add(TouchSensor1369);
{ METHOD .FdChildren.Add }
HAnimSite1368.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1360.FdChildren.Add(HAnimSite1368);
HAnimSite1371 := THAnimSiteNode.Create;;
HAnimSite1371.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1372 := TTouchSensorNode.Create;;
TouchSensor1372.Description := 'HAnimSite r_olecranon_pt';
{ METHOD .FdChildren.Add }
HAnimSite1371.FdChildren.Add(TouchSensor1372);
{ METHOD .FdChildren.Add }
HAnimSite1371.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1360.FdChildren.Add(HAnimSite1371);
HAnimSite1374 := THAnimSiteNode.Create;;
HAnimSite1374.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1375 := TTouchSensorNode.Create;;
TouchSensor1375.Description := 'HAnimSite r_radial_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1374.FdChildren.Add(TouchSensor1375);
{ METHOD .FdChildren.Add }
HAnimSite1374.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1360.FdChildren.Add(HAnimSite1374);
HAnimSite1377 := THAnimSiteNode.Create;;
end;

procedure InitJohnJoint20Part102;
begin

HAnimSite1377.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1378 := TTouchSensorNode.Create;;
TouchSensor1378.Description := 'HAnimSite r_radiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1377.FdChildren.Add(TouchSensor1378);
{ METHOD .FdChildren.Add }
HAnimSite1377.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1360.FdChildren.Add(HAnimSite1377);
{ METHOD .FdChildren.Add }
HAnimJoint1359.FdChildren.Add(HAnimSegment1360);
HAnimJoint1380 := THAnimJointNode.Create;;
HAnimJoint1380.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment1381 := THAnimSegmentNode.Create;;
Transform1382 := TTransformNode.Create;;
{ Empty Transform }
Transform1383 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1383.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1382.FdChildren.Add(Transform1383);
{ METHOD .FdChildren.Add }
HAnimSegment1381.FdChildren.Add(Transform1382);
Shape1385 := TShapeNode.Create;;
LineSet1386 := TLineSetNode.Create;;
LineSet1386.SetVertexCount([2]);
Coordinate1387 := TCoordinateNode.Create;;
Coordinate1387.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1386.Coord := Coordinate1387;
{ from r_elbow to r_radiocarpal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1386.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1385.Geometry := LineSet1386;
{ METHOD .FdChildren.Add }
HAnimSegment1381.FdChildren.Add(Shape1385);
HAnimSite1389 := THAnimSiteNode.Create;;
HAnimSite1389.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1390 := TTouchSensorNode.Create;;
TouchSensor1390.Description := 'HAnimSite r_ulnar_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1389.FdChildren.Add(TouchSensor1390);
{ METHOD .FdChildren.Add }
HAnimSite1389.FdChildren.Add(Shape35);
end;

procedure InitJohnJoint20Part103;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1381.FdChildren.Add(HAnimSite1389);
{ METHOD .FdChildren.Add }
HAnimJoint1380.FdChildren.Add(HAnimSegment1381);
HAnimJoint1392 := THAnimJointNode.Create;;
HAnimJoint1392.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment1393 := THAnimSegmentNode.Create;;
Transform1394 := TTransformNode.Create;;
Transform1394.Scale := Vector3(0.2,0.2,0.2);
Transform1394.Translation := Vector3(-0.2,0.85,-0.05);
Transform1394.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1395 := TTransformNode.Create;;
Transform1395.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
{ METHOD .FdChildren.Add }
Transform1395.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1394.FdChildren.Add(Transform1395);
{ METHOD .FdChildren.Add }
HAnimSegment1393.FdChildren.Add(Transform1394);
Shape1397 := TShapeNode.Create;;
LineSet1398 := TLineSetNode.Create;;
LineSet1398.SetVertexCount([2]);
Coordinate1399 := TCoordinateNode.Create;;
Coordinate1399.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1398.Coord := Coordinate1399;
{ from r_radiocarpal to r_midcarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1398.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1397.Geometry := LineSet1398;
{ METHOD .FdChildren.Add }
HAnimSegment1393.FdChildren.Add(Shape1397);
Shape1401 := TShapeNode.Create;;
LineSet1402 := TLineSetNode.Create;;
LineSet1402.SetVertexCount([2]);
Coordinate1403 := TCoordinateNode.Create;;
Coordinate1403.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1402.Coord := Coordinate1403;
{ from r_radiocarpal to r_midcarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1402.Color := ColorRGBA32;
end;

procedure InitJohnJoint20Part104;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1401.Geometry := LineSet1402;
{ METHOD .FdChildren.Add }
HAnimSegment1393.FdChildren.Add(Shape1401);
Shape1405 := TShapeNode.Create;;
LineSet1406 := TLineSetNode.Create;;
LineSet1406.SetVertexCount([2]);
Coordinate1407 := TCoordinateNode.Create;;
Coordinate1407.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1406.Coord := Coordinate1407;
{ from r_radiocarpal to r_midcarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1406.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1405.Geometry := LineSet1406;
{ METHOD .FdChildren.Add }
HAnimSegment1393.FdChildren.Add(Shape1405);
Shape1409 := TShapeNode.Create;;
LineSet1410 := TLineSetNode.Create;;
LineSet1410.SetVertexCount([2]);
Coordinate1411 := TCoordinateNode.Create;;
Coordinate1411.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1410.Coord := Coordinate1411;
{ from r_radiocarpal to r_midcarpal_4_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1410.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1409.Geometry := LineSet1410;
{ METHOD .FdChildren.Add }
HAnimSegment1393.FdChildren.Add(Shape1409);
{ METHOD .FdChildren.Add }
HAnimJoint1392.FdChildren.Add(HAnimSegment1393);
HAnimJoint1413 := THAnimJointNode.Create;;
HAnimJoint1413.Center := Vector3(0,1,0);
HAnimSegment1414 := THAnimSegmentNode.Create;;
Transform1415 := TTransformNode.Create;;
{ Empty Transform }
Transform1416 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1416.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1415.FdChildren.Add(Transform1416);
{ METHOD .FdChildren.Add }
HAnimSegment1414.FdChildren.Add(Transform1415);
Shape1418 := TShapeNode.Create;
end;

procedure InitJohnJoint20Part105;
begin
;
LineSet1419 := TLineSetNode.Create;;
LineSet1419.SetVertexCount([2]);
Coordinate1420 := TCoordinateNode.Create;;
Coordinate1420.SetPoint([Vector3(0,1,0),Vector3(-0.1899,0.8502,-0.0473)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1419.Coord := Coordinate1420;
{ from r_midcarpal_1 to r_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1419.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1418.Geometry := LineSet1419;
{ METHOD .FdChildren.Add }
HAnimSegment1414.FdChildren.Add(Shape1418);
{ METHOD .FdChildren.Add }
HAnimJoint1413.FdChildren.Add(HAnimSegment1414);
HAnimJoint1422 := THAnimJointNode.Create;;
HAnimJoint1422.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimSegment1423 := THAnimSegmentNode.Create;;
Transform1424 := TTransformNode.Create;;
{ Empty Transform }
Transform1425 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1425.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1424.FdChildren.Add(Transform1425);
{ METHOD .FdChildren.Add }
HAnimSegment1423.FdChildren.Add(Transform1424);
Shape1427 := TShapeNode.Create;;
LineSet1428 := TLineSetNode.Create;;
LineSet1428.SetVertexCount([2]);
Coordinate1429 := TCoordinateNode.Create;;
Coordinate1429.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1428.Coord := Coordinate1429;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1428.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1427.Geometry := LineSet1428;
{ METHOD .FdChildren.Add }
HAnimSegment1423.FdChildren.Add(Shape1427);
{ METHOD .FdChildren.Add }
HAnimJoint1422.FdChildren.Add(HAnimSegment1423);
HAnimJoint1431 := THAnimJointNode.Create;;
HAnimJoint1431.Center := Vector3(-0.1874,0.8256,0.0306);
end;

procedure InitJohnJoint20Part106;
begin

HAnimSegment1432 := THAnimSegmentNode.Create;;
Transform1433 := TTransformNode.Create;;
{ Empty Transform }
Transform1434 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1434.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1433.FdChildren.Add(Transform1434);
{ METHOD .FdChildren.Add }
HAnimSegment1432.FdChildren.Add(Transform1433);
Shape1436 := TShapeNode.Create;;
LineSet1437 := TLineSetNode.Create;;
LineSet1437.SetVertexCount([2]);
Coordinate1438 := TCoordinateNode.Create;;
Coordinate1438.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1437.Coord := Coordinate1438;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1437.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1436.Geometry := LineSet1437;
{ METHOD .FdChildren.Add }
HAnimSegment1432.FdChildren.Add(Shape1436);
HAnimSite1440 := THAnimSiteNode.Create;;
HAnimSite1440.Translation := Vector3(-0.35,0.4,0);
TouchSensor1441 := TTouchSensorNode.Create;;
TouchSensor1441.Description := 'HAnimSite r_carpal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite1440.FdChildren.Add(TouchSensor1441);
{ METHOD .FdChildren.Add }
HAnimSite1440.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1432.FdChildren.Add(HAnimSite1440);
{ METHOD .FdChildren.Add }
HAnimJoint1431.FdChildren.Add(HAnimSegment1432);
HAnimJoint1443 := THAnimJointNode.Create;;
HAnimJoint1443.Center := Vector3(-0.1864,0.819,0.0506);
{ METHOD .FdChildren.Add }
HAnimJoint1431.FdChildren.Add(HAnimJoint1443);
{ METHOD .FdChildren.Add }
HAnimJoint1422.FdChildren.Add(HAnimJoint1431);
{ METHOD .FdChildren.Add }
HAnimJoint1413.FdChildren.Add(HAnimJoint1422);
{ METHOD .FdChildren.Add }
HAnimJoint1392.FdChildren.Add(HAnimJoint1413);
HAnimJoint1444 := THAnimJointNode.Create;;
end;

procedure InitJohnJoint20Part107;
begin

HAnimJoint1444.Center := Vector3(0,1,0);
HAnimSegment1445 := THAnimSegmentNode.Create;;
Transform1446 := TTransformNode.Create;;
{ Empty Transform }
Transform1447 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1447.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1446.FdChildren.Add(Transform1447);
{ METHOD .FdChildren.Add }
HAnimSegment1445.FdChildren.Add(Transform1446);
Shape1449 := TShapeNode.Create;;
LineSet1450 := TLineSetNode.Create;;
LineSet1450.SetVertexCount([2]);
Coordinate1451 := TCoordinateNode.Create;;
Coordinate1451.SetPoint([Vector3(0,1,0),Vector3(-0.1961,0.8055,-0.0218)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1450.Coord := Coordinate1451;
{ from r_midcarpal_2 to r_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1450.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1449.Geometry := LineSet1450;
{ METHOD .FdChildren.Add }
HAnimSegment1445.FdChildren.Add(Shape1449);
HAnimSite1453 := THAnimSiteNode.Create;;
HAnimSite1453.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1454 := TTouchSensorNode.Create;;
TouchSensor1454.Description := 'HAnimSite r_metacarpal_phalanx_2_pt';
{ METHOD .FdChildren.Add }
HAnimSite1453.FdChildren.Add(TouchSensor1454);
{ METHOD .FdChildren.Add }
HAnimSite1453.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1445.FdChildren.Add(HAnimSite1453);
{ METHOD .FdChildren.Add }
HAnimJoint1444.FdChildren.Add(HAnimSegment1445);
HAnimJoint1456 := THAnimJointNode.Create;;
HAnimJoint1456.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimSegment1457 := THAnimSegmentNode.Create;;
Transform1458 := TTransformNode.Create;;
{ Empty Transform }
Transform1459 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part108;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1459.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1458.FdChildren.Add(Transform1459);
{ METHOD .FdChildren.Add }
HAnimSegment1457.FdChildren.Add(Transform1458);
Shape1461 := TShapeNode.Create;;
LineSet1462 := TLineSetNode.Create;;
LineSet1462.SetVertexCount([2]);
Coordinate1463 := TCoordinateNode.Create;;
Coordinate1463.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1462.Coord := Coordinate1463;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1462.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1461.Geometry := LineSet1462;
{ METHOD .FdChildren.Add }
HAnimSegment1457.FdChildren.Add(Shape1461);
{ METHOD .FdChildren.Add }
HAnimJoint1456.FdChildren.Add(HAnimSegment1457);
HAnimJoint1465 := THAnimJointNode.Create;;
HAnimJoint1465.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimSegment1466 := THAnimSegmentNode.Create;;
Transform1467 := TTransformNode.Create;;
{ Empty Transform }
Transform1468 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1468.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1467.FdChildren.Add(Transform1468);
{ METHOD .FdChildren.Add }
HAnimSegment1466.FdChildren.Add(Transform1467);
Shape1470 := TShapeNode.Create;;
LineSet1471 := TLineSetNode.Create;;
LineSet1471.SetVertexCount([2]);
Coordinate1472 := TCoordinateNode.Create;;
Coordinate1472.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1471.Coord := Coordinate1472;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1471.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1470.Geometry := LineSet1471;
end;

procedure InitJohnJoint20Part109;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1466.FdChildren.Add(Shape1470);
{ METHOD .FdChildren.Add }
HAnimJoint1465.FdChildren.Add(HAnimSegment1466);
HAnimJoint1474 := THAnimJointNode.Create;;
HAnimJoint1474.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimSegment1475 := THAnimSegmentNode.Create;;
Transform1476 := TTransformNode.Create;;
{ Empty Transform }
Transform1477 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1477.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1476.FdChildren.Add(Transform1477);
{ METHOD .FdChildren.Add }
HAnimSegment1475.FdChildren.Add(Transform1476);
Shape1479 := TShapeNode.Create;;
LineSet1480 := TLineSetNode.Create;;
LineSet1480.SetVertexCount([2]);
Coordinate1481 := TCoordinateNode.Create;;
Coordinate1481.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1480.Coord := Coordinate1481;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1480.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1479.Geometry := LineSet1480;
{ METHOD .FdChildren.Add }
HAnimSegment1475.FdChildren.Add(Shape1479);
HAnimSite1483 := THAnimSiteNode.Create;;
HAnimSite1483.Translation := Vector3(-0.24,0.87,0);
TouchSensor1484 := TTouchSensorNode.Create;;
TouchSensor1484.Description := 'HAnimSite r_carpal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite1483.FdChildren.Add(TouchSensor1484);
{ METHOD .FdChildren.Add }
HAnimSite1483.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1475.FdChildren.Add(HAnimSite1483);
HAnimSite1486 := THAnimSiteNode.Create;;
HAnimSite1486.Translation := Vector3(-0.1941,0.6772,-0.0423);
TouchSensor1487 := TTouchSensorNode.Create;;
end;

procedure InitJohnJoint20Part110;
begin

TouchSensor1487.Description := 'HAnimSite r_dactylion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1486.FdChildren.Add(TouchSensor1487);
{ METHOD .FdChildren.Add }
HAnimSite1486.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1475.FdChildren.Add(HAnimSite1486);
{ METHOD .FdChildren.Add }
HAnimJoint1474.FdChildren.Add(HAnimSegment1475);
HAnimJoint1489 := THAnimJointNode.Create;;
HAnimJoint1489.Center := Vector3(-0.1945,0.7169,-0.0173);
{ METHOD .FdChildren.Add }
HAnimJoint1474.FdChildren.Add(HAnimJoint1489);
{ METHOD .FdChildren.Add }
HAnimJoint1465.FdChildren.Add(HAnimJoint1474);
{ METHOD .FdChildren.Add }
HAnimJoint1456.FdChildren.Add(HAnimJoint1465);
{ METHOD .FdChildren.Add }
HAnimJoint1444.FdChildren.Add(HAnimJoint1456);
{ METHOD .FdChildren.Add }
HAnimJoint1392.FdChildren.Add(HAnimJoint1444);
HAnimJoint1490 := THAnimJointNode.Create;;
HAnimJoint1490.Center := Vector3(0,1,0);
HAnimSegment1491 := THAnimSegmentNode.Create;;
Transform1492 := TTransformNode.Create;;
{ Empty Transform }
Transform1493 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1493.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1492.FdChildren.Add(Transform1493);
{ METHOD .FdChildren.Add }
HAnimSegment1491.FdChildren.Add(Transform1492);
Shape1495 := TShapeNode.Create;;
LineSet1496 := TLineSetNode.Create;;
LineSet1496.SetVertexCount([2]);
Coordinate1497 := TCoordinateNode.Create;;
Coordinate1497.SetPoint([Vector3(0,1,0),Vector3(-0.1972,0.806,-0.0468)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1496.Coord := Coordinate1497;
{ from r_midcarpal_3 to r_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1496.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1495.Geometry := LineSet1496;
{ METHOD .FdChildren.Add }
HAnimSegment1491.FdChildren.Add(Shape1495);
HAnimSite1499 := THAnimSiteNode.Create;;
HAnimSite1499.Translation := Vector3(0,1,0);
end;

procedure InitJohnJoint20Part111;
begin

TouchSensor1500 := TTouchSensorNode.Create;;
TouchSensor1500.Description := 'HAnimSite r_metacarpal_phalanx_3_pt';
{ METHOD .FdChildren.Add }
HAnimSite1499.FdChildren.Add(TouchSensor1500);
{ METHOD .FdChildren.Add }
HAnimSite1499.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1491.FdChildren.Add(HAnimSite1499);
{ METHOD .FdChildren.Add }
HAnimJoint1490.FdChildren.Add(HAnimSegment1491);
HAnimJoint1502 := THAnimJointNode.Create;;
HAnimJoint1502.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimSegment1503 := THAnimSegmentNode.Create;;
Transform1504 := TTransformNode.Create;;
{ Empty Transform }
Transform1505 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1505.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1504.FdChildren.Add(Transform1505);
{ METHOD .FdChildren.Add }
HAnimSegment1503.FdChildren.Add(Transform1504);
Shape1507 := TShapeNode.Create;;
LineSet1508 := TLineSetNode.Create;;
LineSet1508.SetVertexCount([2]);
Coordinate1509 := TCoordinateNode.Create;;
Coordinate1509.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1508.Coord := Coordinate1509;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1508.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1507.Geometry := LineSet1508;
{ METHOD .FdChildren.Add }
HAnimSegment1503.FdChildren.Add(Shape1507);
{ METHOD .FdChildren.Add }
HAnimJoint1502.FdChildren.Add(HAnimSegment1503);
HAnimJoint1511 := THAnimJointNode.Create;;
HAnimJoint1511.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimSegment1512 := THAnimSegmentNode.Create;;
Transform1513 := TTransformNode.Create;;
{ Empty Transform }
Transform1514 := TTransformNode.Create;
end;

procedure InitJohnJoint20Part112;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1514.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1513.FdChildren.Add(Transform1514);
{ METHOD .FdChildren.Add }
HAnimSegment1512.FdChildren.Add(Transform1513);
Shape1516 := TShapeNode.Create;;
LineSet1517 := TLineSetNode.Create;;
LineSet1517.SetVertexCount([2]);
Coordinate1518 := TCoordinateNode.Create;;
Coordinate1518.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1517.Coord := Coordinate1518;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1517.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1516.Geometry := LineSet1517;
{ METHOD .FdChildren.Add }
HAnimSegment1512.FdChildren.Add(Shape1516);
{ METHOD .FdChildren.Add }
HAnimJoint1511.FdChildren.Add(HAnimSegment1512);
HAnimJoint1520 := THAnimJointNode.Create;;
HAnimJoint1520.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimSegment1521 := THAnimSegmentNode.Create;;
Transform1522 := TTransformNode.Create;;
{ Empty Transform }
Transform1523 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1523.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1522.FdChildren.Add(Transform1523);
{ METHOD .FdChildren.Add }
HAnimSegment1521.FdChildren.Add(Transform1522);
Shape1525 := TShapeNode.Create;;
LineSet1526 := TLineSetNode.Create;;
LineSet1526.SetVertexCount([2]);
Coordinate1527 := TCoordinateNode.Create;;
Coordinate1527.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1526.Coord := Coordinate1527;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1526.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1525.Geometry := LineSet1526;
end;

procedure InitJohnJoint20Part113;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1521.FdChildren.Add(Shape1525);
HAnimSite1529 := THAnimSiteNode.Create;;
HAnimSite1529.Translation := Vector3(-0.08,0.96,0);
TouchSensor1530 := TTouchSensorNode.Create;;
TouchSensor1530.Description := 'HAnimSite r_carpal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite1529.FdChildren.Add(TouchSensor1530);
{ METHOD .FdChildren.Add }
HAnimSite1529.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1521.FdChildren.Add(HAnimSite1529);
{ METHOD .FdChildren.Add }
HAnimJoint1520.FdChildren.Add(HAnimSegment1521);
HAnimJoint1532 := THAnimJointNode.Create;;
HAnimJoint1532.Center := Vector3(-0.1939,0.7042,-0.0432);
{ METHOD .FdChildren.Add }
HAnimJoint1520.FdChildren.Add(HAnimJoint1532);
{ METHOD .FdChildren.Add }
HAnimJoint1511.FdChildren.Add(HAnimJoint1520);
{ METHOD .FdChildren.Add }
HAnimJoint1502.FdChildren.Add(HAnimJoint1511);
{ METHOD .FdChildren.Add }
HAnimJoint1490.FdChildren.Add(HAnimJoint1502);
{ METHOD .FdChildren.Add }
HAnimJoint1392.FdChildren.Add(HAnimJoint1490);
HAnimJoint1533 := THAnimJointNode.Create;;
HAnimJoint1533.Center := Vector3(0,1,0);
HAnimSegment1534 := THAnimSegmentNode.Create;;
Transform1535 := TTransformNode.Create;;
{ Empty Transform }
Transform1536 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1536.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1535.FdChildren.Add(Transform1536);
{ METHOD .FdChildren.Add }
HAnimSegment1534.FdChildren.Add(Transform1535);
Shape1538 := TShapeNode.Create;;
LineSet1539 := TLineSetNode.Create;;
LineSet1539.SetVertexCount([2]);
Coordinate1540 := TCoordinateNode.Create;;
Coordinate1540.SetPoint([Vector3(0,1,0),Vector3(-0.1951,0.8049,-0.0732)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1539.Coord := Coordinate1540;
end;

procedure InitJohnJoint20Part114;
begin

{ from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1539.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1538.Geometry := LineSet1539;
{ METHOD .FdChildren.Add }
HAnimSegment1534.FdChildren.Add(Shape1538);
Shape1542 := TShapeNode.Create;;
LineSet1543 := TLineSetNode.Create;;
LineSet1543.SetVertexCount([2]);
Coordinate1544 := TCoordinateNode.Create;;
Coordinate1544.SetPoint([Vector3(0,1,0),Vector3(-0.1926,0.8096,-0.0975)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1543.Coord := Coordinate1544;
{ from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1543.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1542.Geometry := LineSet1543;
{ METHOD .FdChildren.Add }
HAnimSegment1534.FdChildren.Add(Shape1542);
HAnimSite1546 := THAnimSiteNode.Create;;
HAnimSite1546.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1547 := TTouchSensorNode.Create;;
TouchSensor1547.Description := 'HAnimSite r_metacarpal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite1546.FdChildren.Add(TouchSensor1547);
{ METHOD .FdChildren.Add }
HAnimSite1546.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1534.FdChildren.Add(HAnimSite1546);
{ METHOD .FdChildren.Add }
HAnimJoint1533.FdChildren.Add(HAnimSegment1534);
HAnimJoint1549 := THAnimJointNode.Create;;
HAnimJoint1549.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimSegment1550 := THAnimSegmentNode.Create;;
Transform1551 := TTransformNode.Create;;
{ Empty Transform }
Transform1552 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1552.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1551.FdChildren.Add(Transform1552);
{ METHOD .FdChildren.Add }
HAnimSegment1550.FdChildren.Add(Transform1551);
Shape1554 := TShapeNode.Create;;
LineSet1555 := TLineSetNode.Create;
end;

procedure InitJohnJoint20Part115;
begin
;
LineSet1555.SetVertexCount([2]);
Coordinate1556 := TCoordinateNode.Create;;
Coordinate1556.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1555.Coord := Coordinate1556;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1555.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1554.Geometry := LineSet1555;
{ METHOD .FdChildren.Add }
HAnimSegment1550.FdChildren.Add(Shape1554);
{ METHOD .FdChildren.Add }
HAnimJoint1549.FdChildren.Add(HAnimSegment1550);
HAnimJoint1558 := THAnimJointNode.Create;;
HAnimJoint1558.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimSegment1559 := THAnimSegmentNode.Create;;
Transform1560 := TTransformNode.Create;;
{ Empty Transform }
Transform1561 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1561.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1560.FdChildren.Add(Transform1561);
{ METHOD .FdChildren.Add }
HAnimSegment1559.FdChildren.Add(Transform1560);
Shape1563 := TShapeNode.Create;;
LineSet1564 := TLineSetNode.Create;;
LineSet1564.SetVertexCount([2]);
Coordinate1565 := TCoordinateNode.Create;;
Coordinate1565.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1564.Coord := Coordinate1565;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1564.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1563.Geometry := LineSet1564;
{ METHOD .FdChildren.Add }
HAnimSegment1559.FdChildren.Add(Shape1563);
{ METHOD .FdChildren.Add }
HAnimJoint1558.FdChildren.Add(HAnimSegment1559);
HAnimJoint1567 := THAnimJointNode.Create;;
HAnimJoint1567.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimSegment1568 := THAnimSegmentNode.Create;;
end;

procedure InitJohnJoint20Part116;
begin

Transform1569 := TTransformNode.Create;;
{ Empty Transform }
Transform1570 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1570.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1569.FdChildren.Add(Transform1570);
{ METHOD .FdChildren.Add }
HAnimSegment1568.FdChildren.Add(Transform1569);
Shape1572 := TShapeNode.Create;;
LineSet1573 := TLineSetNode.Create;;
LineSet1573.SetVertexCount([2]);
Coordinate1574 := TCoordinateNode.Create;;
Coordinate1574.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1573.Coord := Coordinate1574;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1573.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1572.Geometry := LineSet1573;
{ METHOD .FdChildren.Add }
HAnimSegment1568.FdChildren.Add(Shape1572);
HAnimSite1576 := THAnimSiteNode.Create;;
HAnimSite1576.Translation := Vector3(0.1,0.93,0);
TouchSensor1577 := TTouchSensorNode.Create;;
TouchSensor1577.Description := 'HAnimSite r_carpal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite1576.FdChildren.Add(TouchSensor1577);
{ METHOD .FdChildren.Add }
HAnimSite1576.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1568.FdChildren.Add(HAnimSite1576);
{ METHOD .FdChildren.Add }
HAnimJoint1567.FdChildren.Add(HAnimSegment1568);
HAnimJoint1579 := THAnimJointNode.Create;;
HAnimJoint1579.Center := Vector3(-0.1908,0.7077,-0.0706);
{ METHOD .FdChildren.Add }
HAnimJoint1567.FdChildren.Add(HAnimJoint1579);
{ METHOD .FdChildren.Add }
HAnimJoint1558.FdChildren.Add(HAnimJoint1567);
{ METHOD .FdChildren.Add }
HAnimJoint1549.FdChildren.Add(HAnimJoint1558);
{ METHOD .FdChildren.Add }
HAnimJoint1533.FdChildren.Add(HAnimJoint1549);
HAnimJoint1580 := THAnimJointNode.Create;;
HAnimJoint1580.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimSegment1581 := THAnimSegmentNode.Create;
end;

procedure InitJohnJoint20Part117;
begin
;
Transform1582 := TTransformNode.Create;;
{ Empty Transform }
Transform1583 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1583.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1582.FdChildren.Add(Transform1583);
{ METHOD .FdChildren.Add }
HAnimSegment1581.FdChildren.Add(Transform1582);
Shape1585 := TShapeNode.Create;;
LineSet1586 := TLineSetNode.Create;;
LineSet1586.SetVertexCount([2]);
Coordinate1587 := TCoordinateNode.Create;;
Coordinate1587.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1586.Coord := Coordinate1587;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1586.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1585.Geometry := LineSet1586;
{ METHOD .FdChildren.Add }
HAnimSegment1581.FdChildren.Add(Shape1585);
{ METHOD .FdChildren.Add }
HAnimJoint1580.FdChildren.Add(HAnimSegment1581);
HAnimJoint1589 := THAnimJointNode.Create;;
HAnimJoint1589.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimSegment1590 := THAnimSegmentNode.Create;;
Transform1591 := TTransformNode.Create;;
{ Empty Transform }
Transform1592 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1592.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1591.FdChildren.Add(Transform1592);
{ METHOD .FdChildren.Add }
HAnimSegment1590.FdChildren.Add(Transform1591);
Shape1594 := TShapeNode.Create;;
LineSet1595 := TLineSetNode.Create;;
LineSet1595.SetVertexCount([2]);
Coordinate1596 := TCoordinateNode.Create;;
end;

procedure InitJohnJoint20Part118;
begin

Coordinate1596.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1595.Coord := Coordinate1596;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1595.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1594.Geometry := LineSet1595;
{ METHOD .FdChildren.Add }
HAnimSegment1590.FdChildren.Add(Shape1594);
{ METHOD .FdChildren.Add }
HAnimJoint1589.FdChildren.Add(HAnimSegment1590);
HAnimJoint1598 := THAnimJointNode.Create;;
HAnimJoint1598.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimSegment1599 := THAnimSegmentNode.Create;;
Transform1600 := TTransformNode.Create;;
{ Empty Transform }
Transform1601 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1601.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1600.FdChildren.Add(Transform1601);
{ METHOD .FdChildren.Add }
HAnimSegment1599.FdChildren.Add(Transform1600);
Shape1603 := TShapeNode.Create;;
LineSet1604 := TLineSetNode.Create;;
LineSet1604.SetVertexCount([2]);
Coordinate1605 := TCoordinateNode.Create;;
Coordinate1605.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1604.Coord := Coordinate1605;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1604.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1603.Geometry := LineSet1604;
{ METHOD .FdChildren.Add }
HAnimSegment1599.FdChildren.Add(Shape1603);
HAnimSite1607 := THAnimSiteNode.Create;;
HAnimSite1607.Translation := Vector3(0.25,0.79,0);
TouchSensor1608 := TTouchSensorNode.Create;;
TouchSensor1608.Description := 'HAnimSite r_carpal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite1607.FdChildren.Add(TouchSensor1608);
{ METHOD .FdChildren.Add }
HAnimSite1607.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1599.FdChildren.Add(HAnimSite1607);
{ METHOD .FdChildren.Add }
HAnimJoint1598.FdChildren.Add(HAnimSegment1599);
end;

procedure InitJohnJoint20Part119;
begin

HAnimJoint1610 := THAnimJointNode.Create;;
HAnimJoint1610.Center := Vector3(-0.1908,0.754,-0.096);
{ METHOD .FdChildren.Add }
HAnimJoint1598.FdChildren.Add(HAnimJoint1610);
{ METHOD .FdChildren.Add }
HAnimJoint1589.FdChildren.Add(HAnimJoint1598);
{ METHOD .FdChildren.Add }
HAnimJoint1580.FdChildren.Add(HAnimJoint1589);
{ METHOD .FdChildren.Add }
HAnimJoint1533.FdChildren.Add(HAnimJoint1580);
{ METHOD .FdChildren.Add }
HAnimJoint1392.FdChildren.Add(HAnimJoint1533);
{ METHOD .FdChildren.Add }
HAnimJoint1380.FdChildren.Add(HAnimJoint1392);
{ METHOD .FdChildren.Add }
HAnimJoint1359.FdChildren.Add(HAnimJoint1380);
{ METHOD .FdChildren.Add }
HAnimJoint1344.FdChildren.Add(HAnimJoint1359);
{ METHOD .FdChildren.Add }
HAnimJoint1335.FdChildren.Add(HAnimJoint1344);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimJoint1335);
{ METHOD .FdChildren.Add }
HAnimJoint839.FdChildren.Add(HAnimJoint854);
{ METHOD .FdChildren.Add }
HAnimJoint830.FdChildren.Add(HAnimJoint839);
{ METHOD .FdChildren.Add }
HAnimJoint821.FdChildren.Add(HAnimJoint830);
{ METHOD .FdChildren.Add }
HAnimJoint812.FdChildren.Add(HAnimJoint821);
{ METHOD .FdChildren.Add }
HAnimJoint800.FdChildren.Add(HAnimJoint812);
{ METHOD .FdChildren.Add }
HAnimJoint779.FdChildren.Add(HAnimJoint800);
{ METHOD .FdChildren.Add }
HAnimJoint770.FdChildren.Add(HAnimJoint779);
{ METHOD .FdChildren.Add }
HAnimJoint761.FdChildren.Add(HAnimJoint770);
{ METHOD .FdChildren.Add }
HAnimJoint746.FdChildren.Add(HAnimJoint761);
{ METHOD .FdChildren.Add }
HAnimJoint734.FdChildren.Add(HAnimJoint746);
{ METHOD .FdChildren.Add }
HAnimJoint725.FdChildren.Add(HAnimJoint734);
{ METHOD .FdChildren.Add }
HAnimJoint716.FdChildren.Add(HAnimJoint725);
{ METHOD .FdChildren.Add }
HAnimJoint707.FdChildren.Add(HAnimJoint716);
{ METHOD .FdChildren.Add }
HAnimJoint689.FdChildren.Add(HAnimJoint707);
{ METHOD .FdChildren.Add }
HAnimJoint680.FdChildren.Add(HAnimJoint689);
{ METHOD .FdChildren.Add }
HAnimJoint671.FdChildren.Add(HAnimJoint680);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint671);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid43.FdSkeleton.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1068);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint320);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1213);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1256);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1303);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1334);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1167);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1198);
end;

procedure InitJohnJoint20Part120;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1244);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1291);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1322);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1146);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1180);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1226);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1273);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1304);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint206);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint240);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint280);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1104);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1053);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1055);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1051);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint143);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint161);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1155);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1189);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1235);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1282);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1313);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint227);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint258);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint298);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint351);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint385);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1137);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1168);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1214);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1257);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1116);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1083);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1059);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint189);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint176);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint279);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint319);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint372);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint406);
end;

procedure InitJohnJoint20Part121;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint239);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint267);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint307);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint360);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint394);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint215);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint249);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint289);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint342);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint373);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint329);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1344);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint584);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1489);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1532);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1579);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1610);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1443);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1474);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1520);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1567);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1598);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1422);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1456);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1502);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1549);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1580);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint470);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint504);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint544);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1380);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1054);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1056);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1052);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint407);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint425);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1431);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1465);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1511);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1558);
end;

procedure InitJohnJoint20Part122;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1589);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint491);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint522);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint562);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint615);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint649);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1413);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1444);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1490);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1533);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1392);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1359);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1335);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint453);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint440);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint543);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint583);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint636);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint670);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint503);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint531);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint571);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint624);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint658);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint479);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint513);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint553);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint606);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint637);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint593);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint106);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1006);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1057);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint964);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint955);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint943);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint934);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint925);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint916);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint907);
end;

procedure InitJohnJoint20Part123;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint716);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint707);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint689);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint680);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint671);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint854);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint746);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint734);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint725);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint839);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint830);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint821);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint812);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint800);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint779);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint770);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint761);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(HAnimHumanoid43);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateJohnJoint20: TX3DRootNode;
begin
InitJohnJoint20Part0;
InitJohnJoint20Part1;
InitJohnJoint20Part2;
InitJohnJoint20Part3;
InitJohnJoint20Part4;
InitJohnJoint20Part5;
InitJohnJoint20Part6;
InitJohnJoint20Part7;
InitJohnJoint20Part8;
InitJohnJoint20Part9;
InitJohnJoint20Part10;
InitJohnJoint20Part11;
InitJohnJoint20Part12;
InitJohnJoint20Part13;
InitJohnJoint20Part14;
InitJohnJoint20Part15;
InitJohnJoint20Part16;
InitJohnJoint20Part17;
InitJohnJoint20Part18;
InitJohnJoint20Part19;
InitJohnJoint20Part20;
InitJohnJoint20Part21;
InitJohnJoint20Part22;
InitJohnJoint20Part23;
InitJohnJoint20Part24;
InitJohnJoint20Part25;
InitJohnJoint20Part26;
InitJohnJoint20Part27;
InitJohnJoint20Part28;
InitJohnJoint20Part29;
InitJohnJoint20Part30;
InitJohnJoint20Part31;
InitJohnJoint20Part32;
InitJohnJoint20Part33;
InitJohnJoint20Part34;
InitJohnJoint20Part35;
InitJohnJoint20Part36;
InitJohnJoint20Part37;
InitJohnJoint20Part38;
InitJohnJoint20Part39;
InitJohnJoint20Part40;
InitJohnJoint20Part41;
InitJohnJoint20Part42;
InitJohnJoint20Part43;
InitJohnJoint20Part44;
InitJohnJoint20Part45;
InitJohnJoint20Part46;
InitJohnJoint20Part47;
InitJohnJoint20Part48;
InitJohnJoint20Part49;
InitJohnJoint20Part50;
InitJohnJoint20Part51;
InitJohnJoint20Part52;
InitJohnJoint20Part53;
InitJohnJoint20Part54;
InitJohnJoint20Part55;
InitJohnJoint20Part56;
InitJohnJoint20Part57;
InitJohnJoint20Part58;
InitJohnJoint20Part59;
InitJohnJoint20Part60;
InitJohnJoint20Part61;
InitJohnJoint20Part62;
InitJohnJoint20Part63;
InitJohnJoint20Part64;
InitJohnJoint20Part65;
InitJohnJoint20Part66;
InitJohnJoint20Part67;
InitJohnJoint20Part68;
InitJohnJoint20Part69;
InitJohnJoint20Part70;
InitJohnJoint20Part71;
InitJohnJoint20Part72;
InitJohnJoint20Part73;
InitJohnJoint20Part74;
InitJohnJoint20Part75;
InitJohnJoint20Part76;
InitJohnJoint20Part77;
InitJohnJoint20Part78;
InitJohnJoint20Part79;
InitJohnJoint20Part80;
InitJohnJoint20Part81;
InitJohnJoint20Part82;
InitJohnJoint20Part83;
InitJohnJoint20Part84;
InitJohnJoint20Part85;
InitJohnJoint20Part86;
InitJohnJoint20Part87;
InitJohnJoint20Part88;
InitJohnJoint20Part89;
InitJohnJoint20Part90;
InitJohnJoint20Part91;
InitJohnJoint20Part92;
InitJohnJoint20Part93;
InitJohnJoint20Part94;
InitJohnJoint20Part95;
InitJohnJoint20Part96;
InitJohnJoint20Part97;
InitJohnJoint20Part98;
InitJohnJoint20Part99;
InitJohnJoint20Part100;
InitJohnJoint20Part101;
InitJohnJoint20Part102;
InitJohnJoint20Part103;
InitJohnJoint20Part104;
InitJohnJoint20Part105;
InitJohnJoint20Part106;
InitJohnJoint20Part107;
InitJohnJoint20Part108;
InitJohnJoint20Part109;
InitJohnJoint20Part110;
InitJohnJoint20Part111;
InitJohnJoint20Part112;
InitJohnJoint20Part113;
InitJohnJoint20Part114;
InitJohnJoint20Part115;
InitJohnJoint20Part116;
InitJohnJoint20Part117;
InitJohnJoint20Part118;
InitJohnJoint20Part119;
InitJohnJoint20Part120;
InitJohnJoint20Part121;
InitJohnJoint20Part122;
InitJohnJoint20Part123;
Result := X3D0;
end;

begin
end.
