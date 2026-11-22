unit Humanoid2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHumanoid2: TX3DRootNode;

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
HAnimSite498: THAnimSiteNode;
TouchSensor499: TTouchSensorNode;
Shape500: TShapeNode;
Billboard501: TBillboardNode;
Shape502: TShapeNode;
Text503: TTextNode;
FontStyle504: TFontStyleNode;
HAnimSite505: THAnimSiteNode;
TouchSensor506: TTouchSensorNode;
Shape507: TShapeNode;
Billboard508: TBillboardNode;
Shape509: TShapeNode;
Text510: TTextNode;
FontStyle511: TFontStyleNode;
HAnimSite512: THAnimSiteNode;
TouchSensor513: TTouchSensorNode;
Shape514: TShapeNode;
Billboard515: TBillboardNode;
Shape516: TShapeNode;
Text517: TTextNode;
FontStyle518: TFontStyleNode;
HAnimSite519: THAnimSiteNode;
TouchSensor520: TTouchSensorNode;
Shape521: TShapeNode;
Billboard522: TBillboardNode;
Shape523: TShapeNode;
Text524: TTextNode;
FontStyle525: TFontStyleNode;
HAnimJoint526: THAnimJointNode;
HAnimSegment527: THAnimSegmentNode;
Transform528: TTransformNode;
Transform529: TTransformNode;
Shape530: TShapeNode;
Shape531: TShapeNode;
LineSet532: TLineSetNode;
Coordinate533: TCoordinateNode;
ColorRGBA534: TColorRGBANode;
HAnimJoint535: THAnimJointNode;
HAnimSegment536: THAnimSegmentNode;
Transform537: TTransformNode;
Transform538: TTransformNode;
Shape539: TShapeNode;
Shape540: TShapeNode;
LineSet541: TLineSetNode;
Coordinate542: TCoordinateNode;
ColorRGBA543: TColorRGBANode;
HAnimSite544: THAnimSiteNode;
TouchSensor545: TTouchSensorNode;
Shape546: TShapeNode;
Billboard547: TBillboardNode;
Shape548: TShapeNode;
Text549: TTextNode;
FontStyle550: TFontStyleNode;
HAnimSite551: THAnimSiteNode;
TouchSensor552: TTouchSensorNode;
Shape553: TShapeNode;
Billboard554: TBillboardNode;
Shape555: TShapeNode;
Text556: TTextNode;
FontStyle557: TFontStyleNode;
HAnimSite558: THAnimSiteNode;
TouchSensor559: TTouchSensorNode;
Shape560: TShapeNode;
Billboard561: TBillboardNode;
Shape562: TShapeNode;
Text563: TTextNode;
FontStyle564: TFontStyleNode;
HAnimJoint565: THAnimJointNode;
HAnimSegment566: THAnimSegmentNode;
Transform567: TTransformNode;
Transform568: TTransformNode;
Shape569: TShapeNode;
Shape570: TShapeNode;
LineSet571: TLineSetNode;
Coordinate572: TCoordinateNode;
ColorRGBA573: TColorRGBANode;
HAnimSite574: THAnimSiteNode;
TouchSensor575: TTouchSensorNode;
Shape576: TShapeNode;
Billboard577: TBillboardNode;
Shape578: TShapeNode;
Text579: TTextNode;
FontStyle580: TFontStyleNode;
HAnimSite581: THAnimSiteNode;
TouchSensor582: TTouchSensorNode;
Shape583: TShapeNode;
Billboard584: TBillboardNode;
Shape585: TShapeNode;
Text586: TTextNode;
FontStyle587: TFontStyleNode;
HAnimSite588: THAnimSiteNode;
TouchSensor589: TTouchSensorNode;
Shape590: TShapeNode;
Billboard591: TBillboardNode;
Shape592: TShapeNode;
Text593: TTextNode;
FontStyle594: TFontStyleNode;
HAnimSite595: THAnimSiteNode;
TouchSensor596: TTouchSensorNode;
Shape597: TShapeNode;
Billboard598: TBillboardNode;
Shape599: TShapeNode;
Text600: TTextNode;
FontStyle601: TFontStyleNode;
HAnimJoint602: THAnimJointNode;
HAnimSegment603: THAnimSegmentNode;
Transform604: TTransformNode;
Transform605: TTransformNode;
Shape606: TShapeNode;
Shape607: TShapeNode;
LineSet608: TLineSetNode;
Coordinate609: TCoordinateNode;
ColorRGBA610: TColorRGBANode;
HAnimSite611: THAnimSiteNode;
TouchSensor612: TTouchSensorNode;
Shape613: TShapeNode;
Billboard614: TBillboardNode;
Shape615: TShapeNode;
Text616: TTextNode;
FontStyle617: TFontStyleNode;
HAnimSite618: THAnimSiteNode;
TouchSensor619: TTouchSensorNode;
Shape620: TShapeNode;
Billboard621: TBillboardNode;
Shape622: TShapeNode;
Text623: TTextNode;
FontStyle624: TFontStyleNode;
HAnimSite625: THAnimSiteNode;
TouchSensor626: TTouchSensorNode;
Shape627: TShapeNode;
Billboard628: TBillboardNode;
Shape629: TShapeNode;
Text630: TTextNode;
FontStyle631: TFontStyleNode;
HAnimSite632: THAnimSiteNode;
TouchSensor633: TTouchSensorNode;
Shape634: TShapeNode;
Billboard635: TBillboardNode;
Shape636: TShapeNode;
Text637: TTextNode;
FontStyle638: TFontStyleNode;
Shape639: TShapeNode;
LineSet640: TLineSetNode;
Coordinate641: TCoordinateNode;
ColorRGBA642: TColorRGBANode;
Shape643: TShapeNode;
LineSet644: TLineSetNode;
Coordinate645: TCoordinateNode;
ColorRGBA646: TColorRGBANode;
HAnimJoint647: THAnimJointNode;
HAnimSegment648: THAnimSegmentNode;
Transform649: TTransformNode;
Transform650: TTransformNode;
Shape651: TShapeNode;
Shape652: TShapeNode;
LineSet653: TLineSetNode;
Coordinate654: TCoordinateNode;
ColorRGBA655: TColorRGBANode;
HAnimJoint656: THAnimJointNode;
HAnimSegment657: THAnimSegmentNode;
Transform658: TTransformNode;
Transform659: TTransformNode;
Shape660: TShapeNode;
Shape661: TShapeNode;
LineSet662: TLineSetNode;
Coordinate663: TCoordinateNode;
ColorRGBA664: TColorRGBANode;
HAnimSite665: THAnimSiteNode;
TouchSensor666: TTouchSensorNode;
Shape667: TShapeNode;
Billboard668: TBillboardNode;
Shape669: TShapeNode;
Text670: TTextNode;
FontStyle671: TFontStyleNode;
HAnimJoint672: THAnimJointNode;
HAnimJoint673: THAnimJointNode;
HAnimSegment674: THAnimSegmentNode;
Transform675: TTransformNode;
Transform676: TTransformNode;
Shape677: TShapeNode;
Shape678: TShapeNode;
LineSet679: TLineSetNode;
Coordinate680: TCoordinateNode;
ColorRGBA681: TColorRGBANode;
HAnimSite682: THAnimSiteNode;
TouchSensor683: TTouchSensorNode;
Shape684: TShapeNode;
Billboard685: TBillboardNode;
Shape686: TShapeNode;
Text687: TTextNode;
FontStyle688: TFontStyleNode;
HAnimSite689: THAnimSiteNode;
TouchSensor690: TTouchSensorNode;
Shape691: TShapeNode;
Billboard692: TBillboardNode;
Shape693: TShapeNode;
Text694: TTextNode;
FontStyle695: TFontStyleNode;
HAnimSite696: THAnimSiteNode;
TouchSensor697: TTouchSensorNode;
Shape698: TShapeNode;
Billboard699: TBillboardNode;
Shape700: TShapeNode;
Text701: TTextNode;
FontStyle702: TFontStyleNode;
HAnimSite703: THAnimSiteNode;
TouchSensor704: TTouchSensorNode;
Shape705: TShapeNode;
Billboard706: TBillboardNode;
Shape707: TShapeNode;
Text708: TTextNode;
FontStyle709: TFontStyleNode;
HAnimSite710: THAnimSiteNode;
TouchSensor711: TTouchSensorNode;
Shape712: TShapeNode;
Billboard713: TBillboardNode;
Shape714: TShapeNode;
Text715: TTextNode;
FontStyle716: TFontStyleNode;
HAnimJoint717: THAnimJointNode;
HAnimSegment718: THAnimSegmentNode;
Transform719: TTransformNode;
Transform720: TTransformNode;
Shape721: TShapeNode;
Shape722: TShapeNode;
LineSet723: TLineSetNode;
Coordinate724: TCoordinateNode;
ColorRGBA725: TColorRGBANode;
HAnimJoint726: THAnimJointNode;
HAnimSegment727: THAnimSegmentNode;
Transform728: TTransformNode;
Transform729: TTransformNode;
Shape730: TShapeNode;
Shape731: TShapeNode;
LineSet732: TLineSetNode;
Coordinate733: TCoordinateNode;
ColorRGBA734: TColorRGBANode;
HAnimSite735: THAnimSiteNode;
TouchSensor736: TTouchSensorNode;
Shape737: TShapeNode;
Billboard738: TBillboardNode;
Shape739: TShapeNode;
Text740: TTextNode;
FontStyle741: TFontStyleNode;
HAnimSite742: THAnimSiteNode;
TouchSensor743: TTouchSensorNode;
Shape744: TShapeNode;
Billboard745: TBillboardNode;
Shape746: TShapeNode;
Text747: TTextNode;
FontStyle748: TFontStyleNode;
HAnimJoint749: THAnimJointNode;
HAnimSegment750: THAnimSegmentNode;
Transform751: TTransformNode;
Transform752: TTransformNode;
Shape753: TShapeNode;
Shape754: TShapeNode;
LineSet755: TLineSetNode;
Coordinate756: TCoordinateNode;
ColorRGBA757: TColorRGBANode;
HAnimSite758: THAnimSiteNode;
TouchSensor759: TTouchSensorNode;
Shape760: TShapeNode;
Billboard761: TBillboardNode;
Shape762: TShapeNode;
Text763: TTextNode;
FontStyle764: TFontStyleNode;
HAnimSite765: THAnimSiteNode;
TouchSensor766: TTouchSensorNode;
Shape767: TShapeNode;
Billboard768: TBillboardNode;
Shape769: TShapeNode;
Text770: TTextNode;
FontStyle771: TFontStyleNode;
HAnimSite772: THAnimSiteNode;
TouchSensor773: TTouchSensorNode;
Shape774: TShapeNode;
Billboard775: TBillboardNode;
Shape776: TShapeNode;
Text777: TTextNode;
FontStyle778: TFontStyleNode;
HAnimSite779: THAnimSiteNode;
TouchSensor780: TTouchSensorNode;
Shape781: TShapeNode;
Billboard782: TBillboardNode;
Shape783: TShapeNode;
Text784: TTextNode;
FontStyle785: TFontStyleNode;
HAnimJoint786: THAnimJointNode;
HAnimSegment787: THAnimSegmentNode;
Transform788: TTransformNode;
Transform789: TTransformNode;
Shape790: TShapeNode;
Shape791: TShapeNode;
LineSet792: TLineSetNode;
Coordinate793: TCoordinateNode;
ColorRGBA794: TColorRGBANode;
HAnimSite795: THAnimSiteNode;
TouchSensor796: TTouchSensorNode;
Shape797: TShapeNode;
Billboard798: TBillboardNode;
Shape799: TShapeNode;
Text800: TTextNode;
FontStyle801: TFontStyleNode;
Shape802: TShapeNode;
LineSet803: TLineSetNode;
Coordinate804: TCoordinateNode;
ColorRGBA805: TColorRGBANode;
Shape806: TShapeNode;
LineSet807: TLineSetNode;
Coordinate808: TCoordinateNode;
ColorRGBA809: TColorRGBANode;
Shape810: TShapeNode;
LineSet811: TLineSetNode;
Coordinate812: TCoordinateNode;
ColorRGBA813: TColorRGBANode;
Shape814: TShapeNode;
LineSet815: TLineSetNode;
Coordinate816: TCoordinateNode;
ColorRGBA817: TColorRGBANode;
HAnimJoint818: THAnimJointNode;
HAnimSegment819: THAnimSegmentNode;
Transform820: TTransformNode;
Transform821: TTransformNode;
Shape822: TShapeNode;
Shape823: TShapeNode;
LineSet824: TLineSetNode;
Coordinate825: TCoordinateNode;
ColorRGBA826: TColorRGBANode;
HAnimJoint827: THAnimJointNode;
HAnimSegment828: THAnimSegmentNode;
Transform829: TTransformNode;
Transform830: TTransformNode;
Shape831: TShapeNode;
Shape832: TShapeNode;
LineSet833: TLineSetNode;
Coordinate834: TCoordinateNode;
ColorRGBA835: TColorRGBANode;
HAnimJoint836: THAnimJointNode;
HAnimJoint837: THAnimJointNode;
HAnimSegment838: THAnimSegmentNode;
Transform839: TTransformNode;
Transform840: TTransformNode;
Shape841: TShapeNode;
Shape842: TShapeNode;
LineSet843: TLineSetNode;
Coordinate844: TCoordinateNode;
ColorRGBA845: TColorRGBANode;
HAnimSite846: THAnimSiteNode;
TouchSensor847: TTouchSensorNode;
Shape848: TShapeNode;
Billboard849: TBillboardNode;
Shape850: TShapeNode;
Text851: TTextNode;
FontStyle852: TFontStyleNode;
HAnimJoint853: THAnimJointNode;
HAnimSegment854: THAnimSegmentNode;
Transform855: TTransformNode;
Transform856: TTransformNode;
Shape857: TShapeNode;
Shape858: TShapeNode;
LineSet859: TLineSetNode;
Coordinate860: TCoordinateNode;
ColorRGBA861: TColorRGBANode;
HAnimJoint862: THAnimJointNode;
HAnimSegment863: THAnimSegmentNode;
Transform864: TTransformNode;
Transform865: TTransformNode;
Shape866: TShapeNode;
Shape867: TShapeNode;
LineSet868: TLineSetNode;
Coordinate869: TCoordinateNode;
ColorRGBA870: TColorRGBANode;
HAnimJoint871: THAnimJointNode;
HAnimJoint872: THAnimJointNode;
HAnimSegment873: THAnimSegmentNode;
Transform874: TTransformNode;
Transform875: TTransformNode;
Shape876: TShapeNode;
Shape877: TShapeNode;
LineSet878: TLineSetNode;
Coordinate879: TCoordinateNode;
ColorRGBA880: TColorRGBANode;
HAnimSite881: THAnimSiteNode;
TouchSensor882: TTouchSensorNode;
Shape883: TShapeNode;
Billboard884: TBillboardNode;
Shape885: TShapeNode;
Text886: TTextNode;
FontStyle887: TFontStyleNode;
HAnimJoint888: THAnimJointNode;
HAnimSegment889: THAnimSegmentNode;
Transform890: TTransformNode;
Transform891: TTransformNode;
Shape892: TShapeNode;
Shape893: TShapeNode;
LineSet894: TLineSetNode;
Coordinate895: TCoordinateNode;
ColorRGBA896: TColorRGBANode;
HAnimJoint897: THAnimJointNode;
HAnimSegment898: THAnimSegmentNode;
Transform899: TTransformNode;
Transform900: TTransformNode;
Shape901: TShapeNode;
Shape902: TShapeNode;
LineSet903: TLineSetNode;
Coordinate904: TCoordinateNode;
ColorRGBA905: TColorRGBANode;
HAnimJoint906: THAnimJointNode;
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
HAnimJoint935: THAnimJointNode;
HAnimSegment936: THAnimSegmentNode;
Transform937: TTransformNode;
Transform938: TTransformNode;
Shape939: TShapeNode;
Shape940: TShapeNode;
LineSet941: TLineSetNode;
Coordinate942: TCoordinateNode;
ColorRGBA943: TColorRGBANode;
HAnimSite944: THAnimSiteNode;
TouchSensor945: TTouchSensorNode;
Shape946: TShapeNode;
Billboard947: TBillboardNode;
Shape948: TShapeNode;
Text949: TTextNode;
FontStyle950: TFontStyleNode;
HAnimJoint951: THAnimJointNode;
HAnimSegment952: THAnimSegmentNode;
Transform953: TTransformNode;
Transform954: TTransformNode;
Shape955: TShapeNode;
Shape956: TShapeNode;
LineSet957: TLineSetNode;
Coordinate958: TCoordinateNode;
ColorRGBA959: TColorRGBANode;
HAnimJoint960: THAnimJointNode;
HAnimSegment961: THAnimSegmentNode;
Transform962: TTransformNode;
Transform963: TTransformNode;
Shape964: TShapeNode;
Shape965: TShapeNode;
LineSet966: TLineSetNode;
Coordinate967: TCoordinateNode;
ColorRGBA968: TColorRGBANode;
HAnimJoint969: THAnimJointNode;
HAnimJoint970: THAnimJointNode;
HAnimSegment971: THAnimSegmentNode;
Transform972: TTransformNode;
Transform973: TTransformNode;
Shape974: TShapeNode;
Shape975: TShapeNode;
LineSet976: TLineSetNode;
Coordinate977: TCoordinateNode;
ColorRGBA978: TColorRGBANode;
HAnimSite979: THAnimSiteNode;
TouchSensor980: TTouchSensorNode;
Shape981: TShapeNode;
Billboard982: TBillboardNode;
Shape983: TShapeNode;
Text984: TTextNode;
FontStyle985: TFontStyleNode;
HAnimSite986: THAnimSiteNode;
TouchSensor987: TTouchSensorNode;
Shape988: TShapeNode;
Billboard989: TBillboardNode;
Shape990: TShapeNode;
Text991: TTextNode;
FontStyle992: TFontStyleNode;
HAnimSite993: THAnimSiteNode;
TouchSensor994: TTouchSensorNode;
Shape995: TShapeNode;
Billboard996: TBillboardNode;
Shape997: TShapeNode;
Text998: TTextNode;
FontStyle999: TFontStyleNode;
HAnimSite1000: THAnimSiteNode;
TouchSensor1001: TTouchSensorNode;
Shape1002: TShapeNode;
Billboard1003: TBillboardNode;
Shape1004: TShapeNode;
Text1005: TTextNode;
FontStyle1006: TFontStyleNode;
HAnimSite1007: THAnimSiteNode;
TouchSensor1008: TTouchSensorNode;
Shape1009: TShapeNode;
Billboard1010: TBillboardNode;
Shape1011: TShapeNode;
Text1012: TTextNode;
FontStyle1013: TFontStyleNode;
HAnimJoint1014: THAnimJointNode;
HAnimSegment1015: THAnimSegmentNode;
Transform1016: TTransformNode;
Transform1017: TTransformNode;
Shape1018: TShapeNode;
Shape1019: TShapeNode;
LineSet1020: TLineSetNode;
Coordinate1021: TCoordinateNode;
ColorRGBA1022: TColorRGBANode;
HAnimJoint1023: THAnimJointNode;
HAnimSegment1024: THAnimSegmentNode;
Transform1025: TTransformNode;
Transform1026: TTransformNode;
Shape1027: TShapeNode;
Shape1028: TShapeNode;
LineSet1029: TLineSetNode;
Coordinate1030: TCoordinateNode;
ColorRGBA1031: TColorRGBANode;
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
HAnimSite1062: THAnimSiteNode;
TouchSensor1063: TTouchSensorNode;
Shape1064: TShapeNode;
Billboard1065: TBillboardNode;
Shape1066: TShapeNode;
Text1067: TTextNode;
FontStyle1068: TFontStyleNode;
HAnimSite1069: THAnimSiteNode;
TouchSensor1070: TTouchSensorNode;
Shape1071: TShapeNode;
Billboard1072: TBillboardNode;
Shape1073: TShapeNode;
Text1074: TTextNode;
FontStyle1075: TFontStyleNode;
HAnimSite1076: THAnimSiteNode;
TouchSensor1077: TTouchSensorNode;
Shape1078: TShapeNode;
Billboard1079: TBillboardNode;
Shape1080: TShapeNode;
Text1081: TTextNode;
FontStyle1082: TFontStyleNode;
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
Billboard1095: TBillboardNode;
Shape1096: TShapeNode;
Text1097: TTextNode;
FontStyle1098: TFontStyleNode;
Shape1099: TShapeNode;
LineSet1100: TLineSetNode;
Coordinate1101: TCoordinateNode;
ColorRGBA1102: TColorRGBANode;
Shape1103: TShapeNode;
LineSet1104: TLineSetNode;
Coordinate1105: TCoordinateNode;
ColorRGBA1106: TColorRGBANode;
Shape1107: TShapeNode;
LineSet1108: TLineSetNode;
Coordinate1109: TCoordinateNode;
ColorRGBA1110: TColorRGBANode;
Shape1111: TShapeNode;
LineSet1112: TLineSetNode;
Coordinate1113: TCoordinateNode;
ColorRGBA1114: TColorRGBANode;
HAnimJoint1115: THAnimJointNode;
HAnimSegment1116: THAnimSegmentNode;
Transform1117: TTransformNode;
Transform1118: TTransformNode;
Shape1119: TShapeNode;
Shape1120: TShapeNode;
LineSet1121: TLineSetNode;
Coordinate1122: TCoordinateNode;
ColorRGBA1123: TColorRGBANode;
HAnimJoint1124: THAnimJointNode;
HAnimSegment1125: THAnimSegmentNode;
Transform1126: TTransformNode;
Transform1127: TTransformNode;
Shape1128: TShapeNode;
Shape1129: TShapeNode;
LineSet1130: TLineSetNode;
Coordinate1131: TCoordinateNode;
ColorRGBA1132: TColorRGBANode;
HAnimJoint1133: THAnimJointNode;
HAnimJoint1134: THAnimJointNode;
HAnimSegment1135: THAnimSegmentNode;
Transform1136: TTransformNode;
Transform1137: TTransformNode;
Shape1138: TShapeNode;
Shape1139: TShapeNode;
LineSet1140: TLineSetNode;
Coordinate1141: TCoordinateNode;
ColorRGBA1142: TColorRGBANode;
HAnimSite1143: THAnimSiteNode;
TouchSensor1144: TTouchSensorNode;
Shape1145: TShapeNode;
Billboard1146: TBillboardNode;
Shape1147: TShapeNode;
Text1148: TTextNode;
FontStyle1149: TFontStyleNode;
HAnimJoint1150: THAnimJointNode;
HAnimSegment1151: THAnimSegmentNode;
Transform1152: TTransformNode;
Transform1153: TTransformNode;
Shape1154: TShapeNode;
Shape1155: TShapeNode;
LineSet1156: TLineSetNode;
Coordinate1157: TCoordinateNode;
ColorRGBA1158: TColorRGBANode;
HAnimJoint1159: THAnimJointNode;
HAnimSegment1160: THAnimSegmentNode;
Transform1161: TTransformNode;
Transform1162: TTransformNode;
Shape1163: TShapeNode;
Shape1164: TShapeNode;
LineSet1165: TLineSetNode;
Coordinate1166: TCoordinateNode;
ColorRGBA1167: TColorRGBANode;
HAnimJoint1168: THAnimJointNode;
HAnimJoint1169: THAnimJointNode;
HAnimSegment1170: THAnimSegmentNode;
Transform1171: TTransformNode;
Transform1172: TTransformNode;
Shape1173: TShapeNode;
Shape1174: TShapeNode;
LineSet1175: TLineSetNode;
Coordinate1176: TCoordinateNode;
ColorRGBA1177: TColorRGBANode;
HAnimSite1178: THAnimSiteNode;
TouchSensor1179: TTouchSensorNode;
Shape1180: TShapeNode;
Billboard1181: TBillboardNode;
Shape1182: TShapeNode;
Text1183: TTextNode;
FontStyle1184: TFontStyleNode;
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
HAnimSegment1195: THAnimSegmentNode;
Transform1196: TTransformNode;
Transform1197: TTransformNode;
Shape1198: TShapeNode;
Shape1199: TShapeNode;
LineSet1200: TLineSetNode;
Coordinate1201: TCoordinateNode;
ColorRGBA1202: TColorRGBANode;
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
HAnimJoint1213: THAnimJointNode;
HAnimSegment1214: THAnimSegmentNode;
Transform1215: TTransformNode;
Transform1216: TTransformNode;
Shape1217: TShapeNode;
Shape1218: TShapeNode;
LineSet1219: TLineSetNode;
Coordinate1220: TCoordinateNode;
ColorRGBA1221: TColorRGBANode;
HAnimJoint1222: THAnimJointNode;
HAnimSegment1223: THAnimSegmentNode;
Transform1224: TTransformNode;
Transform1225: TTransformNode;
Shape1226: TShapeNode;
Shape1227: TShapeNode;
LineSet1228: TLineSetNode;
Coordinate1229: TCoordinateNode;
ColorRGBA1230: TColorRGBANode;
HAnimJoint1231: THAnimJointNode;
HAnimJoint1232: THAnimJointNode;
HAnimSegment1233: THAnimSegmentNode;
Transform1234: TTransformNode;
Transform1235: TTransformNode;
Shape1236: TShapeNode;
Shape1237: TShapeNode;
LineSet1238: TLineSetNode;
Coordinate1239: TCoordinateNode;
ColorRGBA1240: TColorRGBANode;
HAnimSite1241: THAnimSiteNode;
TouchSensor1242: TTouchSensorNode;
Shape1243: TShapeNode;
Billboard1244: TBillboardNode;
Shape1245: TShapeNode;
Text1246: TTextNode;
FontStyle1247: TFontStyleNode;
HAnimJoint1248: THAnimJointNode;
HAnimSegment1249: THAnimSegmentNode;
Transform1250: TTransformNode;
Transform1251: TTransformNode;
Shape1252: TShapeNode;
Shape1253: TShapeNode;
LineSet1254: TLineSetNode;
Coordinate1255: TCoordinateNode;
ColorRGBA1256: TColorRGBANode;
HAnimJoint1257: THAnimJointNode;
HAnimSegment1258: THAnimSegmentNode;
Transform1259: TTransformNode;
Transform1260: TTransformNode;
Shape1261: TShapeNode;
Shape1262: TShapeNode;
LineSet1263: TLineSetNode;
Coordinate1264: TCoordinateNode;
ColorRGBA1265: TColorRGBANode;
HAnimJoint1266: THAnimJointNode;
HAnimJoint1267: THAnimJointNode;
HAnimJoint1268: THAnimJointNode;
HAnimJoint1269: THAnimJointNode;
HAnimJoint1270: THAnimJointNode;
HAnimJoint1271: THAnimJointNode;
HAnimJoint1272: THAnimJointNode;
HAnimJoint1273: THAnimJointNode;
HAnimJoint1274: THAnimJointNode;
HAnimJoint1275: THAnimJointNode;
HAnimJoint1276: THAnimJointNode;
HAnimJoint1277: THAnimJointNode;
HAnimJoint1278: THAnimJointNode;
HAnimJoint1279: THAnimJointNode;
HAnimJoint1280: THAnimJointNode;
HAnimJoint1281: THAnimJointNode;
HAnimJoint1282: THAnimJointNode;
HAnimJoint1283: THAnimJointNode;
HAnimJoint1284: THAnimJointNode;
HAnimJoint1285: THAnimJointNode;
HAnimJoint1286: THAnimJointNode;
HAnimJoint1287: THAnimJointNode;
HAnimJoint1288: THAnimJointNode;
HAnimJoint1289: THAnimJointNode;
HAnimJoint1290: THAnimJointNode;
HAnimJoint1291: THAnimJointNode;
HAnimJoint1292: THAnimJointNode;
HAnimJoint1293: THAnimJointNode;
HAnimJoint1294: THAnimJointNode;
HAnimJoint1295: THAnimJointNode;
HAnimJoint1296: THAnimJointNode;
HAnimJoint1297: THAnimJointNode;
HAnimJoint1298: THAnimJointNode;
HAnimJoint1299: THAnimJointNode;
HAnimJoint1300: THAnimJointNode;
HAnimJoint1301: THAnimJointNode;
HAnimJoint1302: THAnimJointNode;
HAnimJoint1303: THAnimJointNode;
HAnimJoint1304: THAnimJointNode;
HAnimJoint1305: THAnimJointNode;
HAnimJoint1306: THAnimJointNode;
HAnimJoint1307: THAnimJointNode;
HAnimJoint1308: THAnimJointNode;
HAnimJoint1309: THAnimJointNode;
HAnimJoint1310: THAnimJointNode;
HAnimJoint1311: THAnimJointNode;
HAnimJoint1312: THAnimJointNode;
HAnimJoint1313: THAnimJointNode;
HAnimJoint1314: THAnimJointNode;
HAnimJoint1315: THAnimJointNode;
HAnimJoint1316: THAnimJointNode;
HAnimJoint1317: THAnimJointNode;
HAnimJoint1318: THAnimJointNode;
HAnimJoint1319: THAnimJointNode;
HAnimJoint1320: THAnimJointNode;
HAnimJoint1321: THAnimJointNode;
HAnimJoint1322: THAnimJointNode;
HAnimJoint1323: THAnimJointNode;
HAnimJoint1324: THAnimJointNode;
HAnimJoint1325: THAnimJointNode;
HAnimJoint1326: THAnimJointNode;
HAnimJoint1327: THAnimJointNode;
HAnimJoint1328: THAnimJointNode;
HAnimJoint1329: THAnimJointNode;
HAnimJoint1330: THAnimJointNode;
HAnimJoint1331: THAnimJointNode;
HAnimJoint1332: THAnimJointNode;
HAnimJoint1333: THAnimJointNode;
HAnimJoint1334: THAnimJointNode;
HAnimJoint1335: THAnimJointNode;
HAnimJoint1336: THAnimJointNode;
HAnimJoint1337: THAnimJointNode;

