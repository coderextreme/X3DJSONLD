unit JoeSkeletonSkinSiteSaluteWalk;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateJoeSkeletonSkinSiteSaluteWalk: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group33: TGroupNode;
WorldInfo34: TWorldInfoNode;
NavigationInfo35: TNavigationInfoNode;
Background36: TBackgroundNode;
Transform37: TTransformNode;
Inline38: TInlineNode;
Group39: TGroupNode;
Viewpoint40: TViewpointNode;
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
Group51: TGroupNode;
Transform52: TTransformNode;
Shape53: TShapeNode;
Appearance54: TAppearanceNode;
Material55: TMaterialNode;
IndexedFaceSet56: TIndexedFaceSetNode;
Color57: TColorNode;
Coordinate58: TCoordinateNode;
Transform59: TTransformNode;
Shape60: TShapeNode;
Appearance61: TAppearanceNode;
Material62: TMaterialNode;
IndexedFaceSet63: TIndexedFaceSetNode;
Coordinate64: TCoordinateNode;
Transform65: TTransformNode;
Shape66: TShapeNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
IndexedLineSet69: TIndexedLineSetNode;
Coordinate70: TCoordinateNode;
Transform71: TTransformNode;
Shape72: TShapeNode;
Appearance73: TAppearanceNode;
Material74: TMaterialNode;
Sphere75: TSphereNode;
Group76: TGroupNode;
Group77: TGroupNode;
HAnimHumanoid78: THAnimHumanoidNode;
MetadataSet79: TMetadataSetNode;
MetadataString80: TMetadataStringNode;
HAnimJoint81: THAnimJointNode;
HAnimSegment82: THAnimSegmentNode;
Transform83: TTransformNode;
Shape84: TShapeNode;
Shape85: TShapeNode;
Appearance86: TAppearanceNode;
IndexedLineSet87: TIndexedLineSetNode;
Coordinate88: TCoordinateNode;
Transform89: TTransformNode;
Shape90: TShapeNode;
Transform91: TTransformNode;
Shape92: TShapeNode;
HAnimJoint93: THAnimJointNode;
HAnimSegment94: THAnimSegmentNode;
Transform95: TTransformNode;
Transform96: TTransformNode;
Shape97: TShapeNode;
Shape98: TShapeNode;
Appearance99: TAppearanceNode;
IndexedLineSet100: TIndexedLineSetNode;
Coordinate101: TCoordinateNode;
HAnimSite102: THAnimSiteNode;
Shape103: TShapeNode;
HAnimSite104: THAnimSiteNode;
Shape105: TShapeNode;
HAnimSite106: THAnimSiteNode;
Shape107: TShapeNode;
HAnimSite108: THAnimSiteNode;
Shape109: TShapeNode;
HAnimSite110: THAnimSiteNode;
Shape111: TShapeNode;
HAnimSite112: THAnimSiteNode;
Shape113: TShapeNode;
HAnimSite114: THAnimSiteNode;
Shape115: TShapeNode;
HAnimSite116: THAnimSiteNode;
Shape117: TShapeNode;
HAnimSite118: THAnimSiteNode;
Transform119: TTransformNode;
Shape120: TShapeNode;
HAnimSite121: THAnimSiteNode;
Shape122: TShapeNode;
HAnimJoint123: THAnimJointNode;
HAnimSegment124: THAnimSegmentNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
Shape127: TShapeNode;
Appearance128: TAppearanceNode;
IndexedLineSet129: TIndexedLineSetNode;
Coordinate130: TCoordinateNode;
Transform131: TTransformNode;
Shape132: TShapeNode;
Transform133: TTransformNode;
Shape134: TShapeNode;
Transform135: TTransformNode;
Shape136: TShapeNode;
Transform137: TTransformNode;
Shape138: TShapeNode;
Transform139: TTransformNode;
Shape140: TShapeNode;
Transform141: TTransformNode;
Shape142: TShapeNode;
HAnimSite143: THAnimSiteNode;
Shape144: TShapeNode;
HAnimSite145: THAnimSiteNode;
Shape146: TShapeNode;
HAnimSite147: THAnimSiteNode;
Shape148: TShapeNode;
HAnimJoint149: THAnimJointNode;
HAnimSegment150: THAnimSegmentNode;
Transform151: TTransformNode;
Shape152: TShapeNode;
Shape153: TShapeNode;
Appearance154: TAppearanceNode;
IndexedLineSet155: TIndexedLineSetNode;
Coordinate156: TCoordinateNode;
Transform157: TTransformNode;
Shape158: TShapeNode;
Transform159: TTransformNode;
Shape160: TShapeNode;
Transform161: TTransformNode;
Shape162: TShapeNode;
Transform163: TTransformNode;
Shape164: TShapeNode;
Transform165: TTransformNode;
Shape166: TShapeNode;
Transform167: TTransformNode;
Shape168: TShapeNode;
Transform169: TTransformNode;
Shape170: TShapeNode;
Transform171: TTransformNode;
Shape172: TShapeNode;
HAnimSite173: THAnimSiteNode;
Shape174: TShapeNode;
HAnimSite175: THAnimSiteNode;
Shape176: TShapeNode;
HAnimJoint177: THAnimJointNode;
HAnimSegment178: THAnimSegmentNode;
Transform179: TTransformNode;
Shape180: TShapeNode;
Shape181: TShapeNode;
Appearance182: TAppearanceNode;
IndexedLineSet183: TIndexedLineSetNode;
Coordinate184: TCoordinateNode;
Transform185: TTransformNode;
Shape186: TShapeNode;
Transform187: TTransformNode;
Shape188: TShapeNode;
Transform189: TTransformNode;
Shape190: TShapeNode;
Transform191: TTransformNode;
Shape192: TShapeNode;
HAnimSite193: THAnimSiteNode;
Shape194: TShapeNode;
HAnimSite195: THAnimSiteNode;
Shape196: TShapeNode;
HAnimJoint197: THAnimJointNode;
HAnimSegment198: THAnimSegmentNode;
Transform199: TTransformNode;
Shape200: TShapeNode;
Shape201: TShapeNode;
Appearance202: TAppearanceNode;
IndexedLineSet203: TIndexedLineSetNode;
Coordinate204: TCoordinateNode;
Transform205: TTransformNode;
Shape206: TShapeNode;
Transform207: TTransformNode;
Shape208: TShapeNode;
Transform209: TTransformNode;
Shape210: TShapeNode;
HAnimJoint211: THAnimJointNode;
HAnimSegment212: THAnimSegmentNode;
Transform213: TTransformNode;
Shape214: TShapeNode;
Shape215: TShapeNode;
Appearance216: TAppearanceNode;
IndexedLineSet217: TIndexedLineSetNode;
Coordinate218: TCoordinateNode;
Transform219: TTransformNode;
Shape220: TShapeNode;
Transform221: TTransformNode;
Shape222: TShapeNode;
Transform223: TTransformNode;
Shape224: TShapeNode;
Transform225: TTransformNode;
Shape226: TShapeNode;
HAnimSite227: THAnimSiteNode;
Shape228: TShapeNode;
HAnimJoint229: THAnimJointNode;
HAnimSegment230: THAnimSegmentNode;
Transform231: TTransformNode;
Shape232: TShapeNode;
Shape233: TShapeNode;
Appearance234: TAppearanceNode;
IndexedLineSet235: TIndexedLineSetNode;
Coordinate236: TCoordinateNode;
Transform237: TTransformNode;
Shape238: TShapeNode;
Transform239: TTransformNode;
Shape240: TShapeNode;
Transform241: TTransformNode;
Shape242: TShapeNode;
Transform243: TTransformNode;
Shape244: TShapeNode;
Transform245: TTransformNode;
Shape246: TShapeNode;
Transform247: TTransformNode;
Shape248: TShapeNode;
Transform249: TTransformNode;
Shape250: TShapeNode;
Transform251: TTransformNode;
Shape252: TShapeNode;
Transform253: TTransformNode;
Shape254: TShapeNode;
HAnimSite255: THAnimSiteNode;
Shape256: TShapeNode;
HAnimSite257: THAnimSiteNode;
Shape258: TShapeNode;
HAnimJoint259: THAnimJointNode;
HAnimSegment260: THAnimSegmentNode;
Transform261: TTransformNode;
Shape262: TShapeNode;
Shape263: TShapeNode;
Appearance264: TAppearanceNode;
IndexedLineSet265: TIndexedLineSetNode;
Coordinate266: TCoordinateNode;
Transform267: TTransformNode;
Shape268: TShapeNode;
Transform269: TTransformNode;
Shape270: TShapeNode;
Transform271: TTransformNode;
Shape272: TShapeNode;
Transform273: TTransformNode;
Shape274: TShapeNode;
Transform275: TTransformNode;
Shape276: TShapeNode;
Transform277: TTransformNode;
Shape278: TShapeNode;
HAnimSite279: THAnimSiteNode;
Shape280: TShapeNode;
HAnimSite281: THAnimSiteNode;
Shape282: TShapeNode;
HAnimSite283: THAnimSiteNode;
Shape284: TShapeNode;
HAnimJoint285: THAnimJointNode;
HAnimSegment286: THAnimSegmentNode;
Transform287: TTransformNode;
Shape288: TShapeNode;
Shape289: TShapeNode;
Appearance290: TAppearanceNode;
IndexedLineSet291: TIndexedLineSetNode;
Coordinate292: TCoordinateNode;
Transform293: TTransformNode;
Shape294: TShapeNode;
Transform295: TTransformNode;
Shape296: TShapeNode;
Transform297: TTransformNode;
Shape298: TShapeNode;
Transform299: TTransformNode;
Shape300: TShapeNode;
Transform301: TTransformNode;
Shape302: TShapeNode;
Transform303: TTransformNode;
Shape304: TShapeNode;
Transform305: TTransformNode;
Shape306: TShapeNode;
Transform307: TTransformNode;
Shape308: TShapeNode;
HAnimSite309: THAnimSiteNode;
Shape310: TShapeNode;
HAnimSite311: THAnimSiteNode;
Shape312: TShapeNode;
HAnimJoint313: THAnimJointNode;
HAnimSegment314: THAnimSegmentNode;
Transform315: TTransformNode;
Shape316: TShapeNode;
Shape317: TShapeNode;
Appearance318: TAppearanceNode;
IndexedLineSet319: TIndexedLineSetNode;
Coordinate320: TCoordinateNode;
Transform321: TTransformNode;
Shape322: TShapeNode;
Transform323: TTransformNode;
Shape324: TShapeNode;
Transform325: TTransformNode;
Shape326: TShapeNode;
Transform327: TTransformNode;
Shape328: TShapeNode;
HAnimSite329: THAnimSiteNode;
Shape330: TShapeNode;
HAnimSite331: THAnimSiteNode;
Shape332: TShapeNode;
HAnimJoint333: THAnimJointNode;
HAnimSegment334: THAnimSegmentNode;
Transform335: TTransformNode;
Shape336: TShapeNode;
Shape337: TShapeNode;
Appearance338: TAppearanceNode;
IndexedLineSet339: TIndexedLineSetNode;
Coordinate340: TCoordinateNode;
Transform341: TTransformNode;
Shape342: TShapeNode;
Transform343: TTransformNode;
Shape344: TShapeNode;
Transform345: TTransformNode;
Shape346: TShapeNode;
HAnimJoint347: THAnimJointNode;
HAnimSegment348: THAnimSegmentNode;
Transform349: TTransformNode;
Shape350: TShapeNode;
Shape351: TShapeNode;
Appearance352: TAppearanceNode;
IndexedLineSet353: TIndexedLineSetNode;
Coordinate354: TCoordinateNode;
Transform355: TTransformNode;
Shape356: TShapeNode;
Transform357: TTransformNode;
Shape358: TShapeNode;
Transform359: TTransformNode;
Shape360: TShapeNode;
Transform361: TTransformNode;
Shape362: TShapeNode;
HAnimSite363: THAnimSiteNode;
Shape364: TShapeNode;
HAnimJoint365: THAnimJointNode;
HAnimSegment366: THAnimSegmentNode;
Transform367: TTransformNode;
Shape368: TShapeNode;
Shape369: TShapeNode;
Appearance370: TAppearanceNode;
IndexedLineSet371: TIndexedLineSetNode;
Coordinate372: TCoordinateNode;
Transform373: TTransformNode;
Shape374: TShapeNode;
Transform375: TTransformNode;
Shape376: TShapeNode;
Transform377: TTransformNode;
Shape378: TShapeNode;
Transform379: TTransformNode;
Shape380: TShapeNode;
Transform381: TTransformNode;
Shape382: TShapeNode;
Transform383: TTransformNode;
Shape384: TShapeNode;
Transform385: TTransformNode;
Shape386: TShapeNode;
Transform387: TTransformNode;
Shape388: TShapeNode;
Transform389: TTransformNode;
Shape390: TShapeNode;
HAnimSite391: THAnimSiteNode;
Shape392: TShapeNode;
HAnimSite393: THAnimSiteNode;
Shape394: TShapeNode;
HAnimJoint395: THAnimJointNode;
HAnimSegment396: THAnimSegmentNode;
Shape397: TShapeNode;
Appearance398: TAppearanceNode;
IndexedLineSet399: TIndexedLineSetNode;
Coordinate400: TCoordinateNode;
HAnimSegment401: THAnimSegmentNode;
Shape402: TShapeNode;
Appearance403: TAppearanceNode;
IndexedLineSet404: TIndexedLineSetNode;
Coordinate405: TCoordinateNode;
HAnimSite406: THAnimSiteNode;
Shape407: TShapeNode;
HAnimSite408: THAnimSiteNode;
Shape409: TShapeNode;
HAnimJoint410: THAnimJointNode;
HAnimSegment411: THAnimSegmentNode;
Shape412: TShapeNode;
Appearance413: TAppearanceNode;
IndexedLineSet414: TIndexedLineSetNode;
Coordinate415: TCoordinateNode;
Transform416: TTransformNode;
Shape417: TShapeNode;
HAnimJoint418: THAnimJointNode;
HAnimSegment419: THAnimSegmentNode;
Shape420: TShapeNode;
Appearance421: TAppearanceNode;
IndexedLineSet422: TIndexedLineSetNode;
Coordinate423: TCoordinateNode;
Transform424: TTransformNode;
Shape425: TShapeNode;
HAnimJoint426: THAnimJointNode;
HAnimSegment427: THAnimSegmentNode;
Shape428: TShapeNode;
Appearance429: TAppearanceNode;
IndexedLineSet430: TIndexedLineSetNode;
Coordinate431: TCoordinateNode;
Transform432: TTransformNode;
Shape433: TShapeNode;
Transform434: TTransformNode;
Shape435: TShapeNode;
Transform436: TTransformNode;
Shape437: TShapeNode;
Transform438: TTransformNode;
Shape439: TShapeNode;
Transform440: TTransformNode;
Shape441: TShapeNode;
Transform442: TTransformNode;
Shape443: TShapeNode;
Transform444: TTransformNode;
Shape445: TShapeNode;
HAnimSite446: THAnimSiteNode;
Shape447: TShapeNode;
HAnimSite448: THAnimSiteNode;
Shape449: TShapeNode;
HAnimSite450: THAnimSiteNode;
Shape451: TShapeNode;
HAnimJoint452: THAnimJointNode;
HAnimSegment453: THAnimSegmentNode;
Shape454: TShapeNode;
Appearance455: TAppearanceNode;
IndexedLineSet456: TIndexedLineSetNode;
Coordinate457: TCoordinateNode;
Transform458: TTransformNode;
Shape459: TShapeNode;
HAnimJoint460: THAnimJointNode;
HAnimSegment461: THAnimSegmentNode;
Shape462: TShapeNode;
Appearance463: TAppearanceNode;
IndexedLineSet464: TIndexedLineSetNode;
Coordinate465: TCoordinateNode;
Transform466: TTransformNode;
Shape467: TShapeNode;
HAnimJoint468: THAnimJointNode;
HAnimSegment469: THAnimSegmentNode;
Shape470: TShapeNode;
Appearance471: TAppearanceNode;
IndexedLineSet472: TIndexedLineSetNode;
Coordinate473: TCoordinateNode;
Transform474: TTransformNode;
Shape475: TShapeNode;
HAnimJoint476: THAnimJointNode;
HAnimSegment477: THAnimSegmentNode;
Shape478: TShapeNode;
Appearance479: TAppearanceNode;
IndexedLineSet480: TIndexedLineSetNode;
Coordinate481: TCoordinateNode;
Transform482: TTransformNode;
Shape483: TShapeNode;
HAnimSite484: THAnimSiteNode;
Shape485: TShapeNode;
HAnimJoint486: THAnimJointNode;
HAnimSegment487: THAnimSegmentNode;
Shape488: TShapeNode;
Appearance489: TAppearanceNode;
IndexedLineSet490: TIndexedLineSetNode;
Coordinate491: TCoordinateNode;
Transform492: TTransformNode;
Shape493: TShapeNode;
HAnimSite494: THAnimSiteNode;
Shape495: TShapeNode;
HAnimSite496: THAnimSiteNode;
Shape497: TShapeNode;
HAnimJoint498: THAnimJointNode;
HAnimSegment499: THAnimSegmentNode;
Shape500: TShapeNode;
Appearance501: TAppearanceNode;
IndexedLineSet502: TIndexedLineSetNode;
Coordinate503: TCoordinateNode;
Transform504: TTransformNode;
Shape505: TShapeNode;
HAnimJoint506: THAnimJointNode;
HAnimSegment507: THAnimSegmentNode;
Shape508: TShapeNode;
Appearance509: TAppearanceNode;
IndexedLineSet510: TIndexedLineSetNode;
Coordinate511: TCoordinateNode;
Transform512: TTransformNode;
Shape513: TShapeNode;
HAnimJoint514: THAnimJointNode;
HAnimSegment515: THAnimSegmentNode;
Shape516: TShapeNode;
Appearance517: TAppearanceNode;
IndexedLineSet518: TIndexedLineSetNode;
Coordinate519: TCoordinateNode;
Transform520: TTransformNode;
Shape521: TShapeNode;
HAnimJoint522: THAnimJointNode;
HAnimSegment523: THAnimSegmentNode;
Shape524: TShapeNode;
Appearance525: TAppearanceNode;
IndexedLineSet526: TIndexedLineSetNode;
Coordinate527: TCoordinateNode;
Transform528: TTransformNode;
Shape529: TShapeNode;
HAnimJoint530: THAnimJointNode;
HAnimSegment531: THAnimSegmentNode;
Shape532: TShapeNode;
Appearance533: TAppearanceNode;
IndexedLineSet534: TIndexedLineSetNode;
Coordinate535: TCoordinateNode;
Transform536: TTransformNode;
Shape537: TShapeNode;
Transform538: TTransformNode;
Shape539: TShapeNode;
HAnimJoint540: THAnimJointNode;
HAnimSegment541: THAnimSegmentNode;
Shape542: TShapeNode;
Appearance543: TAppearanceNode;
IndexedLineSet544: TIndexedLineSetNode;
Coordinate545: TCoordinateNode;
Transform546: TTransformNode;
Shape547: TShapeNode;
HAnimJoint548: THAnimJointNode;
HAnimSegment549: THAnimSegmentNode;
Shape550: TShapeNode;
Appearance551: TAppearanceNode;
IndexedLineSet552: TIndexedLineSetNode;
Coordinate553: TCoordinateNode;
Transform554: TTransformNode;
Shape555: TShapeNode;
HAnimJoint556: THAnimJointNode;
HAnimSegment557: THAnimSegmentNode;
Shape558: TShapeNode;
Appearance559: TAppearanceNode;
IndexedLineSet560: TIndexedLineSetNode;
Coordinate561: TCoordinateNode;
Transform562: TTransformNode;
Shape563: TShapeNode;
HAnimSite564: THAnimSiteNode;
Shape565: TShapeNode;
HAnimSite566: THAnimSiteNode;
Shape567: TShapeNode;
HAnimJoint568: THAnimJointNode;
HAnimSegment569: THAnimSegmentNode;
Shape570: TShapeNode;
Appearance571: TAppearanceNode;
IndexedLineSet572: TIndexedLineSetNode;
Coordinate573: TCoordinateNode;
Transform574: TTransformNode;
Shape575: TShapeNode;
HAnimSite576: THAnimSiteNode;
Shape577: TShapeNode;
HAnimSite578: THAnimSiteNode;
Shape579: TShapeNode;
HAnimJoint580: THAnimJointNode;
HAnimSegment581: THAnimSegmentNode;
Shape582: TShapeNode;
Appearance583: TAppearanceNode;
IndexedLineSet584: TIndexedLineSetNode;
Coordinate585: TCoordinateNode;
Transform586: TTransformNode;
Shape587: TShapeNode;
HAnimJoint588: THAnimJointNode;
HAnimSegment589: THAnimSegmentNode;
Transform590: TTransformNode;
Shape591: TShapeNode;
Shape592: TShapeNode;
Appearance593: TAppearanceNode;
IndexedLineSet594: TIndexedLineSetNode;
Coordinate595: TCoordinateNode;
HAnimJoint596: THAnimJointNode;
HAnimSegment597: THAnimSegmentNode;
Shape598: TShapeNode;
Appearance599: TAppearanceNode;
IndexedLineSet600: TIndexedLineSetNode;
Coordinate601: TCoordinateNode;
Transform602: TTransformNode;
Shape603: TShapeNode;
HAnimJoint604: THAnimJointNode;
HAnimSegment605: THAnimSegmentNode;
Shape606: TShapeNode;
Appearance607: TAppearanceNode;
IndexedLineSet608: TIndexedLineSetNode;
Coordinate609: TCoordinateNode;
Transform610: TTransformNode;
Shape611: TShapeNode;
HAnimJoint612: THAnimJointNode;
HAnimSegment613: THAnimSegmentNode;
Shape614: TShapeNode;
Appearance615: TAppearanceNode;
IndexedLineSet616: TIndexedLineSetNode;
Coordinate617: TCoordinateNode;
Transform618: TTransformNode;
Shape619: TShapeNode;
HAnimJoint620: THAnimJointNode;
HAnimSegment621: THAnimSegmentNode;
Shape622: TShapeNode;
Appearance623: TAppearanceNode;
IndexedLineSet624: TIndexedLineSetNode;
Coordinate625: TCoordinateNode;
Transform626: TTransformNode;
Shape627: TShapeNode;
HAnimJoint628: THAnimJointNode;
HAnimSegment629: THAnimSegmentNode;
Shape630: TShapeNode;
Appearance631: TAppearanceNode;
IndexedLineSet632: TIndexedLineSetNode;
Coordinate633: TCoordinateNode;
Transform634: TTransformNode;
Shape635: TShapeNode;
HAnimSite636: THAnimSiteNode;
Shape637: TShapeNode;
HAnimSite638: THAnimSiteNode;
Shape639: TShapeNode;
HAnimSite640: THAnimSiteNode;
Shape641: TShapeNode;
HAnimSite642: THAnimSiteNode;
Shape643: TShapeNode;
HAnimSite644: THAnimSiteNode;
Shape645: TShapeNode;
HAnimSite646: THAnimSiteNode;
Shape647: TShapeNode;
HAnimSite648: THAnimSiteNode;
Shape649: TShapeNode;
HAnimSite650: THAnimSiteNode;
Shape651: TShapeNode;
HAnimSite652: THAnimSiteNode;
Shape653: TShapeNode;
HAnimSite654: THAnimSiteNode;
Shape655: TShapeNode;
HAnimJoint656: THAnimJointNode;
HAnimSegment657: THAnimSegmentNode;
Shape658: TShapeNode;
Appearance659: TAppearanceNode;
IndexedLineSet660: TIndexedLineSetNode;
Coordinate661: TCoordinateNode;
Transform662: TTransformNode;
Shape663: TShapeNode;
HAnimJoint664: THAnimJointNode;
HAnimSegment665: THAnimSegmentNode;
Shape666: TShapeNode;
Appearance667: TAppearanceNode;
IndexedLineSet668: TIndexedLineSetNode;
Coordinate669: TCoordinateNode;
Transform670: TTransformNode;
Shape671: TShapeNode;
HAnimJoint672: THAnimJointNode;
HAnimSegment673: THAnimSegmentNode;
Shape674: TShapeNode;
Appearance675: TAppearanceNode;
IndexedLineSet676: TIndexedLineSetNode;
Coordinate677: TCoordinateNode;
Transform678: TTransformNode;
Shape679: TShapeNode;
HAnimSite680: THAnimSiteNode;
Shape681: TShapeNode;
HAnimJoint682: THAnimJointNode;
HAnimSegment683: THAnimSegmentNode;
Shape684: TShapeNode;
Appearance685: TAppearanceNode;
IndexedLineSet686: TIndexedLineSetNode;
Coordinate687: TCoordinateNode;
Transform688: TTransformNode;
Shape689: TShapeNode;
Transform690: TTransformNode;
Shape691: TShapeNode;
HAnimSite692: THAnimSiteNode;
Shape693: TShapeNode;
HAnimSite694: THAnimSiteNode;
Shape695: TShapeNode;
HAnimSite696: THAnimSiteNode;
Shape697: TShapeNode;
HAnimJoint698: THAnimJointNode;
HAnimSegment699: THAnimSegmentNode;
Shape700: TShapeNode;
Appearance701: TAppearanceNode;
IndexedLineSet702: TIndexedLineSetNode;
Coordinate703: TCoordinateNode;
Transform704: TTransformNode;
Shape705: TShapeNode;
Transform706: TTransformNode;
Shape707: TShapeNode;
Transform708: TTransformNode;
Shape709: TShapeNode;
Transform710: TTransformNode;
Shape711: TShapeNode;
Transform712: TTransformNode;
Shape713: TShapeNode;
Transform714: TTransformNode;
Shape715: TShapeNode;
HAnimSite716: THAnimSiteNode;
Shape717: TShapeNode;
HAnimSite718: THAnimSiteNode;
Shape719: TShapeNode;
HAnimSite720: THAnimSiteNode;
Shape721: TShapeNode;
HAnimJoint722: THAnimJointNode;
HAnimSegment723: THAnimSegmentNode;
Shape724: TShapeNode;
Appearance725: TAppearanceNode;
IndexedLineSet726: TIndexedLineSetNode;
Coordinate727: TCoordinateNode;
Transform728: TTransformNode;
Shape729: TShapeNode;
Transform730: TTransformNode;
Shape731: TShapeNode;
Transform732: TTransformNode;
Shape733: TShapeNode;
Transform734: TTransformNode;
Shape735: TShapeNode;
Transform736: TTransformNode;
Shape737: TShapeNode;
Transform738: TTransformNode;
Shape739: TShapeNode;
HAnimSite740: THAnimSiteNode;
Shape741: TShapeNode;
HAnimSite742: THAnimSiteNode;
Shape743: TShapeNode;
HAnimJoint744: THAnimJointNode;
HAnimSegment745: THAnimSegmentNode;
Shape746: TShapeNode;
Appearance747: TAppearanceNode;
IndexedLineSet748: TIndexedLineSetNode;
Coordinate749: TCoordinateNode;
Transform750: TTransformNode;
Shape751: TShapeNode;
HAnimSite752: THAnimSiteNode;
Shape753: TShapeNode;
HAnimSite754: THAnimSiteNode;
Shape755: TShapeNode;
HAnimSite756: THAnimSiteNode;
Shape757: TShapeNode;
HAnimJoint758: THAnimJointNode;
HAnimSegment759: THAnimSegmentNode;
Shape760: TShapeNode;
Appearance761: TAppearanceNode;
IndexedLineSet762: TIndexedLineSetNode;
Coordinate763: TCoordinateNode;
Transform764: TTransformNode;
Shape765: TShapeNode;
HAnimJoint766: THAnimJointNode;
HAnimSegment767: THAnimSegmentNode;
Shape768: TShapeNode;
Appearance769: TAppearanceNode;
IndexedLineSet770: TIndexedLineSetNode;
Coordinate771: TCoordinateNode;
Transform772: TTransformNode;
Shape773: TShapeNode;
HAnimJoint774: THAnimJointNode;
HAnimSegment775: THAnimSegmentNode;
Shape776: TShapeNode;
Appearance777: TAppearanceNode;
IndexedLineSet778: TIndexedLineSetNode;
Coordinate779: TCoordinateNode;
Transform780: TTransformNode;
Shape781: TShapeNode;
HAnimSite782: THAnimSiteNode;
Shape783: TShapeNode;
HAnimJoint784: THAnimJointNode;
HAnimSegment785: THAnimSegmentNode;
Shape786: TShapeNode;
Appearance787: TAppearanceNode;
IndexedLineSet788: TIndexedLineSetNode;
Coordinate789: TCoordinateNode;
Transform790: TTransformNode;
Shape791: TShapeNode;
HAnimJoint792: THAnimJointNode;
HAnimSegment793: THAnimSegmentNode;
Shape794: TShapeNode;
Appearance795: TAppearanceNode;
IndexedLineSet796: TIndexedLineSetNode;
Coordinate797: TCoordinateNode;
Transform798: TTransformNode;
Shape799: TShapeNode;
HAnimJoint800: THAnimJointNode;
HAnimSegment801: THAnimSegmentNode;
Shape802: TShapeNode;
Appearance803: TAppearanceNode;
IndexedLineSet804: TIndexedLineSetNode;
Coordinate805: TCoordinateNode;
Transform806: TTransformNode;
Shape807: TShapeNode;
HAnimJoint808: THAnimJointNode;
HAnimSegment809: THAnimSegmentNode;
Shape810: TShapeNode;
Appearance811: TAppearanceNode;
IndexedLineSet812: TIndexedLineSetNode;
Coordinate813: TCoordinateNode;
Transform814: TTransformNode;
Shape815: TShapeNode;
HAnimSite816: THAnimSiteNode;
Shape817: TShapeNode;
HAnimSite818: THAnimSiteNode;
Shape819: TShapeNode;
HAnimJoint820: THAnimJointNode;
HAnimSegment821: THAnimSegmentNode;
Shape822: TShapeNode;
Appearance823: TAppearanceNode;
IndexedLineSet824: TIndexedLineSetNode;
Coordinate825: TCoordinateNode;
Transform826: TTransformNode;
Shape827: TShapeNode;
HAnimJoint828: THAnimJointNode;
HAnimSegment829: THAnimSegmentNode;
Shape830: TShapeNode;
Appearance831: TAppearanceNode;
IndexedLineSet832: TIndexedLineSetNode;
Coordinate833: TCoordinateNode;
Transform834: TTransformNode;
Shape835: TShapeNode;
HAnimJoint836: THAnimJointNode;
HAnimSegment837: THAnimSegmentNode;
Shape838: TShapeNode;
Appearance839: TAppearanceNode;
IndexedLineSet840: TIndexedLineSetNode;
Coordinate841: TCoordinateNode;
Transform842: TTransformNode;
Shape843: TShapeNode;
HAnimJoint844: THAnimJointNode;
HAnimSegment845: THAnimSegmentNode;
Shape846: TShapeNode;
Appearance847: TAppearanceNode;
IndexedLineSet848: TIndexedLineSetNode;
Coordinate849: TCoordinateNode;
HAnimSite850: THAnimSiteNode;
Shape851: TShapeNode;
Transform852: TTransformNode;
Shape853: TShapeNode;
HAnimJoint854: THAnimJointNode;
HAnimSegment855: THAnimSegmentNode;
Shape856: TShapeNode;
Appearance857: TAppearanceNode;
IndexedLineSet858: TIndexedLineSetNode;
Coordinate859: TCoordinateNode;
Transform860: TTransformNode;
Shape861: TShapeNode;
HAnimJoint862: THAnimJointNode;
HAnimSegment863: THAnimSegmentNode;
Shape864: TShapeNode;
Appearance865: TAppearanceNode;
IndexedLineSet866: TIndexedLineSetNode;
Coordinate867: TCoordinateNode;
Transform868: TTransformNode;
Shape869: TShapeNode;
HAnimJoint870: THAnimJointNode;
HAnimSegment871: THAnimSegmentNode;
Shape872: TShapeNode;
Appearance873: TAppearanceNode;
IndexedLineSet874: TIndexedLineSetNode;
Coordinate875: TCoordinateNode;
Transform876: TTransformNode;
Shape877: TShapeNode;
HAnimJoint878: THAnimJointNode;
HAnimSegment879: THAnimSegmentNode;
Shape880: TShapeNode;
Appearance881: TAppearanceNode;
IndexedLineSet882: TIndexedLineSetNode;
Coordinate883: TCoordinateNode;
Transform884: TTransformNode;
Shape885: TShapeNode;
HAnimSite886: THAnimSiteNode;
Shape887: TShapeNode;
HAnimJoint888: THAnimJointNode;
HAnimSegment889: THAnimSegmentNode;
Shape890: TShapeNode;
Appearance891: TAppearanceNode;
IndexedLineSet892: TIndexedLineSetNode;
Coordinate893: TCoordinateNode;
Transform894: TTransformNode;
Shape895: TShapeNode;
HAnimJoint896: THAnimJointNode;
HAnimSegment897: THAnimSegmentNode;
Shape898: TShapeNode;
Appearance899: TAppearanceNode;
IndexedLineSet900: TIndexedLineSetNode;
Coordinate901: TCoordinateNode;
Transform902: TTransformNode;
Shape903: TShapeNode;
HAnimJoint904: THAnimJointNode;
HAnimSegment905: THAnimSegmentNode;
Transform906: TTransformNode;
Shape907: TShapeNode;
Shape908: TShapeNode;
Appearance909: TAppearanceNode;
IndexedLineSet910: TIndexedLineSetNode;
Coordinate911: TCoordinateNode;
HAnimJoint912: THAnimJointNode;
HAnimSegment913: THAnimSegmentNode;
Shape914: TShapeNode;
Appearance915: TAppearanceNode;
IndexedLineSet916: TIndexedLineSetNode;
Coordinate917: TCoordinateNode;
Transform918: TTransformNode;
Shape919: TShapeNode;
HAnimSite920: THAnimSiteNode;
Shape921: TShapeNode;
HAnimJoint922: THAnimJointNode;
HAnimSegment923: THAnimSegmentNode;
Shape924: TShapeNode;
Appearance925: TAppearanceNode;
IndexedLineSet926: TIndexedLineSetNode;
Coordinate927: TCoordinateNode;
Transform928: TTransformNode;
Shape929: TShapeNode;
HAnimSite930: THAnimSiteNode;
Shape931: TShapeNode;
HAnimJoint932: THAnimJointNode;
HAnimSegment933: THAnimSegmentNode;
Shape934: TShapeNode;
Appearance935: TAppearanceNode;
IndexedLineSet936: TIndexedLineSetNode;
Coordinate937: TCoordinateNode;
Transform938: TTransformNode;
Shape939: TShapeNode;
Transform940: TTransformNode;
Shape941: TShapeNode;
HAnimSite942: THAnimSiteNode;
Shape943: TShapeNode;
HAnimSite944: THAnimSiteNode;
Shape945: TShapeNode;
HAnimSite946: THAnimSiteNode;
Shape947: TShapeNode;
HAnimJoint948: THAnimJointNode;
HAnimSegment949: THAnimSegmentNode;
Transform950: TTransformNode;
Shape951: TShapeNode;
Shape952: TShapeNode;
Appearance953: TAppearanceNode;
IndexedLineSet954: TIndexedLineSetNode;
Coordinate955: TCoordinateNode;
Transform956: TTransformNode;
Shape957: TShapeNode;
Transform958: TTransformNode;
Shape959: TShapeNode;
Transform960: TTransformNode;
Shape961: TShapeNode;
Transform962: TTransformNode;
Shape963: TShapeNode;
Transform964: TTransformNode;
Shape965: TShapeNode;
Transform966: TTransformNode;
Shape967: TShapeNode;
Transform968: TTransformNode;
Shape969: TShapeNode;
Transform970: TTransformNode;
Shape971: TShapeNode;
HAnimSite972: THAnimSiteNode;
Shape973: TShapeNode;
HAnimSite974: THAnimSiteNode;
Shape975: TShapeNode;
HAnimSite976: THAnimSiteNode;
Shape977: TShapeNode;
HAnimJoint978: THAnimJointNode;
HAnimSegment979: THAnimSegmentNode;
Shape980: TShapeNode;
Appearance981: TAppearanceNode;
IndexedLineSet982: TIndexedLineSetNode;
Coordinate983: TCoordinateNode;
Transform984: TTransformNode;
Shape985: TShapeNode;
Transform986: TTransformNode;
Shape987: TShapeNode;
Transform988: TTransformNode;
Shape989: TShapeNode;
Transform990: TTransformNode;
Shape991: TShapeNode;
Transform992: TTransformNode;
Shape993: TShapeNode;
Transform994: TTransformNode;
Shape995: TShapeNode;
HAnimSite996: THAnimSiteNode;
Shape997: TShapeNode;
HAnimSite998: THAnimSiteNode;
Shape999: TShapeNode;
HAnimJoint1000: THAnimJointNode;
HAnimSegment1001: THAnimSegmentNode;
Shape1002: TShapeNode;
Appearance1003: TAppearanceNode;
IndexedLineSet1004: TIndexedLineSetNode;
Coordinate1005: TCoordinateNode;
Transform1006: TTransformNode;
Shape1007: TShapeNode;
HAnimSite1008: THAnimSiteNode;
Shape1009: TShapeNode;
HAnimJoint1010: THAnimJointNode;
HAnimSegment1011: THAnimSegmentNode;
Shape1012: TShapeNode;
Appearance1013: TAppearanceNode;
IndexedLineSet1014: TIndexedLineSetNode;
Coordinate1015: TCoordinateNode;
Transform1016: TTransformNode;
Shape1017: TShapeNode;
HAnimJoint1018: THAnimJointNode;
HAnimSegment1019: THAnimSegmentNode;
Shape1020: TShapeNode;
Appearance1021: TAppearanceNode;
IndexedLineSet1022: TIndexedLineSetNode;
Coordinate1023: TCoordinateNode;
Transform1024: TTransformNode;
Shape1025: TShapeNode;
HAnimJoint1026: THAnimJointNode;
HAnimSegment1027: THAnimSegmentNode;
Shape1028: TShapeNode;
Appearance1029: TAppearanceNode;
IndexedLineSet1030: TIndexedLineSetNode;
Coordinate1031: TCoordinateNode;
Transform1032: TTransformNode;
Shape1033: TShapeNode;
Transform1034: TTransformNode;
Shape1035: TShapeNode;
HAnimSite1036: THAnimSiteNode;
Shape1037: TShapeNode;
HAnimJoint1038: THAnimJointNode;
HAnimSegment1039: THAnimSegmentNode;
Shape1040: TShapeNode;
Appearance1041: TAppearanceNode;
IndexedLineSet1042: TIndexedLineSetNode;
Coordinate1043: TCoordinateNode;
Transform1044: TTransformNode;
Shape1045: TShapeNode;
HAnimSite1046: THAnimSiteNode;
Shape1047: TShapeNode;
HAnimJoint1048: THAnimJointNode;
HAnimSegment1049: THAnimSegmentNode;
Shape1050: TShapeNode;
Appearance1051: TAppearanceNode;
IndexedLineSet1052: TIndexedLineSetNode;
Coordinate1053: TCoordinateNode;
Transform1054: TTransformNode;
Shape1055: TShapeNode;
HAnimJoint1056: THAnimJointNode;
HAnimSegment1057: THAnimSegmentNode;
Shape1058: TShapeNode;
Appearance1059: TAppearanceNode;
IndexedLineSet1060: TIndexedLineSetNode;
Coordinate1061: TCoordinateNode;
Transform1062: TTransformNode;
Shape1063: TShapeNode;
HAnimJoint1064: THAnimJointNode;
HAnimSegment1065: THAnimSegmentNode;
Shape1066: TShapeNode;
Appearance1067: TAppearanceNode;
IndexedLineSet1068: TIndexedLineSetNode;
Coordinate1069: TCoordinateNode;
Transform1070: TTransformNode;
Shape1071: TShapeNode;
HAnimSite1072: THAnimSiteNode;
Shape1073: TShapeNode;
HAnimJoint1074: THAnimJointNode;
HAnimSegment1075: THAnimSegmentNode;
Shape1076: TShapeNode;
Appearance1077: TAppearanceNode;
IndexedLineSet1078: TIndexedLineSetNode;
Coordinate1079: TCoordinateNode;
Transform1080: TTransformNode;
Shape1081: TShapeNode;
HAnimJoint1082: THAnimJointNode;
HAnimSegment1083: THAnimSegmentNode;
Shape1084: TShapeNode;
Appearance1085: TAppearanceNode;
IndexedLineSet1086: TIndexedLineSetNode;
Coordinate1087: TCoordinateNode;
Transform1088: TTransformNode;
Shape1089: TShapeNode;
HAnimJoint1090: THAnimJointNode;
HAnimSegment1091: THAnimSegmentNode;
Shape1092: TShapeNode;
Appearance1093: TAppearanceNode;
IndexedLineSet1094: TIndexedLineSetNode;
Coordinate1095: TCoordinateNode;
Transform1096: TTransformNode;
Shape1097: TShapeNode;
HAnimJoint1098: THAnimJointNode;
HAnimSegment1099: THAnimSegmentNode;
Shape1100: TShapeNode;
Appearance1101: TAppearanceNode;
IndexedLineSet1102: TIndexedLineSetNode;
Coordinate1103: TCoordinateNode;
Transform1104: TTransformNode;
Shape1105: TShapeNode;
HAnimSite1106: THAnimSiteNode;
Shape1107: TShapeNode;
HAnimSite1108: THAnimSiteNode;
Shape1109: TShapeNode;
HAnimJoint1110: THAnimJointNode;
HAnimSegment1111: THAnimSegmentNode;
Shape1112: TShapeNode;
Appearance1113: TAppearanceNode;
IndexedLineSet1114: TIndexedLineSetNode;
Coordinate1115: TCoordinateNode;
Transform1116: TTransformNode;
Shape1117: TShapeNode;
HAnimJoint1118: THAnimJointNode;
HAnimSegment1119: THAnimSegmentNode;
Shape1120: TShapeNode;
Appearance1121: TAppearanceNode;
IndexedLineSet1122: TIndexedLineSetNode;
Coordinate1123: TCoordinateNode;
Transform1124: TTransformNode;
Shape1125: TShapeNode;
HAnimJoint1126: THAnimJointNode;
HAnimSegment1127: THAnimSegmentNode;
Shape1128: TShapeNode;
Appearance1129: TAppearanceNode;
IndexedLineSet1130: TIndexedLineSetNode;
Coordinate1131: TCoordinateNode;
Transform1132: TTransformNode;
Shape1133: TShapeNode;
HAnimJoint1134: THAnimJointNode;
HAnimSegment1135: THAnimSegmentNode;
Shape1136: TShapeNode;
Appearance1137: TAppearanceNode;
IndexedLineSet1138: TIndexedLineSetNode;
Coordinate1139: TCoordinateNode;
Transform1140: TTransformNode;
Shape1141: TShapeNode;
HAnimSite1142: THAnimSiteNode;
Shape1143: TShapeNode;
HAnimJoint1144: THAnimJointNode;
HAnimSegment1145: THAnimSegmentNode;
Shape1146: TShapeNode;
Appearance1147: TAppearanceNode;
IndexedLineSet1148: TIndexedLineSetNode;
Coordinate1149: TCoordinateNode;
Transform1150: TTransformNode;
Shape1151: TShapeNode;
HAnimSite1152: THAnimSiteNode;
Shape1153: TShapeNode;
HAnimJoint1154: THAnimJointNode;
HAnimSegment1155: THAnimSegmentNode;
Shape1156: TShapeNode;
Appearance1157: TAppearanceNode;
IndexedLineSet1158: TIndexedLineSetNode;
Coordinate1159: TCoordinateNode;
Transform1160: TTransformNode;
Shape1161: TShapeNode;
HAnimJoint1162: THAnimJointNode;
HAnimSegment1163: THAnimSegmentNode;
Shape1164: TShapeNode;
Appearance1165: TAppearanceNode;
IndexedLineSet1166: TIndexedLineSetNode;
Coordinate1167: TCoordinateNode;
Transform1168: TTransformNode;
Shape1169: TShapeNode;
HAnimJoint1170: THAnimJointNode;
HAnimSegment1171: THAnimSegmentNode;
Shape1172: TShapeNode;
Appearance1173: TAppearanceNode;
IndexedLineSet1174: TIndexedLineSetNode;
Coordinate1175: TCoordinateNode;
Transform1176: TTransformNode;
Shape1177: TShapeNode;
HAnimSite1178: THAnimSiteNode;
Shape1179: TShapeNode;
Shape1180: TShapeNode;
Appearance1181: TAppearanceNode;
Material1182: TMaterialNode;
ImageTexture1183: TImageTextureNode;
IndexedFaceSet1184: TIndexedFaceSetNode;
Color1185: TColorNode;
Coordinate1186: TCoordinateNode;
Coordinate1187: TCoordinateNode;
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
HAnimJoint1274: THAnimJointNode;
HAnimJoint1275: THAnimJointNode;
HAnimJoint1276: THAnimJointNode;
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
HAnimSegment1364: THAnimSegmentNode;
HAnimSegment1365: THAnimSegmentNode;
HAnimSegment1366: THAnimSegmentNode;
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
HAnimSite1452: THAnimSiteNode;
HAnimSite1453: THAnimSiteNode;
HAnimSite1454: THAnimSiteNode;
TimeSensor1455: TTimeSensorNode;
TimeSensor1456: TTimeSensorNode;
TimeSensor1457: TTimeSensorNode;
OrientationInterpolator1458: TOrientationInterpolatorNode;
OrientationInterpolator1459: TOrientationInterpolatorNode;
OrientationInterpolator1460: TOrientationInterpolatorNode;
OrientationInterpolator1461: TOrientationInterpolatorNode;
OrientationInterpolator1464: TOrientationInterpolatorNode;
OrientationInterpolator1468: TOrientationInterpolatorNode;
OrientationInterpolator1469: TOrientationInterpolatorNode;
OrientationInterpolator1470: TOrientationInterpolatorNode;
OrientationInterpolator1471: TOrientationInterpolatorNode;
OrientationInterpolator1472: TOrientationInterpolatorNode;
OrientationInterpolator1473: TOrientationInterpolatorNode;
OrientationInterpolator1474: TOrientationInterpolatorNode;
OrientationInterpolator1475: TOrientationInterpolatorNode;
OrientationInterpolator1476: TOrientationInterpolatorNode;
OrientationInterpolator1477: TOrientationInterpolatorNode;
OrientationInterpolator1478: TOrientationInterpolatorNode;
OrientationInterpolator1479: TOrientationInterpolatorNode;
OrientationInterpolator1480: TOrientationInterpolatorNode;
OrientationInterpolator1481: TOrientationInterpolatorNode;
OrientationInterpolator1482: TOrientationInterpolatorNode;
OrientationInterpolator1483: TOrientationInterpolatorNode;
OrientationInterpolator1484: TOrientationInterpolatorNode;
OrientationInterpolator1485: TOrientationInterpolatorNode;
OrientationInterpolator1510: TOrientationInterpolatorNode;
OrientationInterpolator1511: TOrientationInterpolatorNode;
OrientationInterpolator1512: TOrientationInterpolatorNode;
OrientationInterpolator1513: TOrientationInterpolatorNode;
OrientationInterpolator1514: TOrientationInterpolatorNode;
OrientationInterpolator1515: TOrientationInterpolatorNode;
OrientationInterpolator1516: TOrientationInterpolatorNode;
OrientationInterpolator1517: TOrientationInterpolatorNode;
OrientationInterpolator1518: TOrientationInterpolatorNode;
Group1552: TGroupNode;
PositionInterpolator1553: TPositionInterpolatorNode;
OrientationInterpolator1554: TOrientationInterpolatorNode;
OrientationInterpolator1555: TOrientationInterpolatorNode;
OrientationInterpolator1556: TOrientationInterpolatorNode;
OrientationInterpolator1557: TOrientationInterpolatorNode;
OrientationInterpolator1558: TOrientationInterpolatorNode;
OrientationInterpolator1559: TOrientationInterpolatorNode;
OrientationInterpolator1560: TOrientationInterpolatorNode;
OrientationInterpolator1561: TOrientationInterpolatorNode;
OrientationInterpolator1562: TOrientationInterpolatorNode;
OrientationInterpolator1563: TOrientationInterpolatorNode;
OrientationInterpolator1564: TOrientationInterpolatorNode;
OrientationInterpolator1565: TOrientationInterpolatorNode;
OrientationInterpolator1566: TOrientationInterpolatorNode;
OrientationInterpolator1567: TOrientationInterpolatorNode;
OrientationInterpolator1568: TOrientationInterpolatorNode;
OrientationInterpolator1569: TOrientationInterpolatorNode;
OrientationInterpolator1570: TOrientationInterpolatorNode;
OrientationInterpolator1571: TOrientationInterpolatorNode;
OrientationInterpolator1572: TOrientationInterpolatorNode;
OrientationInterpolator1573: TOrientationInterpolatorNode;
OrientationInterpolator1574: TOrientationInterpolatorNode;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
{ METHOD .Component }
X3D0.Meta['title'] := 'JoeSkeletonSkinSiteSaluteWalk.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.';
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
X3D0.Meta['TODO'] := 'X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'JoeSkeletonSkinSiteSaluteWalk.original.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv';
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
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html';
{ METHOD .Meta }
{ METHOD .Head }
Group33 := TGroupNode.Create;
WorldInfo34 := TWorldInfoNode.Create;
WorldInfo34.SetInfo(['By Joe for Joe','HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3']);
WorldInfo34.Title := 'JoeSkeletonSkinSiteSaluteWalk.x3d';
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(WorldInfo34);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart1;
begin

