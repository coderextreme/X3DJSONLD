unit JoeSkeletonSkinSite;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateJoeSkeletonSkinSite: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group32: TGroupNode;
WorldInfo33: TWorldInfoNode;
NavigationInfo34: TNavigationInfoNode;
Background35: TBackgroundNode;
Group36: TGroupNode;
Viewpoint37: TViewpointNode;
Viewpoint38: TViewpointNode;
Viewpoint39: TViewpointNode;
Viewpoint40: TViewpointNode;
Viewpoint41: TViewpointNode;
Viewpoint42: TViewpointNode;
Viewpoint43: TViewpointNode;
Viewpoint44: TViewpointNode;
Viewpoint45: TViewpointNode;
Viewpoint46: TViewpointNode;
Viewpoint47: TViewpointNode;
Group48: TGroupNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
IndexedFaceSet53: TIndexedFaceSetNode;
Color54: TColorNode;
Coordinate55: TCoordinateNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
Appearance58: TAppearanceNode;
Material59: TMaterialNode;
IndexedFaceSet60: TIndexedFaceSetNode;
Coordinate61: TCoordinateNode;
Transform62: TTransformNode;
Shape63: TShapeNode;
Appearance64: TAppearanceNode;
Material65: TMaterialNode;
IndexedLineSet66: TIndexedLineSetNode;
Coordinate67: TCoordinateNode;
Transform68: TTransformNode;
Shape69: TShapeNode;
Appearance70: TAppearanceNode;
Material71: TMaterialNode;
Sphere72: TSphereNode;
Group73: TGroupNode;
Group74: TGroupNode;
HAnimHumanoid75: THAnimHumanoidNode;
MetadataSet76: TMetadataSetNode;
MetadataString77: TMetadataStringNode;
HAnimJoint78: THAnimJointNode;
HAnimSegment79: THAnimSegmentNode;
Transform80: TTransformNode;
Shape81: TShapeNode;
Shape82: TShapeNode;
Appearance83: TAppearanceNode;
IndexedLineSet84: TIndexedLineSetNode;
Coordinate85: TCoordinateNode;
Transform86: TTransformNode;
Shape87: TShapeNode;
Transform88: TTransformNode;
Shape89: TShapeNode;
HAnimJoint90: THAnimJointNode;
HAnimSegment91: THAnimSegmentNode;
Transform92: TTransformNode;
Transform93: TTransformNode;
Shape94: TShapeNode;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
IndexedLineSet97: TIndexedLineSetNode;
Coordinate98: TCoordinateNode;
HAnimSite99: THAnimSiteNode;
Shape100: TShapeNode;
HAnimSite101: THAnimSiteNode;
Shape102: TShapeNode;
HAnimSite103: THAnimSiteNode;
Shape104: TShapeNode;
HAnimSite105: THAnimSiteNode;
Shape106: TShapeNode;
HAnimSite107: THAnimSiteNode;
Shape108: TShapeNode;
HAnimSite109: THAnimSiteNode;
Shape110: TShapeNode;
HAnimSite111: THAnimSiteNode;
Shape112: TShapeNode;
HAnimSite113: THAnimSiteNode;
Shape114: TShapeNode;
HAnimSite115: THAnimSiteNode;
Transform116: TTransformNode;
Shape117: TShapeNode;
HAnimSite118: THAnimSiteNode;
Shape119: TShapeNode;
HAnimJoint120: THAnimJointNode;
HAnimSegment121: THAnimSegmentNode;
Transform122: TTransformNode;
Shape123: TShapeNode;
Shape124: TShapeNode;
Appearance125: TAppearanceNode;
IndexedLineSet126: TIndexedLineSetNode;
Coordinate127: TCoordinateNode;
Transform128: TTransformNode;
Shape129: TShapeNode;
Transform130: TTransformNode;
Shape131: TShapeNode;
Transform132: TTransformNode;
Shape133: TShapeNode;
Transform134: TTransformNode;
Shape135: TShapeNode;
Transform136: TTransformNode;
Shape137: TShapeNode;
Transform138: TTransformNode;
Shape139: TShapeNode;
HAnimSite140: THAnimSiteNode;
Shape141: TShapeNode;
HAnimSite142: THAnimSiteNode;
Shape143: TShapeNode;
HAnimSite144: THAnimSiteNode;
Shape145: TShapeNode;
HAnimJoint146: THAnimJointNode;
HAnimSegment147: THAnimSegmentNode;
Transform148: TTransformNode;
Shape149: TShapeNode;
Shape150: TShapeNode;
Appearance151: TAppearanceNode;
IndexedLineSet152: TIndexedLineSetNode;
Coordinate153: TCoordinateNode;
Transform154: TTransformNode;
Shape155: TShapeNode;
Transform156: TTransformNode;
Shape157: TShapeNode;
Transform158: TTransformNode;
Shape159: TShapeNode;
Transform160: TTransformNode;
Shape161: TShapeNode;
Transform162: TTransformNode;
Shape163: TShapeNode;
Transform164: TTransformNode;
Shape165: TShapeNode;
Transform166: TTransformNode;
Shape167: TShapeNode;
Transform168: TTransformNode;
Shape169: TShapeNode;
HAnimSite170: THAnimSiteNode;
Shape171: TShapeNode;
HAnimSite172: THAnimSiteNode;
Shape173: TShapeNode;
HAnimJoint174: THAnimJointNode;
HAnimSegment175: THAnimSegmentNode;
Transform176: TTransformNode;
Shape177: TShapeNode;
Shape178: TShapeNode;
Appearance179: TAppearanceNode;
IndexedLineSet180: TIndexedLineSetNode;
Coordinate181: TCoordinateNode;
Transform182: TTransformNode;
Shape183: TShapeNode;
Transform184: TTransformNode;
Shape185: TShapeNode;
Transform186: TTransformNode;
Shape187: TShapeNode;
Transform188: TTransformNode;
Shape189: TShapeNode;
HAnimSite190: THAnimSiteNode;
Shape191: TShapeNode;
HAnimSite192: THAnimSiteNode;
Shape193: TShapeNode;
HAnimJoint194: THAnimJointNode;
HAnimSegment195: THAnimSegmentNode;
Transform196: TTransformNode;
Shape197: TShapeNode;
Shape198: TShapeNode;
Appearance199: TAppearanceNode;
IndexedLineSet200: TIndexedLineSetNode;
Coordinate201: TCoordinateNode;
Transform202: TTransformNode;
Shape203: TShapeNode;
Transform204: TTransformNode;
Shape205: TShapeNode;
Transform206: TTransformNode;
Shape207: TShapeNode;
HAnimJoint208: THAnimJointNode;
HAnimSegment209: THAnimSegmentNode;
Transform210: TTransformNode;
Shape211: TShapeNode;
Shape212: TShapeNode;
Appearance213: TAppearanceNode;
IndexedLineSet214: TIndexedLineSetNode;
Coordinate215: TCoordinateNode;
Transform216: TTransformNode;
Shape217: TShapeNode;
Transform218: TTransformNode;
Shape219: TShapeNode;
Transform220: TTransformNode;
Shape221: TShapeNode;
Transform222: TTransformNode;
Shape223: TShapeNode;
HAnimSite224: THAnimSiteNode;
Shape225: TShapeNode;
HAnimJoint226: THAnimJointNode;
HAnimSegment227: THAnimSegmentNode;
Transform228: TTransformNode;
Shape229: TShapeNode;
Shape230: TShapeNode;
Appearance231: TAppearanceNode;
IndexedLineSet232: TIndexedLineSetNode;
Coordinate233: TCoordinateNode;
Transform234: TTransformNode;
Shape235: TShapeNode;
Transform236: TTransformNode;
Shape237: TShapeNode;
Transform238: TTransformNode;
Shape239: TShapeNode;
Transform240: TTransformNode;
Shape241: TShapeNode;
Transform242: TTransformNode;
Shape243: TShapeNode;
Transform244: TTransformNode;
Shape245: TShapeNode;
Transform246: TTransformNode;
Shape247: TShapeNode;
Transform248: TTransformNode;
Shape249: TShapeNode;
Transform250: TTransformNode;
Shape251: TShapeNode;
HAnimSite252: THAnimSiteNode;
Shape253: TShapeNode;
HAnimSite254: THAnimSiteNode;
Shape255: TShapeNode;
HAnimJoint256: THAnimJointNode;
HAnimSegment257: THAnimSegmentNode;
Transform258: TTransformNode;
Shape259: TShapeNode;
Shape260: TShapeNode;
Appearance261: TAppearanceNode;
IndexedLineSet262: TIndexedLineSetNode;
Coordinate263: TCoordinateNode;
Transform264: TTransformNode;
Shape265: TShapeNode;
Transform266: TTransformNode;
Shape267: TShapeNode;
Transform268: TTransformNode;
Shape269: TShapeNode;
Transform270: TTransformNode;
Shape271: TShapeNode;
Transform272: TTransformNode;
Shape273: TShapeNode;
Transform274: TTransformNode;
Shape275: TShapeNode;
HAnimSite276: THAnimSiteNode;
Shape277: TShapeNode;
HAnimSite278: THAnimSiteNode;
Shape279: TShapeNode;
HAnimSite280: THAnimSiteNode;
Shape281: TShapeNode;
HAnimJoint282: THAnimJointNode;
HAnimSegment283: THAnimSegmentNode;
Transform284: TTransformNode;
Shape285: TShapeNode;
Shape286: TShapeNode;
Appearance287: TAppearanceNode;
IndexedLineSet288: TIndexedLineSetNode;
Coordinate289: TCoordinateNode;
Transform290: TTransformNode;
Shape291: TShapeNode;
Transform292: TTransformNode;
Shape293: TShapeNode;
Transform294: TTransformNode;
Shape295: TShapeNode;
Transform296: TTransformNode;
Shape297: TShapeNode;
Transform298: TTransformNode;
Shape299: TShapeNode;
Transform300: TTransformNode;
Shape301: TShapeNode;
Transform302: TTransformNode;
Shape303: TShapeNode;
Transform304: TTransformNode;
Shape305: TShapeNode;
HAnimSite306: THAnimSiteNode;
Shape307: TShapeNode;
HAnimSite308: THAnimSiteNode;
Shape309: TShapeNode;
HAnimJoint310: THAnimJointNode;
HAnimSegment311: THAnimSegmentNode;
Transform312: TTransformNode;
Shape313: TShapeNode;
Shape314: TShapeNode;
Appearance315: TAppearanceNode;
IndexedLineSet316: TIndexedLineSetNode;
Coordinate317: TCoordinateNode;
Transform318: TTransformNode;
Shape319: TShapeNode;
Transform320: TTransformNode;
Shape321: TShapeNode;
Transform322: TTransformNode;
Shape323: TShapeNode;
Transform324: TTransformNode;
Shape325: TShapeNode;
HAnimSite326: THAnimSiteNode;
Shape327: TShapeNode;
HAnimSite328: THAnimSiteNode;
Shape329: TShapeNode;
HAnimJoint330: THAnimJointNode;
HAnimSegment331: THAnimSegmentNode;
Transform332: TTransformNode;
Shape333: TShapeNode;
Shape334: TShapeNode;
Appearance335: TAppearanceNode;
IndexedLineSet336: TIndexedLineSetNode;
Coordinate337: TCoordinateNode;
Transform338: TTransformNode;
Shape339: TShapeNode;
Transform340: TTransformNode;
Shape341: TShapeNode;
Transform342: TTransformNode;
Shape343: TShapeNode;
HAnimJoint344: THAnimJointNode;
HAnimSegment345: THAnimSegmentNode;
Transform346: TTransformNode;
Shape347: TShapeNode;
Shape348: TShapeNode;
Appearance349: TAppearanceNode;
IndexedLineSet350: TIndexedLineSetNode;
Coordinate351: TCoordinateNode;
Transform352: TTransformNode;
Shape353: TShapeNode;
Transform354: TTransformNode;
Shape355: TShapeNode;
Transform356: TTransformNode;
Shape357: TShapeNode;
Transform358: TTransformNode;
Shape359: TShapeNode;
HAnimSite360: THAnimSiteNode;
Shape361: TShapeNode;
HAnimJoint362: THAnimJointNode;
HAnimSegment363: THAnimSegmentNode;
Transform364: TTransformNode;
Shape365: TShapeNode;
Shape366: TShapeNode;
Appearance367: TAppearanceNode;
IndexedLineSet368: TIndexedLineSetNode;
Coordinate369: TCoordinateNode;
Transform370: TTransformNode;
Shape371: TShapeNode;
Transform372: TTransformNode;
Shape373: TShapeNode;
Transform374: TTransformNode;
Shape375: TShapeNode;
Transform376: TTransformNode;
Shape377: TShapeNode;
Transform378: TTransformNode;
Shape379: TShapeNode;
Transform380: TTransformNode;
Shape381: TShapeNode;
Transform382: TTransformNode;
Shape383: TShapeNode;
Transform384: TTransformNode;
Shape385: TShapeNode;
Transform386: TTransformNode;
Shape387: TShapeNode;
HAnimSite388: THAnimSiteNode;
Shape389: TShapeNode;
HAnimSite390: THAnimSiteNode;
Shape391: TShapeNode;
HAnimJoint392: THAnimJointNode;
HAnimSegment393: THAnimSegmentNode;
Shape394: TShapeNode;
Appearance395: TAppearanceNode;
IndexedLineSet396: TIndexedLineSetNode;
Coordinate397: TCoordinateNode;
HAnimSegment398: THAnimSegmentNode;
Shape399: TShapeNode;
Appearance400: TAppearanceNode;
IndexedLineSet401: TIndexedLineSetNode;
Coordinate402: TCoordinateNode;
HAnimSite403: THAnimSiteNode;
Shape404: TShapeNode;
HAnimSite405: THAnimSiteNode;
Shape406: TShapeNode;
HAnimJoint407: THAnimJointNode;
HAnimSegment408: THAnimSegmentNode;
Shape409: TShapeNode;
Appearance410: TAppearanceNode;
IndexedLineSet411: TIndexedLineSetNode;
Coordinate412: TCoordinateNode;
Transform413: TTransformNode;
Shape414: TShapeNode;
HAnimJoint415: THAnimJointNode;
HAnimSegment416: THAnimSegmentNode;
Shape417: TShapeNode;
Appearance418: TAppearanceNode;
IndexedLineSet419: TIndexedLineSetNode;
Coordinate420: TCoordinateNode;
Transform421: TTransformNode;
Shape422: TShapeNode;
HAnimJoint423: THAnimJointNode;
HAnimSegment424: THAnimSegmentNode;
Shape425: TShapeNode;
Appearance426: TAppearanceNode;
IndexedLineSet427: TIndexedLineSetNode;
Coordinate428: TCoordinateNode;
Transform429: TTransformNode;
Shape430: TShapeNode;
Transform431: TTransformNode;
Shape432: TShapeNode;
Transform433: TTransformNode;
Shape434: TShapeNode;
Transform435: TTransformNode;
Shape436: TShapeNode;
Transform437: TTransformNode;
Shape438: TShapeNode;
Transform439: TTransformNode;
Shape440: TShapeNode;
Transform441: TTransformNode;
Shape442: TShapeNode;
HAnimSite443: THAnimSiteNode;
Shape444: TShapeNode;
HAnimSite445: THAnimSiteNode;
Shape446: TShapeNode;
HAnimSite447: THAnimSiteNode;
Shape448: TShapeNode;
HAnimJoint449: THAnimJointNode;
HAnimSegment450: THAnimSegmentNode;
Shape451: TShapeNode;
Appearance452: TAppearanceNode;
IndexedLineSet453: TIndexedLineSetNode;
Coordinate454: TCoordinateNode;
Transform455: TTransformNode;
Shape456: TShapeNode;
HAnimJoint457: THAnimJointNode;
HAnimSegment458: THAnimSegmentNode;
Shape459: TShapeNode;
Appearance460: TAppearanceNode;
IndexedLineSet461: TIndexedLineSetNode;
Coordinate462: TCoordinateNode;
Transform463: TTransformNode;
Shape464: TShapeNode;
HAnimJoint465: THAnimJointNode;
HAnimSegment466: THAnimSegmentNode;
Shape467: TShapeNode;
Appearance468: TAppearanceNode;
IndexedLineSet469: TIndexedLineSetNode;
Coordinate470: TCoordinateNode;
Transform471: TTransformNode;
Shape472: TShapeNode;
HAnimJoint473: THAnimJointNode;
HAnimSegment474: THAnimSegmentNode;
Shape475: TShapeNode;
Appearance476: TAppearanceNode;
IndexedLineSet477: TIndexedLineSetNode;
Coordinate478: TCoordinateNode;
Transform479: TTransformNode;
Shape480: TShapeNode;
HAnimSite481: THAnimSiteNode;
Shape482: TShapeNode;
HAnimJoint483: THAnimJointNode;
HAnimSegment484: THAnimSegmentNode;
Shape485: TShapeNode;
Appearance486: TAppearanceNode;
IndexedLineSet487: TIndexedLineSetNode;
Coordinate488: TCoordinateNode;
Transform489: TTransformNode;
Shape490: TShapeNode;
HAnimSite491: THAnimSiteNode;
Shape492: TShapeNode;
HAnimSite493: THAnimSiteNode;
Shape494: TShapeNode;
HAnimJoint495: THAnimJointNode;
HAnimSegment496: THAnimSegmentNode;
Shape497: TShapeNode;
Appearance498: TAppearanceNode;
IndexedLineSet499: TIndexedLineSetNode;
Coordinate500: TCoordinateNode;
Transform501: TTransformNode;
Shape502: TShapeNode;
HAnimJoint503: THAnimJointNode;
HAnimSegment504: THAnimSegmentNode;
Shape505: TShapeNode;
Appearance506: TAppearanceNode;
IndexedLineSet507: TIndexedLineSetNode;
Coordinate508: TCoordinateNode;
Transform509: TTransformNode;
Shape510: TShapeNode;
HAnimJoint511: THAnimJointNode;
HAnimSegment512: THAnimSegmentNode;
Shape513: TShapeNode;
Appearance514: TAppearanceNode;
IndexedLineSet515: TIndexedLineSetNode;
Coordinate516: TCoordinateNode;
Transform517: TTransformNode;
Shape518: TShapeNode;
HAnimJoint519: THAnimJointNode;
HAnimSegment520: THAnimSegmentNode;
Shape521: TShapeNode;
Appearance522: TAppearanceNode;
IndexedLineSet523: TIndexedLineSetNode;
Coordinate524: TCoordinateNode;
Transform525: TTransformNode;
Shape526: TShapeNode;
HAnimJoint527: THAnimJointNode;
HAnimSegment528: THAnimSegmentNode;
Shape529: TShapeNode;
Appearance530: TAppearanceNode;
IndexedLineSet531: TIndexedLineSetNode;
Coordinate532: TCoordinateNode;
Transform533: TTransformNode;
Shape534: TShapeNode;
Transform535: TTransformNode;
Shape536: TShapeNode;
HAnimJoint537: THAnimJointNode;
HAnimSegment538: THAnimSegmentNode;
Shape539: TShapeNode;
Appearance540: TAppearanceNode;
IndexedLineSet541: TIndexedLineSetNode;
Coordinate542: TCoordinateNode;
Transform543: TTransformNode;
Shape544: TShapeNode;
HAnimJoint545: THAnimJointNode;
HAnimSegment546: THAnimSegmentNode;
Shape547: TShapeNode;
Appearance548: TAppearanceNode;
IndexedLineSet549: TIndexedLineSetNode;
Coordinate550: TCoordinateNode;
Transform551: TTransformNode;
Shape552: TShapeNode;
HAnimJoint553: THAnimJointNode;
HAnimSegment554: THAnimSegmentNode;
Shape555: TShapeNode;
Appearance556: TAppearanceNode;
IndexedLineSet557: TIndexedLineSetNode;
Coordinate558: TCoordinateNode;
Transform559: TTransformNode;
Shape560: TShapeNode;
HAnimSite561: THAnimSiteNode;
Shape562: TShapeNode;
HAnimSite563: THAnimSiteNode;
Shape564: TShapeNode;
HAnimJoint565: THAnimJointNode;
HAnimSegment566: THAnimSegmentNode;
Shape567: TShapeNode;
Appearance568: TAppearanceNode;
IndexedLineSet569: TIndexedLineSetNode;
Coordinate570: TCoordinateNode;
Transform571: TTransformNode;
Shape572: TShapeNode;
HAnimSite573: THAnimSiteNode;
Shape574: TShapeNode;
HAnimSite575: THAnimSiteNode;
Shape576: TShapeNode;
HAnimJoint577: THAnimJointNode;
HAnimSegment578: THAnimSegmentNode;
Shape579: TShapeNode;
Appearance580: TAppearanceNode;
IndexedLineSet581: TIndexedLineSetNode;
Coordinate582: TCoordinateNode;
Transform583: TTransformNode;
Shape584: TShapeNode;
HAnimJoint585: THAnimJointNode;
HAnimSegment586: THAnimSegmentNode;
Transform587: TTransformNode;
Shape588: TShapeNode;
Shape589: TShapeNode;
Appearance590: TAppearanceNode;
IndexedLineSet591: TIndexedLineSetNode;
Coordinate592: TCoordinateNode;
HAnimJoint593: THAnimJointNode;
HAnimSegment594: THAnimSegmentNode;
Shape595: TShapeNode;
Appearance596: TAppearanceNode;
IndexedLineSet597: TIndexedLineSetNode;
Coordinate598: TCoordinateNode;
Transform599: TTransformNode;
Shape600: TShapeNode;
HAnimJoint601: THAnimJointNode;
HAnimSegment602: THAnimSegmentNode;
Shape603: TShapeNode;
Appearance604: TAppearanceNode;
IndexedLineSet605: TIndexedLineSetNode;
Coordinate606: TCoordinateNode;
Transform607: TTransformNode;
Shape608: TShapeNode;
HAnimJoint609: THAnimJointNode;
HAnimSegment610: THAnimSegmentNode;
Shape611: TShapeNode;
Appearance612: TAppearanceNode;
IndexedLineSet613: TIndexedLineSetNode;
Coordinate614: TCoordinateNode;
Transform615: TTransformNode;
Shape616: TShapeNode;
HAnimJoint617: THAnimJointNode;
HAnimSegment618: THAnimSegmentNode;
Shape619: TShapeNode;
Appearance620: TAppearanceNode;
IndexedLineSet621: TIndexedLineSetNode;
Coordinate622: TCoordinateNode;
Transform623: TTransformNode;
Shape624: TShapeNode;
HAnimJoint625: THAnimJointNode;
HAnimSegment626: THAnimSegmentNode;
Shape627: TShapeNode;
Appearance628: TAppearanceNode;
IndexedLineSet629: TIndexedLineSetNode;
Coordinate630: TCoordinateNode;
Transform631: TTransformNode;
Shape632: TShapeNode;
HAnimSite633: THAnimSiteNode;
Shape634: TShapeNode;
HAnimSite635: THAnimSiteNode;
Shape636: TShapeNode;
HAnimSite637: THAnimSiteNode;
Shape638: TShapeNode;
HAnimSite639: THAnimSiteNode;
Shape640: TShapeNode;
HAnimSite641: THAnimSiteNode;
Shape642: TShapeNode;
HAnimSite643: THAnimSiteNode;
Shape644: TShapeNode;
HAnimSite645: THAnimSiteNode;
Shape646: TShapeNode;
HAnimSite647: THAnimSiteNode;
Shape648: TShapeNode;
HAnimSite649: THAnimSiteNode;
Shape650: TShapeNode;
HAnimSite651: THAnimSiteNode;
Shape652: TShapeNode;
HAnimJoint653: THAnimJointNode;
HAnimSegment654: THAnimSegmentNode;
Shape655: TShapeNode;
Appearance656: TAppearanceNode;
IndexedLineSet657: TIndexedLineSetNode;
Coordinate658: TCoordinateNode;
Transform659: TTransformNode;
Shape660: TShapeNode;
HAnimJoint661: THAnimJointNode;
HAnimSegment662: THAnimSegmentNode;
Shape663: TShapeNode;
Appearance664: TAppearanceNode;
IndexedLineSet665: TIndexedLineSetNode;
Coordinate666: TCoordinateNode;
Transform667: TTransformNode;
Shape668: TShapeNode;
HAnimJoint669: THAnimJointNode;
HAnimSegment670: THAnimSegmentNode;
Shape671: TShapeNode;
Appearance672: TAppearanceNode;
IndexedLineSet673: TIndexedLineSetNode;
Coordinate674: TCoordinateNode;
Transform675: TTransformNode;
Shape676: TShapeNode;
HAnimSite677: THAnimSiteNode;
Shape678: TShapeNode;
HAnimJoint679: THAnimJointNode;
HAnimSegment680: THAnimSegmentNode;
Shape681: TShapeNode;
Appearance682: TAppearanceNode;
IndexedLineSet683: TIndexedLineSetNode;
Coordinate684: TCoordinateNode;
Transform685: TTransformNode;
Shape686: TShapeNode;
Transform687: TTransformNode;
Shape688: TShapeNode;
HAnimSite689: THAnimSiteNode;
Shape690: TShapeNode;
HAnimSite691: THAnimSiteNode;
Shape692: TShapeNode;
HAnimSite693: THAnimSiteNode;
Shape694: TShapeNode;
HAnimJoint695: THAnimJointNode;
HAnimSegment696: THAnimSegmentNode;
Shape697: TShapeNode;
Appearance698: TAppearanceNode;
IndexedLineSet699: TIndexedLineSetNode;
Coordinate700: TCoordinateNode;
Transform701: TTransformNode;
Shape702: TShapeNode;
Transform703: TTransformNode;
Shape704: TShapeNode;
Transform705: TTransformNode;
Shape706: TShapeNode;
Transform707: TTransformNode;
Shape708: TShapeNode;
Transform709: TTransformNode;
Shape710: TShapeNode;
Transform711: TTransformNode;
Shape712: TShapeNode;
HAnimSite713: THAnimSiteNode;
Shape714: TShapeNode;
HAnimSite715: THAnimSiteNode;
Shape716: TShapeNode;
HAnimSite717: THAnimSiteNode;
Shape718: TShapeNode;
HAnimJoint719: THAnimJointNode;
HAnimSegment720: THAnimSegmentNode;
Shape721: TShapeNode;
Appearance722: TAppearanceNode;
IndexedLineSet723: TIndexedLineSetNode;
Coordinate724: TCoordinateNode;
Transform725: TTransformNode;
Shape726: TShapeNode;
Transform727: TTransformNode;
Shape728: TShapeNode;
Transform729: TTransformNode;
Shape730: TShapeNode;
Transform731: TTransformNode;
Shape732: TShapeNode;
Transform733: TTransformNode;
Shape734: TShapeNode;
Transform735: TTransformNode;
Shape736: TShapeNode;
HAnimSite737: THAnimSiteNode;
Shape738: TShapeNode;
HAnimSite739: THAnimSiteNode;
Shape740: TShapeNode;
HAnimJoint741: THAnimJointNode;
HAnimSegment742: THAnimSegmentNode;
Shape743: TShapeNode;
Appearance744: TAppearanceNode;
IndexedLineSet745: TIndexedLineSetNode;
Coordinate746: TCoordinateNode;
Transform747: TTransformNode;
Shape748: TShapeNode;
HAnimSite749: THAnimSiteNode;
Shape750: TShapeNode;
HAnimSite751: THAnimSiteNode;
Shape752: TShapeNode;
HAnimSite753: THAnimSiteNode;
Shape754: TShapeNode;
HAnimJoint755: THAnimJointNode;
HAnimSegment756: THAnimSegmentNode;
Shape757: TShapeNode;
Appearance758: TAppearanceNode;
IndexedLineSet759: TIndexedLineSetNode;
Coordinate760: TCoordinateNode;
Transform761: TTransformNode;
Shape762: TShapeNode;
HAnimJoint763: THAnimJointNode;
HAnimSegment764: THAnimSegmentNode;
Shape765: TShapeNode;
Appearance766: TAppearanceNode;
IndexedLineSet767: TIndexedLineSetNode;
Coordinate768: TCoordinateNode;
Transform769: TTransformNode;
Shape770: TShapeNode;
HAnimJoint771: THAnimJointNode;
HAnimSegment772: THAnimSegmentNode;
Shape773: TShapeNode;
Appearance774: TAppearanceNode;
IndexedLineSet775: TIndexedLineSetNode;
Coordinate776: TCoordinateNode;
Transform777: TTransformNode;
Shape778: TShapeNode;
HAnimSite779: THAnimSiteNode;
Shape780: TShapeNode;
HAnimJoint781: THAnimJointNode;
HAnimSegment782: THAnimSegmentNode;
Shape783: TShapeNode;
Appearance784: TAppearanceNode;
IndexedLineSet785: TIndexedLineSetNode;
Coordinate786: TCoordinateNode;
Transform787: TTransformNode;
Shape788: TShapeNode;
HAnimJoint789: THAnimJointNode;
HAnimSegment790: THAnimSegmentNode;
Shape791: TShapeNode;
Appearance792: TAppearanceNode;
IndexedLineSet793: TIndexedLineSetNode;
Coordinate794: TCoordinateNode;
Transform795: TTransformNode;
Shape796: TShapeNode;
HAnimJoint797: THAnimJointNode;
HAnimSegment798: THAnimSegmentNode;
Shape799: TShapeNode;
Appearance800: TAppearanceNode;
IndexedLineSet801: TIndexedLineSetNode;
Coordinate802: TCoordinateNode;
Transform803: TTransformNode;
Shape804: TShapeNode;
HAnimJoint805: THAnimJointNode;
HAnimSegment806: THAnimSegmentNode;
Shape807: TShapeNode;
Appearance808: TAppearanceNode;
IndexedLineSet809: TIndexedLineSetNode;
Coordinate810: TCoordinateNode;
Transform811: TTransformNode;
Shape812: TShapeNode;
HAnimSite813: THAnimSiteNode;
Shape814: TShapeNode;
HAnimSite815: THAnimSiteNode;
Shape816: TShapeNode;
HAnimJoint817: THAnimJointNode;
HAnimSegment818: THAnimSegmentNode;
Shape819: TShapeNode;
Appearance820: TAppearanceNode;
IndexedLineSet821: TIndexedLineSetNode;
Coordinate822: TCoordinateNode;
Transform823: TTransformNode;
Shape824: TShapeNode;
HAnimJoint825: THAnimJointNode;
HAnimSegment826: THAnimSegmentNode;
Shape827: TShapeNode;
Appearance828: TAppearanceNode;
IndexedLineSet829: TIndexedLineSetNode;
Coordinate830: TCoordinateNode;
Transform831: TTransformNode;
Shape832: TShapeNode;
HAnimJoint833: THAnimJointNode;
HAnimSegment834: THAnimSegmentNode;
Shape835: TShapeNode;
Appearance836: TAppearanceNode;
IndexedLineSet837: TIndexedLineSetNode;
Coordinate838: TCoordinateNode;
Transform839: TTransformNode;
Shape840: TShapeNode;
HAnimJoint841: THAnimJointNode;
HAnimSegment842: THAnimSegmentNode;
Shape843: TShapeNode;
Appearance844: TAppearanceNode;
IndexedLineSet845: TIndexedLineSetNode;
Coordinate846: TCoordinateNode;
HAnimSite847: THAnimSiteNode;
Shape848: TShapeNode;
Transform849: TTransformNode;
Shape850: TShapeNode;
HAnimJoint851: THAnimJointNode;
HAnimSegment852: THAnimSegmentNode;
Shape853: TShapeNode;
Appearance854: TAppearanceNode;
IndexedLineSet855: TIndexedLineSetNode;
Coordinate856: TCoordinateNode;
Transform857: TTransformNode;
Shape858: TShapeNode;
HAnimJoint859: THAnimJointNode;
HAnimSegment860: THAnimSegmentNode;
Shape861: TShapeNode;
Appearance862: TAppearanceNode;
IndexedLineSet863: TIndexedLineSetNode;
Coordinate864: TCoordinateNode;
Transform865: TTransformNode;
Shape866: TShapeNode;
HAnimJoint867: THAnimJointNode;
HAnimSegment868: THAnimSegmentNode;
Shape869: TShapeNode;
Appearance870: TAppearanceNode;
IndexedLineSet871: TIndexedLineSetNode;
Coordinate872: TCoordinateNode;
Transform873: TTransformNode;
Shape874: TShapeNode;
HAnimJoint875: THAnimJointNode;
HAnimSegment876: THAnimSegmentNode;
Shape877: TShapeNode;
Appearance878: TAppearanceNode;
IndexedLineSet879: TIndexedLineSetNode;
Coordinate880: TCoordinateNode;
Transform881: TTransformNode;
Shape882: TShapeNode;
HAnimSite883: THAnimSiteNode;
Shape884: TShapeNode;
HAnimJoint885: THAnimJointNode;
HAnimSegment886: THAnimSegmentNode;
Shape887: TShapeNode;
Appearance888: TAppearanceNode;
IndexedLineSet889: TIndexedLineSetNode;
Coordinate890: TCoordinateNode;
Transform891: TTransformNode;
Shape892: TShapeNode;
HAnimJoint893: THAnimJointNode;
HAnimSegment894: THAnimSegmentNode;
Shape895: TShapeNode;
Appearance896: TAppearanceNode;
IndexedLineSet897: TIndexedLineSetNode;
Coordinate898: TCoordinateNode;
Transform899: TTransformNode;
Shape900: TShapeNode;
HAnimJoint901: THAnimJointNode;
HAnimSegment902: THAnimSegmentNode;
Transform903: TTransformNode;
Shape904: TShapeNode;
Shape905: TShapeNode;
Appearance906: TAppearanceNode;
IndexedLineSet907: TIndexedLineSetNode;
Coordinate908: TCoordinateNode;
HAnimJoint909: THAnimJointNode;
HAnimSegment910: THAnimSegmentNode;
Shape911: TShapeNode;
Appearance912: TAppearanceNode;
IndexedLineSet913: TIndexedLineSetNode;
Coordinate914: TCoordinateNode;
Transform915: TTransformNode;
Shape916: TShapeNode;
HAnimSite917: THAnimSiteNode;
Shape918: TShapeNode;
HAnimJoint919: THAnimJointNode;
HAnimSegment920: THAnimSegmentNode;
Shape921: TShapeNode;
Appearance922: TAppearanceNode;
IndexedLineSet923: TIndexedLineSetNode;
Coordinate924: TCoordinateNode;
Transform925: TTransformNode;
Shape926: TShapeNode;
HAnimSite927: THAnimSiteNode;
Shape928: TShapeNode;
HAnimJoint929: THAnimJointNode;
HAnimSegment930: THAnimSegmentNode;
Shape931: TShapeNode;
Appearance932: TAppearanceNode;
IndexedLineSet933: TIndexedLineSetNode;
Coordinate934: TCoordinateNode;
Transform935: TTransformNode;
Shape936: TShapeNode;
Transform937: TTransformNode;
Shape938: TShapeNode;
HAnimSite939: THAnimSiteNode;
Shape940: TShapeNode;
HAnimSite941: THAnimSiteNode;
Shape942: TShapeNode;
HAnimSite943: THAnimSiteNode;
Shape944: TShapeNode;
HAnimJoint945: THAnimJointNode;
HAnimSegment946: THAnimSegmentNode;
Transform947: TTransformNode;
Shape948: TShapeNode;
Shape949: TShapeNode;
Appearance950: TAppearanceNode;
IndexedLineSet951: TIndexedLineSetNode;
Coordinate952: TCoordinateNode;
Transform953: TTransformNode;
Shape954: TShapeNode;
Transform955: TTransformNode;
Shape956: TShapeNode;
Transform957: TTransformNode;
Shape958: TShapeNode;
Transform959: TTransformNode;
Shape960: TShapeNode;
Transform961: TTransformNode;
Shape962: TShapeNode;
Transform963: TTransformNode;
Shape964: TShapeNode;
Transform965: TTransformNode;
Shape966: TShapeNode;
Transform967: TTransformNode;
Shape968: TShapeNode;
HAnimSite969: THAnimSiteNode;
Shape970: TShapeNode;
HAnimSite971: THAnimSiteNode;
Shape972: TShapeNode;
HAnimSite973: THAnimSiteNode;
Shape974: TShapeNode;
HAnimJoint975: THAnimJointNode;
HAnimSegment976: THAnimSegmentNode;
Shape977: TShapeNode;
Appearance978: TAppearanceNode;
IndexedLineSet979: TIndexedLineSetNode;
Coordinate980: TCoordinateNode;
Transform981: TTransformNode;
Shape982: TShapeNode;
Transform983: TTransformNode;
Shape984: TShapeNode;
Transform985: TTransformNode;
Shape986: TShapeNode;
Transform987: TTransformNode;
Shape988: TShapeNode;
Transform989: TTransformNode;
Shape990: TShapeNode;
Transform991: TTransformNode;
Shape992: TShapeNode;
HAnimSite993: THAnimSiteNode;
Shape994: TShapeNode;
HAnimSite995: THAnimSiteNode;
Shape996: TShapeNode;
HAnimJoint997: THAnimJointNode;
HAnimSegment998: THAnimSegmentNode;
Shape999: TShapeNode;
Appearance1000: TAppearanceNode;
IndexedLineSet1001: TIndexedLineSetNode;
Coordinate1002: TCoordinateNode;
Transform1003: TTransformNode;
Shape1004: TShapeNode;
HAnimSite1005: THAnimSiteNode;
Shape1006: TShapeNode;
HAnimJoint1007: THAnimJointNode;
HAnimSegment1008: THAnimSegmentNode;
Shape1009: TShapeNode;
Appearance1010: TAppearanceNode;
IndexedLineSet1011: TIndexedLineSetNode;
Coordinate1012: TCoordinateNode;
Transform1013: TTransformNode;
Shape1014: TShapeNode;
HAnimJoint1015: THAnimJointNode;
HAnimSegment1016: THAnimSegmentNode;
Shape1017: TShapeNode;
Appearance1018: TAppearanceNode;
IndexedLineSet1019: TIndexedLineSetNode;
Coordinate1020: TCoordinateNode;
Transform1021: TTransformNode;
Shape1022: TShapeNode;
HAnimJoint1023: THAnimJointNode;
HAnimSegment1024: THAnimSegmentNode;
Shape1025: TShapeNode;
Appearance1026: TAppearanceNode;
IndexedLineSet1027: TIndexedLineSetNode;
Coordinate1028: TCoordinateNode;
Transform1029: TTransformNode;
Shape1030: TShapeNode;
Transform1031: TTransformNode;
Shape1032: TShapeNode;
HAnimSite1033: THAnimSiteNode;
Shape1034: TShapeNode;
HAnimJoint1035: THAnimJointNode;
HAnimSegment1036: THAnimSegmentNode;
Shape1037: TShapeNode;
Appearance1038: TAppearanceNode;
IndexedLineSet1039: TIndexedLineSetNode;
Coordinate1040: TCoordinateNode;
Transform1041: TTransformNode;
Shape1042: TShapeNode;
HAnimSite1043: THAnimSiteNode;
Shape1044: TShapeNode;
HAnimJoint1045: THAnimJointNode;
HAnimSegment1046: THAnimSegmentNode;
Shape1047: TShapeNode;
Appearance1048: TAppearanceNode;
IndexedLineSet1049: TIndexedLineSetNode;
Coordinate1050: TCoordinateNode;
Transform1051: TTransformNode;
Shape1052: TShapeNode;
HAnimJoint1053: THAnimJointNode;
HAnimSegment1054: THAnimSegmentNode;
Shape1055: TShapeNode;
Appearance1056: TAppearanceNode;
IndexedLineSet1057: TIndexedLineSetNode;
Coordinate1058: TCoordinateNode;
Transform1059: TTransformNode;
Shape1060: TShapeNode;
HAnimJoint1061: THAnimJointNode;
HAnimSegment1062: THAnimSegmentNode;
Shape1063: TShapeNode;
Appearance1064: TAppearanceNode;
IndexedLineSet1065: TIndexedLineSetNode;
Coordinate1066: TCoordinateNode;
Transform1067: TTransformNode;
Shape1068: TShapeNode;
HAnimSite1069: THAnimSiteNode;
Shape1070: TShapeNode;
HAnimJoint1071: THAnimJointNode;
HAnimSegment1072: THAnimSegmentNode;
Shape1073: TShapeNode;
Appearance1074: TAppearanceNode;
IndexedLineSet1075: TIndexedLineSetNode;
Coordinate1076: TCoordinateNode;
Transform1077: TTransformNode;
Shape1078: TShapeNode;
HAnimJoint1079: THAnimJointNode;
HAnimSegment1080: THAnimSegmentNode;
Shape1081: TShapeNode;
Appearance1082: TAppearanceNode;
IndexedLineSet1083: TIndexedLineSetNode;
Coordinate1084: TCoordinateNode;
Transform1085: TTransformNode;
Shape1086: TShapeNode;
HAnimJoint1087: THAnimJointNode;
HAnimSegment1088: THAnimSegmentNode;
Shape1089: TShapeNode;
Appearance1090: TAppearanceNode;
IndexedLineSet1091: TIndexedLineSetNode;
Coordinate1092: TCoordinateNode;
Transform1093: TTransformNode;
Shape1094: TShapeNode;
HAnimJoint1095: THAnimJointNode;
HAnimSegment1096: THAnimSegmentNode;
Shape1097: TShapeNode;
Appearance1098: TAppearanceNode;
IndexedLineSet1099: TIndexedLineSetNode;
Coordinate1100: TCoordinateNode;
Transform1101: TTransformNode;
Shape1102: TShapeNode;
HAnimSite1103: THAnimSiteNode;
Shape1104: TShapeNode;
HAnimSite1105: THAnimSiteNode;
Shape1106: TShapeNode;
HAnimJoint1107: THAnimJointNode;
HAnimSegment1108: THAnimSegmentNode;
Shape1109: TShapeNode;
Appearance1110: TAppearanceNode;
IndexedLineSet1111: TIndexedLineSetNode;
Coordinate1112: TCoordinateNode;
Transform1113: TTransformNode;
Shape1114: TShapeNode;
HAnimJoint1115: THAnimJointNode;
HAnimSegment1116: THAnimSegmentNode;
Shape1117: TShapeNode;
Appearance1118: TAppearanceNode;
IndexedLineSet1119: TIndexedLineSetNode;
Coordinate1120: TCoordinateNode;
Transform1121: TTransformNode;
Shape1122: TShapeNode;
HAnimJoint1123: THAnimJointNode;
HAnimSegment1124: THAnimSegmentNode;
Shape1125: TShapeNode;
Appearance1126: TAppearanceNode;
IndexedLineSet1127: TIndexedLineSetNode;
Coordinate1128: TCoordinateNode;
Transform1129: TTransformNode;
Shape1130: TShapeNode;
HAnimJoint1131: THAnimJointNode;
HAnimSegment1132: THAnimSegmentNode;
Shape1133: TShapeNode;
Appearance1134: TAppearanceNode;
IndexedLineSet1135: TIndexedLineSetNode;
Coordinate1136: TCoordinateNode;
Transform1137: TTransformNode;
Shape1138: TShapeNode;
HAnimSite1139: THAnimSiteNode;
Shape1140: TShapeNode;
HAnimJoint1141: THAnimJointNode;
HAnimSegment1142: THAnimSegmentNode;
Shape1143: TShapeNode;
Appearance1144: TAppearanceNode;
IndexedLineSet1145: TIndexedLineSetNode;
Coordinate1146: TCoordinateNode;
Transform1147: TTransformNode;
Shape1148: TShapeNode;
HAnimSite1149: THAnimSiteNode;
Shape1150: TShapeNode;
HAnimJoint1151: THAnimJointNode;
HAnimSegment1152: THAnimSegmentNode;
Shape1153: TShapeNode;
Appearance1154: TAppearanceNode;
IndexedLineSet1155: TIndexedLineSetNode;
Coordinate1156: TCoordinateNode;
Transform1157: TTransformNode;
Shape1158: TShapeNode;
HAnimJoint1159: THAnimJointNode;
HAnimSegment1160: THAnimSegmentNode;
Shape1161: TShapeNode;
Appearance1162: TAppearanceNode;
IndexedLineSet1163: TIndexedLineSetNode;
Coordinate1164: TCoordinateNode;
Transform1165: TTransformNode;
Shape1166: TShapeNode;
HAnimJoint1167: THAnimJointNode;
HAnimSegment1168: THAnimSegmentNode;
Shape1169: TShapeNode;
Appearance1170: TAppearanceNode;
IndexedLineSet1171: TIndexedLineSetNode;
Coordinate1172: TCoordinateNode;
Transform1173: TTransformNode;
Shape1174: TShapeNode;
HAnimSite1175: THAnimSiteNode;
Shape1176: TShapeNode;
Shape1177: TShapeNode;
Appearance1178: TAppearanceNode;
Material1179: TMaterialNode;
ImageTexture1180: TImageTextureNode;
IndexedFaceSet1181: TIndexedFaceSetNode;
Color1182: TColorNode;
Coordinate1183: TCoordinateNode;
Coordinate1184: TCoordinateNode;
HAnimJoint1185: THAnimJointNode;
HAnimJoint1186: THAnimJointNode;
HAnimJoint1187: THAnimJointNode;
HAnimJoint1188: THAnimJointNode;
HAnimJoint1189: THAnimJointNode;
HAnimJoint1190: THAnimJointNode;
HAnimJoint1191: THAnimJointNode;
HAnimJoint1192: THAnimJointNode;
HAnimJoint1193: THAnimJointNode;
HAnimJoint1194: THAnimJointNode;
HAnimJoint1195: THAnimJointNode;
HAnimJoint1196: THAnimJointNode;
HAnimJoint1197: THAnimJointNode;
HAnimJoint1198: THAnimJointNode;
HAnimJoint1199: THAnimJointNode;
HAnimJoint1200: THAnimJointNode;
HAnimJoint1201: THAnimJointNode;
HAnimJoint1202: THAnimJointNode;
HAnimJoint1203: THAnimJointNode;
HAnimJoint1204: THAnimJointNode;
HAnimJoint1205: THAnimJointNode;
HAnimJoint1206: THAnimJointNode;
HAnimJoint1207: THAnimJointNode;
HAnimJoint1208: THAnimJointNode;
HAnimJoint1209: THAnimJointNode;
HAnimJoint1210: THAnimJointNode;
HAnimJoint1211: THAnimJointNode;
HAnimJoint1212: THAnimJointNode;
HAnimJoint1213: THAnimJointNode;
HAnimJoint1214: THAnimJointNode;
HAnimJoint1215: THAnimJointNode;
HAnimJoint1216: THAnimJointNode;
HAnimJoint1217: THAnimJointNode;
HAnimJoint1218: THAnimJointNode;
HAnimJoint1219: THAnimJointNode;
HAnimJoint1220: THAnimJointNode;
HAnimJoint1221: THAnimJointNode;
HAnimJoint1222: THAnimJointNode;
HAnimJoint1223: THAnimJointNode;
HAnimJoint1224: THAnimJointNode;
HAnimJoint1225: THAnimJointNode;
HAnimJoint1226: THAnimJointNode;
HAnimJoint1227: THAnimJointNode;
HAnimJoint1228: THAnimJointNode;
HAnimJoint1229: THAnimJointNode;
HAnimJoint1230: THAnimJointNode;
HAnimJoint1231: THAnimJointNode;
HAnimJoint1232: THAnimJointNode;
HAnimJoint1233: THAnimJointNode;
HAnimJoint1234: THAnimJointNode;
HAnimJoint1235: THAnimJointNode;
HAnimJoint1236: THAnimJointNode;
HAnimJoint1237: THAnimJointNode;
HAnimJoint1238: THAnimJointNode;
HAnimJoint1239: THAnimJointNode;
HAnimJoint1240: THAnimJointNode;
HAnimJoint1241: THAnimJointNode;
HAnimJoint1242: THAnimJointNode;
HAnimJoint1243: THAnimJointNode;
HAnimJoint1244: THAnimJointNode;
HAnimJoint1245: THAnimJointNode;
HAnimJoint1246: THAnimJointNode;
HAnimJoint1247: THAnimJointNode;
HAnimJoint1248: THAnimJointNode;
HAnimJoint1249: THAnimJointNode;
HAnimJoint1250: THAnimJointNode;
HAnimJoint1251: THAnimJointNode;
HAnimJoint1252: THAnimJointNode;
HAnimJoint1253: THAnimJointNode;
HAnimJoint1254: THAnimJointNode;
HAnimJoint1255: THAnimJointNode;
HAnimJoint1256: THAnimJointNode;
HAnimJoint1257: THAnimJointNode;
HAnimJoint1258: THAnimJointNode;
HAnimJoint1259: THAnimJointNode;
HAnimJoint1260: THAnimJointNode;
HAnimJoint1261: THAnimJointNode;
HAnimJoint1262: THAnimJointNode;
HAnimJoint1263: THAnimJointNode;
HAnimJoint1264: THAnimJointNode;
HAnimJoint1265: THAnimJointNode;
HAnimJoint1266: THAnimJointNode;
HAnimJoint1267: THAnimJointNode;
HAnimJoint1268: THAnimJointNode;
HAnimJoint1269: THAnimJointNode;
HAnimJoint1270: THAnimJointNode;
HAnimJoint1271: THAnimJointNode;
HAnimJoint1272: THAnimJointNode;
HAnimJoint1273: THAnimJointNode;
HAnimSegment1274: THAnimSegmentNode;
HAnimSegment1275: THAnimSegmentNode;
HAnimSegment1276: THAnimSegmentNode;
HAnimSegment1277: THAnimSegmentNode;
HAnimSegment1278: THAnimSegmentNode;
HAnimSegment1279: THAnimSegmentNode;
HAnimSegment1280: THAnimSegmentNode;
HAnimSegment1281: THAnimSegmentNode;
HAnimSegment1282: THAnimSegmentNode;
HAnimSegment1283: THAnimSegmentNode;
HAnimSegment1284: THAnimSegmentNode;
HAnimSegment1285: THAnimSegmentNode;
HAnimSegment1286: THAnimSegmentNode;
HAnimSegment1287: THAnimSegmentNode;
HAnimSegment1288: THAnimSegmentNode;
HAnimSegment1289: THAnimSegmentNode;
HAnimSegment1290: THAnimSegmentNode;
HAnimSegment1291: THAnimSegmentNode;
HAnimSegment1292: THAnimSegmentNode;
HAnimSegment1293: THAnimSegmentNode;
HAnimSegment1294: THAnimSegmentNode;
HAnimSegment1295: THAnimSegmentNode;
HAnimSegment1296: THAnimSegmentNode;
HAnimSegment1297: THAnimSegmentNode;
HAnimSegment1298: THAnimSegmentNode;
HAnimSegment1299: THAnimSegmentNode;
HAnimSegment1300: THAnimSegmentNode;
HAnimSegment1301: THAnimSegmentNode;
HAnimSegment1302: THAnimSegmentNode;
HAnimSegment1303: THAnimSegmentNode;
HAnimSegment1304: THAnimSegmentNode;
HAnimSegment1305: THAnimSegmentNode;
HAnimSegment1306: THAnimSegmentNode;
HAnimSegment1307: THAnimSegmentNode;
HAnimSegment1308: THAnimSegmentNode;
HAnimSegment1309: THAnimSegmentNode;
HAnimSegment1310: THAnimSegmentNode;
HAnimSegment1311: THAnimSegmentNode;
HAnimSegment1312: THAnimSegmentNode;
HAnimSegment1313: THAnimSegmentNode;
HAnimSegment1314: THAnimSegmentNode;
HAnimSegment1315: THAnimSegmentNode;
HAnimSegment1316: THAnimSegmentNode;
HAnimSegment1317: THAnimSegmentNode;
HAnimSegment1318: THAnimSegmentNode;
HAnimSegment1319: THAnimSegmentNode;
HAnimSegment1320: THAnimSegmentNode;
HAnimSegment1321: THAnimSegmentNode;
HAnimSegment1322: THAnimSegmentNode;
HAnimSegment1323: THAnimSegmentNode;
HAnimSegment1324: THAnimSegmentNode;
HAnimSegment1325: THAnimSegmentNode;
HAnimSegment1326: THAnimSegmentNode;
HAnimSegment1327: THAnimSegmentNode;
HAnimSegment1328: THAnimSegmentNode;
HAnimSegment1329: THAnimSegmentNode;
HAnimSegment1330: THAnimSegmentNode;
HAnimSegment1331: THAnimSegmentNode;
HAnimSegment1332: THAnimSegmentNode;
HAnimSegment1333: THAnimSegmentNode;
HAnimSegment1334: THAnimSegmentNode;
HAnimSegment1335: THAnimSegmentNode;
HAnimSegment1336: THAnimSegmentNode;
HAnimSegment1337: THAnimSegmentNode;
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
HAnimSite1364: THAnimSiteNode;
HAnimSite1365: THAnimSiteNode;
HAnimSite1366: THAnimSiteNode;
HAnimSite1367: THAnimSiteNode;
HAnimSite1368: THAnimSiteNode;
HAnimSite1369: THAnimSiteNode;
HAnimSite1370: THAnimSiteNode;
HAnimSite1371: THAnimSiteNode;
HAnimSite1372: THAnimSiteNode;
HAnimSite1373: THAnimSiteNode;
HAnimSite1374: THAnimSiteNode;
HAnimSite1375: THAnimSiteNode;
HAnimSite1376: THAnimSiteNode;
HAnimSite1377: THAnimSiteNode;
HAnimSite1378: THAnimSiteNode;
HAnimSite1379: THAnimSiteNode;
HAnimSite1380: THAnimSiteNode;
HAnimSite1381: THAnimSiteNode;
HAnimSite1382: THAnimSiteNode;
HAnimSite1383: THAnimSiteNode;
HAnimSite1384: THAnimSiteNode;
HAnimSite1385: THAnimSiteNode;
HAnimSite1386: THAnimSiteNode;
HAnimSite1387: THAnimSiteNode;
HAnimSite1388: THAnimSiteNode;
HAnimSite1389: THAnimSiteNode;
HAnimSite1390: THAnimSiteNode;
HAnimSite1391: THAnimSiteNode;
HAnimSite1392: THAnimSiteNode;
HAnimSite1393: THAnimSiteNode;
HAnimSite1394: THAnimSiteNode;
HAnimSite1395: THAnimSiteNode;
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
EXPORT1452: TEXPORTNode;

procedure InitJoeSkeletonSkinSitePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
{ METHOD .Component }
X3D0.Meta['title'] := 'JoeSkeletonSkinSite.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe D. Williams';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Michalis Kamburelis';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Joe D. Williams';
{ METHOD .Meta }
X3D0.Meta['created'] := '9 January 2004';
{ METHOD .Meta }
X3D0.Meta['translated'] := '4 December 2022';
{ METHOD .Meta }
X3D0.Meta['modified'] := '16 March 2026';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png';
{ METHOD .Meta }
X3D0.Meta['drawing'] := 'JoeSkeletonSkinSiteSaluteWalk_composite.vsdx';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_view3dscene.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X_ITE.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X3DOM.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_freeWrl.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_Octaga.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_vivaty.png';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'tovrmlx3d, https://castle-engine.io/convert.php';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://castle-engine.io/view3dscene.php#section_converting';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Michalis Kamburelis';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Joe D. Williams';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html';
{ METHOD .Meta }
{ METHOD .Head }
Group32 := TGroupNode.Create;
WorldInfo33 := TWorldInfoNode.Create;
WorldInfo33.SetInfo(['By Joe for Joe','HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3']);
WorldInfo33.Title := 'JoeSkeletonSkinSite.x3d';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(WorldInfo33);
NavigationInfo34 := TNavigationInfoNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart1;
begin