procedure InitHumanoid2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'Humanoid2.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d';
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
{ METHOD .Coord }
IndexedLineSet14.Coord := Coordinate15;
Color16 := TColorNode.Create;
Color16.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
IndexedLineSet14.Color := Color16;
{ METHOD .Geometry }
Shape13.Geometry := IndexedLineSet14;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Transform12);
Group17 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform18 := TTransformNode.Create;
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.02;
{ METHOD .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,0,0);
end;

procedure InitHumanoid2Part1;
begin

{ METHOD .SetMaterial }
Appearance22.Material := Material23;
{ METHOD .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform19);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.05,0);
Shape25 := TShapeNode.Create;
LineSet26 := TLineSetNode.Create;
LineSet26.SetVertexCount([2]);
ColorRGBA27 := TColorRGBANode.Create;
ColorRGBA27.SetColor([Vector4(1,1,0,0),Vector4(1,1,0,0)]);
{ METHOD .Color }
LineSet26.Color := ColorRGBA27;
Coordinate28 := TCoordinateNode.Create;
Coordinate28.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ METHOD .Coord }
LineSet26.Coord := Coordinate28;
{ METHOD .Geometry }
Shape25.Geometry := LineSet26;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.1,0);
Shape30 := TShapeNode.Create;
IndexedFaceSet31 := TIndexedFaceSetNode.Create;
IndexedFaceSet31.CreaseAngle := 0.5;
IndexedFaceSet31.Solid := False;
IndexedFaceSet31.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
IndexedFaceSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
IndexedFaceSet31.Coord := Coordinate33;
{ METHOD .Geometry }
Shape30.Geometry := IndexedFaceSet31;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.DiffuseColor := Vector3(1,1,1);
Material35.Transparency := 1;
{ METHOD .SetMaterial }
Appearance34.Material := Material35;
{ METHOD .Appearance }
Shape30.Appearance := Appearance34;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Transform29);
end;

procedure InitHumanoid2Part2;
begin

{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform18);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Group17);
NavigationInfo36 := TNavigationInfoNode.Create;
NavigationInfo36.Speed := 1.5;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo36);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Position := Vector3(0,1,3);
Viewpoint37.CenterOfRotation := Vector3(0,1,0);
Viewpoint37.Description := 'default';
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint37);
HAnimHumanoid38 := THAnimHumanoidNode.Create;
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
end;

procedure InitHumanoid2Part3;
begin

{ METHOD .Coord }
IndexedFaceSet40.Coord := Coordinate41;
Color42 := TColorNode.Create;
Color42.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ METHOD .Color }
IndexedFaceSet40.Color := Color42;
{ METHOD .Geometry }
Shape39.Geometry := IndexedFaceSet40;
Appearance43 := TAppearanceNode.Create;
ImageTexture44 := TImageTextureNode.Create;
ImageTexture44.Description := 'Blue Spiral Pattern';
ImageTexture44.SetUrl(['../data/zBlueSpiralBkg2.gif','zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
Appearance43.Texture := ImageTexture44;
Material45 := TMaterialNode.Create;
Material45.AmbientIntensity := 0.6;
Material45.DiffuseColor := Vector3(1,1,1);
Material45.Shininess := 0.6;
Material45.Transparency := 1;
{ METHOD .SetMaterial }
Appearance43.Material := Material45;
{ METHOD .Appearance }
Shape39.Appearance := Appearance43;
{ METHOD .SetSkin }
HAnimHumanoid38.Skin := Shape39;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid38.FdSkinCoord.Set(Coordinate41);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.Center := Vector3(0,0.824,0.0277);
HAnimSegment48 := THAnimSegmentNode.Create;
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0.824,0.0277);
Transform50 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform50.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Transform50);
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Transform49);
Shape52 := TShapeNode.Create;
LineSet53 := TLineSetNode.Create;
LineSet53.SetVertexCount([2]);
Coordinate54 := TCoordinateNode.Create;
end;

procedure InitHumanoid2Part4;
begin

Coordinate54.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
LineSet53.Coord := Coordinate54;
{ from humanoid_root to sacroiliac vertices 2 }
{ METHOD .Color }
LineSet53.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape52.Geometry := LineSet53;
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Shape52);
Shape56 := TShapeNode.Create;
LineSet57 := TLineSetNode.Create;
LineSet57.SetVertexCount([2]);
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ METHOD .Coord }
LineSet57.Coord := Coordinate58;
{ from humanoid_root to vl5 vertices 2 }
{ METHOD .Color }
LineSet57.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape56.Geometry := LineSet57;
{ METHOD .FdChildren.Add }
HAnimSegment48.FdChildren.Add(Shape56);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimSegment48);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0,0.9149,0.0016);
HAnimSegment61 := THAnimSegmentNode.Create;
Transform62 := TTransformNode.Create;
Transform62.Translation := Vector3(0,0.9149,0.0016);
Transform63 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform63.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform62.FdChildren.Add(Transform63);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Transform62);
Shape65 := TShapeNode.Create;
LineSet66 := TLineSetNode.Create;
LineSet66.SetVertexCount([2]);
Coordinate67 := TCoordinateNode.Create;
Coordinate67.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ METHOD .Coord }
LineSet66.Coord := Coordinate67;
{ from sacroiliac to l_hip vertices 2 }
{ METHOD .Color }
LineSet66.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape65.Geometry := LineSet66;
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Shape65);
HAnimSite69 := THAnimSiteNode.Create;
TouchSensor70 := TTouchSensorNode.Create;
TouchSensor70.Description := 'HAnimSite 93 buttocks_standing_wall_contact_point';
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(TouchSensor70);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Shape30);
Billboard72 := TBillboardNode.Create;
Shape73 := TShapeNode.Create;
end;

procedure InitHumanoid2Part5;
begin

Text74 := TTextNode.Create;
Text74.SetText(['93']);
FontStyle75 := TFontStyleNode.Create;
FontStyle75.Size := 0.035;
{ METHOD .FontStyle }
Text74.FontStyle := FontStyle75;
{ METHOD .Geometry }
Shape73.Geometry := Text74;
{ METHOD .FdChildren.Add }
Billboard72.FdChildren.Add(Shape73);
{ METHOD .FdChildren.Add }
HAnimSite69.FdChildren.Add(Billboard72);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite69);
HAnimSite76 := THAnimSiteNode.Create;
HAnimSite76.Translation := Vector3(0.0034,0.8266,0.0257);
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'HAnimSite 38 crotch';
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(TouchSensor77);
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(Shape30);
Billboard79 := TBillboardNode.Create;
Shape80 := TShapeNode.Create;
Text81 := TTextNode.Create;
Text81.SetText(['38']);
FontStyle82 := TFontStyleNode.Create;
FontStyle82.Size := 0.035;
{ METHOD .FontStyle }
Text81.FontStyle := FontStyle82;
{ METHOD .Geometry }
Shape80.Geometry := Text81;
{ METHOD .FdChildren.Add }
Billboard79.FdChildren.Add(Shape80);
{ METHOD .FdChildren.Add }
HAnimSite76.FdChildren.Add(Billboard79);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite76);
HAnimSite83 := THAnimSiteNode.Create;
HAnimSite83.Translation := Vector3(0.0925,0.9983,0.1052);
TouchSensor84 := TTouchSensorNode.Create;
TouchSensor84.Description := 'HAnimSite 32 l_asis';
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(TouchSensor84);
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(Shape30);
Billboard86 := TBillboardNode.Create;
Shape87 := TShapeNode.Create;
Text88 := TTextNode.Create;
Text88.SetText(['32']);
FontStyle89 := TFontStyleNode.Create;
FontStyle89.Size := 0.035;
{ METHOD .FontStyle }
Text88.FontStyle := FontStyle89;
{ METHOD .Geometry }
Shape87.Geometry := Text88;
end;

procedure InitHumanoid2Part6;
begin

{ METHOD .FdChildren.Add }
Billboard86.FdChildren.Add(Shape87);
{ METHOD .FdChildren.Add }
HAnimSite83.FdChildren.Add(Billboard86);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite83);
HAnimSite90 := THAnimSiteNode.Create;
HAnimSite90.Translation := Vector3(0.1612,1.0537,0.0008);
TouchSensor91 := TTouchSensorNode.Create;
TouchSensor91.Description := 'HAnimSite 33 l_iliocristale';
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(TouchSensor91);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Shape30);
Billboard93 := TBillboardNode.Create;
Shape94 := TShapeNode.Create;
Text95 := TTextNode.Create;
Text95.SetText(['33']);
FontStyle96 := TFontStyleNode.Create;
FontStyle96.Size := 0.035;
{ METHOD .FontStyle }
Text95.FontStyle := FontStyle96;
{ METHOD .Geometry }
Shape94.Geometry := Text95;
{ METHOD .FdChildren.Add }
Billboard93.FdChildren.Add(Shape94);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Billboard93);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite90);
HAnimSite97 := THAnimSiteNode.Create;
HAnimSite97.Translation := Vector3(0.0774,1.019,-0.1151);
TouchSensor98 := TTouchSensorNode.Create;
TouchSensor98.Description := 'HAnimSite 34 l_psis';
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(TouchSensor98);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Shape30);
Billboard100 := TBillboardNode.Create;
Shape101 := TShapeNode.Create;
Text102 := TTextNode.Create;
Text102.SetText(['34']);
FontStyle103 := TFontStyleNode.Create;
FontStyle103.Size := 0.035;
{ METHOD .FontStyle }
Text102.FontStyle := FontStyle103;
{ METHOD .Geometry }
Shape101.Geometry := Text102;
{ METHOD .FdChildren.Add }
Billboard100.FdChildren.Add(Shape101);
{ METHOD .FdChildren.Add }
HAnimSite97.FdChildren.Add(Billboard100);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite97);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.Translation := Vector3(0.1677,0.8336,0.0303);
TouchSensor105 := TTouchSensorNode.Create;
end;

procedure InitHumanoid2Part7;
begin

TouchSensor105.Description := 'HAnimSite 42 l_trochanterion';
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(TouchSensor105);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Shape30);
Billboard107 := TBillboardNode.Create;
Shape108 := TShapeNode.Create;
Text109 := TTextNode.Create;
Text109.SetText(['42']);
FontStyle110 := TFontStyleNode.Create;
FontStyle110.Size := 0.035;
{ METHOD .FontStyle }
Text109.FontStyle := FontStyle110;
{ METHOD .Geometry }
Shape108.Geometry := Text109;
{ METHOD .FdChildren.Add }
Billboard107.FdChildren.Add(Shape108);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Billboard107);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite104);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.Translation := Vector3(-0.0887,1.0021,0.1112);
TouchSensor112 := TTouchSensorNode.Create;
TouchSensor112.Description := 'HAnimSite 35 r_asis';
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(TouchSensor112);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Shape30);
Billboard114 := TBillboardNode.Create;
Shape115 := TShapeNode.Create;
Text116 := TTextNode.Create;
Text116.SetText(['35']);
FontStyle117 := TFontStyleNode.Create;
FontStyle117.Size := 0.035;
{ METHOD .FontStyle }
Text116.FontStyle := FontStyle117;
{ METHOD .Geometry }
Shape115.Geometry := Text116;
{ METHOD .FdChildren.Add }
Billboard114.FdChildren.Add(Shape115);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Billboard114);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite111);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.Translation := Vector3(-0.1525,1.0628,0.0035);
TouchSensor119 := TTouchSensorNode.Create;
TouchSensor119.Description := 'HAnimSite 36 r_iliocristale';
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(TouchSensor119);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Shape30);
Billboard121 := TBillboardNode.Create;
Shape122 := TShapeNode.Create;
Text123 := TTextNode.Create;
end;

procedure InitHumanoid2Part8;
begin

Text123.SetText(['36']);
FontStyle124 := TFontStyleNode.Create;
FontStyle124.Size := 0.035;
{ METHOD .FontStyle }
Text123.FontStyle := FontStyle124;
{ METHOD .Geometry }
Shape122.Geometry := Text123;
{ METHOD .FdChildren.Add }
Billboard121.FdChildren.Add(Shape122);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Billboard121);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite118);
HAnimSite125 := THAnimSiteNode.Create;
HAnimSite125.Translation := Vector3(-0.0716,1.019,-0.1138);
TouchSensor126 := TTouchSensorNode.Create;
TouchSensor126.Description := 'HAnimSite 37 r_psis';
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(TouchSensor126);
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Shape30);
Billboard128 := TBillboardNode.Create;
Shape129 := TShapeNode.Create;
Text130 := TTextNode.Create;
Text130.SetText(['37']);
FontStyle131 := TFontStyleNode.Create;
FontStyle131.Size := 0.035;
{ METHOD .FontStyle }
Text130.FontStyle := FontStyle131;
{ METHOD .Geometry }
Shape129.Geometry := Text130;
{ METHOD .FdChildren.Add }
Billboard128.FdChildren.Add(Shape129);
{ METHOD .FdChildren.Add }
HAnimSite125.FdChildren.Add(Billboard128);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite125);
HAnimSite132 := THAnimSiteNode.Create;
HAnimSite132.Translation := Vector3(-0.1689,0.8419,0.0352);
TouchSensor133 := TTouchSensorNode.Create;
TouchSensor133.Description := 'HAnimSite 46 r_trochanterion';
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(TouchSensor133);
{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(Shape30);
Billboard135 := TBillboardNode.Create;
Shape136 := TShapeNode.Create;
Text137 := TTextNode.Create;
Text137.SetText(['46']);
FontStyle138 := TFontStyleNode.Create;
FontStyle138.Size := 0.035;
{ METHOD .FontStyle }
Text137.FontStyle := FontStyle138;
{ METHOD .Geometry }
Shape136.Geometry := Text137;
{ METHOD .FdChildren.Add }
Billboard135.FdChildren.Add(Shape136);
end;

procedure InitHumanoid2Part9;
begin

{ METHOD .FdChildren.Add }
HAnimSite132.FdChildren.Add(Billboard135);
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(HAnimSite132);
Shape139 := TShapeNode.Create;
LineSet140 := TLineSetNode.Create;
LineSet140.SetVertexCount([2]);
Coordinate141 := TCoordinateNode.Create;
Coordinate141.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ METHOD .Coord }
LineSet140.Coord := Coordinate141;
{ from sacroiliac to r_hip vertices 2 }
{ METHOD .Color }
LineSet140.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape139.Geometry := LineSet140;
{ METHOD .FdChildren.Add }
HAnimSegment61.FdChildren.Add(Shape139);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimSegment61);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment144 := THAnimSegmentNode.Create;
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform146 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform146.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform145.FdChildren.Add(Transform146);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Transform145);
Shape148 := TShapeNode.Create;
LineSet149 := TLineSetNode.Create;
LineSet149.SetVertexCount([2]);
Coordinate150 := TCoordinateNode.Create;
Coordinate150.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ METHOD .Coord }
LineSet149.Coord := Coordinate150;
{ from l_hip to l_knee vertices 2 }
{ METHOD .Color }
LineSet149.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape148.Geometry := LineSet149;
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(Shape148);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.Translation := Vector3(0.1598,0.4967,0.0297);
TouchSensor153 := TTouchSensorNode.Create;
TouchSensor153.Description := 'HAnimSite 40 l_femoral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(TouchSensor153);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Shape30);
Billboard155 := TBillboardNode.Create;
Shape156 := TShapeNode.Create;
Text157 := TTextNode.Create;
Text157.SetText(['40']);
end;

procedure InitHumanoid2Part10;
begin

FontStyle158 := TFontStyleNode.Create;
FontStyle158.Size := 0.035;
{ METHOD .FontStyle }
Text157.FontStyle := FontStyle158;
{ METHOD .Geometry }
Shape156.Geometry := Text157;
{ METHOD .FdChildren.Add }
Billboard155.FdChildren.Add(Shape156);
{ METHOD .FdChildren.Add }
HAnimSite152.FdChildren.Add(Billboard155);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite152);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.Translation := Vector3(0.0398,0.4946,0.0303);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'HAnimSite 39 l_femoral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(TouchSensor160);
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(Shape30);
Billboard162 := TBillboardNode.Create;
Shape163 := TShapeNode.Create;
Text164 := TTextNode.Create;
Text164.SetText(['39']);
FontStyle165 := TFontStyleNode.Create;
FontStyle165.Size := 0.035;
{ METHOD .FontStyle }
Text164.FontStyle := FontStyle165;
{ METHOD .Geometry }
Shape163.Geometry := Text164;
{ METHOD .FdChildren.Add }
Billboard162.FdChildren.Add(Shape163);
{ METHOD .FdChildren.Add }
HAnimSite159.FdChildren.Add(Billboard162);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite159);
HAnimSite166 := THAnimSiteNode.Create;
HAnimSite166.Translation := Vector3(0.0993,0.4881,-0.0309);
TouchSensor167 := TTouchSensorNode.Create;
TouchSensor167.Description := 'HAnimSite 90 l_knee_crease';
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(TouchSensor167);
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(Shape30);
Billboard169 := TBillboardNode.Create;
Shape170 := TShapeNode.Create;
Text171 := TTextNode.Create;
Text171.SetText(['90']);
FontStyle172 := TFontStyleNode.Create;
FontStyle172.Size := 0.035;
{ METHOD .FontStyle }
Text171.FontStyle := FontStyle172;
{ METHOD .Geometry }
Shape170.Geometry := Text171;
{ METHOD .FdChildren.Add }
Billboard169.FdChildren.Add(Shape170);
{ METHOD .FdChildren.Add }
HAnimSite166.FdChildren.Add(Billboard169);
end;

procedure InitHumanoid2Part11;
begin

