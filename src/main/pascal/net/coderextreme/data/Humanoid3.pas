unit Humanoid3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHumanoid3: TX3DRootNode;

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

procedure InitHumanoid3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'Humanoid3.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d';
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

procedure InitHumanoid3Part1;
begin
;
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;;
Sphere21 := TSphereNode.Create;;
Sphere21.Radius := 0.02;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;;
Material23 := TMaterialNode.Create;;
Material23.DiffuseColor := Vector3(0,0,0);
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
Transform24.Translation := Vector3(0,2.05,0);
Shape25 := TShapeNode.Create;;
LineSet26 := TLineSetNode.Create;;
LineSet26.SetVertexCount([2]);
ColorRGBA27 := TColorRGBANode.Create;;
ColorRGBA27.SetColor([Vector4(1,1,0,0),Vector4(1,1,0,0)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet26.Color := ColorRGBA27;
Coordinate28 := TCoordinateNode.Create;;
Coordinate28.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet26.Coord := Coordinate28;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape25.Geometry := LineSet26;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;;
Transform29.Translation := Vector3(0,2.1,0);
Shape30 := TShapeNode.Create;
end;

procedure InitHumanoid3Part2;
begin
;
IndexedFaceSet31 := TIndexedFaceSetNode.Create;;
IndexedFaceSet31.CreaseAngle := 0.5;
IndexedFaceSet31.Solid := False;
IndexedFaceSet31.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA32 := TColorRGBANode.Create;;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;;
Coordinate33.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet31.Coord := Coordinate33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape30.Geometry := IndexedFaceSet31;
Appearance34 := TAppearanceNode.Create;;
Material35 := TMaterialNode.Create;;
Material35.DiffuseColor := Vector3(1,1,1);
Material35.Transparency := 1;
{ METHOD .SetMaterial }
Appearance34.Material := Material35;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape30.Appearance := Appearance34;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform29);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform18);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Group17);
NavigationInfo36 := TNavigationInfoNode.Create;;
NavigationInfo36.Speed := 1.5;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo36);
Viewpoint37 := TViewpointNode.Create;;
Viewpoint37.Position := Vector3(0,1,3);
Viewpoint37.CenterOfRotation := Vector3(0,1,0);
Viewpoint37.Description := 'default';
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint37);
HAnimHumanoid38 := THAnimHumanoidNode.Create;;
HAnimHumanoid38.SetInfo(['humanoidVersion=2.0']);
end;

procedure InitHumanoid3Part3;
begin

HAnimHumanoid38.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
Shape39 := TShapeNode.Create;;
IndexedFaceSet40 := TIndexedFaceSetNode.Create;;
IndexedFaceSet40.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet40.CreaseAngle := 3.1;
Coordinate41 := TCoordinateNode.Create;;
Coordinate41.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
end;

procedure InitHumanoid3Part4;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet40.Coord := Coordinate41;
Color42 := TColorNode.Create;;
Color42.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet40.Color := Color42;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape39.Geometry := IndexedFaceSet40;
Appearance43 := TAppearanceNode.Create;;
ImageTexture44 := TImageTextureNode.Create;;
ImageTexture44.Description := 'Blue Spiral Pattern';
ImageTexture44.SetUrl(['../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance43.Texture := ImageTexture44;
Material45 := TMaterialNode.Create;;
Material45.AmbientIntensity := 0.6;
Material45.DiffuseColor := Vector3(1,1,1);
Material45.Shininess := 0.6;
Material45.Transparency := 1;
{ METHOD .SetMaterial }
Appearance43.Material := Material45;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape39.Appearance := Appearance43;
{ METHOD .SetSkin }
HAnimHumanoid38.Skin := Shape39;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid38.FdSkinCoord.Set(Coordinate41);
HAnimJoint47 := THAnimJointNode.Create;;
HAnimJoint47.Center := Vector3(0,0.824,0.0277);
HAnimSegment48 := THAnimSegmentNode.Create;;
Transform49 := TTransformNode.Create;;
Transform49.Translation := Vector3(0,0.824,0.0277);
Transform50 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform50.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Transform50);
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Transform49);
end;

procedure InitHumanoid3Part5;
begin

Shape52 := TShapeNode.Create;;
LineSet53 := TLineSetNode.Create;;
LineSet53.SetVertexCount([2]);
Coordinate54 := TCoordinateNode.Create;;
Coordinate54.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet53.Coord := Coordinate54;
{ from humanoid_root to sacroiliac vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet53.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape52.Geometry := LineSet53;
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Shape52);
Shape56 := TShapeNode.Create;;
LineSet57 := TLineSetNode.Create;;
LineSet57.SetVertexCount([2]);
Coordinate58 := TCoordinateNode.Create;;
Coordinate58.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet57.Coord := Coordinate58;
{ from humanoid_root to vl5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet57.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape56.Geometry := LineSet57;
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Shape56);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimSegment48);
HAnimJoint60 := THAnimJointNode.Create;;
HAnimJoint60.Center := Vector3(0,0.9149,0.0016);
HAnimSegment61 := THAnimSegmentNode.Create;;
Transform62 := TTransformNode.Create;;
Transform62.Translation := Vector3(0,0.9149,0.0016);
Transform63 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform63.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform62.FdChildren.Add(Transform63);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Transform62);
Shape65 := TShapeNode.Create;;
end;

procedure InitHumanoid3Part6;
begin

LineSet66 := TLineSetNode.Create;;
LineSet66.SetVertexCount([2]);
Coordinate67 := TCoordinateNode.Create;;
Coordinate67.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet66.Coord := Coordinate67;
{ from sacroiliac to l_hip vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet66.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape65.Geometry := LineSet66;
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Shape65);
HAnimSite69 := THAnimSiteNode.Create;;
TouchSensor70 := TTouchSensorNode.Create;;
TouchSensor70.Description := 'HAnimSite 93 buttocks_standing_wall_contact_point';
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(TouchSensor70);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Shape30);
Billboard72 := TBillboardNode.Create;;
Shape73 := TShapeNode.Create;;
Text74 := TTextNode.Create;;
Text74.SetText(['93']);
FontStyle75 := TFontStyleNode.Create;;
FontStyle75.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text74.FontStyle := FontStyle75;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape73.Geometry := Text74;
{ METHOD .FdChildren.Add }
Billboard72.FdChildren.Add(Shape73);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Billboard72);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite69);
HAnimSite76 := THAnimSiteNode.Create;;
HAnimSite76.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor77 := TTouchSensorNode.Create;;
TouchSensor77.Description := 'HAnimSite 38 crotch';
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(TouchSensor77);
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(Shape30);
end;

procedure InitHumanoid3Part7;
begin

Billboard79 := TBillboardNode.Create;;
Shape80 := TShapeNode.Create;;
Text81 := TTextNode.Create;;
Text81.SetText(['38']);
FontStyle82 := TFontStyleNode.Create;;
FontStyle82.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text81.FontStyle := FontStyle82;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape80.Geometry := Text81;
{ METHOD .FdChildren.Add }
Billboard79.FdChildren.Add(Shape80);
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(Billboard79);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite76);
HAnimSite83 := THAnimSiteNode.Create;;
HAnimSite83.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor84 := TTouchSensorNode.Create;;
TouchSensor84.Description := 'HAnimSite 32 l_asis';
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(TouchSensor84);
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(Shape30);
Billboard86 := TBillboardNode.Create;;
Shape87 := TShapeNode.Create;;
Text88 := TTextNode.Create;;
Text88.SetText(['32']);
FontStyle89 := TFontStyleNode.Create;;
FontStyle89.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text88.FontStyle := FontStyle89;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape87.Geometry := Text88;
{ METHOD .FdChildren.Add }
Billboard86.FdChildren.Add(Shape87);
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(Billboard86);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite83);
HAnimSite90 := THAnimSiteNode.Create;;
end;

procedure InitHumanoid3Part8;
begin

HAnimSite90.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor91 := TTouchSensorNode.Create;;
TouchSensor91.Description := 'HAnimSite 33 l_iliocristale';
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(TouchSensor91);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Shape30);
Billboard93 := TBillboardNode.Create;;
Shape94 := TShapeNode.Create;;
Text95 := TTextNode.Create;;
Text95.SetText(['33']);
FontStyle96 := TFontStyleNode.Create;;
FontStyle96.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text95.FontStyle := FontStyle96;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape94.Geometry := Text95;
{ METHOD .FdChildren.Add }
Billboard93.FdChildren.Add(Shape94);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Billboard93);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite90);
HAnimSite97 := THAnimSiteNode.Create;;
HAnimSite97.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor98 := TTouchSensorNode.Create;;
TouchSensor98.Description := 'HAnimSite 34 l_psis';
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(TouchSensor98);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Shape30);
Billboard100 := TBillboardNode.Create;;
Shape101 := TShapeNode.Create;;
Text102 := TTextNode.Create;;
Text102.SetText(['34']);
FontStyle103 := TFontStyleNode.Create;;
FontStyle103.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text102.FontStyle := FontStyle103;
end;

procedure InitHumanoid3Part9;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape101.Geometry := Text102;
{ METHOD .FdChildren.Add }
Billboard100.FdChildren.Add(Shape101);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Billboard100);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite97);
HAnimSite104 := THAnimSiteNode.Create;;
HAnimSite104.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor105 := TTouchSensorNode.Create;;
TouchSensor105.Description := 'HAnimSite 42 l_trochanterion';
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(TouchSensor105);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Shape30);
Billboard107 := TBillboardNode.Create;;
Shape108 := TShapeNode.Create;;
Text109 := TTextNode.Create;;
Text109.SetText(['42']);
FontStyle110 := TFontStyleNode.Create;;
FontStyle110.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text109.FontStyle := FontStyle110;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape108.Geometry := Text109;
{ METHOD .FdChildren.Add }
Billboard107.FdChildren.Add(Shape108);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Billboard107);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite104);
HAnimSite111 := THAnimSiteNode.Create;;
HAnimSite111.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor112 := TTouchSensorNode.Create;;
TouchSensor112.Description := 'HAnimSite 35 r_asis';
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(TouchSensor112);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Shape30);
Billboard114 := TBillboardNode.Create;;
Shape115 := TShapeNode.Create;;
Text116 := TTextNode.Create;
end;

procedure InitHumanoid3Part10;
begin
;
Text116.SetText(['35']);
FontStyle117 := TFontStyleNode.Create;;
FontStyle117.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text116.FontStyle := FontStyle117;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape115.Geometry := Text116;
{ METHOD .FdChildren.Add }
Billboard114.FdChildren.Add(Shape115);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Billboard114);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite111);
HAnimSite118 := THAnimSiteNode.Create;;
HAnimSite118.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor119 := TTouchSensorNode.Create;;
TouchSensor119.Description := 'HAnimSite 36 r_iliocristale';
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(TouchSensor119);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Shape30);
Billboard121 := TBillboardNode.Create;;
Shape122 := TShapeNode.Create;;
Text123 := TTextNode.Create;;
Text123.SetText(['36']);
FontStyle124 := TFontStyleNode.Create;;
FontStyle124.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text123.FontStyle := FontStyle124;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape122.Geometry := Text123;
{ METHOD .FdChildren.Add }
Billboard121.FdChildren.Add(Shape122);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Billboard121);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite118);
HAnimSite125 := THAnimSiteNode.Create;;
HAnimSite125.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor126 := TTouchSensorNode.Create;;
TouchSensor126.Description := 'HAnimSite 37 r_psis';
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(TouchSensor126);
end;

procedure InitHumanoid3Part11;
begin

{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Shape30);
Billboard128 := TBillboardNode.Create;;
Shape129 := TShapeNode.Create;;
Text130 := TTextNode.Create;;
Text130.SetText(['37']);
FontStyle131 := TFontStyleNode.Create;;
FontStyle131.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text130.FontStyle := FontStyle131;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape129.Geometry := Text130;
{ METHOD .FdChildren.Add }
Billboard128.FdChildren.Add(Shape129);
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Billboard128);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite125);
HAnimSite132 := THAnimSiteNode.Create;;
HAnimSite132.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor133 := TTouchSensorNode.Create;;
TouchSensor133.Description := 'HAnimSite 46 r_trochanterion';
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(TouchSensor133);
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(Shape30);
Billboard135 := TBillboardNode.Create;;
Shape136 := TShapeNode.Create;;
Text137 := TTextNode.Create;;
Text137.SetText(['46']);
FontStyle138 := TFontStyleNode.Create;;
FontStyle138.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text137.FontStyle := FontStyle138;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape136.Geometry := Text137;
{ METHOD .FdChildren.Add }
Billboard135.FdChildren.Add(Shape136);
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(Billboard135);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite132);
Shape139 := TShapeNode.Create;
end;

procedure InitHumanoid3Part12;
begin
;
LineSet140 := TLineSetNode.Create;;
LineSet140.SetVertexCount([2]);
Coordinate141 := TCoordinateNode.Create;;
Coordinate141.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet140.Coord := Coordinate141;
{ from sacroiliac to r_hip vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet140.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape139.Geometry := LineSet140;
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Shape139);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimSegment61);
HAnimJoint143 := THAnimJointNode.Create;;
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment144 := THAnimSegmentNode.Create;;
Transform145 := TTransformNode.Create;;
Transform145.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform146 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform146.FdChildren.Add(Shape20);
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
{ from l_hip to l_knee vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet149.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape148.Geometry := LineSet149;
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Shape148);
HAnimSite152 := THAnimSiteNode.Create;;
HAnimSite152.Translation := Vector3(0.1598,0.4967,0.0297);
end;

procedure InitHumanoid3Part13;
begin

TouchSensor153 := TTouchSensorNode.Create;;
TouchSensor153.Description := 'HAnimSite 40 l_femoral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(TouchSensor153);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Shape30);
Billboard155 := TBillboardNode.Create;;
Shape156 := TShapeNode.Create;;
Text157 := TTextNode.Create;;
Text157.SetText(['40']);
FontStyle158 := TFontStyleNode.Create;;
FontStyle158.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text157.FontStyle := FontStyle158;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape156.Geometry := Text157;
{ METHOD .FdChildren.Add }
Billboard155.FdChildren.Add(Shape156);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Billboard155);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite152);
HAnimSite159 := THAnimSiteNode.Create;;
HAnimSite159.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor160 := TTouchSensorNode.Create;;
TouchSensor160.Description := 'HAnimSite 39 l_femoral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(TouchSensor160);
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(Shape30);
Billboard162 := TBillboardNode.Create;;
Shape163 := TShapeNode.Create;;
Text164 := TTextNode.Create;;
Text164.SetText(['39']);
FontStyle165 := TFontStyleNode.Create;;
FontStyle165.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text164.FontStyle := FontStyle165;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape163.Geometry := Text164;
end;

procedure InitHumanoid3Part14;
begin

{ METHOD .FdChildren.Add }
Billboard162.FdChildren.Add(Shape163);
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(Billboard162);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite159);
HAnimSite166 := THAnimSiteNode.Create;;
HAnimSite166.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor167 := TTouchSensorNode.Create;;
TouchSensor167.Description := 'HAnimSite 90 l_knee_crease';
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(TouchSensor167);
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(Shape30);
Billboard169 := TBillboardNode.Create;;
Shape170 := TShapeNode.Create;;
Text171 := TTextNode.Create;;
Text171.SetText(['90']);
FontStyle172 := TFontStyleNode.Create;;
FontStyle172.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text171.FontStyle := FontStyle172;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape170.Geometry := Text171;
{ METHOD .FdChildren.Add }
Billboard169.FdChildren.Add(Shape170);
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(Billboard169);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite166);
HAnimSite173 := THAnimSiteNode.Create;;
TouchSensor174 := TTouchSensorNode.Create;;
TouchSensor174.Description := 'HAnimSite 41 l_suprapatella';
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(TouchSensor174);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Shape30);
Billboard176 := TBillboardNode.Create;;
Shape177 := TShapeNode.Create;;
Text178 := TTextNode.Create;;
Text178.SetText(['41']);
end;

procedure InitHumanoid3Part15;
begin

FontStyle179 := TFontStyleNode.Create;;
FontStyle179.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text178.FontStyle := FontStyle179;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape177.Geometry := Text178;
{ METHOD .FdChildren.Add }
Billboard176.FdChildren.Add(Shape177);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Billboard176);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite173);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimSegment144);
HAnimJoint180 := THAnimJointNode.Create;;
HAnimJoint180.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment181 := THAnimSegmentNode.Create;;
Transform182 := TTransformNode.Create;;
Transform182.Translation := Vector3(0.104,0.4867,0.0308);
Transform183 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Transform183);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Transform182);
Shape185 := TShapeNode.Create;;
LineSet186 := TLineSetNode.Create;;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;;
Coordinate187.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet186.Coord := Coordinate187;
{ from l_knee to l_talocrural vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet186.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape185.Geometry := LineSet186;
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Shape185);
HAnimSite189 := THAnimSiteNode.Create;;
HAnimSite189.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor190 := TTouchSensorNode.Create;;
TouchSensor190.Description := 'HAnimSite 49 l_lateral_malleolus';
end;

procedure InitHumanoid3Part16;
begin

{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(TouchSensor190);
{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(Shape30);
Billboard192 := TBillboardNode.Create;;
Shape193 := TShapeNode.Create;;
Text194 := TTextNode.Create;;
Text194.SetText(['49']);
FontStyle195 := TFontStyleNode.Create;;
FontStyle195.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text194.FontStyle := FontStyle195;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape193.Geometry := Text194;
{ METHOD .FdChildren.Add }
Billboard192.FdChildren.Add(Shape193);
{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(Billboard192);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite189);
HAnimSite196 := THAnimSiteNode.Create;;
HAnimSite196.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor197 := TTouchSensorNode.Create;;
TouchSensor197.Description := 'HAnimSite 48 l_medial_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(TouchSensor197);
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(Shape30);
Billboard199 := TBillboardNode.Create;;
Shape200 := TShapeNode.Create;;
Text201 := TTextNode.Create;;
Text201.SetText(['48']);
FontStyle202 := TFontStyleNode.Create;;
FontStyle202.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text201.FontStyle := FontStyle202;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape200.Geometry := Text201;
{ METHOD .FdChildren.Add }
Billboard199.FdChildren.Add(Shape200);
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(Billboard199);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite196);
end;

procedure InitHumanoid3Part17;
begin

HAnimSite203 := THAnimSiteNode.Create;;
TouchSensor204 := TTouchSensorNode.Create;;
TouchSensor204.Description := 'HAnimSite 47 l_tibiale';
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(TouchSensor204);
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(Shape30);
Billboard206 := TBillboardNode.Create;;
Shape207 := TShapeNode.Create;;
Text208 := TTextNode.Create;;
Text208.SetText(['47']);
FontStyle209 := TFontStyleNode.Create;;
FontStyle209.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text208.FontStyle := FontStyle209;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape207.Geometry := Text208;
{ METHOD .FdChildren.Add }
Billboard206.FdChildren.Add(Shape207);
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(Billboard206);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite203);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimSegment181);
HAnimJoint210 := THAnimJointNode.Create;;
HAnimJoint210.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment211 := THAnimSegmentNode.Create;;
Transform212 := TTransformNode.Create;;
Transform212.Scale := Vector3(0.15,0.15,0.15);
Transform212.Translation := Vector3(0.08,0.06,-0.025);
Transform212.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform213 := TTransformNode.Create;;
{ Empty Transform left foot }
{ METHOD .FdChildren.Add }
Transform213.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform212.FdChildren.Add(Transform213);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(Transform212);
Shape215 := TShapeNode.Create;;
end;

procedure InitHumanoid3Part18;
begin