{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(NavigationInfo34);
Background35 := TBackgroundNode.Create;
Background35.SetGroundAngle([1.57]);
Background35.SetGroundColor([Vector3(0,0.1,0),Vector3(0,0.1,0)]);
Background35.SetSkyColor([Vector3(0,0,0.1)]);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Background35);
{ Authoring hint: these axes are aligned within local coordinate system }
Group36 := TGroupNode.Create;
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'Front Up View';
Viewpoint37.Orientation := Vector4(-1,-1,0,0.55);
Viewpoint37.Position := Vector3(-1,2,2.5);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint37);
Viewpoint38 := TViewpointNode.Create;
Viewpoint38.Description := 'From Left View';
Viewpoint38.Orientation := Vector4(0.3,1,0,-1.57);
Viewpoint38.Position := Vector3(-2.5,1.5,0);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint38);
Viewpoint39 := TViewpointNode.Create;
Viewpoint39.Description := 'Front Mid View';
Viewpoint39.Position := Vector3(0,0.5,1.25);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint39);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Front Feet View';
Viewpoint40.Position := Vector3(0,0,0.75);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint40);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'From Right View';
Viewpoint41.Orientation := Vector4(0,1,0,1.57);
Viewpoint41.Position := Vector3(1,1,0);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint41);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.CenterOfRotation := Vector3(0,1.65,0);
Viewpoint42.Description := 'Front Head View';
Viewpoint42.Position := Vector3(0,1.65,0.75);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint42);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'Front Mid View';
Viewpoint43.Position := Vector3(0,1,1.75);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint43);
Viewpoint44 := TViewpointNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart2;
begin

Viewpoint44.Description := 'Rear View';
Viewpoint44.Orientation := Vector4(0,1,0,3.14);
Viewpoint44.Position := Vector3(0,1.5,-4);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint44);
Viewpoint45 := TViewpointNode.Create;
Viewpoint45.Description := 'Top View';
Viewpoint45.Orientation := Vector4(1,0,0,-1.57);
Viewpoint45.Position := Vector3(0,4,0);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint45);
Viewpoint46 := TViewpointNode.Create;
Viewpoint46.Description := 'Bottom View';
Viewpoint46.Orientation := Vector4(1,0,0,1.57);
Viewpoint46.Position := Vector3(0,-4,0);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint46);
Viewpoint47 := TViewpointNode.Create;
Viewpoint47.Description := 'Right View';
Viewpoint47.Orientation := Vector4(0,1,0,1.57);
Viewpoint47.Position := Vector3(4,1.5,0);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Viewpoint47);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group36);
Group48 := TGroupNode.Create;
Group48.Visible := False;
Transform49 := TTransformNode.Create;
Transform49.Scale := Vector3(5,5,5);
Transform49.Translation := Vector3(0,2.1,0);
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.AmbientIntensity := 0.5;
Material52.DiffuseColor := Vector3(0,0,0);
Material52.Shininess := 1;
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
Shape50.Appearance := Appearance51;
IndexedFaceSet53 := TIndexedFaceSetNode.Create;
IndexedFaceSet53.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet53.CreaseAngle := 0.1;
Color54 := TColorNode.Create;
Color54.SetColor([Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,1),Vector3(0,1,1),Vector3(1,1,0)]);
{ METHOD .Color }
IndexedFaceSet53.Color := Color54;
Coordinate55 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart3;
begin

Coordinate55.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.0157),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
IndexedFaceSet53.Coord := Coordinate55;
{ METHOD .Geometry }
Shape50.Geometry := IndexedFaceSet53;
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(Transform49);
Transform56 := TTransformNode.Create;
Transform56.Scale := Vector3(0.1,0.1,0.1);
Transform56.Translation := Vector3(-0.2,0.773,-0.016);
Shape57 := TShapeNode.Create;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.AmbientIntensity := 1;
Material59.DiffuseColor := Vector3(1,0,0);
Material59.EmissiveColor := Vector3(1,0,0);
Material59.Shininess := 0.7;
Material59.SpecularColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance58.Material := Material59;
{ METHOD .Appearance }
Shape57.Appearance := Appearance58;
IndexedFaceSet60 := TIndexedFaceSetNode.Create;
IndexedFaceSet60.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet60.CreaseAngle := 0.1;
{ METHOD .Coord }
IndexedFaceSet60.Coord := Coordinate55;
{ METHOD .Geometry }
Shape57.Geometry := IndexedFaceSet60;
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(Transform56);
Transform62 := TTransformNode.Create;
Transform62.Scale := Vector3(0.1,0.1,0.1);
Transform62.Translation := Vector3(0,0.2,0);
Shape63 := TShapeNode.Create;
Appearance64 := TAppearanceNode.Create;
Material65 := TMaterialNode.Create;
Material65.DiffuseColor := Vector3(0,1,0);
Material65.EmissiveColor := Vector3(0,1,0);
Material65.SpecularColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance64.Material := Material65;
{ METHOD .Appearance }
Shape63.Appearance := Appearance64;
IndexedLineSet66 := TIndexedLineSetNode.Create;
IndexedLineSet66.SetCoordIndex([0,1,-1]);
Coordinate67 := TCoordinateNode.Create;
Coordinate67.SetPoint([Vector3(0,0,0),Vector3(0,0.0001,0)]);
end;

procedure InitJoeSkeletonSkinSitePart4;
begin

{ METHOD .Coord }
IndexedLineSet66.Coord := Coordinate67;
{ METHOD .Geometry }
Shape63.Geometry := IndexedLineSet66;
{ METHOD .FdChildren.Add }
Transform62.FdChildren.Add(Shape63);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(Transform62);
Transform68 := TTransformNode.Create;
Transform68.Scale := Vector3(0.1,0.1,0.1);
Transform68.Translation := Vector3(-0.2,0.773,-0.016);
Shape69 := TShapeNode.Create;
Appearance70 := TAppearanceNode.Create;
Material71 := TMaterialNode.Create;
Material71.AmbientIntensity := 0.5;
Material71.DiffuseColor := Vector3(0,1,0);
Material71.EmissiveColor := Vector3(0,1,0);
Material71.Shininess := 1;
Material71.SpecularColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance70.Material := Material71;
{ METHOD .Appearance }
Shape69.Appearance := Appearance70;
Sphere72 := TSphereNode.Create;
Sphere72.Radius := 0.005;
{ METHOD .Geometry }
Shape69.Geometry := Sphere72;
{ METHOD .FdChildren.Add }
Transform68.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
Group48.FdChildren.Add(Transform68);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group48);
Group73 := TGroupNode.Create;
Group74 := TGroupNode.Create;
HAnimHumanoid75 := THAnimHumanoidNode.Create;
HAnimHumanoid75.Loa := 4;
HAnimHumanoid75.Version := '2.0';
{ original HAnimHumanoid info='"humanoidVersion=2.0"' }
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
MetadataSet76 := TMetadataSetNode.Create;
MetadataSet76.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString77 := TMetadataStringNode.Create;
MetadataString77.SetValue(['2.0']);
{ METHOD .FdValue.Add }
MetadataSet76.FdValue.Add(MetadataString77);
{ METHOD .Metadata }
HAnimHumanoid75.Metadata := MetadataSet76;
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.Center := Vector3(0,0.875,0);
HAnimSegment79 := THAnimSegmentNode.Create;
Transform80 := TTransformNode.Create;
Transform80.Translation := Vector3(0,0.875,0);
{ METHOD .FdChildren.Add }
Transform80.FdChildren.Add(Shape50);
end;

procedure InitJoeSkeletonSkinSitePart5;
begin

{ METHOD .FdChildren.Add }
HAnimSegment79.FdChildren.Add(Transform80);
Shape82 := TShapeNode.Create;
{ METHOD .Appearance }
Shape82.Appearance := Appearance64;
IndexedLineSet84 := TIndexedLineSetNode.Create;
IndexedLineSet84.SetCoordIndex([0,1,-1]);
Coordinate85 := TCoordinateNode.Create;
Coordinate85.SetPoint([Vector3(0,0.875,0),Vector3(0,0.92,0)]);
{ METHOD .Coord }
IndexedLineSet84.Coord := Coordinate85;
{ METHOD .Geometry }
Shape82.Geometry := IndexedLineSet84;
{ METHOD .FdChildren.Add }
HAnimSegment79.FdChildren.Add(Shape82);
Transform86 := TTransformNode.Create;
Transform86.Translation := Vector3(0,0.92,0.08);
{ METHOD .FdChildren.Add }
Transform86.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment79.FdChildren.Add(Transform86);
Transform88 := TTransformNode.Create;
Transform88.Translation := Vector3(0,0.87,-0.022);
{ METHOD .FdChildren.Add }
Transform88.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment79.FdChildren.Add(Transform88);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimSegment79);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.Center := Vector3(0,0.92,0);
HAnimJoint90.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint90.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment91 := THAnimSegmentNode.Create;
Transform92 := TTransformNode.Create;
Transform92.Translation := Vector3(0,0.9149,0.0016);
Transform93 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform93.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
Transform92.FdChildren.Add(Transform93);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(Transform92);
Shape95 := TShapeNode.Create;
{ METHOD .Appearance }
Shape95.Appearance := Appearance64;
IndexedLineSet97 := TIndexedLineSetNode.Create;
IndexedLineSet97.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate98 := TCoordinateNode.Create;
Coordinate98.SetPoint([Vector3(0,0.92,0),Vector3(0.0961,0.9124,0),Vector3(-0.095,0.9171,0.0029),Vector3(0,1.045,-0.095)]);
{ METHOD .Coord }
IndexedLineSet97.Coord := Coordinate98;
{ METHOD .Geometry }
Shape95.Geometry := IndexedLineSet97;
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(Shape95);
HAnimSite99 := THAnimSiteNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart6;
begin

HAnimSite99.Translation := Vector3(0.1425,1.065,0.0033);
{ METHOD .FdChildren.Add }
HAnimSite99.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite99);
HAnimSite101 := THAnimSiteNode.Create;
HAnimSite101.Translation := Vector3(0.15,0.9,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite101.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite101);
HAnimSite103 := THAnimSiteNode.Create;
HAnimSite103.Translation := Vector3(-0.1425,1.065,0.0033);
{ METHOD .FdChildren.Add }
HAnimSite103.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite103);
HAnimSite105 := THAnimSiteNode.Create;
HAnimSite105.Translation := Vector3(-0.15,0.9,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite105.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite105);
HAnimSite107 := THAnimSiteNode.Create;
HAnimSite107.Translation := Vector3(0.0935,1.03,0.075);
{ METHOD .FdChildren.Add }
HAnimSite107.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite107);
HAnimSite109 := THAnimSiteNode.Create;
HAnimSite109.Translation := Vector3(-0.0935,1.03,0.075);
{ METHOD .FdChildren.Add }
HAnimSite109.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite109);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.Translation := Vector3(0.0773,1.019,-0.12);
{ METHOD .FdChildren.Add }
HAnimSite111.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite111);
HAnimSite113 := THAnimSiteNode.Create;
HAnimSite113.Translation := Vector3(-0.0773,1.019,-0.12);
{ METHOD .FdChildren.Add }
HAnimSite113.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite113);
HAnimSite115 := THAnimSiteNode.Create;
Transform116 := TTransformNode.Create;
Transform116.Scale := Vector3(3,3,3);
{ METHOD .FdChildren.Add }
Transform116.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSite115.FdChildren.Add(Transform116);
{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite115);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.Translation := Vector3(0,0.87,-0.022);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Shape57);
end;

procedure InitJoeSkeletonSkinSitePart7;
begin

{ METHOD .FdChildren.Add }
HAnimSegment91.FdChildren.Add(HAnimSite118);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimSegment91);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.Center := Vector3(0.1,0.92,0);
HAnimJoint120.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint120.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment121 := THAnimSegmentNode.Create;
Transform122 := TTransformNode.Create;
Transform122.Translation := Vector3(0.1,0.92,0);
{ METHOD .FdChildren.Add }
Transform122.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform122);
Shape124 := TShapeNode.Create;
{ METHOD .Appearance }
Shape124.Appearance := Appearance64;
IndexedLineSet126 := TIndexedLineSetNode.Create;
IndexedLineSet126.SetCoordIndex([0,1,-1]);
Coordinate127 := TCoordinateNode.Create;
Coordinate127.SetPoint([Vector3(0.1,0.92,0),Vector3(0.115,0.466,0)]);
{ METHOD .Coord }
IndexedLineSet126.Coord := Coordinate127;
{ METHOD .Geometry }
Shape124.Geometry := IndexedLineSet126;
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Shape124);
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0.1,0.9,0.0775);
{ METHOD .FdChildren.Add }
Transform128.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform128);
Transform130 := TTransformNode.Create;
Transform130.Translation := Vector3(0.079,0.92,-0.14);
{ METHOD .FdChildren.Add }
Transform130.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform130);
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(0.171,0.65,0);
{ METHOD .FdChildren.Add }
Transform132.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform132);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(0.02,0.65,0);
{ METHOD .FdChildren.Add }
Transform134.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform134);
Transform136 := TTransformNode.Create;
Transform136.Translation := Vector3(0.1,0.65,-0.08);
{ METHOD .FdChildren.Add }
Transform136.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform136);
end;

procedure InitJoeSkeletonSkinSitePart8;
begin

Transform138 := TTransformNode.Create;
Transform138.Translation := Vector3(0.1,0.65,0.07);
{ METHOD .FdChildren.Add }
Transform138.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(Transform138);
HAnimSite140 := THAnimSiteNode.Create;
HAnimSite140.Translation := Vector3(0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite140.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(HAnimSite140);
HAnimSite142 := THAnimSiteNode.Create;
HAnimSite142.Translation := Vector3(0.17,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite142.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(HAnimSite142);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.Translation := Vector3(0.05,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite144.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment121.FdChildren.Add(HAnimSite144);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimSegment121);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.Center := Vector3(0.115,0.466,0);
HAnimJoint146.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint146.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment147 := THAnimSegmentNode.Create;
Transform148 := TTransformNode.Create;
Transform148.Translation := Vector3(0.115,0.466,0);
{ METHOD .FdChildren.Add }
Transform148.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform148);
Shape150 := TShapeNode.Create;
{ METHOD .Appearance }
Shape150.Appearance := Appearance64;
IndexedLineSet152 := TIndexedLineSetNode.Create;
IndexedLineSet152.SetCoordIndex([0,1,-1]);
Coordinate153 := TCoordinateNode.Create;
Coordinate153.SetPoint([Vector3(0.115,0.466,0),Vector3(0.1,0.069,0)]);
{ METHOD .Coord }
IndexedLineSet152.Coord := Coordinate153;
{ METHOD .Geometry }
Shape150.Geometry := IndexedLineSet152;
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Shape150);
Transform154 := TTransformNode.Create;
Transform154.Translation := Vector3(0.115,0.466,0.06);
{ METHOD .FdChildren.Add }
Transform154.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform154);
Transform156 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart9;
begin

Transform156.Translation := Vector3(0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
Transform156.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform156);
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(0.17,0.466,0);
{ METHOD .FdChildren.Add }
Transform158.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform158);
Transform160 := TTransformNode.Create;
Transform160.Translation := Vector3(0.05,0.466,0);
{ METHOD .FdChildren.Add }
Transform160.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform160);
Transform162 := TTransformNode.Create;
Transform162.Translation := Vector3(0.17,0.3,0);
{ METHOD .FdChildren.Add }
Transform162.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform162);
Transform164 := TTransformNode.Create;
Transform164.Translation := Vector3(0.06,0.3,0);
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform164);
Transform166 := TTransformNode.Create;
Transform166.Translation := Vector3(0.1,0.3,-0.05);
{ METHOD .FdChildren.Add }
Transform166.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform166);
Transform168 := TTransformNode.Create;
Transform168.Translation := Vector3(0.1,0.3,0.05);
{ METHOD .FdChildren.Add }
Transform168.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(Transform168);
HAnimSite170 := THAnimSiteNode.Create;
HAnimSite170.Translation := Vector3(0.15,0.07,0);
{ METHOD .FdChildren.Add }
HAnimSite170.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(HAnimSite170);
HAnimSite172 := THAnimSiteNode.Create;
HAnimSite172.Translation := Vector3(0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite172.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment147.FdChildren.Add(HAnimSite172);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimSegment147);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.Center := Vector3(0.115,0.069,0);
HAnimJoint174.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint174.SetSkinCoordWeight([1,1,1,1]);
end;

procedure InitJoeSkeletonSkinSitePart10;
begin

HAnimSegment175 := THAnimSegmentNode.Create;
Transform176 := TTransformNode.Create;
Transform176.Translation := Vector3(0.115,0.069,0);
{ METHOD .FdChildren.Add }
Transform176.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Transform176);
Shape178 := TShapeNode.Create;
{ METHOD .Appearance }
Shape178.Appearance := Appearance64;
IndexedLineSet180 := TIndexedLineSetNode.Create;
IndexedLineSet180.SetCoordIndex([0,1,-1]);
Coordinate181 := TCoordinateNode.Create;
Coordinate181.SetPoint([Vector3(0.1,0.069,0),Vector3(0.115,0.031,0.03)]);
{ METHOD .Coord }
IndexedLineSet180.Coord := Coordinate181;
{ METHOD .Geometry }
Shape178.Geometry := IndexedLineSet180;
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Shape178);
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.15,0.07,0);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Transform182);
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
Transform184.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Transform184);
Transform186 := TTransformNode.Create;
Transform186.Translation := Vector3(0.115,0.069,-0.045);
{ METHOD .FdChildren.Add }
Transform186.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Transform186);
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(0.117,0.0975,0.0615);
{ METHOD .FdChildren.Add }
Transform188.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Transform188);
HAnimSite190 := THAnimSiteNode.Create;
HAnimSite190.Translation := Vector3(0.09,0.056,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite190.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(HAnimSite190);
HAnimSite192 := THAnimSiteNode.Create;
HAnimSite192.Translation := Vector3(0.115,0.04,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite192.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(HAnimSite192);
{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimSegment175);
HAnimJoint194 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart11;
begin

HAnimJoint194.Center := Vector3(0.115,0.031,0.03);
HAnimJoint194.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint194.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment195 := THAnimSegmentNode.Create;
Transform196 := TTransformNode.Create;
Transform196.Translation := Vector3(0.115,0.031,0.03);
{ METHOD .FdChildren.Add }
Transform196.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment195.FdChildren.Add(Transform196);
Shape198 := TShapeNode.Create;
{ METHOD .Appearance }
Shape198.Appearance := Appearance64;
IndexedLineSet200 := TIndexedLineSetNode.Create;
IndexedLineSet200.SetCoordIndex([0,1,-1]);
Coordinate201 := TCoordinateNode.Create;
Coordinate201.SetPoint([Vector3(0.115,0.031,0.03),Vector3(0.115,0.037,0.09)]);
{ METHOD .Coord }
IndexedLineSet200.Coord := Coordinate201;
{ METHOD .Geometry }
Shape198.Geometry := IndexedLineSet200;
{ METHOD .FdChildren.Add }
HAnimSegment195.FdChildren.Add(Shape198);
Transform202 := TTransformNode.Create;
Transform202.Translation := Vector3(0.1375,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform202.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment195.FdChildren.Add(Transform202);
Transform204 := TTransformNode.Create;
Transform204.Translation := Vector3(0.095,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform204.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment195.FdChildren.Add(Transform204);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0.115,0.015,-0.045);
{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment195.FdChildren.Add(Transform206);
{ METHOD .FdChildren.Add }
HAnimJoint194.FdChildren.Add(HAnimSegment195);
HAnimJoint208 := THAnimJointNode.Create;
HAnimJoint208.Center := Vector3(0.115,0.037,0.09);
HAnimJoint208.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint208.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment209 := THAnimSegmentNode.Create;
Transform210 := TTransformNode.Create;
Transform210.Translation := Vector3(0.115,0.037,0.09);
{ METHOD .FdChildren.Add }
Transform210.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(Transform210);
Shape212 := TShapeNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart12;
begin

{ METHOD .Appearance }
Shape212.Appearance := Appearance64;
IndexedLineSet214 := TIndexedLineSetNode.Create;
IndexedLineSet214.SetCoordIndex([0,1,-1]);
Coordinate215 := TCoordinateNode.Create;
Coordinate215.SetPoint([Vector3(0.115,0.037,0.09),Vector3(0.115,0.02,0.122)]);
{ METHOD .Coord }
IndexedLineSet214.Coord := Coordinate215;
{ METHOD .Geometry }
Shape212.Geometry := IndexedLineSet214;
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(Shape212);
Transform216 := TTransformNode.Create;
Transform216.Translation := Vector3(0.115,0.06,0.1);
{ METHOD .FdChildren.Add }
Transform216.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(Transform216);
Transform218 := TTransformNode.Create;
Transform218.Translation := Vector3(0.115,0,0.07);
{ METHOD .FdChildren.Add }
Transform218.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(Transform218);
Transform220 := TTransformNode.Create;
Transform220.Translation := Vector3(0.165,0,0.07);
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(Transform220);
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.095,0,0.07);
{ METHOD .FdChildren.Add }
Transform222.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(Transform222);
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224.Translation := Vector3(0.087,0.01,0.122);
{ METHOD .FdChildren.Add }
HAnimSite224.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment209.FdChildren.Add(HAnimSite224);
{ METHOD .FdChildren.Add }
HAnimJoint208.FdChildren.Add(HAnimSegment209);
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226.Center := Vector3(0.115,0.02,0.122);
HAnimJoint226.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint226.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment227 := THAnimSegmentNode.Create;
Transform228 := TTransformNode.Create;
Transform228.Translation := Vector3(0.115,0.02,0.13);
{ METHOD .FdChildren.Add }
Transform228.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform228);
Shape230 := TShapeNode.Create;
{ METHOD .Appearance }
Shape230.Appearance := Appearance64;
end;

procedure InitJoeSkeletonSkinSitePart13;
begin

IndexedLineSet232 := TIndexedLineSetNode.Create;
IndexedLineSet232.SetCoordIndex([0,1,-1]);
Coordinate233 := TCoordinateNode.Create;
Coordinate233.SetPoint([Vector3(0.115,0.02,0.122),Vector3(0.132,0.013,0.19)]);
{ METHOD .Coord }
IndexedLineSet232.Coord := Coordinate233;
{ METHOD .Geometry }
Shape230.Geometry := IndexedLineSet232;
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Shape230);
Transform234 := TTransformNode.Create;
Transform234.Translation := Vector3(0.115,0.04,0.13);
{ METHOD .FdChildren.Add }
Transform234.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform234);
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(0.125,0,0.12);
{ METHOD .FdChildren.Add }
Transform236.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform236);
Transform238 := TTransformNode.Create;
Transform238.Translation := Vector3(0.165,0,0.12);
{ METHOD .FdChildren.Add }
Transform238.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform238);
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(0.087,0,0.122);
{ METHOD .FdChildren.Add }
Transform240.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform240);
Transform242 := TTransformNode.Create;
Transform242.Translation := Vector3(0.09,0.012,0.188);
{ METHOD .FdChildren.Add }
Transform242.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform242);
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
Transform244.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform244);
Transform246 := TTransformNode.Create;
Transform246.Translation := Vector3(0.128,0.011,0.185);
{ METHOD .FdChildren.Add }
Transform246.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform246);
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(0.142,0.011,0.178);
{ METHOD .FdChildren.Add }
Transform248.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform248);
Transform250 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart14;
begin

Transform250.Translation := Vector3(0.154,0.01,0.168);
{ METHOD .FdChildren.Add }
Transform250.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(Transform250);
HAnimSite252 := THAnimSiteNode.Create;
HAnimSite252.Translation := Vector3(0.165,0.01,0.12);
{ METHOD .FdChildren.Add }
HAnimSite252.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(HAnimSite252);
HAnimSite254 := THAnimSiteNode.Create;
HAnimSite254.Translation := Vector3(0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
HAnimSite254.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment227.FdChildren.Add(HAnimSite254);
{ METHOD .FdChildren.Add }
HAnimJoint226.FdChildren.Add(HAnimSegment227);
{ METHOD .FdChildren.Add }
HAnimJoint208.FdChildren.Add(HAnimJoint226);
{ METHOD .FdChildren.Add }
HAnimJoint194.FdChildren.Add(HAnimJoint208);
{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimJoint194);
{ METHOD .FdChildren.Add }
HAnimJoint146.FdChildren.Add(HAnimJoint174);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint146);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint120);
HAnimJoint256 := THAnimJointNode.Create;
HAnimJoint256.Center := Vector3(-0.1,0.92,0);
HAnimJoint256.SetSkinCoordIndex([91,92,98,99,100,101]);
HAnimJoint256.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment257 := THAnimSegmentNode.Create;
Transform258 := TTransformNode.Create;
Transform258.Translation := Vector3(-0.1,0.92,0);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform258);
Shape260 := TShapeNode.Create;
{ METHOD .Appearance }
Shape260.Appearance := Appearance64;
IndexedLineSet262 := TIndexedLineSetNode.Create;
IndexedLineSet262.SetCoordIndex([0,1,-1]);
Coordinate263 := TCoordinateNode.Create;
Coordinate263.SetPoint([Vector3(-0.1,0.92,0),Vector3(-0.1,0.4913,0)]);
{ METHOD .Coord }
IndexedLineSet262.Coord := Coordinate263;
{ METHOD .Geometry }
Shape260.Geometry := IndexedLineSet262;
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Shape260);
Transform264 := TTransformNode.Create;
Transform264.Translation := Vector3(-0.079,0.92,-0.14);
{ METHOD .FdChildren.Add }
Transform264.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform264);
end;

procedure InitJoeSkeletonSkinSitePart15;
begin