{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite166);
HAnimSite173 := THAnimSiteNode.Create;
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'HAnimSite 41 l_suprapatella';
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(TouchSensor174);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Shape30);
Billboard176 := TBillboardNode.Create;
Shape177 := TShapeNode.Create;
Text178 := TTextNode.Create;
Text178.SetText(['41']);
FontStyle179 := TFontStyleNode.Create;
FontStyle179.Size := 0.035;
{ METHOD .FontStyle }
Text178.FontStyle := FontStyle179;
{ METHOD .Geometry }
Shape177.Geometry := Text178;
{ METHOD .FdChildren.Add }
Billboard176.FdChildren.Add(Shape177);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Billboard176);
{ METHOD .FdChildren.Add }
HAnimSegment144.FdChildren.Add(HAnimSite173);
{ METHOD .FdChildren.Add }
HAnimJoint143.FdChildren.Add(HAnimSegment144);
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment181 := THAnimSegmentNode.Create;
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.104,0.4867,0.0308);
Transform183 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Transform183);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Transform182);
Shape185 := TShapeNode.Create;
LineSet186 := TLineSetNode.Create;
LineSet186.SetVertexCount([2]);
Coordinate187 := TCoordinateNode.Create;
Coordinate187.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ METHOD .Coord }
LineSet186.Coord := Coordinate187;
{ from l_knee to l_talocrural vertices 2 }
{ METHOD .Color }
LineSet186.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape185.Geometry := LineSet186;
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(Shape185);
HAnimSite189 := THAnimSiteNode.Create;
HAnimSite189.Translation := Vector3(0.1308,0.0597,-0.1032);
TouchSensor190 := TTouchSensorNode.Create;
TouchSensor190.Description := 'HAnimSite 49 l_lateral_malleolus';
end;

procedure InitHumanoid2Part12;
begin

{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(TouchSensor190);
{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(Shape30);
Billboard192 := TBillboardNode.Create;
Shape193 := TShapeNode.Create;
Text194 := TTextNode.Create;
Text194.SetText(['49']);
FontStyle195 := TFontStyleNode.Create;
FontStyle195.Size := 0.035;
{ METHOD .FontStyle }
Text194.FontStyle := FontStyle195;
{ METHOD .Geometry }
Shape193.Geometry := Text194;
{ METHOD .FdChildren.Add }
Billboard192.FdChildren.Add(Shape193);
{ METHOD .FdChildren.Add }
HAnimSite189.FdChildren.Add(Billboard192);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite189);
HAnimSite196 := THAnimSiteNode.Create;
HAnimSite196.Translation := Vector3(0.089,0.0716,-0.0881);
TouchSensor197 := TTouchSensorNode.Create;
TouchSensor197.Description := 'HAnimSite 48 l_medial_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(TouchSensor197);
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(Shape30);
Billboard199 := TBillboardNode.Create;
Shape200 := TShapeNode.Create;
Text201 := TTextNode.Create;
Text201.SetText(['48']);
FontStyle202 := TFontStyleNode.Create;
FontStyle202.Size := 0.035;
{ METHOD .FontStyle }
Text201.FontStyle := FontStyle202;
{ METHOD .Geometry }
Shape200.Geometry := Text201;
{ METHOD .FdChildren.Add }
Billboard199.FdChildren.Add(Shape200);
{ METHOD .FdChildren.Add }
HAnimSite196.FdChildren.Add(Billboard199);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite196);
HAnimSite203 := THAnimSiteNode.Create;
TouchSensor204 := TTouchSensorNode.Create;
TouchSensor204.Description := 'HAnimSite 47 l_tibiale';
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(TouchSensor204);
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(Shape30);
Billboard206 := TBillboardNode.Create;
Shape207 := TShapeNode.Create;
Text208 := TTextNode.Create;
Text208.SetText(['47']);
FontStyle209 := TFontStyleNode.Create;
end;

procedure InitHumanoid2Part13;
begin

FontStyle209.Size := 0.035;
{ METHOD .FontStyle }
Text208.FontStyle := FontStyle209;
{ METHOD .Geometry }
Shape207.Geometry := Text208;
{ METHOD .FdChildren.Add }
Billboard206.FdChildren.Add(Shape207);
{ METHOD .FdChildren.Add }
HAnimSite203.FdChildren.Add(Billboard206);
{ METHOD .FdChildren.Add }
HAnimSegment181.FdChildren.Add(HAnimSite203);
{ METHOD .FdChildren.Add }
HAnimJoint180.FdChildren.Add(HAnimSegment181);
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment211 := THAnimSegmentNode.Create;
Transform212 := TTransformNode.Create;
Transform212.Scale := Vector3(0.15,0.15,0.15);
Transform212.Translation := Vector3(0.08,0.06,-0.025);
Transform212.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform213 := TTransformNode.Create;
{ Empty Transform left foot }
{ METHOD .FdChildren.Add }
Transform213.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform212.FdChildren.Add(Transform213);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(Transform212);
Shape215 := TShapeNode.Create;
LineSet216 := TLineSetNode.Create;
LineSet216.SetVertexCount([2]);
Coordinate217 := TCoordinateNode.Create;
Coordinate217.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.08,0.0175,-0.0608)]);
{ METHOD .Coord }
LineSet216.Coord := Coordinate217;
{ from l_talocrural to l_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
LineSet216.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape215.Geometry := LineSet216;
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(Shape215);
HAnimSite219 := THAnimSiteNode.Create;
HAnimSite219.Translation := Vector3(0.0974,0.0259,-0.1171);
TouchSensor220 := TTouchSensorNode.Create;
TouchSensor220.Description := 'HAnimSite 58 l_calcaneus_posterior';
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(TouchSensor220);
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(Shape30);
Billboard222 := TBillboardNode.Create;
Shape223 := TShapeNode.Create;
Text224 := TTextNode.Create;
Text224.SetText(['58']);
FontStyle225 := TFontStyleNode.Create;
FontStyle225.Size := 0.035;
{ METHOD .FontStyle }
Text224.FontStyle := FontStyle225;
end;

procedure InitHumanoid2Part14;
begin

{ METHOD .Geometry }
Shape223.Geometry := Text224;
{ METHOD .FdChildren.Add }
Billboard222.FdChildren.Add(Shape223);
{ METHOD .FdChildren.Add }
HAnimSite219.FdChildren.Add(Billboard222);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(HAnimSite219);
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226.Translation := Vector3(0.089,0.0575,-0.0943);
TouchSensor227 := TTouchSensorNode.Create;
TouchSensor227.Description := 'HAnimSite 50 l_sphyrion';
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(TouchSensor227);
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(Shape30);
Billboard229 := TBillboardNode.Create;
Shape230 := TShapeNode.Create;
Text231 := TTextNode.Create;
Text231.SetText(['50']);
FontStyle232 := TFontStyleNode.Create;
FontStyle232.Size := 0.035;
{ METHOD .FontStyle }
Text231.FontStyle := FontStyle232;
{ METHOD .Geometry }
Shape230.Geometry := Text231;
{ METHOD .FdChildren.Add }
Billboard229.FdChildren.Add(Shape230);
{ METHOD .FdChildren.Add }
HAnimSite226.FdChildren.Add(Billboard229);
{ METHOD .FdChildren.Add }
HAnimSegment211.FdChildren.Add(HAnimSite226);
{ METHOD .FdChildren.Add }
HAnimJoint210.FdChildren.Add(HAnimSegment211);
HAnimJoint233 := THAnimJointNode.Create;
HAnimJoint233.Center := Vector3(0.08,0.0175,-0.0608);
HAnimSegment234 := THAnimSegmentNode.Create;
Transform235 := TTransformNode.Create;
Transform235.Translation := Vector3(0.08,0.0175,-0.0608);
Transform236 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform236.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform235.FdChildren.Add(Transform236);
{ METHOD .FdChildren.Add }
HAnimSegment234.FdChildren.Add(Transform235);
Shape238 := TShapeNode.Create;
LineSet239 := TLineSetNode.Create;
LineSet239.SetVertexCount([2]);
Coordinate240 := TCoordinateNode.Create;
Coordinate240.SetPoint([Vector3(0.08,0.0175,-0.0608),Vector3(0.0824,0.0064,-0.004)]);
{ METHOD .Coord }
LineSet239.Coord := Coordinate240;
{ from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet239.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape238.Geometry := LineSet239;
{ METHOD .FdChildren.Add }
HAnimSegment234.FdChildren.Add(Shape238);
end;

procedure InitHumanoid2Part15;
begin

{ METHOD .FdChildren.Add }
HAnimJoint233.FdChildren.Add(HAnimSegment234);
HAnimJoint242 := THAnimJointNode.Create;
HAnimJoint242.Center := Vector3(0.0824,0.0064,-0.004);
HAnimSegment243 := THAnimSegmentNode.Create;
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.0824,0.0064,-0.004);
Transform245 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform245.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform244.FdChildren.Add(Transform245);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(Transform244);
Shape247 := TShapeNode.Create;
LineSet248 := TLineSetNode.Create;
LineSet248.SetVertexCount([2]);
Coordinate249 := TCoordinateNode.Create;
Coordinate249.SetPoint([Vector3(0.0824,0.0064,-0.004),Vector3(0.0841,0.0013,0.0216)]);
{ METHOD .Coord }
LineSet248.Coord := Coordinate249;
{ from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet248.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape247.Geometry := LineSet248;
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(Shape247);
HAnimSite251 := THAnimSiteNode.Create;
TouchSensor252 := TTouchSensorNode.Create;
TouchSensor252.Description := 'HAnimSite 55 l_metatarsal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSite251.FdChildren.Add(TouchSensor252);
{ METHOD .FdChildren.Add }
HAnimSite251.FdChildren.Add(Shape30);
Billboard254 := TBillboardNode.Create;
Shape255 := TShapeNode.Create;
Text256 := TTextNode.Create;
Text256.SetText(['55']);
FontStyle257 := TFontStyleNode.Create;
FontStyle257.Size := 0.035;
{ METHOD .FontStyle }
Text256.FontStyle := FontStyle257;
{ METHOD .Geometry }
Shape255.Geometry := Text256;
{ METHOD .FdChildren.Add }
Billboard254.FdChildren.Add(Shape255);
{ METHOD .FdChildren.Add }
HAnimSite251.FdChildren.Add(Billboard254);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite251);
HAnimSite258 := THAnimSiteNode.Create;
TouchSensor259 := TTouchSensorNode.Create;
TouchSensor259.Description := 'HAnimSite 56 l_metatarsal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite258.FdChildren.Add(TouchSensor259);
{ METHOD .FdChildren.Add }
HAnimSite258.FdChildren.Add(Shape30);
end;

procedure InitHumanoid2Part16;
begin

Billboard261 := TBillboardNode.Create;
Shape262 := TShapeNode.Create;
Text263 := TTextNode.Create;
Text263.SetText(['56']);
FontStyle264 := TFontStyleNode.Create;
FontStyle264.Size := 0.035;
{ METHOD .FontStyle }
Text263.FontStyle := FontStyle264;
{ METHOD .Geometry }
Shape262.Geometry := Text263;
{ METHOD .FdChildren.Add }
Billboard261.FdChildren.Add(Shape262);
{ METHOD .FdChildren.Add }
HAnimSite258.FdChildren.Add(Billboard261);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite258);
HAnimSite265 := THAnimSiteNode.Create;
TouchSensor266 := TTouchSensorNode.Create;
TouchSensor266.Description := 'HAnimSite l_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite265.FdChildren.Add(TouchSensor266);
{ METHOD .FdChildren.Add }
HAnimSite265.FdChildren.Add(Shape30);
Billboard268 := TBillboardNode.Create;
Shape269 := TShapeNode.Create;
Text270 := TTextNode.Create;
Text270.SetText(['']);
FontStyle271 := TFontStyleNode.Create;
FontStyle271.Size := 0.035;
{ METHOD .FontStyle }
Text270.FontStyle := FontStyle271;
{ METHOD .Geometry }
Shape269.Geometry := Text270;
{ METHOD .FdChildren.Add }
Billboard268.FdChildren.Add(Shape269);
{ METHOD .FdChildren.Add }
HAnimSite265.FdChildren.Add(Billboard268);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite265);
HAnimSite272 := THAnimSiteNode.Create;
HAnimSite272.Translation := Vector3(0.1195,0.0079,0.1433);
TouchSensor273 := TTouchSensorNode.Create;
TouchSensor273.Description := 'HAnimSite l_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(TouchSensor273);
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(Shape30);
Billboard275 := TBillboardNode.Create;
Shape276 := TShapeNode.Create;
Text277 := TTextNode.Create;
Text277.SetText(['']);
FontStyle278 := TFontStyleNode.Create;
FontStyle278.Size := 0.035;
{ METHOD .FontStyle }
Text277.FontStyle := FontStyle278;
end;

procedure InitHumanoid2Part17;
begin

{ METHOD .Geometry }
Shape276.Geometry := Text277;
{ METHOD .FdChildren.Add }
Billboard275.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
HAnimSite272.FdChildren.Add(Billboard275);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite272);
HAnimSite279 := THAnimSiteNode.Create;
TouchSensor280 := TTouchSensorNode.Create;
TouchSensor280.Description := 'HAnimSite l_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(TouchSensor280);
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(Shape30);
Billboard282 := TBillboardNode.Create;
Shape283 := TShapeNode.Create;
Text284 := TTextNode.Create;
Text284.SetText(['']);
FontStyle285 := TFontStyleNode.Create;
FontStyle285.Size := 0.035;
{ METHOD .FontStyle }
Text284.FontStyle := FontStyle285;
{ METHOD .Geometry }
Shape283.Geometry := Text284;
{ METHOD .FdChildren.Add }
Billboard282.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(Billboard282);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite279);
HAnimSite286 := THAnimSiteNode.Create;
TouchSensor287 := TTouchSensorNode.Create;
TouchSensor287.Description := 'HAnimSite l_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite286.FdChildren.Add(TouchSensor287);
{ METHOD .FdChildren.Add }
HAnimSite286.FdChildren.Add(Shape30);
Billboard289 := TBillboardNode.Create;
Shape290 := TShapeNode.Create;
Text291 := TTextNode.Create;
Text291.SetText(['']);
FontStyle292 := TFontStyleNode.Create;
FontStyle292.Size := 0.035;
{ METHOD .FontStyle }
Text291.FontStyle := FontStyle292;
{ METHOD .Geometry }
Shape290.Geometry := Text291;
{ METHOD .FdChildren.Add }
Billboard289.FdChildren.Add(Shape290);
{ METHOD .FdChildren.Add }
HAnimSite286.FdChildren.Add(Billboard289);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite286);
HAnimSite293 := THAnimSiteNode.Create;
TouchSensor294 := TTouchSensorNode.Create;
TouchSensor294.Description := 'HAnimSite l_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite293.FdChildren.Add(TouchSensor294);
end;

procedure InitHumanoid2Part18;
begin

{ METHOD .FdChildren.Add }
HAnimSite293.FdChildren.Add(Shape30);
Billboard296 := TBillboardNode.Create;
Shape297 := TShapeNode.Create;
Text298 := TTextNode.Create;
Text298.SetText(['']);
FontStyle299 := TFontStyleNode.Create;
FontStyle299.Size := 0.035;
{ METHOD .FontStyle }
Text298.FontStyle := FontStyle299;
{ METHOD .Geometry }
Shape297.Geometry := Text298;
{ METHOD .FdChildren.Add }
Billboard296.FdChildren.Add(Shape297);
{ METHOD .FdChildren.Add }
HAnimSite293.FdChildren.Add(Billboard296);
{ METHOD .FdChildren.Add }
HAnimSegment243.FdChildren.Add(HAnimSite293);
{ METHOD .FdChildren.Add }
HAnimJoint242.FdChildren.Add(HAnimSegment243);
HAnimJoint300 := THAnimJointNode.Create;
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
HAnimJoint301 := THAnimJointNode.Create;
HAnimJoint301.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment302 := THAnimSegmentNode.Create;
Transform303 := TTransformNode.Create;
Transform303.Translation := Vector3(-0.095,0.9171,0.0029);
Transform304 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform304);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(Transform303);
Shape306 := TShapeNode.Create;
LineSet307 := TLineSetNode.Create;
LineSet307.SetVertexCount([2]);
Coordinate308 := TCoordinateNode.Create;
Coordinate308.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ METHOD .Coord }
LineSet307.Coord := Coordinate308;
{ from r_hip to r_knee vertices 2 }
{ METHOD .Color }
LineSet307.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape306.Geometry := LineSet307;
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(Shape306);
HAnimSite310 := THAnimSiteNode.Create;
end;

procedure InitHumanoid2Part19;
begin

HAnimSite310.Translation := Vector3(-0.1421,0.4992,0.031);
TouchSensor311 := TTouchSensorNode.Create;
TouchSensor311.Description := 'HAnimSite 44 r_femoral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(TouchSensor311);
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(Shape30);
Billboard313 := TBillboardNode.Create;
Shape314 := TShapeNode.Create;
Text315 := TTextNode.Create;
Text315.SetText(['44']);
FontStyle316 := TFontStyleNode.Create;
FontStyle316.Size := 0.035;
{ METHOD .FontStyle }
Text315.FontStyle := FontStyle316;
{ METHOD .Geometry }
Shape314.Geometry := Text315;
{ METHOD .FdChildren.Add }
Billboard313.FdChildren.Add(Shape314);
{ METHOD .FdChildren.Add }
HAnimSite310.FdChildren.Add(Billboard313);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite310);
HAnimSite317 := THAnimSiteNode.Create;
HAnimSite317.Translation := Vector3(-0.0221,0.5014,0.0289);
TouchSensor318 := TTouchSensorNode.Create;
TouchSensor318.Description := 'HAnimSite 43 r_femoral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(TouchSensor318);
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(Shape30);
Billboard320 := TBillboardNode.Create;
Shape321 := TShapeNode.Create;
Text322 := TTextNode.Create;
Text322.SetText(['43']);
FontStyle323 := TFontStyleNode.Create;
FontStyle323.Size := 0.035;
{ METHOD .FontStyle }
Text322.FontStyle := FontStyle323;
{ METHOD .Geometry }
Shape321.Geometry := Text322;
{ METHOD .FdChildren.Add }
Billboard320.FdChildren.Add(Shape321);
{ METHOD .FdChildren.Add }
HAnimSite317.FdChildren.Add(Billboard320);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite317);
HAnimSite324 := THAnimSiteNode.Create;
HAnimSite324.Translation := Vector3(-0.0825,0.4932,-0.0326);
TouchSensor325 := TTouchSensorNode.Create;
TouchSensor325.Description := 'HAnimSite 91 r_knee_crease';
{ METHOD .FdChildren.Add }
HAnimSite324.FdChildren.Add(TouchSensor325);
{ METHOD .FdChildren.Add }
HAnimSite324.FdChildren.Add(Shape30);
Billboard327 := TBillboardNode.Create;
end;

procedure InitHumanoid2Part20;
begin

Shape328 := TShapeNode.Create;
Text329 := TTextNode.Create;
Text329.SetText(['91']);
FontStyle330 := TFontStyleNode.Create;
FontStyle330.Size := 0.035;
{ METHOD .FontStyle }
Text329.FontStyle := FontStyle330;
{ METHOD .Geometry }
Shape328.Geometry := Text329;
{ METHOD .FdChildren.Add }
Billboard327.FdChildren.Add(Shape328);
{ METHOD .FdChildren.Add }
HAnimSite324.FdChildren.Add(Billboard327);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite324);
HAnimSite331 := THAnimSiteNode.Create;
TouchSensor332 := TTouchSensorNode.Create;
TouchSensor332.Description := 'HAnimSite 45 r_suprapatella';
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(TouchSensor332);
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(Shape30);
Billboard334 := TBillboardNode.Create;
Shape335 := TShapeNode.Create;
Text336 := TTextNode.Create;
Text336.SetText(['45']);
FontStyle337 := TFontStyleNode.Create;
FontStyle337.Size := 0.035;
{ METHOD .FontStyle }
Text336.FontStyle := FontStyle337;
{ METHOD .Geometry }
Shape335.Geometry := Text336;
{ METHOD .FdChildren.Add }
Billboard334.FdChildren.Add(Shape335);
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(Billboard334);
{ METHOD .FdChildren.Add }
HAnimSegment302.FdChildren.Add(HAnimSite331);
{ METHOD .FdChildren.Add }
HAnimJoint301.FdChildren.Add(HAnimSegment302);
HAnimJoint338 := THAnimJointNode.Create;
HAnimJoint338.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment339 := THAnimSegmentNode.Create;
Transform340 := TTransformNode.Create;
Transform340.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform341 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform341.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform340.FdChildren.Add(Transform341);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(Transform340);
Shape343 := TShapeNode.Create;
LineSet344 := TLineSetNode.Create;
LineSet344.SetVertexCount([2]);
Coordinate345 := TCoordinateNode.Create;
end;

procedure InitHumanoid2Part21;
begin

Coordinate345.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ METHOD .Coord }
LineSet344.Coord := Coordinate345;
{ from r_knee to r_talocrural vertices 2 }
{ METHOD .Color }
LineSet344.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape343.Geometry := LineSet344;
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(Shape343);
HAnimSite347 := THAnimSiteNode.Create;
HAnimSite347.Translation := Vector3(-0.1006,0.0658,-0.1075);
TouchSensor348 := TTouchSensorNode.Create;
TouchSensor348.Description := 'HAnimSite 53 r_lateral_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite347.FdChildren.Add(TouchSensor348);
{ METHOD .FdChildren.Add }
HAnimSite347.FdChildren.Add(Shape30);
Billboard350 := TBillboardNode.Create;
Shape351 := TShapeNode.Create;
Text352 := TTextNode.Create;
Text352.SetText(['53']);
FontStyle353 := TFontStyleNode.Create;
FontStyle353.Size := 0.035;
{ METHOD .FontStyle }
Text352.FontStyle := FontStyle353;
{ METHOD .Geometry }
Shape351.Geometry := Text352;
{ METHOD .FdChildren.Add }
Billboard350.FdChildren.Add(Shape351);
{ METHOD .FdChildren.Add }
HAnimSite347.FdChildren.Add(Billboard350);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(HAnimSite347);
HAnimSite354 := THAnimSiteNode.Create;
HAnimSite354.Translation := Vector3(-0.0591,0.076,-0.0928);
TouchSensor355 := TTouchSensorNode.Create;
TouchSensor355.Description := 'HAnimSite 52 r_medial_malleolus';
{ METHOD .FdChildren.Add }
HAnimSite354.FdChildren.Add(TouchSensor355);
{ METHOD .FdChildren.Add }
HAnimSite354.FdChildren.Add(Shape30);
Billboard357 := TBillboardNode.Create;
Shape358 := TShapeNode.Create;
Text359 := TTextNode.Create;
Text359.SetText(['52']);
FontStyle360 := TFontStyleNode.Create;
FontStyle360.Size := 0.035;
{ METHOD .FontStyle }
Text359.FontStyle := FontStyle360;
{ METHOD .Geometry }
Shape358.Geometry := Text359;
{ METHOD .FdChildren.Add }
Billboard357.FdChildren.Add(Shape358);
{ METHOD .FdChildren.Add }
HAnimSite354.FdChildren.Add(Billboard357);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(HAnimSite354);
HAnimSite361 := THAnimSiteNode.Create;
end;

procedure InitHumanoid2Part22;
begin

TouchSensor362 := TTouchSensorNode.Create;
TouchSensor362.Description := 'HAnimSite 51 r_tibiale';
{ METHOD .FdChildren.Add }
HAnimSite361.FdChildren.Add(TouchSensor362);
{ METHOD .FdChildren.Add }
HAnimSite361.FdChildren.Add(Shape30);
Billboard364 := TBillboardNode.Create;
Shape365 := TShapeNode.Create;
Text366 := TTextNode.Create;
Text366.SetText(['51']);
FontStyle367 := TFontStyleNode.Create;
FontStyle367.Size := 0.035;
{ METHOD .FontStyle }
Text366.FontStyle := FontStyle367;
{ METHOD .Geometry }
Shape365.Geometry := Text366;
{ METHOD .FdChildren.Add }
Billboard364.FdChildren.Add(Shape365);
{ METHOD .FdChildren.Add }
HAnimSite361.FdChildren.Add(Billboard364);
{ METHOD .FdChildren.Add }
HAnimSegment339.FdChildren.Add(HAnimSite361);
{ METHOD .FdChildren.Add }
HAnimJoint338.FdChildren.Add(HAnimSegment339);
HAnimJoint368 := THAnimJointNode.Create;
HAnimJoint368.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment369 := THAnimSegmentNode.Create;
Transform370 := TTransformNode.Create;
Transform370.Scale := Vector3(0.15,0.15,0.15);
Transform370.Translation := Vector3(-0.05,0.06,-0.025);
Transform370.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform371 := TTransformNode.Create;
{ Empty Transform right foot }
{ METHOD .FdChildren.Add }
Transform371.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform370.FdChildren.Add(Transform371);
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(Transform370);
Shape373 := TShapeNode.Create;
LineSet374 := TLineSetNode.Create;
LineSet374.SetVertexCount([2]);
Coordinate375 := TCoordinateNode.Create;
Coordinate375.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.08,0.0175,-0.0608)]);
{ METHOD .Coord }
LineSet374.Coord := Coordinate375;
{ from r_talocrural to r_tarsometatarsal_2 vertices 2 }
{ METHOD .Color }
LineSet374.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape373.Geometry := LineSet374;
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(Shape373);
HAnimSite377 := THAnimSiteNode.Create;
HAnimSite377.Translation := Vector3(-0.0692,0.0297,-0.1221);
TouchSensor378 := TTouchSensorNode.Create;
TouchSensor378.Description := 'HAnimSite 62 r_calcaneus_posterior';
end;