NavigationInfo35 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(NavigationInfo35);
Background36 := TBackgroundNode.Create;
Background36.SetGroundAngle([1.57]);
Background36.SetGroundColor([Vector3(0,0.1,0),Vector3(0,0.1,0)]);
Background36.SetSkyColor([Vector3(0,0,0.1)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Background36);
Transform37 := TTransformNode.Create;
Transform37.Scale := Vector3(0.175,0.175,0.175);
Inline38 := TInlineNode.Create;
Inline38.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../../Savage/Tools/Authoring/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','../../../Savage/Tools/Authoring/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl']);
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(Inline38);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform37);
{ Authoring hint: these axes are aligned within local coordinate system }
Group39 := TGroupNode.Create;
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Front Up View';
Viewpoint40.Orientation := Vector4(-1,-1,0,0.55);
Viewpoint40.Position := Vector3(-1,2,2.5);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint40);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'From Left View';
Viewpoint41.Orientation := Vector4(0.3,1,0,-1.57);
Viewpoint41.Position := Vector3(-2.5,1.5,0);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint41);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'Front Mid View';
Viewpoint42.Position := Vector3(0,0.5,1.25);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint42);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'Front Feet View';
Viewpoint43.Position := Vector3(0,0,0.75);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint43);
Viewpoint44 := TViewpointNode.Create;
Viewpoint44.Description := 'From Right View';
Viewpoint44.Orientation := Vector4(0,1,0,1.57);
Viewpoint44.Position := Vector3(1,1,0);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint44);
Viewpoint45 := TViewpointNode.Create;
Viewpoint45.CenterOfRotation := Vector3(0,1.65,0);
Viewpoint45.Description := 'Front Head View';
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart2;
begin

Viewpoint45.Position := Vector3(0,1.65,0.75);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint45);
Viewpoint46 := TViewpointNode.Create;
Viewpoint46.Description := 'Front Mid View';
Viewpoint46.Position := Vector3(0,1,1.75);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint46);
Viewpoint47 := TViewpointNode.Create;
Viewpoint47.Description := 'Rear View';
Viewpoint47.Orientation := Vector4(0,1,0,3.14);
Viewpoint47.Position := Vector3(0,1.5,-4);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint47);
Viewpoint48 := TViewpointNode.Create;
Viewpoint48.Description := 'Top View';
Viewpoint48.Orientation := Vector4(1,0,0,-1.57);
Viewpoint48.Position := Vector3(0,4,0);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint48);
Viewpoint49 := TViewpointNode.Create;
Viewpoint49.Description := 'Bottom View';
Viewpoint49.Orientation := Vector4(1,0,0,1.57);
Viewpoint49.Position := Vector3(0,-4,0);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint49);
Viewpoint50 := TViewpointNode.Create;
Viewpoint50.Description := 'Right View';
Viewpoint50.Orientation := Vector4(0,1,0,1.57);
Viewpoint50.Position := Vector3(4,1.5,0);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Viewpoint50);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Group39);
Group51 := TGroupNode.Create;
Group51.Visible := False;
Transform52 := TTransformNode.Create;
Transform52.Scale := Vector3(5,5,5);
Transform52.Translation := Vector3(0,2.1,0);
Shape53 := TShapeNode.Create;
Appearance54 := TAppearanceNode.Create;
Material55 := TMaterialNode.Create;
Material55.AmbientIntensity := 0.5;
Material55.DiffuseColor := Vector3(0,0,0);
Material55.Shininess := 1;
{ METHOD .SetMaterial }
Appearance54.Material := Material55;
{ METHOD .Appearance }
Shape53.Appearance := Appearance54;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart3;
begin

IndexedFaceSet56 := TIndexedFaceSetNode.Create;
IndexedFaceSet56.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet56.CreaseAngle := 0.1;
Color57 := TColorNode.Create;
Color57.SetColor([Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,1),Vector3(0,1,1),Vector3(1,1,0)]);
{ METHOD .Color }
IndexedFaceSet56.Color := Color57;
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.0157),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
IndexedFaceSet56.Coord := Coordinate58;
{ METHOD .Geometry }
Shape53.Geometry := IndexedFaceSet56;
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
Group51.FdChildren.Add(Transform52);
Transform59 := TTransformNode.Create;
Transform59.Scale := Vector3(0.1,0.1,0.1);
Transform59.Translation := Vector3(-0.2,0.773,-0.016);
Shape60 := TShapeNode.Create;
Appearance61 := TAppearanceNode.Create;
Material62 := TMaterialNode.Create;
Material62.AmbientIntensity := 1;
Material62.DiffuseColor := Vector3(1,0,0);
Material62.EmissiveColor := Vector3(1,0,0);
Material62.Shininess := 0.7;
Material62.SpecularColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance61.Material := Material62;
{ METHOD .Appearance }
Shape60.Appearance := Appearance61;
IndexedFaceSet63 := TIndexedFaceSetNode.Create;
IndexedFaceSet63.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet63.CreaseAngle := 0.1;
{ METHOD .Coord }
IndexedFaceSet63.Coord := Coordinate58;
{ METHOD .Geometry }
Shape60.Geometry := IndexedFaceSet63;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
Group51.FdChildren.Add(Transform59);
Transform65 := TTransformNode.Create;
Transform65.Scale := Vector3(0.1,0.1,0.1);
Transform65.Translation := Vector3(0,0.2,0);
Shape66 := TShapeNode.Create;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68.DiffuseColor := Vector3(0,1,0);
Material68.EmissiveColor := Vector3(0,1,0);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart4;
begin

Material68.SpecularColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance67.Material := Material68;
{ METHOD .Appearance }
Shape66.Appearance := Appearance67;
IndexedLineSet69 := TIndexedLineSetNode.Create;
IndexedLineSet69.SetCoordIndex([0,1,-1]);
Coordinate70 := TCoordinateNode.Create;
Coordinate70.SetPoint([Vector3(0,0,0),Vector3(0,0.0001,0)]);
{ METHOD .Coord }
IndexedLineSet69.Coord := Coordinate70;
{ METHOD .Geometry }
Shape66.Geometry := IndexedLineSet69;
{ METHOD .FdChildren.Add }
Transform65.FdChildren.Add(Shape66);
{ METHOD .FdChildren.Add }
Group51.FdChildren.Add(Transform65);
Transform71 := TTransformNode.Create;
Transform71.Scale := Vector3(0.1,0.1,0.1);
Transform71.Translation := Vector3(-0.2,0.773,-0.016);
Shape72 := TShapeNode.Create;
Appearance73 := TAppearanceNode.Create;
Material74 := TMaterialNode.Create;
Material74.AmbientIntensity := 0.5;
Material74.DiffuseColor := Vector3(0,1,0);
Material74.EmissiveColor := Vector3(0,1,0);
Material74.Shininess := 1;
Material74.SpecularColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance73.Material := Material74;
{ METHOD .Appearance }
Shape72.Appearance := Appearance73;
Sphere75 := TSphereNode.Create;
Sphere75.Radius := 0.005;
{ METHOD .Geometry }
Shape72.Geometry := Sphere75;
{ METHOD .FdChildren.Add }
Transform71.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
Group51.FdChildren.Add(Transform71);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Group51);
Group76 := TGroupNode.Create;
Group77 := TGroupNode.Create;
HAnimHumanoid78 := THAnimHumanoidNode.Create;
HAnimHumanoid78.Loa := 4;
HAnimHumanoid78.Version := '2.0';
{ original HAnimHumanoid info='"humanoidVersion=2.0"' }
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
MetadataSet79 := TMetadataSetNode.Create;
MetadataSet79.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString80 := TMetadataStringNode.Create;
MetadataString80.SetValue(['2.0']);
{ METHOD .FdValue.Add }
MetadataSet79.FdValue.Add(MetadataString80);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart5;
begin

{ METHOD .Metadata }
HAnimHumanoid78.Metadata := MetadataSet79;
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.Center := Vector3(0,0.875,0);
HAnimSegment82 := THAnimSegmentNode.Create;
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(0,0.875,0);
{ METHOD .FdChildren.Add }
Transform83.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment82.FdChildren.Add(Transform83);
Shape85 := TShapeNode.Create;
{ METHOD .Appearance }
Shape85.Appearance := Appearance67;
IndexedLineSet87 := TIndexedLineSetNode.Create;
IndexedLineSet87.SetCoordIndex([0,1,-1]);
Coordinate88 := TCoordinateNode.Create;
Coordinate88.SetPoint([Vector3(0,0.875,0),Vector3(0,0.92,0)]);
{ METHOD .Coord }
IndexedLineSet87.Coord := Coordinate88;
{ METHOD .Geometry }
Shape85.Geometry := IndexedLineSet87;
{ METHOD .FdChildren.Add }
HAnimSegment82.FdChildren.Add(Shape85);
Transform89 := TTransformNode.Create;
Transform89.Translation := Vector3(0,0.92,0.08);
{ METHOD .FdChildren.Add }
Transform89.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment82.FdChildren.Add(Transform89);
Transform91 := TTransformNode.Create;
Transform91.Translation := Vector3(0,0.87,-0.022);
{ METHOD .FdChildren.Add }
Transform91.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment82.FdChildren.Add(Transform91);
{ METHOD .FdChildren.Add }
HAnimJoint81.FdChildren.Add(HAnimSegment82);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.Center := Vector3(0,0.92,0);
HAnimJoint93.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint93.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment94 := THAnimSegmentNode.Create;
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(0,0.9149,0.0016);
Transform96 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform96.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
Transform95.FdChildren.Add(Transform96);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(Transform95);
Shape98 := TShapeNode.Create;
{ METHOD .Appearance }
Shape98.Appearance := Appearance67;
IndexedLineSet100 := TIndexedLineSetNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart6;
begin

IndexedLineSet100.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate101 := TCoordinateNode.Create;
Coordinate101.SetPoint([Vector3(0,0.92,0),Vector3(0.0961,0.9124,0),Vector3(-0.095,0.9171,0.0029),Vector3(0,1.045,-0.095)]);
{ METHOD .Coord }
IndexedLineSet100.Coord := Coordinate101;
{ METHOD .Geometry }
Shape98.Geometry := IndexedLineSet100;
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(Shape98);
HAnimSite102 := THAnimSiteNode.Create;
HAnimSite102.Translation := Vector3(0.1425,1.065,0.0033);
{ METHOD .FdChildren.Add }
HAnimSite102.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite102);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.Translation := Vector3(0.15,0.9,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite104.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite104);
HAnimSite106 := THAnimSiteNode.Create;
HAnimSite106.Translation := Vector3(-0.1425,1.065,0.0033);
{ METHOD .FdChildren.Add }
HAnimSite106.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite106);
HAnimSite108 := THAnimSiteNode.Create;
HAnimSite108.Translation := Vector3(-0.15,0.9,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite108.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite108);
HAnimSite110 := THAnimSiteNode.Create;
HAnimSite110.Translation := Vector3(0.0935,1.03,0.075);
{ METHOD .FdChildren.Add }
HAnimSite110.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite110);
HAnimSite112 := THAnimSiteNode.Create;
HAnimSite112.Translation := Vector3(-0.0935,1.03,0.075);
{ METHOD .FdChildren.Add }
HAnimSite112.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite112);
HAnimSite114 := THAnimSiteNode.Create;
HAnimSite114.Translation := Vector3(0.0773,1.019,-0.12);
{ METHOD .FdChildren.Add }
HAnimSite114.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite114);
HAnimSite116 := THAnimSiteNode.Create;
HAnimSite116.Translation := Vector3(-0.0773,1.019,-0.12);
{ METHOD .FdChildren.Add }
HAnimSite116.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite116);
HAnimSite118 := THAnimSiteNode.Create;
Transform119 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart7;
begin