LineSet216 := TLineSetNode.Create;;
LineSet216.SetVertexCount([2]);
Coordinate217 := TCoordinateNode.Create;;
Coordinate217.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.08,0.0175,-0.0608)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet216.Coord := Coordinate217;
{ from l_talocrural to l_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet216.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape215.Geometry := LineSet216;
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(Shape215);
HAnimSite219 := THAnimSiteNode.Create;;
HAnimSite219.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor220 := TTouchSensorNode.Create;;
TouchSensor220.Description := 'HAnimSite 58 l_calcaneus_posterior';
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(TouchSensor220);
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(Shape30);
Billboard222 := TBillboardNode.Create;;
Shape223 := TShapeNode.Create;;
Text224 := TTextNode.Create;;
Text224.SetText(['58']);
FontStyle225 := TFontStyleNode.Create;;
FontStyle225.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text224.FontStyle := FontStyle225;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape223.Geometry := Text224;
{ METHOD .FdChildren.Add }
Billboard222.FdChildren.Add(Shape223);
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(Billboard222);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(HAnimSite219);
HAnimSite226 := THAnimSiteNode.Create;;
HAnimSite226.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor227 := TTouchSensorNode.Create;;
TouchSensor227.Description := 'HAnimSite 50 l_sphyrion';
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(TouchSensor227);
end;

procedure InitHumanoid3Part19;
begin

{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(Shape30);
Billboard229 := TBillboardNode.Create;;
Shape230 := TShapeNode.Create;;
Text231 := TTextNode.Create;;
Text231.SetText(['50']);
FontStyle232 := TFontStyleNode.Create;;
FontStyle232.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text231.FontStyle := FontStyle232;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape230.Geometry := Text231;
{ METHOD .FdChildren.Add }
Billboard229.FdChildren.Add(Shape230);
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(Billboard229);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(HAnimSite226);
{ METHOD .FdChildren.Add }
HAnimJoint210.FdChildren.Add(HAnimSegment211);
HAnimJoint233 := THAnimJointNode.Create;;
HAnimJoint233.Center := Vector3(0.08,0.0175,-0.0608);
HAnimSegment234 := THAnimSegmentNode.Create;;
Transform235 := TTransformNode.Create;;
Transform235.Translation := Vector3(0.08,0.0175,-0.0608);
Transform236 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform236.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform235.FdChildren.Add(Transform236);
{ METHOD .FdChildren.Add }
HAnimSegment234.FdChildren.Add(Transform235);
Shape238 := TShapeNode.Create;;
LineSet239 := TLineSetNode.Create;;
LineSet239.SetVertexCount([2]);
Coordinate240 := TCoordinateNode.Create;;
Coordinate240.SetPoint([Vector3(0.08,0.0175,-0.0608),Vector3(0.0824,0.0064,-0.004)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet239.Coord := Coordinate240;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet239.Color := ColorRGBA27;
end;

procedure InitHumanoid3Part20;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape238.Geometry := LineSet239;
{ METHOD .FdChildren.Add }
HAnimSegment234.FdChildren.Add(Shape238);
{ METHOD .FdChildren.Add }
HAnimJoint233.FdChildren.Add(HAnimSegment234);
HAnimJoint242 := THAnimJointNode.Create;;
HAnimJoint242.Center := Vector3(0.0824,0.0064,-0.004);
HAnimSegment243 := THAnimSegmentNode.Create;;
Transform244 := TTransformNode.Create;;
Transform244.Translation := Vector3(0.0824,0.0064,-0.004);
Transform245 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform245.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform244.FdChildren.Add(Transform245);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(Transform244);
Shape247 := TShapeNode.Create;;
LineSet248 := TLineSetNode.Create;;
LineSet248.SetVertexCount([2]);
Coordinate249 := TCoordinateNode.Create;;
Coordinate249.SetPoint([Vector3(0.0824,0.0064,-0.004),Vector3(0.0841,0.0013,0.0216)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet248.Coord := Coordinate249;
{ from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet248.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape247.Geometry := LineSet248;
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(Shape247);
HAnimSite251 := THAnimSiteNode.Create;;
TouchSensor252 := TTouchSensorNode.Create;;
TouchSensor252.Description := 'HAnimSite 55 l_metatarsal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSite251.FdChildren.Add(TouchSensor252);
{ METHOD .FdChildren.Add }
HAnimSite251.FdChildren.Add(Shape30);
Billboard254 := TBillboardNode.Create;;
Shape255 := TShapeNode.Create;;
Text256 := TTextNode.Create;
end;

procedure InitHumanoid3Part21;
begin
;
Text256.SetText(['55']);
FontStyle257 := TFontStyleNode.Create;;
FontStyle257.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text256.FontStyle := FontStyle257;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape255.Geometry := Text256;
{ METHOD .FdChildren.Add }
Billboard254.FdChildren.Add(Shape255);
{ METHOD .FdChildren.Add }
HAnimSite251.FdChildren.Add(Billboard254);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite251);
HAnimSite258 := THAnimSiteNode.Create;;
TouchSensor259 := TTouchSensorNode.Create;;
TouchSensor259.Description := 'HAnimSite 56 l_metatarsal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite258.FdChildren.Add(TouchSensor259);
{ METHOD .FdChildren.Add }
HAnimSite258.FdChildren.Add(Shape30);
Billboard261 := TBillboardNode.Create;;
Shape262 := TShapeNode.Create;;
Text263 := TTextNode.Create;;
Text263.SetText(['56']);
FontStyle264 := TFontStyleNode.Create;;
FontStyle264.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text263.FontStyle := FontStyle264;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape262.Geometry := Text263;
{ METHOD .FdChildren.Add }
Billboard261.FdChildren.Add(Shape262);
{ METHOD .FdChildren.Add }
HAnimSite258.FdChildren.Add(Billboard261);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite258);
HAnimSite265 := THAnimSiteNode.Create;;
TouchSensor266 := TTouchSensorNode.Create;;
TouchSensor266.Description := 'HAnimSite l_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite265.FdChildren.Add(TouchSensor266);
{ METHOD .FdChildren.Add }
HAnimSite265.FdChildren.Add(Shape30);
Billboard268 := TBillboardNode.Create;
end;

procedure InitHumanoid3Part22;
begin
;
Shape269 := TShapeNode.Create;;
Text270 := TTextNode.Create;;
Text270.SetText(['']);
FontStyle271 := TFontStyleNode.Create;;
FontStyle271.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text270.FontStyle := FontStyle271;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape269.Geometry := Text270;
{ METHOD .FdChildren.Add }
Billboard268.FdChildren.Add(Shape269);
{ METHOD .FdChildren.Add }
HAnimSite265.FdChildren.Add(Billboard268);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite265);
HAnimSite272 := THAnimSiteNode.Create;;
HAnimSite272.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor273 := TTouchSensorNode.Create;;
TouchSensor273.Description := 'HAnimSite l_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(TouchSensor273);
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(Shape30);
Billboard275 := TBillboardNode.Create;;
Shape276 := TShapeNode.Create;;
Text277 := TTextNode.Create;;
Text277.SetText(['']);
FontStyle278 := TFontStyleNode.Create;;
FontStyle278.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text277.FontStyle := FontStyle278;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape276.Geometry := Text277;
{ METHOD .FdChildren.Add }
Billboard275.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(Billboard275);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite272);
HAnimSite279 := THAnimSiteNode.Create;;
TouchSensor280 := TTouchSensorNode.Create;
end;

procedure InitHumanoid3Part23;
begin
;
TouchSensor280.Description := 'HAnimSite l_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(TouchSensor280);
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(Shape30);
Billboard282 := TBillboardNode.Create;;
Shape283 := TShapeNode.Create;;
Text284 := TTextNode.Create;;
Text284.SetText(['']);
FontStyle285 := TFontStyleNode.Create;;
FontStyle285.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text284.FontStyle := FontStyle285;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape283.Geometry := Text284;
{ METHOD .FdChildren.Add }
Billboard282.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(Billboard282);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite279);
HAnimSite286 := THAnimSiteNode.Create;;
TouchSensor287 := TTouchSensorNode.Create;;
TouchSensor287.Description := 'HAnimSite l_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite286.FdChildren.Add(TouchSensor287);
{ METHOD .FdChildren.Add }
HAnimSite286.FdChildren.Add(Shape30);
Billboard289 := TBillboardNode.Create;;
Shape290 := TShapeNode.Create;;
Text291 := TTextNode.Create;;
Text291.SetText(['']);
FontStyle292 := TFontStyleNode.Create;;
FontStyle292.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text291.FontStyle := FontStyle292;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape290.Geometry := Text291;
{ METHOD .FdChildren.Add }
Billboard289.FdChildren.Add(Shape290);
{ METHOD .FdChildren.Add }
HAnimSite286.FdChildren.Add(Billboard289);
end;

procedure InitHumanoid3Part24;
begin

{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite286);
HAnimSite293 := THAnimSiteNode.Create;;
TouchSensor294 := TTouchSensorNode.Create;;
TouchSensor294.Description := 'HAnimSite l_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite293.FdChildren.Add(TouchSensor294);
{ METHOD .FdChildren.Add }
HAnimSite293.FdChildren.Add(Shape30);
Billboard296 := TBillboardNode.Create;;
Shape297 := TShapeNode.Create;;
Text298 := TTextNode.Create;;
Text298.SetText(['']);
FontStyle299 := TFontStyleNode.Create;;
FontStyle299.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text298.FontStyle := FontStyle299;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape297.Geometry := Text298;
{ METHOD .FdChildren.Add }
Billboard296.FdChildren.Add(Shape297);
{ METHOD .FdChildren.Add }
HAnimSite293.FdChildren.Add(Billboard296);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite293);
{ METHOD .FdChildren.Add }
HAnimJoint242.FdChildren.Add(HAnimSegment243);
HAnimJoint300 := THAnimJointNode.Create;;
HAnimJoint300.Center := Vector3(0.0841,0.0013,0.0216);
{ METHOD .FdChildren.Add }
HAnimJoint242.FdChildren.Add(HAnimJoint300);
{ METHOD .FdChildren.Add }
HAnimJoint233.FdChildren.Add(HAnimJoint242);
{ METHOD .FdChildren.Add }
HAnimJoint210.FdChildren.Add(HAnimJoint233);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimJoint210);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimJoint180);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimJoint143);
HAnimJoint301 := THAnimJointNode.Create;;
HAnimJoint301.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment302 := THAnimSegmentNode.Create;;
Transform303 := TTransformNode.Create;;
end;

procedure InitHumanoid3Part25;
begin

Transform303.Translation := Vector3(-0.095,0.9171,0.0029);
Transform304 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform304);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(Transform303);
Shape306 := TShapeNode.Create;;
LineSet307 := TLineSetNode.Create;;
LineSet307.SetVertexCount([2]);
Coordinate308 := TCoordinateNode.Create;;
Coordinate308.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet307.Coord := Coordinate308;
{ from r_hip to r_knee vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet307.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape306.Geometry := LineSet307;
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(Shape306);
HAnimSite310 := THAnimSiteNode.Create;;
HAnimSite310.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor311 := TTouchSensorNode.Create;;
TouchSensor311.Description := 'HAnimSite 44 r_femoral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(TouchSensor311);
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(Shape30);
Billboard313 := TBillboardNode.Create;;
Shape314 := TShapeNode.Create;;
Text315 := TTextNode.Create;;
Text315.SetText(['44']);
FontStyle316 := TFontStyleNode.Create;;
FontStyle316.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text315.FontStyle := FontStyle316;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape314.Geometry := Text315;
{ METHOD .FdChildren.Add }
Billboard313.FdChildren.Add(Shape314);
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(Billboard313);
end;

procedure InitHumanoid3Part26;
begin

{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite310);
HAnimSite317 := THAnimSiteNode.Create;;
HAnimSite317.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor318 := TTouchSensorNode.Create;;
TouchSensor318.Description := 'HAnimSite 43 r_femoral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(TouchSensor318);
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(Shape30);
Billboard320 := TBillboardNode.Create;;
Shape321 := TShapeNode.Create;;
Text322 := TTextNode.Create;;
Text322.SetText(['43']);
FontStyle323 := TFontStyleNode.Create;;
FontStyle323.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text322.FontStyle := FontStyle323;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape321.Geometry := Text322;
{ METHOD .FdChildren.Add }
Billboard320.FdChildren.Add(Shape321);
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(Billboard320);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite317);
HAnimSite324 := THAnimSiteNode.Create;;
HAnimSite324.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor325 := TTouchSensorNode.Create;;
TouchSensor325.Description := 'HAnimSite 91 r_knee_crease';
{ METHOD .FdChildren.Add }
HAnimSite324.FdChildren.Add(TouchSensor325);
{ METHOD .FdChildren.Add }
HAnimSite324.FdChildren.Add(Shape30);
Billboard327 := TBillboardNode.Create;;
Shape328 := TShapeNode.Create;;
Text329 := TTextNode.Create;;
Text329.SetText(['91']);
FontStyle330 := TFontStyleNode.Create;
end;

procedure InitHumanoid3Part27;
begin
;
FontStyle330.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text329.FontStyle := FontStyle330;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape328.Geometry := Text329;
{ METHOD .FdChildren.Add }
Billboard327.FdChildren.Add(Shape328);
{ METHOD .FdChildren.Add }
HAnimSite324.FdChildren.Add(Billboard327);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite324);
HAnimSite331 := THAnimSiteNode.Create;;
TouchSensor332 := TTouchSensorNode.Create;;
TouchSensor332.Description := 'HAnimSite 45 r_suprapatella';
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(TouchSensor332);
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(Shape30);
Billboard334 := TBillboardNode.Create;;
Shape335 := TShapeNode.Create;;
Text336 := TTextNode.Create;;
Text336.SetText(['45']);
FontStyle337 := TFontStyleNode.Create;;
FontStyle337.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text336.FontStyle := FontStyle337;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape335.Geometry := Text336;
{ METHOD .FdChildren.Add }
Billboard334.FdChildren.Add(Shape335);
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(Billboard334);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite331);
{ METHOD .FdChildren.Add }
HAnimJoint301.FdChildren.Add(HAnimSegment302);
HAnimJoint338 := THAnimJointNode.Create;;
HAnimJoint338.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment339 := THAnimSegmentNode.Create;;
Transform340 := TTransformNode.Create;;
Transform340.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform341 := TTransformNode.Create;;
end;

procedure InitHumanoid3Part28;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform341.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform340.FdChildren.Add(Transform341);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(Transform340);
Shape343 := TShapeNode.Create;;
LineSet344 := TLineSetNode.Create;;
LineSet344.SetVertexCount([2]);
Coordinate345 := TCoordinateNode.Create;;
Coordinate345.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet344.Coord := Coordinate345;
{ from r_knee to r_talocrural vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet344.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape343.Geometry := LineSet344;
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(Shape343);
HAnimSite347 := THAnimSiteNode.Create;;
HAnimSite347.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor348 := TTouchSensorNode.Create;;
TouchSensor348.Description := 'HAnimSite 53 r_lateral_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite347.FdChildren.Add(TouchSensor348);
{ METHOD .FdChildren.Add }
HAnimSite347.FdChildren.Add(Shape30);
Billboard350 := TBillboardNode.Create;;
Shape351 := TShapeNode.Create;;
Text352 := TTextNode.Create;;
Text352.SetText(['53']);
FontStyle353 := TFontStyleNode.Create;;
FontStyle353.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text352.FontStyle := FontStyle353;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape351.Geometry := Text352;
{ METHOD .FdChildren.Add }
Billboard350.FdChildren.Add(Shape351);
{ METHOD .FdChildren.Add }
HAnimSite347.FdChildren.Add(Billboard350);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(HAnimSite347);
HAnimSite354 := THAnimSiteNode.Create;;
end;

procedure InitHumanoid3Part29;
begin

HAnimSite354.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor355 := TTouchSensorNode.Create;;
TouchSensor355.Description := 'HAnimSite 52 r_medial_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite354.FdChildren.Add(TouchSensor355);
{ METHOD .FdChildren.Add }
HAnimSite354.FdChildren.Add(Shape30);
Billboard357 := TBillboardNode.Create;;
Shape358 := TShapeNode.Create;;
Text359 := TTextNode.Create;;
Text359.SetText(['52']);
FontStyle360 := TFontStyleNode.Create;;
FontStyle360.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text359.FontStyle := FontStyle360;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape358.Geometry := Text359;
{ METHOD .FdChildren.Add }
Billboard357.FdChildren.Add(Shape358);
{ METHOD .FdChildren.Add }
HAnimSite354.FdChildren.Add(Billboard357);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(HAnimSite354);
HAnimSite361 := THAnimSiteNode.Create;;
TouchSensor362 := TTouchSensorNode.Create;;
TouchSensor362.Description := 'HAnimSite 51 r_tibiale';
{ METHOD .FdChildren.Add }
HAnimSite361.FdChildren.Add(TouchSensor362);
{ METHOD .FdChildren.Add }
HAnimSite361.FdChildren.Add(Shape30);
Billboard364 := TBillboardNode.Create;;
Shape365 := TShapeNode.Create;;
Text366 := TTextNode.Create;;
Text366.SetText(['51']);
FontStyle367 := TFontStyleNode.Create;;
FontStyle367.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text366.FontStyle := FontStyle367;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape365.Geometry := Text366;
end;

procedure InitHumanoid3Part30;
begin

{ METHOD .FdChildren.Add }
Billboard364.FdChildren.Add(Shape365);
{ METHOD .FdChildren.Add }
HAnimSite361.FdChildren.Add(Billboard364);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(HAnimSite361);
{ METHOD .FdChildren.Add }
HAnimJoint338.FdChildren.Add(HAnimSegment339);
HAnimJoint368 := THAnimJointNode.Create;;
HAnimJoint368.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment369 := THAnimSegmentNode.Create;;
Transform370 := TTransformNode.Create;;
Transform370.Scale := Vector3(0.15,0.15,0.15);
Transform370.Translation := Vector3(-0.05,0.06,-0.025);
Transform370.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform371 := TTransformNode.Create;;
{ Empty Transform right foot }
{ METHOD .FdChildren.Add }
Transform371.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform370.FdChildren.Add(Transform371);
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(Transform370);
Shape373 := TShapeNode.Create;;
LineSet374 := TLineSetNode.Create;;
LineSet374.SetVertexCount([2]);
Coordinate375 := TCoordinateNode.Create;;
Coordinate375.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.08,0.0175,-0.0608)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet374.Coord := Coordinate375;
{ from r_talocrural to r_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet374.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape373.Geometry := LineSet374;
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(Shape373);
HAnimSite377 := THAnimSiteNode.Create;;
HAnimSite377.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor378 := TTouchSensorNode.Create;;
TouchSensor378.Description := 'HAnimSite 62 r_calcaneus_posterior';
{ METHOD .FdChildren.Add }
HAnimSite377.FdChildren.Add(TouchSensor378);
{ METHOD .FdChildren.Add }
HAnimSite377.FdChildren.Add(Shape30);
Billboard380 := TBillboardNode.Create;
end;

procedure InitHumanoid3Part31;
begin
;
Shape381 := TShapeNode.Create;;
Text382 := TTextNode.Create;;
Text382.SetText(['62']);
FontStyle383 := TFontStyleNode.Create;;
FontStyle383.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text382.FontStyle := FontStyle383;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape381.Geometry := Text382;
{ METHOD .FdChildren.Add }
Billboard380.FdChildren.Add(Shape381);
{ METHOD .FdChildren.Add }
HAnimSite377.FdChildren.Add(Billboard380);
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(HAnimSite377);
HAnimSite384 := THAnimSiteNode.Create;;
HAnimSite384.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor385 := TTouchSensorNode.Create;;
TouchSensor385.Description := 'HAnimSite 54 r_sphyrion';
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(TouchSensor385);
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(Shape30);
Billboard387 := TBillboardNode.Create;;
Shape388 := TShapeNode.Create;;
Text389 := TTextNode.Create;;
Text389.SetText(['54']);
FontStyle390 := TFontStyleNode.Create;;
FontStyle390.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text389.FontStyle := FontStyle390;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape388.Geometry := Text389;
{ METHOD .FdChildren.Add }
Billboard387.FdChildren.Add(Shape388);
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(Billboard387);
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(HAnimSite384);
{ METHOD .FdChildren.Add }
HAnimJoint368.FdChildren.Add(HAnimSegment369);
HAnimJoint391 := THAnimJointNode.Create;;
end;

procedure InitHumanoid3Part32;
begin

HAnimJoint391.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimSegment392 := THAnimSegmentNode.Create;;
Transform393 := TTransformNode.Create;;
Transform393.Translation := Vector3(-0.08,0.0175,-0.0608);
Transform394 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform394.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform393.FdChildren.Add(Transform394);
{ METHOD .FdChildren.Add }
HAnimSegment392.FdChildren.Add(Transform393);
Shape396 := TShapeNode.Create;;
LineSet397 := TLineSetNode.Create;;
LineSet397.SetVertexCount([2]);
Coordinate398 := TCoordinateNode.Create;;
Coordinate398.SetPoint([Vector3(-0.08,0.0175,-0.0608),Vector3(-0.0823,0.0064,-0.004)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet397.Coord := Coordinate398;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet397.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape396.Geometry := LineSet397;
{ METHOD .FdChildren.Add }
HAnimSegment392.FdChildren.Add(Shape396);
{ METHOD .FdChildren.Add }
HAnimJoint391.FdChildren.Add(HAnimSegment392);
HAnimJoint400 := THAnimJointNode.Create;;
HAnimJoint400.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimSegment401 := THAnimSegmentNode.Create;;
Transform402 := TTransformNode.Create;;
Transform402.Translation := Vector3(-0.0823,0.0064,-0.004);
Transform403 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform403.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform402.FdChildren.Add(Transform403);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(Transform402);
Shape405 := TShapeNode.Create;;
LineSet406 := TLineSetNode.Create;
end;

procedure InitHumanoid3Part33;
begin
;
LineSet406.SetVertexCount([2]);
Coordinate407 := TCoordinateNode.Create;;
Coordinate407.SetPoint([Vector3(-0.0823,0.0064,-0.004),Vector3(-0.0841,0.0013,0.0216)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet406.Coord := Coordinate407;
{ from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet406.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape405.Geometry := LineSet406;
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(Shape405);
HAnimSite409 := THAnimSiteNode.Create;;
TouchSensor410 := TTouchSensorNode.Create;;
TouchSensor410.Description := 'HAnimSite 59 r_metatarsal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSite409.FdChildren.Add(TouchSensor410);
{ METHOD .FdChildren.Add }
HAnimSite409.FdChildren.Add(Shape30);
Billboard412 := TBillboardNode.Create;;
Shape413 := TShapeNode.Create;;
Text414 := TTextNode.Create;;
Text414.SetText(['59']);
FontStyle415 := TFontStyleNode.Create;;
FontStyle415.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text414.FontStyle := FontStyle415;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape413.Geometry := Text414;
{ METHOD .FdChildren.Add }
Billboard412.FdChildren.Add(Shape413);
{ METHOD .FdChildren.Add }
HAnimSite409.FdChildren.Add(Billboard412);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite409);
HAnimSite416 := THAnimSiteNode.Create;;
TouchSensor417 := TTouchSensorNode.Create;;
TouchSensor417.Description := 'HAnimSite 60 r_metatarsal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(TouchSensor417);
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(Shape30);
Billboard419 := TBillboardNode.Create;;
end;

procedure InitHumanoid3Part34;
begin

Shape420 := TShapeNode.Create;;
Text421 := TTextNode.Create;;
Text421.SetText(['60']);
FontStyle422 := TFontStyleNode.Create;;
FontStyle422.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text421.FontStyle := FontStyle422;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape420.Geometry := Text421;
{ METHOD .FdChildren.Add }
Billboard419.FdChildren.Add(Shape420);
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(Billboard419);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite416);
HAnimSite423 := THAnimSiteNode.Create;;
TouchSensor424 := TTouchSensorNode.Create;;
TouchSensor424.Description := 'HAnimSite r_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite423.FdChildren.Add(TouchSensor424);
{ METHOD .FdChildren.Add }
HAnimSite423.FdChildren.Add(Shape30);
Billboard426 := TBillboardNode.Create;;
Shape427 := TShapeNode.Create;;
Text428 := TTextNode.Create;;
Text428.SetText(['']);
FontStyle429 := TFontStyleNode.Create;;
FontStyle429.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text428.FontStyle := FontStyle429;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape427.Geometry := Text428;
{ METHOD .FdChildren.Add }
Billboard426.FdChildren.Add(Shape427);
{ METHOD .FdChildren.Add }
HAnimSite423.FdChildren.Add(Billboard426);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite423);
HAnimSite430 := THAnimSiteNode.Create;;
HAnimSite430.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor431 := TTouchSensorNode.Create;;
end;

procedure InitHumanoid3Part35;
begin

TouchSensor431.Description := 'HAnimSite r_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite430.FdChildren.Add(TouchSensor431);
{ METHOD .FdChildren.Add }
HAnimSite430.FdChildren.Add(Shape30);
Billboard433 := TBillboardNode.Create;;
Shape434 := TShapeNode.Create;;
Text435 := TTextNode.Create;;
Text435.SetText(['']);
FontStyle436 := TFontStyleNode.Create;;
FontStyle436.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text435.FontStyle := FontStyle436;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape434.Geometry := Text435;
{ METHOD .FdChildren.Add }
Billboard433.FdChildren.Add(Shape434);
{ METHOD .FdChildren.Add }
HAnimSite430.FdChildren.Add(Billboard433);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite430);
HAnimSite437 := THAnimSiteNode.Create;;
TouchSensor438 := TTouchSensorNode.Create;;
TouchSensor438.Description := 'HAnimSite r_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(TouchSensor438);
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(Shape30);
Billboard440 := TBillboardNode.Create;;
Shape441 := TShapeNode.Create;;
Text442 := TTextNode.Create;;
Text442.SetText(['']);
FontStyle443 := TFontStyleNode.Create;;
FontStyle443.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text442.FontStyle := FontStyle443;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape441.Geometry := Text442;
{ METHOD .FdChildren.Add }
Billboard440.FdChildren.Add(Shape441);
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(Billboard440);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite437);
end;

procedure InitHumanoid3Part36;
begin

HAnimSite444 := THAnimSiteNode.Create;;
TouchSensor445 := TTouchSensorNode.Create;;
TouchSensor445.Description := 'HAnimSite r_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite444.FdChildren.Add(TouchSensor445);
{ METHOD .FdChildren.Add }
HAnimSite444.FdChildren.Add(Shape30);
Billboard447 := TBillboardNode.Create;;
Shape448 := TShapeNode.Create;;
Text449 := TTextNode.Create;;
Text449.SetText(['']);
FontStyle450 := TFontStyleNode.Create;;
FontStyle450.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text449.FontStyle := FontStyle450;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape448.Geometry := Text449;
{ METHOD .FdChildren.Add }
Billboard447.FdChildren.Add(Shape448);
{ METHOD .FdChildren.Add }
HAnimSite444.FdChildren.Add(Billboard447);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite444);
HAnimSite451 := THAnimSiteNode.Create;;
TouchSensor452 := TTouchSensorNode.Create;;
TouchSensor452.Description := 'HAnimSite r_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite451.FdChildren.Add(TouchSensor452);
{ METHOD .FdChildren.Add }
HAnimSite451.FdChildren.Add(Shape30);
Billboard454 := TBillboardNode.Create;;
Shape455 := TShapeNode.Create;;
Text456 := TTextNode.Create;;
Text456.SetText(['']);
FontStyle457 := TFontStyleNode.Create;;
FontStyle457.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text456.FontStyle := FontStyle457;
end;