Transform266 := TTransformNode.Create;
Transform266.Translation := Vector3(-0.1,0.9,0.075);
{ METHOD .FdChildren.Add }
Transform266.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform266);
Transform268 := TTransformNode.Create;
Transform268.Translation := Vector3(-0.171,0.65,0);
{ METHOD .FdChildren.Add }
Transform268.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform268);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(-0.02,0.65,0);
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform270);
Transform272 := TTransformNode.Create;
Transform272.Translation := Vector3(-0.1,0.65,-0.08);
{ METHOD .FdChildren.Add }
Transform272.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform272);
Transform274 := TTransformNode.Create;
Transform274.Translation := Vector3(-0.1,0.65,0.07);
{ METHOD .FdChildren.Add }
Transform274.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(Transform274);
HAnimSite276 := THAnimSiteNode.Create;
HAnimSite276.Translation := Vector3(-0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite276.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(HAnimSite276);
HAnimSite278 := THAnimSiteNode.Create;
HAnimSite278.Translation := Vector3(-0.17,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite278.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(HAnimSite278);
HAnimSite280 := THAnimSiteNode.Create;
HAnimSite280.Translation := Vector3(-0.05,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite280.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment257.FdChildren.Add(HAnimSite280);
{ METHOD .FdChildren.Add }
HAnimJoint256.FdChildren.Add(HAnimSegment257);
HAnimJoint282 := THAnimJointNode.Create;
HAnimJoint282.Center := Vector3(-0.05,0.466,0);
HAnimJoint282.SetSkinCoordIndex([362,363,364,365,366,367,368,369]);
HAnimJoint282.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment283 := THAnimSegmentNode.Create;
Transform284 := TTransformNode.Create;
Transform284.Translation := Vector3(-0.1,0.4913,0);
end;

procedure InitJoeSkeletonSkinSitePart16;
begin

{ METHOD .FdChildren.Add }
Transform284.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform284);
Shape286 := TShapeNode.Create;
{ METHOD .Appearance }
Shape286.Appearance := Appearance64;
IndexedLineSet288 := TIndexedLineSetNode.Create;
IndexedLineSet288.SetCoordIndex([0,1,-1]);
Coordinate289 := TCoordinateNode.Create;
Coordinate289.SetPoint([Vector3(-0.1,0.4913,0),Vector3(-0.1,0.0712,0)]);
{ METHOD .Coord }
IndexedLineSet288.Coord := Coordinate289;
{ METHOD .Geometry }
Shape286.Geometry := IndexedLineSet288;
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Shape286);
Transform290 := TTransformNode.Create;
Transform290.Translation := Vector3(-0.115,0.466,0.06);
{ METHOD .FdChildren.Add }
Transform290.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform290);
Transform292 := TTransformNode.Create;
Transform292.Translation := Vector3(-0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
Transform292.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform292);
Transform294 := TTransformNode.Create;
Transform294.Translation := Vector3(-0.17,0.466,0);
{ METHOD .FdChildren.Add }
Transform294.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform294);
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(-0.05,0.466,0);
{ METHOD .FdChildren.Add }
Transform296.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform296);
Transform298 := TTransformNode.Create;
Transform298.Translation := Vector3(-0.17,0.3,0);
{ METHOD .FdChildren.Add }
Transform298.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform298);
Transform300 := TTransformNode.Create;
Transform300.Translation := Vector3(-0.06,0.3,0);
{ METHOD .FdChildren.Add }
Transform300.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform300);
Transform302 := TTransformNode.Create;
Transform302.Translation := Vector3(-0.1,0.3,-0.05);
{ METHOD .FdChildren.Add }
Transform302.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform302);
Transform304 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart17;
begin

Transform304.Translation := Vector3(-0.1,0.3,0.05);
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(Transform304);
HAnimSite306 := THAnimSiteNode.Create;
HAnimSite306.Translation := Vector3(-0.15,0.07,0);
{ METHOD .FdChildren.Add }
HAnimSite306.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(HAnimSite306);
HAnimSite308 := THAnimSiteNode.Create;
HAnimSite308.Translation := Vector3(-0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite308.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment283.FdChildren.Add(HAnimSite308);
{ METHOD .FdChildren.Add }
HAnimJoint282.FdChildren.Add(HAnimSegment283);
HAnimJoint310 := THAnimJointNode.Create;
HAnimJoint310.Center := Vector3(-0.115,0.069,0);
HAnimJoint310.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint310.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment311 := THAnimSegmentNode.Create;
Transform312 := TTransformNode.Create;
Transform312.Translation := Vector3(-0.1,0.0712,0);
{ METHOD .FdChildren.Add }
Transform312.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(Transform312);
Shape314 := TShapeNode.Create;
{ METHOD .Appearance }
Shape314.Appearance := Appearance64;
IndexedLineSet316 := TIndexedLineSetNode.Create;
IndexedLineSet316.SetCoordIndex([0,1,-1]);
Coordinate317 := TCoordinateNode.Create;
Coordinate317.SetPoint([Vector3(-0.1,0.0712,0),Vector3(-0.1,0.015,-0.01)]);
{ METHOD .Coord }
IndexedLineSet316.Coord := Coordinate317;
{ METHOD .Geometry }
Shape314.Geometry := IndexedLineSet316;
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(Shape314);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(-0.15,0.07,0);
{ METHOD .FdChildren.Add }
Transform318.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(Transform318);
Transform320 := TTransformNode.Create;
Transform320.Translation := Vector3(-0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
Transform320.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(Transform320);
Transform322 := TTransformNode.Create;
Transform322.Translation := Vector3(-0.115,0.069,-0.045);
end;

procedure InitJoeSkeletonSkinSitePart18;
begin

{ METHOD .FdChildren.Add }
Transform322.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(Transform322);
Transform324 := TTransformNode.Create;
Transform324.Translation := Vector3(-0.117,0.0975,0.0615);
{ METHOD .FdChildren.Add }
Transform324.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(Transform324);
HAnimSite326 := THAnimSiteNode.Create;
HAnimSite326.Translation := Vector3(-0.09,0.056,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite326.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(HAnimSite326);
HAnimSite328 := THAnimSiteNode.Create;
HAnimSite328.Translation := Vector3(-0.115,0.04,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite328.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment311.FdChildren.Add(HAnimSite328);
{ METHOD .FdChildren.Add }
HAnimJoint310.FdChildren.Add(HAnimSegment311);
HAnimJoint330 := THAnimJointNode.Create;
HAnimJoint330.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint330.SetSkinCoordIndex([374,375,376]);
HAnimJoint330.SetSkinCoordWeight([1,1,1]);
HAnimSegment331 := THAnimSegmentNode.Create;
Transform332 := TTransformNode.Create;
Transform332.Translation := Vector3(-0.1,0.015,-0.01);
{ METHOD .FdChildren.Add }
Transform332.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment331.FdChildren.Add(Transform332);
Shape334 := TShapeNode.Create;
{ METHOD .Appearance }
Shape334.Appearance := Appearance64;
IndexedLineSet336 := TIndexedLineSetNode.Create;
IndexedLineSet336.SetCoordIndex([0,1,-1]);
Coordinate337 := TCoordinateNode.Create;
Coordinate337.SetPoint([Vector3(-0.1,0.015,-0.01),Vector3(-0.1,0.02,0.07)]);
{ METHOD .Coord }
IndexedLineSet336.Coord := Coordinate337;
{ METHOD .Geometry }
Shape334.Geometry := IndexedLineSet336;
{ METHOD .FdChildren.Add }
HAnimSegment331.FdChildren.Add(Shape334);
Transform338 := TTransformNode.Create;
Transform338.Translation := Vector3(-0.1375,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform338.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment331.FdChildren.Add(Transform338);
Transform340 := TTransformNode.Create;
Transform340.Translation := Vector3(-0.095,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform340.FdChildren.Add(Shape69);
end;

procedure InitJoeSkeletonSkinSitePart19;
begin

{ METHOD .FdChildren.Add }
HAnimSegment331.FdChildren.Add(Transform340);
Transform342 := TTransformNode.Create;
Transform342.Translation := Vector3(-0.095,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform342.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment331.FdChildren.Add(Transform342);
{ METHOD .FdChildren.Add }
HAnimJoint330.FdChildren.Add(HAnimSegment331);
HAnimJoint344 := THAnimJointNode.Create;
HAnimJoint344.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint344.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint344.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment345 := THAnimSegmentNode.Create;
Transform346 := TTransformNode.Create;
Transform346.Translation := Vector3(-0.1,0.02,0.07);
{ METHOD .FdChildren.Add }
Transform346.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(Transform346);
Shape348 := TShapeNode.Create;
{ METHOD .Appearance }
Shape348.Appearance := Appearance64;
IndexedLineSet350 := TIndexedLineSetNode.Create;
IndexedLineSet350.SetCoordIndex([0,1,-1]);
Coordinate351 := TCoordinateNode.Create;
Coordinate351.SetPoint([Vector3(-0.1,0.02,0.07),Vector3(-0.1,0.01,0.14)]);
{ METHOD .Coord }
IndexedLineSet350.Coord := Coordinate351;
{ METHOD .Geometry }
Shape348.Geometry := IndexedLineSet350;
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(Shape348);
Transform352 := TTransformNode.Create;
Transform352.Translation := Vector3(-0.115,0.06,0.1);
{ METHOD .FdChildren.Add }
Transform352.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(Transform352);
Transform354 := TTransformNode.Create;
Transform354.Translation := Vector3(-0.115,0,0.07);
{ METHOD .FdChildren.Add }
Transform354.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(Transform354);
Transform356 := TTransformNode.Create;
Transform356.Translation := Vector3(-0.165,0,0.07);
{ METHOD .FdChildren.Add }
Transform356.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(Transform356);
Transform358 := TTransformNode.Create;
Transform358.Translation := Vector3(-0.165,0,0.07);
{ METHOD .FdChildren.Add }
Transform358.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(Transform358);
end;

procedure InitJoeSkeletonSkinSitePart20;
begin

HAnimSite360 := THAnimSiteNode.Create;
HAnimSite360.Translation := Vector3(-0.115,0.02,0.122);
{ METHOD .FdChildren.Add }
HAnimSite360.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment345.FdChildren.Add(HAnimSite360);
{ METHOD .FdChildren.Add }
HAnimJoint344.FdChildren.Add(HAnimSegment345);
HAnimJoint362 := THAnimJointNode.Create;
HAnimJoint362.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint362.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint362.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment363 := THAnimSegmentNode.Create;
Transform364 := TTransformNode.Create;
Transform364.Translation := Vector3(-0.1086,0.01,0.14);
{ METHOD .FdChildren.Add }
Transform364.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform364);
Shape366 := TShapeNode.Create;
{ METHOD .Appearance }
Shape366.Appearance := Appearance64;
IndexedLineSet368 := TIndexedLineSetNode.Create;
IndexedLineSet368.SetCoordIndex([0,1,-1]);
Coordinate369 := TCoordinateNode.Create;
Coordinate369.SetPoint([Vector3(-0.1,0.01,0.14),Vector3(-0.1043,0.0016,0.2)]);
{ METHOD .Coord }
IndexedLineSet368.Coord := Coordinate369;
{ METHOD .Geometry }
Shape366.Geometry := IndexedLineSet368;
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Shape366);
Transform370 := TTransformNode.Create;
Transform370.Translation := Vector3(-0.115,0.04,0.13);
{ METHOD .FdChildren.Add }
Transform370.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform370);
Transform372 := TTransformNode.Create;
Transform372.Translation := Vector3(-0.125,0,0.12);
{ METHOD .FdChildren.Add }
Transform372.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform372);
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(-0.165,0,0.12);
{ METHOD .FdChildren.Add }
Transform374.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform374);
Transform376 := TTransformNode.Create;
Transform376.Translation := Vector3(-0.087,0,0.122);
{ METHOD .FdChildren.Add }
Transform376.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform376);
Transform378 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart21;
begin

Transform378.Translation := Vector3(-0.09,0.012,0.188);
{ METHOD .FdChildren.Add }
Transform378.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform378);
Transform380 := TTransformNode.Create;
Transform380.Translation := Vector3(-0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
Transform380.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform380);
Transform382 := TTransformNode.Create;
Transform382.Translation := Vector3(-0.128,0.011,0.185);
{ METHOD .FdChildren.Add }
Transform382.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform382);
Transform384 := TTransformNode.Create;
Transform384.Translation := Vector3(-0.142,0.011,0.178);
{ METHOD .FdChildren.Add }
Transform384.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform384);
Transform386 := TTransformNode.Create;
Transform386.Translation := Vector3(-0.154,0.01,0.168);
{ METHOD .FdChildren.Add }
Transform386.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(Transform386);
HAnimSite388 := THAnimSiteNode.Create;
HAnimSite388.Translation := Vector3(-0.165,0.01,0.12);
{ METHOD .FdChildren.Add }
HAnimSite388.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(HAnimSite388);
HAnimSite390 := THAnimSiteNode.Create;
HAnimSite390.Translation := Vector3(-0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment363.FdChildren.Add(HAnimSite390);
{ METHOD .FdChildren.Add }
HAnimJoint362.FdChildren.Add(HAnimSegment363);
{ METHOD .FdChildren.Add }
HAnimJoint344.FdChildren.Add(HAnimJoint362);
{ METHOD .FdChildren.Add }
HAnimJoint330.FdChildren.Add(HAnimJoint344);
{ METHOD .FdChildren.Add }
HAnimJoint310.FdChildren.Add(HAnimJoint330);
{ METHOD .FdChildren.Add }
HAnimJoint282.FdChildren.Add(HAnimJoint310);
{ METHOD .FdChildren.Add }
HAnimJoint256.FdChildren.Add(HAnimJoint282);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint256);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimJoint90);
HAnimJoint392 := THAnimJointNode.Create;
HAnimJoint392.Center := Vector3(0,1.045,-0.095);
HAnimJoint392.SetSkinCoordIndex([28,76]);
HAnimJoint392.SetSkinCoordWeight([1,1]);
HAnimSegment393 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart22;
begin

Shape394 := TShapeNode.Create;
{ METHOD .Appearance }
Shape394.Appearance := Appearance64;
IndexedLineSet396 := TIndexedLineSetNode.Create;
IndexedLineSet396.SetCoordIndex([0,1,-1]);
Coordinate397 := TCoordinateNode.Create;
Coordinate397.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
IndexedLineSet396.Coord := Coordinate397;
{ METHOD .Geometry }
Shape394.Geometry := IndexedLineSet396;
{ METHOD .FdChildren.Add }
HAnimSegment393.FdChildren.Add(Shape394);
{ METHOD .FdChildren.Add }
HAnimJoint392.FdChildren.Add(HAnimSegment393);
HAnimSegment398 := THAnimSegmentNode.Create;
Shape399 := TShapeNode.Create;
{ METHOD .Appearance }
Shape399.Appearance := Appearance64;
IndexedLineSet401 := TIndexedLineSetNode.Create;
IndexedLineSet401.SetCoordIndex([0,1,-1]);
Coordinate402 := TCoordinateNode.Create;
Coordinate402.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,1.068,-0.085)]);
{ METHOD .Coord }
IndexedLineSet401.Coord := Coordinate402;
{ METHOD .Geometry }
Shape399.Geometry := IndexedLineSet401;
{ METHOD .FdChildren.Add }
HAnimSegment398.FdChildren.Add(Shape399);
HAnimSite403 := THAnimSiteNode.Create;
HAnimSite403.Translation := Vector3(0,1.0915,-0.1091);
{ METHOD .FdChildren.Add }
HAnimSite403.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment398.FdChildren.Add(HAnimSite403);
HAnimSite405 := THAnimSiteNode.Create;
HAnimSite405.Translation := Vector3(0,1.0723,0.09);
{ METHOD .FdChildren.Add }
HAnimSite405.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment398.FdChildren.Add(HAnimSite405);
{ METHOD .FdChildren.Add }
HAnimJoint392.FdChildren.Add(HAnimSegment398);
HAnimJoint407 := THAnimJointNode.Create;
HAnimJoint407.Center := Vector3(0,1.068,-0.085);
HAnimSegment408 := THAnimSegmentNode.Create;
Shape409 := TShapeNode.Create;
{ METHOD .Appearance }
Shape409.Appearance := Appearance64;
IndexedLineSet411 := TIndexedLineSetNode.Create;
IndexedLineSet411.SetCoordIndex([0,1,-1]);
Coordinate412 := TCoordinateNode.Create;
Coordinate412.SetPoint([Vector3(0,1.068,-0.085),Vector3(0,1.092,-0.0725)]);
{ METHOD .Coord }
IndexedLineSet411.Coord := Coordinate412;
{ METHOD .Geometry }
Shape409.Geometry := IndexedLineSet411;
end;

procedure InitJoeSkeletonSkinSitePart23;
begin

{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(Shape409);
Transform413 := TTransformNode.Create;
Transform413.Translation := Vector3(0,1.068,-0.085);
{ METHOD .FdChildren.Add }
Transform413.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment408.FdChildren.Add(Transform413);
{ METHOD .FdChildren.Add }
HAnimJoint407.FdChildren.Add(HAnimSegment408);
HAnimJoint415 := THAnimJointNode.Create;
HAnimJoint415.Center := Vector3(0,1.092,-0.0725);
HAnimSegment416 := THAnimSegmentNode.Create;
Shape417 := TShapeNode.Create;
{ METHOD .Appearance }
Shape417.Appearance := Appearance64;
IndexedLineSet419 := TIndexedLineSetNode.Create;
IndexedLineSet419.SetCoordIndex([0,1,-1]);
Coordinate420 := TCoordinateNode.Create;
Coordinate420.SetPoint([Vector3(0,1.092,-0.0725),Vector3(0,1.12,-0.065)]);
{ METHOD .Coord }
IndexedLineSet419.Coord := Coordinate420;
{ METHOD .Geometry }
Shape417.Geometry := IndexedLineSet419;
{ METHOD .FdChildren.Add }
HAnimSegment416.FdChildren.Add(Shape417);
Transform421 := TTransformNode.Create;
Transform421.Translation := Vector3(0,1.092,-0.0725);
{ METHOD .FdChildren.Add }
Transform421.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment416.FdChildren.Add(Transform421);
{ METHOD .FdChildren.Add }
HAnimJoint415.FdChildren.Add(HAnimSegment416);
HAnimJoint423 := THAnimJointNode.Create;
HAnimJoint423.Center := Vector3(0,1.12,-0.065);
HAnimJoint423.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint423.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment424 := THAnimSegmentNode.Create;
Shape425 := TShapeNode.Create;
{ METHOD .Appearance }
Shape425.Appearance := Appearance64;
IndexedLineSet427 := TIndexedLineSetNode.Create;
IndexedLineSet427.SetCoordIndex([0,1,-1]);
Coordinate428 := TCoordinateNode.Create;
Coordinate428.SetPoint([Vector3(0,1.12,-0.065),Vector3(0,1.1459,-0.0625)]);
{ METHOD .Coord }
IndexedLineSet427.Coord := Coordinate428;
{ METHOD .Geometry }
Shape425.Geometry := IndexedLineSet427;
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Shape425);
Transform429 := TTransformNode.Create;
Transform429.Translation := Vector3(0,1.12,-0.065);
{ METHOD .FdChildren.Add }
Transform429.FdChildren.Add(Shape50);
end;

procedure InitJoeSkeletonSkinSitePart24;
begin

{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform429);
Transform431 := TTransformNode.Create;
Transform431.Translation := Vector3(-0.087,1.19,-0.09);
{ METHOD .FdChildren.Add }
Transform431.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform431);
Transform433 := TTransformNode.Create;
Transform433.Translation := Vector3(0.087,1.19,-0.09);
{ METHOD .FdChildren.Add }
Transform433.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform433);
Transform435 := TTransformNode.Create;
Transform435.Translation := Vector3(0.172,1.32,-0.03);
{ METHOD .FdChildren.Add }
Transform435.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform435);
Transform437 := TTransformNode.Create;
Transform437.Translation := Vector3(-0.172,1.32,-0.03);
{ METHOD .FdChildren.Add }
Transform437.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform437);
Transform439 := TTransformNode.Create;
Transform439.Translation := Vector3(0.15,1.23,-0.015);
{ METHOD .FdChildren.Add }
Transform439.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform439);
Transform441 := TTransformNode.Create;
Transform441.Translation := Vector3(-0.15,1.23,-0.015);
{ METHOD .FdChildren.Add }
Transform441.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(Transform441);
HAnimSite443 := THAnimSiteNode.Create;
HAnimSite443.Translation := Vector3(-0.087,1.19,0.09);
{ METHOD .FdChildren.Add }
HAnimSite443.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(HAnimSite443);
HAnimSite445 := THAnimSiteNode.Create;
HAnimSite445.Translation := Vector3(0.087,1.19,0.09);
{ METHOD .FdChildren.Add }
HAnimSite445.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(HAnimSite445);
HAnimSite447 := THAnimSiteNode.Create;
HAnimSite447.Translation := Vector3(0,1.1908,-0.1113);
{ METHOD .FdChildren.Add }
HAnimSite447.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment424.FdChildren.Add(HAnimSite447);
{ METHOD .FdChildren.Add }
HAnimJoint423.FdChildren.Add(HAnimSegment424);
HAnimJoint449 := THAnimJointNode.Create;
HAnimJoint449.Center := Vector3(0,1.1459,-0.0625);
end;

procedure InitJoeSkeletonSkinSitePart25;
begin

HAnimSegment450 := THAnimSegmentNode.Create;
Shape451 := TShapeNode.Create;
{ METHOD .Appearance }
Shape451.Appearance := Appearance64;
IndexedLineSet453 := TIndexedLineSetNode.Create;
IndexedLineSet453.SetCoordIndex([0,1,-1]);
Coordinate454 := TCoordinateNode.Create;
Coordinate454.SetPoint([Vector3(0,1.1459,-0.0625),Vector3(0,1.179,-0.068)]);
{ METHOD .Coord }
IndexedLineSet453.Coord := Coordinate454;
{ METHOD .Geometry }
Shape451.Geometry := IndexedLineSet453;
{ METHOD .FdChildren.Add }
HAnimSegment450.FdChildren.Add(Shape451);
Transform455 := TTransformNode.Create;
Transform455.Translation := Vector3(0,1.1459,-0.0625);
{ METHOD .FdChildren.Add }
Transform455.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment450.FdChildren.Add(Transform455);
{ METHOD .FdChildren.Add }
HAnimJoint449.FdChildren.Add(HAnimSegment450);
HAnimJoint457 := THAnimJointNode.Create;
HAnimJoint457.Center := Vector3(0,1.179,-0.068);
HAnimSegment458 := THAnimSegmentNode.Create;
Shape459 := TShapeNode.Create;
{ METHOD .Appearance }
Shape459.Appearance := Appearance64;
IndexedLineSet461 := TIndexedLineSetNode.Create;
IndexedLineSet461.SetCoordIndex([0,1,-1]);
Coordinate462 := TCoordinateNode.Create;
Coordinate462.SetPoint([Vector3(0,1.179,-0.068),Vector3(0,1.242,-0.09)]);
{ METHOD .Coord }
IndexedLineSet461.Coord := Coordinate462;
{ METHOD .Geometry }
Shape459.Geometry := IndexedLineSet461;
{ METHOD .FdChildren.Add }
HAnimSegment458.FdChildren.Add(Shape459);
Transform463 := TTransformNode.Create;
Transform463.Translation := Vector3(0,1.179,-0.068);
{ METHOD .FdChildren.Add }
Transform463.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment458.FdChildren.Add(Transform463);
{ METHOD .FdChildren.Add }
HAnimJoint457.FdChildren.Add(HAnimSegment458);
HAnimJoint465 := THAnimJointNode.Create;
HAnimJoint465.Center := Vector3(0,1.2679,-0.081);
HAnimSegment466 := THAnimSegmentNode.Create;
Shape467 := TShapeNode.Create;
{ METHOD .Appearance }
Shape467.Appearance := Appearance64;
IndexedLineSet469 := TIndexedLineSetNode.Create;
IndexedLineSet469.SetCoordIndex([0,1,-1]);
Coordinate470 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart26;
begin

Coordinate470.SetPoint([Vector3(0,1.2145,-0.0755),Vector3(0,1.242,-0.09)]);
{ METHOD .Coord }
IndexedLineSet469.Coord := Coordinate470;
{ METHOD .Geometry }
Shape467.Geometry := IndexedLineSet469;
{ METHOD .FdChildren.Add }
HAnimSegment466.FdChildren.Add(Shape467);
Transform471 := TTransformNode.Create;
Transform471.Translation := Vector3(0,1.2145,-0.0755);
{ METHOD .FdChildren.Add }
Transform471.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment466.FdChildren.Add(Transform471);
{ METHOD .FdChildren.Add }
HAnimJoint465.FdChildren.Add(HAnimSegment466);
HAnimJoint473 := THAnimJointNode.Create;
HAnimJoint473.Center := Vector3(0,1.242,-0.09);
HAnimJoint473.SetSkinCoordIndex([15]);
HAnimJoint473.SetSkinCoordWeight([1]);
HAnimSegment474 := THAnimSegmentNode.Create;
Shape475 := TShapeNode.Create;
{ METHOD .Appearance }
Shape475.Appearance := Appearance64;
IndexedLineSet477 := TIndexedLineSetNode.Create;
IndexedLineSet477.SetCoordIndex([0,1,-1]);
Coordinate478 := TCoordinateNode.Create;
Coordinate478.SetPoint([Vector3(0,1.242,-0.09),Vector3(0,1.268,-0.1)]);
{ METHOD .Coord }
IndexedLineSet477.Coord := Coordinate478;
{ METHOD .Geometry }
Shape475.Geometry := IndexedLineSet477;
{ METHOD .FdChildren.Add }
HAnimSegment474.FdChildren.Add(Shape475);
Transform479 := TTransformNode.Create;
Transform479.Translation := Vector3(0,1.242,-0.09);
{ METHOD .FdChildren.Add }
Transform479.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment474.FdChildren.Add(Transform479);
HAnimSite481 := THAnimSiteNode.Create;
HAnimSite481.Translation := Vector3(0,1.25,0.113);
{ METHOD .FdChildren.Add }
HAnimSite481.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment474.FdChildren.Add(HAnimSite481);
{ METHOD .FdChildren.Add }
HAnimJoint473.FdChildren.Add(HAnimSegment474);
HAnimJoint483 := THAnimJointNode.Create;
HAnimJoint483.Center := Vector3(0,1.268,-0.1);
HAnimJoint483.SetSkinCoordIndex([13,14]);
HAnimJoint483.SetSkinCoordWeight([1,1]);
HAnimSegment484 := THAnimSegmentNode.Create;
Shape485 := TShapeNode.Create;
{ METHOD .Appearance }
Shape485.Appearance := Appearance64;
IndexedLineSet487 := TIndexedLineSetNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart27;
begin