Transform119.Scale := Vector3(3,3,3);
{ METHOD .FdChildren.Add }
Transform119.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSite118.FdChildren.Add(Transform119);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite118);
HAnimSite121 := THAnimSiteNode.Create;
HAnimSite121.Translation := Vector3(0,0.87,-0.022);
{ METHOD .FdChildren.Add }
HAnimSite121.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment94.FdChildren.Add(HAnimSite121);
{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimSegment94);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Center := Vector3(0.1,0.92,0);
HAnimJoint123.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint123.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment124 := THAnimSegmentNode.Create;
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0.1,0.92,0);
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform125);
Shape127 := TShapeNode.Create;
{ METHOD .Appearance }
Shape127.Appearance := Appearance67;
IndexedLineSet129 := TIndexedLineSetNode.Create;
IndexedLineSet129.SetCoordIndex([0,1,-1]);
Coordinate130 := TCoordinateNode.Create;
Coordinate130.SetPoint([Vector3(0.1,0.92,0),Vector3(0.115,0.466,0)]);
{ METHOD .Coord }
IndexedLineSet129.Coord := Coordinate130;
{ METHOD .Geometry }
Shape127.Geometry := IndexedLineSet129;
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Shape127);
Transform131 := TTransformNode.Create;
Transform131.Translation := Vector3(0.1,0.9,0.0775);
{ METHOD .FdChildren.Add }
Transform131.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform131);
Transform133 := TTransformNode.Create;
Transform133.Translation := Vector3(0.079,0.92,-0.14);
{ METHOD .FdChildren.Add }
Transform133.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform133);
Transform135 := TTransformNode.Create;
Transform135.Translation := Vector3(0.171,0.65,0);
{ METHOD .FdChildren.Add }
Transform135.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform135);
Transform137 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart8;
begin

Transform137.Translation := Vector3(0.02,0.65,0);
{ METHOD .FdChildren.Add }
Transform137.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform137);
Transform139 := TTransformNode.Create;
Transform139.Translation := Vector3(0.1,0.65,-0.08);
{ METHOD .FdChildren.Add }
Transform139.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform139);
Transform141 := TTransformNode.Create;
Transform141.Translation := Vector3(0.1,0.65,0.07);
{ METHOD .FdChildren.Add }
Transform141.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(Transform141);
HAnimSite143 := THAnimSiteNode.Create;
HAnimSite143.Translation := Vector3(0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite143.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(HAnimSite143);
HAnimSite145 := THAnimSiteNode.Create;
HAnimSite145.Translation := Vector3(0.17,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite145.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(HAnimSite145);
HAnimSite147 := THAnimSiteNode.Create;
HAnimSite147.Translation := Vector3(0.05,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite147.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment124.FdChildren.Add(HAnimSite147);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimSegment124);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.Center := Vector3(0.115,0.466,0);
HAnimJoint149.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint149.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment150 := THAnimSegmentNode.Create;
Transform151 := TTransformNode.Create;
Transform151.Translation := Vector3(0.115,0.466,0);
{ METHOD .FdChildren.Add }
Transform151.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform151);
Shape153 := TShapeNode.Create;
{ METHOD .Appearance }
Shape153.Appearance := Appearance67;
IndexedLineSet155 := TIndexedLineSetNode.Create;
IndexedLineSet155.SetCoordIndex([0,1,-1]);
Coordinate156 := TCoordinateNode.Create;
Coordinate156.SetPoint([Vector3(0.115,0.466,0),Vector3(0.1,0.069,0)]);
{ METHOD .Coord }
IndexedLineSet155.Coord := Coordinate156;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart9;
begin

{ METHOD .Geometry }
Shape153.Geometry := IndexedLineSet155;
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Shape153);
Transform157 := TTransformNode.Create;
Transform157.Translation := Vector3(0.115,0.466,0.06);
{ METHOD .FdChildren.Add }
Transform157.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform157);
Transform159 := TTransformNode.Create;
Transform159.Translation := Vector3(0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
Transform159.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform159);
Transform161 := TTransformNode.Create;
Transform161.Translation := Vector3(0.17,0.466,0);
{ METHOD .FdChildren.Add }
Transform161.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform161);
Transform163 := TTransformNode.Create;
Transform163.Translation := Vector3(0.05,0.466,0);
{ METHOD .FdChildren.Add }
Transform163.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform163);
Transform165 := TTransformNode.Create;
Transform165.Translation := Vector3(0.17,0.3,0);
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform165);
Transform167 := TTransformNode.Create;
Transform167.Translation := Vector3(0.06,0.3,0);
{ METHOD .FdChildren.Add }
Transform167.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform167);
Transform169 := TTransformNode.Create;
Transform169.Translation := Vector3(0.1,0.3,-0.05);
{ METHOD .FdChildren.Add }
Transform169.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform169);
Transform171 := TTransformNode.Create;
Transform171.Translation := Vector3(0.1,0.3,0.05);
{ METHOD .FdChildren.Add }
Transform171.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(Transform171);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.Translation := Vector3(0.15,0.07,0);
{ METHOD .FdChildren.Add }
HAnimSite173.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(HAnimSite173);
HAnimSite175 := THAnimSiteNode.Create;
HAnimSite175.Translation := Vector3(0.085,0.086,0.0125);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart10;
begin

{ METHOD .FdChildren.Add }
HAnimSite175.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment150.FdChildren.Add(HAnimSite175);
{ METHOD .FdChildren.Add }
HAnimJoint149.FdChildren.Add(HAnimSegment150);
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177.Center := Vector3(0.115,0.069,0);
HAnimJoint177.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint177.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment178 := THAnimSegmentNode.Create;
Transform179 := TTransformNode.Create;
Transform179.Translation := Vector3(0.115,0.069,0);
{ METHOD .FdChildren.Add }
Transform179.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Transform179);
Shape181 := TShapeNode.Create;
{ METHOD .Appearance }
Shape181.Appearance := Appearance67;
IndexedLineSet183 := TIndexedLineSetNode.Create;
IndexedLineSet183.SetCoordIndex([0,1,-1]);
Coordinate184 := TCoordinateNode.Create;
Coordinate184.SetPoint([Vector3(0.1,0.069,0),Vector3(0.115,0.031,0.03)]);
{ METHOD .Coord }
IndexedLineSet183.Coord := Coordinate184;
{ METHOD .Geometry }
Shape181.Geometry := IndexedLineSet183;
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Shape181);
Transform185 := TTransformNode.Create;
Transform185.Translation := Vector3(0.15,0.07,0);
{ METHOD .FdChildren.Add }
Transform185.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Transform185);
Transform187 := TTransformNode.Create;
Transform187.Translation := Vector3(0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
Transform187.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Transform187);
Transform189 := TTransformNode.Create;
Transform189.Translation := Vector3(0.115,0.069,-0.045);
{ METHOD .FdChildren.Add }
Transform189.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Transform189);
Transform191 := TTransformNode.Create;
Transform191.Translation := Vector3(0.117,0.0975,0.0615);
{ METHOD .FdChildren.Add }
Transform191.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(Transform191);
HAnimSite193 := THAnimSiteNode.Create;
HAnimSite193.Translation := Vector3(0.09,0.056,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite193.FdChildren.Add(Shape60);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart11;
begin

{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(HAnimSite193);
HAnimSite195 := THAnimSiteNode.Create;
HAnimSite195.Translation := Vector3(0.115,0.04,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite195.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment178.FdChildren.Add(HAnimSite195);
{ METHOD .FdChildren.Add }
HAnimJoint177.FdChildren.Add(HAnimSegment178);
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197.Center := Vector3(0.115,0.031,0.03);
HAnimJoint197.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint197.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment198 := THAnimSegmentNode.Create;
Transform199 := TTransformNode.Create;
Transform199.Translation := Vector3(0.115,0.031,0.03);
{ METHOD .FdChildren.Add }
Transform199.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Transform199);
Shape201 := TShapeNode.Create;
{ METHOD .Appearance }
Shape201.Appearance := Appearance67;
IndexedLineSet203 := TIndexedLineSetNode.Create;
IndexedLineSet203.SetCoordIndex([0,1,-1]);
Coordinate204 := TCoordinateNode.Create;
Coordinate204.SetPoint([Vector3(0.115,0.031,0.03),Vector3(0.115,0.037,0.09)]);
{ METHOD .Coord }
IndexedLineSet203.Coord := Coordinate204;
{ METHOD .Geometry }
Shape201.Geometry := IndexedLineSet203;
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Shape201);
Transform205 := TTransformNode.Create;
Transform205.Translation := Vector3(0.1375,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform205.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Transform205);
Transform207 := TTransformNode.Create;
Transform207.Translation := Vector3(0.095,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform207.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Transform207);
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(0.115,0.015,-0.045);
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment198.FdChildren.Add(Transform209);
{ METHOD .FdChildren.Add }
HAnimJoint197.FdChildren.Add(HAnimSegment198);
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211.Center := Vector3(0.115,0.037,0.09);
HAnimJoint211.SetSkinCoordIndex([349,350,351,352]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart12;
begin

HAnimJoint211.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment212 := THAnimSegmentNode.Create;
Transform213 := TTransformNode.Create;
Transform213.Translation := Vector3(0.115,0.037,0.09);
{ METHOD .FdChildren.Add }
Transform213.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Transform213);
Shape215 := TShapeNode.Create;
{ METHOD .Appearance }
Shape215.Appearance := Appearance67;
IndexedLineSet217 := TIndexedLineSetNode.Create;
IndexedLineSet217.SetCoordIndex([0,1,-1]);
Coordinate218 := TCoordinateNode.Create;
Coordinate218.SetPoint([Vector3(0.115,0.037,0.09),Vector3(0.115,0.02,0.122)]);
{ METHOD .Coord }
IndexedLineSet217.Coord := Coordinate218;
{ METHOD .Geometry }
Shape215.Geometry := IndexedLineSet217;
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Shape215);
Transform219 := TTransformNode.Create;
Transform219.Translation := Vector3(0.115,0.06,0.1);
{ METHOD .FdChildren.Add }
Transform219.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Transform219);
Transform221 := TTransformNode.Create;
Transform221.Translation := Vector3(0.115,0,0.07);
{ METHOD .FdChildren.Add }
Transform221.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Transform221);
Transform223 := TTransformNode.Create;
Transform223.Translation := Vector3(0.165,0,0.07);
{ METHOD .FdChildren.Add }
Transform223.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Transform223);
Transform225 := TTransformNode.Create;
Transform225.Translation := Vector3(0.095,0,0.07);
{ METHOD .FdChildren.Add }
Transform225.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(Transform225);
HAnimSite227 := THAnimSiteNode.Create;
HAnimSite227.Translation := Vector3(0.087,0.01,0.122);
{ METHOD .FdChildren.Add }
HAnimSite227.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment212.FdChildren.Add(HAnimSite227);
{ METHOD .FdChildren.Add }
HAnimJoint211.FdChildren.Add(HAnimSegment212);
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229.Center := Vector3(0.115,0.02,0.122);
HAnimJoint229.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint229.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart13;
begin

HAnimSegment230 := THAnimSegmentNode.Create;
Transform231 := TTransformNode.Create;
Transform231.Translation := Vector3(0.115,0.02,0.13);
{ METHOD .FdChildren.Add }
Transform231.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform231);
Shape233 := TShapeNode.Create;
{ METHOD .Appearance }
Shape233.Appearance := Appearance67;
IndexedLineSet235 := TIndexedLineSetNode.Create;
IndexedLineSet235.SetCoordIndex([0,1,-1]);
Coordinate236 := TCoordinateNode.Create;
Coordinate236.SetPoint([Vector3(0.115,0.02,0.122),Vector3(0.132,0.013,0.19)]);
{ METHOD .Coord }
IndexedLineSet235.Coord := Coordinate236;
{ METHOD .Geometry }
Shape233.Geometry := IndexedLineSet235;
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Shape233);
Transform237 := TTransformNode.Create;
Transform237.Translation := Vector3(0.115,0.04,0.13);
{ METHOD .FdChildren.Add }
Transform237.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform237);
Transform239 := TTransformNode.Create;
Transform239.Translation := Vector3(0.125,0,0.12);
{ METHOD .FdChildren.Add }
Transform239.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform239);
Transform241 := TTransformNode.Create;
Transform241.Translation := Vector3(0.165,0,0.12);
{ METHOD .FdChildren.Add }
Transform241.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform241);
Transform243 := TTransformNode.Create;
Transform243.Translation := Vector3(0.087,0,0.122);
{ METHOD .FdChildren.Add }
Transform243.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform243);
Transform245 := TTransformNode.Create;
Transform245.Translation := Vector3(0.09,0.012,0.188);
{ METHOD .FdChildren.Add }
Transform245.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform245);
Transform247 := TTransformNode.Create;
Transform247.Translation := Vector3(0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
Transform247.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform247);
Transform249 := TTransformNode.Create;
Transform249.Translation := Vector3(0.128,0.011,0.185);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart14;
begin

{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform249);
Transform251 := TTransformNode.Create;
Transform251.Translation := Vector3(0.142,0.011,0.178);
{ METHOD .FdChildren.Add }
Transform251.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform251);
Transform253 := TTransformNode.Create;
Transform253.Translation := Vector3(0.154,0.01,0.168);
{ METHOD .FdChildren.Add }
Transform253.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(Transform253);
HAnimSite255 := THAnimSiteNode.Create;
HAnimSite255.Translation := Vector3(0.165,0.01,0.12);
{ METHOD .FdChildren.Add }
HAnimSite255.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(HAnimSite255);
HAnimSite257 := THAnimSiteNode.Create;
HAnimSite257.Translation := Vector3(0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
HAnimSite257.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment230.FdChildren.Add(HAnimSite257);
{ METHOD .FdChildren.Add }
HAnimJoint229.FdChildren.Add(HAnimSegment230);
{ METHOD .FdChildren.Add }
HAnimJoint211.FdChildren.Add(HAnimJoint229);
{ METHOD .FdChildren.Add }
HAnimJoint197.FdChildren.Add(HAnimJoint211);
{ METHOD .FdChildren.Add }
HAnimJoint177.FdChildren.Add(HAnimJoint197);
{ METHOD .FdChildren.Add }
HAnimJoint149.FdChildren.Add(HAnimJoint177);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimJoint149);
{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimJoint123);
HAnimJoint259 := THAnimJointNode.Create;
HAnimJoint259.Center := Vector3(-0.1,0.92,0);
HAnimJoint259.SetSkinCoordIndex([91,92,98,99,100,101]);
HAnimJoint259.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment260 := THAnimSegmentNode.Create;
Transform261 := TTransformNode.Create;
Transform261.Translation := Vector3(-0.1,0.92,0);
{ METHOD .FdChildren.Add }
Transform261.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform261);
Shape263 := TShapeNode.Create;
{ METHOD .Appearance }
Shape263.Appearance := Appearance67;
IndexedLineSet265 := TIndexedLineSetNode.Create;
IndexedLineSet265.SetCoordIndex([0,1,-1]);
Coordinate266 := TCoordinateNode.Create;
Coordinate266.SetPoint([Vector3(-0.1,0.92,0),Vector3(-0.1,0.4913,0)]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart15;
begin

{ METHOD .Coord }
IndexedLineSet265.Coord := Coordinate266;
{ METHOD .Geometry }
Shape263.Geometry := IndexedLineSet265;
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Shape263);
Transform267 := TTransformNode.Create;
Transform267.Translation := Vector3(-0.079,0.92,-0.14);
{ METHOD .FdChildren.Add }
Transform267.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform267);
Transform269 := TTransformNode.Create;
Transform269.Translation := Vector3(-0.1,0.9,0.075);
{ METHOD .FdChildren.Add }
Transform269.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform269);
Transform271 := TTransformNode.Create;
Transform271.Translation := Vector3(-0.171,0.65,0);
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform271);
Transform273 := TTransformNode.Create;
Transform273.Translation := Vector3(-0.02,0.65,0);
{ METHOD .FdChildren.Add }
Transform273.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform273);
Transform275 := TTransformNode.Create;
Transform275.Translation := Vector3(-0.1,0.65,-0.08);
{ METHOD .FdChildren.Add }
Transform275.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform275);
Transform277 := TTransformNode.Create;
Transform277.Translation := Vector3(-0.1,0.65,0.07);
{ METHOD .FdChildren.Add }
Transform277.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(Transform277);
HAnimSite279 := THAnimSiteNode.Create;
HAnimSite279.Translation := Vector3(-0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite279.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(HAnimSite279);
HAnimSite281 := THAnimSiteNode.Create;
HAnimSite281.Translation := Vector3(-0.17,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite281.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(HAnimSite281);
HAnimSite283 := THAnimSiteNode.Create;
HAnimSite283.Translation := Vector3(-0.05,0.466,0);
{ METHOD .FdChildren.Add }
HAnimSite283.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment260.FdChildren.Add(HAnimSite283);
{ METHOD .FdChildren.Add }
HAnimJoint259.FdChildren.Add(HAnimSegment260);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart16;
begin

HAnimJoint285 := THAnimJointNode.Create;
HAnimJoint285.Center := Vector3(-0.05,0.466,0);
HAnimJoint285.SetSkinCoordIndex([362,363,364,365,366,367,368,369]);
HAnimJoint285.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment286 := THAnimSegmentNode.Create;
Transform287 := TTransformNode.Create;
Transform287.Translation := Vector3(-0.1,0.4913,0);
{ METHOD .FdChildren.Add }
Transform287.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform287);
Shape289 := TShapeNode.Create;
{ METHOD .Appearance }
Shape289.Appearance := Appearance67;
IndexedLineSet291 := TIndexedLineSetNode.Create;
IndexedLineSet291.SetCoordIndex([0,1,-1]);
Coordinate292 := TCoordinateNode.Create;
Coordinate292.SetPoint([Vector3(-0.1,0.4913,0),Vector3(-0.1,0.0712,0)]);
{ METHOD .Coord }
IndexedLineSet291.Coord := Coordinate292;
{ METHOD .Geometry }
Shape289.Geometry := IndexedLineSet291;
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Shape289);
Transform293 := TTransformNode.Create;
Transform293.Translation := Vector3(-0.115,0.466,0.06);
{ METHOD .FdChildren.Add }
Transform293.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform293);
Transform295 := TTransformNode.Create;
Transform295.Translation := Vector3(-0.115,0.466,-0.055);
{ METHOD .FdChildren.Add }
Transform295.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform295);
Transform297 := TTransformNode.Create;
Transform297.Translation := Vector3(-0.17,0.466,0);
{ METHOD .FdChildren.Add }
Transform297.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform297);
Transform299 := TTransformNode.Create;
Transform299.Translation := Vector3(-0.05,0.466,0);
{ METHOD .FdChildren.Add }
Transform299.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform299);
Transform301 := TTransformNode.Create;
Transform301.Translation := Vector3(-0.17,0.3,0);
{ METHOD .FdChildren.Add }
Transform301.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform301);
Transform303 := TTransformNode.Create;
Transform303.Translation := Vector3(-0.06,0.3,0);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart17;
begin

{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform303);
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(-0.1,0.3,-0.05);
{ METHOD .FdChildren.Add }
Transform305.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform305);
Transform307 := TTransformNode.Create;
Transform307.Translation := Vector3(-0.1,0.3,0.05);
{ METHOD .FdChildren.Add }
Transform307.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(Transform307);
HAnimSite309 := THAnimSiteNode.Create;
HAnimSite309.Translation := Vector3(-0.15,0.07,0);
{ METHOD .FdChildren.Add }
HAnimSite309.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(HAnimSite309);
HAnimSite311 := THAnimSiteNode.Create;
HAnimSite311.Translation := Vector3(-0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite311.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment286.FdChildren.Add(HAnimSite311);
{ METHOD .FdChildren.Add }
HAnimJoint285.FdChildren.Add(HAnimSegment286);
HAnimJoint313 := THAnimJointNode.Create;
HAnimJoint313.Center := Vector3(-0.115,0.069,0);
HAnimJoint313.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint313.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment314 := THAnimSegmentNode.Create;
Transform315 := TTransformNode.Create;
Transform315.Translation := Vector3(-0.1,0.0712,0);
{ METHOD .FdChildren.Add }
Transform315.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(Transform315);
Shape317 := TShapeNode.Create;
{ METHOD .Appearance }
Shape317.Appearance := Appearance67;
IndexedLineSet319 := TIndexedLineSetNode.Create;
IndexedLineSet319.SetCoordIndex([0,1,-1]);
Coordinate320 := TCoordinateNode.Create;
Coordinate320.SetPoint([Vector3(-0.1,0.0712,0),Vector3(-0.1,0.015,-0.01)]);
{ METHOD .Coord }
IndexedLineSet319.Coord := Coordinate320;
{ METHOD .Geometry }
Shape317.Geometry := IndexedLineSet319;
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(Shape317);
Transform321 := TTransformNode.Create;
Transform321.Translation := Vector3(-0.15,0.07,0);
{ METHOD .FdChildren.Add }
Transform321.FdChildren.Add(Shape72);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart18;
begin

{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(Transform321);
Transform323 := TTransformNode.Create;
Transform323.Translation := Vector3(-0.085,0.086,0.0125);
{ METHOD .FdChildren.Add }
Transform323.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(Transform323);
Transform325 := TTransformNode.Create;
Transform325.Translation := Vector3(-0.115,0.069,-0.045);
{ METHOD .FdChildren.Add }
Transform325.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(Transform325);
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(-0.117,0.0975,0.0615);
{ METHOD .FdChildren.Add }
Transform327.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(Transform327);
HAnimSite329 := THAnimSiteNode.Create;
HAnimSite329.Translation := Vector3(-0.09,0.056,0.0125);
{ METHOD .FdChildren.Add }
HAnimSite329.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(HAnimSite329);
HAnimSite331 := THAnimSiteNode.Create;
HAnimSite331.Translation := Vector3(-0.115,0.04,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite331.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment314.FdChildren.Add(HAnimSite331);
{ METHOD .FdChildren.Add }
HAnimJoint313.FdChildren.Add(HAnimSegment314);
HAnimJoint333 := THAnimJointNode.Create;
HAnimJoint333.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint333.SetSkinCoordIndex([374,375,376]);
HAnimJoint333.SetSkinCoordWeight([1,1,1]);
HAnimSegment334 := THAnimSegmentNode.Create;
Transform335 := TTransformNode.Create;
Transform335.Translation := Vector3(-0.1,0.015,-0.01);
{ METHOD .FdChildren.Add }
Transform335.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Transform335);
Shape337 := TShapeNode.Create;
{ METHOD .Appearance }
Shape337.Appearance := Appearance67;
IndexedLineSet339 := TIndexedLineSetNode.Create;
IndexedLineSet339.SetCoordIndex([0,1,-1]);
Coordinate340 := TCoordinateNode.Create;
Coordinate340.SetPoint([Vector3(-0.1,0.015,-0.01),Vector3(-0.1,0.02,0.07)]);
{ METHOD .Coord }
IndexedLineSet339.Coord := Coordinate340;
{ METHOD .Geometry }
Shape337.Geometry := IndexedLineSet339;
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Shape337);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart19;
begin

Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(-0.1375,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform341.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Transform341);
Transform343 := TTransformNode.Create;
Transform343.Translation := Vector3(-0.095,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform343.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Transform343);
Transform345 := TTransformNode.Create;
Transform345.Translation := Vector3(-0.095,0.006,-0.03);
{ METHOD .FdChildren.Add }
Transform345.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment334.FdChildren.Add(Transform345);
{ METHOD .FdChildren.Add }
HAnimJoint333.FdChildren.Add(HAnimSegment334);
HAnimJoint347 := THAnimJointNode.Create;
HAnimJoint347.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint347.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint347.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment348 := THAnimSegmentNode.Create;
Transform349 := TTransformNode.Create;
Transform349.Translation := Vector3(-0.1,0.02,0.07);
{ METHOD .FdChildren.Add }
Transform349.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Transform349);
Shape351 := TShapeNode.Create;
{ METHOD .Appearance }
Shape351.Appearance := Appearance67;
IndexedLineSet353 := TIndexedLineSetNode.Create;
IndexedLineSet353.SetCoordIndex([0,1,-1]);
Coordinate354 := TCoordinateNode.Create;
Coordinate354.SetPoint([Vector3(-0.1,0.02,0.07),Vector3(-0.1,0.01,0.14)]);
{ METHOD .Coord }
IndexedLineSet353.Coord := Coordinate354;
{ METHOD .Geometry }
Shape351.Geometry := IndexedLineSet353;
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Shape351);
Transform355 := TTransformNode.Create;
Transform355.Translation := Vector3(-0.115,0.06,0.1);
{ METHOD .FdChildren.Add }
Transform355.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Transform355);
Transform357 := TTransformNode.Create;
Transform357.Translation := Vector3(-0.115,0,0.07);
{ METHOD .FdChildren.Add }
Transform357.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Transform357);
Transform359 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart20;
begin

Transform359.Translation := Vector3(-0.165,0,0.07);
{ METHOD .FdChildren.Add }
Transform359.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Transform359);
Transform361 := TTransformNode.Create;
Transform361.Translation := Vector3(-0.165,0,0.07);
{ METHOD .FdChildren.Add }
Transform361.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(Transform361);
HAnimSite363 := THAnimSiteNode.Create;
HAnimSite363.Translation := Vector3(-0.115,0.02,0.122);
{ METHOD .FdChildren.Add }
HAnimSite363.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment348.FdChildren.Add(HAnimSite363);
{ METHOD .FdChildren.Add }
HAnimJoint347.FdChildren.Add(HAnimSegment348);
HAnimJoint365 := THAnimJointNode.Create;
HAnimJoint365.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint365.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint365.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment366 := THAnimSegmentNode.Create;
Transform367 := TTransformNode.Create;
Transform367.Translation := Vector3(-0.1086,0.01,0.14);
{ METHOD .FdChildren.Add }
Transform367.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform367);
Shape369 := TShapeNode.Create;
{ METHOD .Appearance }
Shape369.Appearance := Appearance67;
IndexedLineSet371 := TIndexedLineSetNode.Create;
IndexedLineSet371.SetCoordIndex([0,1,-1]);
Coordinate372 := TCoordinateNode.Create;
Coordinate372.SetPoint([Vector3(-0.1,0.01,0.14),Vector3(-0.1043,0.0016,0.2)]);
{ METHOD .Coord }
IndexedLineSet371.Coord := Coordinate372;
{ METHOD .Geometry }
Shape369.Geometry := IndexedLineSet371;
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Shape369);
Transform373 := TTransformNode.Create;
Transform373.Translation := Vector3(-0.115,0.04,0.13);
{ METHOD .FdChildren.Add }
Transform373.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform373);
Transform375 := TTransformNode.Create;
Transform375.Translation := Vector3(-0.125,0,0.12);
{ METHOD .FdChildren.Add }
Transform375.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform375);
Transform377 := TTransformNode.Create;
Transform377.Translation := Vector3(-0.165,0,0.12);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart21;
begin

{ METHOD .FdChildren.Add }
Transform377.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform377);
Transform379 := TTransformNode.Create;
Transform379.Translation := Vector3(-0.087,0,0.122);
{ METHOD .FdChildren.Add }
Transform379.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform379);
Transform381 := TTransformNode.Create;
Transform381.Translation := Vector3(-0.09,0.012,0.188);
{ METHOD .FdChildren.Add }
Transform381.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform381);
Transform383 := TTransformNode.Create;
Transform383.Translation := Vector3(-0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
Transform383.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform383);
Transform385 := TTransformNode.Create;
Transform385.Translation := Vector3(-0.128,0.011,0.185);
{ METHOD .FdChildren.Add }
Transform385.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform385);
Transform387 := TTransformNode.Create;
Transform387.Translation := Vector3(-0.142,0.011,0.178);
{ METHOD .FdChildren.Add }
Transform387.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform387);
Transform389 := TTransformNode.Create;
Transform389.Translation := Vector3(-0.154,0.01,0.168);
{ METHOD .FdChildren.Add }
Transform389.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(Transform389);
HAnimSite391 := THAnimSiteNode.Create;
HAnimSite391.Translation := Vector3(-0.165,0.01,0.12);
{ METHOD .FdChildren.Add }
HAnimSite391.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(HAnimSite391);
HAnimSite393 := THAnimSiteNode.Create;
HAnimSite393.Translation := Vector3(-0.11,0.011,0.19);
{ METHOD .FdChildren.Add }
HAnimSite393.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment366.FdChildren.Add(HAnimSite393);
{ METHOD .FdChildren.Add }
HAnimJoint365.FdChildren.Add(HAnimSegment366);
{ METHOD .FdChildren.Add }
HAnimJoint347.FdChildren.Add(HAnimJoint365);
{ METHOD .FdChildren.Add }
HAnimJoint333.FdChildren.Add(HAnimJoint347);
{ METHOD .FdChildren.Add }
HAnimJoint313.FdChildren.Add(HAnimJoint333);
{ METHOD .FdChildren.Add }
HAnimJoint285.FdChildren.Add(HAnimJoint313);
{ METHOD .FdChildren.Add }
HAnimJoint259.FdChildren.Add(HAnimJoint285);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart22;
begin

