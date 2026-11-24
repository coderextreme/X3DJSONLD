unit Humanoid4_1;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHumanoid4_1: TX3DRootNode;

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
Coordinate44: TCoordinateNode;
HAnimJoint45: THAnimJointNode;
HAnimSegment46: THAnimSegmentNode;
Transform47: TTransformNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
Shape50: TShapeNode;
LineSet51: TLineSetNode;
Coordinate52: TCoordinateNode;
ColorRGBA53: TColorRGBANode;
HAnimSite54: THAnimSiteNode;
TouchSensor55: TTouchSensorNode;
Shape56: TShapeNode;
HAnimSite57: THAnimSiteNode;
TouchSensor58: TTouchSensorNode;
Shape59: TShapeNode;
HAnimSite60: THAnimSiteNode;
TouchSensor61: TTouchSensorNode;
Shape62: TShapeNode;
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
Shape84: TShapeNode;
LineSet85: TLineSetNode;
Coordinate86: TCoordinateNode;
ColorRGBA87: TColorRGBANode;
HAnimSite88: THAnimSiteNode;
TouchSensor89: TTouchSensorNode;
Shape90: TShapeNode;
HAnimSite91: THAnimSiteNode;
TouchSensor92: TTouchSensorNode;
Shape93: TShapeNode;
HAnimSite94: THAnimSiteNode;
TouchSensor95: TTouchSensorNode;
Shape96: TShapeNode;
HAnimJoint97: THAnimJointNode;
HAnimSegment98: THAnimSegmentNode;
Transform99: TTransformNode;
Transform100: TTransformNode;
Shape101: TShapeNode;
Shape102: TShapeNode;
LineSet103: TLineSetNode;
Coordinate104: TCoordinateNode;
ColorRGBA105: TColorRGBANode;
HAnimSite106: THAnimSiteNode;
TouchSensor107: TTouchSensorNode;
Shape108: TShapeNode;
HAnimSite109: THAnimSiteNode;
TouchSensor110: TTouchSensorNode;
Shape111: TShapeNode;
HAnimSite112: THAnimSiteNode;
TouchSensor113: TTouchSensorNode;
Shape114: TShapeNode;
HAnimSite115: THAnimSiteNode;
TouchSensor116: TTouchSensorNode;
Shape117: TShapeNode;
Shape118: TShapeNode;
LineSet119: TLineSetNode;
Coordinate120: TCoordinateNode;
ColorRGBA121: TColorRGBANode;
HAnimSite122: THAnimSiteNode;
TouchSensor123: TTouchSensorNode;
Shape124: TShapeNode;
HAnimSite125: THAnimSiteNode;
TouchSensor126: TTouchSensorNode;
Shape127: TShapeNode;
HAnimSite128: THAnimSiteNode;
TouchSensor129: TTouchSensorNode;
Shape130: TShapeNode;
HAnimSite131: THAnimSiteNode;
TouchSensor132: TTouchSensorNode;
Shape133: TShapeNode;
HAnimJoint134: THAnimJointNode;
HAnimSegment135: THAnimSegmentNode;
Transform136: TTransformNode;
Transform137: TTransformNode;
Shape138: TShapeNode;
Shape139: TShapeNode;
LineSet140: TLineSetNode;
Coordinate141: TCoordinateNode;
ColorRGBA142: TColorRGBANode;
HAnimSite143: THAnimSiteNode;
TouchSensor144: TTouchSensorNode;
Shape145: TShapeNode;
HAnimSite146: THAnimSiteNode;
TouchSensor147: TTouchSensorNode;
Shape148: TShapeNode;
HAnimSite149: THAnimSiteNode;
TouchSensor150: TTouchSensorNode;
Shape151: TShapeNode;
HAnimJoint152: THAnimJointNode;
HAnimSegment153: THAnimSegmentNode;
Transform154: TTransformNode;
Transform155: TTransformNode;
Shape156: TShapeNode;
Shape157: TShapeNode;
LineSet158: TLineSetNode;
Coordinate159: TCoordinateNode;
ColorRGBA160: TColorRGBANode;
HAnimSite161: THAnimSiteNode;
TouchSensor162: TTouchSensorNode;
Shape163: TShapeNode;
HAnimSite164: THAnimSiteNode;
TouchSensor165: TTouchSensorNode;
Shape166: TShapeNode;
HAnimJoint167: THAnimJointNode;
HAnimSegment168: THAnimSegmentNode;
Transform169: TTransformNode;
Transform170: TTransformNode;
Shape171: TShapeNode;
Shape172: TShapeNode;
LineSet173: TLineSetNode;
Coordinate174: TCoordinateNode;
ColorRGBA175: TColorRGBANode;
Shape176: TShapeNode;
LineSet177: TLineSetNode;
Coordinate178: TCoordinateNode;
ColorRGBA179: TColorRGBANode;
HAnimJoint180: THAnimJointNode;
HAnimSegment181: THAnimSegmentNode;
Transform182: TTransformNode;
Transform183: TTransformNode;
Shape184: TShapeNode;
Shape185: TShapeNode;
LineSet186: TLineSetNode;
Coordinate187: TCoordinateNode;
ColorRGBA188: TColorRGBANode;
Shape189: TShapeNode;
LineSet190: TLineSetNode;
Coordinate191: TCoordinateNode;
ColorRGBA192: TColorRGBANode;
Shape193: TShapeNode;
LineSet194: TLineSetNode;
Coordinate195: TCoordinateNode;
ColorRGBA196: TColorRGBANode;
HAnimJoint197: THAnimJointNode;
HAnimSegment198: THAnimSegmentNode;
Transform199: TTransformNode;
Transform200: TTransformNode;
Shape201: TShapeNode;
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
HAnimSite215: THAnimSiteNode;
TouchSensor216: TTouchSensorNode;
Shape217: TShapeNode;
HAnimJoint218: THAnimJointNode;
HAnimSegment219: THAnimSegmentNode;
Transform220: TTransformNode;
Transform221: TTransformNode;
Shape222: TShapeNode;
Shape223: TShapeNode;
LineSet224: TLineSetNode;
Coordinate225: TCoordinateNode;
ColorRGBA226: TColorRGBANode;
HAnimSite227: THAnimSiteNode;
TouchSensor228: TTouchSensorNode;
Shape229: TShapeNode;
HAnimJoint230: THAnimJointNode;
HAnimJoint231: THAnimJointNode;
HAnimSegment232: THAnimSegmentNode;
Transform233: TTransformNode;
Transform234: TTransformNode;
Shape235: TShapeNode;
Shape236: TShapeNode;
LineSet237: TLineSetNode;
Coordinate238: TCoordinateNode;
ColorRGBA239: TColorRGBANode;
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
HAnimSite267: THAnimSiteNode;
TouchSensor268: TTouchSensorNode;
Shape269: TShapeNode;
HAnimJoint270: THAnimJointNode;
HAnimJoint271: THAnimJointNode;
HAnimSegment272: THAnimSegmentNode;
Transform273: TTransformNode;
Transform274: TTransformNode;
Shape275: TShapeNode;
Shape276: TShapeNode;
LineSet277: TLineSetNode;
Coordinate278: TCoordinateNode;
ColorRGBA279: TColorRGBANode;
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
HAnimSite307: THAnimSiteNode;
TouchSensor308: TTouchSensorNode;
Shape309: TShapeNode;
HAnimJoint310: THAnimJointNode;
HAnimJoint311: THAnimJointNode;
HAnimSegment312: THAnimSegmentNode;
Transform313: TTransformNode;
Transform314: TTransformNode;
Shape315: TShapeNode;
Shape316: TShapeNode;
LineSet317: TLineSetNode;
Coordinate318: TCoordinateNode;
ColorRGBA319: TColorRGBANode;
HAnimJoint320: THAnimJointNode;
HAnimSegment321: THAnimSegmentNode;
Transform322: TTransformNode;
Transform323: TTransformNode;
Shape324: TShapeNode;
Shape325: TShapeNode;
LineSet326: TLineSetNode;
Coordinate327: TCoordinateNode;
ColorRGBA328: TColorRGBANode;
Shape329: TShapeNode;
LineSet330: TLineSetNode;
Coordinate331: TCoordinateNode;
ColorRGBA332: TColorRGBANode;
HAnimJoint333: THAnimJointNode;
HAnimSegment334: THAnimSegmentNode;
Transform335: TTransformNode;
Transform336: TTransformNode;
Shape337: TShapeNode;
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
HAnimSite360: THAnimSiteNode;
TouchSensor361: TTouchSensorNode;
Shape362: TShapeNode;
HAnimJoint363: THAnimJointNode;
HAnimJoint364: THAnimJointNode;
HAnimSegment365: THAnimSegmentNode;
Transform366: TTransformNode;
Transform367: TTransformNode;
Shape368: TShapeNode;
Shape369: TShapeNode;
LineSet370: TLineSetNode;
Coordinate371: TCoordinateNode;
ColorRGBA372: TColorRGBANode;
HAnimSite373: THAnimSiteNode;
TouchSensor374: TTouchSensorNode;
Shape375: TShapeNode;
HAnimJoint376: THAnimJointNode;
HAnimSegment377: THAnimSegmentNode;
Transform378: TTransformNode;
Transform379: TTransformNode;
Shape380: TShapeNode;
Shape381: TShapeNode;
LineSet382: TLineSetNode;
Coordinate383: TCoordinateNode;
ColorRGBA384: TColorRGBANode;
HAnimJoint385: THAnimJointNode;
HAnimSegment386: THAnimSegmentNode;
Transform387: TTransformNode;
Transform388: TTransformNode;
Shape389: TShapeNode;
Shape390: TShapeNode;
LineSet391: TLineSetNode;
Coordinate392: TCoordinateNode;
ColorRGBA393: TColorRGBANode;
HAnimSite394: THAnimSiteNode;
TouchSensor395: TTouchSensorNode;
Shape396: TShapeNode;
HAnimJoint397: THAnimJointNode;
HAnimJoint398: THAnimJointNode;
HAnimSegment399: THAnimSegmentNode;
Transform400: TTransformNode;
Transform401: TTransformNode;
Shape402: TShapeNode;
Shape403: TShapeNode;
LineSet404: TLineSetNode;
Coordinate405: TCoordinateNode;
ColorRGBA406: TColorRGBANode;
HAnimSite407: THAnimSiteNode;
TouchSensor408: TTouchSensorNode;
Shape409: TShapeNode;
HAnimSite410: THAnimSiteNode;
TouchSensor411: TTouchSensorNode;
Shape412: TShapeNode;
HAnimSite413: THAnimSiteNode;
TouchSensor414: TTouchSensorNode;
Shape415: TShapeNode;
HAnimJoint416: THAnimJointNode;
HAnimSegment417: THAnimSegmentNode;
Transform418: TTransformNode;
Transform419: TTransformNode;
Shape420: TShapeNode;
Shape421: TShapeNode;
LineSet422: TLineSetNode;
Coordinate423: TCoordinateNode;
ColorRGBA424: TColorRGBANode;
HAnimSite425: THAnimSiteNode;
TouchSensor426: TTouchSensorNode;
Shape427: TShapeNode;
HAnimSite428: THAnimSiteNode;
TouchSensor429: TTouchSensorNode;
Shape430: TShapeNode;
HAnimJoint431: THAnimJointNode;
HAnimSegment432: THAnimSegmentNode;
Transform433: TTransformNode;
Transform434: TTransformNode;
Shape435: TShapeNode;
Shape436: TShapeNode;
LineSet437: TLineSetNode;
Coordinate438: TCoordinateNode;
ColorRGBA439: TColorRGBANode;
Shape440: TShapeNode;
LineSet441: TLineSetNode;
Coordinate442: TCoordinateNode;
ColorRGBA443: TColorRGBANode;
HAnimJoint444: THAnimJointNode;
HAnimSegment445: THAnimSegmentNode;
Transform446: TTransformNode;
Transform447: TTransformNode;
Shape448: TShapeNode;
Shape449: TShapeNode;
LineSet450: TLineSetNode;
Coordinate451: TCoordinateNode;
ColorRGBA452: TColorRGBANode;
Shape453: TShapeNode;
LineSet454: TLineSetNode;
Coordinate455: TCoordinateNode;
ColorRGBA456: TColorRGBANode;
Shape457: TShapeNode;
LineSet458: TLineSetNode;
Coordinate459: TCoordinateNode;
ColorRGBA460: TColorRGBANode;
HAnimJoint461: THAnimJointNode;
HAnimSegment462: THAnimSegmentNode;
Transform463: TTransformNode;
Transform464: TTransformNode;
Shape465: TShapeNode;
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
HAnimSite479: THAnimSiteNode;
TouchSensor480: TTouchSensorNode;
Shape481: TShapeNode;
HAnimJoint482: THAnimJointNode;
HAnimSegment483: THAnimSegmentNode;
Transform484: TTransformNode;
Transform485: TTransformNode;
Shape486: TShapeNode;
Shape487: TShapeNode;
LineSet488: TLineSetNode;
Coordinate489: TCoordinateNode;
ColorRGBA490: TColorRGBANode;
HAnimSite491: THAnimSiteNode;
TouchSensor492: TTouchSensorNode;
Shape493: TShapeNode;
HAnimJoint494: THAnimJointNode;
HAnimJoint495: THAnimJointNode;
HAnimSegment496: THAnimSegmentNode;
Transform497: TTransformNode;
Transform498: TTransformNode;
Shape499: TShapeNode;
Shape500: TShapeNode;
LineSet501: TLineSetNode;
Coordinate502: TCoordinateNode;
ColorRGBA503: TColorRGBANode;
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
HAnimSite531: THAnimSiteNode;
TouchSensor532: TTouchSensorNode;
Shape533: TShapeNode;
HAnimJoint534: THAnimJointNode;
HAnimJoint535: THAnimJointNode;
HAnimSegment536: THAnimSegmentNode;
Transform537: TTransformNode;
Transform538: TTransformNode;
Shape539: TShapeNode;
Shape540: TShapeNode;
LineSet541: TLineSetNode;
Coordinate542: TCoordinateNode;
ColorRGBA543: TColorRGBANode;
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
HAnimSite571: THAnimSiteNode;
TouchSensor572: TTouchSensorNode;
Shape573: TShapeNode;
HAnimJoint574: THAnimJointNode;
HAnimJoint575: THAnimJointNode;
HAnimSegment576: THAnimSegmentNode;
Transform577: TTransformNode;
Transform578: TTransformNode;
Shape579: TShapeNode;
Shape580: TShapeNode;
LineSet581: TLineSetNode;
Coordinate582: TCoordinateNode;
ColorRGBA583: TColorRGBANode;
HAnimJoint584: THAnimJointNode;
HAnimSegment585: THAnimSegmentNode;
Transform586: TTransformNode;
Transform587: TTransformNode;
Shape588: TShapeNode;
Shape589: TShapeNode;
LineSet590: TLineSetNode;
Coordinate591: TCoordinateNode;
ColorRGBA592: TColorRGBANode;
Shape593: TShapeNode;
LineSet594: TLineSetNode;
Coordinate595: TCoordinateNode;
ColorRGBA596: TColorRGBANode;
HAnimJoint597: THAnimJointNode;
HAnimSegment598: THAnimSegmentNode;
Transform599: TTransformNode;
Transform600: TTransformNode;
Shape601: TShapeNode;
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
HAnimSite624: THAnimSiteNode;
TouchSensor625: TTouchSensorNode;
Shape626: TShapeNode;
HAnimJoint627: THAnimJointNode;
HAnimJoint628: THAnimJointNode;
HAnimSegment629: THAnimSegmentNode;
Transform630: TTransformNode;
Transform631: TTransformNode;
Shape632: TShapeNode;
Shape633: TShapeNode;
LineSet634: TLineSetNode;
Coordinate635: TCoordinateNode;
ColorRGBA636: TColorRGBANode;
HAnimSite637: THAnimSiteNode;
TouchSensor638: TTouchSensorNode;
Shape639: TShapeNode;
HAnimJoint640: THAnimJointNode;
HAnimSegment641: THAnimSegmentNode;
Transform642: TTransformNode;
Transform643: TTransformNode;
Shape644: TShapeNode;
Shape645: TShapeNode;
LineSet646: TLineSetNode;
Coordinate647: TCoordinateNode;
ColorRGBA648: TColorRGBANode;
HAnimJoint649: THAnimJointNode;
HAnimSegment650: THAnimSegmentNode;
Transform651: TTransformNode;
Transform652: TTransformNode;
Shape653: TShapeNode;
Shape654: TShapeNode;
LineSet655: TLineSetNode;
Coordinate656: TCoordinateNode;
ColorRGBA657: TColorRGBANode;
HAnimSite658: THAnimSiteNode;
TouchSensor659: TTouchSensorNode;
Shape660: TShapeNode;
HAnimJoint661: THAnimJointNode;
HAnimJoint662: THAnimJointNode;
HAnimSegment663: THAnimSegmentNode;
Transform664: TTransformNode;
Transform665: TTransformNode;
Shape666: TShapeNode;
Shape667: TShapeNode;
LineSet668: TLineSetNode;
Coordinate669: TCoordinateNode;
ColorRGBA670: TColorRGBANode;
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
HAnimSite689: THAnimSiteNode;
TouchSensor690: TTouchSensorNode;
Shape691: TShapeNode;
HAnimSite692: THAnimSiteNode;
TouchSensor693: TTouchSensorNode;
Shape694: TShapeNode;
HAnimSite695: THAnimSiteNode;
TouchSensor696: TTouchSensorNode;
Shape697: TShapeNode;
HAnimJoint698: THAnimJointNode;
HAnimSegment699: THAnimSegmentNode;
Transform700: TTransformNode;
Transform701: TTransformNode;
Shape702: TShapeNode;
Shape703: TShapeNode;
LineSet704: TLineSetNode;
Coordinate705: TCoordinateNode;
ColorRGBA706: TColorRGBANode;
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
HAnimSite734: THAnimSiteNode;
TouchSensor735: TTouchSensorNode;
Shape736: TShapeNode;
HAnimJoint737: THAnimJointNode;
HAnimSegment738: THAnimSegmentNode;
Transform739: TTransformNode;
Transform740: TTransformNode;
Shape741: TShapeNode;
Shape742: TShapeNode;
LineSet743: TLineSetNode;
Coordinate744: TCoordinateNode;
ColorRGBA745: TColorRGBANode;
HAnimSite746: THAnimSiteNode;
TouchSensor747: TTouchSensorNode;
Shape748: TShapeNode;
HAnimSite749: THAnimSiteNode;
TouchSensor750: TTouchSensorNode;
Shape751: TShapeNode;
HAnimJoint752: THAnimJointNode;
HAnimSegment753: THAnimSegmentNode;
Transform754: TTransformNode;
Transform755: TTransformNode;
Shape756: TShapeNode;
Shape757: TShapeNode;
LineSet758: TLineSetNode;
Coordinate759: TCoordinateNode;
ColorRGBA760: TColorRGBANode;
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
HAnimSite779: THAnimSiteNode;
TouchSensor780: TTouchSensorNode;
Shape781: TShapeNode;
HAnimSite782: THAnimSiteNode;
TouchSensor783: TTouchSensorNode;
Shape784: TShapeNode;
HAnimSite785: THAnimSiteNode;
TouchSensor786: TTouchSensorNode;
Shape787: TShapeNode;
HAnimSite788: THAnimSiteNode;
TouchSensor789: TTouchSensorNode;
Shape790: TShapeNode;
HAnimJoint791: THAnimJointNode;
HAnimSegment792: THAnimSegmentNode;
Transform793: TTransformNode;
Transform794: TTransformNode;
Shape795: TShapeNode;
Shape796: TShapeNode;
LineSet797: TLineSetNode;
Coordinate798: TCoordinateNode;
ColorRGBA799: TColorRGBANode;
HAnimSite800: THAnimSiteNode;
TouchSensor801: TTouchSensorNode;
Shape802: TShapeNode;
HAnimJoint803: THAnimJointNode;
HAnimSegment804: THAnimSegmentNode;
Transform805: TTransformNode;
Transform806: TTransformNode;
Shape807: TShapeNode;
Shape808: TShapeNode;
LineSet809: TLineSetNode;
Coordinate810: TCoordinateNode;
ColorRGBA811: TColorRGBANode;
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
HAnimSite839: THAnimSiteNode;
TouchSensor840: TTouchSensorNode;
Shape841: TShapeNode;
HAnimSite842: THAnimSiteNode;
TouchSensor843: TTouchSensorNode;
Shape844: TShapeNode;
HAnimJoint845: THAnimJointNode;
HAnimSegment846: THAnimSegmentNode;
Transform847: TTransformNode;
Transform848: TTransformNode;
Shape849: TShapeNode;
Shape850: TShapeNode;
LineSet851: TLineSetNode;
Coordinate852: TCoordinateNode;
ColorRGBA853: TColorRGBANode;
HAnimSite854: THAnimSiteNode;
TouchSensor855: TTouchSensorNode;
Shape856: TShapeNode;
HAnimSite857: THAnimSiteNode;
TouchSensor858: TTouchSensorNode;
Shape859: TShapeNode;
Shape860: TShapeNode;
LineSet861: TLineSetNode;
Coordinate862: TCoordinateNode;
ColorRGBA863: TColorRGBANode;
HAnimSite864: THAnimSiteNode;
TouchSensor865: TTouchSensorNode;
Shape866: TShapeNode;
HAnimSite867: THAnimSiteNode;
TouchSensor868: TTouchSensorNode;
Shape869: TShapeNode;
HAnimSite870: THAnimSiteNode;
TouchSensor871: TTouchSensorNode;
Shape872: TShapeNode;
HAnimSite873: THAnimSiteNode;
TouchSensor874: TTouchSensorNode;
Shape875: TShapeNode;
HAnimSite876: THAnimSiteNode;
TouchSensor877: TTouchSensorNode;
Shape878: TShapeNode;
Shape879: TShapeNode;
LineSet880: TLineSetNode;
Coordinate881: TCoordinateNode;
ColorRGBA882: TColorRGBANode;
HAnimSite883: THAnimSiteNode;
TouchSensor884: TTouchSensorNode;
Shape885: TShapeNode;
HAnimSite886: THAnimSiteNode;
TouchSensor887: TTouchSensorNode;
Shape888: TShapeNode;
HAnimSite889: THAnimSiteNode;
TouchSensor890: TTouchSensorNode;
Shape891: TShapeNode;
HAnimSite892: THAnimSiteNode;
TouchSensor893: TTouchSensorNode;
Shape894: TShapeNode;
HAnimSite895: THAnimSiteNode;
TouchSensor896: TTouchSensorNode;
Shape897: TShapeNode;
HAnimJoint898: THAnimJointNode;
HAnimSegment899: THAnimSegmentNode;
Transform900: TTransformNode;
Transform901: TTransformNode;
Shape902: TShapeNode;
Shape903: TShapeNode;
LineSet904: TLineSetNode;
Coordinate905: TCoordinateNode;
ColorRGBA906: TColorRGBANode;
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
HAnimSite943: THAnimSiteNode;
TouchSensor944: TTouchSensorNode;
Shape945: TShapeNode;
HAnimJoint946: THAnimJointNode;
HAnimSegment947: THAnimSegmentNode;
Transform948: TTransformNode;
Transform949: TTransformNode;
Shape950: TShapeNode;
Shape951: TShapeNode;
LineSet952: TLineSetNode;
Coordinate953: TCoordinateNode;
ColorRGBA954: TColorRGBANode;
HAnimJoint955: THAnimJointNode;
HAnimSegment956: THAnimSegmentNode;
Transform957: TTransformNode;
Transform958: TTransformNode;
Shape959: TShapeNode;
Shape960: TShapeNode;
LineSet961: TLineSetNode;
Coordinate962: TCoordinateNode;
ColorRGBA963: TColorRGBANode;
HAnimSite964: THAnimSiteNode;
TouchSensor965: TTouchSensorNode;
Shape966: TShapeNode;
HAnimSite967: THAnimSiteNode;
TouchSensor968: TTouchSensorNode;
Shape969: TShapeNode;
HAnimSite970: THAnimSiteNode;
TouchSensor971: TTouchSensorNode;
Shape972: TShapeNode;
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
HAnimJoint997: THAnimJointNode;
HAnimSegment998: THAnimSegmentNode;
Transform999: TTransformNode;
Transform1000: TTransformNode;
Shape1001: TShapeNode;
Shape1002: TShapeNode;
LineSet1003: TLineSetNode;
Coordinate1004: TCoordinateNode;
ColorRGBA1005: TColorRGBANode;
Shape1006: TShapeNode;
LineSet1007: TLineSetNode;
Coordinate1008: TCoordinateNode;
ColorRGBA1009: TColorRGBANode;
Shape1010: TShapeNode;
LineSet1011: TLineSetNode;
Coordinate1012: TCoordinateNode;
ColorRGBA1013: TColorRGBANode;
Shape1014: TShapeNode;
LineSet1015: TLineSetNode;
Coordinate1016: TCoordinateNode;
ColorRGBA1017: TColorRGBANode;
Shape1018: TShapeNode;
LineSet1019: TLineSetNode;
Coordinate1020: TCoordinateNode;
ColorRGBA1021: TColorRGBANode;
Shape1022: TShapeNode;
LineSet1023: TLineSetNode;
Coordinate1024: TCoordinateNode;
ColorRGBA1025: TColorRGBANode;
Shape1026: TShapeNode;
LineSet1027: TLineSetNode;
Coordinate1028: TCoordinateNode;
ColorRGBA1029: TColorRGBANode;
HAnimSite1030: THAnimSiteNode;
TouchSensor1031: TTouchSensorNode;
Shape1032: TShapeNode;
HAnimSite1033: THAnimSiteNode;
TouchSensor1034: TTouchSensorNode;
Shape1035: TShapeNode;
HAnimSite1036: THAnimSiteNode;
TouchSensor1037: TTouchSensorNode;
Shape1038: TShapeNode;
HAnimSite1039: THAnimSiteNode;
TouchSensor1040: TTouchSensorNode;
Shape1041: TShapeNode;
HAnimJoint1042: THAnimJointNode;
HAnimJoint1043: THAnimJointNode;
HAnimJoint1044: THAnimJointNode;
HAnimJoint1045: THAnimJointNode;
HAnimJoint1046: THAnimJointNode;
HAnimJoint1047: THAnimJointNode;
HAnimJoint1048: THAnimJointNode;
HAnimJoint1049: THAnimJointNode;
HAnimSegment1050: THAnimSegmentNode;
Transform1051: TTransformNode;
Transform1052: TTransformNode;
Shape1053: TShapeNode;
Shape1054: TShapeNode;
LineSet1055: TLineSetNode;
Coordinate1056: TCoordinateNode;
ColorRGBA1057: TColorRGBANode;
HAnimJoint1058: THAnimJointNode;
HAnimSegment1059: THAnimSegmentNode;
Transform1060: TTransformNode;
Transform1061: TTransformNode;
Shape1062: TShapeNode;
Shape1063: TShapeNode;
LineSet1064: TLineSetNode;
Coordinate1065: TCoordinateNode;
ColorRGBA1066: TColorRGBANode;
HAnimSite1067: THAnimSiteNode;
TouchSensor1068: TTouchSensorNode;
Shape1069: TShapeNode;
HAnimSite1070: THAnimSiteNode;
TouchSensor1071: TTouchSensorNode;
Shape1072: TShapeNode;
HAnimJoint1073: THAnimJointNode;
HAnimSegment1074: THAnimSegmentNode;
Transform1075: TTransformNode;
Transform1076: TTransformNode;
Shape1077: TShapeNode;
Shape1078: TShapeNode;
LineSet1079: TLineSetNode;
Coordinate1080: TCoordinateNode;
ColorRGBA1081: TColorRGBANode;
HAnimSite1082: THAnimSiteNode;
TouchSensor1083: TTouchSensorNode;
Shape1084: TShapeNode;
HAnimSite1085: THAnimSiteNode;
TouchSensor1086: TTouchSensorNode;
Shape1087: TShapeNode;
HAnimSite1088: THAnimSiteNode;
TouchSensor1089: TTouchSensorNode;
Shape1090: TShapeNode;
HAnimSite1091: THAnimSiteNode;
TouchSensor1092: TTouchSensorNode;
Shape1093: TShapeNode;
HAnimJoint1094: THAnimJointNode;
HAnimSegment1095: THAnimSegmentNode;
Transform1096: TTransformNode;
Transform1097: TTransformNode;
Shape1098: TShapeNode;
Shape1099: TShapeNode;
LineSet1100: TLineSetNode;
Coordinate1101: TCoordinateNode;
ColorRGBA1102: TColorRGBANode;
HAnimSite1103: THAnimSiteNode;
TouchSensor1104: TTouchSensorNode;
Shape1105: TShapeNode;
HAnimJoint1106: THAnimJointNode;
HAnimSegment1107: THAnimSegmentNode;
Transform1108: TTransformNode;
Transform1109: TTransformNode;
Shape1110: TShapeNode;
Shape1111: TShapeNode;
LineSet1112: TLineSetNode;
Coordinate1113: TCoordinateNode;
ColorRGBA1114: TColorRGBANode;
Shape1115: TShapeNode;
LineSet1116: TLineSetNode;
Coordinate1117: TCoordinateNode;
ColorRGBA1118: TColorRGBANode;
Shape1119: TShapeNode;
LineSet1120: TLineSetNode;
Coordinate1121: TCoordinateNode;
ColorRGBA1122: TColorRGBANode;
Shape1123: TShapeNode;
LineSet1124: TLineSetNode;
Coordinate1125: TCoordinateNode;
ColorRGBA1126: TColorRGBANode;
HAnimJoint1127: THAnimJointNode;
HAnimSegment1128: THAnimSegmentNode;
Transform1129: TTransformNode;
Transform1130: TTransformNode;
Shape1131: TShapeNode;
Shape1132: TShapeNode;
LineSet1133: TLineSetNode;
Coordinate1134: TCoordinateNode;
ColorRGBA1135: TColorRGBANode;
HAnimJoint1136: THAnimJointNode;
HAnimSegment1137: THAnimSegmentNode;
Transform1138: TTransformNode;
Transform1139: TTransformNode;
Shape1140: TShapeNode;
Shape1141: TShapeNode;
LineSet1142: TLineSetNode;
Coordinate1143: TCoordinateNode;
ColorRGBA1144: TColorRGBANode;
HAnimJoint1145: THAnimJointNode;
HAnimSegment1146: THAnimSegmentNode;
Transform1147: TTransformNode;
Transform1148: TTransformNode;
Shape1149: TShapeNode;
Shape1150: TShapeNode;
LineSet1151: TLineSetNode;
Coordinate1152: TCoordinateNode;
ColorRGBA1153: TColorRGBANode;
HAnimSite1154: THAnimSiteNode;
TouchSensor1155: TTouchSensorNode;
Shape1156: TShapeNode;
HAnimJoint1157: THAnimJointNode;
HAnimJoint1158: THAnimJointNode;
HAnimSegment1159: THAnimSegmentNode;
Transform1160: TTransformNode;
Transform1161: TTransformNode;
Shape1162: TShapeNode;
Shape1163: TShapeNode;
LineSet1164: TLineSetNode;
Coordinate1165: TCoordinateNode;
ColorRGBA1166: TColorRGBANode;
HAnimSite1167: THAnimSiteNode;
TouchSensor1168: TTouchSensorNode;
Shape1169: TShapeNode;
HAnimJoint1170: THAnimJointNode;
HAnimSegment1171: THAnimSegmentNode;
Transform1172: TTransformNode;
Transform1173: TTransformNode;
Shape1174: TShapeNode;
Shape1175: TShapeNode;
LineSet1176: TLineSetNode;
Coordinate1177: TCoordinateNode;
ColorRGBA1178: TColorRGBANode;
HAnimJoint1179: THAnimJointNode;
HAnimSegment1180: THAnimSegmentNode;
Transform1181: TTransformNode;
Transform1182: TTransformNode;
Shape1183: TShapeNode;
Shape1184: TShapeNode;
LineSet1185: TLineSetNode;
Coordinate1186: TCoordinateNode;
ColorRGBA1187: TColorRGBANode;
HAnimJoint1188: THAnimJointNode;
HAnimSegment1189: THAnimSegmentNode;
Transform1190: TTransformNode;
Transform1191: TTransformNode;
Shape1192: TShapeNode;
Shape1193: TShapeNode;
LineSet1194: TLineSetNode;
Coordinate1195: TCoordinateNode;
ColorRGBA1196: TColorRGBANode;
HAnimSite1197: THAnimSiteNode;
TouchSensor1198: TTouchSensorNode;
Shape1199: TShapeNode;
HAnimSite1200: THAnimSiteNode;
TouchSensor1201: TTouchSensorNode;
Shape1202: TShapeNode;
HAnimJoint1203: THAnimJointNode;
HAnimJoint1204: THAnimJointNode;
HAnimSegment1205: THAnimSegmentNode;
Transform1206: TTransformNode;
Transform1207: TTransformNode;
Shape1208: TShapeNode;
Shape1209: TShapeNode;
LineSet1210: TLineSetNode;
Coordinate1211: TCoordinateNode;
ColorRGBA1212: TColorRGBANode;
HAnimSite1213: THAnimSiteNode;
TouchSensor1214: TTouchSensorNode;
Shape1215: TShapeNode;
HAnimJoint1216: THAnimJointNode;
HAnimSegment1217: THAnimSegmentNode;
Transform1218: TTransformNode;
Transform1219: TTransformNode;
Shape1220: TShapeNode;
Shape1221: TShapeNode;
LineSet1222: TLineSetNode;
Coordinate1223: TCoordinateNode;
ColorRGBA1224: TColorRGBANode;
HAnimJoint1225: THAnimJointNode;
HAnimSegment1226: THAnimSegmentNode;
Transform1227: TTransformNode;
Transform1228: TTransformNode;
Shape1229: TShapeNode;
Shape1230: TShapeNode;
LineSet1231: TLineSetNode;
Coordinate1232: TCoordinateNode;
ColorRGBA1233: TColorRGBANode;
HAnimJoint1234: THAnimJointNode;
HAnimSegment1235: THAnimSegmentNode;
Transform1236: TTransformNode;
Transform1237: TTransformNode;
Shape1238: TShapeNode;
Shape1239: TShapeNode;
LineSet1240: TLineSetNode;
Coordinate1241: TCoordinateNode;
ColorRGBA1242: TColorRGBANode;
HAnimSite1243: THAnimSiteNode;
TouchSensor1244: TTouchSensorNode;
Shape1245: TShapeNode;
HAnimJoint1246: THAnimJointNode;
HAnimJoint1247: THAnimJointNode;
HAnimSegment1248: THAnimSegmentNode;
Transform1249: TTransformNode;
Transform1250: TTransformNode;
Shape1251: TShapeNode;
Shape1252: TShapeNode;
LineSet1253: TLineSetNode;
Coordinate1254: TCoordinateNode;
ColorRGBA1255: TColorRGBANode;
Shape1256: TShapeNode;
LineSet1257: TLineSetNode;
Coordinate1258: TCoordinateNode;
ColorRGBA1259: TColorRGBANode;
HAnimSite1260: THAnimSiteNode;
TouchSensor1261: TTouchSensorNode;
Shape1262: TShapeNode;
HAnimJoint1263: THAnimJointNode;
HAnimSegment1264: THAnimSegmentNode;
Transform1265: TTransformNode;
Transform1266: TTransformNode;
Shape1267: TShapeNode;
Shape1268: TShapeNode;
LineSet1269: TLineSetNode;
Coordinate1270: TCoordinateNode;
ColorRGBA1271: TColorRGBANode;
HAnimJoint1272: THAnimJointNode;
HAnimSegment1273: THAnimSegmentNode;
Transform1274: TTransformNode;
Transform1275: TTransformNode;
Shape1276: TShapeNode;
Shape1277: TShapeNode;
LineSet1278: TLineSetNode;
Coordinate1279: TCoordinateNode;
ColorRGBA1280: TColorRGBANode;
HAnimJoint1281: THAnimJointNode;
HAnimSegment1282: THAnimSegmentNode;
Transform1283: TTransformNode;
Transform1284: TTransformNode;
Shape1285: TShapeNode;
Shape1286: TShapeNode;
LineSet1287: TLineSetNode;
Coordinate1288: TCoordinateNode;
ColorRGBA1289: TColorRGBANode;
HAnimSite1290: THAnimSiteNode;
TouchSensor1291: TTouchSensorNode;
Shape1292: TShapeNode;
HAnimJoint1293: THAnimJointNode;
HAnimJoint1294: THAnimJointNode;
HAnimSegment1295: THAnimSegmentNode;
Transform1296: TTransformNode;
Transform1297: TTransformNode;
Shape1298: TShapeNode;
Shape1299: TShapeNode;
LineSet1300: TLineSetNode;
Coordinate1301: TCoordinateNode;
ColorRGBA1302: TColorRGBANode;
HAnimJoint1303: THAnimJointNode;
HAnimSegment1304: THAnimSegmentNode;
Transform1305: TTransformNode;
Transform1306: TTransformNode;
Shape1307: TShapeNode;
Shape1308: TShapeNode;
LineSet1309: TLineSetNode;
Coordinate1310: TCoordinateNode;
ColorRGBA1311: TColorRGBANode;
HAnimJoint1312: THAnimJointNode;
HAnimSegment1313: THAnimSegmentNode;
Transform1314: TTransformNode;
Transform1315: TTransformNode;
Shape1316: TShapeNode;
Shape1317: TShapeNode;
LineSet1318: TLineSetNode;
Coordinate1319: TCoordinateNode;
ColorRGBA1320: TColorRGBANode;
HAnimSite1321: THAnimSiteNode;
TouchSensor1322: TTouchSensorNode;
Shape1323: TShapeNode;
HAnimJoint1324: THAnimJointNode;
HAnimJoint1325: THAnimJointNode;
HAnimSegment1326: THAnimSegmentNode;
Transform1327: TTransformNode;
Transform1328: TTransformNode;
Shape1329: TShapeNode;
Shape1330: TShapeNode;
LineSet1331: TLineSetNode;
Coordinate1332: TCoordinateNode;
ColorRGBA1333: TColorRGBANode;
HAnimJoint1334: THAnimJointNode;
HAnimSegment1335: THAnimSegmentNode;
Transform1336: TTransformNode;
Transform1337: TTransformNode;
Shape1338: TShapeNode;
Shape1339: TShapeNode;
LineSet1340: TLineSetNode;
Coordinate1341: TCoordinateNode;
ColorRGBA1342: TColorRGBANode;
HAnimSite1343: THAnimSiteNode;
TouchSensor1344: TTouchSensorNode;
Shape1345: TShapeNode;
HAnimSite1346: THAnimSiteNode;
TouchSensor1347: TTouchSensorNode;
Shape1348: TShapeNode;
HAnimJoint1349: THAnimJointNode;
HAnimSegment1350: THAnimSegmentNode;
Transform1351: TTransformNode;
Transform1352: TTransformNode;
Shape1353: TShapeNode;
Shape1354: TShapeNode;
LineSet1355: TLineSetNode;
Coordinate1356: TCoordinateNode;
ColorRGBA1357: TColorRGBANode;
HAnimSite1358: THAnimSiteNode;
TouchSensor1359: TTouchSensorNode;
Shape1360: TShapeNode;
HAnimSite1361: THAnimSiteNode;
TouchSensor1362: TTouchSensorNode;
Shape1363: TShapeNode;
HAnimSite1364: THAnimSiteNode;
TouchSensor1365: TTouchSensorNode;
Shape1366: TShapeNode;
HAnimSite1367: THAnimSiteNode;
TouchSensor1368: TTouchSensorNode;
Shape1369: TShapeNode;
HAnimJoint1370: THAnimJointNode;
HAnimSegment1371: THAnimSegmentNode;
Transform1372: TTransformNode;
Transform1373: TTransformNode;
Shape1374: TShapeNode;
Shape1375: TShapeNode;
LineSet1376: TLineSetNode;
Coordinate1377: TCoordinateNode;
ColorRGBA1378: TColorRGBANode;
HAnimSite1379: THAnimSiteNode;
TouchSensor1380: TTouchSensorNode;
Shape1381: TShapeNode;
HAnimJoint1382: THAnimJointNode;
HAnimSegment1383: THAnimSegmentNode;
Transform1384: TTransformNode;
Transform1385: TTransformNode;
Shape1386: TShapeNode;
Shape1387: TShapeNode;
LineSet1388: TLineSetNode;
Coordinate1389: TCoordinateNode;
ColorRGBA1390: TColorRGBANode;
Shape1391: TShapeNode;
LineSet1392: TLineSetNode;
Coordinate1393: TCoordinateNode;
ColorRGBA1394: TColorRGBANode;
Shape1395: TShapeNode;
LineSet1396: TLineSetNode;
Coordinate1397: TCoordinateNode;
ColorRGBA1398: TColorRGBANode;
Shape1399: TShapeNode;
LineSet1400: TLineSetNode;
Coordinate1401: TCoordinateNode;
ColorRGBA1402: TColorRGBANode;
HAnimJoint1403: THAnimJointNode;
HAnimSegment1404: THAnimSegmentNode;
Transform1405: TTransformNode;
Transform1406: TTransformNode;
Shape1407: TShapeNode;
Shape1408: TShapeNode;
LineSet1409: TLineSetNode;
Coordinate1410: TCoordinateNode;
ColorRGBA1411: TColorRGBANode;
HAnimJoint1412: THAnimJointNode;
HAnimSegment1413: THAnimSegmentNode;
Transform1414: TTransformNode;
Transform1415: TTransformNode;
Shape1416: TShapeNode;
Shape1417: TShapeNode;
LineSet1418: TLineSetNode;
Coordinate1419: TCoordinateNode;
ColorRGBA1420: TColorRGBANode;
HAnimJoint1421: THAnimJointNode;
HAnimSegment1422: THAnimSegmentNode;
Transform1423: TTransformNode;
Transform1424: TTransformNode;
Shape1425: TShapeNode;
Shape1426: TShapeNode;
LineSet1427: TLineSetNode;
Coordinate1428: TCoordinateNode;
ColorRGBA1429: TColorRGBANode;
HAnimSite1430: THAnimSiteNode;
TouchSensor1431: TTouchSensorNode;
Shape1432: TShapeNode;
HAnimJoint1433: THAnimJointNode;
HAnimJoint1434: THAnimJointNode;
HAnimSegment1435: THAnimSegmentNode;
Transform1436: TTransformNode;
Transform1437: TTransformNode;
Shape1438: TShapeNode;
Shape1439: TShapeNode;
LineSet1440: TLineSetNode;
Coordinate1441: TCoordinateNode;
ColorRGBA1442: TColorRGBANode;
HAnimSite1443: THAnimSiteNode;
TouchSensor1444: TTouchSensorNode;
Shape1445: TShapeNode;
HAnimJoint1446: THAnimJointNode;
HAnimSegment1447: THAnimSegmentNode;
Transform1448: TTransformNode;
Transform1449: TTransformNode;
Shape1450: TShapeNode;
Shape1451: TShapeNode;
LineSet1452: TLineSetNode;
Coordinate1453: TCoordinateNode;
ColorRGBA1454: TColorRGBANode;
HAnimJoint1455: THAnimJointNode;
HAnimSegment1456: THAnimSegmentNode;
Transform1457: TTransformNode;
Transform1458: TTransformNode;
Shape1459: TShapeNode;
Shape1460: TShapeNode;
LineSet1461: TLineSetNode;
Coordinate1462: TCoordinateNode;
ColorRGBA1463: TColorRGBANode;
HAnimJoint1464: THAnimJointNode;
HAnimSegment1465: THAnimSegmentNode;
Transform1466: TTransformNode;
Transform1467: TTransformNode;
Shape1468: TShapeNode;
Shape1469: TShapeNode;
LineSet1470: TLineSetNode;
Coordinate1471: TCoordinateNode;
ColorRGBA1472: TColorRGBANode;
HAnimSite1473: THAnimSiteNode;
TouchSensor1474: TTouchSensorNode;
Shape1475: TShapeNode;
HAnimSite1476: THAnimSiteNode;
TouchSensor1477: TTouchSensorNode;
Shape1478: TShapeNode;
HAnimJoint1479: THAnimJointNode;
HAnimJoint1480: THAnimJointNode;
HAnimSegment1481: THAnimSegmentNode;
Transform1482: TTransformNode;
Transform1483: TTransformNode;
Shape1484: TShapeNode;
Shape1485: TShapeNode;
LineSet1486: TLineSetNode;
Coordinate1487: TCoordinateNode;
ColorRGBA1488: TColorRGBANode;
HAnimSite1489: THAnimSiteNode;
TouchSensor1490: TTouchSensorNode;
Shape1491: TShapeNode;
HAnimJoint1492: THAnimJointNode;
HAnimSegment1493: THAnimSegmentNode;
Transform1494: TTransformNode;
Transform1495: TTransformNode;
Shape1496: TShapeNode;
Shape1497: TShapeNode;
LineSet1498: TLineSetNode;
Coordinate1499: TCoordinateNode;
ColorRGBA1500: TColorRGBANode;
HAnimJoint1501: THAnimJointNode;
HAnimSegment1502: THAnimSegmentNode;
Transform1503: TTransformNode;
Transform1504: TTransformNode;
Shape1505: TShapeNode;
Shape1506: TShapeNode;
LineSet1507: TLineSetNode;
Coordinate1508: TCoordinateNode;
ColorRGBA1509: TColorRGBANode;
HAnimJoint1510: THAnimJointNode;
HAnimSegment1511: THAnimSegmentNode;
Transform1512: TTransformNode;
Transform1513: TTransformNode;
Shape1514: TShapeNode;
Shape1515: TShapeNode;
LineSet1516: TLineSetNode;
Coordinate1517: TCoordinateNode;
ColorRGBA1518: TColorRGBANode;
HAnimSite1519: THAnimSiteNode;
TouchSensor1520: TTouchSensorNode;
Shape1521: TShapeNode;
HAnimJoint1522: THAnimJointNode;
HAnimJoint1523: THAnimJointNode;
HAnimSegment1524: THAnimSegmentNode;
Transform1525: TTransformNode;
Transform1526: TTransformNode;
Shape1527: TShapeNode;
Shape1528: TShapeNode;
LineSet1529: TLineSetNode;
Coordinate1530: TCoordinateNode;
ColorRGBA1531: TColorRGBANode;
Shape1532: TShapeNode;
LineSet1533: TLineSetNode;
Coordinate1534: TCoordinateNode;
ColorRGBA1535: TColorRGBANode;
HAnimSite1536: THAnimSiteNode;
TouchSensor1537: TTouchSensorNode;
Shape1538: TShapeNode;
HAnimJoint1539: THAnimJointNode;
HAnimSegment1540: THAnimSegmentNode;
Transform1541: TTransformNode;
Transform1542: TTransformNode;
Shape1543: TShapeNode;
Shape1544: TShapeNode;
LineSet1545: TLineSetNode;
Coordinate1546: TCoordinateNode;
ColorRGBA1547: TColorRGBANode;
HAnimJoint1548: THAnimJointNode;
HAnimSegment1549: THAnimSegmentNode;
Transform1550: TTransformNode;
Transform1551: TTransformNode;
Shape1552: TShapeNode;
Shape1553: TShapeNode;
LineSet1554: TLineSetNode;
Coordinate1555: TCoordinateNode;
ColorRGBA1556: TColorRGBANode;
HAnimJoint1557: THAnimJointNode;
HAnimSegment1558: THAnimSegmentNode;
Transform1559: TTransformNode;
Transform1560: TTransformNode;
Shape1561: TShapeNode;
Shape1562: TShapeNode;
LineSet1563: TLineSetNode;
Coordinate1564: TCoordinateNode;
ColorRGBA1565: TColorRGBANode;
HAnimSite1566: THAnimSiteNode;
TouchSensor1567: TTouchSensorNode;
Shape1568: TShapeNode;
HAnimJoint1569: THAnimJointNode;
HAnimJoint1570: THAnimJointNode;
HAnimSegment1571: THAnimSegmentNode;
Transform1572: TTransformNode;
Transform1573: TTransformNode;
Shape1574: TShapeNode;
Shape1575: TShapeNode;
LineSet1576: TLineSetNode;
Coordinate1577: TCoordinateNode;
ColorRGBA1578: TColorRGBANode;
HAnimJoint1579: THAnimJointNode;
HAnimSegment1580: THAnimSegmentNode;
Transform1581: TTransformNode;
Transform1582: TTransformNode;
Shape1583: TShapeNode;
Shape1584: TShapeNode;
LineSet1585: TLineSetNode;
Coordinate1586: TCoordinateNode;
ColorRGBA1587: TColorRGBANode;
HAnimJoint1588: THAnimJointNode;
HAnimSegment1589: THAnimSegmentNode;
Transform1590: TTransformNode;
Transform1591: TTransformNode;
Shape1592: TShapeNode;
Shape1593: TShapeNode;
LineSet1594: TLineSetNode;
Coordinate1595: TCoordinateNode;
ColorRGBA1596: TColorRGBANode;
HAnimSite1597: THAnimSiteNode;
TouchSensor1598: TTouchSensorNode;
Shape1599: TShapeNode;
HAnimJoint1600: THAnimJointNode;
HAnimJoint1601: THAnimJointNode;
HAnimJoint1602: THAnimJointNode;
HAnimJoint1603: THAnimJointNode;
HAnimJoint1604: THAnimJointNode;
HAnimJoint1605: THAnimJointNode;
HAnimJoint1606: THAnimJointNode;
HAnimJoint1607: THAnimJointNode;
HAnimJoint1608: THAnimJointNode;
HAnimJoint1609: THAnimJointNode;
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

