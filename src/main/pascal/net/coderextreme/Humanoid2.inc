function Humanoid2: TX3DRootNode;
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
HAnimSegment1338: THAnimSegmentNode;
HAnimSegment1339: THAnimSegmentNode;
HAnimSegment1340: THAnimSegmentNode;
HAnimSegment1341: THAnimSegmentNode;
HAnimSegment1342: THAnimSegmentNode;
HAnimSegment1343: THAnimSegmentNode;
HAnimSegment1344: THAnimSegmentNode;
HAnimSegment1345: THAnimSegmentNode;
HAnimSegment1346: THAnimSegmentNode;
HAnimSegment1347: THAnimSegmentNode;
HAnimSegment1348: THAnimSegmentNode;
HAnimSegment1349: THAnimSegmentNode;
HAnimSegment1350: THAnimSegmentNode;
HAnimSegment1351: THAnimSegmentNode;
HAnimSegment1352: THAnimSegmentNode;
HAnimSegment1353: THAnimSegmentNode;
HAnimSegment1354: THAnimSegmentNode;
HAnimSegment1355: THAnimSegmentNode;
HAnimSegment1356: THAnimSegmentNode;
HAnimSegment1357: THAnimSegmentNode;
HAnimSegment1358: THAnimSegmentNode;
HAnimSegment1359: THAnimSegmentNode;
HAnimSegment1360: THAnimSegmentNode;
HAnimSegment1361: THAnimSegmentNode;
HAnimSegment1362: THAnimSegmentNode;
HAnimSegment1363: THAnimSegmentNode;
HAnimSegment1364: THAnimSegmentNode;
HAnimSegment1365: THAnimSegmentNode;
HAnimSegment1366: THAnimSegmentNode;
HAnimSegment1367: THAnimSegmentNode;
HAnimSegment1368: THAnimSegmentNode;
HAnimSegment1369: THAnimSegmentNode;
HAnimSegment1370: THAnimSegmentNode;
HAnimSegment1371: THAnimSegmentNode;
HAnimSegment1372: THAnimSegmentNode;
HAnimSegment1373: THAnimSegmentNode;
HAnimSegment1374: THAnimSegmentNode;
HAnimSegment1375: THAnimSegmentNode;
HAnimSegment1376: THAnimSegmentNode;
HAnimSegment1377: THAnimSegmentNode;
HAnimSegment1378: THAnimSegmentNode;
HAnimSegment1379: THAnimSegmentNode;
HAnimSegment1380: THAnimSegmentNode;
HAnimSegment1381: THAnimSegmentNode;
HAnimSegment1382: THAnimSegmentNode;
HAnimSegment1383: THAnimSegmentNode;
HAnimSegment1384: THAnimSegmentNode;
HAnimSegment1385: THAnimSegmentNode;
HAnimSegment1386: THAnimSegmentNode;
HAnimSegment1387: THAnimSegmentNode;
HAnimSegment1388: THAnimSegmentNode;
HAnimSegment1389: THAnimSegmentNode;
HAnimSegment1390: THAnimSegmentNode;
HAnimSegment1391: THAnimSegmentNode;
HAnimSegment1392: THAnimSegmentNode;
HAnimSegment1393: THAnimSegmentNode;
HAnimSegment1394: THAnimSegmentNode;
HAnimSegment1395: THAnimSegmentNode;
HAnimSite1396: THAnimSiteNode;
HAnimSite1397: THAnimSiteNode;
HAnimSite1398: THAnimSiteNode;
HAnimSite1399: THAnimSiteNode;
HAnimSite1400: THAnimSiteNode;
HAnimSite1401: THAnimSiteNode;
HAnimSite1402: THAnimSiteNode;
HAnimSite1403: THAnimSiteNode;
HAnimSite1404: THAnimSiteNode;
HAnimSite1405: THAnimSiteNode;
HAnimSite1406: THAnimSiteNode;
HAnimSite1407: THAnimSiteNode;
HAnimSite1408: THAnimSiteNode;
HAnimSite1409: THAnimSiteNode;
HAnimSite1410: THAnimSiteNode;
HAnimSite1411: THAnimSiteNode;
HAnimSite1412: THAnimSiteNode;
HAnimSite1413: THAnimSiteNode;
HAnimSite1414: THAnimSiteNode;
HAnimSite1415: THAnimSiteNode;
HAnimSite1416: THAnimSiteNode;
HAnimSite1417: THAnimSiteNode;
HAnimSite1418: THAnimSiteNode;
HAnimSite1419: THAnimSiteNode;
HAnimSite1420: THAnimSiteNode;
HAnimSite1421: THAnimSiteNode;
HAnimSite1422: THAnimSiteNode;
HAnimSite1423: THAnimSiteNode;
HAnimSite1424: THAnimSiteNode;
HAnimSite1425: THAnimSiteNode;
HAnimSite1426: THAnimSiteNode;
HAnimSite1427: THAnimSiteNode;
HAnimSite1428: THAnimSiteNode;
HAnimSite1429: THAnimSiteNode;
HAnimSite1430: THAnimSiteNode;
HAnimSite1431: THAnimSiteNode;
HAnimSite1432: THAnimSiteNode;
HAnimSite1433: THAnimSiteNode;
HAnimSite1434: THAnimSiteNode;
HAnimSite1435: THAnimSiteNode;
HAnimSite1436: THAnimSiteNode;
HAnimSite1437: THAnimSiteNode;
HAnimSite1438: THAnimSiteNode;
HAnimSite1439: THAnimSiteNode;
HAnimSite1440: THAnimSiteNode;
HAnimSite1441: THAnimSiteNode;
HAnimSite1442: THAnimSiteNode;
HAnimSite1443: THAnimSiteNode;
HAnimSite1444: THAnimSiteNode;
HAnimSite1445: THAnimSiteNode;
HAnimSite1446: THAnimSiteNode;
HAnimSite1447: THAnimSiteNode;
HAnimSite1448: THAnimSiteNode;
HAnimSite1449: THAnimSiteNode;
HAnimSite1450: THAnimSiteNode;
HAnimSite1451: THAnimSiteNode;
HAnimSite1452: THAnimSiteNode;
HAnimSite1453: THAnimSiteNode;
HAnimSite1454: THAnimSiteNode;
HAnimSite1455: THAnimSiteNode;
HAnimSite1456: THAnimSiteNode;
HAnimSite1457: THAnimSiteNode;
HAnimSite1458: THAnimSiteNode;
HAnimSite1459: THAnimSiteNode;
HAnimSite1460: THAnimSiteNode;
HAnimSite1461: THAnimSiteNode;
HAnimSite1462: THAnimSiteNode;
HAnimSite1463: THAnimSiteNode;
HAnimSite1464: THAnimSiteNode;
HAnimSite1465: THAnimSiteNode;
HAnimSite1466: THAnimSiteNode;
HAnimSite1467: THAnimSiteNode;
HAnimSite1468: THAnimSiteNode;
HAnimSite1469: THAnimSiteNode;
HAnimSite1470: THAnimSiteNode;
HAnimSite1471: THAnimSiteNode;
HAnimSite1472: THAnimSiteNode;
HAnimSite1473: THAnimSiteNode;
HAnimSite1474: THAnimSiteNode;
HAnimSite1475: THAnimSiteNode;
HAnimSite1476: THAnimSiteNode;
HAnimSite1477: THAnimSiteNode;
HAnimSite1478: THAnimSiteNode;
HAnimSite1479: THAnimSiteNode;
HAnimSite1480: THAnimSiteNode;
HAnimSite1481: THAnimSiteNode;
HAnimSite1482: THAnimSiteNode;
HAnimSite1483: THAnimSiteNode;
HAnimSite1484: THAnimSiteNode;
HAnimSite1485: THAnimSiteNode;
HAnimSite1486: THAnimSiteNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'Humanoid2.x3d';
X3D0.Meta['identifier'] := 'http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d';
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
Coordinate466.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0041,1.1276,-0.0796)]);
{ .SetCoord }
LineSet465.Coord := Coordinate466;
{ from vl5 to vl3 vertices 2 }
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
HAnimJoint489.NameField := 'vl3';
HAnimJoint489.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint489.SetUlimit([0,0,0]);
HAnimJoint489.SetLlimit([0,0,0]);
HAnimSegment490 := THAnimSegmentNode.Create;
HAnimSegment490.NameField := 'l3';
Transform491 := TTransformNode.Create;
Transform491.Translation := Vector3(0.0041,1.1276,-0.0796);
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
Coordinate496.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0048,1.1912,-0.0805)]);
{ .SetCoord }
LineSet495.Coord := Coordinate496;
{ from vl3 to vl1 vertices 2 }
ColorRGBA497 := TColorRGBANode.Create;
ColorRGBA497 := ColorRGBA27;
{ .SetColor }
LineSet495.Color := ColorRGBA497;
{ .SetGeometry }
Shape494.Geometry := LineSet495;
{ .AddChildren }
HAnimSegment490.AddChildren([Shape494]);
HAnimSite498 := THAnimSiteNode.Create;
HAnimSite498.NameField := 'l_rib10';
HAnimSite498.Translation := Vector3(0.0871,1.1925,0.0992);
TouchSensor499 := TTouchSensorNode.Create;
TouchSensor499.Description := 'HAnimSite 28 l_rib10';
{ .AddChildren }
HAnimSite498.AddChildren([TouchSensor499]);
Shape500 := TShapeNode.Create;
Shape500 := Shape30;
{ .AddChildren }
HAnimSite498.AddChildren([Shape500]);
Billboard501 := TBillboardNode.Create;
Shape502 := TShapeNode.Create;
Text503 := TTextNode.Create;
Text503.SetText(['28']);
FontStyle504 := TFontStyleNode.Create;
FontStyle504.Size := 0.035;
{ .SetFontStyle }
Text503.FontStyle := FontStyle504;
{ .SetGeometry }
Shape502.Geometry := Text503;
{ .AddChildren }
Billboard501.AddChildren([Shape502]);
{ .AddChildren }
HAnimSite498.AddChildren([Billboard501]);
{ .AddChildren }
HAnimSegment490.AddChildren([HAnimSite498]);
HAnimSite505 := THAnimSiteNode.Create;
HAnimSite505.NameField := 'r_rib10';
HAnimSite505.Translation := Vector3(-0.0711,1.1941,0.1016);
TouchSensor506 := TTouchSensorNode.Create;
TouchSensor506.Description := 'HAnimSite 30 r_rib10';
{ .AddChildren }
HAnimSite505.AddChildren([TouchSensor506]);
Shape507 := TShapeNode.Create;
Shape507 := Shape30;
{ .AddChildren }
HAnimSite505.AddChildren([Shape507]);
Billboard508 := TBillboardNode.Create;
Shape509 := TShapeNode.Create;
Text510 := TTextNode.Create;
Text510.SetText(['30']);
FontStyle511 := TFontStyleNode.Create;
FontStyle511.Size := 0.035;
{ .SetFontStyle }
Text510.FontStyle := FontStyle511;
{ .SetGeometry }
Shape509.Geometry := Text510;
{ .AddChildren }
Billboard508.AddChildren([Shape509]);
{ .AddChildren }
HAnimSite505.AddChildren([Billboard508]);
{ .AddChildren }
HAnimSegment490.AddChildren([HAnimSite505]);
HAnimSite512 := THAnimSiteNode.Create;
HAnimSite512.NameField := 'spine_1_middle_back';
TouchSensor513 := TTouchSensorNode.Create;
TouchSensor513.Description := 'HAnimSite 24 spine_1_middle_back';
{ .AddChildren }
HAnimSite512.AddChildren([TouchSensor513]);
Shape514 := TShapeNode.Create;
Shape514 := Shape30;
{ .AddChildren }
HAnimSite512.AddChildren([Shape514]);
Billboard515 := TBillboardNode.Create;
Shape516 := TShapeNode.Create;
Text517 := TTextNode.Create;
Text517.SetText(['24']);
FontStyle518 := TFontStyleNode.Create;
FontStyle518.Size := 0.035;
{ .SetFontStyle }
Text517.FontStyle := FontStyle518;
{ .SetGeometry }
Shape516.Geometry := Text517;
{ .AddChildren }
Billboard515.AddChildren([Shape516]);
{ .AddChildren }
HAnimSite512.AddChildren([Billboard515]);
{ .AddChildren }
HAnimSegment490.AddChildren([HAnimSite512]);
HAnimSite519 := THAnimSiteNode.Create;
HAnimSite519.NameField := 'spine_2_middle_back';
TouchSensor520 := TTouchSensorNode.Create;
TouchSensor520.Description := 'HAnimSite spine_2_middle_back';
{ .AddChildren }
HAnimSite519.AddChildren([TouchSensor520]);
Shape521 := TShapeNode.Create;
Shape521 := Shape30;
{ .AddChildren }
HAnimSite519.AddChildren([Shape521]);
Billboard522 := TBillboardNode.Create;
Shape523 := TShapeNode.Create;
Text524 := TTextNode.Create;
Text524.SetText(['']);
FontStyle525 := TFontStyleNode.Create;
FontStyle525.Size := 0.035;
{ .SetFontStyle }
Text524.FontStyle := FontStyle525;
{ .SetGeometry }
Shape523.Geometry := Text524;
{ .AddChildren }
Billboard522.AddChildren([Shape523]);
{ .AddChildren }
HAnimSite519.AddChildren([Billboard522]);
{ .AddChildren }
HAnimSegment490.AddChildren([HAnimSite519]);
{ .AddChildren }
HAnimJoint489.AddChildren([HAnimSegment490]);
HAnimJoint526 := THAnimJointNode.Create;
HAnimJoint526.NameField := 'vl1';
HAnimJoint526.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint526.SetUlimit([0,0,0]);
HAnimJoint526.SetLlimit([0,0,0]);
HAnimSegment527 := THAnimSegmentNode.Create;
HAnimSegment527.NameField := 'l1';
Transform528 := TTransformNode.Create;
Transform528.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform529 := TTransformNode.Create;
{ Empty Transform }
Shape530 := TShapeNode.Create;
Shape530 := Shape20;
{ .AddChild }
Transform529.AddChildren([Shape530]);
{ .AddChildren }
Transform528.AddChildren([Transform529]);
{ .AddChildren }
HAnimSegment527.AddChildren([Transform528]);
Shape531 := TShapeNode.Create;
LineSet532 := TLineSetNode.Create;
LineSet532.SetVertexCount([2]);
Coordinate533 := TCoordinateNode.Create;
Coordinate533.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0056,1.2848,-0.0822)]);
{ .SetCoord }
LineSet532.Coord := Coordinate533;
{ from vl1 to vt10 vertices 2 }
ColorRGBA534 := TColorRGBANode.Create;
ColorRGBA534 := ColorRGBA27;
{ .SetColor }
LineSet532.Color := ColorRGBA534;
{ .SetGeometry }
Shape531.Geometry := LineSet532;
{ .AddChildren }
HAnimSegment527.AddChildren([Shape531]);
{ .AddChildren }
HAnimJoint526.AddChildren([HAnimSegment527]);
HAnimJoint535 := THAnimJointNode.Create;
HAnimJoint535.NameField := 'vt10';
HAnimJoint535.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint535.SetUlimit([0,0,0]);
HAnimJoint535.SetLlimit([0,0,0]);
HAnimSegment536 := THAnimSegmentNode.Create;
HAnimSegment536.NameField := 't10';
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform538 := TTransformNode.Create;
{ Empty Transform }
Shape539 := TShapeNode.Create;
Shape539 := Shape20;
{ .AddChild }
Transform538.AddChildren([Shape539]);
{ .AddChildren }
Transform537.AddChildren([Transform538]);
{ .AddChildren }
HAnimSegment536.AddChildren([Transform537]);
Shape540 := TShapeNode.Create;
LineSet541 := TLineSetNode.Create;
LineSet541.SetVertexCount([2]);
Coordinate542 := TCoordinateNode.Create;
Coordinate542.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0059,1.3866,-0.08)]);
{ .SetCoord }
LineSet541.Coord := Coordinate542;
{ from vt10 to vt6 vertices 2 }
ColorRGBA543 := TColorRGBANode.Create;
ColorRGBA543 := ColorRGBA27;
{ .SetColor }
LineSet541.Color := ColorRGBA543;
{ .SetGeometry }
Shape540.Geometry := LineSet541;
{ .AddChildren }
HAnimSegment536.AddChildren([Shape540]);
HAnimSite544 := THAnimSiteNode.Create;
HAnimSite544.NameField := 'l_thelion';
HAnimSite544.Translation := Vector3(0.0918,1.3382,0.1192);
TouchSensor545 := TTouchSensorNode.Create;
TouchSensor545.Description := 'HAnimSite 29 l_thelion';
{ .AddChildren }
HAnimSite544.AddChildren([TouchSensor545]);
Shape546 := TShapeNode.Create;
Shape546 := Shape30;
{ .AddChildren }
HAnimSite544.AddChildren([Shape546]);
Billboard547 := TBillboardNode.Create;
Shape548 := TShapeNode.Create;
Text549 := TTextNode.Create;
Text549.SetText(['29']);
FontStyle550 := TFontStyleNode.Create;
FontStyle550.Size := 0.035;
{ .SetFontStyle }
Text549.FontStyle := FontStyle550;
{ .SetGeometry }
Shape548.Geometry := Text549;
{ .AddChildren }
Billboard547.AddChildren([Shape548]);
{ .AddChildren }
HAnimSite544.AddChildren([Billboard547]);
{ .AddChildren }
HAnimSegment536.AddChildren([HAnimSite544]);
HAnimSite551 := THAnimSiteNode.Create;
HAnimSite551.NameField := 'r_thelion';
HAnimSite551.Translation := Vector3(-0.0736,1.3385,0.1217);
TouchSensor552 := TTouchSensorNode.Create;
TouchSensor552.Description := 'HAnimSite 31 r_thelion';
{ .AddChildren }
HAnimSite551.AddChildren([TouchSensor552]);
Shape553 := TShapeNode.Create;
Shape553 := Shape30;
{ .AddChildren }
HAnimSite551.AddChildren([Shape553]);
Billboard554 := TBillboardNode.Create;
Shape555 := TShapeNode.Create;
Text556 := TTextNode.Create;
Text556.SetText(['31']);
FontStyle557 := TFontStyleNode.Create;
FontStyle557.Size := 0.035;
{ .SetFontStyle }
Text556.FontStyle := FontStyle557;
{ .SetGeometry }
Shape555.Geometry := Text556;
{ .AddChildren }
Billboard554.AddChildren([Shape555]);
{ .AddChildren }
HAnimSite551.AddChildren([Billboard554]);
{ .AddChildren }
HAnimSegment536.AddChildren([HAnimSite551]);
HAnimSite558 := THAnimSiteNode.Create;
HAnimSite558.NameField := 'substernale';
HAnimSite558.Translation := Vector3(0.0085,1.2995,0.1147);
TouchSensor559 := TTouchSensorNode.Create;
TouchSensor559.Description := 'HAnimSite 13 substernale';
{ .AddChildren }
HAnimSite558.AddChildren([TouchSensor559]);
Shape560 := TShapeNode.Create;
Shape560 := Shape30;
{ .AddChildren }
HAnimSite558.AddChildren([Shape560]);
Billboard561 := TBillboardNode.Create;
Shape562 := TShapeNode.Create;
Text563 := TTextNode.Create;
Text563.SetText(['13']);
FontStyle564 := TFontStyleNode.Create;
FontStyle564.Size := 0.035;
{ .SetFontStyle }
Text563.FontStyle := FontStyle564;
{ .SetGeometry }
Shape562.Geometry := Text563;
{ .AddChildren }
Billboard561.AddChildren([Shape562]);
{ .AddChildren }
HAnimSite558.AddChildren([Billboard561]);
{ .AddChildren }
HAnimSegment536.AddChildren([HAnimSite558]);
{ .AddChildren }
HAnimJoint535.AddChildren([HAnimSegment536]);
HAnimJoint565 := THAnimJointNode.Create;
HAnimJoint565.NameField := 'vt6';
HAnimJoint565.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint565.SetUlimit([0,0,0]);
HAnimJoint565.SetLlimit([0,0,0]);
HAnimSegment566 := THAnimSegmentNode.Create;
HAnimSegment566.NameField := 't6';
Transform567 := TTransformNode.Create;
Transform567.Translation := Vector3(0.0059,1.3866,-0.08);
Transform568 := TTransformNode.Create;
{ Empty Transform }
Shape569 := TShapeNode.Create;
Shape569 := Shape20;
{ .AddChild }
Transform568.AddChildren([Shape569]);
{ .AddChildren }
Transform567.AddChildren([Transform568]);
{ .AddChildren }
HAnimSegment566.AddChildren([Transform567]);
Shape570 := TShapeNode.Create;
LineSet571 := TLineSetNode.Create;
LineSet571.SetVertexCount([2]);
Coordinate572 := TCoordinateNode.Create;
Coordinate572.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.0065,1.4951,-0.0387)]);
{ .SetCoord }
LineSet571.Coord := Coordinate572;
{ from vt6 to vt1 vertices 2 }
ColorRGBA573 := TColorRGBANode.Create;
ColorRGBA573 := ColorRGBA27;
{ .SetColor }
LineSet571.Color := ColorRGBA573;
{ .SetGeometry }
Shape570.Geometry := LineSet571;
{ .AddChildren }
HAnimSegment566.AddChildren([Shape570]);
HAnimSite574 := THAnimSiteNode.Create;
HAnimSite574.NameField := 'l_chest_midsagittal_plane';
TouchSensor575 := TTouchSensorNode.Create;
TouchSensor575.Description := 'HAnimSite 94 l_chest_midsagittal_plane';
{ .AddChildren }
HAnimSite574.AddChildren([TouchSensor575]);
Shape576 := TShapeNode.Create;
Shape576 := Shape30;
{ .AddChildren }
HAnimSite574.AddChildren([Shape576]);
Billboard577 := TBillboardNode.Create;
Shape578 := TShapeNode.Create;
Text579 := TTextNode.Create;
Text579.SetText(['94']);
FontStyle580 := TFontStyleNode.Create;
FontStyle580.Size := 0.035;
{ .SetFontStyle }
Text579.FontStyle := FontStyle580;
{ .SetGeometry }
Shape578.Geometry := Text579;
{ .AddChildren }
Billboard577.AddChildren([Shape578]);
{ .AddChildren }
HAnimSite574.AddChildren([Billboard577]);
{ .AddChildren }
HAnimSegment566.AddChildren([HAnimSite574]);
HAnimSite581 := THAnimSiteNode.Create;
HAnimSite581.NameField := 'mesosternale';
TouchSensor582 := TTouchSensorNode.Create;
TouchSensor582.Description := 'HAnimSite 88 mesosternale';
{ .AddChildren }
HAnimSite581.AddChildren([TouchSensor582]);
Shape583 := TShapeNode.Create;
Shape583 := Shape30;
{ .AddChildren }
HAnimSite581.AddChildren([Shape583]);
Billboard584 := TBillboardNode.Create;
Shape585 := TShapeNode.Create;
Text586 := TTextNode.Create;
Text586.SetText(['88']);
FontStyle587 := TFontStyleNode.Create;
FontStyle587.Size := 0.035;
{ .SetFontStyle }
Text586.FontStyle := FontStyle587;
{ .SetGeometry }
Shape585.Geometry := Text586;
{ .AddChildren }
Billboard584.AddChildren([Shape585]);
{ .AddChildren }
HAnimSite581.AddChildren([Billboard584]);
{ .AddChildren }
HAnimSegment566.AddChildren([HAnimSite581]);
HAnimSite588 := THAnimSiteNode.Create;
HAnimSite588.NameField := 'r_chest_midsagittal_plane';
TouchSensor589 := TTouchSensorNode.Create;
TouchSensor589.Description := 'HAnimSite 95 r_chest_midsagittal_plane';
{ .AddChildren }
HAnimSite588.AddChildren([TouchSensor589]);
Shape590 := TShapeNode.Create;
Shape590 := Shape30;
{ .AddChildren }
HAnimSite588.AddChildren([Shape590]);
Billboard591 := TBillboardNode.Create;
Shape592 := TShapeNode.Create;
Text593 := TTextNode.Create;
Text593.SetText(['95']);
FontStyle594 := TFontStyleNode.Create;
FontStyle594.Size := 0.035;
{ .SetFontStyle }
Text593.FontStyle := FontStyle594;
{ .SetGeometry }
Shape592.Geometry := Text593;
{ .AddChildren }
Billboard591.AddChildren([Shape592]);
{ .AddChildren }
HAnimSite588.AddChildren([Billboard591]);
{ .AddChildren }
HAnimSegment566.AddChildren([HAnimSite588]);
HAnimSite595 := THAnimSiteNode.Create;
HAnimSite595.NameField := 'rear_center_midsagittal_plane';
TouchSensor596 := TTouchSensorNode.Create;
TouchSensor596.Description := 'HAnimSite 92 rear_center_midsagittal_plane';
{ .AddChildren }
HAnimSite595.AddChildren([TouchSensor596]);
Shape597 := TShapeNode.Create;
Shape597 := Shape30;
{ .AddChildren }
HAnimSite595.AddChildren([Shape597]);
Billboard598 := TBillboardNode.Create;
Shape599 := TShapeNode.Create;
Text600 := TTextNode.Create;
Text600.SetText(['92']);
FontStyle601 := TFontStyleNode.Create;
FontStyle601.Size := 0.035;
{ .SetFontStyle }
Text600.FontStyle := FontStyle601;
{ .SetGeometry }
Shape599.Geometry := Text600;
{ .AddChildren }
Billboard598.AddChildren([Shape599]);
{ .AddChildren }
HAnimSite595.AddChildren([Billboard598]);
{ .AddChildren }
HAnimSegment566.AddChildren([HAnimSite595]);
{ .AddChildren }
HAnimJoint565.AddChildren([HAnimSegment566]);
HAnimJoint602 := THAnimJointNode.Create;
HAnimJoint602.NameField := 'vt1';
HAnimJoint602.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint602.SetUlimit([0,0,0]);
HAnimJoint602.SetLlimit([0,0,0]);
HAnimSegment603 := THAnimSegmentNode.Create;
HAnimSegment603.NameField := 't1';
Transform604 := TTransformNode.Create;
Transform604.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform605 := TTransformNode.Create;
{ Empty Transform }
Shape606 := TShapeNode.Create;
Shape606 := Shape20;
{ .AddChild }
Transform605.AddChildren([Shape606]);
{ .AddChildren }
Transform604.AddChildren([Transform605]);
{ .AddChildren }
HAnimSegment603.AddChildren([Transform604]);
Shape607 := TShapeNode.Create;
LineSet608 := TLineSetNode.Create;
LineSet608.SetVertexCount([2]);
Coordinate609 := TCoordinateNode.Create;
Coordinate609.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5662,-0.0084)]);
{ .SetCoord }
LineSet608.Coord := Coordinate609;
{ from vt1 to vc4 vertices 2 }
ColorRGBA610 := TColorRGBANode.Create;
ColorRGBA610 := ColorRGBA27;
{ .SetColor }
LineSet608.Color := ColorRGBA610;
{ .SetGeometry }
Shape607.Geometry := LineSet608;
{ .AddChildren }
HAnimSegment603.AddChildren([Shape607]);
HAnimSite611 := THAnimSiteNode.Create;
HAnimSite611.NameField := 'cervicale';
HAnimSite611.Translation := Vector3(0.0064,1.52,-0.0815);
TouchSensor612 := TTouchSensorNode.Create;
TouchSensor612.Description := 'HAnimSite 10 cervicale';
{ .AddChildren }
HAnimSite611.AddChildren([TouchSensor612]);
Shape613 := TShapeNode.Create;
Shape613 := Shape30;
{ .AddChildren }
HAnimSite611.AddChildren([Shape613]);
Billboard614 := TBillboardNode.Create;
Shape615 := TShapeNode.Create;
Text616 := TTextNode.Create;
Text616.SetText(['10']);
FontStyle617 := TFontStyleNode.Create;
FontStyle617.Size := 0.035;
{ .SetFontStyle }
Text616.FontStyle := FontStyle617;
{ .SetGeometry }
Shape615.Geometry := Text616;
{ .AddChildren }
Billboard614.AddChildren([Shape615]);
{ .AddChildren }
HAnimSite611.AddChildren([Billboard614]);
{ .AddChildren }
HAnimSegment603.AddChildren([HAnimSite611]);
HAnimSite618 := THAnimSiteNode.Create;
HAnimSite618.NameField := 'l_neck_base';
HAnimSite618.Translation := Vector3(0.0646,1.5141,-0.038);
TouchSensor619 := TTouchSensorNode.Create;
TouchSensor619.Description := 'HAnimSite 82 l_neck_base';
{ .AddChildren }
HAnimSite618.AddChildren([TouchSensor619]);
Shape620 := TShapeNode.Create;
Shape620 := Shape30;
{ .AddChildren }
HAnimSite618.AddChildren([Shape620]);
Billboard621 := TBillboardNode.Create;
Shape622 := TShapeNode.Create;
Text623 := TTextNode.Create;
Text623.SetText(['82']);
FontStyle624 := TFontStyleNode.Create;
FontStyle624.Size := 0.035;
{ .SetFontStyle }
Text623.FontStyle := FontStyle624;
{ .SetGeometry }
Shape622.Geometry := Text623;
{ .AddChildren }
Billboard621.AddChildren([Shape622]);
{ .AddChildren }
HAnimSite618.AddChildren([Billboard621]);
{ .AddChildren }
HAnimSegment603.AddChildren([HAnimSite618]);
HAnimSite625 := THAnimSiteNode.Create;
HAnimSite625.NameField := 'r_neck_base';
HAnimSite625.Translation := Vector3(-0.0419,1.5149,-0.022);
TouchSensor626 := TTouchSensorNode.Create;
TouchSensor626.Description := 'HAnimSite 83 r_neck_base';
{ .AddChildren }
HAnimSite625.AddChildren([TouchSensor626]);
Shape627 := TShapeNode.Create;
Shape627 := Shape30;
{ .AddChildren }
HAnimSite625.AddChildren([Shape627]);
Billboard628 := TBillboardNode.Create;
Shape629 := TShapeNode.Create;
Text630 := TTextNode.Create;
Text630.SetText(['83']);
FontStyle631 := TFontStyleNode.Create;
FontStyle631.Size := 0.035;
{ .SetFontStyle }
Text630.FontStyle := FontStyle631;
{ .SetGeometry }
Shape629.Geometry := Text630;
{ .AddChildren }
Billboard628.AddChildren([Shape629]);
{ .AddChildren }
HAnimSite625.AddChildren([Billboard628]);
{ .AddChildren }
HAnimSegment603.AddChildren([HAnimSite625]);
HAnimSite632 := THAnimSiteNode.Create;
HAnimSite632.NameField := 'suprasternale';
HAnimSite632.Translation := Vector3(0.0084,1.4714,0.0551);
TouchSensor633 := TTouchSensorNode.Create;
TouchSensor633.Description := 'HAnimSite 12 suprasternale';
{ .AddChildren }
HAnimSite632.AddChildren([TouchSensor633]);
Shape634 := TShapeNode.Create;
Shape634 := Shape30;
{ .AddChildren }
HAnimSite632.AddChildren([Shape634]);
Billboard635 := TBillboardNode.Create;
Shape636 := TShapeNode.Create;
Text637 := TTextNode.Create;
Text637.SetText(['12']);
FontStyle638 := TFontStyleNode.Create;
FontStyle638.Size := 0.035;
{ .SetFontStyle }
Text637.FontStyle := FontStyle638;
{ .SetGeometry }
Shape636.Geometry := Text637;
{ .AddChildren }
Billboard635.AddChildren([Shape636]);
{ .AddChildren }
HAnimSite632.AddChildren([Billboard635]);
{ .AddChildren }
HAnimSegment603.AddChildren([HAnimSite632]);
Shape639 := TShapeNode.Create;
LineSet640 := TLineSetNode.Create;
LineSet640.SetVertexCount([2]);
Coordinate641 := TCoordinateNode.Create;
Coordinate641.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ .SetCoord }
LineSet640.Coord := Coordinate641;
{ from vt1 to l_sternoclavicular vertices 2 }
ColorRGBA642 := TColorRGBANode.Create;
ColorRGBA642 := ColorRGBA27;
{ .SetColor }
LineSet640.Color := ColorRGBA642;
{ .SetGeometry }
Shape639.Geometry := LineSet640;
{ .AddChildren }
HAnimSegment603.AddChildren([Shape639]);
Shape643 := TShapeNode.Create;
LineSet644 := TLineSetNode.Create;
LineSet644.SetVertexCount([2]);
Coordinate645 := TCoordinateNode.Create;
Coordinate645.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ .SetCoord }
LineSet644.Coord := Coordinate645;
{ from vt1 to r_sternoclavicular vertices 2 }
ColorRGBA646 := TColorRGBANode.Create;
ColorRGBA646 := ColorRGBA27;
{ .SetColor }
LineSet644.Color := ColorRGBA646;
{ .SetGeometry }
Shape643.Geometry := LineSet644;
{ .AddChildren }
HAnimSegment603.AddChildren([Shape643]);
{ .AddChildren }
HAnimJoint602.AddChildren([HAnimSegment603]);
HAnimJoint647 := THAnimJointNode.Create;
HAnimJoint647.NameField := 'vc4';
HAnimJoint647.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint647.SetUlimit([0,0,0]);
HAnimJoint647.SetLlimit([0,0,0]);
HAnimSegment648 := THAnimSegmentNode.Create;
HAnimSegment648.NameField := 'c4';
Transform649 := TTransformNode.Create;
Transform649.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform650 := TTransformNode.Create;
{ Empty Transform }
Shape651 := TShapeNode.Create;
Shape651 := Shape20;
{ .AddChild }
Transform650.AddChildren([Shape651]);
{ .AddChildren }
Transform649.AddChildren([Transform650]);
{ .AddChildren }
HAnimSegment648.AddChildren([Transform649]);
Shape652 := TShapeNode.Create;
LineSet653 := TLineSetNode.Create;
LineSet653.SetVertexCount([2]);
Coordinate654 := TCoordinateNode.Create;
Coordinate654.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.5928,-0.0103)]);
{ .SetCoord }
LineSet653.Coord := Coordinate654;
{ from vc4 to vc2 vertices 2 }
ColorRGBA655 := TColorRGBANode.Create;
ColorRGBA655 := ColorRGBA27;
{ .SetColor }
LineSet653.Color := ColorRGBA655;
{ .SetGeometry }
Shape652.Geometry := LineSet653;
{ .AddChildren }
HAnimSegment648.AddChildren([Shape652]);
{ .AddChildren }
HAnimJoint647.AddChildren([HAnimSegment648]);
HAnimJoint656 := THAnimJointNode.Create;
HAnimJoint656.NameField := 'vc2';
HAnimJoint656.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint656.SetUlimit([0,0,0]);
HAnimJoint656.SetLlimit([0,0,0]);
HAnimSegment657 := THAnimSegmentNode.Create;
HAnimSegment657.NameField := 'c2';
Transform658 := TTransformNode.Create;
Transform658.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform659 := TTransformNode.Create;
{ Empty Transform }
Shape660 := TShapeNode.Create;
Shape660 := Shape20;
{ .AddChild }
Transform659.AddChildren([Shape660]);
{ .AddChildren }
Transform658.AddChildren([Transform659]);
{ .AddChildren }
HAnimSegment657.AddChildren([Transform658]);
Shape661 := TShapeNode.Create;
LineSet662 := TLineSetNode.Create;
LineSet662.SetVertexCount([2]);
Coordinate663 := TCoordinateNode.Create;
Coordinate663.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0044,1.6209,0.0236)]);
{ .SetCoord }
LineSet662.Coord := Coordinate663;
{ from vc2 to skullbase vertices 2 }
ColorRGBA664 := TColorRGBANode.Create;
ColorRGBA664 := ColorRGBA27;
{ .SetColor }
LineSet662.Color := ColorRGBA664;
{ .SetGeometry }
Shape661.Geometry := LineSet662;
{ .AddChildren }
HAnimSegment657.AddChildren([Shape661]);
HAnimSite665 := THAnimSiteNode.Create;
HAnimSite665.NameField := 'adams_apple';
TouchSensor666 := TTouchSensorNode.Create;
TouchSensor666.Description := 'HAnimSite 11 adams_apple';
{ .AddChildren }
HAnimSite665.AddChildren([TouchSensor666]);
Shape667 := TShapeNode.Create;
Shape667 := Shape30;
{ .AddChildren }
HAnimSite665.AddChildren([Shape667]);
Billboard668 := TBillboardNode.Create;
Shape669 := TShapeNode.Create;
Text670 := TTextNode.Create;
Text670.SetText(['11']);
FontStyle671 := TFontStyleNode.Create;
FontStyle671.Size := 0.035;
{ .SetFontStyle }
Text670.FontStyle := FontStyle671;
{ .SetGeometry }
Shape669.Geometry := Text670;
{ .AddChildren }
Billboard668.AddChildren([Shape669]);
{ .AddChildren }
HAnimSite665.AddChildren([Billboard668]);
{ .AddChildren }
HAnimSegment657.AddChildren([HAnimSite665]);
{ .AddChildren }
HAnimJoint656.AddChildren([HAnimSegment657]);
HAnimJoint672 := THAnimJointNode.Create;
HAnimJoint672.NameField := 'skullbase';
HAnimJoint672.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint672.SetUlimit([0,0,0]);
HAnimJoint672.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint656.AddChildren([HAnimJoint672]);
{ .AddChildren }
HAnimJoint647.AddChildren([HAnimJoint656]);
{ .AddChildren }
HAnimJoint602.AddChildren([HAnimJoint647]);
HAnimJoint673 := THAnimJointNode.Create;
HAnimJoint673.NameField := 'l_sternoclavicular';
HAnimJoint673.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint673.SetUlimit([0,0,0]);
HAnimJoint673.SetLlimit([0,0,0]);
HAnimSegment674 := THAnimSegmentNode.Create;
HAnimSegment674.NameField := 'l_clavicle';
Transform675 := TTransformNode.Create;
Transform675.Translation := Vector3(0.082,1.4488,-0.0353);
Transform676 := TTransformNode.Create;
{ Empty Transform }
Shape677 := TShapeNode.Create;
Shape677 := Shape20;
{ .AddChild }
Transform676.AddChildren([Shape677]);
{ .AddChildren }
Transform675.AddChildren([Transform676]);
{ .AddChildren }
HAnimSegment674.AddChildren([Transform675]);
Shape678 := TShapeNode.Create;
LineSet679 := TLineSetNode.Create;
LineSet679.SetVertexCount([2]);
Coordinate680 := TCoordinateNode.Create;
Coordinate680.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
LineSet679.Coord := Coordinate680;
{ from l_sternoclavicular to l_acromioclavicular vertices 2 }
ColorRGBA681 := TColorRGBANode.Create;
ColorRGBA681 := ColorRGBA27;
{ .SetColor }
LineSet679.Color := ColorRGBA681;
{ .SetGeometry }
Shape678.Geometry := LineSet679;
{ .AddChildren }
HAnimSegment674.AddChildren([Shape678]);
HAnimSite682 := THAnimSiteNode.Create;
HAnimSite682.NameField := 'l_acromion';
HAnimSite682.Translation := Vector3(0.2032,1.476,-0.049);
TouchSensor683 := TTouchSensorNode.Create;
TouchSensor683.Description := 'HAnimSite 15 l_acromion';
{ .AddChildren }
HAnimSite682.AddChildren([TouchSensor683]);
Shape684 := TShapeNode.Create;
Shape684 := Shape30;
{ .AddChildren }
HAnimSite682.AddChildren([Shape684]);
Billboard685 := TBillboardNode.Create;
Shape686 := TShapeNode.Create;
Text687 := TTextNode.Create;
Text687.SetText(['15']);
FontStyle688 := TFontStyleNode.Create;
FontStyle688.Size := 0.035;
{ .SetFontStyle }
Text687.FontStyle := FontStyle688;
{ .SetGeometry }
Shape686.Geometry := Text687;
{ .AddChildren }
Billboard685.AddChildren([Shape686]);
{ .AddChildren }
HAnimSite682.AddChildren([Billboard685]);
{ .AddChildren }
HAnimSegment674.AddChildren([HAnimSite682]);
HAnimSite689 := THAnimSiteNode.Create;
HAnimSite689.NameField := 'l_axilla_distal';
HAnimSite689.Translation := Vector3(0.1706,1.4072,-0.0875);
TouchSensor690 := TTouchSensorNode.Create;
TouchSensor690.Description := 'HAnimSite 17 l_axilla_distal';
{ .AddChildren }
HAnimSite689.AddChildren([TouchSensor690]);
Shape691 := TShapeNode.Create;
Shape691 := Shape30;
{ .AddChildren }
HAnimSite689.AddChildren([Shape691]);
Billboard692 := TBillboardNode.Create;
Shape693 := TShapeNode.Create;
Text694 := TTextNode.Create;
Text694.SetText(['17']);
FontStyle695 := TFontStyleNode.Create;
FontStyle695.Size := 0.035;
{ .SetFontStyle }
Text694.FontStyle := FontStyle695;
{ .SetGeometry }
Shape693.Geometry := Text694;
{ .AddChildren }
Billboard692.AddChildren([Shape693]);
{ .AddChildren }
HAnimSite689.AddChildren([Billboard692]);
{ .AddChildren }
HAnimSegment674.AddChildren([HAnimSite689]);
HAnimSite696 := THAnimSiteNode.Create;
HAnimSite696.NameField := 'l_axilla_posterior_folds';
TouchSensor697 := TTouchSensorNode.Create;
TouchSensor697.Description := 'HAnimSite 18 l_axilla_posterior_folds';
{ .AddChildren }
HAnimSite696.AddChildren([TouchSensor697]);
Shape698 := TShapeNode.Create;
Shape698 := Shape30;
{ .AddChildren }
HAnimSite696.AddChildren([Shape698]);
Billboard699 := TBillboardNode.Create;
Shape700 := TShapeNode.Create;
Text701 := TTextNode.Create;
Text701.SetText(['18']);
FontStyle702 := TFontStyleNode.Create;
FontStyle702.Size := 0.035;
{ .SetFontStyle }
Text701.FontStyle := FontStyle702;
{ .SetGeometry }
Shape700.Geometry := Text701;
{ .AddChildren }
Billboard699.AddChildren([Shape700]);
{ .AddChildren }
HAnimSite696.AddChildren([Billboard699]);
{ .AddChildren }
HAnimSegment674.AddChildren([HAnimSite696]);
HAnimSite703 := THAnimSiteNode.Create;
HAnimSite703.NameField := 'l_axilla_proximal';
HAnimSite703.Translation := Vector3(0.1777,1.4065,-0.0075);
TouchSensor704 := TTouchSensorNode.Create;
TouchSensor704.Description := 'HAnimSite 16 l_axilla_proximal';
{ .AddChildren }
HAnimSite703.AddChildren([TouchSensor704]);
Shape705 := TShapeNode.Create;
Shape705 := Shape30;
{ .AddChildren }
HAnimSite703.AddChildren([Shape705]);
Billboard706 := TBillboardNode.Create;
Shape707 := TShapeNode.Create;
Text708 := TTextNode.Create;
Text708.SetText(['16']);
FontStyle709 := TFontStyleNode.Create;
FontStyle709.Size := 0.035;
{ .SetFontStyle }
Text708.FontStyle := FontStyle709;
{ .SetGeometry }
Shape707.Geometry := Text708;
{ .AddChildren }
Billboard706.AddChildren([Shape707]);
{ .AddChildren }
HAnimSite703.AddChildren([Billboard706]);
{ .AddChildren }
HAnimSegment674.AddChildren([HAnimSite703]);
HAnimSite710 := THAnimSiteNode.Create;
HAnimSite710.NameField := 'l_clavicale';
HAnimSite710.Translation := Vector3(0.0271,1.4943,0.0394);
TouchSensor711 := TTouchSensorNode.Create;
TouchSensor711.Description := 'HAnimSite 14 l_clavicale';
{ .AddChildren }
HAnimSite710.AddChildren([TouchSensor711]);
Shape712 := TShapeNode.Create;
Shape712 := Shape30;
{ .AddChildren }
HAnimSite710.AddChildren([Shape712]);
Billboard713 := TBillboardNode.Create;
Shape714 := TShapeNode.Create;
Text715 := TTextNode.Create;
Text715.SetText(['14']);
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
HAnimSegment674.AddChildren([HAnimSite710]);
{ .AddChildren }
HAnimJoint673.AddChildren([HAnimSegment674]);
HAnimJoint717 := THAnimJointNode.Create;
HAnimJoint717.NameField := 'l_acromioclavicular';
HAnimJoint717.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint717.SetUlimit([0,0,0]);
HAnimJoint717.SetLlimit([0,0,0]);
HAnimSegment718 := THAnimSegmentNode.Create;
HAnimSegment718.NameField := 'l_scapula';
Transform719 := TTransformNode.Create;
Transform719.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform720 := TTransformNode.Create;
{ Empty Transform }
Shape721 := TShapeNode.Create;
Shape721 := Shape20;
{ .AddChild }
Transform720.AddChildren([Shape721]);
{ .AddChildren }
Transform719.AddChildren([Transform720]);
{ .AddChildren }
HAnimSegment718.AddChildren([Transform719]);
Shape722 := TShapeNode.Create;
LineSet723 := TLineSetNode.Create;
LineSet723.SetVertexCount([2]);
Coordinate724 := TCoordinateNode.Create;
Coordinate724.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ .SetCoord }
LineSet723.Coord := Coordinate724;
{ from l_acromioclavicular to l_shoulder vertices 2 }
ColorRGBA725 := TColorRGBANode.Create;
ColorRGBA725 := ColorRGBA27;
{ .SetColor }
LineSet723.Color := ColorRGBA725;
{ .SetGeometry }
Shape722.Geometry := LineSet723;
{ .AddChildren }
HAnimSegment718.AddChildren([Shape722]);
{ .AddChildren }
HAnimJoint717.AddChildren([HAnimSegment718]);
HAnimJoint726 := THAnimJointNode.Create;
HAnimJoint726.NameField := 'l_shoulder';
HAnimJoint726.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint726.SetUlimit([0,0,0]);
HAnimJoint726.SetLlimit([0,0,0]);
HAnimSegment727 := THAnimSegmentNode.Create;
HAnimSegment727.NameField := 'l_upperarm';
Transform728 := TTransformNode.Create;
Transform728.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform729 := TTransformNode.Create;
{ Empty Transform }
Shape730 := TShapeNode.Create;
Shape730 := Shape20;
{ .AddChild }
Transform729.AddChildren([Shape730]);
{ .AddChildren }
Transform728.AddChildren([Transform729]);
{ .AddChildren }
HAnimSegment727.AddChildren([Transform728]);
Shape731 := TShapeNode.Create;
LineSet732 := TLineSetNode.Create;
LineSet732.SetVertexCount([2]);
Coordinate733 := TCoordinateNode.Create;
Coordinate733.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ .SetCoord }
LineSet732.Coord := Coordinate733;
{ from l_shoulder to l_elbow vertices 2 }
ColorRGBA734 := TColorRGBANode.Create;
ColorRGBA734 := ColorRGBA27;
{ .SetColor }
LineSet732.Color := ColorRGBA734;
{ .SetGeometry }
Shape731.Geometry := LineSet732;
{ .AddChildren }
HAnimSegment727.AddChildren([Shape731]);
HAnimSite735 := THAnimSiteNode.Create;
HAnimSite735.NameField := 'l_bideltoid';
TouchSensor736 := TTouchSensorNode.Create;
TouchSensor736.Description := 'HAnimSite 96 l_bideltoid';
{ .AddChildren }
HAnimSite735.AddChildren([TouchSensor736]);
Shape737 := TShapeNode.Create;
Shape737 := Shape30;
{ .AddChildren }
HAnimSite735.AddChildren([Shape737]);
Billboard738 := TBillboardNode.Create;
Shape739 := TShapeNode.Create;
Text740 := TTextNode.Create;
Text740.SetText(['96']);
FontStyle741 := TFontStyleNode.Create;
FontStyle741.Size := 0.035;
{ .SetFontStyle }
Text740.FontStyle := FontStyle741;
{ .SetGeometry }
Shape739.Geometry := Text740;
{ .AddChildren }
Billboard738.AddChildren([Shape739]);
{ .AddChildren }
HAnimSite735.AddChildren([Billboard738]);
{ .AddChildren }
HAnimSegment727.AddChildren([HAnimSite735]);
HAnimSite742 := THAnimSiteNode.Create;
HAnimSite742.NameField := 'l_humeral_lateral_epicondyles';
HAnimSite742.Translation := Vector3(0.228,1.1482,-0.11);
TouchSensor743 := TTouchSensorNode.Create;
TouchSensor743.Description := 'HAnimSite 63 l_humeral_lateral_epicondyles';
{ .AddChildren }
HAnimSite742.AddChildren([TouchSensor743]);
Shape744 := TShapeNode.Create;
Shape744 := Shape30;
{ .AddChildren }
HAnimSite742.AddChildren([Shape744]);
Billboard745 := TBillboardNode.Create;
Shape746 := TShapeNode.Create;
Text747 := TTextNode.Create;
Text747.SetText(['63']);
FontStyle748 := TFontStyleNode.Create;
FontStyle748.Size := 0.035;
{ .SetFontStyle }
Text747.FontStyle := FontStyle748;
{ .SetGeometry }
Shape746.Geometry := Text747;
{ .AddChildren }
Billboard745.AddChildren([Shape746]);
{ .AddChildren }
HAnimSite742.AddChildren([Billboard745]);
{ .AddChildren }
HAnimSegment727.AddChildren([HAnimSite742]);
{ .AddChildren }
HAnimJoint726.AddChildren([HAnimSegment727]);
HAnimJoint749 := THAnimJointNode.Create;
HAnimJoint749.NameField := 'l_elbow';
HAnimJoint749.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint749.SetUlimit([0,0,0]);
HAnimJoint749.SetLlimit([0,0,0]);
HAnimSegment750 := THAnimSegmentNode.Create;
HAnimSegment750.NameField := 'l_forearm';
Transform751 := TTransformNode.Create;
Transform751.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform752 := TTransformNode.Create;
{ Empty Transform }
Shape753 := TShapeNode.Create;
Shape753 := Shape20;
{ .AddChild }
Transform752.AddChildren([Shape753]);
{ .AddChildren }
Transform751.AddChildren([Transform752]);
{ .AddChildren }
HAnimSegment750.AddChildren([Transform751]);
Shape754 := TShapeNode.Create;
LineSet755 := TLineSetNode.Create;
LineSet755.SetVertexCount([2]);
Coordinate756 := TCoordinateNode.Create;
Coordinate756.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ .SetCoord }
LineSet755.Coord := Coordinate756;
{ from l_elbow to l_radiocarpal vertices 2 }
ColorRGBA757 := TColorRGBANode.Create;
ColorRGBA757 := ColorRGBA27;
{ .SetColor }
LineSet755.Color := ColorRGBA757;
{ .SetGeometry }
Shape754.Geometry := LineSet755;
{ .AddChildren }
HAnimSegment750.AddChildren([Shape754]);
HAnimSite758 := THAnimSiteNode.Create;
HAnimSite758.NameField := 'l_humeral_medial_epicondyles';
HAnimSite758.Translation := Vector3(0.1735,1.1272,-0.1113);
TouchSensor759 := TTouchSensorNode.Create;
TouchSensor759.Description := 'HAnimSite 64 l_humeral_medial_epicondyles';
{ .AddChildren }
HAnimSite758.AddChildren([TouchSensor759]);
Shape760 := TShapeNode.Create;
Shape760 := Shape30;
{ .AddChildren }
HAnimSite758.AddChildren([Shape760]);
Billboard761 := TBillboardNode.Create;
Shape762 := TShapeNode.Create;
Text763 := TTextNode.Create;
Text763.SetText(['64']);
FontStyle764 := TFontStyleNode.Create;
FontStyle764.Size := 0.035;
{ .SetFontStyle }
Text763.FontStyle := FontStyle764;
{ .SetGeometry }
Shape762.Geometry := Text763;
{ .AddChildren }
Billboard761.AddChildren([Shape762]);
{ .AddChildren }
HAnimSite758.AddChildren([Billboard761]);
{ .AddChildren }
HAnimSegment750.AddChildren([HAnimSite758]);
HAnimSite765 := THAnimSiteNode.Create;
HAnimSite765.NameField := 'l_olecranon';
HAnimSite765.Translation := Vector3(-0.1962,1.1375,-0.1123);
TouchSensor766 := TTouchSensorNode.Create;
TouchSensor766.Description := 'HAnimSite 65 l_olecranon';
{ .AddChildren }
HAnimSite765.AddChildren([TouchSensor766]);
Shape767 := TShapeNode.Create;
Shape767 := Shape30;
{ .AddChildren }
HAnimSite765.AddChildren([Shape767]);
Billboard768 := TBillboardNode.Create;
Shape769 := TShapeNode.Create;
Text770 := TTextNode.Create;
Text770.SetText(['65']);
FontStyle771 := TFontStyleNode.Create;
FontStyle771.Size := 0.035;
{ .SetFontStyle }
Text770.FontStyle := FontStyle771;
{ .SetGeometry }
Shape769.Geometry := Text770;
{ .AddChildren }
Billboard768.AddChildren([Shape769]);
{ .AddChildren }
HAnimSite765.AddChildren([Billboard768]);
{ .AddChildren }
HAnimSegment750.AddChildren([HAnimSite765]);
HAnimSite772 := THAnimSiteNode.Create;
HAnimSite772.NameField := 'l_radial_styloid';
HAnimSite772.Translation := Vector3(0.1901,0.8645,-0.0415);
TouchSensor773 := TTouchSensorNode.Create;
TouchSensor773.Description := 'HAnimSite 71 l_radial_styloid';
{ .AddChildren }
HAnimSite772.AddChildren([TouchSensor773]);
Shape774 := TShapeNode.Create;
Shape774 := Shape30;
{ .AddChildren }
HAnimSite772.AddChildren([Shape774]);
Billboard775 := TBillboardNode.Create;
Shape776 := TShapeNode.Create;
Text777 := TTextNode.Create;
Text777.SetText(['71']);
FontStyle778 := TFontStyleNode.Create;
FontStyle778.Size := 0.035;
{ .SetFontStyle }
Text777.FontStyle := FontStyle778;
{ .SetGeometry }
Shape776.Geometry := Text777;
{ .AddChildren }
Billboard775.AddChildren([Shape776]);
{ .AddChildren }
HAnimSite772.AddChildren([Billboard775]);
{ .AddChildren }
HAnimSegment750.AddChildren([HAnimSite772]);
HAnimSite779 := THAnimSiteNode.Create;
HAnimSite779.NameField := 'l_radiale';
HAnimSite779.Translation := Vector3(0.2182,1.1212,-0.1167);
TouchSensor780 := TTouchSensorNode.Create;
TouchSensor780.Description := 'HAnimSite 69 l_radiale';
{ .AddChildren }
HAnimSite779.AddChildren([TouchSensor780]);
Shape781 := TShapeNode.Create;
Shape781 := Shape30;
{ .AddChildren }
HAnimSite779.AddChildren([Shape781]);
Billboard782 := TBillboardNode.Create;
Shape783 := TShapeNode.Create;
Text784 := TTextNode.Create;
Text784.SetText(['69']);
FontStyle785 := TFontStyleNode.Create;
FontStyle785.Size := 0.035;
{ .SetFontStyle }
Text784.FontStyle := FontStyle785;
{ .SetGeometry }
Shape783.Geometry := Text784;
{ .AddChildren }
Billboard782.AddChildren([Shape783]);
{ .AddChildren }
HAnimSite779.AddChildren([Billboard782]);
{ .AddChildren }
HAnimSegment750.AddChildren([HAnimSite779]);
{ .AddChildren }
HAnimJoint749.AddChildren([HAnimSegment750]);
HAnimJoint786 := THAnimJointNode.Create;
HAnimJoint786.NameField := 'l_radiocarpal';
HAnimJoint786.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint786.SetUlimit([0,0,0]);
HAnimJoint786.SetLlimit([0,0,0]);
HAnimSegment787 := THAnimSegmentNode.Create;
HAnimSegment787.NameField := 'l_carpal';
Transform788 := TTransformNode.Create;
Transform788.Scale := Vector3(0.2,0.2,0.2);
Transform788.Translation := Vector3(0.2,0.85,-0.05);
Transform788.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform789 := TTransformNode.Create;
Transform789.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
Shape790 := TShapeNode.Create;
Shape790 := Shape20;
{ .AddChild }
Transform789.AddChildren([Shape790]);
{ .AddChildren }
Transform788.AddChildren([Transform789]);
{ .AddChildren }
HAnimSegment787.AddChildren([Transform788]);
Shape791 := TShapeNode.Create;
LineSet792 := TLineSetNode.Create;
LineSet792.SetVertexCount([2]);
Coordinate793 := TCoordinateNode.Create;
Coordinate793.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1924,0.8472,-0.0534)]);
{ .SetCoord }
LineSet792.Coord := Coordinate793;
{ from l_radiocarpal to l_carpometacarpal_1 vertices 2 }
ColorRGBA794 := TColorRGBANode.Create;
ColorRGBA794 := ColorRGBA27;
{ .SetColor }
LineSet792.Color := ColorRGBA794;
{ .SetGeometry }
Shape791.Geometry := LineSet792;
{ .AddChildren }
HAnimSegment787.AddChildren([Shape791]);
HAnimSite795 := THAnimSiteNode.Create;
HAnimSite795.NameField := 'l_ulnar_styloid';
HAnimSite795.Translation := Vector3(-0.2142,0.8529,-0.0648);
TouchSensor796 := TTouchSensorNode.Create;
TouchSensor796.Description := 'HAnimSite 70 l_ulnar_styloid';
{ .AddChildren }
HAnimSite795.AddChildren([TouchSensor796]);
Shape797 := TShapeNode.Create;
Shape797 := Shape30;
{ .AddChildren }
HAnimSite795.AddChildren([Shape797]);
Billboard798 := TBillboardNode.Create;
Shape799 := TShapeNode.Create;
Text800 := TTextNode.Create;
Text800.SetText(['70']);
FontStyle801 := TFontStyleNode.Create;
FontStyle801.Size := 0.035;
{ .SetFontStyle }
Text800.FontStyle := FontStyle801;
{ .SetGeometry }
Shape799.Geometry := Text800;
{ .AddChildren }
Billboard798.AddChildren([Shape799]);
{ .AddChildren }
HAnimSite795.AddChildren([Billboard798]);
{ .AddChildren }
HAnimSegment787.AddChildren([HAnimSite795]);
Shape802 := TShapeNode.Create;
LineSet803 := TLineSetNode.Create;
LineSet803.SetVertexCount([2]);
Coordinate804 := TCoordinateNode.Create;
Coordinate804.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1983,0.8024,-0.028)]);
{ .SetCoord }
LineSet803.Coord := Coordinate804;
{ from l_radiocarpal to l_carpometacarpal_2 vertices 2 }
ColorRGBA805 := TColorRGBANode.Create;
ColorRGBA805 := ColorRGBA27;
{ .SetColor }
LineSet803.Color := ColorRGBA805;
{ .SetGeometry }
Shape802.Geometry := LineSet803;
{ .AddChildren }
HAnimSegment787.AddChildren([Shape802]);
Shape806 := TShapeNode.Create;
LineSet807 := TLineSetNode.Create;
LineSet807.SetVertexCount([2]);
Coordinate808 := TCoordinateNode.Create;
Coordinate808.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1987,0.8029,-0.053)]);
{ .SetCoord }
LineSet807.Coord := Coordinate808;
{ from l_radiocarpal to l_carpometacarpal_3 vertices 2 }
ColorRGBA809 := TColorRGBANode.Create;
ColorRGBA809 := ColorRGBA27;
{ .SetColor }
LineSet807.Color := ColorRGBA809;
{ .SetGeometry }
Shape806.Geometry := LineSet807;
{ .AddChildren }
HAnimSegment787.AddChildren([Shape806]);
Shape810 := TShapeNode.Create;
LineSet811 := TLineSetNode.Create;
LineSet811.SetVertexCount([2]);
Coordinate812 := TCoordinateNode.Create;
Coordinate812.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1956,0.8019,-0.0794)]);
{ .SetCoord }
LineSet811.Coord := Coordinate812;
{ from l_radiocarpal to l_carpometacarpal_4 vertices 2 }
ColorRGBA813 := TColorRGBANode.Create;
ColorRGBA813 := ColorRGBA27;
{ .SetColor }
LineSet811.Color := ColorRGBA813;
{ .SetGeometry }
Shape810.Geometry := LineSet811;
{ .AddChildren }
HAnimSegment787.AddChildren([Shape810]);
Shape814 := TShapeNode.Create;
LineSet815 := TLineSetNode.Create;
LineSet815.SetVertexCount([2]);
Coordinate816 := TCoordinateNode.Create;
Coordinate816.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
LineSet815.Coord := Coordinate816;
{ from l_radiocarpal to l_carpometacarpal_5 vertices 2 }
ColorRGBA817 := TColorRGBANode.Create;
ColorRGBA817 := ColorRGBA27;
{ .SetColor }
LineSet815.Color := ColorRGBA817;
{ .SetGeometry }
Shape814.Geometry := LineSet815;
{ .AddChildren }
HAnimSegment787.AddChildren([Shape814]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimSegment787]);
HAnimJoint818 := THAnimJointNode.Create;
HAnimJoint818.NameField := 'l_carpometacarpal_1';
HAnimJoint818.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint818.SetUlimit([0,0,0]);
HAnimJoint818.SetLlimit([0,0,0]);
HAnimSegment819 := THAnimSegmentNode.Create;
HAnimSegment819.NameField := 'l_metacarpal_1';
Transform820 := TTransformNode.Create;
Transform820.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform821 := TTransformNode.Create;
{ Empty Transform }
Shape822 := TShapeNode.Create;
Shape822 := Shape20;
{ .AddChild }
Transform821.AddChildren([Shape822]);
{ .AddChildren }
Transform820.AddChildren([Transform821]);
{ .AddChildren }
HAnimSegment819.AddChildren([Transform820]);
Shape823 := TShapeNode.Create;
LineSet824 := TLineSetNode.Create;
LineSet824.SetVertexCount([2]);
Coordinate825 := TCoordinateNode.Create;
Coordinate825.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
LineSet824.Coord := Coordinate825;
{ from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 }
ColorRGBA826 := TColorRGBANode.Create;
ColorRGBA826 := ColorRGBA27;
{ .SetColor }
LineSet824.Color := ColorRGBA826;
{ .SetGeometry }
Shape823.Geometry := LineSet824;
{ .AddChildren }
HAnimSegment819.AddChildren([Shape823]);
{ .AddChildren }
HAnimJoint818.AddChildren([HAnimSegment819]);
HAnimJoint827 := THAnimJointNode.Create;
HAnimJoint827.NameField := 'l_metacarpophalangeal_1';
HAnimJoint827.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint827.SetUlimit([0,0,0]);
HAnimJoint827.SetLlimit([0,0,0]);
HAnimSegment828 := THAnimSegmentNode.Create;
HAnimSegment828.NameField := 'l_carpal_proximal_phalanx_1';
Transform829 := TTransformNode.Create;
Transform829.Translation := Vector3(0.1951,0.8226,0.0246);
Transform830 := TTransformNode.Create;
{ Empty Transform }
Shape831 := TShapeNode.Create;
Shape831 := Shape20;
{ .AddChild }
Transform830.AddChildren([Shape831]);
{ .AddChildren }
Transform829.AddChildren([Transform830]);
{ .AddChildren }
HAnimSegment828.AddChildren([Transform829]);
Shape832 := TShapeNode.Create;
LineSet833 := TLineSetNode.Create;
LineSet833.SetVertexCount([2]);
Coordinate834 := TCoordinateNode.Create;
Coordinate834.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
LineSet833.Coord := Coordinate834;
{ from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 }
ColorRGBA835 := TColorRGBANode.Create;
ColorRGBA835 := ColorRGBA27;
{ .SetColor }
LineSet833.Color := ColorRGBA835;
{ .SetGeometry }
Shape832.Geometry := LineSet833;
{ .AddChildren }
HAnimSegment828.AddChildren([Shape832]);
{ .AddChildren }
HAnimJoint827.AddChildren([HAnimSegment828]);
HAnimJoint836 := THAnimJointNode.Create;
HAnimJoint836.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint836.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint836.SetUlimit([0,0,0]);
HAnimJoint836.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint827.AddChildren([HAnimJoint836]);
{ .AddChildren }
HAnimJoint818.AddChildren([HAnimJoint827]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint818]);
HAnimJoint837 := THAnimJointNode.Create;
HAnimJoint837.NameField := 'l_carpometacarpal_2';
HAnimJoint837.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint837.SetUlimit([0,0,0]);
HAnimJoint837.SetLlimit([0,0,0]);
HAnimSegment838 := THAnimSegmentNode.Create;
HAnimSegment838.NameField := 'l_metacarpal_2';
Transform839 := TTransformNode.Create;
Transform839.Translation := Vector3(0.1983,0.8024,-0.028);
Transform840 := TTransformNode.Create;
{ Empty Transform }
Shape841 := TShapeNode.Create;
Shape841 := Shape20;
{ .AddChild }
Transform840.AddChildren([Shape841]);
{ .AddChildren }
Transform839.AddChildren([Transform840]);
{ .AddChildren }
HAnimSegment838.AddChildren([Transform839]);
Shape842 := TShapeNode.Create;
LineSet843 := TLineSetNode.Create;
LineSet843.SetVertexCount([2]);
Coordinate844 := TCoordinateNode.Create;
Coordinate844.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
LineSet843.Coord := Coordinate844;
{ from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 }
ColorRGBA845 := TColorRGBANode.Create;
ColorRGBA845 := ColorRGBA27;
{ .SetColor }
LineSet843.Color := ColorRGBA845;
{ .SetGeometry }
Shape842.Geometry := LineSet843;
{ .AddChildren }
HAnimSegment838.AddChildren([Shape842]);
HAnimSite846 := THAnimSiteNode.Create;
HAnimSite846.NameField := 'l_metacarpal_phalanx_2';
HAnimSite846.Translation := Vector3(0.2009,0.8139,-0.0237);
TouchSensor847 := TTouchSensorNode.Create;
TouchSensor847.Description := 'HAnimSite 75 l_metacarpal_phalanx_2';
{ .AddChildren }
HAnimSite846.AddChildren([TouchSensor847]);
Shape848 := TShapeNode.Create;
Shape848 := Shape30;
{ .AddChildren }
HAnimSite846.AddChildren([Shape848]);
Billboard849 := TBillboardNode.Create;
Shape850 := TShapeNode.Create;
Text851 := TTextNode.Create;
Text851.SetText(['75']);
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
HAnimSegment838.AddChildren([HAnimSite846]);
{ .AddChildren }
HAnimJoint837.AddChildren([HAnimSegment838]);
HAnimJoint853 := THAnimJointNode.Create;
HAnimJoint853.NameField := 'l_metacarpophalangeal_2';
HAnimJoint853.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint853.SetUlimit([0,0,0]);
HAnimJoint853.SetLlimit([0,0,0]);
HAnimSegment854 := THAnimSegmentNode.Create;
HAnimSegment854.NameField := 'l_carpal_proximal_phalanx_2';
Transform855 := TTransformNode.Create;
Transform855.Translation := Vector3(0.1983,0.7815,-0.028);
Transform856 := TTransformNode.Create;
{ Empty Transform }
Shape857 := TShapeNode.Create;
Shape857 := Shape20;
{ .AddChild }
Transform856.AddChildren([Shape857]);
{ .AddChildren }
Transform855.AddChildren([Transform856]);
{ .AddChildren }
HAnimSegment854.AddChildren([Transform855]);
Shape858 := TShapeNode.Create;
LineSet859 := TLineSetNode.Create;
LineSet859.SetVertexCount([2]);
Coordinate860 := TCoordinateNode.Create;
Coordinate860.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
LineSet859.Coord := Coordinate860;
{ from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA861 := TColorRGBANode.Create;
ColorRGBA861 := ColorRGBA27;
{ .SetColor }
LineSet859.Color := ColorRGBA861;
{ .SetGeometry }
Shape858.Geometry := LineSet859;
{ .AddChildren }
HAnimSegment854.AddChildren([Shape858]);
{ .AddChildren }
HAnimJoint853.AddChildren([HAnimSegment854]);
HAnimJoint862 := THAnimJointNode.Create;
HAnimJoint862.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint862.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint862.SetUlimit([0,0,0]);
HAnimJoint862.SetLlimit([0,0,0]);
HAnimSegment863 := THAnimSegmentNode.Create;
HAnimSegment863.NameField := 'l_carpal_middle_phalanx_2';
Transform864 := TTransformNode.Create;
Transform864.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform865 := TTransformNode.Create;
{ Empty Transform }
Shape866 := TShapeNode.Create;
Shape866 := Shape20;
{ .AddChild }
Transform865.AddChildren([Shape866]);
{ .AddChildren }
Transform864.AddChildren([Transform865]);
{ .AddChildren }
HAnimSegment863.AddChildren([Transform864]);
Shape867 := TShapeNode.Create;
LineSet868 := TLineSetNode.Create;
LineSet868.SetVertexCount([2]);
Coordinate869 := TCoordinateNode.Create;
Coordinate869.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
LineSet868.Coord := Coordinate869;
{ from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA870 := TColorRGBANode.Create;
ColorRGBA870 := ColorRGBA27;
{ .SetColor }
LineSet868.Color := ColorRGBA870;
{ .SetGeometry }
Shape867.Geometry := LineSet868;
{ .AddChildren }
HAnimSegment863.AddChildren([Shape867]);
{ .AddChildren }
HAnimJoint862.AddChildren([HAnimSegment863]);
HAnimJoint871 := THAnimJointNode.Create;
HAnimJoint871.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint871.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint871.SetUlimit([0,0,0]);
HAnimJoint871.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint862.AddChildren([HAnimJoint871]);
{ .AddChildren }
HAnimJoint853.AddChildren([HAnimJoint862]);
{ .AddChildren }
HAnimJoint837.AddChildren([HAnimJoint853]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint837]);
HAnimJoint872 := THAnimJointNode.Create;
HAnimJoint872.NameField := 'l_carpometacarpal_3';
HAnimJoint872.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint872.SetUlimit([0,0,0]);
HAnimJoint872.SetLlimit([0,0,0]);
HAnimSegment873 := THAnimSegmentNode.Create;
HAnimSegment873.NameField := 'l_metacarpal_3';
Transform874 := TTransformNode.Create;
Transform874.Translation := Vector3(0.1987,0.8029,-0.053);
Transform875 := TTransformNode.Create;
{ Empty Transform }
Shape876 := TShapeNode.Create;
Shape876 := Shape20;
{ .AddChild }
Transform875.AddChildren([Shape876]);
{ .AddChildren }
Transform874.AddChildren([Transform875]);
{ .AddChildren }
HAnimSegment873.AddChildren([Transform874]);
Shape877 := TShapeNode.Create;
LineSet878 := TLineSetNode.Create;
LineSet878.SetVertexCount([2]);
Coordinate879 := TCoordinateNode.Create;
Coordinate879.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
LineSet878.Coord := Coordinate879;
{ from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 }
ColorRGBA880 := TColorRGBANode.Create;
ColorRGBA880 := ColorRGBA27;
{ .SetColor }
LineSet878.Color := ColorRGBA880;
{ .SetGeometry }
Shape877.Geometry := LineSet878;
{ .AddChildren }
HAnimSegment873.AddChildren([Shape877]);
HAnimSite881 := THAnimSiteNode.Create;
HAnimSite881.NameField := 'l_metacarpal_phalanx_3';
TouchSensor882 := TTouchSensorNode.Create;
TouchSensor882.Description := 'HAnimSite 76 l_metacarpal_phalanx_3';
{ .AddChildren }
HAnimSite881.AddChildren([TouchSensor882]);
Shape883 := TShapeNode.Create;
Shape883 := Shape30;
{ .AddChildren }
HAnimSite881.AddChildren([Shape883]);
Billboard884 := TBillboardNode.Create;
Shape885 := TShapeNode.Create;
Text886 := TTextNode.Create;
Text886.SetText(['76']);
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
HAnimSegment873.AddChildren([HAnimSite881]);
{ .AddChildren }
HAnimJoint872.AddChildren([HAnimSegment873]);
HAnimJoint888 := THAnimJointNode.Create;
HAnimJoint888.NameField := 'l_metacarpophalangeal_3';
HAnimJoint888.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint888.SetUlimit([0,0,0]);
HAnimJoint888.SetLlimit([0,0,0]);
HAnimSegment889 := THAnimSegmentNode.Create;
HAnimSegment889.NameField := 'l_carpal_proximal_phalanx_3';
Transform890 := TTransformNode.Create;
Transform890.Translation := Vector3(0.1987,0.7818,-0.053);
Transform891 := TTransformNode.Create;
{ Empty Transform }
Shape892 := TShapeNode.Create;
Shape892 := Shape20;
{ .AddChild }
Transform891.AddChildren([Shape892]);
{ .AddChildren }
Transform890.AddChildren([Transform891]);
{ .AddChildren }
HAnimSegment889.AddChildren([Transform890]);
Shape893 := TShapeNode.Create;
LineSet894 := TLineSetNode.Create;
LineSet894.SetVertexCount([2]);
Coordinate895 := TCoordinateNode.Create;
Coordinate895.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
LineSet894.Coord := Coordinate895;
{ from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 }
ColorRGBA896 := TColorRGBANode.Create;
ColorRGBA896 := ColorRGBA27;
{ .SetColor }
LineSet894.Color := ColorRGBA896;
{ .SetGeometry }
Shape893.Geometry := LineSet894;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape893]);
{ .AddChildren }
HAnimJoint888.AddChildren([HAnimSegment889]);
HAnimJoint897 := THAnimJointNode.Create;
HAnimJoint897.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint897.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint897.SetUlimit([0,0,0]);
HAnimJoint897.SetLlimit([0,0,0]);
HAnimSegment898 := THAnimSegmentNode.Create;
HAnimSegment898.NameField := 'l_carpal_middle_phalanx_3';
Transform899 := TTransformNode.Create;
Transform899.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform900 := TTransformNode.Create;
{ Empty Transform }
Shape901 := TShapeNode.Create;
Shape901 := Shape20;
{ .AddChild }
Transform900.AddChildren([Shape901]);
{ .AddChildren }
Transform899.AddChildren([Transform900]);
{ .AddChildren }
HAnimSegment898.AddChildren([Transform899]);
Shape902 := TShapeNode.Create;
LineSet903 := TLineSetNode.Create;
LineSet903.SetVertexCount([2]);
Coordinate904 := TCoordinateNode.Create;
Coordinate904.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
LineSet903.Coord := Coordinate904;
{ from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA905 := TColorRGBANode.Create;
ColorRGBA905 := ColorRGBA27;
{ .SetColor }
LineSet903.Color := ColorRGBA905;
{ .SetGeometry }
Shape902.Geometry := LineSet903;
{ .AddChildren }
HAnimSegment898.AddChildren([Shape902]);
{ .AddChildren }
HAnimJoint897.AddChildren([HAnimSegment898]);
HAnimJoint906 := THAnimJointNode.Create;
HAnimJoint906.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint906.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint906.SetUlimit([0,0,0]);
HAnimJoint906.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint897.AddChildren([HAnimJoint906]);
{ .AddChildren }
HAnimJoint888.AddChildren([HAnimJoint897]);
{ .AddChildren }
HAnimJoint872.AddChildren([HAnimJoint888]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint872]);
HAnimJoint907 := THAnimJointNode.Create;
HAnimJoint907.NameField := 'l_carpometacarpal_4';
HAnimJoint907.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint907.SetUlimit([0,0,0]);
HAnimJoint907.SetLlimit([0,0,0]);
HAnimSegment908 := THAnimSegmentNode.Create;
HAnimSegment908.NameField := 'l_metacarpal_4';
Transform909 := TTransformNode.Create;
Transform909.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform910 := TTransformNode.Create;
{ Empty Transform }
Shape911 := TShapeNode.Create;
Shape911 := Shape20;
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
Coordinate914.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
LineSet913.Coord := Coordinate914;
{ from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 }
ColorRGBA915 := TColorRGBANode.Create;
ColorRGBA915 := ColorRGBA27;
{ .SetColor }
LineSet913.Color := ColorRGBA915;
{ .SetGeometry }
Shape912.Geometry := LineSet913;
{ .AddChildren }
HAnimSegment908.AddChildren([Shape912]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimSegment908]);
HAnimJoint916 := THAnimJointNode.Create;
HAnimJoint916.NameField := 'l_metacarpophalangeal_4';
HAnimJoint916.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint916.SetUlimit([0,0,0]);
HAnimJoint916.SetLlimit([0,0,0]);
HAnimSegment917 := THAnimSegmentNode.Create;
HAnimSegment917.NameField := 'l_carpal_proximal_phalanx_4';
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform919 := TTransformNode.Create;
{ Empty Transform }
Shape920 := TShapeNode.Create;
Shape920 := Shape20;
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
Coordinate923.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
LineSet922.Coord := Coordinate923;
{ from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA924 := TColorRGBANode.Create;
ColorRGBA924 := ColorRGBA27;
{ .SetColor }
LineSet922.Color := ColorRGBA924;
{ .SetGeometry }
Shape921.Geometry := LineSet922;
{ .AddChildren }
HAnimSegment917.AddChildren([Shape921]);
{ .AddChildren }
HAnimJoint916.AddChildren([HAnimSegment917]);
HAnimJoint925 := THAnimJointNode.Create;
HAnimJoint925.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint925.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint925.SetUlimit([0,0,0]);
HAnimJoint925.SetLlimit([0,0,0]);
HAnimSegment926 := THAnimSegmentNode.Create;
HAnimSegment926.NameField := 'l_carpal_middle_phalanx_4';
Transform927 := TTransformNode.Create;
Transform927.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform928 := TTransformNode.Create;
{ Empty Transform }
Shape929 := TShapeNode.Create;
Shape929 := Shape20;
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
Coordinate932.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
LineSet931.Coord := Coordinate932;
{ from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA933 := TColorRGBANode.Create;
ColorRGBA933 := ColorRGBA27;
{ .SetColor }
LineSet931.Color := ColorRGBA933;
{ .SetGeometry }
Shape930.Geometry := LineSet931;
{ .AddChildren }
HAnimSegment926.AddChildren([Shape930]);
{ .AddChildren }
HAnimJoint925.AddChildren([HAnimSegment926]);
HAnimJoint934 := THAnimJointNode.Create;
HAnimJoint934.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint934.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint934.SetUlimit([0,0,0]);
HAnimJoint934.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint925.AddChildren([HAnimJoint934]);
{ .AddChildren }
HAnimJoint916.AddChildren([HAnimJoint925]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimJoint916]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint907]);
HAnimJoint935 := THAnimJointNode.Create;
HAnimJoint935.NameField := 'l_carpometacarpal_5';
HAnimJoint935.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint935.SetUlimit([0,0,0]);
HAnimJoint935.SetLlimit([0,0,0]);
HAnimSegment936 := THAnimSegmentNode.Create;
HAnimSegment936.NameField := 'l_metacarpal_5';
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform938 := TTransformNode.Create;
{ Empty Transform }
Shape939 := TShapeNode.Create;
Shape939 := Shape20;
{ .AddChild }
Transform938.AddChildren([Shape939]);
{ .AddChildren }
Transform937.AddChildren([Transform938]);
{ .AddChildren }
HAnimSegment936.AddChildren([Transform937]);
Shape940 := TShapeNode.Create;
LineSet941 := TLineSetNode.Create;
LineSet941.SetVertexCount([2]);
Coordinate942 := TCoordinateNode.Create;
Coordinate942.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
LineSet941.Coord := Coordinate942;
{ from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 }
ColorRGBA943 := TColorRGBANode.Create;
ColorRGBA943 := ColorRGBA27;
{ .SetColor }
LineSet941.Color := ColorRGBA943;
{ .SetGeometry }
Shape940.Geometry := LineSet941;
{ .AddChildren }
HAnimSegment936.AddChildren([Shape940]);
HAnimSite944 := THAnimSiteNode.Create;
HAnimSite944.NameField := 'l_metacarpal_phalanx_5';
HAnimSite944.Translation := Vector3(0.1929,0.786,-0.1122);
TouchSensor945 := TTouchSensorNode.Create;
TouchSensor945.Description := 'HAnimSite 77 l_metacarpal_phalanx_5';
{ .AddChildren }
HAnimSite944.AddChildren([TouchSensor945]);
Shape946 := TShapeNode.Create;
Shape946 := Shape30;
{ .AddChildren }
HAnimSite944.AddChildren([Shape946]);
Billboard947 := TBillboardNode.Create;
Shape948 := TShapeNode.Create;
Text949 := TTextNode.Create;
Text949.SetText(['77']);
FontStyle950 := TFontStyleNode.Create;
FontStyle950.Size := 0.035;
{ .SetFontStyle }
Text949.FontStyle := FontStyle950;
{ .SetGeometry }
Shape948.Geometry := Text949;
{ .AddChildren }
Billboard947.AddChildren([Shape948]);
{ .AddChildren }
HAnimSite944.AddChildren([Billboard947]);
{ .AddChildren }
HAnimSegment936.AddChildren([HAnimSite944]);
{ .AddChildren }
HAnimJoint935.AddChildren([HAnimSegment936]);
HAnimJoint951 := THAnimJointNode.Create;
HAnimJoint951.NameField := 'l_metacarpophalangeal_5';
HAnimJoint951.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint951.SetUlimit([0,0,0]);
HAnimJoint951.SetLlimit([0,0,0]);
HAnimSegment952 := THAnimSegmentNode.Create;
HAnimSegment952.NameField := 'l_carpal_proximal_phalanx_5';
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform954 := TTransformNode.Create;
{ Empty Transform }
Shape955 := TShapeNode.Create;
Shape955 := Shape20;
{ .AddChild }
Transform954.AddChildren([Shape955]);
{ .AddChildren }
Transform953.AddChildren([Transform954]);
{ .AddChildren }
HAnimSegment952.AddChildren([Transform953]);
Shape956 := TShapeNode.Create;
LineSet957 := TLineSetNode.Create;
LineSet957.SetVertexCount([2]);
Coordinate958 := TCoordinateNode.Create;
Coordinate958.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
LineSet957.Coord := Coordinate958;
{ from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA959 := TColorRGBANode.Create;
ColorRGBA959 := ColorRGBA27;
{ .SetColor }
LineSet957.Color := ColorRGBA959;
{ .SetGeometry }
Shape956.Geometry := LineSet957;
{ .AddChildren }
HAnimSegment952.AddChildren([Shape956]);
{ .AddChildren }
HAnimJoint951.AddChildren([HAnimSegment952]);
HAnimJoint960 := THAnimJointNode.Create;
HAnimJoint960.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint960.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint960.SetUlimit([0,0,0]);
HAnimJoint960.SetLlimit([0,0,0]);
HAnimSegment961 := THAnimSegmentNode.Create;
HAnimSegment961.NameField := 'l_carpal_middle_phalanx_5';
Transform962 := TTransformNode.Create;
Transform962.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform963 := TTransformNode.Create;
{ Empty Transform }
Shape964 := TShapeNode.Create;
Shape964 := Shape20;
{ .AddChild }
Transform963.AddChildren([Shape964]);
{ .AddChildren }
Transform962.AddChildren([Transform963]);
{ .AddChildren }
HAnimSegment961.AddChildren([Transform962]);
Shape965 := TShapeNode.Create;
LineSet966 := TLineSetNode.Create;
LineSet966.SetVertexCount([2]);
Coordinate967 := TCoordinateNode.Create;
Coordinate967.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
LineSet966.Coord := Coordinate967;
{ from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA968 := TColorRGBANode.Create;
ColorRGBA968 := ColorRGBA27;
{ .SetColor }
LineSet966.Color := ColorRGBA968;
{ .SetGeometry }
Shape965.Geometry := LineSet966;
{ .AddChildren }
HAnimSegment961.AddChildren([Shape965]);
{ .AddChildren }
HAnimJoint960.AddChildren([HAnimSegment961]);
HAnimJoint969 := THAnimJointNode.Create;
HAnimJoint969.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint969.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint969.SetUlimit([0,0,0]);
HAnimJoint969.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint960.AddChildren([HAnimJoint969]);
{ .AddChildren }
HAnimJoint951.AddChildren([HAnimJoint960]);
{ .AddChildren }
HAnimJoint935.AddChildren([HAnimJoint951]);
{ .AddChildren }
HAnimJoint786.AddChildren([HAnimJoint935]);
{ .AddChildren }
HAnimJoint749.AddChildren([HAnimJoint786]);
{ .AddChildren }
HAnimJoint726.AddChildren([HAnimJoint749]);
{ .AddChildren }
HAnimJoint717.AddChildren([HAnimJoint726]);
{ .AddChildren }
HAnimJoint673.AddChildren([HAnimJoint717]);
{ .AddChildren }
HAnimJoint602.AddChildren([HAnimJoint673]);
HAnimJoint970 := THAnimJointNode.Create;
HAnimJoint970.NameField := 'r_sternoclavicular';
HAnimJoint970.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint970.SetUlimit([0,0,0]);
HAnimJoint970.SetLlimit([0,0,0]);
HAnimSegment971 := THAnimSegmentNode.Create;
HAnimSegment971.NameField := 'r_clavicle';
Transform972 := TTransformNode.Create;
Transform972.Translation := Vector3(-0.0694,1.46,-0.033);
Transform973 := TTransformNode.Create;
{ Empty Transform }
Shape974 := TShapeNode.Create;
Shape974 := Shape20;
{ .AddChild }
Transform973.AddChildren([Shape974]);
{ .AddChildren }
Transform972.AddChildren([Transform973]);
{ .AddChildren }
HAnimSegment971.AddChildren([Transform972]);
Shape975 := TShapeNode.Create;
LineSet976 := TLineSetNode.Create;
LineSet976.SetVertexCount([2]);
Coordinate977 := TCoordinateNode.Create;
Coordinate977.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ .SetCoord }
LineSet976.Coord := Coordinate977;
{ from r_sternoclavicular to r_acromioclavicular vertices 2 }
ColorRGBA978 := TColorRGBANode.Create;
ColorRGBA978 := ColorRGBA27;
{ .SetColor }
LineSet976.Color := ColorRGBA978;
{ .SetGeometry }
Shape975.Geometry := LineSet976;
{ .AddChildren }
HAnimSegment971.AddChildren([Shape975]);
HAnimSite979 := THAnimSiteNode.Create;
HAnimSite979.NameField := 'r_acromion';
HAnimSite979.Translation := Vector3(-0.1905,1.4791,-0.0431);
TouchSensor980 := TTouchSensorNode.Create;
TouchSensor980.Description := 'HAnimSite 20 r_acromion';
{ .AddChildren }
HAnimSite979.AddChildren([TouchSensor980]);
Shape981 := TShapeNode.Create;
Shape981 := Shape30;
{ .AddChildren }
HAnimSite979.AddChildren([Shape981]);
Billboard982 := TBillboardNode.Create;
Shape983 := TShapeNode.Create;
Text984 := TTextNode.Create;
Text984.SetText(['20']);
FontStyle985 := TFontStyleNode.Create;
FontStyle985.Size := 0.035;
{ .SetFontStyle }
Text984.FontStyle := FontStyle985;
{ .SetGeometry }
Shape983.Geometry := Text984;
{ .AddChildren }
Billboard982.AddChildren([Shape983]);
{ .AddChildren }
HAnimSite979.AddChildren([Billboard982]);
{ .AddChildren }
HAnimSegment971.AddChildren([HAnimSite979]);
HAnimSite986 := THAnimSiteNode.Create;
HAnimSite986.NameField := 'r_axilla_distal';
HAnimSite986.Translation := Vector3(-0.1603,1.4098,-0.0826);
TouchSensor987 := TTouchSensorNode.Create;
TouchSensor987.Description := 'HAnimSite 22 r_axilla_distal';
{ .AddChildren }
HAnimSite986.AddChildren([TouchSensor987]);
Shape988 := TShapeNode.Create;
Shape988 := Shape30;
{ .AddChildren }
HAnimSite986.AddChildren([Shape988]);
Billboard989 := TBillboardNode.Create;
Shape990 := TShapeNode.Create;
Text991 := TTextNode.Create;
Text991.SetText(['22']);
FontStyle992 := TFontStyleNode.Create;
FontStyle992.Size := 0.035;
{ .SetFontStyle }
Text991.FontStyle := FontStyle992;
{ .SetGeometry }
Shape990.Geometry := Text991;
{ .AddChildren }
Billboard989.AddChildren([Shape990]);
{ .AddChildren }
HAnimSite986.AddChildren([Billboard989]);
{ .AddChildren }
HAnimSegment971.AddChildren([HAnimSite986]);
HAnimSite993 := THAnimSiteNode.Create;
HAnimSite993.NameField := 'r_axilla_posterior_folds';
TouchSensor994 := TTouchSensorNode.Create;
TouchSensor994.Description := 'HAnimSite 23 r_axilla_posterior_folds';
{ .AddChildren }
HAnimSite993.AddChildren([TouchSensor994]);
Shape995 := TShapeNode.Create;
Shape995 := Shape30;
{ .AddChildren }
HAnimSite993.AddChildren([Shape995]);
Billboard996 := TBillboardNode.Create;
Shape997 := TShapeNode.Create;
Text998 := TTextNode.Create;
Text998.SetText(['23']);
FontStyle999 := TFontStyleNode.Create;
FontStyle999.Size := 0.035;
{ .SetFontStyle }
Text998.FontStyle := FontStyle999;
{ .SetGeometry }
Shape997.Geometry := Text998;
{ .AddChildren }
Billboard996.AddChildren([Shape997]);
{ .AddChildren }
HAnimSite993.AddChildren([Billboard996]);
{ .AddChildren }
HAnimSegment971.AddChildren([HAnimSite993]);
HAnimSite1000 := THAnimSiteNode.Create;
HAnimSite1000.NameField := 'r_axilla_proximal';
HAnimSite1000.Translation := Vector3(-0.1626,1.4072,-0.0031);
TouchSensor1001 := TTouchSensorNode.Create;
TouchSensor1001.Description := 'HAnimSite 21 r_axilla_proximal';
{ .AddChildren }
HAnimSite1000.AddChildren([TouchSensor1001]);
Shape1002 := TShapeNode.Create;
Shape1002 := Shape30;
{ .AddChildren }
HAnimSite1000.AddChildren([Shape1002]);
Billboard1003 := TBillboardNode.Create;
Shape1004 := TShapeNode.Create;
Text1005 := TTextNode.Create;
Text1005.SetText(['21']);
FontStyle1006 := TFontStyleNode.Create;
FontStyle1006.Size := 0.035;
{ .SetFontStyle }
Text1005.FontStyle := FontStyle1006;
{ .SetGeometry }
Shape1004.Geometry := Text1005;
{ .AddChildren }
Billboard1003.AddChildren([Shape1004]);
{ .AddChildren }
HAnimSite1000.AddChildren([Billboard1003]);
{ .AddChildren }
HAnimSegment971.AddChildren([HAnimSite1000]);
HAnimSite1007 := THAnimSiteNode.Create;
HAnimSite1007.NameField := 'r_clavicale';
HAnimSite1007.Translation := Vector3(-0.0115,1.4943,0.04);
TouchSensor1008 := TTouchSensorNode.Create;
TouchSensor1008.Description := 'HAnimSite 19 r_clavicale';
{ .AddChildren }
HAnimSite1007.AddChildren([TouchSensor1008]);
Shape1009 := TShapeNode.Create;
Shape1009 := Shape30;
{ .AddChildren }
HAnimSite1007.AddChildren([Shape1009]);
Billboard1010 := TBillboardNode.Create;
Shape1011 := TShapeNode.Create;
Text1012 := TTextNode.Create;
Text1012.SetText(['19']);
FontStyle1013 := TFontStyleNode.Create;
FontStyle1013.Size := 0.035;
{ .SetFontStyle }
Text1012.FontStyle := FontStyle1013;
{ .SetGeometry }
Shape1011.Geometry := Text1012;
{ .AddChildren }
Billboard1010.AddChildren([Shape1011]);
{ .AddChildren }
HAnimSite1007.AddChildren([Billboard1010]);
{ .AddChildren }
HAnimSegment971.AddChildren([HAnimSite1007]);
{ .AddChildren }
HAnimJoint970.AddChildren([HAnimSegment971]);
HAnimJoint1014 := THAnimJointNode.Create;
HAnimJoint1014.NameField := 'r_acromioclavicular';
HAnimJoint1014.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint1014.SetUlimit([0,0,0]);
HAnimJoint1014.SetLlimit([0,0,0]);
HAnimSegment1015 := THAnimSegmentNode.Create;
HAnimSegment1015.NameField := 'r_scapula';
Transform1016 := TTransformNode.Create;
Transform1016.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1017 := TTransformNode.Create;
{ Empty Transform }
Shape1018 := TShapeNode.Create;
Shape1018 := Shape20;
{ .AddChild }
Transform1017.AddChildren([Shape1018]);
{ .AddChildren }
Transform1016.AddChildren([Transform1017]);
{ .AddChildren }
HAnimSegment1015.AddChildren([Transform1016]);
Shape1019 := TShapeNode.Create;
LineSet1020 := TLineSetNode.Create;
LineSet1020.SetVertexCount([2]);
Coordinate1021 := TCoordinateNode.Create;
Coordinate1021.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ .SetCoord }
LineSet1020.Coord := Coordinate1021;
{ from r_acromioclavicular to r_shoulder vertices 2 }
ColorRGBA1022 := TColorRGBANode.Create;
ColorRGBA1022 := ColorRGBA27;
{ .SetColor }
LineSet1020.Color := ColorRGBA1022;
{ .SetGeometry }
Shape1019.Geometry := LineSet1020;
{ .AddChildren }
HAnimSegment1015.AddChildren([Shape1019]);
{ .AddChildren }
HAnimJoint1014.AddChildren([HAnimSegment1015]);
HAnimJoint1023 := THAnimJointNode.Create;
HAnimJoint1023.NameField := 'r_shoulder';
HAnimJoint1023.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint1023.SetUlimit([0,0,0]);
HAnimJoint1023.SetLlimit([0,0,0]);
HAnimSegment1024 := THAnimSegmentNode.Create;
HAnimSegment1024.NameField := 'r_upperarm';
Transform1025 := TTransformNode.Create;
Transform1025.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1026 := TTransformNode.Create;
{ Empty Transform }
Shape1027 := TShapeNode.Create;
Shape1027 := Shape20;
{ .AddChild }
Transform1026.AddChildren([Shape1027]);
{ .AddChildren }
Transform1025.AddChildren([Transform1026]);
{ .AddChildren }
HAnimSegment1024.AddChildren([Transform1025]);
Shape1028 := TShapeNode.Create;
LineSet1029 := TLineSetNode.Create;
LineSet1029.SetVertexCount([2]);
Coordinate1030 := TCoordinateNode.Create;
Coordinate1030.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ .SetCoord }
LineSet1029.Coord := Coordinate1030;
{ from r_shoulder to r_elbow vertices 2 }
ColorRGBA1031 := TColorRGBANode.Create;
ColorRGBA1031 := ColorRGBA27;
{ .SetColor }
LineSet1029.Color := ColorRGBA1031;
{ .SetGeometry }
Shape1028.Geometry := LineSet1029;
{ .AddChildren }
HAnimSegment1024.AddChildren([Shape1028]);
HAnimSite1032 := THAnimSiteNode.Create;
HAnimSite1032.NameField := 'r_bideltoid';
TouchSensor1033 := TTouchSensorNode.Create;
TouchSensor1033.Description := 'HAnimSite 97 r_bideltoid';
{ .AddChildren }
HAnimSite1032.AddChildren([TouchSensor1033]);
Shape1034 := TShapeNode.Create;
Shape1034 := Shape30;
{ .AddChildren }
HAnimSite1032.AddChildren([Shape1034]);
Billboard1035 := TBillboardNode.Create;
Shape1036 := TShapeNode.Create;
Text1037 := TTextNode.Create;
Text1037.SetText(['97']);
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
HAnimSegment1024.AddChildren([HAnimSite1032]);
HAnimSite1039 := THAnimSiteNode.Create;
HAnimSite1039.NameField := 'r_humeral_lateral_epicondyles';
HAnimSite1039.Translation := Vector3(-0.2224,1.1517,-0.1033);
TouchSensor1040 := TTouchSensorNode.Create;
TouchSensor1040.Description := 'HAnimSite 66 r_humeral_lateral_epicondyles';
{ .AddChildren }
HAnimSite1039.AddChildren([TouchSensor1040]);
Shape1041 := TShapeNode.Create;
Shape1041 := Shape30;
{ .AddChildren }
HAnimSite1039.AddChildren([Shape1041]);
Billboard1042 := TBillboardNode.Create;
Shape1043 := TShapeNode.Create;
Text1044 := TTextNode.Create;
Text1044.SetText(['66']);
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
HAnimSegment1024.AddChildren([HAnimSite1039]);
{ .AddChildren }
HAnimJoint1023.AddChildren([HAnimSegment1024]);
HAnimJoint1046 := THAnimJointNode.Create;
HAnimJoint1046.NameField := 'r_elbow';
HAnimJoint1046.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint1046.SetUlimit([0,0,0]);
HAnimJoint1046.SetLlimit([0,0,0]);
HAnimSegment1047 := THAnimSegmentNode.Create;
HAnimSegment1047.NameField := 'r_forearm';
Transform1048 := TTransformNode.Create;
Transform1048.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1049 := TTransformNode.Create;
{ Empty Transform }
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
Coordinate1053.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ .SetCoord }
LineSet1052.Coord := Coordinate1053;
{ from r_elbow to r_radiocarpal vertices 2 }
ColorRGBA1054 := TColorRGBANode.Create;
ColorRGBA1054 := ColorRGBA27;
{ .SetColor }
LineSet1052.Color := ColorRGBA1054;
{ .SetGeometry }
Shape1051.Geometry := LineSet1052;
{ .AddChildren }
HAnimSegment1047.AddChildren([Shape1051]);
HAnimSite1055 := THAnimSiteNode.Create;
HAnimSite1055.NameField := 'r_humeral_medial_epicondyles';
HAnimSite1055.Translation := Vector3(-0.168,1.1298,-0.1062);
TouchSensor1056 := TTouchSensorNode.Create;
TouchSensor1056.Description := 'HAnimSite 67 r_humeral_medial_epicondyles';
{ .AddChildren }
HAnimSite1055.AddChildren([TouchSensor1056]);
Shape1057 := TShapeNode.Create;
Shape1057 := Shape30;
{ .AddChildren }
HAnimSite1055.AddChildren([Shape1057]);
Billboard1058 := TBillboardNode.Create;
Shape1059 := TShapeNode.Create;
Text1060 := TTextNode.Create;
Text1060.SetText(['67']);
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
HAnimSite1062 := THAnimSiteNode.Create;
HAnimSite1062.NameField := 'r_olecranon';
HAnimSite1062.Translation := Vector3(-0.1907,1.1405,-0.1065);
TouchSensor1063 := TTouchSensorNode.Create;
TouchSensor1063.Description := 'HAnimSite 68 r_olecranon';
{ .AddChildren }
HAnimSite1062.AddChildren([TouchSensor1063]);
Shape1064 := TShapeNode.Create;
Shape1064 := Shape30;
{ .AddChildren }
HAnimSite1062.AddChildren([Shape1064]);
Billboard1065 := TBillboardNode.Create;
Shape1066 := TShapeNode.Create;
Text1067 := TTextNode.Create;
Text1067.SetText(['68']);
FontStyle1068 := TFontStyleNode.Create;
FontStyle1068.Size := 0.035;
{ .SetFontStyle }
Text1067.FontStyle := FontStyle1068;
{ .SetGeometry }
Shape1066.Geometry := Text1067;
{ .AddChildren }
Billboard1065.AddChildren([Shape1066]);
{ .AddChildren }
HAnimSite1062.AddChildren([Billboard1065]);
{ .AddChildren }
HAnimSegment1047.AddChildren([HAnimSite1062]);
HAnimSite1069 := THAnimSiteNode.Create;
HAnimSite1069.NameField := 'r_radial_styloid';
HAnimSite1069.Translation := Vector3(-0.1884,0.8676,-0.036);
TouchSensor1070 := TTouchSensorNode.Create;
TouchSensor1070.Description := 'HAnimSite 74 r_radial_styloid';
{ .AddChildren }
HAnimSite1069.AddChildren([TouchSensor1070]);
Shape1071 := TShapeNode.Create;
Shape1071 := Shape30;
{ .AddChildren }
HAnimSite1069.AddChildren([Shape1071]);
Billboard1072 := TBillboardNode.Create;
Shape1073 := TShapeNode.Create;
Text1074 := TTextNode.Create;
Text1074.SetText(['74']);
FontStyle1075 := TFontStyleNode.Create;
FontStyle1075.Size := 0.035;
{ .SetFontStyle }
Text1074.FontStyle := FontStyle1075;
{ .SetGeometry }
Shape1073.Geometry := Text1074;
{ .AddChildren }
Billboard1072.AddChildren([Shape1073]);
{ .AddChildren }
HAnimSite1069.AddChildren([Billboard1072]);
{ .AddChildren }
HAnimSegment1047.AddChildren([HAnimSite1069]);
HAnimSite1076 := THAnimSiteNode.Create;
HAnimSite1076.NameField := 'r_radiale';
HAnimSite1076.Translation := Vector3(-0.213,1.1305,-0.1091);
TouchSensor1077 := TTouchSensorNode.Create;
TouchSensor1077.Description := 'HAnimSite 72 r_radiale';
{ .AddChildren }
HAnimSite1076.AddChildren([TouchSensor1077]);
Shape1078 := TShapeNode.Create;
Shape1078 := Shape30;
{ .AddChildren }
HAnimSite1076.AddChildren([Shape1078]);
Billboard1079 := TBillboardNode.Create;
Shape1080 := TShapeNode.Create;
Text1081 := TTextNode.Create;
Text1081.SetText(['72']);
FontStyle1082 := TFontStyleNode.Create;
FontStyle1082.Size := 0.035;
{ .SetFontStyle }
Text1081.FontStyle := FontStyle1082;
{ .SetGeometry }
Shape1080.Geometry := Text1081;
{ .AddChildren }
Billboard1079.AddChildren([Shape1080]);
{ .AddChildren }
HAnimSite1076.AddChildren([Billboard1079]);
{ .AddChildren }
HAnimSegment1047.AddChildren([HAnimSite1076]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimSegment1047]);
HAnimJoint1083 := THAnimJointNode.Create;
HAnimJoint1083.NameField := 'r_radiocarpal';
HAnimJoint1083.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint1083.SetUlimit([0,0,0]);
HAnimJoint1083.SetLlimit([0,0,0]);
HAnimSegment1084 := THAnimSegmentNode.Create;
HAnimSegment1084.NameField := 'r_carpal';
Transform1085 := TTransformNode.Create;
Transform1085.Scale := Vector3(0.2,0.2,0.2);
Transform1085.Translation := Vector3(-0.2,0.85,-0.05);
Transform1085.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1086 := TTransformNode.Create;
Transform1086.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
Shape1087 := TShapeNode.Create;
Shape1087 := Shape20;
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
Coordinate1090.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1899,0.8502,-0.0473)]);
{ .SetCoord }
LineSet1089.Coord := Coordinate1090;
{ from r_radiocarpal to r_carpometacarpal_1 vertices 2 }
ColorRGBA1091 := TColorRGBANode.Create;
ColorRGBA1091 := ColorRGBA27;
{ .SetColor }
LineSet1089.Color := ColorRGBA1091;
{ .SetGeometry }
Shape1088.Geometry := LineSet1089;
{ .AddChildren }
HAnimSegment1084.AddChildren([Shape1088]);
HAnimSite1092 := THAnimSiteNode.Create;
HAnimSite1092.NameField := 'r_ulnar_styloid';
HAnimSite1092.Translation := Vector3(-0.2117,0.8562,-0.0584);
TouchSensor1093 := TTouchSensorNode.Create;
TouchSensor1093.Description := 'HAnimSite 73 r_ulnar_styloid';
{ .AddChildren }
HAnimSite1092.AddChildren([TouchSensor1093]);
Shape1094 := TShapeNode.Create;
Shape1094 := Shape30;
{ .AddChildren }
HAnimSite1092.AddChildren([Shape1094]);
Billboard1095 := TBillboardNode.Create;
Shape1096 := TShapeNode.Create;
Text1097 := TTextNode.Create;
Text1097.SetText(['73']);
FontStyle1098 := TFontStyleNode.Create;
FontStyle1098.Size := 0.035;
{ .SetFontStyle }
Text1097.FontStyle := FontStyle1098;
{ .SetGeometry }
Shape1096.Geometry := Text1097;
{ .AddChildren }
Billboard1095.AddChildren([Shape1096]);
{ .AddChildren }
HAnimSite1092.AddChildren([Billboard1095]);
{ .AddChildren }
HAnimSegment1084.AddChildren([HAnimSite1092]);
Shape1099 := TShapeNode.Create;
LineSet1100 := TLineSetNode.Create;
LineSet1100.SetVertexCount([2]);
Coordinate1101 := TCoordinateNode.Create;
Coordinate1101.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1961,0.8055,-0.0218)]);
{ .SetCoord }
LineSet1100.Coord := Coordinate1101;
{ from r_radiocarpal to r_carpometacarpal_2 vertices 2 }
ColorRGBA1102 := TColorRGBANode.Create;
ColorRGBA1102 := ColorRGBA27;
{ .SetColor }
LineSet1100.Color := ColorRGBA1102;
{ .SetGeometry }
Shape1099.Geometry := LineSet1100;
{ .AddChildren }
HAnimSegment1084.AddChildren([Shape1099]);
Shape1103 := TShapeNode.Create;
LineSet1104 := TLineSetNode.Create;
LineSet1104.SetVertexCount([2]);
Coordinate1105 := TCoordinateNode.Create;
Coordinate1105.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1972,0.806,-0.0468)]);
{ .SetCoord }
LineSet1104.Coord := Coordinate1105;
{ from r_radiocarpal to r_carpometacarpal_3 vertices 2 }
ColorRGBA1106 := TColorRGBANode.Create;
ColorRGBA1106 := ColorRGBA27;
{ .SetColor }
LineSet1104.Color := ColorRGBA1106;
{ .SetGeometry }
Shape1103.Geometry := LineSet1104;
{ .AddChildren }
HAnimSegment1084.AddChildren([Shape1103]);
Shape1107 := TShapeNode.Create;
LineSet1108 := TLineSetNode.Create;
LineSet1108.SetVertexCount([2]);
Coordinate1109 := TCoordinateNode.Create;
Coordinate1109.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1951,0.8049,-0.0732)]);
{ .SetCoord }
LineSet1108.Coord := Coordinate1109;
{ from r_radiocarpal to r_carpometacarpal_4 vertices 2 }
ColorRGBA1110 := TColorRGBANode.Create;
ColorRGBA1110 := ColorRGBA27;
{ .SetColor }
LineSet1108.Color := ColorRGBA1110;
{ .SetGeometry }
Shape1107.Geometry := LineSet1108;
{ .AddChildren }
HAnimSegment1084.AddChildren([Shape1107]);
Shape1111 := TShapeNode.Create;
LineSet1112 := TLineSetNode.Create;
LineSet1112.SetVertexCount([2]);
Coordinate1113 := TCoordinateNode.Create;
Coordinate1113.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1926,0.8096,-0.0975)]);
{ .SetCoord }
LineSet1112.Coord := Coordinate1113;
{ from r_radiocarpal to r_carpometacarpal_5 vertices 2 }
ColorRGBA1114 := TColorRGBANode.Create;
ColorRGBA1114 := ColorRGBA27;
{ .SetColor }
LineSet1112.Color := ColorRGBA1114;
{ .SetGeometry }
Shape1111.Geometry := LineSet1112;
{ .AddChildren }
HAnimSegment1084.AddChildren([Shape1111]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimSegment1084]);
HAnimJoint1115 := THAnimJointNode.Create;
HAnimJoint1115.NameField := 'r_carpometacarpal_1';
HAnimJoint1115.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint1115.SetUlimit([0,0,0]);
HAnimJoint1115.SetLlimit([0,0,0]);
HAnimSegment1116 := THAnimSegmentNode.Create;
HAnimSegment1116.NameField := 'r_metacarpal_1';
Transform1117 := TTransformNode.Create;
Transform1117.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1118 := TTransformNode.Create;
{ Empty Transform }
Shape1119 := TShapeNode.Create;
Shape1119 := Shape20;
{ .AddChild }
Transform1118.AddChildren([Shape1119]);
{ .AddChildren }
Transform1117.AddChildren([Transform1118]);
{ .AddChildren }
HAnimSegment1116.AddChildren([Transform1117]);
Shape1120 := TShapeNode.Create;
LineSet1121 := TLineSetNode.Create;
LineSet1121.SetVertexCount([2]);
Coordinate1122 := TCoordinateNode.Create;
Coordinate1122.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ .SetCoord }
LineSet1121.Coord := Coordinate1122;
{ from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 }
ColorRGBA1123 := TColorRGBANode.Create;
ColorRGBA1123 := ColorRGBA27;
{ .SetColor }
LineSet1121.Color := ColorRGBA1123;
{ .SetGeometry }
Shape1120.Geometry := LineSet1121;
{ .AddChildren }
HAnimSegment1116.AddChildren([Shape1120]);
{ .AddChildren }
HAnimJoint1115.AddChildren([HAnimSegment1116]);
HAnimJoint1124 := THAnimJointNode.Create;
HAnimJoint1124.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1124.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint1124.SetUlimit([0,0,0]);
HAnimJoint1124.SetLlimit([0,0,0]);
HAnimSegment1125 := THAnimSegmentNode.Create;
HAnimSegment1125.NameField := 'r_carpal_proximal_phalanx_1';
Transform1126 := TTransformNode.Create;
Transform1126.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1127 := TTransformNode.Create;
{ Empty Transform }
Shape1128 := TShapeNode.Create;
Shape1128 := Shape20;
{ .AddChild }
Transform1127.AddChildren([Shape1128]);
{ .AddChildren }
Transform1126.AddChildren([Transform1127]);
{ .AddChildren }
HAnimSegment1125.AddChildren([Transform1126]);
Shape1129 := TShapeNode.Create;
LineSet1130 := TLineSetNode.Create;
LineSet1130.SetVertexCount([2]);
Coordinate1131 := TCoordinateNode.Create;
Coordinate1131.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ .SetCoord }
LineSet1130.Coord := Coordinate1131;
{ from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 }
ColorRGBA1132 := TColorRGBANode.Create;
ColorRGBA1132 := ColorRGBA27;
{ .SetColor }
LineSet1130.Color := ColorRGBA1132;
{ .SetGeometry }
Shape1129.Geometry := LineSet1130;
{ .AddChildren }
HAnimSegment1125.AddChildren([Shape1129]);
{ .AddChildren }
HAnimJoint1124.AddChildren([HAnimSegment1125]);
HAnimJoint1133 := THAnimJointNode.Create;
HAnimJoint1133.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1133.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint1133.SetUlimit([0,0,0]);
HAnimJoint1133.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1124.AddChildren([HAnimJoint1133]);
{ .AddChildren }
HAnimJoint1115.AddChildren([HAnimJoint1124]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimJoint1115]);
HAnimJoint1134 := THAnimJointNode.Create;
HAnimJoint1134.NameField := 'r_carpometacarpal_2';
HAnimJoint1134.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint1134.SetUlimit([0,0,0]);
HAnimJoint1134.SetLlimit([0,0,0]);
HAnimSegment1135 := THAnimSegmentNode.Create;
HAnimSegment1135.NameField := 'r_metacarpal_2';
Transform1136 := TTransformNode.Create;
Transform1136.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1137 := TTransformNode.Create;
{ Empty Transform }
Shape1138 := TShapeNode.Create;
Shape1138 := Shape20;
{ .AddChild }
Transform1137.AddChildren([Shape1138]);
{ .AddChildren }
Transform1136.AddChildren([Transform1137]);
{ .AddChildren }
HAnimSegment1135.AddChildren([Transform1136]);
Shape1139 := TShapeNode.Create;
LineSet1140 := TLineSetNode.Create;
LineSet1140.SetVertexCount([2]);
Coordinate1141 := TCoordinateNode.Create;
Coordinate1141.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ .SetCoord }
LineSet1140.Coord := Coordinate1141;
{ from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 }
ColorRGBA1142 := TColorRGBANode.Create;
ColorRGBA1142 := ColorRGBA27;
{ .SetColor }
LineSet1140.Color := ColorRGBA1142;
{ .SetGeometry }
Shape1139.Geometry := LineSet1140;
{ .AddChildren }
HAnimSegment1135.AddChildren([Shape1139]);
HAnimSite1143 := THAnimSiteNode.Create;
HAnimSite1143.NameField := 'r_metacarpal_phalanx_2';
HAnimSite1143.Translation := Vector3(-0.1977,0.8169,-0.0177);
TouchSensor1144 := TTouchSensorNode.Create;
TouchSensor1144.Description := 'HAnimSite 78 r_metacarpal_phalanx_2';
{ .AddChildren }
HAnimSite1143.AddChildren([TouchSensor1144]);
Shape1145 := TShapeNode.Create;
Shape1145 := Shape30;
{ .AddChildren }
HAnimSite1143.AddChildren([Shape1145]);
Billboard1146 := TBillboardNode.Create;
Shape1147 := TShapeNode.Create;
Text1148 := TTextNode.Create;
Text1148.SetText(['78']);
FontStyle1149 := TFontStyleNode.Create;
FontStyle1149.Size := 0.035;
{ .SetFontStyle }
Text1148.FontStyle := FontStyle1149;
{ .SetGeometry }
Shape1147.Geometry := Text1148;
{ .AddChildren }
Billboard1146.AddChildren([Shape1147]);
{ .AddChildren }
HAnimSite1143.AddChildren([Billboard1146]);
{ .AddChildren }
HAnimSegment1135.AddChildren([HAnimSite1143]);
{ .AddChildren }
HAnimJoint1134.AddChildren([HAnimSegment1135]);
HAnimJoint1150 := THAnimJointNode.Create;
HAnimJoint1150.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1150.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint1150.SetUlimit([0,0,0]);
HAnimJoint1150.SetLlimit([0,0,0]);
HAnimSegment1151 := THAnimSegmentNode.Create;
HAnimSegment1151.NameField := 'r_carpal_proximal_phalanx_2';
Transform1152 := TTransformNode.Create;
Transform1152.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1153 := TTransformNode.Create;
{ Empty Transform }
Shape1154 := TShapeNode.Create;
Shape1154 := Shape20;
{ .AddChild }
Transform1153.AddChildren([Shape1154]);
{ .AddChildren }
Transform1152.AddChildren([Transform1153]);
{ .AddChildren }
HAnimSegment1151.AddChildren([Transform1152]);
Shape1155 := TShapeNode.Create;
LineSet1156 := TLineSetNode.Create;
LineSet1156.SetVertexCount([2]);
Coordinate1157 := TCoordinateNode.Create;
Coordinate1157.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ .SetCoord }
LineSet1156.Coord := Coordinate1157;
{ from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 }
ColorRGBA1158 := TColorRGBANode.Create;
ColorRGBA1158 := ColorRGBA27;
{ .SetColor }
LineSet1156.Color := ColorRGBA1158;
{ .SetGeometry }
Shape1155.Geometry := LineSet1156;
{ .AddChildren }
HAnimSegment1151.AddChildren([Shape1155]);
{ .AddChildren }
HAnimJoint1150.AddChildren([HAnimSegment1151]);
HAnimJoint1159 := THAnimJointNode.Create;
HAnimJoint1159.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1159.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint1159.SetUlimit([0,0,0]);
HAnimJoint1159.SetLlimit([0,0,0]);
HAnimSegment1160 := THAnimSegmentNode.Create;
HAnimSegment1160.NameField := 'r_carpal_middle_phalanx_2';
Transform1161 := TTransformNode.Create;
Transform1161.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1162 := TTransformNode.Create;
{ Empty Transform }
Shape1163 := TShapeNode.Create;
Shape1163 := Shape20;
{ .AddChild }
Transform1162.AddChildren([Shape1163]);
{ .AddChildren }
Transform1161.AddChildren([Transform1162]);
{ .AddChildren }
HAnimSegment1160.AddChildren([Transform1161]);
Shape1164 := TShapeNode.Create;
LineSet1165 := TLineSetNode.Create;
LineSet1165.SetVertexCount([2]);
Coordinate1166 := TCoordinateNode.Create;
Coordinate1166.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ .SetCoord }
LineSet1165.Coord := Coordinate1166;
{ from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 }
ColorRGBA1167 := TColorRGBANode.Create;
ColorRGBA1167 := ColorRGBA27;
{ .SetColor }
LineSet1165.Color := ColorRGBA1167;
{ .SetGeometry }
Shape1164.Geometry := LineSet1165;
{ .AddChildren }
HAnimSegment1160.AddChildren([Shape1164]);
{ .AddChildren }
HAnimJoint1159.AddChildren([HAnimSegment1160]);
HAnimJoint1168 := THAnimJointNode.Create;
HAnimJoint1168.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1168.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint1168.SetUlimit([0,0,0]);
HAnimJoint1168.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1159.AddChildren([HAnimJoint1168]);
{ .AddChildren }
HAnimJoint1150.AddChildren([HAnimJoint1159]);
{ .AddChildren }
HAnimJoint1134.AddChildren([HAnimJoint1150]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimJoint1134]);
HAnimJoint1169 := THAnimJointNode.Create;
HAnimJoint1169.NameField := 'r_carpometacarpal_3';
HAnimJoint1169.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint1169.SetUlimit([0,0,0]);
HAnimJoint1169.SetLlimit([0,0,0]);
HAnimSegment1170 := THAnimSegmentNode.Create;
HAnimSegment1170.NameField := 'r_metacarpal_3';
Transform1171 := TTransformNode.Create;
Transform1171.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1172 := TTransformNode.Create;
{ Empty Transform }
Shape1173 := TShapeNode.Create;
Shape1173 := Shape20;
{ .AddChild }
Transform1172.AddChildren([Shape1173]);
{ .AddChildren }
Transform1171.AddChildren([Transform1172]);
{ .AddChildren }
HAnimSegment1170.AddChildren([Transform1171]);
Shape1174 := TShapeNode.Create;
LineSet1175 := TLineSetNode.Create;
LineSet1175.SetVertexCount([2]);
Coordinate1176 := TCoordinateNode.Create;
Coordinate1176.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ .SetCoord }
LineSet1175.Coord := Coordinate1176;
{ from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 }
ColorRGBA1177 := TColorRGBANode.Create;
ColorRGBA1177 := ColorRGBA27;
{ .SetColor }
LineSet1175.Color := ColorRGBA1177;
{ .SetGeometry }
Shape1174.Geometry := LineSet1175;
{ .AddChildren }
HAnimSegment1170.AddChildren([Shape1174]);
HAnimSite1178 := THAnimSiteNode.Create;
HAnimSite1178.NameField := 'r_metacarpal_phalanx_3';
TouchSensor1179 := TTouchSensorNode.Create;
TouchSensor1179.Description := 'HAnimSite 79 r_metacarpal_phalanx_3';
{ .AddChildren }
HAnimSite1178.AddChildren([TouchSensor1179]);
Shape1180 := TShapeNode.Create;
Shape1180 := Shape30;
{ .AddChildren }
HAnimSite1178.AddChildren([Shape1180]);
Billboard1181 := TBillboardNode.Create;
Shape1182 := TShapeNode.Create;
Text1183 := TTextNode.Create;
Text1183.SetText(['79']);
FontStyle1184 := TFontStyleNode.Create;
FontStyle1184.Size := 0.035;
{ .SetFontStyle }
Text1183.FontStyle := FontStyle1184;
{ .SetGeometry }
Shape1182.Geometry := Text1183;
{ .AddChildren }
Billboard1181.AddChildren([Shape1182]);
{ .AddChildren }
HAnimSite1178.AddChildren([Billboard1181]);
{ .AddChildren }
HAnimSegment1170.AddChildren([HAnimSite1178]);
{ .AddChildren }
HAnimJoint1169.AddChildren([HAnimSegment1170]);
HAnimJoint1185 := THAnimJointNode.Create;
HAnimJoint1185.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1185.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint1185.SetUlimit([0,0,0]);
HAnimJoint1185.SetLlimit([0,0,0]);
HAnimSegment1186 := THAnimSegmentNode.Create;
HAnimSegment1186.NameField := 'r_carpal_proximal_phalanx_3';
Transform1187 := TTransformNode.Create;
Transform1187.Translation := Vector3(-0.1972,0.7849,-0.0468);
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
Coordinate1192.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ .SetCoord }
LineSet1191.Coord := Coordinate1192;
{ from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 }
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
HAnimJoint1194.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1194.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint1194.SetUlimit([0,0,0]);
HAnimJoint1194.SetLlimit([0,0,0]);
HAnimSegment1195 := THAnimSegmentNode.Create;
HAnimSegment1195.NameField := 'r_carpal_middle_phalanx_3';
Transform1196 := TTransformNode.Create;
Transform1196.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1197 := TTransformNode.Create;
{ Empty Transform }
Shape1198 := TShapeNode.Create;
Shape1198 := Shape20;
{ .AddChild }
Transform1197.AddChildren([Shape1198]);
{ .AddChildren }
Transform1196.AddChildren([Transform1197]);
{ .AddChildren }
HAnimSegment1195.AddChildren([Transform1196]);
Shape1199 := TShapeNode.Create;
LineSet1200 := TLineSetNode.Create;
LineSet1200.SetVertexCount([2]);
Coordinate1201 := TCoordinateNode.Create;
Coordinate1201.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ .SetCoord }
LineSet1200.Coord := Coordinate1201;
{ from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 }
ColorRGBA1202 := TColorRGBANode.Create;
ColorRGBA1202 := ColorRGBA27;
{ .SetColor }
LineSet1200.Color := ColorRGBA1202;
{ .SetGeometry }
Shape1199.Geometry := LineSet1200;
{ .AddChildren }
HAnimSegment1195.AddChildren([Shape1199]);
{ .AddChildren }
HAnimJoint1194.AddChildren([HAnimSegment1195]);
HAnimJoint1203 := THAnimJointNode.Create;
HAnimJoint1203.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1203.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint1203.SetUlimit([0,0,0]);
HAnimJoint1203.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1194.AddChildren([HAnimJoint1203]);
{ .AddChildren }
HAnimJoint1185.AddChildren([HAnimJoint1194]);
{ .AddChildren }
HAnimJoint1169.AddChildren([HAnimJoint1185]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimJoint1169]);
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204.NameField := 'r_carpometacarpal_4';
HAnimJoint1204.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint1204.SetUlimit([0,0,0]);
HAnimJoint1204.SetLlimit([0,0,0]);
HAnimSegment1205 := THAnimSegmentNode.Create;
HAnimSegment1205.NameField := 'r_metacarpal_4';
Transform1206 := TTransformNode.Create;
Transform1206.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1207 := TTransformNode.Create;
{ Empty Transform }
Shape1208 := TShapeNode.Create;
Shape1208 := Shape20;
{ .AddChild }
Transform1207.AddChildren([Shape1208]);
{ .AddChildren }
Transform1206.AddChildren([Transform1207]);
{ .AddChildren }
HAnimSegment1205.AddChildren([Transform1206]);
Shape1209 := TShapeNode.Create;
LineSet1210 := TLineSetNode.Create;
LineSet1210.SetVertexCount([2]);
Coordinate1211 := TCoordinateNode.Create;
Coordinate1211.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ .SetCoord }
LineSet1210.Coord := Coordinate1211;
{ from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 }
ColorRGBA1212 := TColorRGBANode.Create;
ColorRGBA1212 := ColorRGBA27;
{ .SetColor }
LineSet1210.Color := ColorRGBA1212;
{ .SetGeometry }
Shape1209.Geometry := LineSet1210;
{ .AddChildren }
HAnimSegment1205.AddChildren([Shape1209]);
{ .AddChildren }
HAnimJoint1204.AddChildren([HAnimSegment1205]);
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1213.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint1213.SetUlimit([0,0,0]);
HAnimJoint1213.SetLlimit([0,0,0]);
HAnimSegment1214 := THAnimSegmentNode.Create;
HAnimSegment1214.NameField := 'r_carpal_proximal_phalanx_4';
Transform1215 := TTransformNode.Create;
Transform1215.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1216 := TTransformNode.Create;
{ Empty Transform }
Shape1217 := TShapeNode.Create;
Shape1217 := Shape20;
{ .AddChild }
Transform1216.AddChildren([Shape1217]);
{ .AddChildren }
Transform1215.AddChildren([Transform1216]);
{ .AddChildren }
HAnimSegment1214.AddChildren([Transform1215]);
Shape1218 := TShapeNode.Create;
LineSet1219 := TLineSetNode.Create;
LineSet1219.SetVertexCount([2]);
Coordinate1220 := TCoordinateNode.Create;
Coordinate1220.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ .SetCoord }
LineSet1219.Coord := Coordinate1220;
{ from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 }
ColorRGBA1221 := TColorRGBANode.Create;
ColorRGBA1221 := ColorRGBA27;
{ .SetColor }
LineSet1219.Color := ColorRGBA1221;
{ .SetGeometry }
Shape1218.Geometry := LineSet1219;
{ .AddChildren }
HAnimSegment1214.AddChildren([Shape1218]);
{ .AddChildren }
HAnimJoint1213.AddChildren([HAnimSegment1214]);
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1222.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint1222.SetUlimit([0,0,0]);
HAnimJoint1222.SetLlimit([0,0,0]);
HAnimSegment1223 := THAnimSegmentNode.Create;
HAnimSegment1223.NameField := 'r_carpal_middle_phalanx_4';
Transform1224 := TTransformNode.Create;
Transform1224.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1225 := TTransformNode.Create;
{ Empty Transform }
Shape1226 := TShapeNode.Create;
Shape1226 := Shape20;
{ .AddChild }
Transform1225.AddChildren([Shape1226]);
{ .AddChildren }
Transform1224.AddChildren([Transform1225]);
{ .AddChildren }
HAnimSegment1223.AddChildren([Transform1224]);
Shape1227 := TShapeNode.Create;
LineSet1228 := TLineSetNode.Create;
LineSet1228.SetVertexCount([2]);
Coordinate1229 := TCoordinateNode.Create;
Coordinate1229.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ .SetCoord }
LineSet1228.Coord := Coordinate1229;
{ from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 }
ColorRGBA1230 := TColorRGBANode.Create;
ColorRGBA1230 := ColorRGBA27;
{ .SetColor }
LineSet1228.Color := ColorRGBA1230;
{ .SetGeometry }
Shape1227.Geometry := LineSet1228;
{ .AddChildren }
HAnimSegment1223.AddChildren([Shape1227]);
{ .AddChildren }
HAnimJoint1222.AddChildren([HAnimSegment1223]);
HAnimJoint1231 := THAnimJointNode.Create;
HAnimJoint1231.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1231.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint1231.SetUlimit([0,0,0]);
HAnimJoint1231.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1222.AddChildren([HAnimJoint1231]);
{ .AddChildren }
HAnimJoint1213.AddChildren([HAnimJoint1222]);
{ .AddChildren }
HAnimJoint1204.AddChildren([HAnimJoint1213]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimJoint1204]);
HAnimJoint1232 := THAnimJointNode.Create;
HAnimJoint1232.NameField := 'r_carpometacarpal_5';
HAnimJoint1232.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint1232.SetUlimit([0,0,0]);
HAnimJoint1232.SetLlimit([0,0,0]);
HAnimSegment1233 := THAnimSegmentNode.Create;
HAnimSegment1233.NameField := 'r_metacarpal_5';
Transform1234 := TTransformNode.Create;
Transform1234.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1235 := TTransformNode.Create;
{ Empty Transform }
Shape1236 := TShapeNode.Create;
Shape1236 := Shape20;
{ .AddChild }
Transform1235.AddChildren([Shape1236]);
{ .AddChildren }
Transform1234.AddChildren([Transform1235]);
{ .AddChildren }
HAnimSegment1233.AddChildren([Transform1234]);
Shape1237 := TShapeNode.Create;
LineSet1238 := TLineSetNode.Create;
LineSet1238.SetVertexCount([2]);
Coordinate1239 := TCoordinateNode.Create;
Coordinate1239.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ .SetCoord }
LineSet1238.Coord := Coordinate1239;
{ from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 }
ColorRGBA1240 := TColorRGBANode.Create;
ColorRGBA1240 := ColorRGBA27;
{ .SetColor }
LineSet1238.Color := ColorRGBA1240;
{ .SetGeometry }
Shape1237.Geometry := LineSet1238;
{ .AddChildren }
HAnimSegment1233.AddChildren([Shape1237]);
HAnimSite1241 := THAnimSiteNode.Create;
HAnimSite1241.NameField := 'r_metacarpal_phalanx_5';
HAnimSite1241.Translation := Vector3(-0.1929,0.789,-0.1064);
TouchSensor1242 := TTouchSensorNode.Create;
TouchSensor1242.Description := 'HAnimSite 80 r_metacarpal_phalanx_5';
{ .AddChildren }
HAnimSite1241.AddChildren([TouchSensor1242]);
Shape1243 := TShapeNode.Create;
Shape1243 := Shape30;
{ .AddChildren }
HAnimSite1241.AddChildren([Shape1243]);
Billboard1244 := TBillboardNode.Create;
Shape1245 := TShapeNode.Create;
Text1246 := TTextNode.Create;
Text1246.SetText(['80']);
FontStyle1247 := TFontStyleNode.Create;
FontStyle1247.Size := 0.035;
{ .SetFontStyle }
Text1246.FontStyle := FontStyle1247;
{ .SetGeometry }
Shape1245.Geometry := Text1246;
{ .AddChildren }
Billboard1244.AddChildren([Shape1245]);
{ .AddChildren }
HAnimSite1241.AddChildren([Billboard1244]);
{ .AddChildren }
HAnimSegment1233.AddChildren([HAnimSite1241]);
{ .AddChildren }
HAnimJoint1232.AddChildren([HAnimSegment1233]);
HAnimJoint1248 := THAnimJointNode.Create;
HAnimJoint1248.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1248.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint1248.SetUlimit([0,0,0]);
HAnimJoint1248.SetLlimit([0,0,0]);
HAnimSegment1249 := THAnimSegmentNode.Create;
HAnimSegment1249.NameField := 'r_carpal_proximal_phalanx_5';
Transform1250 := TTransformNode.Create;
Transform1250.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1251 := TTransformNode.Create;
{ Empty Transform }
Shape1252 := TShapeNode.Create;
Shape1252 := Shape20;
{ .AddChild }
Transform1251.AddChildren([Shape1252]);
{ .AddChildren }
Transform1250.AddChildren([Transform1251]);
{ .AddChildren }
HAnimSegment1249.AddChildren([Transform1250]);
Shape1253 := TShapeNode.Create;
LineSet1254 := TLineSetNode.Create;
LineSet1254.SetVertexCount([2]);
Coordinate1255 := TCoordinateNode.Create;
Coordinate1255.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ .SetCoord }
LineSet1254.Coord := Coordinate1255;
{ from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 }
ColorRGBA1256 := TColorRGBANode.Create;
ColorRGBA1256 := ColorRGBA27;
{ .SetColor }
LineSet1254.Color := ColorRGBA1256;
{ .SetGeometry }
Shape1253.Geometry := LineSet1254;
{ .AddChildren }
HAnimSegment1249.AddChildren([Shape1253]);
{ .AddChildren }
HAnimJoint1248.AddChildren([HAnimSegment1249]);
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1257.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint1257.SetUlimit([0,0,0]);
HAnimJoint1257.SetLlimit([0,0,0]);
HAnimSegment1258 := THAnimSegmentNode.Create;
HAnimSegment1258.NameField := 'r_carpal_middle_phalanx_5';
Transform1259 := TTransformNode.Create;
Transform1259.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1260 := TTransformNode.Create;
{ Empty Transform }
Shape1261 := TShapeNode.Create;
Shape1261 := Shape20;
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
Coordinate1264.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ .SetCoord }
LineSet1263.Coord := Coordinate1264;
{ from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 }
ColorRGBA1265 := TColorRGBANode.Create;
ColorRGBA1265 := ColorRGBA27;
{ .SetColor }
LineSet1263.Color := ColorRGBA1265;
{ .SetGeometry }
Shape1262.Geometry := LineSet1263;
{ .AddChildren }
HAnimSegment1258.AddChildren([Shape1262]);
{ .AddChildren }
HAnimJoint1257.AddChildren([HAnimSegment1258]);
HAnimJoint1266 := THAnimJointNode.Create;
HAnimJoint1266.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1266.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint1266.SetUlimit([0,0,0]);
HAnimJoint1266.SetLlimit([0,0,0]);
{ .AddChildren }
HAnimJoint1257.AddChildren([HAnimJoint1266]);
{ .AddChildren }
HAnimJoint1248.AddChildren([HAnimJoint1257]);
{ .AddChildren }
HAnimJoint1232.AddChildren([HAnimJoint1248]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimJoint1232]);
{ .AddChildren }
HAnimJoint1046.AddChildren([HAnimJoint1083]);
{ .AddChildren }
HAnimJoint1023.AddChildren([HAnimJoint1046]);
{ .AddChildren }
HAnimJoint1014.AddChildren([HAnimJoint1023]);
{ .AddChildren }
HAnimJoint970.AddChildren([HAnimJoint1014]);
{ .AddChildren }
HAnimJoint602.AddChildren([HAnimJoint970]);
{ .AddChildren }
HAnimJoint565.AddChildren([HAnimJoint602]);
{ .AddChildren }
HAnimJoint535.AddChildren([HAnimJoint565]);
{ .AddChildren }
HAnimJoint526.AddChildren([HAnimJoint535]);
{ .AddChildren }
HAnimJoint489.AddChildren([HAnimJoint526]);
{ .AddChildren }
HAnimJoint459.AddChildren([HAnimJoint489]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint459]);
{ .AddSkeleton }
HAnimHumanoid38.SetSkeleton([HAnimJoint47]);
HAnimJoint1267 := THAnimJointNode.Create;
HAnimJoint1267 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1267;
HAnimJoint1268 := THAnimJointNode.Create;
HAnimJoint1268 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1268;
HAnimJoint1269 := THAnimJointNode.Create;
HAnimJoint1269 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1269;
HAnimJoint1270 := THAnimJointNode.Create;
HAnimJoint1270 := HAnimJoint180;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1270;
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271 := HAnimJoint210;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1271;
HAnimJoint1272 := THAnimJointNode.Create;
HAnimJoint1272 := HAnimJoint233;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1272;
HAnimJoint1273 := THAnimJointNode.Create;
HAnimJoint1273 := HAnimJoint242;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1273;
HAnimJoint1274 := THAnimJointNode.Create;
HAnimJoint1274 := HAnimJoint300;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1274;
HAnimJoint1275 := THAnimJointNode.Create;
HAnimJoint1275 := HAnimJoint301;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1275;
HAnimJoint1276 := THAnimJointNode.Create;
HAnimJoint1276 := HAnimJoint338;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1276;
HAnimJoint1277 := THAnimJointNode.Create;
HAnimJoint1277 := HAnimJoint368;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1277;
HAnimJoint1278 := THAnimJointNode.Create;
HAnimJoint1278 := HAnimJoint391;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1278;
HAnimJoint1279 := THAnimJointNode.Create;
HAnimJoint1279 := HAnimJoint400;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1279;
HAnimJoint1280 := THAnimJointNode.Create;
HAnimJoint1280 := HAnimJoint458;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1280;
HAnimJoint1281 := THAnimJointNode.Create;
HAnimJoint1281 := HAnimJoint459;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1281;
HAnimJoint1282 := THAnimJointNode.Create;
HAnimJoint1282 := HAnimJoint489;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1282;
HAnimJoint1283 := THAnimJointNode.Create;
HAnimJoint1283 := HAnimJoint526;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1283;
HAnimJoint1284 := THAnimJointNode.Create;
HAnimJoint1284 := HAnimJoint535;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1284;
HAnimJoint1285 := THAnimJointNode.Create;
HAnimJoint1285 := HAnimJoint565;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1285;
HAnimJoint1286 := THAnimJointNode.Create;
HAnimJoint1286 := HAnimJoint602;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1286;
HAnimJoint1287 := THAnimJointNode.Create;
HAnimJoint1287 := HAnimJoint647;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1287;
HAnimJoint1288 := THAnimJointNode.Create;
HAnimJoint1288 := HAnimJoint656;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1288;
HAnimJoint1289 := THAnimJointNode.Create;
HAnimJoint1289 := HAnimJoint672;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1289;
HAnimJoint1290 := THAnimJointNode.Create;
HAnimJoint1290 := HAnimJoint673;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1290;
HAnimJoint1291 := THAnimJointNode.Create;
HAnimJoint1291 := HAnimJoint717;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1291;
HAnimJoint1292 := THAnimJointNode.Create;
HAnimJoint1292 := HAnimJoint726;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1292;
HAnimJoint1293 := THAnimJointNode.Create;
HAnimJoint1293 := HAnimJoint749;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1293;
HAnimJoint1294 := THAnimJointNode.Create;
HAnimJoint1294 := HAnimJoint786;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1294;
HAnimJoint1295 := THAnimJointNode.Create;
HAnimJoint1295 := HAnimJoint818;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1295;
HAnimJoint1296 := THAnimJointNode.Create;
HAnimJoint1296 := HAnimJoint827;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1296;
HAnimJoint1297 := THAnimJointNode.Create;
HAnimJoint1297 := HAnimJoint836;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1297;
HAnimJoint1298 := THAnimJointNode.Create;
HAnimJoint1298 := HAnimJoint837;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1298;
HAnimJoint1299 := THAnimJointNode.Create;
HAnimJoint1299 := HAnimJoint853;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1299;
HAnimJoint1300 := THAnimJointNode.Create;
HAnimJoint1300 := HAnimJoint862;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1300;
HAnimJoint1301 := THAnimJointNode.Create;
HAnimJoint1301 := HAnimJoint871;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1301;
HAnimJoint1302 := THAnimJointNode.Create;
HAnimJoint1302 := HAnimJoint872;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1302;
HAnimJoint1303 := THAnimJointNode.Create;
HAnimJoint1303 := HAnimJoint888;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1303;
HAnimJoint1304 := THAnimJointNode.Create;
HAnimJoint1304 := HAnimJoint897;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1304;
HAnimJoint1305 := THAnimJointNode.Create;
HAnimJoint1305 := HAnimJoint906;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1305;
HAnimJoint1306 := THAnimJointNode.Create;
HAnimJoint1306 := HAnimJoint907;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1306;
HAnimJoint1307 := THAnimJointNode.Create;
HAnimJoint1307 := HAnimJoint916;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1307;
HAnimJoint1308 := THAnimJointNode.Create;
HAnimJoint1308 := HAnimJoint925;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1308;
HAnimJoint1309 := THAnimJointNode.Create;
HAnimJoint1309 := HAnimJoint934;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1309;
HAnimJoint1310 := THAnimJointNode.Create;
HAnimJoint1310 := HAnimJoint935;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1310;
HAnimJoint1311 := THAnimJointNode.Create;
HAnimJoint1311 := HAnimJoint951;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1311;
HAnimJoint1312 := THAnimJointNode.Create;
HAnimJoint1312 := HAnimJoint960;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1312;
HAnimJoint1313 := THAnimJointNode.Create;
HAnimJoint1313 := HAnimJoint969;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1313;
HAnimJoint1314 := THAnimJointNode.Create;
HAnimJoint1314 := HAnimJoint970;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1314;
HAnimJoint1315 := THAnimJointNode.Create;
HAnimJoint1315 := HAnimJoint1014;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1315;
HAnimJoint1316 := THAnimJointNode.Create;
HAnimJoint1316 := HAnimJoint1023;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1316;
HAnimJoint1317 := THAnimJointNode.Create;
HAnimJoint1317 := HAnimJoint1046;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1317;
HAnimJoint1318 := THAnimJointNode.Create;
HAnimJoint1318 := HAnimJoint1083;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1318;
HAnimJoint1319 := THAnimJointNode.Create;
HAnimJoint1319 := HAnimJoint1115;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1319;
HAnimJoint1320 := THAnimJointNode.Create;
HAnimJoint1320 := HAnimJoint1124;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1320;
HAnimJoint1321 := THAnimJointNode.Create;
HAnimJoint1321 := HAnimJoint1133;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1321;
HAnimJoint1322 := THAnimJointNode.Create;
HAnimJoint1322 := HAnimJoint1134;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1322;
HAnimJoint1323 := THAnimJointNode.Create;
HAnimJoint1323 := HAnimJoint1150;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1323;
HAnimJoint1324 := THAnimJointNode.Create;
HAnimJoint1324 := HAnimJoint1159;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1324;
HAnimJoint1325 := THAnimJointNode.Create;
HAnimJoint1325 := HAnimJoint1168;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1325;
HAnimJoint1326 := THAnimJointNode.Create;
HAnimJoint1326 := HAnimJoint1169;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1326;
HAnimJoint1327 := THAnimJointNode.Create;
HAnimJoint1327 := HAnimJoint1185;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1327;
HAnimJoint1328 := THAnimJointNode.Create;
HAnimJoint1328 := HAnimJoint1194;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1328;
HAnimJoint1329 := THAnimJointNode.Create;
HAnimJoint1329 := HAnimJoint1203;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1329;
HAnimJoint1330 := THAnimJointNode.Create;
HAnimJoint1330 := HAnimJoint1204;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1330;
HAnimJoint1331 := THAnimJointNode.Create;
HAnimJoint1331 := HAnimJoint1213;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1331;
HAnimJoint1332 := THAnimJointNode.Create;
HAnimJoint1332 := HAnimJoint1222;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1332;
HAnimJoint1333 := THAnimJointNode.Create;
HAnimJoint1333 := HAnimJoint1231;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1333;
HAnimJoint1334 := THAnimJointNode.Create;
HAnimJoint1334 := HAnimJoint1232;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1334;
HAnimJoint1335 := THAnimJointNode.Create;
HAnimJoint1335 := HAnimJoint1248;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1335;
HAnimJoint1336 := THAnimJointNode.Create;
HAnimJoint1336 := HAnimJoint1257;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1336;
HAnimJoint1337 := THAnimJointNode.Create;
HAnimJoint1337 := HAnimJoint1266;
{ .AddJoints }
HAnimHumanoid38.Joints := HAnimJoint1337;
HAnimSegment1338 := THAnimSegmentNode.Create;
HAnimSegment1338 := HAnimSegment48;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1338;
HAnimSegment1339 := THAnimSegmentNode.Create;
HAnimSegment1339 := HAnimSegment61;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1339;
HAnimSegment1340 := THAnimSegmentNode.Create;
HAnimSegment1340 := HAnimSegment144;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1340;
HAnimSegment1341 := THAnimSegmentNode.Create;
HAnimSegment1341 := HAnimSegment181;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1341;
HAnimSegment1342 := THAnimSegmentNode.Create;
HAnimSegment1342 := HAnimSegment211;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1342;
HAnimSegment1343 := THAnimSegmentNode.Create;
HAnimSegment1343 := HAnimSegment234;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1343;
HAnimSegment1344 := THAnimSegmentNode.Create;
HAnimSegment1344 := HAnimSegment243;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1344;
HAnimSegment1345 := THAnimSegmentNode.Create;
HAnimSegment1345 := HAnimSegment302;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1345;
HAnimSegment1346 := THAnimSegmentNode.Create;
HAnimSegment1346 := HAnimSegment339;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1346;
HAnimSegment1347 := THAnimSegmentNode.Create;
HAnimSegment1347 := HAnimSegment369;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1347;
HAnimSegment1348 := THAnimSegmentNode.Create;
HAnimSegment1348 := HAnimSegment392;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1348;
HAnimSegment1349 := THAnimSegmentNode.Create;
HAnimSegment1349 := HAnimSegment401;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1349;
HAnimSegment1350 := THAnimSegmentNode.Create;
HAnimSegment1350 := HAnimSegment460;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1350;
HAnimSegment1351 := THAnimSegmentNode.Create;
HAnimSegment1351 := HAnimSegment490;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1351;
HAnimSegment1352 := THAnimSegmentNode.Create;
HAnimSegment1352 := HAnimSegment527;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1352;
HAnimSegment1353 := THAnimSegmentNode.Create;
HAnimSegment1353 := HAnimSegment536;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1353;
HAnimSegment1354 := THAnimSegmentNode.Create;
HAnimSegment1354 := HAnimSegment566;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1354;
HAnimSegment1355 := THAnimSegmentNode.Create;
HAnimSegment1355 := HAnimSegment603;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1355;
HAnimSegment1356 := THAnimSegmentNode.Create;
HAnimSegment1356 := HAnimSegment648;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1356;
HAnimSegment1357 := THAnimSegmentNode.Create;
HAnimSegment1357 := HAnimSegment657;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1357;
HAnimSegment1358 := THAnimSegmentNode.Create;
HAnimSegment1358 := HAnimSegment674;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1358;
HAnimSegment1359 := THAnimSegmentNode.Create;
HAnimSegment1359 := HAnimSegment718;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1359;
HAnimSegment1360 := THAnimSegmentNode.Create;
HAnimSegment1360 := HAnimSegment727;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1360;
HAnimSegment1361 := THAnimSegmentNode.Create;
HAnimSegment1361 := HAnimSegment750;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1361;
HAnimSegment1362 := THAnimSegmentNode.Create;
HAnimSegment1362 := HAnimSegment787;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1362;
HAnimSegment1363 := THAnimSegmentNode.Create;
HAnimSegment1363 := HAnimSegment819;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1363;
HAnimSegment1364 := THAnimSegmentNode.Create;
HAnimSegment1364 := HAnimSegment828;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1364;
HAnimSegment1365 := THAnimSegmentNode.Create;
HAnimSegment1365 := HAnimSegment838;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1365;
HAnimSegment1366 := THAnimSegmentNode.Create;
HAnimSegment1366 := HAnimSegment854;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1366;
HAnimSegment1367 := THAnimSegmentNode.Create;
HAnimSegment1367 := HAnimSegment863;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1367;
HAnimSegment1368 := THAnimSegmentNode.Create;
HAnimSegment1368 := HAnimSegment873;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1368;
HAnimSegment1369 := THAnimSegmentNode.Create;
HAnimSegment1369 := HAnimSegment889;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1369;
HAnimSegment1370 := THAnimSegmentNode.Create;
HAnimSegment1370 := HAnimSegment898;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1370;
HAnimSegment1371 := THAnimSegmentNode.Create;
HAnimSegment1371 := HAnimSegment908;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1371;
HAnimSegment1372 := THAnimSegmentNode.Create;
HAnimSegment1372 := HAnimSegment917;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1372;
HAnimSegment1373 := THAnimSegmentNode.Create;
HAnimSegment1373 := HAnimSegment926;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1373;
HAnimSegment1374 := THAnimSegmentNode.Create;
HAnimSegment1374 := HAnimSegment936;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1374;
HAnimSegment1375 := THAnimSegmentNode.Create;
HAnimSegment1375 := HAnimSegment952;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1375;
HAnimSegment1376 := THAnimSegmentNode.Create;
HAnimSegment1376 := HAnimSegment961;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1376;
HAnimSegment1377 := THAnimSegmentNode.Create;
HAnimSegment1377 := HAnimSegment971;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1377;
HAnimSegment1378 := THAnimSegmentNode.Create;
HAnimSegment1378 := HAnimSegment1015;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1378;
HAnimSegment1379 := THAnimSegmentNode.Create;
HAnimSegment1379 := HAnimSegment1024;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1379;
HAnimSegment1380 := THAnimSegmentNode.Create;
HAnimSegment1380 := HAnimSegment1047;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1380;
HAnimSegment1381 := THAnimSegmentNode.Create;
HAnimSegment1381 := HAnimSegment1084;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1381;
HAnimSegment1382 := THAnimSegmentNode.Create;
HAnimSegment1382 := HAnimSegment1116;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1382;
HAnimSegment1383 := THAnimSegmentNode.Create;
HAnimSegment1383 := HAnimSegment1125;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1383;
HAnimSegment1384 := THAnimSegmentNode.Create;
HAnimSegment1384 := HAnimSegment1135;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1384;
HAnimSegment1385 := THAnimSegmentNode.Create;
HAnimSegment1385 := HAnimSegment1151;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1385;
HAnimSegment1386 := THAnimSegmentNode.Create;
HAnimSegment1386 := HAnimSegment1160;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1386;
HAnimSegment1387 := THAnimSegmentNode.Create;
HAnimSegment1387 := HAnimSegment1170;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1387;
HAnimSegment1388 := THAnimSegmentNode.Create;
HAnimSegment1388 := HAnimSegment1186;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1388;
HAnimSegment1389 := THAnimSegmentNode.Create;
HAnimSegment1389 := HAnimSegment1195;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1389;
HAnimSegment1390 := THAnimSegmentNode.Create;
HAnimSegment1390 := HAnimSegment1205;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1390;
HAnimSegment1391 := THAnimSegmentNode.Create;
HAnimSegment1391 := HAnimSegment1214;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1391;
HAnimSegment1392 := THAnimSegmentNode.Create;
HAnimSegment1392 := HAnimSegment1223;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1392;
HAnimSegment1393 := THAnimSegmentNode.Create;
HAnimSegment1393 := HAnimSegment1233;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1393;
HAnimSegment1394 := THAnimSegmentNode.Create;
HAnimSegment1394 := HAnimSegment1249;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1394;
HAnimSegment1395 := THAnimSegmentNode.Create;
HAnimSegment1395 := HAnimSegment1258;
{ .AddSegments }
HAnimHumanoid38.Segments := HAnimSegment1395;
HAnimSite1396 := THAnimSiteNode.Create;
HAnimSite1396 := HAnimSite69;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1396;
HAnimSite1397 := THAnimSiteNode.Create;
HAnimSite1397 := HAnimSite76;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1397;
HAnimSite1398 := THAnimSiteNode.Create;
HAnimSite1398 := HAnimSite83;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1398;
HAnimSite1399 := THAnimSiteNode.Create;
HAnimSite1399 := HAnimSite90;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1399;
HAnimSite1400 := THAnimSiteNode.Create;
HAnimSite1400 := HAnimSite97;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1400;
HAnimSite1401 := THAnimSiteNode.Create;
HAnimSite1401 := HAnimSite104;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1401;
HAnimSite1402 := THAnimSiteNode.Create;
HAnimSite1402 := HAnimSite111;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1402;
HAnimSite1403 := THAnimSiteNode.Create;
HAnimSite1403 := HAnimSite118;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1403;
HAnimSite1404 := THAnimSiteNode.Create;
HAnimSite1404 := HAnimSite125;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1404;
HAnimSite1405 := THAnimSiteNode.Create;
HAnimSite1405 := HAnimSite132;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1405;
HAnimSite1406 := THAnimSiteNode.Create;
HAnimSite1406 := HAnimSite152;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1406;
HAnimSite1407 := THAnimSiteNode.Create;
HAnimSite1407 := HAnimSite159;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1407;
HAnimSite1408 := THAnimSiteNode.Create;
HAnimSite1408 := HAnimSite166;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1408;
HAnimSite1409 := THAnimSiteNode.Create;
HAnimSite1409 := HAnimSite173;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1409;
HAnimSite1410 := THAnimSiteNode.Create;
HAnimSite1410 := HAnimSite189;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1410;
HAnimSite1411 := THAnimSiteNode.Create;
HAnimSite1411 := HAnimSite196;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1411;
HAnimSite1412 := THAnimSiteNode.Create;
HAnimSite1412 := HAnimSite203;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1412;
HAnimSite1413 := THAnimSiteNode.Create;
HAnimSite1413 := HAnimSite219;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1413;
HAnimSite1414 := THAnimSiteNode.Create;
HAnimSite1414 := HAnimSite226;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1414;
HAnimSite1415 := THAnimSiteNode.Create;
HAnimSite1415 := HAnimSite251;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1415;
HAnimSite1416 := THAnimSiteNode.Create;
HAnimSite1416 := HAnimSite258;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1416;
HAnimSite1417 := THAnimSiteNode.Create;
HAnimSite1417 := HAnimSite265;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1417;
HAnimSite1418 := THAnimSiteNode.Create;
HAnimSite1418 := HAnimSite272;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1418;
HAnimSite1419 := THAnimSiteNode.Create;
HAnimSite1419 := HAnimSite279;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1419;
HAnimSite1420 := THAnimSiteNode.Create;
HAnimSite1420 := HAnimSite286;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1420;
HAnimSite1421 := THAnimSiteNode.Create;
HAnimSite1421 := HAnimSite293;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1421;
HAnimSite1422 := THAnimSiteNode.Create;
HAnimSite1422 := HAnimSite310;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1422;
HAnimSite1423 := THAnimSiteNode.Create;
HAnimSite1423 := HAnimSite317;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1423;
HAnimSite1424 := THAnimSiteNode.Create;
HAnimSite1424 := HAnimSite324;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1424;
HAnimSite1425 := THAnimSiteNode.Create;
HAnimSite1425 := HAnimSite331;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1425;
HAnimSite1426 := THAnimSiteNode.Create;
HAnimSite1426 := HAnimSite347;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1426;
HAnimSite1427 := THAnimSiteNode.Create;
HAnimSite1427 := HAnimSite354;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1427;
HAnimSite1428 := THAnimSiteNode.Create;
HAnimSite1428 := HAnimSite361;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1428;
HAnimSite1429 := THAnimSiteNode.Create;
HAnimSite1429 := HAnimSite377;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1429;
HAnimSite1430 := THAnimSiteNode.Create;
HAnimSite1430 := HAnimSite384;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1430;
HAnimSite1431 := THAnimSiteNode.Create;
HAnimSite1431 := HAnimSite409;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1431;
HAnimSite1432 := THAnimSiteNode.Create;
HAnimSite1432 := HAnimSite416;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1432;
HAnimSite1433 := THAnimSiteNode.Create;
HAnimSite1433 := HAnimSite423;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1433;
HAnimSite1434 := THAnimSiteNode.Create;
HAnimSite1434 := HAnimSite430;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1434;
HAnimSite1435 := THAnimSiteNode.Create;
HAnimSite1435 := HAnimSite437;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1435;
HAnimSite1436 := THAnimSiteNode.Create;
HAnimSite1436 := HAnimSite444;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1436;
HAnimSite1437 := THAnimSiteNode.Create;
HAnimSite1437 := HAnimSite451;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1437;
HAnimSite1438 := THAnimSiteNode.Create;
HAnimSite1438 := HAnimSite468;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1438;
HAnimSite1439 := THAnimSiteNode.Create;
HAnimSite1439 := HAnimSite475;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1439;
HAnimSite1440 := THAnimSiteNode.Create;
HAnimSite1440 := HAnimSite482;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1440;
HAnimSite1441 := THAnimSiteNode.Create;
HAnimSite1441 := HAnimSite498;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1441;
HAnimSite1442 := THAnimSiteNode.Create;
HAnimSite1442 := HAnimSite505;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1442;
HAnimSite1443 := THAnimSiteNode.Create;
HAnimSite1443 := HAnimSite512;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1443;
HAnimSite1444 := THAnimSiteNode.Create;
HAnimSite1444 := HAnimSite519;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1444;
HAnimSite1445 := THAnimSiteNode.Create;
HAnimSite1445 := HAnimSite544;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1445;
HAnimSite1446 := THAnimSiteNode.Create;
HAnimSite1446 := HAnimSite551;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1446;
HAnimSite1447 := THAnimSiteNode.Create;
HAnimSite1447 := HAnimSite558;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1447;
HAnimSite1448 := THAnimSiteNode.Create;
HAnimSite1448 := HAnimSite574;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1448;
HAnimSite1449 := THAnimSiteNode.Create;
HAnimSite1449 := HAnimSite581;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1449;
HAnimSite1450 := THAnimSiteNode.Create;
HAnimSite1450 := HAnimSite588;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1450;
HAnimSite1451 := THAnimSiteNode.Create;
HAnimSite1451 := HAnimSite595;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1451;
HAnimSite1452 := THAnimSiteNode.Create;
HAnimSite1452 := HAnimSite611;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1452;
HAnimSite1453 := THAnimSiteNode.Create;
HAnimSite1453 := HAnimSite618;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1453;
HAnimSite1454 := THAnimSiteNode.Create;
HAnimSite1454 := HAnimSite625;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1454;
HAnimSite1455 := THAnimSiteNode.Create;
HAnimSite1455 := HAnimSite632;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1455;
HAnimSite1456 := THAnimSiteNode.Create;
HAnimSite1456 := HAnimSite665;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1456;
HAnimSite1457 := THAnimSiteNode.Create;
HAnimSite1457 := HAnimSite682;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1457;
HAnimSite1458 := THAnimSiteNode.Create;
HAnimSite1458 := HAnimSite689;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1458;
HAnimSite1459 := THAnimSiteNode.Create;
HAnimSite1459 := HAnimSite696;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1459;
HAnimSite1460 := THAnimSiteNode.Create;
HAnimSite1460 := HAnimSite703;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1460;
HAnimSite1461 := THAnimSiteNode.Create;
HAnimSite1461 := HAnimSite710;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1461;
HAnimSite1462 := THAnimSiteNode.Create;
HAnimSite1462 := HAnimSite735;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1462;
HAnimSite1463 := THAnimSiteNode.Create;
HAnimSite1463 := HAnimSite742;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1463;
HAnimSite1464 := THAnimSiteNode.Create;
HAnimSite1464 := HAnimSite758;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1464;
HAnimSite1465 := THAnimSiteNode.Create;
HAnimSite1465 := HAnimSite765;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1465;
HAnimSite1466 := THAnimSiteNode.Create;
HAnimSite1466 := HAnimSite772;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1466;
HAnimSite1467 := THAnimSiteNode.Create;
HAnimSite1467 := HAnimSite779;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1467;
HAnimSite1468 := THAnimSiteNode.Create;
HAnimSite1468 := HAnimSite795;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1468;
HAnimSite1469 := THAnimSiteNode.Create;
HAnimSite1469 := HAnimSite846;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1469;
HAnimSite1470 := THAnimSiteNode.Create;
HAnimSite1470 := HAnimSite881;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1470;
HAnimSite1471 := THAnimSiteNode.Create;
HAnimSite1471 := HAnimSite944;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1471;
HAnimSite1472 := THAnimSiteNode.Create;
HAnimSite1472 := HAnimSite979;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1472;
HAnimSite1473 := THAnimSiteNode.Create;
HAnimSite1473 := HAnimSite986;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1473;
HAnimSite1474 := THAnimSiteNode.Create;
HAnimSite1474 := HAnimSite993;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1474;
HAnimSite1475 := THAnimSiteNode.Create;
HAnimSite1475 := HAnimSite1000;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1475;
HAnimSite1476 := THAnimSiteNode.Create;
HAnimSite1476 := HAnimSite1007;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1476;
HAnimSite1477 := THAnimSiteNode.Create;
HAnimSite1477 := HAnimSite1032;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1477;
HAnimSite1478 := THAnimSiteNode.Create;
HAnimSite1478 := HAnimSite1039;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1478;
HAnimSite1479 := THAnimSiteNode.Create;
HAnimSite1479 := HAnimSite1055;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1479;
HAnimSite1480 := THAnimSiteNode.Create;
HAnimSite1480 := HAnimSite1062;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1480;
HAnimSite1481 := THAnimSiteNode.Create;
HAnimSite1481 := HAnimSite1069;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1481;
HAnimSite1482 := THAnimSiteNode.Create;
HAnimSite1482 := HAnimSite1076;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1482;
HAnimSite1483 := THAnimSiteNode.Create;
HAnimSite1483 := HAnimSite1092;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1483;
HAnimSite1484 := THAnimSiteNode.Create;
HAnimSite1484 := HAnimSite1143;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1484;
HAnimSite1485 := THAnimSiteNode.Create;
HAnimSite1485 := HAnimSite1178;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1485;
HAnimSite1486 := THAnimSiteNode.Create;
HAnimSite1486 := HAnimSite1241;
{ .AddSites }
HAnimHumanoid38.Sites := HAnimSite1486;
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid38]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