procedure InitHumanoid3Part37;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape455.Geometry := Text456;
{ METHOD .FdChildren.Add }
Billboard454.FdChildren.Add(Shape455);
{ METHOD .FdChildren.Add }
HAnimSite451.FdChildren.Add(Billboard454);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite451);
{ METHOD .FdChildren.Add }
HAnimJoint400.FdChildren.Add(HAnimSegment401);
HAnimJoint458 := THAnimJointNode.Create;;
HAnimJoint458.Center := Vector3(-0.0841,0.0013,0.0216);
{ METHOD .FdChildren.Add }
HAnimJoint400.FdChildren.Add(HAnimJoint458);
{ METHOD .FdChildren.Add }
HAnimJoint391.FdChildren.Add(HAnimJoint400);
{ METHOD .FdChildren.Add }
HAnimJoint368.FdChildren.Add(HAnimJoint391);
{ METHOD .FdChildren.Add }
HAnimJoint338.FdChildren.Add(HAnimJoint368);
{ METHOD .FdChildren.Add }
HAnimJoint301.FdChildren.Add(HAnimJoint338);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimJoint301);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint60);
HAnimJoint459 := THAnimJointNode.Create;;
HAnimJoint459.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment460 := THAnimSegmentNode.Create;;
Transform461 := TTransformNode.Create;;
Transform461.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform462 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform462.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform461.FdChildren.Add(Transform462);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(Transform461);
Shape464 := TShapeNode.Create;;
LineSet465 := TLineSetNode.Create;;
LineSet465.SetVertexCount([2]);
Coordinate466 := TCoordinateNode.Create;;
Coordinate466.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet465.Coord := Coordinate466;
{ from vl5 to vl4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet465.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape464.Geometry := LineSet465;
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(Shape464);
end;

procedure InitHumanoid3Part38;
begin

HAnimSite468 := THAnimSiteNode.Create;;
HAnimSite468.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor469 := TTouchSensorNode.Create;;
TouchSensor469.Description := 'HAnimSite 84 navel';
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(TouchSensor469);
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(Shape30);
Billboard471 := TBillboardNode.Create;;
Shape472 := TShapeNode.Create;;
Text473 := TTextNode.Create;;
Text473.SetText(['84']);
FontStyle474 := TFontStyleNode.Create;;
FontStyle474.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text473.FontStyle := FontStyle474;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape472.Geometry := Text473;
{ METHOD .FdChildren.Add }
Billboard471.FdChildren.Add(Shape472);
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(Billboard471);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite468);
HAnimSite475 := THAnimSiteNode.Create;;
TouchSensor476 := TTouchSensorNode.Create;;
TouchSensor476.Description := 'HAnimSite 26 waist_preferred_anterior';
{ METHOD .FdChildren.Add }
HAnimSite475.FdChildren.Add(TouchSensor476);
{ METHOD .FdChildren.Add }
HAnimSite475.FdChildren.Add(Shape30);
Billboard478 := TBillboardNode.Create;;
Shape479 := TShapeNode.Create;;
Text480 := TTextNode.Create;;
Text480.SetText(['26']);
FontStyle481 := TFontStyleNode.Create;;
FontStyle481.Size := 0.035;
end;

procedure InitHumanoid3Part39;
begin

{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text480.FontStyle := FontStyle481;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape479.Geometry := Text480;
{ METHOD .FdChildren.Add }
Billboard478.FdChildren.Add(Shape479);
{ METHOD .FdChildren.Add }
HAnimSite475.FdChildren.Add(Billboard478);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite475);
HAnimSite482 := THAnimSiteNode.Create;;
HAnimSite482.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor483 := TTouchSensorNode.Create;;
TouchSensor483.Description := 'HAnimSite 27 waist_preferred_posterior';
{ METHOD .FdChildren.Add }
HAnimSite482.FdChildren.Add(TouchSensor483);
{ METHOD .FdChildren.Add }
HAnimSite482.FdChildren.Add(Shape30);
Billboard485 := TBillboardNode.Create;;
Shape486 := TShapeNode.Create;;
Text487 := TTextNode.Create;;
Text487.SetText(['27']);
FontStyle488 := TFontStyleNode.Create;;
FontStyle488.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text487.FontStyle := FontStyle488;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape486.Geometry := Text487;
{ METHOD .FdChildren.Add }
Billboard485.FdChildren.Add(Shape486);
{ METHOD .FdChildren.Add }
HAnimSite482.FdChildren.Add(Billboard485);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite482);
{ METHOD .FdChildren.Add }
HAnimJoint459.FdChildren.Add(HAnimSegment460);
HAnimJoint489 := THAnimJointNode.Create;;
HAnimJoint489.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment490 := THAnimSegmentNode.Create;;
Transform491 := TTransformNode.Create;;
Transform491.Translation := Vector3(0.0035,1.0925,-0.0787);
Transform492 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform492.FdChildren.Add(Shape20);
end;

procedure InitHumanoid3Part40;
begin