procedure InitHumanoid4_1Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'Humanoid4_1.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'h2.pl';
{ METHOD .Meta }
X3D0.Meta['modified'] := '14 Jan 2023';
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

procedure InitHumanoid4_1Part1;
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

procedure InitHumanoid4_1Part2;
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

procedure InitHumanoid4_1Part3;
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
{ </LOD> }
Coordinate44 := TCoordinateNode.Create;;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid43.FdSkinCoord.Set(Coordinate44);
HAnimJoint45 := THAnimJointNode.Create;;
HAnimJoint45.Center := Vector3(0,0.824,0.0277);
HAnimSegment46 := THAnimSegmentNode.Create;;
Transform47 := TTransformNode.Create;;
Transform47.Translation := Vector3(0,0.824,0.0277);
Transform48 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform47.FdChildren.Add(Transform48);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Transform47);
Shape50 := TShapeNode.Create;;
LineSet51 := TLineSetNode.Create;;
LineSet51.SetVertexCount([2]);
end;

procedure InitHumanoid4_1Part4;
begin

Coordinate52 := TCoordinateNode.Create;;
Coordinate52.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet51.Coord := Coordinate52;
{ from humanoid_root to sacroiliac vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet51.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape50.Geometry := LineSet51;
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Shape50);
HAnimSite54 := THAnimSiteNode.Create;;
TouchSensor55 := TTouchSensorNode.Create;;
TouchSensor55.Description := 'HAnimSite buttocks_standing_wall_contact_point_pt';
{ METHOD .FdChildren.Add }
HAnimSite54.FdChildren.Add(TouchSensor55);
{ METHOD .FdChildren.Add }
HAnimSite54.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite54);
HAnimSite57 := THAnimSiteNode.Create;;
HAnimSite57.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor58 := TTouchSensorNode.Create;;
TouchSensor58.Description := 'HAnimSite crotch_pt';
{ METHOD .FdChildren.Add }
HAnimSite57.FdChildren.Add(TouchSensor58);
{ METHOD .FdChildren.Add }
HAnimSite57.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite57);
HAnimSite60 := THAnimSiteNode.Create;;
HAnimSite60.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor61 := TTouchSensorNode.Create;;
TouchSensor61.Description := 'HAnimSite l_asis_pt';
{ METHOD .FdChildren.Add }
HAnimSite60.FdChildren.Add(TouchSensor61);
{ METHOD .FdChildren.Add }
HAnimSite60.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite60);
HAnimSite63 := THAnimSiteNode.Create;;
HAnimSite63.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor64 := TTouchSensorNode.Create;;
TouchSensor64.Description := 'HAnimSite l_iliocristale_pt';
{ METHOD .FdChildren.Add }
HAnimSite63.FdChildren.Add(TouchSensor64);
end;

procedure InitHumanoid4_1Part5;
begin

{ METHOD .FdChildren.Add }
HAnimSite63.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite63);
HAnimSite66 := THAnimSiteNode.Create;;
HAnimSite66.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor67 := TTouchSensorNode.Create;;
TouchSensor67.Description := 'HAnimSite l_psis_pt';
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(TouchSensor67);
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite66);
HAnimSite69 := THAnimSiteNode.Create;;
HAnimSite69.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor70 := TTouchSensorNode.Create;;
TouchSensor70.Description := 'HAnimSite l_trochanterion_pt';
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(TouchSensor70);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite69);
HAnimSite72 := THAnimSiteNode.Create;;
HAnimSite72.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor73 := TTouchSensorNode.Create;;
TouchSensor73.Description := 'HAnimSite r_asis_pt';
{ METHOD .FdChildren.Add }
HAnimSite72.FdChildren.Add(TouchSensor73);
{ METHOD .FdChildren.Add }
HAnimSite72.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite72);
HAnimSite75 := THAnimSiteNode.Create;;
HAnimSite75.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor76 := TTouchSensorNode.Create;;
TouchSensor76.Description := 'HAnimSite r_iliocristale_pt';
{ METHOD .FdChildren.Add }
HAnimSite75.FdChildren.Add(TouchSensor76);
{ METHOD .FdChildren.Add }
HAnimSite75.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite75);
HAnimSite78 := THAnimSiteNode.Create;;
end;

procedure InitHumanoid4_1Part6;
begin

HAnimSite78.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor79 := TTouchSensorNode.Create;;
TouchSensor79.Description := 'HAnimSite r_psis_pt';
{ METHOD .FdChildren.Add }
HAnimSite78.FdChildren.Add(TouchSensor79);
{ METHOD .FdChildren.Add }
HAnimSite78.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite78);
HAnimSite81 := THAnimSiteNode.Create;;
HAnimSite81.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor82 := TTouchSensorNode.Create;;
TouchSensor82.Description := 'HAnimSite r_trochanterion_pt';
{ METHOD .FdChildren.Add }
HAnimSite81.FdChildren.Add(TouchSensor82);
{ METHOD .FdChildren.Add }
HAnimSite81.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite81);
Shape84 := TShapeNode.Create;;
LineSet85 := TLineSetNode.Create;;
LineSet85.SetVertexCount([2]);
Coordinate86 := TCoordinateNode.Create;;
Coordinate86.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet85.Coord := Coordinate86;
{ from humanoid_root to vl5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet85.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape84.Geometry := LineSet85;
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(Shape84);
HAnimSite88 := THAnimSiteNode.Create;;
HAnimSite88.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor89 := TTouchSensorNode.Create;;
TouchSensor89.Description := 'HAnimSite navel_pt';
{ METHOD .FdChildren.Add }
HAnimSite88.FdChildren.Add(TouchSensor89);
{ METHOD .FdChildren.Add }
HAnimSite88.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite88);
HAnimSite91 := THAnimSiteNode.Create;;
TouchSensor92 := TTouchSensorNode.Create;
end;

procedure InitHumanoid4_1Part7;
begin
;
TouchSensor92.Description := 'HAnimSite waist_preferred_anterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite91.FdChildren.Add(TouchSensor92);
{ METHOD .FdChildren.Add }
HAnimSite91.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite91);
HAnimSite94 := THAnimSiteNode.Create;;
HAnimSite94.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor95 := TTouchSensorNode.Create;;
TouchSensor95.Description := 'HAnimSite waist_preferred_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite94.FdChildren.Add(TouchSensor95);
{ METHOD .FdChildren.Add }
HAnimSite94.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment46.FdChildren.Add(HAnimSite94);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimSegment46);
HAnimJoint97 := THAnimJointNode.Create;;
HAnimJoint97.Center := Vector3(0,0.9149,0.0016);
HAnimSegment98 := THAnimSegmentNode.Create;;
Transform99 := TTransformNode.Create;;
Transform99.Translation := Vector3(0,0.9149,0.0016);
Transform100 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform100.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform99.FdChildren.Add(Transform100);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(Transform99);
Shape102 := TShapeNode.Create;;
LineSet103 := TLineSetNode.Create;;
LineSet103.SetVertexCount([2]);
Coordinate104 := TCoordinateNode.Create;;
Coordinate104.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet103.Coord := Coordinate104;
{ from sacroiliac to l_hip vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet103.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape102.Geometry := LineSet103;
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(Shape102);
end;

procedure InitHumanoid4_1Part8;
begin

HAnimSite106 := THAnimSiteNode.Create;;
HAnimSite106.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor107 := TTouchSensorNode.Create;;
TouchSensor107.Description := 'HAnimSite l_femoral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite106.FdChildren.Add(TouchSensor107);
{ METHOD .FdChildren.Add }
HAnimSite106.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite106);
HAnimSite109 := THAnimSiteNode.Create;;
HAnimSite109.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor110 := TTouchSensorNode.Create;;
TouchSensor110.Description := 'HAnimSite l_femoral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite109.FdChildren.Add(TouchSensor110);
{ METHOD .FdChildren.Add }
HAnimSite109.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite109);
HAnimSite112 := THAnimSiteNode.Create;;
HAnimSite112.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor113 := TTouchSensorNode.Create;;
TouchSensor113.Description := 'HAnimSite l_knee_crease_pt';
{ METHOD .FdChildren.Add }
HAnimSite112.FdChildren.Add(TouchSensor113);
{ METHOD .FdChildren.Add }
HAnimSite112.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite112);
HAnimSite115 := THAnimSiteNode.Create;;
TouchSensor116 := TTouchSensorNode.Create;;
TouchSensor116.Description := 'HAnimSite l_suprapatella_pt';
{ METHOD .FdChildren.Add }
HAnimSite115.FdChildren.Add(TouchSensor116);
{ METHOD .FdChildren.Add }
HAnimSite115.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite115);
Shape118 := TShapeNode.Create;;
LineSet119 := TLineSetNode.Create;;
LineSet119.SetVertexCount([2]);
end;

procedure InitHumanoid4_1Part9;
begin

Coordinate120 := TCoordinateNode.Create;;
Coordinate120.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet119.Coord := Coordinate120;
{ from sacroiliac to r_hip vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet119.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape118.Geometry := LineSet119;
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(Shape118);
HAnimSite122 := THAnimSiteNode.Create;;
HAnimSite122.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor123 := TTouchSensorNode.Create;;
TouchSensor123.Description := 'HAnimSite r_femoral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite122.FdChildren.Add(TouchSensor123);
{ METHOD .FdChildren.Add }
HAnimSite122.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite122);
HAnimSite125 := THAnimSiteNode.Create;;
HAnimSite125.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor126 := TTouchSensorNode.Create;;
TouchSensor126.Description := 'HAnimSite r_femoral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(TouchSensor126);
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite125);
HAnimSite128 := THAnimSiteNode.Create;;
HAnimSite128.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor129 := TTouchSensorNode.Create;;
TouchSensor129.Description := 'HAnimSite r_knee_crease_pt';
{ METHOD .FdChildren.Add }
HAnimSite128.FdChildren.Add(TouchSensor129);
{ METHOD .FdChildren.Add }
HAnimSite128.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite128);
HAnimSite131 := THAnimSiteNode.Create;;
TouchSensor132 := TTouchSensorNode.Create;;
TouchSensor132.Description := 'HAnimSite r_suprapatella_pt';
{ METHOD .FdChildren.Add }
HAnimSite131.FdChildren.Add(TouchSensor132);
end;

procedure InitHumanoid4_1Part10;
begin

