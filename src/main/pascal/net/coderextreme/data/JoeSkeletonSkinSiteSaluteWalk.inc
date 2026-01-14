function JoeSkeletonSkinSiteSaluteWalk: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group33: TGroupNode;
WorldInfo34: TWorldInfoNode;
WorldInfo35: TWorldInfoNode;
NavigationInfo36: TNavigationInfoNode;
Background37: TBackgroundNode;
Transform38: TTransformNode;
Inline39: TInlineNode;
Group40: TGroupNode;
Viewpoint41: TViewpointNode;
Viewpoint42: TViewpointNode;
Viewpoint43: TViewpointNode;
Viewpoint44: TViewpointNode;
Viewpoint45: TViewpointNode;
Viewpoint46: TViewpointNode;
Viewpoint47: TViewpointNode;
Viewpoint48: TViewpointNode;
Viewpoint49: TViewpointNode;
Viewpoint50: TViewpointNode;
Viewpoint51: TViewpointNode;
Group52: TGroupNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
Appearance55: TAppearanceNode;
Material56: TMaterialNode;
IndexedFaceSet57: TIndexedFaceSetNode;
Color58: TColorNode;
Coordinate59: TCoordinateNode;
Transform60: TTransformNode;
Shape61: TShapeNode;
Appearance62: TAppearanceNode;
Material63: TMaterialNode;
IndexedFaceSet64: TIndexedFaceSetNode;
Coordinate65: TCoordinateNode;
Transform66: TTransformNode;
Shape67: TShapeNode;
Appearance68: TAppearanceNode;
Material69: TMaterialNode;
IndexedLineSet70: TIndexedLineSetNode;
Coordinate71: TCoordinateNode;
Transform72: TTransformNode;
Shape73: TShapeNode;
Appearance74: TAppearanceNode;
Material75: TMaterialNode;
Sphere76: TSphereNode;
Group77: TGroupNode;
Group78: TGroupNode;
HAnimHumanoid79: THAnimHumanoidNode;
HAnimJoint80: THAnimJointNode;
HAnimSegment81: THAnimSegmentNode;
Transform82: TTransformNode;
Shape83: TShapeNode;
Shape84: TShapeNode;
Appearance85: TAppearanceNode;
IndexedLineSet86: TIndexedLineSetNode;
Coordinate87: TCoordinateNode;
Transform88: TTransformNode;
Shape89: TShapeNode;
Transform90: TTransformNode;
Shape91: TShapeNode;
HAnimJoint92: THAnimJointNode;
HAnimSegment93: THAnimSegmentNode;
Transform94: TTransformNode;
Transform95: TTransformNode;
Shape96: TShapeNode;
Shape97: TShapeNode;
Appearance98: TAppearanceNode;
IndexedLineSet99: TIndexedLineSetNode;
Coordinate100: TCoordinateNode;
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
Shape116: TShapeNode;
HAnimSite117: THAnimSiteNode;
Transform118: TTransformNode;
Shape119: TShapeNode;
HAnimSite120: THAnimSiteNode;
Shape121: TShapeNode;
HAnimJoint122: THAnimJointNode;
HAnimSegment123: THAnimSegmentNode;
Transform124: TTransformNode;
Shape125: TShapeNode;
Shape126: TShapeNode;
Appearance127: TAppearanceNode;
IndexedLineSet128: TIndexedLineSetNode;
Coordinate129: TCoordinateNode;
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
Transform140: TTransformNode;
Shape141: TShapeNode;
HAnimSite142: THAnimSiteNode;
Shape143: TShapeNode;
HAnimSite144: THAnimSiteNode;
Shape145: TShapeNode;
HAnimSite146: THAnimSiteNode;
Shape147: TShapeNode;
HAnimJoint148: THAnimJointNode;
HAnimSegment149: THAnimSegmentNode;
Transform150: TTransformNode;
Shape151: TShapeNode;
Shape152: TShapeNode;
Appearance153: TAppearanceNode;
IndexedLineSet154: TIndexedLineSetNode;
Coordinate155: TCoordinateNode;
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
Transform170: TTransformNode;
Shape171: TShapeNode;
HAnimSite172: THAnimSiteNode;
Shape173: TShapeNode;
HAnimSite174: THAnimSiteNode;
Shape175: TShapeNode;
HAnimJoint176: THAnimJointNode;
HAnimSegment177: THAnimSegmentNode;
Transform178: TTransformNode;
Shape179: TShapeNode;
Shape180: TShapeNode;
Appearance181: TAppearanceNode;
IndexedLineSet182: TIndexedLineSetNode;
Coordinate183: TCoordinateNode;
Transform184: TTransformNode;
Shape185: TShapeNode;
Transform186: TTransformNode;
Shape187: TShapeNode;
Transform188: TTransformNode;
Shape189: TShapeNode;
Transform190: TTransformNode;
Shape191: TShapeNode;
HAnimSite192: THAnimSiteNode;
Shape193: TShapeNode;
HAnimSite194: THAnimSiteNode;
Shape195: TShapeNode;
HAnimJoint196: THAnimJointNode;
HAnimSegment197: THAnimSegmentNode;
Transform198: TTransformNode;
Shape199: TShapeNode;
Shape200: TShapeNode;
Appearance201: TAppearanceNode;
IndexedLineSet202: TIndexedLineSetNode;
Coordinate203: TCoordinateNode;
Transform204: TTransformNode;
Shape205: TShapeNode;
Transform206: TTransformNode;
Shape207: TShapeNode;
Transform208: TTransformNode;
Shape209: TShapeNode;
HAnimJoint210: THAnimJointNode;
HAnimSegment211: THAnimSegmentNode;
Transform212: TTransformNode;
Shape213: TShapeNode;
Shape214: TShapeNode;
Appearance215: TAppearanceNode;
IndexedLineSet216: TIndexedLineSetNode;
Coordinate217: TCoordinateNode;
Transform218: TTransformNode;
Shape219: TShapeNode;
Transform220: TTransformNode;
Shape221: TShapeNode;
Transform222: TTransformNode;
Shape223: TShapeNode;
Transform224: TTransformNode;
Shape225: TShapeNode;
HAnimSite226: THAnimSiteNode;
Shape227: TShapeNode;
HAnimJoint228: THAnimJointNode;
HAnimSegment229: THAnimSegmentNode;
Transform230: TTransformNode;
Shape231: TShapeNode;
Shape232: TShapeNode;
Appearance233: TAppearanceNode;
IndexedLineSet234: TIndexedLineSetNode;
Coordinate235: TCoordinateNode;
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
Transform252: TTransformNode;
Shape253: TShapeNode;
HAnimSite254: THAnimSiteNode;
Shape255: TShapeNode;
HAnimSite256: THAnimSiteNode;
Shape257: TShapeNode;
HAnimJoint258: THAnimJointNode;
HAnimSegment259: THAnimSegmentNode;
Transform260: TTransformNode;
Shape261: TShapeNode;
Shape262: TShapeNode;
Appearance263: TAppearanceNode;
IndexedLineSet264: TIndexedLineSetNode;
Coordinate265: TCoordinateNode;
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
Transform276: TTransformNode;
Shape277: TShapeNode;
HAnimSite278: THAnimSiteNode;
Shape279: TShapeNode;
HAnimSite280: THAnimSiteNode;
Shape281: TShapeNode;
HAnimSite282: THAnimSiteNode;
Shape283: TShapeNode;
HAnimJoint284: THAnimJointNode;
HAnimSegment285: THAnimSegmentNode;
Transform286: TTransformNode;
Shape287: TShapeNode;
Shape288: TShapeNode;
Appearance289: TAppearanceNode;
IndexedLineSet290: TIndexedLineSetNode;
Coordinate291: TCoordinateNode;
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
Transform306: TTransformNode;
Shape307: TShapeNode;
HAnimSite308: THAnimSiteNode;
Shape309: TShapeNode;
HAnimSite310: THAnimSiteNode;
Shape311: TShapeNode;
HAnimJoint312: THAnimJointNode;
HAnimSegment313: THAnimSegmentNode;
Transform314: TTransformNode;
Shape315: TShapeNode;
Shape316: TShapeNode;
Appearance317: TAppearanceNode;
IndexedLineSet318: TIndexedLineSetNode;
Coordinate319: TCoordinateNode;
Transform320: TTransformNode;
Shape321: TShapeNode;
Transform322: TTransformNode;
Shape323: TShapeNode;
Transform324: TTransformNode;
Shape325: TShapeNode;
Transform326: TTransformNode;
Shape327: TShapeNode;
HAnimSite328: THAnimSiteNode;
Shape329: TShapeNode;
HAnimSite330: THAnimSiteNode;
Shape331: TShapeNode;
HAnimJoint332: THAnimJointNode;
HAnimSegment333: THAnimSegmentNode;
Transform334: TTransformNode;
Shape335: TShapeNode;
Shape336: TShapeNode;
Appearance337: TAppearanceNode;
IndexedLineSet338: TIndexedLineSetNode;
Coordinate339: TCoordinateNode;
Transform340: TTransformNode;
Shape341: TShapeNode;
Transform342: TTransformNode;
Shape343: TShapeNode;
Transform344: TTransformNode;
Shape345: TShapeNode;
HAnimJoint346: THAnimJointNode;
HAnimSegment347: THAnimSegmentNode;
Transform348: TTransformNode;
Shape349: TShapeNode;
Shape350: TShapeNode;
Appearance351: TAppearanceNode;
IndexedLineSet352: TIndexedLineSetNode;
Coordinate353: TCoordinateNode;
Transform354: TTransformNode;
Shape355: TShapeNode;
Transform356: TTransformNode;
Shape357: TShapeNode;
Transform358: TTransformNode;
Shape359: TShapeNode;
Transform360: TTransformNode;
Shape361: TShapeNode;
HAnimSite362: THAnimSiteNode;
Shape363: TShapeNode;
HAnimJoint364: THAnimJointNode;
HAnimSegment365: THAnimSegmentNode;
Transform366: TTransformNode;
Shape367: TShapeNode;
Shape368: TShapeNode;
Appearance369: TAppearanceNode;
IndexedLineSet370: TIndexedLineSetNode;
Coordinate371: TCoordinateNode;
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
Transform388: TTransformNode;
Shape389: TShapeNode;
HAnimSite390: THAnimSiteNode;
Shape391: TShapeNode;
HAnimSite392: THAnimSiteNode;
Shape393: TShapeNode;
HAnimJoint394: THAnimJointNode;
HAnimSegment395: THAnimSegmentNode;
Shape396: TShapeNode;
Appearance397: TAppearanceNode;
IndexedLineSet398: TIndexedLineSetNode;
Coordinate399: TCoordinateNode;
HAnimSegment400: THAnimSegmentNode;
Shape401: TShapeNode;
Appearance402: TAppearanceNode;
IndexedLineSet403: TIndexedLineSetNode;
Coordinate404: TCoordinateNode;
HAnimSite405: THAnimSiteNode;
Shape406: TShapeNode;
HAnimSite407: THAnimSiteNode;
Shape408: TShapeNode;
HAnimJoint409: THAnimJointNode;
HAnimSegment410: THAnimSegmentNode;
Shape411: TShapeNode;
Appearance412: TAppearanceNode;
IndexedLineSet413: TIndexedLineSetNode;
Coordinate414: TCoordinateNode;
Transform415: TTransformNode;
Shape416: TShapeNode;
HAnimJoint417: THAnimJointNode;
HAnimSegment418: THAnimSegmentNode;
Shape419: TShapeNode;
Appearance420: TAppearanceNode;
IndexedLineSet421: TIndexedLineSetNode;
Coordinate422: TCoordinateNode;
Transform423: TTransformNode;
Shape424: TShapeNode;
HAnimJoint425: THAnimJointNode;
HAnimSegment426: THAnimSegmentNode;
Shape427: TShapeNode;
Appearance428: TAppearanceNode;
IndexedLineSet429: TIndexedLineSetNode;
Coordinate430: TCoordinateNode;
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
Transform443: TTransformNode;
Shape444: TShapeNode;
HAnimSite445: THAnimSiteNode;
Shape446: TShapeNode;
HAnimSite447: THAnimSiteNode;
Shape448: TShapeNode;
HAnimSite449: THAnimSiteNode;
Shape450: TShapeNode;
HAnimJoint451: THAnimJointNode;
HAnimSegment452: THAnimSegmentNode;
Shape453: TShapeNode;
Appearance454: TAppearanceNode;
IndexedLineSet455: TIndexedLineSetNode;
Coordinate456: TCoordinateNode;
Transform457: TTransformNode;
Shape458: TShapeNode;
HAnimJoint459: THAnimJointNode;
HAnimSegment460: THAnimSegmentNode;
Shape461: TShapeNode;
Appearance462: TAppearanceNode;
IndexedLineSet463: TIndexedLineSetNode;
Coordinate464: TCoordinateNode;
Transform465: TTransformNode;
Shape466: TShapeNode;
HAnimJoint467: THAnimJointNode;
HAnimSegment468: THAnimSegmentNode;
Shape469: TShapeNode;
Appearance470: TAppearanceNode;
IndexedLineSet471: TIndexedLineSetNode;
Coordinate472: TCoordinateNode;
Transform473: TTransformNode;
Shape474: TShapeNode;
HAnimJoint475: THAnimJointNode;
HAnimSegment476: THAnimSegmentNode;
Shape477: TShapeNode;
Appearance478: TAppearanceNode;
IndexedLineSet479: TIndexedLineSetNode;
Coordinate480: TCoordinateNode;
Transform481: TTransformNode;
Shape482: TShapeNode;
HAnimSite483: THAnimSiteNode;
Shape484: TShapeNode;
HAnimJoint485: THAnimJointNode;
HAnimSegment486: THAnimSegmentNode;
Shape487: TShapeNode;
Appearance488: TAppearanceNode;
IndexedLineSet489: TIndexedLineSetNode;
Coordinate490: TCoordinateNode;
Transform491: TTransformNode;
Shape492: TShapeNode;
HAnimSite493: THAnimSiteNode;
Shape494: TShapeNode;
HAnimSite495: THAnimSiteNode;
Shape496: TShapeNode;
HAnimJoint497: THAnimJointNode;
HAnimSegment498: THAnimSegmentNode;
Shape499: TShapeNode;
Appearance500: TAppearanceNode;
IndexedLineSet501: TIndexedLineSetNode;
Coordinate502: TCoordinateNode;
Transform503: TTransformNode;
Shape504: TShapeNode;
HAnimJoint505: THAnimJointNode;
HAnimSegment506: THAnimSegmentNode;
Shape507: TShapeNode;
Appearance508: TAppearanceNode;
IndexedLineSet509: TIndexedLineSetNode;
Coordinate510: TCoordinateNode;
Transform511: TTransformNode;
Shape512: TShapeNode;
HAnimJoint513: THAnimJointNode;
HAnimSegment514: THAnimSegmentNode;
Shape515: TShapeNode;
Appearance516: TAppearanceNode;
IndexedLineSet517: TIndexedLineSetNode;
Coordinate518: TCoordinateNode;
Transform519: TTransformNode;
Shape520: TShapeNode;
HAnimJoint521: THAnimJointNode;
HAnimSegment522: THAnimSegmentNode;
Shape523: TShapeNode;
Appearance524: TAppearanceNode;
IndexedLineSet525: TIndexedLineSetNode;
Coordinate526: TCoordinateNode;
Transform527: TTransformNode;
Shape528: TShapeNode;
HAnimJoint529: THAnimJointNode;
HAnimSegment530: THAnimSegmentNode;
Shape531: TShapeNode;
Appearance532: TAppearanceNode;
IndexedLineSet533: TIndexedLineSetNode;
Coordinate534: TCoordinateNode;
Transform535: TTransformNode;
Shape536: TShapeNode;
Transform537: TTransformNode;
Shape538: TShapeNode;
HAnimJoint539: THAnimJointNode;
HAnimSegment540: THAnimSegmentNode;
Shape541: TShapeNode;
Appearance542: TAppearanceNode;
IndexedLineSet543: TIndexedLineSetNode;
Coordinate544: TCoordinateNode;
Transform545: TTransformNode;
Shape546: TShapeNode;
HAnimJoint547: THAnimJointNode;
HAnimSegment548: THAnimSegmentNode;
Shape549: TShapeNode;
Appearance550: TAppearanceNode;
IndexedLineSet551: TIndexedLineSetNode;
Coordinate552: TCoordinateNode;
Transform553: TTransformNode;
Shape554: TShapeNode;
HAnimJoint555: THAnimJointNode;
HAnimSegment556: THAnimSegmentNode;
Shape557: TShapeNode;
Appearance558: TAppearanceNode;
IndexedLineSet559: TIndexedLineSetNode;
Coordinate560: TCoordinateNode;
Transform561: TTransformNode;
Shape562: TShapeNode;
HAnimSite563: THAnimSiteNode;
Shape564: TShapeNode;
HAnimSite565: THAnimSiteNode;
Shape566: TShapeNode;
HAnimJoint567: THAnimJointNode;
HAnimSegment568: THAnimSegmentNode;
Shape569: TShapeNode;
Appearance570: TAppearanceNode;
IndexedLineSet571: TIndexedLineSetNode;
Coordinate572: TCoordinateNode;
Transform573: TTransformNode;
Shape574: TShapeNode;
HAnimSite575: THAnimSiteNode;
Shape576: TShapeNode;
HAnimSite577: THAnimSiteNode;
Shape578: TShapeNode;
HAnimJoint579: THAnimJointNode;
HAnimSegment580: THAnimSegmentNode;
Shape581: TShapeNode;
Appearance582: TAppearanceNode;
IndexedLineSet583: TIndexedLineSetNode;
Coordinate584: TCoordinateNode;
Transform585: TTransformNode;
Shape586: TShapeNode;
HAnimJoint587: THAnimJointNode;
HAnimSegment588: THAnimSegmentNode;
Transform589: TTransformNode;
Shape590: TShapeNode;
Shape591: TShapeNode;
Appearance592: TAppearanceNode;
IndexedLineSet593: TIndexedLineSetNode;
Coordinate594: TCoordinateNode;
HAnimJoint595: THAnimJointNode;
HAnimSegment596: THAnimSegmentNode;
Shape597: TShapeNode;
Appearance598: TAppearanceNode;
IndexedLineSet599: TIndexedLineSetNode;
Coordinate600: TCoordinateNode;
Transform601: TTransformNode;
Shape602: TShapeNode;
HAnimJoint603: THAnimJointNode;
HAnimSegment604: THAnimSegmentNode;
Shape605: TShapeNode;
Appearance606: TAppearanceNode;
IndexedLineSet607: TIndexedLineSetNode;
Coordinate608: TCoordinateNode;
Transform609: TTransformNode;
Shape610: TShapeNode;
HAnimJoint611: THAnimJointNode;
HAnimSegment612: THAnimSegmentNode;
Shape613: TShapeNode;
Appearance614: TAppearanceNode;
IndexedLineSet615: TIndexedLineSetNode;
Coordinate616: TCoordinateNode;
Transform617: TTransformNode;
Shape618: TShapeNode;
HAnimJoint619: THAnimJointNode;
HAnimSegment620: THAnimSegmentNode;
Shape621: TShapeNode;
Appearance622: TAppearanceNode;
IndexedLineSet623: TIndexedLineSetNode;
Coordinate624: TCoordinateNode;
Transform625: TTransformNode;
Shape626: TShapeNode;
HAnimJoint627: THAnimJointNode;
HAnimSegment628: THAnimSegmentNode;
Shape629: TShapeNode;
Appearance630: TAppearanceNode;
IndexedLineSet631: TIndexedLineSetNode;
Coordinate632: TCoordinateNode;
Transform633: TTransformNode;
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
HAnimSite653: THAnimSiteNode;
Shape654: TShapeNode;
HAnimJoint655: THAnimJointNode;
HAnimSegment656: THAnimSegmentNode;
Shape657: TShapeNode;
Appearance658: TAppearanceNode;
IndexedLineSet659: TIndexedLineSetNode;
Coordinate660: TCoordinateNode;
Transform661: TTransformNode;
Shape662: TShapeNode;
HAnimJoint663: THAnimJointNode;
HAnimSegment664: THAnimSegmentNode;
Shape665: TShapeNode;
Appearance666: TAppearanceNode;
IndexedLineSet667: TIndexedLineSetNode;
Coordinate668: TCoordinateNode;
Transform669: TTransformNode;
Shape670: TShapeNode;
HAnimJoint671: THAnimJointNode;
HAnimSegment672: THAnimSegmentNode;
Shape673: TShapeNode;
Appearance674: TAppearanceNode;
IndexedLineSet675: TIndexedLineSetNode;
Coordinate676: TCoordinateNode;
Transform677: TTransformNode;
Shape678: TShapeNode;
HAnimSite679: THAnimSiteNode;
Shape680: TShapeNode;
HAnimJoint681: THAnimJointNode;
HAnimSegment682: THAnimSegmentNode;
Shape683: TShapeNode;
Appearance684: TAppearanceNode;
IndexedLineSet685: TIndexedLineSetNode;
Coordinate686: TCoordinateNode;
Transform687: TTransformNode;
Shape688: TShapeNode;
Transform689: TTransformNode;
Shape690: TShapeNode;
HAnimSite691: THAnimSiteNode;
Shape692: TShapeNode;
HAnimSite693: THAnimSiteNode;
Shape694: TShapeNode;
HAnimSite695: THAnimSiteNode;
Shape696: TShapeNode;
HAnimJoint697: THAnimJointNode;
HAnimSegment698: THAnimSegmentNode;
Shape699: TShapeNode;
Appearance700: TAppearanceNode;
IndexedLineSet701: TIndexedLineSetNode;
Coordinate702: TCoordinateNode;
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
Transform713: TTransformNode;
Shape714: TShapeNode;
HAnimSite715: THAnimSiteNode;
Shape716: TShapeNode;
HAnimSite717: THAnimSiteNode;
Shape718: TShapeNode;
HAnimSite719: THAnimSiteNode;
Shape720: TShapeNode;
HAnimJoint721: THAnimJointNode;
HAnimSegment722: THAnimSegmentNode;
Shape723: TShapeNode;
Appearance724: TAppearanceNode;
IndexedLineSet725: TIndexedLineSetNode;
Coordinate726: TCoordinateNode;
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
Transform737: TTransformNode;
Shape738: TShapeNode;
HAnimSite739: THAnimSiteNode;
Shape740: TShapeNode;
HAnimSite741: THAnimSiteNode;
Shape742: TShapeNode;
HAnimJoint743: THAnimJointNode;
HAnimSegment744: THAnimSegmentNode;
Shape745: TShapeNode;
Appearance746: TAppearanceNode;
IndexedLineSet747: TIndexedLineSetNode;
Coordinate748: TCoordinateNode;
Transform749: TTransformNode;
Shape750: TShapeNode;
HAnimSite751: THAnimSiteNode;
Shape752: TShapeNode;
HAnimSite753: THAnimSiteNode;
Shape754: TShapeNode;
HAnimSite755: THAnimSiteNode;
Shape756: TShapeNode;
HAnimJoint757: THAnimJointNode;
HAnimSegment758: THAnimSegmentNode;
Shape759: TShapeNode;
Appearance760: TAppearanceNode;
IndexedLineSet761: TIndexedLineSetNode;
Coordinate762: TCoordinateNode;
Transform763: TTransformNode;
Shape764: TShapeNode;
HAnimJoint765: THAnimJointNode;
HAnimSegment766: THAnimSegmentNode;
Shape767: TShapeNode;
Appearance768: TAppearanceNode;
IndexedLineSet769: TIndexedLineSetNode;
Coordinate770: TCoordinateNode;
Transform771: TTransformNode;
Shape772: TShapeNode;
HAnimJoint773: THAnimJointNode;
HAnimSegment774: THAnimSegmentNode;
Shape775: TShapeNode;
Appearance776: TAppearanceNode;
IndexedLineSet777: TIndexedLineSetNode;
Coordinate778: TCoordinateNode;
Transform779: TTransformNode;
Shape780: TShapeNode;
HAnimSite781: THAnimSiteNode;
Shape782: TShapeNode;
HAnimJoint783: THAnimJointNode;
HAnimSegment784: THAnimSegmentNode;
Shape785: TShapeNode;
Appearance786: TAppearanceNode;
IndexedLineSet787: TIndexedLineSetNode;
Coordinate788: TCoordinateNode;
Transform789: TTransformNode;
Shape790: TShapeNode;
HAnimJoint791: THAnimJointNode;
HAnimSegment792: THAnimSegmentNode;
Shape793: TShapeNode;
Appearance794: TAppearanceNode;
IndexedLineSet795: TIndexedLineSetNode;
Coordinate796: TCoordinateNode;
Transform797: TTransformNode;
Shape798: TShapeNode;
HAnimJoint799: THAnimJointNode;
HAnimSegment800: THAnimSegmentNode;
Shape801: TShapeNode;
Appearance802: TAppearanceNode;
IndexedLineSet803: TIndexedLineSetNode;
Coordinate804: TCoordinateNode;
Transform805: TTransformNode;
Shape806: TShapeNode;
HAnimJoint807: THAnimJointNode;
HAnimSegment808: THAnimSegmentNode;
Shape809: TShapeNode;
Appearance810: TAppearanceNode;
IndexedLineSet811: TIndexedLineSetNode;
Coordinate812: TCoordinateNode;
Transform813: TTransformNode;
Shape814: TShapeNode;
HAnimSite815: THAnimSiteNode;
Shape816: TShapeNode;
HAnimSite817: THAnimSiteNode;
Shape818: TShapeNode;
HAnimJoint819: THAnimJointNode;
HAnimSegment820: THAnimSegmentNode;
Shape821: TShapeNode;
Appearance822: TAppearanceNode;
IndexedLineSet823: TIndexedLineSetNode;
Coordinate824: TCoordinateNode;
Transform825: TTransformNode;
Shape826: TShapeNode;
HAnimJoint827: THAnimJointNode;
HAnimSegment828: THAnimSegmentNode;
Shape829: TShapeNode;
Appearance830: TAppearanceNode;
IndexedLineSet831: TIndexedLineSetNode;
Coordinate832: TCoordinateNode;
Transform833: TTransformNode;
Shape834: TShapeNode;
HAnimJoint835: THAnimJointNode;
HAnimSegment836: THAnimSegmentNode;
Shape837: TShapeNode;
Appearance838: TAppearanceNode;
IndexedLineSet839: TIndexedLineSetNode;
Coordinate840: TCoordinateNode;
Transform841: TTransformNode;
Shape842: TShapeNode;
HAnimJoint843: THAnimJointNode;
HAnimSegment844: THAnimSegmentNode;
Shape845: TShapeNode;
Appearance846: TAppearanceNode;
IndexedLineSet847: TIndexedLineSetNode;
Coordinate848: TCoordinateNode;
HAnimSite849: THAnimSiteNode;
Shape850: TShapeNode;
Transform851: TTransformNode;
Shape852: TShapeNode;
HAnimJoint853: THAnimJointNode;
HAnimSegment854: THAnimSegmentNode;
Shape855: TShapeNode;
Appearance856: TAppearanceNode;
IndexedLineSet857: TIndexedLineSetNode;
Coordinate858: TCoordinateNode;
Transform859: TTransformNode;
Shape860: TShapeNode;
HAnimJoint861: THAnimJointNode;
HAnimSegment862: THAnimSegmentNode;
Shape863: TShapeNode;
Appearance864: TAppearanceNode;
IndexedLineSet865: TIndexedLineSetNode;
Coordinate866: TCoordinateNode;
Transform867: TTransformNode;
Shape868: TShapeNode;
HAnimJoint869: THAnimJointNode;
HAnimSegment870: THAnimSegmentNode;
Shape871: TShapeNode;
Appearance872: TAppearanceNode;
IndexedLineSet873: TIndexedLineSetNode;
Coordinate874: TCoordinateNode;
Transform875: TTransformNode;
Shape876: TShapeNode;
HAnimJoint877: THAnimJointNode;
HAnimSegment878: THAnimSegmentNode;
Shape879: TShapeNode;
Appearance880: TAppearanceNode;
IndexedLineSet881: TIndexedLineSetNode;
Coordinate882: TCoordinateNode;
Transform883: TTransformNode;
Shape884: TShapeNode;
HAnimSite885: THAnimSiteNode;
Shape886: TShapeNode;
HAnimJoint887: THAnimJointNode;
HAnimSegment888: THAnimSegmentNode;
Shape889: TShapeNode;
Appearance890: TAppearanceNode;
IndexedLineSet891: TIndexedLineSetNode;
Coordinate892: TCoordinateNode;
Transform893: TTransformNode;
Shape894: TShapeNode;
HAnimJoint895: THAnimJointNode;
HAnimSegment896: THAnimSegmentNode;
Shape897: TShapeNode;
Appearance898: TAppearanceNode;
IndexedLineSet899: TIndexedLineSetNode;
Coordinate900: TCoordinateNode;
Transform901: TTransformNode;
Shape902: TShapeNode;
HAnimJoint903: THAnimJointNode;
HAnimSegment904: THAnimSegmentNode;
Transform905: TTransformNode;
Shape906: TShapeNode;
Shape907: TShapeNode;
Appearance908: TAppearanceNode;
IndexedLineSet909: TIndexedLineSetNode;
Coordinate910: TCoordinateNode;
HAnimJoint911: THAnimJointNode;
HAnimSegment912: THAnimSegmentNode;
Shape913: TShapeNode;
Appearance914: TAppearanceNode;
IndexedLineSet915: TIndexedLineSetNode;
Coordinate916: TCoordinateNode;
Transform917: TTransformNode;
Shape918: TShapeNode;
HAnimSite919: THAnimSiteNode;
Shape920: TShapeNode;
HAnimJoint921: THAnimJointNode;
HAnimSegment922: THAnimSegmentNode;
Shape923: TShapeNode;
Appearance924: TAppearanceNode;
IndexedLineSet925: TIndexedLineSetNode;
Coordinate926: TCoordinateNode;
Transform927: TTransformNode;
Shape928: TShapeNode;
HAnimSite929: THAnimSiteNode;
Shape930: TShapeNode;
HAnimJoint931: THAnimJointNode;
HAnimSegment932: THAnimSegmentNode;
Shape933: TShapeNode;
Appearance934: TAppearanceNode;
IndexedLineSet935: TIndexedLineSetNode;
Coordinate936: TCoordinateNode;
Transform937: TTransformNode;
Shape938: TShapeNode;
Transform939: TTransformNode;
Shape940: TShapeNode;
HAnimSite941: THAnimSiteNode;
Shape942: TShapeNode;
HAnimSite943: THAnimSiteNode;
Shape944: TShapeNode;
HAnimSite945: THAnimSiteNode;
Shape946: TShapeNode;
HAnimJoint947: THAnimJointNode;
HAnimSegment948: THAnimSegmentNode;
Transform949: TTransformNode;
Shape950: TShapeNode;
Shape951: TShapeNode;
Appearance952: TAppearanceNode;
IndexedLineSet953: TIndexedLineSetNode;
Coordinate954: TCoordinateNode;
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
Transform969: TTransformNode;
Shape970: TShapeNode;
HAnimSite971: THAnimSiteNode;
Shape972: TShapeNode;
HAnimSite973: THAnimSiteNode;
Shape974: TShapeNode;
HAnimSite975: THAnimSiteNode;
Shape976: TShapeNode;
HAnimJoint977: THAnimJointNode;
HAnimSegment978: THAnimSegmentNode;
Shape979: TShapeNode;
Appearance980: TAppearanceNode;
IndexedLineSet981: TIndexedLineSetNode;
Coordinate982: TCoordinateNode;
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
Transform993: TTransformNode;
Shape994: TShapeNode;
HAnimSite995: THAnimSiteNode;
Shape996: TShapeNode;
HAnimSite997: THAnimSiteNode;
Shape998: TShapeNode;
HAnimJoint999: THAnimJointNode;
HAnimSegment1000: THAnimSegmentNode;
Shape1001: TShapeNode;
Appearance1002: TAppearanceNode;
IndexedLineSet1003: TIndexedLineSetNode;
Coordinate1004: TCoordinateNode;
Transform1005: TTransformNode;
Shape1006: TShapeNode;
HAnimSite1007: THAnimSiteNode;
Shape1008: TShapeNode;
HAnimJoint1009: THAnimJointNode;
HAnimSegment1010: THAnimSegmentNode;
Shape1011: TShapeNode;
Appearance1012: TAppearanceNode;
IndexedLineSet1013: TIndexedLineSetNode;
Coordinate1014: TCoordinateNode;
Transform1015: TTransformNode;
Shape1016: TShapeNode;
HAnimJoint1017: THAnimJointNode;
HAnimSegment1018: THAnimSegmentNode;
Shape1019: TShapeNode;
Appearance1020: TAppearanceNode;
IndexedLineSet1021: TIndexedLineSetNode;
Coordinate1022: TCoordinateNode;
Transform1023: TTransformNode;
Shape1024: TShapeNode;
HAnimJoint1025: THAnimJointNode;
HAnimSegment1026: THAnimSegmentNode;
Shape1027: TShapeNode;
Appearance1028: TAppearanceNode;
IndexedLineSet1029: TIndexedLineSetNode;
Coordinate1030: TCoordinateNode;
Transform1031: TTransformNode;
Shape1032: TShapeNode;
Transform1033: TTransformNode;
Shape1034: TShapeNode;
HAnimSite1035: THAnimSiteNode;
Shape1036: TShapeNode;
HAnimJoint1037: THAnimJointNode;
HAnimSegment1038: THAnimSegmentNode;
Shape1039: TShapeNode;
Appearance1040: TAppearanceNode;
IndexedLineSet1041: TIndexedLineSetNode;
Coordinate1042: TCoordinateNode;
Transform1043: TTransformNode;
Shape1044: TShapeNode;
HAnimSite1045: THAnimSiteNode;
Shape1046: TShapeNode;
HAnimJoint1047: THAnimJointNode;
HAnimSegment1048: THAnimSegmentNode;
Shape1049: TShapeNode;
Appearance1050: TAppearanceNode;
IndexedLineSet1051: TIndexedLineSetNode;
Coordinate1052: TCoordinateNode;
Transform1053: TTransformNode;
Shape1054: TShapeNode;
HAnimJoint1055: THAnimJointNode;
HAnimSegment1056: THAnimSegmentNode;
Shape1057: TShapeNode;
Appearance1058: TAppearanceNode;
IndexedLineSet1059: TIndexedLineSetNode;
Coordinate1060: TCoordinateNode;
Transform1061: TTransformNode;
Shape1062: TShapeNode;
HAnimJoint1063: THAnimJointNode;
HAnimSegment1064: THAnimSegmentNode;
Shape1065: TShapeNode;
Appearance1066: TAppearanceNode;
IndexedLineSet1067: TIndexedLineSetNode;
Coordinate1068: TCoordinateNode;
Transform1069: TTransformNode;
Shape1070: TShapeNode;
HAnimSite1071: THAnimSiteNode;
Shape1072: TShapeNode;
HAnimJoint1073: THAnimJointNode;
HAnimSegment1074: THAnimSegmentNode;
Shape1075: TShapeNode;
Appearance1076: TAppearanceNode;
IndexedLineSet1077: TIndexedLineSetNode;
Coordinate1078: TCoordinateNode;
Transform1079: TTransformNode;
Shape1080: TShapeNode;
HAnimJoint1081: THAnimJointNode;
HAnimSegment1082: THAnimSegmentNode;
Shape1083: TShapeNode;
Appearance1084: TAppearanceNode;
IndexedLineSet1085: TIndexedLineSetNode;
Coordinate1086: TCoordinateNode;
Transform1087: TTransformNode;
Shape1088: TShapeNode;
HAnimJoint1089: THAnimJointNode;
HAnimSegment1090: THAnimSegmentNode;
Shape1091: TShapeNode;
Appearance1092: TAppearanceNode;
IndexedLineSet1093: TIndexedLineSetNode;
Coordinate1094: TCoordinateNode;
Transform1095: TTransformNode;
Shape1096: TShapeNode;
HAnimJoint1097: THAnimJointNode;
HAnimSegment1098: THAnimSegmentNode;
Shape1099: TShapeNode;
Appearance1100: TAppearanceNode;
IndexedLineSet1101: TIndexedLineSetNode;
Coordinate1102: TCoordinateNode;
Transform1103: TTransformNode;
Shape1104: TShapeNode;
HAnimSite1105: THAnimSiteNode;
Shape1106: TShapeNode;
HAnimSite1107: THAnimSiteNode;
Shape1108: TShapeNode;
HAnimJoint1109: THAnimJointNode;
HAnimSegment1110: THAnimSegmentNode;
Shape1111: TShapeNode;
Appearance1112: TAppearanceNode;
IndexedLineSet1113: TIndexedLineSetNode;
Coordinate1114: TCoordinateNode;
Transform1115: TTransformNode;
Shape1116: TShapeNode;
HAnimJoint1117: THAnimJointNode;
HAnimSegment1118: THAnimSegmentNode;
Shape1119: TShapeNode;
Appearance1120: TAppearanceNode;
IndexedLineSet1121: TIndexedLineSetNode;
Coordinate1122: TCoordinateNode;
Transform1123: TTransformNode;
Shape1124: TShapeNode;
HAnimJoint1125: THAnimJointNode;
HAnimSegment1126: THAnimSegmentNode;
Shape1127: TShapeNode;
Appearance1128: TAppearanceNode;
IndexedLineSet1129: TIndexedLineSetNode;
Coordinate1130: TCoordinateNode;
Transform1131: TTransformNode;
Shape1132: TShapeNode;
HAnimJoint1133: THAnimJointNode;
HAnimSegment1134: THAnimSegmentNode;
Shape1135: TShapeNode;
Appearance1136: TAppearanceNode;
IndexedLineSet1137: TIndexedLineSetNode;
Coordinate1138: TCoordinateNode;
Transform1139: TTransformNode;
Shape1140: TShapeNode;
HAnimSite1141: THAnimSiteNode;
Shape1142: TShapeNode;
HAnimJoint1143: THAnimJointNode;
HAnimSegment1144: THAnimSegmentNode;
Shape1145: TShapeNode;
Appearance1146: TAppearanceNode;
IndexedLineSet1147: TIndexedLineSetNode;
Coordinate1148: TCoordinateNode;
Transform1149: TTransformNode;
Shape1150: TShapeNode;
HAnimSite1151: THAnimSiteNode;
Shape1152: TShapeNode;
HAnimJoint1153: THAnimJointNode;
HAnimSegment1154: THAnimSegmentNode;
Shape1155: TShapeNode;
Appearance1156: TAppearanceNode;
IndexedLineSet1157: TIndexedLineSetNode;
Coordinate1158: TCoordinateNode;
Transform1159: TTransformNode;
Shape1160: TShapeNode;
HAnimJoint1161: THAnimJointNode;
HAnimSegment1162: THAnimSegmentNode;
Shape1163: TShapeNode;
Appearance1164: TAppearanceNode;
IndexedLineSet1165: TIndexedLineSetNode;
Coordinate1166: TCoordinateNode;
Transform1167: TTransformNode;
Shape1168: TShapeNode;
HAnimJoint1169: THAnimJointNode;
HAnimSegment1170: THAnimSegmentNode;
Shape1171: TShapeNode;
Appearance1172: TAppearanceNode;
IndexedLineSet1173: TIndexedLineSetNode;
Coordinate1174: TCoordinateNode;
Transform1175: TTransformNode;
Shape1176: TShapeNode;
HAnimSite1177: THAnimSiteNode;
Shape1178: TShapeNode;
HAnimJoint1179: THAnimJointNode;
HAnimJoint1180: THAnimJointNode;
HAnimJoint1181: THAnimJointNode;
HAnimJoint1182: THAnimJointNode;
HAnimJoint1183: THAnimJointNode;
HAnimJoint1184: THAnimJointNode;
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
Coordinate1268: TCoordinateNode;
Shape1269: TShapeNode;
Appearance1270: TAppearanceNode;
Material1271: TMaterialNode;
ImageTexture1272: TImageTextureNode;
IndexedFaceSet1273: TIndexedFaceSetNode;
Color1274: TColorNode;
Coordinate1275: TCoordinateNode;
TimeSensor1276: TTimeSensorNode;
TimeSensor1277: TTimeSensorNode;
TimeSensor1278: TTimeSensorNode;
OrientationInterpolator1279: TOrientationInterpolatorNode;
OrientationInterpolator1280: TOrientationInterpolatorNode;
OrientationInterpolator1281: TOrientationInterpolatorNode;
OrientationInterpolator1282: TOrientationInterpolatorNode;
OrientationInterpolator1283: TOrientationInterpolatorNode;
OrientationInterpolator1284: TOrientationInterpolatorNode;
OrientationInterpolator1285: TOrientationInterpolatorNode;
OrientationInterpolator1286: TOrientationInterpolatorNode;
OrientationInterpolator1287: TOrientationInterpolatorNode;
OrientationInterpolator1288: TOrientationInterpolatorNode;
OrientationInterpolator1289: TOrientationInterpolatorNode;
OrientationInterpolator1290: TOrientationInterpolatorNode;
OrientationInterpolator1291: TOrientationInterpolatorNode;
OrientationInterpolator1292: TOrientationInterpolatorNode;
OrientationInterpolator1293: TOrientationInterpolatorNode;
OrientationInterpolator1294: TOrientationInterpolatorNode;
OrientationInterpolator1295: TOrientationInterpolatorNode;
OrientationInterpolator1296: TOrientationInterpolatorNode;
OrientationInterpolator1297: TOrientationInterpolatorNode;
OrientationInterpolator1298: TOrientationInterpolatorNode;
OrientationInterpolator1299: TOrientationInterpolatorNode;
OrientationInterpolator1300: TOrientationInterpolatorNode;
OrientationInterpolator1301: TOrientationInterpolatorNode;
OrientationInterpolator1302: TOrientationInterpolatorNode;
OrientationInterpolator1303: TOrientationInterpolatorNode;
OrientationInterpolator1304: TOrientationInterpolatorNode;
OrientationInterpolator1305: TOrientationInterpolatorNode;
OrientationInterpolator1306: TOrientationInterpolatorNode;
OrientationInterpolator1307: TOrientationInterpolatorNode;
OrientationInterpolator1308: TOrientationInterpolatorNode;
OrientationInterpolator1309: TOrientationInterpolatorNode;
OrientationInterpolator1310: TOrientationInterpolatorNode;
Group1311: TGroupNode;
PositionInterpolator1312: TPositionInterpolatorNode;
OrientationInterpolator1313: TOrientationInterpolatorNode;
OrientationInterpolator1314: TOrientationInterpolatorNode;
OrientationInterpolator1315: TOrientationInterpolatorNode;
OrientationInterpolator1316: TOrientationInterpolatorNode;
OrientationInterpolator1317: TOrientationInterpolatorNode;
OrientationInterpolator1318: TOrientationInterpolatorNode;
OrientationInterpolator1319: TOrientationInterpolatorNode;
OrientationInterpolator1320: TOrientationInterpolatorNode;
OrientationInterpolator1321: TOrientationInterpolatorNode;
OrientationInterpolator1322: TOrientationInterpolatorNode;
OrientationInterpolator1323: TOrientationInterpolatorNode;
OrientationInterpolator1324: TOrientationInterpolatorNode;
OrientationInterpolator1325: TOrientationInterpolatorNode;
OrientationInterpolator1326: TOrientationInterpolatorNode;
OrientationInterpolator1327: TOrientationInterpolatorNode;
OrientationInterpolator1328: TOrientationInterpolatorNode;
OrientationInterpolator1329: TOrientationInterpolatorNode;
OrientationInterpolator1330: TOrientationInterpolatorNode;
OrientationInterpolator1331: TOrientationInterpolatorNode;
OrientationInterpolator1332: TOrientationInterpolatorNode;
OrientationInterpolator1333: TOrientationInterpolatorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
X3D0.Meta['title'] := 'JoeSkeletonSkinSaluteSiteWalk.x3d';
X3D0.Meta['description'] := 'Comprehensive example showing skeleton, skin, sites and interpolator animation together.';
X3D0.Meta['creator'] := 'Joe D. Williams';
X3D0.Meta['created'] := '9 January 2004';
X3D0.Meta['translated'] := '4 December 2022';
X3D0.Meta['modified'] := 'Tue, 09 Sep 2025 19:38:38 GMT';
X3D0.Meta['warning'] := 'Under development, numerous errors and warnings';
X3D0.Meta['TODO'] := 'This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value';
X3D0.Meta['TODO'] := 'Provide feedback to tovrmlx3d converter';
X3D0.Meta['TODO'] := 'HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics.';
X3D0.Meta['TODO'] := 'ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy';
X3D0.Meta['reference'] := 'JoeSkeletonSkinSaluteSiteWalk.original.x3dv';
X3D0.Meta['reference'] := 'JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv';
X3D0.Meta['reference'] := 'JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv';
X3D0.Meta['reference'] := 'https://castle-engine.io/view3dscene.php#section_converting';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_view3dscene.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X_ITE.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_X3DOM.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_freeWrl.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_Octaga.png';
X3D0.Meta['Image'] := 'JoeSkeletonSkinSiteSaluteWalk_vivaty.png';
X3D0.Meta['drawing'] := 'JoeSkeletonSkinSiteSaluteWalk_composite.vsdx';
X3D0.Meta['generator'] := 'tovrmlx3d, https://castle-engine.io/convert.php';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['generator'] := 'x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy';
X3D0.Meta['translator'] := 'Michalis Kamburelis';
X3D0.Meta['translator'] := 'Don Brutzman';
Group33 := TGroupNode.Create;
WorldInfo34 := TWorldInfoNode.Create;
WorldInfo34.Title := 'HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3';
WorldInfo34.SetInfo(['By Joe for Joe']);
{ .AddChildren }
Group33.AddChildren([WorldInfo34]);
WorldInfo35 := TWorldInfoNode.Create;
WorldInfo35.Title := 'HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3';
WorldInfo35.SetInfo(['By Joe for Joe']);
{ .AddChildren }
Group33.AddChildren([WorldInfo35]);
NavigationInfo36 := TNavigationInfoNode.Create;
{ .AddChildren }
Group33.AddChildren([NavigationInfo36]);
Background37 := TBackgroundNode.Create;
Background37.SetSkyColor([Vector3(0,0,0.1)]);
Background37.SetGroundAngle([1.57]);
Background37.SetGroundColor([Vector3(0,0.1,0),Vector3(0,0.1,0)]);
{ .AddChildren }
Group33.AddChildren([Background37]);
Transform38 := TTransformNode.Create;
Transform38.Scale := Vector3(0.175,0.175,0.175);
Inline39 := TInlineNode.Create;
Inline39.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../../Savage/Tools/Authoring/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','../../../Savage/Tools/Authoring/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl']);
{ .AddChildren }
Transform38.AddChildren([Inline39]);
{ .AddChildren }
Group33.AddChildren([Transform38]);
Group40 := TGroupNode.Create;
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'Front Up View';
Viewpoint41.Position := Vector3(-1,2,2.5);
Viewpoint41.Orientation := Vector4(-1,-1,0,0.55);
{ .AddChildren }
Group40.AddChildren([Viewpoint41]);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'From Left View';
Viewpoint42.Position := Vector3(-2.5,1.5,0);
Viewpoint42.Orientation := Vector4(0.3,1,0,-1.57);
{ .AddChildren }
Group40.AddChildren([Viewpoint42]);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'Front Mid View';
Viewpoint43.Position := Vector3(0,0.5,1.25);
{ .AddChildren }
Group40.AddChildren([Viewpoint43]);
Viewpoint44 := TViewpointNode.Create;
Viewpoint44.Description := 'Front Feet View';
Viewpoint44.Position := Vector3(0,0,0.75);
{ .AddChildren }
Group40.AddChildren([Viewpoint44]);
Viewpoint45 := TViewpointNode.Create;
Viewpoint45.Description := 'From Right View';
Viewpoint45.Position := Vector3(1,1,0);
Viewpoint45.Orientation := Vector4(0,1,0,1.57);
{ .AddChildren }
Group40.AddChildren([Viewpoint45]);
Viewpoint46 := TViewpointNode.Create;
Viewpoint46.Description := 'Front Head View';
Viewpoint46.Position := Vector3(0,1.65,0.75);
Viewpoint46.CenterOfRotation := Vector3(0,1.65,0);
{ .AddChildren }
Group40.AddChildren([Viewpoint46]);
Viewpoint47 := TViewpointNode.Create;
Viewpoint47.Description := 'Front Mid View';
Viewpoint47.Position := Vector3(0,1,1.75);
{ .AddChildren }
Group40.AddChildren([Viewpoint47]);
Viewpoint48 := TViewpointNode.Create;
Viewpoint48.Description := 'Rear View';
Viewpoint48.Position := Vector3(0,1.5,-4);
Viewpoint48.Orientation := Vector4(0,1,0,3.14);
{ .AddChildren }
Group40.AddChildren([Viewpoint48]);
Viewpoint49 := TViewpointNode.Create;
Viewpoint49.Description := 'Top View';
Viewpoint49.Position := Vector3(0,4,0);
Viewpoint49.Orientation := Vector4(1,0,0,-1.57);
{ .AddChildren }
Group40.AddChildren([Viewpoint49]);
Viewpoint50 := TViewpointNode.Create;
Viewpoint50.Description := 'Bottom View';
Viewpoint50.Position := Vector3(0,-4,0);
Viewpoint50.Orientation := Vector4(1,0,0,1.57);
{ .AddChildren }
Group40.AddChildren([Viewpoint50]);
Viewpoint51 := TViewpointNode.Create;
Viewpoint51.Description := 'Right View';
Viewpoint51.Position := Vector3(4,1.5,0);
Viewpoint51.Orientation := Vector4(0,1,0,1.57);
{ .AddChildren }
Group40.AddChildren([Viewpoint51]);
{ .AddChildren }
Group33.AddChildren([Group40]);
Group52 := TGroupNode.Create;
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0,2.1,0);
Transform53.Scale := Vector3(5,5,5);
Shape54 := TShapeNode.Create;
Appearance55 := TAppearanceNode.Create;
Material56 := TMaterialNode.Create;
Material56.AmbientIntensity := 0.5;
Material56.DiffuseColor := Vector3(0,0,0);
Material56.Shininess := 1;
{ .SetMaterial }
Appearance55.Material := Material56;
{ .SetAppearance }
Shape54.Appearance := Appearance55;
IndexedFaceSet57 := TIndexedFaceSetNode.Create;
IndexedFaceSet57.CreaseAngle := 0.1;
IndexedFaceSet57.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Color58 := TColorNode.Create;
Color58.SetColor([Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,1),Vector3(0,1,1),Vector3(1,1,0)]);
{ .SetColor }
IndexedFaceSet57.Color := Color58;
Coordinate59 := TCoordinateNode.Create;
Coordinate59.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.0157),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet57.Coord := Coordinate59;
{ .SetGeometry }
Shape54.Geometry := IndexedFaceSet57;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
Group52.AddChildren([Transform53]);
Transform60 := TTransformNode.Create;
Transform60.Translation := Vector3(-0.2,0.773,-0.016);
Transform60.Scale := Vector3(0.1,0.1,0.1);
Shape61 := TShapeNode.Create;
Appearance62 := TAppearanceNode.Create;
Material63 := TMaterialNode.Create;
Material63.AmbientIntensity := 1;
Material63.DiffuseColor := Vector3(1,0,0);
Material63.SpecularColor := Vector3(1,0,0);
Material63.EmissiveColor := Vector3(1,0,0);
Material63.Shininess := 0.7;
{ .SetMaterial }
Appearance62.Material := Material63;
{ .SetAppearance }
Shape61.Appearance := Appearance62;
IndexedFaceSet64 := TIndexedFaceSetNode.Create;
IndexedFaceSet64.CreaseAngle := 0.1;
IndexedFaceSet64.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate65 := TCoordinateNode.Create;
Coordinate65 := Coordinate59;
{ .SetCoord }
IndexedFaceSet64.Coord := Coordinate65;
{ .SetGeometry }
Shape61.Geometry := IndexedFaceSet64;
{ .AddChild }
Transform60.AddChildren([Shape61]);
{ .AddChildren }
Group52.AddChildren([Transform60]);
Transform66 := TTransformNode.Create;
Transform66.Translation := Vector3(0,0.2,0);
Transform66.Scale := Vector3(0.1,0.1,0.1);
Shape67 := TShapeNode.Create;
Appearance68 := TAppearanceNode.Create;
Material69 := TMaterialNode.Create;
Material69.DiffuseColor := Vector3(0,1,0);
Material69.SpecularColor := Vector3(0,1,0);
Material69.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance68.Material := Material69;
{ .SetAppearance }
Shape67.Appearance := Appearance68;
IndexedLineSet70 := TIndexedLineSetNode.Create;
IndexedLineSet70.SetCoordIndex([0,1,-1]);
Coordinate71 := TCoordinateNode.Create;
Coordinate71.SetPoint([Vector3(0,0,0),Vector3(0,0.0001,0)]);
{ .SetCoord }
IndexedLineSet70.Coord := Coordinate71;
{ .SetGeometry }
Shape67.Geometry := IndexedLineSet70;
{ .AddChild }
Transform66.AddChildren([Shape67]);
{ .AddChildren }
Group52.AddChildren([Transform66]);
Transform72 := TTransformNode.Create;
Transform72.Translation := Vector3(-0.2,0.773,-0.016);
Transform72.Scale := Vector3(0.1,0.1,0.1);
Shape73 := TShapeNode.Create;
Appearance74 := TAppearanceNode.Create;
Material75 := TMaterialNode.Create;
Material75.AmbientIntensity := 0.5;
Material75.DiffuseColor := Vector3(0,1,0);
Material75.SpecularColor := Vector3(0,1,0);
Material75.EmissiveColor := Vector3(0,1,0);
Material75.Shininess := 1;
{ .SetMaterial }
Appearance74.Material := Material75;
{ .SetAppearance }
Shape73.Appearance := Appearance74;
Sphere76 := TSphereNode.Create;
Sphere76.Radius := 0.005;
{ .SetGeometry }
Shape73.Geometry := Sphere76;
{ .AddChild }
Transform72.AddChildren([Shape73]);
{ .AddChildren }
Group52.AddChildren([Transform72]);
{ .AddChildren }
Group33.AddChildren([Group52]);
Group77 := TGroupNode.Create;
Group78 := TGroupNode.Create;
HAnimHumanoid79 := THAnimHumanoidNode.Create;
HAnimHumanoid79.NameField := 'Human';
HAnimHumanoid79.SetInfo(['humanoidVersion=2.0']);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.NameField := 'humanoid_root';
HAnimJoint80.Translation := Vector3(0,-0.0293965,0);
HAnimJoint80.Center := Vector3(0,0.875,0);
HAnimSegment81 := THAnimSegmentNode.Create;
HAnimSegment81.NameField := 'sacrum';
Transform82 := TTransformNode.Create;
Transform82.Translation := Vector3(0,0.875,0);
Shape83 := TShapeNode.Create;
Shape83 := Shape54;
{ .AddChild }
Transform82.AddChildren([Shape83]);
{ .AddChildren }
HAnimSegment81.AddChildren([Transform82]);
Shape84 := TShapeNode.Create;
Appearance85 := TAppearanceNode.Create;
Appearance85 := Appearance68;
{ .SetAppearance }
Shape84.Appearance := Appearance85;
IndexedLineSet86 := TIndexedLineSetNode.Create;
IndexedLineSet86.SetCoordIndex([0,1,-1]);
Coordinate87 := TCoordinateNode.Create;
Coordinate87.SetPoint([Vector3(0,0.875,0),Vector3(0,0.92,0)]);
{ .SetCoord }
IndexedLineSet86.Coord := Coordinate87;
{ .SetGeometry }
Shape84.Geometry := IndexedLineSet86;
{ .AddChildren }
HAnimSegment81.AddChildren([Shape84]);
Transform88 := TTransformNode.Create;
Transform88.Translation := Vector3(0,0.92,0.08);
Shape89 := TShapeNode.Create;
Shape89 := Shape73;
{ .AddChild }
Transform88.AddChildren([Shape89]);
{ .AddChildren }
HAnimSegment81.AddChildren([Transform88]);
Transform90 := TTransformNode.Create;
Transform90.Translation := Vector3(0,0.87,-0.022);
Shape91 := TShapeNode.Create;
Shape91 := Shape73;
{ .AddChild }
Transform90.AddChildren([Shape91]);
{ .AddChildren }
HAnimSegment81.AddChildren([Transform90]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimSegment81]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'sacroiliac';
HAnimJoint92.Center := Vector3(0,0.92,0);
HAnimJoint92.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint92.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment93 := THAnimSegmentNode.Create;
HAnimSegment93.NameField := 'pelvis';
Transform94 := TTransformNode.Create;
Transform94.Translation := Vector3(0,0.9149,0.0016);
Transform95 := TTransformNode.Create;
Shape96 := TShapeNode.Create;
Shape96 := Shape54;
{ .AddChild }
Transform95.AddChildren([Shape96]);
{ .AddChildren }
Transform94.AddChildren([Transform95]);
{ .AddChildren }
HAnimSegment93.AddChildren([Transform94]);
Shape97 := TShapeNode.Create;
Appearance98 := TAppearanceNode.Create;
Appearance98 := Appearance68;
{ .SetAppearance }
Shape97.Appearance := Appearance98;
IndexedLineSet99 := TIndexedLineSetNode.Create;
IndexedLineSet99.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate100 := TCoordinateNode.Create;
Coordinate100.SetPoint([Vector3(0,0.92,0),Vector3(0.0961,0.9124,0),Vector3(-0.095,0.9171,0.0029),Vector3(0,1.045,-0.095)]);
{ .SetCoord }
IndexedLineSet99.Coord := Coordinate100;
{ .SetGeometry }
Shape97.Geometry := IndexedLineSet99;
{ .AddChildren }
HAnimSegment93.AddChildren([Shape97]);
HAnimSite101 := THAnimSiteNode.Create;
HAnimSite101.NameField := 'l_iliocristale';
HAnimSite101.Translation := Vector3(0.1425,1.065,0.0033);
Shape102 := TShapeNode.Create;
Shape102 := Shape61;
{ .AddChildren }
HAnimSite101.AddChildren([Shape102]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite101]);
HAnimSite103 := THAnimSiteNode.Create;
HAnimSite103.NameField := 'l_trochanterion';
HAnimSite103.Translation := Vector3(0.15,0.9,-0.01);
Shape104 := TShapeNode.Create;
Shape104 := Shape61;
{ .AddChildren }
HAnimSite103.AddChildren([Shape104]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite103]);
HAnimSite105 := THAnimSiteNode.Create;
HAnimSite105.NameField := 'r_iliocristale';
HAnimSite105.Translation := Vector3(-0.1425,1.065,0.0033);
Shape106 := TShapeNode.Create;
Shape106 := Shape61;
{ .AddChildren }
HAnimSite105.AddChildren([Shape106]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite105]);
HAnimSite107 := THAnimSiteNode.Create;
HAnimSite107.NameField := 'r_trochanterion';
HAnimSite107.Translation := Vector3(-0.15,0.9,-0.01);
Shape108 := TShapeNode.Create;
Shape108 := Shape61;
{ .AddChildren }
HAnimSite107.AddChildren([Shape108]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite107]);
HAnimSite109 := THAnimSiteNode.Create;
HAnimSite109.NameField := 'l_asis';
HAnimSite109.Translation := Vector3(0.0935,1.03,0.075);
Shape110 := TShapeNode.Create;
Shape110 := Shape61;
{ .AddChildren }
HAnimSite109.AddChildren([Shape110]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite109]);
HAnimSite111 := THAnimSiteNode.Create;
HAnimSite111.NameField := 'r_asis';
HAnimSite111.Translation := Vector3(-0.0935,1.03,0.075);
Shape112 := TShapeNode.Create;
Shape112 := Shape61;
{ .AddChildren }
HAnimSite111.AddChildren([Shape112]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite111]);
HAnimSite113 := THAnimSiteNode.Create;
HAnimSite113.NameField := 'l_psis';
HAnimSite113.Translation := Vector3(0.0773,1.019,-0.12);
Shape114 := TShapeNode.Create;
Shape114 := Shape61;
{ .AddChildren }
HAnimSite113.AddChildren([Shape114]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite113]);
HAnimSite115 := THAnimSiteNode.Create;
HAnimSite115.NameField := 'r_psis';
HAnimSite115.Translation := Vector3(-0.0773,1.019,-0.12);
Shape116 := TShapeNode.Create;
Shape116 := Shape61;
{ .AddChildren }
HAnimSite115.AddChildren([Shape116]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite115]);
HAnimSite117 := THAnimSiteNode.Create;
HAnimSite117.NameField := 'floormarker';
Transform118 := TTransformNode.Create;
Transform118.Scale := Vector3(3,3,3);
Shape119 := TShapeNode.Create;
Shape119 := Shape61;
{ .AddChild }
Transform118.AddChildren([Shape119]);
{ .AddChildren }
HAnimSite117.AddChildren([Transform118]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite117]);
HAnimSite120 := THAnimSiteNode.Create;
HAnimSite120.NameField := 'crotch';
HAnimSite120.Translation := Vector3(0,0.87,-0.022);
Shape121 := TShapeNode.Create;
Shape121 := Shape61;
{ .AddChildren }
HAnimSite120.AddChildren([Shape121]);
{ .AddChildren }
HAnimSegment93.AddChildren([HAnimSite120]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimSegment93]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'l_hip';
HAnimJoint122.Rotation := Vector4(-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996);
HAnimJoint122.Center := Vector3(0.1,0.92,0);
HAnimJoint122.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint122.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment123 := THAnimSegmentNode.Create;
HAnimSegment123.NameField := 'l_thigh';
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0.1,0.92,0);
Shape125 := TShapeNode.Create;
Shape125 := Shape54;
{ .AddChild }
Transform124.AddChildren([Shape125]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform124]);
Shape126 := TShapeNode.Create;
Appearance127 := TAppearanceNode.Create;
Appearance127 := Appearance68;
{ .SetAppearance }
Shape126.Appearance := Appearance127;
IndexedLineSet128 := TIndexedLineSetNode.Create;
IndexedLineSet128.SetCoordIndex([0,1,-1]);
Coordinate129 := TCoordinateNode.Create;
Coordinate129.SetPoint([Vector3(0.1,0.92,0),Vector3(0.115,0.466,0)]);
{ .SetCoord }
IndexedLineSet128.Coord := Coordinate129;
{ .SetGeometry }
Shape126.Geometry := IndexedLineSet128;
{ .AddChildren }
HAnimSegment123.AddChildren([Shape126]);
Transform130 := TTransformNode.Create;
Transform130.Translation := Vector3(0.1,0.9,0.0775);
Shape131 := TShapeNode.Create;
Shape131 := Shape73;
{ .AddChild }
Transform130.AddChildren([Shape131]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform130]);
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(0.079,0.92,-0.14);
Shape133 := TShapeNode.Create;
Shape133 := Shape73;
{ .AddChild }
Transform132.AddChildren([Shape133]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform132]);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(0.171,0.65,0);
Shape135 := TShapeNode.Create;
Shape135 := Shape73;
{ .AddChild }
Transform134.AddChildren([Shape135]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform134]);
Transform136 := TTransformNode.Create;
Transform136.Translation := Vector3(0.02,0.65,0);
Shape137 := TShapeNode.Create;
Shape137 := Shape73;
{ .AddChild }
Transform136.AddChildren([Shape137]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform136]);
Transform138 := TTransformNode.Create;
Transform138.Translation := Vector3(0.1,0.65,-0.08);
Shape139 := TShapeNode.Create;
Shape139 := Shape73;
{ .AddChild }
Transform138.AddChildren([Shape139]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform138]);
Transform140 := TTransformNode.Create;
Transform140.Translation := Vector3(0.1,0.65,0.07);
Shape141 := TShapeNode.Create;
Shape141 := Shape73;
{ .AddChild }
Transform140.AddChildren([Shape141]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform140]);
HAnimSite142 := THAnimSiteNode.Create;
HAnimSite142.NameField := 'l_knee_crease';
HAnimSite142.Translation := Vector3(0.115,0.466,-0.055);
Shape143 := TShapeNode.Create;
Shape143 := Shape61;
{ .AddChildren }
HAnimSite142.AddChildren([Shape143]);
{ .AddChildren }
HAnimSegment123.AddChildren([HAnimSite142]);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'l_femoral_lateral_epicn';
HAnimSite144.Translation := Vector3(0.17,0.466,0);
Shape145 := TShapeNode.Create;
Shape145 := Shape61;
{ .AddChildren }
HAnimSite144.AddChildren([Shape145]);
{ .AddChildren }
HAnimSegment123.AddChildren([HAnimSite144]);
HAnimSite146 := THAnimSiteNode.Create;
HAnimSite146.NameField := 'l_femoral_medial_epicn';
HAnimSite146.Translation := Vector3(0.05,0.466,0);
Shape147 := TShapeNode.Create;
Shape147 := Shape61;
{ .AddChildren }
HAnimSite146.AddChildren([Shape147]);
{ .AddChildren }
HAnimSegment123.AddChildren([HAnimSite146]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimSegment123]);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.NameField := 'l_knee';
HAnimJoint148.Rotation := Vector4(1.00000000000001,0,0,0.224421281773429);
HAnimJoint148.Center := Vector3(0.115,0.466,0);
HAnimJoint148.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint148.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment149 := THAnimSegmentNode.Create;
HAnimSegment149.NameField := 'l_calf';
Transform150 := TTransformNode.Create;
Transform150.Translation := Vector3(0.115,0.466,0);
Shape151 := TShapeNode.Create;
Shape151 := Shape54;
{ .AddChild }
Transform150.AddChildren([Shape151]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform150]);
Shape152 := TShapeNode.Create;
Appearance153 := TAppearanceNode.Create;
Appearance153 := Appearance68;
{ .SetAppearance }
Shape152.Appearance := Appearance153;
IndexedLineSet154 := TIndexedLineSetNode.Create;
IndexedLineSet154.SetCoordIndex([0,1,-1]);
Coordinate155 := TCoordinateNode.Create;
Coordinate155.SetPoint([Vector3(0.115,0.466,0),Vector3(0.1,0.069,0)]);
{ .SetCoord }
IndexedLineSet154.Coord := Coordinate155;
{ .SetGeometry }
Shape152.Geometry := IndexedLineSet154;
{ .AddChildren }
HAnimSegment149.AddChildren([Shape152]);
Transform156 := TTransformNode.Create;
Transform156.Translation := Vector3(0.115,0.466,0.06);
Shape157 := TShapeNode.Create;
Shape157 := Shape73;
{ .AddChild }
Transform156.AddChildren([Shape157]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform156]);
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(0.115,0.466,-0.055);
Shape159 := TShapeNode.Create;
Shape159 := Shape73;
{ .AddChild }
Transform158.AddChildren([Shape159]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform158]);
Transform160 := TTransformNode.Create;
Transform160.Translation := Vector3(0.17,0.466,0);
Shape161 := TShapeNode.Create;
Shape161 := Shape73;
{ .AddChild }
Transform160.AddChildren([Shape161]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform160]);
Transform162 := TTransformNode.Create;
Transform162.Translation := Vector3(0.05,0.466,0);
Shape163 := TShapeNode.Create;
Shape163 := Shape73;
{ .AddChild }
Transform162.AddChildren([Shape163]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform162]);
Transform164 := TTransformNode.Create;
Transform164.Translation := Vector3(0.17,0.3,0);
Shape165 := TShapeNode.Create;
Shape165 := Shape73;
{ .AddChild }
Transform164.AddChildren([Shape165]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform164]);
Transform166 := TTransformNode.Create;
Transform166.Translation := Vector3(0.06,0.3,0);
Shape167 := TShapeNode.Create;
Shape167 := Shape73;
{ .AddChild }
Transform166.AddChildren([Shape167]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform166]);
Transform168 := TTransformNode.Create;
Transform168.Translation := Vector3(0.1,0.3,-0.05);
Shape169 := TShapeNode.Create;
Shape169 := Shape73;
{ .AddChild }
Transform168.AddChildren([Shape169]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform168]);
Transform170 := TTransformNode.Create;
Transform170.Translation := Vector3(0.1,0.3,0.05);
Shape171 := TShapeNode.Create;
Shape171 := Shape73;
{ .AddChild }
Transform170.AddChildren([Shape171]);
{ .AddChildren }
HAnimSegment149.AddChildren([Transform170]);
HAnimSite172 := THAnimSiteNode.Create;
HAnimSite172.NameField := 'l_lateral_malleolus';
HAnimSite172.Translation := Vector3(0.15,0.07,0);
Shape173 := TShapeNode.Create;
Shape173 := Shape61;
{ .AddChildren }
HAnimSite172.AddChildren([Shape173]);
{ .AddChildren }
HAnimSegment149.AddChildren([HAnimSite172]);
HAnimSite174 := THAnimSiteNode.Create;
HAnimSite174.NameField := 'l_medial_malleolus';
HAnimSite174.Translation := Vector3(0.085,0.086,0.0125);
Shape175 := TShapeNode.Create;
Shape175 := Shape61;
{ .AddChildren }
HAnimSite174.AddChildren([Shape175]);
{ .AddChildren }
HAnimSegment149.AddChildren([HAnimSite174]);
{ .AddChildren }
HAnimJoint148.AddChildren([HAnimSegment149]);
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176.NameField := 'l_ankle';
HAnimJoint176.Rotation := Vector4(-1.00000000000007,0,0,0.0655639608914055);
HAnimJoint176.Center := Vector3(0.115,0.069,0);
HAnimJoint176.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint176.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment177 := THAnimSegmentNode.Create;
HAnimSegment177.NameField := 'l_hindfoot';
Transform178 := TTransformNode.Create;
Transform178.Translation := Vector3(0.115,0.069,0);
Shape179 := TShapeNode.Create;
Shape179 := Shape54;
{ .AddChild }
Transform178.AddChildren([Shape179]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform178]);
Shape180 := TShapeNode.Create;
Appearance181 := TAppearanceNode.Create;
Appearance181 := Appearance68;
{ .SetAppearance }
Shape180.Appearance := Appearance181;
IndexedLineSet182 := TIndexedLineSetNode.Create;
IndexedLineSet182.SetCoordIndex([0,1,-1]);
Coordinate183 := TCoordinateNode.Create;
Coordinate183.SetPoint([Vector3(0.1,0.069,0),Vector3(0.115,0.031,0.03)]);
{ .SetCoord }
IndexedLineSet182.Coord := Coordinate183;
{ .SetGeometry }
Shape180.Geometry := IndexedLineSet182;
{ .AddChildren }
HAnimSegment177.AddChildren([Shape180]);
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(0.15,0.07,0);
Shape185 := TShapeNode.Create;
Shape185 := Shape73;
{ .AddChild }
Transform184.AddChildren([Shape185]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform184]);
Transform186 := TTransformNode.Create;
Transform186.Translation := Vector3(0.085,0.086,0.0125);
Shape187 := TShapeNode.Create;
Shape187 := Shape73;
{ .AddChild }
Transform186.AddChildren([Shape187]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform186]);
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(0.115,0.069,-0.045);
Shape189 := TShapeNode.Create;
Shape189 := Shape73;
{ .AddChild }
Transform188.AddChildren([Shape189]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform188]);
Transform190 := TTransformNode.Create;
Transform190.Translation := Vector3(0.117,0.0975,0.0615);
Shape191 := TShapeNode.Create;
Shape191 := Shape73;
{ .AddChild }
Transform190.AddChildren([Shape191]);
{ .AddChildren }
HAnimSegment177.AddChildren([Transform190]);
HAnimSite192 := THAnimSiteNode.Create;
HAnimSite192.NameField := 'l_sphyrion';
HAnimSite192.Translation := Vector3(0.09,0.056,0.0125);
Shape193 := TShapeNode.Create;
Shape193 := Shape61;
{ .AddChildren }
HAnimSite192.AddChildren([Shape193]);
{ .AddChildren }
HAnimSegment177.AddChildren([HAnimSite192]);
HAnimSite194 := THAnimSiteNode.Create;
HAnimSite194.NameField := 'l_calcaneous_post';
HAnimSite194.Translation := Vector3(0.115,0.04,-0.055);
Shape195 := TShapeNode.Create;
Shape195 := Shape61;
{ .AddChildren }
HAnimSite194.AddChildren([Shape195]);
{ .AddChildren }
HAnimSegment177.AddChildren([HAnimSite194]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimSegment177]);
HAnimJoint196 := THAnimJointNode.Create;
HAnimJoint196.NameField := 'l_subtalar';
HAnimJoint196.Center := Vector3(0.115,0.031,0.03);
HAnimJoint196.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint196.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment197 := THAnimSegmentNode.Create;
HAnimSegment197.NameField := 'l_midproximal';
Transform198 := TTransformNode.Create;
Transform198.Translation := Vector3(0.115,0.031,0.03);
Shape199 := TShapeNode.Create;
Shape199 := Shape54;
{ .AddChild }
Transform198.AddChildren([Shape199]);
{ .AddChildren }
HAnimSegment197.AddChildren([Transform198]);
Shape200 := TShapeNode.Create;
Appearance201 := TAppearanceNode.Create;
Appearance201 := Appearance68;
{ .SetAppearance }
Shape200.Appearance := Appearance201;
IndexedLineSet202 := TIndexedLineSetNode.Create;
IndexedLineSet202.SetCoordIndex([0,1,-1]);
Coordinate203 := TCoordinateNode.Create;
Coordinate203.SetPoint([Vector3(0.115,0.031,0.03),Vector3(0.115,0.037,0.09)]);
{ .SetCoord }
IndexedLineSet202.Coord := Coordinate203;
{ .SetGeometry }
Shape200.Geometry := IndexedLineSet202;
{ .AddChildren }
HAnimSegment197.AddChildren([Shape200]);
Transform204 := TTransformNode.Create;
Transform204.Translation := Vector3(0.1375,0.006,-0.03);
Shape205 := TShapeNode.Create;
Shape205 := Shape73;
{ .AddChild }
Transform204.AddChildren([Shape205]);
{ .AddChildren }
HAnimSegment197.AddChildren([Transform204]);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0.095,0.006,-0.03);
Shape207 := TShapeNode.Create;
Shape207 := Shape73;
{ .AddChild }
Transform206.AddChildren([Shape207]);
{ .AddChildren }
HAnimSegment197.AddChildren([Transform206]);
Transform208 := TTransformNode.Create;
Transform208.Translation := Vector3(0.115,0.015,-0.045);
Shape209 := TShapeNode.Create;
Shape209 := Shape73;
{ .AddChild }
Transform208.AddChildren([Shape209]);
{ .AddChildren }
HAnimSegment197.AddChildren([Transform208]);
{ .AddChildren }
HAnimJoint196.AddChildren([HAnimSegment197]);
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210.NameField := 'l_midtarsal';
HAnimJoint210.Rotation := Vector4(1.00000000000005,0,0,6.19381467367623);
HAnimJoint210.Center := Vector3(0.115,0.037,0.09);
HAnimJoint210.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint210.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment211 := THAnimSegmentNode.Create;
HAnimSegment211.NameField := 'l_middistal';
Transform212 := TTransformNode.Create;
Transform212.Translation := Vector3(0.115,0.037,0.09);
Shape213 := TShapeNode.Create;
Shape213 := Shape54;
{ .AddChild }
Transform212.AddChildren([Shape213]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform212]);
Shape214 := TShapeNode.Create;
Appearance215 := TAppearanceNode.Create;
Appearance215 := Appearance68;
{ .SetAppearance }
Shape214.Appearance := Appearance215;
IndexedLineSet216 := TIndexedLineSetNode.Create;
IndexedLineSet216.SetCoordIndex([0,1,-1]);
Coordinate217 := TCoordinateNode.Create;
Coordinate217.SetPoint([Vector3(0.115,0.037,0.09),Vector3(0.115,0.02,0.122)]);
{ .SetCoord }
IndexedLineSet216.Coord := Coordinate217;
{ .SetGeometry }
Shape214.Geometry := IndexedLineSet216;
{ .AddChildren }
HAnimSegment211.AddChildren([Shape214]);
Transform218 := TTransformNode.Create;
Transform218.Translation := Vector3(0.115,0.06,0.1);
Shape219 := TShapeNode.Create;
Shape219 := Shape73;
{ .AddChild }
Transform218.AddChildren([Shape219]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform218]);
Transform220 := TTransformNode.Create;
Transform220.Translation := Vector3(0.115,0,0.07);
Shape221 := TShapeNode.Create;
Shape221 := Shape73;
{ .AddChild }
Transform220.AddChildren([Shape221]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform220]);
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.165,0,0.07);
Shape223 := TShapeNode.Create;
Shape223 := Shape73;
{ .AddChild }
Transform222.AddChildren([Shape223]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform222]);
Transform224 := TTransformNode.Create;
Transform224.Translation := Vector3(0.095,0,0.07);
Shape225 := TShapeNode.Create;
Shape225 := Shape73;
{ .AddChild }
Transform224.AddChildren([Shape225]);
{ .AddChildren }
HAnimSegment211.AddChildren([Transform224]);
HAnimSite226 := THAnimSiteNode.Create;
HAnimSite226.NameField := 'l_metatarsal_pha1';
HAnimSite226.Translation := Vector3(0.087,0.01,0.122);
Shape227 := TShapeNode.Create;
Shape227 := Shape61;
{ .AddChildren }
HAnimSite226.AddChildren([Shape227]);
{ .AddChildren }
HAnimSegment211.AddChildren([HAnimSite226]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimSegment211]);
HAnimJoint228 := THAnimJointNode.Create;
HAnimJoint228.NameField := 'l_metatarsal';
HAnimJoint228.Rotation := Vector4(1.00000000000253,0,0,0.0175699446988144);
HAnimJoint228.Center := Vector3(0.115,0.02,0.122);
HAnimJoint228.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint228.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment229 := THAnimSegmentNode.Create;
HAnimSegment229.NameField := 'l_forefoot';
Transform230 := TTransformNode.Create;
Transform230.Translation := Vector3(0.115,0.02,0.13);
Shape231 := TShapeNode.Create;
Shape231 := Shape54;
{ .AddChild }
Transform230.AddChildren([Shape231]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform230]);
Shape232 := TShapeNode.Create;
Appearance233 := TAppearanceNode.Create;
Appearance233 := Appearance68;
{ .SetAppearance }
Shape232.Appearance := Appearance233;
IndexedLineSet234 := TIndexedLineSetNode.Create;
IndexedLineSet234.SetCoordIndex([0,1,-1]);
Coordinate235 := TCoordinateNode.Create;
Coordinate235.SetPoint([Vector3(0.115,0.02,0.122),Vector3(0.132,0.013,0.19)]);
{ .SetCoord }
IndexedLineSet234.Coord := Coordinate235;
{ .SetGeometry }
Shape232.Geometry := IndexedLineSet234;
{ .AddChildren }
HAnimSegment229.AddChildren([Shape232]);
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(0.115,0.04,0.13);
Shape237 := TShapeNode.Create;
Shape237 := Shape73;
{ .AddChild }
Transform236.AddChildren([Shape237]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform236]);
Transform238 := TTransformNode.Create;
Transform238.Translation := Vector3(0.125,0,0.12);
Shape239 := TShapeNode.Create;
Shape239 := Shape73;
{ .AddChild }
Transform238.AddChildren([Shape239]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform238]);
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(0.165,0,0.12);
Shape241 := TShapeNode.Create;
Shape241 := Shape73;
{ .AddChild }
Transform240.AddChildren([Shape241]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform240]);
Transform242 := TTransformNode.Create;
Transform242.Translation := Vector3(0.087,0,0.122);
Shape243 := TShapeNode.Create;
Shape243 := Shape73;
{ .AddChild }
Transform242.AddChildren([Shape243]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform242]);
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.09,0.012,0.188);
Shape245 := TShapeNode.Create;
Shape245 := Shape73;
{ .AddChild }
Transform244.AddChildren([Shape245]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform244]);
Transform246 := TTransformNode.Create;
Transform246.Translation := Vector3(0.11,0.011,0.19);
Shape247 := TShapeNode.Create;
Shape247 := Shape73;
{ .AddChild }
Transform246.AddChildren([Shape247]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform246]);
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(0.128,0.011,0.185);
Shape249 := TShapeNode.Create;
Shape249 := Shape73;
{ .AddChild }
Transform248.AddChildren([Shape249]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform248]);
Transform250 := TTransformNode.Create;
Transform250.Translation := Vector3(0.142,0.011,0.178);
Shape251 := TShapeNode.Create;
Shape251 := Shape73;
{ .AddChild }
Transform250.AddChildren([Shape251]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform250]);
Transform252 := TTransformNode.Create;
Transform252.Translation := Vector3(0.154,0.01,0.168);
Shape253 := TShapeNode.Create;
Shape253 := Shape73;
{ .AddChild }
Transform252.AddChildren([Shape253]);
{ .AddChildren }
HAnimSegment229.AddChildren([Transform252]);
HAnimSite254 := THAnimSiteNode.Create;
HAnimSite254.NameField := 'l_metatarsal_pha5';
HAnimSite254.Translation := Vector3(0.165,0.01,0.12);
Shape255 := TShapeNode.Create;
Shape255 := Shape61;
{ .AddChildren }
HAnimSite254.AddChildren([Shape255]);
{ .AddChildren }
HAnimSegment229.AddChildren([HAnimSite254]);
HAnimSite256 := THAnimSiteNode.Create;
HAnimSite256.NameField := 'l_digit2';
HAnimSite256.Translation := Vector3(0.11,0.011,0.19);
Shape257 := TShapeNode.Create;
Shape257 := Shape61;
{ .AddChildren }
HAnimSite256.AddChildren([Shape257]);
{ .AddChildren }
HAnimSegment229.AddChildren([HAnimSite256]);
{ .AddChildren }
HAnimJoint228.AddChildren([HAnimSegment229]);
{ .AddChildren }
HAnimJoint210.AddChildren([HAnimJoint228]);
{ .AddChildren }
HAnimJoint196.AddChildren([HAnimJoint210]);
{ .AddChildren }
HAnimJoint176.AddChildren([HAnimJoint196]);
{ .AddChildren }
HAnimJoint148.AddChildren([HAnimJoint176]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint148]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint122]);
HAnimJoint258 := THAnimJointNode.Create;
HAnimJoint258.NameField := 'r_hip';
HAnimJoint258.Rotation := Vector4(0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696);
HAnimJoint258.Center := Vector3(-0.1,0.92,0);
HAnimJoint258.SetSkinCoordIndex([91,92,98,99,100,101]);
HAnimJoint258.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment259 := THAnimSegmentNode.Create;
HAnimSegment259.NameField := 'r_thigh';
Transform260 := TTransformNode.Create;
Transform260.Translation := Vector3(-0.1,0.92,0);
Shape261 := TShapeNode.Create;
Shape261 := Shape54;
{ .AddChild }
Transform260.AddChildren([Shape261]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform260]);
Shape262 := TShapeNode.Create;
Appearance263 := TAppearanceNode.Create;
Appearance263 := Appearance68;
{ .SetAppearance }
Shape262.Appearance := Appearance263;
IndexedLineSet264 := TIndexedLineSetNode.Create;
IndexedLineSet264.SetCoordIndex([0,1,-1]);
Coordinate265 := TCoordinateNode.Create;
Coordinate265.SetPoint([Vector3(-0.1,0.92,0),Vector3(-0.1,0.4913,0)]);
{ .SetCoord }
IndexedLineSet264.Coord := Coordinate265;
{ .SetGeometry }
Shape262.Geometry := IndexedLineSet264;
{ .AddChildren }
HAnimSegment259.AddChildren([Shape262]);
Transform266 := TTransformNode.Create;
Transform266.Translation := Vector3(-0.079,0.92,-0.14);
Shape267 := TShapeNode.Create;
Shape267 := Shape73;
{ .AddChild }
Transform266.AddChildren([Shape267]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform266]);
Transform268 := TTransformNode.Create;
Transform268.Translation := Vector3(-0.1,0.9,0.075);
Shape269 := TShapeNode.Create;
Shape269 := Shape73;
{ .AddChild }
Transform268.AddChildren([Shape269]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform268]);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(-0.171,0.65,0);
Shape271 := TShapeNode.Create;
Shape271 := Shape73;
{ .AddChild }
Transform270.AddChildren([Shape271]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform270]);
Transform272 := TTransformNode.Create;
Transform272.Translation := Vector3(-0.02,0.65,0);
Shape273 := TShapeNode.Create;
Shape273 := Shape73;
{ .AddChild }
Transform272.AddChildren([Shape273]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform272]);
Transform274 := TTransformNode.Create;
Transform274.Translation := Vector3(-0.1,0.65,-0.08);
Shape275 := TShapeNode.Create;
Shape275 := Shape73;
{ .AddChild }
Transform274.AddChildren([Shape275]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform274]);
Transform276 := TTransformNode.Create;
Transform276.Translation := Vector3(-0.1,0.65,0.07);
Shape277 := TShapeNode.Create;
Shape277 := Shape73;
{ .AddChild }
Transform276.AddChildren([Shape277]);
{ .AddChildren }
HAnimSegment259.AddChildren([Transform276]);
HAnimSite278 := THAnimSiteNode.Create;
HAnimSite278.NameField := 'r_knee_crease';
HAnimSite278.Translation := Vector3(-0.115,0.466,-0.055);
Shape279 := TShapeNode.Create;
Shape279 := Shape61;
{ .AddChildren }
HAnimSite278.AddChildren([Shape279]);
{ .AddChildren }
HAnimSegment259.AddChildren([HAnimSite278]);
HAnimSite280 := THAnimSiteNode.Create;
HAnimSite280.NameField := 'r_femoral_lateral_epicn';
HAnimSite280.Translation := Vector3(-0.17,0.466,0);
Shape281 := TShapeNode.Create;
Shape281 := Shape61;
{ .AddChildren }
HAnimSite280.AddChildren([Shape281]);
{ .AddChildren }
HAnimSegment259.AddChildren([HAnimSite280]);
HAnimSite282 := THAnimSiteNode.Create;
HAnimSite282.NameField := 'r_femoral_medial_epicn';
HAnimSite282.Translation := Vector3(-0.05,0.466,0);
Shape283 := TShapeNode.Create;
Shape283 := Shape61;
{ .AddChildren }
HAnimSite282.AddChildren([Shape283]);
{ .AddChildren }
HAnimSegment259.AddChildren([HAnimSite282]);
{ .AddChildren }
HAnimJoint258.AddChildren([HAnimSegment259]);
HAnimJoint284 := THAnimJointNode.Create;
HAnimJoint284.NameField := 'r_knee';
HAnimJoint284.Rotation := Vector4(0.999999999999952,0,0,0.086543259681602);
HAnimJoint284.Center := Vector3(-0.05,0.466,0);
HAnimJoint284.SetSkinCoordIndex([362,363,364,365,366,367,368,369]);
HAnimJoint284.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment285 := THAnimSegmentNode.Create;
HAnimSegment285.NameField := 'r_calf';
Transform286 := TTransformNode.Create;
Transform286.Translation := Vector3(-0.1,0.4913,0);
Shape287 := TShapeNode.Create;
Shape287 := Shape54;
{ .AddChild }
Transform286.AddChildren([Shape287]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform286]);
Shape288 := TShapeNode.Create;
Appearance289 := TAppearanceNode.Create;
Appearance289 := Appearance68;
{ .SetAppearance }
Shape288.Appearance := Appearance289;
IndexedLineSet290 := TIndexedLineSetNode.Create;
IndexedLineSet290.SetCoordIndex([0,1,-1]);
Coordinate291 := TCoordinateNode.Create;
Coordinate291.SetPoint([Vector3(-0.1,0.4913,0),Vector3(-0.1,0.0712,0)]);
{ .SetCoord }
IndexedLineSet290.Coord := Coordinate291;
{ .SetGeometry }
Shape288.Geometry := IndexedLineSet290;
{ .AddChildren }
HAnimSegment285.AddChildren([Shape288]);
Transform292 := TTransformNode.Create;
Transform292.Translation := Vector3(-0.115,0.466,0.06);
Shape293 := TShapeNode.Create;
Shape293 := Shape73;
{ .AddChild }
Transform292.AddChildren([Shape293]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform292]);
Transform294 := TTransformNode.Create;
Transform294.Translation := Vector3(-0.115,0.466,-0.055);
Shape295 := TShapeNode.Create;
Shape295 := Shape73;
{ .AddChild }
Transform294.AddChildren([Shape295]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform294]);
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(-0.17,0.466,0);
Shape297 := TShapeNode.Create;
Shape297 := Shape73;
{ .AddChild }
Transform296.AddChildren([Shape297]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform296]);
Transform298 := TTransformNode.Create;
Transform298.Translation := Vector3(-0.05,0.466,0);
Shape299 := TShapeNode.Create;
Shape299 := Shape73;
{ .AddChild }
Transform298.AddChildren([Shape299]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform298]);
Transform300 := TTransformNode.Create;
Transform300.Translation := Vector3(-0.17,0.3,0);
Shape301 := TShapeNode.Create;
Shape301 := Shape73;
{ .AddChild }
Transform300.AddChildren([Shape301]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform300]);
Transform302 := TTransformNode.Create;
Transform302.Translation := Vector3(-0.06,0.3,0);
Shape303 := TShapeNode.Create;
Shape303 := Shape73;
{ .AddChild }
Transform302.AddChildren([Shape303]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform302]);
Transform304 := TTransformNode.Create;
Transform304.Translation := Vector3(-0.1,0.3,-0.05);
Shape305 := TShapeNode.Create;
Shape305 := Shape73;
{ .AddChild }
Transform304.AddChildren([Shape305]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform304]);
Transform306 := TTransformNode.Create;
Transform306.Translation := Vector3(-0.1,0.3,0.05);
Shape307 := TShapeNode.Create;
Shape307 := Shape73;
{ .AddChild }
Transform306.AddChildren([Shape307]);
{ .AddChildren }
HAnimSegment285.AddChildren([Transform306]);
HAnimSite308 := THAnimSiteNode.Create;
HAnimSite308.NameField := 'r_lateral_malleolus';
HAnimSite308.Translation := Vector3(-0.15,0.07,0);
Shape309 := TShapeNode.Create;
Shape309 := Shape61;
{ .AddChildren }
HAnimSite308.AddChildren([Shape309]);
{ .AddChildren }
HAnimSegment285.AddChildren([HAnimSite308]);
HAnimSite310 := THAnimSiteNode.Create;
HAnimSite310.NameField := 'r_medial_malleolus';
HAnimSite310.Translation := Vector3(-0.085,0.086,0.0125);
Shape311 := TShapeNode.Create;
Shape311 := Shape61;
{ .AddChildren }
HAnimSite310.AddChildren([Shape311]);
{ .AddChildren }
HAnimSegment285.AddChildren([HAnimSite310]);
{ .AddChildren }
HAnimJoint284.AddChildren([HAnimSegment285]);
HAnimJoint312 := THAnimJointNode.Create;
HAnimJoint312.NameField := 'r_ankle';
HAnimJoint312.Rotation := Vector4(-1.00000000000001,0,0,0.337435958789841);
HAnimJoint312.Center := Vector3(-0.115,0.069,0);
HAnimJoint312.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint312.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment313 := THAnimSegmentNode.Create;
HAnimSegment313.NameField := 'r_hindfoot';
Transform314 := TTransformNode.Create;
Transform314.Translation := Vector3(-0.1,0.0712,0);
Shape315 := TShapeNode.Create;
Shape315 := Shape54;
{ .AddChild }
Transform314.AddChildren([Shape315]);
{ .AddChildren }
HAnimSegment313.AddChildren([Transform314]);
Shape316 := TShapeNode.Create;
Appearance317 := TAppearanceNode.Create;
Appearance317 := Appearance68;
{ .SetAppearance }
Shape316.Appearance := Appearance317;
IndexedLineSet318 := TIndexedLineSetNode.Create;
IndexedLineSet318.SetCoordIndex([0,1,-1]);
Coordinate319 := TCoordinateNode.Create;
Coordinate319.SetPoint([Vector3(-0.1,0.0712,0),Vector3(-0.1,0.015,-0.01)]);
{ .SetCoord }
IndexedLineSet318.Coord := Coordinate319;
{ .SetGeometry }
Shape316.Geometry := IndexedLineSet318;
{ .AddChildren }
HAnimSegment313.AddChildren([Shape316]);
Transform320 := TTransformNode.Create;
Transform320.Translation := Vector3(-0.15,0.07,0);
Shape321 := TShapeNode.Create;
Shape321 := Shape73;
{ .AddChild }
Transform320.AddChildren([Shape321]);
{ .AddChildren }
HAnimSegment313.AddChildren([Transform320]);
Transform322 := TTransformNode.Create;
Transform322.Translation := Vector3(-0.085,0.086,0.0125);
Shape323 := TShapeNode.Create;
Shape323 := Shape73;
{ .AddChild }
Transform322.AddChildren([Shape323]);
{ .AddChildren }
HAnimSegment313.AddChildren([Transform322]);
Transform324 := TTransformNode.Create;
Transform324.Translation := Vector3(-0.115,0.069,-0.045);
Shape325 := TShapeNode.Create;
Shape325 := Shape73;
{ .AddChild }
Transform324.AddChildren([Shape325]);
{ .AddChildren }
HAnimSegment313.AddChildren([Transform324]);
Transform326 := TTransformNode.Create;
Transform326.Translation := Vector3(-0.117,0.0975,0.0615);
Shape327 := TShapeNode.Create;
Shape327 := Shape73;
{ .AddChild }
Transform326.AddChildren([Shape327]);
{ .AddChildren }
HAnimSegment313.AddChildren([Transform326]);
HAnimSite328 := THAnimSiteNode.Create;
HAnimSite328.NameField := 'r_sphyrion';
HAnimSite328.Translation := Vector3(-0.09,0.056,0.0125);
Shape329 := TShapeNode.Create;
Shape329 := Shape61;
{ .AddChildren }
HAnimSite328.AddChildren([Shape329]);
{ .AddChildren }
HAnimSegment313.AddChildren([HAnimSite328]);
HAnimSite330 := THAnimSiteNode.Create;
HAnimSite330.NameField := 'r_calcaneous_post';
HAnimSite330.Translation := Vector3(-0.115,0.04,-0.055);
Shape331 := TShapeNode.Create;
Shape331 := Shape61;
{ .AddChildren }
HAnimSite330.AddChildren([Shape331]);
{ .AddChildren }
HAnimSegment313.AddChildren([HAnimSite330]);
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimSegment313]);
HAnimJoint332 := THAnimJointNode.Create;
HAnimJoint332.NameField := 'r_subtalar';
HAnimJoint332.Rotation := Vector4(1.00000000000014,0,0,0.0816433505734676);
HAnimJoint332.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint332.SetSkinCoordIndex([374,375,376]);
HAnimJoint332.SetSkinCoordWeight([1,1,1]);
HAnimSegment333 := THAnimSegmentNode.Create;
HAnimSegment333.NameField := 'r_midproximal';
Transform334 := TTransformNode.Create;
Transform334.Translation := Vector3(-0.1,0.015,-0.01);
Shape335 := TShapeNode.Create;
Shape335 := Shape54;
{ .AddChild }
Transform334.AddChildren([Shape335]);
{ .AddChildren }
HAnimSegment333.AddChildren([Transform334]);
Shape336 := TShapeNode.Create;
Appearance337 := TAppearanceNode.Create;
Appearance337 := Appearance68;
{ .SetAppearance }
Shape336.Appearance := Appearance337;
IndexedLineSet338 := TIndexedLineSetNode.Create;
IndexedLineSet338.SetCoordIndex([0,1,-1]);
Coordinate339 := TCoordinateNode.Create;
Coordinate339.SetPoint([Vector3(-0.1,0.015,-0.01),Vector3(-0.1,0.02,0.07)]);
{ .SetCoord }
IndexedLineSet338.Coord := Coordinate339;
{ .SetGeometry }
Shape336.Geometry := IndexedLineSet338;
{ .AddChildren }
HAnimSegment333.AddChildren([Shape336]);
Transform340 := TTransformNode.Create;
Transform340.Translation := Vector3(-0.1375,0.006,-0.03);
Shape341 := TShapeNode.Create;
Shape341 := Shape73;
{ .AddChild }
Transform340.AddChildren([Shape341]);
{ .AddChildren }
HAnimSegment333.AddChildren([Transform340]);
Transform342 := TTransformNode.Create;
Transform342.Translation := Vector3(-0.095,0.006,-0.03);
Shape343 := TShapeNode.Create;
Shape343 := Shape73;
{ .AddChild }
Transform342.AddChildren([Shape343]);
{ .AddChildren }
HAnimSegment333.AddChildren([Transform342]);
Transform344 := TTransformNode.Create;
Transform344.Translation := Vector3(-0.095,0.006,-0.03);
Shape345 := TShapeNode.Create;
Shape345 := Shape73;
{ .AddChild }
Transform344.AddChildren([Shape345]);
{ .AddChildren }
HAnimSegment333.AddChildren([Transform344]);
{ .AddChildren }
HAnimJoint332.AddChildren([HAnimSegment333]);
HAnimJoint346 := THAnimJointNode.Create;
HAnimJoint346.NameField := 'r_midtarsal';
HAnimJoint346.Rotation := Vector4(-1.00000000000001,0,0,0.14271113543743);
HAnimJoint346.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint346.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint346.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment347 := THAnimSegmentNode.Create;
HAnimSegment347.NameField := 'r_middistal';
Transform348 := TTransformNode.Create;
Transform348.Translation := Vector3(-0.1,0.02,0.07);
Shape349 := TShapeNode.Create;
Shape349 := Shape54;
{ .AddChild }
Transform348.AddChildren([Shape349]);
{ .AddChildren }
HAnimSegment347.AddChildren([Transform348]);
Shape350 := TShapeNode.Create;
Appearance351 := TAppearanceNode.Create;
Appearance351 := Appearance68;
{ .SetAppearance }
Shape350.Appearance := Appearance351;
IndexedLineSet352 := TIndexedLineSetNode.Create;
IndexedLineSet352.SetCoordIndex([0,1,-1]);
Coordinate353 := TCoordinateNode.Create;
Coordinate353.SetPoint([Vector3(-0.1,0.02,0.07),Vector3(-0.1,0.01,0.14)]);
{ .SetCoord }
IndexedLineSet352.Coord := Coordinate353;
{ .SetGeometry }
Shape350.Geometry := IndexedLineSet352;
{ .AddChildren }
HAnimSegment347.AddChildren([Shape350]);
Transform354 := TTransformNode.Create;
Transform354.Translation := Vector3(-0.115,0.06,0.1);
Shape355 := TShapeNode.Create;
Shape355 := Shape73;
{ .AddChild }
Transform354.AddChildren([Shape355]);
{ .AddChildren }
HAnimSegment347.AddChildren([Transform354]);
Transform356 := TTransformNode.Create;
Transform356.Translation := Vector3(-0.115,0,0.07);
Shape357 := TShapeNode.Create;
Shape357 := Shape73;
{ .AddChild }
Transform356.AddChildren([Shape357]);
{ .AddChildren }
HAnimSegment347.AddChildren([Transform356]);
Transform358 := TTransformNode.Create;
Transform358.Translation := Vector3(-0.165,0,0.07);
Shape359 := TShapeNode.Create;
Shape359 := Shape73;
{ .AddChild }
Transform358.AddChildren([Shape359]);
{ .AddChildren }
HAnimSegment347.AddChildren([Transform358]);
Transform360 := TTransformNode.Create;
Transform360.Translation := Vector3(-0.165,0,0.07);
Shape361 := TShapeNode.Create;
Shape361 := Shape73;
{ .AddChild }
Transform360.AddChildren([Shape361]);
{ .AddChildren }
HAnimSegment347.AddChildren([Transform360]);
HAnimSite362 := THAnimSiteNode.Create;
HAnimSite362.NameField := 'r_metatarsal_pha1';
HAnimSite362.Translation := Vector3(-0.115,0.02,0.122);
Shape363 := TShapeNode.Create;
Shape363 := Shape61;
{ .AddChildren }
HAnimSite362.AddChildren([Shape363]);
{ .AddChildren }
HAnimSegment347.AddChildren([HAnimSite362]);
{ .AddChildren }
HAnimJoint346.AddChildren([HAnimSegment347]);
HAnimJoint364 := THAnimJointNode.Create;
HAnimJoint364.NameField := 'r_metatarsal';
HAnimJoint364.Rotation := Vector4(-1.00000000000001,0,0,0.264860122523209);
HAnimJoint364.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint364.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint364.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment365 := THAnimSegmentNode.Create;
HAnimSegment365.NameField := 'r_forefoot';
Transform366 := TTransformNode.Create;
Transform366.Translation := Vector3(-0.1086,0.01,0.14);
Shape367 := TShapeNode.Create;
Shape367 := Shape54;
{ .AddChild }
Transform366.AddChildren([Shape367]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform366]);
Shape368 := TShapeNode.Create;
Appearance369 := TAppearanceNode.Create;
Appearance369 := Appearance68;
{ .SetAppearance }
Shape368.Appearance := Appearance369;
IndexedLineSet370 := TIndexedLineSetNode.Create;
IndexedLineSet370.SetCoordIndex([0,1,-1]);
Coordinate371 := TCoordinateNode.Create;
Coordinate371.SetPoint([Vector3(-0.1,0.01,0.14),Vector3(-0.1043,0.0016,0.2)]);
{ .SetCoord }
IndexedLineSet370.Coord := Coordinate371;
{ .SetGeometry }
Shape368.Geometry := IndexedLineSet370;
{ .AddChildren }
HAnimSegment365.AddChildren([Shape368]);
Transform372 := TTransformNode.Create;
Transform372.Translation := Vector3(-0.115,0.04,0.13);
Shape373 := TShapeNode.Create;
Shape373 := Shape73;
{ .AddChild }
Transform372.AddChildren([Shape373]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform372]);
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(-0.125,0,0.12);
Shape375 := TShapeNode.Create;
Shape375 := Shape73;
{ .AddChild }
Transform374.AddChildren([Shape375]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform374]);
Transform376 := TTransformNode.Create;
Transform376.Translation := Vector3(-0.165,0,0.12);
Shape377 := TShapeNode.Create;
Shape377 := Shape73;
{ .AddChild }
Transform376.AddChildren([Shape377]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform376]);
Transform378 := TTransformNode.Create;
Transform378.Translation := Vector3(-0.087,0,0.122);
Shape379 := TShapeNode.Create;
Shape379 := Shape73;
{ .AddChild }
Transform378.AddChildren([Shape379]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform378]);
Transform380 := TTransformNode.Create;
Transform380.Translation := Vector3(-0.09,0.012,0.188);
Shape381 := TShapeNode.Create;
Shape381 := Shape73;
{ .AddChild }
Transform380.AddChildren([Shape381]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform380]);
Transform382 := TTransformNode.Create;
Transform382.Translation := Vector3(-0.11,0.011,0.19);
Shape383 := TShapeNode.Create;
Shape383 := Shape73;
{ .AddChild }
Transform382.AddChildren([Shape383]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform382]);
Transform384 := TTransformNode.Create;
Transform384.Translation := Vector3(-0.128,0.011,0.185);
Shape385 := TShapeNode.Create;
Shape385 := Shape73;
{ .AddChild }
Transform384.AddChildren([Shape385]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform384]);
Transform386 := TTransformNode.Create;
Transform386.Translation := Vector3(-0.142,0.011,0.178);
Shape387 := TShapeNode.Create;
Shape387 := Shape73;
{ .AddChild }
Transform386.AddChildren([Shape387]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform386]);
Transform388 := TTransformNode.Create;
Transform388.Translation := Vector3(-0.154,0.01,0.168);
Shape389 := TShapeNode.Create;
Shape389 := Shape73;
{ .AddChild }
Transform388.AddChildren([Shape389]);
{ .AddChildren }
HAnimSegment365.AddChildren([Transform388]);
HAnimSite390 := THAnimSiteNode.Create;
HAnimSite390.NameField := 'r_metatarsal_pha5';
HAnimSite390.Translation := Vector3(-0.165,0.01,0.12);
Shape391 := TShapeNode.Create;
Shape391 := Shape61;
{ .AddChildren }
HAnimSite390.AddChildren([Shape391]);
{ .AddChildren }
HAnimSegment365.AddChildren([HAnimSite390]);
HAnimSite392 := THAnimSiteNode.Create;
HAnimSite392.NameField := 'r_digit2';
HAnimSite392.Translation := Vector3(-0.11,0.011,0.19);
Shape393 := TShapeNode.Create;
Shape393 := Shape61;
{ .AddChildren }
HAnimSite392.AddChildren([Shape393]);
{ .AddChildren }
HAnimSegment365.AddChildren([HAnimSite392]);
{ .AddChildren }
HAnimJoint364.AddChildren([HAnimSegment365]);
{ .AddChildren }
HAnimJoint346.AddChildren([HAnimJoint364]);
{ .AddChildren }
HAnimJoint332.AddChildren([HAnimJoint346]);
{ .AddChildren }
HAnimJoint312.AddChildren([HAnimJoint332]);
{ .AddChildren }
HAnimJoint284.AddChildren([HAnimJoint312]);
{ .AddChildren }
HAnimJoint258.AddChildren([HAnimJoint284]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint258]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimJoint92]);
HAnimJoint394 := THAnimJointNode.Create;
HAnimJoint394.NameField := 'vl5';
HAnimJoint394.Rotation := Vector4(-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253);
HAnimJoint394.Center := Vector3(0,1.045,-0.095);
HAnimJoint394.SetSkinCoordIndex([28,76]);
HAnimJoint394.SetSkinCoordWeight([1,1]);
HAnimSegment395 := THAnimSegmentNode.Create;
HAnimSegment395.NameField := 'toPelvis';
Shape396 := TShapeNode.Create;
Appearance397 := TAppearanceNode.Create;
Appearance397 := Appearance68;
{ .SetAppearance }
Shape396.Appearance := Appearance397;
IndexedLineSet398 := TIndexedLineSetNode.Create;
IndexedLineSet398.SetCoordIndex([0,1,-1]);
Coordinate399 := TCoordinateNode.Create;
Coordinate399.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
IndexedLineSet398.Coord := Coordinate399;
{ .SetGeometry }
Shape396.Geometry := IndexedLineSet398;
{ .AddChildren }
HAnimSegment395.AddChildren([Shape396]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimSegment395]);
HAnimSegment400 := THAnimSegmentNode.Create;
HAnimSegment400.NameField := 'l5';
Shape401 := TShapeNode.Create;
Appearance402 := TAppearanceNode.Create;
Appearance402 := Appearance68;
{ .SetAppearance }
Shape401.Appearance := Appearance402;
IndexedLineSet403 := TIndexedLineSetNode.Create;
IndexedLineSet403.SetCoordIndex([0,1,-1]);
Coordinate404 := TCoordinateNode.Create;
Coordinate404.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,1.068,-0.085)]);
{ .SetCoord }
IndexedLineSet403.Coord := Coordinate404;
{ .SetGeometry }
Shape401.Geometry := IndexedLineSet403;
{ .AddChildren }
HAnimSegment400.AddChildren([Shape401]);
HAnimSite405 := THAnimSiteNode.Create;
HAnimSite405.NameField := 'waist_preferred_post';
HAnimSite405.Translation := Vector3(0,1.0915,-0.1091);
Shape406 := TShapeNode.Create;
Shape406 := Shape61;
{ .AddChildren }
HAnimSite405.AddChildren([Shape406]);
{ .AddChildren }
HAnimSegment400.AddChildren([HAnimSite405]);
HAnimSite407 := THAnimSiteNode.Create;
HAnimSite407.NameField := 'navel';
HAnimSite407.Translation := Vector3(0,1.07225,0.09);
Shape408 := TShapeNode.Create;
Shape408 := Shape61;
{ .AddChildren }
HAnimSite407.AddChildren([Shape408]);
{ .AddChildren }
HAnimSegment400.AddChildren([HAnimSite407]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimSegment400]);
HAnimJoint409 := THAnimJointNode.Create;
HAnimJoint409.NameField := 'vl4';
HAnimJoint409.Center := Vector3(0,1.068,-0.085);
HAnimSegment410 := THAnimSegmentNode.Create;
HAnimSegment410.NameField := 'l4';
Shape411 := TShapeNode.Create;
Appearance412 := TAppearanceNode.Create;
Appearance412 := Appearance68;
{ .SetAppearance }
Shape411.Appearance := Appearance412;
IndexedLineSet413 := TIndexedLineSetNode.Create;
IndexedLineSet413.SetCoordIndex([0,1,-1]);
Coordinate414 := TCoordinateNode.Create;
Coordinate414.SetPoint([Vector3(0,1.068,-0.085),Vector3(0,1.092,-0.0725)]);
{ .SetCoord }
IndexedLineSet413.Coord := Coordinate414;
{ .SetGeometry }
Shape411.Geometry := IndexedLineSet413;
{ .AddChildren }
HAnimSegment410.AddChildren([Shape411]);
Transform415 := TTransformNode.Create;
Transform415.Translation := Vector3(0,1.068,-0.085);
Shape416 := TShapeNode.Create;
Shape416 := Shape54;
{ .AddChild }
Transform415.AddChildren([Shape416]);
{ .AddChildren }
HAnimSegment410.AddChildren([Transform415]);
{ .AddChildren }
HAnimJoint409.AddChildren([HAnimSegment410]);
HAnimJoint417 := THAnimJointNode.Create;
HAnimJoint417.NameField := 'vl3';
HAnimJoint417.Center := Vector3(0,1.092,-0.0725);
HAnimSegment418 := THAnimSegmentNode.Create;
HAnimSegment418.NameField := 'l3';
Shape419 := TShapeNode.Create;
Appearance420 := TAppearanceNode.Create;
Appearance420 := Appearance68;
{ .SetAppearance }
Shape419.Appearance := Appearance420;
IndexedLineSet421 := TIndexedLineSetNode.Create;
IndexedLineSet421.SetCoordIndex([0,1,-1]);
Coordinate422 := TCoordinateNode.Create;
Coordinate422.SetPoint([Vector3(0,1.092,-0.0725),Vector3(0,1.12,-0.065)]);
{ .SetCoord }
IndexedLineSet421.Coord := Coordinate422;
{ .SetGeometry }
Shape419.Geometry := IndexedLineSet421;
{ .AddChildren }
HAnimSegment418.AddChildren([Shape419]);
Transform423 := TTransformNode.Create;
Transform423.Translation := Vector3(0,1.092,-0.0725);
Shape424 := TShapeNode.Create;
Shape424 := Shape54;
{ .AddChild }
Transform423.AddChildren([Shape424]);
{ .AddChildren }
HAnimSegment418.AddChildren([Transform423]);
{ .AddChildren }
HAnimJoint417.AddChildren([HAnimSegment418]);
HAnimJoint425 := THAnimJointNode.Create;
HAnimJoint425.NameField := 'vl2';
HAnimJoint425.Center := Vector3(0,1.12,-0.065);
HAnimJoint425.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint425.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment426 := THAnimSegmentNode.Create;
HAnimSegment426.NameField := 'l2';
Shape427 := TShapeNode.Create;
Appearance428 := TAppearanceNode.Create;
Appearance428 := Appearance68;
{ .SetAppearance }
Shape427.Appearance := Appearance428;
IndexedLineSet429 := TIndexedLineSetNode.Create;
IndexedLineSet429.SetCoordIndex([0,1,-1]);
Coordinate430 := TCoordinateNode.Create;
Coordinate430.SetPoint([Vector3(0,1.12,-0.065),Vector3(0,1.1459,-0.0625)]);
{ .SetCoord }
IndexedLineSet429.Coord := Coordinate430;
{ .SetGeometry }
Shape427.Geometry := IndexedLineSet429;
{ .AddChildren }
HAnimSegment426.AddChildren([Shape427]);
Transform431 := TTransformNode.Create;
Transform431.Translation := Vector3(0,1.12,-0.065);
Shape432 := TShapeNode.Create;
Shape432 := Shape54;
{ .AddChild }
Transform431.AddChildren([Shape432]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform431]);
Transform433 := TTransformNode.Create;
Transform433.Translation := Vector3(-0.087,1.19,-0.09);
Shape434 := TShapeNode.Create;
Shape434 := Shape73;
{ .AddChild }
Transform433.AddChildren([Shape434]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform433]);
Transform435 := TTransformNode.Create;
Transform435.Translation := Vector3(0.087,1.19,-0.09);
Shape436 := TShapeNode.Create;
Shape436 := Shape73;
{ .AddChild }
Transform435.AddChildren([Shape436]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform435]);
Transform437 := TTransformNode.Create;
Transform437.Translation := Vector3(0.172,1.32,-0.03);
Shape438 := TShapeNode.Create;
Shape438 := Shape73;
{ .AddChild }
Transform437.AddChildren([Shape438]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform437]);
Transform439 := TTransformNode.Create;
Transform439.Translation := Vector3(-0.172,1.32,-0.03);
Shape440 := TShapeNode.Create;
Shape440 := Shape73;
{ .AddChild }
Transform439.AddChildren([Shape440]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform439]);
Transform441 := TTransformNode.Create;
Transform441.Translation := Vector3(0.15,1.23,-0.015);
Shape442 := TShapeNode.Create;
Shape442 := Shape73;
{ .AddChild }
Transform441.AddChildren([Shape442]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform441]);
Transform443 := TTransformNode.Create;
Transform443.Translation := Vector3(-0.15,1.23,-0.015);
Shape444 := TShapeNode.Create;
Shape444 := Shape73;
{ .AddChild }
Transform443.AddChildren([Shape444]);
{ .AddChildren }
HAnimSegment426.AddChildren([Transform443]);
HAnimSite445 := THAnimSiteNode.Create;
HAnimSite445.NameField := 'r_rib10';
HAnimSite445.Translation := Vector3(-0.087,1.19,0.09);
Shape446 := TShapeNode.Create;
Shape446 := Shape61;
{ .AddChildren }
HAnimSite445.AddChildren([Shape446]);
{ .AddChildren }
HAnimSegment426.AddChildren([HAnimSite445]);
HAnimSite447 := THAnimSiteNode.Create;
HAnimSite447.NameField := 'l_rib10';
HAnimSite447.Translation := Vector3(0.087,1.19,0.09);
Shape448 := TShapeNode.Create;
Shape448 := Shape61;
{ .AddChildren }
HAnimSite447.AddChildren([Shape448]);
{ .AddChildren }
HAnimSegment426.AddChildren([HAnimSite447]);
HAnimSite449 := THAnimSiteNode.Create;
HAnimSite449.NameField := 'rib10_midspine';
HAnimSite449.Translation := Vector3(0,1.1908,-0.1113);
Shape450 := TShapeNode.Create;
Shape450 := Shape61;
{ .AddChildren }
HAnimSite449.AddChildren([Shape450]);
{ .AddChildren }
HAnimSegment426.AddChildren([HAnimSite449]);
{ .AddChildren }
HAnimJoint425.AddChildren([HAnimSegment426]);
HAnimJoint451 := THAnimJointNode.Create;
HAnimJoint451.NameField := 'vl1';
HAnimJoint451.Center := Vector3(0,1.1459,-0.0625);
HAnimSegment452 := THAnimSegmentNode.Create;
HAnimSegment452.NameField := 'l1';
Shape453 := TShapeNode.Create;
Appearance454 := TAppearanceNode.Create;
Appearance454 := Appearance68;
{ .SetAppearance }
Shape453.Appearance := Appearance454;
IndexedLineSet455 := TIndexedLineSetNode.Create;
IndexedLineSet455.SetCoordIndex([0,1,-1]);
Coordinate456 := TCoordinateNode.Create;
Coordinate456.SetPoint([Vector3(0,1.1459,-0.0625),Vector3(0,1.179,-0.068)]);
{ .SetCoord }
IndexedLineSet455.Coord := Coordinate456;
{ .SetGeometry }
Shape453.Geometry := IndexedLineSet455;
{ .AddChildren }
HAnimSegment452.AddChildren([Shape453]);
Transform457 := TTransformNode.Create;
Transform457.Translation := Vector3(0,1.1459,-0.0625);
Shape458 := TShapeNode.Create;
Shape458 := Shape54;
{ .AddChild }
Transform457.AddChildren([Shape458]);
{ .AddChildren }
HAnimSegment452.AddChildren([Transform457]);
{ .AddChildren }
HAnimJoint451.AddChildren([HAnimSegment452]);
HAnimJoint459 := THAnimJointNode.Create;
HAnimJoint459.NameField := 'vt12';
HAnimJoint459.Center := Vector3(0,1.179,-0.068);
HAnimSegment460 := THAnimSegmentNode.Create;
HAnimSegment460.NameField := 't12';
Shape461 := TShapeNode.Create;
Appearance462 := TAppearanceNode.Create;
Appearance462 := Appearance68;
{ .SetAppearance }
Shape461.Appearance := Appearance462;
IndexedLineSet463 := TIndexedLineSetNode.Create;
IndexedLineSet463.SetCoordIndex([0,1,-1]);
Coordinate464 := TCoordinateNode.Create;
Coordinate464.SetPoint([Vector3(0,1.179,-0.068),Vector3(0,1.242,-0.09)]);
{ .SetCoord }
IndexedLineSet463.Coord := Coordinate464;
{ .SetGeometry }
Shape461.Geometry := IndexedLineSet463;
{ .AddChildren }
HAnimSegment460.AddChildren([Shape461]);
Transform465 := TTransformNode.Create;
Transform465.Translation := Vector3(0,1.179,-0.068);
Shape466 := TShapeNode.Create;
Shape466 := Shape54;
{ .AddChild }
Transform465.AddChildren([Shape466]);
{ .AddChildren }
HAnimSegment460.AddChildren([Transform465]);
{ .AddChildren }
HAnimJoint459.AddChildren([HAnimSegment460]);
HAnimJoint467 := THAnimJointNode.Create;
HAnimJoint467.NameField := 'vt11';
HAnimJoint467.Center := Vector3(0,1.2679,-0.081);
HAnimSegment468 := THAnimSegmentNode.Create;
HAnimSegment468.NameField := 't11';
Shape469 := TShapeNode.Create;
Appearance470 := TAppearanceNode.Create;
Appearance470 := Appearance68;
{ .SetAppearance }
Shape469.Appearance := Appearance470;
IndexedLineSet471 := TIndexedLineSetNode.Create;
IndexedLineSet471.SetCoordIndex([0,1,-1]);
Coordinate472 := TCoordinateNode.Create;
Coordinate472.SetPoint([Vector3(0,1.2145,-0.0755),Vector3(0,1.242,-0.09)]);
{ .SetCoord }
IndexedLineSet471.Coord := Coordinate472;
{ .SetGeometry }
Shape469.Geometry := IndexedLineSet471;
{ .AddChildren }
HAnimSegment468.AddChildren([Shape469]);
Transform473 := TTransformNode.Create;
Transform473.Translation := Vector3(0,1.2145,-0.0755);
Shape474 := TShapeNode.Create;
Shape474 := Shape54;
{ .AddChild }
Transform473.AddChildren([Shape474]);
{ .AddChildren }
HAnimSegment468.AddChildren([Transform473]);
{ .AddChildren }
HAnimJoint467.AddChildren([HAnimSegment468]);
HAnimJoint475 := THAnimJointNode.Create;
HAnimJoint475.NameField := 'vt10';
HAnimJoint475.Center := Vector3(0,1.242,-0.09);
HAnimJoint475.SetSkinCoordIndex([15]);
HAnimJoint475.SetSkinCoordWeight([1]);
HAnimSegment476 := THAnimSegmentNode.Create;
HAnimSegment476.NameField := 't10';
Shape477 := TShapeNode.Create;
Appearance478 := TAppearanceNode.Create;
Appearance478 := Appearance68;
{ .SetAppearance }
Shape477.Appearance := Appearance478;
IndexedLineSet479 := TIndexedLineSetNode.Create;
IndexedLineSet479.SetCoordIndex([0,1,-1]);
Coordinate480 := TCoordinateNode.Create;
Coordinate480.SetPoint([Vector3(0,1.242,-0.09),Vector3(0,1.268,-0.1)]);
{ .SetCoord }
IndexedLineSet479.Coord := Coordinate480;
{ .SetGeometry }
Shape477.Geometry := IndexedLineSet479;
{ .AddChildren }
HAnimSegment476.AddChildren([Shape477]);
Transform481 := TTransformNode.Create;
Transform481.Translation := Vector3(0,1.242,-0.09);
Shape482 := TShapeNode.Create;
Shape482 := Shape54;
{ .AddChild }
Transform481.AddChildren([Shape482]);
{ .AddChildren }
HAnimSegment476.AddChildren([Transform481]);
HAnimSite483 := THAnimSiteNode.Create;
HAnimSite483.NameField := 'substernale';
HAnimSite483.Translation := Vector3(0,1.25,0.113);
Shape484 := TShapeNode.Create;
Shape484 := Shape61;
{ .AddChildren }
HAnimSite483.AddChildren([Shape484]);
{ .AddChildren }
HAnimSegment476.AddChildren([HAnimSite483]);
{ .AddChildren }
HAnimJoint475.AddChildren([HAnimSegment476]);
HAnimJoint485 := THAnimJointNode.Create;
HAnimJoint485.NameField := 'vt9';
HAnimJoint485.Center := Vector3(0,1.268,-0.1);
HAnimJoint485.SetSkinCoordIndex([13,14]);
HAnimJoint485.SetSkinCoordWeight([1,1]);
HAnimSegment486 := THAnimSegmentNode.Create;
HAnimSegment486.NameField := 't9';
Shape487 := TShapeNode.Create;
Appearance488 := TAppearanceNode.Create;
Appearance488 := Appearance68;
{ .SetAppearance }
Shape487.Appearance := Appearance488;
IndexedLineSet489 := TIndexedLineSetNode.Create;
IndexedLineSet489.SetCoordIndex([0,1,-1]);
Coordinate490 := TCoordinateNode.Create;
Coordinate490.SetPoint([Vector3(0,1.268,-0.1),Vector3(0,1.294,-0.11)]);
{ .SetCoord }
IndexedLineSet489.Coord := Coordinate490;
{ .SetGeometry }
Shape487.Geometry := IndexedLineSet489;
{ .AddChildren }
HAnimSegment486.AddChildren([Shape487]);
Transform491 := TTransformNode.Create;
Transform491.Translation := Vector3(0,1.268,-0.1);
Shape492 := TShapeNode.Create;
Shape492 := Shape54;
{ .AddChild }
Transform491.AddChildren([Shape492]);
{ .AddChildren }
HAnimSegment486.AddChildren([Transform491]);
HAnimSite493 := THAnimSiteNode.Create;
HAnimSite493.NameField := 'r_thelion';
HAnimSite493.Translation := Vector3(-0.1135,1.318,0.095);
Shape494 := TShapeNode.Create;
Shape494 := Shape61;
{ .AddChildren }
HAnimSite493.AddChildren([Shape494]);
{ .AddChildren }
HAnimSegment486.AddChildren([HAnimSite493]);
HAnimSite495 := THAnimSiteNode.Create;
HAnimSite495.NameField := 'l_thelion';
HAnimSite495.Translation := Vector3(0.1135,1.318,0.095);
Shape496 := TShapeNode.Create;
Shape496 := Shape61;
{ .AddChildren }
HAnimSite495.AddChildren([Shape496]);
{ .AddChildren }
HAnimSegment486.AddChildren([HAnimSite495]);
{ .AddChildren }
HAnimJoint485.AddChildren([HAnimSegment486]);
HAnimJoint497 := THAnimJointNode.Create;
HAnimJoint497.NameField := 'vt8';
HAnimJoint497.Center := Vector3(0,1.294,-0.11);
HAnimSegment498 := THAnimSegmentNode.Create;
HAnimSegment498.NameField := 't8';
Shape499 := TShapeNode.Create;
Appearance500 := TAppearanceNode.Create;
Appearance500 := Appearance68;
{ .SetAppearance }
Shape499.Appearance := Appearance500;
IndexedLineSet501 := TIndexedLineSetNode.Create;
IndexedLineSet501.SetCoordIndex([0,1,-1]);
Coordinate502 := TCoordinateNode.Create;
Coordinate502.SetPoint([Vector3(0,1.294,-0.11),Vector3(0,1.352,-0.12)]);
{ .SetCoord }
IndexedLineSet501.Coord := Coordinate502;
{ .SetGeometry }
Shape499.Geometry := IndexedLineSet501;
{ .AddChildren }
HAnimSegment498.AddChildren([Shape499]);
Transform503 := TTransformNode.Create;
Transform503.Translation := Vector3(0,1.294,-0.11);
Shape504 := TShapeNode.Create;
Shape504 := Shape54;
{ .AddChild }
Transform503.AddChildren([Shape504]);
{ .AddChildren }
HAnimSegment498.AddChildren([Transform503]);
{ .AddChildren }
HAnimJoint497.AddChildren([HAnimSegment498]);
HAnimJoint505 := THAnimJointNode.Create;
HAnimJoint505.NameField := 'vt7';
HAnimJoint505.Center := Vector3(0,1.323,-0.1155);
HAnimSegment506 := THAnimSegmentNode.Create;
HAnimSegment506.NameField := 't7';
Shape507 := TShapeNode.Create;
Appearance508 := TAppearanceNode.Create;
Appearance508 := Appearance68;
{ .SetAppearance }
Shape507.Appearance := Appearance508;
IndexedLineSet509 := TIndexedLineSetNode.Create;
IndexedLineSet509.SetCoordIndex([0,1,-1]);
Coordinate510 := TCoordinateNode.Create;
Coordinate510.SetPoint([Vector3(0,1.352,-0.12),Vector3(0,1.381,-0.1235)]);
{ .SetCoord }
IndexedLineSet509.Coord := Coordinate510;
{ .SetGeometry }
Shape507.Geometry := IndexedLineSet509;
{ .AddChildren }
HAnimSegment506.AddChildren([Shape507]);
Transform511 := TTransformNode.Create;
Transform511.Translation := Vector3(0,1.323,-0.1155);
Shape512 := TShapeNode.Create;
Shape512 := Shape54;
{ .AddChild }
Transform511.AddChildren([Shape512]);
{ .AddChildren }
HAnimSegment506.AddChildren([Transform511]);
{ .AddChildren }
HAnimJoint505.AddChildren([HAnimSegment506]);
HAnimJoint513 := THAnimJointNode.Create;
HAnimJoint513.NameField := 'vt6';
HAnimJoint513.Center := Vector3(0,1.352,-0.12);
HAnimSegment514 := THAnimSegmentNode.Create;
HAnimSegment514.NameField := 't6';
Shape515 := TShapeNode.Create;
Appearance516 := TAppearanceNode.Create;
Appearance516 := Appearance68;
{ .SetAppearance }
Shape515.Appearance := Appearance516;
IndexedLineSet517 := TIndexedLineSetNode.Create;
IndexedLineSet517.SetCoordIndex([0,1,-1]);
Coordinate518 := TCoordinateNode.Create;
Coordinate518.SetPoint([Vector3(0,1.381,-0.1235),Vector3(0,1.41,-0.1235)]);
{ .SetCoord }
IndexedLineSet517.Coord := Coordinate518;
{ .SetGeometry }
Shape515.Geometry := IndexedLineSet517;
{ .AddChildren }
HAnimSegment514.AddChildren([Shape515]);
Transform519 := TTransformNode.Create;
Transform519.Translation := Vector3(0,1.352,-0.12);
Shape520 := TShapeNode.Create;
Shape520 := Shape54;
{ .AddChild }
Transform519.AddChildren([Shape520]);
{ .AddChildren }
HAnimSegment514.AddChildren([Transform519]);
{ .AddChildren }
HAnimJoint513.AddChildren([HAnimSegment514]);
HAnimJoint521 := THAnimJointNode.Create;
HAnimJoint521.NameField := 'vt5';
HAnimJoint521.Center := Vector3(0,1.381,-0.1235);
HAnimSegment522 := THAnimSegmentNode.Create;
HAnimSegment522.NameField := 't5';
Shape523 := TShapeNode.Create;
Appearance524 := TAppearanceNode.Create;
Appearance524 := Appearance68;
{ .SetAppearance }
Shape523.Appearance := Appearance524;
IndexedLineSet525 := TIndexedLineSetNode.Create;
IndexedLineSet525.SetCoordIndex([0,1,-1]);
Coordinate526 := TCoordinateNode.Create;
Coordinate526.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ .SetCoord }
IndexedLineSet525.Coord := Coordinate526;
{ .SetGeometry }
Shape523.Geometry := IndexedLineSet525;
{ .AddChildren }
HAnimSegment522.AddChildren([Shape523]);
Transform527 := TTransformNode.Create;
Transform527.Translation := Vector3(0,1.381,-0.1235);
Shape528 := TShapeNode.Create;
Shape528 := Shape54;
{ .AddChild }
Transform527.AddChildren([Shape528]);
{ .AddChildren }
HAnimSegment522.AddChildren([Transform527]);
{ .AddChildren }
HAnimJoint521.AddChildren([HAnimSegment522]);
HAnimJoint529 := THAnimJointNode.Create;
HAnimJoint529.NameField := 'vt4';
HAnimJoint529.Center := Vector3(0,1.41,-0.1235);
HAnimJoint529.SetSkinCoordIndex([81]);
HAnimJoint529.SetSkinCoordWeight([1]);
HAnimSegment530 := THAnimSegmentNode.Create;
HAnimSegment530.NameField := 't4';
Shape531 := TShapeNode.Create;
Appearance532 := TAppearanceNode.Create;
Appearance532 := Appearance68;
{ .SetAppearance }
Shape531.Appearance := Appearance532;
IndexedLineSet533 := TIndexedLineSetNode.Create;
IndexedLineSet533.SetCoordIndex([0,1,-1]);
Coordinate534 := TCoordinateNode.Create;
Coordinate534.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ .SetCoord }
IndexedLineSet533.Coord := Coordinate534;
{ .SetGeometry }
Shape531.Geometry := IndexedLineSet533;
{ .AddChildren }
HAnimSegment530.AddChildren([Shape531]);
Transform535 := TTransformNode.Create;
Transform535.Translation := Vector3(0,1.41,-0.1235);
Shape536 := TShapeNode.Create;
Shape536 := Shape54;
{ .AddChild }
Transform535.AddChildren([Shape536]);
{ .AddChildren }
HAnimSegment530.AddChildren([Transform535]);
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(0,1.41,-0.145);
Shape538 := TShapeNode.Create;
Shape538 := Shape73;
{ .AddChild }
Transform537.AddChildren([Shape538]);
{ .AddChildren }
HAnimSegment530.AddChildren([Transform537]);
{ .AddChildren }
HAnimJoint529.AddChildren([HAnimSegment530]);
HAnimJoint539 := THAnimJointNode.Create;
HAnimJoint539.NameField := 'vt3';
HAnimJoint539.Center := Vector3(0,1.438,-0.12);
HAnimSegment540 := THAnimSegmentNode.Create;
HAnimSegment540.NameField := 't3';
Shape541 := TShapeNode.Create;
Appearance542 := TAppearanceNode.Create;
Appearance542 := Appearance68;
{ .SetAppearance }
Shape541.Appearance := Appearance542;
IndexedLineSet543 := TIndexedLineSetNode.Create;
IndexedLineSet543.SetCoordIndex([0,1,-1]);
Coordinate544 := TCoordinateNode.Create;
Coordinate544.SetPoint([Vector3(0,1.438,-0.12),Vector3(0,1.468,-0.105)]);
{ .SetCoord }
IndexedLineSet543.Coord := Coordinate544;
{ .SetGeometry }
Shape541.Geometry := IndexedLineSet543;
{ .AddChildren }
HAnimSegment540.AddChildren([Shape541]);
Transform545 := TTransformNode.Create;
Transform545.Translation := Vector3(0,1.438,-0.12);
Shape546 := TShapeNode.Create;
Shape546 := Shape54;
{ .AddChild }
Transform545.AddChildren([Shape546]);
{ .AddChildren }
HAnimSegment540.AddChildren([Transform545]);
{ .AddChildren }
HAnimJoint539.AddChildren([HAnimSegment540]);
HAnimJoint547 := THAnimJointNode.Create;
HAnimJoint547.NameField := 'vt2';
HAnimJoint547.Center := Vector3(0,1.468,-0.105);
HAnimSegment548 := THAnimSegmentNode.Create;
HAnimSegment548.NameField := 't2';
Shape549 := TShapeNode.Create;
Appearance550 := TAppearanceNode.Create;
Appearance550 := Appearance68;
{ .SetAppearance }
Shape549.Appearance := Appearance550;
IndexedLineSet551 := TIndexedLineSetNode.Create;
IndexedLineSet551.SetCoordIndex([0,1,-1]);
Coordinate552 := TCoordinateNode.Create;
Coordinate552.SetPoint([Vector3(0,1.468,-0.105),Vector3(0,1.497,-0.09)]);
{ .SetCoord }
IndexedLineSet551.Coord := Coordinate552;
{ .SetGeometry }
Shape549.Geometry := IndexedLineSet551;
{ .AddChildren }
HAnimSegment548.AddChildren([Shape549]);
Transform553 := TTransformNode.Create;
Transform553.Translation := Vector3(0,1.468,-0.105);
Shape554 := TShapeNode.Create;
Shape554 := Shape54;
{ .AddChild }
Transform553.AddChildren([Shape554]);
{ .AddChildren }
HAnimSegment548.AddChildren([Transform553]);
{ .AddChildren }
HAnimJoint547.AddChildren([HAnimSegment548]);
HAnimJoint555 := THAnimJointNode.Create;
HAnimJoint555.NameField := 'vt1';
HAnimJoint555.Center := Vector3(0,1.497,-0.09);
HAnimJoint555.SetSkinCoordIndex([11,24]);
HAnimJoint555.SetSkinCoordWeight([1,1]);
HAnimSegment556 := THAnimSegmentNode.Create;
HAnimSegment556.NameField := 't1';
Shape557 := TShapeNode.Create;
Appearance558 := TAppearanceNode.Create;
Appearance558 := Appearance68;
{ .SetAppearance }
Shape557.Appearance := Appearance558;
IndexedLineSet559 := TIndexedLineSetNode.Create;
IndexedLineSet559.SetCoordIndex([0,1,-1]);
Coordinate560 := TCoordinateNode.Create;
Coordinate560.SetPoint([Vector3(0,1.497,-0.09),Vector3(0,1.525,-0.072)]);
{ .SetCoord }
IndexedLineSet559.Coord := Coordinate560;
{ .SetGeometry }
Shape557.Geometry := IndexedLineSet559;
{ .AddChildren }
HAnimSegment556.AddChildren([Shape557]);
Transform561 := TTransformNode.Create;
Transform561.Translation := Vector3(0,1.497,-0.09);
Shape562 := TShapeNode.Create;
Shape562 := Shape54;
{ .AddChild }
Transform561.AddChildren([Shape562]);
{ .AddChildren }
HAnimSegment556.AddChildren([Transform561]);
HAnimSite563 := THAnimSiteNode.Create;
HAnimSite563.NameField := 'suprasternale';
HAnimSite563.Translation := Vector3(0,1.44,0.03);
Shape564 := TShapeNode.Create;
Shape564 := Shape61;
{ .AddChildren }
HAnimSite563.AddChildren([Shape564]);
{ .AddChildren }
HAnimSegment556.AddChildren([HAnimSite563]);
HAnimSite565 := THAnimSiteNode.Create;
HAnimSite565.NameField := 'cervicale';
HAnimSite565.Translation := Vector3(0,1.53,-0.084);
Shape566 := TShapeNode.Create;
Shape566 := Shape61;
{ .AddChildren }
HAnimSite565.AddChildren([Shape566]);
{ .AddChildren }
HAnimSegment556.AddChildren([HAnimSite565]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimSegment556]);
HAnimJoint567 := THAnimJointNode.Create;
HAnimJoint567.NameField := 'vc7';
HAnimJoint567.Center := Vector3(0,1.525,-0.072);
HAnimJoint567.SetSkinCoordIndex([74,75]);
HAnimJoint567.SetSkinCoordWeight([1,1]);
HAnimSegment568 := THAnimSegmentNode.Create;
HAnimSegment568.NameField := 'c7';
Shape569 := TShapeNode.Create;
Appearance570 := TAppearanceNode.Create;
Appearance570 := Appearance68;
{ .SetAppearance }
Shape569.Appearance := Appearance570;
IndexedLineSet571 := TIndexedLineSetNode.Create;
IndexedLineSet571.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate572 := TCoordinateNode.Create;
Coordinate572.SetPoint([Vector3(0,1.525,-0.072),Vector3(0.082,1.4488,-0.0353),Vector3(-0.03,1.46,0.02),Vector3(0,1.54,-0.05)]);
{ .SetCoord }
IndexedLineSet571.Coord := Coordinate572;
{ .SetGeometry }
Shape569.Geometry := IndexedLineSet571;
{ .AddChildren }
HAnimSegment568.AddChildren([Shape569]);
Transform573 := TTransformNode.Create;
Transform573.Translation := Vector3(0,1.525,-0.072);
Shape574 := TShapeNode.Create;
Shape574 := Shape54;
{ .AddChild }
Transform573.AddChildren([Shape574]);
{ .AddChildren }
HAnimSegment568.AddChildren([Transform573]);
HAnimSite575 := THAnimSiteNode.Create;
HAnimSite575.NameField := 'r_neck_base';
HAnimSite575.Translation := Vector3(-0.0646,1.5149,-0.0385);
Shape576 := TShapeNode.Create;
Shape576 := Shape61;
{ .AddChildren }
HAnimSite575.AddChildren([Shape576]);
{ .AddChildren }
HAnimSegment568.AddChildren([HAnimSite575]);
HAnimSite577 := THAnimSiteNode.Create;
HAnimSite577.NameField := 'l_neck_base';
HAnimSite577.Translation := Vector3(0.0646,1.5149,-0.0385);
Shape578 := TShapeNode.Create;
Shape578 := Shape61;
{ .AddChildren }
HAnimSite577.AddChildren([Shape578]);
{ .AddChildren }
HAnimSegment568.AddChildren([HAnimSite577]);
{ .AddChildren }
HAnimJoint567.AddChildren([HAnimSegment568]);
HAnimJoint579 := THAnimJointNode.Create;
HAnimJoint579.NameField := 'vc6';
HAnimJoint579.Rotation := Vector4(-0.37139068112485,-0.928476688976744,0,0.0468530829448654);
HAnimJoint579.Center := Vector3(0,1.54,-0.05);
HAnimSegment580 := THAnimSegmentNode.Create;
HAnimSegment580.NameField := 'c6';
Shape581 := TShapeNode.Create;
Appearance582 := TAppearanceNode.Create;
Appearance582 := Appearance68;
{ .SetAppearance }
Shape581.Appearance := Appearance582;
IndexedLineSet583 := TIndexedLineSetNode.Create;
IndexedLineSet583.SetCoordIndex([0,1,-1]);
Coordinate584 := TCoordinateNode.Create;
Coordinate584.SetPoint([Vector3(0,1.54,-0.05),Vector3(0,1.5675,-0.0256)]);
{ .SetCoord }
IndexedLineSet583.Coord := Coordinate584;
{ .SetGeometry }
Shape581.Geometry := IndexedLineSet583;
{ .AddChildren }
HAnimSegment580.AddChildren([Shape581]);
Transform585 := TTransformNode.Create;
Transform585.Translation := Vector3(0,1.54,-0.05);
Shape586 := TShapeNode.Create;
Shape586 := Shape54;
{ .AddChild }
Transform585.AddChildren([Shape586]);
{ .AddChildren }
HAnimSegment580.AddChildren([Transform585]);
{ .AddChildren }
HAnimJoint579.AddChildren([HAnimSegment580]);
HAnimJoint587 := THAnimJointNode.Create;
HAnimJoint587.NameField := 'vc5';
HAnimJoint587.Center := Vector3(0,1.552,-0.035);
HAnimSegment588 := THAnimSegmentNode.Create;
HAnimSegment588.NameField := 'c5';
Transform589 := TTransformNode.Create;
Transform589.Translation := Vector3(0,1.552,-0.035);
Shape590 := TShapeNode.Create;
Shape590 := Shape54;
{ .AddChild }
Transform589.AddChildren([Shape590]);
{ .AddChildren }
HAnimSegment588.AddChildren([Transform589]);
Shape591 := TShapeNode.Create;
Appearance592 := TAppearanceNode.Create;
Appearance592 := Appearance68;
{ .SetAppearance }
Shape591.Appearance := Appearance592;
IndexedLineSet593 := TIndexedLineSetNode.Create;
IndexedLineSet593.SetCoordIndex([0,1,-1]);
Coordinate594 := TCoordinateNode.Create;
Coordinate594.SetPoint([Vector3(0,1.5675,-0.0256),Vector3(0,1.58225,-0.0185)]);
{ .SetCoord }
IndexedLineSet593.Coord := Coordinate594;
{ .SetGeometry }
Shape591.Geometry := IndexedLineSet593;
{ .AddChildren }
HAnimSegment588.AddChildren([Shape591]);
{ .AddChildren }
HAnimJoint587.AddChildren([HAnimSegment588]);
HAnimJoint595 := THAnimJointNode.Create;
HAnimJoint595.NameField := 'vc4';
HAnimJoint595.Center := Vector3(0,1.5675,-0.0256);
HAnimSegment596 := THAnimSegmentNode.Create;
HAnimSegment596.NameField := 'c4';
Shape597 := TShapeNode.Create;
Appearance598 := TAppearanceNode.Create;
Appearance598 := Appearance68;
{ .SetAppearance }
Shape597.Appearance := Appearance598;
IndexedLineSet599 := TIndexedLineSetNode.Create;
IndexedLineSet599.SetCoordIndex([0,1,-1]);
Coordinate600 := TCoordinateNode.Create;
Coordinate600.SetPoint([Vector3(0,1.58225,-0.0185),Vector3(0,1.595,-0.0175)]);
{ .SetCoord }
IndexedLineSet599.Coord := Coordinate600;
{ .SetGeometry }
Shape597.Geometry := IndexedLineSet599;
{ .AddChildren }
HAnimSegment596.AddChildren([Shape597]);
Transform601 := TTransformNode.Create;
Transform601.Translation := Vector3(0,1.5675,-0.0256);
Shape602 := TShapeNode.Create;
Shape602 := Shape54;
{ .AddChild }
Transform601.AddChildren([Shape602]);
{ .AddChildren }
HAnimSegment596.AddChildren([Transform601]);
{ .AddChildren }
HAnimJoint595.AddChildren([HAnimSegment596]);
HAnimJoint603 := THAnimJointNode.Create;
HAnimJoint603.NameField := 'vc3';
HAnimJoint603.Center := Vector3(0,1.58225,-0.0185);
HAnimSegment604 := THAnimSegmentNode.Create;
HAnimSegment604.NameField := 'c3';
Shape605 := TShapeNode.Create;
Appearance606 := TAppearanceNode.Create;
Appearance606 := Appearance68;
{ .SetAppearance }
Shape605.Appearance := Appearance606;
IndexedLineSet607 := TIndexedLineSetNode.Create;
IndexedLineSet607.SetCoordIndex([0,1,-1]);
Coordinate608 := TCoordinateNode.Create;
Coordinate608.SetPoint([Vector3(0,1.595,-0.0175),Vector3(0,1.61,-0.015)]);
{ .SetCoord }
IndexedLineSet607.Coord := Coordinate608;
{ .SetGeometry }
Shape605.Geometry := IndexedLineSet607;
{ .AddChildren }
HAnimSegment604.AddChildren([Shape605]);
Transform609 := TTransformNode.Create;
Transform609.Translation := Vector3(0,1.58225,-0.0185);
Shape610 := TShapeNode.Create;
Shape610 := Shape54;
{ .AddChild }
Transform609.AddChildren([Shape610]);
{ .AddChildren }
HAnimSegment604.AddChildren([Transform609]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimSegment604]);
HAnimJoint611 := THAnimJointNode.Create;
HAnimJoint611.NameField := 'vc2';
HAnimJoint611.Center := Vector3(0,1.595,-0.0175);
HAnimSegment612 := THAnimSegmentNode.Create;
HAnimSegment612.NameField := 'c2';
Shape613 := TShapeNode.Create;
Appearance614 := TAppearanceNode.Create;
Appearance614 := Appearance68;
{ .SetAppearance }
Shape613.Appearance := Appearance614;
IndexedLineSet615 := TIndexedLineSetNode.Create;
IndexedLineSet615.SetCoordIndex([0,1,-1]);
Coordinate616 := TCoordinateNode.Create;
Coordinate616.SetPoint([Vector3(0,1.61,-0.015),Vector3(0,1.6144,-0.0034)]);
{ .SetCoord }
IndexedLineSet615.Coord := Coordinate616;
{ .SetGeometry }
Shape613.Geometry := IndexedLineSet615;
{ .AddChildren }
HAnimSegment612.AddChildren([Shape613]);
Transform617 := TTransformNode.Create;
Transform617.Translation := Vector3(0,1.595,-0.0175);
Shape618 := TShapeNode.Create;
Shape618 := Shape54;
{ .AddChild }
Transform617.AddChildren([Shape618]);
{ .AddChildren }
HAnimSegment612.AddChildren([Transform617]);
{ .AddChildren }
HAnimJoint611.AddChildren([HAnimSegment612]);
HAnimJoint619 := THAnimJointNode.Create;
HAnimJoint619.NameField := 'vc1';
HAnimJoint619.Center := Vector3(0,1.61,-0.015);
HAnimSegment620 := THAnimSegmentNode.Create;
HAnimSegment620.NameField := 'c1';
Shape621 := TShapeNode.Create;
Appearance622 := TAppearanceNode.Create;
Appearance622 := Appearance68;
{ .SetAppearance }
Shape621.Appearance := Appearance622;
IndexedLineSet623 := TIndexedLineSetNode.Create;
IndexedLineSet623.SetCoordIndex([0,1,-1]);
Coordinate624 := TCoordinateNode.Create;
Coordinate624.SetPoint([Vector3(0,1.6144,-0.0034),Vector3(0,1.63,-0.01)]);
{ .SetCoord }
IndexedLineSet623.Coord := Coordinate624;
{ .SetGeometry }
Shape621.Geometry := IndexedLineSet623;
{ .AddChildren }
HAnimSegment620.AddChildren([Shape621]);
Transform625 := TTransformNode.Create;
Transform625.Translation := Vector3(0,1.61,-0.015);
Shape626 := TShapeNode.Create;
Shape626 := Shape54;
{ .AddChild }
Transform625.AddChildren([Shape626]);
{ .AddChildren }
HAnimSegment620.AddChildren([Transform625]);
{ .AddChildren }
HAnimJoint619.AddChildren([HAnimSegment620]);
HAnimJoint627 := THAnimJointNode.Create;
HAnimJoint627.NameField := 'skullbase';
HAnimJoint627.Rotation := Vector4(0,-1,0,0.105595270685895);
HAnimJoint627.Center := Vector3(0,1.63,-0.01);
HAnimJoint627.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint627.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimSegment628 := THAnimSegmentNode.Create;
HAnimSegment628.NameField := 'skull';
Shape629 := TShapeNode.Create;
Appearance630 := TAppearanceNode.Create;
Appearance630 := Appearance68;
{ .SetAppearance }
Shape629.Appearance := Appearance630;
IndexedLineSet631 := TIndexedLineSetNode.Create;
IndexedLineSet631.SetCoordIndex([0,1,-1,0,2,-1]);
Coordinate632 := TCoordinateNode.Create;
Coordinate632.SetPoint([Vector3(0,1.63,-0.01),Vector3(0.034,1.659,0.06),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet631.Coord := Coordinate632;
{ .SetGeometry }
Shape629.Geometry := IndexedLineSet631;
{ .AddChildren }
HAnimSegment628.AddChildren([Shape629]);
Transform633 := TTransformNode.Create;
Transform633.Translation := Vector3(0,1.63,-0.01);
Shape634 := TShapeNode.Create;
Shape634 := Shape54;
{ .AddChild }
Transform633.AddChildren([Shape634]);
{ .AddChildren }
HAnimSegment628.AddChildren([Transform633]);
HAnimSite635 := THAnimSiteNode.Create;
HAnimSite635.NameField := 'skull_tip';
HAnimSite635.Translation := Vector3(0,1.77,0);
Shape636 := TShapeNode.Create;
Shape636 := Shape61;
{ .AddChildren }
HAnimSite635.AddChildren([Shape636]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite635]);
HAnimSite637 := THAnimSiteNode.Create;
HAnimSite637.NameField := 'sellion';
HAnimSite637.Translation := Vector3(0,1.665,0.09);
Shape638 := TShapeNode.Create;
Shape638 := Shape61;
{ .AddChildren }
HAnimSite637.AddChildren([Shape638]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite637]);
HAnimSite639 := THAnimSiteNode.Create;
HAnimSite639.NameField := 'r_infraorbitale';
HAnimSite639.Translation := Vector3(-0.033,1.62,0.087);
Shape640 := TShapeNode.Create;
Shape640 := Shape61;
{ .AddChildren }
HAnimSite639.AddChildren([Shape640]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite639]);
HAnimSite641 := THAnimSiteNode.Create;
HAnimSite641.NameField := 'l_infraorbitale';
HAnimSite641.Translation := Vector3(0.033,1.62,0.087);
Shape642 := TShapeNode.Create;
Shape642 := Shape61;
{ .AddChildren }
HAnimSite641.AddChildren([Shape642]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite641]);
HAnimSite643 := THAnimSiteNode.Create;
HAnimSite643.NameField := 'supramenton';
HAnimSite643.Translation := Vector3(0,1.55,0.097);
Shape644 := TShapeNode.Create;
Shape644 := Shape61;
{ .AddChildren }
HAnimSite643.AddChildren([Shape644]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite643]);
HAnimSite645 := THAnimSiteNode.Create;
HAnimSite645.NameField := 'r_tragion';
HAnimSite645.Translation := Vector3(-0.077,1.64,-0.01);
Shape646 := TShapeNode.Create;
Shape646 := Shape61;
{ .AddChildren }
HAnimSite645.AddChildren([Shape646]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite645]);
HAnimSite647 := THAnimSiteNode.Create;
HAnimSite647.NameField := 'r_gonion';
HAnimSite647.Translation := Vector3(-0.052,1.58,0.015);
Shape648 := TShapeNode.Create;
Shape648 := Shape61;
{ .AddChildren }
HAnimSite647.AddChildren([Shape648]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite647]);
HAnimSite649 := THAnimSiteNode.Create;
HAnimSite649.NameField := 'l_tragion';
HAnimSite649.Translation := Vector3(0.077,1.64,-0.01);
Shape650 := TShapeNode.Create;
Shape650 := Shape61;
{ .AddChildren }
HAnimSite649.AddChildren([Shape650]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite649]);
HAnimSite651 := THAnimSiteNode.Create;
HAnimSite651.NameField := 'l_gonion';
HAnimSite651.Translation := Vector3(0.0631,1.58,0.015);
Shape652 := TShapeNode.Create;
Shape652 := Shape61;
{ .AddChildren }
HAnimSite651.AddChildren([Shape652]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite651]);
HAnimSite653 := THAnimSiteNode.Create;
HAnimSite653.NameField := 'nuchale';
HAnimSite653.Translation := Vector3(0,1.625,-0.0925);
Shape654 := TShapeNode.Create;
Shape654 := Shape61;
{ .AddChildren }
HAnimSite653.AddChildren([Shape654]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite653]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimSegment628]);
HAnimJoint655 := THAnimJointNode.Create;
HAnimJoint655.NameField := 'l_eyeball_joint';
HAnimJoint655.Center := Vector3(0.034,1.659,0.06);
HAnimSegment656 := THAnimSegmentNode.Create;
HAnimSegment656.NameField := 'l_eyeball';
Shape657 := TShapeNode.Create;
Appearance658 := TAppearanceNode.Create;
Appearance658 := Appearance68;
{ .SetAppearance }
Shape657.Appearance := Appearance658;
IndexedLineSet659 := TIndexedLineSetNode.Create;
IndexedLineSet659.SetCoordIndex([0,1,-1]);
Coordinate660 := TCoordinateNode.Create;
Coordinate660.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet659.Coord := Coordinate660;
{ .SetGeometry }
Shape657.Geometry := IndexedLineSet659;
{ .AddChildren }
HAnimSegment656.AddChildren([Shape657]);
Transform661 := TTransformNode.Create;
Transform661.Translation := Vector3(0.034,1.655,0.065);
Transform661.Scale := Vector3(1,1,1.4);
Shape662 := TShapeNode.Create;
Shape662 := Shape54;
{ .AddChild }
Transform661.AddChildren([Shape662]);
{ .AddChildren }
HAnimSegment656.AddChildren([Transform661]);
{ .AddChildren }
HAnimJoint655.AddChildren([HAnimSegment656]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint655]);
HAnimJoint663 := THAnimJointNode.Create;
HAnimJoint663.NameField := 'r_eyeball_joint';
HAnimJoint663.Center := Vector3(-0.034,1.659,0.06);
HAnimSegment664 := THAnimSegmentNode.Create;
HAnimSegment664.NameField := 'r_eyeball';
Shape665 := TShapeNode.Create;
Appearance666 := TAppearanceNode.Create;
Appearance666 := Appearance68;
{ .SetAppearance }
Shape665.Appearance := Appearance666;
IndexedLineSet667 := TIndexedLineSetNode.Create;
IndexedLineSet667.SetCoordIndex([0,1,-1]);
Coordinate668 := TCoordinateNode.Create;
Coordinate668.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet667.Coord := Coordinate668;
{ .SetGeometry }
Shape665.Geometry := IndexedLineSet667;
{ .AddChildren }
HAnimSegment664.AddChildren([Shape665]);
Transform669 := TTransformNode.Create;
Transform669.Translation := Vector3(-0.034,1.655,0.065);
Transform669.Scale := Vector3(1,1,1.4);
Shape670 := TShapeNode.Create;
Shape670 := Shape54;
{ .AddChild }
Transform669.AddChildren([Shape670]);
{ .AddChildren }
HAnimSegment664.AddChildren([Transform669]);
{ .AddChildren }
HAnimJoint663.AddChildren([HAnimSegment664]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint663]);
{ .AddChildren }
HAnimJoint619.AddChildren([HAnimJoint627]);
{ .AddChildren }
HAnimJoint611.AddChildren([HAnimJoint619]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimJoint611]);
{ .AddChildren }
HAnimJoint595.AddChildren([HAnimJoint603]);
{ .AddChildren }
HAnimJoint587.AddChildren([HAnimJoint595]);
{ .AddChildren }
HAnimJoint579.AddChildren([HAnimJoint587]);
{ .AddChildren }
HAnimJoint567.AddChildren([HAnimJoint579]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimJoint567]);
HAnimJoint671 := THAnimJointNode.Create;
HAnimJoint671.NameField := 'l_sternoclavicular';
HAnimJoint671.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint671.SetSkinCoordIndex([12]);
HAnimJoint671.SetSkinCoordWeight([1]);
HAnimSegment672 := THAnimSegmentNode.Create;
HAnimSegment672.NameField := 'l_clavicle';
Shape673 := TShapeNode.Create;
Appearance674 := TAppearanceNode.Create;
Appearance674 := Appearance68;
{ .SetAppearance }
Shape673.Appearance := Appearance674;
IndexedLineSet675 := TIndexedLineSetNode.Create;
IndexedLineSet675.SetCoordIndex([0,1,-1]);
Coordinate676 := TCoordinateNode.Create;
Coordinate676.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
IndexedLineSet675.Coord := Coordinate676;
{ .SetGeometry }
Shape673.Geometry := IndexedLineSet675;
{ .AddChildren }
HAnimSegment672.AddChildren([Shape673]);
Transform677 := TTransformNode.Create;
Transform677.Translation := Vector3(0.082,1.4488,-0.0353);
Shape678 := TShapeNode.Create;
Shape678 := Shape54;
{ .AddChild }
Transform677.AddChildren([Shape678]);
{ .AddChildren }
HAnimSegment672.AddChildren([Transform677]);
HAnimSite679 := THAnimSiteNode.Create;
HAnimSite679.NameField := 'l_clavicale';
HAnimSite679.Translation := Vector3(0.03,1.46,0.035);
Shape680 := TShapeNode.Create;
Shape680 := Shape61;
{ .AddChildren }
HAnimSite679.AddChildren([Shape680]);
{ .AddChildren }
HAnimSegment672.AddChildren([HAnimSite679]);
{ .AddChildren }
HAnimJoint671.AddChildren([HAnimSegment672]);
HAnimJoint681 := THAnimJointNode.Create;
HAnimJoint681.NameField := 'l_acromioclavicular';
HAnimJoint681.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint681.SetSkinCoordIndex([79]);
HAnimJoint681.SetSkinCoordWeight([1]);
HAnimSegment682 := THAnimSegmentNode.Create;
HAnimSegment682.NameField := 'l_scapula';
Shape683 := TShapeNode.Create;
Appearance684 := TAppearanceNode.Create;
Appearance684 := Appearance68;
{ .SetAppearance }
Shape683.Appearance := Appearance684;
IndexedLineSet685 := TIndexedLineSetNode.Create;
IndexedLineSet685.SetCoordIndex([0,1,-1]);
Coordinate686 := TCoordinateNode.Create;
Coordinate686.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2,1.44,-0.04)]);
{ .SetCoord }
IndexedLineSet685.Coord := Coordinate686;
{ .SetGeometry }
Shape683.Geometry := IndexedLineSet685;
{ .AddChildren }
HAnimSegment682.AddChildren([Shape683]);
Transform687 := TTransformNode.Create;
Transform687.Translation := Vector3(0.0962,1.4269,-0.0424);
Shape688 := TShapeNode.Create;
Shape688 := Shape54;
{ .AddChild }
Transform687.AddChildren([Shape688]);
{ .AddChildren }
HAnimSegment682.AddChildren([Transform687]);
Transform689 := TTransformNode.Create;
Transform689.Translation := Vector3(0.11,1.427,-0.1375);
Shape690 := TShapeNode.Create;
Shape690 := Shape73;
{ .AddChild }
Transform689.AddChildren([Shape690]);
{ .AddChildren }
HAnimSegment682.AddChildren([Transform689]);
HAnimSite691 := THAnimSiteNode.Create;
HAnimSite691.NameField := 'l_acromion';
HAnimSite691.Translation := Vector3(0.175,1.4825,-0.06);
Shape692 := TShapeNode.Create;
Shape692 := Shape61;
{ .AddChildren }
HAnimSite691.AddChildren([Shape692]);
{ .AddChildren }
HAnimSegment682.AddChildren([HAnimSite691]);
HAnimSite693 := THAnimSiteNode.Create;
HAnimSite693.NameField := 'l_axilla_ant';
HAnimSite693.Translation := Vector3(0.17,1.38,0.007);
Shape694 := TShapeNode.Create;
Shape694 := Shape61;
{ .AddChildren }
HAnimSite693.AddChildren([Shape694]);
{ .AddChildren }
HAnimSegment682.AddChildren([HAnimSite693]);
HAnimSite695 := THAnimSiteNode.Create;
HAnimSite695.NameField := 'l_axilla_post';
HAnimSite695.Translation := Vector3(0.16,1.38,-0.125);
Shape696 := TShapeNode.Create;
Shape696 := Shape61;
{ .AddChildren }
HAnimSite695.AddChildren([Shape696]);
{ .AddChildren }
HAnimSegment682.AddChildren([HAnimSite695]);
{ .AddChildren }
HAnimJoint681.AddChildren([HAnimSegment682]);
HAnimJoint697 := THAnimJointNode.Create;
HAnimJoint697.NameField := 'l_shoulder';
HAnimJoint697.Rotation := Vector4(0.978440403355312,0,0.206529361307055,0.207668332501419);
HAnimJoint697.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint697.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint697.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment698 := THAnimSegmentNode.Create;
HAnimSegment698.NameField := 'l_upperarm';
Shape699 := TShapeNode.Create;
Appearance700 := TAppearanceNode.Create;
Appearance700 := Appearance68;
{ .SetAppearance }
Shape699.Appearance := Appearance700;
IndexedLineSet701 := TIndexedLineSetNode.Create;
IndexedLineSet701.SetCoordIndex([0,1,-1]);
Coordinate702 := TCoordinateNode.Create;
Coordinate702.SetPoint([Vector3(0.2029,1.44,-0.0387),Vector3(0.2,1.1388,-0.04)]);
{ .SetCoord }
IndexedLineSet701.Coord := Coordinate702;
{ .SetGeometry }
Shape699.Geometry := IndexedLineSet701;
{ .AddChildren }
HAnimSegment698.AddChildren([Shape699]);
Transform703 := TTransformNode.Create;
Transform703.Translation := Vector3(0.2,1.44,-0.04);
Shape704 := TShapeNode.Create;
Shape704 := Shape54;
{ .AddChild }
Transform703.AddChildren([Shape704]);
{ .AddChildren }
HAnimSegment698.AddChildren([Transform703]);
Transform705 := TTransformNode.Create;
Transform705.Translation := Vector3(0.235,1.42,-0.0625);
Shape706 := TShapeNode.Create;
Shape706 := Shape73;
{ .AddChild }
Transform705.AddChildren([Shape706]);
{ .AddChildren }
HAnimSegment698.AddChildren([Transform705]);
Transform707 := TTransformNode.Create;
Transform707.Translation := Vector3(0.25,1.27,-0.04);
Shape708 := TShapeNode.Create;
Shape708 := Shape73;
{ .AddChild }
Transform707.AddChildren([Shape708]);
{ .AddChildren }
HAnimSegment698.AddChildren([Transform707]);
Transform709 := TTransformNode.Create;
Transform709.Translation := Vector3(0.17,1.27,-0.04);
Shape710 := TShapeNode.Create;
Shape710 := Shape73;
{ .AddChild }
Transform709.AddChildren([Shape710]);
{ .AddChildren }
HAnimSegment698.AddChildren([Transform709]);
Transform711 := TTransformNode.Create;
Transform711.Translation := Vector3(0.2,1.27,-0.09);
Shape712 := TShapeNode.Create;
Shape712 := Shape73;
{ .AddChild }
Transform711.AddChildren([Shape712]);
{ .AddChildren }
HAnimSegment698.AddChildren([Transform711]);
Transform713 := TTransformNode.Create;
Transform713.Translation := Vector3(0.2,1.27,0.02);
Shape714 := TShapeNode.Create;
Shape714 := Shape73;
{ .AddChild }
Transform713.AddChildren([Shape714]);
{ .AddChildren }
HAnimSegment698.AddChildren([Transform713]);
HAnimSite715 := THAnimSiteNode.Create;
HAnimSite715.NameField := 'l_humeral_medial_epicn';
HAnimSite715.Translation := Vector3(0.165,1.1388,-0.04);
Shape716 := TShapeNode.Create;
Shape716 := Shape61;
{ .AddChildren }
HAnimSite715.AddChildren([Shape716]);
{ .AddChildren }
HAnimSegment698.AddChildren([HAnimSite715]);
HAnimSite717 := THAnimSiteNode.Create;
HAnimSite717.NameField := 'l_radiale';
HAnimSite717.Translation := Vector3(0.23,1.133,-0.055);
Shape718 := TShapeNode.Create;
Shape718 := Shape61;
{ .AddChildren }
HAnimSite717.AddChildren([Shape718]);
{ .AddChildren }
HAnimSegment698.AddChildren([HAnimSite717]);
HAnimSite719 := THAnimSiteNode.Create;
HAnimSite719.NameField := 'l_humeral_lateral_epicn';
HAnimSite719.Translation := Vector3(0.244,1.1388,-0.04);
Shape720 := TShapeNode.Create;
Shape720 := Shape61;
{ .AddChildren }
HAnimSite719.AddChildren([Shape720]);
{ .AddChildren }
HAnimSegment698.AddChildren([HAnimSite719]);
{ .AddChildren }
HAnimJoint697.AddChildren([HAnimSegment698]);
HAnimJoint721 := THAnimJointNode.Create;
HAnimJoint721.NameField := 'l_elbow';
HAnimJoint721.Rotation := Vector4(-0.999999999999982,0,0,0.139356882713934);
HAnimJoint721.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint721.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint721.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment722 := THAnimSegmentNode.Create;
HAnimSegment722.NameField := 'l_forearm';
Shape723 := TShapeNode.Create;
Appearance724 := TAppearanceNode.Create;
Appearance724 := Appearance68;
{ .SetAppearance }
Shape723.Appearance := Appearance724;
IndexedLineSet725 := TIndexedLineSetNode.Create;
IndexedLineSet725.SetCoordIndex([0,1,-1]);
Coordinate726 := TCoordinateNode.Create;
Coordinate726.SetPoint([Vector3(0.2,1.1388,-0.04),Vector3(0.2,0.87,-0.04)]);
{ .SetCoord }
IndexedLineSet725.Coord := Coordinate726;
{ .SetGeometry }
Shape723.Geometry := IndexedLineSet725;
{ .AddChildren }
HAnimSegment722.AddChildren([Shape723]);
Transform727 := TTransformNode.Create;
Transform727.Translation := Vector3(0.2,1.1388,-0.04);
Shape728 := TShapeNode.Create;
Shape728 := Shape54;
{ .AddChild }
Transform727.AddChildren([Shape728]);
{ .AddChildren }
HAnimSegment722.AddChildren([Transform727]);
Transform729 := TTransformNode.Create;
Transform729.Translation := Vector3(0.2,1.1388,-0.013);
Shape730 := TShapeNode.Create;
Shape730 := Shape73;
{ .AddChild }
Transform729.AddChildren([Shape730]);
{ .AddChildren }
HAnimSegment722.AddChildren([Transform729]);
Transform731 := TTransformNode.Create;
Transform731.Translation := Vector3(0.225,1,-0.01);
Shape732 := TShapeNode.Create;
Shape732 := Shape73;
{ .AddChild }
Transform731.AddChildren([Shape732]);
{ .AddChildren }
HAnimSegment722.AddChildren([Transform731]);
Transform733 := TTransformNode.Create;
Transform733.Translation := Vector3(0.225,1,-0.07);
Shape734 := TShapeNode.Create;
Shape734 := Shape73;
{ .AddChild }
Transform733.AddChildren([Shape734]);
{ .AddChildren }
HAnimSegment722.AddChildren([Transform733]);
Transform735 := TTransformNode.Create;
Transform735.Translation := Vector3(0.185,1,-0.01);
Shape736 := TShapeNode.Create;
Shape736 := Shape73;
{ .AddChild }
Transform735.AddChildren([Shape736]);
{ .AddChildren }
HAnimSegment722.AddChildren([Transform735]);
Transform737 := TTransformNode.Create;
Transform737.Translation := Vector3(0.185,1,-0.07);
Shape738 := TShapeNode.Create;
Shape738 := Shape73;
{ .AddChild }
Transform737.AddChildren([Shape738]);
{ .AddChildren }
HAnimSegment722.AddChildren([Transform737]);
HAnimSite739 := THAnimSiteNode.Create;
HAnimSite739.NameField := 'l_radial_styloid';
HAnimSite739.Translation := Vector3(0.1901,0.8645,-0.0415);
Shape740 := TShapeNode.Create;
Shape740 := Shape61;
{ .AddChildren }
HAnimSite739.AddChildren([Shape740]);
{ .AddChildren }
HAnimSegment722.AddChildren([HAnimSite739]);
HAnimSite741 := THAnimSiteNode.Create;
HAnimSite741.NameField := 'l_olecranon';
HAnimSite741.Translation := Vector3(0.2,1.1388,-0.08);
Shape742 := TShapeNode.Create;
Shape742 := Shape61;
{ .AddChildren }
HAnimSite741.AddChildren([Shape742]);
{ .AddChildren }
HAnimSegment722.AddChildren([HAnimSite741]);
{ .AddChildren }
HAnimJoint721.AddChildren([HAnimSegment722]);
HAnimJoint743 := THAnimJointNode.Create;
HAnimJoint743.NameField := 'l_wrist';
HAnimJoint743.Rotation := Vector4(-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821);
HAnimJoint743.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint743.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint743.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment744 := THAnimSegmentNode.Create;
HAnimSegment744.NameField := 'l_hand';
Shape745 := TShapeNode.Create;
Appearance746 := TAppearanceNode.Create;
Appearance746 := Appearance68;
{ .SetAppearance }
Shape745.Appearance := Appearance746;
IndexedLineSet747 := TIndexedLineSetNode.Create;
IndexedLineSet747.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate748 := TCoordinateNode.Create;
Coordinate748.SetPoint([Vector3(0.2,0.87,-0.04),Vector3(0.1924,0.8472,-0.0534),Vector3(0.1983,0.8024,-0.028),Vector3(0.1987,0.8029,-0.053),Vector3(0.1956,0.8019,-0.0794),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
IndexedLineSet747.Coord := Coordinate748;
{ .SetGeometry }
Shape745.Geometry := IndexedLineSet747;
{ .AddChildren }
HAnimSegment744.AddChildren([Shape745]);
Transform749 := TTransformNode.Create;
Transform749.Translation := Vector3(0.2,0.87,-0.04);
Shape750 := TShapeNode.Create;
Shape750 := Shape54;
{ .AddChild }
Transform749.AddChildren([Shape750]);
{ .AddChildren }
HAnimSegment744.AddChildren([Transform749]);
HAnimSite751 := THAnimSiteNode.Create;
HAnimSite751.NameField := 'l_metacarpal_pha2';
HAnimSite751.Translation := Vector3(0.2009,0.8139,-0.0237);
Shape752 := TShapeNode.Create;
Shape752 := Shape61;
{ .AddChildren }
HAnimSite751.AddChildren([Shape752]);
{ .AddChildren }
HAnimSegment744.AddChildren([HAnimSite751]);
HAnimSite753 := THAnimSiteNode.Create;
HAnimSite753.NameField := 'l_ulnar_styloid';
HAnimSite753.Translation := Vector3(0.2142,0.8529,-0.0648);
Shape754 := TShapeNode.Create;
Shape754 := Shape61;
{ .AddChildren }
HAnimSite753.AddChildren([Shape754]);
{ .AddChildren }
HAnimSegment744.AddChildren([HAnimSite753]);
HAnimSite755 := THAnimSiteNode.Create;
HAnimSite755.NameField := 'l_metacarpal_pha5';
HAnimSite755.Translation := Vector3(0.1929,0.786,-0.1122);
Shape756 := TShapeNode.Create;
Shape756 := Shape61;
{ .AddChildren }
HAnimSite755.AddChildren([Shape756]);
{ .AddChildren }
HAnimSegment744.AddChildren([HAnimSite755]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimSegment744]);
HAnimJoint757 := THAnimJointNode.Create;
HAnimJoint757.NameField := 'l_thumb1';
HAnimJoint757.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint757.SetSkinCoordIndex([127,128]);
HAnimJoint757.SetSkinCoordWeight([1,1]);
HAnimSegment758 := THAnimSegmentNode.Create;
HAnimSegment758.NameField := 'l_thumb_metacarpal';
Shape759 := TShapeNode.Create;
Appearance760 := TAppearanceNode.Create;
Appearance760 := Appearance68;
{ .SetAppearance }
Shape759.Appearance := Appearance760;
IndexedLineSet761 := TIndexedLineSetNode.Create;
IndexedLineSet761.SetCoordIndex([0,1,-1]);
Coordinate762 := TCoordinateNode.Create;
Coordinate762.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
IndexedLineSet761.Coord := Coordinate762;
{ .SetGeometry }
Shape759.Geometry := IndexedLineSet761;
{ .AddChildren }
HAnimSegment758.AddChildren([Shape759]);
Transform763 := TTransformNode.Create;
Transform763.Translation := Vector3(0.1924,0.8472,-0.0534);
Shape764 := TShapeNode.Create;
Shape764 := Shape54;
{ .AddChild }
Transform763.AddChildren([Shape764]);
{ .AddChildren }
HAnimSegment758.AddChildren([Transform763]);
{ .AddChildren }
HAnimJoint757.AddChildren([HAnimSegment758]);
HAnimJoint765 := THAnimJointNode.Create;
HAnimJoint765.NameField := 'l_thumb2';
HAnimJoint765.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint765.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint765.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment766 := THAnimSegmentNode.Create;
HAnimSegment766.NameField := 'l_thumb_distal';
Shape767 := TShapeNode.Create;
Appearance768 := TAppearanceNode.Create;
Appearance768 := Appearance68;
{ .SetAppearance }
Shape767.Appearance := Appearance768;
IndexedLineSet769 := TIndexedLineSetNode.Create;
IndexedLineSet769.SetCoordIndex([0,1,-1]);
Coordinate770 := TCoordinateNode.Create;
Coordinate770.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
IndexedLineSet769.Coord := Coordinate770;
{ .SetGeometry }
Shape767.Geometry := IndexedLineSet769;
{ .AddChildren }
HAnimSegment766.AddChildren([Shape767]);
Transform771 := TTransformNode.Create;
Transform771.Translation := Vector3(0.1951,0.8226,0.0246);
Shape772 := TShapeNode.Create;
Shape772 := Shape54;
{ .AddChild }
Transform771.AddChildren([Shape772]);
{ .AddChildren }
HAnimSegment766.AddChildren([Transform771]);
{ .AddChildren }
HAnimJoint765.AddChildren([HAnimSegment766]);
HAnimJoint773 := THAnimJointNode.Create;
HAnimJoint773.NameField := 'l_thumb3';
HAnimJoint773.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint773.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint773.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment774 := THAnimSegmentNode.Create;
HAnimSegment774.NameField := 'l_thumb_distal';
Shape775 := TShapeNode.Create;
Appearance776 := TAppearanceNode.Create;
Appearance776 := Appearance68;
{ .SetAppearance }
Shape775.Appearance := Appearance776;
IndexedLineSet777 := TIndexedLineSetNode.Create;
IndexedLineSet777.SetCoordIndex([0,1,-1]);
Coordinate778 := TCoordinateNode.Create;
Coordinate778.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ .SetCoord }
IndexedLineSet777.Coord := Coordinate778;
{ .SetGeometry }
Shape775.Geometry := IndexedLineSet777;
{ .AddChildren }
HAnimSegment774.AddChildren([Shape775]);
Transform779 := TTransformNode.Create;
Transform779.Translation := Vector3(0.1955,0.8159,0.0464);
Shape780 := TShapeNode.Create;
Shape780 := Shape54;
{ .AddChild }
Transform779.AddChildren([Shape780]);
{ .AddChildren }
HAnimSegment774.AddChildren([Transform779]);
HAnimSite781 := THAnimSiteNode.Create;
HAnimSite781.NameField := 'l_thumb_distal_tip';
HAnimSite781.Translation := Vector3(0.1982,0.8061,0.0759);
Shape782 := TShapeNode.Create;
Shape782 := Shape61;
{ .AddChildren }
HAnimSite781.AddChildren([Shape782]);
{ .AddChildren }
HAnimSegment774.AddChildren([HAnimSite781]);
{ .AddChildren }
HAnimJoint773.AddChildren([HAnimSegment774]);
{ .AddChildren }
HAnimJoint765.AddChildren([HAnimJoint773]);
{ .AddChildren }
HAnimJoint757.AddChildren([HAnimJoint765]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimJoint757]);
HAnimJoint783 := THAnimJointNode.Create;
HAnimJoint783.NameField := 'l_index0';
HAnimJoint783.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint783.SetSkinCoordIndex([129,130]);
HAnimJoint783.SetSkinCoordWeight([1,1]);
HAnimSegment784 := THAnimSegmentNode.Create;
HAnimSegment784.NameField := 'l_index_metacarpal';
Shape785 := TShapeNode.Create;
Appearance786 := TAppearanceNode.Create;
Appearance786 := Appearance68;
{ .SetAppearance }
Shape785.Appearance := Appearance786;
IndexedLineSet787 := TIndexedLineSetNode.Create;
IndexedLineSet787.SetCoordIndex([0,1,-1]);
Coordinate788 := TCoordinateNode.Create;
Coordinate788.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
IndexedLineSet787.Coord := Coordinate788;
{ .SetGeometry }
Shape785.Geometry := IndexedLineSet787;
{ .AddChildren }
HAnimSegment784.AddChildren([Shape785]);
Transform789 := TTransformNode.Create;
Transform789.Translation := Vector3(0.1983,0.8024,-0.028);
Shape790 := TShapeNode.Create;
Shape790 := Shape54;
{ .AddChild }
Transform789.AddChildren([Shape790]);
{ .AddChildren }
HAnimSegment784.AddChildren([Transform789]);
{ .AddChildren }
HAnimJoint783.AddChildren([HAnimSegment784]);
HAnimJoint791 := THAnimJointNode.Create;
HAnimJoint791.NameField := 'l_index1';
HAnimJoint791.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint791.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint791.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment792 := THAnimSegmentNode.Create;
HAnimSegment792.NameField := 'l_index_proximal';
Shape793 := TShapeNode.Create;
Appearance794 := TAppearanceNode.Create;
Appearance794 := Appearance68;
{ .SetAppearance }
Shape793.Appearance := Appearance794;
IndexedLineSet795 := TIndexedLineSetNode.Create;
IndexedLineSet795.SetCoordIndex([0,1,-1]);
Coordinate796 := TCoordinateNode.Create;
Coordinate796.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
IndexedLineSet795.Coord := Coordinate796;
{ .SetGeometry }
Shape793.Geometry := IndexedLineSet795;
{ .AddChildren }
HAnimSegment792.AddChildren([Shape793]);
Transform797 := TTransformNode.Create;
Transform797.Translation := Vector3(0.1983,0.7815,-0.028);
Shape798 := TShapeNode.Create;
Shape798 := Shape54;
{ .AddChild }
Transform797.AddChildren([Shape798]);
{ .AddChildren }
HAnimSegment792.AddChildren([Transform797]);
{ .AddChildren }
HAnimJoint791.AddChildren([HAnimSegment792]);
HAnimJoint799 := THAnimJointNode.Create;
HAnimJoint799.NameField := 'l_index2';
HAnimJoint799.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint799.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint799.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment800 := THAnimSegmentNode.Create;
HAnimSegment800.NameField := 'l_index_middle';
Shape801 := TShapeNode.Create;
Appearance802 := TAppearanceNode.Create;
Appearance802 := Appearance68;
{ .SetAppearance }
Shape801.Appearance := Appearance802;
IndexedLineSet803 := TIndexedLineSetNode.Create;
IndexedLineSet803.SetCoordIndex([0,1,-1]);
Coordinate804 := TCoordinateNode.Create;
Coordinate804.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
IndexedLineSet803.Coord := Coordinate804;
{ .SetGeometry }
Shape801.Geometry := IndexedLineSet803;
{ .AddChildren }
HAnimSegment800.AddChildren([Shape801]);
Transform805 := TTransformNode.Create;
Transform805.Translation := Vector3(0.2017,0.7363,-0.0248);
Shape806 := TShapeNode.Create;
Shape806 := Shape54;
{ .AddChild }
Transform805.AddChildren([Shape806]);
{ .AddChildren }
HAnimSegment800.AddChildren([Transform805]);
{ .AddChildren }
HAnimJoint799.AddChildren([HAnimSegment800]);
HAnimJoint807 := THAnimJointNode.Create;
HAnimJoint807.NameField := 'l_index3';
HAnimJoint807.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint807.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint807.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment808 := THAnimSegmentNode.Create;
HAnimSegment808.NameField := 'l_index_distal';
Shape809 := TShapeNode.Create;
Appearance810 := TAppearanceNode.Create;
Appearance810 := Appearance68;
{ .SetAppearance }
Shape809.Appearance := Appearance810;
IndexedLineSet811 := TIndexedLineSetNode.Create;
IndexedLineSet811.SetCoordIndex([0,1,-1]);
Coordinate812 := TCoordinateNode.Create;
Coordinate812.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ .SetCoord }
IndexedLineSet811.Coord := Coordinate812;
{ .SetGeometry }
Shape809.Geometry := IndexedLineSet811;
{ .AddChildren }
HAnimSegment808.AddChildren([Shape809]);
Transform813 := TTransformNode.Create;
Transform813.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape814 := TShapeNode.Create;
Shape814 := Shape54;
{ .AddChild }
Transform813.AddChildren([Shape814]);
{ .AddChildren }
HAnimSegment808.AddChildren([Transform813]);
HAnimSite815 := THAnimSiteNode.Create;
HAnimSite815.NameField := 'l_index_distal_tip';
HAnimSite815.Translation := Vector3(0.2089,0.6858,-0.0245);
Shape816 := TShapeNode.Create;
Shape816 := Shape61;
{ .AddChildren }
HAnimSite815.AddChildren([Shape816]);
{ .AddChildren }
HAnimSegment808.AddChildren([HAnimSite815]);
HAnimSite817 := THAnimSiteNode.Create;
HAnimSite817.NameField := 'l_dactylion';
HAnimSite817.Translation := Vector3(0.2056,0.6743,-0.0482);
Shape818 := TShapeNode.Create;
Shape818 := Shape61;
{ .AddChildren }
HAnimSite817.AddChildren([Shape818]);
{ .AddChildren }
HAnimSegment808.AddChildren([HAnimSite817]);
{ .AddChildren }
HAnimJoint807.AddChildren([HAnimSegment808]);
{ .AddChildren }
HAnimJoint799.AddChildren([HAnimJoint807]);
{ .AddChildren }
HAnimJoint791.AddChildren([HAnimJoint799]);
{ .AddChildren }
HAnimJoint783.AddChildren([HAnimJoint791]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimJoint783]);
HAnimJoint819 := THAnimJointNode.Create;
HAnimJoint819.NameField := 'l_middle0';
HAnimJoint819.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint819.SetSkinCoordIndex([131,132]);
HAnimJoint819.SetSkinCoordWeight([1,1]);
HAnimSegment820 := THAnimSegmentNode.Create;
HAnimSegment820.NameField := 'l_middle_metacarpal';
Shape821 := TShapeNode.Create;
Appearance822 := TAppearanceNode.Create;
Appearance822 := Appearance68;
{ .SetAppearance }
Shape821.Appearance := Appearance822;
IndexedLineSet823 := TIndexedLineSetNode.Create;
IndexedLineSet823.SetCoordIndex([0,1,-1]);
Coordinate824 := TCoordinateNode.Create;
Coordinate824.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
IndexedLineSet823.Coord := Coordinate824;
{ .SetGeometry }
Shape821.Geometry := IndexedLineSet823;
{ .AddChildren }
HAnimSegment820.AddChildren([Shape821]);
Transform825 := TTransformNode.Create;
Transform825.Translation := Vector3(0.1987,0.8029,-0.053);
Shape826 := TShapeNode.Create;
Shape826 := Shape54;
{ .AddChild }
Transform825.AddChildren([Shape826]);
{ .AddChildren }
HAnimSegment820.AddChildren([Transform825]);
{ .AddChildren }
HAnimJoint819.AddChildren([HAnimSegment820]);
HAnimJoint827 := THAnimJointNode.Create;
HAnimJoint827.NameField := 'l_middle1';
HAnimJoint827.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint827.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint827.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment828 := THAnimSegmentNode.Create;
HAnimSegment828.NameField := 'l_middle_proximal';
Shape829 := TShapeNode.Create;
Appearance830 := TAppearanceNode.Create;
Appearance830 := Appearance68;
{ .SetAppearance }
Shape829.Appearance := Appearance830;
IndexedLineSet831 := TIndexedLineSetNode.Create;
IndexedLineSet831.SetCoordIndex([0,1,-1]);
Coordinate832 := TCoordinateNode.Create;
Coordinate832.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
IndexedLineSet831.Coord := Coordinate832;
{ .SetGeometry }
Shape829.Geometry := IndexedLineSet831;
{ .AddChildren }
HAnimSegment828.AddChildren([Shape829]);
Transform833 := TTransformNode.Create;
Transform833.Translation := Vector3(0.1987,0.7818,-0.053);
Shape834 := TShapeNode.Create;
Shape834 := Shape54;
{ .AddChild }
Transform833.AddChildren([Shape834]);
{ .AddChildren }
HAnimSegment828.AddChildren([Transform833]);
{ .AddChildren }
HAnimJoint827.AddChildren([HAnimSegment828]);
HAnimJoint835 := THAnimJointNode.Create;
HAnimJoint835.NameField := 'l_middle2';
HAnimJoint835.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint835.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint835.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment836 := THAnimSegmentNode.Create;
HAnimSegment836.NameField := 'l_middle_middle';
Shape837 := TShapeNode.Create;
Appearance838 := TAppearanceNode.Create;
Appearance838 := Appearance68;
{ .SetAppearance }
Shape837.Appearance := Appearance838;
IndexedLineSet839 := TIndexedLineSetNode.Create;
IndexedLineSet839.SetCoordIndex([0,1,-1]);
Coordinate840 := TCoordinateNode.Create;
Coordinate840.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
IndexedLineSet839.Coord := Coordinate840;
{ .SetGeometry }
Shape837.Geometry := IndexedLineSet839;
{ .AddChildren }
HAnimSegment836.AddChildren([Shape837]);
Transform841 := TTransformNode.Create;
Transform841.Translation := Vector3(0.2013,0.7273,-0.0503);
Shape842 := TShapeNode.Create;
Shape842 := Shape54;
{ .AddChild }
Transform841.AddChildren([Shape842]);
{ .AddChildren }
HAnimSegment836.AddChildren([Transform841]);
{ .AddChildren }
HAnimJoint835.AddChildren([HAnimSegment836]);
HAnimJoint843 := THAnimJointNode.Create;
HAnimJoint843.NameField := 'l_middle3';
HAnimJoint843.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint843.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint843.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment844 := THAnimSegmentNode.Create;
HAnimSegment844.NameField := 'l_middle_distal';
Shape845 := TShapeNode.Create;
Appearance846 := TAppearanceNode.Create;
Appearance846 := Appearance68;
{ .SetAppearance }
Shape845.Appearance := Appearance846;
IndexedLineSet847 := TIndexedLineSetNode.Create;
IndexedLineSet847.SetCoordIndex([0,1,-1]);
Coordinate848 := TCoordinateNode.Create;
Coordinate848.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ .SetCoord }
IndexedLineSet847.Coord := Coordinate848;
{ .SetGeometry }
Shape845.Geometry := IndexedLineSet847;
{ .AddChildren }
HAnimSegment844.AddChildren([Shape845]);
HAnimSite849 := THAnimSiteNode.Create;
HAnimSite849.NameField := 'l_middle_distal_tip';
HAnimSite849.Translation := Vector3(0.208,0.6731,-0.0491);
Shape850 := TShapeNode.Create;
Shape850 := Shape61;
{ .AddChildren }
HAnimSite849.AddChildren([Shape850]);
{ .AddChildren }
HAnimSegment844.AddChildren([HAnimSite849]);
Transform851 := TTransformNode.Create;
Transform851.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape852 := TShapeNode.Create;
Shape852 := Shape54;
{ .AddChild }
Transform851.AddChildren([Shape852]);
{ .AddChildren }
HAnimSegment844.AddChildren([Transform851]);
{ .AddChildren }
HAnimJoint843.AddChildren([HAnimSegment844]);
{ .AddChildren }
HAnimJoint835.AddChildren([HAnimJoint843]);
{ .AddChildren }
HAnimJoint827.AddChildren([HAnimJoint835]);
{ .AddChildren }
HAnimJoint819.AddChildren([HAnimJoint827]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimJoint819]);
HAnimJoint853 := THAnimJointNode.Create;
HAnimJoint853.NameField := 'l_ring0';
HAnimJoint853.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint853.SetSkinCoordIndex([133,134]);
HAnimJoint853.SetSkinCoordWeight([1,1]);
HAnimSegment854 := THAnimSegmentNode.Create;
HAnimSegment854.NameField := 'l_ring_metacarpal';
Shape855 := TShapeNode.Create;
Appearance856 := TAppearanceNode.Create;
Appearance856 := Appearance68;
{ .SetAppearance }
Shape855.Appearance := Appearance856;
IndexedLineSet857 := TIndexedLineSetNode.Create;
IndexedLineSet857.SetCoordIndex([0,1,-1]);
Coordinate858 := TCoordinateNode.Create;
Coordinate858.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
IndexedLineSet857.Coord := Coordinate858;
{ .SetGeometry }
Shape855.Geometry := IndexedLineSet857;
{ .AddChildren }
HAnimSegment854.AddChildren([Shape855]);
Transform859 := TTransformNode.Create;
Transform859.Translation := Vector3(0.1956,0.8019,-0.0794);
Shape860 := TShapeNode.Create;
Shape860 := Shape54;
{ .AddChild }
Transform859.AddChildren([Shape860]);
{ .AddChildren }
HAnimSegment854.AddChildren([Transform859]);
{ .AddChildren }
HAnimJoint853.AddChildren([HAnimSegment854]);
HAnimJoint861 := THAnimJointNode.Create;
HAnimJoint861.NameField := 'l_ring1';
HAnimJoint861.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint861.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint861.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment862 := THAnimSegmentNode.Create;
HAnimSegment862.NameField := 'l_ring_proximal';
Shape863 := TShapeNode.Create;
Appearance864 := TAppearanceNode.Create;
Appearance864 := Appearance68;
{ .SetAppearance }
Shape863.Appearance := Appearance864;
IndexedLineSet865 := TIndexedLineSetNode.Create;
IndexedLineSet865.SetCoordIndex([0,1,-1]);
Coordinate866 := TCoordinateNode.Create;
Coordinate866.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
IndexedLineSet865.Coord := Coordinate866;
{ .SetGeometry }
Shape863.Geometry := IndexedLineSet865;
{ .AddChildren }
HAnimSegment862.AddChildren([Shape863]);
Transform867 := TTransformNode.Create;
Transform867.Translation := Vector3(0.1956,0.7815,-0.0794);
Shape868 := TShapeNode.Create;
Shape868 := Shape54;
{ .AddChild }
Transform867.AddChildren([Shape868]);
{ .AddChildren }
HAnimSegment862.AddChildren([Transform867]);
{ .AddChildren }
HAnimJoint861.AddChildren([HAnimSegment862]);
HAnimJoint869 := THAnimJointNode.Create;
HAnimJoint869.NameField := 'l_ring2';
HAnimJoint869.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint869.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint869.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment870 := THAnimSegmentNode.Create;
HAnimSegment870.NameField := 'l_ring_middle';
Shape871 := TShapeNode.Create;
Appearance872 := TAppearanceNode.Create;
Appearance872 := Appearance68;
{ .SetAppearance }
Shape871.Appearance := Appearance872;
IndexedLineSet873 := TIndexedLineSetNode.Create;
IndexedLineSet873.SetCoordIndex([0,1,-1]);
Coordinate874 := TCoordinateNode.Create;
Coordinate874.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
IndexedLineSet873.Coord := Coordinate874;
{ .SetGeometry }
Shape871.Geometry := IndexedLineSet873;
{ .AddChildren }
HAnimSegment870.AddChildren([Shape871]);
Transform875 := TTransformNode.Create;
Transform875.Translation := Vector3(0.1973,0.7287,-0.0777);
Shape876 := TShapeNode.Create;
Shape876 := Shape54;
{ .AddChild }
Transform875.AddChildren([Shape876]);
{ .AddChildren }
HAnimSegment870.AddChildren([Transform875]);
{ .AddChildren }
HAnimJoint869.AddChildren([HAnimSegment870]);
HAnimJoint877 := THAnimJointNode.Create;
HAnimJoint877.NameField := 'l_ring3';
HAnimJoint877.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint877.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint877.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment878 := THAnimSegmentNode.Create;
HAnimSegment878.NameField := 'l_ring_distal';
Shape879 := TShapeNode.Create;
Appearance880 := TAppearanceNode.Create;
Appearance880 := Appearance68;
{ .SetAppearance }
Shape879.Appearance := Appearance880;
IndexedLineSet881 := TIndexedLineSetNode.Create;
IndexedLineSet881.SetCoordIndex([0,1,-1]);
Coordinate882 := TCoordinateNode.Create;
Coordinate882.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ .SetCoord }
IndexedLineSet881.Coord := Coordinate882;
{ .SetGeometry }
Shape879.Geometry := IndexedLineSet881;
{ .AddChildren }
HAnimSegment878.AddChildren([Shape879]);
Transform883 := TTransformNode.Create;
Transform883.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape884 := TShapeNode.Create;
Shape884 := Shape54;
{ .AddChild }
Transform883.AddChildren([Shape884]);
{ .AddChildren }
HAnimSegment878.AddChildren([Transform883]);
HAnimSite885 := THAnimSiteNode.Create;
HAnimSite885.NameField := 'l_ring_distal_tip';
HAnimSite885.Translation := Vector3(0.2035,0.675,-0.0756);
Shape886 := TShapeNode.Create;
Shape886 := Shape61;
{ .AddChildren }
HAnimSite885.AddChildren([Shape886]);
{ .AddChildren }
HAnimSegment878.AddChildren([HAnimSite885]);
{ .AddChildren }
HAnimJoint877.AddChildren([HAnimSegment878]);
{ .AddChildren }
HAnimJoint869.AddChildren([HAnimJoint877]);
{ .AddChildren }
HAnimJoint861.AddChildren([HAnimJoint869]);
{ .AddChildren }
HAnimJoint853.AddChildren([HAnimJoint861]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimJoint853]);
HAnimJoint887 := THAnimJointNode.Create;
HAnimJoint887.NameField := 'l_pinky0';
HAnimJoint887.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint887.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint887.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment888 := THAnimSegmentNode.Create;
HAnimSegment888.NameField := 'l_pinky_metacarpal';
Shape889 := TShapeNode.Create;
Appearance890 := TAppearanceNode.Create;
Appearance890 := Appearance68;
{ .SetAppearance }
Shape889.Appearance := Appearance890;
IndexedLineSet891 := TIndexedLineSetNode.Create;
IndexedLineSet891.SetCoordIndex([0,1,-1]);
Coordinate892 := TCoordinateNode.Create;
Coordinate892.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
IndexedLineSet891.Coord := Coordinate892;
{ .SetGeometry }
Shape889.Geometry := IndexedLineSet891;
{ .AddChildren }
HAnimSegment888.AddChildren([Shape889]);
Transform893 := TTransformNode.Create;
Transform893.Translation := Vector3(0.1925,0.8066,-0.1036);
Shape894 := TShapeNode.Create;
Shape894 := Shape54;
{ .AddChild }
Transform893.AddChildren([Shape894]);
{ .AddChildren }
HAnimSegment888.AddChildren([Transform893]);
{ .AddChildren }
HAnimJoint887.AddChildren([HAnimSegment888]);
HAnimJoint895 := THAnimJointNode.Create;
HAnimJoint895.NameField := 'l_pinky1';
HAnimJoint895.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint895.SetSkinCoordIndex([160,161,162]);
HAnimJoint895.SetSkinCoordWeight([1,1,1]);
HAnimSegment896 := THAnimSegmentNode.Create;
HAnimSegment896.NameField := 'l_pinky_proximal';
Shape897 := TShapeNode.Create;
Appearance898 := TAppearanceNode.Create;
Appearance898 := Appearance68;
{ .SetAppearance }
Shape897.Appearance := Appearance898;
IndexedLineSet899 := TIndexedLineSetNode.Create;
IndexedLineSet899.SetCoordIndex([0,1,-1]);
Coordinate900 := TCoordinateNode.Create;
Coordinate900.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
IndexedLineSet899.Coord := Coordinate900;
{ .SetGeometry }
Shape897.Geometry := IndexedLineSet899;
{ .AddChildren }
HAnimSegment896.AddChildren([Shape897]);
Transform901 := TTransformNode.Create;
Transform901.Translation := Vector3(0.1925,0.7866,-0.1036);
Shape902 := TShapeNode.Create;
Shape902 := Shape54;
{ .AddChild }
Transform901.AddChildren([Shape902]);
{ .AddChildren }
HAnimSegment896.AddChildren([Transform901]);
{ .AddChildren }
HAnimJoint895.AddChildren([HAnimSegment896]);
HAnimJoint903 := THAnimJointNode.Create;
HAnimJoint903.NameField := 'l_pinky2';
HAnimJoint903.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint903.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint903.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment904 := THAnimSegmentNode.Create;
HAnimSegment904.NameField := 'l_pinky_middle';
Transform905 := TTransformNode.Create;
Transform905.Translation := Vector3(0.1938,0.7452,-0.1024);
Shape906 := TShapeNode.Create;
Shape906 := Shape54;
{ .AddChild }
Transform905.AddChildren([Shape906]);
{ .AddChildren }
HAnimSegment904.AddChildren([Transform905]);
Shape907 := TShapeNode.Create;
Appearance908 := TAppearanceNode.Create;
Appearance908 := Appearance68;
{ .SetAppearance }
Shape907.Appearance := Appearance908;
IndexedLineSet909 := TIndexedLineSetNode.Create;
IndexedLineSet909.SetCoordIndex([0,1,-1]);
Coordinate910 := TCoordinateNode.Create;
Coordinate910.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
IndexedLineSet909.Coord := Coordinate910;
{ .SetGeometry }
Shape907.Geometry := IndexedLineSet909;
{ .AddChildren }
HAnimSegment904.AddChildren([Shape907]);
{ .AddChildren }
HAnimJoint903.AddChildren([HAnimSegment904]);
HAnimJoint911 := THAnimJointNode.Create;
HAnimJoint911.NameField := 'l_pinky3';
HAnimJoint911.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint911.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint911.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment912 := THAnimSegmentNode.Create;
HAnimSegment912.NameField := 'l_pinky_distal';
Shape913 := TShapeNode.Create;
Appearance914 := TAppearanceNode.Create;
Appearance914 := Appearance68;
{ .SetAppearance }
Shape913.Appearance := Appearance914;
IndexedLineSet915 := TIndexedLineSetNode.Create;
IndexedLineSet915.SetCoordIndex([0,1,-1]);
Coordinate916 := TCoordinateNode.Create;
Coordinate916.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ .SetCoord }
IndexedLineSet915.Coord := Coordinate916;
{ .SetGeometry }
Shape913.Geometry := IndexedLineSet915;
{ .AddChildren }
HAnimSegment912.AddChildren([Shape913]);
Transform917 := TTransformNode.Create;
Transform917.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape918 := TShapeNode.Create;
Shape918 := Shape54;
{ .AddChild }
Transform917.AddChildren([Shape918]);
{ .AddChildren }
HAnimSegment912.AddChildren([Transform917]);
HAnimSite919 := THAnimSiteNode.Create;
HAnimSite919.NameField := 'l_pinky_distal_tip';
HAnimSite919.Translation := Vector3(0.2014,0.7009,-0.1012);
Shape920 := TShapeNode.Create;
Shape920 := Shape61;
{ .AddChildren }
HAnimSite919.AddChildren([Shape920]);
{ .AddChildren }
HAnimSegment912.AddChildren([HAnimSite919]);
{ .AddChildren }
HAnimJoint911.AddChildren([HAnimSegment912]);
{ .AddChildren }
HAnimJoint903.AddChildren([HAnimJoint911]);
{ .AddChildren }
HAnimJoint895.AddChildren([HAnimJoint903]);
{ .AddChildren }
HAnimJoint887.AddChildren([HAnimJoint895]);
{ .AddChildren }
HAnimJoint743.AddChildren([HAnimJoint887]);
{ .AddChildren }
HAnimJoint721.AddChildren([HAnimJoint743]);
{ .AddChildren }
HAnimJoint697.AddChildren([HAnimJoint721]);
{ .AddChildren }
HAnimJoint681.AddChildren([HAnimJoint697]);
{ .AddChildren }
HAnimJoint671.AddChildren([HAnimJoint681]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimJoint671]);
HAnimJoint921 := THAnimJointNode.Create;
HAnimJoint921.NameField := 'r_sternoclavicular';
HAnimJoint921.Center := Vector3(-0.03,1.46,0);
HAnimJoint921.SetSkinCoordIndex([10]);
HAnimJoint921.SetSkinCoordWeight([1]);
HAnimSegment922 := THAnimSegmentNode.Create;
HAnimSegment922.NameField := 'r_clavicle';
Shape923 := TShapeNode.Create;
Appearance924 := TAppearanceNode.Create;
Appearance924 := Appearance68;
{ .SetAppearance }
Shape923.Appearance := Appearance924;
IndexedLineSet925 := TIndexedLineSetNode.Create;
IndexedLineSet925.SetCoordIndex([0,1,-1]);
Coordinate926 := TCoordinateNode.Create;
Coordinate926.SetPoint([Vector3(-0.03,1.46,0.02),Vector3(-0.09,1.41,-0.09)]);
{ .SetCoord }
IndexedLineSet925.Coord := Coordinate926;
{ .SetGeometry }
Shape923.Geometry := IndexedLineSet925;
{ .AddChildren }
HAnimSegment922.AddChildren([Shape923]);
Transform927 := TTransformNode.Create;
Transform927.Translation := Vector3(-0.03,1.46,0.02);
Shape928 := TShapeNode.Create;
Shape928 := Shape54;
{ .AddChild }
Transform927.AddChildren([Shape928]);
{ .AddChildren }
HAnimSegment922.AddChildren([Transform927]);
HAnimSite929 := THAnimSiteNode.Create;
HAnimSite929.NameField := 'r_clavicale';
HAnimSite929.Translation := Vector3(-0.03,1.46,0.035);
Shape930 := TShapeNode.Create;
Shape930 := Shape61;
{ .AddChildren }
HAnimSite929.AddChildren([Shape930]);
{ .AddChildren }
HAnimSegment922.AddChildren([HAnimSite929]);
{ .AddChildren }
HAnimJoint921.AddChildren([HAnimSegment922]);
HAnimJoint931 := THAnimJointNode.Create;
HAnimJoint931.NameField := 'r_acromioclavicular';
HAnimJoint931.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint931.SetSkinCoordIndex([77,29]);
HAnimJoint931.SetSkinCoordWeight([1,0.9]);
HAnimSegment932 := THAnimSegmentNode.Create;
HAnimSegment932.NameField := 'r_scapula';
Shape933 := TShapeNode.Create;
Appearance934 := TAppearanceNode.Create;
Appearance934 := Appearance68;
{ .SetAppearance }
Shape933.Appearance := Appearance934;
IndexedLineSet935 := TIndexedLineSetNode.Create;
IndexedLineSet935.SetCoordIndex([0,1,-1]);
Coordinate936 := TCoordinateNode.Create;
Coordinate936.SetPoint([Vector3(-0.09,1.41,-0.09),Vector3(-0.2,1.44,-0.04)]);
{ .SetCoord }
IndexedLineSet935.Coord := Coordinate936;
{ .SetGeometry }
Shape933.Geometry := IndexedLineSet935;
{ .AddChildren }
HAnimSegment932.AddChildren([Shape933]);
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(-0.09,1.41,-0.09);
Shape938 := TShapeNode.Create;
Shape938 := Shape54;
{ .AddChild }
Transform937.AddChildren([Shape938]);
{ .AddChildren }
HAnimSegment932.AddChildren([Transform937]);
Transform939 := TTransformNode.Create;
Transform939.Translation := Vector3(-0.11,1.427,-0.1375);
Shape940 := TShapeNode.Create;
Shape940 := Shape73;
{ .AddChild }
Transform939.AddChildren([Shape940]);
{ .AddChildren }
HAnimSegment932.AddChildren([Transform939]);
HAnimSite941 := THAnimSiteNode.Create;
HAnimSite941.NameField := 'r_acromion';
HAnimSite941.Translation := Vector3(-0.178,1.4825,-0.0625);
Shape942 := TShapeNode.Create;
Shape942 := Shape61;
{ .AddChildren }
HAnimSite941.AddChildren([Shape942]);
{ .AddChildren }
HAnimSegment932.AddChildren([HAnimSite941]);
HAnimSite943 := THAnimSiteNode.Create;
HAnimSite943.NameField := 'r_axilla_ant';
HAnimSite943.Translation := Vector3(-0.17,1.38,0.007);
Shape944 := TShapeNode.Create;
Shape944 := Shape61;
{ .AddChildren }
HAnimSite943.AddChildren([Shape944]);
{ .AddChildren }
HAnimSegment932.AddChildren([HAnimSite943]);
HAnimSite945 := THAnimSiteNode.Create;
HAnimSite945.NameField := 'r_axilla_post';
HAnimSite945.Translation := Vector3(-0.16,1.38,-0.127);
Shape946 := TShapeNode.Create;
Shape946 := Shape61;
{ .AddChildren }
HAnimSite945.AddChildren([Shape946]);
{ .AddChildren }
HAnimSegment932.AddChildren([HAnimSite945]);
{ .AddChildren }
HAnimJoint931.AddChildren([HAnimSegment932]);
HAnimJoint947 := THAnimJointNode.Create;
HAnimJoint947.NameField := 'r_shoulder';
HAnimJoint947.Rotation := Vector4(0,0,-0.999999999999779,0.0372377698785245);
HAnimJoint947.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint947.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint947.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment948 := THAnimSegmentNode.Create;
HAnimSegment948.NameField := 'r_upperarm';
Transform949 := TTransformNode.Create;
Transform949.Translation := Vector3(-0.2,1.44,-0.04);
Shape950 := TShapeNode.Create;
Shape950 := Shape54;
{ .AddChild }
Transform949.AddChildren([Shape950]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform949]);
Shape951 := TShapeNode.Create;
Appearance952 := TAppearanceNode.Create;
Appearance952 := Appearance68;
{ .SetAppearance }
Shape951.Appearance := Appearance952;
IndexedLineSet953 := TIndexedLineSetNode.Create;
IndexedLineSet953.SetCoordIndex([0,1,-1]);
Coordinate954 := TCoordinateNode.Create;
Coordinate954.SetPoint([Vector3(-0.2,1.44,-0.04),Vector3(-0.2,1.1388,-0.04)]);
{ .SetCoord }
IndexedLineSet953.Coord := Coordinate954;
{ .SetGeometry }
Shape951.Geometry := IndexedLineSet953;
{ .AddChildren }
HAnimSegment948.AddChildren([Shape951]);
Transform955 := TTransformNode.Create;
Transform955.Translation := Vector3(-0.178,1.4825,-0.0625);
Shape956 := TShapeNode.Create;
Shape956 := Shape73;
{ .AddChild }
Transform955.AddChildren([Shape956]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform955]);
Transform957 := TTransformNode.Create;
Transform957.Translation := Vector3(-0.17,1.38,0.007);
Shape958 := TShapeNode.Create;
Shape958 := Shape73;
{ .AddChild }
Transform957.AddChildren([Shape958]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform957]);
Transform959 := TTransformNode.Create;
Transform959.Translation := Vector3(-0.16,1.38,-0.127);
Shape960 := TShapeNode.Create;
Shape960 := Shape73;
{ .AddChild }
Transform959.AddChildren([Shape960]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform959]);
Transform961 := TTransformNode.Create;
Transform961.Translation := Vector3(-0.235,1.42,-0.0625);
Shape962 := TShapeNode.Create;
Shape962 := Shape73;
{ .AddChild }
Transform961.AddChildren([Shape962]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform961]);
Transform963 := TTransformNode.Create;
Transform963.Translation := Vector3(-0.23,1.235,-0.04);
Shape964 := TShapeNode.Create;
Shape964 := Shape73;
{ .AddChild }
Transform963.AddChildren([Shape964]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform963]);
Transform965 := TTransformNode.Create;
Transform965.Translation := Vector3(-0.16,1.23,-0.04);
Shape966 := TShapeNode.Create;
Shape966 := Shape73;
{ .AddChild }
Transform965.AddChildren([Shape966]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform965]);
Transform967 := TTransformNode.Create;
Transform967.Translation := Vector3(-0.2,1.23,-0.105);
Shape968 := TShapeNode.Create;
Shape968 := Shape73;
{ .AddChild }
Transform967.AddChildren([Shape968]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform967]);
Transform969 := TTransformNode.Create;
Transform969.Translation := Vector3(-0.2,1.235,0.02);
Shape970 := TShapeNode.Create;
Shape970 := Shape73;
{ .AddChild }
Transform969.AddChildren([Shape970]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform969]);
HAnimSite971 := THAnimSiteNode.Create;
HAnimSite971.NameField := 'r_humeral_medial_epicn';
HAnimSite971.Translation := Vector3(-0.165,1.1388,-0.04);
Shape972 := TShapeNode.Create;
Shape972 := Shape61;
{ .AddChildren }
HAnimSite971.AddChildren([Shape972]);
{ .AddChildren }
HAnimSegment948.AddChildren([HAnimSite971]);
HAnimSite973 := THAnimSiteNode.Create;
HAnimSite973.NameField := 'r_radiale';
HAnimSite973.Translation := Vector3(-0.23,1.133,-0.055);
Shape974 := TShapeNode.Create;
Shape974 := Shape61;
{ .AddChildren }
HAnimSite973.AddChildren([Shape974]);
{ .AddChildren }
HAnimSegment948.AddChildren([HAnimSite973]);
HAnimSite975 := THAnimSiteNode.Create;
HAnimSite975.NameField := 'r_humeral_lateral_epicn';
HAnimSite975.Translation := Vector3(-0.244,1.1388,-0.04);
Shape976 := TShapeNode.Create;
Shape976 := Shape61;
{ .AddChildren }
HAnimSite975.AddChildren([Shape976]);
{ .AddChildren }
HAnimSegment948.AddChildren([HAnimSite975]);
{ .AddChildren }
HAnimJoint947.AddChildren([HAnimSegment948]);
HAnimJoint977 := THAnimJointNode.Create;
HAnimJoint977.NameField := 'r_elbow';
HAnimJoint977.Rotation := Vector4(-0.970142500145333,-0.242535625036333,0,0.149344152360623);
HAnimJoint977.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint977.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint977.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment978 := THAnimSegmentNode.Create;
HAnimSegment978.NameField := 'r_forearm';
Shape979 := TShapeNode.Create;
Appearance980 := TAppearanceNode.Create;
Appearance980 := Appearance68;
{ .SetAppearance }
Shape979.Appearance := Appearance980;
IndexedLineSet981 := TIndexedLineSetNode.Create;
IndexedLineSet981.SetCoordIndex([0,1,-1]);
Coordinate982 := TCoordinateNode.Create;
Coordinate982.SetPoint([Vector3(-0.2,1.1388,-0.04),Vector3(-0.2,0.89,-0.04)]);
{ .SetCoord }
IndexedLineSet981.Coord := Coordinate982;
{ .SetGeometry }
Shape979.Geometry := IndexedLineSet981;
{ .AddChildren }
HAnimSegment978.AddChildren([Shape979]);
Transform983 := TTransformNode.Create;
Transform983.Translation := Vector3(-0.2,1.1388,-0.04);
Shape984 := TShapeNode.Create;
Shape984 := Shape54;
{ .AddChild }
Transform983.AddChildren([Shape984]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform983]);
Transform985 := TTransformNode.Create;
Transform985.Translation := Vector3(-0.2,1.1388,0.013);
Shape986 := TShapeNode.Create;
Shape986 := Shape73;
{ .AddChild }
Transform985.AddChildren([Shape986]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform985]);
Transform987 := TTransformNode.Create;
Transform987.Translation := Vector3(-0.225,1,-0.01);
Shape988 := TShapeNode.Create;
Shape988 := Shape73;
{ .AddChild }
Transform987.AddChildren([Shape988]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform987]);
Transform989 := TTransformNode.Create;
Transform989.Translation := Vector3(-0.225,1,-0.07);
Shape990 := TShapeNode.Create;
Shape990 := Shape73;
{ .AddChild }
Transform989.AddChildren([Shape990]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform989]);
Transform991 := TTransformNode.Create;
Transform991.Translation := Vector3(-0.185,1,-0.01);
Shape992 := TShapeNode.Create;
Shape992 := Shape73;
{ .AddChild }
Transform991.AddChildren([Shape992]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform991]);
Transform993 := TTransformNode.Create;
Transform993.Translation := Vector3(-0.185,1,-0.07);
Shape994 := TShapeNode.Create;
Shape994 := Shape73;
{ .AddChild }
Transform993.AddChildren([Shape994]);
{ .AddChildren }
HAnimSegment978.AddChildren([Transform993]);
HAnimSite995 := THAnimSiteNode.Create;
HAnimSite995.NameField := 'r_radial_styloid';
HAnimSite995.Translation := Vector3(-0.2,0.9,-0.015);
Shape996 := TShapeNode.Create;
Shape996 := Shape61;
{ .AddChildren }
HAnimSite995.AddChildren([Shape996]);
{ .AddChildren }
HAnimSegment978.AddChildren([HAnimSite995]);
HAnimSite997 := THAnimSiteNode.Create;
HAnimSite997.NameField := 'r_olecranon';
HAnimSite997.Translation := Vector3(-0.2,1.1388,-0.08);
Shape998 := TShapeNode.Create;
Shape998 := Shape61;
{ .AddChildren }
HAnimSite997.AddChildren([Shape998]);
{ .AddChildren }
HAnimSegment978.AddChildren([HAnimSite997]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimSegment978]);
HAnimJoint999 := THAnimJointNode.Create;
HAnimJoint999.NameField := 'r_wrist';
HAnimJoint999.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint999.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint999.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment1000 := THAnimSegmentNode.Create;
HAnimSegment1000.NameField := 'r_hand';
Shape1001 := TShapeNode.Create;
Appearance1002 := TAppearanceNode.Create;
Appearance1002 := Appearance68;
{ .SetAppearance }
Shape1001.Appearance := Appearance1002;
IndexedLineSet1003 := TIndexedLineSetNode.Create;
IndexedLineSet1003.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate1004 := TCoordinateNode.Create;
Coordinate1004.SetPoint([Vector3(-0.2,0.89,-0.04),Vector3(-0.2,0.85,0),Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.84,-0.085)]);
{ .SetCoord }
IndexedLineSet1003.Coord := Coordinate1004;
{ .SetGeometry }
Shape1001.Geometry := IndexedLineSet1003;
{ .AddChildren }
HAnimSegment1000.AddChildren([Shape1001]);
Transform1005 := TTransformNode.Create;
Transform1005.Translation := Vector3(-0.2,0.89,-0.04);
Shape1006 := TShapeNode.Create;
Shape1006 := Shape54;
{ .AddChild }
Transform1005.AddChildren([Shape1006]);
{ .AddChildren }
HAnimSegment1000.AddChildren([Transform1005]);
HAnimSite1007 := THAnimSiteNode.Create;
HAnimSite1007.NameField := 'r_ulnar_styloid';
HAnimSite1007.Translation := Vector3(-0.2,0.9,-0.085);
Shape1008 := TShapeNode.Create;
Shape1008 := Shape61;
{ .AddChildren }
HAnimSite1007.AddChildren([Shape1008]);
{ .AddChildren }
HAnimSegment1000.AddChildren([HAnimSite1007]);
{ .AddChildren }
HAnimJoint999.AddChildren([HAnimSegment1000]);
HAnimJoint1009 := THAnimJointNode.Create;
HAnimJoint1009.NameField := 'r_thumb1';
HAnimJoint1009.Rotation := Vector4(0.999999999999976,0,0,0.11171329853783);
HAnimJoint1009.Center := Vector3(-0.2,0.85,0);
HAnimJoint1009.SetSkinCoordIndex([243,244]);
HAnimJoint1009.SetSkinCoordWeight([1,1]);
HAnimSegment1010 := THAnimSegmentNode.Create;
HAnimSegment1010.NameField := 'r_thumb_metacarpal';
Shape1011 := TShapeNode.Create;
Appearance1012 := TAppearanceNode.Create;
Appearance1012 := Appearance68;
{ .SetAppearance }
Shape1011.Appearance := Appearance1012;
IndexedLineSet1013 := TIndexedLineSetNode.Create;
IndexedLineSet1013.SetCoordIndex([0,1,-1]);
Coordinate1014 := TCoordinateNode.Create;
Coordinate1014.SetPoint([Vector3(-0.2,0.85,0),Vector3(-0.2,0.82,0.03)]);
{ .SetCoord }
IndexedLineSet1013.Coord := Coordinate1014;
{ .SetGeometry }
Shape1011.Geometry := IndexedLineSet1013;
{ .AddChildren }
HAnimSegment1010.AddChildren([Shape1011]);
Transform1015 := TTransformNode.Create;
Transform1015.Translation := Vector3(-0.2,0.85,0);
Shape1016 := TShapeNode.Create;
Shape1016 := Shape54;
{ .AddChild }
Transform1015.AddChildren([Shape1016]);
{ .AddChildren }
HAnimSegment1010.AddChildren([Transform1015]);
{ .AddChildren }
HAnimJoint1009.AddChildren([HAnimSegment1010]);
HAnimJoint1017 := THAnimJointNode.Create;
HAnimJoint1017.NameField := 'r_thumb2';
HAnimJoint1017.Rotation := Vector4(0.707106781186553,0.707106781186553,0,0.167569951968385);
HAnimJoint1017.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint1017.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint1017.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment1018 := THAnimSegmentNode.Create;
HAnimSegment1018.NameField := 'r_thumb_proximal';
Shape1019 := TShapeNode.Create;
Appearance1020 := TAppearanceNode.Create;
Appearance1020 := Appearance68;
{ .SetAppearance }
Shape1019.Appearance := Appearance1020;
IndexedLineSet1021 := TIndexedLineSetNode.Create;
IndexedLineSet1021.SetCoordIndex([0,1,-1]);
Coordinate1022 := TCoordinateNode.Create;
Coordinate1022.SetPoint([Vector3(-0.2,0.82,0.03),Vector3(-0.2,0.8,0.05)]);
{ .SetCoord }
IndexedLineSet1021.Coord := Coordinate1022;
{ .SetGeometry }
Shape1019.Geometry := IndexedLineSet1021;
{ .AddChildren }
HAnimSegment1018.AddChildren([Shape1019]);
Transform1023 := TTransformNode.Create;
Transform1023.Translation := Vector3(-0.2,0.82,0.03);
Shape1024 := TShapeNode.Create;
Shape1024 := Shape54;
{ .AddChild }
Transform1023.AddChildren([Shape1024]);
{ .AddChildren }
HAnimSegment1018.AddChildren([Transform1023]);
{ .AddChildren }
HAnimJoint1017.AddChildren([HAnimSegment1018]);
HAnimJoint1025 := THAnimJointNode.Create;
HAnimJoint1025.NameField := 'r_thumb3';
HAnimJoint1025.Rotation := Vector4(0.707106781186553,0.707106781186553,0,0.167569951968385);
HAnimJoint1025.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint1025.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint1025.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1026 := THAnimSegmentNode.Create;
HAnimSegment1026.NameField := 'r_thumb_distal';
Shape1027 := TShapeNode.Create;
Appearance1028 := TAppearanceNode.Create;
Appearance1028 := Appearance68;
{ .SetAppearance }
Shape1027.Appearance := Appearance1028;
IndexedLineSet1029 := TIndexedLineSetNode.Create;
IndexedLineSet1029.SetCoordIndex([0,1,-1]);
Coordinate1030 := TCoordinateNode.Create;
Coordinate1030.SetPoint([Vector3(-0.2,0.8,0.05),Vector3(-0.2,0.78,0.07)]);
{ .SetCoord }
IndexedLineSet1029.Coord := Coordinate1030;
{ .SetGeometry }
Shape1027.Geometry := IndexedLineSet1029;
{ .AddChildren }
HAnimSegment1026.AddChildren([Shape1027]);
Transform1031 := TTransformNode.Create;
Transform1031.Translation := Vector3(-0.2,0.785,0.075);
Shape1032 := TShapeNode.Create;
Shape1032 := Shape73;
{ .AddChild }
Transform1031.AddChildren([Shape1032]);
{ .AddChildren }
HAnimSegment1026.AddChildren([Transform1031]);
Transform1033 := TTransformNode.Create;
Transform1033.Translation := Vector3(-0.2,0.8,0.05);
Shape1034 := TShapeNode.Create;
Shape1034 := Shape54;
{ .AddChild }
Transform1033.AddChildren([Shape1034]);
{ .AddChildren }
HAnimSegment1026.AddChildren([Transform1033]);
HAnimSite1035 := THAnimSiteNode.Create;
HAnimSite1035.NameField := 'r_thumb_distal_tip';
HAnimSite1035.Translation := Vector3(-0.2,0.78,0.07);
Shape1036 := TShapeNode.Create;
Shape1036 := Shape61;
{ .AddChildren }
HAnimSite1035.AddChildren([Shape1036]);
{ .AddChildren }
HAnimSegment1026.AddChildren([HAnimSite1035]);
{ .AddChildren }
HAnimJoint1025.AddChildren([HAnimSegment1026]);
{ .AddChildren }
HAnimJoint1017.AddChildren([HAnimJoint1025]);
{ .AddChildren }
HAnimJoint1009.AddChildren([HAnimJoint1017]);
{ .AddChildren }
HAnimJoint999.AddChildren([HAnimJoint1009]);
HAnimJoint1037 := THAnimJointNode.Create;
HAnimJoint1037.NameField := 'r_index0';
HAnimJoint1037.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1037.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint1037.SetSkinCoordIndex([245,246]);
HAnimJoint1037.SetSkinCoordWeight([1,1]);
HAnimSegment1038 := THAnimSegmentNode.Create;
HAnimSegment1038.NameField := 'r_index_metacarpal';
Shape1039 := TShapeNode.Create;
Appearance1040 := TAppearanceNode.Create;
Appearance1040 := Appearance68;
{ .SetAppearance }
Shape1039.Appearance := Appearance1040;
IndexedLineSet1041 := TIndexedLineSetNode.Create;
IndexedLineSet1041.SetCoordIndex([0,1,-1]);
Coordinate1042 := TCoordinateNode.Create;
Coordinate1042.SetPoint([Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.793,-0.015)]);
{ .SetCoord }
IndexedLineSet1041.Coord := Coordinate1042;
{ .SetGeometry }
Shape1039.Geometry := IndexedLineSet1041;
{ .AddChildren }
HAnimSegment1038.AddChildren([Shape1039]);
Transform1043 := TTransformNode.Create;
Transform1043.Translation := Vector3(-0.2,0.84,-0.015);
Shape1044 := TShapeNode.Create;
Shape1044 := Shape54;
{ .AddChild }
Transform1043.AddChildren([Shape1044]);
{ .AddChildren }
HAnimSegment1038.AddChildren([Transform1043]);
HAnimSite1045 := THAnimSiteNode.Create;
HAnimSite1045.NameField := 'r_metacarpal_pha2';
HAnimSite1045.Translation := Vector3(-0.2,0.793,-0.005);
Shape1046 := TShapeNode.Create;
Shape1046 := Shape61;
{ .AddChildren }
HAnimSite1045.AddChildren([Shape1046]);
{ .AddChildren }
HAnimSegment1038.AddChildren([HAnimSite1045]);
{ .AddChildren }
HAnimJoint1037.AddChildren([HAnimSegment1038]);
HAnimJoint1047 := THAnimJointNode.Create;
HAnimJoint1047.NameField := 'r_index1';
HAnimJoint1047.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1047.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint1047.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint1047.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment1048 := THAnimSegmentNode.Create;
HAnimSegment1048.NameField := 'r_index_proximal';
Shape1049 := TShapeNode.Create;
Appearance1050 := TAppearanceNode.Create;
Appearance1050 := Appearance68;
{ .SetAppearance }
Shape1049.Appearance := Appearance1050;
IndexedLineSet1051 := TIndexedLineSetNode.Create;
IndexedLineSet1051.SetCoordIndex([0,1,-1]);
Coordinate1052 := TCoordinateNode.Create;
Coordinate1052.SetPoint([Vector3(-0.2,0.793,-0.015),Vector3(-0.2,0.745,-0.015)]);
{ .SetCoord }
IndexedLineSet1051.Coord := Coordinate1052;
{ .SetGeometry }
Shape1049.Geometry := IndexedLineSet1051;
{ .AddChildren }
HAnimSegment1048.AddChildren([Shape1049]);
Transform1053 := TTransformNode.Create;
Transform1053.Translation := Vector3(-0.2,0.793,-0.015);
Shape1054 := TShapeNode.Create;
Shape1054 := Shape54;
{ .AddChild }
Transform1053.AddChildren([Shape1054]);
{ .AddChildren }
HAnimSegment1048.AddChildren([Transform1053]);
{ .AddChildren }
HAnimJoint1047.AddChildren([HAnimSegment1048]);
HAnimJoint1055 := THAnimJointNode.Create;
HAnimJoint1055.NameField := 'r_index2';
HAnimJoint1055.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1055.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint1055.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint1055.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1056 := THAnimSegmentNode.Create;
HAnimSegment1056.NameField := 'r_index_middle';
Shape1057 := TShapeNode.Create;
Appearance1058 := TAppearanceNode.Create;
Appearance1058 := Appearance68;
{ .SetAppearance }
Shape1057.Appearance := Appearance1058;
IndexedLineSet1059 := TIndexedLineSetNode.Create;
IndexedLineSet1059.SetCoordIndex([0,1,-1]);
Coordinate1060 := TCoordinateNode.Create;
Coordinate1060.SetPoint([Vector3(-0.2,0.745,-0.015),Vector3(-0.2,0.72,-0.015)]);
{ .SetCoord }
IndexedLineSet1059.Coord := Coordinate1060;
{ .SetGeometry }
Shape1057.Geometry := IndexedLineSet1059;
{ .AddChildren }
HAnimSegment1056.AddChildren([Shape1057]);
Transform1061 := TTransformNode.Create;
Transform1061.Translation := Vector3(-0.2,0.745,-0.015);
Shape1062 := TShapeNode.Create;
Shape1062 := Shape54;
{ .AddChild }
Transform1061.AddChildren([Shape1062]);
{ .AddChildren }
HAnimSegment1056.AddChildren([Transform1061]);
{ .AddChildren }
HAnimJoint1055.AddChildren([HAnimSegment1056]);
HAnimJoint1063 := THAnimJointNode.Create;
HAnimJoint1063.NameField := 'r_index3';
HAnimJoint1063.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1063.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint1063.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint1063.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1064 := THAnimSegmentNode.Create;
HAnimSegment1064.NameField := 'r_index_distal';
Shape1065 := TShapeNode.Create;
Appearance1066 := TAppearanceNode.Create;
Appearance1066 := Appearance68;
{ .SetAppearance }
Shape1065.Appearance := Appearance1066;
IndexedLineSet1067 := TIndexedLineSetNode.Create;
IndexedLineSet1067.SetCoordIndex([0,1,-1]);
Coordinate1068 := TCoordinateNode.Create;
Coordinate1068.SetPoint([Vector3(-0.2,0.72,-0.015),Vector3(-0.2,0.695,-0.015)]);
{ .SetCoord }
IndexedLineSet1067.Coord := Coordinate1068;
{ .SetGeometry }
Shape1065.Geometry := IndexedLineSet1067;
{ .AddChildren }
HAnimSegment1064.AddChildren([Shape1065]);
Transform1069 := TTransformNode.Create;
Transform1069.Translation := Vector3(-0.2,0.72,-0.015);
Shape1070 := TShapeNode.Create;
Shape1070 := Shape54;
{ .AddChild }
Transform1069.AddChildren([Shape1070]);
{ .AddChildren }
HAnimSegment1064.AddChildren([Transform1069]);
HAnimSite1071 := THAnimSiteNode.Create;
HAnimSite1071.NameField := 'r_index_distal_tip';
HAnimSite1071.Translation := Vector3(-0.2,0.695,-0.015);
Shape1072 := TShapeNode.Create;
Shape1072 := Shape61;
{ .AddChildren }
HAnimSite1071.AddChildren([Shape1072]);
{ .AddChildren }
HAnimSegment1064.AddChildren([HAnimSite1071]);
{ .AddChildren }
HAnimJoint1063.AddChildren([HAnimSegment1064]);
{ .AddChildren }
HAnimJoint1055.AddChildren([HAnimJoint1063]);
{ .AddChildren }
HAnimJoint1047.AddChildren([HAnimJoint1055]);
{ .AddChildren }
HAnimJoint1037.AddChildren([HAnimJoint1047]);
{ .AddChildren }
HAnimJoint999.AddChildren([HAnimJoint1037]);
HAnimJoint1073 := THAnimJointNode.Create;
HAnimJoint1073.NameField := 'r_middle0';
HAnimJoint1073.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1073.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint1073.SetSkinCoordIndex([247,248]);
HAnimJoint1073.SetSkinCoordWeight([1,1]);
HAnimSegment1074 := THAnimSegmentNode.Create;
HAnimSegment1074.NameField := 'r_middle_metacarpal';
Shape1075 := TShapeNode.Create;
Appearance1076 := TAppearanceNode.Create;
Appearance1076 := Appearance68;
{ .SetAppearance }
Shape1075.Appearance := Appearance1076;
IndexedLineSet1077 := TIndexedLineSetNode.Create;
IndexedLineSet1077.SetCoordIndex([0,1,-1]);
Coordinate1078 := TCoordinateNode.Create;
Coordinate1078.SetPoint([Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.788,-0.04)]);
{ .SetCoord }
IndexedLineSet1077.Coord := Coordinate1078;
{ .SetGeometry }
Shape1075.Geometry := IndexedLineSet1077;
{ .AddChildren }
HAnimSegment1074.AddChildren([Shape1075]);
Transform1079 := TTransformNode.Create;
Transform1079.Translation := Vector3(-0.2,0.835,-0.04);
Shape1080 := TShapeNode.Create;
Shape1080 := Shape54;
{ .AddChild }
Transform1079.AddChildren([Shape1080]);
{ .AddChildren }
HAnimSegment1074.AddChildren([Transform1079]);
{ .AddChildren }
HAnimJoint1073.AddChildren([HAnimSegment1074]);
HAnimJoint1081 := THAnimJointNode.Create;
HAnimJoint1081.NameField := 'r_middle1';
HAnimJoint1081.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1081.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint1081.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint1081.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1082 := THAnimSegmentNode.Create;
HAnimSegment1082.NameField := 'r_middle_proximal';
Shape1083 := TShapeNode.Create;
Appearance1084 := TAppearanceNode.Create;
Appearance1084 := Appearance68;
{ .SetAppearance }
Shape1083.Appearance := Appearance1084;
IndexedLineSet1085 := TIndexedLineSetNode.Create;
IndexedLineSet1085.SetCoordIndex([0,1,-1]);
Coordinate1086 := TCoordinateNode.Create;
Coordinate1086.SetPoint([Vector3(-0.2,0.788,-0.04),Vector3(-0.2,0.74,-0.04)]);
{ .SetCoord }
IndexedLineSet1085.Coord := Coordinate1086;
{ .SetGeometry }
Shape1083.Geometry := IndexedLineSet1085;
{ .AddChildren }
HAnimSegment1082.AddChildren([Shape1083]);
Transform1087 := TTransformNode.Create;
Transform1087.Translation := Vector3(-0.2,0.788,-0.04);
Shape1088 := TShapeNode.Create;
Shape1088 := Shape54;
{ .AddChild }
Transform1087.AddChildren([Shape1088]);
{ .AddChildren }
HAnimSegment1082.AddChildren([Transform1087]);
{ .AddChildren }
HAnimJoint1081.AddChildren([HAnimSegment1082]);
HAnimJoint1089 := THAnimJointNode.Create;
HAnimJoint1089.NameField := 'r_middle2';
HAnimJoint1089.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1089.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint1089.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint1089.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1090 := THAnimSegmentNode.Create;
HAnimSegment1090.NameField := 'r_middle_middle';
Shape1091 := TShapeNode.Create;
Appearance1092 := TAppearanceNode.Create;
Appearance1092 := Appearance68;
{ .SetAppearance }
Shape1091.Appearance := Appearance1092;
IndexedLineSet1093 := TIndexedLineSetNode.Create;
IndexedLineSet1093.SetCoordIndex([0,1,-1]);
Coordinate1094 := TCoordinateNode.Create;
Coordinate1094.SetPoint([Vector3(-0.2,0.74,-0.04),Vector3(-0.2,0.7142,-0.04)]);
{ .SetCoord }
IndexedLineSet1093.Coord := Coordinate1094;
{ .SetGeometry }
Shape1091.Geometry := IndexedLineSet1093;
{ .AddChildren }
HAnimSegment1090.AddChildren([Shape1091]);
Transform1095 := TTransformNode.Create;
Transform1095.Translation := Vector3(-0.2,0.74,-0.04);
Shape1096 := TShapeNode.Create;
Shape1096 := Shape54;
{ .AddChild }
Transform1095.AddChildren([Shape1096]);
{ .AddChildren }
HAnimSegment1090.AddChildren([Transform1095]);
{ .AddChildren }
HAnimJoint1089.AddChildren([HAnimSegment1090]);
HAnimJoint1097 := THAnimJointNode.Create;
HAnimJoint1097.NameField := 'r_middle3';
HAnimJoint1097.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1097.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint1097.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint1097.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1098 := THAnimSegmentNode.Create;
HAnimSegment1098.NameField := 'r_middle_distal';
Shape1099 := TShapeNode.Create;
Appearance1100 := TAppearanceNode.Create;
Appearance1100 := Appearance68;
{ .SetAppearance }
Shape1099.Appearance := Appearance1100;
IndexedLineSet1101 := TIndexedLineSetNode.Create;
IndexedLineSet1101.SetCoordIndex([0,1,-1]);
Coordinate1102 := TCoordinateNode.Create;
Coordinate1102.SetPoint([Vector3(-0.2,0.7142,-0.04),Vector3(-0.2,0.6758,-0.04)]);
{ .SetCoord }
IndexedLineSet1101.Coord := Coordinate1102;
{ .SetGeometry }
Shape1099.Geometry := IndexedLineSet1101;
{ .AddChildren }
HAnimSegment1098.AddChildren([Shape1099]);
Transform1103 := TTransformNode.Create;
Transform1103.Translation := Vector3(-0.2,0.7142,-0.04);
Shape1104 := TShapeNode.Create;
Shape1104 := Shape54;
{ .AddChild }
Transform1103.AddChildren([Shape1104]);
{ .AddChildren }
HAnimSegment1098.AddChildren([Transform1103]);
HAnimSite1105 := THAnimSiteNode.Create;
HAnimSite1105.NameField := 'r_dactylion';
HAnimSite1105.Translation := Vector3(-0.2,0.68,-0.04);
Shape1106 := TShapeNode.Create;
Shape1106 := Shape61;
{ .AddChildren }
HAnimSite1105.AddChildren([Shape1106]);
{ .AddChildren }
HAnimSegment1098.AddChildren([HAnimSite1105]);
HAnimSite1107 := THAnimSiteNode.Create;
HAnimSite1107.NameField := 'r_middle_distal_tip';
HAnimSite1107.Translation := Vector3(-0.2,0.68,-0.04);
Shape1108 := TShapeNode.Create;
Shape1108 := Shape61;
{ .AddChildren }
HAnimSite1107.AddChildren([Shape1108]);
{ .AddChildren }
HAnimSegment1098.AddChildren([HAnimSite1107]);
{ .AddChildren }
HAnimJoint1097.AddChildren([HAnimSegment1098]);
{ .AddChildren }
HAnimJoint1089.AddChildren([HAnimJoint1097]);
{ .AddChildren }
HAnimJoint1081.AddChildren([HAnimJoint1089]);
{ .AddChildren }
HAnimJoint1073.AddChildren([HAnimJoint1081]);
{ .AddChildren }
HAnimJoint999.AddChildren([HAnimJoint1073]);
HAnimJoint1109 := THAnimJointNode.Create;
HAnimJoint1109.NameField := 'r_ring0';
HAnimJoint1109.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1109.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint1109.SetSkinCoordIndex([249,250]);
HAnimJoint1109.SetSkinCoordWeight([1,1]);
HAnimSegment1110 := THAnimSegmentNode.Create;
HAnimSegment1110.NameField := 'r_ring_metacarpal';
Shape1111 := TShapeNode.Create;
Appearance1112 := TAppearanceNode.Create;
Appearance1112 := Appearance68;
{ .SetAppearance }
Shape1111.Appearance := Appearance1112;
IndexedLineSet1113 := TIndexedLineSetNode.Create;
IndexedLineSet1113.SetCoordIndex([0,1,-1]);
Coordinate1114 := TCoordinateNode.Create;
Coordinate1114.SetPoint([Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.793,-0.065)]);
{ .SetCoord }
IndexedLineSet1113.Coord := Coordinate1114;
{ .SetGeometry }
Shape1111.Geometry := IndexedLineSet1113;
{ .AddChildren }
HAnimSegment1110.AddChildren([Shape1111]);
Transform1115 := TTransformNode.Create;
Transform1115.Translation := Vector3(-0.2,0.835,-0.065);
Shape1116 := TShapeNode.Create;
Shape1116 := Shape54;
{ .AddChild }
Transform1115.AddChildren([Shape1116]);
{ .AddChildren }
HAnimSegment1110.AddChildren([Transform1115]);
{ .AddChildren }
HAnimJoint1109.AddChildren([HAnimSegment1110]);
HAnimJoint1117 := THAnimJointNode.Create;
HAnimJoint1117.NameField := 'r_ring1';
HAnimJoint1117.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1117.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint1117.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint1117.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1118 := THAnimSegmentNode.Create;
HAnimSegment1118.NameField := 'r_ring_proximal';
Shape1119 := TShapeNode.Create;
Appearance1120 := TAppearanceNode.Create;
Appearance1120 := Appearance68;
{ .SetAppearance }
Shape1119.Appearance := Appearance1120;
IndexedLineSet1121 := TIndexedLineSetNode.Create;
IndexedLineSet1121.SetCoordIndex([0,1,-1]);
Coordinate1122 := TCoordinateNode.Create;
Coordinate1122.SetPoint([Vector3(-0.2,0.793,-0.065),Vector3(-0.2,0.74,-0.065)]);
{ .SetCoord }
IndexedLineSet1121.Coord := Coordinate1122;
{ .SetGeometry }
Shape1119.Geometry := IndexedLineSet1121;
{ .AddChildren }
HAnimSegment1118.AddChildren([Shape1119]);
Transform1123 := TTransformNode.Create;
Transform1123.Translation := Vector3(-0.2,0.793,-0.065);
Shape1124 := TShapeNode.Create;
Shape1124 := Shape54;
{ .AddChild }
Transform1123.AddChildren([Shape1124]);
{ .AddChildren }
HAnimSegment1118.AddChildren([Transform1123]);
{ .AddChildren }
HAnimJoint1117.AddChildren([HAnimSegment1118]);
HAnimJoint1125 := THAnimJointNode.Create;
HAnimJoint1125.NameField := 'r_ring2';
HAnimJoint1125.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1125.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint1125.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint1125.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1126 := THAnimSegmentNode.Create;
HAnimSegment1126.NameField := 'r_ring_middle';
Shape1127 := TShapeNode.Create;
Appearance1128 := TAppearanceNode.Create;
Appearance1128 := Appearance68;
{ .SetAppearance }
Shape1127.Appearance := Appearance1128;
IndexedLineSet1129 := TIndexedLineSetNode.Create;
IndexedLineSet1129.SetCoordIndex([0,1,-1]);
Coordinate1130 := TCoordinateNode.Create;
Coordinate1130.SetPoint([Vector3(-0.2,0.74,-0.065),Vector3(-0.2,0.7177,-0.065)]);
{ .SetCoord }
IndexedLineSet1129.Coord := Coordinate1130;
{ .SetGeometry }
Shape1127.Geometry := IndexedLineSet1129;
{ .AddChildren }
HAnimSegment1126.AddChildren([Shape1127]);
Transform1131 := TTransformNode.Create;
Transform1131.Translation := Vector3(-0.2,0.74,-0.065);
Shape1132 := TShapeNode.Create;
Shape1132 := Shape54;
{ .AddChild }
Transform1131.AddChildren([Shape1132]);
{ .AddChildren }
HAnimSegment1126.AddChildren([Transform1131]);
{ .AddChildren }
HAnimJoint1125.AddChildren([HAnimSegment1126]);
HAnimJoint1133 := THAnimJointNode.Create;
HAnimJoint1133.NameField := 'r_ring3';
HAnimJoint1133.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1133.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint1133.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint1133.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1134 := THAnimSegmentNode.Create;
HAnimSegment1134.NameField := 'r_ring_distal';
Shape1135 := TShapeNode.Create;
Appearance1136 := TAppearanceNode.Create;
Appearance1136 := Appearance68;
{ .SetAppearance }
Shape1135.Appearance := Appearance1136;
IndexedLineSet1137 := TIndexedLineSetNode.Create;
IndexedLineSet1137.SetCoordIndex([0,1,-1]);
Coordinate1138 := TCoordinateNode.Create;
Coordinate1138.SetPoint([Vector3(-0.2,0.7177,-0.065),Vector3(-0.2,0.695,-0.065)]);
{ .SetCoord }
IndexedLineSet1137.Coord := Coordinate1138;
{ .SetGeometry }
Shape1135.Geometry := IndexedLineSet1137;
{ .AddChildren }
HAnimSegment1134.AddChildren([Shape1135]);
Transform1139 := TTransformNode.Create;
Transform1139.Translation := Vector3(-0.2,0.7177,-0.065);
Shape1140 := TShapeNode.Create;
Shape1140 := Shape54;
{ .AddChild }
Transform1139.AddChildren([Shape1140]);
{ .AddChildren }
HAnimSegment1134.AddChildren([Transform1139]);
HAnimSite1141 := THAnimSiteNode.Create;
HAnimSite1141.NameField := 'r_ring_distal_tip';
HAnimSite1141.Translation := Vector3(-0.2,0.695,-0.065);
Shape1142 := TShapeNode.Create;
Shape1142 := Shape61;
{ .AddChildren }
HAnimSite1141.AddChildren([Shape1142]);
{ .AddChildren }
HAnimSegment1134.AddChildren([HAnimSite1141]);
{ .AddChildren }
HAnimJoint1133.AddChildren([HAnimSegment1134]);
{ .AddChildren }
HAnimJoint1125.AddChildren([HAnimJoint1133]);
{ .AddChildren }
HAnimJoint1117.AddChildren([HAnimJoint1125]);
{ .AddChildren }
HAnimJoint1109.AddChildren([HAnimJoint1117]);
{ .AddChildren }
HAnimJoint999.AddChildren([HAnimJoint1109]);
HAnimJoint1143 := THAnimJointNode.Create;
HAnimJoint1143.NameField := 'r_pinky0';
HAnimJoint1143.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1143.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint1143.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint1143.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment1144 := THAnimSegmentNode.Create;
HAnimSegment1144.NameField := 'r_pinky_metacarpal';
Shape1145 := TShapeNode.Create;
Appearance1146 := TAppearanceNode.Create;
Appearance1146 := Appearance68;
{ .SetAppearance }
Shape1145.Appearance := Appearance1146;
IndexedLineSet1147 := TIndexedLineSetNode.Create;
IndexedLineSet1147.SetCoordIndex([0,1,-1]);
Coordinate1148 := TCoordinateNode.Create;
Coordinate1148.SetPoint([Vector3(-0.2,0.84,-0.085),Vector3(-0.2,0.79,-0.085)]);
{ .SetCoord }
IndexedLineSet1147.Coord := Coordinate1148;
{ .SetGeometry }
Shape1145.Geometry := IndexedLineSet1147;
{ .AddChildren }
HAnimSegment1144.AddChildren([Shape1145]);
Transform1149 := TTransformNode.Create;
Transform1149.Translation := Vector3(-0.2,0.84,-0.085);
Shape1150 := TShapeNode.Create;
Shape1150 := Shape54;
{ .AddChild }
Transform1149.AddChildren([Shape1150]);
{ .AddChildren }
HAnimSegment1144.AddChildren([Transform1149]);
HAnimSite1151 := THAnimSiteNode.Create;
HAnimSite1151.NameField := 'r_metacarpal_pha5';
HAnimSite1151.Translation := Vector3(-0.2,0.79,-0.095);
Shape1152 := TShapeNode.Create;
Shape1152 := Shape61;
{ .AddChildren }
HAnimSite1151.AddChildren([Shape1152]);
{ .AddChildren }
HAnimSegment1144.AddChildren([HAnimSite1151]);
{ .AddChildren }
HAnimJoint1143.AddChildren([HAnimSegment1144]);
HAnimJoint1153 := THAnimJointNode.Create;
HAnimJoint1153.NameField := 'r_pinky1';
HAnimJoint1153.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1153.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint1153.SetSkinCoordIndex([276,277,278]);
HAnimJoint1153.SetSkinCoordWeight([1,1,1]);
HAnimSegment1154 := THAnimSegmentNode.Create;
HAnimSegment1154.NameField := 'r_pinky_proximal';
Shape1155 := TShapeNode.Create;
Appearance1156 := TAppearanceNode.Create;
Appearance1156 := Appearance68;
{ .SetAppearance }
Shape1155.Appearance := Appearance1156;
IndexedLineSet1157 := TIndexedLineSetNode.Create;
IndexedLineSet1157.SetCoordIndex([0,1,-1]);
Coordinate1158 := TCoordinateNode.Create;
Coordinate1158.SetPoint([Vector3(-0.2,0.79,-0.085),Vector3(-0.2,0.755,-0.085)]);
{ .SetCoord }
IndexedLineSet1157.Coord := Coordinate1158;
{ .SetGeometry }
Shape1155.Geometry := IndexedLineSet1157;
{ .AddChildren }
HAnimSegment1154.AddChildren([Shape1155]);
Transform1159 := TTransformNode.Create;
Transform1159.Translation := Vector3(-0.2,0.79,-0.085);
Shape1160 := TShapeNode.Create;
Shape1160 := Shape54;
{ .AddChild }
Transform1159.AddChildren([Shape1160]);
{ .AddChildren }
HAnimSegment1154.AddChildren([Transform1159]);
{ .AddChildren }
HAnimJoint1153.AddChildren([HAnimSegment1154]);
HAnimJoint1161 := THAnimJointNode.Create;
HAnimJoint1161.NameField := 'r_pinky2';
HAnimJoint1161.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1161.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint1161.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint1161.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1162 := THAnimSegmentNode.Create;
HAnimSegment1162.NameField := 'r_pinky_middle';
Shape1163 := TShapeNode.Create;
Appearance1164 := TAppearanceNode.Create;
Appearance1164 := Appearance68;
{ .SetAppearance }
Shape1163.Appearance := Appearance1164;
IndexedLineSet1165 := TIndexedLineSetNode.Create;
IndexedLineSet1165.SetCoordIndex([0,1,-1]);
Coordinate1166 := TCoordinateNode.Create;
Coordinate1166.SetPoint([Vector3(-0.2,0.755,-0.085),Vector3(-0.2,0.735,-0.085)]);
{ .SetCoord }
IndexedLineSet1165.Coord := Coordinate1166;
{ .SetGeometry }
Shape1163.Geometry := IndexedLineSet1165;
{ .AddChildren }
HAnimSegment1162.AddChildren([Shape1163]);
Transform1167 := TTransformNode.Create;
Transform1167.Translation := Vector3(-0.2,0.755,-0.085);
Shape1168 := TShapeNode.Create;
Shape1168 := Shape54;
{ .AddChild }
Transform1167.AddChildren([Shape1168]);
{ .AddChildren }
HAnimSegment1162.AddChildren([Transform1167]);
{ .AddChildren }
HAnimJoint1161.AddChildren([HAnimSegment1162]);
HAnimJoint1169 := THAnimJointNode.Create;
HAnimJoint1169.NameField := 'r_pinky3';
HAnimJoint1169.Rotation := Vector4(0,0,1.00000000001315,0.0055856647187357);
HAnimJoint1169.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint1169.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint1169.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1170 := THAnimSegmentNode.Create;
HAnimSegment1170.NameField := 'r_pinky_distal';
Shape1171 := TShapeNode.Create;
Appearance1172 := TAppearanceNode.Create;
Appearance1172 := Appearance68;
{ .SetAppearance }
Shape1171.Appearance := Appearance1172;
IndexedLineSet1173 := TIndexedLineSetNode.Create;
IndexedLineSet1173.SetCoordIndex([0,1,-1]);
Coordinate1174 := TCoordinateNode.Create;
Coordinate1174.SetPoint([Vector3(-0.2,0.735,-0.085),Vector3(-0.2,0.72,-0.085)]);
{ .SetCoord }
IndexedLineSet1173.Coord := Coordinate1174;
{ .SetGeometry }
Shape1171.Geometry := IndexedLineSet1173;
{ .AddChildren }
HAnimSegment1170.AddChildren([Shape1171]);
Transform1175 := TTransformNode.Create;
Transform1175.Translation := Vector3(-0.2,0.735,-0.085);
Shape1176 := TShapeNode.Create;
Shape1176 := Shape54;
{ .AddChild }
Transform1175.AddChildren([Shape1176]);
{ .AddChildren }
HAnimSegment1170.AddChildren([Transform1175]);
HAnimSite1177 := THAnimSiteNode.Create;
HAnimSite1177.NameField := 'r_pinky_distal_tip';
HAnimSite1177.Translation := Vector3(-0.2,0.72,-0.085);
Shape1178 := TShapeNode.Create;
Shape1178 := Shape61;
{ .AddChildren }
HAnimSite1177.AddChildren([Shape1178]);
{ .AddChildren }
HAnimSegment1170.AddChildren([HAnimSite1177]);
{ .AddChildren }
HAnimJoint1169.AddChildren([HAnimSegment1170]);
{ .AddChildren }
HAnimJoint1161.AddChildren([HAnimJoint1169]);
{ .AddChildren }
HAnimJoint1153.AddChildren([HAnimJoint1161]);
{ .AddChildren }
HAnimJoint1143.AddChildren([HAnimJoint1153]);
{ .AddChildren }
HAnimJoint999.AddChildren([HAnimJoint1143]);
{ .AddChildren }
HAnimJoint977.AddChildren([HAnimJoint999]);
{ .AddChildren }
HAnimJoint947.AddChildren([HAnimJoint977]);
{ .AddChildren }
HAnimJoint931.AddChildren([HAnimJoint947]);
{ .AddChildren }
HAnimJoint921.AddChildren([HAnimJoint931]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimJoint921]);
{ .AddChildren }
HAnimJoint547.AddChildren([HAnimJoint555]);
{ .AddChildren }
HAnimJoint539.AddChildren([HAnimJoint547]);
{ .AddChildren }
HAnimJoint529.AddChildren([HAnimJoint539]);
{ .AddChildren }
HAnimJoint521.AddChildren([HAnimJoint529]);
{ .AddChildren }
HAnimJoint513.AddChildren([HAnimJoint521]);
{ .AddChildren }
HAnimJoint505.AddChildren([HAnimJoint513]);
{ .AddChildren }
HAnimJoint497.AddChildren([HAnimJoint505]);
{ .AddChildren }
HAnimJoint485.AddChildren([HAnimJoint497]);
{ .AddChildren }
HAnimJoint475.AddChildren([HAnimJoint485]);
{ .AddChildren }
HAnimJoint467.AddChildren([HAnimJoint475]);
{ .AddChildren }
HAnimJoint459.AddChildren([HAnimJoint467]);
{ .AddChildren }
HAnimJoint451.AddChildren([HAnimJoint459]);
{ .AddChildren }
HAnimJoint425.AddChildren([HAnimJoint451]);
{ .AddChildren }
HAnimJoint417.AddChildren([HAnimJoint425]);
{ .AddChildren }
HAnimJoint409.AddChildren([HAnimJoint417]);
{ .AddChildren }
HAnimJoint394.AddChildren([HAnimJoint409]);
{ .AddChildren }
HAnimJoint80.AddChildren([HAnimJoint394]);
{ .AddSkeleton }
HAnimHumanoid79.SetSkeleton([HAnimJoint80]);
HAnimJoint1179 := THAnimJointNode.Create;
HAnimJoint1179 := HAnimJoint80;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1179;
HAnimJoint1180 := THAnimJointNode.Create;
HAnimJoint1180 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1180;
HAnimJoint1181 := THAnimJointNode.Create;
HAnimJoint1181 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1181;
HAnimJoint1182 := THAnimJointNode.Create;
HAnimJoint1182 := HAnimJoint148;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1182;
HAnimJoint1183 := THAnimJointNode.Create;
HAnimJoint1183 := HAnimJoint176;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1183;
HAnimJoint1184 := THAnimJointNode.Create;
HAnimJoint1184 := HAnimJoint196;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1184;
HAnimJoint1185 := THAnimJointNode.Create;
HAnimJoint1185 := HAnimJoint210;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1185;
HAnimJoint1186 := THAnimJointNode.Create;
HAnimJoint1186 := HAnimJoint228;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1186;
HAnimJoint1187 := THAnimJointNode.Create;
HAnimJoint1187 := HAnimJoint258;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1187;
HAnimJoint1188 := THAnimJointNode.Create;
HAnimJoint1188 := HAnimJoint284;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1188;
HAnimJoint1189 := THAnimJointNode.Create;
HAnimJoint1189 := HAnimJoint312;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1189;
HAnimJoint1190 := THAnimJointNode.Create;
HAnimJoint1190 := HAnimJoint332;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1190;
HAnimJoint1191 := THAnimJointNode.Create;
HAnimJoint1191 := HAnimJoint346;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1191;
HAnimJoint1192 := THAnimJointNode.Create;
HAnimJoint1192 := HAnimJoint364;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1192;
HAnimJoint1193 := THAnimJointNode.Create;
HAnimJoint1193 := HAnimJoint394;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1193;
HAnimJoint1194 := THAnimJointNode.Create;
HAnimJoint1194 := HAnimJoint409;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1194;
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195 := HAnimJoint417;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1195;
HAnimJoint1196 := THAnimJointNode.Create;
HAnimJoint1196 := HAnimJoint425;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1196;
HAnimJoint1197 := THAnimJointNode.Create;
HAnimJoint1197 := HAnimJoint451;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1197;
HAnimJoint1198 := THAnimJointNode.Create;
HAnimJoint1198 := HAnimJoint459;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1198;
HAnimJoint1199 := THAnimJointNode.Create;
HAnimJoint1199 := HAnimJoint467;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1199;
HAnimJoint1200 := THAnimJointNode.Create;
HAnimJoint1200 := HAnimJoint475;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1200;
HAnimJoint1201 := THAnimJointNode.Create;
HAnimJoint1201 := HAnimJoint485;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1201;
HAnimJoint1202 := THAnimJointNode.Create;
HAnimJoint1202 := HAnimJoint497;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1202;
HAnimJoint1203 := THAnimJointNode.Create;
HAnimJoint1203 := HAnimJoint505;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1203;
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204 := HAnimJoint513;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1204;
HAnimJoint1205 := THAnimJointNode.Create;
HAnimJoint1205 := HAnimJoint521;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1205;
HAnimJoint1206 := THAnimJointNode.Create;
HAnimJoint1206 := HAnimJoint529;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1206;
HAnimJoint1207 := THAnimJointNode.Create;
HAnimJoint1207 := HAnimJoint539;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1207;
HAnimJoint1208 := THAnimJointNode.Create;
HAnimJoint1208 := HAnimJoint547;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1208;
HAnimJoint1209 := THAnimJointNode.Create;
HAnimJoint1209 := HAnimJoint555;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1209;
HAnimJoint1210 := THAnimJointNode.Create;
HAnimJoint1210 := HAnimJoint567;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1210;
HAnimJoint1211 := THAnimJointNode.Create;
HAnimJoint1211 := HAnimJoint579;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1211;
HAnimJoint1212 := THAnimJointNode.Create;
HAnimJoint1212 := HAnimJoint587;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1212;
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213 := HAnimJoint595;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1213;
HAnimJoint1214 := THAnimJointNode.Create;
HAnimJoint1214 := HAnimJoint603;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1214;
HAnimJoint1215 := THAnimJointNode.Create;
HAnimJoint1215 := HAnimJoint611;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1215;
HAnimJoint1216 := THAnimJointNode.Create;
HAnimJoint1216 := HAnimJoint619;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1216;
HAnimJoint1217 := THAnimJointNode.Create;
HAnimJoint1217 := HAnimJoint627;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1217;
HAnimJoint1218 := THAnimJointNode.Create;
HAnimJoint1218 := HAnimJoint655;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1218;
HAnimJoint1219 := THAnimJointNode.Create;
HAnimJoint1219 := HAnimJoint663;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1219;
HAnimJoint1220 := THAnimJointNode.Create;
HAnimJoint1220 := HAnimJoint671;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1220;
HAnimJoint1221 := THAnimJointNode.Create;
HAnimJoint1221 := HAnimJoint681;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1221;
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222 := HAnimJoint697;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1222;
HAnimJoint1223 := THAnimJointNode.Create;
HAnimJoint1223 := HAnimJoint721;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1223;
HAnimJoint1224 := THAnimJointNode.Create;
HAnimJoint1224 := HAnimJoint743;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1224;
HAnimJoint1225 := THAnimJointNode.Create;
HAnimJoint1225 := HAnimJoint757;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1225;
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226 := HAnimJoint765;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1226;
HAnimJoint1227 := THAnimJointNode.Create;
HAnimJoint1227 := HAnimJoint773;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1227;
HAnimJoint1228 := THAnimJointNode.Create;
HAnimJoint1228 := HAnimJoint783;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1228;
HAnimJoint1229 := THAnimJointNode.Create;
HAnimJoint1229 := HAnimJoint791;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1229;
HAnimJoint1230 := THAnimJointNode.Create;
HAnimJoint1230 := HAnimJoint799;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1230;
HAnimJoint1231 := THAnimJointNode.Create;
HAnimJoint1231 := HAnimJoint807;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1231;
HAnimJoint1232 := THAnimJointNode.Create;
HAnimJoint1232 := HAnimJoint819;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1232;
HAnimJoint1233 := THAnimJointNode.Create;
HAnimJoint1233 := HAnimJoint827;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1233;
HAnimJoint1234 := THAnimJointNode.Create;
HAnimJoint1234 := HAnimJoint835;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1234;
HAnimJoint1235 := THAnimJointNode.Create;
HAnimJoint1235 := HAnimJoint843;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1235;
HAnimJoint1236 := THAnimJointNode.Create;
HAnimJoint1236 := HAnimJoint853;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1236;
HAnimJoint1237 := THAnimJointNode.Create;
HAnimJoint1237 := HAnimJoint861;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1237;
HAnimJoint1238 := THAnimJointNode.Create;
HAnimJoint1238 := HAnimJoint869;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1238;
HAnimJoint1239 := THAnimJointNode.Create;
HAnimJoint1239 := HAnimJoint877;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1239;
HAnimJoint1240 := THAnimJointNode.Create;
HAnimJoint1240 := HAnimJoint887;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1240;
HAnimJoint1241 := THAnimJointNode.Create;
HAnimJoint1241 := HAnimJoint895;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1241;
HAnimJoint1242 := THAnimJointNode.Create;
HAnimJoint1242 := HAnimJoint903;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1242;
HAnimJoint1243 := THAnimJointNode.Create;
HAnimJoint1243 := HAnimJoint911;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1243;
HAnimJoint1244 := THAnimJointNode.Create;
HAnimJoint1244 := HAnimJoint921;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1244;
HAnimJoint1245 := THAnimJointNode.Create;
HAnimJoint1245 := HAnimJoint931;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1245;
HAnimJoint1246 := THAnimJointNode.Create;
HAnimJoint1246 := HAnimJoint947;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1246;
HAnimJoint1247 := THAnimJointNode.Create;
HAnimJoint1247 := HAnimJoint977;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1247;
HAnimJoint1248 := THAnimJointNode.Create;
HAnimJoint1248 := HAnimJoint999;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1248;
HAnimJoint1249 := THAnimJointNode.Create;
HAnimJoint1249 := HAnimJoint1009;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1249;
HAnimJoint1250 := THAnimJointNode.Create;
HAnimJoint1250 := HAnimJoint1017;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1250;
HAnimJoint1251 := THAnimJointNode.Create;
HAnimJoint1251 := HAnimJoint1025;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1251;
HAnimJoint1252 := THAnimJointNode.Create;
HAnimJoint1252 := HAnimJoint1037;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1252;
HAnimJoint1253 := THAnimJointNode.Create;
HAnimJoint1253 := HAnimJoint1047;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1253;
HAnimJoint1254 := THAnimJointNode.Create;
HAnimJoint1254 := HAnimJoint1055;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1254;
HAnimJoint1255 := THAnimJointNode.Create;
HAnimJoint1255 := HAnimJoint1063;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1255;
HAnimJoint1256 := THAnimJointNode.Create;
HAnimJoint1256 := HAnimJoint1073;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1256;
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257 := HAnimJoint1081;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1257;
HAnimJoint1258 := THAnimJointNode.Create;
HAnimJoint1258 := HAnimJoint1089;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1258;
HAnimJoint1259 := THAnimJointNode.Create;
HAnimJoint1259 := HAnimJoint1097;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1259;
HAnimJoint1260 := THAnimJointNode.Create;
HAnimJoint1260 := HAnimJoint1109;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1260;
HAnimJoint1261 := THAnimJointNode.Create;
HAnimJoint1261 := HAnimJoint1117;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1261;
HAnimJoint1262 := THAnimJointNode.Create;
HAnimJoint1262 := HAnimJoint1125;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1262;
HAnimJoint1263 := THAnimJointNode.Create;
HAnimJoint1263 := HAnimJoint1133;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1263;
HAnimJoint1264 := THAnimJointNode.Create;
HAnimJoint1264 := HAnimJoint1143;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1264;
HAnimJoint1265 := THAnimJointNode.Create;
HAnimJoint1265 := HAnimJoint1153;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1265;
HAnimJoint1266 := THAnimJointNode.Create;
HAnimJoint1266 := HAnimJoint1161;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1266;
HAnimJoint1267 := THAnimJointNode.Create;
HAnimJoint1267 := HAnimJoint1169;
{ .AddJoints }
HAnimHumanoid79.Joints := HAnimJoint1267;
Coordinate1268 := TCoordinateNode.Create;
Coordinate1268.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetSkinCoord }
HAnimHumanoid79.SetSkinCoord(Coordinate1268);
Shape1269 := TShapeNode.Create;
Appearance1270 := TAppearanceNode.Create;
Material1271 := TMaterialNode.Create;
Material1271.AmbientIntensity := 0.6;
Material1271.DiffuseColor := Vector3(1,1,1);
Material1271.Shininess := 0.6;
Material1271.Transparency := 0.2;
{ .SetMaterial }
Appearance1270.Material := Material1271;
ImageTexture1272 := TImageTextureNode.Create;
ImageTexture1272.Description := 'Blue Spiral Pattern';
ImageTexture1272.SetUrl(['zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ .SetTexture }
Appearance1270.Texture := ImageTexture1272;
{ .SetAppearance }
Shape1269.Appearance := Appearance1270;
IndexedFaceSet1273 := TIndexedFaceSetNode.Create;
IndexedFaceSet1273.CreaseAngle := 3.1;
IndexedFaceSet1273.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color1274 := TColorNode.Create;
Color1274.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ .SetColor }
IndexedFaceSet1273.Color := Color1274;
Coordinate1275 := TCoordinateNode.Create;
Coordinate1275 := Coordinate1268;
{ .SetCoord }
IndexedFaceSet1273.Coord := Coordinate1275;
{ .SetGeometry }
Shape1269.Geometry := IndexedFaceSet1273;
{ .SetSkin }
HAnimHumanoid79.SetSkin([Shape1269]);
{ .AddChildren }
Group78.AddChildren([HAnimHumanoid79]);
{ .AddChildren }
Group77.AddChildren([Group78]);
{ .AddChildren }
Group33.AddChildren([Group77]);
TimeSensor1276 := TTimeSensorNode.Create;
TimeSensor1276.CycleInterval := 2.86;
TimeSensor1276.Loop := True;
{ .AddChildren }
Group33.AddChildren([TimeSensor1276]);
TimeSensor1277 := TTimeSensorNode.Create;
TimeSensor1277.CycleInterval := 5.72;
TimeSensor1277.Loop := True;
{ .AddChildren }
Group33.AddChildren([TimeSensor1277]);
TimeSensor1278 := TTimeSensorNode.Create;
TimeSensor1278.CycleInterval := 5.8;
TimeSensor1278.Loop := True;
{ .AddChildren }
Group33.AddChildren([TimeSensor1278]);
OrientationInterpolator1279 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1279.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1279.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,1.25600004196167),Vector4(1,0,0,2.51200008392334),Vector4(1,0,0,3.76799988746643),Vector4(1,0,0,5.02400016784668),Vector4(1,0,0,6.28000020980835)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1279]);
OrientationInterpolator1280 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1280.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1280.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,1.25600004196167),Vector4(0,1,0,2.51200008392334),Vector4(0,1,0,3.76799988746643),Vector4(0,1,0,5.02400016784668),Vector4(0,1,0,6.28000020980835)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1280]);
OrientationInterpolator1281 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1281.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1281.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.25600004196167),Vector4(0,0,1,2.51200008392334),Vector4(0,0,1,3.76799988746643),Vector4(0,0,1,5.02400016784668),Vector4(0,0,1,6.28000020980835)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1281]);
OrientationInterpolator1282 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1282.SetKey([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1282.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0.699999988079071),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0.5),Vector4(-0.400000005960465,-1,0,0.699999988079071),Vector4(-0.400000005960465,-1,0,0.400000005960465),Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1282]);
OrientationInterpolator1283 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1283.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1283.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232),Vector4(-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232),Vector4(-0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232),Vector4(0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232),Vector4(-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232),Vector4(-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1283]);
OrientationInterpolator1284 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1284.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1284.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.200000002980232,-1,0,0.109999999403954),Vector4(0.200000002980232,-1,0,0.109999999403954),Vector4(0.100000001490116,-1,0,0.100000001490116),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1284]);
OrientationInterpolator1285 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1285.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1285.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1285]);
OrientationInterpolator1286 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1286.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1286.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536),Vector4(0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536),Vector4(0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1286]);
OrientationInterpolator1287 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1287.SetKey([0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1287.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.200000002980232,0,0.00999999977648258,0.5),Vector4(-0.200000002980232,0,0.00999999977648258,0.5),Vector4(-0.200000002980232,0,0.00999999977648258,0.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1287]);
OrientationInterpolator1288 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1288.SetKey([0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1288.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0.100000001490116,-0.0900000035762787,0.25),Vector4(0,0.100000001490116,-0.0900000035762787,0.25),Vector4(0,0.100000001490116,-0.0900000035762787,0.25),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1288]);
OrientationInterpolator1289 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1289.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1289.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.25,0.25,-1,0.125),Vector4(-0.25,0.25,-1,0.125),Vector4(-0.25,0.25,-1,0.125),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1289]);
OrientationInterpolator1290 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1290.SetKey([0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1290.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.135000005364418,-0.135000005364418,1,0.35699999332428),Vector4(-0.158999994397163,-0.152999997138977,1,0.354999989271164),Vector4(-0.158999994397163,-0.152999997138977,1,0.35699999332428),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1290]);
OrientationInterpolator1291 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1291.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1291.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,-1,0.140000000596046),Vector4(0,0,-1,0.140000000596046),Vector4(0,0,-1,0.140000000596046),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1291]);
OrientationInterpolator1292 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1292.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1292.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,0.300000011920929,0.256999999284744),Vector4(0,0,0.300000011920929,0.370000004768372),Vector4(0,0,0.300000011920929,0.389999985694885),Vector4(0,0,0.300000011920929,0.310000002384186),Vector4(0,0,0.300000011920929,0.319999992847443),Vector4(0,0,0.300000011920929,0.340000003576279),Vector4(0,0,0.300000011920929,0.280000001192093),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1292]);
OrientationInterpolator1293 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1293.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1293.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.25,0.25,-1,0.100000001490116),Vector4(0.25,0.25,-1,0.100000001490116),Vector4(0.25,0.25,-1,0.100000001490116),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1293]);
OrientationInterpolator1294 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1294.SetKey([0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1294.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.135000005364418,0.135000005364418,1,0.270000010728836),Vector4(0.135000005364418,0.135000005364418,1,0.270000010728836),Vector4(0.135000005364418,0.150000005960464,1,0.270000010728836),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1294]);
OrientationInterpolator1295 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1295.SetKey([0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1295.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791),Vector4(0.349999994039536,0.349999994039536,-0.899999976158142,0.119999997317791),Vector4(0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1295]);
OrientationInterpolator1296 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1296.SetKey([0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1296.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.200000002980232,0.25,1,0.270000010728836),Vector4(0.200000002980232,0.219999998807907,1,0.270000010728836),Vector4(0.219999998807907,0.200000002980232,1,0.270000010728836),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1296]);
OrientationInterpolator1297 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1297.SetKey([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1297.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,-1,1,1),Vector4(0.5,-0.159999996423721,0.159999996423721,0.785000026226044),Vector4(0.5,-0.159999996423721,0.159999996423721,0.785000026226044),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1297]);
OrientationInterpolator1298 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1298.SetKey([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1298.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.449999988079071),Vector4(1,0,0,0.449999988079071),Vector4(1,0,0,0.449999988079071),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1298]);
OrientationInterpolator1299 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1299.SetKey([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1299.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.449999988079071),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1299]);
OrientationInterpolator1300 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1300.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1300.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.430000007152557),Vector4(0,0,1,0.439999997615814),Vector4(0,0,1,0.46000000834465),Vector4(0,0,1,0.439999997615814),Vector4(0,0,1,0.245000004768372),Vector4(0,0,1,0.239999994635582),Vector4(0,0,1,0.209999993443489),Vector4(0,0,1,0.239999994635582),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1300]);
OrientationInterpolator1301 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1301.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1301.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.370000004768372),Vector4(0,0,1,0.379999995231628),Vector4(0,0,1,0.389999985694885),Vector4(0,0,1,0.379999995231628),Vector4(0,0,1,0.270000010728836),Vector4(0,0,1,0.280000001192093),Vector4(0,0,1,0.270000010728836),Vector4(0,0,1,0.280000001192093),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1301]);
OrientationInterpolator1302 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1302.SetKey([0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1302.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,0.100000001490116),Vector4(0,0,-1,0.219999998807907),Vector4(0,0.5,-1,0.270000010728836),Vector4(0,0,-1,0.100000001490116),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1302]);
OrientationInterpolator1303 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1303.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1303.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.0500000007450581),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1303]);
OrientationInterpolator1304 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1304.SetKey([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1304.SetKeyValue([Vector4(1,0,0,0),Vector4(0,0,-1,1.6599999666214),Vector4(-0.25,0,-1,1.75999999046326),Vector4(0,0,-1,1.25600004196167),Vector4(0,0,-1,0.0500000007450581),Vector4(1,0,0,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1304]);
OrientationInterpolator1305 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1305.SetKey([0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1305.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.550000011920929),Vector4(-1,-0.25,0,2.54999995231628),Vector4(-1,-0.25,0,2.54999995231628),Vector4(-1,-0.25,0,2.54999995231628),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1305]);
OrientationInterpolator1306 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1306.SetKey([0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
OrientationInterpolator1306.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,-0.550000011920929),Vector4(0,0,1,0),Vector4(0,1,0,1.54999995231628),Vector4(0,0,-1,1.54999995231628),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1306]);
OrientationInterpolator1307 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1307.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1307.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,0.00999999977648258,0.25),Vector4(0,0,-0.00999999977648258,0.0299999993294477),Vector4(0,0,0.00999999977648258,0.0500000007450581),Vector4(0,0,0.00999999977648258,0.00999999977648258),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1307]);
OrientationInterpolator1308 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1308.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1308.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1),Vector4(1,0,0,0.400000005960465),Vector4(1,0,0,0.200000002980232),Vector4(1,0,0,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1308]);
OrientationInterpolator1309 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1309.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1309.SetKeyValue([Vector4(0,0,1,0),Vector4(1,1,0,0.300000011920929),Vector4(1,1,0,0.300000011920929),Vector4(1,1,0,0.600000023841858),Vector4(1,1,0,0.300000011920929),Vector4(0,1,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1309]);
OrientationInterpolator1310 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1310.SetKey([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1310.SetKeyValue([Vector4(0.25,0,1,1.75999999046326),Vector4(0,0,1,1.6599999666214),Vector4(0.25,0,1,1.75999999046326),Vector4(0,0,1,1.25600004196167),Vector4(0,0,1,0.0500000007450581),Vector4(0.25,0,1,1.75999999046326)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1310]);
Group1311 := TGroupNode.Create;
PositionInterpolator1312 := TPositionInterpolatorNode.Create;
PositionInterpolator1312.SetKey([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1312.SetKeyValue([Vector3(0,-0.00928,0),Vector3(0,-0.003858,0),Vector3(0,-0.008847,0),Vector3(0,-0.01486,0),Vector3(0,-0.02641,0),Vector3(0,-0.03934,0),Vector3(0,-0.0502,0),Vector3(0,-0.07469,0),Vector3(0,-0.02732,0),Vector3(0,-0.01608,0),Vector3(0,-0.01129,0),Vector3(0,-0.005819,0),Vector3(0,-0.002004,0),Vector3(0,-0.002579,0),Vector3(0,-0.0143,0),Vector3(0,-0.03799,0),Vector3(0,-0.05648,0),Vector3(0,-0.045,0),Vector3(0,-0.00928,0)]);
{ .AddChildren }
Group1311.AddChildren([PositionInterpolator1312]);
OrientationInterpolator1313 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1313.SetKey([0,1]);
OrientationInterpolator1313.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1313]);
OrientationInterpolator1314 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1314.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1314.SetKeyValue([Vector4(-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139),Vector4(0.996299982070923,-0.0105699999257922,0.0848100036382675,0.248799994587898),Vector4(0.996500015258789,0.0159099996089935,-0.0822200030088425,0.383599996566772),Vector4(-0.701799988746643,-0.0322300009429455,-0.711700022220612,0.12890000641346),Vector4(-1,0,0,0.551800012588501),Vector4(-0.996399998664856,0.0223099999129772,0.0816999971866608,0.535099983215332),Vector4(-0.98089998960495,0.0491200014948845,0.18809999525547,0.520399987697601),Vector4(-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1314]);
OrientationInterpolator1315 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1315.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1315.SetKeyValue([Vector4(1,0,0,0.32260000705719),Vector4(1,0,0,0.155599996447563),Vector4(1,0,0,0.086779996752739),Vector4(1,0,0,0.875100016593933),Vector4(1,0,0,1.13100004196167),Vector4(1,0,0,0.0996100008487701),Vector4(1,0,0,0.394199997186661),Vector4(1,0,0,0.32260000705719)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1315]);
OrientationInterpolator1316 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1316.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1316.SetKeyValue([Vector4(-1,0,0,0.067100003361702),Vector4(-1,0,0,0.215200006961823),Vector4(-1,0,0,0.318399995565414),Vector4(-1,0,0,0.471700012683868),Vector4(-1,0,0,0.291200011968613),Vector4(1,0,0,0.222200006246567),Vector4(-1,0,0,0.067100003361702)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1316]);
OrientationInterpolator1317 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1317.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1317.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.353300005197525),Vector4(-1,0,0,0.107199996709824),Vector4(1,0,0,0.400000005960465),Vector4(1,0,0,0.127000004053116),Vector4(-1,0,0,0.0179999992251396),Vector4(-1,0,0,0.0579999983310699),Vector4(-1,0,0,0.239999994635582),Vector4(-1,0,0,0.349999994039536),Vector4(-1,0,0,0.330000013113022),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1317]);
OrientationInterpolator1318 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1318.SetKey([0,0.3,1]);
OrientationInterpolator1318.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1318]);
OrientationInterpolator1319 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1319.SetKey([0,0.5,1]);
OrientationInterpolator1319.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.200000002980232),Vector4(1,0,0,0)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1319]);
OrientationInterpolator1320 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1320.SetKey([0,0.2,0.4,0.8,1]);
OrientationInterpolator1320.SetKeyValue([Vector4(-1,0,0,0.300000011920929),Vector4(-1,0,0,0.150000005960464),Vector4(1,0,0,0.300000011920929),Vector4(0,0,1,0),Vector4(-1,0,0,0.300000011920929)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1320]);
OrientationInterpolator1321 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1321.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1321.SetKeyValue([Vector4(-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121),Vector4(-0.995000004768372,0.0229599997401238,0.0967399999499321,0.468300014734268),Vector4(-1,0.0019000000320375,0.00796000007539988,0.473199993371964),Vector4(-0.998000025749207,-0.0157999992370605,-0.0610200017690659,0.50789999961853),Vector4(-0.991100013256073,-0.0354099981486797,-0.128600001335144,0.541899979114533),Vector4(-0.913100004196167,-0.0624300017952919,-0.402999997138977,0.33610001206398),Vector4(-0.430599987506866,-0.0796200037002564,-0.898999989032745,0.0703800022602081),Vector4(1,0,0,0.257099986076355),Vector4(0.989099979400635,-0.0280499998480082,0.144400000572205,0.387899994850159),Vector4(-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1321]);
OrientationInterpolator1322 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1322.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1322.SetKeyValue([Vector4(1,0,0,0.857299983501434),Vector4(1,0,0,0.892599999904633),Vector4(1,0,0,0.535099983215332),Vector4(1,0,0,0.175600007176399),Vector4(1,0,0,0.119400002062321),Vector4(1,0,0,0.315299987792969),Vector4(1,0,0,0.0935399979352951),Vector4(1,0,0,0.0855799987912178),Vector4(1,0,0,0.247500002384186),Vector4(1,0,0,0.857299983501434)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1322]);
OrientationInterpolator1323 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1323.SetKey([0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1323.SetKeyValue([Vector4(-1,0,0,0.1),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.1),Vector4(0,0,1,0),Vector4(1,0,0,0.1),Vector4(1,0,0,0.25)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1323]);
OrientationInterpolator1324 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1324.SetKey([0,0.22,1]);
OrientationInterpolator1324.SetKeyValue([Vector4(1,0,0,-0.200000002980232),Vector4(0,0,1,0),Vector4(1,0,0,-0.200000002980232)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1324]);
OrientationInterpolator1325 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1325.SetKey([0,0.2,0.4,0.8,1]);
OrientationInterpolator1325.SetKeyValue([Vector4(-1,0,0,0.150000005960464),Vector4(0,0,1,0),Vector4(1,0,0,0.300000011920929),Vector4(-1,0,0,0.300000011920929),Vector4(-1,0,0,0.150000005960464)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1325]);
OrientationInterpolator1326 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1326.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1326.SetKeyValue([Vector4(0,1,0,0.0825999975204468),Vector4(-0.0197199992835522,-0.597400009632111,0.801699995994568,0.0823099985718727),Vector4(0.0092960000038147,-0.964800000190735,0.262699991464615,0.17339999973774),Vector4(-0.0123800002038479,0.954900026321411,-0.29679998755455,0.0873199999332428),Vector4(-0.00812499970197678,0.969099998474121,-0.246299996972084,0.158000007271767),Vector4(0,1,0,0.0825999975204468)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1326]);
OrientationInterpolator1327 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1327.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1327.SetKeyValue([Vector4(0,-1,0,0.0864000022411346),Vector4(0,1,0,0.182500004768372),Vector4(0,1,0,0.150499999523163),Vector4(0,1,0,0.10530000180006),Vector4(0,1,0,0.0439100004732609),Vector4(0,-1,0,0.031190000474453),Vector4(0,-1,0,0.0793600007891655),Vector4(0,-1,0,0.16159999370575),Vector4(0,-1,0,0.155000001192093),Vector4(0,-1,0,0.0864199995994568)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1327]);
OrientationInterpolator1328 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1328.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1328.SetKeyValue([Vector4(1,0,0.400000005960465,0.119999997317791),Vector4(-1,0,0.400000005960465,0.186000004410744),Vector4(1,0,0.100000001490116,0.335999995470047),Vector4(1,0,0.400000005960465,0.119999997317791)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1328]);
OrientationInterpolator1329 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1329.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1329.SetKeyValue([Vector4(-1,0,0,0.0659999996423721),Vector4(-1,0,0,0.488000005483627),Vector4(-1,0,0,0.0176999997347593),Vector4(-1,0,0,0.065987803041935)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1329]);
OrientationInterpolator1330 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1330.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1330.SetKeyValue([Vector4(0,-1,0,0.460999995470047),Vector4(-0.330199986696243,-0.927500009536743,0.175500005483627,0.538800001144409),Vector4(0.0327773988246918,-0.99931401014328,-0.0172185003757477,0.492033004760742),Vector4(0,-1,0,0.46110001206398)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1330]);
OrientationInterpolator1331 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1331.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1331.SetKeyValue([Vector4(-1,0,-1,0.0920000001788139),Vector4(1,0,-0.200000002980232,0.319700002670288),Vector4(-1,0,-0.5,0.156399995088577),Vector4(-1,0,-1,0.0920000001788139)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1331]);
OrientationInterpolator1332 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1332.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1332.SetKeyValue([Vector4(-1,0,0,0.411500006914139),Vector4(-1,0,0,0.0925000011920929),Vector4(-1,0,0,0.572567999362946),Vector4(-1,0,0,0.411507993936539)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1332]);
OrientationInterpolator1333 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1333.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1333.SetKeyValue([Vector4(-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333),Vector4(0.153300002217293,-0.987800002098084,0.0258200000971556,0.390199989080429),Vector4(-0.570100009441376,0.760399997234345,-0.310999989509583,0.36599999666214),Vector4(-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333)]);
{ .AddChildren }
Group1311.AddChildren([OrientationInterpolator1333]);
{ .AddChildren }
Group33.AddChildren([Group1311]);
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1282.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1282.EventValue_changed, HAnimJoint579.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1278.EventFraction_changed, OrientationInterpolator1283.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1283.EventValue_changed, HAnimJoint663.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1283.EventValue_changed, HAnimJoint655.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1284.EventValue_changed, HAnimJoint921.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1285.EventValue_changed, HAnimJoint931.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1286.EventValue_changed, HAnimJoint947.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1287.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1288.EventValue_changed, HAnimJoint999.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1297.EventValue_changed, HAnimJoint1009.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1298.EventValue_changed, HAnimJoint1017.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1299.EventValue_changed, HAnimJoint1025.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1289.EventValue_changed, HAnimJoint1037.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1290.EventValue_changed, HAnimJoint1047.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1300.EventValue_changed, HAnimJoint1055.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1301.EventValue_changed, HAnimJoint1063.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1291.EventValue_changed, HAnimJoint1073.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1292.EventValue_changed, HAnimJoint1081.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1300.EventValue_changed, HAnimJoint1089.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1301.EventValue_changed, HAnimJoint1097.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1293.EventValue_changed, HAnimJoint1109.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1294.EventValue_changed, HAnimJoint1117.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1300.EventValue_changed, HAnimJoint1125.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1301.EventValue_changed, HAnimJoint1133.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1295.EventValue_changed, HAnimJoint1143.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1296.EventValue_changed, HAnimJoint1153.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1300.EventValue_changed, HAnimJoint1161.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1301.EventValue_changed, HAnimJoint1169.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1302.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1303.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1304.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1305.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1306.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1307.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1308.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1277.EventFraction_changed, OrientationInterpolator1309.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1302.EventValue_changed, HAnimJoint921.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1303.EventValue_changed, HAnimJoint931.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1304.EventValue_changed, HAnimJoint947.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1305.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1306.EventValue_changed, HAnimJoint999.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1037.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1047.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1055.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1063.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1073.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1081.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1089.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1097.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1109.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1117.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1125.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1133.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1143.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1153.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1161.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1307.EventValue_changed, HAnimJoint1169.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1308.EventValue_changed, HAnimJoint1009.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1309.EventValue_changed, HAnimJoint1017.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1309.EventValue_changed, HAnimJoint1025.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1310.EventValue_changed, HAnimJoint697.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, PositionInterpolator1312.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1313.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1314.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1315.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1316.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1318.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1319.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1320.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1321.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1322.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1317.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1323.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1324.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1325.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1326.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1327.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1328.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1329.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1276.EventFraction_changed, OrientationInterpolator1330.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(PositionInterpolator1312.EventValue_changed, HAnimJoint80.FdTranslation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1313.EventValue_changed, HAnimJoint80.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1314.EventValue_changed, HAnimJoint122.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1315.EventValue_changed, HAnimJoint148.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1316.EventValue_changed, HAnimJoint176.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1319.EventValue_changed, HAnimJoint210.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1318.EventValue_changed, HAnimJoint196.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1320.EventValue_changed, HAnimJoint228.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1321.EventValue_changed, HAnimJoint258.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1322.EventValue_changed, HAnimJoint284.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1317.EventValue_changed, HAnimJoint312.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1323.EventValue_changed, HAnimJoint332.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1324.EventValue_changed, HAnimJoint346.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1325.EventValue_changed, HAnimJoint364.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1326.EventValue_changed, HAnimJoint394.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1327.EventValue_changed, HAnimJoint627.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1328.EventValue_changed, HAnimJoint697.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1329.EventValue_changed, HAnimJoint721.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1330.EventValue_changed, HAnimJoint743.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1331.EventValue_changed, HAnimJoint947.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1332.EventValue_changed, HAnimJoint977.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1333.EventValue_changed, HAnimJoint999.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group33]);
Result := X3D0;
end;