{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimJoint259);
{ METHOD .FdChildren.Add }
HAnimJoint81.FdChildren.Add(HAnimJoint93);
HAnimJoint395 := THAnimJointNode.Create;
HAnimJoint395.Center := Vector3(0,1.045,-0.095);
HAnimJoint395.SetSkinCoordIndex([28,76]);
HAnimJoint395.SetSkinCoordWeight([1,1]);
HAnimSegment396 := THAnimSegmentNode.Create;
Shape397 := TShapeNode.Create;
{ METHOD .Appearance }
Shape397.Appearance := Appearance67;
IndexedLineSet399 := TIndexedLineSetNode.Create;
IndexedLineSet399.SetCoordIndex([0,1,-1]);
Coordinate400 := TCoordinateNode.Create;
Coordinate400.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
IndexedLineSet399.Coord := Coordinate400;
{ METHOD .Geometry }
Shape397.Geometry := IndexedLineSet399;
{ METHOD .FdChildren.Add }
HAnimSegment396.FdChildren.Add(Shape397);
{ METHOD .FdChildren.Add }
HAnimJoint395.FdChildren.Add(HAnimSegment396);
HAnimSegment401 := THAnimSegmentNode.Create;
Shape402 := TShapeNode.Create;
{ METHOD .Appearance }
Shape402.Appearance := Appearance67;
IndexedLineSet404 := TIndexedLineSetNode.Create;
IndexedLineSet404.SetCoordIndex([0,1,-1]);
Coordinate405 := TCoordinateNode.Create;
Coordinate405.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,1.068,-0.085)]);
{ METHOD .Coord }
IndexedLineSet404.Coord := Coordinate405;
{ METHOD .Geometry }
Shape402.Geometry := IndexedLineSet404;
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(Shape402);
HAnimSite406 := THAnimSiteNode.Create;
HAnimSite406.Translation := Vector3(0,1.0915,-0.1091);
{ METHOD .FdChildren.Add }
HAnimSite406.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite406);
HAnimSite408 := THAnimSiteNode.Create;
HAnimSite408.Translation := Vector3(0,1.0723,0.09);
{ METHOD .FdChildren.Add }
HAnimSite408.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment401.FdChildren.Add(HAnimSite408);
{ METHOD .FdChildren.Add }
HAnimJoint395.FdChildren.Add(HAnimSegment401);
HAnimJoint410 := THAnimJointNode.Create;
HAnimJoint410.Center := Vector3(0,1.068,-0.085);
HAnimSegment411 := THAnimSegmentNode.Create;
Shape412 := TShapeNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart23;
begin

{ METHOD .Appearance }
Shape412.Appearance := Appearance67;
IndexedLineSet414 := TIndexedLineSetNode.Create;
IndexedLineSet414.SetCoordIndex([0,1,-1]);
Coordinate415 := TCoordinateNode.Create;
Coordinate415.SetPoint([Vector3(0,1.068,-0.085),Vector3(0,1.092,-0.0725)]);
{ METHOD .Coord }
IndexedLineSet414.Coord := Coordinate415;
{ METHOD .Geometry }
Shape412.Geometry := IndexedLineSet414;
{ METHOD .FdChildren.Add }
HAnimSegment411.FdChildren.Add(Shape412);
Transform416 := TTransformNode.Create;
Transform416.Translation := Vector3(0,1.068,-0.085);
{ METHOD .FdChildren.Add }
Transform416.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment411.FdChildren.Add(Transform416);
{ METHOD .FdChildren.Add }
HAnimJoint410.FdChildren.Add(HAnimSegment411);
HAnimJoint418 := THAnimJointNode.Create;
HAnimJoint418.Center := Vector3(0,1.092,-0.0725);
HAnimSegment419 := THAnimSegmentNode.Create;
Shape420 := TShapeNode.Create;
{ METHOD .Appearance }
Shape420.Appearance := Appearance67;
IndexedLineSet422 := TIndexedLineSetNode.Create;
IndexedLineSet422.SetCoordIndex([0,1,-1]);
Coordinate423 := TCoordinateNode.Create;
Coordinate423.SetPoint([Vector3(0,1.092,-0.0725),Vector3(0,1.12,-0.065)]);
{ METHOD .Coord }
IndexedLineSet422.Coord := Coordinate423;
{ METHOD .Geometry }
Shape420.Geometry := IndexedLineSet422;
{ METHOD .FdChildren.Add }
HAnimSegment419.FdChildren.Add(Shape420);
Transform424 := TTransformNode.Create;
Transform424.Translation := Vector3(0,1.092,-0.0725);
{ METHOD .FdChildren.Add }
Transform424.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment419.FdChildren.Add(Transform424);
{ METHOD .FdChildren.Add }
HAnimJoint418.FdChildren.Add(HAnimSegment419);
HAnimJoint426 := THAnimJointNode.Create;
HAnimJoint426.Center := Vector3(0,1.12,-0.065);
HAnimJoint426.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint426.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment427 := THAnimSegmentNode.Create;
Shape428 := TShapeNode.Create;
{ METHOD .Appearance }
Shape428.Appearance := Appearance67;
IndexedLineSet430 := TIndexedLineSetNode.Create;
IndexedLineSet430.SetCoordIndex([0,1,-1]);
Coordinate431 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart24;
begin

Coordinate431.SetPoint([Vector3(0,1.12,-0.065),Vector3(0,1.1459,-0.0625)]);
{ METHOD .Coord }
IndexedLineSet430.Coord := Coordinate431;
{ METHOD .Geometry }
Shape428.Geometry := IndexedLineSet430;
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Shape428);
Transform432 := TTransformNode.Create;
Transform432.Translation := Vector3(0,1.12,-0.065);
{ METHOD .FdChildren.Add }
Transform432.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform432);
Transform434 := TTransformNode.Create;
Transform434.Translation := Vector3(-0.087,1.19,-0.09);
{ METHOD .FdChildren.Add }
Transform434.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform434);
Transform436 := TTransformNode.Create;
Transform436.Translation := Vector3(0.087,1.19,-0.09);
{ METHOD .FdChildren.Add }
Transform436.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform436);
Transform438 := TTransformNode.Create;
Transform438.Translation := Vector3(0.172,1.32,-0.03);
{ METHOD .FdChildren.Add }
Transform438.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform438);
Transform440 := TTransformNode.Create;
Transform440.Translation := Vector3(-0.172,1.32,-0.03);
{ METHOD .FdChildren.Add }
Transform440.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform440);
Transform442 := TTransformNode.Create;
Transform442.Translation := Vector3(0.15,1.23,-0.015);
{ METHOD .FdChildren.Add }
Transform442.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform442);
Transform444 := TTransformNode.Create;
Transform444.Translation := Vector3(-0.15,1.23,-0.015);
{ METHOD .FdChildren.Add }
Transform444.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(Transform444);
HAnimSite446 := THAnimSiteNode.Create;
HAnimSite446.Translation := Vector3(-0.087,1.19,0.09);
{ METHOD .FdChildren.Add }
HAnimSite446.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(HAnimSite446);
HAnimSite448 := THAnimSiteNode.Create;
HAnimSite448.Translation := Vector3(0.087,1.19,0.09);
{ METHOD .FdChildren.Add }
HAnimSite448.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(HAnimSite448);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart25;
begin

HAnimSite450 := THAnimSiteNode.Create;
HAnimSite450.Translation := Vector3(0,1.1908,-0.1113);
{ METHOD .FdChildren.Add }
HAnimSite450.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment427.FdChildren.Add(HAnimSite450);
{ METHOD .FdChildren.Add }
HAnimJoint426.FdChildren.Add(HAnimSegment427);
HAnimJoint452 := THAnimJointNode.Create;
HAnimJoint452.Center := Vector3(0,1.1459,-0.0625);
HAnimSegment453 := THAnimSegmentNode.Create;
Shape454 := TShapeNode.Create;
{ METHOD .Appearance }
Shape454.Appearance := Appearance67;
IndexedLineSet456 := TIndexedLineSetNode.Create;
IndexedLineSet456.SetCoordIndex([0,1,-1]);
Coordinate457 := TCoordinateNode.Create;
Coordinate457.SetPoint([Vector3(0,1.1459,-0.0625),Vector3(0,1.179,-0.068)]);
{ METHOD .Coord }
IndexedLineSet456.Coord := Coordinate457;
{ METHOD .Geometry }
Shape454.Geometry := IndexedLineSet456;
{ METHOD .FdChildren.Add }
HAnimSegment453.FdChildren.Add(Shape454);
Transform458 := TTransformNode.Create;
Transform458.Translation := Vector3(0,1.1459,-0.0625);
{ METHOD .FdChildren.Add }
Transform458.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment453.FdChildren.Add(Transform458);
{ METHOD .FdChildren.Add }
HAnimJoint452.FdChildren.Add(HAnimSegment453);
HAnimJoint460 := THAnimJointNode.Create;
HAnimJoint460.Center := Vector3(0,1.179,-0.068);
HAnimSegment461 := THAnimSegmentNode.Create;
Shape462 := TShapeNode.Create;
{ METHOD .Appearance }
Shape462.Appearance := Appearance67;
IndexedLineSet464 := TIndexedLineSetNode.Create;
IndexedLineSet464.SetCoordIndex([0,1,-1]);
Coordinate465 := TCoordinateNode.Create;
Coordinate465.SetPoint([Vector3(0,1.179,-0.068),Vector3(0,1.242,-0.09)]);
{ METHOD .Coord }
IndexedLineSet464.Coord := Coordinate465;
{ METHOD .Geometry }
Shape462.Geometry := IndexedLineSet464;
{ METHOD .FdChildren.Add }
HAnimSegment461.FdChildren.Add(Shape462);
Transform466 := TTransformNode.Create;
Transform466.Translation := Vector3(0,1.179,-0.068);
{ METHOD .FdChildren.Add }
Transform466.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment461.FdChildren.Add(Transform466);
{ METHOD .FdChildren.Add }
HAnimJoint460.FdChildren.Add(HAnimSegment461);
HAnimJoint468 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart26;
begin

HAnimJoint468.Center := Vector3(0,1.2679,-0.081);
HAnimSegment469 := THAnimSegmentNode.Create;
Shape470 := TShapeNode.Create;
{ METHOD .Appearance }
Shape470.Appearance := Appearance67;
IndexedLineSet472 := TIndexedLineSetNode.Create;
IndexedLineSet472.SetCoordIndex([0,1,-1]);
Coordinate473 := TCoordinateNode.Create;
Coordinate473.SetPoint([Vector3(0,1.2145,-0.0755),Vector3(0,1.242,-0.09)]);
{ METHOD .Coord }
IndexedLineSet472.Coord := Coordinate473;
{ METHOD .Geometry }
Shape470.Geometry := IndexedLineSet472;
{ METHOD .FdChildren.Add }
HAnimSegment469.FdChildren.Add(Shape470);
Transform474 := TTransformNode.Create;
Transform474.Translation := Vector3(0,1.2145,-0.0755);
{ METHOD .FdChildren.Add }
Transform474.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment469.FdChildren.Add(Transform474);
{ METHOD .FdChildren.Add }
HAnimJoint468.FdChildren.Add(HAnimSegment469);
HAnimJoint476 := THAnimJointNode.Create;
HAnimJoint476.Center := Vector3(0,1.242,-0.09);
HAnimJoint476.SetSkinCoordIndex([15]);
HAnimJoint476.SetSkinCoordWeight([1]);
HAnimSegment477 := THAnimSegmentNode.Create;
Shape478 := TShapeNode.Create;
{ METHOD .Appearance }
Shape478.Appearance := Appearance67;
IndexedLineSet480 := TIndexedLineSetNode.Create;
IndexedLineSet480.SetCoordIndex([0,1,-1]);
Coordinate481 := TCoordinateNode.Create;
Coordinate481.SetPoint([Vector3(0,1.242,-0.09),Vector3(0,1.268,-0.1)]);
{ METHOD .Coord }
IndexedLineSet480.Coord := Coordinate481;
{ METHOD .Geometry }
Shape478.Geometry := IndexedLineSet480;
{ METHOD .FdChildren.Add }
HAnimSegment477.FdChildren.Add(Shape478);
Transform482 := TTransformNode.Create;
Transform482.Translation := Vector3(0,1.242,-0.09);
{ METHOD .FdChildren.Add }
Transform482.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment477.FdChildren.Add(Transform482);
HAnimSite484 := THAnimSiteNode.Create;
HAnimSite484.Translation := Vector3(0,1.25,0.113);
{ METHOD .FdChildren.Add }
HAnimSite484.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment477.FdChildren.Add(HAnimSite484);
{ METHOD .FdChildren.Add }
HAnimJoint476.FdChildren.Add(HAnimSegment477);
HAnimJoint486 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart27;
begin

HAnimJoint486.Center := Vector3(0,1.268,-0.1);
HAnimJoint486.SetSkinCoordIndex([13,14]);
HAnimJoint486.SetSkinCoordWeight([1,1]);
HAnimSegment487 := THAnimSegmentNode.Create;
Shape488 := TShapeNode.Create;
{ METHOD .Appearance }
Shape488.Appearance := Appearance67;
IndexedLineSet490 := TIndexedLineSetNode.Create;
IndexedLineSet490.SetCoordIndex([0,1,-1]);
Coordinate491 := TCoordinateNode.Create;
Coordinate491.SetPoint([Vector3(0,1.268,-0.1),Vector3(0,1.294,-0.11)]);
{ METHOD .Coord }
IndexedLineSet490.Coord := Coordinate491;
{ METHOD .Geometry }
Shape488.Geometry := IndexedLineSet490;
{ METHOD .FdChildren.Add }
HAnimSegment487.FdChildren.Add(Shape488);
Transform492 := TTransformNode.Create;
Transform492.Translation := Vector3(0,1.268,-0.1);
{ METHOD .FdChildren.Add }
Transform492.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment487.FdChildren.Add(Transform492);
HAnimSite494 := THAnimSiteNode.Create;
HAnimSite494.Translation := Vector3(-0.1135,1.318,0.095);
{ METHOD .FdChildren.Add }
HAnimSite494.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment487.FdChildren.Add(HAnimSite494);
HAnimSite496 := THAnimSiteNode.Create;
HAnimSite496.Translation := Vector3(0.1135,1.318,0.095);
{ METHOD .FdChildren.Add }
HAnimSite496.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment487.FdChildren.Add(HAnimSite496);
{ METHOD .FdChildren.Add }
HAnimJoint486.FdChildren.Add(HAnimSegment487);
HAnimJoint498 := THAnimJointNode.Create;
HAnimJoint498.Center := Vector3(0,1.294,-0.11);
HAnimSegment499 := THAnimSegmentNode.Create;
Shape500 := TShapeNode.Create;
{ METHOD .Appearance }
Shape500.Appearance := Appearance67;
IndexedLineSet502 := TIndexedLineSetNode.Create;
IndexedLineSet502.SetCoordIndex([0,1,-1]);
Coordinate503 := TCoordinateNode.Create;
Coordinate503.SetPoint([Vector3(0,1.294,-0.11),Vector3(0,1.352,-0.12)]);
{ METHOD .Coord }
IndexedLineSet502.Coord := Coordinate503;
{ METHOD .Geometry }
Shape500.Geometry := IndexedLineSet502;
{ METHOD .FdChildren.Add }
HAnimSegment499.FdChildren.Add(Shape500);
Transform504 := TTransformNode.Create;
Transform504.Translation := Vector3(0,1.294,-0.11);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart28;
begin

{ METHOD .FdChildren.Add }
Transform504.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment499.FdChildren.Add(Transform504);
{ METHOD .FdChildren.Add }
HAnimJoint498.FdChildren.Add(HAnimSegment499);
HAnimJoint506 := THAnimJointNode.Create;
HAnimJoint506.Center := Vector3(0,1.323,-0.1155);
HAnimSegment507 := THAnimSegmentNode.Create;
Shape508 := TShapeNode.Create;
{ METHOD .Appearance }
Shape508.Appearance := Appearance67;
IndexedLineSet510 := TIndexedLineSetNode.Create;
IndexedLineSet510.SetCoordIndex([0,1,-1]);
Coordinate511 := TCoordinateNode.Create;
Coordinate511.SetPoint([Vector3(0,1.352,-0.12),Vector3(0,1.381,-0.1235)]);
{ METHOD .Coord }
IndexedLineSet510.Coord := Coordinate511;
{ METHOD .Geometry }
Shape508.Geometry := IndexedLineSet510;
{ METHOD .FdChildren.Add }
HAnimSegment507.FdChildren.Add(Shape508);
Transform512 := TTransformNode.Create;
Transform512.Translation := Vector3(0,1.323,-0.1155);
{ METHOD .FdChildren.Add }
Transform512.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment507.FdChildren.Add(Transform512);
{ METHOD .FdChildren.Add }
HAnimJoint506.FdChildren.Add(HAnimSegment507);
HAnimJoint514 := THAnimJointNode.Create;
HAnimJoint514.Center := Vector3(0,1.352,-0.12);
HAnimSegment515 := THAnimSegmentNode.Create;
Shape516 := TShapeNode.Create;
{ METHOD .Appearance }
Shape516.Appearance := Appearance67;
IndexedLineSet518 := TIndexedLineSetNode.Create;
IndexedLineSet518.SetCoordIndex([0,1,-1]);
Coordinate519 := TCoordinateNode.Create;
Coordinate519.SetPoint([Vector3(0,1.381,-0.1235),Vector3(0,1.41,-0.1235)]);
{ METHOD .Coord }
IndexedLineSet518.Coord := Coordinate519;
{ METHOD .Geometry }
Shape516.Geometry := IndexedLineSet518;
{ METHOD .FdChildren.Add }
HAnimSegment515.FdChildren.Add(Shape516);
Transform520 := TTransformNode.Create;
Transform520.Translation := Vector3(0,1.352,-0.12);
{ METHOD .FdChildren.Add }
Transform520.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment515.FdChildren.Add(Transform520);
{ METHOD .FdChildren.Add }
HAnimJoint514.FdChildren.Add(HAnimSegment515);
HAnimJoint522 := THAnimJointNode.Create;
HAnimJoint522.Center := Vector3(0,1.381,-0.1235);
HAnimSegment523 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart29;
begin

Shape524 := TShapeNode.Create;
{ METHOD .Appearance }
Shape524.Appearance := Appearance67;
IndexedLineSet526 := TIndexedLineSetNode.Create;
IndexedLineSet526.SetCoordIndex([0,1,-1]);
Coordinate527 := TCoordinateNode.Create;
Coordinate527.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ METHOD .Coord }
IndexedLineSet526.Coord := Coordinate527;
{ METHOD .Geometry }
Shape524.Geometry := IndexedLineSet526;
{ METHOD .FdChildren.Add }
HAnimSegment523.FdChildren.Add(Shape524);
Transform528 := TTransformNode.Create;
Transform528.Translation := Vector3(0,1.381,-0.1235);
{ METHOD .FdChildren.Add }
Transform528.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment523.FdChildren.Add(Transform528);
{ METHOD .FdChildren.Add }
HAnimJoint522.FdChildren.Add(HAnimSegment523);
HAnimJoint530 := THAnimJointNode.Create;
HAnimJoint530.Center := Vector3(0,1.41,-0.1235);
HAnimJoint530.SetSkinCoordIndex([81]);
HAnimJoint530.SetSkinCoordWeight([1]);
HAnimSegment531 := THAnimSegmentNode.Create;
Shape532 := TShapeNode.Create;
{ METHOD .Appearance }
Shape532.Appearance := Appearance67;
IndexedLineSet534 := TIndexedLineSetNode.Create;
IndexedLineSet534.SetCoordIndex([0,1,-1]);
Coordinate535 := TCoordinateNode.Create;
Coordinate535.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ METHOD .Coord }
IndexedLineSet534.Coord := Coordinate535;
{ METHOD .Geometry }
Shape532.Geometry := IndexedLineSet534;
{ METHOD .FdChildren.Add }
HAnimSegment531.FdChildren.Add(Shape532);
Transform536 := TTransformNode.Create;
Transform536.Translation := Vector3(0,1.41,-0.1235);
{ METHOD .FdChildren.Add }
Transform536.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment531.FdChildren.Add(Transform536);
Transform538 := TTransformNode.Create;
Transform538.Translation := Vector3(0,1.41,-0.145);
{ METHOD .FdChildren.Add }
Transform538.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment531.FdChildren.Add(Transform538);
{ METHOD .FdChildren.Add }
HAnimJoint530.FdChildren.Add(HAnimSegment531);
HAnimJoint540 := THAnimJointNode.Create;
HAnimJoint540.Center := Vector3(0,1.438,-0.12);
HAnimSegment541 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart30;
begin

Shape542 := TShapeNode.Create;
{ METHOD .Appearance }
Shape542.Appearance := Appearance67;
IndexedLineSet544 := TIndexedLineSetNode.Create;
IndexedLineSet544.SetCoordIndex([0,1,-1]);
Coordinate545 := TCoordinateNode.Create;
Coordinate545.SetPoint([Vector3(0,1.438,-0.12),Vector3(0,1.468,-0.105)]);
{ METHOD .Coord }
IndexedLineSet544.Coord := Coordinate545;
{ METHOD .Geometry }
Shape542.Geometry := IndexedLineSet544;
{ METHOD .FdChildren.Add }
HAnimSegment541.FdChildren.Add(Shape542);
Transform546 := TTransformNode.Create;
Transform546.Translation := Vector3(0,1.438,-0.12);
{ METHOD .FdChildren.Add }
Transform546.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment541.FdChildren.Add(Transform546);
{ METHOD .FdChildren.Add }
HAnimJoint540.FdChildren.Add(HAnimSegment541);
HAnimJoint548 := THAnimJointNode.Create;
HAnimJoint548.Center := Vector3(0,1.468,-0.105);
HAnimSegment549 := THAnimSegmentNode.Create;
Shape550 := TShapeNode.Create;
{ METHOD .Appearance }
Shape550.Appearance := Appearance67;
IndexedLineSet552 := TIndexedLineSetNode.Create;
IndexedLineSet552.SetCoordIndex([0,1,-1]);
Coordinate553 := TCoordinateNode.Create;
Coordinate553.SetPoint([Vector3(0,1.468,-0.105),Vector3(0,1.497,-0.09)]);
{ METHOD .Coord }
IndexedLineSet552.Coord := Coordinate553;
{ METHOD .Geometry }
Shape550.Geometry := IndexedLineSet552;
{ METHOD .FdChildren.Add }
HAnimSegment549.FdChildren.Add(Shape550);
Transform554 := TTransformNode.Create;
Transform554.Translation := Vector3(0,1.468,-0.105);
{ METHOD .FdChildren.Add }
Transform554.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment549.FdChildren.Add(Transform554);
{ METHOD .FdChildren.Add }
HAnimJoint548.FdChildren.Add(HAnimSegment549);
HAnimJoint556 := THAnimJointNode.Create;
HAnimJoint556.Center := Vector3(0,1.497,-0.09);
HAnimJoint556.SetSkinCoordIndex([11,24]);
HAnimJoint556.SetSkinCoordWeight([1,1]);
HAnimSegment557 := THAnimSegmentNode.Create;
Shape558 := TShapeNode.Create;
{ METHOD .Appearance }
Shape558.Appearance := Appearance67;
IndexedLineSet560 := TIndexedLineSetNode.Create;
IndexedLineSet560.SetCoordIndex([0,1,-1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart31;
begin

Coordinate561 := TCoordinateNode.Create;
Coordinate561.SetPoint([Vector3(0,1.497,-0.09),Vector3(0,1.525,-0.072)]);
{ METHOD .Coord }
IndexedLineSet560.Coord := Coordinate561;
{ METHOD .Geometry }
Shape558.Geometry := IndexedLineSet560;
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(Shape558);
Transform562 := TTransformNode.Create;
Transform562.Translation := Vector3(0,1.497,-0.09);
{ METHOD .FdChildren.Add }
Transform562.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(Transform562);
HAnimSite564 := THAnimSiteNode.Create;
HAnimSite564.Translation := Vector3(0,1.44,0.03);
{ METHOD .FdChildren.Add }
HAnimSite564.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(HAnimSite564);
HAnimSite566 := THAnimSiteNode.Create;
HAnimSite566.Translation := Vector3(0,1.53,-0.084);
{ METHOD .FdChildren.Add }
HAnimSite566.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(HAnimSite566);
{ METHOD .FdChildren.Add }
HAnimJoint556.FdChildren.Add(HAnimSegment557);
HAnimJoint568 := THAnimJointNode.Create;
HAnimJoint568.Center := Vector3(0,1.525,-0.072);
HAnimJoint568.SetSkinCoordIndex([74,75]);
HAnimJoint568.SetSkinCoordWeight([1,1]);
HAnimSegment569 := THAnimSegmentNode.Create;
Shape570 := TShapeNode.Create;
{ METHOD .Appearance }
Shape570.Appearance := Appearance67;
IndexedLineSet572 := TIndexedLineSetNode.Create;
IndexedLineSet572.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate573 := TCoordinateNode.Create;
Coordinate573.SetPoint([Vector3(0,1.525,-0.072),Vector3(0.082,1.4488,-0.0353),Vector3(-0.03,1.46,0.02),Vector3(0,1.54,-0.05)]);
{ METHOD .Coord }
IndexedLineSet572.Coord := Coordinate573;
{ METHOD .Geometry }
Shape570.Geometry := IndexedLineSet572;
{ METHOD .FdChildren.Add }
HAnimSegment569.FdChildren.Add(Shape570);
Transform574 := TTransformNode.Create;
Transform574.Translation := Vector3(0,1.525,-0.072);
{ METHOD .FdChildren.Add }
Transform574.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment569.FdChildren.Add(Transform574);
HAnimSite576 := THAnimSiteNode.Create;
HAnimSite576.Translation := Vector3(-0.0646,1.5149,-0.0385);
{ METHOD .FdChildren.Add }
HAnimSite576.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment569.FdChildren.Add(HAnimSite576);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart32;
begin

HAnimSite578 := THAnimSiteNode.Create;
HAnimSite578.Translation := Vector3(0.0646,1.5149,-0.0385);
{ METHOD .FdChildren.Add }
HAnimSite578.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment569.FdChildren.Add(HAnimSite578);
{ METHOD .FdChildren.Add }
HAnimJoint568.FdChildren.Add(HAnimSegment569);
HAnimJoint580 := THAnimJointNode.Create;
HAnimJoint580.Center := Vector3(0,1.54,-0.05);
HAnimSegment581 := THAnimSegmentNode.Create;
Shape582 := TShapeNode.Create;
{ METHOD .Appearance }
Shape582.Appearance := Appearance67;
IndexedLineSet584 := TIndexedLineSetNode.Create;
IndexedLineSet584.SetCoordIndex([0,1,-1]);
Coordinate585 := TCoordinateNode.Create;
Coordinate585.SetPoint([Vector3(0,1.54,-0.05),Vector3(0,1.5675,-0.0256)]);
{ METHOD .Coord }
IndexedLineSet584.Coord := Coordinate585;
{ METHOD .Geometry }
Shape582.Geometry := IndexedLineSet584;
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(Shape582);
Transform586 := TTransformNode.Create;
Transform586.Translation := Vector3(0,1.54,-0.05);
{ METHOD .FdChildren.Add }
Transform586.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(Transform586);
{ METHOD .FdChildren.Add }
HAnimJoint580.FdChildren.Add(HAnimSegment581);
HAnimJoint588 := THAnimJointNode.Create;
HAnimJoint588.Center := Vector3(0,1.552,-0.035);
HAnimSegment589 := THAnimSegmentNode.Create;
Transform590 := TTransformNode.Create;
Transform590.Translation := Vector3(0,1.552,-0.035);
{ METHOD .FdChildren.Add }
Transform590.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment589.FdChildren.Add(Transform590);
Shape592 := TShapeNode.Create;
{ METHOD .Appearance }
Shape592.Appearance := Appearance67;
IndexedLineSet594 := TIndexedLineSetNode.Create;
IndexedLineSet594.SetCoordIndex([0,1,-1]);
Coordinate595 := TCoordinateNode.Create;
Coordinate595.SetPoint([Vector3(0,1.5675,-0.0256),Vector3(0,1.5823,-0.0185)]);
{ METHOD .Coord }
IndexedLineSet594.Coord := Coordinate595;
{ METHOD .Geometry }
Shape592.Geometry := IndexedLineSet594;
{ METHOD .FdChildren.Add }
HAnimSegment589.FdChildren.Add(Shape592);
{ METHOD .FdChildren.Add }
HAnimJoint588.FdChildren.Add(HAnimSegment589);
HAnimJoint596 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart33;
begin

HAnimJoint596.Center := Vector3(0,1.5675,-0.0256);
HAnimSegment597 := THAnimSegmentNode.Create;
Shape598 := TShapeNode.Create;
{ METHOD .Appearance }
Shape598.Appearance := Appearance67;
IndexedLineSet600 := TIndexedLineSetNode.Create;
IndexedLineSet600.SetCoordIndex([0,1,-1]);
Coordinate601 := TCoordinateNode.Create;
Coordinate601.SetPoint([Vector3(0,1.5823,-0.0185),Vector3(0,1.595,-0.0175)]);
{ METHOD .Coord }
IndexedLineSet600.Coord := Coordinate601;
{ METHOD .Geometry }
Shape598.Geometry := IndexedLineSet600;
{ METHOD .FdChildren.Add }
HAnimSegment597.FdChildren.Add(Shape598);
Transform602 := TTransformNode.Create;
Transform602.Translation := Vector3(0,1.5675,-0.0256);
{ METHOD .FdChildren.Add }
Transform602.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment597.FdChildren.Add(Transform602);
{ METHOD .FdChildren.Add }
HAnimJoint596.FdChildren.Add(HAnimSegment597);
HAnimJoint604 := THAnimJointNode.Create;
HAnimJoint604.Center := Vector3(0,1.5823,-0.0185);
HAnimSegment605 := THAnimSegmentNode.Create;
Shape606 := TShapeNode.Create;
{ METHOD .Appearance }
Shape606.Appearance := Appearance67;
IndexedLineSet608 := TIndexedLineSetNode.Create;
IndexedLineSet608.SetCoordIndex([0,1,-1]);
Coordinate609 := TCoordinateNode.Create;
Coordinate609.SetPoint([Vector3(0,1.595,-0.0175),Vector3(0,1.61,-0.015)]);
{ METHOD .Coord }
IndexedLineSet608.Coord := Coordinate609;
{ METHOD .Geometry }
Shape606.Geometry := IndexedLineSet608;
{ METHOD .FdChildren.Add }
HAnimSegment605.FdChildren.Add(Shape606);
Transform610 := TTransformNode.Create;
Transform610.Translation := Vector3(0,1.5823,-0.0185);
{ METHOD .FdChildren.Add }
Transform610.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment605.FdChildren.Add(Transform610);
{ METHOD .FdChildren.Add }
HAnimJoint604.FdChildren.Add(HAnimSegment605);
HAnimJoint612 := THAnimJointNode.Create;
HAnimJoint612.Center := Vector3(0,1.595,-0.0175);
HAnimSegment613 := THAnimSegmentNode.Create;
Shape614 := TShapeNode.Create;
{ METHOD .Appearance }
Shape614.Appearance := Appearance67;
IndexedLineSet616 := TIndexedLineSetNode.Create;
IndexedLineSet616.SetCoordIndex([0,1,-1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart34;
begin

Coordinate617 := TCoordinateNode.Create;
Coordinate617.SetPoint([Vector3(0,1.61,-0.015),Vector3(0,1.6144,-0.0034)]);
{ METHOD .Coord }
IndexedLineSet616.Coord := Coordinate617;
{ METHOD .Geometry }
Shape614.Geometry := IndexedLineSet616;
{ METHOD .FdChildren.Add }
HAnimSegment613.FdChildren.Add(Shape614);
Transform618 := TTransformNode.Create;
Transform618.Translation := Vector3(0,1.595,-0.0175);
{ METHOD .FdChildren.Add }
Transform618.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment613.FdChildren.Add(Transform618);
{ METHOD .FdChildren.Add }
HAnimJoint612.FdChildren.Add(HAnimSegment613);
HAnimJoint620 := THAnimJointNode.Create;
HAnimJoint620.Center := Vector3(0,1.61,-0.015);
HAnimSegment621 := THAnimSegmentNode.Create;
Shape622 := TShapeNode.Create;
{ METHOD .Appearance }
Shape622.Appearance := Appearance67;
IndexedLineSet624 := TIndexedLineSetNode.Create;
IndexedLineSet624.SetCoordIndex([0,1,-1]);
Coordinate625 := TCoordinateNode.Create;
Coordinate625.SetPoint([Vector3(0,1.6144,-0.0034),Vector3(0,1.63,-0.01)]);
{ METHOD .Coord }
IndexedLineSet624.Coord := Coordinate625;
{ METHOD .Geometry }
Shape622.Geometry := IndexedLineSet624;
{ METHOD .FdChildren.Add }
HAnimSegment621.FdChildren.Add(Shape622);
Transform626 := TTransformNode.Create;
Transform626.Translation := Vector3(0,1.61,-0.015);
{ METHOD .FdChildren.Add }
Transform626.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment621.FdChildren.Add(Transform626);
{ METHOD .FdChildren.Add }
HAnimJoint620.FdChildren.Add(HAnimSegment621);
HAnimJoint628 := THAnimJointNode.Create;
HAnimJoint628.Center := Vector3(0,1.63,-0.01);
HAnimJoint628.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint628.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimSegment629 := THAnimSegmentNode.Create;
Shape630 := TShapeNode.Create;
{ METHOD .Appearance }
Shape630.Appearance := Appearance67;
IndexedLineSet632 := TIndexedLineSetNode.Create;
IndexedLineSet632.SetCoordIndex([0,1,-1,0,2,-1]);
Coordinate633 := TCoordinateNode.Create;
Coordinate633.SetPoint([Vector3(0,1.63,-0.01),Vector3(0.034,1.659,0.06),Vector3(-0.034,1.655,0.065)]);
{ METHOD .Coord }
IndexedLineSet632.Coord := Coordinate633;
{ METHOD .Geometry }
Shape630.Geometry := IndexedLineSet632;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart35;
begin

{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(Shape630);
Transform634 := TTransformNode.Create;
Transform634.Translation := Vector3(0,1.63,-0.01);
{ METHOD .FdChildren.Add }
Transform634.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(Transform634);
HAnimSite636 := THAnimSiteNode.Create;
HAnimSite636.Translation := Vector3(0,1.77,0);
{ METHOD .FdChildren.Add }
HAnimSite636.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite636);
HAnimSite638 := THAnimSiteNode.Create;
HAnimSite638.Translation := Vector3(0,1.665,0.09);
{ METHOD .FdChildren.Add }
HAnimSite638.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite638);
HAnimSite640 := THAnimSiteNode.Create;
HAnimSite640.Translation := Vector3(-0.033,1.62,0.087);
{ METHOD .FdChildren.Add }
HAnimSite640.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite640);
HAnimSite642 := THAnimSiteNode.Create;
HAnimSite642.Translation := Vector3(0.033,1.62,0.087);
{ METHOD .FdChildren.Add }
HAnimSite642.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite642);
HAnimSite644 := THAnimSiteNode.Create;
HAnimSite644.Translation := Vector3(0,1.55,0.097);
{ METHOD .FdChildren.Add }
HAnimSite644.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite644);
HAnimSite646 := THAnimSiteNode.Create;
HAnimSite646.Translation := Vector3(-0.077,1.64,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite646.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite646);
HAnimSite648 := THAnimSiteNode.Create;
HAnimSite648.Translation := Vector3(-0.052,1.58,0.015);
{ METHOD .FdChildren.Add }
HAnimSite648.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite648);
HAnimSite650 := THAnimSiteNode.Create;
HAnimSite650.Translation := Vector3(0.077,1.64,-0.01);
{ METHOD .FdChildren.Add }
HAnimSite650.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite650);
HAnimSite652 := THAnimSiteNode.Create;
HAnimSite652.Translation := Vector3(0.0631,1.58,0.015);
{ METHOD .FdChildren.Add }
HAnimSite652.FdChildren.Add(Shape60);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart36;
begin