{ METHOD .FdChildren.Add }
Transform491.FdChildren.Add(Transform492);
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(Transform491);
Shape494 := TShapeNode.Create;;
LineSet495 := TLineSetNode.Create;;
LineSet495.SetVertexCount([2]);
Coordinate496 := TCoordinateNode.Create;;
Coordinate496.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet495.Coord := Coordinate496;
{ from vl4 to vl3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet495.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape494.Geometry := LineSet495;
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(Shape494);
{ METHOD .FdChildren.Add }
HAnimJoint489.FdChildren.Add(HAnimSegment490);
HAnimJoint498 := THAnimJointNode.Create;;
HAnimJoint498.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment499 := THAnimSegmentNode.Create;;
Transform500 := TTransformNode.Create;;
Transform500.Translation := Vector3(0.0041,1.1276,-0.0796);
Transform501 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform501.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform500.FdChildren.Add(Transform501);
{ METHOD .FdChildren.Add }
HAnimSegment499.FdChildren.Add(Transform500);
Shape503 := TShapeNode.Create;;
LineSet504 := TLineSetNode.Create;;
LineSet504.SetVertexCount([2]);
Coordinate505 := TCoordinateNode.Create;;
Coordinate505.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet504.Coord := Coordinate505;
{ from vl3 to vl2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet504.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape503.Geometry := LineSet504;
{ METHOD .FdChildren.Add }
HAnimSegment499.FdChildren.Add(Shape503);
end;

procedure InitHumanoid3Part41;
begin

{ METHOD .FdChildren.Add }
HAnimJoint498.FdChildren.Add(HAnimSegment499);
HAnimJoint507 := THAnimJointNode.Create;;
HAnimJoint507.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment508 := THAnimSegmentNode.Create;;
Transform509 := TTransformNode.Create;;
Transform509.Translation := Vector3(0.0045,1.1546,-0.08);
Transform510 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform510.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform509.FdChildren.Add(Transform510);
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(Transform509);
Shape512 := TShapeNode.Create;;
LineSet513 := TLineSetNode.Create;;
LineSet513.SetVertexCount([2]);
Coordinate514 := TCoordinateNode.Create;;
Coordinate514.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet513.Coord := Coordinate514;
{ from vl2 to vl1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet513.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape512.Geometry := LineSet513;
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(Shape512);
HAnimSite516 := THAnimSiteNode.Create;;
HAnimSite516.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor517 := TTouchSensorNode.Create;;
TouchSensor517.Description := 'HAnimSite 28 l_rib10';
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(TouchSensor517);
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(Shape30);
Billboard519 := TBillboardNode.Create;;
Shape520 := TShapeNode.Create;;
Text521 := TTextNode.Create;;
end;

procedure InitHumanoid3Part42;
begin

Text521.SetText(['28']);
FontStyle522 := TFontStyleNode.Create;;
FontStyle522.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text521.FontStyle := FontStyle522;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape520.Geometry := Text521;
{ METHOD .FdChildren.Add }
Billboard519.FdChildren.Add(Shape520);
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(Billboard519);
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(HAnimSite516);
HAnimSite523 := THAnimSiteNode.Create;;
HAnimSite523.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor524 := TTouchSensorNode.Create;;
TouchSensor524.Description := 'HAnimSite 30 r_rib10';
{ METHOD .FdChildren.Add }
HAnimSite523.FdChildren.Add(TouchSensor524);
{ METHOD .FdChildren.Add }
HAnimSite523.FdChildren.Add(Shape30);
Billboard526 := TBillboardNode.Create;;
Shape527 := TShapeNode.Create;;
Text528 := TTextNode.Create;;
Text528.SetText(['30']);
FontStyle529 := TFontStyleNode.Create;;
FontStyle529.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text528.FontStyle := FontStyle529;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape527.Geometry := Text528;
{ METHOD .FdChildren.Add }
Billboard526.FdChildren.Add(Shape527);
{ METHOD .FdChildren.Add }
HAnimSite523.FdChildren.Add(Billboard526);
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(HAnimSite523);
HAnimSite530 := THAnimSiteNode.Create;;
TouchSensor531 := TTouchSensorNode.Create;;
TouchSensor531.Description := 'HAnimSite spine_2_middle_back';
{ METHOD .FdChildren.Add }
HAnimSite530.FdChildren.Add(TouchSensor531);
{ METHOD .FdChildren.Add }
HAnimSite530.FdChildren.Add(Shape30);
Billboard533 := TBillboardNode.Create;
end;

procedure InitHumanoid3Part43;
begin
;
Shape534 := TShapeNode.Create;;
Text535 := TTextNode.Create;;
Text535.SetText(['']);
FontStyle536 := TFontStyleNode.Create;;
FontStyle536.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text535.FontStyle := FontStyle536;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape534.Geometry := Text535;
{ METHOD .FdChildren.Add }
Billboard533.FdChildren.Add(Shape534);
{ METHOD .FdChildren.Add }
HAnimSite530.FdChildren.Add(Billboard533);
{ METHOD .FdChildren.Add }
HAnimSegment508.FdChildren.Add(HAnimSite530);
{ METHOD .FdChildren.Add }
HAnimJoint507.FdChildren.Add(HAnimSegment508);
HAnimJoint537 := THAnimJointNode.Create;;
HAnimJoint537.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment538 := THAnimSegmentNode.Create;;
Transform539 := TTransformNode.Create;;
Transform539.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform540 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform540.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform539.FdChildren.Add(Transform540);
{ METHOD .FdChildren.Add }
HAnimSegment538.FdChildren.Add(Transform539);
Shape542 := TShapeNode.Create;;
LineSet543 := TLineSetNode.Create;;
LineSet543.SetVertexCount([2]);
Coordinate544 := TCoordinateNode.Create;;
Coordinate544.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet543.Coord := Coordinate544;
{ from vl1 to vt12 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet543.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape542.Geometry := LineSet543;
{ METHOD .FdChildren.Add }
HAnimSegment538.FdChildren.Add(Shape542);
end;

procedure InitHumanoid3Part44;
begin

{ METHOD .FdChildren.Add }
HAnimJoint537.FdChildren.Add(HAnimSegment538);
HAnimJoint546 := THAnimJointNode.Create;;
HAnimJoint546.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment547 := THAnimSegmentNode.Create;;
Transform548 := TTransformNode.Create;;
Transform548.Translation := Vector3(0.0051,1.2278,-0.0808);
Transform549 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform549.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform548.FdChildren.Add(Transform549);
{ METHOD .FdChildren.Add }
HAnimSegment547.FdChildren.Add(Transform548);
Shape551 := TShapeNode.Create;;
LineSet552 := TLineSetNode.Create;;
LineSet552.SetVertexCount([2]);
Coordinate553 := TCoordinateNode.Create;;
Coordinate553.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet552.Coord := Coordinate553;
{ from vt12 to vt11 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet552.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape551.Geometry := LineSet552;
{ METHOD .FdChildren.Add }
HAnimSegment547.FdChildren.Add(Shape551);
{ METHOD .FdChildren.Add }
HAnimJoint546.FdChildren.Add(HAnimSegment547);
HAnimJoint555 := THAnimJointNode.Create;;
HAnimJoint555.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment556 := THAnimSegmentNode.Create;;
Transform557 := TTransformNode.Create;;
Transform557.Translation := Vector3(0.0053,1.2679,-0.081);
Transform558 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform558.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform557.FdChildren.Add(Transform558);
{ METHOD .FdChildren.Add }
HAnimSegment556.FdChildren.Add(Transform557);
end;

procedure InitHumanoid3Part45;
begin

Shape560 := TShapeNode.Create;;
LineSet561 := TLineSetNode.Create;;
LineSet561.SetVertexCount([2]);
Coordinate562 := TCoordinateNode.Create;;
Coordinate562.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet561.Coord := Coordinate562;
{ from vt11 to vt10 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet561.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape560.Geometry := LineSet561;
{ METHOD .FdChildren.Add }
HAnimSegment556.FdChildren.Add(Shape560);
{ METHOD .FdChildren.Add }
HAnimJoint555.FdChildren.Add(HAnimSegment556);
HAnimJoint564 := THAnimJointNode.Create;;
HAnimJoint564.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment565 := THAnimSegmentNode.Create;;
Transform566 := TTransformNode.Create;;
Transform566.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform567 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform567.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform566.FdChildren.Add(Transform567);
{ METHOD .FdChildren.Add }
HAnimSegment565.FdChildren.Add(Transform566);
Shape569 := TShapeNode.Create;;
LineSet570 := TLineSetNode.Create;;
LineSet570.SetVertexCount([2]);
Coordinate571 := TCoordinateNode.Create;;
Coordinate571.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet570.Coord := Coordinate571;
{ from vt10 to vt9 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet570.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape569.Geometry := LineSet570;
{ METHOD .FdChildren.Add }
HAnimSegment565.FdChildren.Add(Shape569);
HAnimSite573 := THAnimSiteNode.Create;;
end;

procedure InitHumanoid3Part46;
begin

HAnimSite573.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor574 := TTouchSensorNode.Create;;
TouchSensor574.Description := 'HAnimSite 13 substernale';
{ METHOD .FdChildren.Add }
HAnimSite573.FdChildren.Add(TouchSensor574);
{ METHOD .FdChildren.Add }
HAnimSite573.FdChildren.Add(Shape30);
Billboard576 := TBillboardNode.Create;;
Shape577 := TShapeNode.Create;;
Text578 := TTextNode.Create;;
Text578.SetText(['13']);
FontStyle579 := TFontStyleNode.Create;;
FontStyle579.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text578.FontStyle := FontStyle579;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape577.Geometry := Text578;
{ METHOD .FdChildren.Add }
Billboard576.FdChildren.Add(Shape577);
{ METHOD .FdChildren.Add }
HAnimSite573.FdChildren.Add(Billboard576);
{ METHOD .FdChildren.Add }
HAnimSegment565.FdChildren.Add(HAnimSite573);
{ METHOD .FdChildren.Add }
HAnimJoint564.FdChildren.Add(HAnimSegment565);
HAnimJoint580 := THAnimJointNode.Create;;
HAnimJoint580.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment581 := THAnimSegmentNode.Create;;
Transform582 := TTransformNode.Create;;
Transform582.Translation := Vector3(0.0057,1.3126,-0.0838);
Transform583 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform583.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform582.FdChildren.Add(Transform583);
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(Transform582);
Shape585 := TShapeNode.Create;;
LineSet586 := TLineSetNode.Create;;
LineSet586.SetVertexCount([2]);
end;

procedure InitHumanoid3Part47;
begin

Coordinate587 := TCoordinateNode.Create;;
Coordinate587.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet586.Coord := Coordinate587;
{ from vt9 to vt8 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet586.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape585.Geometry := LineSet586;
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(Shape585);
HAnimSite589 := THAnimSiteNode.Create;;
HAnimSite589.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor590 := TTouchSensorNode.Create;;
TouchSensor590.Description := 'HAnimSite 29 l_thelion';
{ METHOD .FdChildren.Add }
HAnimSite589.FdChildren.Add(TouchSensor590);
{ METHOD .FdChildren.Add }
HAnimSite589.FdChildren.Add(Shape30);
Billboard592 := TBillboardNode.Create;;
Shape593 := TShapeNode.Create;;
Text594 := TTextNode.Create;;
Text594.SetText(['29']);
FontStyle595 := TFontStyleNode.Create;;
FontStyle595.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text594.FontStyle := FontStyle595;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape593.Geometry := Text594;
{ METHOD .FdChildren.Add }
Billboard592.FdChildren.Add(Shape593);
{ METHOD .FdChildren.Add }
HAnimSite589.FdChildren.Add(Billboard592);
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(HAnimSite589);
HAnimSite596 := THAnimSiteNode.Create;;
HAnimSite596.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor597 := TTouchSensorNode.Create;;
TouchSensor597.Description := 'HAnimSite 31 r_thelion';
{ METHOD .FdChildren.Add }
HAnimSite596.FdChildren.Add(TouchSensor597);
{ METHOD .FdChildren.Add }
HAnimSite596.FdChildren.Add(Shape30);
Billboard599 := TBillboardNode.Create;;
end;

procedure InitHumanoid3Part48;
begin

Shape600 := TShapeNode.Create;;
Text601 := TTextNode.Create;;
Text601.SetText(['31']);
FontStyle602 := TFontStyleNode.Create;;
FontStyle602.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text601.FontStyle := FontStyle602;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape600.Geometry := Text601;
{ METHOD .FdChildren.Add }
Billboard599.FdChildren.Add(Shape600);
{ METHOD .FdChildren.Add }
HAnimSite596.FdChildren.Add(Billboard599);
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(HAnimSite596);
{ METHOD .FdChildren.Add }
HAnimJoint580.FdChildren.Add(HAnimSegment581);
HAnimJoint603 := THAnimJointNode.Create;;
HAnimJoint603.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment604 := THAnimSegmentNode.Create;;
Transform605 := TTransformNode.Create;;
Transform605.Translation := Vector3(0.0057,1.3382,-0.0845);
Transform606 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform606.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform605.FdChildren.Add(Transform606);
{ METHOD .FdChildren.Add }
HAnimSegment604.FdChildren.Add(Transform605);
Shape608 := TShapeNode.Create;;
LineSet609 := TLineSetNode.Create;;
LineSet609.SetVertexCount([2]);
Coordinate610 := TCoordinateNode.Create;;
Coordinate610.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet609.Coord := Coordinate610;
{ from vt8 to vt7 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet609.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape608.Geometry := LineSet609;
{ METHOD .FdChildren.Add }
HAnimSegment604.FdChildren.Add(Shape608);
{ METHOD .FdChildren.Add }
HAnimJoint603.FdChildren.Add(HAnimSegment604);
end;

procedure InitHumanoid3Part49;
begin

HAnimJoint612 := THAnimJointNode.Create;;
HAnimJoint612.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment613 := THAnimSegmentNode.Create;;
Transform614 := TTransformNode.Create;;
Transform614.Translation := Vector3(0.0058,1.3625,-0.0833);
Transform615 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform615.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform614.FdChildren.Add(Transform615);
{ METHOD .FdChildren.Add }
HAnimSegment613.FdChildren.Add(Transform614);
Shape617 := TShapeNode.Create;;
LineSet618 := TLineSetNode.Create;;
LineSet618.SetVertexCount([2]);
Coordinate619 := TCoordinateNode.Create;;
Coordinate619.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet618.Coord := Coordinate619;
{ from vt7 to vt6 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet618.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape617.Geometry := LineSet618;
{ METHOD .FdChildren.Add }
HAnimSegment613.FdChildren.Add(Shape617);
{ METHOD .FdChildren.Add }
HAnimJoint612.FdChildren.Add(HAnimSegment613);
HAnimJoint621 := THAnimJointNode.Create;;
HAnimJoint621.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment622 := THAnimSegmentNode.Create;;
Transform623 := TTransformNode.Create;;
Transform623.Translation := Vector3(0.0059,1.3866,-0.08);
Transform624 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform624.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform623.FdChildren.Add(Transform624);
{ METHOD .FdChildren.Add }
HAnimSegment622.FdChildren.Add(Transform623);
Shape626 := TShapeNode.Create;
end;

procedure InitHumanoid3Part50;
begin
;
LineSet627 := TLineSetNode.Create;;
LineSet627.SetVertexCount([2]);
Coordinate628 := TCoordinateNode.Create;;
Coordinate628.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet627.Coord := Coordinate628;
{ from vt6 to vt5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet627.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape626.Geometry := LineSet627;
{ METHOD .FdChildren.Add }
HAnimSegment622.FdChildren.Add(Shape626);
HAnimSite630 := THAnimSiteNode.Create;;
TouchSensor631 := TTouchSensorNode.Create;;
TouchSensor631.Description := 'HAnimSite 94 l_chest_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite630.FdChildren.Add(TouchSensor631);
{ METHOD .FdChildren.Add }
HAnimSite630.FdChildren.Add(Shape30);
Billboard633 := TBillboardNode.Create;;
Shape634 := TShapeNode.Create;;
Text635 := TTextNode.Create;;
Text635.SetText(['94']);
FontStyle636 := TFontStyleNode.Create;;
FontStyle636.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text635.FontStyle := FontStyle636;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape634.Geometry := Text635;
{ METHOD .FdChildren.Add }
Billboard633.FdChildren.Add(Shape634);
{ METHOD .FdChildren.Add }
HAnimSite630.FdChildren.Add(Billboard633);
{ METHOD .FdChildren.Add }
HAnimSegment622.FdChildren.Add(HAnimSite630);
HAnimSite637 := THAnimSiteNode.Create;;
TouchSensor638 := TTouchSensorNode.Create;;
TouchSensor638.Description := 'HAnimSite 88 mesosternale';
{ METHOD .FdChildren.Add }
HAnimSite637.FdChildren.Add(TouchSensor638);
{ METHOD .FdChildren.Add }
HAnimSite637.FdChildren.Add(Shape30);
end;

procedure InitHumanoid3Part51;
begin

Billboard640 := TBillboardNode.Create;;
Shape641 := TShapeNode.Create;;
Text642 := TTextNode.Create;;
Text642.SetText(['88']);
FontStyle643 := TFontStyleNode.Create;;
FontStyle643.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text642.FontStyle := FontStyle643;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape641.Geometry := Text642;
{ METHOD .FdChildren.Add }
Billboard640.FdChildren.Add(Shape641);
{ METHOD .FdChildren.Add }
HAnimSite637.FdChildren.Add(Billboard640);
{ METHOD .FdChildren.Add }
HAnimSegment622.FdChildren.Add(HAnimSite637);
HAnimSite644 := THAnimSiteNode.Create;;
TouchSensor645 := TTouchSensorNode.Create;;
TouchSensor645.Description := 'HAnimSite 95 r_chest_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite644.FdChildren.Add(TouchSensor645);
{ METHOD .FdChildren.Add }
HAnimSite644.FdChildren.Add(Shape30);
Billboard647 := TBillboardNode.Create;;
Shape648 := TShapeNode.Create;;
Text649 := TTextNode.Create;;
Text649.SetText(['95']);
FontStyle650 := TFontStyleNode.Create;;
FontStyle650.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text649.FontStyle := FontStyle650;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape648.Geometry := Text649;
{ METHOD .FdChildren.Add }
Billboard647.FdChildren.Add(Shape648);
{ METHOD .FdChildren.Add }
HAnimSite644.FdChildren.Add(Billboard647);
{ METHOD .FdChildren.Add }
HAnimSegment622.FdChildren.Add(HAnimSite644);
HAnimSite651 := THAnimSiteNode.Create;;
TouchSensor652 := TTouchSensorNode.Create;
end;

procedure InitHumanoid3Part52;
begin
;
TouchSensor652.Description := 'HAnimSite 92 rear_center_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite651.FdChildren.Add(TouchSensor652);
{ METHOD .FdChildren.Add }
HAnimSite651.FdChildren.Add(Shape30);
Billboard654 := TBillboardNode.Create;;
Shape655 := TShapeNode.Create;;
Text656 := TTextNode.Create;;
Text656.SetText(['92']);
FontStyle657 := TFontStyleNode.Create;;
FontStyle657.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text656.FontStyle := FontStyle657;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape655.Geometry := Text656;
{ METHOD .FdChildren.Add }
Billboard654.FdChildren.Add(Shape655);
{ METHOD .FdChildren.Add }
HAnimSite651.FdChildren.Add(Billboard654);
{ METHOD .FdChildren.Add }
HAnimSegment622.FdChildren.Add(HAnimSite651);
{ METHOD .FdChildren.Add }
HAnimJoint621.FdChildren.Add(HAnimSegment622);
HAnimJoint658 := THAnimJointNode.Create;;
HAnimJoint658.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment659 := THAnimSegmentNode.Create;;
Transform660 := TTransformNode.Create;;
Transform660.Translation := Vector3(0.006,1.4102,-0.0745);
Transform661 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform661.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform660.FdChildren.Add(Transform661);
{ METHOD .FdChildren.Add }
HAnimSegment659.FdChildren.Add(Transform660);
Shape663 := TShapeNode.Create;;
LineSet664 := TLineSetNode.Create;;
LineSet664.SetVertexCount([2]);
Coordinate665 := TCoordinateNode.Create;;
end;

procedure InitHumanoid3Part53;
begin

Coordinate665.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet664.Coord := Coordinate665;
{ from vt5 to vt4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet664.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape663.Geometry := LineSet664;
{ METHOD .FdChildren.Add }
HAnimSegment659.FdChildren.Add(Shape663);
HAnimSite667 := THAnimSiteNode.Create;;
TouchSensor668 := TTouchSensorNode.Create;;
TouchSensor668.Description := 'HAnimSite 24 spine_1_middle_back';
{ METHOD .FdChildren.Add }
HAnimSite667.FdChildren.Add(TouchSensor668);
{ METHOD .FdChildren.Add }
HAnimSite667.FdChildren.Add(Shape30);
Billboard670 := TBillboardNode.Create;;
Shape671 := TShapeNode.Create;;
Text672 := TTextNode.Create;;
Text672.SetText(['24']);
FontStyle673 := TFontStyleNode.Create;;
FontStyle673.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text672.FontStyle := FontStyle673;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape671.Geometry := Text672;
{ METHOD .FdChildren.Add }
Billboard670.FdChildren.Add(Shape671);
{ METHOD .FdChildren.Add }
HAnimSite667.FdChildren.Add(Billboard670);
{ METHOD .FdChildren.Add }
HAnimSegment659.FdChildren.Add(HAnimSite667);
{ METHOD .FdChildren.Add }
HAnimJoint658.FdChildren.Add(HAnimSegment659);
HAnimJoint674 := THAnimJointNode.Create;;
HAnimJoint674.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment675 := THAnimSegmentNode.Create;;
Transform676 := TTransformNode.Create;;
Transform676.Translation := Vector3(0.0061,1.432,-0.0675);
Transform677 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform677.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform676.FdChildren.Add(Transform677);
end;

procedure InitHumanoid3Part54;
begin

{ METHOD .FdChildren.Add }
HAnimSegment675.FdChildren.Add(Transform676);
Shape679 := TShapeNode.Create;;
LineSet680 := TLineSetNode.Create;;
LineSet680.SetVertexCount([2]);
Coordinate681 := TCoordinateNode.Create;;
Coordinate681.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet680.Coord := Coordinate681;
{ from vt4 to vt3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet680.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape679.Geometry := LineSet680;
{ METHOD .FdChildren.Add }
HAnimSegment675.FdChildren.Add(Shape679);
{ METHOD .FdChildren.Add }
HAnimJoint674.FdChildren.Add(HAnimSegment675);
HAnimJoint683 := THAnimJointNode.Create;;
HAnimJoint683.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment684 := THAnimSegmentNode.Create;;
Transform685 := TTransformNode.Create;;
Transform685.Translation := Vector3(0.0062,1.4583,-0.057);
Transform686 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform686.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform685.FdChildren.Add(Transform686);
{ METHOD .FdChildren.Add }
HAnimSegment684.FdChildren.Add(Transform685);
Shape688 := TShapeNode.Create;;
LineSet689 := TLineSetNode.Create;;
LineSet689.SetVertexCount([2]);
Coordinate690 := TCoordinateNode.Create;;
Coordinate690.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet689.Coord := Coordinate690;
{ from vt3 to vt2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet689.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape688.Geometry := LineSet689;
{ METHOD .FdChildren.Add }
HAnimSegment684.FdChildren.Add(Shape688);
{ METHOD .FdChildren.Add }
HAnimJoint683.FdChildren.Add(HAnimSegment684);
end;

procedure InitHumanoid3Part55;
begin

HAnimJoint692 := THAnimJointNode.Create;;
HAnimJoint692.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment693 := THAnimSegmentNode.Create;;
Transform694 := TTransformNode.Create;;
Transform694.Translation := Vector3(0.0063,1.4761,-0.0484);
Transform695 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform695.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform694.FdChildren.Add(Transform695);
{ METHOD .FdChildren.Add }
HAnimSegment693.FdChildren.Add(Transform694);
Shape697 := TShapeNode.Create;;
LineSet698 := TLineSetNode.Create;;
LineSet698.SetVertexCount([2]);
Coordinate699 := TCoordinateNode.Create;;
Coordinate699.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet698.Coord := Coordinate699;
{ from vt2 to vt1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet698.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape697.Geometry := LineSet698;
{ METHOD .FdChildren.Add }
HAnimSegment693.FdChildren.Add(Shape697);
{ METHOD .FdChildren.Add }
HAnimJoint692.FdChildren.Add(HAnimSegment693);
HAnimJoint701 := THAnimJointNode.Create;;
HAnimJoint701.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment702 := THAnimSegmentNode.Create;;
Transform703 := TTransformNode.Create;;
Transform703.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform704 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform704.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform703.FdChildren.Add(Transform704);
{ METHOD .FdChildren.Add }
HAnimSegment702.FdChildren.Add(Transform703);
Shape706 := TShapeNode.Create;
end;

procedure InitHumanoid3Part56;
begin
;
LineSet707 := TLineSetNode.Create;;
LineSet707.SetVertexCount([2]);
Coordinate708 := TCoordinateNode.Create;;
Coordinate708.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet707.Coord := Coordinate708;
{ from vt1 to vc7 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet707.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape706.Geometry := LineSet707;
{ METHOD .FdChildren.Add }
HAnimSegment702.FdChildren.Add(Shape706);
HAnimSite710 := THAnimSiteNode.Create;;
HAnimSite710.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor711 := TTouchSensorNode.Create;;
TouchSensor711.Description := 'HAnimSite 10 cervicale';
{ METHOD .FdChildren.Add }
HAnimSite710.FdChildren.Add(TouchSensor711);
{ METHOD .FdChildren.Add }
HAnimSite710.FdChildren.Add(Shape30);
Billboard713 := TBillboardNode.Create;;
Shape714 := TShapeNode.Create;;
Text715 := TTextNode.Create;;
Text715.SetText(['10']);
FontStyle716 := TFontStyleNode.Create;;
FontStyle716.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text715.FontStyle := FontStyle716;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape714.Geometry := Text715;
{ METHOD .FdChildren.Add }
Billboard713.FdChildren.Add(Shape714);
{ METHOD .FdChildren.Add }
HAnimSite710.FdChildren.Add(Billboard713);
{ METHOD .FdChildren.Add }
HAnimSegment702.FdChildren.Add(HAnimSite710);
HAnimSite717 := THAnimSiteNode.Create;;
HAnimSite717.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor718 := TTouchSensorNode.Create;;
TouchSensor718.Description := 'HAnimSite 12 suprasternale';
end;

procedure InitHumanoid3Part57;
begin

{ METHOD .FdChildren.Add }
HAnimSite717.FdChildren.Add(TouchSensor718);
{ METHOD .FdChildren.Add }
HAnimSite717.FdChildren.Add(Shape30);
Billboard720 := TBillboardNode.Create;;
Shape721 := TShapeNode.Create;;
Text722 := TTextNode.Create;;
Text722.SetText(['12']);
FontStyle723 := TFontStyleNode.Create;;
FontStyle723.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text722.FontStyle := FontStyle723;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape721.Geometry := Text722;
{ METHOD .FdChildren.Add }
Billboard720.FdChildren.Add(Shape721);
{ METHOD .FdChildren.Add }
HAnimSite717.FdChildren.Add(Billboard720);
{ METHOD .FdChildren.Add }
HAnimSegment702.FdChildren.Add(HAnimSite717);
Shape724 := TShapeNode.Create;;
LineSet725 := TLineSetNode.Create;;
LineSet725.SetVertexCount([2]);
Coordinate726 := TCoordinateNode.Create;;
Coordinate726.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet725.Coord := Coordinate726;
{ from vt1 to l_sternoclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet725.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape724.Geometry := LineSet725;
{ METHOD .FdChildren.Add }
HAnimSegment702.FdChildren.Add(Shape724);
Shape728 := TShapeNode.Create;;
LineSet729 := TLineSetNode.Create;;
LineSet729.SetVertexCount([2]);
Coordinate730 := TCoordinateNode.Create;;
Coordinate730.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet729.Coord := Coordinate730;
{ from vt1 to r_sternoclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet729.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape728.Geometry := LineSet729;
end;

procedure InitHumanoid3Part58;
begin

{ METHOD .FdChildren.Add }
HAnimSegment702.FdChildren.Add(Shape728);
{ METHOD .FdChildren.Add }
HAnimJoint701.FdChildren.Add(HAnimSegment702);
HAnimJoint732 := THAnimJointNode.Create;;
HAnimJoint732.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment733 := THAnimSegmentNode.Create;;
Transform734 := TTransformNode.Create;;
Transform734.Translation := Vector3(0.0066,1.5132,-0.0301);
Transform735 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform735.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform734.FdChildren.Add(Transform735);
{ METHOD .FdChildren.Add }
HAnimSegment733.FdChildren.Add(Transform734);
Shape737 := TShapeNode.Create;;
LineSet738 := TLineSetNode.Create;;
LineSet738.SetVertexCount([2]);
Coordinate739 := TCoordinateNode.Create;;
Coordinate739.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet738.Coord := Coordinate739;
{ from vc7 to vc6 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet738.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape737.Geometry := LineSet738;
{ METHOD .FdChildren.Add }
HAnimSegment733.FdChildren.Add(Shape737);
HAnimSite741 := THAnimSiteNode.Create;;
HAnimSite741.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor742 := TTouchSensorNode.Create;;
TouchSensor742.Description := 'HAnimSite 82 l_neck_base';
{ METHOD .FdChildren.Add }
HAnimSite741.FdChildren.Add(TouchSensor742);
{ METHOD .FdChildren.Add }
HAnimSite741.FdChildren.Add(Shape30);
Billboard744 := TBillboardNode.Create;;
Shape745 := TShapeNode.Create;;
Text746 := TTextNode.Create;
end;

procedure InitHumanoid3Part59;
begin
;
Text746.SetText(['82']);
FontStyle747 := TFontStyleNode.Create;;
FontStyle747.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text746.FontStyle := FontStyle747;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape745.Geometry := Text746;
{ METHOD .FdChildren.Add }
Billboard744.FdChildren.Add(Shape745);
{ METHOD .FdChildren.Add }
HAnimSite741.FdChildren.Add(Billboard744);
{ METHOD .FdChildren.Add }
HAnimSegment733.FdChildren.Add(HAnimSite741);
HAnimSite748 := THAnimSiteNode.Create;;
HAnimSite748.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor749 := TTouchSensorNode.Create;;
TouchSensor749.Description := 'HAnimSite 83 r_neck_base';
{ METHOD .FdChildren.Add }
HAnimSite748.FdChildren.Add(TouchSensor749);
{ METHOD .FdChildren.Add }
HAnimSite748.FdChildren.Add(Shape30);
Billboard751 := TBillboardNode.Create;;
Shape752 := TShapeNode.Create;;
Text753 := TTextNode.Create;;
Text753.SetText(['83']);
FontStyle754 := TFontStyleNode.Create;;
FontStyle754.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text753.FontStyle := FontStyle754;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape752.Geometry := Text753;
{ METHOD .FdChildren.Add }
Billboard751.FdChildren.Add(Shape752);
{ METHOD .FdChildren.Add }
HAnimSite748.FdChildren.Add(Billboard751);
{ METHOD .FdChildren.Add }
HAnimSegment733.FdChildren.Add(HAnimSite748);
{ METHOD .FdChildren.Add }
HAnimJoint732.FdChildren.Add(HAnimSegment733);
HAnimJoint755 := THAnimJointNode.Create;;
HAnimJoint755.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment756 := THAnimSegmentNode.Create;;
Transform757 := TTransformNode.Create;
end;

procedure InitHumanoid3Part60;
begin
;
Transform757.Translation := Vector3(0.0066,1.5357,-0.0143);
Transform758 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform758.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform757.FdChildren.Add(Transform758);
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(Transform757);
Shape760 := TShapeNode.Create;;
LineSet761 := TLineSetNode.Create;;
LineSet761.SetVertexCount([2]);
Coordinate762 := TCoordinateNode.Create;;
Coordinate762.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet761.Coord := Coordinate762;
{ from vc6 to vc5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet761.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape760.Geometry := LineSet761;
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(Shape760);
{ METHOD .FdChildren.Add }
HAnimJoint755.FdChildren.Add(HAnimSegment756);
HAnimJoint764 := THAnimJointNode.Create;;
HAnimJoint764.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment765 := THAnimSegmentNode.Create;;
Transform766 := TTransformNode.Create;;
Transform766.Translation := Vector3(0.0066,1.552,-0.0082);
Transform767 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform767.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform766.FdChildren.Add(Transform767);
{ METHOD .FdChildren.Add }
HAnimSegment765.FdChildren.Add(Transform766);
Shape769 := TShapeNode.Create;;
LineSet770 := TLineSetNode.Create;;
LineSet770.SetVertexCount([2]);
Coordinate771 := TCoordinateNode.Create;;
end;

procedure InitHumanoid3Part61;
begin

Coordinate771.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet770.Coord := Coordinate771;
{ from vc5 to vc4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet770.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape769.Geometry := LineSet770;
{ METHOD .FdChildren.Add }
HAnimSegment765.FdChildren.Add(Shape769);
{ METHOD .FdChildren.Add }
HAnimJoint764.FdChildren.Add(HAnimSegment765);
HAnimJoint773 := THAnimJointNode.Create;;
HAnimJoint773.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment774 := THAnimSegmentNode.Create;;
Transform775 := TTransformNode.Create;;
Transform775.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform776 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform776.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform775.FdChildren.Add(Transform776);
{ METHOD .FdChildren.Add }
HAnimSegment774.FdChildren.Add(Transform775);
Shape778 := TShapeNode.Create;;
LineSet779 := TLineSetNode.Create;;
LineSet779.SetVertexCount([2]);
Coordinate780 := TCoordinateNode.Create;;
Coordinate780.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet779.Coord := Coordinate780;
{ from vc4 to vc3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet779.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape778.Geometry := LineSet779;
{ METHOD .FdChildren.Add }
HAnimSegment774.FdChildren.Add(Shape778);
{ METHOD .FdChildren.Add }
HAnimJoint773.FdChildren.Add(HAnimSegment774);
HAnimJoint782 := THAnimJointNode.Create;;
HAnimJoint782.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment783 := THAnimSegmentNode.Create;;
Transform784 := TTransformNode.Create;;
Transform784.Translation := Vector3(0.0066,1.58,-0.0103);
end;

procedure InitHumanoid3Part62;
begin

Transform785 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform785.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform784.FdChildren.Add(Transform785);
{ METHOD .FdChildren.Add }
HAnimSegment783.FdChildren.Add(Transform784);
Shape787 := TShapeNode.Create;;
LineSet788 := TLineSetNode.Create;;
LineSet788.SetVertexCount([2]);
Coordinate789 := TCoordinateNode.Create;;
Coordinate789.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet788.Coord := Coordinate789;
{ from vc3 to vc2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet788.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape787.Geometry := LineSet788;
{ METHOD .FdChildren.Add }
HAnimSegment783.FdChildren.Add(Shape787);
{ METHOD .FdChildren.Add }
HAnimJoint782.FdChildren.Add(HAnimSegment783);
HAnimJoint791 := THAnimJointNode.Create;;
HAnimJoint791.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment792 := THAnimSegmentNode.Create;;
Transform793 := TTransformNode.Create;;
Transform793.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform794 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform794.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform793.FdChildren.Add(Transform794);
{ METHOD .FdChildren.Add }
HAnimSegment792.FdChildren.Add(Transform793);
Shape796 := TShapeNode.Create;;
LineSet797 := TLineSetNode.Create;;
LineSet797.SetVertexCount([2]);
Coordinate798 := TCoordinateNode.Create;;
Coordinate798.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet797.Coord := Coordinate798;
end;

procedure InitHumanoid3Part63;
begin

{ from vc2 to vc1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet797.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape796.Geometry := LineSet797;
{ METHOD .FdChildren.Add }
HAnimSegment792.FdChildren.Add(Shape796);
HAnimSite800 := THAnimSiteNode.Create;;
TouchSensor801 := TTouchSensorNode.Create;;
TouchSensor801.Description := 'HAnimSite 11 adams_apple';
{ METHOD .FdChildren.Add }
HAnimSite800.FdChildren.Add(TouchSensor801);
{ METHOD .FdChildren.Add }
HAnimSite800.FdChildren.Add(Shape30);
Billboard803 := TBillboardNode.Create;;
Shape804 := TShapeNode.Create;;
Text805 := TTextNode.Create;;
Text805.SetText(['11']);
FontStyle806 := TFontStyleNode.Create;;
FontStyle806.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text805.FontStyle := FontStyle806;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape804.Geometry := Text805;
{ METHOD .FdChildren.Add }
Billboard803.FdChildren.Add(Shape804);
{ METHOD .FdChildren.Add }
HAnimSite800.FdChildren.Add(Billboard803);
{ METHOD .FdChildren.Add }
HAnimSegment792.FdChildren.Add(HAnimSite800);
{ METHOD .FdChildren.Add }
HAnimJoint791.FdChildren.Add(HAnimSegment792);
HAnimJoint807 := THAnimJointNode.Create;;
HAnimJoint807.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment808 := THAnimSegmentNode.Create;;
Transform809 := TTransformNode.Create;;
Transform809.Translation := Vector3(0.0066,1.6144,-0.0034);
Transform810 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform810.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform809.FdChildren.Add(Transform810);
{ METHOD .FdChildren.Add }
HAnimSegment808.FdChildren.Add(Transform809);
Shape812 := TShapeNode.Create;
end;

procedure InitHumanoid3Part64;
begin
;
LineSet813 := TLineSetNode.Create;;
LineSet813.SetVertexCount([2]);
Coordinate814 := TCoordinateNode.Create;;
Coordinate814.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet813.Coord := Coordinate814;
{ from vc1 to skullbase vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet813.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape812.Geometry := LineSet813;
{ METHOD .FdChildren.Add }
HAnimSegment808.FdChildren.Add(Shape812);
{ METHOD .FdChildren.Add }
HAnimJoint807.FdChildren.Add(HAnimSegment808);
HAnimJoint816 := THAnimJointNode.Create;;
HAnimJoint816.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment817 := THAnimSegmentNode.Create;;
Transform818 := TTransformNode.Create;;
Transform818.Translation := Vector3(0.0044,1.6209,0.0236);
Transform819 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform819.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform818.FdChildren.Add(Transform819);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Transform818);
Shape821 := TShapeNode.Create;;
LineSet822 := TLineSetNode.Create;;
LineSet822.SetVertexCount([2]);
Coordinate823 := TCoordinateNode.Create;;
Coordinate823.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0503,1.4157,-0.0689)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet822.Coord := Coordinate823;
{ from skullbase to l_eyelid_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet822.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape821.Geometry := LineSet822;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape821);
HAnimSite825 := THAnimSiteNode.Create;;
TouchSensor826 := TTouchSensorNode.Create;
end;

procedure InitHumanoid3Part65;
begin
;
TouchSensor826.Description := 'HAnimSite 1 glabella';
{ METHOD .FdChildren.Add }
HAnimSite825.FdChildren.Add(TouchSensor826);
{ METHOD .FdChildren.Add }
HAnimSite825.FdChildren.Add(Shape30);
Billboard828 := TBillboardNode.Create;;
Shape829 := TShapeNode.Create;;
Text830 := TTextNode.Create;;
Text830.SetText(['1']);
FontStyle831 := TFontStyleNode.Create;;
FontStyle831.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text830.FontStyle := FontStyle831;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape829.Geometry := Text830;
{ METHOD .FdChildren.Add }
Billboard828.FdChildren.Add(Shape829);
{ METHOD .FdChildren.Add }
HAnimSite825.FdChildren.Add(Billboard828);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite825);
HAnimSite832 := THAnimSiteNode.Create;;
TouchSensor833 := TTouchSensorNode.Create;;
TouchSensor833.Description := 'HAnimSite 85 l_ectocanthus';
{ METHOD .FdChildren.Add }
HAnimSite832.FdChildren.Add(TouchSensor833);
{ METHOD .FdChildren.Add }
HAnimSite832.FdChildren.Add(Shape30);
Billboard835 := TBillboardNode.Create;;
Shape836 := TShapeNode.Create;;
Text837 := TTextNode.Create;;
Text837.SetText(['85']);
FontStyle838 := TFontStyleNode.Create;;
FontStyle838.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text837.FontStyle := FontStyle838;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape836.Geometry := Text837;
{ METHOD .FdChildren.Add }
Billboard835.FdChildren.Add(Shape836);
{ METHOD .FdChildren.Add }
HAnimSite832.FdChildren.Add(Billboard835);
end;

procedure InitHumanoid3Part66;
begin

{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite832);
HAnimSite839 := THAnimSiteNode.Create;;
HAnimSite839.Translation := Vector3(0.0341,1.6171,0.0752);
TouchSensor840 := TTouchSensorNode.Create;;
TouchSensor840.Description := 'HAnimSite 3 l_infraorbitale';
{ METHOD .FdChildren.Add }
HAnimSite839.FdChildren.Add(TouchSensor840);
{ METHOD .FdChildren.Add }
HAnimSite839.FdChildren.Add(Shape30);
Billboard842 := TBillboardNode.Create;;
Shape843 := TShapeNode.Create;;
Text844 := TTextNode.Create;;
Text844.SetText(['3']);
FontStyle845 := TFontStyleNode.Create;;
FontStyle845.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text844.FontStyle := FontStyle845;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape843.Geometry := Text844;
{ METHOD .FdChildren.Add }
Billboard842.FdChildren.Add(Shape843);
{ METHOD .FdChildren.Add }
HAnimSite839.FdChildren.Add(Billboard842);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite839);
HAnimSite846 := THAnimSiteNode.Create;;
HAnimSite846.Translation := Vector3(0.0739,1.6348,0.0282);
TouchSensor847 := TTouchSensorNode.Create;;
TouchSensor847.Description := 'HAnimSite 4 l_tragion';
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(TouchSensor847);
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(Shape30);
Billboard849 := TBillboardNode.Create;;
Shape850 := TShapeNode.Create;;
Text851 := TTextNode.Create;;
Text851.SetText(['4']);
FontStyle852 := TFontStyleNode.Create;
end;

procedure InitHumanoid3Part67;
begin
;
FontStyle852.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text851.FontStyle := FontStyle852;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape850.Geometry := Text851;
{ METHOD .FdChildren.Add }
Billboard849.FdChildren.Add(Shape850);
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(Billboard849);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite846);
HAnimSite853 := THAnimSiteNode.Create;;
HAnimSite853.Translation := Vector3(0.0039,1.5972,-0.0796);
TouchSensor854 := TTouchSensorNode.Create;;
TouchSensor854.Description := 'HAnimSite 81 nuchale';
{ METHOD .FdChildren.Add }
HAnimSite853.FdChildren.Add(TouchSensor854);
{ METHOD .FdChildren.Add }
HAnimSite853.FdChildren.Add(Shape30);
Billboard856 := TBillboardNode.Create;;
Shape857 := TShapeNode.Create;;
Text858 := TTextNode.Create;;
Text858.SetText(['81']);
FontStyle859 := TFontStyleNode.Create;;
FontStyle859.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text858.FontStyle := FontStyle859;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape857.Geometry := Text858;
{ METHOD .FdChildren.Add }
Billboard856.FdChildren.Add(Shape857);
{ METHOD .FdChildren.Add }
HAnimSite853.FdChildren.Add(Billboard856);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite853);
HAnimSite860 := THAnimSiteNode.Create;;
TouchSensor861 := TTouchSensorNode.Create;;
TouchSensor861.Description := 'HAnimSite 89 opisthocranion';
{ METHOD .FdChildren.Add }
HAnimSite860.FdChildren.Add(TouchSensor861);
{ METHOD .FdChildren.Add }
HAnimSite860.FdChildren.Add(Shape30);
Billboard863 := TBillboardNode.Create;;
Shape864 := TShapeNode.Create;
end;

procedure InitHumanoid3Part68;
begin
;
Text865 := TTextNode.Create;;
Text865.SetText(['89']);
FontStyle866 := TFontStyleNode.Create;;
FontStyle866.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text865.FontStyle := FontStyle866;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape864.Geometry := Text865;
{ METHOD .FdChildren.Add }
Billboard863.FdChildren.Add(Shape864);
{ METHOD .FdChildren.Add }
HAnimSite860.FdChildren.Add(Billboard863);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite860);
HAnimSite867 := THAnimSiteNode.Create;;
TouchSensor868 := TTouchSensorNode.Create;;
TouchSensor868.Description := 'HAnimSite 86 r_ectocanthus';
{ METHOD .FdChildren.Add }
HAnimSite867.FdChildren.Add(TouchSensor868);
{ METHOD .FdChildren.Add }
HAnimSite867.FdChildren.Add(Shape30);
Billboard870 := TBillboardNode.Create;;
Shape871 := TShapeNode.Create;;
Text872 := TTextNode.Create;;
Text872.SetText(['86']);
FontStyle873 := TFontStyleNode.Create;;
FontStyle873.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text872.FontStyle := FontStyle873;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape871.Geometry := Text872;
{ METHOD .FdChildren.Add }
Billboard870.FdChildren.Add(Shape871);
{ METHOD .FdChildren.Add }
HAnimSite867.FdChildren.Add(Billboard870);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite867);
HAnimSite874 := THAnimSiteNode.Create;;
HAnimSite874.Translation := Vector3(-0.0237,1.6171,0.0752);
TouchSensor875 := TTouchSensorNode.Create;;
TouchSensor875.Description := 'HAnimSite 6 r_infraorbitale';
end;

procedure InitHumanoid3Part69;
begin

{ METHOD .FdChildren.Add }
HAnimSite874.FdChildren.Add(TouchSensor875);
{ METHOD .FdChildren.Add }
HAnimSite874.FdChildren.Add(Shape30);
Billboard877 := TBillboardNode.Create;;
Shape878 := TShapeNode.Create;;
Text879 := TTextNode.Create;;
Text879.SetText(['6']);
FontStyle880 := TFontStyleNode.Create;;
FontStyle880.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text879.FontStyle := FontStyle880;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape878.Geometry := Text879;
{ METHOD .FdChildren.Add }
Billboard877.FdChildren.Add(Shape878);
{ METHOD .FdChildren.Add }
HAnimSite874.FdChildren.Add(Billboard877);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite874);
HAnimSite881 := THAnimSiteNode.Create;;
HAnimSite881.Translation := Vector3(-0.0646,1.6347,0.0302);
TouchSensor882 := TTouchSensorNode.Create;;
TouchSensor882.Description := 'HAnimSite 7 r_tragion';
{ METHOD .FdChildren.Add }
HAnimSite881.FdChildren.Add(TouchSensor882);
{ METHOD .FdChildren.Add }
HAnimSite881.FdChildren.Add(Shape30);
Billboard884 := TBillboardNode.Create;;
Shape885 := TShapeNode.Create;;
Text886 := TTextNode.Create;;
Text886.SetText(['7']);
FontStyle887 := TFontStyleNode.Create;;
FontStyle887.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text886.FontStyle := FontStyle887;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape885.Geometry := Text886;
{ METHOD .FdChildren.Add }
Billboard884.FdChildren.Add(Shape885);
{ METHOD .FdChildren.Add }
HAnimSite881.FdChildren.Add(Billboard884);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite881);
end;

procedure InitHumanoid3Part70;
begin

HAnimSite888 := THAnimSiteNode.Create;;
HAnimSite888.Translation := Vector3(0.0058,1.6316,0.0852);
TouchSensor889 := TTouchSensorNode.Create;;
TouchSensor889.Description := 'HAnimSite 2 sellion';
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(TouchSensor889);
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(Shape30);
Billboard891 := TBillboardNode.Create;;
Shape892 := TShapeNode.Create;;
Text893 := TTextNode.Create;;
Text893.SetText(['2']);
FontStyle894 := TFontStyleNode.Create;;
FontStyle894.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text893.FontStyle := FontStyle894;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape892.Geometry := Text893;
{ METHOD .FdChildren.Add }
Billboard891.FdChildren.Add(Shape892);
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(Billboard891);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite888);
HAnimSite895 := THAnimSiteNode.Create;;
HAnimSite895.Translation := Vector3(0.005,1.7504,0.0055);
TouchSensor896 := TTouchSensorNode.Create;;
TouchSensor896.Description := 'HAnimSite 0 skull_vertex';
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(TouchSensor896);
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(Shape30);
Billboard898 := TBillboardNode.Create;;
Shape899 := TShapeNode.Create;;
Text900 := TTextNode.Create;;
Text900.SetText(['0']);
FontStyle901 := TFontStyleNode.Create;;
end;

procedure InitHumanoid3Part71;
begin

FontStyle901.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text900.FontStyle := FontStyle901;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape899.Geometry := Text900;
{ METHOD .FdChildren.Add }
Billboard898.FdChildren.Add(Shape899);
{ METHOD .FdChildren.Add }
HAnimSite895.FdChildren.Add(Billboard898);
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(HAnimSite895);
Shape902 := TShapeNode.Create;;
LineSet903 := TLineSetNode.Create;;
LineSet903.SetVertexCount([2]);
Coordinate904 := TCoordinateNode.Create;;
Coordinate904.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0507,1.4157,-0.0689)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet903.Coord := Coordinate904;
{ from skullbase to r_eyelid_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet903.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape902.Geometry := LineSet903;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape902);
Shape906 := TShapeNode.Create;;
LineSet907 := TLineSetNode.Create;;
LineSet907.SetVertexCount([2]);
Coordinate908 := TCoordinateNode.Create;;
Coordinate908.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0479,1.3963,-0.0188)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet907.Coord := Coordinate908;
{ from skullbase to l_eyeball_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet907.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape906.Geometry := LineSet907;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape906);
Shape910 := TShapeNode.Create;;
LineSet911 := TLineSetNode.Create;;
LineSet911.SetVertexCount([2]);
Coordinate912 := TCoordinateNode.Create;;
Coordinate912.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0483,1.3963,-0.0188)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet911.Coord := Coordinate912;
{ from skullbase to r_eyeball_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet911.Color := ColorRGBA27;
end;

procedure InitHumanoid3Part72;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape910.Geometry := LineSet911;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape910);
Shape914 := TShapeNode.Create;;
LineSet915 := TLineSetNode.Create;;
LineSet915.SetVertexCount([2]);
Coordinate916 := TCoordinateNode.Create;;
Coordinate916.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0216,1.4053,0.0051)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet915.Coord := Coordinate916;
{ from skullbase to l_eyebrow_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet915.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape914.Geometry := LineSet915;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape914);
Shape918 := TShapeNode.Create;;
LineSet919 := TLineSetNode.Create;;
LineSet919.SetVertexCount([2]);
Coordinate920 := TCoordinateNode.Create;;
Coordinate920.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0219,1.4053,0.0051)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet919.Coord := Coordinate920;
{ from skullbase to r_eyebrow_joint vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet919.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape918.Geometry := LineSet919;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape918);
Shape922 := TShapeNode.Create;;
LineSet923 := TLineSetNode.Create;;
LineSet923.SetVertexCount([2]);
Coordinate924 := TCoordinateNode.Create;;
Coordinate924.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0002,1.3043,-0.0865)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet923.Coord := Coordinate924;
{ from skullbase to temporomandibular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet923.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape922.Geometry := LineSet923;
{ METHOD .FdChildren.Add }
HAnimSegment817.FdChildren.Add(Shape922);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimSegment817);
HAnimJoint926 := THAnimJointNode.Create;
end;

procedure InitHumanoid3Part73;
begin
;
HAnimJoint926.Center := Vector3(0.0503,1.4157,-0.0689);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint926);
HAnimJoint927 := THAnimJointNode.Create;;
HAnimJoint927.Center := Vector3(-0.0507,1.4157,-0.0689);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint927);
HAnimJoint928 := THAnimJointNode.Create;;
HAnimJoint928.Center := Vector3(0.0479,1.3963,-0.0188);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint928);
HAnimJoint929 := THAnimJointNode.Create;;
HAnimJoint929.Center := Vector3(-0.0483,1.3963,-0.0188);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint929);
HAnimJoint930 := THAnimJointNode.Create;;
HAnimJoint930.Center := Vector3(0.0216,1.4053,0.0051);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint930);
HAnimJoint931 := THAnimJointNode.Create;;
HAnimJoint931.Center := Vector3(-0.0219,1.4053,0.0051);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint931);
HAnimJoint932 := THAnimJointNode.Create;;
HAnimJoint932.Center := Vector3(-0.0002,1.3043,-0.0865);
{ METHOD .FdChildren.Add }
HAnimJoint816.FdChildren.Add(HAnimJoint932);
{ METHOD .FdChildren.Add }
HAnimJoint807.FdChildren.Add(HAnimJoint816);
{ METHOD .FdChildren.Add }
HAnimJoint791.FdChildren.Add(HAnimJoint807);
{ METHOD .FdChildren.Add }
HAnimJoint782.FdChildren.Add(HAnimJoint791);
{ METHOD .FdChildren.Add }
HAnimJoint773.FdChildren.Add(HAnimJoint782);
{ METHOD .FdChildren.Add }
HAnimJoint764.FdChildren.Add(HAnimJoint773);
{ METHOD .FdChildren.Add }
HAnimJoint755.FdChildren.Add(HAnimJoint764);
{ METHOD .FdChildren.Add }
HAnimJoint732.FdChildren.Add(HAnimJoint755);
{ METHOD .FdChildren.Add }
HAnimJoint701.FdChildren.Add(HAnimJoint732);
HAnimJoint933 := THAnimJointNode.Create;;
HAnimJoint933.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment934 := THAnimSegmentNode.Create;;
end;

procedure InitHumanoid3Part74;
begin

Transform935 := TTransformNode.Create;;
Transform935.Translation := Vector3(0.082,1.4488,-0.0353);
Transform936 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform936.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform935.FdChildren.Add(Transform936);
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(Transform935);
Shape938 := TShapeNode.Create;;
LineSet939 := TLineSetNode.Create;;
LineSet939.SetVertexCount([2]);
Coordinate940 := TCoordinateNode.Create;;
Coordinate940.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet939.Coord := Coordinate940;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet939.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape938.Geometry := LineSet939;
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(Shape938);
HAnimSite942 := THAnimSiteNode.Create;;
HAnimSite942.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor943 := TTouchSensorNode.Create;;
TouchSensor943.Description := 'HAnimSite 15 l_acromion';
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(TouchSensor943);
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(Shape30);
Billboard945 := TBillboardNode.Create;;
Shape946 := TShapeNode.Create;;
Text947 := TTextNode.Create;;
Text947.SetText(['15']);
FontStyle948 := TFontStyleNode.Create;;
FontStyle948.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text947.FontStyle := FontStyle948;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape946.Geometry := Text947;
end;

procedure InitHumanoid3Part75;
begin

{ METHOD .FdChildren.Add }
Billboard945.FdChildren.Add(Shape946);
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(Billboard945);
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(HAnimSite942);
HAnimSite949 := THAnimSiteNode.Create;;
HAnimSite949.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor950 := TTouchSensorNode.Create;;
TouchSensor950.Description := 'HAnimSite 17 l_axilla_distal';
{ METHOD .FdChildren.Add }
HAnimSite949.FdChildren.Add(TouchSensor950);
{ METHOD .FdChildren.Add }
HAnimSite949.FdChildren.Add(Shape30);
Billboard952 := TBillboardNode.Create;;
Shape953 := TShapeNode.Create;;
Text954 := TTextNode.Create;;
Text954.SetText(['17']);
FontStyle955 := TFontStyleNode.Create;;
FontStyle955.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text954.FontStyle := FontStyle955;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape953.Geometry := Text954;
{ METHOD .FdChildren.Add }
Billboard952.FdChildren.Add(Shape953);
{ METHOD .FdChildren.Add }
HAnimSite949.FdChildren.Add(Billboard952);
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(HAnimSite949);
HAnimSite956 := THAnimSiteNode.Create;;
TouchSensor957 := TTouchSensorNode.Create;;
TouchSensor957.Description := 'HAnimSite 18 l_axilla_posterior_folds';
{ METHOD .FdChildren.Add }
HAnimSite956.FdChildren.Add(TouchSensor957);
{ METHOD .FdChildren.Add }
HAnimSite956.FdChildren.Add(Shape30);
Billboard959 := TBillboardNode.Create;;
Shape960 := TShapeNode.Create;;
Text961 := TTextNode.Create;;
Text961.SetText(['18']);
end;

procedure InitHumanoid3Part76;
begin

FontStyle962 := TFontStyleNode.Create;;
FontStyle962.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text961.FontStyle := FontStyle962;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape960.Geometry := Text961;
{ METHOD .FdChildren.Add }
Billboard959.FdChildren.Add(Shape960);
{ METHOD .FdChildren.Add }
HAnimSite956.FdChildren.Add(Billboard959);
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(HAnimSite956);
HAnimSite963 := THAnimSiteNode.Create;;
HAnimSite963.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor964 := TTouchSensorNode.Create;;
TouchSensor964.Description := 'HAnimSite 16 l_axilla_proximal';
{ METHOD .FdChildren.Add }
HAnimSite963.FdChildren.Add(TouchSensor964);
{ METHOD .FdChildren.Add }
HAnimSite963.FdChildren.Add(Shape30);
Billboard966 := TBillboardNode.Create;;
Shape967 := TShapeNode.Create;;
Text968 := TTextNode.Create;;
Text968.SetText(['16']);
FontStyle969 := TFontStyleNode.Create;;
FontStyle969.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text968.FontStyle := FontStyle969;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape967.Geometry := Text968;
{ METHOD .FdChildren.Add }
Billboard966.FdChildren.Add(Shape967);
{ METHOD .FdChildren.Add }
HAnimSite963.FdChildren.Add(Billboard966);
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(HAnimSite963);
HAnimSite970 := THAnimSiteNode.Create;;
HAnimSite970.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor971 := TTouchSensorNode.Create;;
TouchSensor971.Description := 'HAnimSite 14 l_clavicale';
{ METHOD .FdChildren.Add }
HAnimSite970.FdChildren.Add(TouchSensor971);
{ METHOD .FdChildren.Add }
HAnimSite970.FdChildren.Add(Shape30);
Billboard973 := TBillboardNode.Create;
end;

procedure InitHumanoid3Part77;
begin
;
Shape974 := TShapeNode.Create;;
Text975 := TTextNode.Create;;
Text975.SetText(['14']);
FontStyle976 := TFontStyleNode.Create;;
FontStyle976.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text975.FontStyle := FontStyle976;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape974.Geometry := Text975;
{ METHOD .FdChildren.Add }
Billboard973.FdChildren.Add(Shape974);
{ METHOD .FdChildren.Add }
HAnimSite970.FdChildren.Add(Billboard973);
{ METHOD .FdChildren.Add }
HAnimSegment934.FdChildren.Add(HAnimSite970);
{ METHOD .FdChildren.Add }
HAnimJoint933.FdChildren.Add(HAnimSegment934);
HAnimJoint977 := THAnimJointNode.Create;;
HAnimJoint977.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment978 := THAnimSegmentNode.Create;;
Transform979 := TTransformNode.Create;;
Transform979.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform980 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform980.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform979.FdChildren.Add(Transform980);
{ METHOD .FdChildren.Add }
HAnimSegment978.FdChildren.Add(Transform979);
Shape982 := TShapeNode.Create;;
LineSet983 := TLineSetNode.Create;;
LineSet983.SetVertexCount([2]);
Coordinate984 := TCoordinateNode.Create;;
Coordinate984.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet983.Coord := Coordinate984;
{ from l_acromioclavicular to l_shoulder vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet983.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape982.Geometry := LineSet983;
{ METHOD .FdChildren.Add }
HAnimSegment978.FdChildren.Add(Shape982);
end;

procedure InitHumanoid3Part78;
begin

{ METHOD .FdChildren.Add }
HAnimJoint977.FdChildren.Add(HAnimSegment978);
HAnimJoint986 := THAnimJointNode.Create;;
HAnimJoint986.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment987 := THAnimSegmentNode.Create;;
Transform988 := TTransformNode.Create;;
Transform988.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform989 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform989.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform988.FdChildren.Add(Transform989);
{ METHOD .FdChildren.Add }
HAnimSegment987.FdChildren.Add(Transform988);
Shape991 := TShapeNode.Create;;
LineSet992 := TLineSetNode.Create;;
LineSet992.SetVertexCount([2]);
Coordinate993 := TCoordinateNode.Create;;
Coordinate993.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet992.Coord := Coordinate993;
{ from l_shoulder to l_elbow vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet992.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape991.Geometry := LineSet992;
{ METHOD .FdChildren.Add }
HAnimSegment987.FdChildren.Add(Shape991);
HAnimSite995 := THAnimSiteNode.Create;;
TouchSensor996 := TTouchSensorNode.Create;;
TouchSensor996.Description := 'HAnimSite 96 l_bideltoid';
{ METHOD .FdChildren.Add }
HAnimSite995.FdChildren.Add(TouchSensor996);
{ METHOD .FdChildren.Add }
HAnimSite995.FdChildren.Add(Shape30);
Billboard998 := TBillboardNode.Create;;
Shape999 := TShapeNode.Create;;
Text1000 := TTextNode.Create;;
Text1000.SetText(['96']);
end;

procedure InitHumanoid3Part79;
begin

FontStyle1001 := TFontStyleNode.Create;;
FontStyle1001.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1000.FontStyle := FontStyle1001;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape999.Geometry := Text1000;
{ METHOD .FdChildren.Add }
Billboard998.FdChildren.Add(Shape999);
{ METHOD .FdChildren.Add }
HAnimSite995.FdChildren.Add(Billboard998);
{ METHOD .FdChildren.Add }
HAnimSegment987.FdChildren.Add(HAnimSite995);
HAnimSite1002 := THAnimSiteNode.Create;;
HAnimSite1002.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor1003 := TTouchSensorNode.Create;;
TouchSensor1003.Description := 'HAnimSite 63 l_humeral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite1002.FdChildren.Add(TouchSensor1003);
{ METHOD .FdChildren.Add }
HAnimSite1002.FdChildren.Add(Shape30);
Billboard1005 := TBillboardNode.Create;;
Shape1006 := TShapeNode.Create;;
Text1007 := TTextNode.Create;;
Text1007.SetText(['63']);
FontStyle1008 := TFontStyleNode.Create;;
FontStyle1008.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1007.FontStyle := FontStyle1008;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1006.Geometry := Text1007;
{ METHOD .FdChildren.Add }
Billboard1005.FdChildren.Add(Shape1006);
{ METHOD .FdChildren.Add }
HAnimSite1002.FdChildren.Add(Billboard1005);
{ METHOD .FdChildren.Add }
HAnimSegment987.FdChildren.Add(HAnimSite1002);
{ METHOD .FdChildren.Add }
HAnimJoint986.FdChildren.Add(HAnimSegment987);
HAnimJoint1009 := THAnimJointNode.Create;;
HAnimJoint1009.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment1010 := THAnimSegmentNode.Create;;
Transform1011 := TTransformNode.Create;;
Transform1011.Translation := Vector3(0.2014,1.1357,-0.0682);
end;

procedure InitHumanoid3Part80;
begin

Transform1012 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1012.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1011.FdChildren.Add(Transform1012);
{ METHOD .FdChildren.Add }
HAnimSegment1010.FdChildren.Add(Transform1011);
Shape1014 := TShapeNode.Create;;
LineSet1015 := TLineSetNode.Create;;
LineSet1015.SetVertexCount([2]);
Coordinate1016 := TCoordinateNode.Create;;
Coordinate1016.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1015.Coord := Coordinate1016;
{ from l_elbow to l_radiocarpal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1015.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1014.Geometry := LineSet1015;
{ METHOD .FdChildren.Add }
HAnimSegment1010.FdChildren.Add(Shape1014);
HAnimSite1018 := THAnimSiteNode.Create;;
HAnimSite1018.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor1019 := TTouchSensorNode.Create;;
TouchSensor1019.Description := 'HAnimSite 64 l_humeral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite1018.FdChildren.Add(TouchSensor1019);
{ METHOD .FdChildren.Add }
HAnimSite1018.FdChildren.Add(Shape30);
Billboard1021 := TBillboardNode.Create;;
Shape1022 := TShapeNode.Create;;
Text1023 := TTextNode.Create;;
Text1023.SetText(['64']);
FontStyle1024 := TFontStyleNode.Create;;
FontStyle1024.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1023.FontStyle := FontStyle1024;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1022.Geometry := Text1023;
{ METHOD .FdChildren.Add }
Billboard1021.FdChildren.Add(Shape1022);
{ METHOD .FdChildren.Add }
HAnimSite1018.FdChildren.Add(Billboard1021);
{ METHOD .FdChildren.Add }
HAnimSegment1010.FdChildren.Add(HAnimSite1018);
end;

procedure InitHumanoid3Part81;
begin

HAnimSite1025 := THAnimSiteNode.Create;;
HAnimSite1025.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor1026 := TTouchSensorNode.Create;;
TouchSensor1026.Description := 'HAnimSite 65 l_olecranon';
{ METHOD .FdChildren.Add }
HAnimSite1025.FdChildren.Add(TouchSensor1026);
{ METHOD .FdChildren.Add }
HAnimSite1025.FdChildren.Add(Shape30);
Billboard1028 := TBillboardNode.Create;;
Shape1029 := TShapeNode.Create;;
Text1030 := TTextNode.Create;;
Text1030.SetText(['65']);
FontStyle1031 := TFontStyleNode.Create;;
FontStyle1031.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1030.FontStyle := FontStyle1031;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1029.Geometry := Text1030;
{ METHOD .FdChildren.Add }
Billboard1028.FdChildren.Add(Shape1029);
{ METHOD .FdChildren.Add }
HAnimSite1025.FdChildren.Add(Billboard1028);
{ METHOD .FdChildren.Add }
HAnimSegment1010.FdChildren.Add(HAnimSite1025);
HAnimSite1032 := THAnimSiteNode.Create;;
HAnimSite1032.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor1033 := TTouchSensorNode.Create;;
TouchSensor1033.Description := 'HAnimSite 71 l_radial_styloid';
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(TouchSensor1033);
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Shape30);
Billboard1035 := TBillboardNode.Create;;
Shape1036 := TShapeNode.Create;;
Text1037 := TTextNode.Create;;
Text1037.SetText(['71']);
FontStyle1038 := TFontStyleNode.Create;;
end;

procedure InitHumanoid3Part82;
begin

FontStyle1038.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1037.FontStyle := FontStyle1038;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1036.Geometry := Text1037;
{ METHOD .FdChildren.Add }
Billboard1035.FdChildren.Add(Shape1036);
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Billboard1035);
{ METHOD .FdChildren.Add }
HAnimSegment1010.FdChildren.Add(HAnimSite1032);
HAnimSite1039 := THAnimSiteNode.Create;;
HAnimSite1039.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor1040 := TTouchSensorNode.Create;;
TouchSensor1040.Description := 'HAnimSite 69 l_radiale';
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(TouchSensor1040);
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(Shape30);
Billboard1042 := TBillboardNode.Create;;
Shape1043 := TShapeNode.Create;;
Text1044 := TTextNode.Create;;
Text1044.SetText(['69']);
FontStyle1045 := TFontStyleNode.Create;;
FontStyle1045.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1044.FontStyle := FontStyle1045;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1043.Geometry := Text1044;
{ METHOD .FdChildren.Add }
Billboard1042.FdChildren.Add(Shape1043);
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(Billboard1042);
{ METHOD .FdChildren.Add }
HAnimSegment1010.FdChildren.Add(HAnimSite1039);
{ METHOD .FdChildren.Add }
HAnimJoint1009.FdChildren.Add(HAnimSegment1010);
HAnimJoint1046 := THAnimJointNode.Create;;
HAnimJoint1046.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment1047 := THAnimSegmentNode.Create;;
Transform1048 := TTransformNode.Create;;
Transform1048.Scale := Vector3(0.2,0.2,0.2);
Transform1048.Translation := Vector3(0.2,0.85,-0.05);
Transform1048.Rotation := Vector4(0,0,1,-3.14);
end;

procedure InitHumanoid3Part83;
begin

{ Transform left hand }
Transform1049 := TTransformNode.Create;;
Transform1049.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
{ METHOD .FdChildren.Add }
Transform1049.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1048.FdChildren.Add(Transform1049);
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Transform1048);
Shape1051 := TShapeNode.Create;;
LineSet1052 := TLineSetNode.Create;;
LineSet1052.SetVertexCount([2]);
Coordinate1053 := TCoordinateNode.Create;;
Coordinate1053.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1052.Coord := Coordinate1053;
{ from l_radiocarpal to l_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1052.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1051.Geometry := LineSet1052;
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Shape1051);
HAnimSite1055 := THAnimSiteNode.Create;;
HAnimSite1055.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor1056 := TTouchSensorNode.Create;;
TouchSensor1056.Description := 'HAnimSite 70 l_ulnar_styloid';
{ METHOD .FdChildren.Add }
HAnimSite1055.FdChildren.Add(TouchSensor1056);
{ METHOD .FdChildren.Add }
HAnimSite1055.FdChildren.Add(Shape30);
Billboard1058 := TBillboardNode.Create;;
Shape1059 := TShapeNode.Create;;
Text1060 := TTextNode.Create;;
Text1060.SetText(['70']);
FontStyle1061 := TFontStyleNode.Create;;
FontStyle1061.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1060.FontStyle := FontStyle1061;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1059.Geometry := Text1060;
{ METHOD .FdChildren.Add }
Billboard1058.FdChildren.Add(Shape1059);
{ METHOD .FdChildren.Add }
HAnimSite1055.FdChildren.Add(Billboard1058);
end;

procedure InitHumanoid3Part84;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(HAnimSite1055);
Shape1062 := TShapeNode.Create;;
LineSet1063 := TLineSetNode.Create;;
LineSet1063.SetVertexCount([2]);
Coordinate1064 := TCoordinateNode.Create;;
Coordinate1064.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1063.Coord := Coordinate1064;
{ from l_radiocarpal to l_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1063.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1062.Geometry := LineSet1063;
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Shape1062);
Shape1066 := TShapeNode.Create;;
LineSet1067 := TLineSetNode.Create;;
LineSet1067.SetVertexCount([2]);
Coordinate1068 := TCoordinateNode.Create;;
Coordinate1068.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1067.Coord := Coordinate1068;
{ from l_radiocarpal to l_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1067.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1066.Geometry := LineSet1067;
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Shape1066);
Shape1070 := TShapeNode.Create;;
LineSet1071 := TLineSetNode.Create;;
LineSet1071.SetVertexCount([2]);
Coordinate1072 := TCoordinateNode.Create;;
Coordinate1072.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1071.Coord := Coordinate1072;
{ from l_radiocarpal to l_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1071.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1070.Geometry := LineSet1071;
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Shape1070);
Shape1074 := TShapeNode.Create;;
LineSet1075 := TLineSetNode.Create;
end;

procedure InitHumanoid3Part85;
begin
;
LineSet1075.SetVertexCount([2]);
Coordinate1076 := TCoordinateNode.Create;;
Coordinate1076.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1075.Coord := Coordinate1076;
{ from l_radiocarpal to l_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1075.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1074.Geometry := LineSet1075;
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Shape1074);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimSegment1047);
HAnimJoint1078 := THAnimJointNode.Create;;
HAnimJoint1078.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1079 := THAnimSegmentNode.Create;;
Transform1080 := TTransformNode.Create;;
Transform1080.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform1081 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1081.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1080.FdChildren.Add(Transform1081);
{ METHOD .FdChildren.Add }
HAnimSegment1079.FdChildren.Add(Transform1080);
Shape1083 := TShapeNode.Create;;
LineSet1084 := TLineSetNode.Create;;
LineSet1084.SetVertexCount([2]);
Coordinate1085 := TCoordinateNode.Create;;
Coordinate1085.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1084.Coord := Coordinate1085;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1084.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1083.Geometry := LineSet1084;
{ METHOD .FdChildren.Add }
HAnimSegment1079.FdChildren.Add(Shape1083);
{ METHOD .FdChildren.Add }
HAnimJoint1078.FdChildren.Add(HAnimSegment1079);
HAnimJoint1087 := THAnimJointNode.Create;;
HAnimJoint1087.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1088 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid3Part86;
begin
;
Transform1089 := TTransformNode.Create;;
Transform1089.Translation := Vector3(0.1951,0.8226,0.0246);
Transform1090 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1090.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1089.FdChildren.Add(Transform1090);
{ METHOD .FdChildren.Add }
HAnimSegment1088.FdChildren.Add(Transform1089);
Shape1092 := TShapeNode.Create;;
LineSet1093 := TLineSetNode.Create;;
LineSet1093.SetVertexCount([2]);
Coordinate1094 := TCoordinateNode.Create;;
Coordinate1094.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1093.Coord := Coordinate1094;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1093.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1092.Geometry := LineSet1093;
{ METHOD .FdChildren.Add }
HAnimSegment1088.FdChildren.Add(Shape1092);
{ METHOD .FdChildren.Add }
HAnimJoint1087.FdChildren.Add(HAnimSegment1088);
HAnimJoint1096 := THAnimJointNode.Create;;
HAnimJoint1096.Center := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
HAnimJoint1087.FdChildren.Add(HAnimJoint1096);
{ METHOD .FdChildren.Add }
HAnimJoint1078.FdChildren.Add(HAnimJoint1087);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimJoint1078);
HAnimJoint1097 := THAnimJointNode.Create;;
HAnimJoint1097.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1098 := THAnimSegmentNode.Create;;
Transform1099 := TTransformNode.Create;;
Transform1099.Translation := Vector3(0.1983,0.8024,-0.028);
Transform1100 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1100.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1099.FdChildren.Add(Transform1100);
end;

