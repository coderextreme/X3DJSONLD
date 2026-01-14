function HAnim1SpecificationLOA3Illustrated: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group31: TGroupNode;
Background32: TBackgroundNode;
NavigationInfo33: TNavigationInfoNode;
Group34: TGroupNode;
WorldInfo35: TWorldInfoNode;
Viewpoint36: TViewpointNode;
Viewpoint37: TViewpointNode;
Viewpoint38: TViewpointNode;
Viewpoint39: TViewpointNode;
Viewpoint40: TViewpointNode;
Viewpoint41: TViewpointNode;
Viewpoint42: TViewpointNode;
Viewpoint43: TViewpointNode;
Viewpoint44: TViewpointNode;
HAnimHumanoid45: THAnimHumanoidNode;
HAnimJoint46: THAnimJointNode;
HAnimSegment47: THAnimSegmentNode;
TouchSensor48: TTouchSensorNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Sphere53: TSphereNode;
Shape54: TShapeNode;
LineSet55: TLineSetNode;
ColorRGBA56: TColorRGBANode;
Coordinate57: TCoordinateNode;
Shape58: TShapeNode;
LineSet59: TLineSetNode;
ColorRGBA60: TColorRGBANode;
Coordinate61: TCoordinateNode;
HAnimJoint62: THAnimJointNode;
HAnimSegment63: THAnimSegmentNode;
TouchSensor64: TTouchSensorNode;
Transform65: TTransformNode;
Shape66: TShapeNode;
Shape67: TShapeNode;
LineSet68: TLineSetNode;
ColorRGBA69: TColorRGBANode;
Coordinate70: TCoordinateNode;
Shape71: TShapeNode;
LineSet72: TLineSetNode;
ColorRGBA73: TColorRGBANode;
Coordinate74: TCoordinateNode;
Shape75: TShapeNode;
LineSet76: TLineSetNode;
ColorRGBA77: TColorRGBANode;
Coordinate78: TCoordinateNode;
Shape79: TShapeNode;
LineSet80: TLineSetNode;
ColorRGBA81: TColorRGBANode;
Coordinate82: TCoordinateNode;
Shape83: TShapeNode;
LineSet84: TLineSetNode;
ColorRGBA85: TColorRGBANode;
Coordinate86: TCoordinateNode;
Shape87: TShapeNode;
LineSet88: TLineSetNode;
ColorRGBA89: TColorRGBANode;
Coordinate90: TCoordinateNode;
Shape91: TShapeNode;
LineSet92: TLineSetNode;
ColorRGBA93: TColorRGBANode;
Coordinate94: TCoordinateNode;
Shape95: TShapeNode;
LineSet96: TLineSetNode;
ColorRGBA97: TColorRGBANode;
Coordinate98: TCoordinateNode;
Shape99: TShapeNode;
LineSet100: TLineSetNode;
ColorRGBA101: TColorRGBANode;
Coordinate102: TCoordinateNode;
Shape103: TShapeNode;
LineSet104: TLineSetNode;
ColorRGBA105: TColorRGBANode;
Coordinate106: TCoordinateNode;
Shape107: TShapeNode;
LineSet108: TLineSetNode;
ColorRGBA109: TColorRGBANode;
Coordinate110: TCoordinateNode;
HAnimSite111: THAnimSiteNode;
TouchSensor112: TTouchSensorNode;
Shape113: TShapeNode;
Appearance114: TAppearanceNode;
Material115: TMaterialNode;
IndexedFaceSet116: TIndexedFaceSetNode;
Coordinate117: TCoordinateNode;
HAnimSite118: THAnimSiteNode;
TouchSensor119: TTouchSensorNode;
Shape120: TShapeNode;
HAnimSite121: THAnimSiteNode;
TouchSensor122: TTouchSensorNode;
Shape123: TShapeNode;
HAnimSite124: THAnimSiteNode;
TouchSensor125: TTouchSensorNode;
Shape126: TShapeNode;
HAnimSite127: THAnimSiteNode;
TouchSensor128: TTouchSensorNode;
Shape129: TShapeNode;
HAnimSite130: THAnimSiteNode;
TouchSensor131: TTouchSensorNode;
Shape132: TShapeNode;
HAnimSite133: THAnimSiteNode;
TouchSensor134: TTouchSensorNode;
Shape135: TShapeNode;
HAnimSite136: THAnimSiteNode;
TouchSensor137: TTouchSensorNode;
Shape138: TShapeNode;
HAnimSite139: THAnimSiteNode;
TouchSensor140: TTouchSensorNode;
Shape141: TShapeNode;
HAnimJoint142: THAnimJointNode;
HAnimSegment143: THAnimSegmentNode;
TouchSensor144: TTouchSensorNode;
Transform145: TTransformNode;
Shape146: TShapeNode;
Shape147: TShapeNode;
LineSet148: TLineSetNode;
ColorRGBA149: TColorRGBANode;
Coordinate150: TCoordinateNode;
Shape151: TShapeNode;
LineSet152: TLineSetNode;
ColorRGBA153: TColorRGBANode;
Coordinate154: TCoordinateNode;
Shape155: TShapeNode;
LineSet156: TLineSetNode;
ColorRGBA157: TColorRGBANode;
Coordinate158: TCoordinateNode;
Shape159: TShapeNode;
LineSet160: TLineSetNode;
ColorRGBA161: TColorRGBANode;
Coordinate162: TCoordinateNode;
HAnimSite163: THAnimSiteNode;
TouchSensor164: TTouchSensorNode;
Shape165: TShapeNode;
HAnimSite166: THAnimSiteNode;
TouchSensor167: TTouchSensorNode;
Shape168: TShapeNode;
HAnimSite169: THAnimSiteNode;
TouchSensor170: TTouchSensorNode;
Shape171: TShapeNode;
HAnimJoint172: THAnimJointNode;
HAnimSegment173: THAnimSegmentNode;
TouchSensor174: TTouchSensorNode;
Transform175: TTransformNode;
Shape176: TShapeNode;
Shape177: TShapeNode;
LineSet178: TLineSetNode;
ColorRGBA179: TColorRGBANode;
Coordinate180: TCoordinateNode;
HAnimJoint181: THAnimJointNode;
HAnimSegment182: THAnimSegmentNode;
TouchSensor183: TTouchSensorNode;
Transform184: TTransformNode;
Shape185: TShapeNode;
Shape186: TShapeNode;
LineSet187: TLineSetNode;
ColorRGBA188: TColorRGBANode;
Coordinate189: TCoordinateNode;
Shape190: TShapeNode;
LineSet191: TLineSetNode;
ColorRGBA192: TColorRGBANode;
Coordinate193: TCoordinateNode;
Shape194: TShapeNode;
LineSet195: TLineSetNode;
ColorRGBA196: TColorRGBANode;
Coordinate197: TCoordinateNode;
Shape198: TShapeNode;
LineSet199: TLineSetNode;
ColorRGBA200: TColorRGBANode;
Coordinate201: TCoordinateNode;
Shape202: TShapeNode;
LineSet203: TLineSetNode;
ColorRGBA204: TColorRGBANode;
Coordinate205: TCoordinateNode;
HAnimSite206: THAnimSiteNode;
TouchSensor207: TTouchSensorNode;
Shape208: TShapeNode;
HAnimSite209: THAnimSiteNode;
TouchSensor210: TTouchSensorNode;
Shape211: TShapeNode;
HAnimSite212: THAnimSiteNode;
TouchSensor213: TTouchSensorNode;
Shape214: TShapeNode;
HAnimSite215: THAnimSiteNode;
TouchSensor216: TTouchSensorNode;
Shape217: TShapeNode;
HAnimJoint218: THAnimJointNode;
HAnimSegment219: THAnimSegmentNode;
TouchSensor220: TTouchSensorNode;
Transform221: TTransformNode;
Shape222: TShapeNode;
Shape223: TShapeNode;
LineSet224: TLineSetNode;
ColorRGBA225: TColorRGBANode;
Coordinate226: TCoordinateNode;
HAnimJoint227: THAnimJointNode;
HAnimSegment228: THAnimSegmentNode;
TouchSensor229: TTouchSensorNode;
Transform230: TTransformNode;
Shape231: TShapeNode;
Shape232: TShapeNode;
LineSet233: TLineSetNode;
ColorRGBA234: TColorRGBANode;
Coordinate235: TCoordinateNode;
Shape236: TShapeNode;
LineSet237: TLineSetNode;
ColorRGBA238: TColorRGBANode;
Coordinate239: TCoordinateNode;
HAnimSite240: THAnimSiteNode;
TouchSensor241: TTouchSensorNode;
Shape242: TShapeNode;
HAnimJoint243: THAnimJointNode;
HAnimSegment244: THAnimSegmentNode;
TouchSensor245: TTouchSensorNode;
Transform246: TTransformNode;
Shape247: TShapeNode;
Shape248: TShapeNode;
LineSet249: TLineSetNode;
ColorRGBA250: TColorRGBANode;
Coordinate251: TCoordinateNode;
Shape252: TShapeNode;
LineSet253: TLineSetNode;
ColorRGBA254: TColorRGBANode;
Coordinate255: TCoordinateNode;
Shape256: TShapeNode;
LineSet257: TLineSetNode;
ColorRGBA258: TColorRGBANode;
Coordinate259: TCoordinateNode;
HAnimSite260: THAnimSiteNode;
TouchSensor261: TTouchSensorNode;
Shape262: TShapeNode;
HAnimSite263: THAnimSiteNode;
TouchSensor264: TTouchSensorNode;
Shape265: TShapeNode;
HAnimSite266: THAnimSiteNode;
TouchSensor267: TTouchSensorNode;
Shape268: TShapeNode;
HAnimJoint269: THAnimJointNode;
HAnimSegment270: THAnimSegmentNode;
TouchSensor271: TTouchSensorNode;
Transform272: TTransformNode;
Shape273: TShapeNode;
Shape274: TShapeNode;
LineSet275: TLineSetNode;
ColorRGBA276: TColorRGBANode;
Coordinate277: TCoordinateNode;
Shape278: TShapeNode;
LineSet279: TLineSetNode;
ColorRGBA280: TColorRGBANode;
Coordinate281: TCoordinateNode;
Shape282: TShapeNode;
LineSet283: TLineSetNode;
ColorRGBA284: TColorRGBANode;
Coordinate285: TCoordinateNode;
Shape286: TShapeNode;
LineSet287: TLineSetNode;
ColorRGBA288: TColorRGBANode;
Coordinate289: TCoordinateNode;
HAnimSite290: THAnimSiteNode;
TouchSensor291: TTouchSensorNode;
Shape292: TShapeNode;
HAnimSite293: THAnimSiteNode;
TouchSensor294: TTouchSensorNode;
Shape295: TShapeNode;
HAnimSite296: THAnimSiteNode;
TouchSensor297: TTouchSensorNode;
Shape298: TShapeNode;
HAnimJoint299: THAnimJointNode;
HAnimSegment300: THAnimSegmentNode;
TouchSensor301: TTouchSensorNode;
Transform302: TTransformNode;
Shape303: TShapeNode;
Shape304: TShapeNode;
LineSet305: TLineSetNode;
ColorRGBA306: TColorRGBANode;
Coordinate307: TCoordinateNode;
HAnimJoint308: THAnimJointNode;
HAnimSegment309: THAnimSegmentNode;
TouchSensor310: TTouchSensorNode;
Transform311: TTransformNode;
Shape312: TShapeNode;
Shape313: TShapeNode;
LineSet314: TLineSetNode;
ColorRGBA315: TColorRGBANode;
Coordinate316: TCoordinateNode;
Shape317: TShapeNode;
LineSet318: TLineSetNode;
ColorRGBA319: TColorRGBANode;
Coordinate320: TCoordinateNode;
Shape321: TShapeNode;
LineSet322: TLineSetNode;
ColorRGBA323: TColorRGBANode;
Coordinate324: TCoordinateNode;
Shape325: TShapeNode;
LineSet326: TLineSetNode;
ColorRGBA327: TColorRGBANode;
Coordinate328: TCoordinateNode;
Shape329: TShapeNode;
LineSet330: TLineSetNode;
ColorRGBA331: TColorRGBANode;
Coordinate332: TCoordinateNode;
HAnimSite333: THAnimSiteNode;
TouchSensor334: TTouchSensorNode;
Shape335: TShapeNode;
HAnimSite336: THAnimSiteNode;
TouchSensor337: TTouchSensorNode;
Shape338: TShapeNode;
HAnimSite339: THAnimSiteNode;
TouchSensor340: TTouchSensorNode;
Shape341: TShapeNode;
HAnimSite342: THAnimSiteNode;
TouchSensor343: TTouchSensorNode;
Shape344: TShapeNode;
HAnimJoint345: THAnimJointNode;
HAnimSegment346: THAnimSegmentNode;
TouchSensor347: TTouchSensorNode;
Transform348: TTransformNode;
Shape349: TShapeNode;
Shape350: TShapeNode;
LineSet351: TLineSetNode;
ColorRGBA352: TColorRGBANode;
Coordinate353: TCoordinateNode;
HAnimJoint354: THAnimJointNode;
HAnimSegment355: THAnimSegmentNode;
TouchSensor356: TTouchSensorNode;
Transform357: TTransformNode;
Shape358: TShapeNode;
Shape359: TShapeNode;
LineSet360: TLineSetNode;
ColorRGBA361: TColorRGBANode;
Coordinate362: TCoordinateNode;
Shape363: TShapeNode;
LineSet364: TLineSetNode;
ColorRGBA365: TColorRGBANode;
Coordinate366: TCoordinateNode;
HAnimSite367: THAnimSiteNode;
TouchSensor368: TTouchSensorNode;
Shape369: TShapeNode;
HAnimJoint370: THAnimJointNode;
HAnimSegment371: THAnimSegmentNode;
TouchSensor372: TTouchSensorNode;
Transform373: TTransformNode;
Shape374: TShapeNode;
Shape375: TShapeNode;
LineSet376: TLineSetNode;
ColorRGBA377: TColorRGBANode;
Coordinate378: TCoordinateNode;
Shape379: TShapeNode;
LineSet380: TLineSetNode;
ColorRGBA381: TColorRGBANode;
Coordinate382: TCoordinateNode;
Shape383: TShapeNode;
LineSet384: TLineSetNode;
ColorRGBA385: TColorRGBANode;
Coordinate386: TCoordinateNode;
HAnimSite387: THAnimSiteNode;
TouchSensor388: TTouchSensorNode;
Shape389: TShapeNode;
HAnimSite390: THAnimSiteNode;
TouchSensor391: TTouchSensorNode;
Shape392: TShapeNode;
HAnimSite393: THAnimSiteNode;
TouchSensor394: TTouchSensorNode;
Shape395: TShapeNode;
HAnimJoint396: THAnimJointNode;
HAnimSegment397: THAnimSegmentNode;
TouchSensor398: TTouchSensorNode;
Transform399: TTransformNode;
Shape400: TShapeNode;
Shape401: TShapeNode;
LineSet402: TLineSetNode;
ColorRGBA403: TColorRGBANode;
Coordinate404: TCoordinateNode;
Shape405: TShapeNode;
LineSet406: TLineSetNode;
ColorRGBA407: TColorRGBANode;
Coordinate408: TCoordinateNode;
Shape409: TShapeNode;
LineSet410: TLineSetNode;
ColorRGBA411: TColorRGBANode;
Coordinate412: TCoordinateNode;
HAnimSite413: THAnimSiteNode;
TouchSensor414: TTouchSensorNode;
Shape415: TShapeNode;
HAnimSite416: THAnimSiteNode;
TouchSensor417: TTouchSensorNode;
Shape418: TShapeNode;
HAnimJoint419: THAnimJointNode;
HAnimSegment420: THAnimSegmentNode;
TouchSensor421: TTouchSensorNode;
Transform422: TTransformNode;
Shape423: TShapeNode;
Shape424: TShapeNode;
LineSet425: TLineSetNode;
ColorRGBA426: TColorRGBANode;
Coordinate427: TCoordinateNode;
HAnimJoint428: THAnimJointNode;
HAnimSegment429: THAnimSegmentNode;
TouchSensor430: TTouchSensorNode;
Transform431: TTransformNode;
Shape432: TShapeNode;
Shape433: TShapeNode;
LineSet434: TLineSetNode;
ColorRGBA435: TColorRGBANode;
Coordinate436: TCoordinateNode;
HAnimJoint437: THAnimJointNode;
HAnimSegment438: THAnimSegmentNode;
TouchSensor439: TTouchSensorNode;
Transform440: TTransformNode;
Shape441: TShapeNode;
Shape442: TShapeNode;
LineSet443: TLineSetNode;
ColorRGBA444: TColorRGBANode;
Coordinate445: TCoordinateNode;
Shape446: TShapeNode;
LineSet447: TLineSetNode;
ColorRGBA448: TColorRGBANode;
Coordinate449: TCoordinateNode;
Shape450: TShapeNode;
LineSet451: TLineSetNode;
ColorRGBA452: TColorRGBANode;
Coordinate453: TCoordinateNode;
Shape454: TShapeNode;
LineSet455: TLineSetNode;
ColorRGBA456: TColorRGBANode;
Coordinate457: TCoordinateNode;
HAnimSite458: THAnimSiteNode;
TouchSensor459: TTouchSensorNode;
Shape460: TShapeNode;
HAnimSite461: THAnimSiteNode;
TouchSensor462: TTouchSensorNode;
Shape463: TShapeNode;
HAnimSite464: THAnimSiteNode;
TouchSensor465: TTouchSensorNode;
Shape466: TShapeNode;
HAnimJoint467: THAnimJointNode;
HAnimSegment468: THAnimSegmentNode;
TouchSensor469: TTouchSensorNode;
Transform470: TTransformNode;
Shape471: TShapeNode;
Shape472: TShapeNode;
LineSet473: TLineSetNode;
ColorRGBA474: TColorRGBANode;
Coordinate475: TCoordinateNode;
HAnimJoint476: THAnimJointNode;
HAnimSegment477: THAnimSegmentNode;
TouchSensor478: TTouchSensorNode;
Transform479: TTransformNode;
Shape480: TShapeNode;
Shape481: TShapeNode;
LineSet482: TLineSetNode;
ColorRGBA483: TColorRGBANode;
Coordinate484: TCoordinateNode;
HAnimJoint485: THAnimJointNode;
HAnimSegment486: THAnimSegmentNode;
TouchSensor487: TTouchSensorNode;
Transform488: TTransformNode;
Shape489: TShapeNode;
Shape490: TShapeNode;
LineSet491: TLineSetNode;
ColorRGBA492: TColorRGBANode;
Coordinate493: TCoordinateNode;
HAnimJoint494: THAnimJointNode;
HAnimSegment495: THAnimSegmentNode;
TouchSensor496: TTouchSensorNode;
Transform497: TTransformNode;
Shape498: TShapeNode;
Shape499: TShapeNode;
LineSet500: TLineSetNode;
ColorRGBA501: TColorRGBANode;
Coordinate502: TCoordinateNode;
Shape503: TShapeNode;
LineSet504: TLineSetNode;
ColorRGBA505: TColorRGBANode;
Coordinate506: TCoordinateNode;
HAnimSite507: THAnimSiteNode;
TouchSensor508: TTouchSensorNode;
Shape509: TShapeNode;
HAnimJoint510: THAnimJointNode;
HAnimSegment511: THAnimSegmentNode;
TouchSensor512: TTouchSensorNode;
Transform513: TTransformNode;
Shape514: TShapeNode;
Shape515: TShapeNode;
LineSet516: TLineSetNode;
ColorRGBA517: TColorRGBANode;
Coordinate518: TCoordinateNode;
Shape519: TShapeNode;
LineSet520: TLineSetNode;
ColorRGBA521: TColorRGBANode;
Coordinate522: TCoordinateNode;
Shape523: TShapeNode;
LineSet524: TLineSetNode;
ColorRGBA525: TColorRGBANode;
Coordinate526: TCoordinateNode;
HAnimSite527: THAnimSiteNode;
TouchSensor528: TTouchSensorNode;
Shape529: TShapeNode;
HAnimSite530: THAnimSiteNode;
TouchSensor531: TTouchSensorNode;
Shape532: TShapeNode;
HAnimJoint533: THAnimJointNode;
HAnimSegment534: THAnimSegmentNode;
TouchSensor535: TTouchSensorNode;
Transform536: TTransformNode;
Shape537: TShapeNode;
Shape538: TShapeNode;
LineSet539: TLineSetNode;
ColorRGBA540: TColorRGBANode;
Coordinate541: TCoordinateNode;
HAnimJoint542: THAnimJointNode;
HAnimSegment543: THAnimSegmentNode;
TouchSensor544: TTouchSensorNode;
Transform545: TTransformNode;
Shape546: TShapeNode;
Shape547: TShapeNode;
LineSet548: TLineSetNode;
ColorRGBA549: TColorRGBANode;
Coordinate550: TCoordinateNode;
HAnimJoint551: THAnimJointNode;
HAnimSegment552: THAnimSegmentNode;
TouchSensor553: TTouchSensorNode;
Transform554: TTransformNode;
Shape555: TShapeNode;
Shape556: TShapeNode;
LineSet557: TLineSetNode;
ColorRGBA558: TColorRGBANode;
Coordinate559: TCoordinateNode;
HAnimJoint560: THAnimJointNode;
HAnimSegment561: THAnimSegmentNode;
TouchSensor562: TTouchSensorNode;
Transform563: TTransformNode;
Shape564: TShapeNode;
Shape565: TShapeNode;
LineSet566: TLineSetNode;
ColorRGBA567: TColorRGBANode;
Coordinate568: TCoordinateNode;
HAnimJoint569: THAnimJointNode;
HAnimSegment570: THAnimSegmentNode;
TouchSensor571: TTouchSensorNode;
Transform572: TTransformNode;
Shape573: TShapeNode;
Shape574: TShapeNode;
LineSet575: TLineSetNode;
ColorRGBA576: TColorRGBANode;
Coordinate577: TCoordinateNode;
HAnimJoint578: THAnimJointNode;
HAnimSegment579: THAnimSegmentNode;
TouchSensor580: TTouchSensorNode;
Transform581: TTransformNode;
Shape582: TShapeNode;
Shape583: TShapeNode;
LineSet584: TLineSetNode;
ColorRGBA585: TColorRGBANode;
Coordinate586: TCoordinateNode;
HAnimJoint587: THAnimJointNode;
HAnimSegment588: THAnimSegmentNode;
TouchSensor589: TTouchSensorNode;
Transform590: TTransformNode;
Shape591: TShapeNode;
Shape592: TShapeNode;
LineSet593: TLineSetNode;
ColorRGBA594: TColorRGBANode;
Coordinate595: TCoordinateNode;
HAnimJoint596: THAnimJointNode;
HAnimSegment597: THAnimSegmentNode;
TouchSensor598: TTouchSensorNode;
Transform599: TTransformNode;
Shape600: TShapeNode;
Shape601: TShapeNode;
LineSet602: TLineSetNode;
ColorRGBA603: TColorRGBANode;
Coordinate604: TCoordinateNode;
Shape605: TShapeNode;
LineSet606: TLineSetNode;
ColorRGBA607: TColorRGBANode;
Coordinate608: TCoordinateNode;
Shape609: TShapeNode;
LineSet610: TLineSetNode;
ColorRGBA611: TColorRGBANode;
Coordinate612: TCoordinateNode;
Shape613: TShapeNode;
LineSet614: TLineSetNode;
ColorRGBA615: TColorRGBANode;
Coordinate616: TCoordinateNode;
Shape617: TShapeNode;
LineSet618: TLineSetNode;
ColorRGBA619: TColorRGBANode;
Coordinate620: TCoordinateNode;
HAnimSite621: THAnimSiteNode;
TouchSensor622: TTouchSensorNode;
Shape623: TShapeNode;
HAnimSite624: THAnimSiteNode;
TouchSensor625: TTouchSensorNode;
Shape626: TShapeNode;
HAnimJoint627: THAnimJointNode;
HAnimSegment628: THAnimSegmentNode;
TouchSensor629: TTouchSensorNode;
Transform630: TTransformNode;
Shape631: TShapeNode;
Shape632: TShapeNode;
LineSet633: TLineSetNode;
ColorRGBA634: TColorRGBANode;
Coordinate635: TCoordinateNode;
Shape636: TShapeNode;
LineSet637: TLineSetNode;
ColorRGBA638: TColorRGBANode;
Coordinate639: TCoordinateNode;
Shape640: TShapeNode;
LineSet641: TLineSetNode;
ColorRGBA642: TColorRGBANode;
Coordinate643: TCoordinateNode;
HAnimSite644: THAnimSiteNode;
TouchSensor645: TTouchSensorNode;
Shape646: TShapeNode;
HAnimSite647: THAnimSiteNode;
TouchSensor648: TTouchSensorNode;
Shape649: TShapeNode;
HAnimJoint650: THAnimJointNode;
HAnimSegment651: THAnimSegmentNode;
TouchSensor652: TTouchSensorNode;
Transform653: TTransformNode;
Shape654: TShapeNode;
Shape655: TShapeNode;
LineSet656: TLineSetNode;
ColorRGBA657: TColorRGBANode;
Coordinate658: TCoordinateNode;
HAnimJoint659: THAnimJointNode;
HAnimSegment660: THAnimSegmentNode;
TouchSensor661: TTouchSensorNode;
Transform662: TTransformNode;
Shape663: TShapeNode;
Shape664: TShapeNode;
LineSet665: TLineSetNode;
ColorRGBA666: TColorRGBANode;
Coordinate667: TCoordinateNode;
HAnimJoint668: THAnimJointNode;
HAnimSegment669: THAnimSegmentNode;
TouchSensor670: TTouchSensorNode;
Transform671: TTransformNode;
Shape672: TShapeNode;
Shape673: TShapeNode;
LineSet674: TLineSetNode;
ColorRGBA675: TColorRGBANode;
Coordinate676: TCoordinateNode;
HAnimJoint677: THAnimJointNode;
HAnimSegment678: THAnimSegmentNode;
TouchSensor679: TTouchSensorNode;
Transform680: TTransformNode;
Shape681: TShapeNode;
Shape682: TShapeNode;
LineSet683: TLineSetNode;
ColorRGBA684: TColorRGBANode;
Coordinate685: TCoordinateNode;
HAnimJoint686: THAnimJointNode;
HAnimSegment687: THAnimSegmentNode;
TouchSensor688: TTouchSensorNode;
Transform689: TTransformNode;
Shape690: TShapeNode;
Shape691: TShapeNode;
LineSet692: TLineSetNode;
ColorRGBA693: TColorRGBANode;
Coordinate694: TCoordinateNode;
HAnimJoint695: THAnimJointNode;
HAnimSegment696: THAnimSegmentNode;
TouchSensor697: TTouchSensorNode;
Transform698: TTransformNode;
Shape699: TShapeNode;
Shape700: TShapeNode;
LineSet701: TLineSetNode;
ColorRGBA702: TColorRGBANode;
Coordinate703: TCoordinateNode;
HAnimJoint704: THAnimJointNode;
HAnimSegment705: THAnimSegmentNode;
TouchSensor706: TTouchSensorNode;
Transform707: TTransformNode;
Shape708: TShapeNode;
Shape709: TShapeNode;
LineSet710: TLineSetNode;
ColorRGBA711: TColorRGBANode;
Coordinate712: TCoordinateNode;
Shape713: TShapeNode;
LineSet714: TLineSetNode;
ColorRGBA715: TColorRGBANode;
Coordinate716: TCoordinateNode;
Shape717: TShapeNode;
LineSet718: TLineSetNode;
ColorRGBA719: TColorRGBANode;
Coordinate720: TCoordinateNode;
Shape721: TShapeNode;
LineSet722: TLineSetNode;
ColorRGBA723: TColorRGBANode;
Coordinate724: TCoordinateNode;
Shape725: TShapeNode;
LineSet726: TLineSetNode;
ColorRGBA727: TColorRGBANode;
Coordinate728: TCoordinateNode;
Shape729: TShapeNode;
LineSet730: TLineSetNode;
ColorRGBA731: TColorRGBANode;
Coordinate732: TCoordinateNode;
Shape733: TShapeNode;
LineSet734: TLineSetNode;
ColorRGBA735: TColorRGBANode;
Coordinate736: TCoordinateNode;
Shape737: TShapeNode;
LineSet738: TLineSetNode;
ColorRGBA739: TColorRGBANode;
Coordinate740: TCoordinateNode;
Shape741: TShapeNode;
LineSet742: TLineSetNode;
ColorRGBA743: TColorRGBANode;
Coordinate744: TCoordinateNode;
Shape745: TShapeNode;
LineSet746: TLineSetNode;
ColorRGBA747: TColorRGBANode;
Coordinate748: TCoordinateNode;
Shape749: TShapeNode;
LineSet750: TLineSetNode;
ColorRGBA751: TColorRGBANode;
Coordinate752: TCoordinateNode;
Shape753: TShapeNode;
LineSet754: TLineSetNode;
ColorRGBA755: TColorRGBANode;
Coordinate756: TCoordinateNode;
Shape757: TShapeNode;
LineSet758: TLineSetNode;
ColorRGBA759: TColorRGBANode;
Coordinate760: TCoordinateNode;
Shape761: TShapeNode;
LineSet762: TLineSetNode;
ColorRGBA763: TColorRGBANode;
Coordinate764: TCoordinateNode;
Shape765: TShapeNode;
LineSet766: TLineSetNode;
ColorRGBA767: TColorRGBANode;
Coordinate768: TCoordinateNode;
Shape769: TShapeNode;
LineSet770: TLineSetNode;
ColorRGBA771: TColorRGBANode;
Coordinate772: TCoordinateNode;
Shape773: TShapeNode;
LineSet774: TLineSetNode;
ColorRGBA775: TColorRGBANode;
Coordinate776: TCoordinateNode;
HAnimSite777: THAnimSiteNode;
TouchSensor778: TTouchSensorNode;
Shape779: TShapeNode;
HAnimSite780: THAnimSiteNode;
TouchSensor781: TTouchSensorNode;
Shape782: TShapeNode;
HAnimSite783: THAnimSiteNode;
TouchSensor784: TTouchSensorNode;
Shape785: TShapeNode;
HAnimSite786: THAnimSiteNode;
TouchSensor787: TTouchSensorNode;
Shape788: TShapeNode;
HAnimSite789: THAnimSiteNode;
TouchSensor790: TTouchSensorNode;
Shape791: TShapeNode;
HAnimSite792: THAnimSiteNode;
TouchSensor793: TTouchSensorNode;
Shape794: TShapeNode;
HAnimSite795: THAnimSiteNode;
TouchSensor796: TTouchSensorNode;
Shape797: TShapeNode;
HAnimSite798: THAnimSiteNode;
TouchSensor799: TTouchSensorNode;
Shape800: TShapeNode;
HAnimSite801: THAnimSiteNode;
TouchSensor802: TTouchSensorNode;
Shape803: TShapeNode;
HAnimSite804: THAnimSiteNode;
TouchSensor805: TTouchSensorNode;
Shape806: TShapeNode;
HAnimJoint807: THAnimJointNode;
HAnimSegment808: THAnimSegmentNode;
TouchSensor809: TTouchSensorNode;
Transform810: TTransformNode;
Shape811: TShapeNode;
Shape812: TShapeNode;
LineSet813: TLineSetNode;
ColorRGBA814: TColorRGBANode;
Coordinate815: TCoordinateNode;
HAnimSite816: THAnimSiteNode;
TouchSensor817: TTouchSensorNode;
Shape818: TShapeNode;
Viewpoint819: TViewpointNode;
Anchor820: TAnchorNode;
LOD821: TLODNode;
WorldInfo822: TWorldInfoNode;
Shape823: TShapeNode;
Appearance824: TAppearanceNode;
Material825: TMaterialNode;
IndexedFaceSet826: TIndexedFaceSetNode;
Coordinate827: TCoordinateNode;
HAnimJoint828: THAnimJointNode;
HAnimSegment829: THAnimSegmentNode;
TouchSensor830: TTouchSensorNode;
Transform831: TTransformNode;
Shape832: TShapeNode;
HAnimJoint833: THAnimJointNode;
HAnimSegment834: THAnimSegmentNode;
TouchSensor835: TTouchSensorNode;
Transform836: TTransformNode;
Shape837: TShapeNode;
HAnimJoint838: THAnimJointNode;
HAnimSegment839: THAnimSegmentNode;
TouchSensor840: TTouchSensorNode;
Transform841: TTransformNode;
Shape842: TShapeNode;
Shape843: TShapeNode;
LineSet844: TLineSetNode;
ColorRGBA845: TColorRGBANode;
Coordinate846: TCoordinateNode;
HAnimSite847: THAnimSiteNode;
TouchSensor848: TTouchSensorNode;
Shape849: TShapeNode;
Viewpoint850: TViewpointNode;
Anchor851: TAnchorNode;
LOD852: TLODNode;
WorldInfo853: TWorldInfoNode;
Shape854: TShapeNode;
HAnimJoint855: THAnimJointNode;
HAnimSegment856: THAnimSegmentNode;
TouchSensor857: TTouchSensorNode;
Transform858: TTransformNode;
Shape859: TShapeNode;
HAnimJoint860: THAnimJointNode;
HAnimSegment861: THAnimSegmentNode;
TouchSensor862: TTouchSensorNode;
Transform863: TTransformNode;
Shape864: TShapeNode;
HAnimJoint865: THAnimJointNode;
HAnimSegment866: THAnimSegmentNode;
TouchSensor867: TTouchSensorNode;
Transform868: TTransformNode;
Shape869: TShapeNode;
Shape870: TShapeNode;
LineSet871: TLineSetNode;
ColorRGBA872: TColorRGBANode;
Coordinate873: TCoordinateNode;
Shape874: TShapeNode;
LineSet875: TLineSetNode;
ColorRGBA876: TColorRGBANode;
Coordinate877: TCoordinateNode;
HAnimSite878: THAnimSiteNode;
TouchSensor879: TTouchSensorNode;
Shape880: TShapeNode;
HAnimSite881: THAnimSiteNode;
TouchSensor882: TTouchSensorNode;
Shape883: TShapeNode;
HAnimJoint884: THAnimJointNode;
HAnimSegment885: THAnimSegmentNode;
TouchSensor886: TTouchSensorNode;
Transform887: TTransformNode;
Shape888: TShapeNode;
Shape889: TShapeNode;
LineSet890: TLineSetNode;
ColorRGBA891: TColorRGBANode;
Coordinate892: TCoordinateNode;
Shape893: TShapeNode;
LineSet894: TLineSetNode;
ColorRGBA895: TColorRGBANode;
Coordinate896: TCoordinateNode;
Shape897: TShapeNode;
LineSet898: TLineSetNode;
ColorRGBA899: TColorRGBANode;
Coordinate900: TCoordinateNode;
Shape901: TShapeNode;
LineSet902: TLineSetNode;
ColorRGBA903: TColorRGBANode;
Coordinate904: TCoordinateNode;
Shape905: TShapeNode;
LineSet906: TLineSetNode;
ColorRGBA907: TColorRGBANode;
Coordinate908: TCoordinateNode;
HAnimSite909: THAnimSiteNode;
TouchSensor910: TTouchSensorNode;
Shape911: TShapeNode;
HAnimSite912: THAnimSiteNode;
TouchSensor913: TTouchSensorNode;
Shape914: TShapeNode;
HAnimSite915: THAnimSiteNode;
TouchSensor916: TTouchSensorNode;
Shape917: TShapeNode;
HAnimSite918: THAnimSiteNode;
TouchSensor919: TTouchSensorNode;
Shape920: TShapeNode;
HAnimJoint921: THAnimJointNode;
HAnimSegment922: THAnimSegmentNode;
TouchSensor923: TTouchSensorNode;
Transform924: TTransformNode;
Shape925: TShapeNode;
Shape926: TShapeNode;
LineSet927: TLineSetNode;
ColorRGBA928: TColorRGBANode;
Coordinate929: TCoordinateNode;
HAnimJoint930: THAnimJointNode;
HAnimSegment931: THAnimSegmentNode;
TouchSensor932: TTouchSensorNode;
Transform933: TTransformNode;
Shape934: TShapeNode;
Shape935: TShapeNode;
LineSet936: TLineSetNode;
ColorRGBA937: TColorRGBANode;
Coordinate938: TCoordinateNode;
Shape939: TShapeNode;
LineSet940: TLineSetNode;
ColorRGBA941: TColorRGBANode;
Coordinate942: TCoordinateNode;
HAnimSite943: THAnimSiteNode;
TouchSensor944: TTouchSensorNode;
Shape945: TShapeNode;
HAnimJoint946: THAnimJointNode;
HAnimSegment947: THAnimSegmentNode;
TouchSensor948: TTouchSensorNode;
Transform949: TTransformNode;
Shape950: TShapeNode;
Shape951: TShapeNode;
LineSet952: TLineSetNode;
ColorRGBA953: TColorRGBANode;
Coordinate954: TCoordinateNode;
Shape955: TShapeNode;
LineSet956: TLineSetNode;
ColorRGBA957: TColorRGBANode;
Coordinate958: TCoordinateNode;
Shape959: TShapeNode;
LineSet960: TLineSetNode;
ColorRGBA961: TColorRGBANode;
Coordinate962: TCoordinateNode;
Shape963: TShapeNode;
LineSet964: TLineSetNode;
ColorRGBA965: TColorRGBANode;
Coordinate966: TCoordinateNode;
Shape967: TShapeNode;
LineSet968: TLineSetNode;
ColorRGBA969: TColorRGBANode;
Coordinate970: TCoordinateNode;
HAnimSite971: THAnimSiteNode;
TouchSensor972: TTouchSensorNode;
Shape973: TShapeNode;
HAnimSite974: THAnimSiteNode;
TouchSensor975: TTouchSensorNode;
Shape976: TShapeNode;
HAnimSite977: THAnimSiteNode;
TouchSensor978: TTouchSensorNode;
Shape979: TShapeNode;
HAnimSite980: THAnimSiteNode;
TouchSensor981: TTouchSensorNode;
Shape982: TShapeNode;
HAnimJoint983: THAnimJointNode;
HAnimSegment984: THAnimSegmentNode;
TouchSensor985: TTouchSensorNode;
Transform986: TTransformNode;
Shape987: TShapeNode;
Shape988: TShapeNode;
LineSet989: TLineSetNode;
ColorRGBA990: TColorRGBANode;
Coordinate991: TCoordinateNode;
Shape992: TShapeNode;
LineSet993: TLineSetNode;
ColorRGBA994: TColorRGBANode;
Coordinate995: TCoordinateNode;
Shape996: TShapeNode;
LineSet997: TLineSetNode;
ColorRGBA998: TColorRGBANode;
Coordinate999: TCoordinateNode;
Shape1000: TShapeNode;
LineSet1001: TLineSetNode;
ColorRGBA1002: TColorRGBANode;
Coordinate1003: TCoordinateNode;
Shape1004: TShapeNode;
LineSet1005: TLineSetNode;
ColorRGBA1006: TColorRGBANode;
Coordinate1007: TCoordinateNode;
Shape1008: TShapeNode;
LineSet1009: TLineSetNode;
ColorRGBA1010: TColorRGBANode;
Coordinate1011: TCoordinateNode;
Shape1012: TShapeNode;
LineSet1013: TLineSetNode;
ColorRGBA1014: TColorRGBANode;
Coordinate1015: TCoordinateNode;
Shape1016: TShapeNode;
LineSet1017: TLineSetNode;
ColorRGBA1018: TColorRGBANode;
Coordinate1019: TCoordinateNode;
Shape1020: TShapeNode;
LineSet1021: TLineSetNode;
ColorRGBA1022: TColorRGBANode;
Coordinate1023: TCoordinateNode;
HAnimSite1024: THAnimSiteNode;
TouchSensor1025: TTouchSensorNode;
Shape1026: TShapeNode;
HAnimSite1027: THAnimSiteNode;
TouchSensor1028: TTouchSensorNode;
Shape1029: TShapeNode;
HAnimSite1030: THAnimSiteNode;
TouchSensor1031: TTouchSensorNode;
Shape1032: TShapeNode;
HAnimSite1033: THAnimSiteNode;
TouchSensor1034: TTouchSensorNode;
Shape1035: TShapeNode;
Viewpoint1036: TViewpointNode;
Anchor1037: TAnchorNode;
LOD1038: TLODNode;
WorldInfo1039: TWorldInfoNode;
Shape1040: TShapeNode;
HAnimJoint1041: THAnimJointNode;
HAnimSegment1042: THAnimSegmentNode;
TouchSensor1043: TTouchSensorNode;
Transform1044: TTransformNode;
Shape1045: TShapeNode;
Shape1046: TShapeNode;
LineSet1047: TLineSetNode;
ColorRGBA1048: TColorRGBANode;
Coordinate1049: TCoordinateNode;
HAnimJoint1050: THAnimJointNode;
HAnimSegment1051: THAnimSegmentNode;
TouchSensor1052: TTouchSensorNode;
Transform1053: TTransformNode;
Shape1054: TShapeNode;
Shape1055: TShapeNode;
LineSet1056: TLineSetNode;
ColorRGBA1057: TColorRGBANode;
Coordinate1058: TCoordinateNode;
HAnimJoint1059: THAnimJointNode;
HAnimSegment1060: THAnimSegmentNode;
TouchSensor1061: TTouchSensorNode;
Transform1062: TTransformNode;
Shape1063: TShapeNode;
Shape1064: TShapeNode;
LineSet1065: TLineSetNode;
ColorRGBA1066: TColorRGBANode;
Coordinate1067: TCoordinateNode;
HAnimSite1068: THAnimSiteNode;
TouchSensor1069: TTouchSensorNode;
Shape1070: TShapeNode;
HAnimJoint1071: THAnimJointNode;
HAnimSegment1072: THAnimSegmentNode;
TouchSensor1073: TTouchSensorNode;
Transform1074: TTransformNode;
Shape1075: TShapeNode;
Shape1076: TShapeNode;
LineSet1077: TLineSetNode;
ColorRGBA1078: TColorRGBANode;
Coordinate1079: TCoordinateNode;
HAnimJoint1080: THAnimJointNode;
HAnimSegment1081: THAnimSegmentNode;
TouchSensor1082: TTouchSensorNode;
Transform1083: TTransformNode;
Shape1084: TShapeNode;
Shape1085: TShapeNode;
LineSet1086: TLineSetNode;
ColorRGBA1087: TColorRGBANode;
Coordinate1088: TCoordinateNode;
HAnimJoint1089: THAnimJointNode;
HAnimSegment1090: THAnimSegmentNode;
TouchSensor1091: TTouchSensorNode;
Transform1092: TTransformNode;
Shape1093: TShapeNode;
Shape1094: TShapeNode;
LineSet1095: TLineSetNode;
ColorRGBA1096: TColorRGBANode;
Coordinate1097: TCoordinateNode;
HAnimJoint1098: THAnimJointNode;
HAnimSegment1099: THAnimSegmentNode;
TouchSensor1100: TTouchSensorNode;
Transform1101: TTransformNode;
Shape1102: TShapeNode;
Shape1103: TShapeNode;
LineSet1104: TLineSetNode;
ColorRGBA1105: TColorRGBANode;
Coordinate1106: TCoordinateNode;
Shape1107: TShapeNode;
LineSet1108: TLineSetNode;
ColorRGBA1109: TColorRGBANode;
Coordinate1110: TCoordinateNode;
HAnimSite1111: THAnimSiteNode;
TouchSensor1112: TTouchSensorNode;
Shape1113: TShapeNode;
HAnimSite1114: THAnimSiteNode;
TouchSensor1115: TTouchSensorNode;
Shape1116: TShapeNode;
HAnimJoint1117: THAnimJointNode;
HAnimSegment1118: THAnimSegmentNode;
TouchSensor1119: TTouchSensorNode;
Transform1120: TTransformNode;
Shape1121: TShapeNode;
Shape1122: TShapeNode;
LineSet1123: TLineSetNode;
ColorRGBA1124: TColorRGBANode;
Coordinate1125: TCoordinateNode;
HAnimJoint1126: THAnimJointNode;
HAnimSegment1127: THAnimSegmentNode;
TouchSensor1128: TTouchSensorNode;
Transform1129: TTransformNode;
Shape1130: TShapeNode;
Shape1131: TShapeNode;
LineSet1132: TLineSetNode;
ColorRGBA1133: TColorRGBANode;
Coordinate1134: TCoordinateNode;
HAnimJoint1135: THAnimJointNode;
HAnimSegment1136: THAnimSegmentNode;
TouchSensor1137: TTouchSensorNode;
Transform1138: TTransformNode;
Shape1139: TShapeNode;
Shape1140: TShapeNode;
LineSet1141: TLineSetNode;
ColorRGBA1142: TColorRGBANode;
Coordinate1143: TCoordinateNode;
HAnimJoint1144: THAnimJointNode;
HAnimSegment1145: THAnimSegmentNode;
TouchSensor1146: TTouchSensorNode;
Transform1147: TTransformNode;
Shape1148: TShapeNode;
Shape1149: TShapeNode;
LineSet1150: TLineSetNode;
ColorRGBA1151: TColorRGBANode;
Coordinate1152: TCoordinateNode;
HAnimSite1153: THAnimSiteNode;
TouchSensor1154: TTouchSensorNode;
Shape1155: TShapeNode;
HAnimJoint1156: THAnimJointNode;
HAnimSegment1157: THAnimSegmentNode;
TouchSensor1158: TTouchSensorNode;
Transform1159: TTransformNode;
Shape1160: TShapeNode;
Shape1161: TShapeNode;
LineSet1162: TLineSetNode;
ColorRGBA1163: TColorRGBANode;
Coordinate1164: TCoordinateNode;
HAnimJoint1165: THAnimJointNode;
HAnimSegment1166: THAnimSegmentNode;
TouchSensor1167: TTouchSensorNode;
Transform1168: TTransformNode;
Shape1169: TShapeNode;
Shape1170: TShapeNode;
LineSet1171: TLineSetNode;
ColorRGBA1172: TColorRGBANode;
Coordinate1173: TCoordinateNode;
HAnimJoint1174: THAnimJointNode;
HAnimSegment1175: THAnimSegmentNode;
TouchSensor1176: TTouchSensorNode;
Transform1177: TTransformNode;
Shape1178: TShapeNode;
Shape1179: TShapeNode;
LineSet1180: TLineSetNode;
ColorRGBA1181: TColorRGBANode;
Coordinate1182: TCoordinateNode;
HAnimJoint1183: THAnimJointNode;
HAnimSegment1184: THAnimSegmentNode;
TouchSensor1185: TTouchSensorNode;
Transform1186: TTransformNode;
Shape1187: TShapeNode;
Shape1188: TShapeNode;
LineSet1189: TLineSetNode;
ColorRGBA1190: TColorRGBANode;
Coordinate1191: TCoordinateNode;
HAnimSite1192: THAnimSiteNode;
TouchSensor1193: TTouchSensorNode;
Shape1194: TShapeNode;
HAnimJoint1195: THAnimJointNode;
HAnimSegment1196: THAnimSegmentNode;
TouchSensor1197: TTouchSensorNode;
Transform1198: TTransformNode;
Shape1199: TShapeNode;
Shape1200: TShapeNode;
LineSet1201: TLineSetNode;
ColorRGBA1202: TColorRGBANode;
Coordinate1203: TCoordinateNode;
HAnimJoint1204: THAnimJointNode;
HAnimSegment1205: THAnimSegmentNode;
TouchSensor1206: TTouchSensorNode;
Transform1207: TTransformNode;
Shape1208: TShapeNode;
Shape1209: TShapeNode;
LineSet1210: TLineSetNode;
ColorRGBA1211: TColorRGBANode;
Coordinate1212: TCoordinateNode;
HAnimJoint1213: THAnimJointNode;
HAnimSegment1214: THAnimSegmentNode;
TouchSensor1215: TTouchSensorNode;
Transform1216: TTransformNode;
Shape1217: TShapeNode;
Shape1218: TShapeNode;
LineSet1219: TLineSetNode;
ColorRGBA1220: TColorRGBANode;
Coordinate1221: TCoordinateNode;
HAnimJoint1222: THAnimJointNode;
HAnimSegment1223: THAnimSegmentNode;
TouchSensor1224: TTouchSensorNode;
Transform1225: TTransformNode;
Shape1226: TShapeNode;
Shape1227: TShapeNode;
LineSet1228: TLineSetNode;
ColorRGBA1229: TColorRGBANode;
Coordinate1230: TCoordinateNode;
HAnimSite1231: THAnimSiteNode;
TouchSensor1232: TTouchSensorNode;
Shape1233: TShapeNode;
HAnimJoint1234: THAnimJointNode;
HAnimSegment1235: THAnimSegmentNode;
TouchSensor1236: TTouchSensorNode;
Transform1237: TTransformNode;
Shape1238: TShapeNode;
Shape1239: TShapeNode;
LineSet1240: TLineSetNode;
ColorRGBA1241: TColorRGBANode;
Coordinate1242: TCoordinateNode;
Shape1243: TShapeNode;
LineSet1244: TLineSetNode;
ColorRGBA1245: TColorRGBANode;
Coordinate1246: TCoordinateNode;
Shape1247: TShapeNode;
LineSet1248: TLineSetNode;
ColorRGBA1249: TColorRGBANode;
Coordinate1250: TCoordinateNode;
Shape1251: TShapeNode;
LineSet1252: TLineSetNode;
ColorRGBA1253: TColorRGBANode;
Coordinate1254: TCoordinateNode;
Shape1255: TShapeNode;
LineSet1256: TLineSetNode;
ColorRGBA1257: TColorRGBANode;
Coordinate1258: TCoordinateNode;
HAnimSite1259: THAnimSiteNode;
TouchSensor1260: TTouchSensorNode;
Shape1261: TShapeNode;
HAnimSite1262: THAnimSiteNode;
TouchSensor1263: TTouchSensorNode;
Shape1264: TShapeNode;
HAnimSite1265: THAnimSiteNode;
TouchSensor1266: TTouchSensorNode;
Shape1267: TShapeNode;
HAnimSite1268: THAnimSiteNode;
TouchSensor1269: TTouchSensorNode;
Shape1270: TShapeNode;
HAnimJoint1271: THAnimJointNode;
HAnimSegment1272: THAnimSegmentNode;
TouchSensor1273: TTouchSensorNode;
Transform1274: TTransformNode;
Shape1275: TShapeNode;
Shape1276: TShapeNode;
LineSet1277: TLineSetNode;
ColorRGBA1278: TColorRGBANode;
Coordinate1279: TCoordinateNode;
HAnimJoint1280: THAnimJointNode;
HAnimSegment1281: THAnimSegmentNode;
TouchSensor1282: TTouchSensorNode;
Transform1283: TTransformNode;
Shape1284: TShapeNode;
Shape1285: TShapeNode;
LineSet1286: TLineSetNode;
ColorRGBA1287: TColorRGBANode;
Coordinate1288: TCoordinateNode;
Shape1289: TShapeNode;
LineSet1290: TLineSetNode;
ColorRGBA1291: TColorRGBANode;
Coordinate1292: TCoordinateNode;
HAnimSite1293: THAnimSiteNode;
TouchSensor1294: TTouchSensorNode;
Shape1295: TShapeNode;
HAnimJoint1296: THAnimJointNode;
HAnimSegment1297: THAnimSegmentNode;
TouchSensor1298: TTouchSensorNode;
Transform1299: TTransformNode;
Shape1300: TShapeNode;
Shape1301: TShapeNode;
LineSet1302: TLineSetNode;
ColorRGBA1303: TColorRGBANode;
Coordinate1304: TCoordinateNode;
Shape1305: TShapeNode;
LineSet1306: TLineSetNode;
ColorRGBA1307: TColorRGBANode;
Coordinate1308: TCoordinateNode;
Shape1309: TShapeNode;
LineSet1310: TLineSetNode;
ColorRGBA1311: TColorRGBANode;
Coordinate1312: TCoordinateNode;
Shape1313: TShapeNode;
LineSet1314: TLineSetNode;
ColorRGBA1315: TColorRGBANode;
Coordinate1316: TCoordinateNode;
Shape1317: TShapeNode;
LineSet1318: TLineSetNode;
ColorRGBA1319: TColorRGBANode;
Coordinate1320: TCoordinateNode;
HAnimSite1321: THAnimSiteNode;
TouchSensor1322: TTouchSensorNode;
Shape1323: TShapeNode;
HAnimSite1324: THAnimSiteNode;
TouchSensor1325: TTouchSensorNode;
Shape1326: TShapeNode;
HAnimSite1327: THAnimSiteNode;
TouchSensor1328: TTouchSensorNode;
Shape1329: TShapeNode;
HAnimSite1330: THAnimSiteNode;
TouchSensor1331: TTouchSensorNode;
Shape1332: TShapeNode;
HAnimJoint1333: THAnimJointNode;
HAnimSegment1334: THAnimSegmentNode;
TouchSensor1335: TTouchSensorNode;
Transform1336: TTransformNode;
Shape1337: TShapeNode;
Shape1338: TShapeNode;
LineSet1339: TLineSetNode;
ColorRGBA1340: TColorRGBANode;
Coordinate1341: TCoordinateNode;
Shape1342: TShapeNode;
LineSet1343: TLineSetNode;
ColorRGBA1344: TColorRGBANode;
Coordinate1345: TCoordinateNode;
Shape1346: TShapeNode;
LineSet1347: TLineSetNode;
ColorRGBA1348: TColorRGBANode;
Coordinate1349: TCoordinateNode;
Shape1350: TShapeNode;
LineSet1351: TLineSetNode;
ColorRGBA1352: TColorRGBANode;
Coordinate1353: TCoordinateNode;
Shape1354: TShapeNode;
LineSet1355: TLineSetNode;
ColorRGBA1356: TColorRGBANode;
Coordinate1357: TCoordinateNode;
Shape1358: TShapeNode;
LineSet1359: TLineSetNode;
ColorRGBA1360: TColorRGBANode;
Coordinate1361: TCoordinateNode;
Shape1362: TShapeNode;
LineSet1363: TLineSetNode;
ColorRGBA1364: TColorRGBANode;
Coordinate1365: TCoordinateNode;
Shape1366: TShapeNode;
LineSet1367: TLineSetNode;
ColorRGBA1368: TColorRGBANode;
Coordinate1369: TCoordinateNode;
Shape1370: TShapeNode;
LineSet1371: TLineSetNode;
ColorRGBA1372: TColorRGBANode;
Coordinate1373: TCoordinateNode;
HAnimSite1374: THAnimSiteNode;
TouchSensor1375: TTouchSensorNode;
Shape1376: TShapeNode;
HAnimSite1377: THAnimSiteNode;
TouchSensor1378: TTouchSensorNode;
Shape1379: TShapeNode;
HAnimSite1380: THAnimSiteNode;
TouchSensor1381: TTouchSensorNode;
Shape1382: TShapeNode;
HAnimSite1383: THAnimSiteNode;
TouchSensor1384: TTouchSensorNode;
Shape1385: TShapeNode;
Viewpoint1386: TViewpointNode;
Anchor1387: TAnchorNode;
LOD1388: TLODNode;
WorldInfo1389: TWorldInfoNode;
Shape1390: TShapeNode;
HAnimJoint1391: THAnimJointNode;
HAnimSegment1392: THAnimSegmentNode;
TouchSensor1393: TTouchSensorNode;
Transform1394: TTransformNode;
Shape1395: TShapeNode;
Shape1396: TShapeNode;
LineSet1397: TLineSetNode;
ColorRGBA1398: TColorRGBANode;
Coordinate1399: TCoordinateNode;
HAnimJoint1400: THAnimJointNode;
HAnimSegment1401: THAnimSegmentNode;
TouchSensor1402: TTouchSensorNode;
Transform1403: TTransformNode;
Shape1404: TShapeNode;
Shape1405: TShapeNode;
LineSet1406: TLineSetNode;
ColorRGBA1407: TColorRGBANode;
Coordinate1408: TCoordinateNode;
HAnimJoint1409: THAnimJointNode;
HAnimSegment1410: THAnimSegmentNode;
TouchSensor1411: TTouchSensorNode;
Transform1412: TTransformNode;
Shape1413: TShapeNode;
Shape1414: TShapeNode;
LineSet1415: TLineSetNode;
ColorRGBA1416: TColorRGBANode;
Coordinate1417: TCoordinateNode;
HAnimSite1418: THAnimSiteNode;
TouchSensor1419: TTouchSensorNode;
Shape1420: TShapeNode;
HAnimJoint1421: THAnimJointNode;
HAnimSegment1422: THAnimSegmentNode;
TouchSensor1423: TTouchSensorNode;
Transform1424: TTransformNode;
Shape1425: TShapeNode;
Shape1426: TShapeNode;
LineSet1427: TLineSetNode;
ColorRGBA1428: TColorRGBANode;
Coordinate1429: TCoordinateNode;
HAnimJoint1430: THAnimJointNode;
HAnimSegment1431: THAnimSegmentNode;
TouchSensor1432: TTouchSensorNode;
Transform1433: TTransformNode;
Shape1434: TShapeNode;
Shape1435: TShapeNode;
LineSet1436: TLineSetNode;
ColorRGBA1437: TColorRGBANode;
Coordinate1438: TCoordinateNode;
HAnimJoint1439: THAnimJointNode;
HAnimSegment1440: THAnimSegmentNode;
TouchSensor1441: TTouchSensorNode;
Transform1442: TTransformNode;
Shape1443: TShapeNode;
Shape1444: TShapeNode;
LineSet1445: TLineSetNode;
ColorRGBA1446: TColorRGBANode;
Coordinate1447: TCoordinateNode;
HAnimJoint1448: THAnimJointNode;
HAnimSegment1449: THAnimSegmentNode;
TouchSensor1450: TTouchSensorNode;
Transform1451: TTransformNode;
Shape1452: TShapeNode;
Shape1453: TShapeNode;
LineSet1454: TLineSetNode;
ColorRGBA1455: TColorRGBANode;
Coordinate1456: TCoordinateNode;
Shape1457: TShapeNode;
LineSet1458: TLineSetNode;
ColorRGBA1459: TColorRGBANode;
Coordinate1460: TCoordinateNode;
HAnimSite1461: THAnimSiteNode;
TouchSensor1462: TTouchSensorNode;
Shape1463: TShapeNode;
HAnimSite1464: THAnimSiteNode;
TouchSensor1465: TTouchSensorNode;
Shape1466: TShapeNode;
HAnimJoint1467: THAnimJointNode;
HAnimSegment1468: THAnimSegmentNode;
TouchSensor1469: TTouchSensorNode;
Transform1470: TTransformNode;
Shape1471: TShapeNode;
Shape1472: TShapeNode;
LineSet1473: TLineSetNode;
ColorRGBA1474: TColorRGBANode;
Coordinate1475: TCoordinateNode;
HAnimJoint1476: THAnimJointNode;
HAnimSegment1477: THAnimSegmentNode;
TouchSensor1478: TTouchSensorNode;
Transform1479: TTransformNode;
Shape1480: TShapeNode;
Shape1481: TShapeNode;
LineSet1482: TLineSetNode;
ColorRGBA1483: TColorRGBANode;
Coordinate1484: TCoordinateNode;
HAnimJoint1485: THAnimJointNode;
HAnimSegment1486: THAnimSegmentNode;
TouchSensor1487: TTouchSensorNode;
Transform1488: TTransformNode;
Shape1489: TShapeNode;
Shape1490: TShapeNode;
LineSet1491: TLineSetNode;
ColorRGBA1492: TColorRGBANode;
Coordinate1493: TCoordinateNode;
HAnimJoint1494: THAnimJointNode;
HAnimSegment1495: THAnimSegmentNode;
TouchSensor1496: TTouchSensorNode;
Transform1497: TTransformNode;
Shape1498: TShapeNode;
Shape1499: TShapeNode;
LineSet1500: TLineSetNode;
ColorRGBA1501: TColorRGBANode;
Coordinate1502: TCoordinateNode;
HAnimSite1503: THAnimSiteNode;
TouchSensor1504: TTouchSensorNode;
Shape1505: TShapeNode;
HAnimJoint1506: THAnimJointNode;
HAnimSegment1507: THAnimSegmentNode;
TouchSensor1508: TTouchSensorNode;
Transform1509: TTransformNode;
Shape1510: TShapeNode;
Shape1511: TShapeNode;
LineSet1512: TLineSetNode;
ColorRGBA1513: TColorRGBANode;
Coordinate1514: TCoordinateNode;
HAnimJoint1515: THAnimJointNode;
HAnimSegment1516: THAnimSegmentNode;
TouchSensor1517: TTouchSensorNode;
Transform1518: TTransformNode;
Shape1519: TShapeNode;
Shape1520: TShapeNode;
LineSet1521: TLineSetNode;
ColorRGBA1522: TColorRGBANode;
Coordinate1523: TCoordinateNode;
HAnimJoint1524: THAnimJointNode;
HAnimSegment1525: THAnimSegmentNode;
TouchSensor1526: TTouchSensorNode;
Transform1527: TTransformNode;
Shape1528: TShapeNode;
Shape1529: TShapeNode;
LineSet1530: TLineSetNode;
ColorRGBA1531: TColorRGBANode;
Coordinate1532: TCoordinateNode;
HAnimJoint1533: THAnimJointNode;
HAnimSegment1534: THAnimSegmentNode;
TouchSensor1535: TTouchSensorNode;
Transform1536: TTransformNode;
Shape1537: TShapeNode;
Shape1538: TShapeNode;
LineSet1539: TLineSetNode;
ColorRGBA1540: TColorRGBANode;
Coordinate1541: TCoordinateNode;
HAnimSite1542: THAnimSiteNode;
TouchSensor1543: TTouchSensorNode;
Shape1544: TShapeNode;
HAnimJoint1545: THAnimJointNode;
HAnimSegment1546: THAnimSegmentNode;
TouchSensor1547: TTouchSensorNode;
Transform1548: TTransformNode;
Shape1549: TShapeNode;
Shape1550: TShapeNode;
LineSet1551: TLineSetNode;
ColorRGBA1552: TColorRGBANode;
Coordinate1553: TCoordinateNode;
HAnimJoint1554: THAnimJointNode;
HAnimSegment1555: THAnimSegmentNode;
TouchSensor1556: TTouchSensorNode;
Transform1557: TTransformNode;
Shape1558: TShapeNode;
Shape1559: TShapeNode;
LineSet1560: TLineSetNode;
ColorRGBA1561: TColorRGBANode;
Coordinate1562: TCoordinateNode;
HAnimJoint1563: THAnimJointNode;
HAnimSegment1564: THAnimSegmentNode;
TouchSensor1565: TTouchSensorNode;
Transform1566: TTransformNode;
Shape1567: TShapeNode;
Shape1568: TShapeNode;
LineSet1569: TLineSetNode;
ColorRGBA1570: TColorRGBANode;
Coordinate1571: TCoordinateNode;
HAnimJoint1572: THAnimJointNode;
HAnimSegment1573: THAnimSegmentNode;
TouchSensor1574: TTouchSensorNode;
Transform1575: TTransformNode;
Shape1576: TShapeNode;
Shape1577: TShapeNode;
LineSet1578: TLineSetNode;
ColorRGBA1579: TColorRGBANode;
Coordinate1580: TCoordinateNode;
HAnimSite1581: THAnimSiteNode;
TouchSensor1582: TTouchSensorNode;
Shape1583: TShapeNode;
HAnimJoint1584: THAnimJointNode;
HAnimJoint1585: THAnimJointNode;
HAnimJoint1586: THAnimJointNode;
HAnimJoint1587: THAnimJointNode;
HAnimJoint1588: THAnimJointNode;
HAnimJoint1589: THAnimJointNode;
HAnimJoint1590: THAnimJointNode;
HAnimJoint1591: THAnimJointNode;
HAnimJoint1592: THAnimJointNode;
HAnimJoint1593: THAnimJointNode;
HAnimJoint1594: THAnimJointNode;
HAnimJoint1595: THAnimJointNode;
HAnimJoint1596: THAnimJointNode;
HAnimJoint1597: THAnimJointNode;
HAnimJoint1598: THAnimJointNode;
HAnimJoint1599: THAnimJointNode;
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
HAnimSegment1678: THAnimSegmentNode;
HAnimSegment1679: THAnimSegmentNode;
HAnimSegment1680: THAnimSegmentNode;
HAnimSegment1681: THAnimSegmentNode;
HAnimSegment1682: THAnimSegmentNode;
HAnimSegment1683: THAnimSegmentNode;
HAnimSegment1684: THAnimSegmentNode;
HAnimSegment1685: THAnimSegmentNode;
HAnimSegment1686: THAnimSegmentNode;
HAnimSegment1687: THAnimSegmentNode;
HAnimSegment1688: THAnimSegmentNode;
HAnimSegment1689: THAnimSegmentNode;
HAnimSegment1690: THAnimSegmentNode;
HAnimSegment1691: THAnimSegmentNode;
HAnimSegment1692: THAnimSegmentNode;
HAnimSegment1693: THAnimSegmentNode;
HAnimSegment1694: THAnimSegmentNode;
HAnimSegment1695: THAnimSegmentNode;
HAnimSegment1696: THAnimSegmentNode;
HAnimSegment1697: THAnimSegmentNode;
HAnimSegment1698: THAnimSegmentNode;
HAnimSegment1699: THAnimSegmentNode;
HAnimSegment1700: THAnimSegmentNode;
HAnimSegment1701: THAnimSegmentNode;
HAnimSegment1702: THAnimSegmentNode;
HAnimSegment1703: THAnimSegmentNode;
HAnimSegment1704: THAnimSegmentNode;
HAnimSegment1705: THAnimSegmentNode;
HAnimSegment1706: THAnimSegmentNode;
HAnimSegment1707: THAnimSegmentNode;
HAnimSegment1708: THAnimSegmentNode;
HAnimSegment1709: THAnimSegmentNode;
HAnimSegment1710: THAnimSegmentNode;
HAnimSegment1711: THAnimSegmentNode;
HAnimSegment1712: THAnimSegmentNode;
HAnimSegment1713: THAnimSegmentNode;
HAnimSegment1714: THAnimSegmentNode;
HAnimSegment1715: THAnimSegmentNode;
HAnimSegment1716: THAnimSegmentNode;
HAnimSegment1717: THAnimSegmentNode;
HAnimSegment1718: THAnimSegmentNode;
HAnimSegment1719: THAnimSegmentNode;
HAnimSegment1720: THAnimSegmentNode;
HAnimSegment1721: THAnimSegmentNode;
HAnimSegment1722: THAnimSegmentNode;
HAnimSegment1723: THAnimSegmentNode;
HAnimSegment1724: THAnimSegmentNode;
HAnimSegment1725: THAnimSegmentNode;
HAnimSegment1726: THAnimSegmentNode;
HAnimSegment1727: THAnimSegmentNode;
HAnimSegment1728: THAnimSegmentNode;
HAnimSegment1729: THAnimSegmentNode;
HAnimSegment1730: THAnimSegmentNode;
HAnimSegment1731: THAnimSegmentNode;
HAnimSegment1732: THAnimSegmentNode;
HAnimSegment1733: THAnimSegmentNode;
HAnimSegment1734: THAnimSegmentNode;
HAnimSegment1735: THAnimSegmentNode;
HAnimSegment1736: THAnimSegmentNode;
HAnimSegment1737: THAnimSegmentNode;
HAnimSegment1738: THAnimSegmentNode;
HAnimSegment1739: THAnimSegmentNode;
HAnimSegment1740: THAnimSegmentNode;
HAnimSegment1741: THAnimSegmentNode;
HAnimSegment1742: THAnimSegmentNode;
HAnimSegment1743: THAnimSegmentNode;
HAnimSegment1744: THAnimSegmentNode;
HAnimSegment1745: THAnimSegmentNode;
HAnimSegment1746: THAnimSegmentNode;
HAnimSegment1747: THAnimSegmentNode;
HAnimSegment1748: THAnimSegmentNode;
HAnimSegment1749: THAnimSegmentNode;
HAnimSegment1750: THAnimSegmentNode;
HAnimSegment1751: THAnimSegmentNode;
HAnimSegment1752: THAnimSegmentNode;
HAnimSegment1753: THAnimSegmentNode;
HAnimSegment1754: THAnimSegmentNode;
HAnimSegment1755: THAnimSegmentNode;
HAnimSegment1756: THAnimSegmentNode;
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
HAnimSite1772: THAnimSiteNode;
HAnimSite1773: THAnimSiteNode;
HAnimSite1774: THAnimSiteNode;
HAnimSite1775: THAnimSiteNode;
HAnimSite1776: THAnimSiteNode;
HAnimSite1777: THAnimSiteNode;
HAnimSite1778: THAnimSiteNode;
HAnimSite1779: THAnimSiteNode;
HAnimSite1780: THAnimSiteNode;
HAnimSite1781: THAnimSiteNode;
HAnimSite1782: THAnimSiteNode;
HAnimSite1783: THAnimSiteNode;
HAnimSite1784: THAnimSiteNode;
HAnimSite1785: THAnimSiteNode;
HAnimSite1786: THAnimSiteNode;
HAnimSite1787: THAnimSiteNode;
HAnimSite1788: THAnimSiteNode;
HAnimSite1789: THAnimSiteNode;
HAnimSite1790: THAnimSiteNode;
HAnimSite1791: THAnimSiteNode;
HAnimSite1792: THAnimSiteNode;
HAnimSite1793: THAnimSiteNode;
HAnimSite1794: THAnimSiteNode;
HAnimSite1795: THAnimSiteNode;
HAnimSite1796: THAnimSiteNode;
HAnimSite1797: THAnimSiteNode;
HAnimSite1798: THAnimSiteNode;
HAnimSite1799: THAnimSiteNode;
HAnimSite1800: THAnimSiteNode;
HAnimSite1801: THAnimSiteNode;
HAnimSite1802: THAnimSiteNode;
HAnimSite1803: THAnimSiteNode;
HAnimSite1804: THAnimSiteNode;
HAnimSite1805: THAnimSiteNode;
HAnimSite1806: THAnimSiteNode;
HAnimSite1807: THAnimSiteNode;
HAnimSite1808: THAnimSiteNode;
HAnimSite1809: THAnimSiteNode;
HAnimSite1810: THAnimSiteNode;
HAnimSite1811: THAnimSiteNode;
HAnimSite1812: THAnimSiteNode;
HAnimSite1813: THAnimSiteNode;
HAnimSite1814: THAnimSiteNode;
HAnimSite1815: THAnimSiteNode;
HAnimSite1816: THAnimSiteNode;
HAnimSite1817: THAnimSiteNode;
HAnimSite1818: THAnimSiteNode;
HAnimSite1819: THAnimSiteNode;
HAnimSite1820: THAnimSiteNode;
HAnimSite1821: THAnimSiteNode;
HAnimSite1822: THAnimSiteNode;
HAnimSite1823: THAnimSiteNode;
HAnimSite1824: THAnimSiteNode;
HAnimSite1825: THAnimSiteNode;
HAnimSite1826: THAnimSiteNode;
HAnimSite1827: THAnimSiteNode;
HAnimSite1828: THAnimSiteNode;
HAnimSite1829: THAnimSiteNode;
HAnimSite1830: THAnimSiteNode;
HAnimSite1831: THAnimSiteNode;
HAnimSite1832: THAnimSiteNode;
HAnimSite1833: THAnimSiteNode;
HAnimSite1834: THAnimSiteNode;
HAnimSite1835: THAnimSiteNode;
HAnimSite1836: THAnimSiteNode;
HAnimSite1837: THAnimSiteNode;
HAnimSite1838: THAnimSiteNode;
HAnimSite1839: THAnimSiteNode;
HAnimSite1840: THAnimSiteNode;
HAnimSite1841: THAnimSiteNode;
HAnimSite1842: THAnimSiteNode;
HAnimSite1843: THAnimSiteNode;
HAnimSite1844: THAnimSiteNode;
HAnimSite1845: THAnimSiteNode;
HAnimSite1846: THAnimSiteNode;
HAnimSite1847: THAnimSiteNode;
HAnimSite1848: THAnimSiteNode;
HAnimSite1849: THAnimSiteNode;
HAnimSite1850: THAnimSiteNode;
HAnimSite1851: THAnimSiteNode;
HAnimSite1852: THAnimSiteNode;
HAnimSite1853: THAnimSiteNode;
HAnimSite1854: THAnimSiteNode;
HAnimSite1855: THAnimSiteNode;
HAnimSite1856: THAnimSiteNode;
HAnimSite1857: THAnimSiteNode;
HAnimSite1858: THAnimSiteNode;
HAnimSite1859: THAnimSiteNode;
HAnimSite1860: THAnimSiteNode;
HAnimSite1861: THAnimSiteNode;
HAnimSite1862: THAnimSiteNode;
HAnimSite1863: THAnimSiteNode;
TouchSensor1864: TTouchSensorNode;
Shape1865: TShapeNode;
Viewpoint1866: TViewpointNode;
Anchor1867: TAnchorNode;
LOD1868: TLODNode;
WorldInfo1869: TWorldInfoNode;
Shape1870: TShapeNode;
HAnimSite1871: THAnimSiteNode;
TouchSensor1872: TTouchSensorNode;
Shape1873: TShapeNode;
Viewpoint1874: TViewpointNode;
Anchor1875: TAnchorNode;
LOD1876: TLODNode;
WorldInfo1877: TWorldInfoNode;
Shape1878: TShapeNode;
HAnimSite1879: THAnimSiteNode;
TouchSensor1880: TTouchSensorNode;
Shape1881: TShapeNode;
Viewpoint1882: TViewpointNode;
Anchor1883: TAnchorNode;
LOD1884: TLODNode;
WorldInfo1885: TWorldInfoNode;
Shape1886: TShapeNode;
HAnimSite1887: THAnimSiteNode;
TouchSensor1888: TTouchSensorNode;
Shape1889: TShapeNode;
Viewpoint1890: TViewpointNode;
Anchor1891: TAnchorNode;
LOD1892: TLODNode;
WorldInfo1893: TWorldInfoNode;
Shape1894: TShapeNode;
HAnimSite1895: THAnimSiteNode;
TouchSensor1896: TTouchSensorNode;
Shape1897: TShapeNode;
Viewpoint1898: TViewpointNode;
Anchor1899: TAnchorNode;
LOD1900: TLODNode;
WorldInfo1901: TWorldInfoNode;
Shape1902: TShapeNode;
HAnimSite1903: THAnimSiteNode;
TouchSensor1904: TTouchSensorNode;
Shape1905: TShapeNode;
Viewpoint1906: TViewpointNode;
Anchor1907: TAnchorNode;
LOD1908: TLODNode;
WorldInfo1909: TWorldInfoNode;
Shape1910: TShapeNode;
HAnimSite1911: THAnimSiteNode;
TouchSensor1912: TTouchSensorNode;
Shape1913: TShapeNode;
Viewpoint1914: TViewpointNode;
Anchor1915: TAnchorNode;
LOD1916: TLODNode;
WorldInfo1917: TWorldInfoNode;
Shape1918: TShapeNode;
HAnimSite1919: THAnimSiteNode;
TouchSensor1920: TTouchSensorNode;
Shape1921: TShapeNode;
Viewpoint1922: TViewpointNode;
Anchor1923: TAnchorNode;
LOD1924: TLODNode;
WorldInfo1925: TWorldInfoNode;
Shape1926: TShapeNode;
HAnimSite1927: THAnimSiteNode;
TouchSensor1928: TTouchSensorNode;
Shape1929: TShapeNode;
Viewpoint1930: TViewpointNode;
Anchor1931: TAnchorNode;
LOD1932: TLODNode;
WorldInfo1933: TWorldInfoNode;
Shape1934: TShapeNode;
HAnimSite1935: THAnimSiteNode;
TouchSensor1936: TTouchSensorNode;
Shape1937: TShapeNode;
Viewpoint1938: TViewpointNode;
Anchor1939: TAnchorNode;
LOD1940: TLODNode;
WorldInfo1941: TWorldInfoNode;
Shape1942: TShapeNode;
HAnimSite1943: THAnimSiteNode;
TouchSensor1944: TTouchSensorNode;
Shape1945: TShapeNode;
Viewpoint1946: TViewpointNode;
Anchor1947: TAnchorNode;
LOD1948: TLODNode;
WorldInfo1949: TWorldInfoNode;
Shape1950: TShapeNode;
HAnimSite1951: THAnimSiteNode;
TouchSensor1952: TTouchSensorNode;
Shape1953: TShapeNode;
Viewpoint1954: TViewpointNode;
Anchor1955: TAnchorNode;
LOD1956: TLODNode;
WorldInfo1957: TWorldInfoNode;
Shape1958: TShapeNode;
HAnimSite1959: THAnimSiteNode;
TouchSensor1960: TTouchSensorNode;
Shape1961: TShapeNode;
Viewpoint1962: TViewpointNode;
Anchor1963: TAnchorNode;
LOD1964: TLODNode;
WorldInfo1965: TWorldInfoNode;
Shape1966: TShapeNode;
HAnimSite1967: THAnimSiteNode;
TouchSensor1968: TTouchSensorNode;
Shape1969: TShapeNode;
Viewpoint1970: TViewpointNode;
Anchor1971: TAnchorNode;
LOD1972: TLODNode;
WorldInfo1973: TWorldInfoNode;
Shape1974: TShapeNode;
HAnimSite1975: THAnimSiteNode;
HAnimSite1976: THAnimSiteNode;
HAnimSite1977: THAnimSiteNode;
HAnimSite1978: THAnimSiteNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnimSpecificationLOA3Illustrated.x3d';
X3D0.Meta['description'] := 'HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds';
X3D0.Meta['reference'] := 'HAnimSpecificationLOA3Invisible.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationLOA3Animation.x3d';
X3D0.Meta['reference'] := 'HAnimSpecificationExampleChangeLog.txt';
X3D0.Meta['reference'] := 'Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.';
X3D0.Meta['reference'] := 'http://www.cis.upenn.edu/~badler/anthro/89-71.ps';
X3D0.Meta['reference'] := 'tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.wrl';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginal.x3d';
X3D0.Meta['reference'] := 'originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d';
X3D0.Meta['reference'] := 'HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames';
X3D0.Meta['created'] := '24 April 2013';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:39:08 GMT';
X3D0.Meta['error'] := 'Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported';
X3D0.Meta['creator'] := 'Matthew T. Beitler, Joe D. Williams, Don Brutzman';
X3D0.Meta['Image'] := 'HAnimSpecificationLOA3Illustrated.png';
X3D0.Meta['Image'] := 'HAnimSpecificationLOA3IllustratedLeftSide.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA1.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA2.png';
X3D0.Meta['Image'] := 'images/BonesAllSkeletonFrontViewLOA3.png';
X3D0.Meta['TODO'] := 'move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations';
X3D0.Meta['TODO'] := 'insert MetadataInteger nodes indicating LOA for each Joint and Segment';
X3D0.Meta['warning'] := 'BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK';
X3D0.Meta['translator'] := 'Don Brutzman and Joe Williams';
X3D0.Meta['generator'] := 'BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
Group31 := TGroupNode.Create;
Background32 := TBackgroundNode.Create;
Background32.SetSkyColor([Vector3(0.3,0.3,0.3)]);
{ .AddChildren }
Group31.AddChildren([Background32]);
NavigationInfo33 := TNavigationInfoNode.Create;
{ .AddChildren }
Group31.AddChildren([NavigationInfo33]);
Group34 := TGroupNode.Create;
WorldInfo35 := TWorldInfoNode.Create;
WorldInfo35.Title := 'HANIM 200x Default Joint Centers, LOA3';
WorldInfo35.SetInfo([' HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ']);
{ .AddChildren }
Group34.AddChildren([WorldInfo35]);
{ .AddChildren }
Group31.AddChildren([Group34]);
Viewpoint36 := TViewpointNode.Create;
Viewpoint36.Description := 'Humanoid LOA 3 Front';
Viewpoint36.Position := Vector3(0,0.4,4);
Viewpoint36.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'Humanoid LOA 3 Front Close';
Viewpoint37.Position := Vector3(0,0.8,2);
Viewpoint37.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint37]);
Viewpoint38 := TViewpointNode.Create;
Viewpoint38.Description := 'Humanoid LOA 3 Front Closer';
Viewpoint38.Position := Vector3(0,1.2,1);
Viewpoint38.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint38]);
Viewpoint39 := TViewpointNode.Create;
Viewpoint39.Description := 'Humanoid LOA 3 Front Face';
Viewpoint39.Position := Vector3(0,1.63,1);
Viewpoint39.CenterOfRotation := Vector3(0,1.5,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint39]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Humanoid LOA 3 Right Side';
Viewpoint40.Position := Vector3(2.6,0.8,0);
Viewpoint40.Orientation := Vector4(0,1,0,1.5708);
Viewpoint40.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint40]);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'Humanoid LOA 3 Right Side Close';
Viewpoint41.Position := Vector3(1,0.8,0.5);
Viewpoint41.Orientation := Vector4(0,1,0,1.2);
Viewpoint41.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint41]);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'Humanoid LOA 3 Left Side Close';
Viewpoint42.Position := Vector3(-1,0.8,0.5);
Viewpoint42.Orientation := Vector4(0,1,0,-1.2);
Viewpoint42.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint42]);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'Humanoid LOA 3 Left Side';
Viewpoint43.Position := Vector3(-2.6,0.8,0);
Viewpoint43.Orientation := Vector4(0,1,0,-1.5708);
Viewpoint43.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint43]);
Viewpoint44 := TViewpointNode.Create;
Viewpoint44.Description := 'Humanoid LOA 3 Top';
Viewpoint44.Position := Vector3(0,3.5,0);
Viewpoint44.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint44.CenterOfRotation := Vector3(0,0.9149,0.0016);
{ .AddChildren }
Group31.AddChildren([Viewpoint44]);
HAnimHumanoid45 := THAnimHumanoidNode.Create;
HAnimHumanoid45.NameField := 'humanoid';
HAnimHumanoid45.SetInfo(['authorName=Matthew T. Beitler Joe D. Williams Don Brutzman','authorEmail=HAnim@web3D.org','copyright=none','creationDate=12 May 1999','usageRestrictions=none','humanoidVersion=2.0','height=1.7504']);
HAnimHumanoid45.Version := '1.0';
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.NameField := 'humanoid_root';
HAnimJoint46.Center := Vector3(0,0.824,0.0277);
HAnimSegment47 := THAnimSegmentNode.Create;
HAnimSegment47.NameField := 'sacrum';
TouchSensor48 := TTouchSensorNode.Create;
TouchSensor48.Description := 'HAnimJoint HumanoidRoot, HAnimSegment sacrum';
{ .AddChildren }
HAnimSegment47.AddChildren([TouchSensor48]);
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0.824,0.0277);
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(1,0.5,0);
Material52.Transparency := 0.5;
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
Sphere53 := TSphereNode.Create;
Sphere53.Radius := 0.006;
{ .SetGeometry }
Shape50.Geometry := Sphere53;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
HAnimSegment47.AddChildren([Transform49]);
Shape54 := TShapeNode.Create;
LineSet55 := TLineSetNode.Create;
LineSet55.SetVertexCount([2]);
ColorRGBA56 := TColorRGBANode.Create;
ColorRGBA56.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet55.Color := ColorRGBA56;
Coordinate57 := TCoordinateNode.Create;
Coordinate57.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
LineSet55.Coord := Coordinate57;
{ .SetGeometry }
Shape54.Geometry := LineSet55;
{ .AddChildren }
HAnimSegment47.AddChildren([Shape54]);
Shape58 := TShapeNode.Create;
LineSet59 := TLineSetNode.Create;
LineSet59.SetVertexCount([2]);
ColorRGBA60 := TColorRGBANode.Create;
ColorRGBA60 := ColorRGBA56;
{ .SetColor }
LineSet59.Color := ColorRGBA60;
Coordinate61 := TCoordinateNode.Create;
Coordinate61.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ .SetCoord }
LineSet59.Coord := Coordinate61;
{ .SetGeometry }
Shape58.Geometry := LineSet59;
{ .AddChildren }
HAnimSegment47.AddChildren([Shape58]);
{ .AddChildren }
HAnimJoint46.AddChildren([HAnimSegment47]);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'sacroiliac';
HAnimJoint62.Center := Vector3(0,0.9149,0.0016);
HAnimSegment63 := THAnimSegmentNode.Create;
HAnimSegment63.NameField := 'pelvis';
TouchSensor64 := TTouchSensorNode.Create;
TouchSensor64.Description := 'HAnimJoint sacroiliac, HAnimSegment pelvis';
{ .AddChildren }
HAnimSegment63.AddChildren([TouchSensor64]);
Transform65 := TTransformNode.Create;
Transform65.Translation := Vector3(0,0.9149,0.0016);
Shape66 := TShapeNode.Create;
Shape66 := Shape50;
{ .AddChild }
Transform65.AddChildren([Shape66]);
{ .AddChildren }
HAnimSegment63.AddChildren([Transform65]);
Shape67 := TShapeNode.Create;
LineSet68 := TLineSetNode.Create;
LineSet68.SetVertexCount([2]);
ColorRGBA69 := TColorRGBANode.Create;
ColorRGBA69 := ColorRGBA56;
{ .SetColor }
LineSet68.Color := ColorRGBA69;
Coordinate70 := TCoordinateNode.Create;
Coordinate70.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet68.Coord := Coordinate70;
{ .SetGeometry }
Shape67.Geometry := LineSet68;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape67]);
Shape71 := TShapeNode.Create;
LineSet72 := TLineSetNode.Create;
LineSet72.SetVertexCount([2]);
ColorRGBA73 := TColorRGBANode.Create;
ColorRGBA73 := ColorRGBA56;
{ .SetColor }
LineSet72.Color := ColorRGBA73;
Coordinate74 := TCoordinateNode.Create;
Coordinate74.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet72.Coord := Coordinate74;
{ .SetGeometry }
Shape71.Geometry := LineSet72;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape71]);
Shape75 := TShapeNode.Create;
LineSet76 := TLineSetNode.Create;
LineSet76.SetVertexCount([2]);
ColorRGBA77 := TColorRGBANode.Create;
ColorRGBA77.SetColor([Vector4(1,0,0,1),Vector4(1,0,0,0.1)]);
{ .SetColor }
LineSet76.Color := ColorRGBA77;
Coordinate78 := TCoordinateNode.Create;
Coordinate78.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.1525,1.0628,0.0035)]);
{ .SetCoord }
LineSet76.Coord := Coordinate78;
{ .SetGeometry }
Shape75.Geometry := LineSet76;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape75]);
Shape79 := TShapeNode.Create;
LineSet80 := TLineSetNode.Create;
LineSet80.SetVertexCount([2]);
ColorRGBA81 := TColorRGBANode.Create;
ColorRGBA81 := ColorRGBA77;
{ .SetColor }
LineSet80.Color := ColorRGBA81;
Coordinate82 := TCoordinateNode.Create;
Coordinate82.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.1689,0.8419,0.0352)]);
{ .SetCoord }
LineSet80.Coord := Coordinate82;
{ .SetGeometry }
Shape79.Geometry := LineSet80;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape79]);
Shape83 := TShapeNode.Create;
LineSet84 := TLineSetNode.Create;
LineSet84.SetVertexCount([2]);
ColorRGBA85 := TColorRGBANode.Create;
ColorRGBA85 := ColorRGBA77;
{ .SetColor }
LineSet84.Color := ColorRGBA85;
Coordinate86 := TCoordinateNode.Create;
Coordinate86.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.1612,1.0537,0.0008)]);
{ .SetCoord }
LineSet84.Coord := Coordinate86;
{ .SetGeometry }
Shape83.Geometry := LineSet84;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape83]);
Shape87 := TShapeNode.Create;
LineSet88 := TLineSetNode.Create;
LineSet88.SetVertexCount([2]);
ColorRGBA89 := TColorRGBANode.Create;
ColorRGBA89 := ColorRGBA77;
{ .SetColor }
LineSet88.Color := ColorRGBA89;
Coordinate90 := TCoordinateNode.Create;
Coordinate90.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.1677,0.8336,0.0303)]);
{ .SetCoord }
LineSet88.Coord := Coordinate90;
{ .SetGeometry }
Shape87.Geometry := LineSet88;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape87]);
Shape91 := TShapeNode.Create;
LineSet92 := TLineSetNode.Create;
LineSet92.SetVertexCount([2]);
ColorRGBA93 := TColorRGBANode.Create;
ColorRGBA93 := ColorRGBA77;
{ .SetColor }
LineSet92.Color := ColorRGBA93;
Coordinate94 := TCoordinateNode.Create;
Coordinate94.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0887,1.0021,0.1112)]);
{ .SetCoord }
LineSet92.Coord := Coordinate94;
{ .SetGeometry }
Shape91.Geometry := LineSet92;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape91]);
Shape95 := TShapeNode.Create;
LineSet96 := TLineSetNode.Create;
LineSet96.SetVertexCount([2]);
ColorRGBA97 := TColorRGBANode.Create;
ColorRGBA97 := ColorRGBA77;
{ .SetColor }
LineSet96.Color := ColorRGBA97;
Coordinate98 := TCoordinateNode.Create;
Coordinate98.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0925,0.9983,0.1052)]);
{ .SetCoord }
LineSet96.Coord := Coordinate98;
{ .SetGeometry }
Shape95.Geometry := LineSet96;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape95]);
Shape99 := TShapeNode.Create;
LineSet100 := TLineSetNode.Create;
LineSet100.SetVertexCount([2]);
ColorRGBA101 := TColorRGBANode.Create;
ColorRGBA101 := ColorRGBA77;
{ .SetColor }
LineSet100.Color := ColorRGBA101;
Coordinate102 := TCoordinateNode.Create;
Coordinate102.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.0716,1.019,-0.1138)]);
{ .SetCoord }
LineSet100.Coord := Coordinate102;
{ .SetGeometry }
Shape99.Geometry := LineSet100;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape99]);
Shape103 := TShapeNode.Create;
LineSet104 := TLineSetNode.Create;
LineSet104.SetVertexCount([2]);
ColorRGBA105 := TColorRGBANode.Create;
ColorRGBA105 := ColorRGBA77;
{ .SetColor }
LineSet104.Color := ColorRGBA105;
Coordinate106 := TCoordinateNode.Create;
Coordinate106.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0774,1.019,-0.1151)]);
{ .SetCoord }
LineSet104.Coord := Coordinate106;
{ .SetGeometry }
Shape103.Geometry := LineSet104;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape103]);
Shape107 := TShapeNode.Create;
LineSet108 := TLineSetNode.Create;
LineSet108.SetVertexCount([2]);
ColorRGBA109 := TColorRGBANode.Create;
ColorRGBA109 := ColorRGBA77;
{ .SetColor }
LineSet108.Color := ColorRGBA109;
Coordinate110 := TCoordinateNode.Create;
Coordinate110.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0034,0.8266,0.0257)]);
{ .SetCoord }
LineSet108.Coord := Coordinate110;
{ .SetGeometry }
Shape107.Geometry := LineSet108;
{ .AddChildren }
HAnimSegment63.AddChildren([Shape107]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'r_iliocristale_pt';
HAnimSite111.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor112 := TTouchSensorNode.Create;
TouchSensor112.Description := 'HAnimSite r_iliocristale';
{ .AddChildren }
HAnimSite111.AddChildren([TouchSensor112]);
Shape113 := TShapeNode.Create;
Appearance114 := TAppearanceNode.Create;
Material115 := TMaterialNode.Create;
Material115.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance114.Material := Material115;
{ .SetAppearance }
Shape113.Appearance := Appearance114;
IndexedFaceSet116 := TIndexedFaceSetNode.Create;
IndexedFaceSet116.Solid := False;
IndexedFaceSet116.CreaseAngle := 0.5;
IndexedFaceSet116.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate117 := TCoordinateNode.Create;
Coordinate117.SetPoint([Vector3(0,0.008,0),Vector3(-0.008,0,0),Vector3(0,0,0.008),Vector3(0.008,0,0),Vector3(0,0,-0.008),Vector3(0,-0.008,0)]);
{ .SetCoord }
IndexedFaceSet116.Coord := Coordinate117;
{ .SetGeometry }
Shape113.Geometry := IndexedFaceSet116;
{ .AddChildren }
HAnimSite111.AddChildren([Shape113]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite111]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'r_trochanterion_pt';
HAnimSite118.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor119 := TTouchSensorNode.Create;
TouchSensor119.Description := 'HAnimSite r_trochanterion';
{ .AddChildren }
HAnimSite118.AddChildren([TouchSensor119]);
Shape120 := TShapeNode.Create;
Shape120 := Shape113;
{ .AddChildren }
HAnimSite118.AddChildren([Shape120]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite118]);
HAnimSite121 := THAnimSiteNode.Create;
HAnimSite121.NameField := 'l_iliocristale_pt';
HAnimSite121.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor122 := TTouchSensorNode.Create;
TouchSensor122.Description := 'HAnimSite l_iliocristale';
{ .AddChildren }
HAnimSite121.AddChildren([TouchSensor122]);
Shape123 := TShapeNode.Create;
Shape123 := Shape113;
{ .AddChildren }
HAnimSite121.AddChildren([Shape123]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite121]);
HAnimSite124 := THAnimSiteNode.Create;
HAnimSite124.NameField := 'l_trochanterion_pt';
HAnimSite124.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor125 := TTouchSensorNode.Create;
TouchSensor125.Description := 'HAnimSite l_trochanterion';
{ .AddChildren }
HAnimSite124.AddChildren([TouchSensor125]);
Shape126 := TShapeNode.Create;
Shape126 := Shape113;
{ .AddChildren }
HAnimSite124.AddChildren([Shape126]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite124]);
HAnimSite127 := THAnimSiteNode.Create;
HAnimSite127.NameField := 'r_asis_pt';
HAnimSite127.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor128 := TTouchSensorNode.Create;
TouchSensor128.Description := 'HAnimSite r_asis';
{ .AddChildren }
HAnimSite127.AddChildren([TouchSensor128]);
Shape129 := TShapeNode.Create;
Shape129 := Shape113;
{ .AddChildren }
HAnimSite127.AddChildren([Shape129]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite127]);
HAnimSite130 := THAnimSiteNode.Create;
HAnimSite130.NameField := 'l_asis_pt';
HAnimSite130.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor131 := TTouchSensorNode.Create;
TouchSensor131.Description := 'HAnimSite l_asis';
{ .AddChildren }
HAnimSite130.AddChildren([TouchSensor131]);
Shape132 := TShapeNode.Create;
Shape132 := Shape113;
{ .AddChildren }
HAnimSite130.AddChildren([Shape132]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite130]);
HAnimSite133 := THAnimSiteNode.Create;
HAnimSite133.NameField := 'r_psis_pt';
HAnimSite133.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor134 := TTouchSensorNode.Create;
TouchSensor134.Description := 'HAnimSite r_psis';
{ .AddChildren }
HAnimSite133.AddChildren([TouchSensor134]);
Shape135 := TShapeNode.Create;
Shape135 := Shape113;
{ .AddChildren }
HAnimSite133.AddChildren([Shape135]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite133]);
HAnimSite136 := THAnimSiteNode.Create;
HAnimSite136.NameField := 'l_psis_pt';
HAnimSite136.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor137 := TTouchSensorNode.Create;
TouchSensor137.Description := 'HAnimSite l_psis';
{ .AddChildren }
HAnimSite136.AddChildren([TouchSensor137]);
Shape138 := TShapeNode.Create;
Shape138 := Shape113;
{ .AddChildren }
HAnimSite136.AddChildren([Shape138]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite136]);
HAnimSite139 := THAnimSiteNode.Create;
HAnimSite139.NameField := 'crotch_pt';
HAnimSite139.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor140 := TTouchSensorNode.Create;
TouchSensor140.Description := 'HAnimSite crotch';
{ .AddChildren }
HAnimSite139.AddChildren([TouchSensor140]);
Shape141 := TShapeNode.Create;
Shape141 := Shape113;
{ .AddChildren }
HAnimSite139.AddChildren([Shape141]);
{ .AddChildren }
HAnimSegment63.AddChildren([HAnimSite139]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimSegment63]);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.NameField := 'l_hip';
HAnimJoint142.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment143 := THAnimSegmentNode.Create;
HAnimSegment143.NameField := 'l_thigh';
TouchSensor144 := TTouchSensorNode.Create;
TouchSensor144.Description := 'HAnimJoint l_hip, HAnimSegment l_thigh';
{ .AddChildren }
HAnimSegment143.AddChildren([TouchSensor144]);
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0961,0.9124,-0.0001);
Shape146 := TShapeNode.Create;
Shape146 := Shape50;
{ .AddChild }
Transform145.AddChildren([Shape146]);
{ .AddChildren }
HAnimSegment143.AddChildren([Transform145]);
Shape147 := TShapeNode.Create;
LineSet148 := TLineSetNode.Create;
LineSet148.SetVertexCount([2]);
ColorRGBA149 := TColorRGBANode.Create;
ColorRGBA149 := ColorRGBA56;
{ .SetColor }
LineSet148.Color := ColorRGBA149;
Coordinate150 := TCoordinateNode.Create;
Coordinate150.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet148.Coord := Coordinate150;
{ .SetGeometry }
Shape147.Geometry := LineSet148;
{ .AddChildren }
HAnimSegment143.AddChildren([Shape147]);
Shape151 := TShapeNode.Create;
LineSet152 := TLineSetNode.Create;
LineSet152.SetVertexCount([2]);
ColorRGBA153 := TColorRGBANode.Create;
ColorRGBA153 := ColorRGBA77;
{ .SetColor }
LineSet152.Color := ColorRGBA153;
Coordinate154 := TCoordinateNode.Create;
Coordinate154.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.0993,0.4881,-0.0309)]);
{ .SetCoord }
LineSet152.Coord := Coordinate154;
{ .SetGeometry }
Shape151.Geometry := LineSet152;
{ .AddChildren }
HAnimSegment143.AddChildren([Shape151]);
Shape155 := TShapeNode.Create;
LineSet156 := TLineSetNode.Create;
LineSet156.SetVertexCount([2]);
ColorRGBA157 := TColorRGBANode.Create;
ColorRGBA157 := ColorRGBA77;
{ .SetColor }
LineSet156.Color := ColorRGBA157;
Coordinate158 := TCoordinateNode.Create;
Coordinate158.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.1598,0.4967,0.0297)]);
{ .SetCoord }
LineSet156.Coord := Coordinate158;
{ .SetGeometry }
Shape155.Geometry := LineSet156;
{ .AddChildren }
HAnimSegment143.AddChildren([Shape155]);
Shape159 := TShapeNode.Create;
LineSet160 := TLineSetNode.Create;
LineSet160.SetVertexCount([2]);
ColorRGBA161 := TColorRGBANode.Create;
ColorRGBA161 := ColorRGBA77;
{ .SetColor }
LineSet160.Color := ColorRGBA161;
Coordinate162 := TCoordinateNode.Create;
Coordinate162.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.0398,0.4946,0.0303)]);
{ .SetCoord }
LineSet160.Coord := Coordinate162;
{ .SetGeometry }
Shape159.Geometry := LineSet160;
{ .AddChildren }
HAnimSegment143.AddChildren([Shape159]);
HAnimSite163 := THAnimSiteNode.Create;
HAnimSite163.NameField := 'l_knee_crease_pt';
HAnimSite163.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor164 := TTouchSensorNode.Create;
TouchSensor164.Description := 'HAnimSite l_knee_crease';
{ .AddChildren }
HAnimSite163.AddChildren([TouchSensor164]);
Shape165 := TShapeNode.Create;
Shape165 := Shape113;
{ .AddChildren }
HAnimSite163.AddChildren([Shape165]);
{ .AddChildren }
HAnimSegment143.AddChildren([HAnimSite163]);
HAnimSite166 := THAnimSiteNode.Create;
HAnimSite166.NameField := 'l_femoral_lateral_epicn_pt';
HAnimSite166.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor167 := TTouchSensorNode.Create;
TouchSensor167.Description := 'HAnimSite l_femoral_lateral_epicn';
{ .AddChildren }
HAnimSite166.AddChildren([TouchSensor167]);
Shape168 := TShapeNode.Create;
Shape168 := Shape113;
{ .AddChildren }
HAnimSite166.AddChildren([Shape168]);
{ .AddChildren }
HAnimSegment143.AddChildren([HAnimSite166]);
HAnimSite169 := THAnimSiteNode.Create;
HAnimSite169.NameField := 'l_femoral_medial_epicn_pt';
HAnimSite169.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor170 := TTouchSensorNode.Create;
TouchSensor170.Description := 'HAnimSite l_femoral_medial_epicn';
{ .AddChildren }
HAnimSite169.AddChildren([TouchSensor170]);
Shape171 := TShapeNode.Create;
Shape171 := Shape113;
{ .AddChildren }
HAnimSite169.AddChildren([Shape171]);
{ .AddChildren }
HAnimSegment143.AddChildren([HAnimSite169]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimSegment143]);
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172.NameField := 'l_knee';
HAnimJoint172.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment173 := THAnimSegmentNode.Create;
HAnimSegment173.NameField := 'l_calf';
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimJoint l_knee, HAnimSegment l_calf';
{ .AddChildren }
HAnimSegment173.AddChildren([TouchSensor174]);
Transform175 := TTransformNode.Create;
Transform175.Translation := Vector3(0.104,0.4867,0.0308);
Shape176 := TShapeNode.Create;
Shape176 := Shape50;
{ .AddChild }
Transform175.AddChildren([Shape176]);
{ .AddChildren }
HAnimSegment173.AddChildren([Transform175]);
Shape177 := TShapeNode.Create;
LineSet178 := TLineSetNode.Create;
LineSet178.SetVertexCount([2]);
ColorRGBA179 := TColorRGBANode.Create;
ColorRGBA179 := ColorRGBA56;
{ .SetColor }
LineSet178.Color := ColorRGBA179;
Coordinate180 := TCoordinateNode.Create;
Coordinate180.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet178.Coord := Coordinate180;
{ .SetGeometry }
Shape177.Geometry := LineSet178;
{ .AddChildren }
HAnimSegment173.AddChildren([Shape177]);
{ .AddChildren }
HAnimJoint172.AddChildren([HAnimSegment173]);
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181.NameField := 'l_ankle';
HAnimJoint181.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment182 := THAnimSegmentNode.Create;
HAnimSegment182.NameField := 'l_hindfoot';
TouchSensor183 := TTouchSensorNode.Create;
TouchSensor183.Description := 'HAnimJoint l_ankle, HAnimSegment l_hindfoot';
{ .AddChildren }
HAnimSegment182.AddChildren([TouchSensor183]);
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(0.1101,0.0656,-0.0736);
Shape185 := TShapeNode.Create;
Shape185 := Shape50;
{ .AddChild }
Transform184.AddChildren([Shape185]);
{ .AddChildren }
HAnimSegment182.AddChildren([Transform184]);
Shape186 := TShapeNode.Create;
LineSet187 := TLineSetNode.Create;
LineSet187.SetVertexCount([2]);
ColorRGBA188 := TColorRGBANode.Create;
ColorRGBA188 := ColorRGBA56;
{ .SetColor }
LineSet187.Color := ColorRGBA188;
Coordinate189 := TCoordinateNode.Create;
Coordinate189.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.1086,0.0001,-0.0368)]);
{ .SetCoord }
LineSet187.Coord := Coordinate189;
{ .SetGeometry }
Shape186.Geometry := LineSet187;
{ .AddChildren }
HAnimSegment182.AddChildren([Shape186]);
Shape190 := TShapeNode.Create;
LineSet191 := TLineSetNode.Create;
LineSet191.SetVertexCount([2]);
ColorRGBA192 := TColorRGBANode.Create;
ColorRGBA192 := ColorRGBA77;
{ .SetColor }
LineSet191.Color := ColorRGBA192;
Coordinate193 := TCoordinateNode.Create;
Coordinate193.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.1308,0.0597,-0.1032)]);
{ .SetCoord }
LineSet191.Coord := Coordinate193;
{ .SetGeometry }
Shape190.Geometry := LineSet191;
{ .AddChildren }
HAnimSegment182.AddChildren([Shape190]);
Shape194 := TShapeNode.Create;
LineSet195 := TLineSetNode.Create;
LineSet195.SetVertexCount([2]);
ColorRGBA196 := TColorRGBANode.Create;
ColorRGBA196 := ColorRGBA77;
{ .SetColor }
LineSet195.Color := ColorRGBA196;
Coordinate197 := TCoordinateNode.Create;
Coordinate197.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.089,0.0716,-0.0881)]);
{ .SetCoord }
LineSet195.Coord := Coordinate197;
{ .SetGeometry }
Shape194.Geometry := LineSet195;
{ .AddChildren }
HAnimSegment182.AddChildren([Shape194]);
Shape198 := TShapeNode.Create;
LineSet199 := TLineSetNode.Create;
LineSet199.SetVertexCount([2]);
ColorRGBA200 := TColorRGBANode.Create;
ColorRGBA200 := ColorRGBA77;
{ .SetColor }
LineSet199.Color := ColorRGBA200;
Coordinate201 := TCoordinateNode.Create;
Coordinate201.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.089,0.0575,-0.0943)]);
{ .SetCoord }
LineSet199.Coord := Coordinate201;
{ .SetGeometry }
Shape198.Geometry := LineSet199;
{ .AddChildren }
HAnimSegment182.AddChildren([Shape198]);
Shape202 := TShapeNode.Create;
LineSet203 := TLineSetNode.Create;
LineSet203.SetVertexCount([2]);
ColorRGBA204 := TColorRGBANode.Create;
ColorRGBA204 := ColorRGBA77;
{ .SetColor }
LineSet203.Color := ColorRGBA204;
Coordinate205 := TCoordinateNode.Create;
Coordinate205.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0974,0.0259,-0.1171)]);
{ .SetCoord }
LineSet203.Coord := Coordinate205;
{ .SetGeometry }
Shape202.Geometry := LineSet203;
{ .AddChildren }
HAnimSegment182.AddChildren([Shape202]);
HAnimSite206 := THAnimSiteNode.Create;
HAnimSite206.NameField := 'l_lateral_malleolus_pt';
HAnimSite206.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor207 := TTouchSensorNode.Create;
TouchSensor207.Description := 'HAnimSite l_lateral_malleolus';
{ .AddChildren }
HAnimSite206.AddChildren([TouchSensor207]);
Shape208 := TShapeNode.Create;
Shape208 := Shape113;
{ .AddChildren }
HAnimSite206.AddChildren([Shape208]);
{ .AddChildren }
HAnimSegment182.AddChildren([HAnimSite206]);
HAnimSite209 := THAnimSiteNode.Create;
HAnimSite209.NameField := 'l_medial_malleolus_pt';
HAnimSite209.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor210 := TTouchSensorNode.Create;
TouchSensor210.Description := 'HAnimSite l_medial_malleolus';
{ .AddChildren }
HAnimSite209.AddChildren([TouchSensor210]);
Shape211 := TShapeNode.Create;
Shape211 := Shape113;
{ .AddChildren }
HAnimSite209.AddChildren([Shape211]);
{ .AddChildren }
HAnimSegment182.AddChildren([HAnimSite209]);
HAnimSite212 := THAnimSiteNode.Create;
HAnimSite212.NameField := 'l_sphyrion_pt';
HAnimSite212.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor213 := TTouchSensorNode.Create;
TouchSensor213.Description := 'HAnimSite l_sphyrion';
{ .AddChildren }
HAnimSite212.AddChildren([TouchSensor213]);
Shape214 := TShapeNode.Create;
Shape214 := Shape113;
{ .AddChildren }
HAnimSite212.AddChildren([Shape214]);
{ .AddChildren }
HAnimSegment182.AddChildren([HAnimSite212]);
HAnimSite215 := THAnimSiteNode.Create;
HAnimSite215.NameField := 'l_calcaneous_post_pt';
HAnimSite215.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor216 := TTouchSensorNode.Create;
TouchSensor216.Description := 'HAnimSite l_calcaneous_post';
{ .AddChildren }
HAnimSite215.AddChildren([TouchSensor216]);
Shape217 := TShapeNode.Create;
Shape217 := Shape113;
{ .AddChildren }
HAnimSite215.AddChildren([Shape217]);
{ .AddChildren }
HAnimSegment182.AddChildren([HAnimSite215]);
{ .AddChildren }
HAnimJoint181.AddChildren([HAnimSegment182]);
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218.NameField := 'l_subtalar';
HAnimJoint218.Center := Vector3(0.1086,0.0001,-0.0368);
HAnimSegment219 := THAnimSegmentNode.Create;
HAnimSegment219.NameField := 'l_midproximal';
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'HAnimJoint l_subtalar, HAnimSegment l_midproximal';
{ .AddChildren }
HAnimSegment219.AddChildren([TouchSensor220]);
Transform221 := TTransformNode.Create;
Transform221.Translation := Vector3(0.1086,0.0001,-0.0368);
Shape222 := TShapeNode.Create;
Shape222 := Shape50;
{ .AddChild }
Transform221.AddChildren([Shape222]);
{ .AddChildren }
HAnimSegment219.AddChildren([Transform221]);
Shape223 := TShapeNode.Create;
LineSet224 := TLineSetNode.Create;
LineSet224.SetVertexCount([2]);
ColorRGBA225 := TColorRGBANode.Create;
ColorRGBA225 := ColorRGBA56;
{ .SetColor }
LineSet224.Color := ColorRGBA225;
Coordinate226 := TCoordinateNode.Create;
Coordinate226.SetPoint([Vector3(0.1086,0.0001,-0.0368),Vector3(0.1086,0.0001,0.0368)]);
{ .SetCoord }
LineSet224.Coord := Coordinate226;
{ .SetGeometry }
Shape223.Geometry := LineSet224;
{ .AddChildren }
HAnimSegment219.AddChildren([Shape223]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimSegment219]);
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227.NameField := 'l_midtarsal';
HAnimJoint227.Center := Vector3(0.1086,0.0001,0.0368);
HAnimSegment228 := THAnimSegmentNode.Create;
HAnimSegment228.NameField := 'l_middistal';
TouchSensor229 := TTouchSensorNode.Create;
TouchSensor229.Description := 'HAnimJoint l_midtarsal, HAnimSegment l_middistal';
{ .AddChildren }
HAnimSegment228.AddChildren([TouchSensor229]);
Transform230 := TTransformNode.Create;
Transform230.Translation := Vector3(0.1086,0.0001,0.0368);
Shape231 := TShapeNode.Create;
Shape231 := Shape50;
{ .AddChild }
Transform230.AddChildren([Shape231]);
{ .AddChildren }
HAnimSegment228.AddChildren([Transform230]);
Shape232 := TShapeNode.Create;
LineSet233 := TLineSetNode.Create;
LineSet233.SetVertexCount([2]);
ColorRGBA234 := TColorRGBANode.Create;
ColorRGBA234 := ColorRGBA56;
{ .SetColor }
LineSet233.Color := ColorRGBA234;
Coordinate235 := TCoordinateNode.Create;
Coordinate235.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.1086,0,0.0762)]);
{ .SetCoord }
LineSet233.Coord := Coordinate235;
{ .SetGeometry }
Shape232.Geometry := LineSet233;
{ .AddChildren }
HAnimSegment228.AddChildren([Shape232]);
Shape236 := TShapeNode.Create;
LineSet237 := TLineSetNode.Create;
LineSet237.SetVertexCount([2]);
ColorRGBA238 := TColorRGBANode.Create;
ColorRGBA238 := ColorRGBA77;
{ .SetColor }
LineSet237.Color := ColorRGBA238;
Coordinate239 := TCoordinateNode.Create;
Coordinate239.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.0816,0.0232,0.0106)]);
{ .SetCoord }
LineSet237.Coord := Coordinate239;
{ .SetGeometry }
Shape236.Geometry := LineSet237;
{ .AddChildren }
HAnimSegment228.AddChildren([Shape236]);
HAnimSite240 := THAnimSiteNode.Create;
HAnimSite240.NameField := 'l_metatarsal_pha1_pt';
HAnimSite240.Translation := Vector3(0.0816,0.0232,0.0106);
TouchSensor241 := TTouchSensorNode.Create;
TouchSensor241.Description := 'HAnimSite l_metatarsal_pha1';
{ .AddChildren }
HAnimSite240.AddChildren([TouchSensor241]);
Shape242 := TShapeNode.Create;
Shape242 := Shape113;
{ .AddChildren }
HAnimSite240.AddChildren([Shape242]);
{ .AddChildren }
HAnimSegment228.AddChildren([HAnimSite240]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimSegment228]);
HAnimJoint243 := THAnimJointNode.Create;
HAnimJoint243.NameField := 'l_metatarsal';
HAnimJoint243.Center := Vector3(0.1086,0,0.0762);
HAnimSegment244 := THAnimSegmentNode.Create;
HAnimSegment244.NameField := 'l_forefoot';
TouchSensor245 := TTouchSensorNode.Create;
TouchSensor245.Description := 'HAnimJoint l_metatarsal, HAnimSegment l_forefoot';
{ .AddChildren }
HAnimSegment244.AddChildren([TouchSensor245]);
Transform246 := TTransformNode.Create;
Transform246.Translation := Vector3(0.1086,0,0.0762);
Shape247 := TShapeNode.Create;
Shape247 := Shape50;
{ .AddChild }
Transform246.AddChildren([Shape247]);
{ .AddChildren }
HAnimSegment244.AddChildren([Transform246]);
Shape248 := TShapeNode.Create;
LineSet249 := TLineSetNode.Create;
LineSet249.SetVertexCount([2]);
ColorRGBA250 := TColorRGBANode.Create;
ColorRGBA250 := ColorRGBA77;
{ .SetColor }
LineSet249.Color := ColorRGBA250;
Coordinate251 := TCoordinateNode.Create;
Coordinate251.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1354,0.0016,0.1476)]);
{ .SetCoord }
LineSet249.Coord := Coordinate251;
{ .SetGeometry }
Shape248.Geometry := LineSet249;
{ .AddChildren }
HAnimSegment244.AddChildren([Shape248]);
Shape252 := TShapeNode.Create;
LineSet253 := TLineSetNode.Create;
LineSet253.SetVertexCount([2]);
ColorRGBA254 := TColorRGBANode.Create;
ColorRGBA254 := ColorRGBA77;
{ .SetColor }
LineSet253.Color := ColorRGBA254;
Coordinate255 := TCoordinateNode.Create;
Coordinate255.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1825,0.007,0.0928)]);
{ .SetCoord }
LineSet253.Coord := Coordinate255;
{ .SetGeometry }
Shape252.Geometry := LineSet253;
{ .AddChildren }
HAnimSegment244.AddChildren([Shape252]);
Shape256 := TShapeNode.Create;
LineSet257 := TLineSetNode.Create;
LineSet257.SetVertexCount([2]);
ColorRGBA258 := TColorRGBANode.Create;
ColorRGBA258 := ColorRGBA77;
{ .SetColor }
LineSet257.Color := ColorRGBA258;
Coordinate259 := TCoordinateNode.Create;
Coordinate259.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1195,0.0079,0.1433)]);
{ .SetCoord }
LineSet257.Coord := Coordinate259;
{ .SetGeometry }
Shape256.Geometry := LineSet257;
{ .AddChildren }
HAnimSegment244.AddChildren([Shape256]);
HAnimSite260 := THAnimSiteNode.Create;
HAnimSite260.NameField := 'l_forefoot_tip';
HAnimSite260.Translation := Vector3(0.1354,0.0016,0.1476);
TouchSensor261 := TTouchSensorNode.Create;
TouchSensor261.Description := 'HAnimSite l_forefoot_tip';
{ .AddChildren }
HAnimSite260.AddChildren([TouchSensor261]);
Shape262 := TShapeNode.Create;
Shape262 := Shape113;
{ .AddChildren }
HAnimSite260.AddChildren([Shape262]);
{ .AddChildren }
HAnimSegment244.AddChildren([HAnimSite260]);
HAnimSite263 := THAnimSiteNode.Create;
HAnimSite263.NameField := 'l_metatarsal_pha5_pt';
HAnimSite263.Translation := Vector3(0.1825,0.007,0.0928);
TouchSensor264 := TTouchSensorNode.Create;
TouchSensor264.Description := 'HAnimSite l_metatarsal_pha5';
{ .AddChildren }
HAnimSite263.AddChildren([TouchSensor264]);
Shape265 := TShapeNode.Create;
Shape265 := Shape113;
{ .AddChildren }
HAnimSite263.AddChildren([Shape265]);
{ .AddChildren }
HAnimSegment244.AddChildren([HAnimSite263]);
HAnimSite266 := THAnimSiteNode.Create;
HAnimSite266.NameField := 'l_digit2_pt';
HAnimSite266.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor267 := TTouchSensorNode.Create;
TouchSensor267.Description := 'HAnimSite l_digit2';
{ .AddChildren }
HAnimSite266.AddChildren([TouchSensor267]);
Shape268 := TShapeNode.Create;
Shape268 := Shape113;
{ .AddChildren }
HAnimSite266.AddChildren([Shape268]);
{ .AddChildren }
HAnimSegment244.AddChildren([HAnimSite266]);
{ .AddChildren }
HAnimJoint243.AddChildren([HAnimSegment244]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimJoint243]);
{ .AddChildren }
HAnimJoint218.AddChildren([HAnimJoint227]);
{ .AddChildren }
HAnimJoint181.AddChildren([HAnimJoint218]);
{ .AddChildren }
HAnimJoint172.AddChildren([HAnimJoint181]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint172]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint142]);
HAnimJoint269 := THAnimJointNode.Create;
HAnimJoint269.NameField := 'r_hip';
HAnimJoint269.Center := Vector3(-0.0961,0.9124,-0.0001);
HAnimSegment270 := THAnimSegmentNode.Create;
HAnimSegment270.NameField := 'r_thigh';
TouchSensor271 := TTouchSensorNode.Create;
TouchSensor271.Description := 'HAnimJoint r_hip, HAnimSegment r_thigh';
{ .AddChildren }
HAnimSegment270.AddChildren([TouchSensor271]);
Transform272 := TTransformNode.Create;
Transform272.Translation := Vector3(-0.0961,0.9124,-0.0001);
Shape273 := TShapeNode.Create;
Shape273 := Shape50;
{ .AddChild }
Transform272.AddChildren([Shape273]);
{ .AddChildren }
HAnimSegment270.AddChildren([Transform272]);
Shape274 := TShapeNode.Create;
LineSet275 := TLineSetNode.Create;
LineSet275.SetVertexCount([2]);
ColorRGBA276 := TColorRGBANode.Create;
ColorRGBA276 := ColorRGBA56;
{ .SetColor }
LineSet275.Color := ColorRGBA276;
Coordinate277 := TCoordinateNode.Create;
Coordinate277.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.104,0.4867,0.0308)]);
{ .SetCoord }
LineSet275.Coord := Coordinate277;
{ .SetGeometry }
Shape274.Geometry := LineSet275;
{ .AddChildren }
HAnimSegment270.AddChildren([Shape274]);
Shape278 := TShapeNode.Create;
LineSet279 := TLineSetNode.Create;
LineSet279.SetVertexCount([2]);
ColorRGBA280 := TColorRGBANode.Create;
ColorRGBA280 := ColorRGBA77;
{ .SetColor }
LineSet279.Color := ColorRGBA280;
Coordinate281 := TCoordinateNode.Create;
Coordinate281.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.0825,0.4932,-0.0326)]);
{ .SetCoord }
LineSet279.Coord := Coordinate281;
{ .SetGeometry }
Shape278.Geometry := LineSet279;
{ .AddChildren }
HAnimSegment270.AddChildren([Shape278]);
Shape282 := TShapeNode.Create;
LineSet283 := TLineSetNode.Create;
LineSet283.SetVertexCount([2]);
ColorRGBA284 := TColorRGBANode.Create;
ColorRGBA284 := ColorRGBA77;
{ .SetColor }
LineSet283.Color := ColorRGBA284;
Coordinate285 := TCoordinateNode.Create;
Coordinate285.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.1421,0.4992,0.031)]);
{ .SetCoord }
LineSet283.Coord := Coordinate285;
{ .SetGeometry }
Shape282.Geometry := LineSet283;
{ .AddChildren }
HAnimSegment270.AddChildren([Shape282]);
Shape286 := TShapeNode.Create;
LineSet287 := TLineSetNode.Create;
LineSet287.SetVertexCount([2]);
ColorRGBA288 := TColorRGBANode.Create;
ColorRGBA288 := ColorRGBA77;
{ .SetColor }
LineSet287.Color := ColorRGBA288;
Coordinate289 := TCoordinateNode.Create;
Coordinate289.SetPoint([Vector3(-0.0961,0.9124,-0.0001),Vector3(-0.0221,0.5014,0.0289)]);
{ .SetCoord }
LineSet287.Coord := Coordinate289;
{ .SetGeometry }
Shape286.Geometry := LineSet287;
{ .AddChildren }
HAnimSegment270.AddChildren([Shape286]);
HAnimSite290 := THAnimSiteNode.Create;
HAnimSite290.NameField := 'r_knee_crease_pt';
HAnimSite290.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor291 := TTouchSensorNode.Create;
TouchSensor291.Description := 'HAnimSite r_knee_crease';
{ .AddChildren }
HAnimSite290.AddChildren([TouchSensor291]);
Shape292 := TShapeNode.Create;
Shape292 := Shape113;
{ .AddChildren }
HAnimSite290.AddChildren([Shape292]);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite290]);
HAnimSite293 := THAnimSiteNode.Create;
HAnimSite293.NameField := 'r_femoral_lateral_epicn_pt';
HAnimSite293.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor294 := TTouchSensorNode.Create;
TouchSensor294.Description := 'HAnimSite r_femoral_lateral_epicn';
{ .AddChildren }
HAnimSite293.AddChildren([TouchSensor294]);
Shape295 := TShapeNode.Create;
Shape295 := Shape113;
{ .AddChildren }
HAnimSite293.AddChildren([Shape295]);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite293]);
HAnimSite296 := THAnimSiteNode.Create;
HAnimSite296.NameField := 'r_femoral_medial_epicn_pt';
HAnimSite296.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor297 := TTouchSensorNode.Create;
TouchSensor297.Description := 'HAnimSite r_femoral_medial_epicn';
{ .AddChildren }
HAnimSite296.AddChildren([TouchSensor297]);
Shape298 := TShapeNode.Create;
Shape298 := Shape113;
{ .AddChildren }
HAnimSite296.AddChildren([Shape298]);
{ .AddChildren }
HAnimSegment270.AddChildren([HAnimSite296]);
{ .AddChildren }
HAnimJoint269.AddChildren([HAnimSegment270]);
HAnimJoint299 := THAnimJointNode.Create;
HAnimJoint299.NameField := 'r_knee';
HAnimJoint299.Center := Vector3(-0.104,0.4867,0.0308);
HAnimSegment300 := THAnimSegmentNode.Create;
HAnimSegment300.NameField := 'r_calf';
TouchSensor301 := TTouchSensorNode.Create;
TouchSensor301.Description := 'HAnimJoint r_knee, HAnimSegment r_calf';
{ .AddChildren }
HAnimSegment300.AddChildren([TouchSensor301]);
Transform302 := TTransformNode.Create;
Transform302.Translation := Vector3(-0.104,0.4867,0.0308);
Shape303 := TShapeNode.Create;
Shape303 := Shape50;
{ .AddChild }
Transform302.AddChildren([Shape303]);
{ .AddChildren }
HAnimSegment300.AddChildren([Transform302]);
Shape304 := TShapeNode.Create;
LineSet305 := TLineSetNode.Create;
LineSet305.SetVertexCount([2]);
ColorRGBA306 := TColorRGBANode.Create;
ColorRGBA306 := ColorRGBA56;
{ .SetColor }
LineSet305.Color := ColorRGBA306;
Coordinate307 := TCoordinateNode.Create;
Coordinate307.SetPoint([Vector3(-0.104,0.4867,0.0308),Vector3(-0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet305.Coord := Coordinate307;
{ .SetGeometry }
Shape304.Geometry := LineSet305;
{ .AddChildren }
HAnimSegment300.AddChildren([Shape304]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimSegment300]);
HAnimJoint308 := THAnimJointNode.Create;
HAnimJoint308.NameField := 'r_ankle';
HAnimJoint308.Center := Vector3(-0.1101,0.0656,-0.0736);
HAnimSegment309 := THAnimSegmentNode.Create;
HAnimSegment309.NameField := 'r_hindfoot';
TouchSensor310 := TTouchSensorNode.Create;
TouchSensor310.Description := 'HAnimJoint r_ankle, HAnimSegment r_hindfoot';
{ .AddChildren }
HAnimSegment309.AddChildren([TouchSensor310]);
Transform311 := TTransformNode.Create;
Transform311.Translation := Vector3(-0.1101,0.0656,-0.0736);
Shape312 := TShapeNode.Create;
Shape312 := Shape50;
{ .AddChild }
Transform311.AddChildren([Shape312]);
{ .AddChildren }
HAnimSegment309.AddChildren([Transform311]);
Shape313 := TShapeNode.Create;
LineSet314 := TLineSetNode.Create;
LineSet314.SetVertexCount([2]);
ColorRGBA315 := TColorRGBANode.Create;
ColorRGBA315 := ColorRGBA56;
{ .SetColor }
LineSet314.Color := ColorRGBA315;
Coordinate316 := TCoordinateNode.Create;
Coordinate316.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.1086,0.0001,-0.0368)]);
{ .SetCoord }
LineSet314.Coord := Coordinate316;
{ .SetGeometry }
Shape313.Geometry := LineSet314;
{ .AddChildren }
HAnimSegment309.AddChildren([Shape313]);
Shape317 := TShapeNode.Create;
LineSet318 := TLineSetNode.Create;
LineSet318.SetVertexCount([2]);
ColorRGBA319 := TColorRGBANode.Create;
ColorRGBA319 := ColorRGBA77;
{ .SetColor }
LineSet318.Color := ColorRGBA319;
Coordinate320 := TCoordinateNode.Create;
Coordinate320.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.1006,0.0658,-0.1075)]);
{ .SetCoord }
LineSet318.Coord := Coordinate320;
{ .SetGeometry }
Shape317.Geometry := LineSet318;
{ .AddChildren }
HAnimSegment309.AddChildren([Shape317]);
Shape321 := TShapeNode.Create;
LineSet322 := TLineSetNode.Create;
LineSet322.SetVertexCount([2]);
ColorRGBA323 := TColorRGBANode.Create;
ColorRGBA323 := ColorRGBA77;
{ .SetColor }
LineSet322.Color := ColorRGBA323;
Coordinate324 := TCoordinateNode.Create;
Coordinate324.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0591,0.076,-0.0928)]);
{ .SetCoord }
LineSet322.Coord := Coordinate324;
{ .SetGeometry }
Shape321.Geometry := LineSet322;
{ .AddChildren }
HAnimSegment309.AddChildren([Shape321]);
Shape325 := TShapeNode.Create;
LineSet326 := TLineSetNode.Create;
LineSet326.SetVertexCount([2]);
ColorRGBA327 := TColorRGBANode.Create;
ColorRGBA327 := ColorRGBA77;
{ .SetColor }
LineSet326.Color := ColorRGBA327;
Coordinate328 := TCoordinateNode.Create;
Coordinate328.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0603,0.061,-0.1002)]);
{ .SetCoord }
LineSet326.Coord := Coordinate328;
{ .SetGeometry }
Shape325.Geometry := LineSet326;
{ .AddChildren }
HAnimSegment309.AddChildren([Shape325]);
Shape329 := TShapeNode.Create;
LineSet330 := TLineSetNode.Create;
LineSet330.SetVertexCount([2]);
ColorRGBA331 := TColorRGBANode.Create;
ColorRGBA331 := ColorRGBA77;
{ .SetColor }
LineSet330.Color := ColorRGBA331;
Coordinate332 := TCoordinateNode.Create;
Coordinate332.SetPoint([Vector3(-0.1101,0.0656,-0.0736),Vector3(-0.0692,0.0297,-0.1221)]);
{ .SetCoord }
LineSet330.Coord := Coordinate332;
{ .SetGeometry }
Shape329.Geometry := LineSet330;
{ .AddChildren }
HAnimSegment309.AddChildren([Shape329]);
HAnimSite333 := THAnimSiteNode.Create;
HAnimSite333.NameField := 'r_lateral_malleolus_pt';
HAnimSite333.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor334 := TTouchSensorNode.Create;
TouchSensor334.Description := 'HAnimSite r_lateral_malleolus';
{ .AddChildren }
HAnimSite333.AddChildren([TouchSensor334]);
Shape335 := TShapeNode.Create;
Shape335 := Shape113;
{ .AddChildren }
HAnimSite333.AddChildren([Shape335]);
{ .AddChildren }
HAnimSegment309.AddChildren([HAnimSite333]);
HAnimSite336 := THAnimSiteNode.Create;
HAnimSite336.NameField := 'r_medial_malleolus_pt';
HAnimSite336.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor337 := TTouchSensorNode.Create;
TouchSensor337.Description := 'HAnimSite r_medial_malleolus';
{ .AddChildren }
HAnimSite336.AddChildren([TouchSensor337]);
Shape338 := TShapeNode.Create;
Shape338 := Shape113;
{ .AddChildren }
HAnimSite336.AddChildren([Shape338]);
{ .AddChildren }
HAnimSegment309.AddChildren([HAnimSite336]);
HAnimSite339 := THAnimSiteNode.Create;
HAnimSite339.NameField := 'r_sphyrion_pt';
HAnimSite339.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor340 := TTouchSensorNode.Create;
TouchSensor340.Description := 'HAnimSite r_sphyrion';
{ .AddChildren }
HAnimSite339.AddChildren([TouchSensor340]);
Shape341 := TShapeNode.Create;
Shape341 := Shape113;
{ .AddChildren }
HAnimSite339.AddChildren([Shape341]);
{ .AddChildren }
HAnimSegment309.AddChildren([HAnimSite339]);
HAnimSite342 := THAnimSiteNode.Create;
HAnimSite342.NameField := 'r_calcaneous_post_pt';
HAnimSite342.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor343 := TTouchSensorNode.Create;
TouchSensor343.Description := 'HAnimSite r_calcaneous_post';
{ .AddChildren }
HAnimSite342.AddChildren([TouchSensor343]);
Shape344 := TShapeNode.Create;
Shape344 := Shape113;
{ .AddChildren }
HAnimSite342.AddChildren([Shape344]);
{ .AddChildren }
HAnimSegment309.AddChildren([HAnimSite342]);
{ .AddChildren }
HAnimJoint308.AddChildren([HAnimSegment309]);
HAnimJoint345 := THAnimJointNode.Create;
HAnimJoint345.NameField := 'r_subtalar';
HAnimJoint345.Center := Vector3(-0.1086,0.0001,-0.0368);
HAnimSegment346 := THAnimSegmentNode.Create;
HAnimSegment346.NameField := 'r_midproximal';
TouchSensor347 := TTouchSensorNode.Create;
TouchSensor347.Description := 'HAnimJoint r_subtalar, HAnimSegment r_midproximal';
{ .AddChildren }
HAnimSegment346.AddChildren([TouchSensor347]);
Transform348 := TTransformNode.Create;
Transform348.Translation := Vector3(-0.1086,0.0001,-0.0368);
Shape349 := TShapeNode.Create;
Shape349 := Shape50;
{ .AddChild }
Transform348.AddChildren([Shape349]);
{ .AddChildren }
HAnimSegment346.AddChildren([Transform348]);
Shape350 := TShapeNode.Create;
LineSet351 := TLineSetNode.Create;
LineSet351.SetVertexCount([2]);
ColorRGBA352 := TColorRGBANode.Create;
ColorRGBA352 := ColorRGBA56;
{ .SetColor }
LineSet351.Color := ColorRGBA352;
Coordinate353 := TCoordinateNode.Create;
Coordinate353.SetPoint([Vector3(-0.1086,0.0001,-0.0368),Vector3(-0.1086,0.0001,0.0368)]);
{ .SetCoord }
LineSet351.Coord := Coordinate353;
{ .SetGeometry }
Shape350.Geometry := LineSet351;
{ .AddChildren }
HAnimSegment346.AddChildren([Shape350]);
{ .AddChildren }
HAnimJoint345.AddChildren([HAnimSegment346]);
HAnimJoint354 := THAnimJointNode.Create;
HAnimJoint354.NameField := 'r_midtarsal';
HAnimJoint354.Center := Vector3(-0.1086,0.0001,0.0368);
HAnimSegment355 := THAnimSegmentNode.Create;
HAnimSegment355.NameField := 'r_middistal';
TouchSensor356 := TTouchSensorNode.Create;
TouchSensor356.Description := 'HAnimJoint r_midtarsal, HAnimSegment r_middistal';
{ .AddChildren }
HAnimSegment355.AddChildren([TouchSensor356]);
Transform357 := TTransformNode.Create;
Transform357.Translation := Vector3(-0.1086,0.0001,0.0368);
Shape358 := TShapeNode.Create;
Shape358 := Shape50;
{ .AddChild }
Transform357.AddChildren([Shape358]);
{ .AddChildren }
HAnimSegment355.AddChildren([Transform357]);
Shape359 := TShapeNode.Create;
LineSet360 := TLineSetNode.Create;
LineSet360.SetVertexCount([2]);
ColorRGBA361 := TColorRGBANode.Create;
ColorRGBA361 := ColorRGBA56;
{ .SetColor }
LineSet360.Color := ColorRGBA361;
Coordinate362 := TCoordinateNode.Create;
Coordinate362.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.1086,0,0.0762)]);
{ .SetCoord }
LineSet360.Coord := Coordinate362;
{ .SetGeometry }
Shape359.Geometry := LineSet360;
{ .AddChildren }
HAnimSegment355.AddChildren([Shape359]);
Shape363 := TShapeNode.Create;
LineSet364 := TLineSetNode.Create;
LineSet364.SetVertexCount([2]);
ColorRGBA365 := TColorRGBANode.Create;
ColorRGBA365 := ColorRGBA77;
{ .SetColor }
LineSet364.Color := ColorRGBA365;
Coordinate366 := TCoordinateNode.Create;
Coordinate366.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.0521,0.026,0.0127)]);
{ .SetCoord }
LineSet364.Coord := Coordinate366;
{ .SetGeometry }
Shape363.Geometry := LineSet364;
{ .AddChildren }
HAnimSegment355.AddChildren([Shape363]);
HAnimSite367 := THAnimSiteNode.Create;
HAnimSite367.NameField := 'r_metatarsal_pha1_pt';
HAnimSite367.Translation := Vector3(-0.0521,0.026,0.0127);
TouchSensor368 := TTouchSensorNode.Create;
TouchSensor368.Description := 'HAnimSite r_metatarsal_pha1';
{ .AddChildren }
HAnimSite367.AddChildren([TouchSensor368]);
Shape369 := TShapeNode.Create;
Shape369 := Shape113;
{ .AddChildren }
HAnimSite367.AddChildren([Shape369]);
{ .AddChildren }
HAnimSegment355.AddChildren([HAnimSite367]);
{ .AddChildren }
HAnimJoint354.AddChildren([HAnimSegment355]);
HAnimJoint370 := THAnimJointNode.Create;
HAnimJoint370.NameField := 'r_metatarsal';
HAnimJoint370.Center := Vector3(-0.1086,0,0.0762);
HAnimSegment371 := THAnimSegmentNode.Create;
HAnimSegment371.NameField := 'r_forefoot';
TouchSensor372 := TTouchSensorNode.Create;
TouchSensor372.Description := 'HAnimJoint r_metatarsal, HAnimSegment r_forefoot';
{ .AddChildren }
HAnimSegment371.AddChildren([TouchSensor372]);
Transform373 := TTransformNode.Create;
Transform373.Translation := Vector3(-0.1086,0,0.0762);
Shape374 := TShapeNode.Create;
Shape374 := Shape50;
{ .AddChild }
Transform373.AddChildren([Shape374]);
{ .AddChildren }
HAnimSegment371.AddChildren([Transform373]);
Shape375 := TShapeNode.Create;
LineSet376 := TLineSetNode.Create;
LineSet376.SetVertexCount([2]);
ColorRGBA377 := TColorRGBANode.Create;
ColorRGBA377 := ColorRGBA77;
{ .SetColor }
LineSet376.Color := ColorRGBA377;
Coordinate378 := TCoordinateNode.Create;
Coordinate378.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1043,0.0227,0.145)]);
{ .SetCoord }
LineSet376.Coord := Coordinate378;
{ .SetGeometry }
Shape375.Geometry := LineSet376;
{ .AddChildren }
HAnimSegment371.AddChildren([Shape375]);
Shape379 := TShapeNode.Create;
LineSet380 := TLineSetNode.Create;
LineSet380.SetVertexCount([2]);
ColorRGBA381 := TColorRGBANode.Create;
ColorRGBA381 := ColorRGBA77;
{ .SetColor }
LineSet380.Color := ColorRGBA381;
Coordinate382 := TCoordinateNode.Create;
Coordinate382.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1523,0.0166,0.0895)]);
{ .SetCoord }
LineSet380.Coord := Coordinate382;
{ .SetGeometry }
Shape379.Geometry := LineSet380;
{ .AddChildren }
HAnimSegment371.AddChildren([Shape379]);
Shape383 := TShapeNode.Create;
LineSet384 := TLineSetNode.Create;
LineSet384.SetVertexCount([2]);
ColorRGBA385 := TColorRGBANode.Create;
ColorRGBA385 := ColorRGBA77;
{ .SetColor }
LineSet384.Color := ColorRGBA385;
Coordinate386 := TCoordinateNode.Create;
Coordinate386.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.0883,0.0134,0.1383)]);
{ .SetCoord }
LineSet384.Coord := Coordinate386;
{ .SetGeometry }
Shape383.Geometry := LineSet384;
{ .AddChildren }
HAnimSegment371.AddChildren([Shape383]);
HAnimSite387 := THAnimSiteNode.Create;
HAnimSite387.NameField := 'r_forefoot_tip';
HAnimSite387.Translation := Vector3(-0.1043,0.0227,0.145);
TouchSensor388 := TTouchSensorNode.Create;
TouchSensor388.Description := 'HAnimSite r_forefoot_tip';
{ .AddChildren }
HAnimSite387.AddChildren([TouchSensor388]);
Shape389 := TShapeNode.Create;
Shape389 := Shape113;
{ .AddChildren }
HAnimSite387.AddChildren([Shape389]);
{ .AddChildren }
HAnimSegment371.AddChildren([HAnimSite387]);
HAnimSite390 := THAnimSiteNode.Create;
HAnimSite390.NameField := 'r_metatarsal_pha5_pt';
HAnimSite390.Translation := Vector3(-0.1523,0.0166,0.0895);
TouchSensor391 := TTouchSensorNode.Create;
TouchSensor391.Description := 'HAnimSite r_metatarsal_pha5';
{ .AddChildren }
HAnimSite390.AddChildren([TouchSensor391]);
Shape392 := TShapeNode.Create;
Shape392 := Shape113;
{ .AddChildren }
HAnimSite390.AddChildren([Shape392]);
{ .AddChildren }
HAnimSegment371.AddChildren([HAnimSite390]);
HAnimSite393 := THAnimSiteNode.Create;
HAnimSite393.NameField := 'r_digit2_pt';
HAnimSite393.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor394 := TTouchSensorNode.Create;
TouchSensor394.Description := 'HAnimSite r_digit2';
{ .AddChildren }
HAnimSite393.AddChildren([TouchSensor394]);
Shape395 := TShapeNode.Create;
Shape395 := Shape113;
{ .AddChildren }
HAnimSite393.AddChildren([Shape395]);
{ .AddChildren }
HAnimSegment371.AddChildren([HAnimSite393]);
{ .AddChildren }
HAnimJoint370.AddChildren([HAnimSegment371]);
{ .AddChildren }
HAnimJoint354.AddChildren([HAnimJoint370]);
{ .AddChildren }
HAnimJoint345.AddChildren([HAnimJoint354]);
{ .AddChildren }
HAnimJoint308.AddChildren([HAnimJoint345]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimJoint308]);
{ .AddChildren }
HAnimJoint269.AddChildren([HAnimJoint299]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint269]);
{ .AddChildren }
HAnimJoint46.AddChildren([HAnimJoint62]);
HAnimJoint396 := THAnimJointNode.Create;
HAnimJoint396.NameField := 'vl5';
HAnimJoint396.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment397 := THAnimSegmentNode.Create;
HAnimSegment397.NameField := 'l5';
TouchSensor398 := TTouchSensorNode.Create;
TouchSensor398.Description := 'HAnimJoint vl5, HAnimSegment l5';
{ .AddChildren }
HAnimSegment397.AddChildren([TouchSensor398]);
Transform399 := TTransformNode.Create;
Transform399.Translation := Vector3(0.0028,1.0568,-0.0776);
Shape400 := TShapeNode.Create;
Shape400 := Shape50;
{ .AddChild }
Transform399.AddChildren([Shape400]);
{ .AddChildren }
HAnimSegment397.AddChildren([Transform399]);
Shape401 := TShapeNode.Create;
LineSet402 := TLineSetNode.Create;
LineSet402.SetVertexCount([2]);
ColorRGBA403 := TColorRGBANode.Create;
ColorRGBA403 := ColorRGBA56;
{ .SetColor }
LineSet402.Color := ColorRGBA403;
Coordinate404 := TCoordinateNode.Create;
Coordinate404.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ .SetCoord }
LineSet402.Coord := Coordinate404;
{ .SetGeometry }
Shape401.Geometry := LineSet402;
{ .AddChildren }
HAnimSegment397.AddChildren([Shape401]);
Shape405 := TShapeNode.Create;
LineSet406 := TLineSetNode.Create;
LineSet406.SetVertexCount([2]);
ColorRGBA407 := TColorRGBANode.Create;
ColorRGBA407 := ColorRGBA77;
{ .SetColor }
LineSet406.Color := ColorRGBA407;
Coordinate408 := TCoordinateNode.Create;
Coordinate408.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0,1.0915,-0.1091)]);
{ .SetCoord }
LineSet406.Coord := Coordinate408;
{ .SetGeometry }
Shape405.Geometry := LineSet406;
{ .AddChildren }
HAnimSegment397.AddChildren([Shape405]);
Shape409 := TShapeNode.Create;
LineSet410 := TLineSetNode.Create;
LineSet410.SetVertexCount([2]);
ColorRGBA411 := TColorRGBANode.Create;
ColorRGBA411 := ColorRGBA77;
{ .SetColor }
LineSet410.Color := ColorRGBA411;
Coordinate412 := TCoordinateNode.Create;
Coordinate412.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0069,1.0966,0.1017)]);
{ .SetCoord }
LineSet410.Coord := Coordinate412;
{ .SetGeometry }
Shape409.Geometry := LineSet410;
{ .AddChildren }
HAnimSegment397.AddChildren([Shape409]);
HAnimSite413 := THAnimSiteNode.Create;
HAnimSite413.NameField := 'waist_preferred_post_pt';
HAnimSite413.Translation := Vector3(0,1.0915,-0.1091);
TouchSensor414 := TTouchSensorNode.Create;
TouchSensor414.Description := 'HAnimSite waist_preferred_post';
{ .AddChildren }
HAnimSite413.AddChildren([TouchSensor414]);
Shape415 := TShapeNode.Create;
Shape415 := Shape113;
{ .AddChildren }
HAnimSite413.AddChildren([Shape415]);
{ .AddChildren }
HAnimSegment397.AddChildren([HAnimSite413]);
HAnimSite416 := THAnimSiteNode.Create;
HAnimSite416.NameField := 'navel_pt';
HAnimSite416.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor417 := TTouchSensorNode.Create;
TouchSensor417.Description := 'HAnimSite navel';
{ .AddChildren }
HAnimSite416.AddChildren([TouchSensor417]);
Shape418 := TShapeNode.Create;
Shape418 := Shape113;
{ .AddChildren }
HAnimSite416.AddChildren([Shape418]);
{ .AddChildren }
HAnimSegment397.AddChildren([HAnimSite416]);
{ .AddChildren }
HAnimJoint396.AddChildren([HAnimSegment397]);
HAnimJoint419 := THAnimJointNode.Create;
HAnimJoint419.NameField := 'vl4';
HAnimJoint419.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment420 := THAnimSegmentNode.Create;
HAnimSegment420.NameField := 'l4';
TouchSensor421 := TTouchSensorNode.Create;
TouchSensor421.Description := 'HAnimJoint vl4, HAnimSegment l4';
{ .AddChildren }
HAnimSegment420.AddChildren([TouchSensor421]);
Transform422 := TTransformNode.Create;
Transform422.Translation := Vector3(0.0035,1.0925,-0.0787);
Shape423 := TShapeNode.Create;
Shape423 := Shape50;
{ .AddChild }
Transform422.AddChildren([Shape423]);
{ .AddChildren }
HAnimSegment420.AddChildren([Transform422]);
Shape424 := TShapeNode.Create;
LineSet425 := TLineSetNode.Create;
LineSet425.SetVertexCount([2]);
ColorRGBA426 := TColorRGBANode.Create;
ColorRGBA426 := ColorRGBA56;
{ .SetColor }
LineSet425.Color := ColorRGBA426;
Coordinate427 := TCoordinateNode.Create;
Coordinate427.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet425.Coord := Coordinate427;
{ .SetGeometry }
Shape424.Geometry := LineSet425;
{ .AddChildren }
HAnimSegment420.AddChildren([Shape424]);
{ .AddChildren }
HAnimJoint419.AddChildren([HAnimSegment420]);
HAnimJoint428 := THAnimJointNode.Create;
HAnimJoint428.NameField := 'vl3';
HAnimJoint428.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment429 := THAnimSegmentNode.Create;
HAnimSegment429.NameField := 'l3';
TouchSensor430 := TTouchSensorNode.Create;
TouchSensor430.Description := 'HAnimJoint vl3, HAnimSegment l3';
{ .AddChildren }
HAnimSegment429.AddChildren([TouchSensor430]);
Transform431 := TTransformNode.Create;
Transform431.Translation := Vector3(0.0041,1.1276,-0.0796);
Shape432 := TShapeNode.Create;
Shape432 := Shape50;
{ .AddChild }
Transform431.AddChildren([Shape432]);
{ .AddChildren }
HAnimSegment429.AddChildren([Transform431]);
Shape433 := TShapeNode.Create;
LineSet434 := TLineSetNode.Create;
LineSet434.SetVertexCount([2]);
ColorRGBA435 := TColorRGBANode.Create;
ColorRGBA435 := ColorRGBA56;
{ .SetColor }
LineSet434.Color := ColorRGBA435;
Coordinate436 := TCoordinateNode.Create;
Coordinate436.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ .SetCoord }
LineSet434.Coord := Coordinate436;
{ .SetGeometry }
Shape433.Geometry := LineSet434;
{ .AddChildren }
HAnimSegment429.AddChildren([Shape433]);
{ .AddChildren }
HAnimJoint428.AddChildren([HAnimSegment429]);
HAnimJoint437 := THAnimJointNode.Create;
HAnimJoint437.NameField := 'vl2';
HAnimJoint437.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment438 := THAnimSegmentNode.Create;
HAnimSegment438.NameField := 'l2';
TouchSensor439 := TTouchSensorNode.Create;
TouchSensor439.Description := 'HAnimJoint vl2, HAnimSegment l2';
{ .AddChildren }
HAnimSegment438.AddChildren([TouchSensor439]);
Transform440 := TTransformNode.Create;
Transform440.Translation := Vector3(0.0045,1.1546,-0.08);
Shape441 := TShapeNode.Create;
Shape441 := Shape50;
{ .AddChild }
Transform440.AddChildren([Shape441]);
{ .AddChildren }
HAnimSegment438.AddChildren([Transform440]);
Shape442 := TShapeNode.Create;
LineSet443 := TLineSetNode.Create;
LineSet443.SetVertexCount([2]);
ColorRGBA444 := TColorRGBANode.Create;
ColorRGBA444 := ColorRGBA56;
{ .SetColor }
LineSet443.Color := ColorRGBA444;
Coordinate445 := TCoordinateNode.Create;
Coordinate445.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet443.Coord := Coordinate445;
{ .SetGeometry }
Shape442.Geometry := LineSet443;
{ .AddChildren }
HAnimSegment438.AddChildren([Shape442]);
Shape446 := TShapeNode.Create;
LineSet447 := TLineSetNode.Create;
LineSet447.SetVertexCount([2]);
ColorRGBA448 := TColorRGBANode.Create;
ColorRGBA448 := ColorRGBA77;
{ .SetColor }
LineSet447.Color := ColorRGBA448;
Coordinate449 := TCoordinateNode.Create;
Coordinate449.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(-0.0711,1.1941,0.1016)]);
{ .SetCoord }
LineSet447.Coord := Coordinate449;
{ .SetGeometry }
Shape446.Geometry := LineSet447;
{ .AddChildren }
HAnimSegment438.AddChildren([Shape446]);
Shape450 := TShapeNode.Create;
LineSet451 := TLineSetNode.Create;
LineSet451.SetVertexCount([2]);
ColorRGBA452 := TColorRGBANode.Create;
ColorRGBA452 := ColorRGBA77;
{ .SetColor }
LineSet451.Color := ColorRGBA452;
Coordinate453 := TCoordinateNode.Create;
Coordinate453.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0871,1.1925,0.0992)]);
{ .SetCoord }
LineSet451.Coord := Coordinate453;
{ .SetGeometry }
Shape450.Geometry := LineSet451;
{ .AddChildren }
HAnimSegment438.AddChildren([Shape450]);
Shape454 := TShapeNode.Create;
LineSet455 := TLineSetNode.Create;
LineSet455.SetVertexCount([2]);
ColorRGBA456 := TColorRGBANode.Create;
ColorRGBA456 := ColorRGBA77;
{ .SetColor }
LineSet455.Color := ColorRGBA456;
Coordinate457 := TCoordinateNode.Create;
Coordinate457.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0049,1.1908,-0.1113)]);
{ .SetCoord }
LineSet455.Coord := Coordinate457;
{ .SetGeometry }
Shape454.Geometry := LineSet455;
{ .AddChildren }
HAnimSegment438.AddChildren([Shape454]);
HAnimSite458 := THAnimSiteNode.Create;
HAnimSite458.NameField := 'r_rib10_pt';
HAnimSite458.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor459 := TTouchSensorNode.Create;
TouchSensor459.Description := 'HAnimSite r_rib10';
{ .AddChildren }
HAnimSite458.AddChildren([TouchSensor459]);
Shape460 := TShapeNode.Create;
Shape460 := Shape113;
{ .AddChildren }
HAnimSite458.AddChildren([Shape460]);
{ .AddChildren }
HAnimSegment438.AddChildren([HAnimSite458]);
HAnimSite461 := THAnimSiteNode.Create;
HAnimSite461.NameField := 'l_rib10_pt';
HAnimSite461.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor462 := TTouchSensorNode.Create;
TouchSensor462.Description := 'HAnimSite l_rib10';
{ .AddChildren }
HAnimSite461.AddChildren([TouchSensor462]);
Shape463 := TShapeNode.Create;
Shape463 := Shape113;
{ .AddChildren }
HAnimSite461.AddChildren([Shape463]);
{ .AddChildren }
HAnimSegment438.AddChildren([HAnimSite461]);
HAnimSite464 := THAnimSiteNode.Create;
HAnimSite464.NameField := 'rib10_midspine_pt';
HAnimSite464.Translation := Vector3(0.0049,1.1908,-0.1113);
TouchSensor465 := TTouchSensorNode.Create;
TouchSensor465.Description := 'HAnimSite rib10_midspine';
{ .AddChildren }
HAnimSite464.AddChildren([TouchSensor465]);
Shape466 := TShapeNode.Create;
Shape466 := Shape113;
{ .AddChildren }
HAnimSite464.AddChildren([Shape466]);
{ .AddChildren }
HAnimSegment438.AddChildren([HAnimSite464]);
{ .AddChildren }
HAnimJoint437.AddChildren([HAnimSegment438]);
HAnimJoint467 := THAnimJointNode.Create;
HAnimJoint467.NameField := 'vl1';
HAnimJoint467.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment468 := THAnimSegmentNode.Create;
HAnimSegment468.NameField := 'l1';
TouchSensor469 := TTouchSensorNode.Create;
TouchSensor469.Description := 'HAnimJoint vl1, HAnimSegment l1';
{ .AddChildren }
HAnimSegment468.AddChildren([TouchSensor469]);
Transform470 := TTransformNode.Create;
Transform470.Translation := Vector3(0.0048,1.1912,-0.0805);
Shape471 := TShapeNode.Create;
Shape471 := Shape50;
{ .AddChild }
Transform470.AddChildren([Shape471]);
{ .AddChildren }
HAnimSegment468.AddChildren([Transform470]);
Shape472 := TShapeNode.Create;
LineSet473 := TLineSetNode.Create;
LineSet473.SetVertexCount([2]);
ColorRGBA474 := TColorRGBANode.Create;
ColorRGBA474 := ColorRGBA56;
{ .SetColor }
LineSet473.Color := ColorRGBA474;
Coordinate475 := TCoordinateNode.Create;
Coordinate475.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ .SetCoord }
LineSet473.Coord := Coordinate475;
{ .SetGeometry }
Shape472.Geometry := LineSet473;
{ .AddChildren }
HAnimSegment468.AddChildren([Shape472]);
{ .AddChildren }
HAnimJoint467.AddChildren([HAnimSegment468]);
HAnimJoint476 := THAnimJointNode.Create;
HAnimJoint476.NameField := 'vt12';
HAnimJoint476.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment477 := THAnimSegmentNode.Create;
HAnimSegment477.NameField := 't12';
TouchSensor478 := TTouchSensorNode.Create;
TouchSensor478.Description := 'HAnimJoint vt12, HAnimSegment t12';
{ .AddChildren }
HAnimSegment477.AddChildren([TouchSensor478]);
Transform479 := TTransformNode.Create;
Transform479.Translation := Vector3(0.0051,1.2278,-0.0808);
Shape480 := TShapeNode.Create;
Shape480 := Shape50;
{ .AddChild }
Transform479.AddChildren([Shape480]);
{ .AddChildren }
HAnimSegment477.AddChildren([Transform479]);
Shape481 := TShapeNode.Create;
LineSet482 := TLineSetNode.Create;
LineSet482.SetVertexCount([2]);
ColorRGBA483 := TColorRGBANode.Create;
ColorRGBA483 := ColorRGBA56;
{ .SetColor }
LineSet482.Color := ColorRGBA483;
Coordinate484 := TCoordinateNode.Create;
Coordinate484.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ .SetCoord }
LineSet482.Coord := Coordinate484;
{ .SetGeometry }
Shape481.Geometry := LineSet482;
{ .AddChildren }
HAnimSegment477.AddChildren([Shape481]);
{ .AddChildren }
HAnimJoint476.AddChildren([HAnimSegment477]);
HAnimJoint485 := THAnimJointNode.Create;
HAnimJoint485.NameField := 'vt11';
HAnimJoint485.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment486 := THAnimSegmentNode.Create;
HAnimSegment486.NameField := 't11';
TouchSensor487 := TTouchSensorNode.Create;
TouchSensor487.Description := 'HAnimJoint vt11, HAnimSegment t11';
{ .AddChildren }
HAnimSegment486.AddChildren([TouchSensor487]);
Transform488 := TTransformNode.Create;
Transform488.Translation := Vector3(0.0053,1.2679,-0.081);
Shape489 := TShapeNode.Create;
Shape489 := Shape50;
{ .AddChild }
Transform488.AddChildren([Shape489]);
{ .AddChildren }
HAnimSegment486.AddChildren([Transform488]);
Shape490 := TShapeNode.Create;
LineSet491 := TLineSetNode.Create;
LineSet491.SetVertexCount([2]);
ColorRGBA492 := TColorRGBANode.Create;
ColorRGBA492 := ColorRGBA56;
{ .SetColor }
LineSet491.Color := ColorRGBA492;
Coordinate493 := TCoordinateNode.Create;
Coordinate493.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet491.Coord := Coordinate493;
{ .SetGeometry }
Shape490.Geometry := LineSet491;
{ .AddChildren }
HAnimSegment486.AddChildren([Shape490]);
{ .AddChildren }
HAnimJoint485.AddChildren([HAnimSegment486]);
HAnimJoint494 := THAnimJointNode.Create;
HAnimJoint494.NameField := 'vt10';
HAnimJoint494.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment495 := THAnimSegmentNode.Create;
HAnimSegment495.NameField := 't10';
TouchSensor496 := TTouchSensorNode.Create;
TouchSensor496.Description := 'HAnimJoint vt10, HAnimSegment t10';
{ .AddChildren }
HAnimSegment495.AddChildren([TouchSensor496]);
Transform497 := TTransformNode.Create;
Transform497.Translation := Vector3(0.0056,1.2848,-0.0822);
Shape498 := TShapeNode.Create;
Shape498 := Shape50;
{ .AddChild }
Transform497.AddChildren([Shape498]);
{ .AddChildren }
HAnimSegment495.AddChildren([Transform497]);
Shape499 := TShapeNode.Create;
LineSet500 := TLineSetNode.Create;
LineSet500.SetVertexCount([2]);
ColorRGBA501 := TColorRGBANode.Create;
ColorRGBA501 := ColorRGBA56;
{ .SetColor }
LineSet500.Color := ColorRGBA501;
Coordinate502 := TCoordinateNode.Create;
Coordinate502.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ .SetCoord }
LineSet500.Coord := Coordinate502;
{ .SetGeometry }
Shape499.Geometry := LineSet500;
{ .AddChildren }
HAnimSegment495.AddChildren([Shape499]);
Shape503 := TShapeNode.Create;
LineSet504 := TLineSetNode.Create;
LineSet504.SetVertexCount([2]);
ColorRGBA505 := TColorRGBANode.Create;
ColorRGBA505 := ColorRGBA77;
{ .SetColor }
LineSet504.Color := ColorRGBA505;
Coordinate506 := TCoordinateNode.Create;
Coordinate506.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0085,1.2995,0.1147)]);
{ .SetCoord }
LineSet504.Coord := Coordinate506;
{ .SetGeometry }
Shape503.Geometry := LineSet504;
{ .AddChildren }
HAnimSegment495.AddChildren([Shape503]);
HAnimSite507 := THAnimSiteNode.Create;
HAnimSite507.NameField := 'substernale_pt';
HAnimSite507.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor508 := TTouchSensorNode.Create;
TouchSensor508.Description := 'HAnimSite substernale';
{ .AddChildren }
HAnimSite507.AddChildren([TouchSensor508]);
Shape509 := TShapeNode.Create;
Shape509 := Shape113;
{ .AddChildren }
HAnimSite507.AddChildren([Shape509]);
{ .AddChildren }
HAnimSegment495.AddChildren([HAnimSite507]);
{ .AddChildren }
HAnimJoint494.AddChildren([HAnimSegment495]);
HAnimJoint510 := THAnimJointNode.Create;
HAnimJoint510.NameField := 'vt9';
HAnimJoint510.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment511 := THAnimSegmentNode.Create;
HAnimSegment511.NameField := 't9';
TouchSensor512 := TTouchSensorNode.Create;
TouchSensor512.Description := 'HAnimJoint vt9, HAnimSegment t9';
{ .AddChildren }
HAnimSegment511.AddChildren([TouchSensor512]);
Transform513 := TTransformNode.Create;
Transform513.Translation := Vector3(0.0057,1.3126,-0.0838);
Shape514 := TShapeNode.Create;
Shape514 := Shape50;
{ .AddChild }
Transform513.AddChildren([Shape514]);
{ .AddChildren }
HAnimSegment511.AddChildren([Transform513]);
Shape515 := TShapeNode.Create;
LineSet516 := TLineSetNode.Create;
LineSet516.SetVertexCount([2]);
ColorRGBA517 := TColorRGBANode.Create;
ColorRGBA517 := ColorRGBA56;
{ .SetColor }
LineSet516.Color := ColorRGBA517;
Coordinate518 := TCoordinateNode.Create;
Coordinate518.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ .SetCoord }
LineSet516.Coord := Coordinate518;
{ .SetGeometry }
Shape515.Geometry := LineSet516;
{ .AddChildren }
HAnimSegment511.AddChildren([Shape515]);
Shape519 := TShapeNode.Create;
LineSet520 := TLineSetNode.Create;
LineSet520.SetVertexCount([2]);
ColorRGBA521 := TColorRGBANode.Create;
ColorRGBA521 := ColorRGBA77;
{ .SetColor }
LineSet520.Color := ColorRGBA521;
Coordinate522 := TCoordinateNode.Create;
Coordinate522.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(-0.0736,1.3385,0.1217)]);
{ .SetCoord }
LineSet520.Coord := Coordinate522;
{ .SetGeometry }
Shape519.Geometry := LineSet520;
{ .AddChildren }
HAnimSegment511.AddChildren([Shape519]);
Shape523 := TShapeNode.Create;
LineSet524 := TLineSetNode.Create;
LineSet524.SetVertexCount([2]);
ColorRGBA525 := TColorRGBANode.Create;
ColorRGBA525 := ColorRGBA77;
{ .SetColor }
LineSet524.Color := ColorRGBA525;
Coordinate526 := TCoordinateNode.Create;
Coordinate526.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0918,1.3382,0.1192)]);
{ .SetCoord }
LineSet524.Coord := Coordinate526;
{ .SetGeometry }
Shape523.Geometry := LineSet524;
{ .AddChildren }
HAnimSegment511.AddChildren([Shape523]);
HAnimSite527 := THAnimSiteNode.Create;
HAnimSite527.NameField := 'r_thelion_pt';
HAnimSite527.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor528 := TTouchSensorNode.Create;
TouchSensor528.Description := 'HAnimSite r_thelion';
{ .AddChildren }
HAnimSite527.AddChildren([TouchSensor528]);
Shape529 := TShapeNode.Create;
Shape529 := Shape113;
{ .AddChildren }
HAnimSite527.AddChildren([Shape529]);
{ .AddChildren }
HAnimSegment511.AddChildren([HAnimSite527]);
HAnimSite530 := THAnimSiteNode.Create;
HAnimSite530.NameField := 'l_thelion_pt';
HAnimSite530.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor531 := TTouchSensorNode.Create;
TouchSensor531.Description := 'HAnimSite l_thelion';
{ .AddChildren }
HAnimSite530.AddChildren([TouchSensor531]);
Shape532 := TShapeNode.Create;
Shape532 := Shape113;
{ .AddChildren }
HAnimSite530.AddChildren([Shape532]);
{ .AddChildren }
HAnimSegment511.AddChildren([HAnimSite530]);
{ .AddChildren }
HAnimJoint510.AddChildren([HAnimSegment511]);
HAnimJoint533 := THAnimJointNode.Create;
HAnimJoint533.NameField := 'vt8';
HAnimJoint533.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment534 := THAnimSegmentNode.Create;
HAnimSegment534.NameField := 't8';
TouchSensor535 := TTouchSensorNode.Create;
TouchSensor535.Description := 'HAnimJoint vt8, HAnimSegment t8';
{ .AddChildren }
HAnimSegment534.AddChildren([TouchSensor535]);
Transform536 := TTransformNode.Create;
Transform536.Translation := Vector3(0.0057,1.3382,-0.0845);
Shape537 := TShapeNode.Create;
Shape537 := Shape50;
{ .AddChild }
Transform536.AddChildren([Shape537]);
{ .AddChildren }
HAnimSegment534.AddChildren([Transform536]);
Shape538 := TShapeNode.Create;
LineSet539 := TLineSetNode.Create;
LineSet539.SetVertexCount([2]);
ColorRGBA540 := TColorRGBANode.Create;
ColorRGBA540 := ColorRGBA56;
{ .SetColor }
LineSet539.Color := ColorRGBA540;
Coordinate541 := TCoordinateNode.Create;
Coordinate541.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ .SetCoord }
LineSet539.Coord := Coordinate541;
{ .SetGeometry }
Shape538.Geometry := LineSet539;
{ .AddChildren }
HAnimSegment534.AddChildren([Shape538]);
{ .AddChildren }
HAnimJoint533.AddChildren([HAnimSegment534]);
HAnimJoint542 := THAnimJointNode.Create;
HAnimJoint542.NameField := 'vt7';
HAnimJoint542.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment543 := THAnimSegmentNode.Create;
HAnimSegment543.NameField := 't7';
TouchSensor544 := TTouchSensorNode.Create;
TouchSensor544.Description := 'HAnimJoint vt7, HAnimSegment t7';
{ .AddChildren }
HAnimSegment543.AddChildren([TouchSensor544]);
Transform545 := TTransformNode.Create;
Transform545.Translation := Vector3(0.0058,1.3625,-0.0833);
Shape546 := TShapeNode.Create;
Shape546 := Shape50;
{ .AddChild }
Transform545.AddChildren([Shape546]);
{ .AddChildren }
HAnimSegment543.AddChildren([Transform545]);
Shape547 := TShapeNode.Create;
LineSet548 := TLineSetNode.Create;
LineSet548.SetVertexCount([2]);
ColorRGBA549 := TColorRGBANode.Create;
ColorRGBA549 := ColorRGBA56;
{ .SetColor }
LineSet548.Color := ColorRGBA549;
Coordinate550 := TCoordinateNode.Create;
Coordinate550.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet548.Coord := Coordinate550;
{ .SetGeometry }
Shape547.Geometry := LineSet548;
{ .AddChildren }
HAnimSegment543.AddChildren([Shape547]);
{ .AddChildren }
HAnimJoint542.AddChildren([HAnimSegment543]);
HAnimJoint551 := THAnimJointNode.Create;
HAnimJoint551.NameField := 'vt6';
HAnimJoint551.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment552 := THAnimSegmentNode.Create;
HAnimSegment552.NameField := 't6';
TouchSensor553 := TTouchSensorNode.Create;
TouchSensor553.Description := 'HAnimJoint vt6, HAnimSegment t6';
{ .AddChildren }
HAnimSegment552.AddChildren([TouchSensor553]);
Transform554 := TTransformNode.Create;
Transform554.Translation := Vector3(0.0059,1.3866,-0.08);
Shape555 := TShapeNode.Create;
Shape555 := Shape50;
{ .AddChild }
Transform554.AddChildren([Shape555]);
{ .AddChildren }
HAnimSegment552.AddChildren([Transform554]);
Shape556 := TShapeNode.Create;
LineSet557 := TLineSetNode.Create;
LineSet557.SetVertexCount([2]);
ColorRGBA558 := TColorRGBANode.Create;
ColorRGBA558 := ColorRGBA56;
{ .SetColor }
LineSet557.Color := ColorRGBA558;
Coordinate559 := TCoordinateNode.Create;
Coordinate559.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ .SetCoord }
LineSet557.Coord := Coordinate559;
{ .SetGeometry }
Shape556.Geometry := LineSet557;
{ .AddChildren }
HAnimSegment552.AddChildren([Shape556]);
{ .AddChildren }
HAnimJoint551.AddChildren([HAnimSegment552]);
HAnimJoint560 := THAnimJointNode.Create;
HAnimJoint560.NameField := 'vt5';
HAnimJoint560.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment561 := THAnimSegmentNode.Create;
HAnimSegment561.NameField := 't5';
TouchSensor562 := TTouchSensorNode.Create;
TouchSensor562.Description := 'HAnimJoint vt5, HAnimSegment t5';
{ .AddChildren }
HAnimSegment561.AddChildren([TouchSensor562]);
Transform563 := TTransformNode.Create;
Transform563.Translation := Vector3(0.006,1.4102,-0.0745);
Shape564 := TShapeNode.Create;
Shape564 := Shape50;
{ .AddChild }
Transform563.AddChildren([Shape564]);
{ .AddChildren }
HAnimSegment561.AddChildren([Transform563]);
Shape565 := TShapeNode.Create;
LineSet566 := TLineSetNode.Create;
LineSet566.SetVertexCount([2]);
ColorRGBA567 := TColorRGBANode.Create;
ColorRGBA567 := ColorRGBA56;
{ .SetColor }
LineSet566.Color := ColorRGBA567;
Coordinate568 := TCoordinateNode.Create;
Coordinate568.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ .SetCoord }
LineSet566.Coord := Coordinate568;
{ .SetGeometry }
Shape565.Geometry := LineSet566;
{ .AddChildren }
HAnimSegment561.AddChildren([Shape565]);
{ .AddChildren }
HAnimJoint560.AddChildren([HAnimSegment561]);
HAnimJoint569 := THAnimJointNode.Create;
HAnimJoint569.NameField := 'vt4';
HAnimJoint569.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment570 := THAnimSegmentNode.Create;
HAnimSegment570.NameField := 't4';
TouchSensor571 := TTouchSensorNode.Create;
TouchSensor571.Description := 'HAnimJoint vt4, HAnimSegment t4';
{ .AddChildren }
HAnimSegment570.AddChildren([TouchSensor571]);
Transform572 := TTransformNode.Create;
Transform572.Translation := Vector3(0.0061,1.432,-0.0675);
Shape573 := TShapeNode.Create;
Shape573 := Shape50;
{ .AddChild }
Transform572.AddChildren([Shape573]);
{ .AddChildren }
HAnimSegment570.AddChildren([Transform572]);
Shape574 := TShapeNode.Create;
LineSet575 := TLineSetNode.Create;
LineSet575.SetVertexCount([2]);
ColorRGBA576 := TColorRGBANode.Create;
ColorRGBA576 := ColorRGBA56;
{ .SetColor }
LineSet575.Color := ColorRGBA576;
Coordinate577 := TCoordinateNode.Create;
Coordinate577.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ .SetCoord }
LineSet575.Coord := Coordinate577;
{ .SetGeometry }
Shape574.Geometry := LineSet575;
{ .AddChildren }
HAnimSegment570.AddChildren([Shape574]);
{ .AddChildren }
HAnimJoint569.AddChildren([HAnimSegment570]);
HAnimJoint578 := THAnimJointNode.Create;
HAnimJoint578.NameField := 'vt3';
HAnimJoint578.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment579 := THAnimSegmentNode.Create;
HAnimSegment579.NameField := 't3';
TouchSensor580 := TTouchSensorNode.Create;
TouchSensor580.Description := 'HAnimJoint vt3, HAnimSegment t3';
{ .AddChildren }
HAnimSegment579.AddChildren([TouchSensor580]);
Transform581 := TTransformNode.Create;
Transform581.Translation := Vector3(0.0062,1.4583,-0.057);
Shape582 := TShapeNode.Create;
Shape582 := Shape50;
{ .AddChild }
Transform581.AddChildren([Shape582]);
{ .AddChildren }
HAnimSegment579.AddChildren([Transform581]);
Shape583 := TShapeNode.Create;
LineSet584 := TLineSetNode.Create;
LineSet584.SetVertexCount([2]);
ColorRGBA585 := TColorRGBANode.Create;
ColorRGBA585 := ColorRGBA56;
{ .SetColor }
LineSet584.Color := ColorRGBA585;
Coordinate586 := TCoordinateNode.Create;
Coordinate586.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ .SetCoord }
LineSet584.Coord := Coordinate586;
{ .SetGeometry }
Shape583.Geometry := LineSet584;
{ .AddChildren }
HAnimSegment579.AddChildren([Shape583]);
{ .AddChildren }
HAnimJoint578.AddChildren([HAnimSegment579]);
HAnimJoint587 := THAnimJointNode.Create;
HAnimJoint587.NameField := 'vt2';
HAnimJoint587.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment588 := THAnimSegmentNode.Create;
HAnimSegment588.NameField := 't2';
TouchSensor589 := TTouchSensorNode.Create;
TouchSensor589.Description := 'HAnimJoint vt2, HAnimSegment t2';
{ .AddChildren }
HAnimSegment588.AddChildren([TouchSensor589]);
Transform590 := TTransformNode.Create;
Transform590.Translation := Vector3(0.0063,1.4761,-0.0484);
Shape591 := TShapeNode.Create;
Shape591 := Shape50;
{ .AddChild }
Transform590.AddChildren([Shape591]);
{ .AddChildren }
HAnimSegment588.AddChildren([Transform590]);
Shape592 := TShapeNode.Create;
LineSet593 := TLineSetNode.Create;
LineSet593.SetVertexCount([2]);
ColorRGBA594 := TColorRGBANode.Create;
ColorRGBA594 := ColorRGBA56;
{ .SetColor }
LineSet593.Color := ColorRGBA594;
Coordinate595 := TCoordinateNode.Create;
Coordinate595.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet593.Coord := Coordinate595;
{ .SetGeometry }
Shape592.Geometry := LineSet593;
{ .AddChildren }
HAnimSegment588.AddChildren([Shape592]);
{ .AddChildren }
HAnimJoint587.AddChildren([HAnimSegment588]);
HAnimJoint596 := THAnimJointNode.Create;
HAnimJoint596.NameField := 'vt1';
HAnimJoint596.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment597 := THAnimSegmentNode.Create;
HAnimSegment597.NameField := 't1';
TouchSensor598 := TTouchSensorNode.Create;
TouchSensor598.Description := 'HAnimJoint vt1, HAnimSegment t1';
{ .AddChildren }
HAnimSegment597.AddChildren([TouchSensor598]);
Transform599 := TTransformNode.Create;
Transform599.Translation := Vector3(0.0065,1.4951,-0.0387);
Shape600 := TShapeNode.Create;
Shape600 := Shape50;
{ .AddChild }
Transform599.AddChildren([Shape600]);
{ .AddChildren }
HAnimSegment597.AddChildren([Transform599]);
Shape601 := TShapeNode.Create;
LineSet602 := TLineSetNode.Create;
LineSet602.SetVertexCount([2]);
ColorRGBA603 := TColorRGBANode.Create;
ColorRGBA603 := ColorRGBA56;
{ .SetColor }
LineSet602.Color := ColorRGBA603;
Coordinate604 := TCoordinateNode.Create;
Coordinate604.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ .SetCoord }
LineSet602.Coord := Coordinate604;
{ .SetGeometry }
Shape601.Geometry := LineSet602;
{ .AddChildren }
HAnimSegment597.AddChildren([Shape601]);
Shape605 := TShapeNode.Create;
LineSet606 := TLineSetNode.Create;
LineSet606.SetVertexCount([2]);
ColorRGBA607 := TColorRGBANode.Create;
ColorRGBA607 := ColorRGBA56;
{ .SetColor }
LineSet606.Color := ColorRGBA607;
Coordinate608 := TCoordinateNode.Create;
Coordinate608.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet606.Coord := Coordinate608;
{ .SetGeometry }
Shape605.Geometry := LineSet606;
{ .AddChildren }
HAnimSegment597.AddChildren([Shape605]);
Shape609 := TShapeNode.Create;
LineSet610 := TLineSetNode.Create;
LineSet610.SetVertexCount([2]);
ColorRGBA611 := TColorRGBANode.Create;
ColorRGBA611 := ColorRGBA56;
{ .SetColor }
LineSet610.Color := ColorRGBA611;
Coordinate612 := TCoordinateNode.Create;
Coordinate612.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet610.Coord := Coordinate612;
{ .SetGeometry }
Shape609.Geometry := LineSet610;
{ .AddChildren }
HAnimSegment597.AddChildren([Shape609]);
Shape613 := TShapeNode.Create;
LineSet614 := TLineSetNode.Create;
LineSet614.SetVertexCount([2]);
ColorRGBA615 := TColorRGBANode.Create;
ColorRGBA615 := ColorRGBA77;
{ .SetColor }
LineSet614.Color := ColorRGBA615;
Coordinate616 := TCoordinateNode.Create;
Coordinate616.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0084,1.4714,0.0551)]);
{ .SetCoord }
LineSet614.Coord := Coordinate616;
{ .SetGeometry }
Shape613.Geometry := LineSet614;
{ .AddChildren }
HAnimSegment597.AddChildren([Shape613]);
Shape617 := TShapeNode.Create;
LineSet618 := TLineSetNode.Create;
LineSet618.SetVertexCount([2]);
ColorRGBA619 := TColorRGBANode.Create;
ColorRGBA619 := ColorRGBA77;
{ .SetColor }
LineSet618.Color := ColorRGBA619;
Coordinate620 := TCoordinateNode.Create;
Coordinate620.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0064,1.52,-0.0815)]);
{ .SetCoord }
LineSet618.Coord := Coordinate620;
{ .SetGeometry }
Shape617.Geometry := LineSet618;
{ .AddChildren }
HAnimSegment597.AddChildren([Shape617]);
HAnimSite621 := THAnimSiteNode.Create;
HAnimSite621.NameField := 'suprasternale_pt';
HAnimSite621.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor622 := TTouchSensorNode.Create;
TouchSensor622.Description := 'HAnimSite suprasternale';
{ .AddChildren }
HAnimSite621.AddChildren([TouchSensor622]);
Shape623 := TShapeNode.Create;
Shape623 := Shape113;
{ .AddChildren }
HAnimSite621.AddChildren([Shape623]);
{ .AddChildren }
HAnimSegment597.AddChildren([HAnimSite621]);
HAnimSite624 := THAnimSiteNode.Create;
HAnimSite624.NameField := 'cervicale_pt';
HAnimSite624.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor625 := TTouchSensorNode.Create;
TouchSensor625.Description := 'HAnimSite cervicale';
{ .AddChildren }
HAnimSite624.AddChildren([TouchSensor625]);
Shape626 := TShapeNode.Create;
Shape626 := Shape113;
{ .AddChildren }
HAnimSite624.AddChildren([Shape626]);
{ .AddChildren }
HAnimSegment597.AddChildren([HAnimSite624]);
{ .AddChildren }
HAnimJoint596.AddChildren([HAnimSegment597]);
HAnimJoint627 := THAnimJointNode.Create;
HAnimJoint627.NameField := 'vc7';
HAnimJoint627.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment628 := THAnimSegmentNode.Create;
HAnimSegment628.NameField := 'c7';
TouchSensor629 := TTouchSensorNode.Create;
TouchSensor629.Description := 'HAnimJoint vc7, HAnimSegment c7';
{ .AddChildren }
HAnimSegment628.AddChildren([TouchSensor629]);
Transform630 := TTransformNode.Create;
Transform630.Translation := Vector3(0.0066,1.5132,-0.0301);
Shape631 := TShapeNode.Create;
Shape631 := Shape50;
{ .AddChild }
Transform630.AddChildren([Shape631]);
{ .AddChildren }
HAnimSegment628.AddChildren([Transform630]);
Shape632 := TShapeNode.Create;
LineSet633 := TLineSetNode.Create;
LineSet633.SetVertexCount([2]);
ColorRGBA634 := TColorRGBANode.Create;
ColorRGBA634 := ColorRGBA56;
{ .SetColor }
LineSet633.Color := ColorRGBA634;
Coordinate635 := TCoordinateNode.Create;
Coordinate635.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ .SetCoord }
LineSet633.Coord := Coordinate635;
{ .SetGeometry }
Shape632.Geometry := LineSet633;
{ .AddChildren }
HAnimSegment628.AddChildren([Shape632]);
Shape636 := TShapeNode.Create;
LineSet637 := TLineSetNode.Create;
LineSet637.SetVertexCount([2]);
ColorRGBA638 := TColorRGBANode.Create;
ColorRGBA638 := ColorRGBA77;
{ .SetColor }
LineSet637.Color := ColorRGBA638;
Coordinate639 := TCoordinateNode.Create;
Coordinate639.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(-0.0419,1.5149,-0.022)]);
{ .SetCoord }
LineSet637.Coord := Coordinate639;
{ .SetGeometry }
Shape636.Geometry := LineSet637;
{ .AddChildren }
HAnimSegment628.AddChildren([Shape636]);
Shape640 := TShapeNode.Create;
LineSet641 := TLineSetNode.Create;
LineSet641.SetVertexCount([2]);
ColorRGBA642 := TColorRGBANode.Create;
ColorRGBA642 := ColorRGBA77;
{ .SetColor }
LineSet641.Color := ColorRGBA642;
Coordinate643 := TCoordinateNode.Create;
Coordinate643.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0646,1.5141,-0.038)]);
{ .SetCoord }
LineSet641.Coord := Coordinate643;
{ .SetGeometry }
Shape640.Geometry := LineSet641;
{ .AddChildren }
HAnimSegment628.AddChildren([Shape640]);
HAnimSite644 := THAnimSiteNode.Create;
HAnimSite644.NameField := 'r_neck_base_pt';
HAnimSite644.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor645 := TTouchSensorNode.Create;
TouchSensor645.Description := 'HAnimSite r_neck_base';
{ .AddChildren }
HAnimSite644.AddChildren([TouchSensor645]);
Shape646 := TShapeNode.Create;
Shape646 := Shape113;
{ .AddChildren }
HAnimSite644.AddChildren([Shape646]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite644]);
HAnimSite647 := THAnimSiteNode.Create;
HAnimSite647.NameField := 'l_neck_base_pt';
HAnimSite647.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor648 := TTouchSensorNode.Create;
TouchSensor648.Description := 'HAnimSite l_neck_base';
{ .AddChildren }
HAnimSite647.AddChildren([TouchSensor648]);
Shape649 := TShapeNode.Create;
Shape649 := Shape113;
{ .AddChildren }
HAnimSite647.AddChildren([Shape649]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite647]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimSegment628]);
HAnimJoint650 := THAnimJointNode.Create;
HAnimJoint650.NameField := 'vc6';
HAnimJoint650.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment651 := THAnimSegmentNode.Create;
HAnimSegment651.NameField := 'c6';
TouchSensor652 := TTouchSensorNode.Create;
TouchSensor652.Description := 'HAnimJoint vc6, HAnimSegment c6';
{ .AddChildren }
HAnimSegment651.AddChildren([TouchSensor652]);
Transform653 := TTransformNode.Create;
Transform653.Translation := Vector3(0.0066,1.5357,-0.0143);
Shape654 := TShapeNode.Create;
Shape654 := Shape50;
{ .AddChild }
Transform653.AddChildren([Shape654]);
{ .AddChildren }
HAnimSegment651.AddChildren([Transform653]);
Shape655 := TShapeNode.Create;
LineSet656 := TLineSetNode.Create;
LineSet656.SetVertexCount([2]);
ColorRGBA657 := TColorRGBANode.Create;
ColorRGBA657 := ColorRGBA56;
{ .SetColor }
LineSet656.Color := ColorRGBA657;
Coordinate658 := TCoordinateNode.Create;
Coordinate658.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ .SetCoord }
LineSet656.Coord := Coordinate658;
{ .SetGeometry }
Shape655.Geometry := LineSet656;
{ .AddChildren }
HAnimSegment651.AddChildren([Shape655]);
{ .AddChildren }
HAnimJoint650.AddChildren([HAnimSegment651]);
HAnimJoint659 := THAnimJointNode.Create;
HAnimJoint659.NameField := 'vc5';
HAnimJoint659.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment660 := THAnimSegmentNode.Create;
HAnimSegment660.NameField := 'c5';
TouchSensor661 := TTouchSensorNode.Create;
TouchSensor661.Description := 'HAnimJoint vc5, HAnimSegment c5';
{ .AddChildren }
HAnimSegment660.AddChildren([TouchSensor661]);
Transform662 := TTransformNode.Create;
Transform662.Translation := Vector3(0.0066,1.552,-0.0082);
Shape663 := TShapeNode.Create;
Shape663 := Shape50;
{ .AddChild }
Transform662.AddChildren([Shape663]);
{ .AddChildren }
HAnimSegment660.AddChildren([Transform662]);
Shape664 := TShapeNode.Create;
LineSet665 := TLineSetNode.Create;
LineSet665.SetVertexCount([2]);
ColorRGBA666 := TColorRGBANode.Create;
ColorRGBA666 := ColorRGBA56;
{ .SetColor }
LineSet665.Color := ColorRGBA666;
Coordinate667 := TCoordinateNode.Create;
Coordinate667.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet665.Coord := Coordinate667;
{ .SetGeometry }
Shape664.Geometry := LineSet665;
{ .AddChildren }
HAnimSegment660.AddChildren([Shape664]);
{ .AddChildren }
HAnimJoint659.AddChildren([HAnimSegment660]);
HAnimJoint668 := THAnimJointNode.Create;
HAnimJoint668.NameField := 'vc4';
HAnimJoint668.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment669 := THAnimSegmentNode.Create;
HAnimSegment669.NameField := 'c4';
TouchSensor670 := TTouchSensorNode.Create;
TouchSensor670.Description := 'HAnimJoint vc4, HAnimSegment c4';
{ .AddChildren }
HAnimSegment669.AddChildren([TouchSensor670]);
Transform671 := TTransformNode.Create;
Transform671.Translation := Vector3(0.0066,1.5662,-0.0084);
Shape672 := TShapeNode.Create;
Shape672 := Shape50;
{ .AddChild }
Transform671.AddChildren([Shape672]);
{ .AddChildren }
HAnimSegment669.AddChildren([Transform671]);
Shape673 := TShapeNode.Create;
LineSet674 := TLineSetNode.Create;
LineSet674.SetVertexCount([2]);
ColorRGBA675 := TColorRGBANode.Create;
ColorRGBA675 := ColorRGBA56;
{ .SetColor }
LineSet674.Color := ColorRGBA675;
Coordinate676 := TCoordinateNode.Create;
Coordinate676.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ .SetCoord }
LineSet674.Coord := Coordinate676;
{ .SetGeometry }
Shape673.Geometry := LineSet674;
{ .AddChildren }
HAnimSegment669.AddChildren([Shape673]);
{ .AddChildren }
HAnimJoint668.AddChildren([HAnimSegment669]);
HAnimJoint677 := THAnimJointNode.Create;
HAnimJoint677.NameField := 'vc3';
HAnimJoint677.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment678 := THAnimSegmentNode.Create;
HAnimSegment678.NameField := 'c3';
TouchSensor679 := TTouchSensorNode.Create;
TouchSensor679.Description := 'HAnimJoint vc3, HAnimSegment c3';
{ .AddChildren }
HAnimSegment678.AddChildren([TouchSensor679]);
Transform680 := TTransformNode.Create;
Transform680.Translation := Vector3(0.0066,1.58,-0.0103);
Shape681 := TShapeNode.Create;
Shape681 := Shape50;
{ .AddChild }
Transform680.AddChildren([Shape681]);
{ .AddChildren }
HAnimSegment678.AddChildren([Transform680]);
Shape682 := TShapeNode.Create;
LineSet683 := TLineSetNode.Create;
LineSet683.SetVertexCount([2]);
ColorRGBA684 := TColorRGBANode.Create;
ColorRGBA684 := ColorRGBA56;
{ .SetColor }
LineSet683.Color := ColorRGBA684;
Coordinate685 := TCoordinateNode.Create;
Coordinate685.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet683.Coord := Coordinate685;
{ .SetGeometry }
Shape682.Geometry := LineSet683;
{ .AddChildren }
HAnimSegment678.AddChildren([Shape682]);
{ .AddChildren }
HAnimJoint677.AddChildren([HAnimSegment678]);
HAnimJoint686 := THAnimJointNode.Create;
HAnimJoint686.NameField := 'vc2';
HAnimJoint686.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment687 := THAnimSegmentNode.Create;
HAnimSegment687.NameField := 'c2';
TouchSensor688 := TTouchSensorNode.Create;
TouchSensor688.Description := 'HAnimJoint vc2, HAnimSegment c2';
{ .AddChildren }
HAnimSegment687.AddChildren([TouchSensor688]);
Transform689 := TTransformNode.Create;
Transform689.Translation := Vector3(0.0066,1.5928,-0.0103);
Shape690 := TShapeNode.Create;
Shape690 := Shape50;
{ .AddChild }
Transform689.AddChildren([Shape690]);
{ .AddChildren }
HAnimSegment687.AddChildren([Transform689]);
Shape691 := TShapeNode.Create;
LineSet692 := TLineSetNode.Create;
LineSet692.SetVertexCount([2]);
ColorRGBA693 := TColorRGBANode.Create;
ColorRGBA693 := ColorRGBA56;
{ .SetColor }
LineSet692.Color := ColorRGBA693;
Coordinate694 := TCoordinateNode.Create;
Coordinate694.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ .SetCoord }
LineSet692.Coord := Coordinate694;
{ .SetGeometry }
Shape691.Geometry := LineSet692;
{ .AddChildren }
HAnimSegment687.AddChildren([Shape691]);
{ .AddChildren }
HAnimJoint686.AddChildren([HAnimSegment687]);
HAnimJoint695 := THAnimJointNode.Create;
HAnimJoint695.NameField := 'vc1';
HAnimJoint695.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment696 := THAnimSegmentNode.Create;
HAnimSegment696.NameField := 'c1';
TouchSensor697 := TTouchSensorNode.Create;
TouchSensor697.Description := 'HAnimJoint vc1, HAnimSegment c1';
{ .AddChildren }
HAnimSegment696.AddChildren([TouchSensor697]);
Transform698 := TTransformNode.Create;
Transform698.Translation := Vector3(0.0066,1.6144,-0.0034);
Shape699 := TShapeNode.Create;
Shape699 := Shape50;
{ .AddChild }
Transform698.AddChildren([Shape699]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform698]);
Shape700 := TShapeNode.Create;
LineSet701 := TLineSetNode.Create;
LineSet701.SetVertexCount([2]);
ColorRGBA702 := TColorRGBANode.Create;
ColorRGBA702 := ColorRGBA56;
{ .SetColor }
LineSet701.Color := ColorRGBA702;
Coordinate703 := TCoordinateNode.Create;
Coordinate703.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet701.Coord := Coordinate703;
{ .SetGeometry }
Shape700.Geometry := LineSet701;
{ .AddChildren }
HAnimSegment696.AddChildren([Shape700]);
{ .AddChildren }
HAnimJoint695.AddChildren([HAnimSegment696]);
HAnimJoint704 := THAnimJointNode.Create;
HAnimJoint704.NameField := 'skullbase';
HAnimJoint704.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment705 := THAnimSegmentNode.Create;
HAnimSegment705.NameField := 'skull';
TouchSensor706 := TTouchSensorNode.Create;
TouchSensor706.Description := 'HAnimJoint skullbase, HAnimSegment skull';
{ .AddChildren }
HAnimSegment705.AddChildren([TouchSensor706]);
Transform707 := TTransformNode.Create;
Transform707.Translation := Vector3(0.0044,1.6209,0.0236);
Shape708 := TShapeNode.Create;
Shape708 := Shape50;
{ .AddChild }
Transform707.AddChildren([Shape708]);
{ .AddChildren }
HAnimSegment705.AddChildren([Transform707]);
Shape709 := TShapeNode.Create;
LineSet710 := TLineSetNode.Create;
LineSet710.SetVertexCount([2]);
ColorRGBA711 := TColorRGBANode.Create;
ColorRGBA711 := ColorRGBA56;
{ .SetColor }
LineSet710.Color := ColorRGBA711;
Coordinate712 := TCoordinateNode.Create;
Coordinate712.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet710.Coord := Coordinate712;
{ .SetGeometry }
Shape709.Geometry := LineSet710;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape709]);
Shape713 := TShapeNode.Create;
LineSet714 := TLineSetNode.Create;
LineSet714.SetVertexCount([2]);
ColorRGBA715 := TColorRGBANode.Create;
ColorRGBA715 := ColorRGBA56;
{ .SetColor }
LineSet714.Color := ColorRGBA715;
Coordinate716 := TCoordinateNode.Create;
Coordinate716.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet714.Coord := Coordinate716;
{ .SetGeometry }
Shape713.Geometry := LineSet714;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape713]);
Shape717 := TShapeNode.Create;
LineSet718 := TLineSetNode.Create;
LineSet718.SetVertexCount([2]);
ColorRGBA719 := TColorRGBANode.Create;
ColorRGBA719 := ColorRGBA56;
{ .SetColor }
LineSet718.Color := ColorRGBA719;
Coordinate720 := TCoordinateNode.Create;
Coordinate720.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.635,0.0506)]);
{ .SetCoord }
LineSet718.Coord := Coordinate720;
{ .SetGeometry }
Shape717.Geometry := LineSet718;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape717]);
Shape721 := TShapeNode.Create;
LineSet722 := TLineSetNode.Create;
LineSet722.SetVertexCount([2]);
ColorRGBA723 := TColorRGBANode.Create;
ColorRGBA723 := ColorRGBA56;
{ .SetColor }
LineSet722.Color := ColorRGBA723;
Coordinate724 := TCoordinateNode.Create;
Coordinate724.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet722.Coord := Coordinate724;
{ .SetGeometry }
Shape721.Geometry := LineSet722;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape721]);
Shape725 := TShapeNode.Create;
LineSet726 := TLineSetNode.Create;
LineSet726.SetVertexCount([2]);
ColorRGBA727 := TColorRGBANode.Create;
ColorRGBA727 := ColorRGBA56;
{ .SetColor }
LineSet726.Color := ColorRGBA727;
Coordinate728 := TCoordinateNode.Create;
Coordinate728.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.6332,0.0502)]);
{ .SetCoord }
LineSet726.Coord := Coordinate728;
{ .SetGeometry }
Shape725.Geometry := LineSet726;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape725]);
Shape729 := TShapeNode.Create;
LineSet730 := TLineSetNode.Create;
LineSet730.SetVertexCount([2]);
ColorRGBA731 := TColorRGBANode.Create;
ColorRGBA731 := ColorRGBA56;
{ .SetColor }
LineSet730.Color := ColorRGBA731;
Coordinate732 := TCoordinateNode.Create;
Coordinate732.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0336,1.635,0.0506)]);
{ .SetCoord }
LineSet730.Coord := Coordinate732;
{ .SetGeometry }
Shape729.Geometry := LineSet730;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape729]);
Shape733 := TShapeNode.Create;
LineSet734 := TLineSetNode.Create;
LineSet734.SetVertexCount([2]);
ColorRGBA735 := TColorRGBANode.Create;
ColorRGBA735 := ColorRGBA56;
{ .SetColor }
LineSet734.Color := ColorRGBA735;
Coordinate736 := TCoordinateNode.Create;
Coordinate736.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0,1.63,0.015)]);
{ .SetCoord }
LineSet734.Coord := Coordinate736;
{ .SetGeometry }
Shape733.Geometry := LineSet734;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape733]);
Shape737 := TShapeNode.Create;
LineSet738 := TLineSetNode.Create;
LineSet738.SetVertexCount([2]);
ColorRGBA739 := TColorRGBANode.Create;
ColorRGBA739 := ColorRGBA77;
{ .SetColor }
LineSet738.Color := ColorRGBA739;
Coordinate740 := TCoordinateNode.Create;
Coordinate740.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.005,1.7504,0.0055)]);
{ .SetCoord }
LineSet738.Coord := Coordinate740;
{ .SetGeometry }
Shape737.Geometry := LineSet738;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape737]);
Shape741 := TShapeNode.Create;
LineSet742 := TLineSetNode.Create;
LineSet742.SetVertexCount([2]);
ColorRGBA743 := TColorRGBANode.Create;
ColorRGBA743 := ColorRGBA77;
{ .SetColor }
LineSet742.Color := ColorRGBA743;
Coordinate744 := TCoordinateNode.Create;
Coordinate744.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0058,1.6316,0.0852)]);
{ .SetCoord }
LineSet742.Coord := Coordinate744;
{ .SetGeometry }
Shape741.Geometry := LineSet742;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape741]);
Shape745 := TShapeNode.Create;
LineSet746 := TLineSetNode.Create;
LineSet746.SetVertexCount([2]);
ColorRGBA747 := TColorRGBANode.Create;
ColorRGBA747 := ColorRGBA77;
{ .SetColor }
LineSet746.Color := ColorRGBA747;
Coordinate748 := TCoordinateNode.Create;
Coordinate748.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0237,1.6171,0.0752)]);
{ .SetCoord }
LineSet746.Coord := Coordinate748;
{ .SetGeometry }
Shape745.Geometry := LineSet746;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape745]);
Shape749 := TShapeNode.Create;
LineSet750 := TLineSetNode.Create;
LineSet750.SetVertexCount([2]);
ColorRGBA751 := TColorRGBANode.Create;
ColorRGBA751 := ColorRGBA77;
{ .SetColor }
LineSet750.Color := ColorRGBA751;
Coordinate752 := TCoordinateNode.Create;
Coordinate752.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0341,1.6171,0.0752)]);
{ .SetCoord }
LineSet750.Coord := Coordinate752;
{ .SetGeometry }
Shape749.Geometry := LineSet750;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape749]);
Shape753 := TShapeNode.Create;
LineSet754 := TLineSetNode.Create;
LineSet754.SetVertexCount([2]);
ColorRGBA755 := TColorRGBANode.Create;
ColorRGBA755 := ColorRGBA77;
{ .SetColor }
LineSet754.Color := ColorRGBA755;
Coordinate756 := TCoordinateNode.Create;
Coordinate756.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0061,1.541,0.0805)]);
{ .SetCoord }
LineSet754.Coord := Coordinate756;
{ .SetGeometry }
Shape753.Geometry := LineSet754;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape753]);
Shape757 := TShapeNode.Create;
LineSet758 := TLineSetNode.Create;
LineSet758.SetVertexCount([2]);
ColorRGBA759 := TColorRGBANode.Create;
ColorRGBA759 := ColorRGBA77;
{ .SetColor }
LineSet758.Color := ColorRGBA759;
Coordinate760 := TCoordinateNode.Create;
Coordinate760.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0646,1.6347,0.0302)]);
{ .SetCoord }
LineSet758.Coord := Coordinate760;
{ .SetGeometry }
Shape757.Geometry := LineSet758;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape757]);
Shape761 := TShapeNode.Create;
LineSet762 := TLineSetNode.Create;
LineSet762.SetVertexCount([2]);
ColorRGBA763 := TColorRGBANode.Create;
ColorRGBA763 := ColorRGBA77;
{ .SetColor }
LineSet762.Color := ColorRGBA763;
Coordinate764 := TCoordinateNode.Create;
Coordinate764.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.052,1.5529,0.0347)]);
{ .SetCoord }
LineSet762.Coord := Coordinate764;
{ .SetGeometry }
Shape761.Geometry := LineSet762;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape761]);
Shape765 := TShapeNode.Create;
LineSet766 := TLineSetNode.Create;
LineSet766.SetVertexCount([2]);
ColorRGBA767 := TColorRGBANode.Create;
ColorRGBA767 := ColorRGBA77;
{ .SetColor }
LineSet766.Color := ColorRGBA767;
Coordinate768 := TCoordinateNode.Create;
Coordinate768.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0739,1.6348,0.0282)]);
{ .SetCoord }
LineSet766.Coord := Coordinate768;
{ .SetGeometry }
Shape765.Geometry := LineSet766;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape765]);
Shape769 := TShapeNode.Create;
LineSet770 := TLineSetNode.Create;
LineSet770.SetVertexCount([2]);
ColorRGBA771 := TColorRGBANode.Create;
ColorRGBA771 := ColorRGBA77;
{ .SetColor }
LineSet770.Color := ColorRGBA771;
Coordinate772 := TCoordinateNode.Create;
Coordinate772.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0631,1.553,0.033)]);
{ .SetCoord }
LineSet770.Coord := Coordinate772;
{ .SetGeometry }
Shape769.Geometry := LineSet770;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape769]);
Shape773 := TShapeNode.Create;
LineSet774 := TLineSetNode.Create;
LineSet774.SetVertexCount([2]);
ColorRGBA775 := TColorRGBANode.Create;
ColorRGBA775 := ColorRGBA77;
{ .SetColor }
LineSet774.Color := ColorRGBA775;
Coordinate776 := TCoordinateNode.Create;
Coordinate776.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0039,1.5972,-0.0796)]);
{ .SetCoord }
LineSet774.Coord := Coordinate776;
{ .SetGeometry }
Shape773.Geometry := LineSet774;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape773]);
HAnimSite777 := THAnimSiteNode.Create;
HAnimSite777.NameField := 'skull_tip';
HAnimSite777.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor778 := TTouchSensorNode.Create;
TouchSensor778.Description := 'HAnimSite skull_tip';
{ .AddChildren }
HAnimSite777.AddChildren([TouchSensor778]);
Shape779 := TShapeNode.Create;
Shape779 := Shape113;
{ .AddChildren }
HAnimSite777.AddChildren([Shape779]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite777]);
HAnimSite780 := THAnimSiteNode.Create;
HAnimSite780.NameField := 'sellion_pt';
HAnimSite780.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor781 := TTouchSensorNode.Create;
TouchSensor781.Description := 'HAnimSite sellion';
{ .AddChildren }
HAnimSite780.AddChildren([TouchSensor781]);
Shape782 := TShapeNode.Create;
Shape782 := Shape113;
{ .AddChildren }
HAnimSite780.AddChildren([Shape782]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite780]);
HAnimSite783 := THAnimSiteNode.Create;
HAnimSite783.NameField := 'r_infraorbitale_pt';
HAnimSite783.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor784 := TTouchSensorNode.Create;
TouchSensor784.Description := 'HAnimSite r_infraorbitale';
{ .AddChildren }
HAnimSite783.AddChildren([TouchSensor784]);
Shape785 := TShapeNode.Create;
Shape785 := Shape113;
{ .AddChildren }
HAnimSite783.AddChildren([Shape785]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite783]);
HAnimSite786 := THAnimSiteNode.Create;
HAnimSite786.NameField := 'l_infraorbitale_pt';
HAnimSite786.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor787 := TTouchSensorNode.Create;
TouchSensor787.Description := 'HAnimSite l_infraorbitale';
{ .AddChildren }
HAnimSite786.AddChildren([TouchSensor787]);
Shape788 := TShapeNode.Create;
Shape788 := Shape113;
{ .AddChildren }
HAnimSite786.AddChildren([Shape788]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite786]);
HAnimSite789 := THAnimSiteNode.Create;
HAnimSite789.NameField := 'supramenton_pt';
HAnimSite789.Translation := Vector3(0.0061,1.541,0.0805);
TouchSensor790 := TTouchSensorNode.Create;
TouchSensor790.Description := 'HAnimSite supramenton';
{ .AddChildren }
HAnimSite789.AddChildren([TouchSensor790]);
Shape791 := TShapeNode.Create;
Shape791 := Shape113;
{ .AddChildren }
HAnimSite789.AddChildren([Shape791]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite789]);
HAnimSite792 := THAnimSiteNode.Create;
HAnimSite792.NameField := 'r_tragion_pt';
HAnimSite792.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor793 := TTouchSensorNode.Create;
TouchSensor793.Description := 'HAnimSite r_tragion';
{ .AddChildren }
HAnimSite792.AddChildren([TouchSensor793]);
Shape794 := TShapeNode.Create;
Shape794 := Shape113;
{ .AddChildren }
HAnimSite792.AddChildren([Shape794]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite792]);
HAnimSite795 := THAnimSiteNode.Create;
HAnimSite795.NameField := 'r_gonion_pt';
HAnimSite795.Translation := Vector3(-0.052,1.5529,0.0347);
TouchSensor796 := TTouchSensorNode.Create;
TouchSensor796.Description := 'HAnimSite r_gonion';
{ .AddChildren }
HAnimSite795.AddChildren([TouchSensor796]);
Shape797 := TShapeNode.Create;
Shape797 := Shape113;
{ .AddChildren }
HAnimSite795.AddChildren([Shape797]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite795]);
HAnimSite798 := THAnimSiteNode.Create;
HAnimSite798.NameField := 'l_tragion_pt';
HAnimSite798.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor799 := TTouchSensorNode.Create;
TouchSensor799.Description := 'HAnimSite l_tragion';
{ .AddChildren }
HAnimSite798.AddChildren([TouchSensor799]);
Shape800 := TShapeNode.Create;
Shape800 := Shape113;
{ .AddChildren }
HAnimSite798.AddChildren([Shape800]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite798]);
HAnimSite801 := THAnimSiteNode.Create;
HAnimSite801.NameField := 'l_gonion_pt';
HAnimSite801.Translation := Vector3(0.0631,1.553,0.033);
TouchSensor802 := TTouchSensorNode.Create;
TouchSensor802.Description := 'HAnimSite l_gonion';
{ .AddChildren }
HAnimSite801.AddChildren([TouchSensor802]);
Shape803 := TShapeNode.Create;
Shape803 := Shape113;
{ .AddChildren }
HAnimSite801.AddChildren([Shape803]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite801]);
HAnimSite804 := THAnimSiteNode.Create;
HAnimSite804.NameField := 'nuchale_pt';
HAnimSite804.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor805 := TTouchSensorNode.Create;
TouchSensor805.Description := 'HAnimSite nuchale';
{ .AddChildren }
HAnimSite804.AddChildren([TouchSensor805]);
Shape806 := TShapeNode.Create;
Shape806 := Shape113;
{ .AddChildren }
HAnimSite804.AddChildren([Shape806]);
{ .AddChildren }
HAnimSegment705.AddChildren([HAnimSite804]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimSegment705]);
HAnimJoint807 := THAnimJointNode.Create;
HAnimJoint807.NameField := 'l_eyeball_joint';
HAnimJoint807.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment808 := THAnimSegmentNode.Create;
HAnimSegment808.NameField := 'l_eyeball';
TouchSensor809 := TTouchSensorNode.Create;
TouchSensor809.Description := 'HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball';
{ .AddChildren }
HAnimSegment808.AddChildren([TouchSensor809]);
Transform810 := TTransformNode.Create;
Transform810.Translation := Vector3(0.0336,1.6332,0.0502);
Shape811 := TShapeNode.Create;
Shape811 := Shape50;
{ .AddChild }
Transform810.AddChildren([Shape811]);
{ .AddChildren }
HAnimSegment808.AddChildren([Transform810]);
Shape812 := TShapeNode.Create;
LineSet813 := TLineSetNode.Create;
LineSet813.SetVertexCount([2]);
ColorRGBA814 := TColorRGBANode.Create;
ColorRGBA814.SetColor([Vector4(0,0,1,1),Vector4(0,0,1,0.1)]);
{ .SetColor }
LineSet813.Color := ColorRGBA814;
Coordinate815 := TCoordinateNode.Create;
Coordinate815.SetPoint([Vector3(0.0336,1.6332,0.0502),Vector3(0.034,1.64,0.05)]);
{ .SetCoord }
LineSet813.Coord := Coordinate815;
{ .SetGeometry }
Shape812.Geometry := LineSet813;
{ .AddChildren }
HAnimSegment808.AddChildren([Shape812]);
HAnimSite816 := THAnimSiteNode.Create;
HAnimSite816.NameField := 'l_eyeball_site_view';
HAnimSite816.Translation := Vector3(0.034,1.64,0.05);
TouchSensor817 := TTouchSensorNode.Create;
TouchSensor817.Description := 'HAnimSite l_eyeball_site_view';
{ .AddChildren }
HAnimSite816.AddChildren([TouchSensor817]);
Shape818 := TShapeNode.Create;
Shape818 := Shape113;
{ .AddChildren }
HAnimSite816.AddChildren([Shape818]);
Viewpoint819 := TViewpointNode.Create;
Viewpoint819.Description := 'l_eyeball_site_viewpoint looking forward';
Viewpoint819.Position := Vector3(0,0,0);
Viewpoint819.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite816.AddChildren([Viewpoint819]);
Anchor820 := TAnchorNode.Create;
Anchor820.Description := 'HAnimSite hanim_l_eyeball_site_view Viewpoint';
Anchor820.SetUrl(['#hanim_l_eyeball_site_viewpoint']);
LOD821 := TLODNode.Create;
LOD821.ForceTransitions := True;
LOD821.SetRange([0.04]);
WorldInfo822 := TWorldInfoNode.Create;
WorldInfo822.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD821.AddChildren([WorldInfo822]);
Shape823 := TShapeNode.Create;
Appearance824 := TAppearanceNode.Create;
Material825 := TMaterialNode.Create;
Material825.DiffuseColor := Vector3(0,0,1);
Material825.Transparency := 0.6;
{ .SetMaterial }
Appearance824.Material := Material825;
{ .SetAppearance }
Shape823.Appearance := Appearance824;
IndexedFaceSet826 := TIndexedFaceSetNode.Create;
IndexedFaceSet826.CreaseAngle := 0.5;
IndexedFaceSet826.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate827 := TCoordinateNode.Create;
Coordinate827.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet826.Coord := Coordinate827;
{ .SetGeometry }
Shape823.Geometry := IndexedFaceSet826;
{ .AddChildren }
LOD821.AddChildren([Shape823]);
{ .AddChildren }
Anchor820.AddChildren([LOD821]);
{ .AddChildren }
HAnimSite816.AddChildren([Anchor820]);
{ .AddChildren }
HAnimSegment808.AddChildren([HAnimSite816]);
{ .AddChildren }
HAnimJoint807.AddChildren([HAnimSegment808]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint807]);
HAnimJoint828 := THAnimJointNode.Create;
HAnimJoint828.NameField := 'l_eyelid_joint';
HAnimJoint828.Center := Vector3(0.0336,1.6332,0.0502);
HAnimSegment829 := THAnimSegmentNode.Create;
HAnimSegment829.NameField := 'l_eyelid';
TouchSensor830 := TTouchSensorNode.Create;
TouchSensor830.Description := 'HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid';
{ .AddChildren }
HAnimSegment829.AddChildren([TouchSensor830]);
Transform831 := TTransformNode.Create;
Transform831.Translation := Vector3(0.0336,1.6332,0.0502);
Shape832 := TShapeNode.Create;
Shape832 := Shape50;
{ .AddChild }
Transform831.AddChildren([Shape832]);
{ .AddChildren }
HAnimSegment829.AddChildren([Transform831]);
{ .AddChildren }
HAnimJoint828.AddChildren([HAnimSegment829]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint828]);
HAnimJoint833 := THAnimJointNode.Create;
HAnimJoint833.NameField := 'l_eyebrow_joint';
HAnimJoint833.Center := Vector3(0.0336,1.635,0.0506);
HAnimSegment834 := THAnimSegmentNode.Create;
HAnimSegment834.NameField := 'l_eyebrow';
TouchSensor835 := TTouchSensorNode.Create;
TouchSensor835.Description := 'HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow';
{ .AddChildren }
HAnimSegment834.AddChildren([TouchSensor835]);
Transform836 := TTransformNode.Create;
Transform836.Translation := Vector3(0.0336,1.635,0.0506);
Shape837 := TShapeNode.Create;
Shape837 := Shape50;
{ .AddChild }
Transform836.AddChildren([Shape837]);
{ .AddChildren }
HAnimSegment834.AddChildren([Transform836]);
{ .AddChildren }
HAnimJoint833.AddChildren([HAnimSegment834]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint833]);
HAnimJoint838 := THAnimJointNode.Create;
HAnimJoint838.NameField := 'r_eyeball_joint';
HAnimJoint838.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment839 := THAnimSegmentNode.Create;
HAnimSegment839.NameField := 'r_eyeball';
TouchSensor840 := TTouchSensorNode.Create;
TouchSensor840.Description := 'HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball';
{ .AddChildren }
HAnimSegment839.AddChildren([TouchSensor840]);
Transform841 := TTransformNode.Create;
Transform841.Translation := Vector3(-0.0336,1.6332,0.0502);
Shape842 := TShapeNode.Create;
Shape842 := Shape50;
{ .AddChild }
Transform841.AddChildren([Shape842]);
{ .AddChildren }
HAnimSegment839.AddChildren([Transform841]);
Shape843 := TShapeNode.Create;
LineSet844 := TLineSetNode.Create;
LineSet844.SetVertexCount([2]);
ColorRGBA845 := TColorRGBANode.Create;
ColorRGBA845 := ColorRGBA814;
{ .SetColor }
LineSet844.Color := ColorRGBA845;
Coordinate846 := TCoordinateNode.Create;
Coordinate846.SetPoint([Vector3(-0.0336,1.6332,0.0502),Vector3(-0.034,1.64,0.05)]);
{ .SetCoord }
LineSet844.Coord := Coordinate846;
{ .SetGeometry }
Shape843.Geometry := LineSet844;
{ .AddChildren }
HAnimSegment839.AddChildren([Shape843]);
HAnimSite847 := THAnimSiteNode.Create;
HAnimSite847.NameField := 'r_eyeball_site_view';
HAnimSite847.Translation := Vector3(-0.034,1.64,0.05);
TouchSensor848 := TTouchSensorNode.Create;
TouchSensor848.Description := 'HAnimSite r_eyeball_site_view';
{ .AddChildren }
HAnimSite847.AddChildren([TouchSensor848]);
Shape849 := TShapeNode.Create;
Shape849 := Shape113;
{ .AddChildren }
HAnimSite847.AddChildren([Shape849]);
Viewpoint850 := TViewpointNode.Create;
Viewpoint850.Description := 'r_eyeball_site_viewpoint looking forward';
Viewpoint850.Position := Vector3(0,0,0);
Viewpoint850.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite847.AddChildren([Viewpoint850]);
Anchor851 := TAnchorNode.Create;
Anchor851.Description := 'HAnimSite hanim_r_eyeball_site_view Viewpoint';
Anchor851.SetUrl(['#hanim_r_eyeball_site_viewpoint']);
LOD852 := TLODNode.Create;
LOD852.ForceTransitions := True;
LOD852.SetRange([0.04]);
WorldInfo853 := TWorldInfoNode.Create;
WorldInfo853.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD852.AddChildren([WorldInfo853]);
Shape854 := TShapeNode.Create;
Shape854 := Shape823;
{ .AddChildren }
LOD852.AddChildren([Shape854]);
{ .AddChildren }
Anchor851.AddChildren([LOD852]);
{ .AddChildren }
HAnimSite847.AddChildren([Anchor851]);
{ .AddChildren }
HAnimSegment839.AddChildren([HAnimSite847]);
{ .AddChildren }
HAnimJoint838.AddChildren([HAnimSegment839]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint838]);
HAnimJoint855 := THAnimJointNode.Create;
HAnimJoint855.NameField := 'r_eyelid_joint';
HAnimJoint855.Center := Vector3(-0.0336,1.6332,0.0502);
HAnimSegment856 := THAnimSegmentNode.Create;
HAnimSegment856.NameField := 'r_eyelid';
TouchSensor857 := TTouchSensorNode.Create;
TouchSensor857.Description := 'HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid';
{ .AddChildren }
HAnimSegment856.AddChildren([TouchSensor857]);
Transform858 := TTransformNode.Create;
Transform858.Translation := Vector3(-0.0336,1.6332,0.0502);
Shape859 := TShapeNode.Create;
Shape859 := Shape50;
{ .AddChild }
Transform858.AddChildren([Shape859]);
{ .AddChildren }
HAnimSegment856.AddChildren([Transform858]);
{ .AddChildren }
HAnimJoint855.AddChildren([HAnimSegment856]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint855]);
HAnimJoint860 := THAnimJointNode.Create;
HAnimJoint860.NameField := 'r_eyebrow_joint';
HAnimJoint860.Center := Vector3(-0.0336,1.635,0.0506);
HAnimSegment861 := THAnimSegmentNode.Create;
HAnimSegment861.NameField := 'r_eyebrow';
TouchSensor862 := TTouchSensorNode.Create;
TouchSensor862.Description := 'HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow';
{ .AddChildren }
HAnimSegment861.AddChildren([TouchSensor862]);
Transform863 := TTransformNode.Create;
Transform863.Translation := Vector3(-0.0336,1.635,0.0506);
Shape864 := TShapeNode.Create;
Shape864 := Shape50;
{ .AddChild }
Transform863.AddChildren([Shape864]);
{ .AddChildren }
HAnimSegment861.AddChildren([Transform863]);
{ .AddChildren }
HAnimJoint860.AddChildren([HAnimSegment861]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint860]);
HAnimJoint865 := THAnimJointNode.Create;
HAnimJoint865.NameField := 'temporomandibular';
HAnimJoint865.Center := Vector3(0,1.63,0.015);
HAnimSegment866 := THAnimSegmentNode.Create;
HAnimSegment866.NameField := 'jaw';
TouchSensor867 := TTouchSensorNode.Create;
TouchSensor867.Description := 'HAnimJoint temporomandibular, HAnimSegment jaw';
{ .AddChildren }
HAnimSegment866.AddChildren([TouchSensor867]);
Transform868 := TTransformNode.Create;
Transform868.Translation := Vector3(0,1.63,0.015);
Shape869 := TShapeNode.Create;
Shape869 := Shape50;
{ .AddChild }
Transform868.AddChildren([Shape869]);
{ .AddChildren }
HAnimSegment866.AddChildren([Transform868]);
Shape870 := TShapeNode.Create;
LineSet871 := TLineSetNode.Create;
LineSet871.SetVertexCount([2]);
ColorRGBA872 := TColorRGBANode.Create;
ColorRGBA872 := ColorRGBA77;
{ .SetColor }
LineSet871.Color := ColorRGBA872;
Coordinate873 := TCoordinateNode.Create;
Coordinate873.SetPoint([Vector3(0,1.63,0.015),Vector3(0.045,1.63,0)]);
{ .SetCoord }
LineSet871.Coord := Coordinate873;
{ .SetGeometry }
Shape870.Geometry := LineSet871;
{ .AddChildren }
HAnimSegment866.AddChildren([Shape870]);
Shape874 := TShapeNode.Create;
LineSet875 := TLineSetNode.Create;
LineSet875.SetVertexCount([2]);
ColorRGBA876 := TColorRGBANode.Create;
ColorRGBA876 := ColorRGBA77;
{ .SetColor }
LineSet875.Color := ColorRGBA876;
Coordinate877 := TCoordinateNode.Create;
Coordinate877.SetPoint([Vector3(0,1.63,0.015),Vector3(-0.045,1.63,0)]);
{ .SetCoord }
LineSet875.Coord := Coordinate877;
{ .SetGeometry }
Shape874.Geometry := LineSet875;
{ .AddChildren }
HAnimSegment866.AddChildren([Shape874]);
HAnimSite878 := THAnimSiteNode.Create;
HAnimSite878.NameField := 'temporomandibular_l_site_pt';
HAnimSite878.Translation := Vector3(0.045,1.63,0);
TouchSensor879 := TTouchSensorNode.Create;
TouchSensor879.Description := 'HAnimSite temporomandibular_l_site';
{ .AddChildren }
HAnimSite878.AddChildren([TouchSensor879]);
Shape880 := TShapeNode.Create;
Shape880 := Shape113;
{ .AddChildren }
HAnimSite878.AddChildren([Shape880]);
{ .AddChildren }
HAnimSegment866.AddChildren([HAnimSite878]);
HAnimSite881 := THAnimSiteNode.Create;
HAnimSite881.NameField := 'temporomandibular_r_site_pt';
HAnimSite881.Translation := Vector3(-0.045,1.63,0);
TouchSensor882 := TTouchSensorNode.Create;
TouchSensor882.Description := 'HAnimSite temporomandibular_r_site';
{ .AddChildren }
HAnimSite881.AddChildren([TouchSensor882]);
Shape883 := TShapeNode.Create;
Shape883 := Shape113;
{ .AddChildren }
HAnimSite881.AddChildren([Shape883]);
{ .AddChildren }
HAnimSegment866.AddChildren([HAnimSite881]);
{ .AddChildren }
HAnimJoint865.AddChildren([HAnimSegment866]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint865]);
{ .AddChildren }
HAnimJoint695.AddChildren([HAnimJoint704]);
{ .AddChildren }
HAnimJoint686.AddChildren([HAnimJoint695]);
{ .AddChildren }
HAnimJoint677.AddChildren([HAnimJoint686]);
{ .AddChildren }
HAnimJoint668.AddChildren([HAnimJoint677]);
{ .AddChildren }
HAnimJoint659.AddChildren([HAnimJoint668]);
{ .AddChildren }
HAnimJoint650.AddChildren([HAnimJoint659]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint650]);
{ .AddChildren }
HAnimJoint596.AddChildren([HAnimJoint627]);
HAnimJoint884 := THAnimJointNode.Create;
HAnimJoint884.NameField := 'l_sternoclavicular';
HAnimJoint884.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment885 := THAnimSegmentNode.Create;
HAnimSegment885.NameField := 'l_clavicle';
TouchSensor886 := TTouchSensorNode.Create;
TouchSensor886.Description := 'HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle';
{ .AddChildren }
HAnimSegment885.AddChildren([TouchSensor886]);
Transform887 := TTransformNode.Create;
Transform887.Translation := Vector3(0.082,1.4488,-0.0353);
Shape888 := TShapeNode.Create;
Shape888 := Shape50;
{ .AddChild }
Transform887.AddChildren([Shape888]);
{ .AddChildren }
HAnimSegment885.AddChildren([Transform887]);
Shape889 := TShapeNode.Create;
LineSet890 := TLineSetNode.Create;
LineSet890.SetVertexCount([2]);
ColorRGBA891 := TColorRGBANode.Create;
ColorRGBA891 := ColorRGBA56;
{ .SetColor }
LineSet890.Color := ColorRGBA891;
Coordinate892 := TCoordinateNode.Create;
Coordinate892.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet890.Coord := Coordinate892;
{ .SetGeometry }
Shape889.Geometry := LineSet890;
{ .AddChildren }
HAnimSegment885.AddChildren([Shape889]);
Shape893 := TShapeNode.Create;
LineSet894 := TLineSetNode.Create;
LineSet894.SetVertexCount([2]);
ColorRGBA895 := TColorRGBANode.Create;
ColorRGBA895 := ColorRGBA77;
{ .SetColor }
LineSet894.Color := ColorRGBA895;
Coordinate896 := TCoordinateNode.Create;
Coordinate896.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0271,1.4943,0.0394)]);
{ .SetCoord }
LineSet894.Coord := Coordinate896;
{ .SetGeometry }
Shape893.Geometry := LineSet894;
{ .AddChildren }
HAnimSegment885.AddChildren([Shape893]);
Shape897 := TShapeNode.Create;
LineSet898 := TLineSetNode.Create;
LineSet898.SetVertexCount([2]);
ColorRGBA899 := TColorRGBANode.Create;
ColorRGBA899 := ColorRGBA77;
{ .SetColor }
LineSet898.Color := ColorRGBA899;
Coordinate900 := TCoordinateNode.Create;
Coordinate900.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.2032,1.476,-0.049)]);
{ .SetCoord }
LineSet898.Coord := Coordinate900;
{ .SetGeometry }
Shape897.Geometry := LineSet898;
{ .AddChildren }
HAnimSegment885.AddChildren([Shape897]);
Shape901 := TShapeNode.Create;
LineSet902 := TLineSetNode.Create;
LineSet902.SetVertexCount([2]);
ColorRGBA903 := TColorRGBANode.Create;
ColorRGBA903 := ColorRGBA77;
{ .SetColor }
LineSet902.Color := ColorRGBA903;
Coordinate904 := TCoordinateNode.Create;
Coordinate904.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.1777,1.4065,-0.0075)]);
{ .SetCoord }
LineSet902.Coord := Coordinate904;
{ .SetGeometry }
Shape901.Geometry := LineSet902;
{ .AddChildren }
HAnimSegment885.AddChildren([Shape901]);
Shape905 := TShapeNode.Create;
LineSet906 := TLineSetNode.Create;
LineSet906.SetVertexCount([2]);
ColorRGBA907 := TColorRGBANode.Create;
ColorRGBA907 := ColorRGBA77;
{ .SetColor }
LineSet906.Color := ColorRGBA907;
Coordinate908 := TCoordinateNode.Create;
Coordinate908.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.1706,1.4072,-0.0875)]);
{ .SetCoord }
LineSet906.Coord := Coordinate908;
{ .SetGeometry }
Shape905.Geometry := LineSet906;
{ .AddChildren }
HAnimSegment885.AddChildren([Shape905]);
HAnimSite909 := THAnimSiteNode.Create;
HAnimSite909.NameField := 'l_clavicale_pt';
HAnimSite909.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor910 := TTouchSensorNode.Create;
TouchSensor910.Description := 'HAnimSite l_clavicale';
{ .AddChildren }
HAnimSite909.AddChildren([TouchSensor910]);
Shape911 := TShapeNode.Create;
Shape911 := Shape113;
{ .AddChildren }
HAnimSite909.AddChildren([Shape911]);
{ .AddChildren }
HAnimSegment885.AddChildren([HAnimSite909]);
HAnimSite912 := THAnimSiteNode.Create;
HAnimSite912.NameField := 'l_acromion_pt';
HAnimSite912.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor913 := TTouchSensorNode.Create;
TouchSensor913.Description := 'HAnimSite l_acromion';
{ .AddChildren }
HAnimSite912.AddChildren([TouchSensor913]);
Shape914 := TShapeNode.Create;
Shape914 := Shape113;
{ .AddChildren }
HAnimSite912.AddChildren([Shape914]);
{ .AddChildren }
HAnimSegment885.AddChildren([HAnimSite912]);
HAnimSite915 := THAnimSiteNode.Create;
HAnimSite915.NameField := 'l_axilla_ant_pt';
HAnimSite915.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor916 := TTouchSensorNode.Create;
TouchSensor916.Description := 'HAnimSite l_axilla_ant';
{ .AddChildren }
HAnimSite915.AddChildren([TouchSensor916]);
Shape917 := TShapeNode.Create;
Shape917 := Shape113;
{ .AddChildren }
HAnimSite915.AddChildren([Shape917]);
{ .AddChildren }
HAnimSegment885.AddChildren([HAnimSite915]);
HAnimSite918 := THAnimSiteNode.Create;
HAnimSite918.NameField := 'l_axilla_post_pt';
HAnimSite918.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor919 := TTouchSensorNode.Create;
TouchSensor919.Description := 'HAnimSite l_axilla_post';
{ .AddChildren }
HAnimSite918.AddChildren([TouchSensor919]);
Shape920 := TShapeNode.Create;
Shape920 := Shape113;
{ .AddChildren }
HAnimSite918.AddChildren([Shape920]);
{ .AddChildren }
HAnimSegment885.AddChildren([HAnimSite918]);
{ .AddChildren }
HAnimJoint884.AddChildren([HAnimSegment885]);
HAnimJoint921 := THAnimJointNode.Create;
HAnimJoint921.NameField := 'l_acromioclavicular';
HAnimJoint921.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment922 := THAnimSegmentNode.Create;
HAnimSegment922.NameField := 'l_scapula';
TouchSensor923 := TTouchSensorNode.Create;
TouchSensor923.Description := 'HAnimJoint l_acromioclavicular, HAnimSegment l_scapula';
{ .AddChildren }
HAnimSegment922.AddChildren([TouchSensor923]);
Transform924 := TTransformNode.Create;
Transform924.Translation := Vector3(0.0962,1.4269,-0.0424);
Shape925 := TShapeNode.Create;
Shape925 := Shape50;
{ .AddChild }
Transform924.AddChildren([Shape925]);
{ .AddChildren }
HAnimSegment922.AddChildren([Transform924]);
Shape926 := TShapeNode.Create;
LineSet927 := TLineSetNode.Create;
LineSet927.SetVertexCount([2]);
ColorRGBA928 := TColorRGBANode.Create;
ColorRGBA928 := ColorRGBA56;
{ .SetColor }
LineSet927.Color := ColorRGBA928;
Coordinate929 := TCoordinateNode.Create;
Coordinate929.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet927.Coord := Coordinate929;
{ .SetGeometry }
Shape926.Geometry := LineSet927;
{ .AddChildren }
HAnimSegment922.AddChildren([Shape926]);
{ .AddChildren }
HAnimJoint921.AddChildren([HAnimSegment922]);
HAnimJoint930 := THAnimJointNode.Create;
HAnimJoint930.NameField := 'l_shoulder';
HAnimJoint930.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment931 := THAnimSegmentNode.Create;
HAnimSegment931.NameField := 'l_upperarm';
TouchSensor932 := TTouchSensorNode.Create;
TouchSensor932.Description := 'HAnimJoint l_shoulder, HAnimSegment l_upperarm';
{ .AddChildren }
HAnimSegment931.AddChildren([TouchSensor932]);
Transform933 := TTransformNode.Create;
Transform933.Translation := Vector3(0.2029,1.4376,-0.0387);
Shape934 := TShapeNode.Create;
Shape934 := Shape50;
{ .AddChild }
Transform933.AddChildren([Shape934]);
{ .AddChildren }
HAnimSegment931.AddChildren([Transform933]);
Shape935 := TShapeNode.Create;
LineSet936 := TLineSetNode.Create;
LineSet936.SetVertexCount([2]);
ColorRGBA937 := TColorRGBANode.Create;
ColorRGBA937 := ColorRGBA56;
{ .SetColor }
LineSet936.Color := ColorRGBA937;
Coordinate938 := TCoordinateNode.Create;
Coordinate938.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet936.Coord := Coordinate938;
{ .SetGeometry }
Shape935.Geometry := LineSet936;
{ .AddChildren }
HAnimSegment931.AddChildren([Shape935]);
Shape939 := TShapeNode.Create;
LineSet940 := TLineSetNode.Create;
LineSet940.SetVertexCount([2]);
ColorRGBA941 := TColorRGBANode.Create;
ColorRGBA941 := ColorRGBA77;
{ .SetColor }
LineSet940.Color := ColorRGBA941;
Coordinate942 := TCoordinateNode.Create;
Coordinate942.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.228,1.1482,-0.11)]);
{ .SetCoord }
LineSet940.Coord := Coordinate942;
{ .SetGeometry }
Shape939.Geometry := LineSet940;
{ .AddChildren }
HAnimSegment931.AddChildren([Shape939]);
HAnimSite943 := THAnimSiteNode.Create;
HAnimSite943.NameField := 'l_humeral_lateral_epicn_pt';
HAnimSite943.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor944 := TTouchSensorNode.Create;
TouchSensor944.Description := 'HAnimSite l_humeral_lateral_epicn';
{ .AddChildren }
HAnimSite943.AddChildren([TouchSensor944]);
Shape945 := TShapeNode.Create;
Shape945 := Shape113;
{ .AddChildren }
HAnimSite943.AddChildren([Shape945]);
{ .AddChildren }
HAnimSegment931.AddChildren([HAnimSite943]);
{ .AddChildren }
HAnimJoint930.AddChildren([HAnimSegment931]);
HAnimJoint946 := THAnimJointNode.Create;
HAnimJoint946.NameField := 'l_elbow';
HAnimJoint946.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment947 := THAnimSegmentNode.Create;
HAnimSegment947.NameField := 'l_forearm';
TouchSensor948 := TTouchSensorNode.Create;
TouchSensor948.Description := 'HAnimJoint l_elbow, HAnimSegment l_forearm';
{ .AddChildren }
HAnimSegment947.AddChildren([TouchSensor948]);
Transform949 := TTransformNode.Create;
Transform949.Translation := Vector3(0.2014,1.1357,-0.0682);
Shape950 := TShapeNode.Create;
Shape950 := Shape50;
{ .AddChild }
Transform949.AddChildren([Shape950]);
{ .AddChildren }
HAnimSegment947.AddChildren([Transform949]);
Shape951 := TShapeNode.Create;
LineSet952 := TLineSetNode.Create;
LineSet952.SetVertexCount([2]);
ColorRGBA953 := TColorRGBANode.Create;
ColorRGBA953 := ColorRGBA56;
{ .SetColor }
LineSet952.Color := ColorRGBA953;
Coordinate954 := TCoordinateNode.Create;
Coordinate954.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet952.Coord := Coordinate954;
{ .SetGeometry }
Shape951.Geometry := LineSet952;
{ .AddChildren }
HAnimSegment947.AddChildren([Shape951]);
Shape955 := TShapeNode.Create;
LineSet956 := TLineSetNode.Create;
LineSet956.SetVertexCount([2]);
ColorRGBA957 := TColorRGBANode.Create;
ColorRGBA957 := ColorRGBA77;
{ .SetColor }
LineSet956.Color := ColorRGBA957;
Coordinate958 := TCoordinateNode.Create;
Coordinate958.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1901,0.8645,-0.0415)]);
{ .SetCoord }
LineSet956.Coord := Coordinate958;
{ .SetGeometry }
Shape955.Geometry := LineSet956;
{ .AddChildren }
HAnimSegment947.AddChildren([Shape955]);
Shape959 := TShapeNode.Create;
LineSet960 := TLineSetNode.Create;
LineSet960.SetVertexCount([2]);
ColorRGBA961 := TColorRGBANode.Create;
ColorRGBA961 := ColorRGBA77;
{ .SetColor }
LineSet960.Color := ColorRGBA961;
Coordinate962 := TCoordinateNode.Create;
Coordinate962.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1962,1.1375,-0.1123)]);
{ .SetCoord }
LineSet960.Coord := Coordinate962;
{ .SetGeometry }
Shape959.Geometry := LineSet960;
{ .AddChildren }
HAnimSegment947.AddChildren([Shape959]);
Shape963 := TShapeNode.Create;
LineSet964 := TLineSetNode.Create;
LineSet964.SetVertexCount([2]);
ColorRGBA965 := TColorRGBANode.Create;
ColorRGBA965 := ColorRGBA77;
{ .SetColor }
LineSet964.Color := ColorRGBA965;
Coordinate966 := TCoordinateNode.Create;
Coordinate966.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1735,1.1272,-0.1113)]);
{ .SetCoord }
LineSet964.Coord := Coordinate966;
{ .SetGeometry }
Shape963.Geometry := LineSet964;
{ .AddChildren }
HAnimSegment947.AddChildren([Shape963]);
Shape967 := TShapeNode.Create;
LineSet968 := TLineSetNode.Create;
LineSet968.SetVertexCount([2]);
ColorRGBA969 := TColorRGBANode.Create;
ColorRGBA969 := ColorRGBA77;
{ .SetColor }
LineSet968.Color := ColorRGBA969;
Coordinate970 := TCoordinateNode.Create;
Coordinate970.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.2182,1.1212,-0.1167)]);
{ .SetCoord }
LineSet968.Coord := Coordinate970;
{ .SetGeometry }
Shape967.Geometry := LineSet968;
{ .AddChildren }
HAnimSegment947.AddChildren([Shape967]);
HAnimSite971 := THAnimSiteNode.Create;
HAnimSite971.NameField := 'l_radial_styloid_pt';
HAnimSite971.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor972 := TTouchSensorNode.Create;
TouchSensor972.Description := 'HAnimSite l_radial_styloid';
{ .AddChildren }
HAnimSite971.AddChildren([TouchSensor972]);
Shape973 := TShapeNode.Create;
Shape973 := Shape113;
{ .AddChildren }
HAnimSite971.AddChildren([Shape973]);
{ .AddChildren }
HAnimSegment947.AddChildren([HAnimSite971]);
HAnimSite974 := THAnimSiteNode.Create;
HAnimSite974.NameField := 'l_olecranon_pt';
HAnimSite974.Translation := Vector3(0.1962,1.1375,-0.1123);
TouchSensor975 := TTouchSensorNode.Create;
TouchSensor975.Description := 'HAnimSite l_olecranon';
{ .AddChildren }
HAnimSite974.AddChildren([TouchSensor975]);
Shape976 := TShapeNode.Create;
Shape976 := Shape113;
{ .AddChildren }
HAnimSite974.AddChildren([Shape976]);
{ .AddChildren }
HAnimSegment947.AddChildren([HAnimSite974]);
HAnimSite977 := THAnimSiteNode.Create;
HAnimSite977.NameField := 'l_humeral_medial_epicn_pt';
HAnimSite977.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor978 := TTouchSensorNode.Create;
TouchSensor978.Description := 'HAnimSite l_humeral_medial_epicn';
{ .AddChildren }
HAnimSite977.AddChildren([TouchSensor978]);
Shape979 := TShapeNode.Create;
Shape979 := Shape113;
{ .AddChildren }
HAnimSite977.AddChildren([Shape979]);
{ .AddChildren }
HAnimSegment947.AddChildren([HAnimSite977]);
HAnimSite980 := THAnimSiteNode.Create;
HAnimSite980.NameField := 'l_radiale_pt';
HAnimSite980.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor981 := TTouchSensorNode.Create;
TouchSensor981.Description := 'HAnimSite l_radiale';
{ .AddChildren }
HAnimSite980.AddChildren([TouchSensor981]);
Shape982 := TShapeNode.Create;
Shape982 := Shape113;
{ .AddChildren }
HAnimSite980.AddChildren([Shape982]);
{ .AddChildren }
HAnimSegment947.AddChildren([HAnimSite980]);
{ .AddChildren }
HAnimJoint946.AddChildren([HAnimSegment947]);
HAnimJoint983 := THAnimJointNode.Create;
HAnimJoint983.NameField := 'l_wrist';
HAnimJoint983.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment984 := THAnimSegmentNode.Create;
HAnimSegment984.NameField := 'l_hand';
TouchSensor985 := TTouchSensorNode.Create;
TouchSensor985.Description := 'HAnimJoint l_wrist, HAnimSegment l_hand';
{ .AddChildren }
HAnimSegment984.AddChildren([TouchSensor985]);
Transform986 := TTransformNode.Create;
Transform986.Translation := Vector3(0.1984,0.8663,-0.0583);
Shape987 := TShapeNode.Create;
Shape987 := Shape50;
{ .AddChild }
Transform986.AddChildren([Shape987]);
{ .AddChildren }
HAnimSegment984.AddChildren([Transform986]);
Shape988 := TShapeNode.Create;
LineSet989 := TLineSetNode.Create;
LineSet989.SetVertexCount([2]);
ColorRGBA990 := TColorRGBANode.Create;
ColorRGBA990 := ColorRGBA56;
{ .SetColor }
LineSet989.Color := ColorRGBA990;
Coordinate991 := TCoordinateNode.Create;
Coordinate991.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet989.Coord := Coordinate991;
{ .SetGeometry }
Shape988.Geometry := LineSet989;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape988]);
Shape992 := TShapeNode.Create;
LineSet993 := TLineSetNode.Create;
LineSet993.SetVertexCount([2]);
ColorRGBA994 := TColorRGBANode.Create;
ColorRGBA994 := ColorRGBA56;
{ .SetColor }
LineSet993.Color := ColorRGBA994;
Coordinate995 := TCoordinateNode.Create;
Coordinate995.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet993.Coord := Coordinate995;
{ .SetGeometry }
Shape992.Geometry := LineSet993;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape992]);
Shape996 := TShapeNode.Create;
LineSet997 := TLineSetNode.Create;
LineSet997.SetVertexCount([2]);
ColorRGBA998 := TColorRGBANode.Create;
ColorRGBA998 := ColorRGBA56;
{ .SetColor }
LineSet997.Color := ColorRGBA998;
Coordinate999 := TCoordinateNode.Create;
Coordinate999.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet997.Coord := Coordinate999;
{ .SetGeometry }
Shape996.Geometry := LineSet997;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape996]);
Shape1000 := TShapeNode.Create;
LineSet1001 := TLineSetNode.Create;
LineSet1001.SetVertexCount([2]);
ColorRGBA1002 := TColorRGBANode.Create;
ColorRGBA1002 := ColorRGBA56;
{ .SetColor }
LineSet1001.Color := ColorRGBA1002;
Coordinate1003 := TCoordinateNode.Create;
Coordinate1003.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1001.Coord := Coordinate1003;
{ .SetGeometry }
Shape1000.Geometry := LineSet1001;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape1000]);
Shape1004 := TShapeNode.Create;
LineSet1005 := TLineSetNode.Create;
LineSet1005.SetVertexCount([2]);
ColorRGBA1006 := TColorRGBANode.Create;
ColorRGBA1006 := ColorRGBA56;
{ .SetColor }
LineSet1005.Color := ColorRGBA1006;
Coordinate1007 := TCoordinateNode.Create;
Coordinate1007.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1005.Coord := Coordinate1007;
{ .SetGeometry }
Shape1004.Geometry := LineSet1005;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape1004]);
Shape1008 := TShapeNode.Create;
LineSet1009 := TLineSetNode.Create;
LineSet1009.SetVertexCount([2]);
ColorRGBA1010 := TColorRGBANode.Create;
ColorRGBA1010 := ColorRGBA77;
{ .SetColor }
LineSet1009.Color := ColorRGBA1010;
Coordinate1011 := TCoordinateNode.Create;
Coordinate1011.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.2009,0.8139,-0.0237)]);
{ .SetCoord }
LineSet1009.Coord := Coordinate1011;
{ .SetGeometry }
Shape1008.Geometry := LineSet1009;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape1008]);
Shape1012 := TShapeNode.Create;
LineSet1013 := TLineSetNode.Create;
LineSet1013.SetVertexCount([2]);
ColorRGBA1014 := TColorRGBANode.Create;
ColorRGBA1014 := ColorRGBA77;
{ .SetColor }
LineSet1013.Color := ColorRGBA1014;
Coordinate1015 := TCoordinateNode.Create;
Coordinate1015.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.2142,0.8529,-0.0648)]);
{ .SetCoord }
LineSet1013.Coord := Coordinate1015;
{ .SetGeometry }
Shape1012.Geometry := LineSet1013;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape1012]);
Shape1016 := TShapeNode.Create;
LineSet1017 := TLineSetNode.Create;
LineSet1017.SetVertexCount([2]);
ColorRGBA1018 := TColorRGBANode.Create;
ColorRGBA1018 := ColorRGBA77;
{ .SetColor }
LineSet1017.Color := ColorRGBA1018;
Coordinate1019 := TCoordinateNode.Create;
Coordinate1019.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1929,0.786,-0.1122)]);
{ .SetCoord }
LineSet1017.Coord := Coordinate1019;
{ .SetGeometry }
Shape1016.Geometry := LineSet1017;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape1016]);
Shape1020 := TShapeNode.Create;
LineSet1021 := TLineSetNode.Create;
LineSet1021.SetVertexCount([2]);
ColorRGBA1022 := TColorRGBANode.Create;
ColorRGBA1022 := ColorRGBA814;
{ .SetColor }
LineSet1021.Color := ColorRGBA1022;
Coordinate1023 := TCoordinateNode.Create;
Coordinate1023.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.3,0.75,0.45)]);
{ .SetCoord }
LineSet1021.Coord := Coordinate1023;
{ .SetGeometry }
Shape1020.Geometry := LineSet1021;
{ .AddChildren }
HAnimSegment984.AddChildren([Shape1020]);
HAnimSite1024 := THAnimSiteNode.Create;
HAnimSite1024.NameField := 'l_metacarpal_pha2_pt';
HAnimSite1024.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1025 := TTouchSensorNode.Create;
TouchSensor1025.Description := 'HAnimSite l_metacarpal_pha2';
{ .AddChildren }
HAnimSite1024.AddChildren([TouchSensor1025]);
Shape1026 := TShapeNode.Create;
Shape1026 := Shape113;
{ .AddChildren }
HAnimSite1024.AddChildren([Shape1026]);
{ .AddChildren }
HAnimSegment984.AddChildren([HAnimSite1024]);
HAnimSite1027 := THAnimSiteNode.Create;
HAnimSite1027.NameField := 'l_ulnar_styloid_pt';
HAnimSite1027.Translation := Vector3(0.2142,0.8529,-0.0648);
TouchSensor1028 := TTouchSensorNode.Create;
TouchSensor1028.Description := 'HAnimSite l_ulnar_styloid';
{ .AddChildren }
HAnimSite1027.AddChildren([TouchSensor1028]);
Shape1029 := TShapeNode.Create;
Shape1029 := Shape113;
{ .AddChildren }
HAnimSite1027.AddChildren([Shape1029]);
{ .AddChildren }
HAnimSegment984.AddChildren([HAnimSite1027]);
HAnimSite1030 := THAnimSiteNode.Create;
HAnimSite1030.NameField := 'l_metacarpal_pha5_pt';
HAnimSite1030.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1031 := TTouchSensorNode.Create;
TouchSensor1031.Description := 'HAnimSite l_metacarpal_pha5';
{ .AddChildren }
HAnimSite1030.AddChildren([TouchSensor1031]);
Shape1032 := TShapeNode.Create;
Shape1032 := Shape113;
{ .AddChildren }
HAnimSite1030.AddChildren([Shape1032]);
{ .AddChildren }
HAnimSegment984.AddChildren([HAnimSite1030]);
HAnimSite1033 := THAnimSiteNode.Create;
HAnimSite1033.NameField := 'l_hand_front_view';
HAnimSite1033.Translation := Vector3(0.3,0.75,0.45);
TouchSensor1034 := TTouchSensorNode.Create;
TouchSensor1034.Description := 'HAnimSite l_hand_front_view';
{ .AddChildren }
HAnimSite1033.AddChildren([TouchSensor1034]);
Shape1035 := TShapeNode.Create;
Shape1035 := Shape113;
{ .AddChildren }
HAnimSite1033.AddChildren([Shape1035]);
Viewpoint1036 := TViewpointNode.Create;
Viewpoint1036.Description := 'left hand front';
Viewpoint1036.Position := Vector3(0,0,0);
Viewpoint1036.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite1033.AddChildren([Viewpoint1036]);
Anchor1037 := TAnchorNode.Create;
Anchor1037.Description := 'HAnimSite hanim_l_hand_front_view Viewpoint';
Anchor1037.SetUrl(['#hanim_l_hand_front_viewpoint']);
LOD1038 := TLODNode.Create;
LOD1038.ForceTransitions := True;
LOD1038.SetRange([0.04]);
WorldInfo1039 := TWorldInfoNode.Create;
WorldInfo1039.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1038.AddChildren([WorldInfo1039]);
Shape1040 := TShapeNode.Create;
Shape1040 := Shape823;
{ .AddChildren }
LOD1038.AddChildren([Shape1040]);
{ .AddChildren }
Anchor1037.AddChildren([LOD1038]);
{ .AddChildren }
HAnimSite1033.AddChildren([Anchor1037]);
{ .AddChildren }
HAnimSegment984.AddChildren([HAnimSite1033]);
{ .AddChildren }
HAnimJoint983.AddChildren([HAnimSegment984]);
HAnimJoint1041 := THAnimJointNode.Create;
HAnimJoint1041.NameField := 'l_thumb1';
HAnimJoint1041.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1042 := THAnimSegmentNode.Create;
HAnimSegment1042.NameField := 'l_thumb_metacarpal';
TouchSensor1043 := TTouchSensorNode.Create;
TouchSensor1043.Description := 'HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal';
{ .AddChildren }
HAnimSegment1042.AddChildren([TouchSensor1043]);
Transform1044 := TTransformNode.Create;
Transform1044.Translation := Vector3(0.1924,0.8472,-0.0534);
Shape1045 := TShapeNode.Create;
Shape1045 := Shape50;
{ .AddChild }
Transform1044.AddChildren([Shape1045]);
{ .AddChildren }
HAnimSegment1042.AddChildren([Transform1044]);
Shape1046 := TShapeNode.Create;
LineSet1047 := TLineSetNode.Create;
LineSet1047.SetVertexCount([2]);
ColorRGBA1048 := TColorRGBANode.Create;
ColorRGBA1048 := ColorRGBA56;
{ .SetColor }
LineSet1047.Color := ColorRGBA1048;
Coordinate1049 := TCoordinateNode.Create;
Coordinate1049.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1047.Coord := Coordinate1049;
{ .SetGeometry }
Shape1046.Geometry := LineSet1047;
{ .AddChildren }
HAnimSegment1042.AddChildren([Shape1046]);
{ .AddChildren }
HAnimJoint1041.AddChildren([HAnimSegment1042]);
HAnimJoint1050 := THAnimJointNode.Create;
HAnimJoint1050.NameField := 'l_thumb2';
HAnimJoint1050.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1051 := THAnimSegmentNode.Create;
HAnimSegment1051.NameField := 'l_thumb_proximal';
TouchSensor1052 := TTouchSensorNode.Create;
TouchSensor1052.Description := 'HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal';
{ .AddChildren }
HAnimSegment1051.AddChildren([TouchSensor1052]);
Transform1053 := TTransformNode.Create;
Transform1053.Translation := Vector3(0.1951,0.8226,0.0246);
Shape1054 := TShapeNode.Create;
Shape1054 := Shape50;
{ .AddChild }
Transform1053.AddChildren([Shape1054]);
{ .AddChildren }
HAnimSegment1051.AddChildren([Transform1053]);
Shape1055 := TShapeNode.Create;
LineSet1056 := TLineSetNode.Create;
LineSet1056.SetVertexCount([2]);
ColorRGBA1057 := TColorRGBANode.Create;
ColorRGBA1057 := ColorRGBA56;
{ .SetColor }
LineSet1056.Color := ColorRGBA1057;
Coordinate1058 := TCoordinateNode.Create;
Coordinate1058.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1056.Coord := Coordinate1058;
{ .SetGeometry }
Shape1055.Geometry := LineSet1056;
{ .AddChildren }
HAnimSegment1051.AddChildren([Shape1055]);
{ .AddChildren }
HAnimJoint1050.AddChildren([HAnimSegment1051]);
HAnimJoint1059 := THAnimJointNode.Create;
HAnimJoint1059.NameField := 'l_thumb3';
HAnimJoint1059.Center := Vector3(0.1955,0.8159,0.0464);
HAnimSegment1060 := THAnimSegmentNode.Create;
HAnimSegment1060.NameField := 'l_thumb_distal';
TouchSensor1061 := TTouchSensorNode.Create;
TouchSensor1061.Description := 'HAnimJoint l_thumb3, HAnimSegment l_thumb_distal';
{ .AddChildren }
HAnimSegment1060.AddChildren([TouchSensor1061]);
Transform1062 := TTransformNode.Create;
Transform1062.Translation := Vector3(0.1955,0.8159,0.0464);
Shape1063 := TShapeNode.Create;
Shape1063 := Shape50;
{ .AddChild }
Transform1062.AddChildren([Shape1063]);
{ .AddChildren }
HAnimSegment1060.AddChildren([Transform1062]);
Shape1064 := TShapeNode.Create;
LineSet1065 := TLineSetNode.Create;
LineSet1065.SetVertexCount([2]);
ColorRGBA1066 := TColorRGBANode.Create;
ColorRGBA1066 := ColorRGBA77;
{ .SetColor }
LineSet1065.Color := ColorRGBA1066;
Coordinate1067 := TCoordinateNode.Create;
Coordinate1067.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ .SetCoord }
LineSet1065.Coord := Coordinate1067;
{ .SetGeometry }
Shape1064.Geometry := LineSet1065;
{ .AddChildren }
HAnimSegment1060.AddChildren([Shape1064]);
HAnimSite1068 := THAnimSiteNode.Create;
HAnimSite1068.NameField := 'l_thumb_distal_tip';
HAnimSite1068.Translation := Vector3(0.1982,0.8061,0.0759);
TouchSensor1069 := TTouchSensorNode.Create;
TouchSensor1069.Description := 'HAnimSite l_thumb_distal_tip';
{ .AddChildren }
HAnimSite1068.AddChildren([TouchSensor1069]);
Shape1070 := TShapeNode.Create;
Shape1070 := Shape113;
{ .AddChildren }
HAnimSite1068.AddChildren([Shape1070]);
{ .AddChildren }
HAnimSegment1060.AddChildren([HAnimSite1068]);
{ .AddChildren }
HAnimJoint1059.AddChildren([HAnimSegment1060]);
{ .AddChildren }
HAnimJoint1050.AddChildren([HAnimJoint1059]);
{ .AddChildren }
HAnimJoint1041.AddChildren([HAnimJoint1050]);
{ .AddChildren }
HAnimJoint983.AddChildren([HAnimJoint1041]);
HAnimJoint1071 := THAnimJointNode.Create;
HAnimJoint1071.NameField := 'l_index0';
HAnimJoint1071.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1072 := THAnimSegmentNode.Create;
HAnimSegment1072.NameField := 'l_index_metacarpal';
TouchSensor1073 := TTouchSensorNode.Create;
TouchSensor1073.Description := 'HAnimJoint l_index0, HAnimSegment l_index_metacarpal';
{ .AddChildren }
HAnimSegment1072.AddChildren([TouchSensor1073]);
Transform1074 := TTransformNode.Create;
Transform1074.Translation := Vector3(0.1983,0.8024,-0.028);
Shape1075 := TShapeNode.Create;
Shape1075 := Shape50;
{ .AddChild }
Transform1074.AddChildren([Shape1075]);
{ .AddChildren }
HAnimSegment1072.AddChildren([Transform1074]);
Shape1076 := TShapeNode.Create;
LineSet1077 := TLineSetNode.Create;
LineSet1077.SetVertexCount([2]);
ColorRGBA1078 := TColorRGBANode.Create;
ColorRGBA1078 := ColorRGBA56;
{ .SetColor }
LineSet1077.Color := ColorRGBA1078;
Coordinate1079 := TCoordinateNode.Create;
Coordinate1079.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1077.Coord := Coordinate1079;
{ .SetGeometry }
Shape1076.Geometry := LineSet1077;
{ .AddChildren }
HAnimSegment1072.AddChildren([Shape1076]);
{ .AddChildren }
HAnimJoint1071.AddChildren([HAnimSegment1072]);
HAnimJoint1080 := THAnimJointNode.Create;
HAnimJoint1080.NameField := 'l_index1';
HAnimJoint1080.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment1081 := THAnimSegmentNode.Create;
HAnimSegment1081.NameField := 'l_index_proximal';
TouchSensor1082 := TTouchSensorNode.Create;
TouchSensor1082.Description := 'HAnimJoint l_index1, HAnimSegment l_index_proximal';
{ .AddChildren }
HAnimSegment1081.AddChildren([TouchSensor1082]);
Transform1083 := TTransformNode.Create;
Transform1083.Translation := Vector3(0.1983,0.7815,-0.028);
Shape1084 := TShapeNode.Create;
Shape1084 := Shape50;
{ .AddChild }
Transform1083.AddChildren([Shape1084]);
{ .AddChildren }
HAnimSegment1081.AddChildren([Transform1083]);
Shape1085 := TShapeNode.Create;
LineSet1086 := TLineSetNode.Create;
LineSet1086.SetVertexCount([2]);
ColorRGBA1087 := TColorRGBANode.Create;
ColorRGBA1087 := ColorRGBA56;
{ .SetColor }
LineSet1086.Color := ColorRGBA1087;
Coordinate1088 := TCoordinateNode.Create;
Coordinate1088.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1086.Coord := Coordinate1088;
{ .SetGeometry }
Shape1085.Geometry := LineSet1086;
{ .AddChildren }
HAnimSegment1081.AddChildren([Shape1085]);
{ .AddChildren }
HAnimJoint1080.AddChildren([HAnimSegment1081]);
HAnimJoint1089 := THAnimJointNode.Create;
HAnimJoint1089.NameField := 'l_index2';
HAnimJoint1089.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1090 := THAnimSegmentNode.Create;
HAnimSegment1090.NameField := 'l_index_middle';
TouchSensor1091 := TTouchSensorNode.Create;
TouchSensor1091.Description := 'HAnimJoint l_index2, HAnimSegment l_index_middle';
{ .AddChildren }
HAnimSegment1090.AddChildren([TouchSensor1091]);
Transform1092 := TTransformNode.Create;
Transform1092.Translation := Vector3(0.2017,0.7363,-0.0248);
Shape1093 := TShapeNode.Create;
Shape1093 := Shape50;
{ .AddChild }
Transform1092.AddChildren([Shape1093]);
{ .AddChildren }
HAnimSegment1090.AddChildren([Transform1092]);
Shape1094 := TShapeNode.Create;
LineSet1095 := TLineSetNode.Create;
LineSet1095.SetVertexCount([2]);
ColorRGBA1096 := TColorRGBANode.Create;
ColorRGBA1096 := ColorRGBA56;
{ .SetColor }
LineSet1095.Color := ColorRGBA1096;
Coordinate1097 := TCoordinateNode.Create;
Coordinate1097.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1095.Coord := Coordinate1097;
{ .SetGeometry }
Shape1094.Geometry := LineSet1095;
{ .AddChildren }
HAnimSegment1090.AddChildren([Shape1094]);
{ .AddChildren }
HAnimJoint1089.AddChildren([HAnimSegment1090]);
HAnimJoint1098 := THAnimJointNode.Create;
HAnimJoint1098.NameField := 'l_index3';
HAnimJoint1098.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimSegment1099 := THAnimSegmentNode.Create;
HAnimSegment1099.NameField := 'l_index_distal';
TouchSensor1100 := TTouchSensorNode.Create;
TouchSensor1100.Description := 'HAnimJoint l_index3, HAnimSegment l_index_distal';
{ .AddChildren }
HAnimSegment1099.AddChildren([TouchSensor1100]);
Transform1101 := TTransformNode.Create;
Transform1101.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape1102 := TShapeNode.Create;
Shape1102 := Shape50;
{ .AddChild }
Transform1101.AddChildren([Shape1102]);
{ .AddChildren }
HAnimSegment1099.AddChildren([Transform1101]);
Shape1103 := TShapeNode.Create;
LineSet1104 := TLineSetNode.Create;
LineSet1104.SetVertexCount([2]);
ColorRGBA1105 := TColorRGBANode.Create;
ColorRGBA1105 := ColorRGBA77;
{ .SetColor }
LineSet1104.Color := ColorRGBA1105;
Coordinate1106 := TCoordinateNode.Create;
Coordinate1106.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ .SetCoord }
LineSet1104.Coord := Coordinate1106;
{ .SetGeometry }
Shape1103.Geometry := LineSet1104;
{ .AddChildren }
HAnimSegment1099.AddChildren([Shape1103]);
Shape1107 := TShapeNode.Create;
LineSet1108 := TLineSetNode.Create;
LineSet1108.SetVertexCount([2]);
ColorRGBA1109 := TColorRGBANode.Create;
ColorRGBA1109 := ColorRGBA77;
{ .SetColor }
LineSet1108.Color := ColorRGBA1109;
Coordinate1110 := TCoordinateNode.Create;
Coordinate1110.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2056,0.6743,-0.0482)]);
{ .SetCoord }
LineSet1108.Coord := Coordinate1110;
{ .SetGeometry }
Shape1107.Geometry := LineSet1108;
{ .AddChildren }
HAnimSegment1099.AddChildren([Shape1107]);
HAnimSite1111 := THAnimSiteNode.Create;
HAnimSite1111.NameField := 'l_index_distal_tip';
HAnimSite1111.Translation := Vector3(0.2089,0.6858,-0.0245);
TouchSensor1112 := TTouchSensorNode.Create;
TouchSensor1112.Description := 'HAnimSite l_index_distal_tip';
{ .AddChildren }
HAnimSite1111.AddChildren([TouchSensor1112]);
Shape1113 := TShapeNode.Create;
Shape1113 := Shape113;
{ .AddChildren }
HAnimSite1111.AddChildren([Shape1113]);
{ .AddChildren }
HAnimSegment1099.AddChildren([HAnimSite1111]);
HAnimSite1114 := THAnimSiteNode.Create;
HAnimSite1114.NameField := 'l_dactylion_pt';
HAnimSite1114.Translation := Vector3(0.2056,0.6743,-0.0482);
TouchSensor1115 := TTouchSensorNode.Create;
TouchSensor1115.Description := 'HAnimSite l_dactylion';
{ .AddChildren }
HAnimSite1114.AddChildren([TouchSensor1115]);
Shape1116 := TShapeNode.Create;
Shape1116 := Shape113;
{ .AddChildren }
HAnimSite1114.AddChildren([Shape1116]);
{ .AddChildren }
HAnimSegment1099.AddChildren([HAnimSite1114]);
{ .AddChildren }
HAnimJoint1098.AddChildren([HAnimSegment1099]);
{ .AddChildren }
HAnimJoint1089.AddChildren([HAnimJoint1098]);
{ .AddChildren }
HAnimJoint1080.AddChildren([HAnimJoint1089]);
{ .AddChildren }
HAnimJoint1071.AddChildren([HAnimJoint1080]);
{ .AddChildren }
HAnimJoint983.AddChildren([HAnimJoint1071]);
HAnimJoint1117 := THAnimJointNode.Create;
HAnimJoint1117.NameField := 'l_middle0';
HAnimJoint1117.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1118 := THAnimSegmentNode.Create;
HAnimSegment1118.NameField := 'l_middle_metacarpal';
TouchSensor1119 := TTouchSensorNode.Create;
TouchSensor1119.Description := 'HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal';
{ .AddChildren }
HAnimSegment1118.AddChildren([TouchSensor1119]);
Transform1120 := TTransformNode.Create;
Transform1120.Translation := Vector3(0.1987,0.8029,-0.053);
Shape1121 := TShapeNode.Create;
Shape1121 := Shape50;
{ .AddChild }
Transform1120.AddChildren([Shape1121]);
{ .AddChildren }
HAnimSegment1118.AddChildren([Transform1120]);
Shape1122 := TShapeNode.Create;
LineSet1123 := TLineSetNode.Create;
LineSet1123.SetVertexCount([2]);
ColorRGBA1124 := TColorRGBANode.Create;
ColorRGBA1124 := ColorRGBA56;
{ .SetColor }
LineSet1123.Color := ColorRGBA1124;
Coordinate1125 := TCoordinateNode.Create;
Coordinate1125.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1123.Coord := Coordinate1125;
{ .SetGeometry }
Shape1122.Geometry := LineSet1123;
{ .AddChildren }
HAnimSegment1118.AddChildren([Shape1122]);
{ .AddChildren }
HAnimJoint1117.AddChildren([HAnimSegment1118]);
HAnimJoint1126 := THAnimJointNode.Create;
HAnimJoint1126.NameField := 'l_middle1';
HAnimJoint1126.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1127 := THAnimSegmentNode.Create;
HAnimSegment1127.NameField := 'l_middle_proximal';
TouchSensor1128 := TTouchSensorNode.Create;
TouchSensor1128.Description := 'HAnimJoint l_middle1, HAnimSegment l_middle_proximal';
{ .AddChildren }
HAnimSegment1127.AddChildren([TouchSensor1128]);
Transform1129 := TTransformNode.Create;
Transform1129.Translation := Vector3(0.1987,0.7818,-0.053);
Shape1130 := TShapeNode.Create;
Shape1130 := Shape50;
{ .AddChild }
Transform1129.AddChildren([Shape1130]);
{ .AddChildren }
HAnimSegment1127.AddChildren([Transform1129]);
Shape1131 := TShapeNode.Create;
LineSet1132 := TLineSetNode.Create;
LineSet1132.SetVertexCount([2]);
ColorRGBA1133 := TColorRGBANode.Create;
ColorRGBA1133 := ColorRGBA56;
{ .SetColor }
LineSet1132.Color := ColorRGBA1133;
Coordinate1134 := TCoordinateNode.Create;
Coordinate1134.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1132.Coord := Coordinate1134;
{ .SetGeometry }
Shape1131.Geometry := LineSet1132;
{ .AddChildren }
HAnimSegment1127.AddChildren([Shape1131]);
{ .AddChildren }
HAnimJoint1126.AddChildren([HAnimSegment1127]);
HAnimJoint1135 := THAnimJointNode.Create;
HAnimJoint1135.NameField := 'l_middle2';
HAnimJoint1135.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1136 := THAnimSegmentNode.Create;
HAnimSegment1136.NameField := 'l_middle_middle';
TouchSensor1137 := TTouchSensorNode.Create;
TouchSensor1137.Description := 'HAnimJoint l_middle2, HAnimSegment l_middle_middle';
{ .AddChildren }
HAnimSegment1136.AddChildren([TouchSensor1137]);
Transform1138 := TTransformNode.Create;
Transform1138.Translation := Vector3(0.2013,0.7273,-0.0503);
Shape1139 := TShapeNode.Create;
Shape1139 := Shape50;
{ .AddChild }
Transform1138.AddChildren([Shape1139]);
{ .AddChildren }
HAnimSegment1136.AddChildren([Transform1138]);
Shape1140 := TShapeNode.Create;
LineSet1141 := TLineSetNode.Create;
LineSet1141.SetVertexCount([2]);
ColorRGBA1142 := TColorRGBANode.Create;
ColorRGBA1142 := ColorRGBA56;
{ .SetColor }
LineSet1141.Color := ColorRGBA1142;
Coordinate1143 := TCoordinateNode.Create;
Coordinate1143.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1141.Coord := Coordinate1143;
{ .SetGeometry }
Shape1140.Geometry := LineSet1141;
{ .AddChildren }
HAnimSegment1136.AddChildren([Shape1140]);
{ .AddChildren }
HAnimJoint1135.AddChildren([HAnimSegment1136]);
HAnimJoint1144 := THAnimJointNode.Create;
HAnimJoint1144.NameField := 'l_middle3';
HAnimJoint1144.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimSegment1145 := THAnimSegmentNode.Create;
HAnimSegment1145.NameField := 'l_middle_distal';
TouchSensor1146 := TTouchSensorNode.Create;
TouchSensor1146.Description := 'HAnimJoint l_middle3, HAnimSegment l_middle_distal';
{ .AddChildren }
HAnimSegment1145.AddChildren([TouchSensor1146]);
Transform1147 := TTransformNode.Create;
Transform1147.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape1148 := TShapeNode.Create;
Shape1148 := Shape50;
{ .AddChild }
Transform1147.AddChildren([Shape1148]);
{ .AddChildren }
HAnimSegment1145.AddChildren([Transform1147]);
Shape1149 := TShapeNode.Create;
LineSet1150 := TLineSetNode.Create;
LineSet1150.SetVertexCount([2]);
ColorRGBA1151 := TColorRGBANode.Create;
ColorRGBA1151 := ColorRGBA77;
{ .SetColor }
LineSet1150.Color := ColorRGBA1151;
Coordinate1152 := TCoordinateNode.Create;
Coordinate1152.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ .SetCoord }
LineSet1150.Coord := Coordinate1152;
{ .SetGeometry }
Shape1149.Geometry := LineSet1150;
{ .AddChildren }
HAnimSegment1145.AddChildren([Shape1149]);
HAnimSite1153 := THAnimSiteNode.Create;
HAnimSite1153.NameField := 'l_middle_distal_tip';
HAnimSite1153.Translation := Vector3(0.208,0.6731,-0.0491);
TouchSensor1154 := TTouchSensorNode.Create;
TouchSensor1154.Description := 'HAnimSite l_middle_distal_tip';
{ .AddChildren }
HAnimSite1153.AddChildren([TouchSensor1154]);
Shape1155 := TShapeNode.Create;
Shape1155 := Shape113;
{ .AddChildren }
HAnimSite1153.AddChildren([Shape1155]);
{ .AddChildren }
HAnimSegment1145.AddChildren([HAnimSite1153]);
{ .AddChildren }
HAnimJoint1144.AddChildren([HAnimSegment1145]);
{ .AddChildren }
HAnimJoint1135.AddChildren([HAnimJoint1144]);
{ .AddChildren }
HAnimJoint1126.AddChildren([HAnimJoint1135]);
{ .AddChildren }
HAnimJoint1117.AddChildren([HAnimJoint1126]);
{ .AddChildren }
HAnimJoint983.AddChildren([HAnimJoint1117]);
HAnimJoint1156 := THAnimJointNode.Create;
HAnimJoint1156.NameField := 'l_ring0';
HAnimJoint1156.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1157 := THAnimSegmentNode.Create;
HAnimSegment1157.NameField := 'l_ring_metacarpal';
TouchSensor1158 := TTouchSensorNode.Create;
TouchSensor1158.Description := 'HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal';
{ .AddChildren }
HAnimSegment1157.AddChildren([TouchSensor1158]);
Transform1159 := TTransformNode.Create;
Transform1159.Translation := Vector3(0.1956,0.8019,-0.0794);
Shape1160 := TShapeNode.Create;
Shape1160 := Shape50;
{ .AddChild }
Transform1159.AddChildren([Shape1160]);
{ .AddChildren }
HAnimSegment1157.AddChildren([Transform1159]);
Shape1161 := TShapeNode.Create;
LineSet1162 := TLineSetNode.Create;
LineSet1162.SetVertexCount([2]);
ColorRGBA1163 := TColorRGBANode.Create;
ColorRGBA1163 := ColorRGBA56;
{ .SetColor }
LineSet1162.Color := ColorRGBA1163;
Coordinate1164 := TCoordinateNode.Create;
Coordinate1164.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1162.Coord := Coordinate1164;
{ .SetGeometry }
Shape1161.Geometry := LineSet1162;
{ .AddChildren }
HAnimSegment1157.AddChildren([Shape1161]);
{ .AddChildren }
HAnimJoint1156.AddChildren([HAnimSegment1157]);
HAnimJoint1165 := THAnimJointNode.Create;
HAnimJoint1165.NameField := 'l_ring1';
HAnimJoint1165.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1166 := THAnimSegmentNode.Create;
HAnimSegment1166.NameField := 'l_ring_proximal';
TouchSensor1167 := TTouchSensorNode.Create;
TouchSensor1167.Description := 'HAnimJoint l_ring1, HAnimSegment l_ring_proximal';
{ .AddChildren }
HAnimSegment1166.AddChildren([TouchSensor1167]);
Transform1168 := TTransformNode.Create;
Transform1168.Translation := Vector3(0.1956,0.7815,-0.0794);
Shape1169 := TShapeNode.Create;
Shape1169 := Shape50;
{ .AddChild }
Transform1168.AddChildren([Shape1169]);
{ .AddChildren }
HAnimSegment1166.AddChildren([Transform1168]);
Shape1170 := TShapeNode.Create;
LineSet1171 := TLineSetNode.Create;
LineSet1171.SetVertexCount([2]);
ColorRGBA1172 := TColorRGBANode.Create;
ColorRGBA1172 := ColorRGBA56;
{ .SetColor }
LineSet1171.Color := ColorRGBA1172;
Coordinate1173 := TCoordinateNode.Create;
Coordinate1173.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1171.Coord := Coordinate1173;
{ .SetGeometry }
Shape1170.Geometry := LineSet1171;
{ .AddChildren }
HAnimSegment1166.AddChildren([Shape1170]);
{ .AddChildren }
HAnimJoint1165.AddChildren([HAnimSegment1166]);
HAnimJoint1174 := THAnimJointNode.Create;
HAnimJoint1174.NameField := 'l_ring2';
HAnimJoint1174.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1175 := THAnimSegmentNode.Create;
HAnimSegment1175.NameField := 'l_ring_middle';
TouchSensor1176 := TTouchSensorNode.Create;
TouchSensor1176.Description := 'HAnimJoint l_ring2, HAnimSegment l_ring_middle';
{ .AddChildren }
HAnimSegment1175.AddChildren([TouchSensor1176]);
Transform1177 := TTransformNode.Create;
Transform1177.Translation := Vector3(0.1973,0.7287,-0.0777);
Shape1178 := TShapeNode.Create;
Shape1178 := Shape50;
{ .AddChild }
Transform1177.AddChildren([Shape1178]);
{ .AddChildren }
HAnimSegment1175.AddChildren([Transform1177]);
Shape1179 := TShapeNode.Create;
LineSet1180 := TLineSetNode.Create;
LineSet1180.SetVertexCount([2]);
ColorRGBA1181 := TColorRGBANode.Create;
ColorRGBA1181 := ColorRGBA56;
{ .SetColor }
LineSet1180.Color := ColorRGBA1181;
Coordinate1182 := TCoordinateNode.Create;
Coordinate1182.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1180.Coord := Coordinate1182;
{ .SetGeometry }
Shape1179.Geometry := LineSet1180;
{ .AddChildren }
HAnimSegment1175.AddChildren([Shape1179]);
{ .AddChildren }
HAnimJoint1174.AddChildren([HAnimSegment1175]);
HAnimJoint1183 := THAnimJointNode.Create;
HAnimJoint1183.NameField := 'l_ring3';
HAnimJoint1183.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimSegment1184 := THAnimSegmentNode.Create;
HAnimSegment1184.NameField := 'l_ring_distal';
TouchSensor1185 := TTouchSensorNode.Create;
TouchSensor1185.Description := 'HAnimJoint l_ring3, HAnimSegment l_ring_distal';
{ .AddChildren }
HAnimSegment1184.AddChildren([TouchSensor1185]);
Transform1186 := TTransformNode.Create;
Transform1186.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape1187 := TShapeNode.Create;
Shape1187 := Shape50;
{ .AddChild }
Transform1186.AddChildren([Shape1187]);
{ .AddChildren }
HAnimSegment1184.AddChildren([Transform1186]);
Shape1188 := TShapeNode.Create;
LineSet1189 := TLineSetNode.Create;
LineSet1189.SetVertexCount([2]);
ColorRGBA1190 := TColorRGBANode.Create;
ColorRGBA1190 := ColorRGBA77;
{ .SetColor }
LineSet1189.Color := ColorRGBA1190;
Coordinate1191 := TCoordinateNode.Create;
Coordinate1191.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ .SetCoord }
LineSet1189.Coord := Coordinate1191;
{ .SetGeometry }
Shape1188.Geometry := LineSet1189;
{ .AddChildren }
HAnimSegment1184.AddChildren([Shape1188]);
HAnimSite1192 := THAnimSiteNode.Create;
HAnimSite1192.NameField := 'l_ring_distal_tip';
HAnimSite1192.Translation := Vector3(0.2035,0.675,-0.0756);
TouchSensor1193 := TTouchSensorNode.Create;
TouchSensor1193.Description := 'HAnimSite l_ring_distal_tip';
{ .AddChildren }
HAnimSite1192.AddChildren([TouchSensor1193]);
Shape1194 := TShapeNode.Create;
Shape1194 := Shape113;
{ .AddChildren }
HAnimSite1192.AddChildren([Shape1194]);
{ .AddChildren }
HAnimSegment1184.AddChildren([HAnimSite1192]);
{ .AddChildren }
HAnimJoint1183.AddChildren([HAnimSegment1184]);
{ .AddChildren }
HAnimJoint1174.AddChildren([HAnimJoint1183]);
{ .AddChildren }
HAnimJoint1165.AddChildren([HAnimJoint1174]);
{ .AddChildren }
HAnimJoint1156.AddChildren([HAnimJoint1165]);
{ .AddChildren }
HAnimJoint983.AddChildren([HAnimJoint1156]);
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195.NameField := 'l_pinky0';
HAnimJoint1195.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1196 := THAnimSegmentNode.Create;
HAnimSegment1196.NameField := 'l_pinky_metacarpal';
TouchSensor1197 := TTouchSensorNode.Create;
TouchSensor1197.Description := 'HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal';
{ .AddChildren }
HAnimSegment1196.AddChildren([TouchSensor1197]);
Transform1198 := TTransformNode.Create;
Transform1198.Translation := Vector3(0.1925,0.8066,-0.1036);
Shape1199 := TShapeNode.Create;
Shape1199 := Shape50;
{ .AddChild }
Transform1198.AddChildren([Shape1199]);
{ .AddChildren }
HAnimSegment1196.AddChildren([Transform1198]);
Shape1200 := TShapeNode.Create;
LineSet1201 := TLineSetNode.Create;
LineSet1201.SetVertexCount([2]);
ColorRGBA1202 := TColorRGBANode.Create;
ColorRGBA1202 := ColorRGBA56;
{ .SetColor }
LineSet1201.Color := ColorRGBA1202;
Coordinate1203 := TCoordinateNode.Create;
Coordinate1203.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1201.Coord := Coordinate1203;
{ .SetGeometry }
Shape1200.Geometry := LineSet1201;
{ .AddChildren }
HAnimSegment1196.AddChildren([Shape1200]);
{ .AddChildren }
HAnimJoint1195.AddChildren([HAnimSegment1196]);
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204.NameField := 'l_pinky1';
HAnimJoint1204.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment1205 := THAnimSegmentNode.Create;
HAnimSegment1205.NameField := 'l_pinky_proximal';
TouchSensor1206 := TTouchSensorNode.Create;
TouchSensor1206.Description := 'HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal';
{ .AddChildren }
HAnimSegment1205.AddChildren([TouchSensor1206]);
Transform1207 := TTransformNode.Create;
Transform1207.Translation := Vector3(0.1925,0.7866,-0.1036);
Shape1208 := TShapeNode.Create;
Shape1208 := Shape50;
{ .AddChild }
Transform1207.AddChildren([Shape1208]);
{ .AddChildren }
HAnimSegment1205.AddChildren([Transform1207]);
Shape1209 := TShapeNode.Create;
LineSet1210 := TLineSetNode.Create;
LineSet1210.SetVertexCount([2]);
ColorRGBA1211 := TColorRGBANode.Create;
ColorRGBA1211 := ColorRGBA56;
{ .SetColor }
LineSet1210.Color := ColorRGBA1211;
Coordinate1212 := TCoordinateNode.Create;
Coordinate1212.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1210.Coord := Coordinate1212;
{ .SetGeometry }
Shape1209.Geometry := LineSet1210;
{ .AddChildren }
HAnimSegment1205.AddChildren([Shape1209]);
{ .AddChildren }
HAnimJoint1204.AddChildren([HAnimSegment1205]);
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213.NameField := 'l_pinky2';
HAnimJoint1213.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1214 := THAnimSegmentNode.Create;
HAnimSegment1214.NameField := 'l_pinky_middle';
TouchSensor1215 := TTouchSensorNode.Create;
TouchSensor1215.Description := 'HAnimJoint l_pinky2, HAnimSegment l_pinky_middle';
{ .AddChildren }
HAnimSegment1214.AddChildren([TouchSensor1215]);
Transform1216 := TTransformNode.Create;
Transform1216.Translation := Vector3(0.1938,0.7452,-0.1024);
Shape1217 := TShapeNode.Create;
Shape1217 := Shape50;
{ .AddChild }
Transform1216.AddChildren([Shape1217]);
{ .AddChildren }
HAnimSegment1214.AddChildren([Transform1216]);
Shape1218 := TShapeNode.Create;
LineSet1219 := TLineSetNode.Create;
LineSet1219.SetVertexCount([2]);
ColorRGBA1220 := TColorRGBANode.Create;
ColorRGBA1220 := ColorRGBA56;
{ .SetColor }
LineSet1219.Color := ColorRGBA1220;
Coordinate1221 := TCoordinateNode.Create;
Coordinate1221.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1219.Coord := Coordinate1221;
{ .SetGeometry }
Shape1218.Geometry := LineSet1219;
{ .AddChildren }
HAnimSegment1214.AddChildren([Shape1218]);
{ .AddChildren }
HAnimJoint1213.AddChildren([HAnimSegment1214]);
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222.NameField := 'l_pinky3';
HAnimJoint1222.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimSegment1223 := THAnimSegmentNode.Create;
HAnimSegment1223.NameField := 'l_pinky_distal';
TouchSensor1224 := TTouchSensorNode.Create;
TouchSensor1224.Description := 'HAnimJoint l_pinky3, HAnimSegment l_pinky_distal';
{ .AddChildren }
HAnimSegment1223.AddChildren([TouchSensor1224]);
Transform1225 := TTransformNode.Create;
Transform1225.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape1226 := TShapeNode.Create;
Shape1226 := Shape50;
{ .AddChild }
Transform1225.AddChildren([Shape1226]);
{ .AddChildren }
HAnimSegment1223.AddChildren([Transform1225]);
Shape1227 := TShapeNode.Create;
LineSet1228 := TLineSetNode.Create;
LineSet1228.SetVertexCount([2]);
ColorRGBA1229 := TColorRGBANode.Create;
ColorRGBA1229 := ColorRGBA77;
{ .SetColor }
LineSet1228.Color := ColorRGBA1229;
Coordinate1230 := TCoordinateNode.Create;
Coordinate1230.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ .SetCoord }
LineSet1228.Coord := Coordinate1230;
{ .SetGeometry }
Shape1227.Geometry := LineSet1228;
{ .AddChildren }
HAnimSegment1223.AddChildren([Shape1227]);
HAnimSite1231 := THAnimSiteNode.Create;
HAnimSite1231.NameField := 'l_pinky_distal_tip';
HAnimSite1231.Translation := Vector3(0.2014,0.7009,-0.1012);
TouchSensor1232 := TTouchSensorNode.Create;
TouchSensor1232.Description := 'HAnimSite l_pinky_distal_tip';
{ .AddChildren }
HAnimSite1231.AddChildren([TouchSensor1232]);
Shape1233 := TShapeNode.Create;
Shape1233 := Shape113;
{ .AddChildren }
HAnimSite1231.AddChildren([Shape1233]);
{ .AddChildren }
HAnimSegment1223.AddChildren([HAnimSite1231]);
{ .AddChildren }
HAnimJoint1222.AddChildren([HAnimSegment1223]);
{ .AddChildren }
HAnimJoint1213.AddChildren([HAnimJoint1222]);
{ .AddChildren }
HAnimJoint1204.AddChildren([HAnimJoint1213]);
{ .AddChildren }
HAnimJoint1195.AddChildren([HAnimJoint1204]);
{ .AddChildren }
HAnimJoint983.AddChildren([HAnimJoint1195]);
{ .AddChildren }
HAnimJoint946.AddChildren([HAnimJoint983]);
{ .AddChildren }
HAnimJoint930.AddChildren([HAnimJoint946]);
{ .AddChildren }
HAnimJoint921.AddChildren([HAnimJoint930]);
{ .AddChildren }
HAnimJoint884.AddChildren([HAnimJoint921]);
{ .AddChildren }
HAnimJoint596.AddChildren([HAnimJoint884]);
HAnimJoint1234 := THAnimJointNode.Create;
HAnimJoint1234.NameField := 'r_sternoclavicular';
HAnimJoint1234.Center := Vector3(-0.082,1.4488,-0.0353);
HAnimSegment1235 := THAnimSegmentNode.Create;
HAnimSegment1235.NameField := 'r_clavicle';
TouchSensor1236 := TTouchSensorNode.Create;
TouchSensor1236.Description := 'HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle';
{ .AddChildren }
HAnimSegment1235.AddChildren([TouchSensor1236]);
Transform1237 := TTransformNode.Create;
Transform1237.Translation := Vector3(-0.082,1.4488,-0.0353);
Shape1238 := TShapeNode.Create;
Shape1238 := Shape50;
{ .AddChild }
Transform1237.AddChildren([Shape1238]);
{ .AddChildren }
HAnimSegment1235.AddChildren([Transform1237]);
Shape1239 := TShapeNode.Create;
LineSet1240 := TLineSetNode.Create;
LineSet1240.SetVertexCount([2]);
ColorRGBA1241 := TColorRGBANode.Create;
ColorRGBA1241 := ColorRGBA56;
{ .SetColor }
LineSet1240.Color := ColorRGBA1241;
Coordinate1242 := TCoordinateNode.Create;
Coordinate1242.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet1240.Coord := Coordinate1242;
{ .SetGeometry }
Shape1239.Geometry := LineSet1240;
{ .AddChildren }
HAnimSegment1235.AddChildren([Shape1239]);
Shape1243 := TShapeNode.Create;
LineSet1244 := TLineSetNode.Create;
LineSet1244.SetVertexCount([2]);
ColorRGBA1245 := TColorRGBANode.Create;
ColorRGBA1245 := ColorRGBA77;
{ .SetColor }
LineSet1244.Color := ColorRGBA1245;
Coordinate1246 := TCoordinateNode.Create;
Coordinate1246.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.0115,1.4943,0.04)]);
{ .SetCoord }
LineSet1244.Coord := Coordinate1246;
{ .SetGeometry }
Shape1243.Geometry := LineSet1244;
{ .AddChildren }
HAnimSegment1235.AddChildren([Shape1243]);
Shape1247 := TShapeNode.Create;
LineSet1248 := TLineSetNode.Create;
LineSet1248.SetVertexCount([2]);
ColorRGBA1249 := TColorRGBANode.Create;
ColorRGBA1249 := ColorRGBA77;
{ .SetColor }
LineSet1248.Color := ColorRGBA1249;
Coordinate1250 := TCoordinateNode.Create;
Coordinate1250.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1905,1.4791,-0.0431)]);
{ .SetCoord }
LineSet1248.Coord := Coordinate1250;
{ .SetGeometry }
Shape1247.Geometry := LineSet1248;
{ .AddChildren }
HAnimSegment1235.AddChildren([Shape1247]);
Shape1251 := TShapeNode.Create;
LineSet1252 := TLineSetNode.Create;
LineSet1252.SetVertexCount([2]);
ColorRGBA1253 := TColorRGBANode.Create;
ColorRGBA1253 := ColorRGBA77;
{ .SetColor }
LineSet1252.Color := ColorRGBA1253;
Coordinate1254 := TCoordinateNode.Create;
Coordinate1254.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1626,1.4072,-0.0031)]);
{ .SetCoord }
LineSet1252.Coord := Coordinate1254;
{ .SetGeometry }
Shape1251.Geometry := LineSet1252;
{ .AddChildren }
HAnimSegment1235.AddChildren([Shape1251]);
Shape1255 := TShapeNode.Create;
LineSet1256 := TLineSetNode.Create;
LineSet1256.SetVertexCount([2]);
ColorRGBA1257 := TColorRGBANode.Create;
ColorRGBA1257 := ColorRGBA77;
{ .SetColor }
LineSet1256.Color := ColorRGBA1257;
Coordinate1258 := TCoordinateNode.Create;
Coordinate1258.SetPoint([Vector3(-0.082,1.4488,-0.0353),Vector3(-0.1603,1.4098,-0.0826)]);
{ .SetCoord }
LineSet1256.Coord := Coordinate1258;
{ .SetGeometry }
Shape1255.Geometry := LineSet1256;
{ .AddChildren }
HAnimSegment1235.AddChildren([Shape1255]);
HAnimSite1259 := THAnimSiteNode.Create;
HAnimSite1259.NameField := 'r_clavicale_pt';
HAnimSite1259.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1260 := TTouchSensorNode.Create;
TouchSensor1260.Description := 'HAnimSite r_clavicale';
{ .AddChildren }
HAnimSite1259.AddChildren([TouchSensor1260]);
Shape1261 := TShapeNode.Create;
Shape1261 := Shape113;
{ .AddChildren }
HAnimSite1259.AddChildren([Shape1261]);
{ .AddChildren }
HAnimSegment1235.AddChildren([HAnimSite1259]);
HAnimSite1262 := THAnimSiteNode.Create;
HAnimSite1262.NameField := 'r_acromion_pt';
HAnimSite1262.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor1263 := TTouchSensorNode.Create;
TouchSensor1263.Description := 'HAnimSite r_acromion';
{ .AddChildren }
HAnimSite1262.AddChildren([TouchSensor1263]);
Shape1264 := TShapeNode.Create;
Shape1264 := Shape113;
{ .AddChildren }
HAnimSite1262.AddChildren([Shape1264]);
{ .AddChildren }
HAnimSegment1235.AddChildren([HAnimSite1262]);
HAnimSite1265 := THAnimSiteNode.Create;
HAnimSite1265.NameField := 'r_axilla_ant_pt';
HAnimSite1265.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1266 := TTouchSensorNode.Create;
TouchSensor1266.Description := 'HAnimSite r_axilla_ant';
{ .AddChildren }
HAnimSite1265.AddChildren([TouchSensor1266]);
Shape1267 := TShapeNode.Create;
Shape1267 := Shape113;
{ .AddChildren }
HAnimSite1265.AddChildren([Shape1267]);
{ .AddChildren }
HAnimSegment1235.AddChildren([HAnimSite1265]);
HAnimSite1268 := THAnimSiteNode.Create;
HAnimSite1268.NameField := 'r_axilla_post_pt';
HAnimSite1268.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor1269 := TTouchSensorNode.Create;
TouchSensor1269.Description := 'HAnimSite r_axilla_post';
{ .AddChildren }
HAnimSite1268.AddChildren([TouchSensor1269]);
Shape1270 := TShapeNode.Create;
Shape1270 := Shape113;
{ .AddChildren }
HAnimSite1268.AddChildren([Shape1270]);
{ .AddChildren }
HAnimSegment1235.AddChildren([HAnimSite1268]);
{ .AddChildren }
HAnimJoint1234.AddChildren([HAnimSegment1235]);
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271.NameField := 'r_acromioclavicular';
HAnimJoint1271.Center := Vector3(-0.0962,1.4269,-0.0424);
HAnimSegment1272 := THAnimSegmentNode.Create;
HAnimSegment1272.NameField := 'r_scapula';
TouchSensor1273 := TTouchSensorNode.Create;
TouchSensor1273.Description := 'HAnimJoint r_acromioclavicular, HAnimSegment r_scapula';
{ .AddChildren }
HAnimSegment1272.AddChildren([TouchSensor1273]);
Transform1274 := TTransformNode.Create;
Transform1274.Translation := Vector3(-0.0962,1.4269,-0.0424);
Shape1275 := TShapeNode.Create;
Shape1275 := Shape50;
{ .AddChild }
Transform1274.AddChildren([Shape1275]);
{ .AddChildren }
HAnimSegment1272.AddChildren([Transform1274]);
Shape1276 := TShapeNode.Create;
LineSet1277 := TLineSetNode.Create;
LineSet1277.SetVertexCount([2]);
ColorRGBA1278 := TColorRGBANode.Create;
ColorRGBA1278 := ColorRGBA56;
{ .SetColor }
LineSet1277.Color := ColorRGBA1278;
Coordinate1279 := TCoordinateNode.Create;
Coordinate1279.SetPoint([Vector3(-0.0962,1.4269,-0.0424),Vector3(-0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet1277.Coord := Coordinate1279;
{ .SetGeometry }
Shape1276.Geometry := LineSet1277;
{ .AddChildren }
HAnimSegment1272.AddChildren([Shape1276]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimSegment1272]);
HAnimJoint1280 := THAnimJointNode.Create;
HAnimJoint1280.NameField := 'r_shoulder';
HAnimJoint1280.Center := Vector3(-0.2029,1.4376,-0.0387);
HAnimSegment1281 := THAnimSegmentNode.Create;
HAnimSegment1281.NameField := 'r_upperarm';
TouchSensor1282 := TTouchSensorNode.Create;
TouchSensor1282.Description := 'HAnimJoint r_shoulder, HAnimSegment r_upperarm';
{ .AddChildren }
HAnimSegment1281.AddChildren([TouchSensor1282]);
Transform1283 := TTransformNode.Create;
Transform1283.Translation := Vector3(-0.2029,1.4376,-0.0387);
Shape1284 := TShapeNode.Create;
Shape1284 := Shape50;
{ .AddChild }
Transform1283.AddChildren([Shape1284]);
{ .AddChildren }
HAnimSegment1281.AddChildren([Transform1283]);
Shape1285 := TShapeNode.Create;
LineSet1286 := TLineSetNode.Create;
LineSet1286.SetVertexCount([2]);
ColorRGBA1287 := TColorRGBANode.Create;
ColorRGBA1287 := ColorRGBA56;
{ .SetColor }
LineSet1286.Color := ColorRGBA1287;
Coordinate1288 := TCoordinateNode.Create;
Coordinate1288.SetPoint([Vector3(-0.2029,1.4376,-0.0387),Vector3(-0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet1286.Coord := Coordinate1288;
{ .SetGeometry }
Shape1285.Geometry := LineSet1286;
{ .AddChildren }
HAnimSegment1281.AddChildren([Shape1285]);
Shape1289 := TShapeNode.Create;
LineSet1290 := TLineSetNode.Create;
LineSet1290.SetVertexCount([2]);
ColorRGBA1291 := TColorRGBANode.Create;
ColorRGBA1291 := ColorRGBA77;
{ .SetColor }
LineSet1290.Color := ColorRGBA1291;
Coordinate1292 := TCoordinateNode.Create;
Coordinate1292.SetPoint([Vector3(-0.2029,1.4376,-0.0387),Vector3(-0.2224,1.1517,-0.1033)]);
{ .SetCoord }
LineSet1290.Coord := Coordinate1292;
{ .SetGeometry }
Shape1289.Geometry := LineSet1290;
{ .AddChildren }
HAnimSegment1281.AddChildren([Shape1289]);
HAnimSite1293 := THAnimSiteNode.Create;
HAnimSite1293.NameField := 'r_humeral_lateral_epicn_pt';
HAnimSite1293.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1294 := TTouchSensorNode.Create;
TouchSensor1294.Description := 'HAnimSite r_humeral_lateral_epicn';
{ .AddChildren }
HAnimSite1293.AddChildren([TouchSensor1294]);
Shape1295 := TShapeNode.Create;
Shape1295 := Shape113;
{ .AddChildren }
HAnimSite1293.AddChildren([Shape1295]);
{ .AddChildren }
HAnimSegment1281.AddChildren([HAnimSite1293]);
{ .AddChildren }
HAnimJoint1280.AddChildren([HAnimSegment1281]);
HAnimJoint1296 := THAnimJointNode.Create;
HAnimJoint1296.NameField := 'r_elbow';
HAnimJoint1296.Center := Vector3(-0.2014,1.1357,-0.0682);
HAnimSegment1297 := THAnimSegmentNode.Create;
HAnimSegment1297.NameField := 'r_forearm';
TouchSensor1298 := TTouchSensorNode.Create;
TouchSensor1298.Description := 'HAnimJoint r_elbow, HAnimSegment r_forearm';
{ .AddChildren }
HAnimSegment1297.AddChildren([TouchSensor1298]);
Transform1299 := TTransformNode.Create;
Transform1299.Translation := Vector3(-0.2014,1.1357,-0.0682);
Shape1300 := TShapeNode.Create;
Shape1300 := Shape50;
{ .AddChild }
Transform1299.AddChildren([Shape1300]);
{ .AddChildren }
HAnimSegment1297.AddChildren([Transform1299]);
Shape1301 := TShapeNode.Create;
LineSet1302 := TLineSetNode.Create;
LineSet1302.SetVertexCount([2]);
ColorRGBA1303 := TColorRGBANode.Create;
ColorRGBA1303 := ColorRGBA56;
{ .SetColor }
LineSet1302.Color := ColorRGBA1303;
Coordinate1304 := TCoordinateNode.Create;
Coordinate1304.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet1302.Coord := Coordinate1304;
{ .SetGeometry }
Shape1301.Geometry := LineSet1302;
{ .AddChildren }
HAnimSegment1297.AddChildren([Shape1301]);
Shape1305 := TShapeNode.Create;
LineSet1306 := TLineSetNode.Create;
LineSet1306.SetVertexCount([2]);
ColorRGBA1307 := TColorRGBANode.Create;
ColorRGBA1307 := ColorRGBA77;
{ .SetColor }
LineSet1306.Color := ColorRGBA1307;
Coordinate1308 := TCoordinateNode.Create;
Coordinate1308.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1884,0.8676,-0.036)]);
{ .SetCoord }
LineSet1306.Coord := Coordinate1308;
{ .SetGeometry }
Shape1305.Geometry := LineSet1306;
{ .AddChildren }
HAnimSegment1297.AddChildren([Shape1305]);
Shape1309 := TShapeNode.Create;
LineSet1310 := TLineSetNode.Create;
LineSet1310.SetVertexCount([2]);
ColorRGBA1311 := TColorRGBANode.Create;
ColorRGBA1311 := ColorRGBA77;
{ .SetColor }
LineSet1310.Color := ColorRGBA1311;
Coordinate1312 := TCoordinateNode.Create;
Coordinate1312.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.1907,1.1405,-0.1065)]);
{ .SetCoord }
LineSet1310.Coord := Coordinate1312;
{ .SetGeometry }
Shape1309.Geometry := LineSet1310;
{ .AddChildren }
HAnimSegment1297.AddChildren([Shape1309]);
Shape1313 := TShapeNode.Create;
LineSet1314 := TLineSetNode.Create;
LineSet1314.SetVertexCount([2]);
ColorRGBA1315 := TColorRGBANode.Create;
ColorRGBA1315 := ColorRGBA77;
{ .SetColor }
LineSet1314.Color := ColorRGBA1315;
Coordinate1316 := TCoordinateNode.Create;
Coordinate1316.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.168,1.1298,-0.1062)]);
{ .SetCoord }
LineSet1314.Coord := Coordinate1316;
{ .SetGeometry }
Shape1313.Geometry := LineSet1314;
{ .AddChildren }
HAnimSegment1297.AddChildren([Shape1313]);
Shape1317 := TShapeNode.Create;
LineSet1318 := TLineSetNode.Create;
LineSet1318.SetVertexCount([2]);
ColorRGBA1319 := TColorRGBANode.Create;
ColorRGBA1319 := ColorRGBA77;
{ .SetColor }
LineSet1318.Color := ColorRGBA1319;
Coordinate1320 := TCoordinateNode.Create;
Coordinate1320.SetPoint([Vector3(-0.2014,1.1357,-0.0682),Vector3(-0.213,1.1305,-0.1091)]);
{ .SetCoord }
LineSet1318.Coord := Coordinate1320;
{ .SetGeometry }
Shape1317.Geometry := LineSet1318;
{ .AddChildren }
HAnimSegment1297.AddChildren([Shape1317]);
HAnimSite1321 := THAnimSiteNode.Create;
HAnimSite1321.NameField := 'r_radial_styloid_pt';
HAnimSite1321.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1322 := TTouchSensorNode.Create;
TouchSensor1322.Description := 'HAnimSite r_radial_styloid';
{ .AddChildren }
HAnimSite1321.AddChildren([TouchSensor1322]);
Shape1323 := TShapeNode.Create;
Shape1323 := Shape113;
{ .AddChildren }
HAnimSite1321.AddChildren([Shape1323]);
{ .AddChildren }
HAnimSegment1297.AddChildren([HAnimSite1321]);
HAnimSite1324 := THAnimSiteNode.Create;
HAnimSite1324.NameField := 'r_olecranon_pt';
HAnimSite1324.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1325 := TTouchSensorNode.Create;
TouchSensor1325.Description := 'HAnimSite r_olecranon';
{ .AddChildren }
HAnimSite1324.AddChildren([TouchSensor1325]);
Shape1326 := TShapeNode.Create;
Shape1326 := Shape113;
{ .AddChildren }
HAnimSite1324.AddChildren([Shape1326]);
{ .AddChildren }
HAnimSegment1297.AddChildren([HAnimSite1324]);
HAnimSite1327 := THAnimSiteNode.Create;
HAnimSite1327.NameField := 'r_humeral_medial_epicn_pt';
HAnimSite1327.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1328 := TTouchSensorNode.Create;
TouchSensor1328.Description := 'HAnimSite r_humeral_medial_epicn';
{ .AddChildren }
HAnimSite1327.AddChildren([TouchSensor1328]);
Shape1329 := TShapeNode.Create;
Shape1329 := Shape113;
{ .AddChildren }
HAnimSite1327.AddChildren([Shape1329]);
{ .AddChildren }
HAnimSegment1297.AddChildren([HAnimSite1327]);
HAnimSite1330 := THAnimSiteNode.Create;
HAnimSite1330.NameField := 'r_radiale_pt';
HAnimSite1330.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1331 := TTouchSensorNode.Create;
TouchSensor1331.Description := 'HAnimSite r_radiale';
{ .AddChildren }
HAnimSite1330.AddChildren([TouchSensor1331]);
Shape1332 := TShapeNode.Create;
Shape1332 := Shape113;
{ .AddChildren }
HAnimSite1330.AddChildren([Shape1332]);
{ .AddChildren }
HAnimSegment1297.AddChildren([HAnimSite1330]);
{ .AddChildren }
HAnimJoint1296.AddChildren([HAnimSegment1297]);
HAnimJoint1333 := THAnimJointNode.Create;
HAnimJoint1333.NameField := 'r_wrist';
HAnimJoint1333.Center := Vector3(-0.1984,0.8663,-0.0583);
HAnimSegment1334 := THAnimSegmentNode.Create;
HAnimSegment1334.NameField := 'r_hand';
TouchSensor1335 := TTouchSensorNode.Create;
TouchSensor1335.Description := 'HAnimJoint r_wrist, HAnimSegment r_hand';
{ .AddChildren }
HAnimSegment1334.AddChildren([TouchSensor1335]);
Transform1336 := TTransformNode.Create;
Transform1336.Translation := Vector3(-0.1984,0.8663,-0.0583);
Shape1337 := TShapeNode.Create;
Shape1337 := Shape50;
{ .AddChild }
Transform1336.AddChildren([Shape1337]);
{ .AddChildren }
HAnimSegment1334.AddChildren([Transform1336]);
Shape1338 := TShapeNode.Create;
LineSet1339 := TLineSetNode.Create;
LineSet1339.SetVertexCount([2]);
ColorRGBA1340 := TColorRGBANode.Create;
ColorRGBA1340 := ColorRGBA56;
{ .SetColor }
LineSet1339.Color := ColorRGBA1340;
Coordinate1341 := TCoordinateNode.Create;
Coordinate1341.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet1339.Coord := Coordinate1341;
{ .SetGeometry }
Shape1338.Geometry := LineSet1339;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1338]);
Shape1342 := TShapeNode.Create;
LineSet1343 := TLineSetNode.Create;
LineSet1343.SetVertexCount([2]);
ColorRGBA1344 := TColorRGBANode.Create;
ColorRGBA1344 := ColorRGBA56;
{ .SetColor }
LineSet1343.Color := ColorRGBA1344;
Coordinate1345 := TCoordinateNode.Create;
Coordinate1345.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet1343.Coord := Coordinate1345;
{ .SetGeometry }
Shape1342.Geometry := LineSet1343;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1342]);
Shape1346 := TShapeNode.Create;
LineSet1347 := TLineSetNode.Create;
LineSet1347.SetVertexCount([2]);
ColorRGBA1348 := TColorRGBANode.Create;
ColorRGBA1348 := ColorRGBA56;
{ .SetColor }
LineSet1347.Color := ColorRGBA1348;
Coordinate1349 := TCoordinateNode.Create;
Coordinate1349.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1347.Coord := Coordinate1349;
{ .SetGeometry }
Shape1346.Geometry := LineSet1347;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1346]);
Shape1350 := TShapeNode.Create;
LineSet1351 := TLineSetNode.Create;
LineSet1351.SetVertexCount([2]);
ColorRGBA1352 := TColorRGBANode.Create;
ColorRGBA1352 := ColorRGBA56;
{ .SetColor }
LineSet1351.Color := ColorRGBA1352;
Coordinate1353 := TCoordinateNode.Create;
Coordinate1353.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1351.Coord := Coordinate1353;
{ .SetGeometry }
Shape1350.Geometry := LineSet1351;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1350]);
Shape1354 := TShapeNode.Create;
LineSet1355 := TLineSetNode.Create;
LineSet1355.SetVertexCount([2]);
ColorRGBA1356 := TColorRGBANode.Create;
ColorRGBA1356 := ColorRGBA56;
{ .SetColor }
LineSet1355.Color := ColorRGBA1356;
Coordinate1357 := TCoordinateNode.Create;
Coordinate1357.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1355.Coord := Coordinate1357;
{ .SetGeometry }
Shape1354.Geometry := LineSet1355;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1354]);
Shape1358 := TShapeNode.Create;
LineSet1359 := TLineSetNode.Create;
LineSet1359.SetVertexCount([2]);
ColorRGBA1360 := TColorRGBANode.Create;
ColorRGBA1360 := ColorRGBA77;
{ .SetColor }
LineSet1359.Color := ColorRGBA1360;
Coordinate1361 := TCoordinateNode.Create;
Coordinate1361.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1977,0.8169,-0.0177)]);
{ .SetCoord }
LineSet1359.Coord := Coordinate1361;
{ .SetGeometry }
Shape1358.Geometry := LineSet1359;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1358]);
Shape1362 := TShapeNode.Create;
LineSet1363 := TLineSetNode.Create;
LineSet1363.SetVertexCount([2]);
ColorRGBA1364 := TColorRGBANode.Create;
ColorRGBA1364 := ColorRGBA77;
{ .SetColor }
LineSet1363.Color := ColorRGBA1364;
Coordinate1365 := TCoordinateNode.Create;
Coordinate1365.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.2117,0.8562,-0.0584)]);
{ .SetCoord }
LineSet1363.Coord := Coordinate1365;
{ .SetGeometry }
Shape1362.Geometry := LineSet1363;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1362]);
Shape1366 := TShapeNode.Create;
LineSet1367 := TLineSetNode.Create;
LineSet1367.SetVertexCount([2]);
ColorRGBA1368 := TColorRGBANode.Create;
ColorRGBA1368 := ColorRGBA77;
{ .SetColor }
LineSet1367.Color := ColorRGBA1368;
Coordinate1369 := TCoordinateNode.Create;
Coordinate1369.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.1929,0.789,-0.1064)]);
{ .SetCoord }
LineSet1367.Coord := Coordinate1369;
{ .SetGeometry }
Shape1366.Geometry := LineSet1367;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1366]);
Shape1370 := TShapeNode.Create;
LineSet1371 := TLineSetNode.Create;
LineSet1371.SetVertexCount([2]);
ColorRGBA1372 := TColorRGBANode.Create;
ColorRGBA1372 := ColorRGBA814;
{ .SetColor }
LineSet1371.Color := ColorRGBA1372;
Coordinate1373 := TCoordinateNode.Create;
Coordinate1373.SetPoint([Vector3(-0.1984,0.8663,-0.0583),Vector3(-0.3,0.75,0.45)]);
{ .SetCoord }
LineSet1371.Coord := Coordinate1373;
{ .SetGeometry }
Shape1370.Geometry := LineSet1371;
{ .AddChildren }
HAnimSegment1334.AddChildren([Shape1370]);
HAnimSite1374 := THAnimSiteNode.Create;
HAnimSite1374.NameField := 'r_metacarpal_pha2_pt';
HAnimSite1374.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1375 := TTouchSensorNode.Create;
TouchSensor1375.Description := 'HAnimSite r_metacarpal_pha2';
{ .AddChildren }
HAnimSite1374.AddChildren([TouchSensor1375]);
Shape1376 := TShapeNode.Create;
Shape1376 := Shape113;
{ .AddChildren }
HAnimSite1374.AddChildren([Shape1376]);
{ .AddChildren }
HAnimSegment1334.AddChildren([HAnimSite1374]);
HAnimSite1377 := THAnimSiteNode.Create;
HAnimSite1377.NameField := 'r_ulnar_styloid_pt';
HAnimSite1377.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1378 := TTouchSensorNode.Create;
TouchSensor1378.Description := 'HAnimSite r_ulnar_styloid';
{ .AddChildren }
HAnimSite1377.AddChildren([TouchSensor1378]);
Shape1379 := TShapeNode.Create;
Shape1379 := Shape113;
{ .AddChildren }
HAnimSite1377.AddChildren([Shape1379]);
{ .AddChildren }
HAnimSegment1334.AddChildren([HAnimSite1377]);
HAnimSite1380 := THAnimSiteNode.Create;
HAnimSite1380.NameField := 'r_metacarpal_pha5_pt';
HAnimSite1380.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1381 := TTouchSensorNode.Create;
TouchSensor1381.Description := 'HAnimSite r_metacarpal_pha5';
{ .AddChildren }
HAnimSite1380.AddChildren([TouchSensor1381]);
Shape1382 := TShapeNode.Create;
Shape1382 := Shape113;
{ .AddChildren }
HAnimSite1380.AddChildren([Shape1382]);
{ .AddChildren }
HAnimSegment1334.AddChildren([HAnimSite1380]);
HAnimSite1383 := THAnimSiteNode.Create;
HAnimSite1383.NameField := 'r_hand_front_view';
HAnimSite1383.Translation := Vector3(-0.3,0.75,0.45);
TouchSensor1384 := TTouchSensorNode.Create;
TouchSensor1384.Description := 'HAnimSite r_hand_front_view';
{ .AddChildren }
HAnimSite1383.AddChildren([TouchSensor1384]);
Shape1385 := TShapeNode.Create;
Shape1385 := Shape113;
{ .AddChildren }
HAnimSite1383.AddChildren([Shape1385]);
Viewpoint1386 := TViewpointNode.Create;
Viewpoint1386.Description := 'right hand front';
Viewpoint1386.Position := Vector3(0,0,0);
Viewpoint1386.CenterOfRotation := Vector3(0,0.7,0);
{ .AddChildren }
HAnimSite1383.AddChildren([Viewpoint1386]);
Anchor1387 := TAnchorNode.Create;
Anchor1387.Description := 'HAnimSite hanim_r_hand_front_view Viewpoint';
Anchor1387.SetUrl(['#hanim_r_hand_front_viewpoint']);
LOD1388 := TLODNode.Create;
LOD1388.ForceTransitions := True;
LOD1388.SetRange([0.04]);
WorldInfo1389 := TWorldInfoNode.Create;
WorldInfo1389.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1388.AddChildren([WorldInfo1389]);
Shape1390 := TShapeNode.Create;
Shape1390 := Shape823;
{ .AddChildren }
LOD1388.AddChildren([Shape1390]);
{ .AddChildren }
Anchor1387.AddChildren([LOD1388]);
{ .AddChildren }
HAnimSite1383.AddChildren([Anchor1387]);
{ .AddChildren }
HAnimSegment1334.AddChildren([HAnimSite1383]);
{ .AddChildren }
HAnimJoint1333.AddChildren([HAnimSegment1334]);
HAnimJoint1391 := THAnimJointNode.Create;
HAnimJoint1391.NameField := 'r_thumb1';
HAnimJoint1391.Center := Vector3(-0.1924,0.8472,-0.0534);
HAnimSegment1392 := THAnimSegmentNode.Create;
HAnimSegment1392.NameField := 'r_thumb_metacarpal';
TouchSensor1393 := TTouchSensorNode.Create;
TouchSensor1393.Description := 'HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal';
{ .AddChildren }
HAnimSegment1392.AddChildren([TouchSensor1393]);
Transform1394 := TTransformNode.Create;
Transform1394.Translation := Vector3(-0.1924,0.8472,-0.0534);
Shape1395 := TShapeNode.Create;
Shape1395 := Shape50;
{ .AddChild }
Transform1394.AddChildren([Shape1395]);
{ .AddChildren }
HAnimSegment1392.AddChildren([Transform1394]);
Shape1396 := TShapeNode.Create;
LineSet1397 := TLineSetNode.Create;
LineSet1397.SetVertexCount([2]);
ColorRGBA1398 := TColorRGBANode.Create;
ColorRGBA1398 := ColorRGBA56;
{ .SetColor }
LineSet1397.Color := ColorRGBA1398;
Coordinate1399 := TCoordinateNode.Create;
Coordinate1399.SetPoint([Vector3(-0.1924,0.8472,-0.0534),Vector3(-0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1397.Coord := Coordinate1399;
{ .SetGeometry }
Shape1396.Geometry := LineSet1397;
{ .AddChildren }
HAnimSegment1392.AddChildren([Shape1396]);
{ .AddChildren }
HAnimJoint1391.AddChildren([HAnimSegment1392]);
HAnimJoint1400 := THAnimJointNode.Create;
HAnimJoint1400.NameField := 'r_thumb2';
HAnimJoint1400.Center := Vector3(-0.1951,0.8226,0.0246);
HAnimSegment1401 := THAnimSegmentNode.Create;
HAnimSegment1401.NameField := 'r_thumb_proximal';
TouchSensor1402 := TTouchSensorNode.Create;
TouchSensor1402.Description := 'HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal';
{ .AddChildren }
HAnimSegment1401.AddChildren([TouchSensor1402]);
Transform1403 := TTransformNode.Create;
Transform1403.Translation := Vector3(-0.1951,0.8226,0.0246);
Shape1404 := TShapeNode.Create;
Shape1404 := Shape50;
{ .AddChild }
Transform1403.AddChildren([Shape1404]);
{ .AddChildren }
HAnimSegment1401.AddChildren([Transform1403]);
Shape1405 := TShapeNode.Create;
LineSet1406 := TLineSetNode.Create;
LineSet1406.SetVertexCount([2]);
ColorRGBA1407 := TColorRGBANode.Create;
ColorRGBA1407 := ColorRGBA56;
{ .SetColor }
LineSet1406.Color := ColorRGBA1407;
Coordinate1408 := TCoordinateNode.Create;
Coordinate1408.SetPoint([Vector3(-0.1951,0.8226,0.0246),Vector3(-0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1406.Coord := Coordinate1408;
{ .SetGeometry }
Shape1405.Geometry := LineSet1406;
{ .AddChildren }
HAnimSegment1401.AddChildren([Shape1405]);
{ .AddChildren }
HAnimJoint1400.AddChildren([HAnimSegment1401]);
HAnimJoint1409 := THAnimJointNode.Create;
HAnimJoint1409.NameField := 'r_thumb3';
HAnimJoint1409.Center := Vector3(-0.1955,0.8159,0.0464);
HAnimSegment1410 := THAnimSegmentNode.Create;
HAnimSegment1410.NameField := 'r_thumb_distal';
TouchSensor1411 := TTouchSensorNode.Create;
TouchSensor1411.Description := 'HAnimJoint r_thumb3, HAnimSegment r_thumb_distal';
{ .AddChildren }
HAnimSegment1410.AddChildren([TouchSensor1411]);
Transform1412 := TTransformNode.Create;
Transform1412.Translation := Vector3(-0.1955,0.8159,0.0464);
Shape1413 := TShapeNode.Create;
Shape1413 := Shape50;
{ .AddChild }
Transform1412.AddChildren([Shape1413]);
{ .AddChildren }
HAnimSegment1410.AddChildren([Transform1412]);
Shape1414 := TShapeNode.Create;
LineSet1415 := TLineSetNode.Create;
LineSet1415.SetVertexCount([2]);
ColorRGBA1416 := TColorRGBANode.Create;
ColorRGBA1416 := ColorRGBA77;
{ .SetColor }
LineSet1415.Color := ColorRGBA1416;
Coordinate1417 := TCoordinateNode.Create;
Coordinate1417.SetPoint([Vector3(-0.1955,0.8159,0.0464),Vector3(-0.1869,0.809,0.082)]);
{ .SetCoord }
LineSet1415.Coord := Coordinate1417;
{ .SetGeometry }
Shape1414.Geometry := LineSet1415;
{ .AddChildren }
HAnimSegment1410.AddChildren([Shape1414]);
HAnimSite1418 := THAnimSiteNode.Create;
HAnimSite1418.NameField := 'r_thumb_distal_tip';
HAnimSite1418.Translation := Vector3(-0.1869,0.809,0.082);
TouchSensor1419 := TTouchSensorNode.Create;
TouchSensor1419.Description := 'HAnimSite r_thumb_distal_tip';
{ .AddChildren }
HAnimSite1418.AddChildren([TouchSensor1419]);
Shape1420 := TShapeNode.Create;
Shape1420 := Shape113;
{ .AddChildren }
HAnimSite1418.AddChildren([Shape1420]);
{ .AddChildren }
HAnimSegment1410.AddChildren([HAnimSite1418]);
{ .AddChildren }
HAnimJoint1409.AddChildren([HAnimSegment1410]);
{ .AddChildren }
HAnimJoint1400.AddChildren([HAnimJoint1409]);
{ .AddChildren }
HAnimJoint1391.AddChildren([HAnimJoint1400]);
{ .AddChildren }
HAnimJoint1333.AddChildren([HAnimJoint1391]);
HAnimJoint1421 := THAnimJointNode.Create;
HAnimJoint1421.NameField := 'r_index0';
HAnimJoint1421.Center := Vector3(-0.1983,0.8024,-0.028);
HAnimSegment1422 := THAnimSegmentNode.Create;
HAnimSegment1422.NameField := 'r_index_metacarpal';
TouchSensor1423 := TTouchSensorNode.Create;
TouchSensor1423.Description := 'HAnimJoint r_index0, HAnimSegment r_index_metacarpal';
{ .AddChildren }
HAnimSegment1422.AddChildren([TouchSensor1423]);
Transform1424 := TTransformNode.Create;
Transform1424.Translation := Vector3(-0.1983,0.8024,-0.028);
Shape1425 := TShapeNode.Create;
Shape1425 := Shape50;
{ .AddChild }
Transform1424.AddChildren([Shape1425]);
{ .AddChildren }
HAnimSegment1422.AddChildren([Transform1424]);
Shape1426 := TShapeNode.Create;
LineSet1427 := TLineSetNode.Create;
LineSet1427.SetVertexCount([2]);
ColorRGBA1428 := TColorRGBANode.Create;
ColorRGBA1428 := ColorRGBA56;
{ .SetColor }
LineSet1427.Color := ColorRGBA1428;
Coordinate1429 := TCoordinateNode.Create;
Coordinate1429.SetPoint([Vector3(-0.1983,0.8024,-0.028),Vector3(-0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1427.Coord := Coordinate1429;
{ .SetGeometry }
Shape1426.Geometry := LineSet1427;
{ .AddChildren }
HAnimSegment1422.AddChildren([Shape1426]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimSegment1422]);
HAnimJoint1430 := THAnimJointNode.Create;
HAnimJoint1430.NameField := 'r_index1';
HAnimJoint1430.Center := Vector3(-0.1983,0.7815,-0.028);
HAnimSegment1431 := THAnimSegmentNode.Create;
HAnimSegment1431.NameField := 'r_index_proximal';
TouchSensor1432 := TTouchSensorNode.Create;
TouchSensor1432.Description := 'HAnimJoint r_index1, HAnimSegment r_index_proximal';
{ .AddChildren }
HAnimSegment1431.AddChildren([TouchSensor1432]);
Transform1433 := TTransformNode.Create;
Transform1433.Translation := Vector3(-0.1983,0.7815,-0.028);
Shape1434 := TShapeNode.Create;
Shape1434 := Shape50;
{ .AddChild }
Transform1433.AddChildren([Shape1434]);
{ .AddChildren }
HAnimSegment1431.AddChildren([Transform1433]);
Shape1435 := TShapeNode.Create;
LineSet1436 := TLineSetNode.Create;
LineSet1436.SetVertexCount([2]);
ColorRGBA1437 := TColorRGBANode.Create;
ColorRGBA1437 := ColorRGBA56;
{ .SetColor }
LineSet1436.Color := ColorRGBA1437;
Coordinate1438 := TCoordinateNode.Create;
Coordinate1438.SetPoint([Vector3(-0.1983,0.7815,-0.028),Vector3(-0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1436.Coord := Coordinate1438;
{ .SetGeometry }
Shape1435.Geometry := LineSet1436;
{ .AddChildren }
HAnimSegment1431.AddChildren([Shape1435]);
{ .AddChildren }
HAnimJoint1430.AddChildren([HAnimSegment1431]);
HAnimJoint1439 := THAnimJointNode.Create;
HAnimJoint1439.NameField := 'r_index2';
HAnimJoint1439.Center := Vector3(-0.2017,0.7363,-0.0248);
HAnimSegment1440 := THAnimSegmentNode.Create;
HAnimSegment1440.NameField := 'r_index_middle';
TouchSensor1441 := TTouchSensorNode.Create;
TouchSensor1441.Description := 'HAnimJoint r_index2, HAnimSegment r_index_middle';
{ .AddChildren }
HAnimSegment1440.AddChildren([TouchSensor1441]);
Transform1442 := TTransformNode.Create;
Transform1442.Translation := Vector3(-0.2017,0.7363,-0.0248);
Shape1443 := TShapeNode.Create;
Shape1443 := Shape50;
{ .AddChild }
Transform1442.AddChildren([Shape1443]);
{ .AddChildren }
HAnimSegment1440.AddChildren([Transform1442]);
Shape1444 := TShapeNode.Create;
LineSet1445 := TLineSetNode.Create;
LineSet1445.SetVertexCount([2]);
ColorRGBA1446 := TColorRGBANode.Create;
ColorRGBA1446 := ColorRGBA56;
{ .SetColor }
LineSet1445.Color := ColorRGBA1446;
Coordinate1447 := TCoordinateNode.Create;
Coordinate1447.SetPoint([Vector3(-0.2017,0.7363,-0.0248),Vector3(-0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1445.Coord := Coordinate1447;
{ .SetGeometry }
Shape1444.Geometry := LineSet1445;
{ .AddChildren }
HAnimSegment1440.AddChildren([Shape1444]);
{ .AddChildren }
HAnimJoint1439.AddChildren([HAnimSegment1440]);
HAnimJoint1448 := THAnimJointNode.Create;
HAnimJoint1448.NameField := 'r_index3';
HAnimJoint1448.Center := Vector3(-0.2028,0.7139,-0.0236);
HAnimSegment1449 := THAnimSegmentNode.Create;
HAnimSegment1449.NameField := 'r_index_distal';
TouchSensor1450 := TTouchSensorNode.Create;
TouchSensor1450.Description := 'HAnimJoint r_index3, HAnimSegment r_index_distal';
{ .AddChildren }
HAnimSegment1449.AddChildren([TouchSensor1450]);
Transform1451 := TTransformNode.Create;
Transform1451.Translation := Vector3(-0.2028,0.7139,-0.0236);
Shape1452 := TShapeNode.Create;
Shape1452 := Shape50;
{ .AddChild }
Transform1451.AddChildren([Shape1452]);
{ .AddChildren }
HAnimSegment1449.AddChildren([Transform1451]);
Shape1453 := TShapeNode.Create;
LineSet1454 := TLineSetNode.Create;
LineSet1454.SetVertexCount([2]);
ColorRGBA1455 := TColorRGBANode.Create;
ColorRGBA1455 := ColorRGBA77;
{ .SetColor }
LineSet1454.Color := ColorRGBA1455;
Coordinate1456 := TCoordinateNode.Create;
Coordinate1456.SetPoint([Vector3(-0.2028,0.7139,-0.0236),Vector3(-0.198,0.6883,-0.018)]);
{ .SetCoord }
LineSet1454.Coord := Coordinate1456;
{ .SetGeometry }
Shape1453.Geometry := LineSet1454;
{ .AddChildren }
HAnimSegment1449.AddChildren([Shape1453]);
Shape1457 := TShapeNode.Create;
LineSet1458 := TLineSetNode.Create;
LineSet1458.SetVertexCount([2]);
ColorRGBA1459 := TColorRGBANode.Create;
ColorRGBA1459 := ColorRGBA77;
{ .SetColor }
LineSet1458.Color := ColorRGBA1459;
Coordinate1460 := TCoordinateNode.Create;
Coordinate1460.SetPoint([Vector3(-0.2028,0.7139,-0.0236),Vector3(-0.1941,0.6772,-0.0423)]);
{ .SetCoord }
LineSet1458.Coord := Coordinate1460;
{ .SetGeometry }
Shape1457.Geometry := LineSet1458;
{ .AddChildren }
HAnimSegment1449.AddChildren([Shape1457]);
HAnimSite1461 := THAnimSiteNode.Create;
HAnimSite1461.NameField := 'r_index_distal_tip';
HAnimSite1461.Translation := Vector3(-0.198,0.6883,-0.018);
TouchSensor1462 := TTouchSensorNode.Create;
TouchSensor1462.Description := 'HAnimSite r_index_distal_tip';
{ .AddChildren }
HAnimSite1461.AddChildren([TouchSensor1462]);
Shape1463 := TShapeNode.Create;
Shape1463 := Shape113;
{ .AddChildren }
HAnimSite1461.AddChildren([Shape1463]);
{ .AddChildren }
HAnimSegment1449.AddChildren([HAnimSite1461]);
HAnimSite1464 := THAnimSiteNode.Create;
HAnimSite1464.NameField := 'r_dactylion_pt';
HAnimSite1464.Translation := Vector3(-0.1941,0.6772,-0.0423);
TouchSensor1465 := TTouchSensorNode.Create;
TouchSensor1465.Description := 'HAnimSite r_dactylion';
{ .AddChildren }
HAnimSite1464.AddChildren([TouchSensor1465]);
Shape1466 := TShapeNode.Create;
Shape1466 := Shape113;
{ .AddChildren }
HAnimSite1464.AddChildren([Shape1466]);
{ .AddChildren }
HAnimSegment1449.AddChildren([HAnimSite1464]);
{ .AddChildren }
HAnimJoint1448.AddChildren([HAnimSegment1449]);
{ .AddChildren }
HAnimJoint1439.AddChildren([HAnimJoint1448]);
{ .AddChildren }
HAnimJoint1430.AddChildren([HAnimJoint1439]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimJoint1430]);
{ .AddChildren }
HAnimJoint1333.AddChildren([HAnimJoint1421]);
HAnimJoint1467 := THAnimJointNode.Create;
HAnimJoint1467.NameField := 'r_middle0';
HAnimJoint1467.Center := Vector3(-0.1987,0.8029,-0.053);
HAnimSegment1468 := THAnimSegmentNode.Create;
HAnimSegment1468.NameField := 'r_middle_metacarpal';
TouchSensor1469 := TTouchSensorNode.Create;
TouchSensor1469.Description := 'HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal';
{ .AddChildren }
HAnimSegment1468.AddChildren([TouchSensor1469]);
Transform1470 := TTransformNode.Create;
Transform1470.Translation := Vector3(-0.1987,0.8029,-0.053);
Shape1471 := TShapeNode.Create;
Shape1471 := Shape50;
{ .AddChild }
Transform1470.AddChildren([Shape1471]);
{ .AddChildren }
HAnimSegment1468.AddChildren([Transform1470]);
Shape1472 := TShapeNode.Create;
LineSet1473 := TLineSetNode.Create;
LineSet1473.SetVertexCount([2]);
ColorRGBA1474 := TColorRGBANode.Create;
ColorRGBA1474 := ColorRGBA56;
{ .SetColor }
LineSet1473.Color := ColorRGBA1474;
Coordinate1475 := TCoordinateNode.Create;
Coordinate1475.SetPoint([Vector3(-0.1987,0.8029,-0.053),Vector3(-0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1473.Coord := Coordinate1475;
{ .SetGeometry }
Shape1472.Geometry := LineSet1473;
{ .AddChildren }
HAnimSegment1468.AddChildren([Shape1472]);
{ .AddChildren }
HAnimJoint1467.AddChildren([HAnimSegment1468]);
HAnimJoint1476 := THAnimJointNode.Create;
HAnimJoint1476.NameField := 'r_middle1';
HAnimJoint1476.Center := Vector3(-0.1987,0.7818,-0.053);
HAnimSegment1477 := THAnimSegmentNode.Create;
HAnimSegment1477.NameField := 'r_middle_proximal';
TouchSensor1478 := TTouchSensorNode.Create;
TouchSensor1478.Description := 'HAnimJoint r_middle1, HAnimSegment r_middle_proximal';
{ .AddChildren }
HAnimSegment1477.AddChildren([TouchSensor1478]);
Transform1479 := TTransformNode.Create;
Transform1479.Translation := Vector3(-0.1987,0.7818,-0.053);
Shape1480 := TShapeNode.Create;
Shape1480 := Shape50;
{ .AddChild }
Transform1479.AddChildren([Shape1480]);
{ .AddChildren }
HAnimSegment1477.AddChildren([Transform1479]);
Shape1481 := TShapeNode.Create;
LineSet1482 := TLineSetNode.Create;
LineSet1482.SetVertexCount([2]);
ColorRGBA1483 := TColorRGBANode.Create;
ColorRGBA1483 := ColorRGBA56;
{ .SetColor }
LineSet1482.Color := ColorRGBA1483;
Coordinate1484 := TCoordinateNode.Create;
Coordinate1484.SetPoint([Vector3(-0.1987,0.7818,-0.053),Vector3(-0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1482.Coord := Coordinate1484;
{ .SetGeometry }
Shape1481.Geometry := LineSet1482;
{ .AddChildren }
HAnimSegment1477.AddChildren([Shape1481]);
{ .AddChildren }
HAnimJoint1476.AddChildren([HAnimSegment1477]);
HAnimJoint1485 := THAnimJointNode.Create;
HAnimJoint1485.NameField := 'r_middle2';
HAnimJoint1485.Center := Vector3(-0.2013,0.7273,-0.0503);
HAnimSegment1486 := THAnimSegmentNode.Create;
HAnimSegment1486.NameField := 'r_middle_middle';
TouchSensor1487 := TTouchSensorNode.Create;
TouchSensor1487.Description := 'HAnimJoint r_middle2, HAnimSegment r_middle_middle';
{ .AddChildren }
HAnimSegment1486.AddChildren([TouchSensor1487]);
Transform1488 := TTransformNode.Create;
Transform1488.Translation := Vector3(-0.2013,0.7273,-0.0503);
Shape1489 := TShapeNode.Create;
Shape1489 := Shape50;
{ .AddChild }
Transform1488.AddChildren([Shape1489]);
{ .AddChildren }
HAnimSegment1486.AddChildren([Transform1488]);
Shape1490 := TShapeNode.Create;
LineSet1491 := TLineSetNode.Create;
LineSet1491.SetVertexCount([2]);
ColorRGBA1492 := TColorRGBANode.Create;
ColorRGBA1492 := ColorRGBA56;
{ .SetColor }
LineSet1491.Color := ColorRGBA1492;
Coordinate1493 := TCoordinateNode.Create;
Coordinate1493.SetPoint([Vector3(-0.2013,0.7273,-0.0503),Vector3(-0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1491.Coord := Coordinate1493;
{ .SetGeometry }
Shape1490.Geometry := LineSet1491;
{ .AddChildren }
HAnimSegment1486.AddChildren([Shape1490]);
{ .AddChildren }
HAnimJoint1485.AddChildren([HAnimSegment1486]);
HAnimJoint1494 := THAnimJointNode.Create;
HAnimJoint1494.NameField := 'r_middle3';
HAnimJoint1494.Center := Vector3(-0.2026,0.7011,-0.0494);
HAnimSegment1495 := THAnimSegmentNode.Create;
HAnimSegment1495.NameField := 'r_middle_distal';
TouchSensor1496 := TTouchSensorNode.Create;
TouchSensor1496.Description := 'HAnimJoint r_middle3, HAnimSegment r_middle_distal';
{ .AddChildren }
HAnimSegment1495.AddChildren([TouchSensor1496]);
Transform1497 := TTransformNode.Create;
Transform1497.Translation := Vector3(-0.2026,0.7011,-0.0494);
Shape1498 := TShapeNode.Create;
Shape1498 := Shape50;
{ .AddChild }
Transform1497.AddChildren([Shape1498]);
{ .AddChildren }
HAnimSegment1495.AddChildren([Transform1497]);
Shape1499 := TShapeNode.Create;
LineSet1500 := TLineSetNode.Create;
LineSet1500.SetVertexCount([2]);
ColorRGBA1501 := TColorRGBANode.Create;
ColorRGBA1501 := ColorRGBA77;
{ .SetColor }
LineSet1500.Color := ColorRGBA1501;
Coordinate1502 := TCoordinateNode.Create;
Coordinate1502.SetPoint([Vector3(-0.2026,0.7011,-0.0494),Vector3(-0.1969,0.6758,-0.0427)]);
{ .SetCoord }
LineSet1500.Coord := Coordinate1502;
{ .SetGeometry }
Shape1499.Geometry := LineSet1500;
{ .AddChildren }
HAnimSegment1495.AddChildren([Shape1499]);
HAnimSite1503 := THAnimSiteNode.Create;
HAnimSite1503.NameField := 'r_middle_distal_tip';
HAnimSite1503.Translation := Vector3(-0.1969,0.6758,-0.0427);
TouchSensor1504 := TTouchSensorNode.Create;
TouchSensor1504.Description := 'HAnimSite r_middle_distal_tip';
{ .AddChildren }
HAnimSite1503.AddChildren([TouchSensor1504]);
Shape1505 := TShapeNode.Create;
Shape1505 := Shape113;
{ .AddChildren }
HAnimSite1503.AddChildren([Shape1505]);
{ .AddChildren }
HAnimSegment1495.AddChildren([HAnimSite1503]);
{ .AddChildren }
HAnimJoint1494.AddChildren([HAnimSegment1495]);
{ .AddChildren }
HAnimJoint1485.AddChildren([HAnimJoint1494]);
{ .AddChildren }
HAnimJoint1476.AddChildren([HAnimJoint1485]);
{ .AddChildren }
HAnimJoint1467.AddChildren([HAnimJoint1476]);
{ .AddChildren }
HAnimJoint1333.AddChildren([HAnimJoint1467]);
HAnimJoint1506 := THAnimJointNode.Create;
HAnimJoint1506.NameField := 'r_ring0';
HAnimJoint1506.Center := Vector3(-0.1956,0.8019,-0.0794);
HAnimSegment1507 := THAnimSegmentNode.Create;
HAnimSegment1507.NameField := 'r_ring_metacarpal';
TouchSensor1508 := TTouchSensorNode.Create;
TouchSensor1508.Description := 'HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal';
{ .AddChildren }
HAnimSegment1507.AddChildren([TouchSensor1508]);
Transform1509 := TTransformNode.Create;
Transform1509.Translation := Vector3(-0.1956,0.8019,-0.0794);
Shape1510 := TShapeNode.Create;
Shape1510 := Shape50;
{ .AddChild }
Transform1509.AddChildren([Shape1510]);
{ .AddChildren }
HAnimSegment1507.AddChildren([Transform1509]);
Shape1511 := TShapeNode.Create;
LineSet1512 := TLineSetNode.Create;
LineSet1512.SetVertexCount([2]);
ColorRGBA1513 := TColorRGBANode.Create;
ColorRGBA1513 := ColorRGBA56;
{ .SetColor }
LineSet1512.Color := ColorRGBA1513;
Coordinate1514 := TCoordinateNode.Create;
Coordinate1514.SetPoint([Vector3(-0.1956,0.8019,-0.0794),Vector3(-0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1512.Coord := Coordinate1514;
{ .SetGeometry }
Shape1511.Geometry := LineSet1512;
{ .AddChildren }
HAnimSegment1507.AddChildren([Shape1511]);
{ .AddChildren }
HAnimJoint1506.AddChildren([HAnimSegment1507]);
HAnimJoint1515 := THAnimJointNode.Create;
HAnimJoint1515.NameField := 'r_ring1';
HAnimJoint1515.Center := Vector3(-0.1956,0.7815,-0.0794);
HAnimSegment1516 := THAnimSegmentNode.Create;
HAnimSegment1516.NameField := 'r_ring_proximal';
TouchSensor1517 := TTouchSensorNode.Create;
TouchSensor1517.Description := 'HAnimJoint r_ring1, HAnimSegment r_ring_proximal';
{ .AddChildren }
HAnimSegment1516.AddChildren([TouchSensor1517]);
Transform1518 := TTransformNode.Create;
Transform1518.Translation := Vector3(-0.1956,0.7815,-0.0794);
Shape1519 := TShapeNode.Create;
Shape1519 := Shape50;
{ .AddChild }
Transform1518.AddChildren([Shape1519]);
{ .AddChildren }
HAnimSegment1516.AddChildren([Transform1518]);
Shape1520 := TShapeNode.Create;
LineSet1521 := TLineSetNode.Create;
LineSet1521.SetVertexCount([2]);
ColorRGBA1522 := TColorRGBANode.Create;
ColorRGBA1522 := ColorRGBA56;
{ .SetColor }
LineSet1521.Color := ColorRGBA1522;
Coordinate1523 := TCoordinateNode.Create;
Coordinate1523.SetPoint([Vector3(-0.1956,0.7815,-0.0794),Vector3(-0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1521.Coord := Coordinate1523;
{ .SetGeometry }
Shape1520.Geometry := LineSet1521;
{ .AddChildren }
HAnimSegment1516.AddChildren([Shape1520]);
{ .AddChildren }
HAnimJoint1515.AddChildren([HAnimSegment1516]);
HAnimJoint1524 := THAnimJointNode.Create;
HAnimJoint1524.NameField := 'r_ring2';
HAnimJoint1524.Center := Vector3(-0.1973,0.7287,-0.0777);
HAnimSegment1525 := THAnimSegmentNode.Create;
HAnimSegment1525.NameField := 'r_ring_middle';
TouchSensor1526 := TTouchSensorNode.Create;
TouchSensor1526.Description := 'HAnimJoint r_ring2, HAnimSegment r_ring_middle';
{ .AddChildren }
HAnimSegment1525.AddChildren([TouchSensor1526]);
Transform1527 := TTransformNode.Create;
Transform1527.Translation := Vector3(-0.1973,0.7287,-0.0777);
Shape1528 := TShapeNode.Create;
Shape1528 := Shape50;
{ .AddChild }
Transform1527.AddChildren([Shape1528]);
{ .AddChildren }
HAnimSegment1525.AddChildren([Transform1527]);
Shape1529 := TShapeNode.Create;
LineSet1530 := TLineSetNode.Create;
LineSet1530.SetVertexCount([2]);
ColorRGBA1531 := TColorRGBANode.Create;
ColorRGBA1531 := ColorRGBA56;
{ .SetColor }
LineSet1530.Color := ColorRGBA1531;
Coordinate1532 := TCoordinateNode.Create;
Coordinate1532.SetPoint([Vector3(-0.1973,0.7287,-0.0777),Vector3(-0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1530.Coord := Coordinate1532;
{ .SetGeometry }
Shape1529.Geometry := LineSet1530;
{ .AddChildren }
HAnimSegment1525.AddChildren([Shape1529]);
{ .AddChildren }
HAnimJoint1524.AddChildren([HAnimSegment1525]);
HAnimJoint1533 := THAnimJointNode.Create;
HAnimJoint1533.NameField := 'r_ring3';
HAnimJoint1533.Center := Vector3(-0.1983,0.7045,-0.0767);
HAnimSegment1534 := THAnimSegmentNode.Create;
HAnimSegment1534.NameField := 'r_ring_distal';
TouchSensor1535 := TTouchSensorNode.Create;
TouchSensor1535.Description := 'HAnimJoint r_ring3, HAnimSegment r_ring_distal';
{ .AddChildren }
HAnimSegment1534.AddChildren([TouchSensor1535]);
Transform1536 := TTransformNode.Create;
Transform1536.Translation := Vector3(-0.1983,0.7045,-0.0767);
Shape1537 := TShapeNode.Create;
Shape1537 := Shape50;
{ .AddChild }
Transform1536.AddChildren([Shape1537]);
{ .AddChildren }
HAnimSegment1534.AddChildren([Transform1536]);
Shape1538 := TShapeNode.Create;
LineSet1539 := TLineSetNode.Create;
LineSet1539.SetVertexCount([2]);
ColorRGBA1540 := TColorRGBANode.Create;
ColorRGBA1540 := ColorRGBA77;
{ .SetColor }
LineSet1539.Color := ColorRGBA1540;
Coordinate1541 := TCoordinateNode.Create;
Coordinate1541.SetPoint([Vector3(-0.1983,0.7045,-0.0767),Vector3(-0.1934,0.6778,-0.0693)]);
{ .SetCoord }
LineSet1539.Coord := Coordinate1541;
{ .SetGeometry }
Shape1538.Geometry := LineSet1539;
{ .AddChildren }
HAnimSegment1534.AddChildren([Shape1538]);
HAnimSite1542 := THAnimSiteNode.Create;
HAnimSite1542.NameField := 'r_ring_distal_tip';
HAnimSite1542.Translation := Vector3(-0.1934,0.6778,-0.0693);
TouchSensor1543 := TTouchSensorNode.Create;
TouchSensor1543.Description := 'HAnimSite r_ring_distal_tip';
{ .AddChildren }
HAnimSite1542.AddChildren([TouchSensor1543]);
Shape1544 := TShapeNode.Create;
Shape1544 := Shape113;
{ .AddChildren }
HAnimSite1542.AddChildren([Shape1544]);
{ .AddChildren }
HAnimSegment1534.AddChildren([HAnimSite1542]);
{ .AddChildren }
HAnimJoint1533.AddChildren([HAnimSegment1534]);
{ .AddChildren }
HAnimJoint1524.AddChildren([HAnimJoint1533]);
{ .AddChildren }
HAnimJoint1515.AddChildren([HAnimJoint1524]);
{ .AddChildren }
HAnimJoint1506.AddChildren([HAnimJoint1515]);
{ .AddChildren }
HAnimJoint1333.AddChildren([HAnimJoint1506]);
HAnimJoint1545 := THAnimJointNode.Create;
HAnimJoint1545.NameField := 'r_pinky0';
HAnimJoint1545.Center := Vector3(-0.1925,0.8066,-0.1036);
HAnimSegment1546 := THAnimSegmentNode.Create;
HAnimSegment1546.NameField := 'r_pinky_metacarpal';
TouchSensor1547 := TTouchSensorNode.Create;
TouchSensor1547.Description := 'HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal';
{ .AddChildren }
HAnimSegment1546.AddChildren([TouchSensor1547]);
Transform1548 := TTransformNode.Create;
Transform1548.Translation := Vector3(-0.1925,0.8066,-0.1036);
Shape1549 := TShapeNode.Create;
Shape1549 := Shape50;
{ .AddChild }
Transform1548.AddChildren([Shape1549]);
{ .AddChildren }
HAnimSegment1546.AddChildren([Transform1548]);
Shape1550 := TShapeNode.Create;
LineSet1551 := TLineSetNode.Create;
LineSet1551.SetVertexCount([2]);
ColorRGBA1552 := TColorRGBANode.Create;
ColorRGBA1552 := ColorRGBA56;
{ .SetColor }
LineSet1551.Color := ColorRGBA1552;
Coordinate1553 := TCoordinateNode.Create;
Coordinate1553.SetPoint([Vector3(-0.1925,0.8066,-0.1036),Vector3(-0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1551.Coord := Coordinate1553;
{ .SetGeometry }
Shape1550.Geometry := LineSet1551;
{ .AddChildren }
HAnimSegment1546.AddChildren([Shape1550]);
{ .AddChildren }
HAnimJoint1545.AddChildren([HAnimSegment1546]);
HAnimJoint1554 := THAnimJointNode.Create;
HAnimJoint1554.NameField := 'r_pinky1';
HAnimJoint1554.Center := Vector3(-0.1925,0.7866,-0.1036);
HAnimSegment1555 := THAnimSegmentNode.Create;
HAnimSegment1555.NameField := 'r_pinky_proximal';
TouchSensor1556 := TTouchSensorNode.Create;
TouchSensor1556.Description := 'HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal';
{ .AddChildren }
HAnimSegment1555.AddChildren([TouchSensor1556]);
Transform1557 := TTransformNode.Create;
Transform1557.Translation := Vector3(-0.1925,0.7866,-0.1036);
Shape1558 := TShapeNode.Create;
Shape1558 := Shape50;
{ .AddChild }
Transform1557.AddChildren([Shape1558]);
{ .AddChildren }
HAnimSegment1555.AddChildren([Transform1557]);
Shape1559 := TShapeNode.Create;
LineSet1560 := TLineSetNode.Create;
LineSet1560.SetVertexCount([2]);
ColorRGBA1561 := TColorRGBANode.Create;
ColorRGBA1561 := ColorRGBA56;
{ .SetColor }
LineSet1560.Color := ColorRGBA1561;
Coordinate1562 := TCoordinateNode.Create;
Coordinate1562.SetPoint([Vector3(-0.1925,0.7866,-0.1036),Vector3(-0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1560.Coord := Coordinate1562;
{ .SetGeometry }
Shape1559.Geometry := LineSet1560;
{ .AddChildren }
HAnimSegment1555.AddChildren([Shape1559]);
{ .AddChildren }
HAnimJoint1554.AddChildren([HAnimSegment1555]);
HAnimJoint1563 := THAnimJointNode.Create;
HAnimJoint1563.NameField := 'r_pinky2';
HAnimJoint1563.Center := Vector3(-0.1938,0.7452,-0.1024);
HAnimSegment1564 := THAnimSegmentNode.Create;
HAnimSegment1564.NameField := 'r_pinky_middle';
TouchSensor1565 := TTouchSensorNode.Create;
TouchSensor1565.Description := 'HAnimJoint r_pinky2, HAnimSegment r_pinky_middle';
{ .AddChildren }
HAnimSegment1564.AddChildren([TouchSensor1565]);
Transform1566 := TTransformNode.Create;
Transform1566.Translation := Vector3(-0.1938,0.7452,-0.1024);
Shape1567 := TShapeNode.Create;
Shape1567 := Shape50;
{ .AddChild }
Transform1566.AddChildren([Shape1567]);
{ .AddChildren }
HAnimSegment1564.AddChildren([Transform1566]);
Shape1568 := TShapeNode.Create;
LineSet1569 := TLineSetNode.Create;
LineSet1569.SetVertexCount([2]);
ColorRGBA1570 := TColorRGBANode.Create;
ColorRGBA1570 := ColorRGBA56;
{ .SetColor }
LineSet1569.Color := ColorRGBA1570;
Coordinate1571 := TCoordinateNode.Create;
Coordinate1571.SetPoint([Vector3(-0.1938,0.7452,-0.1024),Vector3(-0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1569.Coord := Coordinate1571;
{ .SetGeometry }
Shape1568.Geometry := LineSet1569;
{ .AddChildren }
HAnimSegment1564.AddChildren([Shape1568]);
{ .AddChildren }
HAnimJoint1563.AddChildren([HAnimSegment1564]);
HAnimJoint1572 := THAnimJointNode.Create;
HAnimJoint1572.NameField := 'r_pinky3';
HAnimJoint1572.Center := Vector3(-0.1948,0.7277,-0.1017);
HAnimSegment1573 := THAnimSegmentNode.Create;
HAnimSegment1573.NameField := 'r_pinky_distal';
TouchSensor1574 := TTouchSensorNode.Create;
TouchSensor1574.Description := 'HAnimJoint r_pinky3, HAnimSegment r_pinky_distal';
{ .AddChildren }
HAnimSegment1573.AddChildren([TouchSensor1574]);
Transform1575 := TTransformNode.Create;
Transform1575.Translation := Vector3(-0.1948,0.7277,-0.1017);
Shape1576 := TShapeNode.Create;
Shape1576 := Shape50;
{ .AddChild }
Transform1575.AddChildren([Shape1576]);
{ .AddChildren }
HAnimSegment1573.AddChildren([Transform1575]);
Shape1577 := TShapeNode.Create;
LineSet1578 := TLineSetNode.Create;
LineSet1578.SetVertexCount([2]);
ColorRGBA1579 := TColorRGBANode.Create;
ColorRGBA1579 := ColorRGBA77;
{ .SetColor }
LineSet1578.Color := ColorRGBA1579;
Coordinate1580 := TCoordinateNode.Create;
Coordinate1580.SetPoint([Vector3(-0.1948,0.7277,-0.1017),Vector3(-0.1938,0.7035,-0.0949)]);
{ .SetCoord }
LineSet1578.Coord := Coordinate1580;
{ .SetGeometry }
Shape1577.Geometry := LineSet1578;
{ .AddChildren }
HAnimSegment1573.AddChildren([Shape1577]);
HAnimSite1581 := THAnimSiteNode.Create;
HAnimSite1581.NameField := 'r_pinky_distal_tip';
HAnimSite1581.Translation := Vector3(-0.1938,0.7035,-0.0949);
TouchSensor1582 := TTouchSensorNode.Create;
TouchSensor1582.Description := 'HAnimSite r_pinky_distal_tip';
{ .AddChildren }
HAnimSite1581.AddChildren([TouchSensor1582]);
Shape1583 := TShapeNode.Create;
Shape1583 := Shape113;
{ .AddChildren }
HAnimSite1581.AddChildren([Shape1583]);
{ .AddChildren }
HAnimSegment1573.AddChildren([HAnimSite1581]);
{ .AddChildren }
HAnimJoint1572.AddChildren([HAnimSegment1573]);
{ .AddChildren }
HAnimJoint1563.AddChildren([HAnimJoint1572]);
{ .AddChildren }
HAnimJoint1554.AddChildren([HAnimJoint1563]);
{ .AddChildren }
HAnimJoint1545.AddChildren([HAnimJoint1554]);
{ .AddChildren }
HAnimJoint1333.AddChildren([HAnimJoint1545]);
{ .AddChildren }
HAnimJoint1296.AddChildren([HAnimJoint1333]);
{ .AddChildren }
HAnimJoint1280.AddChildren([HAnimJoint1296]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimJoint1280]);
{ .AddChildren }
HAnimJoint1234.AddChildren([HAnimJoint1271]);
{ .AddChildren }
HAnimJoint596.AddChildren([HAnimJoint1234]);
{ .AddChildren }
HAnimJoint587.AddChildren([HAnimJoint596]);
{ .AddChildren }
HAnimJoint578.AddChildren([HAnimJoint587]);
{ .AddChildren }
HAnimJoint569.AddChildren([HAnimJoint578]);
{ .AddChildren }
HAnimJoint560.AddChildren([HAnimJoint569]);
{ .AddChildren }
HAnimJoint551.AddChildren([HAnimJoint560]);
{ .AddChildren }
HAnimJoint542.AddChildren([HAnimJoint551]);
{ .AddChildren }
HAnimJoint533.AddChildren([HAnimJoint542]);
{ .AddChildren }
HAnimJoint510.AddChildren([HAnimJoint533]);
{ .AddChildren }
HAnimJoint494.AddChildren([HAnimJoint510]);
{ .AddChildren }
HAnimJoint485.AddChildren([HAnimJoint494]);
{ .AddChildren }
HAnimJoint476.AddChildren([HAnimJoint485]);
{ .AddChildren }
HAnimJoint467.AddChildren([HAnimJoint476]);
{ .AddChildren }
HAnimJoint437.AddChildren([HAnimJoint467]);
{ .AddChildren }
HAnimJoint428.AddChildren([HAnimJoint437]);
{ .AddChildren }
HAnimJoint419.AddChildren([HAnimJoint428]);
{ .AddChildren }
HAnimJoint396.AddChildren([HAnimJoint419]);
{ .AddChildren }
HAnimJoint46.AddChildren([HAnimJoint396]);
{ .AddSkeleton }
HAnimHumanoid45.SetSkeleton([HAnimJoint46]);
HAnimJoint1584 := THAnimJointNode.Create;
HAnimJoint1584 := HAnimJoint46;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1584;
HAnimJoint1585 := THAnimJointNode.Create;
HAnimJoint1585 := HAnimJoint62;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1585;
HAnimJoint1586 := THAnimJointNode.Create;
HAnimJoint1586 := HAnimJoint396;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1586;
HAnimJoint1587 := THAnimJointNode.Create;
HAnimJoint1587 := HAnimJoint419;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1587;
HAnimJoint1588 := THAnimJointNode.Create;
HAnimJoint1588 := HAnimJoint428;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1588;
HAnimJoint1589 := THAnimJointNode.Create;
HAnimJoint1589 := HAnimJoint437;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1589;
HAnimJoint1590 := THAnimJointNode.Create;
HAnimJoint1590 := HAnimJoint467;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1590;
HAnimJoint1591 := THAnimJointNode.Create;
HAnimJoint1591 := HAnimJoint476;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1591;
HAnimJoint1592 := THAnimJointNode.Create;
HAnimJoint1592 := HAnimJoint485;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1592;
HAnimJoint1593 := THAnimJointNode.Create;
HAnimJoint1593 := HAnimJoint494;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1593;
HAnimJoint1594 := THAnimJointNode.Create;
HAnimJoint1594 := HAnimJoint510;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1594;
HAnimJoint1595 := THAnimJointNode.Create;
HAnimJoint1595 := HAnimJoint533;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1595;
HAnimJoint1596 := THAnimJointNode.Create;
HAnimJoint1596 := HAnimJoint542;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1596;
HAnimJoint1597 := THAnimJointNode.Create;
HAnimJoint1597 := HAnimJoint551;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1597;
HAnimJoint1598 := THAnimJointNode.Create;
HAnimJoint1598 := HAnimJoint560;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1598;
HAnimJoint1599 := THAnimJointNode.Create;
HAnimJoint1599 := HAnimJoint569;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1599;
HAnimJoint1600 := THAnimJointNode.Create;
HAnimJoint1600 := HAnimJoint578;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1600;
HAnimJoint1601 := THAnimJointNode.Create;
HAnimJoint1601 := HAnimJoint587;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1601;
HAnimJoint1602 := THAnimJointNode.Create;
HAnimJoint1602 := HAnimJoint596;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1602;
HAnimJoint1603 := THAnimJointNode.Create;
HAnimJoint1603 := HAnimJoint627;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1603;
HAnimJoint1604 := THAnimJointNode.Create;
HAnimJoint1604 := HAnimJoint650;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1604;
HAnimJoint1605 := THAnimJointNode.Create;
HAnimJoint1605 := HAnimJoint659;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1605;
HAnimJoint1606 := THAnimJointNode.Create;
HAnimJoint1606 := HAnimJoint668;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1606;
HAnimJoint1607 := THAnimJointNode.Create;
HAnimJoint1607 := HAnimJoint677;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1607;
HAnimJoint1608 := THAnimJointNode.Create;
HAnimJoint1608 := HAnimJoint686;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1608;
HAnimJoint1609 := THAnimJointNode.Create;
HAnimJoint1609 := HAnimJoint695;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1609;
HAnimJoint1610 := THAnimJointNode.Create;
HAnimJoint1610 := HAnimJoint704;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1610;
HAnimJoint1611 := THAnimJointNode.Create;
HAnimJoint1611 := HAnimJoint865;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1611;
HAnimJoint1612 := THAnimJointNode.Create;
HAnimJoint1612 := HAnimJoint921;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1612;
HAnimJoint1613 := THAnimJointNode.Create;
HAnimJoint1613 := HAnimJoint1271;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1613;
HAnimJoint1614 := THAnimJointNode.Create;
HAnimJoint1614 := HAnimJoint181;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1614;
HAnimJoint1615 := THAnimJointNode.Create;
HAnimJoint1615 := HAnimJoint308;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1615;
HAnimJoint1616 := THAnimJointNode.Create;
HAnimJoint1616 := HAnimJoint946;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1616;
HAnimJoint1617 := THAnimJointNode.Create;
HAnimJoint1617 := HAnimJoint1296;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1617;
HAnimJoint1618 := THAnimJointNode.Create;
HAnimJoint1618 := HAnimJoint807;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1618;
HAnimJoint1619 := THAnimJointNode.Create;
HAnimJoint1619 := HAnimJoint838;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1619;
HAnimJoint1620 := THAnimJointNode.Create;
HAnimJoint1620 := HAnimJoint833;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1620;
HAnimJoint1621 := THAnimJointNode.Create;
HAnimJoint1621 := HAnimJoint860;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1621;
HAnimJoint1622 := THAnimJointNode.Create;
HAnimJoint1622 := HAnimJoint828;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1622;
HAnimJoint1623 := THAnimJointNode.Create;
HAnimJoint1623 := HAnimJoint855;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1623;
HAnimJoint1624 := THAnimJointNode.Create;
HAnimJoint1624 := HAnimJoint142;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1624;
HAnimJoint1625 := THAnimJointNode.Create;
HAnimJoint1625 := HAnimJoint269;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1625;
HAnimJoint1626 := THAnimJointNode.Create;
HAnimJoint1626 := HAnimJoint1071;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1626;
HAnimJoint1627 := THAnimJointNode.Create;
HAnimJoint1627 := HAnimJoint1421;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1627;
HAnimJoint1628 := THAnimJointNode.Create;
HAnimJoint1628 := HAnimJoint1080;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1628;
HAnimJoint1629 := THAnimJointNode.Create;
HAnimJoint1629 := HAnimJoint1430;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1629;
HAnimJoint1630 := THAnimJointNode.Create;
HAnimJoint1630 := HAnimJoint1089;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1630;
HAnimJoint1631 := THAnimJointNode.Create;
HAnimJoint1631 := HAnimJoint1439;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1631;
HAnimJoint1632 := THAnimJointNode.Create;
HAnimJoint1632 := HAnimJoint1098;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1632;
HAnimJoint1633 := THAnimJointNode.Create;
HAnimJoint1633 := HAnimJoint1448;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1633;
HAnimJoint1634 := THAnimJointNode.Create;
HAnimJoint1634 := HAnimJoint172;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1634;
HAnimJoint1635 := THAnimJointNode.Create;
HAnimJoint1635 := HAnimJoint299;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1635;
HAnimJoint1636 := THAnimJointNode.Create;
HAnimJoint1636 := HAnimJoint243;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1636;
HAnimJoint1637 := THAnimJointNode.Create;
HAnimJoint1637 := HAnimJoint370;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1637;
HAnimJoint1638 := THAnimJointNode.Create;
HAnimJoint1638 := HAnimJoint1117;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1638;
HAnimJoint1639 := THAnimJointNode.Create;
HAnimJoint1639 := HAnimJoint1467;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1639;
HAnimJoint1640 := THAnimJointNode.Create;
HAnimJoint1640 := HAnimJoint1126;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1640;
HAnimJoint1641 := THAnimJointNode.Create;
HAnimJoint1641 := HAnimJoint1476;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1641;
HAnimJoint1642 := THAnimJointNode.Create;
HAnimJoint1642 := HAnimJoint1135;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1642;
HAnimJoint1643 := THAnimJointNode.Create;
HAnimJoint1643 := HAnimJoint1485;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1643;
HAnimJoint1644 := THAnimJointNode.Create;
HAnimJoint1644 := HAnimJoint1144;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1644;
HAnimJoint1645 := THAnimJointNode.Create;
HAnimJoint1645 := HAnimJoint1494;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1645;
HAnimJoint1646 := THAnimJointNode.Create;
HAnimJoint1646 := HAnimJoint227;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1646;
HAnimJoint1647 := THAnimJointNode.Create;
HAnimJoint1647 := HAnimJoint354;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1647;
HAnimJoint1648 := THAnimJointNode.Create;
HAnimJoint1648 := HAnimJoint1195;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1648;
HAnimJoint1649 := THAnimJointNode.Create;
HAnimJoint1649 := HAnimJoint1545;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1649;
HAnimJoint1650 := THAnimJointNode.Create;
HAnimJoint1650 := HAnimJoint1204;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1650;
HAnimJoint1651 := THAnimJointNode.Create;
HAnimJoint1651 := HAnimJoint1554;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1651;
HAnimJoint1652 := THAnimJointNode.Create;
HAnimJoint1652 := HAnimJoint1213;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1652;
HAnimJoint1653 := THAnimJointNode.Create;
HAnimJoint1653 := HAnimJoint1563;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1653;
HAnimJoint1654 := THAnimJointNode.Create;
HAnimJoint1654 := HAnimJoint1222;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1654;
HAnimJoint1655 := THAnimJointNode.Create;
HAnimJoint1655 := HAnimJoint1572;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1655;
HAnimJoint1656 := THAnimJointNode.Create;
HAnimJoint1656 := HAnimJoint1156;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1656;
HAnimJoint1657 := THAnimJointNode.Create;
HAnimJoint1657 := HAnimJoint1506;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1657;
HAnimJoint1658 := THAnimJointNode.Create;
HAnimJoint1658 := HAnimJoint1165;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1658;
HAnimJoint1659 := THAnimJointNode.Create;
HAnimJoint1659 := HAnimJoint1515;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1659;
HAnimJoint1660 := THAnimJointNode.Create;
HAnimJoint1660 := HAnimJoint1174;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1660;
HAnimJoint1661 := THAnimJointNode.Create;
HAnimJoint1661 := HAnimJoint1524;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1661;
HAnimJoint1662 := THAnimJointNode.Create;
HAnimJoint1662 := HAnimJoint1183;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1662;
HAnimJoint1663 := THAnimJointNode.Create;
HAnimJoint1663 := HAnimJoint1533;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1663;
HAnimJoint1664 := THAnimJointNode.Create;
HAnimJoint1664 := HAnimJoint930;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1664;
HAnimJoint1665 := THAnimJointNode.Create;
HAnimJoint1665 := HAnimJoint1280;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1665;
HAnimJoint1666 := THAnimJointNode.Create;
HAnimJoint1666 := HAnimJoint884;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1666;
HAnimJoint1667 := THAnimJointNode.Create;
HAnimJoint1667 := HAnimJoint1234;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1667;
HAnimJoint1668 := THAnimJointNode.Create;
HAnimJoint1668 := HAnimJoint218;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1668;
HAnimJoint1669 := THAnimJointNode.Create;
HAnimJoint1669 := HAnimJoint345;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1669;
HAnimJoint1670 := THAnimJointNode.Create;
HAnimJoint1670 := HAnimJoint1041;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1670;
HAnimJoint1671 := THAnimJointNode.Create;
HAnimJoint1671 := HAnimJoint1391;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1671;
HAnimJoint1672 := THAnimJointNode.Create;
HAnimJoint1672 := HAnimJoint1050;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1672;
HAnimJoint1673 := THAnimJointNode.Create;
HAnimJoint1673 := HAnimJoint1400;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1673;
HAnimJoint1674 := THAnimJointNode.Create;
HAnimJoint1674 := HAnimJoint1059;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1674;
HAnimJoint1675 := THAnimJointNode.Create;
HAnimJoint1675 := HAnimJoint1409;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1675;
HAnimJoint1676 := THAnimJointNode.Create;
HAnimJoint1676 := HAnimJoint983;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1676;
HAnimJoint1677 := THAnimJointNode.Create;
HAnimJoint1677 := HAnimJoint1333;
{ .AddJoints }
HAnimHumanoid45.Joints := HAnimJoint1677;
HAnimSegment1678 := THAnimSegmentNode.Create;
HAnimSegment1678 := HAnimSegment63;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1678;
HAnimSegment1679 := THAnimSegmentNode.Create;
HAnimSegment1679 := HAnimSegment705;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1679;
HAnimSegment1680 := THAnimSegmentNode.Create;
HAnimSegment1680 := HAnimSegment866;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1680;
HAnimSegment1681 := THAnimSegmentNode.Create;
HAnimSegment1681 := HAnimSegment696;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1681;
HAnimSegment1682 := THAnimSegmentNode.Create;
HAnimSegment1682 := HAnimSegment687;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1682;
HAnimSegment1683 := THAnimSegmentNode.Create;
HAnimSegment1683 := HAnimSegment678;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1683;
HAnimSegment1684 := THAnimSegmentNode.Create;
HAnimSegment1684 := HAnimSegment669;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1684;
HAnimSegment1685 := THAnimSegmentNode.Create;
HAnimSegment1685 := HAnimSegment660;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1685;
HAnimSegment1686 := THAnimSegmentNode.Create;
HAnimSegment1686 := HAnimSegment651;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1686;
HAnimSegment1687 := THAnimSegmentNode.Create;
HAnimSegment1687 := HAnimSegment628;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1687;
HAnimSegment1688 := THAnimSegmentNode.Create;
HAnimSegment1688 := HAnimSegment597;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1688;
HAnimSegment1689 := THAnimSegmentNode.Create;
HAnimSegment1689 := HAnimSegment588;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1689;
HAnimSegment1690 := THAnimSegmentNode.Create;
HAnimSegment1690 := HAnimSegment579;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1690;
HAnimSegment1691 := THAnimSegmentNode.Create;
HAnimSegment1691 := HAnimSegment570;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1691;
HAnimSegment1692 := THAnimSegmentNode.Create;
HAnimSegment1692 := HAnimSegment561;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1692;
HAnimSegment1693 := THAnimSegmentNode.Create;
HAnimSegment1693 := HAnimSegment552;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1693;
HAnimSegment1694 := THAnimSegmentNode.Create;
HAnimSegment1694 := HAnimSegment543;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1694;
HAnimSegment1695 := THAnimSegmentNode.Create;
HAnimSegment1695 := HAnimSegment534;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1695;
HAnimSegment1696 := THAnimSegmentNode.Create;
HAnimSegment1696 := HAnimSegment511;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1696;
HAnimSegment1697 := THAnimSegmentNode.Create;
HAnimSegment1697 := HAnimSegment495;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1697;
HAnimSegment1698 := THAnimSegmentNode.Create;
HAnimSegment1698 := HAnimSegment486;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1698;
HAnimSegment1699 := THAnimSegmentNode.Create;
HAnimSegment1699 := HAnimSegment477;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1699;
HAnimSegment1700 := THAnimSegmentNode.Create;
HAnimSegment1700 := HAnimSegment468;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1700;
HAnimSegment1701 := THAnimSegmentNode.Create;
HAnimSegment1701 := HAnimSegment438;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1701;
HAnimSegment1702 := THAnimSegmentNode.Create;
HAnimSegment1702 := HAnimSegment429;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1702;
HAnimSegment1703 := THAnimSegmentNode.Create;
HAnimSegment1703 := HAnimSegment420;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1703;
HAnimSegment1704 := THAnimSegmentNode.Create;
HAnimSegment1704 := HAnimSegment397;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1704;
HAnimSegment1705 := THAnimSegmentNode.Create;
HAnimSegment1705 := HAnimSegment47;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1705;
HAnimSegment1706 := THAnimSegmentNode.Create;
HAnimSegment1706 := HAnimSegment173;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1706;
HAnimSegment1707 := THAnimSegmentNode.Create;
HAnimSegment1707 := HAnimSegment300;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1707;
HAnimSegment1708 := THAnimSegmentNode.Create;
HAnimSegment1708 := HAnimSegment885;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1708;
HAnimSegment1709 := THAnimSegmentNode.Create;
HAnimSegment1709 := HAnimSegment1235;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1709;
HAnimSegment1710 := THAnimSegmentNode.Create;
HAnimSegment1710 := HAnimSegment808;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1710;
HAnimSegment1711 := THAnimSegmentNode.Create;
HAnimSegment1711 := HAnimSegment839;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1711;
HAnimSegment1712 := THAnimSegmentNode.Create;
HAnimSegment1712 := HAnimSegment834;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1712;
HAnimSegment1713 := THAnimSegmentNode.Create;
HAnimSegment1713 := HAnimSegment861;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1713;
HAnimSegment1714 := THAnimSegmentNode.Create;
HAnimSegment1714 := HAnimSegment829;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1714;
HAnimSegment1715 := THAnimSegmentNode.Create;
HAnimSegment1715 := HAnimSegment856;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1715;
HAnimSegment1716 := THAnimSegmentNode.Create;
HAnimSegment1716 := HAnimSegment947;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1716;
HAnimSegment1717 := THAnimSegmentNode.Create;
HAnimSegment1717 := HAnimSegment1297;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1717;
HAnimSegment1718 := THAnimSegmentNode.Create;
HAnimSegment1718 := HAnimSegment244;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1718;
HAnimSegment1719 := THAnimSegmentNode.Create;
HAnimSegment1719 := HAnimSegment371;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1719;
HAnimSegment1720 := THAnimSegmentNode.Create;
HAnimSegment1720 := HAnimSegment984;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1720;
HAnimSegment1721 := THAnimSegmentNode.Create;
HAnimSegment1721 := HAnimSegment1334;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1721;
HAnimSegment1722 := THAnimSegmentNode.Create;
HAnimSegment1722 := HAnimSegment182;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1722;
HAnimSegment1723 := THAnimSegmentNode.Create;
HAnimSegment1723 := HAnimSegment309;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1723;
HAnimSegment1724 := THAnimSegmentNode.Create;
HAnimSegment1724 := HAnimSegment1099;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1724;
HAnimSegment1725 := THAnimSegmentNode.Create;
HAnimSegment1725 := HAnimSegment1449;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1725;
HAnimSegment1726 := THAnimSegmentNode.Create;
HAnimSegment1726 := HAnimSegment1072;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1726;
HAnimSegment1727 := THAnimSegmentNode.Create;
HAnimSegment1727 := HAnimSegment1422;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1727;
HAnimSegment1728 := THAnimSegmentNode.Create;
HAnimSegment1728 := HAnimSegment1090;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1728;
HAnimSegment1729 := THAnimSegmentNode.Create;
HAnimSegment1729 := HAnimSegment1440;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1729;
HAnimSegment1730 := THAnimSegmentNode.Create;
HAnimSegment1730 := HAnimSegment1081;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1730;
HAnimSegment1731 := THAnimSegmentNode.Create;
HAnimSegment1731 := HAnimSegment1431;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1731;
HAnimSegment1732 := THAnimSegmentNode.Create;
HAnimSegment1732 := HAnimSegment228;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1732;
HAnimSegment1733 := THAnimSegmentNode.Create;
HAnimSegment1733 := HAnimSegment355;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1733;
HAnimSegment1734 := THAnimSegmentNode.Create;
HAnimSegment1734 := HAnimSegment1145;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1734;
HAnimSegment1735 := THAnimSegmentNode.Create;
HAnimSegment1735 := HAnimSegment1495;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1735;
HAnimSegment1736 := THAnimSegmentNode.Create;
HAnimSegment1736 := HAnimSegment1118;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1736;
HAnimSegment1737 := THAnimSegmentNode.Create;
HAnimSegment1737 := HAnimSegment1468;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1737;
HAnimSegment1738 := THAnimSegmentNode.Create;
HAnimSegment1738 := HAnimSegment1136;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1738;
HAnimSegment1739 := THAnimSegmentNode.Create;
HAnimSegment1739 := HAnimSegment1486;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1739;
HAnimSegment1740 := THAnimSegmentNode.Create;
HAnimSegment1740 := HAnimSegment1127;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1740;
HAnimSegment1741 := THAnimSegmentNode.Create;
HAnimSegment1741 := HAnimSegment1477;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1741;
HAnimSegment1742 := THAnimSegmentNode.Create;
HAnimSegment1742 := HAnimSegment219;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1742;
HAnimSegment1743 := THAnimSegmentNode.Create;
HAnimSegment1743 := HAnimSegment346;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1743;
HAnimSegment1744 := THAnimSegmentNode.Create;
HAnimSegment1744 := HAnimSegment1223;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1744;
HAnimSegment1745 := THAnimSegmentNode.Create;
HAnimSegment1745 := HAnimSegment1573;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1745;
HAnimSegment1746 := THAnimSegmentNode.Create;
HAnimSegment1746 := HAnimSegment1196;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1746;
HAnimSegment1747 := THAnimSegmentNode.Create;
HAnimSegment1747 := HAnimSegment1546;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1747;
HAnimSegment1748 := THAnimSegmentNode.Create;
HAnimSegment1748 := HAnimSegment1214;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1748;
HAnimSegment1749 := THAnimSegmentNode.Create;
HAnimSegment1749 := HAnimSegment1564;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1749;
HAnimSegment1750 := THAnimSegmentNode.Create;
HAnimSegment1750 := HAnimSegment1205;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1750;
HAnimSegment1751 := THAnimSegmentNode.Create;
HAnimSegment1751 := HAnimSegment1555;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1751;
HAnimSegment1752 := THAnimSegmentNode.Create;
HAnimSegment1752 := HAnimSegment1184;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1752;
HAnimSegment1753 := THAnimSegmentNode.Create;
HAnimSegment1753 := HAnimSegment1534;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1753;
HAnimSegment1754 := THAnimSegmentNode.Create;
HAnimSegment1754 := HAnimSegment1157;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1754;
HAnimSegment1755 := THAnimSegmentNode.Create;
HAnimSegment1755 := HAnimSegment1507;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1755;
HAnimSegment1756 := THAnimSegmentNode.Create;
HAnimSegment1756 := HAnimSegment1175;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1756;
HAnimSegment1757 := THAnimSegmentNode.Create;
HAnimSegment1757 := HAnimSegment1525;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1757;
HAnimSegment1758 := THAnimSegmentNode.Create;
HAnimSegment1758 := HAnimSegment1166;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1758;
HAnimSegment1759 := THAnimSegmentNode.Create;
HAnimSegment1759 := HAnimSegment1516;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1759;
HAnimSegment1760 := THAnimSegmentNode.Create;
HAnimSegment1760 := HAnimSegment922;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1760;
HAnimSegment1761 := THAnimSegmentNode.Create;
HAnimSegment1761 := HAnimSegment1272;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1761;
HAnimSegment1762 := THAnimSegmentNode.Create;
HAnimSegment1762 := HAnimSegment143;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1762;
HAnimSegment1763 := THAnimSegmentNode.Create;
HAnimSegment1763 := HAnimSegment270;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1763;
HAnimSegment1764 := THAnimSegmentNode.Create;
HAnimSegment1764 := HAnimSegment1060;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1764;
HAnimSegment1765 := THAnimSegmentNode.Create;
HAnimSegment1765 := HAnimSegment1410;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1765;
HAnimSegment1766 := THAnimSegmentNode.Create;
HAnimSegment1766 := HAnimSegment1042;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1766;
HAnimSegment1767 := THAnimSegmentNode.Create;
HAnimSegment1767 := HAnimSegment1392;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1767;
HAnimSegment1768 := THAnimSegmentNode.Create;
HAnimSegment1768 := HAnimSegment1051;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1768;
HAnimSegment1769 := THAnimSegmentNode.Create;
HAnimSegment1769 := HAnimSegment1401;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1769;
HAnimSegment1770 := THAnimSegmentNode.Create;
HAnimSegment1770 := HAnimSegment931;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1770;
HAnimSegment1771 := THAnimSegmentNode.Create;
HAnimSegment1771 := HAnimSegment1281;
{ .AddSegments }
HAnimHumanoid45.Segments := HAnimSegment1771;
HAnimSite1772 := THAnimSiteNode.Create;
HAnimSite1772 := HAnimSite139;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1772;
HAnimSite1773 := THAnimSiteNode.Create;
HAnimSite1773 := HAnimSite777;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1773;
HAnimSite1774 := THAnimSiteNode.Create;
HAnimSite1774 := HAnimSite780;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1774;
HAnimSite1775 := THAnimSiteNode.Create;
HAnimSite1775 := HAnimSite789;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1775;
HAnimSite1776 := THAnimSiteNode.Create;
HAnimSite1776 := HAnimSite804;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1776;
HAnimSite1777 := THAnimSiteNode.Create;
HAnimSite1777 := HAnimSite621;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1777;
HAnimSite1778 := THAnimSiteNode.Create;
HAnimSite1778 := HAnimSite624;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1778;
HAnimSite1779 := THAnimSiteNode.Create;
HAnimSite1779 := HAnimSite507;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1779;
HAnimSite1780 := THAnimSiteNode.Create;
HAnimSite1780 := HAnimSite464;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1780;
HAnimSite1781 := THAnimSiteNode.Create;
HAnimSite1781 := HAnimSite413;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1781;
HAnimSite1782 := THAnimSiteNode.Create;
HAnimSite1782 := HAnimSite416;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1782;
HAnimSite1783 := THAnimSiteNode.Create;
HAnimSite1783 := HAnimSite912;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1783;
HAnimSite1784 := THAnimSiteNode.Create;
HAnimSite1784 := HAnimSite1262;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1784;
HAnimSite1785 := THAnimSiteNode.Create;
HAnimSite1785 := HAnimSite127;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1785;
HAnimSite1786 := THAnimSiteNode.Create;
HAnimSite1786 := HAnimSite130;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1786;
HAnimSite1787 := THAnimSiteNode.Create;
HAnimSite1787 := HAnimSite915;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1787;
HAnimSite1788 := THAnimSiteNode.Create;
HAnimSite1788 := HAnimSite1265;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1788;
HAnimSite1789 := THAnimSiteNode.Create;
HAnimSite1789 := HAnimSite918;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1789;
HAnimSite1790 := THAnimSiteNode.Create;
HAnimSite1790 := HAnimSite1268;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1790;
HAnimSite1791 := THAnimSiteNode.Create;
HAnimSite1791 := HAnimSite215;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1791;
HAnimSite1792 := THAnimSiteNode.Create;
HAnimSite1792 := HAnimSite342;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1792;
HAnimSite1793 := THAnimSiteNode.Create;
HAnimSite1793 := HAnimSite909;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1793;
HAnimSite1794 := THAnimSiteNode.Create;
HAnimSite1794 := HAnimSite1259;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1794;
HAnimSite1795 := THAnimSiteNode.Create;
HAnimSite1795 := HAnimSite1114;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1795;
HAnimSite1796 := THAnimSiteNode.Create;
HAnimSite1796 := HAnimSite1464;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1796;
HAnimSite1797 := THAnimSiteNode.Create;
HAnimSite1797 := HAnimSite266;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1797;
HAnimSite1798 := THAnimSiteNode.Create;
HAnimSite1798 := HAnimSite393;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1798;
HAnimSite1799 := THAnimSiteNode.Create;
HAnimSite1799 := HAnimSite166;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1799;
HAnimSite1800 := THAnimSiteNode.Create;
HAnimSite1800 := HAnimSite293;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1800;
HAnimSite1801 := THAnimSiteNode.Create;
HAnimSite1801 := HAnimSite169;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1801;
HAnimSite1802 := THAnimSiteNode.Create;
HAnimSite1802 := HAnimSite296;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1802;
HAnimSite1803 := THAnimSiteNode.Create;
HAnimSite1803 := HAnimSite260;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1803;
HAnimSite1804 := THAnimSiteNode.Create;
HAnimSite1804 := HAnimSite387;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1804;
HAnimSite1805 := THAnimSiteNode.Create;
HAnimSite1805 := HAnimSite795;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1805;
HAnimSite1806 := THAnimSiteNode.Create;
HAnimSite1806 := HAnimSite801;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1806;
HAnimSite1807 := THAnimSiteNode.Create;
HAnimSite1807 := HAnimSite943;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1807;
HAnimSite1808 := THAnimSiteNode.Create;
HAnimSite1808 := HAnimSite1293;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1808;
HAnimSite1809 := THAnimSiteNode.Create;
HAnimSite1809 := HAnimSite977;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1809;
HAnimSite1810 := THAnimSiteNode.Create;
HAnimSite1810 := HAnimSite1327;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1810;
HAnimSite1811 := THAnimSiteNode.Create;
HAnimSite1811 := HAnimSite111;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1811;
HAnimSite1812 := THAnimSiteNode.Create;
HAnimSite1812 := HAnimSite121;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1812;
HAnimSite1813 := THAnimSiteNode.Create;
HAnimSite1813 := HAnimSite1111;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1813;
HAnimSite1814 := THAnimSiteNode.Create;
HAnimSite1814 := HAnimSite1461;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1814;
HAnimSite1815 := THAnimSiteNode.Create;
HAnimSite1815 := HAnimSite783;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1815;
HAnimSite1816 := THAnimSiteNode.Create;
HAnimSite1816 := HAnimSite786;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1816;
HAnimSite1817 := THAnimSiteNode.Create;
HAnimSite1817 := HAnimSite163;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1817;
HAnimSite1818 := THAnimSiteNode.Create;
HAnimSite1818 := HAnimSite290;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1818;
HAnimSite1819 := THAnimSiteNode.Create;
HAnimSite1819 := HAnimSite206;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1819;
HAnimSite1820 := THAnimSiteNode.Create;
HAnimSite1820 := HAnimSite333;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1820;
HAnimSite1821 := THAnimSiteNode.Create;
HAnimSite1821 := HAnimSite209;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1821;
HAnimSite1822 := THAnimSiteNode.Create;
HAnimSite1822 := HAnimSite336;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1822;
HAnimSite1823 := THAnimSiteNode.Create;
HAnimSite1823 := HAnimSite1024;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1823;
HAnimSite1824 := THAnimSiteNode.Create;
HAnimSite1824 := HAnimSite1374;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1824;
HAnimSite1825 := THAnimSiteNode.Create;
HAnimSite1825 := HAnimSite1030;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1825;
HAnimSite1826 := THAnimSiteNode.Create;
HAnimSite1826 := HAnimSite1380;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1826;
HAnimSite1827 := THAnimSiteNode.Create;
HAnimSite1827 := HAnimSite240;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1827;
HAnimSite1828 := THAnimSiteNode.Create;
HAnimSite1828 := HAnimSite367;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1828;
HAnimSite1829 := THAnimSiteNode.Create;
HAnimSite1829 := HAnimSite263;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1829;
HAnimSite1830 := THAnimSiteNode.Create;
HAnimSite1830 := HAnimSite390;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1830;
HAnimSite1831 := THAnimSiteNode.Create;
HAnimSite1831 := HAnimSite1153;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1831;
HAnimSite1832 := THAnimSiteNode.Create;
HAnimSite1832 := HAnimSite1503;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1832;
HAnimSite1833 := THAnimSiteNode.Create;
HAnimSite1833 := HAnimSite644;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1833;
HAnimSite1834 := THAnimSiteNode.Create;
HAnimSite1834 := HAnimSite647;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1834;
HAnimSite1835 := THAnimSiteNode.Create;
HAnimSite1835 := HAnimSite974;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1835;
HAnimSite1836 := THAnimSiteNode.Create;
HAnimSite1836 := HAnimSite1324;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1836;
HAnimSite1837 := THAnimSiteNode.Create;
HAnimSite1837 := HAnimSite1231;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1837;
HAnimSite1838 := THAnimSiteNode.Create;
HAnimSite1838 := HAnimSite1581;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1838;
HAnimSite1839 := THAnimSiteNode.Create;
HAnimSite1839 := HAnimSite133;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1839;
HAnimSite1840 := THAnimSiteNode.Create;
HAnimSite1840 := HAnimSite136;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1840;
HAnimSite1841 := THAnimSiteNode.Create;
HAnimSite1841 := HAnimSite971;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1841;
HAnimSite1842 := THAnimSiteNode.Create;
HAnimSite1842 := HAnimSite1321;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1842;
HAnimSite1843 := THAnimSiteNode.Create;
HAnimSite1843 := HAnimSite980;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1843;
HAnimSite1844 := THAnimSiteNode.Create;
HAnimSite1844 := HAnimSite1330;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1844;
HAnimSite1845 := THAnimSiteNode.Create;
HAnimSite1845 := HAnimSite458;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1845;
HAnimSite1846 := THAnimSiteNode.Create;
HAnimSite1846 := HAnimSite461;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1846;
HAnimSite1847 := THAnimSiteNode.Create;
HAnimSite1847 := HAnimSite1192;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1847;
HAnimSite1848 := THAnimSiteNode.Create;
HAnimSite1848 := HAnimSite1542;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1848;
HAnimSite1849 := THAnimSiteNode.Create;
HAnimSite1849 := HAnimSite878;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1849;
HAnimSite1850 := THAnimSiteNode.Create;
HAnimSite1850 := HAnimSite881;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1850;
HAnimSite1851 := THAnimSiteNode.Create;
HAnimSite1851 := HAnimSite212;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1851;
HAnimSite1852 := THAnimSiteNode.Create;
HAnimSite1852 := HAnimSite339;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1852;
HAnimSite1853 := THAnimSiteNode.Create;
HAnimSite1853 := HAnimSite527;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1853;
HAnimSite1854 := THAnimSiteNode.Create;
HAnimSite1854 := HAnimSite530;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1854;
HAnimSite1855 := THAnimSiteNode.Create;
HAnimSite1855 := HAnimSite1068;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1855;
HAnimSite1856 := THAnimSiteNode.Create;
HAnimSite1856 := HAnimSite1418;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1856;
HAnimSite1857 := THAnimSiteNode.Create;
HAnimSite1857 := HAnimSite792;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1857;
HAnimSite1858 := THAnimSiteNode.Create;
HAnimSite1858 := HAnimSite798;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1858;
HAnimSite1859 := THAnimSiteNode.Create;
HAnimSite1859 := HAnimSite118;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1859;
HAnimSite1860 := THAnimSiteNode.Create;
HAnimSite1860 := HAnimSite124;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1860;
HAnimSite1861 := THAnimSiteNode.Create;
HAnimSite1861 := HAnimSite1027;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1861;
HAnimSite1862 := THAnimSiteNode.Create;
HAnimSite1862 := HAnimSite1377;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1862;
HAnimSite1863 := THAnimSiteNode.Create;
HAnimSite1863.NameField := 'l_inclined_view';
HAnimSite1863.Translation := Vector3(1.62,1.05,2.06);
HAnimSite1863.Rotation := Vector4(-0.113,0.993,0.0347,0.671);
TouchSensor1864 := TTouchSensorNode.Create;
TouchSensor1864.Description := 'HAnimSite l_inclined_view';
{ .AddChildren }
HAnimSite1863.AddChildren([TouchSensor1864]);
Shape1865 := TShapeNode.Create;
Shape1865 := Shape113;
{ .AddChildren }
HAnimSite1863.AddChildren([Shape1865]);
Viewpoint1866 := TViewpointNode.Create;
Viewpoint1866.Description := 'left inclined';
Viewpoint1866.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite1863.AddChildren([Viewpoint1866]);
Anchor1867 := TAnchorNode.Create;
Anchor1867.Description := 'HAnimSite hanim_l_inclined_view Viewpoint';
Anchor1867.SetUrl(['#hanim_l_inclined_viewpoint']);
LOD1868 := TLODNode.Create;
LOD1868.ForceTransitions := True;
LOD1868.SetRange([0.04]);
WorldInfo1869 := TWorldInfoNode.Create;
WorldInfo1869.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1868.AddChildren([WorldInfo1869]);
Shape1870 := TShapeNode.Create;
Shape1870 := Shape823;
{ .AddChildren }
LOD1868.AddChildren([Shape1870]);
{ .AddChildren }
Anchor1867.AddChildren([LOD1868]);
{ .AddChildren }
HAnimSite1863.AddChildren([Anchor1867]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1863;
HAnimSite1871 := THAnimSiteNode.Create;
HAnimSite1871.NameField := 'r_inclined_view';
HAnimSite1871.Translation := Vector3(-1.62,1.05,2.06);
HAnimSite1871.Rotation := Vector4(-0.113,-0.993,0.0347,0.671);
TouchSensor1872 := TTouchSensorNode.Create;
TouchSensor1872.Description := 'HAnimSite r_inclined_view';
{ .AddChildren }
HAnimSite1871.AddChildren([TouchSensor1872]);
Shape1873 := TShapeNode.Create;
Shape1873 := Shape113;
{ .AddChildren }
HAnimSite1871.AddChildren([Shape1873]);
Viewpoint1874 := TViewpointNode.Create;
Viewpoint1874.Description := 'right inclined';
Viewpoint1874.Position := Vector3(0,0,0);
Viewpoint1874.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1871.AddChildren([Viewpoint1874]);
Anchor1875 := TAnchorNode.Create;
Anchor1875.Description := 'HAnimSite hanim_r_inclined_view Viewpoint';
Anchor1875.SetUrl(['#hanim_r_inclined_viewpoint']);
LOD1876 := TLODNode.Create;
LOD1876.ForceTransitions := True;
LOD1876.SetRange([0.04]);
WorldInfo1877 := TWorldInfoNode.Create;
WorldInfo1877.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1876.AddChildren([WorldInfo1877]);
Shape1878 := TShapeNode.Create;
Shape1878 := Shape823;
{ .AddChildren }
LOD1876.AddChildren([Shape1878]);
{ .AddChildren }
Anchor1875.AddChildren([LOD1876]);
{ .AddChildren }
HAnimSite1871.AddChildren([Anchor1875]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1871;
HAnimSite1879 := THAnimSiteNode.Create;
HAnimSite1879.NameField := 'front_view';
HAnimSite1879.Translation := Vector3(0,0.85,2.58);
TouchSensor1880 := TTouchSensorNode.Create;
TouchSensor1880.Description := 'HAnimSite front_view';
{ .AddChildren }
HAnimSite1879.AddChildren([TouchSensor1880]);
Shape1881 := TShapeNode.Create;
Shape1881 := Shape113;
{ .AddChildren }
HAnimSite1879.AddChildren([Shape1881]);
Viewpoint1882 := TViewpointNode.Create;
Viewpoint1882.Description := 'front';
Viewpoint1882.Position := Vector3(0,0,0);
Viewpoint1882.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1879.AddChildren([Viewpoint1882]);
Anchor1883 := TAnchorNode.Create;
Anchor1883.Description := 'HAnimSite hanim_front_view Viewpoint';
Anchor1883.SetUrl(['#hanim_front_viewpoint']);
LOD1884 := TLODNode.Create;
LOD1884.ForceTransitions := True;
LOD1884.SetRange([0.04]);
WorldInfo1885 := TWorldInfoNode.Create;
WorldInfo1885.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1884.AddChildren([WorldInfo1885]);
Shape1886 := TShapeNode.Create;
Shape1886 := Shape823;
{ .AddChildren }
LOD1884.AddChildren([Shape1886]);
{ .AddChildren }
Anchor1883.AddChildren([LOD1884]);
{ .AddChildren }
HAnimSite1879.AddChildren([Anchor1883]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1879;
HAnimSite1887 := THAnimSiteNode.Create;
HAnimSite1887.NameField := 'back_view';
HAnimSite1887.Translation := Vector3(0,0.85,-2.58);
HAnimSite1887.Rotation := Vector4(0,1,0,3.14);
TouchSensor1888 := TTouchSensorNode.Create;
TouchSensor1888.Description := 'HAnimSite back_view';
{ .AddChildren }
HAnimSite1887.AddChildren([TouchSensor1888]);
Shape1889 := TShapeNode.Create;
Shape1889 := Shape113;
{ .AddChildren }
HAnimSite1887.AddChildren([Shape1889]);
Viewpoint1890 := TViewpointNode.Create;
Viewpoint1890.Description := 'back';
Viewpoint1890.Position := Vector3(0,0,0);
Viewpoint1890.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1887.AddChildren([Viewpoint1890]);
Anchor1891 := TAnchorNode.Create;
Anchor1891.Description := 'HAnimSite hanim_back_view Viewpoint';
Anchor1891.SetUrl(['#hanim_back_viewpoint']);
LOD1892 := TLODNode.Create;
LOD1892.ForceTransitions := True;
LOD1892.SetRange([0.04]);
WorldInfo1893 := TWorldInfoNode.Create;
WorldInfo1893.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1892.AddChildren([WorldInfo1893]);
Shape1894 := TShapeNode.Create;
Shape1894 := Shape823;
{ .AddChildren }
LOD1892.AddChildren([Shape1894]);
{ .AddChildren }
Anchor1891.AddChildren([LOD1892]);
{ .AddChildren }
HAnimSite1887.AddChildren([Anchor1891]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1887;
HAnimSite1895 := THAnimSiteNode.Create;
HAnimSite1895.NameField := 'l_side_view';
HAnimSite1895.Translation := Vector3(2.6,0.854,0);
HAnimSite1895.Rotation := Vector4(0,1,0,1.5708);
TouchSensor1896 := TTouchSensorNode.Create;
TouchSensor1896.Description := 'HAnimSite l_side_view';
{ .AddChildren }
HAnimSite1895.AddChildren([TouchSensor1896]);
Shape1897 := TShapeNode.Create;
Shape1897 := Shape113;
{ .AddChildren }
HAnimSite1895.AddChildren([Shape1897]);
Viewpoint1898 := TViewpointNode.Create;
Viewpoint1898.Description := 'left side';
Viewpoint1898.Position := Vector3(0,0,0);
Viewpoint1898.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1895.AddChildren([Viewpoint1898]);
Anchor1899 := TAnchorNode.Create;
Anchor1899.Description := 'HAnimSite hanim_l_side_view Viewpoint';
Anchor1899.SetUrl(['#hanim_l_side_viewpoint']);
LOD1900 := TLODNode.Create;
LOD1900.ForceTransitions := True;
LOD1900.SetRange([0.04]);
WorldInfo1901 := TWorldInfoNode.Create;
WorldInfo1901.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1900.AddChildren([WorldInfo1901]);
Shape1902 := TShapeNode.Create;
Shape1902 := Shape823;
{ .AddChildren }
LOD1900.AddChildren([Shape1902]);
{ .AddChildren }
Anchor1899.AddChildren([LOD1900]);
{ .AddChildren }
HAnimSite1895.AddChildren([Anchor1899]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1895;
HAnimSite1903 := THAnimSiteNode.Create;
HAnimSite1903.NameField := 'Top_view';
HAnimSite1903.Translation := Vector3(0,3.5,0);
HAnimSite1903.Rotation := Vector4(1,0,0,-1.57);
TouchSensor1904 := TTouchSensorNode.Create;
TouchSensor1904.Description := 'HAnimSite Top_view';
{ .AddChildren }
HAnimSite1903.AddChildren([TouchSensor1904]);
Shape1905 := TShapeNode.Create;
Shape1905 := Shape113;
{ .AddChildren }
HAnimSite1903.AddChildren([Shape1905]);
Viewpoint1906 := TViewpointNode.Create;
Viewpoint1906.Description := 'Top';
Viewpoint1906.Position := Vector3(0,0,0);
Viewpoint1906.CenterOfRotation := Vector3(0,0.9,0);
{ .AddChildren }
HAnimSite1903.AddChildren([Viewpoint1906]);
Anchor1907 := TAnchorNode.Create;
Anchor1907.Description := 'HAnimSite hanim_Top_view Viewpoint';
Anchor1907.SetUrl(['#hanim_Top_viewpoint']);
LOD1908 := TLODNode.Create;
LOD1908.ForceTransitions := True;
LOD1908.SetRange([0.04]);
WorldInfo1909 := TWorldInfoNode.Create;
WorldInfo1909.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1908.AddChildren([WorldInfo1909]);
Shape1910 := TShapeNode.Create;
Shape1910 := Shape823;
{ .AddChildren }
LOD1908.AddChildren([Shape1910]);
{ .AddChildren }
Anchor1907.AddChildren([LOD1908]);
{ .AddChildren }
HAnimSite1903.AddChildren([Anchor1907]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1903;
HAnimSite1911 := THAnimSiteNode.Create;
HAnimSite1911.NameField := 'front_close_view';
HAnimSite1911.Translation := Vector3(0,0.854,1.575);
TouchSensor1912 := TTouchSensorNode.Create;
TouchSensor1912.Description := 'HAnimSite front_close_view';
{ .AddChildren }
HAnimSite1911.AddChildren([TouchSensor1912]);
Shape1913 := TShapeNode.Create;
Shape1913 := Shape113;
{ .AddChildren }
HAnimSite1911.AddChildren([Shape1913]);
Viewpoint1914 := TViewpointNode.Create;
Viewpoint1914.Description := 'front close';
Viewpoint1914.Position := Vector3(0,0,0);
Viewpoint1914.CenterOfRotation := Vector3(0,0,1.575);
{ .AddChildren }
HAnimSite1911.AddChildren([Viewpoint1914]);
Anchor1915 := TAnchorNode.Create;
Anchor1915.Description := 'HAnimSite hanim_front_close_view Viewpoint';
Anchor1915.SetUrl(['#hanim_front_close_viewpoint']);
LOD1916 := TLODNode.Create;
LOD1916.ForceTransitions := True;
LOD1916.SetRange([0.04]);
WorldInfo1917 := TWorldInfoNode.Create;
WorldInfo1917.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1916.AddChildren([WorldInfo1917]);
Shape1918 := TShapeNode.Create;
Shape1918 := Shape823;
{ .AddChildren }
LOD1916.AddChildren([Shape1918]);
{ .AddChildren }
Anchor1915.AddChildren([LOD1916]);
{ .AddChildren }
HAnimSite1911.AddChildren([Anchor1915]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1911;
HAnimSite1919 := THAnimSiteNode.Create;
HAnimSite1919.NameField := 'side_close_view';
HAnimSite1919.Translation := Vector3(1.56,0.854,0);
HAnimSite1919.Rotation := Vector4(0,1,0,1.5708);
TouchSensor1920 := TTouchSensorNode.Create;
TouchSensor1920.Description := 'HAnimSite side_close_view';
{ .AddChildren }
HAnimSite1919.AddChildren([TouchSensor1920]);
Shape1921 := TShapeNode.Create;
Shape1921 := Shape113;
{ .AddChildren }
HAnimSite1919.AddChildren([Shape1921]);
Viewpoint1922 := TViewpointNode.Create;
Viewpoint1922.Description := 'side close';
Viewpoint1922.Position := Vector3(0,0,0);
Viewpoint1922.CenterOfRotation := Vector3(1.6,0,0);
{ .AddChildren }
HAnimSite1919.AddChildren([Viewpoint1922]);
Anchor1923 := TAnchorNode.Create;
Anchor1923.Description := 'HAnimSite hanim_side_close_view Viewpoint';
Anchor1923.SetUrl(['#hanim_side_close_viewpoint']);
LOD1924 := TLODNode.Create;
LOD1924.ForceTransitions := True;
LOD1924.SetRange([0.04]);
WorldInfo1925 := TWorldInfoNode.Create;
WorldInfo1925.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1924.AddChildren([WorldInfo1925]);
Shape1926 := TShapeNode.Create;
Shape1926 := Shape823;
{ .AddChildren }
LOD1924.AddChildren([Shape1926]);
{ .AddChildren }
Anchor1923.AddChildren([LOD1924]);
{ .AddChildren }
HAnimSite1919.AddChildren([Anchor1923]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1919;
HAnimSite1927 := THAnimSiteNode.Create;
HAnimSite1927.NameField := 'head_front_close_view';
HAnimSite1927.Translation := Vector3(0,1.5,1);
TouchSensor1928 := TTouchSensorNode.Create;
TouchSensor1928.Description := 'HAnimSite head_front_close_view';
{ .AddChildren }
HAnimSite1927.AddChildren([TouchSensor1928]);
Shape1929 := TShapeNode.Create;
Shape1929 := Shape113;
{ .AddChildren }
HAnimSite1927.AddChildren([Shape1929]);
Viewpoint1930 := TViewpointNode.Create;
Viewpoint1930.Description := 'head front close';
Viewpoint1930.Position := Vector3(0,0,0);
Viewpoint1930.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1927.AddChildren([Viewpoint1930]);
Anchor1931 := TAnchorNode.Create;
Anchor1931.Description := 'HAnimSite hanim_head_front_close_view Viewpoint';
Anchor1931.SetUrl(['#hanim_head_front_close_viewpoint']);
LOD1932 := TLODNode.Create;
LOD1932.ForceTransitions := True;
LOD1932.SetRange([0.04]);
WorldInfo1933 := TWorldInfoNode.Create;
WorldInfo1933.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1932.AddChildren([WorldInfo1933]);
Shape1934 := TShapeNode.Create;
Shape1934 := Shape823;
{ .AddChildren }
LOD1932.AddChildren([Shape1934]);
{ .AddChildren }
Anchor1931.AddChildren([LOD1932]);
{ .AddChildren }
HAnimSite1927.AddChildren([Anchor1931]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1927;
HAnimSite1935 := THAnimSiteNode.Create;
HAnimSite1935.NameField := 'chest_front_close_view';
HAnimSite1935.Translation := Vector3(0,1.2,1);
TouchSensor1936 := TTouchSensorNode.Create;
TouchSensor1936.Description := 'HAnimSite chest_front_close_view';
{ .AddChildren }
HAnimSite1935.AddChildren([TouchSensor1936]);
Shape1937 := TShapeNode.Create;
Shape1937 := Shape113;
{ .AddChildren }
HAnimSite1935.AddChildren([Shape1937]);
Viewpoint1938 := TViewpointNode.Create;
Viewpoint1938.Description := 'chest front close';
Viewpoint1938.Position := Vector3(0,0,0);
Viewpoint1938.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1935.AddChildren([Viewpoint1938]);
Anchor1939 := TAnchorNode.Create;
Anchor1939.Description := 'HAnimSite hanim_chest_front_close_view Viewpoint';
Anchor1939.SetUrl(['#hanim_chest_front_close_viewpoint']);
LOD1940 := TLODNode.Create;
LOD1940.ForceTransitions := True;
LOD1940.SetRange([0.04]);
WorldInfo1941 := TWorldInfoNode.Create;
WorldInfo1941.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1940.AddChildren([WorldInfo1941]);
Shape1942 := TShapeNode.Create;
Shape1942 := Shape823;
{ .AddChildren }
LOD1940.AddChildren([Shape1942]);
{ .AddChildren }
Anchor1939.AddChildren([LOD1940]);
{ .AddChildren }
HAnimSite1935.AddChildren([Anchor1939]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1935;
HAnimSite1943 := THAnimSiteNode.Create;
HAnimSite1943.NameField := 'pelvis_front_close_view';
HAnimSite1943.Translation := Vector3(0,0.8,1);
TouchSensor1944 := TTouchSensorNode.Create;
TouchSensor1944.Description := 'HAnimSite pelvis_front_close_view';
{ .AddChildren }
HAnimSite1943.AddChildren([TouchSensor1944]);
Shape1945 := TShapeNode.Create;
Shape1945 := Shape113;
{ .AddChildren }
HAnimSite1943.AddChildren([Shape1945]);
Viewpoint1946 := TViewpointNode.Create;
Viewpoint1946.Description := 'pelvis front close';
Viewpoint1946.Position := Vector3(0,0,0);
Viewpoint1946.CenterOfRotation := Vector3(0,0,1);
{ .AddChildren }
HAnimSite1943.AddChildren([Viewpoint1946]);
Anchor1947 := TAnchorNode.Create;
Anchor1947.Description := 'HAnimSite hanim_pelvis_front_close_view Viewpoint';
Anchor1947.SetUrl(['#hanim_pelvis_front_close_viewpoint']);
LOD1948 := TLODNode.Create;
LOD1948.ForceTransitions := True;
LOD1948.SetRange([0.04]);
WorldInfo1949 := TWorldInfoNode.Create;
WorldInfo1949.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1948.AddChildren([WorldInfo1949]);
Shape1950 := TShapeNode.Create;
Shape1950 := Shape823;
{ .AddChildren }
LOD1948.AddChildren([Shape1950]);
{ .AddChildren }
Anchor1947.AddChildren([LOD1948]);
{ .AddChildren }
HAnimSite1943.AddChildren([Anchor1947]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1943;
HAnimSite1951 := THAnimSiteNode.Create;
HAnimSite1951.NameField := 'knees_front_close_view';
HAnimSite1951.Translation := Vector3(0,0.4,1);
TouchSensor1952 := TTouchSensorNode.Create;
TouchSensor1952.Description := 'HAnimSite knees_front_close_view';
{ .AddChildren }
HAnimSite1951.AddChildren([TouchSensor1952]);
Shape1953 := TShapeNode.Create;
Shape1953 := Shape113;
{ .AddChildren }
HAnimSite1951.AddChildren([Shape1953]);
Viewpoint1954 := TViewpointNode.Create;
Viewpoint1954.Description := 'knees front close';
Viewpoint1954.Position := Vector3(0,0,0);
Viewpoint1954.CenterOfRotation := Vector3(0,0.4,0);
{ .AddChildren }
HAnimSite1951.AddChildren([Viewpoint1954]);
Anchor1955 := TAnchorNode.Create;
Anchor1955.Description := 'HAnimSite hanim_knees_front_close_view Viewpoint';
Anchor1955.SetUrl(['#hanim_knees_front_close_viewpoint']);
LOD1956 := TLODNode.Create;
LOD1956.ForceTransitions := True;
LOD1956.SetRange([0.04]);
WorldInfo1957 := TWorldInfoNode.Create;
WorldInfo1957.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1956.AddChildren([WorldInfo1957]);
Shape1958 := TShapeNode.Create;
Shape1958 := Shape823;
{ .AddChildren }
LOD1956.AddChildren([Shape1958]);
{ .AddChildren }
Anchor1955.AddChildren([LOD1956]);
{ .AddChildren }
HAnimSite1951.AddChildren([Anchor1955]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1951;
HAnimSite1959 := THAnimSiteNode.Create;
HAnimSite1959.NameField := 'feet_front_close_view';
HAnimSite1959.Translation := Vector3(0,0,1);
TouchSensor1960 := TTouchSensorNode.Create;
TouchSensor1960.Description := 'HAnimSite feet_front_close_view';
{ .AddChildren }
HAnimSite1959.AddChildren([TouchSensor1960]);
Shape1961 := TShapeNode.Create;
Shape1961 := Shape113;
{ .AddChildren }
HAnimSite1959.AddChildren([Shape1961]);
Viewpoint1962 := TViewpointNode.Create;
Viewpoint1962.Description := 'feet front close';
Viewpoint1962.Position := Vector3(0,0,0);
{ .AddChildren }
HAnimSite1959.AddChildren([Viewpoint1962]);
Anchor1963 := TAnchorNode.Create;
Anchor1963.Description := 'HAnimSite hanim_feet_front_close_view Viewpoint';
Anchor1963.SetUrl(['#hanim_feet_front_close_viewpoint']);
LOD1964 := TLODNode.Create;
LOD1964.ForceTransitions := True;
LOD1964.SetRange([0.04]);
WorldInfo1965 := TWorldInfoNode.Create;
WorldInfo1965.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1964.AddChildren([WorldInfo1965]);
Shape1966 := TShapeNode.Create;
Shape1966 := Shape823;
{ .AddChildren }
LOD1964.AddChildren([Shape1966]);
{ .AddChildren }
Anchor1963.AddChildren([LOD1964]);
{ .AddChildren }
HAnimSite1959.AddChildren([Anchor1963]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1959;
HAnimSite1967 := THAnimSiteNode.Create;
HAnimSite1967.NameField := 'eye_level_view';
HAnimSite1967.Translation := Vector3(0,1.6332,0.0502);
TouchSensor1968 := TTouchSensorNode.Create;
TouchSensor1968.Description := 'HAnimSite eye_level_view';
{ .AddChildren }
HAnimSite1967.AddChildren([TouchSensor1968]);
Shape1969 := TShapeNode.Create;
Shape1969 := Shape113;
{ .AddChildren }
HAnimSite1967.AddChildren([Shape1969]);
Viewpoint1970 := TViewpointNode.Create;
Viewpoint1970.Description := 'eye level looking forward';
Viewpoint1970.Position := Vector3(0,0,0);
Viewpoint1970.Orientation := Vector4(0,1,0,3.141593);
{ .AddChildren }
HAnimSite1967.AddChildren([Viewpoint1970]);
Anchor1971 := TAnchorNode.Create;
Anchor1971.Description := 'HAnimSite hanim_eye_level_view Viewpoint';
Anchor1971.SetUrl(['#hanim_eye_level_viewpoint']);
LOD1972 := TLODNode.Create;
LOD1972.ForceTransitions := True;
LOD1972.SetRange([0.04]);
WorldInfo1973 := TWorldInfoNode.Create;
WorldInfo1973.SetInfo(['hide diamond when close']);
{ .AddChildren }
LOD1972.AddChildren([WorldInfo1973]);
Shape1974 := TShapeNode.Create;
Shape1974 := Shape823;
{ .AddChildren }
LOD1972.AddChildren([Shape1974]);
{ .AddChildren }
Anchor1971.AddChildren([LOD1972]);
{ .AddChildren }
HAnimSite1967.AddChildren([Anchor1971]);
{ .SetViewpoints }
HAnimHumanoid45.Viewpoints := HAnimSite1967;
HAnimSite1975 := THAnimSiteNode.Create;
HAnimSite1975 := HAnimSite816;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1975;
HAnimSite1976 := THAnimSiteNode.Create;
HAnimSite1976 := HAnimSite847;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1976;
HAnimSite1977 := THAnimSiteNode.Create;
HAnimSite1977 := HAnimSite1033;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1977;
HAnimSite1978 := THAnimSiteNode.Create;
HAnimSite1978 := HAnimSite1383;
{ .AddSites }
HAnimHumanoid45.Sites := HAnimSite1978;
{ .AddChildren }
Group31.AddChildren([HAnimHumanoid45]);
{ .AddGroup }
X3D0.AddChildren([Group31]);
Result := X3D0;
end;