{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite652);
HAnimSite654 := THAnimSiteNode.Create;
HAnimSite654.Translation := Vector3(0,1.625,-0.0925);
{ METHOD .FdChildren.Add }
HAnimSite654.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(HAnimSite654);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimSegment629);
HAnimJoint656 := THAnimJointNode.Create;
HAnimJoint656.Center := Vector3(0.034,1.659,0.06);
HAnimSegment657 := THAnimSegmentNode.Create;
Shape658 := TShapeNode.Create;
{ METHOD .Appearance }
Shape658.Appearance := Appearance67;
IndexedLineSet660 := TIndexedLineSetNode.Create;
IndexedLineSet660.SetCoordIndex([0,1,-1]);
Coordinate661 := TCoordinateNode.Create;
Coordinate661.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ METHOD .Coord }
IndexedLineSet660.Coord := Coordinate661;
{ METHOD .Geometry }
Shape658.Geometry := IndexedLineSet660;
{ METHOD .FdChildren.Add }
HAnimSegment657.FdChildren.Add(Shape658);
Transform662 := TTransformNode.Create;
Transform662.Scale := Vector3(1,1,1.4);
Transform662.Translation := Vector3(0.034,1.655,0.065);
{ METHOD .FdChildren.Add }
Transform662.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment657.FdChildren.Add(Transform662);
{ METHOD .FdChildren.Add }
HAnimJoint656.FdChildren.Add(HAnimSegment657);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimJoint656);
HAnimJoint664 := THAnimJointNode.Create;
HAnimJoint664.Center := Vector3(-0.034,1.659,0.06);
HAnimSegment665 := THAnimSegmentNode.Create;
Shape666 := TShapeNode.Create;
{ METHOD .Appearance }
Shape666.Appearance := Appearance67;
IndexedLineSet668 := TIndexedLineSetNode.Create;
IndexedLineSet668.SetCoordIndex([0,1,-1]);
Coordinate669 := TCoordinateNode.Create;
Coordinate669.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ METHOD .Coord }
IndexedLineSet668.Coord := Coordinate669;
{ METHOD .Geometry }
Shape666.Geometry := IndexedLineSet668;
{ METHOD .FdChildren.Add }
HAnimSegment665.FdChildren.Add(Shape666);
Transform670 := TTransformNode.Create;
Transform670.Scale := Vector3(1,1,1.4);
Transform670.Translation := Vector3(-0.034,1.655,0.065);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart37;
begin

{ METHOD .FdChildren.Add }
Transform670.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment665.FdChildren.Add(Transform670);
{ METHOD .FdChildren.Add }
HAnimJoint664.FdChildren.Add(HAnimSegment665);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimJoint664);
{ METHOD .FdChildren.Add }
HAnimJoint620.FdChildren.Add(HAnimJoint628);
{ METHOD .FdChildren.Add }
HAnimJoint612.FdChildren.Add(HAnimJoint620);
{ METHOD .FdChildren.Add }
HAnimJoint604.FdChildren.Add(HAnimJoint612);
{ METHOD .FdChildren.Add }
HAnimJoint596.FdChildren.Add(HAnimJoint604);
{ METHOD .FdChildren.Add }
HAnimJoint588.FdChildren.Add(HAnimJoint596);
{ METHOD .FdChildren.Add }
HAnimJoint580.FdChildren.Add(HAnimJoint588);
{ METHOD .FdChildren.Add }
HAnimJoint568.FdChildren.Add(HAnimJoint580);
{ METHOD .FdChildren.Add }
HAnimJoint556.FdChildren.Add(HAnimJoint568);
HAnimJoint672 := THAnimJointNode.Create;
HAnimJoint672.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint672.SetSkinCoordIndex([12]);
HAnimJoint672.SetSkinCoordWeight([1]);
HAnimSegment673 := THAnimSegmentNode.Create;
Shape674 := TShapeNode.Create;
{ METHOD .Appearance }
Shape674.Appearance := Appearance67;
IndexedLineSet676 := TIndexedLineSetNode.Create;
IndexedLineSet676.SetCoordIndex([0,1,-1]);
Coordinate677 := TCoordinateNode.Create;
Coordinate677.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ METHOD .Coord }
IndexedLineSet676.Coord := Coordinate677;
{ METHOD .Geometry }
Shape674.Geometry := IndexedLineSet676;
{ METHOD .FdChildren.Add }
HAnimSegment673.FdChildren.Add(Shape674);
Transform678 := TTransformNode.Create;
Transform678.Translation := Vector3(0.082,1.4488,-0.0353);
{ METHOD .FdChildren.Add }
Transform678.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment673.FdChildren.Add(Transform678);
HAnimSite680 := THAnimSiteNode.Create;
HAnimSite680.Translation := Vector3(0.03,1.46,0.035);
{ METHOD .FdChildren.Add }
HAnimSite680.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment673.FdChildren.Add(HAnimSite680);
{ METHOD .FdChildren.Add }
HAnimJoint672.FdChildren.Add(HAnimSegment673);
HAnimJoint682 := THAnimJointNode.Create;
HAnimJoint682.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint682.SetSkinCoordIndex([79]);
HAnimJoint682.SetSkinCoordWeight([1]);
HAnimSegment683 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart38;
begin

Shape684 := TShapeNode.Create;
{ METHOD .Appearance }
Shape684.Appearance := Appearance67;
IndexedLineSet686 := TIndexedLineSetNode.Create;
IndexedLineSet686.SetCoordIndex([0,1,-1]);
Coordinate687 := TCoordinateNode.Create;
Coordinate687.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2,1.44,-0.04)]);
{ METHOD .Coord }
IndexedLineSet686.Coord := Coordinate687;
{ METHOD .Geometry }
Shape684.Geometry := IndexedLineSet686;
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(Shape684);
Transform688 := TTransformNode.Create;
Transform688.Translation := Vector3(0.0962,1.4269,-0.0424);
{ METHOD .FdChildren.Add }
Transform688.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(Transform688);
Transform690 := TTransformNode.Create;
Transform690.Translation := Vector3(0.11,1.427,-0.1375);
{ METHOD .FdChildren.Add }
Transform690.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(Transform690);
HAnimSite692 := THAnimSiteNode.Create;
HAnimSite692.Translation := Vector3(0.175,1.4825,-0.06);
{ METHOD .FdChildren.Add }
HAnimSite692.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(HAnimSite692);
HAnimSite694 := THAnimSiteNode.Create;
HAnimSite694.Translation := Vector3(0.17,1.38,0.007);
{ METHOD .FdChildren.Add }
HAnimSite694.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(HAnimSite694);
HAnimSite696 := THAnimSiteNode.Create;
HAnimSite696.Translation := Vector3(0.16,1.38,-0.125);
{ METHOD .FdChildren.Add }
HAnimSite696.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(HAnimSite696);
{ METHOD .FdChildren.Add }
HAnimJoint682.FdChildren.Add(HAnimSegment683);
HAnimJoint698 := THAnimJointNode.Create;
HAnimJoint698.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint698.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint698.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment699 := THAnimSegmentNode.Create;
Shape700 := TShapeNode.Create;
{ METHOD .Appearance }
Shape700.Appearance := Appearance67;
IndexedLineSet702 := TIndexedLineSetNode.Create;
IndexedLineSet702.SetCoordIndex([0,1,-1]);
Coordinate703 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart39;
begin

Coordinate703.SetPoint([Vector3(0.2029,1.44,-0.0387),Vector3(0.2,1.1388,-0.04)]);
{ METHOD .Coord }
IndexedLineSet702.Coord := Coordinate703;
{ METHOD .Geometry }
Shape700.Geometry := IndexedLineSet702;
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Shape700);
Transform704 := TTransformNode.Create;
Transform704.Translation := Vector3(0.2,1.44,-0.04);
{ METHOD .FdChildren.Add }
Transform704.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform704);
Transform706 := TTransformNode.Create;
Transform706.Translation := Vector3(0.235,1.42,-0.0625);
{ METHOD .FdChildren.Add }
Transform706.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform706);
Transform708 := TTransformNode.Create;
Transform708.Translation := Vector3(0.25,1.27,-0.04);
{ METHOD .FdChildren.Add }
Transform708.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform708);
Transform710 := TTransformNode.Create;
Transform710.Translation := Vector3(0.17,1.27,-0.04);
{ METHOD .FdChildren.Add }
Transform710.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform710);
Transform712 := TTransformNode.Create;
Transform712.Translation := Vector3(0.2,1.27,-0.09);
{ METHOD .FdChildren.Add }
Transform712.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform712);
Transform714 := TTransformNode.Create;
Transform714.Translation := Vector3(0.2,1.27,0.02);
{ METHOD .FdChildren.Add }
Transform714.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(Transform714);
HAnimSite716 := THAnimSiteNode.Create;
HAnimSite716.Translation := Vector3(0.165,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite716.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(HAnimSite716);
HAnimSite718 := THAnimSiteNode.Create;
HAnimSite718.Translation := Vector3(0.23,1.133,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite718.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(HAnimSite718);
HAnimSite720 := THAnimSiteNode.Create;
HAnimSite720.Translation := Vector3(0.244,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite720.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment699.FdChildren.Add(HAnimSite720);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart40;
begin

{ METHOD .FdChildren.Add }
HAnimJoint698.FdChildren.Add(HAnimSegment699);
HAnimJoint722 := THAnimJointNode.Create;
HAnimJoint722.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint722.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint722.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment723 := THAnimSegmentNode.Create;
Shape724 := TShapeNode.Create;
{ METHOD .Appearance }
Shape724.Appearance := Appearance67;
IndexedLineSet726 := TIndexedLineSetNode.Create;
IndexedLineSet726.SetCoordIndex([0,1,-1]);
Coordinate727 := TCoordinateNode.Create;
Coordinate727.SetPoint([Vector3(0.2,1.1388,-0.04),Vector3(0.2,0.87,-0.04)]);
{ METHOD .Coord }
IndexedLineSet726.Coord := Coordinate727;
{ METHOD .Geometry }
Shape724.Geometry := IndexedLineSet726;
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Shape724);
Transform728 := TTransformNode.Create;
Transform728.Translation := Vector3(0.2,1.1388,-0.04);
{ METHOD .FdChildren.Add }
Transform728.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Transform728);
Transform730 := TTransformNode.Create;
Transform730.Translation := Vector3(0.2,1.1388,-0.013);
{ METHOD .FdChildren.Add }
Transform730.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Transform730);
Transform732 := TTransformNode.Create;
Transform732.Translation := Vector3(0.225,1,-0.01);
{ METHOD .FdChildren.Add }
Transform732.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Transform732);
Transform734 := TTransformNode.Create;
Transform734.Translation := Vector3(0.225,1,-0.07);
{ METHOD .FdChildren.Add }
Transform734.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Transform734);
Transform736 := TTransformNode.Create;
Transform736.Translation := Vector3(0.185,1,-0.01);
{ METHOD .FdChildren.Add }
Transform736.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Transform736);
Transform738 := TTransformNode.Create;
Transform738.Translation := Vector3(0.185,1,-0.07);
{ METHOD .FdChildren.Add }
Transform738.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(Transform738);
HAnimSite740 := THAnimSiteNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart41;
begin

HAnimSite740.Translation := Vector3(0.1901,0.8645,-0.0415);
{ METHOD .FdChildren.Add }
HAnimSite740.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(HAnimSite740);
HAnimSite742 := THAnimSiteNode.Create;
HAnimSite742.Translation := Vector3(0.2,1.1388,-0.08);
{ METHOD .FdChildren.Add }
HAnimSite742.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment723.FdChildren.Add(HAnimSite742);
{ METHOD .FdChildren.Add }
HAnimJoint722.FdChildren.Add(HAnimSegment723);
HAnimJoint744 := THAnimJointNode.Create;
HAnimJoint744.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint744.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint744.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment745 := THAnimSegmentNode.Create;
Shape746 := TShapeNode.Create;
{ METHOD .Appearance }
Shape746.Appearance := Appearance67;
IndexedLineSet748 := TIndexedLineSetNode.Create;
IndexedLineSet748.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate749 := TCoordinateNode.Create;
Coordinate749.SetPoint([Vector3(0.2,0.87,-0.04),Vector3(0.1924,0.8472,-0.0534),Vector3(0.1983,0.8024,-0.028),Vector3(0.1987,0.8029,-0.053),Vector3(0.1956,0.8019,-0.0794),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
IndexedLineSet748.Coord := Coordinate749;
{ METHOD .Geometry }
Shape746.Geometry := IndexedLineSet748;
{ METHOD .FdChildren.Add }
HAnimSegment745.FdChildren.Add(Shape746);
Transform750 := TTransformNode.Create;
Transform750.Translation := Vector3(0.2,0.87,-0.04);
{ METHOD .FdChildren.Add }
Transform750.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment745.FdChildren.Add(Transform750);
HAnimSite752 := THAnimSiteNode.Create;
HAnimSite752.Translation := Vector3(0.2009,0.8139,-0.0237);
{ METHOD .FdChildren.Add }
HAnimSite752.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment745.FdChildren.Add(HAnimSite752);
HAnimSite754 := THAnimSiteNode.Create;
HAnimSite754.Translation := Vector3(0.2142,0.8529,-0.0648);
{ METHOD .FdChildren.Add }
HAnimSite754.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment745.FdChildren.Add(HAnimSite754);
HAnimSite756 := THAnimSiteNode.Create;
HAnimSite756.Translation := Vector3(0.1929,0.786,-0.1122);
{ METHOD .FdChildren.Add }
HAnimSite756.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment745.FdChildren.Add(HAnimSite756);
{ METHOD .FdChildren.Add }
HAnimJoint744.FdChildren.Add(HAnimSegment745);
HAnimJoint758 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart42;
begin

HAnimJoint758.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint758.SetSkinCoordIndex([127,128]);
HAnimJoint758.SetSkinCoordWeight([1,1]);
HAnimSegment759 := THAnimSegmentNode.Create;
Shape760 := TShapeNode.Create;
{ METHOD .Appearance }
Shape760.Appearance := Appearance67;
IndexedLineSet762 := TIndexedLineSetNode.Create;
IndexedLineSet762.SetCoordIndex([0,1,-1]);
Coordinate763 := TCoordinateNode.Create;
Coordinate763.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
IndexedLineSet762.Coord := Coordinate763;
{ METHOD .Geometry }
Shape760.Geometry := IndexedLineSet762;
{ METHOD .FdChildren.Add }
HAnimSegment759.FdChildren.Add(Shape760);
Transform764 := TTransformNode.Create;
Transform764.Translation := Vector3(0.1924,0.8472,-0.0534);
{ METHOD .FdChildren.Add }
Transform764.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment759.FdChildren.Add(Transform764);
{ METHOD .FdChildren.Add }
HAnimJoint758.FdChildren.Add(HAnimSegment759);
HAnimJoint766 := THAnimJointNode.Create;
HAnimJoint766.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint766.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint766.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment767 := THAnimSegmentNode.Create;
Shape768 := TShapeNode.Create;
{ METHOD .Appearance }
Shape768.Appearance := Appearance67;
IndexedLineSet770 := TIndexedLineSetNode.Create;
IndexedLineSet770.SetCoordIndex([0,1,-1]);
Coordinate771 := TCoordinateNode.Create;
Coordinate771.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
IndexedLineSet770.Coord := Coordinate771;
{ METHOD .Geometry }
Shape768.Geometry := IndexedLineSet770;
{ METHOD .FdChildren.Add }
HAnimSegment767.FdChildren.Add(Shape768);
Transform772 := TTransformNode.Create;
Transform772.Translation := Vector3(0.1951,0.8226,0.0246);
{ METHOD .FdChildren.Add }
Transform772.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment767.FdChildren.Add(Transform772);
{ METHOD .FdChildren.Add }
HAnimJoint766.FdChildren.Add(HAnimSegment767);
HAnimJoint774 := THAnimJointNode.Create;
HAnimJoint774.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint774.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart43;
begin

HAnimJoint774.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment775 := THAnimSegmentNode.Create;
Shape776 := TShapeNode.Create;
{ METHOD .Appearance }
Shape776.Appearance := Appearance67;
IndexedLineSet778 := TIndexedLineSetNode.Create;
IndexedLineSet778.SetCoordIndex([0,1,-1]);
Coordinate779 := TCoordinateNode.Create;
Coordinate779.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ METHOD .Coord }
IndexedLineSet778.Coord := Coordinate779;
{ METHOD .Geometry }
Shape776.Geometry := IndexedLineSet778;
{ METHOD .FdChildren.Add }
HAnimSegment775.FdChildren.Add(Shape776);
Transform780 := TTransformNode.Create;
Transform780.Translation := Vector3(0.1955,0.8159,0.0464);
{ METHOD .FdChildren.Add }
Transform780.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment775.FdChildren.Add(Transform780);
HAnimSite782 := THAnimSiteNode.Create;
HAnimSite782.Translation := Vector3(0.1982,0.8061,0.0759);
{ METHOD .FdChildren.Add }
HAnimSite782.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment775.FdChildren.Add(HAnimSite782);
{ METHOD .FdChildren.Add }
HAnimJoint774.FdChildren.Add(HAnimSegment775);
{ METHOD .FdChildren.Add }
HAnimJoint766.FdChildren.Add(HAnimJoint774);
{ METHOD .FdChildren.Add }
HAnimJoint758.FdChildren.Add(HAnimJoint766);
{ METHOD .FdChildren.Add }
HAnimJoint744.FdChildren.Add(HAnimJoint758);
HAnimJoint784 := THAnimJointNode.Create;
HAnimJoint784.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint784.SetSkinCoordIndex([129,130]);
HAnimJoint784.SetSkinCoordWeight([1,1]);
HAnimSegment785 := THAnimSegmentNode.Create;
Shape786 := TShapeNode.Create;
{ METHOD .Appearance }
Shape786.Appearance := Appearance67;
IndexedLineSet788 := TIndexedLineSetNode.Create;
IndexedLineSet788.SetCoordIndex([0,1,-1]);
Coordinate789 := TCoordinateNode.Create;
Coordinate789.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
IndexedLineSet788.Coord := Coordinate789;
{ METHOD .Geometry }
Shape786.Geometry := IndexedLineSet788;
{ METHOD .FdChildren.Add }
HAnimSegment785.FdChildren.Add(Shape786);
Transform790 := TTransformNode.Create;
Transform790.Translation := Vector3(0.1983,0.8024,-0.028);
{ METHOD .FdChildren.Add }
Transform790.FdChildren.Add(Shape53);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart44;
begin

{ METHOD .FdChildren.Add }
HAnimSegment785.FdChildren.Add(Transform790);
{ METHOD .FdChildren.Add }
HAnimJoint784.FdChildren.Add(HAnimSegment785);
HAnimJoint792 := THAnimJointNode.Create;
HAnimJoint792.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint792.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint792.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment793 := THAnimSegmentNode.Create;
Shape794 := TShapeNode.Create;
{ METHOD .Appearance }
Shape794.Appearance := Appearance67;
IndexedLineSet796 := TIndexedLineSetNode.Create;
IndexedLineSet796.SetCoordIndex([0,1,-1]);
Coordinate797 := TCoordinateNode.Create;
Coordinate797.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
IndexedLineSet796.Coord := Coordinate797;
{ METHOD .Geometry }
Shape794.Geometry := IndexedLineSet796;
{ METHOD .FdChildren.Add }
HAnimSegment793.FdChildren.Add(Shape794);
Transform798 := TTransformNode.Create;
Transform798.Translation := Vector3(0.1983,0.7815,-0.028);
{ METHOD .FdChildren.Add }
Transform798.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment793.FdChildren.Add(Transform798);
{ METHOD .FdChildren.Add }
HAnimJoint792.FdChildren.Add(HAnimSegment793);
HAnimJoint800 := THAnimJointNode.Create;
HAnimJoint800.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint800.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint800.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment801 := THAnimSegmentNode.Create;
Shape802 := TShapeNode.Create;
{ METHOD .Appearance }
Shape802.Appearance := Appearance67;
IndexedLineSet804 := TIndexedLineSetNode.Create;
IndexedLineSet804.SetCoordIndex([0,1,-1]);
Coordinate805 := TCoordinateNode.Create;
Coordinate805.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
IndexedLineSet804.Coord := Coordinate805;
{ METHOD .Geometry }
Shape802.Geometry := IndexedLineSet804;
{ METHOD .FdChildren.Add }
HAnimSegment801.FdChildren.Add(Shape802);
Transform806 := TTransformNode.Create;
Transform806.Translation := Vector3(0.2017,0.7363,-0.0248);
{ METHOD .FdChildren.Add }
Transform806.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment801.FdChildren.Add(Transform806);
{ METHOD .FdChildren.Add }
HAnimJoint800.FdChildren.Add(HAnimSegment801);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart45;
begin

HAnimJoint808 := THAnimJointNode.Create;
HAnimJoint808.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint808.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint808.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment809 := THAnimSegmentNode.Create;
Shape810 := TShapeNode.Create;
{ METHOD .Appearance }
Shape810.Appearance := Appearance67;
IndexedLineSet812 := TIndexedLineSetNode.Create;
IndexedLineSet812.SetCoordIndex([0,1,-1]);
Coordinate813 := TCoordinateNode.Create;
Coordinate813.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ METHOD .Coord }
IndexedLineSet812.Coord := Coordinate813;
{ METHOD .Geometry }
Shape810.Geometry := IndexedLineSet812;
{ METHOD .FdChildren.Add }
HAnimSegment809.FdChildren.Add(Shape810);
Transform814 := TTransformNode.Create;
Transform814.Translation := Vector3(0.2028,0.7139,-0.0236);
{ METHOD .FdChildren.Add }
Transform814.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment809.FdChildren.Add(Transform814);
HAnimSite816 := THAnimSiteNode.Create;
HAnimSite816.Translation := Vector3(0.2089,0.6858,-0.0245);
{ METHOD .FdChildren.Add }
HAnimSite816.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment809.FdChildren.Add(HAnimSite816);
HAnimSite818 := THAnimSiteNode.Create;
HAnimSite818.Translation := Vector3(0.2056,0.6743,-0.0482);
{ METHOD .FdChildren.Add }
HAnimSite818.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment809.FdChildren.Add(HAnimSite818);
{ METHOD .FdChildren.Add }
HAnimJoint808.FdChildren.Add(HAnimSegment809);
{ METHOD .FdChildren.Add }
HAnimJoint800.FdChildren.Add(HAnimJoint808);
{ METHOD .FdChildren.Add }
HAnimJoint792.FdChildren.Add(HAnimJoint800);
{ METHOD .FdChildren.Add }
HAnimJoint784.FdChildren.Add(HAnimJoint792);
{ METHOD .FdChildren.Add }
HAnimJoint744.FdChildren.Add(HAnimJoint784);
HAnimJoint820 := THAnimJointNode.Create;
HAnimJoint820.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint820.SetSkinCoordIndex([131,132]);
HAnimJoint820.SetSkinCoordWeight([1,1]);
HAnimSegment821 := THAnimSegmentNode.Create;
Shape822 := TShapeNode.Create;
{ METHOD .Appearance }
Shape822.Appearance := Appearance67;
IndexedLineSet824 := TIndexedLineSetNode.Create;
IndexedLineSet824.SetCoordIndex([0,1,-1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart46;
begin

Coordinate825 := TCoordinateNode.Create;
Coordinate825.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
IndexedLineSet824.Coord := Coordinate825;
{ METHOD .Geometry }
Shape822.Geometry := IndexedLineSet824;
{ METHOD .FdChildren.Add }
HAnimSegment821.FdChildren.Add(Shape822);
Transform826 := TTransformNode.Create;
Transform826.Translation := Vector3(0.1987,0.8029,-0.053);
{ METHOD .FdChildren.Add }
Transform826.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment821.FdChildren.Add(Transform826);
{ METHOD .FdChildren.Add }
HAnimJoint820.FdChildren.Add(HAnimSegment821);
HAnimJoint828 := THAnimJointNode.Create;
HAnimJoint828.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint828.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint828.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment829 := THAnimSegmentNode.Create;
Shape830 := TShapeNode.Create;
{ METHOD .Appearance }
Shape830.Appearance := Appearance67;
IndexedLineSet832 := TIndexedLineSetNode.Create;
IndexedLineSet832.SetCoordIndex([0,1,-1]);
Coordinate833 := TCoordinateNode.Create;
Coordinate833.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
IndexedLineSet832.Coord := Coordinate833;
{ METHOD .Geometry }
Shape830.Geometry := IndexedLineSet832;
{ METHOD .FdChildren.Add }
HAnimSegment829.FdChildren.Add(Shape830);
Transform834 := TTransformNode.Create;
Transform834.Translation := Vector3(0.1987,0.7818,-0.053);
{ METHOD .FdChildren.Add }
Transform834.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment829.FdChildren.Add(Transform834);
{ METHOD .FdChildren.Add }
HAnimJoint828.FdChildren.Add(HAnimSegment829);
HAnimJoint836 := THAnimJointNode.Create;
HAnimJoint836.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint836.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint836.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment837 := THAnimSegmentNode.Create;
Shape838 := TShapeNode.Create;
{ METHOD .Appearance }
Shape838.Appearance := Appearance67;
IndexedLineSet840 := TIndexedLineSetNode.Create;
IndexedLineSet840.SetCoordIndex([0,1,-1]);
Coordinate841 := TCoordinateNode.Create;
Coordinate841.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart47;
begin

{ METHOD .Coord }
IndexedLineSet840.Coord := Coordinate841;
{ METHOD .Geometry }
Shape838.Geometry := IndexedLineSet840;
{ METHOD .FdChildren.Add }
HAnimSegment837.FdChildren.Add(Shape838);
Transform842 := TTransformNode.Create;
Transform842.Translation := Vector3(0.2013,0.7273,-0.0503);
{ METHOD .FdChildren.Add }
Transform842.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment837.FdChildren.Add(Transform842);
{ METHOD .FdChildren.Add }
HAnimJoint836.FdChildren.Add(HAnimSegment837);
HAnimJoint844 := THAnimJointNode.Create;
HAnimJoint844.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint844.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint844.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment845 := THAnimSegmentNode.Create;
Shape846 := TShapeNode.Create;
{ METHOD .Appearance }
Shape846.Appearance := Appearance67;
IndexedLineSet848 := TIndexedLineSetNode.Create;
IndexedLineSet848.SetCoordIndex([0,1,-1]);
Coordinate849 := TCoordinateNode.Create;
Coordinate849.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ METHOD .Coord }
IndexedLineSet848.Coord := Coordinate849;
{ METHOD .Geometry }
Shape846.Geometry := IndexedLineSet848;
{ METHOD .FdChildren.Add }
HAnimSegment845.FdChildren.Add(Shape846);
HAnimSite850 := THAnimSiteNode.Create;
HAnimSite850.Translation := Vector3(0.208,0.6731,-0.0491);
{ METHOD .FdChildren.Add }
HAnimSite850.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment845.FdChildren.Add(HAnimSite850);
Transform852 := TTransformNode.Create;
Transform852.Translation := Vector3(0.2026,0.7011,-0.0494);
{ METHOD .FdChildren.Add }
Transform852.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment845.FdChildren.Add(Transform852);
{ METHOD .FdChildren.Add }
HAnimJoint844.FdChildren.Add(HAnimSegment845);
{ METHOD .FdChildren.Add }
HAnimJoint836.FdChildren.Add(HAnimJoint844);
{ METHOD .FdChildren.Add }
HAnimJoint828.FdChildren.Add(HAnimJoint836);
{ METHOD .FdChildren.Add }
HAnimJoint820.FdChildren.Add(HAnimJoint828);
{ METHOD .FdChildren.Add }
HAnimJoint744.FdChildren.Add(HAnimJoint820);
HAnimJoint854 := THAnimJointNode.Create;
HAnimJoint854.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint854.SetSkinCoordIndex([133,134]);
HAnimJoint854.SetSkinCoordWeight([1,1]);
HAnimSegment855 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart48;
begin

Shape856 := TShapeNode.Create;
{ METHOD .Appearance }
Shape856.Appearance := Appearance67;
IndexedLineSet858 := TIndexedLineSetNode.Create;
IndexedLineSet858.SetCoordIndex([0,1,-1]);
Coordinate859 := TCoordinateNode.Create;
Coordinate859.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
IndexedLineSet858.Coord := Coordinate859;
{ METHOD .Geometry }
Shape856.Geometry := IndexedLineSet858;
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Shape856);
Transform860 := TTransformNode.Create;
Transform860.Translation := Vector3(0.1956,0.8019,-0.0794);
{ METHOD .FdChildren.Add }
Transform860.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Transform860);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimSegment855);
HAnimJoint862 := THAnimJointNode.Create;
HAnimJoint862.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint862.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint862.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment863 := THAnimSegmentNode.Create;
Shape864 := TShapeNode.Create;
{ METHOD .Appearance }
Shape864.Appearance := Appearance67;
IndexedLineSet866 := TIndexedLineSetNode.Create;
IndexedLineSet866.SetCoordIndex([0,1,-1]);
Coordinate867 := TCoordinateNode.Create;
Coordinate867.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
IndexedLineSet866.Coord := Coordinate867;
{ METHOD .Geometry }
Shape864.Geometry := IndexedLineSet866;
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(Shape864);
Transform868 := TTransformNode.Create;
Transform868.Translation := Vector3(0.1956,0.7815,-0.0794);
{ METHOD .FdChildren.Add }
Transform868.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(Transform868);
{ METHOD .FdChildren.Add }
HAnimJoint862.FdChildren.Add(HAnimSegment863);
HAnimJoint870 := THAnimJointNode.Create;
HAnimJoint870.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint870.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint870.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment871 := THAnimSegmentNode.Create;
Shape872 := TShapeNode.Create;
{ METHOD .Appearance }
Shape872.Appearance := Appearance67;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart49;
begin