procedure InitHumanoid3Part87;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1098.FdChildren.Add(Transform1099);
Shape1102 := TShapeNode.Create;;
LineSet1103 := TLineSetNode.Create;;
LineSet1103.SetVertexCount([2]);
Coordinate1104 := TCoordinateNode.Create;;
Coordinate1104.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1103.Coord := Coordinate1104;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1103.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1102.Geometry := LineSet1103;
{ METHOD .FdChildren.Add }
HAnimSegment1098.FdChildren.Add(Shape1102);
HAnimSite1106 := THAnimSiteNode.Create;;
HAnimSite1106.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor1107 := TTouchSensorNode.Create;;
TouchSensor1107.Description := 'HAnimSite 75 l_metacarpal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSite1106.FdChildren.Add(TouchSensor1107);
{ METHOD .FdChildren.Add }
HAnimSite1106.FdChildren.Add(Shape30);
Billboard1109 := TBillboardNode.Create;;
Shape1110 := TShapeNode.Create;;
Text1111 := TTextNode.Create;;
Text1111.SetText(['75']);
FontStyle1112 := TFontStyleNode.Create;;
FontStyle1112.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1111.FontStyle := FontStyle1112;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1110.Geometry := Text1111;
{ METHOD .FdChildren.Add }
Billboard1109.FdChildren.Add(Shape1110);
{ METHOD .FdChildren.Add }
HAnimSite1106.FdChildren.Add(Billboard1109);
{ METHOD .FdChildren.Add }
HAnimSegment1098.FdChildren.Add(HAnimSite1106);
{ METHOD .FdChildren.Add }
HAnimJoint1097.FdChildren.Add(HAnimSegment1098);
HAnimJoint1113 := THAnimJointNode.Create;;
HAnimJoint1113.Center := Vector3(0.1983,0.7815,-0.028);
end;