procedure InitHumanoid2Part23;
begin

{ METHOD .FdChildren.Add }
HAnimSite377.FdChildren.Add(TouchSensor378);
{ METHOD .FdChildren.Add }
HAnimSite377.FdChildren.Add(Shape30);
Billboard380 := TBillboardNode.Create;
Shape381 := TShapeNode.Create;
Text382 := TTextNode.Create;
Text382.SetText(['62']);
FontStyle383 := TFontStyleNode.Create;
FontStyle383.Size := 0.035;
{ METHOD .FontStyle }
Text382.FontStyle := FontStyle383;
{ METHOD .Geometry }
Shape381.Geometry := Text382;
{ METHOD .FdChildren.Add }
Billboard380.FdChildren.Add(Shape381);
{ METHOD .FdChildren.Add }
HAnimSite377.FdChildren.Add(Billboard380);
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(HAnimSite377);
HAnimSite384 := THAnimSiteNode.Create;
HAnimSite384.Translation := Vector3(-0.0603,0.061,-0.1002);
TouchSensor385 := TTouchSensorNode.Create;
TouchSensor385.Description := 'HAnimSite 54 r_sphyrion';
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(TouchSensor385);
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(Shape30);
Billboard387 := TBillboardNode.Create;
Shape388 := TShapeNode.Create;
Text389 := TTextNode.Create;
Text389.SetText(['54']);
FontStyle390 := TFontStyleNode.Create;
FontStyle390.Size := 0.035;
{ METHOD .FontStyle }
Text389.FontStyle := FontStyle390;
{ METHOD .Geometry }
Shape388.Geometry := Text389;
{ METHOD .FdChildren.Add }
Billboard387.FdChildren.Add(Shape388);
{ METHOD .FdChildren.Add }
HAnimSite384.FdChildren.Add(Billboard387);
{ METHOD .FdChildren.Add }
HAnimSegment369.FdChildren.Add(HAnimSite384);
{ METHOD .FdChildren.Add }
HAnimJoint368.FdChildren.Add(HAnimSegment369);
HAnimJoint391 := THAnimJointNode.Create;
HAnimJoint391.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimSegment392 := THAnimSegmentNode.Create;
Transform393 := TTransformNode.Create;
Transform393.Translation := Vector3(-0.08,0.0175,-0.0608);
Transform394 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform394.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform393.FdChildren.Add(Transform394);
{ METHOD .FdChildren.Add }
HAnimSegment392.FdChildren.Add(Transform393);
end;

procedure InitHumanoid2Part24;
begin

Shape396 := TShapeNode.Create;
LineSet397 := TLineSetNode.Create;
LineSet397.SetVertexCount([2]);
Coordinate398 := TCoordinateNode.Create;
Coordinate398.SetPoint([Vector3(-0.08,0.0175,-0.0608),Vector3(-0.0823,0.0064,-0.004)]);
{ METHOD .Coord }
LineSet397.Coord := Coordinate398;
{ from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet397.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape396.Geometry := LineSet397;
{ METHOD .FdChildren.Add }
HAnimSegment392.FdChildren.Add(Shape396);
{ METHOD .FdChildren.Add }
HAnimJoint391.FdChildren.Add(HAnimSegment392);
HAnimJoint400 := THAnimJointNode.Create;
HAnimJoint400.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimSegment401 := THAnimSegmentNode.Create;
Transform402 := TTransformNode.Create;
Transform402.Translation := Vector3(-0.0823,0.0064,-0.004);
Transform403 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform403.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform402.FdChildren.Add(Transform403);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(Transform402);
Shape405 := TShapeNode.Create;
LineSet406 := TLineSetNode.Create;
LineSet406.SetVertexCount([2]);
Coordinate407 := TCoordinateNode.Create;
Coordinate407.SetPoint([Vector3(-0.0823,0.0064,-0.004),Vector3(-0.0841,0.0013,0.0216)]);
{ METHOD .Coord }
LineSet406.Coord := Coordinate407;
{ from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet406.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape405.Geometry := LineSet406;
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(Shape405);
HAnimSite409 := THAnimSiteNode.Create;
TouchSensor410 := TTouchSensorNode.Create;
TouchSensor410.Description := 'HAnimSite 59 r_metatarsal_phalanx_1';
{ METHOD .FdChildren.Add }
HAnimSite409.FdChildren.Add(TouchSensor410);
{ METHOD .FdChildren.Add }
HAnimSite409.FdChildren.Add(Shape30);
Billboard412 := TBillboardNode.Create;
Shape413 := TShapeNode.Create;
Text414 := TTextNode.Create;
Text414.SetText(['59']);
FontStyle415 := TFontStyleNode.Create;
FontStyle415.Size := 0.035;
{ METHOD .FontStyle }
Text414.FontStyle := FontStyle415;
end;

procedure InitHumanoid2Part25;
begin

{ METHOD .Geometry }
Shape413.Geometry := Text414;
{ METHOD .FdChildren.Add }
Billboard412.FdChildren.Add(Shape413);
{ METHOD .FdChildren.Add }
HAnimSite409.FdChildren.Add(Billboard412);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite409);
HAnimSite416 := THAnimSiteNode.Create;
TouchSensor417 := TTouchSensorNode.Create;
TouchSensor417.Description := 'HAnimSite 60 r_metatarsal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(TouchSensor417);
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(Shape30);
Billboard419 := TBillboardNode.Create;
Shape420 := TShapeNode.Create;
Text421 := TTextNode.Create;
Text421.SetText(['60']);
FontStyle422 := TFontStyleNode.Create;
FontStyle422.Size := 0.035;
{ METHOD .FontStyle }
Text421.FontStyle := FontStyle422;
{ METHOD .Geometry }
Shape420.Geometry := Text421;
{ METHOD .FdChildren.Add }
Billboard419.FdChildren.Add(Shape420);
{ METHOD .FdChildren.Add }
HAnimSite416.FdChildren.Add(Billboard419);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite416);
HAnimSite423 := THAnimSiteNode.Create;
TouchSensor424 := TTouchSensorNode.Create;
TouchSensor424.Description := 'HAnimSite r_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite423.FdChildren.Add(TouchSensor424);
{ METHOD .FdChildren.Add }
HAnimSite423.FdChildren.Add(Shape30);
Billboard426 := TBillboardNode.Create;
Shape427 := TShapeNode.Create;
Text428 := TTextNode.Create;
Text428.SetText(['']);
FontStyle429 := TFontStyleNode.Create;
FontStyle429.Size := 0.035;
{ METHOD .FontStyle }
Text428.FontStyle := FontStyle429;
{ METHOD .Geometry }
Shape427.Geometry := Text428;
{ METHOD .FdChildren.Add }
Billboard426.FdChildren.Add(Shape427);
{ METHOD .FdChildren.Add }
HAnimSite423.FdChildren.Add(Billboard426);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite423);
HAnimSite430 := THAnimSiteNode.Create;
HAnimSite430.Translation := Vector3(-0.0883,0.0134,0.1383);
TouchSensor431 := TTouchSensorNode.Create;
TouchSensor431.Description := 'HAnimSite r_tarsal_distal_phalanx_2_tip';
end;

procedure InitHumanoid2Part26;
begin

{ METHOD .FdChildren.Add }
HAnimSite430.FdChildren.Add(TouchSensor431);
{ METHOD .FdChildren.Add }
HAnimSite430.FdChildren.Add(Shape30);
Billboard433 := TBillboardNode.Create;
Shape434 := TShapeNode.Create;
Text435 := TTextNode.Create;
Text435.SetText(['']);
FontStyle436 := TFontStyleNode.Create;
FontStyle436.Size := 0.035;
{ METHOD .FontStyle }
Text435.FontStyle := FontStyle436;
{ METHOD .Geometry }
Shape434.Geometry := Text435;
{ METHOD .FdChildren.Add }
Billboard433.FdChildren.Add(Shape434);
{ METHOD .FdChildren.Add }
HAnimSite430.FdChildren.Add(Billboard433);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite430);
HAnimSite437 := THAnimSiteNode.Create;
TouchSensor438 := TTouchSensorNode.Create;
TouchSensor438.Description := 'HAnimSite r_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(TouchSensor438);
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(Shape30);
Billboard440 := TBillboardNode.Create;
Shape441 := TShapeNode.Create;
Text442 := TTextNode.Create;
Text442.SetText(['']);
FontStyle443 := TFontStyleNode.Create;
FontStyle443.Size := 0.035;
{ METHOD .FontStyle }
Text442.FontStyle := FontStyle443;
{ METHOD .Geometry }
Shape441.Geometry := Text442;
{ METHOD .FdChildren.Add }
Billboard440.FdChildren.Add(Shape441);
{ METHOD .FdChildren.Add }
HAnimSite437.FdChildren.Add(Billboard440);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite437);
HAnimSite444 := THAnimSiteNode.Create;
TouchSensor445 := TTouchSensorNode.Create;
TouchSensor445.Description := 'HAnimSite r_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite444.FdChildren.Add(TouchSensor445);
{ METHOD .FdChildren.Add }
HAnimSite444.FdChildren.Add(Shape30);
Billboard447 := TBillboardNode.Create;
Shape448 := TShapeNode.Create;
Text449 := TTextNode.Create;
Text449.SetText(['']);
FontStyle450 := TFontStyleNode.Create;
FontStyle450.Size := 0.035;
end;

procedure InitHumanoid2Part27;
begin

{ METHOD .FontStyle }
Text449.FontStyle := FontStyle450;
{ METHOD .Geometry }
Shape448.Geometry := Text449;
{ METHOD .FdChildren.Add }
Billboard447.FdChildren.Add(Shape448);
{ METHOD .FdChildren.Add }
HAnimSite444.FdChildren.Add(Billboard447);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite444);
HAnimSite451 := THAnimSiteNode.Create;
TouchSensor452 := TTouchSensorNode.Create;
TouchSensor452.Description := 'HAnimSite r_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite451.FdChildren.Add(TouchSensor452);
{ METHOD .FdChildren.Add }
HAnimSite451.FdChildren.Add(Shape30);
Billboard454 := TBillboardNode.Create;
Shape455 := TShapeNode.Create;
Text456 := TTextNode.Create;
Text456.SetText(['']);
FontStyle457 := TFontStyleNode.Create;
FontStyle457.Size := 0.035;
{ METHOD .FontStyle }
Text456.FontStyle := FontStyle457;
{ METHOD .Geometry }
Shape455.Geometry := Text456;
{ METHOD .FdChildren.Add }
Billboard454.FdChildren.Add(Shape455);
{ METHOD .FdChildren.Add }
HAnimSite451.FdChildren.Add(Billboard454);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite451);
{ METHOD .FdChildren.Add }
HAnimJoint400.FdChildren.Add(HAnimSegment401);
HAnimJoint458 := THAnimJointNode.Create;
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
HAnimJoint459 := THAnimJointNode.Create;
HAnimJoint459.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment460 := THAnimSegmentNode.Create;
Transform461 := TTransformNode.Create;
Transform461.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform462 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform462.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform461.FdChildren.Add(Transform462);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(Transform461);
end;

procedure InitHumanoid2Part28;
begin

Shape464 := TShapeNode.Create;
LineSet465 := TLineSetNode.Create;
LineSet465.SetVertexCount([2]);
Coordinate466 := TCoordinateNode.Create;
Coordinate466.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0041,1.1276,-0.0796)]);
{ METHOD .Coord }
LineSet465.Coord := Coordinate466;
{ from vl5 to vl3 vertices 2 }
{ METHOD .Color }
LineSet465.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape464.Geometry := LineSet465;
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(Shape464);
HAnimSite468 := THAnimSiteNode.Create;
HAnimSite468.Translation := Vector3(0.0069,1.0966,0.1017);
TouchSensor469 := TTouchSensorNode.Create;
TouchSensor469.Description := 'HAnimSite 84 navel';
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(TouchSensor469);
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(Shape30);
Billboard471 := TBillboardNode.Create;
Shape472 := TShapeNode.Create;
Text473 := TTextNode.Create;
Text473.SetText(['84']);
FontStyle474 := TFontStyleNode.Create;
FontStyle474.Size := 0.035;
{ METHOD .FontStyle }
Text473.FontStyle := FontStyle474;
{ METHOD .Geometry }
Shape472.Geometry := Text473;
{ METHOD .FdChildren.Add }
Billboard471.FdChildren.Add(Shape472);
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(Billboard471);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite468);
HAnimSite475 := THAnimSiteNode.Create;
TouchSensor476 := TTouchSensorNode.Create;
TouchSensor476.Description := 'HAnimSite 26 waist_preferred_anterior';
{ METHOD .FdChildren.Add }
HAnimSite475.FdChildren.Add(TouchSensor476);
{ METHOD .FdChildren.Add }
HAnimSite475.FdChildren.Add(Shape30);
Billboard478 := TBillboardNode.Create;
Shape479 := TShapeNode.Create;
Text480 := TTextNode.Create;
Text480.SetText(['26']);
FontStyle481 := TFontStyleNode.Create;
FontStyle481.Size := 0.035;
{ METHOD .FontStyle }
Text480.FontStyle := FontStyle481;
{ METHOD .Geometry }
Shape479.Geometry := Text480;
{ METHOD .FdChildren.Add }
Billboard478.FdChildren.Add(Shape479);
end;

procedure InitHumanoid2Part29;
begin

{ METHOD .FdChildren.Add }
HAnimSite475.FdChildren.Add(Billboard478);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite475);
HAnimSite482 := THAnimSiteNode.Create;
HAnimSite482.Translation := Vector3(0.29,1.0915,-0.1091);
TouchSensor483 := TTouchSensorNode.Create;
TouchSensor483.Description := 'HAnimSite 27 waist_preferred_posterior';
{ METHOD .FdChildren.Add }
HAnimSite482.FdChildren.Add(TouchSensor483);
{ METHOD .FdChildren.Add }
HAnimSite482.FdChildren.Add(Shape30);
Billboard485 := TBillboardNode.Create;
Shape486 := TShapeNode.Create;
Text487 := TTextNode.Create;
Text487.SetText(['27']);
FontStyle488 := TFontStyleNode.Create;
FontStyle488.Size := 0.035;
{ METHOD .FontStyle }
Text487.FontStyle := FontStyle488;
{ METHOD .Geometry }
Shape486.Geometry := Text487;
{ METHOD .FdChildren.Add }
Billboard485.FdChildren.Add(Shape486);
{ METHOD .FdChildren.Add }
HAnimSite482.FdChildren.Add(Billboard485);
{ METHOD .FdChildren.Add }
HAnimSegment460.FdChildren.Add(HAnimSite482);
{ METHOD .FdChildren.Add }
HAnimJoint459.FdChildren.Add(HAnimSegment460);
HAnimJoint489 := THAnimJointNode.Create;
HAnimJoint489.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment490 := THAnimSegmentNode.Create;
Transform491 := TTransformNode.Create;
Transform491.Translation := Vector3(0.0041,1.1276,-0.0796);
Transform492 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform492.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform491.FdChildren.Add(Transform492);
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(Transform491);
Shape494 := TShapeNode.Create;
LineSet495 := TLineSetNode.Create;
LineSet495.SetVertexCount([2]);
Coordinate496 := TCoordinateNode.Create;
Coordinate496.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0048,1.1912,-0.0805)]);
{ METHOD .Coord }
LineSet495.Coord := Coordinate496;
{ from vl3 to vl1 vertices 2 }
{ METHOD .Color }
LineSet495.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape494.Geometry := LineSet495;
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(Shape494);
HAnimSite498 := THAnimSiteNode.Create;
HAnimSite498.Translation := Vector3(0.0871,1.1925,0.0992);
end;

procedure InitHumanoid2Part30;
begin

TouchSensor499 := TTouchSensorNode.Create;
TouchSensor499.Description := 'HAnimSite 28 l_rib10';
{ METHOD .FdChildren.Add }
HAnimSite498.FdChildren.Add(TouchSensor499);
{ METHOD .FdChildren.Add }
HAnimSite498.FdChildren.Add(Shape30);
Billboard501 := TBillboardNode.Create;
Shape502 := TShapeNode.Create;
Text503 := TTextNode.Create;
Text503.SetText(['28']);
FontStyle504 := TFontStyleNode.Create;
FontStyle504.Size := 0.035;
{ METHOD .FontStyle }
Text503.FontStyle := FontStyle504;
{ METHOD .Geometry }
Shape502.Geometry := Text503;
{ METHOD .FdChildren.Add }
Billboard501.FdChildren.Add(Shape502);
{ METHOD .FdChildren.Add }
HAnimSite498.FdChildren.Add(Billboard501);
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(HAnimSite498);
HAnimSite505 := THAnimSiteNode.Create;
HAnimSite505.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor506 := TTouchSensorNode.Create;
TouchSensor506.Description := 'HAnimSite 30 r_rib10';
{ METHOD .FdChildren.Add }
HAnimSite505.FdChildren.Add(TouchSensor506);
{ METHOD .FdChildren.Add }
HAnimSite505.FdChildren.Add(Shape30);
Billboard508 := TBillboardNode.Create;
Shape509 := TShapeNode.Create;
Text510 := TTextNode.Create;
Text510.SetText(['30']);
FontStyle511 := TFontStyleNode.Create;
FontStyle511.Size := 0.035;
{ METHOD .FontStyle }
Text510.FontStyle := FontStyle511;
{ METHOD .Geometry }
Shape509.Geometry := Text510;
{ METHOD .FdChildren.Add }
Billboard508.FdChildren.Add(Shape509);
{ METHOD .FdChildren.Add }
HAnimSite505.FdChildren.Add(Billboard508);
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(HAnimSite505);
HAnimSite512 := THAnimSiteNode.Create;
TouchSensor513 := TTouchSensorNode.Create;
TouchSensor513.Description := 'HAnimSite 24 spine_1_middle_back';
{ METHOD .FdChildren.Add }
HAnimSite512.FdChildren.Add(TouchSensor513);
{ METHOD .FdChildren.Add }
HAnimSite512.FdChildren.Add(Shape30);
Billboard515 := TBillboardNode.Create;
Shape516 := TShapeNode.Create;
Text517 := TTextNode.Create;
end;

procedure InitHumanoid2Part31;
begin

Text517.SetText(['24']);
FontStyle518 := TFontStyleNode.Create;
FontStyle518.Size := 0.035;
{ METHOD .FontStyle }
Text517.FontStyle := FontStyle518;
{ METHOD .Geometry }
Shape516.Geometry := Text517;
{ METHOD .FdChildren.Add }
Billboard515.FdChildren.Add(Shape516);
{ METHOD .FdChildren.Add }
HAnimSite512.FdChildren.Add(Billboard515);
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(HAnimSite512);
HAnimSite519 := THAnimSiteNode.Create;
TouchSensor520 := TTouchSensorNode.Create;
TouchSensor520.Description := 'HAnimSite spine_2_middle_back';
{ METHOD .FdChildren.Add }
HAnimSite519.FdChildren.Add(TouchSensor520);
{ METHOD .FdChildren.Add }
HAnimSite519.FdChildren.Add(Shape30);
Billboard522 := TBillboardNode.Create;
Shape523 := TShapeNode.Create;
Text524 := TTextNode.Create;
Text524.SetText(['']);
FontStyle525 := TFontStyleNode.Create;
FontStyle525.Size := 0.035;
{ METHOD .FontStyle }
Text524.FontStyle := FontStyle525;
{ METHOD .Geometry }
Shape523.Geometry := Text524;
{ METHOD .FdChildren.Add }
Billboard522.FdChildren.Add(Shape523);
{ METHOD .FdChildren.Add }
HAnimSite519.FdChildren.Add(Billboard522);
{ METHOD .FdChildren.Add }
HAnimSegment490.FdChildren.Add(HAnimSite519);
{ METHOD .FdChildren.Add }
HAnimJoint489.FdChildren.Add(HAnimSegment490);
HAnimJoint526 := THAnimJointNode.Create;
HAnimJoint526.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment527 := THAnimSegmentNode.Create;
Transform528 := TTransformNode.Create;
Transform528.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform529 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform529.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform528.FdChildren.Add(Transform529);
{ METHOD .FdChildren.Add }
HAnimSegment527.FdChildren.Add(Transform528);
Shape531 := TShapeNode.Create;
LineSet532 := TLineSetNode.Create;
LineSet532.SetVertexCount([2]);
Coordinate533 := TCoordinateNode.Create;
Coordinate533.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0056,1.2848,-0.0822)]);
{ METHOD .Coord }
LineSet532.Coord := Coordinate533;
end;

procedure InitHumanoid2Part32;
begin

{ from vl1 to vt10 vertices 2 }
{ METHOD .Color }
LineSet532.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape531.Geometry := LineSet532;
{ METHOD .FdChildren.Add }
HAnimSegment527.FdChildren.Add(Shape531);
{ METHOD .FdChildren.Add }
HAnimJoint526.FdChildren.Add(HAnimSegment527);
HAnimJoint535 := THAnimJointNode.Create;
HAnimJoint535.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment536 := THAnimSegmentNode.Create;
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform538 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform538.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform537.FdChildren.Add(Transform538);
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(Transform537);
Shape540 := TShapeNode.Create;
LineSet541 := TLineSetNode.Create;
LineSet541.SetVertexCount([2]);
Coordinate542 := TCoordinateNode.Create;
Coordinate542.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0059,1.3866,-0.08)]);
{ METHOD .Coord }
LineSet541.Coord := Coordinate542;
{ from vt10 to vt6 vertices 2 }
{ METHOD .Color }
LineSet541.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape540.Geometry := LineSet541;
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(Shape540);
HAnimSite544 := THAnimSiteNode.Create;
HAnimSite544.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor545 := TTouchSensorNode.Create;
TouchSensor545.Description := 'HAnimSite 29 l_thelion';
{ METHOD .FdChildren.Add }
HAnimSite544.FdChildren.Add(TouchSensor545);
{ METHOD .FdChildren.Add }
HAnimSite544.FdChildren.Add(Shape30);
Billboard547 := TBillboardNode.Create;
Shape548 := TShapeNode.Create;
Text549 := TTextNode.Create;
Text549.SetText(['29']);
FontStyle550 := TFontStyleNode.Create;
FontStyle550.Size := 0.035;
{ METHOD .FontStyle }
Text549.FontStyle := FontStyle550;
{ METHOD .Geometry }
Shape548.Geometry := Text549;
{ METHOD .FdChildren.Add }
Billboard547.FdChildren.Add(Shape548);
{ METHOD .FdChildren.Add }
HAnimSite544.FdChildren.Add(Billboard547);
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(HAnimSite544);
HAnimSite551 := THAnimSiteNode.Create;
end;

procedure InitHumanoid2Part33;
begin