IndexedLineSet874 := TIndexedLineSetNode.Create;
IndexedLineSet874.SetCoordIndex([0,1,-1]);
Coordinate875 := TCoordinateNode.Create;
Coordinate875.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
IndexedLineSet874.Coord := Coordinate875;
{ METHOD .Geometry }
Shape872.Geometry := IndexedLineSet874;
{ METHOD .FdChildren.Add }
HAnimSegment871.FdChildren.Add(Shape872);
Transform876 := TTransformNode.Create;
Transform876.Translation := Vector3(0.1973,0.7287,-0.0777);
{ METHOD .FdChildren.Add }
Transform876.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment871.FdChildren.Add(Transform876);
{ METHOD .FdChildren.Add }
HAnimJoint870.FdChildren.Add(HAnimSegment871);
HAnimJoint878 := THAnimJointNode.Create;
HAnimJoint878.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint878.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint878.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment879 := THAnimSegmentNode.Create;
Shape880 := TShapeNode.Create;
{ METHOD .Appearance }
Shape880.Appearance := Appearance67;
IndexedLineSet882 := TIndexedLineSetNode.Create;
IndexedLineSet882.SetCoordIndex([0,1,-1]);
Coordinate883 := TCoordinateNode.Create;
Coordinate883.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ METHOD .Coord }
IndexedLineSet882.Coord := Coordinate883;
{ METHOD .Geometry }
Shape880.Geometry := IndexedLineSet882;
{ METHOD .FdChildren.Add }
HAnimSegment879.FdChildren.Add(Shape880);
Transform884 := TTransformNode.Create;
Transform884.Translation := Vector3(0.1983,0.7045,-0.0767);
{ METHOD .FdChildren.Add }
Transform884.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment879.FdChildren.Add(Transform884);
HAnimSite886 := THAnimSiteNode.Create;
HAnimSite886.Translation := Vector3(0.2035,0.675,-0.0756);
{ METHOD .FdChildren.Add }
HAnimSite886.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment879.FdChildren.Add(HAnimSite886);
{ METHOD .FdChildren.Add }
HAnimJoint878.FdChildren.Add(HAnimSegment879);
{ METHOD .FdChildren.Add }
HAnimJoint870.FdChildren.Add(HAnimJoint878);
{ METHOD .FdChildren.Add }
HAnimJoint862.FdChildren.Add(HAnimJoint870);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimJoint862);
{ METHOD .FdChildren.Add }
HAnimJoint744.FdChildren.Add(HAnimJoint854);
HAnimJoint888 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart50;
begin

HAnimJoint888.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint888.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint888.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment889 := THAnimSegmentNode.Create;
Shape890 := TShapeNode.Create;
{ METHOD .Appearance }
Shape890.Appearance := Appearance67;
IndexedLineSet892 := TIndexedLineSetNode.Create;
IndexedLineSet892.SetCoordIndex([0,1,-1]);
Coordinate893 := TCoordinateNode.Create;
Coordinate893.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
IndexedLineSet892.Coord := Coordinate893;
{ METHOD .Geometry }
Shape890.Geometry := IndexedLineSet892;
{ METHOD .FdChildren.Add }
HAnimSegment889.FdChildren.Add(Shape890);
Transform894 := TTransformNode.Create;
Transform894.Translation := Vector3(0.1925,0.8066,-0.1036);
{ METHOD .FdChildren.Add }
Transform894.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment889.FdChildren.Add(Transform894);
{ METHOD .FdChildren.Add }
HAnimJoint888.FdChildren.Add(HAnimSegment889);
HAnimJoint896 := THAnimJointNode.Create;
HAnimJoint896.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint896.SetSkinCoordIndex([160,161,162]);
HAnimJoint896.SetSkinCoordWeight([1,1,1]);
HAnimSegment897 := THAnimSegmentNode.Create;
Shape898 := TShapeNode.Create;
{ METHOD .Appearance }
Shape898.Appearance := Appearance67;
IndexedLineSet900 := TIndexedLineSetNode.Create;
IndexedLineSet900.SetCoordIndex([0,1,-1]);
Coordinate901 := TCoordinateNode.Create;
Coordinate901.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
IndexedLineSet900.Coord := Coordinate901;
{ METHOD .Geometry }
Shape898.Geometry := IndexedLineSet900;
{ METHOD .FdChildren.Add }
HAnimSegment897.FdChildren.Add(Shape898);
Transform902 := TTransformNode.Create;
Transform902.Translation := Vector3(0.1925,0.7866,-0.1036);
{ METHOD .FdChildren.Add }
Transform902.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment897.FdChildren.Add(Transform902);
{ METHOD .FdChildren.Add }
HAnimJoint896.FdChildren.Add(HAnimSegment897);
HAnimJoint904 := THAnimJointNode.Create;
HAnimJoint904.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint904.SetSkinCoordIndex([205,206,207,208]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart51;
begin

HAnimJoint904.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment905 := THAnimSegmentNode.Create;
Transform906 := TTransformNode.Create;
Transform906.Translation := Vector3(0.1938,0.7452,-0.1024);
{ METHOD .FdChildren.Add }
Transform906.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment905.FdChildren.Add(Transform906);
Shape908 := TShapeNode.Create;
{ METHOD .Appearance }
Shape908.Appearance := Appearance67;
IndexedLineSet910 := TIndexedLineSetNode.Create;
IndexedLineSet910.SetCoordIndex([0,1,-1]);
Coordinate911 := TCoordinateNode.Create;
Coordinate911.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
IndexedLineSet910.Coord := Coordinate911;
{ METHOD .Geometry }
Shape908.Geometry := IndexedLineSet910;
{ METHOD .FdChildren.Add }
HAnimSegment905.FdChildren.Add(Shape908);
{ METHOD .FdChildren.Add }
HAnimJoint904.FdChildren.Add(HAnimSegment905);
HAnimJoint912 := THAnimJointNode.Create;
HAnimJoint912.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint912.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint912.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment913 := THAnimSegmentNode.Create;
Shape914 := TShapeNode.Create;
{ METHOD .Appearance }
Shape914.Appearance := Appearance67;
IndexedLineSet916 := TIndexedLineSetNode.Create;
IndexedLineSet916.SetCoordIndex([0,1,-1]);
Coordinate917 := TCoordinateNode.Create;
Coordinate917.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ METHOD .Coord }
IndexedLineSet916.Coord := Coordinate917;
{ METHOD .Geometry }
Shape914.Geometry := IndexedLineSet916;
{ METHOD .FdChildren.Add }
HAnimSegment913.FdChildren.Add(Shape914);
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.1948,0.7277,-0.1017);
{ METHOD .FdChildren.Add }
Transform918.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment913.FdChildren.Add(Transform918);
HAnimSite920 := THAnimSiteNode.Create;
HAnimSite920.Translation := Vector3(0.2014,0.7009,-0.1012);
{ METHOD .FdChildren.Add }
HAnimSite920.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment913.FdChildren.Add(HAnimSite920);
{ METHOD .FdChildren.Add }
HAnimJoint912.FdChildren.Add(HAnimSegment913);
{ METHOD .FdChildren.Add }
HAnimJoint904.FdChildren.Add(HAnimJoint912);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart52;
begin

{ METHOD .FdChildren.Add }
HAnimJoint896.FdChildren.Add(HAnimJoint904);
{ METHOD .FdChildren.Add }
HAnimJoint888.FdChildren.Add(HAnimJoint896);
{ METHOD .FdChildren.Add }
HAnimJoint744.FdChildren.Add(HAnimJoint888);
{ METHOD .FdChildren.Add }
HAnimJoint722.FdChildren.Add(HAnimJoint744);
{ METHOD .FdChildren.Add }
HAnimJoint698.FdChildren.Add(HAnimJoint722);
{ METHOD .FdChildren.Add }
HAnimJoint682.FdChildren.Add(HAnimJoint698);
{ METHOD .FdChildren.Add }
HAnimJoint672.FdChildren.Add(HAnimJoint682);
{ METHOD .FdChildren.Add }
HAnimJoint556.FdChildren.Add(HAnimJoint672);
HAnimJoint922 := THAnimJointNode.Create;
HAnimJoint922.Center := Vector3(-0.03,1.46,0);
HAnimJoint922.SetSkinCoordIndex([10]);
HAnimJoint922.SetSkinCoordWeight([1]);
HAnimSegment923 := THAnimSegmentNode.Create;
Shape924 := TShapeNode.Create;
{ METHOD .Appearance }
Shape924.Appearance := Appearance67;
IndexedLineSet926 := TIndexedLineSetNode.Create;
IndexedLineSet926.SetCoordIndex([0,1,-1]);
Coordinate927 := TCoordinateNode.Create;
Coordinate927.SetPoint([Vector3(-0.03,1.46,0.02),Vector3(-0.09,1.41,-0.09)]);
{ METHOD .Coord }
IndexedLineSet926.Coord := Coordinate927;
{ METHOD .Geometry }
Shape924.Geometry := IndexedLineSet926;
{ METHOD .FdChildren.Add }
HAnimSegment923.FdChildren.Add(Shape924);
Transform928 := TTransformNode.Create;
Transform928.Translation := Vector3(-0.03,1.46,0.02);
{ METHOD .FdChildren.Add }
Transform928.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment923.FdChildren.Add(Transform928);
HAnimSite930 := THAnimSiteNode.Create;
HAnimSite930.Translation := Vector3(-0.03,1.46,0.035);
{ METHOD .FdChildren.Add }
HAnimSite930.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment923.FdChildren.Add(HAnimSite930);
{ METHOD .FdChildren.Add }
HAnimJoint922.FdChildren.Add(HAnimSegment923);
HAnimJoint932 := THAnimJointNode.Create;
HAnimJoint932.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint932.SetSkinCoordIndex([77,29]);
HAnimJoint932.SetSkinCoordWeight([1,0.9]);
HAnimSegment933 := THAnimSegmentNode.Create;
Shape934 := TShapeNode.Create;
{ METHOD .Appearance }
Shape934.Appearance := Appearance67;
IndexedLineSet936 := TIndexedLineSetNode.Create;
IndexedLineSet936.SetCoordIndex([0,1,-1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart53;
begin

Coordinate937 := TCoordinateNode.Create;
Coordinate937.SetPoint([Vector3(-0.09,1.41,-0.09),Vector3(-0.2,1.44,-0.04)]);
{ METHOD .Coord }
IndexedLineSet936.Coord := Coordinate937;
{ METHOD .Geometry }
Shape934.Geometry := IndexedLineSet936;
{ METHOD .FdChildren.Add }
HAnimSegment933.FdChildren.Add(Shape934);
Transform938 := TTransformNode.Create;
Transform938.Translation := Vector3(-0.09,1.41,-0.09);
{ METHOD .FdChildren.Add }
Transform938.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment933.FdChildren.Add(Transform938);
Transform940 := TTransformNode.Create;
Transform940.Translation := Vector3(-0.11,1.427,-0.1375);
{ METHOD .FdChildren.Add }
Transform940.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment933.FdChildren.Add(Transform940);
HAnimSite942 := THAnimSiteNode.Create;
HAnimSite942.Translation := Vector3(-0.178,1.4825,-0.0625);
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment933.FdChildren.Add(HAnimSite942);
HAnimSite944 := THAnimSiteNode.Create;
HAnimSite944.Translation := Vector3(-0.17,1.38,0.007);
{ METHOD .FdChildren.Add }
HAnimSite944.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment933.FdChildren.Add(HAnimSite944);
HAnimSite946 := THAnimSiteNode.Create;
HAnimSite946.Translation := Vector3(-0.16,1.38,-0.127);
{ METHOD .FdChildren.Add }
HAnimSite946.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment933.FdChildren.Add(HAnimSite946);
{ METHOD .FdChildren.Add }
HAnimJoint932.FdChildren.Add(HAnimSegment933);
HAnimJoint948 := THAnimJointNode.Create;
HAnimJoint948.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint948.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint948.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment949 := THAnimSegmentNode.Create;
Transform950 := TTransformNode.Create;
Transform950.Translation := Vector3(-0.2,1.44,-0.04);
{ METHOD .FdChildren.Add }
Transform950.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform950);
Shape952 := TShapeNode.Create;
{ METHOD .Appearance }
Shape952.Appearance := Appearance67;
IndexedLineSet954 := TIndexedLineSetNode.Create;
IndexedLineSet954.SetCoordIndex([0,1,-1]);
Coordinate955 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart54;
begin

Coordinate955.SetPoint([Vector3(-0.2,1.44,-0.04),Vector3(-0.2,1.1388,-0.04)]);
{ METHOD .Coord }
IndexedLineSet954.Coord := Coordinate955;
{ METHOD .Geometry }
Shape952.Geometry := IndexedLineSet954;
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Shape952);
Transform956 := TTransformNode.Create;
Transform956.Translation := Vector3(-0.178,1.4825,-0.0625);
{ METHOD .FdChildren.Add }
Transform956.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform956);
Transform958 := TTransformNode.Create;
Transform958.Translation := Vector3(-0.17,1.38,0.007);
{ METHOD .FdChildren.Add }
Transform958.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform958);
Transform960 := TTransformNode.Create;
Transform960.Translation := Vector3(-0.16,1.38,-0.127);
{ METHOD .FdChildren.Add }
Transform960.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform960);
Transform962 := TTransformNode.Create;
Transform962.Translation := Vector3(-0.235,1.42,-0.0625);
{ METHOD .FdChildren.Add }
Transform962.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform962);
Transform964 := TTransformNode.Create;
Transform964.Translation := Vector3(-0.23,1.235,-0.04);
{ METHOD .FdChildren.Add }
Transform964.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform964);
Transform966 := TTransformNode.Create;
Transform966.Translation := Vector3(-0.16,1.23,-0.04);
{ METHOD .FdChildren.Add }
Transform966.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform966);
Transform968 := TTransformNode.Create;
Transform968.Translation := Vector3(-0.2,1.23,-0.105);
{ METHOD .FdChildren.Add }
Transform968.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform968);
Transform970 := TTransformNode.Create;
Transform970.Translation := Vector3(-0.2,1.235,0.02);
{ METHOD .FdChildren.Add }
Transform970.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(Transform970);
HAnimSite972 := THAnimSiteNode.Create;
HAnimSite972.Translation := Vector3(-0.165,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite972.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(HAnimSite972);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart55;
begin

HAnimSite974 := THAnimSiteNode.Create;
HAnimSite974.Translation := Vector3(-0.23,1.133,-0.055);
{ METHOD .FdChildren.Add }
HAnimSite974.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(HAnimSite974);
HAnimSite976 := THAnimSiteNode.Create;
HAnimSite976.Translation := Vector3(-0.244,1.1388,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite976.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment949.FdChildren.Add(HAnimSite976);
{ METHOD .FdChildren.Add }
HAnimJoint948.FdChildren.Add(HAnimSegment949);
HAnimJoint978 := THAnimJointNode.Create;
HAnimJoint978.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint978.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint978.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment979 := THAnimSegmentNode.Create;
Shape980 := TShapeNode.Create;
{ METHOD .Appearance }
Shape980.Appearance := Appearance67;
IndexedLineSet982 := TIndexedLineSetNode.Create;
IndexedLineSet982.SetCoordIndex([0,1,-1]);
Coordinate983 := TCoordinateNode.Create;
Coordinate983.SetPoint([Vector3(-0.2,1.1388,-0.04),Vector3(-0.2,0.89,-0.04)]);
{ METHOD .Coord }
IndexedLineSet982.Coord := Coordinate983;
{ METHOD .Geometry }
Shape980.Geometry := IndexedLineSet982;
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Shape980);
Transform984 := TTransformNode.Create;
Transform984.Translation := Vector3(-0.2,1.1388,-0.04);
{ METHOD .FdChildren.Add }
Transform984.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Transform984);
Transform986 := TTransformNode.Create;
Transform986.Translation := Vector3(-0.2,1.1388,0.013);
{ METHOD .FdChildren.Add }
Transform986.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Transform986);
Transform988 := TTransformNode.Create;
Transform988.Translation := Vector3(-0.225,1,-0.01);
{ METHOD .FdChildren.Add }
Transform988.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Transform988);
Transform990 := TTransformNode.Create;
Transform990.Translation := Vector3(-0.225,1,-0.07);
{ METHOD .FdChildren.Add }
Transform990.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Transform990);
Transform992 := TTransformNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart56;
begin