{ METHOD .FdChildren.Add }
HAnimSite131.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment98.FdChildren.Add(HAnimSite131);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimSegment98);
HAnimJoint134 := THAnimJointNode.Create;;
HAnimJoint134.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment135 := THAnimSegmentNode.Create;;
Transform136 := TTransformNode.Create;;
Transform136.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform137 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform137.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform136.FdChildren.Add(Transform137);
{ METHOD .FdChildren.Add }
HAnimSegment135.FdChildren.Add(Transform136);
Shape139 := TShapeNode.Create;;
LineSet140 := TLineSetNode.Create;;
LineSet140.SetVertexCount([2]);
Coordinate141 := TCoordinateNode.Create;;
Coordinate141.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet140.Coord := Coordinate141;
{ from l_hip to l_knee vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet140.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape139.Geometry := LineSet140;
{ METHOD .FdChildren.Add }
HAnimSegment135.FdChildren.Add(Shape139);
HAnimSite143 := THAnimSiteNode.Create;;
HAnimSite143.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor144 := TTouchSensorNode.Create;;
TouchSensor144.Description := 'HAnimSite l_lateral_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite143.FdChildren.Add(TouchSensor144);
{ METHOD .FdChildren.Add }
HAnimSite143.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment135.FdChildren.Add(HAnimSite143);
HAnimSite146 := THAnimSiteNode.Create;;
HAnimSite146.Translation := Vector3(0.089,0.0716,-0.0881);
end;

procedure InitHumanoid4_1Part11;
begin

TouchSensor147 := TTouchSensorNode.Create;;
TouchSensor147.Description := 'HAnimSite l_medial_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite146.FdChildren.Add(TouchSensor147);
{ METHOD .FdChildren.Add }
HAnimSite146.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment135.FdChildren.Add(HAnimSite146);
HAnimSite149 := THAnimSiteNode.Create;;
TouchSensor150 := TTouchSensorNode.Create;;
TouchSensor150.Description := 'HAnimSite l_tibiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite149.FdChildren.Add(TouchSensor150);
{ METHOD .FdChildren.Add }
HAnimSite149.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment135.FdChildren.Add(HAnimSite149);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimSegment135);
HAnimJoint152 := THAnimJointNode.Create;;
HAnimJoint152.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment153 := THAnimSegmentNode.Create;;
Transform154 := TTransformNode.Create;;
Transform154.Translation := Vector3(0.104,0.4867,0.0308);
Transform155 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform155.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform154.FdChildren.Add(Transform155);
{ METHOD .FdChildren.Add }
HAnimSegment153.FdChildren.Add(Transform154);
Shape157 := TShapeNode.Create;;
LineSet158 := TLineSetNode.Create;;
LineSet158.SetVertexCount([2]);
Coordinate159 := TCoordinateNode.Create;;
Coordinate159.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet158.Coord := Coordinate159;
{ from l_knee to l_talocrural vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet158.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape157.Geometry := LineSet158;
{ METHOD .FdChildren.Add }
HAnimSegment153.FdChildren.Add(Shape157);
end;

procedure InitHumanoid4_1Part12;
begin

HAnimSite161 := THAnimSiteNode.Create;;
HAnimSite161.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor162 := TTouchSensorNode.Create;;
TouchSensor162.Description := 'HAnimSite l_calcaneus_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite161.FdChildren.Add(TouchSensor162);
{ METHOD .FdChildren.Add }
HAnimSite161.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment153.FdChildren.Add(HAnimSite161);
HAnimSite164 := THAnimSiteNode.Create;;
HAnimSite164.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor165 := TTouchSensorNode.Create;;
TouchSensor165.Description := 'HAnimSite l_sphyrion_pt';
{ METHOD .FdChildren.Add }
HAnimSite164.FdChildren.Add(TouchSensor165);
{ METHOD .FdChildren.Add }
HAnimSite164.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment153.FdChildren.Add(HAnimSite164);
{ METHOD .FdChildren.Add }
HAnimJoint152.FdChildren.Add(HAnimSegment153);
HAnimJoint167 := THAnimJointNode.Create;;
HAnimJoint167.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment168 := THAnimSegmentNode.Create;;
Transform169 := TTransformNode.Create;;
Transform169.Scale := Vector3(0.15,0.15,0.15);
Transform169.Translation := Vector3(0.08,0.06,-0.025);
Transform169.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform170 := TTransformNode.Create;;
{ Empty Transform left foot }
{ METHOD .FdChildren.Add }
Transform170.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform169.FdChildren.Add(Transform170);
{ METHOD .FdChildren.Add }
HAnimSegment168.FdChildren.Add(Transform169);
Shape172 := TShapeNode.Create;;
LineSet173 := TLineSetNode.Create;;
LineSet173.SetVertexCount([2]);
Coordinate174 := TCoordinateNode.Create;
end;

procedure InitHumanoid4_1Part13;
begin
;
Coordinate174.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(3.4715,0.0374,0.6807)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet173.Coord := Coordinate174;
{ from l_talocrural to l_talocalcaneonavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet173.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape172.Geometry := LineSet173;
{ METHOD .FdChildren.Add }
HAnimSegment168.FdChildren.Add(Shape172);
Shape176 := TShapeNode.Create;;
LineSet177 := TLineSetNode.Create;;
LineSet177.SetVertexCount([2]);
Coordinate178 := TCoordinateNode.Create;;
Coordinate178.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(3.9515,0.0653,-0.6895)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet177.Coord := Coordinate178;
{ from l_talocrural to l_calcaneocuboid vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet177.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape176.Geometry := LineSet177;
{ METHOD .FdChildren.Add }
HAnimSegment168.FdChildren.Add(Shape176);
{ METHOD .FdChildren.Add }
HAnimJoint167.FdChildren.Add(HAnimSegment168);
HAnimJoint180 := THAnimJointNode.Create;;
HAnimJoint180.Center := Vector3(3.4715,0.0374,0.6807);
HAnimSegment181 := THAnimSegmentNode.Create;;
Transform182 := TTransformNode.Create;;
Transform182.Translation := Vector3(3.4715,0.0374,0.6807);
Transform183 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Transform183);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Transform182);
Shape185 := TShapeNode.Create;;
LineSet186 := TLineSetNode.Create;;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;;
Coordinate187.SetPoint([Vector3(3.4715,0.0374,0.6807),Vector3(2.9855,0.0311,1.2819)]);
end;

procedure InitHumanoid4_1Part14;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet186.Coord := Coordinate187;
{ from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet186.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape185.Geometry := LineSet186;
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Shape185);
Shape189 := TShapeNode.Create;;
LineSet190 := TLineSetNode.Create;;
LineSet190.SetVertexCount([2]);
Coordinate191 := TCoordinateNode.Create;;
Coordinate191.SetPoint([Vector3(3.4715,0.0374,0.6807),Vector3(3.6105,0.033,1.4168)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet190.Coord := Coordinate191;
{ from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet190.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape189.Geometry := LineSet190;
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Shape189);
Shape193 := TShapeNode.Create;;
LineSet194 := TLineSetNode.Create;;
LineSet194.SetVertexCount([2]);
Coordinate195 := TCoordinateNode.Create;;
Coordinate195.SetPoint([Vector3(3.4715,0.0374,0.6807),Vector3(4.1235,0.0328,1.3453)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet194.Coord := Coordinate195;
{ from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet194.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape193.Geometry := LineSet194;
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Shape193);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimSegment181);
HAnimJoint197 := THAnimJointNode.Create;;
HAnimJoint197.Center := Vector3(2.9855,0.0311,1.2819);
HAnimSegment198 := THAnimSegmentNode.Create;;
Transform199 := TTransformNode.Create;;
Transform199.Translation := Vector3(2.9855,0.0311,1.2819);
Transform200 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform200.FdChildren.Add(Shape25);
end;

procedure InitHumanoid4_1Part15;
begin

{ METHOD .FdChildren.Add }
Transform199.FdChildren.Add(Transform200);
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Transform199);
Shape202 := TShapeNode.Create;;
LineSet203 := TLineSetNode.Create;;
LineSet203.SetVertexCount([2]);
Coordinate204 := TCoordinateNode.Create;;
Coordinate204.SetPoint([Vector3(2.9855,0.0311,1.2819),Vector3(2.8635,0.0194,2.4285)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet203.Coord := Coordinate204;
{ from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet203.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape202.Geometry := LineSet203;
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Shape202);
{ METHOD .FdChildren.Add }
HAnimJoint197.FdChildren.Add(HAnimSegment198);
HAnimJoint206 := THAnimJointNode.Create;;
HAnimJoint206.Center := Vector3(2.8635,0.0194,2.4285);
HAnimSegment207 := THAnimSegmentNode.Create;;
Transform208 := TTransformNode.Create;;
Transform208.Translation := Vector3(2.8635,0.0194,2.4285);
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
Coordinate213.SetPoint([Vector3(2.8635,0.0194,2.4285),Vector3(2.7525,0.0077,4.6255)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet212.Coord := Coordinate213;
{ from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet212.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape211.Geometry := LineSet212;
{ METHOD .FdChildren.Add }
HAnimSegment207.FdChildren.Add(Shape211);
end;

procedure InitHumanoid4_1Part16;
begin

HAnimSite215 := THAnimSiteNode.Create;;
TouchSensor216 := TTouchSensorNode.Create;;
TouchSensor216.Description := 'HAnimSite l_metatarsal_phalanx_1_pt';
{ METHOD .FdChildren.Add }
HAnimSite215.FdChildren.Add(TouchSensor216);
{ METHOD .FdChildren.Add }
HAnimSite215.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment207.FdChildren.Add(HAnimSite215);
{ METHOD .FdChildren.Add }
HAnimJoint206.FdChildren.Add(HAnimSegment207);
HAnimJoint218 := THAnimJointNode.Create;;
HAnimJoint218.Center := Vector3(2.7525,0.0077,4.6255);
HAnimSegment219 := THAnimSegmentNode.Create;;
Transform220 := TTransformNode.Create;;
Transform220.Translation := Vector3(2.7525,0.0077,4.6255);
Transform221 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform221.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Transform221);
{ METHOD .FdChildren.Add }
HAnimSegment219.FdChildren.Add(Transform220);
Shape223 := TShapeNode.Create;;
LineSet224 := TLineSetNode.Create;;
LineSet224.SetVertexCount([2]);
Coordinate225 := TCoordinateNode.Create;;
Coordinate225.SetPoint([Vector3(2.7525,0.0077,4.6255),Vector3(2.7525,0.0077,4.6255)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet224.Coord := Coordinate225;
{ from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet224.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape223.Geometry := LineSet224;
{ METHOD .FdChildren.Add }
HAnimSegment219.FdChildren.Add(Shape223);
HAnimSite227 := THAnimSiteNode.Create;;
TouchSensor228 := TTouchSensorNode.Create;;
TouchSensor228.Description := 'HAnimSite l_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite227.FdChildren.Add(TouchSensor228);
end;

procedure InitHumanoid4_1Part17;
begin

{ METHOD .FdChildren.Add }
HAnimSite227.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment219.FdChildren.Add(HAnimSite227);
{ METHOD .FdChildren.Add }
HAnimJoint218.FdChildren.Add(HAnimSegment219);
HAnimJoint230 := THAnimJointNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint218.FdChildren.Add(HAnimJoint230);
{ METHOD .FdChildren.Add }
HAnimJoint206.FdChildren.Add(HAnimJoint218);
{ METHOD .FdChildren.Add }
HAnimJoint197.FdChildren.Add(HAnimJoint206);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimJoint197);
HAnimJoint231 := THAnimJointNode.Create;;
HAnimJoint231.Center := Vector3(3.6105,0.033,1.4168);
HAnimSegment232 := THAnimSegmentNode.Create;;
Transform233 := TTransformNode.Create;;
Transform233.Translation := Vector3(3.6105,0.033,1.4168);
Transform234 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform234.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform233.FdChildren.Add(Transform234);
{ METHOD .FdChildren.Add }
HAnimSegment232.FdChildren.Add(Transform233);
Shape236 := TShapeNode.Create;;
LineSet237 := TLineSetNode.Create;;
LineSet237.SetVertexCount([2]);
Coordinate238 := TCoordinateNode.Create;;
Coordinate238.SetPoint([Vector3(3.6105,0.033,1.4168),Vector3(3.5555,0.0232,2.2895)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet237.Coord := Coordinate238;
{ from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet237.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape236.Geometry := LineSet237;
{ METHOD .FdChildren.Add }
HAnimSegment232.FdChildren.Add(Shape236);
{ METHOD .FdChildren.Add }
HAnimJoint231.FdChildren.Add(HAnimSegment232);
HAnimJoint240 := THAnimJointNode.Create;;
HAnimJoint240.Center := Vector3(3.5555,0.0232,2.2895);
HAnimSegment241 := THAnimSegmentNode.Create;;
end;

procedure InitHumanoid4_1Part18;
begin

Transform242 := TTransformNode.Create;;
Transform242.Translation := Vector3(3.5555,0.0232,2.2895);
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
Coordinate247 := TCoordinateNode.Create;;
Coordinate247.SetPoint([Vector3(3.5555,0.0232,2.2895),Vector3(3.6595,0.0085,4.8125)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet246.Coord := Coordinate247;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
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
HAnimJoint249.Center := Vector3(3.6595,0.0085,4.8125);
HAnimSegment250 := THAnimSegmentNode.Create;;
Transform251 := TTransformNode.Create;;
Transform251.Translation := Vector3(3.6595,0.0085,4.8125);
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
Coordinate256 := TCoordinateNode.Create;
end;

procedure InitHumanoid4_1Part19;
begin
;
Coordinate256.SetPoint([Vector3(3.6595,0.0085,4.8125),Vector3(3.7385,0.0054,5.5315)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet255.Coord := Coordinate256;
{ from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2 }
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
HAnimJoint258.Center := Vector3(3.7385,0.0054,5.5315);
HAnimSegment259 := THAnimSegmentNode.Create;;
Transform260 := TTransformNode.Create;;
Transform260.Translation := Vector3(3.7385,0.0054,5.5315);
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
Coordinate265.SetPoint([Vector3(3.7385,0.0054,5.5315),Vector3(3.7385,0.0017,5.9505)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet264.Coord := Coordinate265;
{ from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet264.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape263.Geometry := LineSet264;
{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(Shape263);
HAnimSite267 := THAnimSiteNode.Create;;
HAnimSite267.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor268 := TTouchSensorNode.Create;;
TouchSensor268.Description := 'HAnimSite l_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite267.FdChildren.Add(TouchSensor268);
{ METHOD .FdChildren.Add }
HAnimSite267.FdChildren.Add(Shape35);
end;

procedure InitHumanoid4_1Part20;
begin

{ METHOD .FdChildren.Add }
HAnimSegment259.FdChildren.Add(HAnimSite267);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimSegment259);
HAnimJoint270 := THAnimJointNode.Create;;
HAnimJoint270.Center := Vector3(3.7385,0.0017,5.9505);
{ METHOD .FdChildren.Add }
HAnimJoint258.FdChildren.Add(HAnimJoint270);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimJoint258);
{ METHOD .FdChildren.Add }
HAnimJoint240.FdChildren.Add(HAnimJoint249);
{ METHOD .FdChildren.Add }
HAnimJoint231.FdChildren.Add(HAnimJoint240);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimJoint231);
HAnimJoint271 := THAnimJointNode.Create;;
HAnimJoint271.Center := Vector3(4.1235,0.0328,1.3453);
HAnimSegment272 := THAnimSegmentNode.Create;;
Transform273 := TTransformNode.Create;;
Transform273.Translation := Vector3(4.1235,0.0328,1.3453);
Transform274 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform274.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform273.FdChildren.Add(Transform274);
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(Transform273);
Shape276 := TShapeNode.Create;;
LineSet277 := TLineSetNode.Create;;
LineSet277.SetVertexCount([2]);
Coordinate278 := TCoordinateNode.Create;;
Coordinate278.SetPoint([Vector3(4.1235,0.0328,1.3453),Vector3(3.7385,0.0017,5.9505)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet277.Coord := Coordinate278;
{ from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet277.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape276.Geometry := LineSet277;
{ METHOD .FdChildren.Add }
HAnimSegment272.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
HAnimJoint271.FdChildren.Add(HAnimSegment272);
HAnimJoint280 := THAnimJointNode.Create;;
HAnimSegment281 := THAnimSegmentNode.Create;;
end;

procedure InitHumanoid4_1Part21;
begin

Transform282 := TTransformNode.Create;;
Transform282.Translation := Vector3(4.1235,0.0328,1.3453);
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
Coordinate287.SetPoint([Vector3(4.2795,0.0086,4.7055)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet286.Coord := Coordinate287;
{ from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1 }
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
HAnimJoint289.Center := Vector3(4.2795,0.0086,4.7055);
HAnimSegment290 := THAnimSegmentNode.Create;;
Transform291 := TTransformNode.Create;;
Transform291.Translation := Vector3(4.2795,0.0086,4.7055);
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
Coordinate296 := TCoordinateNode.Create;
end;

procedure InitHumanoid4_1Part22;
begin
;
Coordinate296.SetPoint([Vector3(4.2795,0.0086,4.7055),Vector3(4.3855,0.0044,5.3745)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet295.Coord := Coordinate296;
{ from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2 }
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
HAnimJoint298.Center := Vector3(4.3855,0.0044,5.3745);
HAnimSegment299 := THAnimSegmentNode.Create;;
Transform300 := TTransformNode.Create;;
Transform300.Translation := Vector3(4.3855,0.0044,5.3745);
Transform301 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform301.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform300.FdChildren.Add(Transform301);
{ METHOD .FdChildren.Add }
HAnimSegment299.FdChildren.Add(Transform300);
Shape303 := TShapeNode.Create;;
LineSet304 := TLineSetNode.Create;;
LineSet304.SetVertexCount([2]);
Coordinate305 := TCoordinateNode.Create;;
Coordinate305.SetPoint([Vector3(4.3855,0.0044,5.3745),Vector3(4.4545,0.0017,5.7845)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet304.Coord := Coordinate305;
{ from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet304.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape303.Geometry := LineSet304;
{ METHOD .FdChildren.Add }
HAnimSegment299.FdChildren.Add(Shape303);
HAnimSite307 := THAnimSiteNode.Create;;
TouchSensor308 := TTouchSensorNode.Create;;
TouchSensor308.Description := 'HAnimSite l_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite307.FdChildren.Add(TouchSensor308);
{ METHOD .FdChildren.Add }
HAnimSite307.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment299.FdChildren.Add(HAnimSite307);
end;

procedure InitHumanoid4_1Part23;
begin

{ METHOD .FdChildren.Add }
HAnimJoint298.FdChildren.Add(HAnimSegment299);
HAnimJoint310 := THAnimJointNode.Create;;
HAnimJoint310.Center := Vector3(4.4545,0.0017,5.7845);
{ METHOD .FdChildren.Add }
HAnimJoint298.FdChildren.Add(HAnimJoint310);
{ METHOD .FdChildren.Add }
HAnimJoint289.FdChildren.Add(HAnimJoint298);
{ METHOD .FdChildren.Add }
HAnimJoint280.FdChildren.Add(HAnimJoint289);
{ METHOD .FdChildren.Add }
HAnimJoint271.FdChildren.Add(HAnimJoint280);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimJoint271);
{ METHOD .FdChildren.Add }
HAnimJoint167.FdChildren.Add(HAnimJoint180);
HAnimJoint311 := THAnimJointNode.Create;;
HAnimJoint311.Center := Vector3(3.9515,0.0653,-0.6895);
HAnimSegment312 := THAnimSegmentNode.Create;;
Transform313 := TTransformNode.Create;;
Transform313.Translation := Vector3(3.9515,0.0653,-0.6895);
Transform314 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform314.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform313.FdChildren.Add(Transform314);
{ METHOD .FdChildren.Add }
HAnimSegment312.FdChildren.Add(Transform313);
Shape316 := TShapeNode.Create;;
LineSet317 := TLineSetNode.Create;;
LineSet317.SetVertexCount([2]);
Coordinate318 := TCoordinateNode.Create;;
Coordinate318.SetPoint([Vector3(3.9515,0.0653,-0.6895),Vector3(4.9085,0.0353,0.5574)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet317.Coord := Coordinate318;
{ from l_calcaneocuboid to l_transversetarsal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet317.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape316.Geometry := LineSet317;
{ METHOD .FdChildren.Add }
HAnimSegment312.FdChildren.Add(Shape316);
{ METHOD .FdChildren.Add }
HAnimJoint311.FdChildren.Add(HAnimSegment312);
HAnimJoint320 := THAnimJointNode.Create;;
HAnimJoint320.Center := Vector3(4.9085,0.0353,0.5574);
HAnimSegment321 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid4_1Part24;
begin
;
Transform322 := TTransformNode.Create;;
Transform322.Translation := Vector3(4.9085,0.0353,0.5574);
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
Coordinate327.SetPoint([Vector3(4.9085,0.0353,0.5574),Vector3(4.7245,0.0211,2.1725)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet326.Coord := Coordinate327;
{ from l_transversetarsal to l_tarsometatarsal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet326.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape325.Geometry := LineSet326;
{ METHOD .FdChildren.Add }
HAnimSegment321.FdChildren.Add(Shape325);
Shape329 := TShapeNode.Create;;
LineSet330 := TLineSetNode.Create;;
LineSet330.SetVertexCount([2]);
Coordinate331 := TCoordinateNode.Create;;
Coordinate331.SetPoint([Vector3(4.9085,0.0353,0.5574),Vector3(5.3615,0.0164,2.0085)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet330.Coord := Coordinate331;
{ from l_transversetarsal to l_tarsometatarsal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet330.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape329.Geometry := LineSet330;
{ METHOD .FdChildren.Add }
HAnimSegment321.FdChildren.Add(Shape329);
{ METHOD .FdChildren.Add }
HAnimJoint320.FdChildren.Add(HAnimSegment321);
HAnimJoint333 := THAnimJointNode.Create;;
HAnimJoint333.Center := Vector3(4.7245,0.0211,2.1725);
HAnimSegment334 := THAnimSegmentNode.Create;;
Transform335 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part25;
begin
;
Transform335.Translation := Vector3(4.7245,0.0211,2.1725);
Transform336 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform336.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform335.FdChildren.Add(Transform336);
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Transform335);
Shape338 := TShapeNode.Create;;
LineSet339 := TLineSetNode.Create;;
LineSet339.SetVertexCount([2]);
Coordinate340 := TCoordinateNode.Create;;
Coordinate340.SetPoint([Vector3(4.7245,0.0211,2.1725),Vector3(4.8745,0.0076,4.5165)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet339.Coord := Coordinate340;
{ from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet339.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape338.Geometry := LineSet339;
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Shape338);
{ METHOD .FdChildren.Add }
HAnimJoint333.FdChildren.Add(HAnimSegment334);
HAnimJoint342 := THAnimJointNode.Create;;
HAnimJoint342.Center := Vector3(4.8745,0.0076,4.5165);
HAnimSegment343 := THAnimSegmentNode.Create;;
Transform344 := TTransformNode.Create;;
Transform344.Translation := Vector3(4.8745,0.0076,4.5165);
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
end;

procedure InitHumanoid4_1Part26;
begin

Coordinate349.SetPoint([Vector3(4.8745,0.0076,4.5165),Vector3(5.0655,0.0049,5.1895)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet348.Coord := Coordinate349;
{ from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2 }
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
HAnimJoint351.Center := Vector3(5.0655,0.0049,5.1895);
HAnimSegment352 := THAnimSegmentNode.Create;;
Transform353 := TTransformNode.Create;;
Transform353.Translation := Vector3(5.0655,0.0049,5.1895);
Transform354 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform354.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform353.FdChildren.Add(Transform354);
{ METHOD .FdChildren.Add }
HAnimSegment352.FdChildren.Add(Transform353);
Shape356 := TShapeNode.Create;;
LineSet357 := TLineSetNode.Create;;
LineSet357.SetVertexCount([2]);
Coordinate358 := TCoordinateNode.Create;;
Coordinate358.SetPoint([Vector3(5.0655,0.0049,5.1895),Vector3(5.1325,0.0011,5.5175)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet357.Coord := Coordinate358;
{ from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet357.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape356.Geometry := LineSet357;
{ METHOD .FdChildren.Add }
HAnimSegment352.FdChildren.Add(Shape356);
HAnimSite360 := THAnimSiteNode.Create;;
TouchSensor361 := TTouchSensorNode.Create;;
TouchSensor361.Description := 'HAnimSite l_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite360.FdChildren.Add(TouchSensor361);
{ METHOD .FdChildren.Add }
HAnimSite360.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment352.FdChildren.Add(HAnimSite360);
{ METHOD .FdChildren.Add }
HAnimJoint351.FdChildren.Add(HAnimSegment352);
end;

procedure InitHumanoid4_1Part27;
begin

HAnimJoint363 := THAnimJointNode.Create;;
HAnimJoint363.Center := Vector3(5.1325,0.0011,5.5175);
{ METHOD .FdChildren.Add }
HAnimJoint351.FdChildren.Add(HAnimJoint363);
{ METHOD .FdChildren.Add }
HAnimJoint342.FdChildren.Add(HAnimJoint351);
{ METHOD .FdChildren.Add }
HAnimJoint333.FdChildren.Add(HAnimJoint342);
{ METHOD .FdChildren.Add }
HAnimJoint320.FdChildren.Add(HAnimJoint333);
HAnimJoint364 := THAnimJointNode.Create;;
HAnimJoint364.Center := Vector3(5.3615,0.0164,2.0085);
HAnimSegment365 := THAnimSegmentNode.Create;;
Transform366 := TTransformNode.Create;;
Transform366.Translation := Vector3(5.3615,0.0164,2.0085);
Transform367 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform367.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform366.FdChildren.Add(Transform367);
{ METHOD .FdChildren.Add }
HAnimSegment365.FdChildren.Add(Transform366);
Shape369 := TShapeNode.Create;;
LineSet370 := TLineSetNode.Create;;
LineSet370.SetVertexCount([2]);
Coordinate371 := TCoordinateNode.Create;;
Coordinate371.SetPoint([Vector3(5.3615,0.0164,2.0085),Vector3(5.5055,0.0067,4.3115)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet370.Coord := Coordinate371;
{ from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet370.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape369.Geometry := LineSet370;
{ METHOD .FdChildren.Add }
HAnimSegment365.FdChildren.Add(Shape369);
HAnimSite373 := THAnimSiteNode.Create;;
TouchSensor374 := TTouchSensorNode.Create;;
TouchSensor374.Description := 'HAnimSite l_metatarsal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite373.FdChildren.Add(TouchSensor374);
{ METHOD .FdChildren.Add }
HAnimSite373.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment365.FdChildren.Add(HAnimSite373);
end;

procedure InitHumanoid4_1Part28;
begin

{ METHOD .FdChildren.Add }
HAnimJoint364.FdChildren.Add(HAnimSegment365);
HAnimJoint376 := THAnimJointNode.Create;;
HAnimJoint376.Center := Vector3(5.5055,0.0067,4.3115);
HAnimSegment377 := THAnimSegmentNode.Create;;
Transform378 := TTransformNode.Create;;
Transform378.Translation := Vector3(5.5055,0.0067,4.3115);
Transform379 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform379.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform378.FdChildren.Add(Transform379);
{ METHOD .FdChildren.Add }
HAnimSegment377.FdChildren.Add(Transform378);
Shape381 := TShapeNode.Create;;
LineSet382 := TLineSetNode.Create;;
LineSet382.SetVertexCount([2]);
Coordinate383 := TCoordinateNode.Create;;
Coordinate383.SetPoint([Vector3(5.5055,0.0067,4.3115),Vector3(5.6085,0.003,4.6485)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet382.Coord := Coordinate383;
{ from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet382.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape381.Geometry := LineSet382;
{ METHOD .FdChildren.Add }
HAnimSegment377.FdChildren.Add(Shape381);
{ METHOD .FdChildren.Add }
HAnimJoint376.FdChildren.Add(HAnimSegment377);
HAnimJoint385 := THAnimJointNode.Create;;
HAnimJoint385.Center := Vector3(5.6085,0.003,4.6485);
HAnimSegment386 := THAnimSegmentNode.Create;;
Transform387 := TTransformNode.Create;;
Transform387.Translation := Vector3(5.6085,0.003,4.6485);
Transform388 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform388.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform387.FdChildren.Add(Transform388);
{ METHOD .FdChildren.Add }
HAnimSegment386.FdChildren.Add(Transform387);
end;

procedure InitHumanoid4_1Part29;
begin

Shape390 := TShapeNode.Create;;
LineSet391 := TLineSetNode.Create;;
LineSet391.SetVertexCount([2]);
Coordinate392 := TCoordinateNode.Create;;
Coordinate392.SetPoint([Vector3(5.6085,0.003,4.6485),Vector3(5.6485,0,4.9925)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet391.Coord := Coordinate392;
{ from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet391.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape390.Geometry := LineSet391;
{ METHOD .FdChildren.Add }
HAnimSegment386.FdChildren.Add(Shape390);
HAnimSite394 := THAnimSiteNode.Create;;
TouchSensor395 := TTouchSensorNode.Create;;
TouchSensor395.Description := 'HAnimSite l_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite394.FdChildren.Add(TouchSensor395);
{ METHOD .FdChildren.Add }
HAnimSite394.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment386.FdChildren.Add(HAnimSite394);
{ METHOD .FdChildren.Add }
HAnimJoint385.FdChildren.Add(HAnimSegment386);
HAnimJoint397 := THAnimJointNode.Create;;
HAnimJoint397.Center := Vector3(5.6485,0,4.9925);
{ METHOD .FdChildren.Add }
HAnimJoint385.FdChildren.Add(HAnimJoint397);
{ METHOD .FdChildren.Add }
HAnimJoint376.FdChildren.Add(HAnimJoint385);
{ METHOD .FdChildren.Add }
HAnimJoint364.FdChildren.Add(HAnimJoint376);
{ METHOD .FdChildren.Add }
HAnimJoint320.FdChildren.Add(HAnimJoint364);
{ METHOD .FdChildren.Add }
HAnimJoint311.FdChildren.Add(HAnimJoint320);
{ METHOD .FdChildren.Add }
HAnimJoint167.FdChildren.Add(HAnimJoint311);
{ METHOD .FdChildren.Add }
HAnimJoint152.FdChildren.Add(HAnimJoint167);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint152);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimJoint134);
HAnimJoint398 := THAnimJointNode.Create;;
HAnimJoint398.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment399 := THAnimSegmentNode.Create;;
Transform400 := TTransformNode.Create;;
end;

procedure InitHumanoid4_1Part30;
begin

Transform400.Translation := Vector3(-0.095,0.9171,0.0029);
Transform401 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform401.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform400.FdChildren.Add(Transform401);
{ METHOD .FdChildren.Add }
HAnimSegment399.FdChildren.Add(Transform400);
Shape403 := TShapeNode.Create;;
LineSet404 := TLineSetNode.Create;;
LineSet404.SetVertexCount([2]);
Coordinate405 := TCoordinateNode.Create;;
Coordinate405.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet404.Coord := Coordinate405;
{ from r_hip to r_knee vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet404.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape403.Geometry := LineSet404;
{ METHOD .FdChildren.Add }
HAnimSegment399.FdChildren.Add(Shape403);
HAnimSite407 := THAnimSiteNode.Create;;
HAnimSite407.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor408 := TTouchSensorNode.Create;;
TouchSensor408.Description := 'HAnimSite r_lateral_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite407.FdChildren.Add(TouchSensor408);
{ METHOD .FdChildren.Add }
HAnimSite407.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment399.FdChildren.Add(HAnimSite407);
HAnimSite410 := THAnimSiteNode.Create;;
HAnimSite410.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor411 := TTouchSensorNode.Create;;
TouchSensor411.Description := 'HAnimSite r_medial_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite410.FdChildren.Add(TouchSensor411);
{ METHOD .FdChildren.Add }
HAnimSite410.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment399.FdChildren.Add(HAnimSite410);
HAnimSite413 := THAnimSiteNode.Create;;
TouchSensor414 := TTouchSensorNode.Create;;
end;

procedure InitHumanoid4_1Part31;
begin

TouchSensor414.Description := 'HAnimSite r_tibiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite413.FdChildren.Add(TouchSensor414);
{ METHOD .FdChildren.Add }
HAnimSite413.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment399.FdChildren.Add(HAnimSite413);
{ METHOD .FdChildren.Add }
HAnimJoint398.FdChildren.Add(HAnimSegment399);
HAnimJoint416 := THAnimJointNode.Create;;
HAnimJoint416.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment417 := THAnimSegmentNode.Create;;
Transform418 := TTransformNode.Create;;
Transform418.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform419 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform419.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform418.FdChildren.Add(Transform419);
{ METHOD .FdChildren.Add }
HAnimSegment417.FdChildren.Add(Transform418);
Shape421 := TShapeNode.Create;;
LineSet422 := TLineSetNode.Create;;
LineSet422.SetVertexCount([2]);
Coordinate423 := TCoordinateNode.Create;;
Coordinate423.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet422.Coord := Coordinate423;
{ from r_knee to r_talocrural vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet422.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape421.Geometry := LineSet422;
{ METHOD .FdChildren.Add }
HAnimSegment417.FdChildren.Add(Shape421);
HAnimSite425 := THAnimSiteNode.Create;;
HAnimSite425.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor426 := TTouchSensorNode.Create;;
TouchSensor426.Description := 'HAnimSite r_calcaneus_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite425.FdChildren.Add(TouchSensor426);
{ METHOD .FdChildren.Add }
HAnimSite425.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment417.FdChildren.Add(HAnimSite425);
HAnimSite428 := THAnimSiteNode.Create;
end;

procedure InitHumanoid4_1Part32;
begin
;
HAnimSite428.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor429 := TTouchSensorNode.Create;;
TouchSensor429.Description := 'HAnimSite r_sphyrion_pt';
{ METHOD .FdChildren.Add }
HAnimSite428.FdChildren.Add(TouchSensor429);
{ METHOD .FdChildren.Add }
HAnimSite428.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment417.FdChildren.Add(HAnimSite428);
{ METHOD .FdChildren.Add }
HAnimJoint416.FdChildren.Add(HAnimSegment417);
HAnimJoint431 := THAnimJointNode.Create;;
HAnimJoint431.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment432 := THAnimSegmentNode.Create;;
Transform433 := TTransformNode.Create;;
Transform433.Scale := Vector3(0.15,0.15,0.15);
Transform433.Translation := Vector3(-0.05,0.06,-0.025);
Transform433.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform434 := TTransformNode.Create;;
{ Empty Transform right foot }
{ METHOD .FdChildren.Add }
Transform434.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform433.FdChildren.Add(Transform434);
{ METHOD .FdChildren.Add }
HAnimSegment432.FdChildren.Add(Transform433);
Shape436 := TShapeNode.Create;;
LineSet437 := TLineSetNode.Create;;
LineSet437.SetVertexCount([2]);
Coordinate438 := TCoordinateNode.Create;;
Coordinate438.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-3.4725,0.0374,0.6807)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet437.Coord := Coordinate438;
{ from r_talocrural to r_talocalcaneonavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet437.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape436.Geometry := LineSet437;
{ METHOD .FdChildren.Add }
HAnimSegment432.FdChildren.Add(Shape436);
Shape440 := TShapeNode.Create;;
LineSet441 := TLineSetNode.Create;;
end;

procedure InitHumanoid4_1Part33;
begin

LineSet441.SetVertexCount([2]);
Coordinate442 := TCoordinateNode.Create;;
Coordinate442.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-3.9515,0.0653,-0.6895)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet441.Coord := Coordinate442;
{ from r_talocrural to r_calcaneocuboid vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet441.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape440.Geometry := LineSet441;
{ METHOD .FdChildren.Add }
HAnimSegment432.FdChildren.Add(Shape440);
{ METHOD .FdChildren.Add }
HAnimJoint431.FdChildren.Add(HAnimSegment432);
HAnimJoint444 := THAnimJointNode.Create;;
HAnimJoint444.Center := Vector3(-3.4725,0.0374,0.6807);
HAnimSegment445 := THAnimSegmentNode.Create;;
Transform446 := TTransformNode.Create;;
Transform446.Translation := Vector3(-3.4725,0.0374,0.6807);
Transform447 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform447.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform446.FdChildren.Add(Transform447);
{ METHOD .FdChildren.Add }
HAnimSegment445.FdChildren.Add(Transform446);
Shape449 := TShapeNode.Create;;
LineSet450 := TLineSetNode.Create;;
LineSet450.SetVertexCount([2]);
Coordinate451 := TCoordinateNode.Create;;
Coordinate451.SetPoint([Vector3(-3.4725,0.0374,0.6807),Vector3(-2.9855,0.0311,1.2819)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet450.Coord := Coordinate451;
{ from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet450.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape449.Geometry := LineSet450;
{ METHOD .FdChildren.Add }
HAnimSegment445.FdChildren.Add(Shape449);
Shape453 := TShapeNode.Create;;
LineSet454 := TLineSetNode.Create;;
LineSet454.SetVertexCount([2]);
Coordinate455 := TCoordinateNode.Create;
end;

procedure InitHumanoid4_1Part34;
begin
;
Coordinate455.SetPoint([Vector3(-3.4725,0.0374,0.6807),Vector3(-3.6105,0.033,1.4168)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet454.Coord := Coordinate455;
{ from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet454.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape453.Geometry := LineSet454;
{ METHOD .FdChildren.Add }
HAnimSegment445.FdChildren.Add(Shape453);
Shape457 := TShapeNode.Create;;
LineSet458 := TLineSetNode.Create;;
LineSet458.SetVertexCount([2]);
Coordinate459 := TCoordinateNode.Create;;
Coordinate459.SetPoint([Vector3(-3.4725,0.0374,0.6807),Vector3(-4.1245,0.0328,1.3453)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet458.Coord := Coordinate459;
{ from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet458.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape457.Geometry := LineSet458;
{ METHOD .FdChildren.Add }
HAnimSegment445.FdChildren.Add(Shape457);
{ METHOD .FdChildren.Add }
HAnimJoint444.FdChildren.Add(HAnimSegment445);
HAnimJoint461 := THAnimJointNode.Create;;
HAnimJoint461.Center := Vector3(-2.9855,0.0311,1.2819);
HAnimSegment462 := THAnimSegmentNode.Create;;
Transform463 := TTransformNode.Create;;
Transform463.Translation := Vector3(-2.9855,0.0311,1.2819);
Transform464 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform464.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform463.FdChildren.Add(Transform464);
{ METHOD .FdChildren.Add }
HAnimSegment462.FdChildren.Add(Transform463);
Shape466 := TShapeNode.Create;;
LineSet467 := TLineSetNode.Create;;
LineSet467.SetVertexCount([2]);
Coordinate468 := TCoordinateNode.Create;;
Coordinate468.SetPoint([Vector3(-2.9855,0.0311,1.2819),Vector3(-2.8645,0.0194,2.4285)]);
end;

procedure InitHumanoid4_1Part35;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet467.Coord := Coordinate468;
{ from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet467.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape466.Geometry := LineSet467;
{ METHOD .FdChildren.Add }
HAnimSegment462.FdChildren.Add(Shape466);
{ METHOD .FdChildren.Add }
HAnimJoint461.FdChildren.Add(HAnimSegment462);
HAnimJoint470 := THAnimJointNode.Create;;
HAnimJoint470.Center := Vector3(-2.8645,0.0194,2.4285);
HAnimSegment471 := THAnimSegmentNode.Create;;
Transform472 := TTransformNode.Create;;
Transform472.Translation := Vector3(-2.8645,0.0194,2.4285);
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
Coordinate477.SetPoint([Vector3(-2.8645,0.0194,2.4285),Vector3(-2.7535,0.0077,4.6255)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet476.Coord := Coordinate477;
{ from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet476.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape475.Geometry := LineSet476;
{ METHOD .FdChildren.Add }
HAnimSegment471.FdChildren.Add(Shape475);
HAnimSite479 := THAnimSiteNode.Create;;
TouchSensor480 := TTouchSensorNode.Create;;
TouchSensor480.Description := 'HAnimSite r_metatarsal_phalanx_1_pt';
{ METHOD .FdChildren.Add }
HAnimSite479.FdChildren.Add(TouchSensor480);
{ METHOD .FdChildren.Add }
HAnimSite479.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment471.FdChildren.Add(HAnimSite479);
{ METHOD .FdChildren.Add }
HAnimJoint470.FdChildren.Add(HAnimSegment471);
HAnimJoint482 := THAnimJointNode.Create;
end;

procedure InitHumanoid4_1Part36;
begin
;
HAnimJoint482.Center := Vector3(-2.7535,0.0077,4.6255);
HAnimSegment483 := THAnimSegmentNode.Create;;
Transform484 := TTransformNode.Create;;
Transform484.Translation := Vector3(-2.7535,0.0077,4.6255);
Transform485 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform485.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform484.FdChildren.Add(Transform485);
{ METHOD .FdChildren.Add }
HAnimSegment483.FdChildren.Add(Transform484);
Shape487 := TShapeNode.Create;;
LineSet488 := TLineSetNode.Create;;
LineSet488.SetVertexCount([2]);
Coordinate489 := TCoordinateNode.Create;;
Coordinate489.SetPoint([Vector3(-2.7535,0.0077,4.6255),Vector3(-2.7535,0.0077,4.6255)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet488.Coord := Coordinate489;
{ from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet488.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape487.Geometry := LineSet488;
{ METHOD .FdChildren.Add }
HAnimSegment483.FdChildren.Add(Shape487);
HAnimSite491 := THAnimSiteNode.Create;;
TouchSensor492 := TTouchSensorNode.Create;;
TouchSensor492.Description := 'HAnimSite r_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite491.FdChildren.Add(TouchSensor492);
{ METHOD .FdChildren.Add }
HAnimSite491.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment483.FdChildren.Add(HAnimSite491);
{ METHOD .FdChildren.Add }
HAnimJoint482.FdChildren.Add(HAnimSegment483);
HAnimJoint494 := THAnimJointNode.Create;;
{ METHOD .FdChildren.Add }
HAnimJoint482.FdChildren.Add(HAnimJoint494);
{ METHOD .FdChildren.Add }
HAnimJoint470.FdChildren.Add(HAnimJoint482);
{ METHOD .FdChildren.Add }
HAnimJoint461.FdChildren.Add(HAnimJoint470);
{ METHOD .FdChildren.Add }
HAnimJoint444.FdChildren.Add(HAnimJoint461);
HAnimJoint495 := THAnimJointNode.Create;
end;

procedure InitHumanoid4_1Part37;
begin
;
HAnimJoint495.Center := Vector3(-3.6105,0.033,1.4168);
HAnimSegment496 := THAnimSegmentNode.Create;;
Transform497 := TTransformNode.Create;;
Transform497.Translation := Vector3(-3.6105,0.033,1.4168);
Transform498 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform498.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform497.FdChildren.Add(Transform498);
{ METHOD .FdChildren.Add }
HAnimSegment496.FdChildren.Add(Transform497);
Shape500 := TShapeNode.Create;;
LineSet501 := TLineSetNode.Create;;
LineSet501.SetVertexCount([2]);
Coordinate502 := TCoordinateNode.Create;;
Coordinate502.SetPoint([Vector3(-3.6105,0.033,1.4168),Vector3(-3.5565,0.0232,2.2895)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet501.Coord := Coordinate502;
{ from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet501.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape500.Geometry := LineSet501;
{ METHOD .FdChildren.Add }
HAnimSegment496.FdChildren.Add(Shape500);
{ METHOD .FdChildren.Add }
HAnimJoint495.FdChildren.Add(HAnimSegment496);
HAnimJoint504 := THAnimJointNode.Create;;
HAnimJoint504.Center := Vector3(-3.5565,0.0232,2.2895);
HAnimSegment505 := THAnimSegmentNode.Create;;
Transform506 := TTransformNode.Create;;
Transform506.Translation := Vector3(-3.5565,0.0232,2.2895);
Transform507 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform507.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform506.FdChildren.Add(Transform507);
{ METHOD .FdChildren.Add }
HAnimSegment505.FdChildren.Add(Transform506);
Shape509 := TShapeNode.Create;;
end;

procedure InitHumanoid4_1Part38;
begin

LineSet510 := TLineSetNode.Create;;
LineSet510.SetVertexCount([2]);
Coordinate511 := TCoordinateNode.Create;;
Coordinate511.SetPoint([Vector3(-3.5565,0.0232,2.2895),Vector3(-3.6595,0.0085,4.8125)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet510.Coord := Coordinate511;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
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
HAnimJoint513.Center := Vector3(-3.6595,0.0085,4.8125);
HAnimSegment514 := THAnimSegmentNode.Create;;
Transform515 := TTransformNode.Create;;
Transform515.Translation := Vector3(-3.6595,0.0085,4.8125);
Transform516 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform516.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform515.FdChildren.Add(Transform516);
{ METHOD .FdChildren.Add }
HAnimSegment514.FdChildren.Add(Transform515);
Shape518 := TShapeNode.Create;;
LineSet519 := TLineSetNode.Create;;
LineSet519.SetVertexCount([2]);
Coordinate520 := TCoordinateNode.Create;;
Coordinate520.SetPoint([Vector3(-3.6595,0.0085,4.8125),Vector3(-3.7385,0.0054,5.5315)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet519.Coord := Coordinate520;
{ from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2 }
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
HAnimJoint522.Center := Vector3(-3.7385,0.0054,5.5315);
end;

procedure InitHumanoid4_1Part39;
begin

HAnimSegment523 := THAnimSegmentNode.Create;;
Transform524 := TTransformNode.Create;;
Transform524.Translation := Vector3(-3.7385,0.0054,5.5315);
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
Coordinate529.SetPoint([Vector3(-3.7385,0.0054,5.5315),Vector3(-3.7385,0.0017,5.9505)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet528.Coord := Coordinate529;
{ from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet528.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape527.Geometry := LineSet528;
{ METHOD .FdChildren.Add }
HAnimSegment523.FdChildren.Add(Shape527);
HAnimSite531 := THAnimSiteNode.Create;;
HAnimSite531.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor532 := TTouchSensorNode.Create;;
TouchSensor532.Description := 'HAnimSite r_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite531.FdChildren.Add(TouchSensor532);
{ METHOD .FdChildren.Add }
HAnimSite531.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment523.FdChildren.Add(HAnimSite531);
{ METHOD .FdChildren.Add }
HAnimJoint522.FdChildren.Add(HAnimSegment523);
HAnimJoint534 := THAnimJointNode.Create;;
HAnimJoint534.Center := Vector3(-3.7385,0.0017,5.9505);
{ METHOD .FdChildren.Add }
HAnimJoint522.FdChildren.Add(HAnimJoint534);
{ METHOD .FdChildren.Add }
HAnimJoint513.FdChildren.Add(HAnimJoint522);
{ METHOD .FdChildren.Add }
HAnimJoint504.FdChildren.Add(HAnimJoint513);
{ METHOD .FdChildren.Add }
HAnimJoint495.FdChildren.Add(HAnimJoint504);
{ METHOD .FdChildren.Add }
HAnimJoint444.FdChildren.Add(HAnimJoint495);
end;

procedure InitHumanoid4_1Part40;
begin

HAnimJoint535 := THAnimJointNode.Create;;
HAnimJoint535.Center := Vector3(-4.1245,0.0328,1.3453);
HAnimSegment536 := THAnimSegmentNode.Create;;
Transform537 := TTransformNode.Create;;
Transform537.Translation := Vector3(-4.1245,0.0328,1.3453);
Transform538 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform538.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform537.FdChildren.Add(Transform538);
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(Transform537);
Shape540 := TShapeNode.Create;;
LineSet541 := TLineSetNode.Create;;
LineSet541.SetVertexCount([2]);
Coordinate542 := TCoordinateNode.Create;;
Coordinate542.SetPoint([Vector3(-4.1245,0.0328,1.3453),Vector3(-3.7385,0.0017,5.9505)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet541.Coord := Coordinate542;
{ from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet541.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape540.Geometry := LineSet541;
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(Shape540);
{ METHOD .FdChildren.Add }
HAnimJoint535.FdChildren.Add(HAnimSegment536);
HAnimJoint544 := THAnimJointNode.Create;;
HAnimSegment545 := THAnimSegmentNode.Create;;
Transform546 := TTransformNode.Create;;
Transform546.Translation := Vector3(-4.1245,0.0328,1.3453);
Transform547 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform547.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform546.FdChildren.Add(Transform547);
{ METHOD .FdChildren.Add }
HAnimSegment545.FdChildren.Add(Transform546);
Shape549 := TShapeNode.Create;;
end;

procedure InitHumanoid4_1Part41;
begin

LineSet550 := TLineSetNode.Create;;
LineSet550.SetVertexCount([2]);
Coordinate551 := TCoordinateNode.Create;;
Coordinate551.SetPoint([Vector3(-4.2795,0.0086,4.7055)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet550.Coord := Coordinate551;
{ from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1 }
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
HAnimJoint553.Center := Vector3(-4.2795,0.0086,4.7055);
HAnimSegment554 := THAnimSegmentNode.Create;;
Transform555 := TTransformNode.Create;;
Transform555.Translation := Vector3(-4.2795,0.0086,4.7055);
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
Coordinate560 := TCoordinateNode.Create;;
Coordinate560.SetPoint([Vector3(-4.2795,0.0086,4.7055),Vector3(-4.3865,0.0044,5.3745)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet559.Coord := Coordinate560;
{ from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2 }
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
HAnimJoint562.Center := Vector3(-4.3865,0.0044,5.3745);
end;

procedure InitHumanoid4_1Part42;
begin

HAnimSegment563 := THAnimSegmentNode.Create;;
Transform564 := TTransformNode.Create;;
Transform564.Translation := Vector3(-4.3865,0.0044,5.3745);
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
Coordinate569.SetPoint([Vector3(-4.3865,0.0044,5.3745),Vector3(-4.4545,0.0017,5.7845)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet568.Coord := Coordinate569;
{ from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet568.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape567.Geometry := LineSet568;
{ METHOD .FdChildren.Add }
HAnimSegment563.FdChildren.Add(Shape567);
HAnimSite571 := THAnimSiteNode.Create;;
TouchSensor572 := TTouchSensorNode.Create;;
TouchSensor572.Description := 'HAnimSite r_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite571.FdChildren.Add(TouchSensor572);
{ METHOD .FdChildren.Add }
HAnimSite571.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment563.FdChildren.Add(HAnimSite571);
{ METHOD .FdChildren.Add }
HAnimJoint562.FdChildren.Add(HAnimSegment563);
HAnimJoint574 := THAnimJointNode.Create;;
HAnimJoint574.Center := Vector3(-4.4545,0.0017,5.7845);
{ METHOD .FdChildren.Add }
HAnimJoint562.FdChildren.Add(HAnimJoint574);
{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimJoint562);
{ METHOD .FdChildren.Add }
HAnimJoint544.FdChildren.Add(HAnimJoint553);
{ METHOD .FdChildren.Add }
HAnimJoint535.FdChildren.Add(HAnimJoint544);
{ METHOD .FdChildren.Add }
HAnimJoint444.FdChildren.Add(HAnimJoint535);
{ METHOD .FdChildren.Add }
HAnimJoint431.FdChildren.Add(HAnimJoint444);
end;

procedure InitHumanoid4_1Part43;
begin

HAnimJoint575 := THAnimJointNode.Create;;
HAnimJoint575.Center := Vector3(-3.9515,0.0653,-0.6895);
HAnimSegment576 := THAnimSegmentNode.Create;;
Transform577 := TTransformNode.Create;;
Transform577.Translation := Vector3(-3.9515,0.0653,-0.6895);
Transform578 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform578.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform577.FdChildren.Add(Transform578);
{ METHOD .FdChildren.Add }
HAnimSegment576.FdChildren.Add(Transform577);
Shape580 := TShapeNode.Create;;
LineSet581 := TLineSetNode.Create;;
LineSet581.SetVertexCount([2]);
Coordinate582 := TCoordinateNode.Create;;
Coordinate582.SetPoint([Vector3(-3.9515,0.0653,-0.6895),Vector3(-4.9095,0.0353,0.5574)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet581.Coord := Coordinate582;
{ from r_calcaneocuboid to r_transversetarsal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet581.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape580.Geometry := LineSet581;
{ METHOD .FdChildren.Add }
HAnimSegment576.FdChildren.Add(Shape580);
{ METHOD .FdChildren.Add }
HAnimJoint575.FdChildren.Add(HAnimSegment576);
HAnimJoint584 := THAnimJointNode.Create;;
HAnimJoint584.Center := Vector3(-4.9095,0.0353,0.5574);
HAnimSegment585 := THAnimSegmentNode.Create;;
Transform586 := TTransformNode.Create;;
Transform586.Translation := Vector3(-4.9095,0.0353,0.5574);
Transform587 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform587.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform586.FdChildren.Add(Transform587);
{ METHOD .FdChildren.Add }
HAnimSegment585.FdChildren.Add(Transform586);
Shape589 := TShapeNode.Create;
end;

procedure InitHumanoid4_1Part44;
begin
;
LineSet590 := TLineSetNode.Create;;
LineSet590.SetVertexCount([2]);
Coordinate591 := TCoordinateNode.Create;;
Coordinate591.SetPoint([Vector3(-4.9095,0.0353,0.5574),Vector3(-4.7255,0.0211,2.1725)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet590.Coord := Coordinate591;
{ from r_transversetarsal to r_tarsometatarsal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet590.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape589.Geometry := LineSet590;
{ METHOD .FdChildren.Add }
HAnimSegment585.FdChildren.Add(Shape589);
Shape593 := TShapeNode.Create;;
LineSet594 := TLineSetNode.Create;;
LineSet594.SetVertexCount([2]);
Coordinate595 := TCoordinateNode.Create;;
Coordinate595.SetPoint([Vector3(-4.9095,0.0353,0.5574),Vector3(-5.3615,0.0164,2.0085)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet594.Coord := Coordinate595;
{ from r_transversetarsal to r_tarsometatarsal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet594.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape593.Geometry := LineSet594;
{ METHOD .FdChildren.Add }
HAnimSegment585.FdChildren.Add(Shape593);
{ METHOD .FdChildren.Add }
HAnimJoint584.FdChildren.Add(HAnimSegment585);
HAnimJoint597 := THAnimJointNode.Create;;
HAnimJoint597.Center := Vector3(-4.7255,0.0211,2.1725);
HAnimSegment598 := THAnimSegmentNode.Create;;
Transform599 := TTransformNode.Create;;
Transform599.Translation := Vector3(-4.7255,0.0211,2.1725);
Transform600 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform600.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform599.FdChildren.Add(Transform600);
{ METHOD .FdChildren.Add }
HAnimSegment598.FdChildren.Add(Transform599);
Shape602 := TShapeNode.Create;;
LineSet603 := TLineSetNode.Create;
end;

procedure InitHumanoid4_1Part45;
begin
;
LineSet603.SetVertexCount([2]);
Coordinate604 := TCoordinateNode.Create;;
Coordinate604.SetPoint([Vector3(-4.7255,0.0211,2.1725),Vector3(-4.8755,0.0076,4.5165)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet603.Coord := Coordinate604;
{ from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet603.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape602.Geometry := LineSet603;
{ METHOD .FdChildren.Add }
HAnimSegment598.FdChildren.Add(Shape602);
{ METHOD .FdChildren.Add }
HAnimJoint597.FdChildren.Add(HAnimSegment598);
HAnimJoint606 := THAnimJointNode.Create;;
HAnimJoint606.Center := Vector3(-4.8755,0.0076,4.5165);
HAnimSegment607 := THAnimSegmentNode.Create;;
Transform608 := TTransformNode.Create;;
Transform608.Translation := Vector3(-4.8755,0.0076,4.5165);
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
Coordinate613.SetPoint([Vector3(-4.8755,0.0076,4.5165),Vector3(-5.0655,0.0049,5.1895)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet612.Coord := Coordinate613;
{ from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet612.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape611.Geometry := LineSet612;
{ METHOD .FdChildren.Add }
HAnimSegment607.FdChildren.Add(Shape611);
{ METHOD .FdChildren.Add }
HAnimJoint606.FdChildren.Add(HAnimSegment607);
HAnimJoint615 := THAnimJointNode.Create;;
HAnimJoint615.Center := Vector3(-5.0655,0.0049,5.1895);
HAnimSegment616 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid4_1Part46;
begin
;
Transform617 := TTransformNode.Create;;
Transform617.Translation := Vector3(-5.0655,0.0049,5.1895);
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
Coordinate622.SetPoint([Vector3(-5.0655,0.0049,5.1895),Vector3(-5.1335,0.0011,5.5175)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet621.Coord := Coordinate622;
{ from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet621.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape620.Geometry := LineSet621;
{ METHOD .FdChildren.Add }
HAnimSegment616.FdChildren.Add(Shape620);
HAnimSite624 := THAnimSiteNode.Create;;
TouchSensor625 := TTouchSensorNode.Create;;
TouchSensor625.Description := 'HAnimSite r_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite624.FdChildren.Add(TouchSensor625);
{ METHOD .FdChildren.Add }
HAnimSite624.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment616.FdChildren.Add(HAnimSite624);
{ METHOD .FdChildren.Add }
HAnimJoint615.FdChildren.Add(HAnimSegment616);
HAnimJoint627 := THAnimJointNode.Create;;
HAnimJoint627.Center := Vector3(-5.1335,0.0011,5.5175);
{ METHOD .FdChildren.Add }
HAnimJoint615.FdChildren.Add(HAnimJoint627);
{ METHOD .FdChildren.Add }
HAnimJoint606.FdChildren.Add(HAnimJoint615);
{ METHOD .FdChildren.Add }
HAnimJoint597.FdChildren.Add(HAnimJoint606);
{ METHOD .FdChildren.Add }
HAnimJoint584.FdChildren.Add(HAnimJoint597);
HAnimJoint628 := THAnimJointNode.Create;;
HAnimJoint628.Center := Vector3(-5.3615,0.0164,2.0085);
end;

procedure InitHumanoid4_1Part47;
begin

HAnimSegment629 := THAnimSegmentNode.Create;;
Transform630 := TTransformNode.Create;;
Transform630.Translation := Vector3(-5.3615,0.0164,2.0085);
Transform631 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform631.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform630.FdChildren.Add(Transform631);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(Transform630);
Shape633 := TShapeNode.Create;;
LineSet634 := TLineSetNode.Create;;
LineSet634.SetVertexCount([2]);
Coordinate635 := TCoordinateNode.Create;;
Coordinate635.SetPoint([Vector3(-5.3615,0.0164,2.0085),Vector3(-5.5055,0.0067,4.3115)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet634.Coord := Coordinate635;
{ from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet634.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape633.Geometry := LineSet634;
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(Shape633);
HAnimSite637 := THAnimSiteNode.Create;;
TouchSensor638 := TTouchSensorNode.Create;;
TouchSensor638.Description := 'HAnimSite r_metatarsal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite637.FdChildren.Add(TouchSensor638);
{ METHOD .FdChildren.Add }
HAnimSite637.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite637);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimSegment629);
HAnimJoint640 := THAnimJointNode.Create;;
HAnimJoint640.Center := Vector3(-5.5055,0.0067,4.3115);
HAnimSegment641 := THAnimSegmentNode.Create;;
Transform642 := TTransformNode.Create;;
Transform642.Translation := Vector3(-5.5055,0.0067,4.3115);
Transform643 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part48;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform643.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform642.FdChildren.Add(Transform643);
{ METHOD .FdChildren.Add }
HAnimSegment641.FdChildren.Add(Transform642);
Shape645 := TShapeNode.Create;;
LineSet646 := TLineSetNode.Create;;
LineSet646.SetVertexCount([2]);
Coordinate647 := TCoordinateNode.Create;;
Coordinate647.SetPoint([Vector3(-5.5055,0.0067,4.3115),Vector3(-5.6085,0.003,4.6485)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet646.Coord := Coordinate647;
{ from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet646.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape645.Geometry := LineSet646;
{ METHOD .FdChildren.Add }
HAnimSegment641.FdChildren.Add(Shape645);
{ METHOD .FdChildren.Add }
HAnimJoint640.FdChildren.Add(HAnimSegment641);
HAnimJoint649 := THAnimJointNode.Create;;
HAnimJoint649.Center := Vector3(-5.6085,0.003,4.6485);
HAnimSegment650 := THAnimSegmentNode.Create;;
Transform651 := TTransformNode.Create;;
Transform651.Translation := Vector3(-5.6085,0.003,4.6485);
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
Coordinate656 := TCoordinateNode.Create;;
Coordinate656.SetPoint([Vector3(-5.6085,0.003,4.6485),Vector3(-5.6495,0,4.9925)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet655.Coord := Coordinate656;
{ from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet655.Color := ColorRGBA32;
end;

procedure InitHumanoid4_1Part49;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape654.Geometry := LineSet655;
{ METHOD .FdChildren.Add }
HAnimSegment650.FdChildren.Add(Shape654);
HAnimSite658 := THAnimSiteNode.Create;;
TouchSensor659 := TTouchSensorNode.Create;;
TouchSensor659.Description := 'HAnimSite r_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite658.FdChildren.Add(TouchSensor659);
{ METHOD .FdChildren.Add }
HAnimSite658.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment650.FdChildren.Add(HAnimSite658);
{ METHOD .FdChildren.Add }
HAnimJoint649.FdChildren.Add(HAnimSegment650);
HAnimJoint661 := THAnimJointNode.Create;;
HAnimJoint661.Center := Vector3(-5.6495,0,4.9925);
{ METHOD .FdChildren.Add }
HAnimJoint649.FdChildren.Add(HAnimJoint661);
{ METHOD .FdChildren.Add }
HAnimJoint640.FdChildren.Add(HAnimJoint649);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimJoint640);
{ METHOD .FdChildren.Add }
HAnimJoint584.FdChildren.Add(HAnimJoint628);
{ METHOD .FdChildren.Add }
HAnimJoint575.FdChildren.Add(HAnimJoint584);
{ METHOD .FdChildren.Add }
HAnimJoint431.FdChildren.Add(HAnimJoint575);
{ METHOD .FdChildren.Add }
HAnimJoint416.FdChildren.Add(HAnimJoint431);
{ METHOD .FdChildren.Add }
HAnimJoint398.FdChildren.Add(HAnimJoint416);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimJoint398);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint97);
HAnimJoint662 := THAnimJointNode.Create;;
HAnimJoint662.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment663 := THAnimSegmentNode.Create;;
Transform664 := TTransformNode.Create;;
Transform664.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform665 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform665.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform664.FdChildren.Add(Transform665);
{ METHOD .FdChildren.Add }
HAnimSegment663.FdChildren.Add(Transform664);
Shape667 := TShapeNode.Create;;
LineSet668 := TLineSetNode.Create;
end;

procedure InitHumanoid4_1Part50;
begin
;
LineSet668.SetVertexCount([2]);
Coordinate669 := TCoordinateNode.Create;;
Coordinate669.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet668.Coord := Coordinate669;
{ from vl5 to vl4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet668.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape667.Geometry := LineSet668;
{ METHOD .FdChildren.Add }
HAnimSegment663.FdChildren.Add(Shape667);
{ METHOD .FdChildren.Add }
HAnimJoint662.FdChildren.Add(HAnimSegment663);
HAnimJoint671 := THAnimJointNode.Create;;
HAnimJoint671.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment672 := THAnimSegmentNode.Create;;
Transform673 := TTransformNode.Create;;
Transform673.Translation := Vector3(0.0035,1.0925,-0.0787);
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
Coordinate678.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet677.Coord := Coordinate678;
{ from vl4 to vl3 vertices 2 }
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
HAnimJoint680 := THAnimJointNode.Create;;
HAnimJoint680.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment681 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid4_1Part51;
begin
;
Transform682 := TTransformNode.Create;;
Transform682.Translation := Vector3(0.0041,1.1276,-0.0796);
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
Coordinate687.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet686.Coord := Coordinate687;
{ from vl3 to vl2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet686.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape685.Geometry := LineSet686;
{ METHOD .FdChildren.Add }
HAnimSegment681.FdChildren.Add(Shape685);
HAnimSite689 := THAnimSiteNode.Create;;
HAnimSite689.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor690 := TTouchSensorNode.Create;;
TouchSensor690.Description := 'HAnimSite l_rib10_pt';
{ METHOD .FdChildren.Add }
HAnimSite689.FdChildren.Add(TouchSensor690);
{ METHOD .FdChildren.Add }
HAnimSite689.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment681.FdChildren.Add(HAnimSite689);
HAnimSite692 := THAnimSiteNode.Create;;
HAnimSite692.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor693 := TTouchSensorNode.Create;;
TouchSensor693.Description := 'HAnimSite r_rib10_pt';
{ METHOD .FdChildren.Add }
HAnimSite692.FdChildren.Add(TouchSensor693);
{ METHOD .FdChildren.Add }
HAnimSite692.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment681.FdChildren.Add(HAnimSite692);
HAnimSite695 := THAnimSiteNode.Create;
end;

procedure InitHumanoid4_1Part52;
begin
;
TouchSensor696 := TTouchSensorNode.Create;;
TouchSensor696.Description := 'HAnimSite spine_2_middle_back_pt';
{ METHOD .FdChildren.Add }
HAnimSite695.FdChildren.Add(TouchSensor696);
{ METHOD .FdChildren.Add }
HAnimSite695.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment681.FdChildren.Add(HAnimSite695);
{ METHOD .FdChildren.Add }
HAnimJoint680.FdChildren.Add(HAnimSegment681);
HAnimJoint698 := THAnimJointNode.Create;;
HAnimJoint698.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment699 := THAnimSegmentNode.Create;;
Transform700 := TTransformNode.Create;;
Transform700.Translation := Vector3(0.0045,1.1546,-0.08);
Transform701 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform701.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform700.FdChildren.Add(Transform701);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform700);
Shape703 := TShapeNode.Create;;
LineSet704 := TLineSetNode.Create;;
LineSet704.SetVertexCount([2]);
Coordinate705 := TCoordinateNode.Create;;
Coordinate705.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet704.Coord := Coordinate705;
{ from vl2 to vl1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet704.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape703.Geometry := LineSet704;
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Shape703);
{ METHOD .FdChildren.Add }
HAnimJoint698.FdChildren.Add(HAnimSegment699);
HAnimJoint707 := THAnimJointNode.Create;;
HAnimJoint707.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment708 := THAnimSegmentNode.Create;;
Transform709 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part53;
begin
;
Transform709.Translation := Vector3(0.0048,1.1912,-0.0805);
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
Coordinate714.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet713.Coord := Coordinate714;
{ from vl1 to vt12 vertices 2 }
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
HAnimJoint716.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment717 := THAnimSegmentNode.Create;;
Transform718 := TTransformNode.Create;;
Transform718.Translation := Vector3(0.0051,1.2278,-0.0808);
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

procedure InitHumanoid4_1Part54;
begin

Coordinate723.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet722.Coord := Coordinate723;
{ from vt12 to vt11 vertices 2 }
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
HAnimJoint725.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment726 := THAnimSegmentNode.Create;;
Transform727 := TTransformNode.Create;;
Transform727.Translation := Vector3(0.0053,1.2679,-0.081);
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
Coordinate732.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet731.Coord := Coordinate732;
{ from vt11 to vt10 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet731.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape730.Geometry := LineSet731;
{ METHOD .FdChildren.Add }
HAnimSegment726.FdChildren.Add(Shape730);
HAnimSite734 := THAnimSiteNode.Create;;
HAnimSite734.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor735 := TTouchSensorNode.Create;;
TouchSensor735.Description := 'HAnimSite substernale_pt';
{ METHOD .FdChildren.Add }
HAnimSite734.FdChildren.Add(TouchSensor735);
{ METHOD .FdChildren.Add }
HAnimSite734.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment726.FdChildren.Add(HAnimSite734);
end;

procedure InitHumanoid4_1Part55;
begin

{ METHOD .FdChildren.Add }
HAnimJoint725.FdChildren.Add(HAnimSegment726);
HAnimJoint737 := THAnimJointNode.Create;;
HAnimJoint737.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment738 := THAnimSegmentNode.Create;;
Transform739 := TTransformNode.Create;;
Transform739.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform740 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform740.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform739.FdChildren.Add(Transform740);
{ METHOD .FdChildren.Add }
HAnimSegment738.FdChildren.Add(Transform739);
Shape742 := TShapeNode.Create;;
LineSet743 := TLineSetNode.Create;;
LineSet743.SetVertexCount([2]);
Coordinate744 := TCoordinateNode.Create;;
Coordinate744.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet743.Coord := Coordinate744;
{ from vt10 to vt9 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet743.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape742.Geometry := LineSet743;
{ METHOD .FdChildren.Add }
HAnimSegment738.FdChildren.Add(Shape742);
HAnimSite746 := THAnimSiteNode.Create;;
HAnimSite746.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor747 := TTouchSensorNode.Create;;
TouchSensor747.Description := 'HAnimSite l_thelion_pt';
{ METHOD .FdChildren.Add }
HAnimSite746.FdChildren.Add(TouchSensor747);
{ METHOD .FdChildren.Add }
HAnimSite746.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment738.FdChildren.Add(HAnimSite746);
HAnimSite749 := THAnimSiteNode.Create;;
HAnimSite749.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor750 := TTouchSensorNode.Create;;
end;

procedure InitHumanoid4_1Part56;
begin

TouchSensor750.Description := 'HAnimSite r_thelion_pt';
{ METHOD .FdChildren.Add }
HAnimSite749.FdChildren.Add(TouchSensor750);
{ METHOD .FdChildren.Add }
HAnimSite749.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment738.FdChildren.Add(HAnimSite749);
{ METHOD .FdChildren.Add }
HAnimJoint737.FdChildren.Add(HAnimSegment738);
HAnimJoint752 := THAnimJointNode.Create;;
HAnimJoint752.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment753 := THAnimSegmentNode.Create;;
Transform754 := TTransformNode.Create;;
Transform754.Translation := Vector3(0.0057,1.3126,-0.0838);
Transform755 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform755.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform754.FdChildren.Add(Transform755);
{ METHOD .FdChildren.Add }
HAnimSegment753.FdChildren.Add(Transform754);
Shape757 := TShapeNode.Create;;
LineSet758 := TLineSetNode.Create;;
LineSet758.SetVertexCount([2]);
Coordinate759 := TCoordinateNode.Create;;
Coordinate759.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet758.Coord := Coordinate759;
{ from vt9 to vt8 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet758.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape757.Geometry := LineSet758;
{ METHOD .FdChildren.Add }
HAnimSegment753.FdChildren.Add(Shape757);
{ METHOD .FdChildren.Add }
HAnimJoint752.FdChildren.Add(HAnimSegment753);
HAnimJoint761 := THAnimJointNode.Create;;
HAnimJoint761.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment762 := THAnimSegmentNode.Create;;
Transform763 := TTransformNode.Create;;
Transform763.Translation := Vector3(0.0057,1.3382,-0.0845);
Transform764 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part57;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform764.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform763.FdChildren.Add(Transform764);
{ METHOD .FdChildren.Add }
HAnimSegment762.FdChildren.Add(Transform763);
Shape766 := TShapeNode.Create;;
LineSet767 := TLineSetNode.Create;;
LineSet767.SetVertexCount([2]);
Coordinate768 := TCoordinateNode.Create;;
Coordinate768.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet767.Coord := Coordinate768;
{ from vt8 to vt7 vertices 2 }
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
HAnimJoint770.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment771 := THAnimSegmentNode.Create;;
Transform772 := TTransformNode.Create;;
Transform772.Translation := Vector3(0.0058,1.3625,-0.0833);
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
Coordinate777.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet776.Coord := Coordinate777;
{ from vt7 to vt6 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet776.Color := ColorRGBA32;
end;

procedure InitHumanoid4_1Part58;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape775.Geometry := LineSet776;
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(Shape775);
HAnimSite779 := THAnimSiteNode.Create;;
TouchSensor780 := TTouchSensorNode.Create;;
TouchSensor780.Description := 'HAnimSite l_chest_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite779.FdChildren.Add(TouchSensor780);
{ METHOD .FdChildren.Add }
HAnimSite779.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(HAnimSite779);
HAnimSite782 := THAnimSiteNode.Create;;
TouchSensor783 := TTouchSensorNode.Create;;
TouchSensor783.Description := 'HAnimSite mesosternale_pt';
{ METHOD .FdChildren.Add }
HAnimSite782.FdChildren.Add(TouchSensor783);
{ METHOD .FdChildren.Add }
HAnimSite782.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(HAnimSite782);
HAnimSite785 := THAnimSiteNode.Create;;
TouchSensor786 := TTouchSensorNode.Create;;
TouchSensor786.Description := 'HAnimSite r_chest_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite785.FdChildren.Add(TouchSensor786);
{ METHOD .FdChildren.Add }
HAnimSite785.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(HAnimSite785);
HAnimSite788 := THAnimSiteNode.Create;;
TouchSensor789 := TTouchSensorNode.Create;;
TouchSensor789.Description := 'HAnimSite rear_center_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite788.FdChildren.Add(TouchSensor789);
{ METHOD .FdChildren.Add }
HAnimSite788.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment771.FdChildren.Add(HAnimSite788);
{ METHOD .FdChildren.Add }
HAnimJoint770.FdChildren.Add(HAnimSegment771);
HAnimJoint791 := THAnimJointNode.Create;;
HAnimJoint791.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment792 := THAnimSegmentNode.Create;;
end;

procedure InitHumanoid4_1Part59;
begin

Transform793 := TTransformNode.Create;;
Transform793.Translation := Vector3(0.0059,1.3866,-0.08);
Transform794 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform794.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform793.FdChildren.Add(Transform794);
{ METHOD .FdChildren.Add }
HAnimSegment792.FdChildren.Add(Transform793);
Shape796 := TShapeNode.Create;;
LineSet797 := TLineSetNode.Create;;
LineSet797.SetVertexCount([2]);
Coordinate798 := TCoordinateNode.Create;;
Coordinate798.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet797.Coord := Coordinate798;
{ from vt6 to vt5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet797.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape796.Geometry := LineSet797;
{ METHOD .FdChildren.Add }
HAnimSegment792.FdChildren.Add(Shape796);
HAnimSite800 := THAnimSiteNode.Create;;
TouchSensor801 := TTouchSensorNode.Create;;
TouchSensor801.Description := 'HAnimSite spine_1_middle_back_pt';
{ METHOD .FdChildren.Add }
HAnimSite800.FdChildren.Add(TouchSensor801);
{ METHOD .FdChildren.Add }
HAnimSite800.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment792.FdChildren.Add(HAnimSite800);
{ METHOD .FdChildren.Add }
HAnimJoint791.FdChildren.Add(HAnimSegment792);
HAnimJoint803 := THAnimJointNode.Create;;
HAnimJoint803.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment804 := THAnimSegmentNode.Create;;
Transform805 := TTransformNode.Create;;
Transform805.Translation := Vector3(0.006,1.4102,-0.0745);
Transform806 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform806.FdChildren.Add(Shape25);
end;

procedure InitHumanoid4_1Part60;
begin

{ METHOD .FdChildren.Add }
Transform805.FdChildren.Add(Transform806);
{ METHOD .FdChildren.Add }
HAnimSegment804.FdChildren.Add(Transform805);
Shape808 := TShapeNode.Create;;
LineSet809 := TLineSetNode.Create;;
LineSet809.SetVertexCount([2]);
Coordinate810 := TCoordinateNode.Create;;
Coordinate810.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet809.Coord := Coordinate810;
{ from vt5 to vt4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet809.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape808.Geometry := LineSet809;
{ METHOD .FdChildren.Add }
HAnimSegment804.FdChildren.Add(Shape808);
{ METHOD .FdChildren.Add }
HAnimJoint803.FdChildren.Add(HAnimSegment804);
HAnimJoint812 := THAnimJointNode.Create;;
HAnimJoint812.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment813 := THAnimSegmentNode.Create;;
Transform814 := TTransformNode.Create;;
Transform814.Translation := Vector3(0.0061,1.432,-0.0675);
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
Coordinate819.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet818.Coord := Coordinate819;
{ from vt4 to vt3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet818.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape817.Geometry := LineSet818;
{ METHOD .FdChildren.Add }
HAnimSegment813.FdChildren.Add(Shape817);
end;

procedure InitHumanoid4_1Part61;
begin

{ METHOD .FdChildren.Add }
HAnimJoint812.FdChildren.Add(HAnimSegment813);
HAnimJoint821 := THAnimJointNode.Create;;
HAnimJoint821.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment822 := THAnimSegmentNode.Create;;
Transform823 := TTransformNode.Create;;
Transform823.Translation := Vector3(0.0062,1.4583,-0.057);
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
Coordinate828.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet827.Coord := Coordinate828;
{ from vt3 to vt2 vertices 2 }
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
HAnimJoint830.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment831 := THAnimSegmentNode.Create;;
Transform832 := TTransformNode.Create;;
Transform832.Translation := Vector3(0.0063,1.4761,-0.0484);
Transform833 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform833.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform832.FdChildren.Add(Transform833);
{ METHOD .FdChildren.Add }
HAnimSegment831.FdChildren.Add(Transform832);
end;

procedure InitHumanoid4_1Part62;
begin

Shape835 := TShapeNode.Create;;
LineSet836 := TLineSetNode.Create;;
LineSet836.SetVertexCount([2]);
Coordinate837 := TCoordinateNode.Create;;
Coordinate837.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet836.Coord := Coordinate837;
{ from vt2 to vt1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet836.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape835.Geometry := LineSet836;
{ METHOD .FdChildren.Add }
HAnimSegment831.FdChildren.Add(Shape835);
HAnimSite839 := THAnimSiteNode.Create;;
HAnimSite839.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor840 := TTouchSensorNode.Create;;
TouchSensor840.Description := 'HAnimSite cervicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite839.FdChildren.Add(TouchSensor840);
{ METHOD .FdChildren.Add }
HAnimSite839.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment831.FdChildren.Add(HAnimSite839);
HAnimSite842 := THAnimSiteNode.Create;;
HAnimSite842.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor843 := TTouchSensorNode.Create;;
TouchSensor843.Description := 'HAnimSite suprasternale_pt';
{ METHOD .FdChildren.Add }
HAnimSite842.FdChildren.Add(TouchSensor843);
{ METHOD .FdChildren.Add }
HAnimSite842.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment831.FdChildren.Add(HAnimSite842);
{ METHOD .FdChildren.Add }
HAnimJoint830.FdChildren.Add(HAnimSegment831);
HAnimJoint845 := THAnimJointNode.Create;;
HAnimJoint845.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment846 := THAnimSegmentNode.Create;;
Transform847 := TTransformNode.Create;;
Transform847.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform848 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part63;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform848.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform847.FdChildren.Add(Transform848);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(Transform847);
Shape850 := TShapeNode.Create;;
LineSet851 := TLineSetNode.Create;;
LineSet851.SetVertexCount([2]);
Coordinate852 := TCoordinateNode.Create;;
Coordinate852.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet851.Coord := Coordinate852;
{ from vt1 to vc7 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet851.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape850.Geometry := LineSet851;
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(Shape850);
HAnimSite854 := THAnimSiteNode.Create;;
HAnimSite854.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor855 := TTouchSensorNode.Create;;
TouchSensor855.Description := 'HAnimSite l_neck_base_pt';
{ METHOD .FdChildren.Add }
HAnimSite854.FdChildren.Add(TouchSensor855);
{ METHOD .FdChildren.Add }
HAnimSite854.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite854);
HAnimSite857 := THAnimSiteNode.Create;;
HAnimSite857.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor858 := TTouchSensorNode.Create;;
TouchSensor858.Description := 'HAnimSite r_neck_base_pt';
{ METHOD .FdChildren.Add }
HAnimSite857.FdChildren.Add(TouchSensor858);
{ METHOD .FdChildren.Add }
HAnimSite857.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite857);
Shape860 := TShapeNode.Create;;
LineSet861 := TLineSetNode.Create;;
LineSet861.SetVertexCount([2]);
Coordinate862 := TCoordinateNode.Create;
end;

procedure InitHumanoid4_1Part64;
begin
;
Coordinate862.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet861.Coord := Coordinate862;
{ from vt1 to l_sternoclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet861.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape860.Geometry := LineSet861;
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(Shape860);
HAnimSite864 := THAnimSiteNode.Create;;
HAnimSite864.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor865 := TTouchSensorNode.Create;;
TouchSensor865.Description := 'HAnimSite l_acromion_pt';
{ METHOD .FdChildren.Add }
HAnimSite864.FdChildren.Add(TouchSensor865);
{ METHOD .FdChildren.Add }
HAnimSite864.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite864);
HAnimSite867 := THAnimSiteNode.Create;;
HAnimSite867.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor868 := TTouchSensorNode.Create;;
TouchSensor868.Description := 'HAnimSite l_axilla_distal_pt';
{ METHOD .FdChildren.Add }
HAnimSite867.FdChildren.Add(TouchSensor868);
{ METHOD .FdChildren.Add }
HAnimSite867.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite867);
HAnimSite870 := THAnimSiteNode.Create;;
TouchSensor871 := TTouchSensorNode.Create;;
TouchSensor871.Description := 'HAnimSite l_axilla_posterior_folds_pt';
{ METHOD .FdChildren.Add }
HAnimSite870.FdChildren.Add(TouchSensor871);
{ METHOD .FdChildren.Add }
HAnimSite870.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite870);
HAnimSite873 := THAnimSiteNode.Create;;
HAnimSite873.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor874 := TTouchSensorNode.Create;;
TouchSensor874.Description := 'HAnimSite l_axilla_proximal_pt';
{ METHOD .FdChildren.Add }
HAnimSite873.FdChildren.Add(TouchSensor874);
{ METHOD .FdChildren.Add }
HAnimSite873.FdChildren.Add(Shape35);
end;

procedure InitHumanoid4_1Part65;
begin

{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite873);
HAnimSite876 := THAnimSiteNode.Create;;
HAnimSite876.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor877 := TTouchSensorNode.Create;;
TouchSensor877.Description := 'HAnimSite l_clavicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite876.FdChildren.Add(TouchSensor877);
{ METHOD .FdChildren.Add }
HAnimSite876.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite876);
Shape879 := TShapeNode.Create;;
LineSet880 := TLineSetNode.Create;;
LineSet880.SetVertexCount([2]);
Coordinate881 := TCoordinateNode.Create;;
Coordinate881.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet880.Coord := Coordinate881;
{ from vt1 to r_sternoclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet880.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape879.Geometry := LineSet880;
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(Shape879);
HAnimSite883 := THAnimSiteNode.Create;;
HAnimSite883.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor884 := TTouchSensorNode.Create;;
TouchSensor884.Description := 'HAnimSite r_acromion_pt';
{ METHOD .FdChildren.Add }
HAnimSite883.FdChildren.Add(TouchSensor884);
{ METHOD .FdChildren.Add }
HAnimSite883.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite883);
HAnimSite886 := THAnimSiteNode.Create;;
HAnimSite886.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor887 := TTouchSensorNode.Create;;
TouchSensor887.Description := 'HAnimSite r_axilla_distal_pt';
{ METHOD .FdChildren.Add }
HAnimSite886.FdChildren.Add(TouchSensor887);
{ METHOD .FdChildren.Add }
HAnimSite886.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite886);
end;

procedure InitHumanoid4_1Part66;
begin

HAnimSite889 := THAnimSiteNode.Create;;
TouchSensor890 := TTouchSensorNode.Create;;
TouchSensor890.Description := 'HAnimSite r_axilla_posterior_folds_pt';
{ METHOD .FdChildren.Add }
HAnimSite889.FdChildren.Add(TouchSensor890);
{ METHOD .FdChildren.Add }
HAnimSite889.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite889);
HAnimSite892 := THAnimSiteNode.Create;;
HAnimSite892.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor893 := TTouchSensorNode.Create;;
TouchSensor893.Description := 'HAnimSite r_axilla_proximal_pt';
{ METHOD .FdChildren.Add }
HAnimSite892.FdChildren.Add(TouchSensor893);
{ METHOD .FdChildren.Add }
HAnimSite892.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite892);
HAnimSite895 := THAnimSiteNode.Create;;
HAnimSite895.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor896 := TTouchSensorNode.Create;;
TouchSensor896.Description := 'HAnimSite r_clavicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(TouchSensor896);
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment846.FdChildren.Add(HAnimSite895);
{ METHOD .FdChildren.Add }
HAnimJoint845.FdChildren.Add(HAnimSegment846);
HAnimJoint898 := THAnimJointNode.Create;;
HAnimJoint898.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment899 := THAnimSegmentNode.Create;;
Transform900 := TTransformNode.Create;;
Transform900.Translation := Vector3(0.0066,1.5132,-0.0301);
Transform901 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform901.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform900.FdChildren.Add(Transform901);
{ METHOD .FdChildren.Add }
HAnimSegment899.FdChildren.Add(Transform900);
end;

procedure InitHumanoid4_1Part67;
begin

Shape903 := TShapeNode.Create;;
LineSet904 := TLineSetNode.Create;;
LineSet904.SetVertexCount([2]);
Coordinate905 := TCoordinateNode.Create;;
Coordinate905.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet904.Coord := Coordinate905;
{ from vc7 to vc6 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet904.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape903.Geometry := LineSet904;
{ METHOD .FdChildren.Add }
HAnimSegment899.FdChildren.Add(Shape903);
{ METHOD .FdChildren.Add }
HAnimJoint898.FdChildren.Add(HAnimSegment899);
HAnimJoint907 := THAnimJointNode.Create;;
HAnimJoint907.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment908 := THAnimSegmentNode.Create;;
Transform909 := TTransformNode.Create;;
Transform909.Translation := Vector3(0.0066,1.5357,-0.0143);
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
Coordinate914.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet913.Coord := Coordinate914;
{ from vc6 to vc5 vertices 2 }
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
HAnimJoint916 := THAnimJointNode.Create;
end;

procedure InitHumanoid4_1Part68;
begin
;
HAnimJoint916.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment917 := THAnimSegmentNode.Create;;
Transform918 := TTransformNode.Create;;
Transform918.Translation := Vector3(0.0066,1.552,-0.0082);
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
Coordinate923.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet922.Coord := Coordinate923;
{ from vc5 to vc4 vertices 2 }
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
HAnimJoint925.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment926 := THAnimSegmentNode.Create;;
Transform927 := TTransformNode.Create;;
Transform927.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform928 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform928.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform927.FdChildren.Add(Transform928);
{ METHOD .FdChildren.Add }
HAnimSegment926.FdChildren.Add(Transform927);
Shape930 := TShapeNode.Create;;
end;

procedure InitHumanoid4_1Part69;
begin

LineSet931 := TLineSetNode.Create;;
LineSet931.SetVertexCount([2]);
Coordinate932 := TCoordinateNode.Create;;
Coordinate932.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet931.Coord := Coordinate932;
{ from vc4 to vc3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet931.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape930.Geometry := LineSet931;
{ METHOD .FdChildren.Add }
HAnimSegment926.FdChildren.Add(Shape930);
{ METHOD .FdChildren.Add }
HAnimJoint925.FdChildren.Add(HAnimSegment926);
HAnimJoint934 := THAnimJointNode.Create;;
HAnimJoint934.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment935 := THAnimSegmentNode.Create;;
Transform936 := TTransformNode.Create;;
Transform936.Translation := Vector3(0.0066,1.58,-0.0103);
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
Coordinate941.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet940.Coord := Coordinate941;
{ from vc3 to vc2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet940.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape939.Geometry := LineSet940;
{ METHOD .FdChildren.Add }
HAnimSegment935.FdChildren.Add(Shape939);
HAnimSite943 := THAnimSiteNode.Create;;
TouchSensor944 := TTouchSensorNode.Create;;
end;

procedure InitHumanoid4_1Part70;
begin

TouchSensor944.Description := 'HAnimSite adams_apple_pt';
{ METHOD .FdChildren.Add }
HAnimSite943.FdChildren.Add(TouchSensor944);
{ METHOD .FdChildren.Add }
HAnimSite943.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment935.FdChildren.Add(HAnimSite943);
{ METHOD .FdChildren.Add }
HAnimJoint934.FdChildren.Add(HAnimSegment935);
HAnimJoint946 := THAnimJointNode.Create;;
HAnimJoint946.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment947 := THAnimSegmentNode.Create;;
Transform948 := TTransformNode.Create;;
Transform948.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform949 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform949.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform948.FdChildren.Add(Transform949);
{ METHOD .FdChildren.Add }
HAnimSegment947.FdChildren.Add(Transform948);
Shape951 := TShapeNode.Create;;
LineSet952 := TLineSetNode.Create;;
LineSet952.SetVertexCount([2]);
Coordinate953 := TCoordinateNode.Create;;
Coordinate953.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet952.Coord := Coordinate953;
{ from vc2 to vc1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet952.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape951.Geometry := LineSet952;
{ METHOD .FdChildren.Add }
HAnimSegment947.FdChildren.Add(Shape951);
{ METHOD .FdChildren.Add }
HAnimJoint946.FdChildren.Add(HAnimSegment947);
HAnimJoint955 := THAnimJointNode.Create;;
HAnimJoint955.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment956 := THAnimSegmentNode.Create;;
Transform957 := TTransformNode.Create;;
Transform957.Translation := Vector3(0.0066,1.6144,-0.0034);
Transform958 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part71;
begin
;
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
Coordinate962 := TCoordinateNode.Create;;
Coordinate962.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet961.Coord := Coordinate962;
{ from vc1 to skullbase vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet961.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape960.Geometry := LineSet961;
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(Shape960);
HAnimSite964 := THAnimSiteNode.Create;;
TouchSensor965 := TTouchSensorNode.Create;;
TouchSensor965.Description := 'HAnimSite glabella_pt';
{ METHOD .FdChildren.Add }
HAnimSite964.FdChildren.Add(TouchSensor965);
{ METHOD .FdChildren.Add }
HAnimSite964.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite964);
HAnimSite967 := THAnimSiteNode.Create;;
TouchSensor968 := TTouchSensorNode.Create;;
TouchSensor968.Description := 'HAnimSite l_ectocanthus_pt';
{ METHOD .FdChildren.Add }
HAnimSite967.FdChildren.Add(TouchSensor968);
{ METHOD .FdChildren.Add }
HAnimSite967.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite967);
HAnimSite970 := THAnimSiteNode.Create;;
HAnimSite970.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor971 := TTouchSensorNode.Create;;
TouchSensor971.Description := 'HAnimSite l_infraorbitale_pt';
{ METHOD .FdChildren.Add }
HAnimSite970.FdChildren.Add(TouchSensor971);
{ METHOD .FdChildren.Add }
HAnimSite970.FdChildren.Add(Shape35);
end;

procedure InitHumanoid4_1Part72;
begin

{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite970);
HAnimSite973 := THAnimSiteNode.Create;;
HAnimSite973.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor974 := TTouchSensorNode.Create;;
TouchSensor974.Description := 'HAnimSite l_tragion_pt';
{ METHOD .FdChildren.Add }
HAnimSite973.FdChildren.Add(TouchSensor974);
{ METHOD .FdChildren.Add }
HAnimSite973.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite973);
HAnimSite976 := THAnimSiteNode.Create;;
HAnimSite976.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor977 := TTouchSensorNode.Create;;
TouchSensor977.Description := 'HAnimSite nuchale_pt';
{ METHOD .FdChildren.Add }
HAnimSite976.FdChildren.Add(TouchSensor977);
{ METHOD .FdChildren.Add }
HAnimSite976.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite976);
HAnimSite979 := THAnimSiteNode.Create;;
TouchSensor980 := TTouchSensorNode.Create;;
TouchSensor980.Description := 'HAnimSite opisthocranion_pt';
{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(TouchSensor980);
{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite979);
HAnimSite982 := THAnimSiteNode.Create;;
TouchSensor983 := TTouchSensorNode.Create;;
TouchSensor983.Description := 'HAnimSite r_ectocanthus_pt';
{ METHOD .FdChildren.Add }
HAnimSite982.FdChildren.Add(TouchSensor983);
{ METHOD .FdChildren.Add }
HAnimSite982.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite982);
HAnimSite985 := THAnimSiteNode.Create;;
HAnimSite985.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor986 := TTouchSensorNode.Create;;
end;

procedure InitHumanoid4_1Part73;
begin

TouchSensor986.Description := 'HAnimSite r_infraorbitale_pt';
{ METHOD .FdChildren.Add }
HAnimSite985.FdChildren.Add(TouchSensor986);
{ METHOD .FdChildren.Add }
HAnimSite985.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite985);
HAnimSite988 := THAnimSiteNode.Create;;
HAnimSite988.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor989 := TTouchSensorNode.Create;;
TouchSensor989.Description := 'HAnimSite r_tragion_pt';
{ METHOD .FdChildren.Add }
HAnimSite988.FdChildren.Add(TouchSensor989);
{ METHOD .FdChildren.Add }
HAnimSite988.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite988);
HAnimSite991 := THAnimSiteNode.Create;;
HAnimSite991.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor992 := TTouchSensorNode.Create;;
TouchSensor992.Description := 'HAnimSite sellion_pt';
{ METHOD .FdChildren.Add }
HAnimSite991.FdChildren.Add(TouchSensor992);
{ METHOD .FdChildren.Add }
HAnimSite991.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite991);
HAnimSite994 := THAnimSiteNode.Create;;
HAnimSite994.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor995 := TTouchSensorNode.Create;;
TouchSensor995.Description := 'HAnimSite skull_vertex_pt';
{ METHOD .FdChildren.Add }
HAnimSite994.FdChildren.Add(TouchSensor995);
{ METHOD .FdChildren.Add }
HAnimSite994.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment956.FdChildren.Add(HAnimSite994);
{ METHOD .FdChildren.Add }
HAnimJoint955.FdChildren.Add(HAnimSegment956);
HAnimJoint997 := THAnimJointNode.Create;;
HAnimJoint997.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment998 := THAnimSegmentNode.Create;;
Transform999 := TTransformNode.Create;;
Transform999.Translation := Vector3(0.0044,1.6209,0.0236);
end;

procedure InitHumanoid4_1Part74;
begin

Transform1000 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1000.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform999.FdChildren.Add(Transform1000);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Transform999);
Shape1002 := TShapeNode.Create;;
LineSet1003 := TLineSetNode.Create;;
LineSet1003.SetVertexCount([2]);
Coordinate1004 := TCoordinateNode.Create;;
Coordinate1004.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(2.2365,1.87,1.9285)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1003.Coord := Coordinate1004;
{ from skullbase to l_eyelid_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1003.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1002.Geometry := LineSet1003;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1002);
Shape1006 := TShapeNode.Create;;
LineSet1007 := TLineSetNode.Create;;
LineSet1007.SetVertexCount([2]);
Coordinate1008 := TCoordinateNode.Create;;
Coordinate1008.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-2.2535,1.87,1.9285)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1007.Coord := Coordinate1008;
{ from skullbase to r_eyelid_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1007.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1006.Geometry := LineSet1007;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1006);
Shape1010 := TShapeNode.Create;;
LineSet1011 := TLineSetNode.Create;;
LineSet1011.SetVertexCount([2]);
Coordinate1012 := TCoordinateNode.Create;;
Coordinate1012.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(2.1305,1.8444,4.1555)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1011.Coord := Coordinate1012;
{ from skullbase to l_eyeball_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1011.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1010.Geometry := LineSet1011;
end;

procedure InitHumanoid4_1Part75;
begin

{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1010);
Shape1014 := TShapeNode.Create;;
LineSet1015 := TLineSetNode.Create;;
LineSet1015.SetVertexCount([2]);
Coordinate1016 := TCoordinateNode.Create;;
Coordinate1016.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-2.1475,1.8444,4.1555)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1015.Coord := Coordinate1016;
{ from skullbase to r_eyeball_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1015.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1014.Geometry := LineSet1015;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1014);
Shape1018 := TShapeNode.Create;;
LineSet1019 := TLineSetNode.Create;;
LineSet1019.SetVertexCount([2]);
Coordinate1020 := TCoordinateNode.Create;;
Coordinate1020.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.9581,1.8563,5.2175)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1019.Coord := Coordinate1020;
{ from skullbase to l_eyebrow_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1019.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1018.Geometry := LineSet1019;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1018);
Shape1022 := TShapeNode.Create;;
LineSet1023 := TLineSetNode.Create;;
LineSet1023.SetVertexCount([2]);
Coordinate1024 := TCoordinateNode.Create;;
Coordinate1024.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.9751,1.8563,5.2175)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1023.Coord := Coordinate1024;
{ from skullbase to r_eyebrow_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1023.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1022.Geometry := LineSet1023;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1022);
Shape1026 := TShapeNode.Create;;
LineSet1027 := TLineSetNode.Create;
end;

procedure InitHumanoid4_1Part76;
begin
;
LineSet1027.SetVertexCount([2]);
Coordinate1028 := TCoordinateNode.Create;;
Coordinate1028.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0085,1.7229,1.148)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1027.Coord := Coordinate1028;
{ from skullbase to temporomandibular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1027.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1026.Geometry := LineSet1027;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape1026);
HAnimSite1030 := THAnimSiteNode.Create;;
HAnimSite1030.Translation := Vector3(0.0631,1.553,0.033);
TouchSensor1031 := TTouchSensorNode.Create;;
TouchSensor1031.Description := 'HAnimSite l_gonion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1030.FdChildren.Add(TouchSensor1031);
{ METHOD .FdChildren.Add }
HAnimSite1030.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(HAnimSite1030);
HAnimSite1033 := THAnimSiteNode.Create;;
TouchSensor1034 := TTouchSensorNode.Create;;
TouchSensor1034.Description := 'HAnimSite menton_pt';
{ METHOD .FdChildren.Add }
HAnimSite1033.FdChildren.Add(TouchSensor1034);
{ METHOD .FdChildren.Add }
HAnimSite1033.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(HAnimSite1033);
HAnimSite1036 := THAnimSiteNode.Create;;
HAnimSite1036.Translation := Vector3(-0.052,1.5529,0.0347);
TouchSensor1037 := TTouchSensorNode.Create;;
TouchSensor1037.Description := 'HAnimSite r_gonion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1036.FdChildren.Add(TouchSensor1037);
{ METHOD .FdChildren.Add }
HAnimSite1036.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(HAnimSite1036);
HAnimSite1039 := THAnimSiteNode.Create;;
HAnimSite1039.Translation := Vector3(0.0061,1.541,0.0805);
TouchSensor1040 := TTouchSensorNode.Create;;
end;

procedure InitHumanoid4_1Part77;
begin

TouchSensor1040.Description := 'HAnimSite supramenton_pt';
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(TouchSensor1040);
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(HAnimSite1039);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimSegment998);
HAnimJoint1042 := THAnimJointNode.Create;;
HAnimJoint1042.Center := Vector3(2.2365,1.87,1.9285);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1042);
HAnimJoint1043 := THAnimJointNode.Create;;
HAnimJoint1043.Center := Vector3(-2.2535,1.87,1.9285);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1043);
HAnimJoint1044 := THAnimJointNode.Create;;
HAnimJoint1044.Center := Vector3(2.1305,1.8444,4.1555);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1044);
HAnimJoint1045 := THAnimJointNode.Create;;
HAnimJoint1045.Center := Vector3(-2.1475,1.8444,4.1555);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1045);
HAnimJoint1046 := THAnimJointNode.Create;;
HAnimJoint1046.Center := Vector3(0.9581,1.8563,5.2175);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1046);
HAnimJoint1047 := THAnimJointNode.Create;;
HAnimJoint1047.Center := Vector3(-0.9751,1.8563,5.2175);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1047);
HAnimJoint1048 := THAnimJointNode.Create;;
HAnimJoint1048.Center := Vector3(-0.0085,1.7229,1.148);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1048);
{ METHOD .FdChildren.Add }
HAnimJoint955.FdChildren.Add(HAnimJoint997);
{ METHOD .FdChildren.Add }
HAnimJoint946.FdChildren.Add(HAnimJoint955);
{ METHOD .FdChildren.Add }
HAnimJoint934.FdChildren.Add(HAnimJoint946);
{ METHOD .FdChildren.Add }
HAnimJoint925.FdChildren.Add(HAnimJoint934);
{ METHOD .FdChildren.Add }
HAnimJoint916.FdChildren.Add(HAnimJoint925);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimJoint916);
{ METHOD .FdChildren.Add }
HAnimJoint898.FdChildren.Add(HAnimJoint907);
end;

procedure InitHumanoid4_1Part78;
begin

{ METHOD .FdChildren.Add }
HAnimJoint845.FdChildren.Add(HAnimJoint898);
HAnimJoint1049 := THAnimJointNode.Create;;
HAnimJoint1049.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment1050 := THAnimSegmentNode.Create;;
Transform1051 := TTransformNode.Create;;
Transform1051.Translation := Vector3(0.082,1.4488,-0.0353);
Transform1052 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1052.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1051.FdChildren.Add(Transform1052);
{ METHOD .FdChildren.Add }
HAnimSegment1050.FdChildren.Add(Transform1051);
Shape1054 := TShapeNode.Create;;
LineSet1055 := TLineSetNode.Create;;
LineSet1055.SetVertexCount([2]);
Coordinate1056 := TCoordinateNode.Create;;
Coordinate1056.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1055.Coord := Coordinate1056;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1055.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1054.Geometry := LineSet1055;
{ METHOD .FdChildren.Add }
HAnimSegment1050.FdChildren.Add(Shape1054);
{ METHOD .FdChildren.Add }
HAnimJoint1049.FdChildren.Add(HAnimSegment1050);
HAnimJoint1058 := THAnimJointNode.Create;;
HAnimJoint1058.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment1059 := THAnimSegmentNode.Create;;
Transform1060 := TTransformNode.Create;;
Transform1060.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform1061 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1061.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1060.FdChildren.Add(Transform1061);
{ METHOD .FdChildren.Add }
HAnimSegment1059.FdChildren.Add(Transform1060);
end;

procedure InitHumanoid4_1Part79;
begin

Shape1063 := TShapeNode.Create;;
LineSet1064 := TLineSetNode.Create;;
LineSet1064.SetVertexCount([2]);
Coordinate1065 := TCoordinateNode.Create;;
Coordinate1065.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1064.Coord := Coordinate1065;
{ from l_acromioclavicular to l_shoulder vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1064.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1063.Geometry := LineSet1064;
{ METHOD .FdChildren.Add }
HAnimSegment1059.FdChildren.Add(Shape1063);
HAnimSite1067 := THAnimSiteNode.Create;;
TouchSensor1068 := TTouchSensorNode.Create;;
TouchSensor1068.Description := 'HAnimSite l_bideltoid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1067.FdChildren.Add(TouchSensor1068);
{ METHOD .FdChildren.Add }
HAnimSite1067.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1059.FdChildren.Add(HAnimSite1067);
HAnimSite1070 := THAnimSiteNode.Create;;
HAnimSite1070.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor1071 := TTouchSensorNode.Create;;
TouchSensor1071.Description := 'HAnimSite l_humeral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1070.FdChildren.Add(TouchSensor1071);
{ METHOD .FdChildren.Add }
HAnimSite1070.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1059.FdChildren.Add(HAnimSite1070);
{ METHOD .FdChildren.Add }
HAnimJoint1058.FdChildren.Add(HAnimSegment1059);
HAnimJoint1073 := THAnimJointNode.Create;;
HAnimJoint1073.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment1074 := THAnimSegmentNode.Create;;
Transform1075 := TTransformNode.Create;;
Transform1075.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform1076 := TTransformNode.Create;;
end;

procedure InitHumanoid4_1Part80;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1076.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1075.FdChildren.Add(Transform1076);
{ METHOD .FdChildren.Add }
HAnimSegment1074.FdChildren.Add(Transform1075);
Shape1078 := TShapeNode.Create;;
LineSet1079 := TLineSetNode.Create;;
LineSet1079.SetVertexCount([2]);
Coordinate1080 := TCoordinateNode.Create;;
Coordinate1080.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1079.Coord := Coordinate1080;
{ from l_shoulder to l_elbow vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1079.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1078.Geometry := LineSet1079;
{ METHOD .FdChildren.Add }
HAnimSegment1074.FdChildren.Add(Shape1078);
HAnimSite1082 := THAnimSiteNode.Create;;
HAnimSite1082.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor1083 := TTouchSensorNode.Create;;
TouchSensor1083.Description := 'HAnimSite l_humeral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1082.FdChildren.Add(TouchSensor1083);
{ METHOD .FdChildren.Add }
HAnimSite1082.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1074.FdChildren.Add(HAnimSite1082);
HAnimSite1085 := THAnimSiteNode.Create;;
HAnimSite1085.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor1086 := TTouchSensorNode.Create;;
TouchSensor1086.Description := 'HAnimSite l_olecranon_pt';
{ METHOD .FdChildren.Add }
HAnimSite1085.FdChildren.Add(TouchSensor1086);
{ METHOD .FdChildren.Add }
HAnimSite1085.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1074.FdChildren.Add(HAnimSite1085);
HAnimSite1088 := THAnimSiteNode.Create;;
HAnimSite1088.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor1089 := TTouchSensorNode.Create;;
TouchSensor1089.Description := 'HAnimSite l_radial_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1088.FdChildren.Add(TouchSensor1089);
end;

procedure InitHumanoid4_1Part81;
begin

{ METHOD .FdChildren.Add }
HAnimSite1088.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1074.FdChildren.Add(HAnimSite1088);
HAnimSite1091 := THAnimSiteNode.Create;;
HAnimSite1091.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor1092 := TTouchSensorNode.Create;;
TouchSensor1092.Description := 'HAnimSite l_radiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1091.FdChildren.Add(TouchSensor1092);
{ METHOD .FdChildren.Add }
HAnimSite1091.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1074.FdChildren.Add(HAnimSite1091);
{ METHOD .FdChildren.Add }
HAnimJoint1073.FdChildren.Add(HAnimSegment1074);
HAnimJoint1094 := THAnimJointNode.Create;;
HAnimJoint1094.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment1095 := THAnimSegmentNode.Create;;
Transform1096 := TTransformNode.Create;;
Transform1096.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform1097 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1097.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1096.FdChildren.Add(Transform1097);
{ METHOD .FdChildren.Add }
HAnimSegment1095.FdChildren.Add(Transform1096);
Shape1099 := TShapeNode.Create;;
LineSet1100 := TLineSetNode.Create;;
LineSet1100.SetVertexCount([2]);
Coordinate1101 := TCoordinateNode.Create;;
Coordinate1101.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1100.Coord := Coordinate1101;
{ from l_elbow to l_radiocarpal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1100.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1099.Geometry := LineSet1100;
{ METHOD .FdChildren.Add }
HAnimSegment1095.FdChildren.Add(Shape1099);
HAnimSite1103 := THAnimSiteNode.Create;;
HAnimSite1103.Translation := Vector3(-0.2142,0.8529,-0.0648);
end;

procedure InitHumanoid4_1Part82;
begin

TouchSensor1104 := TTouchSensorNode.Create;;
TouchSensor1104.Description := 'HAnimSite l_ulnar_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1103.FdChildren.Add(TouchSensor1104);
{ METHOD .FdChildren.Add }
HAnimSite1103.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1095.FdChildren.Add(HAnimSite1103);
{ METHOD .FdChildren.Add }
HAnimJoint1094.FdChildren.Add(HAnimSegment1095);
HAnimJoint1106 := THAnimJointNode.Create;;
HAnimJoint1106.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment1107 := THAnimSegmentNode.Create;;
Transform1108 := TTransformNode.Create;;
Transform1108.Scale := Vector3(0.2,0.2,0.2);
Transform1108.Translation := Vector3(0.2,0.85,-0.05);
Transform1108.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform1109 := TTransformNode.Create;;
Transform1109.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
{ METHOD .FdChildren.Add }
Transform1109.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1108.FdChildren.Add(Transform1109);
{ METHOD .FdChildren.Add }
HAnimSegment1107.FdChildren.Add(Transform1108);
Shape1111 := TShapeNode.Create;;
LineSet1112 := TLineSetNode.Create;;
LineSet1112.SetVertexCount([2]);
Coordinate1113 := TCoordinateNode.Create;;
Coordinate1113.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(8.0485,0.9213,1.3235)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1112.Coord := Coordinate1113;
{ from l_radiocarpal to l_midcarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1112.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1111.Geometry := LineSet1112;
{ METHOD .FdChildren.Add }
HAnimSegment1107.FdChildren.Add(Shape1111);
Shape1115 := TShapeNode.Create;;
LineSet1116 := TLineSetNode.Create;;
LineSet1116.SetVertexCount([2]);
end;

procedure InitHumanoid4_1Part83;
begin

Coordinate1117 := TCoordinateNode.Create;;
Coordinate1117.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(8.0485,0.9225,0.8386)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1116.Coord := Coordinate1117;
{ from l_radiocarpal to l_midcarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1116.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1115.Geometry := LineSet1116;
{ METHOD .FdChildren.Add }
HAnimSegment1107.FdChildren.Add(Shape1115);
Shape1119 := TShapeNode.Create;;
LineSet1120 := TLineSetNode.Create;;
LineSet1120.SetVertexCount([2]);
Coordinate1121 := TCoordinateNode.Create;;
Coordinate1121.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(8.0395,0.9246,0.2513)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1120.Coord := Coordinate1121;
{ from l_radiocarpal to l_midcarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1120.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1119.Geometry := LineSet1120;
{ METHOD .FdChildren.Add }
HAnimSegment1107.FdChildren.Add(Shape1119);
Shape1123 := TShapeNode.Create;;
LineSet1124 := TLineSetNode.Create;;
LineSet1124.SetVertexCount([2]);
Coordinate1125 := TCoordinateNode.Create;;
Coordinate1125.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(8.0395,0.921,-0.6795)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1124.Coord := Coordinate1125;
{ from l_radiocarpal to l_midcarpal_4_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1124.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1123.Geometry := LineSet1124;
{ METHOD .FdChildren.Add }
HAnimSegment1107.FdChildren.Add(Shape1123);
{ METHOD .FdChildren.Add }
HAnimJoint1106.FdChildren.Add(HAnimSegment1107);
HAnimJoint1127 := THAnimJointNode.Create;;
HAnimJoint1127.Center := Vector3(8.0485,0.9213,1.3235);
HAnimSegment1128 := THAnimSegmentNode.Create;;
Transform1129 := TTransformNode.Create;;
Transform1129.Translation := Vector3(8.0485,0.9213,1.3235);
end;

procedure InitHumanoid4_1Part84;
begin

Transform1130 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1130.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1129.FdChildren.Add(Transform1130);
{ METHOD .FdChildren.Add }
HAnimSegment1128.FdChildren.Add(Transform1129);
Shape1132 := TShapeNode.Create;;
LineSet1133 := TLineSetNode.Create;;
LineSet1133.SetVertexCount([2]);
Coordinate1134 := TCoordinateNode.Create;;
Coordinate1134.SetPoint([Vector3(8.0485,0.9213,1.3235),Vector3(0.1924,0.8472,-0.0534)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1133.Coord := Coordinate1134;
{ from l_midcarpal_1 to l_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1133.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1132.Geometry := LineSet1133;
{ METHOD .FdChildren.Add }
HAnimSegment1128.FdChildren.Add(Shape1132);
{ METHOD .FdChildren.Add }
HAnimJoint1127.FdChildren.Add(HAnimSegment1128);
HAnimJoint1136 := THAnimJointNode.Create;;
HAnimJoint1136.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1137 := THAnimSegmentNode.Create;;
Transform1138 := TTransformNode.Create;;
Transform1138.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform1139 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1139.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1138.FdChildren.Add(Transform1139);
{ METHOD .FdChildren.Add }
HAnimSegment1137.FdChildren.Add(Transform1138);
Shape1141 := TShapeNode.Create;;
LineSet1142 := TLineSetNode.Create;;
LineSet1142.SetVertexCount([2]);
Coordinate1143 := TCoordinateNode.Create;;
Coordinate1143.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1142.Coord := Coordinate1143;
end;

procedure InitHumanoid4_1Part85;
begin

{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1142.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1141.Geometry := LineSet1142;
{ METHOD .FdChildren.Add }
HAnimSegment1137.FdChildren.Add(Shape1141);
{ METHOD .FdChildren.Add }
HAnimJoint1136.FdChildren.Add(HAnimSegment1137);
HAnimJoint1145 := THAnimJointNode.Create;;
HAnimJoint1145.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1146 := THAnimSegmentNode.Create;;
Transform1147 := TTransformNode.Create;;
Transform1147.Translation := Vector3(0.1951,0.8226,0.0246);
Transform1148 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1148.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1147.FdChildren.Add(Transform1148);
{ METHOD .FdChildren.Add }
HAnimSegment1146.FdChildren.Add(Transform1147);
Shape1150 := TShapeNode.Create;;
LineSet1151 := TLineSetNode.Create;;
LineSet1151.SetVertexCount([2]);
Coordinate1152 := TCoordinateNode.Create;;
Coordinate1152.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1151.Coord := Coordinate1152;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1151.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1150.Geometry := LineSet1151;
{ METHOD .FdChildren.Add }
HAnimSegment1146.FdChildren.Add(Shape1150);
HAnimSite1154 := THAnimSiteNode.Create;;
TouchSensor1155 := TTouchSensorNode.Create;;
TouchSensor1155.Description := 'HAnimSite l_carpal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite1154.FdChildren.Add(TouchSensor1155);
{ METHOD .FdChildren.Add }
HAnimSite1154.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1146.FdChildren.Add(HAnimSite1154);
{ METHOD .FdChildren.Add }
HAnimJoint1145.FdChildren.Add(HAnimSegment1146);
HAnimJoint1157 := THAnimJointNode.Create;;
end;

procedure InitHumanoid4_1Part86;
begin

HAnimJoint1157.Center := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
HAnimJoint1145.FdChildren.Add(HAnimJoint1157);
{ METHOD .FdChildren.Add }
HAnimJoint1136.FdChildren.Add(HAnimJoint1145);
{ METHOD .FdChildren.Add }
HAnimJoint1127.FdChildren.Add(HAnimJoint1136);
{ METHOD .FdChildren.Add }
HAnimJoint1106.FdChildren.Add(HAnimJoint1127);
HAnimJoint1158 := THAnimJointNode.Create;;
HAnimJoint1158.Center := Vector3(8.0485,0.9225,0.8386);
HAnimSegment1159 := THAnimSegmentNode.Create;;
Transform1160 := TTransformNode.Create;;
Transform1160.Translation := Vector3(8.0485,0.9225,0.8386);
Transform1161 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1161.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1160.FdChildren.Add(Transform1161);
{ METHOD .FdChildren.Add }
HAnimSegment1159.FdChildren.Add(Transform1160);
Shape1163 := TShapeNode.Create;;
LineSet1164 := TLineSetNode.Create;;
LineSet1164.SetVertexCount([2]);
Coordinate1165 := TCoordinateNode.Create;;
Coordinate1165.SetPoint([Vector3(8.0485,0.9225,0.8386),Vector3(0.1983,0.8024,-0.028)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1164.Coord := Coordinate1165;
{ from l_midcarpal_2 to l_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1164.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1163.Geometry := LineSet1164;
{ METHOD .FdChildren.Add }
HAnimSegment1159.FdChildren.Add(Shape1163);
HAnimSite1167 := THAnimSiteNode.Create;;
HAnimSite1167.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1168 := TTouchSensorNode.Create;;
TouchSensor1168.Description := 'HAnimSite l_metacarpal_phalanx_2_pt';
{ METHOD .FdChildren.Add }
HAnimSite1167.FdChildren.Add(TouchSensor1168);
{ METHOD .FdChildren.Add }
HAnimSite1167.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1159.FdChildren.Add(HAnimSite1167);
{ METHOD .FdChildren.Add }
HAnimJoint1158.FdChildren.Add(HAnimSegment1159);
end;

procedure InitHumanoid4_1Part87;
begin

HAnimJoint1170 := THAnimJointNode.Create;;
HAnimJoint1170.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1171 := THAnimSegmentNode.Create;;
Transform1172 := TTransformNode.Create;;
Transform1172.Translation := Vector3(0.1983,0.8024,-0.028);
Transform1173 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1173.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1172.FdChildren.Add(Transform1173);
{ METHOD .FdChildren.Add }
HAnimSegment1171.FdChildren.Add(Transform1172);
Shape1175 := TShapeNode.Create;;
LineSet1176 := TLineSetNode.Create;;
LineSet1176.SetVertexCount([2]);
Coordinate1177 := TCoordinateNode.Create;;
Coordinate1177.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1176.Coord := Coordinate1177;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1176.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1175.Geometry := LineSet1176;
{ METHOD .FdChildren.Add }
HAnimSegment1171.FdChildren.Add(Shape1175);
{ METHOD .FdChildren.Add }
HAnimJoint1170.FdChildren.Add(HAnimSegment1171);
HAnimJoint1179 := THAnimJointNode.Create;;
HAnimJoint1179.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment1180 := THAnimSegmentNode.Create;;
Transform1181 := TTransformNode.Create;;
Transform1181.Translation := Vector3(0.1983,0.7815,-0.028);
Transform1182 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1182.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1181.FdChildren.Add(Transform1182);
{ METHOD .FdChildren.Add }
HAnimSegment1180.FdChildren.Add(Transform1181);
Shape1184 := TShapeNode.Create;
end;

procedure InitHumanoid4_1Part88;
begin
;
LineSet1185 := TLineSetNode.Create;;
LineSet1185.SetVertexCount([2]);
Coordinate1186 := TCoordinateNode.Create;;
Coordinate1186.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1185.Coord := Coordinate1186;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1185.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1184.Geometry := LineSet1185;
{ METHOD .FdChildren.Add }
HAnimSegment1180.FdChildren.Add(Shape1184);
{ METHOD .FdChildren.Add }
HAnimJoint1179.FdChildren.Add(HAnimSegment1180);
HAnimJoint1188 := THAnimJointNode.Create;;
HAnimJoint1188.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1189 := THAnimSegmentNode.Create;;
Transform1190 := TTransformNode.Create;;
Transform1190.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform1191 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1191.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1190.FdChildren.Add(Transform1191);
{ METHOD .FdChildren.Add }
HAnimSegment1189.FdChildren.Add(Transform1190);
Shape1193 := TShapeNode.Create;;
LineSet1194 := TLineSetNode.Create;;
LineSet1194.SetVertexCount([2]);
Coordinate1195 := TCoordinateNode.Create;;
Coordinate1195.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1194.Coord := Coordinate1195;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1194.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1193.Geometry := LineSet1194;
{ METHOD .FdChildren.Add }
HAnimSegment1189.FdChildren.Add(Shape1193);
HAnimSite1197 := THAnimSiteNode.Create;;
TouchSensor1198 := TTouchSensorNode.Create;
end;

procedure InitHumanoid4_1Part89;
begin
;
TouchSensor1198.Description := 'HAnimSite l_carpal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite1197.FdChildren.Add(TouchSensor1198);
{ METHOD .FdChildren.Add }
HAnimSite1197.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1189.FdChildren.Add(HAnimSite1197);
HAnimSite1200 := THAnimSiteNode.Create;;
HAnimSite1200.Translation := Vector3(0.2056,0.6743,-0.0482);
TouchSensor1201 := TTouchSensorNode.Create;;
TouchSensor1201.Description := 'HAnimSite l_dactylion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1200.FdChildren.Add(TouchSensor1201);
{ METHOD .FdChildren.Add }
HAnimSite1200.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1189.FdChildren.Add(HAnimSite1200);
{ METHOD .FdChildren.Add }
HAnimJoint1188.FdChildren.Add(HAnimSegment1189);
HAnimJoint1203 := THAnimJointNode.Create;;
HAnimJoint1203.Center := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint1188.FdChildren.Add(HAnimJoint1203);
{ METHOD .FdChildren.Add }
HAnimJoint1179.FdChildren.Add(HAnimJoint1188);
{ METHOD .FdChildren.Add }
HAnimJoint1170.FdChildren.Add(HAnimJoint1179);
{ METHOD .FdChildren.Add }
HAnimJoint1158.FdChildren.Add(HAnimJoint1170);
{ METHOD .FdChildren.Add }
HAnimJoint1106.FdChildren.Add(HAnimJoint1158);
HAnimJoint1204 := THAnimJointNode.Create;;
HAnimJoint1204.Center := Vector3(8.0395,0.9246,0.2513);
HAnimSegment1205 := THAnimSegmentNode.Create;;
Transform1206 := TTransformNode.Create;;
Transform1206.Translation := Vector3(8.0395,0.9246,0.2513);
Transform1207 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1207.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1206.FdChildren.Add(Transform1207);
{ METHOD .FdChildren.Add }
HAnimSegment1205.FdChildren.Add(Transform1206);
Shape1209 := TShapeNode.Create;;
LineSet1210 := TLineSetNode.Create;;
end;

procedure InitHumanoid4_1Part90;
begin

LineSet1210.SetVertexCount([2]);
Coordinate1211 := TCoordinateNode.Create;;
Coordinate1211.SetPoint([Vector3(8.0395,0.9246,0.2513),Vector3(0.1987,0.8029,-0.053)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1210.Coord := Coordinate1211;
{ from l_midcarpal_3 to l_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1210.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1209.Geometry := LineSet1210;
{ METHOD .FdChildren.Add }
HAnimSegment1205.FdChildren.Add(Shape1209);
HAnimSite1213 := THAnimSiteNode.Create;;
TouchSensor1214 := TTouchSensorNode.Create;;
TouchSensor1214.Description := 'HAnimSite l_metacarpal_phalanx_3_pt';
{ METHOD .FdChildren.Add }
HAnimSite1213.FdChildren.Add(TouchSensor1214);
{ METHOD .FdChildren.Add }
HAnimSite1213.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1205.FdChildren.Add(HAnimSite1213);
{ METHOD .FdChildren.Add }
HAnimJoint1204.FdChildren.Add(HAnimSegment1205);
HAnimJoint1216 := THAnimJointNode.Create;;
HAnimJoint1216.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1217 := THAnimSegmentNode.Create;;
Transform1218 := TTransformNode.Create;;
Transform1218.Translation := Vector3(0.1987,0.8029,-0.053);
Transform1219 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1219.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1218.FdChildren.Add(Transform1219);
{ METHOD .FdChildren.Add }
HAnimSegment1217.FdChildren.Add(Transform1218);
Shape1221 := TShapeNode.Create;;
LineSet1222 := TLineSetNode.Create;;
LineSet1222.SetVertexCount([2]);
Coordinate1223 := TCoordinateNode.Create;;
Coordinate1223.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1222.Coord := Coordinate1223;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1222.Color := ColorRGBA32;
end;

procedure InitHumanoid4_1Part91;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1221.Geometry := LineSet1222;
{ METHOD .FdChildren.Add }
HAnimSegment1217.FdChildren.Add(Shape1221);
{ METHOD .FdChildren.Add }
HAnimJoint1216.FdChildren.Add(HAnimSegment1217);
HAnimJoint1225 := THAnimJointNode.Create;;
HAnimJoint1225.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1226 := THAnimSegmentNode.Create;;
Transform1227 := TTransformNode.Create;;
Transform1227.Translation := Vector3(0.1987,0.7818,-0.053);
Transform1228 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1228.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1227.FdChildren.Add(Transform1228);
{ METHOD .FdChildren.Add }
HAnimSegment1226.FdChildren.Add(Transform1227);
Shape1230 := TShapeNode.Create;;
LineSet1231 := TLineSetNode.Create;;
LineSet1231.SetVertexCount([2]);
Coordinate1232 := TCoordinateNode.Create;;
Coordinate1232.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1231.Coord := Coordinate1232;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1231.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1230.Geometry := LineSet1231;
{ METHOD .FdChildren.Add }
HAnimSegment1226.FdChildren.Add(Shape1230);
{ METHOD .FdChildren.Add }
HAnimJoint1225.FdChildren.Add(HAnimSegment1226);
HAnimJoint1234 := THAnimJointNode.Create;;
HAnimJoint1234.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1235 := THAnimSegmentNode.Create;;
Transform1236 := TTransformNode.Create;;
Transform1236.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform1237 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1237.FdChildren.Add(Shape25);
end;

procedure InitHumanoid4_1Part92;
begin

{ METHOD .FdChildren.Add }
Transform1236.FdChildren.Add(Transform1237);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(Transform1236);
Shape1239 := TShapeNode.Create;;
LineSet1240 := TLineSetNode.Create;;
LineSet1240.SetVertexCount([2]);
Coordinate1241 := TCoordinateNode.Create;;
Coordinate1241.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1240.Coord := Coordinate1241;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1240.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1239.Geometry := LineSet1240;
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(Shape1239);
HAnimSite1243 := THAnimSiteNode.Create;;
TouchSensor1244 := TTouchSensorNode.Create;;
TouchSensor1244.Description := 'HAnimSite l_carpal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite1243.FdChildren.Add(TouchSensor1244);
{ METHOD .FdChildren.Add }
HAnimSite1243.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1243);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimSegment1235);
HAnimJoint1246 := THAnimJointNode.Create;;
HAnimJoint1246.Center := Vector3(0.2026,0.7011,-0.0494);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1246);
{ METHOD .FdChildren.Add }
HAnimJoint1225.FdChildren.Add(HAnimJoint1234);
{ METHOD .FdChildren.Add }
HAnimJoint1216.FdChildren.Add(HAnimJoint1225);
{ METHOD .FdChildren.Add }
HAnimJoint1204.FdChildren.Add(HAnimJoint1216);
{ METHOD .FdChildren.Add }
HAnimJoint1106.FdChildren.Add(HAnimJoint1204);
HAnimJoint1247 := THAnimJointNode.Create;;
HAnimJoint1247.Center := Vector3(8.0395,0.921,-0.6795);
HAnimSegment1248 := THAnimSegmentNode.Create;;
Transform1249 := TTransformNode.Create;;
Transform1249.Translation := Vector3(8.0395,0.921,-0.6795);
Transform1250 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part93;
begin
;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1250.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1249.FdChildren.Add(Transform1250);
{ METHOD .FdChildren.Add }
HAnimSegment1248.FdChildren.Add(Transform1249);
Shape1252 := TShapeNode.Create;;
LineSet1253 := TLineSetNode.Create;;
LineSet1253.SetVertexCount([2]);
Coordinate1254 := TCoordinateNode.Create;;
Coordinate1254.SetPoint([Vector3(8.0395,0.921,-0.6795),Vector3(0.1956,0.8019,-0.0794)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1253.Coord := Coordinate1254;
{ from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1253.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1252.Geometry := LineSet1253;
{ METHOD .FdChildren.Add }
HAnimSegment1248.FdChildren.Add(Shape1252);
Shape1256 := TShapeNode.Create;;
LineSet1257 := TLineSetNode.Create;;
LineSet1257.SetVertexCount([2]);
Coordinate1258 := TCoordinateNode.Create;;
Coordinate1258.SetPoint([Vector3(8.0395,0.921,-0.6795),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1257.Coord := Coordinate1258;
{ from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1257.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1256.Geometry := LineSet1257;
{ METHOD .FdChildren.Add }
HAnimSegment1248.FdChildren.Add(Shape1256);
HAnimSite1260 := THAnimSiteNode.Create;;
HAnimSite1260.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1261 := TTouchSensorNode.Create;;
TouchSensor1261.Description := 'HAnimSite l_metacarpal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(TouchSensor1261);
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1248.FdChildren.Add(HAnimSite1260);
{ METHOD .FdChildren.Add }
HAnimJoint1247.FdChildren.Add(HAnimSegment1248);
HAnimJoint1263 := THAnimJointNode.Create;;
end;

procedure InitHumanoid4_1Part94;
begin

HAnimJoint1263.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1264 := THAnimSegmentNode.Create;;
Transform1265 := TTransformNode.Create;;
Transform1265.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform1266 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1266.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1265.FdChildren.Add(Transform1266);
{ METHOD .FdChildren.Add }
HAnimSegment1264.FdChildren.Add(Transform1265);
Shape1268 := TShapeNode.Create;;
LineSet1269 := TLineSetNode.Create;;
LineSet1269.SetVertexCount([2]);
Coordinate1270 := TCoordinateNode.Create;;
Coordinate1270.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1269.Coord := Coordinate1270;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1269.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1268.Geometry := LineSet1269;
{ METHOD .FdChildren.Add }
HAnimSegment1264.FdChildren.Add(Shape1268);
{ METHOD .FdChildren.Add }
HAnimJoint1263.FdChildren.Add(HAnimSegment1264);
HAnimJoint1272 := THAnimJointNode.Create;;
HAnimJoint1272.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1273 := THAnimSegmentNode.Create;;
Transform1274 := TTransformNode.Create;;
Transform1274.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform1275 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1275.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1274.FdChildren.Add(Transform1275);
{ METHOD .FdChildren.Add }
HAnimSegment1273.FdChildren.Add(Transform1274);
Shape1277 := TShapeNode.Create;;
LineSet1278 := TLineSetNode.Create;
end;

procedure InitHumanoid4_1Part95;
begin
;
LineSet1278.SetVertexCount([2]);
Coordinate1279 := TCoordinateNode.Create;;
Coordinate1279.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1278.Coord := Coordinate1279;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1278.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1277.Geometry := LineSet1278;
{ METHOD .FdChildren.Add }
HAnimSegment1273.FdChildren.Add(Shape1277);
{ METHOD .FdChildren.Add }
HAnimJoint1272.FdChildren.Add(HAnimSegment1273);
HAnimJoint1281 := THAnimJointNode.Create;;
HAnimJoint1281.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1282 := THAnimSegmentNode.Create;;
Transform1283 := TTransformNode.Create;;
Transform1283.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform1284 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1284.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1283.FdChildren.Add(Transform1284);
{ METHOD .FdChildren.Add }
HAnimSegment1282.FdChildren.Add(Transform1283);
Shape1286 := TShapeNode.Create;;
LineSet1287 := TLineSetNode.Create;;
LineSet1287.SetVertexCount([2]);
Coordinate1288 := TCoordinateNode.Create;;
Coordinate1288.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1287.Coord := Coordinate1288;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1287.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1286.Geometry := LineSet1287;
{ METHOD .FdChildren.Add }
HAnimSegment1282.FdChildren.Add(Shape1286);
HAnimSite1290 := THAnimSiteNode.Create;;
TouchSensor1291 := TTouchSensorNode.Create;;
TouchSensor1291.Description := 'HAnimSite l_carpal_distal_phalanx_4_tip';
end;

procedure InitHumanoid4_1Part96;
begin

{ METHOD .FdChildren.Add }
HAnimSite1290.FdChildren.Add(TouchSensor1291);
{ METHOD .FdChildren.Add }
HAnimSite1290.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1282.FdChildren.Add(HAnimSite1290);
{ METHOD .FdChildren.Add }
HAnimJoint1281.FdChildren.Add(HAnimSegment1282);
HAnimJoint1293 := THAnimJointNode.Create;;
HAnimJoint1293.Center := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
HAnimJoint1281.FdChildren.Add(HAnimJoint1293);
{ METHOD .FdChildren.Add }
HAnimJoint1272.FdChildren.Add(HAnimJoint1281);
{ METHOD .FdChildren.Add }
HAnimJoint1263.FdChildren.Add(HAnimJoint1272);
{ METHOD .FdChildren.Add }
HAnimJoint1247.FdChildren.Add(HAnimJoint1263);
HAnimJoint1294 := THAnimJointNode.Create;;
HAnimJoint1294.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1295 := THAnimSegmentNode.Create;;
Transform1296 := TTransformNode.Create;;
Transform1296.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform1297 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1297.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1296.FdChildren.Add(Transform1297);
{ METHOD .FdChildren.Add }
HAnimSegment1295.FdChildren.Add(Transform1296);
Shape1299 := TShapeNode.Create;;
LineSet1300 := TLineSetNode.Create;;
LineSet1300.SetVertexCount([2]);
Coordinate1301 := TCoordinateNode.Create;;
Coordinate1301.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1300.Coord := Coordinate1301;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1300.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1299.Geometry := LineSet1300;
{ METHOD .FdChildren.Add }
HAnimSegment1295.FdChildren.Add(Shape1299);
{ METHOD .FdChildren.Add }
HAnimJoint1294.FdChildren.Add(HAnimSegment1295);
HAnimJoint1303 := THAnimJointNode.Create;;
HAnimJoint1303.Center := Vector3(0.1925,0.7866,-0.1036);
end;

procedure InitHumanoid4_1Part97;
begin

HAnimSegment1304 := THAnimSegmentNode.Create;;
Transform1305 := TTransformNode.Create;;
Transform1305.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform1306 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1306.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1305.FdChildren.Add(Transform1306);
{ METHOD .FdChildren.Add }
HAnimSegment1304.FdChildren.Add(Transform1305);
Shape1308 := TShapeNode.Create;;
LineSet1309 := TLineSetNode.Create;;
LineSet1309.SetVertexCount([2]);
Coordinate1310 := TCoordinateNode.Create;;
Coordinate1310.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1309.Coord := Coordinate1310;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1309.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1308.Geometry := LineSet1309;
{ METHOD .FdChildren.Add }
HAnimSegment1304.FdChildren.Add(Shape1308);
{ METHOD .FdChildren.Add }
HAnimJoint1303.FdChildren.Add(HAnimSegment1304);
HAnimJoint1312 := THAnimJointNode.Create;;
HAnimJoint1312.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1313 := THAnimSegmentNode.Create;;
Transform1314 := TTransformNode.Create;;
Transform1314.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform1315 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1315.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1314.FdChildren.Add(Transform1315);
{ METHOD .FdChildren.Add }
HAnimSegment1313.FdChildren.Add(Transform1314);
Shape1317 := TShapeNode.Create;;
LineSet1318 := TLineSetNode.Create;;
end;

procedure InitHumanoid4_1Part98;
begin

LineSet1318.SetVertexCount([2]);
Coordinate1319 := TCoordinateNode.Create;;
Coordinate1319.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1318.Coord := Coordinate1319;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1318.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1317.Geometry := LineSet1318;
{ METHOD .FdChildren.Add }
HAnimSegment1313.FdChildren.Add(Shape1317);
HAnimSite1321 := THAnimSiteNode.Create;;
TouchSensor1322 := TTouchSensorNode.Create;;
TouchSensor1322.Description := 'HAnimSite l_carpal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite1321.FdChildren.Add(TouchSensor1322);
{ METHOD .FdChildren.Add }
HAnimSite1321.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1313.FdChildren.Add(HAnimSite1321);
{ METHOD .FdChildren.Add }
HAnimJoint1312.FdChildren.Add(HAnimSegment1313);
HAnimJoint1324 := THAnimJointNode.Create;;
HAnimJoint1324.Center := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
HAnimJoint1312.FdChildren.Add(HAnimJoint1324);
{ METHOD .FdChildren.Add }
HAnimJoint1303.FdChildren.Add(HAnimJoint1312);
{ METHOD .FdChildren.Add }
HAnimJoint1294.FdChildren.Add(HAnimJoint1303);
{ METHOD .FdChildren.Add }
HAnimJoint1247.FdChildren.Add(HAnimJoint1294);
{ METHOD .FdChildren.Add }
HAnimJoint1106.FdChildren.Add(HAnimJoint1247);
{ METHOD .FdChildren.Add }
HAnimJoint1094.FdChildren.Add(HAnimJoint1106);
{ METHOD .FdChildren.Add }
HAnimJoint1073.FdChildren.Add(HAnimJoint1094);
{ METHOD .FdChildren.Add }
HAnimJoint1058.FdChildren.Add(HAnimJoint1073);
{ METHOD .FdChildren.Add }
HAnimJoint1049.FdChildren.Add(HAnimJoint1058);
{ METHOD .FdChildren.Add }
HAnimJoint845.FdChildren.Add(HAnimJoint1049);
HAnimJoint1325 := THAnimJointNode.Create;;
HAnimJoint1325.Center := Vector3(-0.0694,1.46,-0.033);
HAnimSegment1326 := THAnimSegmentNode.Create;;
Transform1327 := TTransformNode.Create;;
Transform1327.Translation := Vector3(-0.0694,1.46,-0.033);
Transform1328 := TTransformNode.Create;;
end;

procedure InitHumanoid4_1Part99;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1328.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1327.FdChildren.Add(Transform1328);
{ METHOD .FdChildren.Add }
HAnimSegment1326.FdChildren.Add(Transform1327);
Shape1330 := TShapeNode.Create;;
LineSet1331 := TLineSetNode.Create;;
LineSet1331.SetVertexCount([2]);
Coordinate1332 := TCoordinateNode.Create;;
Coordinate1332.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1331.Coord := Coordinate1332;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1331.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1330.Geometry := LineSet1331;
{ METHOD .FdChildren.Add }
HAnimSegment1326.FdChildren.Add(Shape1330);
{ METHOD .FdChildren.Add }
HAnimJoint1325.FdChildren.Add(HAnimSegment1326);
HAnimJoint1334 := THAnimJointNode.Create;;
HAnimJoint1334.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimSegment1335 := THAnimSegmentNode.Create;;
Transform1336 := TTransformNode.Create;;
Transform1336.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1337 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1337.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1336.FdChildren.Add(Transform1337);
{ METHOD .FdChildren.Add }
HAnimSegment1335.FdChildren.Add(Transform1336);
Shape1339 := TShapeNode.Create;;
LineSet1340 := TLineSetNode.Create;;
LineSet1340.SetVertexCount([2]);
Coordinate1341 := TCoordinateNode.Create;;
Coordinate1341.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1340.Coord := Coordinate1341;
{ from r_acromioclavicular to r_shoulder vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1340.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1339.Geometry := LineSet1340;
end;

procedure InitHumanoid4_1Part100;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1335.FdChildren.Add(Shape1339);
HAnimSite1343 := THAnimSiteNode.Create;;
TouchSensor1344 := TTouchSensorNode.Create;;
TouchSensor1344.Description := 'HAnimSite r_bideltoid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1343.FdChildren.Add(TouchSensor1344);
{ METHOD .FdChildren.Add }
HAnimSite1343.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1335.FdChildren.Add(HAnimSite1343);
HAnimSite1346 := THAnimSiteNode.Create;;
HAnimSite1346.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1347 := TTouchSensorNode.Create;;
TouchSensor1347.Description := 'HAnimSite r_humeral_lateral_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1346.FdChildren.Add(TouchSensor1347);
{ METHOD .FdChildren.Add }
HAnimSite1346.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1335.FdChildren.Add(HAnimSite1346);
{ METHOD .FdChildren.Add }
HAnimJoint1334.FdChildren.Add(HAnimSegment1335);
HAnimJoint1349 := THAnimJointNode.Create;;
HAnimJoint1349.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment1350 := THAnimSegmentNode.Create;;
Transform1351 := TTransformNode.Create;;
Transform1351.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1352 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1352.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1351.FdChildren.Add(Transform1352);
{ METHOD .FdChildren.Add }
HAnimSegment1350.FdChildren.Add(Transform1351);
Shape1354 := TShapeNode.Create;;
LineSet1355 := TLineSetNode.Create;;
LineSet1355.SetVertexCount([2]);
Coordinate1356 := TCoordinateNode.Create;;
Coordinate1356.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
end;

procedure InitHumanoid4_1Part101;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1355.Coord := Coordinate1356;
{ from r_shoulder to r_elbow vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1355.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1354.Geometry := LineSet1355;
{ METHOD .FdChildren.Add }
HAnimSegment1350.FdChildren.Add(Shape1354);
HAnimSite1358 := THAnimSiteNode.Create;;
HAnimSite1358.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1359 := TTouchSensorNode.Create;;
TouchSensor1359.Description := 'HAnimSite r_humeral_medial_epicondyles_pt';
{ METHOD .FdChildren.Add }
HAnimSite1358.FdChildren.Add(TouchSensor1359);
{ METHOD .FdChildren.Add }
HAnimSite1358.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1350.FdChildren.Add(HAnimSite1358);
HAnimSite1361 := THAnimSiteNode.Create;;
HAnimSite1361.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1362 := TTouchSensorNode.Create;;
TouchSensor1362.Description := 'HAnimSite r_olecranon_pt';
{ METHOD .FdChildren.Add }
HAnimSite1361.FdChildren.Add(TouchSensor1362);
{ METHOD .FdChildren.Add }
HAnimSite1361.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1350.FdChildren.Add(HAnimSite1361);
HAnimSite1364 := THAnimSiteNode.Create;;
HAnimSite1364.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1365 := TTouchSensorNode.Create;;
TouchSensor1365.Description := 'HAnimSite r_radial_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1364.FdChildren.Add(TouchSensor1365);
{ METHOD .FdChildren.Add }
HAnimSite1364.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1350.FdChildren.Add(HAnimSite1364);
HAnimSite1367 := THAnimSiteNode.Create;;
HAnimSite1367.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1368 := TTouchSensorNode.Create;;
TouchSensor1368.Description := 'HAnimSite r_radiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1367.FdChildren.Add(TouchSensor1368);
{ METHOD .FdChildren.Add }
HAnimSite1367.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1350.FdChildren.Add(HAnimSite1367);
end;

procedure InitHumanoid4_1Part102;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1349.FdChildren.Add(HAnimSegment1350);
HAnimJoint1370 := THAnimJointNode.Create;;
HAnimJoint1370.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment1371 := THAnimSegmentNode.Create;;
Transform1372 := TTransformNode.Create;;
Transform1372.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1373 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1373.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1372.FdChildren.Add(Transform1373);
{ METHOD .FdChildren.Add }
HAnimSegment1371.FdChildren.Add(Transform1372);
Shape1375 := TShapeNode.Create;;
LineSet1376 := TLineSetNode.Create;;
LineSet1376.SetVertexCount([2]);
Coordinate1377 := TCoordinateNode.Create;;
Coordinate1377.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1376.Coord := Coordinate1377;
{ from r_elbow to r_radiocarpal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1376.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1375.Geometry := LineSet1376;
{ METHOD .FdChildren.Add }
HAnimSegment1371.FdChildren.Add(Shape1375);
HAnimSite1379 := THAnimSiteNode.Create;;
HAnimSite1379.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1380 := TTouchSensorNode.Create;;
TouchSensor1380.Description := 'HAnimSite r_ulnar_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1379.FdChildren.Add(TouchSensor1380);
{ METHOD .FdChildren.Add }
HAnimSite1379.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1371.FdChildren.Add(HAnimSite1379);
{ METHOD .FdChildren.Add }
HAnimJoint1370.FdChildren.Add(HAnimSegment1371);
HAnimJoint1382 := THAnimJointNode.Create;;
HAnimJoint1382.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment1383 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid4_1Part103;
begin
;
Transform1384 := TTransformNode.Create;;
Transform1384.Scale := Vector3(0.2,0.2,0.2);
Transform1384.Translation := Vector3(-0.2,0.85,-0.05);
Transform1384.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1385 := TTransformNode.Create;;
Transform1385.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
{ METHOD .FdChildren.Add }
Transform1385.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1384.FdChildren.Add(Transform1385);
{ METHOD .FdChildren.Add }
HAnimSegment1383.FdChildren.Add(Transform1384);
Shape1387 := TShapeNode.Create;;
LineSet1388 := TLineSetNode.Create;;
LineSet1388.SetVertexCount([2]);
Coordinate1389 := TCoordinateNode.Create;;
Coordinate1389.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-8.0515,0.9213,1.3235)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1388.Coord := Coordinate1389;
{ from r_radiocarpal to r_midcarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1388.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1387.Geometry := LineSet1388;
{ METHOD .FdChildren.Add }
HAnimSegment1383.FdChildren.Add(Shape1387);
Shape1391 := TShapeNode.Create;;
LineSet1392 := TLineSetNode.Create;;
LineSet1392.SetVertexCount([2]);
Coordinate1393 := TCoordinateNode.Create;;
Coordinate1393.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-8.0515,0.9225,0.8386)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1392.Coord := Coordinate1393;
{ from r_radiocarpal to r_midcarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1392.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1391.Geometry := LineSet1392;
{ METHOD .FdChildren.Add }
HAnimSegment1383.FdChildren.Add(Shape1391);
Shape1395 := TShapeNode.Create;;
LineSet1396 := TLineSetNode.Create;;
end;

procedure InitHumanoid4_1Part104;
begin

LineSet1396.SetVertexCount([2]);
Coordinate1397 := TCoordinateNode.Create;;
Coordinate1397.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-8.0405,0.9246,0.2513)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1396.Coord := Coordinate1397;
{ from r_radiocarpal to r_midcarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1396.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1395.Geometry := LineSet1396;
{ METHOD .FdChildren.Add }
HAnimSegment1383.FdChildren.Add(Shape1395);
Shape1399 := TShapeNode.Create;;
LineSet1400 := TLineSetNode.Create;;
LineSet1400.SetVertexCount([2]);
Coordinate1401 := TCoordinateNode.Create;;
Coordinate1401.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-8.0405,0.921,-0.6795)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1400.Coord := Coordinate1401;
{ from r_radiocarpal to r_midcarpal_4_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1400.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1399.Geometry := LineSet1400;
{ METHOD .FdChildren.Add }
HAnimSegment1383.FdChildren.Add(Shape1399);
{ METHOD .FdChildren.Add }
HAnimJoint1382.FdChildren.Add(HAnimSegment1383);
HAnimJoint1403 := THAnimJointNode.Create;;
HAnimJoint1403.Center := Vector3(-8.0515,0.9213,1.3235);
HAnimSegment1404 := THAnimSegmentNode.Create;;
Transform1405 := TTransformNode.Create;;
Transform1405.Translation := Vector3(-8.0515,0.9213,1.3235);
Transform1406 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1406.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1405.FdChildren.Add(Transform1406);
{ METHOD .FdChildren.Add }
HAnimSegment1404.FdChildren.Add(Transform1405);
Shape1408 := TShapeNode.Create;;
LineSet1409 := TLineSetNode.Create;;
LineSet1409.SetVertexCount([2]);
Coordinate1410 := TCoordinateNode.Create;
end;

procedure InitHumanoid4_1Part105;
begin
;
Coordinate1410.SetPoint([Vector3(-8.0515,0.9213,1.3235),Vector3(-0.1899,0.8502,-0.0473)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1409.Coord := Coordinate1410;
{ from r_midcarpal_1 to r_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1409.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1408.Geometry := LineSet1409;
{ METHOD .FdChildren.Add }
HAnimSegment1404.FdChildren.Add(Shape1408);
{ METHOD .FdChildren.Add }
HAnimJoint1403.FdChildren.Add(HAnimSegment1404);
HAnimJoint1412 := THAnimJointNode.Create;;
HAnimJoint1412.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimSegment1413 := THAnimSegmentNode.Create;;
Transform1414 := TTransformNode.Create;;
Transform1414.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1415 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1415.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1414.FdChildren.Add(Transform1415);
{ METHOD .FdChildren.Add }
HAnimSegment1413.FdChildren.Add(Transform1414);
Shape1417 := TShapeNode.Create;;
LineSet1418 := TLineSetNode.Create;;
LineSet1418.SetVertexCount([2]);
Coordinate1419 := TCoordinateNode.Create;;
Coordinate1419.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1418.Coord := Coordinate1419;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1418.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1417.Geometry := LineSet1418;
{ METHOD .FdChildren.Add }
HAnimSegment1413.FdChildren.Add(Shape1417);
{ METHOD .FdChildren.Add }
HAnimJoint1412.FdChildren.Add(HAnimSegment1413);
HAnimJoint1421 := THAnimJointNode.Create;;
HAnimJoint1421.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimSegment1422 := THAnimSegmentNode.Create;;
Transform1423 := TTransformNode.Create;;
end;

procedure InitHumanoid4_1Part106;
begin

Transform1423.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1424 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1424.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1423.FdChildren.Add(Transform1424);
{ METHOD .FdChildren.Add }
HAnimSegment1422.FdChildren.Add(Transform1423);
Shape1426 := TShapeNode.Create;;
LineSet1427 := TLineSetNode.Create;;
LineSet1427.SetVertexCount([2]);
Coordinate1428 := TCoordinateNode.Create;;
Coordinate1428.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1427.Coord := Coordinate1428;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1427.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1426.Geometry := LineSet1427;
{ METHOD .FdChildren.Add }
HAnimSegment1422.FdChildren.Add(Shape1426);
HAnimSite1430 := THAnimSiteNode.Create;;
TouchSensor1431 := TTouchSensorNode.Create;;
TouchSensor1431.Description := 'HAnimSite r_carpal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite1430.FdChildren.Add(TouchSensor1431);
{ METHOD .FdChildren.Add }
HAnimSite1430.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1422.FdChildren.Add(HAnimSite1430);
{ METHOD .FdChildren.Add }
HAnimJoint1421.FdChildren.Add(HAnimSegment1422);
HAnimJoint1433 := THAnimJointNode.Create;;
HAnimJoint1433.Center := Vector3(-0.1864,0.819,0.0506);
{ METHOD .FdChildren.Add }
HAnimJoint1421.FdChildren.Add(HAnimJoint1433);
{ METHOD .FdChildren.Add }
HAnimJoint1412.FdChildren.Add(HAnimJoint1421);
{ METHOD .FdChildren.Add }
HAnimJoint1403.FdChildren.Add(HAnimJoint1412);
{ METHOD .FdChildren.Add }
HAnimJoint1382.FdChildren.Add(HAnimJoint1403);
HAnimJoint1434 := THAnimJointNode.Create;;
HAnimJoint1434.Center := Vector3(-8.0515,0.9225,0.8386);
HAnimSegment1435 := THAnimSegmentNode.Create;;
Transform1436 := TTransformNode.Create;
end;

procedure InitHumanoid4_1Part107;
begin
;
Transform1436.Translation := Vector3(-8.0515,0.9225,0.8386);
Transform1437 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1437.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1436.FdChildren.Add(Transform1437);
{ METHOD .FdChildren.Add }
HAnimSegment1435.FdChildren.Add(Transform1436);
Shape1439 := TShapeNode.Create;;
LineSet1440 := TLineSetNode.Create;;
LineSet1440.SetVertexCount([2]);
Coordinate1441 := TCoordinateNode.Create;;
Coordinate1441.SetPoint([Vector3(-8.0515,0.9225,0.8386),Vector3(-0.1961,0.8055,-0.0218)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1440.Coord := Coordinate1441;
{ from r_midcarpal_2 to r_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1440.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1439.Geometry := LineSet1440;
{ METHOD .FdChildren.Add }
HAnimSegment1435.FdChildren.Add(Shape1439);
HAnimSite1443 := THAnimSiteNode.Create;;
HAnimSite1443.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1444 := TTouchSensorNode.Create;;
TouchSensor1444.Description := 'HAnimSite r_metacarpal_phalanx_2_pt';
{ METHOD .FdChildren.Add }
HAnimSite1443.FdChildren.Add(TouchSensor1444);
{ METHOD .FdChildren.Add }
HAnimSite1443.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1435.FdChildren.Add(HAnimSite1443);
{ METHOD .FdChildren.Add }
HAnimJoint1434.FdChildren.Add(HAnimSegment1435);
HAnimJoint1446 := THAnimJointNode.Create;;
HAnimJoint1446.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimSegment1447 := THAnimSegmentNode.Create;;
Transform1448 := TTransformNode.Create;;
Transform1448.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1449 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1449.FdChildren.Add(Shape25);
end;

procedure InitHumanoid4_1Part108;
begin

{ METHOD .FdChildren.Add }
Transform1448.FdChildren.Add(Transform1449);
{ METHOD .FdChildren.Add }
HAnimSegment1447.FdChildren.Add(Transform1448);
Shape1451 := TShapeNode.Create;;
LineSet1452 := TLineSetNode.Create;;
LineSet1452.SetVertexCount([2]);
Coordinate1453 := TCoordinateNode.Create;;
Coordinate1453.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1452.Coord := Coordinate1453;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1452.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1451.Geometry := LineSet1452;
{ METHOD .FdChildren.Add }
HAnimSegment1447.FdChildren.Add(Shape1451);
{ METHOD .FdChildren.Add }
HAnimJoint1446.FdChildren.Add(HAnimSegment1447);
HAnimJoint1455 := THAnimJointNode.Create;;
HAnimJoint1455.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimSegment1456 := THAnimSegmentNode.Create;;
Transform1457 := TTransformNode.Create;;
Transform1457.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1458 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1458.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1457.FdChildren.Add(Transform1458);
{ METHOD .FdChildren.Add }
HAnimSegment1456.FdChildren.Add(Transform1457);
Shape1460 := TShapeNode.Create;;
LineSet1461 := TLineSetNode.Create;;
LineSet1461.SetVertexCount([2]);
Coordinate1462 := TCoordinateNode.Create;;
Coordinate1462.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1461.Coord := Coordinate1462;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1461.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1460.Geometry := LineSet1461;
{ METHOD .FdChildren.Add }
HAnimSegment1456.FdChildren.Add(Shape1460);
end;

procedure InitHumanoid4_1Part109;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1455.FdChildren.Add(HAnimSegment1456);
HAnimJoint1464 := THAnimJointNode.Create;;
HAnimJoint1464.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimSegment1465 := THAnimSegmentNode.Create;;
Transform1466 := TTransformNode.Create;;
Transform1466.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1467 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1467.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1466.FdChildren.Add(Transform1467);
{ METHOD .FdChildren.Add }
HAnimSegment1465.FdChildren.Add(Transform1466);
Shape1469 := TShapeNode.Create;;
LineSet1470 := TLineSetNode.Create;;
LineSet1470.SetVertexCount([2]);
Coordinate1471 := TCoordinateNode.Create;;
Coordinate1471.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1470.Coord := Coordinate1471;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1470.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1469.Geometry := LineSet1470;
{ METHOD .FdChildren.Add }
HAnimSegment1465.FdChildren.Add(Shape1469);
HAnimSite1473 := THAnimSiteNode.Create;;
TouchSensor1474 := TTouchSensorNode.Create;;
TouchSensor1474.Description := 'HAnimSite r_carpal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite1473.FdChildren.Add(TouchSensor1474);
{ METHOD .FdChildren.Add }
HAnimSite1473.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1465.FdChildren.Add(HAnimSite1473);
HAnimSite1476 := THAnimSiteNode.Create;;
HAnimSite1476.Translation := Vector3(-0.1941,0.6772,-0.0423);
TouchSensor1477 := TTouchSensorNode.Create;;
TouchSensor1477.Description := 'HAnimSite r_dactylion_pt';
end;

procedure InitHumanoid4_1Part110;
begin

{ METHOD .FdChildren.Add }
HAnimSite1476.FdChildren.Add(TouchSensor1477);
{ METHOD .FdChildren.Add }
HAnimSite1476.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1465.FdChildren.Add(HAnimSite1476);
{ METHOD .FdChildren.Add }
HAnimJoint1464.FdChildren.Add(HAnimSegment1465);
HAnimJoint1479 := THAnimJointNode.Create;;
HAnimJoint1479.Center := Vector3(-0.1945,0.7169,-0.0173);
{ METHOD .FdChildren.Add }
HAnimJoint1464.FdChildren.Add(HAnimJoint1479);
{ METHOD .FdChildren.Add }
HAnimJoint1455.FdChildren.Add(HAnimJoint1464);
{ METHOD .FdChildren.Add }
HAnimJoint1446.FdChildren.Add(HAnimJoint1455);
{ METHOD .FdChildren.Add }
HAnimJoint1434.FdChildren.Add(HAnimJoint1446);
{ METHOD .FdChildren.Add }
HAnimJoint1382.FdChildren.Add(HAnimJoint1434);
HAnimJoint1480 := THAnimJointNode.Create;;
HAnimJoint1480.Center := Vector3(-8.0405,0.9246,0.2513);
HAnimSegment1481 := THAnimSegmentNode.Create;;
Transform1482 := TTransformNode.Create;;
Transform1482.Translation := Vector3(-8.0405,0.9246,0.2513);
Transform1483 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1483.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1482.FdChildren.Add(Transform1483);
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(Transform1482);
Shape1485 := TShapeNode.Create;;
LineSet1486 := TLineSetNode.Create;;
LineSet1486.SetVertexCount([2]);
Coordinate1487 := TCoordinateNode.Create;;
Coordinate1487.SetPoint([Vector3(-8.0405,0.9246,0.2513),Vector3(-0.1972,0.806,-0.0468)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1486.Coord := Coordinate1487;
{ from r_midcarpal_3 to r_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1486.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1485.Geometry := LineSet1486;
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(Shape1485);
HAnimSite1489 := THAnimSiteNode.Create;;
TouchSensor1490 := TTouchSensorNode.Create;
end;

procedure InitHumanoid4_1Part111;
begin
;
TouchSensor1490.Description := 'HAnimSite r_metacarpal_phalanx_3_pt';
{ METHOD .FdChildren.Add }
HAnimSite1489.FdChildren.Add(TouchSensor1490);
{ METHOD .FdChildren.Add }
HAnimSite1489.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(HAnimSite1489);
{ METHOD .FdChildren.Add }
HAnimJoint1480.FdChildren.Add(HAnimSegment1481);
HAnimJoint1492 := THAnimJointNode.Create;;
HAnimJoint1492.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimSegment1493 := THAnimSegmentNode.Create;;
Transform1494 := TTransformNode.Create;;
Transform1494.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1495 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1495.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1494.FdChildren.Add(Transform1495);
{ METHOD .FdChildren.Add }
HAnimSegment1493.FdChildren.Add(Transform1494);
Shape1497 := TShapeNode.Create;;
LineSet1498 := TLineSetNode.Create;;
LineSet1498.SetVertexCount([2]);
Coordinate1499 := TCoordinateNode.Create;;
Coordinate1499.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1498.Coord := Coordinate1499;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1498.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1497.Geometry := LineSet1498;
{ METHOD .FdChildren.Add }
HAnimSegment1493.FdChildren.Add(Shape1497);
{ METHOD .FdChildren.Add }
HAnimJoint1492.FdChildren.Add(HAnimSegment1493);
HAnimJoint1501 := THAnimJointNode.Create;;
HAnimJoint1501.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimSegment1502 := THAnimSegmentNode.Create;;
Transform1503 := TTransformNode.Create;;
Transform1503.Translation := Vector3(-0.1972,0.7849,-0.0468);
end;

procedure InitHumanoid4_1Part112;
begin

Transform1504 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1504.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1503.FdChildren.Add(Transform1504);
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Transform1503);
Shape1506 := TShapeNode.Create;;
LineSet1507 := TLineSetNode.Create;;
LineSet1507.SetVertexCount([2]);
Coordinate1508 := TCoordinateNode.Create;;
Coordinate1508.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1507.Coord := Coordinate1508;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1507.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1506.Geometry := LineSet1507;
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Shape1506);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimSegment1502);
HAnimJoint1510 := THAnimJointNode.Create;;
HAnimJoint1510.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimSegment1511 := THAnimSegmentNode.Create;;
Transform1512 := TTransformNode.Create;;
Transform1512.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1513 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1513.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1512.FdChildren.Add(Transform1513);
{ METHOD .FdChildren.Add }
HAnimSegment1511.FdChildren.Add(Transform1512);
Shape1515 := TShapeNode.Create;;
LineSet1516 := TLineSetNode.Create;;
LineSet1516.SetVertexCount([2]);
Coordinate1517 := TCoordinateNode.Create;;
Coordinate1517.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1516.Coord := Coordinate1517;
end;

procedure InitHumanoid4_1Part113;
begin

{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1516.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1515.Geometry := LineSet1516;
{ METHOD .FdChildren.Add }
HAnimSegment1511.FdChildren.Add(Shape1515);
HAnimSite1519 := THAnimSiteNode.Create;;
TouchSensor1520 := TTouchSensorNode.Create;;
TouchSensor1520.Description := 'HAnimSite r_carpal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite1519.FdChildren.Add(TouchSensor1520);
{ METHOD .FdChildren.Add }
HAnimSite1519.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1511.FdChildren.Add(HAnimSite1519);
{ METHOD .FdChildren.Add }
HAnimJoint1510.FdChildren.Add(HAnimSegment1511);
HAnimJoint1522 := THAnimJointNode.Create;;
HAnimJoint1522.Center := Vector3(-0.1939,0.7042,-0.0432);
{ METHOD .FdChildren.Add }
HAnimJoint1510.FdChildren.Add(HAnimJoint1522);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimJoint1510);
{ METHOD .FdChildren.Add }
HAnimJoint1492.FdChildren.Add(HAnimJoint1501);
{ METHOD .FdChildren.Add }
HAnimJoint1480.FdChildren.Add(HAnimJoint1492);
{ METHOD .FdChildren.Add }
HAnimJoint1382.FdChildren.Add(HAnimJoint1480);
HAnimJoint1523 := THAnimJointNode.Create;;
HAnimJoint1523.Center := Vector3(-8.0405,0.921,-0.6795);
HAnimSegment1524 := THAnimSegmentNode.Create;;
Transform1525 := TTransformNode.Create;;
Transform1525.Translation := Vector3(-8.0405,0.921,-0.6795);
Transform1526 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1526.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1525.FdChildren.Add(Transform1526);
{ METHOD .FdChildren.Add }
HAnimSegment1524.FdChildren.Add(Transform1525);
Shape1528 := TShapeNode.Create;;
LineSet1529 := TLineSetNode.Create;;
LineSet1529.SetVertexCount([2]);
Coordinate1530 := TCoordinateNode.Create;;
end;

procedure InitHumanoid4_1Part114;
begin

Coordinate1530.SetPoint([Vector3(-8.0405,0.921,-0.6795),Vector3(-0.1951,0.8049,-0.0732)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1529.Coord := Coordinate1530;
{ from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1529.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1528.Geometry := LineSet1529;
{ METHOD .FdChildren.Add }
HAnimSegment1524.FdChildren.Add(Shape1528);
Shape1532 := TShapeNode.Create;;
LineSet1533 := TLineSetNode.Create;;
LineSet1533.SetVertexCount([2]);
Coordinate1534 := TCoordinateNode.Create;;
Coordinate1534.SetPoint([Vector3(-8.0405,0.921,-0.6795),Vector3(-0.1926,0.8096,-0.0975)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1533.Coord := Coordinate1534;
{ from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1533.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1532.Geometry := LineSet1533;
{ METHOD .FdChildren.Add }
HAnimSegment1524.FdChildren.Add(Shape1532);
HAnimSite1536 := THAnimSiteNode.Create;;
HAnimSite1536.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1537 := TTouchSensorNode.Create;;
TouchSensor1537.Description := 'HAnimSite r_metacarpal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite1536.FdChildren.Add(TouchSensor1537);
{ METHOD .FdChildren.Add }
HAnimSite1536.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1524.FdChildren.Add(HAnimSite1536);
{ METHOD .FdChildren.Add }
HAnimJoint1523.FdChildren.Add(HAnimSegment1524);
HAnimJoint1539 := THAnimJointNode.Create;;
HAnimJoint1539.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimSegment1540 := THAnimSegmentNode.Create;;
Transform1541 := TTransformNode.Create;;
Transform1541.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1542 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1542.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1541.FdChildren.Add(Transform1542);
{ METHOD .FdChildren.Add }
HAnimSegment1540.FdChildren.Add(Transform1541);
end;

procedure InitHumanoid4_1Part115;
begin

Shape1544 := TShapeNode.Create;;
LineSet1545 := TLineSetNode.Create;;
LineSet1545.SetVertexCount([2]);
Coordinate1546 := TCoordinateNode.Create;;
Coordinate1546.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1545.Coord := Coordinate1546;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1545.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1544.Geometry := LineSet1545;
{ METHOD .FdChildren.Add }
HAnimSegment1540.FdChildren.Add(Shape1544);
{ METHOD .FdChildren.Add }
HAnimJoint1539.FdChildren.Add(HAnimSegment1540);
HAnimJoint1548 := THAnimJointNode.Create;;
HAnimJoint1548.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimSegment1549 := THAnimSegmentNode.Create;;
Transform1550 := TTransformNode.Create;;
Transform1550.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1551 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1551.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1550.FdChildren.Add(Transform1551);
{ METHOD .FdChildren.Add }
HAnimSegment1549.FdChildren.Add(Transform1550);
Shape1553 := TShapeNode.Create;;
LineSet1554 := TLineSetNode.Create;;
LineSet1554.SetVertexCount([2]);
Coordinate1555 := TCoordinateNode.Create;;
Coordinate1555.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1554.Coord := Coordinate1555;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1554.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1553.Geometry := LineSet1554;
{ METHOD .FdChildren.Add }
HAnimSegment1549.FdChildren.Add(Shape1553);
{ METHOD .FdChildren.Add }
HAnimJoint1548.FdChildren.Add(HAnimSegment1549);
HAnimJoint1557 := THAnimJointNode.Create;
end;

procedure InitHumanoid4_1Part116;
begin
;
HAnimJoint1557.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimSegment1558 := THAnimSegmentNode.Create;;
Transform1559 := TTransformNode.Create;;
Transform1559.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1560 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1560.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1559.FdChildren.Add(Transform1560);
{ METHOD .FdChildren.Add }
HAnimSegment1558.FdChildren.Add(Transform1559);
Shape1562 := TShapeNode.Create;;
LineSet1563 := TLineSetNode.Create;;
LineSet1563.SetVertexCount([2]);
Coordinate1564 := TCoordinateNode.Create;;
Coordinate1564.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1563.Coord := Coordinate1564;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1563.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1562.Geometry := LineSet1563;
{ METHOD .FdChildren.Add }
HAnimSegment1558.FdChildren.Add(Shape1562);
HAnimSite1566 := THAnimSiteNode.Create;;
TouchSensor1567 := TTouchSensorNode.Create;;
TouchSensor1567.Description := 'HAnimSite r_carpal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite1566.FdChildren.Add(TouchSensor1567);
{ METHOD .FdChildren.Add }
HAnimSite1566.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1558.FdChildren.Add(HAnimSite1566);
{ METHOD .FdChildren.Add }
HAnimJoint1557.FdChildren.Add(HAnimSegment1558);
HAnimJoint1569 := THAnimJointNode.Create;;
HAnimJoint1569.Center := Vector3(-0.1908,0.7077,-0.0706);
{ METHOD .FdChildren.Add }
HAnimJoint1557.FdChildren.Add(HAnimJoint1569);
{ METHOD .FdChildren.Add }
HAnimJoint1548.FdChildren.Add(HAnimJoint1557);
{ METHOD .FdChildren.Add }
HAnimJoint1539.FdChildren.Add(HAnimJoint1548);
{ METHOD .FdChildren.Add }
HAnimJoint1523.FdChildren.Add(HAnimJoint1539);
end;

procedure InitHumanoid4_1Part117;
begin

HAnimJoint1570 := THAnimJointNode.Create;;
HAnimJoint1570.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimSegment1571 := THAnimSegmentNode.Create;;
Transform1572 := TTransformNode.Create;;
Transform1572.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1573 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1573.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1572.FdChildren.Add(Transform1573);
{ METHOD .FdChildren.Add }
HAnimSegment1571.FdChildren.Add(Transform1572);
Shape1575 := TShapeNode.Create;;
LineSet1576 := TLineSetNode.Create;;
LineSet1576.SetVertexCount([2]);
Coordinate1577 := TCoordinateNode.Create;;
Coordinate1577.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1576.Coord := Coordinate1577;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1576.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1575.Geometry := LineSet1576;
{ METHOD .FdChildren.Add }
HAnimSegment1571.FdChildren.Add(Shape1575);
{ METHOD .FdChildren.Add }
HAnimJoint1570.FdChildren.Add(HAnimSegment1571);
HAnimJoint1579 := THAnimJointNode.Create;;
HAnimJoint1579.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimSegment1580 := THAnimSegmentNode.Create;;
Transform1581 := TTransformNode.Create;;
Transform1581.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1582 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1582.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1581.FdChildren.Add(Transform1582);
{ METHOD .FdChildren.Add }
HAnimSegment1580.FdChildren.Add(Transform1581);
Shape1584 := TShapeNode.Create;
end;

procedure InitHumanoid4_1Part118;
begin
;
LineSet1585 := TLineSetNode.Create;;
LineSet1585.SetVertexCount([2]);
Coordinate1586 := TCoordinateNode.Create;;
Coordinate1586.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1585.Coord := Coordinate1586;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1585.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1584.Geometry := LineSet1585;
{ METHOD .FdChildren.Add }
HAnimSegment1580.FdChildren.Add(Shape1584);
{ METHOD .FdChildren.Add }
HAnimJoint1579.FdChildren.Add(HAnimSegment1580);
HAnimJoint1588 := THAnimJointNode.Create;;
HAnimJoint1588.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimSegment1589 := THAnimSegmentNode.Create;;
Transform1590 := TTransformNode.Create;;
Transform1590.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1591 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1591.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform1590.FdChildren.Add(Transform1591);
{ METHOD .FdChildren.Add }
HAnimSegment1589.FdChildren.Add(Transform1590);
Shape1593 := TShapeNode.Create;;
LineSet1594 := TLineSetNode.Create;;
LineSet1594.SetVertexCount([2]);
Coordinate1595 := TCoordinateNode.Create;;
Coordinate1595.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1594.Coord := Coordinate1595;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1594.Color := ColorRGBA32;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1593.Geometry := LineSet1594;
{ METHOD .FdChildren.Add }
HAnimSegment1589.FdChildren.Add(Shape1593);
HAnimSite1597 := THAnimSiteNode.Create;;
TouchSensor1598 := TTouchSensorNode.Create;
end;

procedure InitHumanoid4_1Part119;
begin
;
TouchSensor1598.Description := 'HAnimSite r_carpal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite1597.FdChildren.Add(TouchSensor1598);
{ METHOD .FdChildren.Add }
HAnimSite1597.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
HAnimSegment1589.FdChildren.Add(HAnimSite1597);
{ METHOD .FdChildren.Add }
HAnimJoint1588.FdChildren.Add(HAnimSegment1589);
HAnimJoint1600 := THAnimJointNode.Create;;
HAnimJoint1600.Center := Vector3(-0.1908,0.754,-0.096);
{ METHOD .FdChildren.Add }
HAnimJoint1588.FdChildren.Add(HAnimJoint1600);
{ METHOD .FdChildren.Add }
HAnimJoint1579.FdChildren.Add(HAnimJoint1588);
{ METHOD .FdChildren.Add }
HAnimJoint1570.FdChildren.Add(HAnimJoint1579);
{ METHOD .FdChildren.Add }
HAnimJoint1523.FdChildren.Add(HAnimJoint1570);
{ METHOD .FdChildren.Add }
HAnimJoint1382.FdChildren.Add(HAnimJoint1523);
{ METHOD .FdChildren.Add }
HAnimJoint1370.FdChildren.Add(HAnimJoint1382);
{ METHOD .FdChildren.Add }
HAnimJoint1349.FdChildren.Add(HAnimJoint1370);
{ METHOD .FdChildren.Add }
HAnimJoint1334.FdChildren.Add(HAnimJoint1349);
{ METHOD .FdChildren.Add }
HAnimJoint1325.FdChildren.Add(HAnimJoint1334);
{ METHOD .FdChildren.Add }
HAnimJoint845.FdChildren.Add(HAnimJoint1325);
{ METHOD .FdChildren.Add }
HAnimJoint830.FdChildren.Add(HAnimJoint845);
{ METHOD .FdChildren.Add }
HAnimJoint821.FdChildren.Add(HAnimJoint830);
{ METHOD .FdChildren.Add }
HAnimJoint812.FdChildren.Add(HAnimJoint821);
{ METHOD .FdChildren.Add }
HAnimJoint803.FdChildren.Add(HAnimJoint812);
{ METHOD .FdChildren.Add }
HAnimJoint791.FdChildren.Add(HAnimJoint803);
{ METHOD .FdChildren.Add }
HAnimJoint770.FdChildren.Add(HAnimJoint791);
{ METHOD .FdChildren.Add }
HAnimJoint761.FdChildren.Add(HAnimJoint770);
{ METHOD .FdChildren.Add }
HAnimJoint752.FdChildren.Add(HAnimJoint761);
{ METHOD .FdChildren.Add }
HAnimJoint737.FdChildren.Add(HAnimJoint752);
{ METHOD .FdChildren.Add }
HAnimJoint725.FdChildren.Add(HAnimJoint737);
{ METHOD .FdChildren.Add }
HAnimJoint716.FdChildren.Add(HAnimJoint725);
{ METHOD .FdChildren.Add }
HAnimJoint707.FdChildren.Add(HAnimJoint716);
{ METHOD .FdChildren.Add }
HAnimJoint698.FdChildren.Add(HAnimJoint707);
{ METHOD .FdChildren.Add }
HAnimJoint680.FdChildren.Add(HAnimJoint698);
{ METHOD .FdChildren.Add }
HAnimJoint671.FdChildren.Add(HAnimJoint680);
{ METHOD .FdChildren.Add }
HAnimJoint662.FdChildren.Add(HAnimJoint671);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint662);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid43.FdSkeleton.Add(HAnimJoint45);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint45);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1058);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint311);
end;

procedure InitHumanoid4_1Part120;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1203);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1246);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1293);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1324);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1157);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1188);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1234);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1281);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1312);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1136);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1170);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1216);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1263);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1294);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint197);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint231);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint271);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1094);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1044);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1046);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1042);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint134);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint152);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1145);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1179);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1225);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1272);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1303);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint218);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint249);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint289);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint342);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint376);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1127);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1158);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1204);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1247);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1106);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1073);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1049);
end;

procedure InitHumanoid4_1Part121;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint180);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint167);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint270);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint310);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint363);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint397);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint230);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint258);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint298);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint351);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint385);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint206);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint240);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint280);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint333);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint364);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint320);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1334);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint575);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1479);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1522);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1569);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1600);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1433);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1464);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1510);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1557);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1588);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1412);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1446);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1492);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1539);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1570);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint461);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint495);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint535);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1370);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1045);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1047);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1043);
end;

procedure InitHumanoid4_1Part122;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint398);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint416);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1421);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1455);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1501);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1548);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1579);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint482);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint513);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint553);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint606);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint640);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1403);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1434);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1480);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1523);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1382);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1349);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1325);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint444);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint431);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint534);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint574);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint627);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint661);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint494);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint522);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint562);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint615);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint649);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint470);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint504);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint544);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint597);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint628);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint584);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint97);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint997);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint1048);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint955);
end;

procedure InitHumanoid4_1Part123;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint946);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint934);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint925);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint916);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint907);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint898);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint707);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint698);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint680);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint671);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint662);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint845);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint737);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint725);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint716);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint830);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint821);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint812);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint803);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint791);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint770);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint761);
{ METHOD .FdJoints.Add }
HAnimHumanoid43.FdJoints.Add(HAnimJoint752);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(HAnimHumanoid43);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateHumanoid4_1: TX3DRootNode;
begin
InitHumanoid4_1Part0;
InitHumanoid4_1Part1;
InitHumanoid4_1Part2;
InitHumanoid4_1Part3;
InitHumanoid4_1Part4;
InitHumanoid4_1Part5;
InitHumanoid4_1Part6;
InitHumanoid4_1Part7;
InitHumanoid4_1Part8;
InitHumanoid4_1Part9;
InitHumanoid4_1Part10;
InitHumanoid4_1Part11;
InitHumanoid4_1Part12;
InitHumanoid4_1Part13;
InitHumanoid4_1Part14;
InitHumanoid4_1Part15;
InitHumanoid4_1Part16;
InitHumanoid4_1Part17;
InitHumanoid4_1Part18;
InitHumanoid4_1Part19;
InitHumanoid4_1Part20;
InitHumanoid4_1Part21;
InitHumanoid4_1Part22;
InitHumanoid4_1Part23;
InitHumanoid4_1Part24;
InitHumanoid4_1Part25;
InitHumanoid4_1Part26;
InitHumanoid4_1Part27;
InitHumanoid4_1Part28;
InitHumanoid4_1Part29;
InitHumanoid4_1Part30;
InitHumanoid4_1Part31;
InitHumanoid4_1Part32;
InitHumanoid4_1Part33;
InitHumanoid4_1Part34;
InitHumanoid4_1Part35;
InitHumanoid4_1Part36;
InitHumanoid4_1Part37;
InitHumanoid4_1Part38;
InitHumanoid4_1Part39;
InitHumanoid4_1Part40;
InitHumanoid4_1Part41;
InitHumanoid4_1Part42;
InitHumanoid4_1Part43;
InitHumanoid4_1Part44;
InitHumanoid4_1Part45;
InitHumanoid4_1Part46;
InitHumanoid4_1Part47;
InitHumanoid4_1Part48;
InitHumanoid4_1Part49;
InitHumanoid4_1Part50;
InitHumanoid4_1Part51;
InitHumanoid4_1Part52;
InitHumanoid4_1Part53;
InitHumanoid4_1Part54;
InitHumanoid4_1Part55;
InitHumanoid4_1Part56;
InitHumanoid4_1Part57;
InitHumanoid4_1Part58;
InitHumanoid4_1Part59;
InitHumanoid4_1Part60;
InitHumanoid4_1Part61;
InitHumanoid4_1Part62;
InitHumanoid4_1Part63;
InitHumanoid4_1Part64;
InitHumanoid4_1Part65;
InitHumanoid4_1Part66;
InitHumanoid4_1Part67;
InitHumanoid4_1Part68;
InitHumanoid4_1Part69;
InitHumanoid4_1Part70;
InitHumanoid4_1Part71;
InitHumanoid4_1Part72;
InitHumanoid4_1Part73;
InitHumanoid4_1Part74;
InitHumanoid4_1Part75;
InitHumanoid4_1Part76;
InitHumanoid4_1Part77;
InitHumanoid4_1Part78;
InitHumanoid4_1Part79;
InitHumanoid4_1Part80;
InitHumanoid4_1Part81;
InitHumanoid4_1Part82;
InitHumanoid4_1Part83;
InitHumanoid4_1Part84;
InitHumanoid4_1Part85;
InitHumanoid4_1Part86;
InitHumanoid4_1Part87;
InitHumanoid4_1Part88;
InitHumanoid4_1Part89;
InitHumanoid4_1Part90;
InitHumanoid4_1Part91;
InitHumanoid4_1Part92;
InitHumanoid4_1Part93;
InitHumanoid4_1Part94;
InitHumanoid4_1Part95;
InitHumanoid4_1Part96;
InitHumanoid4_1Part97;
InitHumanoid4_1Part98;
InitHumanoid4_1Part99;
InitHumanoid4_1Part100;
InitHumanoid4_1Part101;
InitHumanoid4_1Part102;
InitHumanoid4_1Part103;
InitHumanoid4_1Part104;
InitHumanoid4_1Part105;
InitHumanoid4_1Part106;
InitHumanoid4_1Part107;
InitHumanoid4_1Part108;
InitHumanoid4_1Part109;
InitHumanoid4_1Part110;
InitHumanoid4_1Part111;
InitHumanoid4_1Part112;
InitHumanoid4_1Part113;
InitHumanoid4_1Part114;
InitHumanoid4_1Part115;
InitHumanoid4_1Part116;
InitHumanoid4_1Part117;
InitHumanoid4_1Part118;
InitHumanoid4_1Part119;
InitHumanoid4_1Part120;
InitHumanoid4_1Part121;
InitHumanoid4_1Part122;
InitHumanoid4_1Part123;
Result := X3D0;
end;

begin
end.