IndexedLineSet487.SetCoordIndex([0,1,-1]);
Coordinate488 := TCoordinateNode.Create;
Coordinate488.SetPoint([Vector3(0,1.268,-0.1),Vector3(0,1.294,-0.11)]);
{ METHOD .Coord }
IndexedLineSet487.Coord := Coordinate488;
{ METHOD .Geometry }
Shape485.Geometry := IndexedLineSet487;
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(Shape485);
Transform489 := TTransformNode.Create;
Transform489.Translation := Vector3(0,1.268,-0.1);
{ METHOD .FdChildren.Add }
Transform489.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(Transform489);
HAnimSite491 := THAnimSiteNode.Create;
HAnimSite491.Translation := Vector3(-0.1135,1.318,0.095);
{ METHOD .FdChildren.Add }
HAnimSite491.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(HAnimSite491);
HAnimSite493 := THAnimSiteNode.Create;
HAnimSite493.Translation := Vector3(0.1135,1.318,0.095);
{ METHOD .FdChildren.Add }
HAnimSite493.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment484.FdChildren.Add(HAnimSite493);
{ METHOD .FdChildren.Add }
HAnimJoint483.FdChildren.Add(HAnimSegment484);
HAnimJoint495 := THAnimJointNode.Create;
HAnimJoint495.Center := Vector3(0,1.294,-0.11);
HAnimSegment496 := THAnimSegmentNode.Create;
Shape497 := TShapeNode.Create;
{ METHOD .Appearance }
Shape497.Appearance := Appearance64;
IndexedLineSet499 := TIndexedLineSetNode.Create;
IndexedLineSet499.SetCoordIndex([0,1,-1]);
Coordinate500 := TCoordinateNode.Create;
Coordinate500.SetPoint([Vector3(0,1.294,-0.11),Vector3(0,1.352,-0.12)]);
{ METHOD .Coord }
IndexedLineSet499.Coord := Coordinate500;
{ METHOD .Geometry }
Shape497.Geometry := IndexedLineSet499;
{ METHOD .FdChildren.Add }
HAnimSegment496.FdChildren.Add(Shape497);
Transform501 := TTransformNode.Create;
Transform501.Translation := Vector3(0,1.294,-0.11);
{ METHOD .FdChildren.Add }
Transform501.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment496.FdChildren.Add(Transform501);
{ METHOD .FdChildren.Add }
HAnimJoint495.FdChildren.Add(HAnimSegment496);
HAnimJoint503 := THAnimJointNode.Create;
HAnimJoint503.Center := Vector3(0,1.323,-0.1155);
HAnimSegment504 := THAnimSegmentNode.Create;
Shape505 := TShapeNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart28;
begin

{ METHOD .Appearance }
Shape505.Appearance := Appearance64;
IndexedLineSet507 := TIndexedLineSetNode.Create;
IndexedLineSet507.SetCoordIndex([0,1,-1]);
Coordinate508 := TCoordinateNode.Create;
Coordinate508.SetPoint([Vector3(0,1.352,-0.12),Vector3(0,1.381,-0.1235)]);
{ METHOD .Coord }
IndexedLineSet507.Coord := Coordinate508;
{ METHOD .Geometry }
Shape505.Geometry := IndexedLineSet507;
{ METHOD .FdChildren.Add }
HAnimSegment504.FdChildren.Add(Shape505);
Transform509 := TTransformNode.Create;
Transform509.Translation := Vector3(0,1.323,-0.1155);
{ METHOD .FdChildren.Add }
Transform509.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment504.FdChildren.Add(Transform509);
{ METHOD .FdChildren.Add }
HAnimJoint503.FdChildren.Add(HAnimSegment504);
HAnimJoint511 := THAnimJointNode.Create;
HAnimJoint511.Center := Vector3(0,1.352,-0.12);
HAnimSegment512 := THAnimSegmentNode.Create;
Shape513 := TShapeNode.Create;
{ METHOD .Appearance }
Shape513.Appearance := Appearance64;
IndexedLineSet515 := TIndexedLineSetNode.Create;
IndexedLineSet515.SetCoordIndex([0,1,-1]);
Coordinate516 := TCoordinateNode.Create;
Coordinate516.SetPoint([Vector3(0,1.381,-0.1235),Vector3(0,1.41,-0.1235)]);
{ METHOD .Coord }
IndexedLineSet515.Coord := Coordinate516;
{ METHOD .Geometry }
Shape513.Geometry := IndexedLineSet515;
{ METHOD .FdChildren.Add }
HAnimSegment512.FdChildren.Add(Shape513);
Transform517 := TTransformNode.Create;
Transform517.Translation := Vector3(0,1.352,-0.12);
{ METHOD .FdChildren.Add }
Transform517.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment512.FdChildren.Add(Transform517);
{ METHOD .FdChildren.Add }
HAnimJoint511.FdChildren.Add(HAnimSegment512);
HAnimJoint519 := THAnimJointNode.Create;
HAnimJoint519.Center := Vector3(0,1.381,-0.1235);
HAnimSegment520 := THAnimSegmentNode.Create;
Shape521 := TShapeNode.Create;
{ METHOD .Appearance }
Shape521.Appearance := Appearance64;
IndexedLineSet523 := TIndexedLineSetNode.Create;
IndexedLineSet523.SetCoordIndex([0,1,-1]);
Coordinate524 := TCoordinateNode.Create;
Coordinate524.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ METHOD .Coord }
IndexedLineSet523.Coord := Coordinate524;
end;

procedure InitJoeSkeletonSkinSitePart29;
begin

{ METHOD .Geometry }
Shape521.Geometry := IndexedLineSet523;
{ METHOD .FdChildren.Add }
HAnimSegment520.FdChildren.Add(Shape521);
Transform525 := TTransformNode.Create;
Transform525.Translation := Vector3(0,1.381,-0.1235);
{ METHOD .FdChildren.Add }
Transform525.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment520.FdChildren.Add(Transform525);
{ METHOD .FdChildren.Add }
HAnimJoint519.FdChildren.Add(HAnimSegment520);
HAnimJoint527 := THAnimJointNode.Create;
HAnimJoint527.Center := Vector3(0,1.41,-0.1235);
HAnimJoint527.SetSkinCoordIndex([81]);
HAnimJoint527.SetSkinCoordWeight([1]);
HAnimSegment528 := THAnimSegmentNode.Create;
Shape529 := TShapeNode.Create;
{ METHOD .Appearance }
Shape529.Appearance := Appearance64;
IndexedLineSet531 := TIndexedLineSetNode.Create;
IndexedLineSet531.SetCoordIndex([0,1,-1]);
Coordinate532 := TCoordinateNode.Create;
Coordinate532.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ METHOD .Coord }
IndexedLineSet531.Coord := Coordinate532;
{ METHOD .Geometry }
Shape529.Geometry := IndexedLineSet531;
{ METHOD .FdChildren.Add }
HAnimSegment528.FdChildren.Add(Shape529);
Transform533 := TTransformNode.Create;
Transform533.Translation := Vector3(0,1.41,-0.1235);
{ METHOD .FdChildren.Add }
Transform533.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment528.FdChildren.Add(Transform533);
Transform535 := TTransformNode.Create;
Transform535.Translation := Vector3(0,1.41,-0.145);
{ METHOD .FdChildren.Add }
Transform535.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment528.FdChildren.Add(Transform535);
{ METHOD .FdChildren.Add }
HAnimJoint527.FdChildren.Add(HAnimSegment528);
HAnimJoint537 := THAnimJointNode.Create;
HAnimJoint537.Center := Vector3(0,1.438,-0.12);
HAnimSegment538 := THAnimSegmentNode.Create;
Shape539 := TShapeNode.Create;
{ METHOD .Appearance }
Shape539.Appearance := Appearance64;
IndexedLineSet541 := TIndexedLineSetNode.Create;
IndexedLineSet541.SetCoordIndex([0,1,-1]);
Coordinate542 := TCoordinateNode.Create;
Coordinate542.SetPoint([Vector3(0,1.438,-0.12),Vector3(0,1.468,-0.105)]);
{ METHOD .Coord }
IndexedLineSet541.Coord := Coordinate542;
end;

procedure InitJoeSkeletonSkinSitePart30;
begin

{ METHOD .Geometry }
Shape539.Geometry := IndexedLineSet541;
{ METHOD .FdChildren.Add }
HAnimSegment538.FdChildren.Add(Shape539);
Transform543 := TTransformNode.Create;
Transform543.Translation := Vector3(0,1.438,-0.12);
{ METHOD .FdChildren.Add }
Transform543.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment538.FdChildren.Add(Transform543);
{ METHOD .FdChildren.Add }
HAnimJoint537.FdChildren.Add(HAnimSegment538);
HAnimJoint545 := THAnimJointNode.Create;
HAnimJoint545.Center := Vector3(0,1.468,-0.105);
HAnimSegment546 := THAnimSegmentNode.Create;
Shape547 := TShapeNode.Create;
{ METHOD .Appearance }
Shape547.Appearance := Appearance64;
IndexedLineSet549 := TIndexedLineSetNode.Create;
IndexedLineSet549.SetCoordIndex([0,1,-1]);
Coordinate550 := TCoordinateNode.Create;
Coordinate550.SetPoint([Vector3(0,1.468,-0.105),Vector3(0,1.497,-0.09)]);
{ METHOD .Coord }
IndexedLineSet549.Coord := Coordinate550;
{ METHOD .Geometry }
Shape547.Geometry := IndexedLineSet549;
{ METHOD .FdChildren.Add }
HAnimSegment546.FdChildren.Add(Shape547);
Transform551 := TTransformNode.Create;
Transform551.Translation := Vector3(0,1.468,-0.105);
{ METHOD .FdChildren.Add }
Transform551.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment546.FdChildren.Add(Transform551);
{ METHOD .FdChildren.Add }
HAnimJoint545.FdChildren.Add(HAnimSegment546);
HAnimJoint553 := THAnimJointNode.Create;
HAnimJoint553.Center := Vector3(0,1.497,-0.09);
HAnimJoint553.SetSkinCoordIndex([11,24]);
HAnimJoint553.SetSkinCoordWeight([1,1]);
HAnimSegment554 := THAnimSegmentNode.Create;
Shape555 := TShapeNode.Create;
{ METHOD .Appearance }
Shape555.Appearance := Appearance64;
IndexedLineSet557 := TIndexedLineSetNode.Create;
IndexedLineSet557.SetCoordIndex([0,1,-1]);
Coordinate558 := TCoordinateNode.Create;
Coordinate558.SetPoint([Vector3(0,1.497,-0.09),Vector3(0,1.525,-0.072)]);
{ METHOD .Coord }
IndexedLineSet557.Coord := Coordinate558;
{ METHOD .Geometry }
Shape555.Geometry := IndexedLineSet557;
{ METHOD .FdChildren.Add }
HAnimSegment554.FdChildren.Add(Shape555);
Transform559 := TTransformNode.Create;
Transform559.Translation := Vector3(0,1.497,-0.09);
end;

procedure InitJoeSkeletonSkinSitePart31;
begin

{ METHOD .FdChildren.Add }
Transform559.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment554.FdChildren.Add(Transform559);
HAnimSite561 := THAnimSiteNode.Create;
HAnimSite561.Translation := Vector3(0,1.44,0.03);
{ METHOD .FdChildren.Add }
HAnimSite561.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment554.FdChildren.Add(HAnimSite561);
HAnimSite563 := THAnimSiteNode.Create;
HAnimSite563.Translation := Vector3(0,1.53,-0.084);
{ METHOD .FdChildren.Add }
HAnimSite563.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment554.FdChildren.Add(HAnimSite563);
{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimSegment554);
HAnimJoint565 := THAnimJointNode.Create;
HAnimJoint565.Center := Vector3(0,1.525,-0.072);
HAnimJoint565.SetSkinCoordIndex([74,75]);
HAnimJoint565.SetSkinCoordWeight([1,1]);
HAnimSegment566 := THAnimSegmentNode.Create;
Shape567 := TShapeNode.Create;
{ METHOD .Appearance }
Shape567.Appearance := Appearance64;
IndexedLineSet569 := TIndexedLineSetNode.Create;
IndexedLineSet569.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate570 := TCoordinateNode.Create;
Coordinate570.SetPoint([Vector3(0,1.525,-0.072),Vector3(0.082,1.4488,-0.0353),Vector3(-0.03,1.46,0.02),Vector3(0,1.54,-0.05)]);
{ METHOD .Coord }
IndexedLineSet569.Coord := Coordinate570;
{ METHOD .Geometry }
Shape567.Geometry := IndexedLineSet569;
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(Shape567);
Transform571 := TTransformNode.Create;
Transform571.Translation := Vector3(0,1.525,-0.072);
{ METHOD .FdChildren.Add }
Transform571.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(Transform571);
HAnimSite573 := THAnimSiteNode.Create;
HAnimSite573.Translation := Vector3(-0.0646,1.5149,-0.0385);
{ METHOD .FdChildren.Add }
HAnimSite573.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(HAnimSite573);
HAnimSite575 := THAnimSiteNode.Create;
HAnimSite575.Translation := Vector3(0.0646,1.5149,-0.0385);
{ METHOD .FdChildren.Add }
HAnimSite575.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(HAnimSite575);
{ METHOD .FdChildren.Add }
HAnimJoint565.FdChildren.Add(HAnimSegment566);
HAnimJoint577 := THAnimJointNode.Create;
HAnimJoint577.Center := Vector3(0,1.54,-0.05);
end;

procedure InitJoeSkeletonSkinSitePart32;
begin

HAnimSegment578 := THAnimSegmentNode.Create;
Shape579 := TShapeNode.Create;
{ METHOD .Appearance }
Shape579.Appearance := Appearance64;
IndexedLineSet581 := TIndexedLineSetNode.Create;
IndexedLineSet581.SetCoordIndex([0,1,-1]);
Coordinate582 := TCoordinateNode.Create;
Coordinate582.SetPoint([Vector3(0,1.54,-0.05),Vector3(0,1.5675,-0.0256)]);
{ METHOD .Coord }
IndexedLineSet581.Coord := Coordinate582;
{ METHOD .Geometry }
Shape579.Geometry := IndexedLineSet581;
{ METHOD .FdChildren.Add }
HAnimSegment578.FdChildren.Add(Shape579);
Transform583 := TTransformNode.Create;
Transform583.Translation := Vector3(0,1.54,-0.05);
{ METHOD .FdChildren.Add }
Transform583.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment578.FdChildren.Add(Transform583);
{ METHOD .FdChildren.Add }
HAnimJoint577.FdChildren.Add(HAnimSegment578);
HAnimJoint585 := THAnimJointNode.Create;
HAnimJoint585.Center := Vector3(0,1.552,-0.035);
HAnimSegment586 := THAnimSegmentNode.Create;
Transform587 := TTransformNode.Create;
Transform587.Translation := Vector3(0,1.552,-0.035);
{ METHOD .FdChildren.Add }
Transform587.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment586.FdChildren.Add(Transform587);
Shape589 := TShapeNode.Create;
{ METHOD .Appearance }
Shape589.Appearance := Appearance64;
IndexedLineSet591 := TIndexedLineSetNode.Create;
IndexedLineSet591.SetCoordIndex([0,1,-1]);
Coordinate592 := TCoordinateNode.Create;
Coordinate592.SetPoint([Vector3(0,1.5675,-0.0256),Vector3(0,1.5823,-0.0185)]);
{ METHOD .Coord }
IndexedLineSet591.Coord := Coordinate592;
{ METHOD .Geometry }
Shape589.Geometry := IndexedLineSet591;
{ METHOD .FdChildren.Add }
HAnimSegment586.FdChildren.Add(Shape589);
{ METHOD .FdChildren.Add }
HAnimJoint585.FdChildren.Add(HAnimSegment586);
HAnimJoint593 := THAnimJointNode.Create;
HAnimJoint593.Center := Vector3(0,1.5675,-0.0256);
HAnimSegment594 := THAnimSegmentNode.Create;
Shape595 := TShapeNode.Create;
{ METHOD .Appearance }
Shape595.Appearance := Appearance64;
IndexedLineSet597 := TIndexedLineSetNode.Create;
IndexedLineSet597.SetCoordIndex([0,1,-1]);
Coordinate598 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart33;
begin

Coordinate598.SetPoint([Vector3(0,1.5823,-0.0185),Vector3(0,1.595,-0.0175)]);
{ METHOD .Coord }
IndexedLineSet597.Coord := Coordinate598;
{ METHOD .Geometry }
Shape595.Geometry := IndexedLineSet597;
{ METHOD .FdChildren.Add }
HAnimSegment594.FdChildren.Add(Shape595);
Transform599 := TTransformNode.Create;
Transform599.Translation := Vector3(0,1.5675,-0.0256);
{ METHOD .FdChildren.Add }
Transform599.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment594.FdChildren.Add(Transform599);
{ METHOD .FdChildren.Add }
HAnimJoint593.FdChildren.Add(HAnimSegment594);
HAnimJoint601 := THAnimJointNode.Create;
HAnimJoint601.Center := Vector3(0,1.5823,-0.0185);
HAnimSegment602 := THAnimSegmentNode.Create;
Shape603 := TShapeNode.Create;
{ METHOD .Appearance }
Shape603.Appearance := Appearance64;
IndexedLineSet605 := TIndexedLineSetNode.Create;
IndexedLineSet605.SetCoordIndex([0,1,-1]);
Coordinate606 := TCoordinateNode.Create;
Coordinate606.SetPoint([Vector3(0,1.595,-0.0175),Vector3(0,1.61,-0.015)]);
{ METHOD .Coord }
IndexedLineSet605.Coord := Coordinate606;
{ METHOD .Geometry }
Shape603.Geometry := IndexedLineSet605;
{ METHOD .FdChildren.Add }
HAnimSegment602.FdChildren.Add(Shape603);
Transform607 := TTransformNode.Create;
Transform607.Translation := Vector3(0,1.5823,-0.0185);
{ METHOD .FdChildren.Add }
Transform607.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment602.FdChildren.Add(Transform607);
{ METHOD .FdChildren.Add }
HAnimJoint601.FdChildren.Add(HAnimSegment602);
HAnimJoint609 := THAnimJointNode.Create;
HAnimJoint609.Center := Vector3(0,1.595,-0.0175);
HAnimSegment610 := THAnimSegmentNode.Create;
Shape611 := TShapeNode.Create;
{ METHOD .Appearance }
Shape611.Appearance := Appearance64;
IndexedLineSet613 := TIndexedLineSetNode.Create;
IndexedLineSet613.SetCoordIndex([0,1,-1]);
Coordinate614 := TCoordinateNode.Create;
Coordinate614.SetPoint([Vector3(0,1.61,-0.015),Vector3(0,1.6144,-0.0034)]);
{ METHOD .Coord }
IndexedLineSet613.Coord := Coordinate614;
{ METHOD .Geometry }
Shape611.Geometry := IndexedLineSet613;
{ METHOD .FdChildren.Add }
HAnimSegment610.FdChildren.Add(Shape611);
Transform615 := TTransformNode.Create;
Transform615.Translation := Vector3(0,1.595,-0.0175);
end;

procedure InitJoeSkeletonSkinSitePart34;
begin

{ METHOD .FdChildren.Add }
Transform615.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment610.FdChildren.Add(Transform615);
{ METHOD .FdChildren.Add }
HAnimJoint609.FdChildren.Add(HAnimSegment610);
HAnimJoint617 := THAnimJointNode.Create;
HAnimJoint617.Center := Vector3(0,1.61,-0.015);
HAnimSegment618 := THAnimSegmentNode.Create;
Shape619 := TShapeNode.Create;
{ METHOD .Appearance }
Shape619.Appearance := Appearance64;
IndexedLineSet621 := TIndexedLineSetNode.Create;
IndexedLineSet621.SetCoordIndex([0,1,-1]);
Coordinate622 := TCoordinateNode.Create;
Coordinate622.SetPoint([Vector3(0,1.6144,-0.0034),Vector3(0,1.63,-0.01)]);
{ METHOD .Coord }
IndexedLineSet621.Coord := Coordinate622;
{ METHOD .Geometry }
Shape619.Geometry := IndexedLineSet621;
{ METHOD .FdChildren.Add }
HAnimSegment618.FdChildren.Add(Shape619);
Transform623 := TTransformNode.Create;
Transform623.Translation := Vector3(0,1.61,-0.015);
{ METHOD .FdChildren.Add }
Transform623.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment618.FdChildren.Add(Transform623);
{ METHOD .FdChildren.Add }
HAnimJoint617.FdChildren.Add(HAnimSegment618);
HAnimJoint625 := THAnimJointNode.Create;
HAnimJoint625.Center := Vector3(0,1.63,-0.01);
HAnimJoint625.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint625.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimSegment626 := THAnimSegmentNode.Create;
Shape627 := TShapeNode.Create;
{ METHOD .Appearance }
Shape627.Appearance := Appearance64;
IndexedLineSet629 := TIndexedLineSetNode.Create;
IndexedLineSet629.SetCoordIndex([0,1,-1,0,2,-1]);
Coordinate630 := TCoordinateNode.Create;
Coordinate630.SetPoint([Vector3(0,1.63,-0.01),Vector3(0.034,1.659,0.06),Vector3(-0.034,1.655,0.065)]);
{ METHOD .Coord }
IndexedLineSet629.Coord := Coordinate630;
{ METHOD .Geometry }
Shape627.Geometry := IndexedLineSet629;
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(Shape627);
Transform631 := TTransformNode.Create;
Transform631.Translation := Vector3(0,1.63,-0.01);
{ METHOD .FdChildren.Add }
Transform631.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(Transform631);
HAnimSite633 := THAnimSiteNode.Create;
HAnimSite633.Translation := Vector3(0,1.77,0);
end;

procedure InitJoeSkeletonSkinSitePart35;
begin

{ METHOD .FdChildren.Add }
HAnimSite633.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite633);
HAnimSite635 := THAnimSiteNode.Create;
HAnimSite635.Translation := Vector3(0,1.665,0.09);
{ METHOD .FdChildren.Add }
HAnimSite635.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite635);
HAnimSite637 := THAnimSiteNode.Create;
HAnimSite637.Translation := Vector3(-0.033,1.62,0.087);
{ METHOD .FdChildren.Add }
HAnimSite637.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite637);
HAnimSite639 := THAnimSiteNode.Create;
HAnimSite639.Translation := Vector3(0.033,1.62,0.087);
{ METHOD .FdChildren.Add }
HAnimSite639.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite639);
HAnimSite641 := THAnimSiteNode.Create;
HAnimSite641.Translation := Vector3(0,1.55,0.097);
{ METHOD .FdChildren.Add }
HAnimSite641.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite641);
HAnimSite643 := THAnimSiteNode.Create;
HAnimSite643.Translation := Vector3(-0.077,1.64,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite643.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite643);
HAnimSite645 := THAnimSiteNode.Create;
HAnimSite645.Translation := Vector3(-0.052,1.58,0.015);
{ METHOD .FdChildren.Add }
HAnimSite645.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite645);
HAnimSite647 := THAnimSiteNode.Create;
HAnimSite647.Translation := Vector3(0.077,1.64,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite647.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite647);
HAnimSite649 := THAnimSiteNode.Create;
HAnimSite649.Translation := Vector3(0.0631,1.58,0.015);
{ METHOD .FdChildren.Add }
HAnimSite649.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite649);
HAnimSite651 := THAnimSiteNode.Create;
HAnimSite651.Translation := Vector3(0,1.625,-0.0925);
{ METHOD .FdChildren.Add }
HAnimSite651.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(HAnimSite651);
{ METHOD .FdChildren.Add }
HAnimJoint625.FdChildren.Add(HAnimSegment626);
HAnimJoint653 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart36;
begin

HAnimJoint653.Center := Vector3(0.034,1.659,0.06);
HAnimSegment654 := THAnimSegmentNode.Create;
Shape655 := TShapeNode.Create;
{ METHOD .Appearance }
Shape655.Appearance := Appearance64;
IndexedLineSet657 := TIndexedLineSetNode.Create;
IndexedLineSet657.SetCoordIndex([0,1,-1]);
Coordinate658 := TCoordinateNode.Create;
Coordinate658.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ METHOD .Coord }
IndexedLineSet657.Coord := Coordinate658;
{ METHOD .Geometry }
Shape655.Geometry := IndexedLineSet657;
{ METHOD .FdChildren.Add }
HAnimSegment654.FdChildren.Add(Shape655);
Transform659 := TTransformNode.Create;
Transform659.Scale := Vector3(1,1,1.4);
Transform659.Translation := Vector3(0.034,1.655,0.065);
{ METHOD .FdChildren.Add }
Transform659.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment654.FdChildren.Add(Transform659);
{ METHOD .FdChildren.Add }
HAnimJoint653.FdChildren.Add(HAnimSegment654);
{ METHOD .FdChildren.Add }
HAnimJoint625.FdChildren.Add(HAnimJoint653);
HAnimJoint661 := THAnimJointNode.Create;
HAnimJoint661.Center := Vector3(-0.034,1.659,0.06);
HAnimSegment662 := THAnimSegmentNode.Create;
Shape663 := TShapeNode.Create;
{ METHOD .Appearance }
Shape663.Appearance := Appearance64;
IndexedLineSet665 := TIndexedLineSetNode.Create;
IndexedLineSet665.SetCoordIndex([0,1,-1]);
Coordinate666 := TCoordinateNode.Create;
Coordinate666.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ METHOD .Coord }
IndexedLineSet665.Coord := Coordinate666;
{ METHOD .Geometry }
Shape663.Geometry := IndexedLineSet665;
{ METHOD .FdChildren.Add }
HAnimSegment662.FdChildren.Add(Shape663);
Transform667 := TTransformNode.Create;
Transform667.Scale := Vector3(1,1,1.4);
Transform667.Translation := Vector3(-0.034,1.655,0.065);
{ METHOD .FdChildren.Add }
Transform667.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment662.FdChildren.Add(Transform667);
{ METHOD .FdChildren.Add }
HAnimJoint661.FdChildren.Add(HAnimSegment662);
{ METHOD .FdChildren.Add }
HAnimJoint625.FdChildren.Add(HAnimJoint661);
{ METHOD .FdChildren.Add }
HAnimJoint617.FdChildren.Add(HAnimJoint625);
{ METHOD .FdChildren.Add }
HAnimJoint609.FdChildren.Add(HAnimJoint617);
{ METHOD .FdChildren.Add }
HAnimJoint601.FdChildren.Add(HAnimJoint609);
end;

procedure InitJoeSkeletonSkinSitePart37;
begin

{ METHOD .FdChildren.Add }
HAnimJoint593.FdChildren.Add(HAnimJoint601);
{ METHOD .FdChildren.Add }
HAnimJoint585.FdChildren.Add(HAnimJoint593);
{ METHOD .FdChildren.Add }
HAnimJoint577.FdChildren.Add(HAnimJoint585);
{ METHOD .FdChildren.Add }
HAnimJoint565.FdChildren.Add(HAnimJoint577);
{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimJoint565);
HAnimJoint669 := THAnimJointNode.Create;
HAnimJoint669.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint669.SetSkinCoordIndex([12]);
HAnimJoint669.SetSkinCoordWeight([1]);
HAnimSegment670 := THAnimSegmentNode.Create;
Shape671 := TShapeNode.Create;
{ METHOD .Appearance }
Shape671.Appearance := Appearance64;
IndexedLineSet673 := TIndexedLineSetNode.Create;
IndexedLineSet673.SetCoordIndex([0,1,-1]);
Coordinate674 := TCoordinateNode.Create;
Coordinate674.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ METHOD .Coord }
IndexedLineSet673.Coord := Coordinate674;
{ METHOD .Geometry }
Shape671.Geometry := IndexedLineSet673;
{ METHOD .FdChildren.Add }
HAnimSegment670.FdChildren.Add(Shape671);
Transform675 := TTransformNode.Create;
Transform675.Translation := Vector3(0.082,1.4488,-0.0353);
{ METHOD .FdChildren.Add }
Transform675.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment670.FdChildren.Add(Transform675);
HAnimSite677 := THAnimSiteNode.Create;
HAnimSite677.Translation := Vector3(0.03,1.46,0.035);
{ METHOD .FdChildren.Add }
HAnimSite677.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment670.FdChildren.Add(HAnimSite677);
{ METHOD .FdChildren.Add }
HAnimJoint669.FdChildren.Add(HAnimSegment670);
HAnimJoint679 := THAnimJointNode.Create;
HAnimJoint679.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint679.SetSkinCoordIndex([79]);
HAnimJoint679.SetSkinCoordWeight([1]);
HAnimSegment680 := THAnimSegmentNode.Create;
Shape681 := TShapeNode.Create;
{ METHOD .Appearance }
Shape681.Appearance := Appearance64;
IndexedLineSet683 := TIndexedLineSetNode.Create;
IndexedLineSet683.SetCoordIndex([0,1,-1]);
Coordinate684 := TCoordinateNode.Create;
Coordinate684.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2,1.44,-0.04)]);
{ METHOD .Coord }
IndexedLineSet683.Coord := Coordinate684;
end;