procedure InitHumanoid3Part88;
begin

HAnimSegment1114 := THAnimSegmentNode.Create;;
Transform1115 := TTransformNode.Create;;
Transform1115.Translation := Vector3(0.1983,0.7815,-0.028);
Transform1116 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1116.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1115.FdChildren.Add(Transform1116);
{ METHOD .FdChildren.Add }
HAnimSegment1114.FdChildren.Add(Transform1115);
Shape1118 := TShapeNode.Create;;
LineSet1119 := TLineSetNode.Create;;
LineSet1119.SetVertexCount([2]);
Coordinate1120 := TCoordinateNode.Create;;
Coordinate1120.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1119.Coord := Coordinate1120;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1119.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1118.Geometry := LineSet1119;
{ METHOD .FdChildren.Add }
HAnimSegment1114.FdChildren.Add(Shape1118);
{ METHOD .FdChildren.Add }
HAnimJoint1113.FdChildren.Add(HAnimSegment1114);
HAnimJoint1122 := THAnimJointNode.Create;;
HAnimJoint1122.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1123 := THAnimSegmentNode.Create;;
Transform1124 := TTransformNode.Create;;
Transform1124.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform1125 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1125.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1124.FdChildren.Add(Transform1125);
{ METHOD .FdChildren.Add }
HAnimSegment1123.FdChildren.Add(Transform1124);
Shape1127 := TShapeNode.Create;;
LineSet1128 := TLineSetNode.Create;;
end;

procedure InitHumanoid3Part89;
begin

LineSet1128.SetVertexCount([2]);
Coordinate1129 := TCoordinateNode.Create;;
Coordinate1129.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1128.Coord := Coordinate1129;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1128.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1127.Geometry := LineSet1128;
{ METHOD .FdChildren.Add }
HAnimSegment1123.FdChildren.Add(Shape1127);
{ METHOD .FdChildren.Add }
HAnimJoint1122.FdChildren.Add(HAnimSegment1123);
HAnimJoint1131 := THAnimJointNode.Create;;
HAnimJoint1131.Center := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint1122.FdChildren.Add(HAnimJoint1131);
{ METHOD .FdChildren.Add }
HAnimJoint1113.FdChildren.Add(HAnimJoint1122);
{ METHOD .FdChildren.Add }
HAnimJoint1097.FdChildren.Add(HAnimJoint1113);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimJoint1097);
HAnimJoint1132 := THAnimJointNode.Create;;
HAnimJoint1132.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1133 := THAnimSegmentNode.Create;;
Transform1134 := TTransformNode.Create;;
Transform1134.Translation := Vector3(0.1987,0.8029,-0.053);
Transform1135 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1135.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1134.FdChildren.Add(Transform1135);
{ METHOD .FdChildren.Add }
HAnimSegment1133.FdChildren.Add(Transform1134);
Shape1137 := TShapeNode.Create;;
LineSet1138 := TLineSetNode.Create;;
LineSet1138.SetVertexCount([2]);
Coordinate1139 := TCoordinateNode.Create;;
Coordinate1139.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1138.Coord := Coordinate1139;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1138.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1137.Geometry := LineSet1138;
end;

procedure InitHumanoid3Part90;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1133.FdChildren.Add(Shape1137);
HAnimSite1141 := THAnimSiteNode.Create;;
TouchSensor1142 := TTouchSensorNode.Create;;
TouchSensor1142.Description := 'HAnimSite 76 l_metacarpal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSite1141.FdChildren.Add(TouchSensor1142);
{ METHOD .FdChildren.Add }
HAnimSite1141.FdChildren.Add(Shape30);
Billboard1144 := TBillboardNode.Create;;
Shape1145 := TShapeNode.Create;;
Text1146 := TTextNode.Create;;
Text1146.SetText(['76']);
FontStyle1147 := TFontStyleNode.Create;;
FontStyle1147.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1146.FontStyle := FontStyle1147;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1145.Geometry := Text1146;
{ METHOD .FdChildren.Add }
Billboard1144.FdChildren.Add(Shape1145);
{ METHOD .FdChildren.Add }
HAnimSite1141.FdChildren.Add(Billboard1144);
{ METHOD .FdChildren.Add }
HAnimSegment1133.FdChildren.Add(HAnimSite1141);
{ METHOD .FdChildren.Add }
HAnimJoint1132.FdChildren.Add(HAnimSegment1133);
HAnimJoint1148 := THAnimJointNode.Create;;
HAnimJoint1148.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1149 := THAnimSegmentNode.Create;;
Transform1150 := TTransformNode.Create;;
Transform1150.Translation := Vector3(0.1987,0.7818,-0.053);
Transform1151 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1151.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1150.FdChildren.Add(Transform1151);
{ METHOD .FdChildren.Add }
HAnimSegment1149.FdChildren.Add(Transform1150);
Shape1153 := TShapeNode.Create;;
LineSet1154 := TLineSetNode.Create;
end;

procedure InitHumanoid3Part91;
begin
;
LineSet1154.SetVertexCount([2]);
Coordinate1155 := TCoordinateNode.Create;;
Coordinate1155.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1154.Coord := Coordinate1155;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1154.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1153.Geometry := LineSet1154;
{ METHOD .FdChildren.Add }
HAnimSegment1149.FdChildren.Add(Shape1153);
{ METHOD .FdChildren.Add }
HAnimJoint1148.FdChildren.Add(HAnimSegment1149);
HAnimJoint1157 := THAnimJointNode.Create;;
HAnimJoint1157.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1158 := THAnimSegmentNode.Create;;
Transform1159 := TTransformNode.Create;;
Transform1159.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform1160 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1160.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1159.FdChildren.Add(Transform1160);
{ METHOD .FdChildren.Add }
HAnimSegment1158.FdChildren.Add(Transform1159);
Shape1162 := TShapeNode.Create;;
LineSet1163 := TLineSetNode.Create;;
LineSet1163.SetVertexCount([2]);
Coordinate1164 := TCoordinateNode.Create;;
Coordinate1164.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1163.Coord := Coordinate1164;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1163.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1162.Geometry := LineSet1163;
{ METHOD .FdChildren.Add }
HAnimSegment1158.FdChildren.Add(Shape1162);
{ METHOD .FdChildren.Add }
HAnimJoint1157.FdChildren.Add(HAnimSegment1158);
HAnimJoint1166 := THAnimJointNode.Create;;
HAnimJoint1166.Center := Vector3(0.2026,0.7011,-0.0494);
{ METHOD .FdChildren.Add }
HAnimJoint1157.FdChildren.Add(HAnimJoint1166);
end;

procedure InitHumanoid3Part92;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1148.FdChildren.Add(HAnimJoint1157);
{ METHOD .FdChildren.Add }
HAnimJoint1132.FdChildren.Add(HAnimJoint1148);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimJoint1132);
HAnimJoint1167 := THAnimJointNode.Create;;
HAnimJoint1167.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1168 := THAnimSegmentNode.Create;;
Transform1169 := TTransformNode.Create;;
Transform1169.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform1170 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1170.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1169.FdChildren.Add(Transform1170);
{ METHOD .FdChildren.Add }
HAnimSegment1168.FdChildren.Add(Transform1169);
Shape1172 := TShapeNode.Create;;
LineSet1173 := TLineSetNode.Create;;
LineSet1173.SetVertexCount([2]);
Coordinate1174 := TCoordinateNode.Create;;
Coordinate1174.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1173.Coord := Coordinate1174;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1173.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1172.Geometry := LineSet1173;
{ METHOD .FdChildren.Add }
HAnimSegment1168.FdChildren.Add(Shape1172);
{ METHOD .FdChildren.Add }
HAnimJoint1167.FdChildren.Add(HAnimSegment1168);
HAnimJoint1176 := THAnimJointNode.Create;;
HAnimJoint1176.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1177 := THAnimSegmentNode.Create;;
Transform1178 := TTransformNode.Create;;
Transform1178.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform1179 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1179.FdChildren.Add(Shape20);
end;

procedure InitHumanoid3Part93;
begin

{ METHOD .FdChildren.Add }
Transform1178.FdChildren.Add(Transform1179);
{ METHOD .FdChildren.Add }
HAnimSegment1177.FdChildren.Add(Transform1178);
Shape1181 := TShapeNode.Create;;
LineSet1182 := TLineSetNode.Create;;
LineSet1182.SetVertexCount([2]);
Coordinate1183 := TCoordinateNode.Create;;
Coordinate1183.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1182.Coord := Coordinate1183;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1182.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1181.Geometry := LineSet1182;
{ METHOD .FdChildren.Add }
HAnimSegment1177.FdChildren.Add(Shape1181);
{ METHOD .FdChildren.Add }
HAnimJoint1176.FdChildren.Add(HAnimSegment1177);
HAnimJoint1185 := THAnimJointNode.Create;;
HAnimJoint1185.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1186 := THAnimSegmentNode.Create;;
Transform1187 := TTransformNode.Create;;
Transform1187.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform1188 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1188.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1187.FdChildren.Add(Transform1188);
{ METHOD .FdChildren.Add }
HAnimSegment1186.FdChildren.Add(Transform1187);
Shape1190 := TShapeNode.Create;;
LineSet1191 := TLineSetNode.Create;;
LineSet1191.SetVertexCount([2]);
Coordinate1192 := TCoordinateNode.Create;;
Coordinate1192.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1191.Coord := Coordinate1192;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1191.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1190.Geometry := LineSet1191;
{ METHOD .FdChildren.Add }
HAnimSegment1186.FdChildren.Add(Shape1190);
end;

procedure InitHumanoid3Part94;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1185.FdChildren.Add(HAnimSegment1186);
HAnimJoint1194 := THAnimJointNode.Create;;
HAnimJoint1194.Center := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
HAnimJoint1185.FdChildren.Add(HAnimJoint1194);
{ METHOD .FdChildren.Add }
HAnimJoint1176.FdChildren.Add(HAnimJoint1185);
{ METHOD .FdChildren.Add }
HAnimJoint1167.FdChildren.Add(HAnimJoint1176);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimJoint1167);
HAnimJoint1195 := THAnimJointNode.Create;;
HAnimJoint1195.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1196 := THAnimSegmentNode.Create;;
Transform1197 := TTransformNode.Create;;
Transform1197.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform1198 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1198.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1197.FdChildren.Add(Transform1198);
{ METHOD .FdChildren.Add }
HAnimSegment1196.FdChildren.Add(Transform1197);
Shape1200 := TShapeNode.Create;;
LineSet1201 := TLineSetNode.Create;;
LineSet1201.SetVertexCount([2]);
Coordinate1202 := TCoordinateNode.Create;;
Coordinate1202.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1201.Coord := Coordinate1202;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1201.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1200.Geometry := LineSet1201;
{ METHOD .FdChildren.Add }
HAnimSegment1196.FdChildren.Add(Shape1200);
HAnimSite1204 := THAnimSiteNode.Create;;
HAnimSite1204.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor1205 := TTouchSensorNode.Create;;
TouchSensor1205.Description := 'HAnimSite 77 l_metacarpal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite1204.FdChildren.Add(TouchSensor1205);
end;

procedure InitHumanoid3Part95;
begin

{ METHOD .FdChildren.Add }
HAnimSite1204.FdChildren.Add(Shape30);
Billboard1207 := TBillboardNode.Create;;
Shape1208 := TShapeNode.Create;;
Text1209 := TTextNode.Create;;
Text1209.SetText(['77']);
FontStyle1210 := TFontStyleNode.Create;;
FontStyle1210.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1209.FontStyle := FontStyle1210;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1208.Geometry := Text1209;
{ METHOD .FdChildren.Add }
Billboard1207.FdChildren.Add(Shape1208);
{ METHOD .FdChildren.Add }
HAnimSite1204.FdChildren.Add(Billboard1207);
{ METHOD .FdChildren.Add }
HAnimSegment1196.FdChildren.Add(HAnimSite1204);
{ METHOD .FdChildren.Add }
HAnimJoint1195.FdChildren.Add(HAnimSegment1196);
HAnimJoint1211 := THAnimJointNode.Create;;
HAnimJoint1211.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment1212 := THAnimSegmentNode.Create;;
Transform1213 := TTransformNode.Create;;
Transform1213.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform1214 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1214.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1213.FdChildren.Add(Transform1214);
{ METHOD .FdChildren.Add }
HAnimSegment1212.FdChildren.Add(Transform1213);
Shape1216 := TShapeNode.Create;;
LineSet1217 := TLineSetNode.Create;;
LineSet1217.SetVertexCount([2]);
Coordinate1218 := TCoordinateNode.Create;;
Coordinate1218.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1217.Coord := Coordinate1218;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1217.Color := ColorRGBA27;
end;