Transform992.Translation := Vector3(-0.185,1,-0.01);
{ METHOD .FdChildren.Add }
Transform992.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Transform992);
Transform994 := TTransformNode.Create;
Transform994.Translation := Vector3(-0.185,1,-0.07);
{ METHOD .FdChildren.Add }
Transform994.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(Transform994);
HAnimSite996 := THAnimSiteNode.Create;
HAnimSite996.Translation := Vector3(-0.2,0.9,-0.015);
{ METHOD .FdChildren.Add }
HAnimSite996.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(HAnimSite996);
HAnimSite998 := THAnimSiteNode.Create;
HAnimSite998.Translation := Vector3(-0.2,1.1388,-0.08);
{ METHOD .FdChildren.Add }
HAnimSite998.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment979.FdChildren.Add(HAnimSite998);
{ METHOD .FdChildren.Add }
HAnimJoint978.FdChildren.Add(HAnimSegment979);
HAnimJoint1000 := THAnimJointNode.Create;
HAnimJoint1000.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint1000.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint1000.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment1001 := THAnimSegmentNode.Create;
Shape1002 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1002.Appearance := Appearance67;
IndexedLineSet1004 := TIndexedLineSetNode.Create;
IndexedLineSet1004.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate1005 := TCoordinateNode.Create;
Coordinate1005.SetPoint([Vector3(-0.2,0.89,-0.04),Vector3(-0.2,0.85,0),Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.84,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1004.Coord := Coordinate1005;
{ METHOD .Geometry }
Shape1002.Geometry := IndexedLineSet1004;
{ METHOD .FdChildren.Add }
HAnimSegment1001.FdChildren.Add(Shape1002);
Transform1006 := TTransformNode.Create;
Transform1006.Translation := Vector3(-0.2,0.89,-0.04);
{ METHOD .FdChildren.Add }
Transform1006.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1001.FdChildren.Add(Transform1006);
HAnimSite1008 := THAnimSiteNode.Create;
HAnimSite1008.Translation := Vector3(-0.2,0.9,-0.085);
{ METHOD .FdChildren.Add }
HAnimSite1008.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1001.FdChildren.Add(HAnimSite1008);
{ METHOD .FdChildren.Add }
HAnimJoint1000.FdChildren.Add(HAnimSegment1001);
HAnimJoint1010 := THAnimJointNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart57;
begin

HAnimJoint1010.Center := Vector3(-0.2,0.85,0);
HAnimJoint1010.SetSkinCoordIndex([243,244]);
HAnimJoint1010.SetSkinCoordWeight([1,1]);
HAnimSegment1011 := THAnimSegmentNode.Create;
Shape1012 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1012.Appearance := Appearance67;
IndexedLineSet1014 := TIndexedLineSetNode.Create;
IndexedLineSet1014.SetCoordIndex([0,1,-1]);
Coordinate1015 := TCoordinateNode.Create;
Coordinate1015.SetPoint([Vector3(-0.2,0.85,0),Vector3(-0.2,0.82,0.03)]);
{ METHOD .Coord }
IndexedLineSet1014.Coord := Coordinate1015;
{ METHOD .Geometry }
Shape1012.Geometry := IndexedLineSet1014;
{ METHOD .FdChildren.Add }
HAnimSegment1011.FdChildren.Add(Shape1012);
Transform1016 := TTransformNode.Create;
Transform1016.Translation := Vector3(-0.2,0.85,0);
{ METHOD .FdChildren.Add }
Transform1016.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1011.FdChildren.Add(Transform1016);
{ METHOD .FdChildren.Add }
HAnimJoint1010.FdChildren.Add(HAnimSegment1011);
HAnimJoint1018 := THAnimJointNode.Create;
HAnimJoint1018.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint1018.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint1018.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment1019 := THAnimSegmentNode.Create;
Shape1020 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1020.Appearance := Appearance67;
IndexedLineSet1022 := TIndexedLineSetNode.Create;
IndexedLineSet1022.SetCoordIndex([0,1,-1]);
Coordinate1023 := TCoordinateNode.Create;
Coordinate1023.SetPoint([Vector3(-0.2,0.82,0.03),Vector3(-0.2,0.8,0.05)]);
{ METHOD .Coord }
IndexedLineSet1022.Coord := Coordinate1023;
{ METHOD .Geometry }
Shape1020.Geometry := IndexedLineSet1022;
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(Shape1020);
Transform1024 := TTransformNode.Create;
Transform1024.Translation := Vector3(-0.2,0.82,0.03);
{ METHOD .FdChildren.Add }
Transform1024.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(Transform1024);
{ METHOD .FdChildren.Add }
HAnimJoint1018.FdChildren.Add(HAnimSegment1019);
HAnimJoint1026 := THAnimJointNode.Create;
HAnimJoint1026.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint1026.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart58;
begin

HAnimJoint1026.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1027 := THAnimSegmentNode.Create;
Shape1028 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1028.Appearance := Appearance67;
IndexedLineSet1030 := TIndexedLineSetNode.Create;
IndexedLineSet1030.SetCoordIndex([0,1,-1]);
Coordinate1031 := TCoordinateNode.Create;
Coordinate1031.SetPoint([Vector3(-0.2,0.8,0.05),Vector3(-0.2,0.78,0.07)]);
{ METHOD .Coord }
IndexedLineSet1030.Coord := Coordinate1031;
{ METHOD .Geometry }
Shape1028.Geometry := IndexedLineSet1030;
{ METHOD .FdChildren.Add }
HAnimSegment1027.FdChildren.Add(Shape1028);
Transform1032 := TTransformNode.Create;
Transform1032.Translation := Vector3(-0.2,0.785,0.075);
{ METHOD .FdChildren.Add }
Transform1032.FdChildren.Add(Shape72);
{ METHOD .FdChildren.Add }
HAnimSegment1027.FdChildren.Add(Transform1032);
Transform1034 := TTransformNode.Create;
Transform1034.Translation := Vector3(-0.2,0.8,0.05);
{ METHOD .FdChildren.Add }
Transform1034.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1027.FdChildren.Add(Transform1034);
HAnimSite1036 := THAnimSiteNode.Create;
HAnimSite1036.Translation := Vector3(-0.2,0.78,0.07);
{ METHOD .FdChildren.Add }
HAnimSite1036.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1027.FdChildren.Add(HAnimSite1036);
{ METHOD .FdChildren.Add }
HAnimJoint1026.FdChildren.Add(HAnimSegment1027);
{ METHOD .FdChildren.Add }
HAnimJoint1018.FdChildren.Add(HAnimJoint1026);
{ METHOD .FdChildren.Add }
HAnimJoint1010.FdChildren.Add(HAnimJoint1018);
{ METHOD .FdChildren.Add }
HAnimJoint1000.FdChildren.Add(HAnimJoint1010);
HAnimJoint1038 := THAnimJointNode.Create;
HAnimJoint1038.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint1038.SetSkinCoordIndex([245,246]);
HAnimJoint1038.SetSkinCoordWeight([1,1]);
HAnimSegment1039 := THAnimSegmentNode.Create;
Shape1040 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1040.Appearance := Appearance67;
IndexedLineSet1042 := TIndexedLineSetNode.Create;
IndexedLineSet1042.SetCoordIndex([0,1,-1]);
Coordinate1043 := TCoordinateNode.Create;
Coordinate1043.SetPoint([Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.793,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1042.Coord := Coordinate1043;
{ METHOD .Geometry }
Shape1040.Geometry := IndexedLineSet1042;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart59;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1039.FdChildren.Add(Shape1040);
Transform1044 := TTransformNode.Create;
Transform1044.Translation := Vector3(-0.2,0.84,-0.015);
{ METHOD .FdChildren.Add }
Transform1044.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1039.FdChildren.Add(Transform1044);
HAnimSite1046 := THAnimSiteNode.Create;
HAnimSite1046.Translation := Vector3(-0.2,0.793,-0.005);
{ METHOD .FdChildren.Add }
HAnimSite1046.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1039.FdChildren.Add(HAnimSite1046);
{ METHOD .FdChildren.Add }
HAnimJoint1038.FdChildren.Add(HAnimSegment1039);
HAnimJoint1048 := THAnimJointNode.Create;
HAnimJoint1048.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint1048.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint1048.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment1049 := THAnimSegmentNode.Create;
Shape1050 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1050.Appearance := Appearance67;
IndexedLineSet1052 := TIndexedLineSetNode.Create;
IndexedLineSet1052.SetCoordIndex([0,1,-1]);
Coordinate1053 := TCoordinateNode.Create;
Coordinate1053.SetPoint([Vector3(-0.2,0.793,-0.015),Vector3(-0.2,0.745,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1052.Coord := Coordinate1053;
{ METHOD .Geometry }
Shape1050.Geometry := IndexedLineSet1052;
{ METHOD .FdChildren.Add }
HAnimSegment1049.FdChildren.Add(Shape1050);
Transform1054 := TTransformNode.Create;
Transform1054.Translation := Vector3(-0.2,0.793,-0.015);
{ METHOD .FdChildren.Add }
Transform1054.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1049.FdChildren.Add(Transform1054);
{ METHOD .FdChildren.Add }
HAnimJoint1048.FdChildren.Add(HAnimSegment1049);
HAnimJoint1056 := THAnimJointNode.Create;
HAnimJoint1056.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint1056.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint1056.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1057 := THAnimSegmentNode.Create;
Shape1058 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1058.Appearance := Appearance67;
IndexedLineSet1060 := TIndexedLineSetNode.Create;
IndexedLineSet1060.SetCoordIndex([0,1,-1]);
Coordinate1061 := TCoordinateNode.Create;
Coordinate1061.SetPoint([Vector3(-0.2,0.745,-0.015),Vector3(-0.2,0.72,-0.015)]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart60;
begin

{ METHOD .Coord }
IndexedLineSet1060.Coord := Coordinate1061;
{ METHOD .Geometry }
Shape1058.Geometry := IndexedLineSet1060;
{ METHOD .FdChildren.Add }
HAnimSegment1057.FdChildren.Add(Shape1058);
Transform1062 := TTransformNode.Create;
Transform1062.Translation := Vector3(-0.2,0.745,-0.015);
{ METHOD .FdChildren.Add }
Transform1062.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1057.FdChildren.Add(Transform1062);
{ METHOD .FdChildren.Add }
HAnimJoint1056.FdChildren.Add(HAnimSegment1057);
HAnimJoint1064 := THAnimJointNode.Create;
HAnimJoint1064.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint1064.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint1064.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1065 := THAnimSegmentNode.Create;
Shape1066 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1066.Appearance := Appearance67;
IndexedLineSet1068 := TIndexedLineSetNode.Create;
IndexedLineSet1068.SetCoordIndex([0,1,-1]);
Coordinate1069 := TCoordinateNode.Create;
Coordinate1069.SetPoint([Vector3(-0.2,0.72,-0.015),Vector3(-0.2,0.695,-0.015)]);
{ METHOD .Coord }
IndexedLineSet1068.Coord := Coordinate1069;
{ METHOD .Geometry }
Shape1066.Geometry := IndexedLineSet1068;
{ METHOD .FdChildren.Add }
HAnimSegment1065.FdChildren.Add(Shape1066);
Transform1070 := TTransformNode.Create;
Transform1070.Translation := Vector3(-0.2,0.72,-0.015);
{ METHOD .FdChildren.Add }
Transform1070.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1065.FdChildren.Add(Transform1070);
HAnimSite1072 := THAnimSiteNode.Create;
HAnimSite1072.Translation := Vector3(-0.2,0.695,-0.015);
{ METHOD .FdChildren.Add }
HAnimSite1072.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1065.FdChildren.Add(HAnimSite1072);
{ METHOD .FdChildren.Add }
HAnimJoint1064.FdChildren.Add(HAnimSegment1065);
{ METHOD .FdChildren.Add }
HAnimJoint1056.FdChildren.Add(HAnimJoint1064);
{ METHOD .FdChildren.Add }
HAnimJoint1048.FdChildren.Add(HAnimJoint1056);
{ METHOD .FdChildren.Add }
HAnimJoint1038.FdChildren.Add(HAnimJoint1048);
{ METHOD .FdChildren.Add }
HAnimJoint1000.FdChildren.Add(HAnimJoint1038);
HAnimJoint1074 := THAnimJointNode.Create;
HAnimJoint1074.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint1074.SetSkinCoordIndex([247,248]);
HAnimJoint1074.SetSkinCoordWeight([1,1]);
HAnimSegment1075 := THAnimSegmentNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart61;
begin

Shape1076 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1076.Appearance := Appearance67;
IndexedLineSet1078 := TIndexedLineSetNode.Create;
IndexedLineSet1078.SetCoordIndex([0,1,-1]);
Coordinate1079 := TCoordinateNode.Create;
Coordinate1079.SetPoint([Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.788,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1078.Coord := Coordinate1079;
{ METHOD .Geometry }
Shape1076.Geometry := IndexedLineSet1078;
{ METHOD .FdChildren.Add }
HAnimSegment1075.FdChildren.Add(Shape1076);
Transform1080 := TTransformNode.Create;
Transform1080.Translation := Vector3(-0.2,0.835,-0.04);
{ METHOD .FdChildren.Add }
Transform1080.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1075.FdChildren.Add(Transform1080);
{ METHOD .FdChildren.Add }
HAnimJoint1074.FdChildren.Add(HAnimSegment1075);
HAnimJoint1082 := THAnimJointNode.Create;
HAnimJoint1082.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint1082.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint1082.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1083 := THAnimSegmentNode.Create;
Shape1084 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1084.Appearance := Appearance67;
IndexedLineSet1086 := TIndexedLineSetNode.Create;
IndexedLineSet1086.SetCoordIndex([0,1,-1]);
Coordinate1087 := TCoordinateNode.Create;
Coordinate1087.SetPoint([Vector3(-0.2,0.788,-0.04),Vector3(-0.2,0.74,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1086.Coord := Coordinate1087;
{ METHOD .Geometry }
Shape1084.Geometry := IndexedLineSet1086;
{ METHOD .FdChildren.Add }
HAnimSegment1083.FdChildren.Add(Shape1084);
Transform1088 := TTransformNode.Create;
Transform1088.Translation := Vector3(-0.2,0.788,-0.04);
{ METHOD .FdChildren.Add }
Transform1088.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1083.FdChildren.Add(Transform1088);
{ METHOD .FdChildren.Add }
HAnimJoint1082.FdChildren.Add(HAnimSegment1083);
HAnimJoint1090 := THAnimJointNode.Create;
HAnimJoint1090.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint1090.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint1090.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1091 := THAnimSegmentNode.Create;
Shape1092 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1092.Appearance := Appearance67;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart62;
begin

IndexedLineSet1094 := TIndexedLineSetNode.Create;
IndexedLineSet1094.SetCoordIndex([0,1,-1]);
Coordinate1095 := TCoordinateNode.Create;
Coordinate1095.SetPoint([Vector3(-0.2,0.74,-0.04),Vector3(-0.2,0.7142,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1094.Coord := Coordinate1095;
{ METHOD .Geometry }
Shape1092.Geometry := IndexedLineSet1094;
{ METHOD .FdChildren.Add }
HAnimSegment1091.FdChildren.Add(Shape1092);
Transform1096 := TTransformNode.Create;
Transform1096.Translation := Vector3(-0.2,0.74,-0.04);
{ METHOD .FdChildren.Add }
Transform1096.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1091.FdChildren.Add(Transform1096);
{ METHOD .FdChildren.Add }
HAnimJoint1090.FdChildren.Add(HAnimSegment1091);
HAnimJoint1098 := THAnimJointNode.Create;
HAnimJoint1098.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint1098.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint1098.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1099 := THAnimSegmentNode.Create;
Shape1100 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1100.Appearance := Appearance67;
IndexedLineSet1102 := TIndexedLineSetNode.Create;
IndexedLineSet1102.SetCoordIndex([0,1,-1]);
Coordinate1103 := TCoordinateNode.Create;
Coordinate1103.SetPoint([Vector3(-0.2,0.7142,-0.04),Vector3(-0.2,0.6758,-0.04)]);
{ METHOD .Coord }
IndexedLineSet1102.Coord := Coordinate1103;
{ METHOD .Geometry }
Shape1100.Geometry := IndexedLineSet1102;
{ METHOD .FdChildren.Add }
HAnimSegment1099.FdChildren.Add(Shape1100);
Transform1104 := TTransformNode.Create;
Transform1104.Translation := Vector3(-0.2,0.7142,-0.04);
{ METHOD .FdChildren.Add }
Transform1104.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1099.FdChildren.Add(Transform1104);
HAnimSite1106 := THAnimSiteNode.Create;
HAnimSite1106.Translation := Vector3(-0.2,0.68,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite1106.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1099.FdChildren.Add(HAnimSite1106);
HAnimSite1108 := THAnimSiteNode.Create;
HAnimSite1108.Translation := Vector3(-0.2,0.68,-0.04);
{ METHOD .FdChildren.Add }
HAnimSite1108.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1099.FdChildren.Add(HAnimSite1108);
{ METHOD .FdChildren.Add }
HAnimJoint1098.FdChildren.Add(HAnimSegment1099);
{ METHOD .FdChildren.Add }
HAnimJoint1090.FdChildren.Add(HAnimJoint1098);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart63;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1082.FdChildren.Add(HAnimJoint1090);
{ METHOD .FdChildren.Add }
HAnimJoint1074.FdChildren.Add(HAnimJoint1082);
{ METHOD .FdChildren.Add }
HAnimJoint1000.FdChildren.Add(HAnimJoint1074);
HAnimJoint1110 := THAnimJointNode.Create;
HAnimJoint1110.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint1110.SetSkinCoordIndex([249,250]);
HAnimJoint1110.SetSkinCoordWeight([1,1]);
HAnimSegment1111 := THAnimSegmentNode.Create;
Shape1112 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1112.Appearance := Appearance67;
IndexedLineSet1114 := TIndexedLineSetNode.Create;
IndexedLineSet1114.SetCoordIndex([0,1,-1]);
Coordinate1115 := TCoordinateNode.Create;
Coordinate1115.SetPoint([Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.793,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1114.Coord := Coordinate1115;
{ METHOD .Geometry }
Shape1112.Geometry := IndexedLineSet1114;
{ METHOD .FdChildren.Add }
HAnimSegment1111.FdChildren.Add(Shape1112);
Transform1116 := TTransformNode.Create;
Transform1116.Translation := Vector3(-0.2,0.835,-0.065);
{ METHOD .FdChildren.Add }
Transform1116.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1111.FdChildren.Add(Transform1116);
{ METHOD .FdChildren.Add }
HAnimJoint1110.FdChildren.Add(HAnimSegment1111);
HAnimJoint1118 := THAnimJointNode.Create;
HAnimJoint1118.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint1118.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint1118.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1119 := THAnimSegmentNode.Create;
Shape1120 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1120.Appearance := Appearance67;
IndexedLineSet1122 := TIndexedLineSetNode.Create;
IndexedLineSet1122.SetCoordIndex([0,1,-1]);
Coordinate1123 := TCoordinateNode.Create;
Coordinate1123.SetPoint([Vector3(-0.2,0.793,-0.065),Vector3(-0.2,0.74,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1122.Coord := Coordinate1123;
{ METHOD .Geometry }
Shape1120.Geometry := IndexedLineSet1122;
{ METHOD .FdChildren.Add }
HAnimSegment1119.FdChildren.Add(Shape1120);
Transform1124 := TTransformNode.Create;
Transform1124.Translation := Vector3(-0.2,0.793,-0.065);
{ METHOD .FdChildren.Add }
Transform1124.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1119.FdChildren.Add(Transform1124);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart64;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1118.FdChildren.Add(HAnimSegment1119);
HAnimJoint1126 := THAnimJointNode.Create;
HAnimJoint1126.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint1126.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint1126.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1127 := THAnimSegmentNode.Create;
Shape1128 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1128.Appearance := Appearance67;
IndexedLineSet1130 := TIndexedLineSetNode.Create;
IndexedLineSet1130.SetCoordIndex([0,1,-1]);
Coordinate1131 := TCoordinateNode.Create;
Coordinate1131.SetPoint([Vector3(-0.2,0.74,-0.065),Vector3(-0.2,0.7177,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1130.Coord := Coordinate1131;
{ METHOD .Geometry }
Shape1128.Geometry := IndexedLineSet1130;
{ METHOD .FdChildren.Add }
HAnimSegment1127.FdChildren.Add(Shape1128);
Transform1132 := TTransformNode.Create;
Transform1132.Translation := Vector3(-0.2,0.74,-0.065);
{ METHOD .FdChildren.Add }
Transform1132.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1127.FdChildren.Add(Transform1132);
{ METHOD .FdChildren.Add }
HAnimJoint1126.FdChildren.Add(HAnimSegment1127);
HAnimJoint1134 := THAnimJointNode.Create;
HAnimJoint1134.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint1134.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint1134.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1135 := THAnimSegmentNode.Create;
Shape1136 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1136.Appearance := Appearance67;
IndexedLineSet1138 := TIndexedLineSetNode.Create;
IndexedLineSet1138.SetCoordIndex([0,1,-1]);
Coordinate1139 := TCoordinateNode.Create;
Coordinate1139.SetPoint([Vector3(-0.2,0.7177,-0.065),Vector3(-0.2,0.695,-0.065)]);
{ METHOD .Coord }
IndexedLineSet1138.Coord := Coordinate1139;
{ METHOD .Geometry }
Shape1136.Geometry := IndexedLineSet1138;
{ METHOD .FdChildren.Add }
HAnimSegment1135.FdChildren.Add(Shape1136);
Transform1140 := TTransformNode.Create;
Transform1140.Translation := Vector3(-0.2,0.7177,-0.065);
{ METHOD .FdChildren.Add }
Transform1140.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1135.FdChildren.Add(Transform1140);
HAnimSite1142 := THAnimSiteNode.Create;
HAnimSite1142.Translation := Vector3(-0.2,0.695,-0.065);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart65;
begin

{ METHOD .FdChildren.Add }
HAnimSite1142.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1135.FdChildren.Add(HAnimSite1142);
{ METHOD .FdChildren.Add }
HAnimJoint1134.FdChildren.Add(HAnimSegment1135);
{ METHOD .FdChildren.Add }
HAnimJoint1126.FdChildren.Add(HAnimJoint1134);
{ METHOD .FdChildren.Add }
HAnimJoint1118.FdChildren.Add(HAnimJoint1126);
{ METHOD .FdChildren.Add }
HAnimJoint1110.FdChildren.Add(HAnimJoint1118);
{ METHOD .FdChildren.Add }
HAnimJoint1000.FdChildren.Add(HAnimJoint1110);
HAnimJoint1144 := THAnimJointNode.Create;
HAnimJoint1144.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint1144.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint1144.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment1145 := THAnimSegmentNode.Create;
Shape1146 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1146.Appearance := Appearance67;
IndexedLineSet1148 := TIndexedLineSetNode.Create;
IndexedLineSet1148.SetCoordIndex([0,1,-1]);
Coordinate1149 := TCoordinateNode.Create;
Coordinate1149.SetPoint([Vector3(-0.2,0.84,-0.085),Vector3(-0.2,0.79,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1148.Coord := Coordinate1149;
{ METHOD .Geometry }
Shape1146.Geometry := IndexedLineSet1148;
{ METHOD .FdChildren.Add }
HAnimSegment1145.FdChildren.Add(Shape1146);
Transform1150 := TTransformNode.Create;
Transform1150.Translation := Vector3(-0.2,0.84,-0.085);
{ METHOD .FdChildren.Add }
Transform1150.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1145.FdChildren.Add(Transform1150);
HAnimSite1152 := THAnimSiteNode.Create;
HAnimSite1152.Translation := Vector3(-0.2,0.79,-0.095);
{ METHOD .FdChildren.Add }
HAnimSite1152.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1145.FdChildren.Add(HAnimSite1152);
{ METHOD .FdChildren.Add }
HAnimJoint1144.FdChildren.Add(HAnimSegment1145);
HAnimJoint1154 := THAnimJointNode.Create;
HAnimJoint1154.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint1154.SetSkinCoordIndex([276,277,278]);
HAnimJoint1154.SetSkinCoordWeight([1,1,1]);
HAnimSegment1155 := THAnimSegmentNode.Create;
Shape1156 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1156.Appearance := Appearance67;
IndexedLineSet1158 := TIndexedLineSetNode.Create;
IndexedLineSet1158.SetCoordIndex([0,1,-1]);
Coordinate1159 := TCoordinateNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart66;
begin

Coordinate1159.SetPoint([Vector3(-0.2,0.79,-0.085),Vector3(-0.2,0.755,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1158.Coord := Coordinate1159;
{ METHOD .Geometry }
Shape1156.Geometry := IndexedLineSet1158;
{ METHOD .FdChildren.Add }
HAnimSegment1155.FdChildren.Add(Shape1156);
Transform1160 := TTransformNode.Create;
Transform1160.Translation := Vector3(-0.2,0.79,-0.085);
{ METHOD .FdChildren.Add }
Transform1160.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1155.FdChildren.Add(Transform1160);
{ METHOD .FdChildren.Add }
HAnimJoint1154.FdChildren.Add(HAnimSegment1155);
HAnimJoint1162 := THAnimJointNode.Create;
HAnimJoint1162.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint1162.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint1162.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1163 := THAnimSegmentNode.Create;
Shape1164 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1164.Appearance := Appearance67;
IndexedLineSet1166 := TIndexedLineSetNode.Create;
IndexedLineSet1166.SetCoordIndex([0,1,-1]);
Coordinate1167 := TCoordinateNode.Create;
Coordinate1167.SetPoint([Vector3(-0.2,0.755,-0.085),Vector3(-0.2,0.735,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1166.Coord := Coordinate1167;
{ METHOD .Geometry }
Shape1164.Geometry := IndexedLineSet1166;
{ METHOD .FdChildren.Add }
HAnimSegment1163.FdChildren.Add(Shape1164);
Transform1168 := TTransformNode.Create;
Transform1168.Translation := Vector3(-0.2,0.755,-0.085);
{ METHOD .FdChildren.Add }
Transform1168.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1163.FdChildren.Add(Transform1168);
{ METHOD .FdChildren.Add }
HAnimJoint1162.FdChildren.Add(HAnimSegment1163);
HAnimJoint1170 := THAnimJointNode.Create;
HAnimJoint1170.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint1170.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint1170.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1171 := THAnimSegmentNode.Create;
Shape1172 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1172.Appearance := Appearance67;
IndexedLineSet1174 := TIndexedLineSetNode.Create;
IndexedLineSet1174.SetCoordIndex([0,1,-1]);
Coordinate1175 := TCoordinateNode.Create;
Coordinate1175.SetPoint([Vector3(-0.2,0.735,-0.085),Vector3(-0.2,0.72,-0.085)]);
{ METHOD .Coord }
IndexedLineSet1174.Coord := Coordinate1175;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart67;
begin

{ METHOD .Geometry }
Shape1172.Geometry := IndexedLineSet1174;
{ METHOD .FdChildren.Add }
HAnimSegment1171.FdChildren.Add(Shape1172);
Transform1176 := TTransformNode.Create;
Transform1176.Translation := Vector3(-0.2,0.735,-0.085);
{ METHOD .FdChildren.Add }
Transform1176.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimSegment1171.FdChildren.Add(Transform1176);
HAnimSite1178 := THAnimSiteNode.Create;
HAnimSite1178.Translation := Vector3(-0.2,0.72,-0.085);
{ METHOD .FdChildren.Add }
HAnimSite1178.FdChildren.Add(Shape60);
{ METHOD .FdChildren.Add }
HAnimSegment1171.FdChildren.Add(HAnimSite1178);
{ METHOD .FdChildren.Add }
HAnimJoint1170.FdChildren.Add(HAnimSegment1171);
{ METHOD .FdChildren.Add }
HAnimJoint1162.FdChildren.Add(HAnimJoint1170);
{ METHOD .FdChildren.Add }
HAnimJoint1154.FdChildren.Add(HAnimJoint1162);
{ METHOD .FdChildren.Add }
HAnimJoint1144.FdChildren.Add(HAnimJoint1154);
{ METHOD .FdChildren.Add }
HAnimJoint1000.FdChildren.Add(HAnimJoint1144);
{ METHOD .FdChildren.Add }
HAnimJoint978.FdChildren.Add(HAnimJoint1000);
{ METHOD .FdChildren.Add }
HAnimJoint948.FdChildren.Add(HAnimJoint978);
{ METHOD .FdChildren.Add }
HAnimJoint932.FdChildren.Add(HAnimJoint948);
{ METHOD .FdChildren.Add }
HAnimJoint922.FdChildren.Add(HAnimJoint932);
{ METHOD .FdChildren.Add }
HAnimJoint556.FdChildren.Add(HAnimJoint922);
{ METHOD .FdChildren.Add }
HAnimJoint548.FdChildren.Add(HAnimJoint556);
{ METHOD .FdChildren.Add }
HAnimJoint540.FdChildren.Add(HAnimJoint548);
{ METHOD .FdChildren.Add }
HAnimJoint530.FdChildren.Add(HAnimJoint540);
{ METHOD .FdChildren.Add }
HAnimJoint522.FdChildren.Add(HAnimJoint530);
{ METHOD .FdChildren.Add }
HAnimJoint514.FdChildren.Add(HAnimJoint522);
{ METHOD .FdChildren.Add }
HAnimJoint506.FdChildren.Add(HAnimJoint514);
{ METHOD .FdChildren.Add }
HAnimJoint498.FdChildren.Add(HAnimJoint506);
{ METHOD .FdChildren.Add }
HAnimJoint486.FdChildren.Add(HAnimJoint498);
{ METHOD .FdChildren.Add }
HAnimJoint476.FdChildren.Add(HAnimJoint486);
{ METHOD .FdChildren.Add }
HAnimJoint468.FdChildren.Add(HAnimJoint476);
{ METHOD .FdChildren.Add }
HAnimJoint460.FdChildren.Add(HAnimJoint468);
{ METHOD .FdChildren.Add }
HAnimJoint452.FdChildren.Add(HAnimJoint460);
{ METHOD .FdChildren.Add }
HAnimJoint426.FdChildren.Add(HAnimJoint452);
{ METHOD .FdChildren.Add }
HAnimJoint418.FdChildren.Add(HAnimJoint426);
{ METHOD .FdChildren.Add }
HAnimJoint410.FdChildren.Add(HAnimJoint418);
{ METHOD .FdChildren.Add }
HAnimJoint395.FdChildren.Add(HAnimJoint410);
{ METHOD .FdChildren.Add }
HAnimJoint81.FdChildren.Add(HAnimJoint395);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid78.FdSkeleton.Add(HAnimJoint81);
Shape1180 := TShapeNode.Create;
Appearance1181 := TAppearanceNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart68;
begin

Material1182 := TMaterialNode.Create;
Material1182.AmbientIntensity := 0.6;
Material1182.DiffuseColor := Vector3(1,1,1);
Material1182.Shininess := 0.6;
Material1182.Transparency := 0.2;
{ METHOD .SetMaterial }
Appearance1181.Material := Material1182;
ImageTexture1183 := TImageTextureNode.Create;
ImageTexture1183.Description := 'Blue Spiral Pattern';
ImageTexture1183.SetUrl(['zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ METHOD .Texture }
Appearance1181.Texture := ImageTexture1183;
{ METHOD .Appearance }
Shape1180.Appearance := Appearance1181;
IndexedFaceSet1184 := TIndexedFaceSetNode.Create;
IndexedFaceSet1184.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1184.CreaseAngle := 3.1;
Color1185 := TColorNode.Create;
Color1185.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart69;
begin

{ METHOD .Color }
IndexedFaceSet1184.Color := Color1185;
Coordinate1186 := TCoordinateNode.Create;
Coordinate1186.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.0723,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ METHOD .Coord }
IndexedFaceSet1184.Coord := Coordinate1186;
{ METHOD .Geometry }
Shape1180.Geometry := IndexedFaceSet1184;
{ METHOD .SetSkin }
HAnimHumanoid78.Skin := Shape1180;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid78.FdSkinCoord.Set(Coordinate1186);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint81);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint93);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint395);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint410);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint418);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint426);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint452);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint460);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint468);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint476);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint486);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint498);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint506);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint514);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint522);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint530);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint540);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint548);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint556);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint568);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint580);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart70;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint588);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint596);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint604);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint612);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint620);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint628);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint682);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint932);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint808);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1064);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint844);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1098);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint878);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1134);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint912);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1170);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint774);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1026);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint800);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1056);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint836);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1090);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint870);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1126);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint904);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1162);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint758);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1010);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint784);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1038);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint820);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1074);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint854);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1110);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint888);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1144);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint722);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint978);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint656);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint664);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart71;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint123);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint259);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint149);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint285);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint766);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1018);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint792);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1048);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint828);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1082);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint862);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1118);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint896);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1154);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint229);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint211);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint347);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint744);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint1000);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint698);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint948);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint672);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint922);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint177);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint313);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint365);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint197);
{ METHOD .FdJoints.Add }
HAnimHumanoid78.FdJoints.Add(HAnimJoint333);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment621);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment613);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment605);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment597);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment589);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment581);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment569);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment453);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment427);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment419);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment411);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment401);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart72;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment94);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment82);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment629);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment557);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment477);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment469);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment461);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment549);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment541);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment531);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment523);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment515);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment507);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment499);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment487);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment396);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment150);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment286);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment745);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1001);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment775);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1027);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment809);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1065);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment845);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1099);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment879);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1135);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment913);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1171);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment801);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1057);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment837);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1091);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment871);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1127);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment905);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1163);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment767);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1019);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart73;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment793);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1049);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment829);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1083);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment863);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1119);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment897);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1155);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment673);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment923);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment657);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment665);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment723);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment979);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment759);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1011);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment785);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1039);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment821);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1075);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment855);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1111);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment889);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment1145);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment198);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment334);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment683);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment933);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment178);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment314);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment230);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment366);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment212);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment348);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment124);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment260);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment699);
{ METHOD .FdSegments.Add }
HAnimHumanoid78.FdSegments.Add(HAnimSegment949);
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite566;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite121;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart74;
begin

{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite118;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite408;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite654;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite450;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite638;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite636;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite484;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite644;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite564;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite406;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite692;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite942;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite110;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite112;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite696;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite946;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite694;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite944;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite195;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite331;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite782;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1036;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite816;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1072;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite850;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1108;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite886;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1142;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite920;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1178;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite680;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite930;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite818;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1106;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite145;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite281;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite147;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite283;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite652;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite648;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart75;
begin

{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite720;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite976;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite716;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite972;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite102;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite106;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite642;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite640;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite143;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite279;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite173;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite309;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite175;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite311;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite752;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1046;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite756;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1152;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite227;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite363;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite255;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite391;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite578;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite576;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite742;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite998;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite114;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite116;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite740;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite996;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite718;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite974;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite448;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite446;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite193;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite329;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite257;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite393;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite496;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite494;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart76;
begin

{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite650;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite646;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite104;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite108;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite754;
{ METHOD .SetSites }
HAnimHumanoid78.Sites := HAnimSite1008;
{ METHOD .FdChildren.Add }
Group77.FdChildren.Add(HAnimHumanoid78);
{ METHOD .FdChildren.Add }
Group76.FdChildren.Add(Group77);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Group76);
TimeSensor1455 := TTimeSensorNode.Create;
TimeSensor1455.CycleInterval := 2.86;
TimeSensor1455.Loop := True;
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(TimeSensor1455);
TimeSensor1456 := TTimeSensorNode.Create;
TimeSensor1456.CycleInterval := 5.72;
TimeSensor1456.Loop := True;
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(TimeSensor1456);
TimeSensor1457 := TTimeSensorNode.Create;
TimeSensor1457.CycleInterval := 5.8;
TimeSensor1457.Loop := True;
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(TimeSensor1457);
OrientationInterpolator1458 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1458.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1458.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,1.256),Vector4(1,0,0,2.512),Vector4(1,0,0,3.768),Vector4(1,0,0,5.024),Vector4(1,0,0,6.28)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1458);
OrientationInterpolator1459 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1459.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1459.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,1.256),Vector4(0,1,0,2.512),Vector4(0,1,0,3.768),Vector4(0,1,0,5.024),Vector4(0,1,0,6.28)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1459);
OrientationInterpolator1460 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1460.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1460.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.256),Vector4(0,0,1,2.512),Vector4(0,0,1,3.768),Vector4(0,0,1,5.024),Vector4(0,0,1,6.28)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1460);
OrientationInterpolator1461 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1461.SetKey([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1461.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0.7),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0.5),Vector4(-0.4,-1,0,0.7),Vector4(-0.4,-1,0,0.4),Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1461);
{ Original "Time2.EventFraction_changed TO vc6Yaw.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO vc6Yaw.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1461.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "vc6Yaw.EventValue_changed TO Joe_vc6.FdRotation.EventIn }
{ Sample vc6Yaw.EventValue_changed TO Joe_vc6.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1461.EventValue_changed, HAnimJoint580.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1464 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart77;
begin

OrientationInterpolator1464.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1464.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.2,0.2,0.2,0.2),Vector4(-0.2,0.2,0.2,0.2),Vector4(-0.2,-0.2,0.2,0.2),Vector4(0.2,-0.2,0.2,0.2),Vector4(-0.2,0.2,-0.2,0.2),Vector4(-0.2,0.2,-0.2,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1464);
{ Original "Time3.EventFraction_changed TO EyeballsRotation.EventSet_fraction }
{ Sample Time3.EventFraction_changed TO EyeballsRotation.EventSet_fraction}
Group33.AddRoute(TimeSensor1457.EventFraction_changed, OrientationInterpolator1464.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "EyeballsRotation.EventValue_changed TO Joe_r_eyeball_joint.FdRotation.EventIn }
{ Sample EyeballsRotation.EventValue_changed TO Joe_r_eyeball_joint.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint664.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "EyeballsRotation.EventValue_changed TO Joe_l_eyeball_joint.FdRotation.EventIn }
{ Sample EyeballsRotation.EventValue_changed TO Joe_l_eyeball_joint.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint656.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1468.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1468.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.2,-1,0,0.11),Vector4(0.2,-1,0,0.11),Vector4(0.1,-1,0,0.1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1468);
OrientationInterpolator1469 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1469.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1469.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1469);
OrientationInterpolator1470 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1470.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1470.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.4,-0.7,-0.55,0.35),Vector4(0.4,-0.7,-0.55,0.35),Vector4(0.4,-0.7,-0.55,0.35),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1470);
OrientationInterpolator1471 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1471.SetKey([0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1471.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.2,0,0.01,0.5),Vector4(-0.2,0,0.01,0.5),Vector4(-0.2,0,0.01,0.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1471);
OrientationInterpolator1472 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1472.SetKey([0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1472.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0.1,-0.09,0.25),Vector4(0,0.1,-0.09,0.25),Vector4(0,0.1,-0.09,0.25),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1472);
OrientationInterpolator1473 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1473.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1473.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.25,0.25,-1,0.125),Vector4(-0.25,0.25,-1,0.125),Vector4(-0.25,0.25,-1,0.125),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1473);
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1474.SetKey([0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1474.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.135,-0.135,1,0.357),Vector4(-0.159,-0.153,1,0.355),Vector4(-0.159,-0.153,1,0.357),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1474);
OrientationInterpolator1475 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1475.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1475.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,-1,0.14),Vector4(0,0,-1,0.14),Vector4(0,0,-1,0.14),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1475);
OrientationInterpolator1476 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1476.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart78;
begin