procedure InitJoeSkeletonSkinSitePart38;
begin

{ METHOD .Geometry }
Shape681.Geometry := IndexedLineSet683;
{ METHOD .FdChildren.Add }
HAnimSegment680.FdChildren.Add(Shape681);
Transform685 := TTransformNode.Create;
Transform685.Translation := Vector3(0.0962,1.4269,-0.0424);
{ METHOD .FdChildren.Add }
Transform685.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment680.FdChildren.Add(Transform685);
Transform687 := TTransformNode.Create;
Transform687.Translation := Vector3(0.11,1.427,-0.1375);
{ METHOD .FdChildren.Add }
Transform687.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment680.FdChildren.Add(Transform687);
HAnimSite689 := THAnimSiteNode.Create;
HAnimSite689.Translation := Vector3(0.175,1.4825,-0.06);
{ METHOD .FdChildren.Add }
HAnimSite689.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment680.FdChildren.Add(HAnimSite689);
HAnimSite691 := THAnimSiteNode.Create;
HAnimSite691.Translation := Vector3(0.17,1.38,0.007);
{ METHOD .FdChildren.Add }
HAnimSite691.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment680.FdChildren.Add(HAnimSite691);
HAnimSite693 := THAnimSiteNode.Create;
HAnimSite693.Translation := Vector3(0.16,1.38,-0.125);
{ METHOD .FdChildren.Add }
HAnimSite693.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment680.FdChildren.Add(HAnimSite693);
{ METHOD .FdChildren.Add }
HAnimJoint679.FdChildren.Add(HAnimSegment680);
HAnimJoint695 := THAnimJointNode.Create;
HAnimJoint695.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint695.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint695.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment696 := THAnimSegmentNode.Create;
Shape697 := TShapeNode.Create;
{ METHOD .Appearance }
Shape697.Appearance := Appearance64;
IndexedLineSet699 := TIndexedLineSetNode.Create;
IndexedLineSet699.SetCoordIndex([0,1,-1]);
Coordinate700 := TCoordinateNode.Create;
Coordinate700.SetPoint([Vector3(0.2029,1.44,-0.0387),Vector3(0.2,1.1388,-0.04)]);
{ METHOD .Coord }
IndexedLineSet699.Coord := Coordinate700;
{ METHOD .Geometry }
Shape697.Geometry := IndexedLineSet699;
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Shape697);
Transform701 := TTransformNode.Create;
Transform701.Translation := Vector3(0.2,1.44,-0.04);
{ METHOD .FdChildren.Add }
Transform701.FdChildren.Add(Shape50);
end;

procedure InitJoeSkeletonSkinSitePart39;
begin

{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Transform701);
Transform703 := TTransformNode.Create;
Transform703.Translation := Vector3(0.235,1.42,-0.0625);
{ METHOD .FdChildren.Add }
Transform703.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Transform703);
Transform705 := TTransformNode.Create;
Transform705.Translation := Vector3(0.25,1.27,-0.04);
{ METHOD .FdChildren.Add }
Transform705.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Transform705);
Transform707 := TTransformNode.Create;
Transform707.Translation := Vector3(0.17,1.27,-0.04);
{ METHOD .FdChildren.Add }
Transform707.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Transform707);
Transform709 := TTransformNode.Create;
Transform709.Translation := Vector3(0.2,1.27,-0.09);
{ METHOD .FdChildren.Add }
Transform709.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Transform709);
Transform711 := TTransformNode.Create;
Transform711.Translation := Vector3(0.2,1.27,0.02);
{ METHOD .FdChildren.Add }
Transform711.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(Transform711);
HAnimSite713 := THAnimSiteNode.Create;
HAnimSite713.Translation := Vector3(0.165,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite713.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(HAnimSite713);
HAnimSite715 := THAnimSiteNode.Create;
HAnimSite715.Translation := Vector3(0.23,1.133,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite715.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(HAnimSite715);
HAnimSite717 := THAnimSiteNode.Create;
HAnimSite717.Translation := Vector3(0.244,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite717.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment696.FdChildren.Add(HAnimSite717);
{ METHOD .FdChildren.Add }
HAnimJoint695.FdChildren.Add(HAnimSegment696);
HAnimJoint719 := THAnimJointNode.Create;
HAnimJoint719.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint719.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint719.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment720 := THAnimSegmentNode.Create;
Shape721 := TShapeNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart40;
begin

{ METHOD .Appearance }
Shape721.Appearance := Appearance64;
IndexedLineSet723 := TIndexedLineSetNode.Create;
IndexedLineSet723.SetCoordIndex([0,1,-1]);
Coordinate724 := TCoordinateNode.Create;
Coordinate724.SetPoint([Vector3(0.2,1.1388,-0.04),Vector3(0.2,0.87,-0.04)]);
{ METHOD .Coord }
IndexedLineSet723.Coord := Coordinate724;
{ METHOD .Geometry }
Shape721.Geometry := IndexedLineSet723;
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Shape721);
Transform725 := TTransformNode.Create;
Transform725.Translation := Vector3(0.2,1.1388,-0.04);
{ METHOD .FdChildren.Add }
Transform725.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Transform725);
Transform727 := TTransformNode.Create;
Transform727.Translation := Vector3(0.2,1.1388,-0.013);
{ METHOD .FdChildren.Add }
Transform727.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Transform727);
Transform729 := TTransformNode.Create;
Transform729.Translation := Vector3(0.225,1,-0.01);
{ METHOD .FdChildren.Add }
Transform729.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Transform729);
Transform731 := TTransformNode.Create;
Transform731.Translation := Vector3(0.225,1,-0.07);
{ METHOD .FdChildren.Add }
Transform731.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Transform731);
Transform733 := TTransformNode.Create;
Transform733.Translation := Vector3(0.185,1,-0.01);
{ METHOD .FdChildren.Add }
Transform733.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Transform733);
Transform735 := TTransformNode.Create;
Transform735.Translation := Vector3(0.185,1,-0.07);
{ METHOD .FdChildren.Add }
Transform735.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(Transform735);
HAnimSite737 := THAnimSiteNode.Create;
HAnimSite737.Translation := Vector3(0.1901,0.8645,-0.0415);
{ METHOD .FdChildren.Add }
HAnimSite737.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(HAnimSite737);
HAnimSite739 := THAnimSiteNode.Create;
HAnimSite739.Translation := Vector3(0.2,1.1388,-0.08);
{ METHOD .FdChildren.Add }
HAnimSite739.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment720.FdChildren.Add(HAnimSite739);
end;

procedure InitJoeSkeletonSkinSitePart41;
begin

{ METHOD .FdChildren.Add }
HAnimJoint719.FdChildren.Add(HAnimSegment720);
HAnimJoint741 := THAnimJointNode.Create;
HAnimJoint741.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint741.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint741.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment742 := THAnimSegmentNode.Create;
Shape743 := TShapeNode.Create;
{ METHOD .Appearance }
Shape743.Appearance := Appearance64;
IndexedLineSet745 := TIndexedLineSetNode.Create;
IndexedLineSet745.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate746 := TCoordinateNode.Create;
Coordinate746.SetPoint([Vector3(0.2,0.87,-0.04),Vector3(0.1924,0.8472,-0.0534),Vector3(0.1983,0.8024,-0.028),Vector3(0.1987,0.8029,-0.053),Vector3(0.1956,0.8019,-0.0794),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
IndexedLineSet745.Coord := Coordinate746;
{ METHOD .Geometry }
Shape743.Geometry := IndexedLineSet745;
{ METHOD .FdChildren.Add }
HAnimSegment742.FdChildren.Add(Shape743);
Transform747 := TTransformNode.Create;
Transform747.Translation := Vector3(0.2,0.87,-0.04);
{ METHOD .FdChildren.Add }
Transform747.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment742.FdChildren.Add(Transform747);
HAnimSite749 := THAnimSiteNode.Create;
HAnimSite749.Translation := Vector3(0.2009,0.8139,-0.0237);
{ METHOD .FdChildren.Add }
HAnimSite749.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment742.FdChildren.Add(HAnimSite749);
HAnimSite751 := THAnimSiteNode.Create;
HAnimSite751.Translation := Vector3(0.2142,0.8529,-0.0648);
{ METHOD .FdChildren.Add }
HAnimSite751.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment742.FdChildren.Add(HAnimSite751);
HAnimSite753 := THAnimSiteNode.Create;
HAnimSite753.Translation := Vector3(0.1929,0.786,-0.1122);
{ METHOD .FdChildren.Add }
HAnimSite753.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment742.FdChildren.Add(HAnimSite753);
{ METHOD .FdChildren.Add }
HAnimJoint741.FdChildren.Add(HAnimSegment742);
HAnimJoint755 := THAnimJointNode.Create;
HAnimJoint755.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint755.SetSkinCoordIndex([127,128]);
HAnimJoint755.SetSkinCoordWeight([1,1]);
HAnimSegment756 := THAnimSegmentNode.Create;
Shape757 := TShapeNode.Create;
{ METHOD .Appearance }
Shape757.Appearance := Appearance64;
IndexedLineSet759 := TIndexedLineSetNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart42;
begin

IndexedLineSet759.SetCoordIndex([0,1,-1]);
Coordinate760 := TCoordinateNode.Create;
Coordinate760.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
IndexedLineSet759.Coord := Coordinate760;
{ METHOD .Geometry }
Shape757.Geometry := IndexedLineSet759;
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(Shape757);
Transform761 := TTransformNode.Create;
Transform761.Translation := Vector3(0.1924,0.8472,-0.0534);
{ METHOD .FdChildren.Add }
Transform761.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment756.FdChildren.Add(Transform761);
{ METHOD .FdChildren.Add }
HAnimJoint755.FdChildren.Add(HAnimSegment756);
HAnimJoint763 := THAnimJointNode.Create;
HAnimJoint763.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint763.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint763.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment764 := THAnimSegmentNode.Create;
Shape765 := TShapeNode.Create;
{ METHOD .Appearance }
Shape765.Appearance := Appearance64;
IndexedLineSet767 := TIndexedLineSetNode.Create;
IndexedLineSet767.SetCoordIndex([0,1,-1]);
Coordinate768 := TCoordinateNode.Create;
Coordinate768.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
IndexedLineSet767.Coord := Coordinate768;
{ METHOD .Geometry }
Shape765.Geometry := IndexedLineSet767;
{ METHOD .FdChildren.Add }
HAnimSegment764.FdChildren.Add(Shape765);
Transform769 := TTransformNode.Create;
Transform769.Translation := Vector3(0.1951,0.8226,0.0246);
{ METHOD .FdChildren.Add }
Transform769.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment764.FdChildren.Add(Transform769);
{ METHOD .FdChildren.Add }
HAnimJoint763.FdChildren.Add(HAnimSegment764);
HAnimJoint771 := THAnimJointNode.Create;
HAnimJoint771.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint771.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint771.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment772 := THAnimSegmentNode.Create;
Shape773 := TShapeNode.Create;
{ METHOD .Appearance }
Shape773.Appearance := Appearance64;
IndexedLineSet775 := TIndexedLineSetNode.Create;
IndexedLineSet775.SetCoordIndex([0,1,-1]);
Coordinate776 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart43;
begin

Coordinate776.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ METHOD .Coord }
IndexedLineSet775.Coord := Coordinate776;
{ METHOD .Geometry }
Shape773.Geometry := IndexedLineSet775;
{ METHOD .FdChildren.Add }
HAnimSegment772.FdChildren.Add(Shape773);
Transform777 := TTransformNode.Create;
Transform777.Translation := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
Transform777.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment772.FdChildren.Add(Transform777);
HAnimSite779 := THAnimSiteNode.Create;
HAnimSite779.Translation := Vector3(0.1982,0.8061,0.0759);
{ METHOD .FdChildren.Add }
HAnimSite779.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment772.FdChildren.Add(HAnimSite779);
{ METHOD .FdChildren.Add }
HAnimJoint771.FdChildren.Add(HAnimSegment772);
{ METHOD .FdChildren.Add }
HAnimJoint763.FdChildren.Add(HAnimJoint771);
{ METHOD .FdChildren.Add }
HAnimJoint755.FdChildren.Add(HAnimJoint763);
{ METHOD .FdChildren.Add }
HAnimJoint741.FdChildren.Add(HAnimJoint755);
HAnimJoint781 := THAnimJointNode.Create;
HAnimJoint781.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint781.SetSkinCoordIndex([129,130]);
HAnimJoint781.SetSkinCoordWeight([1,1]);
HAnimSegment782 := THAnimSegmentNode.Create;
Shape783 := TShapeNode.Create;
{ METHOD .Appearance }
Shape783.Appearance := Appearance64;
IndexedLineSet785 := TIndexedLineSetNode.Create;
IndexedLineSet785.SetCoordIndex([0,1,-1]);
Coordinate786 := TCoordinateNode.Create;
Coordinate786.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
IndexedLineSet785.Coord := Coordinate786;
{ METHOD .Geometry }
Shape783.Geometry := IndexedLineSet785;
{ METHOD .FdChildren.Add }
HAnimSegment782.FdChildren.Add(Shape783);
Transform787 := TTransformNode.Create;
Transform787.Translation := Vector3(0.1983,0.8024,-0.028);
{ METHOD .FdChildren.Add }
Transform787.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment782.FdChildren.Add(Transform787);
{ METHOD .FdChildren.Add }
HAnimJoint781.FdChildren.Add(HAnimSegment782);
HAnimJoint789 := THAnimJointNode.Create;
HAnimJoint789.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint789.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint789.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment790 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart44;
begin

Shape791 := TShapeNode.Create;
{ METHOD .Appearance }
Shape791.Appearance := Appearance64;
IndexedLineSet793 := TIndexedLineSetNode.Create;
IndexedLineSet793.SetCoordIndex([0,1,-1]);
Coordinate794 := TCoordinateNode.Create;
Coordinate794.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
IndexedLineSet793.Coord := Coordinate794;
{ METHOD .Geometry }
Shape791.Geometry := IndexedLineSet793;
{ METHOD .FdChildren.Add }
HAnimSegment790.FdChildren.Add(Shape791);
Transform795 := TTransformNode.Create;
Transform795.Translation := Vector3(0.1983,0.7815,-0.028);
{ METHOD .FdChildren.Add }
Transform795.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment790.FdChildren.Add(Transform795);
{ METHOD .FdChildren.Add }
HAnimJoint789.FdChildren.Add(HAnimSegment790);
HAnimJoint797 := THAnimJointNode.Create;
HAnimJoint797.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint797.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint797.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment798 := THAnimSegmentNode.Create;
Shape799 := TShapeNode.Create;
{ METHOD .Appearance }
Shape799.Appearance := Appearance64;
IndexedLineSet801 := TIndexedLineSetNode.Create;
IndexedLineSet801.SetCoordIndex([0,1,-1]);
Coordinate802 := TCoordinateNode.Create;
Coordinate802.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
IndexedLineSet801.Coord := Coordinate802;
{ METHOD .Geometry }
Shape799.Geometry := IndexedLineSet801;
{ METHOD .FdChildren.Add }
HAnimSegment798.FdChildren.Add(Shape799);
Transform803 := TTransformNode.Create;
Transform803.Translation := Vector3(0.2017,0.7363,-0.0248);
{ METHOD .FdChildren.Add }
Transform803.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment798.FdChildren.Add(Transform803);
{ METHOD .FdChildren.Add }
HAnimJoint797.FdChildren.Add(HAnimSegment798);
HAnimJoint805 := THAnimJointNode.Create;
HAnimJoint805.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint805.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint805.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment806 := THAnimSegmentNode.Create;
Shape807 := TShapeNode.Create;
{ METHOD .Appearance }
Shape807.Appearance := Appearance64;
end;

procedure InitJoeSkeletonSkinSitePart45;
begin

IndexedLineSet809 := TIndexedLineSetNode.Create;
IndexedLineSet809.SetCoordIndex([0,1,-1]);
Coordinate810 := TCoordinateNode.Create;
Coordinate810.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ METHOD .Coord }
IndexedLineSet809.Coord := Coordinate810;
{ METHOD .Geometry }
Shape807.Geometry := IndexedLineSet809;
{ METHOD .FdChildren.Add }
HAnimSegment806.FdChildren.Add(Shape807);
Transform811 := TTransformNode.Create;
Transform811.Translation := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
Transform811.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment806.FdChildren.Add(Transform811);
HAnimSite813 := THAnimSiteNode.Create;
HAnimSite813.Translation := Vector3(0.2089,0.6858,-0.0245);
{ METHOD .FdChildren.Add }
HAnimSite813.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment806.FdChildren.Add(HAnimSite813);
HAnimSite815 := THAnimSiteNode.Create;
HAnimSite815.Translation := Vector3(0.2056,0.6743,-0.0482);
{ METHOD .FdChildren.Add }
HAnimSite815.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment806.FdChildren.Add(HAnimSite815);
{ METHOD .FdChildren.Add }
HAnimJoint805.FdChildren.Add(HAnimSegment806);
{ METHOD .FdChildren.Add }
HAnimJoint797.FdChildren.Add(HAnimJoint805);
{ METHOD .FdChildren.Add }
HAnimJoint789.FdChildren.Add(HAnimJoint797);
{ METHOD .FdChildren.Add }
HAnimJoint781.FdChildren.Add(HAnimJoint789);
{ METHOD .FdChildren.Add }
HAnimJoint741.FdChildren.Add(HAnimJoint781);
HAnimJoint817 := THAnimJointNode.Create;
HAnimJoint817.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint817.SetSkinCoordIndex([131,132]);
HAnimJoint817.SetSkinCoordWeight([1,1]);
HAnimSegment818 := THAnimSegmentNode.Create;
Shape819 := TShapeNode.Create;
{ METHOD .Appearance }
Shape819.Appearance := Appearance64;
IndexedLineSet821 := TIndexedLineSetNode.Create;
IndexedLineSet821.SetCoordIndex([0,1,-1]);
Coordinate822 := TCoordinateNode.Create;
Coordinate822.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
IndexedLineSet821.Coord := Coordinate822;
{ METHOD .Geometry }
Shape819.Geometry := IndexedLineSet821;
{ METHOD .FdChildren.Add }
HAnimSegment818.FdChildren.Add(Shape819);
Transform823 := TTransformNode.Create;
Transform823.Translation := Vector3(0.1987,0.8029,-0.053);
end;

procedure InitJoeSkeletonSkinSitePart46;
begin

{ METHOD .FdChildren.Add }
Transform823.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment818.FdChildren.Add(Transform823);
{ METHOD .FdChildren.Add }
HAnimJoint817.FdChildren.Add(HAnimSegment818);
HAnimJoint825 := THAnimJointNode.Create;
HAnimJoint825.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint825.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint825.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment826 := THAnimSegmentNode.Create;
Shape827 := TShapeNode.Create;
{ METHOD .Appearance }
Shape827.Appearance := Appearance64;
IndexedLineSet829 := TIndexedLineSetNode.Create;
IndexedLineSet829.SetCoordIndex([0,1,-1]);
Coordinate830 := TCoordinateNode.Create;
Coordinate830.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
IndexedLineSet829.Coord := Coordinate830;
{ METHOD .Geometry }
Shape827.Geometry := IndexedLineSet829;
{ METHOD .FdChildren.Add }
HAnimSegment826.FdChildren.Add(Shape827);
Transform831 := TTransformNode.Create;
Transform831.Translation := Vector3(0.1987,0.7818,-0.053);
{ METHOD .FdChildren.Add }
Transform831.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment826.FdChildren.Add(Transform831);
{ METHOD .FdChildren.Add }
HAnimJoint825.FdChildren.Add(HAnimSegment826);
HAnimJoint833 := THAnimJointNode.Create;
HAnimJoint833.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint833.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint833.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment834 := THAnimSegmentNode.Create;
Shape835 := TShapeNode.Create;
{ METHOD .Appearance }
Shape835.Appearance := Appearance64;
IndexedLineSet837 := TIndexedLineSetNode.Create;
IndexedLineSet837.SetCoordIndex([0,1,-1]);
Coordinate838 := TCoordinateNode.Create;
Coordinate838.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ METHOD .Coord }
IndexedLineSet837.Coord := Coordinate838;
{ METHOD .Geometry }
Shape835.Geometry := IndexedLineSet837;
{ METHOD .FdChildren.Add }
HAnimSegment834.FdChildren.Add(Shape835);
Transform839 := TTransformNode.Create;
Transform839.Translation := Vector3(0.2013,0.7273,-0.0503);
{ METHOD .FdChildren.Add }
Transform839.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment834.FdChildren.Add(Transform839);
end;

procedure InitJoeSkeletonSkinSitePart47;
begin

{ METHOD .FdChildren.Add }
HAnimJoint833.FdChildren.Add(HAnimSegment834);
HAnimJoint841 := THAnimJointNode.Create;
HAnimJoint841.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint841.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint841.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment842 := THAnimSegmentNode.Create;
Shape843 := TShapeNode.Create;
{ METHOD .Appearance }
Shape843.Appearance := Appearance64;
IndexedLineSet845 := TIndexedLineSetNode.Create;
IndexedLineSet845.SetCoordIndex([0,1,-1]);
Coordinate846 := TCoordinateNode.Create;
Coordinate846.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ METHOD .Coord }
IndexedLineSet845.Coord := Coordinate846;
{ METHOD .Geometry }
Shape843.Geometry := IndexedLineSet845;
{ METHOD .FdChildren.Add }
HAnimSegment842.FdChildren.Add(Shape843);
HAnimSite847 := THAnimSiteNode.Create;
HAnimSite847.Translation := Vector3(0.208,0.6731,-0.0491);
{ METHOD .FdChildren.Add }
HAnimSite847.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment842.FdChildren.Add(HAnimSite847);
Transform849 := TTransformNode.Create;
Transform849.Translation := Vector3(0.2026,0.7011,-0.0494);
{ METHOD .FdChildren.Add }
Transform849.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment842.FdChildren.Add(Transform849);
{ METHOD .FdChildren.Add }
HAnimJoint841.FdChildren.Add(HAnimSegment842);
{ METHOD .FdChildren.Add }
HAnimJoint833.FdChildren.Add(HAnimJoint841);
{ METHOD .FdChildren.Add }
HAnimJoint825.FdChildren.Add(HAnimJoint833);
{ METHOD .FdChildren.Add }
HAnimJoint817.FdChildren.Add(HAnimJoint825);
{ METHOD .FdChildren.Add }
HAnimJoint741.FdChildren.Add(HAnimJoint817);
HAnimJoint851 := THAnimJointNode.Create;
HAnimJoint851.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint851.SetSkinCoordIndex([133,134]);
HAnimJoint851.SetSkinCoordWeight([1,1]);
HAnimSegment852 := THAnimSegmentNode.Create;
Shape853 := TShapeNode.Create;
{ METHOD .Appearance }
Shape853.Appearance := Appearance64;
IndexedLineSet855 := TIndexedLineSetNode.Create;
IndexedLineSet855.SetCoordIndex([0,1,-1]);
Coordinate856 := TCoordinateNode.Create;
Coordinate856.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
IndexedLineSet855.Coord := Coordinate856;
end;

procedure InitJoeSkeletonSkinSitePart48;
begin

{ METHOD .Geometry }
Shape853.Geometry := IndexedLineSet855;
{ METHOD .FdChildren.Add }
HAnimSegment852.FdChildren.Add(Shape853);
Transform857 := TTransformNode.Create;
Transform857.Translation := Vector3(0.1956,0.8019,-0.0794);
{ METHOD .FdChildren.Add }
Transform857.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment852.FdChildren.Add(Transform857);
{ METHOD .FdChildren.Add }
HAnimJoint851.FdChildren.Add(HAnimSegment852);
HAnimJoint859 := THAnimJointNode.Create;
HAnimJoint859.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint859.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint859.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment860 := THAnimSegmentNode.Create;
Shape861 := TShapeNode.Create;
{ METHOD .Appearance }
Shape861.Appearance := Appearance64;
IndexedLineSet863 := TIndexedLineSetNode.Create;
IndexedLineSet863.SetCoordIndex([0,1,-1]);
Coordinate864 := TCoordinateNode.Create;
Coordinate864.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
IndexedLineSet863.Coord := Coordinate864;
{ METHOD .Geometry }
Shape861.Geometry := IndexedLineSet863;
{ METHOD .FdChildren.Add }
HAnimSegment860.FdChildren.Add(Shape861);
Transform865 := TTransformNode.Create;
Transform865.Translation := Vector3(0.1956,0.7815,-0.0794);
{ METHOD .FdChildren.Add }
Transform865.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment860.FdChildren.Add(Transform865);
{ METHOD .FdChildren.Add }
HAnimJoint859.FdChildren.Add(HAnimSegment860);
HAnimJoint867 := THAnimJointNode.Create;
HAnimJoint867.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint867.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint867.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment868 := THAnimSegmentNode.Create;
Shape869 := TShapeNode.Create;
{ METHOD .Appearance }
Shape869.Appearance := Appearance64;
IndexedLineSet871 := TIndexedLineSetNode.Create;
IndexedLineSet871.SetCoordIndex([0,1,-1]);
Coordinate872 := TCoordinateNode.Create;
Coordinate872.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
IndexedLineSet871.Coord := Coordinate872;
{ METHOD .Geometry }
Shape869.Geometry := IndexedLineSet871;
{ METHOD .FdChildren.Add }
HAnimSegment868.FdChildren.Add(Shape869);
end;

procedure InitJoeSkeletonSkinSitePart49;
begin

