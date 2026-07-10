function JoeSkeletonSkinSiteSaluteWalk: TX3DRootNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 2;
X3D0.Meta['title'] := 'JoeSkeletonSkinSiteSaluteWalk.x3d';
X3D0.Meta['description'] := 'Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.';
X3D0.Meta['creator'] := 'Joe D. Williams';
X3D0.Meta['translator'] := 'Michalis Kamburelis';
X3D0.Meta['translator'] := 'Don Brutzman';
X3D0.Meta['translator'] := 'Joe D. Williams';
X3D0.Meta['created'] := '9 January 2004';
X3D0.Meta['translated'] := '4 December 2022';
X3D0.Meta['modified'] := '16 March 2026';
X3D0.Meta['TODO'] := 'X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal';
X3D0.Meta['reference'] := 'JoeSkeletonSkinSiteSaluteWalk.original.x3dv';
X3D0.Meta['reference'] := 'JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv';
X3D0.Meta['reference'] := 'JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv';
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
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['generator'] := 'X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d';
X3D0.Meta['license'] := '../license.html';
X3D0.Meta['generator'] := 'X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html';
Group33 := TGroupNode.Create;
WorldInfo34 := TWorldInfoNode.Create;
WorldInfo34.SetInfo(['By Joe for Joe','HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3']);
WorldInfo34.Title := 'JoeSkeletonSkinSiteSaluteWalk.x3d';
{ .AddChildren }
Group33.AddChildren([WorldInfo34]);
NavigationInfo35 := TNavigationInfoNode.Create;
{ .AddChildren }
Group33.AddChildren([NavigationInfo35]);
Background36 := TBackgroundNode.Create;
Background36.SetGroundAngle([1.57]);
Background36.SetGroundColor([Vector3(0,0.1,0),Vector3(0,0.1,0)]);
Background36.SetSkyColor([Vector3(0,0,0.1)]);
{ .AddChildren }
Group33.AddChildren([Background36]);
Transform37 := TTransformNode.Create;
Transform37.Scale := Vector3(0.175,0.175,0.175);
Inline38 := TInlineNode.Create;
Inline38.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../../Savage/Tools/Authoring/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','../../../Savage/Tools/Authoring/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl']);
{ .AddChildren }
Transform37.AddChildren([Inline38]);
{ .AddChildren }
Group33.AddChildren([Transform37]);
{ Authoring hint: these axes are aligned within local coordinate system }
Group39 := TGroupNode.Create;
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'Front Up View';
Viewpoint40.Orientation := Vector4(-1,-1,0,0.55);
Viewpoint40.Position := Vector3(-1,2,2.5);
{ .AddChildren }
Group39.AddChildren([Viewpoint40]);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'From Left View';
Viewpoint41.Orientation := Vector4(0.3,1,0,-1.57);
Viewpoint41.Position := Vector3(-2.5,1.5,0);
{ .AddChildren }
Group39.AddChildren([Viewpoint41]);
Viewpoint42 := TViewpointNode.Create;
Viewpoint42.Description := 'Front Mid View';
Viewpoint42.Position := Vector3(0,0.5,1.25);
{ .AddChildren }
Group39.AddChildren([Viewpoint42]);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'Front Feet View';
Viewpoint43.Position := Vector3(0,0,0.75);
{ .AddChildren }
Group39.AddChildren([Viewpoint43]);
Viewpoint44 := TViewpointNode.Create;
Viewpoint44.Description := 'From Right View';
Viewpoint44.Orientation := Vector4(0,1,0,1.57);
Viewpoint44.Position := Vector3(1,1,0);
{ .AddChildren }
Group39.AddChildren([Viewpoint44]);
Viewpoint45 := TViewpointNode.Create;
Viewpoint45.CenterOfRotation := Vector3(0,1.65,0);
Viewpoint45.Description := 'Front Head View';
Viewpoint45.Position := Vector3(0,1.65,0.75);
{ .AddChildren }
Group39.AddChildren([Viewpoint45]);
Viewpoint46 := TViewpointNode.Create;
Viewpoint46.Description := 'Front Mid View';
Viewpoint46.Position := Vector3(0,1,1.75);
{ .AddChildren }
Group39.AddChildren([Viewpoint46]);
Viewpoint47 := TViewpointNode.Create;
Viewpoint47.Description := 'Rear View';
Viewpoint47.Orientation := Vector4(0,1,0,3.14);
Viewpoint47.Position := Vector3(0,1.5,-4);
{ .AddChildren }
Group39.AddChildren([Viewpoint47]);
Viewpoint48 := TViewpointNode.Create;
Viewpoint48.Description := 'Top View';
Viewpoint48.Orientation := Vector4(1,0,0,-1.57);
Viewpoint48.Position := Vector3(0,4,0);
{ .AddChildren }
Group39.AddChildren([Viewpoint48]);
Viewpoint49 := TViewpointNode.Create;
Viewpoint49.Description := 'Bottom View';
Viewpoint49.Orientation := Vector4(1,0,0,1.57);
Viewpoint49.Position := Vector3(0,-4,0);
{ .AddChildren }
Group39.AddChildren([Viewpoint49]);
Viewpoint50 := TViewpointNode.Create;
Viewpoint50.Description := 'Right View';
Viewpoint50.Orientation := Vector4(0,1,0,1.57);
Viewpoint50.Position := Vector3(4,1.5,0);
{ .AddChildren }
Group39.AddChildren([Viewpoint50]);
{ .AddChildren }
Group33.AddChildren([Group39]);
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
{ .SetMaterial }
Appearance54.Material := Material55;
{ .SetAppearance }
Shape53.Appearance := Appearance54;
IndexedFaceSet56 := TIndexedFaceSetNode.Create;
IndexedFaceSet56.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet56.CreaseAngle := 0.1;
Color57 := TColorNode.Create;
Color57.SetColor([Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,1),Vector3(0,1,1),Vector3(1,1,0)]);
{ .SetColor }
IndexedFaceSet56.Color := Color57;
Coordinate58 := TCoordinateNode.Create;
Coordinate58.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.0157),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet56.Coord := Coordinate58;
{ .SetGeometry }
Shape53.Geometry := IndexedFaceSet56;
{ .AddChild }
Transform52.AddChildren([Shape53]);
{ .AddChildren }
Group51.AddChildren([Transform52]);
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
{ .SetMaterial }
Appearance61.Material := Material62;
{ .SetAppearance }
Shape60.Appearance := Appearance61;
IndexedFaceSet63 := TIndexedFaceSetNode.Create;
IndexedFaceSet63.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet63.CreaseAngle := 0.1;
Coordinate64 := TCoordinateNode.Create;
Coordinate64 := Coordinate58;
{ .SetCoord }
IndexedFaceSet63.Coord := Coordinate64;
{ .SetGeometry }
Shape60.Geometry := IndexedFaceSet63;
{ .AddChild }
Transform59.AddChildren([Shape60]);
{ .AddChildren }
Group51.AddChildren([Transform59]);
Transform65 := TTransformNode.Create;
Transform65.Scale := Vector3(0.1,0.1,0.1);
Transform65.Translation := Vector3(0,0.2,0);
Shape66 := TShapeNode.Create;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68.DiffuseColor := Vector3(0,1,0);
Material68.EmissiveColor := Vector3(0,1,0);
Material68.SpecularColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance67.Material := Material68;
{ .SetAppearance }
Shape66.Appearance := Appearance67;
IndexedLineSet69 := TIndexedLineSetNode.Create;
IndexedLineSet69.SetCoordIndex([0,1,-1]);
Coordinate70 := TCoordinateNode.Create;
Coordinate70.SetPoint([Vector3(0,0,0),Vector3(0,0.0001,0)]);
{ .SetCoord }
IndexedLineSet69.Coord := Coordinate70;
{ .SetGeometry }
Shape66.Geometry := IndexedLineSet69;
{ .AddChild }
Transform65.AddChildren([Shape66]);
{ .AddChildren }
Group51.AddChildren([Transform65]);
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
{ .SetMaterial }
Appearance73.Material := Material74;
{ .SetAppearance }
Shape72.Appearance := Appearance73;
Sphere75 := TSphereNode.Create;
Sphere75.Radius := 0.005;
{ .SetGeometry }
Shape72.Geometry := Sphere75;
{ .AddChild }
Transform71.AddChildren([Shape72]);
{ .AddChildren }
Group51.AddChildren([Transform71]);
{ .AddChildren }
Group33.AddChildren([Group51]);
Group76 := TGroupNode.Create;
Group77 := TGroupNode.Create;
HAnimHumanoid78 := THAnimHumanoidNode.Create;
HAnimHumanoid78.NameField := 'Human';
HAnimHumanoid78.Loa := 4;
HAnimHumanoid78.Version := '2.0';
{ original HAnimHumanoid info='"humanoidVersion=2.0"' }
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ </LOD> }
MetadataSet79 := TMetadataSetNode.Create;
MetadataSet79.NameField := 'HAnimHumanoid.info';
MetadataSet79.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString80 := TMetadataStringNode.Create;
MetadataString80.NameField := 'humanoidVersion';
MetadataString80.SetValue(['2.0']);
{ .SetValue }
MetadataSet79.Value := MetadataString80;
{ .SetMetadata }
HAnimHumanoid78.Metadata := MetadataSet79;
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'humanoid_root';
HAnimJoint81.Center := Vector3(0,0.875,0);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'sacrum';
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(0,0.875,0);
Shape84 := TShapeNode.Create;
Shape84 := Shape53;
{ .AddChild }
Transform83.AddChildren([Shape84]);
{ .AddChildren }
HAnimSegment82.AddChildren([Transform83]);
Shape85 := TShapeNode.Create;
Appearance86 := TAppearanceNode.Create;
Appearance86 := Appearance67;
{ .SetAppearance }
Shape85.Appearance := Appearance86;
IndexedLineSet87 := TIndexedLineSetNode.Create;
IndexedLineSet87.SetCoordIndex([0,1,-1]);
Coordinate88 := TCoordinateNode.Create;
Coordinate88.SetPoint([Vector3(0,0.875,0),Vector3(0,0.92,0)]);
{ .SetCoord }
IndexedLineSet87.Coord := Coordinate88;
{ .SetGeometry }
Shape85.Geometry := IndexedLineSet87;
{ .AddChildren }
HAnimSegment82.AddChildren([Shape85]);
Transform89 := TTransformNode.Create;
Transform89.Translation := Vector3(0,0.92,0.08);
Shape90 := TShapeNode.Create;
Shape90 := Shape72;
{ .AddChild }
Transform89.AddChildren([Shape90]);
{ .AddChildren }
HAnimSegment82.AddChildren([Transform89]);
Transform91 := TTransformNode.Create;
Transform91.Translation := Vector3(0,0.87,-0.022);
Shape92 := TShapeNode.Create;
Shape92 := Shape72;
{ .AddChild }
Transform91.AddChildren([Shape92]);
{ .AddChildren }
HAnimSegment82.AddChildren([Transform91]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimSegment82]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'sacroiliac';
HAnimJoint93.Center := Vector3(0,0.92,0);
HAnimJoint93.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint93.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment94 := THAnimSegmentNode.Create;
HAnimSegment94.NameField := 'pelvis';
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(0,0.9149,0.0016);
Transform96 := TTransformNode.Create;
Shape97 := TShapeNode.Create;
Shape97 := Shape53;
{ .AddChild }
Transform96.AddChildren([Shape97]);
{ .AddChildren }
Transform95.AddChildren([Transform96]);
{ .AddChildren }
HAnimSegment94.AddChildren([Transform95]);
Shape98 := TShapeNode.Create;
Appearance99 := TAppearanceNode.Create;
Appearance99 := Appearance67;
{ .SetAppearance }
Shape98.Appearance := Appearance99;
IndexedLineSet100 := TIndexedLineSetNode.Create;
IndexedLineSet100.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate101 := TCoordinateNode.Create;
Coordinate101.SetPoint([Vector3(0,0.92,0),Vector3(0.0961,0.9124,0),Vector3(-0.095,0.9171,0.0029),Vector3(0,1.045,-0.095)]);
{ .SetCoord }
IndexedLineSet100.Coord := Coordinate101;
{ .SetGeometry }
Shape98.Geometry := IndexedLineSet100;
{ .AddChildren }
HAnimSegment94.AddChildren([Shape98]);
HAnimSite102 := THAnimSiteNode.Create;
HAnimSite102.NameField := 'l_iliocristale_pt';
HAnimSite102.Translation := Vector3(0.1425,1.065,0.0033);
Shape103 := TShapeNode.Create;
Shape103 := Shape60;
{ .AddChildren }
HAnimSite102.AddChildren([Shape103]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite102]);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.NameField := 'l_trochanterion_pt';
HAnimSite104.Translation := Vector3(0.15,0.9,-0.01);
Shape105 := TShapeNode.Create;
Shape105 := Shape60;
{ .AddChildren }
HAnimSite104.AddChildren([Shape105]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite104]);
HAnimSite106 := THAnimSiteNode.Create;
HAnimSite106.NameField := 'r_iliocristale_pt';
HAnimSite106.Translation := Vector3(-0.1425,1.065,0.0033);
Shape107 := TShapeNode.Create;
Shape107 := Shape60;
{ .AddChildren }
HAnimSite106.AddChildren([Shape107]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite106]);
HAnimSite108 := THAnimSiteNode.Create;
HAnimSite108.NameField := 'r_trochanterion_pt';
HAnimSite108.Translation := Vector3(-0.15,0.9,-0.01);
Shape109 := TShapeNode.Create;
Shape109 := Shape60;
{ .AddChildren }
HAnimSite108.AddChildren([Shape109]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite108]);
HAnimSite110 := THAnimSiteNode.Create;
HAnimSite110.NameField := 'l_asis_pt';
HAnimSite110.Translation := Vector3(0.0935,1.03,0.075);
Shape111 := TShapeNode.Create;
Shape111 := Shape60;
{ .AddChildren }
HAnimSite110.AddChildren([Shape111]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite110]);
HAnimSite112 := THAnimSiteNode.Create;
HAnimSite112.NameField := 'r_asis_pt';
HAnimSite112.Translation := Vector3(-0.0935,1.03,0.075);
Shape113 := TShapeNode.Create;
Shape113 := Shape60;
{ .AddChildren }
HAnimSite112.AddChildren([Shape113]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite112]);
HAnimSite114 := THAnimSiteNode.Create;
HAnimSite114.NameField := 'l_psis_pt';
HAnimSite114.Translation := Vector3(0.0773,1.019,-0.12);
Shape115 := TShapeNode.Create;
Shape115 := Shape60;
{ .AddChildren }
HAnimSite114.AddChildren([Shape115]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite114]);
HAnimSite116 := THAnimSiteNode.Create;
HAnimSite116.NameField := 'r_psis_pt';
HAnimSite116.Translation := Vector3(-0.0773,1.019,-0.12);
Shape117 := TShapeNode.Create;
Shape117 := Shape60;
{ .AddChildren }
HAnimSite116.AddChildren([Shape117]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite116]);
HAnimSite118 := THAnimSiteNode.Create;
HAnimSite118.NameField := 'floormarker_pt';
Transform119 := TTransformNode.Create;
Transform119.Scale := Vector3(3,3,3);
Shape120 := TShapeNode.Create;
Shape120 := Shape60;
{ .AddChild }
Transform119.AddChildren([Shape120]);
{ .AddChildren }
HAnimSite118.AddChildren([Transform119]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite118]);
HAnimSite121 := THAnimSiteNode.Create;
HAnimSite121.NameField := 'crotch_pt';
HAnimSite121.Translation := Vector3(0,0.87,-0.022);
Shape122 := TShapeNode.Create;
Shape122 := Shape60;
{ .AddChildren }
HAnimSite121.AddChildren([Shape122]);
{ .AddChildren }
HAnimSegment94.AddChildren([HAnimSite121]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimSegment94]);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'l_hip';
HAnimJoint123.Center := Vector3(0.1,0.92,0);
HAnimJoint123.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint123.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment124 := THAnimSegmentNode.Create;
HAnimSegment124.NameField := 'l_thigh';
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0.1,0.92,0);
Shape126 := TShapeNode.Create;
Shape126 := Shape53;
{ .AddChild }
Transform125.AddChildren([Shape126]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform125]);
Shape127 := TShapeNode.Create;
Appearance128 := TAppearanceNode.Create;
Appearance128 := Appearance67;
{ .SetAppearance }
Shape127.Appearance := Appearance128;
IndexedLineSet129 := TIndexedLineSetNode.Create;
IndexedLineSet129.SetCoordIndex([0,1,-1]);
Coordinate130 := TCoordinateNode.Create;
Coordinate130.SetPoint([Vector3(0.1,0.92,0),Vector3(0.115,0.466,0)]);
{ .SetCoord }
IndexedLineSet129.Coord := Coordinate130;
{ .SetGeometry }
Shape127.Geometry := IndexedLineSet129;
{ .AddChildren }
HAnimSegment124.AddChildren([Shape127]);
Transform131 := TTransformNode.Create;
Transform131.Translation := Vector3(0.1,0.9,0.0775);
Shape132 := TShapeNode.Create;
Shape132 := Shape72;
{ .AddChild }
Transform131.AddChildren([Shape132]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform131]);
Transform133 := TTransformNode.Create;
Transform133.Translation := Vector3(0.079,0.92,-0.14);
Shape134 := TShapeNode.Create;
Shape134 := Shape72;
{ .AddChild }
Transform133.AddChildren([Shape134]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform133]);
Transform135 := TTransformNode.Create;
Transform135.Translation := Vector3(0.171,0.65,0);
Shape136 := TShapeNode.Create;
Shape136 := Shape72;
{ .AddChild }
Transform135.AddChildren([Shape136]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform135]);
Transform137 := TTransformNode.Create;
Transform137.Translation := Vector3(0.02,0.65,0);
Shape138 := TShapeNode.Create;
Shape138 := Shape72;
{ .AddChild }
Transform137.AddChildren([Shape138]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform137]);
Transform139 := TTransformNode.Create;
Transform139.Translation := Vector3(0.1,0.65,-0.08);
Shape140 := TShapeNode.Create;
Shape140 := Shape72;
{ .AddChild }
Transform139.AddChildren([Shape140]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform139]);
Transform141 := TTransformNode.Create;
Transform141.Translation := Vector3(0.1,0.65,0.07);
Shape142 := TShapeNode.Create;
Shape142 := Shape72;
{ .AddChild }
Transform141.AddChildren([Shape142]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform141]);
HAnimSite143 := THAnimSiteNode.Create;
HAnimSite143.NameField := 'l_knee_crease_pt';
HAnimSite143.Translation := Vector3(0.115,0.466,-0.055);
Shape144 := TShapeNode.Create;
Shape144 := Shape60;
{ .AddChildren }
HAnimSite143.AddChildren([Shape144]);
{ .AddChildren }
HAnimSegment124.AddChildren([HAnimSite143]);
HAnimSite145 := THAnimSiteNode.Create;
HAnimSite145.NameField := 'l_femoral_lateral_epicondyle_pt';
HAnimSite145.Translation := Vector3(0.17,0.466,0);
Shape146 := TShapeNode.Create;
Shape146 := Shape60;
{ .AddChildren }
HAnimSite145.AddChildren([Shape146]);
{ .AddChildren }
HAnimSegment124.AddChildren([HAnimSite145]);
HAnimSite147 := THAnimSiteNode.Create;
HAnimSite147.NameField := 'l_femoral_medial_epicondyle_pt';
HAnimSite147.Translation := Vector3(0.05,0.466,0);
Shape148 := TShapeNode.Create;
Shape148 := Shape60;
{ .AddChildren }
HAnimSite147.AddChildren([Shape148]);
{ .AddChildren }
HAnimSegment124.AddChildren([HAnimSite147]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimSegment124]);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'l_knee';
HAnimJoint149.Center := Vector3(0.115,0.466,0);
HAnimJoint149.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint149.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment150 := THAnimSegmentNode.Create;
HAnimSegment150.NameField := 'l_calf';
Transform151 := TTransformNode.Create;
Transform151.Translation := Vector3(0.115,0.466,0);
Shape152 := TShapeNode.Create;
Shape152 := Shape53;
{ .AddChild }
Transform151.AddChildren([Shape152]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform151]);
Shape153 := TShapeNode.Create;
Appearance154 := TAppearanceNode.Create;
Appearance154 := Appearance67;
{ .SetAppearance }
Shape153.Appearance := Appearance154;
IndexedLineSet155 := TIndexedLineSetNode.Create;
IndexedLineSet155.SetCoordIndex([0,1,-1]);
Coordinate156 := TCoordinateNode.Create;
Coordinate156.SetPoint([Vector3(0.115,0.466,0),Vector3(0.1,0.069,0)]);
{ .SetCoord }
IndexedLineSet155.Coord := Coordinate156;
{ .SetGeometry }
Shape153.Geometry := IndexedLineSet155;
{ .AddChildren }
HAnimSegment150.AddChildren([Shape153]);
Transform157 := TTransformNode.Create;
Transform157.Translation := Vector3(0.115,0.466,0.06);
Shape158 := TShapeNode.Create;
Shape158 := Shape72;
{ .AddChild }
Transform157.AddChildren([Shape158]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform157]);
Transform159 := TTransformNode.Create;
Transform159.Translation := Vector3(0.115,0.466,-0.055);
Shape160 := TShapeNode.Create;
Shape160 := Shape72;
{ .AddChild }
Transform159.AddChildren([Shape160]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform159]);
Transform161 := TTransformNode.Create;
Transform161.Translation := Vector3(0.17,0.466,0);
Shape162 := TShapeNode.Create;
Shape162 := Shape72;
{ .AddChild }
Transform161.AddChildren([Shape162]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform161]);
Transform163 := TTransformNode.Create;
Transform163.Translation := Vector3(0.05,0.466,0);
Shape164 := TShapeNode.Create;
Shape164 := Shape72;
{ .AddChild }
Transform163.AddChildren([Shape164]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform163]);
Transform165 := TTransformNode.Create;
Transform165.Translation := Vector3(0.17,0.3,0);
Shape166 := TShapeNode.Create;
Shape166 := Shape72;
{ .AddChild }
Transform165.AddChildren([Shape166]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform165]);
Transform167 := TTransformNode.Create;
Transform167.Translation := Vector3(0.06,0.3,0);
Shape168 := TShapeNode.Create;
Shape168 := Shape72;
{ .AddChild }
Transform167.AddChildren([Shape168]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform167]);
Transform169 := TTransformNode.Create;
Transform169.Translation := Vector3(0.1,0.3,-0.05);
Shape170 := TShapeNode.Create;
Shape170 := Shape72;
{ .AddChild }
Transform169.AddChildren([Shape170]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform169]);
Transform171 := TTransformNode.Create;
Transform171.Translation := Vector3(0.1,0.3,0.05);
Shape172 := TShapeNode.Create;
Shape172 := Shape72;
{ .AddChild }
Transform171.AddChildren([Shape172]);
{ .AddChildren }
HAnimSegment150.AddChildren([Transform171]);
HAnimSite173 := THAnimSiteNode.Create;
HAnimSite173.NameField := 'l_lateral_malleolus_pt';
HAnimSite173.Translation := Vector3(0.15,0.07,0);
Shape174 := TShapeNode.Create;
Shape174 := Shape60;
{ .AddChildren }
HAnimSite173.AddChildren([Shape174]);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite173]);
HAnimSite175 := THAnimSiteNode.Create;
HAnimSite175.NameField := 'l_medial_malleolus_pt';
HAnimSite175.Translation := Vector3(0.085,0.086,0.0125);
Shape176 := TShapeNode.Create;
Shape176 := Shape60;
{ .AddChildren }
HAnimSite175.AddChildren([Shape176]);
{ .AddChildren }
HAnimSegment150.AddChildren([HAnimSite175]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimSegment150]);
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177.NameField := 'l_talocrural';
HAnimJoint177.Center := Vector3(0.115,0.069,0);
HAnimJoint177.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint177.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment178 := THAnimSegmentNode.Create;
HAnimSegment178.NameField := 'l_talus';
Transform179 := TTransformNode.Create;
Transform179.Translation := Vector3(0.115,0.069,0);
Shape180 := TShapeNode.Create;
Shape180 := Shape53;
{ .AddChild }
Transform179.AddChildren([Shape180]);
{ .AddChildren }
HAnimSegment178.AddChildren([Transform179]);
Shape181 := TShapeNode.Create;
Appearance182 := TAppearanceNode.Create;
Appearance182 := Appearance67;
{ .SetAppearance }
Shape181.Appearance := Appearance182;
IndexedLineSet183 := TIndexedLineSetNode.Create;
IndexedLineSet183.SetCoordIndex([0,1,-1]);
Coordinate184 := TCoordinateNode.Create;
Coordinate184.SetPoint([Vector3(0.1,0.069,0),Vector3(0.115,0.031,0.03)]);
{ .SetCoord }
IndexedLineSet183.Coord := Coordinate184;
{ .SetGeometry }
Shape181.Geometry := IndexedLineSet183;
{ .AddChildren }
HAnimSegment178.AddChildren([Shape181]);
Transform185 := TTransformNode.Create;
Transform185.Translation := Vector3(0.15,0.07,0);
Shape186 := TShapeNode.Create;
Shape186 := Shape72;
{ .AddChild }
Transform185.AddChildren([Shape186]);
{ .AddChildren }
HAnimSegment178.AddChildren([Transform185]);
Transform187 := TTransformNode.Create;
Transform187.Translation := Vector3(0.085,0.086,0.0125);
Shape188 := TShapeNode.Create;
Shape188 := Shape72;
{ .AddChild }
Transform187.AddChildren([Shape188]);
{ .AddChildren }
HAnimSegment178.AddChildren([Transform187]);
Transform189 := TTransformNode.Create;
Transform189.Translation := Vector3(0.115,0.069,-0.045);
Shape190 := TShapeNode.Create;
Shape190 := Shape72;
{ .AddChild }
Transform189.AddChildren([Shape190]);
{ .AddChildren }
HAnimSegment178.AddChildren([Transform189]);
Transform191 := TTransformNode.Create;
Transform191.Translation := Vector3(0.117,0.0975,0.0615);
Shape192 := TShapeNode.Create;
Shape192 := Shape72;
{ .AddChild }
Transform191.AddChildren([Shape192]);
{ .AddChildren }
HAnimSegment178.AddChildren([Transform191]);
HAnimSite193 := THAnimSiteNode.Create;
HAnimSite193.NameField := 'l_sphyrion_pt';
HAnimSite193.Translation := Vector3(0.09,0.056,0.0125);
Shape194 := TShapeNode.Create;
Shape194 := Shape60;
{ .AddChildren }
HAnimSite193.AddChildren([Shape194]);
{ .AddChildren }
HAnimSegment178.AddChildren([HAnimSite193]);
HAnimSite195 := THAnimSiteNode.Create;
HAnimSite195.NameField := 'l_calcaneus_posterior_pt';
HAnimSite195.Translation := Vector3(0.115,0.04,-0.055);
Shape196 := TShapeNode.Create;
Shape196 := Shape60;
{ .AddChildren }
HAnimSite195.AddChildren([Shape196]);
{ .AddChildren }
HAnimSegment178.AddChildren([HAnimSite195]);
{ .AddChildren }
HAnimJoint177.AddChildren([HAnimSegment178]);
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197.NameField := 'l_tarsometatarsal_2';
HAnimJoint197.Center := Vector3(0.115,0.031,0.03);
HAnimJoint197.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint197.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment198 := THAnimSegmentNode.Create;
HAnimSegment198.NameField := 'l_metatarsal_2';
Transform199 := TTransformNode.Create;
Transform199.Translation := Vector3(0.115,0.031,0.03);
Shape200 := TShapeNode.Create;
Shape200 := Shape53;
{ .AddChild }
Transform199.AddChildren([Shape200]);
{ .AddChildren }
HAnimSegment198.AddChildren([Transform199]);
Shape201 := TShapeNode.Create;
Appearance202 := TAppearanceNode.Create;
Appearance202 := Appearance67;
{ .SetAppearance }
Shape201.Appearance := Appearance202;
IndexedLineSet203 := TIndexedLineSetNode.Create;
IndexedLineSet203.SetCoordIndex([0,1,-1]);
Coordinate204 := TCoordinateNode.Create;
Coordinate204.SetPoint([Vector3(0.115,0.031,0.03),Vector3(0.115,0.037,0.09)]);
{ .SetCoord }
IndexedLineSet203.Coord := Coordinate204;
{ .SetGeometry }
Shape201.Geometry := IndexedLineSet203;
{ .AddChildren }
HAnimSegment198.AddChildren([Shape201]);
Transform205 := TTransformNode.Create;
Transform205.Translation := Vector3(0.1375,0.006,-0.03);
Shape206 := TShapeNode.Create;
Shape206 := Shape72;
{ .AddChild }
Transform205.AddChildren([Shape206]);
{ .AddChildren }
HAnimSegment198.AddChildren([Transform205]);
Transform207 := TTransformNode.Create;
Transform207.Translation := Vector3(0.095,0.006,-0.03);
Shape208 := TShapeNode.Create;
Shape208 := Shape72;
{ .AddChild }
Transform207.AddChildren([Shape208]);
{ .AddChildren }
HAnimSegment198.AddChildren([Transform207]);
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(0.115,0.015,-0.045);
Shape210 := TShapeNode.Create;
Shape210 := Shape72;
{ .AddChild }
Transform209.AddChildren([Shape210]);
{ .AddChildren }
HAnimSegment198.AddChildren([Transform209]);
{ .AddChildren }
HAnimJoint197.AddChildren([HAnimSegment198]);
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211.NameField := 'l_metatarsophalangeal_2';
HAnimJoint211.Center := Vector3(0.115,0.037,0.09);
HAnimJoint211.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint211.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment212 := THAnimSegmentNode.Create;
HAnimSegment212.NameField := 'l_tarsal_proximal_phalanx_2';
Transform213 := TTransformNode.Create;
Transform213.Translation := Vector3(0.115,0.037,0.09);
Shape214 := TShapeNode.Create;
Shape214 := Shape53;
{ .AddChild }
Transform213.AddChildren([Shape214]);
{ .AddChildren }
HAnimSegment212.AddChildren([Transform213]);
Shape215 := TShapeNode.Create;
Appearance216 := TAppearanceNode.Create;
Appearance216 := Appearance67;
{ .SetAppearance }
Shape215.Appearance := Appearance216;
IndexedLineSet217 := TIndexedLineSetNode.Create;
IndexedLineSet217.SetCoordIndex([0,1,-1]);
Coordinate218 := TCoordinateNode.Create;
Coordinate218.SetPoint([Vector3(0.115,0.037,0.09),Vector3(0.115,0.02,0.122)]);
{ .SetCoord }
IndexedLineSet217.Coord := Coordinate218;
{ .SetGeometry }
Shape215.Geometry := IndexedLineSet217;
{ .AddChildren }
HAnimSegment212.AddChildren([Shape215]);
Transform219 := TTransformNode.Create;
Transform219.Translation := Vector3(0.115,0.06,0.1);
Shape220 := TShapeNode.Create;
Shape220 := Shape72;
{ .AddChild }
Transform219.AddChildren([Shape220]);
{ .AddChildren }
HAnimSegment212.AddChildren([Transform219]);
Transform221 := TTransformNode.Create;
Transform221.Translation := Vector3(0.115,0,0.07);
Shape222 := TShapeNode.Create;
Shape222 := Shape72;
{ .AddChild }
Transform221.AddChildren([Shape222]);
{ .AddChildren }
HAnimSegment212.AddChildren([Transform221]);
Transform223 := TTransformNode.Create;
Transform223.Translation := Vector3(0.165,0,0.07);
Shape224 := TShapeNode.Create;
Shape224 := Shape72;
{ .AddChild }
Transform223.AddChildren([Shape224]);
{ .AddChildren }
HAnimSegment212.AddChildren([Transform223]);
Transform225 := TTransformNode.Create;
Transform225.Translation := Vector3(0.095,0,0.07);
Shape226 := TShapeNode.Create;
Shape226 := Shape72;
{ .AddChild }
Transform225.AddChildren([Shape226]);
{ .AddChildren }
HAnimSegment212.AddChildren([Transform225]);
HAnimSite227 := THAnimSiteNode.Create;
HAnimSite227.NameField := 'l_metatarsal_phalanx_1_pt';
HAnimSite227.Translation := Vector3(0.087,0.01,0.122);
Shape228 := TShapeNode.Create;
Shape228 := Shape60;
{ .AddChildren }
HAnimSite227.AddChildren([Shape228]);
{ .AddChildren }
HAnimSegment212.AddChildren([HAnimSite227]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimSegment212]);
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229.NameField := 'l_metatarsal';
HAnimJoint229.Center := Vector3(0.115,0.02,0.122);
HAnimJoint229.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint229.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment230 := THAnimSegmentNode.Create;
HAnimSegment230.NameField := 'l_tarsal_distal_phalanx_2';
Transform231 := TTransformNode.Create;
Transform231.Translation := Vector3(0.115,0.02,0.13);
Shape232 := TShapeNode.Create;
Shape232 := Shape53;
{ .AddChild }
Transform231.AddChildren([Shape232]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform231]);
Shape233 := TShapeNode.Create;
Appearance234 := TAppearanceNode.Create;
Appearance234 := Appearance67;
{ .SetAppearance }
Shape233.Appearance := Appearance234;
IndexedLineSet235 := TIndexedLineSetNode.Create;
IndexedLineSet235.SetCoordIndex([0,1,-1]);
Coordinate236 := TCoordinateNode.Create;
Coordinate236.SetPoint([Vector3(0.115,0.02,0.122),Vector3(0.132,0.013,0.19)]);
{ .SetCoord }
IndexedLineSet235.Coord := Coordinate236;
{ .SetGeometry }
Shape233.Geometry := IndexedLineSet235;
{ .AddChildren }
HAnimSegment230.AddChildren([Shape233]);
Transform237 := TTransformNode.Create;
Transform237.Translation := Vector3(0.115,0.04,0.13);
Shape238 := TShapeNode.Create;
Shape238 := Shape72;
{ .AddChild }
Transform237.AddChildren([Shape238]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform237]);
Transform239 := TTransformNode.Create;
Transform239.Translation := Vector3(0.125,0,0.12);
Shape240 := TShapeNode.Create;
Shape240 := Shape72;
{ .AddChild }
Transform239.AddChildren([Shape240]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform239]);
Transform241 := TTransformNode.Create;
Transform241.Translation := Vector3(0.165,0,0.12);
Shape242 := TShapeNode.Create;
Shape242 := Shape72;
{ .AddChild }
Transform241.AddChildren([Shape242]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform241]);
Transform243 := TTransformNode.Create;
Transform243.Translation := Vector3(0.087,0,0.122);
Shape244 := TShapeNode.Create;
Shape244 := Shape72;
{ .AddChild }
Transform243.AddChildren([Shape244]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform243]);
Transform245 := TTransformNode.Create;
Transform245.Translation := Vector3(0.09,0.012,0.188);
Shape246 := TShapeNode.Create;
Shape246 := Shape72;
{ .AddChild }
Transform245.AddChildren([Shape246]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform245]);
Transform247 := TTransformNode.Create;
Transform247.Translation := Vector3(0.11,0.011,0.19);
Shape248 := TShapeNode.Create;
Shape248 := Shape72;
{ .AddChild }
Transform247.AddChildren([Shape248]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform247]);
Transform249 := TTransformNode.Create;
Transform249.Translation := Vector3(0.128,0.011,0.185);
Shape250 := TShapeNode.Create;
Shape250 := Shape72;
{ .AddChild }
Transform249.AddChildren([Shape250]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform249]);
Transform251 := TTransformNode.Create;
Transform251.Translation := Vector3(0.142,0.011,0.178);
Shape252 := TShapeNode.Create;
Shape252 := Shape72;
{ .AddChild }
Transform251.AddChildren([Shape252]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform251]);
Transform253 := TTransformNode.Create;
Transform253.Translation := Vector3(0.154,0.01,0.168);
Shape254 := TShapeNode.Create;
Shape254 := Shape72;
{ .AddChild }
Transform253.AddChildren([Shape254]);
{ .AddChildren }
HAnimSegment230.AddChildren([Transform253]);
HAnimSite255 := THAnimSiteNode.Create;
HAnimSite255.NameField := 'l_metatarsal_phalanx_5_pt';
HAnimSite255.Translation := Vector3(0.165,0.01,0.12);
Shape256 := TShapeNode.Create;
Shape256 := Shape60;
{ .AddChildren }
HAnimSite255.AddChildren([Shape256]);
{ .AddChildren }
HAnimSegment230.AddChildren([HAnimSite255]);
HAnimSite257 := THAnimSiteNode.Create;
HAnimSite257.NameField := 'l_tarsal_distal_phalanx_2_pt';
HAnimSite257.Translation := Vector3(0.11,0.011,0.19);
Shape258 := TShapeNode.Create;
Shape258 := Shape60;
{ .AddChildren }
HAnimSite257.AddChildren([Shape258]);
{ .AddChildren }
HAnimSegment230.AddChildren([HAnimSite257]);
{ .AddChildren }
HAnimJoint229.AddChildren([HAnimSegment230]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint229]);
{ .AddChildren }
HAnimJoint197.AddChildren([HAnimJoint211]);
{ .AddChildren }
HAnimJoint177.AddChildren([HAnimJoint197]);
{ .AddChildren }
HAnimJoint149.AddChildren([HAnimJoint177]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimJoint149]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint123]);
HAnimJoint259 := THAnimJointNode.Create;
HAnimJoint259.NameField := 'r_hip';
HAnimJoint259.Center := Vector3(-0.1,0.92,0);
HAnimJoint259.SetSkinCoordIndex([91,92,98,99,100,101]);
HAnimJoint259.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimSegment260 := THAnimSegmentNode.Create;
HAnimSegment260.NameField := 'r_thigh';
Transform261 := TTransformNode.Create;
Transform261.Translation := Vector3(-0.1,0.92,0);
Shape262 := TShapeNode.Create;
Shape262 := Shape53;
{ .AddChild }
Transform261.AddChildren([Shape262]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform261]);
Shape263 := TShapeNode.Create;
Appearance264 := TAppearanceNode.Create;
Appearance264 := Appearance67;
{ .SetAppearance }
Shape263.Appearance := Appearance264;
IndexedLineSet265 := TIndexedLineSetNode.Create;
IndexedLineSet265.SetCoordIndex([0,1,-1]);
Coordinate266 := TCoordinateNode.Create;
Coordinate266.SetPoint([Vector3(-0.1,0.92,0),Vector3(-0.1,0.4913,0)]);
{ .SetCoord }
IndexedLineSet265.Coord := Coordinate266;
{ .SetGeometry }
Shape263.Geometry := IndexedLineSet265;
{ .AddChildren }
HAnimSegment260.AddChildren([Shape263]);
Transform267 := TTransformNode.Create;
Transform267.Translation := Vector3(-0.079,0.92,-0.14);
Shape268 := TShapeNode.Create;
Shape268 := Shape72;
{ .AddChild }
Transform267.AddChildren([Shape268]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform267]);
Transform269 := TTransformNode.Create;
Transform269.Translation := Vector3(-0.1,0.9,0.075);
Shape270 := TShapeNode.Create;
Shape270 := Shape72;
{ .AddChild }
Transform269.AddChildren([Shape270]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform269]);
Transform271 := TTransformNode.Create;
Transform271.Translation := Vector3(-0.171,0.65,0);
Shape272 := TShapeNode.Create;
Shape272 := Shape72;
{ .AddChild }
Transform271.AddChildren([Shape272]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform271]);
Transform273 := TTransformNode.Create;
Transform273.Translation := Vector3(-0.02,0.65,0);
Shape274 := TShapeNode.Create;
Shape274 := Shape72;
{ .AddChild }
Transform273.AddChildren([Shape274]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform273]);
Transform275 := TTransformNode.Create;
Transform275.Translation := Vector3(-0.1,0.65,-0.08);
Shape276 := TShapeNode.Create;
Shape276 := Shape72;
{ .AddChild }
Transform275.AddChildren([Shape276]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform275]);
Transform277 := TTransformNode.Create;
Transform277.Translation := Vector3(-0.1,0.65,0.07);
Shape278 := TShapeNode.Create;
Shape278 := Shape72;
{ .AddChild }
Transform277.AddChildren([Shape278]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform277]);
HAnimSite279 := THAnimSiteNode.Create;
HAnimSite279.NameField := 'r_knee_crease_pt';
HAnimSite279.Translation := Vector3(-0.115,0.466,-0.055);
Shape280 := TShapeNode.Create;
Shape280 := Shape60;
{ .AddChildren }
HAnimSite279.AddChildren([Shape280]);
{ .AddChildren }
HAnimSegment260.AddChildren([HAnimSite279]);
HAnimSite281 := THAnimSiteNode.Create;
HAnimSite281.NameField := 'r_femoral_lateral_epicondyle_pt';
HAnimSite281.Translation := Vector3(-0.17,0.466,0);
Shape282 := TShapeNode.Create;
Shape282 := Shape60;
{ .AddChildren }
HAnimSite281.AddChildren([Shape282]);
{ .AddChildren }
HAnimSegment260.AddChildren([HAnimSite281]);
HAnimSite283 := THAnimSiteNode.Create;
HAnimSite283.NameField := 'r_femoral_medial_epicondyle_pt';
HAnimSite283.Translation := Vector3(-0.05,0.466,0);
Shape284 := TShapeNode.Create;
Shape284 := Shape60;
{ .AddChildren }
HAnimSite283.AddChildren([Shape284]);
{ .AddChildren }
HAnimSegment260.AddChildren([HAnimSite283]);
{ .AddChildren }
HAnimJoint259.AddChildren([HAnimSegment260]);
HAnimJoint285 := THAnimJointNode.Create;
HAnimJoint285.NameField := 'r_knee';
HAnimJoint285.Center := Vector3(-0.05,0.466,0);
HAnimJoint285.SetSkinCoordIndex([362,363,364,365,366,367,368,369]);
HAnimJoint285.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment286 := THAnimSegmentNode.Create;
HAnimSegment286.NameField := 'r_calf';
Transform287 := TTransformNode.Create;
Transform287.Translation := Vector3(-0.1,0.4913,0);
Shape288 := TShapeNode.Create;
Shape288 := Shape53;
{ .AddChild }
Transform287.AddChildren([Shape288]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform287]);
Shape289 := TShapeNode.Create;
Appearance290 := TAppearanceNode.Create;
Appearance290 := Appearance67;
{ .SetAppearance }
Shape289.Appearance := Appearance290;
IndexedLineSet291 := TIndexedLineSetNode.Create;
IndexedLineSet291.SetCoordIndex([0,1,-1]);
Coordinate292 := TCoordinateNode.Create;
Coordinate292.SetPoint([Vector3(-0.1,0.4913,0),Vector3(-0.1,0.0712,0)]);
{ .SetCoord }
IndexedLineSet291.Coord := Coordinate292;
{ .SetGeometry }
Shape289.Geometry := IndexedLineSet291;
{ .AddChildren }
HAnimSegment286.AddChildren([Shape289]);
Transform293 := TTransformNode.Create;
Transform293.Translation := Vector3(-0.115,0.466,0.06);
Shape294 := TShapeNode.Create;
Shape294 := Shape72;
{ .AddChild }
Transform293.AddChildren([Shape294]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform293]);
Transform295 := TTransformNode.Create;
Transform295.Translation := Vector3(-0.115,0.466,-0.055);
Shape296 := TShapeNode.Create;
Shape296 := Shape72;
{ .AddChild }
Transform295.AddChildren([Shape296]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform295]);
Transform297 := TTransformNode.Create;
Transform297.Translation := Vector3(-0.17,0.466,0);
Shape298 := TShapeNode.Create;
Shape298 := Shape72;
{ .AddChild }
Transform297.AddChildren([Shape298]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform297]);
Transform299 := TTransformNode.Create;
Transform299.Translation := Vector3(-0.05,0.466,0);
Shape300 := TShapeNode.Create;
Shape300 := Shape72;
{ .AddChild }
Transform299.AddChildren([Shape300]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform299]);
Transform301 := TTransformNode.Create;
Transform301.Translation := Vector3(-0.17,0.3,0);
Shape302 := TShapeNode.Create;
Shape302 := Shape72;
{ .AddChild }
Transform301.AddChildren([Shape302]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform301]);
Transform303 := TTransformNode.Create;
Transform303.Translation := Vector3(-0.06,0.3,0);
Shape304 := TShapeNode.Create;
Shape304 := Shape72;
{ .AddChild }
Transform303.AddChildren([Shape304]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform303]);
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(-0.1,0.3,-0.05);
Shape306 := TShapeNode.Create;
Shape306 := Shape72;
{ .AddChild }
Transform305.AddChildren([Shape306]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform305]);
Transform307 := TTransformNode.Create;
Transform307.Translation := Vector3(-0.1,0.3,0.05);
Shape308 := TShapeNode.Create;
Shape308 := Shape72;
{ .AddChild }
Transform307.AddChildren([Shape308]);
{ .AddChildren }
HAnimSegment286.AddChildren([Transform307]);
HAnimSite309 := THAnimSiteNode.Create;
HAnimSite309.NameField := 'r_lateral_malleolus_pt';
HAnimSite309.Translation := Vector3(-0.15,0.07,0);
Shape310 := TShapeNode.Create;
Shape310 := Shape60;
{ .AddChildren }
HAnimSite309.AddChildren([Shape310]);
{ .AddChildren }
HAnimSegment286.AddChildren([HAnimSite309]);
HAnimSite311 := THAnimSiteNode.Create;
HAnimSite311.NameField := 'r_medial_malleolus_pt';
HAnimSite311.Translation := Vector3(-0.085,0.086,0.0125);
Shape312 := TShapeNode.Create;
Shape312 := Shape60;
{ .AddChildren }
HAnimSite311.AddChildren([Shape312]);
{ .AddChildren }
HAnimSegment286.AddChildren([HAnimSite311]);
{ .AddChildren }
HAnimJoint285.AddChildren([HAnimSegment286]);
HAnimJoint313 := THAnimJointNode.Create;
HAnimJoint313.NameField := 'r_talocrural';
HAnimJoint313.Center := Vector3(-0.115,0.069,0);
HAnimJoint313.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint313.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment314 := THAnimSegmentNode.Create;
HAnimSegment314.NameField := 'r_talus';
Transform315 := TTransformNode.Create;
Transform315.Translation := Vector3(-0.1,0.0712,0);
Shape316 := TShapeNode.Create;
Shape316 := Shape53;
{ .AddChild }
Transform315.AddChildren([Shape316]);
{ .AddChildren }
HAnimSegment314.AddChildren([Transform315]);
Shape317 := TShapeNode.Create;
Appearance318 := TAppearanceNode.Create;
Appearance318 := Appearance67;
{ .SetAppearance }
Shape317.Appearance := Appearance318;
IndexedLineSet319 := TIndexedLineSetNode.Create;
IndexedLineSet319.SetCoordIndex([0,1,-1]);
Coordinate320 := TCoordinateNode.Create;
Coordinate320.SetPoint([Vector3(-0.1,0.0712,0),Vector3(-0.1,0.015,-0.01)]);
{ .SetCoord }
IndexedLineSet319.Coord := Coordinate320;
{ .SetGeometry }
Shape317.Geometry := IndexedLineSet319;
{ .AddChildren }
HAnimSegment314.AddChildren([Shape317]);
Transform321 := TTransformNode.Create;
Transform321.Translation := Vector3(-0.15,0.07,0);
Shape322 := TShapeNode.Create;
Shape322 := Shape72;
{ .AddChild }
Transform321.AddChildren([Shape322]);
{ .AddChildren }
HAnimSegment314.AddChildren([Transform321]);
Transform323 := TTransformNode.Create;
Transform323.Translation := Vector3(-0.085,0.086,0.0125);
Shape324 := TShapeNode.Create;
Shape324 := Shape72;
{ .AddChild }
Transform323.AddChildren([Shape324]);
{ .AddChildren }
HAnimSegment314.AddChildren([Transform323]);
Transform325 := TTransformNode.Create;
Transform325.Translation := Vector3(-0.115,0.069,-0.045);
Shape326 := TShapeNode.Create;
Shape326 := Shape72;
{ .AddChild }
Transform325.AddChildren([Shape326]);
{ .AddChildren }
HAnimSegment314.AddChildren([Transform325]);
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(-0.117,0.0975,0.0615);
Shape328 := TShapeNode.Create;
Shape328 := Shape72;
{ .AddChild }
Transform327.AddChildren([Shape328]);
{ .AddChildren }
HAnimSegment314.AddChildren([Transform327]);
HAnimSite329 := THAnimSiteNode.Create;
HAnimSite329.NameField := 'r_sphyrion_pt';
HAnimSite329.Translation := Vector3(-0.09,0.056,0.0125);
Shape330 := TShapeNode.Create;
Shape330 := Shape60;
{ .AddChildren }
HAnimSite329.AddChildren([Shape330]);
{ .AddChildren }
HAnimSegment314.AddChildren([HAnimSite329]);
HAnimSite331 := THAnimSiteNode.Create;
HAnimSite331.NameField := 'r_calcaneus_posterior_pt';
HAnimSite331.Translation := Vector3(-0.115,0.04,-0.055);
Shape332 := TShapeNode.Create;
Shape332 := Shape60;
{ .AddChildren }
HAnimSite331.AddChildren([Shape332]);
{ .AddChildren }
HAnimSegment314.AddChildren([HAnimSite331]);
{ .AddChildren }
HAnimJoint313.AddChildren([HAnimSegment314]);
HAnimJoint333 := THAnimJointNode.Create;
HAnimJoint333.NameField := 'r_tarsometatarsal_2';
HAnimJoint333.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint333.SetSkinCoordIndex([374,375,376]);
HAnimJoint333.SetSkinCoordWeight([1,1,1]);
HAnimSegment334 := THAnimSegmentNode.Create;
HAnimSegment334.NameField := 'r_metatarsal_2';
Transform335 := TTransformNode.Create;
Transform335.Translation := Vector3(-0.1,0.015,-0.01);
Shape336 := TShapeNode.Create;
Shape336 := Shape53;
{ .AddChild }
Transform335.AddChildren([Shape336]);
{ .AddChildren }
HAnimSegment334.AddChildren([Transform335]);
Shape337 := TShapeNode.Create;
Appearance338 := TAppearanceNode.Create;
Appearance338 := Appearance67;
{ .SetAppearance }
Shape337.Appearance := Appearance338;
IndexedLineSet339 := TIndexedLineSetNode.Create;
IndexedLineSet339.SetCoordIndex([0,1,-1]);
Coordinate340 := TCoordinateNode.Create;
Coordinate340.SetPoint([Vector3(-0.1,0.015,-0.01),Vector3(-0.1,0.02,0.07)]);
{ .SetCoord }
IndexedLineSet339.Coord := Coordinate340;
{ .SetGeometry }
Shape337.Geometry := IndexedLineSet339;
{ .AddChildren }
HAnimSegment334.AddChildren([Shape337]);
Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(-0.1375,0.006,-0.03);
Shape342 := TShapeNode.Create;
Shape342 := Shape72;
{ .AddChild }
Transform341.AddChildren([Shape342]);
{ .AddChildren }
HAnimSegment334.AddChildren([Transform341]);
Transform343 := TTransformNode.Create;
Transform343.Translation := Vector3(-0.095,0.006,-0.03);
Shape344 := TShapeNode.Create;
Shape344 := Shape72;
{ .AddChild }
Transform343.AddChildren([Shape344]);
{ .AddChildren }
HAnimSegment334.AddChildren([Transform343]);
Transform345 := TTransformNode.Create;
Transform345.Translation := Vector3(-0.095,0.006,-0.03);
Shape346 := TShapeNode.Create;
Shape346 := Shape72;
{ .AddChild }
Transform345.AddChildren([Shape346]);
{ .AddChildren }
HAnimSegment334.AddChildren([Transform345]);
{ .AddChildren }
HAnimJoint333.AddChildren([HAnimSegment334]);
HAnimJoint347 := THAnimJointNode.Create;
HAnimJoint347.NameField := 'r_metatarsophalangeal_2';
HAnimJoint347.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint347.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint347.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment348 := THAnimSegmentNode.Create;
HAnimSegment348.NameField := 'r_tarsal_proximal_phalanx_2';
Transform349 := TTransformNode.Create;
Transform349.Translation := Vector3(-0.1,0.02,0.07);
Shape350 := TShapeNode.Create;
Shape350 := Shape53;
{ .AddChild }
Transform349.AddChildren([Shape350]);
{ .AddChildren }
HAnimSegment348.AddChildren([Transform349]);
Shape351 := TShapeNode.Create;
Appearance352 := TAppearanceNode.Create;
Appearance352 := Appearance67;
{ .SetAppearance }
Shape351.Appearance := Appearance352;
IndexedLineSet353 := TIndexedLineSetNode.Create;
IndexedLineSet353.SetCoordIndex([0,1,-1]);
Coordinate354 := TCoordinateNode.Create;
Coordinate354.SetPoint([Vector3(-0.1,0.02,0.07),Vector3(-0.1,0.01,0.14)]);
{ .SetCoord }
IndexedLineSet353.Coord := Coordinate354;
{ .SetGeometry }
Shape351.Geometry := IndexedLineSet353;
{ .AddChildren }
HAnimSegment348.AddChildren([Shape351]);
Transform355 := TTransformNode.Create;
Transform355.Translation := Vector3(-0.115,0.06,0.1);
Shape356 := TShapeNode.Create;
Shape356 := Shape72;
{ .AddChild }
Transform355.AddChildren([Shape356]);
{ .AddChildren }
HAnimSegment348.AddChildren([Transform355]);
Transform357 := TTransformNode.Create;
Transform357.Translation := Vector3(-0.115,0,0.07);
Shape358 := TShapeNode.Create;
Shape358 := Shape72;
{ .AddChild }
Transform357.AddChildren([Shape358]);
{ .AddChildren }
HAnimSegment348.AddChildren([Transform357]);
Transform359 := TTransformNode.Create;
Transform359.Translation := Vector3(-0.165,0,0.07);
Shape360 := TShapeNode.Create;
Shape360 := Shape72;
{ .AddChild }
Transform359.AddChildren([Shape360]);
{ .AddChildren }
HAnimSegment348.AddChildren([Transform359]);
Transform361 := TTransformNode.Create;
Transform361.Translation := Vector3(-0.165,0,0.07);
Shape362 := TShapeNode.Create;
Shape362 := Shape72;
{ .AddChild }
Transform361.AddChildren([Shape362]);
{ .AddChildren }
HAnimSegment348.AddChildren([Transform361]);
HAnimSite363 := THAnimSiteNode.Create;
HAnimSite363.NameField := 'r_metatarsal_phalanx_1_pt';
HAnimSite363.Translation := Vector3(-0.115,0.02,0.122);
Shape364 := TShapeNode.Create;
Shape364 := Shape60;
{ .AddChildren }
HAnimSite363.AddChildren([Shape364]);
{ .AddChildren }
HAnimSegment348.AddChildren([HAnimSite363]);
{ .AddChildren }
HAnimJoint347.AddChildren([HAnimSegment348]);
HAnimJoint365 := THAnimJointNode.Create;
HAnimJoint365.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint365.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint365.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint365.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment366 := THAnimSegmentNode.Create;
HAnimSegment366.NameField := 'r_tarsal_distal_phalanx_2';
Transform367 := TTransformNode.Create;
Transform367.Translation := Vector3(-0.1086,0.01,0.14);
Shape368 := TShapeNode.Create;
Shape368 := Shape53;
{ .AddChild }
Transform367.AddChildren([Shape368]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform367]);
Shape369 := TShapeNode.Create;
Appearance370 := TAppearanceNode.Create;
Appearance370 := Appearance67;
{ .SetAppearance }
Shape369.Appearance := Appearance370;
IndexedLineSet371 := TIndexedLineSetNode.Create;
IndexedLineSet371.SetCoordIndex([0,1,-1]);
Coordinate372 := TCoordinateNode.Create;
Coordinate372.SetPoint([Vector3(-0.1,0.01,0.14),Vector3(-0.1043,0.0016,0.2)]);
{ .SetCoord }
IndexedLineSet371.Coord := Coordinate372;
{ .SetGeometry }
Shape369.Geometry := IndexedLineSet371;
{ .AddChildren }
HAnimSegment366.AddChildren([Shape369]);
Transform373 := TTransformNode.Create;
Transform373.Translation := Vector3(-0.115,0.04,0.13);
Shape374 := TShapeNode.Create;
Shape374 := Shape72;
{ .AddChild }
Transform373.AddChildren([Shape374]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform373]);
Transform375 := TTransformNode.Create;
Transform375.Translation := Vector3(-0.125,0,0.12);
Shape376 := TShapeNode.Create;
Shape376 := Shape72;
{ .AddChild }
Transform375.AddChildren([Shape376]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform375]);
Transform377 := TTransformNode.Create;
Transform377.Translation := Vector3(-0.165,0,0.12);
Shape378 := TShapeNode.Create;
Shape378 := Shape72;
{ .AddChild }
Transform377.AddChildren([Shape378]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform377]);
Transform379 := TTransformNode.Create;
Transform379.Translation := Vector3(-0.087,0,0.122);
Shape380 := TShapeNode.Create;
Shape380 := Shape72;
{ .AddChild }
Transform379.AddChildren([Shape380]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform379]);
Transform381 := TTransformNode.Create;
Transform381.Translation := Vector3(-0.09,0.012,0.188);
Shape382 := TShapeNode.Create;
Shape382 := Shape72;
{ .AddChild }
Transform381.AddChildren([Shape382]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform381]);
Transform383 := TTransformNode.Create;
Transform383.Translation := Vector3(-0.11,0.011,0.19);
Shape384 := TShapeNode.Create;
Shape384 := Shape72;
{ .AddChild }
Transform383.AddChildren([Shape384]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform383]);
Transform385 := TTransformNode.Create;
Transform385.Translation := Vector3(-0.128,0.011,0.185);
Shape386 := TShapeNode.Create;
Shape386 := Shape72;
{ .AddChild }
Transform385.AddChildren([Shape386]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform385]);
Transform387 := TTransformNode.Create;
Transform387.Translation := Vector3(-0.142,0.011,0.178);
Shape388 := TShapeNode.Create;
Shape388 := Shape72;
{ .AddChild }
Transform387.AddChildren([Shape388]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform387]);
Transform389 := TTransformNode.Create;
Transform389.Translation := Vector3(-0.154,0.01,0.168);
Shape390 := TShapeNode.Create;
Shape390 := Shape72;
{ .AddChild }
Transform389.AddChildren([Shape390]);
{ .AddChildren }
HAnimSegment366.AddChildren([Transform389]);
HAnimSite391 := THAnimSiteNode.Create;
HAnimSite391.NameField := 'r_metatarsal_phalanx_5_pt';
HAnimSite391.Translation := Vector3(-0.165,0.01,0.12);
Shape392 := TShapeNode.Create;
Shape392 := Shape60;
{ .AddChildren }
HAnimSite391.AddChildren([Shape392]);
{ .AddChildren }
HAnimSegment366.AddChildren([HAnimSite391]);
HAnimSite393 := THAnimSiteNode.Create;
HAnimSite393.NameField := 'r_tarsal_distal_phalanx_2_pt';
HAnimSite393.Translation := Vector3(-0.11,0.011,0.19);
Shape394 := TShapeNode.Create;
Shape394 := Shape60;
{ .AddChildren }
HAnimSite393.AddChildren([Shape394]);
{ .AddChildren }
HAnimSegment366.AddChildren([HAnimSite393]);
{ .AddChildren }
HAnimJoint365.AddChildren([HAnimSegment366]);
{ .AddChildren }
HAnimJoint347.AddChildren([HAnimJoint365]);
{ .AddChildren }
HAnimJoint333.AddChildren([HAnimJoint347]);
{ .AddChildren }
HAnimJoint313.AddChildren([HAnimJoint333]);
{ .AddChildren }
HAnimJoint285.AddChildren([HAnimJoint313]);
{ .AddChildren }
HAnimJoint259.AddChildren([HAnimJoint285]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint259]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint93]);
HAnimJoint395 := THAnimJointNode.Create;
HAnimJoint395.NameField := 'vl5';
HAnimJoint395.Center := Vector3(0,1.045,-0.095);
HAnimJoint395.SetSkinCoordIndex([28,76]);
HAnimJoint395.SetSkinCoordWeight([1,1]);
HAnimSegment396 := THAnimSegmentNode.Create;
HAnimSegment396.NameField := 'toPelvis';
Shape397 := TShapeNode.Create;
Appearance398 := TAppearanceNode.Create;
Appearance398 := Appearance67;
{ .SetAppearance }
Shape397.Appearance := Appearance398;
IndexedLineSet399 := TIndexedLineSetNode.Create;
IndexedLineSet399.SetCoordIndex([0,1,-1]);
Coordinate400 := TCoordinateNode.Create;
Coordinate400.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,0.9149,0.0016)]);
{ .SetCoord }
IndexedLineSet399.Coord := Coordinate400;
{ .SetGeometry }
Shape397.Geometry := IndexedLineSet399;
{ .AddChildren }
HAnimSegment396.AddChildren([Shape397]);
{ .AddChildren }
HAnimJoint395.AddChildren([HAnimSegment396]);
HAnimSegment401 := THAnimSegmentNode.Create;
HAnimSegment401.NameField := 'l5';
Shape402 := TShapeNode.Create;
Appearance403 := TAppearanceNode.Create;
Appearance403 := Appearance67;
{ .SetAppearance }
Shape402.Appearance := Appearance403;
IndexedLineSet404 := TIndexedLineSetNode.Create;
IndexedLineSet404.SetCoordIndex([0,1,-1]);
Coordinate405 := TCoordinateNode.Create;
Coordinate405.SetPoint([Vector3(0,1.045,-0.095),Vector3(0,1.068,-0.085)]);
{ .SetCoord }
IndexedLineSet404.Coord := Coordinate405;
{ .SetGeometry }
Shape402.Geometry := IndexedLineSet404;
{ .AddChildren }
HAnimSegment401.AddChildren([Shape402]);
HAnimSite406 := THAnimSiteNode.Create;
HAnimSite406.NameField := 'waist_preferred_posterior_pt';
HAnimSite406.Translation := Vector3(0,1.0915,-0.1091);
Shape407 := TShapeNode.Create;
Shape407 := Shape60;
{ .AddChildren }
HAnimSite406.AddChildren([Shape407]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite406]);
HAnimSite408 := THAnimSiteNode.Create;
HAnimSite408.NameField := 'navel_pt';
HAnimSite408.Translation := Vector3(0,1.0723,0.09);
Shape409 := TShapeNode.Create;
Shape409 := Shape60;
{ .AddChildren }
HAnimSite408.AddChildren([Shape409]);
{ .AddChildren }
HAnimSegment401.AddChildren([HAnimSite408]);
{ .AddChildren }
HAnimJoint395.AddChildren([HAnimSegment401]);
HAnimJoint410 := THAnimJointNode.Create;
HAnimJoint410.NameField := 'vl4';
HAnimJoint410.Center := Vector3(0,1.068,-0.085);
HAnimSegment411 := THAnimSegmentNode.Create;
HAnimSegment411.NameField := 'l4';
Shape412 := TShapeNode.Create;
Appearance413 := TAppearanceNode.Create;
Appearance413 := Appearance67;
{ .SetAppearance }
Shape412.Appearance := Appearance413;
IndexedLineSet414 := TIndexedLineSetNode.Create;
IndexedLineSet414.SetCoordIndex([0,1,-1]);
Coordinate415 := TCoordinateNode.Create;
Coordinate415.SetPoint([Vector3(0,1.068,-0.085),Vector3(0,1.092,-0.0725)]);
{ .SetCoord }
IndexedLineSet414.Coord := Coordinate415;
{ .SetGeometry }
Shape412.Geometry := IndexedLineSet414;
{ .AddChildren }
HAnimSegment411.AddChildren([Shape412]);
Transform416 := TTransformNode.Create;
Transform416.Translation := Vector3(0,1.068,-0.085);
Shape417 := TShapeNode.Create;
Shape417 := Shape53;
{ .AddChild }
Transform416.AddChildren([Shape417]);
{ .AddChildren }
HAnimSegment411.AddChildren([Transform416]);
{ .AddChildren }
HAnimJoint410.AddChildren([HAnimSegment411]);
HAnimJoint418 := THAnimJointNode.Create;
HAnimJoint418.NameField := 'vl3';
HAnimJoint418.Center := Vector3(0,1.092,-0.0725);
HAnimSegment419 := THAnimSegmentNode.Create;
HAnimSegment419.NameField := 'l3';
Shape420 := TShapeNode.Create;
Appearance421 := TAppearanceNode.Create;
Appearance421 := Appearance67;
{ .SetAppearance }
Shape420.Appearance := Appearance421;
IndexedLineSet422 := TIndexedLineSetNode.Create;
IndexedLineSet422.SetCoordIndex([0,1,-1]);
Coordinate423 := TCoordinateNode.Create;
Coordinate423.SetPoint([Vector3(0,1.092,-0.0725),Vector3(0,1.12,-0.065)]);
{ .SetCoord }
IndexedLineSet422.Coord := Coordinate423;
{ .SetGeometry }
Shape420.Geometry := IndexedLineSet422;
{ .AddChildren }
HAnimSegment419.AddChildren([Shape420]);
Transform424 := TTransformNode.Create;
Transform424.Translation := Vector3(0,1.092,-0.0725);
Shape425 := TShapeNode.Create;
Shape425 := Shape53;
{ .AddChild }
Transform424.AddChildren([Shape425]);
{ .AddChildren }
HAnimSegment419.AddChildren([Transform424]);
{ .AddChildren }
HAnimJoint418.AddChildren([HAnimSegment419]);
HAnimJoint426 := THAnimJointNode.Create;
HAnimJoint426.NameField := 'vl2';
HAnimJoint426.Center := Vector3(0,1.12,-0.065);
HAnimJoint426.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint426.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment427 := THAnimSegmentNode.Create;
HAnimSegment427.NameField := 'l2';
Shape428 := TShapeNode.Create;
Appearance429 := TAppearanceNode.Create;
Appearance429 := Appearance67;
{ .SetAppearance }
Shape428.Appearance := Appearance429;
IndexedLineSet430 := TIndexedLineSetNode.Create;
IndexedLineSet430.SetCoordIndex([0,1,-1]);
Coordinate431 := TCoordinateNode.Create;
Coordinate431.SetPoint([Vector3(0,1.12,-0.065),Vector3(0,1.1459,-0.0625)]);
{ .SetCoord }
IndexedLineSet430.Coord := Coordinate431;
{ .SetGeometry }
Shape428.Geometry := IndexedLineSet430;
{ .AddChildren }
HAnimSegment427.AddChildren([Shape428]);
Transform432 := TTransformNode.Create;
Transform432.Translation := Vector3(0,1.12,-0.065);
Shape433 := TShapeNode.Create;
Shape433 := Shape53;
{ .AddChild }
Transform432.AddChildren([Shape433]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform432]);
Transform434 := TTransformNode.Create;
Transform434.Translation := Vector3(-0.087,1.19,-0.09);
Shape435 := TShapeNode.Create;
Shape435 := Shape72;
{ .AddChild }
Transform434.AddChildren([Shape435]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform434]);
Transform436 := TTransformNode.Create;
Transform436.Translation := Vector3(0.087,1.19,-0.09);
Shape437 := TShapeNode.Create;
Shape437 := Shape72;
{ .AddChild }
Transform436.AddChildren([Shape437]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform436]);
Transform438 := TTransformNode.Create;
Transform438.Translation := Vector3(0.172,1.32,-0.03);
Shape439 := TShapeNode.Create;
Shape439 := Shape72;
{ .AddChild }
Transform438.AddChildren([Shape439]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform438]);
Transform440 := TTransformNode.Create;
Transform440.Translation := Vector3(-0.172,1.32,-0.03);
Shape441 := TShapeNode.Create;
Shape441 := Shape72;
{ .AddChild }
Transform440.AddChildren([Shape441]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform440]);
Transform442 := TTransformNode.Create;
Transform442.Translation := Vector3(0.15,1.23,-0.015);
Shape443 := TShapeNode.Create;
Shape443 := Shape72;
{ .AddChild }
Transform442.AddChildren([Shape443]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform442]);
Transform444 := TTransformNode.Create;
Transform444.Translation := Vector3(-0.15,1.23,-0.015);
Shape445 := TShapeNode.Create;
Shape445 := Shape72;
{ .AddChild }
Transform444.AddChildren([Shape445]);
{ .AddChildren }
HAnimSegment427.AddChildren([Transform444]);
HAnimSite446 := THAnimSiteNode.Create;
HAnimSite446.NameField := 'r_rib10_pt';
HAnimSite446.Translation := Vector3(-0.087,1.19,0.09);
Shape447 := TShapeNode.Create;
Shape447 := Shape60;
{ .AddChildren }
HAnimSite446.AddChildren([Shape447]);
{ .AddChildren }
HAnimSegment427.AddChildren([HAnimSite446]);
HAnimSite448 := THAnimSiteNode.Create;
HAnimSite448.NameField := 'l_rib10_pt';
HAnimSite448.Translation := Vector3(0.087,1.19,0.09);
Shape449 := TShapeNode.Create;
Shape449 := Shape60;
{ .AddChildren }
HAnimSite448.AddChildren([Shape449]);
{ .AddChildren }
HAnimSegment427.AddChildren([HAnimSite448]);
HAnimSite450 := THAnimSiteNode.Create;
HAnimSite450.NameField := 'rib10_midspine_pt';
HAnimSite450.Translation := Vector3(0,1.1908,-0.1113);
Shape451 := TShapeNode.Create;
Shape451 := Shape60;
{ .AddChildren }
HAnimSite450.AddChildren([Shape451]);
{ .AddChildren }
HAnimSegment427.AddChildren([HAnimSite450]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimSegment427]);
HAnimJoint452 := THAnimJointNode.Create;
HAnimJoint452.NameField := 'vl1';
HAnimJoint452.Center := Vector3(0,1.1459,-0.0625);
HAnimSegment453 := THAnimSegmentNode.Create;
HAnimSegment453.NameField := 'l1';
Shape454 := TShapeNode.Create;
Appearance455 := TAppearanceNode.Create;
Appearance455 := Appearance67;
{ .SetAppearance }
Shape454.Appearance := Appearance455;
IndexedLineSet456 := TIndexedLineSetNode.Create;
IndexedLineSet456.SetCoordIndex([0,1,-1]);
Coordinate457 := TCoordinateNode.Create;
Coordinate457.SetPoint([Vector3(0,1.1459,-0.0625),Vector3(0,1.179,-0.068)]);
{ .SetCoord }
IndexedLineSet456.Coord := Coordinate457;
{ .SetGeometry }
Shape454.Geometry := IndexedLineSet456;
{ .AddChildren }
HAnimSegment453.AddChildren([Shape454]);
Transform458 := TTransformNode.Create;
Transform458.Translation := Vector3(0,1.1459,-0.0625);
Shape459 := TShapeNode.Create;
Shape459 := Shape53;
{ .AddChild }
Transform458.AddChildren([Shape459]);
{ .AddChildren }
HAnimSegment453.AddChildren([Transform458]);
{ .AddChildren }
HAnimJoint452.AddChildren([HAnimSegment453]);
HAnimJoint460 := THAnimJointNode.Create;
HAnimJoint460.NameField := 'vt12';
HAnimJoint460.Center := Vector3(0,1.179,-0.068);
HAnimSegment461 := THAnimSegmentNode.Create;
HAnimSegment461.NameField := 't12';
Shape462 := TShapeNode.Create;
Appearance463 := TAppearanceNode.Create;
Appearance463 := Appearance67;
{ .SetAppearance }
Shape462.Appearance := Appearance463;
IndexedLineSet464 := TIndexedLineSetNode.Create;
IndexedLineSet464.SetCoordIndex([0,1,-1]);
Coordinate465 := TCoordinateNode.Create;
Coordinate465.SetPoint([Vector3(0,1.179,-0.068),Vector3(0,1.242,-0.09)]);
{ .SetCoord }
IndexedLineSet464.Coord := Coordinate465;
{ .SetGeometry }
Shape462.Geometry := IndexedLineSet464;
{ .AddChildren }
HAnimSegment461.AddChildren([Shape462]);
Transform466 := TTransformNode.Create;
Transform466.Translation := Vector3(0,1.179,-0.068);
Shape467 := TShapeNode.Create;
Shape467 := Shape53;
{ .AddChild }
Transform466.AddChildren([Shape467]);
{ .AddChildren }
HAnimSegment461.AddChildren([Transform466]);
{ .AddChildren }
HAnimJoint460.AddChildren([HAnimSegment461]);
HAnimJoint468 := THAnimJointNode.Create;
HAnimJoint468.NameField := 'vt11';
HAnimJoint468.Center := Vector3(0,1.2679,-0.081);
HAnimSegment469 := THAnimSegmentNode.Create;
HAnimSegment469.NameField := 't11';
Shape470 := TShapeNode.Create;
Appearance471 := TAppearanceNode.Create;
Appearance471 := Appearance67;
{ .SetAppearance }
Shape470.Appearance := Appearance471;
IndexedLineSet472 := TIndexedLineSetNode.Create;
IndexedLineSet472.SetCoordIndex([0,1,-1]);
Coordinate473 := TCoordinateNode.Create;
Coordinate473.SetPoint([Vector3(0,1.2145,-0.0755),Vector3(0,1.242,-0.09)]);
{ .SetCoord }
IndexedLineSet472.Coord := Coordinate473;
{ .SetGeometry }
Shape470.Geometry := IndexedLineSet472;
{ .AddChildren }
HAnimSegment469.AddChildren([Shape470]);
Transform474 := TTransformNode.Create;
Transform474.Translation := Vector3(0,1.2145,-0.0755);
Shape475 := TShapeNode.Create;
Shape475 := Shape53;
{ .AddChild }
Transform474.AddChildren([Shape475]);
{ .AddChildren }
HAnimSegment469.AddChildren([Transform474]);
{ .AddChildren }
HAnimJoint468.AddChildren([HAnimSegment469]);
HAnimJoint476 := THAnimJointNode.Create;
HAnimJoint476.NameField := 'vt10';
HAnimJoint476.Center := Vector3(0,1.242,-0.09);
HAnimJoint476.SetSkinCoordIndex([15]);
HAnimJoint476.SetSkinCoordWeight([1]);
HAnimSegment477 := THAnimSegmentNode.Create;
HAnimSegment477.NameField := 't10';
Shape478 := TShapeNode.Create;
Appearance479 := TAppearanceNode.Create;
Appearance479 := Appearance67;
{ .SetAppearance }
Shape478.Appearance := Appearance479;
IndexedLineSet480 := TIndexedLineSetNode.Create;
IndexedLineSet480.SetCoordIndex([0,1,-1]);
Coordinate481 := TCoordinateNode.Create;
Coordinate481.SetPoint([Vector3(0,1.242,-0.09),Vector3(0,1.268,-0.1)]);
{ .SetCoord }
IndexedLineSet480.Coord := Coordinate481;
{ .SetGeometry }
Shape478.Geometry := IndexedLineSet480;
{ .AddChildren }
HAnimSegment477.AddChildren([Shape478]);
Transform482 := TTransformNode.Create;
Transform482.Translation := Vector3(0,1.242,-0.09);
Shape483 := TShapeNode.Create;
Shape483 := Shape53;
{ .AddChild }
Transform482.AddChildren([Shape483]);
{ .AddChildren }
HAnimSegment477.AddChildren([Transform482]);
HAnimSite484 := THAnimSiteNode.Create;
HAnimSite484.NameField := 'substernale_pt';
HAnimSite484.Translation := Vector3(0,1.25,0.113);
Shape485 := TShapeNode.Create;
Shape485 := Shape60;
{ .AddChildren }
HAnimSite484.AddChildren([Shape485]);
{ .AddChildren }
HAnimSegment477.AddChildren([HAnimSite484]);
{ .AddChildren }
HAnimJoint476.AddChildren([HAnimSegment477]);
HAnimJoint486 := THAnimJointNode.Create;
HAnimJoint486.NameField := 'vt9';
HAnimJoint486.Center := Vector3(0,1.268,-0.1);
HAnimJoint486.SetSkinCoordIndex([13,14]);
HAnimJoint486.SetSkinCoordWeight([1,1]);
HAnimSegment487 := THAnimSegmentNode.Create;
HAnimSegment487.NameField := 't9';
Shape488 := TShapeNode.Create;
Appearance489 := TAppearanceNode.Create;
Appearance489 := Appearance67;
{ .SetAppearance }
Shape488.Appearance := Appearance489;
IndexedLineSet490 := TIndexedLineSetNode.Create;
IndexedLineSet490.SetCoordIndex([0,1,-1]);
Coordinate491 := TCoordinateNode.Create;
Coordinate491.SetPoint([Vector3(0,1.268,-0.1),Vector3(0,1.294,-0.11)]);
{ .SetCoord }
IndexedLineSet490.Coord := Coordinate491;
{ .SetGeometry }
Shape488.Geometry := IndexedLineSet490;
{ .AddChildren }
HAnimSegment487.AddChildren([Shape488]);
Transform492 := TTransformNode.Create;
Transform492.Translation := Vector3(0,1.268,-0.1);
Shape493 := TShapeNode.Create;
Shape493 := Shape53;
{ .AddChild }
Transform492.AddChildren([Shape493]);
{ .AddChildren }
HAnimSegment487.AddChildren([Transform492]);
HAnimSite494 := THAnimSiteNode.Create;
HAnimSite494.NameField := 'r_thelion_pt';
HAnimSite494.Translation := Vector3(-0.1135,1.318,0.095);
Shape495 := TShapeNode.Create;
Shape495 := Shape60;
{ .AddChildren }
HAnimSite494.AddChildren([Shape495]);
{ .AddChildren }
HAnimSegment487.AddChildren([HAnimSite494]);
HAnimSite496 := THAnimSiteNode.Create;
HAnimSite496.NameField := 'l_thelion_pt';
HAnimSite496.Translation := Vector3(0.1135,1.318,0.095);
Shape497 := TShapeNode.Create;
Shape497 := Shape60;
{ .AddChildren }
HAnimSite496.AddChildren([Shape497]);
{ .AddChildren }
HAnimSegment487.AddChildren([HAnimSite496]);
{ .AddChildren }
HAnimJoint486.AddChildren([HAnimSegment487]);
HAnimJoint498 := THAnimJointNode.Create;
HAnimJoint498.NameField := 'vt8';
HAnimJoint498.Center := Vector3(0,1.294,-0.11);
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499.NameField := 't8';
Shape500 := TShapeNode.Create;
Appearance501 := TAppearanceNode.Create;
Appearance501 := Appearance67;
{ .SetAppearance }
Shape500.Appearance := Appearance501;
IndexedLineSet502 := TIndexedLineSetNode.Create;
IndexedLineSet502.SetCoordIndex([0,1,-1]);
Coordinate503 := TCoordinateNode.Create;
Coordinate503.SetPoint([Vector3(0,1.294,-0.11),Vector3(0,1.352,-0.12)]);
{ .SetCoord }
IndexedLineSet502.Coord := Coordinate503;
{ .SetGeometry }
Shape500.Geometry := IndexedLineSet502;
{ .AddChildren }
HAnimSegment499.AddChildren([Shape500]);
Transform504 := TTransformNode.Create;
Transform504.Translation := Vector3(0,1.294,-0.11);
Shape505 := TShapeNode.Create;
Shape505 := Shape53;
{ .AddChild }
Transform504.AddChildren([Shape505]);
{ .AddChildren }
HAnimSegment499.AddChildren([Transform504]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimSegment499]);
HAnimJoint506 := THAnimJointNode.Create;
HAnimJoint506.NameField := 'vt7';
HAnimJoint506.Center := Vector3(0,1.323,-0.1155);
HAnimSegment507 := THAnimSegmentNode.Create;
HAnimSegment507.NameField := 't7';
Shape508 := TShapeNode.Create;
Appearance509 := TAppearanceNode.Create;
Appearance509 := Appearance67;
{ .SetAppearance }
Shape508.Appearance := Appearance509;
IndexedLineSet510 := TIndexedLineSetNode.Create;
IndexedLineSet510.SetCoordIndex([0,1,-1]);
Coordinate511 := TCoordinateNode.Create;
Coordinate511.SetPoint([Vector3(0,1.352,-0.12),Vector3(0,1.381,-0.1235)]);
{ .SetCoord }
IndexedLineSet510.Coord := Coordinate511;
{ .SetGeometry }
Shape508.Geometry := IndexedLineSet510;
{ .AddChildren }
HAnimSegment507.AddChildren([Shape508]);
Transform512 := TTransformNode.Create;
Transform512.Translation := Vector3(0,1.323,-0.1155);
Shape513 := TShapeNode.Create;
Shape513 := Shape53;
{ .AddChild }
Transform512.AddChildren([Shape513]);
{ .AddChildren }
HAnimSegment507.AddChildren([Transform512]);
{ .AddChildren }
HAnimJoint506.AddChildren([HAnimSegment507]);
HAnimJoint514 := THAnimJointNode.Create;
HAnimJoint514.NameField := 'vt6';
HAnimJoint514.Center := Vector3(0,1.352,-0.12);
HAnimSegment515 := THAnimSegmentNode.Create;
HAnimSegment515.NameField := 't6';
Shape516 := TShapeNode.Create;
Appearance517 := TAppearanceNode.Create;
Appearance517 := Appearance67;
{ .SetAppearance }
Shape516.Appearance := Appearance517;
IndexedLineSet518 := TIndexedLineSetNode.Create;
IndexedLineSet518.SetCoordIndex([0,1,-1]);
Coordinate519 := TCoordinateNode.Create;
Coordinate519.SetPoint([Vector3(0,1.381,-0.1235),Vector3(0,1.41,-0.1235)]);
{ .SetCoord }
IndexedLineSet518.Coord := Coordinate519;
{ .SetGeometry }
Shape516.Geometry := IndexedLineSet518;
{ .AddChildren }
HAnimSegment515.AddChildren([Shape516]);
Transform520 := TTransformNode.Create;
Transform520.Translation := Vector3(0,1.352,-0.12);
Shape521 := TShapeNode.Create;
Shape521 := Shape53;
{ .AddChild }
Transform520.AddChildren([Shape521]);
{ .AddChildren }
HAnimSegment515.AddChildren([Transform520]);
{ .AddChildren }
HAnimJoint514.AddChildren([HAnimSegment515]);
HAnimJoint522 := THAnimJointNode.Create;
HAnimJoint522.NameField := 'vt5';
HAnimJoint522.Center := Vector3(0,1.381,-0.1235);
HAnimSegment523 := THAnimSegmentNode.Create;
HAnimSegment523.NameField := 't5';
Shape524 := TShapeNode.Create;
Appearance525 := TAppearanceNode.Create;
Appearance525 := Appearance67;
{ .SetAppearance }
Shape524.Appearance := Appearance525;
IndexedLineSet526 := TIndexedLineSetNode.Create;
IndexedLineSet526.SetCoordIndex([0,1,-1]);
Coordinate527 := TCoordinateNode.Create;
Coordinate527.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ .SetCoord }
IndexedLineSet526.Coord := Coordinate527;
{ .SetGeometry }
Shape524.Geometry := IndexedLineSet526;
{ .AddChildren }
HAnimSegment523.AddChildren([Shape524]);
Transform528 := TTransformNode.Create;
Transform528.Translation := Vector3(0,1.381,-0.1235);
Shape529 := TShapeNode.Create;
Shape529 := Shape53;
{ .AddChild }
Transform528.AddChildren([Shape529]);
{ .AddChildren }
HAnimSegment523.AddChildren([Transform528]);
{ .AddChildren }
HAnimJoint522.AddChildren([HAnimSegment523]);
HAnimJoint530 := THAnimJointNode.Create;
HAnimJoint530.NameField := 'vt4';
HAnimJoint530.Center := Vector3(0,1.41,-0.1235);
HAnimJoint530.SetSkinCoordIndex([81]);
HAnimJoint530.SetSkinCoordWeight([1]);
HAnimSegment531 := THAnimSegmentNode.Create;
HAnimSegment531.NameField := 't4';
Shape532 := TShapeNode.Create;
Appearance533 := TAppearanceNode.Create;
Appearance533 := Appearance67;
{ .SetAppearance }
Shape532.Appearance := Appearance533;
IndexedLineSet534 := TIndexedLineSetNode.Create;
IndexedLineSet534.SetCoordIndex([0,1,-1]);
Coordinate535 := TCoordinateNode.Create;
Coordinate535.SetPoint([Vector3(0,1.41,-0.1235),Vector3(0,1.438,-0.12)]);
{ .SetCoord }
IndexedLineSet534.Coord := Coordinate535;
{ .SetGeometry }
Shape532.Geometry := IndexedLineSet534;
{ .AddChildren }
HAnimSegment531.AddChildren([Shape532]);
Transform536 := TTransformNode.Create;
Transform536.Translation := Vector3(0,1.41,-0.1235);
Shape537 := TShapeNode.Create;
Shape537 := Shape53;
{ .AddChild }
Transform536.AddChildren([Shape537]);
{ .AddChildren }
HAnimSegment531.AddChildren([Transform536]);
Transform538 := TTransformNode.Create;
Transform538.Translation := Vector3(0,1.41,-0.145);
Shape539 := TShapeNode.Create;
Shape539 := Shape72;
{ .AddChild }
Transform538.AddChildren([Shape539]);
{ .AddChildren }
HAnimSegment531.AddChildren([Transform538]);
{ .AddChildren }
HAnimJoint530.AddChildren([HAnimSegment531]);
HAnimJoint540 := THAnimJointNode.Create;
HAnimJoint540.NameField := 'vt3';
HAnimJoint540.Center := Vector3(0,1.438,-0.12);
HAnimSegment541 := THAnimSegmentNode.Create;
HAnimSegment541.NameField := 't3';
Shape542 := TShapeNode.Create;
Appearance543 := TAppearanceNode.Create;
Appearance543 := Appearance67;
{ .SetAppearance }
Shape542.Appearance := Appearance543;
IndexedLineSet544 := TIndexedLineSetNode.Create;
IndexedLineSet544.SetCoordIndex([0,1,-1]);
Coordinate545 := TCoordinateNode.Create;
Coordinate545.SetPoint([Vector3(0,1.438,-0.12),Vector3(0,1.468,-0.105)]);
{ .SetCoord }
IndexedLineSet544.Coord := Coordinate545;
{ .SetGeometry }
Shape542.Geometry := IndexedLineSet544;
{ .AddChildren }
HAnimSegment541.AddChildren([Shape542]);
Transform546 := TTransformNode.Create;
Transform546.Translation := Vector3(0,1.438,-0.12);
Shape547 := TShapeNode.Create;
Shape547 := Shape53;
{ .AddChild }
Transform546.AddChildren([Shape547]);
{ .AddChildren }
HAnimSegment541.AddChildren([Transform546]);
{ .AddChildren }
HAnimJoint540.AddChildren([HAnimSegment541]);
HAnimJoint548 := THAnimJointNode.Create;
HAnimJoint548.NameField := 'vt2';
HAnimJoint548.Center := Vector3(0,1.468,-0.105);
HAnimSegment549 := THAnimSegmentNode.Create;
HAnimSegment549.NameField := 't2';
Shape550 := TShapeNode.Create;
Appearance551 := TAppearanceNode.Create;
Appearance551 := Appearance67;
{ .SetAppearance }
Shape550.Appearance := Appearance551;
IndexedLineSet552 := TIndexedLineSetNode.Create;
IndexedLineSet552.SetCoordIndex([0,1,-1]);
Coordinate553 := TCoordinateNode.Create;
Coordinate553.SetPoint([Vector3(0,1.468,-0.105),Vector3(0,1.497,-0.09)]);
{ .SetCoord }
IndexedLineSet552.Coord := Coordinate553;
{ .SetGeometry }
Shape550.Geometry := IndexedLineSet552;
{ .AddChildren }
HAnimSegment549.AddChildren([Shape550]);
Transform554 := TTransformNode.Create;
Transform554.Translation := Vector3(0,1.468,-0.105);
Shape555 := TShapeNode.Create;
Shape555 := Shape53;
{ .AddChild }
Transform554.AddChildren([Shape555]);
{ .AddChildren }
HAnimSegment549.AddChildren([Transform554]);
{ .AddChildren }
HAnimJoint548.AddChildren([HAnimSegment549]);
HAnimJoint556 := THAnimJointNode.Create;
HAnimJoint556.NameField := 'vt1';
HAnimJoint556.Center := Vector3(0,1.497,-0.09);
HAnimJoint556.SetSkinCoordIndex([11,24]);
HAnimJoint556.SetSkinCoordWeight([1,1]);
HAnimSegment557 := THAnimSegmentNode.Create;
HAnimSegment557.NameField := 't1';
Shape558 := TShapeNode.Create;
Appearance559 := TAppearanceNode.Create;
Appearance559 := Appearance67;
{ .SetAppearance }
Shape558.Appearance := Appearance559;
IndexedLineSet560 := TIndexedLineSetNode.Create;
IndexedLineSet560.SetCoordIndex([0,1,-1]);
Coordinate561 := TCoordinateNode.Create;
Coordinate561.SetPoint([Vector3(0,1.497,-0.09),Vector3(0,1.525,-0.072)]);
{ .SetCoord }
IndexedLineSet560.Coord := Coordinate561;
{ .SetGeometry }
Shape558.Geometry := IndexedLineSet560;
{ .AddChildren }
HAnimSegment557.AddChildren([Shape558]);
Transform562 := TTransformNode.Create;
Transform562.Translation := Vector3(0,1.497,-0.09);
Shape563 := TShapeNode.Create;
Shape563 := Shape53;
{ .AddChild }
Transform562.AddChildren([Shape563]);
{ .AddChildren }
HAnimSegment557.AddChildren([Transform562]);
HAnimSite564 := THAnimSiteNode.Create;
HAnimSite564.NameField := 'suprasternale_pt';
HAnimSite564.Translation := Vector3(0,1.44,0.03);
Shape565 := TShapeNode.Create;
Shape565 := Shape60;
{ .AddChildren }
HAnimSite564.AddChildren([Shape565]);
{ .AddChildren }
HAnimSegment557.AddChildren([HAnimSite564]);
HAnimSite566 := THAnimSiteNode.Create;
HAnimSite566.NameField := 'cervicale_pt';
HAnimSite566.Translation := Vector3(0,1.53,-0.084);
Shape567 := TShapeNode.Create;
Shape567 := Shape60;
{ .AddChildren }
HAnimSite566.AddChildren([Shape567]);
{ .AddChildren }
HAnimSegment557.AddChildren([HAnimSite566]);
{ .AddChildren }
HAnimJoint556.AddChildren([HAnimSegment557]);
HAnimJoint568 := THAnimJointNode.Create;
HAnimJoint568.NameField := 'vc7';
HAnimJoint568.Center := Vector3(0,1.525,-0.072);
HAnimJoint568.SetSkinCoordIndex([74,75]);
HAnimJoint568.SetSkinCoordWeight([1,1]);
HAnimSegment569 := THAnimSegmentNode.Create;
HAnimSegment569.NameField := 'c7';
Shape570 := TShapeNode.Create;
Appearance571 := TAppearanceNode.Create;
Appearance571 := Appearance67;
{ .SetAppearance }
Shape570.Appearance := Appearance571;
IndexedLineSet572 := TIndexedLineSetNode.Create;
IndexedLineSet572.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate573 := TCoordinateNode.Create;
Coordinate573.SetPoint([Vector3(0,1.525,-0.072),Vector3(0.082,1.4488,-0.0353),Vector3(-0.03,1.46,0.02),Vector3(0,1.54,-0.05)]);
{ .SetCoord }
IndexedLineSet572.Coord := Coordinate573;
{ .SetGeometry }
Shape570.Geometry := IndexedLineSet572;
{ .AddChildren }
HAnimSegment569.AddChildren([Shape570]);
Transform574 := TTransformNode.Create;
Transform574.Translation := Vector3(0,1.525,-0.072);
Shape575 := TShapeNode.Create;
Shape575 := Shape53;
{ .AddChild }
Transform574.AddChildren([Shape575]);
{ .AddChildren }
HAnimSegment569.AddChildren([Transform574]);
HAnimSite576 := THAnimSiteNode.Create;
HAnimSite576.NameField := 'r_neck_base_pt';
HAnimSite576.Translation := Vector3(-0.0646,1.5149,-0.0385);
Shape577 := TShapeNode.Create;
Shape577 := Shape60;
{ .AddChildren }
HAnimSite576.AddChildren([Shape577]);
{ .AddChildren }
HAnimSegment569.AddChildren([HAnimSite576]);
HAnimSite578 := THAnimSiteNode.Create;
HAnimSite578.NameField := 'l_neck_base_pt';
HAnimSite578.Translation := Vector3(0.0646,1.5149,-0.0385);
Shape579 := TShapeNode.Create;
Shape579 := Shape60;
{ .AddChildren }
HAnimSite578.AddChildren([Shape579]);
{ .AddChildren }
HAnimSegment569.AddChildren([HAnimSite578]);
{ .AddChildren }
HAnimJoint568.AddChildren([HAnimSegment569]);
HAnimJoint580 := THAnimJointNode.Create;
HAnimJoint580.NameField := 'vc6';
HAnimJoint580.Center := Vector3(0,1.54,-0.05);
HAnimSegment581 := THAnimSegmentNode.Create;
HAnimSegment581.NameField := 'c6';
Shape582 := TShapeNode.Create;
Appearance583 := TAppearanceNode.Create;
Appearance583 := Appearance67;
{ .SetAppearance }
Shape582.Appearance := Appearance583;
IndexedLineSet584 := TIndexedLineSetNode.Create;
IndexedLineSet584.SetCoordIndex([0,1,-1]);
Coordinate585 := TCoordinateNode.Create;
Coordinate585.SetPoint([Vector3(0,1.54,-0.05),Vector3(0,1.5675,-0.0256)]);
{ .SetCoord }
IndexedLineSet584.Coord := Coordinate585;
{ .SetGeometry }
Shape582.Geometry := IndexedLineSet584;
{ .AddChildren }
HAnimSegment581.AddChildren([Shape582]);
Transform586 := TTransformNode.Create;
Transform586.Translation := Vector3(0,1.54,-0.05);
Shape587 := TShapeNode.Create;
Shape587 := Shape53;
{ .AddChild }
Transform586.AddChildren([Shape587]);
{ .AddChildren }
HAnimSegment581.AddChildren([Transform586]);
{ .AddChildren }
HAnimJoint580.AddChildren([HAnimSegment581]);
HAnimJoint588 := THAnimJointNode.Create;
HAnimJoint588.NameField := 'vc5';
HAnimJoint588.Center := Vector3(0,1.552,-0.035);
HAnimSegment589 := THAnimSegmentNode.Create;
HAnimSegment589.NameField := 'c5';
Transform590 := TTransformNode.Create;
Transform590.Translation := Vector3(0,1.552,-0.035);
Shape591 := TShapeNode.Create;
Shape591 := Shape53;
{ .AddChild }
Transform590.AddChildren([Shape591]);
{ .AddChildren }
HAnimSegment589.AddChildren([Transform590]);
Shape592 := TShapeNode.Create;
Appearance593 := TAppearanceNode.Create;
Appearance593 := Appearance67;
{ .SetAppearance }
Shape592.Appearance := Appearance593;
IndexedLineSet594 := TIndexedLineSetNode.Create;
IndexedLineSet594.SetCoordIndex([0,1,-1]);
Coordinate595 := TCoordinateNode.Create;
Coordinate595.SetPoint([Vector3(0,1.5675,-0.0256),Vector3(0,1.5823,-0.0185)]);
{ .SetCoord }
IndexedLineSet594.Coord := Coordinate595;
{ .SetGeometry }
Shape592.Geometry := IndexedLineSet594;
{ .AddChildren }
HAnimSegment589.AddChildren([Shape592]);
{ .AddChildren }
HAnimJoint588.AddChildren([HAnimSegment589]);
HAnimJoint596 := THAnimJointNode.Create;
HAnimJoint596.NameField := 'vc4';
HAnimJoint596.Center := Vector3(0,1.5675,-0.0256);
HAnimSegment597 := THAnimSegmentNode.Create;
HAnimSegment597.NameField := 'c4';
Shape598 := TShapeNode.Create;
Appearance599 := TAppearanceNode.Create;
Appearance599 := Appearance67;
{ .SetAppearance }
Shape598.Appearance := Appearance599;
IndexedLineSet600 := TIndexedLineSetNode.Create;
IndexedLineSet600.SetCoordIndex([0,1,-1]);
Coordinate601 := TCoordinateNode.Create;
Coordinate601.SetPoint([Vector3(0,1.5823,-0.0185),Vector3(0,1.595,-0.0175)]);
{ .SetCoord }
IndexedLineSet600.Coord := Coordinate601;
{ .SetGeometry }
Shape598.Geometry := IndexedLineSet600;
{ .AddChildren }
HAnimSegment597.AddChildren([Shape598]);
Transform602 := TTransformNode.Create;
Transform602.Translation := Vector3(0,1.5675,-0.0256);
Shape603 := TShapeNode.Create;
Shape603 := Shape53;
{ .AddChild }
Transform602.AddChildren([Shape603]);
{ .AddChildren }
HAnimSegment597.AddChildren([Transform602]);
{ .AddChildren }
HAnimJoint596.AddChildren([HAnimSegment597]);
HAnimJoint604 := THAnimJointNode.Create;
HAnimJoint604.NameField := 'vc3';
HAnimJoint604.Center := Vector3(0,1.5823,-0.0185);
HAnimSegment605 := THAnimSegmentNode.Create;
HAnimSegment605.NameField := 'c3';
Shape606 := TShapeNode.Create;
Appearance607 := TAppearanceNode.Create;
Appearance607 := Appearance67;
{ .SetAppearance }
Shape606.Appearance := Appearance607;
IndexedLineSet608 := TIndexedLineSetNode.Create;
IndexedLineSet608.SetCoordIndex([0,1,-1]);
Coordinate609 := TCoordinateNode.Create;
Coordinate609.SetPoint([Vector3(0,1.595,-0.0175),Vector3(0,1.61,-0.015)]);
{ .SetCoord }
IndexedLineSet608.Coord := Coordinate609;
{ .SetGeometry }
Shape606.Geometry := IndexedLineSet608;
{ .AddChildren }
HAnimSegment605.AddChildren([Shape606]);
Transform610 := TTransformNode.Create;
Transform610.Translation := Vector3(0,1.5823,-0.0185);
Shape611 := TShapeNode.Create;
Shape611 := Shape53;
{ .AddChild }
Transform610.AddChildren([Shape611]);
{ .AddChildren }
HAnimSegment605.AddChildren([Transform610]);
{ .AddChildren }
HAnimJoint604.AddChildren([HAnimSegment605]);
HAnimJoint612 := THAnimJointNode.Create;
HAnimJoint612.NameField := 'vc2';
HAnimJoint612.Center := Vector3(0,1.595,-0.0175);
HAnimSegment613 := THAnimSegmentNode.Create;
HAnimSegment613.NameField := 'c2';
Shape614 := TShapeNode.Create;
Appearance615 := TAppearanceNode.Create;
Appearance615 := Appearance67;
{ .SetAppearance }
Shape614.Appearance := Appearance615;
IndexedLineSet616 := TIndexedLineSetNode.Create;
IndexedLineSet616.SetCoordIndex([0,1,-1]);
Coordinate617 := TCoordinateNode.Create;
Coordinate617.SetPoint([Vector3(0,1.61,-0.015),Vector3(0,1.6144,-0.0034)]);
{ .SetCoord }
IndexedLineSet616.Coord := Coordinate617;
{ .SetGeometry }
Shape614.Geometry := IndexedLineSet616;
{ .AddChildren }
HAnimSegment613.AddChildren([Shape614]);
Transform618 := TTransformNode.Create;
Transform618.Translation := Vector3(0,1.595,-0.0175);
Shape619 := TShapeNode.Create;
Shape619 := Shape53;
{ .AddChild }
Transform618.AddChildren([Shape619]);
{ .AddChildren }
HAnimSegment613.AddChildren([Transform618]);
{ .AddChildren }
HAnimJoint612.AddChildren([HAnimSegment613]);
HAnimJoint620 := THAnimJointNode.Create;
HAnimJoint620.NameField := 'vc1';
HAnimJoint620.Center := Vector3(0,1.61,-0.015);
HAnimSegment621 := THAnimSegmentNode.Create;
HAnimSegment621.NameField := 'c1';
Shape622 := TShapeNode.Create;
Appearance623 := TAppearanceNode.Create;
Appearance623 := Appearance67;
{ .SetAppearance }
Shape622.Appearance := Appearance623;
IndexedLineSet624 := TIndexedLineSetNode.Create;
IndexedLineSet624.SetCoordIndex([0,1,-1]);
Coordinate625 := TCoordinateNode.Create;
Coordinate625.SetPoint([Vector3(0,1.6144,-0.0034),Vector3(0,1.63,-0.01)]);
{ .SetCoord }
IndexedLineSet624.Coord := Coordinate625;
{ .SetGeometry }
Shape622.Geometry := IndexedLineSet624;
{ .AddChildren }
HAnimSegment621.AddChildren([Shape622]);
Transform626 := TTransformNode.Create;
Transform626.Translation := Vector3(0,1.61,-0.015);
Shape627 := TShapeNode.Create;
Shape627 := Shape53;
{ .AddChild }
Transform626.AddChildren([Shape627]);
{ .AddChildren }
HAnimSegment621.AddChildren([Transform626]);
{ .AddChildren }
HAnimJoint620.AddChildren([HAnimSegment621]);
HAnimJoint628 := THAnimJointNode.Create;
HAnimJoint628.NameField := 'skullbase';
HAnimJoint628.Center := Vector3(0,1.63,-0.01);
HAnimJoint628.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint628.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimSegment629 := THAnimSegmentNode.Create;
HAnimSegment629.NameField := 'skull';
Shape630 := TShapeNode.Create;
Appearance631 := TAppearanceNode.Create;
Appearance631 := Appearance67;
{ .SetAppearance }
Shape630.Appearance := Appearance631;
IndexedLineSet632 := TIndexedLineSetNode.Create;
IndexedLineSet632.SetCoordIndex([0,1,-1,0,2,-1]);
Coordinate633 := TCoordinateNode.Create;
Coordinate633.SetPoint([Vector3(0,1.63,-0.01),Vector3(0.034,1.659,0.06),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet632.Coord := Coordinate633;
{ .SetGeometry }
Shape630.Geometry := IndexedLineSet632;
{ .AddChildren }
HAnimSegment629.AddChildren([Shape630]);
Transform634 := TTransformNode.Create;
Transform634.Translation := Vector3(0,1.63,-0.01);
Shape635 := TShapeNode.Create;
Shape635 := Shape53;
{ .AddChild }
Transform634.AddChildren([Shape635]);
{ .AddChildren }
HAnimSegment629.AddChildren([Transform634]);
HAnimSite636 := THAnimSiteNode.Create;
HAnimSite636.NameField := 'skull_vertex_tip';
HAnimSite636.Translation := Vector3(0,1.77,0);
Shape637 := TShapeNode.Create;
Shape637 := Shape60;
{ .AddChildren }
HAnimSite636.AddChildren([Shape637]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite636]);
HAnimSite638 := THAnimSiteNode.Create;
HAnimSite638.NameField := 'sellion_pt';
HAnimSite638.Translation := Vector3(0,1.665,0.09);
Shape639 := TShapeNode.Create;
Shape639 := Shape60;
{ .AddChildren }
HAnimSite638.AddChildren([Shape639]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite638]);
HAnimSite640 := THAnimSiteNode.Create;
HAnimSite640.NameField := 'r_infraorbitale_pt';
HAnimSite640.Translation := Vector3(-0.033,1.62,0.087);
Shape641 := TShapeNode.Create;
Shape641 := Shape60;
{ .AddChildren }
HAnimSite640.AddChildren([Shape641]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite640]);
HAnimSite642 := THAnimSiteNode.Create;
HAnimSite642.NameField := 'l_infraorbitale_pt';
HAnimSite642.Translation := Vector3(0.033,1.62,0.087);
Shape643 := TShapeNode.Create;
Shape643 := Shape60;
{ .AddChildren }
HAnimSite642.AddChildren([Shape643]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite642]);
HAnimSite644 := THAnimSiteNode.Create;
HAnimSite644.NameField := 'supramenton_pt';
HAnimSite644.Translation := Vector3(0,1.55,0.097);
Shape645 := TShapeNode.Create;
Shape645 := Shape60;
{ .AddChildren }
HAnimSite644.AddChildren([Shape645]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite644]);
HAnimSite646 := THAnimSiteNode.Create;
HAnimSite646.NameField := 'r_tragion_pt';
HAnimSite646.Translation := Vector3(-0.077,1.64,-0.01);
Shape647 := TShapeNode.Create;
Shape647 := Shape60;
{ .AddChildren }
HAnimSite646.AddChildren([Shape647]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite646]);
HAnimSite648 := THAnimSiteNode.Create;
HAnimSite648.NameField := 'r_gonion_pt';
HAnimSite648.Translation := Vector3(-0.052,1.58,0.015);
Shape649 := TShapeNode.Create;
Shape649 := Shape60;
{ .AddChildren }
HAnimSite648.AddChildren([Shape649]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite648]);
HAnimSite650 := THAnimSiteNode.Create;
HAnimSite650.NameField := 'l_tragion_pt';
HAnimSite650.Translation := Vector3(0.077,1.64,-0.01);
Shape651 := TShapeNode.Create;
Shape651 := Shape60;
{ .AddChildren }
HAnimSite650.AddChildren([Shape651]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite650]);
HAnimSite652 := THAnimSiteNode.Create;
HAnimSite652.NameField := 'l_gonion_pt';
HAnimSite652.Translation := Vector3(0.0631,1.58,0.015);
Shape653 := TShapeNode.Create;
Shape653 := Shape60;
{ .AddChildren }
HAnimSite652.AddChildren([Shape653]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite652]);
HAnimSite654 := THAnimSiteNode.Create;
HAnimSite654.NameField := 'nuchale_pt';
HAnimSite654.Translation := Vector3(0,1.625,-0.0925);
Shape655 := TShapeNode.Create;
Shape655 := Shape60;
{ .AddChildren }
HAnimSite654.AddChildren([Shape655]);
{ .AddChildren }
HAnimSegment629.AddChildren([HAnimSite654]);
{ .AddChildren }
HAnimJoint628.AddChildren([HAnimSegment629]);
HAnimJoint656 := THAnimJointNode.Create;
HAnimJoint656.NameField := 'l_eyeball_joint';
HAnimJoint656.Center := Vector3(0.034,1.659,0.06);
HAnimSegment657 := THAnimSegmentNode.Create;
HAnimSegment657.NameField := 'l_eyeball';
Shape658 := TShapeNode.Create;
Appearance659 := TAppearanceNode.Create;
Appearance659 := Appearance67;
{ .SetAppearance }
Shape658.Appearance := Appearance659;
IndexedLineSet660 := TIndexedLineSetNode.Create;
IndexedLineSet660.SetCoordIndex([0,1,-1]);
Coordinate661 := TCoordinateNode.Create;
Coordinate661.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet660.Coord := Coordinate661;
{ .SetGeometry }
Shape658.Geometry := IndexedLineSet660;
{ .AddChildren }
HAnimSegment657.AddChildren([Shape658]);
Transform662 := TTransformNode.Create;
Transform662.Scale := Vector3(1,1,1.4);
Transform662.Translation := Vector3(0.034,1.655,0.065);
Shape663 := TShapeNode.Create;
Shape663 := Shape53;
{ .AddChild }
Transform662.AddChildren([Shape663]);
{ .AddChildren }
HAnimSegment657.AddChildren([Transform662]);
{ .AddChildren }
HAnimJoint656.AddChildren([HAnimSegment657]);
{ .AddChildren }
HAnimJoint628.AddChildren([HAnimJoint656]);
HAnimJoint664 := THAnimJointNode.Create;
HAnimJoint664.NameField := 'r_eyeball_joint';
HAnimJoint664.Center := Vector3(-0.034,1.659,0.06);
HAnimSegment665 := THAnimSegmentNode.Create;
HAnimSegment665.NameField := 'r_eyeball';
Shape666 := TShapeNode.Create;
Appearance667 := TAppearanceNode.Create;
Appearance667 := Appearance67;
{ .SetAppearance }
Shape666.Appearance := Appearance667;
IndexedLineSet668 := TIndexedLineSetNode.Create;
IndexedLineSet668.SetCoordIndex([0,1,-1]);
Coordinate669 := TCoordinateNode.Create;
Coordinate669.SetPoint([Vector3(0.034,1.655,0.065),Vector3(-0.034,1.655,0.065)]);
{ .SetCoord }
IndexedLineSet668.Coord := Coordinate669;
{ .SetGeometry }
Shape666.Geometry := IndexedLineSet668;
{ .AddChildren }
HAnimSegment665.AddChildren([Shape666]);
Transform670 := TTransformNode.Create;
Transform670.Scale := Vector3(1,1,1.4);
Transform670.Translation := Vector3(-0.034,1.655,0.065);
Shape671 := TShapeNode.Create;
Shape671 := Shape53;
{ .AddChild }
Transform670.AddChildren([Shape671]);
{ .AddChildren }
HAnimSegment665.AddChildren([Transform670]);
{ .AddChildren }
HAnimJoint664.AddChildren([HAnimSegment665]);
{ .AddChildren }
HAnimJoint628.AddChildren([HAnimJoint664]);
{ .AddChildren }
HAnimJoint620.AddChildren([HAnimJoint628]);
{ .AddChildren }
HAnimJoint612.AddChildren([HAnimJoint620]);
{ .AddChildren }
HAnimJoint604.AddChildren([HAnimJoint612]);
{ .AddChildren }
HAnimJoint596.AddChildren([HAnimJoint604]);
{ .AddChildren }
HAnimJoint588.AddChildren([HAnimJoint596]);
{ .AddChildren }
HAnimJoint580.AddChildren([HAnimJoint588]);
{ .AddChildren }
HAnimJoint568.AddChildren([HAnimJoint580]);
{ .AddChildren }
HAnimJoint556.AddChildren([HAnimJoint568]);
HAnimJoint672 := THAnimJointNode.Create;
HAnimJoint672.NameField := 'l_sternoclavicular';
HAnimJoint672.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint672.SetSkinCoordIndex([12]);
HAnimJoint672.SetSkinCoordWeight([1]);
HAnimSegment673 := THAnimSegmentNode.Create;
HAnimSegment673.NameField := 'l_clavicle';
Shape674 := TShapeNode.Create;
Appearance675 := TAppearanceNode.Create;
Appearance675 := Appearance67;
{ .SetAppearance }
Shape674.Appearance := Appearance675;
IndexedLineSet676 := TIndexedLineSetNode.Create;
IndexedLineSet676.SetCoordIndex([0,1,-1]);
Coordinate677 := TCoordinateNode.Create;
Coordinate677.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
{ .SetCoord }
IndexedLineSet676.Coord := Coordinate677;
{ .SetGeometry }
Shape674.Geometry := IndexedLineSet676;
{ .AddChildren }
HAnimSegment673.AddChildren([Shape674]);
Transform678 := TTransformNode.Create;
Transform678.Translation := Vector3(0.082,1.4488,-0.0353);
Shape679 := TShapeNode.Create;
Shape679 := Shape53;
{ .AddChild }
Transform678.AddChildren([Shape679]);
{ .AddChildren }
HAnimSegment673.AddChildren([Transform678]);
HAnimSite680 := THAnimSiteNode.Create;
HAnimSite680.NameField := 'l_clavicle_pt';
HAnimSite680.Translation := Vector3(0.03,1.46,0.035);
Shape681 := TShapeNode.Create;
Shape681 := Shape60;
{ .AddChildren }
HAnimSite680.AddChildren([Shape681]);
{ .AddChildren }
HAnimSegment673.AddChildren([HAnimSite680]);
{ .AddChildren }
HAnimJoint672.AddChildren([HAnimSegment673]);
HAnimJoint682 := THAnimJointNode.Create;
HAnimJoint682.NameField := 'l_acromioclavicular';
HAnimJoint682.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint682.SetSkinCoordIndex([79]);
HAnimJoint682.SetSkinCoordWeight([1]);
HAnimSegment683 := THAnimSegmentNode.Create;
HAnimSegment683.NameField := 'l_scapula';
Shape684 := TShapeNode.Create;
Appearance685 := TAppearanceNode.Create;
Appearance685 := Appearance67;
{ .SetAppearance }
Shape684.Appearance := Appearance685;
IndexedLineSet686 := TIndexedLineSetNode.Create;
IndexedLineSet686.SetCoordIndex([0,1,-1]);
Coordinate687 := TCoordinateNode.Create;
Coordinate687.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2,1.44,-0.04)]);
{ .SetCoord }
IndexedLineSet686.Coord := Coordinate687;
{ .SetGeometry }
Shape684.Geometry := IndexedLineSet686;
{ .AddChildren }
HAnimSegment683.AddChildren([Shape684]);
Transform688 := TTransformNode.Create;
Transform688.Translation := Vector3(0.0962,1.4269,-0.0424);
Shape689 := TShapeNode.Create;
Shape689 := Shape53;
{ .AddChild }
Transform688.AddChildren([Shape689]);
{ .AddChildren }
HAnimSegment683.AddChildren([Transform688]);
Transform690 := TTransformNode.Create;
Transform690.Translation := Vector3(0.11,1.427,-0.1375);
Shape691 := TShapeNode.Create;
Shape691 := Shape72;
{ .AddChild }
Transform690.AddChildren([Shape691]);
{ .AddChildren }
HAnimSegment683.AddChildren([Transform690]);
HAnimSite692 := THAnimSiteNode.Create;
HAnimSite692.NameField := 'l_acromion_pt';
HAnimSite692.Translation := Vector3(0.175,1.4825,-0.06);
Shape693 := TShapeNode.Create;
Shape693 := Shape60;
{ .AddChildren }
HAnimSite692.AddChildren([Shape693]);
{ .AddChildren }
HAnimSegment683.AddChildren([HAnimSite692]);
HAnimSite694 := THAnimSiteNode.Create;
HAnimSite694.NameField := 'l_axilla_proximal_pt';
HAnimSite694.Translation := Vector3(0.17,1.38,0.007);
Shape695 := TShapeNode.Create;
Shape695 := Shape60;
{ .AddChildren }
HAnimSite694.AddChildren([Shape695]);
{ .AddChildren }
HAnimSegment683.AddChildren([HAnimSite694]);
HAnimSite696 := THAnimSiteNode.Create;
HAnimSite696.NameField := 'l_axilla_distal_pt';
HAnimSite696.Translation := Vector3(0.16,1.38,-0.125);
Shape697 := TShapeNode.Create;
Shape697 := Shape60;
{ .AddChildren }
HAnimSite696.AddChildren([Shape697]);
{ .AddChildren }
HAnimSegment683.AddChildren([HAnimSite696]);
{ .AddChildren }
HAnimJoint682.AddChildren([HAnimSegment683]);
HAnimJoint698 := THAnimJointNode.Create;
HAnimJoint698.NameField := 'l_shoulder';
HAnimJoint698.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint698.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint698.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment699 := THAnimSegmentNode.Create;
HAnimSegment699.NameField := 'l_upperarm';
Shape700 := TShapeNode.Create;
Appearance701 := TAppearanceNode.Create;
Appearance701 := Appearance67;
{ .SetAppearance }
Shape700.Appearance := Appearance701;
IndexedLineSet702 := TIndexedLineSetNode.Create;
IndexedLineSet702.SetCoordIndex([0,1,-1]);
Coordinate703 := TCoordinateNode.Create;
Coordinate703.SetPoint([Vector3(0.2029,1.44,-0.0387),Vector3(0.2,1.1388,-0.04)]);
{ .SetCoord }
IndexedLineSet702.Coord := Coordinate703;
{ .SetGeometry }
Shape700.Geometry := IndexedLineSet702;
{ .AddChildren }
HAnimSegment699.AddChildren([Shape700]);
Transform704 := TTransformNode.Create;
Transform704.Translation := Vector3(0.2,1.44,-0.04);
Shape705 := TShapeNode.Create;
Shape705 := Shape53;
{ .AddChild }
Transform704.AddChildren([Shape705]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform704]);
Transform706 := TTransformNode.Create;
Transform706.Translation := Vector3(0.235,1.42,-0.0625);
Shape707 := TShapeNode.Create;
Shape707 := Shape72;
{ .AddChild }
Transform706.AddChildren([Shape707]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform706]);
Transform708 := TTransformNode.Create;
Transform708.Translation := Vector3(0.25,1.27,-0.04);
Shape709 := TShapeNode.Create;
Shape709 := Shape72;
{ .AddChild }
Transform708.AddChildren([Shape709]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform708]);
Transform710 := TTransformNode.Create;
Transform710.Translation := Vector3(0.17,1.27,-0.04);
Shape711 := TShapeNode.Create;
Shape711 := Shape72;
{ .AddChild }
Transform710.AddChildren([Shape711]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform710]);
Transform712 := TTransformNode.Create;
Transform712.Translation := Vector3(0.2,1.27,-0.09);
Shape713 := TShapeNode.Create;
Shape713 := Shape72;
{ .AddChild }
Transform712.AddChildren([Shape713]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform712]);
Transform714 := TTransformNode.Create;
Transform714.Translation := Vector3(0.2,1.27,0.02);
Shape715 := TShapeNode.Create;
Shape715 := Shape72;
{ .AddChild }
Transform714.AddChildren([Shape715]);
{ .AddChildren }
HAnimSegment699.AddChildren([Transform714]);
HAnimSite716 := THAnimSiteNode.Create;
HAnimSite716.NameField := 'l_humeral_medial_epicondyle_pt';
HAnimSite716.Translation := Vector3(0.165,1.1388,-0.04);
Shape717 := TShapeNode.Create;
Shape717 := Shape60;
{ .AddChildren }
HAnimSite716.AddChildren([Shape717]);
{ .AddChildren }
HAnimSegment699.AddChildren([HAnimSite716]);
HAnimSite718 := THAnimSiteNode.Create;
HAnimSite718.NameField := 'l_radiale_pt';
HAnimSite718.Translation := Vector3(0.23,1.133,-0.055);
Shape719 := TShapeNode.Create;
Shape719 := Shape60;
{ .AddChildren }
HAnimSite718.AddChildren([Shape719]);
{ .AddChildren }
HAnimSegment699.AddChildren([HAnimSite718]);
HAnimSite720 := THAnimSiteNode.Create;
HAnimSite720.NameField := 'l_humeral_lateral_epicondyle_pt';
HAnimSite720.Translation := Vector3(0.244,1.1388,-0.04);
Shape721 := TShapeNode.Create;
Shape721 := Shape60;
{ .AddChildren }
HAnimSite720.AddChildren([Shape721]);
{ .AddChildren }
HAnimSegment699.AddChildren([HAnimSite720]);
{ .AddChildren }
HAnimJoint698.AddChildren([HAnimSegment699]);
HAnimJoint722 := THAnimJointNode.Create;
HAnimJoint722.NameField := 'l_elbow';
HAnimJoint722.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint722.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint722.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment723 := THAnimSegmentNode.Create;
HAnimSegment723.NameField := 'l_forearm';
Shape724 := TShapeNode.Create;
Appearance725 := TAppearanceNode.Create;
Appearance725 := Appearance67;
{ .SetAppearance }
Shape724.Appearance := Appearance725;
IndexedLineSet726 := TIndexedLineSetNode.Create;
IndexedLineSet726.SetCoordIndex([0,1,-1]);
Coordinate727 := TCoordinateNode.Create;
Coordinate727.SetPoint([Vector3(0.2,1.1388,-0.04),Vector3(0.2,0.87,-0.04)]);
{ .SetCoord }
IndexedLineSet726.Coord := Coordinate727;
{ .SetGeometry }
Shape724.Geometry := IndexedLineSet726;
{ .AddChildren }
HAnimSegment723.AddChildren([Shape724]);
Transform728 := TTransformNode.Create;
Transform728.Translation := Vector3(0.2,1.1388,-0.04);
Shape729 := TShapeNode.Create;
Shape729 := Shape53;
{ .AddChild }
Transform728.AddChildren([Shape729]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform728]);
Transform730 := TTransformNode.Create;
Transform730.Translation := Vector3(0.2,1.1388,-0.013);
Shape731 := TShapeNode.Create;
Shape731 := Shape72;
{ .AddChild }
Transform730.AddChildren([Shape731]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform730]);
Transform732 := TTransformNode.Create;
Transform732.Translation := Vector3(0.225,1,-0.01);
Shape733 := TShapeNode.Create;
Shape733 := Shape72;
{ .AddChild }
Transform732.AddChildren([Shape733]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform732]);
Transform734 := TTransformNode.Create;
Transform734.Translation := Vector3(0.225,1,-0.07);
Shape735 := TShapeNode.Create;
Shape735 := Shape72;
{ .AddChild }
Transform734.AddChildren([Shape735]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform734]);
Transform736 := TTransformNode.Create;
Transform736.Translation := Vector3(0.185,1,-0.01);
Shape737 := TShapeNode.Create;
Shape737 := Shape72;
{ .AddChild }
Transform736.AddChildren([Shape737]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform736]);
Transform738 := TTransformNode.Create;
Transform738.Translation := Vector3(0.185,1,-0.07);
Shape739 := TShapeNode.Create;
Shape739 := Shape72;
{ .AddChild }
Transform738.AddChildren([Shape739]);
{ .AddChildren }
HAnimSegment723.AddChildren([Transform738]);
HAnimSite740 := THAnimSiteNode.Create;
HAnimSite740.NameField := 'l_radial_styloid_pt';
HAnimSite740.Translation := Vector3(0.1901,0.8645,-0.0415);
Shape741 := TShapeNode.Create;
Shape741 := Shape60;
{ .AddChildren }
HAnimSite740.AddChildren([Shape741]);
{ .AddChildren }
HAnimSegment723.AddChildren([HAnimSite740]);
HAnimSite742 := THAnimSiteNode.Create;
HAnimSite742.NameField := 'l_olecranon_pt';
HAnimSite742.Translation := Vector3(0.2,1.1388,-0.08);
Shape743 := TShapeNode.Create;
Shape743 := Shape60;
{ .AddChildren }
HAnimSite742.AddChildren([Shape743]);
{ .AddChildren }
HAnimSegment723.AddChildren([HAnimSite742]);
{ .AddChildren }
HAnimJoint722.AddChildren([HAnimSegment723]);
HAnimJoint744 := THAnimJointNode.Create;
HAnimJoint744.NameField := 'l_radiocarpal';
HAnimJoint744.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint744.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint744.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment745 := THAnimSegmentNode.Create;
HAnimSegment745.NameField := 'l_carpal';
Shape746 := TShapeNode.Create;
Appearance747 := TAppearanceNode.Create;
Appearance747 := Appearance67;
{ .SetAppearance }
Shape746.Appearance := Appearance747;
IndexedLineSet748 := TIndexedLineSetNode.Create;
IndexedLineSet748.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate749 := TCoordinateNode.Create;
Coordinate749.SetPoint([Vector3(0.2,0.87,-0.04),Vector3(0.1924,0.8472,-0.0534),Vector3(0.1983,0.8024,-0.028),Vector3(0.1987,0.8029,-0.053),Vector3(0.1956,0.8019,-0.0794),Vector3(0.1925,0.8066,-0.1036)]);
{ .SetCoord }
IndexedLineSet748.Coord := Coordinate749;
{ .SetGeometry }
Shape746.Geometry := IndexedLineSet748;
{ .AddChildren }
HAnimSegment745.AddChildren([Shape746]);
Transform750 := TTransformNode.Create;
Transform750.Translation := Vector3(0.2,0.87,-0.04);
Shape751 := TShapeNode.Create;
Shape751 := Shape53;
{ .AddChild }
Transform750.AddChildren([Shape751]);
{ .AddChildren }
HAnimSegment745.AddChildren([Transform750]);
HAnimSite752 := THAnimSiteNode.Create;
HAnimSite752.NameField := 'l_metacarpal_phalanx_2_pt';
HAnimSite752.Translation := Vector3(0.2009,0.8139,-0.0237);
Shape753 := TShapeNode.Create;
Shape753 := Shape60;
{ .AddChildren }
HAnimSite752.AddChildren([Shape753]);
{ .AddChildren }
HAnimSegment745.AddChildren([HAnimSite752]);
HAnimSite754 := THAnimSiteNode.Create;
HAnimSite754.NameField := 'l_ulnar_styloid_pt';
HAnimSite754.Translation := Vector3(0.2142,0.8529,-0.0648);
Shape755 := TShapeNode.Create;
Shape755 := Shape60;
{ .AddChildren }
HAnimSite754.AddChildren([Shape755]);
{ .AddChildren }
HAnimSegment745.AddChildren([HAnimSite754]);
HAnimSite756 := THAnimSiteNode.Create;
HAnimSite756.NameField := 'l_metacarpal_phalanx_5_pt';
HAnimSite756.Translation := Vector3(0.1929,0.786,-0.1122);
Shape757 := TShapeNode.Create;
Shape757 := Shape60;
{ .AddChildren }
HAnimSite756.AddChildren([Shape757]);
{ .AddChildren }
HAnimSegment745.AddChildren([HAnimSite756]);
{ .AddChildren }
HAnimJoint744.AddChildren([HAnimSegment745]);
HAnimJoint758 := THAnimJointNode.Create;
HAnimJoint758.NameField := 'l_carpometacarpal_1';
HAnimJoint758.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint758.SetSkinCoordIndex([127,128]);
HAnimJoint758.SetSkinCoordWeight([1,1]);
HAnimSegment759 := THAnimSegmentNode.Create;
HAnimSegment759.NameField := 'l_metacarpal_1';
Shape760 := TShapeNode.Create;
Appearance761 := TAppearanceNode.Create;
Appearance761 := Appearance67;
{ .SetAppearance }
Shape760.Appearance := Appearance761;
IndexedLineSet762 := TIndexedLineSetNode.Create;
IndexedLineSet762.SetCoordIndex([0,1,-1]);
Coordinate763 := TCoordinateNode.Create;
Coordinate763.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ .SetCoord }
IndexedLineSet762.Coord := Coordinate763;
{ .SetGeometry }
Shape760.Geometry := IndexedLineSet762;
{ .AddChildren }
HAnimSegment759.AddChildren([Shape760]);
Transform764 := TTransformNode.Create;
Transform764.Translation := Vector3(0.1924,0.8472,-0.0534);
Shape765 := TShapeNode.Create;
Shape765 := Shape53;
{ .AddChild }
Transform764.AddChildren([Shape765]);
{ .AddChildren }
HAnimSegment759.AddChildren([Transform764]);
{ .AddChildren }
HAnimJoint758.AddChildren([HAnimSegment759]);
HAnimJoint766 := THAnimJointNode.Create;
HAnimJoint766.NameField := 'l_metacarpophalangeal_1';
HAnimJoint766.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint766.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint766.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment767 := THAnimSegmentNode.Create;
HAnimSegment767.NameField := 'l_carpal_proximal_phalanx_1';
Shape768 := TShapeNode.Create;
Appearance769 := TAppearanceNode.Create;
Appearance769 := Appearance67;
{ .SetAppearance }
Shape768.Appearance := Appearance769;
IndexedLineSet770 := TIndexedLineSetNode.Create;
IndexedLineSet770.SetCoordIndex([0,1,-1]);
Coordinate771 := TCoordinateNode.Create;
Coordinate771.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ .SetCoord }
IndexedLineSet770.Coord := Coordinate771;
{ .SetGeometry }
Shape768.Geometry := IndexedLineSet770;
{ .AddChildren }
HAnimSegment767.AddChildren([Shape768]);
Transform772 := TTransformNode.Create;
Transform772.Translation := Vector3(0.1951,0.8226,0.0246);
Shape773 := TShapeNode.Create;
Shape773 := Shape53;
{ .AddChild }
Transform772.AddChildren([Shape773]);
{ .AddChildren }
HAnimSegment767.AddChildren([Transform772]);
{ .AddChildren }
HAnimJoint766.AddChildren([HAnimSegment767]);
HAnimJoint774 := THAnimJointNode.Create;
HAnimJoint774.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint774.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint774.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint774.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment775 := THAnimSegmentNode.Create;
HAnimSegment775.NameField := 'l_carpal_distal_phalanx_1';
Shape776 := TShapeNode.Create;
Appearance777 := TAppearanceNode.Create;
Appearance777 := Appearance67;
{ .SetAppearance }
Shape776.Appearance := Appearance777;
IndexedLineSet778 := TIndexedLineSetNode.Create;
IndexedLineSet778.SetCoordIndex([0,1,-1]);
Coordinate779 := TCoordinateNode.Create;
Coordinate779.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1982,0.8061,0.0759)]);
{ .SetCoord }
IndexedLineSet778.Coord := Coordinate779;
{ .SetGeometry }
Shape776.Geometry := IndexedLineSet778;
{ .AddChildren }
HAnimSegment775.AddChildren([Shape776]);
Transform780 := TTransformNode.Create;
Transform780.Translation := Vector3(0.1955,0.8159,0.0464);
Shape781 := TShapeNode.Create;
Shape781 := Shape53;
{ .AddChild }
Transform780.AddChildren([Shape781]);
{ .AddChildren }
HAnimSegment775.AddChildren([Transform780]);
HAnimSite782 := THAnimSiteNode.Create;
HAnimSite782.NameField := 'l_carpal_distal_phalanx_1_tip';
HAnimSite782.Translation := Vector3(0.1982,0.8061,0.0759);
Shape783 := TShapeNode.Create;
Shape783 := Shape60;
{ .AddChildren }
HAnimSite782.AddChildren([Shape783]);
{ .AddChildren }
HAnimSegment775.AddChildren([HAnimSite782]);
{ .AddChildren }
HAnimJoint774.AddChildren([HAnimSegment775]);
{ .AddChildren }
HAnimJoint766.AddChildren([HAnimJoint774]);
{ .AddChildren }
HAnimJoint758.AddChildren([HAnimJoint766]);
{ .AddChildren }
HAnimJoint744.AddChildren([HAnimJoint758]);
HAnimJoint784 := THAnimJointNode.Create;
HAnimJoint784.NameField := 'l_carpometacarpal_2';
HAnimJoint784.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint784.SetSkinCoordIndex([129,130]);
HAnimJoint784.SetSkinCoordWeight([1,1]);
HAnimSegment785 := THAnimSegmentNode.Create;
HAnimSegment785.NameField := 'l_metacarpal_2';
Shape786 := TShapeNode.Create;
Appearance787 := TAppearanceNode.Create;
Appearance787 := Appearance67;
{ .SetAppearance }
Shape786.Appearance := Appearance787;
IndexedLineSet788 := TIndexedLineSetNode.Create;
IndexedLineSet788.SetCoordIndex([0,1,-1]);
Coordinate789 := TCoordinateNode.Create;
Coordinate789.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ .SetCoord }
IndexedLineSet788.Coord := Coordinate789;
{ .SetGeometry }
Shape786.Geometry := IndexedLineSet788;
{ .AddChildren }
HAnimSegment785.AddChildren([Shape786]);
Transform790 := TTransformNode.Create;
Transform790.Translation := Vector3(0.1983,0.8024,-0.028);
Shape791 := TShapeNode.Create;
Shape791 := Shape53;
{ .AddChild }
Transform790.AddChildren([Shape791]);
{ .AddChildren }
HAnimSegment785.AddChildren([Transform790]);
{ .AddChildren }
HAnimJoint784.AddChildren([HAnimSegment785]);
HAnimJoint792 := THAnimJointNode.Create;
HAnimJoint792.NameField := 'l_metacarpophalangeal_2';
HAnimJoint792.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint792.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint792.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment793 := THAnimSegmentNode.Create;
HAnimSegment793.NameField := 'l_carpal_proximal_phalanx_2';
Shape794 := TShapeNode.Create;
Appearance795 := TAppearanceNode.Create;
Appearance795 := Appearance67;
{ .SetAppearance }
Shape794.Appearance := Appearance795;
IndexedLineSet796 := TIndexedLineSetNode.Create;
IndexedLineSet796.SetCoordIndex([0,1,-1]);
Coordinate797 := TCoordinateNode.Create;
Coordinate797.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ .SetCoord }
IndexedLineSet796.Coord := Coordinate797;
{ .SetGeometry }
Shape794.Geometry := IndexedLineSet796;
{ .AddChildren }
HAnimSegment793.AddChildren([Shape794]);
Transform798 := TTransformNode.Create;
Transform798.Translation := Vector3(0.1983,0.7815,-0.028);
Shape799 := TShapeNode.Create;
Shape799 := Shape53;
{ .AddChild }
Transform798.AddChildren([Shape799]);
{ .AddChildren }
HAnimSegment793.AddChildren([Transform798]);
{ .AddChildren }
HAnimJoint792.AddChildren([HAnimSegment793]);
HAnimJoint800 := THAnimJointNode.Create;
HAnimJoint800.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint800.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint800.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint800.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment801 := THAnimSegmentNode.Create;
HAnimSegment801.NameField := 'l_carpal_middle_phalanx_2';
Shape802 := TShapeNode.Create;
Appearance803 := TAppearanceNode.Create;
Appearance803 := Appearance67;
{ .SetAppearance }
Shape802.Appearance := Appearance803;
IndexedLineSet804 := TIndexedLineSetNode.Create;
IndexedLineSet804.SetCoordIndex([0,1,-1]);
Coordinate805 := TCoordinateNode.Create;
Coordinate805.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ .SetCoord }
IndexedLineSet804.Coord := Coordinate805;
{ .SetGeometry }
Shape802.Geometry := IndexedLineSet804;
{ .AddChildren }
HAnimSegment801.AddChildren([Shape802]);
Transform806 := TTransformNode.Create;
Transform806.Translation := Vector3(0.2017,0.7363,-0.0248);
Shape807 := TShapeNode.Create;
Shape807 := Shape53;
{ .AddChild }
Transform806.AddChildren([Shape807]);
{ .AddChildren }
HAnimSegment801.AddChildren([Transform806]);
{ .AddChildren }
HAnimJoint800.AddChildren([HAnimSegment801]);
HAnimJoint808 := THAnimJointNode.Create;
HAnimJoint808.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint808.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint808.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint808.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment809 := THAnimSegmentNode.Create;
HAnimSegment809.NameField := 'l_carpal_distal_phalanx_2';
Shape810 := TShapeNode.Create;
Appearance811 := TAppearanceNode.Create;
Appearance811 := Appearance67;
{ .SetAppearance }
Shape810.Appearance := Appearance811;
IndexedLineSet812 := TIndexedLineSetNode.Create;
IndexedLineSet812.SetCoordIndex([0,1,-1]);
Coordinate813 := TCoordinateNode.Create;
Coordinate813.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2089,0.6858,-0.0245)]);
{ .SetCoord }
IndexedLineSet812.Coord := Coordinate813;
{ .SetGeometry }
Shape810.Geometry := IndexedLineSet812;
{ .AddChildren }
HAnimSegment809.AddChildren([Shape810]);
Transform814 := TTransformNode.Create;
Transform814.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape815 := TShapeNode.Create;
Shape815 := Shape53;
{ .AddChild }
Transform814.AddChildren([Shape815]);
{ .AddChildren }
HAnimSegment809.AddChildren([Transform814]);
HAnimSite816 := THAnimSiteNode.Create;
HAnimSite816.NameField := 'l_carpal_distal_phalanx_2_tip';
HAnimSite816.Translation := Vector3(0.2089,0.6858,-0.0245);
Shape817 := TShapeNode.Create;
Shape817 := Shape60;
{ .AddChildren }
HAnimSite816.AddChildren([Shape817]);
{ .AddChildren }
HAnimSegment809.AddChildren([HAnimSite816]);
HAnimSite818 := THAnimSiteNode.Create;
HAnimSite818.NameField := 'l_dactylion_pt';
HAnimSite818.Translation := Vector3(0.2056,0.6743,-0.0482);
Shape819 := TShapeNode.Create;
Shape819 := Shape60;
{ .AddChildren }
HAnimSite818.AddChildren([Shape819]);
{ .AddChildren }
HAnimSegment809.AddChildren([HAnimSite818]);
{ .AddChildren }
HAnimJoint808.AddChildren([HAnimSegment809]);
{ .AddChildren }
HAnimJoint800.AddChildren([HAnimJoint808]);
{ .AddChildren }
HAnimJoint792.AddChildren([HAnimJoint800]);
{ .AddChildren }
HAnimJoint784.AddChildren([HAnimJoint792]);
{ .AddChildren }
HAnimJoint744.AddChildren([HAnimJoint784]);
HAnimJoint820 := THAnimJointNode.Create;
HAnimJoint820.NameField := 'l_carpometacarpal_3';
HAnimJoint820.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint820.SetSkinCoordIndex([131,132]);
HAnimJoint820.SetSkinCoordWeight([1,1]);
HAnimSegment821 := THAnimSegmentNode.Create;
HAnimSegment821.NameField := 'l_metacarpal_3';
Shape822 := TShapeNode.Create;
Appearance823 := TAppearanceNode.Create;
Appearance823 := Appearance67;
{ .SetAppearance }
Shape822.Appearance := Appearance823;
IndexedLineSet824 := TIndexedLineSetNode.Create;
IndexedLineSet824.SetCoordIndex([0,1,-1]);
Coordinate825 := TCoordinateNode.Create;
Coordinate825.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ .SetCoord }
IndexedLineSet824.Coord := Coordinate825;
{ .SetGeometry }
Shape822.Geometry := IndexedLineSet824;
{ .AddChildren }
HAnimSegment821.AddChildren([Shape822]);
Transform826 := TTransformNode.Create;
Transform826.Translation := Vector3(0.1987,0.8029,-0.053);
Shape827 := TShapeNode.Create;
Shape827 := Shape53;
{ .AddChild }
Transform826.AddChildren([Shape827]);
{ .AddChildren }
HAnimSegment821.AddChildren([Transform826]);
{ .AddChildren }
HAnimJoint820.AddChildren([HAnimSegment821]);
HAnimJoint828 := THAnimJointNode.Create;
HAnimJoint828.NameField := 'l_metacarpophalangeal_3';
HAnimJoint828.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint828.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint828.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment829 := THAnimSegmentNode.Create;
HAnimSegment829.NameField := 'l_carpal_proximal_phalanx_3';
Shape830 := TShapeNode.Create;
Appearance831 := TAppearanceNode.Create;
Appearance831 := Appearance67;
{ .SetAppearance }
Shape830.Appearance := Appearance831;
IndexedLineSet832 := TIndexedLineSetNode.Create;
IndexedLineSet832.SetCoordIndex([0,1,-1]);
Coordinate833 := TCoordinateNode.Create;
Coordinate833.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ .SetCoord }
IndexedLineSet832.Coord := Coordinate833;
{ .SetGeometry }
Shape830.Geometry := IndexedLineSet832;
{ .AddChildren }
HAnimSegment829.AddChildren([Shape830]);
Transform834 := TTransformNode.Create;
Transform834.Translation := Vector3(0.1987,0.7818,-0.053);
Shape835 := TShapeNode.Create;
Shape835 := Shape53;
{ .AddChild }
Transform834.AddChildren([Shape835]);
{ .AddChildren }
HAnimSegment829.AddChildren([Transform834]);
{ .AddChildren }
HAnimJoint828.AddChildren([HAnimSegment829]);
HAnimJoint836 := THAnimJointNode.Create;
HAnimJoint836.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint836.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint836.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint836.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment837 := THAnimSegmentNode.Create;
HAnimSegment837.NameField := 'l_carpal_middle_phalanx_3';
Shape838 := TShapeNode.Create;
Appearance839 := TAppearanceNode.Create;
Appearance839 := Appearance67;
{ .SetAppearance }
Shape838.Appearance := Appearance839;
IndexedLineSet840 := TIndexedLineSetNode.Create;
IndexedLineSet840.SetCoordIndex([0,1,-1]);
Coordinate841 := TCoordinateNode.Create;
Coordinate841.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ .SetCoord }
IndexedLineSet840.Coord := Coordinate841;
{ .SetGeometry }
Shape838.Geometry := IndexedLineSet840;
{ .AddChildren }
HAnimSegment837.AddChildren([Shape838]);
Transform842 := TTransformNode.Create;
Transform842.Translation := Vector3(0.2013,0.7273,-0.0503);
Shape843 := TShapeNode.Create;
Shape843 := Shape53;
{ .AddChild }
Transform842.AddChildren([Shape843]);
{ .AddChildren }
HAnimSegment837.AddChildren([Transform842]);
{ .AddChildren }
HAnimJoint836.AddChildren([HAnimSegment837]);
HAnimJoint844 := THAnimJointNode.Create;
HAnimJoint844.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint844.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint844.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint844.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment845 := THAnimSegmentNode.Create;
HAnimSegment845.NameField := 'l_carpal_distal_phalanx_3';
Shape846 := TShapeNode.Create;
Appearance847 := TAppearanceNode.Create;
Appearance847 := Appearance67;
{ .SetAppearance }
Shape846.Appearance := Appearance847;
IndexedLineSet848 := TIndexedLineSetNode.Create;
IndexedLineSet848.SetCoordIndex([0,1,-1]);
Coordinate849 := TCoordinateNode.Create;
Coordinate849.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.208,0.6731,-0.0491)]);
{ .SetCoord }
IndexedLineSet848.Coord := Coordinate849;
{ .SetGeometry }
Shape846.Geometry := IndexedLineSet848;
{ .AddChildren }
HAnimSegment845.AddChildren([Shape846]);
HAnimSite850 := THAnimSiteNode.Create;
HAnimSite850.NameField := 'l_carpal_distal_phalanx_3_tip';
HAnimSite850.Translation := Vector3(0.208,0.6731,-0.0491);
Shape851 := TShapeNode.Create;
Shape851 := Shape60;
{ .AddChildren }
HAnimSite850.AddChildren([Shape851]);
{ .AddChildren }
HAnimSegment845.AddChildren([HAnimSite850]);
Transform852 := TTransformNode.Create;
Transform852.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape853 := TShapeNode.Create;
Shape853 := Shape53;
{ .AddChild }
Transform852.AddChildren([Shape853]);
{ .AddChildren }
HAnimSegment845.AddChildren([Transform852]);
{ .AddChildren }
HAnimJoint844.AddChildren([HAnimSegment845]);
{ .AddChildren }
HAnimJoint836.AddChildren([HAnimJoint844]);
{ .AddChildren }
HAnimJoint828.AddChildren([HAnimJoint836]);
{ .AddChildren }
HAnimJoint820.AddChildren([HAnimJoint828]);
{ .AddChildren }
HAnimJoint744.AddChildren([HAnimJoint820]);
HAnimJoint854 := THAnimJointNode.Create;
HAnimJoint854.NameField := 'l_carpometacarpal_4';
HAnimJoint854.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint854.SetSkinCoordIndex([133,134]);
HAnimJoint854.SetSkinCoordWeight([1,1]);
HAnimSegment855 := THAnimSegmentNode.Create;
HAnimSegment855.NameField := 'l_metacarpal_4';
Shape856 := TShapeNode.Create;
Appearance857 := TAppearanceNode.Create;
Appearance857 := Appearance67;
{ .SetAppearance }
Shape856.Appearance := Appearance857;
IndexedLineSet858 := TIndexedLineSetNode.Create;
IndexedLineSet858.SetCoordIndex([0,1,-1]);
Coordinate859 := TCoordinateNode.Create;
Coordinate859.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ .SetCoord }
IndexedLineSet858.Coord := Coordinate859;
{ .SetGeometry }
Shape856.Geometry := IndexedLineSet858;
{ .AddChildren }
HAnimSegment855.AddChildren([Shape856]);
Transform860 := TTransformNode.Create;
Transform860.Translation := Vector3(0.1956,0.8019,-0.0794);
Shape861 := TShapeNode.Create;
Shape861 := Shape53;
{ .AddChild }
Transform860.AddChildren([Shape861]);
{ .AddChildren }
HAnimSegment855.AddChildren([Transform860]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimSegment855]);
HAnimJoint862 := THAnimJointNode.Create;
HAnimJoint862.NameField := 'l_metacarpophalangeal_4';
HAnimJoint862.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint862.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint862.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment863 := THAnimSegmentNode.Create;
HAnimSegment863.NameField := 'l_carpal_proximal_phalanx_4';
Shape864 := TShapeNode.Create;
Appearance865 := TAppearanceNode.Create;
Appearance865 := Appearance67;
{ .SetAppearance }
Shape864.Appearance := Appearance865;
IndexedLineSet866 := TIndexedLineSetNode.Create;
IndexedLineSet866.SetCoordIndex([0,1,-1]);
Coordinate867 := TCoordinateNode.Create;
Coordinate867.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ .SetCoord }
IndexedLineSet866.Coord := Coordinate867;
{ .SetGeometry }
Shape864.Geometry := IndexedLineSet866;
{ .AddChildren }
HAnimSegment863.AddChildren([Shape864]);
Transform868 := TTransformNode.Create;
Transform868.Translation := Vector3(0.1956,0.7815,-0.0794);
Shape869 := TShapeNode.Create;
Shape869 := Shape53;
{ .AddChild }
Transform868.AddChildren([Shape869]);
{ .AddChildren }
HAnimSegment863.AddChildren([Transform868]);
{ .AddChildren }
HAnimJoint862.AddChildren([HAnimSegment863]);
HAnimJoint870 := THAnimJointNode.Create;
HAnimJoint870.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint870.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint870.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint870.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment871 := THAnimSegmentNode.Create;
HAnimSegment871.NameField := 'l_carpal_middle_phalanx_4';
Shape872 := TShapeNode.Create;
Appearance873 := TAppearanceNode.Create;
Appearance873 := Appearance67;
{ .SetAppearance }
Shape872.Appearance := Appearance873;
IndexedLineSet874 := TIndexedLineSetNode.Create;
IndexedLineSet874.SetCoordIndex([0,1,-1]);
Coordinate875 := TCoordinateNode.Create;
Coordinate875.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ .SetCoord }
IndexedLineSet874.Coord := Coordinate875;
{ .SetGeometry }
Shape872.Geometry := IndexedLineSet874;
{ .AddChildren }
HAnimSegment871.AddChildren([Shape872]);
Transform876 := TTransformNode.Create;
Transform876.Translation := Vector3(0.1973,0.7287,-0.0777);
Shape877 := TShapeNode.Create;
Shape877 := Shape53;
{ .AddChild }
Transform876.AddChildren([Shape877]);
{ .AddChildren }
HAnimSegment871.AddChildren([Transform876]);
{ .AddChildren }
HAnimJoint870.AddChildren([HAnimSegment871]);
HAnimJoint878 := THAnimJointNode.Create;
HAnimJoint878.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint878.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint878.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint878.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment879 := THAnimSegmentNode.Create;
HAnimSegment879.NameField := 'l_carpal_distal_phalanx_4';
Shape880 := TShapeNode.Create;
Appearance881 := TAppearanceNode.Create;
Appearance881 := Appearance67;
{ .SetAppearance }
Shape880.Appearance := Appearance881;
IndexedLineSet882 := TIndexedLineSetNode.Create;
IndexedLineSet882.SetCoordIndex([0,1,-1]);
Coordinate883 := TCoordinateNode.Create;
Coordinate883.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.2035,0.675,-0.0756)]);
{ .SetCoord }
IndexedLineSet882.Coord := Coordinate883;
{ .SetGeometry }
Shape880.Geometry := IndexedLineSet882;
{ .AddChildren }
HAnimSegment879.AddChildren([Shape880]);
Transform884 := TTransformNode.Create;
Transform884.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape885 := TShapeNode.Create;
Shape885 := Shape53;
{ .AddChild }
Transform884.AddChildren([Shape885]);
{ .AddChildren }
HAnimSegment879.AddChildren([Transform884]);
HAnimSite886 := THAnimSiteNode.Create;
HAnimSite886.NameField := 'l_carpal_distal_phalanx_4_tip';
HAnimSite886.Translation := Vector3(0.2035,0.675,-0.0756);
Shape887 := TShapeNode.Create;
Shape887 := Shape60;
{ .AddChildren }
HAnimSite886.AddChildren([Shape887]);
{ .AddChildren }
HAnimSegment879.AddChildren([HAnimSite886]);
{ .AddChildren }
HAnimJoint878.AddChildren([HAnimSegment879]);
{ .AddChildren }
HAnimJoint870.AddChildren([HAnimJoint878]);
{ .AddChildren }
HAnimJoint862.AddChildren([HAnimJoint870]);
{ .AddChildren }
HAnimJoint854.AddChildren([HAnimJoint862]);
{ .AddChildren }
HAnimJoint744.AddChildren([HAnimJoint854]);
HAnimJoint888 := THAnimJointNode.Create;
HAnimJoint888.NameField := 'l_carpometacarpal_5';
HAnimJoint888.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint888.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint888.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment889 := THAnimSegmentNode.Create;
HAnimSegment889.NameField := 'l_metacarpal_5';
Shape890 := TShapeNode.Create;
Appearance891 := TAppearanceNode.Create;
Appearance891 := Appearance67;
{ .SetAppearance }
Shape890.Appearance := Appearance891;
IndexedLineSet892 := TIndexedLineSetNode.Create;
IndexedLineSet892.SetCoordIndex([0,1,-1]);
Coordinate893 := TCoordinateNode.Create;
Coordinate893.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ .SetCoord }
IndexedLineSet892.Coord := Coordinate893;
{ .SetGeometry }
Shape890.Geometry := IndexedLineSet892;
{ .AddChildren }
HAnimSegment889.AddChildren([Shape890]);
Transform894 := TTransformNode.Create;
Transform894.Translation := Vector3(0.1925,0.8066,-0.1036);
Shape895 := TShapeNode.Create;
Shape895 := Shape53;
{ .AddChild }
Transform894.AddChildren([Shape895]);
{ .AddChildren }
HAnimSegment889.AddChildren([Transform894]);
{ .AddChildren }
HAnimJoint888.AddChildren([HAnimSegment889]);
HAnimJoint896 := THAnimJointNode.Create;
HAnimJoint896.NameField := 'l_metacarpophalangeal_5';
HAnimJoint896.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint896.SetSkinCoordIndex([160,161,162]);
HAnimJoint896.SetSkinCoordWeight([1,1,1]);
HAnimSegment897 := THAnimSegmentNode.Create;
HAnimSegment897.NameField := 'l_carpal_proximal_phalanx_5';
Shape898 := TShapeNode.Create;
Appearance899 := TAppearanceNode.Create;
Appearance899 := Appearance67;
{ .SetAppearance }
Shape898.Appearance := Appearance899;
IndexedLineSet900 := TIndexedLineSetNode.Create;
IndexedLineSet900.SetCoordIndex([0,1,-1]);
Coordinate901 := TCoordinateNode.Create;
Coordinate901.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ .SetCoord }
IndexedLineSet900.Coord := Coordinate901;
{ .SetGeometry }
Shape898.Geometry := IndexedLineSet900;
{ .AddChildren }
HAnimSegment897.AddChildren([Shape898]);
Transform902 := TTransformNode.Create;
Transform902.Translation := Vector3(0.1925,0.7866,-0.1036);
Shape903 := TShapeNode.Create;
Shape903 := Shape53;
{ .AddChild }
Transform902.AddChildren([Shape903]);
{ .AddChildren }
HAnimSegment897.AddChildren([Transform902]);
{ .AddChildren }
HAnimJoint896.AddChildren([HAnimSegment897]);
HAnimJoint904 := THAnimJointNode.Create;
HAnimJoint904.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint904.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint904.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint904.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment905 := THAnimSegmentNode.Create;
HAnimSegment905.NameField := 'l_carpal_middle_phalanx_5';
Transform906 := TTransformNode.Create;
Transform906.Translation := Vector3(0.1938,0.7452,-0.1024);
Shape907 := TShapeNode.Create;
Shape907 := Shape53;
{ .AddChild }
Transform906.AddChildren([Shape907]);
{ .AddChildren }
HAnimSegment905.AddChildren([Transform906]);
Shape908 := TShapeNode.Create;
Appearance909 := TAppearanceNode.Create;
Appearance909 := Appearance67;
{ .SetAppearance }
Shape908.Appearance := Appearance909;
IndexedLineSet910 := TIndexedLineSetNode.Create;
IndexedLineSet910.SetCoordIndex([0,1,-1]);
Coordinate911 := TCoordinateNode.Create;
Coordinate911.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ .SetCoord }
IndexedLineSet910.Coord := Coordinate911;
{ .SetGeometry }
Shape908.Geometry := IndexedLineSet910;
{ .AddChildren }
HAnimSegment905.AddChildren([Shape908]);
{ .AddChildren }
HAnimJoint904.AddChildren([HAnimSegment905]);
HAnimJoint912 := THAnimJointNode.Create;
HAnimJoint912.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint912.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint912.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint912.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment913 := THAnimSegmentNode.Create;
HAnimSegment913.NameField := 'l_carpal_distal_phalanx_5';
Shape914 := TShapeNode.Create;
Appearance915 := TAppearanceNode.Create;
Appearance915 := Appearance67;
{ .SetAppearance }
Shape914.Appearance := Appearance915;
IndexedLineSet916 := TIndexedLineSetNode.Create;
IndexedLineSet916.SetCoordIndex([0,1,-1]);
Coordinate917 := TCoordinateNode.Create;
Coordinate917.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.2014,0.7009,-0.1012)]);
{ .SetCoord }
IndexedLineSet916.Coord := Coordinate917;
{ .SetGeometry }
Shape914.Geometry := IndexedLineSet916;
{ .AddChildren }
HAnimSegment913.AddChildren([Shape914]);
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape919 := TShapeNode.Create;
Shape919 := Shape53;
{ .AddChild }
Transform918.AddChildren([Shape919]);
{ .AddChildren }
HAnimSegment913.AddChildren([Transform918]);
HAnimSite920 := THAnimSiteNode.Create;
HAnimSite920.NameField := 'l_carpal_distal_phalanx_5_tip';
HAnimSite920.Translation := Vector3(0.2014,0.7009,-0.1012);
Shape921 := TShapeNode.Create;
Shape921 := Shape60;
{ .AddChildren }
HAnimSite920.AddChildren([Shape921]);
{ .AddChildren }
HAnimSegment913.AddChildren([HAnimSite920]);
{ .AddChildren }
HAnimJoint912.AddChildren([HAnimSegment913]);
{ .AddChildren }
HAnimJoint904.AddChildren([HAnimJoint912]);
{ .AddChildren }
HAnimJoint896.AddChildren([HAnimJoint904]);
{ .AddChildren }
HAnimJoint888.AddChildren([HAnimJoint896]);
{ .AddChildren }
HAnimJoint744.AddChildren([HAnimJoint888]);
{ .AddChildren }
HAnimJoint722.AddChildren([HAnimJoint744]);
{ .AddChildren }
HAnimJoint698.AddChildren([HAnimJoint722]);
{ .AddChildren }
HAnimJoint682.AddChildren([HAnimJoint698]);
{ .AddChildren }
HAnimJoint672.AddChildren([HAnimJoint682]);
{ .AddChildren }
HAnimJoint556.AddChildren([HAnimJoint672]);
HAnimJoint922 := THAnimJointNode.Create;
HAnimJoint922.NameField := 'r_sternoclavicular';
HAnimJoint922.Center := Vector3(-0.03,1.46,0);
HAnimJoint922.SetSkinCoordIndex([10]);
HAnimJoint922.SetSkinCoordWeight([1]);
HAnimSegment923 := THAnimSegmentNode.Create;
HAnimSegment923.NameField := 'r_clavicle';
Shape924 := TShapeNode.Create;
Appearance925 := TAppearanceNode.Create;
Appearance925 := Appearance67;
{ .SetAppearance }
Shape924.Appearance := Appearance925;
IndexedLineSet926 := TIndexedLineSetNode.Create;
IndexedLineSet926.SetCoordIndex([0,1,-1]);
Coordinate927 := TCoordinateNode.Create;
Coordinate927.SetPoint([Vector3(-0.03,1.46,0.02),Vector3(-0.09,1.41,-0.09)]);
{ .SetCoord }
IndexedLineSet926.Coord := Coordinate927;
{ .SetGeometry }
Shape924.Geometry := IndexedLineSet926;
{ .AddChildren }
HAnimSegment923.AddChildren([Shape924]);
Transform928 := TTransformNode.Create;
Transform928.Translation := Vector3(-0.03,1.46,0.02);
Shape929 := TShapeNode.Create;
Shape929 := Shape53;
{ .AddChild }
Transform928.AddChildren([Shape929]);
{ .AddChildren }
HAnimSegment923.AddChildren([Transform928]);
HAnimSite930 := THAnimSiteNode.Create;
HAnimSite930.NameField := 'r_clavicle_pt';
HAnimSite930.Translation := Vector3(-0.03,1.46,0.035);
Shape931 := TShapeNode.Create;
Shape931 := Shape60;
{ .AddChildren }
HAnimSite930.AddChildren([Shape931]);
{ .AddChildren }
HAnimSegment923.AddChildren([HAnimSite930]);
{ .AddChildren }
HAnimJoint922.AddChildren([HAnimSegment923]);
HAnimJoint932 := THAnimJointNode.Create;
HAnimJoint932.NameField := 'r_acromioclavicular';
HAnimJoint932.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint932.SetSkinCoordIndex([77,29]);
HAnimJoint932.SetSkinCoordWeight([1,0.9]);
HAnimSegment933 := THAnimSegmentNode.Create;
HAnimSegment933.NameField := 'r_scapula';
Shape934 := TShapeNode.Create;
Appearance935 := TAppearanceNode.Create;
Appearance935 := Appearance67;
{ .SetAppearance }
Shape934.Appearance := Appearance935;
IndexedLineSet936 := TIndexedLineSetNode.Create;
IndexedLineSet936.SetCoordIndex([0,1,-1]);
Coordinate937 := TCoordinateNode.Create;
Coordinate937.SetPoint([Vector3(-0.09,1.41,-0.09),Vector3(-0.2,1.44,-0.04)]);
{ .SetCoord }
IndexedLineSet936.Coord := Coordinate937;
{ .SetGeometry }
Shape934.Geometry := IndexedLineSet936;
{ .AddChildren }
HAnimSegment933.AddChildren([Shape934]);
Transform938 := TTransformNode.Create;
Transform938.Translation := Vector3(-0.09,1.41,-0.09);
Shape939 := TShapeNode.Create;
Shape939 := Shape53;
{ .AddChild }
Transform938.AddChildren([Shape939]);
{ .AddChildren }
HAnimSegment933.AddChildren([Transform938]);
Transform940 := TTransformNode.Create;
Transform940.Translation := Vector3(-0.11,1.427,-0.1375);
Shape941 := TShapeNode.Create;
Shape941 := Shape72;
{ .AddChild }
Transform940.AddChildren([Shape941]);
{ .AddChildren }
HAnimSegment933.AddChildren([Transform940]);
HAnimSite942 := THAnimSiteNode.Create;
HAnimSite942.NameField := 'r_acromion_pt';
HAnimSite942.Translation := Vector3(-0.178,1.4825,-0.0625);
Shape943 := TShapeNode.Create;
Shape943 := Shape60;
{ .AddChildren }
HAnimSite942.AddChildren([Shape943]);
{ .AddChildren }
HAnimSegment933.AddChildren([HAnimSite942]);
HAnimSite944 := THAnimSiteNode.Create;
HAnimSite944.NameField := 'r_axilla_proximal_pt';
HAnimSite944.Translation := Vector3(-0.17,1.38,0.007);
Shape945 := TShapeNode.Create;
Shape945 := Shape60;
{ .AddChildren }
HAnimSite944.AddChildren([Shape945]);
{ .AddChildren }
HAnimSegment933.AddChildren([HAnimSite944]);
HAnimSite946 := THAnimSiteNode.Create;
HAnimSite946.NameField := 'r_axilla_distal_pt';
HAnimSite946.Translation := Vector3(-0.16,1.38,-0.127);
Shape947 := TShapeNode.Create;
Shape947 := Shape60;
{ .AddChildren }
HAnimSite946.AddChildren([Shape947]);
{ .AddChildren }
HAnimSegment933.AddChildren([HAnimSite946]);
{ .AddChildren }
HAnimJoint932.AddChildren([HAnimSegment933]);
HAnimJoint948 := THAnimJointNode.Create;
HAnimJoint948.NameField := 'r_shoulder';
HAnimJoint948.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint948.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint948.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment949 := THAnimSegmentNode.Create;
HAnimSegment949.NameField := 'r_upperarm';
Transform950 := TTransformNode.Create;
Transform950.Translation := Vector3(-0.2,1.44,-0.04);
Shape951 := TShapeNode.Create;
Shape951 := Shape53;
{ .AddChild }
Transform950.AddChildren([Shape951]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform950]);
Shape952 := TShapeNode.Create;
Appearance953 := TAppearanceNode.Create;
Appearance953 := Appearance67;
{ .SetAppearance }
Shape952.Appearance := Appearance953;
IndexedLineSet954 := TIndexedLineSetNode.Create;
IndexedLineSet954.SetCoordIndex([0,1,-1]);
Coordinate955 := TCoordinateNode.Create;
Coordinate955.SetPoint([Vector3(-0.2,1.44,-0.04),Vector3(-0.2,1.1388,-0.04)]);
{ .SetCoord }
IndexedLineSet954.Coord := Coordinate955;
{ .SetGeometry }
Shape952.Geometry := IndexedLineSet954;
{ .AddChildren }
HAnimSegment949.AddChildren([Shape952]);
Transform956 := TTransformNode.Create;
Transform956.Translation := Vector3(-0.178,1.4825,-0.0625);
Shape957 := TShapeNode.Create;
Shape957 := Shape72;
{ .AddChild }
Transform956.AddChildren([Shape957]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform956]);
Transform958 := TTransformNode.Create;
Transform958.Translation := Vector3(-0.17,1.38,0.007);
Shape959 := TShapeNode.Create;
Shape959 := Shape72;
{ .AddChild }
Transform958.AddChildren([Shape959]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform958]);
Transform960 := TTransformNode.Create;
Transform960.Translation := Vector3(-0.16,1.38,-0.127);
Shape961 := TShapeNode.Create;
Shape961 := Shape72;
{ .AddChild }
Transform960.AddChildren([Shape961]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform960]);
Transform962 := TTransformNode.Create;
Transform962.Translation := Vector3(-0.235,1.42,-0.0625);
Shape963 := TShapeNode.Create;
Shape963 := Shape72;
{ .AddChild }
Transform962.AddChildren([Shape963]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform962]);
Transform964 := TTransformNode.Create;
Transform964.Translation := Vector3(-0.23,1.235,-0.04);
Shape965 := TShapeNode.Create;
Shape965 := Shape72;
{ .AddChild }
Transform964.AddChildren([Shape965]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform964]);
Transform966 := TTransformNode.Create;
Transform966.Translation := Vector3(-0.16,1.23,-0.04);
Shape967 := TShapeNode.Create;
Shape967 := Shape72;
{ .AddChild }
Transform966.AddChildren([Shape967]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform966]);
Transform968 := TTransformNode.Create;
Transform968.Translation := Vector3(-0.2,1.23,-0.105);
Shape969 := TShapeNode.Create;
Shape969 := Shape72;
{ .AddChild }
Transform968.AddChildren([Shape969]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform968]);
Transform970 := TTransformNode.Create;
Transform970.Translation := Vector3(-0.2,1.235,0.02);
Shape971 := TShapeNode.Create;
Shape971 := Shape72;
{ .AddChild }
Transform970.AddChildren([Shape971]);
{ .AddChildren }
HAnimSegment949.AddChildren([Transform970]);
HAnimSite972 := THAnimSiteNode.Create;
HAnimSite972.NameField := 'r_humeral_medial_epicondyle_pt';
HAnimSite972.Translation := Vector3(-0.165,1.1388,-0.04);
Shape973 := TShapeNode.Create;
Shape973 := Shape60;
{ .AddChildren }
HAnimSite972.AddChildren([Shape973]);
{ .AddChildren }
HAnimSegment949.AddChildren([HAnimSite972]);
HAnimSite974 := THAnimSiteNode.Create;
HAnimSite974.NameField := 'r_radiale_pt';
HAnimSite974.Translation := Vector3(-0.23,1.133,-0.055);
Shape975 := TShapeNode.Create;
Shape975 := Shape60;
{ .AddChildren }
HAnimSite974.AddChildren([Shape975]);
{ .AddChildren }
HAnimSegment949.AddChildren([HAnimSite974]);
HAnimSite976 := THAnimSiteNode.Create;
HAnimSite976.NameField := 'r_humeral_lateral_epicondyle_pt';
HAnimSite976.Translation := Vector3(-0.244,1.1388,-0.04);
Shape977 := TShapeNode.Create;
Shape977 := Shape60;
{ .AddChildren }
HAnimSite976.AddChildren([Shape977]);
{ .AddChildren }
HAnimSegment949.AddChildren([HAnimSite976]);
{ .AddChildren }
HAnimJoint948.AddChildren([HAnimSegment949]);
HAnimJoint978 := THAnimJointNode.Create;
HAnimJoint978.NameField := 'r_elbow';
HAnimJoint978.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint978.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint978.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment979 := THAnimSegmentNode.Create;
HAnimSegment979.NameField := 'r_forearm';
Shape980 := TShapeNode.Create;
Appearance981 := TAppearanceNode.Create;
Appearance981 := Appearance67;
{ .SetAppearance }
Shape980.Appearance := Appearance981;
IndexedLineSet982 := TIndexedLineSetNode.Create;
IndexedLineSet982.SetCoordIndex([0,1,-1]);
Coordinate983 := TCoordinateNode.Create;
Coordinate983.SetPoint([Vector3(-0.2,1.1388,-0.04),Vector3(-0.2,0.89,-0.04)]);
{ .SetCoord }
IndexedLineSet982.Coord := Coordinate983;
{ .SetGeometry }
Shape980.Geometry := IndexedLineSet982;
{ .AddChildren }
HAnimSegment979.AddChildren([Shape980]);
Transform984 := TTransformNode.Create;
Transform984.Translation := Vector3(-0.2,1.1388,-0.04);
Shape985 := TShapeNode.Create;
Shape985 := Shape53;
{ .AddChild }
Transform984.AddChildren([Shape985]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform984]);
Transform986 := TTransformNode.Create;
Transform986.Translation := Vector3(-0.2,1.1388,0.013);
Shape987 := TShapeNode.Create;
Shape987 := Shape72;
{ .AddChild }
Transform986.AddChildren([Shape987]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform986]);
Transform988 := TTransformNode.Create;
Transform988.Translation := Vector3(-0.225,1,-0.01);
Shape989 := TShapeNode.Create;
Shape989 := Shape72;
{ .AddChild }
Transform988.AddChildren([Shape989]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform988]);
Transform990 := TTransformNode.Create;
Transform990.Translation := Vector3(-0.225,1,-0.07);
Shape991 := TShapeNode.Create;
Shape991 := Shape72;
{ .AddChild }
Transform990.AddChildren([Shape991]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform990]);
Transform992 := TTransformNode.Create;
Transform992.Translation := Vector3(-0.185,1,-0.01);
Shape993 := TShapeNode.Create;
Shape993 := Shape72;
{ .AddChild }
Transform992.AddChildren([Shape993]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform992]);
Transform994 := TTransformNode.Create;
Transform994.Translation := Vector3(-0.185,1,-0.07);
Shape995 := TShapeNode.Create;
Shape995 := Shape72;
{ .AddChild }
Transform994.AddChildren([Shape995]);
{ .AddChildren }
HAnimSegment979.AddChildren([Transform994]);
HAnimSite996 := THAnimSiteNode.Create;
HAnimSite996.NameField := 'r_radial_styloid_pt';
HAnimSite996.Translation := Vector3(-0.2,0.9,-0.015);
Shape997 := TShapeNode.Create;
Shape997 := Shape60;
{ .AddChildren }
HAnimSite996.AddChildren([Shape997]);
{ .AddChildren }
HAnimSegment979.AddChildren([HAnimSite996]);
HAnimSite998 := THAnimSiteNode.Create;
HAnimSite998.NameField := 'r_olecranon_pt';
HAnimSite998.Translation := Vector3(-0.2,1.1388,-0.08);
Shape999 := TShapeNode.Create;
Shape999 := Shape60;
{ .AddChildren }
HAnimSite998.AddChildren([Shape999]);
{ .AddChildren }
HAnimSegment979.AddChildren([HAnimSite998]);
{ .AddChildren }
HAnimJoint978.AddChildren([HAnimSegment979]);
HAnimJoint1000 := THAnimJointNode.Create;
HAnimJoint1000.NameField := 'r_radiocarpal';
HAnimJoint1000.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint1000.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint1000.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimSegment1001 := THAnimSegmentNode.Create;
HAnimSegment1001.NameField := 'r_carpal';
Shape1002 := TShapeNode.Create;
Appearance1003 := TAppearanceNode.Create;
Appearance1003 := Appearance67;
{ .SetAppearance }
Shape1002.Appearance := Appearance1003;
IndexedLineSet1004 := TIndexedLineSetNode.Create;
IndexedLineSet1004.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate1005 := TCoordinateNode.Create;
Coordinate1005.SetPoint([Vector3(-0.2,0.89,-0.04),Vector3(-0.2,0.85,0),Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.84,-0.085)]);
{ .SetCoord }
IndexedLineSet1004.Coord := Coordinate1005;
{ .SetGeometry }
Shape1002.Geometry := IndexedLineSet1004;
{ .AddChildren }
HAnimSegment1001.AddChildren([Shape1002]);
Transform1006 := TTransformNode.Create;
Transform1006.Translation := Vector3(-0.2,0.89,-0.04);
Shape1007 := TShapeNode.Create;
Shape1007 := Shape53;
{ .AddChild }
Transform1006.AddChildren([Shape1007]);
{ .AddChildren }
HAnimSegment1001.AddChildren([Transform1006]);
HAnimSite1008 := THAnimSiteNode.Create;
HAnimSite1008.NameField := 'r_ulnar_styloid_pt';
HAnimSite1008.Translation := Vector3(-0.2,0.9,-0.085);
Shape1009 := TShapeNode.Create;
Shape1009 := Shape60;
{ .AddChildren }
HAnimSite1008.AddChildren([Shape1009]);
{ .AddChildren }
HAnimSegment1001.AddChildren([HAnimSite1008]);
{ .AddChildren }
HAnimJoint1000.AddChildren([HAnimSegment1001]);
HAnimJoint1010 := THAnimJointNode.Create;
HAnimJoint1010.NameField := 'r_carpometacarpal_1';
HAnimJoint1010.Center := Vector3(-0.2,0.85,0);
HAnimJoint1010.SetSkinCoordIndex([243,244]);
HAnimJoint1010.SetSkinCoordWeight([1,1]);
HAnimSegment1011 := THAnimSegmentNode.Create;
HAnimSegment1011.NameField := 'r_metacarpal_1';
Shape1012 := TShapeNode.Create;
Appearance1013 := TAppearanceNode.Create;
Appearance1013 := Appearance67;
{ .SetAppearance }
Shape1012.Appearance := Appearance1013;
IndexedLineSet1014 := TIndexedLineSetNode.Create;
IndexedLineSet1014.SetCoordIndex([0,1,-1]);
Coordinate1015 := TCoordinateNode.Create;
Coordinate1015.SetPoint([Vector3(-0.2,0.85,0),Vector3(-0.2,0.82,0.03)]);
{ .SetCoord }
IndexedLineSet1014.Coord := Coordinate1015;
{ .SetGeometry }
Shape1012.Geometry := IndexedLineSet1014;
{ .AddChildren }
HAnimSegment1011.AddChildren([Shape1012]);
Transform1016 := TTransformNode.Create;
Transform1016.Translation := Vector3(-0.2,0.85,0);
Shape1017 := TShapeNode.Create;
Shape1017 := Shape53;
{ .AddChild }
Transform1016.AddChildren([Shape1017]);
{ .AddChildren }
HAnimSegment1011.AddChildren([Transform1016]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimSegment1011]);
HAnimJoint1018 := THAnimJointNode.Create;
HAnimJoint1018.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1018.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint1018.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint1018.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimSegment1019 := THAnimSegmentNode.Create;
HAnimSegment1019.NameField := 'r_carpal_proximal_phalanx_1';
Shape1020 := TShapeNode.Create;
Appearance1021 := TAppearanceNode.Create;
Appearance1021 := Appearance67;
{ .SetAppearance }
Shape1020.Appearance := Appearance1021;
IndexedLineSet1022 := TIndexedLineSetNode.Create;
IndexedLineSet1022.SetCoordIndex([0,1,-1]);
Coordinate1023 := TCoordinateNode.Create;
Coordinate1023.SetPoint([Vector3(-0.2,0.82,0.03),Vector3(-0.2,0.8,0.05)]);
{ .SetCoord }
IndexedLineSet1022.Coord := Coordinate1023;
{ .SetGeometry }
Shape1020.Geometry := IndexedLineSet1022;
{ .AddChildren }
HAnimSegment1019.AddChildren([Shape1020]);
Transform1024 := TTransformNode.Create;
Transform1024.Translation := Vector3(-0.2,0.82,0.03);
Shape1025 := TShapeNode.Create;
Shape1025 := Shape53;
{ .AddChild }
Transform1024.AddChildren([Shape1025]);
{ .AddChildren }
HAnimSegment1019.AddChildren([Transform1024]);
{ .AddChildren }
HAnimJoint1018.AddChildren([HAnimSegment1019]);
HAnimJoint1026 := THAnimJointNode.Create;
HAnimJoint1026.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1026.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint1026.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint1026.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1027 := THAnimSegmentNode.Create;
HAnimSegment1027.NameField := 'r_carpal_distal_phalanx_1';
Shape1028 := TShapeNode.Create;
Appearance1029 := TAppearanceNode.Create;
Appearance1029 := Appearance67;
{ .SetAppearance }
Shape1028.Appearance := Appearance1029;
IndexedLineSet1030 := TIndexedLineSetNode.Create;
IndexedLineSet1030.SetCoordIndex([0,1,-1]);
Coordinate1031 := TCoordinateNode.Create;
Coordinate1031.SetPoint([Vector3(-0.2,0.8,0.05),Vector3(-0.2,0.78,0.07)]);
{ .SetCoord }
IndexedLineSet1030.Coord := Coordinate1031;
{ .SetGeometry }
Shape1028.Geometry := IndexedLineSet1030;
{ .AddChildren }
HAnimSegment1027.AddChildren([Shape1028]);
Transform1032 := TTransformNode.Create;
Transform1032.Translation := Vector3(-0.2,0.785,0.075);
Shape1033 := TShapeNode.Create;
Shape1033 := Shape72;
{ .AddChild }
Transform1032.AddChildren([Shape1033]);
{ .AddChildren }
HAnimSegment1027.AddChildren([Transform1032]);
Transform1034 := TTransformNode.Create;
Transform1034.Translation := Vector3(-0.2,0.8,0.05);
Shape1035 := TShapeNode.Create;
Shape1035 := Shape53;
{ .AddChild }
Transform1034.AddChildren([Shape1035]);
{ .AddChildren }
HAnimSegment1027.AddChildren([Transform1034]);
HAnimSite1036 := THAnimSiteNode.Create;
HAnimSite1036.NameField := 'r_carpal_distal_phalanx_1_tip';
HAnimSite1036.Translation := Vector3(-0.2,0.78,0.07);
Shape1037 := TShapeNode.Create;
Shape1037 := Shape60;
{ .AddChildren }
HAnimSite1036.AddChildren([Shape1037]);
{ .AddChildren }
HAnimSegment1027.AddChildren([HAnimSite1036]);
{ .AddChildren }
HAnimJoint1026.AddChildren([HAnimSegment1027]);
{ .AddChildren }
HAnimJoint1018.AddChildren([HAnimJoint1026]);
{ .AddChildren }
HAnimJoint1010.AddChildren([HAnimJoint1018]);
{ .AddChildren }
HAnimJoint1000.AddChildren([HAnimJoint1010]);
HAnimJoint1038 := THAnimJointNode.Create;
HAnimJoint1038.NameField := 'r_carpometacarpal_2';
HAnimJoint1038.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint1038.SetSkinCoordIndex([245,246]);
HAnimJoint1038.SetSkinCoordWeight([1,1]);
HAnimSegment1039 := THAnimSegmentNode.Create;
HAnimSegment1039.NameField := 'r_metacarpal_2';
Shape1040 := TShapeNode.Create;
Appearance1041 := TAppearanceNode.Create;
Appearance1041 := Appearance67;
{ .SetAppearance }
Shape1040.Appearance := Appearance1041;
IndexedLineSet1042 := TIndexedLineSetNode.Create;
IndexedLineSet1042.SetCoordIndex([0,1,-1]);
Coordinate1043 := TCoordinateNode.Create;
Coordinate1043.SetPoint([Vector3(-0.2,0.84,-0.015),Vector3(-0.2,0.793,-0.015)]);
{ .SetCoord }
IndexedLineSet1042.Coord := Coordinate1043;
{ .SetGeometry }
Shape1040.Geometry := IndexedLineSet1042;
{ .AddChildren }
HAnimSegment1039.AddChildren([Shape1040]);
Transform1044 := TTransformNode.Create;
Transform1044.Translation := Vector3(-0.2,0.84,-0.015);
Shape1045 := TShapeNode.Create;
Shape1045 := Shape53;
{ .AddChild }
Transform1044.AddChildren([Shape1045]);
{ .AddChildren }
HAnimSegment1039.AddChildren([Transform1044]);
HAnimSite1046 := THAnimSiteNode.Create;
HAnimSite1046.NameField := 'r_metacarpal_phalanx_2_pt';
HAnimSite1046.Translation := Vector3(-0.2,0.793,-0.005);
Shape1047 := TShapeNode.Create;
Shape1047 := Shape60;
{ .AddChildren }
HAnimSite1046.AddChildren([Shape1047]);
{ .AddChildren }
HAnimSegment1039.AddChildren([HAnimSite1046]);
{ .AddChildren }
HAnimJoint1038.AddChildren([HAnimSegment1039]);
HAnimJoint1048 := THAnimJointNode.Create;
HAnimJoint1048.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1048.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint1048.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint1048.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment1049 := THAnimSegmentNode.Create;
HAnimSegment1049.NameField := 'r_carpal_proximal_phalanx_2';
Shape1050 := TShapeNode.Create;
Appearance1051 := TAppearanceNode.Create;
Appearance1051 := Appearance67;
{ .SetAppearance }
Shape1050.Appearance := Appearance1051;
IndexedLineSet1052 := TIndexedLineSetNode.Create;
IndexedLineSet1052.SetCoordIndex([0,1,-1]);
Coordinate1053 := TCoordinateNode.Create;
Coordinate1053.SetPoint([Vector3(-0.2,0.793,-0.015),Vector3(-0.2,0.745,-0.015)]);
{ .SetCoord }
IndexedLineSet1052.Coord := Coordinate1053;
{ .SetGeometry }
Shape1050.Geometry := IndexedLineSet1052;
{ .AddChildren }
HAnimSegment1049.AddChildren([Shape1050]);
Transform1054 := TTransformNode.Create;
Transform1054.Translation := Vector3(-0.2,0.793,-0.015);
Shape1055 := TShapeNode.Create;
Shape1055 := Shape53;
{ .AddChild }
Transform1054.AddChildren([Shape1055]);
{ .AddChildren }
HAnimSegment1049.AddChildren([Transform1054]);
{ .AddChildren }
HAnimJoint1048.AddChildren([HAnimSegment1049]);
HAnimJoint1056 := THAnimJointNode.Create;
HAnimJoint1056.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1056.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint1056.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint1056.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1057 := THAnimSegmentNode.Create;
HAnimSegment1057.NameField := 'r_carpal_middle_phalanx_2';
Shape1058 := TShapeNode.Create;
Appearance1059 := TAppearanceNode.Create;
Appearance1059 := Appearance67;
{ .SetAppearance }
Shape1058.Appearance := Appearance1059;
IndexedLineSet1060 := TIndexedLineSetNode.Create;
IndexedLineSet1060.SetCoordIndex([0,1,-1]);
Coordinate1061 := TCoordinateNode.Create;
Coordinate1061.SetPoint([Vector3(-0.2,0.745,-0.015),Vector3(-0.2,0.72,-0.015)]);
{ .SetCoord }
IndexedLineSet1060.Coord := Coordinate1061;
{ .SetGeometry }
Shape1058.Geometry := IndexedLineSet1060;
{ .AddChildren }
HAnimSegment1057.AddChildren([Shape1058]);
Transform1062 := TTransformNode.Create;
Transform1062.Translation := Vector3(-0.2,0.745,-0.015);
Shape1063 := TShapeNode.Create;
Shape1063 := Shape53;
{ .AddChild }
Transform1062.AddChildren([Shape1063]);
{ .AddChildren }
HAnimSegment1057.AddChildren([Transform1062]);
{ .AddChildren }
HAnimJoint1056.AddChildren([HAnimSegment1057]);
HAnimJoint1064 := THAnimJointNode.Create;
HAnimJoint1064.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1064.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint1064.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint1064.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1065 := THAnimSegmentNode.Create;
HAnimSegment1065.NameField := 'r_carpal_distal_phalanx_2';
Shape1066 := TShapeNode.Create;
Appearance1067 := TAppearanceNode.Create;
Appearance1067 := Appearance67;
{ .SetAppearance }
Shape1066.Appearance := Appearance1067;
IndexedLineSet1068 := TIndexedLineSetNode.Create;
IndexedLineSet1068.SetCoordIndex([0,1,-1]);
Coordinate1069 := TCoordinateNode.Create;
Coordinate1069.SetPoint([Vector3(-0.2,0.72,-0.015),Vector3(-0.2,0.695,-0.015)]);
{ .SetCoord }
IndexedLineSet1068.Coord := Coordinate1069;
{ .SetGeometry }
Shape1066.Geometry := IndexedLineSet1068;
{ .AddChildren }
HAnimSegment1065.AddChildren([Shape1066]);
Transform1070 := TTransformNode.Create;
Transform1070.Translation := Vector3(-0.2,0.72,-0.015);
Shape1071 := TShapeNode.Create;
Shape1071 := Shape53;
{ .AddChild }
Transform1070.AddChildren([Shape1071]);
{ .AddChildren }
HAnimSegment1065.AddChildren([Transform1070]);
HAnimSite1072 := THAnimSiteNode.Create;
HAnimSite1072.NameField := 'r_carpal_distal_phalanx_2_tip';
HAnimSite1072.Translation := Vector3(-0.2,0.695,-0.015);
Shape1073 := TShapeNode.Create;
Shape1073 := Shape60;
{ .AddChildren }
HAnimSite1072.AddChildren([Shape1073]);
{ .AddChildren }
HAnimSegment1065.AddChildren([HAnimSite1072]);
{ .AddChildren }
HAnimJoint1064.AddChildren([HAnimSegment1065]);
{ .AddChildren }
HAnimJoint1056.AddChildren([HAnimJoint1064]);
{ .AddChildren }
HAnimJoint1048.AddChildren([HAnimJoint1056]);
{ .AddChildren }
HAnimJoint1038.AddChildren([HAnimJoint1048]);
{ .AddChildren }
HAnimJoint1000.AddChildren([HAnimJoint1038]);
HAnimJoint1074 := THAnimJointNode.Create;
HAnimJoint1074.NameField := 'r_carpometacarpal_3';
HAnimJoint1074.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint1074.SetSkinCoordIndex([247,248]);
HAnimJoint1074.SetSkinCoordWeight([1,1]);
HAnimSegment1075 := THAnimSegmentNode.Create;
HAnimSegment1075.NameField := 'r_metacarpal_3';
Shape1076 := TShapeNode.Create;
Appearance1077 := TAppearanceNode.Create;
Appearance1077 := Appearance67;
{ .SetAppearance }
Shape1076.Appearance := Appearance1077;
IndexedLineSet1078 := TIndexedLineSetNode.Create;
IndexedLineSet1078.SetCoordIndex([0,1,-1]);
Coordinate1079 := TCoordinateNode.Create;
Coordinate1079.SetPoint([Vector3(-0.2,0.835,-0.04),Vector3(-0.2,0.788,-0.04)]);
{ .SetCoord }
IndexedLineSet1078.Coord := Coordinate1079;
{ .SetGeometry }
Shape1076.Geometry := IndexedLineSet1078;
{ .AddChildren }
HAnimSegment1075.AddChildren([Shape1076]);
Transform1080 := TTransformNode.Create;
Transform1080.Translation := Vector3(-0.2,0.835,-0.04);
Shape1081 := TShapeNode.Create;
Shape1081 := Shape53;
{ .AddChild }
Transform1080.AddChildren([Shape1081]);
{ .AddChildren }
HAnimSegment1075.AddChildren([Transform1080]);
{ .AddChildren }
HAnimJoint1074.AddChildren([HAnimSegment1075]);
HAnimJoint1082 := THAnimJointNode.Create;
HAnimJoint1082.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1082.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint1082.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint1082.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1083 := THAnimSegmentNode.Create;
HAnimSegment1083.NameField := 'r_carpal_proximal_phalanx_3';
Shape1084 := TShapeNode.Create;
Appearance1085 := TAppearanceNode.Create;
Appearance1085 := Appearance67;
{ .SetAppearance }
Shape1084.Appearance := Appearance1085;
IndexedLineSet1086 := TIndexedLineSetNode.Create;
IndexedLineSet1086.SetCoordIndex([0,1,-1]);
Coordinate1087 := TCoordinateNode.Create;
Coordinate1087.SetPoint([Vector3(-0.2,0.788,-0.04),Vector3(-0.2,0.74,-0.04)]);
{ .SetCoord }
IndexedLineSet1086.Coord := Coordinate1087;
{ .SetGeometry }
Shape1084.Geometry := IndexedLineSet1086;
{ .AddChildren }
HAnimSegment1083.AddChildren([Shape1084]);
Transform1088 := TTransformNode.Create;
Transform1088.Translation := Vector3(-0.2,0.788,-0.04);
Shape1089 := TShapeNode.Create;
Shape1089 := Shape53;
{ .AddChild }
Transform1088.AddChildren([Shape1089]);
{ .AddChildren }
HAnimSegment1083.AddChildren([Transform1088]);
{ .AddChildren }
HAnimJoint1082.AddChildren([HAnimSegment1083]);
HAnimJoint1090 := THAnimJointNode.Create;
HAnimJoint1090.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1090.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint1090.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint1090.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1091 := THAnimSegmentNode.Create;
HAnimSegment1091.NameField := 'r_carpal_middle_phalanx_3';
Shape1092 := TShapeNode.Create;
Appearance1093 := TAppearanceNode.Create;
Appearance1093 := Appearance67;
{ .SetAppearance }
Shape1092.Appearance := Appearance1093;
IndexedLineSet1094 := TIndexedLineSetNode.Create;
IndexedLineSet1094.SetCoordIndex([0,1,-1]);
Coordinate1095 := TCoordinateNode.Create;
Coordinate1095.SetPoint([Vector3(-0.2,0.74,-0.04),Vector3(-0.2,0.7142,-0.04)]);
{ .SetCoord }
IndexedLineSet1094.Coord := Coordinate1095;
{ .SetGeometry }
Shape1092.Geometry := IndexedLineSet1094;
{ .AddChildren }
HAnimSegment1091.AddChildren([Shape1092]);
Transform1096 := TTransformNode.Create;
Transform1096.Translation := Vector3(-0.2,0.74,-0.04);
Shape1097 := TShapeNode.Create;
Shape1097 := Shape53;
{ .AddChild }
Transform1096.AddChildren([Shape1097]);
{ .AddChildren }
HAnimSegment1091.AddChildren([Transform1096]);
{ .AddChildren }
HAnimJoint1090.AddChildren([HAnimSegment1091]);
HAnimJoint1098 := THAnimJointNode.Create;
HAnimJoint1098.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1098.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint1098.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint1098.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1099 := THAnimSegmentNode.Create;
HAnimSegment1099.NameField := 'r_carpal_distal_phalanx_3';
Shape1100 := TShapeNode.Create;
Appearance1101 := TAppearanceNode.Create;
Appearance1101 := Appearance67;
{ .SetAppearance }
Shape1100.Appearance := Appearance1101;
IndexedLineSet1102 := TIndexedLineSetNode.Create;
IndexedLineSet1102.SetCoordIndex([0,1,-1]);
Coordinate1103 := TCoordinateNode.Create;
Coordinate1103.SetPoint([Vector3(-0.2,0.7142,-0.04),Vector3(-0.2,0.6758,-0.04)]);
{ .SetCoord }
IndexedLineSet1102.Coord := Coordinate1103;
{ .SetGeometry }
Shape1100.Geometry := IndexedLineSet1102;
{ .AddChildren }
HAnimSegment1099.AddChildren([Shape1100]);
Transform1104 := TTransformNode.Create;
Transform1104.Translation := Vector3(-0.2,0.7142,-0.04);
Shape1105 := TShapeNode.Create;
Shape1105 := Shape53;
{ .AddChild }
Transform1104.AddChildren([Shape1105]);
{ .AddChildren }
HAnimSegment1099.AddChildren([Transform1104]);
HAnimSite1106 := THAnimSiteNode.Create;
HAnimSite1106.NameField := 'r_dactylion_pt';
HAnimSite1106.Translation := Vector3(-0.2,0.68,-0.04);
Shape1107 := TShapeNode.Create;
Shape1107 := Shape60;
{ .AddChildren }
HAnimSite1106.AddChildren([Shape1107]);
{ .AddChildren }
HAnimSegment1099.AddChildren([HAnimSite1106]);
HAnimSite1108 := THAnimSiteNode.Create;
HAnimSite1108.NameField := 'r_carpal_distal_phalanx_3_tip';
HAnimSite1108.Translation := Vector3(-0.2,0.68,-0.04);
Shape1109 := TShapeNode.Create;
Shape1109 := Shape60;
{ .AddChildren }
HAnimSite1108.AddChildren([Shape1109]);
{ .AddChildren }
HAnimSegment1099.AddChildren([HAnimSite1108]);
{ .AddChildren }
HAnimJoint1098.AddChildren([HAnimSegment1099]);
{ .AddChildren }
HAnimJoint1090.AddChildren([HAnimJoint1098]);
{ .AddChildren }
HAnimJoint1082.AddChildren([HAnimJoint1090]);
{ .AddChildren }
HAnimJoint1074.AddChildren([HAnimJoint1082]);
{ .AddChildren }
HAnimJoint1000.AddChildren([HAnimJoint1074]);
HAnimJoint1110 := THAnimJointNode.Create;
HAnimJoint1110.NameField := 'r_carpometacarpal_4';
HAnimJoint1110.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint1110.SetSkinCoordIndex([249,250]);
HAnimJoint1110.SetSkinCoordWeight([1,1]);
HAnimSegment1111 := THAnimSegmentNode.Create;
HAnimSegment1111.NameField := 'r_metacarpal_4';
Shape1112 := TShapeNode.Create;
Appearance1113 := TAppearanceNode.Create;
Appearance1113 := Appearance67;
{ .SetAppearance }
Shape1112.Appearance := Appearance1113;
IndexedLineSet1114 := TIndexedLineSetNode.Create;
IndexedLineSet1114.SetCoordIndex([0,1,-1]);
Coordinate1115 := TCoordinateNode.Create;
Coordinate1115.SetPoint([Vector3(-0.2,0.835,-0.065),Vector3(-0.2,0.793,-0.065)]);
{ .SetCoord }
IndexedLineSet1114.Coord := Coordinate1115;
{ .SetGeometry }
Shape1112.Geometry := IndexedLineSet1114;
{ .AddChildren }
HAnimSegment1111.AddChildren([Shape1112]);
Transform1116 := TTransformNode.Create;
Transform1116.Translation := Vector3(-0.2,0.835,-0.065);
Shape1117 := TShapeNode.Create;
Shape1117 := Shape53;
{ .AddChild }
Transform1116.AddChildren([Shape1117]);
{ .AddChildren }
HAnimSegment1111.AddChildren([Transform1116]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimSegment1111]);
HAnimJoint1118 := THAnimJointNode.Create;
HAnimJoint1118.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1118.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint1118.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint1118.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimSegment1119 := THAnimSegmentNode.Create;
HAnimSegment1119.NameField := 'r_carpal_proximal_phalanx_4';
Shape1120 := TShapeNode.Create;
Appearance1121 := TAppearanceNode.Create;
Appearance1121 := Appearance67;
{ .SetAppearance }
Shape1120.Appearance := Appearance1121;
IndexedLineSet1122 := TIndexedLineSetNode.Create;
IndexedLineSet1122.SetCoordIndex([0,1,-1]);
Coordinate1123 := TCoordinateNode.Create;
Coordinate1123.SetPoint([Vector3(-0.2,0.793,-0.065),Vector3(-0.2,0.74,-0.065)]);
{ .SetCoord }
IndexedLineSet1122.Coord := Coordinate1123;
{ .SetGeometry }
Shape1120.Geometry := IndexedLineSet1122;
{ .AddChildren }
HAnimSegment1119.AddChildren([Shape1120]);
Transform1124 := TTransformNode.Create;
Transform1124.Translation := Vector3(-0.2,0.793,-0.065);
Shape1125 := TShapeNode.Create;
Shape1125 := Shape53;
{ .AddChild }
Transform1124.AddChildren([Shape1125]);
{ .AddChildren }
HAnimSegment1119.AddChildren([Transform1124]);
{ .AddChildren }
HAnimJoint1118.AddChildren([HAnimSegment1119]);
HAnimJoint1126 := THAnimJointNode.Create;
HAnimJoint1126.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1126.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint1126.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint1126.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1127 := THAnimSegmentNode.Create;
HAnimSegment1127.NameField := 'r_carpal_middle_phalanx_4';
Shape1128 := TShapeNode.Create;
Appearance1129 := TAppearanceNode.Create;
Appearance1129 := Appearance67;
{ .SetAppearance }
Shape1128.Appearance := Appearance1129;
IndexedLineSet1130 := TIndexedLineSetNode.Create;
IndexedLineSet1130.SetCoordIndex([0,1,-1]);
Coordinate1131 := TCoordinateNode.Create;
Coordinate1131.SetPoint([Vector3(-0.2,0.74,-0.065),Vector3(-0.2,0.7177,-0.065)]);
{ .SetCoord }
IndexedLineSet1130.Coord := Coordinate1131;
{ .SetGeometry }
Shape1128.Geometry := IndexedLineSet1130;
{ .AddChildren }
HAnimSegment1127.AddChildren([Shape1128]);
Transform1132 := TTransformNode.Create;
Transform1132.Translation := Vector3(-0.2,0.74,-0.065);
Shape1133 := TShapeNode.Create;
Shape1133 := Shape53;
{ .AddChild }
Transform1132.AddChildren([Shape1133]);
{ .AddChildren }
HAnimSegment1127.AddChildren([Transform1132]);
{ .AddChildren }
HAnimJoint1126.AddChildren([HAnimSegment1127]);
HAnimJoint1134 := THAnimJointNode.Create;
HAnimJoint1134.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1134.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint1134.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint1134.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1135 := THAnimSegmentNode.Create;
HAnimSegment1135.NameField := 'r_carpal_distal_phalanx_4';
Shape1136 := TShapeNode.Create;
Appearance1137 := TAppearanceNode.Create;
Appearance1137 := Appearance67;
{ .SetAppearance }
Shape1136.Appearance := Appearance1137;
IndexedLineSet1138 := TIndexedLineSetNode.Create;
IndexedLineSet1138.SetCoordIndex([0,1,-1]);
Coordinate1139 := TCoordinateNode.Create;
Coordinate1139.SetPoint([Vector3(-0.2,0.7177,-0.065),Vector3(-0.2,0.695,-0.065)]);
{ .SetCoord }
IndexedLineSet1138.Coord := Coordinate1139;
{ .SetGeometry }
Shape1136.Geometry := IndexedLineSet1138;
{ .AddChildren }
HAnimSegment1135.AddChildren([Shape1136]);
Transform1140 := TTransformNode.Create;
Transform1140.Translation := Vector3(-0.2,0.7177,-0.065);
Shape1141 := TShapeNode.Create;
Shape1141 := Shape53;
{ .AddChild }
Transform1140.AddChildren([Shape1141]);
{ .AddChildren }
HAnimSegment1135.AddChildren([Transform1140]);
HAnimSite1142 := THAnimSiteNode.Create;
HAnimSite1142.NameField := 'r_carpal_distal_phalanx_4_tip';
HAnimSite1142.Translation := Vector3(-0.2,0.695,-0.065);
Shape1143 := TShapeNode.Create;
Shape1143 := Shape60;
{ .AddChildren }
HAnimSite1142.AddChildren([Shape1143]);
{ .AddChildren }
HAnimSegment1135.AddChildren([HAnimSite1142]);
{ .AddChildren }
HAnimJoint1134.AddChildren([HAnimSegment1135]);
{ .AddChildren }
HAnimJoint1126.AddChildren([HAnimJoint1134]);
{ .AddChildren }
HAnimJoint1118.AddChildren([HAnimJoint1126]);
{ .AddChildren }
HAnimJoint1110.AddChildren([HAnimJoint1118]);
{ .AddChildren }
HAnimJoint1000.AddChildren([HAnimJoint1110]);
HAnimJoint1144 := THAnimJointNode.Create;
HAnimJoint1144.NameField := 'r_carpometacarpal_5';
HAnimJoint1144.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint1144.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint1144.SetSkinCoordWeight([1,1,1,0.5]);
HAnimSegment1145 := THAnimSegmentNode.Create;
HAnimSegment1145.NameField := 'r_metacarpal_5';
Shape1146 := TShapeNode.Create;
Appearance1147 := TAppearanceNode.Create;
Appearance1147 := Appearance67;
{ .SetAppearance }
Shape1146.Appearance := Appearance1147;
IndexedLineSet1148 := TIndexedLineSetNode.Create;
IndexedLineSet1148.SetCoordIndex([0,1,-1]);
Coordinate1149 := TCoordinateNode.Create;
Coordinate1149.SetPoint([Vector3(-0.2,0.84,-0.085),Vector3(-0.2,0.79,-0.085)]);
{ .SetCoord }
IndexedLineSet1148.Coord := Coordinate1149;
{ .SetGeometry }
Shape1146.Geometry := IndexedLineSet1148;
{ .AddChildren }
HAnimSegment1145.AddChildren([Shape1146]);
Transform1150 := TTransformNode.Create;
Transform1150.Translation := Vector3(-0.2,0.84,-0.085);
Shape1151 := TShapeNode.Create;
Shape1151 := Shape53;
{ .AddChild }
Transform1150.AddChildren([Shape1151]);
{ .AddChildren }
HAnimSegment1145.AddChildren([Transform1150]);
HAnimSite1152 := THAnimSiteNode.Create;
HAnimSite1152.NameField := 'r_metacarpal_phalanx_5_pt';
HAnimSite1152.Translation := Vector3(-0.2,0.79,-0.095);
Shape1153 := TShapeNode.Create;
Shape1153 := Shape60;
{ .AddChildren }
HAnimSite1152.AddChildren([Shape1153]);
{ .AddChildren }
HAnimSegment1145.AddChildren([HAnimSite1152]);
{ .AddChildren }
HAnimJoint1144.AddChildren([HAnimSegment1145]);
HAnimJoint1154 := THAnimJointNode.Create;
HAnimJoint1154.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1154.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint1154.SetSkinCoordIndex([276,277,278]);
HAnimJoint1154.SetSkinCoordWeight([1,1,1]);
HAnimSegment1155 := THAnimSegmentNode.Create;
HAnimSegment1155.NameField := 'r_carpal_proximal_phalanx_5';
Shape1156 := TShapeNode.Create;
Appearance1157 := TAppearanceNode.Create;
Appearance1157 := Appearance67;
{ .SetAppearance }
Shape1156.Appearance := Appearance1157;
IndexedLineSet1158 := TIndexedLineSetNode.Create;
IndexedLineSet1158.SetCoordIndex([0,1,-1]);
Coordinate1159 := TCoordinateNode.Create;
Coordinate1159.SetPoint([Vector3(-0.2,0.79,-0.085),Vector3(-0.2,0.755,-0.085)]);
{ .SetCoord }
IndexedLineSet1158.Coord := Coordinate1159;
{ .SetGeometry }
Shape1156.Geometry := IndexedLineSet1158;
{ .AddChildren }
HAnimSegment1155.AddChildren([Shape1156]);
Transform1160 := TTransformNode.Create;
Transform1160.Translation := Vector3(-0.2,0.79,-0.085);
Shape1161 := TShapeNode.Create;
Shape1161 := Shape53;
{ .AddChild }
Transform1160.AddChildren([Shape1161]);
{ .AddChildren }
HAnimSegment1155.AddChildren([Transform1160]);
{ .AddChildren }
HAnimJoint1154.AddChildren([HAnimSegment1155]);
HAnimJoint1162 := THAnimJointNode.Create;
HAnimJoint1162.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1162.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint1162.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint1162.SetSkinCoordWeight([1,1,1,1]);
HAnimSegment1163 := THAnimSegmentNode.Create;
HAnimSegment1163.NameField := 'r_carpal_middle_phalanx_5';
Shape1164 := TShapeNode.Create;
Appearance1165 := TAppearanceNode.Create;
Appearance1165 := Appearance67;
{ .SetAppearance }
Shape1164.Appearance := Appearance1165;
IndexedLineSet1166 := TIndexedLineSetNode.Create;
IndexedLineSet1166.SetCoordIndex([0,1,-1]);
Coordinate1167 := TCoordinateNode.Create;
Coordinate1167.SetPoint([Vector3(-0.2,0.755,-0.085),Vector3(-0.2,0.735,-0.085)]);
{ .SetCoord }
IndexedLineSet1166.Coord := Coordinate1167;
{ .SetGeometry }
Shape1164.Geometry := IndexedLineSet1166;
{ .AddChildren }
HAnimSegment1163.AddChildren([Shape1164]);
Transform1168 := TTransformNode.Create;
Transform1168.Translation := Vector3(-0.2,0.755,-0.085);
Shape1169 := TShapeNode.Create;
Shape1169 := Shape53;
{ .AddChild }
Transform1168.AddChildren([Shape1169]);
{ .AddChildren }
HAnimSegment1163.AddChildren([Transform1168]);
{ .AddChildren }
HAnimJoint1162.AddChildren([HAnimSegment1163]);
HAnimJoint1170 := THAnimJointNode.Create;
HAnimJoint1170.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1170.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint1170.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint1170.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
HAnimSegment1171 := THAnimSegmentNode.Create;
HAnimSegment1171.NameField := 'r_carpal_distal_phalanx_5';
Shape1172 := TShapeNode.Create;
Appearance1173 := TAppearanceNode.Create;
Appearance1173 := Appearance67;
{ .SetAppearance }
Shape1172.Appearance := Appearance1173;
IndexedLineSet1174 := TIndexedLineSetNode.Create;
IndexedLineSet1174.SetCoordIndex([0,1,-1]);
Coordinate1175 := TCoordinateNode.Create;
Coordinate1175.SetPoint([Vector3(-0.2,0.735,-0.085),Vector3(-0.2,0.72,-0.085)]);
{ .SetCoord }
IndexedLineSet1174.Coord := Coordinate1175;
{ .SetGeometry }
Shape1172.Geometry := IndexedLineSet1174;
{ .AddChildren }
HAnimSegment1171.AddChildren([Shape1172]);
Transform1176 := TTransformNode.Create;
Transform1176.Translation := Vector3(-0.2,0.735,-0.085);
Shape1177 := TShapeNode.Create;
Shape1177 := Shape53;
{ .AddChild }
Transform1176.AddChildren([Shape1177]);
{ .AddChildren }
HAnimSegment1171.AddChildren([Transform1176]);
HAnimSite1178 := THAnimSiteNode.Create;
HAnimSite1178.NameField := 'r_carpal_distal_phalanx_5_tip';
HAnimSite1178.Translation := Vector3(-0.2,0.72,-0.085);
Shape1179 := TShapeNode.Create;
Shape1179 := Shape60;
{ .AddChildren }
HAnimSite1178.AddChildren([Shape1179]);
{ .AddChildren }
HAnimSegment1171.AddChildren([HAnimSite1178]);
{ .AddChildren }
HAnimJoint1170.AddChildren([HAnimSegment1171]);
{ .AddChildren }
HAnimJoint1162.AddChildren([HAnimJoint1170]);
{ .AddChildren }
HAnimJoint1154.AddChildren([HAnimJoint1162]);
{ .AddChildren }
HAnimJoint1144.AddChildren([HAnimJoint1154]);
{ .AddChildren }
HAnimJoint1000.AddChildren([HAnimJoint1144]);
{ .AddChildren }
HAnimJoint978.AddChildren([HAnimJoint1000]);
{ .AddChildren }
HAnimJoint948.AddChildren([HAnimJoint978]);
{ .AddChildren }
HAnimJoint932.AddChildren([HAnimJoint948]);
{ .AddChildren }
HAnimJoint922.AddChildren([HAnimJoint932]);
{ .AddChildren }
HAnimJoint556.AddChildren([HAnimJoint922]);
{ .AddChildren }
HAnimJoint548.AddChildren([HAnimJoint556]);
{ .AddChildren }
HAnimJoint540.AddChildren([HAnimJoint548]);
{ .AddChildren }
HAnimJoint530.AddChildren([HAnimJoint540]);
{ .AddChildren }
HAnimJoint522.AddChildren([HAnimJoint530]);
{ .AddChildren }
HAnimJoint514.AddChildren([HAnimJoint522]);
{ .AddChildren }
HAnimJoint506.AddChildren([HAnimJoint514]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimJoint506]);
{ .AddChildren }
HAnimJoint486.AddChildren([HAnimJoint498]);
{ .AddChildren }
HAnimJoint476.AddChildren([HAnimJoint486]);
{ .AddChildren }
HAnimJoint468.AddChildren([HAnimJoint476]);
{ .AddChildren }
HAnimJoint460.AddChildren([HAnimJoint468]);
{ .AddChildren }
HAnimJoint452.AddChildren([HAnimJoint460]);
{ .AddChildren }
HAnimJoint426.AddChildren([HAnimJoint452]);
{ .AddChildren }
HAnimJoint418.AddChildren([HAnimJoint426]);
{ .AddChildren }
HAnimJoint410.AddChildren([HAnimJoint418]);
{ .AddChildren }
HAnimJoint395.AddChildren([HAnimJoint410]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint395]);
{ .AddSkeleton }
HAnimHumanoid78.SetSkeleton([HAnimJoint81]);
Shape1180 := TShapeNode.Create;
Appearance1181 := TAppearanceNode.Create;
Material1182 := TMaterialNode.Create;
Material1182.AmbientIntensity := 0.6;
Material1182.DiffuseColor := Vector3(1,1,1);
Material1182.Shininess := 0.6;
Material1182.Transparency := 0.2;
{ .SetMaterial }
Appearance1181.Material := Material1182;
ImageTexture1183 := TImageTextureNode.Create;
ImageTexture1183.Description := 'Blue Spiral Pattern';
ImageTexture1183.SetUrl(['zBlueSpiralBkg2.gif','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif']);
{ .SetTexture }
Appearance1181.Texture := ImageTexture1183;
{ .SetAppearance }
Shape1180.Appearance := Appearance1181;
IndexedFaceSet1184 := TIndexedFaceSetNode.Create;
IndexedFaceSet1184.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1184.CreaseAngle := 3.1;
Color1185 := TColorNode.Create;
Color1185.SetColor([Vector3(1,0,0),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,1),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(1,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,0,1),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(0,1,0),Vector3(1,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(0,1,0),Vector3(1,0,1),Vector3(1,1,1)]);
{ .SetColor }
IndexedFaceSet1184.Color := Color1185;
Coordinate1186 := TCoordinateNode.Create;
Coordinate1186.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.0723,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.235,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetCoord }
IndexedFaceSet1184.Coord := Coordinate1186;
{ .SetGeometry }
Shape1180.Geometry := IndexedFaceSet1184;
{ .SetSkin }
HAnimHumanoid78.SetSkin([Shape1180]);
Coordinate1187 := TCoordinateNode.Create;
Coordinate1187 := Coordinate1186;
{ .SetSkinCoord }
HAnimHumanoid78.SetSkinCoord(Coordinate1187);
HAnimJoint1188 := THAnimJointNode.Create;
HAnimJoint1188 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1188;
HAnimJoint1189 := THAnimJointNode.Create;
HAnimJoint1189 := HAnimJoint93;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1189;
HAnimJoint1190 := THAnimJointNode.Create;
HAnimJoint1190 := HAnimJoint395;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1190;
HAnimJoint1191 := THAnimJointNode.Create;
HAnimJoint1191 := HAnimJoint410;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1191;
HAnimJoint1192 := THAnimJointNode.Create;
HAnimJoint1192 := HAnimJoint418;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1192;
HAnimJoint1193 := THAnimJointNode.Create;
HAnimJoint1193 := HAnimJoint426;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1193;
HAnimJoint1194 := THAnimJointNode.Create;
HAnimJoint1194 := HAnimJoint452;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1194;
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195 := HAnimJoint460;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1195;
HAnimJoint1196 := THAnimJointNode.Create;
HAnimJoint1196 := HAnimJoint468;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1196;
HAnimJoint1197 := THAnimJointNode.Create;
HAnimJoint1197 := HAnimJoint476;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1197;
HAnimJoint1198 := THAnimJointNode.Create;
HAnimJoint1198 := HAnimJoint486;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1198;
HAnimJoint1199 := THAnimJointNode.Create;
HAnimJoint1199 := HAnimJoint498;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1199;
HAnimJoint1200 := THAnimJointNode.Create;
HAnimJoint1200 := HAnimJoint506;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1200;
HAnimJoint1201 := THAnimJointNode.Create;
HAnimJoint1201 := HAnimJoint514;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1201;
HAnimJoint1202 := THAnimJointNode.Create;
HAnimJoint1202 := HAnimJoint522;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1202;
HAnimJoint1203 := THAnimJointNode.Create;
HAnimJoint1203 := HAnimJoint530;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1203;
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204 := HAnimJoint540;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1204;
HAnimJoint1205 := THAnimJointNode.Create;
HAnimJoint1205 := HAnimJoint548;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1205;
HAnimJoint1206 := THAnimJointNode.Create;
HAnimJoint1206 := HAnimJoint556;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1206;
HAnimJoint1207 := THAnimJointNode.Create;
HAnimJoint1207 := HAnimJoint568;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1207;
HAnimJoint1208 := THAnimJointNode.Create;
HAnimJoint1208 := HAnimJoint580;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1208;
HAnimJoint1209 := THAnimJointNode.Create;
HAnimJoint1209 := HAnimJoint588;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1209;
HAnimJoint1210 := THAnimJointNode.Create;
HAnimJoint1210 := HAnimJoint596;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1210;
HAnimJoint1211 := THAnimJointNode.Create;
HAnimJoint1211 := HAnimJoint604;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1211;
HAnimJoint1212 := THAnimJointNode.Create;
HAnimJoint1212 := HAnimJoint612;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1212;
HAnimJoint1213 := THAnimJointNode.Create;
HAnimJoint1213 := HAnimJoint620;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1213;
HAnimJoint1214 := THAnimJointNode.Create;
HAnimJoint1214 := HAnimJoint628;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1214;
HAnimJoint1215 := THAnimJointNode.Create;
HAnimJoint1215 := HAnimJoint682;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1215;
HAnimJoint1216 := THAnimJointNode.Create;
HAnimJoint1216 := HAnimJoint932;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1216;
HAnimJoint1217 := THAnimJointNode.Create;
HAnimJoint1217 := HAnimJoint808;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1217;
HAnimJoint1218 := THAnimJointNode.Create;
HAnimJoint1218 := HAnimJoint1064;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1218;
HAnimJoint1219 := THAnimJointNode.Create;
HAnimJoint1219 := HAnimJoint844;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1219;
HAnimJoint1220 := THAnimJointNode.Create;
HAnimJoint1220 := HAnimJoint1098;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1220;
HAnimJoint1221 := THAnimJointNode.Create;
HAnimJoint1221 := HAnimJoint878;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1221;
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222 := HAnimJoint1134;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1222;
HAnimJoint1223 := THAnimJointNode.Create;
HAnimJoint1223 := HAnimJoint912;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1223;
HAnimJoint1224 := THAnimJointNode.Create;
HAnimJoint1224 := HAnimJoint1170;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1224;
HAnimJoint1225 := THAnimJointNode.Create;
HAnimJoint1225 := HAnimJoint774;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1225;
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226 := HAnimJoint1026;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1226;
HAnimJoint1227 := THAnimJointNode.Create;
HAnimJoint1227 := HAnimJoint800;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1227;
HAnimJoint1228 := THAnimJointNode.Create;
HAnimJoint1228 := HAnimJoint1056;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1228;
HAnimJoint1229 := THAnimJointNode.Create;
HAnimJoint1229 := HAnimJoint836;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1229;
HAnimJoint1230 := THAnimJointNode.Create;
HAnimJoint1230 := HAnimJoint1090;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1230;
HAnimJoint1231 := THAnimJointNode.Create;
HAnimJoint1231 := HAnimJoint870;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1231;
HAnimJoint1232 := THAnimJointNode.Create;
HAnimJoint1232 := HAnimJoint1126;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1232;
HAnimJoint1233 := THAnimJointNode.Create;
HAnimJoint1233 := HAnimJoint904;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1233;
HAnimJoint1234 := THAnimJointNode.Create;
HAnimJoint1234 := HAnimJoint1162;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1234;
HAnimJoint1235 := THAnimJointNode.Create;
HAnimJoint1235 := HAnimJoint758;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1235;
HAnimJoint1236 := THAnimJointNode.Create;
HAnimJoint1236 := HAnimJoint1010;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1236;
HAnimJoint1237 := THAnimJointNode.Create;
HAnimJoint1237 := HAnimJoint784;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1237;
HAnimJoint1238 := THAnimJointNode.Create;
HAnimJoint1238 := HAnimJoint1038;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1238;
HAnimJoint1239 := THAnimJointNode.Create;
HAnimJoint1239 := HAnimJoint820;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1239;
HAnimJoint1240 := THAnimJointNode.Create;
HAnimJoint1240 := HAnimJoint1074;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1240;
HAnimJoint1241 := THAnimJointNode.Create;
HAnimJoint1241 := HAnimJoint854;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1241;
HAnimJoint1242 := THAnimJointNode.Create;
HAnimJoint1242 := HAnimJoint1110;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1242;
HAnimJoint1243 := THAnimJointNode.Create;
HAnimJoint1243 := HAnimJoint888;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1243;
HAnimJoint1244 := THAnimJointNode.Create;
HAnimJoint1244 := HAnimJoint1144;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1244;
HAnimJoint1245 := THAnimJointNode.Create;
HAnimJoint1245 := HAnimJoint722;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1245;
HAnimJoint1246 := THAnimJointNode.Create;
HAnimJoint1246 := HAnimJoint978;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1246;
HAnimJoint1247 := THAnimJointNode.Create;
HAnimJoint1247 := HAnimJoint656;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1247;
HAnimJoint1248 := THAnimJointNode.Create;
HAnimJoint1248 := HAnimJoint664;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1248;
HAnimJoint1249 := THAnimJointNode.Create;
HAnimJoint1249 := HAnimJoint123;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1249;
HAnimJoint1250 := THAnimJointNode.Create;
HAnimJoint1250 := HAnimJoint259;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1250;
HAnimJoint1251 := THAnimJointNode.Create;
HAnimJoint1251 := HAnimJoint149;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1251;
HAnimJoint1252 := THAnimJointNode.Create;
HAnimJoint1252 := HAnimJoint285;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1252;
HAnimJoint1253 := THAnimJointNode.Create;
HAnimJoint1253 := HAnimJoint766;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1253;
HAnimJoint1254 := THAnimJointNode.Create;
HAnimJoint1254 := HAnimJoint1018;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1254;
HAnimJoint1255 := THAnimJointNode.Create;
HAnimJoint1255 := HAnimJoint792;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1255;
HAnimJoint1256 := THAnimJointNode.Create;
HAnimJoint1256 := HAnimJoint1048;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1256;
HAnimJoint1257 := THAnimJointNode.Create;
HAnimJoint1257 := HAnimJoint828;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1257;
HAnimJoint1258 := THAnimJointNode.Create;
HAnimJoint1258 := HAnimJoint1082;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1258;
HAnimJoint1259 := THAnimJointNode.Create;
HAnimJoint1259 := HAnimJoint862;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1259;
HAnimJoint1260 := THAnimJointNode.Create;
HAnimJoint1260 := HAnimJoint1118;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1260;
HAnimJoint1261 := THAnimJointNode.Create;
HAnimJoint1261 := HAnimJoint896;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1261;
HAnimJoint1262 := THAnimJointNode.Create;
HAnimJoint1262 := HAnimJoint1154;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1262;
HAnimJoint1263 := THAnimJointNode.Create;
HAnimJoint1263 := HAnimJoint229;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1263;
HAnimJoint1264 := THAnimJointNode.Create;
HAnimJoint1264 := HAnimJoint211;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1264;
HAnimJoint1265 := THAnimJointNode.Create;
HAnimJoint1265 := HAnimJoint347;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1265;
HAnimJoint1266 := THAnimJointNode.Create;
HAnimJoint1266 := HAnimJoint744;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1266;
HAnimJoint1267 := THAnimJointNode.Create;
HAnimJoint1267 := HAnimJoint1000;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1267;
HAnimJoint1268 := THAnimJointNode.Create;
HAnimJoint1268 := HAnimJoint698;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1268;
HAnimJoint1269 := THAnimJointNode.Create;
HAnimJoint1269 := HAnimJoint948;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1269;
HAnimJoint1270 := THAnimJointNode.Create;
HAnimJoint1270 := HAnimJoint672;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1270;
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271 := HAnimJoint922;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1271;
HAnimJoint1272 := THAnimJointNode.Create;
HAnimJoint1272 := HAnimJoint177;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1272;
HAnimJoint1273 := THAnimJointNode.Create;
HAnimJoint1273 := HAnimJoint313;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1273;
HAnimJoint1274 := THAnimJointNode.Create;
HAnimJoint1274 := HAnimJoint365;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1274;
HAnimJoint1275 := THAnimJointNode.Create;
HAnimJoint1275 := HAnimJoint197;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1275;
HAnimJoint1276 := THAnimJointNode.Create;
HAnimJoint1276 := HAnimJoint333;
{ .AddJoints }
HAnimHumanoid78.Joints := HAnimJoint1276;
HAnimSegment1277 := THAnimSegmentNode.Create;
HAnimSegment1277 := HAnimSegment621;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1277;
HAnimSegment1278 := THAnimSegmentNode.Create;
HAnimSegment1278 := HAnimSegment613;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1278;
HAnimSegment1279 := THAnimSegmentNode.Create;
HAnimSegment1279 := HAnimSegment605;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1279;
HAnimSegment1280 := THAnimSegmentNode.Create;
HAnimSegment1280 := HAnimSegment597;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1280;
HAnimSegment1281 := THAnimSegmentNode.Create;
HAnimSegment1281 := HAnimSegment589;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1281;
HAnimSegment1282 := THAnimSegmentNode.Create;
HAnimSegment1282 := HAnimSegment581;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1282;
HAnimSegment1283 := THAnimSegmentNode.Create;
HAnimSegment1283 := HAnimSegment569;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1283;
HAnimSegment1284 := THAnimSegmentNode.Create;
HAnimSegment1284 := HAnimSegment453;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1284;
HAnimSegment1285 := THAnimSegmentNode.Create;
HAnimSegment1285 := HAnimSegment427;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1285;
HAnimSegment1286 := THAnimSegmentNode.Create;
HAnimSegment1286 := HAnimSegment419;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1286;
HAnimSegment1287 := THAnimSegmentNode.Create;
HAnimSegment1287 := HAnimSegment411;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1287;
HAnimSegment1288 := THAnimSegmentNode.Create;
HAnimSegment1288 := HAnimSegment401;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1288;
HAnimSegment1289 := THAnimSegmentNode.Create;
HAnimSegment1289 := HAnimSegment94;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1289;
HAnimSegment1290 := THAnimSegmentNode.Create;
HAnimSegment1290 := HAnimSegment82;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1290;
HAnimSegment1291 := THAnimSegmentNode.Create;
HAnimSegment1291 := HAnimSegment629;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1291;
HAnimSegment1292 := THAnimSegmentNode.Create;
HAnimSegment1292 := HAnimSegment557;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1292;
HAnimSegment1293 := THAnimSegmentNode.Create;
HAnimSegment1293 := HAnimSegment477;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1293;
HAnimSegment1294 := THAnimSegmentNode.Create;
HAnimSegment1294 := HAnimSegment469;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1294;
HAnimSegment1295 := THAnimSegmentNode.Create;
HAnimSegment1295 := HAnimSegment461;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1295;
HAnimSegment1296 := THAnimSegmentNode.Create;
HAnimSegment1296 := HAnimSegment549;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1296;
HAnimSegment1297 := THAnimSegmentNode.Create;
HAnimSegment1297 := HAnimSegment541;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1297;
HAnimSegment1298 := THAnimSegmentNode.Create;
HAnimSegment1298 := HAnimSegment531;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1298;
HAnimSegment1299 := THAnimSegmentNode.Create;
HAnimSegment1299 := HAnimSegment523;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1299;
HAnimSegment1300 := THAnimSegmentNode.Create;
HAnimSegment1300 := HAnimSegment515;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1300;
HAnimSegment1301 := THAnimSegmentNode.Create;
HAnimSegment1301 := HAnimSegment507;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1301;
HAnimSegment1302 := THAnimSegmentNode.Create;
HAnimSegment1302 := HAnimSegment499;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1302;
HAnimSegment1303 := THAnimSegmentNode.Create;
HAnimSegment1303 := HAnimSegment487;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1303;
HAnimSegment1304 := THAnimSegmentNode.Create;
HAnimSegment1304 := HAnimSegment396;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1304;
HAnimSegment1305 := THAnimSegmentNode.Create;
HAnimSegment1305 := HAnimSegment150;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1305;
HAnimSegment1306 := THAnimSegmentNode.Create;
HAnimSegment1306 := HAnimSegment286;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1306;
HAnimSegment1307 := THAnimSegmentNode.Create;
HAnimSegment1307 := HAnimSegment745;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1307;
HAnimSegment1308 := THAnimSegmentNode.Create;
HAnimSegment1308 := HAnimSegment1001;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1308;
HAnimSegment1309 := THAnimSegmentNode.Create;
HAnimSegment1309 := HAnimSegment775;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1309;
HAnimSegment1310 := THAnimSegmentNode.Create;
HAnimSegment1310 := HAnimSegment1027;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1310;
HAnimSegment1311 := THAnimSegmentNode.Create;
HAnimSegment1311 := HAnimSegment809;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1311;
HAnimSegment1312 := THAnimSegmentNode.Create;
HAnimSegment1312 := HAnimSegment1065;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1312;
HAnimSegment1313 := THAnimSegmentNode.Create;
HAnimSegment1313 := HAnimSegment845;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1313;
HAnimSegment1314 := THAnimSegmentNode.Create;
HAnimSegment1314 := HAnimSegment1099;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1314;
HAnimSegment1315 := THAnimSegmentNode.Create;
HAnimSegment1315 := HAnimSegment879;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1315;
HAnimSegment1316 := THAnimSegmentNode.Create;
HAnimSegment1316 := HAnimSegment1135;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1316;
HAnimSegment1317 := THAnimSegmentNode.Create;
HAnimSegment1317 := HAnimSegment913;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1317;
HAnimSegment1318 := THAnimSegmentNode.Create;
HAnimSegment1318 := HAnimSegment1171;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1318;
HAnimSegment1319 := THAnimSegmentNode.Create;
HAnimSegment1319 := HAnimSegment801;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1319;
HAnimSegment1320 := THAnimSegmentNode.Create;
HAnimSegment1320 := HAnimSegment1057;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1320;
HAnimSegment1321 := THAnimSegmentNode.Create;
HAnimSegment1321 := HAnimSegment837;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1321;
HAnimSegment1322 := THAnimSegmentNode.Create;
HAnimSegment1322 := HAnimSegment1091;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1322;
HAnimSegment1323 := THAnimSegmentNode.Create;
HAnimSegment1323 := HAnimSegment871;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1323;
HAnimSegment1324 := THAnimSegmentNode.Create;
HAnimSegment1324 := HAnimSegment1127;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1324;
HAnimSegment1325 := THAnimSegmentNode.Create;
HAnimSegment1325 := HAnimSegment905;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1325;
HAnimSegment1326 := THAnimSegmentNode.Create;
HAnimSegment1326 := HAnimSegment1163;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1326;
HAnimSegment1327 := THAnimSegmentNode.Create;
HAnimSegment1327 := HAnimSegment767;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1327;
HAnimSegment1328 := THAnimSegmentNode.Create;
HAnimSegment1328 := HAnimSegment1019;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1328;
HAnimSegment1329 := THAnimSegmentNode.Create;
HAnimSegment1329 := HAnimSegment793;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1329;
HAnimSegment1330 := THAnimSegmentNode.Create;
HAnimSegment1330 := HAnimSegment1049;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1330;
HAnimSegment1331 := THAnimSegmentNode.Create;
HAnimSegment1331 := HAnimSegment829;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1331;
HAnimSegment1332 := THAnimSegmentNode.Create;
HAnimSegment1332 := HAnimSegment1083;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1332;
HAnimSegment1333 := THAnimSegmentNode.Create;
HAnimSegment1333 := HAnimSegment863;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1333;
HAnimSegment1334 := THAnimSegmentNode.Create;
HAnimSegment1334 := HAnimSegment1119;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1334;
HAnimSegment1335 := THAnimSegmentNode.Create;
HAnimSegment1335 := HAnimSegment897;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1335;
HAnimSegment1336 := THAnimSegmentNode.Create;
HAnimSegment1336 := HAnimSegment1155;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1336;
HAnimSegment1337 := THAnimSegmentNode.Create;
HAnimSegment1337 := HAnimSegment673;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1337;
HAnimSegment1338 := THAnimSegmentNode.Create;
HAnimSegment1338 := HAnimSegment923;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1338;
HAnimSegment1339 := THAnimSegmentNode.Create;
HAnimSegment1339 := HAnimSegment657;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1339;
HAnimSegment1340 := THAnimSegmentNode.Create;
HAnimSegment1340 := HAnimSegment665;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1340;
HAnimSegment1341 := THAnimSegmentNode.Create;
HAnimSegment1341 := HAnimSegment723;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1341;
HAnimSegment1342 := THAnimSegmentNode.Create;
HAnimSegment1342 := HAnimSegment979;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1342;
HAnimSegment1343 := THAnimSegmentNode.Create;
HAnimSegment1343 := HAnimSegment759;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1343;
HAnimSegment1344 := THAnimSegmentNode.Create;
HAnimSegment1344 := HAnimSegment1011;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1344;
HAnimSegment1345 := THAnimSegmentNode.Create;
HAnimSegment1345 := HAnimSegment785;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1345;
HAnimSegment1346 := THAnimSegmentNode.Create;
HAnimSegment1346 := HAnimSegment1039;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1346;
HAnimSegment1347 := THAnimSegmentNode.Create;
HAnimSegment1347 := HAnimSegment821;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1347;
HAnimSegment1348 := THAnimSegmentNode.Create;
HAnimSegment1348 := HAnimSegment1075;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1348;
HAnimSegment1349 := THAnimSegmentNode.Create;
HAnimSegment1349 := HAnimSegment855;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1349;
HAnimSegment1350 := THAnimSegmentNode.Create;
HAnimSegment1350 := HAnimSegment1111;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1350;
HAnimSegment1351 := THAnimSegmentNode.Create;
HAnimSegment1351 := HAnimSegment889;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1351;
HAnimSegment1352 := THAnimSegmentNode.Create;
HAnimSegment1352 := HAnimSegment1145;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1352;
HAnimSegment1353 := THAnimSegmentNode.Create;
HAnimSegment1353 := HAnimSegment198;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1353;
HAnimSegment1354 := THAnimSegmentNode.Create;
HAnimSegment1354 := HAnimSegment334;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1354;
HAnimSegment1355 := THAnimSegmentNode.Create;
HAnimSegment1355 := HAnimSegment683;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1355;
HAnimSegment1356 := THAnimSegmentNode.Create;
HAnimSegment1356 := HAnimSegment933;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1356;
HAnimSegment1357 := THAnimSegmentNode.Create;
HAnimSegment1357 := HAnimSegment178;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1357;
HAnimSegment1358 := THAnimSegmentNode.Create;
HAnimSegment1358 := HAnimSegment314;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1358;
HAnimSegment1359 := THAnimSegmentNode.Create;
HAnimSegment1359 := HAnimSegment230;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1359;
HAnimSegment1360 := THAnimSegmentNode.Create;
HAnimSegment1360 := HAnimSegment366;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1360;
HAnimSegment1361 := THAnimSegmentNode.Create;
HAnimSegment1361 := HAnimSegment212;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1361;
HAnimSegment1362 := THAnimSegmentNode.Create;
HAnimSegment1362 := HAnimSegment348;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1362;
HAnimSegment1363 := THAnimSegmentNode.Create;
HAnimSegment1363 := HAnimSegment124;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1363;
HAnimSegment1364 := THAnimSegmentNode.Create;
HAnimSegment1364 := HAnimSegment260;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1364;
HAnimSegment1365 := THAnimSegmentNode.Create;
HAnimSegment1365 := HAnimSegment699;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1365;
HAnimSegment1366 := THAnimSegmentNode.Create;
HAnimSegment1366 := HAnimSegment949;
{ .AddSegments }
HAnimHumanoid78.Segments := HAnimSegment1366;
HAnimSite1367 := THAnimSiteNode.Create;
HAnimSite1367 := HAnimSite566;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1367;
HAnimSite1368 := THAnimSiteNode.Create;
HAnimSite1368 := HAnimSite121;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1368;
HAnimSite1369 := THAnimSiteNode.Create;
HAnimSite1369 := HAnimSite118;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1369;
HAnimSite1370 := THAnimSiteNode.Create;
HAnimSite1370 := HAnimSite408;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1370;
HAnimSite1371 := THAnimSiteNode.Create;
HAnimSite1371 := HAnimSite654;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1371;
HAnimSite1372 := THAnimSiteNode.Create;
HAnimSite1372 := HAnimSite450;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1372;
HAnimSite1373 := THAnimSiteNode.Create;
HAnimSite1373 := HAnimSite638;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1373;
HAnimSite1374 := THAnimSiteNode.Create;
HAnimSite1374 := HAnimSite636;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1374;
HAnimSite1375 := THAnimSiteNode.Create;
HAnimSite1375 := HAnimSite484;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1375;
HAnimSite1376 := THAnimSiteNode.Create;
HAnimSite1376 := HAnimSite644;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1376;
HAnimSite1377 := THAnimSiteNode.Create;
HAnimSite1377 := HAnimSite564;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1377;
HAnimSite1378 := THAnimSiteNode.Create;
HAnimSite1378 := HAnimSite406;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1378;
HAnimSite1379 := THAnimSiteNode.Create;
HAnimSite1379 := HAnimSite692;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1379;
HAnimSite1380 := THAnimSiteNode.Create;
HAnimSite1380 := HAnimSite942;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1380;
HAnimSite1381 := THAnimSiteNode.Create;
HAnimSite1381 := HAnimSite110;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1381;
HAnimSite1382 := THAnimSiteNode.Create;
HAnimSite1382 := HAnimSite112;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1382;
HAnimSite1383 := THAnimSiteNode.Create;
HAnimSite1383 := HAnimSite696;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1383;
HAnimSite1384 := THAnimSiteNode.Create;
HAnimSite1384 := HAnimSite946;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1384;
HAnimSite1385 := THAnimSiteNode.Create;
HAnimSite1385 := HAnimSite694;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1385;
HAnimSite1386 := THAnimSiteNode.Create;
HAnimSite1386 := HAnimSite944;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1386;
HAnimSite1387 := THAnimSiteNode.Create;
HAnimSite1387 := HAnimSite195;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1387;
HAnimSite1388 := THAnimSiteNode.Create;
HAnimSite1388 := HAnimSite331;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1388;
HAnimSite1389 := THAnimSiteNode.Create;
HAnimSite1389 := HAnimSite782;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1389;
HAnimSite1390 := THAnimSiteNode.Create;
HAnimSite1390 := HAnimSite1036;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1390;
HAnimSite1391 := THAnimSiteNode.Create;
HAnimSite1391 := HAnimSite816;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1391;
HAnimSite1392 := THAnimSiteNode.Create;
HAnimSite1392 := HAnimSite1072;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1392;
HAnimSite1393 := THAnimSiteNode.Create;
HAnimSite1393 := HAnimSite850;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1393;
HAnimSite1394 := THAnimSiteNode.Create;
HAnimSite1394 := HAnimSite1108;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1394;
HAnimSite1395 := THAnimSiteNode.Create;
HAnimSite1395 := HAnimSite886;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1395;
HAnimSite1396 := THAnimSiteNode.Create;
HAnimSite1396 := HAnimSite1142;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1396;
HAnimSite1397 := THAnimSiteNode.Create;
HAnimSite1397 := HAnimSite920;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1397;
HAnimSite1398 := THAnimSiteNode.Create;
HAnimSite1398 := HAnimSite1178;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1398;
HAnimSite1399 := THAnimSiteNode.Create;
HAnimSite1399 := HAnimSite680;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1399;
HAnimSite1400 := THAnimSiteNode.Create;
HAnimSite1400 := HAnimSite930;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1400;
HAnimSite1401 := THAnimSiteNode.Create;
HAnimSite1401 := HAnimSite818;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1401;
HAnimSite1402 := THAnimSiteNode.Create;
HAnimSite1402 := HAnimSite1106;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1402;
HAnimSite1403 := THAnimSiteNode.Create;
HAnimSite1403 := HAnimSite145;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1403;
HAnimSite1404 := THAnimSiteNode.Create;
HAnimSite1404 := HAnimSite281;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1404;
HAnimSite1405 := THAnimSiteNode.Create;
HAnimSite1405 := HAnimSite147;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1405;
HAnimSite1406 := THAnimSiteNode.Create;
HAnimSite1406 := HAnimSite283;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1406;
HAnimSite1407 := THAnimSiteNode.Create;
HAnimSite1407 := HAnimSite652;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1407;
HAnimSite1408 := THAnimSiteNode.Create;
HAnimSite1408 := HAnimSite648;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1408;
HAnimSite1409 := THAnimSiteNode.Create;
HAnimSite1409 := HAnimSite720;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1409;
HAnimSite1410 := THAnimSiteNode.Create;
HAnimSite1410 := HAnimSite976;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1410;
HAnimSite1411 := THAnimSiteNode.Create;
HAnimSite1411 := HAnimSite716;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1411;
HAnimSite1412 := THAnimSiteNode.Create;
HAnimSite1412 := HAnimSite972;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1412;
HAnimSite1413 := THAnimSiteNode.Create;
HAnimSite1413 := HAnimSite102;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1413;
HAnimSite1414 := THAnimSiteNode.Create;
HAnimSite1414 := HAnimSite106;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1414;
HAnimSite1415 := THAnimSiteNode.Create;
HAnimSite1415 := HAnimSite642;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1415;
HAnimSite1416 := THAnimSiteNode.Create;
HAnimSite1416 := HAnimSite640;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1416;
HAnimSite1417 := THAnimSiteNode.Create;
HAnimSite1417 := HAnimSite143;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1417;
HAnimSite1418 := THAnimSiteNode.Create;
HAnimSite1418 := HAnimSite279;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1418;
HAnimSite1419 := THAnimSiteNode.Create;
HAnimSite1419 := HAnimSite173;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1419;
HAnimSite1420 := THAnimSiteNode.Create;
HAnimSite1420 := HAnimSite309;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1420;
HAnimSite1421 := THAnimSiteNode.Create;
HAnimSite1421 := HAnimSite175;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1421;
HAnimSite1422 := THAnimSiteNode.Create;
HAnimSite1422 := HAnimSite311;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1422;
HAnimSite1423 := THAnimSiteNode.Create;
HAnimSite1423 := HAnimSite752;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1423;
HAnimSite1424 := THAnimSiteNode.Create;
HAnimSite1424 := HAnimSite1046;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1424;
HAnimSite1425 := THAnimSiteNode.Create;
HAnimSite1425 := HAnimSite756;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1425;
HAnimSite1426 := THAnimSiteNode.Create;
HAnimSite1426 := HAnimSite1152;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1426;
HAnimSite1427 := THAnimSiteNode.Create;
HAnimSite1427 := HAnimSite227;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1427;
HAnimSite1428 := THAnimSiteNode.Create;
HAnimSite1428 := HAnimSite363;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1428;
HAnimSite1429 := THAnimSiteNode.Create;
HAnimSite1429 := HAnimSite255;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1429;
HAnimSite1430 := THAnimSiteNode.Create;
HAnimSite1430 := HAnimSite391;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1430;
HAnimSite1431 := THAnimSiteNode.Create;
HAnimSite1431 := HAnimSite578;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1431;
HAnimSite1432 := THAnimSiteNode.Create;
HAnimSite1432 := HAnimSite576;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1432;
HAnimSite1433 := THAnimSiteNode.Create;
HAnimSite1433 := HAnimSite742;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1433;
HAnimSite1434 := THAnimSiteNode.Create;
HAnimSite1434 := HAnimSite998;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1434;
HAnimSite1435 := THAnimSiteNode.Create;
HAnimSite1435 := HAnimSite114;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1435;
HAnimSite1436 := THAnimSiteNode.Create;
HAnimSite1436 := HAnimSite116;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1436;
HAnimSite1437 := THAnimSiteNode.Create;
HAnimSite1437 := HAnimSite740;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1437;
HAnimSite1438 := THAnimSiteNode.Create;
HAnimSite1438 := HAnimSite996;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1438;
HAnimSite1439 := THAnimSiteNode.Create;
HAnimSite1439 := HAnimSite718;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1439;
HAnimSite1440 := THAnimSiteNode.Create;
HAnimSite1440 := HAnimSite974;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1440;
HAnimSite1441 := THAnimSiteNode.Create;
HAnimSite1441 := HAnimSite448;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1441;
HAnimSite1442 := THAnimSiteNode.Create;
HAnimSite1442 := HAnimSite446;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1442;
HAnimSite1443 := THAnimSiteNode.Create;
HAnimSite1443 := HAnimSite193;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1443;
HAnimSite1444 := THAnimSiteNode.Create;
HAnimSite1444 := HAnimSite329;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1444;
HAnimSite1445 := THAnimSiteNode.Create;
HAnimSite1445 := HAnimSite257;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1445;
HAnimSite1446 := THAnimSiteNode.Create;
HAnimSite1446 := HAnimSite393;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1446;
HAnimSite1447 := THAnimSiteNode.Create;
HAnimSite1447 := HAnimSite496;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1447;
HAnimSite1448 := THAnimSiteNode.Create;
HAnimSite1448 := HAnimSite494;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1448;
HAnimSite1449 := THAnimSiteNode.Create;
HAnimSite1449 := HAnimSite650;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1449;
HAnimSite1450 := THAnimSiteNode.Create;
HAnimSite1450 := HAnimSite646;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1450;
HAnimSite1451 := THAnimSiteNode.Create;
HAnimSite1451 := HAnimSite104;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1451;
HAnimSite1452 := THAnimSiteNode.Create;
HAnimSite1452 := HAnimSite108;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1452;
HAnimSite1453 := THAnimSiteNode.Create;
HAnimSite1453 := HAnimSite754;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1453;
HAnimSite1454 := THAnimSiteNode.Create;
HAnimSite1454 := HAnimSite1008;
{ .AddSites }
HAnimHumanoid78.Sites := HAnimSite1454;
{ .AddChildren }
Group77.AddChildren([HAnimHumanoid78]);
{ .AddChildren }
Group76.AddChildren([Group77]);
{ .AddChildren }
Group33.AddChildren([Group76]);
TimeSensor1455 := TTimeSensorNode.Create;
TimeSensor1455.CycleInterval := 2.86;
TimeSensor1455.Loop := True;
{ .AddChildren }
Group33.AddChildren([TimeSensor1455]);
TimeSensor1456 := TTimeSensorNode.Create;
TimeSensor1456.CycleInterval := 5.72;
TimeSensor1456.Loop := True;
{ .AddChildren }
Group33.AddChildren([TimeSensor1456]);
TimeSensor1457 := TTimeSensorNode.Create;
TimeSensor1457.CycleInterval := 5.8;
TimeSensor1457.Loop := True;
{ .AddChildren }
Group33.AddChildren([TimeSensor1457]);
OrientationInterpolator1458 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1458.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1458.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,1.256),Vector4(1,0,0,2.512),Vector4(1,0,0,3.768),Vector4(1,0,0,5.024),Vector4(1,0,0,6.28)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1458]);
OrientationInterpolator1459 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1459.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1459.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,1.256),Vector4(0,1,0,2.512),Vector4(0,1,0,3.768),Vector4(0,1,0,5.024),Vector4(0,1,0,6.28)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1459]);
OrientationInterpolator1460 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1460.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1460.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.256),Vector4(0,0,1,2.512),Vector4(0,0,1,3.768),Vector4(0,0,1,5.024),Vector4(0,0,1,6.28)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1460]);
OrientationInterpolator1461 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1461.SetKey([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1461.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0.7),Vector4(0,1,0,0),Vector4(0,1,0,0),Vector4(-1,0,0,0.5),Vector4(-0.4,-1,0,0.7),Vector4(-0.4,-1,0,0.4),Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1461]);
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1461.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1461.EventValue_changed, HAnimJoint580.FdRotation);
{ .AddX3DRoute }
OrientationInterpolator1464 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1464.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1464.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.2,0.2,0.2,0.2),Vector4(-0.2,0.2,0.2,0.2),Vector4(-0.2,-0.2,0.2,0.2),Vector4(0.2,-0.2,0.2,0.2),Vector4(-0.2,0.2,-0.2,0.2),Vector4(-0.2,0.2,-0.2,0.2),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1464]);
Group33.AddRoute(TimeSensor1457.EventFraction_changed, OrientationInterpolator1464.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint664.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint656.FdRotation);
{ .AddX3DRoute }
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1468.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1468.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.2,-1,0,0.11),Vector4(0.2,-1,0,0.11),Vector4(0.1,-1,0,0.1),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1468]);
OrientationInterpolator1469 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1469.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1469.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1469]);
OrientationInterpolator1470 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1470.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1470.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.4,-0.7,-0.55,0.35),Vector4(0.4,-0.7,-0.55,0.35),Vector4(0.4,-0.7,-0.55,0.35),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1470]);
OrientationInterpolator1471 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1471.SetKey([0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1471.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.2,0,0.01,0.5),Vector4(-0.2,0,0.01,0.5),Vector4(-0.2,0,0.01,0.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1471]);
OrientationInterpolator1472 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1472.SetKey([0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1472.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0.1,-0.09,0.25),Vector4(0,0.1,-0.09,0.25),Vector4(0,0.1,-0.09,0.25),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1472]);
OrientationInterpolator1473 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1473.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1473.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.25,0.25,-1,0.125),Vector4(-0.25,0.25,-1,0.125),Vector4(-0.25,0.25,-1,0.125),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1473]);
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1474.SetKey([0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1474.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(-0.135,-0.135,1,0.357),Vector4(-0.159,-0.153,1,0.355),Vector4(-0.159,-0.153,1,0.357),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1474]);
OrientationInterpolator1475 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1475.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1475.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,-1,0.14),Vector4(0,0,-1,0.14),Vector4(0,0,-1,0.14),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1475]);
OrientationInterpolator1476 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1476.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1476.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,0.3,0.257),Vector4(0,0,0.3,0.37),Vector4(0,0,0.3,0.39),Vector4(0,0,0.3,0.31),Vector4(0,0,0.3,0.32),Vector4(0,0,0.3,0.34),Vector4(0,0,0.3,0.28),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1476]);
OrientationInterpolator1477 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1477.SetKey([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1477.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.25,0.25,-1,0.1),Vector4(0.25,0.25,-1,0.1),Vector4(0.25,0.25,-1,0.1),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1477]);
OrientationInterpolator1478 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1478.SetKey([0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1478.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.135,0.135,1,0.27),Vector4(0.135,0.135,1,0.27),Vector4(0.135,0.15,1,0.27),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1478]);
OrientationInterpolator1479 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1479.SetKey([0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1479.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.35,0.35,-0.7,0.12),Vector4(0.35,0.35,-0.9,0.12),Vector4(0.35,0.35,-0.7,0.12),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1479]);
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1480.SetKey([0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1480.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0.2,0.25,1,0.27),Vector4(0.2,0.22,1,0.27),Vector4(0.22,0.2,1,0.27),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1480]);
OrientationInterpolator1481 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1481.SetKey([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1481.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,-1,1,1),Vector4(0.5,-0.16,0.16,0.785),Vector4(0.5,-0.16,0.16,0.785),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(1,1,1,0.75),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1481]);
OrientationInterpolator1482 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1482.SetKey([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1482.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.45),Vector4(1,0,0,0.45),Vector4(1,0,0,0.45),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1482]);
OrientationInterpolator1483 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1483.SetKey([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1483.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.45),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1483]);
OrientationInterpolator1484 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1484.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1484.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.43),Vector4(0,0,1,0.44),Vector4(0,0,1,0.46),Vector4(0,0,1,0.44),Vector4(0,0,1,0.245),Vector4(0,0,1,0.24),Vector4(0,0,1,0.21),Vector4(0,0,1,0.24),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1484]);
OrientationInterpolator1485 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1485.SetKey([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1485.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0.37),Vector4(0,0,1,0.38),Vector4(0,0,1,0.39),Vector4(0,0,1,0.38),Vector4(0,0,1,0.27),Vector4(0,0,1,0.28),Vector4(0,0,1,0.27),Vector4(0,0,1,0.28),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1485]);
Group33.AddRoute(OrientationInterpolator1468.EventValue_changed, HAnimJoint922.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1469.EventValue_changed, HAnimJoint932.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1470.EventValue_changed, HAnimJoint948.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1471.EventValue_changed, HAnimJoint978.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1472.EventValue_changed, HAnimJoint1000.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1481.EventValue_changed, HAnimJoint1010.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1482.EventValue_changed, HAnimJoint1018.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1483.EventValue_changed, HAnimJoint1026.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1473.EventValue_changed, HAnimJoint1038.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1474.EventValue_changed, HAnimJoint1048.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1056.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1064.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1475.EventValue_changed, HAnimJoint1074.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1476.EventValue_changed, HAnimJoint1082.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1090.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1098.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1477.EventValue_changed, HAnimJoint1110.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1478.EventValue_changed, HAnimJoint1118.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1126.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1134.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1479.EventValue_changed, HAnimJoint1144.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1480.EventValue_changed, HAnimJoint1154.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1162.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1170.FdRotation);
{ .AddX3DRoute }
OrientationInterpolator1510 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1510.SetKey([0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1510.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,-1,0.1),Vector4(0,0,-1,0.22),Vector4(0,0.5,-1,0.27),Vector4(0,0,-1,0.1),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1510]);
OrientationInterpolator1511 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1511.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1511.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,-0.05),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1511]);
OrientationInterpolator1512 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1512.SetKey([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1512.SetKeyValue([Vector4(1,0,0,0),Vector4(0,0,-1,1.66),Vector4(-0.25,0,-1,1.76),Vector4(0,0,-1,1.256),Vector4(0,0,-1,0.05),Vector4(1,0,0,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1512]);
OrientationInterpolator1513 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1513.SetKey([0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1513.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.55),Vector4(-1,-0.25,0,2.55),Vector4(-1,-0.25,0,2.55),Vector4(-1,-0.25,0,2.55),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1513]);
OrientationInterpolator1514 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1514.SetKey([0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
OrientationInterpolator1514.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,-0.55),Vector4(0,0,1,0),Vector4(0,1,0,1.55),Vector4(0,0,-1,1.55),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1514]);
OrientationInterpolator1515 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1515.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1515.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,0.01,0.25),Vector4(0,0,-0.01,0.03),Vector4(0,0,0.01,0.05),Vector4(0,0,0.01,0.01),Vector4(0,0,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1515]);
OrientationInterpolator1516 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1516.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1516.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1),Vector4(1,0,0,0.4),Vector4(1,0,0,0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1516]);
OrientationInterpolator1517 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1517.SetKey([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1517.SetKeyValue([Vector4(0,0,1,0),Vector4(1,1,0,0.3),Vector4(1,1,0,0.3),Vector4(1,1,0,0.6),Vector4(1,1,0,0.3),Vector4(0,1,1,0)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1517]);
OrientationInterpolator1518 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1518.SetKey([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1518.SetKeyValue([Vector4(0.25,0,1,1.76),Vector4(0,0,1,1.66),Vector4(0.25,0,1,1.76),Vector4(0,0,1,1.256),Vector4(0,0,1,0.05),Vector4(0.25,0,1,1.76)]);
{ .AddChildren }
Group33.AddChildren([OrientationInterpolator1518]);
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1510.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1511.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1512.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1513.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1514.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1515.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1516.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1456.EventFraction_changed, OrientationInterpolator1517.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1510.EventValue_changed, HAnimJoint922.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1511.EventValue_changed, HAnimJoint932.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1512.EventValue_changed, HAnimJoint948.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1513.EventValue_changed, HAnimJoint978.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1514.EventValue_changed, HAnimJoint1000.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1038.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1048.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1056.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1064.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1074.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1082.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1090.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1098.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1110.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1118.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1126.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1134.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1144.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1154.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1162.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1515.EventValue_changed, HAnimJoint1170.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1516.EventValue_changed, HAnimJoint1010.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1517.EventValue_changed, HAnimJoint1018.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1517.EventValue_changed, HAnimJoint1026.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1518.EventValue_changed, HAnimJoint698.FdRotation);
{ .AddX3DRoute }
Group1552 := TGroupNode.Create;
PositionInterpolator1553 := TPositionInterpolatorNode.Create;
PositionInterpolator1553.SetKey([0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1553.SetKeyValue([Vector3(0,-0.0093,0),Vector3(0,-0.0039,0),Vector3(0,-0.0088,0),Vector3(0,-0.0149,0),Vector3(0,-0.0264,0),Vector3(0,-0.0393,0),Vector3(0,-0.0502,0),Vector3(0,-0.0747,0),Vector3(0,-0.0273,0),Vector3(0,-0.0161,0),Vector3(0,-0.0113,0),Vector3(0,-0.0058,0),Vector3(0,-0.002,0),Vector3(0,-0.0026,0),Vector3(0,-0.0143,0),Vector3(0,-0.038,0),Vector3(0,-0.0565,0),Vector3(0,-0.045,0),Vector3(0,-0.0093,0)]);
{ .AddChildren }
Group1552.AddChildren([PositionInterpolator1553]);
OrientationInterpolator1554 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1554.SetKey([0,1]);
OrientationInterpolator1554.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1554]);
OrientationInterpolator1555 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1555.SetKey([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1555.SetKeyValue([Vector4(-0.873,0.0609,0.484,0.2865),Vector4(0.9963,-0.0106,0.0848,0.2488),Vector4(0.9965,0.0159,-0.0822,0.3836),Vector4(-0.7018,-0.0322,-0.7117,0.1289),Vector4(-1,0,0,0.5518),Vector4(-0.9964,0.0223,0.0817,0.5351),Vector4(-0.9809,0.0491,0.1881,0.5204),Vector4(-0.873,0.0609,0.484,0.2865)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1555]);
OrientationInterpolator1556 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1556.SetKey([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1556.SetKeyValue([Vector4(1,0,0,0.3226),Vector4(1,0,0,0.1556),Vector4(1,0,0,0.0868),Vector4(1,0,0,0.8751),Vector4(1,0,0,1.131),Vector4(1,0,0,0.0996),Vector4(1,0,0,0.3942),Vector4(1,0,0,0.3226)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1556]);
OrientationInterpolator1557 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1557.SetKey([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1557.SetKeyValue([Vector4(-1,0,0,0.0671),Vector4(-1,0,0,0.2152),Vector4(-1,0,0,0.3184),Vector4(-1,0,0,0.4717),Vector4(-1,0,0,0.2912),Vector4(1,0,0,0.2222),Vector4(-1,0,0,0.0671)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1557]);
OrientationInterpolator1558 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1558.SetKey([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1558.SetKeyValue([Vector4(0,0,1,0),Vector4(-1,0,0,0.3533),Vector4(-1,0,0,0.1072),Vector4(1,0,0,0.4),Vector4(1,0,0,0.127),Vector4(-1,0,0,0.018),Vector4(-1,0,0,0.058),Vector4(-1,0,0,0.24),Vector4(-1,0,0,0.35),Vector4(-1,0,0,0.33),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1558]);
OrientationInterpolator1559 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1559.SetKey([0,0.3,1]);
OrientationInterpolator1559.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1559]);
OrientationInterpolator1560 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1560.SetKey([0,0.5,1]);
OrientationInterpolator1560.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,-0.2),Vector4(1,0,0,0)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1560]);
OrientationInterpolator1561 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1561.SetKey([0,0.2,0.4,0.8,1]);
OrientationInterpolator1561.SetKeyValue([Vector4(-1,0,0,0.3),Vector4(-1,0,0,0.15),Vector4(1,0,0,0.3),Vector4(0,0,1,0),Vector4(-1,0,0,0.3)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1561]);
OrientationInterpolator1562 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1562.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1562.SetKeyValue([Vector4(-0.5831,0.0351,0.8116,0.1481),Vector4(-0.995,0.023,0.0967,0.4683),Vector4(-1,0.0019,0.008,0.4732),Vector4(-0.998,-0.0158,-0.061,0.5079),Vector4(-0.9911,-0.0354,-0.1286,0.5419),Vector4(-0.9131,-0.0624,-0.403,0.3361),Vector4(-0.4306,-0.0796,-0.899,0.0704),Vector4(1,0,0,0.2571),Vector4(0.9891,-0.0281,0.1444,0.3879),Vector4(-0.5831,0.0351,0.8116,0.1481)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1562]);
OrientationInterpolator1563 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1563.SetKey([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1563.SetKeyValue([Vector4(1,0,0,0.8573),Vector4(1,0,0,0.8926),Vector4(1,0,0,0.5351),Vector4(1,0,0,0.1756),Vector4(1,0,0,0.1194),Vector4(1,0,0,0.3153),Vector4(1,0,0,0.0935),Vector4(1,0,0,0.0856),Vector4(1,0,0,0.2475),Vector4(1,0,0,0.8573)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1563]);
OrientationInterpolator1564 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1564.SetKey([0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1564.SetKeyValue([Vector4(-1,0,0,0.1),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(1,0,0,0.1),Vector4(0,0,1,0),Vector4(1,0,0,0.1),Vector4(1,0,0,0.25)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1564]);
OrientationInterpolator1565 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1565.SetKey([0,0.22,1]);
OrientationInterpolator1565.SetKeyValue([Vector4(1,0,0,-0.2),Vector4(0,0,1,0),Vector4(1,0,0,-0.2)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1565]);
OrientationInterpolator1566 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1566.SetKey([0,0.2,0.4,0.8,1]);
OrientationInterpolator1566.SetKeyValue([Vector4(-1,0,0,0.15),Vector4(0,0,1,0),Vector4(1,0,0,0.3),Vector4(-1,0,0,0.3),Vector4(-1,0,0,0.15)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1566]);
OrientationInterpolator1567 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1567.SetKey([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1567.SetKeyValue([Vector4(0,1,0,0.0826),Vector4(-0.0197,-0.5974,0.8017,0.0823),Vector4(0.0093,-0.9648,0.2627,0.1734),Vector4(-0.0124,0.9549,-0.2968,0.0873),Vector4(-0.0081,0.9691,-0.2463,0.158),Vector4(0,1,0,0.0826)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1567]);
OrientationInterpolator1568 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1568.SetKey([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1568.SetKeyValue([Vector4(0,-1,0,0.0864),Vector4(0,1,0,0.1825),Vector4(0,1,0,0.1505),Vector4(0,1,0,0.1053),Vector4(0,1,0,0.0439),Vector4(0,-1,0,0.0312),Vector4(0,-1,0,0.0794),Vector4(0,-1,0,0.1616),Vector4(0,-1,0,0.155),Vector4(0,-1,0,0.0864)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1568]);
OrientationInterpolator1569 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1569.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1569.SetKeyValue([Vector4(1,0,0.4,0.12),Vector4(-1,0,0.4,0.186),Vector4(1,0,0.1,0.336),Vector4(1,0,0.4,0.12)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1569]);
OrientationInterpolator1570 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1570.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1570.SetKeyValue([Vector4(-1,0,0,0.066),Vector4(-1,0,0,0.488),Vector4(-1,0,0,0.0177),Vector4(-1,0,0,0.066)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1570]);
OrientationInterpolator1571 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1571.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1571.SetKeyValue([Vector4(0,-1,0,0.461),Vector4(-0.3302,-0.9275,0.1755,0.5388),Vector4(0.0328,-0.9993,-0.0172,0.492),Vector4(0,-1,0,0.4611)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1571]);
OrientationInterpolator1572 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1572.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1572.SetKeyValue([Vector4(-1,0,-1,0.092),Vector4(1,0,-0.2,0.3197),Vector4(-1,0,-0.5,0.1564),Vector4(-1,0,-1,0.092)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1572]);
OrientationInterpolator1573 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1573.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1573.SetKeyValue([Vector4(-1,0,0,0.4115),Vector4(-1,0,0,0.0925),Vector4(-1,0,0,0.5726),Vector4(-1,0,0,0.4115)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1573]);
OrientationInterpolator1574 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1574.SetKey([0,0.375,0.9167,1]);
OrientationInterpolator1574.SetKeyValue([Vector4(-0.8129,0.4759,-0.3357,0.1346),Vector4(0.1533,-0.9878,0.0258,0.3902),Vector4(-0.5701,0.7604,-0.311,0.366),Vector4(-0.8129,0.4759,-0.3357,0.1346)]);
{ .AddChildren }
Group1552.AddChildren([OrientationInterpolator1574]);
{ .AddChildren }
Group33.AddChildren([Group1552]);
Group33.AddRoute(TimeSensor1455.EventFraction_changed, PositionInterpolator1553.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1554.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1555.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1556.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1557.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1559.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1560.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1561.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1562.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1563.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1558.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1564.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1565.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1566.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1567.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1568.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1569.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1570.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(TimeSensor1455.EventFraction_changed, OrientationInterpolator1571.EventSet_fraction);
{ .AddX3DRoute }
Group33.AddRoute(PositionInterpolator1553.EventValue_changed, HAnimJoint81.FdTranslation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1554.EventValue_changed, HAnimJoint81.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1555.EventValue_changed, HAnimJoint123.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1556.EventValue_changed, HAnimJoint149.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1557.EventValue_changed, HAnimJoint177.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1560.EventValue_changed, HAnimJoint211.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1559.EventValue_changed, HAnimJoint197.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1561.EventValue_changed, HAnimJoint229.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1562.EventValue_changed, HAnimJoint259.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1563.EventValue_changed, HAnimJoint285.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1558.EventValue_changed, HAnimJoint313.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1564.EventValue_changed, HAnimJoint333.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1565.EventValue_changed, HAnimJoint347.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1566.EventValue_changed, HAnimJoint365.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1567.EventValue_changed, HAnimJoint395.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1568.EventValue_changed, HAnimJoint628.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1569.EventValue_changed, HAnimJoint698.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1570.EventValue_changed, HAnimJoint722.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1571.EventValue_changed, HAnimJoint744.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1572.EventValue_changed, HAnimJoint948.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1573.EventValue_changed, HAnimJoint978.FdRotation);
{ .AddX3DRoute }
Group33.AddRoute(OrientationInterpolator1574.EventValue_changed, HAnimJoint1000.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group33]);
Result := X3D0;
end;
