function JohnJoint20: TX3DRootNode;
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
HAnimSegment1757: THAnimSegmentNode;
HAnimSegment1758: THAnimSegmentNode;
HAnimSegment1759: THAnimSegmentNode;
HAnimSegment1760: THAnimSegmentNode;
HAnimSegment1761: THAnimSegmentNode;
HAnimSegment1762: THAnimSegmentNode;
HAnimSegment1763: THAnimSegmentNode;
HAnimSegment1764: THAnimSegmentNode;
HAnimSegment1765: THAnimSegmentNode;
HAnimSegment1766: THAnimSegmentNode;
HAnimSegment1767: THAnimSegmentNode;
HAnimSegment1768: THAnimSegmentNode;
HAnimSegment1769: THAnimSegmentNode;
HAnimSegment1770: THAnimSegmentNode;
HAnimSegment1771: THAnimSegmentNode;
HAnimSegment1772: THAnimSegmentNode;
HAnimSegment1773: THAnimSegmentNode;
HAnimSegment1774: THAnimSegmentNode;
HAnimSegment1775: THAnimSegmentNode;
HAnimSegment1776: THAnimSegmentNode;
HAnimSegment1777: THAnimSegmentNode;
HAnimSegment1778: THAnimSegmentNode;
HAnimSegment1779: THAnimSegmentNode;
HAnimSegment1780: THAnimSegmentNode;
HAnimSegment1781: THAnimSegmentNode;
HAnimSegment1782: THAnimSegmentNode;
HAnimSegment1783: THAnimSegmentNode;
HAnimSegment1784: THAnimSegmentNode;
HAnimSegment1785: THAnimSegmentNode;
HAnimSegment1786: THAnimSegmentNode;
HAnimSegment1787: THAnimSegmentNode;
HAnimSegment1788: THAnimSegmentNode;
HAnimSegment1789: THAnimSegmentNode;
HAnimSegment1790: THAnimSegmentNode;
HAnimSegment1791: THAnimSegmentNode;
HAnimSegment1792: THAnimSegmentNode;
HAnimSegment1793: THAnimSegmentNode;
HAnimSegment1794: THAnimSegmentNode;
HAnimSegment1795: THAnimSegmentNode;
HAnimSegment1796: THAnimSegmentNode;
HAnimSegment1797: THAnimSegmentNode;
HAnimSegment1798: THAnimSegmentNode;
HAnimSegment1799: THAnimSegmentNode;
HAnimSegment1800: THAnimSegmentNode;
HAnimSegment1801: THAnimSegmentNode;
HAnimSegment1802: THAnimSegmentNode;
HAnimSegment1803: THAnimSegmentNode;
HAnimSegment1804: THAnimSegmentNode;
HAnimSegment1805: THAnimSegmentNode;
HAnimSegment1806: THAnimSegmentNode;
HAnimSegment1807: THAnimSegmentNode;
HAnimSegment1808: THAnimSegmentNode;
HAnimSegment1809: THAnimSegmentNode;
HAnimSegment1810: THAnimSegmentNode;
HAnimSegment1811: THAnimSegmentNode;
HAnimSegment1812: THAnimSegmentNode;
HAnimSegment1813: THAnimSegmentNode;
HAnimSegment1814: THAnimSegmentNode;
HAnimSegment1815: THAnimSegmentNode;
HAnimSegment1816: THAnimSegmentNode;
HAnimSegment1817: THAnimSegmentNode;
HAnimSegment1818: THAnimSegmentNode;
HAnimSegment1819: THAnimSegmentNode;
HAnimSegment1820: THAnimSegmentNode;
HAnimSegment1821: THAnimSegmentNode;
HAnimSegment1822: THAnimSegmentNode;
HAnimSegment1823: THAnimSegmentNode;
HAnimSegment1824: THAnimSegmentNode;
HAnimSegment1825: THAnimSegmentNode;
HAnimSegment1826: THAnimSegmentNode;
HAnimSegment1827: THAnimSegmentNode;
HAnimSegment1828: THAnimSegmentNode;
HAnimSegment1829: THAnimSegmentNode;
HAnimSegment1830: THAnimSegmentNode;
HAnimSegment1831: THAnimSegmentNode;
HAnimSegment1832: THAnimSegmentNode;
HAnimSegment1833: THAnimSegmentNode;
HAnimSegment1834: THAnimSegmentNode;
HAnimSegment1835: THAnimSegmentNode;
HAnimSegment1836: THAnimSegmentNode;
HAnimSegment1837: THAnimSegmentNode;
HAnimSegment1838: THAnimSegmentNode;
HAnimSegment1839: THAnimSegmentNode;
HAnimSegment1840: THAnimSegmentNode;
HAnimSegment1841: THAnimSegmentNode;
HAnimSegment1842: THAnimSegmentNode;
HAnimSegment1843: THAnimSegmentNode;
HAnimSegment1844: THAnimSegmentNode;
HAnimSegment1845: THAnimSegmentNode;
HAnimSegment1846: THAnimSegmentNode;
HAnimSegment1847: THAnimSegmentNode;
HAnimSegment1848: THAnimSegmentNode;
HAnimSegment1849: THAnimSegmentNode;
HAnimSegment1850: THAnimSegmentNode;
HAnimSegment1851: THAnimSegmentNode;
HAnimSegment1852: THAnimSegmentNode;
HAnimSegment1853: THAnimSegmentNode;
HAnimSegment1854: THAnimSegmentNode;
HAnimSegment1855: THAnimSegmentNode;
HAnimSegment1856: THAnimSegmentNode;
HAnimSegment1857: THAnimSegmentNode;
HAnimSegment1858: THAnimSegmentNode;
HAnimSegment1859: THAnimSegmentNode;
HAnimSegment1860: THAnimSegmentNode;
HAnimSegment1861: THAnimSegmentNode;
HAnimSegment1862: THAnimSegmentNode;
HAnimSegment1863: THAnimSegmentNode;
HAnimSegment1864: THAnimSegmentNode;
HAnimSegment1865: THAnimSegmentNode;
HAnimSegment1866: THAnimSegmentNode;
HAnimSegment1867: THAnimSegmentNode;
HAnimSegment1868: THAnimSegmentNode;
HAnimSegment1869: THAnimSegmentNode;
HAnimSegment1870: THAnimSegmentNode;
HAnimSegment1871: THAnimSegmentNode;
HAnimSegment1872: THAnimSegmentNode;
HAnimSegment1873: THAnimSegmentNode;
HAnimSegment1874: THAnimSegmentNode;
HAnimSegment1875: THAnimSegmentNode;
HAnimSite1876: THAnimSiteNode;
HAnimSite1877: THAnimSiteNode;
HAnimSite1878: THAnimSiteNode;
HAnimSite1879: THAnimSiteNode;
HAnimSite1880: THAnimSiteNode;
HAnimSite1881: THAnimSiteNode;
HAnimSite1882: THAnimSiteNode;
HAnimSite1883: THAnimSiteNode;
HAnimSite1884: THAnimSiteNode;
HAnimSite1885: THAnimSiteNode;
HAnimSite1886: THAnimSiteNode;
HAnimSite1887: THAnimSiteNode;
HAnimSite1888: THAnimSiteNode;
HAnimSite1889: THAnimSiteNode;
HAnimSite1890: THAnimSiteNode;
HAnimSite1891: THAnimSiteNode;
HAnimSite1892: THAnimSiteNode;
HAnimSite1893: THAnimSiteNode;
HAnimSite1894: THAnimSiteNode;
HAnimSite1895: THAnimSiteNode;
HAnimSite1896: THAnimSiteNode;
HAnimSite1897: THAnimSiteNode;
HAnimSite1898: THAnimSiteNode;
HAnimSite1899: THAnimSiteNode;
HAnimSite1900: THAnimSiteNode;
HAnimSite1901: THAnimSiteNode;
HAnimSite1902: THAnimSiteNode;
HAnimSite1903: THAnimSiteNode;
HAnimSite1904: THAnimSiteNode;
HAnimSite1905: THAnimSiteNode;
HAnimSite1906: THAnimSiteNode;
HAnimSite1907: THAnimSiteNode;
HAnimSite1908: THAnimSiteNode;
HAnimSite1909: THAnimSiteNode;
HAnimSite1910: THAnimSiteNode;
HAnimSite1911: THAnimSiteNode;
HAnimSite1912: THAnimSiteNode;
HAnimSite1913: THAnimSiteNode;
HAnimSite1914: THAnimSiteNode;
HAnimSite1915: THAnimSiteNode;
HAnimSite1916: THAnimSiteNode;
HAnimSite1917: THAnimSiteNode;
HAnimSite1918: THAnimSiteNode;
HAnimSite1919: THAnimSiteNode;
HAnimSite1920: THAnimSiteNode;
HAnimSite1921: THAnimSiteNode;
HAnimSite1922: THAnimSiteNode;
HAnimSite1923: THAnimSiteNode;
HAnimSite1924: THAnimSiteNode;
HAnimSite1925: THAnimSiteNode;
HAnimSite1926: THAnimSiteNode;
HAnimSite1927: THAnimSiteNode;
HAnimSite1928: THAnimSiteNode;
HAnimSite1929: THAnimSiteNode;
HAnimSite1930: THAnimSiteNode;
HAnimSite1931: THAnimSiteNode;
HAnimSite1932: THAnimSiteNode;
HAnimSite1933: THAnimSiteNode;
HAnimSite1934: THAnimSiteNode;
HAnimSite1935: THAnimSiteNode;
HAnimSite1936: THAnimSiteNode;
HAnimSite1937: THAnimSiteNode;
HAnimSite1938: THAnimSiteNode;
HAnimSite1939: THAnimSiteNode;
HAnimSite1940: THAnimSiteNode;
HAnimSite1941: THAnimSiteNode;
HAnimSite1942: THAnimSiteNode;
HAnimSite1943: THAnimSiteNode;
HAnimSite1944: THAnimSiteNode;
HAnimSite1945: THAnimSiteNode;
HAnimSite1946: THAnimSiteNode;
HAnimSite1947: THAnimSiteNode;
HAnimSite1948: THAnimSiteNode;
HAnimSite1949: THAnimSiteNode;
HAnimSite1950: THAnimSiteNode;
HAnimSite1951: THAnimSiteNode;
HAnimSite1952: THAnimSiteNode;
HAnimSite1953: THAnimSiteNode;
HAnimSite1954: THAnimSiteNode;
HAnimSite1955: THAnimSiteNode;
HAnimSite1956: THAnimSiteNode;
HAnimSite1957: THAnimSiteNode;
HAnimSite1958: THAnimSiteNode;
HAnimSite1959: THAnimSiteNode;
HAnimSite1960: THAnimSiteNode;
HAnimSite1961: THAnimSiteNode;
HAnimSite1962: THAnimSiteNode;
HAnimSite1963: THAnimSiteNode;
HAnimSite1964: THAnimSiteNode;
HAnimSite1965: THAnimSiteNode;
HAnimSite1966: THAnimSiteNode;
HAnimSite1967: THAnimSiteNode;
HAnimSite1968: THAnimSiteNode;
HAnimSite1969: THAnimSiteNode;
HAnimSite1970: THAnimSiteNode;
HAnimSite1971: THAnimSiteNode;
HAnimSite1972: THAnimSiteNode;
HAnimSite1973: THAnimSiteNode;
HAnimSite1974: THAnimSiteNode;
HAnimSite1975: THAnimSiteNode;
HAnimSite1976: THAnimSiteNode;
HAnimSite1977: THAnimSiteNode;
HAnimSite1978: THAnimSiteNode;
HAnimSite1979: THAnimSiteNode;
HAnimSite1980: THAnimSiteNode;
HAnimSite1981: THAnimSiteNode;
HAnimSite1982: THAnimSiteNode;
HAnimSite1983: THAnimSiteNode;
HAnimSite1984: THAnimSiteNode;
HAnimSite1985: THAnimSiteNode;
HAnimSite1986: THAnimSiteNode;
HAnimSite1987: THAnimSiteNode;
HAnimSite1988: THAnimSiteNode;
HAnimSite1989: THAnimSiteNode;
HAnimSite1990: THAnimSiteNode;
HAnimSite1991: THAnimSiteNode;
HAnimSite1992: THAnimSiteNode;
HAnimSite1993: THAnimSiteNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JohnJoint20.x3d';
X3D0.Meta['identifier'] := 'http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d';
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
X3D0.Meta['generator'] := 'h2.pl';
X3D0.Meta['modified'] := '20 Jan 2023';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '9 November 2020';
X3D0.Meta['license'] := '../license.html';
Group11 := TGroupNode.Create;
Transform12 := TTransformNode.Create;
{ DEF for markerfor XYZ axes }
Shape13 := TShapeNode.Create;
{ RGB lines showing XYZ axes }
IndexedLineSet14 := TIndexedLineSetNode.Create;
IndexedLineSet14.SetColorIndex([0,1,2]);
IndexedLineSet14.ColorPerVertex := False;
IndexedLineSet14.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate15 := TCoordinateNode.Create;
Coordinate15.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ .SetCoord }
IndexedLineSet14.Coord := Coordinate15;
Color16 := TColorNode.Create;
Color16.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet14.Color := Color16;
{ .SetGeometry }
Shape13.Geometry := IndexedLineSet14;
{ .AddChild }
Transform12.AddChildren([Shape13]);
{ .AddChildren }
Group11.AddChildren([Transform12]);
Group17 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform18 := TTransformNode.Create;
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(0,2,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.8,0,0);
Material23.Transparency := 0.3;
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Transform18.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.1,0);
Shape25 := TShapeNode.Create;
Sphere26 := TSphereNode.Create;
Sphere26.Radius := 0.02;
{ .SetGeometry }
Shape25.Geometry := Sphere26;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,0,0.8);
Material28.Transparency := 0.3;
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape25.Appearance := Appearance27;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform18.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.05,0);
Shape30 := TShapeNode.Create;
LineSet31 := TLineSetNode.Create;
LineSet31.SetVertexCount([2]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ .SetCoord }
LineSet31.Coord := Coordinate33;
{ .SetGeometry }
Shape30.Geometry := LineSet31;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Transform18.AddChildren([Transform29]);
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0,2.1,0);
Shape35 := TShapeNode.Create;
IndexedFaceSet36 := TIndexedFaceSetNode.Create;
IndexedFaceSet36.CreaseAngle := 0.5;
IndexedFaceSet36.Solid := False;
IndexedFaceSet36.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA37 := TColorRGBANode.Create;
ColorRGBA37.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
IndexedFaceSet36.Color := ColorRGBA37;
Coordinate38 := TCoordinateNode.Create;
Coordinate38.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet36.Coord := Coordinate38;
{ .SetGeometry }
Shape35.Geometry := IndexedFaceSet36;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.DiffuseColor := Vector3(1,1,0);
Material40.Transparency := 0.3;
{ .SetMaterial }
Appearance39.Material := Material40;
{ .SetAppearance }
Shape35.Appearance := Appearance39;
{ .AddChild }
Transform34.AddChildren([Shape35]);
{ .AddChildren }
Transform18.AddChildren([Transform34]);
{ .AddChildren }
Group17.AddChildren([Transform18]);
{ .AddChildren }
Group11.AddChildren([Group17]);
NavigationInfo41 := TNavigationInfoNode.Create;
NavigationInfo41.Speed := 1.5;
{ .AddChildren }
Group11.AddChildren([NavigationInfo41]);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'default';
{ .AddChildren }
Group11.AddChildren([Viewpoint42]);
HAnimHumanoid43 := THAnimHumanoidNode.Create;
HAnimHumanoid43.NameField := 'HAnim';
HAnimHumanoid43.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid43.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
Shape44 := TShapeNode.Create;
IndexedFaceSet45 := TIndexedFaceSetNode.Create;
IndexedFaceSet45.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet45.CreaseAngle := 3.1;
Coordinate46 := TCoordinateNode.Create;
Coordinate46.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetCoord }
IndexedFaceSet45.Coord := Coordinate46;
Color47 := TColorNode.Create;
Color47.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ .SetColor }
IndexedFaceSet45.Color := Color47;
{ .SetGeometry }
Shape44.Geometry := IndexedFaceSet45;
Appearance48 := TAppearanceNode.Create;
ImageTexture49 := TImageTextureNode.Create;
ImageTexture49.SetUrl(['../resources/images/zBlueSpiralBkg2.gif','../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ .SetTexture }
Appearance48.Texture := ImageTexture49;
Material50 := TMaterialNode.Create;
Material50.AmbientIntensity := 0.6;
Material50.DiffuseColor := Vector3(1,1,1);
Material50.Shininess := 0.6;
Material50.Transparency := 0.2;
{ .SetMaterial }
Appearance48.Material := Material50;
{ .SetAppearance }
Shape44.Appearance := Appearance48;
{ .SetSkin }
HAnimHumanoid43.SetSkin([Shape44]);
Coordinate51 := TCoordinateNode.Create;
Coordinate51 := Coordinate46;
{ .SetSkinCoord }
HAnimHumanoid43.SetSkinCoord(Coordinate51);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'humanoid_root';
HAnimJoint52.Center := Vector3(0,0.824,0.0277);
HAnimJoint52.SetUlimit([0,0,0]);
HAnimJoint52.SetLlimit([0,0,0]);
HAnimSegment53 := THAnimSegmentNode.Create;
HAnimSegment53.NameField := 'sacrum';
HAnimDisplacer54 := THAnimDisplacerNode.Create;
HAnimDisplacer54.NameField := 'sacrum_feature';
HAnimDisplacer54.SetCoordIndex([0]);
HAnimDisplacer54.SetDisplacements([Vector3(0,0,0)]);
{ .AddDisplacers }
HAnimSegment53.SetDisplacers([HAnimDisplacer54]);
HAnimDisplacer55 := THAnimDisplacerNode.Create;
HAnimDisplacer55.NameField := 'sacrum_config';
HAnimDisplacer55.SetCoordIndex([0]);
HAnimDisplacer55.SetDisplacements([Vector3(0,0,0)]);
{ .AddDisplacers }
HAnimSegment53.SetDisplacers([HAnimDisplacer55]);
Transform56 := TTransformNode.Create;
{ Empty Transform }
Transform57 := TTransformNode.Create;
{ Empty Transform }
Shape58 := TShapeNode.Create;
Shape58 := Shape25;
{ .AddChild }
Transform57.AddChildren([Shape58]);
{ .AddChildren }
Transform56.AddChildren([Transform57]);
{ .AddChildren }
HAnimSegment53.AddChildren([Transform56]);
Shape59 := TShapeNode.Create;
LineSet60 := TLineSetNode.Create;
LineSet60.SetVertexCount([2]);
Coordinate61 := TCoordinateNode.Create;
Coordinate61.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
LineSet60.Coord := Coordinate61;
{ from humanoid_root to sacroiliac vertices 2 }
ColorRGBA62 := TColorRGBANode.Create;
ColorRGBA62 := ColorRGBA32;
{ .SetColor }
LineSet60.Color := ColorRGBA62;
{ .SetGeometry }
Shape59.Geometry := LineSet60;
{ .AddChildren }
HAnimSegment53.AddChildren([Shape59]);
HAnimSite63 := THAnimSiteNode.Create;
HAnimSite63.NameField := 'buttocks_standing_wall_contact_point_pt';
HAnimSite63.Translation := Vector3(0,1,0);
TouchSensor64 := TTouchSensorNode.Create;
TouchSensor64.Description := 'HAnimSite buttocks_standing_wall_contact_point_pt';
{ .AddChildren }
HAnimSite63.AddChildren([TouchSensor64]);
Shape65 := TShapeNode.Create;
Shape65 := Shape35;
{ .AddChildren }
HAnimSite63.AddChildren([Shape65]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite63]);
HAnimSite66 := THAnimSiteNode.Create;
HAnimSite66.NameField := 'crotch_pt';
HAnimSite66.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor67 := TTouchSensorNode.Create;
TouchSensor67.Description := 'HAnimSite crotch_pt';
{ .AddChildren }
HAnimSite66.AddChildren([TouchSensor67]);
Shape68 := TShapeNode.Create;
Shape68 := Shape35;
{ .AddChildren }
HAnimSite66.AddChildren([Shape68]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite66]);
HAnimSite69 := THAnimSiteNode.Create;
HAnimSite69.NameField := 'l_asis_pt';
HAnimSite69.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor70 := TTouchSensorNode.Create;
TouchSensor70.Description := 'HAnimSite l_asis_pt';
{ .AddChildren }
HAnimSite69.AddChildren([TouchSensor70]);
Shape71 := TShapeNode.Create;
Shape71 := Shape35;
{ .AddChildren }
HAnimSite69.AddChildren([Shape71]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite69]);
HAnimSite72 := THAnimSiteNode.Create;
HAnimSite72.NameField := 'l_iliocristale_pt';
HAnimSite72.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor73 := TTouchSensorNode.Create;
TouchSensor73.Description := 'HAnimSite l_iliocristale_pt';
{ .AddChildren }
HAnimSite72.AddChildren([TouchSensor73]);
Shape74 := TShapeNode.Create;
Shape74 := Shape35;
{ .AddChildren }
HAnimSite72.AddChildren([Shape74]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite72]);
HAnimSite75 := THAnimSiteNode.Create;
HAnimSite75.NameField := 'l_psis_pt';
HAnimSite75.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor76 := TTouchSensorNode.Create;
TouchSensor76.Description := 'HAnimSite l_psis_pt';
{ .AddChildren }
HAnimSite75.AddChildren([TouchSensor76]);
Shape77 := TShapeNode.Create;
Shape77 := Shape35;
{ .AddChildren }
HAnimSite75.AddChildren([Shape77]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite75]);
HAnimSite78 := THAnimSiteNode.Create;
HAnimSite78.NameField := 'l_trochanterion_pt';
HAnimSite78.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor79 := TTouchSensorNode.Create;
TouchSensor79.Description := 'HAnimSite l_trochanterion_pt';
{ .AddChildren }
HAnimSite78.AddChildren([TouchSensor79]);
Shape80 := TShapeNode.Create;
Shape80 := Shape35;
{ .AddChildren }
HAnimSite78.AddChildren([Shape80]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite78]);
HAnimSite81 := THAnimSiteNode.Create;
HAnimSite81.NameField := 'r_asis_pt';
HAnimSite81.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor82 := TTouchSensorNode.Create;
TouchSensor82.Description := 'HAnimSite r_asis_pt';
{ .AddChildren }
HAnimSite81.AddChildren([TouchSensor82]);
Shape83 := TShapeNode.Create;
Shape83 := Shape35;
{ .AddChildren }
HAnimSite81.AddChildren([Shape83]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite81]);
HAnimSite84 := THAnimSiteNode.Create;
HAnimSite84.NameField := 'r_iliocristale_pt';
HAnimSite84.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor85 := TTouchSensorNode.Create;
TouchSensor85.Description := 'HAnimSite r_iliocristale_pt';
{ .AddChildren }
HAnimSite84.AddChildren([TouchSensor85]);
Shape86 := TShapeNode.Create;
Shape86 := Shape35;
{ .AddChildren }
HAnimSite84.AddChildren([Shape86]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite84]);
HAnimSite87 := THAnimSiteNode.Create;
HAnimSite87.NameField := 'r_psis_pt';
HAnimSite87.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor88 := TTouchSensorNode.Create;
TouchSensor88.Description := 'HAnimSite r_psis_pt';
{ .AddChildren }
HAnimSite87.AddChildren([TouchSensor88]);
Shape89 := TShapeNode.Create;
Shape89 := Shape35;
{ .AddChildren }
HAnimSite87.AddChildren([Shape89]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite87]);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'r_trochanterion_pt';
HAnimSite90.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'HAnimSite r_trochanterion_pt';
{ .AddChildren }
HAnimSite90.AddChildren([TouchSensor91]);
Shape92 := TShapeNode.Create;
Shape92 := Shape35;
{ .AddChildren }
HAnimSite90.AddChildren([Shape92]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite90]);
Shape93 := TShapeNode.Create;
LineSet94 := TLineSetNode.Create;
LineSet94.SetVertexCount([2]);
Coordinate95 := TCoordinateNode.Create;
Coordinate95.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ .SetCoord }
LineSet94.Coord := Coordinate95;
{ from humanoid_root to vl5 vertices 2 }
ColorRGBA96 := TColorRGBANode.Create;
ColorRGBA96 := ColorRGBA32;
{ .SetColor }
LineSet94.Color := ColorRGBA96;
{ .SetGeometry }
Shape93.Geometry := LineSet94;
{ .AddChildren }
HAnimSegment53.AddChildren([Shape93]);
HAnimSite97 := THAnimSiteNode.Create;
HAnimSite97.NameField := 'navel_pt';
HAnimSite97.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor98 := TTouchSensorNode.Create;
TouchSensor98.Description := 'HAnimSite navel_pt';
{ .AddChildren }
HAnimSite97.AddChildren([TouchSensor98]);
Shape99 := TShapeNode.Create;
Shape99 := Shape35;
{ .AddChildren }
HAnimSite97.AddChildren([Shape99]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite97]);
HAnimSite100 := THAnimSiteNode.Create;
HAnimSite100.NameField := 'waist_preferred_anterior_pt';
HAnimSite100.Translation := Vector3(0,1,0);
TouchSensor101 := TTouchSensorNode.Create;
TouchSensor101.Description := 'HAnimSite waist_preferred_anterior_pt';
{ .AddChildren }
HAnimSite100.AddChildren([TouchSensor101]);
Shape102 := TShapeNode.Create;
Shape102 := Shape35;
{ .AddChildren }
HAnimSite100.AddChildren([Shape102]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite100]);
HAnimSite103 := THAnimSiteNode.Create;
HAnimSite103.NameField := 'waist_preferred_posterior_pt';
HAnimSite103.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor104 := TTouchSensorNode.Create;
TouchSensor104.Description := 'HAnimSite waist_preferred_posterior_pt';
{ .AddChildren }
HAnimSite103.AddChildren([TouchSensor104]);
Shape105 := TShapeNode.Create;
Shape105 := Shape35;
{ .AddChildren }
HAnimSite103.AddChildren([Shape105]);
{ .AddChildren }
HAnimSegment53.AddChildren([HAnimSite103]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimSegment53]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'sacroiliac';
HAnimJoint106.Center := Vector3(0,0.9149,0.0016);
HAnimJoint106.SetUlimit([0,0,0]);
HAnimJoint106.SetLlimit([0,0,0]);
HAnimSegment107 := THAnimSegmentNode.Create;
HAnimSegment107.NameField := 'pelvis';
Transform108 := TTransformNode.Create;
{ Empty Transform }
Transform109 := TTransformNode.Create;
{ Empty Transform }
Shape110 := TShapeNode.Create;
Shape110 := Shape25;
{ .AddChild }
Transform109.AddChildren([Shape110]);
{ .AddChildren }
Transform108.AddChildren([Transform109]);
{ .AddChildren }
HAnimSegment107.AddChildren([Transform108]);
Shape111 := TShapeNode.Create;
LineSet112 := TLineSetNode.Create;
LineSet112.SetVertexCount([2]);
Coordinate113 := TCoordinateNode.Create;
Coordinate113.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet112.Coord := Coordinate113;
{ from sacroiliac to l_hip vertices 2 }
ColorRGBA114 := TColorRGBANode.Create;
ColorRGBA114 := ColorRGBA32;
{ .SetColor }
LineSet112.Color := ColorRGBA114;
{ .SetGeometry }
Shape111.Geometry := LineSet112;
{ .AddChildren }
HAnimSegment107.AddChildren([Shape111]);
HAnimSite115 := THAnimSiteNode.Create;
HAnimSite115.NameField := 'l_femoral_lateral_epicondyles_pt';
HAnimSite115.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor116 := TTouchSensorNode.Create;
TouchSensor116.Description := 'HAnimSite l_femoral_lateral_epicondyles_pt';
{ .AddChildren }
HAnimSite115.AddChildren([TouchSensor116]);
Shape117 := TShapeNode.Create;
Shape117 := Shape35;
{ .AddChildren }
HAnimSite115.AddChildren([Shape117]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite115]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'l_femoral_medial_epicondyles_pt';
HAnimSite118.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor119 := TTouchSensorNode.Create;
TouchSensor119.Description := 'HAnimSite l_femoral_medial_epicondyles_pt';
{ .AddChildren }
HAnimSite118.AddChildren([TouchSensor119]);
Shape120 := TShapeNode.Create;
Shape120 := Shape35;
{ .AddChildren }
HAnimSite118.AddChildren([Shape120]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite118]);
HAnimSite121 := THAnimSiteNode.Create;
HAnimSite121.NameField := 'l_knee_crease_pt';
HAnimSite121.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor122 := TTouchSensorNode.Create;
TouchSensor122.Description := 'HAnimSite l_knee_crease_pt';
{ .AddChildren }
HAnimSite121.AddChildren([TouchSensor122]);
Shape123 := TShapeNode.Create;
Shape123 := Shape35;
{ .AddChildren }
HAnimSite121.AddChildren([Shape123]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite121]);
HAnimSite124 := THAnimSiteNode.Create;
HAnimSite124.NameField := 'l_suprapatella_pt';
HAnimSite124.Translation := Vector3(0,1,0);
TouchSensor125 := TTouchSensorNode.Create;
TouchSensor125.Description := 'HAnimSite l_suprapatella_pt';
{ .AddChildren }
HAnimSite124.AddChildren([TouchSensor125]);
Shape126 := TShapeNode.Create;
Shape126 := Shape35;
{ .AddChildren }
HAnimSite124.AddChildren([Shape126]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite124]);
Shape127 := TShapeNode.Create;
LineSet128 := TLineSetNode.Create;
LineSet128.SetVertexCount([2]);
Coordinate129 := TCoordinateNode.Create;
Coordinate129.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ .SetCoord }
LineSet128.Coord := Coordinate129;
{ from sacroiliac to r_hip vertices 2 }
ColorRGBA130 := TColorRGBANode.Create;
ColorRGBA130 := ColorRGBA32;
{ .SetColor }
LineSet128.Color := ColorRGBA130;
{ .SetGeometry }
Shape127.Geometry := LineSet128;
{ .AddChildren }
HAnimSegment107.AddChildren([Shape127]);
HAnimSite131 := THAnimSiteNode.Create;
HAnimSite131.NameField := 'r_femoral_lateral_epicondyles_pt';
HAnimSite131.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor132 := TTouchSensorNode.Create;
TouchSensor132.Description := 'HAnimSite r_femoral_lateral_epicondyles_pt';
{ .AddChildren }
HAnimSite131.AddChildren([TouchSensor132]);
Shape133 := TShapeNode.Create;
Shape133 := Shape35;
{ .AddChildren }
HAnimSite131.AddChildren([Shape133]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite131]);
HAnimSite134 := THAnimSiteNode.Create;
HAnimSite134.NameField := 'r_femoral_medial_epicondyles_pt';
HAnimSite134.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor135 := TTouchSensorNode.Create;
TouchSensor135.Description := 'HAnimSite r_femoral_medial_epicondyles_pt';
{ .AddChildren }
HAnimSite134.AddChildren([TouchSensor135]);
Shape136 := TShapeNode.Create;
Shape136 := Shape35;
{ .AddChildren }
HAnimSite134.AddChildren([Shape136]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite134]);
HAnimSite137 := THAnimSiteNode.Create;
HAnimSite137.NameField := 'r_knee_crease_pt';
HAnimSite137.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor138 := TTouchSensorNode.Create;
TouchSensor138.Description := 'HAnimSite r_knee_crease_pt';
{ .AddChildren }
HAnimSite137.AddChildren([TouchSensor138]);
Shape139 := TShapeNode.Create;
Shape139 := Shape35;
{ .AddChildren }
HAnimSite137.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite137]);
HAnimSite140 := THAnimSiteNode.Create;
HAnimSite140.NameField := 'r_suprapatella_pt';
HAnimSite140.Translation := Vector3(0,1,0);
TouchSensor141 := TTouchSensorNode.Create;
TouchSensor141.Description := 'HAnimSite r_suprapatella_pt';
{ .AddChildren }
HAnimSite140.AddChildren([TouchSensor141]);
Shape142 := TShapeNode.Create;
Shape142 := Shape35;
{ .AddChildren }
HAnimSite140.AddChildren([Shape142]);
{ .AddChildren }
HAnimSegment107.AddChildren([HAnimSite140]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimSegment107]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'l_hip';
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint143.SetUlimit([0,0,0]);
HAnimJoint143.SetLlimit([0,0,0]);
HAnimSegment144 := THAnimSegmentNode.Create;
HAnimSegment144.NameField := 'l_thigh';
Transform145 := TTransformNode.Create;
{ Empty Transform }
Transform146 := TTransformNode.Create;
{ Empty Transform }
Shape147 := TShapeNode.Create;
Shape147 := Shape25;
{ .AddChild }
Transform146.AddChildren([Shape147]);
{ .AddChildren }
Transform145.AddChildren([Transform146]);
{ .AddChildren }
HAnimSegment144.AddChildren([Transform145]);
Shape148 := TShapeNode.Create;
LineSet149 := TLineSetNode.Create;
LineSet149.SetVertexCount([2]);
Coordinate150 := TCoordinateNode.Create;
Coordinate150.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet149.Coord := Coordinate150;
{ from l_hip to l_knee vertices 2 }
ColorRGBA151 := TColorRGBANode.Create;
ColorRGBA151 := ColorRGBA32;
{ .SetColor }
LineSet149.Color := ColorRGBA151;
{ .SetGeometry }
Shape148.Geometry := LineSet149;
{ .AddChildren }
HAnimSegment144.AddChildren([Shape148]);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.NameField := 'l_lateral_malleolus_pt';
HAnimSite152.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor153 := TTouchSensorNode.Create;
TouchSensor153.Description := 'HAnimSite l_lateral_malleolus_pt';
{ .AddChildren }
HAnimSite152.AddChildren([TouchSensor153]);
Shape154 := TShapeNode.Create;
Shape154 := Shape35;
{ .AddChildren }
HAnimSite152.AddChildren([Shape154]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite152]);
HAnimSite155 := THAnimSiteNode.Create;
HAnimSite155.NameField := 'l_medial_malleolus_pt';
HAnimSite155.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor156 := TTouchSensorNode.Create;
TouchSensor156.Description := 'HAnimSite l_medial_malleolus_pt';
{ .AddChildren }
HAnimSite155.AddChildren([TouchSensor156]);
Shape157 := TShapeNode.Create;
Shape157 := Shape35;
{ .AddChildren }
HAnimSite155.AddChildren([Shape157]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite155]);
HAnimSite158 := THAnimSiteNode.Create;
HAnimSite158.NameField := 'l_tibiale_pt';
HAnimSite158.Translation := Vector3(0,1,0);
TouchSensor159 := TTouchSensorNode.Create;
TouchSensor159.Description := 'HAnimSite l_tibiale_pt';
{ .AddChildren }
HAnimSite158.AddChildren([TouchSensor159]);
Shape160 := TShapeNode.Create;
Shape160 := Shape35;
{ .AddChildren }
HAnimSite158.AddChildren([Shape160]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite158]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimSegment144]);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.NameField := 'l_knee';
HAnimJoint161.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint161.SetUlimit([0,0,0]);
HAnimJoint161.SetLlimit([0,0,0]);
HAnimSegment162 := THAnimSegmentNode.Create;
HAnimSegment162.NameField := 'l_calf';
Transform163 := TTransformNode.Create;
{ Empty Transform }
Transform164 := TTransformNode.Create;
{ Empty Transform }
Shape165 := TShapeNode.Create;
Shape165 := Shape25;
{ .AddChild }
Transform164.AddChildren([Shape165]);
{ .AddChildren }
Transform163.AddChildren([Transform164]);
{ .AddChildren }
HAnimSegment162.AddChildren([Transform163]);
Shape166 := TShapeNode.Create;
LineSet167 := TLineSetNode.Create;
LineSet167.SetVertexCount([2]);
Coordinate168 := TCoordinateNode.Create;
Coordinate168.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet167.Coord := Coordinate168;
{ from l_knee to l_talocrural vertices 2 }
ColorRGBA169 := TColorRGBANode.Create;
ColorRGBA169 := ColorRGBA32;
{ .SetColor }
LineSet167.Color := ColorRGBA169;
{ .SetGeometry }
Shape166.Geometry := LineSet167;
{ .AddChildren }
HAnimSegment162.AddChildren([Shape166]);
HAnimSite170 := THAnimSiteNode.Create;
HAnimSite170.NameField := 'l_calcaneus_posterior_pt';
HAnimSite170.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor171 := TTouchSensorNode.Create;
TouchSensor171.Description := 'HAnimSite l_calcaneus_posterior_pt';
{ .AddChildren }
HAnimSite170.AddChildren([TouchSensor171]);
Shape172 := TShapeNode.Create;
Shape172 := Shape35;
{ .AddChildren }
HAnimSite170.AddChildren([Shape172]);
{ .AddChildren }
HAnimSegment162.AddChildren([HAnimSite170]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'l_sphyrion_pt';
HAnimSite173.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimSite l_sphyrion_pt';
{ .AddChildren }
HAnimSite173.AddChildren([TouchSensor174]);
Shape175 := TShapeNode.Create;
Shape175 := Shape35;
{ .AddChildren }
HAnimSite173.AddChildren([Shape175]);
{ .AddChildren }
HAnimSegment162.AddChildren([HAnimSite173]);
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimSegment162]);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.NameField := 'l_talocrural';
HAnimJoint176.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint176.SetUlimit([0,0,0]);
HAnimJoint176.SetLlimit([0,0,0]);
HAnimSegment177 := THAnimSegmentNode.Create;
HAnimSegment177.NameField := 'l_talus';
Transform178 := TTransformNode.Create;
Transform178.Scale := Vector3(0.15,0.15,0.15);
Transform178.Translation := Vector3(0.08,0.06,-0.025);
Transform178.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform179 := TTransformNode.Create;
{ Empty Transform left foot }
Shape180 := TShapeNode.Create;
Shape180 := Shape25;
{ .AddChild }
Transform179.AddChildren([Shape180]);
{ .AddChildren }
Transform178.AddChildren([Transform179]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform178]);
Shape181 := TShapeNode.Create;
LineSet182 := TLineSetNode.Create;
LineSet182.SetVertexCount([2]);
Coordinate183 := TCoordinateNode.Create;
Coordinate183.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0,1,0)]);
{ .SetCoord }
LineSet182.Coord := Coordinate183;
{ from l_talocrural to l_talocalcaneonavicular vertices 2 }
ColorRGBA184 := TColorRGBANode.Create;
ColorRGBA184 := ColorRGBA32;
{ .SetColor }
LineSet182.Color := ColorRGBA184;
{ .SetGeometry }
Shape181.Geometry := LineSet182;
{ .AddChildren }
HAnimSegment177.AddChildren([Shape181]);
Shape185 := TShapeNode.Create;
LineSet186 := TLineSetNode.Create;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0,1,0)]);
{ .SetCoord }
LineSet186.Coord := Coordinate187;
{ from l_talocrural to l_calcaneocuboid vertices 2 }
ColorRGBA188 := TColorRGBANode.Create;
ColorRGBA188 := ColorRGBA32;
{ .SetColor }
LineSet186.Color := ColorRGBA188;
{ .SetGeometry }
Shape185.Geometry := LineSet186;
{ .AddChildren }
HAnimSegment177.AddChildren([Shape185]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimSegment177]);
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189.NameField := 'l_talocalcaneonavicular';
HAnimJoint189.Center := Vector3(0,1,0);
HAnimJoint189.SetUlimit([0,0,0]);
HAnimJoint189.SetLlimit([0,0,0]);
HAnimSegment190 := THAnimSegmentNode.Create;
HAnimSegment190.NameField := 'l_navicular';
Transform191 := TTransformNode.Create;
{ Empty Transform }
Transform192 := TTransformNode.Create;
{ Empty Transform }
Shape193 := TShapeNode.Create;
Shape193 := Shape25;
{ .AddChild }
Transform192.AddChildren([Shape193]);
{ .AddChildren }
Transform191.AddChildren([Transform192]);
{ .AddChildren }
HAnimSegment190.AddChildren([Transform191]);
Shape194 := TShapeNode.Create;
LineSet195 := TLineSetNode.Create;
LineSet195.SetVertexCount([2]);
Coordinate196 := TCoordinateNode.Create;
Coordinate196.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet195.Coord := Coordinate196;
{ from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2 }
ColorRGBA197 := TColorRGBANode.Create;
ColorRGBA197 := ColorRGBA32;
{ .SetColor }
LineSet195.Color := ColorRGBA197;
{ .SetGeometry }
Shape194.Geometry := LineSet195;
{ .AddChildren }
HAnimSegment190.AddChildren([Shape194]);
Shape198 := TShapeNode.Create;
LineSet199 := TLineSetNode.Create;
LineSet199.SetVertexCount([2]);
Coordinate200 := TCoordinateNode.Create;
Coordinate200.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet199.Coord := Coordinate200;
{ from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2 }
ColorRGBA201 := TColorRGBANode.Create;
ColorRGBA201 := ColorRGBA32;
{ .SetColor }
LineSet199.Color := ColorRGBA201;
{ .SetGeometry }
Shape198.Geometry := LineSet199;
{ .AddChildren }
HAnimSegment190.AddChildren([Shape198]);
Shape202 := TShapeNode.Create;
LineSet203 := TLineSetNode.Create;
LineSet203.SetVertexCount([2]);
Coordinate204 := TCoordinateNode.Create;
Coordinate204.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet203.Coord := Coordinate204;
{ from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2 }
ColorRGBA205 := TColorRGBANode.Create;
ColorRGBA205 := ColorRGBA32;
{ .SetColor }
LineSet203.Color := ColorRGBA205;
{ .SetGeometry }
Shape202.Geometry := LineSet203;
{ .AddChildren }
HAnimSegment190.AddChildren([Shape202]);
{ .AddChildren }
HAnimJoint189.AddChildren([HAnimSegment190]);
HAnimJoint206 := THAnimJointNode.Create;
HAnimJoint206.NameField := 'l_cuneonavicular_1';
HAnimJoint206.Center := Vector3(0,1,0);
HAnimJoint206.SetUlimit([0,0,0]);
HAnimJoint206.SetLlimit([0,0,0]);
HAnimSegment207 := THAnimSegmentNode.Create;
HAnimSegment207.NameField := 'l_cuneiform_1';
Transform208 := TTransformNode.Create;
{ Empty Transform }
Transform209 := TTransformNode.Create;
{ Empty Transform }
Shape210 := TShapeNode.Create;
Shape210 := Shape25;
{ .AddChild }
Transform209.AddChildren([Shape210]);
{ .AddChildren }
Transform208.AddChildren([Transform209]);
{ .AddChildren }
HAnimSegment207.AddChildren([Transform208]);
Shape211 := TShapeNode.Create;
LineSet212 := TLineSetNode.Create;
LineSet212.SetVertexCount([2]);
Coordinate213 := TCoordinateNode.Create;
Coordinate213.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet212.Coord := Coordinate213;
{ from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2 }
ColorRGBA214 := TColorRGBANode.Create;
ColorRGBA214 := ColorRGBA32;
{ .SetColor }
LineSet212.Color := ColorRGBA214;
{ .SetGeometry }
Shape211.Geometry := LineSet212;
{ .AddChildren }
HAnimSegment207.AddChildren([Shape211]);
{ .AddChildren }
HAnimJoint206.AddChildren([HAnimSegment207]);
HAnimJoint215 := THAnimJointNode.Create;
HAnimJoint215.NameField := 'l_tarsometatarsal_1';
HAnimJoint215.Center := Vector3(0,1,0);
HAnimJoint215.SetUlimit([0,0,0]);
HAnimJoint215.SetLlimit([0,0,0]);
HAnimSegment216 := THAnimSegmentNode.Create;
HAnimSegment216.NameField := 'l_metatarsal_1';
Transform217 := TTransformNode.Create;
{ Empty Transform }
Transform218 := TTransformNode.Create;
{ Empty Transform }
Shape219 := TShapeNode.Create;
Shape219 := Shape25;
{ .AddChild }
Transform218.AddChildren([Shape219]);
{ .AddChildren }
Transform217.AddChildren([Transform218]);
{ .AddChildren }
HAnimSegment216.AddChildren([Transform217]);
Shape220 := TShapeNode.Create;
LineSet221 := TLineSetNode.Create;
LineSet221.SetVertexCount([2]);
Coordinate222 := TCoordinateNode.Create;
Coordinate222.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet221.Coord := Coordinate222;
{ from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2 }
ColorRGBA223 := TColorRGBANode.Create;
ColorRGBA223 := ColorRGBA32;
{ .SetColor }
LineSet221.Color := ColorRGBA223;
{ .SetGeometry }
Shape220.Geometry := LineSet221;
{ .AddChildren }
HAnimSegment216.AddChildren([Shape220]);
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224.NameField := 'l_metatarsal_phalanx_1_pt';
HAnimSite224.Translation := Vector3(0,1,0);
TouchSensor225 := TTouchSensorNode.Create;
TouchSensor225.Description := 'HAnimSite l_metatarsal_phalanx_1_pt';
{ .AddChildren }
HAnimSite224.AddChildren([TouchSensor225]);
Shape226 := TShapeNode.Create;
Shape226 := Shape35;
{ .AddChildren }
HAnimSite224.AddChildren([Shape226]);
{ .AddChildren }
HAnimSegment216.AddChildren([HAnimSite224]);
{ .AddChildren }
HAnimJoint215.AddChildren([HAnimSegment216]);
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227.NameField := 'l_metatarsophalangeal_1';
HAnimJoint227.Center := Vector3(0,1,0);
HAnimJoint227.SetUlimit([0,0,0]);
HAnimJoint227.SetLlimit([0,0,0]);
HAnimSegment228 := THAnimSegmentNode.Create;
HAnimSegment228.NameField := 'l_tarsal_proximal_phalanx_1';
Transform229 := TTransformNode.Create;
{ Empty Transform }
Transform230 := TTransformNode.Create;
{ Empty Transform }
Shape231 := TShapeNode.Create;
Shape231 := Shape25;
{ .AddChild }
Transform230.AddChildren([Shape231]);
{ .AddChildren }
Transform229.AddChildren([Transform230]);
{ .AddChildren }
HAnimSegment228.AddChildren([Transform229]);
Shape232 := TShapeNode.Create;
LineSet233 := TLineSetNode.Create;
LineSet233.SetVertexCount([2]);
Coordinate234 := TCoordinateNode.Create;
Coordinate234.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet233.Coord := Coordinate234;
{ from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2 }
ColorRGBA235 := TColorRGBANode.Create;
ColorRGBA235 := ColorRGBA32;
{ .SetColor }
LineSet233.Color := ColorRGBA235;
{ .SetGeometry }
Shape232.Geometry := LineSet233;
{ .AddChildren }
HAnimSegment228.AddChildren([Shape232]);
HAnimSite236 := THAnimSiteNode.Create;
HAnimSite236.NameField := 'l_tarsal_distal_phalanx_1_tip';
HAnimSite236.Translation := Vector3(0,1,0);
TouchSensor237 := TTouchSensorNode.Create;
TouchSensor237.Description := 'HAnimSite l_tarsal_distal_phalanx_1_tip';
{ .AddChildren }
HAnimSite236.AddChildren([TouchSensor237]);
Shape238 := TShapeNode.Create;
Shape238 := Shape35;
{ .AddChildren }
HAnimSite236.AddChildren([Shape238]);
{ .AddChildren }
HAnimSegment228.AddChildren([HAnimSite236]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimSegment228]);
HAnimJoint239 := THAnimJointNode.Create;
HAnimJoint239.NameField := 'l_tarsal_interphalangeal_1';
HAnimJoint239.Center := Vector3(0,1,0);
HAnimJoint239.SetUlimit([0,0,0]);
HAnimJoint239.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimJoint239]);
{ .AddChildren }
HAnimJoint215.AddChildren([HAnimJoint227]);
{ .AddChildren }
HAnimJoint206.AddChildren([HAnimJoint215]);
{ .AddChildren }
HAnimJoint189.AddChildren([HAnimJoint206]);
HAnimJoint240 := THAnimJointNode.Create;
HAnimJoint240.NameField := 'l_cuneonavicular_2';
HAnimJoint240.Center := Vector3(0,1,0);
HAnimJoint240.SetUlimit([0,0,0]);
HAnimJoint240.SetLlimit([0,0,0]);
HAnimSegment241 := THAnimSegmentNode.Create;
HAnimSegment241.NameField := 'l_cuneiform_2';
Transform242 := TTransformNode.Create;
{ Empty Transform }
Transform243 := TTransformNode.Create;
{ Empty Transform }
Shape244 := TShapeNode.Create;
Shape244 := Shape25;
{ .AddChild }
Transform243.AddChildren([Shape244]);
{ .AddChildren }
Transform242.AddChildren([Transform243]);
{ .AddChildren }
HAnimSegment241.AddChildren([Transform242]);
Shape245 := TShapeNode.Create;
LineSet246 := TLineSetNode.Create;
LineSet246.SetVertexCount([2]);
Coordinate247 := TCoordinateNode.Create;
Coordinate247.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet246.Coord := Coordinate247;
{ from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2 }
ColorRGBA248 := TColorRGBANode.Create;
ColorRGBA248 := ColorRGBA32;
{ .SetColor }
LineSet246.Color := ColorRGBA248;
{ .SetGeometry }
Shape245.Geometry := LineSet246;
{ .AddChildren }
HAnimSegment241.AddChildren([Shape245]);
{ .AddChildren }
HAnimJoint240.AddChildren([HAnimSegment241]);
HAnimJoint249 := THAnimJointNode.Create;
HAnimJoint249.NameField := 'l_tarsometatarsal_2';
HAnimJoint249.Center := Vector3(0,1,0);
HAnimJoint249.SetUlimit([0,0,0]);
HAnimJoint249.SetLlimit([0,0,0]);
HAnimSegment250 := THAnimSegmentNode.Create;
HAnimSegment250.NameField := 'l_metatarsal_2';
Transform251 := TTransformNode.Create;
{ Empty Transform }
Transform252 := TTransformNode.Create;
{ Empty Transform }
Shape253 := TShapeNode.Create;
Shape253 := Shape25;
{ .AddChild }
Transform252.AddChildren([Shape253]);
{ .AddChildren }
Transform251.AddChildren([Transform252]);
{ .AddChildren }
HAnimSegment250.AddChildren([Transform251]);
Shape254 := TShapeNode.Create;
LineSet255 := TLineSetNode.Create;
LineSet255.SetVertexCount([2]);
Coordinate256 := TCoordinateNode.Create;
Coordinate256.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet255.Coord := Coordinate256;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
ColorRGBA257 := TColorRGBANode.Create;
ColorRGBA257 := ColorRGBA32;
{ .SetColor }
LineSet255.Color := ColorRGBA257;
{ .SetGeometry }
Shape254.Geometry := LineSet255;
{ .AddChildren }
HAnimSegment250.AddChildren([Shape254]);
{ .AddChildren }
HAnimJoint249.AddChildren([HAnimSegment250]);
HAnimJoint258 := THAnimJointNode.Create;
HAnimJoint258.NameField := 'l_metatarsophalangeal_2';
HAnimJoint258.Center := Vector3(0,1,0);
HAnimJoint258.SetUlimit([0,0,0]);
HAnimJoint258.SetLlimit([0,0,0]);
HAnimSegment259 := THAnimSegmentNode.Create;
HAnimSegment259.NameField := 'l_tarsal_proximal_phalanx_2';
Transform260 := TTransformNode.Create;
{ Empty Transform }
Transform261 := TTransformNode.Create;
{ Empty Transform }
Shape262 := TShapeNode.Create;
Shape262 := Shape25;
{ .AddChild }
Transform261.AddChildren([Shape262]);
{ .AddChildren }
Transform260.AddChildren([Transform261]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform260]);
Shape263 := TShapeNode.Create;
LineSet264 := TLineSetNode.Create;
LineSet264.SetVertexCount([2]);
Coordinate265 := TCoordinateNode.Create;
Coordinate265.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet264.Coord := Coordinate265;
{ from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA266 := TColorRGBANode.Create;
ColorRGBA266 := ColorRGBA32;
{ .SetColor }
LineSet264.Color := ColorRGBA266;
{ .SetGeometry }
Shape263.Geometry := LineSet264;
{ .AddChildren }
HAnimSegment259.AddChildren([Shape263]);
{ .AddChildren }
HAnimJoint258.AddChildren([HAnimSegment259]);
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267.NameField := 'l_tarsal_proximal_interphalangeal_2';
HAnimJoint267.Center := Vector3(0,1,0);
HAnimJoint267.SetUlimit([0,0,0]);
HAnimJoint267.SetLlimit([0,0,0]);
HAnimSegment268 := THAnimSegmentNode.Create;
HAnimSegment268.NameField := 'l_tarsal_middle_phalanx_2';
Transform269 := TTransformNode.Create;
{ Empty Transform }
Transform270 := TTransformNode.Create;
{ Empty Transform }
Shape271 := TShapeNode.Create;
Shape271 := Shape25;
{ .AddChild }
Transform270.AddChildren([Shape271]);
{ .AddChildren }
Transform269.AddChildren([Transform270]);
{ .AddChildren }
HAnimSegment268.AddChildren([Transform269]);
Shape272 := TShapeNode.Create;
LineSet273 := TLineSetNode.Create;
LineSet273.SetVertexCount([2]);
Coordinate274 := TCoordinateNode.Create;
Coordinate274.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet273.Coord := Coordinate274;
{ from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
ColorRGBA275 := TColorRGBANode.Create;
ColorRGBA275 := ColorRGBA32;
{ .SetColor }
LineSet273.Color := ColorRGBA275;
{ .SetGeometry }
Shape272.Geometry := LineSet273;
{ .AddChildren }
HAnimSegment268.AddChildren([Shape272]);
HAnimSite276 := THAnimSiteNode.Create;
HAnimSite276.NameField := 'l_tarsal_distal_phalanx_2_tip';
HAnimSite276.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor277 := TTouchSensorNode.Create;
TouchSensor277.Description := 'HAnimSite l_tarsal_distal_phalanx_2_tip';
{ .AddChildren }
HAnimSite276.AddChildren([TouchSensor277]);
Shape278 := TShapeNode.Create;
Shape278 := Shape35;
{ .AddChildren }
HAnimSite276.AddChildren([Shape278]);
{ .AddChildren }
HAnimSegment268.AddChildren([HAnimSite276]);
{ .AddChildren }
HAnimJoint267.AddChildren([HAnimSegment268]);
HAnimJoint279 := THAnimJointNode.Create;
HAnimJoint279.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint279.Center := Vector3(0,1,0);
HAnimJoint279.SetUlimit([0,0,0]);
HAnimJoint279.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint267.AddChildren([HAnimJoint279]);
{ .AddChildren }
HAnimJoint258.AddChildren([HAnimJoint267]);
{ .AddChildren }
HAnimJoint249.AddChildren([HAnimJoint258]);
{ .AddChildren }
HAnimJoint240.AddChildren([HAnimJoint249]);
{ .AddChildren }
HAnimJoint189.AddChildren([HAnimJoint240]);
HAnimJoint280 := THAnimJointNode.Create;
HAnimJoint280.NameField := 'l_cuneonavicular_3';
HAnimJoint280.Center := Vector3(0,1,0);
HAnimJoint280.SetUlimit([0,0,0]);
HAnimJoint280.SetLlimit([0,0,0]);
HAnimSegment281 := THAnimSegmentNode.Create;
HAnimSegment281.NameField := 'l_cuneiform_3';
Transform282 := TTransformNode.Create;
{ Empty Transform }
Transform283 := TTransformNode.Create;
{ Empty Transform }
Shape284 := TShapeNode.Create;
Shape284 := Shape25;
{ .AddChild }
Transform283.AddChildren([Shape284]);
{ .AddChildren }
Transform282.AddChildren([Transform283]);
{ .AddChildren }
HAnimSegment281.AddChildren([Transform282]);
Shape285 := TShapeNode.Create;
LineSet286 := TLineSetNode.Create;
LineSet286.SetVertexCount([2]);
Coordinate287 := TCoordinateNode.Create;
Coordinate287.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet286.Coord := Coordinate287;
{ from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2 }
ColorRGBA288 := TColorRGBANode.Create;
ColorRGBA288 := ColorRGBA32;
{ .SetColor }
LineSet286.Color := ColorRGBA288;
{ .SetGeometry }
Shape285.Geometry := LineSet286;
{ .AddChildren }
HAnimSegment281.AddChildren([Shape285]);
{ .AddChildren }
HAnimJoint280.AddChildren([HAnimSegment281]);
HAnimJoint289 := THAnimJointNode.Create;
HAnimJoint289.NameField := 'l_tarsometatarsal_3';
HAnimJoint289.Center := Vector3(0,1,0);
HAnimJoint289.SetUlimit([0,0,0]);
HAnimJoint289.SetLlimit([0,0,0]);
HAnimSegment290 := THAnimSegmentNode.Create;
HAnimSegment290.NameField := 'l_metatarsal_3';
Transform291 := TTransformNode.Create;
{ Empty Transform }
Transform292 := TTransformNode.Create;
{ Empty Transform }
Shape293 := TShapeNode.Create;
Shape293 := Shape25;
{ .AddChild }
Transform292.AddChildren([Shape293]);
{ .AddChildren }
Transform291.AddChildren([Transform292]);
{ .AddChildren }
HAnimSegment290.AddChildren([Transform291]);
Shape294 := TShapeNode.Create;
LineSet295 := TLineSetNode.Create;
LineSet295.SetVertexCount([2]);
Coordinate296 := TCoordinateNode.Create;
Coordinate296.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet295.Coord := Coordinate296;
{ from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2 }
ColorRGBA297 := TColorRGBANode.Create;
ColorRGBA297 := ColorRGBA32;
{ .SetColor }
LineSet295.Color := ColorRGBA297;
{ .SetGeometry }
Shape294.Geometry := LineSet295;
{ .AddChildren }
HAnimSegment290.AddChildren([Shape294]);
{ .AddChildren }
HAnimJoint289.AddChildren([HAnimSegment290]);
HAnimJoint298 := THAnimJointNode.Create;
HAnimJoint298.NameField := 'l_metatarsophalangeal_3';
HAnimJoint298.Center := Vector3(0,1,0);
HAnimJoint298.SetUlimit([0,0,0]);
HAnimJoint298.SetLlimit([0,0,0]);
HAnimSegment299 := THAnimSegmentNode.Create;
HAnimSegment299.NameField := 'l_tarsal_proximal_phalanx_3';
Transform300 := TTransformNode.Create;
{ Empty Transform }
Transform301 := TTransformNode.Create;
{ Empty Transform }
Shape302 := TShapeNode.Create;
Shape302 := Shape25;
{ .AddChild }
Transform301.AddChildren([Shape302]);
{ .AddChildren }
Transform300.AddChildren([Transform301]);
{ .AddChildren }
HAnimSegment299.AddChildren([Transform300]);
Shape303 := TShapeNode.Create;
LineSet304 := TLineSetNode.Create;
LineSet304.SetVertexCount([2]);
Coordinate305 := TCoordinateNode.Create;
Coordinate305.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet304.Coord := Coordinate305;
{ from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA306 := TColorRGBANode.Create;
ColorRGBA306 := ColorRGBA32;
{ .SetColor }
LineSet304.Color := ColorRGBA306;
{ .SetGeometry }
Shape303.Geometry := LineSet304;
{ .AddChildren }
HAnimSegment299.AddChildren([Shape303]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimSegment299]);
HAnimJoint307 := THAnimJointNode.Create;
HAnimJoint307.NameField := 'l_tarsal_proximal_interphalangeal_3';
HAnimJoint307.Center := Vector3(0,1,0);
HAnimJoint307.SetUlimit([0,0,0]);
HAnimJoint307.SetLlimit([0,0,0]);
HAnimSegment308 := THAnimSegmentNode.Create;
HAnimSegment308.NameField := 'l_tarsal_middle_phalanx_3';
Transform309 := TTransformNode.Create;
{ Empty Transform }
Transform310 := TTransformNode.Create;
{ Empty Transform }
Shape311 := TShapeNode.Create;
Shape311 := Shape25;
{ .AddChild }
Transform310.AddChildren([Shape311]);
{ .AddChildren }
Transform309.AddChildren([Transform310]);
{ .AddChildren }
HAnimSegment308.AddChildren([Transform309]);
Shape312 := TShapeNode.Create;
LineSet313 := TLineSetNode.Create;
LineSet313.SetVertexCount([2]);
Coordinate314 := TCoordinateNode.Create;
Coordinate314.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet313.Coord := Coordinate314;
{ from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2 }
ColorRGBA315 := TColorRGBANode.Create;
ColorRGBA315 := ColorRGBA32;
{ .SetColor }
LineSet313.Color := ColorRGBA315;
{ .SetGeometry }
Shape312.Geometry := LineSet313;
{ .AddChildren }
HAnimSegment308.AddChildren([Shape312]);
HAnimSite316 := THAnimSiteNode.Create;
HAnimSite316.NameField := 'l_tarsal_distal_phalanx_3_tip';
HAnimSite316.Translation := Vector3(0,1,0);
TouchSensor317 := TTouchSensorNode.Create;
TouchSensor317.Description := 'HAnimSite l_tarsal_distal_phalanx_3_tip';
{ .AddChildren }
HAnimSite316.AddChildren([TouchSensor317]);
Shape318 := TShapeNode.Create;
Shape318 := Shape35;
{ .AddChildren }
HAnimSite316.AddChildren([Shape318]);
{ .AddChildren }
HAnimSegment308.AddChildren([HAnimSite316]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimSegment308]);
HAnimJoint319 := THAnimJointNode.Create;
HAnimJoint319.NameField := 'l_tarsal_distal_interphalangeal_3';
HAnimJoint319.Center := Vector3(0,1,0);
HAnimJoint319.SetUlimit([0,0,0]);
HAnimJoint319.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimJoint319]);
{ .AddChildren }
HAnimJoint298.AddChildren([HAnimJoint307]);
{ .AddChildren }
HAnimJoint289.AddChildren([HAnimJoint298]);
{ .AddChildren }
HAnimJoint280.AddChildren([HAnimJoint289]);
{ .AddChildren }
HAnimJoint189.AddChildren([HAnimJoint280]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimJoint189]);
HAnimJoint320 := THAnimJointNode.Create;
HAnimJoint320.NameField := 'l_calcaneocuboid';
HAnimJoint320.Center := Vector3(0,1,0);
HAnimJoint320.SetUlimit([0,0,0]);
HAnimJoint320.SetLlimit([0,0,0]);
HAnimSegment321 := THAnimSegmentNode.Create;
HAnimSegment321.NameField := 'l_calcaneus';
Transform322 := TTransformNode.Create;
{ Empty Transform }
Transform323 := TTransformNode.Create;
{ Empty Transform }
Shape324 := TShapeNode.Create;
Shape324 := Shape25;
{ .AddChild }
Transform323.AddChildren([Shape324]);
{ .AddChildren }
Transform322.AddChildren([Transform323]);
{ .AddChildren }
HAnimSegment321.AddChildren([Transform322]);
Shape325 := TShapeNode.Create;
LineSet326 := TLineSetNode.Create;
LineSet326.SetVertexCount([2]);
Coordinate327 := TCoordinateNode.Create;
Coordinate327.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet326.Coord := Coordinate327;
{ from l_calcaneocuboid to l_transversetarsal vertices 2 }
ColorRGBA328 := TColorRGBANode.Create;
ColorRGBA328 := ColorRGBA32;
{ .SetColor }
LineSet326.Color := ColorRGBA328;
{ .SetGeometry }
Shape325.Geometry := LineSet326;
{ .AddChildren }
HAnimSegment321.AddChildren([Shape325]);
{ .AddChildren }
HAnimJoint320.AddChildren([HAnimSegment321]);
HAnimJoint329 := THAnimJointNode.Create;
HAnimJoint329.NameField := 'l_transversetarsal';
HAnimJoint329.Center := Vector3(0,1,0);
HAnimJoint329.SetUlimit([0,0,0]);
HAnimJoint329.SetLlimit([0,0,0]);
HAnimSegment330 := THAnimSegmentNode.Create;
HAnimSegment330.NameField := 'l_cuboid';
Transform331 := TTransformNode.Create;
{ Empty Transform }
Transform332 := TTransformNode.Create;
{ Empty Transform }
Shape333 := TShapeNode.Create;
Shape333 := Shape25;
{ .AddChild }
Transform332.AddChildren([Shape333]);
{ .AddChildren }
Transform331.AddChildren([Transform332]);
{ .AddChildren }
HAnimSegment330.AddChildren([Transform331]);
Shape334 := TShapeNode.Create;
LineSet335 := TLineSetNode.Create;
LineSet335.SetVertexCount([2]);
Coordinate336 := TCoordinateNode.Create;
Coordinate336.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet335.Coord := Coordinate336;
{ from l_transversetarsal to l_tarsometatarsal_4 vertices 2 }
ColorRGBA337 := TColorRGBANode.Create;
ColorRGBA337 := ColorRGBA32;
{ .SetColor }
LineSet335.Color := ColorRGBA337;
{ .SetGeometry }
Shape334.Geometry := LineSet335;
{ .AddChildren }
HAnimSegment330.AddChildren([Shape334]);
Shape338 := TShapeNode.Create;
LineSet339 := TLineSetNode.Create;
LineSet339.SetVertexCount([2]);
Coordinate340 := TCoordinateNode.Create;
Coordinate340.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet339.Coord := Coordinate340;
{ from l_transversetarsal to l_tarsometatarsal_5 vertices 2 }
ColorRGBA341 := TColorRGBANode.Create;
ColorRGBA341 := ColorRGBA32;
{ .SetColor }
LineSet339.Color := ColorRGBA341;
{ .SetGeometry }
Shape338.Geometry := LineSet339;
{ .AddChildren }
HAnimSegment330.AddChildren([Shape338]);
{ .AddChildren }
HAnimJoint329.AddChildren([HAnimSegment330]);
HAnimJoint342 := THAnimJointNode.Create;
HAnimJoint342.NameField := 'l_tarsometatarsal_4';
HAnimJoint342.Center := Vector3(0,1,0);
HAnimJoint342.SetUlimit([0,0,0]);
HAnimJoint342.SetLlimit([0,0,0]);
HAnimSegment343 := THAnimSegmentNode.Create;
HAnimSegment343.NameField := 'l_metatarsal_4';
Transform344 := TTransformNode.Create;
{ Empty Transform }
Transform345 := TTransformNode.Create;
{ Empty Transform }
Shape346 := TShapeNode.Create;
Shape346 := Shape25;
{ .AddChild }
Transform345.AddChildren([Shape346]);
{ .AddChildren }
Transform344.AddChildren([Transform345]);
{ .AddChildren }
HAnimSegment343.AddChildren([Transform344]);
Shape347 := TShapeNode.Create;
LineSet348 := TLineSetNode.Create;
LineSet348.SetVertexCount([2]);
Coordinate349 := TCoordinateNode.Create;
Coordinate349.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet348.Coord := Coordinate349;
{ from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2 }
ColorRGBA350 := TColorRGBANode.Create;
ColorRGBA350 := ColorRGBA32;
{ .SetColor }
LineSet348.Color := ColorRGBA350;
{ .SetGeometry }
Shape347.Geometry := LineSet348;
{ .AddChildren }
HAnimSegment343.AddChildren([Shape347]);
{ .AddChildren }
HAnimJoint342.AddChildren([HAnimSegment343]);
HAnimJoint351 := THAnimJointNode.Create;
HAnimJoint351.NameField := 'l_metatarsophalangeal_4';
HAnimJoint351.Center := Vector3(0,1,0);
HAnimJoint351.SetUlimit([0,0,0]);
HAnimJoint351.SetLlimit([0,0,0]);
HAnimSegment352 := THAnimSegmentNode.Create;
HAnimSegment352.NameField := 'l_tarsal_proximal_phalanx_4';
Transform353 := TTransformNode.Create;
{ Empty Transform }
Transform354 := TTransformNode.Create;
{ Empty Transform }
Shape355 := TShapeNode.Create;
Shape355 := Shape25;
{ .AddChild }
Transform354.AddChildren([Shape355]);
{ .AddChildren }
Transform353.AddChildren([Transform354]);
{ .AddChildren }
HAnimSegment352.AddChildren([Transform353]);
Shape356 := TShapeNode.Create;
LineSet357 := TLineSetNode.Create;
LineSet357.SetVertexCount([2]);
Coordinate358 := TCoordinateNode.Create;
Coordinate358.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet357.Coord := Coordinate358;
{ from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA359 := TColorRGBANode.Create;
ColorRGBA359 := ColorRGBA32;
{ .SetColor }
LineSet357.Color := ColorRGBA359;
{ .SetGeometry }
Shape356.Geometry := LineSet357;
{ .AddChildren }
HAnimSegment352.AddChildren([Shape356]);
{ .AddChildren }
HAnimJoint351.AddChildren([HAnimSegment352]);
HAnimJoint360 := THAnimJointNode.Create;
HAnimJoint360.NameField := 'l_tarsal_proximal_interphalangeal_4';
HAnimJoint360.Center := Vector3(0,1,0);
HAnimJoint360.SetUlimit([0,0,0]);
HAnimJoint360.SetLlimit([0,0,0]);
HAnimSegment361 := THAnimSegmentNode.Create;
HAnimSegment361.NameField := 'l_tarsal_middle_phalanx_4';
Transform362 := TTransformNode.Create;
{ Empty Transform }
Transform363 := TTransformNode.Create;
{ Empty Transform }
Shape364 := TShapeNode.Create;
Shape364 := Shape25;
{ .AddChild }
Transform363.AddChildren([Shape364]);
{ .AddChildren }
Transform362.AddChildren([Transform363]);
{ .AddChildren }
HAnimSegment361.AddChildren([Transform362]);
Shape365 := TShapeNode.Create;
LineSet366 := TLineSetNode.Create;
LineSet366.SetVertexCount([2]);
Coordinate367 := TCoordinateNode.Create;
Coordinate367.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet366.Coord := Coordinate367;
{ from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2 }
ColorRGBA368 := TColorRGBANode.Create;
ColorRGBA368 := ColorRGBA32;
{ .SetColor }
LineSet366.Color := ColorRGBA368;
{ .SetGeometry }
Shape365.Geometry := LineSet366;
{ .AddChildren }
HAnimSegment361.AddChildren([Shape365]);
HAnimSite369 := THAnimSiteNode.Create;
HAnimSite369.NameField := 'l_tarsal_distal_phalanx_4_tip';
HAnimSite369.Translation := Vector3(0,1,0);
TouchSensor370 := TTouchSensorNode.Create;
TouchSensor370.Description := 'HAnimSite l_tarsal_distal_phalanx_4_tip';
{ .AddChildren }
HAnimSite369.AddChildren([TouchSensor370]);
Shape371 := TShapeNode.Create;
Shape371 := Shape35;
{ .AddChildren }
HAnimSite369.AddChildren([Shape371]);
{ .AddChildren }
HAnimSegment361.AddChildren([HAnimSite369]);
{ .AddChildren }
HAnimJoint360.AddChildren([HAnimSegment361]);
HAnimJoint372 := THAnimJointNode.Create;
HAnimJoint372.NameField := 'l_tarsal_distal_interphalangeal_4';
HAnimJoint372.Center := Vector3(0,1,0);
HAnimJoint372.SetUlimit([0,0,0]);
HAnimJoint372.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint360.AddChildren([HAnimJoint372]);
{ .AddChildren }
HAnimJoint351.AddChildren([HAnimJoint360]);
{ .AddChildren }
HAnimJoint342.AddChildren([HAnimJoint351]);
{ .AddChildren }
HAnimJoint329.AddChildren([HAnimJoint342]);
HAnimJoint373 := THAnimJointNode.Create;
HAnimJoint373.NameField := 'l_tarsometatarsal_5';
HAnimJoint373.Center := Vector3(0,1,0);
HAnimJoint373.SetUlimit([0,0,0]);
HAnimJoint373.SetLlimit([0,0,0]);
HAnimSegment374 := THAnimSegmentNode.Create;
HAnimSegment374.NameField := 'l_metatarsal_5';
Transform375 := TTransformNode.Create;
{ Empty Transform }
Transform376 := TTransformNode.Create;
{ Empty Transform }
Shape377 := TShapeNode.Create;
Shape377 := Shape25;
{ .AddChild }
Transform376.AddChildren([Shape377]);
{ .AddChildren }
Transform375.AddChildren([Transform376]);
{ .AddChildren }
HAnimSegment374.AddChildren([Transform375]);
Shape378 := TShapeNode.Create;
LineSet379 := TLineSetNode.Create;
LineSet379.SetVertexCount([2]);
Coordinate380 := TCoordinateNode.Create;
Coordinate380.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet379.Coord := Coordinate380;
{ from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2 }
ColorRGBA381 := TColorRGBANode.Create;
ColorRGBA381 := ColorRGBA32;
{ .SetColor }
LineSet379.Color := ColorRGBA381;
{ .SetGeometry }
Shape378.Geometry := LineSet379;
{ .AddChildren }
HAnimSegment374.AddChildren([Shape378]);
HAnimSite382 := THAnimSiteNode.Create;
HAnimSite382.NameField := 'l_metatarsal_phalanx_5_pt';
HAnimSite382.Translation := Vector3(0,1,0);
TouchSensor383 := TTouchSensorNode.Create;
TouchSensor383.Description := 'HAnimSite l_metatarsal_phalanx_5_pt';
{ .AddChildren }
HAnimSite382.AddChildren([TouchSensor383]);
Shape384 := TShapeNode.Create;
Shape384 := Shape35;
{ .AddChildren }
HAnimSite382.AddChildren([Shape384]);
{ .AddChildren }
HAnimSegment374.AddChildren([HAnimSite382]);
{ .AddChildren }
HAnimJoint373.AddChildren([HAnimSegment374]);
HAnimJoint385 := THAnimJointNode.Create;
HAnimJoint385.NameField := 'l_metatarsophalangeal_5';
HAnimJoint385.Center := Vector3(0,1,0);
HAnimJoint385.SetUlimit([0,0,0]);
HAnimJoint385.SetLlimit([0,0,0]);
HAnimSegment386 := THAnimSegmentNode.Create;
HAnimSegment386.NameField := 'l_tarsal_proximal_phalanx_5';
Transform387 := TTransformNode.Create;
{ Empty Transform }
Transform388 := TTransformNode.Create;
{ Empty Transform }
Shape389 := TShapeNode.Create;
Shape389 := Shape25;
{ .AddChild }
Transform388.AddChildren([Shape389]);
{ .AddChildren }
Transform387.AddChildren([Transform388]);
{ .AddChildren }
HAnimSegment386.AddChildren([Transform387]);
Shape390 := TShapeNode.Create;
LineSet391 := TLineSetNode.Create;
LineSet391.SetVertexCount([2]);
Coordinate392 := TCoordinateNode.Create;
Coordinate392.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet391.Coord := Coordinate392;
{ from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA393 := TColorRGBANode.Create;
ColorRGBA393 := ColorRGBA32;
{ .SetColor }
LineSet391.Color := ColorRGBA393;
{ .SetGeometry }
Shape390.Geometry := LineSet391;
{ .AddChildren }
HAnimSegment386.AddChildren([Shape390]);
{ .AddChildren }
HAnimJoint385.AddChildren([HAnimSegment386]);
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394.NameField := 'l_tarsal_proximal_interphalangeal_5';
HAnimJoint394.Center := Vector3(0,1,0);
HAnimJoint394.SetUlimit([0,0,0]);
HAnimJoint394.SetLlimit([0,0,0]);
HAnimSegment395 := THAnimSegmentNode.Create;
HAnimSegment395.NameField := 'l_tarsal_middle_phalanx_5';
Transform396 := TTransformNode.Create;
{ Empty Transform }
Transform397 := TTransformNode.Create;
{ Empty Transform }
Shape398 := TShapeNode.Create;
Shape398 := Shape25;
{ .AddChild }
Transform397.AddChildren([Shape398]);
{ .AddChildren }
Transform396.AddChildren([Transform397]);
{ .AddChildren }
HAnimSegment395.AddChildren([Transform396]);
Shape399 := TShapeNode.Create;
LineSet400 := TLineSetNode.Create;
LineSet400.SetVertexCount([2]);
Coordinate401 := TCoordinateNode.Create;
Coordinate401.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet400.Coord := Coordinate401;
{ from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2 }
ColorRGBA402 := TColorRGBANode.Create;
ColorRGBA402 := ColorRGBA32;
{ .SetColor }
LineSet400.Color := ColorRGBA402;
{ .SetGeometry }
Shape399.Geometry := LineSet400;
{ .AddChildren }
HAnimSegment395.AddChildren([Shape399]);
HAnimSite403 := THAnimSiteNode.Create;
HAnimSite403.NameField := 'l_tarsal_distal_phalanx_5_tip';
HAnimSite403.Translation := Vector3(0,1,0);
TouchSensor404 := TTouchSensorNode.Create;
TouchSensor404.Description := 'HAnimSite l_tarsal_distal_phalanx_5_tip';
{ .AddChildren }
HAnimSite403.AddChildren([TouchSensor404]);
Shape405 := TShapeNode.Create;
Shape405 := Shape35;
{ .AddChildren }
HAnimSite403.AddChildren([Shape405]);
{ .AddChildren }
HAnimSegment395.AddChildren([HAnimSite403]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimSegment395]);
HAnimJoint406 := THAnimJointNode.Create;
HAnimJoint406.NameField := 'l_tarsal_distal_interphalangeal_5';
HAnimJoint406.Center := Vector3(0,1,0);
HAnimJoint406.SetUlimit([0,0,0]);
HAnimJoint406.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimJoint406]);
{ .AddChildren }
HAnimJoint385.AddChildren([HAnimJoint394]);
{ .AddChildren }
HAnimJoint373.AddChildren([HAnimJoint385]);
{ .AddChildren }
HAnimJoint329.AddChildren([HAnimJoint373]);
{ .AddChildren }
HAnimJoint320.AddChildren([HAnimJoint329]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimJoint320]);
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimJoint176]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint161]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint143]);
HAnimJoint407 := THAnimJointNode.Create;
HAnimJoint407.NameField := 'r_hip';
HAnimJoint407.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint407.SetUlimit([0,0,0]);
HAnimJoint407.SetLlimit([0,0,0]);
HAnimSegment408 := THAnimSegmentNode.Create;
HAnimSegment408.NameField := 'r_thigh';
Transform409 := TTransformNode.Create;
{ Empty Transform }
Transform410 := TTransformNode.Create;
{ Empty Transform }
Shape411 := TShapeNode.Create;
Shape411 := Shape25;
{ .AddChild }
Transform410.AddChildren([Shape411]);
{ .AddChildren }
Transform409.AddChildren([Transform410]);
{ .AddChildren }
HAnimSegment408.AddChildren([Transform409]);
Shape412 := TShapeNode.Create;
LineSet413 := TLineSetNode.Create;
LineSet413.SetVertexCount([2]);
Coordinate414 := TCoordinateNode.Create;
Coordinate414.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ .SetCoord }
LineSet413.Coord := Coordinate414;
{ from r_hip to r_knee vertices 2 }
ColorRGBA415 := TColorRGBANode.Create;
ColorRGBA415 := ColorRGBA32;
{ .SetColor }
LineSet413.Color := ColorRGBA415;
{ .SetGeometry }
Shape412.Geometry := LineSet413;
{ .AddChildren }
HAnimSegment408.AddChildren([Shape412]);
HAnimSite416 := THAnimSiteNode.Create;
HAnimSite416.NameField := 'r_lateral_malleolus_pt';
HAnimSite416.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor417 := TTouchSensorNode.Create;
TouchSensor417.Description := 'HAnimSite r_lateral_malleolus_pt';
{ .AddChildren }
HAnimSite416.AddChildren([TouchSensor417]);
Shape418 := TShapeNode.Create;
Shape418 := Shape35;
{ .AddChildren }
HAnimSite416.AddChildren([Shape418]);
{ .AddChildren }
HAnimSegment408.AddChildren([HAnimSite416]);
HAnimSite419 := THAnimSiteNode.Create;
HAnimSite419.NameField := 'r_medial_malleolus_pt';
HAnimSite419.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor420 := TTouchSensorNode.Create;
TouchSensor420.Description := 'HAnimSite r_medial_malleolus_pt';
{ .AddChildren }
HAnimSite419.AddChildren([TouchSensor420]);
Shape421 := TShapeNode.Create;
Shape421 := Shape35;
{ .AddChildren }
HAnimSite419.AddChildren([Shape421]);
{ .AddChildren }
HAnimSegment408.AddChildren([HAnimSite419]);
HAnimSite422 := THAnimSiteNode.Create;
HAnimSite422.NameField := 'r_tibiale_pt';
HAnimSite422.Translation := Vector3(0,1,0);
TouchSensor423 := TTouchSensorNode.Create;
TouchSensor423.Description := 'HAnimSite r_tibiale_pt';
{ .AddChildren }
HAnimSite422.AddChildren([TouchSensor423]);
Shape424 := TShapeNode.Create;
Shape424 := Shape35;
{ .AddChildren }
HAnimSite422.AddChildren([Shape424]);
{ .AddChildren }
HAnimSegment408.AddChildren([HAnimSite422]);
{ .AddChildren }
HAnimJoint407.AddChildren([HAnimSegment408]);
HAnimJoint425 := THAnimJointNode.Create;
HAnimJoint425.NameField := 'r_knee';
HAnimJoint425.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint425.SetUlimit([0,0,0]);
HAnimJoint425.SetLlimit([0,0,0]);
HAnimSegment426 := THAnimSegmentNode.Create;
HAnimSegment426.NameField := 'r_calf';
Transform427 := TTransformNode.Create;
{ Empty Transform }
Transform428 := TTransformNode.Create;
{ Empty Transform }
Shape429 := TShapeNode.Create;
Shape429 := Shape25;
{ .AddChild }
Transform428.AddChildren([Shape429]);
{ .AddChildren }
Transform427.AddChildren([Transform428]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform427]);
Shape430 := TShapeNode.Create;
LineSet431 := TLineSetNode.Create;
LineSet431.SetVertexCount([2]);
Coordinate432 := TCoordinateNode.Create;
Coordinate432.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ .SetCoord }
LineSet431.Coord := Coordinate432;
{ from r_knee to r_talocrural vertices 2 }
ColorRGBA433 := TColorRGBANode.Create;
ColorRGBA433 := ColorRGBA32;
{ .SetColor }
LineSet431.Color := ColorRGBA433;
{ .SetGeometry }
Shape430.Geometry := LineSet431;
{ .AddChildren }
HAnimSegment426.AddChildren([Shape430]);
HAnimSite434 := THAnimSiteNode.Create;
HAnimSite434.NameField := 'r_calcaneus_posterior_pt';
HAnimSite434.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor435 := TTouchSensorNode.Create;
TouchSensor435.Description := 'HAnimSite r_calcaneus_posterior_pt';
{ .AddChildren }
HAnimSite434.AddChildren([TouchSensor435]);
Shape436 := TShapeNode.Create;
Shape436 := Shape35;
{ .AddChildren }
HAnimSite434.AddChildren([Shape436]);
{ .AddChildren }
HAnimSegment426.AddChildren([HAnimSite434]);
HAnimSite437 := THAnimSiteNode.Create;
HAnimSite437.NameField := 'r_sphyrion_pt';
HAnimSite437.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor438 := TTouchSensorNode.Create;
TouchSensor438.Description := 'HAnimSite r_sphyrion_pt';
{ .AddChildren }
HAnimSite437.AddChildren([TouchSensor438]);
Shape439 := TShapeNode.Create;
Shape439 := Shape35;
{ .AddChildren }
HAnimSite437.AddChildren([Shape439]);
{ .AddChildren }
HAnimSegment426.AddChildren([HAnimSite437]);
{ .AddChildren }
HAnimJoint425.AddChildren([HAnimSegment426]);
HAnimJoint440 := THAnimJointNode.Create;
HAnimJoint440.NameField := 'r_talocrural';
HAnimJoint440.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint440.SetUlimit([0,0,0]);
HAnimJoint440.SetLlimit([0,0,0]);
HAnimSegment441 := THAnimSegmentNode.Create;
HAnimSegment441.NameField := 'r_talus';
Transform442 := TTransformNode.Create;
Transform442.Scale := Vector3(0.15,0.15,0.15);
Transform442.Translation := Vector3(-0.05,0.06,-0.025);
Transform442.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform443 := TTransformNode.Create;
{ Empty Transform right foot }
Shape444 := TShapeNode.Create;
Shape444 := Shape25;
{ .AddChild }
Transform443.AddChildren([Shape444]);
{ .AddChildren }
Transform442.AddChildren([Transform443]);
{ .AddChildren }
HAnimSegment441.AddChildren([Transform442]);
Shape445 := TShapeNode.Create;
LineSet446 := TLineSetNode.Create;
LineSet446.SetVertexCount([2]);
Coordinate447 := TCoordinateNode.Create;
Coordinate447.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(0,1,0)]);
{ .SetCoord }
LineSet446.Coord := Coordinate447;
{ from r_talocrural to r_talocalcaneonavicular vertices 2 }
ColorRGBA448 := TColorRGBANode.Create;
ColorRGBA448 := ColorRGBA32;
{ .SetColor }
LineSet446.Color := ColorRGBA448;
{ .SetGeometry }
Shape445.Geometry := LineSet446;
{ .AddChildren }
HAnimSegment441.AddChildren([Shape445]);
Shape449 := TShapeNode.Create;
LineSet450 := TLineSetNode.Create;
LineSet450.SetVertexCount([2]);
Coordinate451 := TCoordinateNode.Create;
Coordinate451.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(0,1,0)]);
{ .SetCoord }
LineSet450.Coord := Coordinate451;
{ from r_talocrural to r_calcaneocuboid vertices 2 }
ColorRGBA452 := TColorRGBANode.Create;
ColorRGBA452 := ColorRGBA32;
{ .SetColor }
LineSet450.Color := ColorRGBA452;
{ .SetGeometry }
Shape449.Geometry := LineSet450;
{ .AddChildren }
HAnimSegment441.AddChildren([Shape449]);
{ .AddChildren }
HAnimJoint440.AddChildren([HAnimSegment441]);
HAnimJoint453 := THAnimJointNode.Create;
HAnimJoint453.NameField := 'r_talocalcaneonavicular';
HAnimJoint453.Center := Vector3(0,1,0);
HAnimJoint453.SetUlimit([0,0,0]);
HAnimJoint453.SetLlimit([0,0,0]);
HAnimSegment454 := THAnimSegmentNode.Create;
HAnimSegment454.NameField := 'r_navicular';
Transform455 := TTransformNode.Create;
{ Empty Transform }
Transform456 := TTransformNode.Create;
{ Empty Transform }
Shape457 := TShapeNode.Create;
Shape457 := Shape25;
{ .AddChild }
Transform456.AddChildren([Shape457]);
{ .AddChildren }
Transform455.AddChildren([Transform456]);
{ .AddChildren }
HAnimSegment454.AddChildren([Transform455]);
Shape458 := TShapeNode.Create;
LineSet459 := TLineSetNode.Create;
LineSet459.SetVertexCount([2]);
Coordinate460 := TCoordinateNode.Create;
Coordinate460.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet459.Coord := Coordinate460;
{ from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2 }
ColorRGBA461 := TColorRGBANode.Create;
ColorRGBA461 := ColorRGBA32;
{ .SetColor }
LineSet459.Color := ColorRGBA461;
{ .SetGeometry }
Shape458.Geometry := LineSet459;
{ .AddChildren }
HAnimSegment454.AddChildren([Shape458]);
Shape462 := TShapeNode.Create;
LineSet463 := TLineSetNode.Create;
LineSet463.SetVertexCount([2]);
Coordinate464 := TCoordinateNode.Create;
Coordinate464.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet463.Coord := Coordinate464;
{ from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2 }
ColorRGBA465 := TColorRGBANode.Create;
ColorRGBA465 := ColorRGBA32;
{ .SetColor }
LineSet463.Color := ColorRGBA465;
{ .SetGeometry }
Shape462.Geometry := LineSet463;
{ .AddChildren }
HAnimSegment454.AddChildren([Shape462]);
Shape466 := TShapeNode.Create;
LineSet467 := TLineSetNode.Create;
LineSet467.SetVertexCount([2]);
Coordinate468 := TCoordinateNode.Create;
Coordinate468.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet467.Coord := Coordinate468;
{ from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2 }
ColorRGBA469 := TColorRGBANode.Create;
ColorRGBA469 := ColorRGBA32;
{ .SetColor }
LineSet467.Color := ColorRGBA469;
{ .SetGeometry }
Shape466.Geometry := LineSet467;
{ .AddChildren }
HAnimSegment454.AddChildren([Shape466]);
{ .AddChildren }
HAnimJoint453.AddChildren([HAnimSegment454]);
HAnimJoint470 := THAnimJointNode.Create;
HAnimJoint470.NameField := 'r_cuneonavicular_1';
HAnimJoint470.Center := Vector3(0,1,0);
HAnimJoint470.SetUlimit([0,0,0]);
HAnimJoint470.SetLlimit([0,0,0]);
HAnimSegment471 := THAnimSegmentNode.Create;
HAnimSegment471.NameField := 'r_cuneiform_1';
Transform472 := TTransformNode.Create;
{ Empty Transform }
Transform473 := TTransformNode.Create;
{ Empty Transform }
Shape474 := TShapeNode.Create;
Shape474 := Shape25;
{ .AddChild }
Transform473.AddChildren([Shape474]);
{ .AddChildren }
Transform472.AddChildren([Transform473]);
{ .AddChildren }
HAnimSegment471.AddChildren([Transform472]);
Shape475 := TShapeNode.Create;
LineSet476 := TLineSetNode.Create;
LineSet476.SetVertexCount([2]);
Coordinate477 := TCoordinateNode.Create;
Coordinate477.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet476.Coord := Coordinate477;
{ from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2 }
ColorRGBA478 := TColorRGBANode.Create;
ColorRGBA478 := ColorRGBA32;
{ .SetColor }
LineSet476.Color := ColorRGBA478;
{ .SetGeometry }
Shape475.Geometry := LineSet476;
{ .AddChildren }
HAnimSegment471.AddChildren([Shape475]);
{ .AddChildren }
HAnimJoint470.AddChildren([HAnimSegment471]);
HAnimJoint479 := THAnimJointNode.Create;
HAnimJoint479.NameField := 'r_tarsometatarsal_1';
HAnimJoint479.Center := Vector3(0,1,0);
HAnimJoint479.SetUlimit([0,0,0]);
HAnimJoint479.SetLlimit([0,0,0]);
HAnimSegment480 := THAnimSegmentNode.Create;
HAnimSegment480.NameField := 'r_metatarsal_1';
Transform481 := TTransformNode.Create;
{ Empty Transform }
Transform482 := TTransformNode.Create;
{ Empty Transform }
Shape483 := TShapeNode.Create;
Shape483 := Shape25;
{ .AddChild }
Transform482.AddChildren([Shape483]);
{ .AddChildren }
Transform481.AddChildren([Transform482]);
{ .AddChildren }
HAnimSegment480.AddChildren([Transform481]);
Shape484 := TShapeNode.Create;
LineSet485 := TLineSetNode.Create;
LineSet485.SetVertexCount([2]);
Coordinate486 := TCoordinateNode.Create;
Coordinate486.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet485.Coord := Coordinate486;
{ from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2 }
ColorRGBA487 := TColorRGBANode.Create;
ColorRGBA487 := ColorRGBA32;
{ .SetColor }
LineSet485.Color := ColorRGBA487;
{ .SetGeometry }
Shape484.Geometry := LineSet485;
{ .AddChildren }
HAnimSegment480.AddChildren([Shape484]);
HAnimSite488 := THAnimSiteNode.Create;
HAnimSite488.NameField := 'r_metatarsal_phalanx_1_pt';
HAnimSite488.Translation := Vector3(0,1,0);
TouchSensor489 := TTouchSensorNode.Create;
TouchSensor489.Description := 'HAnimSite r_metatarsal_phalanx_1_pt';
{ .AddChildren }
HAnimSite488.AddChildren([TouchSensor489]);
Shape490 := TShapeNode.Create;
Shape490 := Shape35;
{ .AddChildren }
HAnimSite488.AddChildren([Shape490]);
{ .AddChildren }
HAnimSegment480.AddChildren([HAnimSite488]);
{ .AddChildren }
HAnimJoint479.AddChildren([HAnimSegment480]);
HAnimJoint491 := THAnimJointNode.Create;
HAnimJoint491.NameField := 'r_metatarsophalangeal_1';
HAnimJoint491.Center := Vector3(0,1,0);
HAnimJoint491.SetUlimit([0,0,0]);
HAnimJoint491.SetLlimit([0,0,0]);
HAnimSegment492 := THAnimSegmentNode.Create;
HAnimSegment492.NameField := 'r_tarsal_proximal_phalanx_1';
Transform493 := TTransformNode.Create;
{ Empty Transform }
Transform494 := TTransformNode.Create;
{ Empty Transform }
Shape495 := TShapeNode.Create;
Shape495 := Shape25;
{ .AddChild }
Transform494.AddChildren([Shape495]);
{ .AddChildren }
Transform493.AddChildren([Transform494]);
{ .AddChildren }
HAnimSegment492.AddChildren([Transform493]);
Shape496 := TShapeNode.Create;
LineSet497 := TLineSetNode.Create;
LineSet497.SetVertexCount([2]);
Coordinate498 := TCoordinateNode.Create;
Coordinate498.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet497.Coord := Coordinate498;
{ from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2 }
ColorRGBA499 := TColorRGBANode.Create;
ColorRGBA499 := ColorRGBA32;
{ .SetColor }
LineSet497.Color := ColorRGBA499;
{ .SetGeometry }
Shape496.Geometry := LineSet497;
{ .AddChildren }
HAnimSegment492.AddChildren([Shape496]);
HAnimSite500 := THAnimSiteNode.Create;
HAnimSite500.NameField := 'r_tarsal_distal_phalanx_1_tip';
HAnimSite500.Translation := Vector3(0.1,-1.05,0);
TouchSensor501 := TTouchSensorNode.Create;
TouchSensor501.Description := 'HAnimSite r_tarsal_distal_phalanx_1_tip';
{ .AddChildren }
HAnimSite500.AddChildren([TouchSensor501]);
Shape502 := TShapeNode.Create;
Shape502 := Shape35;
{ .AddChildren }
HAnimSite500.AddChildren([Shape502]);
{ .AddChildren }
HAnimSegment492.AddChildren([HAnimSite500]);
{ .AddChildren }
HAnimJoint491.AddChildren([HAnimSegment492]);
HAnimJoint503 := THAnimJointNode.Create;
HAnimJoint503.NameField := 'r_tarsal_interphalangeal_1';
HAnimJoint503.Center := Vector3(0,1,0);
HAnimJoint503.SetUlimit([0,0,0]);
HAnimJoint503.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint491.AddChildren([HAnimJoint503]);
{ .AddChildren }
HAnimJoint479.AddChildren([HAnimJoint491]);
{ .AddChildren }
HAnimJoint470.AddChildren([HAnimJoint479]);
{ .AddChildren }
HAnimJoint453.AddChildren([HAnimJoint470]);
HAnimJoint504 := THAnimJointNode.Create;
HAnimJoint504.NameField := 'r_cuneonavicular_2';
HAnimJoint504.Center := Vector3(0,1,0);
HAnimJoint504.SetUlimit([0,0,0]);
HAnimJoint504.SetLlimit([0,0,0]);
HAnimSegment505 := THAnimSegmentNode.Create;
HAnimSegment505.NameField := 'r_cuneiform_2';
Transform506 := TTransformNode.Create;
{ Empty Transform }
Transform507 := TTransformNode.Create;
{ Empty Transform }
Shape508 := TShapeNode.Create;
Shape508 := Shape25;
{ .AddChild }
Transform507.AddChildren([Shape508]);
{ .AddChildren }
Transform506.AddChildren([Transform507]);
{ .AddChildren }
HAnimSegment505.AddChildren([Transform506]);
Shape509 := TShapeNode.Create;
LineSet510 := TLineSetNode.Create;
LineSet510.SetVertexCount([2]);
Coordinate511 := TCoordinateNode.Create;
Coordinate511.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet510.Coord := Coordinate511;
{ from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2 }
ColorRGBA512 := TColorRGBANode.Create;
ColorRGBA512 := ColorRGBA32;
{ .SetColor }
LineSet510.Color := ColorRGBA512;
{ .SetGeometry }
Shape509.Geometry := LineSet510;
{ .AddChildren }
HAnimSegment505.AddChildren([Shape509]);
{ .AddChildren }
HAnimJoint504.AddChildren([HAnimSegment505]);
HAnimJoint513 := THAnimJointNode.Create;
HAnimJoint513.NameField := 'r_tarsometatarsal_2';
HAnimJoint513.Center := Vector3(0,1,0);
HAnimJoint513.SetUlimit([0,0,0]);
HAnimJoint513.SetLlimit([0,0,0]);
HAnimSegment514 := THAnimSegmentNode.Create;
HAnimSegment514.NameField := 'r_metatarsal_2';
Transform515 := TTransformNode.Create;
{ Empty Transform }
Transform516 := TTransformNode.Create;
{ Empty Transform }
Shape517 := TShapeNode.Create;
Shape517 := Shape25;
{ .AddChild }
Transform516.AddChildren([Shape517]);
{ .AddChildren }
Transform515.AddChildren([Transform516]);
{ .AddChildren }
HAnimSegment514.AddChildren([Transform515]);
Shape518 := TShapeNode.Create;
LineSet519 := TLineSetNode.Create;
LineSet519.SetVertexCount([2]);
Coordinate520 := TCoordinateNode.Create;
Coordinate520.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet519.Coord := Coordinate520;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
ColorRGBA521 := TColorRGBANode.Create;
ColorRGBA521 := ColorRGBA32;
{ .SetColor }
LineSet519.Color := ColorRGBA521;
{ .SetGeometry }
Shape518.Geometry := LineSet519;
{ .AddChildren }
HAnimSegment514.AddChildren([Shape518]);
{ .AddChildren }
HAnimJoint513.AddChildren([HAnimSegment514]);
HAnimJoint522 := THAnimJointNode.Create;
HAnimJoint522.NameField := 'r_metatarsophalangeal_2';
HAnimJoint522.Center := Vector3(0,1,0);
HAnimJoint522.SetUlimit([0,0,0]);
HAnimJoint522.SetLlimit([0,0,0]);
HAnimSegment523 := THAnimSegmentNode.Create;
HAnimSegment523.NameField := 'r_tarsal_proximal_phalanx_2';
Transform524 := TTransformNode.Create;
{ Empty Transform }
Transform525 := TTransformNode.Create;
{ Empty Transform }
Shape526 := TShapeNode.Create;
Shape526 := Shape25;
{ .AddChild }
Transform525.AddChildren([Shape526]);
{ .AddChildren }
Transform524.AddChildren([Transform525]);
{ .AddChildren }
HAnimSegment523.AddChildren([Transform524]);
Shape527 := TShapeNode.Create;
LineSet528 := TLineSetNode.Create;
LineSet528.SetVertexCount([2]);
Coordinate529 := TCoordinateNode.Create;
Coordinate529.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet528.Coord := Coordinate529;
{ from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA530 := TColorRGBANode.Create;
ColorRGBA530 := ColorRGBA32;
{ .SetColor }
LineSet528.Color := ColorRGBA530;
{ .SetGeometry }
Shape527.Geometry := LineSet528;
{ .AddChildren }
HAnimSegment523.AddChildren([Shape527]);
{ .AddChildren }
HAnimJoint522.AddChildren([HAnimSegment523]);
HAnimJoint531 := THAnimJointNode.Create;
HAnimJoint531.NameField := 'r_tarsal_proximal_interphalangeal_2';
HAnimJoint531.Center := Vector3(0,1,0);
HAnimJoint531.SetUlimit([0,0,0]);
HAnimJoint531.SetLlimit([0,0,0]);
HAnimSegment532 := THAnimSegmentNode.Create;
HAnimSegment532.NameField := 'r_tarsal_middle_phalanx_2';
Transform533 := TTransformNode.Create;
{ Empty Transform }
Transform534 := TTransformNode.Create;
{ Empty Transform }
Shape535 := TShapeNode.Create;
Shape535 := Shape25;
{ .AddChild }
Transform534.AddChildren([Shape535]);
{ .AddChildren }
Transform533.AddChildren([Transform534]);
{ .AddChildren }
HAnimSegment532.AddChildren([Transform533]);
Shape536 := TShapeNode.Create;
LineSet537 := TLineSetNode.Create;
LineSet537.SetVertexCount([2]);
Coordinate538 := TCoordinateNode.Create;
Coordinate538.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet537.Coord := Coordinate538;
{ from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
ColorRGBA539 := TColorRGBANode.Create;
ColorRGBA539 := ColorRGBA32;
{ .SetColor }
LineSet537.Color := ColorRGBA539;
{ .SetGeometry }
Shape536.Geometry := LineSet537;
{ .AddChildren }
HAnimSegment532.AddChildren([Shape536]);
HAnimSite540 := THAnimSiteNode.Create;
HAnimSite540.NameField := 'r_tarsal_distal_phalanx_2_tip';
HAnimSite540.Translation := Vector3(-0.05,-1.12,0);
TouchSensor541 := TTouchSensorNode.Create;
TouchSensor541.Description := 'HAnimSite r_tarsal_distal_phalanx_2_tip';
{ .AddChildren }
HAnimSite540.AddChildren([TouchSensor541]);
Shape542 := TShapeNode.Create;
Shape542 := Shape35;
{ .AddChildren }
HAnimSite540.AddChildren([Shape542]);
{ .AddChildren }
HAnimSegment532.AddChildren([HAnimSite540]);
{ .AddChildren }
HAnimJoint531.AddChildren([HAnimSegment532]);
HAnimJoint543 := THAnimJointNode.Create;
HAnimJoint543.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint543.Center := Vector3(0,1,0);
HAnimJoint543.SetUlimit([0,0,0]);
HAnimJoint543.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint531.AddChildren([HAnimJoint543]);
{ .AddChildren }
HAnimJoint522.AddChildren([HAnimJoint531]);
{ .AddChildren }
HAnimJoint513.AddChildren([HAnimJoint522]);
{ .AddChildren }
HAnimJoint504.AddChildren([HAnimJoint513]);
{ .AddChildren }
HAnimJoint453.AddChildren([HAnimJoint504]);
HAnimJoint544 := THAnimJointNode.Create;
HAnimJoint544.NameField := 'r_cuneonavicular_3';
HAnimJoint544.Center := Vector3(0,1,0);
HAnimJoint544.SetUlimit([0,0,0]);
HAnimJoint544.SetLlimit([0,0,0]);
HAnimSegment545 := THAnimSegmentNode.Create;
HAnimSegment545.NameField := 'r_cuneiform_3';
Transform546 := TTransformNode.Create;
{ Empty Transform }
Transform547 := TTransformNode.Create;
{ Empty Transform }
Shape548 := TShapeNode.Create;
Shape548 := Shape25;
{ .AddChild }
Transform547.AddChildren([Shape548]);
{ .AddChildren }
Transform546.AddChildren([Transform547]);
{ .AddChildren }
HAnimSegment545.AddChildren([Transform546]);
Shape549 := TShapeNode.Create;
LineSet550 := TLineSetNode.Create;
LineSet550.SetVertexCount([2]);
Coordinate551 := TCoordinateNode.Create;
Coordinate551.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet550.Coord := Coordinate551;
{ from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2 }
ColorRGBA552 := TColorRGBANode.Create;
ColorRGBA552 := ColorRGBA32;
{ .SetColor }
LineSet550.Color := ColorRGBA552;
{ .SetGeometry }
Shape549.Geometry := LineSet550;
{ .AddChildren }
HAnimSegment545.AddChildren([Shape549]);
{ .AddChildren }
HAnimJoint544.AddChildren([HAnimSegment545]);
HAnimJoint553 := THAnimJointNode.Create;
HAnimJoint553.NameField := 'r_tarsometatarsal_3';
HAnimJoint553.Center := Vector3(0,1,0);
HAnimJoint553.SetUlimit([0,0,0]);
HAnimJoint553.SetLlimit([0,0,0]);
HAnimSegment554 := THAnimSegmentNode.Create;
HAnimSegment554.NameField := 'r_metatarsal_3';
Transform555 := TTransformNode.Create;
{ Empty Transform }
Transform556 := TTransformNode.Create;
{ Empty Transform }
Shape557 := TShapeNode.Create;
Shape557 := Shape25;
{ .AddChild }
Transform556.AddChildren([Shape557]);
{ .AddChildren }
Transform555.AddChildren([Transform556]);
{ .AddChildren }
HAnimSegment554.AddChildren([Transform555]);
Shape558 := TShapeNode.Create;
LineSet559 := TLineSetNode.Create;
LineSet559.SetVertexCount([2]);
Coordinate560 := TCoordinateNode.Create;
Coordinate560.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet559.Coord := Coordinate560;
{ from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2 }
ColorRGBA561 := TColorRGBANode.Create;
ColorRGBA561 := ColorRGBA32;
{ .SetColor }
LineSet559.Color := ColorRGBA561;
{ .SetGeometry }
Shape558.Geometry := LineSet559;
{ .AddChildren }
HAnimSegment554.AddChildren([Shape558]);
{ .AddChildren }
HAnimJoint553.AddChildren([HAnimSegment554]);
HAnimJoint562 := THAnimJointNode.Create;
HAnimJoint562.NameField := 'r_metatarsophalangeal_3';
HAnimJoint562.Center := Vector3(0,1,0);
HAnimJoint562.SetUlimit([0,0,0]);
HAnimJoint562.SetLlimit([0,0,0]);
HAnimSegment563 := THAnimSegmentNode.Create;
HAnimSegment563.NameField := 'r_tarsal_proximal_phalanx_3';
Transform564 := TTransformNode.Create;
{ Empty Transform }
Transform565 := TTransformNode.Create;
{ Empty Transform }
Shape566 := TShapeNode.Create;
Shape566 := Shape25;
{ .AddChild }
Transform565.AddChildren([Shape566]);
{ .AddChildren }
Transform564.AddChildren([Transform565]);
{ .AddChildren }
HAnimSegment563.AddChildren([Transform564]);
Shape567 := TShapeNode.Create;
LineSet568 := TLineSetNode.Create;
LineSet568.SetVertexCount([2]);
Coordinate569 := TCoordinateNode.Create;
Coordinate569.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet568.Coord := Coordinate569;
{ from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA570 := TColorRGBANode.Create;
ColorRGBA570 := ColorRGBA32;
{ .SetColor }
LineSet568.Color := ColorRGBA570;
{ .SetGeometry }
Shape567.Geometry := LineSet568;
{ .AddChildren }
HAnimSegment563.AddChildren([Shape567]);
{ .AddChildren }
HAnimJoint562.AddChildren([HAnimSegment563]);
HAnimJoint571 := THAnimJointNode.Create;
HAnimJoint571.NameField := 'r_tarsal_proximal_interphalangeal_3';
HAnimJoint571.Center := Vector3(0,1,0);
HAnimJoint571.SetUlimit([0,0,0]);
HAnimJoint571.SetLlimit([0,0,0]);
HAnimSegment572 := THAnimSegmentNode.Create;
HAnimSegment572.NameField := 'r_tarsal_middle_phalanx_3';
Transform573 := TTransformNode.Create;
{ Empty Transform }
Transform574 := TTransformNode.Create;
{ Empty Transform }
Shape575 := TShapeNode.Create;
Shape575 := Shape25;
{ .AddChild }
Transform574.AddChildren([Shape575]);
{ .AddChildren }
Transform573.AddChildren([Transform574]);
{ .AddChildren }
HAnimSegment572.AddChildren([Transform573]);
Shape576 := TShapeNode.Create;
LineSet577 := TLineSetNode.Create;
LineSet577.SetVertexCount([2]);
Coordinate578 := TCoordinateNode.Create;
Coordinate578.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet577.Coord := Coordinate578;
{ from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2 }
ColorRGBA579 := TColorRGBANode.Create;
ColorRGBA579 := ColorRGBA32;
{ .SetColor }
LineSet577.Color := ColorRGBA579;
{ .SetGeometry }
Shape576.Geometry := LineSet577;
{ .AddChildren }
HAnimSegment572.AddChildren([Shape576]);
HAnimSite580 := THAnimSiteNode.Create;
HAnimSite580.NameField := 'r_tarsal_distal_phalanx_3_tip';
HAnimSite580.Translation := Vector3(-0.15,-1.13,0);
TouchSensor581 := TTouchSensorNode.Create;
TouchSensor581.Description := 'HAnimSite r_tarsal_distal_phalanx_3_tip';
{ .AddChildren }
HAnimSite580.AddChildren([TouchSensor581]);
Shape582 := TShapeNode.Create;
Shape582 := Shape35;
{ .AddChildren }
HAnimSite580.AddChildren([Shape582]);
{ .AddChildren }
HAnimSegment572.AddChildren([HAnimSite580]);
{ .AddChildren }
HAnimJoint571.AddChildren([HAnimSegment572]);
HAnimJoint583 := THAnimJointNode.Create;
HAnimJoint583.NameField := 'r_tarsal_distal_interphalangeal_3';
HAnimJoint583.Center := Vector3(0,1,0);
HAnimJoint583.SetUlimit([0,0,0]);
HAnimJoint583.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint571.AddChildren([HAnimJoint583]);
{ .AddChildren }
HAnimJoint562.AddChildren([HAnimJoint571]);
{ .AddChildren }
HAnimJoint553.AddChildren([HAnimJoint562]);
{ .AddChildren }
HAnimJoint544.AddChildren([HAnimJoint553]);
{ .AddChildren }
HAnimJoint453.AddChildren([HAnimJoint544]);
{ .AddChildren }
HAnimJoint440.AddChildren([HAnimJoint453]);
HAnimJoint584 := THAnimJointNode.Create;
HAnimJoint584.NameField := 'r_calcaneocuboid';
HAnimJoint584.Center := Vector3(0,1,0);
HAnimJoint584.SetUlimit([0,0,0]);
HAnimJoint584.SetLlimit([0,0,0]);
HAnimSegment585 := THAnimSegmentNode.Create;
HAnimSegment585.NameField := 'r_calcaneus';
Transform586 := TTransformNode.Create;
{ Empty Transform }
Transform587 := TTransformNode.Create;
{ Empty Transform }
Shape588 := TShapeNode.Create;
Shape588 := Shape25;
{ .AddChild }
Transform587.AddChildren([Shape588]);
{ .AddChildren }
Transform586.AddChildren([Transform587]);
{ .AddChildren }
HAnimSegment585.AddChildren([Transform586]);
Shape589 := TShapeNode.Create;
LineSet590 := TLineSetNode.Create;
LineSet590.SetVertexCount([2]);
Coordinate591 := TCoordinateNode.Create;
Coordinate591.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet590.Coord := Coordinate591;
{ from r_calcaneocuboid to r_transversetarsal vertices 2 }
ColorRGBA592 := TColorRGBANode.Create;
ColorRGBA592 := ColorRGBA32;
{ .SetColor }
LineSet590.Color := ColorRGBA592;
{ .SetGeometry }
Shape589.Geometry := LineSet590;
{ .AddChildren }
HAnimSegment585.AddChildren([Shape589]);
{ .AddChildren }
HAnimJoint584.AddChildren([HAnimSegment585]);
HAnimJoint593 := THAnimJointNode.Create;
HAnimJoint593.NameField := 'r_transversetarsal';
HAnimJoint593.Center := Vector3(0,1,0);
HAnimJoint593.SetUlimit([0,0,0]);
HAnimJoint593.SetLlimit([0,0,0]);
HAnimSegment594 := THAnimSegmentNode.Create;
HAnimSegment594.NameField := 'r_cuboid';
Transform595 := TTransformNode.Create;
{ Empty Transform }
Transform596 := TTransformNode.Create;
{ Empty Transform }
Shape597 := TShapeNode.Create;
Shape597 := Shape25;
{ .AddChild }
Transform596.AddChildren([Shape597]);
{ .AddChildren }
Transform595.AddChildren([Transform596]);
{ .AddChildren }
HAnimSegment594.AddChildren([Transform595]);
Shape598 := TShapeNode.Create;
LineSet599 := TLineSetNode.Create;
LineSet599.SetVertexCount([2]);
Coordinate600 := TCoordinateNode.Create;
Coordinate600.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet599.Coord := Coordinate600;
{ from r_transversetarsal to r_tarsometatarsal_4 vertices 2 }
ColorRGBA601 := TColorRGBANode.Create;
ColorRGBA601 := ColorRGBA32;
{ .SetColor }
LineSet599.Color := ColorRGBA601;
{ .SetGeometry }
Shape598.Geometry := LineSet599;
{ .AddChildren }
HAnimSegment594.AddChildren([Shape598]);
Shape602 := TShapeNode.Create;
LineSet603 := TLineSetNode.Create;
LineSet603.SetVertexCount([2]);
Coordinate604 := TCoordinateNode.Create;
Coordinate604.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet603.Coord := Coordinate604;
{ from r_transversetarsal to r_tarsometatarsal_5 vertices 2 }
ColorRGBA605 := TColorRGBANode.Create;
ColorRGBA605 := ColorRGBA32;
{ .SetColor }
LineSet603.Color := ColorRGBA605;
{ .SetGeometry }
Shape602.Geometry := LineSet603;
{ .AddChildren }
HAnimSegment594.AddChildren([Shape602]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimSegment594]);
HAnimJoint606 := THAnimJointNode.Create;
HAnimJoint606.NameField := 'r_tarsometatarsal_4';
HAnimJoint606.Center := Vector3(0,1,0);
HAnimJoint606.SetUlimit([0,0,0]);
HAnimJoint606.SetLlimit([0,0,0]);
HAnimSegment607 := THAnimSegmentNode.Create;
HAnimSegment607.NameField := 'r_metatarsal_4';
Transform608 := TTransformNode.Create;
{ Empty Transform }
Transform609 := TTransformNode.Create;
{ Empty Transform }
Shape610 := TShapeNode.Create;
Shape610 := Shape25;
{ .AddChild }
Transform609.AddChildren([Shape610]);
{ .AddChildren }
Transform608.AddChildren([Transform609]);
{ .AddChildren }
HAnimSegment607.AddChildren([Transform608]);
Shape611 := TShapeNode.Create;
LineSet612 := TLineSetNode.Create;
LineSet612.SetVertexCount([2]);
Coordinate613 := TCoordinateNode.Create;
Coordinate613.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet612.Coord := Coordinate613;
{ from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2 }
ColorRGBA614 := TColorRGBANode.Create;
ColorRGBA614 := ColorRGBA32;
{ .SetColor }
LineSet612.Color := ColorRGBA614;
{ .SetGeometry }
Shape611.Geometry := LineSet612;
{ .AddChildren }
HAnimSegment607.AddChildren([Shape611]);
{ .AddChildren }
HAnimJoint606.AddChildren([HAnimSegment607]);
HAnimJoint615 := THAnimJointNode.Create;
HAnimJoint615.NameField := 'r_metatarsophalangeal_4';
HAnimJoint615.Center := Vector3(0,1,0);
HAnimJoint615.SetUlimit([0,0,0]);
HAnimJoint615.SetLlimit([0,0,0]);
HAnimSegment616 := THAnimSegmentNode.Create;
HAnimSegment616.NameField := 'r_tarsal_proximal_phalanx_4';
Transform617 := TTransformNode.Create;
{ Empty Transform }
Transform618 := TTransformNode.Create;
{ Empty Transform }
Shape619 := TShapeNode.Create;
Shape619 := Shape25;
{ .AddChild }
Transform618.AddChildren([Shape619]);
{ .AddChildren }
Transform617.AddChildren([Transform618]);
{ .AddChildren }
HAnimSegment616.AddChildren([Transform617]);
Shape620 := TShapeNode.Create;
LineSet621 := TLineSetNode.Create;
LineSet621.SetVertexCount([2]);
Coordinate622 := TCoordinateNode.Create;
Coordinate622.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet621.Coord := Coordinate622;
{ from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA623 := TColorRGBANode.Create;
ColorRGBA623 := ColorRGBA32;
{ .SetColor }
LineSet621.Color := ColorRGBA623;
{ .SetGeometry }
Shape620.Geometry := LineSet621;
{ .AddChildren }
HAnimSegment616.AddChildren([Shape620]);
{ .AddChildren }
HAnimJoint615.AddChildren([HAnimSegment616]);
HAnimJoint624 := THAnimJointNode.Create;
HAnimJoint624.NameField := 'r_tarsal_proximal_interphalangeal_4';
HAnimJoint624.Center := Vector3(0,1,0);
HAnimJoint624.SetUlimit([0,0,0]);
HAnimJoint624.SetLlimit([0,0,0]);
HAnimSegment625 := THAnimSegmentNode.Create;
HAnimSegment625.NameField := 'r_tarsal_middle_phalanx_4';
Transform626 := TTransformNode.Create;
{ Empty Transform }
Transform627 := TTransformNode.Create;
{ Empty Transform }
Shape628 := TShapeNode.Create;
Shape628 := Shape25;
{ .AddChild }
Transform627.AddChildren([Shape628]);
{ .AddChildren }
Transform626.AddChildren([Transform627]);
{ .AddChildren }
HAnimSegment625.AddChildren([Transform626]);
Shape629 := TShapeNode.Create;
LineSet630 := TLineSetNode.Create;
LineSet630.SetVertexCount([2]);
Coordinate631 := TCoordinateNode.Create;
Coordinate631.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet630.Coord := Coordinate631;
{ from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2 }
ColorRGBA632 := TColorRGBANode.Create;
ColorRGBA632 := ColorRGBA32;
{ .SetColor }
LineSet630.Color := ColorRGBA632;
{ .SetGeometry }
Shape629.Geometry := LineSet630;
{ .AddChildren }
HAnimSegment625.AddChildren([Shape629]);
HAnimSite633 := THAnimSiteNode.Create;
HAnimSite633.NameField := 'r_tarsal_distal_phalanx_4_tip';
HAnimSite633.Translation := Vector3(-0.25,-1.1,0);
TouchSensor634 := TTouchSensorNode.Create;
TouchSensor634.Description := 'HAnimSite r_tarsal_distal_phalanx_4_tip';
{ .AddChildren }
HAnimSite633.AddChildren([TouchSensor634]);
Shape635 := TShapeNode.Create;
Shape635 := Shape35;
{ .AddChildren }
HAnimSite633.AddChildren([Shape635]);
{ .AddChildren }
HAnimSegment625.AddChildren([HAnimSite633]);
{ .AddChildren }
HAnimJoint624.AddChildren([HAnimSegment625]);
HAnimJoint636 := THAnimJointNode.Create;
HAnimJoint636.NameField := 'r_tarsal_distal_interphalangeal_4';
HAnimJoint636.Center := Vector3(0,1,0);
HAnimJoint636.SetUlimit([0,0,0]);
HAnimJoint636.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint624.AddChildren([HAnimJoint636]);
{ .AddChildren }
HAnimJoint615.AddChildren([HAnimJoint624]);
{ .AddChildren }
HAnimJoint606.AddChildren([HAnimJoint615]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimJoint606]);
HAnimJoint637 := THAnimJointNode.Create;
HAnimJoint637.NameField := 'r_tarsometatarsal_5';
HAnimJoint637.Center := Vector3(0,1,0);
HAnimJoint637.SetUlimit([0,0,0]);
HAnimJoint637.SetLlimit([0,0,0]);
HAnimSegment638 := THAnimSegmentNode.Create;
HAnimSegment638.NameField := 'r_metatarsal_5';
Transform639 := TTransformNode.Create;
{ Empty Transform }
Transform640 := TTransformNode.Create;
{ Empty Transform }
Shape641 := TShapeNode.Create;
Shape641 := Shape25;
{ .AddChild }
Transform640.AddChildren([Shape641]);
{ .AddChildren }
Transform639.AddChildren([Transform640]);
{ .AddChildren }
HAnimSegment638.AddChildren([Transform639]);
Shape642 := TShapeNode.Create;
LineSet643 := TLineSetNode.Create;
LineSet643.SetVertexCount([2]);
Coordinate644 := TCoordinateNode.Create;
Coordinate644.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet643.Coord := Coordinate644;
{ from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2 }
ColorRGBA645 := TColorRGBANode.Create;
ColorRGBA645 := ColorRGBA32;
{ .SetColor }
LineSet643.Color := ColorRGBA645;
{ .SetGeometry }
Shape642.Geometry := LineSet643;
{ .AddChildren }
HAnimSegment638.AddChildren([Shape642]);
HAnimSite646 := THAnimSiteNode.Create;
HAnimSite646.NameField := 'r_metatarsal_phalanx_5_pt';
HAnimSite646.Translation := Vector3(0,1,0);
TouchSensor647 := TTouchSensorNode.Create;
TouchSensor647.Description := 'HAnimSite r_metatarsal_phalanx_5_pt';
{ .AddChildren }
HAnimSite646.AddChildren([TouchSensor647]);
Shape648 := TShapeNode.Create;
Shape648 := Shape35;
{ .AddChildren }
HAnimSite646.AddChildren([Shape648]);
{ .AddChildren }
HAnimSegment638.AddChildren([HAnimSite646]);
{ .AddChildren }
HAnimJoint637.AddChildren([HAnimSegment638]);
HAnimJoint649 := THAnimJointNode.Create;
HAnimJoint649.NameField := 'r_metatarsophalangeal_5';
HAnimJoint649.Center := Vector3(0,1,0);
HAnimJoint649.SetUlimit([0,0,0]);
HAnimJoint649.SetLlimit([0,0,0]);
HAnimSegment650 := THAnimSegmentNode.Create;
HAnimSegment650.NameField := 'r_tarsal_proximal_phalanx_5';
Transform651 := TTransformNode.Create;
{ Empty Transform }
Transform652 := TTransformNode.Create;
{ Empty Transform }
Shape653 := TShapeNode.Create;
Shape653 := Shape25;
{ .AddChild }
Transform652.AddChildren([Shape653]);
{ .AddChildren }
Transform651.AddChildren([Transform652]);
{ .AddChildren }
HAnimSegment650.AddChildren([Transform651]);
Shape654 := TShapeNode.Create;
LineSet655 := TLineSetNode.Create;
LineSet655.SetVertexCount([2]);
Coordinate656 := TCoordinateNode.Create;
Coordinate656.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet655.Coord := Coordinate656;
{ from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA657 := TColorRGBANode.Create;
ColorRGBA657 := ColorRGBA32;
{ .SetColor }
LineSet655.Color := ColorRGBA657;
{ .SetGeometry }
Shape654.Geometry := LineSet655;
{ .AddChildren }
HAnimSegment650.AddChildren([Shape654]);
{ .AddChildren }
HAnimJoint649.AddChildren([HAnimSegment650]);
HAnimJoint658 := THAnimJointNode.Create;
HAnimJoint658.NameField := 'r_tarsal_proximal_interphalangeal_5';
HAnimJoint658.Center := Vector3(0,1,0);
HAnimJoint658.SetUlimit([0,0,0]);
HAnimJoint658.SetLlimit([0,0,0]);
HAnimSegment659 := THAnimSegmentNode.Create;
HAnimSegment659.NameField := 'r_tarsal_middle_phalanx_5';
Transform660 := TTransformNode.Create;
{ Empty Transform }
Transform661 := TTransformNode.Create;
{ Empty Transform }
Shape662 := TShapeNode.Create;
Shape662 := Shape25;
{ .AddChild }
Transform661.AddChildren([Shape662]);
{ .AddChildren }
Transform660.AddChildren([Transform661]);
{ .AddChildren }
HAnimSegment659.AddChildren([Transform660]);
Shape663 := TShapeNode.Create;
LineSet664 := TLineSetNode.Create;
LineSet664.SetVertexCount([2]);
Coordinate665 := TCoordinateNode.Create;
Coordinate665.SetPoint([Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetCoord }
LineSet664.Coord := Coordinate665;
{ from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2 }
ColorRGBA666 := TColorRGBANode.Create;
ColorRGBA666 := ColorRGBA32;
{ .SetColor }
LineSet664.Color := ColorRGBA666;
{ .SetGeometry }
Shape663.Geometry := LineSet664;
{ .AddChildren }
HAnimSegment659.AddChildren([Shape663]);
HAnimSite667 := THAnimSiteNode.Create;
HAnimSite667.NameField := 'r_tarsal_distal_phalanx_5_tip';
HAnimSite667.Translation := Vector3(-0.34,-1.05,0);
TouchSensor668 := TTouchSensorNode.Create;
TouchSensor668.Description := 'HAnimSite r_tarsal_distal_phalanx_5_tip';
{ .AddChildren }
HAnimSite667.AddChildren([TouchSensor668]);
Shape669 := TShapeNode.Create;
Shape669 := Shape35;
{ .AddChildren }
HAnimSite667.AddChildren([Shape669]);
{ .AddChildren }
HAnimSegment659.AddChildren([HAnimSite667]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimSegment659]);
HAnimJoint670 := THAnimJointNode.Create;
HAnimJoint670.NameField := 'r_tarsal_distal_interphalangeal_5';
HAnimJoint670.Center := Vector3(0,1,0);
HAnimJoint670.SetUlimit([0,0,0]);
HAnimJoint670.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimJoint670]);
{ .AddChildren }
HAnimJoint649.AddChildren([HAnimJoint658]);
{ .AddChildren }
HAnimJoint637.AddChildren([HAnimJoint649]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimJoint637]);
{ .AddChildren }
HAnimJoint584.AddChildren([HAnimJoint593]);
{ .AddChildren }
HAnimJoint440.AddChildren([HAnimJoint584]);
{ .AddChildren }
HAnimJoint425.AddChildren([HAnimJoint440]);
{ .AddChildren }
HAnimJoint407.AddChildren([HAnimJoint425]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint407]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint106]);
HAnimJoint671 := THAnimJointNode.Create;
HAnimJoint671.NameField := 'vl5';
HAnimJoint671.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint671.SetUlimit([0,0,0]);
HAnimJoint671.SetLlimit([0,0,0]);
HAnimSegment672 := THAnimSegmentNode.Create;
HAnimSegment672.NameField := 'l5';
Transform673 := TTransformNode.Create;
{ Empty Transform }
Transform674 := TTransformNode.Create;
{ Empty Transform }
Shape675 := TShapeNode.Create;
Shape675 := Shape25;
{ .AddChild }
Transform674.AddChildren([Shape675]);
{ .AddChildren }
Transform673.AddChildren([Transform674]);
{ .AddChildren }
HAnimSegment672.AddChildren([Transform673]);
Shape676 := TShapeNode.Create;
LineSet677 := TLineSetNode.Create;
LineSet677.SetVertexCount([2]);
Coordinate678 := TCoordinateNode.Create;
Coordinate678.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ .SetCoord }
LineSet677.Coord := Coordinate678;
{ from vl5 to vl4 vertices 2 }
ColorRGBA679 := TColorRGBANode.Create;
ColorRGBA679 := ColorRGBA32;
{ .SetColor }
LineSet677.Color := ColorRGBA679;
{ .SetGeometry }
Shape676.Geometry := LineSet677;
{ .AddChildren }
HAnimSegment672.AddChildren([Shape676]);
{ .AddChildren }
HAnimJoint671.AddChildren([HAnimSegment672]);
HAnimJoint680 := THAnimJointNode.Create;
HAnimJoint680.NameField := 'vl4';
HAnimJoint680.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint680.SetUlimit([0,0,0]);
HAnimJoint680.SetLlimit([0,0,0]);
HAnimSegment681 := THAnimSegmentNode.Create;
HAnimSegment681.NameField := 'l4';
Transform682 := TTransformNode.Create;
{ Empty Transform }
Transform683 := TTransformNode.Create;
{ Empty Transform }
Shape684 := TShapeNode.Create;
Shape684 := Shape25;
{ .AddChild }
Transform683.AddChildren([Shape684]);
{ .AddChildren }
Transform682.AddChildren([Transform683]);
{ .AddChildren }
HAnimSegment681.AddChildren([Transform682]);
Shape685 := TShapeNode.Create;
LineSet686 := TLineSetNode.Create;
LineSet686.SetVertexCount([2]);
Coordinate687 := TCoordinateNode.Create;
Coordinate687.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet686.Coord := Coordinate687;
{ from vl4 to vl3 vertices 2 }
ColorRGBA688 := TColorRGBANode.Create;
ColorRGBA688 := ColorRGBA32;
{ .SetColor }
LineSet686.Color := ColorRGBA688;
{ .SetGeometry }
Shape685.Geometry := LineSet686;
{ .AddChildren }
HAnimSegment681.AddChildren([Shape685]);
{ .AddChildren }
HAnimJoint680.AddChildren([HAnimSegment681]);
HAnimJoint689 := THAnimJointNode.Create;
HAnimJoint689.NameField := 'vl3';
HAnimJoint689.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint689.SetUlimit([0,0,0]);
HAnimJoint689.SetLlimit([0,0,0]);
HAnimSegment690 := THAnimSegmentNode.Create;
HAnimSegment690.NameField := 'l3';
Transform691 := TTransformNode.Create;
{ Empty Transform }
Transform692 := TTransformNode.Create;
{ Empty Transform }
Shape693 := TShapeNode.Create;
Shape693 := Shape25;
{ .AddChild }
Transform692.AddChildren([Shape693]);
{ .AddChildren }
Transform691.AddChildren([Transform692]);
{ .AddChildren }
HAnimSegment690.AddChildren([Transform691]);
Shape694 := TShapeNode.Create;
LineSet695 := TLineSetNode.Create;
LineSet695.SetVertexCount([2]);
Coordinate696 := TCoordinateNode.Create;
Coordinate696.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ .SetCoord }
LineSet695.Coord := Coordinate696;
{ from vl3 to vl2 vertices 2 }
ColorRGBA697 := TColorRGBANode.Create;
ColorRGBA697 := ColorRGBA32;
{ .SetColor }
LineSet695.Color := ColorRGBA697;
{ .SetGeometry }
Shape694.Geometry := LineSet695;
{ .AddChildren }
HAnimSegment690.AddChildren([Shape694]);
HAnimSite698 := THAnimSiteNode.Create;
HAnimSite698.NameField := 'l_rib10_pt';
HAnimSite698.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor699 := TTouchSensorNode.Create;
TouchSensor699.Description := 'HAnimSite l_rib10_pt';
{ .AddChildren }
HAnimSite698.AddChildren([TouchSensor699]);
Shape700 := TShapeNode.Create;
Shape700 := Shape35;
{ .AddChildren }
HAnimSite698.AddChildren([Shape700]);
{ .AddChildren }
HAnimSegment690.AddChildren([HAnimSite698]);
HAnimSite701 := THAnimSiteNode.Create;
HAnimSite701.NameField := 'r_rib10_pt';
HAnimSite701.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor702 := TTouchSensorNode.Create;
TouchSensor702.Description := 'HAnimSite r_rib10_pt';
{ .AddChildren }
HAnimSite701.AddChildren([TouchSensor702]);
Shape703 := TShapeNode.Create;
Shape703 := Shape35;
{ .AddChildren }
HAnimSite701.AddChildren([Shape703]);
{ .AddChildren }
HAnimSegment690.AddChildren([HAnimSite701]);
HAnimSite704 := THAnimSiteNode.Create;
HAnimSite704.NameField := 'spine_2_middle_back_pt';
HAnimSite704.Translation := Vector3(0,1,0);
TouchSensor705 := TTouchSensorNode.Create;
TouchSensor705.Description := 'HAnimSite spine_2_middle_back_pt';
{ .AddChildren }
HAnimSite704.AddChildren([TouchSensor705]);
Shape706 := TShapeNode.Create;
Shape706 := Shape35;
{ .AddChildren }
HAnimSite704.AddChildren([Shape706]);
{ .AddChildren }
HAnimSegment690.AddChildren([HAnimSite704]);
{ .AddChildren }
HAnimJoint689.AddChildren([HAnimSegment690]);
HAnimJoint707 := THAnimJointNode.Create;
HAnimJoint707.NameField := 'vl2';
HAnimJoint707.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint707.SetUlimit([0,0,0]);
HAnimJoint707.SetLlimit([0,0,0]);
HAnimSegment708 := THAnimSegmentNode.Create;
HAnimSegment708.NameField := 'l2';
Transform709 := TTransformNode.Create;
{ Empty Transform }
Transform710 := TTransformNode.Create;
{ Empty Transform }
Shape711 := TShapeNode.Create;
Shape711 := Shape25;
{ .AddChild }
Transform710.AddChildren([Shape711]);
{ .AddChildren }
Transform709.AddChildren([Transform710]);
{ .AddChildren }
HAnimSegment708.AddChildren([Transform709]);
Shape712 := TShapeNode.Create;
LineSet713 := TLineSetNode.Create;
LineSet713.SetVertexCount([2]);
Coordinate714 := TCoordinateNode.Create;
Coordinate714.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet713.Coord := Coordinate714;
{ from vl2 to vl1 vertices 2 }
ColorRGBA715 := TColorRGBANode.Create;
ColorRGBA715 := ColorRGBA32;
{ .SetColor }
LineSet713.Color := ColorRGBA715;
{ .SetGeometry }
Shape712.Geometry := LineSet713;
{ .AddChildren }
HAnimSegment708.AddChildren([Shape712]);
{ .AddChildren }
HAnimJoint707.AddChildren([HAnimSegment708]);
HAnimJoint716 := THAnimJointNode.Create;
HAnimJoint716.NameField := 'vl1';
HAnimJoint716.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint716.SetUlimit([0,0,0]);
HAnimJoint716.SetLlimit([0,0,0]);
HAnimSegment717 := THAnimSegmentNode.Create;
HAnimSegment717.NameField := 'l1';
Transform718 := TTransformNode.Create;
{ Empty Transform }
Transform719 := TTransformNode.Create;
{ Empty Transform }
Shape720 := TShapeNode.Create;
Shape720 := Shape25;
{ .AddChild }
Transform719.AddChildren([Shape720]);
{ .AddChildren }
Transform718.AddChildren([Transform719]);
{ .AddChildren }
HAnimSegment717.AddChildren([Transform718]);
Shape721 := TShapeNode.Create;
LineSet722 := TLineSetNode.Create;
LineSet722.SetVertexCount([2]);
Coordinate723 := TCoordinateNode.Create;
Coordinate723.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ .SetCoord }
LineSet722.Coord := Coordinate723;
{ from vl1 to vt12 vertices 2 }
ColorRGBA724 := TColorRGBANode.Create;
ColorRGBA724 := ColorRGBA32;
{ .SetColor }
LineSet722.Color := ColorRGBA724;
{ .SetGeometry }
Shape721.Geometry := LineSet722;
{ .AddChildren }
HAnimSegment717.AddChildren([Shape721]);
{ .AddChildren }
HAnimJoint716.AddChildren([HAnimSegment717]);
HAnimJoint725 := THAnimJointNode.Create;
HAnimJoint725.NameField := 'vt12';
HAnimJoint725.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint725.SetUlimit([0,0,0]);
HAnimJoint725.SetLlimit([0,0,0]);
HAnimSegment726 := THAnimSegmentNode.Create;
HAnimSegment726.NameField := 't12';
Transform727 := TTransformNode.Create;
{ Empty Transform }
Transform728 := TTransformNode.Create;
{ Empty Transform }
Shape729 := TShapeNode.Create;
Shape729 := Shape25;
{ .AddChild }
Transform728.AddChildren([Shape729]);
{ .AddChildren }
Transform727.AddChildren([Transform728]);
{ .AddChildren }
HAnimSegment726.AddChildren([Transform727]);
Shape730 := TShapeNode.Create;
LineSet731 := TLineSetNode.Create;
LineSet731.SetVertexCount([2]);
Coordinate732 := TCoordinateNode.Create;
Coordinate732.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ .SetCoord }
LineSet731.Coord := Coordinate732;
{ from vt12 to vt11 vertices 2 }
ColorRGBA733 := TColorRGBANode.Create;
ColorRGBA733 := ColorRGBA32;
{ .SetColor }
LineSet731.Color := ColorRGBA733;
{ .SetGeometry }
Shape730.Geometry := LineSet731;
{ .AddChildren }
HAnimSegment726.AddChildren([Shape730]);
{ .AddChildren }
HAnimJoint725.AddChildren([HAnimSegment726]);
HAnimJoint734 := THAnimJointNode.Create;
HAnimJoint734.NameField := 'vt11';
HAnimJoint734.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint734.SetUlimit([0,0,0]);
HAnimJoint734.SetLlimit([0,0,0]);
HAnimSegment735 := THAnimSegmentNode.Create;
HAnimSegment735.NameField := 't11';
Transform736 := TTransformNode.Create;
{ Empty Transform }
Transform737 := TTransformNode.Create;
{ Empty Transform }
Shape738 := TShapeNode.Create;
Shape738 := Shape25;
{ .AddChild }
Transform737.AddChildren([Shape738]);
{ .AddChildren }
Transform736.AddChildren([Transform737]);
{ .AddChildren }
HAnimSegment735.AddChildren([Transform736]);
Shape739 := TShapeNode.Create;
LineSet740 := TLineSetNode.Create;
LineSet740.SetVertexCount([2]);
Coordinate741 := TCoordinateNode.Create;
Coordinate741.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet740.Coord := Coordinate741;
{ from vt11 to vt10 vertices 2 }
ColorRGBA742 := TColorRGBANode.Create;
ColorRGBA742 := ColorRGBA32;
{ .SetColor }
LineSet740.Color := ColorRGBA742;
{ .SetGeometry }
Shape739.Geometry := LineSet740;
{ .AddChildren }
HAnimSegment735.AddChildren([Shape739]);
HAnimSite743 := THAnimSiteNode.Create;
HAnimSite743.NameField := 'substernale_pt';
HAnimSite743.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor744 := TTouchSensorNode.Create;
TouchSensor744.Description := 'HAnimSite substernale_pt';
{ .AddChildren }
HAnimSite743.AddChildren([TouchSensor744]);
Shape745 := TShapeNode.Create;
Shape745 := Shape35;
{ .AddChildren }
HAnimSite743.AddChildren([Shape745]);
{ .AddChildren }
HAnimSegment735.AddChildren([HAnimSite743]);
{ .AddChildren }
HAnimJoint734.AddChildren([HAnimSegment735]);
HAnimJoint746 := THAnimJointNode.Create;
HAnimJoint746.NameField := 'vt10';
HAnimJoint746.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint746.SetUlimit([0,0,0]);
HAnimJoint746.SetLlimit([0,0,0]);
HAnimSegment747 := THAnimSegmentNode.Create;
HAnimSegment747.NameField := 't10';
Transform748 := TTransformNode.Create;
{ Empty Transform }
Transform749 := TTransformNode.Create;
{ Empty Transform }
Shape750 := TShapeNode.Create;
Shape750 := Shape25;
{ .AddChild }
Transform749.AddChildren([Shape750]);
{ .AddChildren }
Transform748.AddChildren([Transform749]);
{ .AddChildren }
HAnimSegment747.AddChildren([Transform748]);
Shape751 := TShapeNode.Create;
LineSet752 := TLineSetNode.Create;
LineSet752.SetVertexCount([2]);
Coordinate753 := TCoordinateNode.Create;
Coordinate753.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ .SetCoord }
LineSet752.Coord := Coordinate753;
{ from vt10 to vt9 vertices 2 }
ColorRGBA754 := TColorRGBANode.Create;
ColorRGBA754 := ColorRGBA32;
{ .SetColor }
LineSet752.Color := ColorRGBA754;
{ .SetGeometry }
Shape751.Geometry := LineSet752;
{ .AddChildren }
HAnimSegment747.AddChildren([Shape751]);
HAnimSite755 := THAnimSiteNode.Create;
HAnimSite755.NameField := 'l_thelion_pt';
HAnimSite755.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor756 := TTouchSensorNode.Create;
TouchSensor756.Description := 'HAnimSite l_thelion_pt';
{ .AddChildren }
HAnimSite755.AddChildren([TouchSensor756]);
Shape757 := TShapeNode.Create;
Shape757 := Shape35;
{ .AddChildren }
HAnimSite755.AddChildren([Shape757]);
{ .AddChildren }
HAnimSegment747.AddChildren([HAnimSite755]);
HAnimSite758 := THAnimSiteNode.Create;
HAnimSite758.NameField := 'r_thelion_pt';
HAnimSite758.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor759 := TTouchSensorNode.Create;
TouchSensor759.Description := 'HAnimSite r_thelion_pt';
{ .AddChildren }
HAnimSite758.AddChildren([TouchSensor759]);
Shape760 := TShapeNode.Create;
Shape760 := Shape35;
{ .AddChildren }
HAnimSite758.AddChildren([Shape760]);
{ .AddChildren }
HAnimSegment747.AddChildren([HAnimSite758]);
{ .AddChildren }
HAnimJoint746.AddChildren([HAnimSegment747]);
HAnimJoint761 := THAnimJointNode.Create;
HAnimJoint761.NameField := 'vt9';
HAnimJoint761.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint761.SetUlimit([0,0,0]);
HAnimJoint761.SetLlimit([0,0,0]);
HAnimSegment762 := THAnimSegmentNode.Create;
HAnimSegment762.NameField := 't9';
Transform763 := TTransformNode.Create;
{ Empty Transform }
Transform764 := TTransformNode.Create;
{ Empty Transform }
Shape765 := TShapeNode.Create;
Shape765 := Shape25;
{ .AddChild }
Transform764.AddChildren([Shape765]);
{ .AddChildren }
Transform763.AddChildren([Transform764]);
{ .AddChildren }
HAnimSegment762.AddChildren([Transform763]);
Shape766 := TShapeNode.Create;
LineSet767 := TLineSetNode.Create;
LineSet767.SetVertexCount([2]);
Coordinate768 := TCoordinateNode.Create;
Coordinate768.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ .SetCoord }
LineSet767.Coord := Coordinate768;
{ from vt9 to vt8 vertices 2 }
ColorRGBA769 := TColorRGBANode.Create;
ColorRGBA769 := ColorRGBA32;
{ .SetColor }
LineSet767.Color := ColorRGBA769;
{ .SetGeometry }
Shape766.Geometry := LineSet767;
{ .AddChildren }
HAnimSegment762.AddChildren([Shape766]);
{ .AddChildren }
HAnimJoint761.AddChildren([HAnimSegment762]);
HAnimJoint770 := THAnimJointNode.Create;
HAnimJoint770.NameField := 'vt8';
HAnimJoint770.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint770.SetUlimit([0,0,0]);
HAnimJoint770.SetLlimit([0,0,0]);
HAnimSegment771 := THAnimSegmentNode.Create;
HAnimSegment771.NameField := 't8';
Transform772 := TTransformNode.Create;
{ Empty Transform }
Transform773 := TTransformNode.Create;
{ Empty Transform }
Shape774 := TShapeNode.Create;
Shape774 := Shape25;
{ .AddChild }
Transform773.AddChildren([Shape774]);
{ .AddChildren }
Transform772.AddChildren([Transform773]);
{ .AddChildren }
HAnimSegment771.AddChildren([Transform772]);
Shape775 := TShapeNode.Create;
LineSet776 := TLineSetNode.Create;
LineSet776.SetVertexCount([2]);
Coordinate777 := TCoordinateNode.Create;
Coordinate777.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ .SetCoord }
LineSet776.Coord := Coordinate777;
{ from vt8 to vt7 vertices 2 }
ColorRGBA778 := TColorRGBANode.Create;
ColorRGBA778 := ColorRGBA32;
{ .SetColor }
LineSet776.Color := ColorRGBA778;
{ .SetGeometry }
Shape775.Geometry := LineSet776;
{ .AddChildren }
HAnimSegment771.AddChildren([Shape775]);
{ .AddChildren }
HAnimJoint770.AddChildren([HAnimSegment771]);
HAnimJoint779 := THAnimJointNode.Create;
HAnimJoint779.NameField := 'vt7';
HAnimJoint779.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint779.SetUlimit([0,0,0]);
HAnimJoint779.SetLlimit([0,0,0]);
HAnimSegment780 := THAnimSegmentNode.Create;
HAnimSegment780.NameField := 't7';
Transform781 := TTransformNode.Create;
{ Empty Transform }
Transform782 := TTransformNode.Create;
{ Empty Transform }
Shape783 := TShapeNode.Create;
Shape783 := Shape25;
{ .AddChild }
Transform782.AddChildren([Shape783]);
{ .AddChildren }
Transform781.AddChildren([Transform782]);
{ .AddChildren }
HAnimSegment780.AddChildren([Transform781]);
Shape784 := TShapeNode.Create;
LineSet785 := TLineSetNode.Create;
LineSet785.SetVertexCount([2]);
Coordinate786 := TCoordinateNode.Create;
Coordinate786.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet785.Coord := Coordinate786;
{ from vt7 to vt6 vertices 2 }
ColorRGBA787 := TColorRGBANode.Create;
ColorRGBA787 := ColorRGBA32;
{ .SetColor }
LineSet785.Color := ColorRGBA787;
{ .SetGeometry }
Shape784.Geometry := LineSet785;
{ .AddChildren }
HAnimSegment780.AddChildren([Shape784]);
HAnimSite788 := THAnimSiteNode.Create;
HAnimSite788.NameField := 'l_chest_midsagittal_plane_pt';
HAnimSite788.Translation := Vector3(0,1,0);
TouchSensor789 := TTouchSensorNode.Create;
TouchSensor789.Description := 'HAnimSite l_chest_midsagittal_plane_pt';
{ .AddChildren }
HAnimSite788.AddChildren([TouchSensor789]);
Shape790 := TShapeNode.Create;
Shape790 := Shape35;
{ .AddChildren }
HAnimSite788.AddChildren([Shape790]);
{ .AddChildren }
HAnimSegment780.AddChildren([HAnimSite788]);
HAnimSite791 := THAnimSiteNode.Create;
HAnimSite791.NameField := 'mesosternale_pt';
HAnimSite791.Translation := Vector3(0,1,0);
TouchSensor792 := TTouchSensorNode.Create;
TouchSensor792.Description := 'HAnimSite mesosternale_pt';
{ .AddChildren }
HAnimSite791.AddChildren([TouchSensor792]);
Shape793 := TShapeNode.Create;
Shape793 := Shape35;
{ .AddChildren }
HAnimSite791.AddChildren([Shape793]);
{ .AddChildren }
HAnimSegment780.AddChildren([HAnimSite791]);
HAnimSite794 := THAnimSiteNode.Create;
HAnimSite794.NameField := 'r_chest_midsagittal_plane_pt';
HAnimSite794.Translation := Vector3(0,1,0);
TouchSensor795 := TTouchSensorNode.Create;
TouchSensor795.Description := 'HAnimSite r_chest_midsagittal_plane_pt';
{ .AddChildren }
HAnimSite794.AddChildren([TouchSensor795]);
Shape796 := TShapeNode.Create;
Shape796 := Shape35;
{ .AddChildren }
HAnimSite794.AddChildren([Shape796]);
{ .AddChildren }
HAnimSegment780.AddChildren([HAnimSite794]);
HAnimSite797 := THAnimSiteNode.Create;
HAnimSite797.NameField := 'rear_center_midsagittal_plane_pt';
HAnimSite797.Translation := Vector3(0,1,0);
TouchSensor798 := TTouchSensorNode.Create;
TouchSensor798.Description := 'HAnimSite rear_center_midsagittal_plane_pt';
{ .AddChildren }
HAnimSite797.AddChildren([TouchSensor798]);
Shape799 := TShapeNode.Create;
Shape799 := Shape35;
{ .AddChildren }
HAnimSite797.AddChildren([Shape799]);
{ .AddChildren }
HAnimSegment780.AddChildren([HAnimSite797]);
{ .AddChildren }
HAnimJoint779.AddChildren([HAnimSegment780]);
HAnimJoint800 := THAnimJointNode.Create;
HAnimJoint800.NameField := 'vt6';
HAnimJoint800.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint800.SetUlimit([0,0,0]);
HAnimJoint800.SetLlimit([0,0,0]);
HAnimSegment801 := THAnimSegmentNode.Create;
HAnimSegment801.NameField := 't6';
Transform802 := TTransformNode.Create;
{ Empty Transform }
Transform803 := TTransformNode.Create;
{ Empty Transform }
Shape804 := TShapeNode.Create;
Shape804 := Shape25;
{ .AddChild }
Transform803.AddChildren([Shape804]);
{ .AddChildren }
Transform802.AddChildren([Transform803]);
{ .AddChildren }
HAnimSegment801.AddChildren([Transform802]);
Shape805 := TShapeNode.Create;
LineSet806 := TLineSetNode.Create;
LineSet806.SetVertexCount([2]);
Coordinate807 := TCoordinateNode.Create;
Coordinate807.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ .SetCoord }
LineSet806.Coord := Coordinate807;
{ from vt6 to vt5 vertices 2 }
ColorRGBA808 := TColorRGBANode.Create;
ColorRGBA808 := ColorRGBA32;
{ .SetColor }
LineSet806.Color := ColorRGBA808;
{ .SetGeometry }
Shape805.Geometry := LineSet806;
{ .AddChildren }
HAnimSegment801.AddChildren([Shape805]);
HAnimSite809 := THAnimSiteNode.Create;
HAnimSite809.NameField := 'spine_1_middle_back_pt';
HAnimSite809.Translation := Vector3(0,1,0);
TouchSensor810 := TTouchSensorNode.Create;
TouchSensor810.Description := 'HAnimSite spine_1_middle_back_pt';
{ .AddChildren }
HAnimSite809.AddChildren([TouchSensor810]);
Shape811 := TShapeNode.Create;
Shape811 := Shape35;
{ .AddChildren }
HAnimSite809.AddChildren([Shape811]);
{ .AddChildren }
HAnimSegment801.AddChildren([HAnimSite809]);
{ .AddChildren }
HAnimJoint800.AddChildren([HAnimSegment801]);
HAnimJoint812 := THAnimJointNode.Create;
HAnimJoint812.NameField := 'vt5';
HAnimJoint812.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint812.SetUlimit([0,0,0]);
HAnimJoint812.SetLlimit([0,0,0]);
HAnimSegment813 := THAnimSegmentNode.Create;
HAnimSegment813.NameField := 't5';
Transform814 := TTransformNode.Create;
{ Empty Transform }
Transform815 := TTransformNode.Create;
{ Empty Transform }
Shape816 := TShapeNode.Create;
Shape816 := Shape25;
{ .AddChild }
Transform815.AddChildren([Shape816]);
{ .AddChildren }
Transform814.AddChildren([Transform815]);
{ .AddChildren }
HAnimSegment813.AddChildren([Transform814]);
Shape817 := TShapeNode.Create;
LineSet818 := TLineSetNode.Create;
LineSet818.SetVertexCount([2]);
Coordinate819 := TCoordinateNode.Create;
Coordinate819.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ .SetCoord }
LineSet818.Coord := Coordinate819;
{ from vt5 to vt4 vertices 2 }
ColorRGBA820 := TColorRGBANode.Create;
ColorRGBA820 := ColorRGBA32;
{ .SetColor }
LineSet818.Color := ColorRGBA820;
{ .SetGeometry }
Shape817.Geometry := LineSet818;
{ .AddChildren }
HAnimSegment813.AddChildren([Shape817]);
{ .AddChildren }
HAnimJoint812.AddChildren([HAnimSegment813]);
HAnimJoint821 := THAnimJointNode.Create;
HAnimJoint821.NameField := 'vt4';
HAnimJoint821.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint821.SetUlimit([0,0,0]);
HAnimJoint821.SetLlimit([0,0,0]);
HAnimSegment822 := THAnimSegmentNode.Create;
HAnimSegment822.NameField := 't4';
Transform823 := TTransformNode.Create;
{ Empty Transform }
Transform824 := TTransformNode.Create;
{ Empty Transform }
Shape825 := TShapeNode.Create;
Shape825 := Shape25;
{ .AddChild }
Transform824.AddChildren([Shape825]);
{ .AddChildren }
Transform823.AddChildren([Transform824]);
{ .AddChildren }
HAnimSegment822.AddChildren([Transform823]);
Shape826 := TShapeNode.Create;
LineSet827 := TLineSetNode.Create;
LineSet827.SetVertexCount([2]);
Coordinate828 := TCoordinateNode.Create;
Coordinate828.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ .SetCoord }
LineSet827.Coord := Coordinate828;
{ from vt4 to vt3 vertices 2 }
ColorRGBA829 := TColorRGBANode.Create;
ColorRGBA829 := ColorRGBA32;
{ .SetColor }
LineSet827.Color := ColorRGBA829;
{ .SetGeometry }
Shape826.Geometry := LineSet827;
{ .AddChildren }
HAnimSegment822.AddChildren([Shape826]);
{ .AddChildren }
HAnimJoint821.AddChildren([HAnimSegment822]);
HAnimJoint830 := THAnimJointNode.Create;
HAnimJoint830.NameField := 'vt3';
HAnimJoint830.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint830.SetUlimit([0,0,0]);
HAnimJoint830.SetLlimit([0,0,0]);
HAnimSegment831 := THAnimSegmentNode.Create;
HAnimSegment831.NameField := 't3';
Transform832 := TTransformNode.Create;
{ Empty Transform }
Transform833 := TTransformNode.Create;
{ Empty Transform }
Shape834 := TShapeNode.Create;
Shape834 := Shape25;
{ .AddChild }
Transform833.AddChildren([Shape834]);
{ .AddChildren }
Transform832.AddChildren([Transform833]);
{ .AddChildren }
HAnimSegment831.AddChildren([Transform832]);
Shape835 := TShapeNode.Create;
LineSet836 := TLineSetNode.Create;
LineSet836.SetVertexCount([2]);
Coordinate837 := TCoordinateNode.Create;
Coordinate837.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ .SetCoord }
LineSet836.Coord := Coordinate837;
{ from vt3 to vt2 vertices 2 }
ColorRGBA838 := TColorRGBANode.Create;
ColorRGBA838 := ColorRGBA32;
{ .SetColor }
LineSet836.Color := ColorRGBA838;
{ .SetGeometry }
Shape835.Geometry := LineSet836;
{ .AddChildren }
HAnimSegment831.AddChildren([Shape835]);
{ .AddChildren }
HAnimJoint830.AddChildren([HAnimSegment831]);
HAnimJoint839 := THAnimJointNode.Create;
HAnimJoint839.NameField := 'vt2';
HAnimJoint839.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint839.SetUlimit([0,0,0]);
HAnimJoint839.SetLlimit([0,0,0]);
HAnimSegment840 := THAnimSegmentNode.Create;
HAnimSegment840.NameField := 't2';
Transform841 := TTransformNode.Create;
{ Empty Transform }
Transform842 := TTransformNode.Create;
{ Empty Transform }
Shape843 := TShapeNode.Create;
Shape843 := Shape25;
{ .AddChild }
Transform842.AddChildren([Shape843]);
{ .AddChildren }
Transform841.AddChildren([Transform842]);
{ .AddChildren }
HAnimSegment840.AddChildren([Transform841]);
Shape844 := TShapeNode.Create;
LineSet845 := TLineSetNode.Create;
LineSet845.SetVertexCount([2]);
Coordinate846 := TCoordinateNode.Create;
Coordinate846.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet845.Coord := Coordinate846;
{ from vt2 to vt1 vertices 2 }
ColorRGBA847 := TColorRGBANode.Create;
ColorRGBA847 := ColorRGBA32;
{ .SetColor }
LineSet845.Color := ColorRGBA847;
{ .SetGeometry }
Shape844.Geometry := LineSet845;
{ .AddChildren }
HAnimSegment840.AddChildren([Shape844]);
HAnimSite848 := THAnimSiteNode.Create;
HAnimSite848.NameField := 'cervicale_pt';
HAnimSite848.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor849 := TTouchSensorNode.Create;
TouchSensor849.Description := 'HAnimSite cervicale_pt';
{ .AddChildren }
HAnimSite848.AddChildren([TouchSensor849]);
Shape850 := TShapeNode.Create;
Shape850 := Shape35;
{ .AddChildren }
HAnimSite848.AddChildren([Shape850]);
{ .AddChildren }
HAnimSegment840.AddChildren([HAnimSite848]);
HAnimSite851 := THAnimSiteNode.Create;
HAnimSite851.NameField := 'suprasternale_pt';
HAnimSite851.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor852 := TTouchSensorNode.Create;
TouchSensor852.Description := 'HAnimSite suprasternale_pt';
{ .AddChildren }
HAnimSite851.AddChildren([TouchSensor852]);
Shape853 := TShapeNode.Create;
Shape853 := Shape35;
{ .AddChildren }
HAnimSite851.AddChildren([Shape853]);
{ .AddChildren }
HAnimSegment840.AddChildren([HAnimSite851]);
{ .AddChildren }
HAnimJoint839.AddChildren([HAnimSegment840]);
HAnimJoint854 := THAnimJointNode.Create;
HAnimJoint854.NameField := 'vt1';
HAnimJoint854.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint854.SetUlimit([0,0,0]);
HAnimJoint854.SetLlimit([0,0,0]);
HAnimSegment855 := THAnimSegmentNode.Create;
HAnimSegment855.NameField := 't1';
Transform856 := TTransformNode.Create;
{ Empty Transform }
Transform857 := TTransformNode.Create;
{ Empty Transform }
Shape858 := TShapeNode.Create;
Shape858 := Shape25;
{ .AddChild }
Transform857.AddChildren([Shape858]);
{ .AddChildren }
Transform856.AddChildren([Transform857]);
{ .AddChildren }
HAnimSegment855.AddChildren([Transform856]);
Shape859 := TShapeNode.Create;
LineSet860 := TLineSetNode.Create;
LineSet860.SetVertexCount([2]);
Coordinate861 := TCoordinateNode.Create;
Coordinate861.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ .SetCoord }
LineSet860.Coord := Coordinate861;
{ from vt1 to vc7 vertices 2 }
ColorRGBA862 := TColorRGBANode.Create;
ColorRGBA862 := ColorRGBA32;
{ .SetColor }
LineSet860.Color := ColorRGBA862;
{ .SetGeometry }
Shape859.Geometry := LineSet860;
{ .AddChildren }
HAnimSegment855.AddChildren([Shape859]);
HAnimSite863 := THAnimSiteNode.Create;
HAnimSite863.NameField := 'l_neck_base_pt';
HAnimSite863.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor864 := TTouchSensorNode.Create;
TouchSensor864.Description := 'HAnimSite l_neck_base_pt';
{ .AddChildren }
HAnimSite863.AddChildren([TouchSensor864]);
Shape865 := TShapeNode.Create;
Shape865 := Shape35;
{ .AddChildren }
HAnimSite863.AddChildren([Shape865]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite863]);
HAnimSite866 := THAnimSiteNode.Create;
HAnimSite866.NameField := 'r_neck_base_pt';
HAnimSite866.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor867 := TTouchSensorNode.Create;
TouchSensor867.Description := 'HAnimSite r_neck_base_pt';
{ .AddChildren }
HAnimSite866.AddChildren([TouchSensor867]);
Shape868 := TShapeNode.Create;
Shape868 := Shape35;
{ .AddChildren }
HAnimSite866.AddChildren([Shape868]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite866]);
Shape869 := TShapeNode.Create;
LineSet870 := TLineSetNode.Create;
LineSet870.SetVertexCount([2]);
Coordinate871 := TCoordinateNode.Create;
Coordinate871.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet870.Coord := Coordinate871;
{ from vt1 to l_sternoclavicular vertices 2 }
ColorRGBA872 := TColorRGBANode.Create;
ColorRGBA872 := ColorRGBA32;
{ .SetColor }
LineSet870.Color := ColorRGBA872;
{ .SetGeometry }
Shape869.Geometry := LineSet870;
{ .AddChildren }
HAnimSegment855.AddChildren([Shape869]);
HAnimSite873 := THAnimSiteNode.Create;
HAnimSite873.NameField := 'l_acromion_pt';
HAnimSite873.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor874 := TTouchSensorNode.Create;
TouchSensor874.Description := 'HAnimSite l_acromion_pt';
{ .AddChildren }
HAnimSite873.AddChildren([TouchSensor874]);
Shape875 := TShapeNode.Create;
Shape875 := Shape35;
{ .AddChildren }
HAnimSite873.AddChildren([Shape875]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite873]);
HAnimSite876 := THAnimSiteNode.Create;
HAnimSite876.NameField := 'l_axilla_distal_pt';
HAnimSite876.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor877 := TTouchSensorNode.Create;
TouchSensor877.Description := 'HAnimSite l_axilla_distal_pt';
{ .AddChildren }
HAnimSite876.AddChildren([TouchSensor877]);
Shape878 := TShapeNode.Create;
Shape878 := Shape35;
{ .AddChildren }
HAnimSite876.AddChildren([Shape878]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite876]);
HAnimSite879 := THAnimSiteNode.Create;
HAnimSite879.NameField := 'l_axilla_posterior_folds_pt';
HAnimSite879.Translation := Vector3(0,1,0);
TouchSensor880 := TTouchSensorNode.Create;
TouchSensor880.Description := 'HAnimSite l_axilla_posterior_folds_pt';
{ .AddChildren }
HAnimSite879.AddChildren([TouchSensor880]);
Shape881 := TShapeNode.Create;
Shape881 := Shape35;
{ .AddChildren }
HAnimSite879.AddChildren([Shape881]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite879]);
HAnimSite882 := THAnimSiteNode.Create;
HAnimSite882.NameField := 'l_axilla_proximal_pt';
HAnimSite882.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor883 := TTouchSensorNode.Create;
TouchSensor883.Description := 'HAnimSite l_axilla_proximal_pt';
{ .AddChildren }
HAnimSite882.AddChildren([TouchSensor883]);
Shape884 := TShapeNode.Create;
Shape884 := Shape35;
{ .AddChildren }
HAnimSite882.AddChildren([Shape884]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite882]);
HAnimSite885 := THAnimSiteNode.Create;
HAnimSite885.NameField := 'l_clavicale_pt';
HAnimSite885.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor886 := TTouchSensorNode.Create;
TouchSensor886.Description := 'HAnimSite l_clavicale_pt';
{ .AddChildren }
HAnimSite885.AddChildren([TouchSensor886]);
Shape887 := TShapeNode.Create;
Shape887 := Shape35;
{ .AddChildren }
HAnimSite885.AddChildren([Shape887]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite885]);
Shape888 := TShapeNode.Create;
LineSet889 := TLineSetNode.Create;
LineSet889.SetVertexCount([2]);
Coordinate890 := TCoordinateNode.Create;
Coordinate890.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ .SetCoord }
LineSet889.Coord := Coordinate890;
{ from vt1 to r_sternoclavicular vertices 2 }
ColorRGBA891 := TColorRGBANode.Create;
ColorRGBA891 := ColorRGBA32;
{ .SetColor }
LineSet889.Color := ColorRGBA891;
{ .SetGeometry }
Shape888.Geometry := LineSet889;
{ .AddChildren }
HAnimSegment855.AddChildren([Shape888]);
HAnimSite892 := THAnimSiteNode.Create;
HAnimSite892.NameField := 'r_acromion_pt';
HAnimSite892.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor893 := TTouchSensorNode.Create;
TouchSensor893.Description := 'HAnimSite r_acromion_pt';
{ .AddChildren }
HAnimSite892.AddChildren([TouchSensor893]);
Shape894 := TShapeNode.Create;
Shape894 := Shape35;
{ .AddChildren }
HAnimSite892.AddChildren([Shape894]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite892]);
HAnimSite895 := THAnimSiteNode.Create;
HAnimSite895.NameField := 'r_axilla_distal_pt';
HAnimSite895.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor896 := TTouchSensorNode.Create;
TouchSensor896.Description := 'HAnimSite r_axilla_distal_pt';
{ .AddChildren }
HAnimSite895.AddChildren([TouchSensor896]);
Shape897 := TShapeNode.Create;
Shape897 := Shape35;
{ .AddChildren }
HAnimSite895.AddChildren([Shape897]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite895]);
HAnimSite898 := THAnimSiteNode.Create;
HAnimSite898.NameField := 'r_axilla_posterior_folds_pt';
HAnimSite898.Translation := Vector3(0,1,0);
TouchSensor899 := TTouchSensorNode.Create;
TouchSensor899.Description := 'HAnimSite r_axilla_posterior_folds_pt';
{ .AddChildren }
HAnimSite898.AddChildren([TouchSensor899]);
Shape900 := TShapeNode.Create;
Shape900 := Shape35;
{ .AddChildren }
HAnimSite898.AddChildren([Shape900]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite898]);
HAnimSite901 := THAnimSiteNode.Create;
HAnimSite901.NameField := 'r_axilla_proximal_pt';
HAnimSite901.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor902 := TTouchSensorNode.Create;
TouchSensor902.Description := 'HAnimSite r_axilla_proximal_pt';
{ .AddChildren }
HAnimSite901.AddChildren([TouchSensor902]);
Shape903 := TShapeNode.Create;
Shape903 := Shape35;
{ .AddChildren }
HAnimSite901.AddChildren([Shape903]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite901]);
HAnimSite904 := THAnimSiteNode.Create;
HAnimSite904.NameField := 'r_clavicale_pt';
HAnimSite904.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor905 := TTouchSensorNode.Create;
TouchSensor905.Description := 'HAnimSite r_clavicale_pt';
{ .AddChildren }
HAnimSite904.AddChildren([TouchSensor905]);
Shape906 := TShapeNode.Create;
Shape906 := Shape35;
{ .AddChildren }
HAnimSite904.AddChildren([Shape906]);
{ .AddChildren }
HAnimSegment855.AddChildren([HAnimSite904]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimSegment855]);
HAnimJoint907 := THAnimJointNode.Create;
HAnimJoint907.NameField := 'vc7';
HAnimJoint907.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint907.SetUlimit([0,0,0]);
HAnimJoint907.SetLlimit([0,0,0]);
HAnimSegment908 := THAnimSegmentNode.Create;
HAnimSegment908.NameField := 'c7';
Transform909 := TTransformNode.Create;
{ Empty Transform }
Transform910 := TTransformNode.Create;
{ Empty Transform }
Shape911 := TShapeNode.Create;
Shape911 := Shape25;
{ .AddChild }
Transform910.AddChildren([Shape911]);
{ .AddChildren }
Transform909.AddChildren([Transform910]);
{ .AddChildren }
HAnimSegment908.AddChildren([Transform909]);
Shape912 := TShapeNode.Create;
LineSet913 := TLineSetNode.Create;
LineSet913.SetVertexCount([2]);
Coordinate914 := TCoordinateNode.Create;
Coordinate914.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ .SetCoord }
LineSet913.Coord := Coordinate914;
{ from vc7 to vc6 vertices 2 }
ColorRGBA915 := TColorRGBANode.Create;
ColorRGBA915 := ColorRGBA32;
{ .SetColor }
LineSet913.Color := ColorRGBA915;
{ .SetGeometry }
Shape912.Geometry := LineSet913;
{ .AddChildren }
HAnimSegment908.AddChildren([Shape912]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimSegment908]);
HAnimJoint916 := THAnimJointNode.Create;
HAnimJoint916.NameField := 'vc6';
HAnimJoint916.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint916.SetUlimit([0,0,0]);
HAnimJoint916.SetLlimit([0,0,0]);
HAnimSegment917 := THAnimSegmentNode.Create;
HAnimSegment917.NameField := 'c6';
Transform918 := TTransformNode.Create;
{ Empty Transform }
Transform919 := TTransformNode.Create;
{ Empty Transform }
Shape920 := TShapeNode.Create;
Shape920 := Shape25;
{ .AddChild }
Transform919.AddChildren([Shape920]);
{ .AddChildren }
Transform918.AddChildren([Transform919]);
{ .AddChildren }
HAnimSegment917.AddChildren([Transform918]);
Shape921 := TShapeNode.Create;
LineSet922 := TLineSetNode.Create;
LineSet922.SetVertexCount([2]);
Coordinate923 := TCoordinateNode.Create;
Coordinate923.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ .SetCoord }
LineSet922.Coord := Coordinate923;
{ from vc6 to vc5 vertices 2 }
ColorRGBA924 := TColorRGBANode.Create;
ColorRGBA924 := ColorRGBA32;
{ .SetColor }
LineSet922.Color := ColorRGBA924;
{ .SetGeometry }
Shape921.Geometry := LineSet922;
{ .AddChildren }
HAnimSegment917.AddChildren([Shape921]);
{ .AddChildren }
HAnimJoint916.AddChildren([HAnimSegment917]);
HAnimJoint925 := THAnimJointNode.Create;
HAnimJoint925.NameField := 'vc5';
HAnimJoint925.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint925.SetUlimit([0,0,0]);
HAnimJoint925.SetLlimit([0,0,0]);
HAnimSegment926 := THAnimSegmentNode.Create;
HAnimSegment926.NameField := 'c5';
Transform927 := TTransformNode.Create;
{ Empty Transform }
Transform928 := TTransformNode.Create;
{ Empty Transform }
Shape929 := TShapeNode.Create;
Shape929 := Shape25;
{ .AddChild }
Transform928.AddChildren([Shape929]);
{ .AddChildren }
Transform927.AddChildren([Transform928]);
{ .AddChildren }
HAnimSegment926.AddChildren([Transform927]);
Shape930 := TShapeNode.Create;
LineSet931 := TLineSetNode.Create;
LineSet931.SetVertexCount([2]);
Coordinate932 := TCoordinateNode.Create;
Coordinate932.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet931.Coord := Coordinate932;
{ from vc5 to vc4 vertices 2 }
ColorRGBA933 := TColorRGBANode.Create;
ColorRGBA933 := ColorRGBA32;
{ .SetColor }
LineSet931.Color := ColorRGBA933;
{ .SetGeometry }
Shape930.Geometry := LineSet931;
{ .AddChildren }
HAnimSegment926.AddChildren([Shape930]);
{ .AddChildren }
HAnimJoint925.AddChildren([HAnimSegment926]);
HAnimJoint934 := THAnimJointNode.Create;
HAnimJoint934.NameField := 'vc4';
HAnimJoint934.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint934.SetUlimit([0,0,0]);
HAnimJoint934.SetLlimit([0,0,0]);
HAnimSegment935 := THAnimSegmentNode.Create;
HAnimSegment935.NameField := 'c4';
Transform936 := TTransformNode.Create;
{ Empty Transform }
Transform937 := TTransformNode.Create;
{ Empty Transform }
Shape938 := TShapeNode.Create;
Shape938 := Shape25;
{ .AddChild }
Transform937.AddChildren([Shape938]);
{ .AddChildren }
Transform936.AddChildren([Transform937]);
{ .AddChildren }
HAnimSegment935.AddChildren([Transform936]);
Shape939 := TShapeNode.Create;
LineSet940 := TLineSetNode.Create;
LineSet940.SetVertexCount([2]);
Coordinate941 := TCoordinateNode.Create;
Coordinate941.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ .SetCoord }
LineSet940.Coord := Coordinate941;
{ from vc4 to vc3 vertices 2 }
ColorRGBA942 := TColorRGBANode.Create;
ColorRGBA942 := ColorRGBA32;
{ .SetColor }
LineSet940.Color := ColorRGBA942;
{ .SetGeometry }
Shape939.Geometry := LineSet940;
{ .AddChildren }
HAnimSegment935.AddChildren([Shape939]);
{ .AddChildren }
HAnimJoint934.AddChildren([HAnimSegment935]);
HAnimJoint943 := THAnimJointNode.Create;
HAnimJoint943.NameField := 'vc3';
HAnimJoint943.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint943.SetUlimit([0,0,0]);
HAnimJoint943.SetLlimit([0,0,0]);
HAnimSegment944 := THAnimSegmentNode.Create;
HAnimSegment944.NameField := 'c3';
Transform945 := TTransformNode.Create;
{ Empty Transform }
Transform946 := TTransformNode.Create;
{ Empty Transform }
Shape947 := TShapeNode.Create;
Shape947 := Shape25;
{ .AddChild }
Transform946.AddChildren([Shape947]);
{ .AddChildren }
Transform945.AddChildren([Transform946]);
{ .AddChildren }
HAnimSegment944.AddChildren([Transform945]);
Shape948 := TShapeNode.Create;
LineSet949 := TLineSetNode.Create;
LineSet949.SetVertexCount([2]);
Coordinate950 := TCoordinateNode.Create;
Coordinate950.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet949.Coord := Coordinate950;
{ from vc3 to vc2 vertices 2 }
ColorRGBA951 := TColorRGBANode.Create;
ColorRGBA951 := ColorRGBA32;
{ .SetColor }
LineSet949.Color := ColorRGBA951;
{ .SetGeometry }
Shape948.Geometry := LineSet949;
{ .AddChildren }
HAnimSegment944.AddChildren([Shape948]);
HAnimSite952 := THAnimSiteNode.Create;
HAnimSite952.NameField := 'adams_apple_pt';
HAnimSite952.Translation := Vector3(0,1,0);
TouchSensor953 := TTouchSensorNode.Create;
TouchSensor953.Description := 'HAnimSite adams_apple_pt';
{ .AddChildren }
HAnimSite952.AddChildren([TouchSensor953]);
Shape954 := TShapeNode.Create;
Shape954 := Shape35;
{ .AddChildren }
HAnimSite952.AddChildren([Shape954]);
{ .AddChildren }
HAnimSegment944.AddChildren([HAnimSite952]);
{ .AddChildren }
HAnimJoint943.AddChildren([HAnimSegment944]);
HAnimJoint955 := THAnimJointNode.Create;
HAnimJoint955.NameField := 'vc2';
HAnimJoint955.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint955.SetUlimit([0,0,0]);
HAnimJoint955.SetLlimit([0,0,0]);
HAnimSegment956 := THAnimSegmentNode.Create;
HAnimSegment956.NameField := 'c2';
Transform957 := TTransformNode.Create;
{ Empty Transform }
Transform958 := TTransformNode.Create;
{ Empty Transform }
Shape959 := TShapeNode.Create;
Shape959 := Shape25;
{ .AddChild }
Transform958.AddChildren([Shape959]);
{ .AddChildren }
Transform957.AddChildren([Transform958]);
{ .AddChildren }
HAnimSegment956.AddChildren([Transform957]);
Shape960 := TShapeNode.Create;
LineSet961 := TLineSetNode.Create;
LineSet961.SetVertexCount([2]);
Coordinate962 := TCoordinateNode.Create;
Coordinate962.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ .SetCoord }
LineSet961.Coord := Coordinate962;
{ from vc2 to vc1 vertices 2 }
ColorRGBA963 := TColorRGBANode.Create;
ColorRGBA963 := ColorRGBA32;
{ .SetColor }
LineSet961.Color := ColorRGBA963;
{ .SetGeometry }
Shape960.Geometry := LineSet961;
{ .AddChildren }
HAnimSegment956.AddChildren([Shape960]);
{ .AddChildren }
HAnimJoint955.AddChildren([HAnimSegment956]);
HAnimJoint964 := THAnimJointNode.Create;
HAnimJoint964.NameField := 'vc1';
HAnimJoint964.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint964.SetUlimit([0,0,0]);
HAnimJoint964.SetLlimit([0,0,0]);
HAnimSegment965 := THAnimSegmentNode.Create;
HAnimSegment965.NameField := 'c1';
Transform966 := TTransformNode.Create;
{ Empty Transform }
Transform967 := TTransformNode.Create;
{ Empty Transform }
Shape968 := TShapeNode.Create;
Shape968 := Shape25;
{ .AddChild }
Transform967.AddChildren([Shape968]);
{ .AddChildren }
Transform966.AddChildren([Transform967]);
{ .AddChildren }
HAnimSegment965.AddChildren([Transform966]);
Shape969 := TShapeNode.Create;
LineSet970 := TLineSetNode.Create;
LineSet970.SetVertexCount([2]);
Coordinate971 := TCoordinateNode.Create;
Coordinate971.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet970.Coord := Coordinate971;
{ from vc1 to skullbase vertices 2 }
ColorRGBA972 := TColorRGBANode.Create;
ColorRGBA972 := ColorRGBA32;
{ .SetColor }
LineSet970.Color := ColorRGBA972;
{ .SetGeometry }
Shape969.Geometry := LineSet970;
{ .AddChildren }
HAnimSegment965.AddChildren([Shape969]);
HAnimSite973 := THAnimSiteNode.Create;
HAnimSite973.NameField := 'glabella_pt';
HAnimSite973.Translation := Vector3(0,1,0);
TouchSensor974 := TTouchSensorNode.Create;
TouchSensor974.Description := 'HAnimSite glabella_pt';
{ .AddChildren }
HAnimSite973.AddChildren([TouchSensor974]);
Shape975 := TShapeNode.Create;
Shape975 := Shape35;
{ .AddChildren }
HAnimSite973.AddChildren([Shape975]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite973]);
HAnimSite976 := THAnimSiteNode.Create;
HAnimSite976.NameField := 'l_ectocanthus_pt';
HAnimSite976.Translation := Vector3(0,1,0);
TouchSensor977 := TTouchSensorNode.Create;
TouchSensor977.Description := 'HAnimSite l_ectocanthus_pt';
{ .AddChildren }
HAnimSite976.AddChildren([TouchSensor977]);
Shape978 := TShapeNode.Create;
Shape978 := Shape35;
{ .AddChildren }
HAnimSite976.AddChildren([Shape978]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite976]);
HAnimSite979 := THAnimSiteNode.Create;
HAnimSite979.NameField := 'l_infraorbitale_pt';
HAnimSite979.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor980 := TTouchSensorNode.Create;
TouchSensor980.Description := 'HAnimSite l_infraorbitale_pt';
{ .AddChildren }
HAnimSite979.AddChildren([TouchSensor980]);
Shape981 := TShapeNode.Create;
Shape981 := Shape35;
{ .AddChildren }
HAnimSite979.AddChildren([Shape981]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite979]);
HAnimSite982 := THAnimSiteNode.Create;
HAnimSite982.NameField := 'l_tragion_pt';
HAnimSite982.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor983 := TTouchSensorNode.Create;
TouchSensor983.Description := 'HAnimSite l_tragion_pt';
{ .AddChildren }
HAnimSite982.AddChildren([TouchSensor983]);
Shape984 := TShapeNode.Create;
Shape984 := Shape35;
{ .AddChildren }
HAnimSite982.AddChildren([Shape984]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite982]);
HAnimSite985 := THAnimSiteNode.Create;
HAnimSite985.NameField := 'nuchale_pt';
HAnimSite985.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor986 := TTouchSensorNode.Create;
TouchSensor986.Description := 'HAnimSite nuchale_pt';
{ .AddChildren }
HAnimSite985.AddChildren([TouchSensor986]);
Shape987 := TShapeNode.Create;
Shape987 := Shape35;
{ .AddChildren }
HAnimSite985.AddChildren([Shape987]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite985]);
HAnimSite988 := THAnimSiteNode.Create;
HAnimSite988.NameField := 'opisthocranion_pt';
HAnimSite988.Translation := Vector3(0,1,0);
TouchSensor989 := TTouchSensorNode.Create;
TouchSensor989.Description := 'HAnimSite opisthocranion_pt';
{ .AddChildren }
HAnimSite988.AddChildren([TouchSensor989]);
Shape990 := TShapeNode.Create;
Shape990 := Shape35;
{ .AddChildren }
HAnimSite988.AddChildren([Shape990]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite988]);
HAnimSite991 := THAnimSiteNode.Create;
HAnimSite991.NameField := 'r_ectocanthus_pt';
HAnimSite991.Translation := Vector3(0,1,0);
TouchSensor992 := TTouchSensorNode.Create;
TouchSensor992.Description := 'HAnimSite r_ectocanthus_pt';
{ .AddChildren }
HAnimSite991.AddChildren([TouchSensor992]);
Shape993 := TShapeNode.Create;
Shape993 := Shape35;
{ .AddChildren }
HAnimSite991.AddChildren([Shape993]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite991]);
HAnimSite994 := THAnimSiteNode.Create;
HAnimSite994.NameField := 'r_infraorbitale_pt';
HAnimSite994.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor995 := TTouchSensorNode.Create;
TouchSensor995.Description := 'HAnimSite r_infraorbitale_pt';
{ .AddChildren }
HAnimSite994.AddChildren([TouchSensor995]);
Shape996 := TShapeNode.Create;
Shape996 := Shape35;
{ .AddChildren }
HAnimSite994.AddChildren([Shape996]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite994]);
HAnimSite997 := THAnimSiteNode.Create;
HAnimSite997.NameField := 'r_tragion_pt';
HAnimSite997.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor998 := TTouchSensorNode.Create;
TouchSensor998.Description := 'HAnimSite r_tragion_pt';
{ .AddChildren }
HAnimSite997.AddChildren([TouchSensor998]);
Shape999 := TShapeNode.Create;
Shape999 := Shape35;
{ .AddChildren }
HAnimSite997.AddChildren([Shape999]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite997]);
HAnimSite1000 := THAnimSiteNode.Create;
HAnimSite1000.NameField := 'sellion_pt';
HAnimSite1000.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor1001 := TTouchSensorNode.Create;
TouchSensor1001.Description := 'HAnimSite sellion_pt';
{ .AddChildren }
HAnimSite1000.AddChildren([TouchSensor1001]);
Shape1002 := TShapeNode.Create;
Shape1002 := Shape35;
{ .AddChildren }
HAnimSite1000.AddChildren([Shape1002]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite1000]);
HAnimSite1003 := THAnimSiteNode.Create;
HAnimSite1003.NameField := 'skull_vertex_pt';
HAnimSite1003.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor1004 := TTouchSensorNode.Create;
TouchSensor1004.Description := 'HAnimSite skull_vertex_pt';
{ .AddChildren }
HAnimSite1003.AddChildren([TouchSensor1004]);
Shape1005 := TShapeNode.Create;
Shape1005 := Shape35;
{ .AddChildren }
HAnimSite1003.AddChildren([Shape1005]);
{ .AddChildren }
HAnimSegment965.AddChildren([HAnimSite1003]);
{ .AddChildren }
HAnimJoint964.AddChildren([HAnimSegment965]);
HAnimJoint1006 := THAnimJointNode.Create;
HAnimJoint1006.NameField := 'skullbase';
HAnimJoint1006.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint1006.SetUlimit([0,0,0]);
HAnimJoint1006.SetLlimit([0,0,0]);
HAnimSegment1007 := THAnimSegmentNode.Create;
HAnimSegment1007.NameField := 'skull';
Transform1008 := TTransformNode.Create;
{ Empty Transform }
Transform1009 := TTransformNode.Create;
{ Empty Transform }
Shape1010 := TShapeNode.Create;
Shape1010 := Shape25;
{ .AddChild }
Transform1009.AddChildren([Shape1010]);
{ .AddChildren }
Transform1008.AddChildren([Transform1009]);
{ .AddChildren }
HAnimSegment1007.AddChildren([Transform1008]);
Shape1011 := TShapeNode.Create;
LineSet1012 := TLineSetNode.Create;
LineSet1012.SetVertexCount([2]);
Coordinate1013 := TCoordinateNode.Create;
Coordinate1013.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1012.Coord := Coordinate1013;
{ from skullbase to l_eyelid_joint vertices 2 }
ColorRGBA1014 := TColorRGBANode.Create;
ColorRGBA1014 := ColorRGBA32;
{ .SetColor }
LineSet1012.Color := ColorRGBA1014;
{ .SetGeometry }
Shape1011.Geometry := LineSet1012;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1011]);
Shape1015 := TShapeNode.Create;
LineSet1016 := TLineSetNode.Create;
LineSet1016.SetVertexCount([2]);
Coordinate1017 := TCoordinateNode.Create;
Coordinate1017.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1016.Coord := Coordinate1017;
{ from skullbase to r_eyelid_joint vertices 2 }
ColorRGBA1018 := TColorRGBANode.Create;
ColorRGBA1018 := ColorRGBA32;
{ .SetColor }
LineSet1016.Color := ColorRGBA1018;
{ .SetGeometry }
Shape1015.Geometry := LineSet1016;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1015]);
Shape1019 := TShapeNode.Create;
LineSet1020 := TLineSetNode.Create;
LineSet1020.SetVertexCount([2]);
Coordinate1021 := TCoordinateNode.Create;
Coordinate1021.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1020.Coord := Coordinate1021;
{ from skullbase to l_eyeball_joint vertices 2 }
ColorRGBA1022 := TColorRGBANode.Create;
ColorRGBA1022 := ColorRGBA32;
{ .SetColor }
LineSet1020.Color := ColorRGBA1022;
{ .SetGeometry }
Shape1019.Geometry := LineSet1020;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1019]);
Shape1023 := TShapeNode.Create;
LineSet1024 := TLineSetNode.Create;
LineSet1024.SetVertexCount([2]);
Coordinate1025 := TCoordinateNode.Create;
Coordinate1025.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1024.Coord := Coordinate1025;
{ from skullbase to r_eyeball_joint vertices 2 }
ColorRGBA1026 := TColorRGBANode.Create;
ColorRGBA1026 := ColorRGBA32;
{ .SetColor }
LineSet1024.Color := ColorRGBA1026;
{ .SetGeometry }
Shape1023.Geometry := LineSet1024;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1023]);
Shape1027 := TShapeNode.Create;
LineSet1028 := TLineSetNode.Create;
LineSet1028.SetVertexCount([2]);
Coordinate1029 := TCoordinateNode.Create;
Coordinate1029.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1028.Coord := Coordinate1029;
{ from skullbase to l_eyebrow_joint vertices 2 }
ColorRGBA1030 := TColorRGBANode.Create;
ColorRGBA1030 := ColorRGBA32;
{ .SetColor }
LineSet1028.Color := ColorRGBA1030;
{ .SetGeometry }
Shape1027.Geometry := LineSet1028;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1027]);
Shape1031 := TShapeNode.Create;
LineSet1032 := TLineSetNode.Create;
LineSet1032.SetVertexCount([2]);
Coordinate1033 := TCoordinateNode.Create;
Coordinate1033.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1032.Coord := Coordinate1033;
{ from skullbase to r_eyebrow_joint vertices 2 }
ColorRGBA1034 := TColorRGBANode.Create;
ColorRGBA1034 := ColorRGBA32;
{ .SetColor }
LineSet1032.Color := ColorRGBA1034;
{ .SetGeometry }
Shape1031.Geometry := LineSet1032;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1031]);
Shape1035 := TShapeNode.Create;
LineSet1036 := TLineSetNode.Create;
LineSet1036.SetVertexCount([2]);
Coordinate1037 := TCoordinateNode.Create;
Coordinate1037.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1036.Coord := Coordinate1037;
{ from skullbase to temporomandibular vertices 2 }
ColorRGBA1038 := TColorRGBANode.Create;
ColorRGBA1038 := ColorRGBA32;
{ .SetColor }
LineSet1036.Color := ColorRGBA1038;
{ .SetGeometry }
Shape1035.Geometry := LineSet1036;
{ .AddChildren }
HAnimSegment1007.AddChildren([Shape1035]);
HAnimSite1039 := THAnimSiteNode.Create;
HAnimSite1039.NameField := 'l_gonion_pt';
HAnimSite1039.Translation := Vector3(0.0631,1.553,0.033);
TouchSensor1040 := TTouchSensorNode.Create;
TouchSensor1040.Description := 'HAnimSite l_gonion_pt';
{ .AddChildren }
HAnimSite1039.AddChildren([TouchSensor1040]);
Shape1041 := TShapeNode.Create;
Shape1041 := Shape35;
{ .AddChildren }
HAnimSite1039.AddChildren([Shape1041]);
{ .AddChildren }
HAnimSegment1007.AddChildren([HAnimSite1039]);
HAnimSite1042 := THAnimSiteNode.Create;
HAnimSite1042.NameField := 'menton_pt';
HAnimSite1042.Translation := Vector3(0,1,0);
TouchSensor1043 := TTouchSensorNode.Create;
TouchSensor1043.Description := 'HAnimSite menton_pt';
{ .AddChildren }
HAnimSite1042.AddChildren([TouchSensor1043]);
Shape1044 := TShapeNode.Create;
Shape1044 := Shape35;
{ .AddChildren }
HAnimSite1042.AddChildren([Shape1044]);
{ .AddChildren }
HAnimSegment1007.AddChildren([HAnimSite1042]);
HAnimSite1045 := THAnimSiteNode.Create;
HAnimSite1045.NameField := 'r_gonion_pt';
HAnimSite1045.Translation := Vector3(-0.052,1.5529,0.0347);
TouchSensor1046 := TTouchSensorNode.Create;
TouchSensor1046.Description := 'HAnimSite r_gonion_pt';
{ .AddChildren }
HAnimSite1045.AddChildren([TouchSensor1046]);
Shape1047 := TShapeNode.Create;
Shape1047 := Shape35;
{ .AddChildren }
HAnimSite1045.AddChildren([Shape1047]);
{ .AddChildren }
HAnimSegment1007.AddChildren([HAnimSite1045]);
HAnimSite1048 := THAnimSiteNode.Create;
HAnimSite1048.NameField := 'supramenton_pt';
HAnimSite1048.Translation := Vector3(0.0061,1.541,0.0805);
TouchSensor1049 := TTouchSensorNode.Create;
TouchSensor1049.Description := 'HAnimSite supramenton_pt';
{ .AddChildren }
HAnimSite1048.AddChildren([TouchSensor1049]);
Shape1050 := TShapeNode.Create;
Shape1050 := Shape35;
{ .AddChildren }
HAnimSite1048.AddChildren([Shape1050]);
{ .AddChildren }
HAnimSegment1007.AddChildren([HAnimSite1048]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimSegment1007]);
HAnimJoint1051 := THAnimJointNode.Create;
HAnimJoint1051.NameField := 'l_eyelid_joint';
HAnimJoint1051.Center := Vector3(0,1,0);
HAnimJoint1051.SetUlimit([0,0,0]);
HAnimJoint1051.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1051]);
HAnimJoint1052 := THAnimJointNode.Create;
HAnimJoint1052.NameField := 'r_eyelid_joint';
HAnimJoint1052.Center := Vector3(0,1,0);
HAnimJoint1052.SetUlimit([0,0,0]);
HAnimJoint1052.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1052]);
HAnimJoint1053 := THAnimJointNode.Create;
HAnimJoint1053.NameField := 'l_eyeball_joint';
HAnimJoint1053.Center := Vector3(0,1,0);
HAnimJoint1053.SetUlimit([0,0,0]);
HAnimJoint1053.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1053]);
HAnimJoint1054 := THAnimJointNode.Create;
HAnimJoint1054.NameField := 'r_eyeball_joint';
HAnimJoint1054.Center := Vector3(0,1,0);
HAnimJoint1054.SetUlimit([0,0,0]);
HAnimJoint1054.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1054]);
HAnimJoint1055 := THAnimJointNode.Create;
HAnimJoint1055.NameField := 'l_eyebrow_joint';
HAnimJoint1055.Center := Vector3(0,1,0);
HAnimJoint1055.SetUlimit([0,0,0]);
HAnimJoint1055.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1055]);
HAnimJoint1056 := THAnimJointNode.Create;
HAnimJoint1056.NameField := 'r_eyebrow_joint';
HAnimJoint1056.Center := Vector3(0,1,0);
HAnimJoint1056.SetUlimit([0,0,0]);
HAnimJoint1056.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1056]);
HAnimJoint1057 := THAnimJointNode.Create;
HAnimJoint1057.NameField := 'temporomandibular';
HAnimJoint1057.Center := Vector3(0,1,0);
HAnimJoint1057.SetUlimit([0,0,0]);
HAnimJoint1057.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1006.AddChildren([HAnimJoint1057]);
HAnimDisplacer1058 := THAnimDisplacerNode.Create;
HAnimDisplacer1058.NameField := 'skull_tip_raiser_action';
HAnimDisplacer1058.SetCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer1058.SetDisplacements([Vector3(0,0.15,0),Vector3(0,0,0.15),Vector3(-0.1,0,0.15),Vector3(0.1,0,0.05),Vector3(0,-0.02,0.05),Vector3(-0.15,0,0),Vector3(-0.05,0,0),Vector3(0.15,0,0),Vector3(0.05,0,0),Vector3(0,0,-0.15)]);
{ .AddDisplacers }
HAnimJoint1006.SetDisplacers([HAnimDisplacer1058]);
{ .AddChildren }
HAnimJoint964.AddChildren([HAnimJoint1006]);
{ .AddChildren }
HAnimJoint955.AddChildren([HAnimJoint964]);
{ .AddChildren }
HAnimJoint943.AddChildren([HAnimJoint955]);
{ .AddChildren }
HAnimJoint934.AddChildren([HAnimJoint943]);
{ .AddChildren }
HAnimJoint925.AddChildren([HAnimJoint934]);
{ .AddChildren }
HAnimJoint916.AddChildren([HAnimJoint925]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimJoint916]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimJoint907]);
HAnimJoint1059 := THAnimJointNode.Create;
HAnimJoint1059.NameField := 'l_sternoclavicular';
HAnimJoint1059.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint1059.SetUlimit([0,0,0]);
HAnimJoint1059.SetLlimit([0,0,0]);
HAnimSegment1060 := THAnimSegmentNode.Create;
HAnimSegment1060.NameField := 'l_clavicle';
Transform1061 := TTransformNode.Create;
{ Empty Transform }
Transform1062 := TTransformNode.Create;
{ Empty Transform }
Shape1063 := TShapeNode.Create;
Shape1063 := Shape25;
{ .AddChild }
Transform1062.AddChildren([Shape1063]);
{ .AddChildren }
Transform1061.AddChildren([Transform1062]);
{ .AddChildren }
HAnimSegment1060.AddChildren([Transform1061]);
Shape1064 := TShapeNode.Create;
LineSet1065 := TLineSetNode.Create;
LineSet1065.SetVertexCount([2]);
Coordinate1066 := TCoordinateNode.Create;
Coordinate1066.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet1065.Coord := Coordinate1066;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
ColorRGBA1067 := TColorRGBANode.Create;
ColorRGBA1067 := ColorRGBA32;
{ .SetColor }
LineSet1065.Color := ColorRGBA1067;
{ .SetGeometry }
Shape1064.Geometry := LineSet1065;
{ .AddChildren }
HAnimSegment1060.AddChildren([Shape1064]);
{ .AddChildren }
HAnimJoint1059.AddChildren([HAnimSegment1060]);
HAnimJoint1068 := THAnimJointNode.Create;
HAnimJoint1068.NameField := 'l_acromioclavicular';
HAnimJoint1068.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint1068.SetUlimit([0,0,0]);
HAnimJoint1068.SetLlimit([0,0,0]);
HAnimSegment1069 := THAnimSegmentNode.Create;
HAnimSegment1069.NameField := 'l_scapula';
Transform1070 := TTransformNode.Create;
{ Empty Transform }
Transform1071 := TTransformNode.Create;
{ Empty Transform }
Shape1072 := TShapeNode.Create;
Shape1072 := Shape25;
{ .AddChild }
Transform1071.AddChildren([Shape1072]);
{ .AddChildren }
Transform1070.AddChildren([Transform1071]);
{ .AddChildren }
HAnimSegment1069.AddChildren([Transform1070]);
Shape1073 := TShapeNode.Create;
LineSet1074 := TLineSetNode.Create;
LineSet1074.SetVertexCount([2]);
Coordinate1075 := TCoordinateNode.Create;
Coordinate1075.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet1074.Coord := Coordinate1075;
{ from l_acromioclavicular to l_shoulder vertices 2 }
ColorRGBA1076 := TColorRGBANode.Create;
ColorRGBA1076 := ColorRGBA32;
{ .SetColor }
LineSet1074.Color := ColorRGBA1076;
{ .SetGeometry }
Shape1073.Geometry := LineSet1074;
{ .AddChildren }
HAnimSegment1069.AddChildren([Shape1073]);
HAnimSite1077 := THAnimSiteNode.Create;
HAnimSite1077.NameField := 'l_bideltoid_pt';
HAnimSite1077.Translation := Vector3(0,1,0);
TouchSensor1078 := TTouchSensorNode.Create;
TouchSensor1078.Description := 'HAnimSite l_bideltoid_pt';
{ .AddChildren }
HAnimSite1077.AddChildren([TouchSensor1078]);
Shape1079 := TShapeNode.Create;
Shape1079 := Shape35;
{ .AddChildren }
HAnimSite1077.AddChildren([Shape1079]);
{ .AddChildren }
HAnimSegment1069.AddChildren([HAnimSite1077]);
HAnimSite1080 := THAnimSiteNode.Create;
HAnimSite1080.NameField := 'l_humeral_lateral_epicondyles_pt';
HAnimSite1080.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor1081 := TTouchSensorNode.Create;
TouchSensor1081.Description := 'HAnimSite l_humeral_lateral_epicondyles_pt';
{ .AddChildren }
HAnimSite1080.AddChildren([TouchSensor1081]);
Shape1082 := TShapeNode.Create;
Shape1082 := Shape35;
{ .AddChildren }
HAnimSite1080.AddChildren([Shape1082]);
{ .AddChildren }
HAnimSegment1069.AddChildren([HAnimSite1080]);
{ .AddChildren }
HAnimJoint1068.AddChildren([HAnimSegment1069]);
HAnimJoint1083 := THAnimJointNode.Create;
HAnimJoint1083.NameField := 'l_shoulder';
HAnimJoint1083.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint1083.SetUlimit([0,0,0]);
HAnimJoint1083.SetLlimit([0,0,0]);
HAnimSegment1084 := THAnimSegmentNode.Create;
HAnimSegment1084.NameField := 'l_upperarm';
Transform1085 := TTransformNode.Create;
{ Empty Transform }
Transform1086 := TTransformNode.Create;
{ Empty Transform }
Shape1087 := TShapeNode.Create;
Shape1087 := Shape25;
{ .AddChild }
Transform1086.AddChildren([Shape1087]);
{ .AddChildren }
Transform1085.AddChildren([Transform1086]);
{ .AddChildren }
HAnimSegment1084.AddChildren([Transform1085]);
Shape1088 := TShapeNode.Create;
LineSet1089 := TLineSetNode.Create;
LineSet1089.SetVertexCount([2]);
Coordinate1090 := TCoordinateNode.Create;
Coordinate1090.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet1089.Coord := Coordinate1090;
{ from l_shoulder to l_elbow vertices 2 }
ColorRGBA1091 := TColorRGBANode.Create;
ColorRGBA1091 := ColorRGBA32;
{ .SetColor }
LineSet1089.Color := ColorRGBA1091;
{ .SetGeometry }
Shape1088.Geometry := LineSet1089;
{ .AddChildren }
HAnimSegment1084.AddChildren([Shape1088]);
HAnimSite1092 := THAnimSiteNode.Create;
HAnimSite1092.NameField := 'l_humeral_medial_epicondyles_pt';
HAnimSite1092.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor1093 := TTouchSensorNode.Create;
TouchSensor1093.Description := 'HAnimSite l_humeral_medial_epicondyles_pt';
{ .AddChildren }
HAnimSite1092.AddChildren([TouchSensor1093]);
Shape1094 := TShapeNode.Create;
Shape1094 := Shape35;
{ .AddChildren }
HAnimSite1092.AddChildren([Shape1094]);
{ .AddChildren }
HAnimSegment1084.AddChildren([HAnimSite1092]);
HAnimSite1095 := THAnimSiteNode.Create;
HAnimSite1095.NameField := 'l_olecranon_pt';
HAnimSite1095.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor1096 := TTouchSensorNode.Create;
TouchSensor1096.Description := 'HAnimSite l_olecranon_pt';
{ .AddChildren }
HAnimSite1095.AddChildren([TouchSensor1096]);
Shape1097 := TShapeNode.Create;
Shape1097 := Shape35;
{ .AddChildren }
HAnimSite1095.AddChildren([Shape1097]);
{ .AddChildren }
HAnimSegment1084.AddChildren([HAnimSite1095]);
HAnimSite1098 := THAnimSiteNode.Create;
HAnimSite1098.NameField := 'l_radial_styloid_pt';
HAnimSite1098.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor1099 := TTouchSensorNode.Create;
TouchSensor1099.Description := 'HAnimSite l_radial_styloid_pt';
{ .AddChildren }
HAnimSite1098.AddChildren([TouchSensor1099]);
Shape1100 := TShapeNode.Create;
Shape1100 := Shape35;
{ .AddChildren }
HAnimSite1098.AddChildren([Shape1100]);
{ .AddChildren }
HAnimSegment1084.AddChildren([HAnimSite1098]);
HAnimSite1101 := THAnimSiteNode.Create;
HAnimSite1101.NameField := 'l_radiale_pt';
HAnimSite1101.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor1102 := TTouchSensorNode.Create;
TouchSensor1102.Description := 'HAnimSite l_radiale_pt';
{ .AddChildren }
HAnimSite1101.AddChildren([TouchSensor1102]);
Shape1103 := TShapeNode.Create;
Shape1103 := Shape35;
{ .AddChildren }
HAnimSite1101.AddChildren([Shape1103]);
{ .AddChildren }
HAnimSegment1084.AddChildren([HAnimSite1101]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimSegment1084]);
HAnimJoint1104 := THAnimJointNode.Create;
HAnimJoint1104.NameField := 'l_elbow';
HAnimJoint1104.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint1104.SetUlimit([0,0,0]);
HAnimJoint1104.SetLlimit([0,0,0]);
HAnimSegment1105 := THAnimSegmentNode.Create;
HAnimSegment1105.NameField := 'l_forearm';
Transform1106 := TTransformNode.Create;
{ Empty Transform }
Transform1107 := TTransformNode.Create;
{ Empty Transform }
Shape1108 := TShapeNode.Create;
Shape1108 := Shape25;
{ .AddChild }
Transform1107.AddChildren([Shape1108]);
{ .AddChildren }
Transform1106.AddChildren([Transform1107]);
{ .AddChildren }
HAnimSegment1105.AddChildren([Transform1106]);
Shape1109 := TShapeNode.Create;
LineSet1110 := TLineSetNode.Create;
LineSet1110.SetVertexCount([2]);
Coordinate1111 := TCoordinateNode.Create;
Coordinate1111.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet1110.Coord := Coordinate1111;
{ from l_elbow to l_radiocarpal vertices 2 }
ColorRGBA1112 := TColorRGBANode.Create;
ColorRGBA1112 := ColorRGBA32;
{ .SetColor }
LineSet1110.Color := ColorRGBA1112;
{ .SetGeometry }
Shape1109.Geometry := LineSet1110;
{ .AddChildren }
HAnimSegment1105.AddChildren([Shape1109]);
HAnimSite1113 := THAnimSiteNode.Create;
HAnimSite1113.NameField := 'l_ulnar_styloid_pt';
HAnimSite1113.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor1114 := TTouchSensorNode.Create;
TouchSensor1114.Description := 'HAnimSite l_ulnar_styloid_pt';
{ .AddChildren }
HAnimSite1113.AddChildren([TouchSensor1114]);
Shape1115 := TShapeNode.Create;
Shape1115 := Shape35;
{ .AddChildren }
HAnimSite1113.AddChildren([Shape1115]);
{ .AddChildren }
HAnimSegment1105.AddChildren([HAnimSite1113]);
{ .AddChildren }
HAnimJoint1104.AddChildren([HAnimSegment1105]);
HAnimJoint1116 := THAnimJointNode.Create;
HAnimJoint1116.NameField := 'l_radiocarpal';
HAnimJoint1116.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint1116.SetUlimit([0,0,0]);
HAnimJoint1116.SetLlimit([0,0,0]);
HAnimSegment1117 := THAnimSegmentNode.Create;
HAnimSegment1117.NameField := 'l_carpal';
Transform1118 := TTransformNode.Create;
Transform1118.Scale := Vector3(0.2,0.2,0.2);
Transform1118.Translation := Vector3(0.2,0.85,-0.05);
Transform1118.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform1119 := TTransformNode.Create;
Transform1119.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
Shape1120 := TShapeNode.Create;
Shape1120 := Shape25;
{ .AddChild }
Transform1119.AddChildren([Shape1120]);
{ .AddChildren }
Transform1118.AddChildren([Transform1119]);
{ .AddChildren }
HAnimSegment1117.AddChildren([Transform1118]);
Shape1121 := TShapeNode.Create;
LineSet1122 := TLineSetNode.Create;
LineSet1122.SetVertexCount([2]);
Coordinate1123 := TCoordinateNode.Create;
Coordinate1123.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1122.Coord := Coordinate1123;
{ from l_radiocarpal to l_midcarpal_1 vertices 2 }
ColorRGBA1124 := TColorRGBANode.Create;
ColorRGBA1124 := ColorRGBA32;
{ .SetColor }
LineSet1122.Color := ColorRGBA1124;
{ .SetGeometry }
Shape1121.Geometry := LineSet1122;
{ .AddChildren }
HAnimSegment1117.AddChildren([Shape1121]);
Shape1125 := TShapeNode.Create;
LineSet1126 := TLineSetNode.Create;
LineSet1126.SetVertexCount([2]);
Coordinate1127 := TCoordinateNode.Create;
Coordinate1127.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1126.Coord := Coordinate1127;
{ from l_radiocarpal to l_midcarpal_2 vertices 2 }
ColorRGBA1128 := TColorRGBANode.Create;
ColorRGBA1128 := ColorRGBA32;
{ .SetColor }
LineSet1126.Color := ColorRGBA1128;
{ .SetGeometry }
Shape1125.Geometry := LineSet1126;
{ .AddChildren }
HAnimSegment1117.AddChildren([Shape1125]);
Shape1129 := TShapeNode.Create;
LineSet1130 := TLineSetNode.Create;
LineSet1130.SetVertexCount([2]);
Coordinate1131 := TCoordinateNode.Create;
Coordinate1131.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1130.Coord := Coordinate1131;
{ from l_radiocarpal to l_midcarpal_3 vertices 2 }
ColorRGBA1132 := TColorRGBANode.Create;
ColorRGBA1132 := ColorRGBA32;
{ .SetColor }
LineSet1130.Color := ColorRGBA1132;
{ .SetGeometry }
Shape1129.Geometry := LineSet1130;
{ .AddChildren }
HAnimSegment1117.AddChildren([Shape1129]);
Shape1133 := TShapeNode.Create;
LineSet1134 := TLineSetNode.Create;
LineSet1134.SetVertexCount([2]);
Coordinate1135 := TCoordinateNode.Create;
Coordinate1135.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1134.Coord := Coordinate1135;
{ from l_radiocarpal to l_midcarpal_4_5 vertices 2 }
ColorRGBA1136 := TColorRGBANode.Create;
ColorRGBA1136 := ColorRGBA32;
{ .SetColor }
LineSet1134.Color := ColorRGBA1136;
{ .SetGeometry }
Shape1133.Geometry := LineSet1134;
{ .AddChildren }
HAnimSegment1117.AddChildren([Shape1133]);
{ .AddChildren }
HAnimJoint1116.AddChildren([HAnimSegment1117]);
HAnimJoint1137 := THAnimJointNode.Create;
HAnimJoint1137.NameField := 'l_midcarpal_1';
HAnimJoint1137.Center := Vector3(0,1,0);
HAnimJoint1137.SetUlimit([0,0,0]);
HAnimJoint1137.SetLlimit([0,0,0]);
HAnimSegment1138 := THAnimSegmentNode.Create;
HAnimSegment1138.NameField := 'l_trapezium';
Transform1139 := TTransformNode.Create;
{ Empty Transform }
Transform1140 := TTransformNode.Create;
{ Empty Transform }
Shape1141 := TShapeNode.Create;
Shape1141 := Shape25;
{ .AddChild }
Transform1140.AddChildren([Shape1141]);
{ .AddChildren }
Transform1139.AddChildren([Transform1140]);
{ .AddChildren }
HAnimSegment1138.AddChildren([Transform1139]);
Shape1142 := TShapeNode.Create;
LineSet1143 := TLineSetNode.Create;
LineSet1143.SetVertexCount([2]);
Coordinate1144 := TCoordinateNode.Create;
Coordinate1144.SetPoint([Vector3(0,1,0),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet1143.Coord := Coordinate1144;
{ from l_midcarpal_1 to l_carpometacarpal_1 vertices 2 }
ColorRGBA1145 := TColorRGBANode.Create;
ColorRGBA1145 := ColorRGBA32;
{ .SetColor }
LineSet1143.Color := ColorRGBA1145;
{ .SetGeometry }
Shape1142.Geometry := LineSet1143;
{ .AddChildren }
HAnimSegment1138.AddChildren([Shape1142]);
{ .AddChildren }
HAnimJoint1137.AddChildren([HAnimSegment1138]);
HAnimJoint1146 := THAnimJointNode.Create;
HAnimJoint1146.NameField := 'l_carpometacarpal_1';
HAnimJoint1146.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint1146.SetUlimit([0,0,0]);
HAnimJoint1146.SetLlimit([0,0,0]);
HAnimSegment1147 := THAnimSegmentNode.Create;
HAnimSegment1147.NameField := 'l_metacarpal_1';
Transform1148 := TTransformNode.Create;
{ Empty Transform }
Transform1149 := TTransformNode.Create;
{ Empty Transform }
Shape1150 := TShapeNode.Create;
Shape1150 := Shape25;
{ .AddChild }
Transform1149.AddChildren([Shape1150]);
{ .AddChildren }
Transform1148.AddChildren([Transform1149]);
{ .AddChildren }
HAnimSegment1147.AddChildren([Transform1148]);
Shape1151 := TShapeNode.Create;
LineSet1152 := TLineSetNode.Create;
LineSet1152.SetVertexCount([2]);
Coordinate1153 := TCoordinateNode.Create;
Coordinate1153.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1152.Coord := Coordinate1153;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
ColorRGBA1154 := TColorRGBANode.Create;
ColorRGBA1154 := ColorRGBA32;
{ .SetColor }
LineSet1152.Color := ColorRGBA1154;
{ .SetGeometry }
Shape1151.Geometry := LineSet1152;
{ .AddChildren }
HAnimSegment1147.AddChildren([Shape1151]);
{ .AddChildren }
HAnimJoint1146.AddChildren([HAnimSegment1147]);
HAnimJoint1155 := THAnimJointNode.Create;
HAnimJoint1155.NameField := 'l_metacarpophalangeal_1';
HAnimJoint1155.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint1155.SetUlimit([0,0,0]);
HAnimJoint1155.SetLlimit([0,0,0]);
HAnimSegment1156 := THAnimSegmentNode.Create;
HAnimSegment1156.NameField := 'l_carpal_proximal_phalanx_1';
Transform1157 := TTransformNode.Create;
{ Empty Transform }
Transform1158 := TTransformNode.Create;
{ Empty Transform }
Shape1159 := TShapeNode.Create;
Shape1159 := Shape25;
{ .AddChild }
Transform1158.AddChildren([Shape1159]);
{ .AddChildren }
Transform1157.AddChildren([Transform1158]);
{ .AddChildren }
HAnimSegment1156.AddChildren([Transform1157]);
Shape1160 := TShapeNode.Create;
LineSet1161 := TLineSetNode.Create;
LineSet1161.SetVertexCount([2]);
Coordinate1162 := TCoordinateNode.Create;
Coordinate1162.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1161.Coord := Coordinate1162;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1163 := TColorRGBANode.Create;
ColorRGBA1163 := ColorRGBA32;
{ .SetColor }
LineSet1161.Color := ColorRGBA1163;
{ .SetGeometry }
Shape1160.Geometry := LineSet1161;
{ .AddChildren }
HAnimSegment1156.AddChildren([Shape1160]);
HAnimSite1164 := THAnimSiteNode.Create;
HAnimSite1164.NameField := 'l_carpal_distal_phalanx_1_tip';
HAnimSite1164.Translation := Vector3(0,1,0);
TouchSensor1165 := TTouchSensorNode.Create;
TouchSensor1165.Description := 'HAnimSite l_carpal_distal_phalanx_1_tip';
{ .AddChildren }
HAnimSite1164.AddChildren([TouchSensor1165]);
Shape1166 := TShapeNode.Create;
Shape1166 := Shape35;
{ .AddChildren }
HAnimSite1164.AddChildren([Shape1166]);
{ .AddChildren }
HAnimSegment1156.AddChildren([HAnimSite1164]);
{ .AddChildren }
HAnimJoint1155.AddChildren([HAnimSegment1156]);
HAnimJoint1167 := THAnimJointNode.Create;
HAnimJoint1167.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint1167.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint1167.SetUlimit([0,0,0]);
HAnimJoint1167.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1155.AddChildren([HAnimJoint1167]);
{ .AddChildren }
HAnimJoint1146.AddChildren([HAnimJoint1155]);
{ .AddChildren }
HAnimJoint1137.AddChildren([HAnimJoint1146]);
{ .AddChildren }
HAnimJoint1116.AddChildren([HAnimJoint1137]);
HAnimJoint1168 := THAnimJointNode.Create;
HAnimJoint1168.NameField := 'l_midcarpal_2';
HAnimJoint1168.Center := Vector3(0,1,0);
HAnimJoint1168.SetUlimit([0,0,0]);
HAnimJoint1168.SetLlimit([0,0,0]);
HAnimSegment1169 := THAnimSegmentNode.Create;
HAnimSegment1169.NameField := 'l_trapezoid';
Transform1170 := TTransformNode.Create;
{ Empty Transform }
Transform1171 := TTransformNode.Create;
{ Empty Transform }
Shape1172 := TShapeNode.Create;
Shape1172 := Shape25;
{ .AddChild }
Transform1171.AddChildren([Shape1172]);
{ .AddChildren }
Transform1170.AddChildren([Transform1171]);
{ .AddChildren }
HAnimSegment1169.AddChildren([Transform1170]);
Shape1173 := TShapeNode.Create;
LineSet1174 := TLineSetNode.Create;
LineSet1174.SetVertexCount([2]);
Coordinate1175 := TCoordinateNode.Create;
Coordinate1175.SetPoint([Vector3(0,1,0),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet1174.Coord := Coordinate1175;
{ from l_midcarpal_2 to l_carpometacarpal_2 vertices 2 }
ColorRGBA1176 := TColorRGBANode.Create;
ColorRGBA1176 := ColorRGBA32;
{ .SetColor }
LineSet1174.Color := ColorRGBA1176;
{ .SetGeometry }
Shape1173.Geometry := LineSet1174;
{ .AddChildren }
HAnimSegment1169.AddChildren([Shape1173]);
HAnimSite1177 := THAnimSiteNode.Create;
HAnimSite1177.NameField := 'l_metacarpal_phalanx_2_pt';
HAnimSite1177.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1178 := TTouchSensorNode.Create;
TouchSensor1178.Description := 'HAnimSite l_metacarpal_phalanx_2_pt';
{ .AddChildren }
HAnimSite1177.AddChildren([TouchSensor1178]);
Shape1179 := TShapeNode.Create;
Shape1179 := Shape35;
{ .AddChildren }
HAnimSite1177.AddChildren([Shape1179]);
{ .AddChildren }
HAnimSegment1169.AddChildren([HAnimSite1177]);
{ .AddChildren }
HAnimJoint1168.AddChildren([HAnimSegment1169]);
HAnimJoint1180 := THAnimJointNode.Create;
HAnimJoint1180.NameField := 'l_carpometacarpal_2';
HAnimJoint1180.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint1180.SetUlimit([0,0,0]);
HAnimJoint1180.SetLlimit([0,0,0]);
HAnimSegment1181 := THAnimSegmentNode.Create;
HAnimSegment1181.NameField := 'l_metacarpal_2';
Transform1182 := TTransformNode.Create;
{ Empty Transform }
Transform1183 := TTransformNode.Create;
{ Empty Transform }
Shape1184 := TShapeNode.Create;
Shape1184 := Shape25;
{ .AddChild }
Transform1183.AddChildren([Shape1184]);
{ .AddChildren }
Transform1182.AddChildren([Transform1183]);
{ .AddChildren }
HAnimSegment1181.AddChildren([Transform1182]);
Shape1185 := TShapeNode.Create;
LineSet1186 := TLineSetNode.Create;
LineSet1186.SetVertexCount([2]);
Coordinate1187 := TCoordinateNode.Create;
Coordinate1187.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1186.Coord := Coordinate1187;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
ColorRGBA1188 := TColorRGBANode.Create;
ColorRGBA1188 := ColorRGBA32;
{ .SetColor }
LineSet1186.Color := ColorRGBA1188;
{ .SetGeometry }
Shape1185.Geometry := LineSet1186;
{ .AddChildren }
HAnimSegment1181.AddChildren([Shape1185]);
{ .AddChildren }
HAnimJoint1180.AddChildren([HAnimSegment1181]);
HAnimJoint1189 := THAnimJointNode.Create;
HAnimJoint1189.NameField := 'l_metacarpophalangeal_2';
HAnimJoint1189.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint1189.SetUlimit([0,0,0]);
HAnimJoint1189.SetLlimit([0,0,0]);
HAnimSegment1190 := THAnimSegmentNode.Create;
HAnimSegment1190.NameField := 'l_carpal_proximal_phalanx_2';
Transform1191 := TTransformNode.Create;
{ Empty Transform }
Transform1192 := TTransformNode.Create;
{ Empty Transform }
Shape1193 := TShapeNode.Create;
Shape1193 := Shape25;
{ .AddChild }
Transform1192.AddChildren([Shape1193]);
{ .AddChildren }
Transform1191.AddChildren([Transform1192]);
{ .AddChildren }
HAnimSegment1190.AddChildren([Transform1191]);
Shape1194 := TShapeNode.Create;
LineSet1195 := TLineSetNode.Create;
LineSet1195.SetVertexCount([2]);
Coordinate1196 := TCoordinateNode.Create;
Coordinate1196.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1195.Coord := Coordinate1196;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1197 := TColorRGBANode.Create;
ColorRGBA1197 := ColorRGBA32;
{ .SetColor }
LineSet1195.Color := ColorRGBA1197;
{ .SetGeometry }
Shape1194.Geometry := LineSet1195;
{ .AddChildren }
HAnimSegment1190.AddChildren([Shape1194]);
{ .AddChildren }
HAnimJoint1189.AddChildren([HAnimSegment1190]);
HAnimJoint1198 := THAnimJointNode.Create;
HAnimJoint1198.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint1198.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint1198.SetUlimit([0,0,0]);
HAnimJoint1198.SetLlimit([0,0,0]);
HAnimSegment1199 := THAnimSegmentNode.Create;
HAnimSegment1199.NameField := 'l_carpal_middle_phalanx_2';
Transform1200 := TTransformNode.Create;
{ Empty Transform }
Transform1201 := TTransformNode.Create;
{ Empty Transform }
Shape1202 := TShapeNode.Create;
Shape1202 := Shape25;
{ .AddChild }
Transform1201.AddChildren([Shape1202]);
{ .AddChildren }
Transform1200.AddChildren([Transform1201]);
{ .AddChildren }
HAnimSegment1199.AddChildren([Transform1200]);
Shape1203 := TShapeNode.Create;
LineSet1204 := TLineSetNode.Create;
LineSet1204.SetVertexCount([2]);
Coordinate1205 := TCoordinateNode.Create;
Coordinate1205.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1204.Coord := Coordinate1205;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1206 := TColorRGBANode.Create;
ColorRGBA1206 := ColorRGBA32;
{ .SetColor }
LineSet1204.Color := ColorRGBA1206;
{ .SetGeometry }
Shape1203.Geometry := LineSet1204;
{ .AddChildren }
HAnimSegment1199.AddChildren([Shape1203]);
HAnimSite1207 := THAnimSiteNode.Create;
HAnimSite1207.NameField := 'l_carpal_distal_phalanx_2_tip';
HAnimSite1207.Translation := Vector3(0,1,0);
TouchSensor1208 := TTouchSensorNode.Create;
TouchSensor1208.Description := 'HAnimSite l_carpal_distal_phalanx_2_tip';
{ .AddChildren }
HAnimSite1207.AddChildren([TouchSensor1208]);
Shape1209 := TShapeNode.Create;
Shape1209 := Shape35;
{ .AddChildren }
HAnimSite1207.AddChildren([Shape1209]);
{ .AddChildren }
HAnimSegment1199.AddChildren([HAnimSite1207]);
HAnimSite1210 := THAnimSiteNode.Create;
HAnimSite1210.NameField := 'l_dactylion_pt';
HAnimSite1210.Translation := Vector3(0.2056,0.6743,-0.0482);
TouchSensor1211 := TTouchSensorNode.Create;
TouchSensor1211.Description := 'HAnimSite l_dactylion_pt';
{ .AddChildren }
HAnimSite1210.AddChildren([TouchSensor1211]);
Shape1212 := TShapeNode.Create;
Shape1212 := Shape35;
{ .AddChildren }
HAnimSite1210.AddChildren([Shape1212]);
{ .AddChildren }
HAnimSegment1199.AddChildren([HAnimSite1210]);
{ .AddChildren }
HAnimJoint1198.AddChildren([HAnimSegment1199]);
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint1213.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint1213.SetUlimit([0,0,0]);
HAnimJoint1213.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1198.AddChildren([HAnimJoint1213]);
{ .AddChildren }
HAnimJoint1189.AddChildren([HAnimJoint1198]);
{ .AddChildren }
HAnimJoint1180.AddChildren([HAnimJoint1189]);
{ .AddChildren }
HAnimJoint1168.AddChildren([HAnimJoint1180]);
{ .AddChildren }
HAnimJoint1116.AddChildren([HAnimJoint1168]);
HAnimJoint1214 := THAnimJointNode.Create;
HAnimJoint1214.NameField := 'l_midcarpal_3';
HAnimJoint1214.Center := Vector3(0,1,0);
HAnimJoint1214.SetUlimit([0,0,0]);
HAnimJoint1214.SetLlimit([0,0,0]);
HAnimSegment1215 := THAnimSegmentNode.Create;
HAnimSegment1215.NameField := 'l_capitate';
Transform1216 := TTransformNode.Create;
{ Empty Transform }
Transform1217 := TTransformNode.Create;
{ Empty Transform }
Shape1218 := TShapeNode.Create;
Shape1218 := Shape25;
{ .AddChild }
Transform1217.AddChildren([Shape1218]);
{ .AddChildren }
Transform1216.AddChildren([Transform1217]);
{ .AddChildren }
HAnimSegment1215.AddChildren([Transform1216]);
Shape1219 := TShapeNode.Create;
LineSet1220 := TLineSetNode.Create;
LineSet1220.SetVertexCount([2]);
Coordinate1221 := TCoordinateNode.Create;
Coordinate1221.SetPoint([Vector3(0,1,0),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1220.Coord := Coordinate1221;
{ from l_midcarpal_3 to l_carpometacarpal_3 vertices 2 }
ColorRGBA1222 := TColorRGBANode.Create;
ColorRGBA1222 := ColorRGBA32;
{ .SetColor }
LineSet1220.Color := ColorRGBA1222;
{ .SetGeometry }
Shape1219.Geometry := LineSet1220;
{ .AddChildren }
HAnimSegment1215.AddChildren([Shape1219]);
HAnimSite1223 := THAnimSiteNode.Create;
HAnimSite1223.NameField := 'l_metacarpal_phalanx_3_pt';
HAnimSite1223.Translation := Vector3(0,1,0);
TouchSensor1224 := TTouchSensorNode.Create;
TouchSensor1224.Description := 'HAnimSite l_metacarpal_phalanx_3_pt';
{ .AddChildren }
HAnimSite1223.AddChildren([TouchSensor1224]);
Shape1225 := TShapeNode.Create;
Shape1225 := Shape35;
{ .AddChildren }
HAnimSite1223.AddChildren([Shape1225]);
{ .AddChildren }
HAnimSegment1215.AddChildren([HAnimSite1223]);
{ .AddChildren }
HAnimJoint1214.AddChildren([HAnimSegment1215]);
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226.NameField := 'l_carpometacarpal_3';
HAnimJoint1226.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint1226.SetUlimit([0,0,0]);
HAnimJoint1226.SetLlimit([0,0,0]);
HAnimSegment1227 := THAnimSegmentNode.Create;
HAnimSegment1227.NameField := 'l_metacarpal_3';
Transform1228 := TTransformNode.Create;
{ Empty Transform }
Transform1229 := TTransformNode.Create;
{ Empty Transform }
Shape1230 := TShapeNode.Create;
Shape1230 := Shape25;
{ .AddChild }
Transform1229.AddChildren([Shape1230]);
{ .AddChildren }
Transform1228.AddChildren([Transform1229]);
{ .AddChildren }
HAnimSegment1227.AddChildren([Transform1228]);
Shape1231 := TShapeNode.Create;
LineSet1232 := TLineSetNode.Create;
LineSet1232.SetVertexCount([2]);
Coordinate1233 := TCoordinateNode.Create;
Coordinate1233.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1232.Coord := Coordinate1233;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
ColorRGBA1234 := TColorRGBANode.Create;
ColorRGBA1234 := ColorRGBA32;
{ .SetColor }
LineSet1232.Color := ColorRGBA1234;
{ .SetGeometry }
Shape1231.Geometry := LineSet1232;
{ .AddChildren }
HAnimSegment1227.AddChildren([Shape1231]);
{ .AddChildren }
HAnimJoint1226.AddChildren([HAnimSegment1227]);
HAnimJoint1235 := THAnimJointNode.Create;
HAnimJoint1235.NameField := 'l_metacarpophalangeal_3';
HAnimJoint1235.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint1235.SetUlimit([0,0,0]);
HAnimJoint1235.SetLlimit([0,0,0]);
HAnimSegment1236 := THAnimSegmentNode.Create;
HAnimSegment1236.NameField := 'l_carpal_proximal_phalanx_3';
Transform1237 := TTransformNode.Create;
{ Empty Transform }
Transform1238 := TTransformNode.Create;
{ Empty Transform }
Shape1239 := TShapeNode.Create;
Shape1239 := Shape25;
{ .AddChild }
Transform1238.AddChildren([Shape1239]);
{ .AddChildren }
Transform1237.AddChildren([Transform1238]);
{ .AddChildren }
HAnimSegment1236.AddChildren([Transform1237]);
Shape1240 := TShapeNode.Create;
LineSet1241 := TLineSetNode.Create;
LineSet1241.SetVertexCount([2]);
Coordinate1242 := TCoordinateNode.Create;
Coordinate1242.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1241.Coord := Coordinate1242;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA1243 := TColorRGBANode.Create;
ColorRGBA1243 := ColorRGBA32;
{ .SetColor }
LineSet1241.Color := ColorRGBA1243;
{ .SetGeometry }
Shape1240.Geometry := LineSet1241;
{ .AddChildren }
HAnimSegment1236.AddChildren([Shape1240]);
{ .AddChildren }
HAnimJoint1235.AddChildren([HAnimSegment1236]);
HAnimJoint1244 := THAnimJointNode.Create;
HAnimJoint1244.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint1244.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint1244.SetUlimit([0,0,0]);
HAnimJoint1244.SetLlimit([0,0,0]);
HAnimSegment1245 := THAnimSegmentNode.Create;
HAnimSegment1245.NameField := 'l_carpal_middle_phalanx_3';
Transform1246 := TTransformNode.Create;
{ Empty Transform }
Transform1247 := TTransformNode.Create;
{ Empty Transform }
Shape1248 := TShapeNode.Create;
Shape1248 := Shape25;
{ .AddChild }
Transform1247.AddChildren([Shape1248]);
{ .AddChildren }
Transform1246.AddChildren([Transform1247]);
{ .AddChildren }
HAnimSegment1245.AddChildren([Transform1246]);
Shape1249 := TShapeNode.Create;
LineSet1250 := TLineSetNode.Create;
LineSet1250.SetVertexCount([2]);
Coordinate1251 := TCoordinateNode.Create;
Coordinate1251.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1250.Coord := Coordinate1251;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1252 := TColorRGBANode.Create;
ColorRGBA1252 := ColorRGBA32;
{ .SetColor }
LineSet1250.Color := ColorRGBA1252;
{ .SetGeometry }
Shape1249.Geometry := LineSet1250;
{ .AddChildren }
HAnimSegment1245.AddChildren([Shape1249]);
HAnimSite1253 := THAnimSiteNode.Create;
HAnimSite1253.NameField := 'l_carpal_distal_phalanx_3_tip';
HAnimSite1253.Translation := Vector3(0,1,0);
TouchSensor1254 := TTouchSensorNode.Create;
TouchSensor1254.Description := 'HAnimSite l_carpal_distal_phalanx_3_tip';
{ .AddChildren }
HAnimSite1253.AddChildren([TouchSensor1254]);
Shape1255 := TShapeNode.Create;
Shape1255 := Shape35;
{ .AddChildren }
HAnimSite1253.AddChildren([Shape1255]);
{ .AddChildren }
HAnimSegment1245.AddChildren([HAnimSite1253]);
{ .AddChildren }
HAnimJoint1244.AddChildren([HAnimSegment1245]);
HAnimJoint1256 := THAnimJointNode.Create;
HAnimJoint1256.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint1256.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint1256.SetUlimit([0,0,0]);
HAnimJoint1256.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1244.AddChildren([HAnimJoint1256]);
{ .AddChildren }
HAnimJoint1235.AddChildren([HAnimJoint1244]);
{ .AddChildren }
HAnimJoint1226.AddChildren([HAnimJoint1235]);
{ .AddChildren }
HAnimJoint1214.AddChildren([HAnimJoint1226]);
{ .AddChildren }
HAnimJoint1116.AddChildren([HAnimJoint1214]);
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257.NameField := 'l_midcarpal_4_5';
HAnimJoint1257.Center := Vector3(0,1,0);
HAnimJoint1257.SetUlimit([0,0,0]);
HAnimJoint1257.SetLlimit([0,0,0]);
HAnimSegment1258 := THAnimSegmentNode.Create;
HAnimSegment1258.NameField := 'l_hamate';
Transform1259 := TTransformNode.Create;
{ Empty Transform }
Transform1260 := TTransformNode.Create;
{ Empty Transform }
Shape1261 := TShapeNode.Create;
Shape1261 := Shape25;
{ .AddChild }
Transform1260.AddChildren([Shape1261]);
{ .AddChildren }
Transform1259.AddChildren([Transform1260]);
{ .AddChildren }
HAnimSegment1258.AddChildren([Transform1259]);
Shape1262 := TShapeNode.Create;
LineSet1263 := TLineSetNode.Create;
LineSet1263.SetVertexCount([2]);
Coordinate1264 := TCoordinateNode.Create;
Coordinate1264.SetPoint([Vector3(0,1,0),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1263.Coord := Coordinate1264;
{ from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2 }
ColorRGBA1265 := TColorRGBANode.Create;
ColorRGBA1265 := ColorRGBA32;
{ .SetColor }
LineSet1263.Color := ColorRGBA1265;
{ .SetGeometry }
Shape1262.Geometry := LineSet1263;
{ .AddChildren }
HAnimSegment1258.AddChildren([Shape1262]);
Shape1266 := TShapeNode.Create;
LineSet1267 := TLineSetNode.Create;
LineSet1267.SetVertexCount([2]);
Coordinate1268 := TCoordinateNode.Create;
Coordinate1268.SetPoint([Vector3(0,1,0),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1267.Coord := Coordinate1268;
{ from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2 }
ColorRGBA1269 := TColorRGBANode.Create;
ColorRGBA1269 := ColorRGBA32;
{ .SetColor }
LineSet1267.Color := ColorRGBA1269;
{ .SetGeometry }
Shape1266.Geometry := LineSet1267;
{ .AddChildren }
HAnimSegment1258.AddChildren([Shape1266]);
HAnimSite1270 := THAnimSiteNode.Create;
HAnimSite1270.NameField := 'l_metacarpal_phalanx_5_pt';
HAnimSite1270.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1271 := TTouchSensorNode.Create;
TouchSensor1271.Description := 'HAnimSite l_metacarpal_phalanx_5_pt';
{ .AddChildren }
HAnimSite1270.AddChildren([TouchSensor1271]);
Shape1272 := TShapeNode.Create;
Shape1272 := Shape35;
{ .AddChildren }
HAnimSite1270.AddChildren([Shape1272]);
{ .AddChildren }
HAnimSegment1258.AddChildren([HAnimSite1270]);
{ .AddChildren }
HAnimJoint1257.AddChildren([HAnimSegment1258]);
HAnimJoint1273 := THAnimJointNode.Create;
HAnimJoint1273.NameField := 'l_carpometacarpal_4';
HAnimJoint1273.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint1273.SetUlimit([0,0,0]);
HAnimJoint1273.SetLlimit([0,0,0]);
HAnimSegment1274 := THAnimSegmentNode.Create;
HAnimSegment1274.NameField := 'l_metacarpal_4';
Transform1275 := TTransformNode.Create;
{ Empty Transform }
Transform1276 := TTransformNode.Create;
{ Empty Transform }
Shape1277 := TShapeNode.Create;
Shape1277 := Shape25;
{ .AddChild }
Transform1276.AddChildren([Shape1277]);
{ .AddChildren }
Transform1275.AddChildren([Transform1276]);
{ .AddChildren }
HAnimSegment1274.AddChildren([Transform1275]);
Shape1278 := TShapeNode.Create;
LineSet1279 := TLineSetNode.Create;
LineSet1279.SetVertexCount([2]);
Coordinate1280 := TCoordinateNode.Create;
Coordinate1280.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1279.Coord := Coordinate1280;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
ColorRGBA1281 := TColorRGBANode.Create;
ColorRGBA1281 := ColorRGBA32;
{ .SetColor }
LineSet1279.Color := ColorRGBA1281;
{ .SetGeometry }
Shape1278.Geometry := LineSet1279;
{ .AddChildren }
HAnimSegment1274.AddChildren([Shape1278]);
{ .AddChildren }
HAnimJoint1273.AddChildren([HAnimSegment1274]);
HAnimJoint1282 := THAnimJointNode.Create;
HAnimJoint1282.NameField := 'l_metacarpophalangeal_4';
HAnimJoint1282.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint1282.SetUlimit([0,0,0]);
HAnimJoint1282.SetLlimit([0,0,0]);
HAnimSegment1283 := THAnimSegmentNode.Create;
HAnimSegment1283.NameField := 'l_carpal_proximal_phalanx_4';
Transform1284 := TTransformNode.Create;
{ Empty Transform }
Transform1285 := TTransformNode.Create;
{ Empty Transform }
Shape1286 := TShapeNode.Create;
Shape1286 := Shape25;
{ .AddChild }
Transform1285.AddChildren([Shape1286]);
{ .AddChildren }
Transform1284.AddChildren([Transform1285]);
{ .AddChildren }
HAnimSegment1283.AddChildren([Transform1284]);
Shape1287 := TShapeNode.Create;
LineSet1288 := TLineSetNode.Create;
LineSet1288.SetVertexCount([2]);
Coordinate1289 := TCoordinateNode.Create;
Coordinate1289.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1288.Coord := Coordinate1289;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1290 := TColorRGBANode.Create;
ColorRGBA1290 := ColorRGBA32;
{ .SetColor }
LineSet1288.Color := ColorRGBA1290;
{ .SetGeometry }
Shape1287.Geometry := LineSet1288;
{ .AddChildren }
HAnimSegment1283.AddChildren([Shape1287]);
{ .AddChildren }
HAnimJoint1282.AddChildren([HAnimSegment1283]);
HAnimJoint1291 := THAnimJointNode.Create;
HAnimJoint1291.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint1291.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint1291.SetUlimit([0,0,0]);
HAnimJoint1291.SetLlimit([0,0,0]);
HAnimSegment1292 := THAnimSegmentNode.Create;
HAnimSegment1292.NameField := 'l_carpal_middle_phalanx_4';
Transform1293 := TTransformNode.Create;
{ Empty Transform }
Transform1294 := TTransformNode.Create;
{ Empty Transform }
Shape1295 := TShapeNode.Create;
Shape1295 := Shape25;
{ .AddChild }
Transform1294.AddChildren([Shape1295]);
{ .AddChildren }
Transform1293.AddChildren([Transform1294]);
{ .AddChildren }
HAnimSegment1292.AddChildren([Transform1293]);
Shape1296 := TShapeNode.Create;
LineSet1297 := TLineSetNode.Create;
LineSet1297.SetVertexCount([2]);
Coordinate1298 := TCoordinateNode.Create;
Coordinate1298.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1297.Coord := Coordinate1298;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1299 := TColorRGBANode.Create;
ColorRGBA1299 := ColorRGBA32;
{ .SetColor }
LineSet1297.Color := ColorRGBA1299;
{ .SetGeometry }
Shape1296.Geometry := LineSet1297;
{ .AddChildren }
HAnimSegment1292.AddChildren([Shape1296]);
HAnimSite1300 := THAnimSiteNode.Create;
HAnimSite1300.NameField := 'l_carpal_distal_phalanx_4_tip';
HAnimSite1300.Translation := Vector3(0,1,0);
TouchSensor1301 := TTouchSensorNode.Create;
TouchSensor1301.Description := 'HAnimSite l_carpal_distal_phalanx_4_tip';
{ .AddChildren }
HAnimSite1300.AddChildren([TouchSensor1301]);
Shape1302 := TShapeNode.Create;
Shape1302 := Shape35;
{ .AddChildren }
HAnimSite1300.AddChildren([Shape1302]);
{ .AddChildren }
HAnimSegment1292.AddChildren([HAnimSite1300]);
{ .AddChildren }
HAnimJoint1291.AddChildren([HAnimSegment1292]);
HAnimJoint1303 := THAnimJointNode.Create;
HAnimJoint1303.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint1303.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint1303.SetUlimit([0,0,0]);
HAnimJoint1303.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1291.AddChildren([HAnimJoint1303]);
{ .AddChildren }
HAnimJoint1282.AddChildren([HAnimJoint1291]);
{ .AddChildren }
HAnimJoint1273.AddChildren([HAnimJoint1282]);
{ .AddChildren }
HAnimJoint1257.AddChildren([HAnimJoint1273]);
HAnimJoint1304 := THAnimJointNode.Create;
HAnimJoint1304.NameField := 'l_carpometacarpal_5';
HAnimJoint1304.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint1304.SetUlimit([0,0,0]);
HAnimJoint1304.SetLlimit([0,0,0]);
HAnimSegment1305 := THAnimSegmentNode.Create;
HAnimSegment1305.NameField := 'l_metacarpal_5';
Transform1306 := TTransformNode.Create;
{ Empty Transform }
Transform1307 := TTransformNode.Create;
{ Empty Transform }
Shape1308 := TShapeNode.Create;
Shape1308 := Shape25;
{ .AddChild }
Transform1307.AddChildren([Shape1308]);
{ .AddChildren }
Transform1306.AddChildren([Transform1307]);
{ .AddChildren }
HAnimSegment1305.AddChildren([Transform1306]);
Shape1309 := TShapeNode.Create;
LineSet1310 := TLineSetNode.Create;
LineSet1310.SetVertexCount([2]);
Coordinate1311 := TCoordinateNode.Create;
Coordinate1311.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1310.Coord := Coordinate1311;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
ColorRGBA1312 := TColorRGBANode.Create;
ColorRGBA1312 := ColorRGBA32;
{ .SetColor }
LineSet1310.Color := ColorRGBA1312;
{ .SetGeometry }
Shape1309.Geometry := LineSet1310;
{ .AddChildren }
HAnimSegment1305.AddChildren([Shape1309]);
{ .AddChildren }
HAnimJoint1304.AddChildren([HAnimSegment1305]);
HAnimJoint1313 := THAnimJointNode.Create;
HAnimJoint1313.NameField := 'l_metacarpophalangeal_5';
HAnimJoint1313.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint1313.SetUlimit([0,0,0]);
HAnimJoint1313.SetLlimit([0,0,0]);
HAnimSegment1314 := THAnimSegmentNode.Create;
HAnimSegment1314.NameField := 'l_carpal_proximal_phalanx_5';
Transform1315 := TTransformNode.Create;
{ Empty Transform }
Transform1316 := TTransformNode.Create;
{ Empty Transform }
Shape1317 := TShapeNode.Create;
Shape1317 := Shape25;
{ .AddChild }
Transform1316.AddChildren([Shape1317]);
{ .AddChildren }
Transform1315.AddChildren([Transform1316]);
{ .AddChildren }
HAnimSegment1314.AddChildren([Transform1315]);
Shape1318 := TShapeNode.Create;
LineSet1319 := TLineSetNode.Create;
LineSet1319.SetVertexCount([2]);
Coordinate1320 := TCoordinateNode.Create;
Coordinate1320.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1319.Coord := Coordinate1320;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1321 := TColorRGBANode.Create;
ColorRGBA1321 := ColorRGBA32;
{ .SetColor }
LineSet1319.Color := ColorRGBA1321;
{ .SetGeometry }
Shape1318.Geometry := LineSet1319;
{ .AddChildren }
HAnimSegment1314.AddChildren([Shape1318]);
{ .AddChildren }
HAnimJoint1313.AddChildren([HAnimSegment1314]);
HAnimJoint1322 := THAnimJointNode.Create;
HAnimJoint1322.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint1322.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint1322.SetUlimit([0,0,0]);
HAnimJoint1322.SetLlimit([0,0,0]);
HAnimSegment1323 := THAnimSegmentNode.Create;
HAnimSegment1323.NameField := 'l_carpal_middle_phalanx_5';
Transform1324 := TTransformNode.Create;
{ Empty Transform }
Transform1325 := TTransformNode.Create;
{ Empty Transform }
Shape1326 := TShapeNode.Create;
Shape1326 := Shape25;
{ .AddChild }
Transform1325.AddChildren([Shape1326]);
{ .AddChildren }
Transform1324.AddChildren([Transform1325]);
{ .AddChildren }
HAnimSegment1323.AddChildren([Transform1324]);
Shape1327 := TShapeNode.Create;
LineSet1328 := TLineSetNode.Create;
LineSet1328.SetVertexCount([2]);
Coordinate1329 := TCoordinateNode.Create;
Coordinate1329.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1328.Coord := Coordinate1329;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1330 := TColorRGBANode.Create;
ColorRGBA1330 := ColorRGBA32;
{ .SetColor }
LineSet1328.Color := ColorRGBA1330;
{ .SetGeometry }
Shape1327.Geometry := LineSet1328;
{ .AddChildren }
HAnimSegment1323.AddChildren([Shape1327]);
HAnimSite1331 := THAnimSiteNode.Create;
HAnimSite1331.NameField := 'l_carpal_distal_phalanx_5_tip';
HAnimSite1331.Translation := Vector3(0,1,0);
TouchSensor1332 := TTouchSensorNode.Create;
TouchSensor1332.Description := 'HAnimSite l_carpal_distal_phalanx_5_tip';
{ .AddChildren }
HAnimSite1331.AddChildren([TouchSensor1332]);
Shape1333 := TShapeNode.Create;
Shape1333 := Shape35;
{ .AddChildren }
HAnimSite1331.AddChildren([Shape1333]);
{ .AddChildren }
HAnimSegment1323.AddChildren([HAnimSite1331]);
{ .AddChildren }
HAnimJoint1322.AddChildren([HAnimSegment1323]);
HAnimJoint1334 := THAnimJointNode.Create;
HAnimJoint1334.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint1334.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint1334.SetUlimit([0,0,0]);
HAnimJoint1334.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1322.AddChildren([HAnimJoint1334]);
{ .AddChildren }
HAnimJoint1313.AddChildren([HAnimJoint1322]);
{ .AddChildren }
HAnimJoint1304.AddChildren([HAnimJoint1313]);
{ .AddChildren }
HAnimJoint1257.AddChildren([HAnimJoint1304]);
{ .AddChildren }
HAnimJoint1116.AddChildren([HAnimJoint1257]);
{ .AddChildren }
HAnimJoint1104.AddChildren([HAnimJoint1116]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimJoint1104]);
{ .AddChildren }
HAnimJoint1068.AddChildren([HAnimJoint1083]);
{ .AddChildren }
HAnimJoint1059.AddChildren([HAnimJoint1068]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimJoint1059]);
HAnimJoint1335 := THAnimJointNode.Create;
HAnimJoint1335.NameField := 'r_sternoclavicular';
HAnimJoint1335.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint1335.SetUlimit([0,0,0]);
HAnimJoint1335.SetLlimit([0,0,0]);
HAnimSegment1336 := THAnimSegmentNode.Create;
HAnimSegment1336.NameField := 'r_clavicle';
Transform1337 := TTransformNode.Create;
{ Empty Transform }
Transform1338 := TTransformNode.Create;
{ Empty Transform }
Shape1339 := TShapeNode.Create;
Shape1339 := Shape25;
{ .AddChild }
Transform1338.AddChildren([Shape1339]);
{ .AddChildren }
Transform1337.AddChildren([Transform1338]);
{ .AddChildren }
HAnimSegment1336.AddChildren([Transform1337]);
Shape1340 := TShapeNode.Create;
LineSet1341 := TLineSetNode.Create;
LineSet1341.SetVertexCount([2]);
Coordinate1342 := TCoordinateNode.Create;
Coordinate1342.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ .SetCoord }
LineSet1341.Coord := Coordinate1342;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
ColorRGBA1343 := TColorRGBANode.Create;
ColorRGBA1343 := ColorRGBA32;
{ .SetColor }
LineSet1341.Color := ColorRGBA1343;
{ .SetGeometry }
Shape1340.Geometry := LineSet1341;
{ .AddChildren }
HAnimSegment1336.AddChildren([Shape1340]);
{ .AddChildren }
HAnimJoint1335.AddChildren([HAnimSegment1336]);
HAnimJoint1344 := THAnimJointNode.Create;
HAnimJoint1344.NameField := 'r_acromioclavicular';
HAnimJoint1344.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint1344.SetUlimit([0,0,0]);
HAnimJoint1344.SetLlimit([0,0,0]);
HAnimSegment1345 := THAnimSegmentNode.Create;
HAnimSegment1345.NameField := 'r_scapula';
Transform1346 := TTransformNode.Create;
{ Empty Transform }
Transform1347 := TTransformNode.Create;
{ Empty Transform }
Shape1348 := TShapeNode.Create;
Shape1348 := Shape25;
{ .AddChild }
Transform1347.AddChildren([Shape1348]);
{ .AddChildren }
Transform1346.AddChildren([Transform1347]);
{ .AddChildren }
HAnimSegment1345.AddChildren([Transform1346]);
Shape1349 := TShapeNode.Create;
LineSet1350 := TLineSetNode.Create;
LineSet1350.SetVertexCount([2]);
Coordinate1351 := TCoordinateNode.Create;
Coordinate1351.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ .SetCoord }
LineSet1350.Coord := Coordinate1351;
{ from r_acromioclavicular to r_shoulder vertices 2 }
ColorRGBA1352 := TColorRGBANode.Create;
ColorRGBA1352 := ColorRGBA32;
{ .SetColor }
LineSet1350.Color := ColorRGBA1352;
{ .SetGeometry }
Shape1349.Geometry := LineSet1350;
{ .AddChildren }
HAnimSegment1345.AddChildren([Shape1349]);
HAnimSite1353 := THAnimSiteNode.Create;
HAnimSite1353.NameField := 'r_bideltoid_pt';
HAnimSite1353.Translation := Vector3(0,1,0);
TouchSensor1354 := TTouchSensorNode.Create;
TouchSensor1354.Description := 'HAnimSite r_bideltoid_pt';
{ .AddChildren }
HAnimSite1353.AddChildren([TouchSensor1354]);
Shape1355 := TShapeNode.Create;
Shape1355 := Shape35;
{ .AddChildren }
HAnimSite1353.AddChildren([Shape1355]);
{ .AddChildren }
HAnimSegment1345.AddChildren([HAnimSite1353]);
HAnimSite1356 := THAnimSiteNode.Create;
HAnimSite1356.NameField := 'r_humeral_lateral_epicondyles_pt';
HAnimSite1356.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1357 := TTouchSensorNode.Create;
TouchSensor1357.Description := 'HAnimSite r_humeral_lateral_epicondyles_pt';
{ .AddChildren }
HAnimSite1356.AddChildren([TouchSensor1357]);
Shape1358 := TShapeNode.Create;
Shape1358 := Shape35;
{ .AddChildren }
HAnimSite1356.AddChildren([Shape1358]);
{ .AddChildren }
HAnimSegment1345.AddChildren([HAnimSite1356]);
{ .AddChildren }
HAnimJoint1344.AddChildren([HAnimSegment1345]);
HAnimJoint1359 := THAnimJointNode.Create;
HAnimJoint1359.NameField := 'r_shoulder';
HAnimJoint1359.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint1359.SetUlimit([0,0,0]);
HAnimJoint1359.SetLlimit([0,0,0]);
HAnimSegment1360 := THAnimSegmentNode.Create;
HAnimSegment1360.NameField := 'r_upperarm';
Transform1361 := TTransformNode.Create;
{ Empty Transform }
Transform1362 := TTransformNode.Create;
{ Empty Transform }
Shape1363 := TShapeNode.Create;
Shape1363 := Shape25;
{ .AddChild }
Transform1362.AddChildren([Shape1363]);
{ .AddChildren }
Transform1361.AddChildren([Transform1362]);
{ .AddChildren }
HAnimSegment1360.AddChildren([Transform1361]);
Shape1364 := TShapeNode.Create;
LineSet1365 := TLineSetNode.Create;
LineSet1365.SetVertexCount([2]);
Coordinate1366 := TCoordinateNode.Create;
Coordinate1366.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ .SetCoord }
LineSet1365.Coord := Coordinate1366;
{ from r_shoulder to r_elbow vertices 2 }
ColorRGBA1367 := TColorRGBANode.Create;
ColorRGBA1367 := ColorRGBA32;
{ .SetColor }
LineSet1365.Color := ColorRGBA1367;
{ .SetGeometry }
Shape1364.Geometry := LineSet1365;
{ .AddChildren }
HAnimSegment1360.AddChildren([Shape1364]);
HAnimSite1368 := THAnimSiteNode.Create;
HAnimSite1368.NameField := 'r_humeral_medial_epicondyles_pt';
HAnimSite1368.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1369 := TTouchSensorNode.Create;
TouchSensor1369.Description := 'HAnimSite r_humeral_medial_epicondyles_pt';
{ .AddChildren }
HAnimSite1368.AddChildren([TouchSensor1369]);
Shape1370 := TShapeNode.Create;
Shape1370 := Shape35;
{ .AddChildren }
HAnimSite1368.AddChildren([Shape1370]);
{ .AddChildren }
HAnimSegment1360.AddChildren([HAnimSite1368]);
HAnimSite1371 := THAnimSiteNode.Create;
HAnimSite1371.NameField := 'r_olecranon_pt';
HAnimSite1371.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1372 := TTouchSensorNode.Create;
TouchSensor1372.Description := 'HAnimSite r_olecranon_pt';
{ .AddChildren }
HAnimSite1371.AddChildren([TouchSensor1372]);
Shape1373 := TShapeNode.Create;
Shape1373 := Shape35;
{ .AddChildren }
HAnimSite1371.AddChildren([Shape1373]);
{ .AddChildren }
HAnimSegment1360.AddChildren([HAnimSite1371]);
HAnimSite1374 := THAnimSiteNode.Create;
HAnimSite1374.NameField := 'r_radial_styloid_pt';
HAnimSite1374.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1375 := TTouchSensorNode.Create;
TouchSensor1375.Description := 'HAnimSite r_radial_styloid_pt';
{ .AddChildren }
HAnimSite1374.AddChildren([TouchSensor1375]);
Shape1376 := TShapeNode.Create;
Shape1376 := Shape35;
{ .AddChildren }
HAnimSite1374.AddChildren([Shape1376]);
{ .AddChildren }
HAnimSegment1360.AddChildren([HAnimSite1374]);
HAnimSite1377 := THAnimSiteNode.Create;
HAnimSite1377.NameField := 'r_radiale_pt';
HAnimSite1377.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1378 := TTouchSensorNode.Create;
TouchSensor1378.Description := 'HAnimSite r_radiale_pt';
{ .AddChildren }
HAnimSite1377.AddChildren([TouchSensor1378]);
Shape1379 := TShapeNode.Create;
Shape1379 := Shape35;
{ .AddChildren }
HAnimSite1377.AddChildren([Shape1379]);
{ .AddChildren }
HAnimSegment1360.AddChildren([HAnimSite1377]);
{ .AddChildren }
HAnimJoint1359.AddChildren([HAnimSegment1360]);
HAnimJoint1380 := THAnimJointNode.Create;
HAnimJoint1380.NameField := 'r_elbow';
HAnimJoint1380.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint1380.SetUlimit([0,0,0]);
HAnimJoint1380.SetLlimit([0,0,0]);
HAnimSegment1381 := THAnimSegmentNode.Create;
HAnimSegment1381.NameField := 'r_forearm';
Transform1382 := TTransformNode.Create;
{ Empty Transform }
Transform1383 := TTransformNode.Create;
{ Empty Transform }
Shape1384 := TShapeNode.Create;
Shape1384 := Shape25;
{ .AddChild }
Transform1383.AddChildren([Shape1384]);
{ .AddChildren }
Transform1382.AddChildren([Transform1383]);
{ .AddChildren }
HAnimSegment1381.AddChildren([Transform1382]);
Shape1385 := TShapeNode.Create;
LineSet1386 := TLineSetNode.Create;
LineSet1386.SetVertexCount([2]);
Coordinate1387 := TCoordinateNode.Create;
Coordinate1387.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ .SetCoord }
LineSet1386.Coord := Coordinate1387;
{ from r_elbow to r_radiocarpal vertices 2 }
ColorRGBA1388 := TColorRGBANode.Create;
ColorRGBA1388 := ColorRGBA32;
{ .SetColor }
LineSet1386.Color := ColorRGBA1388;
{ .SetGeometry }
Shape1385.Geometry := LineSet1386;
{ .AddChildren }
HAnimSegment1381.AddChildren([Shape1385]);
HAnimSite1389 := THAnimSiteNode.Create;
HAnimSite1389.NameField := 'r_ulnar_styloid_pt';
HAnimSite1389.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1390 := TTouchSensorNode.Create;
TouchSensor1390.Description := 'HAnimSite r_ulnar_styloid_pt';
{ .AddChildren }
HAnimSite1389.AddChildren([TouchSensor1390]);
Shape1391 := TShapeNode.Create;
Shape1391 := Shape35;
{ .AddChildren }
HAnimSite1389.AddChildren([Shape1391]);
{ .AddChildren }
HAnimSegment1381.AddChildren([HAnimSite1389]);
{ .AddChildren }
HAnimJoint1380.AddChildren([HAnimSegment1381]);
HAnimJoint1392 := THAnimJointNode.Create;
HAnimJoint1392.NameField := 'r_radiocarpal';
HAnimJoint1392.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint1392.SetUlimit([0,0,0]);
HAnimJoint1392.SetLlimit([0,0,0]);
HAnimSegment1393 := THAnimSegmentNode.Create;
HAnimSegment1393.NameField := 'r_carpal';
Transform1394 := TTransformNode.Create;
Transform1394.Scale := Vector3(0.2,0.2,0.2);
Transform1394.Translation := Vector3(-0.2,0.85,-0.05);
Transform1394.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1395 := TTransformNode.Create;
Transform1395.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
Shape1396 := TShapeNode.Create;
Shape1396 := Shape25;
{ .AddChild }
Transform1395.AddChildren([Shape1396]);
{ .AddChildren }
Transform1394.AddChildren([Transform1395]);
{ .AddChildren }
HAnimSegment1393.AddChildren([Transform1394]);
Shape1397 := TShapeNode.Create;
LineSet1398 := TLineSetNode.Create;
LineSet1398.SetVertexCount([2]);
Coordinate1399 := TCoordinateNode.Create;
Coordinate1399.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1398.Coord := Coordinate1399;
{ from r_radiocarpal to r_midcarpal_1 vertices 2 }
ColorRGBA1400 := TColorRGBANode.Create;
ColorRGBA1400 := ColorRGBA32;
{ .SetColor }
LineSet1398.Color := ColorRGBA1400;
{ .SetGeometry }
Shape1397.Geometry := LineSet1398;
{ .AddChildren }
HAnimSegment1393.AddChildren([Shape1397]);
Shape1401 := TShapeNode.Create;
LineSet1402 := TLineSetNode.Create;
LineSet1402.SetVertexCount([2]);
Coordinate1403 := TCoordinateNode.Create;
Coordinate1403.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1402.Coord := Coordinate1403;
{ from r_radiocarpal to r_midcarpal_2 vertices 2 }
ColorRGBA1404 := TColorRGBANode.Create;
ColorRGBA1404 := ColorRGBA32;
{ .SetColor }
LineSet1402.Color := ColorRGBA1404;
{ .SetGeometry }
Shape1401.Geometry := LineSet1402;
{ .AddChildren }
HAnimSegment1393.AddChildren([Shape1401]);
Shape1405 := TShapeNode.Create;
LineSet1406 := TLineSetNode.Create;
LineSet1406.SetVertexCount([2]);
Coordinate1407 := TCoordinateNode.Create;
Coordinate1407.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1406.Coord := Coordinate1407;
{ from r_radiocarpal to r_midcarpal_3 vertices 2 }
ColorRGBA1408 := TColorRGBANode.Create;
ColorRGBA1408 := ColorRGBA32;
{ .SetColor }
LineSet1406.Color := ColorRGBA1408;
{ .SetGeometry }
Shape1405.Geometry := LineSet1406;
{ .AddChildren }
HAnimSegment1393.AddChildren([Shape1405]);
Shape1409 := TShapeNode.Create;
LineSet1410 := TLineSetNode.Create;
LineSet1410.SetVertexCount([2]);
Coordinate1411 := TCoordinateNode.Create;
Coordinate1411.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(0,1,0)]);
{ .SetCoord }
LineSet1410.Coord := Coordinate1411;
{ from r_radiocarpal to r_midcarpal_4_5 vertices 2 }
ColorRGBA1412 := TColorRGBANode.Create;
ColorRGBA1412 := ColorRGBA32;
{ .SetColor }
LineSet1410.Color := ColorRGBA1412;
{ .SetGeometry }
Shape1409.Geometry := LineSet1410;
{ .AddChildren }
HAnimSegment1393.AddChildren([Shape1409]);
{ .AddChildren }
HAnimJoint1392.AddChildren([HAnimSegment1393]);
HAnimJoint1413 := THAnimJointNode.Create;
HAnimJoint1413.NameField := 'r_midcarpal_1';
HAnimJoint1413.Center := Vector3(0,1,0);
HAnimJoint1413.SetUlimit([0,0,0]);
HAnimJoint1413.SetLlimit([0,0,0]);
HAnimSegment1414 := THAnimSegmentNode.Create;
HAnimSegment1414.NameField := 'r_trapezium';
Transform1415 := TTransformNode.Create;
{ Empty Transform }
Transform1416 := TTransformNode.Create;
{ Empty Transform }
Shape1417 := TShapeNode.Create;
Shape1417 := Shape25;
{ .AddChild }
Transform1416.AddChildren([Shape1417]);
{ .AddChildren }
Transform1415.AddChildren([Transform1416]);
{ .AddChildren }
HAnimSegment1414.AddChildren([Transform1415]);
Shape1418 := TShapeNode.Create;
LineSet1419 := TLineSetNode.Create;
LineSet1419.SetVertexCount([2]);
Coordinate1420 := TCoordinateNode.Create;
Coordinate1420.SetPoint([Vector3(0,1,0),Vector3(-0.1899,0.8502,-0.0473)]);
{ .SetCoord }
LineSet1419.Coord := Coordinate1420;
{ from r_midcarpal_1 to r_carpometacarpal_1 vertices 2 }
ColorRGBA1421 := TColorRGBANode.Create;
ColorRGBA1421 := ColorRGBA32;
{ .SetColor }
LineSet1419.Color := ColorRGBA1421;
{ .SetGeometry }
Shape1418.Geometry := LineSet1419;
{ .AddChildren }
HAnimSegment1414.AddChildren([Shape1418]);
{ .AddChildren }
HAnimJoint1413.AddChildren([HAnimSegment1414]);
HAnimJoint1422 := THAnimJointNode.Create;
HAnimJoint1422.NameField := 'r_carpometacarpal_1';
HAnimJoint1422.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint1422.SetUlimit([0,0,0]);
HAnimJoint1422.SetLlimit([0,0,0]);
HAnimSegment1423 := THAnimSegmentNode.Create;
HAnimSegment1423.NameField := 'r_metacarpal_1';
Transform1424 := TTransformNode.Create;
{ Empty Transform }
Transform1425 := TTransformNode.Create;
{ Empty Transform }
Shape1426 := TShapeNode.Create;
Shape1426 := Shape25;
{ .AddChild }
Transform1425.AddChildren([Shape1426]);
{ .AddChildren }
Transform1424.AddChildren([Transform1425]);
{ .AddChildren }
HAnimSegment1423.AddChildren([Transform1424]);
Shape1427 := TShapeNode.Create;
LineSet1428 := TLineSetNode.Create;
LineSet1428.SetVertexCount([2]);
Coordinate1429 := TCoordinateNode.Create;
Coordinate1429.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ .SetCoord }
LineSet1428.Coord := Coordinate1429;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
ColorRGBA1430 := TColorRGBANode.Create;
ColorRGBA1430 := ColorRGBA32;
{ .SetColor }
LineSet1428.Color := ColorRGBA1430;
{ .SetGeometry }
Shape1427.Geometry := LineSet1428;
{ .AddChildren }
HAnimSegment1423.AddChildren([Shape1427]);
{ .AddChildren }
HAnimJoint1422.AddChildren([HAnimSegment1423]);
HAnimJoint1431 := THAnimJointNode.Create;
HAnimJoint1431.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1431.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint1431.SetUlimit([0,0,0]);
HAnimJoint1431.SetLlimit([0,0,0]);
HAnimSegment1432 := THAnimSegmentNode.Create;
HAnimSegment1432.NameField := 'r_carpal_proximal_phalanx_1';
Transform1433 := TTransformNode.Create;
{ Empty Transform }
Transform1434 := TTransformNode.Create;
{ Empty Transform }
Shape1435 := TShapeNode.Create;
Shape1435 := Shape25;
{ .AddChild }
Transform1434.AddChildren([Shape1435]);
{ .AddChildren }
Transform1433.AddChildren([Transform1434]);
{ .AddChildren }
HAnimSegment1432.AddChildren([Transform1433]);
Shape1436 := TShapeNode.Create;
LineSet1437 := TLineSetNode.Create;
LineSet1437.SetVertexCount([2]);
Coordinate1438 := TCoordinateNode.Create;
Coordinate1438.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ .SetCoord }
LineSet1437.Coord := Coordinate1438;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1439 := TColorRGBANode.Create;
ColorRGBA1439 := ColorRGBA32;
{ .SetColor }
LineSet1437.Color := ColorRGBA1439;
{ .SetGeometry }
Shape1436.Geometry := LineSet1437;
{ .AddChildren }
HAnimSegment1432.AddChildren([Shape1436]);
HAnimSite1440 := THAnimSiteNode.Create;
HAnimSite1440.NameField := 'r_carpal_distal_phalanx_1_tip';
HAnimSite1440.Translation := Vector3(-0.35,0.4,0);
TouchSensor1441 := TTouchSensorNode.Create;
TouchSensor1441.Description := 'HAnimSite r_carpal_distal_phalanx_1_tip';
{ .AddChildren }
HAnimSite1440.AddChildren([TouchSensor1441]);
Shape1442 := TShapeNode.Create;
Shape1442 := Shape35;
{ .AddChildren }
HAnimSite1440.AddChildren([Shape1442]);
{ .AddChildren }
HAnimSegment1432.AddChildren([HAnimSite1440]);
{ .AddChildren }
HAnimJoint1431.AddChildren([HAnimSegment1432]);
HAnimJoint1443 := THAnimJointNode.Create;
HAnimJoint1443.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1443.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint1443.SetUlimit([0,0,0]);
HAnimJoint1443.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1431.AddChildren([HAnimJoint1443]);
{ .AddChildren }
HAnimJoint1422.AddChildren([HAnimJoint1431]);
{ .AddChildren }
HAnimJoint1413.AddChildren([HAnimJoint1422]);
{ .AddChildren }
HAnimJoint1392.AddChildren([HAnimJoint1413]);
HAnimJoint1444 := THAnimJointNode.Create;
HAnimJoint1444.NameField := 'r_midcarpal_2';
HAnimJoint1444.Center := Vector3(0,1,0);
HAnimJoint1444.SetUlimit([0,0,0]);
HAnimJoint1444.SetLlimit([0,0,0]);
HAnimSegment1445 := THAnimSegmentNode.Create;
HAnimSegment1445.NameField := 'r_trapezoid';
Transform1446 := TTransformNode.Create;
{ Empty Transform }
Transform1447 := TTransformNode.Create;
{ Empty Transform }
Shape1448 := TShapeNode.Create;
Shape1448 := Shape25;
{ .AddChild }
Transform1447.AddChildren([Shape1448]);
{ .AddChildren }
Transform1446.AddChildren([Transform1447]);
{ .AddChildren }
HAnimSegment1445.AddChildren([Transform1446]);
Shape1449 := TShapeNode.Create;
LineSet1450 := TLineSetNode.Create;
LineSet1450.SetVertexCount([2]);
Coordinate1451 := TCoordinateNode.Create;
Coordinate1451.SetPoint([Vector3(0,1,0),Vector3(-0.1961,0.8055,-0.0218)]);
{ .SetCoord }
LineSet1450.Coord := Coordinate1451;
{ from r_midcarpal_2 to r_carpometacarpal_2 vertices 2 }
ColorRGBA1452 := TColorRGBANode.Create;
ColorRGBA1452 := ColorRGBA32;
{ .SetColor }
LineSet1450.Color := ColorRGBA1452;
{ .SetGeometry }
Shape1449.Geometry := LineSet1450;
{ .AddChildren }
HAnimSegment1445.AddChildren([Shape1449]);
HAnimSite1453 := THAnimSiteNode.Create;
HAnimSite1453.NameField := 'r_metacarpal_phalanx_2_pt';
HAnimSite1453.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1454 := TTouchSensorNode.Create;
TouchSensor1454.Description := 'HAnimSite r_metacarpal_phalanx_2_pt';
{ .AddChildren }
HAnimSite1453.AddChildren([TouchSensor1454]);
Shape1455 := TShapeNode.Create;
Shape1455 := Shape35;
{ .AddChildren }
HAnimSite1453.AddChildren([Shape1455]);
{ .AddChildren }
HAnimSegment1445.AddChildren([HAnimSite1453]);
{ .AddChildren }
HAnimJoint1444.AddChildren([HAnimSegment1445]);
HAnimJoint1456 := THAnimJointNode.Create;
HAnimJoint1456.NameField := 'r_carpometacarpal_2';
HAnimJoint1456.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint1456.SetUlimit([0,0,0]);
HAnimJoint1456.SetLlimit([0,0,0]);
HAnimSegment1457 := THAnimSegmentNode.Create;
HAnimSegment1457.NameField := 'r_metacarpal_2';
Transform1458 := TTransformNode.Create;
{ Empty Transform }
Transform1459 := TTransformNode.Create;
{ Empty Transform }
Shape1460 := TShapeNode.Create;
Shape1460 := Shape25;
{ .AddChild }
Transform1459.AddChildren([Shape1460]);
{ .AddChildren }
Transform1458.AddChildren([Transform1459]);
{ .AddChildren }
HAnimSegment1457.AddChildren([Transform1458]);
Shape1461 := TShapeNode.Create;
LineSet1462 := TLineSetNode.Create;
LineSet1462.SetVertexCount([2]);
Coordinate1463 := TCoordinateNode.Create;
Coordinate1463.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ .SetCoord }
LineSet1462.Coord := Coordinate1463;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
ColorRGBA1464 := TColorRGBANode.Create;
ColorRGBA1464 := ColorRGBA32;
{ .SetColor }
LineSet1462.Color := ColorRGBA1464;
{ .SetGeometry }
Shape1461.Geometry := LineSet1462;
{ .AddChildren }
HAnimSegment1457.AddChildren([Shape1461]);
{ .AddChildren }
HAnimJoint1456.AddChildren([HAnimSegment1457]);
HAnimJoint1465 := THAnimJointNode.Create;
HAnimJoint1465.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1465.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint1465.SetUlimit([0,0,0]);
HAnimJoint1465.SetLlimit([0,0,0]);
HAnimSegment1466 := THAnimSegmentNode.Create;
HAnimSegment1466.NameField := 'r_carpal_proximal_phalanx_2';
Transform1467 := TTransformNode.Create;
{ Empty Transform }
Transform1468 := TTransformNode.Create;
{ Empty Transform }
Shape1469 := TShapeNode.Create;
Shape1469 := Shape25;
{ .AddChild }
Transform1468.AddChildren([Shape1469]);
{ .AddChildren }
Transform1467.AddChildren([Transform1468]);
{ .AddChildren }
HAnimSegment1466.AddChildren([Transform1467]);
Shape1470 := TShapeNode.Create;
LineSet1471 := TLineSetNode.Create;
LineSet1471.SetVertexCount([2]);
Coordinate1472 := TCoordinateNode.Create;
Coordinate1472.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ .SetCoord }
LineSet1471.Coord := Coordinate1472;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1473 := TColorRGBANode.Create;
ColorRGBA1473 := ColorRGBA32;
{ .SetColor }
LineSet1471.Color := ColorRGBA1473;
{ .SetGeometry }
Shape1470.Geometry := LineSet1471;
{ .AddChildren }
HAnimSegment1466.AddChildren([Shape1470]);
{ .AddChildren }
HAnimJoint1465.AddChildren([HAnimSegment1466]);
HAnimJoint1474 := THAnimJointNode.Create;
HAnimJoint1474.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1474.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint1474.SetUlimit([0,0,0]);
HAnimJoint1474.SetLlimit([0,0,0]);
HAnimSegment1475 := THAnimSegmentNode.Create;
HAnimSegment1475.NameField := 'r_carpal_middle_phalanx_2';
Transform1476 := TTransformNode.Create;
{ Empty Transform }
Transform1477 := TTransformNode.Create;
{ Empty Transform }
Shape1478 := TShapeNode.Create;
Shape1478 := Shape25;
{ .AddChild }
Transform1477.AddChildren([Shape1478]);
{ .AddChildren }
Transform1476.AddChildren([Transform1477]);
{ .AddChildren }
HAnimSegment1475.AddChildren([Transform1476]);
Shape1479 := TShapeNode.Create;
LineSet1480 := TLineSetNode.Create;
LineSet1480.SetVertexCount([2]);
Coordinate1481 := TCoordinateNode.Create;
Coordinate1481.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ .SetCoord }
LineSet1480.Coord := Coordinate1481;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1482 := TColorRGBANode.Create;
ColorRGBA1482 := ColorRGBA32;
{ .SetColor }
LineSet1480.Color := ColorRGBA1482;
{ .SetGeometry }
Shape1479.Geometry := LineSet1480;
{ .AddChildren }
HAnimSegment1475.AddChildren([Shape1479]);
HAnimSite1483 := THAnimSiteNode.Create;
HAnimSite1483.NameField := 'r_carpal_distal_phalanx_2_tip';
HAnimSite1483.Translation := Vector3(-0.24,0.87,0);
TouchSensor1484 := TTouchSensorNode.Create;
TouchSensor1484.Description := 'HAnimSite r_carpal_distal_phalanx_2_tip';
{ .AddChildren }
HAnimSite1483.AddChildren([TouchSensor1484]);
Shape1485 := TShapeNode.Create;
Shape1485 := Shape35;
{ .AddChildren }
HAnimSite1483.AddChildren([Shape1485]);
{ .AddChildren }
HAnimSegment1475.AddChildren([HAnimSite1483]);
HAnimSite1486 := THAnimSiteNode.Create;
HAnimSite1486.NameField := 'r_dactylion_pt';
HAnimSite1486.Translation := Vector3(-0.1941,0.6772,-0.0423);
TouchSensor1487 := TTouchSensorNode.Create;
TouchSensor1487.Description := 'HAnimSite r_dactylion_pt';
{ .AddChildren }
HAnimSite1486.AddChildren([TouchSensor1487]);
Shape1488 := TShapeNode.Create;
Shape1488 := Shape35;
{ .AddChildren }
HAnimSite1486.AddChildren([Shape1488]);
{ .AddChildren }
HAnimSegment1475.AddChildren([HAnimSite1486]);
{ .AddChildren }
HAnimJoint1474.AddChildren([HAnimSegment1475]);
HAnimJoint1489 := THAnimJointNode.Create;
HAnimJoint1489.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1489.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint1489.SetUlimit([0,0,0]);
HAnimJoint1489.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1474.AddChildren([HAnimJoint1489]);
{ .AddChildren }
HAnimJoint1465.AddChildren([HAnimJoint1474]);
{ .AddChildren }
HAnimJoint1456.AddChildren([HAnimJoint1465]);
{ .AddChildren }
HAnimJoint1444.AddChildren([HAnimJoint1456]);
{ .AddChildren }
HAnimJoint1392.AddChildren([HAnimJoint1444]);
HAnimJoint1490 := THAnimJointNode.Create;
HAnimJoint1490.NameField := 'r_midcarpal_3';
HAnimJoint1490.Center := Vector3(0,1,0);
HAnimJoint1490.SetUlimit([0,0,0]);
HAnimJoint1490.SetLlimit([0,0,0]);
HAnimSegment1491 := THAnimSegmentNode.Create;
HAnimSegment1491.NameField := 'r_capitate';
Transform1492 := TTransformNode.Create;
{ Empty Transform }
Transform1493 := TTransformNode.Create;
{ Empty Transform }
Shape1494 := TShapeNode.Create;
Shape1494 := Shape25;
{ .AddChild }
Transform1493.AddChildren([Shape1494]);
{ .AddChildren }
Transform1492.AddChildren([Transform1493]);
{ .AddChildren }
HAnimSegment1491.AddChildren([Transform1492]);
Shape1495 := TShapeNode.Create;
LineSet1496 := TLineSetNode.Create;
LineSet1496.SetVertexCount([2]);
Coordinate1497 := TCoordinateNode.Create;
Coordinate1497.SetPoint([Vector3(0,1,0),Vector3(-0.1972,0.806,-0.0468)]);
{ .SetCoord }
LineSet1496.Coord := Coordinate1497;
{ from r_midcarpal_3 to r_carpometacarpal_3 vertices 2 }
ColorRGBA1498 := TColorRGBANode.Create;
ColorRGBA1498 := ColorRGBA32;
{ .SetColor }
LineSet1496.Color := ColorRGBA1498;
{ .SetGeometry }
Shape1495.Geometry := LineSet1496;
{ .AddChildren }
HAnimSegment1491.AddChildren([Shape1495]);
HAnimSite1499 := THAnimSiteNode.Create;
HAnimSite1499.NameField := 'r_metacarpal_phalanx_3_pt';
HAnimSite1499.Translation := Vector3(0,1,0);
TouchSensor1500 := TTouchSensorNode.Create;
TouchSensor1500.Description := 'HAnimSite r_metacarpal_phalanx_3_pt';
{ .AddChildren }
HAnimSite1499.AddChildren([TouchSensor1500]);
Shape1501 := TShapeNode.Create;
Shape1501 := Shape35;
{ .AddChildren }
HAnimSite1499.AddChildren([Shape1501]);
{ .AddChildren }
HAnimSegment1491.AddChildren([HAnimSite1499]);
{ .AddChildren }
HAnimJoint1490.AddChildren([HAnimSegment1491]);
HAnimJoint1502 := THAnimJointNode.Create;
HAnimJoint1502.NameField := 'r_carpometacarpal_3';
HAnimJoint1502.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint1502.SetUlimit([0,0,0]);
HAnimJoint1502.SetLlimit([0,0,0]);
HAnimSegment1503 := THAnimSegmentNode.Create;
HAnimSegment1503.NameField := 'r_metacarpal_3';
Transform1504 := TTransformNode.Create;
{ Empty Transform }
Transform1505 := TTransformNode.Create;
{ Empty Transform }
Shape1506 := TShapeNode.Create;
Shape1506 := Shape25;
{ .AddChild }
Transform1505.AddChildren([Shape1506]);
{ .AddChildren }
Transform1504.AddChildren([Transform1505]);
{ .AddChildren }
HAnimSegment1503.AddChildren([Transform1504]);
Shape1507 := TShapeNode.Create;
LineSet1508 := TLineSetNode.Create;
LineSet1508.SetVertexCount([2]);
Coordinate1509 := TCoordinateNode.Create;
Coordinate1509.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ .SetCoord }
LineSet1508.Coord := Coordinate1509;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
ColorRGBA1510 := TColorRGBANode.Create;
ColorRGBA1510 := ColorRGBA32;
{ .SetColor }
LineSet1508.Color := ColorRGBA1510;
{ .SetGeometry }
Shape1507.Geometry := LineSet1508;
{ .AddChildren }
HAnimSegment1503.AddChildren([Shape1507]);
{ .AddChildren }
HAnimJoint1502.AddChildren([HAnimSegment1503]);
HAnimJoint1511 := THAnimJointNode.Create;
HAnimJoint1511.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1511.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint1511.SetUlimit([0,0,0]);
HAnimJoint1511.SetLlimit([0,0,0]);
HAnimSegment1512 := THAnimSegmentNode.Create;
HAnimSegment1512.NameField := 'r_carpal_proximal_phalanx_3';
Transform1513 := TTransformNode.Create;
{ Empty Transform }
Transform1514 := TTransformNode.Create;
{ Empty Transform }
Shape1515 := TShapeNode.Create;
Shape1515 := Shape25;
{ .AddChild }
Transform1514.AddChildren([Shape1515]);
{ .AddChildren }
Transform1513.AddChildren([Transform1514]);
{ .AddChildren }
HAnimSegment1512.AddChildren([Transform1513]);
Shape1516 := TShapeNode.Create;
LineSet1517 := TLineSetNode.Create;
LineSet1517.SetVertexCount([2]);
Coordinate1518 := TCoordinateNode.Create;
Coordinate1518.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ .SetCoord }
LineSet1517.Coord := Coordinate1518;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA1519 := TColorRGBANode.Create;
ColorRGBA1519 := ColorRGBA32;
{ .SetColor }
LineSet1517.Color := ColorRGBA1519;
{ .SetGeometry }
Shape1516.Geometry := LineSet1517;
{ .AddChildren }
HAnimSegment1512.AddChildren([Shape1516]);
{ .AddChildren }
HAnimJoint1511.AddChildren([HAnimSegment1512]);
HAnimJoint1520 := THAnimJointNode.Create;
HAnimJoint1520.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1520.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint1520.SetUlimit([0,0,0]);
HAnimJoint1520.SetLlimit([0,0,0]);
HAnimSegment1521 := THAnimSegmentNode.Create;
HAnimSegment1521.NameField := 'r_carpal_middle_phalanx_3';
Transform1522 := TTransformNode.Create;
{ Empty Transform }
Transform1523 := TTransformNode.Create;
{ Empty Transform }
Shape1524 := TShapeNode.Create;
Shape1524 := Shape25;
{ .AddChild }
Transform1523.AddChildren([Shape1524]);
{ .AddChildren }
Transform1522.AddChildren([Transform1523]);
{ .AddChildren }
HAnimSegment1521.AddChildren([Transform1522]);
Shape1525 := TShapeNode.Create;
LineSet1526 := TLineSetNode.Create;
LineSet1526.SetVertexCount([2]);
Coordinate1527 := TCoordinateNode.Create;
Coordinate1527.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ .SetCoord }
LineSet1526.Coord := Coordinate1527;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1528 := TColorRGBANode.Create;
ColorRGBA1528 := ColorRGBA32;
{ .SetColor }
LineSet1526.Color := ColorRGBA1528;
{ .SetGeometry }
Shape1525.Geometry := LineSet1526;
{ .AddChildren }
HAnimSegment1521.AddChildren([Shape1525]);
HAnimSite1529 := THAnimSiteNode.Create;
HAnimSite1529.NameField := 'r_carpal_distal_phalanx_3_tip';
HAnimSite1529.Translation := Vector3(-0.08,0.96,0);
TouchSensor1530 := TTouchSensorNode.Create;
TouchSensor1530.Description := 'HAnimSite r_carpal_distal_phalanx_3_tip';
{ .AddChildren }
HAnimSite1529.AddChildren([TouchSensor1530]);
Shape1531 := TShapeNode.Create;
Shape1531 := Shape35;
{ .AddChildren }
HAnimSite1529.AddChildren([Shape1531]);
{ .AddChildren }
HAnimSegment1521.AddChildren([HAnimSite1529]);
{ .AddChildren }
HAnimJoint1520.AddChildren([HAnimSegment1521]);
HAnimJoint1532 := THAnimJointNode.Create;
HAnimJoint1532.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1532.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint1532.SetUlimit([0,0,0]);
HAnimJoint1532.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1520.AddChildren([HAnimJoint1532]);
{ .AddChildren }
HAnimJoint1511.AddChildren([HAnimJoint1520]);
{ .AddChildren }
HAnimJoint1502.AddChildren([HAnimJoint1511]);
{ .AddChildren }
HAnimJoint1490.AddChildren([HAnimJoint1502]);
{ .AddChildren }
HAnimJoint1392.AddChildren([HAnimJoint1490]);
HAnimJoint1533 := THAnimJointNode.Create;
HAnimJoint1533.NameField := 'r_midcarpal_4_5';
HAnimJoint1533.Center := Vector3(0,1,0);
HAnimJoint1533.SetUlimit([0,0,0]);
HAnimJoint1533.SetLlimit([0,0,0]);
HAnimSegment1534 := THAnimSegmentNode.Create;
HAnimSegment1534.NameField := 'r_hamate';
Transform1535 := TTransformNode.Create;
{ Empty Transform }
Transform1536 := TTransformNode.Create;
{ Empty Transform }
Shape1537 := TShapeNode.Create;
Shape1537 := Shape25;
{ .AddChild }
Transform1536.AddChildren([Shape1537]);
{ .AddChildren }
Transform1535.AddChildren([Transform1536]);
{ .AddChildren }
HAnimSegment1534.AddChildren([Transform1535]);
Shape1538 := TShapeNode.Create;
LineSet1539 := TLineSetNode.Create;
LineSet1539.SetVertexCount([2]);
Coordinate1540 := TCoordinateNode.Create;
Coordinate1540.SetPoint([Vector3(0,1,0),Vector3(-0.1951,0.8049,-0.0732)]);
{ .SetCoord }
LineSet1539.Coord := Coordinate1540;
{ from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2 }
ColorRGBA1541 := TColorRGBANode.Create;
ColorRGBA1541 := ColorRGBA32;
{ .SetColor }
LineSet1539.Color := ColorRGBA1541;
{ .SetGeometry }
Shape1538.Geometry := LineSet1539;
{ .AddChildren }
HAnimSegment1534.AddChildren([Shape1538]);
Shape1542 := TShapeNode.Create;
LineSet1543 := TLineSetNode.Create;
LineSet1543.SetVertexCount([2]);
Coordinate1544 := TCoordinateNode.Create;
Coordinate1544.SetPoint([Vector3(0,1,0),Vector3(-0.1926,0.8096,-0.0975)]);
{ .SetCoord }
LineSet1543.Coord := Coordinate1544;
{ from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2 }
ColorRGBA1545 := TColorRGBANode.Create;
ColorRGBA1545 := ColorRGBA32;
{ .SetColor }
LineSet1543.Color := ColorRGBA1545;
{ .SetGeometry }
Shape1542.Geometry := LineSet1543;
{ .AddChildren }
HAnimSegment1534.AddChildren([Shape1542]);
HAnimSite1546 := THAnimSiteNode.Create;
HAnimSite1546.NameField := 'r_metacarpal_phalanx_5_pt';
HAnimSite1546.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1547 := TTouchSensorNode.Create;
TouchSensor1547.Description := 'HAnimSite r_metacarpal_phalanx_5_pt';
{ .AddChildren }
HAnimSite1546.AddChildren([TouchSensor1547]);
Shape1548 := TShapeNode.Create;
Shape1548 := Shape35;
{ .AddChildren }
HAnimSite1546.AddChildren([Shape1548]);
{ .AddChildren }
HAnimSegment1534.AddChildren([HAnimSite1546]);
{ .AddChildren }
HAnimJoint1533.AddChildren([HAnimSegment1534]);
HAnimJoint1549 := THAnimJointNode.Create;
HAnimJoint1549.NameField := 'r_carpometacarpal_4';
HAnimJoint1549.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint1549.SetUlimit([0,0,0]);
HAnimJoint1549.SetLlimit([0,0,0]);
HAnimSegment1550 := THAnimSegmentNode.Create;
HAnimSegment1550.NameField := 'r_metacarpal_4';
Transform1551 := TTransformNode.Create;
{ Empty Transform }
Transform1552 := TTransformNode.Create;
{ Empty Transform }
Shape1553 := TShapeNode.Create;
Shape1553 := Shape25;
{ .AddChild }
Transform1552.AddChildren([Shape1553]);
{ .AddChildren }
Transform1551.AddChildren([Transform1552]);
{ .AddChildren }
HAnimSegment1550.AddChildren([Transform1551]);
Shape1554 := TShapeNode.Create;
LineSet1555 := TLineSetNode.Create;
LineSet1555.SetVertexCount([2]);
Coordinate1556 := TCoordinateNode.Create;
Coordinate1556.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ .SetCoord }
LineSet1555.Coord := Coordinate1556;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
ColorRGBA1557 := TColorRGBANode.Create;
ColorRGBA1557 := ColorRGBA32;
{ .SetColor }
LineSet1555.Color := ColorRGBA1557;
{ .SetGeometry }
Shape1554.Geometry := LineSet1555;
{ .AddChildren }
HAnimSegment1550.AddChildren([Shape1554]);
{ .AddChildren }
HAnimJoint1549.AddChildren([HAnimSegment1550]);
HAnimJoint1558 := THAnimJointNode.Create;
HAnimJoint1558.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1558.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint1558.SetUlimit([0,0,0]);
HAnimJoint1558.SetLlimit([0,0,0]);
HAnimSegment1559 := THAnimSegmentNode.Create;
HAnimSegment1559.NameField := 'r_carpal_proximal_phalanx_4';
Transform1560 := TTransformNode.Create;
{ Empty Transform }
Transform1561 := TTransformNode.Create;
{ Empty Transform }
Shape1562 := TShapeNode.Create;
Shape1562 := Shape25;
{ .AddChild }
Transform1561.AddChildren([Shape1562]);
{ .AddChildren }
Transform1560.AddChildren([Transform1561]);
{ .AddChildren }
HAnimSegment1559.AddChildren([Transform1560]);
Shape1563 := TShapeNode.Create;
LineSet1564 := TLineSetNode.Create;
LineSet1564.SetVertexCount([2]);
Coordinate1565 := TCoordinateNode.Create;
Coordinate1565.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ .SetCoord }
LineSet1564.Coord := Coordinate1565;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1566 := TColorRGBANode.Create;
ColorRGBA1566 := ColorRGBA32;
{ .SetColor }
LineSet1564.Color := ColorRGBA1566;
{ .SetGeometry }
Shape1563.Geometry := LineSet1564;
{ .AddChildren }
HAnimSegment1559.AddChildren([Shape1563]);
{ .AddChildren }
HAnimJoint1558.AddChildren([HAnimSegment1559]);
HAnimJoint1567 := THAnimJointNode.Create;
HAnimJoint1567.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1567.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint1567.SetUlimit([0,0,0]);
HAnimJoint1567.SetLlimit([0,0,0]);
HAnimSegment1568 := THAnimSegmentNode.Create;
HAnimSegment1568.NameField := 'r_carpal_middle_phalanx_4';
Transform1569 := TTransformNode.Create;
{ Empty Transform }
Transform1570 := TTransformNode.Create;
{ Empty Transform }
Shape1571 := TShapeNode.Create;
Shape1571 := Shape25;
{ .AddChild }
Transform1570.AddChildren([Shape1571]);
{ .AddChildren }
Transform1569.AddChildren([Transform1570]);
{ .AddChildren }
HAnimSegment1568.AddChildren([Transform1569]);
Shape1572 := TShapeNode.Create;
LineSet1573 := TLineSetNode.Create;
LineSet1573.SetVertexCount([2]);
Coordinate1574 := TCoordinateNode.Create;
Coordinate1574.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ .SetCoord }
LineSet1573.Coord := Coordinate1574;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1575 := TColorRGBANode.Create;
ColorRGBA1575 := ColorRGBA32;
{ .SetColor }
LineSet1573.Color := ColorRGBA1575;
{ .SetGeometry }
Shape1572.Geometry := LineSet1573;
{ .AddChildren }
HAnimSegment1568.AddChildren([Shape1572]);
HAnimSite1576 := THAnimSiteNode.Create;
HAnimSite1576.NameField := 'r_carpal_distal_phalanx_4_tip';
HAnimSite1576.Translation := Vector3(0.1,0.93,0);
TouchSensor1577 := TTouchSensorNode.Create;
TouchSensor1577.Description := 'HAnimSite r_carpal_distal_phalanx_4_tip';
{ .AddChildren }
HAnimSite1576.AddChildren([TouchSensor1577]);
Shape1578 := TShapeNode.Create;
Shape1578 := Shape35;
{ .AddChildren }
HAnimSite1576.AddChildren([Shape1578]);
{ .AddChildren }
HAnimSegment1568.AddChildren([HAnimSite1576]);
{ .AddChildren }
HAnimJoint1567.AddChildren([HAnimSegment1568]);
HAnimJoint1579 := THAnimJointNode.Create;
HAnimJoint1579.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1579.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint1579.SetUlimit([0,0,0]);
HAnimJoint1579.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1567.AddChildren([HAnimJoint1579]);
{ .AddChildren }
HAnimJoint1558.AddChildren([HAnimJoint1567]);
{ .AddChildren }
HAnimJoint1549.AddChildren([HAnimJoint1558]);
{ .AddChildren }
HAnimJoint1533.AddChildren([HAnimJoint1549]);
HAnimJoint1580 := THAnimJointNode.Create;
HAnimJoint1580.NameField := 'r_carpometacarpal_5';
HAnimJoint1580.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint1580.SetUlimit([0,0,0]);
HAnimJoint1580.SetLlimit([0,0,0]);
HAnimSegment1581 := THAnimSegmentNode.Create;
HAnimSegment1581.NameField := 'r_metacarpal_5';
Transform1582 := TTransformNode.Create;
{ Empty Transform }
Transform1583 := TTransformNode.Create;
{ Empty Transform }
Shape1584 := TShapeNode.Create;
Shape1584 := Shape25;
{ .AddChild }
Transform1583.AddChildren([Shape1584]);
{ .AddChildren }
Transform1582.AddChildren([Transform1583]);
{ .AddChildren }
HAnimSegment1581.AddChildren([Transform1582]);
Shape1585 := TShapeNode.Create;
LineSet1586 := TLineSetNode.Create;
LineSet1586.SetVertexCount([2]);
Coordinate1587 := TCoordinateNode.Create;
Coordinate1587.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ .SetCoord }
LineSet1586.Coord := Coordinate1587;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
ColorRGBA1588 := TColorRGBANode.Create;
ColorRGBA1588 := ColorRGBA32;
{ .SetColor }
LineSet1586.Color := ColorRGBA1588;
{ .SetGeometry }
Shape1585.Geometry := LineSet1586;
{ .AddChildren }
HAnimSegment1581.AddChildren([Shape1585]);
{ .AddChildren }
HAnimJoint1580.AddChildren([HAnimSegment1581]);
HAnimJoint1589 := THAnimJointNode.Create;
HAnimJoint1589.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1589.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint1589.SetUlimit([0,0,0]);
HAnimJoint1589.SetLlimit([0,0,0]);
HAnimSegment1590 := THAnimSegmentNode.Create;
HAnimSegment1590.NameField := 'r_carpal_proximal_phalanx_5';
Transform1591 := TTransformNode.Create;
{ Empty Transform }
Transform1592 := TTransformNode.Create;
{ Empty Transform }
Shape1593 := TShapeNode.Create;
Shape1593 := Shape25;
{ .AddChild }
Transform1592.AddChildren([Shape1593]);
{ .AddChildren }
Transform1591.AddChildren([Transform1592]);
{ .AddChildren }
HAnimSegment1590.AddChildren([Transform1591]);
Shape1594 := TShapeNode.Create;
LineSet1595 := TLineSetNode.Create;
LineSet1595.SetVertexCount([2]);
Coordinate1596 := TCoordinateNode.Create;
Coordinate1596.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ .SetCoord }
LineSet1595.Coord := Coordinate1596;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1597 := TColorRGBANode.Create;
ColorRGBA1597 := ColorRGBA32;
{ .SetColor }
LineSet1595.Color := ColorRGBA1597;
{ .SetGeometry }
Shape1594.Geometry := LineSet1595;
{ .AddChildren }
HAnimSegment1590.AddChildren([Shape1594]);
{ .AddChildren }
HAnimJoint1589.AddChildren([HAnimSegment1590]);
HAnimJoint1598 := THAnimJointNode.Create;
HAnimJoint1598.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1598.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint1598.SetUlimit([0,0,0]);
HAnimJoint1598.SetLlimit([0,0,0]);
HAnimSegment1599 := THAnimSegmentNode.Create;
HAnimSegment1599.NameField := 'r_carpal_middle_phalanx_5';
Transform1600 := TTransformNode.Create;
{ Empty Transform }
Transform1601 := TTransformNode.Create;
{ Empty Transform }
Shape1602 := TShapeNode.Create;
Shape1602 := Shape25;
{ .AddChild }
Transform1601.AddChildren([Shape1602]);
{ .AddChildren }
Transform1600.AddChildren([Transform1601]);
{ .AddChildren }
HAnimSegment1599.AddChildren([Transform1600]);
Shape1603 := TShapeNode.Create;
LineSet1604 := TLineSetNode.Create;
LineSet1604.SetVertexCount([2]);
Coordinate1605 := TCoordinateNode.Create;
Coordinate1605.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ .SetCoord }
LineSet1604.Coord := Coordinate1605;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1606 := TColorRGBANode.Create;
ColorRGBA1606 := ColorRGBA32;
{ .SetColor }
LineSet1604.Color := ColorRGBA1606;
{ .SetGeometry }
Shape1603.Geometry := LineSet1604;
{ .AddChildren }
HAnimSegment1599.AddChildren([Shape1603]);
HAnimSite1607 := THAnimSiteNode.Create;
HAnimSite1607.NameField := 'r_carpal_distal_phalanx_5_tip';
HAnimSite1607.Translation := Vector3(0.25,0.79,0);
TouchSensor1608 := TTouchSensorNode.Create;
TouchSensor1608.Description := 'HAnimSite r_carpal_distal_phalanx_5_tip';
{ .AddChildren }
HAnimSite1607.AddChildren([TouchSensor1608]);
Shape1609 := TShapeNode.Create;
Shape1609 := Shape35;
{ .AddChildren }
HAnimSite1607.AddChildren([Shape1609]);
{ .AddChildren }
HAnimSegment1599.AddChildren([HAnimSite1607]);
{ .AddChildren }
HAnimJoint1598.AddChildren([HAnimSegment1599]);
HAnimJoint1610 := THAnimJointNode.Create;
HAnimJoint1610.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1610.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint1610.SetUlimit([0,0,0]);
HAnimJoint1610.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1598.AddChildren([HAnimJoint1610]);
{ .AddChildren }
HAnimJoint1589.AddChildren([HAnimJoint1598]);
{ .AddChildren }
HAnimJoint1580.AddChildren([HAnimJoint1589]);
{ .AddChildren }
HAnimJoint1533.AddChildren([HAnimJoint1580]);
{ .AddChildren }
HAnimJoint1392.AddChildren([HAnimJoint1533]);
{ .AddChildren }
HAnimJoint1380.AddChildren([HAnimJoint1392]);
{ .AddChildren }
HAnimJoint1359.AddChildren([HAnimJoint1380]);
{ .AddChildren }
HAnimJoint1344.AddChildren([HAnimJoint1359]);
{ .AddChildren }
HAnimJoint1335.AddChildren([HAnimJoint1344]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimJoint1335]);
{ .AddChildren }
HAnimJoint839.AddChildren([HAnimJoint854]);
{ .AddChildren }
HAnimJoint830.AddChildren([HAnimJoint839]);
{ .AddChildren }
HAnimJoint821.AddChildren([HAnimJoint830]);
{ .AddChildren }
HAnimJoint812.AddChildren([HAnimJoint821]);
{ .AddChildren }
HAnimJoint800.AddChildren([HAnimJoint812]);
{ .AddChildren }
HAnimJoint779.AddChildren([HAnimJoint800]);
{ .AddChildren }
HAnimJoint770.AddChildren([HAnimJoint779]);
{ .AddChildren }
HAnimJoint761.AddChildren([HAnimJoint770]);
{ .AddChildren }
HAnimJoint746.AddChildren([HAnimJoint761]);
{ .AddChildren }
HAnimJoint734.AddChildren([HAnimJoint746]);
{ .AddChildren }
HAnimJoint725.AddChildren([HAnimJoint734]);
{ .AddChildren }
HAnimJoint716.AddChildren([HAnimJoint725]);
{ .AddChildren }
HAnimJoint707.AddChildren([HAnimJoint716]);
{ .AddChildren }
HAnimJoint689.AddChildren([HAnimJoint707]);
{ .AddChildren }
HAnimJoint680.AddChildren([HAnimJoint689]);
{ .AddChildren }
HAnimJoint671.AddChildren([HAnimJoint680]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint671]);
{ .AddSkeleton }
HAnimHumanoid43.SetSkeleton([HAnimJoint52]);
HAnimJoint1611 := THAnimJointNode.Create;
HAnimJoint1611 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1611;
HAnimJoint1612 := THAnimJointNode.Create;
HAnimJoint1612 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1612;
HAnimJoint1613 := THAnimJointNode.Create;
HAnimJoint1613 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1613;
HAnimJoint1614 := THAnimJointNode.Create;
HAnimJoint1614 := HAnimJoint161;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1614;
HAnimJoint1615 := THAnimJointNode.Create;
HAnimJoint1615 := HAnimJoint176;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1615;
HAnimJoint1616 := THAnimJointNode.Create;
HAnimJoint1616 := HAnimJoint189;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1616;
HAnimJoint1617 := THAnimJointNode.Create;
HAnimJoint1617 := HAnimJoint206;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1617;
HAnimJoint1618 := THAnimJointNode.Create;
HAnimJoint1618 := HAnimJoint215;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1618;
HAnimJoint1619 := THAnimJointNode.Create;
HAnimJoint1619 := HAnimJoint227;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1619;
HAnimJoint1620 := THAnimJointNode.Create;
HAnimJoint1620 := HAnimJoint239;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1620;
HAnimJoint1621 := THAnimJointNode.Create;
HAnimJoint1621 := HAnimJoint240;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1621;
HAnimJoint1622 := THAnimJointNode.Create;
HAnimJoint1622 := HAnimJoint249;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1622;
HAnimJoint1623 := THAnimJointNode.Create;
HAnimJoint1623 := HAnimJoint258;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1623;
HAnimJoint1624 := THAnimJointNode.Create;
HAnimJoint1624 := HAnimJoint267;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1624;
HAnimJoint1625 := THAnimJointNode.Create;
HAnimJoint1625 := HAnimJoint279;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1625;
HAnimJoint1626 := THAnimJointNode.Create;
HAnimJoint1626 := HAnimJoint280;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1626;
HAnimJoint1627 := THAnimJointNode.Create;
HAnimJoint1627 := HAnimJoint289;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1627;
HAnimJoint1628 := THAnimJointNode.Create;
HAnimJoint1628 := HAnimJoint298;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1628;
HAnimJoint1629 := THAnimJointNode.Create;
HAnimJoint1629 := HAnimJoint307;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1629;
HAnimJoint1630 := THAnimJointNode.Create;
HAnimJoint1630 := HAnimJoint319;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1630;
HAnimJoint1631 := THAnimJointNode.Create;
HAnimJoint1631 := HAnimJoint320;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1631;
HAnimJoint1632 := THAnimJointNode.Create;
HAnimJoint1632 := HAnimJoint329;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1632;
HAnimJoint1633 := THAnimJointNode.Create;
HAnimJoint1633 := HAnimJoint342;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1633;
HAnimJoint1634 := THAnimJointNode.Create;
HAnimJoint1634 := HAnimJoint351;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1634;
HAnimJoint1635 := THAnimJointNode.Create;
HAnimJoint1635 := HAnimJoint360;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1635;
HAnimJoint1636 := THAnimJointNode.Create;
HAnimJoint1636 := HAnimJoint372;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1636;
HAnimJoint1637 := THAnimJointNode.Create;
HAnimJoint1637 := HAnimJoint373;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1637;
HAnimJoint1638 := THAnimJointNode.Create;
HAnimJoint1638 := HAnimJoint385;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1638;
HAnimJoint1639 := THAnimJointNode.Create;
HAnimJoint1639 := HAnimJoint394;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1639;
HAnimJoint1640 := THAnimJointNode.Create;
HAnimJoint1640 := HAnimJoint406;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1640;
HAnimJoint1641 := THAnimJointNode.Create;
HAnimJoint1641 := HAnimJoint407;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1641;
HAnimJoint1642 := THAnimJointNode.Create;
HAnimJoint1642 := HAnimJoint425;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1642;
HAnimJoint1643 := THAnimJointNode.Create;
HAnimJoint1643 := HAnimJoint440;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1643;
HAnimJoint1644 := THAnimJointNode.Create;
HAnimJoint1644 := HAnimJoint453;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1644;
HAnimJoint1645 := THAnimJointNode.Create;
HAnimJoint1645 := HAnimJoint470;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1645;
HAnimJoint1646 := THAnimJointNode.Create;
HAnimJoint1646 := HAnimJoint479;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1646;
HAnimJoint1647 := THAnimJointNode.Create;
HAnimJoint1647 := HAnimJoint491;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1647;
HAnimJoint1648 := THAnimJointNode.Create;
HAnimJoint1648 := HAnimJoint503;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1648;
HAnimJoint1649 := THAnimJointNode.Create;
HAnimJoint1649 := HAnimJoint504;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1649;
HAnimJoint1650 := THAnimJointNode.Create;
HAnimJoint1650 := HAnimJoint513;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1650;
HAnimJoint1651 := THAnimJointNode.Create;
HAnimJoint1651 := HAnimJoint522;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1651;
HAnimJoint1652 := THAnimJointNode.Create;
HAnimJoint1652 := HAnimJoint531;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1652;
HAnimJoint1653 := THAnimJointNode.Create;
HAnimJoint1653 := HAnimJoint543;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1653;
HAnimJoint1654 := THAnimJointNode.Create;
HAnimJoint1654 := HAnimJoint544;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1654;
HAnimJoint1655 := THAnimJointNode.Create;
HAnimJoint1655 := HAnimJoint553;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1655;
HAnimJoint1656 := THAnimJointNode.Create;
HAnimJoint1656 := HAnimJoint562;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1656;
HAnimJoint1657 := THAnimJointNode.Create;
HAnimJoint1657 := HAnimJoint571;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1657;
HAnimJoint1658 := THAnimJointNode.Create;
HAnimJoint1658 := HAnimJoint583;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1658;
HAnimJoint1659 := THAnimJointNode.Create;
HAnimJoint1659 := HAnimJoint584;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1659;
HAnimJoint1660 := THAnimJointNode.Create;
HAnimJoint1660 := HAnimJoint593;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1660;
HAnimJoint1661 := THAnimJointNode.Create;
HAnimJoint1661 := HAnimJoint606;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1661;
HAnimJoint1662 := THAnimJointNode.Create;
HAnimJoint1662 := HAnimJoint615;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1662;
HAnimJoint1663 := THAnimJointNode.Create;
HAnimJoint1663 := HAnimJoint624;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1663;
HAnimJoint1664 := THAnimJointNode.Create;
HAnimJoint1664 := HAnimJoint636;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1664;
HAnimJoint1665 := THAnimJointNode.Create;
HAnimJoint1665 := HAnimJoint637;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1665;
HAnimJoint1666 := THAnimJointNode.Create;
HAnimJoint1666 := HAnimJoint649;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1666;
HAnimJoint1667 := THAnimJointNode.Create;
HAnimJoint1667 := HAnimJoint658;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1667;
HAnimJoint1668 := THAnimJointNode.Create;
HAnimJoint1668 := HAnimJoint670;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1668;
HAnimJoint1669 := THAnimJointNode.Create;
HAnimJoint1669 := HAnimJoint671;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1669;
HAnimJoint1670 := THAnimJointNode.Create;
HAnimJoint1670 := HAnimJoint680;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1670;
HAnimJoint1671 := THAnimJointNode.Create;
HAnimJoint1671 := HAnimJoint689;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1671;
HAnimJoint1672 := THAnimJointNode.Create;
HAnimJoint1672 := HAnimJoint707;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1672;
HAnimJoint1673 := THAnimJointNode.Create;
HAnimJoint1673 := HAnimJoint716;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1673;
HAnimJoint1674 := THAnimJointNode.Create;
HAnimJoint1674 := HAnimJoint725;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1674;
HAnimJoint1675 := THAnimJointNode.Create;
HAnimJoint1675 := HAnimJoint734;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1675;
HAnimJoint1676 := THAnimJointNode.Create;
HAnimJoint1676 := HAnimJoint746;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1676;
HAnimJoint1677 := THAnimJointNode.Create;
HAnimJoint1677 := HAnimJoint761;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1677;
HAnimJoint1678 := THAnimJointNode.Create;
HAnimJoint1678 := HAnimJoint770;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1678;
HAnimJoint1679 := THAnimJointNode.Create;
HAnimJoint1679 := HAnimJoint779;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1679;
HAnimJoint1680 := THAnimJointNode.Create;
HAnimJoint1680 := HAnimJoint800;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1680;
HAnimJoint1681 := THAnimJointNode.Create;
HAnimJoint1681 := HAnimJoint812;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1681;
HAnimJoint1682 := THAnimJointNode.Create;
HAnimJoint1682 := HAnimJoint821;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1682;
HAnimJoint1683 := THAnimJointNode.Create;
HAnimJoint1683 := HAnimJoint830;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1683;
HAnimJoint1684 := THAnimJointNode.Create;
HAnimJoint1684 := HAnimJoint839;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1684;
HAnimJoint1685 := THAnimJointNode.Create;
HAnimJoint1685 := HAnimJoint854;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1685;
HAnimJoint1686 := THAnimJointNode.Create;
HAnimJoint1686 := HAnimJoint907;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1686;
HAnimJoint1687 := THAnimJointNode.Create;
HAnimJoint1687 := HAnimJoint916;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1687;
HAnimJoint1688 := THAnimJointNode.Create;
HAnimJoint1688 := HAnimJoint925;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1688;
HAnimJoint1689 := THAnimJointNode.Create;
HAnimJoint1689 := HAnimJoint934;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1689;
HAnimJoint1690 := THAnimJointNode.Create;
HAnimJoint1690 := HAnimJoint943;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1690;
HAnimJoint1691 := THAnimJointNode.Create;
HAnimJoint1691 := HAnimJoint955;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1691;
HAnimJoint1692 := THAnimJointNode.Create;
HAnimJoint1692 := HAnimJoint964;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1692;
HAnimJoint1693 := THAnimJointNode.Create;
HAnimJoint1693 := HAnimJoint1006;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1693;
HAnimJoint1694 := THAnimJointNode.Create;
HAnimJoint1694 := HAnimJoint1051;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1694;
HAnimJoint1695 := THAnimJointNode.Create;
HAnimJoint1695 := HAnimJoint1052;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1695;
HAnimJoint1696 := THAnimJointNode.Create;
HAnimJoint1696 := HAnimJoint1053;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1696;
HAnimJoint1697 := THAnimJointNode.Create;
HAnimJoint1697 := HAnimJoint1054;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1697;
HAnimJoint1698 := THAnimJointNode.Create;
HAnimJoint1698 := HAnimJoint1055;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1698;
HAnimJoint1699 := THAnimJointNode.Create;
HAnimJoint1699 := HAnimJoint1056;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1699;
HAnimJoint1700 := THAnimJointNode.Create;
HAnimJoint1700 := HAnimJoint1057;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1700;
HAnimJoint1701 := THAnimJointNode.Create;
HAnimJoint1701 := HAnimJoint1059;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1701;
HAnimJoint1702 := THAnimJointNode.Create;
HAnimJoint1702 := HAnimJoint1068;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1702;
HAnimJoint1703 := THAnimJointNode.Create;
HAnimJoint1703 := HAnimJoint1083;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1703;
HAnimJoint1704 := THAnimJointNode.Create;
HAnimJoint1704 := HAnimJoint1104;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1704;
HAnimJoint1705 := THAnimJointNode.Create;
HAnimJoint1705 := HAnimJoint1116;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1705;
HAnimJoint1706 := THAnimJointNode.Create;
HAnimJoint1706 := HAnimJoint1137;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1706;
HAnimJoint1707 := THAnimJointNode.Create;
HAnimJoint1707 := HAnimJoint1146;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1707;
HAnimJoint1708 := THAnimJointNode.Create;
HAnimJoint1708 := HAnimJoint1155;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1708;
HAnimJoint1709 := THAnimJointNode.Create;
HAnimJoint1709 := HAnimJoint1167;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1709;
HAnimJoint1710 := THAnimJointNode.Create;
HAnimJoint1710 := HAnimJoint1168;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1710;
HAnimJoint1711 := THAnimJointNode.Create;
HAnimJoint1711 := HAnimJoint1180;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1711;
HAnimJoint1712 := THAnimJointNode.Create;
HAnimJoint1712 := HAnimJoint1189;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1712;
HAnimJoint1713 := THAnimJointNode.Create;
HAnimJoint1713 := HAnimJoint1198;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1713;
HAnimJoint1714 := THAnimJointNode.Create;
HAnimJoint1714 := HAnimJoint1213;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1714;
HAnimJoint1715 := THAnimJointNode.Create;
HAnimJoint1715 := HAnimJoint1214;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1715;
HAnimJoint1716 := THAnimJointNode.Create;
HAnimJoint1716 := HAnimJoint1226;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1716;
HAnimJoint1717 := THAnimJointNode.Create;
HAnimJoint1717 := HAnimJoint1235;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1717;
HAnimJoint1718 := THAnimJointNode.Create;
HAnimJoint1718 := HAnimJoint1244;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1718;
HAnimJoint1719 := THAnimJointNode.Create;
HAnimJoint1719 := HAnimJoint1256;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1719;
HAnimJoint1720 := THAnimJointNode.Create;
HAnimJoint1720 := HAnimJoint1257;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1720;
HAnimJoint1721 := THAnimJointNode.Create;
HAnimJoint1721 := HAnimJoint1273;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1721;
HAnimJoint1722 := THAnimJointNode.Create;
HAnimJoint1722 := HAnimJoint1282;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1722;
HAnimJoint1723 := THAnimJointNode.Create;
HAnimJoint1723 := HAnimJoint1291;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1723;
HAnimJoint1724 := THAnimJointNode.Create;
HAnimJoint1724 := HAnimJoint1303;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1724;
HAnimJoint1725 := THAnimJointNode.Create;
HAnimJoint1725 := HAnimJoint1304;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1725;
HAnimJoint1726 := THAnimJointNode.Create;
HAnimJoint1726 := HAnimJoint1313;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1726;
HAnimJoint1727 := THAnimJointNode.Create;
HAnimJoint1727 := HAnimJoint1322;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1727;
HAnimJoint1728 := THAnimJointNode.Create;
HAnimJoint1728 := HAnimJoint1334;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1728;
HAnimJoint1729 := THAnimJointNode.Create;
HAnimJoint1729 := HAnimJoint1335;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1729;
HAnimJoint1730 := THAnimJointNode.Create;
HAnimJoint1730 := HAnimJoint1344;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1730;
HAnimJoint1731 := THAnimJointNode.Create;
HAnimJoint1731 := HAnimJoint1359;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1731;
HAnimJoint1732 := THAnimJointNode.Create;
HAnimJoint1732 := HAnimJoint1380;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1732;
HAnimJoint1733 := THAnimJointNode.Create;
HAnimJoint1733 := HAnimJoint1392;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1733;
HAnimJoint1734 := THAnimJointNode.Create;
HAnimJoint1734 := HAnimJoint1413;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1734;
HAnimJoint1735 := THAnimJointNode.Create;
HAnimJoint1735 := HAnimJoint1422;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1735;
HAnimJoint1736 := THAnimJointNode.Create;
HAnimJoint1736 := HAnimJoint1431;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1736;
HAnimJoint1737 := THAnimJointNode.Create;
HAnimJoint1737 := HAnimJoint1443;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1737;
HAnimJoint1738 := THAnimJointNode.Create;
HAnimJoint1738 := HAnimJoint1444;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1738;
HAnimJoint1739 := THAnimJointNode.Create;
HAnimJoint1739 := HAnimJoint1456;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1739;
HAnimJoint1740 := THAnimJointNode.Create;
HAnimJoint1740 := HAnimJoint1465;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1740;
HAnimJoint1741 := THAnimJointNode.Create;
HAnimJoint1741 := HAnimJoint1474;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1741;
HAnimJoint1742 := THAnimJointNode.Create;
HAnimJoint1742 := HAnimJoint1489;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1742;
HAnimJoint1743 := THAnimJointNode.Create;
HAnimJoint1743 := HAnimJoint1490;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1743;
HAnimJoint1744 := THAnimJointNode.Create;
HAnimJoint1744 := HAnimJoint1502;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1744;
HAnimJoint1745 := THAnimJointNode.Create;
HAnimJoint1745 := HAnimJoint1511;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1745;
HAnimJoint1746 := THAnimJointNode.Create;
HAnimJoint1746 := HAnimJoint1520;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1746;
HAnimJoint1747 := THAnimJointNode.Create;
HAnimJoint1747 := HAnimJoint1532;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1747;
HAnimJoint1748 := THAnimJointNode.Create;
HAnimJoint1748 := HAnimJoint1533;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1748;
HAnimJoint1749 := THAnimJointNode.Create;
HAnimJoint1749 := HAnimJoint1549;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1749;
HAnimJoint1750 := THAnimJointNode.Create;
HAnimJoint1750 := HAnimJoint1558;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1750;
HAnimJoint1751 := THAnimJointNode.Create;
HAnimJoint1751 := HAnimJoint1567;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1751;
HAnimJoint1752 := THAnimJointNode.Create;
HAnimJoint1752 := HAnimJoint1579;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1752;
HAnimJoint1753 := THAnimJointNode.Create;
HAnimJoint1753 := HAnimJoint1580;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1753;
HAnimJoint1754 := THAnimJointNode.Create;
HAnimJoint1754 := HAnimJoint1589;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1754;
HAnimJoint1755 := THAnimJointNode.Create;
HAnimJoint1755 := HAnimJoint1598;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1755;
HAnimJoint1756 := THAnimJointNode.Create;
HAnimJoint1756 := HAnimJoint1610;
{ .AddJoints }
HAnimHumanoid43.Joints := HAnimJoint1756;
HAnimSegment1757 := THAnimSegmentNode.Create;
HAnimSegment1757 := HAnimSegment53;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1757;
HAnimSegment1758 := THAnimSegmentNode.Create;
HAnimSegment1758 := HAnimSegment107;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1758;
HAnimSegment1759 := THAnimSegmentNode.Create;
HAnimSegment1759 := HAnimSegment144;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1759;
HAnimSegment1760 := THAnimSegmentNode.Create;
HAnimSegment1760 := HAnimSegment162;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1760;
HAnimSegment1761 := THAnimSegmentNode.Create;
HAnimSegment1761 := HAnimSegment177;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1761;
HAnimSegment1762 := THAnimSegmentNode.Create;
HAnimSegment1762 := HAnimSegment190;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1762;
HAnimSegment1763 := THAnimSegmentNode.Create;
HAnimSegment1763 := HAnimSegment207;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1763;
HAnimSegment1764 := THAnimSegmentNode.Create;
HAnimSegment1764 := HAnimSegment216;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1764;
HAnimSegment1765 := THAnimSegmentNode.Create;
HAnimSegment1765 := HAnimSegment228;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1765;
HAnimSegment1766 := THAnimSegmentNode.Create;
HAnimSegment1766 := HAnimSegment241;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1766;
HAnimSegment1767 := THAnimSegmentNode.Create;
HAnimSegment1767 := HAnimSegment250;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1767;
HAnimSegment1768 := THAnimSegmentNode.Create;
HAnimSegment1768 := HAnimSegment259;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1768;
HAnimSegment1769 := THAnimSegmentNode.Create;
HAnimSegment1769 := HAnimSegment268;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1769;
HAnimSegment1770 := THAnimSegmentNode.Create;
HAnimSegment1770 := HAnimSegment281;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1770;
HAnimSegment1771 := THAnimSegmentNode.Create;
HAnimSegment1771 := HAnimSegment290;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1771;
HAnimSegment1772 := THAnimSegmentNode.Create;
HAnimSegment1772 := HAnimSegment299;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1772;
HAnimSegment1773 := THAnimSegmentNode.Create;
HAnimSegment1773 := HAnimSegment308;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1773;
HAnimSegment1774 := THAnimSegmentNode.Create;
HAnimSegment1774 := HAnimSegment321;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1774;
HAnimSegment1775 := THAnimSegmentNode.Create;
HAnimSegment1775 := HAnimSegment330;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1775;
HAnimSegment1776 := THAnimSegmentNode.Create;
HAnimSegment1776 := HAnimSegment343;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1776;
HAnimSegment1777 := THAnimSegmentNode.Create;
HAnimSegment1777 := HAnimSegment352;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1777;
HAnimSegment1778 := THAnimSegmentNode.Create;
HAnimSegment1778 := HAnimSegment361;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1778;
HAnimSegment1779 := THAnimSegmentNode.Create;
HAnimSegment1779 := HAnimSegment374;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1779;
HAnimSegment1780 := THAnimSegmentNode.Create;
HAnimSegment1780 := HAnimSegment386;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1780;
HAnimSegment1781 := THAnimSegmentNode.Create;
HAnimSegment1781 := HAnimSegment395;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1781;
HAnimSegment1782 := THAnimSegmentNode.Create;
HAnimSegment1782 := HAnimSegment408;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1782;
HAnimSegment1783 := THAnimSegmentNode.Create;
HAnimSegment1783 := HAnimSegment426;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1783;
HAnimSegment1784 := THAnimSegmentNode.Create;
HAnimSegment1784 := HAnimSegment441;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1784;
HAnimSegment1785 := THAnimSegmentNode.Create;
HAnimSegment1785 := HAnimSegment454;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1785;
HAnimSegment1786 := THAnimSegmentNode.Create;
HAnimSegment1786 := HAnimSegment471;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1786;
HAnimSegment1787 := THAnimSegmentNode.Create;
HAnimSegment1787 := HAnimSegment480;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1787;
HAnimSegment1788 := THAnimSegmentNode.Create;
HAnimSegment1788 := HAnimSegment492;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1788;
HAnimSegment1789 := THAnimSegmentNode.Create;
HAnimSegment1789 := HAnimSegment505;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1789;
HAnimSegment1790 := THAnimSegmentNode.Create;
HAnimSegment1790 := HAnimSegment514;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1790;
HAnimSegment1791 := THAnimSegmentNode.Create;
HAnimSegment1791 := HAnimSegment523;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1791;
HAnimSegment1792 := THAnimSegmentNode.Create;
HAnimSegment1792 := HAnimSegment532;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1792;
HAnimSegment1793 := THAnimSegmentNode.Create;
HAnimSegment1793 := HAnimSegment545;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1793;
HAnimSegment1794 := THAnimSegmentNode.Create;
HAnimSegment1794 := HAnimSegment554;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1794;
HAnimSegment1795 := THAnimSegmentNode.Create;
HAnimSegment1795 := HAnimSegment563;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1795;
HAnimSegment1796 := THAnimSegmentNode.Create;
HAnimSegment1796 := HAnimSegment572;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1796;
HAnimSegment1797 := THAnimSegmentNode.Create;
HAnimSegment1797 := HAnimSegment585;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1797;
HAnimSegment1798 := THAnimSegmentNode.Create;
HAnimSegment1798 := HAnimSegment594;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1798;
HAnimSegment1799 := THAnimSegmentNode.Create;
HAnimSegment1799 := HAnimSegment607;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1799;
HAnimSegment1800 := THAnimSegmentNode.Create;
HAnimSegment1800 := HAnimSegment616;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1800;
HAnimSegment1801 := THAnimSegmentNode.Create;
HAnimSegment1801 := HAnimSegment625;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1801;
HAnimSegment1802 := THAnimSegmentNode.Create;
HAnimSegment1802 := HAnimSegment638;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1802;
HAnimSegment1803 := THAnimSegmentNode.Create;
HAnimSegment1803 := HAnimSegment650;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1803;
HAnimSegment1804 := THAnimSegmentNode.Create;
HAnimSegment1804 := HAnimSegment659;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1804;
HAnimSegment1805 := THAnimSegmentNode.Create;
HAnimSegment1805 := HAnimSegment672;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1805;
HAnimSegment1806 := THAnimSegmentNode.Create;
HAnimSegment1806 := HAnimSegment681;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1806;
HAnimSegment1807 := THAnimSegmentNode.Create;
HAnimSegment1807 := HAnimSegment690;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1807;
HAnimSegment1808 := THAnimSegmentNode.Create;
HAnimSegment1808 := HAnimSegment708;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1808;
HAnimSegment1809 := THAnimSegmentNode.Create;
HAnimSegment1809 := HAnimSegment717;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1809;
HAnimSegment1810 := THAnimSegmentNode.Create;
HAnimSegment1810 := HAnimSegment726;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1810;
HAnimSegment1811 := THAnimSegmentNode.Create;
HAnimSegment1811 := HAnimSegment735;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1811;
HAnimSegment1812 := THAnimSegmentNode.Create;
HAnimSegment1812 := HAnimSegment747;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1812;
HAnimSegment1813 := THAnimSegmentNode.Create;
HAnimSegment1813 := HAnimSegment762;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1813;
HAnimSegment1814 := THAnimSegmentNode.Create;
HAnimSegment1814 := HAnimSegment771;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1814;
HAnimSegment1815 := THAnimSegmentNode.Create;
HAnimSegment1815 := HAnimSegment780;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1815;
HAnimSegment1816 := THAnimSegmentNode.Create;
HAnimSegment1816 := HAnimSegment801;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1816;
HAnimSegment1817 := THAnimSegmentNode.Create;
HAnimSegment1817 := HAnimSegment813;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1817;
HAnimSegment1818 := THAnimSegmentNode.Create;
HAnimSegment1818 := HAnimSegment822;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1818;
HAnimSegment1819 := THAnimSegmentNode.Create;
HAnimSegment1819 := HAnimSegment831;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1819;
HAnimSegment1820 := THAnimSegmentNode.Create;
HAnimSegment1820 := HAnimSegment840;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1820;
HAnimSegment1821 := THAnimSegmentNode.Create;
HAnimSegment1821 := HAnimSegment855;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1821;
HAnimSegment1822 := THAnimSegmentNode.Create;
HAnimSegment1822 := HAnimSegment908;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1822;
HAnimSegment1823 := THAnimSegmentNode.Create;
HAnimSegment1823 := HAnimSegment917;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1823;
HAnimSegment1824 := THAnimSegmentNode.Create;
HAnimSegment1824 := HAnimSegment926;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1824;
HAnimSegment1825 := THAnimSegmentNode.Create;
HAnimSegment1825 := HAnimSegment935;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1825;
HAnimSegment1826 := THAnimSegmentNode.Create;
HAnimSegment1826 := HAnimSegment944;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1826;
HAnimSegment1827 := THAnimSegmentNode.Create;
HAnimSegment1827 := HAnimSegment956;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1827;
HAnimSegment1828 := THAnimSegmentNode.Create;
HAnimSegment1828 := HAnimSegment965;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1828;
HAnimSegment1829 := THAnimSegmentNode.Create;
HAnimSegment1829 := HAnimSegment1007;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1829;
HAnimSegment1830 := THAnimSegmentNode.Create;
HAnimSegment1830 := HAnimSegment1060;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1830;
HAnimSegment1831 := THAnimSegmentNode.Create;
HAnimSegment1831 := HAnimSegment1069;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1831;
HAnimSegment1832 := THAnimSegmentNode.Create;
HAnimSegment1832 := HAnimSegment1084;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1832;
HAnimSegment1833 := THAnimSegmentNode.Create;
HAnimSegment1833 := HAnimSegment1105;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1833;
HAnimSegment1834 := THAnimSegmentNode.Create;
HAnimSegment1834 := HAnimSegment1117;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1834;
HAnimSegment1835 := THAnimSegmentNode.Create;
HAnimSegment1835 := HAnimSegment1138;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1835;
HAnimSegment1836 := THAnimSegmentNode.Create;
HAnimSegment1836 := HAnimSegment1147;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1836;
HAnimSegment1837 := THAnimSegmentNode.Create;
HAnimSegment1837 := HAnimSegment1156;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1837;
HAnimSegment1838 := THAnimSegmentNode.Create;
HAnimSegment1838 := HAnimSegment1169;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1838;
HAnimSegment1839 := THAnimSegmentNode.Create;
HAnimSegment1839 := HAnimSegment1181;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1839;
HAnimSegment1840 := THAnimSegmentNode.Create;
HAnimSegment1840 := HAnimSegment1190;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1840;
HAnimSegment1841 := THAnimSegmentNode.Create;
HAnimSegment1841 := HAnimSegment1199;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1841;
HAnimSegment1842 := THAnimSegmentNode.Create;
HAnimSegment1842 := HAnimSegment1215;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1842;
HAnimSegment1843 := THAnimSegmentNode.Create;
HAnimSegment1843 := HAnimSegment1227;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1843;
HAnimSegment1844 := THAnimSegmentNode.Create;
HAnimSegment1844 := HAnimSegment1236;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1844;
HAnimSegment1845 := THAnimSegmentNode.Create;
HAnimSegment1845 := HAnimSegment1245;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1845;
HAnimSegment1846 := THAnimSegmentNode.Create;
HAnimSegment1846 := HAnimSegment1258;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1846;
HAnimSegment1847 := THAnimSegmentNode.Create;
HAnimSegment1847 := HAnimSegment1274;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1847;
HAnimSegment1848 := THAnimSegmentNode.Create;
HAnimSegment1848 := HAnimSegment1283;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1848;
HAnimSegment1849 := THAnimSegmentNode.Create;
HAnimSegment1849 := HAnimSegment1292;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1849;
HAnimSegment1850 := THAnimSegmentNode.Create;
HAnimSegment1850 := HAnimSegment1305;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1850;
HAnimSegment1851 := THAnimSegmentNode.Create;
HAnimSegment1851 := HAnimSegment1314;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1851;
HAnimSegment1852 := THAnimSegmentNode.Create;
HAnimSegment1852 := HAnimSegment1323;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1852;
HAnimSegment1853 := THAnimSegmentNode.Create;
HAnimSegment1853 := HAnimSegment1336;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1853;
HAnimSegment1854 := THAnimSegmentNode.Create;
HAnimSegment1854 := HAnimSegment1345;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1854;
HAnimSegment1855 := THAnimSegmentNode.Create;
HAnimSegment1855 := HAnimSegment1360;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1855;
HAnimSegment1856 := THAnimSegmentNode.Create;
HAnimSegment1856 := HAnimSegment1381;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1856;
HAnimSegment1857 := THAnimSegmentNode.Create;
HAnimSegment1857 := HAnimSegment1393;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1857;
HAnimSegment1858 := THAnimSegmentNode.Create;
HAnimSegment1858 := HAnimSegment1414;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1858;
HAnimSegment1859 := THAnimSegmentNode.Create;
HAnimSegment1859 := HAnimSegment1423;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1859;
HAnimSegment1860 := THAnimSegmentNode.Create;
HAnimSegment1860 := HAnimSegment1432;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1860;
HAnimSegment1861 := THAnimSegmentNode.Create;
HAnimSegment1861 := HAnimSegment1445;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1861;
HAnimSegment1862 := THAnimSegmentNode.Create;
HAnimSegment1862 := HAnimSegment1457;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1862;
HAnimSegment1863 := THAnimSegmentNode.Create;
HAnimSegment1863 := HAnimSegment1466;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1863;
HAnimSegment1864 := THAnimSegmentNode.Create;
HAnimSegment1864 := HAnimSegment1475;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1864;
HAnimSegment1865 := THAnimSegmentNode.Create;
HAnimSegment1865 := HAnimSegment1491;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1865;
HAnimSegment1866 := THAnimSegmentNode.Create;
HAnimSegment1866 := HAnimSegment1503;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1866;
HAnimSegment1867 := THAnimSegmentNode.Create;
HAnimSegment1867 := HAnimSegment1512;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1867;
HAnimSegment1868 := THAnimSegmentNode.Create;
HAnimSegment1868 := HAnimSegment1521;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1868;
HAnimSegment1869 := THAnimSegmentNode.Create;
HAnimSegment1869 := HAnimSegment1534;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1869;
HAnimSegment1870 := THAnimSegmentNode.Create;
HAnimSegment1870 := HAnimSegment1550;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1870;
HAnimSegment1871 := THAnimSegmentNode.Create;
HAnimSegment1871 := HAnimSegment1559;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1871;
HAnimSegment1872 := THAnimSegmentNode.Create;
HAnimSegment1872 := HAnimSegment1568;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1872;
HAnimSegment1873 := THAnimSegmentNode.Create;
HAnimSegment1873 := HAnimSegment1581;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1873;
HAnimSegment1874 := THAnimSegmentNode.Create;
HAnimSegment1874 := HAnimSegment1590;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1874;
HAnimSegment1875 := THAnimSegmentNode.Create;
HAnimSegment1875 := HAnimSegment1599;
{ .AddSegments }
HAnimHumanoid43.Segments := HAnimSegment1875;
HAnimSite1876 := THAnimSiteNode.Create;
HAnimSite1876 := HAnimSite63;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1876;
HAnimSite1877 := THAnimSiteNode.Create;
HAnimSite1877 := HAnimSite66;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1877;
HAnimSite1878 := THAnimSiteNode.Create;
HAnimSite1878 := HAnimSite69;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1878;
HAnimSite1879 := THAnimSiteNode.Create;
HAnimSite1879 := HAnimSite72;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1879;
HAnimSite1880 := THAnimSiteNode.Create;
HAnimSite1880 := HAnimSite75;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1880;
HAnimSite1881 := THAnimSiteNode.Create;
HAnimSite1881 := HAnimSite78;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1881;
HAnimSite1882 := THAnimSiteNode.Create;
HAnimSite1882 := HAnimSite81;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1882;
HAnimSite1883 := THAnimSiteNode.Create;
HAnimSite1883 := HAnimSite84;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1883;
HAnimSite1884 := THAnimSiteNode.Create;
HAnimSite1884 := HAnimSite87;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1884;
HAnimSite1885 := THAnimSiteNode.Create;
HAnimSite1885 := HAnimSite90;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1885;
HAnimSite1886 := THAnimSiteNode.Create;
HAnimSite1886 := HAnimSite97;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1886;
HAnimSite1887 := THAnimSiteNode.Create;
HAnimSite1887 := HAnimSite100;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1887;
HAnimSite1888 := THAnimSiteNode.Create;
HAnimSite1888 := HAnimSite103;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1888;
HAnimSite1889 := THAnimSiteNode.Create;
HAnimSite1889 := HAnimSite115;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1889;
HAnimSite1890 := THAnimSiteNode.Create;
HAnimSite1890 := HAnimSite118;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1890;
HAnimSite1891 := THAnimSiteNode.Create;
HAnimSite1891 := HAnimSite121;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1891;
HAnimSite1892 := THAnimSiteNode.Create;
HAnimSite1892 := HAnimSite124;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1892;
HAnimSite1893 := THAnimSiteNode.Create;
HAnimSite1893 := HAnimSite131;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1893;
HAnimSite1894 := THAnimSiteNode.Create;
HAnimSite1894 := HAnimSite134;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1894;
HAnimSite1895 := THAnimSiteNode.Create;
HAnimSite1895 := HAnimSite137;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1895;
HAnimSite1896 := THAnimSiteNode.Create;
HAnimSite1896 := HAnimSite140;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1896;
HAnimSite1897 := THAnimSiteNode.Create;
HAnimSite1897 := HAnimSite152;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1897;
HAnimSite1898 := THAnimSiteNode.Create;
HAnimSite1898 := HAnimSite155;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1898;
HAnimSite1899 := THAnimSiteNode.Create;
HAnimSite1899 := HAnimSite158;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1899;
HAnimSite1900 := THAnimSiteNode.Create;
HAnimSite1900 := HAnimSite170;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1900;
HAnimSite1901 := THAnimSiteNode.Create;
HAnimSite1901 := HAnimSite173;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1901;
HAnimSite1902 := THAnimSiteNode.Create;
HAnimSite1902 := HAnimSite224;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1902;
HAnimSite1903 := THAnimSiteNode.Create;
HAnimSite1903 := HAnimSite236;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1903;
HAnimSite1904 := THAnimSiteNode.Create;
HAnimSite1904 := HAnimSite276;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1904;
HAnimSite1905 := THAnimSiteNode.Create;
HAnimSite1905 := HAnimSite316;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1905;
HAnimSite1906 := THAnimSiteNode.Create;
HAnimSite1906 := HAnimSite369;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1906;
HAnimSite1907 := THAnimSiteNode.Create;
HAnimSite1907 := HAnimSite382;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1907;
HAnimSite1908 := THAnimSiteNode.Create;
HAnimSite1908 := HAnimSite403;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1908;
HAnimSite1909 := THAnimSiteNode.Create;
HAnimSite1909 := HAnimSite416;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1909;
HAnimSite1910 := THAnimSiteNode.Create;
HAnimSite1910 := HAnimSite419;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1910;
HAnimSite1911 := THAnimSiteNode.Create;
HAnimSite1911 := HAnimSite422;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1911;
HAnimSite1912 := THAnimSiteNode.Create;
HAnimSite1912 := HAnimSite434;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1912;
HAnimSite1913 := THAnimSiteNode.Create;
HAnimSite1913 := HAnimSite437;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1913;
HAnimSite1914 := THAnimSiteNode.Create;
HAnimSite1914 := HAnimSite488;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1914;
HAnimSite1915 := THAnimSiteNode.Create;
HAnimSite1915 := HAnimSite500;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1915;
HAnimSite1916 := THAnimSiteNode.Create;
HAnimSite1916 := HAnimSite540;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1916;
HAnimSite1917 := THAnimSiteNode.Create;
HAnimSite1917 := HAnimSite580;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1917;
HAnimSite1918 := THAnimSiteNode.Create;
HAnimSite1918 := HAnimSite633;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1918;
HAnimSite1919 := THAnimSiteNode.Create;
HAnimSite1919 := HAnimSite646;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1919;
HAnimSite1920 := THAnimSiteNode.Create;
HAnimSite1920 := HAnimSite667;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1920;
HAnimSite1921 := THAnimSiteNode.Create;
HAnimSite1921 := HAnimSite698;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1921;
HAnimSite1922 := THAnimSiteNode.Create;
HAnimSite1922 := HAnimSite701;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1922;
HAnimSite1923 := THAnimSiteNode.Create;
HAnimSite1923 := HAnimSite704;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1923;
HAnimSite1924 := THAnimSiteNode.Create;
HAnimSite1924 := HAnimSite743;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1924;
HAnimSite1925 := THAnimSiteNode.Create;
HAnimSite1925 := HAnimSite755;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1925;
HAnimSite1926 := THAnimSiteNode.Create;
HAnimSite1926 := HAnimSite758;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1926;
HAnimSite1927 := THAnimSiteNode.Create;
HAnimSite1927 := HAnimSite788;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1927;
HAnimSite1928 := THAnimSiteNode.Create;
HAnimSite1928 := HAnimSite791;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1928;
HAnimSite1929 := THAnimSiteNode.Create;
HAnimSite1929 := HAnimSite794;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1929;
HAnimSite1930 := THAnimSiteNode.Create;
HAnimSite1930 := HAnimSite797;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1930;
HAnimSite1931 := THAnimSiteNode.Create;
HAnimSite1931 := HAnimSite809;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1931;
HAnimSite1932 := THAnimSiteNode.Create;
HAnimSite1932 := HAnimSite848;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1932;
HAnimSite1933 := THAnimSiteNode.Create;
HAnimSite1933 := HAnimSite851;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1933;
HAnimSite1934 := THAnimSiteNode.Create;
HAnimSite1934 := HAnimSite863;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1934;
HAnimSite1935 := THAnimSiteNode.Create;
HAnimSite1935 := HAnimSite866;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1935;
HAnimSite1936 := THAnimSiteNode.Create;
HAnimSite1936 := HAnimSite873;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1936;
HAnimSite1937 := THAnimSiteNode.Create;
HAnimSite1937 := HAnimSite876;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1937;
HAnimSite1938 := THAnimSiteNode.Create;
HAnimSite1938 := HAnimSite879;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1938;
HAnimSite1939 := THAnimSiteNode.Create;
HAnimSite1939 := HAnimSite882;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1939;
HAnimSite1940 := THAnimSiteNode.Create;
HAnimSite1940 := HAnimSite885;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1940;
HAnimSite1941 := THAnimSiteNode.Create;
HAnimSite1941 := HAnimSite892;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1941;
HAnimSite1942 := THAnimSiteNode.Create;
HAnimSite1942 := HAnimSite895;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1942;
HAnimSite1943 := THAnimSiteNode.Create;
HAnimSite1943 := HAnimSite898;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1943;
HAnimSite1944 := THAnimSiteNode.Create;
HAnimSite1944 := HAnimSite901;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1944;
HAnimSite1945 := THAnimSiteNode.Create;
HAnimSite1945 := HAnimSite904;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1945;
HAnimSite1946 := THAnimSiteNode.Create;
HAnimSite1946 := HAnimSite952;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1946;
HAnimSite1947 := THAnimSiteNode.Create;
HAnimSite1947 := HAnimSite973;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1947;
HAnimSite1948 := THAnimSiteNode.Create;
HAnimSite1948 := HAnimSite976;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1948;
HAnimSite1949 := THAnimSiteNode.Create;
HAnimSite1949 := HAnimSite979;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1949;
HAnimSite1950 := THAnimSiteNode.Create;
HAnimSite1950 := HAnimSite982;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1950;
HAnimSite1951 := THAnimSiteNode.Create;
HAnimSite1951 := HAnimSite985;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1951;
HAnimSite1952 := THAnimSiteNode.Create;
HAnimSite1952 := HAnimSite988;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1952;
HAnimSite1953 := THAnimSiteNode.Create;
HAnimSite1953 := HAnimSite991;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1953;
HAnimSite1954 := THAnimSiteNode.Create;
HAnimSite1954 := HAnimSite994;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1954;
HAnimSite1955 := THAnimSiteNode.Create;
HAnimSite1955 := HAnimSite997;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1955;
HAnimSite1956 := THAnimSiteNode.Create;
HAnimSite1956 := HAnimSite1000;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1956;
HAnimSite1957 := THAnimSiteNode.Create;
HAnimSite1957 := HAnimSite1003;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1957;
HAnimSite1958 := THAnimSiteNode.Create;
HAnimSite1958 := HAnimSite1039;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1958;
HAnimSite1959 := THAnimSiteNode.Create;
HAnimSite1959 := HAnimSite1042;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1959;
HAnimSite1960 := THAnimSiteNode.Create;
HAnimSite1960 := HAnimSite1045;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1960;
HAnimSite1961 := THAnimSiteNode.Create;
HAnimSite1961 := HAnimSite1048;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1961;
HAnimSite1962 := THAnimSiteNode.Create;
HAnimSite1962 := HAnimSite1077;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1962;
HAnimSite1963 := THAnimSiteNode.Create;
HAnimSite1963 := HAnimSite1080;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1963;
HAnimSite1964 := THAnimSiteNode.Create;
HAnimSite1964 := HAnimSite1092;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1964;
HAnimSite1965 := THAnimSiteNode.Create;
HAnimSite1965 := HAnimSite1095;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1965;
HAnimSite1966 := THAnimSiteNode.Create;
HAnimSite1966 := HAnimSite1098;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1966;
HAnimSite1967 := THAnimSiteNode.Create;
HAnimSite1967 := HAnimSite1101;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1967;
HAnimSite1968 := THAnimSiteNode.Create;
HAnimSite1968 := HAnimSite1113;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1968;
HAnimSite1969 := THAnimSiteNode.Create;
HAnimSite1969 := HAnimSite1164;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1969;
HAnimSite1970 := THAnimSiteNode.Create;
HAnimSite1970 := HAnimSite1177;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1970;
HAnimSite1971 := THAnimSiteNode.Create;
HAnimSite1971 := HAnimSite1207;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1971;
HAnimSite1972 := THAnimSiteNode.Create;
HAnimSite1972 := HAnimSite1210;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1972;
HAnimSite1973 := THAnimSiteNode.Create;
HAnimSite1973 := HAnimSite1223;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1973;
HAnimSite1974 := THAnimSiteNode.Create;
HAnimSite1974 := HAnimSite1253;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1974;
HAnimSite1975 := THAnimSiteNode.Create;
HAnimSite1975 := HAnimSite1270;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1975;
HAnimSite1976 := THAnimSiteNode.Create;
HAnimSite1976 := HAnimSite1300;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1976;
HAnimSite1977 := THAnimSiteNode.Create;
HAnimSite1977 := HAnimSite1331;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1977;
HAnimSite1978 := THAnimSiteNode.Create;
HAnimSite1978 := HAnimSite1353;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1978;
HAnimSite1979 := THAnimSiteNode.Create;
HAnimSite1979 := HAnimSite1356;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1979;
HAnimSite1980 := THAnimSiteNode.Create;
HAnimSite1980 := HAnimSite1368;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1980;
HAnimSite1981 := THAnimSiteNode.Create;
HAnimSite1981 := HAnimSite1371;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1981;
HAnimSite1982 := THAnimSiteNode.Create;
HAnimSite1982 := HAnimSite1374;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1982;
HAnimSite1983 := THAnimSiteNode.Create;
HAnimSite1983 := HAnimSite1377;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1983;
HAnimSite1984 := THAnimSiteNode.Create;
HAnimSite1984 := HAnimSite1389;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1984;
HAnimSite1985 := THAnimSiteNode.Create;
HAnimSite1985 := HAnimSite1440;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1985;
HAnimSite1986 := THAnimSiteNode.Create;
HAnimSite1986 := HAnimSite1453;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1986;
HAnimSite1987 := THAnimSiteNode.Create;
HAnimSite1987 := HAnimSite1483;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1987;
HAnimSite1988 := THAnimSiteNode.Create;
HAnimSite1988 := HAnimSite1486;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1988;
HAnimSite1989 := THAnimSiteNode.Create;
HAnimSite1989 := HAnimSite1499;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1989;
HAnimSite1990 := THAnimSiteNode.Create;
HAnimSite1990 := HAnimSite1529;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1990;
HAnimSite1991 := THAnimSiteNode.Create;
HAnimSite1991 := HAnimSite1546;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1991;
HAnimSite1992 := THAnimSiteNode.Create;
HAnimSite1992 := HAnimSite1576;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1992;
HAnimSite1993 := THAnimSiteNode.Create;
HAnimSite1993 := HAnimSite1607;
{ .AddSites }
HAnimHumanoid43.Sites := HAnimSite1993;
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid43]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