Transform873 := TTransformNode.Create;
Transform873.Translation := Vector3(0.1973,0.7287,-0.0777);
{ METHOD .FdChildren.Add }
Transform873.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment868.FdChildren.Add(Transform873);
{ METHOD .FdChildren.Add }
HAnimJoint867.FdChildren.Add(HAnimSegment868);
HAnimJoint875 := THAnimJointNode.Create;
HAnimJoint875.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint875.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint875.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment876 := THAnimSegmentNode.Create;
Shape877 := TShapeNode.Create;
{ METHOD .Appearance }
Shape877.Appearance := Appearance64;
IndexedLineSet879 := TIndexedLineSetNode.Create;
IndexedLineSet879.SetCoordIndex([0,1,-1]);
Coordinate880 := TCoordinateNode.Create;
Coordinate880.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ METHOD .Coord }
IndexedLineSet879.Coord := Coordinate880;
{ METHOD .Geometry }
Shape877.Geometry := IndexedLineSet879;
{ METHOD .FdChildren.Add }
HAnimSegment876.FdChildren.Add(Shape877);
Transform881 := TTransformNode.Create;
Transform881.Translation := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
Transform881.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment876.FdChildren.Add(Transform881);
HAnimSite883 := THAnimSiteNode.Create;
HAnimSite883.Translation := Vector3(0.2035,0.675,-0.0756);
{ METHOD .FdChildren.Add }
HAnimSite883.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment876.FdChildren.Add(HAnimSite883);
{ METHOD .FdChildren.Add }
HAnimJoint875.FdChildren.Add(HAnimSegment876);
{ METHOD .FdChildren.Add }
HAnimJoint867.FdChildren.Add(HAnimJoint875);
{ METHOD .FdChildren.Add }
HAnimJoint859.FdChildren.Add(HAnimJoint867);
{ METHOD .FdChildren.Add }
HAnimJoint851.FdChildren.Add(HAnimJoint859);
{ METHOD .FdChildren.Add }
HAnimJoint741.FdChildren.Add(HAnimJoint851);
HAnimJoint885 := THAnimJointNode.Create;
HAnimJoint885.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint885.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint885.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment886 := THAnimSegmentNode.Create;
Shape887 := TShapeNode.Create;
{ METHOD .Appearance }
Shape887.Appearance := Appearance64;
IndexedLineSet889 := TIndexedLineSetNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart50;
begin

IndexedLineSet889.SetCoordIndex([0,1,-1]);
Coordinate890 := TCoordinateNode.Create;
Coordinate890.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
IndexedLineSet889.Coord := Coordinate890;
{ METHOD .Geometry }
Shape887.Geometry := IndexedLineSet889;
{ METHOD .FdChildren.Add }
HAnimSegment886.FdChildren.Add(Shape887);
Transform891 := TTransformNode.Create;
Transform891.Translation := Vector3(0.1925,0.8066,-0.1036);
{ METHOD .FdChildren.Add }
Transform891.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment886.FdChildren.Add(Transform891);
{ METHOD .FdChildren.Add }
HAnimJoint885.FdChildren.Add(HAnimSegment886);
HAnimJoint893 := THAnimJointNode.Create;
HAnimJoint893.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint893.SetSkinCoordIndex([160,161,162]);
HAnimJoint893.SetSkinCoordWeight([1,1,1]);
HAnimSegment894 := THAnimSegmentNode.Create;
Shape895 := TShapeNode.Create;
{ METHOD .Appearance }
Shape895.Appearance := Appearance64;
IndexedLineSet897 := TIndexedLineSetNode.Create;
IndexedLineSet897.SetCoordIndex([0,1,-1]);
Coordinate898 := TCoordinateNode.Create;
Coordinate898.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
IndexedLineSet897.Coord := Coordinate898;
{ METHOD .Geometry }
Shape895.Geometry := IndexedLineSet897;
{ METHOD .FdChildren.Add }
HAnimSegment894.FdChildren.Add(Shape895);
Transform899 := TTransformNode.Create;
Transform899.Translation := Vector3(0.1925,0.7866,-0.1036);
{ METHOD .FdChildren.Add }
Transform899.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment894.FdChildren.Add(Transform899);
{ METHOD .FdChildren.Add }
HAnimJoint893.FdChildren.Add(HAnimSegment894);
HAnimJoint901 := THAnimJointNode.Create;
HAnimJoint901.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint901.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint901.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment902 := THAnimSegmentNode.Create;
Transform903 := TTransformNode.Create;
Transform903.Translation := Vector3(0.1938,0.7452,-0.1024);
{ METHOD .FdChildren.Add }
Transform903.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment902.FdChildren.Add(Transform903);
Shape905 := TShapeNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart51;
begin

{ METHOD .Appearance }
Shape905.Appearance := Appearance64;
IndexedLineSet907 := TIndexedLineSetNode.Create;
IndexedLineSet907.SetCoordIndex([0,1,-1]);
Coordinate908 := TCoordinateNode.Create;
Coordinate908.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
IndexedLineSet907.Coord := Coordinate908;
{ METHOD .Geometry }
Shape905.Geometry := IndexedLineSet907;
{ METHOD .FdChildren.Add }
HAnimSegment902.FdChildren.Add(Shape905);
{ METHOD .FdChildren.Add }
HAnimJoint901.FdChildren.Add(HAnimSegment902);
HAnimJoint909 := THAnimJointNode.Create;
HAnimJoint909.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint909.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint909.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment910 := THAnimSegmentNode.Create;
Shape911 := TShapeNode.Create;
{ METHOD .Appearance }
Shape911.Appearance := Appearance64;
IndexedLineSet913 := TIndexedLineSetNode.Create;
IndexedLineSet913.SetCoordIndex([0,1,-1]);
Coordinate914 := TCoordinateNode.Create;
Coordinate914.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ METHOD .Coord }
IndexedLineSet913.Coord := Coordinate914;
{ METHOD .Geometry }
Shape911.Geometry := IndexedLineSet913;
{ METHOD .FdChildren.Add }
HAnimSegment910.FdChildren.Add(Shape911);
Transform915 := TTransformNode.Create;
Transform915.Translation := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
Transform915.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment910.FdChildren.Add(Transform915);
HAnimSite917 := THAnimSiteNode.Create;
HAnimSite917.Translation := Vector3(0.2014,0.7009,-0.1012);
{ METHOD .FdChildren.Add }
HAnimSite917.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment910.FdChildren.Add(HAnimSite917);
{ METHOD .FdChildren.Add }
HAnimJoint909.FdChildren.Add(HAnimSegment910);
{ METHOD .FdChildren.Add }
HAnimJoint901.FdChildren.Add(HAnimJoint909);
{ METHOD .FdChildren.Add }
HAnimJoint893.FdChildren.Add(HAnimJoint901);
{ METHOD .FdChildren.Add }
HAnimJoint885.FdChildren.Add(HAnimJoint893);
{ METHOD .FdChildren.Add }
HAnimJoint741.FdChildren.Add(HAnimJoint885);
{ METHOD .FdChildren.Add }
HAnimJoint719.FdChildren.Add(HAnimJoint741);
{ METHOD .FdChildren.Add }
HAnimJoint695.FdChildren.Add(HAnimJoint719);
{ METHOD .FdChildren.Add }
HAnimJoint679.FdChildren.Add(HAnimJoint695);
{ METHOD .FdChildren.Add }
HAnimJoint669.FdChildren.Add(HAnimJoint679);
end;

procedure InitJoeSkeletonSkinSitePart52;
begin

{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimJoint669);
HAnimJoint919 := THAnimJointNode.Create;
HAnimJoint919.Center := Vector3(-0.03,1.46,0);
HAnimJoint919.SetSkinCoordIndex([10]);
HAnimJoint919.SetSkinCoordWeight([1]);
HAnimSegment920 := THAnimSegmentNode.Create;
Shape921 := TShapeNode.Create;
{ METHOD .Appearance }
Shape921.Appearance := Appearance64;
IndexedLineSet923 := TIndexedLineSetNode.Create;
IndexedLineSet923.SetCoordIndex([0,1,-1]);
Coordinate924 := TCoordinateNode.Create;
Coordinate924.SetPoint([Vector3(-0.03,1.46,0.02),Vector3(-0.09,1.41,-0.09)]);
{ METHOD .Coord }
IndexedLineSet923.Coord := Coordinate924;
{ METHOD .Geometry }
Shape921.Geometry := IndexedLineSet923;
{ METHOD .FdChildren.Add }
HAnimSegment920.FdChildren.Add(Shape921);
Transform925 := TTransformNode.Create;
Transform925.Translation := Vector3(-0.03,1.46,0.02);
{ METHOD .FdChildren.Add }
Transform925.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment920.FdChildren.Add(Transform925);
HAnimSite927 := THAnimSiteNode.Create;
HAnimSite927.Translation := Vector3(-0.03,1.46,0.035);
{ METHOD .FdChildren.Add }
HAnimSite927.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment920.FdChildren.Add(HAnimSite927);
{ METHOD .FdChildren.Add }
HAnimJoint919.FdChildren.Add(HAnimSegment920);
HAnimJoint929 := THAnimJointNode.Create;
HAnimJoint929.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint929.SetSkinCoordIndex([77,29]);
HAnimJoint929.SetSkinCoordWeight([1,0.9]);
HAnimSegment930 := THAnimSegmentNode.Create;
Shape931 := TShapeNode.Create;
{ METHOD .Appearance }
Shape931.Appearance := Appearance64;
IndexedLineSet933 := TIndexedLineSetNode.Create;
IndexedLineSet933.SetCoordIndex([0,1,-1]);
Coordinate934 := TCoordinateNode.Create;
Coordinate934.SetPoint([Vector3(-0.09,1.41,-0.09),Vector3(-0.2,1.44,-0.04)]);
{ METHOD .Coord }
IndexedLineSet933.Coord := Coordinate934;
{ METHOD .Geometry }
Shape931.Geometry := IndexedLineSet933;
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(Shape931);
Transform935 := TTransformNode.Create;
Transform935.Translation := Vector3(-0.09,1.41,-0.09);
end;

procedure InitJoeSkeletonSkinSitePart53;
begin

{ METHOD .FdChildren.Add }
Transform935.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(Transform935);
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(-0.11,1.427,-0.1375);
{ METHOD .FdChildren.Add }
Transform937.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(Transform937);
HAnimSite939 := THAnimSiteNode.Create;
HAnimSite939.Translation := Vector3(-0.178,1.4825,-0.0625);
{ METHOD .FdChildren.Add }
HAnimSite939.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(HAnimSite939);
HAnimSite941 := THAnimSiteNode.Create;
HAnimSite941.Translation := Vector3(-0.17,1.38,0.007);
{ METHOD .FdChildren.Add }
HAnimSite941.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(HAnimSite941);
HAnimSite943 := THAnimSiteNode.Create;
HAnimSite943.Translation := Vector3(-0.16,1.38,-0.127);
{ METHOD .FdChildren.Add }
HAnimSite943.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(HAnimSite943);
{ METHOD .FdChildren.Add }
HAnimJoint929.FdChildren.Add(HAnimSegment930);
HAnimJoint945 := THAnimJointNode.Create;
HAnimJoint945.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint945.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint945.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment946 := THAnimSegmentNode.Create;
Transform947 := TTransformNode.Create;
Transform947.Translation := Vector3(-0.2,1.44,-0.04);
{ METHOD .FdChildren.Add }
Transform947.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform947);
Shape949 := TShapeNode.Create;
{ METHOD .Appearance }
Shape949.Appearance := Appearance64;
IndexedLineSet951 := TIndexedLineSetNode.Create;
IndexedLineSet951.SetCoordIndex([0,1,-1]);
Coordinate952 := TCoordinateNode.Create;
Coordinate952.SetPoint([Vector3(-0.2,1.44,-0.04),Vector3(-0.2,1.1388,-0.04)]);
{ METHOD .Coord }
IndexedLineSet951.Coord := Coordinate952;
{ METHOD .Geometry }
Shape949.Geometry := IndexedLineSet951;
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Shape949);
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(-0.178,1.4825,-0.0625);
{ METHOD .FdChildren.Add }
Transform953.FdChildren.Add(Shape69);
end;

procedure InitJoeSkeletonSkinSitePart54;
begin

{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform953);
Transform955 := TTransformNode.Create;
Transform955.Translation := Vector3(-0.17,1.38,0.007);
{ METHOD .FdChildren.Add }
Transform955.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform955);
Transform957 := TTransformNode.Create;
Transform957.Translation := Vector3(-0.16,1.38,-0.127);
{ METHOD .FdChildren.Add }
Transform957.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform957);
Transform959 := TTransformNode.Create;
Transform959.Translation := Vector3(-0.235,1.42,-0.0625);
{ METHOD .FdChildren.Add }
Transform959.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform959);
Transform961 := TTransformNode.Create;
Transform961.Translation := Vector3(-0.23,1.235,-0.04);
{ METHOD .FdChildren.Add }
Transform961.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform961);
Transform963 := TTransformNode.Create;
Transform963.Translation := Vector3(-0.16,1.23,-0.04);
{ METHOD .FdChildren.Add }
Transform963.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform963);
Transform965 := TTransformNode.Create;
Transform965.Translation := Vector3(-0.2,1.23,-0.105);
{ METHOD .FdChildren.Add }
Transform965.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform965);
Transform967 := TTransformNode.Create;
Transform967.Translation := Vector3(-0.2,1.235,0.02);
{ METHOD .FdChildren.Add }
Transform967.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(Transform967);
HAnimSite969 := THAnimSiteNode.Create;
HAnimSite969.Translation := Vector3(-0.165,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite969.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(HAnimSite969);
HAnimSite971 := THAnimSiteNode.Create;
HAnimSite971.Translation := Vector3(-0.23,1.133,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite971.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(HAnimSite971);
HAnimSite973 := THAnimSiteNode.Create;
HAnimSite973.Translation := Vector3(-0.244,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite973.FdChildren.Add(Shape57);
end;

procedure InitJoeSkeletonSkinSitePart55;
begin

{ METHOD .FdChildren.Add }
HAnimSegment946.FdChildren.Add(HAnimSite973);
{ METHOD .FdChildren.Add }
HAnimJoint945.FdChildren.Add(HAnimSegment946);
HAnimJoint975 := THAnimJointNode.Create;
HAnimJoint975.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint975.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint975.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment976 := THAnimSegmentNode.Create;
Shape977 := TShapeNode.Create;
{ METHOD .Appearance }
Shape977.Appearance := Appearance64;
IndexedLineSet979 := TIndexedLineSetNode.Create;
IndexedLineSet979.SetCoordIndex([0,1,-1]);
Coordinate980 := TCoordinateNode.Create;
Coordinate980.SetPoint([Vector3(-0.2,1.1388,-0.04),Vector3(-0.2,0.89,-0.04)]);
{ METHOD .Coord }
IndexedLineSet979.Coord := Coordinate980;
{ METHOD .Geometry }
Shape977.Geometry := IndexedLineSet979;
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Shape977);
Transform981 := TTransformNode.Create;
Transform981.Translation := Vector3(-0.2,1.1388,-0.04);
{ METHOD .FdChildren.Add }
Transform981.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Transform981);
Transform983 := TTransformNode.Create;
Transform983.Translation := Vector3(-0.2,1.1388,0.013);
{ METHOD .FdChildren.Add }
Transform983.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Transform983);
Transform985 := TTransformNode.Create;
Transform985.Translation := Vector3(-0.225,1,-0.01);
{ METHOD .FdChildren.Add }
Transform985.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Transform985);
Transform987 := TTransformNode.Create;
Transform987.Translation := Vector3(-0.225,1,-0.07);
{ METHOD .FdChildren.Add }
Transform987.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Transform987);
Transform989 := TTransformNode.Create;
Transform989.Translation := Vector3(-0.185,1,-0.01);
{ METHOD .FdChildren.Add }
Transform989.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Transform989);
Transform991 := TTransformNode.Create;
Transform991.Translation := Vector3(-0.185,1,-0.07);
{ METHOD .FdChildren.Add }
Transform991.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(Transform991);
end;

procedure InitJoeSkeletonSkinSitePart56;
begin

HAnimSite993 := THAnimSiteNode.Create;
HAnimSite993.Translation := Vector3(-0.2,0.9,-0.015);
{ METHOD .FdChildren.Add }
HAnimSite993.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(HAnimSite993);
HAnimSite995 := THAnimSiteNode.Create;
HAnimSite995.Translation := Vector3(-0.2,1.1388,-0.08);
{ METHOD .FdChildren.Add }
HAnimSite995.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment976.FdChildren.Add(HAnimSite995);
{ METHOD .FdChildren.Add }
HAnimJoint975.FdChildren.Add(HAnimSegment976);
HAnimJoint997 := THAnimJointNode.Create;
HAnimJoint997.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint997.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint997.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment998 := THAnimSegmentNode.Create;
Shape999 := TShapeNode.Create;
{ METHOD .Appearance }
Shape999.Appearance := Appearance64;
IndexedLineSet1001 := TIndexedLineSetNode.Create;
IndexedLineSet1001.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate1002 := TCoordinateNode.Create;
Coordinate1002.SetPoint([Vector3(-0.2,0.89,-0.04),Vector3(-0.2,0.85,0),Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.84,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1001.Coord := Coordinate1002;
{ METHOD .Geometry }
Shape999.Geometry := IndexedLineSet1001;
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Shape999);
Transform1003 := TTransformNode.Create;
Transform1003.Translation := Vector3(-0.2,0.89,-0.04);
{ METHOD .FdChildren.Add }
Transform1003.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(Transform1003);
HAnimSite1005 := THAnimSiteNode.Create;
HAnimSite1005.Translation := Vector3(-0.2,0.9,-0.085);
{ METHOD .FdChildren.Add }
HAnimSite1005.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment998.FdChildren.Add(HAnimSite1005);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimSegment998);
HAnimJoint1007 := THAnimJointNode.Create;
HAnimJoint1007.Center := Vector3(-0.2,0.85,0);
HAnimJoint1007.SetSkinCoordIndex([243,244]);
HAnimJoint1007.SetSkinCoordWeight([1,1]);
HAnimSegment1008 := THAnimSegmentNode.Create;
Shape1009 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1009.Appearance := Appearance64;
IndexedLineSet1011 := TIndexedLineSetNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart57;
begin

IndexedLineSet1011.SetCoordIndex([0,1,-1]);
Coordinate1012 := TCoordinateNode.Create;
Coordinate1012.SetPoint([Vector3(-0.2,0.85,0),Vector3(-0.2,0.82,0.03)]);
{ METHOD .Coord }
IndexedLineSet1011.Coord := Coordinate1012;
{ METHOD .Geometry }
Shape1009.Geometry := IndexedLineSet1011;
{ METHOD .FdChildren.Add }
HAnimSegment1008.FdChildren.Add(Shape1009);
Transform1013 := TTransformNode.Create;
Transform1013.Translation := Vector3(-0.2,0.85,0);
{ METHOD .FdChildren.Add }
Transform1013.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1008.FdChildren.Add(Transform1013);
{ METHOD .FdChildren.Add }
HAnimJoint1007.FdChildren.Add(HAnimSegment1008);
HAnimJoint1015 := THAnimJointNode.Create;
HAnimJoint1015.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint1015.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint1015.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment1016 := THAnimSegmentNode.Create;
Shape1017 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1017.Appearance := Appearance64;
IndexedLineSet1019 := TIndexedLineSetNode.Create;
IndexedLineSet1019.SetCoordIndex([0,1,-1]);
Coordinate1020 := TCoordinateNode.Create;
Coordinate1020.SetPoint([Vector3(-0.2,0.82,0.03),Vector3(-0.2,0.8,0.05)]);
{ METHOD .Coord }
IndexedLineSet1019.Coord := Coordinate1020;
{ METHOD .Geometry }
Shape1017.Geometry := IndexedLineSet1019;
{ METHOD .FdChildren.Add }
HAnimSegment1016.FdChildren.Add(Shape1017);
Transform1021 := TTransformNode.Create;
Transform1021.Translation := Vector3(-0.2,0.82,0.03);
{ METHOD .FdChildren.Add }
Transform1021.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1016.FdChildren.Add(Transform1021);
{ METHOD .FdChildren.Add }
HAnimJoint1015.FdChildren.Add(HAnimSegment1016);
HAnimJoint1023 := THAnimJointNode.Create;
HAnimJoint1023.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint1023.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint1023.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1024 := THAnimSegmentNode.Create;
Shape1025 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1025.Appearance := Appearance64;
IndexedLineSet1027 := TIndexedLineSetNode.Create;
IndexedLineSet1027.SetCoordIndex([0,1,-1]);
Coordinate1028 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart58;
begin