HAnimSite551.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor552 := TTouchSensorNode.Create;
TouchSensor552.Description := 'HAnimSite 31 r_thelion';
{ METHOD .FdChildren.Add }
HAnimSite551.FdChildren.Add(TouchSensor552);
{ METHOD .FdChildren.Add }
HAnimSite551.FdChildren.Add(Shape30);
Billboard554 := TBillboardNode.Create;
Shape555 := TShapeNode.Create;
Text556 := TTextNode.Create;
Text556.SetText(['31']);
FontStyle557 := TFontStyleNode.Create;
FontStyle557.Size := 0.035;
{ METHOD .FontStyle }
Text556.FontStyle := FontStyle557;
{ METHOD .Geometry }
Shape555.Geometry := Text556;
{ METHOD .FdChildren.Add }
Billboard554.FdChildren.Add(Shape555);
{ METHOD .FdChildren.Add }
HAnimSite551.FdChildren.Add(Billboard554);
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(HAnimSite551);
HAnimSite558 := THAnimSiteNode.Create;
HAnimSite558.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor559 := TTouchSensorNode.Create;
TouchSensor559.Description := 'HAnimSite 13 substernale';
{ METHOD .FdChildren.Add }
HAnimSite558.FdChildren.Add(TouchSensor559);
{ METHOD .FdChildren.Add }
HAnimSite558.FdChildren.Add(Shape30);
Billboard561 := TBillboardNode.Create;
Shape562 := TShapeNode.Create;
Text563 := TTextNode.Create;
Text563.SetText(['13']);
FontStyle564 := TFontStyleNode.Create;
FontStyle564.Size := 0.035;
{ METHOD .FontStyle }
Text563.FontStyle := FontStyle564;
{ METHOD .Geometry }
Shape562.Geometry := Text563;
{ METHOD .FdChildren.Add }
Billboard561.FdChildren.Add(Shape562);
{ METHOD .FdChildren.Add }
HAnimSite558.FdChildren.Add(Billboard561);
{ METHOD .FdChildren.Add }
HAnimSegment536.FdChildren.Add(HAnimSite558);
{ METHOD .FdChildren.Add }
HAnimJoint535.FdChildren.Add(HAnimSegment536);
HAnimJoint565 := THAnimJointNode.Create;
HAnimJoint565.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment566 := THAnimSegmentNode.Create;
Transform567 := TTransformNode.Create;
Transform567.Translation := Vector3(0.0059,1.3866,-0.08);
Transform568 := TTransformNode.Create;
end;

procedure InitHumanoid2Part34;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform568.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform567.FdChildren.Add(Transform568);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(Transform567);
Shape570 := TShapeNode.Create;
LineSet571 := TLineSetNode.Create;
LineSet571.SetVertexCount([2]);
Coordinate572 := TCoordinateNode.Create;
Coordinate572.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.0065,1.4951,-0.0387)]);
{ METHOD .Coord }
LineSet571.Coord := Coordinate572;
{ from vt6 to vt1 vertices 2 }
{ METHOD .Color }
LineSet571.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape570.Geometry := LineSet571;
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(Shape570);
HAnimSite574 := THAnimSiteNode.Create;
TouchSensor575 := TTouchSensorNode.Create;
TouchSensor575.Description := 'HAnimSite 94 l_chest_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite574.FdChildren.Add(TouchSensor575);
{ METHOD .FdChildren.Add }
HAnimSite574.FdChildren.Add(Shape30);
Billboard577 := TBillboardNode.Create;
Shape578 := TShapeNode.Create;
Text579 := TTextNode.Create;
Text579.SetText(['94']);
FontStyle580 := TFontStyleNode.Create;
FontStyle580.Size := 0.035;
{ METHOD .FontStyle }
Text579.FontStyle := FontStyle580;
{ METHOD .Geometry }
Shape578.Geometry := Text579;
{ METHOD .FdChildren.Add }
Billboard577.FdChildren.Add(Shape578);
{ METHOD .FdChildren.Add }
HAnimSite574.FdChildren.Add(Billboard577);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(HAnimSite574);
HAnimSite581 := THAnimSiteNode.Create;
TouchSensor582 := TTouchSensorNode.Create;
TouchSensor582.Description := 'HAnimSite 88 mesosternale';
{ METHOD .FdChildren.Add }
HAnimSite581.FdChildren.Add(TouchSensor582);
{ METHOD .FdChildren.Add }
HAnimSite581.FdChildren.Add(Shape30);
Billboard584 := TBillboardNode.Create;
Shape585 := TShapeNode.Create;
Text586 := TTextNode.Create;
Text586.SetText(['88']);
FontStyle587 := TFontStyleNode.Create;
FontStyle587.Size := 0.035;
{ METHOD .FontStyle }
Text586.FontStyle := FontStyle587;
end;

procedure InitHumanoid2Part35;
begin

{ METHOD .Geometry }
Shape585.Geometry := Text586;
{ METHOD .FdChildren.Add }
Billboard584.FdChildren.Add(Shape585);
{ METHOD .FdChildren.Add }
HAnimSite581.FdChildren.Add(Billboard584);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(HAnimSite581);
HAnimSite588 := THAnimSiteNode.Create;
TouchSensor589 := TTouchSensorNode.Create;
TouchSensor589.Description := 'HAnimSite 95 r_chest_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite588.FdChildren.Add(TouchSensor589);
{ METHOD .FdChildren.Add }
HAnimSite588.FdChildren.Add(Shape30);
Billboard591 := TBillboardNode.Create;
Shape592 := TShapeNode.Create;
Text593 := TTextNode.Create;
Text593.SetText(['95']);
FontStyle594 := TFontStyleNode.Create;
FontStyle594.Size := 0.035;
{ METHOD .FontStyle }
Text593.FontStyle := FontStyle594;
{ METHOD .Geometry }
Shape592.Geometry := Text593;
{ METHOD .FdChildren.Add }
Billboard591.FdChildren.Add(Shape592);
{ METHOD .FdChildren.Add }
HAnimSite588.FdChildren.Add(Billboard591);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(HAnimSite588);
HAnimSite595 := THAnimSiteNode.Create;
TouchSensor596 := TTouchSensorNode.Create;
TouchSensor596.Description := 'HAnimSite 92 rear_center_midsagittal_plane';
{ METHOD .FdChildren.Add }
HAnimSite595.FdChildren.Add(TouchSensor596);
{ METHOD .FdChildren.Add }
HAnimSite595.FdChildren.Add(Shape30);
Billboard598 := TBillboardNode.Create;
Shape599 := TShapeNode.Create;
Text600 := TTextNode.Create;
Text600.SetText(['92']);
FontStyle601 := TFontStyleNode.Create;
FontStyle601.Size := 0.035;
{ METHOD .FontStyle }
Text600.FontStyle := FontStyle601;
{ METHOD .Geometry }
Shape599.Geometry := Text600;
{ METHOD .FdChildren.Add }
Billboard598.FdChildren.Add(Shape599);
{ METHOD .FdChildren.Add }
HAnimSite595.FdChildren.Add(Billboard598);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(HAnimSite595);
{ METHOD .FdChildren.Add }
HAnimJoint565.FdChildren.Add(HAnimSegment566);
HAnimJoint602 := THAnimJointNode.Create;
HAnimJoint602.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment603 := THAnimSegmentNode.Create;
end;

procedure InitHumanoid2Part36;
begin

Transform604 := TTransformNode.Create;
Transform604.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform605 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform605.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform604.FdChildren.Add(Transform605);
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(Transform604);
Shape607 := TShapeNode.Create;
LineSet608 := TLineSetNode.Create;
LineSet608.SetVertexCount([2]);
Coordinate609 := TCoordinateNode.Create;
Coordinate609.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5662,-0.0084)]);
{ METHOD .Coord }
LineSet608.Coord := Coordinate609;
{ from vt1 to vc4 vertices 2 }
{ METHOD .Color }
LineSet608.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape607.Geometry := LineSet608;
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(Shape607);
HAnimSite611 := THAnimSiteNode.Create;
HAnimSite611.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor612 := TTouchSensorNode.Create;
TouchSensor612.Description := 'HAnimSite 10 cervicale';
{ METHOD .FdChildren.Add }
HAnimSite611.FdChildren.Add(TouchSensor612);
{ METHOD .FdChildren.Add }
HAnimSite611.FdChildren.Add(Shape30);
Billboard614 := TBillboardNode.Create;
Shape615 := TShapeNode.Create;
Text616 := TTextNode.Create;
Text616.SetText(['10']);
FontStyle617 := TFontStyleNode.Create;
FontStyle617.Size := 0.035;
{ METHOD .FontStyle }
Text616.FontStyle := FontStyle617;
{ METHOD .Geometry }
Shape615.Geometry := Text616;
{ METHOD .FdChildren.Add }
Billboard614.FdChildren.Add(Shape615);
{ METHOD .FdChildren.Add }
HAnimSite611.FdChildren.Add(Billboard614);
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(HAnimSite611);
HAnimSite618 := THAnimSiteNode.Create;
HAnimSite618.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor619 := TTouchSensorNode.Create;
TouchSensor619.Description := 'HAnimSite 82 l_neck_base';
{ METHOD .FdChildren.Add }
HAnimSite618.FdChildren.Add(TouchSensor619);
{ METHOD .FdChildren.Add }
HAnimSite618.FdChildren.Add(Shape30);
Billboard621 := TBillboardNode.Create;
Shape622 := TShapeNode.Create;
end;

procedure InitHumanoid2Part37;
begin

Text623 := TTextNode.Create;
Text623.SetText(['82']);
FontStyle624 := TFontStyleNode.Create;
FontStyle624.Size := 0.035;
{ METHOD .FontStyle }
Text623.FontStyle := FontStyle624;
{ METHOD .Geometry }
Shape622.Geometry := Text623;
{ METHOD .FdChildren.Add }
Billboard621.FdChildren.Add(Shape622);
{ METHOD .FdChildren.Add }
HAnimSite618.FdChildren.Add(Billboard621);
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(HAnimSite618);
HAnimSite625 := THAnimSiteNode.Create;
HAnimSite625.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor626 := TTouchSensorNode.Create;
TouchSensor626.Description := 'HAnimSite 83 r_neck_base';
{ METHOD .FdChildren.Add }
HAnimSite625.FdChildren.Add(TouchSensor626);
{ METHOD .FdChildren.Add }
HAnimSite625.FdChildren.Add(Shape30);
Billboard628 := TBillboardNode.Create;
Shape629 := TShapeNode.Create;
Text630 := TTextNode.Create;
Text630.SetText(['83']);
FontStyle631 := TFontStyleNode.Create;
FontStyle631.Size := 0.035;
{ METHOD .FontStyle }
Text630.FontStyle := FontStyle631;
{ METHOD .Geometry }
Shape629.Geometry := Text630;
{ METHOD .FdChildren.Add }
Billboard628.FdChildren.Add(Shape629);
{ METHOD .FdChildren.Add }
HAnimSite625.FdChildren.Add(Billboard628);
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(HAnimSite625);
HAnimSite632 := THAnimSiteNode.Create;
HAnimSite632.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor633 := TTouchSensorNode.Create;
TouchSensor633.Description := 'HAnimSite 12 suprasternale';
{ METHOD .FdChildren.Add }
HAnimSite632.FdChildren.Add(TouchSensor633);
{ METHOD .FdChildren.Add }
HAnimSite632.FdChildren.Add(Shape30);
Billboard635 := TBillboardNode.Create;
Shape636 := TShapeNode.Create;
Text637 := TTextNode.Create;
Text637.SetText(['12']);
FontStyle638 := TFontStyleNode.Create;
FontStyle638.Size := 0.035;
{ METHOD .FontStyle }
Text637.FontStyle := FontStyle638;
{ METHOD .Geometry }
Shape636.Geometry := Text637;
end;

procedure InitHumanoid2Part38;
begin

{ METHOD .FdChildren.Add }
Billboard635.FdChildren.Add(Shape636);
{ METHOD .FdChildren.Add }
HAnimSite632.FdChildren.Add(Billboard635);
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(HAnimSite632);
Shape639 := TShapeNode.Create;
LineSet640 := TLineSetNode.Create;
LineSet640.SetVertexCount([2]);
Coordinate641 := TCoordinateNode.Create;
Coordinate641.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ METHOD .Coord }
LineSet640.Coord := Coordinate641;
{ from vt1 to l_sternoclavicular vertices 2 }
{ METHOD .Color }
LineSet640.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape639.Geometry := LineSet640;
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(Shape639);
Shape643 := TShapeNode.Create;
LineSet644 := TLineSetNode.Create;
LineSet644.SetVertexCount([2]);
Coordinate645 := TCoordinateNode.Create;
Coordinate645.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ METHOD .Coord }
LineSet644.Coord := Coordinate645;
{ from vt1 to r_sternoclavicular vertices 2 }
{ METHOD .Color }
LineSet644.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape643.Geometry := LineSet644;
{ METHOD .FdChildren.Add }
HAnimSegment603.FdChildren.Add(Shape643);
{ METHOD .FdChildren.Add }
HAnimJoint602.FdChildren.Add(HAnimSegment603);
HAnimJoint647 := THAnimJointNode.Create;
HAnimJoint647.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment648 := THAnimSegmentNode.Create;
Transform649 := TTransformNode.Create;
Transform649.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform650 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform650.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform649.FdChildren.Add(Transform650);
{ METHOD .FdChildren.Add }
HAnimSegment648.FdChildren.Add(Transform649);
Shape652 := TShapeNode.Create;
LineSet653 := TLineSetNode.Create;
LineSet653.SetVertexCount([2]);
Coordinate654 := TCoordinateNode.Create;
Coordinate654.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.5928,-0.0103)]);
{ METHOD .Coord }
LineSet653.Coord := Coordinate654;
{ from vc4 to vc2 vertices 2 }
{ METHOD .Color }
LineSet653.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape652.Geometry := LineSet653;
{ METHOD .FdChildren.Add }
HAnimSegment648.FdChildren.Add(Shape652);
end;

procedure InitHumanoid2Part39;
begin

{ METHOD .FdChildren.Add }
HAnimJoint647.FdChildren.Add(HAnimSegment648);
HAnimJoint656 := THAnimJointNode.Create;
HAnimJoint656.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment657 := THAnimSegmentNode.Create;
Transform658 := TTransformNode.Create;
Transform658.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform659 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform659.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform658.FdChildren.Add(Transform659);
{ METHOD .FdChildren.Add }
HAnimSegment657.FdChildren.Add(Transform658);
Shape661 := TShapeNode.Create;
LineSet662 := TLineSetNode.Create;
LineSet662.SetVertexCount([2]);
Coordinate663 := TCoordinateNode.Create;
Coordinate663.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0044,1.6209,0.0236)]);
{ METHOD .Coord }
LineSet662.Coord := Coordinate663;
{ from vc2 to skullbase vertices 2 }
{ METHOD .Color }
LineSet662.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape661.Geometry := LineSet662;
{ METHOD .FdChildren.Add }
HAnimSegment657.FdChildren.Add(Shape661);
HAnimSite665 := THAnimSiteNode.Create;
TouchSensor666 := TTouchSensorNode.Create;
TouchSensor666.Description := 'HAnimSite 11 adams_apple';
{ METHOD .FdChildren.Add }
HAnimSite665.FdChildren.Add(TouchSensor666);
{ METHOD .FdChildren.Add }
HAnimSite665.FdChildren.Add(Shape30);
Billboard668 := TBillboardNode.Create;
Shape669 := TShapeNode.Create;
Text670 := TTextNode.Create;
Text670.SetText(['11']);
FontStyle671 := TFontStyleNode.Create;
FontStyle671.Size := 0.035;
{ METHOD .FontStyle }
Text670.FontStyle := FontStyle671;
{ METHOD .Geometry }
Shape669.Geometry := Text670;
{ METHOD .FdChildren.Add }
Billboard668.FdChildren.Add(Shape669);
{ METHOD .FdChildren.Add }
HAnimSite665.FdChildren.Add(Billboard668);
{ METHOD .FdChildren.Add }
HAnimSegment657.FdChildren.Add(HAnimSite665);
{ METHOD .FdChildren.Add }
HAnimJoint656.FdChildren.Add(HAnimSegment657);
HAnimJoint672 := THAnimJointNode.Create;
HAnimJoint672.Center := Vector3(0.0044,1.6209,0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint656.FdChildren.Add(HAnimJoint672);
{ METHOD .FdChildren.Add }
HAnimJoint647.FdChildren.Add(HAnimJoint656);
end;

procedure InitHumanoid2Part40;
begin

{ METHOD .FdChildren.Add }
HAnimJoint602.FdChildren.Add(HAnimJoint647);
HAnimJoint673 := THAnimJointNode.Create;
HAnimJoint673.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment674 := THAnimSegmentNode.Create;
Transform675 := TTransformNode.Create;
Transform675.Translation := Vector3(0.082,1.4488,-0.0353);
Transform676 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform676.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform675.FdChildren.Add(Transform676);
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(Transform675);
Shape678 := TShapeNode.Create;
LineSet679 := TLineSetNode.Create;
LineSet679.SetVertexCount([2]);
Coordinate680 := TCoordinateNode.Create;
Coordinate680.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ METHOD .Coord }
LineSet679.Coord := Coordinate680;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
{ METHOD .Color }
LineSet679.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape678.Geometry := LineSet679;
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(Shape678);
HAnimSite682 := THAnimSiteNode.Create;
HAnimSite682.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor683 := TTouchSensorNode.Create;
TouchSensor683.Description := 'HAnimSite 15 l_acromion';
{ METHOD .FdChildren.Add }
HAnimSite682.FdChildren.Add(TouchSensor683);
{ METHOD .FdChildren.Add }
HAnimSite682.FdChildren.Add(Shape30);
Billboard685 := TBillboardNode.Create;
Shape686 := TShapeNode.Create;
Text687 := TTextNode.Create;
Text687.SetText(['15']);
FontStyle688 := TFontStyleNode.Create;
FontStyle688.Size := 0.035;
{ METHOD .FontStyle }
Text687.FontStyle := FontStyle688;
{ METHOD .Geometry }
Shape686.Geometry := Text687;
{ METHOD .FdChildren.Add }
Billboard685.FdChildren.Add(Shape686);
{ METHOD .FdChildren.Add }
HAnimSite682.FdChildren.Add(Billboard685);
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(HAnimSite682);
HAnimSite689 := THAnimSiteNode.Create;
HAnimSite689.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor690 := TTouchSensorNode.Create;
TouchSensor690.Description := 'HAnimSite 17 l_axilla_distal';
end;

procedure InitHumanoid2Part41;
begin

{ METHOD .FdChildren.Add }
HAnimSite689.FdChildren.Add(TouchSensor690);
{ METHOD .FdChildren.Add }
HAnimSite689.FdChildren.Add(Shape30);
Billboard692 := TBillboardNode.Create;
Shape693 := TShapeNode.Create;
Text694 := TTextNode.Create;
Text694.SetText(['17']);
FontStyle695 := TFontStyleNode.Create;
FontStyle695.Size := 0.035;
{ METHOD .FontStyle }
Text694.FontStyle := FontStyle695;
{ METHOD .Geometry }
Shape693.Geometry := Text694;
{ METHOD .FdChildren.Add }
Billboard692.FdChildren.Add(Shape693);
{ METHOD .FdChildren.Add }
HAnimSite689.FdChildren.Add(Billboard692);
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(HAnimSite689);
HAnimSite696 := THAnimSiteNode.Create;
TouchSensor697 := TTouchSensorNode.Create;
TouchSensor697.Description := 'HAnimSite 18 l_axilla_posterior_folds';
{ METHOD .FdChildren.Add }
HAnimSite696.FdChildren.Add(TouchSensor697);
{ METHOD .FdChildren.Add }
HAnimSite696.FdChildren.Add(Shape30);
Billboard699 := TBillboardNode.Create;
Shape700 := TShapeNode.Create;
Text701 := TTextNode.Create;
Text701.SetText(['18']);
FontStyle702 := TFontStyleNode.Create;
FontStyle702.Size := 0.035;
{ METHOD .FontStyle }
Text701.FontStyle := FontStyle702;
{ METHOD .Geometry }
Shape700.Geometry := Text701;
{ METHOD .FdChildren.Add }
Billboard699.FdChildren.Add(Shape700);
{ METHOD .FdChildren.Add }
HAnimSite696.FdChildren.Add(Billboard699);
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(HAnimSite696);
HAnimSite703 := THAnimSiteNode.Create;
HAnimSite703.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor704 := TTouchSensorNode.Create;
TouchSensor704.Description := 'HAnimSite 16 l_axilla_proximal';
{ METHOD .FdChildren.Add }
HAnimSite703.FdChildren.Add(TouchSensor704);
{ METHOD .FdChildren.Add }
HAnimSite703.FdChildren.Add(Shape30);
Billboard706 := TBillboardNode.Create;
Shape707 := TShapeNode.Create;
Text708 := TTextNode.Create;
Text708.SetText(['16']);
FontStyle709 := TFontStyleNode.Create;
end;

procedure InitHumanoid2Part42;
begin

FontStyle709.Size := 0.035;
{ METHOD .FontStyle }
Text708.FontStyle := FontStyle709;
{ METHOD .Geometry }
Shape707.Geometry := Text708;
{ METHOD .FdChildren.Add }
Billboard706.FdChildren.Add(Shape707);
{ METHOD .FdChildren.Add }
HAnimSite703.FdChildren.Add(Billboard706);
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(HAnimSite703);
HAnimSite710 := THAnimSiteNode.Create;
HAnimSite710.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor711 := TTouchSensorNode.Create;
TouchSensor711.Description := 'HAnimSite 14 l_clavicale';
{ METHOD .FdChildren.Add }
HAnimSite710.FdChildren.Add(TouchSensor711);
{ METHOD .FdChildren.Add }
HAnimSite710.FdChildren.Add(Shape30);
Billboard713 := TBillboardNode.Create;
Shape714 := TShapeNode.Create;
Text715 := TTextNode.Create;
Text715.SetText(['14']);
FontStyle716 := TFontStyleNode.Create;
FontStyle716.Size := 0.035;
{ METHOD .FontStyle }
Text715.FontStyle := FontStyle716;
{ METHOD .Geometry }
Shape714.Geometry := Text715;
{ METHOD .FdChildren.Add }
Billboard713.FdChildren.Add(Shape714);
{ METHOD .FdChildren.Add }
HAnimSite710.FdChildren.Add(Billboard713);
{ METHOD .FdChildren.Add }
HAnimSegment674.FdChildren.Add(HAnimSite710);
{ METHOD .FdChildren.Add }
HAnimJoint673.FdChildren.Add(HAnimSegment674);
HAnimJoint717 := THAnimJointNode.Create;
HAnimJoint717.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment718 := THAnimSegmentNode.Create;
Transform719 := TTransformNode.Create;
Transform719.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform720 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform720.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform719.FdChildren.Add(Transform720);
{ METHOD .FdChildren.Add }
HAnimSegment718.FdChildren.Add(Transform719);
Shape722 := TShapeNode.Create;
LineSet723 := TLineSetNode.Create;
LineSet723.SetVertexCount([2]);
Coordinate724 := TCoordinateNode.Create;
Coordinate724.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ METHOD .Coord }
LineSet723.Coord := Coordinate724;
{ from l_acromioclavicular to l_shoulder vertices 2 }
{ METHOD .Color }
LineSet723.Color := ColorRGBA27;
end;

procedure InitHumanoid2Part43;
begin

{ METHOD .Geometry }
Shape722.Geometry := LineSet723;
{ METHOD .FdChildren.Add }
HAnimSegment718.FdChildren.Add(Shape722);
{ METHOD .FdChildren.Add }
HAnimJoint717.FdChildren.Add(HAnimSegment718);
HAnimJoint726 := THAnimJointNode.Create;
HAnimJoint726.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment727 := THAnimSegmentNode.Create;
Transform728 := TTransformNode.Create;
Transform728.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform729 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform729.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform728.FdChildren.Add(Transform729);
{ METHOD .FdChildren.Add }
HAnimSegment727.FdChildren.Add(Transform728);
Shape731 := TShapeNode.Create;
LineSet732 := TLineSetNode.Create;
LineSet732.SetVertexCount([2]);
Coordinate733 := TCoordinateNode.Create;
Coordinate733.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ METHOD .Coord }
LineSet732.Coord := Coordinate733;
{ from l_shoulder to l_elbow vertices 2 }
{ METHOD .Color }
LineSet732.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape731.Geometry := LineSet732;
{ METHOD .FdChildren.Add }
HAnimSegment727.FdChildren.Add(Shape731);
HAnimSite735 := THAnimSiteNode.Create;
TouchSensor736 := TTouchSensorNode.Create;
TouchSensor736.Description := 'HAnimSite 96 l_bideltoid';
{ METHOD .FdChildren.Add }
HAnimSite735.FdChildren.Add(TouchSensor736);
{ METHOD .FdChildren.Add }
HAnimSite735.FdChildren.Add(Shape30);
Billboard738 := TBillboardNode.Create;
Shape739 := TShapeNode.Create;
Text740 := TTextNode.Create;
Text740.SetText(['96']);
FontStyle741 := TFontStyleNode.Create;
FontStyle741.Size := 0.035;
{ METHOD .FontStyle }
Text740.FontStyle := FontStyle741;
{ METHOD .Geometry }
Shape739.Geometry := Text740;
{ METHOD .FdChildren.Add }
Billboard738.FdChildren.Add(Shape739);
{ METHOD .FdChildren.Add }
HAnimSite735.FdChildren.Add(Billboard738);
{ METHOD .FdChildren.Add }
HAnimSegment727.FdChildren.Add(HAnimSite735);
HAnimSite742 := THAnimSiteNode.Create;
HAnimSite742.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor743 := TTouchSensorNode.Create;
end;

