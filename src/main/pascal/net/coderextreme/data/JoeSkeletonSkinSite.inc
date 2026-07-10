function JoeSkeletonSkinSite: TX3DRootNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
X3D0.Meta['title'] := 'JoeSkeletonSkinSite.x3d';
X3D0.Meta['description'] := 'Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.';
X3D0.Meta['creator'] := 'Joe D. Williams';
X3D0.Meta['translator'] := 'Michalis Kamburelis';
X3D0.Meta['translator'] := 'Don Brutzman';
X3D0.Meta['translator'] := 'Joe D. Williams';
X3D0.Meta['created'] := '9 January 2004';
X3D0.Meta['translated'] := '4 December 2022';
X3D0.Meta['modified'] := '16 March 2026';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png';
X3D0.Meta['drawing'] := 'JoeSkeletonSkinSiteSaluteWalk_composite.vsdx';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_view3dscene.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X_ITE.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X3DOM.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_freeWrl.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_Octaga.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_vivaty.png';
X3D0.Meta['generator'] := 'tovrmlx3d, https://castle-engine.io/convert.php';
X3D0.Meta['reference'] := 'https://castle-engine.io/view3dscene.php#section_converting';
X3D0.Meta['translator'] := 'Michalis Kamburelis';
X3D0.Meta['translator'] := 'Don Brutzman';
X3D0.Meta['translator'] := 'Joe D. Williams';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['generator'] := 'X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d';
X3D0.Meta['license'] := '../license.html';
X3D0.Meta['generator'] := 'X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html';
Group32 := TGroupNode.Create;
WorldInfo33 := TWorldInfoNode.Create;
WorldInfo33.SetInfo(['By Joe for Joe','HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3']);
WorldInfo33.Title := 'JoeSkeletonSkinSite.x3d';
{ .AddChildren }
Group32.AddChildren([WorldInfo33]);
NavigationInfo34 := TNavigationInfoNode.Create;
{ .AddChildren }
Group32.AddChildren([NavigationInfo34]);
Background35 := TBackgroundNode.Create;
Background35.SetGroundAngle([1.57]);
Background35.SetGroundColor([Vector3(0,0.1,0),Vector3(0,0.1,0)]);
Background35.SetSkyColor([Vector3(0,0,0.1)]);
{ .AddChildren }
Group32.AddChildren([Background35]);
{ Authoring hint: these axes are aligned within local coordinate system }
Group36 := TGroupNode.Create;
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Description := 'Front Up View';
Viewpoint37.Orientation := Vector4(-1,-1,0,0.55);
Viewpoint37.Position := Vector3(-1,2,2.5);
{ .AddChildren }
Group36.AddChildren([Viewpoint37]);
Viewpoint38 := TViewpointNode.Create;
Viewpoint38.Description := 'From Left View';
Viewpoint38.Orientation := Vector4(0.3,1,0,-1.57);
Viewpoint38.Position := Vector3(-2.5,1.5,0);
{ .AddChildren }
Group36.AddChildren([Viewpoint38]);
Viewpoint39 := TViewpointNode.Create;
Viewpoint39.Description := 'Front Mid View';
Viewpoint39.Position := Vector3(0,0.5,1.25);
{ .AddChildren }
Group36.AddChildren([Viewpoint39]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Front Feet View';
Viewpoint40.Position := Vector3(0,0,0.75);
{ .AddChildren }
Group36.AddChildren([Viewpoint40]);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'From Right View';
Viewpoint41.Orientation := Vector4(0,1,0,1.57);
Viewpoint41.Position := Vector3(1,1,0);
{ .AddChildren }
Group36.AddChildren([Viewpoint41]);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.CenterOfRotation := Vector3(0,1.65,0);
Viewpoint42.Description := 'Front Head View';
Viewpoint42.Position := Vector3(0,1.65,0.75);
{ .AddChildren }
Group36.AddChildren([Viewpoint42]);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'Front Mid View';
Viewpoint43.Position := Vector3(0,1,1.75);
{ .AddChildren }
Group36.AddChildren([Viewpoint43]);
Viewpoint44 := TViewpointNode.Create;
Viewpoint44.Description := 'Rear View';
Viewpoint44.Orientation := Vector4(0,1,0,3.14);
Viewpoint44.Position := Vector3(0,1.5,-4);
{ .AddChildren }
Group36.AddChildren([Viewpoint44]);
Viewpoint45 := TViewpointNode.Create;
Viewpoint45.Description := 'Top View';
Viewpoint45.Orientation := Vector4(1,0,0,-1.57);
Viewpoint45.Position := Vector3(0,4,0);
{ .AddChildren }
Group36.AddChildren([Viewpoint45]);
Viewpoint46 := TViewpointNode.Create;
Viewpoint46.Description := 'Bottom View';
Viewpoint46.Orientation := Vector4(1,0,0,1.57);
Viewpoint46.Position := Vector3(0,-4,0);
{ .AddChildren }
Group36.AddChildren([Viewpoint46]);
Viewpoint47 := TViewpointNode.Create;
Viewpoint47.Description := 'Right View';
Viewpoint47.Orientation := Vector4(0,1,0,1.57);
Viewpoint47.Position := Vector3(4,1.5,0);
{ .AddChildren }
Group36.AddChildren([Viewpoint47]);
{ .AddChildren }
Group32.AddChildren([Group36]);
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
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
IndexedFaceSet53 := TIndexedFaceSetNode.Create;
IndexedFaceSet53.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet53.CreaseAngle := 0.1;
Color54 := TColorNode.Create;
Color54.SetColor([Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,1),Vector3(0,1,1),Vector3(1,1,0)]);
{ .SetColor }
IndexedFaceSet53.Color := Color54;
Coordinate55 := TCoordinateNode.Create;
Coordinate55.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.0157),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet53.Coord := Coordinate55;
{ .SetGeometry }
Shape50.Geometry := IndexedFaceSet53;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Group48.AddChildren([Transform49]);
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
{ .SetMaterial }
Appearance58.Material := Material59;
{ .SetAppearance }
Shape57.Appearance := Appearance58;
IndexedFaceSet60 := TIndexedFaceSetNode.Create;
IndexedFaceSet60.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet60.CreaseAngle := 0.1;
Coordinate61 := TCoordinateNode.Create;
Coordinate61 := Coordinate55;
{ .SetCoord }
IndexedFaceSet60.Coord := Coordinate61;
{ .SetGeometry }
Shape57.Geometry := IndexedFaceSet60;
{ .AddChild }
Transform56.AddChildren([Shape57]);
{ .AddChildren }
Group48.AddChildren([Transform56]);
Transform62 := TTransformNode.Create;
Transform62.Scale := Vector3(0.1,0.1,0.1);
Transform62.Translation := Vector3(0,0.2,0);
Shape63 := TShapeNode.Create;
Appearance64 := TAppearanceNode.Create;
Material65 := TMaterialNode.Create;
Material65.DiffuseColor := Vector3(0,1,0);
Material65.EmissiveColor := Vector3(0,1,0);
Material65.SpecularColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance64.Material := Material65;
{ .SetAppearance }
Shape63.Appearance := Appearance64;
IndexedLineSet66 := TIndexedLineSetNode.Create;
IndexedLineSet66.SetCoordIndex([0,1,-1]);
Coordinate67 := TCoordinateNode.Create;
Coordinate67.SetPoint([Vector3(0,0,0),Vector3(0,0.0001,0)]);
{ .SetCoord }
IndexedLineSet66.Coord := Coordinate67;
{ .SetGeometry }
Shape63.Geometry := IndexedLineSet66;
{ .AddChild }
Transform62.AddChildren([Shape63]);
{ .AddChildren }
Group48.AddChildren([Transform62]);
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
{ .SetMaterial }
Appearance70.Material := Material71;
{ .SetAppearance }
Shape69.Appearance := Appearance70;
Sphere72 := TSphereNode.Create;
Sphere72.Radius := 0.005;
{ .SetGeometry }
Shape69.Geometry := Sphere72;
{ .AddChild }
Transform68.AddChildren([Shape69]);
{ .AddChildren }
Group48.AddChildren([Transform68]);
{ .AddChildren }
Group32.AddChildren([Group48]);
Group73 := TGroupNode.Create;
Group74 := TGroupNode.Create;
HAnimHumanoid75 := THAnimHumanoidNode.Create;
HAnimHumanoid75.NameField := 'Human';
HAnimHumanoid75.Loa := 4;
HAnimHumanoid75.Version := '2.0';
{ original HAnimHumanoid info='"humanoidVersion=2.0"' }
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
MetadataSet76 := TMetadataSetNode.Create;
MetadataSet76.NameField := 'HAnimHumanoid.info';
MetadataSet76.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString77 := TMetadataStringNode.Create;
MetadataString77.NameField := 'humanoidVersion';
MetadataString77.SetValue(['2.0']);
{ .SetValue }
MetadataSet76.Value := MetadataString77;
{ .SetMetadata }
HAnimHumanoid75.Metadata := MetadataSet76;
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.NameField := 'humanoid_root';
HAnimJoint78.Center := Vector3(0,0.875,0);
HAnimSegment79 := THAnimSegmentNode.Create;
HAnimSegment79.NameField := 'sacrum';
Transform80 := TTransformNode.Create;
Transform80.Translation := Vector3(0,0.875,0);
Shape81 := TShapeNode.Create;
Shape81 := Shape50;
{ .AddChild }
Transform80.AddChildren([Shape81]);
{ .AddChildren }
HAnimSegment79.AddChildren([Transform80]);
Shape82 := TShapeNode.Create;
Appearance83 := TAppearanceNode.Create;
Appearance83 := Appearance64;
{ .SetAppearance }
Shape82.Appearance := Appearance83;
IndexedLineSet84 := TIndexedLineSetNode.Create;
IndexedLineSet84.SetCoordIndex([0,1,-1]);
Coordinate85 := TCoordinateNode.Create;
Coordinate85.SetPoint([Vector3(0,0.875,0),Vector3(0,0.92,0)]);
{ .SetCoord }
IndexedLineSet84.Coord := Coordinate85;
{ .SetGeometry }
Shape82.Geometry := IndexedLineSet84;
{ .AddChildren }
HAnimSegment79.AddChildren([Shape82]);
Transform86 := TTransformNode.Create;
Transform86.Translation := Vector3(0,0.92,0.08);
Shape87 := TShapeNode.Create;
Shape87 := Shape69;
{ .AddChild }
Transform86.AddChildren([Shape87]);
{ .AddChildren }
HAnimSegment79.AddChildren([Transform86]);
Transform88 := TTransformNode.Create;
Transform88.Translation := Vector3(0,0.87,-0.022);
Shape89 := TShapeNode.Create;
Shape89 := Shape69;
{ .AddChild }
Transform88.AddChildren([Shape89]);
{ .AddChildren }
HAnimSegment79.AddChildren([Transform88]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimSegment79]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.NameField := 'sacroiliac';
HAnimJoint90.Center := Vector3(0,0.92,0);
HAnimJoint90.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint90.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment91 := THAnimSegmentNode.Create;
HAnimSegment91.NameField := 'pelvis';
Transform92 := TTransformNode.Create;
Transform92.Translation := Vector3(0,0.9149,0.0016);
Transform93 := TTransformNode.Create;
Shape94 := TShapeNode.Create;
Shape94 := Shape50;
{ .AddChild }
Transform93.AddChildren([Shape94]);
{ .AddChildren }
Transform92.AddChildren([Transform93]);
{ .AddChildren }
HAnimSegment91.AddChildren([Transform92]);
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
Appearance96 := Appearance64;
{ .SetAppearance }
Shape95.Appearance := Appearance96;
IndexedLineSet97 := TIndexedLineSetNode.Create;
IndexedLineSet97.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate98 := TCoordinateNode.Create;
Coordinate98.SetPoint([Vector3(0,0.92,0),Vector3(0.0961,0.9124,0),Vector3(-0.095,0.9171,0.0029),Vector3(0,1.045,-0.095)]);
{ .SetCoord }
IndexedLineSet97.Coord := Coordinate98;
{ .SetGeometry }
Shape95.Geometry := IndexedLineSet97;
{ .AddChildren }
HAnimSegment91.AddChildren([Shape95]);
HAnimSite99 := THAnimSiteNode.Create;
HAnimSite99.NameField := 'l_iliocristale_pt';
HAnimSite99.Translation := Vector3(0.1425,1.065,0.0033);
Shape100 := TShapeNode.Create;
Shape100 := Shape57;
{ .AddChildren }
HAnimSite99.AddChildren([Shape100]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite99]);
HAnimSite101 := THAnimSiteNode.Create;
HAnimSite101.NameField := 'l_trochanterion_pt';
HAnimSite101.Translation := Vector3(0.15,0.9,-0.01);
Shape102 := TShapeNode.Create;
Shape102 := Shape57;
{ .AddChildren }
HAnimSite101.AddChildren([Shape102]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite101]);
HAnimSite103 := THAnimSiteNode.Create;
HAnimSite103.NameField := 'r_iliocristale_pt';
HAnimSite103.Translation := Vector3(-0.1425,1.065,0.0033);
Shape104 := TShapeNode.Create;
Shape104 := Shape57;
{ .AddChildren }
HAnimSite103.AddChildren([Shape104]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite103]);
HAnimSite105 := THAnimSiteNode.Create;
HAnimSite105.NameField := 'r_trochanterion_pt';
HAnimSite105.Translation := Vector3(-0.15,0.9,-0.01);
Shape106 := TShapeNode.Create;
Shape106 := Shape57;
{ .AddChildren }
HAnimSite105.AddChildren([Shape106]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite105]);
HAnimSite107 := THAnimSiteNode.Create;
HAnimSite107.NameField := 'l_asis_pt';
HAnimSite107.Translation := Vector3(0.0935,1.03,0.075);
Shape108 := TShapeNode.Create;
Shape108 := Shape57;
{ .AddChildren }
HAnimSite107.AddChildren([Shape108]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite107]);
HAnimSite109 := THAnimSiteNode.Create;
HAnimSite109.NameField := 'r_asis_pt';
HAnimSite109.Translation := Vector3(-0.0935,1.03,0.075);
Shape110 := TShapeNode.Create;
Shape110 := Shape57;
{ .AddChildren }
HAnimSite109.AddChildren([Shape110]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite109]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'l_psis_pt';
HAnimSite111.Translation := Vector3(0.0773,1.019,-0.12);
Shape112 := TShapeNode.Create;
Shape112 := Shape57;
{ .AddChildren }
HAnimSite111.AddChildren([Shape112]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite111]);
HAnimSite113 := THAnimSiteNode.Create;
HAnimSite113.NameField := 'r_psis_pt';
HAnimSite113.Translation := Vector3(-0.0773,1.019,-0.12);
Shape114 := TShapeNode.Create;
Shape114 := Shape57;
{ .AddChildren }
HAnimSite113.AddChildren([Shape114]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite113]);
HAnimSite115 := THAnimSiteNode.Create;
HAnimSite115.NameField := 'floormarker_pt';
Transform116 := TTransformNode.Create;
Transform116.Scale := Vector3(3,3,3);
Shape117 := TShapeNode.Create;
Shape117 := Shape57;
{ .AddChild }
Transform116.AddChildren([Shape117]);
{ .AddChildren }
HAnimSite115.AddChildren([Transform116]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite115]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'crotch_pt';
HAnimSite118.Translation := Vector3(0,0.87,-0.022);
Shape119 := TShapeNode.Create;
Shape119 := Shape57;
{ .AddChildren }
HAnimSite118.AddChildren([Shape119]);
{ .AddChildren }
HAnimSegment91.AddChildren([HAnimSite118]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimSegment91]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.NameField := 'l_hip';
HAnimJoint120.Center := Vector3(0.1,0.92,0);
HAnimJoint120.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint120.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment121 := THAnimSegmentNode.Create;
HAnimSegment121.NameField := 'l_thigh';
Transform122 := TTransformNode.Create;
Transform122.Translation := Vector3(0.1,0.92,0);
Shape123 := TShapeNode.Create;
Shape123 := Shape50;
{ .AddChild }
Transform122.AddChildren([Shape123]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform122]);
Shape124 := TShapeNode.Create;
Appearance125 := TAppearanceNode.Create;
Appearance125 := Appearance64;
{ .SetAppearance }
Shape124.Appearance := Appearance125;
IndexedLineSet126 := TIndexedLineSetNode.Create;
IndexedLineSet126.SetCoordIndex([0,1,-1]);
Coordinate127 := TCoordinateNode.Create;
Coordinate127.SetPoint([Vector3(0.1,0.92,0),Vector3(0.115,0.466,0)]);
{ .SetCoord }
IndexedLineSet126.Coord := Coordinate127;
{ .SetGeometry }
Shape124.Geometry := IndexedLineSet126;
{ .AddChildren }
HAnimSegment121.AddChildren([Shape124]);
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0.1,0.9,0.0775);
Shape129 := TShapeNode.Create;
Shape129 := Shape69;
{ .AddChild }
Transform128.AddChildren([Shape129]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform128]);
Transform130 := TTransformNode.Create;
Transform130.Translation := Vector3(0.079,0.92,-0.14);
Shape131 := TShapeNode.Create;
Shape131 := Shape69;
{ .AddChild }
Transform130.AddChildren([Shape131]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform130]);
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(0.171,0.65,0);
Shape133 := TShapeNode.Create;
Shape133 := Shape69;
{ .AddChild }
Transform132.AddChildren([Shape133]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform132]);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(0.02,0.65,0);
Shape135 := TShapeNode.Create;
Shape135 := Shape69;
{ .AddChild }
Transform134.AddChildren([Shape135]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform134]);
Transform136 := TTransformNode.Create;
Transform136.Translation := Vector3(0.1,0.65,-0.08);
Shape137 := TShapeNode.Create;
Shape137 := Shape69;
{ .AddChild }
Transform136.AddChildren([Shape137]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform136]);
Transform138 := TTransformNode.Create;
Transform138.Translation := Vector3(0.1,0.65,0.07);
Shape139 := TShapeNode.Create;
Shape139 := Shape69;
{ .AddChild }
Transform138.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment121.AddChildren([Transform138]);
HAnimSite140 := THAnimSiteNode.Create;
HAnimSite140.NameField := 'l_knee_crease_pt';
HAnimSite140.Translation := Vector3(0.115,0.466,-0.055);
Shape141 := TShapeNode.Create;
Shape141 := Shape57;
{ .AddChildren }
HAnimSite140.AddChildren([Shape141]);
{ .AddChildren }
HAnimSegment121.AddChildren([HAnimSite140]);
HAnimSite142 := THAnimSiteNode.Create;
HAnimSite142.NameField := 'l_femoral_lateral_epicondyle_pt';
HAnimSite142.Translation := Vector3(0.17,0.466,0);
Shape143 := TShapeNode.Create;
Shape143 := Shape57;
{ .AddChildren }
HAnimSite142.AddChildren([Shape143]);
{ .AddChildren }
HAnimSegment121.AddChildren([HAnimSite142]);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'l_femoral_medial_epicondyle_pt';
HAnimSite144.Translation := Vector3(0.05,0.466,0);
Shape145 := TShapeNode.Create;
Shape145 := Shape57;
{ .AddChildren }
HAnimSite144.AddChildren([Shape145]);
{ .AddChildren }
HAnimSegment121.AddChildren([HAnimSite144]);
{ .AddChildren }
HAnimJoint120.AddChildren([HAnimSegment121]);
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'l_knee';
HAnimJoint146.Center := Vector3(0.115,0.466,0);
HAnimJoint146.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint146.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment147 := THAnimSegmentNode.Create;
HAnimSegment147.NameField := 'l_calf';
Transform148 := TTransformNode.Create;
Transform148.Translation := Vector3(0.115,0.466,0);
Shape149 := TShapeNode.Create;
Shape149 := Shape50;
{ .AddChild }
Transform148.AddChildren([Shape149]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform148]);
Shape150 := TShapeNode.Create;
Appearance151 := TAppearanceNode.Create;
Appearance151 := Appearance64;
{ .SetAppearance }
Shape150.Appearance := Appearance151;
IndexedLineSet152 := TIndexedLineSetNode.Create;
IndexedLineSet152.SetCoordIndex([0,1,-1]);
Coordinate153 := TCoordinateNode.Create;
Coordinate153.SetPoint([Vector3(0.115,0.466,0),Vector3(0.1,0.069,0)]);
{ .SetCoord }
IndexedLineSet152.Coord := Coordinate153;
{ .SetGeometry }
Shape150.Geometry := IndexedLineSet152;
{ .AddChildren }
HAnimSegment147.AddChildren([Shape150]);
Transform154 := TTransformNode.Create;
Transform154.Translation := Vector3(0.115,0.466,0.06);
Shape155 := TShapeNode.Create;
Shape155 := Shape69;
{ .AddChild }
Transform154.AddChildren([Shape155]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform154]);
Transform156 := TTransformNode.Create;
Transform156.Translation := Vector3(0.115,0.466,-0.055);
Shape157 := TShapeNode.Create;
Shape157 := Shape69;
{ .AddChild }
Transform156.AddChildren([Shape157]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform156]);
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(0.17,0.466,0);
Shape159 := TShapeNode.Create;
Shape159 := Shape69;
{ .AddChild }
Transform158.AddChildren([Shape159]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform158]);
Transform160 := TTransformNode.Create;
Transform160.Translation := Vector3(0.05,0.466,0);
Shape161 := TShapeNode.Create;
Shape161 := Shape69;
{ .AddChild }
Transform160.AddChildren([Shape161]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform160]);
Transform162 := TTransformNode.Create;
Transform162.Translation := Vector3(0.17,0.3,0);
Shape163 := TShapeNode.Create;
Shape163 := Shape69;
{ .AddChild }
Transform162.AddChildren([Shape163]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform162]);
Transform164 := TTransformNode.Create;
Transform164.Translation := Vector3(0.06,0.3,0);
Shape165 := TShapeNode.Create;
Shape165 := Shape69;
{ .AddChild }
Transform164.AddChildren([Shape165]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform164]);
Transform166 := TTransformNode.Create;
Transform166.Translation := Vector3(0.1,0.3,-0.05);
Shape167 := TShapeNode.Create;
Shape167 := Shape69;
{ .AddChild }
Transform166.AddChildren([Shape167]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform166]);
Transform168 := TTransformNode.Create;
Transform168.Translation := Vector3(0.1,0.3,0.05);
Shape169 := TShapeNode.Create;
Shape169 := Shape69;
{ .AddChild }
Transform168.AddChildren([Shape169]);
{ .AddChildren }
HAnimSegment147.AddChildren([Transform168]);
HAnimSite170 := THAnimSiteNode.Create;
HAnimSite170.NameField := 'l_lateral_malleolus_pt';
HAnimSite170.Translation := Vector3(0.15,0.07,0);
Shape171 := TShapeNode.Create;
Shape171 := Shape57;
{ .AddChildren }
HAnimSite170.AddChildren([Shape171]);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite170]);
HAnimSite172 := THAnimSiteNode.Create;
HAnimSite172.NameField := 'l_medial_malleolus_pt';
HAnimSite172.Translation := Vector3(0.085,0.086,0.0125);
Shape173 := TShapeNode.Create;
Shape173 := Shape57;
{ .AddChildren }
HAnimSite172.AddChildren([Shape173]);
{ .AddChildren }
HAnimSegment147.AddChildren([HAnimSite172]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimSegment147]);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.NameField := 'l_talocrural';
HAnimJoint174.Center := Vector3(0.115,0.069,0);
HAnimJoint174.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint174.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment175 := THAnimSegmentNode.Create;
HAnimSegment175.NameField := 'l_talus';
Transform176 := TTransformNode.Create;
Transform176.Translation := Vector3(0.115,0.069,0);
Shape177 := TShapeNode.Create;
Shape177 := Shape50;
{ .AddChild }
Transform176.AddChildren([Shape177]);
{ .AddChildren }
HAnimSegment175.AddChildren([Transform176]);
Shape178 := TShapeNode.Create;
Appearance179 := TAppearanceNode.Create;
Appearance179 := Appearance64;
{ .SetAppearance }
Shape178.Appearance := Appearance179;
IndexedLineSet180 := TIndexedLineSetNode.Create;
IndexedLineSet180.SetCoordIndex([0,1,-1]);
Coordinate181 := TCoordinateNode.Create;
Coordinate181.SetPoint([Vector3(0.1,0.069,0),Vector3(0.115,0.031,0.03)]);
{ .SetCoord }
IndexedLineSet180.Coord := Coordinate181;
{ .SetGeometry }
Shape178.Geometry := IndexedLineSet180;
{ .AddChildren }
HAnimSegment175.AddChildren([Shape178]);
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.15,0.07,0);
Shape183 := TShapeNode.Create;
Shape183 := Shape69;
{ .AddChild }
Transform182.AddChildren([Shape183]);
{ .AddChildren }
HAnimSegment175.AddChildren([Transform182]);
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(0.085,0.086,0.0125);
Shape185 := TShapeNode.Create;
Shape185 := Shape69;
{ .AddChild }
Transform184.AddChildren([Shape185]);
{ .AddChildren }
HAnimSegment175.AddChildren([Transform184]);
Transform186 := TTransformNode.Create;
Transform186.Translation := Vector3(0.115,0.069,-0.045);
Shape187 := TShapeNode.Create;
Shape187 := Shape69;
{ .AddChild }
Transform186.AddChildren([Shape187]);
{ .AddChildren }
HAnimSegment175.AddChildren([Transform186]);
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(0.117,0.0975,0.0615);
Shape189 := TShapeNode.Create;
Shape189 := Shape69;
{ .AddChild }
Transform188.AddChildren([Shape189]);
{ .AddChildren }
HAnimSegment175.AddChildren([Transform188]);
HAnimSite190 := THAnimSiteNode.Create;
HAnimSite190.NameField := 'l_sphyrion_pt';
HAnimSite190.Translation := Vector3(0.09,0.056,0.0125);
Shape191 := TShapeNode.Create;
Shape191 := Shape57;
{ .AddChildren }
HAnimSite190.AddChildren([Shape191]);
{ .AddChildren }
HAnimSegment175.AddChildren([HAnimSite190]);
HAnimSite192 := THAnimSiteNode.Create;
HAnimSite192.NameField := 'l_calcaneus_posterior_pt';
HAnimSite192.Translation := Vector3(0.115,0.04,-0.055);
Shape193 := TShapeNode.Create;
Shape193 := Shape57;
{ .AddChildren }
HAnimSite192.AddChildren([Shape193]);
{ .AddChildren }
HAnimSegment175.AddChildren([HAnimSite192]);
{ .AddChildren }
HAnimJoint174.AddChildren([HAnimSegment175]);
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194.NameField := 'l_tarsometatarsal_2';
HAnimJoint194.Center := Vector3(0.115,0.031,0.03);
HAnimJoint194.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint194.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment195 := THAnimSegmentNode.Create;
HAnimSegment195.NameField := 'l_metatarsal_2';
Transform196 := TTransformNode.Create;
Transform196.Translation := Vector3(0.115,0.031,0.03);
Shape197 := TShapeNode.Create;
Shape197 := Shape50;
{ .AddChild }
Transform196.AddChildren([Shape197]);
{ .AddChildren }
HAnimSegment195.AddChildren([Transform196]);
Shape198 := TShapeNode.Create;
Appearance199 := TAppearanceNode.Create;
Appearance199 := Appearance64;
{ .SetAppearance }
Shape198.Appearance := Appearance199;
IndexedLineSet200 := TIndexedLineSetNode.Create;
IndexedLineSet200.SetCoordIndex([0,1,-1]);
Coordinate201 := TCoordinateNode.Create;
Coordinate201.SetPoint([Vector3(0.115,0.031,0.03),Vector3(0.115,0.037,0.09)]);
{ .SetCoord }
IndexedLineSet200.Coord := Coordinate201;
{ .SetGeometry }
Shape198.Geometry := IndexedLineSet200;
{ .AddChildren }
HAnimSegment195.AddChildren([Shape198]);
Transform202 := TTransformNode.Create;
Transform202.Translation := Vector3(0.1375,0.006,-0.03);
Shape203 := TShapeNode.Create;
Shape203 := Shape69;
{ .AddChild }
Transform202.AddChildren([Shape203]);
{ .AddChildren }
HAnimSegment195.AddChildren([Transform202]);
Transform204 := TTransformNode.Create;
Transform204.Translation := Vector3(0.095,0.006,-0.03);
Shape205 := TShapeNode.Create;
Shape205 := Shape69;
{ .AddChild }
Transform204.AddChildren([Shape205]);
{ .AddChildren }
HAnimSegment195.AddChildren([Transform204]);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0.115,0.015,-0.045);
Shape207 := TShapeNode.Create;
Shape207 := Shape69;
{ .AddChild }
Transform206.AddChildren([Shape207]);
{ .AddChildren }
HAnimSegment195.AddChildren([Transform206]);
{ .AddChildren }
HAnimJoint194.AddChildren([HAnimSegment195]);
HAnimJoint208 := THAnimJointNode.Create;
HAnimJoint208.NameField := 'l_metatarsophalangeal_2';
HAnimJoint208.Center := Vector3(0.115,0.037,0.09);
HAnimJoint208.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint208.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment209 := THAnimSegmentNode.Create;
HAnimSegment209.NameField := 'l_tarsal_proximal_phalanx_2';
Transform210 := TTransformNode.Create;
Transform210.Translation := Vector3(0.115,0.037,0.09);
Shape211 := TShapeNode.Create;
Shape211 := Shape50;
{ .AddChild }
Transform210.AddChildren([Shape211]);
{ .AddChildren }
HAnimSegment209.AddChildren([Transform210]);
Shape212 := TShapeNode.Create;
Appearance213 := TAppearanceNode.Create;
Appearance213 := Appearance64;
{ .SetAppearance }
Shape212.Appearance := Appearance213;
IndexedLineSet214 := TIndexedLineSetNode.Create;
IndexedLineSet214.SetCoordIndex([0,1,-1]);
Coordinate215 := TCoordinateNode.Create;
Coordinate215.SetPoint([Vector3(0.115,0.037,0.09),Vector3(0.115,0.02,0.122)]);
{ .SetCoord }
IndexedLineSet214.Coord := Coordinate215;
{ .SetGeometry }
Shape212.Geometry := IndexedLineSet214;
{ .AddChildren }
HAnimSegment209.AddChildren([Shape212]);
Transform216 := TTransformNode.Create;
Transform216.Translation := Vector3(0.115,0.06,0.1);
Shape217 := TShapeNode.Create;
Shape217 := Shape69;
{ .AddChild }
Transform216.AddChildren([Shape217]);
{ .AddChildren }
HAnimSegment209.AddChildren([Transform216]);
Transform218 := TTransformNode.Create;
Transform218.Translation := Vector3(0.115,0,0.07);
Shape219 := TShapeNode.Create;
Shape219 := Shape69;
{ .AddChild }
Transform218.AddChildren([Shape219]);
{ .AddChildren }
HAnimSegment209.AddChildren([Transform218]);
Transform220 := TTransformNode.Create;
Transform220.Translation := Vector3(0.165,0,0.07);
Shape221 := TShapeNode.Create;
Shape221 := Shape69;
{ .AddChild }
Transform220.AddChildren([Shape221]);
{ .AddChildren }
HAnimSegment209.AddChildren([Transform220]);
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.095,0,0.07);
Shape223 := TShapeNode.Create;
Shape223 := Shape69;
{ .AddChild }
Transform222.AddChildren([Shape223]);
{ .AddChildren }
HAnimSegment209.AddChildren([Transform222]);
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224.NameField := 'l_metatarsal_phalanx_1_pt';
HAnimSite224.Translation := Vector3(0.087,0.01,0.122);
Shape225 := TShapeNode.Create;
Shape225 := Shape57;
{ .AddChildren }
HAnimSite224.AddChildren([Shape225]);
{ .AddChildren }
HAnimSegment209.AddChildren([HAnimSite224]);
{ .AddChildren }
HAnimJoint208.AddChildren([HAnimSegment209]);
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226.NameField := 'l_metatarsal';
HAnimJoint226.Center := Vector3(0.115,0.02,0.122);
HAnimJoint226.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint226.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment227 := THAnimSegmentNode.Create;
HAnimSegment227.NameField := 'l_tarsal_distal_phalanx_2';
Transform228 := TTransformNode.Create;
Transform228.Translation := Vector3(0.115,0.02,0.13);
Shape229 := TShapeNode.Create;
Shape229 := Shape50;
{ .AddChild }
Transform228.AddChildren([Shape229]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform228]);
Shape230 := TShapeNode.Create;
Appearance231 := TAppearanceNode.Create;
Appearance231 := Appearance64;
{ .SetAppearance }
Shape230.Appearance := Appearance231;
IndexedLineSet232 := TIndexedLineSetNode.Create;
IndexedLineSet232.SetCoordIndex([0,1,-1]);
Coordinate233 := TCoordinateNode.Create;
Coordinate233.SetPoint([Vector3(0.115,0.02,0.122),Vector3(0.132,0.013,0.19)]);
{ .SetCoord }
IndexedLineSet232.Coord := Coordinate233;
{ .SetGeometry }
Shape230.Geometry := IndexedLineSet232;
{ .AddChildren }
HAnimSegment227.AddChildren([Shape230]);
Transform234 := TTransformNode.Create;
Transform234.Translation := Vector3(0.115,0.04,0.13);
Shape235 := TShapeNode.Create;
Shape235 := Shape69;
{ .AddChild }
Transform234.AddChildren([Shape235]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform234]);
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(0.125,0,0.12);
Shape237 := TShapeNode.Create;
Shape237 := Shape69;
{ .AddChild }
Transform236.AddChildren([Shape237]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform236]);
Transform238 := TTransformNode.Create;
Transform238.Translation := Vector3(0.165,0,0.12);
Shape239 := TShapeNode.Create;
Shape239 := Shape69;
{ .AddChild }
Transform238.AddChildren([Shape239]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform238]);
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(0.087,0,0.122);
Shape241 := TShapeNode.Create;
Shape241 := Shape69;
{ .AddChild }
Transform240.AddChildren([Shape241]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform240]);
Transform242 := TTransformNode.Create;
Transform242.Translation := Vector3(0.09,0.012,0.188);
Shape243 := TShapeNode.Create;
Shape243 := Shape69;
{ .AddChild }
Transform242.AddChildren([Shape243]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform242]);
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.11,0.011,0.19);
Shape245 := TShapeNode.Create;
Shape245 := Shape69;
{ .AddChild }
Transform244.AddChildren([Shape245]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform244]);
Transform246 := TTransformNode.Create;
Transform246.Translation := Vector3(0.128,0.011,0.185);
Shape247 := TShapeNode.Create;
Shape247 := Shape69;
{ .AddChild }
Transform246.AddChildren([Shape247]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform246]);
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(0.142,0.011,0.178);
Shape249 := TShapeNode.Create;
Shape249 := Shape69;
{ .AddChild }
Transform248.AddChildren([Shape249]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform248]);
Transform250 := TTransformNode.Create;
Transform250.Translation := Vector3(0.154,0.01,0.168);
Shape251 := TShapeNode.Create;
Shape251 := Shape69;
{ .AddChild }
Transform250.AddChildren([Shape251]);
{ .AddChildren }
HAnimSegment227.AddChildren([Transform250]);
HAnimSite252 := THAnimSiteNode.Create;
HAnimSite252.NameField := 'l_metatarsal_phalanx_5_pt';
HAnimSite252.Translation := Vector3(0.165,0.01,0.12);
Shape253 := TShapeNode.Create;
Shape253 := Shape57;
{ .AddChildren }
HAnimSite252.AddChildren([Shape253]);
{ .AddChildren }
HAnimSegment227.AddChildren([HAnimSite252]);
HAnimSite254 := THAnimSiteNode.Create;
HAnimSite254.NameField := 'l_tarsal_distal_phalanx_2_pt';
HAnimSite254.Translation := Vector3(0.11,0.011,0.19);
Shape255 := TShapeNode.Create;
Shape255 := Shape57;
{ .AddChildren }
HAnimSite254.AddChildren([Shape255]);
{ .AddChildren }
HAnimSegment227.AddChildren([HAnimSite254]);
{ .AddChildren }
HAnimJoint226.AddChildren([HAnimSegment227]);
{ .AddChildren }
HAnimJoint208.AddChildren([HAnimJoint226]);
{ .AddChildren }
HAnimJoint194.AddChildren([HAnimJoint208]);
{ .AddChildren }
HAnimJoint174.AddChildren([HAnimJoint194]);
{ .AddChildren }
HAnimJoint146.AddChildren([HAnimJoint174]);
{ .AddChildren }
HAnimJoint120.AddChildren([HAnimJoint146]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint120]);
HAnimJoint256 := THAnimJointNode.Create;
HAnimJoint256.NameField := 'r_hip';
HAnimJoint256.Center := Vector3(-0.1,0.92,0);
HAnimJoint256.SetSkinCoordIndex([91,92,98,99,100,101]);
HAnimJoint256.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment257 := THAnimSegmentNode.Create;
HAnimSegment257.NameField := 'r_thigh';
Transform258 := TTransformNode.Create;
Transform258.Translation := Vector3(-0.1,0.92,0);
Shape259 := TShapeNode.Create;
Shape259 := Shape50;
{ .AddChild }
Transform258.AddChildren([Shape259]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform258]);
Shape260 := TShapeNode.Create;
Appearance261 := TAppearanceNode.Create;
Appearance261 := Appearance64;
{ .SetAppearance }
Shape260.Appearance := Appearance261;
IndexedLineSet262 := TIndexedLineSetNode.Create;
IndexedLineSet262.SetCoordIndex([0,1,-1]);
Coordinate263 := TCoordinateNode.Create;
Coordinate263.SetPoint([Vector3(-0.1,0.92,0),Vector3(-0.1,0.4913,0)]);
{ .SetCoord }
IndexedLineSet262.Coord := Coordinate263;
{ .SetGeometry }
Shape260.Geometry := IndexedLineSet262;
{ .AddChildren }
HAnimSegment257.AddChildren([Shape260]);
Transform264 := TTransformNode.Create;
Transform264.Translation := Vector3(-0.079,0.92,-0.14);
Shape265 := TShapeNode.Create;
Shape265 := Shape69;
{ .AddChild }
Transform264.AddChildren([Shape265]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform264]);
Transform266 := TTransformNode.Create;
Transform266.Translation := Vector3(-0.1,0.9,0.075);
Shape267 := TShapeNode.Create;
Shape267 := Shape69;
{ .AddChild }
Transform266.AddChildren([Shape267]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform266]);
Transform268 := TTransformNode.Create;
Transform268.Translation := Vector3(-0.171,0.65,0);
Shape269 := TShapeNode.Create;
Shape269 := Shape69;
{ .AddChild }
Transform268.AddChildren([Shape269]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform268]);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(-0.02,0.65,0);
Shape271 := TShapeNode.Create;
Shape271 := Shape69;
{ .AddChild }
Transform270.AddChildren([Shape271]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform270]);
Transform272 := TTransformNode.Create;
Transform272.Translation := Vector3(-0.1,0.65,-0.08);
Shape273 := TShapeNode.Create;
Shape273 := Shape69;
{ .AddChild }
Transform272.AddChildren([Shape273]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform272]);
Transform274 := TTransformNode.Create;
Transform274.Translation := Vector3(-0.1,0.65,0.07);
Shape275 := TShapeNode.Create;
Shape275 := Shape69;
{ .AddChild }
Transform274.AddChildren([Shape275]);
{ .AddChildren }
HAnimSegment257.AddChildren([Transform274]);
HAnimSite276 := THAnimSiteNode.Create;
HAnimSite276.NameField := 'r_knee_crease_pt';
HAnimSite276.Translation := Vector3(-0.115,0.466,-0.055);
Shape277 := TShapeNode.Create;
Shape277 := Shape57;
{ .AddChildren }
HAnimSite276.AddChildren([Shape277]);
{ .AddChildren }
HAnimSegment257.AddChildren([HAnimSite276]);
HAnimSite278 := THAnimSiteNode.Create;
HAnimSite278.NameField := 'r_femoral_lateral_epicondyle_pt';
HAnimSite278.Translation := Vector3(-0.17,0.466,0);
Shape279 := TShapeNode.Create;
Shape279 := Shape57;
{ .AddChildren }
HAnimSite278.AddChildren([Shape279]);
{ .AddChildren }
HAnimSegment257.AddChildren([HAnimSite278]);
HAnimSite280 := THAnimSiteNode.Create;
HAnimSite280.NameField := 'r_femoral_medial_epicondyle_pt';
HAnimSite280.Translation := Vector3(-0.05,0.466,0);
Shape281 := TShapeNode.Create;
Shape281 := Shape57;
{ .AddChildren }
HAnimSite280.AddChildren([Shape281]);
{ .AddChildren }
HAnimSegment257.AddChildren([HAnimSite280]);
{ .AddChildren }
HAnimJoint256.AddChildren([HAnimSegment257]);
HAnimJoint282 := THAnimJointNode.Create;
HAnimJoint282.NameField := 'r_knee';
HAnimJoint282.Center := Vector3(-0.05,0.466,0);
HAnimJoint282.SetSkinCoordIndex([362,363,364,365,366,367,368,369]);
HAnimJoint282.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment283 := THAnimSegmentNode.Create;
HAnimSegment283.NameField := 'r_calf';
Transform284 := TTransformNode.Create;
Transform284.Translation := Vector3(-0.1,0.4913,0);
Shape285 := TShapeNode.Create;
Shape285 := Shape50;
{ .AddChild }
Transform284.AddChildren([Shape285]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform284]);
Shape286 := TShapeNode.Create;
Appearance287 := TAppearanceNode.Create;
Appearance287 := Appearance64;
{ .SetAppearance }
Shape286.Appearance := Appearance287;
IndexedLineSet288 := TIndexedLineSetNode.Create;
IndexedLineSet288.SetCoordIndex([0,1,-1]);
Coordinate289 := TCoordinateNode.Create;
Coordinate289.SetPoint([Vector3(-0.1,0.4913,0),Vector3(-0.1,0.0712,0)]);
{ .SetCoord }
IndexedLineSet288.Coord := Coordinate289;
{ .SetGeometry }
Shape286.Geometry := IndexedLineSet288;
{ .AddChildren }
HAnimSegment283.AddChildren([Shape286]);
Transform290 := TTransformNode.Create;
Transform290.Translation := Vector3(-0.115,0.466,0.06);
Shape291 := TShapeNode.Create;
Shape291 := Shape69;
{ .AddChild }
Transform290.AddChildren([Shape291]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform290]);
Transform292 := TTransformNode.Create;
Transform292.Translation := Vector3(-0.115,0.466,-0.055);
Shape293 := TShapeNode.Create;
Shape293 := Shape69;
{ .AddChild }
Transform292.AddChildren([Shape293]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform292]);
Transform294 := TTransformNode.Create;
Transform294.Translation := Vector3(-0.17,0.466,0);
Shape295 := TShapeNode.Create;
Shape295 := Shape69;
{ .AddChild }
Transform294.AddChildren([Shape295]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform294]);
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(-0.05,0.466,0);
Shape297 := TShapeNode.Create;
Shape297 := Shape69;
{ .AddChild }
Transform296.AddChildren([Shape297]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform296]);
Transform298 := TTransformNode.Create;
Transform298.Translation := Vector3(-0.17,0.3,0);
Shape299 := TShapeNode.Create;
Shape299 := Shape69;
{ .AddChild }
Transform298.AddChildren([Shape299]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform298]);
Transform300 := TTransformNode.Create;
Transform300.Translation := Vector3(-0.06,0.3,0);
Shape301 := TShapeNode.Create;
Shape301 := Shape69;
{ .AddChild }
Transform300.AddChildren([Shape301]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform300]);
Transform302 := TTransformNode.Create;
Transform302.Translation := Vector3(-0.1,0.3,-0.05);
Shape303 := TShapeNode.Create;
Shape303 := Shape69;
{ .AddChild }
Transform302.AddChildren([Shape303]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform302]);
Transform304 := TTransformNode.Create;
Transform304.Translation := Vector3(-0.1,0.3,0.05);
Shape305 := TShapeNode.Create;
Shape305 := Shape69;
{ .AddChild }
Transform304.AddChildren([Shape305]);
{ .AddChildren }
HAnimSegment283.AddChildren([Transform304]);
HAnimSite306 := THAnimSiteNode.Create;
HAnimSite306.NameField := 'r_lateral_malleolus_pt';
HAnimSite306.Translation := Vector3(-0.15,0.07,0);
Shape307 := TShapeNode.Create;
Shape307 := Shape57;
{ .AddChildren }
HAnimSite306.AddChildren([Shape307]);
{ .AddChildren }
HAnimSegment283.AddChildren([HAnimSite306]);
HAnimSite308 := THAnimSiteNode.Create;
HAnimSite308.NameField := 'r_medial_malleolus_pt';
HAnimSite308.Translation := Vector3(-0.085,0.086,0.0125);
Shape309 := TShapeNode.Create;
Shape309 := Shape57;
{ .AddChildren }
HAnimSite308.AddChildren([Shape309]);
{ .AddChildren }
HAnimSegment283.AddChildren([HAnimSite308]);
{ .AddChildren }
HAnimJoint282.AddChildren([HAnimSegment283]);
HAnimJoint310 := THAnimJointNode.Create;
HAnimJoint310.NameField := 'r_talocrural';
HAnimJoint310.Center := Vector3(-0.115,0.069,0);
HAnimJoint310.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint310.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment311 := THAnimSegmentNode.Create;
HAnimSegment311.NameField := 'r_talus';
Transform312 := TTransformNode.Create;
Transform312.Translation := Vector3(-0.1,0.0712,0);
Shape313 := TShapeNode.Create;
Shape313 := Shape50;
{ .AddChild }
Transform312.AddChildren([Shape313]);
{ .AddChildren }
HAnimSegment311.AddChildren([Transform312]);
Shape314 := TShapeNode.Create;
Appearance315 := TAppearanceNode.Create;
Appearance315 := Appearance64;
{ .SetAppearance }
Shape314.Appearance := Appearance315;
IndexedLineSet316 := TIndexedLineSetNode.Create;
IndexedLineSet316.SetCoordIndex([0,1,-1]);
Coordinate317 := TCoordinateNode.Create;
Coordinate317.SetPoint([Vector3(-0.1,0.0712,0),Vector3(-0.1,0.015,-0.01)]);
{ .SetCoord }
IndexedLineSet316.Coord := Coordinate317;
{ .SetGeometry }
Shape314.Geometry := IndexedLineSet316;
{ .AddChildren }
HAnimSegment311.AddChildren([Shape314]);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(-0.15,0.07,0);
Shape319 := TShapeNode.Create;
Shape319 := Shape69;
{ .AddChild }
Transform318.AddChildren([Shape319]);
{ .AddChildren }
HAnimSegment311.AddChildren([Transform318]);
Transform320 := TTransformNode.Create;
Transform320.Translation := Vector3(-0.085,0.086,0.0125);
Shape321 := TShapeNode.Create;
Shape321 := Shape69;
{ .AddChild }
Transform320.AddChildren([Shape321]);
{ .AddChildren }
HAnimSegment311.AddChildren([Transform320]);
Transform322 := TTransformNode.Create;
Transform322.Translation := Vector3(-0.115,0.069,-0.045);
Shape323 := TShapeNode.Create;
Shape323 := Shape69;
{ .AddChild }
Transform322.AddChildren([Shape323]);
{ .AddChildren }
HAnimSegment311.AddChildren([Transform322]);
Transform324 := TTransformNode.Create;
Transform324.Translation := Vector3(-0.117,0.0975,0.0615);
Shape325 := TShapeNode.Create;
Shape325 := Shape69;
{ .AddChild }
Transform324.AddChildren([Shape325]);
{ .AddChildren }
HAnimSegment311.AddChildren([Transform324]);
HAnimSite326 := THAnimSiteNode.Create;
HAnimSite326.NameField := 'r_sphyrion_pt';
HAnimSite326.Translation := Vector3(-0.09,0.056,0.0125);
Shape327 := TShapeNode.Create;
Shape327 := Shape57;
{ .AddChildren }
HAnimSite326.AddChildren([Shape327]);
{ .AddChildren }
HAnimSegment311.AddChildren([HAnimSite326]);
HAnimSite328 := THAnimSiteNode.Create;
HAnimSite328.NameField := 'r_calcaneus_posterior_pt';
HAnimSite328.Translation := Vector3(-0.115,0.04,-0.055);
Shape329 := TShapeNode.Create;
Shape329 := Shape57;
{ .AddChildren }
HAnimSite328.AddChildren([Shape329]);
{ .AddChildren }
HAnimSegment311.AddChildren([HAnimSite328]);
{ .AddChildren }
HAnimJoint310.AddChildren([HAnimSegment311]);
HAnimJoint330 := THAnimJointNode.Create;
HAnimJoint330.NameField := 'r_tarsometatarsal_2';
HAnimJoint330.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint330.SetSkinCoordIndex([374,375,376]);
HAnimJoint330.SetSkinCoordWeight([1,1,1]);
HAnimSegment331 := THAnimSegmentNode.Create;
HAnimSegment331.NameField := 'r_metatarsal_2';
Transform332 := TTransformNode.Create;
Transform332.Translation := Vector3(-0.1,0.015,-0.01);
Shape333 := TShapeNode.Create;
Shape333 := Shape50;
{ .AddChild }
Transform332.AddChildren([Shape333]);
{ .AddChildren }
HAnimSegment331.AddChildren([Transform332]);
Shape334 := TShapeNode.Create;
Appearance335 := TAppearanceNode.Create;
Appearance335 := Appearance64;
{ .SetAppearance }
Shape334.Appearance := Appearance335;
IndexedLineSet336 := TIndexedLineSetNode.Create;
IndexedLineSet336.SetCoordIndex([0,1,-1]);
Coordinate337 := TCoordinateNode.Create;
Coordinate337.SetPoint([Vector3(-0.1,0.015,-0.01),Vector3(-0.1,0.02,0.07)]);
{ .SetCoord }
IndexedLineSet336.Coord := Coordinate337;
{ .SetGeometry }
Shape334.Geometry := IndexedLineSet336;
{ .AddChildren }
HAnimSegment331.AddChildren([Shape334]);
Transform338 := TTransformNode.Create;
Transform338.Translation := Vector3(-0.1375,0.006,-0.03);
Shape339 := TShapeNode.Create;
Shape339 := Shape69;
{ .AddChild }
Transform338.AddChildren([Shape339]);
{ .AddChildren }
HAnimSegment331.AddChildren([Transform338]);
Transform340 := TTransformNode.Create;
Transform340.Translation := Vector3(-0.095,0.006,-0.03);
Shape341 := TShapeNode.Create;
Shape341 := Shape69;
{ .AddChild }
Transform340.AddChildren([Shape341]);
{ .AddChildren }
HAnimSegment331.AddChildren([Transform340]);
Transform342 := TTransformNode.Create;
Transform342.Translation := Vector3(-0.095,0.006,-0.03);
Shape343 := TShapeNode.Create;
Shape343 := Shape69;
{ .AddChild }
Transform342.AddChildren([Shape343]);
{ .AddChildren }
HAnimSegment331.AddChildren([Transform342]);
{ .AddChildren }
HAnimJoint330.AddChildren([HAnimSegment331]);
HAnimJoint344 := THAnimJointNode.Create;
HAnimJoint344.NameField := 'r_metatarsophalangeal_2';
HAnimJoint344.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint344.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint344.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment345 := THAnimSegmentNode.Create;
HAnimSegment345.NameField := 'r_tarsal_proximal_phalanx_2';
Transform346 := TTransformNode.Create;
Transform346.Translation := Vector3(-0.1,0.02,0.07);
Shape347 := TShapeNode.Create;
Shape347 := Shape50;
{ .AddChild }
Transform346.AddChildren([Shape347]);
{ .AddChildren }
HAnimSegment345.AddChildren([Transform346]);
Shape348 := TShapeNode.Create;
Appearance349 := TAppearanceNode.Create;
Appearance349 := Appearance64;
{ .SetAppearance }
Shape348.Appearance := Appearance349;
IndexedLineSet350 := TIndexedLineSetNode.Create;
IndexedLineSet350.SetCoordIndex([0,1,-1]);
Coordinate351 := TCoordinateNode.Create;
Coordinate351.SetPoint([Vector3(-0.1,0.02,0.07),Vector3(-0.1,0.01,0.14)]);
{ .SetCoord }
IndexedLineSet350.Coord := Coordinate351;
{ .SetGeometry }
Shape348.Geometry := IndexedLineSet350;
{ .AddChildren }
HAnimSegment345.AddChildren([Shape348]);
Transform352 := TTransformNode.Create;
Transform352.Translation := Vector3(-0.115,0.06,0.1);
Shape353 := TShapeNode.Create;
Shape353 := Shape69;
{ .AddChild }
Transform352.AddChildren([Shape353]);
{ .AddChildren }
HAnimSegment345.AddChildren([Transform352]);
Transform354 := TTransformNode.Create;
Transform354.Translation := Vector3(-0.115,0,0.07);
Shape355 := TShapeNode.Create;
Shape355 := Shape69;
{ .AddChild }
Transform354.AddChildren([Shape355]);
{ .AddChildren }
HAnimSegment345.AddChildren([Transform354]);
Transform356 := TTransformNode.Create;
Transform356.Translation := Vector3(-0.165,0,0.07);
Shape357 := TShapeNode.Create;
Shape357 := Shape69;
{ .AddChild }
Transform356.AddChildren([Shape357]);
{ .AddChildren }
HAnimSegment345.AddChildren([Transform356]);
Transform358 := TTransformNode.Create;
Transform358.Translation := Vector3(-0.165,0,0.07);
Shape359 := TShapeNode.Create;
Shape359 := Shape69;
{ .AddChild }
Transform358.AddChildren([Shape359]);
{ .AddChildren }
HAnimSegment345.AddChildren([Transform358]);
HAnimSite360 := THAnimSiteNode.Create;
HAnimSite360.NameField := 'r_metatarsal_phalanx_1_pt';
HAnimSite360.Translation := Vector3(-0.115,0.02,0.122);
Shape361 := TShapeNode.Create;
Shape361 := Shape57;
{ .AddChildren }
HAnimSite360.AddChildren([Shape361]);
{ .AddChildren }
HAnimSegment345.AddChildren([HAnimSite360]);
{ .AddChildren }
HAnimJoint344.AddChildren([HAnimSegment345]);
HAnimJoint362 := THAnimJointNode.Create;
HAnimJoint362.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint362.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint362.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint362.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment363 := THAnimSegmentNode.Create;
HAnimSegment363.NameField := 'r_tarsal_distal_phalanx_2';
Transform364 := TTransformNode.Create;
Transform364.Translation := Vector3(-0.1086,0.01,0.14);
Shape365 := TShapeNode.Create;
Shape365 := Shape50;
{ .AddChild }
Transform364.AddChildren([Shape365]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform364]);
Shape366 := TShapeNode.Create;
Appearance367 := TAppearanceNode.Create;
Appearance367 := Appearance64;
{ .SetAppearance }
Shape366.Appearance := Appearance367;
IndexedLineSet368 := TIndexedLineSetNode.Create;
IndexedLineSet368.SetCoordIndex([0,1,-1]);
Coordinate369 := TCoordinateNode.Create;
Coordinate369.SetPoint([Vector3(-0.1,0.01,0.14),Vector3(-0.1043,0.0016,0.2)]);
{ .SetCoord }
IndexedLineSet368.Coord := Coordinate369;
{ .SetGeometry }
Shape366.Geometry := IndexedLineSet368;
{ .AddChildren }
HAnimSegment363.AddChildren([Shape366]);
Transform370 := TTransformNode.Create;
Transform370.Translation := Vector3(-0.115,0.04,0.13);
Shape371 := TShapeNode.Create;
Shape371 := Shape69;
{ .AddChild }
Transform370.AddChildren([Shape371]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform370]);
Transform372 := TTransformNode.Create;
Transform372.Translation := Vector3(-0.125,0,0.12);
Shape373 := TShapeNode.Create;
Shape373 := Shape69;
{ .AddChild }
Transform372.AddChildren([Shape373]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform372]);
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(-0.165,0,0.12);
Shape375 := TShapeNode.Create;
Shape375 := Shape69;
{ .AddChild }
Transform374.AddChildren([Shape375]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform374]);
Transform376 := TTransformNode.Create;
Transform376.Translation := Vector3(-0.087,0,0.122);
Shape377 := TShapeNode.Create;
Shape377 := Shape69;
{ .AddChild }
Transform376.AddChildren([Shape377]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform376]);
Transform378 := TTransformNode.Create;
Transform378.Translation := Vector3(-0.09,0.012,0.188);
Shape379 := TShapeNode.Create;
Shape379 := Shape69;
{ .AddChild }
Transform378.AddChildren([Shape379]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform378]);
Transform380 := TTransformNode.Create;
Transform380.Translation := Vector3(-0.11,0.011,0.19);
Shape381 := TShapeNode.Create;
Shape381 := Shape69;
{ .AddChild }
Transform380.AddChildren([Shape381]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform380]);
Transform382 := TTransformNode.Create;
Transform382.Translation := Vector3(-0.128,0.011,0.185);
Shape383 := TShapeNode.Create;
Shape383 := Shape69;
{ .AddChild }
Transform382.AddChildren([Shape383]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform382]);
Transform384 := TTransformNode.Create;
Transform384.Translation := Vector3(-0.142,0.011,0.178);
Shape385 := TShapeNode.Create;
Shape385 := Shape69;
{ .AddChild }
Transform384.AddChildren([Shape385]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform384]);
Transform386 := TTransformNode.Create;
Transform386.Translation := Vector3(-0.154,0.01,0.168);
Shape387 := TShapeNode.Create;
Shape387 := Shape69;
{ .AddChild }
Transform386.AddChildren([Shape387]);
{ .AddChildren }
HAnimSegment363.AddChildren([Transform386]);
HAnimSite388 := THAnimSiteNode.Create;
HAnimSite388.NameField := 'r_metatarsal_phalanx_5_pt';
HAnimSite388.Translation := Vector3(-0.165,0.01,0.12);
Shape389 := TShapeNode.Create;
Shape389 := Shape57;
{ .AddChildren }
HAnimSite388.AddChildren([Shape389]);
{ .AddChildren }
HAnimSegment363.AddChildren([HAnimSite388]);
HAnimSite390 := THAnimSiteNode.Create;
HAnimSite390.NameField := 'r_tarsal_distal_phalanx_2_pt';
HAnimSite390.Translation := Vector3(-0.11,0.011,0.19);
Shape391 := TShapeNode.Create;
Shape391 := Shape57;
{ .AddChildren }
HAnimSite390.AddChildren([Shape391]);
{ .AddChildren }
HAnimSegment363.AddChildren([HAnimSite390]);
{ .AddChildren }
HAnimJoint362.AddChildren([HAnimSegment363]);
{ .AddChildren }
HAnimJoint344.AddChildren([HAnimJoint362]);
{ .AddChildren }
HAnimJoint330.AddChildren([HAnimJoint344]);
{ .AddChildren }
HAnimJoint310.AddChildren([HAnimJoint330]);
{ .AddChildren }
HAnimJoint282.AddChildren([HAnimJoint310]);
{ .AddChildren }
HAnimJoint256.AddChildren([HAnimJoint282]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint256]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimJoint90]);
HAnimJoint392 := THAnimJointNode.Create;
HAnimJoint392.NameField := 'vl5';
HAnimJoint392.Center := Vector3(0,1.045,-0.095);
HAnimJoint392.SetSkinCoordIndex([28,76]);
HAnimJoint392.SetSkinCoordWeight([1,1]);
HAnimSegment393 := THAnimSegmentNode.Create;
HAnimSegment393.NameField := 'toPelvis';
Shape394 := TShapeNode.Create;
Appearance395 := TAppearanceNode.Create;
Appearance395 := Appearance64;
{ .SetAppearance }
Shape394.Appearance := Appearance395;
IndexedLineSet396 := TIndexedLineSetNode.Create;
IndexedLineSet396.SetCoordIndex([0,1,-1]);
Coordinate397 := TCoordinateNode.Create;
Coordinate397.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
IndexedLineSet396.Coord := Coordinate397;
{ .SetGeometry }
Shape394.Geometry := IndexedLineSet396;
{ .AddChildren }
HAnimSegment393.AddChildren([Shape394]);
{ .AddChildren }
HAnimJoint392.AddChildren([HAnimSegment393]);
HAnimSegment398 := THAnimSegmentNode.Create;
HAnimSegment398.NameField := 'l5';
Shape399 := TShapeNode.Create;
Appearance400 := TAppearanceNode.Create;
Appearance400 := Appearance64;
{ .SetAppearance }
Shape399.Appearance := Appearance400;
IndexedLineSet401 := TIndexedLineSetNode.Create;
IndexedLineSet401.SetCoordIndex([0,1,-1]);
Coordinate402 := TCoordinateNode.Create;
Coordinate402.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,1.068,-0.085)]);
{ .SetCoord }
IndexedLineSet401.Coord := Coordinate402;
{ .SetGeometry }
Shape399.Geometry := IndexedLineSet401;
{ .AddChildren }
HAnimSegment398.AddChildren([Shape399]);
HAnimSite403 := THAnimSiteNode.Create;
HAnimSite403.NameField := 'waist_preferred_posterior_pt';
HAnimSite403.Translation := Vector3(0,1.0915,-0.1091);
Shape404 := TShapeNode.Create;
Shape404 := Shape57;
{ .AddChildren }
HAnimSite403.AddChildren([Shape404]);
{ .AddChildren }
HAnimSegment398.AddChildren([HAnimSite403]);
HAnimSite405 := THAnimSiteNode.Create;
HAnimSite405.NameField := 'navel_pt';
HAnimSite405.Translation := Vector3(0,1.0723,0.09);
Shape406 := TShapeNode.Create;
Shape406 := Shape57;
{ .AddChildren }
HAnimSite405.AddChildren([Shape406]);
{ .AddChildren }
HAnimSegment398.AddChildren([HAnimSite405]);
{ .AddChildren }
HAnimJoint392.AddChildren([HAnimSegment398]);
HAnimJoint407 := THAnimJointNode.Create;
HAnimJoint407.NameField := 'vl4';
HAnimJoint407.Center := Vector3(0,1.068,-0.085);
HAnimSegment408 := THAnimSegmentNode.Create;
HAnimSegment408.NameField := 'l4';
Shape409 := TShapeNode.Create;
Appearance410 := TAppearanceNode.Create;
Appearance410 := Appearance64;
{ .SetAppearance }
Shape409.Appearance := Appearance410;
IndexedLineSet411 := TIndexedLineSetNode.Create;
IndexedLineSet411.SetCoordIndex([0,1,-1]);
Coordinate412 := TCoordinateNode.Create;
Coordinate412.SetPoint([Vector3(0,1.068,-0.085),Vector3(0,1.092,-0.0725)]);
{ .SetCoord }
IndexedLineSet411.Coord := Coordinate412;
{ .SetGeometry }
Shape409.Geometry := IndexedLineSet411;
{ .AddChildren }
HAnimSegment408.AddChildren([Shape409]);
Transform413 := TTransformNode.Create;
Transform413.Translation := Vector3(0,1.068,-0.085);
Shape414 := TShapeNode.Create;
Shape414 := Shape50;
{ .AddChild }
Transform413.AddChildren([Shape414]);
{ .AddChildren }
HAnimSegment408.AddChildren([Transform413]);
{ .AddChildren }
HAnimJoint407.AddChildren([HAnimSegment408]);
HAnimJoint415 := THAnimJointNode.Create;
HAnimJoint415.NameField := 'vl3';
HAnimJoint415.Center := Vector3(0,1.092,-0.0725);
HAnimSegment416 := THAnimSegmentNode.Create;
HAnimSegment416.NameField := 'l3';
Shape417 := TShapeNode.Create;
Appearance418 := TAppearanceNode.Create;
Appearance418 := Appearance64;
{ .SetAppearance }
Shape417.Appearance := Appearance418;
IndexedLineSet419 := TIndexedLineSetNode.Create;
IndexedLineSet419.SetCoordIndex([0,1,-1]);
Coordinate420 := TCoordinateNode.Create;
Coordinate420.SetPoint([Vector3(0,1.092,-0.0725),Vector3(0,1.12,-0.065)]);
{ .SetCoord }
IndexedLineSet419.Coord := Coordinate420;
{ .SetGeometry }
Shape417.Geometry := IndexedLineSet419;
{ .AddChildren }
HAnimSegment416.AddChildren([Shape417]);
Transform421 := TTransformNode.Create;
Transform421.Translation := Vector3(0,1.092,-0.0725);
Shape422 := TShapeNode.Create;
Shape422 := Shape50;
{ .AddChild }
Transform421.AddChildren([Shape422]);
{ .AddChildren }
HAnimSegment416.AddChildren([Transform421]);
{ .AddChildren }
HAnimJoint415.AddChildren([HAnimSegment416]);
HAnimJoint423 := THAnimJointNode.Create;
HAnimJoint423.NameField := 'vl2';
HAnimJoint423.Center := Vector3(0,1.12,-0.065);
HAnimJoint423.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint423.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment424 := THAnimSegmentNode.Create;
HAnimSegment424.NameField := 'l2';
Shape425 := TShapeNode.Create;
Appearance426 := TAppearanceNode.Create;
Appearance426 := Appearance64;
{ .SetAppearance }
Shape425.Appearance := Appearance426;
IndexedLineSet427 := TIndexedLineSetNode.Create;
IndexedLineSet427.SetCoordIndex([0,1,-1]);
Coordinate428 := TCoordinateNode.Create;
Coordinate428.SetPoint([Vector3(0,1.12,-0.065),Vector3(0,1.1459,-0.0625)]);
{ .SetCoord }
IndexedLineSet427.Coord := Coordinate428;
{ .SetGeometry }
Shape425.Geometry := IndexedLineSet427;
{ .AddChildren }
HAnimSegment424.AddChildren([Shape425]);
Transform429 := TTransformNode.Create;
Transform429.Translation := Vector3(0,1.12,-0.065);
Shape430 := TShapeNode.Create;
Shape430 := Shape50;
{ .AddChild }
Transform429.AddChildren([Shape430]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform429]);
Transform431 := TTransformNode.Create;
Transform431.Translation := Vector3(-0.087,1.19,-0.09);
Shape432 := TShapeNode.Create;
Shape432 := Shape69;
{ .AddChild }
Transform431.AddChildren([Shape432]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform431]);
Transform433 := TTransformNode.Create;
Transform433.Translation := Vector3(0.087,1.19,-0.09);
Shape434 := TShapeNode.Create;
Shape434 := Shape69;
{ .AddChild }
Transform433.AddChildren([Shape434]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform433]);
Transform435 := TTransformNode.Create;
Transform435.Translation := Vector3(0.172,1.32,-0.03);
Shape436 := TShapeNode.Create;
Shape436 := Shape69;
{ .AddChild }
Transform435.AddChildren([Shape436]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform435]);
Transform437 := TTransformNode.Create;
Transform437.Translation := Vector3(-0.172,1.32,-0.03);
Shape438 := TShapeNode.Create;
Shape438 := Shape69;
{ .AddChild }
Transform437.AddChildren([Shape438]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform437]);
Transform439 := TTransformNode.Create;
Transform439.Translation := Vector3(0.15,1.23,-0.015);
Shape440 := TShapeNode.Create;
Shape440 := Shape69;
{ .AddChild }
Transform439.AddChildren([Shape440]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform439]);
Transform441 := TTransformNode.Create;
Transform441.Translation := Vector3(-0.15,1.23,-0.015);
Shape442 := TShapeNode.Create;
Shape442 := Shape69;
{ .AddChild }
Transform441.AddChildren([Shape442]);
{ .AddChildren }
HAnimSegment424.AddChildren([Transform441]);
HAnimSite443 := THAnimSiteNode.Create;
HAnimSite443.NameField := 'r_rib10_pt';
HAnimSite443.Translation := Vector3(-0.087,1.19,0.09);
Shape444 := TShapeNode.Create;
Shape444 := Shape57;
{ .AddChildren }
HAnimSite443.AddChildren([Shape444]);
{ .AddChildren }
HAnimSegment424.AddChildren([HAnimSite443]);
HAnimSite445 := THAnimSiteNode.Create;
HAnimSite445.NameField := 'l_rib10_pt';
HAnimSite445.Translation := Vector3(0.087,1.19,0.09);
Shape446 := TShapeNode.Create;
Shape446 := Shape57;
{ .AddChildren }
HAnimSite445.AddChildren([Shape446]);
{ .AddChildren }
HAnimSegment424.AddChildren([HAnimSite445]);
HAnimSite447 := THAnimSiteNode.Create;
HAnimSite447.NameField := 'rib10_midspine_pt';
HAnimSite447.Translation := Vector3(0,1.1908,-0.1113);
Shape448 := TShapeNode.Create;
Shape448 := Shape57;
{ .AddChildren }
HAnimSite447.AddChildren([Shape448]);
{ .AddChildren }
HAnimSegment424.AddChildren([HAnimSite447]);
{ .AddChildren }
HAnimJoint423.AddChildren([HAnimSegment424]);
HAnimJoint449 := THAnimJointNode.Create;
HAnimJoint449.NameField := 'vl1';
HAnimJoint449.Center := Vector3(0,1.1459,-0.0625);
HAnimSegment450 := THAnimSegmentNode.Create;
HAnimSegment450.NameField := 'l1';
Shape451 := TShapeNode.Create;
Appearance452 := TAppearanceNode.Create;
Appearance452 := Appearance64;
{ .SetAppearance }
Shape451.Appearance := Appearance452;
IndexedLineSet453 := TIndexedLineSetNode.Create;
IndexedLineSet453.SetCoordIndex([0,1,-1]);
Coordinate454 := TCoordinateNode.Create;
Coordinate454.SetPoint([Vector3(0,1.1459,-0.0625),Vector3(0,1.179,-0.068)]);
{ .SetCoord }
IndexedLineSet453.Coord := Coordinate454;
{ .SetGeometry }
Shape451.Geometry := IndexedLineSet453;
{ .AddChildren }
HAnimSegment450.AddChildren([Shape451]);
Transform455 := TTransformNode.Create;
Transform455.Translation := Vector3(0,1.1459,-0.0625);
Shape456 := TShapeNode.Create;
Shape456 := Shape50;
{ .AddChild }
Transform455.AddChildren([Shape456]);
{ .AddChildren }
HAnimSegment450.AddChildren([Transform455]);
{ .AddChildren }
HAnimJoint449.AddChildren([HAnimSegment450]);
HAnimJoint457 := THAnimJointNode.Create;
HAnimJoint457.NameField := 'vt12';
HAnimJoint457.Center := Vector3(0,1.179,-0.068);
HAnimSegment458 := THAnimSegmentNode.Create;
HAnimSegment458.NameField := 't12';
Shape459 := TShapeNode.Create;
Appearance460 := TAppearanceNode.Create;
Appearance460 := Appearance64;
{ .SetAppearance }
Shape459.Appearance := Appearance460;
IndexedLineSet461 := TIndexedLineSetNode.Create;
IndexedLineSet461.SetCoordIndex([0,1,-1]);
Coordinate462 := TCoordinateNode.Create;
Coordinate462.SetPoint([Vector3(0,1.179,-0.068),Vector3(0,1.242,-0.09)]);
{ .SetCoord }
IndexedLineSet461.Coord := Coordinate462;
{ .SetGeometry }
Shape459.Geometry := IndexedLineSet461;
{ .AddChildren }
HAnimSegment458.AddChildren([Shape459]);
Transform463 := TTransformNode.Create;
Transform463.Translation := Vector3(0,1.179,-0.068);
Shape464 := TShapeNode.Create;
Shape464 := Shape50;
{ .AddChild }
Transform463.AddChildren([Shape464]);
{ .AddChildren }
HAnimSegment458.AddChildren([Transform463]);
{ .AddChildren }
HAnimJoint457.AddChildren([HAnimSegment458]);
HAnimJoint465 := THAnimJointNode.Create;
HAnimJoint465.NameField := 'vt11';
HAnimJoint465.Center := Vector3(0,1.2679,-0.081);
HAnimSegment466 := THAnimSegmentNode.Create;
HAnimSegment466.NameField := 't11';
Shape467 := TShapeNode.Create;
Appearance468 := TAppearanceNode.Create;
Appearance468 := Appearance64;
{ .SetAppearance }
Shape467.Appearance := Appearance468;
IndexedLineSet469 := TIndexedLineSetNode.Create;
IndexedLineSet469.SetCoordIndex([0,1,-1]);
Coordinate470 := TCoordinateNode.Create;
Coordinate470.SetPoint([Vector3(0,1.2145,-0.0755),Vector3(0,1.242,-0.09)]);
{ .SetCoord }
IndexedLineSet469.Coord := Coordinate470;
{ .SetGeometry }
Shape467.Geometry := IndexedLineSet469;
{ .AddChildren }
HAnimSegment466.AddChildren([Shape467]);
Transform471 := TTransformNode.Create;
Transform471.Translation := Vector3(0,1.2145,-0.0755);
Shape472 := TShapeNode.Create;
Shape472 := Shape50;
{ .AddChild }
Transform471.AddChildren([Shape472]);
{ .AddChildren }
HAnimSegment466.AddChildren([Transform471]);
{ .AddChildren }
HAnimJoint465.AddChildren([HAnimSegment466]);
HAnimJoint473 := THAnimJointNode.Create;
HAnimJoint473.NameField := 'vt10';
HAnimJoint473.Center := Vector3(0,1.242,-0.09);
HAnimJoint473.SetSkinCoordIndex([15]);
HAnimJoint473.SetSkinCoordWeight([1]);
HAnimSegment474 := THAnimSegmentNode.Create;
HAnimSegment474.NameField := 't10';
Shape475 := TShapeNode.Create;
Appearance476 := TAppearanceNode.Create;
Appearance476 := Appearance64;
{ .SetAppearance }
Shape475.Appearance := Appearance476;
IndexedLineSet477 := TIndexedLineSetNode.Create;
IndexedLineSet477.SetCoordIndex([0,1,-1]);
Coordinate478 := TCoordinateNode.Create;
Coordinate478.SetPoint([Vector3(0,1.242,-0.09),Vector3(0,1.268,-0.1)]);
{ .SetCoord }
IndexedLineSet477.Coord := Coordinate478;
{ .SetGeometry }
Shape475.Geometry := IndexedLineSet477;
{ .AddChildren }
HAnimSegment474.AddChildren([Shape475]);
Transform479 := TTransformNode.Create;
Transform479.Translation := Vector3(0,1.242,-0.09);
Shape480 := TShapeNode.Create;
Shape480 := Shape50;
{ .AddChild }
Transform479.AddChildren([Shape480]);
{ .AddChildren }
HAnimSegment474.AddChildren([Transform479]);
HAnimSite481 := THAnimSiteNode.Create;
HAnimSite481.NameField := 'substernale_pt';
HAnimSite481.Translation := Vector3(0,1.25,0.113);
Shape482 := TShapeNode.Create;
Shape482 := Shape57;
{ .AddChildren }
HAnimSite481.AddChildren([Shape482]);
{ .AddChildren }
HAnimSegment474.AddChildren([HAnimSite481]);
{ .AddChildren }
HAnimJoint473.AddChildren([HAnimSegment474]);
HAnimJoint483 := THAnimJointNode.Create;
HAnimJoint483.NameField := 'vt9';
HAnimJoint483.Center := Vector3(0,1.268,-0.1);
HAnimJoint483.SetSkinCoordIndex([13,14]);
HAnimJoint483.SetSkinCoordWeight([1,1]);
HAnimSegment484 := THAnimSegmentNode.Create;
HAnimSegment484.NameField := 't9';
Shape485 := TShapeNode.Create;
Appearance486 := TAppearanceNode.Create;
Appearance486 := Appearance64;
{ .SetAppearance }
Shape485.Appearance := Appearance486;
IndexedLineSet487 := TIndexedLineSetNode.Create;
IndexedLineSet487.SetCoordIndex([0,1,-1]);
Coordinate488 := TCoordinateNode.Create;
Coordinate488.SetPoint([Vector3(0,1.268,-0.1),Vector3(0,1.294,-0.11)]);
{ .SetCoord }
IndexedLineSet487.Coord := Coordinate488;
{ .SetGeometry }
Shape485.Geometry := IndexedLineSet487;
{ .AddChildren }
HAnimSegment484.AddChildren([Shape485]);
Transform489 := TTransformNode.Create;
Transform489.Translation := Vector3(0,1.268,-0.1);
Shape490 := TShapeNode.Create;
Shape490 := Shape50;
{ .AddChild }
Transform489.AddChildren([Shape490]);
{ .AddChildren }
HAnimSegment484.AddChildren([Transform489]);
HAnimSite491 := THAnimSiteNode.Create;
HAnimSite491.NameField := 'r_thelion_pt';
HAnimSite491.Translation := Vector3(-0.1135,1.318,0.095);
Shape492 := TShapeNode.Create;
Shape492 := Shape57;
{ .AddChildren }
HAnimSite491.AddChildren([Shape492]);
{ .AddChildren }
HAnimSegment484.AddChildren([HAnimSite491]);
HAnimSite493 := THAnimSiteNode.Create;
HAnimSite493.NameField := 'l_thelion_pt';
HAnimSite493.Translation := Vector3(0.1135,1.318,0.095);
Shape494 := TShapeNode.Create;
Shape494 := Shape57;
{ .AddChildren }
HAnimSite493.AddChildren([Shape494]);
{ .AddChildren }
HAnimSegment484.AddChildren([HAnimSite493]);
{ .AddChildren }
HAnimJoint483.AddChildren([HAnimSegment484]);
HAnimJoint495 := THAnimJointNode.Create;
HAnimJoint495.NameField := 'vt8';
HAnimJoint495.Center := Vector3(0,1.294,-0.11);
HAnimSegment496 := THAnimSegmentNode.Create;
HAnimSegment496.NameField := 't8';
Shape497 := TShapeNode.Create;
Appearance498 := TAppearanceNode.Create;
Appearance498 := Appearance64;
{ .SetAppearance }
Shape497.Appearance := Appearance498;
IndexedLineSet499 := TIndexedLineSetNode.Create;
IndexedLineSet499.SetCoordIndex([0,1,-1]);
Coordinate500 := TCoordinateNode.Create;
Coordinate500.SetPoint([Vector3(0,1.294,-0.11),Vector3(0,1.352,-0.12)]);
{ .SetCoord }
IndexedLineSet499.Coord := Coordinate500;
{ .SetGeometry }
Shape497.Geometry := IndexedLineSet499;
{ .AddChildren }
HAnimSegment496.AddChildren([Shape497]);
Transform501 := TTransformNode.Create;
Transform501.Translation := Vector3(0,1.294,-0.11);
Shape502 := TShapeNode.Create;
Shape502 := Shape50;
{ .AddChild }
Transform501.AddChildren([Shape502]);
{ .AddChildren }
HAnimSegment496.AddChildren([Transform501]);
{ .AddChildren }
HAnimJoint495.AddChildren([HAnimSegment496]);
HAnimJoint503 := THAnimJointNode.Create;
HAnimJoint503.NameField := 'vt7';
HAnimJoint503.Center := Vector3(0,1.323,-0.1155);
HAnimSegment504 := THAnimSegmentNode.Create;
HAnimSegment504.NameField := 't7';
Shape505 := TShapeNode.Create;
Appearance506 := TAppearanceNode.Create;
Appearance506 := Appearance64;
{ .SetAppearance }
Shape505.Appearance := Appearance506;
IndexedLineSet507 := TIndexedLineSetNode.Create;
IndexedLineSet507.SetCoordIndex([0,1,-1]);
Coordinate508 := TCoordinateNode.Create;
Coordinate508.SetPoint([Vector3(0,1.352,-0.12),Vector3(0,1.381,-0.1235)]);
{ .SetCoord }
IndexedLineSet507.Coord := Coordinate508;
{ .SetGeometry }
Shape505.Geometry := IndexedLineSet507;
{ .AddChildren }
HAnimSegment504.AddChildren([Shape505]);
Transform509 := TTransformNode.Create;
Transform509.Translation := Vector3(0,1.323,-0.1155);
Shape510 := TShapeNode.Create;
Shape510 := Shape50;
{ .AddChild }
Transform509.AddChildren([Shape510]);
{ .AddChildren }
HAnimSegment504.AddChildren([Transform509]);
{ .AddChildren }
HAnimJoint503.AddChildren([HAnimSegment504]);
HAnimJoint511 := THAnimJointNode.Create;
HAnimJoint511.NameField := 'vt6';
HAnimJoint511.Center := Vector3(0,1.352,-0.12);
HAnimSegment512 := THAnimSegmentNode.Create;
HAnimSegment512.NameField := 't6';
Shape513 := TShapeNode.Create;
Appearance514 := TAppearanceNode.Create;
Appearance514 := Appearance64;
{ .SetAppearance }
Shape513.Appearance := Appearance514;
IndexedLineSet515 := TIndexedLineSetNode.Create;
IndexedLineSet515.SetCoordIndex([0,1,-1]);
Coordinate516 := TCoordinateNode.Create;
Coordinate516.SetPoint([Vector3(0,1.381,-0.1235),Vector3(0,1.41,-0.1235)]);
{ .SetCoord }
IndexedLineSet515.Coord := Coordinate516;
{ .SetGeometry }
Shape513.Geometry := IndexedLineSet515;
{ .AddChildren }
HAnimSegment512.AddChildren([Shape513]);
Transform517 := TTransformNode.Create;
Transform517.Translation := Vector3(0,1.352,-0.12);
Shape518 := TShapeNode.Create;
Shape518 := Shape50;
{ .AddChild }
Transform517.AddChildren([Shape518]);
{ .AddChildren }
HAnimSegment512.AddChildren([Transform517]);
{ .AddChildren }
HAnimJoint511.AddChildren([HAnimSegment512]);
HAnimJoint519 := THAnimJointNode.Create;
HAnimJoint519.NameField := 'vt5';
HAnimJoint519.Center := Vector3(0,1.381,-0.1235);
HAnimSegment520 := THAnimSegmentNode.Create;
HAnimSegment520.NameField := 't5';
Shape521 := TShapeNode.Create;
Appearance522 := TAppearanceNode.Create;
Appearance522 := Appearance64;
{ .SetAppearance }
Shape521.Appearance := Appearance522;
IndexedLineSet523 := TIndexedLineSetNode.Create;
IndexedLineSet523.SetCoordIndex([0,1,-1]);
Coordinate524 := TCoordinateNode.Create;
Coordinate524.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ .SetCoord }
IndexedLineSet523.Coord := Coordinate524;
{ .SetGeometry }
Shape521.Geometry := IndexedLineSet523;
{ .AddChildren }
HAnimSegment520.AddChildren([Shape521]);
Transform525 := TTransformNode.Create;
Transform525.Translation := Vector3(0,1.381,-0.1235);
Shape526 := TShapeNode.Create;
Shape526 := Shape50;
{ .AddChild }
Transform525.AddChildren([Shape526]);
{ .AddChildren }
HAnimSegment520.AddChildren([Transform525]);
{ .AddChildren }
HAnimJoint519.AddChildren([HAnimSegment520]);
HAnimJoint527 := THAnimJointNode.Create;
HAnimJoint527.NameField := 'vt4';
HAnimJoint527.Center := Vector3(0,1.41,-0.1235);
HAnimJoint527.SetSkinCoordIndex([81]);
HAnimJoint527.SetSkinCoordWeight([1]);
HAnimSegment528 := THAnimSegmentNode.Create;
HAnimSegment528.NameField := 't4';
Shape529 := TShapeNode.Create;
Appearance530 := TAppearanceNode.Create;
Appearance530 := Appearance64;
{ .SetAppearance }
Shape529.Appearance := Appearance530;
IndexedLineSet531 := TIndexedLineSetNode.Create;
IndexedLineSet531.SetCoordIndex([0,1,-1]);
Coordinate532 := TCoordinateNode.Create;
Coordinate532.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ .SetCoord }
IndexedLineSet531.Coord := Coordinate532;
{ .SetGeometry }
Shape529.Geometry := IndexedLineSet531;
{ .AddChildren }
HAnimSegment528.AddChildren([Shape529]);
Transform533 := TTransformNode.Create;
Transform533.Translation := Vector3(0,1.41,-0.1235);
Shape534 := TShapeNode.Create;
Shape534 := Shape50;
{ .AddChild }
Transform533.AddChildren([Shape534]);
{ .AddChildren }
HAnimSegment528.AddChildren([Transform533]);
Transform535 := TTransformNode.Create;
Transform535.Translation := Vector3(0,1.41,-0.145);
Shape536 := TShapeNode.Create;
Shape536 := Shape69;
{ .AddChild }
Transform535.AddChildren([Shape536]);
{ .AddChildren }
HAnimSegment528.AddChildren([Transform535]);
{ .AddChildren }
HAnimJoint527.AddChildren([HAnimSegment528]);
HAnimJoint537 := THAnimJointNode.Create;
HAnimJoint537.NameField := 'vt3';
HAnimJoint537.Center := Vector3(0,1.438,-0.12);
HAnimSegment538 := THAnimSegmentNode.Create;
HAnimSegment538.NameField := 't3';
Shape539 := TShapeNode.Create;
Appearance540 := TAppearanceNode.Create;
Appearance540 := Appearance64;
{ .SetAppearance }
Shape539.Appearance := Appearance540;
IndexedLineSet541 := TIndexedLineSetNode.Create;
IndexedLineSet541.SetCoordIndex([0,1,-1]);
Coordinate542 := TCoordinateNode.Create;
Coordinate542.SetPoint([Vector3(0,1.438,-0.12),Vector3(0,1.468,-0.105)]);
{ .SetCoord }
IndexedLineSet541.Coord := Coordinate542;
{ .SetGeometry }
Shape539.Geometry := IndexedLineSet541;
{ .AddChildren }
HAnimSegment538.AddChildren([Shape539]);
Transform543 := TTransformNode.Create;
Transform543.Translation := Vector3(0,1.438,-0.12);
Shape544 := TShapeNode.Create;
Shape544 := Shape50;
{ .AddChild }
Transform543.AddChildren([Shape544]);
{ .AddChildren }
HAnimSegment538.AddChildren([Transform543]);
{ .AddChildren }
HAnimJoint537.AddChildren([HAnimSegment538]);
HAnimJoint545 := THAnimJointNode.Create;
HAnimJoint545.NameField := 'vt2';
HAnimJoint545.Center := Vector3(0,1.468,-0.105);
HAnimSegment546 := THAnimSegmentNode.Create;
HAnimSegment546.NameField := 't2';
Shape547 := TShapeNode.Create;
Appearance548 := TAppearanceNode.Create;
Appearance548 := Appearance64;
{ .SetAppearance }
Shape547.Appearance := Appearance548;
IndexedLineSet549 := TIndexedLineSetNode.Create;
IndexedLineSet549.SetCoordIndex([0,1,-1]);
Coordinate550 := TCoordinateNode.Create;
Coordinate550.SetPoint([Vector3(0,1.468,-0.105),Vector3(0,1.497,-0.09)]);
{ .SetCoord }
IndexedLineSet549.Coord := Coordinate550;
{ .SetGeometry }
Shape547.Geometry := IndexedLineSet549;
{ .AddChildren }
HAnimSegment546.AddChildren([Shape547]);
Transform551 := TTransformNode.Create;
Transform551.Translation := Vector3(0,1.468,-0.105);
Shape552 := TShapeNode.Create;
Shape552 := Shape50;
{ .AddChild }
Transform551.AddChildren([Shape552]);
{ .AddChildren }
HAnimSegment546.AddChildren([Transform551]);
{ .AddChildren }
HAnimJoint545.AddChildren([HAnimSegment546]);
HAnimJoint553 := THAnimJointNode.Create;
HAnimJoint553.NameField := 'vt1';
HAnimJoint553.Center := Vector3(0,1.497,-0.09);
HAnimJoint553.SetSkinCoordIndex([11,24]);
HAnimJoint553.SetSkinCoordWeight([1,1]);
HAnimSegment554 := THAnimSegmentNode.Create;
HAnimSegment554.NameField := 't1';
Shape555 := TShapeNode.Create;
Appearance556 := TAppearanceNode.Create;
Appearance556 := Appearance64;
{ .SetAppearance }
Shape555.Appearance := Appearance556;
IndexedLineSet557 := TIndexedLineSetNode.Create;
IndexedLineSet557.SetCoordIndex([0,1,-1]);
Coordinate558 := TCoordinateNode.Create;
Coordinate558.SetPoint([Vector3(0,1.497,-0.09),Vector3(0,1.525,-0.072)]);
{ .SetCoord }
IndexedLineSet557.Coord := Coordinate558;
{ .SetGeometry }
Shape555.Geometry := IndexedLineSet557;
{ .AddChildren }
HAnimSegment554.AddChildren([Shape555]);
Transform559 := TTransformNode.Create;
Transform559.Translation := Vector3(0,1.497,-0.09);
Shape560 := TShapeNode.Create;
Shape560 := Shape50;
{ .AddChild }
Transform559.AddChildren([Shape560]);
{ .AddChildren }
HAnimSegment554.AddChildren([Transform559]);
HAnimSite561 := THAnimSiteNode.Create;
HAnimSite561.NameField := 'suprasternale_pt';
HAnimSite561.Translation := Vector3(0,1.44,0.03);
Shape562 := TShapeNode.Create;
Shape562 := Shape57;
{ .AddChildren }
HAnimSite561.AddChildren([Shape562]);
{ .AddChildren }
HAnimSegment554.AddChildren([HAnimSite561]);
HAnimSite563 := THAnimSiteNode.Create;
HAnimSite563.NameField := 'cervicale_pt';
HAnimSite563.Translation := Vector3(0,1.53,-0.084);
Shape564 := TShapeNode.Create;
Shape564 := Shape57;
{ .AddChildren }
HAnimSite563.AddChildren([Shape564]);
{ .AddChildren }
HAnimSegment554.AddChildren([HAnimSite563]);
{ .AddChildren }
HAnimJoint553.AddChildren([HAnimSegment554]);
HAnimJoint565 := THAnimJointNode.Create;
HAnimJoint565.NameField := 'vc7';
HAnimJoint565.Center := Vector3(0,1.525,-0.072);
HAnimJoint565.SetSkinCoordIndex([74,75]);
HAnimJoint565.SetSkinCoordWeight([1,1]);
HAnimSegment566 := THAnimSegmentNode.Create;
HAnimSegment566.NameField := 'c7';
Shape567 := TShapeNode.Create;
Appearance568 := TAppearanceNode.Create;
Appearance568 := Appearance64;
{ .SetAppearance }
Shape567.Appearance := Appearance568;
IndexedLineSet569 := TIndexedLineSetNode.Create;
IndexedLineSet569.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate570 := TCoordinateNode.Create;
Coordinate570.SetPoint([Vector3(0,1.525,-0.072),Vector3(0.082,1.4488,-0.0353),Vector3(-0.03,1.46,0.02),Vector3(0,1.54,-0.05)]);
{ .SetCoord }
IndexedLineSet569.Coord := Coordinate570;
{ .SetGeometry }
Shape567.Geometry := IndexedLineSet569;
{ .AddChildren }
HAnimSegment566.AddChildren([Shape567]);
Transform571 := TTransformNode.Create;
Transform571.Translation := Vector3(0,1.525,-0.072);
Shape572 := TShapeNode.Create;
Shape572 := Shape50;
{ .AddChild }
Transform571.AddChildren([Shape572]);
{ .AddChildren }
HAnimSegment566.AddChildren([Transform571]);
HAnimSite573 := THAnimSiteNode.Create;
HAnimSite573.NameField := 'r_neck_base_pt';
HAnimSite573.Translation := Vector3(-0.0646,1.5149,-0.0385);
Shape574 := TShapeNode.Create;
Shape574 := Shape57;
{ .AddChildren }
HAnimSite573.AddChildren([Shape574]);
{ .AddChildren }
HAnimSegment566.AddChildren([HAnimSite573]);
HAnimSite575 := THAnimSiteNode.Create;
HAnimSite575.NameField := 'l_neck_base_pt';
HAnimSite575.Translation := Vector3(0.0646,1.5149,-0.0385);
Shape576 := TShapeNode.Create;
Shape576 := Shape57;
{ .AddChildren }
HAnimSite575.AddChildren([Shape576]);
{ .AddChildren }
HAnimSegment566.AddChildren([HAnimSite575]);
{ .AddChildren }
HAnimJoint565.AddChildren([HAnimSegment566]);
HAnimJoint577 := THAnimJointNode.Create;
HAnimJoint577.NameField := 'vc6';
HAnimJoint577.Center := Vector3(0,1.54,-0.05);
HAnimSegment578 := THAnimSegmentNode.Create;
HAnimSegment578.NameField := 'c6';
Shape579 := TShapeNode.Create;
Appearance580 := TAppearanceNode.Create;
Appearance580 := Appearance64;
{ .SetAppearance }
Shape579.Appearance := Appearance580;
IndexedLineSet581 := TIndexedLineSetNode.Create;
IndexedLineSet581.SetCoordIndex([0,1,-1]);
Coordinate582 := TCoordinateNode.Create;
Coordinate582.SetPoint([Vector3(0,1.54,-0.05),Vector3(0,1.5675,-0.0256)]);
{ .SetCoord }
IndexedLineSet581.Coord := Coordinate582;
{ .SetGeometry }
Shape579.Geometry := IndexedLineSet581;
{ .AddChildren }
HAnimSegment578.AddChildren([Shape579]);
Transform583 := TTransformNode.Create;
Transform583.Translation := Vector3(0,1.54,-0.05);
Shape584 := TShapeNode.Create;
Shape584 := Shape50;
{ .AddChild }
Transform583.AddChildren([Shape584]);
{ .AddChildren }
HAnimSegment578.AddChildren([Transform583]);
{ .AddChildren }
HAnimJoint577.AddChildren([HAnimSegment578]);
HAnimJoint585 := THAnimJointNode.Create;
HAnimJoint585.NameField := 'vc5';
HAnimJoint585.Center := Vector3(0,1.552,-0.035);
HAnimSegment586 := THAnimSegmentNode.Create;
HAnimSegment586.NameField := 'c5';
Transform587 := TTransformNode.Create;
Transform587.Translation := Vector3(0,1.552,-0.035);
Shape588 := TShapeNode.Create;
Shape588 := Shape50;
{ .AddChild }
Transform587.AddChildren([Shape588]);
{ .AddChildren }
HAnimSegment586.AddChildren([Transform587]);
Shape589 := TShapeNode.Create;
Appearance590 := TAppearanceNode.Create;
Appearance590 := Appearance64;
{ .SetAppearance }
Shape589.Appearance := Appearance590;
IndexedLineSet591 := TIndexedLineSetNode.Create;
IndexedLineSet591.SetCoordIndex([0,1,-1]);
Coordinate592 := TCoordinateNode.Create;
Coordinate592.SetPoint([Vector3(0,1.5675,-0.0256),Vector3(0,1.5823,-0.0185)]);
{ .SetCoord }
IndexedLineSet591.Coord := Coordinate592;
{ .SetGeometry }
Shape589.Geometry := IndexedLineSet591;
{ .AddChildren }
HAnimSegment586.AddChildren([Shape589]);
{ .AddChildren }
HAnimJoint585.AddChildren([HAnimSegment586]);
HAnimJoint593 := THAnimJointNode.Create;
HAnimJoint593.NameField := 'vc4';
HAnimJoint593.Center := Vector3(0,1.5675,-0.0256);
HAnimSegment594 := THAnimSegmentNode.Create;
HAnimSegment594.NameField := 'c4';
Shape595 := TShapeNode.Create;
Appearance596 := TAppearanceNode.Create;
Appearance596 := Appearance64;
{ .SetAppearance }
Shape595.Appearance := Appearance596;
IndexedLineSet597 := TIndexedLineSetNode.Create;
IndexedLineSet597.SetCoordIndex([0,1,-1]);
Coordinate598 := TCoordinateNode.Create;
Coordinate598.SetPoint([Vector3(0,1.5823,-0.0185),Vector3(0,1.595,-0.0175)]);
{ .SetCoord }
IndexedLineSet597.Coord := Coordinate598;
{ .SetGeometry }
Shape595.Geometry := IndexedLineSet597;
{ .AddChildren }
HAnimSegment594.AddChildren([Shape595]);
Transform599 := TTransformNode.Create;
Transform599.Translation := Vector3(0,1.5675,-0.0256);
Shape600 := TShapeNode.Create;
Shape600 := Shape50;
{ .AddChild }
Transform599.AddChildren([Shape600]);
{ .AddChildren }
HAnimSegment594.AddChildren([Transform599]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimSegment594]);
HAnimJoint601 := THAnimJointNode.Create;
HAnimJoint601.NameField := 'vc3';
HAnimJoint601.Center := Vector3(0,1.5823,-0.0185);
HAnimSegment602 := THAnimSegmentNode.Create;
HAnimSegment602.NameField := 'c3';
Shape603 := TShapeNode.Create;
Appearance604 := TAppearanceNode.Create;
Appearance604 := Appearance64;
{ .SetAppearance }
Shape603.Appearance := Appearance604;
IndexedLineSet605 := TIndexedLineSetNode.Create;
IndexedLineSet605.SetCoordIndex([0,1,-1]);
Coordinate606 := TCoordinateNode.Create;
Coordinate606.SetPoint([Vector3(0,1.595,-0.0175),Vector3(0,1.61,-0.015)]);
{ .SetCoord }
IndexedLineSet605.Coord := Coordinate606;
{ .SetGeometry }
Shape603.Geometry := IndexedLineSet605;
{ .AddChildren }
HAnimSegment602.AddChildren([Shape603]);
Transform607 := TTransformNode.Create;
Transform607.Translation := Vector3(0,1.5823,-0.0185);
Shape608 := TShapeNode.Create;
Shape608 := Shape50;
{ .AddChild }
Transform607.AddChildren([Shape608]);
{ .AddChildren }
HAnimSegment602.AddChildren([Transform607]);
{ .AddChildren }
HAnimJoint601.AddChildren([HAnimSegment602]);
HAnimJoint609 := THAnimJointNode.Create;
HAnimJoint609.NameField := 'vc2';
HAnimJoint609.Center := Vector3(0,1.595,-0.0175);
HAnimSegment610 := THAnimSegmentNode.Create;
HAnimSegment610.NameField := 'c2';
Shape611 := TShapeNode.Create;
Appearance612 := TAppearanceNode.Create;
Appearance612 := Appearance64;
{ .SetAppearance }
Shape611.Appearance := Appearance612;
IndexedLineSet613 := TIndexedLineSetNode.Create;
IndexedLineSet613.SetCoordIndex([0,1,-1]);
Coordinate614 := TCoordinateNode.Create;
Coordinate614.SetPoint([Vector3(0,1.61,-0.015),Vector3(0,1.6144,-0.0034)]);
{ .SetCoord }
IndexedLineSet613.Coord := Coordinate614;
{ .SetGeometry }
Shape611.Geometry := IndexedLineSet613;
{ .AddChildren }
HAnimSegment610.AddChildren([Shape611]);
Transform615 := TTransformNode.Create;
Transform615.Translation := Vector3(0,1.595,-0.0175);
Shape616 := TShapeNode.Create;
Shape616 := Shape50;
{ .AddChild }
Transform615.AddChildren([Shape616]);
{ .AddChildren }
HAnimSegment610.AddChildren([Transform615]);
{ .AddChildren }
HAnimJoint609.AddChildren([HAnimSegment610]);
HAnimJoint617 := THAnimJointNode.Create;
HAnimJoint617.NameField := 'vc1';
HAnimJoint617.Center := Vector3(0,1.61,-0.015);
HAnimSegment618 := THAnimSegmentNode.Create;
HAnimSegment618.NameField := 'c1';
Shape619 := TShapeNode.Create;
Appearance620 := TAppearanceNode.Create;
Appearance620 := Appearance64;
{ .SetAppearance }
Shape619.Appearance := Appearance620;
IndexedLineSet621 := TIndexedLineSetNode.Create;
IndexedLineSet621.SetCoordIndex([0,1,-1]);
Coordinate622 := TCoordinateNode.Create;
Coordinate622.SetPoint([Vector3(0,1.6144,-0.0034),Vector3(0,1.63,-0.01)]);
{ .SetCoord }
IndexedLineSet621.Coord := Coordinate622;
{ .SetGeometry }
Shape619.Geometry := IndexedLineSet621;
{ .AddChildren }
HAnimSegment618.AddChildren([Shape619]);
Transform623 := TTransformNode.Create;
Transform623.Translation := Vector3(0,1.61,-0.015);
Shape624 := TShapeNode.Create;
Shape624 := Shape50;
{ .AddChild }
Transform623.AddChildren([Shape624]);
{ .AddChildren }
HAnimSegment618.AddChildren([Transform623]);
{ .AddChildren }
HAnimJoint617.AddChildren([HAnimSegment618]);
HAnimJoint625 := THAnimJointNode.Create;
HAnimJoint625.NameField := 'skullbase';
HAnimJoint625.Center := Vector3(0,1.63,-0.01);
HAnimJoint625.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint625.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimSegment626 := THAnimSegmentNode.Create;
HAnimSegment626.NameField := 'skull';
Shape627 := TShapeNode.Create;
Appearance628 := TAppearanceNode.Create;
Appearance628 := Appearance64;
{ .SetAppearance }
Shape627.Appearance := Appearance628;
IndexedLineSet629 := TIndexedLineSetNode.Create;
IndexedLineSet629.SetCoordIndex([0,1,-1,0,2,-1]);
Coordinate630 := TCoordinateNode.Create;
Coordinate630.SetPoint([Vector3(0,1.63,-0.01),Vector3(0.034,1.659,0.06),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet629.Coord := Coordinate630;
{ .SetGeometry }
Shape627.Geometry := IndexedLineSet629;
{ .AddChildren }
HAnimSegment626.AddChildren([Shape627]);
Transform631 := TTransformNode.Create;
Transform631.Translation := Vector3(0,1.63,-0.01);
Shape632 := TShapeNode.Create;
Shape632 := Shape50;
{ .AddChild }
Transform631.AddChildren([Shape632]);
{ .AddChildren }
HAnimSegment626.AddChildren([Transform631]);
HAnimSite633 := THAnimSiteNode.Create;
HAnimSite633.NameField := 'skull_vertex_tip';
HAnimSite633.Translation := Vector3(0,1.77,0);
Shape634 := TShapeNode.Create;
Shape634 := Shape57;
{ .AddChildren }
HAnimSite633.AddChildren([Shape634]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite633]);
HAnimSite635 := THAnimSiteNode.Create;
HAnimSite635.NameField := 'sellion_pt';
HAnimSite635.Translation := Vector3(0,1.665,0.09);
Shape636 := TShapeNode.Create;
Shape636 := Shape57;
{ .AddChildren }
HAnimSite635.AddChildren([Shape636]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite635]);
HAnimSite637 := THAnimSiteNode.Create;
HAnimSite637.NameField := 'r_infraorbitale_pt';
HAnimSite637.Translation := Vector3(-0.033,1.62,0.087);
Shape638 := TShapeNode.Create;
Shape638 := Shape57;
{ .AddChildren }
HAnimSite637.AddChildren([Shape638]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite637]);
HAnimSite639 := THAnimSiteNode.Create;
HAnimSite639.NameField := 'l_infraorbitale_pt';
HAnimSite639.Translation := Vector3(0.033,1.62,0.087);
Shape640 := TShapeNode.Create;
Shape640 := Shape57;
{ .AddChildren }
HAnimSite639.AddChildren([Shape640]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite639]);
HAnimSite641 := THAnimSiteNode.Create;
HAnimSite641.NameField := 'supramenton_pt';
HAnimSite641.Translation := Vector3(0,1.55,0.097);
Shape642 := TShapeNode.Create;
Shape642 := Shape57;
{ .AddChildren }
HAnimSite641.AddChildren([Shape642]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite641]);
HAnimSite643 := THAnimSiteNode.Create;
HAnimSite643.NameField := 'r_tragion_pt';
HAnimSite643.Translation := Vector3(-0.077,1.64,-0.01);
Shape644 := TShapeNode.Create;
Shape644 := Shape57;
{ .AddChildren }
HAnimSite643.AddChildren([Shape644]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite643]);
HAnimSite645 := THAnimSiteNode.Create;
HAnimSite645.NameField := 'r_gonion_pt';
HAnimSite645.Translation := Vector3(-0.052,1.58,0.015);
Shape646 := TShapeNode.Create;
Shape646 := Shape57;
{ .AddChildren }
HAnimSite645.AddChildren([Shape646]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite645]);
HAnimSite647 := THAnimSiteNode.Create;
HAnimSite647.NameField := 'l_tragion_pt';
HAnimSite647.Translation := Vector3(0.077,1.64,-0.01);
Shape648 := TShapeNode.Create;
Shape648 := Shape57;
{ .AddChildren }
HAnimSite647.AddChildren([Shape648]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite647]);
HAnimSite649 := THAnimSiteNode.Create;
HAnimSite649.NameField := 'l_gonion_pt';
HAnimSite649.Translation := Vector3(0.0631,1.58,0.015);
Shape650 := TShapeNode.Create;
Shape650 := Shape57;
{ .AddChildren }
HAnimSite649.AddChildren([Shape650]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite649]);
HAnimSite651 := THAnimSiteNode.Create;
HAnimSite651.NameField := 'nuchale_pt';
HAnimSite651.Translation := Vector3(0,1.625,-0.0925);
Shape652 := TShapeNode.Create;
Shape652 := Shape57;
{ .AddChildren }
HAnimSite651.AddChildren([Shape652]);
{ .AddChildren }
HAnimSegment626.AddChildren([HAnimSite651]);
{ .AddChildren }
HAnimJoint625.AddChildren([HAnimSegment626]);
HAnimJoint653 := THAnimJointNode.Create;
HAnimJoint653.NameField := 'l_eyeball_joint';
HAnimJoint653.Center := Vector3(0.034,1.659,0.06);
HAnimSegment654 := THAnimSegmentNode.Create;
HAnimSegment654.NameField := 'l_eyeball';
Shape655 := TShapeNode.Create;
Appearance656 := TAppearanceNode.Create;
Appearance656 := Appearance64;
{ .SetAppearance }
Shape655.Appearance := Appearance656;
IndexedLineSet657 := TIndexedLineSetNode.Create;
IndexedLineSet657.SetCoordIndex([0,1,-1]);
Coordinate658 := TCoordinateNode.Create;
Coordinate658.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet657.Coord := Coordinate658;
{ .SetGeometry }
Shape655.Geometry := IndexedLineSet657;
{ .AddChildren }
HAnimSegment654.AddChildren([Shape655]);
Transform659 := TTransformNode.Create;
Transform659.Scale := Vector3(1,1,1.4);
Transform659.Translation := Vector3(0.034,1.655,0.065);
Shape660 := TShapeNode.Create;
Shape660 := Shape50;
{ .AddChild }
Transform659.AddChildren([Shape660]);
{ .AddChildren }
HAnimSegment654.AddChildren([Transform659]);
{ .AddChildren }
HAnimJoint653.AddChildren([HAnimSegment654]);
{ .AddChildren }
HAnimJoint625.AddChildren([HAnimJoint653]);
HAnimJoint661 := THAnimJointNode.Create;
HAnimJoint661.NameField := 'r_eyeball_joint';
HAnimJoint661.Center := Vector3(-0.034,1.659,0.06);
HAnimSegment662 := THAnimSegmentNode.Create;
HAnimSegment662.NameField := 'r_eyeball';
Shape663 := TShapeNode.Create;
Appearance664 := TAppearanceNode.Create;
Appearance664 := Appearance64;
{ .SetAppearance }
Shape663.Appearance := Appearance664;
IndexedLineSet665 := TIndexedLineSetNode.Create;
IndexedLineSet665.SetCoordIndex([0,1,-1]);
Coordinate666 := TCoordinateNode.Create;
Coordinate666.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet665.Coord := Coordinate666;
{ .SetGeometry }
Shape663.Geometry := IndexedLineSet665;
{ .AddChildren }
HAnimSegment662.AddChildren([Shape663]);
Transform667 := TTransformNode.Create;
Transform667.Scale := Vector3(1,1,1.4);
Transform667.Translation := Vector3(-0.034,1.655,0.065);
Shape668 := TShapeNode.Create;
Shape668 := Shape50;
{ .AddChild }
Transform667.AddChildren([Shape668]);
{ .AddChildren }
HAnimSegment662.AddChildren([Transform667]);
{ .AddChildren }
HAnimJoint661.AddChildren([HAnimSegment662]);
{ .AddChildren }
HAnimJoint625.AddChildren([HAnimJoint661]);
{ .AddChildren }
HAnimJoint617.AddChildren([HAnimJoint625]);
{ .AddChildren }
HAnimJoint609.AddChildren([HAnimJoint617]);
{ .AddChildren }
HAnimJoint601.AddChildren([HAnimJoint609]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimJoint601]);
{ .AddChildren }
HAnimJoint585.AddChildren([HAnimJoint593]);
{ .AddChildren }
HAnimJoint577.AddChildren([HAnimJoint585]);
{ .AddChildren }
HAnimJoint565.AddChildren([HAnimJoint577]);
{ .AddChildren }
HAnimJoint553.AddChildren([HAnimJoint565]);
HAnimJoint669 := THAnimJointNode.Create;
HAnimJoint669.NameField := 'l_sternoclavicular';
HAnimJoint669.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint669.SetSkinCoordIndex([12]);
HAnimJoint669.SetSkinCoordWeight([1]);
HAnimSegment670 := THAnimSegmentNode.Create;
HAnimSegment670.NameField := 'l_clavicle';
Shape671 := TShapeNode.Create;
Appearance672 := TAppearanceNode.Create;
Appearance672 := Appearance64;
{ .SetAppearance }
Shape671.Appearance := Appearance672;
IndexedLineSet673 := TIndexedLineSetNode.Create;
IndexedLineSet673.SetCoordIndex([0,1,-1]);
Coordinate674 := TCoordinateNode.Create;
Coordinate674.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
IndexedLineSet673.Coord := Coordinate674;
{ .SetGeometry }
Shape671.Geometry := IndexedLineSet673;
{ .AddChildren }
HAnimSegment670.AddChildren([Shape671]);
Transform675 := TTransformNode.Create;
Transform675.Translation := Vector3(0.082,1.4488,-0.0353);
Shape676 := TShapeNode.Create;
Shape676 := Shape50;
{ .AddChild }
Transform675.AddChildren([Shape676]);
{ .AddChildren }
HAnimSegment670.AddChildren([Transform675]);
HAnimSite677 := THAnimSiteNode.Create;
HAnimSite677.NameField := 'l_clavicle_pt';
HAnimSite677.Translation := Vector3(0.03,1.46,0.035);
Shape678 := TShapeNode.Create;
Shape678 := Shape57;
{ .AddChildren }
HAnimSite677.AddChildren([Shape678]);
{ .AddChildren }
HAnimSegment670.AddChildren([HAnimSite677]);
{ .AddChildren }
HAnimJoint669.AddChildren([HAnimSegment670]);
HAnimJoint679 := THAnimJointNode.Create;
HAnimJoint679.NameField := 'l_acromioclavicular';
HAnimJoint679.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint679.SetSkinCoordIndex([79]);
HAnimJoint679.SetSkinCoordWeight([1]);
HAnimSegment680 := THAnimSegmentNode.Create;
HAnimSegment680.NameField := 'l_scapula';
Shape681 := TShapeNode.Create;
Appearance682 := TAppearanceNode.Create;
Appearance682 := Appearance64;
{ .SetAppearance }
Shape681.Appearance := Appearance682;
IndexedLineSet683 := TIndexedLineSetNode.Create;
IndexedLineSet683.SetCoordIndex([0,1,-1]);
Coordinate684 := TCoordinateNode.Create;
Coordinate684.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2,1.44,-0.04)]);
{ .SetCoord }
IndexedLineSet683.Coord := Coordinate684;
{ .SetGeometry }
Shape681.Geometry := IndexedLineSet683;
{ .AddChildren }
HAnimSegment680.AddChildren([Shape681]);
Transform685 := TTransformNode.Create;
Transform685.Translation := Vector3(0.0962,1.4269,-0.0424);
Shape686 := TShapeNode.Create;
Shape686 := Shape50;
{ .AddChild }
Transform685.AddChildren([Shape686]);
{ .AddChildren }
HAnimSegment680.AddChildren([Transform685]);
Transform687 := TTransformNode.Create;
Transform687.Translation := Vector3(0.11,1.427,-0.1375);
Shape688 := TShapeNode.Create;
Shape688 := Shape69;
{ .AddChild }
Transform687.AddChildren([Shape688]);
{ .AddChildren }
HAnimSegment680.AddChildren([Transform687]);
HAnimSite689 := THAnimSiteNode.Create;
HAnimSite689.NameField := 'l_acromion_pt';
HAnimSite689.Translation := Vector3(0.175,1.4825,-0.06);
Shape690 := TShapeNode.Create;
Shape690 := Shape57;
{ .AddChildren }
HAnimSite689.AddChildren([Shape690]);
{ .AddChildren }
HAnimSegment680.AddChildren([HAnimSite689]);
HAnimSite691 := THAnimSiteNode.Create;
HAnimSite691.NameField := 'l_axilla_proximal_pt';
HAnimSite691.Translation := Vector3(0.17,1.38,0.007);
Shape692 := TShapeNode.Create;
Shape692 := Shape57;
{ .AddChildren }
HAnimSite691.AddChildren([Shape692]);
{ .AddChildren }
HAnimSegment680.AddChildren([HAnimSite691]);
HAnimSite693 := THAnimSiteNode.Create;
HAnimSite693.NameField := 'l_axilla_distal_pt';
HAnimSite693.Translation := Vector3(0.16,1.38,-0.125);
Shape694 := TShapeNode.Create;
Shape694 := Shape57;
{ .AddChildren }
HAnimSite693.AddChildren([Shape694]);
{ .AddChildren }
HAnimSegment680.AddChildren([HAnimSite693]);
{ .AddChildren }
HAnimJoint679.AddChildren([HAnimSegment680]);
HAnimJoint695 := THAnimJointNode.Create;
HAnimJoint695.NameField := 'l_shoulder';
HAnimJoint695.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint695.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint695.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment696 := THAnimSegmentNode.Create;
HAnimSegment696.NameField := 'l_upperarm';
Shape697 := TShapeNode.Create;
Appearance698 := TAppearanceNode.Create;
Appearance698 := Appearance64;
{ .SetAppearance }
Shape697.Appearance := Appearance698;
IndexedLineSet699 := TIndexedLineSetNode.Create;
IndexedLineSet699.SetCoordIndex([0,1,-1]);
Coordinate700 := TCoordinateNode.Create;
Coordinate700.SetPoint([Vector3(0.2029,1.44,-0.0387),Vector3(0.2,1.1388,-0.04)]);
{ .SetCoord }
IndexedLineSet699.Coord := Coordinate700;
{ .SetGeometry }
Shape697.Geometry := IndexedLineSet699;
{ .AddChildren }
HAnimSegment696.AddChildren([Shape697]);
Transform701 := TTransformNode.Create;
Transform701.Translation := Vector3(0.2,1.44,-0.04);
Shape702 := TShapeNode.Create;
Shape702 := Shape50;
{ .AddChild }
Transform701.AddChildren([Shape702]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform701]);
Transform703 := TTransformNode.Create;
Transform703.Translation := Vector3(0.235,1.42,-0.0625);
Shape704 := TShapeNode.Create;
Shape704 := Shape69;
{ .AddChild }
Transform703.AddChildren([Shape704]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform703]);
Transform705 := TTransformNode.Create;
Transform705.Translation := Vector3(0.25,1.27,-0.04);
Shape706 := TShapeNode.Create;
Shape706 := Shape69;
{ .AddChild }
Transform705.AddChildren([Shape706]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform705]);
Transform707 := TTransformNode.Create;
Transform707.Translation := Vector3(0.17,1.27,-0.04);
Shape708 := TShapeNode.Create;
Shape708 := Shape69;
{ .AddChild }
Transform707.AddChildren([Shape708]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform707]);
Transform709 := TTransformNode.Create;
Transform709.Translation := Vector3(0.2,1.27,-0.09);
Shape710 := TShapeNode.Create;
Shape710 := Shape69;
{ .AddChild }
Transform709.AddChildren([Shape710]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform709]);
Transform711 := TTransformNode.Create;
Transform711.Translation := Vector3(0.2,1.27,0.02);
Shape712 := TShapeNode.Create;
Shape712 := Shape69;
{ .AddChild }
Transform711.AddChildren([Shape712]);
{ .AddChildren }
HAnimSegment696.AddChildren([Transform711]);
HAnimSite713 := THAnimSiteNode.Create;
HAnimSite713.NameField := 'l_humeral_medial_epicondyle_pt';
HAnimSite713.Translation := Vector3(0.165,1.1388,-0.04);
Shape714 := TShapeNode.Create;
Shape714 := Shape57;
{ .AddChildren }
HAnimSite713.AddChildren([Shape714]);
{ .AddChildren }
HAnimSegment696.AddChildren([HAnimSite713]);
HAnimSite715 := THAnimSiteNode.Create;
HAnimSite715.NameField := 'l_radiale_pt';
HAnimSite715.Translation := Vector3(0.23,1.133,-0.055);
Shape716 := TShapeNode.Create;
Shape716 := Shape57;
{ .AddChildren }
HAnimSite715.AddChildren([Shape716]);
{ .AddChildren }
HAnimSegment696.AddChildren([HAnimSite715]);
HAnimSite717 := THAnimSiteNode.Create;
HAnimSite717.NameField := 'l_humeral_lateral_epicondyle_pt';
HAnimSite717.Translation := Vector3(0.244,1.1388,-0.04);
Shape718 := TShapeNode.Create;
Shape718 := Shape57;
{ .AddChildren }
HAnimSite717.AddChildren([Shape718]);
{ .AddChildren }
HAnimSegment696.AddChildren([HAnimSite717]);
{ .AddChildren }
HAnimJoint695.AddChildren([HAnimSegment696]);
HAnimJoint719 := THAnimJointNode.Create;
HAnimJoint719.NameField := 'l_elbow';
HAnimJoint719.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint719.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint719.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment720 := THAnimSegmentNode.Create;
HAnimSegment720.NameField := 'l_forearm';
Shape721 := TShapeNode.Create;
Appearance722 := TAppearanceNode.Create;
Appearance722 := Appearance64;
{ .SetAppearance }
Shape721.Appearance := Appearance722;
IndexedLineSet723 := TIndexedLineSetNode.Create;
IndexedLineSet723.SetCoordIndex([0,1,-1]);
Coordinate724 := TCoordinateNode.Create;
Coordinate724.SetPoint([Vector3(0.2,1.1388,-0.04),Vector3(0.2,0.87,-0.04)]);
{ .SetCoord }
IndexedLineSet723.Coord := Coordinate724;
{ .SetGeometry }
Shape721.Geometry := IndexedLineSet723;
{ .AddChildren }
HAnimSegment720.AddChildren([Shape721]);
Transform725 := TTransformNode.Create;
Transform725.Translation := Vector3(0.2,1.1388,-0.04);
Shape726 := TShapeNode.Create;
Shape726 := Shape50;
{ .AddChild }
Transform725.AddChildren([Shape726]);
{ .AddChildren }
HAnimSegment720.AddChildren([Transform725]);
Transform727 := TTransformNode.Create;
Transform727.Translation := Vector3(0.2,1.1388,-0.013);
Shape728 := TShapeNode.Create;
Shape728 := Shape69;
{ .AddChild }
Transform727.AddChildren([Shape728]);
{ .AddChildren }
HAnimSegment720.AddChildren([Transform727]);
Transform729 := TTransformNode.Create;
Transform729.Translation := Vector3(0.225,1,-0.01);
Shape730 := TShapeNode.Create;
Shape730 := Shape69;
{ .AddChild }
Transform729.AddChildren([Shape730]);
{ .AddChildren }
HAnimSegment720.AddChildren([Transform729]);
Transform731 := TTransformNode.Create;
Transform731.Translation := Vector3(0.225,1,-0.07);
Shape732 := TShapeNode.Create;
Shape732 := Shape69;
{ .AddChild }
Transform731.AddChildren([Shape732]);
{ .AddChildren }
HAnimSegment720.AddChildren([Transform731]);
Transform733 := TTransformNode.Create;
Transform733.Translation := Vector3(0.185,1,-0.01);
Shape734 := TShapeNode.Create;
Shape734 := Shape69;
{ .AddChild }
Transform733.AddChildren([Shape734]);
{ .AddChildren }
HAnimSegment720.AddChildren([Transform733]);
Transform735 := TTransformNode.Create;
Transform735.Translation := Vector3(0.185,1,-0.07);
Shape736 := TShapeNode.Create;
Shape736 := Shape69;
{ .AddChild }
Transform735.AddChildren([Shape736]);
{ .AddChildren }
HAnimSegment720.AddChildren([Transform735]);
HAnimSite737 := THAnimSiteNode.Create;
HAnimSite737.NameField := 'l_radial_styloid_pt';
HAnimSite737.Translation := Vector3(0.1901,0.8645,-0.0415);
Shape738 := TShapeNode.Create;
Shape738 := Shape57;
{ .AddChildren }
HAnimSite737.AddChildren([Shape738]);
{ .AddChildren }
HAnimSegment720.AddChildren([HAnimSite737]);
HAnimSite739 := THAnimSiteNode.Create;
HAnimSite739.NameField := 'l_olecranon_pt';
HAnimSite739.Translation := Vector3(0.2,1.1388,-0.08);
Shape740 := TShapeNode.Create;
Shape740 := Shape57;
{ .AddChildren }
HAnimSite739.AddChildren([Shape740]);
{ .AddChildren }
HAnimSegment720.AddChildren([HAnimSite739]);
{ .AddChildren }
HAnimJoint719.AddChildren([HAnimSegment720]);
HAnimJoint741 := THAnimJointNode.Create;
HAnimJoint741.NameField := 'l_radiocarpal';
HAnimJoint741.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint741.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint741.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment742 := THAnimSegmentNode.Create;
HAnimSegment742.NameField := 'l_carpal';
Shape743 := TShapeNode.Create;
Appearance744 := TAppearanceNode.Create;
Appearance744 := Appearance64;
{ .SetAppearance }
Shape743.Appearance := Appearance744;
IndexedLineSet745 := TIndexedLineSetNode.Create;
IndexedLineSet745.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate746 := TCoordinateNode.Create;
Coordinate746.SetPoint([Vector3(0.2,0.87,-0.04),Vector3(0.1924,0.8472,-0.0534),Vector3(0.1983,0.8024,-0.028),Vector3(0.1987,0.8029,-0.053),Vector3(0.1956,0.8019,-0.0794),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
IndexedLineSet745.Coord := Coordinate746;
{ .SetGeometry }
Shape743.Geometry := IndexedLineSet745;
{ .AddChildren }
HAnimSegment742.AddChildren([Shape743]);
Transform747 := TTransformNode.Create;
Transform747.Translation := Vector3(0.2,0.87,-0.04);
Shape748 := TShapeNode.Create;
Shape748 := Shape50;
{ .AddChild }
Transform747.AddChildren([Shape748]);
{ .AddChildren }
HAnimSegment742.AddChildren([Transform747]);
HAnimSite749 := THAnimSiteNode.Create;
HAnimSite749.NameField := 'l_metacarpal_phalanx_2_pt';
HAnimSite749.Translation := Vector3(0.2009,0.8139,-0.0237);
Shape750 := TShapeNode.Create;
Shape750 := Shape57;
{ .AddChildren }
HAnimSite749.AddChildren([Shape750]);
{ .AddChildren }
HAnimSegment742.AddChildren([HAnimSite749]);
HAnimSite751 := THAnimSiteNode.Create;
HAnimSite751.NameField := 'l_ulnar_styloid_pt';
HAnimSite751.Translation := Vector3(0.2142,0.8529,-0.0648);
Shape752 := TShapeNode.Create;
Shape752 := Shape57;
{ .AddChildren }
HAnimSite751.AddChildren([Shape752]);
{ .AddChildren }
HAnimSegment742.AddChildren([HAnimSite751]);
HAnimSite753 := THAnimSiteNode.Create;
HAnimSite753.NameField := 'l_metacarpal_phalanx_5_pt';
HAnimSite753.Translation := Vector3(0.1929,0.786,-0.1122);
Shape754 := TShapeNode.Create;
Shape754 := Shape57;
{ .AddChildren }
HAnimSite753.AddChildren([Shape754]);
{ .AddChildren }
HAnimSegment742.AddChildren([HAnimSite753]);
{ .AddChildren }
HAnimJoint741.AddChildren([HAnimSegment742]);
HAnimJoint755 := THAnimJointNode.Create;
HAnimJoint755.NameField := 'l_carpometacarpal_1';
HAnimJoint755.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint755.SetSkinCoordIndex([127,128]);
HAnimJoint755.SetSkinCoordWeight([1,1]);
HAnimSegment756 := THAnimSegmentNode.Create;
HAnimSegment756.NameField := 'l_metacarpal_1';
Shape757 := TShapeNode.Create;
Appearance758 := TAppearanceNode.Create;
Appearance758 := Appearance64;
{ .SetAppearance }
Shape757.Appearance := Appearance758;
IndexedLineSet759 := TIndexedLineSetNode.Create;
IndexedLineSet759.SetCoordIndex([0,1,-1]);
Coordinate760 := TCoordinateNode.Create;
Coordinate760.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
IndexedLineSet759.Coord := Coordinate760;
{ .SetGeometry }
Shape757.Geometry := IndexedLineSet759;
{ .AddChildren }
HAnimSegment756.AddChildren([Shape757]);
Transform761 := TTransformNode.Create;
Transform761.Translation := Vector3(0.1924,0.8472,-0.0534);
Shape762 := TShapeNode.Create;
Shape762 := Shape50;
{ .AddChild }
Transform761.AddChildren([Shape762]);
{ .AddChildren }
HAnimSegment756.AddChildren([Transform761]);
{ .AddChildren }
HAnimJoint755.AddChildren([HAnimSegment756]);
HAnimJoint763 := THAnimJointNode.Create;
HAnimJoint763.NameField := 'l_metacarpophalangeal_1';
HAnimJoint763.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint763.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint763.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment764 := THAnimSegmentNode.Create;
HAnimSegment764.NameField := 'l_carpal_proximal_phalanx_1';
Shape765 := TShapeNode.Create;
Appearance766 := TAppearanceNode.Create;
Appearance766 := Appearance64;
{ .SetAppearance }
Shape765.Appearance := Appearance766;
IndexedLineSet767 := TIndexedLineSetNode.Create;
IndexedLineSet767.SetCoordIndex([0,1,-1]);
Coordinate768 := TCoordinateNode.Create;
Coordinate768.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
IndexedLineSet767.Coord := Coordinate768;
{ .SetGeometry }
Shape765.Geometry := IndexedLineSet767;
{ .AddChildren }
HAnimSegment764.AddChildren([Shape765]);
Transform769 := TTransformNode.Create;
Transform769.Translation := Vector3(0.1951,0.8226,0.0246);
Shape770 := TShapeNode.Create;
Shape770 := Shape50;
{ .AddChild }
Transform769.AddChildren([Shape770]);
{ .AddChildren }
HAnimSegment764.AddChildren([Transform769]);
{ .AddChildren }
HAnimJoint763.AddChildren([HAnimSegment764]);
HAnimJoint771 := THAnimJointNode.Create;
HAnimJoint771.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint771.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint771.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint771.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment772 := THAnimSegmentNode.Create;
HAnimSegment772.NameField := 'l_carpal_distal_phalanx_1';
Shape773 := TShapeNode.Create;
Appearance774 := TAppearanceNode.Create;
Appearance774 := Appearance64;
{ .SetAppearance }
Shape773.Appearance := Appearance774;
IndexedLineSet775 := TIndexedLineSetNode.Create;
IndexedLineSet775.SetCoordIndex([0,1,-1]);
Coordinate776 := TCoordinateNode.Create;
Coordinate776.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ .SetCoord }
IndexedLineSet775.Coord := Coordinate776;
{ .SetGeometry }
Shape773.Geometry := IndexedLineSet775;
{ .AddChildren }
HAnimSegment772.AddChildren([Shape773]);
Transform777 := TTransformNode.Create;
Transform777.Translation := Vector3(0.1955,0.8159,0.0464);
Shape778 := TShapeNode.Create;
Shape778 := Shape50;
{ .AddChild }
Transform777.AddChildren([Shape778]);
{ .AddChildren }
HAnimSegment772.AddChildren([Transform777]);
HAnimSite779 := THAnimSiteNode.Create;
HAnimSite779.NameField := 'l_carpal_distal_phalanx_1_tip';
HAnimSite779.Translation := Vector3(0.1982,0.8061,0.0759);
Shape780 := TShapeNode.Create;
Shape780 := Shape57;
{ .AddChildren }
HAnimSite779.AddChildren([Shape780]);
{ .AddChildren }
HAnimSegment772.AddChildren([HAnimSite779]);
{ .AddChildren }
HAnimJoint771.AddChildren([HAnimSegment772]);
{ .AddChildren }
HAnimJoint763.AddChildren([HAnimJoint771]);
{ .AddChildren }
HAnimJoint755.AddChildren([HAnimJoint763]);
{ .AddChildren }
HAnimJoint741.AddChildren([HAnimJoint755]);
HAnimJoint781 := THAnimJointNode.Create;
HAnimJoint781.NameField := 'l_carpometacarpal_2';
HAnimJoint781.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint781.SetSkinCoordIndex([129,130]);
HAnimJoint781.SetSkinCoordWeight([1,1]);
HAnimSegment782 := THAnimSegmentNode.Create;
HAnimSegment782.NameField := 'l_metacarpal_2';
Shape783 := TShapeNode.Create;
Appearance784 := TAppearanceNode.Create;
Appearance784 := Appearance64;
{ .SetAppearance }
Shape783.Appearance := Appearance784;
IndexedLineSet785 := TIndexedLineSetNode.Create;
IndexedLineSet785.SetCoordIndex([0,1,-1]);
Coordinate786 := TCoordinateNode.Create;
Coordinate786.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
IndexedLineSet785.Coord := Coordinate786;
{ .SetGeometry }
Shape783.Geometry := IndexedLineSet785;
{ .AddChildren }
HAnimSegment782.AddChildren([Shape783]);
Transform787 := TTransformNode.Create;
Transform787.Translation := Vector3(0.1983,0.8024,-0.028);
Shape788 := TShapeNode.Create;
Shape788 := Shape50;
{ .AddChild }
Transform787.AddChildren([Shape788]);
{ .AddChildren }
HAnimSegment782.AddChildren([Transform787]);
{ .AddChildren }
HAnimJoint781.AddChildren([HAnimSegment782]);
HAnimJoint789 := THAnimJointNode.Create;
HAnimJoint789.NameField := 'l_metacarpophalangeal_2';
HAnimJoint789.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint789.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint789.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment790 := THAnimSegmentNode.Create;
HAnimSegment790.NameField := 'l_carpal_proximal_phalanx_2';
Shape791 := TShapeNode.Create;
Appearance792 := TAppearanceNode.Create;
Appearance792 := Appearance64;
{ .SetAppearance }
Shape791.Appearance := Appearance792;
IndexedLineSet793 := TIndexedLineSetNode.Create;
IndexedLineSet793.SetCoordIndex([0,1,-1]);
Coordinate794 := TCoordinateNode.Create;
Coordinate794.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
IndexedLineSet793.Coord := Coordinate794;
{ .SetGeometry }
Shape791.Geometry := IndexedLineSet793;
{ .AddChildren }
HAnimSegment790.AddChildren([Shape791]);
Transform795 := TTransformNode.Create;
Transform795.Translation := Vector3(0.1983,0.7815,-0.028);
Shape796 := TShapeNode.Create;
Shape796 := Shape50;
{ .AddChild }
Transform795.AddChildren([Shape796]);
{ .AddChildren }
HAnimSegment790.AddChildren([Transform795]);
{ .AddChildren }
HAnimJoint789.AddChildren([HAnimSegment790]);
HAnimJoint797 := THAnimJointNode.Create;
HAnimJoint797.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint797.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint797.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint797.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment798 := THAnimSegmentNode.Create;
HAnimSegment798.NameField := 'l_carpal_middle_phalanx_2';
Shape799 := TShapeNode.Create;
Appearance800 := TAppearanceNode.Create;
Appearance800 := Appearance64;
{ .SetAppearance }
Shape799.Appearance := Appearance800;
IndexedLineSet801 := TIndexedLineSetNode.Create;
IndexedLineSet801.SetCoordIndex([0,1,-1]);
Coordinate802 := TCoordinateNode.Create;
Coordinate802.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
IndexedLineSet801.Coord := Coordinate802;
{ .SetGeometry }
Shape799.Geometry := IndexedLineSet801;
{ .AddChildren }
HAnimSegment798.AddChildren([Shape799]);
Transform803 := TTransformNode.Create;
Transform803.Translation := Vector3(0.2017,0.7363,-0.0248);
Shape804 := TShapeNode.Create;
Shape804 := Shape50;
{ .AddChild }
Transform803.AddChildren([Shape804]);
{ .AddChildren }
HAnimSegment798.AddChildren([Transform803]);
{ .AddChildren }
HAnimJoint797.AddChildren([HAnimSegment798]);
HAnimJoint805 := THAnimJointNode.Create;
HAnimJoint805.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint805.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint805.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint805.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment806 := THAnimSegmentNode.Create;
HAnimSegment806.NameField := 'l_carpal_distal_phalanx_2';
Shape807 := TShapeNode.Create;
Appearance808 := TAppearanceNode.Create;
Appearance808 := Appearance64;
{ .SetAppearance }
Shape807.Appearance := Appearance808;
IndexedLineSet809 := TIndexedLineSetNode.Create;
IndexedLineSet809.SetCoordIndex([0,1,-1]);
Coordinate810 := TCoordinateNode.Create;
Coordinate810.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ .SetCoord }
IndexedLineSet809.Coord := Coordinate810;
{ .SetGeometry }
Shape807.Geometry := IndexedLineSet809;
{ .AddChildren }
HAnimSegment806.AddChildren([Shape807]);
Transform811 := TTransformNode.Create;
Transform811.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape812 := TShapeNode.Create;
Shape812 := Shape50;
{ .AddChild }
Transform811.AddChildren([Shape812]);
{ .AddChildren }
HAnimSegment806.AddChildren([Transform811]);
HAnimSite813 := THAnimSiteNode.Create;
HAnimSite813.NameField := 'l_carpal_distal_phalanx_2_tip';
HAnimSite813.Translation := Vector3(0.2089,0.6858,-0.0245);
Shape814 := TShapeNode.Create;
Shape814 := Shape57;
{ .AddChildren }
HAnimSite813.AddChildren([Shape814]);
{ .AddChildren }
HAnimSegment806.AddChildren([HAnimSite813]);
HAnimSite815 := THAnimSiteNode.Create;
HAnimSite815.NameField := 'l_dactylion_pt';
HAnimSite815.Translation := Vector3(0.2056,0.6743,-0.0482);
Shape816 := TShapeNode.Create;
Shape816 := Shape57;
{ .AddChildren }
HAnimSite815.AddChildren([Shape816]);
{ .AddChildren }
HAnimSegment806.AddChildren([HAnimSite815]);
{ .AddChildren }
HAnimJoint805.AddChildren([HAnimSegment806]);
{ .AddChildren }
HAnimJoint797.AddChildren([HAnimJoint805]);
{ .AddChildren }
HAnimJoint789.AddChildren([HAnimJoint797]);
{ .AddChildren }
HAnimJoint781.AddChildren([HAnimJoint789]);
{ .AddChildren }
HAnimJoint741.AddChildren([HAnimJoint781]);
HAnimJoint817 := THAnimJointNode.Create;
HAnimJoint817.NameField := 'l_carpometacarpal_3';
HAnimJoint817.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint817.SetSkinCoordIndex([131,132]);
HAnimJoint817.SetSkinCoordWeight([1,1]);
HAnimSegment818 := THAnimSegmentNode.Create;
HAnimSegment818.NameField := 'l_metacarpal_3';
Shape819 := TShapeNode.Create;
Appearance820 := TAppearanceNode.Create;
Appearance820 := Appearance64;
{ .SetAppearance }
Shape819.Appearance := Appearance820;
IndexedLineSet821 := TIndexedLineSetNode.Create;
IndexedLineSet821.SetCoordIndex([0,1,-1]);
Coordinate822 := TCoordinateNode.Create;
Coordinate822.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
IndexedLineSet821.Coord := Coordinate822;
{ .SetGeometry }
Shape819.Geometry := IndexedLineSet821;
{ .AddChildren }
HAnimSegment818.AddChildren([Shape819]);
Transform823 := TTransformNode.Create;
Transform823.Translation := Vector3(0.1987,0.8029,-0.053);
Shape824 := TShapeNode.Create;
Shape824 := Shape50;
{ .AddChild }
Transform823.AddChildren([Shape824]);
{ .AddChildren }
HAnimSegment818.AddChildren([Transform823]);
{ .AddChildren }
HAnimJoint817.AddChildren([HAnimSegment818]);
HAnimJoint825 := THAnimJointNode.Create;
HAnimJoint825.NameField := 'l_metacarpophalangeal_3';
HAnimJoint825.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint825.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint825.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment826 := THAnimSegmentNode.Create;
HAnimSegment826.NameField := 'l_carpal_proximal_phalanx_3';
Shape827 := TShapeNode.Create;
Appearance828 := TAppearanceNode.Create;
Appearance828 := Appearance64;
{ .SetAppearance }
Shape827.Appearance := Appearance828;
IndexedLineSet829 := TIndexedLineSetNode.Create;
IndexedLineSet829.SetCoordIndex([0,1,-1]);
Coordinate830 := TCoordinateNode.Create;
Coordinate830.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
IndexedLineSet829.Coord := Coordinate830;
{ .SetGeometry }
Shape827.Geometry := IndexedLineSet829;
{ .AddChildren }
HAnimSegment826.AddChildren([Shape827]);
Transform831 := TTransformNode.Create;
Transform831.Translation := Vector3(0.1987,0.7818,-0.053);
Shape832 := TShapeNode.Create;
Shape832 := Shape50;
{ .AddChild }
Transform831.AddChildren([Shape832]);
{ .AddChildren }
HAnimSegment826.AddChildren([Transform831]);
{ .AddChildren }
HAnimJoint825.AddChildren([HAnimSegment826]);
HAnimJoint833 := THAnimJointNode.Create;
HAnimJoint833.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint833.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint833.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint833.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment834 := THAnimSegmentNode.Create;
HAnimSegment834.NameField := 'l_carpal_middle_phalanx_3';
Shape835 := TShapeNode.Create;
Appearance836 := TAppearanceNode.Create;
Appearance836 := Appearance64;
{ .SetAppearance }
Shape835.Appearance := Appearance836;
IndexedLineSet837 := TIndexedLineSetNode.Create;
IndexedLineSet837.SetCoordIndex([0,1,-1]);
Coordinate838 := TCoordinateNode.Create;
Coordinate838.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
IndexedLineSet837.Coord := Coordinate838;
{ .SetGeometry }
Shape835.Geometry := IndexedLineSet837;
{ .AddChildren }
HAnimSegment834.AddChildren([Shape835]);
Transform839 := TTransformNode.Create;
Transform839.Translation := Vector3(0.2013,0.7273,-0.0503);
Shape840 := TShapeNode.Create;
Shape840 := Shape50;
{ .AddChild }
Transform839.AddChildren([Shape840]);
{ .AddChildren }
HAnimSegment834.AddChildren([Transform839]);
{ .AddChildren }
HAnimJoint833.AddChildren([HAnimSegment834]);
HAnimJoint841 := THAnimJointNode.Create;
HAnimJoint841.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint841.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint841.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint841.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment842 := THAnimSegmentNode.Create;
HAnimSegment842.NameField := 'l_carpal_distal_phalanx_3';
Shape843 := TShapeNode.Create;
Appearance844 := TAppearanceNode.Create;
Appearance844 := Appearance64;
{ .SetAppearance }
Shape843.Appearance := Appearance844;
IndexedLineSet845 := TIndexedLineSetNode.Create;
IndexedLineSet845.SetCoordIndex([0,1,-1]);
Coordinate846 := TCoordinateNode.Create;
Coordinate846.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ .SetCoord }
IndexedLineSet845.Coord := Coordinate846;
{ .SetGeometry }
Shape843.Geometry := IndexedLineSet845;
{ .AddChildren }
HAnimSegment842.AddChildren([Shape843]);
HAnimSite847 := THAnimSiteNode.Create;
HAnimSite847.NameField := 'l_carpal_distal_phalanx_3_tip';
HAnimSite847.Translation := Vector3(0.208,0.6731,-0.0491);
Shape848 := TShapeNode.Create;
Shape848 := Shape57;
{ .AddChildren }
HAnimSite847.AddChildren([Shape848]);
{ .AddChildren }
HAnimSegment842.AddChildren([HAnimSite847]);
Transform849 := TTransformNode.Create;
Transform849.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape850 := TShapeNode.Create;
Shape850 := Shape50;
{ .AddChild }
Transform849.AddChildren([Shape850]);
{ .AddChildren }
HAnimSegment842.AddChildren([Transform849]);
{ .AddChildren }
HAnimJoint841.AddChildren([HAnimSegment842]);
{ .AddChildren }
HAnimJoint833.AddChildren([HAnimJoint841]);
{ .AddChildren }
HAnimJoint825.AddChildren([HAnimJoint833]);
{ .AddChildren }
HAnimJoint817.AddChildren([HAnimJoint825]);
{ .AddChildren }
HAnimJoint741.AddChildren([HAnimJoint817]);
HAnimJoint851 := THAnimJointNode.Create;
HAnimJoint851.NameField := 'l_carpometacarpal_4';
HAnimJoint851.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint851.SetSkinCoordIndex([133,134]);
HAnimJoint851.SetSkinCoordWeight([1,1]);
HAnimSegment852 := THAnimSegmentNode.Create;
HAnimSegment852.NameField := 'l_metacarpal_4';
Shape853 := TShapeNode.Create;
Appearance854 := TAppearanceNode.Create;
Appearance854 := Appearance64;
{ .SetAppearance }
Shape853.Appearance := Appearance854;
IndexedLineSet855 := TIndexedLineSetNode.Create;
IndexedLineSet855.SetCoordIndex([0,1,-1]);
Coordinate856 := TCoordinateNode.Create;
Coordinate856.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
IndexedLineSet855.Coord := Coordinate856;
{ .SetGeometry }
Shape853.Geometry := IndexedLineSet855;
{ .AddChildren }
HAnimSegment852.AddChildren([Shape853]);
Transform857 := TTransformNode.Create;
Transform857.Translation := Vector3(0.1956,0.8019,-0.0794);
Shape858 := TShapeNode.Create;
Shape858 := Shape50;
{ .AddChild }
Transform857.AddChildren([Shape858]);
{ .AddChildren }
HAnimSegment852.AddChildren([Transform857]);
{ .AddChildren }
HAnimJoint851.AddChildren([HAnimSegment852]);
HAnimJoint859 := THAnimJointNode.Create;
HAnimJoint859.NameField := 'l_metacarpophalangeal_4';
HAnimJoint859.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint859.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint859.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment860 := THAnimSegmentNode.Create;
HAnimSegment860.NameField := 'l_carpal_proximal_phalanx_4';
Shape861 := TShapeNode.Create;
Appearance862 := TAppearanceNode.Create;
Appearance862 := Appearance64;
{ .SetAppearance }
Shape861.Appearance := Appearance862;
IndexedLineSet863 := TIndexedLineSetNode.Create;
IndexedLineSet863.SetCoordIndex([0,1,-1]);
Coordinate864 := TCoordinateNode.Create;
Coordinate864.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
IndexedLineSet863.Coord := Coordinate864;
{ .SetGeometry }
Shape861.Geometry := IndexedLineSet863;
{ .AddChildren }
HAnimSegment860.AddChildren([Shape861]);
Transform865 := TTransformNode.Create;
Transform865.Translation := Vector3(0.1956,0.7815,-0.0794);
Shape866 := TShapeNode.Create;
Shape866 := Shape50;
{ .AddChild }
Transform865.AddChildren([Shape866]);
{ .AddChildren }
HAnimSegment860.AddChildren([Transform865]);
{ .AddChildren }
HAnimJoint859.AddChildren([HAnimSegment860]);
HAnimJoint867 := THAnimJointNode.Create;
HAnimJoint867.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint867.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint867.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint867.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment868 := THAnimSegmentNode.Create;
HAnimSegment868.NameField := 'l_carpal_middle_phalanx_4';
Shape869 := TShapeNode.Create;
Appearance870 := TAppearanceNode.Create;
Appearance870 := Appearance64;
{ .SetAppearance }
Shape869.Appearance := Appearance870;
IndexedLineSet871 := TIndexedLineSetNode.Create;
IndexedLineSet871.SetCoordIndex([0,1,-1]);
Coordinate872 := TCoordinateNode.Create;
Coordinate872.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
IndexedLineSet871.Coord := Coordinate872;
{ .SetGeometry }
Shape869.Geometry := IndexedLineSet871;
{ .AddChildren }
HAnimSegment868.AddChildren([Shape869]);
Transform873 := TTransformNode.Create;
Transform873.Translation := Vector3(0.1973,0.7287,-0.0777);
Shape874 := TShapeNode.Create;
Shape874 := Shape50;
{ .AddChild }
Transform873.AddChildren([Shape874]);
{ .AddChildren }
HAnimSegment868.AddChildren([Transform873]);
{ .AddChildren }
HAnimJoint867.AddChildren([HAnimSegment868]);
HAnimJoint875 := THAnimJointNode.Create;
HAnimJoint875.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint875.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint875.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint875.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment876 := THAnimSegmentNode.Create;
HAnimSegment876.NameField := 'l_carpal_distal_phalanx_4';
Shape877 := TShapeNode.Create;
Appearance878 := TAppearanceNode.Create;
Appearance878 := Appearance64;
{ .SetAppearance }
Shape877.Appearance := Appearance878;
IndexedLineSet879 := TIndexedLineSetNode.Create;
IndexedLineSet879.SetCoordIndex([0,1,-1]);
Coordinate880 := TCoordinateNode.Create;
Coordinate880.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ .SetCoord }
IndexedLineSet879.Coord := Coordinate880;
{ .SetGeometry }
Shape877.Geometry := IndexedLineSet879;
{ .AddChildren }
HAnimSegment876.AddChildren([Shape877]);
Transform881 := TTransformNode.Create;
Transform881.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape882 := TShapeNode.Create;
Shape882 := Shape50;
{ .AddChild }
Transform881.AddChildren([Shape882]);
{ .AddChildren }
HAnimSegment876.AddChildren([Transform881]);
HAnimSite883 := THAnimSiteNode.Create;
HAnimSite883.NameField := 'l_carpal_distal_phalanx_4_tip';
HAnimSite883.Translation := Vector3(0.2035,0.675,-0.0756);
Shape884 := TShapeNode.Create;
Shape884 := Shape57;
{ .AddChildren }
HAnimSite883.AddChildren([Shape884]);
{ .AddChildren }
HAnimSegment876.AddChildren([HAnimSite883]);
{ .AddChildren }
HAnimJoint875.AddChildren([HAnimSegment876]);
{ .AddChildren }
HAnimJoint867.AddChildren([HAnimJoint875]);
{ .AddChildren }
HAnimJoint859.AddChildren([HAnimJoint867]);
{ .AddChildren }
HAnimJoint851.AddChildren([HAnimJoint859]);
{ .AddChildren }
HAnimJoint741.AddChildren([HAnimJoint851]);
HAnimJoint885 := THAnimJointNode.Create;
HAnimJoint885.NameField := 'l_carpometacarpal_5';
HAnimJoint885.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint885.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint885.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment886 := THAnimSegmentNode.Create;
HAnimSegment886.NameField := 'l_metacarpal_5';
Shape887 := TShapeNode.Create;
Appearance888 := TAppearanceNode.Create;
Appearance888 := Appearance64;
{ .SetAppearance }
Shape887.Appearance := Appearance888;
IndexedLineSet889 := TIndexedLineSetNode.Create;
IndexedLineSet889.SetCoordIndex([0,1,-1]);
Coordinate890 := TCoordinateNode.Create;
Coordinate890.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
IndexedLineSet889.Coord := Coordinate890;
{ .SetGeometry }
Shape887.Geometry := IndexedLineSet889;
{ .AddChildren }
HAnimSegment886.AddChildren([Shape887]);
Transform891 := TTransformNode.Create;
Transform891.Translation := Vector3(0.1925,0.8066,-0.1036);
Shape892 := TShapeNode.Create;
Shape892 := Shape50;
{ .AddChild }
Transform891.AddChildren([Shape892]);
{ .AddChildren }
HAnimSegment886.AddChildren([Transform891]);
{ .AddChildren }
HAnimJoint885.AddChildren([HAnimSegment886]);
HAnimJoint893 := THAnimJointNode.Create;
HAnimJoint893.NameField := 'l_metacarpophalangeal_5';
HAnimJoint893.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint893.SetSkinCoordIndex([160,161,162]);
HAnimJoint893.SetSkinCoordWeight([1,1,1]);
HAnimSegment894 := THAnimSegmentNode.Create;
HAnimSegment894.NameField := 'l_carpal_proximal_phalanx_5';
Shape895 := TShapeNode.Create;
Appearance896 := TAppearanceNode.Create;
Appearance896 := Appearance64;
{ .SetAppearance }
Shape895.Appearance := Appearance896;
IndexedLineSet897 := TIndexedLineSetNode.Create;
IndexedLineSet897.SetCoordIndex([0,1,-1]);
Coordinate898 := TCoordinateNode.Create;
Coordinate898.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
IndexedLineSet897.Coord := Coordinate898;
{ .SetGeometry }
Shape895.Geometry := IndexedLineSet897;
{ .AddChildren }
HAnimSegment894.AddChildren([Shape895]);
Transform899 := TTransformNode.Create;
Transform899.Translation := Vector3(0.1925,0.7866,-0.1036);
Shape900 := TShapeNode.Create;
Shape900 := Shape50;
{ .AddChild }
Transform899.AddChildren([Shape900]);
{ .AddChildren }
HAnimSegment894.AddChildren([Transform899]);
{ .AddChildren }
HAnimJoint893.AddChildren([HAnimSegment894]);
HAnimJoint901 := THAnimJointNode.Create;
HAnimJoint901.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint901.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint901.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint901.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment902 := THAnimSegmentNode.Create;
HAnimSegment902.NameField := 'l_carpal_middle_phalanx_5';
Transform903 := TTransformNode.Create;
Transform903.Translation := Vector3(0.1938,0.7452,-0.1024);
Shape904 := TShapeNode.Create;
Shape904 := Shape50;
{ .AddChild }
Transform903.AddChildren([Shape904]);
{ .AddChildren }
HAnimSegment902.AddChildren([Transform903]);
Shape905 := TShapeNode.Create;
Appearance906 := TAppearanceNode.Create;
Appearance906 := Appearance64;
{ .SetAppearance }
Shape905.Appearance := Appearance906;
IndexedLineSet907 := TIndexedLineSetNode.Create;
IndexedLineSet907.SetCoordIndex([0,1,-1]);
Coordinate908 := TCoordinateNode.Create;
Coordinate908.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
IndexedLineSet907.Coord := Coordinate908;
{ .SetGeometry }
Shape905.Geometry := IndexedLineSet907;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape905]);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimSegment902]);
HAnimJoint909 := THAnimJointNode.Create;
HAnimJoint909.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint909.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint909.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint909.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment910 := THAnimSegmentNode.Create;
HAnimSegment910.NameField := 'l_carpal_distal_phalanx_5';
Shape911 := TShapeNode.Create;
Appearance912 := TAppearanceNode.Create;
Appearance912 := Appearance64;
{ .SetAppearance }
Shape911.Appearance := Appearance912;
IndexedLineSet913 := TIndexedLineSetNode.Create;
IndexedLineSet913.SetCoordIndex([0,1,-1]);
Coordinate914 := TCoordinateNode.Create;
Coordinate914.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ .SetCoord }
IndexedLineSet913.Coord := Coordinate914;
{ .SetGeometry }
Shape911.Geometry := IndexedLineSet913;
{ .AddChildren }
HAnimSegment910.AddChildren([Shape911]);
Transform915 := TTransformNode.Create;
Transform915.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape916 := TShapeNode.Create;
Shape916 := Shape50;
{ .AddChild }
Transform915.AddChildren([Shape916]);
{ .AddChildren }
HAnimSegment910.AddChildren([Transform915]);
HAnimSite917 := THAnimSiteNode.Create;
HAnimSite917.NameField := 'l_carpal_distal_phalanx_5_tip';
HAnimSite917.Translation := Vector3(0.2014,0.7009,-0.1012);
Shape918 := TShapeNode.Create;
Shape918 := Shape57;
{ .AddChildren }
HAnimSite917.AddChildren([Shape918]);
{ .AddChildren }
HAnimSegment910.AddChildren([HAnimSite917]);
{ .AddChildren }
HAnimJoint909.AddChildren([HAnimSegment910]);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint909]);
{ .AddChildren }
HAnimJoint893.AddChildren([HAnimJoint901]);
{ .AddChildren }
HAnimJoint885.AddChildren([HAnimJoint893]);
{ .AddChildren }
HAnimJoint741.AddChildren([HAnimJoint885]);
{ .AddChildren }
HAnimJoint719.AddChildren([HAnimJoint741]);
{ .AddChildren }
HAnimJoint695.AddChildren([HAnimJoint719]);
{ .AddChildren }
HAnimJoint679.AddChildren([HAnimJoint695]);
{ .AddChildren }
HAnimJoint669.AddChildren([HAnimJoint679]);
{ .AddChildren }
HAnimJoint553.AddChildren([HAnimJoint669]);
HAnimJoint919 := THAnimJointNode.Create;
HAnimJoint919.NameField := 'r_sternoclavicular';
HAnimJoint919.Center := Vector3(-0.03,1.46,0);
HAnimJoint919.SetSkinCoordIndex([10]);
HAnimJoint919.SetSkinCoordWeight([1]);
HAnimSegment920 := THAnimSegmentNode.Create;
HAnimSegment920.NameField := 'r_clavicle';
Shape921 := TShapeNode.Create;
Appearance922 := TAppearanceNode.Create;
Appearance922 := Appearance64;
{ .SetAppearance }
Shape921.Appearance := Appearance922;
IndexedLineSet923 := TIndexedLineSetNode.Create;
IndexedLineSet923.SetCoordIndex([0,1,-1]);
Coordinate924 := TCoordinateNode.Create;
Coordinate924.SetPoint([Vector3(-0.03,1.46,0.02),Vector3(-0.09,1.41,-0.09)]);
{ .SetCoord }
IndexedLineSet923.Coord := Coordinate924;
{ .SetGeometry }
Shape921.Geometry := IndexedLineSet923;
{ .AddChildren }
HAnimSegment920.AddChildren([Shape921]);
Transform925 := TTransformNode.Create;
Transform925.Translation := Vector3(-0.03,1.46,0.02);
Shape926 := TShapeNode.Create;
Shape926 := Shape50;
{ .AddChild }
Transform925.AddChildren([Shape926]);
{ .AddChildren }
HAnimSegment920.AddChildren([Transform925]);
HAnimSite927 := THAnimSiteNode.Create;
HAnimSite927.NameField := 'r_clavicle_pt';
HAnimSite927.Translation := Vector3(-0.03,1.46,0.035);
Shape928 := TShapeNode.Create;
Shape928 := Shape57;
{ .AddChildren }
HAnimSite927.AddChildren([Shape928]);
{ .AddChildren }
HAnimSegment920.AddChildren([HAnimSite927]);
{ .AddChildren }
HAnimJoint919.AddChildren([HAnimSegment920]);
HAnimJoint929 := THAnimJointNode.Create;
HAnimJoint929.NameField := 'r_acromioclavicular';
HAnimJoint929.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint929.SetSkinCoordIndex([77,29]);
HAnimJoint929.SetSkinCoordWeight([1,0.9]);
HAnimSegment930 := THAnimSegmentNode.Create;
HAnimSegment930.NameField := 'r_scapula';
Shape931 := TShapeNode.Create;
Appearance932 := TAppearanceNode.Create;
Appearance932 := Appearance64;
{ .SetAppearance }
Shape931.Appearance := Appearance932;
IndexedLineSet933 := TIndexedLineSetNode.Create;
IndexedLineSet933.SetCoordIndex([0,1,-1]);
Coordinate934 := TCoordinateNode.Create;
Coordinate934.SetPoint([Vector3(-0.09,1.41,-0.09),Vector3(-0.2,1.44,-0.04)]);
{ .SetCoord }
IndexedLineSet933.Coord := Coordinate934;
{ .SetGeometry }
Shape931.Geometry := IndexedLineSet933;
{ .AddChildren }
HAnimSegment930.AddChildren([Shape931]);
Transform935 := TTransformNode.Create;
Transform935.Translation := Vector3(-0.09,1.41,-0.09);
Shape936 := TShapeNode.Create;
Shape936 := Shape50;
{ .AddChild }
Transform935.AddChildren([Shape936]);
{ .AddChildren }
HAnimSegment930.AddChildren([Transform935]);
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(-0.11,1.427,-0.1375);
Shape938 := TShapeNode.Create;
Shape938 := Shape69;
{ .AddChild }
Transform937.AddChildren([Shape938]);
{ .AddChildren }
HAnimSegment930.AddChildren([Transform937]);
HAnimSite939 := THAnimSiteNode.Create;
HAnimSite939.NameField := 'r_acromion_pt';
HAnimSite939.Translation := Vector3(-0.178,1.4825,-0.0625);
Shape940 := TShapeNode.Create;
Shape940 := Shape57;
{ .AddChildren }
HAnimSite939.AddChildren([Shape940]);
{ .AddChildren }
HAnimSegment930.AddChildren([HAnimSite939]);
HAnimSite941 := THAnimSiteNode.Create;
HAnimSite941.NameField := 'r_axilla_proximal_pt';
HAnimSite941.Translation := Vector3(-0.17,1.38,0.007);
Shape942 := TShapeNode.Create;
Shape942 := Shape57;
{ .AddChildren }
HAnimSite941.AddChildren([Shape942]);
{ .AddChildren }
HAnimSegment930.AddChildren([HAnimSite941]);
HAnimSite943 := THAnimSiteNode.Create;
HAnimSite943.NameField := 'r_axilla_distal_pt';
HAnimSite943.Translation := Vector3(-0.16,1.38,-0.127);
Shape944 := TShapeNode.Create;
Shape944 := Shape57;
{ .AddChildren }
HAnimSite943.AddChildren([Shape944]);
{ .AddChildren }
HAnimSegment930.AddChildren([HAnimSite943]);
{ .AddChildren }
HAnimJoint929.AddChildren([HAnimSegment930]);
HAnimJoint945 := THAnimJointNode.Create;
HAnimJoint945.NameField := 'r_shoulder';
HAnimJoint945.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint945.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint945.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment946 := THAnimSegmentNode.Create;
HAnimSegment946.NameField := 'r_upperarm';
Transform947 := TTransformNode.Create;
Transform947.Translation := Vector3(-0.2,1.44,-0.04);
Shape948 := TShapeNode.Create;
Shape948 := Shape50;
{ .AddChild }
Transform947.AddChildren([Shape948]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform947]);
Shape949 := TShapeNode.Create;
Appearance950 := TAppearanceNode.Create;
Appearance950 := Appearance64;
{ .SetAppearance }
Shape949.Appearance := Appearance950;
IndexedLineSet951 := TIndexedLineSetNode.Create;
IndexedLineSet951.SetCoordIndex([0,1,-1]);
Coordinate952 := TCoordinateNode.Create;
Coordinate952.SetPoint([Vector3(-0.2,1.44,-0.04),Vector3(-0.2,1.1388,-0.04)]);
{ .SetCoord }
IndexedLineSet951.Coord := Coordinate952;
{ .SetGeometry }
Shape949.Geometry := IndexedLineSet951;
{ .AddChildren }
HAnimSegment946.AddChildren([Shape949]);
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(-0.178,1.4825,-0.0625);
Shape954 := TShapeNode.Create;
Shape954 := Shape69;
{ .AddChild }
Transform953.AddChildren([Shape954]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform953]);
Transform955 := TTransformNode.Create;
Transform955.Translation := Vector3(-0.17,1.38,0.007);
Shape956 := TShapeNode.Create;
Shape956 := Shape69;
{ .AddChild }
Transform955.AddChildren([Shape956]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform955]);
Transform957 := TTransformNode.Create;
Transform957.Translation := Vector3(-0.16,1.38,-0.127);
Shape958 := TShapeNode.Create;
Shape958 := Shape69;
{ .AddChild }
Transform957.AddChildren([Shape958]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform957]);
Transform959 := TTransformNode.Create;
Transform959.Translation := Vector3(-0.235,1.42,-0.0625);
Shape960 := TShapeNode.Create;
Shape960 := Shape69;
{ .AddChild }
Transform959.AddChildren([Shape960]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform959]);
Transform961 := TTransformNode.Create;
Transform961.Translation := Vector3(-0.23,1.235,-0.04);
Shape962 := TShapeNode.Create;
Shape962 := Shape69;
{ .AddChild }
Transform961.AddChildren([Shape962]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform961]);
Transform963 := TTransformNode.Create;
Transform963.Translation := Vector3(-0.16,1.23,-0.04);
Shape964 := TShapeNode.Create;
Shape964 := Shape69;
{ .AddChild }
Transform963.AddChildren([Shape964]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform963]);
Transform965 := TTransformNode.Create;
Transform965.Translation := Vector3(-0.2,1.23,-0.105);
Shape966 := TShapeNode.Create;
Shape966 := Shape69;
{ .AddChild }
Transform965.AddChildren([Shape966]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform965]);
Transform967 := TTransformNode.Create;
Transform967.Translation := Vector3(-0.2,1.235,0.02);
Shape968 := TShapeNode.Create;
Shape968 := Shape69;
{ .AddChild }
Transform967.AddChildren([Shape968]);
{ .AddChildren }
HAnimSegment946.AddChildren([Transform967]);
HAnimSite969 := THAnimSiteNode.Create;
HAnimSite969.NameField := 'r_humeral_medial_epicondyle_pt';
HAnimSite969.Translation := Vector3(-0.165,1.1388,-0.04);
Shape970 := TShapeNode.Create;
Shape970 := Shape57;
{ .AddChildren }
HAnimSite969.AddChildren([Shape970]);
{ .AddChildren }
HAnimSegment946.AddChildren([HAnimSite969]);
HAnimSite971 := THAnimSiteNode.Create;
HAnimSite971.NameField := 'r_radiale_pt';
HAnimSite971.Translation := Vector3(-0.23,1.133,-0.055);
Shape972 := TShapeNode.Create;
Shape972 := Shape57;
{ .AddChildren }
HAnimSite971.AddChildren([Shape972]);
{ .AddChildren }
HAnimSegment946.AddChildren([HAnimSite971]);
HAnimSite973 := THAnimSiteNode.Create;
HAnimSite973.NameField := 'r_humeral_lateral_epicondyle_pt';
HAnimSite973.Translation := Vector3(-0.244,1.1388,-0.04);
Shape974 := TShapeNode.Create;
Shape974 := Shape57;
{ .AddChildren }
HAnimSite973.AddChildren([Shape974]);
{ .AddChildren }
HAnimSegment946.AddChildren([HAnimSite973]);
{ .AddChildren }
HAnimJoint945.AddChildren([HAnimSegment946]);
HAnimJoint975 := THAnimJointNode.Create;
HAnimJoint975.NameField := 'r_elbow';
HAnimJoint975.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint975.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint975.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment976 := THAnimSegmentNode.Create;
HAnimSegment976.NameField := 'r_forearm';
Shape977 := TShapeNode.Create;
Appearance978 := TAppearanceNode.Create;
Appearance978 := Appearance64;
{ .SetAppearance }
Shape977.Appearance := Appearance978;
IndexedLineSet979 := TIndexedLineSetNode.Create;
IndexedLineSet979.SetCoordIndex([0,1,-1]);
Coordinate980 := TCoordinateNode.Create;
Coordinate980.SetPoint([Vector3(-0.2,1.1388,-0.04),Vector3(-0.2,0.89,-0.04)]);
{ .SetCoord }
IndexedLineSet979.Coord := Coordinate980;
{ .SetGeometry }
Shape977.Geometry := IndexedLineSet979;
{ .AddChildren }
HAnimSegment976.AddChildren([Shape977]);
Transform981 := TTransformNode.Create;
Transform981.Translation := Vector3(-0.2,1.1388,-0.04);
Shape982 := TShapeNode.Create;
Shape982 := Shape50;
{ .AddChild }
Transform981.AddChildren([Shape982]);
{ .AddChildren }
HAnimSegment976.AddChildren([Transform981]);
Transform983 := TTransformNode.Create;
Transform983.Translation := Vector3(-0.2,1.1388,0.013);
Shape984 := TShapeNode.Create;
Shape984 := Shape69;
{ .AddChild }
Transform983.AddChildren([Shape984]);
{ .AddChildren }
HAnimSegment976.AddChildren([Transform983]);
Transform985 := TTransformNode.Create;
Transform985.Translation := Vector3(-0.225,1,-0.01);
Shape986 := TShapeNode.Create;
Shape986 := Shape69;
{ .AddChild }
Transform985.AddChildren([Shape986]);
{ .AddChildren }
HAnimSegment976.AddChildren([Transform985]);
Transform987 := TTransformNode.Create;
Transform987.Translation := Vector3(-0.225,1,-0.07);
Shape988 := TShapeNode.Create;
Shape988 := Shape69;
{ .AddChild }
Transform987.AddChildren([Shape988]);
{ .AddChildren }
HAnimSegment976.AddChildren([Transform987]);
Transform989 := TTransformNode.Create;
Transform989.Translation := Vector3(-0.185,1,-0.01);
Shape990 := TShapeNode.Create;
Shape990 := Shape69;
{ .AddChild }
Transform989.AddChildren([Shape990]);
{ .AddChildren }
HAnimSegment976.AddChildren([Transform989]);
Transform991 := TTransformNode.Create;
Transform991.Translation := Vector3(-0.185,1,-0.07);
Shape992 := TShapeNode.Create;
Shape992 := Shape69;
{ .AddChild }
Transform991.AddChildren([Shape992]);
{ .AddChildren }
HAnimSegment976.AddChildren([Transform991]);
HAnimSite993 := THAnimSiteNode.Create;
HAnimSite993.NameField := 'r_radial_styloid_pt';
HAnimSite993.Translation := Vector3(-0.2,0.9,-0.015);
Shape994 := TShapeNode.Create;
Shape994 := Shape57;
{ .AddChildren }
HAnimSite993.AddChildren([Shape994]);
{ .AddChildren }
HAnimSegment976.AddChildren([HAnimSite993]);
HAnimSite995 := THAnimSiteNode.Create;
HAnimSite995.NameField := 'r_olecranon_pt';
HAnimSite995.Translation := Vector3(-0.2,1.1388,-0.08);
Shape996 := TShapeNode.Create;
Shape996 := Shape57;
{ .AddChildren }
HAnimSite995.AddChildren([Shape996]);
{ .AddChildren }
HAnimSegment976.AddChildren([HAnimSite995]);
{ .AddChildren }
HAnimJoint975.AddChildren([HAnimSegment976]);
HAnimJoint997 := THAnimJointNode.Create;
HAnimJoint997.NameField := 'r_radiocarpal';
HAnimJoint997.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint997.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint997.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment998 := THAnimSegmentNode.Create;
HAnimSegment998.NameField := 'r_carpal';
Shape999 := TShapeNode.Create;
Appearance1000 := TAppearanceNode.Create;
Appearance1000 := Appearance64;
{ .SetAppearance }
Shape999.Appearance := Appearance1000;
IndexedLineSet1001 := TIndexedLineSetNode.Create;
IndexedLineSet1001.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate1002 := TCoordinateNode.Create;
Coordinate1002.SetPoint([Vector3(-0.2,0.89,-0.04),Vector3(-0.2,0.85,0),Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.84,-0.085)]);
{ .SetCoord }
IndexedLineSet1001.Coord := Coordinate1002;
{ .SetGeometry }
Shape999.Geometry := IndexedLineSet1001;
{ .AddChildren }
HAnimSegment998.AddChildren([Shape999]);
Transform1003 := TTransformNode.Create;
Transform1003.Translation := Vector3(-0.2,0.89,-0.04);
Shape1004 := TShapeNode.Create;
Shape1004 := Shape50;
{ .AddChild }
Transform1003.AddChildren([Shape1004]);
{ .AddChildren }
HAnimSegment998.AddChildren([Transform1003]);
HAnimSite1005 := THAnimSiteNode.Create;
HAnimSite1005.NameField := 'r_ulnar_styloid_pt';
HAnimSite1005.Translation := Vector3(-0.2,0.9,-0.085);
Shape1006 := TShapeNode.Create;
Shape1006 := Shape57;
{ .AddChildren }
HAnimSite1005.AddChildren([Shape1006]);
{ .AddChildren }
HAnimSegment998.AddChildren([HAnimSite1005]);
{ .AddChildren }
HAnimJoint997.AddChildren([HAnimSegment998]);
HAnimJoint1007 := THAnimJointNode.Create;
HAnimJoint1007.NameField := 'r_carpometacarpal_1';
HAnimJoint1007.Center := Vector3(-0.2,0.85,0);
HAnimJoint1007.SetSkinCoordIndex([243,244]);
HAnimJoint1007.SetSkinCoordWeight([1,1]);
HAnimSegment1008 := THAnimSegmentNode.Create;
HAnimSegment1008.NameField := 'r_metacarpal_1';
Shape1009 := TShapeNode.Create;
Appearance1010 := TAppearanceNode.Create;
Appearance1010 := Appearance64;
{ .SetAppearance }
Shape1009.Appearance := Appearance1010;
IndexedLineSet1011 := TIndexedLineSetNode.Create;
IndexedLineSet1011.SetCoordIndex([0,1,-1]);
Coordinate1012 := TCoordinateNode.Create;
Coordinate1012.SetPoint([Vector3(-0.2,0.85,0),Vector3(-0.2,0.82,0.03)]);
{ .SetCoord }
IndexedLineSet1011.Coord := Coordinate1012;
{ .SetGeometry }
Shape1009.Geometry := IndexedLineSet1011;
{ .AddChildren }
HAnimSegment1008.AddChildren([Shape1009]);
Transform1013 := TTransformNode.Create;
Transform1013.Translation := Vector3(-0.2,0.85,0);
Shape1014 := TShapeNode.Create;
Shape1014 := Shape50;
{ .AddChild }
Transform1013.AddChildren([Shape1014]);
{ .AddChildren }
HAnimSegment1008.AddChildren([Transform1013]);
{ .AddChildren }
HAnimJoint1007.AddChildren([HAnimSegment1008]);
HAnimJoint1015 := THAnimJointNode.Create;
HAnimJoint1015.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1015.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint1015.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint1015.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment1016 := THAnimSegmentNode.Create;
HAnimSegment1016.NameField := 'r_carpal_proximal_phalanx_1';
Shape1017 := TShapeNode.Create;
Appearance1018 := TAppearanceNode.Create;
Appearance1018 := Appearance64;
{ .SetAppearance }
Shape1017.Appearance := Appearance1018;
IndexedLineSet1019 := TIndexedLineSetNode.Create;
IndexedLineSet1019.SetCoordIndex([0,1,-1]);
Coordinate1020 := TCoordinateNode.Create;
Coordinate1020.SetPoint([Vector3(-0.2,0.82,0.03),Vector3(-0.2,0.8,0.05)]);
{ .SetCoord }
IndexedLineSet1019.Coord := Coordinate1020;
{ .SetGeometry }
Shape1017.Geometry := IndexedLineSet1019;
{ .AddChildren }
HAnimSegment1016.AddChildren([Shape1017]);
Transform1021 := TTransformNode.Create;
Transform1021.Translation := Vector3(-0.2,0.82,0.03);
Shape1022 := TShapeNode.Create;
Shape1022 := Shape50;
{ .AddChild }
Transform1021.AddChildren([Shape1022]);
{ .AddChildren }
HAnimSegment1016.AddChildren([Transform1021]);
{ .AddChildren }
HAnimJoint1015.AddChildren([HAnimSegment1016]);
HAnimJoint1023 := THAnimJointNode.Create;
HAnimJoint1023.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1023.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint1023.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint1023.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1024 := THAnimSegmentNode.Create;
HAnimSegment1024.NameField := 'r_carpal_distal_phalanx_1';
Shape1025 := TShapeNode.Create;
Appearance1026 := TAppearanceNode.Create;
Appearance1026 := Appearance64;
{ .SetAppearance }
Shape1025.Appearance := Appearance1026;
IndexedLineSet1027 := TIndexedLineSetNode.Create;
IndexedLineSet1027.SetCoordIndex([0,1,-1]);
Coordinate1028 := TCoordinateNode.Create;
Coordinate1028.SetPoint([Vector3(-0.2,0.8,0.05),Vector3(-0.2,0.78,0.07)]);
{ .SetCoord }
IndexedLineSet1027.Coord := Coordinate1028;
{ .SetGeometry }
Shape1025.Geometry := IndexedLineSet1027;
{ .AddChildren }
HAnimSegment1024.AddChildren([Shape1025]);
Transform1029 := TTransformNode.Create;
Transform1029.Translation := Vector3(-0.2,0.785,0.075);
Shape1030 := TShapeNode.Create;
Shape1030 := Shape69;
{ .AddChild }
Transform1029.AddChildren([Shape1030]);
{ .AddChildren }
HAnimSegment1024.AddChildren([Transform1029]);
Transform1031 := TTransformNode.Create;
Transform1031.Translation := Vector3(-0.2,0.8,0.05);
Shape1032 := TShapeNode.Create;
Shape1032 := Shape50;
{ .AddChild }
Transform1031.AddChildren([Shape1032]);
{ .AddChildren }
HAnimSegment1024.AddChildren([Transform1031]);
HAnimSite1033 := THAnimSiteNode.Create;
HAnimSite1033.NameField := 'r_carpal_distal_phalanx_1_tip';
HAnimSite1033.Translation := Vector3(-0.2,0.78,0.07);
Shape1034 := TShapeNode.Create;
Shape1034 := Shape57;
{ .AddChildren }
HAnimSite1033.AddChildren([Shape1034]);
{ .AddChildren }
HAnimSegment1024.AddChildren([HAnimSite1033]);
{ .AddChildren }
HAnimJoint1023.AddChildren([HAnimSegment1024]);
{ .AddChildren }
HAnimJoint1015.AddChildren([HAnimJoint1023]);
{ .AddChildren }
HAnimJoint1007.AddChildren([HAnimJoint1015]);
{ .AddChildren }
HAnimJoint997.AddChildren([HAnimJoint1007]);
HAnimJoint1035 := THAnimJointNode.Create;
HAnimJoint1035.NameField := 'r_carpometacarpal_2';
HAnimJoint1035.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint1035.SetSkinCoordIndex([245,246]);
HAnimJoint1035.SetSkinCoordWeight([1,1]);
HAnimSegment1036 := THAnimSegmentNode.Create;
HAnimSegment1036.NameField := 'r_metacarpal_2';
Shape1037 := TShapeNode.Create;
Appearance1038 := TAppearanceNode.Create;
Appearance1038 := Appearance64;
{ .SetAppearance }
Shape1037.Appearance := Appearance1038;
IndexedLineSet1039 := TIndexedLineSetNode.Create;
IndexedLineSet1039.SetCoordIndex([0,1,-1]);
Coordinate1040 := TCoordinateNode.Create;
Coordinate1040.SetPoint([Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.793,-0.015)]);
{ .SetCoord }
IndexedLineSet1039.Coord := Coordinate1040;
{ .SetGeometry }
Shape1037.Geometry := IndexedLineSet1039;
{ .AddChildren }
HAnimSegment1036.AddChildren([Shape1037]);
Transform1041 := TTransformNode.Create;
Transform1041.Translation := Vector3(-0.2,0.84,-0.015);
Shape1042 := TShapeNode.Create;
Shape1042 := Shape50;
{ .AddChild }
Transform1041.AddChildren([Shape1042]);
{ .AddChildren }
HAnimSegment1036.AddChildren([Transform1041]);
HAnimSite1043 := THAnimSiteNode.Create;
HAnimSite1043.NameField := 'r_metacarpal_phalanx_2_pt';
HAnimSite1043.Translation := Vector3(-0.2,0.793,-0.005);
Shape1044 := TShapeNode.Create;
Shape1044 := Shape57;
{ .AddChildren }
HAnimSite1043.AddChildren([Shape1044]);
{ .AddChildren }
HAnimSegment1036.AddChildren([HAnimSite1043]);
{ .AddChildren }
HAnimJoint1035.AddChildren([HAnimSegment1036]);
HAnimJoint1045 := THAnimJointNode.Create;
HAnimJoint1045.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1045.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint1045.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint1045.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment1046 := THAnimSegmentNode.Create;
HAnimSegment1046.NameField := 'r_carpal_proximal_phalanx_2';
Shape1047 := TShapeNode.Create;
Appearance1048 := TAppearanceNode.Create;
Appearance1048 := Appearance64;
{ .SetAppearance }
Shape1047.Appearance := Appearance1048;
IndexedLineSet1049 := TIndexedLineSetNode.Create;
IndexedLineSet1049.SetCoordIndex([0,1,-1]);
Coordinate1050 := TCoordinateNode.Create;
Coordinate1050.SetPoint([Vector3(-0.2,0.793,-0.015),Vector3(-0.2,0.745,-0.015)]);
{ .SetCoord }
IndexedLineSet1049.Coord := Coordinate1050;
{ .SetGeometry }
Shape1047.Geometry := IndexedLineSet1049;
{ .AddChildren }
HAnimSegment1046.AddChildren([Shape1047]);
Transform1051 := TTransformNode.Create;
Transform1051.Translation := Vector3(-0.2,0.793,-0.015);
Shape1052 := TShapeNode.Create;
Shape1052 := Shape50;
{ .AddChild }
Transform1051.AddChildren([Shape1052]);
{ .AddChildren }
HAnimSegment1046.AddChildren([Transform1051]);
{ .AddChildren }
HAnimJoint1045.AddChildren([HAnimSegment1046]);
HAnimJoint1053 := THAnimJointNode.Create;
HAnimJoint1053.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1053.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint1053.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint1053.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1054 := THAnimSegmentNode.Create;
HAnimSegment1054.NameField := 'r_carpal_middle_phalanx_2';
Shape1055 := TShapeNode.Create;
Appearance1056 := TAppearanceNode.Create;
Appearance1056 := Appearance64;
{ .SetAppearance }
Shape1055.Appearance := Appearance1056;
IndexedLineSet1057 := TIndexedLineSetNode.Create;
IndexedLineSet1057.SetCoordIndex([0,1,-1]);
Coordinate1058 := TCoordinateNode.Create;
Coordinate1058.SetPoint([Vector3(-0.2,0.745,-0.015),Vector3(-0.2,0.72,-0.015)]);
{ .SetCoord }
IndexedLineSet1057.Coord := Coordinate1058;
{ .SetGeometry }
Shape1055.Geometry := IndexedLineSet1057;
{ .AddChildren }
HAnimSegment1054.AddChildren([Shape1055]);
Transform1059 := TTransformNode.Create;
Transform1059.Translation := Vector3(-0.2,0.745,-0.015);
Shape1060 := TShapeNode.Create;
Shape1060 := Shape50;
{ .AddChild }
Transform1059.AddChildren([Shape1060]);
{ .AddChildren }
HAnimSegment1054.AddChildren([Transform1059]);
{ .AddChildren }
HAnimJoint1053.AddChildren([HAnimSegment1054]);
HAnimJoint1061 := THAnimJointNode.Create;
HAnimJoint1061.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1061.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint1061.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint1061.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1062 := THAnimSegmentNode.Create;
HAnimSegment1062.NameField := 'r_carpal_distal_phalanx_2';
Shape1063 := TShapeNode.Create;
Appearance1064 := TAppearanceNode.Create;
Appearance1064 := Appearance64;
{ .SetAppearance }
Shape1063.Appearance := Appearance1064;
IndexedLineSet1065 := TIndexedLineSetNode.Create;
IndexedLineSet1065.SetCoordIndex([0,1,-1]);
Coordinate1066 := TCoordinateNode.Create;
Coordinate1066.SetPoint([Vector3(-0.2,0.72,-0.015),Vector3(-0.2,0.695,-0.015)]);
{ .SetCoord }
IndexedLineSet1065.Coord := Coordinate1066;
{ .SetGeometry }
Shape1063.Geometry := IndexedLineSet1065;
{ .AddChildren }
HAnimSegment1062.AddChildren([Shape1063]);
Transform1067 := TTransformNode.Create;
Transform1067.Translation := Vector3(-0.2,0.72,-0.015);
Shape1068 := TShapeNode.Create;
Shape1068 := Shape50;
{ .AddChild }
Transform1067.AddChildren([Shape1068]);
{ .AddChildren }
HAnimSegment1062.AddChildren([Transform1067]);
HAnimSite1069 := THAnimSiteNode.Create;
HAnimSite1069.NameField := 'r_carpal_distal_phalanx_2_tip';
HAnimSite1069.Translation := Vector3(-0.2,0.695,-0.015);
Shape1070 := TShapeNode.Create;
Shape1070 := Shape57;
{ .AddChildren }
HAnimSite1069.AddChildren([Shape1070]);
{ .AddChildren }
HAnimSegment1062.AddChildren([HAnimSite1069]);
{ .AddChildren }
HAnimJoint1061.AddChildren([HAnimSegment1062]);
{ .AddChildren }
HAnimJoint1053.AddChildren([HAnimJoint1061]);
{ .AddChildren }
HAnimJoint1045.AddChildren([HAnimJoint1053]);
{ .AddChildren }
HAnimJoint1035.AddChildren([HAnimJoint1045]);
{ .AddChildren }
HAnimJoint997.AddChildren([HAnimJoint1035]);
HAnimJoint1071 := THAnimJointNode.Create;
HAnimJoint1071.NameField := 'r_carpometacarpal_3';
HAnimJoint1071.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint1071.SetSkinCoordIndex([247,248]);
HAnimJoint1071.SetSkinCoordWeight([1,1]);
HAnimSegment1072 := THAnimSegmentNode.Create;
HAnimSegment1072.NameField := 'r_metacarpal_3';
Shape1073 := TShapeNode.Create;
Appearance1074 := TAppearanceNode.Create;
Appearance1074 := Appearance64;
{ .SetAppearance }
Shape1073.Appearance := Appearance1074;
IndexedLineSet1075 := TIndexedLineSetNode.Create;
IndexedLineSet1075.SetCoordIndex([0,1,-1]);
Coordinate1076 := TCoordinateNode.Create;
Coordinate1076.SetPoint([Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.788,-0.04)]);
{ .SetCoord }
IndexedLineSet1075.Coord := Coordinate1076;
{ .SetGeometry }
Shape1073.Geometry := IndexedLineSet1075;
{ .AddChildren }
HAnimSegment1072.AddChildren([Shape1073]);
Transform1077 := TTransformNode.Create;
Transform1077.Translation := Vector3(-0.2,0.835,-0.04);
Shape1078 := TShapeNode.Create;
Shape1078 := Shape50;
{ .AddChild }
Transform1077.AddChildren([Shape1078]);
{ .AddChildren }
HAnimSegment1072.AddChildren([Transform1077]);
{ .AddChildren }
HAnimJoint1071.AddChildren([HAnimSegment1072]);
HAnimJoint1079 := THAnimJointNode.Create;
HAnimJoint1079.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1079.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint1079.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint1079.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1080 := THAnimSegmentNode.Create;
HAnimSegment1080.NameField := 'r_carpal_proximal_phalanx_3';
Shape1081 := TShapeNode.Create;
Appearance1082 := TAppearanceNode.Create;
Appearance1082 := Appearance64;
{ .SetAppearance }
Shape1081.Appearance := Appearance1082;
IndexedLineSet1083 := TIndexedLineSetNode.Create;
IndexedLineSet1083.SetCoordIndex([0,1,-1]);
Coordinate1084 := TCoordinateNode.Create;
Coordinate1084.SetPoint([Vector3(-0.2,0.788,-0.04),Vector3(-0.2,0.74,-0.04)]);
{ .SetCoord }
IndexedLineSet1083.Coord := Coordinate1084;
{ .SetGeometry }
Shape1081.Geometry := IndexedLineSet1083;
{ .AddChildren }
HAnimSegment1080.AddChildren([Shape1081]);
Transform1085 := TTransformNode.Create;
Transform1085.Translation := Vector3(-0.2,0.788,-0.04);
Shape1086 := TShapeNode.Create;
Shape1086 := Shape50;
{ .AddChild }
Transform1085.AddChildren([Shape1086]);
{ .AddChildren }
HAnimSegment1080.AddChildren([Transform1085]);
{ .AddChildren }
HAnimJoint1079.AddChildren([HAnimSegment1080]);
HAnimJoint1087 := THAnimJointNode.Create;
HAnimJoint1087.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1087.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint1087.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint1087.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1088 := THAnimSegmentNode.Create;
HAnimSegment1088.NameField := 'r_carpal_middle_phalanx_3';
Shape1089 := TShapeNode.Create;
Appearance1090 := TAppearanceNode.Create;
Appearance1090 := Appearance64;
{ .SetAppearance }
Shape1089.Appearance := Appearance1090;
IndexedLineSet1091 := TIndexedLineSetNode.Create;
IndexedLineSet1091.SetCoordIndex([0,1,-1]);
Coordinate1092 := TCoordinateNode.Create;
Coordinate1092.SetPoint([Vector3(-0.2,0.74,-0.04),Vector3(-0.2,0.7142,-0.04)]);
{ .SetCoord }
IndexedLineSet1091.Coord := Coordinate1092;
{ .SetGeometry }
Shape1089.Geometry := IndexedLineSet1091;
{ .AddChildren }
HAnimSegment1088.AddChildren([Shape1089]);
Transform1093 := TTransformNode.Create;
Transform1093.Translation := Vector3(-0.2,0.74,-0.04);
Shape1094 := TShapeNode.Create;
Shape1094 := Shape50;
{ .AddChild }
Transform1093.AddChildren([Shape1094]);
{ .AddChildren }
HAnimSegment1088.AddChildren([Transform1093]);
{ .AddChildren }
HAnimJoint1087.AddChildren([HAnimSegment1088]);
HAnimJoint1095 := THAnimJointNode.Create;
HAnimJoint1095.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1095.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint1095.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint1095.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1096 := THAnimSegmentNode.Create;
HAnimSegment1096.NameField := 'r_carpal_distal_phalanx_3';
Shape1097 := TShapeNode.Create;
Appearance1098 := TAppearanceNode.Create;
Appearance1098 := Appearance64;
{ .SetAppearance }
Shape1097.Appearance := Appearance1098;
IndexedLineSet1099 := TIndexedLineSetNode.Create;
IndexedLineSet1099.SetCoordIndex([0,1,-1]);
Coordinate1100 := TCoordinateNode.Create;
Coordinate1100.SetPoint([Vector3(-0.2,0.7142,-0.04),Vector3(-0.2,0.6758,-0.04)]);
{ .SetCoord }
IndexedLineSet1099.Coord := Coordinate1100;
{ .SetGeometry }
Shape1097.Geometry := IndexedLineSet1099;
{ .AddChildren }
HAnimSegment1096.AddChildren([Shape1097]);
Transform1101 := TTransformNode.Create;
Transform1101.Translation := Vector3(-0.2,0.7142,-0.04);
Shape1102 := TShapeNode.Create;
Shape1102 := Shape50;
{ .AddChild }
Transform1101.AddChildren([Shape1102]);
{ .AddChildren }
HAnimSegment1096.AddChildren([Transform1101]);
HAnimSite1103 := THAnimSiteNode.Create;
HAnimSite1103.NameField := 'r_dactylion_pt';
HAnimSite1103.Translation := Vector3(-0.2,0.68,-0.04);
Shape1104 := TShapeNode.Create;
Shape1104 := Shape57;
{ .AddChildren }
HAnimSite1103.AddChildren([Shape1104]);
{ .AddChildren }
HAnimSegment1096.AddChildren([HAnimSite1103]);
HAnimSite1105 := THAnimSiteNode.Create;
HAnimSite1105.NameField := 'r_carpal_distal_phalanx_3_tip';
HAnimSite1105.Translation := Vector3(-0.2,0.68,-0.04);
Shape1106 := TShapeNode.Create;
Shape1106 := Shape57;
{ .AddChildren }
HAnimSite1105.AddChildren([Shape1106]);
{ .AddChildren }
HAnimSegment1096.AddChildren([HAnimSite1105]);
{ .AddChildren }
HAnimJoint1095.AddChildren([HAnimSegment1096]);
{ .AddChildren }
HAnimJoint1087.AddChildren([HAnimJoint1095]);
{ .AddChildren }
HAnimJoint1079.AddChildren([HAnimJoint1087]);
{ .AddChildren }
HAnimJoint1071.AddChildren([HAnimJoint1079]);
{ .AddChildren }
HAnimJoint997.AddChildren([HAnimJoint1071]);
HAnimJoint1107 := THAnimJointNode.Create;
HAnimJoint1107.NameField := 'r_carpometacarpal_4';
HAnimJoint1107.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint1107.SetSkinCoordIndex([249,250]);
HAnimJoint1107.SetSkinCoordWeight([1,1]);
HAnimSegment1108 := THAnimSegmentNode.Create;
HAnimSegment1108.NameField := 'r_metacarpal_4';
Shape1109 := TShapeNode.Create;
Appearance1110 := TAppearanceNode.Create;
Appearance1110 := Appearance64;
{ .SetAppearance }
Shape1109.Appearance := Appearance1110;
IndexedLineSet1111 := TIndexedLineSetNode.Create;
IndexedLineSet1111.SetCoordIndex([0,1,-1]);
Coordinate1112 := TCoordinateNode.Create;
Coordinate1112.SetPoint([Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.793,-0.065)]);
{ .SetCoord }
IndexedLineSet1111.Coord := Coordinate1112;
{ .SetGeometry }
Shape1109.Geometry := IndexedLineSet1111;
{ .AddChildren }
HAnimSegment1108.AddChildren([Shape1109]);
Transform1113 := TTransformNode.Create;
Transform1113.Translation := Vector3(-0.2,0.835,-0.065);
Shape1114 := TShapeNode.Create;
Shape1114 := Shape50;
{ .AddChild }
Transform1113.AddChildren([Shape1114]);
{ .AddChildren }
HAnimSegment1108.AddChildren([Transform1113]);
{ .AddChildren }
HAnimJoint1107.AddChildren([HAnimSegment1108]);
HAnimJoint1115 := THAnimJointNode.Create;
HAnimJoint1115.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1115.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint1115.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint1115.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1116 := THAnimSegmentNode.Create;
HAnimSegment1116.NameField := 'r_carpal_proximal_phalanx_4';
Shape1117 := TShapeNode.Create;
Appearance1118 := TAppearanceNode.Create;
Appearance1118 := Appearance64;
{ .SetAppearance }
Shape1117.Appearance := Appearance1118;
IndexedLineSet1119 := TIndexedLineSetNode.Create;
IndexedLineSet1119.SetCoordIndex([0,1,-1]);
Coordinate1120 := TCoordinateNode.Create;
Coordinate1120.SetPoint([Vector3(-0.2,0.793,-0.065),Vector3(-0.2,0.74,-0.065)]);
{ .SetCoord }
IndexedLineSet1119.Coord := Coordinate1120;
{ .SetGeometry }
Shape1117.Geometry := IndexedLineSet1119;
{ .AddChildren }
HAnimSegment1116.AddChildren([Shape1117]);
Transform1121 := TTransformNode.Create;
Transform1121.Translation := Vector3(-0.2,0.793,-0.065);
Shape1122 := TShapeNode.Create;
Shape1122 := Shape50;
{ .AddChild }
Transform1121.AddChildren([Shape1122]);
{ .AddChildren }
HAnimSegment1116.AddChildren([Transform1121]);
{ .AddChildren }
HAnimJoint1115.AddChildren([HAnimSegment1116]);
HAnimJoint1123 := THAnimJointNode.Create;
HAnimJoint1123.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1123.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint1123.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint1123.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1124 := THAnimSegmentNode.Create;
HAnimSegment1124.NameField := 'r_carpal_middle_phalanx_4';
Shape1125 := TShapeNode.Create;
Appearance1126 := TAppearanceNode.Create;
Appearance1126 := Appearance64;
{ .SetAppearance }
Shape1125.Appearance := Appearance1126;
IndexedLineSet1127 := TIndexedLineSetNode.Create;
IndexedLineSet1127.SetCoordIndex([0,1,-1]);
Coordinate1128 := TCoordinateNode.Create;
Coordinate1128.SetPoint([Vector3(-0.2,0.74,-0.065),Vector3(-0.2,0.7177,-0.065)]);
{ .SetCoord }
IndexedLineSet1127.Coord := Coordinate1128;
{ .SetGeometry }
Shape1125.Geometry := IndexedLineSet1127;
{ .AddChildren }
HAnimSegment1124.AddChildren([Shape1125]);
Transform1129 := TTransformNode.Create;
Transform1129.Translation := Vector3(-0.2,0.74,-0.065);
Shape1130 := TShapeNode.Create;
Shape1130 := Shape50;
{ .AddChild }
Transform1129.AddChildren([Shape1130]);
{ .AddChildren }
HAnimSegment1124.AddChildren([Transform1129]);
{ .AddChildren }
HAnimJoint1123.AddChildren([HAnimSegment1124]);
HAnimJoint1131 := THAnimJointNode.Create;
HAnimJoint1131.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1131.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint1131.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint1131.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1132 := THAnimSegmentNode.Create;
HAnimSegment1132.NameField := 'r_carpal_distal_phalanx_4';
Shape1133 := TShapeNode.Create;
Appearance1134 := TAppearanceNode.Create;
Appearance1134 := Appearance64;
{ .SetAppearance }
Shape1133.Appearance := Appearance1134;
IndexedLineSet1135 := TIndexedLineSetNode.Create;
IndexedLineSet1135.SetCoordIndex([0,1,-1]);
Coordinate1136 := TCoordinateNode.Create;
Coordinate1136.SetPoint([Vector3(-0.2,0.7177,-0.065),Vector3(-0.2,0.695,-0.065)]);
{ .SetCoord }
IndexedLineSet1135.Coord := Coordinate1136;
{ .SetGeometry }
Shape1133.Geometry := IndexedLineSet1135;
{ .AddChildren }
HAnimSegment1132.AddChildren([Shape1133]);
Transform1137 := TTransformNode.Create;
Transform1137.Translation := Vector3(-0.2,0.7177,-0.065);
Shape1138 := TShapeNode.Create;
Shape1138 := Shape50;
{ .AddChild }
Transform1137.AddChildren([Shape1138]);
{ .AddChildren }
HAnimSegment1132.AddChildren([Transform1137]);
HAnimSite1139 := THAnimSiteNode.Create;
HAnimSite1139.NameField := 'r_carpal_distal_phalanx_4_tip';
HAnimSite1139.Translation := Vector3(-0.2,0.695,-0.065);
Shape1140 := TShapeNode.Create;
Shape1140 := Shape57;
{ .AddChildren }
HAnimSite1139.AddChildren([Shape1140]);
{ .AddChildren }
HAnimSegment1132.AddChildren([HAnimSite1139]);
{ .AddChildren }
HAnimJoint1131.AddChildren([HAnimSegment1132]);
{ .AddChildren }
HAnimJoint1123.AddChildren([HAnimJoint1131]);
{ .AddChildren }
HAnimJoint1115.AddChildren([HAnimJoint1123]);
{ .AddChildren }
HAnimJoint1107.AddChildren([HAnimJoint1115]);
{ .AddChildren }
HAnimJoint997.AddChildren([HAnimJoint1107]);
HAnimJoint1141 := THAnimJointNode.Create;
HAnimJoint1141.NameField := 'r_carpometacarpal_5';
HAnimJoint1141.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint1141.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint1141.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment1142 := THAnimSegmentNode.Create;
HAnimSegment1142.NameField := 'r_metacarpal_5';
Shape1143 := TShapeNode.Create;
Appearance1144 := TAppearanceNode.Create;
Appearance1144 := Appearance64;
{ .SetAppearance }
Shape1143.Appearance := Appearance1144;
IndexedLineSet1145 := TIndexedLineSetNode.Create;
IndexedLineSet1145.SetCoordIndex([0,1,-1]);
Coordinate1146 := TCoordinateNode.Create;
Coordinate1146.SetPoint([Vector3(-0.2,0.84,-0.085),Vector3(-0.2,0.79,-0.085)]);
{ .SetCoord }
IndexedLineSet1145.Coord := Coordinate1146;
{ .SetGeometry }
Shape1143.Geometry := IndexedLineSet1145;
{ .AddChildren }
HAnimSegment1142.AddChildren([Shape1143]);
Transform1147 := TTransformNode.Create;
Transform1147.Translation := Vector3(-0.2,0.84,-0.085);
Shape1148 := TShapeNode.Create;
Shape1148 := Shape50;
{ .AddChild }
Transform1147.AddChildren([Shape1148]);
{ .AddChildren }
HAnimSegment1142.AddChildren([Transform1147]);
HAnimSite1149 := THAnimSiteNode.Create;
HAnimSite1149.NameField := 'r_metacarpal_phalanx_5_pt';
HAnimSite1149.Translation := Vector3(-0.2,0.79,-0.095);
Shape1150 := TShapeNode.Create;
Shape1150 := Shape57;
{ .AddChildren }
HAnimSite1149.AddChildren([Shape1150]);
{ .AddChildren }
HAnimSegment1142.AddChildren([HAnimSite1149]);
{ .AddChildren }
HAnimJoint1141.AddChildren([HAnimSegment1142]);
HAnimJoint1151 := THAnimJointNode.Create;
HAnimJoint1151.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1151.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint1151.SetSkinCoordIndex([276,277,278]);
HAnimJoint1151.SetSkinCoordWeight([1,1,1]);
HAnimSegment1152 := THAnimSegmentNode.Create;
HAnimSegment1152.NameField := 'r_carpal_proximal_phalanx_5';
Shape1153 := TShapeNode.Create;
Appearance1154 := TAppearanceNode.Create;
Appearance1154 := Appearance64;
{ .SetAppearance }
Shape1153.Appearance := Appearance1154;
IndexedLineSet1155 := TIndexedLineSetNode.Create;
IndexedLineSet1155.SetCoordIndex([0,1,-1]);
Coordinate1156 := TCoordinateNode.Create;
Coordinate1156.SetPoint([Vector3(-0.2,0.79,-0.085),Vector3(-0.2,0.755,-0.085)]);
{ .SetCoord }
IndexedLineSet1155.Coord := Coordinate1156;
{ .SetGeometry }
Shape1153.Geometry := IndexedLineSet1155;
{ .AddChildren }
HAnimSegment1152.AddChildren([Shape1153]);
Transform1157 := TTransformNode.Create;
Transform1157.Translation := Vector3(-0.2,0.79,-0.085);
Shape1158 := TShapeNode.Create;
Shape1158 := Shape50;
{ .AddChild }
Transform1157.AddChildren([Shape1158]);
{ .AddChildren }
HAnimSegment1152.AddChildren([Transform1157]);
{ .AddChildren }
HAnimJoint1151.AddChildren([HAnimSegment1152]);
HAnimJoint1159 := THAnimJointNode.Create;
HAnimJoint1159.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1159.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint1159.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint1159.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1160 := THAnimSegmentNode.Create;
HAnimSegment1160.NameField := 'r_carpal_middle_phalanx_5';
Shape1161 := TShapeNode.Create;
Appearance1162 := TAppearanceNode.Create;
Appearance1162 := Appearance64;
{ .SetAppearance }
Shape1161.Appearance := Appearance1162;
IndexedLineSet1163 := TIndexedLineSetNode.Create;
IndexedLineSet1163.SetCoordIndex([0,1,-1]);
Coordinate1164 := TCoordinateNode.Create;
Coordinate1164.SetPoint([Vector3(-0.2,0.755,-0.085),Vector3(-0.2,0.735,-0.085)]);
{ .SetCoord }
IndexedLineSet1163.Coord := Coordinate1164;
{ .SetGeometry }
Shape1161.Geometry := IndexedLineSet1163;
{ .AddChildren }
HAnimSegment1160.AddChildren([Shape1161]);
Transform1165 := TTransformNode.Create;
Transform1165.Translation := Vector3(-0.2,0.755,-0.085);
Shape1166 := TShapeNode.Create;
Shape1166 := Shape50;
{ .AddChild }
Transform1165.AddChildren([Shape1166]);
{ .AddChildren }
HAnimSegment1160.AddChildren([Transform1165]);
{ .AddChildren }
HAnimJoint1159.AddChildren([HAnimSegment1160]);
HAnimJoint1167 := THAnimJointNode.Create;
HAnimJoint1167.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1167.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint1167.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint1167.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1168 := THAnimSegmentNode.Create;
HAnimSegment1168.NameField := 'r_carpal_distal_phalanx_5';
Shape1169 := TShapeNode.Create;
Appearance1170 := TAppearanceNode.Create;
Appearance1170 := Appearance64;
{ .SetAppearance }
Shape1169.Appearance := Appearance1170;
IndexedLineSet1171 := TIndexedLineSetNode.Create;
IndexedLineSet1171.SetCoordIndex([0,1,-1]);
Coordinate1172 := TCoordinateNode.Create;
Coordinate1172.SetPoint([Vector3(-0.2,0.735,-0.085),Vector3(-0.2,0.72,-0.085)]);
{ .SetCoord }
IndexedLineSet1171.Coord := Coordinate1172;
{ .SetGeometry }
Shape1169.Geometry := IndexedLineSet1171;
{ .AddChildren }
HAnimSegment1168.AddChildren([Shape1169]);
Transform1173 := TTransformNode.Create;
Transform1173.Translation := Vector3(-0.2,0.735,-0.085);
Shape1174 := TShapeNode.Create;
Shape1174 := Shape50;
{ .AddChild }
Transform1173.AddChildren([Shape1174]);
{ .AddChildren }
HAnimSegment1168.AddChildren([Transform1173]);
HAnimSite1175 := THAnimSiteNode.Create;
HAnimSite1175.NameField := 'r_carpal_distal_phalanx_5_tip';
HAnimSite1175.Translation := Vector3(-0.2,0.72,-0.085);
Shape1176 := TShapeNode.Create;
Shape1176 := Shape57;
{ .AddChildren }
HAnimSite1175.AddChildren([Shape1176]);
{ .AddChildren }
HAnimSegment1168.AddChildren([HAnimSite1175]);
{ .AddChildren }
HAnimJoint1167.AddChildren([HAnimSegment1168]);
{ .AddChildren }
HAnimJoint1159.AddChildren([HAnimJoint1167]);
{ .AddChildren }
HAnimJoint1151.AddChildren([HAnimJoint1159]);
{ .AddChildren }
HAnimJoint1141.AddChildren([HAnimJoint1151]);
{ .AddChildren }
HAnimJoint997.AddChildren([HAnimJoint1141]);
{ .AddChildren }
HAnimJoint975.AddChildren([HAnimJoint997]);
{ .AddChildren }
HAnimJoint945.AddChildren([HAnimJoint975]);
{ .AddChildren }
HAnimJoint929.AddChildren([HAnimJoint945]);
{ .AddChildren }
HAnimJoint919.AddChildren([HAnimJoint929]);
{ .AddChildren }
HAnimJoint553.AddChildren([HAnimJoint919]);
{ .AddChildren }
HAnimJoint545.AddChildren([HAnimJoint553]);
{ .AddChildren }
HAnimJoint537.AddChildren([HAnimJoint545]);
{ .AddChildren }
HAnimJoint527.AddChildren([HAnimJoint537]);
{ .AddChildren }
HAnimJoint519.AddChildren([HAnimJoint527]);
{ .AddChildren }
HAnimJoint511.AddChildren([HAnimJoint519]);
{ .AddChildren }
HAnimJoint503.AddChildren([HAnimJoint511]);
{ .AddChildren }
HAnimJoint495.AddChildren([HAnimJoint503]);
{ .AddChildren }
HAnimJoint483.AddChildren([HAnimJoint495]);
{ .AddChildren }
HAnimJoint473.AddChildren([HAnimJoint483]);
{ .AddChildren }
HAnimJoint465.AddChildren([HAnimJoint473]);
{ .AddChildren }
HAnimJoint457.AddChildren([HAnimJoint465]);
{ .AddChildren }
HAnimJoint449.AddChildren([HAnimJoint457]);
{ .AddChildren }
HAnimJoint423.AddChildren([HAnimJoint449]);
{ .AddChildren }
HAnimJoint415.AddChildren([HAnimJoint423]);
{ .AddChildren }
HAnimJoint407.AddChildren([HAnimJoint415]);
{ .AddChildren }
HAnimJoint392.AddChildren([HAnimJoint407]);
{ .AddChildren }
HAnimJoint78.AddChildren([HAnimJoint392]);
{ .AddSkeleton }
HAnimHumanoid75.SetSkeleton([HAnimJoint78]);
Shape1177 := TShapeNode.Create;
Appearance1178 := TAppearanceNode.Create;
Material1179 := TMaterialNode.Create;
Material1179.AmbientIntensity := 0.6;
Material1179.DiffuseColor := Vector3(1,1,1);
Material1179.Shininess := 0.6;
Material1179.Transparency := 0.2;
{ .SetMaterial }
Appearance1178.Material := Material1179;
ImageTexture1180 := TImageTextureNode.Create;
ImageTexture1180.Description := 'Blue Spiral Pattern';
ImageTexture1180.SetUrl(['zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ .SetTexture }
Appearance1178.Texture := ImageTexture1180;
{ .SetAppearance }
Shape1177.Appearance := Appearance1178;
IndexedFaceSet1181 := TIndexedFaceSetNode.Create;
IndexedFaceSet1181.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1181.CreaseAngle := 3.1;
Color1182 := TColorNode.Create;
Color1182.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ .SetColor }
IndexedFaceSet1181.Color := Color1182;
Coordinate1183 := TCoordinateNode.Create;
Coordinate1183.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.0723,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetCoord }
IndexedFaceSet1181.Coord := Coordinate1183;
{ .SetGeometry }
Shape1177.Geometry := IndexedFaceSet1181;
{ .SetSkin }
HAnimHumanoid75.SetSkin([Shape1177]);
Coordinate1184 := TCoordinateNode.Create;
Coordinate1184 := Coordinate1183;
{ .SetSkinCoord }
HAnimHumanoid75.SetSkinCoord(Coordinate1184);
HAnimJoint1185 := THAnimJointNode.Create;
HAnimJoint1185 := HAnimJoint78;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1185;
HAnimJoint1186 := THAnimJointNode.Create;
HAnimJoint1186 := HAnimJoint90;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1186;
HAnimJoint1187 := THAnimJointNode.Create;
HAnimJoint1187 := HAnimJoint392;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1187;
HAnimJoint1188 := THAnimJointNode.Create;
HAnimJoint1188 := HAnimJoint407;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1188;
HAnimJoint1189 := THAnimJointNode.Create;
HAnimJoint1189 := HAnimJoint415;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1189;
HAnimJoint1190 := THAnimJointNode.Create;
HAnimJoint1190 := HAnimJoint423;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1190;
HAnimJoint1191 := THAnimJointNode.Create;
HAnimJoint1191 := HAnimJoint449;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1191;
HAnimJoint1192 := THAnimJointNode.Create;
HAnimJoint1192 := HAnimJoint457;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1192;
HAnimJoint1193 := THAnimJointNode.Create;
HAnimJoint1193 := HAnimJoint465;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1193;
HAnimJoint1194 := THAnimJointNode.Create;
HAnimJoint1194 := HAnimJoint473;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1194;
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195 := HAnimJoint483;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1195;
HAnimJoint1196 := THAnimJointNode.Create;
HAnimJoint1196 := HAnimJoint495;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1196;
HAnimJoint1197 := THAnimJointNode.Create;
HAnimJoint1197 := HAnimJoint503;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1197;
HAnimJoint1198 := THAnimJointNode.Create;
HAnimJoint1198 := HAnimJoint511;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1198;
HAnimJoint1199 := THAnimJointNode.Create;
HAnimJoint1199 := HAnimJoint519;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1199;
HAnimJoint1200 := THAnimJointNode.Create;
HAnimJoint1200 := HAnimJoint527;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1200;
HAnimJoint1201 := THAnimJointNode.Create;
HAnimJoint1201 := HAnimJoint537;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1201;
HAnimJoint1202 := THAnimJointNode.Create;
HAnimJoint1202 := HAnimJoint545;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1202;
HAnimJoint1203 := THAnimJointNode.Create;
HAnimJoint1203 := HAnimJoint553;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1203;
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204 := HAnimJoint565;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1204;
HAnimJoint1205 := THAnimJointNode.Create;
HAnimJoint1205 := HAnimJoint577;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1205;
HAnimJoint1206 := THAnimJointNode.Create;
HAnimJoint1206 := HAnimJoint585;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1206;
HAnimJoint1207 := THAnimJointNode.Create;
HAnimJoint1207 := HAnimJoint593;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1207;
HAnimJoint1208 := THAnimJointNode.Create;
HAnimJoint1208 := HAnimJoint601;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1208;
HAnimJoint1209 := THAnimJointNode.Create;
HAnimJoint1209 := HAnimJoint609;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1209;
HAnimJoint1210 := THAnimJointNode.Create;
HAnimJoint1210 := HAnimJoint617;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1210;
HAnimJoint1211 := THAnimJointNode.Create;
HAnimJoint1211 := HAnimJoint625;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1211;
HAnimJoint1212 := THAnimJointNode.Create;
HAnimJoint1212 := HAnimJoint679;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1212;
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213 := HAnimJoint929;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1213;
HAnimJoint1214 := THAnimJointNode.Create;
HAnimJoint1214 := HAnimJoint805;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1214;
HAnimJoint1215 := THAnimJointNode.Create;
HAnimJoint1215 := HAnimJoint1061;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1215;
HAnimJoint1216 := THAnimJointNode.Create;
HAnimJoint1216 := HAnimJoint841;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1216;
HAnimJoint1217 := THAnimJointNode.Create;
HAnimJoint1217 := HAnimJoint1095;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1217;
HAnimJoint1218 := THAnimJointNode.Create;
HAnimJoint1218 := HAnimJoint875;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1218;
HAnimJoint1219 := THAnimJointNode.Create;
HAnimJoint1219 := HAnimJoint1131;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1219;
HAnimJoint1220 := THAnimJointNode.Create;
HAnimJoint1220 := HAnimJoint909;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1220;
HAnimJoint1221 := THAnimJointNode.Create;
HAnimJoint1221 := HAnimJoint1167;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1221;
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222 := HAnimJoint771;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1222;
HAnimJoint1223 := THAnimJointNode.Create;
HAnimJoint1223 := HAnimJoint1023;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1223;
HAnimJoint1224 := THAnimJointNode.Create;
HAnimJoint1224 := HAnimJoint797;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1224;
HAnimJoint1225 := THAnimJointNode.Create;
HAnimJoint1225 := HAnimJoint1053;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1225;
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226 := HAnimJoint833;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1226;
HAnimJoint1227 := THAnimJointNode.Create;
HAnimJoint1227 := HAnimJoint1087;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1227;
HAnimJoint1228 := THAnimJointNode.Create;
HAnimJoint1228 := HAnimJoint867;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1228;
HAnimJoint1229 := THAnimJointNode.Create;
HAnimJoint1229 := HAnimJoint1123;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1229;
HAnimJoint1230 := THAnimJointNode.Create;
HAnimJoint1230 := HAnimJoint901;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1230;
HAnimJoint1231 := THAnimJointNode.Create;
HAnimJoint1231 := HAnimJoint1159;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1231;
HAnimJoint1232 := THAnimJointNode.Create;
HAnimJoint1232 := HAnimJoint755;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1232;
HAnimJoint1233 := THAnimJointNode.Create;
HAnimJoint1233 := HAnimJoint1007;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1233;
HAnimJoint1234 := THAnimJointNode.Create;
HAnimJoint1234 := HAnimJoint781;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1234;
HAnimJoint1235 := THAnimJointNode.Create;
HAnimJoint1235 := HAnimJoint1035;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1235;
HAnimJoint1236 := THAnimJointNode.Create;
HAnimJoint1236 := HAnimJoint817;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1236;
HAnimJoint1237 := THAnimJointNode.Create;
HAnimJoint1237 := HAnimJoint1071;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1237;
HAnimJoint1238 := THAnimJointNode.Create;
HAnimJoint1238 := HAnimJoint851;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1238;
HAnimJoint1239 := THAnimJointNode.Create;
HAnimJoint1239 := HAnimJoint1107;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1239;
HAnimJoint1240 := THAnimJointNode.Create;
HAnimJoint1240 := HAnimJoint885;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1240;
HAnimJoint1241 := THAnimJointNode.Create;
HAnimJoint1241 := HAnimJoint1141;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1241;
HAnimJoint1242 := THAnimJointNode.Create;
HAnimJoint1242 := HAnimJoint719;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1242;
HAnimJoint1243 := THAnimJointNode.Create;
HAnimJoint1243 := HAnimJoint975;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1243;
HAnimJoint1244 := THAnimJointNode.Create;
HAnimJoint1244 := HAnimJoint653;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1244;
HAnimJoint1245 := THAnimJointNode.Create;
HAnimJoint1245 := HAnimJoint661;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1245;
HAnimJoint1246 := THAnimJointNode.Create;
HAnimJoint1246 := HAnimJoint120;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1246;
HAnimJoint1247 := THAnimJointNode.Create;
HAnimJoint1247 := HAnimJoint256;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1247;
HAnimJoint1248 := THAnimJointNode.Create;
HAnimJoint1248 := HAnimJoint146;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1248;
HAnimJoint1249 := THAnimJointNode.Create;
HAnimJoint1249 := HAnimJoint282;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1249;
HAnimJoint1250 := THAnimJointNode.Create;
HAnimJoint1250 := HAnimJoint763;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1250;
HAnimJoint1251 := THAnimJointNode.Create;
HAnimJoint1251 := HAnimJoint1015;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1251;
HAnimJoint1252 := THAnimJointNode.Create;
HAnimJoint1252 := HAnimJoint789;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1252;
HAnimJoint1253 := THAnimJointNode.Create;
HAnimJoint1253 := HAnimJoint1045;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1253;
HAnimJoint1254 := THAnimJointNode.Create;
HAnimJoint1254 := HAnimJoint825;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1254;
HAnimJoint1255 := THAnimJointNode.Create;
HAnimJoint1255 := HAnimJoint1079;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1255;
HAnimJoint1256 := THAnimJointNode.Create;
HAnimJoint1256 := HAnimJoint859;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1256;
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257 := HAnimJoint1115;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1257;
HAnimJoint1258 := THAnimJointNode.Create;
HAnimJoint1258 := HAnimJoint893;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1258;
HAnimJoint1259 := THAnimJointNode.Create;
HAnimJoint1259 := HAnimJoint1151;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1259;
HAnimJoint1260 := THAnimJointNode.Create;
HAnimJoint1260 := HAnimJoint226;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1260;
HAnimJoint1261 := THAnimJointNode.Create;
HAnimJoint1261 := HAnimJoint208;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1261;
HAnimJoint1262 := THAnimJointNode.Create;
HAnimJoint1262 := HAnimJoint344;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1262;
HAnimJoint1263 := THAnimJointNode.Create;
HAnimJoint1263 := HAnimJoint741;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1263;
HAnimJoint1264 := THAnimJointNode.Create;
HAnimJoint1264 := HAnimJoint997;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1264;
HAnimJoint1265 := THAnimJointNode.Create;
HAnimJoint1265 := HAnimJoint695;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1265;
HAnimJoint1266 := THAnimJointNode.Create;
HAnimJoint1266 := HAnimJoint945;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1266;
HAnimJoint1267 := THAnimJointNode.Create;
HAnimJoint1267 := HAnimJoint669;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1267;
HAnimJoint1268 := THAnimJointNode.Create;
HAnimJoint1268 := HAnimJoint919;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1268;
HAnimJoint1269 := THAnimJointNode.Create;
HAnimJoint1269 := HAnimJoint174;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1269;
HAnimJoint1270 := THAnimJointNode.Create;
HAnimJoint1270 := HAnimJoint310;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1270;
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271 := HAnimJoint362;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1271;
HAnimJoint1272 := THAnimJointNode.Create;
HAnimJoint1272 := HAnimJoint194;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1272;
HAnimJoint1273 := THAnimJointNode.Create;
HAnimJoint1273 := HAnimJoint330;
{ .AddJoints }
HAnimHumanoid75.Joints := HAnimJoint1273;
HAnimSegment1274 := THAnimSegmentNode.Create;
HAnimSegment1274 := HAnimSegment618;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1274;
HAnimSegment1275 := THAnimSegmentNode.Create;
HAnimSegment1275 := HAnimSegment610;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1275;
HAnimSegment1276 := THAnimSegmentNode.Create;
HAnimSegment1276 := HAnimSegment602;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1276;
HAnimSegment1277 := THAnimSegmentNode.Create;
HAnimSegment1277 := HAnimSegment594;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1277;
HAnimSegment1278 := THAnimSegmentNode.Create;
HAnimSegment1278 := HAnimSegment586;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1278;
HAnimSegment1279 := THAnimSegmentNode.Create;
HAnimSegment1279 := HAnimSegment578;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1279;
HAnimSegment1280 := THAnimSegmentNode.Create;
HAnimSegment1280 := HAnimSegment566;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1280;
HAnimSegment1281 := THAnimSegmentNode.Create;
HAnimSegment1281 := HAnimSegment450;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1281;
HAnimSegment1282 := THAnimSegmentNode.Create;
HAnimSegment1282 := HAnimSegment424;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1282;
HAnimSegment1283 := THAnimSegmentNode.Create;
HAnimSegment1283 := HAnimSegment416;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1283;
HAnimSegment1284 := THAnimSegmentNode.Create;
HAnimSegment1284 := HAnimSegment408;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1284;
HAnimSegment1285 := THAnimSegmentNode.Create;
HAnimSegment1285 := HAnimSegment398;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1285;
HAnimSegment1286 := THAnimSegmentNode.Create;
HAnimSegment1286 := HAnimSegment91;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1286;
HAnimSegment1287 := THAnimSegmentNode.Create;
HAnimSegment1287 := HAnimSegment79;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1287;
HAnimSegment1288 := THAnimSegmentNode.Create;
HAnimSegment1288 := HAnimSegment626;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1288;
HAnimSegment1289 := THAnimSegmentNode.Create;
HAnimSegment1289 := HAnimSegment554;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1289;
HAnimSegment1290 := THAnimSegmentNode.Create;
HAnimSegment1290 := HAnimSegment474;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1290;
HAnimSegment1291 := THAnimSegmentNode.Create;
HAnimSegment1291 := HAnimSegment466;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1291;
HAnimSegment1292 := THAnimSegmentNode.Create;
HAnimSegment1292 := HAnimSegment458;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1292;
HAnimSegment1293 := THAnimSegmentNode.Create;
HAnimSegment1293 := HAnimSegment546;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1293;
HAnimSegment1294 := THAnimSegmentNode.Create;
HAnimSegment1294 := HAnimSegment538;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1294;
HAnimSegment1295 := THAnimSegmentNode.Create;
HAnimSegment1295 := HAnimSegment528;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1295;
HAnimSegment1296 := THAnimSegmentNode.Create;
HAnimSegment1296 := HAnimSegment520;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1296;
HAnimSegment1297 := THAnimSegmentNode.Create;
HAnimSegment1297 := HAnimSegment512;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1297;
HAnimSegment1298 := THAnimSegmentNode.Create;
HAnimSegment1298 := HAnimSegment504;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1298;
HAnimSegment1299 := THAnimSegmentNode.Create;
HAnimSegment1299 := HAnimSegment496;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1299;
HAnimSegment1300 := THAnimSegmentNode.Create;
HAnimSegment1300 := HAnimSegment484;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1300;
HAnimSegment1301 := THAnimSegmentNode.Create;
HAnimSegment1301 := HAnimSegment393;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1301;
HAnimSegment1302 := THAnimSegmentNode.Create;
HAnimSegment1302 := HAnimSegment147;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1302;
HAnimSegment1303 := THAnimSegmentNode.Create;
HAnimSegment1303 := HAnimSegment283;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1303;
HAnimSegment1304 := THAnimSegmentNode.Create;
HAnimSegment1304 := HAnimSegment742;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1304;
HAnimSegment1305 := THAnimSegmentNode.Create;
HAnimSegment1305 := HAnimSegment998;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1305;
HAnimSegment1306 := THAnimSegmentNode.Create;
HAnimSegment1306 := HAnimSegment772;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1306;
HAnimSegment1307 := THAnimSegmentNode.Create;
HAnimSegment1307 := HAnimSegment1024;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1307;
HAnimSegment1308 := THAnimSegmentNode.Create;
HAnimSegment1308 := HAnimSegment806;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1308;
HAnimSegment1309 := THAnimSegmentNode.Create;
HAnimSegment1309 := HAnimSegment1062;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1309;
HAnimSegment1310 := THAnimSegmentNode.Create;
HAnimSegment1310 := HAnimSegment842;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1310;
HAnimSegment1311 := THAnimSegmentNode.Create;
HAnimSegment1311 := HAnimSegment1096;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1311;
HAnimSegment1312 := THAnimSegmentNode.Create;
HAnimSegment1312 := HAnimSegment876;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1312;
HAnimSegment1313 := THAnimSegmentNode.Create;
HAnimSegment1313 := HAnimSegment1132;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1313;
HAnimSegment1314 := THAnimSegmentNode.Create;
HAnimSegment1314 := HAnimSegment910;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1314;
HAnimSegment1315 := THAnimSegmentNode.Create;
HAnimSegment1315 := HAnimSegment1168;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1315;
HAnimSegment1316 := THAnimSegmentNode.Create;
HAnimSegment1316 := HAnimSegment798;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1316;
HAnimSegment1317 := THAnimSegmentNode.Create;
HAnimSegment1317 := HAnimSegment1054;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1317;
HAnimSegment1318 := THAnimSegmentNode.Create;
HAnimSegment1318 := HAnimSegment834;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1318;
HAnimSegment1319 := THAnimSegmentNode.Create;
HAnimSegment1319 := HAnimSegment1088;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1319;
HAnimSegment1320 := THAnimSegmentNode.Create;
HAnimSegment1320 := HAnimSegment868;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1320;
HAnimSegment1321 := THAnimSegmentNode.Create;
HAnimSegment1321 := HAnimSegment1124;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1321;
HAnimSegment1322 := THAnimSegmentNode.Create;
HAnimSegment1322 := HAnimSegment902;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1322;
HAnimSegment1323 := THAnimSegmentNode.Create;
HAnimSegment1323 := HAnimSegment1160;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1323;
HAnimSegment1324 := THAnimSegmentNode.Create;
HAnimSegment1324 := HAnimSegment764;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1324;
HAnimSegment1325 := THAnimSegmentNode.Create;
HAnimSegment1325 := HAnimSegment1016;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1325;
HAnimSegment1326 := THAnimSegmentNode.Create;
HAnimSegment1326 := HAnimSegment790;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1326;
HAnimSegment1327 := THAnimSegmentNode.Create;
HAnimSegment1327 := HAnimSegment1046;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1327;
HAnimSegment1328 := THAnimSegmentNode.Create;
HAnimSegment1328 := HAnimSegment826;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1328;
HAnimSegment1329 := THAnimSegmentNode.Create;
HAnimSegment1329 := HAnimSegment1080;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1329;
HAnimSegment1330 := THAnimSegmentNode.Create;
HAnimSegment1330 := HAnimSegment860;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1330;
HAnimSegment1331 := THAnimSegmentNode.Create;
HAnimSegment1331 := HAnimSegment1116;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1331;
HAnimSegment1332 := THAnimSegmentNode.Create;
HAnimSegment1332 := HAnimSegment894;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1332;
HAnimSegment1333 := THAnimSegmentNode.Create;
HAnimSegment1333 := HAnimSegment1152;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1333;
HAnimSegment1334 := THAnimSegmentNode.Create;
HAnimSegment1334 := HAnimSegment670;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1334;
HAnimSegment1335 := THAnimSegmentNode.Create;
HAnimSegment1335 := HAnimSegment920;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1335;
HAnimSegment1336 := THAnimSegmentNode.Create;
HAnimSegment1336 := HAnimSegment654;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1336;
HAnimSegment1337 := THAnimSegmentNode.Create;
HAnimSegment1337 := HAnimSegment662;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1337;
HAnimSegment1338 := THAnimSegmentNode.Create;
HAnimSegment1338 := HAnimSegment720;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1338;
HAnimSegment1339 := THAnimSegmentNode.Create;
HAnimSegment1339 := HAnimSegment976;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1339;
HAnimSegment1340 := THAnimSegmentNode.Create;
HAnimSegment1340 := HAnimSegment756;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1340;
HAnimSegment1341 := THAnimSegmentNode.Create;
HAnimSegment1341 := HAnimSegment1008;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1341;
HAnimSegment1342 := THAnimSegmentNode.Create;
HAnimSegment1342 := HAnimSegment782;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1342;
HAnimSegment1343 := THAnimSegmentNode.Create;
HAnimSegment1343 := HAnimSegment1036;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1343;
HAnimSegment1344 := THAnimSegmentNode.Create;
HAnimSegment1344 := HAnimSegment818;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1344;
HAnimSegment1345 := THAnimSegmentNode.Create;
HAnimSegment1345 := HAnimSegment1072;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1345;
HAnimSegment1346 := THAnimSegmentNode.Create;
HAnimSegment1346 := HAnimSegment852;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1346;
HAnimSegment1347 := THAnimSegmentNode.Create;
HAnimSegment1347 := HAnimSegment1108;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1347;
HAnimSegment1348 := THAnimSegmentNode.Create;
HAnimSegment1348 := HAnimSegment886;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1348;
HAnimSegment1349 := THAnimSegmentNode.Create;
HAnimSegment1349 := HAnimSegment1142;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1349;
HAnimSegment1350 := THAnimSegmentNode.Create;
HAnimSegment1350 := HAnimSegment195;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1350;
HAnimSegment1351 := THAnimSegmentNode.Create;
HAnimSegment1351 := HAnimSegment331;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1351;
HAnimSegment1352 := THAnimSegmentNode.Create;
HAnimSegment1352 := HAnimSegment680;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1352;
HAnimSegment1353 := THAnimSegmentNode.Create;
HAnimSegment1353 := HAnimSegment930;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1353;
HAnimSegment1354 := THAnimSegmentNode.Create;
HAnimSegment1354 := HAnimSegment175;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1354;
HAnimSegment1355 := THAnimSegmentNode.Create;
HAnimSegment1355 := HAnimSegment311;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1355;
HAnimSegment1356 := THAnimSegmentNode.Create;
HAnimSegment1356 := HAnimSegment227;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1356;
HAnimSegment1357 := THAnimSegmentNode.Create;
HAnimSegment1357 := HAnimSegment363;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1357;
HAnimSegment1358 := THAnimSegmentNode.Create;
HAnimSegment1358 := HAnimSegment209;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1358;
HAnimSegment1359 := THAnimSegmentNode.Create;
HAnimSegment1359 := HAnimSegment345;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1359;
HAnimSegment1360 := THAnimSegmentNode.Create;
HAnimSegment1360 := HAnimSegment121;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1360;
HAnimSegment1361 := THAnimSegmentNode.Create;
HAnimSegment1361 := HAnimSegment257;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1361;
HAnimSegment1362 := THAnimSegmentNode.Create;
HAnimSegment1362 := HAnimSegment696;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1362;
HAnimSegment1363 := THAnimSegmentNode.Create;
HAnimSegment1363 := HAnimSegment946;
{ .AddSegments }
HAnimHumanoid75.Segments := HAnimSegment1363;
HAnimSite1364 := THAnimSiteNode.Create;
HAnimSite1364 := HAnimSite563;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1364;
HAnimSite1365 := THAnimSiteNode.Create;
HAnimSite1365 := HAnimSite118;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1365;
HAnimSite1366 := THAnimSiteNode.Create;
HAnimSite1366 := HAnimSite115;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1366;
HAnimSite1367 := THAnimSiteNode.Create;
HAnimSite1367 := HAnimSite405;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1367;
HAnimSite1368 := THAnimSiteNode.Create;
HAnimSite1368 := HAnimSite651;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1368;
HAnimSite1369 := THAnimSiteNode.Create;
HAnimSite1369 := HAnimSite447;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1369;
HAnimSite1370 := THAnimSiteNode.Create;
HAnimSite1370 := HAnimSite635;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1370;
HAnimSite1371 := THAnimSiteNode.Create;
HAnimSite1371 := HAnimSite633;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1371;
HAnimSite1372 := THAnimSiteNode.Create;
HAnimSite1372 := HAnimSite481;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1372;
HAnimSite1373 := THAnimSiteNode.Create;
HAnimSite1373 := HAnimSite641;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1373;
HAnimSite1374 := THAnimSiteNode.Create;
HAnimSite1374 := HAnimSite561;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1374;
HAnimSite1375 := THAnimSiteNode.Create;
HAnimSite1375 := HAnimSite403;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1375;
HAnimSite1376 := THAnimSiteNode.Create;
HAnimSite1376 := HAnimSite689;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1376;
HAnimSite1377 := THAnimSiteNode.Create;
HAnimSite1377 := HAnimSite939;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1377;
HAnimSite1378 := THAnimSiteNode.Create;
HAnimSite1378 := HAnimSite107;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1378;
HAnimSite1379 := THAnimSiteNode.Create;
HAnimSite1379 := HAnimSite109;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1379;
HAnimSite1380 := THAnimSiteNode.Create;
HAnimSite1380 := HAnimSite693;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1380;
HAnimSite1381 := THAnimSiteNode.Create;
HAnimSite1381 := HAnimSite943;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1381;
HAnimSite1382 := THAnimSiteNode.Create;
HAnimSite1382 := HAnimSite691;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1382;
HAnimSite1383 := THAnimSiteNode.Create;
HAnimSite1383 := HAnimSite941;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1383;
HAnimSite1384 := THAnimSiteNode.Create;
HAnimSite1384 := HAnimSite192;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1384;
HAnimSite1385 := THAnimSiteNode.Create;
HAnimSite1385 := HAnimSite328;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1385;
HAnimSite1386 := THAnimSiteNode.Create;
HAnimSite1386 := HAnimSite779;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1386;
HAnimSite1387 := THAnimSiteNode.Create;
HAnimSite1387 := HAnimSite1033;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1387;
HAnimSite1388 := THAnimSiteNode.Create;
HAnimSite1388 := HAnimSite813;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1388;
HAnimSite1389 := THAnimSiteNode.Create;
HAnimSite1389 := HAnimSite1069;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1389;
HAnimSite1390 := THAnimSiteNode.Create;
HAnimSite1390 := HAnimSite847;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1390;
HAnimSite1391 := THAnimSiteNode.Create;
HAnimSite1391 := HAnimSite1105;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1391;
HAnimSite1392 := THAnimSiteNode.Create;
HAnimSite1392 := HAnimSite883;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1392;
HAnimSite1393 := THAnimSiteNode.Create;
HAnimSite1393 := HAnimSite1139;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1393;
HAnimSite1394 := THAnimSiteNode.Create;
HAnimSite1394 := HAnimSite917;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1394;
HAnimSite1395 := THAnimSiteNode.Create;
HAnimSite1395 := HAnimSite1175;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1395;
HAnimSite1396 := THAnimSiteNode.Create;
HAnimSite1396 := HAnimSite677;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1396;
HAnimSite1397 := THAnimSiteNode.Create;
HAnimSite1397 := HAnimSite927;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1397;
HAnimSite1398 := THAnimSiteNode.Create;
HAnimSite1398 := HAnimSite815;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1398;
HAnimSite1399 := THAnimSiteNode.Create;
HAnimSite1399 := HAnimSite1103;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1399;
HAnimSite1400 := THAnimSiteNode.Create;
HAnimSite1400 := HAnimSite142;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1400;
HAnimSite1401 := THAnimSiteNode.Create;
HAnimSite1401 := HAnimSite278;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1401;
HAnimSite1402 := THAnimSiteNode.Create;
HAnimSite1402 := HAnimSite144;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1402;
HAnimSite1403 := THAnimSiteNode.Create;
HAnimSite1403 := HAnimSite280;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1403;
HAnimSite1404 := THAnimSiteNode.Create;
HAnimSite1404 := HAnimSite649;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1404;
HAnimSite1405 := THAnimSiteNode.Create;
HAnimSite1405 := HAnimSite645;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1405;
HAnimSite1406 := THAnimSiteNode.Create;
HAnimSite1406 := HAnimSite717;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1406;
HAnimSite1407 := THAnimSiteNode.Create;
HAnimSite1407 := HAnimSite973;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1407;
HAnimSite1408 := THAnimSiteNode.Create;
HAnimSite1408 := HAnimSite713;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1408;
HAnimSite1409 := THAnimSiteNode.Create;
HAnimSite1409 := HAnimSite969;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1409;
HAnimSite1410 := THAnimSiteNode.Create;
HAnimSite1410 := HAnimSite99;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1410;
HAnimSite1411 := THAnimSiteNode.Create;
HAnimSite1411 := HAnimSite103;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1411;
HAnimSite1412 := THAnimSiteNode.Create;
HAnimSite1412 := HAnimSite639;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1412;
HAnimSite1413 := THAnimSiteNode.Create;
HAnimSite1413 := HAnimSite637;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1413;
HAnimSite1414 := THAnimSiteNode.Create;
HAnimSite1414 := HAnimSite140;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1414;
HAnimSite1415 := THAnimSiteNode.Create;
HAnimSite1415 := HAnimSite276;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1415;
HAnimSite1416 := THAnimSiteNode.Create;
HAnimSite1416 := HAnimSite170;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1416;
HAnimSite1417 := THAnimSiteNode.Create;
HAnimSite1417 := HAnimSite306;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1417;
HAnimSite1418 := THAnimSiteNode.Create;
HAnimSite1418 := HAnimSite172;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1418;
HAnimSite1419 := THAnimSiteNode.Create;
HAnimSite1419 := HAnimSite308;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1419;
HAnimSite1420 := THAnimSiteNode.Create;
HAnimSite1420 := HAnimSite749;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1420;
HAnimSite1421 := THAnimSiteNode.Create;
HAnimSite1421 := HAnimSite1043;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1421;
HAnimSite1422 := THAnimSiteNode.Create;
HAnimSite1422 := HAnimSite753;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1422;
HAnimSite1423 := THAnimSiteNode.Create;
HAnimSite1423 := HAnimSite1149;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1423;
HAnimSite1424 := THAnimSiteNode.Create;
HAnimSite1424 := HAnimSite224;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1424;
HAnimSite1425 := THAnimSiteNode.Create;
HAnimSite1425 := HAnimSite360;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1425;
HAnimSite1426 := THAnimSiteNode.Create;
HAnimSite1426 := HAnimSite252;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1426;
HAnimSite1427 := THAnimSiteNode.Create;
HAnimSite1427 := HAnimSite388;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1427;
HAnimSite1428 := THAnimSiteNode.Create;
HAnimSite1428 := HAnimSite575;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1428;
HAnimSite1429 := THAnimSiteNode.Create;
HAnimSite1429 := HAnimSite573;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1429;
HAnimSite1430 := THAnimSiteNode.Create;
HAnimSite1430 := HAnimSite739;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1430;
HAnimSite1431 := THAnimSiteNode.Create;
HAnimSite1431 := HAnimSite995;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1431;
HAnimSite1432 := THAnimSiteNode.Create;
HAnimSite1432 := HAnimSite111;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1432;
HAnimSite1433 := THAnimSiteNode.Create;
HAnimSite1433 := HAnimSite113;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1433;
HAnimSite1434 := THAnimSiteNode.Create;
HAnimSite1434 := HAnimSite737;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1434;
HAnimSite1435 := THAnimSiteNode.Create;
HAnimSite1435 := HAnimSite993;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1435;
HAnimSite1436 := THAnimSiteNode.Create;
HAnimSite1436 := HAnimSite715;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1436;
HAnimSite1437 := THAnimSiteNode.Create;
HAnimSite1437 := HAnimSite971;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1437;
HAnimSite1438 := THAnimSiteNode.Create;
HAnimSite1438 := HAnimSite445;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1438;
HAnimSite1439 := THAnimSiteNode.Create;
HAnimSite1439 := HAnimSite443;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1439;
HAnimSite1440 := THAnimSiteNode.Create;
HAnimSite1440 := HAnimSite190;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1440;
HAnimSite1441 := THAnimSiteNode.Create;
HAnimSite1441 := HAnimSite326;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1441;
HAnimSite1442 := THAnimSiteNode.Create;
HAnimSite1442 := HAnimSite254;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1442;
HAnimSite1443 := THAnimSiteNode.Create;
HAnimSite1443 := HAnimSite390;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1443;
HAnimSite1444 := THAnimSiteNode.Create;
HAnimSite1444 := HAnimSite493;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1444;
HAnimSite1445 := THAnimSiteNode.Create;
HAnimSite1445 := HAnimSite491;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1445;
HAnimSite1446 := THAnimSiteNode.Create;
HAnimSite1446 := HAnimSite647;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1446;
HAnimSite1447 := THAnimSiteNode.Create;
HAnimSite1447 := HAnimSite643;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1447;
HAnimSite1448 := THAnimSiteNode.Create;
HAnimSite1448 := HAnimSite101;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1448;
HAnimSite1449 := THAnimSiteNode.Create;
HAnimSite1449 := HAnimSite105;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1449;
HAnimSite1450 := THAnimSiteNode.Create;
HAnimSite1450 := HAnimSite751;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1450;
HAnimSite1451 := THAnimSiteNode.Create;
HAnimSite1451 := HAnimSite1005;
{ .AddSites }
HAnimHumanoid75.Sites := HAnimSite1451;
{ .AddChildren }
Group74.AddChildren([HAnimHumanoid75]);
{ .AddChildren }
Group73.AddChildren([Group74]);
{ .AddChildren }
Group32.AddChildren([Group73]);
{ expected best practice: EXPORT AS='fileName' for clarity }
EXPORT1452 := TEXPORTNode.Create;
EXPORT1452.AS := 'JoeSkeletonSkinSite';
EXPORT1452.LocalDEF := 'Joe_Human';
{ .AddChildren }
Group32.AddChildren([EXPORT1452]);
{ .AddGroup }
X3D0.AddChildren([Group32]);
Result := X3D0;
end;