procedure InitHumanoid3Part96;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1216.Geometry := LineSet1217;
{ METHOD .FdChildren.Add }
HAnimSegment1212.FdChildren.Add(Shape1216);
{ METHOD .FdChildren.Add }
HAnimJoint1211.FdChildren.Add(HAnimSegment1212);
HAnimJoint1220 := THAnimJointNode.Create;;
HAnimJoint1220.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1221 := THAnimSegmentNode.Create;;
Transform1222 := TTransformNode.Create;;
Transform1222.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform1223 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1223.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1222.FdChildren.Add(Transform1223);
{ METHOD .FdChildren.Add }
HAnimSegment1221.FdChildren.Add(Transform1222);
Shape1225 := TShapeNode.Create;;
LineSet1226 := TLineSetNode.Create;;
LineSet1226.SetVertexCount([2]);
Coordinate1227 := TCoordinateNode.Create;;
Coordinate1227.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1226.Coord := Coordinate1227;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1226.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1225.Geometry := LineSet1226;
{ METHOD .FdChildren.Add }
HAnimSegment1221.FdChildren.Add(Shape1225);
{ METHOD .FdChildren.Add }
HAnimJoint1220.FdChildren.Add(HAnimSegment1221);
HAnimJoint1229 := THAnimJointNode.Create;;
HAnimJoint1229.Center := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
HAnimJoint1220.FdChildren.Add(HAnimJoint1229);
{ METHOD .FdChildren.Add }
HAnimJoint1211.FdChildren.Add(HAnimJoint1220);
{ METHOD .FdChildren.Add }
HAnimJoint1195.FdChildren.Add(HAnimJoint1211);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimJoint1195);
{ METHOD .FdChildren.Add }
HAnimJoint1009.FdChildren.Add(HAnimJoint1046);
{ METHOD .FdChildren.Add }
HAnimJoint986.FdChildren.Add(HAnimJoint1009);
{ METHOD .FdChildren.Add }
HAnimJoint977.FdChildren.Add(HAnimJoint986);
{ METHOD .FdChildren.Add }
HAnimJoint933.FdChildren.Add(HAnimJoint977);
end;

procedure InitHumanoid3Part97;
begin

{ METHOD .FdChildren.Add }
HAnimJoint701.FdChildren.Add(HAnimJoint933);
HAnimJoint1230 := THAnimJointNode.Create;;
HAnimJoint1230.Center := Vector3(-0.0694,1.46,-0.033);
HAnimSegment1231 := THAnimSegmentNode.Create;;
Transform1232 := TTransformNode.Create;;
Transform1232.Translation := Vector3(-0.0694,1.46,-0.033);
Transform1233 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1233.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1232.FdChildren.Add(Transform1233);
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(Transform1232);
Shape1235 := TShapeNode.Create;;
LineSet1236 := TLineSetNode.Create;;
LineSet1236.SetVertexCount([2]);
Coordinate1237 := TCoordinateNode.Create;;
Coordinate1237.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1236.Coord := Coordinate1237;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1236.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1235.Geometry := LineSet1236;
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(Shape1235);
HAnimSite1239 := THAnimSiteNode.Create;;
HAnimSite1239.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor1240 := TTouchSensorNode.Create;;
TouchSensor1240.Description := 'HAnimSite 20 r_acromion';
{ METHOD .FdChildren.Add }
HAnimSite1239.FdChildren.Add(TouchSensor1240);
{ METHOD .FdChildren.Add }
HAnimSite1239.FdChildren.Add(Shape30);
Billboard1242 := TBillboardNode.Create;;
Shape1243 := TShapeNode.Create;;
Text1244 := TTextNode.Create;;
end;

procedure InitHumanoid3Part98;
begin

Text1244.SetText(['20']);
FontStyle1245 := TFontStyleNode.Create;;
FontStyle1245.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1244.FontStyle := FontStyle1245;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1243.Geometry := Text1244;
{ METHOD .FdChildren.Add }
Billboard1242.FdChildren.Add(Shape1243);
{ METHOD .FdChildren.Add }
HAnimSite1239.FdChildren.Add(Billboard1242);
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(HAnimSite1239);
HAnimSite1246 := THAnimSiteNode.Create;;
HAnimSite1246.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor1247 := TTouchSensorNode.Create;;
TouchSensor1247.Description := 'HAnimSite 22 r_axilla_distal';
{ METHOD .FdChildren.Add }
HAnimSite1246.FdChildren.Add(TouchSensor1247);
{ METHOD .FdChildren.Add }
HAnimSite1246.FdChildren.Add(Shape30);
Billboard1249 := TBillboardNode.Create;;
Shape1250 := TShapeNode.Create;;
Text1251 := TTextNode.Create;;
Text1251.SetText(['22']);
FontStyle1252 := TFontStyleNode.Create;;
FontStyle1252.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1251.FontStyle := FontStyle1252;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1250.Geometry := Text1251;
{ METHOD .FdChildren.Add }
Billboard1249.FdChildren.Add(Shape1250);
{ METHOD .FdChildren.Add }
HAnimSite1246.FdChildren.Add(Billboard1249);
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(HAnimSite1246);
HAnimSite1253 := THAnimSiteNode.Create;;
TouchSensor1254 := TTouchSensorNode.Create;;
TouchSensor1254.Description := 'HAnimSite 23 r_axilla_posterior_folds';
{ METHOD .FdChildren.Add }
HAnimSite1253.FdChildren.Add(TouchSensor1254);
{ METHOD .FdChildren.Add }
HAnimSite1253.FdChildren.Add(Shape30);
Billboard1256 := TBillboardNode.Create;
end;

procedure InitHumanoid3Part99;
begin
;
Shape1257 := TShapeNode.Create;;
Text1258 := TTextNode.Create;;
Text1258.SetText(['23']);
FontStyle1259 := TFontStyleNode.Create;;
FontStyle1259.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1258.FontStyle := FontStyle1259;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1257.Geometry := Text1258;
{ METHOD .FdChildren.Add }
Billboard1256.FdChildren.Add(Shape1257);
{ METHOD .FdChildren.Add }
HAnimSite1253.FdChildren.Add(Billboard1256);
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(HAnimSite1253);
HAnimSite1260 := THAnimSiteNode.Create;;
HAnimSite1260.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1261 := TTouchSensorNode.Create;;
TouchSensor1261.Description := 'HAnimSite 21 r_axilla_proximal';
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(TouchSensor1261);
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(Shape30);
Billboard1263 := TBillboardNode.Create;;
Shape1264 := TShapeNode.Create;;
Text1265 := TTextNode.Create;;
Text1265.SetText(['21']);
FontStyle1266 := TFontStyleNode.Create;;
FontStyle1266.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1265.FontStyle := FontStyle1266;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1264.Geometry := Text1265;
{ METHOD .FdChildren.Add }
Billboard1263.FdChildren.Add(Shape1264);
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(Billboard1263);
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(HAnimSite1260);
HAnimSite1267 := THAnimSiteNode.Create;;
HAnimSite1267.Translation := Vector3(-0.0115,1.4943,0.04);
end;

procedure InitHumanoid3Part100;
begin

TouchSensor1268 := TTouchSensorNode.Create;;
TouchSensor1268.Description := 'HAnimSite 19 r_clavicale';
{ METHOD .FdChildren.Add }
HAnimSite1267.FdChildren.Add(TouchSensor1268);
{ METHOD .FdChildren.Add }
HAnimSite1267.FdChildren.Add(Shape30);
Billboard1270 := TBillboardNode.Create;;
Shape1271 := TShapeNode.Create;;
Text1272 := TTextNode.Create;;
Text1272.SetText(['19']);
FontStyle1273 := TFontStyleNode.Create;;
FontStyle1273.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1272.FontStyle := FontStyle1273;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1271.Geometry := Text1272;
{ METHOD .FdChildren.Add }
Billboard1270.FdChildren.Add(Shape1271);
{ METHOD .FdChildren.Add }
HAnimSite1267.FdChildren.Add(Billboard1270);
{ METHOD .FdChildren.Add }
HAnimSegment1231.FdChildren.Add(HAnimSite1267);
{ METHOD .FdChildren.Add }
HAnimJoint1230.FdChildren.Add(HAnimSegment1231);
HAnimJoint1274 := THAnimJointNode.Create;;
HAnimJoint1274.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimSegment1275 := THAnimSegmentNode.Create;;
Transform1276 := TTransformNode.Create;;
Transform1276.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1277 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1277.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1276.FdChildren.Add(Transform1277);
{ METHOD .FdChildren.Add }
HAnimSegment1275.FdChildren.Add(Transform1276);
Shape1279 := TShapeNode.Create;;
LineSet1280 := TLineSetNode.Create;;
LineSet1280.SetVertexCount([2]);
Coordinate1281 := TCoordinateNode.Create;
end;

