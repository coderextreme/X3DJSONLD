function Humanoid3: TX3DRootNode;
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
LineSet26: TLineSetNode;
ColorRGBA27: TColorRGBANode;
Coordinate28: TCoordinateNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
IndexedFaceSet31: TIndexedFaceSetNode;
ColorRGBA32: TColorRGBANode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
NavigationInfo36: TNavigationInfoNode;
Viewpoint37: TViewpointNode;
HAnimHumanoid38: THAnimHumanoidNode;
Shape39: TShapeNode;
IndexedFaceSet40: TIndexedFaceSetNode;
Coordinate41: TCoordinateNode;
Color42: TColorNode;
Appearance43: TAppearanceNode;
ImageTexture44: TImageTextureNode;
Material45: TMaterialNode;
Coordinate46: TCoordinateNode;
HAnimJoint47: THAnimJointNode;
HAnimSegment48: THAnimSegmentNode;
Transform49: TTransformNode;
Transform50: TTransformNode;
Shape51: TShapeNode;
Shape52: TShapeNode;
LineSet53: TLineSetNode;
Coordinate54: TCoordinateNode;
ColorRGBA55: TColorRGBANode;
Shape56: TShapeNode;
LineSet57: TLineSetNode;
Coordinate58: TCoordinateNode;
ColorRGBA59: TColorRGBANode;
HAnimJoint60: THAnimJointNode;
HAnimSegment61: THAnimSegmentNode;
Transform62: TTransformNode;
Transform63: TTransformNode;
Shape64: TShapeNode;
Shape65: TShapeNode;
LineSet66: TLineSetNode;
Coordinate67: TCoordinateNode;
ColorRGBA68: TColorRGBANode;
HAnimSite69: THAnimSiteNode;
TouchSensor70: TTouchSensorNode;
Shape71: TShapeNode;
Billboard72: TBillboardNode;
Shape73: TShapeNode;
Text74: TTextNode;
FontStyle75: TFontStyleNode;
HAnimSite76: THAnimSiteNode;
TouchSensor77: TTouchSensorNode;
Shape78: TShapeNode;
Billboard79: TBillboardNode;
Shape80: TShapeNode;
Text81: TTextNode;
FontStyle82: TFontStyleNode;
HAnimSite83: THAnimSiteNode;
TouchSensor84: TTouchSensorNode;
Shape85: TShapeNode;
Billboard86: TBillboardNode;
Shape87: TShapeNode;
Text88: TTextNode;
FontStyle89: TFontStyleNode;
HAnimSite90: THAnimSiteNode;
TouchSensor91: TTouchSensorNode;
Shape92: TShapeNode;
Billboard93: TBillboardNode;
Shape94: TShapeNode;
Text95: TTextNode;
FontStyle96: TFontStyleNode;
HAnimSite97: THAnimSiteNode;
TouchSensor98: TTouchSensorNode;
Shape99: TShapeNode;
Billboard100: TBillboardNode;
Shape101: TShapeNode;
Text102: TTextNode;
FontStyle103: TFontStyleNode;
HAnimSite104: THAnimSiteNode;
TouchSensor105: TTouchSensorNode;
Shape106: TShapeNode;
Billboard107: TBillboardNode;
Shape108: TShapeNode;
Text109: TTextNode;
FontStyle110: TFontStyleNode;
HAnimSite111: THAnimSiteNode;
TouchSensor112: TTouchSensorNode;
Shape113: TShapeNode;
Billboard114: TBillboardNode;
Shape115: TShapeNode;
Text116: TTextNode;
FontStyle117: TFontStyleNode;
HAnimSite118: THAnimSiteNode;
TouchSensor119: TTouchSensorNode;
Shape120: TShapeNode;
Billboard121: TBillboardNode;
Shape122: TShapeNode;
Text123: TTextNode;
FontStyle124: TFontStyleNode;
HAnimSite125: THAnimSiteNode;
TouchSensor126: TTouchSensorNode;
Shape127: TShapeNode;
Billboard128: TBillboardNode;
Shape129: TShapeNode;
Text130: TTextNode;
FontStyle131: TFontStyleNode;
HAnimSite132: THAnimSiteNode;
TouchSensor133: TTouchSensorNode;
Shape134: TShapeNode;
Billboard135: TBillboardNode;
Shape136: TShapeNode;
Text137: TTextNode;
FontStyle138: TFontStyleNode;
Shape139: TShapeNode;
LineSet140: TLineSetNode;
Coordinate141: TCoordinateNode;
ColorRGBA142: TColorRGBANode;
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
Billboard155: TBillboardNode;
Shape156: TShapeNode;
Text157: TTextNode;
FontStyle158: TFontStyleNode;
HAnimSite159: THAnimSiteNode;
TouchSensor160: TTouchSensorNode;
Shape161: TShapeNode;
Billboard162: TBillboardNode;
Shape163: TShapeNode;
Text164: TTextNode;
FontStyle165: TFontStyleNode;
HAnimSite166: THAnimSiteNode;
TouchSensor167: TTouchSensorNode;
Shape168: TShapeNode;
Billboard169: TBillboardNode;
Shape170: TShapeNode;
Text171: TTextNode;
FontStyle172: TFontStyleNode;
HAnimSite173: THAnimSiteNode;
TouchSensor174: TTouchSensorNode;
Shape175: TShapeNode;
Billboard176: TBillboardNode;
Shape177: TShapeNode;
Text178: TTextNode;
FontStyle179: TFontStyleNode;
HAnimJoint180: THAnimJointNode;
HAnimSegment181: THAnimSegmentNode;
Transform182: TTransformNode;
Transform183: TTransformNode;
Shape184: TShapeNode;
Shape185: TShapeNode;
LineSet186: TLineSetNode;
Coordinate187: TCoordinateNode;
ColorRGBA188: TColorRGBANode;
HAnimSite189: THAnimSiteNode;
TouchSensor190: TTouchSensorNode;
Shape191: TShapeNode;
Billboard192: TBillboardNode;
Shape193: TShapeNode;
Text194: TTextNode;
FontStyle195: TFontStyleNode;
HAnimSite196: THAnimSiteNode;
TouchSensor197: TTouchSensorNode;
Shape198: TShapeNode;
Billboard199: TBillboardNode;
Shape200: TShapeNode;
Text201: TTextNode;
FontStyle202: TFontStyleNode;
HAnimSite203: THAnimSiteNode;
TouchSensor204: TTouchSensorNode;
Shape205: TShapeNode;
Billboard206: TBillboardNode;
Shape207: TShapeNode;
Text208: TTextNode;
FontStyle209: TFontStyleNode;
HAnimJoint210: THAnimJointNode;
HAnimSegment211: THAnimSegmentNode;
Transform212: TTransformNode;
Transform213: TTransformNode;
Shape214: TShapeNode;
Shape215: TShapeNode;
LineSet216: TLineSetNode;
Coordinate217: TCoordinateNode;
ColorRGBA218: TColorRGBANode;
HAnimSite219: THAnimSiteNode;
TouchSensor220: TTouchSensorNode;
Shape221: TShapeNode;
Billboard222: TBillboardNode;
Shape223: TShapeNode;
Text224: TTextNode;
FontStyle225: TFontStyleNode;
HAnimSite226: THAnimSiteNode;
TouchSensor227: TTouchSensorNode;
Shape228: TShapeNode;
Billboard229: TBillboardNode;
Shape230: TShapeNode;
Text231: TTextNode;
FontStyle232: TFontStyleNode;
HAnimJoint233: THAnimJointNode;
HAnimSegment234: THAnimSegmentNode;
Transform235: TTransformNode;
Transform236: TTransformNode;
Shape237: TShapeNode;
Shape238: TShapeNode;
LineSet239: TLineSetNode;
Coordinate240: TCoordinateNode;
ColorRGBA241: TColorRGBANode;
HAnimJoint242: THAnimJointNode;
HAnimSegment243: THAnimSegmentNode;
Transform244: TTransformNode;
Transform245: TTransformNode;
Shape246: TShapeNode;
Shape247: TShapeNode;
LineSet248: TLineSetNode;
Coordinate249: TCoordinateNode;
ColorRGBA250: TColorRGBANode;
HAnimSite251: THAnimSiteNode;
TouchSensor252: TTouchSensorNode;
Shape253: TShapeNode;
Billboard254: TBillboardNode;
Shape255: TShapeNode;
Text256: TTextNode;
FontStyle257: TFontStyleNode;
HAnimSite258: THAnimSiteNode;
TouchSensor259: TTouchSensorNode;
Shape260: TShapeNode;
Billboard261: TBillboardNode;
Shape262: TShapeNode;
Text263: TTextNode;
FontStyle264: TFontStyleNode;
HAnimSite265: THAnimSiteNode;
TouchSensor266: TTouchSensorNode;
Shape267: TShapeNode;
Billboard268: TBillboardNode;
Shape269: TShapeNode;
Text270: TTextNode;
FontStyle271: TFontStyleNode;
HAnimSite272: THAnimSiteNode;
TouchSensor273: TTouchSensorNode;
Shape274: TShapeNode;
Billboard275: TBillboardNode;
Shape276: TShapeNode;
Text277: TTextNode;
FontStyle278: TFontStyleNode;
HAnimSite279: THAnimSiteNode;
TouchSensor280: TTouchSensorNode;
Shape281: TShapeNode;
Billboard282: TBillboardNode;
Shape283: TShapeNode;
Text284: TTextNode;
FontStyle285: TFontStyleNode;
HAnimSite286: THAnimSiteNode;
TouchSensor287: TTouchSensorNode;
Shape288: TShapeNode;
Billboard289: TBillboardNode;
Shape290: TShapeNode;
Text291: TTextNode;
FontStyle292: TFontStyleNode;
HAnimSite293: THAnimSiteNode;
TouchSensor294: TTouchSensorNode;
Shape295: TShapeNode;
Billboard296: TBillboardNode;
Shape297: TShapeNode;
Text298: TTextNode;
FontStyle299: TFontStyleNode;
HAnimJoint300: THAnimJointNode;
HAnimJoint301: THAnimJointNode;
HAnimSegment302: THAnimSegmentNode;
Transform303: TTransformNode;
Transform304: TTransformNode;
Shape305: TShapeNode;
Shape306: TShapeNode;
LineSet307: TLineSetNode;
Coordinate308: TCoordinateNode;
ColorRGBA309: TColorRGBANode;
HAnimSite310: THAnimSiteNode;
TouchSensor311: TTouchSensorNode;
Shape312: TShapeNode;
Billboard313: TBillboardNode;
Shape314: TShapeNode;
Text315: TTextNode;
FontStyle316: TFontStyleNode;
HAnimSite317: THAnimSiteNode;
TouchSensor318: TTouchSensorNode;
Shape319: TShapeNode;
Billboard320: TBillboardNode;
Shape321: TShapeNode;
Text322: TTextNode;
FontStyle323: TFontStyleNode;
HAnimSite324: THAnimSiteNode;
TouchSensor325: TTouchSensorNode;
Shape326: TShapeNode;
Billboard327: TBillboardNode;
Shape328: TShapeNode;
Text329: TTextNode;
FontStyle330: TFontStyleNode;
HAnimSite331: THAnimSiteNode;
TouchSensor332: TTouchSensorNode;
Shape333: TShapeNode;
Billboard334: TBillboardNode;
Shape335: TShapeNode;
Text336: TTextNode;
FontStyle337: TFontStyleNode;
HAnimJoint338: THAnimJointNode;
HAnimSegment339: THAnimSegmentNode;
Transform340: TTransformNode;
Transform341: TTransformNode;
Shape342: TShapeNode;
Shape343: TShapeNode;
LineSet344: TLineSetNode;
Coordinate345: TCoordinateNode;
ColorRGBA346: TColorRGBANode;
HAnimSite347: THAnimSiteNode;
TouchSensor348: TTouchSensorNode;
Shape349: TShapeNode;
Billboard350: TBillboardNode;
Shape351: TShapeNode;
Text352: TTextNode;
FontStyle353: TFontStyleNode;
HAnimSite354: THAnimSiteNode;
TouchSensor355: TTouchSensorNode;
Shape356: TShapeNode;
Billboard357: TBillboardNode;
Shape358: TShapeNode;
Text359: TTextNode;
FontStyle360: TFontStyleNode;
HAnimSite361: THAnimSiteNode;
TouchSensor362: TTouchSensorNode;
Shape363: TShapeNode;
Billboard364: TBillboardNode;
Shape365: TShapeNode;
Text366: TTextNode;
FontStyle367: TFontStyleNode;
HAnimJoint368: THAnimJointNode;
HAnimSegment369: THAnimSegmentNode;
Transform370: TTransformNode;
Transform371: TTransformNode;
Shape372: TShapeNode;
Shape373: TShapeNode;
LineSet374: TLineSetNode;
Coordinate375: TCoordinateNode;
ColorRGBA376: TColorRGBANode;
HAnimSite377: THAnimSiteNode;
TouchSensor378: TTouchSensorNode;
Shape379: TShapeNode;
Billboard380: TBillboardNode;
Shape381: TShapeNode;
Text382: TTextNode;
FontStyle383: TFontStyleNode;
HAnimSite384: THAnimSiteNode;
TouchSensor385: TTouchSensorNode;
Shape386: TShapeNode;
Billboard387: TBillboardNode;
Shape388: TShapeNode;
Text389: TTextNode;
FontStyle390: TFontStyleNode;
HAnimJoint391: THAnimJointNode;
HAnimSegment392: THAnimSegmentNode;
Transform393: TTransformNode;
Transform394: TTransformNode;
Shape395: TShapeNode;
Shape396: TShapeNode;
LineSet397: TLineSetNode;
Coordinate398: TCoordinateNode;
ColorRGBA399: TColorRGBANode;
HAnimJoint400: THAnimJointNode;
HAnimSegment401: THAnimSegmentNode;
Transform402: TTransformNode;
Transform403: TTransformNode;
Shape404: TShapeNode;
Shape405: TShapeNode;
LineSet406: TLineSetNode;
Coordinate407: TCoordinateNode;
ColorRGBA408: TColorRGBANode;
HAnimSite409: THAnimSiteNode;
TouchSensor410: TTouchSensorNode;
Shape411: TShapeNode;
Billboard412: TBillboardNode;
Shape413: TShapeNode;
Text414: TTextNode;
FontStyle415: TFontStyleNode;
HAnimSite416: THAnimSiteNode;
TouchSensor417: TTouchSensorNode;
Shape418: TShapeNode;
Billboard419: TBillboardNode;
Shape420: TShapeNode;
Text421: TTextNode;
FontStyle422: TFontStyleNode;
HAnimSite423: THAnimSiteNode;
TouchSensor424: TTouchSensorNode;
Shape425: TShapeNode;
Billboard426: TBillboardNode;
Shape427: TShapeNode;
Text428: TTextNode;
FontStyle429: TFontStyleNode;
HAnimSite430: THAnimSiteNode;
TouchSensor431: TTouchSensorNode;
Shape432: TShapeNode;
Billboard433: TBillboardNode;
Shape434: TShapeNode;
Text435: TTextNode;
FontStyle436: TFontStyleNode;
HAnimSite437: THAnimSiteNode;
TouchSensor438: TTouchSensorNode;
Shape439: TShapeNode;
Billboard440: TBillboardNode;
Shape441: TShapeNode;
Text442: TTextNode;
FontStyle443: TFontStyleNode;
HAnimSite444: THAnimSiteNode;
TouchSensor445: TTouchSensorNode;
Shape446: TShapeNode;
Billboard447: TBillboardNode;
Shape448: TShapeNode;
Text449: TTextNode;
FontStyle450: TFontStyleNode;
HAnimSite451: THAnimSiteNode;
TouchSensor452: TTouchSensorNode;
Shape453: TShapeNode;
Billboard454: TBillboardNode;
Shape455: TShapeNode;
Text456: TTextNode;
FontStyle457: TFontStyleNode;
HAnimJoint458: THAnimJointNode;
HAnimJoint459: THAnimJointNode;
HAnimSegment460: THAnimSegmentNode;
Transform461: TTransformNode;
Transform462: TTransformNode;
Shape463: TShapeNode;
Shape464: TShapeNode;
LineSet465: TLineSetNode;
Coordinate466: TCoordinateNode;
ColorRGBA467: TColorRGBANode;
HAnimSite468: THAnimSiteNode;
TouchSensor469: TTouchSensorNode;
Shape470: TShapeNode;
Billboard471: TBillboardNode;
Shape472: TShapeNode;
Text473: TTextNode;
FontStyle474: TFontStyleNode;
HAnimSite475: THAnimSiteNode;
TouchSensor476: TTouchSensorNode;
Shape477: TShapeNode;
Billboard478: TBillboardNode;
Shape479: TShapeNode;
Text480: TTextNode;
FontStyle481: TFontStyleNode;
HAnimSite482: THAnimSiteNode;
TouchSensor483: TTouchSensorNode;
Shape484: TShapeNode;
Billboard485: TBillboardNode;
Shape486: TShapeNode;
Text487: TTextNode;
FontStyle488: TFontStyleNode;
HAnimJoint489: THAnimJointNode;
HAnimSegment490: THAnimSegmentNode;
Transform491: TTransformNode;
Transform492: TTransformNode;
Shape493: TShapeNode;
Shape494: TShapeNode;
LineSet495: TLineSetNode;
Coordinate496: TCoordinateNode;
ColorRGBA497: TColorRGBANode;
HAnimJoint498: THAnimJointNode;
HAnimSegment499: THAnimSegmentNode;
Transform500: TTransformNode;
Transform501: TTransformNode;
Shape502: TShapeNode;
Shape503: TShapeNode;
LineSet504: TLineSetNode;
Coordinate505: TCoordinateNode;
ColorRGBA506: TColorRGBANode;
HAnimJoint507: THAnimJointNode;
HAnimSegment508: THAnimSegmentNode;
Transform509: TTransformNode;
Transform510: TTransformNode;
Shape511: TShapeNode;
Shape512: TShapeNode;
LineSet513: TLineSetNode;
Coordinate514: TCoordinateNode;
ColorRGBA515: TColorRGBANode;
HAnimSite516: THAnimSiteNode;
TouchSensor517: TTouchSensorNode;
Shape518: TShapeNode;
Billboard519: TBillboardNode;
Shape520: TShapeNode;
Text521: TTextNode;
FontStyle522: TFontStyleNode;
HAnimSite523: THAnimSiteNode;
TouchSensor524: TTouchSensorNode;
Shape525: TShapeNode;
Billboard526: TBillboardNode;
Shape527: TShapeNode;
Text528: TTextNode;
FontStyle529: TFontStyleNode;
HAnimSite530: THAnimSiteNode;
TouchSensor531: TTouchSensorNode;
Shape532: TShapeNode;
Billboard533: TBillboardNode;
Shape534: TShapeNode;
Text535: TTextNode;
FontStyle536: TFontStyleNode;
HAnimJoint537: THAnimJointNode;
HAnimSegment538: THAnimSegmentNode;
Transform539: TTransformNode;
Transform540: TTransformNode;
Shape541: TShapeNode;
Shape542: TShapeNode;
LineSet543: TLineSetNode;
Coordinate544: TCoordinateNode;
ColorRGBA545: TColorRGBANode;
HAnimJoint546: THAnimJointNode;
HAnimSegment547: THAnimSegmentNode;
Transform548: TTransformNode;
Transform549: TTransformNode;
Shape550: TShapeNode;
Shape551: TShapeNode;
LineSet552: TLineSetNode;
Coordinate553: TCoordinateNode;
ColorRGBA554: TColorRGBANode;
HAnimJoint555: THAnimJointNode;
HAnimSegment556: THAnimSegmentNode;
Transform557: TTransformNode;
Transform558: TTransformNode;
Shape559: TShapeNode;
Shape560: TShapeNode;
LineSet561: TLineSetNode;
Coordinate562: TCoordinateNode;
ColorRGBA563: TColorRGBANode;
HAnimJoint564: THAnimJointNode;
HAnimSegment565: THAnimSegmentNode;
Transform566: TTransformNode;
Transform567: TTransformNode;
Shape568: TShapeNode;
Shape569: TShapeNode;
LineSet570: TLineSetNode;
Coordinate571: TCoordinateNode;
ColorRGBA572: TColorRGBANode;
HAnimSite573: THAnimSiteNode;
TouchSensor574: TTouchSensorNode;
Shape575: TShapeNode;
Billboard576: TBillboardNode;
Shape577: TShapeNode;
Text578: TTextNode;
FontStyle579: TFontStyleNode;
HAnimJoint580: THAnimJointNode;
HAnimSegment581: THAnimSegmentNode;
Transform582: TTransformNode;
Transform583: TTransformNode;
Shape584: TShapeNode;
Shape585: TShapeNode;
LineSet586: TLineSetNode;
Coordinate587: TCoordinateNode;
ColorRGBA588: TColorRGBANode;
HAnimSite589: THAnimSiteNode;
TouchSensor590: TTouchSensorNode;
Shape591: TShapeNode;
Billboard592: TBillboardNode;
Shape593: TShapeNode;
Text594: TTextNode;
FontStyle595: TFontStyleNode;
HAnimSite596: THAnimSiteNode;
TouchSensor597: TTouchSensorNode;
Shape598: TShapeNode;
Billboard599: TBillboardNode;
Shape600: TShapeNode;
Text601: TTextNode;
FontStyle602: TFontStyleNode;
HAnimJoint603: THAnimJointNode;
HAnimSegment604: THAnimSegmentNode;
Transform605: TTransformNode;
Transform606: TTransformNode;
Shape607: TShapeNode;
Shape608: TShapeNode;
LineSet609: TLineSetNode;
Coordinate610: TCoordinateNode;
ColorRGBA611: TColorRGBANode;
HAnimJoint612: THAnimJointNode;
HAnimSegment613: THAnimSegmentNode;
Transform614: TTransformNode;
Transform615: TTransformNode;
Shape616: TShapeNode;
Shape617: TShapeNode;
LineSet618: TLineSetNode;
Coordinate619: TCoordinateNode;
ColorRGBA620: TColorRGBANode;
HAnimJoint621: THAnimJointNode;
HAnimSegment622: THAnimSegmentNode;
Transform623: TTransformNode;
Transform624: TTransformNode;
Shape625: TShapeNode;
Shape626: TShapeNode;
LineSet627: TLineSetNode;
Coordinate628: TCoordinateNode;
ColorRGBA629: TColorRGBANode;
HAnimSite630: THAnimSiteNode;
TouchSensor631: TTouchSensorNode;
Shape632: TShapeNode;
Billboard633: TBillboardNode;
Shape634: TShapeNode;
Text635: TTextNode;
FontStyle636: TFontStyleNode;
HAnimSite637: THAnimSiteNode;
TouchSensor638: TTouchSensorNode;
Shape639: TShapeNode;
Billboard640: TBillboardNode;
Shape641: TShapeNode;
Text642: TTextNode;
FontStyle643: TFontStyleNode;
HAnimSite644: THAnimSiteNode;
TouchSensor645: TTouchSensorNode;
Shape646: TShapeNode;
Billboard647: TBillboardNode;
Shape648: TShapeNode;
Text649: TTextNode;
FontStyle650: TFontStyleNode;
HAnimSite651: THAnimSiteNode;
TouchSensor652: TTouchSensorNode;
Shape653: TShapeNode;
Billboard654: TBillboardNode;
Shape655: TShapeNode;
Text656: TTextNode;
FontStyle657: TFontStyleNode;
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
Billboard670: TBillboardNode;
Shape671: TShapeNode;
Text672: TTextNode;
FontStyle673: TFontStyleNode;
HAnimJoint674: THAnimJointNode;
HAnimSegment675: THAnimSegmentNode;
Transform676: TTransformNode;
Transform677: TTransformNode;
Shape678: TShapeNode;
Shape679: TShapeNode;
LineSet680: TLineSetNode;
Coordinate681: TCoordinateNode;
ColorRGBA682: TColorRGBANode;
HAnimJoint683: THAnimJointNode;
HAnimSegment684: THAnimSegmentNode;
Transform685: TTransformNode;
Transform686: TTransformNode;
Shape687: TShapeNode;
Shape688: TShapeNode;
LineSet689: TLineSetNode;
Coordinate690: TCoordinateNode;
ColorRGBA691: TColorRGBANode;
HAnimJoint692: THAnimJointNode;
HAnimSegment693: THAnimSegmentNode;
Transform694: TTransformNode;
Transform695: TTransformNode;
Shape696: TShapeNode;
Shape697: TShapeNode;
LineSet698: TLineSetNode;
Coordinate699: TCoordinateNode;
ColorRGBA700: TColorRGBANode;
HAnimJoint701: THAnimJointNode;
HAnimSegment702: THAnimSegmentNode;
Transform703: TTransformNode;
Transform704: TTransformNode;
Shape705: TShapeNode;
Shape706: TShapeNode;
LineSet707: TLineSetNode;
Coordinate708: TCoordinateNode;
ColorRGBA709: TColorRGBANode;
HAnimSite710: THAnimSiteNode;
TouchSensor711: TTouchSensorNode;
Shape712: TShapeNode;
Billboard713: TBillboardNode;
Shape714: TShapeNode;
Text715: TTextNode;
FontStyle716: TFontStyleNode;
HAnimSite717: THAnimSiteNode;
TouchSensor718: TTouchSensorNode;
Shape719: TShapeNode;
Billboard720: TBillboardNode;
Shape721: TShapeNode;
Text722: TTextNode;
FontStyle723: TFontStyleNode;
Shape724: TShapeNode;
LineSet725: TLineSetNode;
Coordinate726: TCoordinateNode;
ColorRGBA727: TColorRGBANode;
Shape728: TShapeNode;
LineSet729: TLineSetNode;
Coordinate730: TCoordinateNode;
ColorRGBA731: TColorRGBANode;
HAnimJoint732: THAnimJointNode;
HAnimSegment733: THAnimSegmentNode;
Transform734: TTransformNode;
Transform735: TTransformNode;
Shape736: TShapeNode;
Shape737: TShapeNode;
LineSet738: TLineSetNode;
Coordinate739: TCoordinateNode;
ColorRGBA740: TColorRGBANode;
HAnimSite741: THAnimSiteNode;
TouchSensor742: TTouchSensorNode;
Shape743: TShapeNode;
Billboard744: TBillboardNode;
Shape745: TShapeNode;
Text746: TTextNode;
FontStyle747: TFontStyleNode;
HAnimSite748: THAnimSiteNode;
TouchSensor749: TTouchSensorNode;
Shape750: TShapeNode;
Billboard751: TBillboardNode;
Shape752: TShapeNode;
Text753: TTextNode;
FontStyle754: TFontStyleNode;
HAnimJoint755: THAnimJointNode;
HAnimSegment756: THAnimSegmentNode;
Transform757: TTransformNode;
Transform758: TTransformNode;
Shape759: TShapeNode;
Shape760: TShapeNode;
LineSet761: TLineSetNode;
Coordinate762: TCoordinateNode;
ColorRGBA763: TColorRGBANode;
HAnimJoint764: THAnimJointNode;
HAnimSegment765: THAnimSegmentNode;
Transform766: TTransformNode;
Transform767: TTransformNode;
Shape768: TShapeNode;
Shape769: TShapeNode;
LineSet770: TLineSetNode;
Coordinate771: TCoordinateNode;
ColorRGBA772: TColorRGBANode;
HAnimJoint773: THAnimJointNode;
HAnimSegment774: THAnimSegmentNode;
Transform775: TTransformNode;
Transform776: TTransformNode;
Shape777: TShapeNode;
Shape778: TShapeNode;
LineSet779: TLineSetNode;
Coordinate780: TCoordinateNode;
ColorRGBA781: TColorRGBANode;
HAnimJoint782: THAnimJointNode;
HAnimSegment783: THAnimSegmentNode;
Transform784: TTransformNode;
Transform785: TTransformNode;
Shape786: TShapeNode;
Shape787: TShapeNode;
LineSet788: TLineSetNode;
Coordinate789: TCoordinateNode;
ColorRGBA790: TColorRGBANode;
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
Billboard803: TBillboardNode;
Shape804: TShapeNode;
Text805: TTextNode;
FontStyle806: TFontStyleNode;
HAnimJoint807: THAnimJointNode;
HAnimSegment808: THAnimSegmentNode;
Transform809: TTransformNode;
Transform810: TTransformNode;
Shape811: TShapeNode;
Shape812: TShapeNode;
LineSet813: TLineSetNode;
Coordinate814: TCoordinateNode;
ColorRGBA815: TColorRGBANode;
HAnimJoint816: THAnimJointNode;
HAnimSegment817: THAnimSegmentNode;
Transform818: TTransformNode;
Transform819: TTransformNode;
Shape820: TShapeNode;
Shape821: TShapeNode;
LineSet822: TLineSetNode;
Coordinate823: TCoordinateNode;
ColorRGBA824: TColorRGBANode;
HAnimSite825: THAnimSiteNode;
TouchSensor826: TTouchSensorNode;
Shape827: TShapeNode;
Billboard828: TBillboardNode;
Shape829: TShapeNode;
Text830: TTextNode;
FontStyle831: TFontStyleNode;
HAnimSite832: THAnimSiteNode;
TouchSensor833: TTouchSensorNode;
Shape834: TShapeNode;
Billboard835: TBillboardNode;
Shape836: TShapeNode;
Text837: TTextNode;
FontStyle838: TFontStyleNode;
HAnimSite839: THAnimSiteNode;
TouchSensor840: TTouchSensorNode;
Shape841: TShapeNode;
Billboard842: TBillboardNode;
Shape843: TShapeNode;
Text844: TTextNode;
FontStyle845: TFontStyleNode;
HAnimSite846: THAnimSiteNode;
TouchSensor847: TTouchSensorNode;
Shape848: TShapeNode;
Billboard849: TBillboardNode;
Shape850: TShapeNode;
Text851: TTextNode;
FontStyle852: TFontStyleNode;
HAnimSite853: THAnimSiteNode;
TouchSensor854: TTouchSensorNode;
Shape855: TShapeNode;
Billboard856: TBillboardNode;
Shape857: TShapeNode;
Text858: TTextNode;
FontStyle859: TFontStyleNode;
HAnimSite860: THAnimSiteNode;
TouchSensor861: TTouchSensorNode;
Shape862: TShapeNode;
Billboard863: TBillboardNode;
Shape864: TShapeNode;
Text865: TTextNode;
FontStyle866: TFontStyleNode;
HAnimSite867: THAnimSiteNode;
TouchSensor868: TTouchSensorNode;
Shape869: TShapeNode;
Billboard870: TBillboardNode;
Shape871: TShapeNode;
Text872: TTextNode;
FontStyle873: TFontStyleNode;
HAnimSite874: THAnimSiteNode;
TouchSensor875: TTouchSensorNode;
Shape876: TShapeNode;
Billboard877: TBillboardNode;
Shape878: TShapeNode;
Text879: TTextNode;
FontStyle880: TFontStyleNode;
HAnimSite881: THAnimSiteNode;
TouchSensor882: TTouchSensorNode;
Shape883: TShapeNode;
Billboard884: TBillboardNode;
Shape885: TShapeNode;
Text886: TTextNode;
FontStyle887: TFontStyleNode;
HAnimSite888: THAnimSiteNode;
TouchSensor889: TTouchSensorNode;
Shape890: TShapeNode;
Billboard891: TBillboardNode;
Shape892: TShapeNode;
Text893: TTextNode;
FontStyle894: TFontStyleNode;
HAnimSite895: THAnimSiteNode;
TouchSensor896: TTouchSensorNode;
Shape897: TShapeNode;
Billboard898: TBillboardNode;
Shape899: TShapeNode;
Text900: TTextNode;
FontStyle901: TFontStyleNode;
Shape902: TShapeNode;
LineSet903: TLineSetNode;
Coordinate904: TCoordinateNode;
ColorRGBA905: TColorRGBANode;
Shape906: TShapeNode;
LineSet907: TLineSetNode;
Coordinate908: TCoordinateNode;
ColorRGBA909: TColorRGBANode;
Shape910: TShapeNode;
LineSet911: TLineSetNode;
Coordinate912: TCoordinateNode;
ColorRGBA913: TColorRGBANode;
Shape914: TShapeNode;
LineSet915: TLineSetNode;
Coordinate916: TCoordinateNode;
ColorRGBA917: TColorRGBANode;
Shape918: TShapeNode;
LineSet919: TLineSetNode;
Coordinate920: TCoordinateNode;
ColorRGBA921: TColorRGBANode;
Shape922: TShapeNode;
LineSet923: TLineSetNode;
Coordinate924: TCoordinateNode;
ColorRGBA925: TColorRGBANode;
HAnimJoint926: THAnimJointNode;
HAnimJoint927: THAnimJointNode;
HAnimJoint928: THAnimJointNode;
HAnimJoint929: THAnimJointNode;
HAnimJoint930: THAnimJointNode;
HAnimJoint931: THAnimJointNode;
HAnimJoint932: THAnimJointNode;
HAnimJoint933: THAnimJointNode;
HAnimSegment934: THAnimSegmentNode;
Transform935: TTransformNode;
Transform936: TTransformNode;
Shape937: TShapeNode;
Shape938: TShapeNode;
LineSet939: TLineSetNode;
Coordinate940: TCoordinateNode;
ColorRGBA941: TColorRGBANode;
HAnimSite942: THAnimSiteNode;
TouchSensor943: TTouchSensorNode;
Shape944: TShapeNode;
Billboard945: TBillboardNode;
Shape946: TShapeNode;
Text947: TTextNode;
FontStyle948: TFontStyleNode;
HAnimSite949: THAnimSiteNode;
TouchSensor950: TTouchSensorNode;
Shape951: TShapeNode;
Billboard952: TBillboardNode;
Shape953: TShapeNode;
Text954: TTextNode;
FontStyle955: TFontStyleNode;
HAnimSite956: THAnimSiteNode;
TouchSensor957: TTouchSensorNode;
Shape958: TShapeNode;
Billboard959: TBillboardNode;
Shape960: TShapeNode;
Text961: TTextNode;
FontStyle962: TFontStyleNode;
HAnimSite963: THAnimSiteNode;
TouchSensor964: TTouchSensorNode;
Shape965: TShapeNode;
Billboard966: TBillboardNode;
Shape967: TShapeNode;
Text968: TTextNode;
FontStyle969: TFontStyleNode;
HAnimSite970: THAnimSiteNode;
TouchSensor971: TTouchSensorNode;
Shape972: TShapeNode;
Billboard973: TBillboardNode;
Shape974: TShapeNode;
Text975: TTextNode;
FontStyle976: TFontStyleNode;
HAnimJoint977: THAnimJointNode;
HAnimSegment978: THAnimSegmentNode;
Transform979: TTransformNode;
Transform980: TTransformNode;
Shape981: TShapeNode;
Shape982: TShapeNode;
LineSet983: TLineSetNode;
Coordinate984: TCoordinateNode;
ColorRGBA985: TColorRGBANode;
HAnimJoint986: THAnimJointNode;
HAnimSegment987: THAnimSegmentNode;
Transform988: TTransformNode;
Transform989: TTransformNode;
Shape990: TShapeNode;
Shape991: TShapeNode;
LineSet992: TLineSetNode;
Coordinate993: TCoordinateNode;
ColorRGBA994: TColorRGBANode;
HAnimSite995: THAnimSiteNode;
TouchSensor996: TTouchSensorNode;
Shape997: TShapeNode;
Billboard998: TBillboardNode;
Shape999: TShapeNode;
Text1000: TTextNode;
FontStyle1001: TFontStyleNode;
HAnimSite1002: THAnimSiteNode;
TouchSensor1003: TTouchSensorNode;
Shape1004: TShapeNode;
Billboard1005: TBillboardNode;
Shape1006: TShapeNode;
Text1007: TTextNode;
FontStyle1008: TFontStyleNode;
HAnimJoint1009: THAnimJointNode;
HAnimSegment1010: THAnimSegmentNode;
Transform1011: TTransformNode;
Transform1012: TTransformNode;
Shape1013: TShapeNode;
Shape1014: TShapeNode;
LineSet1015: TLineSetNode;
Coordinate1016: TCoordinateNode;
ColorRGBA1017: TColorRGBANode;
HAnimSite1018: THAnimSiteNode;
TouchSensor1019: TTouchSensorNode;
Shape1020: TShapeNode;
Billboard1021: TBillboardNode;
Shape1022: TShapeNode;
Text1023: TTextNode;
FontStyle1024: TFontStyleNode;
HAnimSite1025: THAnimSiteNode;
TouchSensor1026: TTouchSensorNode;
Shape1027: TShapeNode;
Billboard1028: TBillboardNode;
Shape1029: TShapeNode;
Text1030: TTextNode;
FontStyle1031: TFontStyleNode;
HAnimSite1032: THAnimSiteNode;
TouchSensor1033: TTouchSensorNode;
Shape1034: TShapeNode;
Billboard1035: TBillboardNode;
Shape1036: TShapeNode;
Text1037: TTextNode;
FontStyle1038: TFontStyleNode;
HAnimSite1039: THAnimSiteNode;
TouchSensor1040: TTouchSensorNode;
Shape1041: TShapeNode;
Billboard1042: TBillboardNode;
Shape1043: TShapeNode;
Text1044: TTextNode;
FontStyle1045: TFontStyleNode;
HAnimJoint1046: THAnimJointNode;
HAnimSegment1047: THAnimSegmentNode;
Transform1048: TTransformNode;
Transform1049: TTransformNode;
Shape1050: TShapeNode;
Shape1051: TShapeNode;
LineSet1052: TLineSetNode;
Coordinate1053: TCoordinateNode;
ColorRGBA1054: TColorRGBANode;
HAnimSite1055: THAnimSiteNode;
TouchSensor1056: TTouchSensorNode;
Shape1057: TShapeNode;
Billboard1058: TBillboardNode;
Shape1059: TShapeNode;
Text1060: TTextNode;
FontStyle1061: TFontStyleNode;
Shape1062: TShapeNode;
LineSet1063: TLineSetNode;
Coordinate1064: TCoordinateNode;
ColorRGBA1065: TColorRGBANode;
Shape1066: TShapeNode;
LineSet1067: TLineSetNode;
Coordinate1068: TCoordinateNode;
ColorRGBA1069: TColorRGBANode;
Shape1070: TShapeNode;
LineSet1071: TLineSetNode;
Coordinate1072: TCoordinateNode;
ColorRGBA1073: TColorRGBANode;
Shape1074: TShapeNode;
LineSet1075: TLineSetNode;
Coordinate1076: TCoordinateNode;
ColorRGBA1077: TColorRGBANode;
HAnimJoint1078: THAnimJointNode;
HAnimSegment1079: THAnimSegmentNode;
Transform1080: TTransformNode;
Transform1081: TTransformNode;
Shape1082: TShapeNode;
Shape1083: TShapeNode;
LineSet1084: TLineSetNode;
Coordinate1085: TCoordinateNode;
ColorRGBA1086: TColorRGBANode;
HAnimJoint1087: THAnimJointNode;
HAnimSegment1088: THAnimSegmentNode;
Transform1089: TTransformNode;
Transform1090: TTransformNode;
Shape1091: TShapeNode;
Shape1092: TShapeNode;
LineSet1093: TLineSetNode;
Coordinate1094: TCoordinateNode;
ColorRGBA1095: TColorRGBANode;
HAnimJoint1096: THAnimJointNode;
HAnimJoint1097: THAnimJointNode;
HAnimSegment1098: THAnimSegmentNode;
Transform1099: TTransformNode;
Transform1100: TTransformNode;
Shape1101: TShapeNode;
Shape1102: TShapeNode;
LineSet1103: TLineSetNode;
Coordinate1104: TCoordinateNode;
ColorRGBA1105: TColorRGBANode;
HAnimSite1106: THAnimSiteNode;
TouchSensor1107: TTouchSensorNode;
Shape1108: TShapeNode;
Billboard1109: TBillboardNode;
Shape1110: TShapeNode;
Text1111: TTextNode;
FontStyle1112: TFontStyleNode;
HAnimJoint1113: THAnimJointNode;
HAnimSegment1114: THAnimSegmentNode;
Transform1115: TTransformNode;
Transform1116: TTransformNode;
Shape1117: TShapeNode;
Shape1118: TShapeNode;
LineSet1119: TLineSetNode;
Coordinate1120: TCoordinateNode;
ColorRGBA1121: TColorRGBANode;
HAnimJoint1122: THAnimJointNode;
HAnimSegment1123: THAnimSegmentNode;
Transform1124: TTransformNode;
Transform1125: TTransformNode;
Shape1126: TShapeNode;
Shape1127: TShapeNode;
LineSet1128: TLineSetNode;
Coordinate1129: TCoordinateNode;
ColorRGBA1130: TColorRGBANode;
HAnimJoint1131: THAnimJointNode;
HAnimJoint1132: THAnimJointNode;
HAnimSegment1133: THAnimSegmentNode;
Transform1134: TTransformNode;
Transform1135: TTransformNode;
Shape1136: TShapeNode;
Shape1137: TShapeNode;
LineSet1138: TLineSetNode;
Coordinate1139: TCoordinateNode;
ColorRGBA1140: TColorRGBANode;
HAnimSite1141: THAnimSiteNode;
TouchSensor1142: TTouchSensorNode;
Shape1143: TShapeNode;
Billboard1144: TBillboardNode;
Shape1145: TShapeNode;
Text1146: TTextNode;
FontStyle1147: TFontStyleNode;
HAnimJoint1148: THAnimJointNode;
HAnimSegment1149: THAnimSegmentNode;
Transform1150: TTransformNode;
Transform1151: TTransformNode;
Shape1152: TShapeNode;
Shape1153: TShapeNode;
LineSet1154: TLineSetNode;
Coordinate1155: TCoordinateNode;
ColorRGBA1156: TColorRGBANode;
HAnimJoint1157: THAnimJointNode;
HAnimSegment1158: THAnimSegmentNode;
Transform1159: TTransformNode;
Transform1160: TTransformNode;
Shape1161: TShapeNode;
Shape1162: TShapeNode;
LineSet1163: TLineSetNode;
Coordinate1164: TCoordinateNode;
ColorRGBA1165: TColorRGBANode;
HAnimJoint1166: THAnimJointNode;
HAnimJoint1167: THAnimJointNode;
HAnimSegment1168: THAnimSegmentNode;
Transform1169: TTransformNode;
Transform1170: TTransformNode;
Shape1171: TShapeNode;
Shape1172: TShapeNode;
LineSet1173: TLineSetNode;
Coordinate1174: TCoordinateNode;
ColorRGBA1175: TColorRGBANode;
HAnimJoint1176: THAnimJointNode;
HAnimSegment1177: THAnimSegmentNode;
Transform1178: TTransformNode;
Transform1179: TTransformNode;
Shape1180: TShapeNode;
Shape1181: TShapeNode;
LineSet1182: TLineSetNode;
Coordinate1183: TCoordinateNode;
ColorRGBA1184: TColorRGBANode;
HAnimJoint1185: THAnimJointNode;
HAnimSegment1186: THAnimSegmentNode;
Transform1187: TTransformNode;
Transform1188: TTransformNode;
Shape1189: TShapeNode;
Shape1190: TShapeNode;
LineSet1191: TLineSetNode;
Coordinate1192: TCoordinateNode;
ColorRGBA1193: TColorRGBANode;
HAnimJoint1194: THAnimJointNode;
HAnimJoint1195: THAnimJointNode;
HAnimSegment1196: THAnimSegmentNode;
Transform1197: TTransformNode;
Transform1198: TTransformNode;
Shape1199: TShapeNode;
Shape1200: TShapeNode;
LineSet1201: TLineSetNode;
Coordinate1202: TCoordinateNode;
ColorRGBA1203: TColorRGBANode;
HAnimSite1204: THAnimSiteNode;
TouchSensor1205: TTouchSensorNode;
Shape1206: TShapeNode;
Billboard1207: TBillboardNode;
Shape1208: TShapeNode;
Text1209: TTextNode;
FontStyle1210: TFontStyleNode;
HAnimJoint1211: THAnimJointNode;
HAnimSegment1212: THAnimSegmentNode;
Transform1213: TTransformNode;
Transform1214: TTransformNode;
Shape1215: TShapeNode;
Shape1216: TShapeNode;
LineSet1217: TLineSetNode;
Coordinate1218: TCoordinateNode;
ColorRGBA1219: TColorRGBANode;
HAnimJoint1220: THAnimJointNode;
HAnimSegment1221: THAnimSegmentNode;
Transform1222: TTransformNode;
Transform1223: TTransformNode;
Shape1224: TShapeNode;
Shape1225: TShapeNode;
LineSet1226: TLineSetNode;
Coordinate1227: TCoordinateNode;
ColorRGBA1228: TColorRGBANode;
HAnimJoint1229: THAnimJointNode;
HAnimJoint1230: THAnimJointNode;
HAnimSegment1231: THAnimSegmentNode;
Transform1232: TTransformNode;
Transform1233: TTransformNode;
Shape1234: TShapeNode;
Shape1235: TShapeNode;
LineSet1236: TLineSetNode;
Coordinate1237: TCoordinateNode;
ColorRGBA1238: TColorRGBANode;
HAnimSite1239: THAnimSiteNode;
TouchSensor1240: TTouchSensorNode;
Shape1241: TShapeNode;
Billboard1242: TBillboardNode;
Shape1243: TShapeNode;
Text1244: TTextNode;
FontStyle1245: TFontStyleNode;
HAnimSite1246: THAnimSiteNode;
TouchSensor1247: TTouchSensorNode;
Shape1248: TShapeNode;
Billboard1249: TBillboardNode;
Shape1250: TShapeNode;
Text1251: TTextNode;
FontStyle1252: TFontStyleNode;
HAnimSite1253: THAnimSiteNode;
TouchSensor1254: TTouchSensorNode;
Shape1255: TShapeNode;
Billboard1256: TBillboardNode;
Shape1257: TShapeNode;
Text1258: TTextNode;
FontStyle1259: TFontStyleNode;
HAnimSite1260: THAnimSiteNode;
TouchSensor1261: TTouchSensorNode;
Shape1262: TShapeNode;
Billboard1263: TBillboardNode;
Shape1264: TShapeNode;
Text1265: TTextNode;
FontStyle1266: TFontStyleNode;
HAnimSite1267: THAnimSiteNode;
TouchSensor1268: TTouchSensorNode;
Shape1269: TShapeNode;
Billboard1270: TBillboardNode;
Shape1271: TShapeNode;
Text1272: TTextNode;
FontStyle1273: TFontStyleNode;
HAnimJoint1274: THAnimJointNode;
HAnimSegment1275: THAnimSegmentNode;
Transform1276: TTransformNode;
Transform1277: TTransformNode;
Shape1278: TShapeNode;
Shape1279: TShapeNode;
LineSet1280: TLineSetNode;
Coordinate1281: TCoordinateNode;
ColorRGBA1282: TColorRGBANode;
HAnimJoint1283: THAnimJointNode;
HAnimSegment1284: THAnimSegmentNode;
Transform1285: TTransformNode;
Transform1286: TTransformNode;
Shape1287: TShapeNode;
Shape1288: TShapeNode;
LineSet1289: TLineSetNode;
Coordinate1290: TCoordinateNode;
ColorRGBA1291: TColorRGBANode;
HAnimSite1292: THAnimSiteNode;
TouchSensor1293: TTouchSensorNode;
Shape1294: TShapeNode;
Billboard1295: TBillboardNode;
Shape1296: TShapeNode;
Text1297: TTextNode;
FontStyle1298: TFontStyleNode;
HAnimSite1299: THAnimSiteNode;
TouchSensor1300: TTouchSensorNode;
Shape1301: TShapeNode;
Billboard1302: TBillboardNode;
Shape1303: TShapeNode;
Text1304: TTextNode;
FontStyle1305: TFontStyleNode;
HAnimJoint1306: THAnimJointNode;
HAnimSegment1307: THAnimSegmentNode;
Transform1308: TTransformNode;
Transform1309: TTransformNode;
Shape1310: TShapeNode;
Shape1311: TShapeNode;
LineSet1312: TLineSetNode;
Coordinate1313: TCoordinateNode;
ColorRGBA1314: TColorRGBANode;
HAnimSite1315: THAnimSiteNode;
TouchSensor1316: TTouchSensorNode;
Shape1317: TShapeNode;
Billboard1318: TBillboardNode;
Shape1319: TShapeNode;
Text1320: TTextNode;
FontStyle1321: TFontStyleNode;
HAnimSite1322: THAnimSiteNode;
TouchSensor1323: TTouchSensorNode;
Shape1324: TShapeNode;
Billboard1325: TBillboardNode;
Shape1326: TShapeNode;
Text1327: TTextNode;
FontStyle1328: TFontStyleNode;
HAnimSite1329: THAnimSiteNode;
TouchSensor1330: TTouchSensorNode;
Shape1331: TShapeNode;
Billboard1332: TBillboardNode;
Shape1333: TShapeNode;
Text1334: TTextNode;
FontStyle1335: TFontStyleNode;
HAnimSite1336: THAnimSiteNode;
TouchSensor1337: TTouchSensorNode;
Shape1338: TShapeNode;
Billboard1339: TBillboardNode;
Shape1340: TShapeNode;
Text1341: TTextNode;
FontStyle1342: TFontStyleNode;
HAnimJoint1343: THAnimJointNode;
HAnimSegment1344: THAnimSegmentNode;
Transform1345: TTransformNode;
Transform1346: TTransformNode;
Shape1347: TShapeNode;
Shape1348: TShapeNode;
LineSet1349: TLineSetNode;
Coordinate1350: TCoordinateNode;
ColorRGBA1351: TColorRGBANode;
HAnimSite1352: THAnimSiteNode;
TouchSensor1353: TTouchSensorNode;
Shape1354: TShapeNode;
Billboard1355: TBillboardNode;
Shape1356: TShapeNode;
Text1357: TTextNode;
FontStyle1358: TFontStyleNode;
Shape1359: TShapeNode;
LineSet1360: TLineSetNode;
Coordinate1361: TCoordinateNode;
ColorRGBA1362: TColorRGBANode;
Shape1363: TShapeNode;
LineSet1364: TLineSetNode;
Coordinate1365: TCoordinateNode;
ColorRGBA1366: TColorRGBANode;
Shape1367: TShapeNode;
LineSet1368: TLineSetNode;
Coordinate1369: TCoordinateNode;
ColorRGBA1370: TColorRGBANode;
Shape1371: TShapeNode;
LineSet1372: TLineSetNode;
Coordinate1373: TCoordinateNode;
ColorRGBA1374: TColorRGBANode;
HAnimJoint1375: THAnimJointNode;
HAnimSegment1376: THAnimSegmentNode;
Transform1377: TTransformNode;
Transform1378: TTransformNode;
Shape1379: TShapeNode;
Shape1380: TShapeNode;
LineSet1381: TLineSetNode;
Coordinate1382: TCoordinateNode;
ColorRGBA1383: TColorRGBANode;
HAnimJoint1384: THAnimJointNode;
HAnimSegment1385: THAnimSegmentNode;
Transform1386: TTransformNode;
Transform1387: TTransformNode;
Shape1388: TShapeNode;
Shape1389: TShapeNode;
LineSet1390: TLineSetNode;
Coordinate1391: TCoordinateNode;
ColorRGBA1392: TColorRGBANode;
HAnimJoint1393: THAnimJointNode;
HAnimJoint1394: THAnimJointNode;
HAnimSegment1395: THAnimSegmentNode;
Transform1396: TTransformNode;
Transform1397: TTransformNode;
Shape1398: TShapeNode;
Shape1399: TShapeNode;
LineSet1400: TLineSetNode;
Coordinate1401: TCoordinateNode;
ColorRGBA1402: TColorRGBANode;
HAnimSite1403: THAnimSiteNode;
TouchSensor1404: TTouchSensorNode;
Shape1405: TShapeNode;
Billboard1406: TBillboardNode;
Shape1407: TShapeNode;
Text1408: TTextNode;
FontStyle1409: TFontStyleNode;
HAnimJoint1410: THAnimJointNode;
HAnimSegment1411: THAnimSegmentNode;
Transform1412: TTransformNode;
Transform1413: TTransformNode;
Shape1414: TShapeNode;
Shape1415: TShapeNode;
LineSet1416: TLineSetNode;
Coordinate1417: TCoordinateNode;
ColorRGBA1418: TColorRGBANode;
HAnimJoint1419: THAnimJointNode;
HAnimSegment1420: THAnimSegmentNode;
Transform1421: TTransformNode;
Transform1422: TTransformNode;
Shape1423: TShapeNode;
Shape1424: TShapeNode;
LineSet1425: TLineSetNode;
Coordinate1426: TCoordinateNode;
ColorRGBA1427: TColorRGBANode;
HAnimJoint1428: THAnimJointNode;
HAnimJoint1429: THAnimJointNode;
HAnimSegment1430: THAnimSegmentNode;
Transform1431: TTransformNode;
Transform1432: TTransformNode;
Shape1433: TShapeNode;
Shape1434: TShapeNode;
LineSet1435: TLineSetNode;
Coordinate1436: TCoordinateNode;
ColorRGBA1437: TColorRGBANode;
HAnimSite1438: THAnimSiteNode;
TouchSensor1439: TTouchSensorNode;
Shape1440: TShapeNode;
Billboard1441: TBillboardNode;
Shape1442: TShapeNode;
Text1443: TTextNode;
FontStyle1444: TFontStyleNode;
HAnimJoint1445: THAnimJointNode;
HAnimSegment1446: THAnimSegmentNode;
Transform1447: TTransformNode;
Transform1448: TTransformNode;
Shape1449: TShapeNode;
Shape1450: TShapeNode;
LineSet1451: TLineSetNode;
Coordinate1452: TCoordinateNode;
ColorRGBA1453: TColorRGBANode;
HAnimJoint1454: THAnimJointNode;
HAnimSegment1455: THAnimSegmentNode;
Transform1456: TTransformNode;
Transform1457: TTransformNode;
Shape1458: TShapeNode;
Shape1459: TShapeNode;
LineSet1460: TLineSetNode;
Coordinate1461: TCoordinateNode;
ColorRGBA1462: TColorRGBANode;
HAnimJoint1463: THAnimJointNode;
HAnimJoint1464: THAnimJointNode;
HAnimSegment1465: THAnimSegmentNode;
Transform1466: TTransformNode;
Transform1467: TTransformNode;
Shape1468: TShapeNode;
Shape1469: TShapeNode;
LineSet1470: TLineSetNode;
Coordinate1471: TCoordinateNode;
ColorRGBA1472: TColorRGBANode;
HAnimJoint1473: THAnimJointNode;
HAnimSegment1474: THAnimSegmentNode;
Transform1475: TTransformNode;
Transform1476: TTransformNode;
Shape1477: TShapeNode;
Shape1478: TShapeNode;
LineSet1479: TLineSetNode;
Coordinate1480: TCoordinateNode;
ColorRGBA1481: TColorRGBANode;
HAnimJoint1482: THAnimJointNode;
HAnimSegment1483: THAnimSegmentNode;
Transform1484: TTransformNode;
Transform1485: TTransformNode;
Shape1486: TShapeNode;
Shape1487: TShapeNode;
LineSet1488: TLineSetNode;
Coordinate1489: TCoordinateNode;
ColorRGBA1490: TColorRGBANode;
HAnimJoint1491: THAnimJointNode;
HAnimJoint1492: THAnimJointNode;
HAnimSegment1493: THAnimSegmentNode;
Transform1494: TTransformNode;
Transform1495: TTransformNode;
Shape1496: TShapeNode;
Shape1497: TShapeNode;
LineSet1498: TLineSetNode;
Coordinate1499: TCoordinateNode;
ColorRGBA1500: TColorRGBANode;
HAnimSite1501: THAnimSiteNode;
TouchSensor1502: TTouchSensorNode;
Shape1503: TShapeNode;
Billboard1504: TBillboardNode;
Shape1505: TShapeNode;
Text1506: TTextNode;
FontStyle1507: TFontStyleNode;
HAnimJoint1508: THAnimJointNode;
HAnimSegment1509: THAnimSegmentNode;
Transform1510: TTransformNode;
Transform1511: TTransformNode;
Shape1512: TShapeNode;
Shape1513: TShapeNode;
LineSet1514: TLineSetNode;
Coordinate1515: TCoordinateNode;
ColorRGBA1516: TColorRGBANode;
HAnimJoint1517: THAnimJointNode;
HAnimSegment1518: THAnimSegmentNode;
Transform1519: TTransformNode;
Transform1520: TTransformNode;
Shape1521: TShapeNode;
Shape1522: TShapeNode;
LineSet1523: TLineSetNode;
Coordinate1524: TCoordinateNode;
ColorRGBA1525: TColorRGBANode;
HAnimJoint1526: THAnimJointNode;
HAnimJoint1527: THAnimJointNode;
HAnimJoint1528: THAnimJointNode;
HAnimJoint1529: THAnimJointNode;
HAnimJoint1530: THAnimJointNode;
HAnimJoint1531: THAnimJointNode;
HAnimJoint1532: THAnimJointNode;
HAnimJoint1533: THAnimJointNode;
HAnimJoint1534: THAnimJointNode;
HAnimJoint1535: THAnimJointNode;
HAnimJoint1536: THAnimJointNode;
HAnimJoint1537: THAnimJointNode;
HAnimJoint1538: THAnimJointNode;
HAnimJoint1539: THAnimJointNode;
HAnimJoint1540: THAnimJointNode;
HAnimJoint1541: THAnimJointNode;
HAnimJoint1542: THAnimJointNode;
HAnimJoint1543: THAnimJointNode;
HAnimJoint1544: THAnimJointNode;
HAnimJoint1545: THAnimJointNode;
HAnimJoint1546: THAnimJointNode;
HAnimJoint1547: THAnimJointNode;
HAnimJoint1548: THAnimJointNode;
HAnimJoint1549: THAnimJointNode;
HAnimJoint1550: THAnimJointNode;
HAnimJoint1551: THAnimJointNode;
HAnimJoint1552: THAnimJointNode;
HAnimJoint1553: THAnimJointNode;
HAnimJoint1554: THAnimJointNode;
HAnimJoint1555: THAnimJointNode;
HAnimJoint1556: THAnimJointNode;
HAnimJoint1557: THAnimJointNode;
HAnimJoint1558: THAnimJointNode;
HAnimJoint1559: THAnimJointNode;
HAnimJoint1560: THAnimJointNode;
HAnimJoint1561: THAnimJointNode;
HAnimJoint1562: THAnimJointNode;
HAnimJoint1563: THAnimJointNode;
HAnimJoint1564: THAnimJointNode;
HAnimJoint1565: THAnimJointNode;
HAnimJoint1566: THAnimJointNode;
HAnimJoint1567: THAnimJointNode;
HAnimJoint1568: THAnimJointNode;
HAnimJoint1569: THAnimJointNode;
HAnimJoint1570: THAnimJointNode;
HAnimJoint1571: THAnimJointNode;
HAnimJoint1572: THAnimJointNode;
HAnimJoint1573: THAnimJointNode;
HAnimJoint1574: THAnimJointNode;
HAnimJoint1575: THAnimJointNode;
HAnimJoint1576: THAnimJointNode;
HAnimJoint1577: THAnimJointNode;
HAnimJoint1578: THAnimJointNode;
HAnimJoint1579: THAnimJointNode;
HAnimJoint1580: THAnimJointNode;
HAnimJoint1581: THAnimJointNode;
HAnimJoint1582: THAnimJointNode;
HAnimJoint1583: THAnimJointNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'Humanoid3.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d';
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
X3D0.Meta['generator'] := 'h2.pl';
X3D0.Meta['modified'] := '14 Jan 2023';
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
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,0,0);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Transform18.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.05,0);
Shape25 := TShapeNode.Create;
LineSet26 := TLineSetNode.Create;
LineSet26.SetVertexCount([2]);
ColorRGBA27 := TColorRGBANode.Create;
ColorRGBA27.SetColor([Vector4(1,1,0,0),Vector4(1,1,0,0)]);
{ .SetColor }
LineSet26.Color := ColorRGBA27;
Coordinate28 := TCoordinateNode.Create;
Coordinate28.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ .SetCoord }
LineSet26.Coord := Coordinate28;
{ .SetGeometry }
Shape25.Geometry := LineSet26;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform18.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.1,0);
Shape30 := TShapeNode.Create;
IndexedFaceSet31 := TIndexedFaceSetNode.Create;
IndexedFaceSet31.CreaseAngle := 0.5;
IndexedFaceSet31.Solid := False;
IndexedFaceSet31.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
IndexedFaceSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet31.Coord := Coordinate33;
{ .SetGeometry }
Shape30.Geometry := IndexedFaceSet31;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.DiffuseColor := Vector3(1,1,1);
Material35.Transparency := 1;
{ .SetMaterial }
Appearance34.Material := Material35;
{ .SetAppearance }
Shape30.Appearance := Appearance34;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Transform18.AddChildren([Transform29]);
{ .AddChildren }
Group17.AddChildren([Transform18]);
{ .AddChildren }
Group11.AddChildren([Group17]);
NavigationInfo36 := TNavigationInfoNode.Create;
NavigationInfo36.Speed := 1.5;
{ .AddChildren }
Group11.AddChildren([NavigationInfo36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Position := Vector3(0,1,3);
Viewpoint37.CenterOfRotation := Vector3(0,1,0);
Viewpoint37.Description := 'default';
{ .AddChildren }
Group11.AddChildren([Viewpoint37]);
HAnimHumanoid38 := THAnimHumanoidNode.Create;
HAnimHumanoid38.NameField := 'HAnim';
HAnimHumanoid38.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid38.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
Shape39 := TShapeNode.Create;
IndexedFaceSet40 := TIndexedFaceSetNode.Create;
IndexedFaceSet40.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet40.CreaseAngle := 3.1;
Coordinate41 := TCoordinateNode.Create;
Coordinate41.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetCoord }
IndexedFaceSet40.Coord := Coordinate41;
Color42 := TColorNode.Create;
Color42.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ .SetColor }
IndexedFaceSet40.Color := Color42;
{ .SetGeometry }
Shape39.Geometry := IndexedFaceSet40;
Appearance43 := TAppearanceNode.Create;
ImageTexture44 := TImageTextureNode.Create;
ImageTexture44.Description := 'Blue Spiral Pattern';
ImageTexture44.SetUrl(['../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ .SetTexture }
Appearance43.Texture := ImageTexture44;
Material45 := TMaterialNode.Create;
Material45.AmbientIntensity := 0.6;
Material45.DiffuseColor := Vector3(1,1,1);
Material45.Shininess := 0.6;
Material45.Transparency := 1;
{ .SetMaterial }
Appearance43.Material := Material45;
{ .SetAppearance }
Shape39.Appearance := Appearance43;
{ .SetSkin }
HAnimHumanoid38.SetSkin([Shape39]);
Coordinate46 := TCoordinateNode.Create;
Coordinate46 := Coordinate41;
{ .SetSkinCoord }
HAnimHumanoid38.SetSkinCoord(Coordinate46);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'humanoid_root';
HAnimJoint47.Center := Vector3(0,0.824,0.0277);
HAnimJoint47.SetUlimit([0,0,0]);
HAnimJoint47.SetLlimit([0,0,0]);
HAnimSegment48 := THAnimSegmentNode.Create;
HAnimSegment48.NameField := 'sacrum';
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0.824,0.0277);
Transform50 := TTransformNode.Create;
{ Empty Transform }
Shape51 := TShapeNode.Create;
Shape51 := Shape20;
{ .AddChild }
Transform50.AddChildren([Shape51]);
{ .AddChildren }
Transform49.AddChildren([Transform50]);
{ .AddChildren }
HAnimSegment48.AddChildren([Transform49]);
Shape52 := TShapeNode.Create;
LineSet53 := TLineSetNode.Create;
LineSet53.SetVertexCount([2]);
Coordinate54 := TCoordinateNode.Create;
Coordinate54.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
LineSet53.Coord := Coordinate54;
{ from humanoid_root to sacroiliac vertices 2 }
ColorRGBA55 := TColorRGBANode.Create;
ColorRGBA55 := ColorRGBA27;
{ .SetColor }
LineSet53.Color := ColorRGBA55;
{ .SetGeometry }
Shape52.Geometry := LineSet53;
{ .AddChildren }
HAnimSegment48.AddChildren([Shape52]);
Shape56 := TShapeNode.Create;
LineSet57 := TLineSetNode.Create;
LineSet57.SetVertexCount([2]);
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ .SetCoord }
LineSet57.Coord := Coordinate58;
{ from humanoid_root to vl5 vertices 2 }
ColorRGBA59 := TColorRGBANode.Create;
ColorRGBA59 := ColorRGBA27;
{ .SetColor }
LineSet57.Color := ColorRGBA59;
{ .SetGeometry }
Shape56.Geometry := LineSet57;
{ .AddChildren }
HAnimSegment48.AddChildren([Shape56]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimSegment48]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'sacroiliac';
HAnimJoint60.Center := Vector3(0,0.9149,0.0016);
HAnimJoint60.SetUlimit([0,0,0]);
HAnimJoint60.SetLlimit([0,0,0]);
HAnimSegment61 := THAnimSegmentNode.Create;
HAnimSegment61.NameField := 'pelvis';
Transform62 := TTransformNode.Create;
Transform62.Translation := Vector3(0,0.9149,0.0016);
Transform63 := TTransformNode.Create;
{ Empty Transform }
Shape64 := TShapeNode.Create;
Shape64 := Shape20;
{ .AddChild }
Transform63.AddChildren([Shape64]);
{ .AddChildren }
Transform62.AddChildren([Transform63]);
{ .AddChildren }
HAnimSegment61.AddChildren([Transform62]);
Shape65 := TShapeNode.Create;
LineSet66 := TLineSetNode.Create;
LineSet66.SetVertexCount([2]);
Coordinate67 := TCoordinateNode.Create;
Coordinate67.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ .SetCoord }
LineSet66.Coord := Coordinate67;
{ from sacroiliac to l_hip vertices 2 }
ColorRGBA68 := TColorRGBANode.Create;
ColorRGBA68 := ColorRGBA27;
{ .SetColor }
LineSet66.Color := ColorRGBA68;
{ .SetGeometry }
Shape65.Geometry := LineSet66;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape65]);
HAnimSite69 := THAnimSiteNode.Create;
HAnimSite69.NameField := 'buttocks_standing_wall_contact_point';
TouchSensor70 := TTouchSensorNode.Create;
TouchSensor70.Description := 'HAnimSite 93 buttocks_standing_wall_contact_point';
{ .AddChildren }
HAnimSite69.AddChildren([TouchSensor70]);
Shape71 := TShapeNode.Create;
Shape71 := Shape30;
{ .AddChildren }
HAnimSite69.AddChildren([Shape71]);
Billboard72 := TBillboardNode.Create;
Shape73 := TShapeNode.Create;
Text74 := TTextNode.Create;
Text74.SetText(['93']);
FontStyle75 := TFontStyleNode.Create;
FontStyle75.Size := 0.035;
{ .SetFontStyle }
Text74.FontStyle := FontStyle75;
{ .SetGeometry }
Shape73.Geometry := Text74;
{ .AddChildren }
Billboard72.AddChildren([Shape73]);
{ .AddChildren }
HAnimSite69.AddChildren([Billboard72]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite69]);
HAnimSite76 := THAnimSiteNode.Create;
HAnimSite76.NameField := 'crotch';
HAnimSite76.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'HAnimSite 38 crotch';
{ .AddChildren }
HAnimSite76.AddChildren([TouchSensor77]);
Shape78 := TShapeNode.Create;
Shape78 := Shape30;
{ .AddChildren }
HAnimSite76.AddChildren([Shape78]);
Billboard79 := TBillboardNode.Create;
Shape80 := TShapeNode.Create;
Text81 := TTextNode.Create;
Text81.SetText(['38']);
FontStyle82 := TFontStyleNode.Create;
FontStyle82.Size := 0.035;
{ .SetFontStyle }
Text81.FontStyle := FontStyle82;
{ .SetGeometry }
Shape80.Geometry := Text81;
{ .AddChildren }
Billboard79.AddChildren([Shape80]);
{ .AddChildren }
HAnimSite76.AddChildren([Billboard79]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite76]);
HAnimSite83 := THAnimSiteNode.Create;
HAnimSite83.NameField := 'l_asis';
HAnimSite83.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'HAnimSite 32 l_asis';
{ .AddChildren }
HAnimSite83.AddChildren([TouchSensor84]);
Shape85 := TShapeNode.Create;
Shape85 := Shape30;
{ .AddChildren }
HAnimSite83.AddChildren([Shape85]);
Billboard86 := TBillboardNode.Create;
Shape87 := TShapeNode.Create;
Text88 := TTextNode.Create;
Text88.SetText(['32']);
FontStyle89 := TFontStyleNode.Create;
FontStyle89.Size := 0.035;
{ .SetFontStyle }
Text88.FontStyle := FontStyle89;
{ .SetGeometry }
Shape87.Geometry := Text88;
{ .AddChildren }
Billboard86.AddChildren([Shape87]);
{ .AddChildren }
HAnimSite83.AddChildren([Billboard86]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite83]);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.NameField := 'l_iliocristale';
HAnimSite90.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'HAnimSite 33 l_iliocristale';
{ .AddChildren }
HAnimSite90.AddChildren([TouchSensor91]);
Shape92 := TShapeNode.Create;
Shape92 := Shape30;
{ .AddChildren }
HAnimSite90.AddChildren([Shape92]);
Billboard93 := TBillboardNode.Create;
Shape94 := TShapeNode.Create;
Text95 := TTextNode.Create;
Text95.SetText(['33']);
FontStyle96 := TFontStyleNode.Create;
FontStyle96.Size := 0.035;
{ .SetFontStyle }
Text95.FontStyle := FontStyle96;
{ .SetGeometry }
Shape94.Geometry := Text95;
{ .AddChildren }
Billboard93.AddChildren([Shape94]);
{ .AddChildren }
HAnimSite90.AddChildren([Billboard93]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite90]);
HAnimSite97 := THAnimSiteNode.Create;
HAnimSite97.NameField := 'l_psis';
HAnimSite97.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor98 := TTouchSensorNode.Create;
TouchSensor98.Description := 'HAnimSite 34 l_psis';
{ .AddChildren }
HAnimSite97.AddChildren([TouchSensor98]);
Shape99 := TShapeNode.Create;
Shape99 := Shape30;
{ .AddChildren }
HAnimSite97.AddChildren([Shape99]);
Billboard100 := TBillboardNode.Create;
Shape101 := TShapeNode.Create;
Text102 := TTextNode.Create;
Text102.SetText(['34']);
FontStyle103 := TFontStyleNode.Create;
FontStyle103.Size := 0.035;
{ .SetFontStyle }
Text102.FontStyle := FontStyle103;
{ .SetGeometry }
Shape101.Geometry := Text102;
{ .AddChildren }
Billboard100.AddChildren([Shape101]);
{ .AddChildren }
HAnimSite97.AddChildren([Billboard100]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite97]);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.NameField := 'l_trochanterion';
HAnimSite104.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor105 := TTouchSensorNode.Create;
TouchSensor105.Description := 'HAnimSite 42 l_trochanterion';
{ .AddChildren }
HAnimSite104.AddChildren([TouchSensor105]);
Shape106 := TShapeNode.Create;
Shape106 := Shape30;
{ .AddChildren }
HAnimSite104.AddChildren([Shape106]);
Billboard107 := TBillboardNode.Create;
Shape108 := TShapeNode.Create;
Text109 := TTextNode.Create;
Text109.SetText(['42']);
FontStyle110 := TFontStyleNode.Create;
FontStyle110.Size := 0.035;
{ .SetFontStyle }
Text109.FontStyle := FontStyle110;
{ .SetGeometry }
Shape108.Geometry := Text109;
{ .AddChildren }
Billboard107.AddChildren([Shape108]);
{ .AddChildren }
HAnimSite104.AddChildren([Billboard107]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite104]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'r_asis';
HAnimSite111.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor112 := TTouchSensorNode.Create;
TouchSensor112.Description := 'HAnimSite 35 r_asis';
{ .AddChildren }
HAnimSite111.AddChildren([TouchSensor112]);
Shape113 := TShapeNode.Create;
Shape113 := Shape30;
{ .AddChildren }
HAnimSite111.AddChildren([Shape113]);
Billboard114 := TBillboardNode.Create;
Shape115 := TShapeNode.Create;
Text116 := TTextNode.Create;
Text116.SetText(['35']);
FontStyle117 := TFontStyleNode.Create;
FontStyle117.Size := 0.035;
{ .SetFontStyle }
Text116.FontStyle := FontStyle117;
{ .SetGeometry }
Shape115.Geometry := Text116;
{ .AddChildren }
Billboard114.AddChildren([Shape115]);
{ .AddChildren }
HAnimSite111.AddChildren([Billboard114]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite111]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'r_iliocristale';
HAnimSite118.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor119 := TTouchSensorNode.Create;
TouchSensor119.Description := 'HAnimSite 36 r_iliocristale';
{ .AddChildren }
HAnimSite118.AddChildren([TouchSensor119]);
Shape120 := TShapeNode.Create;
Shape120 := Shape30;
{ .AddChildren }
HAnimSite118.AddChildren([Shape120]);
Billboard121 := TBillboardNode.Create;
Shape122 := TShapeNode.Create;
Text123 := TTextNode.Create;
Text123.SetText(['36']);
FontStyle124 := TFontStyleNode.Create;
FontStyle124.Size := 0.035;
{ .SetFontStyle }
Text123.FontStyle := FontStyle124;
{ .SetGeometry }
Shape122.Geometry := Text123;
{ .AddChildren }
Billboard121.AddChildren([Shape122]);
{ .AddChildren }
HAnimSite118.AddChildren([Billboard121]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite118]);
HAnimSite125 := THAnimSiteNode.Create;
HAnimSite125.NameField := 'r_psis';
HAnimSite125.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.Description := 'HAnimSite 37 r_psis';
{ .AddChildren }
HAnimSite125.AddChildren([TouchSensor126]);
Shape127 := TShapeNode.Create;
Shape127 := Shape30;
{ .AddChildren }
HAnimSite125.AddChildren([Shape127]);
Billboard128 := TBillboardNode.Create;
Shape129 := TShapeNode.Create;
Text130 := TTextNode.Create;
Text130.SetText(['37']);
FontStyle131 := TFontStyleNode.Create;
FontStyle131.Size := 0.035;
{ .SetFontStyle }
Text130.FontStyle := FontStyle131;
{ .SetGeometry }
Shape129.Geometry := Text130;
{ .AddChildren }
Billboard128.AddChildren([Shape129]);
{ .AddChildren }
HAnimSite125.AddChildren([Billboard128]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite125]);
HAnimSite132 := THAnimSiteNode.Create;
HAnimSite132.NameField := 'r_trochanterion';
HAnimSite132.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor133 := TTouchSensorNode.Create;
TouchSensor133.Description := 'HAnimSite 46 r_trochanterion';
{ .AddChildren }
HAnimSite132.AddChildren([TouchSensor133]);
Shape134 := TShapeNode.Create;
Shape134 := Shape30;
{ .AddChildren }
HAnimSite132.AddChildren([Shape134]);
Billboard135 := TBillboardNode.Create;
Shape136 := TShapeNode.Create;
Text137 := TTextNode.Create;
Text137.SetText(['46']);
FontStyle138 := TFontStyleNode.Create;
FontStyle138.Size := 0.035;
{ .SetFontStyle }
Text137.FontStyle := FontStyle138;
{ .SetGeometry }
Shape136.Geometry := Text137;
{ .AddChildren }
Billboard135.AddChildren([Shape136]);
{ .AddChildren }
HAnimSite132.AddChildren([Billboard135]);
{ .AddChildren }
HAnimSegment61.AddChildren([HAnimSite132]);
Shape139 := TShapeNode.Create;
LineSet140 := TLineSetNode.Create;
LineSet140.SetVertexCount([2]);
Coordinate141 := TCoordinateNode.Create;
Coordinate141.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ .SetCoord }
LineSet140.Coord := Coordinate141;
{ from sacroiliac to r_hip vertices 2 }
ColorRGBA142 := TColorRGBANode.Create;
ColorRGBA142 := ColorRGBA27;
{ .SetColor }
LineSet140.Color := ColorRGBA142;
{ .SetGeometry }
Shape139.Geometry := LineSet140;
{ .AddChildren }
HAnimSegment61.AddChildren([Shape139]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimSegment61]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'l_hip';
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint143.SetUlimit([0,0,0]);
HAnimJoint143.SetLlimit([0,0,0]);
HAnimSegment144 := THAnimSegmentNode.Create;
HAnimSegment144.NameField := 'l_thigh';
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform146 := TTransformNode.Create;
{ Empty Transform }
Shape147 := TShapeNode.Create;
Shape147 := Shape20;
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
ColorRGBA151 := ColorRGBA27;
{ .SetColor }
LineSet149.Color := ColorRGBA151;
{ .SetGeometry }
Shape148.Geometry := LineSet149;
{ .AddChildren }
HAnimSegment144.AddChildren([Shape148]);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.NameField := 'l_femoral_lateral_epicondyles';
HAnimSite152.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor153 := TTouchSensorNode.Create;
TouchSensor153.Description := 'HAnimSite 40 l_femoral_lateral_epicondyles';
{ .AddChildren }
HAnimSite152.AddChildren([TouchSensor153]);
Shape154 := TShapeNode.Create;
Shape154 := Shape30;
{ .AddChildren }
HAnimSite152.AddChildren([Shape154]);
Billboard155 := TBillboardNode.Create;
Shape156 := TShapeNode.Create;
Text157 := TTextNode.Create;
Text157.SetText(['40']);
FontStyle158 := TFontStyleNode.Create;
FontStyle158.Size := 0.035;
{ .SetFontStyle }
Text157.FontStyle := FontStyle158;
{ .SetGeometry }
Shape156.Geometry := Text157;
{ .AddChildren }
Billboard155.AddChildren([Shape156]);
{ .AddChildren }
HAnimSite152.AddChildren([Billboard155]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite152]);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'l_femoral_medial_epicondyles';
HAnimSite159.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'HAnimSite 39 l_femoral_medial_epicondyles';
{ .AddChildren }
HAnimSite159.AddChildren([TouchSensor160]);
Shape161 := TShapeNode.Create;
Shape161 := Shape30;
{ .AddChildren }
HAnimSite159.AddChildren([Shape161]);
Billboard162 := TBillboardNode.Create;
Shape163 := TShapeNode.Create;
Text164 := TTextNode.Create;
Text164.SetText(['39']);
FontStyle165 := TFontStyleNode.Create;
FontStyle165.Size := 0.035;
{ .SetFontStyle }
Text164.FontStyle := FontStyle165;
{ .SetGeometry }
Shape163.Geometry := Text164;
{ .AddChildren }
Billboard162.AddChildren([Shape163]);
{ .AddChildren }
HAnimSite159.AddChildren([Billboard162]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite159]);
HAnimSite166 := THAnimSiteNode.Create;
HAnimSite166.NameField := 'l_knee_crease';
HAnimSite166.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor167 := TTouchSensorNode.Create;
TouchSensor167.Description := 'HAnimSite 90 l_knee_crease';
{ .AddChildren }
HAnimSite166.AddChildren([TouchSensor167]);
Shape168 := TShapeNode.Create;
Shape168 := Shape30;
{ .AddChildren }
HAnimSite166.AddChildren([Shape168]);
Billboard169 := TBillboardNode.Create;
Shape170 := TShapeNode.Create;
Text171 := TTextNode.Create;
Text171.SetText(['90']);
FontStyle172 := TFontStyleNode.Create;
FontStyle172.Size := 0.035;
{ .SetFontStyle }
Text171.FontStyle := FontStyle172;
{ .SetGeometry }
Shape170.Geometry := Text171;
{ .AddChildren }
Billboard169.AddChildren([Shape170]);
{ .AddChildren }
HAnimSite166.AddChildren([Billboard169]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite166]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'l_suprapatella';
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimSite 41 l_suprapatella';
{ .AddChildren }
HAnimSite173.AddChildren([TouchSensor174]);
Shape175 := TShapeNode.Create;
Shape175 := Shape30;
{ .AddChildren }
HAnimSite173.AddChildren([Shape175]);
Billboard176 := TBillboardNode.Create;
Shape177 := TShapeNode.Create;
Text178 := TTextNode.Create;
Text178.SetText(['41']);
FontStyle179 := TFontStyleNode.Create;
FontStyle179.Size := 0.035;
{ .SetFontStyle }
Text178.FontStyle := FontStyle179;
{ .SetGeometry }
Shape177.Geometry := Text178;
{ .AddChildren }
Billboard176.AddChildren([Shape177]);
{ .AddChildren }
HAnimSite173.AddChildren([Billboard176]);
{ .AddChildren }
HAnimSegment144.AddChildren([HAnimSite173]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimSegment144]);
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180.NameField := 'l_knee';
HAnimJoint180.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint180.SetUlimit([0,0,0]);
HAnimJoint180.SetLlimit([0,0,0]);
HAnimSegment181 := THAnimSegmentNode.Create;
HAnimSegment181.NameField := 'l_calf';
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.104,0.4867,0.0308);
Transform183 := TTransformNode.Create;
{ Empty Transform }
Shape184 := TShapeNode.Create;
Shape184 := Shape20;
{ .AddChild }
Transform183.AddChildren([Shape184]);
{ .AddChildren }
Transform182.AddChildren([Transform183]);
{ .AddChildren }
HAnimSegment181.AddChildren([Transform182]);
Shape185 := TShapeNode.Create;
LineSet186 := TLineSetNode.Create;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ .SetCoord }
LineSet186.Coord := Coordinate187;
{ from l_knee to l_talocrural vertices 2 }
ColorRGBA188 := TColorRGBANode.Create;
ColorRGBA188 := ColorRGBA27;
{ .SetColor }
LineSet186.Color := ColorRGBA188;
{ .SetGeometry }
Shape185.Geometry := LineSet186;
{ .AddChildren }
HAnimSegment181.AddChildren([Shape185]);
HAnimSite189 := THAnimSiteNode.Create;
HAnimSite189.NameField := 'l_lateral_malleolus';
HAnimSite189.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor190 := TTouchSensorNode.Create;
TouchSensor190.Description := 'HAnimSite 49 l_lateral_malleolus';
{ .AddChildren }
HAnimSite189.AddChildren([TouchSensor190]);
Shape191 := TShapeNode.Create;
Shape191 := Shape30;
{ .AddChildren }
HAnimSite189.AddChildren([Shape191]);
Billboard192 := TBillboardNode.Create;
Shape193 := TShapeNode.Create;
Text194 := TTextNode.Create;
Text194.SetText(['49']);
FontStyle195 := TFontStyleNode.Create;
FontStyle195.Size := 0.035;
{ .SetFontStyle }
Text194.FontStyle := FontStyle195;
{ .SetGeometry }
Shape193.Geometry := Text194;
{ .AddChildren }
Billboard192.AddChildren([Shape193]);
{ .AddChildren }
HAnimSite189.AddChildren([Billboard192]);
{ .AddChildren }
HAnimSegment181.AddChildren([HAnimSite189]);
HAnimSite196 := THAnimSiteNode.Create;
HAnimSite196.NameField := 'l_medial_malleolus';
HAnimSite196.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor197 := TTouchSensorNode.Create;
TouchSensor197.Description := 'HAnimSite 48 l_medial_malleolus';
{ .AddChildren }
HAnimSite196.AddChildren([TouchSensor197]);
Shape198 := TShapeNode.Create;
Shape198 := Shape30;
{ .AddChildren }
HAnimSite196.AddChildren([Shape198]);
Billboard199 := TBillboardNode.Create;
Shape200 := TShapeNode.Create;
Text201 := TTextNode.Create;
Text201.SetText(['48']);
FontStyle202 := TFontStyleNode.Create;
FontStyle202.Size := 0.035;
{ .SetFontStyle }
Text201.FontStyle := FontStyle202;
{ .SetGeometry }
Shape200.Geometry := Text201;
{ .AddChildren }
Billboard199.AddChildren([Shape200]);
{ .AddChildren }
HAnimSite196.AddChildren([Billboard199]);
{ .AddChildren }
HAnimSegment181.AddChildren([HAnimSite196]);
HAnimSite203 := THAnimSiteNode.Create;
HAnimSite203.NameField := 'l_tibiale';
TouchSensor204 := TTouchSensorNode.Create;
TouchSensor204.Description := 'HAnimSite 47 l_tibiale';
{ .AddChildren }
HAnimSite203.AddChildren([TouchSensor204]);
Shape205 := TShapeNode.Create;
Shape205 := Shape30;
{ .AddChildren }
HAnimSite203.AddChildren([Shape205]);
Billboard206 := TBillboardNode.Create;
Shape207 := TShapeNode.Create;
Text208 := TTextNode.Create;
Text208.SetText(['47']);
FontStyle209 := TFontStyleNode.Create;
FontStyle209.Size := 0.035;
{ .SetFontStyle }
Text208.FontStyle := FontStyle209;
{ .SetGeometry }
Shape207.Geometry := Text208;
{ .AddChildren }
Billboard206.AddChildren([Shape207]);
{ .AddChildren }
HAnimSite203.AddChildren([Billboard206]);
{ .AddChildren }
HAnimSegment181.AddChildren([HAnimSite203]);
{ .AddChildren }
HAnimJoint180.AddChildren([HAnimSegment181]);
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210.NameField := 'l_talocrural';
HAnimJoint210.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint210.SetUlimit([0,0,0]);
HAnimJoint210.SetLlimit([0,0,0]);
HAnimSegment211 := THAnimSegmentNode.Create;
HAnimSegment211.NameField := 'l_talus';
Transform212 := TTransformNode.Create;
Transform212.Scale := Vector3(0.15,0.15,0.15);
Transform212.Translation := Vector3(0.08,0.06,-0.025);
Transform212.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform213 := TTransformNode.Create;
{ Empty Transform left foot }
Shape214 := TShapeNode.Create;
Shape214 := Shape20;
{ .AddChild }
Transform213.AddChildren([Shape214]);
{ .AddChildren }
Transform212.AddChildren([Transform213]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform212]);
Shape215 := TShapeNode.Create;
LineSet216 := TLineSetNode.Create;
LineSet216.SetVertexCount([2]);
Coordinate217 := TCoordinateNode.Create;
Coordinate217.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.08,0.0175,-0.0608)]);
{ .SetCoord }
LineSet216.Coord := Coordinate217;
{ from l_talocrural to l_tarsometatarsal_2 vertices 2 }
ColorRGBA218 := TColorRGBANode.Create;
ColorRGBA218 := ColorRGBA27;
{ .SetColor }
LineSet216.Color := ColorRGBA218;
{ .SetGeometry }
Shape215.Geometry := LineSet216;
{ .AddChildren }
HAnimSegment211.AddChildren([Shape215]);
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219.NameField := 'l_calcaneus_posterior';
HAnimSite219.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'HAnimSite 58 l_calcaneus_posterior';
{ .AddChildren }
HAnimSite219.AddChildren([TouchSensor220]);
Shape221 := TShapeNode.Create;
Shape221 := Shape30;
{ .AddChildren }
HAnimSite219.AddChildren([Shape221]);
Billboard222 := TBillboardNode.Create;
Shape223 := TShapeNode.Create;
Text224 := TTextNode.Create;
Text224.SetText(['58']);
FontStyle225 := TFontStyleNode.Create;
FontStyle225.Size := 0.035;
{ .SetFontStyle }
Text224.FontStyle := FontStyle225;
{ .SetGeometry }
Shape223.Geometry := Text224;
{ .AddChildren }
Billboard222.AddChildren([Shape223]);
{ .AddChildren }
HAnimSite219.AddChildren([Billboard222]);
{ .AddChildren }
HAnimSegment211.AddChildren([HAnimSite219]);
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226.NameField := 'l_sphyrion';
HAnimSite226.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor227 := TTouchSensorNode.Create;
TouchSensor227.Description := 'HAnimSite 50 l_sphyrion';
{ .AddChildren }
HAnimSite226.AddChildren([TouchSensor227]);
Shape228 := TShapeNode.Create;
Shape228 := Shape30;
{ .AddChildren }
HAnimSite226.AddChildren([Shape228]);
Billboard229 := TBillboardNode.Create;
Shape230 := TShapeNode.Create;
Text231 := TTextNode.Create;
Text231.SetText(['50']);
FontStyle232 := TFontStyleNode.Create;
FontStyle232.Size := 0.035;
{ .SetFontStyle }
Text231.FontStyle := FontStyle232;
{ .SetGeometry }
Shape230.Geometry := Text231;
{ .AddChildren }
Billboard229.AddChildren([Shape230]);
{ .AddChildren }
HAnimSite226.AddChildren([Billboard229]);
{ .AddChildren }
HAnimSegment211.AddChildren([HAnimSite226]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimSegment211]);
HAnimJoint233 := THAnimJointNode.Create;
HAnimJoint233.NameField := 'l_tarsometatarsal_2';
HAnimJoint233.Center := Vector3(0.08,0.0175,-0.0608);
HAnimJoint233.SetUlimit([0,0,0]);
HAnimJoint233.SetLlimit([0,0,0]);
HAnimSegment234 := THAnimSegmentNode.Create;
HAnimSegment234.NameField := 'l_metatarsal_2';
Transform235 := TTransformNode.Create;
Transform235.Translation := Vector3(0.08,0.0175,-0.0608);
Transform236 := TTransformNode.Create;
{ Empty Transform }
Shape237 := TShapeNode.Create;
Shape237 := Shape20;
{ .AddChild }
Transform236.AddChildren([Shape237]);
{ .AddChildren }
Transform235.AddChildren([Transform236]);
{ .AddChildren }
HAnimSegment234.AddChildren([Transform235]);
Shape238 := TShapeNode.Create;
LineSet239 := TLineSetNode.Create;
LineSet239.SetVertexCount([2]);
Coordinate240 := TCoordinateNode.Create;
Coordinate240.SetPoint([Vector3(0.08,0.0175,-0.0608),Vector3(0.0824,0.0064,-0.004)]);
{ .SetCoord }
LineSet239.Coord := Coordinate240;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
ColorRGBA241 := TColorRGBANode.Create;
ColorRGBA241 := ColorRGBA27;
{ .SetColor }
LineSet239.Color := ColorRGBA241;
{ .SetGeometry }
Shape238.Geometry := LineSet239;
{ .AddChildren }
HAnimSegment234.AddChildren([Shape238]);
{ .AddChildren }
HAnimJoint233.AddChildren([HAnimSegment234]);
HAnimJoint242 := THAnimJointNode.Create;
HAnimJoint242.NameField := 'l_metatarsophalangeal_2';
HAnimJoint242.Center := Vector3(0.0824,0.0064,-0.004);
HAnimJoint242.SetUlimit([0,0,0]);
HAnimJoint242.SetLlimit([0,0,0]);
HAnimSegment243 := THAnimSegmentNode.Create;
HAnimSegment243.NameField := 'l_tarsal_proximal_phalanx_2';
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.0824,0.0064,-0.004);
Transform245 := TTransformNode.Create;
{ Empty Transform }
Shape246 := TShapeNode.Create;
Shape246 := Shape20;
{ .AddChild }
Transform245.AddChildren([Shape246]);
{ .AddChildren }
Transform244.AddChildren([Transform245]);
{ .AddChildren }
HAnimSegment243.AddChildren([Transform244]);
Shape247 := TShapeNode.Create;
LineSet248 := TLineSetNode.Create;
LineSet248.SetVertexCount([2]);
Coordinate249 := TCoordinateNode.Create;
Coordinate249.SetPoint([Vector3(0.0824,0.0064,-0.004),Vector3(0.0841,0.0013,0.0216)]);
{ .SetCoord }
LineSet248.Coord := Coordinate249;
{ from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
ColorRGBA250 := TColorRGBANode.Create;
ColorRGBA250 := ColorRGBA27;
{ .SetColor }
LineSet248.Color := ColorRGBA250;
{ .SetGeometry }
Shape247.Geometry := LineSet248;
{ .AddChildren }
HAnimSegment243.AddChildren([Shape247]);
HAnimSite251 := THAnimSiteNode.Create;
HAnimSite251.NameField := 'l_metatarsal_phalanx_1';
TouchSensor252 := TTouchSensorNode.Create;
TouchSensor252.Description := 'HAnimSite 55 l_metatarsal_phalanx_1';
{ .AddChildren }
HAnimSite251.AddChildren([TouchSensor252]);
Shape253 := TShapeNode.Create;
Shape253 := Shape30;
{ .AddChildren }
HAnimSite251.AddChildren([Shape253]);
Billboard254 := TBillboardNode.Create;
Shape255 := TShapeNode.Create;
Text256 := TTextNode.Create;
Text256.SetText(['55']);
FontStyle257 := TFontStyleNode.Create;
FontStyle257.Size := 0.035;
{ .SetFontStyle }
Text256.FontStyle := FontStyle257;
{ .SetGeometry }
Shape255.Geometry := Text256;
{ .AddChildren }
Billboard254.AddChildren([Shape255]);
{ .AddChildren }
HAnimSite251.AddChildren([Billboard254]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite251]);
HAnimSite258 := THAnimSiteNode.Create;
HAnimSite258.NameField := 'l_metatarsal_phalanx_5';
TouchSensor259 := TTouchSensorNode.Create;
TouchSensor259.Description := 'HAnimSite 56 l_metatarsal_phalanx_5';
{ .AddChildren }
HAnimSite258.AddChildren([TouchSensor259]);
Shape260 := TShapeNode.Create;
Shape260 := Shape30;
{ .AddChildren }
HAnimSite258.AddChildren([Shape260]);
Billboard261 := TBillboardNode.Create;
Shape262 := TShapeNode.Create;
Text263 := TTextNode.Create;
Text263.SetText(['56']);
FontStyle264 := TFontStyleNode.Create;
FontStyle264.Size := 0.035;
{ .SetFontStyle }
Text263.FontStyle := FontStyle264;
{ .SetGeometry }
Shape262.Geometry := Text263;
{ .AddChildren }
Billboard261.AddChildren([Shape262]);
{ .AddChildren }
HAnimSite258.AddChildren([Billboard261]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite258]);
HAnimSite265 := THAnimSiteNode.Create;
HAnimSite265.NameField := 'l_tarsal_distal_phalanx_1_tip';
TouchSensor266 := TTouchSensorNode.Create;
TouchSensor266.Description := 'HAnimSite l_tarsal_distal_phalanx_1_tip';
{ .AddChildren }
HAnimSite265.AddChildren([TouchSensor266]);
Shape267 := TShapeNode.Create;
Shape267 := Shape30;
{ .AddChildren }
HAnimSite265.AddChildren([Shape267]);
Billboard268 := TBillboardNode.Create;
Shape269 := TShapeNode.Create;
Text270 := TTextNode.Create;
Text270.SetText(['']);
FontStyle271 := TFontStyleNode.Create;
FontStyle271.Size := 0.035;
{ .SetFontStyle }
Text270.FontStyle := FontStyle271;
{ .SetGeometry }
Shape269.Geometry := Text270;
{ .AddChildren }
Billboard268.AddChildren([Shape269]);
{ .AddChildren }
HAnimSite265.AddChildren([Billboard268]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite265]);
HAnimSite272 := THAnimSiteNode.Create;
HAnimSite272.NameField := 'l_tarsal_distal_phalanx_2_tip';
HAnimSite272.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor273 := TTouchSensorNode.Create;
TouchSensor273.Description := 'HAnimSite l_tarsal_distal_phalanx_2_tip';
{ .AddChildren }
HAnimSite272.AddChildren([TouchSensor273]);
Shape274 := TShapeNode.Create;
Shape274 := Shape30;
{ .AddChildren }
HAnimSite272.AddChildren([Shape274]);
Billboard275 := TBillboardNode.Create;
Shape276 := TShapeNode.Create;
Text277 := TTextNode.Create;
Text277.SetText(['']);
FontStyle278 := TFontStyleNode.Create;
FontStyle278.Size := 0.035;
{ .SetFontStyle }
Text277.FontStyle := FontStyle278;
{ .SetGeometry }
Shape276.Geometry := Text277;
{ .AddChildren }
Billboard275.AddChildren([Shape276]);
{ .AddChildren }
HAnimSite272.AddChildren([Billboard275]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite272]);
HAnimSite279 := THAnimSiteNode.Create;
HAnimSite279.NameField := 'l_tarsal_distal_phalanx_3_tip';
TouchSensor280 := TTouchSensorNode.Create;
TouchSensor280.Description := 'HAnimSite l_tarsal_distal_phalanx_3_tip';
{ .AddChildren }
HAnimSite279.AddChildren([TouchSensor280]);
Shape281 := TShapeNode.Create;
Shape281 := Shape30;
{ .AddChildren }
HAnimSite279.AddChildren([Shape281]);
Billboard282 := TBillboardNode.Create;
Shape283 := TShapeNode.Create;
Text284 := TTextNode.Create;
Text284.SetText(['']);
FontStyle285 := TFontStyleNode.Create;
FontStyle285.Size := 0.035;
{ .SetFontStyle }
Text284.FontStyle := FontStyle285;
{ .SetGeometry }
Shape283.Geometry := Text284;
{ .AddChildren }
Billboard282.AddChildren([Shape283]);
{ .AddChildren }
HAnimSite279.AddChildren([Billboard282]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite279]);
HAnimSite286 := THAnimSiteNode.Create;
HAnimSite286.NameField := 'l_tarsal_distal_phalanx_4_tip';
TouchSensor287 := TTouchSensorNode.Create;
TouchSensor287.Description := 'HAnimSite l_tarsal_distal_phalanx_4_tip';
{ .AddChildren }
HAnimSite286.AddChildren([TouchSensor287]);
Shape288 := TShapeNode.Create;
Shape288 := Shape30;
{ .AddChildren }
HAnimSite286.AddChildren([Shape288]);
Billboard289 := TBillboardNode.Create;
Shape290 := TShapeNode.Create;
Text291 := TTextNode.Create;
Text291.SetText(['']);
FontStyle292 := TFontStyleNode.Create;
FontStyle292.Size := 0.035;
{ .SetFontStyle }
Text291.FontStyle := FontStyle292;
{ .SetGeometry }
Shape290.Geometry := Text291;
{ .AddChildren }
Billboard289.AddChildren([Shape290]);
{ .AddChildren }
HAnimSite286.AddChildren([Billboard289]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite286]);
HAnimSite293 := THAnimSiteNode.Create;
HAnimSite293.NameField := 'l_tarsal_distal_phalanx_5_tip';
TouchSensor294 := TTouchSensorNode.Create;
TouchSensor294.Description := 'HAnimSite l_tarsal_distal_phalanx_5_tip';
{ .AddChildren }
HAnimSite293.AddChildren([TouchSensor294]);
Shape295 := TShapeNode.Create;
Shape295 := Shape30;
{ .AddChildren }
HAnimSite293.AddChildren([Shape295]);
Billboard296 := TBillboardNode.Create;
Shape297 := TShapeNode.Create;
Text298 := TTextNode.Create;
Text298.SetText(['']);
FontStyle299 := TFontStyleNode.Create;
FontStyle299.Size := 0.035;
{ .SetFontStyle }
Text298.FontStyle := FontStyle299;
{ .SetGeometry }
Shape297.Geometry := Text298;
{ .AddChildren }
Billboard296.AddChildren([Shape297]);
{ .AddChildren }
HAnimSite293.AddChildren([Billboard296]);
{ .AddChildren }
HAnimSegment243.AddChildren([HAnimSite293]);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimSegment243]);
HAnimJoint300 := THAnimJointNode.Create;
HAnimJoint300.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint300.Center := Vector3(0.0841,0.0013,0.0216);
HAnimJoint300.SetUlimit([0,0,0]);
HAnimJoint300.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimJoint300]);
{ .AddChildren }
HAnimJoint233.AddChildren([HAnimJoint242]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimJoint233]);
{ .AddChildren }
HAnimJoint180.AddChildren([HAnimJoint210]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint180]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint143]);
HAnimJoint301 := THAnimJointNode.Create;
HAnimJoint301.NameField := 'r_hip';
HAnimJoint301.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint301.SetUlimit([0,0,0]);
HAnimJoint301.SetLlimit([0,0,0]);
HAnimSegment302 := THAnimSegmentNode.Create;
HAnimSegment302.NameField := 'r_thigh';
Transform303 := TTransformNode.Create;
Transform303.Translation := Vector3(-0.095,0.9171,0.0029);
Transform304 := TTransformNode.Create;
{ Empty Transform }
Shape305 := TShapeNode.Create;
Shape305 := Shape20;
{ .AddChild }
Transform304.AddChildren([Shape305]);
{ .AddChildren }
Transform303.AddChildren([Transform304]);
{ .AddChildren }
HAnimSegment302.AddChildren([Transform303]);
Shape306 := TShapeNode.Create;
LineSet307 := TLineSetNode.Create;
LineSet307.SetVertexCount([2]);
Coordinate308 := TCoordinateNode.Create;
Coordinate308.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ .SetCoord }
LineSet307.Coord := Coordinate308;
{ from r_hip to r_knee vertices 2 }
ColorRGBA309 := TColorRGBANode.Create;
ColorRGBA309 := ColorRGBA27;
{ .SetColor }
LineSet307.Color := ColorRGBA309;
{ .SetGeometry }
Shape306.Geometry := LineSet307;
{ .AddChildren }
HAnimSegment302.AddChildren([Shape306]);
HAnimSite310 := THAnimSiteNode.Create;
HAnimSite310.NameField := 'r_femoral_lateral_epicondyles';
HAnimSite310.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor311 := TTouchSensorNode.Create;
TouchSensor311.Description := 'HAnimSite 44 r_femoral_lateral_epicondyles';
{ .AddChildren }
HAnimSite310.AddChildren([TouchSensor311]);
Shape312 := TShapeNode.Create;
Shape312 := Shape30;
{ .AddChildren }
HAnimSite310.AddChildren([Shape312]);
Billboard313 := TBillboardNode.Create;
Shape314 := TShapeNode.Create;
Text315 := TTextNode.Create;
Text315.SetText(['44']);
FontStyle316 := TFontStyleNode.Create;
FontStyle316.Size := 0.035;
{ .SetFontStyle }
Text315.FontStyle := FontStyle316;
{ .SetGeometry }
Shape314.Geometry := Text315;
{ .AddChildren }
Billboard313.AddChildren([Shape314]);
{ .AddChildren }
HAnimSite310.AddChildren([Billboard313]);
{ .AddChildren }
HAnimSegment302.AddChildren([HAnimSite310]);
HAnimSite317 := THAnimSiteNode.Create;
HAnimSite317.NameField := 'r_femoral_medial_epicondyles';
HAnimSite317.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor318 := TTouchSensorNode.Create;
TouchSensor318.Description := 'HAnimSite 43 r_femoral_medial_epicondyles';
{ .AddChildren }
HAnimSite317.AddChildren([TouchSensor318]);
Shape319 := TShapeNode.Create;
Shape319 := Shape30;
{ .AddChildren }
HAnimSite317.AddChildren([Shape319]);
Billboard320 := TBillboardNode.Create;
Shape321 := TShapeNode.Create;
Text322 := TTextNode.Create;
Text322.SetText(['43']);
FontStyle323 := TFontStyleNode.Create;
FontStyle323.Size := 0.035;
{ .SetFontStyle }
Text322.FontStyle := FontStyle323;
{ .SetGeometry }
Shape321.Geometry := Text322;
{ .AddChildren }
Billboard320.AddChildren([Shape321]);
{ .AddChildren }
HAnimSite317.AddChildren([Billboard320]);
{ .AddChildren }
HAnimSegment302.AddChildren([HAnimSite317]);
HAnimSite324 := THAnimSiteNode.Create;
HAnimSite324.NameField := 'r_knee_crease';
HAnimSite324.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor325 := TTouchSensorNode.Create;
TouchSensor325.Description := 'HAnimSite 91 r_knee_crease';
{ .AddChildren }
HAnimSite324.AddChildren([TouchSensor325]);
Shape326 := TShapeNode.Create;
Shape326 := Shape30;
{ .AddChildren }
HAnimSite324.AddChildren([Shape326]);
Billboard327 := TBillboardNode.Create;
Shape328 := TShapeNode.Create;
Text329 := TTextNode.Create;
Text329.SetText(['91']);
FontStyle330 := TFontStyleNode.Create;
FontStyle330.Size := 0.035;
{ .SetFontStyle }
Text329.FontStyle := FontStyle330;
{ .SetGeometry }
Shape328.Geometry := Text329;
{ .AddChildren }
Billboard327.AddChildren([Shape328]);
{ .AddChildren }
HAnimSite324.AddChildren([Billboard327]);
{ .AddChildren }
HAnimSegment302.AddChildren([HAnimSite324]);
HAnimSite331 := THAnimSiteNode.Create;
HAnimSite331.NameField := 'r_suprapatella';
TouchSensor332 := TTouchSensorNode.Create;
TouchSensor332.Description := 'HAnimSite 45 r_suprapatella';
{ .AddChildren }
HAnimSite331.AddChildren([TouchSensor332]);
Shape333 := TShapeNode.Create;
Shape333 := Shape30;
{ .AddChildren }
HAnimSite331.AddChildren([Shape333]);
Billboard334 := TBillboardNode.Create;
Shape335 := TShapeNode.Create;
Text336 := TTextNode.Create;
Text336.SetText(['45']);
FontStyle337 := TFontStyleNode.Create;
FontStyle337.Size := 0.035;
{ .SetFontStyle }
Text336.FontStyle := FontStyle337;
{ .SetGeometry }
Shape335.Geometry := Text336;
{ .AddChildren }
Billboard334.AddChildren([Shape335]);
{ .AddChildren }
HAnimSite331.AddChildren([Billboard334]);
{ .AddChildren }
HAnimSegment302.AddChildren([HAnimSite331]);
{ .AddChildren }
HAnimJoint301.AddChildren([HAnimSegment302]);
HAnimJoint338 := THAnimJointNode.Create;
HAnimJoint338.NameField := 'r_knee';
HAnimJoint338.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint338.SetUlimit([0,0,0]);
HAnimJoint338.SetLlimit([0,0,0]);
HAnimSegment339 := THAnimSegmentNode.Create;
HAnimSegment339.NameField := 'r_calf';
Transform340 := TTransformNode.Create;
Transform340.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform341 := TTransformNode.Create;
{ Empty Transform }
Shape342 := TShapeNode.Create;
Shape342 := Shape20;
{ .AddChild }
Transform341.AddChildren([Shape342]);
{ .AddChildren }
Transform340.AddChildren([Transform341]);
{ .AddChildren }
HAnimSegment339.AddChildren([Transform340]);
Shape343 := TShapeNode.Create;
LineSet344 := TLineSetNode.Create;
LineSet344.SetVertexCount([2]);
Coordinate345 := TCoordinateNode.Create;
Coordinate345.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ .SetCoord }
LineSet344.Coord := Coordinate345;
{ from r_knee to r_talocrural vertices 2 }
ColorRGBA346 := TColorRGBANode.Create;
ColorRGBA346 := ColorRGBA27;
{ .SetColor }
LineSet344.Color := ColorRGBA346;
{ .SetGeometry }
Shape343.Geometry := LineSet344;
{ .AddChildren }
HAnimSegment339.AddChildren([Shape343]);
HAnimSite347 := THAnimSiteNode.Create;
HAnimSite347.NameField := 'r_lateral_malleolus';
HAnimSite347.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor348 := TTouchSensorNode.Create;
TouchSensor348.Description := 'HAnimSite 53 r_lateral_malleolus';
{ .AddChildren }
HAnimSite347.AddChildren([TouchSensor348]);
Shape349 := TShapeNode.Create;
Shape349 := Shape30;
{ .AddChildren }
HAnimSite347.AddChildren([Shape349]);
Billboard350 := TBillboardNode.Create;
Shape351 := TShapeNode.Create;
Text352 := TTextNode.Create;
Text352.SetText(['53']);
FontStyle353 := TFontStyleNode.Create;
FontStyle353.Size := 0.035;
{ .SetFontStyle }
Text352.FontStyle := FontStyle353;
{ .SetGeometry }
Shape351.Geometry := Text352;
{ .AddChildren }
Billboard350.AddChildren([Shape351]);
{ .AddChildren }
HAnimSite347.AddChildren([Billboard350]);
{ .AddChildren }
HAnimSegment339.AddChildren([HAnimSite347]);
HAnimSite354 := THAnimSiteNode.Create;
HAnimSite354.NameField := 'r_medial_malleolus';
HAnimSite354.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor355 := TTouchSensorNode.Create;
TouchSensor355.Description := 'HAnimSite 52 r_medial_malleolus';
{ .AddChildren }
HAnimSite354.AddChildren([TouchSensor355]);
Shape356 := TShapeNode.Create;
Shape356 := Shape30;
{ .AddChildren }
HAnimSite354.AddChildren([Shape356]);
Billboard357 := TBillboardNode.Create;
Shape358 := TShapeNode.Create;
Text359 := TTextNode.Create;
Text359.SetText(['52']);
FontStyle360 := TFontStyleNode.Create;
FontStyle360.Size := 0.035;
{ .SetFontStyle }
Text359.FontStyle := FontStyle360;
{ .SetGeometry }
Shape358.Geometry := Text359;
{ .AddChildren }
Billboard357.AddChildren([Shape358]);
{ .AddChildren }
HAnimSite354.AddChildren([Billboard357]);
{ .AddChildren }
HAnimSegment339.AddChildren([HAnimSite354]);
HAnimSite361 := THAnimSiteNode.Create;
HAnimSite361.NameField := 'r_tibiale';
TouchSensor362 := TTouchSensorNode.Create;
TouchSensor362.Description := 'HAnimSite 51 r_tibiale';
{ .AddChildren }
HAnimSite361.AddChildren([TouchSensor362]);
Shape363 := TShapeNode.Create;
Shape363 := Shape30;
{ .AddChildren }
HAnimSite361.AddChildren([Shape363]);
Billboard364 := TBillboardNode.Create;
Shape365 := TShapeNode.Create;
Text366 := TTextNode.Create;
Text366.SetText(['51']);
FontStyle367 := TFontStyleNode.Create;
FontStyle367.Size := 0.035;
{ .SetFontStyle }
Text366.FontStyle := FontStyle367;
{ .SetGeometry }
Shape365.Geometry := Text366;
{ .AddChildren }
Billboard364.AddChildren([Shape365]);
{ .AddChildren }
HAnimSite361.AddChildren([Billboard364]);
{ .AddChildren }
HAnimSegment339.AddChildren([HAnimSite361]);
{ .AddChildren }
HAnimJoint338.AddChildren([HAnimSegment339]);
HAnimJoint368 := THAnimJointNode.Create;
HAnimJoint368.NameField := 'r_talocrural';
HAnimJoint368.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint368.SetUlimit([0,0,0]);
HAnimJoint368.SetLlimit([0,0,0]);
HAnimSegment369 := THAnimSegmentNode.Create;
HAnimSegment369.NameField := 'r_talus';
Transform370 := TTransformNode.Create;
Transform370.Scale := Vector3(0.15,0.15,0.15);
Transform370.Translation := Vector3(-0.05,0.06,-0.025);
Transform370.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform371 := TTransformNode.Create;
{ Empty Transform right foot }
Shape372 := TShapeNode.Create;
Shape372 := Shape20;
{ .AddChild }
Transform371.AddChildren([Shape372]);
{ .AddChildren }
Transform370.AddChildren([Transform371]);
{ .AddChildren }
HAnimSegment369.AddChildren([Transform370]);
Shape373 := TShapeNode.Create;
LineSet374 := TLineSetNode.Create;
LineSet374.SetVertexCount([2]);
Coordinate375 := TCoordinateNode.Create;
Coordinate375.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.08,0.0175,-0.0608)]);
{ .SetCoord }
LineSet374.Coord := Coordinate375;
{ from r_talocrural to r_tarsometatarsal_2 vertices 2 }
ColorRGBA376 := TColorRGBANode.Create;
ColorRGBA376 := ColorRGBA27;
{ .SetColor }
LineSet374.Color := ColorRGBA376;
{ .SetGeometry }
Shape373.Geometry := LineSet374;
{ .AddChildren }
HAnimSegment369.AddChildren([Shape373]);
HAnimSite377 := THAnimSiteNode.Create;
HAnimSite377.NameField := 'r_calcaneus_posterior';
HAnimSite377.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor378 := TTouchSensorNode.Create;
TouchSensor378.Description := 'HAnimSite 62 r_calcaneus_posterior';
{ .AddChildren }
HAnimSite377.AddChildren([TouchSensor378]);
Shape379 := TShapeNode.Create;
Shape379 := Shape30;
{ .AddChildren }
HAnimSite377.AddChildren([Shape379]);
Billboard380 := TBillboardNode.Create;
Shape381 := TShapeNode.Create;
Text382 := TTextNode.Create;
Text382.SetText(['62']);
FontStyle383 := TFontStyleNode.Create;
FontStyle383.Size := 0.035;
{ .SetFontStyle }
Text382.FontStyle := FontStyle383;
{ .SetGeometry }
Shape381.Geometry := Text382;
{ .AddChildren }
Billboard380.AddChildren([Shape381]);
{ .AddChildren }
HAnimSite377.AddChildren([Billboard380]);
{ .AddChildren }
HAnimSegment369.AddChildren([HAnimSite377]);
HAnimSite384 := THAnimSiteNode.Create;
HAnimSite384.NameField := 'r_sphyrion';
HAnimSite384.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor385 := TTouchSensorNode.Create;
TouchSensor385.Description := 'HAnimSite 54 r_sphyrion';
{ .AddChildren }
HAnimSite384.AddChildren([TouchSensor385]);
Shape386 := TShapeNode.Create;
Shape386 := Shape30;
{ .AddChildren }
HAnimSite384.AddChildren([Shape386]);
Billboard387 := TBillboardNode.Create;
Shape388 := TShapeNode.Create;
Text389 := TTextNode.Create;
Text389.SetText(['54']);
FontStyle390 := TFontStyleNode.Create;
FontStyle390.Size := 0.035;
{ .SetFontStyle }
Text389.FontStyle := FontStyle390;
{ .SetGeometry }
Shape388.Geometry := Text389;
{ .AddChildren }
Billboard387.AddChildren([Shape388]);
{ .AddChildren }
HAnimSite384.AddChildren([Billboard387]);
{ .AddChildren }
HAnimSegment369.AddChildren([HAnimSite384]);
{ .AddChildren }
HAnimJoint368.AddChildren([HAnimSegment369]);
HAnimJoint391 := THAnimJointNode.Create;
HAnimJoint391.NameField := 'r_tarsometatarsal_2';
HAnimJoint391.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimJoint391.SetUlimit([0,0,0]);
HAnimJoint391.SetLlimit([0,0,0]);
HAnimSegment392 := THAnimSegmentNode.Create;
HAnimSegment392.NameField := 'r_metatarsal_2';
Transform393 := TTransformNode.Create;
Transform393.Translation := Vector3(-0.08,0.0175,-0.0608);
Transform394 := TTransformNode.Create;
{ Empty Transform }
Shape395 := TShapeNode.Create;
Shape395 := Shape20;
{ .AddChild }
Transform394.AddChildren([Shape395]);
{ .AddChildren }
Transform393.AddChildren([Transform394]);
{ .AddChildren }
HAnimSegment392.AddChildren([Transform393]);
Shape396 := TShapeNode.Create;
LineSet397 := TLineSetNode.Create;
LineSet397.SetVertexCount([2]);
Coordinate398 := TCoordinateNode.Create;
Coordinate398.SetPoint([Vector3(-0.08,0.0175,-0.0608),Vector3(-0.0823,0.0064,-0.004)]);
{ .SetCoord }
LineSet397.Coord := Coordinate398;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
ColorRGBA399 := TColorRGBANode.Create;
ColorRGBA399 := ColorRGBA27;
{ .SetColor }
LineSet397.Color := ColorRGBA399;
{ .SetGeometry }
Shape396.Geometry := LineSet397;
{ .AddChildren }
HAnimSegment392.AddChildren([Shape396]);
{ .AddChildren }
HAnimJoint391.AddChildren([HAnimSegment392]);
HAnimJoint400 := THAnimJointNode.Create;
HAnimJoint400.NameField := 'r_metatarsophalangeal_2';
HAnimJoint400.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimJoint400.SetUlimit([0,0,0]);
HAnimJoint400.SetLlimit([0,0,0]);
HAnimSegment401 := THAnimSegmentNode.Create;
HAnimSegment401.NameField := 'r_tarsal_proximal_phalanx_2';
Transform402 := TTransformNode.Create;
Transform402.Translation := Vector3(-0.0823,0.0064,-0.004);
Transform403 := TTransformNode.Create;
{ Empty Transform }
Shape404 := TShapeNode.Create;
Shape404 := Shape20;
{ .AddChild }
Transform403.AddChildren([Shape404]);
{ .AddChildren }
Transform402.AddChildren([Transform403]);
{ .AddChildren }
HAnimSegment401.AddChildren([Transform402]);
Shape405 := TShapeNode.Create;
LineSet406 := TLineSetNode.Create;
LineSet406.SetVertexCount([2]);
Coordinate407 := TCoordinateNode.Create;
Coordinate407.SetPoint([Vector3(-0.0823,0.0064,-0.004),Vector3(-0.0841,0.0013,0.0216)]);
{ .SetCoord }
LineSet406.Coord := Coordinate407;
{ from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
ColorRGBA408 := TColorRGBANode.Create;
ColorRGBA408 := ColorRGBA27;
{ .SetColor }
LineSet406.Color := ColorRGBA408;
{ .SetGeometry }
Shape405.Geometry := LineSet406;
{ .AddChildren }
HAnimSegment401.AddChildren([Shape405]);
HAnimSite409 := THAnimSiteNode.Create;
HAnimSite409.NameField := 'r_metatarsal_phalanx_1';
TouchSensor410 := TTouchSensorNode.Create;
TouchSensor410.Description := 'HAnimSite 59 r_metatarsal_phalanx_1';
{ .AddChildren }
HAnimSite409.AddChildren([TouchSensor410]);
Shape411 := TShapeNode.Create;
Shape411 := Shape30;
{ .AddChildren }
HAnimSite409.AddChildren([Shape411]);
Billboard412 := TBillboardNode.Create;
Shape413 := TShapeNode.Create;
Text414 := TTextNode.Create;
Text414.SetText(['59']);
FontStyle415 := TFontStyleNode.Create;
FontStyle415.Size := 0.035;
{ .SetFontStyle }
Text414.FontStyle := FontStyle415;
{ .SetGeometry }
Shape413.Geometry := Text414;
{ .AddChildren }
Billboard412.AddChildren([Shape413]);
{ .AddChildren }
HAnimSite409.AddChildren([Billboard412]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite409]);
HAnimSite416 := THAnimSiteNode.Create;
HAnimSite416.NameField := 'r_metatarsal_phalanx_5';
TouchSensor417 := TTouchSensorNode.Create;
TouchSensor417.Description := 'HAnimSite 60 r_metatarsal_phalanx_5';
{ .AddChildren }
HAnimSite416.AddChildren([TouchSensor417]);
Shape418 := TShapeNode.Create;
Shape418 := Shape30;
{ .AddChildren }
HAnimSite416.AddChildren([Shape418]);
Billboard419 := TBillboardNode.Create;
Shape420 := TShapeNode.Create;
Text421 := TTextNode.Create;
Text421.SetText(['60']);
FontStyle422 := TFontStyleNode.Create;
FontStyle422.Size := 0.035;
{ .SetFontStyle }
Text421.FontStyle := FontStyle422;
{ .SetGeometry }
Shape420.Geometry := Text421;
{ .AddChildren }
Billboard419.AddChildren([Shape420]);
{ .AddChildren }
HAnimSite416.AddChildren([Billboard419]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite416]);
HAnimSite423 := THAnimSiteNode.Create;
HAnimSite423.NameField := 'r_tarsal_distal_phalanx_1_tip';
TouchSensor424 := TTouchSensorNode.Create;
TouchSensor424.Description := 'HAnimSite r_tarsal_distal_phalanx_1_tip';
{ .AddChildren }
HAnimSite423.AddChildren([TouchSensor424]);
Shape425 := TShapeNode.Create;
Shape425 := Shape30;
{ .AddChildren }
HAnimSite423.AddChildren([Shape425]);
Billboard426 := TBillboardNode.Create;
Shape427 := TShapeNode.Create;
Text428 := TTextNode.Create;
Text428.SetText(['']);
FontStyle429 := TFontStyleNode.Create;
FontStyle429.Size := 0.035;
{ .SetFontStyle }
Text428.FontStyle := FontStyle429;
{ .SetGeometry }
Shape427.Geometry := Text428;
{ .AddChildren }
Billboard426.AddChildren([Shape427]);
{ .AddChildren }
HAnimSite423.AddChildren([Billboard426]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite423]);
HAnimSite430 := THAnimSiteNode.Create;
HAnimSite430.NameField := 'r_tarsal_distal_phalanx_2_tip';
HAnimSite430.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor431 := TTouchSensorNode.Create;
TouchSensor431.Description := 'HAnimSite r_tarsal_distal_phalanx_2_tip';
{ .AddChildren }
HAnimSite430.AddChildren([TouchSensor431]);
Shape432 := TShapeNode.Create;
Shape432 := Shape30;
{ .AddChildren }
HAnimSite430.AddChildren([Shape432]);
Billboard433 := TBillboardNode.Create;
Shape434 := TShapeNode.Create;
Text435 := TTextNode.Create;
Text435.SetText(['']);
FontStyle436 := TFontStyleNode.Create;
FontStyle436.Size := 0.035;
{ .SetFontStyle }
Text435.FontStyle := FontStyle436;
{ .SetGeometry }
Shape434.Geometry := Text435;
{ .AddChildren }
Billboard433.AddChildren([Shape434]);
{ .AddChildren }
HAnimSite430.AddChildren([Billboard433]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite430]);
HAnimSite437 := THAnimSiteNode.Create;
HAnimSite437.NameField := 'r_tarsal_distal_phalanx_3_tip';
TouchSensor438 := TTouchSensorNode.Create;
TouchSensor438.Description := 'HAnimSite r_tarsal_distal_phalanx_3_tip';
{ .AddChildren }
HAnimSite437.AddChildren([TouchSensor438]);
Shape439 := TShapeNode.Create;
Shape439 := Shape30;
{ .AddChildren }
HAnimSite437.AddChildren([Shape439]);
Billboard440 := TBillboardNode.Create;
Shape441 := TShapeNode.Create;
Text442 := TTextNode.Create;
Text442.SetText(['']);
FontStyle443 := TFontStyleNode.Create;
FontStyle443.Size := 0.035;
{ .SetFontStyle }
Text442.FontStyle := FontStyle443;
{ .SetGeometry }
Shape441.Geometry := Text442;
{ .AddChildren }
Billboard440.AddChildren([Shape441]);
{ .AddChildren }
HAnimSite437.AddChildren([Billboard440]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite437]);
HAnimSite444 := THAnimSiteNode.Create;
HAnimSite444.NameField := 'r_tarsal_distal_phalanx_4_tip';
TouchSensor445 := TTouchSensorNode.Create;
TouchSensor445.Description := 'HAnimSite r_tarsal_distal_phalanx_4_tip';
{ .AddChildren }
HAnimSite444.AddChildren([TouchSensor445]);
Shape446 := TShapeNode.Create;
Shape446 := Shape30;
{ .AddChildren }
HAnimSite444.AddChildren([Shape446]);
Billboard447 := TBillboardNode.Create;
Shape448 := TShapeNode.Create;
Text449 := TTextNode.Create;
Text449.SetText(['']);
FontStyle450 := TFontStyleNode.Create;
FontStyle450.Size := 0.035;
{ .SetFontStyle }
Text449.FontStyle := FontStyle450;
{ .SetGeometry }
Shape448.Geometry := Text449;
{ .AddChildren }
Billboard447.AddChildren([Shape448]);
{ .AddChildren }
HAnimSite444.AddChildren([Billboard447]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite444]);
HAnimSite451 := THAnimSiteNode.Create;
HAnimSite451.NameField := 'r_tarsal_distal_phalanx_5_tip';
TouchSensor452 := TTouchSensorNode.Create;
TouchSensor452.Description := 'HAnimSite r_tarsal_distal_phalanx_5_tip';
{ .AddChildren }
HAnimSite451.AddChildren([TouchSensor452]);
Shape453 := TShapeNode.Create;
Shape453 := Shape30;
{ .AddChildren }
HAnimSite451.AddChildren([Shape453]);
Billboard454 := TBillboardNode.Create;
Shape455 := TShapeNode.Create;
Text456 := TTextNode.Create;
Text456.SetText(['']);
FontStyle457 := TFontStyleNode.Create;
FontStyle457.Size := 0.035;
{ .SetFontStyle }
Text456.FontStyle := FontStyle457;
{ .SetGeometry }
Shape455.Geometry := Text456;
{ .AddChildren }
Billboard454.AddChildren([Shape455]);
{ .AddChildren }
HAnimSite451.AddChildren([Billboard454]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite451]);
{ .AddChildren }
HAnimJoint400.AddChildren([HAnimSegment401]);
HAnimJoint458 := THAnimJointNode.Create;
HAnimJoint458.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint458.Center := Vector3(-0.0841,0.0013,0.0216);
HAnimJoint458.SetUlimit([0,0,0]);
HAnimJoint458.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint400.AddChildren([HAnimJoint458]);
{ .AddChildren }
HAnimJoint391.AddChildren([HAnimJoint400]);
{ .AddChildren }
HAnimJoint368.AddChildren([HAnimJoint391]);
{ .AddChildren }
HAnimJoint338.AddChildren([HAnimJoint368]);
{ .AddChildren }
HAnimJoint301.AddChildren([HAnimJoint338]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint301]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint60]);
HAnimJoint459 := THAnimJointNode.Create;
HAnimJoint459.NameField := 'vl5';
HAnimJoint459.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint459.SetUlimit([0,0,0]);
HAnimJoint459.SetLlimit([0,0,0]);
HAnimSegment460 := THAnimSegmentNode.Create;
HAnimSegment460.NameField := 'l5';
Transform461 := TTransformNode.Create;
Transform461.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform462 := TTransformNode.Create;
{ Empty Transform }
Shape463 := TShapeNode.Create;
Shape463 := Shape20;
{ .AddChild }
Transform462.AddChildren([Shape463]);
{ .AddChildren }
Transform461.AddChildren([Transform462]);
{ .AddChildren }
HAnimSegment460.AddChildren([Transform461]);
Shape464 := TShapeNode.Create;
LineSet465 := TLineSetNode.Create;
LineSet465.SetVertexCount([2]);
Coordinate466 := TCoordinateNode.Create;
Coordinate466.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ .SetCoord }
LineSet465.Coord := Coordinate466;
{ from vl5 to vl4 vertices 2 }
ColorRGBA467 := TColorRGBANode.Create;
ColorRGBA467 := ColorRGBA27;
{ .SetColor }
LineSet465.Color := ColorRGBA467;
{ .SetGeometry }
Shape464.Geometry := LineSet465;
{ .AddChildren }
HAnimSegment460.AddChildren([Shape464]);
HAnimSite468 := THAnimSiteNode.Create;
HAnimSite468.NameField := 'navel';
HAnimSite468.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor469 := TTouchSensorNode.Create;
TouchSensor469.Description := 'HAnimSite 84 navel';
{ .AddChildren }
HAnimSite468.AddChildren([TouchSensor469]);
Shape470 := TShapeNode.Create;
Shape470 := Shape30;
{ .AddChildren }
HAnimSite468.AddChildren([Shape470]);
Billboard471 := TBillboardNode.Create;
Shape472 := TShapeNode.Create;
Text473 := TTextNode.Create;
Text473.SetText(['84']);
FontStyle474 := TFontStyleNode.Create;
FontStyle474.Size := 0.035;
{ .SetFontStyle }
Text473.FontStyle := FontStyle474;
{ .SetGeometry }
Shape472.Geometry := Text473;
{ .AddChildren }
Billboard471.AddChildren([Shape472]);
{ .AddChildren }
HAnimSite468.AddChildren([Billboard471]);
{ .AddChildren }
HAnimSegment460.AddChildren([HAnimSite468]);
HAnimSite475 := THAnimSiteNode.Create;
HAnimSite475.NameField := 'waist_preferred_anterior';
TouchSensor476 := TTouchSensorNode.Create;
TouchSensor476.Description := 'HAnimSite 26 waist_preferred_anterior';
{ .AddChildren }
HAnimSite475.AddChildren([TouchSensor476]);
Shape477 := TShapeNode.Create;
Shape477 := Shape30;
{ .AddChildren }
HAnimSite475.AddChildren([Shape477]);
Billboard478 := TBillboardNode.Create;
Shape479 := TShapeNode.Create;
Text480 := TTextNode.Create;
Text480.SetText(['26']);
FontStyle481 := TFontStyleNode.Create;
FontStyle481.Size := 0.035;
{ .SetFontStyle }
Text480.FontStyle := FontStyle481;
{ .SetGeometry }
Shape479.Geometry := Text480;
{ .AddChildren }
Billboard478.AddChildren([Shape479]);
{ .AddChildren }
HAnimSite475.AddChildren([Billboard478]);
{ .AddChildren }
HAnimSegment460.AddChildren([HAnimSite475]);
HAnimSite482 := THAnimSiteNode.Create;
HAnimSite482.NameField := 'waist_preferred_posterior';
HAnimSite482.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor483 := TTouchSensorNode.Create;
TouchSensor483.Description := 'HAnimSite 27 waist_preferred_posterior';
{ .AddChildren }
HAnimSite482.AddChildren([TouchSensor483]);
Shape484 := TShapeNode.Create;
Shape484 := Shape30;
{ .AddChildren }
HAnimSite482.AddChildren([Shape484]);
Billboard485 := TBillboardNode.Create;
Shape486 := TShapeNode.Create;
Text487 := TTextNode.Create;
Text487.SetText(['27']);
FontStyle488 := TFontStyleNode.Create;
FontStyle488.Size := 0.035;
{ .SetFontStyle }
Text487.FontStyle := FontStyle488;
{ .SetGeometry }
Shape486.Geometry := Text487;
{ .AddChildren }
Billboard485.AddChildren([Shape486]);
{ .AddChildren }
HAnimSite482.AddChildren([Billboard485]);
{ .AddChildren }
HAnimSegment460.AddChildren([HAnimSite482]);
{ .AddChildren }
HAnimJoint459.AddChildren([HAnimSegment460]);
HAnimJoint489 := THAnimJointNode.Create;
HAnimJoint489.NameField := 'vl4';
HAnimJoint489.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint489.SetUlimit([0,0,0]);
HAnimJoint489.SetLlimit([0,0,0]);
HAnimSegment490 := THAnimSegmentNode.Create;
HAnimSegment490.NameField := 'l4';
Transform491 := TTransformNode.Create;
Transform491.Translation := Vector3(0.0035,1.0925,-0.0787);
Transform492 := TTransformNode.Create;
{ Empty Transform }
Shape493 := TShapeNode.Create;
Shape493 := Shape20;
{ .AddChild }
Transform492.AddChildren([Shape493]);
{ .AddChildren }
Transform491.AddChildren([Transform492]);
{ .AddChildren }
HAnimSegment490.AddChildren([Transform491]);
Shape494 := TShapeNode.Create;
LineSet495 := TLineSetNode.Create;
LineSet495.SetVertexCount([2]);
Coordinate496 := TCoordinateNode.Create;
Coordinate496.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet495.Coord := Coordinate496;
{ from vl4 to vl3 vertices 2 }
ColorRGBA497 := TColorRGBANode.Create;
ColorRGBA497 := ColorRGBA27;
{ .SetColor }
LineSet495.Color := ColorRGBA497;
{ .SetGeometry }
Shape494.Geometry := LineSet495;
{ .AddChildren }
HAnimSegment490.AddChildren([Shape494]);
{ .AddChildren }
HAnimJoint489.AddChildren([HAnimSegment490]);
HAnimJoint498 := THAnimJointNode.Create;
HAnimJoint498.NameField := 'vl3';
HAnimJoint498.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint498.SetUlimit([0,0,0]);
HAnimJoint498.SetLlimit([0,0,0]);
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499.NameField := 'l3';
Transform500 := TTransformNode.Create;
Transform500.Translation := Vector3(0.0041,1.1276,-0.0796);
Transform501 := TTransformNode.Create;
{ Empty Transform }
Shape502 := TShapeNode.Create;
Shape502 := Shape20;
{ .AddChild }
Transform501.AddChildren([Shape502]);
{ .AddChildren }
Transform500.AddChildren([Transform501]);
{ .AddChildren }
HAnimSegment499.AddChildren([Transform500]);
Shape503 := TShapeNode.Create;
LineSet504 := TLineSetNode.Create;
LineSet504.SetVertexCount([2]);
Coordinate505 := TCoordinateNode.Create;
Coordinate505.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ .SetCoord }
LineSet504.Coord := Coordinate505;
{ from vl3 to vl2 vertices 2 }
ColorRGBA506 := TColorRGBANode.Create;
ColorRGBA506 := ColorRGBA27;
{ .SetColor }
LineSet504.Color := ColorRGBA506;
{ .SetGeometry }
Shape503.Geometry := LineSet504;
{ .AddChildren }
HAnimSegment499.AddChildren([Shape503]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimSegment499]);
HAnimJoint507 := THAnimJointNode.Create;
HAnimJoint507.NameField := 'vl2';
HAnimJoint507.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint507.SetUlimit([0,0,0]);
HAnimJoint507.SetLlimit([0,0,0]);
HAnimSegment508 := THAnimSegmentNode.Create;
HAnimSegment508.NameField := 'l2';
Transform509 := TTransformNode.Create;
Transform509.Translation := Vector3(0.0045,1.1546,-0.08);
Transform510 := TTransformNode.Create;
{ Empty Transform }
Shape511 := TShapeNode.Create;
Shape511 := Shape20;
{ .AddChild }
Transform510.AddChildren([Shape511]);
{ .AddChildren }
Transform509.AddChildren([Transform510]);
{ .AddChildren }
HAnimSegment508.AddChildren([Transform509]);
Shape512 := TShapeNode.Create;
LineSet513 := TLineSetNode.Create;
LineSet513.SetVertexCount([2]);
Coordinate514 := TCoordinateNode.Create;
Coordinate514.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet513.Coord := Coordinate514;
{ from vl2 to vl1 vertices 2 }
ColorRGBA515 := TColorRGBANode.Create;
ColorRGBA515 := ColorRGBA27;
{ .SetColor }
LineSet513.Color := ColorRGBA515;
{ .SetGeometry }
Shape512.Geometry := LineSet513;
{ .AddChildren }
HAnimSegment508.AddChildren([Shape512]);
HAnimSite516 := THAnimSiteNode.Create;
HAnimSite516.NameField := 'l_rib10';
HAnimSite516.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor517 := TTouchSensorNode.Create;
TouchSensor517.Description := 'HAnimSite 28 l_rib10';
{ .AddChildren }
HAnimSite516.AddChildren([TouchSensor517]);
Shape518 := TShapeNode.Create;
Shape518 := Shape30;
{ .AddChildren }
HAnimSite516.AddChildren([Shape518]);
Billboard519 := TBillboardNode.Create;
Shape520 := TShapeNode.Create;
Text521 := TTextNode.Create;
Text521.SetText(['28']);
FontStyle522 := TFontStyleNode.Create;
FontStyle522.Size := 0.035;
{ .SetFontStyle }
Text521.FontStyle := FontStyle522;
{ .SetGeometry }
Shape520.Geometry := Text521;
{ .AddChildren }
Billboard519.AddChildren([Shape520]);
{ .AddChildren }
HAnimSite516.AddChildren([Billboard519]);
{ .AddChildren }
HAnimSegment508.AddChildren([HAnimSite516]);
HAnimSite523 := THAnimSiteNode.Create;
HAnimSite523.NameField := 'r_rib10';
HAnimSite523.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor524 := TTouchSensorNode.Create;
TouchSensor524.Description := 'HAnimSite 30 r_rib10';
{ .AddChildren }
HAnimSite523.AddChildren([TouchSensor524]);
Shape525 := TShapeNode.Create;
Shape525 := Shape30;
{ .AddChildren }
HAnimSite523.AddChildren([Shape525]);
Billboard526 := TBillboardNode.Create;
Shape527 := TShapeNode.Create;
Text528 := TTextNode.Create;
Text528.SetText(['30']);
FontStyle529 := TFontStyleNode.Create;
FontStyle529.Size := 0.035;
{ .SetFontStyle }
Text528.FontStyle := FontStyle529;
{ .SetGeometry }
Shape527.Geometry := Text528;
{ .AddChildren }
Billboard526.AddChildren([Shape527]);
{ .AddChildren }
HAnimSite523.AddChildren([Billboard526]);
{ .AddChildren }
HAnimSegment508.AddChildren([HAnimSite523]);
HAnimSite530 := THAnimSiteNode.Create;
HAnimSite530.NameField := 'spine_2_middle_back';
TouchSensor531 := TTouchSensorNode.Create;
TouchSensor531.Description := 'HAnimSite spine_2_middle_back';
{ .AddChildren }
HAnimSite530.AddChildren([TouchSensor531]);
Shape532 := TShapeNode.Create;
Shape532 := Shape30;
{ .AddChildren }
HAnimSite530.AddChildren([Shape532]);
Billboard533 := TBillboardNode.Create;
Shape534 := TShapeNode.Create;
Text535 := TTextNode.Create;
Text535.SetText(['']);
FontStyle536 := TFontStyleNode.Create;
FontStyle536.Size := 0.035;
{ .SetFontStyle }
Text535.FontStyle := FontStyle536;
{ .SetGeometry }
Shape534.Geometry := Text535;
{ .AddChildren }
Billboard533.AddChildren([Shape534]);
{ .AddChildren }
HAnimSite530.AddChildren([Billboard533]);
{ .AddChildren }
HAnimSegment508.AddChildren([HAnimSite530]);
{ .AddChildren }
HAnimJoint507.AddChildren([HAnimSegment508]);
HAnimJoint537 := THAnimJointNode.Create;
HAnimJoint537.NameField := 'vl1';
HAnimJoint537.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint537.SetUlimit([0,0,0]);
HAnimJoint537.SetLlimit([0,0,0]);
HAnimSegment538 := THAnimSegmentNode.Create;
HAnimSegment538.NameField := 'l1';
Transform539 := TTransformNode.Create;
Transform539.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform540 := TTransformNode.Create;
{ Empty Transform }
Shape541 := TShapeNode.Create;
Shape541 := Shape20;
{ .AddChild }
Transform540.AddChildren([Shape541]);
{ .AddChildren }
Transform539.AddChildren([Transform540]);
{ .AddChildren }
HAnimSegment538.AddChildren([Transform539]);
Shape542 := TShapeNode.Create;
LineSet543 := TLineSetNode.Create;
LineSet543.SetVertexCount([2]);
Coordinate544 := TCoordinateNode.Create;
Coordinate544.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ .SetCoord }
LineSet543.Coord := Coordinate544;
{ from vl1 to vt12 vertices 2 }
ColorRGBA545 := TColorRGBANode.Create;
ColorRGBA545 := ColorRGBA27;
{ .SetColor }
LineSet543.Color := ColorRGBA545;
{ .SetGeometry }
Shape542.Geometry := LineSet543;
{ .AddChildren }
HAnimSegment538.AddChildren([Shape542]);
{ .AddChildren }
HAnimJoint537.AddChildren([HAnimSegment538]);
HAnimJoint546 := THAnimJointNode.Create;
HAnimJoint546.NameField := 'vt12';
HAnimJoint546.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint546.SetUlimit([0,0,0]);
HAnimJoint546.SetLlimit([0,0,0]);
HAnimSegment547 := THAnimSegmentNode.Create;
HAnimSegment547.NameField := 't12';
Transform548 := TTransformNode.Create;
Transform548.Translation := Vector3(0.0051,1.2278,-0.0808);
Transform549 := TTransformNode.Create;
{ Empty Transform }
Shape550 := TShapeNode.Create;
Shape550 := Shape20;
{ .AddChild }
Transform549.AddChildren([Shape550]);
{ .AddChildren }
Transform548.AddChildren([Transform549]);
{ .AddChildren }
HAnimSegment547.AddChildren([Transform548]);
Shape551 := TShapeNode.Create;
LineSet552 := TLineSetNode.Create;
LineSet552.SetVertexCount([2]);
Coordinate553 := TCoordinateNode.Create;
Coordinate553.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ .SetCoord }
LineSet552.Coord := Coordinate553;
{ from vt12 to vt11 vertices 2 }
ColorRGBA554 := TColorRGBANode.Create;
ColorRGBA554 := ColorRGBA27;
{ .SetColor }
LineSet552.Color := ColorRGBA554;
{ .SetGeometry }
Shape551.Geometry := LineSet552;
{ .AddChildren }
HAnimSegment547.AddChildren([Shape551]);
{ .AddChildren }
HAnimJoint546.AddChildren([HAnimSegment547]);
HAnimJoint555 := THAnimJointNode.Create;
HAnimJoint555.NameField := 'vt11';
HAnimJoint555.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint555.SetUlimit([0,0,0]);
HAnimJoint555.SetLlimit([0,0,0]);
HAnimSegment556 := THAnimSegmentNode.Create;
HAnimSegment556.NameField := 't11';
Transform557 := TTransformNode.Create;
Transform557.Translation := Vector3(0.0053,1.2679,-0.081);
Transform558 := TTransformNode.Create;
{ Empty Transform }
Shape559 := TShapeNode.Create;
Shape559 := Shape20;
{ .AddChild }
Transform558.AddChildren([Shape559]);
{ .AddChildren }
Transform557.AddChildren([Transform558]);
{ .AddChildren }
HAnimSegment556.AddChildren([Transform557]);
Shape560 := TShapeNode.Create;
LineSet561 := TLineSetNode.Create;
LineSet561.SetVertexCount([2]);
Coordinate562 := TCoordinateNode.Create;
Coordinate562.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet561.Coord := Coordinate562;
{ from vt11 to vt10 vertices 2 }
ColorRGBA563 := TColorRGBANode.Create;
ColorRGBA563 := ColorRGBA27;
{ .SetColor }
LineSet561.Color := ColorRGBA563;
{ .SetGeometry }
Shape560.Geometry := LineSet561;
{ .AddChildren }
HAnimSegment556.AddChildren([Shape560]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimSegment556]);
HAnimJoint564 := THAnimJointNode.Create;
HAnimJoint564.NameField := 'vt10';
HAnimJoint564.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint564.SetUlimit([0,0,0]);
HAnimJoint564.SetLlimit([0,0,0]);
HAnimSegment565 := THAnimSegmentNode.Create;
HAnimSegment565.NameField := 't10';
Transform566 := TTransformNode.Create;
Transform566.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform567 := TTransformNode.Create;
{ Empty Transform }
Shape568 := TShapeNode.Create;
Shape568 := Shape20;
{ .AddChild }
Transform567.AddChildren([Shape568]);
{ .AddChildren }
Transform566.AddChildren([Transform567]);
{ .AddChildren }
HAnimSegment565.AddChildren([Transform566]);
Shape569 := TShapeNode.Create;
LineSet570 := TLineSetNode.Create;
LineSet570.SetVertexCount([2]);
Coordinate571 := TCoordinateNode.Create;
Coordinate571.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ .SetCoord }
LineSet570.Coord := Coordinate571;
{ from vt10 to vt9 vertices 2 }
ColorRGBA572 := TColorRGBANode.Create;
ColorRGBA572 := ColorRGBA27;
{ .SetColor }
LineSet570.Color := ColorRGBA572;
{ .SetGeometry }
Shape569.Geometry := LineSet570;
{ .AddChildren }
HAnimSegment565.AddChildren([Shape569]);
HAnimSite573 := THAnimSiteNode.Create;
HAnimSite573.NameField := 'substernale';
HAnimSite573.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor574 := TTouchSensorNode.Create;
TouchSensor574.Description := 'HAnimSite 13 substernale';
{ .AddChildren }
HAnimSite573.AddChildren([TouchSensor574]);
Shape575 := TShapeNode.Create;
Shape575 := Shape30;
{ .AddChildren }
HAnimSite573.AddChildren([Shape575]);
Billboard576 := TBillboardNode.Create;
Shape577 := TShapeNode.Create;
Text578 := TTextNode.Create;
Text578.SetText(['13']);
FontStyle579 := TFontStyleNode.Create;
FontStyle579.Size := 0.035;
{ .SetFontStyle }
Text578.FontStyle := FontStyle579;
{ .SetGeometry }
Shape577.Geometry := Text578;
{ .AddChildren }
Billboard576.AddChildren([Shape577]);
{ .AddChildren }
HAnimSite573.AddChildren([Billboard576]);
{ .AddChildren }
HAnimSegment565.AddChildren([HAnimSite573]);
{ .AddChildren }
HAnimJoint564.AddChildren([HAnimSegment565]);
HAnimJoint580 := THAnimJointNode.Create;
HAnimJoint580.NameField := 'vt9';
HAnimJoint580.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint580.SetUlimit([0,0,0]);
HAnimJoint580.SetLlimit([0,0,0]);
HAnimSegment581 := THAnimSegmentNode.Create;
HAnimSegment581.NameField := 't9';
Transform582 := TTransformNode.Create;
Transform582.Translation := Vector3(0.0057,1.3126,-0.0838);
Transform583 := TTransformNode.Create;
{ Empty Transform }
Shape584 := TShapeNode.Create;
Shape584 := Shape20;
{ .AddChild }
Transform583.AddChildren([Shape584]);
{ .AddChildren }
Transform582.AddChildren([Transform583]);
{ .AddChildren }
HAnimSegment581.AddChildren([Transform582]);
Shape585 := TShapeNode.Create;
LineSet586 := TLineSetNode.Create;
LineSet586.SetVertexCount([2]);
Coordinate587 := TCoordinateNode.Create;
Coordinate587.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ .SetCoord }
LineSet586.Coord := Coordinate587;
{ from vt9 to vt8 vertices 2 }
ColorRGBA588 := TColorRGBANode.Create;
ColorRGBA588 := ColorRGBA27;
{ .SetColor }
LineSet586.Color := ColorRGBA588;
{ .SetGeometry }
Shape585.Geometry := LineSet586;
{ .AddChildren }
HAnimSegment581.AddChildren([Shape585]);
HAnimSite589 := THAnimSiteNode.Create;
HAnimSite589.NameField := 'l_thelion';
HAnimSite589.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor590 := TTouchSensorNode.Create;
TouchSensor590.Description := 'HAnimSite 29 l_thelion';
{ .AddChildren }
HAnimSite589.AddChildren([TouchSensor590]);
Shape591 := TShapeNode.Create;
Shape591 := Shape30;
{ .AddChildren }
HAnimSite589.AddChildren([Shape591]);
Billboard592 := TBillboardNode.Create;
Shape593 := TShapeNode.Create;
Text594 := TTextNode.Create;
Text594.SetText(['29']);
FontStyle595 := TFontStyleNode.Create;
FontStyle595.Size := 0.035;
{ .SetFontStyle }
Text594.FontStyle := FontStyle595;
{ .SetGeometry }
Shape593.Geometry := Text594;
{ .AddChildren }
Billboard592.AddChildren([Shape593]);
{ .AddChildren }
HAnimSite589.AddChildren([Billboard592]);
{ .AddChildren }
HAnimSegment581.AddChildren([HAnimSite589]);
HAnimSite596 := THAnimSiteNode.Create;
HAnimSite596.NameField := 'r_thelion';
HAnimSite596.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor597 := TTouchSensorNode.Create;
TouchSensor597.Description := 'HAnimSite 31 r_thelion';
{ .AddChildren }
HAnimSite596.AddChildren([TouchSensor597]);
Shape598 := TShapeNode.Create;
Shape598 := Shape30;
{ .AddChildren }
HAnimSite596.AddChildren([Shape598]);
Billboard599 := TBillboardNode.Create;
Shape600 := TShapeNode.Create;
Text601 := TTextNode.Create;
Text601.SetText(['31']);
FontStyle602 := TFontStyleNode.Create;
FontStyle602.Size := 0.035;
{ .SetFontStyle }
Text601.FontStyle := FontStyle602;
{ .SetGeometry }
Shape600.Geometry := Text601;
{ .AddChildren }
Billboard599.AddChildren([Shape600]);
{ .AddChildren }
HAnimSite596.AddChildren([Billboard599]);
{ .AddChildren }
HAnimSegment581.AddChildren([HAnimSite596]);
{ .AddChildren }
HAnimJoint580.AddChildren([HAnimSegment581]);
HAnimJoint603 := THAnimJointNode.Create;
HAnimJoint603.NameField := 'vt8';
HAnimJoint603.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint603.SetUlimit([0,0,0]);
HAnimJoint603.SetLlimit([0,0,0]);
HAnimSegment604 := THAnimSegmentNode.Create;
HAnimSegment604.NameField := 't8';
Transform605 := TTransformNode.Create;
Transform605.Translation := Vector3(0.0057,1.3382,-0.0845);
Transform606 := TTransformNode.Create;
{ Empty Transform }
Shape607 := TShapeNode.Create;
Shape607 := Shape20;
{ .AddChild }
Transform606.AddChildren([Shape607]);
{ .AddChildren }
Transform605.AddChildren([Transform606]);
{ .AddChildren }
HAnimSegment604.AddChildren([Transform605]);
Shape608 := TShapeNode.Create;
LineSet609 := TLineSetNode.Create;
LineSet609.SetVertexCount([2]);
Coordinate610 := TCoordinateNode.Create;
Coordinate610.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ .SetCoord }
LineSet609.Coord := Coordinate610;
{ from vt8 to vt7 vertices 2 }
ColorRGBA611 := TColorRGBANode.Create;
ColorRGBA611 := ColorRGBA27;
{ .SetColor }
LineSet609.Color := ColorRGBA611;
{ .SetGeometry }
Shape608.Geometry := LineSet609;
{ .AddChildren }
HAnimSegment604.AddChildren([Shape608]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimSegment604]);
HAnimJoint612 := THAnimJointNode.Create;
HAnimJoint612.NameField := 'vt7';
HAnimJoint612.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint612.SetUlimit([0,0,0]);
HAnimJoint612.SetLlimit([0,0,0]);
HAnimSegment613 := THAnimSegmentNode.Create;
HAnimSegment613.NameField := 't7';
Transform614 := TTransformNode.Create;
Transform614.Translation := Vector3(0.0058,1.3625,-0.0833);
Transform615 := TTransformNode.Create;
{ Empty Transform }
Shape616 := TShapeNode.Create;
Shape616 := Shape20;
{ .AddChild }
Transform615.AddChildren([Shape616]);
{ .AddChildren }
Transform614.AddChildren([Transform615]);
{ .AddChildren }
HAnimSegment613.AddChildren([Transform614]);
Shape617 := TShapeNode.Create;
LineSet618 := TLineSetNode.Create;
LineSet618.SetVertexCount([2]);
Coordinate619 := TCoordinateNode.Create;
Coordinate619.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet618.Coord := Coordinate619;
{ from vt7 to vt6 vertices 2 }
ColorRGBA620 := TColorRGBANode.Create;
ColorRGBA620 := ColorRGBA27;
{ .SetColor }
LineSet618.Color := ColorRGBA620;
{ .SetGeometry }
Shape617.Geometry := LineSet618;
{ .AddChildren }
HAnimSegment613.AddChildren([Shape617]);
{ .AddChildren }
HAnimJoint612.AddChildren([HAnimSegment613]);
HAnimJoint621 := THAnimJointNode.Create;
HAnimJoint621.NameField := 'vt6';
HAnimJoint621.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint621.SetUlimit([0,0,0]);
HAnimJoint621.SetLlimit([0,0,0]);
HAnimSegment622 := THAnimSegmentNode.Create;
HAnimSegment622.NameField := 't6';
Transform623 := TTransformNode.Create;
Transform623.Translation := Vector3(0.0059,1.3866,-0.08);
Transform624 := TTransformNode.Create;
{ Empty Transform }
Shape625 := TShapeNode.Create;
Shape625 := Shape20;
{ .AddChild }
Transform624.AddChildren([Shape625]);
{ .AddChildren }
Transform623.AddChildren([Transform624]);
{ .AddChildren }
HAnimSegment622.AddChildren([Transform623]);
Shape626 := TShapeNode.Create;
LineSet627 := TLineSetNode.Create;
LineSet627.SetVertexCount([2]);
Coordinate628 := TCoordinateNode.Create;
Coordinate628.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ .SetCoord }
LineSet627.Coord := Coordinate628;
{ from vt6 to vt5 vertices 2 }
ColorRGBA629 := TColorRGBANode.Create;
ColorRGBA629 := ColorRGBA27;
{ .SetColor }
LineSet627.Color := ColorRGBA629;
{ .SetGeometry }
Shape626.Geometry := LineSet627;
{ .AddChildren }
HAnimSegment622.AddChildren([Shape626]);
HAnimSite630 := THAnimSiteNode.Create;
HAnimSite630.NameField := 'l_chest_midsagittal_plane';
TouchSensor631 := TTouchSensorNode.Create;
TouchSensor631.Description := 'HAnimSite 94 l_chest_midsagittal_plane';
{ .AddChildren }
HAnimSite630.AddChildren([TouchSensor631]);
Shape632 := TShapeNode.Create;
Shape632 := Shape30;
{ .AddChildren }
HAnimSite630.AddChildren([Shape632]);
Billboard633 := TBillboardNode.Create;
Shape634 := TShapeNode.Create;
Text635 := TTextNode.Create;
Text635.SetText(['94']);
FontStyle636 := TFontStyleNode.Create;
FontStyle636.Size := 0.035;
{ .SetFontStyle }
Text635.FontStyle := FontStyle636;
{ .SetGeometry }
Shape634.Geometry := Text635;
{ .AddChildren }
Billboard633.AddChildren([Shape634]);
{ .AddChildren }
HAnimSite630.AddChildren([Billboard633]);
{ .AddChildren }
HAnimSegment622.AddChildren([HAnimSite630]);
HAnimSite637 := THAnimSiteNode.Create;
HAnimSite637.NameField := 'mesosternale';
TouchSensor638 := TTouchSensorNode.Create;
TouchSensor638.Description := 'HAnimSite 88 mesosternale';
{ .AddChildren }
HAnimSite637.AddChildren([TouchSensor638]);
Shape639 := TShapeNode.Create;
Shape639 := Shape30;
{ .AddChildren }
HAnimSite637.AddChildren([Shape639]);
Billboard640 := TBillboardNode.Create;
Shape641 := TShapeNode.Create;
Text642 := TTextNode.Create;
Text642.SetText(['88']);
FontStyle643 := TFontStyleNode.Create;
FontStyle643.Size := 0.035;
{ .SetFontStyle }
Text642.FontStyle := FontStyle643;
{ .SetGeometry }
Shape641.Geometry := Text642;
{ .AddChildren }
Billboard640.AddChildren([Shape641]);
{ .AddChildren }
HAnimSite637.AddChildren([Billboard640]);
{ .AddChildren }
HAnimSegment622.AddChildren([HAnimSite637]);
HAnimSite644 := THAnimSiteNode.Create;
HAnimSite644.NameField := 'r_chest_midsagittal_plane';
TouchSensor645 := TTouchSensorNode.Create;
TouchSensor645.Description := 'HAnimSite 95 r_chest_midsagittal_plane';
{ .AddChildren }
HAnimSite644.AddChildren([TouchSensor645]);
Shape646 := TShapeNode.Create;
Shape646 := Shape30;
{ .AddChildren }
HAnimSite644.AddChildren([Shape646]);
Billboard647 := TBillboardNode.Create;
Shape648 := TShapeNode.Create;
Text649 := TTextNode.Create;
Text649.SetText(['95']);
FontStyle650 := TFontStyleNode.Create;
FontStyle650.Size := 0.035;
{ .SetFontStyle }
Text649.FontStyle := FontStyle650;
{ .SetGeometry }
Shape648.Geometry := Text649;
{ .AddChildren }
Billboard647.AddChildren([Shape648]);
{ .AddChildren }
HAnimSite644.AddChildren([Billboard647]);
{ .AddChildren }
HAnimSegment622.AddChildren([HAnimSite644]);
HAnimSite651 := THAnimSiteNode.Create;
HAnimSite651.NameField := 'rear_center_midsagittal_plane';
TouchSensor652 := TTouchSensorNode.Create;
TouchSensor652.Description := 'HAnimSite 92 rear_center_midsagittal_plane';
{ .AddChildren }
HAnimSite651.AddChildren([TouchSensor652]);
Shape653 := TShapeNode.Create;
Shape653 := Shape30;
{ .AddChildren }
HAnimSite651.AddChildren([Shape653]);
Billboard654 := TBillboardNode.Create;
Shape655 := TShapeNode.Create;
Text656 := TTextNode.Create;
Text656.SetText(['92']);
FontStyle657 := TFontStyleNode.Create;
FontStyle657.Size := 0.035;
{ .SetFontStyle }
Text656.FontStyle := FontStyle657;
{ .SetGeometry }
Shape655.Geometry := Text656;
{ .AddChildren }
Billboard654.AddChildren([Shape655]);
{ .AddChildren }
HAnimSite651.AddChildren([Billboard654]);
{ .AddChildren }
HAnimSegment622.AddChildren([HAnimSite651]);
{ .AddChildren }
HAnimJoint621.AddChildren([HAnimSegment622]);
HAnimJoint658 := THAnimJointNode.Create;
HAnimJoint658.NameField := 'vt5';
HAnimJoint658.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint658.SetUlimit([0,0,0]);
HAnimJoint658.SetLlimit([0,0,0]);
HAnimSegment659 := THAnimSegmentNode.Create;
HAnimSegment659.NameField := 't5';
Transform660 := TTransformNode.Create;
Transform660.Translation := Vector3(0.006,1.4102,-0.0745);
Transform661 := TTransformNode.Create;
{ Empty Transform }
Shape662 := TShapeNode.Create;
Shape662 := Shape20;
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
Coordinate665.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ .SetCoord }
LineSet664.Coord := Coordinate665;
{ from vt5 to vt4 vertices 2 }
ColorRGBA666 := TColorRGBANode.Create;
ColorRGBA666 := ColorRGBA27;
{ .SetColor }
LineSet664.Color := ColorRGBA666;
{ .SetGeometry }
Shape663.Geometry := LineSet664;
{ .AddChildren }
HAnimSegment659.AddChildren([Shape663]);
HAnimSite667 := THAnimSiteNode.Create;
HAnimSite667.NameField := 'spine_1_middle_back';
TouchSensor668 := TTouchSensorNode.Create;
TouchSensor668.Description := 'HAnimSite 24 spine_1_middle_back';
{ .AddChildren }
HAnimSite667.AddChildren([TouchSensor668]);
Shape669 := TShapeNode.Create;
Shape669 := Shape30;
{ .AddChildren }
HAnimSite667.AddChildren([Shape669]);
Billboard670 := TBillboardNode.Create;
Shape671 := TShapeNode.Create;
Text672 := TTextNode.Create;
Text672.SetText(['24']);
FontStyle673 := TFontStyleNode.Create;
FontStyle673.Size := 0.035;
{ .SetFontStyle }
Text672.FontStyle := FontStyle673;
{ .SetGeometry }
Shape671.Geometry := Text672;
{ .AddChildren }
Billboard670.AddChildren([Shape671]);
{ .AddChildren }
HAnimSite667.AddChildren([Billboard670]);
{ .AddChildren }
HAnimSegment659.AddChildren([HAnimSite667]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimSegment659]);
HAnimJoint674 := THAnimJointNode.Create;
HAnimJoint674.NameField := 'vt4';
HAnimJoint674.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint674.SetUlimit([0,0,0]);
HAnimJoint674.SetLlimit([0,0,0]);
HAnimSegment675 := THAnimSegmentNode.Create;
HAnimSegment675.NameField := 't4';
Transform676 := TTransformNode.Create;
Transform676.Translation := Vector3(0.0061,1.432,-0.0675);
Transform677 := TTransformNode.Create;
{ Empty Transform }
Shape678 := TShapeNode.Create;
Shape678 := Shape20;
{ .AddChild }
Transform677.AddChildren([Shape678]);
{ .AddChildren }
Transform676.AddChildren([Transform677]);
{ .AddChildren }
HAnimSegment675.AddChildren([Transform676]);
Shape679 := TShapeNode.Create;
LineSet680 := TLineSetNode.Create;
LineSet680.SetVertexCount([2]);
Coordinate681 := TCoordinateNode.Create;
Coordinate681.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ .SetCoord }
LineSet680.Coord := Coordinate681;
{ from vt4 to vt3 vertices 2 }
ColorRGBA682 := TColorRGBANode.Create;
ColorRGBA682 := ColorRGBA27;
{ .SetColor }
LineSet680.Color := ColorRGBA682;
{ .SetGeometry }
Shape679.Geometry := LineSet680;
{ .AddChildren }
HAnimSegment675.AddChildren([Shape679]);
{ .AddChildren }
HAnimJoint674.AddChildren([HAnimSegment675]);
HAnimJoint683 := THAnimJointNode.Create;
HAnimJoint683.NameField := 'vt3';
HAnimJoint683.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint683.SetUlimit([0,0,0]);
HAnimJoint683.SetLlimit([0,0,0]);
HAnimSegment684 := THAnimSegmentNode.Create;
HAnimSegment684.NameField := 't3';
Transform685 := TTransformNode.Create;
Transform685.Translation := Vector3(0.0062,1.4583,-0.057);
Transform686 := TTransformNode.Create;
{ Empty Transform }
Shape687 := TShapeNode.Create;
Shape687 := Shape20;
{ .AddChild }
Transform686.AddChildren([Shape687]);
{ .AddChildren }
Transform685.AddChildren([Transform686]);
{ .AddChildren }
HAnimSegment684.AddChildren([Transform685]);
Shape688 := TShapeNode.Create;
LineSet689 := TLineSetNode.Create;
LineSet689.SetVertexCount([2]);
Coordinate690 := TCoordinateNode.Create;
Coordinate690.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ .SetCoord }
LineSet689.Coord := Coordinate690;
{ from vt3 to vt2 vertices 2 }
ColorRGBA691 := TColorRGBANode.Create;
ColorRGBA691 := ColorRGBA27;
{ .SetColor }
LineSet689.Color := ColorRGBA691;
{ .SetGeometry }
Shape688.Geometry := LineSet689;
{ .AddChildren }
HAnimSegment684.AddChildren([Shape688]);
{ .AddChildren }
HAnimJoint683.AddChildren([HAnimSegment684]);
HAnimJoint692 := THAnimJointNode.Create;
HAnimJoint692.NameField := 'vt2';
HAnimJoint692.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint692.SetUlimit([0,0,0]);
HAnimJoint692.SetLlimit([0,0,0]);
HAnimSegment693 := THAnimSegmentNode.Create;
HAnimSegment693.NameField := 't2';
Transform694 := TTransformNode.Create;
Transform694.Translation := Vector3(0.0063,1.4761,-0.0484);
Transform695 := TTransformNode.Create;
{ Empty Transform }
Shape696 := TShapeNode.Create;
Shape696 := Shape20;
{ .AddChild }
Transform695.AddChildren([Shape696]);
{ .AddChildren }
Transform694.AddChildren([Transform695]);
{ .AddChildren }
HAnimSegment693.AddChildren([Transform694]);
Shape697 := TShapeNode.Create;
LineSet698 := TLineSetNode.Create;
LineSet698.SetVertexCount([2]);
Coordinate699 := TCoordinateNode.Create;
Coordinate699.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet698.Coord := Coordinate699;
{ from vt2 to vt1 vertices 2 }
ColorRGBA700 := TColorRGBANode.Create;
ColorRGBA700 := ColorRGBA27;
{ .SetColor }
LineSet698.Color := ColorRGBA700;
{ .SetGeometry }
Shape697.Geometry := LineSet698;
{ .AddChildren }
HAnimSegment693.AddChildren([Shape697]);
{ .AddChildren }
HAnimJoint692.AddChildren([HAnimSegment693]);
HAnimJoint701 := THAnimJointNode.Create;
HAnimJoint701.NameField := 'vt1';
HAnimJoint701.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint701.SetUlimit([0,0,0]);
HAnimJoint701.SetLlimit([0,0,0]);
HAnimSegment702 := THAnimSegmentNode.Create;
HAnimSegment702.NameField := 't1';
Transform703 := TTransformNode.Create;
Transform703.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform704 := TTransformNode.Create;
{ Empty Transform }
Shape705 := TShapeNode.Create;
Shape705 := Shape20;
{ .AddChild }
Transform704.AddChildren([Shape705]);
{ .AddChildren }
Transform703.AddChildren([Transform704]);
{ .AddChildren }
HAnimSegment702.AddChildren([Transform703]);
Shape706 := TShapeNode.Create;
LineSet707 := TLineSetNode.Create;
LineSet707.SetVertexCount([2]);
Coordinate708 := TCoordinateNode.Create;
Coordinate708.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ .SetCoord }
LineSet707.Coord := Coordinate708;
{ from vt1 to vc7 vertices 2 }
ColorRGBA709 := TColorRGBANode.Create;
ColorRGBA709 := ColorRGBA27;
{ .SetColor }
LineSet707.Color := ColorRGBA709;
{ .SetGeometry }
Shape706.Geometry := LineSet707;
{ .AddChildren }
HAnimSegment702.AddChildren([Shape706]);
HAnimSite710 := THAnimSiteNode.Create;
HAnimSite710.NameField := 'cervicale';
HAnimSite710.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor711 := TTouchSensorNode.Create;
TouchSensor711.Description := 'HAnimSite 10 cervicale';
{ .AddChildren }
HAnimSite710.AddChildren([TouchSensor711]);
Shape712 := TShapeNode.Create;
Shape712 := Shape30;
{ .AddChildren }
HAnimSite710.AddChildren([Shape712]);
Billboard713 := TBillboardNode.Create;
Shape714 := TShapeNode.Create;
Text715 := TTextNode.Create;
Text715.SetText(['10']);
FontStyle716 := TFontStyleNode.Create;
FontStyle716.Size := 0.035;
{ .SetFontStyle }
Text715.FontStyle := FontStyle716;
{ .SetGeometry }
Shape714.Geometry := Text715;
{ .AddChildren }
Billboard713.AddChildren([Shape714]);
{ .AddChildren }
HAnimSite710.AddChildren([Billboard713]);
{ .AddChildren }
HAnimSegment702.AddChildren([HAnimSite710]);
HAnimSite717 := THAnimSiteNode.Create;
HAnimSite717.NameField := 'suprasternale';
HAnimSite717.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor718 := TTouchSensorNode.Create;
TouchSensor718.Description := 'HAnimSite 12 suprasternale';
{ .AddChildren }
HAnimSite717.AddChildren([TouchSensor718]);
Shape719 := TShapeNode.Create;
Shape719 := Shape30;
{ .AddChildren }
HAnimSite717.AddChildren([Shape719]);
Billboard720 := TBillboardNode.Create;
Shape721 := TShapeNode.Create;
Text722 := TTextNode.Create;
Text722.SetText(['12']);
FontStyle723 := TFontStyleNode.Create;
FontStyle723.Size := 0.035;
{ .SetFontStyle }
Text722.FontStyle := FontStyle723;
{ .SetGeometry }
Shape721.Geometry := Text722;
{ .AddChildren }
Billboard720.AddChildren([Shape721]);
{ .AddChildren }
HAnimSite717.AddChildren([Billboard720]);
{ .AddChildren }
HAnimSegment702.AddChildren([HAnimSite717]);
Shape724 := TShapeNode.Create;
LineSet725 := TLineSetNode.Create;
LineSet725.SetVertexCount([2]);
Coordinate726 := TCoordinateNode.Create;
Coordinate726.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet725.Coord := Coordinate726;
{ from vt1 to l_sternoclavicular vertices 2 }
ColorRGBA727 := TColorRGBANode.Create;
ColorRGBA727 := ColorRGBA27;
{ .SetColor }
LineSet725.Color := ColorRGBA727;
{ .SetGeometry }
Shape724.Geometry := LineSet725;
{ .AddChildren }
HAnimSegment702.AddChildren([Shape724]);
Shape728 := TShapeNode.Create;
LineSet729 := TLineSetNode.Create;
LineSet729.SetVertexCount([2]);
Coordinate730 := TCoordinateNode.Create;
Coordinate730.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ .SetCoord }
LineSet729.Coord := Coordinate730;
{ from vt1 to r_sternoclavicular vertices 2 }
ColorRGBA731 := TColorRGBANode.Create;
ColorRGBA731 := ColorRGBA27;
{ .SetColor }
LineSet729.Color := ColorRGBA731;
{ .SetGeometry }
Shape728.Geometry := LineSet729;
{ .AddChildren }
HAnimSegment702.AddChildren([Shape728]);
{ .AddChildren }
HAnimJoint701.AddChildren([HAnimSegment702]);
HAnimJoint732 := THAnimJointNode.Create;
HAnimJoint732.NameField := 'vc7';
HAnimJoint732.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint732.SetUlimit([0,0,0]);
HAnimJoint732.SetLlimit([0,0,0]);
HAnimSegment733 := THAnimSegmentNode.Create;
HAnimSegment733.NameField := 'c7';
Transform734 := TTransformNode.Create;
Transform734.Translation := Vector3(0.0066,1.5132,-0.0301);
Transform735 := TTransformNode.Create;
{ Empty Transform }
Shape736 := TShapeNode.Create;
Shape736 := Shape20;
{ .AddChild }
Transform735.AddChildren([Shape736]);
{ .AddChildren }
Transform734.AddChildren([Transform735]);
{ .AddChildren }
HAnimSegment733.AddChildren([Transform734]);
Shape737 := TShapeNode.Create;
LineSet738 := TLineSetNode.Create;
LineSet738.SetVertexCount([2]);
Coordinate739 := TCoordinateNode.Create;
Coordinate739.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ .SetCoord }
LineSet738.Coord := Coordinate739;
{ from vc7 to vc6 vertices 2 }
ColorRGBA740 := TColorRGBANode.Create;
ColorRGBA740 := ColorRGBA27;
{ .SetColor }
LineSet738.Color := ColorRGBA740;
{ .SetGeometry }
Shape737.Geometry := LineSet738;
{ .AddChildren }
HAnimSegment733.AddChildren([Shape737]);
HAnimSite741 := THAnimSiteNode.Create;
HAnimSite741.NameField := 'l_neck_base';
HAnimSite741.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor742 := TTouchSensorNode.Create;
TouchSensor742.Description := 'HAnimSite 82 l_neck_base';
{ .AddChildren }
HAnimSite741.AddChildren([TouchSensor742]);
Shape743 := TShapeNode.Create;
Shape743 := Shape30;
{ .AddChildren }
HAnimSite741.AddChildren([Shape743]);
Billboard744 := TBillboardNode.Create;
Shape745 := TShapeNode.Create;
Text746 := TTextNode.Create;
Text746.SetText(['82']);
FontStyle747 := TFontStyleNode.Create;
FontStyle747.Size := 0.035;
{ .SetFontStyle }
Text746.FontStyle := FontStyle747;
{ .SetGeometry }
Shape745.Geometry := Text746;
{ .AddChildren }
Billboard744.AddChildren([Shape745]);
{ .AddChildren }
HAnimSite741.AddChildren([Billboard744]);
{ .AddChildren }
HAnimSegment733.AddChildren([HAnimSite741]);
HAnimSite748 := THAnimSiteNode.Create;
HAnimSite748.NameField := 'r_neck_base';
HAnimSite748.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor749 := TTouchSensorNode.Create;
TouchSensor749.Description := 'HAnimSite 83 r_neck_base';
{ .AddChildren }
HAnimSite748.AddChildren([TouchSensor749]);
Shape750 := TShapeNode.Create;
Shape750 := Shape30;
{ .AddChildren }
HAnimSite748.AddChildren([Shape750]);
Billboard751 := TBillboardNode.Create;
Shape752 := TShapeNode.Create;
Text753 := TTextNode.Create;
Text753.SetText(['83']);
FontStyle754 := TFontStyleNode.Create;
FontStyle754.Size := 0.035;
{ .SetFontStyle }
Text753.FontStyle := FontStyle754;
{ .SetGeometry }
Shape752.Geometry := Text753;
{ .AddChildren }
Billboard751.AddChildren([Shape752]);
{ .AddChildren }
HAnimSite748.AddChildren([Billboard751]);
{ .AddChildren }
HAnimSegment733.AddChildren([HAnimSite748]);
{ .AddChildren }
HAnimJoint732.AddChildren([HAnimSegment733]);
HAnimJoint755 := THAnimJointNode.Create;
HAnimJoint755.NameField := 'vc6';
HAnimJoint755.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint755.SetUlimit([0,0,0]);
HAnimJoint755.SetLlimit([0,0,0]);
HAnimSegment756 := THAnimSegmentNode.Create;
HAnimSegment756.NameField := 'c6';
Transform757 := TTransformNode.Create;
Transform757.Translation := Vector3(0.0066,1.5357,-0.0143);
Transform758 := TTransformNode.Create;
{ Empty Transform }
Shape759 := TShapeNode.Create;
Shape759 := Shape20;
{ .AddChild }
Transform758.AddChildren([Shape759]);
{ .AddChildren }
Transform757.AddChildren([Transform758]);
{ .AddChildren }
HAnimSegment756.AddChildren([Transform757]);
Shape760 := TShapeNode.Create;
LineSet761 := TLineSetNode.Create;
LineSet761.SetVertexCount([2]);
Coordinate762 := TCoordinateNode.Create;
Coordinate762.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ .SetCoord }
LineSet761.Coord := Coordinate762;
{ from vc6 to vc5 vertices 2 }
ColorRGBA763 := TColorRGBANode.Create;
ColorRGBA763 := ColorRGBA27;
{ .SetColor }
LineSet761.Color := ColorRGBA763;
{ .SetGeometry }
Shape760.Geometry := LineSet761;
{ .AddChildren }
HAnimSegment756.AddChildren([Shape760]);
{ .AddChildren }
HAnimJoint755.AddChildren([HAnimSegment756]);
HAnimJoint764 := THAnimJointNode.Create;
HAnimJoint764.NameField := 'vc5';
HAnimJoint764.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint764.SetUlimit([0,0,0]);
HAnimJoint764.SetLlimit([0,0,0]);
HAnimSegment765 := THAnimSegmentNode.Create;
HAnimSegment765.NameField := 'c5';
Transform766 := TTransformNode.Create;
Transform766.Translation := Vector3(0.0066,1.552,-0.0082);
Transform767 := TTransformNode.Create;
{ Empty Transform }
Shape768 := TShapeNode.Create;
Shape768 := Shape20;
{ .AddChild }
Transform767.AddChildren([Shape768]);
{ .AddChildren }
Transform766.AddChildren([Transform767]);
{ .AddChildren }
HAnimSegment765.AddChildren([Transform766]);
Shape769 := TShapeNode.Create;
LineSet770 := TLineSetNode.Create;
LineSet770.SetVertexCount([2]);
Coordinate771 := TCoordinateNode.Create;
Coordinate771.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet770.Coord := Coordinate771;
{ from vc5 to vc4 vertices 2 }
ColorRGBA772 := TColorRGBANode.Create;
ColorRGBA772 := ColorRGBA27;
{ .SetColor }
LineSet770.Color := ColorRGBA772;
{ .SetGeometry }
Shape769.Geometry := LineSet770;
{ .AddChildren }
HAnimSegment765.AddChildren([Shape769]);
{ .AddChildren }
HAnimJoint764.AddChildren([HAnimSegment765]);
HAnimJoint773 := THAnimJointNode.Create;
HAnimJoint773.NameField := 'vc4';
HAnimJoint773.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint773.SetUlimit([0,0,0]);
HAnimJoint773.SetLlimit([0,0,0]);
HAnimSegment774 := THAnimSegmentNode.Create;
HAnimSegment774.NameField := 'c4';
Transform775 := TTransformNode.Create;
Transform775.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform776 := TTransformNode.Create;
{ Empty Transform }
Shape777 := TShapeNode.Create;
Shape777 := Shape20;
{ .AddChild }
Transform776.AddChildren([Shape777]);
{ .AddChildren }
Transform775.AddChildren([Transform776]);
{ .AddChildren }
HAnimSegment774.AddChildren([Transform775]);
Shape778 := TShapeNode.Create;
LineSet779 := TLineSetNode.Create;
LineSet779.SetVertexCount([2]);
Coordinate780 := TCoordinateNode.Create;
Coordinate780.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ .SetCoord }
LineSet779.Coord := Coordinate780;
{ from vc4 to vc3 vertices 2 }
ColorRGBA781 := TColorRGBANode.Create;
ColorRGBA781 := ColorRGBA27;
{ .SetColor }
LineSet779.Color := ColorRGBA781;
{ .SetGeometry }
Shape778.Geometry := LineSet779;
{ .AddChildren }
HAnimSegment774.AddChildren([Shape778]);
{ .AddChildren }
HAnimJoint773.AddChildren([HAnimSegment774]);
HAnimJoint782 := THAnimJointNode.Create;
HAnimJoint782.NameField := 'vc3';
HAnimJoint782.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint782.SetUlimit([0,0,0]);
HAnimJoint782.SetLlimit([0,0,0]);
HAnimSegment783 := THAnimSegmentNode.Create;
HAnimSegment783.NameField := 'c3';
Transform784 := TTransformNode.Create;
Transform784.Translation := Vector3(0.0066,1.58,-0.0103);
Transform785 := TTransformNode.Create;
{ Empty Transform }
Shape786 := TShapeNode.Create;
Shape786 := Shape20;
{ .AddChild }
Transform785.AddChildren([Shape786]);
{ .AddChildren }
Transform784.AddChildren([Transform785]);
{ .AddChildren }
HAnimSegment783.AddChildren([Transform784]);
Shape787 := TShapeNode.Create;
LineSet788 := TLineSetNode.Create;
LineSet788.SetVertexCount([2]);
Coordinate789 := TCoordinateNode.Create;
Coordinate789.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet788.Coord := Coordinate789;
{ from vc3 to vc2 vertices 2 }
ColorRGBA790 := TColorRGBANode.Create;
ColorRGBA790 := ColorRGBA27;
{ .SetColor }
LineSet788.Color := ColorRGBA790;
{ .SetGeometry }
Shape787.Geometry := LineSet788;
{ .AddChildren }
HAnimSegment783.AddChildren([Shape787]);
{ .AddChildren }
HAnimJoint782.AddChildren([HAnimSegment783]);
HAnimJoint791 := THAnimJointNode.Create;
HAnimJoint791.NameField := 'vc2';
HAnimJoint791.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint791.SetUlimit([0,0,0]);
HAnimJoint791.SetLlimit([0,0,0]);
HAnimSegment792 := THAnimSegmentNode.Create;
HAnimSegment792.NameField := 'c2';
Transform793 := TTransformNode.Create;
Transform793.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform794 := TTransformNode.Create;
{ Empty Transform }
Shape795 := TShapeNode.Create;
Shape795 := Shape20;
{ .AddChild }
Transform794.AddChildren([Shape795]);
{ .AddChildren }
Transform793.AddChildren([Transform794]);
{ .AddChildren }
HAnimSegment792.AddChildren([Transform793]);
Shape796 := TShapeNode.Create;
LineSet797 := TLineSetNode.Create;
LineSet797.SetVertexCount([2]);
Coordinate798 := TCoordinateNode.Create;
Coordinate798.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ .SetCoord }
LineSet797.Coord := Coordinate798;
{ from vc2 to vc1 vertices 2 }
ColorRGBA799 := TColorRGBANode.Create;
ColorRGBA799 := ColorRGBA27;
{ .SetColor }
LineSet797.Color := ColorRGBA799;
{ .SetGeometry }
Shape796.Geometry := LineSet797;
{ .AddChildren }
HAnimSegment792.AddChildren([Shape796]);
HAnimSite800 := THAnimSiteNode.Create;
HAnimSite800.NameField := 'adams_apple';
TouchSensor801 := TTouchSensorNode.Create;
TouchSensor801.Description := 'HAnimSite 11 adams_apple';
{ .AddChildren }
HAnimSite800.AddChildren([TouchSensor801]);
Shape802 := TShapeNode.Create;
Shape802 := Shape30;
{ .AddChildren }
HAnimSite800.AddChildren([Shape802]);
Billboard803 := TBillboardNode.Create;
Shape804 := TShapeNode.Create;
Text805 := TTextNode.Create;
Text805.SetText(['11']);
FontStyle806 := TFontStyleNode.Create;
FontStyle806.Size := 0.035;
{ .SetFontStyle }
Text805.FontStyle := FontStyle806;
{ .SetGeometry }
Shape804.Geometry := Text805;
{ .AddChildren }
Billboard803.AddChildren([Shape804]);
{ .AddChildren }
HAnimSite800.AddChildren([Billboard803]);
{ .AddChildren }
HAnimSegment792.AddChildren([HAnimSite800]);
{ .AddChildren }
HAnimJoint791.AddChildren([HAnimSegment792]);
HAnimJoint807 := THAnimJointNode.Create;
HAnimJoint807.NameField := 'vc1';
HAnimJoint807.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint807.SetUlimit([0,0,0]);
HAnimJoint807.SetLlimit([0,0,0]);
HAnimSegment808 := THAnimSegmentNode.Create;
HAnimSegment808.NameField := 'c1';
Transform809 := TTransformNode.Create;
Transform809.Translation := Vector3(0.0066,1.6144,-0.0034);
Transform810 := TTransformNode.Create;
{ Empty Transform }
Shape811 := TShapeNode.Create;
Shape811 := Shape20;
{ .AddChild }
Transform810.AddChildren([Shape811]);
{ .AddChildren }
Transform809.AddChildren([Transform810]);
{ .AddChildren }
HAnimSegment808.AddChildren([Transform809]);
Shape812 := TShapeNode.Create;
LineSet813 := TLineSetNode.Create;
LineSet813.SetVertexCount([2]);
Coordinate814 := TCoordinateNode.Create;
Coordinate814.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet813.Coord := Coordinate814;
{ from vc1 to skullbase vertices 2 }
ColorRGBA815 := TColorRGBANode.Create;
ColorRGBA815 := ColorRGBA27;
{ .SetColor }
LineSet813.Color := ColorRGBA815;
{ .SetGeometry }
Shape812.Geometry := LineSet813;
{ .AddChildren }
HAnimSegment808.AddChildren([Shape812]);
{ .AddChildren }
HAnimJoint807.AddChildren([HAnimSegment808]);
HAnimJoint816 := THAnimJointNode.Create;
HAnimJoint816.NameField := 'skullbase';
HAnimJoint816.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint816.SetUlimit([0,0,0]);
HAnimJoint816.SetLlimit([0,0,0]);
HAnimSegment817 := THAnimSegmentNode.Create;
HAnimSegment817.NameField := 'skull';
Transform818 := TTransformNode.Create;
Transform818.Translation := Vector3(0.0044,1.6209,0.0236);
Transform819 := TTransformNode.Create;
{ Empty Transform }
Shape820 := TShapeNode.Create;
Shape820 := Shape20;
{ .AddChild }
Transform819.AddChildren([Shape820]);
{ .AddChildren }
Transform818.AddChildren([Transform819]);
{ .AddChildren }
HAnimSegment817.AddChildren([Transform818]);
Shape821 := TShapeNode.Create;
LineSet822 := TLineSetNode.Create;
LineSet822.SetVertexCount([2]);
Coordinate823 := TCoordinateNode.Create;
Coordinate823.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0503,1.4157,-0.0689)]);
{ .SetCoord }
LineSet822.Coord := Coordinate823;
{ from skullbase to l_eyelid_joint vertices 2 }
ColorRGBA824 := TColorRGBANode.Create;
ColorRGBA824 := ColorRGBA27;
{ .SetColor }
LineSet822.Color := ColorRGBA824;
{ .SetGeometry }
Shape821.Geometry := LineSet822;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape821]);
HAnimSite825 := THAnimSiteNode.Create;
HAnimSite825.NameField := 'glabella';
TouchSensor826 := TTouchSensorNode.Create;
TouchSensor826.Description := 'HAnimSite 1 glabella';
{ .AddChildren }
HAnimSite825.AddChildren([TouchSensor826]);
Shape827 := TShapeNode.Create;
Shape827 := Shape30;
{ .AddChildren }
HAnimSite825.AddChildren([Shape827]);
Billboard828 := TBillboardNode.Create;
Shape829 := TShapeNode.Create;
Text830 := TTextNode.Create;
Text830.SetText(['1']);
FontStyle831 := TFontStyleNode.Create;
FontStyle831.Size := 0.035;
{ .SetFontStyle }
Text830.FontStyle := FontStyle831;
{ .SetGeometry }
Shape829.Geometry := Text830;
{ .AddChildren }
Billboard828.AddChildren([Shape829]);
{ .AddChildren }
HAnimSite825.AddChildren([Billboard828]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite825]);
HAnimSite832 := THAnimSiteNode.Create;
HAnimSite832.NameField := 'l_ectocanthus';
TouchSensor833 := TTouchSensorNode.Create;
TouchSensor833.Description := 'HAnimSite 85 l_ectocanthus';
{ .AddChildren }
HAnimSite832.AddChildren([TouchSensor833]);
Shape834 := TShapeNode.Create;
Shape834 := Shape30;
{ .AddChildren }
HAnimSite832.AddChildren([Shape834]);
Billboard835 := TBillboardNode.Create;
Shape836 := TShapeNode.Create;
Text837 := TTextNode.Create;
Text837.SetText(['85']);
FontStyle838 := TFontStyleNode.Create;
FontStyle838.Size := 0.035;
{ .SetFontStyle }
Text837.FontStyle := FontStyle838;
{ .SetGeometry }
Shape836.Geometry := Text837;
{ .AddChildren }
Billboard835.AddChildren([Shape836]);
{ .AddChildren }
HAnimSite832.AddChildren([Billboard835]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite832]);
HAnimSite839 := THAnimSiteNode.Create;
HAnimSite839.NameField := 'l_infraorbitale';
HAnimSite839.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor840 := TTouchSensorNode.Create;
TouchSensor840.Description := 'HAnimSite 3 l_infraorbitale';
{ .AddChildren }
HAnimSite839.AddChildren([TouchSensor840]);
Shape841 := TShapeNode.Create;
Shape841 := Shape30;
{ .AddChildren }
HAnimSite839.AddChildren([Shape841]);
Billboard842 := TBillboardNode.Create;
Shape843 := TShapeNode.Create;
Text844 := TTextNode.Create;
Text844.SetText(['3']);
FontStyle845 := TFontStyleNode.Create;
FontStyle845.Size := 0.035;
{ .SetFontStyle }
Text844.FontStyle := FontStyle845;
{ .SetGeometry }
Shape843.Geometry := Text844;
{ .AddChildren }
Billboard842.AddChildren([Shape843]);
{ .AddChildren }
HAnimSite839.AddChildren([Billboard842]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite839]);
HAnimSite846 := THAnimSiteNode.Create;
HAnimSite846.NameField := 'l_tragion';
HAnimSite846.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor847 := TTouchSensorNode.Create;
TouchSensor847.Description := 'HAnimSite 4 l_tragion';
{ .AddChildren }
HAnimSite846.AddChildren([TouchSensor847]);
Shape848 := TShapeNode.Create;
Shape848 := Shape30;
{ .AddChildren }
HAnimSite846.AddChildren([Shape848]);
Billboard849 := TBillboardNode.Create;
Shape850 := TShapeNode.Create;
Text851 := TTextNode.Create;
Text851.SetText(['4']);
FontStyle852 := TFontStyleNode.Create;
FontStyle852.Size := 0.035;
{ .SetFontStyle }
Text851.FontStyle := FontStyle852;
{ .SetGeometry }
Shape850.Geometry := Text851;
{ .AddChildren }
Billboard849.AddChildren([Shape850]);
{ .AddChildren }
HAnimSite846.AddChildren([Billboard849]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite846]);
HAnimSite853 := THAnimSiteNode.Create;
HAnimSite853.NameField := 'nuchale';
HAnimSite853.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor854 := TTouchSensorNode.Create;
TouchSensor854.Description := 'HAnimSite 81 nuchale';
{ .AddChildren }
HAnimSite853.AddChildren([TouchSensor854]);
Shape855 := TShapeNode.Create;
Shape855 := Shape30;
{ .AddChildren }
HAnimSite853.AddChildren([Shape855]);
Billboard856 := TBillboardNode.Create;
Shape857 := TShapeNode.Create;
Text858 := TTextNode.Create;
Text858.SetText(['81']);
FontStyle859 := TFontStyleNode.Create;
FontStyle859.Size := 0.035;
{ .SetFontStyle }
Text858.FontStyle := FontStyle859;
{ .SetGeometry }
Shape857.Geometry := Text858;
{ .AddChildren }
Billboard856.AddChildren([Shape857]);
{ .AddChildren }
HAnimSite853.AddChildren([Billboard856]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite853]);
HAnimSite860 := THAnimSiteNode.Create;
HAnimSite860.NameField := 'opisthocranion';
TouchSensor861 := TTouchSensorNode.Create;
TouchSensor861.Description := 'HAnimSite 89 opisthocranion';
{ .AddChildren }
HAnimSite860.AddChildren([TouchSensor861]);
Shape862 := TShapeNode.Create;
Shape862 := Shape30;
{ .AddChildren }
HAnimSite860.AddChildren([Shape862]);
Billboard863 := TBillboardNode.Create;
Shape864 := TShapeNode.Create;
Text865 := TTextNode.Create;
Text865.SetText(['89']);
FontStyle866 := TFontStyleNode.Create;
FontStyle866.Size := 0.035;
{ .SetFontStyle }
Text865.FontStyle := FontStyle866;
{ .SetGeometry }
Shape864.Geometry := Text865;
{ .AddChildren }
Billboard863.AddChildren([Shape864]);
{ .AddChildren }
HAnimSite860.AddChildren([Billboard863]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite860]);
HAnimSite867 := THAnimSiteNode.Create;
HAnimSite867.NameField := 'r_ectocanthus';
TouchSensor868 := TTouchSensorNode.Create;
TouchSensor868.Description := 'HAnimSite 86 r_ectocanthus';
{ .AddChildren }
HAnimSite867.AddChildren([TouchSensor868]);
Shape869 := TShapeNode.Create;
Shape869 := Shape30;
{ .AddChildren }
HAnimSite867.AddChildren([Shape869]);
Billboard870 := TBillboardNode.Create;
Shape871 := TShapeNode.Create;
Text872 := TTextNode.Create;
Text872.SetText(['86']);
FontStyle873 := TFontStyleNode.Create;
FontStyle873.Size := 0.035;
{ .SetFontStyle }
Text872.FontStyle := FontStyle873;
{ .SetGeometry }
Shape871.Geometry := Text872;
{ .AddChildren }
Billboard870.AddChildren([Shape871]);
{ .AddChildren }
HAnimSite867.AddChildren([Billboard870]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite867]);
HAnimSite874 := THAnimSiteNode.Create;
HAnimSite874.NameField := 'r_infraorbitale';
HAnimSite874.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor875 := TTouchSensorNode.Create;
TouchSensor875.Description := 'HAnimSite 6 r_infraorbitale';
{ .AddChildren }
HAnimSite874.AddChildren([TouchSensor875]);
Shape876 := TShapeNode.Create;
Shape876 := Shape30;
{ .AddChildren }
HAnimSite874.AddChildren([Shape876]);
Billboard877 := TBillboardNode.Create;
Shape878 := TShapeNode.Create;
Text879 := TTextNode.Create;
Text879.SetText(['6']);
FontStyle880 := TFontStyleNode.Create;
FontStyle880.Size := 0.035;
{ .SetFontStyle }
Text879.FontStyle := FontStyle880;
{ .SetGeometry }
Shape878.Geometry := Text879;
{ .AddChildren }
Billboard877.AddChildren([Shape878]);
{ .AddChildren }
HAnimSite874.AddChildren([Billboard877]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite874]);
HAnimSite881 := THAnimSiteNode.Create;
HAnimSite881.NameField := 'r_tragion';
HAnimSite881.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor882 := TTouchSensorNode.Create;
TouchSensor882.Description := 'HAnimSite 7 r_tragion';
{ .AddChildren }
HAnimSite881.AddChildren([TouchSensor882]);
Shape883 := TShapeNode.Create;
Shape883 := Shape30;
{ .AddChildren }
HAnimSite881.AddChildren([Shape883]);
Billboard884 := TBillboardNode.Create;
Shape885 := TShapeNode.Create;
Text886 := TTextNode.Create;
Text886.SetText(['7']);
FontStyle887 := TFontStyleNode.Create;
FontStyle887.Size := 0.035;
{ .SetFontStyle }
Text886.FontStyle := FontStyle887;
{ .SetGeometry }
Shape885.Geometry := Text886;
{ .AddChildren }
Billboard884.AddChildren([Shape885]);
{ .AddChildren }
HAnimSite881.AddChildren([Billboard884]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite881]);
HAnimSite888 := THAnimSiteNode.Create;
HAnimSite888.NameField := 'sellion';
HAnimSite888.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor889 := TTouchSensorNode.Create;
TouchSensor889.Description := 'HAnimSite 2 sellion';
{ .AddChildren }
HAnimSite888.AddChildren([TouchSensor889]);
Shape890 := TShapeNode.Create;
Shape890 := Shape30;
{ .AddChildren }
HAnimSite888.AddChildren([Shape890]);
Billboard891 := TBillboardNode.Create;
Shape892 := TShapeNode.Create;
Text893 := TTextNode.Create;
Text893.SetText(['2']);
FontStyle894 := TFontStyleNode.Create;
FontStyle894.Size := 0.035;
{ .SetFontStyle }
Text893.FontStyle := FontStyle894;
{ .SetGeometry }
Shape892.Geometry := Text893;
{ .AddChildren }
Billboard891.AddChildren([Shape892]);
{ .AddChildren }
HAnimSite888.AddChildren([Billboard891]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite888]);
HAnimSite895 := THAnimSiteNode.Create;
HAnimSite895.NameField := 'skull_vertex';
HAnimSite895.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor896 := TTouchSensorNode.Create;
TouchSensor896.Description := 'HAnimSite 0 skull_vertex';
{ .AddChildren }
HAnimSite895.AddChildren([TouchSensor896]);
Shape897 := TShapeNode.Create;
Shape897 := Shape30;
{ .AddChildren }
HAnimSite895.AddChildren([Shape897]);
Billboard898 := TBillboardNode.Create;
Shape899 := TShapeNode.Create;
Text900 := TTextNode.Create;
Text900.SetText(['0']);
FontStyle901 := TFontStyleNode.Create;
FontStyle901.Size := 0.035;
{ .SetFontStyle }
Text900.FontStyle := FontStyle901;
{ .SetGeometry }
Shape899.Geometry := Text900;
{ .AddChildren }
Billboard898.AddChildren([Shape899]);
{ .AddChildren }
HAnimSite895.AddChildren([Billboard898]);
{ .AddChildren }
HAnimSegment817.AddChildren([HAnimSite895]);
Shape902 := TShapeNode.Create;
LineSet903 := TLineSetNode.Create;
LineSet903.SetVertexCount([2]);
Coordinate904 := TCoordinateNode.Create;
Coordinate904.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0507,1.4157,-0.0689)]);
{ .SetCoord }
LineSet903.Coord := Coordinate904;
{ from skullbase to r_eyelid_joint vertices 2 }
ColorRGBA905 := TColorRGBANode.Create;
ColorRGBA905 := ColorRGBA27;
{ .SetColor }
LineSet903.Color := ColorRGBA905;
{ .SetGeometry }
Shape902.Geometry := LineSet903;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape902]);
Shape906 := TShapeNode.Create;
LineSet907 := TLineSetNode.Create;
LineSet907.SetVertexCount([2]);
Coordinate908 := TCoordinateNode.Create;
Coordinate908.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0479,1.3963,-0.0188)]);
{ .SetCoord }
LineSet907.Coord := Coordinate908;
{ from skullbase to l_eyeball_joint vertices 2 }
ColorRGBA909 := TColorRGBANode.Create;
ColorRGBA909 := ColorRGBA27;
{ .SetColor }
LineSet907.Color := ColorRGBA909;
{ .SetGeometry }
Shape906.Geometry := LineSet907;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape906]);
Shape910 := TShapeNode.Create;
LineSet911 := TLineSetNode.Create;
LineSet911.SetVertexCount([2]);
Coordinate912 := TCoordinateNode.Create;
Coordinate912.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0483,1.3963,-0.0188)]);
{ .SetCoord }
LineSet911.Coord := Coordinate912;
{ from skullbase to r_eyeball_joint vertices 2 }
ColorRGBA913 := TColorRGBANode.Create;
ColorRGBA913 := ColorRGBA27;
{ .SetColor }
LineSet911.Color := ColorRGBA913;
{ .SetGeometry }
Shape910.Geometry := LineSet911;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape910]);
Shape914 := TShapeNode.Create;
LineSet915 := TLineSetNode.Create;
LineSet915.SetVertexCount([2]);
Coordinate916 := TCoordinateNode.Create;
Coordinate916.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0216,1.4053,0.0051)]);
{ .SetCoord }
LineSet915.Coord := Coordinate916;
{ from skullbase to l_eyebrow_joint vertices 2 }
ColorRGBA917 := TColorRGBANode.Create;
ColorRGBA917 := ColorRGBA27;
{ .SetColor }
LineSet915.Color := ColorRGBA917;
{ .SetGeometry }
Shape914.Geometry := LineSet915;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape914]);
Shape918 := TShapeNode.Create;
LineSet919 := TLineSetNode.Create;
LineSet919.SetVertexCount([2]);
Coordinate920 := TCoordinateNode.Create;
Coordinate920.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0219,1.4053,0.0051)]);
{ .SetCoord }
LineSet919.Coord := Coordinate920;
{ from skullbase to r_eyebrow_joint vertices 2 }
ColorRGBA921 := TColorRGBANode.Create;
ColorRGBA921 := ColorRGBA27;
{ .SetColor }
LineSet919.Color := ColorRGBA921;
{ .SetGeometry }
Shape918.Geometry := LineSet919;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape918]);
Shape922 := TShapeNode.Create;
LineSet923 := TLineSetNode.Create;
LineSet923.SetVertexCount([2]);
Coordinate924 := TCoordinateNode.Create;
Coordinate924.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0002,1.3043,-0.0865)]);
{ .SetCoord }
LineSet923.Coord := Coordinate924;
{ from skullbase to temporomandibular vertices 2 }
ColorRGBA925 := TColorRGBANode.Create;
ColorRGBA925 := ColorRGBA27;
{ .SetColor }
LineSet923.Color := ColorRGBA925;
{ .SetGeometry }
Shape922.Geometry := LineSet923;
{ .AddChildren }
HAnimSegment817.AddChildren([Shape922]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimSegment817]);
HAnimJoint926 := THAnimJointNode.Create;
HAnimJoint926.NameField := 'l_eyelid_joint';
HAnimJoint926.Center := Vector3(0.0503,1.4157,-0.0689);
HAnimJoint926.SetUlimit([0,0,0]);
HAnimJoint926.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint926]);
HAnimJoint927 := THAnimJointNode.Create;
HAnimJoint927.NameField := 'r_eyelid_joint';
HAnimJoint927.Center := Vector3(-0.0507,1.4157,-0.0689);
HAnimJoint927.SetUlimit([0,0,0]);
HAnimJoint927.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint927]);
HAnimJoint928 := THAnimJointNode.Create;
HAnimJoint928.NameField := 'l_eyeball_joint';
HAnimJoint928.Center := Vector3(0.0479,1.3963,-0.0188);
HAnimJoint928.SetUlimit([0,0,0]);
HAnimJoint928.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint928]);
HAnimJoint929 := THAnimJointNode.Create;
HAnimJoint929.NameField := 'r_eyeball_joint';
HAnimJoint929.Center := Vector3(-0.0483,1.3963,-0.0188);
HAnimJoint929.SetUlimit([0,0,0]);
HAnimJoint929.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint929]);
HAnimJoint930 := THAnimJointNode.Create;
HAnimJoint930.NameField := 'l_eyebrow_joint';
HAnimJoint930.Center := Vector3(0.0216,1.4053,0.0051);
HAnimJoint930.SetUlimit([0,0,0]);
HAnimJoint930.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint930]);
HAnimJoint931 := THAnimJointNode.Create;
HAnimJoint931.NameField := 'r_eyebrow_joint';
HAnimJoint931.Center := Vector3(-0.0219,1.4053,0.0051);
HAnimJoint931.SetUlimit([0,0,0]);
HAnimJoint931.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint931]);
HAnimJoint932 := THAnimJointNode.Create;
HAnimJoint932.NameField := 'temporomandibular';
HAnimJoint932.Center := Vector3(-0.0002,1.3043,-0.0865);
HAnimJoint932.SetUlimit([0,0,0]);
HAnimJoint932.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint816.AddChildren([HAnimJoint932]);
{ .AddChildren }
HAnimJoint807.AddChildren([HAnimJoint816]);
{ .AddChildren }
HAnimJoint791.AddChildren([HAnimJoint807]);
{ .AddChildren }
HAnimJoint782.AddChildren([HAnimJoint791]);
{ .AddChildren }
HAnimJoint773.AddChildren([HAnimJoint782]);
{ .AddChildren }
HAnimJoint764.AddChildren([HAnimJoint773]);
{ .AddChildren }
HAnimJoint755.AddChildren([HAnimJoint764]);
{ .AddChildren }
HAnimJoint732.AddChildren([HAnimJoint755]);
{ .AddChildren }
HAnimJoint701.AddChildren([HAnimJoint732]);
HAnimJoint933 := THAnimJointNode.Create;
HAnimJoint933.NameField := 'l_sternoclavicular';
HAnimJoint933.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint933.SetUlimit([0,0,0]);
HAnimJoint933.SetLlimit([0,0,0]);
HAnimSegment934 := THAnimSegmentNode.Create;
HAnimSegment934.NameField := 'l_clavicle';
Transform935 := TTransformNode.Create;
Transform935.Translation := Vector3(0.082,1.4488,-0.0353);
Transform936 := TTransformNode.Create;
{ Empty Transform }
Shape937 := TShapeNode.Create;
Shape937 := Shape20;
{ .AddChild }
Transform936.AddChildren([Shape937]);
{ .AddChildren }
Transform935.AddChildren([Transform936]);
{ .AddChildren }
HAnimSegment934.AddChildren([Transform935]);
Shape938 := TShapeNode.Create;
LineSet939 := TLineSetNode.Create;
LineSet939.SetVertexCount([2]);
Coordinate940 := TCoordinateNode.Create;
Coordinate940.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet939.Coord := Coordinate940;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
ColorRGBA941 := TColorRGBANode.Create;
ColorRGBA941 := ColorRGBA27;
{ .SetColor }
LineSet939.Color := ColorRGBA941;
{ .SetGeometry }
Shape938.Geometry := LineSet939;
{ .AddChildren }
HAnimSegment934.AddChildren([Shape938]);
HAnimSite942 := THAnimSiteNode.Create;
HAnimSite942.NameField := 'l_acromion';
HAnimSite942.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor943 := TTouchSensorNode.Create;
TouchSensor943.Description := 'HAnimSite 15 l_acromion';
{ .AddChildren }
HAnimSite942.AddChildren([TouchSensor943]);
Shape944 := TShapeNode.Create;
Shape944 := Shape30;
{ .AddChildren }
HAnimSite942.AddChildren([Shape944]);
Billboard945 := TBillboardNode.Create;
Shape946 := TShapeNode.Create;
Text947 := TTextNode.Create;
Text947.SetText(['15']);
FontStyle948 := TFontStyleNode.Create;
FontStyle948.Size := 0.035;
{ .SetFontStyle }
Text947.FontStyle := FontStyle948;
{ .SetGeometry }
Shape946.Geometry := Text947;
{ .AddChildren }
Billboard945.AddChildren([Shape946]);
{ .AddChildren }
HAnimSite942.AddChildren([Billboard945]);
{ .AddChildren }
HAnimSegment934.AddChildren([HAnimSite942]);
HAnimSite949 := THAnimSiteNode.Create;
HAnimSite949.NameField := 'l_axilla_distal';
HAnimSite949.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor950 := TTouchSensorNode.Create;
TouchSensor950.Description := 'HAnimSite 17 l_axilla_distal';
{ .AddChildren }
HAnimSite949.AddChildren([TouchSensor950]);
Shape951 := TShapeNode.Create;
Shape951 := Shape30;
{ .AddChildren }
HAnimSite949.AddChildren([Shape951]);
Billboard952 := TBillboardNode.Create;
Shape953 := TShapeNode.Create;
Text954 := TTextNode.Create;
Text954.SetText(['17']);
FontStyle955 := TFontStyleNode.Create;
FontStyle955.Size := 0.035;
{ .SetFontStyle }
Text954.FontStyle := FontStyle955;
{ .SetGeometry }
Shape953.Geometry := Text954;
{ .AddChildren }
Billboard952.AddChildren([Shape953]);
{ .AddChildren }
HAnimSite949.AddChildren([Billboard952]);
{ .AddChildren }
HAnimSegment934.AddChildren([HAnimSite949]);
HAnimSite956 := THAnimSiteNode.Create;
HAnimSite956.NameField := 'l_axilla_posterior_folds';
TouchSensor957 := TTouchSensorNode.Create;
TouchSensor957.Description := 'HAnimSite 18 l_axilla_posterior_folds';
{ .AddChildren }
HAnimSite956.AddChildren([TouchSensor957]);
Shape958 := TShapeNode.Create;
Shape958 := Shape30;
{ .AddChildren }
HAnimSite956.AddChildren([Shape958]);
Billboard959 := TBillboardNode.Create;
Shape960 := TShapeNode.Create;
Text961 := TTextNode.Create;
Text961.SetText(['18']);
FontStyle962 := TFontStyleNode.Create;
FontStyle962.Size := 0.035;
{ .SetFontStyle }
Text961.FontStyle := FontStyle962;
{ .SetGeometry }
Shape960.Geometry := Text961;
{ .AddChildren }
Billboard959.AddChildren([Shape960]);
{ .AddChildren }
HAnimSite956.AddChildren([Billboard959]);
{ .AddChildren }
HAnimSegment934.AddChildren([HAnimSite956]);
HAnimSite963 := THAnimSiteNode.Create;
HAnimSite963.NameField := 'l_axilla_proximal';
HAnimSite963.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor964 := TTouchSensorNode.Create;
TouchSensor964.Description := 'HAnimSite 16 l_axilla_proximal';
{ .AddChildren }
HAnimSite963.AddChildren([TouchSensor964]);
Shape965 := TShapeNode.Create;
Shape965 := Shape30;
{ .AddChildren }
HAnimSite963.AddChildren([Shape965]);
Billboard966 := TBillboardNode.Create;
Shape967 := TShapeNode.Create;
Text968 := TTextNode.Create;
Text968.SetText(['16']);
FontStyle969 := TFontStyleNode.Create;
FontStyle969.Size := 0.035;
{ .SetFontStyle }
Text968.FontStyle := FontStyle969;
{ .SetGeometry }
Shape967.Geometry := Text968;
{ .AddChildren }
Billboard966.AddChildren([Shape967]);
{ .AddChildren }
HAnimSite963.AddChildren([Billboard966]);
{ .AddChildren }
HAnimSegment934.AddChildren([HAnimSite963]);
HAnimSite970 := THAnimSiteNode.Create;
HAnimSite970.NameField := 'l_clavicale';
HAnimSite970.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor971 := TTouchSensorNode.Create;
TouchSensor971.Description := 'HAnimSite 14 l_clavicale';
{ .AddChildren }
HAnimSite970.AddChildren([TouchSensor971]);
Shape972 := TShapeNode.Create;
Shape972 := Shape30;
{ .AddChildren }
HAnimSite970.AddChildren([Shape972]);
Billboard973 := TBillboardNode.Create;
Shape974 := TShapeNode.Create;
Text975 := TTextNode.Create;
Text975.SetText(['14']);
FontStyle976 := TFontStyleNode.Create;
FontStyle976.Size := 0.035;
{ .SetFontStyle }
Text975.FontStyle := FontStyle976;
{ .SetGeometry }
Shape974.Geometry := Text975;
{ .AddChildren }
Billboard973.AddChildren([Shape974]);
{ .AddChildren }
HAnimSite970.AddChildren([Billboard973]);
{ .AddChildren }
HAnimSegment934.AddChildren([HAnimSite970]);
{ .AddChildren }
HAnimJoint933.AddChildren([HAnimSegment934]);
HAnimJoint977 := THAnimJointNode.Create;
HAnimJoint977.NameField := 'l_acromioclavicular';
HAnimJoint977.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint977.SetUlimit([0,0,0]);
HAnimJoint977.SetLlimit([0,0,0]);
HAnimSegment978 := THAnimSegmentNode.Create;
HAnimSegment978.NameField := 'l_scapula';
Transform979 := TTransformNode.Create;
Transform979.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform980 := TTransformNode.Create;
{ Empty Transform }
Shape981 := TShapeNode.Create;
Shape981 := Shape20;
{ .AddChild }
Transform980.AddChildren([Shape981]);
{ .AddChildren }
Transform979.AddChildren([Transform980]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform979]);
Shape982 := TShapeNode.Create;
LineSet983 := TLineSetNode.Create;
LineSet983.SetVertexCount([2]);
Coordinate984 := TCoordinateNode.Create;
Coordinate984.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet983.Coord := Coordinate984;
{ from l_acromioclavicular to l_shoulder vertices 2 }
ColorRGBA985 := TColorRGBANode.Create;
ColorRGBA985 := ColorRGBA27;
{ .SetColor }
LineSet983.Color := ColorRGBA985;
{ .SetGeometry }
Shape982.Geometry := LineSet983;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape982]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimSegment978]);
HAnimJoint986 := THAnimJointNode.Create;
HAnimJoint986.NameField := 'l_shoulder';
HAnimJoint986.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint986.SetUlimit([0,0,0]);
HAnimJoint986.SetLlimit([0,0,0]);
HAnimSegment987 := THAnimSegmentNode.Create;
HAnimSegment987.NameField := 'l_upperarm';
Transform988 := TTransformNode.Create;
Transform988.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform989 := TTransformNode.Create;
{ Empty Transform }
Shape990 := TShapeNode.Create;
Shape990 := Shape20;
{ .AddChild }
Transform989.AddChildren([Shape990]);
{ .AddChildren }
Transform988.AddChildren([Transform989]);
{ .AddChildren }
HAnimSegment987.AddChildren([Transform988]);
Shape991 := TShapeNode.Create;
LineSet992 := TLineSetNode.Create;
LineSet992.SetVertexCount([2]);
Coordinate993 := TCoordinateNode.Create;
Coordinate993.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet992.Coord := Coordinate993;
{ from l_shoulder to l_elbow vertices 2 }
ColorRGBA994 := TColorRGBANode.Create;
ColorRGBA994 := ColorRGBA27;
{ .SetColor }
LineSet992.Color := ColorRGBA994;
{ .SetGeometry }
Shape991.Geometry := LineSet992;
{ .AddChildren }
HAnimSegment987.AddChildren([Shape991]);
HAnimSite995 := THAnimSiteNode.Create;
HAnimSite995.NameField := 'l_bideltoid';
TouchSensor996 := TTouchSensorNode.Create;
TouchSensor996.Description := 'HAnimSite 96 l_bideltoid';
{ .AddChildren }
HAnimSite995.AddChildren([TouchSensor996]);
Shape997 := TShapeNode.Create;
Shape997 := Shape30;
{ .AddChildren }
HAnimSite995.AddChildren([Shape997]);
Billboard998 := TBillboardNode.Create;
Shape999 := TShapeNode.Create;
Text1000 := TTextNode.Create;
Text1000.SetText(['96']);
FontStyle1001 := TFontStyleNode.Create;
FontStyle1001.Size := 0.035;
{ .SetFontStyle }
Text1000.FontStyle := FontStyle1001;
{ .SetGeometry }
Shape999.Geometry := Text1000;
{ .AddChildren }
Billboard998.AddChildren([Shape999]);
{ .AddChildren }
HAnimSite995.AddChildren([Billboard998]);
{ .AddChildren }
HAnimSegment987.AddChildren([HAnimSite995]);
HAnimSite1002 := THAnimSiteNode.Create;
HAnimSite1002.NameField := 'l_humeral_lateral_epicondyles';
HAnimSite1002.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor1003 := TTouchSensorNode.Create;
TouchSensor1003.Description := 'HAnimSite 63 l_humeral_lateral_epicondyles';
{ .AddChildren }
HAnimSite1002.AddChildren([TouchSensor1003]);
Shape1004 := TShapeNode.Create;
Shape1004 := Shape30;
{ .AddChildren }
HAnimSite1002.AddChildren([Shape1004]);
Billboard1005 := TBillboardNode.Create;
Shape1006 := TShapeNode.Create;
Text1007 := TTextNode.Create;
Text1007.SetText(['63']);
FontStyle1008 := TFontStyleNode.Create;
FontStyle1008.Size := 0.035;
{ .SetFontStyle }
Text1007.FontStyle := FontStyle1008;
{ .SetGeometry }
Shape1006.Geometry := Text1007;
{ .AddChildren }
Billboard1005.AddChildren([Shape1006]);
{ .AddChildren }
HAnimSite1002.AddChildren([Billboard1005]);
{ .AddChildren }
HAnimSegment987.AddChildren([HAnimSite1002]);
{ .AddChildren }
HAnimJoint986.AddChildren([HAnimSegment987]);
HAnimJoint1009 := THAnimJointNode.Create;
HAnimJoint1009.NameField := 'l_elbow';
HAnimJoint1009.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint1009.SetUlimit([0,0,0]);
HAnimJoint1009.SetLlimit([0,0,0]);
HAnimSegment1010 := THAnimSegmentNode.Create;
HAnimSegment1010.NameField := 'l_forearm';
Transform1011 := TTransformNode.Create;
Transform1011.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform1012 := TTransformNode.Create;
{ Empty Transform }
Shape1013 := TShapeNode.Create;
Shape1013 := Shape20;
{ .AddChild }
Transform1012.AddChildren([Shape1013]);
{ .AddChildren }
Transform1011.AddChildren([Transform1012]);
{ .AddChildren }
HAnimSegment1010.AddChildren([Transform1011]);
Shape1014 := TShapeNode.Create;
LineSet1015 := TLineSetNode.Create;
LineSet1015.SetVertexCount([2]);
Coordinate1016 := TCoordinateNode.Create;
Coordinate1016.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet1015.Coord := Coordinate1016;
{ from l_elbow to l_radiocarpal vertices 2 }
ColorRGBA1017 := TColorRGBANode.Create;
ColorRGBA1017 := ColorRGBA27;
{ .SetColor }
LineSet1015.Color := ColorRGBA1017;
{ .SetGeometry }
Shape1014.Geometry := LineSet1015;
{ .AddChildren }
HAnimSegment1010.AddChildren([Shape1014]);
HAnimSite1018 := THAnimSiteNode.Create;
HAnimSite1018.NameField := 'l_humeral_medial_epicondyles';
HAnimSite1018.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor1019 := TTouchSensorNode.Create;
TouchSensor1019.Description := 'HAnimSite 64 l_humeral_medial_epicondyles';
{ .AddChildren }
HAnimSite1018.AddChildren([TouchSensor1019]);
Shape1020 := TShapeNode.Create;
Shape1020 := Shape30;
{ .AddChildren }
HAnimSite1018.AddChildren([Shape1020]);
Billboard1021 := TBillboardNode.Create;
Shape1022 := TShapeNode.Create;
Text1023 := TTextNode.Create;
Text1023.SetText(['64']);
FontStyle1024 := TFontStyleNode.Create;
FontStyle1024.Size := 0.035;
{ .SetFontStyle }
Text1023.FontStyle := FontStyle1024;
{ .SetGeometry }
Shape1022.Geometry := Text1023;
{ .AddChildren }
Billboard1021.AddChildren([Shape1022]);
{ .AddChildren }
HAnimSite1018.AddChildren([Billboard1021]);
{ .AddChildren }
HAnimSegment1010.AddChildren([HAnimSite1018]);
HAnimSite1025 := THAnimSiteNode.Create;
HAnimSite1025.NameField := 'l_olecranon';
HAnimSite1025.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor1026 := TTouchSensorNode.Create;
TouchSensor1026.Description := 'HAnimSite 65 l_olecranon';
{ .AddChildren }
HAnimSite1025.AddChildren([TouchSensor1026]);
Shape1027 := TShapeNode.Create;
Shape1027 := Shape30;
{ .AddChildren }
HAnimSite1025.AddChildren([Shape1027]);
Billboard1028 := TBillboardNode.Create;
Shape1029 := TShapeNode.Create;
Text1030 := TTextNode.Create;
Text1030.SetText(['65']);
FontStyle1031 := TFontStyleNode.Create;
FontStyle1031.Size := 0.035;
{ .SetFontStyle }
Text1030.FontStyle := FontStyle1031;
{ .SetGeometry }
Shape1029.Geometry := Text1030;
{ .AddChildren }
Billboard1028.AddChildren([Shape1029]);
{ .AddChildren }
HAnimSite1025.AddChildren([Billboard1028]);
{ .AddChildren }
HAnimSegment1010.AddChildren([HAnimSite1025]);
HAnimSite1032 := THAnimSiteNode.Create;
HAnimSite1032.NameField := 'l_radial_styloid';
HAnimSite1032.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor1033 := TTouchSensorNode.Create;
TouchSensor1033.Description := 'HAnimSite 71 l_radial_styloid';
{ .AddChildren }
HAnimSite1032.AddChildren([TouchSensor1033]);
Shape1034 := TShapeNode.Create;
Shape1034 := Shape30;
{ .AddChildren }
HAnimSite1032.AddChildren([Shape1034]);
Billboard1035 := TBillboardNode.Create;
Shape1036 := TShapeNode.Create;
Text1037 := TTextNode.Create;
Text1037.SetText(['71']);
FontStyle1038 := TFontStyleNode.Create;
FontStyle1038.Size := 0.035;
{ .SetFontStyle }
Text1037.FontStyle := FontStyle1038;
{ .SetGeometry }
Shape1036.Geometry := Text1037;
{ .AddChildren }
Billboard1035.AddChildren([Shape1036]);
{ .AddChildren }
HAnimSite1032.AddChildren([Billboard1035]);
{ .AddChildren }
HAnimSegment1010.AddChildren([HAnimSite1032]);
HAnimSite1039 := THAnimSiteNode.Create;
HAnimSite1039.NameField := 'l_radiale';
HAnimSite1039.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor1040 := TTouchSensorNode.Create;
TouchSensor1040.Description := 'HAnimSite 69 l_radiale';
{ .AddChildren }
HAnimSite1039.AddChildren([TouchSensor1040]);
Shape1041 := TShapeNode.Create;
Shape1041 := Shape30;
{ .AddChildren }
HAnimSite1039.AddChildren([Shape1041]);
Billboard1042 := TBillboardNode.Create;
Shape1043 := TShapeNode.Create;
Text1044 := TTextNode.Create;
Text1044.SetText(['69']);
FontStyle1045 := TFontStyleNode.Create;
FontStyle1045.Size := 0.035;
{ .SetFontStyle }
Text1044.FontStyle := FontStyle1045;
{ .SetGeometry }
Shape1043.Geometry := Text1044;
{ .AddChildren }
Billboard1042.AddChildren([Shape1043]);
{ .AddChildren }
HAnimSite1039.AddChildren([Billboard1042]);
{ .AddChildren }
HAnimSegment1010.AddChildren([HAnimSite1039]);
{ .AddChildren }
HAnimJoint1009.AddChildren([HAnimSegment1010]);
HAnimJoint1046 := THAnimJointNode.Create;
HAnimJoint1046.NameField := 'l_radiocarpal';
HAnimJoint1046.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint1046.SetUlimit([0,0,0]);
HAnimJoint1046.SetLlimit([0,0,0]);
HAnimSegment1047 := THAnimSegmentNode.Create;
HAnimSegment1047.NameField := 'l_carpal';
Transform1048 := TTransformNode.Create;
Transform1048.Scale := Vector3(0.2,0.2,0.2);
Transform1048.Translation := Vector3(0.2,0.85,-0.05);
Transform1048.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform1049 := TTransformNode.Create;
Transform1049.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
Shape1050 := TShapeNode.Create;
Shape1050 := Shape20;
{ .AddChild }
Transform1049.AddChildren([Shape1050]);
{ .AddChildren }
Transform1048.AddChildren([Transform1049]);
{ .AddChildren }
HAnimSegment1047.AddChildren([Transform1048]);
Shape1051 := TShapeNode.Create;
LineSet1052 := TLineSetNode.Create;
LineSet1052.SetVertexCount([2]);
Coordinate1053 := TCoordinateNode.Create;
Coordinate1053.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet1052.Coord := Coordinate1053;
{ from l_radiocarpal to l_carpometacarpal_1 vertices 2 }
ColorRGBA1054 := TColorRGBANode.Create;
ColorRGBA1054 := ColorRGBA27;
{ .SetColor }
LineSet1052.Color := ColorRGBA1054;
{ .SetGeometry }
Shape1051.Geometry := LineSet1052;
{ .AddChildren }
HAnimSegment1047.AddChildren([Shape1051]);
HAnimSite1055 := THAnimSiteNode.Create;
HAnimSite1055.NameField := 'l_ulnar_styloid';
HAnimSite1055.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor1056 := TTouchSensorNode.Create;
TouchSensor1056.Description := 'HAnimSite 70 l_ulnar_styloid';
{ .AddChildren }
HAnimSite1055.AddChildren([TouchSensor1056]);
Shape1057 := TShapeNode.Create;
Shape1057 := Shape30;
{ .AddChildren }
HAnimSite1055.AddChildren([Shape1057]);
Billboard1058 := TBillboardNode.Create;
Shape1059 := TShapeNode.Create;
Text1060 := TTextNode.Create;
Text1060.SetText(['70']);
FontStyle1061 := TFontStyleNode.Create;
FontStyle1061.Size := 0.035;
{ .SetFontStyle }
Text1060.FontStyle := FontStyle1061;
{ .SetGeometry }
Shape1059.Geometry := Text1060;
{ .AddChildren }
Billboard1058.AddChildren([Shape1059]);
{ .AddChildren }
HAnimSite1055.AddChildren([Billboard1058]);
{ .AddChildren }
HAnimSegment1047.AddChildren([HAnimSite1055]);
Shape1062 := TShapeNode.Create;
LineSet1063 := TLineSetNode.Create;
LineSet1063.SetVertexCount([2]);
Coordinate1064 := TCoordinateNode.Create;
Coordinate1064.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet1063.Coord := Coordinate1064;
{ from l_radiocarpal to l_carpometacarpal_2 vertices 2 }
ColorRGBA1065 := TColorRGBANode.Create;
ColorRGBA1065 := ColorRGBA27;
{ .SetColor }
LineSet1063.Color := ColorRGBA1065;
{ .SetGeometry }
Shape1062.Geometry := LineSet1063;
{ .AddChildren }
HAnimSegment1047.AddChildren([Shape1062]);
Shape1066 := TShapeNode.Create;
LineSet1067 := TLineSetNode.Create;
LineSet1067.SetVertexCount([2]);
Coordinate1068 := TCoordinateNode.Create;
Coordinate1068.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet1067.Coord := Coordinate1068;
{ from l_radiocarpal to l_carpometacarpal_3 vertices 2 }
ColorRGBA1069 := TColorRGBANode.Create;
ColorRGBA1069 := ColorRGBA27;
{ .SetColor }
LineSet1067.Color := ColorRGBA1069;
{ .SetGeometry }
Shape1066.Geometry := LineSet1067;
{ .AddChildren }
HAnimSegment1047.AddChildren([Shape1066]);
Shape1070 := TShapeNode.Create;
LineSet1071 := TLineSetNode.Create;
LineSet1071.SetVertexCount([2]);
Coordinate1072 := TCoordinateNode.Create;
Coordinate1072.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet1071.Coord := Coordinate1072;
{ from l_radiocarpal to l_carpometacarpal_4 vertices 2 }
ColorRGBA1073 := TColorRGBANode.Create;
ColorRGBA1073 := ColorRGBA27;
{ .SetColor }
LineSet1071.Color := ColorRGBA1073;
{ .SetGeometry }
Shape1070.Geometry := LineSet1071;
{ .AddChildren }
HAnimSegment1047.AddChildren([Shape1070]);
Shape1074 := TShapeNode.Create;
LineSet1075 := TLineSetNode.Create;
LineSet1075.SetVertexCount([2]);
Coordinate1076 := TCoordinateNode.Create;
Coordinate1076.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet1075.Coord := Coordinate1076;
{ from l_radiocarpal to l_carpometacarpal_5 vertices 2 }
ColorRGBA1077 := TColorRGBANode.Create;
ColorRGBA1077 := ColorRGBA27;
{ .SetColor }
LineSet1075.Color := ColorRGBA1077;
{ .SetGeometry }
Shape1074.Geometry := LineSet1075;
{ .AddChildren }
HAnimSegment1047.AddChildren([Shape1074]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimSegment1047]);
HAnimJoint1078 := THAnimJointNode.Create;
HAnimJoint1078.NameField := 'l_carpometacarpal_1';
HAnimJoint1078.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint1078.SetUlimit([0,0,0]);
HAnimJoint1078.SetLlimit([0,0,0]);
HAnimSegment1079 := THAnimSegmentNode.Create;
HAnimSegment1079.NameField := 'l_metacarpal_1';
Transform1080 := TTransformNode.Create;
Transform1080.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform1081 := TTransformNode.Create;
{ Empty Transform }
Shape1082 := TShapeNode.Create;
Shape1082 := Shape20;
{ .AddChild }
Transform1081.AddChildren([Shape1082]);
{ .AddChildren }
Transform1080.AddChildren([Transform1081]);
{ .AddChildren }
HAnimSegment1079.AddChildren([Transform1080]);
Shape1083 := TShapeNode.Create;
LineSet1084 := TLineSetNode.Create;
LineSet1084.SetVertexCount([2]);
Coordinate1085 := TCoordinateNode.Create;
Coordinate1085.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet1084.Coord := Coordinate1085;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
ColorRGBA1086 := TColorRGBANode.Create;
ColorRGBA1086 := ColorRGBA27;
{ .SetColor }
LineSet1084.Color := ColorRGBA1086;
{ .SetGeometry }
Shape1083.Geometry := LineSet1084;
{ .AddChildren }
HAnimSegment1079.AddChildren([Shape1083]);
{ .AddChildren }
HAnimJoint1078.AddChildren([HAnimSegment1079]);
HAnimJoint1087 := THAnimJointNode.Create;
HAnimJoint1087.NameField := 'l_metacarpophalangeal_1';
HAnimJoint1087.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint1087.SetUlimit([0,0,0]);
HAnimJoint1087.SetLlimit([0,0,0]);
HAnimSegment1088 := THAnimSegmentNode.Create;
HAnimSegment1088.NameField := 'l_carpal_proximal_phalanx_1';
Transform1089 := TTransformNode.Create;
Transform1089.Translation := Vector3(0.1951,0.8226,0.0246);
Transform1090 := TTransformNode.Create;
{ Empty Transform }
Shape1091 := TShapeNode.Create;
Shape1091 := Shape20;
{ .AddChild }
Transform1090.AddChildren([Shape1091]);
{ .AddChildren }
Transform1089.AddChildren([Transform1090]);
{ .AddChildren }
HAnimSegment1088.AddChildren([Transform1089]);
Shape1092 := TShapeNode.Create;
LineSet1093 := TLineSetNode.Create;
LineSet1093.SetVertexCount([2]);
Coordinate1094 := TCoordinateNode.Create;
Coordinate1094.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet1093.Coord := Coordinate1094;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1095 := TColorRGBANode.Create;
ColorRGBA1095 := ColorRGBA27;
{ .SetColor }
LineSet1093.Color := ColorRGBA1095;
{ .SetGeometry }
Shape1092.Geometry := LineSet1093;
{ .AddChildren }
HAnimSegment1088.AddChildren([Shape1092]);
{ .AddChildren }
HAnimJoint1087.AddChildren([HAnimSegment1088]);
HAnimJoint1096 := THAnimJointNode.Create;
HAnimJoint1096.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint1096.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint1096.SetUlimit([0,0,0]);
HAnimJoint1096.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1087.AddChildren([HAnimJoint1096]);
{ .AddChildren }
HAnimJoint1078.AddChildren([HAnimJoint1087]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimJoint1078]);
HAnimJoint1097 := THAnimJointNode.Create;
HAnimJoint1097.NameField := 'l_carpometacarpal_2';
HAnimJoint1097.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint1097.SetUlimit([0,0,0]);
HAnimJoint1097.SetLlimit([0,0,0]);
HAnimSegment1098 := THAnimSegmentNode.Create;
HAnimSegment1098.NameField := 'l_metacarpal_2';
Transform1099 := TTransformNode.Create;
Transform1099.Translation := Vector3(0.1983,0.8024,-0.028);
Transform1100 := TTransformNode.Create;
{ Empty Transform }
Shape1101 := TShapeNode.Create;
Shape1101 := Shape20;
{ .AddChild }
Transform1100.AddChildren([Shape1101]);
{ .AddChildren }
Transform1099.AddChildren([Transform1100]);
{ .AddChildren }
HAnimSegment1098.AddChildren([Transform1099]);
Shape1102 := TShapeNode.Create;
LineSet1103 := TLineSetNode.Create;
LineSet1103.SetVertexCount([2]);
Coordinate1104 := TCoordinateNode.Create;
Coordinate1104.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet1103.Coord := Coordinate1104;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
ColorRGBA1105 := TColorRGBANode.Create;
ColorRGBA1105 := ColorRGBA27;
{ .SetColor }
LineSet1103.Color := ColorRGBA1105;
{ .SetGeometry }
Shape1102.Geometry := LineSet1103;
{ .AddChildren }
HAnimSegment1098.AddChildren([Shape1102]);
HAnimSite1106 := THAnimSiteNode.Create;
HAnimSite1106.NameField := 'l_metacarpal_phalanx_2';
HAnimSite1106.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1107 := TTouchSensorNode.Create;
TouchSensor1107.Description := 'HAnimSite 75 l_metacarpal_phalanx_2';
{ .AddChildren }
HAnimSite1106.AddChildren([TouchSensor1107]);
Shape1108 := TShapeNode.Create;
Shape1108 := Shape30;
{ .AddChildren }
HAnimSite1106.AddChildren([Shape1108]);
Billboard1109 := TBillboardNode.Create;
Shape1110 := TShapeNode.Create;
Text1111 := TTextNode.Create;
Text1111.SetText(['75']);
FontStyle1112 := TFontStyleNode.Create;
FontStyle1112.Size := 0.035;
{ .SetFontStyle }
Text1111.FontStyle := FontStyle1112;
{ .SetGeometry }
Shape1110.Geometry := Text1111;
{ .AddChildren }
Billboard1109.AddChildren([Shape1110]);
{ .AddChildren }
HAnimSite1106.AddChildren([Billboard1109]);
{ .AddChildren }
HAnimSegment1098.AddChildren([HAnimSite1106]);
{ .AddChildren }
HAnimJoint1097.AddChildren([HAnimSegment1098]);
HAnimJoint1113 := THAnimJointNode.Create;
HAnimJoint1113.NameField := 'l_metacarpophalangeal_2';
HAnimJoint1113.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint1113.SetUlimit([0,0,0]);
HAnimJoint1113.SetLlimit([0,0,0]);
HAnimSegment1114 := THAnimSegmentNode.Create;
HAnimSegment1114.NameField := 'l_carpal_proximal_phalanx_2';
Transform1115 := TTransformNode.Create;
Transform1115.Translation := Vector3(0.1983,0.7815,-0.028);
Transform1116 := TTransformNode.Create;
{ Empty Transform }
Shape1117 := TShapeNode.Create;
Shape1117 := Shape20;
{ .AddChild }
Transform1116.AddChildren([Shape1117]);
{ .AddChildren }
Transform1115.AddChildren([Transform1116]);
{ .AddChildren }
HAnimSegment1114.AddChildren([Transform1115]);
Shape1118 := TShapeNode.Create;
LineSet1119 := TLineSetNode.Create;
LineSet1119.SetVertexCount([2]);
Coordinate1120 := TCoordinateNode.Create;
Coordinate1120.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet1119.Coord := Coordinate1120;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1121 := TColorRGBANode.Create;
ColorRGBA1121 := ColorRGBA27;
{ .SetColor }
LineSet1119.Color := ColorRGBA1121;
{ .SetGeometry }
Shape1118.Geometry := LineSet1119;
{ .AddChildren }
HAnimSegment1114.AddChildren([Shape1118]);
{ .AddChildren }
HAnimJoint1113.AddChildren([HAnimSegment1114]);
HAnimJoint1122 := THAnimJointNode.Create;
HAnimJoint1122.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint1122.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint1122.SetUlimit([0,0,0]);
HAnimJoint1122.SetLlimit([0,0,0]);
HAnimSegment1123 := THAnimSegmentNode.Create;
HAnimSegment1123.NameField := 'l_carpal_middle_phalanx_2';
Transform1124 := TTransformNode.Create;
Transform1124.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform1125 := TTransformNode.Create;
{ Empty Transform }
Shape1126 := TShapeNode.Create;
Shape1126 := Shape20;
{ .AddChild }
Transform1125.AddChildren([Shape1126]);
{ .AddChildren }
Transform1124.AddChildren([Transform1125]);
{ .AddChildren }
HAnimSegment1123.AddChildren([Transform1124]);
Shape1127 := TShapeNode.Create;
LineSet1128 := TLineSetNode.Create;
LineSet1128.SetVertexCount([2]);
Coordinate1129 := TCoordinateNode.Create;
Coordinate1129.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet1128.Coord := Coordinate1129;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1130 := TColorRGBANode.Create;
ColorRGBA1130 := ColorRGBA27;
{ .SetColor }
LineSet1128.Color := ColorRGBA1130;
{ .SetGeometry }
Shape1127.Geometry := LineSet1128;
{ .AddChildren }
HAnimSegment1123.AddChildren([Shape1127]);
{ .AddChildren }
HAnimJoint1122.AddChildren([HAnimSegment1123]);
HAnimJoint1131 := THAnimJointNode.Create;
HAnimJoint1131.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint1131.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint1131.SetUlimit([0,0,0]);
HAnimJoint1131.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1122.AddChildren([HAnimJoint1131]);
{ .AddChildren }
HAnimJoint1113.AddChildren([HAnimJoint1122]);
{ .AddChildren }
HAnimJoint1097.AddChildren([HAnimJoint1113]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimJoint1097]);
HAnimJoint1132 := THAnimJointNode.Create;
HAnimJoint1132.NameField := 'l_carpometacarpal_3';
HAnimJoint1132.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint1132.SetUlimit([0,0,0]);
HAnimJoint1132.SetLlimit([0,0,0]);
HAnimSegment1133 := THAnimSegmentNode.Create;
HAnimSegment1133.NameField := 'l_metacarpal_3';
Transform1134 := TTransformNode.Create;
Transform1134.Translation := Vector3(0.1987,0.8029,-0.053);
Transform1135 := TTransformNode.Create;
{ Empty Transform }
Shape1136 := TShapeNode.Create;
Shape1136 := Shape20;
{ .AddChild }
Transform1135.AddChildren([Shape1136]);
{ .AddChildren }
Transform1134.AddChildren([Transform1135]);
{ .AddChildren }
HAnimSegment1133.AddChildren([Transform1134]);
Shape1137 := TShapeNode.Create;
LineSet1138 := TLineSetNode.Create;
LineSet1138.SetVertexCount([2]);
Coordinate1139 := TCoordinateNode.Create;
Coordinate1139.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet1138.Coord := Coordinate1139;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
ColorRGBA1140 := TColorRGBANode.Create;
ColorRGBA1140 := ColorRGBA27;
{ .SetColor }
LineSet1138.Color := ColorRGBA1140;
{ .SetGeometry }
Shape1137.Geometry := LineSet1138;
{ .AddChildren }
HAnimSegment1133.AddChildren([Shape1137]);
HAnimSite1141 := THAnimSiteNode.Create;
HAnimSite1141.NameField := 'l_metacarpal_phalanx_3';
TouchSensor1142 := TTouchSensorNode.Create;
TouchSensor1142.Description := 'HAnimSite 76 l_metacarpal_phalanx_3';
{ .AddChildren }
HAnimSite1141.AddChildren([TouchSensor1142]);
Shape1143 := TShapeNode.Create;
Shape1143 := Shape30;
{ .AddChildren }
HAnimSite1141.AddChildren([Shape1143]);
Billboard1144 := TBillboardNode.Create;
Shape1145 := TShapeNode.Create;
Text1146 := TTextNode.Create;
Text1146.SetText(['76']);
FontStyle1147 := TFontStyleNode.Create;
FontStyle1147.Size := 0.035;
{ .SetFontStyle }
Text1146.FontStyle := FontStyle1147;
{ .SetGeometry }
Shape1145.Geometry := Text1146;
{ .AddChildren }
Billboard1144.AddChildren([Shape1145]);
{ .AddChildren }
HAnimSite1141.AddChildren([Billboard1144]);
{ .AddChildren }
HAnimSegment1133.AddChildren([HAnimSite1141]);
{ .AddChildren }
HAnimJoint1132.AddChildren([HAnimSegment1133]);
HAnimJoint1148 := THAnimJointNode.Create;
HAnimJoint1148.NameField := 'l_metacarpophalangeal_3';
HAnimJoint1148.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint1148.SetUlimit([0,0,0]);
HAnimJoint1148.SetLlimit([0,0,0]);
HAnimSegment1149 := THAnimSegmentNode.Create;
HAnimSegment1149.NameField := 'l_carpal_proximal_phalanx_3';
Transform1150 := TTransformNode.Create;
Transform1150.Translation := Vector3(0.1987,0.7818,-0.053);
Transform1151 := TTransformNode.Create;
{ Empty Transform }
Shape1152 := TShapeNode.Create;
Shape1152 := Shape20;
{ .AddChild }
Transform1151.AddChildren([Shape1152]);
{ .AddChildren }
Transform1150.AddChildren([Transform1151]);
{ .AddChildren }
HAnimSegment1149.AddChildren([Transform1150]);
Shape1153 := TShapeNode.Create;
LineSet1154 := TLineSetNode.Create;
LineSet1154.SetVertexCount([2]);
Coordinate1155 := TCoordinateNode.Create;
Coordinate1155.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet1154.Coord := Coordinate1155;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA1156 := TColorRGBANode.Create;
ColorRGBA1156 := ColorRGBA27;
{ .SetColor }
LineSet1154.Color := ColorRGBA1156;
{ .SetGeometry }
Shape1153.Geometry := LineSet1154;
{ .AddChildren }
HAnimSegment1149.AddChildren([Shape1153]);
{ .AddChildren }
HAnimJoint1148.AddChildren([HAnimSegment1149]);
HAnimJoint1157 := THAnimJointNode.Create;
HAnimJoint1157.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint1157.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint1157.SetUlimit([0,0,0]);
HAnimJoint1157.SetLlimit([0,0,0]);
HAnimSegment1158 := THAnimSegmentNode.Create;
HAnimSegment1158.NameField := 'l_carpal_middle_phalanx_3';
Transform1159 := TTransformNode.Create;
Transform1159.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform1160 := TTransformNode.Create;
{ Empty Transform }
Shape1161 := TShapeNode.Create;
Shape1161 := Shape20;
{ .AddChild }
Transform1160.AddChildren([Shape1161]);
{ .AddChildren }
Transform1159.AddChildren([Transform1160]);
{ .AddChildren }
HAnimSegment1158.AddChildren([Transform1159]);
Shape1162 := TShapeNode.Create;
LineSet1163 := TLineSetNode.Create;
LineSet1163.SetVertexCount([2]);
Coordinate1164 := TCoordinateNode.Create;
Coordinate1164.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet1163.Coord := Coordinate1164;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1165 := TColorRGBANode.Create;
ColorRGBA1165 := ColorRGBA27;
{ .SetColor }
LineSet1163.Color := ColorRGBA1165;
{ .SetGeometry }
Shape1162.Geometry := LineSet1163;
{ .AddChildren }
HAnimSegment1158.AddChildren([Shape1162]);
{ .AddChildren }
HAnimJoint1157.AddChildren([HAnimSegment1158]);
HAnimJoint1166 := THAnimJointNode.Create;
HAnimJoint1166.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint1166.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint1166.SetUlimit([0,0,0]);
HAnimJoint1166.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1157.AddChildren([HAnimJoint1166]);
{ .AddChildren }
HAnimJoint1148.AddChildren([HAnimJoint1157]);
{ .AddChildren }
HAnimJoint1132.AddChildren([HAnimJoint1148]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimJoint1132]);
HAnimJoint1167 := THAnimJointNode.Create;
HAnimJoint1167.NameField := 'l_carpometacarpal_4';
HAnimJoint1167.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint1167.SetUlimit([0,0,0]);
HAnimJoint1167.SetLlimit([0,0,0]);
HAnimSegment1168 := THAnimSegmentNode.Create;
HAnimSegment1168.NameField := 'l_metacarpal_4';
Transform1169 := TTransformNode.Create;
Transform1169.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform1170 := TTransformNode.Create;
{ Empty Transform }
Shape1171 := TShapeNode.Create;
Shape1171 := Shape20;
{ .AddChild }
Transform1170.AddChildren([Shape1171]);
{ .AddChildren }
Transform1169.AddChildren([Transform1170]);
{ .AddChildren }
HAnimSegment1168.AddChildren([Transform1169]);
Shape1172 := TShapeNode.Create;
LineSet1173 := TLineSetNode.Create;
LineSet1173.SetVertexCount([2]);
Coordinate1174 := TCoordinateNode.Create;
Coordinate1174.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet1173.Coord := Coordinate1174;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
ColorRGBA1175 := TColorRGBANode.Create;
ColorRGBA1175 := ColorRGBA27;
{ .SetColor }
LineSet1173.Color := ColorRGBA1175;
{ .SetGeometry }
Shape1172.Geometry := LineSet1173;
{ .AddChildren }
HAnimSegment1168.AddChildren([Shape1172]);
{ .AddChildren }
HAnimJoint1167.AddChildren([HAnimSegment1168]);
HAnimJoint1176 := THAnimJointNode.Create;
HAnimJoint1176.NameField := 'l_metacarpophalangeal_4';
HAnimJoint1176.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint1176.SetUlimit([0,0,0]);
HAnimJoint1176.SetLlimit([0,0,0]);
HAnimSegment1177 := THAnimSegmentNode.Create;
HAnimSegment1177.NameField := 'l_carpal_proximal_phalanx_4';
Transform1178 := TTransformNode.Create;
Transform1178.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform1179 := TTransformNode.Create;
{ Empty Transform }
Shape1180 := TShapeNode.Create;
Shape1180 := Shape20;
{ .AddChild }
Transform1179.AddChildren([Shape1180]);
{ .AddChildren }
Transform1178.AddChildren([Transform1179]);
{ .AddChildren }
HAnimSegment1177.AddChildren([Transform1178]);
Shape1181 := TShapeNode.Create;
LineSet1182 := TLineSetNode.Create;
LineSet1182.SetVertexCount([2]);
Coordinate1183 := TCoordinateNode.Create;
Coordinate1183.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet1182.Coord := Coordinate1183;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1184 := TColorRGBANode.Create;
ColorRGBA1184 := ColorRGBA27;
{ .SetColor }
LineSet1182.Color := ColorRGBA1184;
{ .SetGeometry }
Shape1181.Geometry := LineSet1182;
{ .AddChildren }
HAnimSegment1177.AddChildren([Shape1181]);
{ .AddChildren }
HAnimJoint1176.AddChildren([HAnimSegment1177]);
HAnimJoint1185 := THAnimJointNode.Create;
HAnimJoint1185.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint1185.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint1185.SetUlimit([0,0,0]);
HAnimJoint1185.SetLlimit([0,0,0]);
HAnimSegment1186 := THAnimSegmentNode.Create;
HAnimSegment1186.NameField := 'l_carpal_middle_phalanx_4';
Transform1187 := TTransformNode.Create;
Transform1187.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform1188 := TTransformNode.Create;
{ Empty Transform }
Shape1189 := TShapeNode.Create;
Shape1189 := Shape20;
{ .AddChild }
Transform1188.AddChildren([Shape1189]);
{ .AddChildren }
Transform1187.AddChildren([Transform1188]);
{ .AddChildren }
HAnimSegment1186.AddChildren([Transform1187]);
Shape1190 := TShapeNode.Create;
LineSet1191 := TLineSetNode.Create;
LineSet1191.SetVertexCount([2]);
Coordinate1192 := TCoordinateNode.Create;
Coordinate1192.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet1191.Coord := Coordinate1192;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1193 := TColorRGBANode.Create;
ColorRGBA1193 := ColorRGBA27;
{ .SetColor }
LineSet1191.Color := ColorRGBA1193;
{ .SetGeometry }
Shape1190.Geometry := LineSet1191;
{ .AddChildren }
HAnimSegment1186.AddChildren([Shape1190]);
{ .AddChildren }
HAnimJoint1185.AddChildren([HAnimSegment1186]);
HAnimJoint1194 := THAnimJointNode.Create;
HAnimJoint1194.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint1194.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint1194.SetUlimit([0,0,0]);
HAnimJoint1194.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1185.AddChildren([HAnimJoint1194]);
{ .AddChildren }
HAnimJoint1176.AddChildren([HAnimJoint1185]);
{ .AddChildren }
HAnimJoint1167.AddChildren([HAnimJoint1176]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimJoint1167]);
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195.NameField := 'l_carpometacarpal_5';
HAnimJoint1195.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint1195.SetUlimit([0,0,0]);
HAnimJoint1195.SetLlimit([0,0,0]);
HAnimSegment1196 := THAnimSegmentNode.Create;
HAnimSegment1196.NameField := 'l_metacarpal_5';
Transform1197 := TTransformNode.Create;
Transform1197.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform1198 := TTransformNode.Create;
{ Empty Transform }
Shape1199 := TShapeNode.Create;
Shape1199 := Shape20;
{ .AddChild }
Transform1198.AddChildren([Shape1199]);
{ .AddChildren }
Transform1197.AddChildren([Transform1198]);
{ .AddChildren }
HAnimSegment1196.AddChildren([Transform1197]);
Shape1200 := TShapeNode.Create;
LineSet1201 := TLineSetNode.Create;
LineSet1201.SetVertexCount([2]);
Coordinate1202 := TCoordinateNode.Create;
Coordinate1202.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet1201.Coord := Coordinate1202;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
ColorRGBA1203 := TColorRGBANode.Create;
ColorRGBA1203 := ColorRGBA27;
{ .SetColor }
LineSet1201.Color := ColorRGBA1203;
{ .SetGeometry }
Shape1200.Geometry := LineSet1201;
{ .AddChildren }
HAnimSegment1196.AddChildren([Shape1200]);
HAnimSite1204 := THAnimSiteNode.Create;
HAnimSite1204.NameField := 'l_metacarpal_phalanx_5';
HAnimSite1204.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1205 := TTouchSensorNode.Create;
TouchSensor1205.Description := 'HAnimSite 77 l_metacarpal_phalanx_5';
{ .AddChildren }
HAnimSite1204.AddChildren([TouchSensor1205]);
Shape1206 := TShapeNode.Create;
Shape1206 := Shape30;
{ .AddChildren }
HAnimSite1204.AddChildren([Shape1206]);
Billboard1207 := TBillboardNode.Create;
Shape1208 := TShapeNode.Create;
Text1209 := TTextNode.Create;
Text1209.SetText(['77']);
FontStyle1210 := TFontStyleNode.Create;
FontStyle1210.Size := 0.035;
{ .SetFontStyle }
Text1209.FontStyle := FontStyle1210;
{ .SetGeometry }
Shape1208.Geometry := Text1209;
{ .AddChildren }
Billboard1207.AddChildren([Shape1208]);
{ .AddChildren }
HAnimSite1204.AddChildren([Billboard1207]);
{ .AddChildren }
HAnimSegment1196.AddChildren([HAnimSite1204]);
{ .AddChildren }
HAnimJoint1195.AddChildren([HAnimSegment1196]);
HAnimJoint1211 := THAnimJointNode.Create;
HAnimJoint1211.NameField := 'l_metacarpophalangeal_5';
HAnimJoint1211.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint1211.SetUlimit([0,0,0]);
HAnimJoint1211.SetLlimit([0,0,0]);
HAnimSegment1212 := THAnimSegmentNode.Create;
HAnimSegment1212.NameField := 'l_carpal_proximal_phalanx_5';
Transform1213 := TTransformNode.Create;
Transform1213.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform1214 := TTransformNode.Create;
{ Empty Transform }
Shape1215 := TShapeNode.Create;
Shape1215 := Shape20;
{ .AddChild }
Transform1214.AddChildren([Shape1215]);
{ .AddChildren }
Transform1213.AddChildren([Transform1214]);
{ .AddChildren }
HAnimSegment1212.AddChildren([Transform1213]);
Shape1216 := TShapeNode.Create;
LineSet1217 := TLineSetNode.Create;
LineSet1217.SetVertexCount([2]);
Coordinate1218 := TCoordinateNode.Create;
Coordinate1218.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet1217.Coord := Coordinate1218;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1219 := TColorRGBANode.Create;
ColorRGBA1219 := ColorRGBA27;
{ .SetColor }
LineSet1217.Color := ColorRGBA1219;
{ .SetGeometry }
Shape1216.Geometry := LineSet1217;
{ .AddChildren }
HAnimSegment1212.AddChildren([Shape1216]);
{ .AddChildren }
HAnimJoint1211.AddChildren([HAnimSegment1212]);
HAnimJoint1220 := THAnimJointNode.Create;
HAnimJoint1220.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint1220.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint1220.SetUlimit([0,0,0]);
HAnimJoint1220.SetLlimit([0,0,0]);
HAnimSegment1221 := THAnimSegmentNode.Create;
HAnimSegment1221.NameField := 'l_carpal_middle_phalanx_5';
Transform1222 := TTransformNode.Create;
Transform1222.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform1223 := TTransformNode.Create;
{ Empty Transform }
Shape1224 := TShapeNode.Create;
Shape1224 := Shape20;
{ .AddChild }
Transform1223.AddChildren([Shape1224]);
{ .AddChildren }
Transform1222.AddChildren([Transform1223]);
{ .AddChildren }
HAnimSegment1221.AddChildren([Transform1222]);
Shape1225 := TShapeNode.Create;
LineSet1226 := TLineSetNode.Create;
LineSet1226.SetVertexCount([2]);
Coordinate1227 := TCoordinateNode.Create;
Coordinate1227.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet1226.Coord := Coordinate1227;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1228 := TColorRGBANode.Create;
ColorRGBA1228 := ColorRGBA27;
{ .SetColor }
LineSet1226.Color := ColorRGBA1228;
{ .SetGeometry }
Shape1225.Geometry := LineSet1226;
{ .AddChildren }
HAnimSegment1221.AddChildren([Shape1225]);
{ .AddChildren }
HAnimJoint1220.AddChildren([HAnimSegment1221]);
HAnimJoint1229 := THAnimJointNode.Create;
HAnimJoint1229.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint1229.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint1229.SetUlimit([0,0,0]);
HAnimJoint1229.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1220.AddChildren([HAnimJoint1229]);
{ .AddChildren }
HAnimJoint1211.AddChildren([HAnimJoint1220]);
{ .AddChildren }
HAnimJoint1195.AddChildren([HAnimJoint1211]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimJoint1195]);
{ .AddChildren }
HAnimJoint1009.AddChildren([HAnimJoint1046]);
{ .AddChildren }
HAnimJoint986.AddChildren([HAnimJoint1009]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint986]);
{ .AddChildren }
HAnimJoint933.AddChildren([HAnimJoint977]);
{ .AddChildren }
HAnimJoint701.AddChildren([HAnimJoint933]);
HAnimJoint1230 := THAnimJointNode.Create;
HAnimJoint1230.NameField := 'r_sternoclavicular';
HAnimJoint1230.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint1230.SetUlimit([0,0,0]);
HAnimJoint1230.SetLlimit([0,0,0]);
HAnimSegment1231 := THAnimSegmentNode.Create;
HAnimSegment1231.NameField := 'r_clavicle';
Transform1232 := TTransformNode.Create;
Transform1232.Translation := Vector3(-0.0694,1.46,-0.033);
Transform1233 := TTransformNode.Create;
{ Empty Transform }
Shape1234 := TShapeNode.Create;
Shape1234 := Shape20;
{ .AddChild }
Transform1233.AddChildren([Shape1234]);
{ .AddChildren }
Transform1232.AddChildren([Transform1233]);
{ .AddChildren }
HAnimSegment1231.AddChildren([Transform1232]);
Shape1235 := TShapeNode.Create;
LineSet1236 := TLineSetNode.Create;
LineSet1236.SetVertexCount([2]);
Coordinate1237 := TCoordinateNode.Create;
Coordinate1237.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ .SetCoord }
LineSet1236.Coord := Coordinate1237;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
ColorRGBA1238 := TColorRGBANode.Create;
ColorRGBA1238 := ColorRGBA27;
{ .SetColor }
LineSet1236.Color := ColorRGBA1238;
{ .SetGeometry }
Shape1235.Geometry := LineSet1236;
{ .AddChildren }
HAnimSegment1231.AddChildren([Shape1235]);
HAnimSite1239 := THAnimSiteNode.Create;
HAnimSite1239.NameField := 'r_acromion';
HAnimSite1239.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor1240 := TTouchSensorNode.Create;
TouchSensor1240.Description := 'HAnimSite 20 r_acromion';
{ .AddChildren }
HAnimSite1239.AddChildren([TouchSensor1240]);
Shape1241 := TShapeNode.Create;
Shape1241 := Shape30;
{ .AddChildren }
HAnimSite1239.AddChildren([Shape1241]);
Billboard1242 := TBillboardNode.Create;
Shape1243 := TShapeNode.Create;
Text1244 := TTextNode.Create;
Text1244.SetText(['20']);
FontStyle1245 := TFontStyleNode.Create;
FontStyle1245.Size := 0.035;
{ .SetFontStyle }
Text1244.FontStyle := FontStyle1245;
{ .SetGeometry }
Shape1243.Geometry := Text1244;
{ .AddChildren }
Billboard1242.AddChildren([Shape1243]);
{ .AddChildren }
HAnimSite1239.AddChildren([Billboard1242]);
{ .AddChildren }
HAnimSegment1231.AddChildren([HAnimSite1239]);
HAnimSite1246 := THAnimSiteNode.Create;
HAnimSite1246.NameField := 'r_axilla_distal';
HAnimSite1246.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor1247 := TTouchSensorNode.Create;
TouchSensor1247.Description := 'HAnimSite 22 r_axilla_distal';
{ .AddChildren }
HAnimSite1246.AddChildren([TouchSensor1247]);
Shape1248 := TShapeNode.Create;
Shape1248 := Shape30;
{ .AddChildren }
HAnimSite1246.AddChildren([Shape1248]);
Billboard1249 := TBillboardNode.Create;
Shape1250 := TShapeNode.Create;
Text1251 := TTextNode.Create;
Text1251.SetText(['22']);
FontStyle1252 := TFontStyleNode.Create;
FontStyle1252.Size := 0.035;
{ .SetFontStyle }
Text1251.FontStyle := FontStyle1252;
{ .SetGeometry }
Shape1250.Geometry := Text1251;
{ .AddChildren }
Billboard1249.AddChildren([Shape1250]);
{ .AddChildren }
HAnimSite1246.AddChildren([Billboard1249]);
{ .AddChildren }
HAnimSegment1231.AddChildren([HAnimSite1246]);
HAnimSite1253 := THAnimSiteNode.Create;
HAnimSite1253.NameField := 'r_axilla_posterior_folds';
TouchSensor1254 := TTouchSensorNode.Create;
TouchSensor1254.Description := 'HAnimSite 23 r_axilla_posterior_folds';
{ .AddChildren }
HAnimSite1253.AddChildren([TouchSensor1254]);
Shape1255 := TShapeNode.Create;
Shape1255 := Shape30;
{ .AddChildren }
HAnimSite1253.AddChildren([Shape1255]);
Billboard1256 := TBillboardNode.Create;
Shape1257 := TShapeNode.Create;
Text1258 := TTextNode.Create;
Text1258.SetText(['23']);
FontStyle1259 := TFontStyleNode.Create;
FontStyle1259.Size := 0.035;
{ .SetFontStyle }
Text1258.FontStyle := FontStyle1259;
{ .SetGeometry }
Shape1257.Geometry := Text1258;
{ .AddChildren }
Billboard1256.AddChildren([Shape1257]);
{ .AddChildren }
HAnimSite1253.AddChildren([Billboard1256]);
{ .AddChildren }
HAnimSegment1231.AddChildren([HAnimSite1253]);
HAnimSite1260 := THAnimSiteNode.Create;
HAnimSite1260.NameField := 'r_axilla_proximal';
HAnimSite1260.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1261 := TTouchSensorNode.Create;
TouchSensor1261.Description := 'HAnimSite 21 r_axilla_proximal';
{ .AddChildren }
HAnimSite1260.AddChildren([TouchSensor1261]);
Shape1262 := TShapeNode.Create;
Shape1262 := Shape30;
{ .AddChildren }
HAnimSite1260.AddChildren([Shape1262]);
Billboard1263 := TBillboardNode.Create;
Shape1264 := TShapeNode.Create;
Text1265 := TTextNode.Create;
Text1265.SetText(['21']);
FontStyle1266 := TFontStyleNode.Create;
FontStyle1266.Size := 0.035;
{ .SetFontStyle }
Text1265.FontStyle := FontStyle1266;
{ .SetGeometry }
Shape1264.Geometry := Text1265;
{ .AddChildren }
Billboard1263.AddChildren([Shape1264]);
{ .AddChildren }
HAnimSite1260.AddChildren([Billboard1263]);
{ .AddChildren }
HAnimSegment1231.AddChildren([HAnimSite1260]);
HAnimSite1267 := THAnimSiteNode.Create;
HAnimSite1267.NameField := 'r_clavicale';
HAnimSite1267.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1268 := TTouchSensorNode.Create;
TouchSensor1268.Description := 'HAnimSite 19 r_clavicale';
{ .AddChildren }
HAnimSite1267.AddChildren([TouchSensor1268]);
Shape1269 := TShapeNode.Create;
Shape1269 := Shape30;
{ .AddChildren }
HAnimSite1267.AddChildren([Shape1269]);
Billboard1270 := TBillboardNode.Create;
Shape1271 := TShapeNode.Create;
Text1272 := TTextNode.Create;
Text1272.SetText(['19']);
FontStyle1273 := TFontStyleNode.Create;
FontStyle1273.Size := 0.035;
{ .SetFontStyle }
Text1272.FontStyle := FontStyle1273;
{ .SetGeometry }
Shape1271.Geometry := Text1272;
{ .AddChildren }
Billboard1270.AddChildren([Shape1271]);
{ .AddChildren }
HAnimSite1267.AddChildren([Billboard1270]);
{ .AddChildren }
HAnimSegment1231.AddChildren([HAnimSite1267]);
{ .AddChildren }
HAnimJoint1230.AddChildren([HAnimSegment1231]);
HAnimJoint1274 := THAnimJointNode.Create;
HAnimJoint1274.NameField := 'r_acromioclavicular';
HAnimJoint1274.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint1274.SetUlimit([0,0,0]);
HAnimJoint1274.SetLlimit([0,0,0]);
HAnimSegment1275 := THAnimSegmentNode.Create;
HAnimSegment1275.NameField := 'r_scapula';
Transform1276 := TTransformNode.Create;
Transform1276.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1277 := TTransformNode.Create;
{ Empty Transform }
Shape1278 := TShapeNode.Create;
Shape1278 := Shape20;
{ .AddChild }
Transform1277.AddChildren([Shape1278]);
{ .AddChildren }
Transform1276.AddChildren([Transform1277]);
{ .AddChildren }
HAnimSegment1275.AddChildren([Transform1276]);
Shape1279 := TShapeNode.Create;
LineSet1280 := TLineSetNode.Create;
LineSet1280.SetVertexCount([2]);
Coordinate1281 := TCoordinateNode.Create;
Coordinate1281.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ .SetCoord }
LineSet1280.Coord := Coordinate1281;
{ from r_acromioclavicular to r_shoulder vertices 2 }
ColorRGBA1282 := TColorRGBANode.Create;
ColorRGBA1282 := ColorRGBA27;
{ .SetColor }
LineSet1280.Color := ColorRGBA1282;
{ .SetGeometry }
Shape1279.Geometry := LineSet1280;
{ .AddChildren }
HAnimSegment1275.AddChildren([Shape1279]);
{ .AddChildren }
HAnimJoint1274.AddChildren([HAnimSegment1275]);
HAnimJoint1283 := THAnimJointNode.Create;
HAnimJoint1283.NameField := 'r_shoulder';
HAnimJoint1283.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint1283.SetUlimit([0,0,0]);
HAnimJoint1283.SetLlimit([0,0,0]);
HAnimSegment1284 := THAnimSegmentNode.Create;
HAnimSegment1284.NameField := 'r_upperarm';
Transform1285 := TTransformNode.Create;
Transform1285.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1286 := TTransformNode.Create;
{ Empty Transform }
Shape1287 := TShapeNode.Create;
Shape1287 := Shape20;
{ .AddChild }
Transform1286.AddChildren([Shape1287]);
{ .AddChildren }
Transform1285.AddChildren([Transform1286]);
{ .AddChildren }
HAnimSegment1284.AddChildren([Transform1285]);
Shape1288 := TShapeNode.Create;
LineSet1289 := TLineSetNode.Create;
LineSet1289.SetVertexCount([2]);
Coordinate1290 := TCoordinateNode.Create;
Coordinate1290.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ .SetCoord }
LineSet1289.Coord := Coordinate1290;
{ from r_shoulder to r_elbow vertices 2 }
ColorRGBA1291 := TColorRGBANode.Create;
ColorRGBA1291 := ColorRGBA27;
{ .SetColor }
LineSet1289.Color := ColorRGBA1291;
{ .SetGeometry }
Shape1288.Geometry := LineSet1289;
{ .AddChildren }
HAnimSegment1284.AddChildren([Shape1288]);
HAnimSite1292 := THAnimSiteNode.Create;
HAnimSite1292.NameField := 'r_bideltoid';
TouchSensor1293 := TTouchSensorNode.Create;
TouchSensor1293.Description := 'HAnimSite 97 r_bideltoid';
{ .AddChildren }
HAnimSite1292.AddChildren([TouchSensor1293]);
Shape1294 := TShapeNode.Create;
Shape1294 := Shape30;
{ .AddChildren }
HAnimSite1292.AddChildren([Shape1294]);
Billboard1295 := TBillboardNode.Create;
Shape1296 := TShapeNode.Create;
Text1297 := TTextNode.Create;
Text1297.SetText(['97']);
FontStyle1298 := TFontStyleNode.Create;
FontStyle1298.Size := 0.035;
{ .SetFontStyle }
Text1297.FontStyle := FontStyle1298;
{ .SetGeometry }
Shape1296.Geometry := Text1297;
{ .AddChildren }
Billboard1295.AddChildren([Shape1296]);
{ .AddChildren }
HAnimSite1292.AddChildren([Billboard1295]);
{ .AddChildren }
HAnimSegment1284.AddChildren([HAnimSite1292]);
HAnimSite1299 := THAnimSiteNode.Create;
HAnimSite1299.NameField := 'r_humeral_lateral_epicondyles';
HAnimSite1299.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1300 := TTouchSensorNode.Create;
TouchSensor1300.Description := 'HAnimSite 66 r_humeral_lateral_epicondyles';
{ .AddChildren }
HAnimSite1299.AddChildren([TouchSensor1300]);
Shape1301 := TShapeNode.Create;
Shape1301 := Shape30;
{ .AddChildren }
HAnimSite1299.AddChildren([Shape1301]);
Billboard1302 := TBillboardNode.Create;
Shape1303 := TShapeNode.Create;
Text1304 := TTextNode.Create;
Text1304.SetText(['66']);
FontStyle1305 := TFontStyleNode.Create;
FontStyle1305.Size := 0.035;
{ .SetFontStyle }
Text1304.FontStyle := FontStyle1305;
{ .SetGeometry }
Shape1303.Geometry := Text1304;
{ .AddChildren }
Billboard1302.AddChildren([Shape1303]);
{ .AddChildren }
HAnimSite1299.AddChildren([Billboard1302]);
{ .AddChildren }
HAnimSegment1284.AddChildren([HAnimSite1299]);
{ .AddChildren }
HAnimJoint1283.AddChildren([HAnimSegment1284]);
HAnimJoint1306 := THAnimJointNode.Create;
HAnimJoint1306.NameField := 'r_elbow';
HAnimJoint1306.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint1306.SetUlimit([0,0,0]);
HAnimJoint1306.SetLlimit([0,0,0]);
HAnimSegment1307 := THAnimSegmentNode.Create;
HAnimSegment1307.NameField := 'r_forearm';
Transform1308 := TTransformNode.Create;
Transform1308.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1309 := TTransformNode.Create;
{ Empty Transform }
Shape1310 := TShapeNode.Create;
Shape1310 := Shape20;
{ .AddChild }
Transform1309.AddChildren([Shape1310]);
{ .AddChildren }
Transform1308.AddChildren([Transform1309]);
{ .AddChildren }
HAnimSegment1307.AddChildren([Transform1308]);
Shape1311 := TShapeNode.Create;
LineSet1312 := TLineSetNode.Create;
LineSet1312.SetVertexCount([2]);
Coordinate1313 := TCoordinateNode.Create;
Coordinate1313.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ .SetCoord }
LineSet1312.Coord := Coordinate1313;
{ from r_elbow to r_radiocarpal vertices 2 }
ColorRGBA1314 := TColorRGBANode.Create;
ColorRGBA1314 := ColorRGBA27;
{ .SetColor }
LineSet1312.Color := ColorRGBA1314;
{ .SetGeometry }
Shape1311.Geometry := LineSet1312;
{ .AddChildren }
HAnimSegment1307.AddChildren([Shape1311]);
HAnimSite1315 := THAnimSiteNode.Create;
HAnimSite1315.NameField := 'r_humeral_medial_epicondyles';
HAnimSite1315.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1316 := TTouchSensorNode.Create;
TouchSensor1316.Description := 'HAnimSite 67 r_humeral_medial_epicondyles';
{ .AddChildren }
HAnimSite1315.AddChildren([TouchSensor1316]);
Shape1317 := TShapeNode.Create;
Shape1317 := Shape30;
{ .AddChildren }
HAnimSite1315.AddChildren([Shape1317]);
Billboard1318 := TBillboardNode.Create;
Shape1319 := TShapeNode.Create;
Text1320 := TTextNode.Create;
Text1320.SetText(['67']);
FontStyle1321 := TFontStyleNode.Create;
FontStyle1321.Size := 0.035;
{ .SetFontStyle }
Text1320.FontStyle := FontStyle1321;
{ .SetGeometry }
Shape1319.Geometry := Text1320;
{ .AddChildren }
Billboard1318.AddChildren([Shape1319]);
{ .AddChildren }
HAnimSite1315.AddChildren([Billboard1318]);
{ .AddChildren }
HAnimSegment1307.AddChildren([HAnimSite1315]);
HAnimSite1322 := THAnimSiteNode.Create;
HAnimSite1322.NameField := 'r_olecranon';
HAnimSite1322.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1323 := TTouchSensorNode.Create;
TouchSensor1323.Description := 'HAnimSite 68 r_olecranon';
{ .AddChildren }
HAnimSite1322.AddChildren([TouchSensor1323]);
Shape1324 := TShapeNode.Create;
Shape1324 := Shape30;
{ .AddChildren }
HAnimSite1322.AddChildren([Shape1324]);
Billboard1325 := TBillboardNode.Create;
Shape1326 := TShapeNode.Create;
Text1327 := TTextNode.Create;
Text1327.SetText(['68']);
FontStyle1328 := TFontStyleNode.Create;
FontStyle1328.Size := 0.035;
{ .SetFontStyle }
Text1327.FontStyle := FontStyle1328;
{ .SetGeometry }
Shape1326.Geometry := Text1327;
{ .AddChildren }
Billboard1325.AddChildren([Shape1326]);
{ .AddChildren }
HAnimSite1322.AddChildren([Billboard1325]);
{ .AddChildren }
HAnimSegment1307.AddChildren([HAnimSite1322]);
HAnimSite1329 := THAnimSiteNode.Create;
HAnimSite1329.NameField := 'r_radial_styloid';
HAnimSite1329.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1330 := TTouchSensorNode.Create;
TouchSensor1330.Description := 'HAnimSite 74 r_radial_styloid';
{ .AddChildren }
HAnimSite1329.AddChildren([TouchSensor1330]);
Shape1331 := TShapeNode.Create;
Shape1331 := Shape30;
{ .AddChildren }
HAnimSite1329.AddChildren([Shape1331]);
Billboard1332 := TBillboardNode.Create;
Shape1333 := TShapeNode.Create;
Text1334 := TTextNode.Create;
Text1334.SetText(['74']);
FontStyle1335 := TFontStyleNode.Create;
FontStyle1335.Size := 0.035;
{ .SetFontStyle }
Text1334.FontStyle := FontStyle1335;
{ .SetGeometry }
Shape1333.Geometry := Text1334;
{ .AddChildren }
Billboard1332.AddChildren([Shape1333]);
{ .AddChildren }
HAnimSite1329.AddChildren([Billboard1332]);
{ .AddChildren }
HAnimSegment1307.AddChildren([HAnimSite1329]);
HAnimSite1336 := THAnimSiteNode.Create;
HAnimSite1336.NameField := 'r_radiale';
HAnimSite1336.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1337 := TTouchSensorNode.Create;
TouchSensor1337.Description := 'HAnimSite 72 r_radiale';
{ .AddChildren }
HAnimSite1336.AddChildren([TouchSensor1337]);
Shape1338 := TShapeNode.Create;
Shape1338 := Shape30;
{ .AddChildren }
HAnimSite1336.AddChildren([Shape1338]);
Billboard1339 := TBillboardNode.Create;
Shape1340 := TShapeNode.Create;
Text1341 := TTextNode.Create;
Text1341.SetText(['72']);
FontStyle1342 := TFontStyleNode.Create;
FontStyle1342.Size := 0.035;
{ .SetFontStyle }
Text1341.FontStyle := FontStyle1342;
{ .SetGeometry }
Shape1340.Geometry := Text1341;
{ .AddChildren }
Billboard1339.AddChildren([Shape1340]);
{ .AddChildren }
HAnimSite1336.AddChildren([Billboard1339]);
{ .AddChildren }
HAnimSegment1307.AddChildren([HAnimSite1336]);
{ .AddChildren }
HAnimJoint1306.AddChildren([HAnimSegment1307]);
HAnimJoint1343 := THAnimJointNode.Create;
HAnimJoint1343.NameField := 'r_radiocarpal';
HAnimJoint1343.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint1343.SetUlimit([0,0,0]);
HAnimJoint1343.SetLlimit([0,0,0]);
HAnimSegment1344 := THAnimSegmentNode.Create;
HAnimSegment1344.NameField := 'r_carpal';
Transform1345 := TTransformNode.Create;
Transform1345.Scale := Vector3(0.2,0.2,0.2);
Transform1345.Translation := Vector3(-0.2,0.85,-0.05);
Transform1345.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1346 := TTransformNode.Create;
Transform1346.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
Shape1347 := TShapeNode.Create;
Shape1347 := Shape20;
{ .AddChild }
Transform1346.AddChildren([Shape1347]);
{ .AddChildren }
Transform1345.AddChildren([Transform1346]);
{ .AddChildren }
HAnimSegment1344.AddChildren([Transform1345]);
Shape1348 := TShapeNode.Create;
LineSet1349 := TLineSetNode.Create;
LineSet1349.SetVertexCount([2]);
Coordinate1350 := TCoordinateNode.Create;
Coordinate1350.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1899,0.8502,-0.0473)]);
{ .SetCoord }
LineSet1349.Coord := Coordinate1350;
{ from r_radiocarpal to r_carpometacarpal_1 vertices 2 }
ColorRGBA1351 := TColorRGBANode.Create;
ColorRGBA1351 := ColorRGBA27;
{ .SetColor }
LineSet1349.Color := ColorRGBA1351;
{ .SetGeometry }
Shape1348.Geometry := LineSet1349;
{ .AddChildren }
HAnimSegment1344.AddChildren([Shape1348]);
HAnimSite1352 := THAnimSiteNode.Create;
HAnimSite1352.NameField := 'r_ulnar_styloid';
HAnimSite1352.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1353 := TTouchSensorNode.Create;
TouchSensor1353.Description := 'HAnimSite 73 r_ulnar_styloid';
{ .AddChildren }
HAnimSite1352.AddChildren([TouchSensor1353]);
Shape1354 := TShapeNode.Create;
Shape1354 := Shape30;
{ .AddChildren }
HAnimSite1352.AddChildren([Shape1354]);
Billboard1355 := TBillboardNode.Create;
Shape1356 := TShapeNode.Create;
Text1357 := TTextNode.Create;
Text1357.SetText(['73']);
FontStyle1358 := TFontStyleNode.Create;
FontStyle1358.Size := 0.035;
{ .SetFontStyle }
Text1357.FontStyle := FontStyle1358;
{ .SetGeometry }
Shape1356.Geometry := Text1357;
{ .AddChildren }
Billboard1355.AddChildren([Shape1356]);
{ .AddChildren }
HAnimSite1352.AddChildren([Billboard1355]);
{ .AddChildren }
HAnimSegment1344.AddChildren([HAnimSite1352]);
Shape1359 := TShapeNode.Create;
LineSet1360 := TLineSetNode.Create;
LineSet1360.SetVertexCount([2]);
Coordinate1361 := TCoordinateNode.Create;
Coordinate1361.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1961,0.8055,-0.0218)]);
{ .SetCoord }
LineSet1360.Coord := Coordinate1361;
{ from r_radiocarpal to r_carpometacarpal_2 vertices 2 }
ColorRGBA1362 := TColorRGBANode.Create;
ColorRGBA1362 := ColorRGBA27;
{ .SetColor }
LineSet1360.Color := ColorRGBA1362;
{ .SetGeometry }
Shape1359.Geometry := LineSet1360;
{ .AddChildren }
HAnimSegment1344.AddChildren([Shape1359]);
Shape1363 := TShapeNode.Create;
LineSet1364 := TLineSetNode.Create;
LineSet1364.SetVertexCount([2]);
Coordinate1365 := TCoordinateNode.Create;
Coordinate1365.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1972,0.806,-0.0468)]);
{ .SetCoord }
LineSet1364.Coord := Coordinate1365;
{ from r_radiocarpal to r_carpometacarpal_3 vertices 2 }
ColorRGBA1366 := TColorRGBANode.Create;
ColorRGBA1366 := ColorRGBA27;
{ .SetColor }
LineSet1364.Color := ColorRGBA1366;
{ .SetGeometry }
Shape1363.Geometry := LineSet1364;
{ .AddChildren }
HAnimSegment1344.AddChildren([Shape1363]);
Shape1367 := TShapeNode.Create;
LineSet1368 := TLineSetNode.Create;
LineSet1368.SetVertexCount([2]);
Coordinate1369 := TCoordinateNode.Create;
Coordinate1369.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1951,0.8049,-0.0732)]);
{ .SetCoord }
LineSet1368.Coord := Coordinate1369;
{ from r_radiocarpal to r_carpometacarpal_4 vertices 2 }
ColorRGBA1370 := TColorRGBANode.Create;
ColorRGBA1370 := ColorRGBA27;
{ .SetColor }
LineSet1368.Color := ColorRGBA1370;
{ .SetGeometry }
Shape1367.Geometry := LineSet1368;
{ .AddChildren }
HAnimSegment1344.AddChildren([Shape1367]);
Shape1371 := TShapeNode.Create;
LineSet1372 := TLineSetNode.Create;
LineSet1372.SetVertexCount([2]);
Coordinate1373 := TCoordinateNode.Create;
Coordinate1373.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1926,0.8096,-0.0975)]);
{ .SetCoord }
LineSet1372.Coord := Coordinate1373;
{ from r_radiocarpal to r_carpometacarpal_5 vertices 2 }
ColorRGBA1374 := TColorRGBANode.Create;
ColorRGBA1374 := ColorRGBA27;
{ .SetColor }
LineSet1372.Color := ColorRGBA1374;
{ .SetGeometry }
Shape1371.Geometry := LineSet1372;
{ .AddChildren }
HAnimSegment1344.AddChildren([Shape1371]);
{ .AddChildren }
HAnimJoint1343.AddChildren([HAnimSegment1344]);
HAnimJoint1375 := THAnimJointNode.Create;
HAnimJoint1375.NameField := 'r_carpometacarpal_1';
HAnimJoint1375.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint1375.SetUlimit([0,0,0]);
HAnimJoint1375.SetLlimit([0,0,0]);
HAnimSegment1376 := THAnimSegmentNode.Create;
HAnimSegment1376.NameField := 'r_metacarpal_1';
Transform1377 := TTransformNode.Create;
Transform1377.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1378 := TTransformNode.Create;
{ Empty Transform }
Shape1379 := TShapeNode.Create;
Shape1379 := Shape20;
{ .AddChild }
Transform1378.AddChildren([Shape1379]);
{ .AddChildren }
Transform1377.AddChildren([Transform1378]);
{ .AddChildren }
HAnimSegment1376.AddChildren([Transform1377]);
Shape1380 := TShapeNode.Create;
LineSet1381 := TLineSetNode.Create;
LineSet1381.SetVertexCount([2]);
Coordinate1382 := TCoordinateNode.Create;
Coordinate1382.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ .SetCoord }
LineSet1381.Coord := Coordinate1382;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
ColorRGBA1383 := TColorRGBANode.Create;
ColorRGBA1383 := ColorRGBA27;
{ .SetColor }
LineSet1381.Color := ColorRGBA1383;
{ .SetGeometry }
Shape1380.Geometry := LineSet1381;
{ .AddChildren }
HAnimSegment1376.AddChildren([Shape1380]);
{ .AddChildren }
HAnimJoint1375.AddChildren([HAnimSegment1376]);
HAnimJoint1384 := THAnimJointNode.Create;
HAnimJoint1384.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1384.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint1384.SetUlimit([0,0,0]);
HAnimJoint1384.SetLlimit([0,0,0]);
HAnimSegment1385 := THAnimSegmentNode.Create;
HAnimSegment1385.NameField := 'r_carpal_proximal_phalanx_1';
Transform1386 := TTransformNode.Create;
Transform1386.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1387 := TTransformNode.Create;
{ Empty Transform }
Shape1388 := TShapeNode.Create;
Shape1388 := Shape20;
{ .AddChild }
Transform1387.AddChildren([Shape1388]);
{ .AddChildren }
Transform1386.AddChildren([Transform1387]);
{ .AddChildren }
HAnimSegment1385.AddChildren([Transform1386]);
Shape1389 := TShapeNode.Create;
LineSet1390 := TLineSetNode.Create;
LineSet1390.SetVertexCount([2]);
Coordinate1391 := TCoordinateNode.Create;
Coordinate1391.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ .SetCoord }
LineSet1390.Coord := Coordinate1391;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1392 := TColorRGBANode.Create;
ColorRGBA1392 := ColorRGBA27;
{ .SetColor }
LineSet1390.Color := ColorRGBA1392;
{ .SetGeometry }
Shape1389.Geometry := LineSet1390;
{ .AddChildren }
HAnimSegment1385.AddChildren([Shape1389]);
{ .AddChildren }
HAnimJoint1384.AddChildren([HAnimSegment1385]);
HAnimJoint1393 := THAnimJointNode.Create;
HAnimJoint1393.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1393.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint1393.SetUlimit([0,0,0]);
HAnimJoint1393.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1384.AddChildren([HAnimJoint1393]);
{ .AddChildren }
HAnimJoint1375.AddChildren([HAnimJoint1384]);
{ .AddChildren }
HAnimJoint1343.AddChildren([HAnimJoint1375]);
HAnimJoint1394 := THAnimJointNode.Create;
HAnimJoint1394.NameField := 'r_carpometacarpal_2';
HAnimJoint1394.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint1394.SetUlimit([0,0,0]);
HAnimJoint1394.SetLlimit([0,0,0]);
HAnimSegment1395 := THAnimSegmentNode.Create;
HAnimSegment1395.NameField := 'r_metacarpal_2';
Transform1396 := TTransformNode.Create;
Transform1396.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1397 := TTransformNode.Create;
{ Empty Transform }
Shape1398 := TShapeNode.Create;
Shape1398 := Shape20;
{ .AddChild }
Transform1397.AddChildren([Shape1398]);
{ .AddChildren }
Transform1396.AddChildren([Transform1397]);
{ .AddChildren }
HAnimSegment1395.AddChildren([Transform1396]);
Shape1399 := TShapeNode.Create;
LineSet1400 := TLineSetNode.Create;
LineSet1400.SetVertexCount([2]);
Coordinate1401 := TCoordinateNode.Create;
Coordinate1401.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ .SetCoord }
LineSet1400.Coord := Coordinate1401;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
ColorRGBA1402 := TColorRGBANode.Create;
ColorRGBA1402 := ColorRGBA27;
{ .SetColor }
LineSet1400.Color := ColorRGBA1402;
{ .SetGeometry }
Shape1399.Geometry := LineSet1400;
{ .AddChildren }
HAnimSegment1395.AddChildren([Shape1399]);
HAnimSite1403 := THAnimSiteNode.Create;
HAnimSite1403.NameField := 'r_metacarpal_phalanx_2';
HAnimSite1403.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1404 := TTouchSensorNode.Create;
TouchSensor1404.Description := 'HAnimSite 78 r_metacarpal_phalanx_2';
{ .AddChildren }
HAnimSite1403.AddChildren([TouchSensor1404]);
Shape1405 := TShapeNode.Create;
Shape1405 := Shape30;
{ .AddChildren }
HAnimSite1403.AddChildren([Shape1405]);
Billboard1406 := TBillboardNode.Create;
Shape1407 := TShapeNode.Create;
Text1408 := TTextNode.Create;
Text1408.SetText(['78']);
FontStyle1409 := TFontStyleNode.Create;
FontStyle1409.Size := 0.035;
{ .SetFontStyle }
Text1408.FontStyle := FontStyle1409;
{ .SetGeometry }
Shape1407.Geometry := Text1408;
{ .AddChildren }
Billboard1406.AddChildren([Shape1407]);
{ .AddChildren }
HAnimSite1403.AddChildren([Billboard1406]);
{ .AddChildren }
HAnimSegment1395.AddChildren([HAnimSite1403]);
{ .AddChildren }
HAnimJoint1394.AddChildren([HAnimSegment1395]);
HAnimJoint1410 := THAnimJointNode.Create;
HAnimJoint1410.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1410.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint1410.SetUlimit([0,0,0]);
HAnimJoint1410.SetLlimit([0,0,0]);
HAnimSegment1411 := THAnimSegmentNode.Create;
HAnimSegment1411.NameField := 'r_carpal_proximal_phalanx_2';
Transform1412 := TTransformNode.Create;
Transform1412.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1413 := TTransformNode.Create;
{ Empty Transform }
Shape1414 := TShapeNode.Create;
Shape1414 := Shape20;
{ .AddChild }
Transform1413.AddChildren([Shape1414]);
{ .AddChildren }
Transform1412.AddChildren([Transform1413]);
{ .AddChildren }
HAnimSegment1411.AddChildren([Transform1412]);
Shape1415 := TShapeNode.Create;
LineSet1416 := TLineSetNode.Create;
LineSet1416.SetVertexCount([2]);
Coordinate1417 := TCoordinateNode.Create;
Coordinate1417.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ .SetCoord }
LineSet1416.Coord := Coordinate1417;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1418 := TColorRGBANode.Create;
ColorRGBA1418 := ColorRGBA27;
{ .SetColor }
LineSet1416.Color := ColorRGBA1418;
{ .SetGeometry }
Shape1415.Geometry := LineSet1416;
{ .AddChildren }
HAnimSegment1411.AddChildren([Shape1415]);
{ .AddChildren }
HAnimJoint1410.AddChildren([HAnimSegment1411]);
HAnimJoint1419 := THAnimJointNode.Create;
HAnimJoint1419.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1419.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint1419.SetUlimit([0,0,0]);
HAnimJoint1419.SetLlimit([0,0,0]);
HAnimSegment1420 := THAnimSegmentNode.Create;
HAnimSegment1420.NameField := 'r_carpal_middle_phalanx_2';
Transform1421 := TTransformNode.Create;
Transform1421.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1422 := TTransformNode.Create;
{ Empty Transform }
Shape1423 := TShapeNode.Create;
Shape1423 := Shape20;
{ .AddChild }
Transform1422.AddChildren([Shape1423]);
{ .AddChildren }
Transform1421.AddChildren([Transform1422]);
{ .AddChildren }
HAnimSegment1420.AddChildren([Transform1421]);
Shape1424 := TShapeNode.Create;
LineSet1425 := TLineSetNode.Create;
LineSet1425.SetVertexCount([2]);
Coordinate1426 := TCoordinateNode.Create;
Coordinate1426.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ .SetCoord }
LineSet1425.Coord := Coordinate1426;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1427 := TColorRGBANode.Create;
ColorRGBA1427 := ColorRGBA27;
{ .SetColor }
LineSet1425.Color := ColorRGBA1427;
{ .SetGeometry }
Shape1424.Geometry := LineSet1425;
{ .AddChildren }
HAnimSegment1420.AddChildren([Shape1424]);
{ .AddChildren }
HAnimJoint1419.AddChildren([HAnimSegment1420]);
HAnimJoint1428 := THAnimJointNode.Create;
HAnimJoint1428.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1428.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint1428.SetUlimit([0,0,0]);
HAnimJoint1428.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1419.AddChildren([HAnimJoint1428]);
{ .AddChildren }
HAnimJoint1410.AddChildren([HAnimJoint1419]);
{ .AddChildren }
HAnimJoint1394.AddChildren([HAnimJoint1410]);
{ .AddChildren }
HAnimJoint1343.AddChildren([HAnimJoint1394]);
HAnimJoint1429 := THAnimJointNode.Create;
HAnimJoint1429.NameField := 'r_carpometacarpal_3';
HAnimJoint1429.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint1429.SetUlimit([0,0,0]);
HAnimJoint1429.SetLlimit([0,0,0]);
HAnimSegment1430 := THAnimSegmentNode.Create;
HAnimSegment1430.NameField := 'r_metacarpal_3';
Transform1431 := TTransformNode.Create;
Transform1431.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1432 := TTransformNode.Create;
{ Empty Transform }
Shape1433 := TShapeNode.Create;
Shape1433 := Shape20;
{ .AddChild }
Transform1432.AddChildren([Shape1433]);
{ .AddChildren }
Transform1431.AddChildren([Transform1432]);
{ .AddChildren }
HAnimSegment1430.AddChildren([Transform1431]);
Shape1434 := TShapeNode.Create;
LineSet1435 := TLineSetNode.Create;
LineSet1435.SetVertexCount([2]);
Coordinate1436 := TCoordinateNode.Create;
Coordinate1436.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ .SetCoord }
LineSet1435.Coord := Coordinate1436;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
ColorRGBA1437 := TColorRGBANode.Create;
ColorRGBA1437 := ColorRGBA27;
{ .SetColor }
LineSet1435.Color := ColorRGBA1437;
{ .SetGeometry }
Shape1434.Geometry := LineSet1435;
{ .AddChildren }
HAnimSegment1430.AddChildren([Shape1434]);
HAnimSite1438 := THAnimSiteNode.Create;
HAnimSite1438.NameField := 'r_metacarpal_phalanx_3';
TouchSensor1439 := TTouchSensorNode.Create;
TouchSensor1439.Description := 'HAnimSite 79 r_metacarpal_phalanx_3';
{ .AddChildren }
HAnimSite1438.AddChildren([TouchSensor1439]);
Shape1440 := TShapeNode.Create;
Shape1440 := Shape30;
{ .AddChildren }
HAnimSite1438.AddChildren([Shape1440]);
Billboard1441 := TBillboardNode.Create;
Shape1442 := TShapeNode.Create;
Text1443 := TTextNode.Create;
Text1443.SetText(['79']);
FontStyle1444 := TFontStyleNode.Create;
FontStyle1444.Size := 0.035;
{ .SetFontStyle }
Text1443.FontStyle := FontStyle1444;
{ .SetGeometry }
Shape1442.Geometry := Text1443;
{ .AddChildren }
Billboard1441.AddChildren([Shape1442]);
{ .AddChildren }
HAnimSite1438.AddChildren([Billboard1441]);
{ .AddChildren }
HAnimSegment1430.AddChildren([HAnimSite1438]);
{ .AddChildren }
HAnimJoint1429.AddChildren([HAnimSegment1430]);
HAnimJoint1445 := THAnimJointNode.Create;
HAnimJoint1445.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1445.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint1445.SetUlimit([0,0,0]);
HAnimJoint1445.SetLlimit([0,0,0]);
HAnimSegment1446 := THAnimSegmentNode.Create;
HAnimSegment1446.NameField := 'r_carpal_proximal_phalanx_3';
Transform1447 := TTransformNode.Create;
Transform1447.Translation := Vector3(-0.1972,0.7849,-0.0468);
Transform1448 := TTransformNode.Create;
{ Empty Transform }
Shape1449 := TShapeNode.Create;
Shape1449 := Shape20;
{ .AddChild }
Transform1448.AddChildren([Shape1449]);
{ .AddChildren }
Transform1447.AddChildren([Transform1448]);
{ .AddChildren }
HAnimSegment1446.AddChildren([Transform1447]);
Shape1450 := TShapeNode.Create;
LineSet1451 := TLineSetNode.Create;
LineSet1451.SetVertexCount([2]);
Coordinate1452 := TCoordinateNode.Create;
Coordinate1452.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ .SetCoord }
LineSet1451.Coord := Coordinate1452;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA1453 := TColorRGBANode.Create;
ColorRGBA1453 := ColorRGBA27;
{ .SetColor }
LineSet1451.Color := ColorRGBA1453;
{ .SetGeometry }
Shape1450.Geometry := LineSet1451;
{ .AddChildren }
HAnimSegment1446.AddChildren([Shape1450]);
{ .AddChildren }
HAnimJoint1445.AddChildren([HAnimSegment1446]);
HAnimJoint1454 := THAnimJointNode.Create;
HAnimJoint1454.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1454.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint1454.SetUlimit([0,0,0]);
HAnimJoint1454.SetLlimit([0,0,0]);
HAnimSegment1455 := THAnimSegmentNode.Create;
HAnimSegment1455.NameField := 'r_carpal_middle_phalanx_3';
Transform1456 := TTransformNode.Create;
Transform1456.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1457 := TTransformNode.Create;
{ Empty Transform }
Shape1458 := TShapeNode.Create;
Shape1458 := Shape20;
{ .AddChild }
Transform1457.AddChildren([Shape1458]);
{ .AddChildren }
Transform1456.AddChildren([Transform1457]);
{ .AddChildren }
HAnimSegment1455.AddChildren([Transform1456]);
Shape1459 := TShapeNode.Create;
LineSet1460 := TLineSetNode.Create;
LineSet1460.SetVertexCount([2]);
Coordinate1461 := TCoordinateNode.Create;
Coordinate1461.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ .SetCoord }
LineSet1460.Coord := Coordinate1461;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1462 := TColorRGBANode.Create;
ColorRGBA1462 := ColorRGBA27;
{ .SetColor }
LineSet1460.Color := ColorRGBA1462;
{ .SetGeometry }
Shape1459.Geometry := LineSet1460;
{ .AddChildren }
HAnimSegment1455.AddChildren([Shape1459]);
{ .AddChildren }
HAnimJoint1454.AddChildren([HAnimSegment1455]);
HAnimJoint1463 := THAnimJointNode.Create;
HAnimJoint1463.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1463.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint1463.SetUlimit([0,0,0]);
HAnimJoint1463.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1454.AddChildren([HAnimJoint1463]);
{ .AddChildren }
HAnimJoint1445.AddChildren([HAnimJoint1454]);
{ .AddChildren }
HAnimJoint1429.AddChildren([HAnimJoint1445]);
{ .AddChildren }
HAnimJoint1343.AddChildren([HAnimJoint1429]);
HAnimJoint1464 := THAnimJointNode.Create;
HAnimJoint1464.NameField := 'r_carpometacarpal_4';
HAnimJoint1464.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint1464.SetUlimit([0,0,0]);
HAnimJoint1464.SetLlimit([0,0,0]);
HAnimSegment1465 := THAnimSegmentNode.Create;
HAnimSegment1465.NameField := 'r_metacarpal_4';
Transform1466 := TTransformNode.Create;
Transform1466.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1467 := TTransformNode.Create;
{ Empty Transform }
Shape1468 := TShapeNode.Create;
Shape1468 := Shape20;
{ .AddChild }
Transform1467.AddChildren([Shape1468]);
{ .AddChildren }
Transform1466.AddChildren([Transform1467]);
{ .AddChildren }
HAnimSegment1465.AddChildren([Transform1466]);
Shape1469 := TShapeNode.Create;
LineSet1470 := TLineSetNode.Create;
LineSet1470.SetVertexCount([2]);
Coordinate1471 := TCoordinateNode.Create;
Coordinate1471.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ .SetCoord }
LineSet1470.Coord := Coordinate1471;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
ColorRGBA1472 := TColorRGBANode.Create;
ColorRGBA1472 := ColorRGBA27;
{ .SetColor }
LineSet1470.Color := ColorRGBA1472;
{ .SetGeometry }
Shape1469.Geometry := LineSet1470;
{ .AddChildren }
HAnimSegment1465.AddChildren([Shape1469]);
{ .AddChildren }
HAnimJoint1464.AddChildren([HAnimSegment1465]);
HAnimJoint1473 := THAnimJointNode.Create;
HAnimJoint1473.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1473.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint1473.SetUlimit([0,0,0]);
HAnimJoint1473.SetLlimit([0,0,0]);
HAnimSegment1474 := THAnimSegmentNode.Create;
HAnimSegment1474.NameField := 'r_carpal_proximal_phalanx_4';
Transform1475 := TTransformNode.Create;
Transform1475.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1476 := TTransformNode.Create;
{ Empty Transform }
Shape1477 := TShapeNode.Create;
Shape1477 := Shape20;
{ .AddChild }
Transform1476.AddChildren([Shape1477]);
{ .AddChildren }
Transform1475.AddChildren([Transform1476]);
{ .AddChildren }
HAnimSegment1474.AddChildren([Transform1475]);
Shape1478 := TShapeNode.Create;
LineSet1479 := TLineSetNode.Create;
LineSet1479.SetVertexCount([2]);
Coordinate1480 := TCoordinateNode.Create;
Coordinate1480.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ .SetCoord }
LineSet1479.Coord := Coordinate1480;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1481 := TColorRGBANode.Create;
ColorRGBA1481 := ColorRGBA27;
{ .SetColor }
LineSet1479.Color := ColorRGBA1481;
{ .SetGeometry }
Shape1478.Geometry := LineSet1479;
{ .AddChildren }
HAnimSegment1474.AddChildren([Shape1478]);
{ .AddChildren }
HAnimJoint1473.AddChildren([HAnimSegment1474]);
HAnimJoint1482 := THAnimJointNode.Create;
HAnimJoint1482.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1482.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint1482.SetUlimit([0,0,0]);
HAnimJoint1482.SetLlimit([0,0,0]);
HAnimSegment1483 := THAnimSegmentNode.Create;
HAnimSegment1483.NameField := 'r_carpal_middle_phalanx_4';
Transform1484 := TTransformNode.Create;
Transform1484.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1485 := TTransformNode.Create;
{ Empty Transform }
Shape1486 := TShapeNode.Create;
Shape1486 := Shape20;
{ .AddChild }
Transform1485.AddChildren([Shape1486]);
{ .AddChildren }
Transform1484.AddChildren([Transform1485]);
{ .AddChildren }
HAnimSegment1483.AddChildren([Transform1484]);
Shape1487 := TShapeNode.Create;
LineSet1488 := TLineSetNode.Create;
LineSet1488.SetVertexCount([2]);
Coordinate1489 := TCoordinateNode.Create;
Coordinate1489.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ .SetCoord }
LineSet1488.Coord := Coordinate1489;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1490 := TColorRGBANode.Create;
ColorRGBA1490 := ColorRGBA27;
{ .SetColor }
LineSet1488.Color := ColorRGBA1490;
{ .SetGeometry }
Shape1487.Geometry := LineSet1488;
{ .AddChildren }
HAnimSegment1483.AddChildren([Shape1487]);
{ .AddChildren }
HAnimJoint1482.AddChildren([HAnimSegment1483]);
HAnimJoint1491 := THAnimJointNode.Create;
HAnimJoint1491.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1491.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint1491.SetUlimit([0,0,0]);
HAnimJoint1491.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1482.AddChildren([HAnimJoint1491]);
{ .AddChildren }
HAnimJoint1473.AddChildren([HAnimJoint1482]);
{ .AddChildren }
HAnimJoint1464.AddChildren([HAnimJoint1473]);
{ .AddChildren }
HAnimJoint1343.AddChildren([HAnimJoint1464]);
HAnimJoint1492 := THAnimJointNode.Create;
HAnimJoint1492.NameField := 'r_carpometacarpal_5';
HAnimJoint1492.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint1492.SetUlimit([0,0,0]);
HAnimJoint1492.SetLlimit([0,0,0]);
HAnimSegment1493 := THAnimSegmentNode.Create;
HAnimSegment1493.NameField := 'r_metacarpal_5';
Transform1494 := TTransformNode.Create;
Transform1494.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1495 := TTransformNode.Create;
{ Empty Transform }
Shape1496 := TShapeNode.Create;
Shape1496 := Shape20;
{ .AddChild }
Transform1495.AddChildren([Shape1496]);
{ .AddChildren }
Transform1494.AddChildren([Transform1495]);
{ .AddChildren }
HAnimSegment1493.AddChildren([Transform1494]);
Shape1497 := TShapeNode.Create;
LineSet1498 := TLineSetNode.Create;
LineSet1498.SetVertexCount([2]);
Coordinate1499 := TCoordinateNode.Create;
Coordinate1499.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ .SetCoord }
LineSet1498.Coord := Coordinate1499;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
ColorRGBA1500 := TColorRGBANode.Create;
ColorRGBA1500 := ColorRGBA27;
{ .SetColor }
LineSet1498.Color := ColorRGBA1500;
{ .SetGeometry }
Shape1497.Geometry := LineSet1498;
{ .AddChildren }
HAnimSegment1493.AddChildren([Shape1497]);
HAnimSite1501 := THAnimSiteNode.Create;
HAnimSite1501.NameField := 'r_metacarpal_phalanx_5';
HAnimSite1501.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1502 := TTouchSensorNode.Create;
TouchSensor1502.Description := 'HAnimSite 80 r_metacarpal_phalanx_5';
{ .AddChildren }
HAnimSite1501.AddChildren([TouchSensor1502]);
Shape1503 := TShapeNode.Create;
Shape1503 := Shape30;
{ .AddChildren }
HAnimSite1501.AddChildren([Shape1503]);
Billboard1504 := TBillboardNode.Create;
Shape1505 := TShapeNode.Create;
Text1506 := TTextNode.Create;
Text1506.SetText(['80']);
FontStyle1507 := TFontStyleNode.Create;
FontStyle1507.Size := 0.035;
{ .SetFontStyle }
Text1506.FontStyle := FontStyle1507;
{ .SetGeometry }
Shape1505.Geometry := Text1506;
{ .AddChildren }
Billboard1504.AddChildren([Shape1505]);
{ .AddChildren }
HAnimSite1501.AddChildren([Billboard1504]);
{ .AddChildren }
HAnimSegment1493.AddChildren([HAnimSite1501]);
{ .AddChildren }
HAnimJoint1492.AddChildren([HAnimSegment1493]);
HAnimJoint1508 := THAnimJointNode.Create;
HAnimJoint1508.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1508.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint1508.SetUlimit([0,0,0]);
HAnimJoint1508.SetLlimit([0,0,0]);
HAnimSegment1509 := THAnimSegmentNode.Create;
HAnimSegment1509.NameField := 'r_carpal_proximal_phalanx_5';
Transform1510 := TTransformNode.Create;
Transform1510.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1511 := TTransformNode.Create;
{ Empty Transform }
Shape1512 := TShapeNode.Create;
Shape1512 := Shape20;
{ .AddChild }
Transform1511.AddChildren([Shape1512]);
{ .AddChildren }
Transform1510.AddChildren([Transform1511]);
{ .AddChildren }
HAnimSegment1509.AddChildren([Transform1510]);
Shape1513 := TShapeNode.Create;
LineSet1514 := TLineSetNode.Create;
LineSet1514.SetVertexCount([2]);
Coordinate1515 := TCoordinateNode.Create;
Coordinate1515.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ .SetCoord }
LineSet1514.Coord := Coordinate1515;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1516 := TColorRGBANode.Create;
ColorRGBA1516 := ColorRGBA27;
{ .SetColor }
LineSet1514.Color := ColorRGBA1516;
{ .SetGeometry }
Shape1513.Geometry := LineSet1514;
{ .AddChildren }
HAnimSegment1509.AddChildren([Shape1513]);
{ .AddChildren }
HAnimJoint1508.AddChildren([HAnimSegment1509]);
HAnimJoint1517 := THAnimJointNode.Create;
HAnimJoint1517.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1517.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint1517.SetUlimit([0,0,0]);
HAnimJoint1517.SetLlimit([0,0,0]);
HAnimSegment1518 := THAnimSegmentNode.Create;
HAnimSegment1518.NameField := 'r_carpal_middle_phalanx_5';
Transform1519 := TTransformNode.Create;
Transform1519.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1520 := TTransformNode.Create;
{ Empty Transform }
Shape1521 := TShapeNode.Create;
Shape1521 := Shape20;
{ .AddChild }
Transform1520.AddChildren([Shape1521]);
{ .AddChildren }
Transform1519.AddChildren([Transform1520]);
{ .AddChildren }
HAnimSegment1518.AddChildren([Transform1519]);
Shape1522 := TShapeNode.Create;
LineSet1523 := TLineSetNode.Create;
LineSet1523.SetVertexCount([2]);
Coordinate1524 := TCoordinateNode.Create;
Coordinate1524.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ .SetCoord }
LineSet1523.Coord := Coordinate1524;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1525 := TColorRGBANode.Create;
ColorRGBA1525 := ColorRGBA27;
{ .SetColor }
LineSet1523.Color := ColorRGBA1525;
{ .SetGeometry }
Shape1522.Geometry := LineSet1523;
{ .AddChildren }
HAnimSegment1518.AddChildren([Shape1522]);
{ .AddChildren }
HAnimJoint1517.AddChildren([HAnimSegment1518]);
HAnimJoint1526 := THAnimJointNode.Create;
HAnimJoint1526.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1526.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint1526.SetUlimit([0,0,0]);
HAnimJoint1526.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1517.AddChildren([HAnimJoint1526]);
{ .AddChildren }
HAnimJoint1508.AddChildren([HAnimJoint1517]);
{ .AddChildren }
HAnimJoint1492.AddChildren([HAnimJoint1508]);
{ .AddChildren }
HAnimJoint1343.AddChildren([HAnimJoint1492]);
{ .AddChildren }
HAnimJoint1306.AddChildren([HAnimJoint1343]);
{ .AddChildren }
HAnimJoint1283.AddChildren([HAnimJoint1306]);
{ .AddChildren }
HAnimJoint1274.AddChildren([HAnimJoint1283]);
{ .AddChildren }
HAnimJoint1230.AddChildren([HAnimJoint1274]);
{ .AddChildren }
HAnimJoint701.AddChildren([HAnimJoint1230]);
{ .AddChildren }
HAnimJoint692.AddChildren([HAnimJoint701]);
{ .AddChildren }
HAnimJoint683.AddChildren([HAnimJoint692]);
{ .AddChildren }
HAnimJoint674.AddChildren([HAnimJoint683]);
{ .AddChildren }
HAnimJoint658.AddChildren([HAnimJoint674]);
{ .AddChildren }
HAnimJoint621.AddChildren([HAnimJoint658]);
{ .AddChildren }
HAnimJoint612.AddChildren([HAnimJoint621]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimJoint612]);
{ .AddChildren }
HAnimJoint580.AddChildren([HAnimJoint603]);
{ .AddChildren }
HAnimJoint564.AddChildren([HAnimJoint580]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimJoint564]);
{ .AddChildren }
HAnimJoint546.AddChildren([HAnimJoint555]);
{ .AddChildren }
HAnimJoint537.AddChildren([HAnimJoint546]);
{ .AddChildren }
HAnimJoint507.AddChildren([HAnimJoint537]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimJoint507]);
{ .AddChildren }
HAnimJoint489.AddChildren([HAnimJoint498]);
{ .AddChildren }
HAnimJoint459.AddChildren([HAnimJoint489]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint459]);
{ .AddSkeleton }
HAnimHumanoid38.SetSkeleton([HAnimJoint47]);
HAnimJoint1527 := THAnimJointNode.Create;
HAnimJoint1527 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1527;
HAnimJoint1528 := THAnimJointNode.Create;
HAnimJoint1528 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1528;
HAnimJoint1529 := THAnimJointNode.Create;
HAnimJoint1529 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1529;
HAnimJoint1530 := THAnimJointNode.Create;
HAnimJoint1530 := HAnimJoint180;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1530;
HAnimJoint1531 := THAnimJointNode.Create;
HAnimJoint1531 := HAnimJoint210;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1531;
HAnimJoint1532 := THAnimJointNode.Create;
HAnimJoint1532 := HAnimJoint233;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1532;
HAnimJoint1533 := THAnimJointNode.Create;
HAnimJoint1533 := HAnimJoint242;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1533;
HAnimJoint1534 := THAnimJointNode.Create;
HAnimJoint1534 := HAnimJoint300;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1534;
HAnimJoint1535 := THAnimJointNode.Create;
HAnimJoint1535 := HAnimJoint301;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1535;
HAnimJoint1536 := THAnimJointNode.Create;
HAnimJoint1536 := HAnimJoint338;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1536;
HAnimJoint1537 := THAnimJointNode.Create;
HAnimJoint1537 := HAnimJoint368;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1537;
HAnimJoint1538 := THAnimJointNode.Create;
HAnimJoint1538 := HAnimJoint391;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1538;
HAnimJoint1539 := THAnimJointNode.Create;
HAnimJoint1539 := HAnimJoint400;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1539;
HAnimJoint1540 := THAnimJointNode.Create;
HAnimJoint1540 := HAnimJoint458;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1540;
HAnimJoint1541 := THAnimJointNode.Create;
HAnimJoint1541 := HAnimJoint459;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1541;
HAnimJoint1542 := THAnimJointNode.Create;
HAnimJoint1542 := HAnimJoint489;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1542;
HAnimJoint1543 := THAnimJointNode.Create;
HAnimJoint1543 := HAnimJoint498;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1543;
HAnimJoint1544 := THAnimJointNode.Create;
HAnimJoint1544 := HAnimJoint507;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1544;
HAnimJoint1545 := THAnimJointNode.Create;
HAnimJoint1545 := HAnimJoint537;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1545;
HAnimJoint1546 := THAnimJointNode.Create;
HAnimJoint1546 := HAnimJoint546;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1546;
HAnimJoint1547 := THAnimJointNode.Create;
HAnimJoint1547 := HAnimJoint555;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1547;
HAnimJoint1548 := THAnimJointNode.Create;
HAnimJoint1548 := HAnimJoint564;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1548;
HAnimJoint1549 := THAnimJointNode.Create;
HAnimJoint1549 := HAnimJoint580;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1549;
HAnimJoint1550 := THAnimJointNode.Create;
HAnimJoint1550 := HAnimJoint603;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1550;
HAnimJoint1551 := THAnimJointNode.Create;
HAnimJoint1551 := HAnimJoint612;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1551;
HAnimJoint1552 := THAnimJointNode.Create;
HAnimJoint1552 := HAnimJoint621;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1552;
HAnimJoint1553 := THAnimJointNode.Create;
HAnimJoint1553 := HAnimJoint658;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1553;
HAnimJoint1554 := THAnimJointNode.Create;
HAnimJoint1554 := HAnimJoint674;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1554;
HAnimJoint1555 := THAnimJointNode.Create;
HAnimJoint1555 := HAnimJoint683;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1555;
HAnimJoint1556 := THAnimJointNode.Create;
HAnimJoint1556 := HAnimJoint692;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1556;
HAnimJoint1557 := THAnimJointNode.Create;
HAnimJoint1557 := HAnimJoint701;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1557;
HAnimJoint1558 := THAnimJointNode.Create;
HAnimJoint1558 := HAnimJoint732;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1558;
HAnimJoint1559 := THAnimJointNode.Create;
HAnimJoint1559 := HAnimJoint755;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1559;
HAnimJoint1560 := THAnimJointNode.Create;
HAnimJoint1560 := HAnimJoint764;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1560;
HAnimJoint1561 := THAnimJointNode.Create;
HAnimJoint1561 := HAnimJoint773;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1561;
HAnimJoint1562 := THAnimJointNode.Create;
HAnimJoint1562 := HAnimJoint782;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1562;
HAnimJoint1563 := THAnimJointNode.Create;
HAnimJoint1563 := HAnimJoint791;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1563;
HAnimJoint1564 := THAnimJointNode.Create;
HAnimJoint1564 := HAnimJoint807;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1564;
HAnimJoint1565 := THAnimJointNode.Create;
HAnimJoint1565 := HAnimJoint816;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1565;
HAnimJoint1566 := THAnimJointNode.Create;
HAnimJoint1566 := HAnimJoint926;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1566;
HAnimJoint1567 := THAnimJointNode.Create;
HAnimJoint1567 := HAnimJoint927;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1567;
HAnimJoint1568 := THAnimJointNode.Create;
HAnimJoint1568 := HAnimJoint928;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1568;
HAnimJoint1569 := THAnimJointNode.Create;
HAnimJoint1569 := HAnimJoint929;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1569;
HAnimJoint1570 := THAnimJointNode.Create;
HAnimJoint1570 := HAnimJoint930;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1570;
HAnimJoint1571 := THAnimJointNode.Create;
HAnimJoint1571 := HAnimJoint931;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1571;
HAnimJoint1572 := THAnimJointNode.Create;
HAnimJoint1572 := HAnimJoint932;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1572;
HAnimJoint1573 := THAnimJointNode.Create;
HAnimJoint1573 := HAnimJoint933;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1573;
HAnimJoint1574 := THAnimJointNode.Create;
HAnimJoint1574 := HAnimJoint977;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1574;
HAnimJoint1575 := THAnimJointNode.Create;
HAnimJoint1575 := HAnimJoint986;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1575;
HAnimJoint1576 := THAnimJointNode.Create;
HAnimJoint1576 := HAnimJoint1009;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1576;
HAnimJoint1577 := THAnimJointNode.Create;
HAnimJoint1577 := HAnimJoint1046;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1577;
HAnimJoint1578 := THAnimJointNode.Create;
HAnimJoint1578 := HAnimJoint1078;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1578;
HAnimJoint1579 := THAnimJointNode.Create;
HAnimJoint1579 := HAnimJoint1087;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1579;
HAnimJoint1580 := THAnimJointNode.Create;
HAnimJoint1580 := HAnimJoint1096;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1580;
HAnimJoint1581 := THAnimJointNode.Create;
HAnimJoint1581 := HAnimJoint1097;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1581;
HAnimJoint1582 := THAnimJointNode.Create;
HAnimJoint1582 := HAnimJoint1113;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1582;
HAnimJoint1583 := THAnimJointNode.Create;
HAnimJoint1583 := HAnimJoint1122;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1583;
HAnimJoint1584 := THAnimJointNode.Create;
HAnimJoint1584 := HAnimJoint1131;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1584;
HAnimJoint1585 := THAnimJointNode.Create;
HAnimJoint1585 := HAnimJoint1132;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1585;
HAnimJoint1586 := THAnimJointNode.Create;
HAnimJoint1586 := HAnimJoint1148;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1586;
HAnimJoint1587 := THAnimJointNode.Create;
HAnimJoint1587 := HAnimJoint1157;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1587;
HAnimJoint1588 := THAnimJointNode.Create;
HAnimJoint1588 := HAnimJoint1166;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1588;
HAnimJoint1589 := THAnimJointNode.Create;
HAnimJoint1589 := HAnimJoint1167;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1589;
HAnimJoint1590 := THAnimJointNode.Create;
HAnimJoint1590 := HAnimJoint1176;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1590;
HAnimJoint1591 := THAnimJointNode.Create;
HAnimJoint1591 := HAnimJoint1185;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1591;
HAnimJoint1592 := THAnimJointNode.Create;
HAnimJoint1592 := HAnimJoint1194;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1592;
HAnimJoint1593 := THAnimJointNode.Create;
HAnimJoint1593 := HAnimJoint1195;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1593;
HAnimJoint1594 := THAnimJointNode.Create;
HAnimJoint1594 := HAnimJoint1211;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1594;
HAnimJoint1595 := THAnimJointNode.Create;
HAnimJoint1595 := HAnimJoint1220;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1595;
HAnimJoint1596 := THAnimJointNode.Create;
HAnimJoint1596 := HAnimJoint1229;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1596;
HAnimJoint1597 := THAnimJointNode.Create;
HAnimJoint1597 := HAnimJoint1230;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1597;
HAnimJoint1598 := THAnimJointNode.Create;
HAnimJoint1598 := HAnimJoint1274;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1598;
HAnimJoint1599 := THAnimJointNode.Create;
HAnimJoint1599 := HAnimJoint1283;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1599;
HAnimJoint1600 := THAnimJointNode.Create;
HAnimJoint1600 := HAnimJoint1306;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1600;
HAnimJoint1601 := THAnimJointNode.Create;
HAnimJoint1601 := HAnimJoint1343;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1601;
HAnimJoint1602 := THAnimJointNode.Create;
HAnimJoint1602 := HAnimJoint1375;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1602;
HAnimJoint1603 := THAnimJointNode.Create;
HAnimJoint1603 := HAnimJoint1384;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1603;
HAnimJoint1604 := THAnimJointNode.Create;
HAnimJoint1604 := HAnimJoint1393;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1604;
HAnimJoint1605 := THAnimJointNode.Create;
HAnimJoint1605 := HAnimJoint1394;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1605;
HAnimJoint1606 := THAnimJointNode.Create;
HAnimJoint1606 := HAnimJoint1410;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1606;
HAnimJoint1607 := THAnimJointNode.Create;
HAnimJoint1607 := HAnimJoint1419;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1607;
HAnimJoint1608 := THAnimJointNode.Create;
HAnimJoint1608 := HAnimJoint1428;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1608;
HAnimJoint1609 := THAnimJointNode.Create;
HAnimJoint1609 := HAnimJoint1429;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1609;
HAnimJoint1610 := THAnimJointNode.Create;
HAnimJoint1610 := HAnimJoint1445;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1610;
HAnimJoint1611 := THAnimJointNode.Create;
HAnimJoint1611 := HAnimJoint1454;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1611;
HAnimJoint1612 := THAnimJointNode.Create;
HAnimJoint1612 := HAnimJoint1463;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1612;
HAnimJoint1613 := THAnimJointNode.Create;
HAnimJoint1613 := HAnimJoint1464;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1613;
HAnimJoint1614 := THAnimJointNode.Create;
HAnimJoint1614 := HAnimJoint1473;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1614;
HAnimJoint1615 := THAnimJointNode.Create;
HAnimJoint1615 := HAnimJoint1482;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1615;
HAnimJoint1616 := THAnimJointNode.Create;
HAnimJoint1616 := HAnimJoint1491;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1616;
HAnimJoint1617 := THAnimJointNode.Create;
HAnimJoint1617 := HAnimJoint1492;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1617;
HAnimJoint1618 := THAnimJointNode.Create;
HAnimJoint1618 := HAnimJoint1508;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1618;
HAnimJoint1619 := THAnimJointNode.Create;
HAnimJoint1619 := HAnimJoint1517;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1619;
HAnimJoint1620 := THAnimJointNode.Create;
HAnimJoint1620 := HAnimJoint1526;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1620;
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid38]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