procedure InitHumanoid2Part44;
begin

TouchSensor743.Description := 'HAnimSite 63 l_humeral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite742.FdChildren.Add(TouchSensor743);
{ METHOD .FdChildren.Add }
HAnimSite742.FdChildren.Add(Shape30);
Billboard745 := TBillboardNode.Create;
Shape746 := TShapeNode.Create;
Text747 := TTextNode.Create;
Text747.SetText(['63']);
FontStyle748 := TFontStyleNode.Create;
FontStyle748.Size := 0.035;
{ METHOD .FontStyle }
Text747.FontStyle := FontStyle748;
{ METHOD .Geometry }
Shape746.Geometry := Text747;
{ METHOD .FdChildren.Add }
Billboard745.FdChildren.Add(Shape746);
{ METHOD .FdChildren.Add }
HAnimSite742.FdChildren.Add(Billboard745);
{ METHOD .FdChildren.Add }
HAnimSegment727.FdChildren.Add(HAnimSite742);
{ METHOD .FdChildren.Add }
HAnimJoint726.FdChildren.Add(HAnimSegment727);
HAnimJoint749 := THAnimJointNode.Create;
HAnimJoint749.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment750 := THAnimSegmentNode.Create;
Transform751 := TTransformNode.Create;
Transform751.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform752 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform752.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform751.FdChildren.Add(Transform752);
{ METHOD .FdChildren.Add }
HAnimSegment750.FdChildren.Add(Transform751);
Shape754 := TShapeNode.Create;
LineSet755 := TLineSetNode.Create;
LineSet755.SetVertexCount([2]);
Coordinate756 := TCoordinateNode.Create;
Coordinate756.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ METHOD .Coord }
LineSet755.Coord := Coordinate756;
{ from l_elbow to l_radiocarpal vertices 2 }
{ METHOD .Color }
LineSet755.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape754.Geometry := LineSet755;
{ METHOD .FdChildren.Add }
HAnimSegment750.FdChildren.Add(Shape754);
HAnimSite758 := THAnimSiteNode.Create;
HAnimSite758.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor759 := TTouchSensorNode.Create;
TouchSensor759.Description := 'HAnimSite 64 l_humeral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite758.FdChildren.Add(TouchSensor759);
{ METHOD .FdChildren.Add }
HAnimSite758.FdChildren.Add(Shape30);
Billboard761 := TBillboardNode.Create;
end;

procedure InitHumanoid2Part45;
begin

Shape762 := TShapeNode.Create;
Text763 := TTextNode.Create;
Text763.SetText(['64']);
FontStyle764 := TFontStyleNode.Create;
FontStyle764.Size := 0.035;
{ METHOD .FontStyle }
Text763.FontStyle := FontStyle764;
{ METHOD .Geometry }
Shape762.Geometry := Text763;
{ METHOD .FdChildren.Add }
Billboard761.FdChildren.Add(Shape762);
{ METHOD .FdChildren.Add }
HAnimSite758.FdChildren.Add(Billboard761);
{ METHOD .FdChildren.Add }
HAnimSegment750.FdChildren.Add(HAnimSite758);
HAnimSite765 := THAnimSiteNode.Create;
HAnimSite765.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor766 := TTouchSensorNode.Create;
TouchSensor766.Description := 'HAnimSite 65 l_olecranon';
{ METHOD .FdChildren.Add }
HAnimSite765.FdChildren.Add(TouchSensor766);
{ METHOD .FdChildren.Add }
HAnimSite765.FdChildren.Add(Shape30);
Billboard768 := TBillboardNode.Create;
Shape769 := TShapeNode.Create;
Text770 := TTextNode.Create;
Text770.SetText(['65']);
FontStyle771 := TFontStyleNode.Create;
FontStyle771.Size := 0.035;
{ METHOD .FontStyle }
Text770.FontStyle := FontStyle771;
{ METHOD .Geometry }
Shape769.Geometry := Text770;
{ METHOD .FdChildren.Add }
Billboard768.FdChildren.Add(Shape769);
{ METHOD .FdChildren.Add }
HAnimSite765.FdChildren.Add(Billboard768);
{ METHOD .FdChildren.Add }
HAnimSegment750.FdChildren.Add(HAnimSite765);
HAnimSite772 := THAnimSiteNode.Create;
HAnimSite772.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor773 := TTouchSensorNode.Create;
TouchSensor773.Description := 'HAnimSite 71 l_radial_styloid';
{ METHOD .FdChildren.Add }
HAnimSite772.FdChildren.Add(TouchSensor773);
{ METHOD .FdChildren.Add }
HAnimSite772.FdChildren.Add(Shape30);
Billboard775 := TBillboardNode.Create;
Shape776 := TShapeNode.Create;
Text777 := TTextNode.Create;
Text777.SetText(['71']);
FontStyle778 := TFontStyleNode.Create;
FontStyle778.Size := 0.035;
{ METHOD .FontStyle }
Text777.FontStyle := FontStyle778;
end;

procedure InitHumanoid2Part46;
begin

{ METHOD .Geometry }
Shape776.Geometry := Text777;
{ METHOD .FdChildren.Add }
Billboard775.FdChildren.Add(Shape776);
{ METHOD .FdChildren.Add }
HAnimSite772.FdChildren.Add(Billboard775);
{ METHOD .FdChildren.Add }
HAnimSegment750.FdChildren.Add(HAnimSite772);
HAnimSite779 := THAnimSiteNode.Create;
HAnimSite779.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor780 := TTouchSensorNode.Create;
TouchSensor780.Description := 'HAnimSite 69 l_radiale';
{ METHOD .FdChildren.Add }
HAnimSite779.FdChildren.Add(TouchSensor780);
{ METHOD .FdChildren.Add }
HAnimSite779.FdChildren.Add(Shape30);
Billboard782 := TBillboardNode.Create;
Shape783 := TShapeNode.Create;
Text784 := TTextNode.Create;
Text784.SetText(['69']);
FontStyle785 := TFontStyleNode.Create;
FontStyle785.Size := 0.035;
{ METHOD .FontStyle }
Text784.FontStyle := FontStyle785;
{ METHOD .Geometry }
Shape783.Geometry := Text784;
{ METHOD .FdChildren.Add }
Billboard782.FdChildren.Add(Shape783);
{ METHOD .FdChildren.Add }
HAnimSite779.FdChildren.Add(Billboard782);
{ METHOD .FdChildren.Add }
HAnimSegment750.FdChildren.Add(HAnimSite779);
{ METHOD .FdChildren.Add }
HAnimJoint749.FdChildren.Add(HAnimSegment750);
HAnimJoint786 := THAnimJointNode.Create;
HAnimJoint786.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment787 := THAnimSegmentNode.Create;
Transform788 := TTransformNode.Create;
Transform788.Scale := Vector3(0.2,0.2,0.2);
Transform788.Translation := Vector3(0.2,0.85,-0.05);
Transform788.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform789 := TTransformNode.Create;
Transform789.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
{ METHOD .FdChildren.Add }
Transform789.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform788.FdChildren.Add(Transform789);
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(Transform788);
Shape791 := TShapeNode.Create;
LineSet792 := TLineSetNode.Create;
LineSet792.SetVertexCount([2]);
Coordinate793 := TCoordinateNode.Create;
Coordinate793.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ METHOD .Coord }
LineSet792.Coord := Coordinate793;
end;

procedure InitHumanoid2Part47;
begin

{ from l_radiocarpal to l_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
LineSet792.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape791.Geometry := LineSet792;
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(Shape791);
HAnimSite795 := THAnimSiteNode.Create;
HAnimSite795.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor796 := TTouchSensorNode.Create;
TouchSensor796.Description := 'HAnimSite 70 l_ulnar_styloid';
{ METHOD .FdChildren.Add }
HAnimSite795.FdChildren.Add(TouchSensor796);
{ METHOD .FdChildren.Add }
HAnimSite795.FdChildren.Add(Shape30);
Billboard798 := TBillboardNode.Create;
Shape799 := TShapeNode.Create;
Text800 := TTextNode.Create;
Text800.SetText(['70']);
FontStyle801 := TFontStyleNode.Create;
FontStyle801.Size := 0.035;
{ METHOD .FontStyle }
Text800.FontStyle := FontStyle801;
{ METHOD .Geometry }
Shape799.Geometry := Text800;
{ METHOD .FdChildren.Add }
Billboard798.FdChildren.Add(Shape799);
{ METHOD .FdChildren.Add }
HAnimSite795.FdChildren.Add(Billboard798);
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(HAnimSite795);
Shape802 := TShapeNode.Create;
LineSet803 := TLineSetNode.Create;
LineSet803.SetVertexCount([2]);
Coordinate804 := TCoordinateNode.Create;
Coordinate804.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ METHOD .Coord }
LineSet803.Coord := Coordinate804;
{ from l_radiocarpal to l_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
LineSet803.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape802.Geometry := LineSet803;
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(Shape802);
Shape806 := TShapeNode.Create;
LineSet807 := TLineSetNode.Create;
LineSet807.SetVertexCount([2]);
Coordinate808 := TCoordinateNode.Create;
Coordinate808.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ METHOD .Coord }
LineSet807.Coord := Coordinate808;
{ from l_radiocarpal to l_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
LineSet807.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape806.Geometry := LineSet807;
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(Shape806);
Shape810 := TShapeNode.Create;
LineSet811 := TLineSetNode.Create;
end;

procedure InitHumanoid2Part48;
begin

LineSet811.SetVertexCount([2]);
Coordinate812 := TCoordinateNode.Create;
Coordinate812.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ METHOD .Coord }
LineSet811.Coord := Coordinate812;
{ from l_radiocarpal to l_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
LineSet811.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape810.Geometry := LineSet811;
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(Shape810);
Shape814 := TShapeNode.Create;
LineSet815 := TLineSetNode.Create;
LineSet815.SetVertexCount([2]);
Coordinate816 := TCoordinateNode.Create;
Coordinate816.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
LineSet815.Coord := Coordinate816;
{ from l_radiocarpal to l_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
LineSet815.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape814.Geometry := LineSet815;
{ METHOD .FdChildren.Add }
HAnimSegment787.FdChildren.Add(Shape814);
{ METHOD .FdChildren.Add }
HAnimJoint786.FdChildren.Add(HAnimSegment787);
HAnimJoint818 := THAnimJointNode.Create;
HAnimJoint818.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment819 := THAnimSegmentNode.Create;
Transform820 := TTransformNode.Create;
Transform820.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform821 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform821.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform820.FdChildren.Add(Transform821);
{ METHOD .FdChildren.Add }
HAnimSegment819.FdChildren.Add(Transform820);
Shape823 := TShapeNode.Create;
LineSet824 := TLineSetNode.Create;
LineSet824.SetVertexCount([2]);
Coordinate825 := TCoordinateNode.Create;
Coordinate825.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
LineSet824.Coord := Coordinate825;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
LineSet824.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape823.Geometry := LineSet824;
{ METHOD .FdChildren.Add }
HAnimSegment819.FdChildren.Add(Shape823);
{ METHOD .FdChildren.Add }
HAnimJoint818.FdChildren.Add(HAnimSegment819);
HAnimJoint827 := THAnimJointNode.Create;
HAnimJoint827.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment828 := THAnimSegmentNode.Create;
Transform829 := TTransformNode.Create;
end;

procedure InitHumanoid2Part49;
begin

Transform829.Translation := Vector3(0.1951,0.8226,0.0246);
Transform830 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform830.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform829.FdChildren.Add(Transform830);
{ METHOD .FdChildren.Add }
HAnimSegment828.FdChildren.Add(Transform829);
Shape832 := TShapeNode.Create;
LineSet833 := TLineSetNode.Create;
LineSet833.SetVertexCount([2]);
Coordinate834 := TCoordinateNode.Create;
Coordinate834.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
LineSet833.Coord := Coordinate834;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
LineSet833.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape832.Geometry := LineSet833;
{ METHOD .FdChildren.Add }
HAnimSegment828.FdChildren.Add(Shape832);
{ METHOD .FdChildren.Add }
HAnimJoint827.FdChildren.Add(HAnimSegment828);
HAnimJoint836 := THAnimJointNode.Create;
HAnimJoint836.Center := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
HAnimJoint827.FdChildren.Add(HAnimJoint836);
{ METHOD .FdChildren.Add }
HAnimJoint818.FdChildren.Add(HAnimJoint827);
{ METHOD .FdChildren.Add }
HAnimJoint786.FdChildren.Add(HAnimJoint818);
HAnimJoint837 := THAnimJointNode.Create;
HAnimJoint837.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment838 := THAnimSegmentNode.Create;
Transform839 := TTransformNode.Create;
Transform839.Translation := Vector3(0.1983,0.8024,-0.028);
Transform840 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform840.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform839.FdChildren.Add(Transform840);
{ METHOD .FdChildren.Add }
HAnimSegment838.FdChildren.Add(Transform839);
Shape842 := TShapeNode.Create;
LineSet843 := TLineSetNode.Create;
LineSet843.SetVertexCount([2]);
Coordinate844 := TCoordinateNode.Create;
Coordinate844.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
LineSet843.Coord := Coordinate844;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet843.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape842.Geometry := LineSet843;
{ METHOD .FdChildren.Add }
HAnimSegment838.FdChildren.Add(Shape842);
HAnimSite846 := THAnimSiteNode.Create;
HAnimSite846.Translation := Vector3(0.2009,0.8139,-0.0237);
end;

procedure InitHumanoid2Part50;
begin

TouchSensor847 := TTouchSensorNode.Create;
TouchSensor847.Description := 'HAnimSite 75 l_metacarpal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(TouchSensor847);
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(Shape30);
Billboard849 := TBillboardNode.Create;
Shape850 := TShapeNode.Create;
Text851 := TTextNode.Create;
Text851.SetText(['75']);
FontStyle852 := TFontStyleNode.Create;
FontStyle852.Size := 0.035;
{ METHOD .FontStyle }
Text851.FontStyle := FontStyle852;
{ METHOD .Geometry }
Shape850.Geometry := Text851;
{ METHOD .FdChildren.Add }
Billboard849.FdChildren.Add(Shape850);
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(Billboard849);
{ METHOD .FdChildren.Add }
HAnimSegment838.FdChildren.Add(HAnimSite846);
{ METHOD .FdChildren.Add }
HAnimJoint837.FdChildren.Add(HAnimSegment838);
HAnimJoint853 := THAnimJointNode.Create;
HAnimJoint853.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment854 := THAnimSegmentNode.Create;
Transform855 := TTransformNode.Create;
Transform855.Translation := Vector3(0.1983,0.7815,-0.028);
Transform856 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform856.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform855.FdChildren.Add(Transform856);
{ METHOD .FdChildren.Add }
HAnimSegment854.FdChildren.Add(Transform855);
Shape858 := TShapeNode.Create;
LineSet859 := TLineSetNode.Create;
LineSet859.SetVertexCount([2]);
Coordinate860 := TCoordinateNode.Create;
Coordinate860.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
LineSet859.Coord := Coordinate860;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet859.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape858.Geometry := LineSet859;
{ METHOD .FdChildren.Add }
HAnimSegment854.FdChildren.Add(Shape858);
{ METHOD .FdChildren.Add }
HAnimJoint853.FdChildren.Add(HAnimSegment854);
HAnimJoint862 := THAnimJointNode.Create;
HAnimJoint862.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment863 := THAnimSegmentNode.Create;
Transform864 := TTransformNode.Create;
Transform864.Translation := Vector3(0.2017,0.7363,-0.0248);
end;

procedure InitHumanoid2Part51;
begin

Transform865 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform865.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform864.FdChildren.Add(Transform865);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(Transform864);
Shape867 := TShapeNode.Create;
LineSet868 := TLineSetNode.Create;
LineSet868.SetVertexCount([2]);
Coordinate869 := TCoordinateNode.Create;
Coordinate869.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
LineSet868.Coord := Coordinate869;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet868.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape867.Geometry := LineSet868;
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(Shape867);
{ METHOD .FdChildren.Add }
HAnimJoint862.FdChildren.Add(HAnimSegment863);
HAnimJoint871 := THAnimJointNode.Create;
HAnimJoint871.Center := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
HAnimJoint862.FdChildren.Add(HAnimJoint871);
{ METHOD .FdChildren.Add }
HAnimJoint853.FdChildren.Add(HAnimJoint862);
{ METHOD .FdChildren.Add }
HAnimJoint837.FdChildren.Add(HAnimJoint853);
{ METHOD .FdChildren.Add }
HAnimJoint786.FdChildren.Add(HAnimJoint837);
HAnimJoint872 := THAnimJointNode.Create;
HAnimJoint872.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment873 := THAnimSegmentNode.Create;
Transform874 := TTransformNode.Create;
Transform874.Translation := Vector3(0.1987,0.8029,-0.053);
Transform875 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform875.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform874.FdChildren.Add(Transform875);
{ METHOD .FdChildren.Add }
HAnimSegment873.FdChildren.Add(Transform874);
Shape877 := TShapeNode.Create;
LineSet878 := TLineSetNode.Create;
LineSet878.SetVertexCount([2]);
Coordinate879 := TCoordinateNode.Create;
Coordinate879.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
LineSet878.Coord := Coordinate879;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
LineSet878.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape877.Geometry := LineSet878;
{ METHOD .FdChildren.Add }
HAnimSegment873.FdChildren.Add(Shape877);
HAnimSite881 := THAnimSiteNode.Create;
TouchSensor882 := TTouchSensorNode.Create;
end;

procedure InitHumanoid2Part52;
begin

TouchSensor882.Description := 'HAnimSite 76 l_metacarpal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSite881.FdChildren.Add(TouchSensor882);
{ METHOD .FdChildren.Add }
HAnimSite881.FdChildren.Add(Shape30);
Billboard884 := TBillboardNode.Create;
Shape885 := TShapeNode.Create;
Text886 := TTextNode.Create;
Text886.SetText(['76']);
FontStyle887 := TFontStyleNode.Create;
FontStyle887.Size := 0.035;
{ METHOD .FontStyle }
Text886.FontStyle := FontStyle887;
{ METHOD .Geometry }
Shape885.Geometry := Text886;
{ METHOD .FdChildren.Add }
Billboard884.FdChildren.Add(Shape885);
{ METHOD .FdChildren.Add }
HAnimSite881.FdChildren.Add(Billboard884);
{ METHOD .FdChildren.Add }
HAnimSegment873.FdChildren.Add(HAnimSite881);
{ METHOD .FdChildren.Add }
HAnimJoint872.FdChildren.Add(HAnimSegment873);
HAnimJoint888 := THAnimJointNode.Create;
HAnimJoint888.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment889 := THAnimSegmentNode.Create;
Transform890 := TTransformNode.Create;
Transform890.Translation := Vector3(0.1987,0.7818,-0.053);
Transform891 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform891.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform890.FdChildren.Add(Transform891);
{ METHOD .FdChildren.Add }
HAnimSegment889.FdChildren.Add(Transform890);
Shape893 := TShapeNode.Create;
LineSet894 := TLineSetNode.Create;
LineSet894.SetVertexCount([2]);
Coordinate895 := TCoordinateNode.Create;
Coordinate895.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
LineSet894.Coord := Coordinate895;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
LineSet894.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape893.Geometry := LineSet894;
{ METHOD .FdChildren.Add }
HAnimSegment889.FdChildren.Add(Shape893);
{ METHOD .FdChildren.Add }
HAnimJoint888.FdChildren.Add(HAnimSegment889);
HAnimJoint897 := THAnimJointNode.Create;
HAnimJoint897.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment898 := THAnimSegmentNode.Create;
Transform899 := TTransformNode.Create;
Transform899.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform900 := TTransformNode.Create;
end;

procedure InitHumanoid2Part53;
begin

{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform900.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform899.FdChildren.Add(Transform900);
{ METHOD .FdChildren.Add }
HAnimSegment898.FdChildren.Add(Transform899);
Shape902 := TShapeNode.Create;
LineSet903 := TLineSetNode.Create;
LineSet903.SetVertexCount([2]);
Coordinate904 := TCoordinateNode.Create;
Coordinate904.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ METHOD .Coord }
LineSet903.Coord := Coordinate904;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
LineSet903.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape902.Geometry := LineSet903;
{ METHOD .FdChildren.Add }
HAnimSegment898.FdChildren.Add(Shape902);
{ METHOD .FdChildren.Add }
HAnimJoint897.FdChildren.Add(HAnimSegment898);
HAnimJoint906 := THAnimJointNode.Create;
HAnimJoint906.Center := Vector3(0.2026,0.7011,-0.0494);
{ METHOD .FdChildren.Add }
HAnimJoint897.FdChildren.Add(HAnimJoint906);
{ METHOD .FdChildren.Add }
HAnimJoint888.FdChildren.Add(HAnimJoint897);
{ METHOD .FdChildren.Add }
HAnimJoint872.FdChildren.Add(HAnimJoint888);
{ METHOD .FdChildren.Add }
HAnimJoint786.FdChildren.Add(HAnimJoint872);
HAnimJoint907 := THAnimJointNode.Create;
HAnimJoint907.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment908 := THAnimSegmentNode.Create;
Transform909 := TTransformNode.Create;
Transform909.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform910 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform910.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform909.FdChildren.Add(Transform910);
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(Transform909);
Shape912 := TShapeNode.Create;
LineSet913 := TLineSetNode.Create;
LineSet913.SetVertexCount([2]);
Coordinate914 := TCoordinateNode.Create;
Coordinate914.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
LineSet913.Coord := Coordinate914;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
LineSet913.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape912.Geometry := LineSet913;
{ METHOD .FdChildren.Add }
HAnimSegment908.FdChildren.Add(Shape912);
{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimSegment908);
HAnimJoint916 := THAnimJointNode.Create;
HAnimJoint916.Center := Vector3(0.1956,0.7815,-0.0794);
end;

procedure InitHumanoid2Part54;
begin

HAnimSegment917 := THAnimSegmentNode.Create;
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform919 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform919.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform918.FdChildren.Add(Transform919);
{ METHOD .FdChildren.Add }
HAnimSegment917.FdChildren.Add(Transform918);
Shape921 := TShapeNode.Create;
LineSet922 := TLineSetNode.Create;
LineSet922.SetVertexCount([2]);
Coordinate923 := TCoordinateNode.Create;
Coordinate923.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
LineSet922.Coord := Coordinate923;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
LineSet922.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape921.Geometry := LineSet922;
{ METHOD .FdChildren.Add }
HAnimSegment917.FdChildren.Add(Shape921);
{ METHOD .FdChildren.Add }
HAnimJoint916.FdChildren.Add(HAnimSegment917);
HAnimJoint925 := THAnimJointNode.Create;
HAnimJoint925.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment926 := THAnimSegmentNode.Create;
Transform927 := TTransformNode.Create;
Transform927.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform928 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform928.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform927.FdChildren.Add(Transform928);
{ METHOD .FdChildren.Add }
HAnimSegment926.FdChildren.Add(Transform927);
Shape930 := TShapeNode.Create;
LineSet931 := TLineSetNode.Create;
LineSet931.SetVertexCount([2]);
Coordinate932 := TCoordinateNode.Create;
Coordinate932.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
LineSet931.Coord := Coordinate932;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
LineSet931.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape930.Geometry := LineSet931;
{ METHOD .FdChildren.Add }
HAnimSegment926.FdChildren.Add(Shape930);
{ METHOD .FdChildren.Add }
HAnimJoint925.FdChildren.Add(HAnimSegment926);
HAnimJoint934 := THAnimJointNode.Create;
HAnimJoint934.Center := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
HAnimJoint925.FdChildren.Add(HAnimJoint934);
{ METHOD .FdChildren.Add }
HAnimJoint916.FdChildren.Add(HAnimJoint925);
end;

procedure InitHumanoid2Part55;
begin

{ METHOD .FdChildren.Add }
HAnimJoint907.FdChildren.Add(HAnimJoint916);
{ METHOD .FdChildren.Add }
HAnimJoint786.FdChildren.Add(HAnimJoint907);
HAnimJoint935 := THAnimJointNode.Create;
HAnimJoint935.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment936 := THAnimSegmentNode.Create;
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform938 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform938.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform937.FdChildren.Add(Transform938);
{ METHOD .FdChildren.Add }
HAnimSegment936.FdChildren.Add(Transform937);
Shape940 := TShapeNode.Create;
LineSet941 := TLineSetNode.Create;
LineSet941.SetVertexCount([2]);
Coordinate942 := TCoordinateNode.Create;
Coordinate942.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
LineSet941.Coord := Coordinate942;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
LineSet941.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape940.Geometry := LineSet941;
{ METHOD .FdChildren.Add }
HAnimSegment936.FdChildren.Add(Shape940);
HAnimSite944 := THAnimSiteNode.Create;
HAnimSite944.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor945 := TTouchSensorNode.Create;
TouchSensor945.Description := 'HAnimSite 77 l_metacarpal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite944.FdChildren.Add(TouchSensor945);
{ METHOD .FdChildren.Add }
HAnimSite944.FdChildren.Add(Shape30);
Billboard947 := TBillboardNode.Create;
Shape948 := TShapeNode.Create;
Text949 := TTextNode.Create;
Text949.SetText(['77']);
FontStyle950 := TFontStyleNode.Create;
FontStyle950.Size := 0.035;
{ METHOD .FontStyle }
Text949.FontStyle := FontStyle950;
{ METHOD .Geometry }
Shape948.Geometry := Text949;
{ METHOD .FdChildren.Add }
Billboard947.FdChildren.Add(Shape948);
{ METHOD .FdChildren.Add }
HAnimSite944.FdChildren.Add(Billboard947);
{ METHOD .FdChildren.Add }
HAnimSegment936.FdChildren.Add(HAnimSite944);
{ METHOD .FdChildren.Add }
HAnimJoint935.FdChildren.Add(HAnimSegment936);
HAnimJoint951 := THAnimJointNode.Create;
HAnimJoint951.Center := Vector3(0.1925,0.7866,-0.1036);
end;

procedure InitHumanoid2Part56;
begin

HAnimSegment952 := THAnimSegmentNode.Create;
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform954 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform954.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform953.FdChildren.Add(Transform954);
{ METHOD .FdChildren.Add }
HAnimSegment952.FdChildren.Add(Transform953);
Shape956 := TShapeNode.Create;
LineSet957 := TLineSetNode.Create;
LineSet957.SetVertexCount([2]);
Coordinate958 := TCoordinateNode.Create;
Coordinate958.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
LineSet957.Coord := Coordinate958;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
LineSet957.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape956.Geometry := LineSet957;
{ METHOD .FdChildren.Add }
HAnimSegment952.FdChildren.Add(Shape956);
{ METHOD .FdChildren.Add }
HAnimJoint951.FdChildren.Add(HAnimSegment952);
HAnimJoint960 := THAnimJointNode.Create;
HAnimJoint960.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment961 := THAnimSegmentNode.Create;
Transform962 := TTransformNode.Create;
Transform962.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform963 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform963.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform962.FdChildren.Add(Transform963);
{ METHOD .FdChildren.Add }
HAnimSegment961.FdChildren.Add(Transform962);
Shape965 := TShapeNode.Create;
LineSet966 := TLineSetNode.Create;
LineSet966.SetVertexCount([2]);
Coordinate967 := TCoordinateNode.Create;
Coordinate967.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
LineSet966.Coord := Coordinate967;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
LineSet966.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape965.Geometry := LineSet966;
{ METHOD .FdChildren.Add }
HAnimSegment961.FdChildren.Add(Shape965);
{ METHOD .FdChildren.Add }
HAnimJoint960.FdChildren.Add(HAnimSegment961);
HAnimJoint969 := THAnimJointNode.Create;
HAnimJoint969.Center := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
HAnimJoint960.FdChildren.Add(HAnimJoint969);
{ METHOD .FdChildren.Add }
HAnimJoint951.FdChildren.Add(HAnimJoint960);
end;

procedure InitHumanoid2Part57;
begin

{ METHOD .FdChildren.Add }
HAnimJoint935.FdChildren.Add(HAnimJoint951);
{ METHOD .FdChildren.Add }
HAnimJoint786.FdChildren.Add(HAnimJoint935);
{ METHOD .FdChildren.Add }
HAnimJoint749.FdChildren.Add(HAnimJoint786);
{ METHOD .FdChildren.Add }
HAnimJoint726.FdChildren.Add(HAnimJoint749);
{ METHOD .FdChildren.Add }
HAnimJoint717.FdChildren.Add(HAnimJoint726);
{ METHOD .FdChildren.Add }
HAnimJoint673.FdChildren.Add(HAnimJoint717);
{ METHOD .FdChildren.Add }
HAnimJoint602.FdChildren.Add(HAnimJoint673);
HAnimJoint970 := THAnimJointNode.Create;
HAnimJoint970.Center := Vector3(-0.0694,1.46,-0.033);
HAnimSegment971 := THAnimSegmentNode.Create;
Transform972 := TTransformNode.Create;
Transform972.Translation := Vector3(-0.0694,1.46,-0.033);
Transform973 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform973.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform972.FdChildren.Add(Transform973);
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(Transform972);
Shape975 := TShapeNode.Create;
LineSet976 := TLineSetNode.Create;
LineSet976.SetVertexCount([2]);
Coordinate977 := TCoordinateNode.Create;
Coordinate977.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ METHOD .Coord }
LineSet976.Coord := Coordinate977;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
{ METHOD .Color }
LineSet976.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape975.Geometry := LineSet976;
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(Shape975);
HAnimSite979 := THAnimSiteNode.Create;
HAnimSite979.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor980 := TTouchSensorNode.Create;
TouchSensor980.Description := 'HAnimSite 20 r_acromion';
{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(TouchSensor980);
{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(Shape30);
Billboard982 := TBillboardNode.Create;
Shape983 := TShapeNode.Create;
Text984 := TTextNode.Create;
Text984.SetText(['20']);
FontStyle985 := TFontStyleNode.Create;
FontStyle985.Size := 0.035;
{ METHOD .FontStyle }
Text984.FontStyle := FontStyle985;
{ METHOD .Geometry }
Shape983.Geometry := Text984;
{ METHOD .FdChildren.Add }
Billboard982.FdChildren.Add(Shape983);
end;

procedure InitHumanoid2Part58;
begin

{ METHOD .FdChildren.Add }
HAnimSite979.FdChildren.Add(Billboard982);
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(HAnimSite979);
HAnimSite986 := THAnimSiteNode.Create;
HAnimSite986.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor987 := TTouchSensorNode.Create;
TouchSensor987.Description := 'HAnimSite 22 r_axilla_distal';
{ METHOD .FdChildren.Add }
HAnimSite986.FdChildren.Add(TouchSensor987);
{ METHOD .FdChildren.Add }
HAnimSite986.FdChildren.Add(Shape30);
Billboard989 := TBillboardNode.Create;
Shape990 := TShapeNode.Create;
Text991 := TTextNode.Create;
Text991.SetText(['22']);
FontStyle992 := TFontStyleNode.Create;
FontStyle992.Size := 0.035;
{ METHOD .FontStyle }
Text991.FontStyle := FontStyle992;
{ METHOD .Geometry }
Shape990.Geometry := Text991;
{ METHOD .FdChildren.Add }
Billboard989.FdChildren.Add(Shape990);
{ METHOD .FdChildren.Add }
HAnimSite986.FdChildren.Add(Billboard989);
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(HAnimSite986);
HAnimSite993 := THAnimSiteNode.Create;
TouchSensor994 := TTouchSensorNode.Create;
TouchSensor994.Description := 'HAnimSite 23 r_axilla_posterior_folds';
{ METHOD .FdChildren.Add }
HAnimSite993.FdChildren.Add(TouchSensor994);
{ METHOD .FdChildren.Add }
HAnimSite993.FdChildren.Add(Shape30);
Billboard996 := TBillboardNode.Create;
Shape997 := TShapeNode.Create;
Text998 := TTextNode.Create;
Text998.SetText(['23']);
FontStyle999 := TFontStyleNode.Create;
FontStyle999.Size := 0.035;
{ METHOD .FontStyle }
Text998.FontStyle := FontStyle999;
{ METHOD .Geometry }
Shape997.Geometry := Text998;
{ METHOD .FdChildren.Add }
Billboard996.FdChildren.Add(Shape997);
{ METHOD .FdChildren.Add }
HAnimSite993.FdChildren.Add(Billboard996);
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(HAnimSite993);
HAnimSite1000 := THAnimSiteNode.Create;
HAnimSite1000.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1001 := TTouchSensorNode.Create;
TouchSensor1001.Description := 'HAnimSite 21 r_axilla_proximal';
{ METHOD .FdChildren.Add }
HAnimSite1000.FdChildren.Add(TouchSensor1001);
end;

procedure InitHumanoid2Part59;
begin

{ METHOD .FdChildren.Add }
HAnimSite1000.FdChildren.Add(Shape30);
Billboard1003 := TBillboardNode.Create;
Shape1004 := TShapeNode.Create;
Text1005 := TTextNode.Create;
Text1005.SetText(['21']);
FontStyle1006 := TFontStyleNode.Create;
FontStyle1006.Size := 0.035;
{ METHOD .FontStyle }
Text1005.FontStyle := FontStyle1006;
{ METHOD .Geometry }
Shape1004.Geometry := Text1005;
{ METHOD .FdChildren.Add }
Billboard1003.FdChildren.Add(Shape1004);
{ METHOD .FdChildren.Add }
HAnimSite1000.FdChildren.Add(Billboard1003);
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(HAnimSite1000);
HAnimSite1007 := THAnimSiteNode.Create;
HAnimSite1007.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1008 := TTouchSensorNode.Create;
TouchSensor1008.Description := 'HAnimSite 19 r_clavicale';
{ METHOD .FdChildren.Add }
HAnimSite1007.FdChildren.Add(TouchSensor1008);
{ METHOD .FdChildren.Add }
HAnimSite1007.FdChildren.Add(Shape30);
Billboard1010 := TBillboardNode.Create;
Shape1011 := TShapeNode.Create;
Text1012 := TTextNode.Create;
Text1012.SetText(['19']);
FontStyle1013 := TFontStyleNode.Create;
FontStyle1013.Size := 0.035;
{ METHOD .FontStyle }
Text1012.FontStyle := FontStyle1013;
{ METHOD .Geometry }
Shape1011.Geometry := Text1012;
{ METHOD .FdChildren.Add }
Billboard1010.FdChildren.Add(Shape1011);
{ METHOD .FdChildren.Add }
HAnimSite1007.FdChildren.Add(Billboard1010);
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(HAnimSite1007);
{ METHOD .FdChildren.Add }
HAnimJoint970.FdChildren.Add(HAnimSegment971);
HAnimJoint1014 := THAnimJointNode.Create;
HAnimJoint1014.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimSegment1015 := THAnimSegmentNode.Create;
Transform1016 := TTransformNode.Create;
Transform1016.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1017 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1017.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1016.FdChildren.Add(Transform1017);
{ METHOD .FdChildren.Add }
HAnimSegment1015.FdChildren.Add(Transform1016);
Shape1019 := TShapeNode.Create;
end;

procedure InitHumanoid2Part60;
begin

LineSet1020 := TLineSetNode.Create;
LineSet1020.SetVertexCount([2]);
Coordinate1021 := TCoordinateNode.Create;
Coordinate1021.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ METHOD .Coord }
LineSet1020.Coord := Coordinate1021;
{ from r_acromioclavicular to r_shoulder vertices 2 }
{ METHOD .Color }
LineSet1020.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1019.Geometry := LineSet1020;
{ METHOD .FdChildren.Add }
HAnimSegment1015.FdChildren.Add(Shape1019);
{ METHOD .FdChildren.Add }
HAnimJoint1014.FdChildren.Add(HAnimSegment1015);
HAnimJoint1023 := THAnimJointNode.Create;
HAnimJoint1023.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment1024 := THAnimSegmentNode.Create;
Transform1025 := TTransformNode.Create;
Transform1025.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1026 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1026.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1025.FdChildren.Add(Transform1026);
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(Transform1025);
Shape1028 := TShapeNode.Create;
LineSet1029 := TLineSetNode.Create;
LineSet1029.SetVertexCount([2]);
Coordinate1030 := TCoordinateNode.Create;
Coordinate1030.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ METHOD .Coord }
LineSet1029.Coord := Coordinate1030;
{ from r_shoulder to r_elbow vertices 2 }
{ METHOD .Color }
LineSet1029.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1028.Geometry := LineSet1029;
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(Shape1028);
HAnimSite1032 := THAnimSiteNode.Create;
TouchSensor1033 := TTouchSensorNode.Create;
TouchSensor1033.Description := 'HAnimSite 97 r_bideltoid';
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(TouchSensor1033);
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Shape30);
Billboard1035 := TBillboardNode.Create;
Shape1036 := TShapeNode.Create;
Text1037 := TTextNode.Create;
Text1037.SetText(['97']);
FontStyle1038 := TFontStyleNode.Create;
FontStyle1038.Size := 0.035;
{ METHOD .FontStyle }
Text1037.FontStyle := FontStyle1038;
{ METHOD .Geometry }
Shape1036.Geometry := Text1037;
end;