procedure InitHumanoid3Part101;
begin
;
Coordinate1281.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1280.Coord := Coordinate1281;
{ from r_acromioclavicular to r_shoulder vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1280.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1279.Geometry := LineSet1280;
{ METHOD .FdChildren.Add }
HAnimSegment1275.FdChildren.Add(Shape1279);
{ METHOD .FdChildren.Add }
HAnimJoint1274.FdChildren.Add(HAnimSegment1275);
HAnimJoint1283 := THAnimJointNode.Create;;
HAnimJoint1283.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment1284 := THAnimSegmentNode.Create;;
Transform1285 := TTransformNode.Create;;
Transform1285.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1286 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1286.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1285.FdChildren.Add(Transform1286);
{ METHOD .FdChildren.Add }
HAnimSegment1284.FdChildren.Add(Transform1285);
Shape1288 := TShapeNode.Create;;
LineSet1289 := TLineSetNode.Create;;
LineSet1289.SetVertexCount([2]);
Coordinate1290 := TCoordinateNode.Create;;
Coordinate1290.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1289.Coord := Coordinate1290;
{ from r_shoulder to r_elbow vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1289.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1288.Geometry := LineSet1289;
{ METHOD .FdChildren.Add }
HAnimSegment1284.FdChildren.Add(Shape1288);
HAnimSite1292 := THAnimSiteNode.Create;;
TouchSensor1293 := TTouchSensorNode.Create;;
TouchSensor1293.Description := 'HAnimSite 97 r_bideltoid';
{ METHOD .FdChildren.Add }
HAnimSite1292.FdChildren.Add(TouchSensor1293);
{ METHOD .FdChildren.Add }
HAnimSite1292.FdChildren.Add(Shape30);
Billboard1295 := TBillboardNode.Create;
end;

procedure InitHumanoid3Part102;
begin
;
Shape1296 := TShapeNode.Create;;
Text1297 := TTextNode.Create;;
Text1297.SetText(['97']);
FontStyle1298 := TFontStyleNode.Create;;
FontStyle1298.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1297.FontStyle := FontStyle1298;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1296.Geometry := Text1297;
{ METHOD .FdChildren.Add }
Billboard1295.FdChildren.Add(Shape1296);
{ METHOD .FdChildren.Add }
HAnimSite1292.FdChildren.Add(Billboard1295);
{ METHOD .FdChildren.Add }
HAnimSegment1284.FdChildren.Add(HAnimSite1292);
HAnimSite1299 := THAnimSiteNode.Create;;
HAnimSite1299.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1300 := TTouchSensorNode.Create;;
TouchSensor1300.Description := 'HAnimSite 66 r_humeral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite1299.FdChildren.Add(TouchSensor1300);
{ METHOD .FdChildren.Add }
HAnimSite1299.FdChildren.Add(Shape30);
Billboard1302 := TBillboardNode.Create;;
Shape1303 := TShapeNode.Create;;
Text1304 := TTextNode.Create;;
Text1304.SetText(['66']);
FontStyle1305 := TFontStyleNode.Create;;
FontStyle1305.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1304.FontStyle := FontStyle1305;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1303.Geometry := Text1304;
{ METHOD .FdChildren.Add }
Billboard1302.FdChildren.Add(Shape1303);
{ METHOD .FdChildren.Add }
HAnimSite1299.FdChildren.Add(Billboard1302);
{ METHOD .FdChildren.Add }
HAnimSegment1284.FdChildren.Add(HAnimSite1299);
{ METHOD .FdChildren.Add }
HAnimJoint1283.FdChildren.Add(HAnimSegment1284);
HAnimJoint1306 := THAnimJointNode.Create;;
end;

procedure InitHumanoid3Part103;
begin

HAnimJoint1306.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment1307 := THAnimSegmentNode.Create;;
Transform1308 := TTransformNode.Create;;
Transform1308.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1309 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1309.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1308.FdChildren.Add(Transform1309);
{ METHOD .FdChildren.Add }
HAnimSegment1307.FdChildren.Add(Transform1308);
Shape1311 := TShapeNode.Create;;
LineSet1312 := TLineSetNode.Create;;
LineSet1312.SetVertexCount([2]);
Coordinate1313 := TCoordinateNode.Create;;
Coordinate1313.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1312.Coord := Coordinate1313;
{ from r_elbow to r_radiocarpal vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1312.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1311.Geometry := LineSet1312;
{ METHOD .FdChildren.Add }
HAnimSegment1307.FdChildren.Add(Shape1311);
HAnimSite1315 := THAnimSiteNode.Create;;
HAnimSite1315.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1316 := TTouchSensorNode.Create;;
TouchSensor1316.Description := 'HAnimSite 67 r_humeral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite1315.FdChildren.Add(TouchSensor1316);
{ METHOD .FdChildren.Add }
HAnimSite1315.FdChildren.Add(Shape30);
Billboard1318 := TBillboardNode.Create;;
Shape1319 := TShapeNode.Create;;
Text1320 := TTextNode.Create;;
Text1320.SetText(['67']);
FontStyle1321 := TFontStyleNode.Create;;
end;

procedure InitHumanoid3Part104;
begin

FontStyle1321.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1320.FontStyle := FontStyle1321;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1319.Geometry := Text1320;
{ METHOD .FdChildren.Add }
Billboard1318.FdChildren.Add(Shape1319);
{ METHOD .FdChildren.Add }
HAnimSite1315.FdChildren.Add(Billboard1318);
{ METHOD .FdChildren.Add }
HAnimSegment1307.FdChildren.Add(HAnimSite1315);
HAnimSite1322 := THAnimSiteNode.Create;;
HAnimSite1322.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1323 := TTouchSensorNode.Create;;
TouchSensor1323.Description := 'HAnimSite 68 r_olecranon';
{ METHOD .FdChildren.Add }
HAnimSite1322.FdChildren.Add(TouchSensor1323);
{ METHOD .FdChildren.Add }
HAnimSite1322.FdChildren.Add(Shape30);
Billboard1325 := TBillboardNode.Create;;
Shape1326 := TShapeNode.Create;;
Text1327 := TTextNode.Create;;
Text1327.SetText(['68']);
FontStyle1328 := TFontStyleNode.Create;;
FontStyle1328.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1327.FontStyle := FontStyle1328;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1326.Geometry := Text1327;
{ METHOD .FdChildren.Add }
Billboard1325.FdChildren.Add(Shape1326);
{ METHOD .FdChildren.Add }
HAnimSite1322.FdChildren.Add(Billboard1325);
{ METHOD .FdChildren.Add }
HAnimSegment1307.FdChildren.Add(HAnimSite1322);
HAnimSite1329 := THAnimSiteNode.Create;;
HAnimSite1329.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1330 := TTouchSensorNode.Create;;
TouchSensor1330.Description := 'HAnimSite 74 r_radial_styloid';
{ METHOD .FdChildren.Add }
HAnimSite1329.FdChildren.Add(TouchSensor1330);
{ METHOD .FdChildren.Add }
HAnimSite1329.FdChildren.Add(Shape30);
Billboard1332 := TBillboardNode.Create;;
Shape1333 := TShapeNode.Create;
end;

procedure InitHumanoid3Part105;
begin
;
Text1334 := TTextNode.Create;;
Text1334.SetText(['74']);
FontStyle1335 := TFontStyleNode.Create;;
FontStyle1335.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1334.FontStyle := FontStyle1335;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1333.Geometry := Text1334;
{ METHOD .FdChildren.Add }
Billboard1332.FdChildren.Add(Shape1333);
{ METHOD .FdChildren.Add }
HAnimSite1329.FdChildren.Add(Billboard1332);
{ METHOD .FdChildren.Add }
HAnimSegment1307.FdChildren.Add(HAnimSite1329);
HAnimSite1336 := THAnimSiteNode.Create;;
HAnimSite1336.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1337 := TTouchSensorNode.Create;;
TouchSensor1337.Description := 'HAnimSite 72 r_radiale';
{ METHOD .FdChildren.Add }
HAnimSite1336.FdChildren.Add(TouchSensor1337);
{ METHOD .FdChildren.Add }
HAnimSite1336.FdChildren.Add(Shape30);
Billboard1339 := TBillboardNode.Create;;
Shape1340 := TShapeNode.Create;;
Text1341 := TTextNode.Create;;
Text1341.SetText(['72']);
FontStyle1342 := TFontStyleNode.Create;;
FontStyle1342.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1341.FontStyle := FontStyle1342;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1340.Geometry := Text1341;
{ METHOD .FdChildren.Add }
Billboard1339.FdChildren.Add(Shape1340);
{ METHOD .FdChildren.Add }
HAnimSite1336.FdChildren.Add(Billboard1339);
{ METHOD .FdChildren.Add }
HAnimSegment1307.FdChildren.Add(HAnimSite1336);
{ METHOD .FdChildren.Add }
HAnimJoint1306.FdChildren.Add(HAnimSegment1307);
HAnimJoint1343 := THAnimJointNode.Create;;
HAnimJoint1343.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment1344 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid3Part106;
begin
;
Transform1345 := TTransformNode.Create;;
Transform1345.Scale := Vector3(0.2,0.2,0.2);
Transform1345.Translation := Vector3(-0.2,0.85,-0.05);
Transform1345.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1346 := TTransformNode.Create;;
Transform1346.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
{ METHOD .FdChildren.Add }
Transform1346.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1345.FdChildren.Add(Transform1346);
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(Transform1345);
Shape1348 := TShapeNode.Create;;
LineSet1349 := TLineSetNode.Create;;
LineSet1349.SetVertexCount([2]);
Coordinate1350 := TCoordinateNode.Create;;
Coordinate1350.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1899,0.8502,-0.0473)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1349.Coord := Coordinate1350;
{ from r_radiocarpal to r_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1349.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1348.Geometry := LineSet1349;
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(Shape1348);
HAnimSite1352 := THAnimSiteNode.Create;;
HAnimSite1352.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1353 := TTouchSensorNode.Create;;
TouchSensor1353.Description := 'HAnimSite 73 r_ulnar_styloid';
{ METHOD .FdChildren.Add }
HAnimSite1352.FdChildren.Add(TouchSensor1353);
{ METHOD .FdChildren.Add }
HAnimSite1352.FdChildren.Add(Shape30);
Billboard1355 := TBillboardNode.Create;;
Shape1356 := TShapeNode.Create;;
Text1357 := TTextNode.Create;;
Text1357.SetText(['73']);
FontStyle1358 := TFontStyleNode.Create;
end;

procedure InitHumanoid3Part107;
begin
;
FontStyle1358.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1357.FontStyle := FontStyle1358;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1356.Geometry := Text1357;
{ METHOD .FdChildren.Add }
Billboard1355.FdChildren.Add(Shape1356);
{ METHOD .FdChildren.Add }
HAnimSite1352.FdChildren.Add(Billboard1355);
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(HAnimSite1352);
Shape1359 := TShapeNode.Create;;
LineSet1360 := TLineSetNode.Create;;
LineSet1360.SetVertexCount([2]);
Coordinate1361 := TCoordinateNode.Create;;
Coordinate1361.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1961,0.8055,-0.0218)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1360.Coord := Coordinate1361;
{ from r_radiocarpal to r_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1360.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1359.Geometry := LineSet1360;
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(Shape1359);
Shape1363 := TShapeNode.Create;;
LineSet1364 := TLineSetNode.Create;;
LineSet1364.SetVertexCount([2]);
Coordinate1365 := TCoordinateNode.Create;;
Coordinate1365.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1972,0.806,-0.0468)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1364.Coord := Coordinate1365;
{ from r_radiocarpal to r_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1364.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1363.Geometry := LineSet1364;
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(Shape1363);
Shape1367 := TShapeNode.Create;;
LineSet1368 := TLineSetNode.Create;;
LineSet1368.SetVertexCount([2]);
Coordinate1369 := TCoordinateNode.Create;;
Coordinate1369.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1951,0.8049,-0.0732)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1368.Coord := Coordinate1369;
end;

procedure InitHumanoid3Part108;
begin

{ from r_radiocarpal to r_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1368.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1367.Geometry := LineSet1368;
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(Shape1367);
Shape1371 := TShapeNode.Create;;
LineSet1372 := TLineSetNode.Create;;
LineSet1372.SetVertexCount([2]);
Coordinate1373 := TCoordinateNode.Create;;
Coordinate1373.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1926,0.8096,-0.0975)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1372.Coord := Coordinate1373;
{ from r_radiocarpal to r_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1372.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1371.Geometry := LineSet1372;
{ METHOD .FdChildren.Add }
HAnimSegment1344.FdChildren.Add(Shape1371);
{ METHOD .FdChildren.Add }
HAnimJoint1343.FdChildren.Add(HAnimSegment1344);
HAnimJoint1375 := THAnimJointNode.Create;;
HAnimJoint1375.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimSegment1376 := THAnimSegmentNode.Create;;
Transform1377 := TTransformNode.Create;;
Transform1377.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1378 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1378.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1377.FdChildren.Add(Transform1378);
{ METHOD .FdChildren.Add }
HAnimSegment1376.FdChildren.Add(Transform1377);
Shape1380 := TShapeNode.Create;;
LineSet1381 := TLineSetNode.Create;;
LineSet1381.SetVertexCount([2]);
Coordinate1382 := TCoordinateNode.Create;;
Coordinate1382.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1381.Coord := Coordinate1382;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1381.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1380.Geometry := LineSet1381;
end;

procedure InitHumanoid3Part109;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1376.FdChildren.Add(Shape1380);
{ METHOD .FdChildren.Add }
HAnimJoint1375.FdChildren.Add(HAnimSegment1376);
HAnimJoint1384 := THAnimJointNode.Create;;
HAnimJoint1384.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimSegment1385 := THAnimSegmentNode.Create;;
Transform1386 := TTransformNode.Create;;
Transform1386.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1387 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1387.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1386.FdChildren.Add(Transform1387);
{ METHOD .FdChildren.Add }
HAnimSegment1385.FdChildren.Add(Transform1386);
Shape1389 := TShapeNode.Create;;
LineSet1390 := TLineSetNode.Create;;
LineSet1390.SetVertexCount([2]);
Coordinate1391 := TCoordinateNode.Create;;
Coordinate1391.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1390.Coord := Coordinate1391;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1390.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1389.Geometry := LineSet1390;
{ METHOD .FdChildren.Add }
HAnimSegment1385.FdChildren.Add(Shape1389);
{ METHOD .FdChildren.Add }
HAnimJoint1384.FdChildren.Add(HAnimSegment1385);
HAnimJoint1393 := THAnimJointNode.Create;;
HAnimJoint1393.Center := Vector3(-0.1864,0.819,0.0506);
{ METHOD .FdChildren.Add }
HAnimJoint1384.FdChildren.Add(HAnimJoint1393);
{ METHOD .FdChildren.Add }
HAnimJoint1375.FdChildren.Add(HAnimJoint1384);
{ METHOD .FdChildren.Add }
HAnimJoint1343.FdChildren.Add(HAnimJoint1375);
HAnimJoint1394 := THAnimJointNode.Create;;
HAnimJoint1394.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimSegment1395 := THAnimSegmentNode.Create;;
Transform1396 := TTransformNode.Create;
end;

procedure InitHumanoid3Part110;
begin
;
Transform1396.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1397 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1397.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1396.FdChildren.Add(Transform1397);
{ METHOD .FdChildren.Add }
HAnimSegment1395.FdChildren.Add(Transform1396);
Shape1399 := TShapeNode.Create;;
LineSet1400 := TLineSetNode.Create;;
LineSet1400.SetVertexCount([2]);
Coordinate1401 := TCoordinateNode.Create;;
Coordinate1401.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1400.Coord := Coordinate1401;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1400.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1399.Geometry := LineSet1400;
{ METHOD .FdChildren.Add }
HAnimSegment1395.FdChildren.Add(Shape1399);
HAnimSite1403 := THAnimSiteNode.Create;;
HAnimSite1403.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1404 := TTouchSensorNode.Create;;
TouchSensor1404.Description := 'HAnimSite 78 r_metacarpal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSite1403.FdChildren.Add(TouchSensor1404);
{ METHOD .FdChildren.Add }
HAnimSite1403.FdChildren.Add(Shape30);
Billboard1406 := TBillboardNode.Create;;
Shape1407 := TShapeNode.Create;;
Text1408 := TTextNode.Create;;
Text1408.SetText(['78']);
FontStyle1409 := TFontStyleNode.Create;;
FontStyle1409.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1408.FontStyle := FontStyle1409;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1407.Geometry := Text1408;
{ METHOD .FdChildren.Add }
Billboard1406.FdChildren.Add(Shape1407);
end;

procedure InitHumanoid3Part111;
begin

{ METHOD .FdChildren.Add }
HAnimSite1403.FdChildren.Add(Billboard1406);
{ METHOD .FdChildren.Add }
HAnimSegment1395.FdChildren.Add(HAnimSite1403);
{ METHOD .FdChildren.Add }
HAnimJoint1394.FdChildren.Add(HAnimSegment1395);
HAnimJoint1410 := THAnimJointNode.Create;;
HAnimJoint1410.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimSegment1411 := THAnimSegmentNode.Create;;
Transform1412 := TTransformNode.Create;;
Transform1412.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1413 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1413.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1412.FdChildren.Add(Transform1413);
{ METHOD .FdChildren.Add }
HAnimSegment1411.FdChildren.Add(Transform1412);
Shape1415 := TShapeNode.Create;;
LineSet1416 := TLineSetNode.Create;;
LineSet1416.SetVertexCount([2]);
Coordinate1417 := TCoordinateNode.Create;;
Coordinate1417.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1416.Coord := Coordinate1417;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1416.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1415.Geometry := LineSet1416;
{ METHOD .FdChildren.Add }
HAnimSegment1411.FdChildren.Add(Shape1415);
{ METHOD .FdChildren.Add }
HAnimJoint1410.FdChildren.Add(HAnimSegment1411);
HAnimJoint1419 := THAnimJointNode.Create;;
HAnimJoint1419.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimSegment1420 := THAnimSegmentNode.Create;;
Transform1421 := TTransformNode.Create;;
Transform1421.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1422 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1422.FdChildren.Add(Shape20);
end;

procedure InitHumanoid3Part112;
begin

{ METHOD .FdChildren.Add }
Transform1421.FdChildren.Add(Transform1422);
{ METHOD .FdChildren.Add }
HAnimSegment1420.FdChildren.Add(Transform1421);
Shape1424 := TShapeNode.Create;;
LineSet1425 := TLineSetNode.Create;;
LineSet1425.SetVertexCount([2]);
Coordinate1426 := TCoordinateNode.Create;;
Coordinate1426.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1425.Coord := Coordinate1426;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1425.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1424.Geometry := LineSet1425;
{ METHOD .FdChildren.Add }
HAnimSegment1420.FdChildren.Add(Shape1424);
{ METHOD .FdChildren.Add }
HAnimJoint1419.FdChildren.Add(HAnimSegment1420);
HAnimJoint1428 := THAnimJointNode.Create;;
HAnimJoint1428.Center := Vector3(-0.1945,0.7169,-0.0173);
{ METHOD .FdChildren.Add }
HAnimJoint1419.FdChildren.Add(HAnimJoint1428);
{ METHOD .FdChildren.Add }
HAnimJoint1410.FdChildren.Add(HAnimJoint1419);
{ METHOD .FdChildren.Add }
HAnimJoint1394.FdChildren.Add(HAnimJoint1410);
{ METHOD .FdChildren.Add }
HAnimJoint1343.FdChildren.Add(HAnimJoint1394);
HAnimJoint1429 := THAnimJointNode.Create;;
HAnimJoint1429.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimSegment1430 := THAnimSegmentNode.Create;;
Transform1431 := TTransformNode.Create;;
Transform1431.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1432 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1432.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1431.FdChildren.Add(Transform1432);
{ METHOD .FdChildren.Add }
HAnimSegment1430.FdChildren.Add(Transform1431);
Shape1434 := TShapeNode.Create;;
LineSet1435 := TLineSetNode.Create;;
LineSet1435.SetVertexCount([2]);
end;

procedure InitHumanoid3Part113;
begin

Coordinate1436 := TCoordinateNode.Create;;
Coordinate1436.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1435.Coord := Coordinate1436;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1435.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1434.Geometry := LineSet1435;
{ METHOD .FdChildren.Add }
HAnimSegment1430.FdChildren.Add(Shape1434);
HAnimSite1438 := THAnimSiteNode.Create;;
TouchSensor1439 := TTouchSensorNode.Create;;
TouchSensor1439.Description := 'HAnimSite 79 r_metacarpal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSite1438.FdChildren.Add(TouchSensor1439);
{ METHOD .FdChildren.Add }
HAnimSite1438.FdChildren.Add(Shape30);
Billboard1441 := TBillboardNode.Create;;
Shape1442 := TShapeNode.Create;;
Text1443 := TTextNode.Create;;
Text1443.SetText(['79']);
FontStyle1444 := TFontStyleNode.Create;;
FontStyle1444.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1443.FontStyle := FontStyle1444;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1442.Geometry := Text1443;
{ METHOD .FdChildren.Add }
Billboard1441.FdChildren.Add(Shape1442);
{ METHOD .FdChildren.Add }
HAnimSite1438.FdChildren.Add(Billboard1441);
{ METHOD .FdChildren.Add }
HAnimSegment1430.FdChildren.Add(HAnimSite1438);
{ METHOD .FdChildren.Add }
HAnimJoint1429.FdChildren.Add(HAnimSegment1430);
HAnimJoint1445 := THAnimJointNode.Create;;
HAnimJoint1445.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimSegment1446 := THAnimSegmentNode.Create;;
Transform1447 := TTransformNode.Create;;
Transform1447.Translation := Vector3(-0.1972,0.7849,-0.0468);
Transform1448 := TTransformNode.Create;;
end;

procedure InitHumanoid3Part114;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1448.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1447.FdChildren.Add(Transform1448);
{ METHOD .FdChildren.Add }
HAnimSegment1446.FdChildren.Add(Transform1447);
Shape1450 := TShapeNode.Create;;
LineSet1451 := TLineSetNode.Create;;
LineSet1451.SetVertexCount([2]);
Coordinate1452 := TCoordinateNode.Create;;
Coordinate1452.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1451.Coord := Coordinate1452;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1451.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1450.Geometry := LineSet1451;
{ METHOD .FdChildren.Add }
HAnimSegment1446.FdChildren.Add(Shape1450);
{ METHOD .FdChildren.Add }
HAnimJoint1445.FdChildren.Add(HAnimSegment1446);
HAnimJoint1454 := THAnimJointNode.Create;;
HAnimJoint1454.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimSegment1455 := THAnimSegmentNode.Create;;
Transform1456 := TTransformNode.Create;;
Transform1456.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1457 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1457.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1456.FdChildren.Add(Transform1457);
{ METHOD .FdChildren.Add }
HAnimSegment1455.FdChildren.Add(Transform1456);
Shape1459 := TShapeNode.Create;;
LineSet1460 := TLineSetNode.Create;;
LineSet1460.SetVertexCount([2]);
Coordinate1461 := TCoordinateNode.Create;;
Coordinate1461.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1460.Coord := Coordinate1461;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1460.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1459.Geometry := LineSet1460;
end;

procedure InitHumanoid3Part115;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1455.FdChildren.Add(Shape1459);
{ METHOD .FdChildren.Add }
HAnimJoint1454.FdChildren.Add(HAnimSegment1455);
HAnimJoint1463 := THAnimJointNode.Create;;
HAnimJoint1463.Center := Vector3(-0.1939,0.7042,-0.0432);
{ METHOD .FdChildren.Add }
HAnimJoint1454.FdChildren.Add(HAnimJoint1463);
{ METHOD .FdChildren.Add }
HAnimJoint1445.FdChildren.Add(HAnimJoint1454);
{ METHOD .FdChildren.Add }
HAnimJoint1429.FdChildren.Add(HAnimJoint1445);
{ METHOD .FdChildren.Add }
HAnimJoint1343.FdChildren.Add(HAnimJoint1429);
HAnimJoint1464 := THAnimJointNode.Create;;
HAnimJoint1464.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimSegment1465 := THAnimSegmentNode.Create;;
Transform1466 := TTransformNode.Create;;
Transform1466.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1467 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1467.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1466.FdChildren.Add(Transform1467);
{ METHOD .FdChildren.Add }
HAnimSegment1465.FdChildren.Add(Transform1466);
Shape1469 := TShapeNode.Create;;
LineSet1470 := TLineSetNode.Create;;
LineSet1470.SetVertexCount([2]);
Coordinate1471 := TCoordinateNode.Create;;
Coordinate1471.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1470.Coord := Coordinate1471;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1470.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1469.Geometry := LineSet1470;
{ METHOD .FdChildren.Add }
HAnimSegment1465.FdChildren.Add(Shape1469);
{ METHOD .FdChildren.Add }
HAnimJoint1464.FdChildren.Add(HAnimSegment1465);
HAnimJoint1473 := THAnimJointNode.Create;;
HAnimJoint1473.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimSegment1474 := THAnimSegmentNode.Create;;
end;

procedure InitHumanoid3Part116;
begin

Transform1475 := TTransformNode.Create;;
Transform1475.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1476 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1476.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1475.FdChildren.Add(Transform1476);
{ METHOD .FdChildren.Add }
HAnimSegment1474.FdChildren.Add(Transform1475);
Shape1478 := TShapeNode.Create;;
LineSet1479 := TLineSetNode.Create;;
LineSet1479.SetVertexCount([2]);
Coordinate1480 := TCoordinateNode.Create;;
Coordinate1480.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1479.Coord := Coordinate1480;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1479.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1478.Geometry := LineSet1479;
{ METHOD .FdChildren.Add }
HAnimSegment1474.FdChildren.Add(Shape1478);
{ METHOD .FdChildren.Add }
HAnimJoint1473.FdChildren.Add(HAnimSegment1474);
HAnimJoint1482 := THAnimJointNode.Create;;
HAnimJoint1482.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimSegment1483 := THAnimSegmentNode.Create;;
Transform1484 := TTransformNode.Create;;
Transform1484.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1485 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1485.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1484.FdChildren.Add(Transform1485);
{ METHOD .FdChildren.Add }
HAnimSegment1483.FdChildren.Add(Transform1484);
Shape1487 := TShapeNode.Create;;
LineSet1488 := TLineSetNode.Create;;
LineSet1488.SetVertexCount([2]);
Coordinate1489 := TCoordinateNode.Create;
end;

procedure InitHumanoid3Part117;
begin
;
Coordinate1489.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1488.Coord := Coordinate1489;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1488.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1487.Geometry := LineSet1488;
{ METHOD .FdChildren.Add }
HAnimSegment1483.FdChildren.Add(Shape1487);
{ METHOD .FdChildren.Add }
HAnimJoint1482.FdChildren.Add(HAnimSegment1483);
HAnimJoint1491 := THAnimJointNode.Create;;
HAnimJoint1491.Center := Vector3(-0.1908,0.7077,-0.0706);
{ METHOD .FdChildren.Add }
HAnimJoint1482.FdChildren.Add(HAnimJoint1491);
{ METHOD .FdChildren.Add }
HAnimJoint1473.FdChildren.Add(HAnimJoint1482);
{ METHOD .FdChildren.Add }
HAnimJoint1464.FdChildren.Add(HAnimJoint1473);
{ METHOD .FdChildren.Add }
HAnimJoint1343.FdChildren.Add(HAnimJoint1464);
HAnimJoint1492 := THAnimJointNode.Create;;
HAnimJoint1492.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimSegment1493 := THAnimSegmentNode.Create;;
Transform1494 := TTransformNode.Create;;
Transform1494.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1495 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1495.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1494.FdChildren.Add(Transform1495);
{ METHOD .FdChildren.Add }
HAnimSegment1493.FdChildren.Add(Transform1494);
Shape1497 := TShapeNode.Create;;
LineSet1498 := TLineSetNode.Create;;
LineSet1498.SetVertexCount([2]);
Coordinate1499 := TCoordinateNode.Create;;
Coordinate1499.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1498.Coord := Coordinate1499;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1498.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1497.Geometry := LineSet1498;
{ METHOD .FdChildren.Add }
HAnimSegment1493.FdChildren.Add(Shape1497);
HAnimSite1501 := THAnimSiteNode.Create;
end;

procedure InitHumanoid3Part118;
begin
;
HAnimSite1501.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1502 := TTouchSensorNode.Create;;
TouchSensor1502.Description := 'HAnimSite 80 r_metacarpal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite1501.FdChildren.Add(TouchSensor1502);
{ METHOD .FdChildren.Add }
HAnimSite1501.FdChildren.Add(Shape30);
Billboard1504 := TBillboardNode.Create;;
Shape1505 := TShapeNode.Create;;
Text1506 := TTextNode.Create;;
Text1506.SetText(['80']);
FontStyle1507 := TFontStyleNode.Create;;
FontStyle1507.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1506.FontStyle := FontStyle1507;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1505.Geometry := Text1506;
{ METHOD .FdChildren.Add }
Billboard1504.FdChildren.Add(Shape1505);
{ METHOD .FdChildren.Add }
HAnimSite1501.FdChildren.Add(Billboard1504);
{ METHOD .FdChildren.Add }
HAnimSegment1493.FdChildren.Add(HAnimSite1501);
{ METHOD .FdChildren.Add }
HAnimJoint1492.FdChildren.Add(HAnimSegment1493);
HAnimJoint1508 := THAnimJointNode.Create;;
HAnimJoint1508.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimSegment1509 := THAnimSegmentNode.Create;;
Transform1510 := TTransformNode.Create;;
Transform1510.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1511 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1511.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1510.FdChildren.Add(Transform1511);
{ METHOD .FdChildren.Add }
HAnimSegment1509.FdChildren.Add(Transform1510);
Shape1513 := TShapeNode.Create;;
LineSet1514 := TLineSetNode.Create;;
end;

procedure InitHumanoid3Part119;
begin

LineSet1514.SetVertexCount([2]);
Coordinate1515 := TCoordinateNode.Create;;
Coordinate1515.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1514.Coord := Coordinate1515;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1514.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1513.Geometry := LineSet1514;
{ METHOD .FdChildren.Add }
HAnimSegment1509.FdChildren.Add(Shape1513);
{ METHOD .FdChildren.Add }
HAnimJoint1508.FdChildren.Add(HAnimSegment1509);
HAnimJoint1517 := THAnimJointNode.Create;;
HAnimJoint1517.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimSegment1518 := THAnimSegmentNode.Create;;
Transform1519 := TTransformNode.Create;;
Transform1519.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1520 := TTransformNode.Create;;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1520.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1519.FdChildren.Add(Transform1520);
{ METHOD .FdChildren.Add }
HAnimSegment1518.FdChildren.Add(Transform1519);
Shape1522 := TShapeNode.Create;;
LineSet1523 := TLineSetNode.Create;;
LineSet1523.SetVertexCount([2]);
Coordinate1524 := TCoordinateNode.Create;;
Coordinate1524.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1523.Coord := Coordinate1524;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1523.Color := ColorRGBA27;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1522.Geometry := LineSet1523;
{ METHOD .FdChildren.Add }
HAnimSegment1518.FdChildren.Add(Shape1522);
{ METHOD .FdChildren.Add }
HAnimJoint1517.FdChildren.Add(HAnimSegment1518);
HAnimJoint1526 := THAnimJointNode.Create;;
HAnimJoint1526.Center := Vector3(-0.1908,0.754,-0.096);
{ METHOD .FdChildren.Add }
HAnimJoint1517.FdChildren.Add(HAnimJoint1526);
{ METHOD .FdChildren.Add }
HAnimJoint1508.FdChildren.Add(HAnimJoint1517);
end;

procedure InitHumanoid3Part120;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1492.FdChildren.Add(HAnimJoint1508);
{ METHOD .FdChildren.Add }
HAnimJoint1343.FdChildren.Add(HAnimJoint1492);
{ METHOD .FdChildren.Add }
HAnimJoint1306.FdChildren.Add(HAnimJoint1343);
{ METHOD .FdChildren.Add }
HAnimJoint1283.FdChildren.Add(HAnimJoint1306);
{ METHOD .FdChildren.Add }
HAnimJoint1274.FdChildren.Add(HAnimJoint1283);
{ METHOD .FdChildren.Add }
HAnimJoint1230.FdChildren.Add(HAnimJoint1274);
{ METHOD .FdChildren.Add }
HAnimJoint701.FdChildren.Add(HAnimJoint1230);
{ METHOD .FdChildren.Add }
HAnimJoint692.FdChildren.Add(HAnimJoint701);
{ METHOD .FdChildren.Add }
HAnimJoint683.FdChildren.Add(HAnimJoint692);
{ METHOD .FdChildren.Add }
HAnimJoint674.FdChildren.Add(HAnimJoint683);
{ METHOD .FdChildren.Add }
HAnimJoint658.FdChildren.Add(HAnimJoint674);
{ METHOD .FdChildren.Add }
HAnimJoint621.FdChildren.Add(HAnimJoint658);
{ METHOD .FdChildren.Add }
HAnimJoint612.FdChildren.Add(HAnimJoint621);
{ METHOD .FdChildren.Add }
HAnimJoint603.FdChildren.Add(HAnimJoint612);
{ METHOD .FdChildren.Add }
HAnimJoint580.FdChildren.Add(HAnimJoint603);
{ METHOD .FdChildren.Add }
HAnimJoint564.FdChildren.Add(HAnimJoint580);
{ METHOD .FdChildren.Add }
HAnimJoint555.FdChildren.Add(HAnimJoint564);
{ METHOD .FdChildren.Add }
HAnimJoint546.FdChildren.Add(HAnimJoint555);
{ METHOD .FdChildren.Add }
HAnimJoint537.FdChildren.Add(HAnimJoint546);
{ METHOD .FdChildren.Add }
HAnimJoint507.FdChildren.Add(HAnimJoint537);
{ METHOD .FdChildren.Add }
HAnimJoint498.FdChildren.Add(HAnimJoint507);
{ METHOD .FdChildren.Add }
HAnimJoint489.FdChildren.Add(HAnimJoint498);
{ METHOD .FdChildren.Add }
HAnimJoint459.FdChildren.Add(HAnimJoint489);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint459);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid38.FdSkeleton.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint60);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint143);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint180);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint210);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint233);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint242);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint300);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint301);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint338);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint368);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint391);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint400);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint458);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint459);
end;

procedure InitHumanoid3Part121;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint489);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint498);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint507);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint537);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint546);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint555);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint564);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint580);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint603);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint612);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint621);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint658);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint674);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint683);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint692);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint701);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint732);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint755);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint764);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint773);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint782);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint791);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint807);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint816);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint926);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint927);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint928);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint929);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint930);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint931);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint932);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint933);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint977);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint986);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1009);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1046);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1078);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1087);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1096);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1097);
end;

procedure InitHumanoid3Part122;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1113);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1122);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1131);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1132);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1148);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1157);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1166);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1167);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1176);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1185);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1194);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1195);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1211);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1220);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1229);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1230);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1274);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1283);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1306);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1343);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1375);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1384);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1393);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1394);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1410);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1419);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1428);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1429);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1445);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1454);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1463);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1464);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1473);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1482);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1491);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1492);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1508);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1517);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1526);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(HAnimHumanoid38);
end;

procedure InitHumanoid3Part123;
begin

{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateHumanoid3: TX3DRootNode;
begin
InitHumanoid3Part0;
InitHumanoid3Part1;
InitHumanoid3Part2;
InitHumanoid3Part3;
InitHumanoid3Part4;
InitHumanoid3Part5;
InitHumanoid3Part6;
InitHumanoid3Part7;
InitHumanoid3Part8;
InitHumanoid3Part9;
InitHumanoid3Part10;
InitHumanoid3Part11;
InitHumanoid3Part12;
InitHumanoid3Part13;
InitHumanoid3Part14;
InitHumanoid3Part15;
InitHumanoid3Part16;
InitHumanoid3Part17;
InitHumanoid3Part18;
InitHumanoid3Part19;
InitHumanoid3Part20;
InitHumanoid3Part21;
InitHumanoid3Part22;
InitHumanoid3Part23;
InitHumanoid3Part24;
InitHumanoid3Part25;
InitHumanoid3Part26;
InitHumanoid3Part27;
InitHumanoid3Part28;
InitHumanoid3Part29;
InitHumanoid3Part30;
InitHumanoid3Part31;
InitHumanoid3Part32;
InitHumanoid3Part33;
InitHumanoid3Part34;
InitHumanoid3Part35;
InitHumanoid3Part36;
InitHumanoid3Part37;
InitHumanoid3Part38;
InitHumanoid3Part39;
InitHumanoid3Part40;
InitHumanoid3Part41;
InitHumanoid3Part42;
InitHumanoid3Part43;
InitHumanoid3Part44;
InitHumanoid3Part45;
InitHumanoid3Part46;
InitHumanoid3Part47;
InitHumanoid3Part48;
InitHumanoid3Part49;
InitHumanoid3Part50;
InitHumanoid3Part51;
InitHumanoid3Part52;
InitHumanoid3Part53;
InitHumanoid3Part54;
InitHumanoid3Part55;
InitHumanoid3Part56;
InitHumanoid3Part57;
InitHumanoid3Part58;
InitHumanoid3Part59;
InitHumanoid3Part60;
InitHumanoid3Part61;
InitHumanoid3Part62;
InitHumanoid3Part63;
InitHumanoid3Part64;
InitHumanoid3Part65;
InitHumanoid3Part66;
InitHumanoid3Part67;
InitHumanoid3Part68;
InitHumanoid3Part69;
InitHumanoid3Part70;
InitHumanoid3Part71;
InitHumanoid3Part72;
InitHumanoid3Part73;
InitHumanoid3Part74;
InitHumanoid3Part75;
InitHumanoid3Part76;
InitHumanoid3Part77;
InitHumanoid3Part78;
InitHumanoid3Part79;
InitHumanoid3Part80;
InitHumanoid3Part81;
InitHumanoid3Part82;
InitHumanoid3Part83;
InitHumanoid3Part84;
InitHumanoid3Part85;
InitHumanoid3Part86;
InitHumanoid3Part87;
InitHumanoid3Part88;
InitHumanoid3Part89;
InitHumanoid3Part90;
InitHumanoid3Part91;
InitHumanoid3Part92;
InitHumanoid3Part93;
InitHumanoid3Part94;
InitHumanoid3Part95;
InitHumanoid3Part96;
InitHumanoid3Part97;
InitHumanoid3Part98;
InitHumanoid3Part99;
InitHumanoid3Part100;
InitHumanoid3Part101;
InitHumanoid3Part102;
InitHumanoid3Part103;
InitHumanoid3Part104;
InitHumanoid3Part105;
InitHumanoid3Part106;
InitHumanoid3Part107;
InitHumanoid3Part108;
InitHumanoid3Part109;
InitHumanoid3Part110;
InitHumanoid3Part111;
InitHumanoid3Part112;
InitHumanoid3Part113;
InitHumanoid3Part114;
InitHumanoid3Part115;
InitHumanoid3Part116;
InitHumanoid3Part117;
InitHumanoid3Part118;
InitHumanoid3Part119;
InitHumanoid3Part120;
InitHumanoid3Part121;
InitHumanoid3Part122;
InitHumanoid3Part123;
Result := X3D0;
end;

begin
end.