Coordinate1028.SetPoint([Vector3(-0.2,0.8,0.05),Vector3(-0.2,0.78,0.07)]);
{ METHOD .Coord }
IndexedLineSet1027.Coord := Coordinate1028;
{ METHOD .Geometry }
Shape1025.Geometry := IndexedLineSet1027;
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(Shape1025);
Transform1029 := TTransformNode.Create;
Transform1029.Translation := Vector3(-0.2,0.785,0.075);
{ METHOD .FdChildren.Add }
Transform1029.FdChildren.Add(Shape69);
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(Transform1029);
Transform1031 := TTransformNode.Create;
Transform1031.Translation := Vector3(-0.2,0.8,0.05);
{ METHOD .FdChildren.Add }
Transform1031.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(Transform1031);
HAnimSite1033 := THAnimSiteNode.Create;
HAnimSite1033.Translation := Vector3(-0.2,0.78,0.07);
{ METHOD .FdChildren.Add }
HAnimSite1033.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1024.FdChildren.Add(HAnimSite1033);
{ METHOD .FdChildren.Add }
HAnimJoint1023.FdChildren.Add(HAnimSegment1024);
{ METHOD .FdChildren.Add }
HAnimJoint1015.FdChildren.Add(HAnimJoint1023);
{ METHOD .FdChildren.Add }
HAnimJoint1007.FdChildren.Add(HAnimJoint1015);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1007);
HAnimJoint1035 := THAnimJointNode.Create;
HAnimJoint1035.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint1035.SetSkinCoordIndex([245,246]);
HAnimJoint1035.SetSkinCoordWeight([1,1]);
HAnimSegment1036 := THAnimSegmentNode.Create;
Shape1037 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1037.Appearance := Appearance64;
IndexedLineSet1039 := TIndexedLineSetNode.Create;
IndexedLineSet1039.SetCoordIndex([0,1,-1]);
Coordinate1040 := TCoordinateNode.Create;
Coordinate1040.SetPoint([Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.793,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1039.Coord := Coordinate1040;
{ METHOD .Geometry }
Shape1037.Geometry := IndexedLineSet1039;
{ METHOD .FdChildren.Add }
HAnimSegment1036.FdChildren.Add(Shape1037);
Transform1041 := TTransformNode.Create;
Transform1041.Translation := Vector3(-0.2,0.84,-0.015);
{ METHOD .FdChildren.Add }
Transform1041.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1036.FdChildren.Add(Transform1041);
HAnimSite1043 := THAnimSiteNode.Create;
HAnimSite1043.Translation := Vector3(-0.2,0.793,-0.005);
end;

procedure InitJoeSkeletonSkinSitePart59;
begin

{ METHOD .FdChildren.Add }
HAnimSite1043.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1036.FdChildren.Add(HAnimSite1043);
{ METHOD .FdChildren.Add }
HAnimJoint1035.FdChildren.Add(HAnimSegment1036);
HAnimJoint1045 := THAnimJointNode.Create;
HAnimJoint1045.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint1045.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint1045.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment1046 := THAnimSegmentNode.Create;
Shape1047 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1047.Appearance := Appearance64;
IndexedLineSet1049 := TIndexedLineSetNode.Create;
IndexedLineSet1049.SetCoordIndex([0,1,-1]);
Coordinate1050 := TCoordinateNode.Create;
Coordinate1050.SetPoint([Vector3(-0.2,0.793,-0.015),Vector3(-0.2,0.745,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1049.Coord := Coordinate1050;
{ METHOD .Geometry }
Shape1047.Geometry := IndexedLineSet1049;
{ METHOD .FdChildren.Add }
HAnimSegment1046.FdChildren.Add(Shape1047);
Transform1051 := TTransformNode.Create;
Transform1051.Translation := Vector3(-0.2,0.793,-0.015);
{ METHOD .FdChildren.Add }
Transform1051.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1046.FdChildren.Add(Transform1051);
{ METHOD .FdChildren.Add }
HAnimJoint1045.FdChildren.Add(HAnimSegment1046);
HAnimJoint1053 := THAnimJointNode.Create;
HAnimJoint1053.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint1053.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint1053.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1054 := THAnimSegmentNode.Create;
Shape1055 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1055.Appearance := Appearance64;
IndexedLineSet1057 := TIndexedLineSetNode.Create;
IndexedLineSet1057.SetCoordIndex([0,1,-1]);
Coordinate1058 := TCoordinateNode.Create;
Coordinate1058.SetPoint([Vector3(-0.2,0.745,-0.015),Vector3(-0.2,0.72,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1057.Coord := Coordinate1058;
{ METHOD .Geometry }
Shape1055.Geometry := IndexedLineSet1057;
{ METHOD .FdChildren.Add }
HAnimSegment1054.FdChildren.Add(Shape1055);
Transform1059 := TTransformNode.Create;
Transform1059.Translation := Vector3(-0.2,0.745,-0.015);
{ METHOD .FdChildren.Add }
Transform1059.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1054.FdChildren.Add(Transform1059);
end;

procedure InitJoeSkeletonSkinSitePart60;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1053.FdChildren.Add(HAnimSegment1054);
HAnimJoint1061 := THAnimJointNode.Create;
HAnimJoint1061.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint1061.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint1061.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1062 := THAnimSegmentNode.Create;
Shape1063 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1063.Appearance := Appearance64;
IndexedLineSet1065 := TIndexedLineSetNode.Create;
IndexedLineSet1065.SetCoordIndex([0,1,-1]);
Coordinate1066 := TCoordinateNode.Create;
Coordinate1066.SetPoint([Vector3(-0.2,0.72,-0.015),Vector3(-0.2,0.695,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1065.Coord := Coordinate1066;
{ METHOD .Geometry }
Shape1063.Geometry := IndexedLineSet1065;
{ METHOD .FdChildren.Add }
HAnimSegment1062.FdChildren.Add(Shape1063);
Transform1067 := TTransformNode.Create;
Transform1067.Translation := Vector3(-0.2,0.72,-0.015);
{ METHOD .FdChildren.Add }
Transform1067.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1062.FdChildren.Add(Transform1067);
HAnimSite1069 := THAnimSiteNode.Create;
HAnimSite1069.Translation := Vector3(-0.2,0.695,-0.015);
{ METHOD .FdChildren.Add }
HAnimSite1069.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1062.FdChildren.Add(HAnimSite1069);
{ METHOD .FdChildren.Add }
HAnimJoint1061.FdChildren.Add(HAnimSegment1062);
{ METHOD .FdChildren.Add }
HAnimJoint1053.FdChildren.Add(HAnimJoint1061);
{ METHOD .FdChildren.Add }
HAnimJoint1045.FdChildren.Add(HAnimJoint1053);
{ METHOD .FdChildren.Add }
HAnimJoint1035.FdChildren.Add(HAnimJoint1045);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1035);
HAnimJoint1071 := THAnimJointNode.Create;
HAnimJoint1071.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint1071.SetSkinCoordIndex([247,248]);
HAnimJoint1071.SetSkinCoordWeight([1,1]);
HAnimSegment1072 := THAnimSegmentNode.Create;
Shape1073 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1073.Appearance := Appearance64;
IndexedLineSet1075 := TIndexedLineSetNode.Create;
IndexedLineSet1075.SetCoordIndex([0,1,-1]);
Coordinate1076 := TCoordinateNode.Create;
Coordinate1076.SetPoint([Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.788,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1075.Coord := Coordinate1076;
end;

procedure InitJoeSkeletonSkinSitePart61;
begin

{ METHOD .Geometry }
Shape1073.Geometry := IndexedLineSet1075;
{ METHOD .FdChildren.Add }
HAnimSegment1072.FdChildren.Add(Shape1073);
Transform1077 := TTransformNode.Create;
Transform1077.Translation := Vector3(-0.2,0.835,-0.04);
{ METHOD .FdChildren.Add }
Transform1077.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1072.FdChildren.Add(Transform1077);
{ METHOD .FdChildren.Add }
HAnimJoint1071.FdChildren.Add(HAnimSegment1072);
HAnimJoint1079 := THAnimJointNode.Create;
HAnimJoint1079.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint1079.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint1079.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1080 := THAnimSegmentNode.Create;
Shape1081 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1081.Appearance := Appearance64;
IndexedLineSet1083 := TIndexedLineSetNode.Create;
IndexedLineSet1083.SetCoordIndex([0,1,-1]);
Coordinate1084 := TCoordinateNode.Create;
Coordinate1084.SetPoint([Vector3(-0.2,0.788,-0.04),Vector3(-0.2,0.74,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1083.Coord := Coordinate1084;
{ METHOD .Geometry }
Shape1081.Geometry := IndexedLineSet1083;
{ METHOD .FdChildren.Add }
HAnimSegment1080.FdChildren.Add(Shape1081);
Transform1085 := TTransformNode.Create;
Transform1085.Translation := Vector3(-0.2,0.788,-0.04);
{ METHOD .FdChildren.Add }
Transform1085.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1080.FdChildren.Add(Transform1085);
{ METHOD .FdChildren.Add }
HAnimJoint1079.FdChildren.Add(HAnimSegment1080);
HAnimJoint1087 := THAnimJointNode.Create;
HAnimJoint1087.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint1087.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint1087.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1088 := THAnimSegmentNode.Create;
Shape1089 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1089.Appearance := Appearance64;
IndexedLineSet1091 := TIndexedLineSetNode.Create;
IndexedLineSet1091.SetCoordIndex([0,1,-1]);
Coordinate1092 := TCoordinateNode.Create;
Coordinate1092.SetPoint([Vector3(-0.2,0.74,-0.04),Vector3(-0.2,0.7142,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1091.Coord := Coordinate1092;
{ METHOD .Geometry }
Shape1089.Geometry := IndexedLineSet1091;
{ METHOD .FdChildren.Add }
HAnimSegment1088.FdChildren.Add(Shape1089);
end;

procedure InitJoeSkeletonSkinSitePart62;
begin

Transform1093 := TTransformNode.Create;
Transform1093.Translation := Vector3(-0.2,0.74,-0.04);
{ METHOD .FdChildren.Add }
Transform1093.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1088.FdChildren.Add(Transform1093);
{ METHOD .FdChildren.Add }
HAnimJoint1087.FdChildren.Add(HAnimSegment1088);
HAnimJoint1095 := THAnimJointNode.Create;
HAnimJoint1095.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint1095.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint1095.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1096 := THAnimSegmentNode.Create;
Shape1097 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1097.Appearance := Appearance64;
IndexedLineSet1099 := TIndexedLineSetNode.Create;
IndexedLineSet1099.SetCoordIndex([0,1,-1]);
Coordinate1100 := TCoordinateNode.Create;
Coordinate1100.SetPoint([Vector3(-0.2,0.7142,-0.04),Vector3(-0.2,0.6758,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1099.Coord := Coordinate1100;
{ METHOD .Geometry }
Shape1097.Geometry := IndexedLineSet1099;
{ METHOD .FdChildren.Add }
HAnimSegment1096.FdChildren.Add(Shape1097);
Transform1101 := TTransformNode.Create;
Transform1101.Translation := Vector3(-0.2,0.7142,-0.04);
{ METHOD .FdChildren.Add }
Transform1101.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1096.FdChildren.Add(Transform1101);
HAnimSite1103 := THAnimSiteNode.Create;
HAnimSite1103.Translation := Vector3(-0.2,0.68,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite1103.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1096.FdChildren.Add(HAnimSite1103);
HAnimSite1105 := THAnimSiteNode.Create;
HAnimSite1105.Translation := Vector3(-0.2,0.68,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite1105.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1096.FdChildren.Add(HAnimSite1105);
{ METHOD .FdChildren.Add }
HAnimJoint1095.FdChildren.Add(HAnimSegment1096);
{ METHOD .FdChildren.Add }
HAnimJoint1087.FdChildren.Add(HAnimJoint1095);
{ METHOD .FdChildren.Add }
HAnimJoint1079.FdChildren.Add(HAnimJoint1087);
{ METHOD .FdChildren.Add }
HAnimJoint1071.FdChildren.Add(HAnimJoint1079);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1071);
HAnimJoint1107 := THAnimJointNode.Create;
HAnimJoint1107.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint1107.SetSkinCoordIndex([249,250]);
HAnimJoint1107.SetSkinCoordWeight([1,1]);
end;

procedure InitJoeSkeletonSkinSitePart63;
begin

HAnimSegment1108 := THAnimSegmentNode.Create;
Shape1109 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1109.Appearance := Appearance64;
IndexedLineSet1111 := TIndexedLineSetNode.Create;
IndexedLineSet1111.SetCoordIndex([0,1,-1]);
Coordinate1112 := TCoordinateNode.Create;
Coordinate1112.SetPoint([Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.793,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1111.Coord := Coordinate1112;
{ METHOD .Geometry }
Shape1109.Geometry := IndexedLineSet1111;
{ METHOD .FdChildren.Add }
HAnimSegment1108.FdChildren.Add(Shape1109);
Transform1113 := TTransformNode.Create;
Transform1113.Translation := Vector3(-0.2,0.835,-0.065);
{ METHOD .FdChildren.Add }
Transform1113.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1108.FdChildren.Add(Transform1113);
{ METHOD .FdChildren.Add }
HAnimJoint1107.FdChildren.Add(HAnimSegment1108);
HAnimJoint1115 := THAnimJointNode.Create;
HAnimJoint1115.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint1115.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint1115.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1116 := THAnimSegmentNode.Create;
Shape1117 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1117.Appearance := Appearance64;
IndexedLineSet1119 := TIndexedLineSetNode.Create;
IndexedLineSet1119.SetCoordIndex([0,1,-1]);
Coordinate1120 := TCoordinateNode.Create;
Coordinate1120.SetPoint([Vector3(-0.2,0.793,-0.065),Vector3(-0.2,0.74,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1119.Coord := Coordinate1120;
{ METHOD .Geometry }
Shape1117.Geometry := IndexedLineSet1119;
{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(Shape1117);
Transform1121 := TTransformNode.Create;
Transform1121.Translation := Vector3(-0.2,0.793,-0.065);
{ METHOD .FdChildren.Add }
Transform1121.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1116.FdChildren.Add(Transform1121);
{ METHOD .FdChildren.Add }
HAnimJoint1115.FdChildren.Add(HAnimSegment1116);
HAnimJoint1123 := THAnimJointNode.Create;
HAnimJoint1123.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint1123.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint1123.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1124 := THAnimSegmentNode.Create;
Shape1125 := TShapeNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart64;
begin

{ METHOD .Appearance }
Shape1125.Appearance := Appearance64;
IndexedLineSet1127 := TIndexedLineSetNode.Create;
IndexedLineSet1127.SetCoordIndex([0,1,-1]);
Coordinate1128 := TCoordinateNode.Create;
Coordinate1128.SetPoint([Vector3(-0.2,0.74,-0.065),Vector3(-0.2,0.7177,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1127.Coord := Coordinate1128;
{ METHOD .Geometry }
Shape1125.Geometry := IndexedLineSet1127;
{ METHOD .FdChildren.Add }
HAnimSegment1124.FdChildren.Add(Shape1125);
Transform1129 := TTransformNode.Create;
Transform1129.Translation := Vector3(-0.2,0.74,-0.065);
{ METHOD .FdChildren.Add }
Transform1129.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1124.FdChildren.Add(Transform1129);
{ METHOD .FdChildren.Add }
HAnimJoint1123.FdChildren.Add(HAnimSegment1124);
HAnimJoint1131 := THAnimJointNode.Create;
HAnimJoint1131.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint1131.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint1131.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1132 := THAnimSegmentNode.Create;
Shape1133 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1133.Appearance := Appearance64;
IndexedLineSet1135 := TIndexedLineSetNode.Create;
IndexedLineSet1135.SetCoordIndex([0,1,-1]);
Coordinate1136 := TCoordinateNode.Create;
Coordinate1136.SetPoint([Vector3(-0.2,0.7177,-0.065),Vector3(-0.2,0.695,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1135.Coord := Coordinate1136;
{ METHOD .Geometry }
Shape1133.Geometry := IndexedLineSet1135;
{ METHOD .FdChildren.Add }
HAnimSegment1132.FdChildren.Add(Shape1133);
Transform1137 := TTransformNode.Create;
Transform1137.Translation := Vector3(-0.2,0.7177,-0.065);
{ METHOD .FdChildren.Add }
Transform1137.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1132.FdChildren.Add(Transform1137);
HAnimSite1139 := THAnimSiteNode.Create;
HAnimSite1139.Translation := Vector3(-0.2,0.695,-0.065);
{ METHOD .FdChildren.Add }
HAnimSite1139.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1132.FdChildren.Add(HAnimSite1139);
{ METHOD .FdChildren.Add }
HAnimJoint1131.FdChildren.Add(HAnimSegment1132);
{ METHOD .FdChildren.Add }
HAnimJoint1123.FdChildren.Add(HAnimJoint1131);
{ METHOD .FdChildren.Add }
HAnimJoint1115.FdChildren.Add(HAnimJoint1123);
{ METHOD .FdChildren.Add }
HAnimJoint1107.FdChildren.Add(HAnimJoint1115);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1107);
end;

procedure InitJoeSkeletonSkinSitePart65;
begin

HAnimJoint1141 := THAnimJointNode.Create;
HAnimJoint1141.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint1141.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint1141.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment1142 := THAnimSegmentNode.Create;
Shape1143 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1143.Appearance := Appearance64;
IndexedLineSet1145 := TIndexedLineSetNode.Create;
IndexedLineSet1145.SetCoordIndex([0,1,-1]);
Coordinate1146 := TCoordinateNode.Create;
Coordinate1146.SetPoint([Vector3(-0.2,0.84,-0.085),Vector3(-0.2,0.79,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1145.Coord := Coordinate1146;
{ METHOD .Geometry }
Shape1143.Geometry := IndexedLineSet1145;
{ METHOD .FdChildren.Add }
HAnimSegment1142.FdChildren.Add(Shape1143);
Transform1147 := TTransformNode.Create;
Transform1147.Translation := Vector3(-0.2,0.84,-0.085);
{ METHOD .FdChildren.Add }
Transform1147.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1142.FdChildren.Add(Transform1147);
HAnimSite1149 := THAnimSiteNode.Create;
HAnimSite1149.Translation := Vector3(-0.2,0.79,-0.095);
{ METHOD .FdChildren.Add }
HAnimSite1149.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1142.FdChildren.Add(HAnimSite1149);
{ METHOD .FdChildren.Add }
HAnimJoint1141.FdChildren.Add(HAnimSegment1142);
HAnimJoint1151 := THAnimJointNode.Create;
HAnimJoint1151.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint1151.SetSkinCoordIndex([276,277,278]);
HAnimJoint1151.SetSkinCoordWeight([1,1,1]);
HAnimSegment1152 := THAnimSegmentNode.Create;
Shape1153 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1153.Appearance := Appearance64;
IndexedLineSet1155 := TIndexedLineSetNode.Create;
IndexedLineSet1155.SetCoordIndex([0,1,-1]);
Coordinate1156 := TCoordinateNode.Create;
Coordinate1156.SetPoint([Vector3(-0.2,0.79,-0.085),Vector3(-0.2,0.755,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1155.Coord := Coordinate1156;
{ METHOD .Geometry }
Shape1153.Geometry := IndexedLineSet1155;
{ METHOD .FdChildren.Add }
HAnimSegment1152.FdChildren.Add(Shape1153);
Transform1157 := TTransformNode.Create;
Transform1157.Translation := Vector3(-0.2,0.79,-0.085);
{ METHOD .FdChildren.Add }
Transform1157.FdChildren.Add(Shape50);
end;

procedure InitJoeSkeletonSkinSitePart66;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1152.FdChildren.Add(Transform1157);
{ METHOD .FdChildren.Add }
HAnimJoint1151.FdChildren.Add(HAnimSegment1152);
HAnimJoint1159 := THAnimJointNode.Create;
HAnimJoint1159.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint1159.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint1159.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1160 := THAnimSegmentNode.Create;
Shape1161 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1161.Appearance := Appearance64;
IndexedLineSet1163 := TIndexedLineSetNode.Create;
IndexedLineSet1163.SetCoordIndex([0,1,-1]);
Coordinate1164 := TCoordinateNode.Create;
Coordinate1164.SetPoint([Vector3(-0.2,0.755,-0.085),Vector3(-0.2,0.735,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1163.Coord := Coordinate1164;
{ METHOD .Geometry }
Shape1161.Geometry := IndexedLineSet1163;
{ METHOD .FdChildren.Add }
HAnimSegment1160.FdChildren.Add(Shape1161);
Transform1165 := TTransformNode.Create;
Transform1165.Translation := Vector3(-0.2,0.755,-0.085);
{ METHOD .FdChildren.Add }
Transform1165.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1160.FdChildren.Add(Transform1165);
{ METHOD .FdChildren.Add }
HAnimJoint1159.FdChildren.Add(HAnimSegment1160);
HAnimJoint1167 := THAnimJointNode.Create;
HAnimJoint1167.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint1167.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint1167.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1168 := THAnimSegmentNode.Create;
Shape1169 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1169.Appearance := Appearance64;
IndexedLineSet1171 := TIndexedLineSetNode.Create;
IndexedLineSet1171.SetCoordIndex([0,1,-1]);
Coordinate1172 := TCoordinateNode.Create;
Coordinate1172.SetPoint([Vector3(-0.2,0.735,-0.085),Vector3(-0.2,0.72,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1171.Coord := Coordinate1172;
{ METHOD .Geometry }
Shape1169.Geometry := IndexedLineSet1171;
{ METHOD .FdChildren.Add }
HAnimSegment1168.FdChildren.Add(Shape1169);
Transform1173 := TTransformNode.Create;
Transform1173.Translation := Vector3(-0.2,0.735,-0.085);
{ METHOD .FdChildren.Add }
Transform1173.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
HAnimSegment1168.FdChildren.Add(Transform1173);
HAnimSite1175 := THAnimSiteNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart67;
begin

HAnimSite1175.Translation := Vector3(-0.2,0.72,-0.085);
{ METHOD .FdChildren.Add }
HAnimSite1175.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
HAnimSegment1168.FdChildren.Add(HAnimSite1175);
{ METHOD .FdChildren.Add }
HAnimJoint1167.FdChildren.Add(HAnimSegment1168);
{ METHOD .FdChildren.Add }
HAnimJoint1159.FdChildren.Add(HAnimJoint1167);
{ METHOD .FdChildren.Add }
HAnimJoint1151.FdChildren.Add(HAnimJoint1159);
{ METHOD .FdChildren.Add }
HAnimJoint1141.FdChildren.Add(HAnimJoint1151);
{ METHOD .FdChildren.Add }
HAnimJoint997.FdChildren.Add(HAnimJoint1141);
{ METHOD .FdChildren.Add }
HAnimJoint975.FdChildren.Add(HAnimJoint997);
{ METHOD .FdChildren.Add }
HAnimJoint945.FdChildren.Add(HAnimJoint975);
{ METHOD .FdChildren.Add }
HAnimJoint929.FdChildren.Add(HAnimJoint945);
{ METHOD .FdChildren.Add }
HAnimJoint919.FdChildren.Add(HAnimJoint929);
{ METHOD .FdChildren.Add }
HAnimJoint553.FdChildren.Add(HAnimJoint919);
{ METHOD .FdChildren.Add }
HAnimJoint545.FdChildren.Add(HAnimJoint553);
{ METHOD .FdChildren.Add }
HAnimJoint537.FdChildren.Add(HAnimJoint545);
{ METHOD .FdChildren.Add }
HAnimJoint527.FdChildren.Add(HAnimJoint537);
{ METHOD .FdChildren.Add }
HAnimJoint519.FdChildren.Add(HAnimJoint527);
{ METHOD .FdChildren.Add }
HAnimJoint511.FdChildren.Add(HAnimJoint519);
{ METHOD .FdChildren.Add }
HAnimJoint503.FdChildren.Add(HAnimJoint511);
{ METHOD .FdChildren.Add }
HAnimJoint495.FdChildren.Add(HAnimJoint503);
{ METHOD .FdChildren.Add }
HAnimJoint483.FdChildren.Add(HAnimJoint495);
{ METHOD .FdChildren.Add }
HAnimJoint473.FdChildren.Add(HAnimJoint483);
{ METHOD .FdChildren.Add }
HAnimJoint465.FdChildren.Add(HAnimJoint473);
{ METHOD .FdChildren.Add }
HAnimJoint457.FdChildren.Add(HAnimJoint465);
{ METHOD .FdChildren.Add }
HAnimJoint449.FdChildren.Add(HAnimJoint457);
{ METHOD .FdChildren.Add }
HAnimJoint423.FdChildren.Add(HAnimJoint449);
{ METHOD .FdChildren.Add }
HAnimJoint415.FdChildren.Add(HAnimJoint423);
{ METHOD .FdChildren.Add }
HAnimJoint407.FdChildren.Add(HAnimJoint415);
{ METHOD .FdChildren.Add }
HAnimJoint392.FdChildren.Add(HAnimJoint407);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimJoint392);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid75.FdSkeleton.Add(HAnimJoint78);
Shape1177 := TShapeNode.Create;
Appearance1178 := TAppearanceNode.Create;
Material1179 := TMaterialNode.Create;
Material1179.AmbientIntensity := 0.6;
Material1179.DiffuseColor := Vector3(1,1,1);
Material1179.Shininess := 0.6;
Material1179.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance1178.Material := Material1179;
ImageTexture1180 := TImageTextureNode.Create;
end;

procedure InitJoeSkeletonSkinSitePart68;
begin

ImageTexture1180.Description := 'Blue Spiral Pattern';
ImageTexture1180.SetUrl(['zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
Appearance1178.Texture := ImageTexture1180;
{ METHOD .Appearance }
Shape1177.Appearance := Appearance1178;
IndexedFaceSet1181 := TIndexedFaceSetNode.Create;
IndexedFaceSet1181.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1181.CreaseAngle := 3.1;
Color1182 := TColorNode.Create;
Color1182.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
end;

procedure InitJoeSkeletonSkinSitePart69;
begin

{ METHOD .Color }
IndexedFaceSet1181.Color := Color1182;
Coordinate1183 := TCoordinateNode.Create;
Coordinate1183.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.0723,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ METHOD .Coord }
IndexedFaceSet1181.Coord := Coordinate1183;
{ METHOD .Geometry }
Shape1177.Geometry := IndexedFaceSet1181;
{ METHOD .SetSkin }
HAnimHumanoid75.Skin := Shape1177;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid75.FdSkinCoord.Set(Coordinate1183);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint78);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint90);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint392);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint407);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint415);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint423);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint449);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint457);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint465);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint473);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint483);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint495);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint503);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint511);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint519);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint527);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint537);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint545);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint553);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint565);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint577);
end;

procedure InitJoeSkeletonSkinSitePart70;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint585);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint593);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint601);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint609);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint617);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint625);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint679);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint929);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint805);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1061);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint841);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1095);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint875);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1131);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint909);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1167);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint771);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1023);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint797);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1053);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint833);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1087);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint867);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1123);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint901);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1159);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint755);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1007);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint781);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1035);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint817);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1071);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint851);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1107);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint885);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1141);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint719);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint975);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint653);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint661);
end;

procedure InitJoeSkeletonSkinSitePart71;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint120);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint256);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint146);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint282);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint763);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1015);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint789);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1045);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint825);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1079);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint859);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1115);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint893);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint1151);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint226);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint208);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint344);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint741);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint997);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint695);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint945);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint669);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint919);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint174);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint310);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint362);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint194);
{ METHOD .FdJoints.Add }
HAnimHumanoid75.FdJoints.Add(HAnimJoint330);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment618);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment610);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment602);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment594);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment586);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment578);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment566);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment450);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment424);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment416);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment408);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment398);
end;

procedure InitJoeSkeletonSkinSitePart72;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment91);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment79);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment626);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment554);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment474);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment466);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment458);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment546);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment538);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment528);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment520);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment512);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment504);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment496);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment484);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment393);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment147);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment283);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment742);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment998);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment772);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1024);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment806);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1062);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment842);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1096);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment876);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1132);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment910);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1168);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment798);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1054);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment834);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1088);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment868);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1124);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment902);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1160);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment764);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1016);
end;

procedure InitJoeSkeletonSkinSitePart73;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment790);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1046);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment826);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1080);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment860);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1116);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment894);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1152);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment670);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment920);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment654);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment662);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment720);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment976);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment756);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1008);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment782);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1036);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment818);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1072);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment852);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1108);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment886);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment1142);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment195);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment331);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment680);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment930);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment175);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment311);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment227);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment363);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment209);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment345);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment121);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment257);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment696);
{ METHOD .FdSegments.Add }
HAnimHumanoid75.FdSegments.Add(HAnimSegment946);
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite563;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite118;
end;

procedure InitJoeSkeletonSkinSitePart74;
begin

{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite115;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite405;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite651;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite447;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite635;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite633;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite481;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite641;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite561;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite403;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite689;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite939;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite107;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite109;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite693;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite943;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite691;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite941;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite192;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite328;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite779;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1033;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite813;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1069;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite847;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1105;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite883;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1139;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite917;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1175;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite677;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite927;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite815;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1103;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite142;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite278;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite144;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite280;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite649;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite645;
end;

procedure InitJoeSkeletonSkinSitePart75;
begin

{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite717;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite973;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite713;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite969;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite99;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite103;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite639;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite637;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite140;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite276;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite170;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite306;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite172;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite308;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite749;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1043;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite753;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1149;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite224;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite360;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite252;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite388;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite575;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite573;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite739;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite995;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite111;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite113;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite737;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite993;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite715;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite971;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite445;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite443;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite190;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite326;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite254;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite390;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite493;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite491;
end;

procedure InitJoeSkeletonSkinSitePart76;
begin

{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite647;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite643;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite101;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite105;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite751;
{ METHOD .SetSites }
HAnimHumanoid75.Sites := HAnimSite1005;
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(HAnimHumanoid75);
{ METHOD .FdChildren.Add }
Group73.FdChildren.Add(Group74);
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(Group73);
{ expected best practice: EXPORT AS='fileName' for clarity }
EXPORT1452 := TEXPORTNode.Create;
EXPORT1452.AS := 'JoeSkeletonSkinSite';
EXPORT1452.LocalDEF := 'Joe_Human';
{ METHOD .FdChildren.Add }
Group32.FdChildren.Add(EXPORT1452);
{ METHOD .AddGroup }
X3D0.AddChildren([Group32]);
end;

function CreateJoeSkeletonSkinSite: TX3DRootNode;
begin
InitJoeSkeletonSkinSitePart0;
InitJoeSkeletonSkinSitePart1;
InitJoeSkeletonSkinSitePart2;
InitJoeSkeletonSkinSitePart3;
InitJoeSkeletonSkinSitePart4;
InitJoeSkeletonSkinSitePart5;
InitJoeSkeletonSkinSitePart6;
InitJoeSkeletonSkinSitePart7;
InitJoeSkeletonSkinSitePart8;
InitJoeSkeletonSkinSitePart9;
InitJoeSkeletonSkinSitePart10;
InitJoeSkeletonSkinSitePart11;
InitJoeSkeletonSkinSitePart12;
InitJoeSkeletonSkinSitePart13;
InitJoeSkeletonSkinSitePart14;
InitJoeSkeletonSkinSitePart15;
InitJoeSkeletonSkinSitePart16;
InitJoeSkeletonSkinSitePart17;
InitJoeSkeletonSkinSitePart18;
InitJoeSkeletonSkinSitePart19;
InitJoeSkeletonSkinSitePart20;
InitJoeSkeletonSkinSitePart21;
InitJoeSkeletonSkinSitePart22;
InitJoeSkeletonSkinSitePart23;
InitJoeSkeletonSkinSitePart24;
InitJoeSkeletonSkinSitePart25;
InitJoeSkeletonSkinSitePart26;
InitJoeSkeletonSkinSitePart27;
InitJoeSkeletonSkinSitePart28;
InitJoeSkeletonSkinSitePart29;
InitJoeSkeletonSkinSitePart30;
InitJoeSkeletonSkinSitePart31;
InitJoeSkeletonSkinSitePart32;
InitJoeSkeletonSkinSitePart33;
InitJoeSkeletonSkinSitePart34;
InitJoeSkeletonSkinSitePart35;
InitJoeSkeletonSkinSitePart36;
InitJoeSkeletonSkinSitePart37;
InitJoeSkeletonSkinSitePart38;
InitJoeSkeletonSkinSitePart39;
InitJoeSkeletonSkinSitePart40;
InitJoeSkeletonSkinSitePart41;
InitJoeSkeletonSkinSitePart42;
InitJoeSkeletonSkinSitePart43;
InitJoeSkeletonSkinSitePart44;
InitJoeSkeletonSkinSitePart45;
InitJoeSkeletonSkinSitePart46;
InitJoeSkeletonSkinSitePart47;
InitJoeSkeletonSkinSitePart48;
InitJoeSkeletonSkinSitePart49;
InitJoeSkeletonSkinSitePart50;
InitJoeSkeletonSkinSitePart51;
InitJoeSkeletonSkinSitePart52;
InitJoeSkeletonSkinSitePart53;
InitJoeSkeletonSkinSitePart54;
InitJoeSkeletonSkinSitePart55;
InitJoeSkeletonSkinSitePart56;
InitJoeSkeletonSkinSitePart57;
InitJoeSkeletonSkinSitePart58;
InitJoeSkeletonSkinSitePart59;
InitJoeSkeletonSkinSitePart60;
InitJoeSkeletonSkinSitePart61;
InitJoeSkeletonSkinSitePart62;
InitJoeSkeletonSkinSitePart63;
InitJoeSkeletonSkinSitePart64;
InitJoeSkeletonSkinSitePart65;
InitJoeSkeletonSkinSitePart66;
InitJoeSkeletonSkinSitePart67;
InitJoeSkeletonSkinSitePart68;
InitJoeSkeletonSkinSitePart69;
InitJoeSkeletonSkinSitePart70;
InitJoeSkeletonSkinSitePart71;
InitJoeSkeletonSkinSitePart72;
InitJoeSkeletonSkinSitePart73;
InitJoeSkeletonSkinSitePart74;
InitJoeSkeletonSkinSitePart75;
InitJoeSkeletonSkinSitePart76;
Result := X3D0;
end;

begin
end.