procedure InitHumanoid2Part61;
begin

{ METHOD .FdChildren.Add }
Billboard1035.FdChildren.Add(Shape1036);
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Billboard1035);
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(HAnimSite1032);
HAnimSite1039 := THAnimSiteNode.Create;
HAnimSite1039.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1040 := TTouchSensorNode.Create;
TouchSensor1040.Description := 'HAnimSite 66 r_humeral_lateral_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(TouchSensor1040);
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(Shape30);
Billboard1042 := TBillboardNode.Create;
Shape1043 := TShapeNode.Create;
Text1044 := TTextNode.Create;
Text1044.SetText(['66']);
FontStyle1045 := TFontStyleNode.Create;
FontStyle1045.Size := 0.035;
{ METHOD .FontStyle }
Text1044.FontStyle := FontStyle1045;
{ METHOD .Geometry }
Shape1043.Geometry := Text1044;
{ METHOD .FdChildren.Add }
Billboard1042.FdChildren.Add(Shape1043);
{ METHOD .FdChildren.Add }
HAnimSite1039.FdChildren.Add(Billboard1042);
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(HAnimSite1039);
{ METHOD .FdChildren.Add }
HAnimJoint1023.FdChildren.Add(HAnimSegment1024);
HAnimJoint1046 := THAnimJointNode.Create;
HAnimJoint1046.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment1047 := THAnimSegmentNode.Create;
Transform1048 := TTransformNode.Create;
Transform1048.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1049 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1049.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1048.FdChildren.Add(Transform1049);
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Transform1048);
Shape1051 := TShapeNode.Create;
LineSet1052 := TLineSetNode.Create;
LineSet1052.SetVertexCount([2]);
Coordinate1053 := TCoordinateNode.Create;
Coordinate1053.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ METHOD .Coord }
LineSet1052.Coord := Coordinate1053;
{ from r_elbow to r_radiocarpal vertices 2 }
{ METHOD .Color }
LineSet1052.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1051.Geometry := LineSet1052;
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(Shape1051);
HAnimSite1055 := THAnimSiteNode.Create;
end;

procedure InitHumanoid2Part62;
begin

HAnimSite1055.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1056 := TTouchSensorNode.Create;
TouchSensor1056.Description := 'HAnimSite 67 r_humeral_medial_epicondyles';
{ METHOD .FdChildren.Add }
HAnimSite1055.FdChildren.Add(TouchSensor1056);
{ METHOD .FdChildren.Add }
HAnimSite1055.FdChildren.Add(Shape30);
Billboard1058 := TBillboardNode.Create;
Shape1059 := TShapeNode.Create;
Text1060 := TTextNode.Create;
Text1060.SetText(['67']);
FontStyle1061 := TFontStyleNode.Create;
FontStyle1061.Size := 0.035;
{ METHOD .FontStyle }
Text1060.FontStyle := FontStyle1061;
{ METHOD .Geometry }
Shape1059.Geometry := Text1060;
{ METHOD .FdChildren.Add }
Billboard1058.FdChildren.Add(Shape1059);
{ METHOD .FdChildren.Add }
HAnimSite1055.FdChildren.Add(Billboard1058);
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(HAnimSite1055);
HAnimSite1062 := THAnimSiteNode.Create;
HAnimSite1062.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1063 := TTouchSensorNode.Create;
TouchSensor1063.Description := 'HAnimSite 68 r_olecranon';
{ METHOD .FdChildren.Add }
HAnimSite1062.FdChildren.Add(TouchSensor1063);
{ METHOD .FdChildren.Add }
HAnimSite1062.FdChildren.Add(Shape30);
Billboard1065 := TBillboardNode.Create;
Shape1066 := TShapeNode.Create;
Text1067 := TTextNode.Create;
Text1067.SetText(['68']);
FontStyle1068 := TFontStyleNode.Create;
FontStyle1068.Size := 0.035;
{ METHOD .FontStyle }
Text1067.FontStyle := FontStyle1068;
{ METHOD .Geometry }
Shape1066.Geometry := Text1067;
{ METHOD .FdChildren.Add }
Billboard1065.FdChildren.Add(Shape1066);
{ METHOD .FdChildren.Add }
HAnimSite1062.FdChildren.Add(Billboard1065);
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(HAnimSite1062);
HAnimSite1069 := THAnimSiteNode.Create;
HAnimSite1069.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1070 := TTouchSensorNode.Create;
TouchSensor1070.Description := 'HAnimSite 74 r_radial_styloid';
{ METHOD .FdChildren.Add }
HAnimSite1069.FdChildren.Add(TouchSensor1070);
{ METHOD .FdChildren.Add }
HAnimSite1069.FdChildren.Add(Shape30);
Billboard1072 := TBillboardNode.Create;
end;

procedure InitHumanoid2Part63;
begin

Shape1073 := TShapeNode.Create;
Text1074 := TTextNode.Create;
Text1074.SetText(['74']);
FontStyle1075 := TFontStyleNode.Create;
FontStyle1075.Size := 0.035;
{ METHOD .FontStyle }
Text1074.FontStyle := FontStyle1075;
{ METHOD .Geometry }
Shape1073.Geometry := Text1074;
{ METHOD .FdChildren.Add }
Billboard1072.FdChildren.Add(Shape1073);
{ METHOD .FdChildren.Add }
HAnimSite1069.FdChildren.Add(Billboard1072);
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(HAnimSite1069);
HAnimSite1076 := THAnimSiteNode.Create;
HAnimSite1076.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1077 := TTouchSensorNode.Create;
TouchSensor1077.Description := 'HAnimSite 72 r_radiale';
{ METHOD .FdChildren.Add }
HAnimSite1076.FdChildren.Add(TouchSensor1077);
{ METHOD .FdChildren.Add }
HAnimSite1076.FdChildren.Add(Shape30);
Billboard1079 := TBillboardNode.Create;
Shape1080 := TShapeNode.Create;
Text1081 := TTextNode.Create;
Text1081.SetText(['72']);
FontStyle1082 := TFontStyleNode.Create;
FontStyle1082.Size := 0.035;
{ METHOD .FontStyle }
Text1081.FontStyle := FontStyle1082;
{ METHOD .Geometry }
Shape1080.Geometry := Text1081;
{ METHOD .FdChildren.Add }
Billboard1079.FdChildren.Add(Shape1080);
{ METHOD .FdChildren.Add }
HAnimSite1076.FdChildren.Add(Billboard1079);
{ METHOD .FdChildren.Add }
HAnimSegment1047.FdChildren.Add(HAnimSite1076);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimSegment1047);
HAnimJoint1083 := THAnimJointNode.Create;
HAnimJoint1083.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment1084 := THAnimSegmentNode.Create;
Transform1085 := TTransformNode.Create;
Transform1085.Scale := Vector3(0.2,0.2,0.2);
Transform1085.Translation := Vector3(-0.2,0.85,-0.05);
Transform1085.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1086 := TTransformNode.Create;
Transform1086.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
{ METHOD .FdChildren.Add }
Transform1086.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1085.FdChildren.Add(Transform1086);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Transform1085);
end;

procedure InitHumanoid2Part64;
begin

Shape1088 := TShapeNode.Create;
LineSet1089 := TLineSetNode.Create;
LineSet1089.SetVertexCount([2]);
Coordinate1090 := TCoordinateNode.Create;
Coordinate1090.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1899,0.8502,-0.0473)]);
{ METHOD .Coord }
LineSet1089.Coord := Coordinate1090;
{ from r_radiocarpal to r_carpometacarpal_1 vertices 2 }
{ METHOD .Color }
LineSet1089.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1088.Geometry := LineSet1089;
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Shape1088);
HAnimSite1092 := THAnimSiteNode.Create;
HAnimSite1092.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1093 := TTouchSensorNode.Create;
TouchSensor1093.Description := 'HAnimSite 73 r_ulnar_styloid';
{ METHOD .FdChildren.Add }
HAnimSite1092.FdChildren.Add(TouchSensor1093);
{ METHOD .FdChildren.Add }
HAnimSite1092.FdChildren.Add(Shape30);
Billboard1095 := TBillboardNode.Create;
Shape1096 := TShapeNode.Create;
Text1097 := TTextNode.Create;
Text1097.SetText(['73']);
FontStyle1098 := TFontStyleNode.Create;
FontStyle1098.Size := 0.035;
{ METHOD .FontStyle }
Text1097.FontStyle := FontStyle1098;
{ METHOD .Geometry }
Shape1096.Geometry := Text1097;
{ METHOD .FdChildren.Add }
Billboard1095.FdChildren.Add(Shape1096);
{ METHOD .FdChildren.Add }
HAnimSite1092.FdChildren.Add(Billboard1095);
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(HAnimSite1092);
Shape1099 := TShapeNode.Create;
LineSet1100 := TLineSetNode.Create;
LineSet1100.SetVertexCount([2]);
Coordinate1101 := TCoordinateNode.Create;
Coordinate1101.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1961,0.8055,-0.0218)]);
{ METHOD .Coord }
LineSet1100.Coord := Coordinate1101;
{ from r_radiocarpal to r_carpometacarpal_2 vertices 2 }
{ METHOD .Color }
LineSet1100.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1099.Geometry := LineSet1100;
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Shape1099);
Shape1103 := TShapeNode.Create;
LineSet1104 := TLineSetNode.Create;
LineSet1104.SetVertexCount([2]);
Coordinate1105 := TCoordinateNode.Create;
Coordinate1105.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1972,0.806,-0.0468)]);
end;

procedure InitHumanoid2Part65;
begin