OrientationInterpolator1476.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,0.3,0.257),Vector4(0,0,0.3,0.37),Vector4(0,0,0.3,0.39),Vector4(0,0,0.3,0.31),Vector4(0,0,0.3,0.32),Vector4(0,0,0.3,0.34),Vector4(0,0,0.3,0.28),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1476);
OrientationInterpolator1477 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1477.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1477.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.25,0.25,-1,0.1),Vector4(0.25,0.25,-1,0.1),Vector4(0.25,0.25,-1,0.1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1477);
OrientationInterpolator1478 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1478.SetKey([0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1478.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.135,0.135,1,0.27),Vector4(0.135,0.135,1,0.27),Vector4(0.135,0.15,1,0.27),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1478);
OrientationInterpolator1479 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1479.SetKey([0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1479.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.35,0.35,-0.7,0.12),Vector4(0.35,0.35,-0.9,0.12),Vector4(0.35,0.35,-0.7,0.12),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1479);
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1480.SetKey([0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1480.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.2,0.25,1,0.27),Vector4(0.2,0.22,1,0.27),Vector4(0.22,0.2,1,0.27),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1480);
OrientationInterpolator1481 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1481.SetKey([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1481.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,-1,1,1),Vector4(0.5,-0.16,0.16,0.785),Vector4(0.5,-0.16,0.16,0.785),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1481);
OrientationInterpolator1482 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1482.SetKey([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1482.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.45),Vector4(1,0,0,0.45),Vector4(1,0,0,0.45),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1482);
OrientationInterpolator1483 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1483.SetKey([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1483.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.45),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1483);
OrientationInterpolator1484 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1484.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1484.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.43),Vector4(0,0,1,0.44),Vector4(0,0,1,0.46),Vector4(0,0,1,0.44),Vector4(0,0,1,0.245),Vector4(0,0,1,0.24),Vector4(0,0,1,0.21),Vector4(0,0,1,0.24),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1484);
OrientationInterpolator1485 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1485.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1485.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.37),Vector4(0,0,1,0.38),Vector4(0,0,1,0.39),Vector4(0,0,1,0.38),Vector4(0,0,1,0.27),Vector4(0,0,1,0.28),Vector4(0,0,1,0.27),Vector4(0,0,1,0.28),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1485);
{ Original "r_sternoclavicularRelax.EventValue_changed TO Joe_r_sternoclavicular.FdRotation.EventIn }
{ Sample r_sternoclavicularRelax.EventValue_changed TO Joe_r_sternoclavicular.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1468.EventValue_changed, HAnimJoint922.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_acromioclavicularRelax.EventValue_changed TO Joe_r_acromioclavicular.FdRotation.EventIn }
{ Sample r_acromioclavicularRelax.EventValue_changed TO Joe_r_acromioclavicular.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1469.EventValue_changed, HAnimJoint932.FdRotation.EventIn);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart79;
begin

{ METHOD .AddX3DROUTE }
{ Original "r_shoulderRelax.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn }
{ Sample r_shoulderRelax.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1470.EventValue_changed, HAnimJoint948.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_elbowRelax.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn }
{ Sample r_elbowRelax.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1471.EventValue_changed, HAnimJoint978.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_wristRelax.EventValue_changed TO Joe_r_radiocarpal.FdRotation.EventIn }
{ Sample r_wristRelax.EventValue_changed TO Joe_r_radiocarpal.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1472.EventValue_changed, HAnimJoint1000.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb1Relax.EventValue_changed TO Joe_r_carpometacarpal_1.FdRotation.EventIn }
{ Sample r_thumb1Relax.EventValue_changed TO Joe_r_carpometacarpal_1.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1481.EventValue_changed, HAnimJoint1010.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb2Relax.EventValue_changed TO Joe_r_metacarpophalangeal_1.FdRotation.EventIn }
{ Sample r_thumb2Relax.EventValue_changed TO Joe_r_metacarpophalangeal_1.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1482.EventValue_changed, HAnimJoint1018.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb3Relax.EventValue_changed TO Joe_r_carpal_interphalangeal_1.FdRotation.EventIn }
{ Sample r_thumb3Relax.EventValue_changed TO Joe_r_carpal_interphalangeal_1.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1483.EventValue_changed, HAnimJoint1026.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_index0Relax.EventValue_changed TO Joe_r_carpometacarpal_2.FdRotation.EventIn }
{ Sample r_index0Relax.EventValue_changed TO Joe_r_carpometacarpal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1473.EventValue_changed, HAnimJoint1038.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_index1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_2.FdRotation.EventIn }
{ Sample r_index1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1474.EventValue_changed, HAnimJoint1048.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_2.FdRotation.EventIn }
{ Sample r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1056.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_2.FdRotation.EventIn }
{ Sample r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1064.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_middle0Relax.EventValue_changed TO Joe_r_carpometacarpal_3.FdRotation.EventIn }
{ Sample r_middle0Relax.EventValue_changed TO Joe_r_carpometacarpal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1475.EventValue_changed, HAnimJoint1074.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_middle1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_3.FdRotation.EventIn }
{ Sample r_middle1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1476.EventValue_changed, HAnimJoint1082.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_3.FdRotation.EventIn }
{ Sample r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1090.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_3.FdRotation.EventIn }
{ Sample r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1098.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ring0Relax.EventValue_changed TO Joe_r_carpometacarpal_4.FdRotation.EventIn }
{ Sample r_ring0Relax.EventValue_changed TO Joe_r_carpometacarpal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1477.EventValue_changed, HAnimJoint1110.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ring1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_4.FdRotation.EventIn }
{ Sample r_ring1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1478.EventValue_changed, HAnimJoint1118.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_4.FdRotation.EventIn }
{ Sample r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1126.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_4.FdRotation.EventIn }
{ Sample r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1134.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky0Relax.EventValue_changed TO Joe_r_carpometacarpal_5.FdRotation.EventIn }
{ Sample r_pinky0Relax.EventValue_changed TO Joe_r_carpometacarpal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1479.EventValue_changed, HAnimJoint1144.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_5.FdRotation.EventIn }
{ Sample r_pinky1Relax.EventValue_changed TO Joe_r_metacarpophalangeal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1480.EventValue_changed, HAnimJoint1154.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_5.FdRotation.EventIn }
{ Sample r_fingers2Relax.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1162.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_5.FdRotation.EventIn }
{ Sample r_fingers3Relax.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1170.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
OrientationInterpolator1510 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1510.SetKey([0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1510.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,0.1),Vector4(0,0,-1,0.22),Vector4(0,0.5,-1,0.27),Vector4(0,0,-1,0.1),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1510);
OrientationInterpolator1511 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1511.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1511.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1511);
OrientationInterpolator1512 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1512.SetKey([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1512.SetKeyValue([Vector4(1,0,0,0),Vector4(0,0,-1,1.66),Vector4(-0.25,0,-1,1.76),Vector4(0,0,-1,1.256),Vector4(0,0,-1,0.05),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1512);
OrientationInterpolator1513 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1513.SetKey([0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1513.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.55),Vector4(-1,-0.25,0,2.55),Vector4(-1,-0.25,0,2.55),Vector4(-1,-0.25,0,2.55),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1513);
OrientationInterpolator1514 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1514.SetKey([0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart80;
begin

OrientationInterpolator1514.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,-0.55),Vector4(0,0,1,0),Vector4(0,1,0,1.55),Vector4(0,0,-1,1.55),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1514);
OrientationInterpolator1515 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1515.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1515.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,0.01,0.25),Vector4(0,0,-0.01,0.03),Vector4(0,0,0.01,0.05),Vector4(0,0,0.01,0.01),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1515);
OrientationInterpolator1516 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1516.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1516.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1),Vector4(1,0,0,0.4),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1516);
OrientationInterpolator1517 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1517.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1517.SetKeyValue([Vector4(0,0,1,0),Vector4(1,1,0,0.3),Vector4(1,1,0,0.3),Vector4(1,1,0,0.6),Vector4(1,1,0,0.3),Vector4(0,1,1,0)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1517);
OrientationInterpolator1518 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1518.SetKey([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1518.SetKeyValue([Vector4(0.25,0,1,1.76),Vector4(0,0,1,1.66),Vector4(0.25,0,1,1.76),Vector4(0,0,1,1.256),Vector4(0,0,1,0.05),Vector4(0.25,0,1,1.76)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(OrientationInterpolator1518);
{ Original "Time2.EventFraction_changed TO r_sternoclavicularRoll.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_sternoclavicularRoll.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1510.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_acromioclavicularRoll.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_acromioclavicularRoll.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1511.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_shoulderRoll.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_shoulderRoll.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1512.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_ForeArmPitch.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_ForeArmPitch.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1513.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_wristRoll.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_wristRoll.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1514.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_handPitch.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_handPitch.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1515.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_thumb1Pitch.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_thumb1Pitch.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1516.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time2.EventFraction_changed TO r_thumb2Pitch.EventSet_fraction }
{ Sample Time2.EventFraction_changed TO r_thumb2Pitch.EventSet_fraction}
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1517.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "r_sternoclavicularRoll.EventValue_changed TO Joe_r_sternoclavicular.FdRotation.EventIn }
{ Sample r_sternoclavicularRoll.EventValue_changed TO Joe_r_sternoclavicular.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1510.EventValue_changed, HAnimJoint922.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_acromioclavicularRoll.EventValue_changed TO Joe_r_acromioclavicular.FdRotation.EventIn }
{ Sample r_acromioclavicularRoll.EventValue_changed TO Joe_r_acromioclavicular.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1511.EventValue_changed, HAnimJoint932.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_shoulderRoll.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn }
{ Sample r_shoulderRoll.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1512.EventValue_changed, HAnimJoint948.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ForeArmPitch.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn }
{ Sample r_ForeArmPitch.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1513.EventValue_changed, HAnimJoint978.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_wristRoll.EventValue_changed TO Joe_r_radiocarpal.FdRotation.EventIn }
{ Sample r_wristRoll.EventValue_changed TO Joe_r_radiocarpal.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1514.EventValue_changed, HAnimJoint1000.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_2.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1038.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_2.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1048.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_2.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1056.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_2.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1064.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_3.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1074.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_3.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1082.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_3.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1090.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_3.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_3.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1098.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_4.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1110.FdRotation.EventIn);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart81;
begin

{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_4.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1118.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_4.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1126.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_4.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_4.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1134.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_5.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpometacarpal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1144.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_5.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_metacarpophalangeal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1154.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_5.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_proximal_interphalangeal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1162.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_5.FdRotation.EventIn }
{ Sample r_handPitch.EventValue_changed TO Joe_r_carpal_distal_interphalangeal_5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1170.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb1Pitch.EventValue_changed TO Joe_r_carpometacarpal_1.FdRotation.EventIn }
{ Sample r_thumb1Pitch.EventValue_changed TO Joe_r_carpometacarpal_1.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1516.EventValue_changed, HAnimJoint1010.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb2Pitch.EventValue_changed TO Joe_r_metacarpophalangeal_1.FdRotation.EventIn }
{ Sample r_thumb2Pitch.EventValue_changed TO Joe_r_metacarpophalangeal_1.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1517.EventValue_changed, HAnimJoint1018.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb2Pitch.EventValue_changed TO Joe_r_carpal_interphalangeal_1.FdRotation.EventIn }
{ Sample r_thumb2Pitch.EventValue_changed TO Joe_r_carpal_interphalangeal_1.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1517.EventValue_changed, HAnimJoint1026.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_shoulderRoll.EventValue_changed TO Joe_l_shoulder.FdRotation.EventIn }
{ Sample l_shoulderRoll.EventValue_changed TO Joe_l_shoulder.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1518.EventValue_changed, HAnimJoint698.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
Group1552 := TGroupNode.Create;
PositionInterpolator1553 := TPositionInterpolatorNode.Create;
PositionInterpolator1553.SetKey([0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1553.SetKeyValue([Vector3(0,-0.0093,0),Vector3(0,-0.0039,0),Vector3(0,-0.0088,0),Vector3(0,-0.0149,0),Vector3(0,-0.0264,0),Vector3(0,-0.0393,0),Vector3(0,-0.0502,0),Vector3(0,-0.0747,0),Vector3(0,-0.0273,0),Vector3(0,-0.0161,0),Vector3(0,-0.0113,0),Vector3(0,-0.0058,0),Vector3(0,-0.002,0),Vector3(0,-0.0026,0),Vector3(0,-0.0143,0),Vector3(0,-0.038,0),Vector3(0,-0.0565,0),Vector3(0,-0.045,0),Vector3(0,-0.0093,0)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(PositionInterpolator1553);
OrientationInterpolator1554 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1554.SetKey([0,1]);
OrientationInterpolator1554.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1554);
OrientationInterpolator1555 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1555.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1555.SetKeyValue([Vector4(-0.873,0.0609,0.484,0.2865),Vector4(0.9963,-0.0106,0.0848,0.2488),Vector4(0.9965,0.0159,-0.0822,0.3836),Vector4(-0.7018,-0.0322,-0.7117,0.1289),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.0223,0.0817,0.5351),Vector4(-0.9809,0.0491,0.1881,0.5204),Vector4(-0.873,0.0609,0.484,0.2865)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1555);
OrientationInterpolator1556 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1556.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1556.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.0868),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.0996),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1556);
OrientationInterpolator1557 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1557.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1557.SetKeyValue([Vector4(-1,0,0,0.0671),Vector4(-1,0,0,0.2152),Vector4(-1,0,0,0.3184),Vector4(-1,0,0,0.4717),Vector4(-1,0,0,0.2912),Vector4(1,0,0,0.2222),Vector4(-1,0,0,0.0671)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1557);
OrientationInterpolator1558 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1558.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1558.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.3533),Vector4(-1,0,0,0.1072),Vector4(1,0,0,0.4),Vector4(1,0,0,0.127),Vector4(-1,0,0,0.018),Vector4(-1,0,0,0.058),Vector4(-1,0,0,0.24),Vector4(-1,0,0,0.35),Vector4(-1,0,0,0.33),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1558);
OrientationInterpolator1559 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1559.SetKey([0,0.3,1]);
OrientationInterpolator1559.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1559);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart82;
begin

OrientationInterpolator1560 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1560.SetKey([0,0.5,1]);
OrientationInterpolator1560.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1560);
OrientationInterpolator1561 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1561.SetKey([0,0.2,0.4,0.8,1]);
OrientationInterpolator1561.SetKeyValue([Vector4(-1,0,0,0.3),Vector4(-1,0,0,0.15),Vector4(1,0,0,0.3),Vector4(0,0,1,0),Vector4(-1,0,0,0.3)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1561);
OrientationInterpolator1562 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1562.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1562.SetKeyValue([Vector4(-0.5831,0.0351,0.8116,0.1481),Vector4(-0.995,0.023,0.0967,0.4683),Vector4(-1,0.0019,0.008,0.4732),Vector4(-0.998,-0.0158,-0.061,0.5079),Vector4(-0.9911,-0.0354,-0.1286,0.5419),Vector4(-0.9131,-0.0624,-0.403,0.3361),Vector4(-0.4306,-0.0796,-0.899,0.0704),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.0281,0.1444,0.3879),Vector4(-0.5831,0.0351,0.8116,0.1481)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1562);
OrientationInterpolator1563 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1563.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1563.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.8926),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,0,0,0.0935),Vector4(1,0,0,0.0856),Vector4(1,0,0,0.2475),Vector4(1,0,0,0.8573)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1563);
OrientationInterpolator1564 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1564.SetKey([0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1564.SetKeyValue([Vector4(-1,0,0,0.1),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.1),Vector4(0,0,1,0),Vector4(1,0,0,0.1),Vector4(1,0,0,0.25)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1564);
OrientationInterpolator1565 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1565.SetKey([0,0.22,1]);
OrientationInterpolator1565.SetKeyValue([Vector4(1,0,0,-0.2),Vector4(0,0,1,0),Vector4(1,0,0,-0.2)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1565);
OrientationInterpolator1566 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1566.SetKey([0,0.2,0.4,0.8,1]);
OrientationInterpolator1566.SetKeyValue([Vector4(-1,0,0,0.15),Vector4(0,0,1,0),Vector4(1,0,0,0.3),Vector4(-1,0,0,0.3),Vector4(-1,0,0,0.15)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1566);
OrientationInterpolator1567 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1567.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1567.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.0197,-0.5974,0.8017,0.0823),Vector4(0.0093,-0.9648,0.2627,0.1734),Vector4(-0.0124,0.9549,-0.2968,0.0873),Vector4(-0.0081,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1567);
OrientationInterpolator1568 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1568.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1568.SetKeyValue([Vector4(0,-1,0,0.0864),Vector4(0,1,0,0.1825),Vector4(0,1,0,0.1505),Vector4(0,1,0,0.1053),Vector4(0,1,0,0.0439),Vector4(0,-1,0,0.0312),Vector4(0,-1,0,0.0794),Vector4(0,-1,0,0.1616),Vector4(0,-1,0,0.155),Vector4(0,-1,0,0.0864)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1568);
OrientationInterpolator1569 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1569.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1569.SetKeyValue([Vector4(1,0,0.4,0.12),Vector4(-1,0,0.4,0.186),Vector4(1,0,0.1,0.336),Vector4(1,0,0.4,0.12)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1569);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart83;
begin

OrientationInterpolator1570 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1570.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1570.SetKeyValue([Vector4(-1,0,0,0.066),Vector4(-1,0,0,0.488),Vector4(-1,0,0,0.0177),Vector4(-1,0,0,0.066)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1570);
OrientationInterpolator1571 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1571.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1571.SetKeyValue([Vector4(0,-1,0,0.461),Vector4(-0.3302,-0.9275,0.1755,0.5388),Vector4(0.0328,-0.9993,-0.0172,0.492),Vector4(0,-1,0,0.4611)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1571);
OrientationInterpolator1572 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1572.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1572.SetKeyValue([Vector4(-1,0,-1,0.092),Vector4(1,0,-0.2,0.3197),Vector4(-1,0,-0.5,0.1564),Vector4(-1,0,-1,0.092)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1572);
OrientationInterpolator1573 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1573.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1573.SetKeyValue([Vector4(-1,0,0,0.4115),Vector4(-1,0,0,0.0925),Vector4(-1,0,0,0.5726),Vector4(-1,0,0,0.4115)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1573);
OrientationInterpolator1574 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1574.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1574.SetKeyValue([Vector4(-0.8129,0.4759,-0.3357,0.1346),Vector4(0.1533,-0.9878,0.0258,0.3902),Vector4(-0.5701,0.7604,-0.311,0.366),Vector4(-0.8129,0.4759,-0.3357,0.1346)]);
{ METHOD .FdChildren.Add }
Group1552.FdChildren.Add(OrientationInterpolator1574);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Group1552);
{ Original "Time1.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO HUMANOIDROOT_POSITION_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, PositionInterpolator1553.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO HUMANOIDROOT_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1554.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_HIP_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1555.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_KNEE_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1556.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_ANKLE_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1557.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_subtalar_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_subtalar_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1559.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_MIDTARSAL_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1560.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_metatarsal_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_metatarsal_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1561.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO R_HIP_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1562.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO R_KNEE_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1563.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO R_ANKLE_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1558.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO R_subtalar_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO R_subtalar_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1564.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO R_MIDTARSAL_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1565.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO R_metatarsal_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO R_metatarsal_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1566.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO VL5_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1567.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO SKULLBASE_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1568.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_SHOULDER_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1569.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_ELBOW_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1570.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Time1.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction }
{ Sample Time1.EventFraction_changed TO L_WRIST_ANIMATOR.EventSet_fraction}
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1571.EventSet_fraction);
end;

procedure InitJoeSkeletonSkinSiteSaluteWalkPart84;
begin

{ METHOD .AddX3DROUTE }
{ Original "HUMANOIDROOT_POSITION_ANIMATOR.EventValue_changed TO Joe_humanoid_root.FdTranslation.EventIn }
{ Sample HUMANOIDROOT_POSITION_ANIMATOR.EventValue_changed TO Joe_humanoid_root.FdTranslation.EventIn}
Group33.AddRoute(PositionInterpolator1553.EventValue_changed, HAnimJoint81.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "HUMANOIDROOT_ANIMATOR.EventValue_changed TO Joe_humanoid_root.FdRotation.EventIn }
{ Sample HUMANOIDROOT_ANIMATOR.EventValue_changed TO Joe_humanoid_root.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1554.EventValue_changed, HAnimJoint81.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_HIP_ANIMATOR.EventValue_changed TO Joe_l_hip.FdRotation.EventIn }
{ Sample L_HIP_ANIMATOR.EventValue_changed TO Joe_l_hip.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1555.EventValue_changed, HAnimJoint123.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_KNEE_ANIMATOR.EventValue_changed TO Joe_l_knee.FdRotation.EventIn }
{ Sample L_KNEE_ANIMATOR.EventValue_changed TO Joe_l_knee.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1556.EventValue_changed, HAnimJoint149.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_ANKLE_ANIMATOR.EventValue_changed TO Joe_l_talocrural.FdRotation.EventIn }
{ Sample L_ANKLE_ANIMATOR.EventValue_changed TO Joe_l_talocrural.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1557.EventValue_changed, HAnimJoint177.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_MIDTARSAL_ANIMATOR.EventValue_changed TO Joe_l_metatarsophalangeal_2.FdRotation.EventIn }
{ Sample L_MIDTARSAL_ANIMATOR.EventValue_changed TO Joe_l_metatarsophalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1560.EventValue_changed, HAnimJoint211.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_subtalar_ANIMATOR.EventValue_changed TO Joe_l_tarsometatarsal_2.FdRotation.EventIn }
{ Sample L_subtalar_ANIMATOR.EventValue_changed TO Joe_l_tarsometatarsal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1559.EventValue_changed, HAnimJoint197.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_metatarsal_ANIMATOR.EventValue_changed TO Joe_l_metatarsal.FdRotation.EventIn }
{ Sample L_metatarsal_ANIMATOR.EventValue_changed TO Joe_l_metatarsal.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1561.EventValue_changed, HAnimJoint229.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_HIP_ANIMATOR.EventValue_changed TO Joe_r_hip.FdRotation.EventIn }
{ Sample R_HIP_ANIMATOR.EventValue_changed TO Joe_r_hip.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1562.EventValue_changed, HAnimJoint259.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_KNEE_ANIMATOR.EventValue_changed TO Joe_r_knee.FdRotation.EventIn }
{ Sample R_KNEE_ANIMATOR.EventValue_changed TO Joe_r_knee.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1563.EventValue_changed, HAnimJoint285.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_ANKLE_ANIMATOR.EventValue_changed TO Joe_r_talocrural.FdRotation.EventIn }
{ Sample R_ANKLE_ANIMATOR.EventValue_changed TO Joe_r_talocrural.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1558.EventValue_changed, HAnimJoint313.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_subtalar_ANIMATOR.EventValue_changed TO Joe_r_tarsometatarsal_2.FdRotation.EventIn }
{ Sample R_subtalar_ANIMATOR.EventValue_changed TO Joe_r_tarsometatarsal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1564.EventValue_changed, HAnimJoint333.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_MIDTARSAL_ANIMATOR.EventValue_changed TO Joe_r_metatarsophalangeal_2.FdRotation.EventIn }
{ Sample R_MIDTARSAL_ANIMATOR.EventValue_changed TO Joe_r_metatarsophalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1565.EventValue_changed, HAnimJoint347.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_metatarsal_ANIMATOR.EventValue_changed TO Joe_r_tarsal_distal_interphalangeal_2.FdRotation.EventIn }
{ Sample R_metatarsal_ANIMATOR.EventValue_changed TO Joe_r_tarsal_distal_interphalangeal_2.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1566.EventValue_changed, HAnimJoint365.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "VL5_ANIMATOR.EventValue_changed TO Joe_vl5.FdRotation.EventIn }
{ Sample VL5_ANIMATOR.EventValue_changed TO Joe_vl5.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1567.EventValue_changed, HAnimJoint395.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "SKULLBASE_ANIMATOR.EventValue_changed TO Joe_skullbase.FdRotation.EventIn }
{ Sample SKULLBASE_ANIMATOR.EventValue_changed TO Joe_skullbase.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1568.EventValue_changed, HAnimJoint628.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_SHOULDER_ANIMATOR.EventValue_changed TO Joe_l_shoulder.FdRotation.EventIn }
{ Sample L_SHOULDER_ANIMATOR.EventValue_changed TO Joe_l_shoulder.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1569.EventValue_changed, HAnimJoint698.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_ELBOW_ANIMATOR.EventValue_changed TO Joe_l_elbow.FdRotation.EventIn }
{ Sample L_ELBOW_ANIMATOR.EventValue_changed TO Joe_l_elbow.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1570.EventValue_changed, HAnimJoint722.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "L_WRIST_ANIMATOR.EventValue_changed TO Joe_l_radiocarpal.FdRotation.EventIn }
{ Sample L_WRIST_ANIMATOR.EventValue_changed TO Joe_l_radiocarpal.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1571.EventValue_changed, HAnimJoint744.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_SHOULDER_ANIMATOR.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn }
{ Sample R_SHOULDER_ANIMATOR.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1572.EventValue_changed, HAnimJoint948.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_ELBOW_ANIMATOR.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn }
{ Sample R_ELBOW_ANIMATOR.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1573.EventValue_changed, HAnimJoint978.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "R_WRIST_ANIMATOR.EventValue_changed TO Joe_r_radiocarpal.FdRotation.EventIn }
{ Sample R_WRIST_ANIMATOR.EventValue_changed TO Joe_r_radiocarpal.FdRotation.EventIn}
Group33.AddRoute(OrientationInterpolator1574.EventValue_changed, HAnimJoint1000.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group33]);
end;

function CreateJoeSkeletonSkinSiteSaluteWalk: TX3DRootNode;
begin
InitJoeSkeletonSkinSiteSaluteWalkPart0;
InitJoeSkeletonSkinSiteSaluteWalkPart1;
InitJoeSkeletonSkinSiteSaluteWalkPart2;
InitJoeSkeletonSkinSiteSaluteWalkPart3;
InitJoeSkeletonSkinSiteSaluteWalkPart4;
InitJoeSkeletonSkinSiteSaluteWalkPart5;
InitJoeSkeletonSkinSiteSaluteWalkPart6;
InitJoeSkeletonSkinSiteSaluteWalkPart7;
InitJoeSkeletonSkinSiteSaluteWalkPart8;
InitJoeSkeletonSkinSiteSaluteWalkPart9;
InitJoeSkeletonSkinSiteSaluteWalkPart10;
InitJoeSkeletonSkinSiteSaluteWalkPart11;
InitJoeSkeletonSkinSiteSaluteWalkPart12;
InitJoeSkeletonSkinSiteSaluteWalkPart13;
InitJoeSkeletonSkinSiteSaluteWalkPart14;
InitJoeSkeletonSkinSiteSaluteWalkPart15;
InitJoeSkeletonSkinSiteSaluteWalkPart16;
InitJoeSkeletonSkinSiteSaluteWalkPart17;
InitJoeSkeletonSkinSiteSaluteWalkPart18;
InitJoeSkeletonSkinSiteSaluteWalkPart19;
InitJoeSkeletonSkinSiteSaluteWalkPart20;
InitJoeSkeletonSkinSiteSaluteWalkPart21;
InitJoeSkeletonSkinSiteSaluteWalkPart22;
InitJoeSkeletonSkinSiteSaluteWalkPart23;
InitJoeSkeletonSkinSiteSaluteWalkPart24;
InitJoeSkeletonSkinSiteSaluteWalkPart25;
InitJoeSkeletonSkinSiteSaluteWalkPart26;
InitJoeSkeletonSkinSiteSaluteWalkPart27;
InitJoeSkeletonSkinSiteSaluteWalkPart28;
InitJoeSkeletonSkinSiteSaluteWalkPart29;
InitJoeSkeletonSkinSiteSaluteWalkPart30;
InitJoeSkeletonSkinSiteSaluteWalkPart31;
InitJoeSkeletonSkinSiteSaluteWalkPart32;
InitJoeSkeletonSkinSiteSaluteWalkPart33;
InitJoeSkeletonSkinSiteSaluteWalkPart34;
InitJoeSkeletonSkinSiteSaluteWalkPart35;
InitJoeSkeletonSkinSiteSaluteWalkPart36;
InitJoeSkeletonSkinSiteSaluteWalkPart37;
InitJoeSkeletonSkinSiteSaluteWalkPart38;
InitJoeSkeletonSkinSiteSaluteWalkPart39;
InitJoeSkeletonSkinSiteSaluteWalkPart40;
InitJoeSkeletonSkinSiteSaluteWalkPart41;
InitJoeSkeletonSkinSiteSaluteWalkPart42;
InitJoeSkeletonSkinSiteSaluteWalkPart43;
InitJoeSkeletonSkinSiteSaluteWalkPart44;
InitJoeSkeletonSkinSiteSaluteWalkPart45;
InitJoeSkeletonSkinSiteSaluteWalkPart46;
InitJoeSkeletonSkinSiteSaluteWalkPart47;
InitJoeSkeletonSkinSiteSaluteWalkPart48;
InitJoeSkeletonSkinSiteSaluteWalkPart49;
InitJoeSkeletonSkinSiteSaluteWalkPart50;
InitJoeSkeletonSkinSiteSaluteWalkPart51;
InitJoeSkeletonSkinSiteSaluteWalkPart52;
InitJoeSkeletonSkinSiteSaluteWalkPart53;
InitJoeSkeletonSkinSiteSaluteWalkPart54;
InitJoeSkeletonSkinSiteSaluteWalkPart55;
InitJoeSkeletonSkinSiteSaluteWalkPart56;
InitJoeSkeletonSkinSiteSaluteWalkPart57;
InitJoeSkeletonSkinSiteSaluteWalkPart58;
InitJoeSkeletonSkinSiteSaluteWalkPart59;
InitJoeSkeletonSkinSiteSaluteWalkPart60;
InitJoeSkeletonSkinSiteSaluteWalkPart61;
InitJoeSkeletonSkinSiteSaluteWalkPart62;
InitJoeSkeletonSkinSiteSaluteWalkPart63;
InitJoeSkeletonSkinSiteSaluteWalkPart64;
InitJoeSkeletonSkinSiteSaluteWalkPart65;
InitJoeSkeletonSkinSiteSaluteWalkPart66;
InitJoeSkeletonSkinSiteSaluteWalkPart67;
InitJoeSkeletonSkinSiteSaluteWalkPart68;
InitJoeSkeletonSkinSiteSaluteWalkPart69;
InitJoeSkeletonSkinSiteSaluteWalkPart70;
InitJoeSkeletonSkinSiteSaluteWalkPart71;
InitJoeSkeletonSkinSiteSaluteWalkPart72;
InitJoeSkeletonSkinSiteSaluteWalkPart73;
InitJoeSkeletonSkinSiteSaluteWalkPart74;
InitJoeSkeletonSkinSiteSaluteWalkPart75;
InitJoeSkeletonSkinSiteSaluteWalkPart76;
InitJoeSkeletonSkinSiteSaluteWalkPart77;
InitJoeSkeletonSkinSiteSaluteWalkPart78;
InitJoeSkeletonSkinSiteSaluteWalkPart79;
InitJoeSkeletonSkinSiteSaluteWalkPart80;
InitJoeSkeletonSkinSiteSaluteWalkPart81;
InitJoeSkeletonSkinSiteSaluteWalkPart82;
InitJoeSkeletonSkinSiteSaluteWalkPart83;
InitJoeSkeletonSkinSiteSaluteWalkPart84;
Result := X3D0;
end;

begin
end.