{ METHOD .Coord }
LineSet1104.Coord := Coordinate1105;
{ from r_radiocarpal to r_carpometacarpal_3 vertices 2 }
{ METHOD .Color }
LineSet1104.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1103.Geometry := LineSet1104;
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Shape1103);
Shape1107 := TShapeNode.Create;
LineSet1108 := TLineSetNode.Create;
LineSet1108.SetVertexCount([2]);
Coordinate1109 := TCoordinateNode.Create;
Coordinate1109.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1951,0.8049,-0.0732)]);
{ METHOD .Coord }
LineSet1108.Coord := Coordinate1109;
{ from r_radiocarpal to r_carpometacarpal_4 vertices 2 }
{ METHOD .Color }
LineSet1108.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1107.Geometry := LineSet1108;
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Shape1107);
Shape1111 := TShapeNode.Create;
LineSet1112 := TLineSetNode.Create;
LineSet1112.SetVertexCount([2]);
Coordinate1113 := TCoordinateNode.Create;
Coordinate1113.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1926,0.8096,-0.0975)]);
{ METHOD .Coord }
LineSet1112.Coord := Coordinate1113;
{ from r_radiocarpal to r_carpometacarpal_5 vertices 2 }
{ METHOD .Color }
LineSet1112.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1111.Geometry := LineSet1112;
{ METHOD .FdChildren.Add }
HAnimSegment1084.FdChildren.Add(Shape1111);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimSegment1084);
HAnimJoint1115 := THAnimJointNode.Create;
HAnimJoint1115.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimSegment1116 := THAnimSegmentNode.Create;
Transform1117 := TTransformNode.Create;
Transform1117.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1118 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1118.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1117.FdChildren.Add(Transform1118);
{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(Transform1117);
Shape1120 := TShapeNode.Create;
LineSet1121 := TLineSetNode.Create;
LineSet1121.SetVertexCount([2]);
Coordinate1122 := TCoordinateNode.Create;
Coordinate1122.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ METHOD .Coord }
LineSet1121.Coord := Coordinate1122;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
{ METHOD .Color }
LineSet1121.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1120.Geometry := LineSet1121;
end;

procedure InitHumanoid2Part66;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(Shape1120);
{ METHOD .FdChildren.Add }
HAnimJoint1115.FdChildren.Add(HAnimSegment1116);
HAnimJoint1124 := THAnimJointNode.Create;
HAnimJoint1124.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimSegment1125 := THAnimSegmentNode.Create;
Transform1126 := TTransformNode.Create;
Transform1126.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1127 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1127.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1126.FdChildren.Add(Transform1127);
{ METHOD .FdChildren.Add }
HAnimSegment1125.FdChildren.Add(Transform1126);
Shape1129 := TShapeNode.Create;
LineSet1130 := TLineSetNode.Create;
LineSet1130.SetVertexCount([2]);
Coordinate1131 := TCoordinateNode.Create;
Coordinate1131.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ METHOD .Coord }
LineSet1130.Coord := Coordinate1131;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
{ METHOD .Color }
LineSet1130.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1129.Geometry := LineSet1130;
{ METHOD .FdChildren.Add }
HAnimSegment1125.FdChildren.Add(Shape1129);
{ METHOD .FdChildren.Add }
HAnimJoint1124.FdChildren.Add(HAnimSegment1125);
HAnimJoint1133 := THAnimJointNode.Create;
HAnimJoint1133.Center := Vector3(-0.1864,0.819,0.0506);
{ METHOD .FdChildren.Add }
HAnimJoint1124.FdChildren.Add(HAnimJoint1133);
{ METHOD .FdChildren.Add }
HAnimJoint1115.FdChildren.Add(HAnimJoint1124);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimJoint1115);
HAnimJoint1134 := THAnimJointNode.Create;
HAnimJoint1134.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimSegment1135 := THAnimSegmentNode.Create;
Transform1136 := TTransformNode.Create;
Transform1136.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1137 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1137.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1136.FdChildren.Add(Transform1137);
{ METHOD .FdChildren.Add }
HAnimSegment1135.FdChildren.Add(Transform1136);
Shape1139 := TShapeNode.Create;
LineSet1140 := TLineSetNode.Create;
LineSet1140.SetVertexCount([2]);
Coordinate1141 := TCoordinateNode.Create;
Coordinate1141.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
end;

procedure InitHumanoid2Part67;
begin

{ METHOD .Coord }
LineSet1140.Coord := Coordinate1141;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet1140.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1139.Geometry := LineSet1140;
{ METHOD .FdChildren.Add }
HAnimSegment1135.FdChildren.Add(Shape1139);
HAnimSite1143 := THAnimSiteNode.Create;
HAnimSite1143.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1144 := TTouchSensorNode.Create;
TouchSensor1144.Description := 'HAnimSite 78 r_metacarpal_phalanx_2';
{ METHOD .FdChildren.Add }
HAnimSite1143.FdChildren.Add(TouchSensor1144);
{ METHOD .FdChildren.Add }
HAnimSite1143.FdChildren.Add(Shape30);
Billboard1146 := TBillboardNode.Create;
Shape1147 := TShapeNode.Create;
Text1148 := TTextNode.Create;
Text1148.SetText(['78']);
FontStyle1149 := TFontStyleNode.Create;
FontStyle1149.Size := 0.035;
{ METHOD .FontStyle }
Text1148.FontStyle := FontStyle1149;
{ METHOD .Geometry }
Shape1147.Geometry := Text1148;
{ METHOD .FdChildren.Add }
Billboard1146.FdChildren.Add(Shape1147);
{ METHOD .FdChildren.Add }
HAnimSite1143.FdChildren.Add(Billboard1146);
{ METHOD .FdChildren.Add }
HAnimSegment1135.FdChildren.Add(HAnimSite1143);
{ METHOD .FdChildren.Add }
HAnimJoint1134.FdChildren.Add(HAnimSegment1135);
HAnimJoint1150 := THAnimJointNode.Create;
HAnimJoint1150.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimSegment1151 := THAnimSegmentNode.Create;
Transform1152 := TTransformNode.Create;
Transform1152.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1153 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1153.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1152.FdChildren.Add(Transform1153);
{ METHOD .FdChildren.Add }
HAnimSegment1151.FdChildren.Add(Transform1152);
Shape1155 := TShapeNode.Create;
LineSet1156 := TLineSetNode.Create;
LineSet1156.SetVertexCount([2]);
Coordinate1157 := TCoordinateNode.Create;
Coordinate1157.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ METHOD .Coord }
LineSet1156.Coord := Coordinate1157;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet1156.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1155.Geometry := LineSet1156;
{ METHOD .FdChildren.Add }
HAnimSegment1151.FdChildren.Add(Shape1155);
end;

procedure InitHumanoid2Part68;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1150.FdChildren.Add(HAnimSegment1151);
HAnimJoint1159 := THAnimJointNode.Create;
HAnimJoint1159.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimSegment1160 := THAnimSegmentNode.Create;
Transform1161 := TTransformNode.Create;
Transform1161.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1162 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1162.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1161.FdChildren.Add(Transform1162);
{ METHOD .FdChildren.Add }
HAnimSegment1160.FdChildren.Add(Transform1161);
Shape1164 := TShapeNode.Create;
LineSet1165 := TLineSetNode.Create;
LineSet1165.SetVertexCount([2]);
Coordinate1166 := TCoordinateNode.Create;
Coordinate1166.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ METHOD .Coord }
LineSet1165.Coord := Coordinate1166;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
{ METHOD .Color }
LineSet1165.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1164.Geometry := LineSet1165;
{ METHOD .FdChildren.Add }
HAnimSegment1160.FdChildren.Add(Shape1164);
{ METHOD .FdChildren.Add }
HAnimJoint1159.FdChildren.Add(HAnimSegment1160);
HAnimJoint1168 := THAnimJointNode.Create;
HAnimJoint1168.Center := Vector3(-0.1945,0.7169,-0.0173);
{ METHOD .FdChildren.Add }
HAnimJoint1159.FdChildren.Add(HAnimJoint1168);
{ METHOD .FdChildren.Add }
HAnimJoint1150.FdChildren.Add(HAnimJoint1159);
{ METHOD .FdChildren.Add }
HAnimJoint1134.FdChildren.Add(HAnimJoint1150);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimJoint1134);
HAnimJoint1169 := THAnimJointNode.Create;
HAnimJoint1169.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimSegment1170 := THAnimSegmentNode.Create;
Transform1171 := TTransformNode.Create;
Transform1171.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1172 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1172.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1171.FdChildren.Add(Transform1172);
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(Transform1171);
Shape1174 := TShapeNode.Create;
LineSet1175 := TLineSetNode.Create;
LineSet1175.SetVertexCount([2]);
Coordinate1176 := TCoordinateNode.Create;
Coordinate1176.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
end;

procedure InitHumanoid2Part69;
begin

{ METHOD .Coord }
LineSet1175.Coord := Coordinate1176;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
{ METHOD .Color }
LineSet1175.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1174.Geometry := LineSet1175;
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(Shape1174);
HAnimSite1178 := THAnimSiteNode.Create;
TouchSensor1179 := TTouchSensorNode.Create;
TouchSensor1179.Description := 'HAnimSite 79 r_metacarpal_phalanx_3';
{ METHOD .FdChildren.Add }
HAnimSite1178.FdChildren.Add(TouchSensor1179);
{ METHOD .FdChildren.Add }
HAnimSite1178.FdChildren.Add(Shape30);
Billboard1181 := TBillboardNode.Create;
Shape1182 := TShapeNode.Create;
Text1183 := TTextNode.Create;
Text1183.SetText(['79']);
FontStyle1184 := TFontStyleNode.Create;
FontStyle1184.Size := 0.035;
{ METHOD .FontStyle }
Text1183.FontStyle := FontStyle1184;
{ METHOD .Geometry }
Shape1182.Geometry := Text1183;
{ METHOD .FdChildren.Add }
Billboard1181.FdChildren.Add(Shape1182);
{ METHOD .FdChildren.Add }
HAnimSite1178.FdChildren.Add(Billboard1181);
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(HAnimSite1178);
{ METHOD .FdChildren.Add }
HAnimJoint1169.FdChildren.Add(HAnimSegment1170);
HAnimJoint1185 := THAnimJointNode.Create;
HAnimJoint1185.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimSegment1186 := THAnimSegmentNode.Create;
Transform1187 := TTransformNode.Create;
Transform1187.Translation := Vector3(-0.1972,0.7849,-0.0468);
Transform1188 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1188.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1187.FdChildren.Add(Transform1188);
{ METHOD .FdChildren.Add }
HAnimSegment1186.FdChildren.Add(Transform1187);
Shape1190 := TShapeNode.Create;
LineSet1191 := TLineSetNode.Create;
LineSet1191.SetVertexCount([2]);
Coordinate1192 := TCoordinateNode.Create;
Coordinate1192.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ METHOD .Coord }
LineSet1191.Coord := Coordinate1192;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
LineSet1191.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1190.Geometry := LineSet1191;
{ METHOD .FdChildren.Add }
HAnimSegment1186.FdChildren.Add(Shape1190);
{ METHOD .FdChildren.Add }
HAnimJoint1185.FdChildren.Add(HAnimSegment1186);
end;

procedure InitHumanoid2Part70;
begin

HAnimJoint1194 := THAnimJointNode.Create;
HAnimJoint1194.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimSegment1195 := THAnimSegmentNode.Create;
Transform1196 := TTransformNode.Create;
Transform1196.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1197 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1197.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1196.FdChildren.Add(Transform1197);
{ METHOD .FdChildren.Add }
HAnimSegment1195.FdChildren.Add(Transform1196);
Shape1199 := TShapeNode.Create;
LineSet1200 := TLineSetNode.Create;
LineSet1200.SetVertexCount([2]);
Coordinate1201 := TCoordinateNode.Create;
Coordinate1201.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ METHOD .Coord }
LineSet1200.Coord := Coordinate1201;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
{ METHOD .Color }
LineSet1200.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1199.Geometry := LineSet1200;
{ METHOD .FdChildren.Add }
HAnimSegment1195.FdChildren.Add(Shape1199);
{ METHOD .FdChildren.Add }
HAnimJoint1194.FdChildren.Add(HAnimSegment1195);
HAnimJoint1203 := THAnimJointNode.Create;
HAnimJoint1203.Center := Vector3(-0.1939,0.7042,-0.0432);
{ METHOD .FdChildren.Add }
HAnimJoint1194.FdChildren.Add(HAnimJoint1203);
{ METHOD .FdChildren.Add }
HAnimJoint1185.FdChildren.Add(HAnimJoint1194);
{ METHOD .FdChildren.Add }
HAnimJoint1169.FdChildren.Add(HAnimJoint1185);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimJoint1169);
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimSegment1205 := THAnimSegmentNode.Create;
Transform1206 := TTransformNode.Create;
Transform1206.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1207 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1207.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1206.FdChildren.Add(Transform1207);
{ METHOD .FdChildren.Add }
HAnimSegment1205.FdChildren.Add(Transform1206);
Shape1209 := TShapeNode.Create;
LineSet1210 := TLineSetNode.Create;
LineSet1210.SetVertexCount([2]);
Coordinate1211 := TCoordinateNode.Create;
Coordinate1211.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ METHOD .Coord }
LineSet1210.Coord := Coordinate1211;
end;

procedure InitHumanoid2Part71;
begin

{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
{ METHOD .Color }
LineSet1210.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1209.Geometry := LineSet1210;
{ METHOD .FdChildren.Add }
HAnimSegment1205.FdChildren.Add(Shape1209);
{ METHOD .FdChildren.Add }
HAnimJoint1204.FdChildren.Add(HAnimSegment1205);
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimSegment1214 := THAnimSegmentNode.Create;
Transform1215 := TTransformNode.Create;
Transform1215.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1216 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1216.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1215.FdChildren.Add(Transform1216);
{ METHOD .FdChildren.Add }
HAnimSegment1214.FdChildren.Add(Transform1215);
Shape1218 := TShapeNode.Create;
LineSet1219 := TLineSetNode.Create;
LineSet1219.SetVertexCount([2]);
Coordinate1220 := TCoordinateNode.Create;
Coordinate1220.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ METHOD .Coord }
LineSet1219.Coord := Coordinate1220;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
LineSet1219.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1218.Geometry := LineSet1219;
{ METHOD .FdChildren.Add }
HAnimSegment1214.FdChildren.Add(Shape1218);
{ METHOD .FdChildren.Add }
HAnimJoint1213.FdChildren.Add(HAnimSegment1214);
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimSegment1223 := THAnimSegmentNode.Create;
Transform1224 := TTransformNode.Create;
Transform1224.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1225 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1225.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1224.FdChildren.Add(Transform1225);
{ METHOD .FdChildren.Add }
HAnimSegment1223.FdChildren.Add(Transform1224);
Shape1227 := TShapeNode.Create;
LineSet1228 := TLineSetNode.Create;
LineSet1228.SetVertexCount([2]);
Coordinate1229 := TCoordinateNode.Create;
Coordinate1229.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ METHOD .Coord }
LineSet1228.Coord := Coordinate1229;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
{ METHOD .Color }
LineSet1228.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1227.Geometry := LineSet1228;
end;

procedure InitHumanoid2Part72;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1223.FdChildren.Add(Shape1227);
{ METHOD .FdChildren.Add }
HAnimJoint1222.FdChildren.Add(HAnimSegment1223);
HAnimJoint1231 := THAnimJointNode.Create;
HAnimJoint1231.Center := Vector3(-0.1908,0.7077,-0.0706);
{ METHOD .FdChildren.Add }
HAnimJoint1222.FdChildren.Add(HAnimJoint1231);
{ METHOD .FdChildren.Add }
HAnimJoint1213.FdChildren.Add(HAnimJoint1222);
{ METHOD .FdChildren.Add }
HAnimJoint1204.FdChildren.Add(HAnimJoint1213);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimJoint1204);
HAnimJoint1232 := THAnimJointNode.Create;
HAnimJoint1232.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimSegment1233 := THAnimSegmentNode.Create;
Transform1234 := TTransformNode.Create;
Transform1234.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1235 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1235.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1234.FdChildren.Add(Transform1235);
{ METHOD .FdChildren.Add }
HAnimSegment1233.FdChildren.Add(Transform1234);
Shape1237 := TShapeNode.Create;
LineSet1238 := TLineSetNode.Create;
LineSet1238.SetVertexCount([2]);
Coordinate1239 := TCoordinateNode.Create;
Coordinate1239.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ METHOD .Coord }
LineSet1238.Coord := Coordinate1239;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
{ METHOD .Color }
LineSet1238.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1237.Geometry := LineSet1238;
{ METHOD .FdChildren.Add }
HAnimSegment1233.FdChildren.Add(Shape1237);
HAnimSite1241 := THAnimSiteNode.Create;
HAnimSite1241.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1242 := TTouchSensorNode.Create;
TouchSensor1242.Description := 'HAnimSite 80 r_metacarpal_phalanx_5';
{ METHOD .FdChildren.Add }
HAnimSite1241.FdChildren.Add(TouchSensor1242);
{ METHOD .FdChildren.Add }
HAnimSite1241.FdChildren.Add(Shape30);
Billboard1244 := TBillboardNode.Create;
Shape1245 := TShapeNode.Create;
Text1246 := TTextNode.Create;
Text1246.SetText(['80']);
FontStyle1247 := TFontStyleNode.Create;
FontStyle1247.Size := 0.035;
{ METHOD .FontStyle }
Text1246.FontStyle := FontStyle1247;
{ METHOD .Geometry }
Shape1245.Geometry := Text1246;
end;

procedure InitHumanoid2Part73;
begin

{ METHOD .FdChildren.Add }
Billboard1244.FdChildren.Add(Shape1245);
{ METHOD .FdChildren.Add }
HAnimSite1241.FdChildren.Add(Billboard1244);
{ METHOD .FdChildren.Add }
HAnimSegment1233.FdChildren.Add(HAnimSite1241);
{ METHOD .FdChildren.Add }
HAnimJoint1232.FdChildren.Add(HAnimSegment1233);
HAnimJoint1248 := THAnimJointNode.Create;
HAnimJoint1248.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimSegment1249 := THAnimSegmentNode.Create;
Transform1250 := TTransformNode.Create;
Transform1250.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1251 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1251.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1250.FdChildren.Add(Transform1251);
{ METHOD .FdChildren.Add }
HAnimSegment1249.FdChildren.Add(Transform1250);
Shape1253 := TShapeNode.Create;
LineSet1254 := TLineSetNode.Create;
LineSet1254.SetVertexCount([2]);
Coordinate1255 := TCoordinateNode.Create;
Coordinate1255.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ METHOD .Coord }
LineSet1254.Coord := Coordinate1255;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
LineSet1254.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1253.Geometry := LineSet1254;
{ METHOD .FdChildren.Add }
HAnimSegment1249.FdChildren.Add(Shape1253);
{ METHOD .FdChildren.Add }
HAnimJoint1248.FdChildren.Add(HAnimSegment1249);
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimSegment1258 := THAnimSegmentNode.Create;
Transform1259 := TTransformNode.Create;
Transform1259.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1260 := TTransformNode.Create;
{ Empty Transform }
{ METHOD .FdChildren.Add }
Transform1260.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform1259.FdChildren.Add(Transform1260);
{ METHOD .FdChildren.Add }
HAnimSegment1258.FdChildren.Add(Transform1259);
Shape1262 := TShapeNode.Create;
LineSet1263 := TLineSetNode.Create;
LineSet1263.SetVertexCount([2]);
Coordinate1264 := TCoordinateNode.Create;
Coordinate1264.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ METHOD .Coord }
LineSet1263.Coord := Coordinate1264;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
{ METHOD .Color }
LineSet1263.Color := ColorRGBA27;
{ METHOD .Geometry }
Shape1262.Geometry := LineSet1263;
end;

procedure InitHumanoid2Part74;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1258.FdChildren.Add(Shape1262);
{ METHOD .FdChildren.Add }
HAnimJoint1257.FdChildren.Add(HAnimSegment1258);
HAnimJoint1266 := THAnimJointNode.Create;
HAnimJoint1266.Center := Vector3(-0.1908,0.754,-0.096);
{ METHOD .FdChildren.Add }
HAnimJoint1257.FdChildren.Add(HAnimJoint1266);
{ METHOD .FdChildren.Add }
HAnimJoint1248.FdChildren.Add(HAnimJoint1257);
{ METHOD .FdChildren.Add }
HAnimJoint1232.FdChildren.Add(HAnimJoint1248);
{ METHOD .FdChildren.Add }
HAnimJoint1083.FdChildren.Add(HAnimJoint1232);
{ METHOD .FdChildren.Add }
HAnimJoint1046.FdChildren.Add(HAnimJoint1083);
{ METHOD .FdChildren.Add }
HAnimJoint1023.FdChildren.Add(HAnimJoint1046);
{ METHOD .FdChildren.Add }
HAnimJoint1014.FdChildren.Add(HAnimJoint1023);
{ METHOD .FdChildren.Add }
HAnimJoint970.FdChildren.Add(HAnimJoint1014);
{ METHOD .FdChildren.Add }
HAnimJoint602.FdChildren.Add(HAnimJoint970);
{ METHOD .FdChildren.Add }
HAnimJoint565.FdChildren.Add(HAnimJoint602);
{ METHOD .FdChildren.Add }
HAnimJoint535.FdChildren.Add(HAnimJoint565);
{ METHOD .FdChildren.Add }
HAnimJoint526.FdChildren.Add(HAnimJoint535);
{ METHOD .FdChildren.Add }
HAnimJoint489.FdChildren.Add(HAnimJoint526);
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
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint489);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint526);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint535);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint565);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint602);
end;

procedure InitHumanoid2Part75;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint647);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint656);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint672);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint673);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint717);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint726);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint749);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint786);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint818);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint827);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint836);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint837);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint853);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint862);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint871);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint872);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint888);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint897);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint906);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint907);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint916);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint925);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint934);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint935);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint951);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint960);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint969);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint970);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1014);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1023);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1046);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1083);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1115);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1124);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1133);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1134);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1150);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1159);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1168);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1169);
end;

procedure InitHumanoid2Part76;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1185);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1194);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1203);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1204);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1213);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1222);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1231);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1232);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1248);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1257);
{ METHOD .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1266);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(HAnimHumanoid38);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function CreateHumanoid2: TX3DRootNode;
begin
InitHumanoid2Part0;
InitHumanoid2Part1;
InitHumanoid2Part2;
InitHumanoid2Part3;
InitHumanoid2Part4;
InitHumanoid2Part5;
InitHumanoid2Part6;
InitHumanoid2Part7;
InitHumanoid2Part8;
InitHumanoid2Part9;
InitHumanoid2Part10;
InitHumanoid2Part11;
InitHumanoid2Part12;
InitHumanoid2Part13;
InitHumanoid2Part14;
InitHumanoid2Part15;
InitHumanoid2Part16;
InitHumanoid2Part17;
InitHumanoid2Part18;
InitHumanoid2Part19;
InitHumanoid2Part20;
InitHumanoid2Part21;
InitHumanoid2Part22;
InitHumanoid2Part23;
InitHumanoid2Part24;
InitHumanoid2Part25;
InitHumanoid2Part26;
InitHumanoid2Part27;
InitHumanoid2Part28;
InitHumanoid2Part29;
InitHumanoid2Part30;
InitHumanoid2Part31;
InitHumanoid2Part32;
InitHumanoid2Part33;
InitHumanoid2Part34;
InitHumanoid2Part35;
InitHumanoid2Part36;
InitHumanoid2Part37;
InitHumanoid2Part38;
InitHumanoid2Part39;
InitHumanoid2Part40;
InitHumanoid2Part41;
InitHumanoid2Part42;
InitHumanoid2Part43;
InitHumanoid2Part44;
InitHumanoid2Part45;
InitHumanoid2Part46;
InitHumanoid2Part47;
InitHumanoid2Part48;
InitHumanoid2Part49;
InitHumanoid2Part50;
InitHumanoid2Part51;
InitHumanoid2Part52;
InitHumanoid2Part53;
InitHumanoid2Part54;
InitHumanoid2Part55;
InitHumanoid2Part56;
InitHumanoid2Part57;
InitHumanoid2Part58;
InitHumanoid2Part59;
InitHumanoid2Part60;
InitHumanoid2Part61;
InitHumanoid2Part62;
InitHumanoid2Part63;
InitHumanoid2Part64;
InitHumanoid2Part65;
InitHumanoid2Part66;
InitHumanoid2Part67;
InitHumanoid2Part68;
InitHumanoid2Part69;
InitHumanoid2Part70;
InitHumanoid2Part71;
InitHumanoid2Part72;
InitHumanoid2Part73;
InitHumanoid2Part74;
InitHumanoid2Part75;
InitHumanoid2Part76;
Result := X3D0;
end;

begin
end.
