unit Jin20fSegmented;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateJin20fSegmented: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group4: TGroupNode;
WorldInfo5: TWorldInfoNode;
Transform6: TTransformNode;
Shape7: TShapeNode;
IndexedLineSet8: TIndexedLineSetNode;
Color9: TColorNode;
Coordinate10: TCoordinateNode;
HAnimHumanoid11: THAnimHumanoidNode;
HAnimJoint12: THAnimJointNode;
HAnimSegment13: THAnimSegmentNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
HAnimJoint16: THAnimJointNode;
HAnimSegment17: THAnimSegmentNode;
HAnimSite18: THAnimSiteNode;
TouchSensor19: TTouchSensorNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
IndexedFaceSet23: TIndexedFaceSetNode;
ColorRGBA24: TColorRGBANode;
Coordinate25: TCoordinateNode;
Billboard26: TBillboardNode;
Shape27: TShapeNode;
Text28: TTextNode;
FontStyle29: TFontStyleNode;
HAnimSite30: THAnimSiteNode;
TouchSensor31: TTouchSensorNode;
Shape32: TShapeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
IndexedFaceSet35: TIndexedFaceSetNode;
ColorRGBA36: TColorRGBANode;
Coordinate37: TCoordinateNode;
Billboard38: TBillboardNode;
Shape39: TShapeNode;
Text40: TTextNode;
FontStyle41: TFontStyleNode;
HAnimSite42: THAnimSiteNode;
TouchSensor43: TTouchSensorNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
IndexedFaceSet47: TIndexedFaceSetNode;
ColorRGBA48: TColorRGBANode;
Coordinate49: TCoordinateNode;
Billboard50: TBillboardNode;
Shape51: TShapeNode;
Text52: TTextNode;
FontStyle53: TFontStyleNode;
HAnimSite54: THAnimSiteNode;
TouchSensor55: TTouchSensorNode;
Shape56: TShapeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
IndexedFaceSet59: TIndexedFaceSetNode;
ColorRGBA60: TColorRGBANode;
Coordinate61: TCoordinateNode;
Billboard62: TBillboardNode;
Shape63: TShapeNode;
Text64: TTextNode;
FontStyle65: TFontStyleNode;
HAnimSite66: THAnimSiteNode;
TouchSensor67: TTouchSensorNode;
Shape68: TShapeNode;
Appearance69: TAppearanceNode;
Material70: TMaterialNode;
IndexedFaceSet71: TIndexedFaceSetNode;
ColorRGBA72: TColorRGBANode;
Coordinate73: TCoordinateNode;
Billboard74: TBillboardNode;
Shape75: TShapeNode;
Text76: TTextNode;
FontStyle77: TFontStyleNode;
HAnimSite78: THAnimSiteNode;
TouchSensor79: TTouchSensorNode;
Shape80: TShapeNode;
Appearance81: TAppearanceNode;
Material82: TMaterialNode;
IndexedFaceSet83: TIndexedFaceSetNode;
ColorRGBA84: TColorRGBANode;
Coordinate85: TCoordinateNode;
Billboard86: TBillboardNode;
Shape87: TShapeNode;
Text88: TTextNode;
FontStyle89: TFontStyleNode;
HAnimSite90: THAnimSiteNode;
TouchSensor91: TTouchSensorNode;
Shape92: TShapeNode;
Appearance93: TAppearanceNode;
Material94: TMaterialNode;
IndexedFaceSet95: TIndexedFaceSetNode;
ColorRGBA96: TColorRGBANode;
Coordinate97: TCoordinateNode;
Billboard98: TBillboardNode;
Shape99: TShapeNode;
Text100: TTextNode;
FontStyle101: TFontStyleNode;
HAnimSite102: THAnimSiteNode;
TouchSensor103: TTouchSensorNode;
Shape104: TShapeNode;
Appearance105: TAppearanceNode;
Material106: TMaterialNode;
IndexedFaceSet107: TIndexedFaceSetNode;
ColorRGBA108: TColorRGBANode;
Coordinate109: TCoordinateNode;
Billboard110: TBillboardNode;
Shape111: TShapeNode;
Text112: TTextNode;
FontStyle113: TFontStyleNode;
HAnimSite114: THAnimSiteNode;
TouchSensor115: TTouchSensorNode;
Shape116: TShapeNode;
Appearance117: TAppearanceNode;
Material118: TMaterialNode;
IndexedFaceSet119: TIndexedFaceSetNode;
ColorRGBA120: TColorRGBANode;
Coordinate121: TCoordinateNode;
Billboard122: TBillboardNode;
Shape123: TShapeNode;
Text124: TTextNode;
FontStyle125: TFontStyleNode;
HAnimSite126: THAnimSiteNode;
TouchSensor127: TTouchSensorNode;
Shape128: TShapeNode;
Appearance129: TAppearanceNode;
Material130: TMaterialNode;
IndexedFaceSet131: TIndexedFaceSetNode;
ColorRGBA132: TColorRGBANode;
Coordinate133: TCoordinateNode;
Billboard134: TBillboardNode;
Shape135: TShapeNode;
Text136: TTextNode;
FontStyle137: TFontStyleNode;
Shape138: TShapeNode;
LineSet139: TLineSetNode;
ColorRGBA140: TColorRGBANode;
Coordinate141: TCoordinateNode;
HAnimJoint142: THAnimJointNode;
HAnimSegment143: THAnimSegmentNode;
HAnimSite144: THAnimSiteNode;
TouchSensor145: TTouchSensorNode;
Shape146: TShapeNode;
Appearance147: TAppearanceNode;
Material148: TMaterialNode;
IndexedFaceSet149: TIndexedFaceSetNode;
ColorRGBA150: TColorRGBANode;
Coordinate151: TCoordinateNode;
Billboard152: TBillboardNode;
Shape153: TShapeNode;
Text154: TTextNode;
FontStyle155: TFontStyleNode;
HAnimSite156: THAnimSiteNode;
TouchSensor157: TTouchSensorNode;
Shape158: TShapeNode;
Appearance159: TAppearanceNode;
Material160: TMaterialNode;
IndexedFaceSet161: TIndexedFaceSetNode;
ColorRGBA162: TColorRGBANode;
Coordinate163: TCoordinateNode;
Billboard164: TBillboardNode;
Shape165: TShapeNode;
Text166: TTextNode;
FontStyle167: TFontStyleNode;
HAnimSite168: THAnimSiteNode;
TouchSensor169: TTouchSensorNode;
Shape170: TShapeNode;
Appearance171: TAppearanceNode;
Material172: TMaterialNode;
IndexedFaceSet173: TIndexedFaceSetNode;
ColorRGBA174: TColorRGBANode;
Coordinate175: TCoordinateNode;
Billboard176: TBillboardNode;
Shape177: TShapeNode;
Text178: TTextNode;
FontStyle179: TFontStyleNode;
HAnimSite180: THAnimSiteNode;
TouchSensor181: TTouchSensorNode;
Shape182: TShapeNode;
Appearance183: TAppearanceNode;
Material184: TMaterialNode;
IndexedFaceSet185: TIndexedFaceSetNode;
ColorRGBA186: TColorRGBANode;
Coordinate187: TCoordinateNode;
Billboard188: TBillboardNode;
Shape189: TShapeNode;
Text190: TTextNode;
FontStyle191: TFontStyleNode;
Shape192: TShapeNode;
LineSet193: TLineSetNode;
ColorRGBA194: TColorRGBANode;
Coordinate195: TCoordinateNode;
HAnimJoint196: THAnimJointNode;
HAnimSegment197: THAnimSegmentNode;
HAnimSite198: THAnimSiteNode;
TouchSensor199: TTouchSensorNode;
Shape200: TShapeNode;
Appearance201: TAppearanceNode;
Material202: TMaterialNode;
IndexedFaceSet203: TIndexedFaceSetNode;
ColorRGBA204: TColorRGBANode;
Coordinate205: TCoordinateNode;
Billboard206: TBillboardNode;
Shape207: TShapeNode;
Text208: TTextNode;
FontStyle209: TFontStyleNode;
HAnimSite210: THAnimSiteNode;
TouchSensor211: TTouchSensorNode;
Shape212: TShapeNode;
Appearance213: TAppearanceNode;
Material214: TMaterialNode;
IndexedFaceSet215: TIndexedFaceSetNode;
ColorRGBA216: TColorRGBANode;
Coordinate217: TCoordinateNode;
Billboard218: TBillboardNode;
Shape219: TShapeNode;
Text220: TTextNode;
FontStyle221: TFontStyleNode;
HAnimSite222: THAnimSiteNode;
TouchSensor223: TTouchSensorNode;
Shape224: TShapeNode;
Appearance225: TAppearanceNode;
Material226: TMaterialNode;
IndexedFaceSet227: TIndexedFaceSetNode;
ColorRGBA228: TColorRGBANode;
Coordinate229: TCoordinateNode;
Billboard230: TBillboardNode;
Shape231: TShapeNode;
Text232: TTextNode;
FontStyle233: TFontStyleNode;
Shape234: TShapeNode;
LineSet235: TLineSetNode;
ColorRGBA236: TColorRGBANode;
Coordinate237: TCoordinateNode;
HAnimJoint238: THAnimJointNode;
HAnimSegment239: THAnimSegmentNode;
HAnimSite240: THAnimSiteNode;
TouchSensor241: TTouchSensorNode;
Shape242: TShapeNode;
Appearance243: TAppearanceNode;
Material244: TMaterialNode;
IndexedFaceSet245: TIndexedFaceSetNode;
ColorRGBA246: TColorRGBANode;
Coordinate247: TCoordinateNode;
Billboard248: TBillboardNode;
Shape249: TShapeNode;
Text250: TTextNode;
FontStyle251: TFontStyleNode;
HAnimSite252: THAnimSiteNode;
TouchSensor253: TTouchSensorNode;
Shape254: TShapeNode;
Appearance255: TAppearanceNode;
Material256: TMaterialNode;
IndexedFaceSet257: TIndexedFaceSetNode;
ColorRGBA258: TColorRGBANode;
Coordinate259: TCoordinateNode;
Billboard260: TBillboardNode;
Shape261: TShapeNode;
Text262: TTextNode;
FontStyle263: TFontStyleNode;
Shape264: TShapeNode;
LineSet265: TLineSetNode;
ColorRGBA266: TColorRGBANode;
Coordinate267: TCoordinateNode;
HAnimJoint268: THAnimJointNode;
HAnimSegment269: THAnimSegmentNode;
Shape270: TShapeNode;
LineSet271: TLineSetNode;
ColorRGBA272: TColorRGBANode;
Coordinate273: TCoordinateNode;
HAnimJoint274: THAnimJointNode;
HAnimSegment275: THAnimSegmentNode;
Shape276: TShapeNode;
LineSet277: TLineSetNode;
ColorRGBA278: TColorRGBANode;
Coordinate279: TCoordinateNode;
HAnimJoint280: THAnimJointNode;
HAnimSegment281: THAnimSegmentNode;
Shape282: TShapeNode;
LineSet283: TLineSetNode;
ColorRGBA284: TColorRGBANode;
Coordinate285: TCoordinateNode;
HAnimJoint286: THAnimJointNode;
HAnimSegment287: THAnimSegmentNode;
HAnimSite288: THAnimSiteNode;
TouchSensor289: TTouchSensorNode;
Shape290: TShapeNode;
Appearance291: TAppearanceNode;
Material292: TMaterialNode;
IndexedFaceSet293: TIndexedFaceSetNode;
ColorRGBA294: TColorRGBANode;
Coordinate295: TCoordinateNode;
Billboard296: TBillboardNode;
Shape297: TShapeNode;
Text298: TTextNode;
FontStyle299: TFontStyleNode;
Shape300: TShapeNode;
LineSet301: TLineSetNode;
ColorRGBA302: TColorRGBANode;
Coordinate303: TCoordinateNode;
HAnimJoint304: THAnimJointNode;
HAnimSegment305: THAnimSegmentNode;
HAnimSite306: THAnimSiteNode;
TouchSensor307: TTouchSensorNode;
Shape308: TShapeNode;
Appearance309: TAppearanceNode;
Material310: TMaterialNode;
IndexedFaceSet311: TIndexedFaceSetNode;
ColorRGBA312: TColorRGBANode;
Coordinate313: TCoordinateNode;
Billboard314: TBillboardNode;
Shape315: TShapeNode;
Text316: TTextNode;
FontStyle317: TFontStyleNode;
Shape318: TShapeNode;
LineSet319: TLineSetNode;
ColorRGBA320: TColorRGBANode;
Coordinate321: TCoordinateNode;
HAnimJoint322: THAnimJointNode;
HAnimSegment323: THAnimSegmentNode;
Shape324: TShapeNode;
LineSet325: TLineSetNode;
ColorRGBA326: TColorRGBANode;
Coordinate327: TCoordinateNode;
HAnimJoint328: THAnimJointNode;
HAnimSegment329: THAnimSegmentNode;
Shape330: TShapeNode;
LineSet331: TLineSetNode;
ColorRGBA332: TColorRGBANode;
Coordinate333: TCoordinateNode;
HAnimJoint334: THAnimJointNode;
HAnimSegment335: THAnimSegmentNode;
Shape336: TShapeNode;
LineSet337: TLineSetNode;
ColorRGBA338: TColorRGBANode;
Coordinate339: TCoordinateNode;
HAnimJoint340: THAnimJointNode;
HAnimSegment341: THAnimSegmentNode;
Shape342: TShapeNode;
LineSet343: TLineSetNode;
ColorRGBA344: TColorRGBANode;
Coordinate345: TCoordinateNode;
HAnimJoint346: THAnimJointNode;
HAnimSegment347: THAnimSegmentNode;
HAnimSite348: THAnimSiteNode;
TouchSensor349: TTouchSensorNode;
Shape350: TShapeNode;
Appearance351: TAppearanceNode;
Material352: TMaterialNode;
IndexedFaceSet353: TIndexedFaceSetNode;
ColorRGBA354: TColorRGBANode;
Coordinate355: TCoordinateNode;
Billboard356: TBillboardNode;
Shape357: TShapeNode;
Text358: TTextNode;
FontStyle359: TFontStyleNode;
Shape360: TShapeNode;
LineSet361: TLineSetNode;
ColorRGBA362: TColorRGBANode;
Coordinate363: TCoordinateNode;
HAnimJoint364: THAnimJointNode;
HAnimSegment365: THAnimSegmentNode;
Shape366: TShapeNode;
LineSet367: TLineSetNode;
ColorRGBA368: TColorRGBANode;
Coordinate369: TCoordinateNode;
HAnimJoint370: THAnimJointNode;
HAnimSegment371: THAnimSegmentNode;
Shape372: TShapeNode;
LineSet373: TLineSetNode;
ColorRGBA374: TColorRGBANode;
Coordinate375: TCoordinateNode;
HAnimJoint376: THAnimJointNode;
HAnimSegment377: THAnimSegmentNode;
Shape378: TShapeNode;
LineSet379: TLineSetNode;
ColorRGBA380: TColorRGBANode;
Coordinate381: TCoordinateNode;
HAnimJoint382: THAnimJointNode;
HAnimSegment383: THAnimSegmentNode;
Shape384: TShapeNode;
LineSet385: TLineSetNode;
ColorRGBA386: TColorRGBANode;
Coordinate387: TCoordinateNode;
HAnimJoint388: THAnimJointNode;
HAnimSegment389: THAnimSegmentNode;
HAnimSite390: THAnimSiteNode;
TouchSensor391: TTouchSensorNode;
Shape392: TShapeNode;
Appearance393: TAppearanceNode;
Material394: TMaterialNode;
IndexedFaceSet395: TIndexedFaceSetNode;
ColorRGBA396: TColorRGBANode;
Coordinate397: TCoordinateNode;
Billboard398: TBillboardNode;
Shape399: TShapeNode;
Text400: TTextNode;
FontStyle401: TFontStyleNode;
Shape402: TShapeNode;
LineSet403: TLineSetNode;
ColorRGBA404: TColorRGBANode;
Coordinate405: TCoordinateNode;
HAnimJoint406: THAnimJointNode;
HAnimSegment407: THAnimSegmentNode;
Shape408: TShapeNode;
LineSet409: TLineSetNode;
ColorRGBA410: TColorRGBANode;
Coordinate411: TCoordinateNode;
HAnimJoint412: THAnimJointNode;
HAnimSegment413: THAnimSegmentNode;
Shape414: TShapeNode;
LineSet415: TLineSetNode;
ColorRGBA416: TColorRGBANode;
Coordinate417: TCoordinateNode;
HAnimJoint418: THAnimJointNode;
HAnimSegment419: THAnimSegmentNode;
Shape420: TShapeNode;
LineSet421: TLineSetNode;
ColorRGBA422: TColorRGBANode;
Coordinate423: TCoordinateNode;
HAnimJoint424: THAnimJointNode;
HAnimSegment425: THAnimSegmentNode;
Shape426: TShapeNode;
LineSet427: TLineSetNode;
ColorRGBA428: TColorRGBANode;
Coordinate429: TCoordinateNode;
HAnimJoint430: THAnimJointNode;
HAnimSegment431: THAnimSegmentNode;
Shape432: TShapeNode;
LineSet433: TLineSetNode;
ColorRGBA434: TColorRGBANode;
Coordinate435: TCoordinateNode;
HAnimJoint436: THAnimJointNode;
HAnimSegment437: THAnimSegmentNode;
HAnimSite438: THAnimSiteNode;
TouchSensor439: TTouchSensorNode;
Shape440: TShapeNode;
Appearance441: TAppearanceNode;
Material442: TMaterialNode;
IndexedFaceSet443: TIndexedFaceSetNode;
ColorRGBA444: TColorRGBANode;
Coordinate445: TCoordinateNode;
Billboard446: TBillboardNode;
Shape447: TShapeNode;
Text448: TTextNode;
FontStyle449: TFontStyleNode;
Shape450: TShapeNode;
LineSet451: TLineSetNode;
ColorRGBA452: TColorRGBANode;
Coordinate453: TCoordinateNode;
HAnimJoint454: THAnimJointNode;
HAnimSegment455: THAnimSegmentNode;
Shape456: TShapeNode;
LineSet457: TLineSetNode;
ColorRGBA458: TColorRGBANode;
Coordinate459: TCoordinateNode;
HAnimJoint460: THAnimJointNode;
HAnimSegment461: THAnimSegmentNode;
Shape462: TShapeNode;
LineSet463: TLineSetNode;
ColorRGBA464: TColorRGBANode;
Coordinate465: TCoordinateNode;
HAnimJoint466: THAnimJointNode;
HAnimSegment467: THAnimSegmentNode;
HAnimSite468: THAnimSiteNode;
TouchSensor469: TTouchSensorNode;
Shape470: TShapeNode;
Appearance471: TAppearanceNode;
Material472: TMaterialNode;
IndexedFaceSet473: TIndexedFaceSetNode;
ColorRGBA474: TColorRGBANode;
Coordinate475: TCoordinateNode;
Billboard476: TBillboardNode;
Shape477: TShapeNode;
Text478: TTextNode;
FontStyle479: TFontStyleNode;
Shape480: TShapeNode;
LineSet481: TLineSetNode;
ColorRGBA482: TColorRGBANode;
Coordinate483: TCoordinateNode;
HAnimJoint484: THAnimJointNode;
HAnimSegment485: THAnimSegmentNode;
HAnimSite486: THAnimSiteNode;
TouchSensor487: TTouchSensorNode;
Shape488: TShapeNode;
Appearance489: TAppearanceNode;
Material490: TMaterialNode;
IndexedFaceSet491: TIndexedFaceSetNode;
ColorRGBA492: TColorRGBANode;
Coordinate493: TCoordinateNode;
Billboard494: TBillboardNode;
Shape495: TShapeNode;
Text496: TTextNode;
FontStyle497: TFontStyleNode;
Shape498: TShapeNode;
LineSet499: TLineSetNode;
ColorRGBA500: TColorRGBANode;
Coordinate501: TCoordinateNode;
HAnimJoint502: THAnimJointNode;
HAnimSegment503: THAnimSegmentNode;
HAnimSite504: THAnimSiteNode;
TouchSensor505: TTouchSensorNode;
Shape506: TShapeNode;
Appearance507: TAppearanceNode;
Material508: TMaterialNode;
IndexedFaceSet509: TIndexedFaceSetNode;
ColorRGBA510: TColorRGBANode;
Coordinate511: TCoordinateNode;
Billboard512: TBillboardNode;
Shape513: TShapeNode;
Text514: TTextNode;
FontStyle515: TFontStyleNode;
HAnimSite516: THAnimSiteNode;
TouchSensor517: TTouchSensorNode;
Shape518: TShapeNode;
Appearance519: TAppearanceNode;
Material520: TMaterialNode;
IndexedFaceSet521: TIndexedFaceSetNode;
ColorRGBA522: TColorRGBANode;
Coordinate523: TCoordinateNode;
Billboard524: TBillboardNode;
Shape525: TShapeNode;
Text526: TTextNode;
FontStyle527: TFontStyleNode;
HAnimSite528: THAnimSiteNode;
TouchSensor529: TTouchSensorNode;
Shape530: TShapeNode;
Appearance531: TAppearanceNode;
Material532: TMaterialNode;
IndexedFaceSet533: TIndexedFaceSetNode;
ColorRGBA534: TColorRGBANode;
Coordinate535: TCoordinateNode;
Billboard536: TBillboardNode;
Shape537: TShapeNode;
Text538: TTextNode;
FontStyle539: TFontStyleNode;
HAnimSite540: THAnimSiteNode;
TouchSensor541: TTouchSensorNode;
Shape542: TShapeNode;
Appearance543: TAppearanceNode;
Material544: TMaterialNode;
IndexedFaceSet545: TIndexedFaceSetNode;
ColorRGBA546: TColorRGBANode;
Coordinate547: TCoordinateNode;
Billboard548: TBillboardNode;
Shape549: TShapeNode;
Text550: TTextNode;
FontStyle551: TFontStyleNode;
Shape552: TShapeNode;
LineSet553: TLineSetNode;
ColorRGBA554: TColorRGBANode;
Coordinate555: TCoordinateNode;
HAnimJoint556: THAnimJointNode;
HAnimSegment557: THAnimSegmentNode;
HAnimSite558: THAnimSiteNode;
TouchSensor559: TTouchSensorNode;
Shape560: TShapeNode;
Appearance561: TAppearanceNode;
Material562: TMaterialNode;
IndexedFaceSet563: TIndexedFaceSetNode;
ColorRGBA564: TColorRGBANode;
Coordinate565: TCoordinateNode;
Billboard566: TBillboardNode;
Shape567: TShapeNode;
Text568: TTextNode;
FontStyle569: TFontStyleNode;
HAnimSite570: THAnimSiteNode;
TouchSensor571: TTouchSensorNode;
Shape572: TShapeNode;
Appearance573: TAppearanceNode;
Material574: TMaterialNode;
IndexedFaceSet575: TIndexedFaceSetNode;
ColorRGBA576: TColorRGBANode;
Coordinate577: TCoordinateNode;
Billboard578: TBillboardNode;
Shape579: TShapeNode;
Text580: TTextNode;
FontStyle581: TFontStyleNode;
HAnimSite582: THAnimSiteNode;
TouchSensor583: TTouchSensorNode;
Shape584: TShapeNode;
Appearance585: TAppearanceNode;
Material586: TMaterialNode;
IndexedFaceSet587: TIndexedFaceSetNode;
ColorRGBA588: TColorRGBANode;
Coordinate589: TCoordinateNode;
Billboard590: TBillboardNode;
Shape591: TShapeNode;
Text592: TTextNode;
FontStyle593: TFontStyleNode;
Shape594: TShapeNode;
LineSet595: TLineSetNode;
ColorRGBA596: TColorRGBANode;
Coordinate597: TCoordinateNode;
HAnimJoint598: THAnimJointNode;
HAnimSegment599: THAnimSegmentNode;
HAnimSite600: THAnimSiteNode;
TouchSensor601: TTouchSensorNode;
Shape602: TShapeNode;
Appearance603: TAppearanceNode;
Material604: TMaterialNode;
IndexedFaceSet605: TIndexedFaceSetNode;
ColorRGBA606: TColorRGBANode;
Coordinate607: TCoordinateNode;
Billboard608: TBillboardNode;
Shape609: TShapeNode;
Text610: TTextNode;
FontStyle611: TFontStyleNode;
HAnimSite612: THAnimSiteNode;
TouchSensor613: TTouchSensorNode;
Shape614: TShapeNode;
Appearance615: TAppearanceNode;
Material616: TMaterialNode;
IndexedFaceSet617: TIndexedFaceSetNode;
ColorRGBA618: TColorRGBANode;
Coordinate619: TCoordinateNode;
Billboard620: TBillboardNode;
Shape621: TShapeNode;
Text622: TTextNode;
FontStyle623: TFontStyleNode;
Shape624: TShapeNode;
LineSet625: TLineSetNode;
ColorRGBA626: TColorRGBANode;
Coordinate627: TCoordinateNode;
HAnimJoint628: THAnimJointNode;
HAnimSegment629: THAnimSegmentNode;
Shape630: TShapeNode;
LineSet631: TLineSetNode;
ColorRGBA632: TColorRGBANode;
Coordinate633: TCoordinateNode;
HAnimJoint634: THAnimJointNode;
HAnimSegment635: THAnimSegmentNode;
Shape636: TShapeNode;
LineSet637: TLineSetNode;
ColorRGBA638: TColorRGBANode;
Coordinate639: TCoordinateNode;
HAnimJoint640: THAnimJointNode;
HAnimSegment641: THAnimSegmentNode;
Shape642: TShapeNode;
LineSet643: TLineSetNode;
ColorRGBA644: TColorRGBANode;
Coordinate645: TCoordinateNode;
HAnimJoint646: THAnimJointNode;
HAnimSegment647: THAnimSegmentNode;
HAnimSite648: THAnimSiteNode;
TouchSensor649: TTouchSensorNode;
Shape650: TShapeNode;
Appearance651: TAppearanceNode;
Material652: TMaterialNode;
IndexedFaceSet653: TIndexedFaceSetNode;
ColorRGBA654: TColorRGBANode;
Coordinate655: TCoordinateNode;
Billboard656: TBillboardNode;
Shape657: TShapeNode;
Text658: TTextNode;
FontStyle659: TFontStyleNode;
Shape660: TShapeNode;
LineSet661: TLineSetNode;
ColorRGBA662: TColorRGBANode;
Coordinate663: TCoordinateNode;
HAnimJoint664: THAnimJointNode;
HAnimSegment665: THAnimSegmentNode;
HAnimSite666: THAnimSiteNode;
TouchSensor667: TTouchSensorNode;
Shape668: TShapeNode;
Appearance669: TAppearanceNode;
Material670: TMaterialNode;
IndexedFaceSet671: TIndexedFaceSetNode;
ColorRGBA672: TColorRGBANode;
Coordinate673: TCoordinateNode;
Billboard674: TBillboardNode;
Shape675: TShapeNode;
Text676: TTextNode;
FontStyle677: TFontStyleNode;
Shape678: TShapeNode;
LineSet679: TLineSetNode;
ColorRGBA680: TColorRGBANode;
Coordinate681: TCoordinateNode;
HAnimJoint682: THAnimJointNode;
HAnimSegment683: THAnimSegmentNode;
Shape684: TShapeNode;
LineSet685: TLineSetNode;
ColorRGBA686: TColorRGBANode;
Coordinate687: TCoordinateNode;
HAnimJoint688: THAnimJointNode;
HAnimSegment689: THAnimSegmentNode;
Shape690: TShapeNode;
LineSet691: TLineSetNode;
ColorRGBA692: TColorRGBANode;
Coordinate693: TCoordinateNode;
HAnimJoint694: THAnimJointNode;
HAnimSegment695: THAnimSegmentNode;
Shape696: TShapeNode;
LineSet697: TLineSetNode;
ColorRGBA698: TColorRGBANode;
Coordinate699: TCoordinateNode;
HAnimJoint700: THAnimJointNode;
HAnimSegment701: THAnimSegmentNode;
Shape702: TShapeNode;
LineSet703: TLineSetNode;
ColorRGBA704: TColorRGBANode;
Coordinate705: TCoordinateNode;
HAnimJoint706: THAnimJointNode;
HAnimSegment707: THAnimSegmentNode;
HAnimSite708: THAnimSiteNode;
TouchSensor709: TTouchSensorNode;
Shape710: TShapeNode;
Appearance711: TAppearanceNode;
Material712: TMaterialNode;
IndexedFaceSet713: TIndexedFaceSetNode;
ColorRGBA714: TColorRGBANode;
Coordinate715: TCoordinateNode;
Billboard716: TBillboardNode;
Shape717: TShapeNode;
Text718: TTextNode;
FontStyle719: TFontStyleNode;
Shape720: TShapeNode;
LineSet721: TLineSetNode;
ColorRGBA722: TColorRGBANode;
Coordinate723: TCoordinateNode;
HAnimJoint724: THAnimJointNode;
HAnimSegment725: THAnimSegmentNode;
Shape726: TShapeNode;
LineSet727: TLineSetNode;
ColorRGBA728: TColorRGBANode;
Coordinate729: TCoordinateNode;
HAnimJoint730: THAnimJointNode;
HAnimSegment731: THAnimSegmentNode;
Shape732: TShapeNode;
LineSet733: TLineSetNode;
ColorRGBA734: TColorRGBANode;
Coordinate735: TCoordinateNode;
HAnimJoint736: THAnimJointNode;
HAnimSegment737: THAnimSegmentNode;
Shape738: TShapeNode;
LineSet739: TLineSetNode;
ColorRGBA740: TColorRGBANode;
Coordinate741: TCoordinateNode;
HAnimJoint742: THAnimJointNode;
HAnimSegment743: THAnimSegmentNode;
Shape744: TShapeNode;
LineSet745: TLineSetNode;
ColorRGBA746: TColorRGBANode;
Coordinate747: TCoordinateNode;
HAnimJoint748: THAnimJointNode;
HAnimSegment749: THAnimSegmentNode;
HAnimSite750: THAnimSiteNode;
TouchSensor751: TTouchSensorNode;
Shape752: TShapeNode;
Appearance753: TAppearanceNode;
Material754: TMaterialNode;
IndexedFaceSet755: TIndexedFaceSetNode;
ColorRGBA756: TColorRGBANode;
Coordinate757: TCoordinateNode;
Billboard758: TBillboardNode;
Shape759: TShapeNode;
Text760: TTextNode;
FontStyle761: TFontStyleNode;
Shape762: TShapeNode;
LineSet763: TLineSetNode;
ColorRGBA764: TColorRGBANode;
Coordinate765: TCoordinateNode;
HAnimJoint766: THAnimJointNode;
HAnimSegment767: THAnimSegmentNode;
Shape768: TShapeNode;
LineSet769: TLineSetNode;
ColorRGBA770: TColorRGBANode;
Coordinate771: TCoordinateNode;
HAnimJoint772: THAnimJointNode;
HAnimSegment773: THAnimSegmentNode;
Shape774: TShapeNode;
LineSet775: TLineSetNode;
ColorRGBA776: TColorRGBANode;
Coordinate777: TCoordinateNode;
HAnimJoint778: THAnimJointNode;
HAnimSegment779: THAnimSegmentNode;
Shape780: TShapeNode;
LineSet781: TLineSetNode;
ColorRGBA782: TColorRGBANode;
Coordinate783: TCoordinateNode;
HAnimJoint784: THAnimJointNode;
HAnimSegment785: THAnimSegmentNode;
Shape786: TShapeNode;
LineSet787: TLineSetNode;
ColorRGBA788: TColorRGBANode;
Coordinate789: TCoordinateNode;
HAnimJoint790: THAnimJointNode;
HAnimSegment791: THAnimSegmentNode;
Shape792: TShapeNode;
LineSet793: TLineSetNode;
ColorRGBA794: TColorRGBANode;
Coordinate795: TCoordinateNode;
HAnimJoint796: THAnimJointNode;
HAnimSegment797: THAnimSegmentNode;
HAnimSite798: THAnimSiteNode;
TouchSensor799: TTouchSensorNode;
Shape800: TShapeNode;
Appearance801: TAppearanceNode;
Material802: TMaterialNode;
IndexedFaceSet803: TIndexedFaceSetNode;
ColorRGBA804: TColorRGBANode;
Coordinate805: TCoordinateNode;
Billboard806: TBillboardNode;
Shape807: TShapeNode;
Text808: TTextNode;
FontStyle809: TFontStyleNode;
Shape810: TShapeNode;
LineSet811: TLineSetNode;
ColorRGBA812: TColorRGBANode;
Coordinate813: TCoordinateNode;
HAnimJoint814: THAnimJointNode;
HAnimSegment815: THAnimSegmentNode;
Shape816: TShapeNode;
LineSet817: TLineSetNode;
ColorRGBA818: TColorRGBANode;
Coordinate819: TCoordinateNode;
HAnimJoint820: THAnimJointNode;
HAnimSegment821: THAnimSegmentNode;
Shape822: TShapeNode;
LineSet823: TLineSetNode;
ColorRGBA824: TColorRGBANode;
Coordinate825: TCoordinateNode;
HAnimJoint826: THAnimJointNode;
HAnimSegment827: THAnimSegmentNode;
HAnimSite828: THAnimSiteNode;
TouchSensor829: TTouchSensorNode;
Shape830: TShapeNode;
Appearance831: TAppearanceNode;
Material832: TMaterialNode;
IndexedFaceSet833: TIndexedFaceSetNode;
ColorRGBA834: TColorRGBANode;
Coordinate835: TCoordinateNode;
Billboard836: TBillboardNode;
Shape837: TShapeNode;
Text838: TTextNode;
FontStyle839: TFontStyleNode;
Shape840: TShapeNode;
LineSet841: TLineSetNode;
ColorRGBA842: TColorRGBANode;
Coordinate843: TCoordinateNode;
HAnimJoint844: THAnimJointNode;
HAnimSegment845: THAnimSegmentNode;
HAnimSite846: THAnimSiteNode;
TouchSensor847: TTouchSensorNode;
Shape848: TShapeNode;
Appearance849: TAppearanceNode;
Material850: TMaterialNode;
IndexedFaceSet851: TIndexedFaceSetNode;
ColorRGBA852: TColorRGBANode;
Coordinate853: TCoordinateNode;
Billboard854: TBillboardNode;
Shape855: TShapeNode;
Text856: TTextNode;
FontStyle857: TFontStyleNode;
Shape858: TShapeNode;
LineSet859: TLineSetNode;
ColorRGBA860: TColorRGBANode;
Coordinate861: TCoordinateNode;
HAnimJoint862: THAnimJointNode;
HAnimSegment863: THAnimSegmentNode;
HAnimSite864: THAnimSiteNode;
TouchSensor865: TTouchSensorNode;
Shape866: TShapeNode;
Appearance867: TAppearanceNode;
Material868: TMaterialNode;
IndexedFaceSet869: TIndexedFaceSetNode;
ColorRGBA870: TColorRGBANode;
Coordinate871: TCoordinateNode;
Billboard872: TBillboardNode;
Shape873: TShapeNode;
Text874: TTextNode;
FontStyle875: TFontStyleNode;
HAnimSite876: THAnimSiteNode;
TouchSensor877: TTouchSensorNode;
Shape878: TShapeNode;
Appearance879: TAppearanceNode;
Material880: TMaterialNode;
IndexedFaceSet881: TIndexedFaceSetNode;
ColorRGBA882: TColorRGBANode;
Coordinate883: TCoordinateNode;
Billboard884: TBillboardNode;
Shape885: TShapeNode;
Text886: TTextNode;
FontStyle887: TFontStyleNode;
HAnimSite888: THAnimSiteNode;
TouchSensor889: TTouchSensorNode;
Shape890: TShapeNode;
Appearance891: TAppearanceNode;
Material892: TMaterialNode;
IndexedFaceSet893: TIndexedFaceSetNode;
ColorRGBA894: TColorRGBANode;
Coordinate895: TCoordinateNode;
Billboard896: TBillboardNode;
Shape897: TShapeNode;
Text898: TTextNode;
FontStyle899: TFontStyleNode;
HAnimSite900: THAnimSiteNode;
TouchSensor901: TTouchSensorNode;
Shape902: TShapeNode;
Appearance903: TAppearanceNode;
Material904: TMaterialNode;
IndexedFaceSet905: TIndexedFaceSetNode;
ColorRGBA906: TColorRGBANode;
Coordinate907: TCoordinateNode;
Billboard908: TBillboardNode;
Shape909: TShapeNode;
Text910: TTextNode;
FontStyle911: TFontStyleNode;
HAnimSite912: THAnimSiteNode;
TouchSensor913: TTouchSensorNode;
Shape914: TShapeNode;
Appearance915: TAppearanceNode;
Material916: TMaterialNode;
IndexedFaceSet917: TIndexedFaceSetNode;
ColorRGBA918: TColorRGBANode;
Coordinate919: TCoordinateNode;
Billboard920: TBillboardNode;
Shape921: TShapeNode;
Text922: TTextNode;
FontStyle923: TFontStyleNode;
Shape924: TShapeNode;
LineSet925: TLineSetNode;
ColorRGBA926: TColorRGBANode;
Coordinate927: TCoordinateNode;
HAnimJoint928: THAnimJointNode;
HAnimSegment929: THAnimSegmentNode;
Shape930: TShapeNode;
LineSet931: TLineSetNode;
ColorRGBA932: TColorRGBANode;
Coordinate933: TCoordinateNode;
HAnimJoint934: THAnimJointNode;
HAnimSegment935: THAnimSegmentNode;
Shape936: TShapeNode;
LineSet937: TLineSetNode;
ColorRGBA938: TColorRGBANode;
Coordinate939: TCoordinateNode;
HAnimJoint940: THAnimJointNode;
HAnimSegment941: THAnimSegmentNode;
HAnimSite942: THAnimSiteNode;
TouchSensor943: TTouchSensorNode;
Shape944: TShapeNode;
Appearance945: TAppearanceNode;
Material946: TMaterialNode;
IndexedFaceSet947: TIndexedFaceSetNode;
ColorRGBA948: TColorRGBANode;
Coordinate949: TCoordinateNode;
Billboard950: TBillboardNode;
Shape951: TShapeNode;
Text952: TTextNode;
FontStyle953: TFontStyleNode;
HAnimSite954: THAnimSiteNode;
TouchSensor955: TTouchSensorNode;
Shape956: TShapeNode;
Appearance957: TAppearanceNode;
Material958: TMaterialNode;
IndexedFaceSet959: TIndexedFaceSetNode;
ColorRGBA960: TColorRGBANode;
Coordinate961: TCoordinateNode;
Billboard962: TBillboardNode;
Shape963: TShapeNode;
Text964: TTextNode;
FontStyle965: TFontStyleNode;
Shape966: TShapeNode;
LineSet967: TLineSetNode;
ColorRGBA968: TColorRGBANode;
Coordinate969: TCoordinateNode;
HAnimJoint970: THAnimJointNode;
HAnimSegment971: THAnimSegmentNode;
Shape972: TShapeNode;
LineSet973: TLineSetNode;
ColorRGBA974: TColorRGBANode;
Coordinate975: TCoordinateNode;
HAnimJoint976: THAnimJointNode;
HAnimSegment977: THAnimSegmentNode;
Shape978: TShapeNode;
LineSet979: TLineSetNode;
ColorRGBA980: TColorRGBANode;
Coordinate981: TCoordinateNode;
HAnimJoint982: THAnimJointNode;
HAnimSegment983: THAnimSegmentNode;
Shape984: TShapeNode;
LineSet985: TLineSetNode;
ColorRGBA986: TColorRGBANode;
Coordinate987: TCoordinateNode;
HAnimJoint988: THAnimJointNode;
HAnimSegment989: THAnimSegmentNode;
HAnimSite990: THAnimSiteNode;
TouchSensor991: TTouchSensorNode;
Shape992: TShapeNode;
Appearance993: TAppearanceNode;
Material994: TMaterialNode;
IndexedFaceSet995: TIndexedFaceSetNode;
ColorRGBA996: TColorRGBANode;
Coordinate997: TCoordinateNode;
Billboard998: TBillboardNode;
Shape999: TShapeNode;
Text1000: TTextNode;
FontStyle1001: TFontStyleNode;
HAnimSite1002: THAnimSiteNode;
TouchSensor1003: TTouchSensorNode;
Shape1004: TShapeNode;
Appearance1005: TAppearanceNode;
Material1006: TMaterialNode;
IndexedFaceSet1007: TIndexedFaceSetNode;
ColorRGBA1008: TColorRGBANode;
Coordinate1009: TCoordinateNode;
Billboard1010: TBillboardNode;
Shape1011: TShapeNode;
Text1012: TTextNode;
FontStyle1013: TFontStyleNode;
Shape1014: TShapeNode;
LineSet1015: TLineSetNode;
ColorRGBA1016: TColorRGBANode;
Coordinate1017: TCoordinateNode;
HAnimJoint1018: THAnimJointNode;
HAnimSegment1019: THAnimSegmentNode;
HAnimSite1020: THAnimSiteNode;
TouchSensor1021: TTouchSensorNode;
Shape1022: TShapeNode;
Appearance1023: TAppearanceNode;
Material1024: TMaterialNode;
IndexedFaceSet1025: TIndexedFaceSetNode;
ColorRGBA1026: TColorRGBANode;
Coordinate1027: TCoordinateNode;
Billboard1028: TBillboardNode;
Shape1029: TShapeNode;
Text1030: TTextNode;
FontStyle1031: TFontStyleNode;
HAnimSite1032: THAnimSiteNode;
TouchSensor1033: TTouchSensorNode;
Shape1034: TShapeNode;
Appearance1035: TAppearanceNode;
Material1036: TMaterialNode;
IndexedFaceSet1037: TIndexedFaceSetNode;
ColorRGBA1038: TColorRGBANode;
Coordinate1039: TCoordinateNode;
Billboard1040: TBillboardNode;
Shape1041: TShapeNode;
Text1042: TTextNode;
FontStyle1043: TFontStyleNode;
HAnimSite1044: THAnimSiteNode;
TouchSensor1045: TTouchSensorNode;
Shape1046: TShapeNode;
Appearance1047: TAppearanceNode;
Material1048: TMaterialNode;
IndexedFaceSet1049: TIndexedFaceSetNode;
ColorRGBA1050: TColorRGBANode;
Coordinate1051: TCoordinateNode;
Billboard1052: TBillboardNode;
Shape1053: TShapeNode;
Text1054: TTextNode;
FontStyle1055: TFontStyleNode;
HAnimSite1056: THAnimSiteNode;
TouchSensor1057: TTouchSensorNode;
Shape1058: TShapeNode;
Appearance1059: TAppearanceNode;
Material1060: TMaterialNode;
IndexedFaceSet1061: TIndexedFaceSetNode;
ColorRGBA1062: TColorRGBANode;
Coordinate1063: TCoordinateNode;
Billboard1064: TBillboardNode;
Shape1065: TShapeNode;
Text1066: TTextNode;
FontStyle1067: TFontStyleNode;
HAnimSite1068: THAnimSiteNode;
TouchSensor1069: TTouchSensorNode;
Shape1070: TShapeNode;
Appearance1071: TAppearanceNode;
Material1072: TMaterialNode;
IndexedFaceSet1073: TIndexedFaceSetNode;
ColorRGBA1074: TColorRGBANode;
Coordinate1075: TCoordinateNode;
Billboard1076: TBillboardNode;
Shape1077: TShapeNode;
Text1078: TTextNode;
FontStyle1079: TFontStyleNode;
Shape1080: TShapeNode;
LineSet1081: TLineSetNode;
ColorRGBA1082: TColorRGBANode;
Coordinate1083: TCoordinateNode;
HAnimJoint1084: THAnimJointNode;
HAnimSegment1085: THAnimSegmentNode;
Shape1086: TShapeNode;
LineSet1087: TLineSetNode;
ColorRGBA1088: TColorRGBANode;
Coordinate1089: TCoordinateNode;
HAnimJoint1090: THAnimJointNode;
HAnimSegment1091: THAnimSegmentNode;
Shape1092: TShapeNode;
LineSet1093: TLineSetNode;
ColorRGBA1094: TColorRGBANode;
Coordinate1095: TCoordinateNode;
HAnimJoint1096: THAnimJointNode;
HAnimSegment1097: THAnimSegmentNode;
Shape1098: TShapeNode;
LineSet1099: TLineSetNode;
ColorRGBA1100: TColorRGBANode;
Coordinate1101: TCoordinateNode;
HAnimJoint1102: THAnimJointNode;
HAnimSegment1103: THAnimSegmentNode;
Shape1104: TShapeNode;
LineSet1105: TLineSetNode;
ColorRGBA1106: TColorRGBANode;
Coordinate1107: TCoordinateNode;
HAnimJoint1108: THAnimJointNode;
HAnimSegment1109: THAnimSegmentNode;
Shape1110: TShapeNode;
LineSet1111: TLineSetNode;
ColorRGBA1112: TColorRGBANode;
Coordinate1113: TCoordinateNode;
HAnimJoint1114: THAnimJointNode;
HAnimSegment1115: THAnimSegmentNode;
Shape1116: TShapeNode;
LineSet1117: TLineSetNode;
ColorRGBA1118: TColorRGBANode;
Coordinate1119: TCoordinateNode;
HAnimJoint1120: THAnimJointNode;
HAnimSegment1121: THAnimSegmentNode;
Shape1122: TShapeNode;
LineSet1123: TLineSetNode;
ColorRGBA1124: TColorRGBANode;
Coordinate1125: TCoordinateNode;
HAnimJoint1126: THAnimJointNode;
HAnimSegment1127: THAnimSegmentNode;
HAnimSite1128: THAnimSiteNode;
TouchSensor1129: TTouchSensorNode;
Shape1130: TShapeNode;
Appearance1131: TAppearanceNode;
Material1132: TMaterialNode;
IndexedFaceSet1133: TIndexedFaceSetNode;
ColorRGBA1134: TColorRGBANode;
Coordinate1135: TCoordinateNode;
Billboard1136: TBillboardNode;
Shape1137: TShapeNode;
Text1138: TTextNode;
FontStyle1139: TFontStyleNode;
HAnimSite1140: THAnimSiteNode;
TouchSensor1141: TTouchSensorNode;
Shape1142: TShapeNode;
Appearance1143: TAppearanceNode;
Material1144: TMaterialNode;
IndexedFaceSet1145: TIndexedFaceSetNode;
ColorRGBA1146: TColorRGBANode;
Coordinate1147: TCoordinateNode;
Billboard1148: TBillboardNode;
Shape1149: TShapeNode;
Text1150: TTextNode;
FontStyle1151: TFontStyleNode;
Shape1152: TShapeNode;
LineSet1153: TLineSetNode;
ColorRGBA1154: TColorRGBANode;
Coordinate1155: TCoordinateNode;
HAnimJoint1156: THAnimJointNode;
HAnimSegment1157: THAnimSegmentNode;
HAnimSite1158: THAnimSiteNode;
TouchSensor1159: TTouchSensorNode;
Shape1160: TShapeNode;
Appearance1161: TAppearanceNode;
Material1162: TMaterialNode;
IndexedFaceSet1163: TIndexedFaceSetNode;
ColorRGBA1164: TColorRGBANode;
Coordinate1165: TCoordinateNode;
Billboard1166: TBillboardNode;
Shape1167: TShapeNode;
Text1168: TTextNode;
FontStyle1169: TFontStyleNode;
HAnimSite1170: THAnimSiteNode;
TouchSensor1171: TTouchSensorNode;
Shape1172: TShapeNode;
Appearance1173: TAppearanceNode;
Material1174: TMaterialNode;
IndexedFaceSet1175: TIndexedFaceSetNode;
ColorRGBA1176: TColorRGBANode;
Coordinate1177: TCoordinateNode;
Billboard1178: TBillboardNode;
Shape1179: TShapeNode;
Text1180: TTextNode;
FontStyle1181: TFontStyleNode;
Shape1182: TShapeNode;
LineSet1183: TLineSetNode;
ColorRGBA1184: TColorRGBANode;
Coordinate1185: TCoordinateNode;
HAnimJoint1186: THAnimJointNode;
HAnimSegment1187: THAnimSegmentNode;
Shape1188: TShapeNode;
LineSet1189: TLineSetNode;
ColorRGBA1190: TColorRGBANode;
Coordinate1191: TCoordinateNode;
HAnimJoint1192: THAnimJointNode;
HAnimSegment1193: THAnimSegmentNode;
Shape1194: TShapeNode;
LineSet1195: TLineSetNode;
ColorRGBA1196: TColorRGBANode;
Coordinate1197: TCoordinateNode;
HAnimJoint1198: THAnimJointNode;
HAnimSegment1199: THAnimSegmentNode;
Shape1200: TShapeNode;
LineSet1201: TLineSetNode;
ColorRGBA1202: TColorRGBANode;
Coordinate1203: TCoordinateNode;
HAnimJoint1204: THAnimJointNode;
HAnimSegment1205: THAnimSegmentNode;
Shape1206: TShapeNode;
LineSet1207: TLineSetNode;
ColorRGBA1208: TColorRGBANode;
Coordinate1209: TCoordinateNode;
HAnimJoint1210: THAnimJointNode;
HAnimSegment1211: THAnimSegmentNode;
HAnimSite1212: THAnimSiteNode;
TouchSensor1213: TTouchSensorNode;
Shape1214: TShapeNode;
Appearance1215: TAppearanceNode;
Material1216: TMaterialNode;
IndexedFaceSet1217: TIndexedFaceSetNode;
ColorRGBA1218: TColorRGBANode;
Coordinate1219: TCoordinateNode;
Billboard1220: TBillboardNode;
Shape1221: TShapeNode;
Text1222: TTextNode;
FontStyle1223: TFontStyleNode;
Shape1224: TShapeNode;
LineSet1225: TLineSetNode;
ColorRGBA1226: TColorRGBANode;
Coordinate1227: TCoordinateNode;
HAnimJoint1228: THAnimJointNode;
HAnimSegment1229: THAnimSegmentNode;
Shape1230: TShapeNode;
LineSet1231: TLineSetNode;
ColorRGBA1232: TColorRGBANode;
Coordinate1233: TCoordinateNode;
HAnimJoint1234: THAnimJointNode;
HAnimSegment1235: THAnimSegmentNode;
HAnimSite1236: THAnimSiteNode;
TouchSensor1237: TTouchSensorNode;
Shape1238: TShapeNode;
Appearance1239: TAppearanceNode;
Material1240: TMaterialNode;
IndexedFaceSet1241: TIndexedFaceSetNode;
ColorRGBA1242: TColorRGBANode;
Coordinate1243: TCoordinateNode;
Billboard1244: TBillboardNode;
Shape1245: TShapeNode;
Text1246: TTextNode;
FontStyle1247: TFontStyleNode;
HAnimSite1248: THAnimSiteNode;
TouchSensor1249: TTouchSensorNode;
Shape1250: TShapeNode;
Appearance1251: TAppearanceNode;
Material1252: TMaterialNode;
IndexedFaceSet1253: TIndexedFaceSetNode;
ColorRGBA1254: TColorRGBANode;
Coordinate1255: TCoordinateNode;
Billboard1256: TBillboardNode;
Shape1257: TShapeNode;
Text1258: TTextNode;
FontStyle1259: TFontStyleNode;
HAnimSite1260: THAnimSiteNode;
TouchSensor1261: TTouchSensorNode;
Shape1262: TShapeNode;
Appearance1263: TAppearanceNode;
Material1264: TMaterialNode;
IndexedFaceSet1265: TIndexedFaceSetNode;
ColorRGBA1266: TColorRGBANode;
Coordinate1267: TCoordinateNode;
Billboard1268: TBillboardNode;
Shape1269: TShapeNode;
Text1270: TTextNode;
FontStyle1271: TFontStyleNode;
HAnimSite1272: THAnimSiteNode;
TouchSensor1273: TTouchSensorNode;
Shape1274: TShapeNode;
Appearance1275: TAppearanceNode;
Material1276: TMaterialNode;
IndexedFaceSet1277: TIndexedFaceSetNode;
ColorRGBA1278: TColorRGBANode;
Coordinate1279: TCoordinateNode;
Billboard1280: TBillboardNode;
Shape1281: TShapeNode;
Text1282: TTextNode;
FontStyle1283: TFontStyleNode;
HAnimSite1284: THAnimSiteNode;
TouchSensor1285: TTouchSensorNode;
Shape1286: TShapeNode;
Appearance1287: TAppearanceNode;
Material1288: TMaterialNode;
IndexedFaceSet1289: TIndexedFaceSetNode;
ColorRGBA1290: TColorRGBANode;
Coordinate1291: TCoordinateNode;
Billboard1292: TBillboardNode;
Shape1293: TShapeNode;
Text1294: TTextNode;
FontStyle1295: TFontStyleNode;
HAnimSite1296: THAnimSiteNode;
TouchSensor1297: TTouchSensorNode;
Shape1298: TShapeNode;
Appearance1299: TAppearanceNode;
Material1300: TMaterialNode;
IndexedFaceSet1301: TIndexedFaceSetNode;
ColorRGBA1302: TColorRGBANode;
Coordinate1303: TCoordinateNode;
Billboard1304: TBillboardNode;
Shape1305: TShapeNode;
Text1306: TTextNode;
FontStyle1307: TFontStyleNode;
HAnimSite1308: THAnimSiteNode;
TouchSensor1309: TTouchSensorNode;
Shape1310: TShapeNode;
Appearance1311: TAppearanceNode;
Material1312: TMaterialNode;
IndexedFaceSet1313: TIndexedFaceSetNode;
ColorRGBA1314: TColorRGBANode;
Coordinate1315: TCoordinateNode;
Billboard1316: TBillboardNode;
Shape1317: TShapeNode;
Text1318: TTextNode;
FontStyle1319: TFontStyleNode;
HAnimSite1320: THAnimSiteNode;
TouchSensor1321: TTouchSensorNode;
Shape1322: TShapeNode;
Appearance1323: TAppearanceNode;
Material1324: TMaterialNode;
IndexedFaceSet1325: TIndexedFaceSetNode;
ColorRGBA1326: TColorRGBANode;
Coordinate1327: TCoordinateNode;
Billboard1328: TBillboardNode;
Shape1329: TShapeNode;
Text1330: TTextNode;
FontStyle1331: TFontStyleNode;
HAnimSite1332: THAnimSiteNode;
TouchSensor1333: TTouchSensorNode;
Shape1334: TShapeNode;
Appearance1335: TAppearanceNode;
Material1336: TMaterialNode;
IndexedFaceSet1337: TIndexedFaceSetNode;
ColorRGBA1338: TColorRGBANode;
Coordinate1339: TCoordinateNode;
Billboard1340: TBillboardNode;
Shape1341: TShapeNode;
Text1342: TTextNode;
FontStyle1343: TFontStyleNode;
HAnimSite1344: THAnimSiteNode;
TouchSensor1345: TTouchSensorNode;
Shape1346: TShapeNode;
Appearance1347: TAppearanceNode;
Material1348: TMaterialNode;
IndexedFaceSet1349: TIndexedFaceSetNode;
ColorRGBA1350: TColorRGBANode;
Coordinate1351: TCoordinateNode;
Billboard1352: TBillboardNode;
Shape1353: TShapeNode;
Text1354: TTextNode;
FontStyle1355: TFontStyleNode;
HAnimSite1356: THAnimSiteNode;
TouchSensor1357: TTouchSensorNode;
Shape1358: TShapeNode;
Appearance1359: TAppearanceNode;
Material1360: TMaterialNode;
IndexedFaceSet1361: TIndexedFaceSetNode;
ColorRGBA1362: TColorRGBANode;
Coordinate1363: TCoordinateNode;
Billboard1364: TBillboardNode;
Shape1365: TShapeNode;
Text1366: TTextNode;
FontStyle1367: TFontStyleNode;
Shape1368: TShapeNode;
LineSet1369: TLineSetNode;
ColorRGBA1370: TColorRGBANode;
Coordinate1371: TCoordinateNode;
HAnimJoint1372: THAnimJointNode;
HAnimSegment1373: THAnimSegmentNode;
HAnimSite1374: THAnimSiteNode;
TouchSensor1375: TTouchSensorNode;
Shape1376: TShapeNode;
Appearance1377: TAppearanceNode;
Material1378: TMaterialNode;
IndexedFaceSet1379: TIndexedFaceSetNode;
ColorRGBA1380: TColorRGBANode;
Coordinate1381: TCoordinateNode;
Billboard1382: TBillboardNode;
Shape1383: TShapeNode;
Text1384: TTextNode;
FontStyle1385: TFontStyleNode;
Shape1386: TShapeNode;
LineSet1387: TLineSetNode;
ColorRGBA1388: TColorRGBANode;
Coordinate1389: TCoordinateNode;
HAnimJoint1390: THAnimJointNode;
HAnimSegment1391: THAnimSegmentNode;
HAnimSite1392: THAnimSiteNode;
TouchSensor1393: TTouchSensorNode;
Shape1394: TShapeNode;
Appearance1395: TAppearanceNode;
Material1396: TMaterialNode;
IndexedFaceSet1397: TIndexedFaceSetNode;
ColorRGBA1398: TColorRGBANode;
Coordinate1399: TCoordinateNode;
Billboard1400: TBillboardNode;
Shape1401: TShapeNode;
Text1402: TTextNode;
FontStyle1403: TFontStyleNode;
Shape1404: TShapeNode;
LineSet1405: TLineSetNode;
ColorRGBA1406: TColorRGBANode;
Coordinate1407: TCoordinateNode;
HAnimJoint1408: THAnimJointNode;
HAnimSegment1409: THAnimSegmentNode;
HAnimSite1410: THAnimSiteNode;
TouchSensor1411: TTouchSensorNode;
Shape1412: TShapeNode;
Appearance1413: TAppearanceNode;
Material1414: TMaterialNode;
IndexedFaceSet1415: TIndexedFaceSetNode;
ColorRGBA1416: TColorRGBANode;
Coordinate1417: TCoordinateNode;
Billboard1418: TBillboardNode;
Shape1419: TShapeNode;
Text1420: TTextNode;
FontStyle1421: TFontStyleNode;
Shape1422: TShapeNode;
LineSet1423: TLineSetNode;
ColorRGBA1424: TColorRGBANode;
Coordinate1425: TCoordinateNode;
HAnimJoint1426: THAnimJointNode;
HAnimSegment1427: THAnimSegmentNode;
HAnimSite1428: THAnimSiteNode;
TouchSensor1429: TTouchSensorNode;
Shape1430: TShapeNode;
Appearance1431: TAppearanceNode;
Material1432: TMaterialNode;
IndexedFaceSet1433: TIndexedFaceSetNode;
ColorRGBA1434: TColorRGBANode;
Coordinate1435: TCoordinateNode;
Billboard1436: TBillboardNode;
Shape1437: TShapeNode;
Text1438: TTextNode;
FontStyle1439: TFontStyleNode;
Shape1440: TShapeNode;
LineSet1441: TLineSetNode;
ColorRGBA1442: TColorRGBANode;
Coordinate1443: TCoordinateNode;
HAnimJoint1444: THAnimJointNode;
HAnimSegment1445: THAnimSegmentNode;
HAnimSite1446: THAnimSiteNode;
TouchSensor1447: TTouchSensorNode;
Shape1448: TShapeNode;
Appearance1449: TAppearanceNode;
Material1450: TMaterialNode;
IndexedFaceSet1451: TIndexedFaceSetNode;
ColorRGBA1452: TColorRGBANode;
Coordinate1453: TCoordinateNode;
Billboard1454: TBillboardNode;
Shape1455: TShapeNode;
Text1456: TTextNode;
FontStyle1457: TFontStyleNode;
Shape1458: TShapeNode;
LineSet1459: TLineSetNode;
ColorRGBA1460: TColorRGBANode;
Coordinate1461: TCoordinateNode;
HAnimJoint1462: THAnimJointNode;
HAnimSegment1463: THAnimSegmentNode;
HAnimSite1464: THAnimSiteNode;
TouchSensor1465: TTouchSensorNode;
Shape1466: TShapeNode;
Appearance1467: TAppearanceNode;
Material1468: TMaterialNode;
IndexedFaceSet1469: TIndexedFaceSetNode;
ColorRGBA1470: TColorRGBANode;
Coordinate1471: TCoordinateNode;
Billboard1472: TBillboardNode;
Shape1473: TShapeNode;
Text1474: TTextNode;
FontStyle1475: TFontStyleNode;
Shape1476: TShapeNode;
LineSet1477: TLineSetNode;
ColorRGBA1478: TColorRGBANode;
Coordinate1479: TCoordinateNode;
HAnimJoint1480: THAnimJointNode;
HAnimSegment1481: THAnimSegmentNode;
HAnimSite1482: THAnimSiteNode;
TouchSensor1483: TTouchSensorNode;
Shape1484: TShapeNode;
Appearance1485: TAppearanceNode;
Material1486: TMaterialNode;
IndexedFaceSet1487: TIndexedFaceSetNode;
ColorRGBA1488: TColorRGBANode;
Coordinate1489: TCoordinateNode;
Billboard1490: TBillboardNode;
Shape1491: TShapeNode;
Text1492: TTextNode;
FontStyle1493: TFontStyleNode;
HAnimSite1494: THAnimSiteNode;
TouchSensor1495: TTouchSensorNode;
Shape1496: TShapeNode;
Appearance1497: TAppearanceNode;
Material1498: TMaterialNode;
IndexedFaceSet1499: TIndexedFaceSetNode;
ColorRGBA1500: TColorRGBANode;
Coordinate1501: TCoordinateNode;
Billboard1502: TBillboardNode;
Shape1503: TShapeNode;
Text1504: TTextNode;
FontStyle1505: TFontStyleNode;
HAnimSite1506: THAnimSiteNode;
TouchSensor1507: TTouchSensorNode;
Shape1508: TShapeNode;
Appearance1509: TAppearanceNode;
Material1510: TMaterialNode;
IndexedFaceSet1511: TIndexedFaceSetNode;
ColorRGBA1512: TColorRGBANode;
Coordinate1513: TCoordinateNode;
Billboard1514: TBillboardNode;
Shape1515: TShapeNode;
Text1516: TTextNode;
FontStyle1517: TFontStyleNode;
HAnimSite1518: THAnimSiteNode;
TouchSensor1519: TTouchSensorNode;
Shape1520: TShapeNode;
Appearance1521: TAppearanceNode;
Material1522: TMaterialNode;
IndexedFaceSet1523: TIndexedFaceSetNode;
ColorRGBA1524: TColorRGBANode;
Coordinate1525: TCoordinateNode;
Billboard1526: TBillboardNode;
Shape1527: TShapeNode;
Text1528: TTextNode;
FontStyle1529: TFontStyleNode;
Shape1530: TShapeNode;
LineSet1531: TLineSetNode;
ColorRGBA1532: TColorRGBANode;
Coordinate1533: TCoordinateNode;
HAnimJoint1534: THAnimJointNode;
HAnimSegment1535: THAnimSegmentNode;
HAnimSite1536: THAnimSiteNode;
TouchSensor1537: TTouchSensorNode;
Shape1538: TShapeNode;
Appearance1539: TAppearanceNode;
Material1540: TMaterialNode;
IndexedFaceSet1541: TIndexedFaceSetNode;
ColorRGBA1542: TColorRGBANode;
Coordinate1543: TCoordinateNode;
Billboard1544: TBillboardNode;
Shape1545: TShapeNode;
Text1546: TTextNode;
FontStyle1547: TFontStyleNode;
Shape1548: TShapeNode;
LineSet1549: TLineSetNode;
ColorRGBA1550: TColorRGBANode;
Coordinate1551: TCoordinateNode;
HAnimJoint1552: THAnimJointNode;
HAnimSegment1553: THAnimSegmentNode;
HAnimSite1554: THAnimSiteNode;
TouchSensor1555: TTouchSensorNode;
Shape1556: TShapeNode;
Appearance1557: TAppearanceNode;
Material1558: TMaterialNode;
IndexedFaceSet1559: TIndexedFaceSetNode;
ColorRGBA1560: TColorRGBANode;
Coordinate1561: TCoordinateNode;
Billboard1562: TBillboardNode;
Shape1563: TShapeNode;
Text1564: TTextNode;
FontStyle1565: TFontStyleNode;
HAnimSite1566: THAnimSiteNode;
TouchSensor1567: TTouchSensorNode;
Shape1568: TShapeNode;
Appearance1569: TAppearanceNode;
Material1570: TMaterialNode;
IndexedFaceSet1571: TIndexedFaceSetNode;
ColorRGBA1572: TColorRGBANode;
Coordinate1573: TCoordinateNode;
Billboard1574: TBillboardNode;
Shape1575: TShapeNode;
Text1576: TTextNode;
FontStyle1577: TFontStyleNode;
HAnimSite1578: THAnimSiteNode;
TouchSensor1579: TTouchSensorNode;
Shape1580: TShapeNode;
Appearance1581: TAppearanceNode;
Material1582: TMaterialNode;
IndexedFaceSet1583: TIndexedFaceSetNode;
ColorRGBA1584: TColorRGBANode;
Coordinate1585: TCoordinateNode;
Billboard1586: TBillboardNode;
Shape1587: TShapeNode;
Text1588: TTextNode;
FontStyle1589: TFontStyleNode;
HAnimSite1590: THAnimSiteNode;
TouchSensor1591: TTouchSensorNode;
Shape1592: TShapeNode;
Appearance1593: TAppearanceNode;
Material1594: TMaterialNode;
IndexedFaceSet1595: TIndexedFaceSetNode;
ColorRGBA1596: TColorRGBANode;
Coordinate1597: TCoordinateNode;
Billboard1598: TBillboardNode;
Shape1599: TShapeNode;
Text1600: TTextNode;
FontStyle1601: TFontStyleNode;
Shape1602: TShapeNode;
LineSet1603: TLineSetNode;
ColorRGBA1604: TColorRGBANode;
Coordinate1605: TCoordinateNode;
HAnimJoint1606: THAnimJointNode;
HAnimSegment1607: THAnimSegmentNode;
HAnimSite1608: THAnimSiteNode;
TouchSensor1609: TTouchSensorNode;
Shape1610: TShapeNode;
Appearance1611: TAppearanceNode;
Material1612: TMaterialNode;
IndexedFaceSet1613: TIndexedFaceSetNode;
ColorRGBA1614: TColorRGBANode;
Coordinate1615: TCoordinateNode;
Billboard1616: TBillboardNode;
Shape1617: TShapeNode;
Text1618: TTextNode;
FontStyle1619: TFontStyleNode;
HAnimSite1620: THAnimSiteNode;
TouchSensor1621: TTouchSensorNode;
Shape1622: TShapeNode;
Appearance1623: TAppearanceNode;
Material1624: TMaterialNode;
IndexedFaceSet1625: TIndexedFaceSetNode;
ColorRGBA1626: TColorRGBANode;
Coordinate1627: TCoordinateNode;
Billboard1628: TBillboardNode;
Shape1629: TShapeNode;
Text1630: TTextNode;
FontStyle1631: TFontStyleNode;
HAnimSite1632: THAnimSiteNode;
TouchSensor1633: TTouchSensorNode;
Shape1634: TShapeNode;
Appearance1635: TAppearanceNode;
Material1636: TMaterialNode;
IndexedFaceSet1637: TIndexedFaceSetNode;
ColorRGBA1638: TColorRGBANode;
Coordinate1639: TCoordinateNode;
Billboard1640: TBillboardNode;
Shape1641: TShapeNode;
Text1642: TTextNode;
FontStyle1643: TFontStyleNode;
HAnimSite1644: THAnimSiteNode;
TouchSensor1645: TTouchSensorNode;
Shape1646: TShapeNode;
Appearance1647: TAppearanceNode;
Material1648: TMaterialNode;
IndexedFaceSet1649: TIndexedFaceSetNode;
ColorRGBA1650: TColorRGBANode;
Coordinate1651: TCoordinateNode;
Billboard1652: TBillboardNode;
Shape1653: TShapeNode;
Text1654: TTextNode;
FontStyle1655: TFontStyleNode;
Shape1656: TShapeNode;
LineSet1657: TLineSetNode;
ColorRGBA1658: TColorRGBANode;
Coordinate1659: TCoordinateNode;
HAnimJoint1660: THAnimJointNode;
HAnimSegment1661: THAnimSegmentNode;
HAnimSite1662: THAnimSiteNode;
TouchSensor1663: TTouchSensorNode;
Shape1664: TShapeNode;
Appearance1665: TAppearanceNode;
Material1666: TMaterialNode;
IndexedFaceSet1667: TIndexedFaceSetNode;
ColorRGBA1668: TColorRGBANode;
Coordinate1669: TCoordinateNode;
Billboard1670: TBillboardNode;
Shape1671: TShapeNode;
Text1672: TTextNode;
FontStyle1673: TFontStyleNode;
HAnimSite1674: THAnimSiteNode;
TouchSensor1675: TTouchSensorNode;
Shape1676: TShapeNode;
Appearance1677: TAppearanceNode;
Material1678: TMaterialNode;
IndexedFaceSet1679: TIndexedFaceSetNode;
ColorRGBA1680: TColorRGBANode;
Coordinate1681: TCoordinateNode;
Billboard1682: TBillboardNode;
Shape1683: TShapeNode;
Text1684: TTextNode;
FontStyle1685: TFontStyleNode;
Shape1686: TShapeNode;
LineSet1687: TLineSetNode;
ColorRGBA1688: TColorRGBANode;
Coordinate1689: TCoordinateNode;
HAnimJoint1690: THAnimJointNode;
HAnimSegment1691: THAnimSegmentNode;
HAnimSite1692: THAnimSiteNode;
TouchSensor1693: TTouchSensorNode;
Shape1694: TShapeNode;
Appearance1695: TAppearanceNode;
Material1696: TMaterialNode;
IndexedFaceSet1697: TIndexedFaceSetNode;
ColorRGBA1698: TColorRGBANode;
Coordinate1699: TCoordinateNode;
Billboard1700: TBillboardNode;
Shape1701: TShapeNode;
Text1702: TTextNode;
FontStyle1703: TFontStyleNode;
Shape1704: TShapeNode;
LineSet1705: TLineSetNode;
ColorRGBA1706: TColorRGBANode;
Coordinate1707: TCoordinateNode;
HAnimJoint1708: THAnimJointNode;
HAnimSegment1709: THAnimSegmentNode;
Shape1710: TShapeNode;
LineSet1711: TLineSetNode;
ColorRGBA1712: TColorRGBANode;
Coordinate1713: TCoordinateNode;
HAnimJoint1714: THAnimJointNode;
HAnimSegment1715: THAnimSegmentNode;
HAnimSite1716: THAnimSiteNode;
TouchSensor1717: TTouchSensorNode;
Shape1718: TShapeNode;
Appearance1719: TAppearanceNode;
Material1720: TMaterialNode;
IndexedFaceSet1721: TIndexedFaceSetNode;
ColorRGBA1722: TColorRGBANode;
Coordinate1723: TCoordinateNode;
Billboard1724: TBillboardNode;
Shape1725: TShapeNode;
Text1726: TTextNode;
FontStyle1727: TFontStyleNode;
Shape1728: TShapeNode;
LineSet1729: TLineSetNode;
ColorRGBA1730: TColorRGBANode;
Coordinate1731: TCoordinateNode;
HAnimJoint1732: THAnimJointNode;
HAnimSegment1733: THAnimSegmentNode;
Shape1734: TShapeNode;
LineSet1735: TLineSetNode;
ColorRGBA1736: TColorRGBANode;
Coordinate1737: TCoordinateNode;
HAnimJoint1738: THAnimJointNode;
HAnimSegment1739: THAnimSegmentNode;
HAnimSite1740: THAnimSiteNode;
TouchSensor1741: TTouchSensorNode;
Shape1742: TShapeNode;
Appearance1743: TAppearanceNode;
Material1744: TMaterialNode;
IndexedFaceSet1745: TIndexedFaceSetNode;
ColorRGBA1746: TColorRGBANode;
Coordinate1747: TCoordinateNode;
Billboard1748: TBillboardNode;
Shape1749: TShapeNode;
Text1750: TTextNode;
FontStyle1751: TFontStyleNode;
Shape1752: TShapeNode;
LineSet1753: TLineSetNode;
ColorRGBA1754: TColorRGBANode;
Coordinate1755: TCoordinateNode;
HAnimJoint1756: THAnimJointNode;
HAnimSegment1757: THAnimSegmentNode;
Shape1758: TShapeNode;
LineSet1759: TLineSetNode;
ColorRGBA1760: TColorRGBANode;
Coordinate1761: TCoordinateNode;
HAnimJoint1762: THAnimJointNode;
HAnimSegment1763: THAnimSegmentNode;
Shape1764: TShapeNode;
LineSet1765: TLineSetNode;
ColorRGBA1766: TColorRGBANode;
Coordinate1767: TCoordinateNode;
HAnimJoint1768: THAnimJointNode;
HAnimSegment1769: THAnimSegmentNode;
Shape1770: TShapeNode;
LineSet1771: TLineSetNode;
ColorRGBA1772: TColorRGBANode;
Coordinate1773: TCoordinateNode;
HAnimJoint1774: THAnimJointNode;
HAnimSegment1775: THAnimSegmentNode;
Shape1776: TShapeNode;
LineSet1777: TLineSetNode;
ColorRGBA1778: TColorRGBANode;
Coordinate1779: TCoordinateNode;
HAnimJoint1780: THAnimJointNode;
HAnimSegment1781: THAnimSegmentNode;
HAnimSite1782: THAnimSiteNode;
TouchSensor1783: TTouchSensorNode;
Shape1784: TShapeNode;
Appearance1785: TAppearanceNode;
Material1786: TMaterialNode;
IndexedFaceSet1787: TIndexedFaceSetNode;
ColorRGBA1788: TColorRGBANode;
Coordinate1789: TCoordinateNode;
Billboard1790: TBillboardNode;
Shape1791: TShapeNode;
Text1792: TTextNode;
FontStyle1793: TFontStyleNode;
HAnimSite1794: THAnimSiteNode;
TouchSensor1795: TTouchSensorNode;
Shape1796: TShapeNode;
Appearance1797: TAppearanceNode;
Material1798: TMaterialNode;
IndexedFaceSet1799: TIndexedFaceSetNode;
ColorRGBA1800: TColorRGBANode;
Coordinate1801: TCoordinateNode;
Billboard1802: TBillboardNode;
Shape1803: TShapeNode;
Text1804: TTextNode;
FontStyle1805: TFontStyleNode;
Shape1806: TShapeNode;
LineSet1807: TLineSetNode;
ColorRGBA1808: TColorRGBANode;
Coordinate1809: TCoordinateNode;
HAnimJoint1810: THAnimJointNode;
HAnimSegment1811: THAnimSegmentNode;
Shape1812: TShapeNode;
LineSet1813: TLineSetNode;
ColorRGBA1814: TColorRGBANode;
Coordinate1815: TCoordinateNode;
HAnimJoint1816: THAnimJointNode;
HAnimSegment1817: THAnimSegmentNode;
HAnimSite1818: THAnimSiteNode;
TouchSensor1819: TTouchSensorNode;
Shape1820: TShapeNode;
Appearance1821: TAppearanceNode;
Material1822: TMaterialNode;
IndexedFaceSet1823: TIndexedFaceSetNode;
ColorRGBA1824: TColorRGBANode;
Coordinate1825: TCoordinateNode;
Billboard1826: TBillboardNode;
Shape1827: TShapeNode;
Text1828: TTextNode;
FontStyle1829: TFontStyleNode;
Shape1830: TShapeNode;
LineSet1831: TLineSetNode;
ColorRGBA1832: TColorRGBANode;
Coordinate1833: TCoordinateNode;
HAnimJoint1834: THAnimJointNode;
HAnimSegment1835: THAnimSegmentNode;
Shape1836: TShapeNode;
LineSet1837: TLineSetNode;
ColorRGBA1838: TColorRGBANode;
Coordinate1839: TCoordinateNode;
HAnimJoint1840: THAnimJointNode;
HAnimSegment1841: THAnimSegmentNode;
Shape1842: TShapeNode;
LineSet1843: TLineSetNode;
ColorRGBA1844: TColorRGBANode;
Coordinate1845: TCoordinateNode;
HAnimJoint1846: THAnimJointNode;
HAnimSegment1847: THAnimSegmentNode;
HAnimSite1848: THAnimSiteNode;
TouchSensor1849: TTouchSensorNode;
Shape1850: TShapeNode;
Appearance1851: TAppearanceNode;
Material1852: TMaterialNode;
IndexedFaceSet1853: TIndexedFaceSetNode;
ColorRGBA1854: TColorRGBANode;
Coordinate1855: TCoordinateNode;
Billboard1856: TBillboardNode;
Shape1857: TShapeNode;
Text1858: TTextNode;
FontStyle1859: TFontStyleNode;
Shape1860: TShapeNode;
LineSet1861: TLineSetNode;
ColorRGBA1862: TColorRGBANode;
Coordinate1863: TCoordinateNode;
HAnimJoint1864: THAnimJointNode;
HAnimSegment1865: THAnimSegmentNode;
Shape1866: TShapeNode;
LineSet1867: TLineSetNode;
ColorRGBA1868: TColorRGBANode;
Coordinate1869: TCoordinateNode;
HAnimJoint1870: THAnimJointNode;
HAnimSegment1871: THAnimSegmentNode;
Shape1872: TShapeNode;
LineSet1873: TLineSetNode;
ColorRGBA1874: TColorRGBANode;
Coordinate1875: TCoordinateNode;
HAnimJoint1876: THAnimJointNode;
HAnimSegment1877: THAnimSegmentNode;
Shape1878: TShapeNode;
LineSet1879: TLineSetNode;
ColorRGBA1880: TColorRGBANode;
Coordinate1881: TCoordinateNode;
HAnimJoint1882: THAnimJointNode;
HAnimSegment1883: THAnimSegmentNode;
Shape1884: TShapeNode;
LineSet1885: TLineSetNode;
ColorRGBA1886: TColorRGBANode;
Coordinate1887: TCoordinateNode;
HAnimJoint1888: THAnimJointNode;
HAnimSegment1889: THAnimSegmentNode;
HAnimSite1890: THAnimSiteNode;
TouchSensor1891: TTouchSensorNode;
Shape1892: TShapeNode;
Appearance1893: TAppearanceNode;
Material1894: TMaterialNode;
IndexedFaceSet1895: TIndexedFaceSetNode;
ColorRGBA1896: TColorRGBANode;
Coordinate1897: TCoordinateNode;
Billboard1898: TBillboardNode;
Shape1899: TShapeNode;
Text1900: TTextNode;
FontStyle1901: TFontStyleNode;
Shape1902: TShapeNode;
LineSet1903: TLineSetNode;
ColorRGBA1904: TColorRGBANode;
Coordinate1905: TCoordinateNode;
HAnimJoint1906: THAnimJointNode;
HAnimSegment1907: THAnimSegmentNode;
HAnimSite1908: THAnimSiteNode;
TouchSensor1909: TTouchSensorNode;
Shape1910: TShapeNode;
Appearance1911: TAppearanceNode;
Material1912: TMaterialNode;
IndexedFaceSet1913: TIndexedFaceSetNode;
ColorRGBA1914: TColorRGBANode;
Coordinate1915: TCoordinateNode;
Billboard1916: TBillboardNode;
Shape1917: TShapeNode;
Text1918: TTextNode;
FontStyle1919: TFontStyleNode;
Shape1920: TShapeNode;
LineSet1921: TLineSetNode;
ColorRGBA1922: TColorRGBANode;
Coordinate1923: TCoordinateNode;
HAnimJoint1924: THAnimJointNode;
HAnimSegment1925: THAnimSegmentNode;
Shape1926: TShapeNode;
LineSet1927: TLineSetNode;
ColorRGBA1928: TColorRGBANode;
Coordinate1929: TCoordinateNode;
HAnimJoint1930: THAnimJointNode;
HAnimSegment1931: THAnimSegmentNode;
Shape1932: TShapeNode;
LineSet1933: TLineSetNode;
ColorRGBA1934: TColorRGBANode;
Coordinate1935: TCoordinateNode;
HAnimJoint1936: THAnimJointNode;
HAnimSegment1937: THAnimSegmentNode;
HAnimSite1938: THAnimSiteNode;
TouchSensor1939: TTouchSensorNode;
Shape1940: TShapeNode;
Appearance1941: TAppearanceNode;
Material1942: TMaterialNode;
IndexedFaceSet1943: TIndexedFaceSetNode;
ColorRGBA1944: TColorRGBANode;
Coordinate1945: TCoordinateNode;
Billboard1946: TBillboardNode;
Shape1947: TShapeNode;
Text1948: TTextNode;
FontStyle1949: TFontStyleNode;
Shape1950: TShapeNode;
LineSet1951: TLineSetNode;
ColorRGBA1952: TColorRGBANode;
Coordinate1953: TCoordinateNode;
HAnimJoint1954: THAnimJointNode;
HAnimSegment1955: THAnimSegmentNode;
HAnimSite1956: THAnimSiteNode;
TouchSensor1957: TTouchSensorNode;
Shape1958: TShapeNode;
Appearance1959: TAppearanceNode;
Material1960: TMaterialNode;
IndexedFaceSet1961: TIndexedFaceSetNode;
ColorRGBA1962: TColorRGBANode;
Coordinate1963: TCoordinateNode;
Billboard1964: TBillboardNode;
Shape1965: TShapeNode;
Text1966: TTextNode;
FontStyle1967: TFontStyleNode;
Shape1968: TShapeNode;
LineSet1969: TLineSetNode;
ColorRGBA1970: TColorRGBANode;
Coordinate1971: TCoordinateNode;
HAnimJoint1972: THAnimJointNode;
HAnimSegment1973: THAnimSegmentNode;
HAnimSite1974: THAnimSiteNode;
TouchSensor1975: TTouchSensorNode;
Shape1976: TShapeNode;
Appearance1977: TAppearanceNode;
Material1978: TMaterialNode;
IndexedFaceSet1979: TIndexedFaceSetNode;
ColorRGBA1980: TColorRGBANode;
Coordinate1981: TCoordinateNode;
Billboard1982: TBillboardNode;
Shape1983: TShapeNode;
Text1984: TTextNode;
FontStyle1985: TFontStyleNode;
HAnimSite1986: THAnimSiteNode;
TouchSensor1987: TTouchSensorNode;
Shape1988: TShapeNode;
Appearance1989: TAppearanceNode;
Material1990: TMaterialNode;
IndexedFaceSet1991: TIndexedFaceSetNode;
ColorRGBA1992: TColorRGBANode;
Coordinate1993: TCoordinateNode;
Billboard1994: TBillboardNode;
Shape1995: TShapeNode;
Text1996: TTextNode;
FontStyle1997: TFontStyleNode;
HAnimSite1998: THAnimSiteNode;
TouchSensor1999: TTouchSensorNode;
Shape2000: TShapeNode;
Appearance2001: TAppearanceNode;
Material2002: TMaterialNode;
IndexedFaceSet2003: TIndexedFaceSetNode;
ColorRGBA2004: TColorRGBANode;
Coordinate2005: TCoordinateNode;
Billboard2006: TBillboardNode;
Shape2007: TShapeNode;
Text2008: TTextNode;
FontStyle2009: TFontStyleNode;
HAnimSite2010: THAnimSiteNode;
TouchSensor2011: TTouchSensorNode;
Shape2012: TShapeNode;
Appearance2013: TAppearanceNode;
Material2014: TMaterialNode;
IndexedFaceSet2015: TIndexedFaceSetNode;
ColorRGBA2016: TColorRGBANode;
Coordinate2017: TCoordinateNode;
Billboard2018: TBillboardNode;
Shape2019: TShapeNode;
Text2020: TTextNode;
FontStyle2021: TFontStyleNode;
Shape2022: TShapeNode;
LineSet2023: TLineSetNode;
ColorRGBA2024: TColorRGBANode;
Coordinate2025: TCoordinateNode;
HAnimJoint2026: THAnimJointNode;
HAnimSegment2027: THAnimSegmentNode;
HAnimSite2028: THAnimSiteNode;
TouchSensor2029: TTouchSensorNode;
Shape2030: TShapeNode;
Appearance2031: TAppearanceNode;
Material2032: TMaterialNode;
IndexedFaceSet2033: TIndexedFaceSetNode;
ColorRGBA2034: TColorRGBANode;
Coordinate2035: TCoordinateNode;
Billboard2036: TBillboardNode;
Shape2037: TShapeNode;
Text2038: TTextNode;
FontStyle2039: TFontStyleNode;
HAnimSite2040: THAnimSiteNode;
TouchSensor2041: TTouchSensorNode;
Shape2042: TShapeNode;
Appearance2043: TAppearanceNode;
Material2044: TMaterialNode;
IndexedFaceSet2045: TIndexedFaceSetNode;
ColorRGBA2046: TColorRGBANode;
Coordinate2047: TCoordinateNode;
Billboard2048: TBillboardNode;
Shape2049: TShapeNode;
Text2050: TTextNode;
FontStyle2051: TFontStyleNode;
HAnimSite2052: THAnimSiteNode;
TouchSensor2053: TTouchSensorNode;
Shape2054: TShapeNode;
Appearance2055: TAppearanceNode;
Material2056: TMaterialNode;
IndexedFaceSet2057: TIndexedFaceSetNode;
ColorRGBA2058: TColorRGBANode;
Coordinate2059: TCoordinateNode;
Billboard2060: TBillboardNode;
Shape2061: TShapeNode;
Text2062: TTextNode;
FontStyle2063: TFontStyleNode;
HAnimSite2064: THAnimSiteNode;
TouchSensor2065: TTouchSensorNode;
Shape2066: TShapeNode;
Appearance2067: TAppearanceNode;
Material2068: TMaterialNode;
IndexedFaceSet2069: TIndexedFaceSetNode;
ColorRGBA2070: TColorRGBANode;
Coordinate2071: TCoordinateNode;
Billboard2072: TBillboardNode;
Shape2073: TShapeNode;
Text2074: TTextNode;
FontStyle2075: TFontStyleNode;
Shape2076: TShapeNode;
LineSet2077: TLineSetNode;
ColorRGBA2078: TColorRGBANode;
Coordinate2079: TCoordinateNode;
HAnimJoint2080: THAnimJointNode;
HAnimSegment2081: THAnimSegmentNode;
HAnimSite2082: THAnimSiteNode;
TouchSensor2083: TTouchSensorNode;
Shape2084: TShapeNode;
Appearance2085: TAppearanceNode;
Material2086: TMaterialNode;
IndexedFaceSet2087: TIndexedFaceSetNode;
ColorRGBA2088: TColorRGBANode;
Coordinate2089: TCoordinateNode;
Billboard2090: TBillboardNode;
Shape2091: TShapeNode;
Text2092: TTextNode;
FontStyle2093: TFontStyleNode;
HAnimSite2094: THAnimSiteNode;
TouchSensor2095: TTouchSensorNode;
Shape2096: TShapeNode;
Appearance2097: TAppearanceNode;
Material2098: TMaterialNode;
IndexedFaceSet2099: TIndexedFaceSetNode;
ColorRGBA2100: TColorRGBANode;
Coordinate2101: TCoordinateNode;
Billboard2102: TBillboardNode;
Shape2103: TShapeNode;
Text2104: TTextNode;
FontStyle2105: TFontStyleNode;
Shape2106: TShapeNode;
LineSet2107: TLineSetNode;
ColorRGBA2108: TColorRGBANode;
Coordinate2109: TCoordinateNode;
HAnimJoint2110: THAnimJointNode;
HAnimSegment2111: THAnimSegmentNode;
HAnimSite2112: THAnimSiteNode;
TouchSensor2113: TTouchSensorNode;
Shape2114: TShapeNode;
Appearance2115: TAppearanceNode;
Material2116: TMaterialNode;
IndexedFaceSet2117: TIndexedFaceSetNode;
ColorRGBA2118: TColorRGBANode;
Coordinate2119: TCoordinateNode;
Billboard2120: TBillboardNode;
Shape2121: TShapeNode;
Text2122: TTextNode;
FontStyle2123: TFontStyleNode;
Shape2124: TShapeNode;
LineSet2125: TLineSetNode;
ColorRGBA2126: TColorRGBANode;
Coordinate2127: TCoordinateNode;
HAnimJoint2128: THAnimJointNode;
HAnimSegment2129: THAnimSegmentNode;
Shape2130: TShapeNode;
LineSet2131: TLineSetNode;
ColorRGBA2132: TColorRGBANode;
Coordinate2133: TCoordinateNode;
HAnimJoint2134: THAnimJointNode;
HAnimSegment2135: THAnimSegmentNode;
HAnimSite2136: THAnimSiteNode;
TouchSensor2137: TTouchSensorNode;
Shape2138: TShapeNode;
Appearance2139: TAppearanceNode;
Material2140: TMaterialNode;
IndexedFaceSet2141: TIndexedFaceSetNode;
ColorRGBA2142: TColorRGBANode;
Coordinate2143: TCoordinateNode;
Billboard2144: TBillboardNode;
Shape2145: TShapeNode;
Text2146: TTextNode;
FontStyle2147: TFontStyleNode;
Shape2148: TShapeNode;
LineSet2149: TLineSetNode;
ColorRGBA2150: TColorRGBANode;
Coordinate2151: TCoordinateNode;
HAnimJoint2152: THAnimJointNode;
HAnimSegment2153: THAnimSegmentNode;
Shape2154: TShapeNode;
LineSet2155: TLineSetNode;
ColorRGBA2156: TColorRGBANode;
Coordinate2157: TCoordinateNode;
HAnimJoint2158: THAnimJointNode;
HAnimSegment2159: THAnimSegmentNode;
HAnimSite2160: THAnimSiteNode;
TouchSensor2161: TTouchSensorNode;
Shape2162: TShapeNode;
Appearance2163: TAppearanceNode;
Material2164: TMaterialNode;
IndexedFaceSet2165: TIndexedFaceSetNode;
ColorRGBA2166: TColorRGBANode;
Coordinate2167: TCoordinateNode;
Billboard2168: TBillboardNode;
Shape2169: TShapeNode;
Text2170: TTextNode;
FontStyle2171: TFontStyleNode;
Shape2172: TShapeNode;
LineSet2173: TLineSetNode;
ColorRGBA2174: TColorRGBANode;
Coordinate2175: TCoordinateNode;
HAnimJoint2176: THAnimJointNode;
HAnimSegment2177: THAnimSegmentNode;
Shape2178: TShapeNode;
LineSet2179: TLineSetNode;
ColorRGBA2180: TColorRGBANode;
Coordinate2181: TCoordinateNode;
HAnimJoint2182: THAnimJointNode;
HAnimSegment2183: THAnimSegmentNode;
Shape2184: TShapeNode;
LineSet2185: TLineSetNode;
ColorRGBA2186: TColorRGBANode;
Coordinate2187: TCoordinateNode;
HAnimJoint2188: THAnimJointNode;
HAnimSegment2189: THAnimSegmentNode;
Shape2190: TShapeNode;
LineSet2191: TLineSetNode;
ColorRGBA2192: TColorRGBANode;
Coordinate2193: TCoordinateNode;
HAnimJoint2194: THAnimJointNode;
HAnimSegment2195: THAnimSegmentNode;
Shape2196: TShapeNode;
LineSet2197: TLineSetNode;
ColorRGBA2198: TColorRGBANode;
Coordinate2199: TCoordinateNode;
HAnimJoint2200: THAnimJointNode;
HAnimSegment2201: THAnimSegmentNode;
HAnimSite2202: THAnimSiteNode;
TouchSensor2203: TTouchSensorNode;
Shape2204: TShapeNode;
Appearance2205: TAppearanceNode;
Material2206: TMaterialNode;
IndexedFaceSet2207: TIndexedFaceSetNode;
ColorRGBA2208: TColorRGBANode;
Coordinate2209: TCoordinateNode;
Billboard2210: TBillboardNode;
Shape2211: TShapeNode;
Text2212: TTextNode;
FontStyle2213: TFontStyleNode;
HAnimSite2214: THAnimSiteNode;
TouchSensor2215: TTouchSensorNode;
Shape2216: TShapeNode;
Appearance2217: TAppearanceNode;
Material2218: TMaterialNode;
IndexedFaceSet2219: TIndexedFaceSetNode;
ColorRGBA2220: TColorRGBANode;
Coordinate2221: TCoordinateNode;
Billboard2222: TBillboardNode;
Shape2223: TShapeNode;
Text2224: TTextNode;
FontStyle2225: TFontStyleNode;
Shape2226: TShapeNode;
LineSet2227: TLineSetNode;
ColorRGBA2228: TColorRGBANode;
Coordinate2229: TCoordinateNode;
HAnimJoint2230: THAnimJointNode;
HAnimSegment2231: THAnimSegmentNode;
Shape2232: TShapeNode;
LineSet2233: TLineSetNode;
ColorRGBA2234: TColorRGBANode;
Coordinate2235: TCoordinateNode;
HAnimJoint2236: THAnimJointNode;
HAnimSegment2237: THAnimSegmentNode;
HAnimSite2238: THAnimSiteNode;
TouchSensor2239: TTouchSensorNode;
Shape2240: TShapeNode;
Appearance2241: TAppearanceNode;
Material2242: TMaterialNode;
IndexedFaceSet2243: TIndexedFaceSetNode;
ColorRGBA2244: TColorRGBANode;
Coordinate2245: TCoordinateNode;
Billboard2246: TBillboardNode;
Shape2247: TShapeNode;
Text2248: TTextNode;
FontStyle2249: TFontStyleNode;
Shape2250: TShapeNode;
LineSet2251: TLineSetNode;
ColorRGBA2252: TColorRGBANode;
Coordinate2253: TCoordinateNode;
HAnimJoint2254: THAnimJointNode;
HAnimSegment2255: THAnimSegmentNode;
Shape2256: TShapeNode;
LineSet2257: TLineSetNode;
ColorRGBA2258: TColorRGBANode;
Coordinate2259: TCoordinateNode;
HAnimJoint2260: THAnimJointNode;
HAnimSegment2261: THAnimSegmentNode;
Shape2262: TShapeNode;
LineSet2263: TLineSetNode;
ColorRGBA2264: TColorRGBANode;
Coordinate2265: TCoordinateNode;
HAnimJoint2266: THAnimJointNode;
HAnimSegment2267: THAnimSegmentNode;
HAnimSite2268: THAnimSiteNode;
TouchSensor2269: TTouchSensorNode;
Shape2270: TShapeNode;
Appearance2271: TAppearanceNode;
Material2272: TMaterialNode;
IndexedFaceSet2273: TIndexedFaceSetNode;
ColorRGBA2274: TColorRGBANode;
Coordinate2275: TCoordinateNode;
Billboard2276: TBillboardNode;
Shape2277: TShapeNode;
Text2278: TTextNode;
FontStyle2279: TFontStyleNode;
Shape2280: TShapeNode;
LineSet2281: TLineSetNode;
ColorRGBA2282: TColorRGBANode;
Coordinate2283: TCoordinateNode;
HAnimJoint2284: THAnimJointNode;
HAnimSegment2285: THAnimSegmentNode;
Shape2286: TShapeNode;
LineSet2287: TLineSetNode;
ColorRGBA2288: TColorRGBANode;
Coordinate2289: TCoordinateNode;
HAnimJoint2290: THAnimJointNode;
HAnimSegment2291: THAnimSegmentNode;
Shape2292: TShapeNode;
LineSet2293: TLineSetNode;
ColorRGBA2294: TColorRGBANode;
Coordinate2295: TCoordinateNode;
HAnimJoint2296: THAnimJointNode;
HAnimSegment2297: THAnimSegmentNode;
Shape2298: TShapeNode;
LineSet2299: TLineSetNode;
ColorRGBA2300: TColorRGBANode;
Coordinate2301: TCoordinateNode;
HAnimJoint2302: THAnimJointNode;
HAnimSegment2303: THAnimSegmentNode;
Shape2304: TShapeNode;
LineSet2305: TLineSetNode;
ColorRGBA2306: TColorRGBANode;
Coordinate2307: TCoordinateNode;
HAnimJoint2308: THAnimJointNode;
HAnimSegment2309: THAnimSegmentNode;
HAnimSite2310: THAnimSiteNode;
TouchSensor2311: TTouchSensorNode;
Shape2312: TShapeNode;
Appearance2313: TAppearanceNode;
Material2314: TMaterialNode;
IndexedFaceSet2315: TIndexedFaceSetNode;
ColorRGBA2316: TColorRGBANode;
Coordinate2317: TCoordinateNode;
Billboard2318: TBillboardNode;
Shape2319: TShapeNode;
Text2320: TTextNode;
FontStyle2321: TFontStyleNode;
Shape2322: TShapeNode;
LineSet2323: TLineSetNode;
ColorRGBA2324: TColorRGBANode;
Coordinate2325: TCoordinateNode;
HAnimJoint2326: THAnimJointNode;
HAnimSegment2327: THAnimSegmentNode;
HAnimSite2328: THAnimSiteNode;
TouchSensor2329: TTouchSensorNode;
Shape2330: TShapeNode;
Appearance2331: TAppearanceNode;
Material2332: TMaterialNode;
IndexedFaceSet2333: TIndexedFaceSetNode;
ColorRGBA2334: TColorRGBANode;
Coordinate2335: TCoordinateNode;
Billboard2336: TBillboardNode;
Shape2337: TShapeNode;
Text2338: TTextNode;
FontStyle2339: TFontStyleNode;
Shape2340: TShapeNode;
LineSet2341: TLineSetNode;
ColorRGBA2342: TColorRGBANode;
Coordinate2343: TCoordinateNode;
HAnimJoint2344: THAnimJointNode;
HAnimSegment2345: THAnimSegmentNode;
Shape2346: TShapeNode;
LineSet2347: TLineSetNode;
ColorRGBA2348: TColorRGBANode;
Coordinate2349: TCoordinateNode;
HAnimJoint2350: THAnimJointNode;
HAnimSegment2351: THAnimSegmentNode;
Shape2352: TShapeNode;
LineSet2353: TLineSetNode;
ColorRGBA2354: TColorRGBANode;
Coordinate2355: TCoordinateNode;
HAnimJoint2356: THAnimJointNode;
HAnimSegment2357: THAnimSegmentNode;
HAnimSite2358: THAnimSiteNode;
TouchSensor2359: TTouchSensorNode;
Shape2360: TShapeNode;
Appearance2361: TAppearanceNode;
Material2362: TMaterialNode;
IndexedFaceSet2363: TIndexedFaceSetNode;
ColorRGBA2364: TColorRGBANode;
Coordinate2365: TCoordinateNode;
Billboard2366: TBillboardNode;
Shape2367: TShapeNode;
Text2368: TTextNode;
FontStyle2369: TFontStyleNode;
Shape2370: TShapeNode;
LineSet2371: TLineSetNode;
ColorRGBA2372: TColorRGBANode;
Coordinate2373: TCoordinateNode;
NavigationInfo2374: TNavigationInfoNode;
Background2375: TBackgroundNode;
DirectionalLight2376: TDirectionalLightNode;
Viewpoint2377: TViewpointNode;
Transform2378: TTransformNode;
Shape2379: TShapeNode;
Appearance2380: TAppearanceNode;
Material2381: TMaterialNode;
Sphere2382: TSphereNode;

procedure InitJin20fSegmentedPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'JinScaledV2L1LOA4MinimumSkeleton20f.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group4 := TGroupNode.Create;;
{ https://www.web3d.org/documents/specifications/19774/V2.0/index.html }
{ 0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule. }
WorldInfo5 := TWorldInfoNode.Create;;
WorldInfo5.Title := '20f Jin v2 loa4 Level 1, Joints, Segments, Sites';
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(WorldInfo5);
Transform6 := TTransformNode.Create;;
Shape7 := TShapeNode.Create;;
{ Red +X, Green +Y, Blue +Z }
IndexedLineSet8 := TIndexedLineSetNode.Create;;
IndexedLineSet8.SetColorIndex([0,1,2]);
IndexedLineSet8.ColorPerVertex := False;
IndexedLineSet8.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Color9 := TColorNode.Create;;
Color9.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedLineSet8.Color := Color9;
Coordinate10 := TCoordinateNode.Create;;
Coordinate10.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet8.Coord := Coordinate10;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape7.Geometry := IndexedLineSet8;
{ METHOD .FdChildren.Add }
Transform6.FdChildren.Add(Shape7);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Transform6);
HAnimHumanoid11 := THAnimHumanoidNode.Create;;
HAnimHumanoid11.Loa := 4;
HAnimHumanoid11.Version := '2.0';
HAnimJoint12 := THAnimJointNode.Create;;
HAnimJoint12.Center := Vector3(0,0.77,0);
HAnimSegment13 := THAnimSegmentNode.Create;
end;

procedure InitJin20fSegmentedPart1;
begin
;
Transform14 := TTransformNode.Create;;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape7);
{ METHOD .FdChildren.Add }
HAnimSegment13.FdChildren.Add(Transform14);
{ METHOD .FdChildren.Add }
HAnimJoint12.FdChildren.Add(HAnimSegment13);
HAnimJoint16 := THAnimJointNode.Create;;
HAnimJoint16.Center := Vector3(0,0.826,0.02);
HAnimSegment17 := THAnimSegmentNode.Create;;
HAnimSite18 := THAnimSiteNode.Create;;
HAnimSite18.Translation := Vector3(0.13,0.92,0.0035);
TouchSensor19 := TTouchSensorNode.Create;;
TouchSensor19.Description := 'HAnimSite 33 hanim_l_iliocristale_pt';
{ METHOD .FdChildren.Add }
HAnimSite18.FdChildren.Add(TouchSensor19);
Shape20 := TShapeNode.Create;;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance21;
IndexedFaceSet23 := TIndexedFaceSetNode.Create;;
IndexedFaceSet23.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet23.CreaseAngle := 0.5;
IndexedFaceSet23.Solid := False;
ColorRGBA24 := TColorRGBANode.Create;;
ColorRGBA24.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet23.Color := ColorRGBA24;
Coordinate25 := TCoordinateNode.Create;;
Coordinate25.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet23.Coord := Coordinate25;
end;

procedure InitJin20fSegmentedPart2;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := IndexedFaceSet23;
{ METHOD .FdChildren.Add }
HAnimSite18.FdChildren.Add(Shape20);
Billboard26 := TBillboardNode.Create;;
Billboard26.AxisOfRotation := Vector3(0,0,0);
Shape27 := TShapeNode.Create;;
Text28 := TTextNode.Create;;
Text28.SetText(['33']);
FontStyle29 := TFontStyleNode.Create;;
FontStyle29.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text28.FontStyle := FontStyle29;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape27.Geometry := Text28;
{ METHOD .FdChildren.Add }
Billboard26.FdChildren.Add(Shape27);
{ METHOD .FdChildren.Add }
HAnimSite18.FdChildren.Add(Billboard26);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite18);
HAnimSite30 := THAnimSiteNode.Create;;
HAnimSite30.Translation := Vector3(-0.13,0.92,0.0035);
TouchSensor31 := TTouchSensorNode.Create;;
TouchSensor31.Description := 'HAnimSite 36 hanim_r_iliocristale_pt';
{ METHOD .FdChildren.Add }
HAnimSite30.FdChildren.Add(TouchSensor31);
Shape32 := TShapeNode.Create;;
Appearance33 := TAppearanceNode.Create;;
Material34 := TMaterialNode.Create;;
Material34.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance33.Material := Material34;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape32.Appearance := Appearance33;
IndexedFaceSet35 := TIndexedFaceSetNode.Create;;
IndexedFaceSet35.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet35.CreaseAngle := 0.5;
IndexedFaceSet35.Solid := False;
ColorRGBA36 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart3;
begin
;
ColorRGBA36.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet35.Color := ColorRGBA36;
Coordinate37 := TCoordinateNode.Create;;
Coordinate37.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet35.Coord := Coordinate37;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape32.Geometry := IndexedFaceSet35;
{ METHOD .FdChildren.Add }
HAnimSite30.FdChildren.Add(Shape32);
Billboard38 := TBillboardNode.Create;;
Billboard38.AxisOfRotation := Vector3(0,0,0);
Shape39 := TShapeNode.Create;;
Text40 := TTextNode.Create;;
Text40.SetText(['36']);
FontStyle41 := TFontStyleNode.Create;;
FontStyle41.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text40.FontStyle := FontStyle41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape39.Geometry := Text40;
{ METHOD .FdChildren.Add }
Billboard38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
HAnimSite30.FdChildren.Add(Billboard38);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite30);
HAnimSite42 := THAnimSiteNode.Create;;
HAnimSite42.Translation := Vector3(0.14,0.8,0.0035);
TouchSensor43 := TTouchSensorNode.Create;;
TouchSensor43.Description := 'HAnimSite 42 hanim_l_trochanterion_pt';
{ METHOD .FdChildren.Add }
HAnimSite42.FdChildren.Add(TouchSensor43);
Shape44 := TShapeNode.Create;;
Appearance45 := TAppearanceNode.Create;;
Material46 := TMaterialNode.Create;;
Material46.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance45.Material := Material46;
end;

procedure InitJin20fSegmentedPart4;
begin

{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape44.Appearance := Appearance45;
IndexedFaceSet47 := TIndexedFaceSetNode.Create;;
IndexedFaceSet47.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet47.CreaseAngle := 0.5;
IndexedFaceSet47.Solid := False;
ColorRGBA48 := TColorRGBANode.Create;;
ColorRGBA48.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet47.Color := ColorRGBA48;
Coordinate49 := TCoordinateNode.Create;;
Coordinate49.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet47.Coord := Coordinate49;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape44.Geometry := IndexedFaceSet47;
{ METHOD .FdChildren.Add }
HAnimSite42.FdChildren.Add(Shape44);
Billboard50 := TBillboardNode.Create;;
Billboard50.AxisOfRotation := Vector3(0,0,0);
Shape51 := TShapeNode.Create;;
Text52 := TTextNode.Create;;
Text52.SetText(['42']);
FontStyle53 := TFontStyleNode.Create;;
FontStyle53.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text52.FontStyle := FontStyle53;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape51.Geometry := Text52;
{ METHOD .FdChildren.Add }
Billboard50.FdChildren.Add(Shape51);
{ METHOD .FdChildren.Add }
HAnimSite42.FdChildren.Add(Billboard50);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite42);
HAnimSite54 := THAnimSiteNode.Create;;
HAnimSite54.Translation := Vector3(-0.14,0.8,0.0035);
TouchSensor55 := TTouchSensorNode.Create;;
TouchSensor55.Description := 'HAnimSite 46 hanim_r_trochanterion_pt';
{ METHOD .FdChildren.Add }
HAnimSite54.FdChildren.Add(TouchSensor55);
Shape56 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart5;
begin
;
Appearance57 := TAppearanceNode.Create;;
Material58 := TMaterialNode.Create;;
Material58.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance57.Material := Material58;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape56.Appearance := Appearance57;
IndexedFaceSet59 := TIndexedFaceSetNode.Create;;
IndexedFaceSet59.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet59.CreaseAngle := 0.5;
IndexedFaceSet59.Solid := False;
ColorRGBA60 := TColorRGBANode.Create;;
ColorRGBA60.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet59.Color := ColorRGBA60;
Coordinate61 := TCoordinateNode.Create;;
Coordinate61.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet59.Coord := Coordinate61;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape56.Geometry := IndexedFaceSet59;
{ METHOD .FdChildren.Add }
HAnimSite54.FdChildren.Add(Shape56);
Billboard62 := TBillboardNode.Create;;
Billboard62.AxisOfRotation := Vector3(0,0,0);
Shape63 := TShapeNode.Create;;
Text64 := TTextNode.Create;;
Text64.SetText(['46']);
FontStyle65 := TFontStyleNode.Create;;
FontStyle65.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text64.FontStyle := FontStyle65;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape63.Geometry := Text64;
{ METHOD .FdChildren.Add }
Billboard62.FdChildren.Add(Shape63);
{ METHOD .FdChildren.Add }
HAnimSite54.FdChildren.Add(Billboard62);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite54);
HAnimSite66 := THAnimSiteNode.Create;
end;

procedure InitJin20fSegmentedPart6;
begin
;
HAnimSite66.Translation := Vector3(0.1,0.86,0.0035);
TouchSensor67 := TTouchSensorNode.Create;;
TouchSensor67.Description := 'HAnimSite 32 hanim_l_asis_pt';
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(TouchSensor67);
Shape68 := TShapeNode.Create;;
Appearance69 := TAppearanceNode.Create;;
Material70 := TMaterialNode.Create;;
Material70.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance69.Material := Material70;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape68.Appearance := Appearance69;
IndexedFaceSet71 := TIndexedFaceSetNode.Create;;
IndexedFaceSet71.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet71.CreaseAngle := 0.5;
IndexedFaceSet71.Solid := False;
ColorRGBA72 := TColorRGBANode.Create;;
ColorRGBA72.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet71.Color := ColorRGBA72;
Coordinate73 := TCoordinateNode.Create;;
Coordinate73.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet71.Coord := Coordinate73;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape68.Geometry := IndexedFaceSet71;
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(Shape68);
Billboard74 := TBillboardNode.Create;;
Billboard74.AxisOfRotation := Vector3(0,0,0);
Shape75 := TShapeNode.Create;;
Text76 := TTextNode.Create;;
Text76.SetText(['32']);
FontStyle77 := TFontStyleNode.Create;;
end;

procedure InitJin20fSegmentedPart7;
begin

FontStyle77.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text76.FontStyle := FontStyle77;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape75.Geometry := Text76;
{ METHOD .FdChildren.Add }
Billboard74.FdChildren.Add(Shape75);
{ METHOD .FdChildren.Add }
HAnimSite66.FdChildren.Add(Billboard74);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite66);
HAnimSite78 := THAnimSiteNode.Create;;
HAnimSite78.Translation := Vector3(-0.1,0.86,0.0035);
TouchSensor79 := TTouchSensorNode.Create;;
TouchSensor79.Description := 'HAnimSite 35 hanim_r_asis_pt';
{ METHOD .FdChildren.Add }
HAnimSite78.FdChildren.Add(TouchSensor79);
Shape80 := TShapeNode.Create;;
Appearance81 := TAppearanceNode.Create;;
Material82 := TMaterialNode.Create;;
Material82.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance81.Material := Material82;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape80.Appearance := Appearance81;
IndexedFaceSet83 := TIndexedFaceSetNode.Create;;
IndexedFaceSet83.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet83.CreaseAngle := 0.5;
IndexedFaceSet83.Solid := False;
ColorRGBA84 := TColorRGBANode.Create;;
ColorRGBA84.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet83.Color := ColorRGBA84;
Coordinate85 := TCoordinateNode.Create;;
Coordinate85.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet83.Coord := Coordinate85;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape80.Geometry := IndexedFaceSet83;
{ METHOD .FdChildren.Add }
HAnimSite78.FdChildren.Add(Shape80);
Billboard86 := TBillboardNode.Create;;
Billboard86.AxisOfRotation := Vector3(0,0,0);
end;

procedure InitJin20fSegmentedPart8;
begin

Shape87 := TShapeNode.Create;;
Text88 := TTextNode.Create;;
Text88.SetText(['35']);
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
HAnimSite78.FdChildren.Add(Billboard86);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite78);
HAnimSite90 := THAnimSiteNode.Create;;
HAnimSite90.Translation := Vector3(0.05,0.84,-0.11);
TouchSensor91 := TTouchSensorNode.Create;;
TouchSensor91.Description := 'HAnimSite 34 hanim_l_psis_pt';
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(TouchSensor91);
Shape92 := TShapeNode.Create;;
Appearance93 := TAppearanceNode.Create;;
Material94 := TMaterialNode.Create;;
Material94.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance93.Material := Material94;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape92.Appearance := Appearance93;
IndexedFaceSet95 := TIndexedFaceSetNode.Create;;
IndexedFaceSet95.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet95.CreaseAngle := 0.5;
IndexedFaceSet95.Solid := False;
ColorRGBA96 := TColorRGBANode.Create;;
ColorRGBA96.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet95.Color := ColorRGBA96;
Coordinate97 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart9;
begin

Coordinate97.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet95.Coord := Coordinate97;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape92.Geometry := IndexedFaceSet95;
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Shape92);
Billboard98 := TBillboardNode.Create;;
Billboard98.AxisOfRotation := Vector3(0,0,0);
Shape99 := TShapeNode.Create;;
Text100 := TTextNode.Create;;
Text100.SetText(['34']);
FontStyle101 := TFontStyleNode.Create;;
FontStyle101.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text100.FontStyle := FontStyle101;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape99.Geometry := Text100;
{ METHOD .FdChildren.Add }
Billboard98.FdChildren.Add(Shape99);
{ METHOD .FdChildren.Add }
HAnimSite90.FdChildren.Add(Billboard98);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite90);
HAnimSite102 := THAnimSiteNode.Create;;
HAnimSite102.Translation := Vector3(-0.05,0.84,-0.11);
TouchSensor103 := TTouchSensorNode.Create;;
TouchSensor103.Description := 'HAnimSite 37 hanim_r_psis_pt';
{ METHOD .FdChildren.Add }
HAnimSite102.FdChildren.Add(TouchSensor103);
Shape104 := TShapeNode.Create;;
Appearance105 := TAppearanceNode.Create;;
Material106 := TMaterialNode.Create;;
Material106.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance105.Material := Material106;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape104.Appearance := Appearance105;
IndexedFaceSet107 := TIndexedFaceSetNode.Create;;
IndexedFaceSet107.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet107.CreaseAngle := 0.5;
end;

procedure InitJin20fSegmentedPart10;
begin

IndexedFaceSet107.Solid := False;
ColorRGBA108 := TColorRGBANode.Create;;
ColorRGBA108.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet107.Color := ColorRGBA108;
Coordinate109 := TCoordinateNode.Create;;
Coordinate109.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet107.Coord := Coordinate109;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape104.Geometry := IndexedFaceSet107;
{ METHOD .FdChildren.Add }
HAnimSite102.FdChildren.Add(Shape104);
Billboard110 := TBillboardNode.Create;;
Billboard110.AxisOfRotation := Vector3(0,0,0);
Shape111 := TShapeNode.Create;;
Text112 := TTextNode.Create;;
Text112.SetText(['37']);
FontStyle113 := TFontStyleNode.Create;;
FontStyle113.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text112.FontStyle := FontStyle113;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape111.Geometry := Text112;
{ METHOD .FdChildren.Add }
Billboard110.FdChildren.Add(Shape111);
{ METHOD .FdChildren.Add }
HAnimSite102.FdChildren.Add(Billboard110);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite102);
HAnimSite114 := THAnimSiteNode.Create;;
HAnimSite114.Translation := Vector3(0,0.703,0);
TouchSensor115 := TTouchSensorNode.Create;;
TouchSensor115.Description := 'HAnimSite 38 hanim_crotch_pt';
{ METHOD .FdChildren.Add }
HAnimSite114.FdChildren.Add(TouchSensor115);
Shape116 := TShapeNode.Create;;
Appearance117 := TAppearanceNode.Create;;
Material118 := TMaterialNode.Create;;
end;

procedure InitJin20fSegmentedPart11;
begin

Material118.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance117.Material := Material118;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape116.Appearance := Appearance117;
IndexedFaceSet119 := TIndexedFaceSetNode.Create;;
IndexedFaceSet119.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet119.CreaseAngle := 0.5;
IndexedFaceSet119.Solid := False;
ColorRGBA120 := TColorRGBANode.Create;;
ColorRGBA120.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet119.Color := ColorRGBA120;
Coordinate121 := TCoordinateNode.Create;;
Coordinate121.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet119.Coord := Coordinate121;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape116.Geometry := IndexedFaceSet119;
{ METHOD .FdChildren.Add }
HAnimSite114.FdChildren.Add(Shape116);
Billboard122 := TBillboardNode.Create;;
Billboard122.AxisOfRotation := Vector3(0,0,0);
Shape123 := TShapeNode.Create;;
Text124 := TTextNode.Create;;
Text124.SetText(['38']);
FontStyle125 := TFontStyleNode.Create;;
FontStyle125.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text124.FontStyle := FontStyle125;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape123.Geometry := Text124;
{ METHOD .FdChildren.Add }
Billboard122.FdChildren.Add(Shape123);
{ METHOD .FdChildren.Add }
HAnimSite114.FdChildren.Add(Billboard122);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite114);
HAnimSite126 := THAnimSiteNode.Create;;
HAnimSite126.Translation := Vector3(0,0.8,-0.15);
TouchSensor127 := TTouchSensorNode.Create;;
TouchSensor127.Description := 'HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt';
end;

procedure InitJin20fSegmentedPart12;
begin

{ METHOD .FdChildren.Add }
HAnimSite126.FdChildren.Add(TouchSensor127);
Shape128 := TShapeNode.Create;;
Appearance129 := TAppearanceNode.Create;;
Material130 := TMaterialNode.Create;;
Material130.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance129.Material := Material130;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape128.Appearance := Appearance129;
IndexedFaceSet131 := TIndexedFaceSetNode.Create;;
IndexedFaceSet131.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet131.CreaseAngle := 0.5;
IndexedFaceSet131.Solid := False;
ColorRGBA132 := TColorRGBANode.Create;;
ColorRGBA132.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet131.Color := ColorRGBA132;
Coordinate133 := TCoordinateNode.Create;;
Coordinate133.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet131.Coord := Coordinate133;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape128.Geometry := IndexedFaceSet131;
{ METHOD .FdChildren.Add }
HAnimSite126.FdChildren.Add(Shape128);
Billboard134 := TBillboardNode.Create;;
Billboard134.AxisOfRotation := Vector3(0,0,0);
Shape135 := TShapeNode.Create;;
Text136 := TTextNode.Create;;
Text136.SetText(['93']);
FontStyle137 := TFontStyleNode.Create;;
FontStyle137.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text136.FontStyle := FontStyle137;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape135.Geometry := Text136;
{ METHOD .FdChildren.Add }
Billboard134.FdChildren.Add(Shape135);
{ METHOD .FdChildren.Add }
HAnimSite126.FdChildren.Add(Billboard134);
end;

procedure InitJin20fSegmentedPart13;
begin

{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite126);
Shape138 := TShapeNode.Create;;
LineSet139 := TLineSetNode.Create;;
LineSet139.SetVertexCount([2]);
ColorRGBA140 := TColorRGBANode.Create;;
ColorRGBA140.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet139.Color := ColorRGBA140;
Coordinate141 := TCoordinateNode.Create;;
Coordinate141.SetPoint([Vector3(0,0.826,0.02),Vector3(0,0.77,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet139.Coord := Coordinate141;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape138.Geometry := LineSet139;
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(Shape138);
{ METHOD .FdChildren.Add }
HAnimJoint16.FdChildren.Add(HAnimSegment17);
HAnimJoint142 := THAnimJointNode.Create;;
HAnimJoint142.Center := Vector3(0.095,0.8266,-0.0183);
HAnimSegment143 := THAnimSegmentNode.Create;;
HAnimSite144 := THAnimSiteNode.Create;;
HAnimSite144.Translation := Vector3(0.09,0.41,-0.056);
TouchSensor145 := TTouchSensorNode.Create;;
TouchSensor145.Description := 'HAnimSite 90 hanim_l_knee_crease_pt';
{ METHOD .FdChildren.Add }
HAnimSite144.FdChildren.Add(TouchSensor145);
Shape146 := TShapeNode.Create;;
Appearance147 := TAppearanceNode.Create;;
Material148 := TMaterialNode.Create;;
Material148.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance147.Material := Material148;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape146.Appearance := Appearance147;
IndexedFaceSet149 := TIndexedFaceSetNode.Create;;
end;

procedure InitJin20fSegmentedPart14;
begin

IndexedFaceSet149.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet149.CreaseAngle := 0.5;
IndexedFaceSet149.Solid := False;
ColorRGBA150 := TColorRGBANode.Create;;
ColorRGBA150.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet149.Color := ColorRGBA150;
Coordinate151 := TCoordinateNode.Create;;
Coordinate151.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet149.Coord := Coordinate151;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape146.Geometry := IndexedFaceSet149;
{ METHOD .FdChildren.Add }
HAnimSite144.FdChildren.Add(Shape146);
Billboard152 := TBillboardNode.Create;;
Billboard152.AxisOfRotation := Vector3(0,0,0);
Shape153 := TShapeNode.Create;;
Text154 := TTextNode.Create;;
Text154.SetText(['90']);
FontStyle155 := TFontStyleNode.Create;;
FontStyle155.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text154.FontStyle := FontStyle155;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape153.Geometry := Text154;
{ METHOD .FdChildren.Add }
Billboard152.FdChildren.Add(Shape153);
{ METHOD .FdChildren.Add }
HAnimSite144.FdChildren.Add(Billboard152);
{ METHOD .FdChildren.Add }
HAnimSegment143.FdChildren.Add(HAnimSite144);
HAnimSite156 := THAnimSiteNode.Create;;
HAnimSite156.Translation := Vector3(0.039,0.41,-0.01);
TouchSensor157 := TTouchSensorNode.Create;;
TouchSensor157.Description := 'HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite156.FdChildren.Add(TouchSensor157);
Shape158 := TShapeNode.Create;;
Appearance159 := TAppearanceNode.Create;;
end;

procedure InitJin20fSegmentedPart15;
begin

Material160 := TMaterialNode.Create;;
Material160.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance159.Material := Material160;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape158.Appearance := Appearance159;
IndexedFaceSet161 := TIndexedFaceSetNode.Create;;
IndexedFaceSet161.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet161.CreaseAngle := 0.5;
IndexedFaceSet161.Solid := False;
ColorRGBA162 := TColorRGBANode.Create;;
ColorRGBA162.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet161.Color := ColorRGBA162;
Coordinate163 := TCoordinateNode.Create;;
Coordinate163.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet161.Coord := Coordinate163;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape158.Geometry := IndexedFaceSet161;
{ METHOD .FdChildren.Add }
HAnimSite156.FdChildren.Add(Shape158);
Billboard164 := TBillboardNode.Create;;
Billboard164.AxisOfRotation := Vector3(0,0,0);
Shape165 := TShapeNode.Create;;
Text166 := TTextNode.Create;;
Text166.SetText(['40']);
FontStyle167 := TFontStyleNode.Create;;
FontStyle167.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text166.FontStyle := FontStyle167;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape165.Geometry := Text166;
{ METHOD .FdChildren.Add }
Billboard164.FdChildren.Add(Shape165);
{ METHOD .FdChildren.Add }
HAnimSite156.FdChildren.Add(Billboard164);
{ METHOD .FdChildren.Add }
HAnimSegment143.FdChildren.Add(HAnimSite156);
HAnimSite168 := THAnimSiteNode.Create;;
HAnimSite168.Translation := Vector3(0.127,0.41,-0.01);
TouchSensor169 := TTouchSensorNode.Create;
end;

procedure InitJin20fSegmentedPart16;
begin
;
TouchSensor169.Description := 'HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite168.FdChildren.Add(TouchSensor169);
Shape170 := TShapeNode.Create;;
Appearance171 := TAppearanceNode.Create;;
Material172 := TMaterialNode.Create;;
Material172.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance171.Material := Material172;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape170.Appearance := Appearance171;
IndexedFaceSet173 := TIndexedFaceSetNode.Create;;
IndexedFaceSet173.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet173.CreaseAngle := 0.5;
IndexedFaceSet173.Solid := False;
ColorRGBA174 := TColorRGBANode.Create;;
ColorRGBA174.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet173.Color := ColorRGBA174;
Coordinate175 := TCoordinateNode.Create;;
Coordinate175.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet173.Coord := Coordinate175;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape170.Geometry := IndexedFaceSet173;
{ METHOD .FdChildren.Add }
HAnimSite168.FdChildren.Add(Shape170);
Billboard176 := TBillboardNode.Create;;
Billboard176.AxisOfRotation := Vector3(0,0,0);
Shape177 := TShapeNode.Create;;
Text178 := TTextNode.Create;;
Text178.SetText(['39']);
FontStyle179 := TFontStyleNode.Create;;
FontStyle179.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text178.FontStyle := FontStyle179;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape177.Geometry := Text178;
end;

procedure InitJin20fSegmentedPart17;
begin

{ METHOD .FdChildren.Add }
Billboard176.FdChildren.Add(Shape177);
{ METHOD .FdChildren.Add }
HAnimSite168.FdChildren.Add(Billboard176);
{ METHOD .FdChildren.Add }
HAnimSegment143.FdChildren.Add(HAnimSite168);
HAnimSite180 := THAnimSiteNode.Create;;
HAnimSite180.Translation := Vector3(0.085,0.41,0.042);
TouchSensor181 := TTouchSensorNode.Create;;
TouchSensor181.Description := 'HAnimSite 41 hanim_l_suprapatella_pt';
{ METHOD .FdChildren.Add }
HAnimSite180.FdChildren.Add(TouchSensor181);
Shape182 := TShapeNode.Create;;
Appearance183 := TAppearanceNode.Create;;
Material184 := TMaterialNode.Create;;
Material184.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance183.Material := Material184;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape182.Appearance := Appearance183;
IndexedFaceSet185 := TIndexedFaceSetNode.Create;;
IndexedFaceSet185.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet185.CreaseAngle := 0.5;
IndexedFaceSet185.Solid := False;
ColorRGBA186 := TColorRGBANode.Create;;
ColorRGBA186.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet185.Color := ColorRGBA186;
Coordinate187 := TCoordinateNode.Create;;
Coordinate187.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet185.Coord := Coordinate187;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape182.Geometry := IndexedFaceSet185;
{ METHOD .FdChildren.Add }
HAnimSite180.FdChildren.Add(Shape182);
Billboard188 := TBillboardNode.Create;;
Billboard188.AxisOfRotation := Vector3(0,0,0);
Shape189 := TShapeNode.Create;;
Text190 := TTextNode.Create;
end;

procedure InitJin20fSegmentedPart18;
begin
;
Text190.SetText(['41']);
FontStyle191 := TFontStyleNode.Create;;
FontStyle191.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text190.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape189.Geometry := Text190;
{ METHOD .FdChildren.Add }
Billboard188.FdChildren.Add(Shape189);
{ METHOD .FdChildren.Add }
HAnimSite180.FdChildren.Add(Billboard188);
{ METHOD .FdChildren.Add }
HAnimSegment143.FdChildren.Add(HAnimSite180);
Shape192 := TShapeNode.Create;;
LineSet193 := TLineSetNode.Create;;
LineSet193.SetVertexCount([2]);
ColorRGBA194 := TColorRGBANode.Create;;
ColorRGBA194.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet193.Color := ColorRGBA194;
Coordinate195 := TCoordinateNode.Create;;
Coordinate195.SetPoint([Vector3(0.095,0.8266,-0.0183),Vector3(0,0.826,0.02)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet193.Coord := Coordinate195;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape192.Geometry := LineSet193;
{ METHOD .FdChildren.Add }
HAnimSegment143.FdChildren.Add(Shape192);
{ METHOD .FdChildren.Add }
HAnimJoint142.FdChildren.Add(HAnimSegment143);
HAnimJoint196 := THAnimJointNode.Create;;
HAnimJoint196.Center := Vector3(0.0926,0.4088,-0.01944);
HAnimSegment197 := THAnimSegmentNode.Create;;
HAnimSite198 := THAnimSiteNode.Create;;
HAnimSite198.Translation := Vector3(0.09,0.31,0.038);
TouchSensor199 := TTouchSensorNode.Create;;
TouchSensor199.Description := 'HAnimSite 47 hanim_l_tibiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite198.FdChildren.Add(TouchSensor199);
Shape200 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart19;
begin

Appearance201 := TAppearanceNode.Create;;
Material202 := TMaterialNode.Create;;
Material202.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance201.Material := Material202;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape200.Appearance := Appearance201;
IndexedFaceSet203 := TIndexedFaceSetNode.Create;;
IndexedFaceSet203.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet203.CreaseAngle := 0.5;
IndexedFaceSet203.Solid := False;
ColorRGBA204 := TColorRGBANode.Create;;
ColorRGBA204.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet203.Color := ColorRGBA204;
Coordinate205 := TCoordinateNode.Create;;
Coordinate205.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet203.Coord := Coordinate205;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape200.Geometry := IndexedFaceSet203;
{ METHOD .FdChildren.Add }
HAnimSite198.FdChildren.Add(Shape200);
Billboard206 := TBillboardNode.Create;;
Billboard206.AxisOfRotation := Vector3(0,0,0);
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
HAnimSite198.FdChildren.Add(Billboard206);
{ METHOD .FdChildren.Add }
HAnimSegment197.FdChildren.Add(HAnimSite198);
HAnimSite210 := THAnimSiteNode.Create;;
end;

procedure InitJin20fSegmentedPart20;
begin

HAnimSite210.Translation := Vector3(0.061,0.095,-0.02);
TouchSensor211 := TTouchSensorNode.Create;;
TouchSensor211.Description := 'HAnimSite 48 hanim_l_medial_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite210.FdChildren.Add(TouchSensor211);
Shape212 := TShapeNode.Create;;
Appearance213 := TAppearanceNode.Create;;
Material214 := TMaterialNode.Create;;
Material214.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance213.Material := Material214;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape212.Appearance := Appearance213;
IndexedFaceSet215 := TIndexedFaceSetNode.Create;;
IndexedFaceSet215.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet215.CreaseAngle := 0.5;
IndexedFaceSet215.Solid := False;
ColorRGBA216 := TColorRGBANode.Create;;
ColorRGBA216.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet215.Color := ColorRGBA216;
Coordinate217 := TCoordinateNode.Create;;
Coordinate217.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet215.Coord := Coordinate217;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape212.Geometry := IndexedFaceSet215;
{ METHOD .FdChildren.Add }
HAnimSite210.FdChildren.Add(Shape212);
Billboard218 := TBillboardNode.Create;;
Billboard218.AxisOfRotation := Vector3(0,0,0);
Shape219 := TShapeNode.Create;;
Text220 := TTextNode.Create;;
Text220.SetText(['48']);
FontStyle221 := TFontStyleNode.Create;;
FontStyle221.Size := 0.035;
end;

procedure InitJin20fSegmentedPart21;
begin

{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text220.FontStyle := FontStyle221;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape219.Geometry := Text220;
{ METHOD .FdChildren.Add }
Billboard218.FdChildren.Add(Shape219);
{ METHOD .FdChildren.Add }
HAnimSite210.FdChildren.Add(Billboard218);
{ METHOD .FdChildren.Add }
HAnimSegment197.FdChildren.Add(HAnimSite210);
HAnimSite222 := THAnimSiteNode.Create;;
HAnimSite222.Translation := Vector3(0.12,0.095,-0.02);
TouchSensor223 := TTouchSensorNode.Create;;
TouchSensor223.Description := 'HAnimSite 49 hanim_l_lateral_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite222.FdChildren.Add(TouchSensor223);
Shape224 := TShapeNode.Create;;
Appearance225 := TAppearanceNode.Create;;
Material226 := TMaterialNode.Create;;
Material226.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance225.Material := Material226;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape224.Appearance := Appearance225;
IndexedFaceSet227 := TIndexedFaceSetNode.Create;;
IndexedFaceSet227.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet227.CreaseAngle := 0.5;
IndexedFaceSet227.Solid := False;
ColorRGBA228 := TColorRGBANode.Create;;
ColorRGBA228.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet227.Color := ColorRGBA228;
Coordinate229 := TCoordinateNode.Create;;
Coordinate229.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet227.Coord := Coordinate229;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape224.Geometry := IndexedFaceSet227;
{ METHOD .FdChildren.Add }
HAnimSite222.FdChildren.Add(Shape224);
Billboard230 := TBillboardNode.Create;;
Billboard230.AxisOfRotation := Vector3(0,0,0);
Shape231 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart22;
begin
;
Text232 := TTextNode.Create;;
Text232.SetText(['49']);
FontStyle233 := TFontStyleNode.Create;;
FontStyle233.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text232.FontStyle := FontStyle233;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape231.Geometry := Text232;
{ METHOD .FdChildren.Add }
Billboard230.FdChildren.Add(Shape231);
{ METHOD .FdChildren.Add }
HAnimSite222.FdChildren.Add(Billboard230);
{ METHOD .FdChildren.Add }
HAnimSegment197.FdChildren.Add(HAnimSite222);
Shape234 := TShapeNode.Create;;
LineSet235 := TLineSetNode.Create;;
LineSet235.SetVertexCount([2]);
ColorRGBA236 := TColorRGBANode.Create;;
ColorRGBA236.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet235.Color := ColorRGBA236;
Coordinate237 := TCoordinateNode.Create;;
Coordinate237.SetPoint([Vector3(0.0926,0.4088,-0.01944),Vector3(0.095,0.8266,-0.0183)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet235.Coord := Coordinate237;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape234.Geometry := LineSet235;
{ METHOD .FdChildren.Add }
HAnimSegment197.FdChildren.Add(Shape234);
{ METHOD .FdChildren.Add }
HAnimJoint196.FdChildren.Add(HAnimSegment197);
HAnimJoint238 := THAnimJointNode.Create;;
HAnimJoint238.Center := Vector3(0.0888,0.09545,-0.01045);
HAnimSegment239 := THAnimSegmentNode.Create;;
HAnimSite240 := THAnimSiteNode.Create;;
HAnimSite240.Translation := Vector3(0.054,0.065,-0.02);
TouchSensor241 := TTouchSensorNode.Create;;
TouchSensor241.Description := 'HAnimSite 50 hanim_l_sphyrion_pt';
{ METHOD .FdChildren.Add }
HAnimSite240.FdChildren.Add(TouchSensor241);
end;

procedure InitJin20fSegmentedPart23;
begin

Shape242 := TShapeNode.Create;;
Appearance243 := TAppearanceNode.Create;;
Material244 := TMaterialNode.Create;;
Material244.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance243.Material := Material244;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape242.Appearance := Appearance243;
IndexedFaceSet245 := TIndexedFaceSetNode.Create;;
IndexedFaceSet245.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet245.CreaseAngle := 0.5;
IndexedFaceSet245.Solid := False;
ColorRGBA246 := TColorRGBANode.Create;;
ColorRGBA246.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet245.Color := ColorRGBA246;
Coordinate247 := TCoordinateNode.Create;;
Coordinate247.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet245.Coord := Coordinate247;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape242.Geometry := IndexedFaceSet245;
{ METHOD .FdChildren.Add }
HAnimSite240.FdChildren.Add(Shape242);
Billboard248 := TBillboardNode.Create;;
Billboard248.AxisOfRotation := Vector3(0,0,0);
Shape249 := TShapeNode.Create;;
Text250 := TTextNode.Create;;
Text250.SetText(['50']);
FontStyle251 := TFontStyleNode.Create;;
FontStyle251.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text250.FontStyle := FontStyle251;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape249.Geometry := Text250;
{ METHOD .FdChildren.Add }
Billboard248.FdChildren.Add(Shape249);
{ METHOD .FdChildren.Add }
HAnimSite240.FdChildren.Add(Billboard248);
{ METHOD .FdChildren.Add }
HAnimSegment239.FdChildren.Add(HAnimSite240);
end;

procedure InitJin20fSegmentedPart24;
begin

HAnimSite252 := THAnimSiteNode.Create;;
HAnimSite252.Translation := Vector3(0.09,0.03,-0.06);
TouchSensor253 := TTouchSensorNode.Create;;
TouchSensor253.Description := 'HAnimSite 58 hanim_l_calcaneus_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite252.FdChildren.Add(TouchSensor253);
Shape254 := TShapeNode.Create;;
Appearance255 := TAppearanceNode.Create;;
Material256 := TMaterialNode.Create;;
Material256.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance255.Material := Material256;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape254.Appearance := Appearance255;
IndexedFaceSet257 := TIndexedFaceSetNode.Create;;
IndexedFaceSet257.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet257.CreaseAngle := 0.5;
IndexedFaceSet257.Solid := False;
ColorRGBA258 := TColorRGBANode.Create;;
ColorRGBA258.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet257.Color := ColorRGBA258;
Coordinate259 := TCoordinateNode.Create;;
Coordinate259.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet257.Coord := Coordinate259;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape254.Geometry := IndexedFaceSet257;
{ METHOD .FdChildren.Add }
HAnimSite252.FdChildren.Add(Shape254);
Billboard260 := TBillboardNode.Create;;
Billboard260.AxisOfRotation := Vector3(0,0,0);
Shape261 := TShapeNode.Create;;
Text262 := TTextNode.Create;;
Text262.SetText(['58']);
FontStyle263 := TFontStyleNode.Create;
end;

procedure InitJin20fSegmentedPart25;
begin
;
FontStyle263.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text262.FontStyle := FontStyle263;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape261.Geometry := Text262;
{ METHOD .FdChildren.Add }
Billboard260.FdChildren.Add(Shape261);
{ METHOD .FdChildren.Add }
HAnimSite252.FdChildren.Add(Billboard260);
{ METHOD .FdChildren.Add }
HAnimSegment239.FdChildren.Add(HAnimSite252);
Shape264 := TShapeNode.Create;;
LineSet265 := TLineSetNode.Create;;
LineSet265.SetVertexCount([2]);
ColorRGBA266 := TColorRGBANode.Create;;
ColorRGBA266.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet265.Color := ColorRGBA266;
Coordinate267 := TCoordinateNode.Create;;
Coordinate267.SetPoint([Vector3(0.0888,0.09545,-0.01045),Vector3(0.0926,0.4088,-0.01944)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet265.Coord := Coordinate267;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape264.Geometry := LineSet265;
{ METHOD .FdChildren.Add }
HAnimSegment239.FdChildren.Add(Shape264);
{ METHOD .FdChildren.Add }
HAnimJoint238.FdChildren.Add(HAnimSegment239);
HAnimJoint268 := THAnimJointNode.Create;;
HAnimJoint268.Center := Vector3(0.0783,0.0369,0.0049);
HAnimSegment269 := THAnimSegmentNode.Create;;
Shape270 := TShapeNode.Create;;
LineSet271 := TLineSetNode.Create;;
LineSet271.SetVertexCount([2]);
ColorRGBA272 := TColorRGBANode.Create;;
ColorRGBA272.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet271.Color := ColorRGBA272;
Coordinate273 := TCoordinateNode.Create;;
Coordinate273.SetPoint([Vector3(0.0783,0.0369,0.0049),Vector3(0.0888,0.09545,-0.01045)]);
end;

procedure InitJin20fSegmentedPart26;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet271.Coord := Coordinate273;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape270.Geometry := LineSet271;
{ METHOD .FdChildren.Add }
HAnimSegment269.FdChildren.Add(Shape270);
{ METHOD .FdChildren.Add }
HAnimJoint268.FdChildren.Add(HAnimSegment269);
HAnimJoint274 := THAnimJointNode.Create;;
HAnimJoint274.Center := Vector3(0.0674,0.0321,0.0184);
HAnimSegment275 := THAnimSegmentNode.Create;;
Shape276 := TShapeNode.Create;;
LineSet277 := TLineSetNode.Create;;
LineSet277.SetVertexCount([2]);
ColorRGBA278 := TColorRGBANode.Create;;
ColorRGBA278.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet277.Color := ColorRGBA278;
Coordinate279 := TCoordinateNode.Create;;
Coordinate279.SetPoint([Vector3(0.0674,0.0321,0.0184),Vector3(0.0783,0.0369,0.0049)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet277.Coord := Coordinate279;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape276.Geometry := LineSet277;
{ METHOD .FdChildren.Add }
HAnimSegment275.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
HAnimJoint274.FdChildren.Add(HAnimSegment275);
HAnimJoint280 := THAnimJointNode.Create;;
HAnimJoint280.Center := Vector3(0.0646,0.02324,0.0442);
HAnimSegment281 := THAnimSegmentNode.Create;;
Shape282 := TShapeNode.Create;;
LineSet283 := TLineSetNode.Create;;
LineSet283.SetVertexCount([2]);
ColorRGBA284 := TColorRGBANode.Create;;
ColorRGBA284.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet283.Color := ColorRGBA284;
Coordinate285 := TCoordinateNode.Create;
end;

procedure InitJin20fSegmentedPart27;
begin
;
Coordinate285.SetPoint([Vector3(0.0646,0.02324,0.0442),Vector3(0.0674,0.0321,0.0184)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet283.Coord := Coordinate285;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape282.Geometry := LineSet283;
{ METHOD .FdChildren.Add }
HAnimSegment281.FdChildren.Add(Shape282);
{ METHOD .FdChildren.Add }
HAnimJoint280.FdChildren.Add(HAnimSegment281);
HAnimJoint286 := THAnimJointNode.Create;;
HAnimJoint286.Center := Vector3(0.0621,0.01442,0.0936);
HAnimSegment287 := THAnimSegmentNode.Create;;
HAnimSite288 := THAnimSiteNode.Create;;
HAnimSite288.Translation := Vector3(0.062,0.012,0.1);
TouchSensor289 := TTouchSensorNode.Create;;
TouchSensor289.Description := 'HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt';
{ METHOD .FdChildren.Add }
HAnimSite288.FdChildren.Add(TouchSensor289);
Shape290 := TShapeNode.Create;;
Appearance291 := TAppearanceNode.Create;;
Material292 := TMaterialNode.Create;;
Material292.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance291.Material := Material292;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape290.Appearance := Appearance291;
IndexedFaceSet293 := TIndexedFaceSetNode.Create;;
IndexedFaceSet293.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet293.CreaseAngle := 0.5;
IndexedFaceSet293.Solid := False;
ColorRGBA294 := TColorRGBANode.Create;;
ColorRGBA294.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet293.Color := ColorRGBA294;
Coordinate295 := TCoordinateNode.Create;;
Coordinate295.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet293.Coord := Coordinate295;
end;

procedure InitJin20fSegmentedPart28;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape290.Geometry := IndexedFaceSet293;
{ METHOD .FdChildren.Add }
HAnimSite288.FdChildren.Add(Shape290);
Billboard296 := TBillboardNode.Create;;
Billboard296.AxisOfRotation := Vector3(0,0,0);
Shape297 := TShapeNode.Create;;
Text298 := TTextNode.Create;;
Text298.SetText(['55']);
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
HAnimSite288.FdChildren.Add(Billboard296);
{ METHOD .FdChildren.Add }
HAnimSegment287.FdChildren.Add(HAnimSite288);
Shape300 := TShapeNode.Create;;
LineSet301 := TLineSetNode.Create;;
LineSet301.SetVertexCount([2]);
ColorRGBA302 := TColorRGBANode.Create;;
ColorRGBA302.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet301.Color := ColorRGBA302;
Coordinate303 := TCoordinateNode.Create;;
Coordinate303.SetPoint([Vector3(0.0621,0.01442,0.0936),Vector3(0.0646,0.02324,0.0442)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet301.Coord := Coordinate303;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape300.Geometry := LineSet301;
{ METHOD .FdChildren.Add }
HAnimSegment287.FdChildren.Add(Shape300);
{ METHOD .FdChildren.Add }
HAnimJoint286.FdChildren.Add(HAnimSegment287);
HAnimJoint304 := THAnimJointNode.Create;;
HAnimJoint304.Center := Vector3(0.062,0.012,0.115);
HAnimSegment305 := THAnimSegmentNode.Create;;
HAnimSite306 := THAnimSiteNode.Create;
end;

procedure InitJin20fSegmentedPart29;
begin
;
HAnimSite306.Translation := Vector3(0.062,0.012,0.134);
TouchSensor307 := TTouchSensorNode.Create;;
TouchSensor307.Description := 'HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite306.FdChildren.Add(TouchSensor307);
Shape308 := TShapeNode.Create;;
Appearance309 := TAppearanceNode.Create;;
Material310 := TMaterialNode.Create;;
Material310.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance309.Material := Material310;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape308.Appearance := Appearance309;
IndexedFaceSet311 := TIndexedFaceSetNode.Create;;
IndexedFaceSet311.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet311.CreaseAngle := 0.5;
IndexedFaceSet311.Solid := False;
ColorRGBA312 := TColorRGBANode.Create;;
ColorRGBA312.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet311.Color := ColorRGBA312;
Coordinate313 := TCoordinateNode.Create;;
Coordinate313.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet311.Coord := Coordinate313;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape308.Geometry := IndexedFaceSet311;
{ METHOD .FdChildren.Add }
HAnimSite306.FdChildren.Add(Shape308);
Billboard314 := TBillboardNode.Create;;
Billboard314.AxisOfRotation := Vector3(0,0,0);
Shape315 := TShapeNode.Create;;
Text316 := TTextNode.Create;;
Text316.SetText(['111']);
FontStyle317 := TFontStyleNode.Create;;
end;

procedure InitJin20fSegmentedPart30;
begin

FontStyle317.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text316.FontStyle := FontStyle317;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape315.Geometry := Text316;
{ METHOD .FdChildren.Add }
Billboard314.FdChildren.Add(Shape315);
{ METHOD .FdChildren.Add }
HAnimSite306.FdChildren.Add(Billboard314);
{ METHOD .FdChildren.Add }
HAnimSegment305.FdChildren.Add(HAnimSite306);
Shape318 := TShapeNode.Create;;
LineSet319 := TLineSetNode.Create;;
LineSet319.SetVertexCount([2]);
ColorRGBA320 := TColorRGBANode.Create;;
ColorRGBA320.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet319.Color := ColorRGBA320;
Coordinate321 := TCoordinateNode.Create;;
Coordinate321.SetPoint([Vector3(0.062,0.012,0.115),Vector3(0.0621,0.01442,0.0936)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet319.Coord := Coordinate321;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape318.Geometry := LineSet319;
{ METHOD .FdChildren.Add }
HAnimSegment305.FdChildren.Add(Shape318);
{ METHOD .FdChildren.Add }
HAnimJoint304.FdChildren.Add(HAnimSegment305);
{ METHOD .FdChildren.Add }
HAnimJoint286.FdChildren.Add(HAnimJoint304);
{ METHOD .FdChildren.Add }
HAnimJoint280.FdChildren.Add(HAnimJoint286);
{ METHOD .FdChildren.Add }
HAnimJoint274.FdChildren.Add(HAnimJoint280);
{ METHOD .FdChildren.Add }
HAnimJoint268.FdChildren.Add(HAnimJoint274);
HAnimJoint322 := THAnimJointNode.Create;;
HAnimJoint322.Center := Vector3(0.0814,0.0335,0.02143);
HAnimSegment323 := THAnimSegmentNode.Create;;
Shape324 := TShapeNode.Create;;
LineSet325 := TLineSetNode.Create;;
LineSet325.SetVertexCount([2]);
ColorRGBA326 := TColorRGBANode.Create;;
ColorRGBA326.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet325.Color := ColorRGBA326;
end;

procedure InitJin20fSegmentedPart31;
begin

Coordinate327 := TCoordinateNode.Create;;
Coordinate327.SetPoint([Vector3(0.0814,0.0335,0.02143),Vector3(0.0783,0.0369,0.0049)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet325.Coord := Coordinate327;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape324.Geometry := LineSet325;
{ METHOD .FdChildren.Add }
HAnimSegment323.FdChildren.Add(Shape324);
{ METHOD .FdChildren.Add }
HAnimJoint322.FdChildren.Add(HAnimSegment323);
HAnimJoint328 := THAnimJointNode.Create;;
HAnimJoint328.Center := Vector3(0.0802,0.0261,0.0411);
HAnimSegment329 := THAnimSegmentNode.Create;;
Shape330 := TShapeNode.Create;;
LineSet331 := TLineSetNode.Create;;
LineSet331.SetVertexCount([2]);
ColorRGBA332 := TColorRGBANode.Create;;
ColorRGBA332.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet331.Color := ColorRGBA332;
Coordinate333 := TCoordinateNode.Create;;
Coordinate333.SetPoint([Vector3(0.0802,0.0261,0.0411),Vector3(0.0814,0.0335,0.02143)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet331.Coord := Coordinate333;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape330.Geometry := LineSet331;
{ METHOD .FdChildren.Add }
HAnimSegment329.FdChildren.Add(Shape330);
{ METHOD .FdChildren.Add }
HAnimJoint328.FdChildren.Add(HAnimSegment329);
HAnimJoint334 := THAnimJointNode.Create;;
HAnimJoint334.Center := Vector3(0.0825,0.01497,0.09783);
HAnimSegment335 := THAnimSegmentNode.Create;;
Shape336 := TShapeNode.Create;;
LineSet337 := TLineSetNode.Create;;
LineSet337.SetVertexCount([2]);
ColorRGBA338 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart32;
begin

ColorRGBA338.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet337.Color := ColorRGBA338;
Coordinate339 := TCoordinateNode.Create;;
Coordinate339.SetPoint([Vector3(0.0825,0.01497,0.09783),Vector3(0.0802,0.0261,0.0411)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet337.Coord := Coordinate339;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape336.Geometry := LineSet337;
{ METHOD .FdChildren.Add }
HAnimSegment335.FdChildren.Add(Shape336);
{ METHOD .FdChildren.Add }
HAnimJoint334.FdChildren.Add(HAnimSegment335);
HAnimJoint340 := THAnimJointNode.Create;;
HAnimJoint340.Center := Vector3(0.0843,0.01265,0.114);
HAnimSegment341 := THAnimSegmentNode.Create;;
Shape342 := TShapeNode.Create;;
LineSet343 := TLineSetNode.Create;;
LineSet343.SetVertexCount([2]);
ColorRGBA344 := TColorRGBANode.Create;;
ColorRGBA344.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet343.Color := ColorRGBA344;
Coordinate345 := TCoordinateNode.Create;;
Coordinate345.SetPoint([Vector3(0.0843,0.01265,0.114),Vector3(0.0825,0.01497,0.09783)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet343.Coord := Coordinate345;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape342.Geometry := LineSet343;
{ METHOD .FdChildren.Add }
HAnimSegment341.FdChildren.Add(Shape342);
{ METHOD .FdChildren.Add }
HAnimJoint340.FdChildren.Add(HAnimSegment341);
HAnimJoint346 := THAnimJointNode.Create;;
HAnimJoint346.Center := Vector3(0.0843,0.00982,0.123435);
HAnimSegment347 := THAnimSegmentNode.Create;;
HAnimSite348 := THAnimSiteNode.Create;;
HAnimSite348.Translation := Vector3(0.08,0.016,0.14);
TouchSensor349 := TTouchSensorNode.Create;;
end;

procedure InitJin20fSegmentedPart33;
begin

TouchSensor349.Description := 'HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite348.FdChildren.Add(TouchSensor349);
Shape350 := TShapeNode.Create;;
Appearance351 := TAppearanceNode.Create;;
Material352 := TMaterialNode.Create;;
Material352.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance351.Material := Material352;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape350.Appearance := Appearance351;
IndexedFaceSet353 := TIndexedFaceSetNode.Create;;
IndexedFaceSet353.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet353.CreaseAngle := 0.5;
IndexedFaceSet353.Solid := False;
ColorRGBA354 := TColorRGBANode.Create;;
ColorRGBA354.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet353.Color := ColorRGBA354;
Coordinate355 := TCoordinateNode.Create;;
Coordinate355.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet353.Coord := Coordinate355;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape350.Geometry := IndexedFaceSet353;
{ METHOD .FdChildren.Add }
HAnimSite348.FdChildren.Add(Shape350);
Billboard356 := TBillboardNode.Create;;
Billboard356.AxisOfRotation := Vector3(0,0,0);
Shape357 := TShapeNode.Create;;
Text358 := TTextNode.Create;;
Text358.SetText(['112']);
FontStyle359 := TFontStyleNode.Create;;
FontStyle359.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text358.FontStyle := FontStyle359;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape357.Geometry := Text358;
{ METHOD .FdChildren.Add }
Billboard356.FdChildren.Add(Shape357);
end;

procedure InitJin20fSegmentedPart34;
begin

{ METHOD .FdChildren.Add }
HAnimSite348.FdChildren.Add(Billboard356);
{ METHOD .FdChildren.Add }
HAnimSegment347.FdChildren.Add(HAnimSite348);
Shape360 := TShapeNode.Create;;
LineSet361 := TLineSetNode.Create;;
LineSet361.SetVertexCount([2]);
ColorRGBA362 := TColorRGBANode.Create;;
ColorRGBA362.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet361.Color := ColorRGBA362;
Coordinate363 := TCoordinateNode.Create;;
Coordinate363.SetPoint([Vector3(0.0843,0.00982,0.123435),Vector3(0.0843,0.01265,0.114)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet361.Coord := Coordinate363;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape360.Geometry := LineSet361;
{ METHOD .FdChildren.Add }
HAnimSegment347.FdChildren.Add(Shape360);
{ METHOD .FdChildren.Add }
HAnimJoint346.FdChildren.Add(HAnimSegment347);
{ METHOD .FdChildren.Add }
HAnimJoint340.FdChildren.Add(HAnimJoint346);
{ METHOD .FdChildren.Add }
HAnimJoint334.FdChildren.Add(HAnimJoint340);
{ METHOD .FdChildren.Add }
HAnimJoint328.FdChildren.Add(HAnimJoint334);
{ METHOD .FdChildren.Add }
HAnimJoint322.FdChildren.Add(HAnimJoint328);
{ METHOD .FdChildren.Add }
HAnimJoint268.FdChildren.Add(HAnimJoint322);
HAnimJoint364 := THAnimJointNode.Create;;
HAnimJoint364.Center := Vector3(0.09297,0.0334,0.01982);
HAnimSegment365 := THAnimSegmentNode.Create;;
Shape366 := TShapeNode.Create;;
LineSet367 := TLineSetNode.Create;;
LineSet367.SetVertexCount([2]);
ColorRGBA368 := TColorRGBANode.Create;;
ColorRGBA368.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet367.Color := ColorRGBA368;
Coordinate369 := TCoordinateNode.Create;;
Coordinate369.SetPoint([Vector3(0.09297,0.0334,0.01982),Vector3(0.0783,0.0369,0.0049)]);
end;

procedure InitJin20fSegmentedPart35;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet367.Coord := Coordinate369;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape366.Geometry := LineSet367;
{ METHOD .FdChildren.Add }
HAnimSegment365.FdChildren.Add(Shape366);
{ METHOD .FdChildren.Add }
HAnimJoint364.FdChildren.Add(HAnimSegment365);
HAnimJoint370 := THAnimJointNode.Create;;
HAnimJoint370.Center := Vector3(0.09459,0.0261,0.0394);
HAnimSegment371 := THAnimSegmentNode.Create;;
Shape372 := TShapeNode.Create;;
LineSet373 := TLineSetNode.Create;;
LineSet373.SetVertexCount([2]);
ColorRGBA374 := TColorRGBANode.Create;;
ColorRGBA374.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet373.Color := ColorRGBA374;
Coordinate375 := TCoordinateNode.Create;;
Coordinate375.SetPoint([Vector3(0.09459,0.0261,0.0394),Vector3(0.09297,0.0334,0.01982)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet373.Coord := Coordinate375;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape372.Geometry := LineSet373;
{ METHOD .FdChildren.Add }
HAnimSegment371.FdChildren.Add(Shape372);
{ METHOD .FdChildren.Add }
HAnimJoint370.FdChildren.Add(HAnimSegment371);
HAnimJoint376 := THAnimJointNode.Create;;
HAnimJoint376.Center := Vector3(0.0965,0.01505,0.0954);
HAnimSegment377 := THAnimSegmentNode.Create;;
Shape378 := TShapeNode.Create;;
LineSet379 := TLineSetNode.Create;;
LineSet379.SetVertexCount([2]);
ColorRGBA380 := TColorRGBANode.Create;;
ColorRGBA380.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet379.Color := ColorRGBA380;
Coordinate381 := TCoordinateNode.Create;
end;

procedure InitJin20fSegmentedPart36;
begin
;
Coordinate381.SetPoint([Vector3(0.0965,0.01505,0.0954),Vector3(0.09459,0.0261,0.0394)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet379.Coord := Coordinate381;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape378.Geometry := LineSet379;
{ METHOD .FdChildren.Add }
HAnimSegment377.FdChildren.Add(Shape378);
{ METHOD .FdChildren.Add }
HAnimJoint376.FdChildren.Add(HAnimSegment377);
HAnimJoint382 := THAnimJointNode.Create;;
HAnimJoint382.Center := Vector3(0.09886,0.01192,0.11047);
HAnimSegment383 := THAnimSegmentNode.Create;;
Shape384 := TShapeNode.Create;;
LineSet385 := TLineSetNode.Create;;
LineSet385.SetVertexCount([2]);
ColorRGBA386 := TColorRGBANode.Create;;
ColorRGBA386.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet385.Color := ColorRGBA386;
Coordinate387 := TCoordinateNode.Create;;
Coordinate387.SetPoint([Vector3(0.09886,0.01192,0.11047),Vector3(0.0965,0.01505,0.0954)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet385.Coord := Coordinate387;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape384.Geometry := LineSet385;
{ METHOD .FdChildren.Add }
HAnimSegment383.FdChildren.Add(Shape384);
{ METHOD .FdChildren.Add }
HAnimJoint382.FdChildren.Add(HAnimSegment383);
HAnimJoint388 := THAnimJointNode.Create;;
HAnimJoint388.Center := Vector3(0.1004,0.00983,0.1197);
HAnimSegment389 := THAnimSegmentNode.Create;;
HAnimSite390 := THAnimSiteNode.Create;;
HAnimSite390.Translation := Vector3(0.1,0.016,0.14);
TouchSensor391 := TTouchSensorNode.Create;;
TouchSensor391.Description := 'HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(TouchSensor391);
Shape392 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart37;
begin
;
Appearance393 := TAppearanceNode.Create;;
Material394 := TMaterialNode.Create;;
Material394.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance393.Material := Material394;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape392.Appearance := Appearance393;
IndexedFaceSet395 := TIndexedFaceSetNode.Create;;
IndexedFaceSet395.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet395.CreaseAngle := 0.5;
IndexedFaceSet395.Solid := False;
ColorRGBA396 := TColorRGBANode.Create;;
ColorRGBA396.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet395.Color := ColorRGBA396;
Coordinate397 := TCoordinateNode.Create;;
Coordinate397.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet395.Coord := Coordinate397;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape392.Geometry := IndexedFaceSet395;
{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(Shape392);
Billboard398 := TBillboardNode.Create;;
Billboard398.AxisOfRotation := Vector3(0,0,0);
Shape399 := TShapeNode.Create;;
Text400 := TTextNode.Create;;
Text400.SetText(['113']);
FontStyle401 := TFontStyleNode.Create;;
FontStyle401.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text400.FontStyle := FontStyle401;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape399.Geometry := Text400;
{ METHOD .FdChildren.Add }
Billboard398.FdChildren.Add(Shape399);
{ METHOD .FdChildren.Add }
HAnimSite390.FdChildren.Add(Billboard398);
{ METHOD .FdChildren.Add }
HAnimSegment389.FdChildren.Add(HAnimSite390);
Shape402 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart38;
begin
;
LineSet403 := TLineSetNode.Create;;
LineSet403.SetVertexCount([2]);
ColorRGBA404 := TColorRGBANode.Create;;
ColorRGBA404.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet403.Color := ColorRGBA404;
Coordinate405 := TCoordinateNode.Create;;
Coordinate405.SetPoint([Vector3(0.1004,0.00983,0.1197),Vector3(0.09886,0.01192,0.11047)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet403.Coord := Coordinate405;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape402.Geometry := LineSet403;
{ METHOD .FdChildren.Add }
HAnimSegment389.FdChildren.Add(Shape402);
{ METHOD .FdChildren.Add }
HAnimJoint388.FdChildren.Add(HAnimSegment389);
{ METHOD .FdChildren.Add }
HAnimJoint382.FdChildren.Add(HAnimJoint388);
{ METHOD .FdChildren.Add }
HAnimJoint376.FdChildren.Add(HAnimJoint382);
{ METHOD .FdChildren.Add }
HAnimJoint370.FdChildren.Add(HAnimJoint376);
{ METHOD .FdChildren.Add }
HAnimJoint364.FdChildren.Add(HAnimJoint370);
{ METHOD .FdChildren.Add }
HAnimJoint268.FdChildren.Add(HAnimJoint364);
{ METHOD .FdChildren.Add }
HAnimJoint238.FdChildren.Add(HAnimJoint268);
HAnimJoint406 := THAnimJointNode.Create;;
HAnimJoint406.Center := Vector3(0.0891,0.05798,-0.0259);
HAnimSegment407 := THAnimSegmentNode.Create;;
Shape408 := TShapeNode.Create;;
LineSet409 := TLineSetNode.Create;;
LineSet409.SetVertexCount([2]);
ColorRGBA410 := TColorRGBANode.Create;;
ColorRGBA410.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet409.Color := ColorRGBA410;
Coordinate411 := TCoordinateNode.Create;;
Coordinate411.SetPoint([Vector3(0.0891,0.05798,-0.0259),Vector3(0.0888,0.09545,-0.01045)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet409.Coord := Coordinate411;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape408.Geometry := LineSet409;
end;

procedure InitJin20fSegmentedPart39;
begin

{ METHOD .FdChildren.Add }
HAnimSegment407.FdChildren.Add(Shape408);
{ METHOD .FdChildren.Add }
HAnimJoint406.FdChildren.Add(HAnimSegment407);
HAnimJoint412 := THAnimJointNode.Create;;
HAnimJoint412.Center := Vector3(0.11063,0.03528,0.0021);
HAnimSegment413 := THAnimSegmentNode.Create;;
Shape414 := TShapeNode.Create;;
LineSet415 := TLineSetNode.Create;;
LineSet415.SetVertexCount([2]);
ColorRGBA416 := TColorRGBANode.Create;;
ColorRGBA416.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet415.Color := ColorRGBA416;
Coordinate417 := TCoordinateNode.Create;;
Coordinate417.SetPoint([Vector3(0.11063,0.03528,0.0021),Vector3(0.0891,0.05798,-0.0259)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet415.Coord := Coordinate417;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape414.Geometry := LineSet415;
{ METHOD .FdChildren.Add }
HAnimSegment413.FdChildren.Add(Shape414);
{ METHOD .FdChildren.Add }
HAnimJoint412.FdChildren.Add(HAnimSegment413);
HAnimJoint418 := THAnimJointNode.Create;;
HAnimJoint418.Center := Vector3(0.10649,0.02454,0.03843);
HAnimSegment419 := THAnimSegmentNode.Create;;
Shape420 := TShapeNode.Create;;
LineSet421 := TLineSetNode.Create;;
LineSet421.SetVertexCount([2]);
ColorRGBA422 := TColorRGBANode.Create;;
ColorRGBA422.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet421.Color := ColorRGBA422;
Coordinate423 := TCoordinateNode.Create;;
Coordinate423.SetPoint([Vector3(0.10649,0.02454,0.03843),Vector3(0.11063,0.03528,0.0021)]);
end;

procedure InitJin20fSegmentedPart40;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet421.Coord := Coordinate423;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape420.Geometry := LineSet421;
{ METHOD .FdChildren.Add }
HAnimSegment419.FdChildren.Add(Shape420);
{ METHOD .FdChildren.Add }
HAnimJoint418.FdChildren.Add(HAnimSegment419);
HAnimJoint424 := THAnimJointNode.Create;;
HAnimJoint424.Center := Vector3(0.109867,0.01435,0.09117);
HAnimSegment425 := THAnimSegmentNode.Create;;
Shape426 := TShapeNode.Create;;
LineSet427 := TLineSetNode.Create;;
LineSet427.SetVertexCount([2]);
ColorRGBA428 := TColorRGBANode.Create;;
ColorRGBA428.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet427.Color := ColorRGBA428;
Coordinate429 := TCoordinateNode.Create;;
Coordinate429.SetPoint([Vector3(0.109867,0.01435,0.09117),Vector3(0.10649,0.02454,0.03843)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet427.Coord := Coordinate429;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape426.Geometry := LineSet427;
{ METHOD .FdChildren.Add }
HAnimSegment425.FdChildren.Add(Shape426);
{ METHOD .FdChildren.Add }
HAnimJoint424.FdChildren.Add(HAnimSegment425);
HAnimJoint430 := THAnimJointNode.Create;;
HAnimJoint430.Center := Vector3(0.11416,0.01224,0.10631);
HAnimSegment431 := THAnimSegmentNode.Create;;
Shape432 := TShapeNode.Create;;
LineSet433 := TLineSetNode.Create;;
LineSet433.SetVertexCount([2]);
ColorRGBA434 := TColorRGBANode.Create;;
ColorRGBA434.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet433.Color := ColorRGBA434;
Coordinate435 := TCoordinateNode.Create;
end;

procedure InitJin20fSegmentedPart41;
begin
;
Coordinate435.SetPoint([Vector3(0.11416,0.01224,0.10631),Vector3(0.109867,0.01435,0.09117)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet433.Coord := Coordinate435;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape432.Geometry := LineSet433;
{ METHOD .FdChildren.Add }
HAnimSegment431.FdChildren.Add(Shape432);
{ METHOD .FdChildren.Add }
HAnimJoint430.FdChildren.Add(HAnimSegment431);
HAnimJoint436 := THAnimJointNode.Create;;
HAnimJoint436.Center := Vector3(0.11567,0.00936,0.11369);
HAnimSegment437 := THAnimSegmentNode.Create;;
HAnimSite438 := THAnimSiteNode.Create;;
HAnimSite438.Translation := Vector3(0.115,0.016,0.13);
TouchSensor439 := TTouchSensorNode.Create;;
TouchSensor439.Description := 'HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite438.FdChildren.Add(TouchSensor439);
Shape440 := TShapeNode.Create;;
Appearance441 := TAppearanceNode.Create;;
Material442 := TMaterialNode.Create;;
Material442.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance441.Material := Material442;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape440.Appearance := Appearance441;
IndexedFaceSet443 := TIndexedFaceSetNode.Create;;
IndexedFaceSet443.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet443.CreaseAngle := 0.5;
IndexedFaceSet443.Solid := False;
ColorRGBA444 := TColorRGBANode.Create;;
ColorRGBA444.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet443.Color := ColorRGBA444;
Coordinate445 := TCoordinateNode.Create;;
Coordinate445.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet443.Coord := Coordinate445;
end;

procedure InitJin20fSegmentedPart42;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape440.Geometry := IndexedFaceSet443;
{ METHOD .FdChildren.Add }
HAnimSite438.FdChildren.Add(Shape440);
Billboard446 := TBillboardNode.Create;;
Billboard446.AxisOfRotation := Vector3(0,0,0);
Shape447 := TShapeNode.Create;;
Text448 := TTextNode.Create;;
Text448.SetText(['114']);
FontStyle449 := TFontStyleNode.Create;;
FontStyle449.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text448.FontStyle := FontStyle449;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape447.Geometry := Text448;
{ METHOD .FdChildren.Add }
Billboard446.FdChildren.Add(Shape447);
{ METHOD .FdChildren.Add }
HAnimSite438.FdChildren.Add(Billboard446);
{ METHOD .FdChildren.Add }
HAnimSegment437.FdChildren.Add(HAnimSite438);
Shape450 := TShapeNode.Create;;
LineSet451 := TLineSetNode.Create;;
LineSet451.SetVertexCount([2]);
ColorRGBA452 := TColorRGBANode.Create;;
ColorRGBA452.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet451.Color := ColorRGBA452;
Coordinate453 := TCoordinateNode.Create;;
Coordinate453.SetPoint([Vector3(0.11567,0.00936,0.11369),Vector3(0.11416,0.01224,0.10631)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet451.Coord := Coordinate453;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape450.Geometry := LineSet451;
{ METHOD .FdChildren.Add }
HAnimSegment437.FdChildren.Add(Shape450);
{ METHOD .FdChildren.Add }
HAnimJoint436.FdChildren.Add(HAnimSegment437);
{ METHOD .FdChildren.Add }
HAnimJoint430.FdChildren.Add(HAnimJoint436);
{ METHOD .FdChildren.Add }
HAnimJoint424.FdChildren.Add(HAnimJoint430);
{ METHOD .FdChildren.Add }
HAnimJoint418.FdChildren.Add(HAnimJoint424);
{ METHOD .FdChildren.Add }
HAnimJoint412.FdChildren.Add(HAnimJoint418);
HAnimJoint454 := THAnimJointNode.Create;;
end;

procedure InitJin20fSegmentedPart43;
begin

HAnimJoint454.Center := Vector3(0.1208,0.02094,0.03474);
HAnimSegment455 := THAnimSegmentNode.Create;;
Shape456 := TShapeNode.Create;;
LineSet457 := TLineSetNode.Create;;
LineSet457.SetVertexCount([2]);
ColorRGBA458 := TColorRGBANode.Create;;
ColorRGBA458.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet457.Color := ColorRGBA458;
Coordinate459 := TCoordinateNode.Create;;
Coordinate459.SetPoint([Vector3(0.1208,0.02094,0.03474),Vector3(0.11063,0.03528,0.0021)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet457.Coord := Coordinate459;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape456.Geometry := LineSet457;
{ METHOD .FdChildren.Add }
HAnimSegment455.FdChildren.Add(Shape456);
{ METHOD .FdChildren.Add }
HAnimJoint454.FdChildren.Add(HAnimSegment455);
HAnimJoint460 := THAnimJointNode.Create;;
HAnimJoint460.Center := Vector3(0.124065,0.01367,0.08656);
HAnimSegment461 := THAnimSegmentNode.Create;;
Shape462 := TShapeNode.Create;;
LineSet463 := TLineSetNode.Create;;
LineSet463.SetVertexCount([2]);
ColorRGBA464 := TColorRGBANode.Create;;
ColorRGBA464.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet463.Color := ColorRGBA464;
Coordinate465 := TCoordinateNode.Create;;
Coordinate465.SetPoint([Vector3(0.124065,0.01367,0.08656),Vector3(0.1208,0.02094,0.03474)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet463.Coord := Coordinate465;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape462.Geometry := LineSet463;
{ METHOD .FdChildren.Add }
HAnimSegment461.FdChildren.Add(Shape462);
{ METHOD .FdChildren.Add }
HAnimJoint460.FdChildren.Add(HAnimSegment461);
end;

procedure InitJin20fSegmentedPart44;
begin

HAnimJoint466 := THAnimJointNode.Create;;
HAnimJoint466.Center := Vector3(0.12638,0.01086,0.09414);
HAnimSegment467 := THAnimSegmentNode.Create;;
HAnimSite468 := THAnimSiteNode.Create;;
HAnimSite468.Translation := Vector3(0.12,0.02,0.04);
TouchSensor469 := TTouchSensorNode.Create;;
TouchSensor469.Description := 'HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(TouchSensor469);
Shape470 := TShapeNode.Create;;
Appearance471 := TAppearanceNode.Create;;
Material472 := TMaterialNode.Create;;
Material472.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance471.Material := Material472;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape470.Appearance := Appearance471;
IndexedFaceSet473 := TIndexedFaceSetNode.Create;;
IndexedFaceSet473.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet473.CreaseAngle := 0.5;
IndexedFaceSet473.Solid := False;
ColorRGBA474 := TColorRGBANode.Create;;
ColorRGBA474.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet473.Color := ColorRGBA474;
Coordinate475 := TCoordinateNode.Create;;
Coordinate475.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet473.Coord := Coordinate475;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape470.Geometry := IndexedFaceSet473;
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(Shape470);
Billboard476 := TBillboardNode.Create;;
Billboard476.AxisOfRotation := Vector3(0,0,0);
Shape477 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart45;
begin
;
Text478 := TTextNode.Create;;
Text478.SetText(['56']);
FontStyle479 := TFontStyleNode.Create;;
FontStyle479.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text478.FontStyle := FontStyle479;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape477.Geometry := Text478;
{ METHOD .FdChildren.Add }
Billboard476.FdChildren.Add(Shape477);
{ METHOD .FdChildren.Add }
HAnimSite468.FdChildren.Add(Billboard476);
{ METHOD .FdChildren.Add }
HAnimSegment467.FdChildren.Add(HAnimSite468);
Shape480 := TShapeNode.Create;;
LineSet481 := TLineSetNode.Create;;
LineSet481.SetVertexCount([2]);
ColorRGBA482 := TColorRGBANode.Create;;
ColorRGBA482.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet481.Color := ColorRGBA482;
Coordinate483 := TCoordinateNode.Create;;
Coordinate483.SetPoint([Vector3(0.12638,0.01086,0.09414),Vector3(0.124065,0.01367,0.08656)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet481.Coord := Coordinate483;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape480.Geometry := LineSet481;
{ METHOD .FdChildren.Add }
HAnimSegment467.FdChildren.Add(Shape480);
{ METHOD .FdChildren.Add }
HAnimJoint466.FdChildren.Add(HAnimSegment467);
HAnimJoint484 := THAnimJointNode.Create;;
HAnimJoint484.Center := Vector3(0.12728,0.00856,0.10188);
HAnimSegment485 := THAnimSegmentNode.Create;;
HAnimSite486 := THAnimSiteNode.Create;;
HAnimSite486.Translation := Vector3(0.125,0.016,0.115);
TouchSensor487 := TTouchSensorNode.Create;;
TouchSensor487.Description := 'HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite486.FdChildren.Add(TouchSensor487);
end;

procedure InitJin20fSegmentedPart46;
begin

Shape488 := TShapeNode.Create;;
Appearance489 := TAppearanceNode.Create;;
Material490 := TMaterialNode.Create;;
Material490.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance489.Material := Material490;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape488.Appearance := Appearance489;
IndexedFaceSet491 := TIndexedFaceSetNode.Create;;
IndexedFaceSet491.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet491.CreaseAngle := 0.5;
IndexedFaceSet491.Solid := False;
ColorRGBA492 := TColorRGBANode.Create;;
ColorRGBA492.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet491.Color := ColorRGBA492;
Coordinate493 := TCoordinateNode.Create;;
Coordinate493.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet491.Coord := Coordinate493;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape488.Geometry := IndexedFaceSet491;
{ METHOD .FdChildren.Add }
HAnimSite486.FdChildren.Add(Shape488);
Billboard494 := TBillboardNode.Create;;
Billboard494.AxisOfRotation := Vector3(0,0,0);
Shape495 := TShapeNode.Create;;
Text496 := TTextNode.Create;;
Text496.SetText(['115']);
FontStyle497 := TFontStyleNode.Create;;
FontStyle497.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text496.FontStyle := FontStyle497;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape495.Geometry := Text496;
{ METHOD .FdChildren.Add }
Billboard494.FdChildren.Add(Shape495);
{ METHOD .FdChildren.Add }
HAnimSite486.FdChildren.Add(Billboard494);
{ METHOD .FdChildren.Add }
HAnimSegment485.FdChildren.Add(HAnimSite486);
end;

procedure InitJin20fSegmentedPart47;
begin

Shape498 := TShapeNode.Create;;
LineSet499 := TLineSetNode.Create;;
LineSet499.SetVertexCount([2]);
ColorRGBA500 := TColorRGBANode.Create;;
ColorRGBA500.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet499.Color := ColorRGBA500;
Coordinate501 := TCoordinateNode.Create;;
Coordinate501.SetPoint([Vector3(0.12728,0.00856,0.10188),Vector3(0.12638,0.01086,0.09414)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet499.Coord := Coordinate501;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape498.Geometry := LineSet499;
{ METHOD .FdChildren.Add }
HAnimSegment485.FdChildren.Add(Shape498);
{ METHOD .FdChildren.Add }
HAnimJoint484.FdChildren.Add(HAnimSegment485);
{ METHOD .FdChildren.Add }
HAnimJoint466.FdChildren.Add(HAnimJoint484);
{ METHOD .FdChildren.Add }
HAnimJoint460.FdChildren.Add(HAnimJoint466);
{ METHOD .FdChildren.Add }
HAnimJoint454.FdChildren.Add(HAnimJoint460);
{ METHOD .FdChildren.Add }
HAnimJoint412.FdChildren.Add(HAnimJoint454);
{ METHOD .FdChildren.Add }
HAnimJoint406.FdChildren.Add(HAnimJoint412);
{ METHOD .FdChildren.Add }
HAnimJoint238.FdChildren.Add(HAnimJoint406);
{ METHOD .FdChildren.Add }
HAnimJoint196.FdChildren.Add(HAnimJoint238);
{ METHOD .FdChildren.Add }
HAnimJoint142.FdChildren.Add(HAnimJoint196);
{ METHOD .FdChildren.Add }
HAnimJoint16.FdChildren.Add(HAnimJoint142);
HAnimJoint502 := THAnimJointNode.Create;;
HAnimJoint502.Center := Vector3(-0.09466,0.82665,-0.01835);
HAnimSegment503 := THAnimSegmentNode.Create;;
HAnimSite504 := THAnimSiteNode.Create;;
HAnimSite504.Translation := Vector3(-0.09,0.41,-0.056);
TouchSensor505 := TTouchSensorNode.Create;;
TouchSensor505.Description := 'HAnimSite 91 hanim_r_knee_crease_pt';
{ METHOD .FdChildren.Add }
HAnimSite504.FdChildren.Add(TouchSensor505);
Shape506 := TShapeNode.Create;;
Appearance507 := TAppearanceNode.Create;
end;

procedure InitJin20fSegmentedPart48;
begin
;
Material508 := TMaterialNode.Create;;
Material508.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance507.Material := Material508;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape506.Appearance := Appearance507;
IndexedFaceSet509 := TIndexedFaceSetNode.Create;;
IndexedFaceSet509.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet509.CreaseAngle := 0.5;
IndexedFaceSet509.Solid := False;
ColorRGBA510 := TColorRGBANode.Create;;
ColorRGBA510.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet509.Color := ColorRGBA510;
Coordinate511 := TCoordinateNode.Create;;
Coordinate511.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet509.Coord := Coordinate511;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape506.Geometry := IndexedFaceSet509;
{ METHOD .FdChildren.Add }
HAnimSite504.FdChildren.Add(Shape506);
Billboard512 := TBillboardNode.Create;;
Billboard512.AxisOfRotation := Vector3(0,0,0);
Shape513 := TShapeNode.Create;;
Text514 := TTextNode.Create;;
Text514.SetText(['91']);
FontStyle515 := TFontStyleNode.Create;;
FontStyle515.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text514.FontStyle := FontStyle515;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape513.Geometry := Text514;
{ METHOD .FdChildren.Add }
Billboard512.FdChildren.Add(Shape513);
{ METHOD .FdChildren.Add }
HAnimSite504.FdChildren.Add(Billboard512);
{ METHOD .FdChildren.Add }
HAnimSegment503.FdChildren.Add(HAnimSite504);
HAnimSite516 := THAnimSiteNode.Create;;
HAnimSite516.Translation := Vector3(-0.039,0.41,-0.01);
end;

procedure InitJin20fSegmentedPart49;
begin

TouchSensor517 := TTouchSensorNode.Create;;
TouchSensor517.Description := 'HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(TouchSensor517);
Shape518 := TShapeNode.Create;;
Appearance519 := TAppearanceNode.Create;;
Material520 := TMaterialNode.Create;;
Material520.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance519.Material := Material520;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape518.Appearance := Appearance519;
IndexedFaceSet521 := TIndexedFaceSetNode.Create;;
IndexedFaceSet521.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet521.CreaseAngle := 0.5;
IndexedFaceSet521.Solid := False;
ColorRGBA522 := TColorRGBANode.Create;;
ColorRGBA522.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet521.Color := ColorRGBA522;
Coordinate523 := TCoordinateNode.Create;;
Coordinate523.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet521.Coord := Coordinate523;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape518.Geometry := IndexedFaceSet521;
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(Shape518);
Billboard524 := TBillboardNode.Create;;
Billboard524.AxisOfRotation := Vector3(0,0,0);
Shape525 := TShapeNode.Create;;
Text526 := TTextNode.Create;;
Text526.SetText(['44']);
FontStyle527 := TFontStyleNode.Create;;
FontStyle527.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text526.FontStyle := FontStyle527;
end;

procedure InitJin20fSegmentedPart50;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape525.Geometry := Text526;
{ METHOD .FdChildren.Add }
Billboard524.FdChildren.Add(Shape525);
{ METHOD .FdChildren.Add }
HAnimSite516.FdChildren.Add(Billboard524);
{ METHOD .FdChildren.Add }
HAnimSegment503.FdChildren.Add(HAnimSite516);
HAnimSite528 := THAnimSiteNode.Create;;
HAnimSite528.Translation := Vector3(-0.127,0.41,-0.01);
TouchSensor529 := TTouchSensorNode.Create;;
TouchSensor529.Description := 'HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite528.FdChildren.Add(TouchSensor529);
Shape530 := TShapeNode.Create;;
Appearance531 := TAppearanceNode.Create;;
Material532 := TMaterialNode.Create;;
Material532.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance531.Material := Material532;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape530.Appearance := Appearance531;
IndexedFaceSet533 := TIndexedFaceSetNode.Create;;
IndexedFaceSet533.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet533.CreaseAngle := 0.5;
IndexedFaceSet533.Solid := False;
ColorRGBA534 := TColorRGBANode.Create;;
ColorRGBA534.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet533.Color := ColorRGBA534;
Coordinate535 := TCoordinateNode.Create;;
Coordinate535.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet533.Coord := Coordinate535;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape530.Geometry := IndexedFaceSet533;
{ METHOD .FdChildren.Add }
HAnimSite528.FdChildren.Add(Shape530);
Billboard536 := TBillboardNode.Create;;
Billboard536.AxisOfRotation := Vector3(0,0,0);
Shape537 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart51;
begin

Text538 := TTextNode.Create;;
Text538.SetText(['43']);
FontStyle539 := TFontStyleNode.Create;;
FontStyle539.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text538.FontStyle := FontStyle539;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape537.Geometry := Text538;
{ METHOD .FdChildren.Add }
Billboard536.FdChildren.Add(Shape537);
{ METHOD .FdChildren.Add }
HAnimSite528.FdChildren.Add(Billboard536);
{ METHOD .FdChildren.Add }
HAnimSegment503.FdChildren.Add(HAnimSite528);
HAnimSite540 := THAnimSiteNode.Create;;
HAnimSite540.Translation := Vector3(-0.085,0.41,0.042);
TouchSensor541 := TTouchSensorNode.Create;;
TouchSensor541.Description := 'HAnimSite 45 hanim_r_suprapatella_pt';
{ METHOD .FdChildren.Add }
HAnimSite540.FdChildren.Add(TouchSensor541);
Shape542 := TShapeNode.Create;;
Appearance543 := TAppearanceNode.Create;;
Material544 := TMaterialNode.Create;;
Material544.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance543.Material := Material544;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape542.Appearance := Appearance543;
IndexedFaceSet545 := TIndexedFaceSetNode.Create;;
IndexedFaceSet545.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet545.CreaseAngle := 0.5;
IndexedFaceSet545.Solid := False;
ColorRGBA546 := TColorRGBANode.Create;;
ColorRGBA546.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet545.Color := ColorRGBA546;
Coordinate547 := TCoordinateNode.Create;;
Coordinate547.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet545.Coord := Coordinate547;
end;

procedure InitJin20fSegmentedPart52;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape542.Geometry := IndexedFaceSet545;
{ METHOD .FdChildren.Add }
HAnimSite540.FdChildren.Add(Shape542);
Billboard548 := TBillboardNode.Create;;
Billboard548.AxisOfRotation := Vector3(0,0,0);
Shape549 := TShapeNode.Create;;
Text550 := TTextNode.Create;;
Text550.SetText(['45']);
FontStyle551 := TFontStyleNode.Create;;
FontStyle551.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text550.FontStyle := FontStyle551;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape549.Geometry := Text550;
{ METHOD .FdChildren.Add }
Billboard548.FdChildren.Add(Shape549);
{ METHOD .FdChildren.Add }
HAnimSite540.FdChildren.Add(Billboard548);
{ METHOD .FdChildren.Add }
HAnimSegment503.FdChildren.Add(HAnimSite540);
Shape552 := TShapeNode.Create;;
LineSet553 := TLineSetNode.Create;;
LineSet553.SetVertexCount([2]);
ColorRGBA554 := TColorRGBANode.Create;;
ColorRGBA554.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet553.Color := ColorRGBA554;
Coordinate555 := TCoordinateNode.Create;;
Coordinate555.SetPoint([Vector3(-0.09466,0.82665,-0.01835),Vector3(0,0.826,0.02)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet553.Coord := Coordinate555;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape552.Geometry := LineSet553;
{ METHOD .FdChildren.Add }
HAnimSegment503.FdChildren.Add(Shape552);
{ METHOD .FdChildren.Add }
HAnimJoint502.FdChildren.Add(HAnimSegment503);
HAnimJoint556 := THAnimJointNode.Create;;
HAnimJoint556.Center := Vector3(-0.0926,0.408825,-0.01944);
HAnimSegment557 := THAnimSegmentNode.Create;;
HAnimSite558 := THAnimSiteNode.Create;
end;

procedure InitJin20fSegmentedPart53;
begin
;
HAnimSite558.Translation := Vector3(-0.09,0.31,0.038);
TouchSensor559 := TTouchSensorNode.Create;;
TouchSensor559.Description := 'HAnimSite 51 hanim_r_tibiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite558.FdChildren.Add(TouchSensor559);
Shape560 := TShapeNode.Create;;
Appearance561 := TAppearanceNode.Create;;
Material562 := TMaterialNode.Create;;
Material562.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance561.Material := Material562;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape560.Appearance := Appearance561;
IndexedFaceSet563 := TIndexedFaceSetNode.Create;;
IndexedFaceSet563.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet563.CreaseAngle := 0.5;
IndexedFaceSet563.Solid := False;
ColorRGBA564 := TColorRGBANode.Create;;
ColorRGBA564.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet563.Color := ColorRGBA564;
Coordinate565 := TCoordinateNode.Create;;
Coordinate565.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet563.Coord := Coordinate565;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape560.Geometry := IndexedFaceSet563;
{ METHOD .FdChildren.Add }
HAnimSite558.FdChildren.Add(Shape560);
Billboard566 := TBillboardNode.Create;;
Billboard566.AxisOfRotation := Vector3(0,0,0);
Shape567 := TShapeNode.Create;;
Text568 := TTextNode.Create;;
Text568.SetText(['51']);
FontStyle569 := TFontStyleNode.Create;;
end;

procedure InitJin20fSegmentedPart54;
begin

FontStyle569.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text568.FontStyle := FontStyle569;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape567.Geometry := Text568;
{ METHOD .FdChildren.Add }
Billboard566.FdChildren.Add(Shape567);
{ METHOD .FdChildren.Add }
HAnimSite558.FdChildren.Add(Billboard566);
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(HAnimSite558);
HAnimSite570 := THAnimSiteNode.Create;;
HAnimSite570.Translation := Vector3(-0.061,0.095,-0.02);
TouchSensor571 := TTouchSensorNode.Create;;
TouchSensor571.Description := 'HAnimSite 52 hanim_r_medial_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite570.FdChildren.Add(TouchSensor571);
Shape572 := TShapeNode.Create;;
Appearance573 := TAppearanceNode.Create;;
Material574 := TMaterialNode.Create;;
Material574.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance573.Material := Material574;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape572.Appearance := Appearance573;
IndexedFaceSet575 := TIndexedFaceSetNode.Create;;
IndexedFaceSet575.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet575.CreaseAngle := 0.5;
IndexedFaceSet575.Solid := False;
ColorRGBA576 := TColorRGBANode.Create;;
ColorRGBA576.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet575.Color := ColorRGBA576;
Coordinate577 := TCoordinateNode.Create;;
Coordinate577.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet575.Coord := Coordinate577;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape572.Geometry := IndexedFaceSet575;
{ METHOD .FdChildren.Add }
HAnimSite570.FdChildren.Add(Shape572);
Billboard578 := TBillboardNode.Create;;
Billboard578.AxisOfRotation := Vector3(0,0,0);
end;

procedure InitJin20fSegmentedPart55;
begin

Shape579 := TShapeNode.Create;;
Text580 := TTextNode.Create;;
Text580.SetText(['52']);
FontStyle581 := TFontStyleNode.Create;;
FontStyle581.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text580.FontStyle := FontStyle581;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape579.Geometry := Text580;
{ METHOD .FdChildren.Add }
Billboard578.FdChildren.Add(Shape579);
{ METHOD .FdChildren.Add }
HAnimSite570.FdChildren.Add(Billboard578);
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(HAnimSite570);
HAnimSite582 := THAnimSiteNode.Create;;
HAnimSite582.Translation := Vector3(-0.12,0.095,-0.02);
TouchSensor583 := TTouchSensorNode.Create;;
TouchSensor583.Description := 'HAnimSite 53 hanim_r_lateral_malleolus_pt';
{ METHOD .FdChildren.Add }
HAnimSite582.FdChildren.Add(TouchSensor583);
Shape584 := TShapeNode.Create;;
Appearance585 := TAppearanceNode.Create;;
Material586 := TMaterialNode.Create;;
Material586.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance585.Material := Material586;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape584.Appearance := Appearance585;
IndexedFaceSet587 := TIndexedFaceSetNode.Create;;
IndexedFaceSet587.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet587.CreaseAngle := 0.5;
IndexedFaceSet587.Solid := False;
ColorRGBA588 := TColorRGBANode.Create;;
ColorRGBA588.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet587.Color := ColorRGBA588;
Coordinate589 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart56;
begin

Coordinate589.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet587.Coord := Coordinate589;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape584.Geometry := IndexedFaceSet587;
{ METHOD .FdChildren.Add }
HAnimSite582.FdChildren.Add(Shape584);
Billboard590 := TBillboardNode.Create;;
Billboard590.AxisOfRotation := Vector3(0,0,0);
Shape591 := TShapeNode.Create;;
Text592 := TTextNode.Create;;
Text592.SetText(['53']);
FontStyle593 := TFontStyleNode.Create;;
FontStyle593.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text592.FontStyle := FontStyle593;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape591.Geometry := Text592;
{ METHOD .FdChildren.Add }
Billboard590.FdChildren.Add(Shape591);
{ METHOD .FdChildren.Add }
HAnimSite582.FdChildren.Add(Billboard590);
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(HAnimSite582);
Shape594 := TShapeNode.Create;;
LineSet595 := TLineSetNode.Create;;
LineSet595.SetVertexCount([2]);
ColorRGBA596 := TColorRGBANode.Create;;
ColorRGBA596.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet595.Color := ColorRGBA596;
Coordinate597 := TCoordinateNode.Create;;
Coordinate597.SetPoint([Vector3(-0.0926,0.408825,-0.01944),Vector3(-0.09466,0.82665,-0.01835)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet595.Coord := Coordinate597;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape594.Geometry := LineSet595;
{ METHOD .FdChildren.Add }
HAnimSegment557.FdChildren.Add(Shape594);
{ METHOD .FdChildren.Add }
HAnimJoint556.FdChildren.Add(HAnimSegment557);
HAnimJoint598 := THAnimJointNode.Create;;
HAnimJoint598.Center := Vector3(-0.08845,0.09544,-0.01045);
HAnimSegment599 := THAnimSegmentNode.Create;
end;

procedure InitJin20fSegmentedPart57;
begin
;
HAnimSite600 := THAnimSiteNode.Create;;
HAnimSite600.Translation := Vector3(-0.054,0.065,-0.02);
TouchSensor601 := TTouchSensorNode.Create;;
TouchSensor601.Description := 'HAnimSite 54 hanim_r_sphyrion_pt';
{ METHOD .FdChildren.Add }
HAnimSite600.FdChildren.Add(TouchSensor601);
Shape602 := TShapeNode.Create;;
Appearance603 := TAppearanceNode.Create;;
Material604 := TMaterialNode.Create;;
Material604.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance603.Material := Material604;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape602.Appearance := Appearance603;
IndexedFaceSet605 := TIndexedFaceSetNode.Create;;
IndexedFaceSet605.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet605.CreaseAngle := 0.5;
IndexedFaceSet605.Solid := False;
ColorRGBA606 := TColorRGBANode.Create;;
ColorRGBA606.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet605.Color := ColorRGBA606;
Coordinate607 := TCoordinateNode.Create;;
Coordinate607.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet605.Coord := Coordinate607;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape602.Geometry := IndexedFaceSet605;
{ METHOD .FdChildren.Add }
HAnimSite600.FdChildren.Add(Shape602);
Billboard608 := TBillboardNode.Create;;
Billboard608.AxisOfRotation := Vector3(0,0,0);
Shape609 := TShapeNode.Create;;
Text610 := TTextNode.Create;;
Text610.SetText(['54']);
end;

procedure InitJin20fSegmentedPart58;
begin

FontStyle611 := TFontStyleNode.Create;;
FontStyle611.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text610.FontStyle := FontStyle611;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape609.Geometry := Text610;
{ METHOD .FdChildren.Add }
Billboard608.FdChildren.Add(Shape609);
{ METHOD .FdChildren.Add }
HAnimSite600.FdChildren.Add(Billboard608);
{ METHOD .FdChildren.Add }
HAnimSegment599.FdChildren.Add(HAnimSite600);
HAnimSite612 := THAnimSiteNode.Create;;
HAnimSite612.Translation := Vector3(-0.09,0.03,-0.06);
TouchSensor613 := TTouchSensorNode.Create;;
TouchSensor613.Description := 'HAnimSite 62 hanim_r_calcaneus_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite612.FdChildren.Add(TouchSensor613);
Shape614 := TShapeNode.Create;;
Appearance615 := TAppearanceNode.Create;;
Material616 := TMaterialNode.Create;;
Material616.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance615.Material := Material616;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape614.Appearance := Appearance615;
IndexedFaceSet617 := TIndexedFaceSetNode.Create;;
IndexedFaceSet617.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet617.CreaseAngle := 0.5;
IndexedFaceSet617.Solid := False;
ColorRGBA618 := TColorRGBANode.Create;;
ColorRGBA618.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet617.Color := ColorRGBA618;
Coordinate619 := TCoordinateNode.Create;;
Coordinate619.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet617.Coord := Coordinate619;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape614.Geometry := IndexedFaceSet617;
{ METHOD .FdChildren.Add }
HAnimSite612.FdChildren.Add(Shape614);
Billboard620 := TBillboardNode.Create;
end;

procedure InitJin20fSegmentedPart59;
begin
;
Billboard620.AxisOfRotation := Vector3(0,0,0);
Shape621 := TShapeNode.Create;;
Text622 := TTextNode.Create;;
Text622.SetText(['62']);
FontStyle623 := TFontStyleNode.Create;;
FontStyle623.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text622.FontStyle := FontStyle623;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape621.Geometry := Text622;
{ METHOD .FdChildren.Add }
Billboard620.FdChildren.Add(Shape621);
{ METHOD .FdChildren.Add }
HAnimSite612.FdChildren.Add(Billboard620);
{ METHOD .FdChildren.Add }
HAnimSegment599.FdChildren.Add(HAnimSite612);
Shape624 := TShapeNode.Create;;
LineSet625 := TLineSetNode.Create;;
LineSet625.SetVertexCount([2]);
ColorRGBA626 := TColorRGBANode.Create;;
ColorRGBA626.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet625.Color := ColorRGBA626;
Coordinate627 := TCoordinateNode.Create;;
Coordinate627.SetPoint([Vector3(-0.08845,0.09544,-0.01045),Vector3(-0.0926,0.408825,-0.01944)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet625.Coord := Coordinate627;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape624.Geometry := LineSet625;
{ METHOD .FdChildren.Add }
HAnimSegment599.FdChildren.Add(Shape624);
{ METHOD .FdChildren.Add }
HAnimJoint598.FdChildren.Add(HAnimSegment599);
HAnimJoint628 := THAnimJointNode.Create;;
HAnimJoint628.Center := Vector3(-0.07794,0.0369,0.00486);
HAnimSegment629 := THAnimSegmentNode.Create;;
Shape630 := TShapeNode.Create;;
LineSet631 := TLineSetNode.Create;;
end;

procedure InitJin20fSegmentedPart60;
begin

LineSet631.SetVertexCount([2]);
ColorRGBA632 := TColorRGBANode.Create;;
ColorRGBA632.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet631.Color := ColorRGBA632;
Coordinate633 := TCoordinateNode.Create;;
Coordinate633.SetPoint([Vector3(-0.07794,0.0369,0.00486),Vector3(-0.08845,0.09544,-0.01045)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet631.Coord := Coordinate633;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape630.Geometry := LineSet631;
{ METHOD .FdChildren.Add }
HAnimSegment629.FdChildren.Add(Shape630);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimSegment629);
HAnimJoint634 := THAnimJointNode.Create;;
HAnimJoint634.Center := Vector3(-0.06698,0.032107,0.01839);
HAnimSegment635 := THAnimSegmentNode.Create;;
Shape636 := TShapeNode.Create;;
LineSet637 := TLineSetNode.Create;;
LineSet637.SetVertexCount([2]);
ColorRGBA638 := TColorRGBANode.Create;;
ColorRGBA638.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet637.Color := ColorRGBA638;
Coordinate639 := TCoordinateNode.Create;;
Coordinate639.SetPoint([Vector3(-0.06698,0.032107,0.01839),Vector3(-0.07794,0.0369,0.00486)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet637.Coord := Coordinate639;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape636.Geometry := LineSet637;
{ METHOD .FdChildren.Add }
HAnimSegment635.FdChildren.Add(Shape636);
{ METHOD .FdChildren.Add }
HAnimJoint634.FdChildren.Add(HAnimSegment635);
HAnimJoint640 := THAnimJointNode.Create;;
HAnimJoint640.Center := Vector3(-0.064,0.02324,0.04419);
HAnimSegment641 := THAnimSegmentNode.Create;;
Shape642 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart61;
begin

LineSet643 := TLineSetNode.Create;;
LineSet643.SetVertexCount([2]);
ColorRGBA644 := TColorRGBANode.Create;;
ColorRGBA644.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet643.Color := ColorRGBA644;
Coordinate645 := TCoordinateNode.Create;;
Coordinate645.SetPoint([Vector3(-0.064,0.02324,0.04419),Vector3(-0.06698,0.032107,0.01839)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet643.Coord := Coordinate645;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape642.Geometry := LineSet643;
{ METHOD .FdChildren.Add }
HAnimSegment641.FdChildren.Add(Shape642);
{ METHOD .FdChildren.Add }
HAnimJoint640.FdChildren.Add(HAnimSegment641);
HAnimJoint646 := THAnimJointNode.Create;;
HAnimJoint646.Center := Vector3(-0.06176,0.014425,0.09362);
HAnimSegment647 := THAnimSegmentNode.Create;;
HAnimSite648 := THAnimSiteNode.Create;;
HAnimSite648.Translation := Vector3(-0.062,0.012,0.1);
TouchSensor649 := TTouchSensorNode.Create;;
TouchSensor649.Description := 'HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt';
{ METHOD .FdChildren.Add }
HAnimSite648.FdChildren.Add(TouchSensor649);
Shape650 := TShapeNode.Create;;
Appearance651 := TAppearanceNode.Create;;
Material652 := TMaterialNode.Create;;
Material652.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance651.Material := Material652;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape650.Appearance := Appearance651;
IndexedFaceSet653 := TIndexedFaceSetNode.Create;;
IndexedFaceSet653.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet653.CreaseAngle := 0.5;
IndexedFaceSet653.Solid := False;
end;

procedure InitJin20fSegmentedPart62;
begin

ColorRGBA654 := TColorRGBANode.Create;;
ColorRGBA654.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet653.Color := ColorRGBA654;
Coordinate655 := TCoordinateNode.Create;;
Coordinate655.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet653.Coord := Coordinate655;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape650.Geometry := IndexedFaceSet653;
{ METHOD .FdChildren.Add }
HAnimSite648.FdChildren.Add(Shape650);
Billboard656 := TBillboardNode.Create;;
Billboard656.AxisOfRotation := Vector3(0,0,0);
Shape657 := TShapeNode.Create;;
Text658 := TTextNode.Create;;
Text658.SetText(['59']);
FontStyle659 := TFontStyleNode.Create;;
FontStyle659.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text658.FontStyle := FontStyle659;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape657.Geometry := Text658;
{ METHOD .FdChildren.Add }
Billboard656.FdChildren.Add(Shape657);
{ METHOD .FdChildren.Add }
HAnimSite648.FdChildren.Add(Billboard656);
{ METHOD .FdChildren.Add }
HAnimSegment647.FdChildren.Add(HAnimSite648);
Shape660 := TShapeNode.Create;;
LineSet661 := TLineSetNode.Create;;
LineSet661.SetVertexCount([2]);
ColorRGBA662 := TColorRGBANode.Create;;
ColorRGBA662.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet661.Color := ColorRGBA662;
Coordinate663 := TCoordinateNode.Create;;
Coordinate663.SetPoint([Vector3(-0.06176,0.014425,0.09362),Vector3(-0.064,0.02324,0.04419)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet661.Coord := Coordinate663;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape660.Geometry := LineSet661;
end;

procedure InitJin20fSegmentedPart63;
begin

{ METHOD .FdChildren.Add }
HAnimSegment647.FdChildren.Add(Shape660);
{ METHOD .FdChildren.Add }
HAnimJoint646.FdChildren.Add(HAnimSegment647);
HAnimJoint664 := THAnimJointNode.Create;;
HAnimJoint664.Center := Vector3(-0.06174,0.0121,0.1153);
HAnimSegment665 := THAnimSegmentNode.Create;;
HAnimSite666 := THAnimSiteNode.Create;;
HAnimSite666.Translation := Vector3(-0.06,0.012,0.14);
TouchSensor667 := TTouchSensorNode.Create;;
TouchSensor667.Description := 'HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite666.FdChildren.Add(TouchSensor667);
Shape668 := TShapeNode.Create;;
Appearance669 := TAppearanceNode.Create;;
Material670 := TMaterialNode.Create;;
Material670.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance669.Material := Material670;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape668.Appearance := Appearance669;
IndexedFaceSet671 := TIndexedFaceSetNode.Create;;
IndexedFaceSet671.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet671.CreaseAngle := 0.5;
IndexedFaceSet671.Solid := False;
ColorRGBA672 := TColorRGBANode.Create;;
ColorRGBA672.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet671.Color := ColorRGBA672;
Coordinate673 := TCoordinateNode.Create;;
Coordinate673.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet671.Coord := Coordinate673;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape668.Geometry := IndexedFaceSet671;
{ METHOD .FdChildren.Add }
HAnimSite666.FdChildren.Add(Shape668);
Billboard674 := TBillboardNode.Create;;
end;

procedure InitJin20fSegmentedPart64;
begin

Billboard674.AxisOfRotation := Vector3(0,0,0);
Shape675 := TShapeNode.Create;;
Text676 := TTextNode.Create;;
Text676.SetText(['116']);
FontStyle677 := TFontStyleNode.Create;;
FontStyle677.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text676.FontStyle := FontStyle677;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape675.Geometry := Text676;
{ METHOD .FdChildren.Add }
Billboard674.FdChildren.Add(Shape675);
{ METHOD .FdChildren.Add }
HAnimSite666.FdChildren.Add(Billboard674);
{ METHOD .FdChildren.Add }
HAnimSegment665.FdChildren.Add(HAnimSite666);
Shape678 := TShapeNode.Create;;
LineSet679 := TLineSetNode.Create;;
LineSet679.SetVertexCount([2]);
ColorRGBA680 := TColorRGBANode.Create;;
ColorRGBA680.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet679.Color := ColorRGBA680;
Coordinate681 := TCoordinateNode.Create;;
Coordinate681.SetPoint([Vector3(-0.06174,0.0121,0.1153),Vector3(-0.06176,0.014425,0.09362)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet679.Coord := Coordinate681;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape678.Geometry := LineSet679;
{ METHOD .FdChildren.Add }
HAnimSegment665.FdChildren.Add(Shape678);
{ METHOD .FdChildren.Add }
HAnimJoint664.FdChildren.Add(HAnimSegment665);
{ METHOD .FdChildren.Add }
HAnimJoint646.FdChildren.Add(HAnimJoint664);
{ METHOD .FdChildren.Add }
HAnimJoint640.FdChildren.Add(HAnimJoint646);
{ METHOD .FdChildren.Add }
HAnimJoint634.FdChildren.Add(HAnimJoint640);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimJoint634);
HAnimJoint682 := THAnimJointNode.Create;;
HAnimJoint682.Center := Vector3(-0.081,0.0335,0.02142);
HAnimSegment683 := THAnimSegmentNode.Create;;
Shape684 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart65;
begin
;
LineSet685 := TLineSetNode.Create;;
LineSet685.SetVertexCount([2]);
ColorRGBA686 := TColorRGBANode.Create;;
ColorRGBA686.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet685.Color := ColorRGBA686;
Coordinate687 := TCoordinateNode.Create;;
Coordinate687.SetPoint([Vector3(-0.081,0.0335,0.02142),Vector3(-0.07794,0.0369,0.00486)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet685.Coord := Coordinate687;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape684.Geometry := LineSet685;
{ METHOD .FdChildren.Add }
HAnimSegment683.FdChildren.Add(Shape684);
{ METHOD .FdChildren.Add }
HAnimJoint682.FdChildren.Add(HAnimSegment683);
HAnimJoint688 := THAnimJointNode.Create;;
HAnimJoint688.Center := Vector3(-0.07983,0.0261,0.04106);
HAnimSegment689 := THAnimSegmentNode.Create;;
Shape690 := TShapeNode.Create;;
LineSet691 := TLineSetNode.Create;;
LineSet691.SetVertexCount([2]);
ColorRGBA692 := TColorRGBANode.Create;;
ColorRGBA692.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet691.Color := ColorRGBA692;
Coordinate693 := TCoordinateNode.Create;;
Coordinate693.SetPoint([Vector3(-0.07983,0.0261,0.04106),Vector3(-0.081,0.0335,0.02142)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet691.Coord := Coordinate693;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape690.Geometry := LineSet691;
{ METHOD .FdChildren.Add }
HAnimSegment689.FdChildren.Add(Shape690);
{ METHOD .FdChildren.Add }
HAnimJoint688.FdChildren.Add(HAnimSegment689);
HAnimJoint694 := THAnimJointNode.Create;;
HAnimJoint694.Center := Vector3(-0.0821,0.01497,0.09783);
HAnimSegment695 := THAnimSegmentNode.Create;
end;

procedure InitJin20fSegmentedPart66;
begin
;
Shape696 := TShapeNode.Create;;
LineSet697 := TLineSetNode.Create;;
LineSet697.SetVertexCount([2]);
ColorRGBA698 := TColorRGBANode.Create;;
ColorRGBA698.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet697.Color := ColorRGBA698;
Coordinate699 := TCoordinateNode.Create;;
Coordinate699.SetPoint([Vector3(-0.0821,0.01497,0.09783),Vector3(-0.07983,0.0261,0.04106)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet697.Coord := Coordinate699;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape696.Geometry := LineSet697;
{ METHOD .FdChildren.Add }
HAnimSegment695.FdChildren.Add(Shape696);
{ METHOD .FdChildren.Add }
HAnimJoint694.FdChildren.Add(HAnimSegment695);
HAnimJoint700 := THAnimJointNode.Create;;
HAnimJoint700.Center := Vector3(-0.0839,0.012647,0.114);
HAnimSegment701 := THAnimSegmentNode.Create;;
Shape702 := TShapeNode.Create;;
LineSet703 := TLineSetNode.Create;;
LineSet703.SetVertexCount([2]);
ColorRGBA704 := TColorRGBANode.Create;;
ColorRGBA704.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet703.Color := ColorRGBA704;
Coordinate705 := TCoordinateNode.Create;;
Coordinate705.SetPoint([Vector3(-0.0839,0.012647,0.114),Vector3(-0.0821,0.01497,0.09783)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet703.Coord := Coordinate705;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape702.Geometry := LineSet703;
{ METHOD .FdChildren.Add }
HAnimSegment701.FdChildren.Add(Shape702);
{ METHOD .FdChildren.Add }
HAnimJoint700.FdChildren.Add(HAnimSegment701);
HAnimJoint706 := THAnimJointNode.Create;;
end;

procedure InitJin20fSegmentedPart67;
begin

HAnimJoint706.Center := Vector3(-0.0839,0.009825,0.123435);
HAnimSegment707 := THAnimSegmentNode.Create;;
HAnimSite708 := THAnimSiteNode.Create;;
HAnimSite708.Translation := Vector3(-0.08,0.016,0.14);
TouchSensor709 := TTouchSensorNode.Create;;
TouchSensor709.Description := 'HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite708.FdChildren.Add(TouchSensor709);
Shape710 := TShapeNode.Create;;
Appearance711 := TAppearanceNode.Create;;
Material712 := TMaterialNode.Create;;
Material712.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance711.Material := Material712;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape710.Appearance := Appearance711;
IndexedFaceSet713 := TIndexedFaceSetNode.Create;;
IndexedFaceSet713.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet713.CreaseAngle := 0.5;
IndexedFaceSet713.Solid := False;
ColorRGBA714 := TColorRGBANode.Create;;
ColorRGBA714.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet713.Color := ColorRGBA714;
Coordinate715 := TCoordinateNode.Create;;
Coordinate715.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet713.Coord := Coordinate715;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape710.Geometry := IndexedFaceSet713;
{ METHOD .FdChildren.Add }
HAnimSite708.FdChildren.Add(Shape710);
Billboard716 := TBillboardNode.Create;;
Billboard716.AxisOfRotation := Vector3(0,0,0);
Shape717 := TShapeNode.Create;;
Text718 := TTextNode.Create;
end;

procedure InitJin20fSegmentedPart68;
begin
;
Text718.SetText(['117']);
FontStyle719 := TFontStyleNode.Create;;
FontStyle719.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text718.FontStyle := FontStyle719;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape717.Geometry := Text718;
{ METHOD .FdChildren.Add }
Billboard716.FdChildren.Add(Shape717);
{ METHOD .FdChildren.Add }
HAnimSite708.FdChildren.Add(Billboard716);
{ METHOD .FdChildren.Add }
HAnimSegment707.FdChildren.Add(HAnimSite708);
Shape720 := TShapeNode.Create;;
LineSet721 := TLineSetNode.Create;;
LineSet721.SetVertexCount([2]);
ColorRGBA722 := TColorRGBANode.Create;;
ColorRGBA722.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet721.Color := ColorRGBA722;
Coordinate723 := TCoordinateNode.Create;;
Coordinate723.SetPoint([Vector3(-0.0839,0.009825,0.123435),Vector3(-0.0839,0.012647,0.114)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet721.Coord := Coordinate723;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape720.Geometry := LineSet721;
{ METHOD .FdChildren.Add }
HAnimSegment707.FdChildren.Add(Shape720);
{ METHOD .FdChildren.Add }
HAnimJoint706.FdChildren.Add(HAnimSegment707);
{ METHOD .FdChildren.Add }
HAnimJoint700.FdChildren.Add(HAnimJoint706);
{ METHOD .FdChildren.Add }
HAnimJoint694.FdChildren.Add(HAnimJoint700);
{ METHOD .FdChildren.Add }
HAnimJoint688.FdChildren.Add(HAnimJoint694);
{ METHOD .FdChildren.Add }
HAnimJoint682.FdChildren.Add(HAnimJoint688);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimJoint682);
HAnimJoint724 := THAnimJointNode.Create;;
HAnimJoint724.Center := Vector3(-0.09261,0.03339,0.01982);
HAnimSegment725 := THAnimSegmentNode.Create;;
Shape726 := TShapeNode.Create;;
LineSet727 := TLineSetNode.Create;;
end;

procedure InitJin20fSegmentedPart69;
begin

LineSet727.SetVertexCount([2]);
ColorRGBA728 := TColorRGBANode.Create;;
ColorRGBA728.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet727.Color := ColorRGBA728;
Coordinate729 := TCoordinateNode.Create;;
Coordinate729.SetPoint([Vector3(-0.09261,0.03339,0.01982),Vector3(-0.07794,0.0369,0.00486)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet727.Coord := Coordinate729;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape726.Geometry := LineSet727;
{ METHOD .FdChildren.Add }
HAnimSegment725.FdChildren.Add(Shape726);
{ METHOD .FdChildren.Add }
HAnimJoint724.FdChildren.Add(HAnimSegment725);
HAnimJoint730 := THAnimJointNode.Create;;
HAnimJoint730.Center := Vector3(-0.09423,0.0261,0.0394);
HAnimSegment731 := THAnimSegmentNode.Create;;
Shape732 := TShapeNode.Create;;
LineSet733 := TLineSetNode.Create;;
LineSet733.SetVertexCount([2]);
ColorRGBA734 := TColorRGBANode.Create;;
ColorRGBA734.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet733.Color := ColorRGBA734;
Coordinate735 := TCoordinateNode.Create;;
Coordinate735.SetPoint([Vector3(-0.09423,0.0261,0.0394),Vector3(-0.09261,0.03339,0.01982)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet733.Coord := Coordinate735;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape732.Geometry := LineSet733;
{ METHOD .FdChildren.Add }
HAnimSegment731.FdChildren.Add(Shape732);
{ METHOD .FdChildren.Add }
HAnimJoint730.FdChildren.Add(HAnimSegment731);
HAnimJoint736 := THAnimJointNode.Create;;
HAnimJoint736.Center := Vector3(-0.0961,0.01505,0.09542);
HAnimSegment737 := THAnimSegmentNode.Create;;
Shape738 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart70;
begin

LineSet739 := TLineSetNode.Create;;
LineSet739.SetVertexCount([2]);
ColorRGBA740 := TColorRGBANode.Create;;
ColorRGBA740.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet739.Color := ColorRGBA740;
Coordinate741 := TCoordinateNode.Create;;
Coordinate741.SetPoint([Vector3(-0.0961,0.01505,0.09542),Vector3(-0.09423,0.0261,0.0394)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet739.Coord := Coordinate741;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape738.Geometry := LineSet739;
{ METHOD .FdChildren.Add }
HAnimSegment737.FdChildren.Add(Shape738);
{ METHOD .FdChildren.Add }
HAnimJoint736.FdChildren.Add(HAnimSegment737);
HAnimJoint742 := THAnimJointNode.Create;;
HAnimJoint742.Center := Vector3(-0.0985,0.01192,0.11047);
HAnimSegment743 := THAnimSegmentNode.Create;;
Shape744 := TShapeNode.Create;;
LineSet745 := TLineSetNode.Create;;
LineSet745.SetVertexCount([2]);
ColorRGBA746 := TColorRGBANode.Create;;
ColorRGBA746.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet745.Color := ColorRGBA746;
Coordinate747 := TCoordinateNode.Create;;
Coordinate747.SetPoint([Vector3(-0.0985,0.01192,0.11047),Vector3(-0.0961,0.01505,0.09542)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet745.Coord := Coordinate747;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape744.Geometry := LineSet745;
{ METHOD .FdChildren.Add }
HAnimSegment743.FdChildren.Add(Shape744);
{ METHOD .FdChildren.Add }
HAnimJoint742.FdChildren.Add(HAnimSegment743);
HAnimJoint748 := THAnimJointNode.Create;;
HAnimJoint748.Center := Vector3(-0.100035,0.00982,0.1197);
HAnimSegment749 := THAnimSegmentNode.Create;;
end;

procedure InitJin20fSegmentedPart71;
begin

HAnimSite750 := THAnimSiteNode.Create;;
HAnimSite750.Translation := Vector3(-0.1,0.016,0.14);
TouchSensor751 := TTouchSensorNode.Create;;
TouchSensor751.Description := 'HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite750.FdChildren.Add(TouchSensor751);
Shape752 := TShapeNode.Create;;
Appearance753 := TAppearanceNode.Create;;
Material754 := TMaterialNode.Create;;
Material754.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance753.Material := Material754;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape752.Appearance := Appearance753;
IndexedFaceSet755 := TIndexedFaceSetNode.Create;;
IndexedFaceSet755.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet755.CreaseAngle := 0.5;
IndexedFaceSet755.Solid := False;
ColorRGBA756 := TColorRGBANode.Create;;
ColorRGBA756.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet755.Color := ColorRGBA756;
Coordinate757 := TCoordinateNode.Create;;
Coordinate757.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet755.Coord := Coordinate757;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape752.Geometry := IndexedFaceSet755;
{ METHOD .FdChildren.Add }
HAnimSite750.FdChildren.Add(Shape752);
Billboard758 := TBillboardNode.Create;;
Billboard758.AxisOfRotation := Vector3(0,0,0);
Shape759 := TShapeNode.Create;;
Text760 := TTextNode.Create;;
Text760.SetText(['118']);
FontStyle761 := TFontStyleNode.Create;
end;

procedure InitJin20fSegmentedPart72;
begin
;
FontStyle761.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text760.FontStyle := FontStyle761;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape759.Geometry := Text760;
{ METHOD .FdChildren.Add }
Billboard758.FdChildren.Add(Shape759);
{ METHOD .FdChildren.Add }
HAnimSite750.FdChildren.Add(Billboard758);
{ METHOD .FdChildren.Add }
HAnimSegment749.FdChildren.Add(HAnimSite750);
Shape762 := TShapeNode.Create;;
LineSet763 := TLineSetNode.Create;;
LineSet763.SetVertexCount([2]);
ColorRGBA764 := TColorRGBANode.Create;;
ColorRGBA764.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet763.Color := ColorRGBA764;
Coordinate765 := TCoordinateNode.Create;;
Coordinate765.SetPoint([Vector3(-0.100035,0.00982,0.1197),Vector3(-0.0985,0.01192,0.11047)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet763.Coord := Coordinate765;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape762.Geometry := LineSet763;
{ METHOD .FdChildren.Add }
HAnimSegment749.FdChildren.Add(Shape762);
{ METHOD .FdChildren.Add }
HAnimJoint748.FdChildren.Add(HAnimSegment749);
{ METHOD .FdChildren.Add }
HAnimJoint742.FdChildren.Add(HAnimJoint748);
{ METHOD .FdChildren.Add }
HAnimJoint736.FdChildren.Add(HAnimJoint742);
{ METHOD .FdChildren.Add }
HAnimJoint730.FdChildren.Add(HAnimJoint736);
{ METHOD .FdChildren.Add }
HAnimJoint724.FdChildren.Add(HAnimJoint730);
{ METHOD .FdChildren.Add }
HAnimJoint628.FdChildren.Add(HAnimJoint724);
{ METHOD .FdChildren.Add }
HAnimJoint598.FdChildren.Add(HAnimJoint628);
HAnimJoint766 := THAnimJointNode.Create;;
HAnimJoint766.Center := Vector3(-0.088717,0.05798,-0.025965);
HAnimSegment767 := THAnimSegmentNode.Create;;
Shape768 := TShapeNode.Create;;
LineSet769 := TLineSetNode.Create;;
LineSet769.SetVertexCount([2]);
ColorRGBA770 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart73;
begin
;
ColorRGBA770.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet769.Color := ColorRGBA770;
Coordinate771 := TCoordinateNode.Create;;
Coordinate771.SetPoint([Vector3(-0.088717,0.05798,-0.025965),Vector3(-0.08845,0.09544,-0.01045)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet769.Coord := Coordinate771;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape768.Geometry := LineSet769;
{ METHOD .FdChildren.Add }
HAnimSegment767.FdChildren.Add(Shape768);
{ METHOD .FdChildren.Add }
HAnimJoint766.FdChildren.Add(HAnimSegment767);
HAnimJoint772 := THAnimJointNode.Create;;
HAnimJoint772.Center := Vector3(-0.11027,0.03528,0.0021);
HAnimSegment773 := THAnimSegmentNode.Create;;
Shape774 := TShapeNode.Create;;
LineSet775 := TLineSetNode.Create;;
LineSet775.SetVertexCount([2]);
ColorRGBA776 := TColorRGBANode.Create;;
ColorRGBA776.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet775.Color := ColorRGBA776;
Coordinate777 := TCoordinateNode.Create;;
Coordinate777.SetPoint([Vector3(-0.11027,0.03528,0.0021),Vector3(-0.088717,0.05798,-0.025965)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet775.Coord := Coordinate777;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape774.Geometry := LineSet775;
{ METHOD .FdChildren.Add }
HAnimSegment773.FdChildren.Add(Shape774);
{ METHOD .FdChildren.Add }
HAnimJoint772.FdChildren.Add(HAnimSegment773);
HAnimJoint778 := THAnimJointNode.Create;;
HAnimJoint778.Center := Vector3(-0.10613,0.02454,0.03843);
HAnimSegment779 := THAnimSegmentNode.Create;;
Shape780 := TShapeNode.Create;;
LineSet781 := TLineSetNode.Create;;
end;

procedure InitJin20fSegmentedPart74;
begin

LineSet781.SetVertexCount([2]);
ColorRGBA782 := TColorRGBANode.Create;;
ColorRGBA782.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet781.Color := ColorRGBA782;
Coordinate783 := TCoordinateNode.Create;;
Coordinate783.SetPoint([Vector3(-0.10613,0.02454,0.03843),Vector3(-0.11027,0.03528,0.0021)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet781.Coord := Coordinate783;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape780.Geometry := LineSet781;
{ METHOD .FdChildren.Add }
HAnimSegment779.FdChildren.Add(Shape780);
{ METHOD .FdChildren.Add }
HAnimJoint778.FdChildren.Add(HAnimSegment779);
HAnimJoint784 := THAnimJointNode.Create;;
HAnimJoint784.Center := Vector3(-0.1095,0.01435,0.09117);
HAnimSegment785 := THAnimSegmentNode.Create;;
Shape786 := TShapeNode.Create;;
LineSet787 := TLineSetNode.Create;;
LineSet787.SetVertexCount([2]);
ColorRGBA788 := TColorRGBANode.Create;;
ColorRGBA788.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet787.Color := ColorRGBA788;
Coordinate789 := TCoordinateNode.Create;;
Coordinate789.SetPoint([Vector3(-0.1095,0.01435,0.09117),Vector3(-0.10613,0.02454,0.03843)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet787.Coord := Coordinate789;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape786.Geometry := LineSet787;
{ METHOD .FdChildren.Add }
HAnimSegment785.FdChildren.Add(Shape786);
{ METHOD .FdChildren.Add }
HAnimJoint784.FdChildren.Add(HAnimSegment785);
HAnimJoint790 := THAnimJointNode.Create;;
HAnimJoint790.Center := Vector3(-0.11378,0.01224,0.1063);
HAnimSegment791 := THAnimSegmentNode.Create;;
Shape792 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart75;
begin

LineSet793 := TLineSetNode.Create;;
LineSet793.SetVertexCount([2]);
ColorRGBA794 := TColorRGBANode.Create;;
ColorRGBA794.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet793.Color := ColorRGBA794;
Coordinate795 := TCoordinateNode.Create;;
Coordinate795.SetPoint([Vector3(-0.11378,0.01224,0.1063),Vector3(-0.1095,0.01435,0.09117)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet793.Coord := Coordinate795;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape792.Geometry := LineSet793;
{ METHOD .FdChildren.Add }
HAnimSegment791.FdChildren.Add(Shape792);
{ METHOD .FdChildren.Add }
HAnimJoint790.FdChildren.Add(HAnimSegment791);
HAnimJoint796 := THAnimJointNode.Create;;
HAnimJoint796.Center := Vector3(-0.1153,0.00937,0.11369);
HAnimSegment797 := THAnimSegmentNode.Create;;
HAnimSite798 := THAnimSiteNode.Create;;
HAnimSite798.Translation := Vector3(-0.115,0.016,0.13);
TouchSensor799 := TTouchSensorNode.Create;;
TouchSensor799.Description := 'HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite798.FdChildren.Add(TouchSensor799);
Shape800 := TShapeNode.Create;;
Appearance801 := TAppearanceNode.Create;;
Material802 := TMaterialNode.Create;;
Material802.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance801.Material := Material802;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape800.Appearance := Appearance801;
IndexedFaceSet803 := TIndexedFaceSetNode.Create;;
IndexedFaceSet803.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet803.CreaseAngle := 0.5;
IndexedFaceSet803.Solid := False;
end;

procedure InitJin20fSegmentedPart76;
begin

ColorRGBA804 := TColorRGBANode.Create;;
ColorRGBA804.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet803.Color := ColorRGBA804;
Coordinate805 := TCoordinateNode.Create;;
Coordinate805.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet803.Coord := Coordinate805;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape800.Geometry := IndexedFaceSet803;
{ METHOD .FdChildren.Add }
HAnimSite798.FdChildren.Add(Shape800);
Billboard806 := TBillboardNode.Create;;
Billboard806.AxisOfRotation := Vector3(0,0,0);
Shape807 := TShapeNode.Create;;
Text808 := TTextNode.Create;;
Text808.SetText(['119']);
FontStyle809 := TFontStyleNode.Create;;
FontStyle809.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text808.FontStyle := FontStyle809;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape807.Geometry := Text808;
{ METHOD .FdChildren.Add }
Billboard806.FdChildren.Add(Shape807);
{ METHOD .FdChildren.Add }
HAnimSite798.FdChildren.Add(Billboard806);
{ METHOD .FdChildren.Add }
HAnimSegment797.FdChildren.Add(HAnimSite798);
Shape810 := TShapeNode.Create;;
LineSet811 := TLineSetNode.Create;;
LineSet811.SetVertexCount([2]);
ColorRGBA812 := TColorRGBANode.Create;;
ColorRGBA812.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet811.Color := ColorRGBA812;
Coordinate813 := TCoordinateNode.Create;;
Coordinate813.SetPoint([Vector3(-0.1153,0.00937,0.11369),Vector3(-0.11378,0.01224,0.1063)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet811.Coord := Coordinate813;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape810.Geometry := LineSet811;
end;

procedure InitJin20fSegmentedPart77;
begin

{ METHOD .FdChildren.Add }
HAnimSegment797.FdChildren.Add(Shape810);
{ METHOD .FdChildren.Add }
HAnimJoint796.FdChildren.Add(HAnimSegment797);
{ METHOD .FdChildren.Add }
HAnimJoint790.FdChildren.Add(HAnimJoint796);
{ METHOD .FdChildren.Add }
HAnimJoint784.FdChildren.Add(HAnimJoint790);
{ METHOD .FdChildren.Add }
HAnimJoint778.FdChildren.Add(HAnimJoint784);
{ METHOD .FdChildren.Add }
HAnimJoint772.FdChildren.Add(HAnimJoint778);
HAnimJoint814 := THAnimJointNode.Create;;
HAnimJoint814.Center := Vector3(-0.12044,0.020945,0.03474);
HAnimSegment815 := THAnimSegmentNode.Create;;
Shape816 := TShapeNode.Create;;
LineSet817 := TLineSetNode.Create;;
LineSet817.SetVertexCount([2]);
ColorRGBA818 := TColorRGBANode.Create;;
ColorRGBA818.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet817.Color := ColorRGBA818;
Coordinate819 := TCoordinateNode.Create;;
Coordinate819.SetPoint([Vector3(-0.12044,0.020945,0.03474),Vector3(-0.11027,0.03528,0.0021)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet817.Coord := Coordinate819;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape816.Geometry := LineSet817;
{ METHOD .FdChildren.Add }
HAnimSegment815.FdChildren.Add(Shape816);
{ METHOD .FdChildren.Add }
HAnimJoint814.FdChildren.Add(HAnimSegment815);
HAnimJoint820 := THAnimJointNode.Create;;
HAnimJoint820.Center := Vector3(-0.12368,0.01367,0.08656);
HAnimSegment821 := THAnimSegmentNode.Create;;
Shape822 := TShapeNode.Create;;
LineSet823 := TLineSetNode.Create;;
LineSet823.SetVertexCount([2]);
ColorRGBA824 := TColorRGBANode.Create;;
ColorRGBA824.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
end;

procedure InitJin20fSegmentedPart78;
begin

{ METHOD .Color }
{ METHOD.SET .Color }
LineSet823.Color := ColorRGBA824;
Coordinate825 := TCoordinateNode.Create;;
Coordinate825.SetPoint([Vector3(-0.12368,0.01367,0.08656),Vector3(-0.12044,0.020945,0.03474)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet823.Coord := Coordinate825;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape822.Geometry := LineSet823;
{ METHOD .FdChildren.Add }
HAnimSegment821.FdChildren.Add(Shape822);
{ METHOD .FdChildren.Add }
HAnimJoint820.FdChildren.Add(HAnimSegment821);
HAnimJoint826 := THAnimJointNode.Create;;
HAnimJoint826.Center := Vector3(-0.126,0.01086,0.09414);
HAnimSegment827 := THAnimSegmentNode.Create;;
HAnimSite828 := THAnimSiteNode.Create;;
HAnimSite828.Translation := Vector3(-0.12,0.02,0.04);
TouchSensor829 := TTouchSensorNode.Create;;
TouchSensor829.Description := 'HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite828.FdChildren.Add(TouchSensor829);
Shape830 := TShapeNode.Create;;
Appearance831 := TAppearanceNode.Create;;
Material832 := TMaterialNode.Create;;
Material832.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance831.Material := Material832;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape830.Appearance := Appearance831;
IndexedFaceSet833 := TIndexedFaceSetNode.Create;;
IndexedFaceSet833.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet833.CreaseAngle := 0.5;
IndexedFaceSet833.Solid := False;
ColorRGBA834 := TColorRGBANode.Create;;
ColorRGBA834.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet833.Color := ColorRGBA834;
Coordinate835 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart79;
begin

Coordinate835.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet833.Coord := Coordinate835;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape830.Geometry := IndexedFaceSet833;
{ METHOD .FdChildren.Add }
HAnimSite828.FdChildren.Add(Shape830);
Billboard836 := TBillboardNode.Create;;
Billboard836.AxisOfRotation := Vector3(0,0,0);
Shape837 := TShapeNode.Create;;
Text838 := TTextNode.Create;;
Text838.SetText(['60']);
FontStyle839 := TFontStyleNode.Create;;
FontStyle839.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text838.FontStyle := FontStyle839;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape837.Geometry := Text838;
{ METHOD .FdChildren.Add }
Billboard836.FdChildren.Add(Shape837);
{ METHOD .FdChildren.Add }
HAnimSite828.FdChildren.Add(Billboard836);
{ METHOD .FdChildren.Add }
HAnimSegment827.FdChildren.Add(HAnimSite828);
Shape840 := TShapeNode.Create;;
LineSet841 := TLineSetNode.Create;;
LineSet841.SetVertexCount([2]);
ColorRGBA842 := TColorRGBANode.Create;;
ColorRGBA842.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet841.Color := ColorRGBA842;
Coordinate843 := TCoordinateNode.Create;;
Coordinate843.SetPoint([Vector3(-0.126,0.01086,0.09414),Vector3(-0.12368,0.01367,0.08656)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet841.Coord := Coordinate843;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape840.Geometry := LineSet841;
{ METHOD .FdChildren.Add }
HAnimSegment827.FdChildren.Add(Shape840);
{ METHOD .FdChildren.Add }
HAnimJoint826.FdChildren.Add(HAnimSegment827);
HAnimJoint844 := THAnimJointNode.Create;;
HAnimJoint844.Center := Vector3(-0.1269,0.00856,0.10188);
HAnimSegment845 := THAnimSegmentNode.Create;
end;

procedure InitJin20fSegmentedPart80;
begin
;
HAnimSite846 := THAnimSiteNode.Create;;
HAnimSite846.Translation := Vector3(-0.125,0.016,0.115);
TouchSensor847 := TTouchSensorNode.Create;;
TouchSensor847.Description := 'HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(TouchSensor847);
Shape848 := TShapeNode.Create;;
Appearance849 := TAppearanceNode.Create;;
Material850 := TMaterialNode.Create;;
Material850.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance849.Material := Material850;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape848.Appearance := Appearance849;
IndexedFaceSet851 := TIndexedFaceSetNode.Create;;
IndexedFaceSet851.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet851.CreaseAngle := 0.5;
IndexedFaceSet851.Solid := False;
ColorRGBA852 := TColorRGBANode.Create;;
ColorRGBA852.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet851.Color := ColorRGBA852;
Coordinate853 := TCoordinateNode.Create;;
Coordinate853.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet851.Coord := Coordinate853;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape848.Geometry := IndexedFaceSet851;
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(Shape848);
Billboard854 := TBillboardNode.Create;;
Billboard854.AxisOfRotation := Vector3(0,0,0);
Shape855 := TShapeNode.Create;;
Text856 := TTextNode.Create;;
Text856.SetText(['120']);
end;

procedure InitJin20fSegmentedPart81;
begin

FontStyle857 := TFontStyleNode.Create;;
FontStyle857.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text856.FontStyle := FontStyle857;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape855.Geometry := Text856;
{ METHOD .FdChildren.Add }
Billboard854.FdChildren.Add(Shape855);
{ METHOD .FdChildren.Add }
HAnimSite846.FdChildren.Add(Billboard854);
{ METHOD .FdChildren.Add }
HAnimSegment845.FdChildren.Add(HAnimSite846);
Shape858 := TShapeNode.Create;;
LineSet859 := TLineSetNode.Create;;
LineSet859.SetVertexCount([2]);
ColorRGBA860 := TColorRGBANode.Create;;
ColorRGBA860.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet859.Color := ColorRGBA860;
Coordinate861 := TCoordinateNode.Create;;
Coordinate861.SetPoint([Vector3(-0.1269,0.00856,0.10188),Vector3(-0.126,0.01086,0.09414)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet859.Coord := Coordinate861;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape858.Geometry := LineSet859;
{ METHOD .FdChildren.Add }
HAnimSegment845.FdChildren.Add(Shape858);
{ METHOD .FdChildren.Add }
HAnimJoint844.FdChildren.Add(HAnimSegment845);
{ METHOD .FdChildren.Add }
HAnimJoint826.FdChildren.Add(HAnimJoint844);
{ METHOD .FdChildren.Add }
HAnimJoint820.FdChildren.Add(HAnimJoint826);
{ METHOD .FdChildren.Add }
HAnimJoint814.FdChildren.Add(HAnimJoint820);
{ METHOD .FdChildren.Add }
HAnimJoint772.FdChildren.Add(HAnimJoint814);
{ METHOD .FdChildren.Add }
HAnimJoint766.FdChildren.Add(HAnimJoint772);
{ METHOD .FdChildren.Add }
HAnimJoint598.FdChildren.Add(HAnimJoint766);
{ METHOD .FdChildren.Add }
HAnimJoint556.FdChildren.Add(HAnimJoint598);
{ METHOD .FdChildren.Add }
HAnimJoint502.FdChildren.Add(HAnimJoint556);
{ METHOD .FdChildren.Add }
HAnimJoint16.FdChildren.Add(HAnimJoint502);
{ METHOD .FdChildren.Add }
HAnimJoint12.FdChildren.Add(HAnimJoint16);
HAnimJoint862 := THAnimJointNode.Create;;
HAnimJoint862.Center := Vector3(0,0.9254,-0.01376);
HAnimSegment863 := THAnimSegmentNode.Create;;
HAnimSite864 := THAnimSiteNode.Create;
end;

procedure InitJin20fSegmentedPart82;
begin
;
HAnimSite864.Translation := Vector3(0,1,-0.1);
TouchSensor865 := TTouchSensorNode.Create;;
TouchSensor865.Description := 'HAnimSite 24 hanim_spine_1_middle_back_pt';
{ METHOD .FdChildren.Add }
HAnimSite864.FdChildren.Add(TouchSensor865);
Shape866 := TShapeNode.Create;;
Appearance867 := TAppearanceNode.Create;;
Material868 := TMaterialNode.Create;;
Material868.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance867.Material := Material868;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape866.Appearance := Appearance867;
IndexedFaceSet869 := TIndexedFaceSetNode.Create;;
IndexedFaceSet869.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet869.CreaseAngle := 0.5;
IndexedFaceSet869.Solid := False;
ColorRGBA870 := TColorRGBANode.Create;;
ColorRGBA870.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet869.Color := ColorRGBA870;
Coordinate871 := TCoordinateNode.Create;;
Coordinate871.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet869.Coord := Coordinate871;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape866.Geometry := IndexedFaceSet869;
{ METHOD .FdChildren.Add }
HAnimSite864.FdChildren.Add(Shape866);
Billboard872 := TBillboardNode.Create;;
Billboard872.AxisOfRotation := Vector3(0,0,0);
Shape873 := TShapeNode.Create;;
Text874 := TTextNode.Create;;
Text874.SetText(['24']);
FontStyle875 := TFontStyleNode.Create;;
end;

procedure InitJin20fSegmentedPart83;
begin

FontStyle875.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text874.FontStyle := FontStyle875;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape873.Geometry := Text874;
{ METHOD .FdChildren.Add }
Billboard872.FdChildren.Add(Shape873);
{ METHOD .FdChildren.Add }
HAnimSite864.FdChildren.Add(Billboard872);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(HAnimSite864);
HAnimSite876 := THAnimSiteNode.Create;;
HAnimSite876.Translation := Vector3(0,0.95,-0.1);
TouchSensor877 := TTouchSensorNode.Create;;
TouchSensor877.Description := 'HAnimSite 25 hanim_spine_2_lower_back_pt';
{ METHOD .FdChildren.Add }
HAnimSite876.FdChildren.Add(TouchSensor877);
Shape878 := TShapeNode.Create;;
Appearance879 := TAppearanceNode.Create;;
Material880 := TMaterialNode.Create;;
Material880.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance879.Material := Material880;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape878.Appearance := Appearance879;
IndexedFaceSet881 := TIndexedFaceSetNode.Create;;
IndexedFaceSet881.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet881.CreaseAngle := 0.5;
IndexedFaceSet881.Solid := False;
ColorRGBA882 := TColorRGBANode.Create;;
ColorRGBA882.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet881.Color := ColorRGBA882;
Coordinate883 := TCoordinateNode.Create;;
Coordinate883.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet881.Coord := Coordinate883;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape878.Geometry := IndexedFaceSet881;
{ METHOD .FdChildren.Add }
HAnimSite876.FdChildren.Add(Shape878);
Billboard884 := TBillboardNode.Create;;
Billboard884.AxisOfRotation := Vector3(0,0,0);
end;

procedure InitJin20fSegmentedPart84;
begin

Shape885 := TShapeNode.Create;;
Text886 := TTextNode.Create;;
Text886.SetText(['25']);
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
HAnimSite876.FdChildren.Add(Billboard884);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(HAnimSite876);
HAnimSite888 := THAnimSiteNode.Create;;
HAnimSite888.Translation := Vector3(0,0.9,0.1);
TouchSensor889 := TTouchSensorNode.Create;;
TouchSensor889.Description := 'HAnimSite 26 hanim_waist_preferred_anterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(TouchSensor889);
Shape890 := TShapeNode.Create;;
Appearance891 := TAppearanceNode.Create;;
Material892 := TMaterialNode.Create;;
Material892.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance891.Material := Material892;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape890.Appearance := Appearance891;
IndexedFaceSet893 := TIndexedFaceSetNode.Create;;
IndexedFaceSet893.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet893.CreaseAngle := 0.5;
IndexedFaceSet893.Solid := False;
ColorRGBA894 := TColorRGBANode.Create;;
ColorRGBA894.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet893.Color := ColorRGBA894;
Coordinate895 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart85;
begin

Coordinate895.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet893.Coord := Coordinate895;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape890.Geometry := IndexedFaceSet893;
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(Shape890);
Billboard896 := TBillboardNode.Create;;
Billboard896.AxisOfRotation := Vector3(0,0,0);
Shape897 := TShapeNode.Create;;
Text898 := TTextNode.Create;;
Text898.SetText(['26']);
FontStyle899 := TFontStyleNode.Create;;
FontStyle899.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text898.FontStyle := FontStyle899;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape897.Geometry := Text898;
{ METHOD .FdChildren.Add }
Billboard896.FdChildren.Add(Shape897);
{ METHOD .FdChildren.Add }
HAnimSite888.FdChildren.Add(Billboard896);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(HAnimSite888);
HAnimSite900 := THAnimSiteNode.Create;;
HAnimSite900.Translation := Vector3(0,0.9,-0.1);
TouchSensor901 := TTouchSensorNode.Create;;
TouchSensor901.Description := 'HAnimSite 27 hanim_waist_preferred_posterior_pt';
{ METHOD .FdChildren.Add }
HAnimSite900.FdChildren.Add(TouchSensor901);
Shape902 := TShapeNode.Create;;
Appearance903 := TAppearanceNode.Create;;
Material904 := TMaterialNode.Create;;
Material904.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance903.Material := Material904;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape902.Appearance := Appearance903;
IndexedFaceSet905 := TIndexedFaceSetNode.Create;;
IndexedFaceSet905.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet905.CreaseAngle := 0.5;
end;

procedure InitJin20fSegmentedPart86;
begin

IndexedFaceSet905.Solid := False;
ColorRGBA906 := TColorRGBANode.Create;;
ColorRGBA906.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet905.Color := ColorRGBA906;
Coordinate907 := TCoordinateNode.Create;;
Coordinate907.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet905.Coord := Coordinate907;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape902.Geometry := IndexedFaceSet905;
{ METHOD .FdChildren.Add }
HAnimSite900.FdChildren.Add(Shape902);
Billboard908 := TBillboardNode.Create;;
Billboard908.AxisOfRotation := Vector3(0,0,0);
Shape909 := TShapeNode.Create;;
Text910 := TTextNode.Create;;
Text910.SetText(['27']);
FontStyle911 := TFontStyleNode.Create;;
FontStyle911.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text910.FontStyle := FontStyle911;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape909.Geometry := Text910;
{ METHOD .FdChildren.Add }
Billboard908.FdChildren.Add(Shape909);
{ METHOD .FdChildren.Add }
HAnimSite900.FdChildren.Add(Billboard908);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(HAnimSite900);
HAnimSite912 := THAnimSiteNode.Create;;
HAnimSite912.Translation := Vector3(0,0.9,-0.1);
TouchSensor913 := TTouchSensorNode.Create;;
TouchSensor913.Description := 'HAnimSite 84 hanim_navel_pt';
{ METHOD .FdChildren.Add }
HAnimSite912.FdChildren.Add(TouchSensor913);
Shape914 := TShapeNode.Create;;
Appearance915 := TAppearanceNode.Create;;
Material916 := TMaterialNode.Create;;
end;

procedure InitJin20fSegmentedPart87;
begin

Material916.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance915.Material := Material916;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape914.Appearance := Appearance915;
IndexedFaceSet917 := TIndexedFaceSetNode.Create;;
IndexedFaceSet917.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet917.CreaseAngle := 0.5;
IndexedFaceSet917.Solid := False;
ColorRGBA918 := TColorRGBANode.Create;;
ColorRGBA918.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet917.Color := ColorRGBA918;
Coordinate919 := TCoordinateNode.Create;;
Coordinate919.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet917.Coord := Coordinate919;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape914.Geometry := IndexedFaceSet917;
{ METHOD .FdChildren.Add }
HAnimSite912.FdChildren.Add(Shape914);
Billboard920 := TBillboardNode.Create;;
Billboard920.AxisOfRotation := Vector3(0,0,0);
Shape921 := TShapeNode.Create;;
Text922 := TTextNode.Create;;
Text922.SetText(['84']);
FontStyle923 := TFontStyleNode.Create;;
FontStyle923.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text922.FontStyle := FontStyle923;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape921.Geometry := Text922;
{ METHOD .FdChildren.Add }
Billboard920.FdChildren.Add(Shape921);
{ METHOD .FdChildren.Add }
HAnimSite912.FdChildren.Add(Billboard920);
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(HAnimSite912);
Shape924 := TShapeNode.Create;;
LineSet925 := TLineSetNode.Create;;
LineSet925.SetVertexCount([2]);
ColorRGBA926 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart88;
begin
;
ColorRGBA926.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet925.Color := ColorRGBA926;
Coordinate927 := TCoordinateNode.Create;;
Coordinate927.SetPoint([Vector3(0,0.9254,-0.01376),Vector3(0,0.77,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet925.Coord := Coordinate927;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape924.Geometry := LineSet925;
{ METHOD .FdChildren.Add }
HAnimSegment863.FdChildren.Add(Shape924);
{ METHOD .FdChildren.Add }
HAnimJoint862.FdChildren.Add(HAnimSegment863);
HAnimJoint928 := THAnimJointNode.Create;;
HAnimJoint928.Center := Vector3(0,0.9497,-0.01376);
HAnimSegment929 := THAnimSegmentNode.Create;;
Shape930 := TShapeNode.Create;;
LineSet931 := TLineSetNode.Create;;
LineSet931.SetVertexCount([2]);
ColorRGBA932 := TColorRGBANode.Create;;
ColorRGBA932.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet931.Color := ColorRGBA932;
Coordinate933 := TCoordinateNode.Create;;
Coordinate933.SetPoint([Vector3(0,0.9497,-0.01376),Vector3(0,0.9254,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet931.Coord := Coordinate933;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape930.Geometry := LineSet931;
{ METHOD .FdChildren.Add }
HAnimSegment929.FdChildren.Add(Shape930);
{ METHOD .FdChildren.Add }
HAnimJoint928.FdChildren.Add(HAnimSegment929);
HAnimJoint934 := THAnimJointNode.Create;;
HAnimJoint934.Center := Vector3(0,0.9659,-0.01376);
HAnimSegment935 := THAnimSegmentNode.Create;;
Shape936 := TShapeNode.Create;;
LineSet937 := TLineSetNode.Create;;
end;

procedure InitJin20fSegmentedPart89;
begin

LineSet937.SetVertexCount([2]);
ColorRGBA938 := TColorRGBANode.Create;;
ColorRGBA938.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet937.Color := ColorRGBA938;
Coordinate939 := TCoordinateNode.Create;;
Coordinate939.SetPoint([Vector3(0,0.9659,-0.01376),Vector3(0,0.9497,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet937.Coord := Coordinate939;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape936.Geometry := LineSet937;
{ METHOD .FdChildren.Add }
HAnimSegment935.FdChildren.Add(Shape936);
{ METHOD .FdChildren.Add }
HAnimJoint934.FdChildren.Add(HAnimSegment935);
HAnimJoint940 := THAnimJointNode.Create;;
HAnimJoint940.Center := Vector3(0,0.98235,-0.01376);
HAnimSegment941 := THAnimSegmentNode.Create;;
HAnimSite942 := THAnimSiteNode.Create;;
HAnimSite942.Translation := Vector3(0.09,1,0.04);
TouchSensor943 := TTouchSensorNode.Create;;
TouchSensor943.Description := 'HAnimSite 28 hanim_l_rib10_pt';
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(TouchSensor943);
Shape944 := TShapeNode.Create;;
Appearance945 := TAppearanceNode.Create;;
Material946 := TMaterialNode.Create;;
Material946.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance945.Material := Material946;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape944.Appearance := Appearance945;
IndexedFaceSet947 := TIndexedFaceSetNode.Create;;
IndexedFaceSet947.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet947.CreaseAngle := 0.5;
IndexedFaceSet947.Solid := False;
ColorRGBA948 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart90;
begin

ColorRGBA948.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet947.Color := ColorRGBA948;
Coordinate949 := TCoordinateNode.Create;;
Coordinate949.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet947.Coord := Coordinate949;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape944.Geometry := IndexedFaceSet947;
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(Shape944);
Billboard950 := TBillboardNode.Create;;
Billboard950.AxisOfRotation := Vector3(0,0,0);
Shape951 := TShapeNode.Create;;
Text952 := TTextNode.Create;;
Text952.SetText(['28']);
FontStyle953 := TFontStyleNode.Create;;
FontStyle953.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text952.FontStyle := FontStyle953;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape951.Geometry := Text952;
{ METHOD .FdChildren.Add }
Billboard950.FdChildren.Add(Shape951);
{ METHOD .FdChildren.Add }
HAnimSite942.FdChildren.Add(Billboard950);
{ METHOD .FdChildren.Add }
HAnimSegment941.FdChildren.Add(HAnimSite942);
HAnimSite954 := THAnimSiteNode.Create;;
HAnimSite954.Translation := Vector3(-0.09,1,0.04);
TouchSensor955 := TTouchSensorNode.Create;;
TouchSensor955.Description := 'HAnimSite 30 hanim_r_rib10_pt';
{ METHOD .FdChildren.Add }
HAnimSite954.FdChildren.Add(TouchSensor955);
Shape956 := TShapeNode.Create;;
Appearance957 := TAppearanceNode.Create;;
Material958 := TMaterialNode.Create;;
Material958.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance957.Material := Material958;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape956.Appearance := Appearance957;
end;

procedure InitJin20fSegmentedPart91;
begin

IndexedFaceSet959 := TIndexedFaceSetNode.Create;;
IndexedFaceSet959.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet959.CreaseAngle := 0.5;
IndexedFaceSet959.Solid := False;
ColorRGBA960 := TColorRGBANode.Create;;
ColorRGBA960.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet959.Color := ColorRGBA960;
Coordinate961 := TCoordinateNode.Create;;
Coordinate961.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet959.Coord := Coordinate961;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape956.Geometry := IndexedFaceSet959;
{ METHOD .FdChildren.Add }
HAnimSite954.FdChildren.Add(Shape956);
Billboard962 := TBillboardNode.Create;;
Billboard962.AxisOfRotation := Vector3(0,0,0);
Shape963 := TShapeNode.Create;;
Text964 := TTextNode.Create;;
Text964.SetText(['30']);
FontStyle965 := TFontStyleNode.Create;;
FontStyle965.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text964.FontStyle := FontStyle965;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape963.Geometry := Text964;
{ METHOD .FdChildren.Add }
Billboard962.FdChildren.Add(Shape963);
{ METHOD .FdChildren.Add }
HAnimSite954.FdChildren.Add(Billboard962);
{ METHOD .FdChildren.Add }
HAnimSegment941.FdChildren.Add(HAnimSite954);
Shape966 := TShapeNode.Create;;
LineSet967 := TLineSetNode.Create;;
LineSet967.SetVertexCount([2]);
ColorRGBA968 := TColorRGBANode.Create;;
ColorRGBA968.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet967.Color := ColorRGBA968;
end;

procedure InitJin20fSegmentedPart92;
begin

Coordinate969 := TCoordinateNode.Create;;
Coordinate969.SetPoint([Vector3(0,0.98235,-0.01376),Vector3(0,0.9659,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet967.Coord := Coordinate969;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape966.Geometry := LineSet967;
{ METHOD .FdChildren.Add }
HAnimSegment941.FdChildren.Add(Shape966);
{ METHOD .FdChildren.Add }
HAnimJoint940.FdChildren.Add(HAnimSegment941);
HAnimJoint970 := THAnimJointNode.Create;;
HAnimJoint970.Center := Vector3(0,0.99967,-0.01376);
HAnimSegment971 := THAnimSegmentNode.Create;;
Shape972 := TShapeNode.Create;;
LineSet973 := TLineSetNode.Create;;
LineSet973.SetVertexCount([2]);
ColorRGBA974 := TColorRGBANode.Create;;
ColorRGBA974.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet973.Color := ColorRGBA974;
Coordinate975 := TCoordinateNode.Create;;
Coordinate975.SetPoint([Vector3(0,0.99967,-0.01376),Vector3(0,0.98235,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet973.Coord := Coordinate975;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape972.Geometry := LineSet973;
{ METHOD .FdChildren.Add }
HAnimSegment971.FdChildren.Add(Shape972);
{ METHOD .FdChildren.Add }
HAnimJoint970.FdChildren.Add(HAnimSegment971);
HAnimJoint976 := THAnimJointNode.Create;;
HAnimJoint976.Center := Vector3(0,1.0231,-0.01376);
HAnimSegment977 := THAnimSegmentNode.Create;;
Shape978 := TShapeNode.Create;;
LineSet979 := TLineSetNode.Create;;
LineSet979.SetVertexCount([2]);
ColorRGBA980 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart93;
begin

ColorRGBA980.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet979.Color := ColorRGBA980;
Coordinate981 := TCoordinateNode.Create;;
Coordinate981.SetPoint([Vector3(0,1.0231,-0.01376),Vector3(0,0.99967,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet979.Coord := Coordinate981;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape978.Geometry := LineSet979;
{ METHOD .FdChildren.Add }
HAnimSegment977.FdChildren.Add(Shape978);
{ METHOD .FdChildren.Add }
HAnimJoint976.FdChildren.Add(HAnimSegment977);
HAnimJoint982 := THAnimJointNode.Create;;
HAnimJoint982.Center := Vector3(0,1.0467,-0.01376);
HAnimSegment983 := THAnimSegmentNode.Create;;
Shape984 := TShapeNode.Create;;
LineSet985 := TLineSetNode.Create;;
LineSet985.SetVertexCount([2]);
ColorRGBA986 := TColorRGBANode.Create;;
ColorRGBA986.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet985.Color := ColorRGBA986;
Coordinate987 := TCoordinateNode.Create;;
Coordinate987.SetPoint([Vector3(0,1.0467,-0.01376),Vector3(0,1.0231,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet985.Coord := Coordinate987;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape984.Geometry := LineSet985;
{ METHOD .FdChildren.Add }
HAnimSegment983.FdChildren.Add(Shape984);
{ METHOD .FdChildren.Add }
HAnimJoint982.FdChildren.Add(HAnimSegment983);
HAnimJoint988 := THAnimJointNode.Create;;
HAnimJoint988.Center := Vector3(0,1.0638,-0.01378);
HAnimSegment989 := THAnimSegmentNode.Create;;
HAnimSite990 := THAnimSiteNode.Create;;
HAnimSite990.Translation := Vector3(0,1.08,0.076);
TouchSensor991 := TTouchSensorNode.Create;;
end;

procedure InitJin20fSegmentedPart94;
begin

TouchSensor991.Description := 'HAnimSite 13 hanim_substernale_pt';
{ METHOD .FdChildren.Add }
HAnimSite990.FdChildren.Add(TouchSensor991);
Shape992 := TShapeNode.Create;;
Appearance993 := TAppearanceNode.Create;;
Material994 := TMaterialNode.Create;;
Material994.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance993.Material := Material994;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape992.Appearance := Appearance993;
IndexedFaceSet995 := TIndexedFaceSetNode.Create;;
IndexedFaceSet995.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet995.CreaseAngle := 0.5;
IndexedFaceSet995.Solid := False;
ColorRGBA996 := TColorRGBANode.Create;;
ColorRGBA996.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet995.Color := ColorRGBA996;
Coordinate997 := TCoordinateNode.Create;;
Coordinate997.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet995.Coord := Coordinate997;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape992.Geometry := IndexedFaceSet995;
{ METHOD .FdChildren.Add }
HAnimSite990.FdChildren.Add(Shape992);
Billboard998 := TBillboardNode.Create;;
Billboard998.AxisOfRotation := Vector3(0,0,0);
Shape999 := TShapeNode.Create;;
Text1000 := TTextNode.Create;;
Text1000.SetText(['13']);
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
end;

procedure InitJin20fSegmentedPart95;
begin

{ METHOD .FdChildren.Add }
HAnimSite990.FdChildren.Add(Billboard998);
{ METHOD .FdChildren.Add }
HAnimSegment989.FdChildren.Add(HAnimSite990);
HAnimSite1002 := THAnimSiteNode.Create;;
HAnimSite1002.Translation := Vector3(0,1.15,0.076);
TouchSensor1003 := TTouchSensorNode.Create;;
TouchSensor1003.Description := 'HAnimSite 88 hanim_mesosternale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1002.FdChildren.Add(TouchSensor1003);
Shape1004 := TShapeNode.Create;;
Appearance1005 := TAppearanceNode.Create;;
Material1006 := TMaterialNode.Create;;
Material1006.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1005.Material := Material1006;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1004.Appearance := Appearance1005;
IndexedFaceSet1007 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1007.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1007.CreaseAngle := 0.5;
IndexedFaceSet1007.Solid := False;
ColorRGBA1008 := TColorRGBANode.Create;;
ColorRGBA1008.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1007.Color := ColorRGBA1008;
Coordinate1009 := TCoordinateNode.Create;;
Coordinate1009.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1007.Coord := Coordinate1009;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1004.Geometry := IndexedFaceSet1007;
{ METHOD .FdChildren.Add }
HAnimSite1002.FdChildren.Add(Shape1004);
Billboard1010 := TBillboardNode.Create;;
Billboard1010.AxisOfRotation := Vector3(0,0,0);
Shape1011 := TShapeNode.Create;;
Text1012 := TTextNode.Create;;
end;

procedure InitJin20fSegmentedPart96;
begin

Text1012.SetText(['88']);
FontStyle1013 := TFontStyleNode.Create;;
FontStyle1013.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1012.FontStyle := FontStyle1013;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1011.Geometry := Text1012;
{ METHOD .FdChildren.Add }
Billboard1010.FdChildren.Add(Shape1011);
{ METHOD .FdChildren.Add }
HAnimSite1002.FdChildren.Add(Billboard1010);
{ METHOD .FdChildren.Add }
HAnimSegment989.FdChildren.Add(HAnimSite1002);
Shape1014 := TShapeNode.Create;;
LineSet1015 := TLineSetNode.Create;;
LineSet1015.SetVertexCount([2]);
ColorRGBA1016 := TColorRGBANode.Create;;
ColorRGBA1016.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1015.Color := ColorRGBA1016;
Coordinate1017 := TCoordinateNode.Create;;
Coordinate1017.SetPoint([Vector3(0,1.0638,-0.01378),Vector3(0,1.0467,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1015.Coord := Coordinate1017;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1014.Geometry := LineSet1015;
{ METHOD .FdChildren.Add }
HAnimSegment989.FdChildren.Add(Shape1014);
{ METHOD .FdChildren.Add }
HAnimJoint988.FdChildren.Add(HAnimSegment989);
HAnimJoint1018 := THAnimJointNode.Create;;
HAnimJoint1018.Center := Vector3(0,1.0784,-0.01376);
HAnimSegment1019 := THAnimSegmentNode.Create;;
HAnimSite1020 := THAnimSiteNode.Create;;
HAnimSite1020.Translation := Vector3(0.07,1.12,0.09);
TouchSensor1021 := TTouchSensorNode.Create;;
TouchSensor1021.Description := 'HAnimSite 29 hanim_l_thelion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1020.FdChildren.Add(TouchSensor1021);
Shape1022 := TShapeNode.Create;;
Appearance1023 := TAppearanceNode.Create;
end;

procedure InitJin20fSegmentedPart97;
begin
;
Material1024 := TMaterialNode.Create;;
Material1024.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1023.Material := Material1024;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1022.Appearance := Appearance1023;
IndexedFaceSet1025 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1025.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1025.CreaseAngle := 0.5;
IndexedFaceSet1025.Solid := False;
ColorRGBA1026 := TColorRGBANode.Create;;
ColorRGBA1026.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1025.Color := ColorRGBA1026;
Coordinate1027 := TCoordinateNode.Create;;
Coordinate1027.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1025.Coord := Coordinate1027;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1022.Geometry := IndexedFaceSet1025;
{ METHOD .FdChildren.Add }
HAnimSite1020.FdChildren.Add(Shape1022);
Billboard1028 := TBillboardNode.Create;;
Billboard1028.AxisOfRotation := Vector3(0,0,0);
Shape1029 := TShapeNode.Create;;
Text1030 := TTextNode.Create;;
Text1030.SetText(['29']);
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
HAnimSite1020.FdChildren.Add(Billboard1028);
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(HAnimSite1020);
HAnimSite1032 := THAnimSiteNode.Create;;
HAnimSite1032.Translation := Vector3(-0.07,1.12,0.09);
end;

procedure InitJin20fSegmentedPart98;
begin

TouchSensor1033 := TTouchSensorNode.Create;;
TouchSensor1033.Description := 'HAnimSite 31 hanim_r_thelion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(TouchSensor1033);
Shape1034 := TShapeNode.Create;;
Appearance1035 := TAppearanceNode.Create;;
Material1036 := TMaterialNode.Create;;
Material1036.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1035.Material := Material1036;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1034.Appearance := Appearance1035;
IndexedFaceSet1037 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1037.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1037.CreaseAngle := 0.5;
IndexedFaceSet1037.Solid := False;
ColorRGBA1038 := TColorRGBANode.Create;;
ColorRGBA1038.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1037.Color := ColorRGBA1038;
Coordinate1039 := TCoordinateNode.Create;;
Coordinate1039.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1037.Coord := Coordinate1039;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1034.Geometry := IndexedFaceSet1037;
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Shape1034);
Billboard1040 := TBillboardNode.Create;;
Billboard1040.AxisOfRotation := Vector3(0,0,0);
Shape1041 := TShapeNode.Create;;
Text1042 := TTextNode.Create;;
Text1042.SetText(['31']);
FontStyle1043 := TFontStyleNode.Create;;
FontStyle1043.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1042.FontStyle := FontStyle1043;
end;

procedure InitJin20fSegmentedPart99;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1041.Geometry := Text1042;
{ METHOD .FdChildren.Add }
Billboard1040.FdChildren.Add(Shape1041);
{ METHOD .FdChildren.Add }
HAnimSite1032.FdChildren.Add(Billboard1040);
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(HAnimSite1032);
HAnimSite1044 := THAnimSiteNode.Create;;
HAnimSite1044.Translation := Vector3(0,1.1,-0.1);
TouchSensor1045 := TTouchSensorNode.Create;;
TouchSensor1045.Description := 'HAnimSite 92 hanim_rear_center_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite1044.FdChildren.Add(TouchSensor1045);
Shape1046 := TShapeNode.Create;;
Appearance1047 := TAppearanceNode.Create;;
Material1048 := TMaterialNode.Create;;
Material1048.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1047.Material := Material1048;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1046.Appearance := Appearance1047;
IndexedFaceSet1049 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1049.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1049.CreaseAngle := 0.5;
IndexedFaceSet1049.Solid := False;
ColorRGBA1050 := TColorRGBANode.Create;;
ColorRGBA1050.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1049.Color := ColorRGBA1050;
Coordinate1051 := TCoordinateNode.Create;;
Coordinate1051.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1049.Coord := Coordinate1051;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1046.Geometry := IndexedFaceSet1049;
{ METHOD .FdChildren.Add }
HAnimSite1044.FdChildren.Add(Shape1046);
Billboard1052 := TBillboardNode.Create;;
Billboard1052.AxisOfRotation := Vector3(0,0,0);
Shape1053 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart100;
begin

Text1054 := TTextNode.Create;;
Text1054.SetText(['92']);
FontStyle1055 := TFontStyleNode.Create;;
FontStyle1055.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1054.FontStyle := FontStyle1055;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1053.Geometry := Text1054;
{ METHOD .FdChildren.Add }
Billboard1052.FdChildren.Add(Shape1053);
{ METHOD .FdChildren.Add }
HAnimSite1044.FdChildren.Add(Billboard1052);
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(HAnimSite1044);
HAnimSite1056 := THAnimSiteNode.Create;;
HAnimSite1056.Translation := Vector3(0.13,1.12,0);
TouchSensor1057 := TTouchSensorNode.Create;;
TouchSensor1057.Description := 'HAnimSite 94 hanim_l_chest_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite1056.FdChildren.Add(TouchSensor1057);
Shape1058 := TShapeNode.Create;;
Appearance1059 := TAppearanceNode.Create;;
Material1060 := TMaterialNode.Create;;
Material1060.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1059.Material := Material1060;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1058.Appearance := Appearance1059;
IndexedFaceSet1061 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1061.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1061.CreaseAngle := 0.5;
IndexedFaceSet1061.Solid := False;
ColorRGBA1062 := TColorRGBANode.Create;;
ColorRGBA1062.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1061.Color := ColorRGBA1062;
Coordinate1063 := TCoordinateNode.Create;;
Coordinate1063.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1061.Coord := Coordinate1063;
end;

procedure InitJin20fSegmentedPart101;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1058.Geometry := IndexedFaceSet1061;
{ METHOD .FdChildren.Add }
HAnimSite1056.FdChildren.Add(Shape1058);
Billboard1064 := TBillboardNode.Create;;
Billboard1064.AxisOfRotation := Vector3(0,0,0);
Shape1065 := TShapeNode.Create;;
Text1066 := TTextNode.Create;;
Text1066.SetText(['94']);
FontStyle1067 := TFontStyleNode.Create;;
FontStyle1067.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1066.FontStyle := FontStyle1067;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1065.Geometry := Text1066;
{ METHOD .FdChildren.Add }
Billboard1064.FdChildren.Add(Shape1065);
{ METHOD .FdChildren.Add }
HAnimSite1056.FdChildren.Add(Billboard1064);
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(HAnimSite1056);
HAnimSite1068 := THAnimSiteNode.Create;;
HAnimSite1068.Translation := Vector3(-0.13,1.12,0);
TouchSensor1069 := TTouchSensorNode.Create;;
TouchSensor1069.Description := 'HAnimSite 95 hanim_r_chest_midsagittal_plane_pt';
{ METHOD .FdChildren.Add }
HAnimSite1068.FdChildren.Add(TouchSensor1069);
Shape1070 := TShapeNode.Create;;
Appearance1071 := TAppearanceNode.Create;;
Material1072 := TMaterialNode.Create;;
Material1072.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1071.Material := Material1072;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1070.Appearance := Appearance1071;
IndexedFaceSet1073 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1073.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1073.CreaseAngle := 0.5;
IndexedFaceSet1073.Solid := False;
ColorRGBA1074 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart102;
begin
;
ColorRGBA1074.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1073.Color := ColorRGBA1074;
Coordinate1075 := TCoordinateNode.Create;;
Coordinate1075.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1073.Coord := Coordinate1075;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1070.Geometry := IndexedFaceSet1073;
{ METHOD .FdChildren.Add }
HAnimSite1068.FdChildren.Add(Shape1070);
Billboard1076 := TBillboardNode.Create;;
Billboard1076.AxisOfRotation := Vector3(0,0,0);
Shape1077 := TShapeNode.Create;;
Text1078 := TTextNode.Create;;
Text1078.SetText(['95']);
FontStyle1079 := TFontStyleNode.Create;;
FontStyle1079.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1078.FontStyle := FontStyle1079;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1077.Geometry := Text1078;
{ METHOD .FdChildren.Add }
Billboard1076.FdChildren.Add(Shape1077);
{ METHOD .FdChildren.Add }
HAnimSite1068.FdChildren.Add(Billboard1076);
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(HAnimSite1068);
Shape1080 := TShapeNode.Create;;
LineSet1081 := TLineSetNode.Create;;
LineSet1081.SetVertexCount([2]);
ColorRGBA1082 := TColorRGBANode.Create;;
ColorRGBA1082.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1081.Color := ColorRGBA1082;
Coordinate1083 := TCoordinateNode.Create;;
Coordinate1083.SetPoint([Vector3(0,1.0784,-0.01376),Vector3(0,1.0638,-0.01378)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1081.Coord := Coordinate1083;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1080.Geometry := LineSet1081;
{ METHOD .FdChildren.Add }
HAnimSegment1019.FdChildren.Add(Shape1080);
end;

procedure InitJin20fSegmentedPart103;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1018.FdChildren.Add(HAnimSegment1019);
HAnimJoint1084 := THAnimJointNode.Create;;
HAnimJoint1084.Center := Vector3(0,1.093,-0.01376);
HAnimSegment1085 := THAnimSegmentNode.Create;;
Shape1086 := TShapeNode.Create;;
LineSet1087 := TLineSetNode.Create;;
LineSet1087.SetVertexCount([2]);
ColorRGBA1088 := TColorRGBANode.Create;;
ColorRGBA1088.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1087.Color := ColorRGBA1088;
Coordinate1089 := TCoordinateNode.Create;;
Coordinate1089.SetPoint([Vector3(0,1.093,-0.01376),Vector3(0,1.0784,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1087.Coord := Coordinate1089;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1086.Geometry := LineSet1087;
{ METHOD .FdChildren.Add }
HAnimSegment1085.FdChildren.Add(Shape1086);
{ METHOD .FdChildren.Add }
HAnimJoint1084.FdChildren.Add(HAnimSegment1085);
HAnimJoint1090 := THAnimJointNode.Create;;
HAnimJoint1090.Center := Vector3(0,1.1088,-0.01376);
HAnimSegment1091 := THAnimSegmentNode.Create;;
Shape1092 := TShapeNode.Create;;
LineSet1093 := TLineSetNode.Create;;
LineSet1093.SetVertexCount([2]);
ColorRGBA1094 := TColorRGBANode.Create;;
ColorRGBA1094.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1093.Color := ColorRGBA1094;
Coordinate1095 := TCoordinateNode.Create;;
Coordinate1095.SetPoint([Vector3(0,1.1088,-0.01376),Vector3(0,1.093,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1093.Coord := Coordinate1095;
end;

procedure InitJin20fSegmentedPart104;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1092.Geometry := LineSet1093;
{ METHOD .FdChildren.Add }
HAnimSegment1091.FdChildren.Add(Shape1092);
{ METHOD .FdChildren.Add }
HAnimJoint1090.FdChildren.Add(HAnimSegment1091);
HAnimJoint1096 := THAnimJointNode.Create;;
HAnimJoint1096.Center := Vector3(0,1.1216,-0.01376);
HAnimSegment1097 := THAnimSegmentNode.Create;;
Shape1098 := TShapeNode.Create;;
LineSet1099 := TLineSetNode.Create;;
LineSet1099.SetVertexCount([2]);
ColorRGBA1100 := TColorRGBANode.Create;;
ColorRGBA1100.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1099.Color := ColorRGBA1100;
Coordinate1101 := TCoordinateNode.Create;;
Coordinate1101.SetPoint([Vector3(0,1.1216,-0.01376),Vector3(0,1.1088,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1099.Coord := Coordinate1101;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1098.Geometry := LineSet1099;
{ METHOD .FdChildren.Add }
HAnimSegment1097.FdChildren.Add(Shape1098);
{ METHOD .FdChildren.Add }
HAnimJoint1096.FdChildren.Add(HAnimSegment1097);
HAnimJoint1102 := THAnimJointNode.Create;;
HAnimJoint1102.Center := Vector3(0,1.137,-0.01376);
HAnimSegment1103 := THAnimSegmentNode.Create;;
Shape1104 := TShapeNode.Create;;
LineSet1105 := TLineSetNode.Create;;
LineSet1105.SetVertexCount([2]);
ColorRGBA1106 := TColorRGBANode.Create;;
ColorRGBA1106.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1105.Color := ColorRGBA1106;
Coordinate1107 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart105;
begin

Coordinate1107.SetPoint([Vector3(0,1.137,-0.01376),Vector3(0,1.1216,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1105.Coord := Coordinate1107;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1104.Geometry := LineSet1105;
{ METHOD .FdChildren.Add }
HAnimSegment1103.FdChildren.Add(Shape1104);
{ METHOD .FdChildren.Add }
HAnimJoint1102.FdChildren.Add(HAnimSegment1103);
HAnimJoint1108 := THAnimJointNode.Create;;
HAnimJoint1108.Center := Vector3(0,1.1524,-0.01376);
HAnimSegment1109 := THAnimSegmentNode.Create;;
Shape1110 := TShapeNode.Create;;
LineSet1111 := TLineSetNode.Create;;
LineSet1111.SetVertexCount([2]);
ColorRGBA1112 := TColorRGBANode.Create;;
ColorRGBA1112.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1111.Color := ColorRGBA1112;
Coordinate1113 := TCoordinateNode.Create;;
Coordinate1113.SetPoint([Vector3(0,1.1524,-0.01376),Vector3(0,1.137,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1111.Coord := Coordinate1113;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1110.Geometry := LineSet1111;
{ METHOD .FdChildren.Add }
HAnimSegment1109.FdChildren.Add(Shape1110);
{ METHOD .FdChildren.Add }
HAnimJoint1108.FdChildren.Add(HAnimSegment1109);
HAnimJoint1114 := THAnimJointNode.Create;;
HAnimJoint1114.Center := Vector3(0,1.1709,-0.01376);
HAnimSegment1115 := THAnimSegmentNode.Create;;
Shape1116 := TShapeNode.Create;;
LineSet1117 := TLineSetNode.Create;;
LineSet1117.SetVertexCount([2]);
ColorRGBA1118 := TColorRGBANode.Create;;
ColorRGBA1118.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1117.Color := ColorRGBA1118;
end;

procedure InitJin20fSegmentedPart106;
begin

Coordinate1119 := TCoordinateNode.Create;;
Coordinate1119.SetPoint([Vector3(0,1.1709,-0.01376),Vector3(0,1.1524,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1117.Coord := Coordinate1119;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1116.Geometry := LineSet1117;
{ METHOD .FdChildren.Add }
HAnimSegment1115.FdChildren.Add(Shape1116);
{ METHOD .FdChildren.Add }
HAnimJoint1114.FdChildren.Add(HAnimSegment1115);
HAnimJoint1120 := THAnimJointNode.Create;;
HAnimJoint1120.Center := Vector3(0,1.1956,-0.01378);
HAnimSegment1121 := THAnimSegmentNode.Create;;
Shape1122 := TShapeNode.Create;;
LineSet1123 := TLineSetNode.Create;;
LineSet1123.SetVertexCount([2]);
ColorRGBA1124 := TColorRGBANode.Create;;
ColorRGBA1124.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1123.Color := ColorRGBA1124;
Coordinate1125 := TCoordinateNode.Create;;
Coordinate1125.SetPoint([Vector3(0,1.1956,-0.01378),Vector3(0,1.1709,-0.01376)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1123.Coord := Coordinate1125;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1122.Geometry := LineSet1123;
{ METHOD .FdChildren.Add }
HAnimSegment1121.FdChildren.Add(Shape1122);
{ METHOD .FdChildren.Add }
HAnimJoint1120.FdChildren.Add(HAnimSegment1121);
HAnimJoint1126 := THAnimJointNode.Create;;
HAnimJoint1126.Center := Vector3(0,1.22,-0.0138);
HAnimSegment1127 := THAnimSegmentNode.Create;;
HAnimSite1128 := THAnimSiteNode.Create;;
HAnimSite1128.Translation := Vector3(0,1.22,0.08);
TouchSensor1129 := TTouchSensorNode.Create;;
TouchSensor1129.Description := 'HAnimSite 12 hanim_suprasternale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1128.FdChildren.Add(TouchSensor1129);
end;

procedure InitJin20fSegmentedPart107;
begin

Shape1130 := TShapeNode.Create;;
Appearance1131 := TAppearanceNode.Create;;
Material1132 := TMaterialNode.Create;;
Material1132.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1131.Material := Material1132;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1130.Appearance := Appearance1131;
IndexedFaceSet1133 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1133.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1133.CreaseAngle := 0.5;
IndexedFaceSet1133.Solid := False;
ColorRGBA1134 := TColorRGBANode.Create;;
ColorRGBA1134.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1133.Color := ColorRGBA1134;
Coordinate1135 := TCoordinateNode.Create;;
Coordinate1135.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1133.Coord := Coordinate1135;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1130.Geometry := IndexedFaceSet1133;
{ METHOD .FdChildren.Add }
HAnimSite1128.FdChildren.Add(Shape1130);
Billboard1136 := TBillboardNode.Create;;
Billboard1136.AxisOfRotation := Vector3(0,0,0);
Shape1137 := TShapeNode.Create;;
Text1138 := TTextNode.Create;;
Text1138.SetText(['12']);
FontStyle1139 := TFontStyleNode.Create;;
FontStyle1139.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1138.FontStyle := FontStyle1139;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1137.Geometry := Text1138;
{ METHOD .FdChildren.Add }
Billboard1136.FdChildren.Add(Shape1137);
{ METHOD .FdChildren.Add }
HAnimSite1128.FdChildren.Add(Billboard1136);
{ METHOD .FdChildren.Add }
HAnimSegment1127.FdChildren.Add(HAnimSite1128);
end;

procedure InitJin20fSegmentedPart108;
begin

HAnimSite1140 := THAnimSiteNode.Create;;
HAnimSite1140.Translation := Vector3(0,1.22,-0.08);
TouchSensor1141 := TTouchSensorNode.Create;;
TouchSensor1141.Description := 'HAnimSite 10 hanim_cervicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1140.FdChildren.Add(TouchSensor1141);
Shape1142 := TShapeNode.Create;;
Appearance1143 := TAppearanceNode.Create;;
Material1144 := TMaterialNode.Create;;
Material1144.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1143.Material := Material1144;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1142.Appearance := Appearance1143;
IndexedFaceSet1145 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1145.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1145.CreaseAngle := 0.5;
IndexedFaceSet1145.Solid := False;
ColorRGBA1146 := TColorRGBANode.Create;;
ColorRGBA1146.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1145.Color := ColorRGBA1146;
Coordinate1147 := TCoordinateNode.Create;;
Coordinate1147.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1145.Coord := Coordinate1147;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1142.Geometry := IndexedFaceSet1145;
{ METHOD .FdChildren.Add }
HAnimSite1140.FdChildren.Add(Shape1142);
Billboard1148 := TBillboardNode.Create;;
Billboard1148.AxisOfRotation := Vector3(0,0,0);
Shape1149 := TShapeNode.Create;;
Text1150 := TTextNode.Create;;
Text1150.SetText(['10']);
FontStyle1151 := TFontStyleNode.Create;
end;

procedure InitJin20fSegmentedPart109;
begin
;
FontStyle1151.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1150.FontStyle := FontStyle1151;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1149.Geometry := Text1150;
{ METHOD .FdChildren.Add }
Billboard1148.FdChildren.Add(Shape1149);
{ METHOD .FdChildren.Add }
HAnimSite1140.FdChildren.Add(Billboard1148);
{ METHOD .FdChildren.Add }
HAnimSegment1127.FdChildren.Add(HAnimSite1140);
Shape1152 := TShapeNode.Create;;
LineSet1153 := TLineSetNode.Create;;
LineSet1153.SetVertexCount([2]);
ColorRGBA1154 := TColorRGBANode.Create;;
ColorRGBA1154.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1153.Color := ColorRGBA1154;
Coordinate1155 := TCoordinateNode.Create;;
Coordinate1155.SetPoint([Vector3(0,1.22,-0.0138),Vector3(0,1.1956,-0.01378)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1153.Coord := Coordinate1155;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1152.Geometry := LineSet1153;
{ METHOD .FdChildren.Add }
HAnimSegment1127.FdChildren.Add(Shape1152);
{ METHOD .FdChildren.Add }
HAnimJoint1126.FdChildren.Add(HAnimSegment1127);
HAnimJoint1156 := THAnimJointNode.Create;;
HAnimJoint1156.Center := Vector3(0,1.2453,-0.01506);
HAnimSegment1157 := THAnimSegmentNode.Create;;
HAnimSite1158 := THAnimSiteNode.Create;;
HAnimSite1158.Translation := Vector3(0.06,1.26,0);
TouchSensor1159 := TTouchSensorNode.Create;;
TouchSensor1159.Description := 'HAnimSite 82 hanim_l_neck_base_pt';
{ METHOD .FdChildren.Add }
HAnimSite1158.FdChildren.Add(TouchSensor1159);
Shape1160 := TShapeNode.Create;;
Appearance1161 := TAppearanceNode.Create;;
Material1162 := TMaterialNode.Create;
end;

procedure InitJin20fSegmentedPart110;
begin
;
Material1162.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1161.Material := Material1162;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1160.Appearance := Appearance1161;
IndexedFaceSet1163 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1163.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1163.CreaseAngle := 0.5;
IndexedFaceSet1163.Solid := False;
ColorRGBA1164 := TColorRGBANode.Create;;
ColorRGBA1164.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1163.Color := ColorRGBA1164;
Coordinate1165 := TCoordinateNode.Create;;
Coordinate1165.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1163.Coord := Coordinate1165;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1160.Geometry := IndexedFaceSet1163;
{ METHOD .FdChildren.Add }
HAnimSite1158.FdChildren.Add(Shape1160);
Billboard1166 := TBillboardNode.Create;;
Billboard1166.AxisOfRotation := Vector3(0,0,0);
Shape1167 := TShapeNode.Create;;
Text1168 := TTextNode.Create;;
Text1168.SetText(['82']);
FontStyle1169 := TFontStyleNode.Create;;
FontStyle1169.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1168.FontStyle := FontStyle1169;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1167.Geometry := Text1168;
{ METHOD .FdChildren.Add }
Billboard1166.FdChildren.Add(Shape1167);
{ METHOD .FdChildren.Add }
HAnimSite1158.FdChildren.Add(Billboard1166);
{ METHOD .FdChildren.Add }
HAnimSegment1157.FdChildren.Add(HAnimSite1158);
HAnimSite1170 := THAnimSiteNode.Create;;
HAnimSite1170.Translation := Vector3(-0.06,1.26,0);
TouchSensor1171 := TTouchSensorNode.Create;;
end;

procedure InitJin20fSegmentedPart111;
begin

TouchSensor1171.Description := 'HAnimSite 83 hanim_r_neck_base_pt';
{ METHOD .FdChildren.Add }
HAnimSite1170.FdChildren.Add(TouchSensor1171);
Shape1172 := TShapeNode.Create;;
Appearance1173 := TAppearanceNode.Create;;
Material1174 := TMaterialNode.Create;;
Material1174.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1173.Material := Material1174;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1172.Appearance := Appearance1173;
IndexedFaceSet1175 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1175.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1175.CreaseAngle := 0.5;
IndexedFaceSet1175.Solid := False;
ColorRGBA1176 := TColorRGBANode.Create;;
ColorRGBA1176.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1175.Color := ColorRGBA1176;
Coordinate1177 := TCoordinateNode.Create;;
Coordinate1177.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1175.Coord := Coordinate1177;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1172.Geometry := IndexedFaceSet1175;
{ METHOD .FdChildren.Add }
HAnimSite1170.FdChildren.Add(Shape1172);
Billboard1178 := TBillboardNode.Create;;
Billboard1178.AxisOfRotation := Vector3(0,0,0);
Shape1179 := TShapeNode.Create;;
Text1180 := TTextNode.Create;;
Text1180.SetText(['83']);
FontStyle1181 := TFontStyleNode.Create;;
FontStyle1181.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1180.FontStyle := FontStyle1181;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1179.Geometry := Text1180;
{ METHOD .FdChildren.Add }
Billboard1178.FdChildren.Add(Shape1179);
end;

procedure InitJin20fSegmentedPart112;
begin

{ METHOD .FdChildren.Add }
HAnimSite1170.FdChildren.Add(Billboard1178);
{ METHOD .FdChildren.Add }
HAnimSegment1157.FdChildren.Add(HAnimSite1170);
Shape1182 := TShapeNode.Create;;
LineSet1183 := TLineSetNode.Create;;
LineSet1183.SetVertexCount([2]);
ColorRGBA1184 := TColorRGBANode.Create;;
ColorRGBA1184.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1183.Color := ColorRGBA1184;
Coordinate1185 := TCoordinateNode.Create;;
Coordinate1185.SetPoint([Vector3(0,1.2453,-0.01506),Vector3(0,1.22,-0.0138)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1183.Coord := Coordinate1185;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1182.Geometry := LineSet1183;
{ METHOD .FdChildren.Add }
HAnimSegment1157.FdChildren.Add(Shape1182);
{ METHOD .FdChildren.Add }
HAnimJoint1156.FdChildren.Add(HAnimSegment1157);
HAnimJoint1186 := THAnimJointNode.Create;;
HAnimJoint1186.Center := Vector3(0,1.2575,-0.01506);
HAnimSegment1187 := THAnimSegmentNode.Create;;
Shape1188 := TShapeNode.Create;;
LineSet1189 := TLineSetNode.Create;;
LineSet1189.SetVertexCount([2]);
ColorRGBA1190 := TColorRGBANode.Create;;
ColorRGBA1190.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1189.Color := ColorRGBA1190;
Coordinate1191 := TCoordinateNode.Create;;
Coordinate1191.SetPoint([Vector3(0,1.2575,-0.01506),Vector3(0,1.2453,-0.01506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1189.Coord := Coordinate1191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1188.Geometry := LineSet1189;
{ METHOD .FdChildren.Add }
HAnimSegment1187.FdChildren.Add(Shape1188);
{ METHOD .FdChildren.Add }
HAnimJoint1186.FdChildren.Add(HAnimSegment1187);
HAnimJoint1192 := THAnimJointNode.Create;
end;

procedure InitJin20fSegmentedPart113;
begin
;
HAnimJoint1192.Center := Vector3(0,1.2699,-0.01506);
HAnimSegment1193 := THAnimSegmentNode.Create;;
Shape1194 := TShapeNode.Create;;
LineSet1195 := TLineSetNode.Create;;
LineSet1195.SetVertexCount([2]);
ColorRGBA1196 := TColorRGBANode.Create;;
ColorRGBA1196.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1195.Color := ColorRGBA1196;
Coordinate1197 := TCoordinateNode.Create;;
Coordinate1197.SetPoint([Vector3(0,1.2699,-0.01506),Vector3(0,1.2575,-0.01506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1195.Coord := Coordinate1197;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1194.Geometry := LineSet1195;
{ METHOD .FdChildren.Add }
HAnimSegment1193.FdChildren.Add(Shape1194);
{ METHOD .FdChildren.Add }
HAnimJoint1192.FdChildren.Add(HAnimSegment1193);
HAnimJoint1198 := THAnimJointNode.Create;;
HAnimJoint1198.Center := Vector3(0,1.28227,-0.01506);
HAnimSegment1199 := THAnimSegmentNode.Create;;
Shape1200 := TShapeNode.Create;;
LineSet1201 := TLineSetNode.Create;;
LineSet1201.SetVertexCount([2]);
ColorRGBA1202 := TColorRGBANode.Create;;
ColorRGBA1202.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1201.Color := ColorRGBA1202;
Coordinate1203 := TCoordinateNode.Create;;
Coordinate1203.SetPoint([Vector3(0,1.28227,-0.01506),Vector3(0,1.2699,-0.01506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1201.Coord := Coordinate1203;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1200.Geometry := LineSet1201;
{ METHOD .FdChildren.Add }
HAnimSegment1199.FdChildren.Add(Shape1200);
end;

procedure InitJin20fSegmentedPart114;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1198.FdChildren.Add(HAnimSegment1199);
HAnimJoint1204 := THAnimJointNode.Create;;
HAnimJoint1204.Center := Vector3(0,1.2951,-0.01506);
HAnimSegment1205 := THAnimSegmentNode.Create;;
Shape1206 := TShapeNode.Create;;
LineSet1207 := TLineSetNode.Create;;
LineSet1207.SetVertexCount([2]);
ColorRGBA1208 := TColorRGBANode.Create;;
ColorRGBA1208.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1207.Color := ColorRGBA1208;
Coordinate1209 := TCoordinateNode.Create;;
Coordinate1209.SetPoint([Vector3(0,1.2951,-0.01506),Vector3(0,1.28227,-0.01506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1207.Coord := Coordinate1209;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1206.Geometry := LineSet1207;
{ METHOD .FdChildren.Add }
HAnimSegment1205.FdChildren.Add(Shape1206);
{ METHOD .FdChildren.Add }
HAnimJoint1204.FdChildren.Add(HAnimSegment1205);
HAnimJoint1210 := THAnimJointNode.Create;;
HAnimJoint1210.Center := Vector3(0,1.307,-0.015);
HAnimSegment1211 := THAnimSegmentNode.Create;;
HAnimSite1212 := THAnimSiteNode.Create;;
HAnimSite1212.Translation := Vector3(0,1.29,0.04);
TouchSensor1213 := TTouchSensorNode.Create;;
TouchSensor1213.Description := 'HAnimSite 11 hanim_adams_apple_pt';
{ METHOD .FdChildren.Add }
HAnimSite1212.FdChildren.Add(TouchSensor1213);
Shape1214 := TShapeNode.Create;;
Appearance1215 := TAppearanceNode.Create;;
Material1216 := TMaterialNode.Create;;
end;

procedure InitJin20fSegmentedPart115;
begin

Material1216.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1215.Material := Material1216;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1214.Appearance := Appearance1215;
IndexedFaceSet1217 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1217.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1217.CreaseAngle := 0.5;
IndexedFaceSet1217.Solid := False;
ColorRGBA1218 := TColorRGBANode.Create;;
ColorRGBA1218.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1217.Color := ColorRGBA1218;
Coordinate1219 := TCoordinateNode.Create;;
Coordinate1219.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1217.Coord := Coordinate1219;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1214.Geometry := IndexedFaceSet1217;
{ METHOD .FdChildren.Add }
HAnimSite1212.FdChildren.Add(Shape1214);
Billboard1220 := TBillboardNode.Create;;
Billboard1220.AxisOfRotation := Vector3(0,0,0);
Shape1221 := TShapeNode.Create;;
Text1222 := TTextNode.Create;;
Text1222.SetText(['11']);
FontStyle1223 := TFontStyleNode.Create;;
FontStyle1223.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1222.FontStyle := FontStyle1223;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1221.Geometry := Text1222;
{ METHOD .FdChildren.Add }
Billboard1220.FdChildren.Add(Shape1221);
{ METHOD .FdChildren.Add }
HAnimSite1212.FdChildren.Add(Billboard1220);
{ METHOD .FdChildren.Add }
HAnimSegment1211.FdChildren.Add(HAnimSite1212);
Shape1224 := TShapeNode.Create;;
LineSet1225 := TLineSetNode.Create;;
LineSet1225.SetVertexCount([2]);
ColorRGBA1226 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart116;
begin
;
ColorRGBA1226.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1225.Color := ColorRGBA1226;
Coordinate1227 := TCoordinateNode.Create;;
Coordinate1227.SetPoint([Vector3(0,1.307,-0.015),Vector3(0,1.2951,-0.01506)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1225.Coord := Coordinate1227;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1224.Geometry := LineSet1225;
{ METHOD .FdChildren.Add }
HAnimSegment1211.FdChildren.Add(Shape1224);
{ METHOD .FdChildren.Add }
HAnimJoint1210.FdChildren.Add(HAnimSegment1211);
HAnimJoint1228 := THAnimJointNode.Create;;
HAnimJoint1228.Center := Vector3(0,1.3185,-0.0151);
HAnimSegment1229 := THAnimSegmentNode.Create;;
Shape1230 := TShapeNode.Create;;
LineSet1231 := TLineSetNode.Create;;
LineSet1231.SetVertexCount([2]);
ColorRGBA1232 := TColorRGBANode.Create;;
ColorRGBA1232.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1231.Color := ColorRGBA1232;
Coordinate1233 := TCoordinateNode.Create;;
Coordinate1233.SetPoint([Vector3(0,1.3185,-0.0151),Vector3(0,1.307,-0.015)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1231.Coord := Coordinate1233;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1230.Geometry := LineSet1231;
{ METHOD .FdChildren.Add }
HAnimSegment1229.FdChildren.Add(Shape1230);
{ METHOD .FdChildren.Add }
HAnimJoint1228.FdChildren.Add(HAnimSegment1229);
HAnimJoint1234 := THAnimJointNode.Create;;
HAnimJoint1234.Center := Vector3(0,1.3126,-0.0154);
HAnimSegment1235 := THAnimSegmentNode.Create;;
HAnimSite1236 := THAnimSiteNode.Create;;
HAnimSite1236.Translation := Vector3(0,1.612,-0.03);
TouchSensor1237 := TTouchSensorNode.Create;
end;

procedure InitJin20fSegmentedPart117;
begin
;
TouchSensor1237.Description := 'HAnimSite 0 hanim_skull_vertex_pt';
{ METHOD .FdChildren.Add }
HAnimSite1236.FdChildren.Add(TouchSensor1237);
Shape1238 := TShapeNode.Create;;
Appearance1239 := TAppearanceNode.Create;;
Material1240 := TMaterialNode.Create;;
Material1240.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1239.Material := Material1240;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1238.Appearance := Appearance1239;
IndexedFaceSet1241 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1241.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1241.CreaseAngle := 0.5;
IndexedFaceSet1241.Solid := False;
ColorRGBA1242 := TColorRGBANode.Create;;
ColorRGBA1242.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1241.Color := ColorRGBA1242;
Coordinate1243 := TCoordinateNode.Create;;
Coordinate1243.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1241.Coord := Coordinate1243;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1238.Geometry := IndexedFaceSet1241;
{ METHOD .FdChildren.Add }
HAnimSite1236.FdChildren.Add(Shape1238);
Billboard1244 := TBillboardNode.Create;;
Billboard1244.AxisOfRotation := Vector3(0,0,0);
Shape1245 := TShapeNode.Create;;
Text1246 := TTextNode.Create;;
Text1246.SetText(['0']);
FontStyle1247 := TFontStyleNode.Create;;
FontStyle1247.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1246.FontStyle := FontStyle1247;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1245.Geometry := Text1246;
end;

procedure InitJin20fSegmentedPart118;
begin

{ METHOD .FdChildren.Add }
Billboard1244.FdChildren.Add(Shape1245);
{ METHOD .FdChildren.Add }
HAnimSite1236.FdChildren.Add(Billboard1244);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1236);
HAnimSite1248 := THAnimSiteNode.Create;;
HAnimSite1248.Translation := Vector3(0,1.454,0.128);
TouchSensor1249 := TTouchSensorNode.Create;;
TouchSensor1249.Description := 'HAnimSite 1 hanim_glabella_pt';
{ METHOD .FdChildren.Add }
HAnimSite1248.FdChildren.Add(TouchSensor1249);
Shape1250 := TShapeNode.Create;;
Appearance1251 := TAppearanceNode.Create;;
Material1252 := TMaterialNode.Create;;
Material1252.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1251.Material := Material1252;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1250.Appearance := Appearance1251;
IndexedFaceSet1253 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1253.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1253.CreaseAngle := 0.5;
IndexedFaceSet1253.Solid := False;
ColorRGBA1254 := TColorRGBANode.Create;;
ColorRGBA1254.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1253.Color := ColorRGBA1254;
Coordinate1255 := TCoordinateNode.Create;;
Coordinate1255.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1253.Coord := Coordinate1255;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1250.Geometry := IndexedFaceSet1253;
{ METHOD .FdChildren.Add }
HAnimSite1248.FdChildren.Add(Shape1250);
Billboard1256 := TBillboardNode.Create;;
Billboard1256.AxisOfRotation := Vector3(0,0,0);
Shape1257 := TShapeNode.Create;;
Text1258 := TTextNode.Create;
end;

procedure InitJin20fSegmentedPart119;
begin
;
Text1258.SetText(['1']);
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
HAnimSite1248.FdChildren.Add(Billboard1256);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1248);
HAnimSite1260 := THAnimSiteNode.Create;;
HAnimSite1260.Translation := Vector3(0,1.4,0.12);
TouchSensor1261 := TTouchSensorNode.Create;;
TouchSensor1261.Description := 'HAnimSite 2 hanim_sellion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(TouchSensor1261);
Shape1262 := TShapeNode.Create;;
Appearance1263 := TAppearanceNode.Create;;
Material1264 := TMaterialNode.Create;;
Material1264.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1263.Material := Material1264;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1262.Appearance := Appearance1263;
IndexedFaceSet1265 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1265.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1265.CreaseAngle := 0.5;
IndexedFaceSet1265.Solid := False;
ColorRGBA1266 := TColorRGBANode.Create;;
ColorRGBA1266.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1265.Color := ColorRGBA1266;
Coordinate1267 := TCoordinateNode.Create;;
Coordinate1267.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1265.Coord := Coordinate1267;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1262.Geometry := IndexedFaceSet1265;
end;

procedure InitJin20fSegmentedPart120;
begin

{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(Shape1262);
Billboard1268 := TBillboardNode.Create;;
Billboard1268.AxisOfRotation := Vector3(0,0,0);
Shape1269 := TShapeNode.Create;;
Text1270 := TTextNode.Create;;
Text1270.SetText(['2']);
FontStyle1271 := TFontStyleNode.Create;;
FontStyle1271.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1270.FontStyle := FontStyle1271;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1269.Geometry := Text1270;
{ METHOD .FdChildren.Add }
Billboard1268.FdChildren.Add(Shape1269);
{ METHOD .FdChildren.Add }
HAnimSite1260.FdChildren.Add(Billboard1268);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1260);
HAnimSite1272 := THAnimSiteNode.Create;;
HAnimSite1272.Translation := Vector3(0.039,1.38,0.09);
TouchSensor1273 := TTouchSensorNode.Create;;
TouchSensor1273.Description := 'HAnimSite 3 hanim_l_infraorbitale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1272.FdChildren.Add(TouchSensor1273);
Shape1274 := TShapeNode.Create;;
Appearance1275 := TAppearanceNode.Create;;
Material1276 := TMaterialNode.Create;;
Material1276.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1275.Material := Material1276;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1274.Appearance := Appearance1275;
IndexedFaceSet1277 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1277.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1277.CreaseAngle := 0.5;
IndexedFaceSet1277.Solid := False;
ColorRGBA1278 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart121;
begin

ColorRGBA1278.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1277.Color := ColorRGBA1278;
Coordinate1279 := TCoordinateNode.Create;;
Coordinate1279.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1277.Coord := Coordinate1279;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1274.Geometry := IndexedFaceSet1277;
{ METHOD .FdChildren.Add }
HAnimSite1272.FdChildren.Add(Shape1274);
Billboard1280 := TBillboardNode.Create;;
Billboard1280.AxisOfRotation := Vector3(0,0,0);
Shape1281 := TShapeNode.Create;;
Text1282 := TTextNode.Create;;
Text1282.SetText(['3']);
FontStyle1283 := TFontStyleNode.Create;;
FontStyle1283.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1282.FontStyle := FontStyle1283;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1281.Geometry := Text1282;
{ METHOD .FdChildren.Add }
Billboard1280.FdChildren.Add(Shape1281);
{ METHOD .FdChildren.Add }
HAnimSite1272.FdChildren.Add(Billboard1280);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1272);
HAnimSite1284 := THAnimSiteNode.Create;;
HAnimSite1284.Translation := Vector3(0.1,1.38,0.0282);
TouchSensor1285 := TTouchSensorNode.Create;;
TouchSensor1285.Description := 'HAnimSite 4 hanim_l_tragion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1284.FdChildren.Add(TouchSensor1285);
Shape1286 := TShapeNode.Create;;
Appearance1287 := TAppearanceNode.Create;;
Material1288 := TMaterialNode.Create;;
Material1288.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1287.Material := Material1288;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1286.Appearance := Appearance1287;
end;

procedure InitJin20fSegmentedPart122;
begin

IndexedFaceSet1289 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1289.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1289.CreaseAngle := 0.5;
IndexedFaceSet1289.Solid := False;
ColorRGBA1290 := TColorRGBANode.Create;;
ColorRGBA1290.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1289.Color := ColorRGBA1290;
Coordinate1291 := TCoordinateNode.Create;;
Coordinate1291.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1289.Coord := Coordinate1291;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1286.Geometry := IndexedFaceSet1289;
{ METHOD .FdChildren.Add }
HAnimSite1284.FdChildren.Add(Shape1286);
Billboard1292 := TBillboardNode.Create;;
Billboard1292.AxisOfRotation := Vector3(0,0,0);
Shape1293 := TShapeNode.Create;;
Text1294 := TTextNode.Create;;
Text1294.SetText(['4']);
FontStyle1295 := TFontStyleNode.Create;;
FontStyle1295.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1294.FontStyle := FontStyle1295;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1293.Geometry := Text1294;
{ METHOD .FdChildren.Add }
Billboard1292.FdChildren.Add(Shape1293);
{ METHOD .FdChildren.Add }
HAnimSite1284.FdChildren.Add(Billboard1292);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1284);
HAnimSite1296 := THAnimSiteNode.Create;;
HAnimSite1296.Translation := Vector3(-0.039,1.38,0.09);
TouchSensor1297 := TTouchSensorNode.Create;;
TouchSensor1297.Description := 'HAnimSite 6 hanim_r_infraorbitale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1296.FdChildren.Add(TouchSensor1297);
Shape1298 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart123;
begin

Appearance1299 := TAppearanceNode.Create;;
Material1300 := TMaterialNode.Create;;
Material1300.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1299.Material := Material1300;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1298.Appearance := Appearance1299;
IndexedFaceSet1301 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1301.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1301.CreaseAngle := 0.5;
IndexedFaceSet1301.Solid := False;
ColorRGBA1302 := TColorRGBANode.Create;;
ColorRGBA1302.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1301.Color := ColorRGBA1302;
Coordinate1303 := TCoordinateNode.Create;;
Coordinate1303.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1301.Coord := Coordinate1303;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1298.Geometry := IndexedFaceSet1301;
{ METHOD .FdChildren.Add }
HAnimSite1296.FdChildren.Add(Shape1298);
Billboard1304 := TBillboardNode.Create;;
Billboard1304.AxisOfRotation := Vector3(0,0,0);
Shape1305 := TShapeNode.Create;;
Text1306 := TTextNode.Create;;
Text1306.SetText(['6']);
FontStyle1307 := TFontStyleNode.Create;;
FontStyle1307.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1306.FontStyle := FontStyle1307;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1305.Geometry := Text1306;
{ METHOD .FdChildren.Add }
Billboard1304.FdChildren.Add(Shape1305);
{ METHOD .FdChildren.Add }
HAnimSite1296.FdChildren.Add(Billboard1304);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1296);
HAnimSite1308 := THAnimSiteNode.Create;;
end;

procedure InitJin20fSegmentedPart124;
begin

HAnimSite1308.Translation := Vector3(-0.1,1.38,0.0282);
TouchSensor1309 := TTouchSensorNode.Create;;
TouchSensor1309.Description := 'HAnimSite 7 hanim_r_tragion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1308.FdChildren.Add(TouchSensor1309);
Shape1310 := TShapeNode.Create;;
Appearance1311 := TAppearanceNode.Create;;
Material1312 := TMaterialNode.Create;;
Material1312.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1311.Material := Material1312;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1310.Appearance := Appearance1311;
IndexedFaceSet1313 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1313.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1313.CreaseAngle := 0.5;
IndexedFaceSet1313.Solid := False;
ColorRGBA1314 := TColorRGBANode.Create;;
ColorRGBA1314.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1313.Color := ColorRGBA1314;
Coordinate1315 := TCoordinateNode.Create;;
Coordinate1315.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1313.Coord := Coordinate1315;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1310.Geometry := IndexedFaceSet1313;
{ METHOD .FdChildren.Add }
HAnimSite1308.FdChildren.Add(Shape1310);
Billboard1316 := TBillboardNode.Create;;
Billboard1316.AxisOfRotation := Vector3(0,0,0);
Shape1317 := TShapeNode.Create;;
Text1318 := TTextNode.Create;;
Text1318.SetText(['7']);
FontStyle1319 := TFontStyleNode.Create;;
FontStyle1319.Size := 0.035;
end;

procedure InitJin20fSegmentedPart125;
begin

{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1318.FontStyle := FontStyle1319;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1317.Geometry := Text1318;
{ METHOD .FdChildren.Add }
Billboard1316.FdChildren.Add(Shape1317);
{ METHOD .FdChildren.Add }
HAnimSite1308.FdChildren.Add(Billboard1316);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1308);
HAnimSite1320 := THAnimSiteNode.Create;;
HAnimSite1320.Translation := Vector3(0.0039,1.35,-0.16);
TouchSensor1321 := TTouchSensorNode.Create;;
TouchSensor1321.Description := 'HAnimSite 81 hanim_nuchale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1320.FdChildren.Add(TouchSensor1321);
Shape1322 := TShapeNode.Create;;
Appearance1323 := TAppearanceNode.Create;;
Material1324 := TMaterialNode.Create;;
Material1324.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1323.Material := Material1324;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1322.Appearance := Appearance1323;
IndexedFaceSet1325 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1325.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1325.CreaseAngle := 0.5;
IndexedFaceSet1325.Solid := False;
ColorRGBA1326 := TColorRGBANode.Create;;
ColorRGBA1326.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1325.Color := ColorRGBA1326;
Coordinate1327 := TCoordinateNode.Create;;
Coordinate1327.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1325.Coord := Coordinate1327;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1322.Geometry := IndexedFaceSet1325;
{ METHOD .FdChildren.Add }
HAnimSite1320.FdChildren.Add(Shape1322);
Billboard1328 := TBillboardNode.Create;;
Billboard1328.AxisOfRotation := Vector3(0,0,0);
Shape1329 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart126;
begin
;
Text1330 := TTextNode.Create;;
Text1330.SetText(['81']);
FontStyle1331 := TFontStyleNode.Create;;
FontStyle1331.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1330.FontStyle := FontStyle1331;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1329.Geometry := Text1330;
{ METHOD .FdChildren.Add }
Billboard1328.FdChildren.Add(Shape1329);
{ METHOD .FdChildren.Add }
HAnimSite1320.FdChildren.Add(Billboard1328);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1320);
HAnimSite1332 := THAnimSiteNode.Create;;
HAnimSite1332.Translation := Vector3(0.0039,1.4588,-0.18);
TouchSensor1333 := TTouchSensorNode.Create;;
TouchSensor1333.Description := 'HAnimSite 89 hanim_opisthocranion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1332.FdChildren.Add(TouchSensor1333);
Shape1334 := TShapeNode.Create;;
Appearance1335 := TAppearanceNode.Create;;
Material1336 := TMaterialNode.Create;;
Material1336.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1335.Material := Material1336;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1334.Appearance := Appearance1335;
IndexedFaceSet1337 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1337.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1337.CreaseAngle := 0.5;
IndexedFaceSet1337.Solid := False;
ColorRGBA1338 := TColorRGBANode.Create;;
ColorRGBA1338.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1337.Color := ColorRGBA1338;
Coordinate1339 := TCoordinateNode.Create;;
Coordinate1339.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
end;

procedure InitJin20fSegmentedPart127;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1337.Coord := Coordinate1339;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1334.Geometry := IndexedFaceSet1337;
{ METHOD .FdChildren.Add }
HAnimSite1332.FdChildren.Add(Shape1334);
Billboard1340 := TBillboardNode.Create;;
Billboard1340.AxisOfRotation := Vector3(0,0,0);
Shape1341 := TShapeNode.Create;;
Text1342 := TTextNode.Create;;
Text1342.SetText(['89']);
FontStyle1343 := TFontStyleNode.Create;;
FontStyle1343.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1342.FontStyle := FontStyle1343;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1341.Geometry := Text1342;
{ METHOD .FdChildren.Add }
Billboard1340.FdChildren.Add(Shape1341);
{ METHOD .FdChildren.Add }
HAnimSite1332.FdChildren.Add(Billboard1340);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1332);
HAnimSite1344 := THAnimSiteNode.Create;;
HAnimSite1344.Translation := Vector3(0.086,1.399,0.074);
TouchSensor1345 := TTouchSensorNode.Create;;
TouchSensor1345.Description := 'HAnimSite 85 hanim_l_ectocanthus_pt';
{ METHOD .FdChildren.Add }
HAnimSite1344.FdChildren.Add(TouchSensor1345);
Shape1346 := TShapeNode.Create;;
Appearance1347 := TAppearanceNode.Create;;
Material1348 := TMaterialNode.Create;;
Material1348.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1347.Material := Material1348;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1346.Appearance := Appearance1347;
IndexedFaceSet1349 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1349.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1349.CreaseAngle := 0.5;
IndexedFaceSet1349.Solid := False;
end;

procedure InitJin20fSegmentedPart128;
begin

ColorRGBA1350 := TColorRGBANode.Create;;
ColorRGBA1350.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1349.Color := ColorRGBA1350;
Coordinate1351 := TCoordinateNode.Create;;
Coordinate1351.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1349.Coord := Coordinate1351;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1346.Geometry := IndexedFaceSet1349;
{ METHOD .FdChildren.Add }
HAnimSite1344.FdChildren.Add(Shape1346);
Billboard1352 := TBillboardNode.Create;;
Billboard1352.AxisOfRotation := Vector3(0,0,0);
Shape1353 := TShapeNode.Create;;
Text1354 := TTextNode.Create;;
Text1354.SetText(['85']);
FontStyle1355 := TFontStyleNode.Create;;
FontStyle1355.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1354.FontStyle := FontStyle1355;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1353.Geometry := Text1354;
{ METHOD .FdChildren.Add }
Billboard1352.FdChildren.Add(Shape1353);
{ METHOD .FdChildren.Add }
HAnimSite1344.FdChildren.Add(Billboard1352);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1344);
HAnimSite1356 := THAnimSiteNode.Create;;
HAnimSite1356.Translation := Vector3(-0.086,1.399,0.074);
TouchSensor1357 := TTouchSensorNode.Create;;
TouchSensor1357.Description := 'HAnimSite 86 hanim_r_ectocanthus_pt';
{ METHOD .FdChildren.Add }
HAnimSite1356.FdChildren.Add(TouchSensor1357);
Shape1358 := TShapeNode.Create;;
Appearance1359 := TAppearanceNode.Create;;
Material1360 := TMaterialNode.Create;;
Material1360.DiffuseColor := Vector3(1,1,1);
end;

procedure InitJin20fSegmentedPart129;
begin

{ METHOD .SetMaterial }
Appearance1359.Material := Material1360;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1358.Appearance := Appearance1359;
IndexedFaceSet1361 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1361.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1361.CreaseAngle := 0.5;
IndexedFaceSet1361.Solid := False;
ColorRGBA1362 := TColorRGBANode.Create;;
ColorRGBA1362.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1361.Color := ColorRGBA1362;
Coordinate1363 := TCoordinateNode.Create;;
Coordinate1363.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1361.Coord := Coordinate1363;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1358.Geometry := IndexedFaceSet1361;
{ METHOD .FdChildren.Add }
HAnimSite1356.FdChildren.Add(Shape1358);
Billboard1364 := TBillboardNode.Create;;
Billboard1364.AxisOfRotation := Vector3(0,0,0);
Shape1365 := TShapeNode.Create;;
Text1366 := TTextNode.Create;;
Text1366.SetText(['86']);
FontStyle1367 := TFontStyleNode.Create;;
FontStyle1367.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1366.FontStyle := FontStyle1367;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1365.Geometry := Text1366;
{ METHOD .FdChildren.Add }
Billboard1364.FdChildren.Add(Shape1365);
{ METHOD .FdChildren.Add }
HAnimSite1356.FdChildren.Add(Billboard1364);
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(HAnimSite1356);
Shape1368 := TShapeNode.Create;;
LineSet1369 := TLineSetNode.Create;;
LineSet1369.SetVertexCount([2]);
ColorRGBA1370 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart130;
begin

ColorRGBA1370.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1369.Color := ColorRGBA1370;
Coordinate1371 := TCoordinateNode.Create;;
Coordinate1371.SetPoint([Vector3(0,1.3126,-0.0154),Vector3(0,1.3185,-0.0151)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1369.Coord := Coordinate1371;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1368.Geometry := LineSet1369;
{ METHOD .FdChildren.Add }
HAnimSegment1235.FdChildren.Add(Shape1368);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimSegment1235);
HAnimJoint1372 := THAnimJointNode.Create;;
HAnimJoint1372.Center := Vector3(0.0505,1.42425,0.03294);
HAnimSegment1373 := THAnimSegmentNode.Create;;
HAnimSite1374 := THAnimSiteNode.Create;;
HAnimSite1374.Translation := Vector3(0,2.64,0);
TouchSensor1375 := TTouchSensorNode.Create;;
TouchSensor1375.Description := 'HAnimSite l_eyelid_tip hanim_l_eyelid_tip';
{ METHOD .FdChildren.Add }
HAnimSite1374.FdChildren.Add(TouchSensor1375);
Shape1376 := TShapeNode.Create;;
Appearance1377 := TAppearanceNode.Create;;
Material1378 := TMaterialNode.Create;;
Material1378.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1377.Material := Material1378;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1376.Appearance := Appearance1377;
IndexedFaceSet1379 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1379.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1379.CreaseAngle := 0.5;
IndexedFaceSet1379.Solid := False;
ColorRGBA1380 := TColorRGBANode.Create;;
ColorRGBA1380.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1379.Color := ColorRGBA1380;
Coordinate1381 := TCoordinateNode.Create;
end;

procedure InitJin20fSegmentedPart131;
begin
;
Coordinate1381.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1379.Coord := Coordinate1381;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1376.Geometry := IndexedFaceSet1379;
{ METHOD .FdChildren.Add }
HAnimSite1374.FdChildren.Add(Shape1376);
Billboard1382 := TBillboardNode.Create;;
Billboard1382.AxisOfRotation := Vector3(0,0,0);
Shape1383 := TShapeNode.Create;;
Text1384 := TTextNode.Create;;
Text1384.SetText(['l_eyelid_tip']);
FontStyle1385 := TFontStyleNode.Create;;
FontStyle1385.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1384.FontStyle := FontStyle1385;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1383.Geometry := Text1384;
{ METHOD .FdChildren.Add }
Billboard1382.FdChildren.Add(Shape1383);
{ METHOD .FdChildren.Add }
HAnimSite1374.FdChildren.Add(Billboard1382);
{ METHOD .FdChildren.Add }
HAnimSegment1373.FdChildren.Add(HAnimSite1374);
Shape1386 := TShapeNode.Create;;
LineSet1387 := TLineSetNode.Create;;
LineSet1387.SetVertexCount([2]);
ColorRGBA1388 := TColorRGBANode.Create;;
ColorRGBA1388.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1387.Color := ColorRGBA1388;
Coordinate1389 := TCoordinateNode.Create;;
Coordinate1389.SetPoint([Vector3(0.0505,1.42425,0.03294),Vector3(0,1.3126,-0.0154)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1387.Coord := Coordinate1389;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1386.Geometry := LineSet1387;
{ METHOD .FdChildren.Add }
HAnimSegment1373.FdChildren.Add(Shape1386);
{ METHOD .FdChildren.Add }
HAnimJoint1372.FdChildren.Add(HAnimSegment1373);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1372);
HAnimJoint1390 := THAnimJointNode.Create;;
end;

procedure InitJin20fSegmentedPart132;
begin

HAnimJoint1390.Center := Vector3(-0.0505,1.42425,0.03294);
HAnimSegment1391 := THAnimSegmentNode.Create;;
HAnimSite1392 := THAnimSiteNode.Create;;
HAnimSite1392.Translation := Vector3(0,2.68,0);
TouchSensor1393 := TTouchSensorNode.Create;;
TouchSensor1393.Description := 'HAnimSite r_eyelid_tip hanim_r_eyelid_tip';
{ METHOD .FdChildren.Add }
HAnimSite1392.FdChildren.Add(TouchSensor1393);
Shape1394 := TShapeNode.Create;;
Appearance1395 := TAppearanceNode.Create;;
Material1396 := TMaterialNode.Create;;
Material1396.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1395.Material := Material1396;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1394.Appearance := Appearance1395;
IndexedFaceSet1397 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1397.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1397.CreaseAngle := 0.5;
IndexedFaceSet1397.Solid := False;
ColorRGBA1398 := TColorRGBANode.Create;;
ColorRGBA1398.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1397.Color := ColorRGBA1398;
Coordinate1399 := TCoordinateNode.Create;;
Coordinate1399.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1397.Coord := Coordinate1399;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1394.Geometry := IndexedFaceSet1397;
{ METHOD .FdChildren.Add }
HAnimSite1392.FdChildren.Add(Shape1394);
Billboard1400 := TBillboardNode.Create;;
Billboard1400.AxisOfRotation := Vector3(0,0,0);
Shape1401 := TShapeNode.Create;;
Text1402 := TTextNode.Create;
end;

procedure InitJin20fSegmentedPart133;
begin
;
Text1402.SetText(['r_eyelid_tip']);
FontStyle1403 := TFontStyleNode.Create;;
FontStyle1403.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1402.FontStyle := FontStyle1403;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1401.Geometry := Text1402;
{ METHOD .FdChildren.Add }
Billboard1400.FdChildren.Add(Shape1401);
{ METHOD .FdChildren.Add }
HAnimSite1392.FdChildren.Add(Billboard1400);
{ METHOD .FdChildren.Add }
HAnimSegment1391.FdChildren.Add(HAnimSite1392);
Shape1404 := TShapeNode.Create;;
LineSet1405 := TLineSetNode.Create;;
LineSet1405.SetVertexCount([2]);
ColorRGBA1406 := TColorRGBANode.Create;;
ColorRGBA1406.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1405.Color := ColorRGBA1406;
Coordinate1407 := TCoordinateNode.Create;;
Coordinate1407.SetPoint([Vector3(-0.0505,1.42425,0.03294),Vector3(0,1.3126,-0.0154)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1405.Coord := Coordinate1407;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1404.Geometry := LineSet1405;
{ METHOD .FdChildren.Add }
HAnimSegment1391.FdChildren.Add(Shape1404);
{ METHOD .FdChildren.Add }
HAnimJoint1390.FdChildren.Add(HAnimSegment1391);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1390);
HAnimJoint1408 := THAnimJointNode.Create;;
HAnimJoint1408.Center := Vector3(0.048127,1.4049,0.08305);
HAnimSegment1409 := THAnimSegmentNode.Create;;
HAnimSite1410 := THAnimSiteNode.Create;;
HAnimSite1410.Translation := Vector3(0,2.72,0);
TouchSensor1411 := TTouchSensorNode.Create;;
TouchSensor1411.Description := 'HAnimSite l_eyeball_tip hanim_l_eyeball_tip';
{ METHOD .FdChildren.Add }
HAnimSite1410.FdChildren.Add(TouchSensor1411);
Shape1412 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart134;
begin
;
Appearance1413 := TAppearanceNode.Create;;
Material1414 := TMaterialNode.Create;;
Material1414.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1413.Material := Material1414;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1412.Appearance := Appearance1413;
IndexedFaceSet1415 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1415.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1415.CreaseAngle := 0.5;
IndexedFaceSet1415.Solid := False;
ColorRGBA1416 := TColorRGBANode.Create;;
ColorRGBA1416.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1415.Color := ColorRGBA1416;
Coordinate1417 := TCoordinateNode.Create;;
Coordinate1417.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1415.Coord := Coordinate1417;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1412.Geometry := IndexedFaceSet1415;
{ METHOD .FdChildren.Add }
HAnimSite1410.FdChildren.Add(Shape1412);
Billboard1418 := TBillboardNode.Create;;
Billboard1418.AxisOfRotation := Vector3(0,0,0);
Shape1419 := TShapeNode.Create;;
Text1420 := TTextNode.Create;;
Text1420.SetText(['l_eyeball_tip']);
FontStyle1421 := TFontStyleNode.Create;;
FontStyle1421.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1420.FontStyle := FontStyle1421;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1419.Geometry := Text1420;
{ METHOD .FdChildren.Add }
Billboard1418.FdChildren.Add(Shape1419);
{ METHOD .FdChildren.Add }
HAnimSite1410.FdChildren.Add(Billboard1418);
{ METHOD .FdChildren.Add }
HAnimSegment1409.FdChildren.Add(HAnimSite1410);
Shape1422 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart135;
begin
;
LineSet1423 := TLineSetNode.Create;;
LineSet1423.SetVertexCount([2]);
ColorRGBA1424 := TColorRGBANode.Create;;
ColorRGBA1424.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1423.Color := ColorRGBA1424;
Coordinate1425 := TCoordinateNode.Create;;
Coordinate1425.SetPoint([Vector3(0.048127,1.4049,0.08305),Vector3(0,1.3126,-0.0154)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1423.Coord := Coordinate1425;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1422.Geometry := LineSet1423;
{ METHOD .FdChildren.Add }
HAnimSegment1409.FdChildren.Add(Shape1422);
{ METHOD .FdChildren.Add }
HAnimJoint1408.FdChildren.Add(HAnimSegment1409);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1408);
HAnimJoint1426 := THAnimJointNode.Create;;
HAnimJoint1426.Center := Vector3(-0.04813,1.4049,0.08305);
HAnimSegment1427 := THAnimSegmentNode.Create;;
HAnimSite1428 := THAnimSiteNode.Create;;
HAnimSite1428.Translation := Vector3(0,2.76,0);
TouchSensor1429 := TTouchSensorNode.Create;;
TouchSensor1429.Description := 'HAnimSite r_eyeball_tip hanim_r_eyeball_tip';
{ METHOD .FdChildren.Add }
HAnimSite1428.FdChildren.Add(TouchSensor1429);
Shape1430 := TShapeNode.Create;;
Appearance1431 := TAppearanceNode.Create;;
Material1432 := TMaterialNode.Create;;
Material1432.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1431.Material := Material1432;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1430.Appearance := Appearance1431;
IndexedFaceSet1433 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1433.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
end;

procedure InitJin20fSegmentedPart136;
begin

IndexedFaceSet1433.CreaseAngle := 0.5;
IndexedFaceSet1433.Solid := False;
ColorRGBA1434 := TColorRGBANode.Create;;
ColorRGBA1434.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1433.Color := ColorRGBA1434;
Coordinate1435 := TCoordinateNode.Create;;
Coordinate1435.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1433.Coord := Coordinate1435;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1430.Geometry := IndexedFaceSet1433;
{ METHOD .FdChildren.Add }
HAnimSite1428.FdChildren.Add(Shape1430);
Billboard1436 := TBillboardNode.Create;;
Billboard1436.AxisOfRotation := Vector3(0,0,0);
Shape1437 := TShapeNode.Create;;
Text1438 := TTextNode.Create;;
Text1438.SetText(['r_eyeball_tip']);
FontStyle1439 := TFontStyleNode.Create;;
FontStyle1439.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1438.FontStyle := FontStyle1439;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1437.Geometry := Text1438;
{ METHOD .FdChildren.Add }
Billboard1436.FdChildren.Add(Shape1437);
{ METHOD .FdChildren.Add }
HAnimSite1428.FdChildren.Add(Billboard1436);
{ METHOD .FdChildren.Add }
HAnimSegment1427.FdChildren.Add(HAnimSite1428);
Shape1440 := TShapeNode.Create;;
LineSet1441 := TLineSetNode.Create;;
LineSet1441.SetVertexCount([2]);
ColorRGBA1442 := TColorRGBANode.Create;;
ColorRGBA1442.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1441.Color := ColorRGBA1442;
Coordinate1443 := TCoordinateNode.Create;;
Coordinate1443.SetPoint([Vector3(-0.04813,1.4049,0.08305),Vector3(0,1.3126,-0.0154)]);
end;

procedure InitJin20fSegmentedPart137;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1441.Coord := Coordinate1443;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1440.Geometry := LineSet1441;
{ METHOD .FdChildren.Add }
HAnimSegment1427.FdChildren.Add(Shape1440);
{ METHOD .FdChildren.Add }
HAnimJoint1426.FdChildren.Add(HAnimSegment1427);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1426);
HAnimJoint1444 := THAnimJointNode.Create;;
HAnimJoint1444.Center := Vector3(0.02175,1.4139,0.1069);
HAnimSegment1445 := THAnimSegmentNode.Create;;
HAnimSite1446 := THAnimSiteNode.Create;;
HAnimSite1446.Translation := Vector3(0,2.8,0);
TouchSensor1447 := TTouchSensorNode.Create;;
TouchSensor1447.Description := 'HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip';
{ METHOD .FdChildren.Add }
HAnimSite1446.FdChildren.Add(TouchSensor1447);
Shape1448 := TShapeNode.Create;;
Appearance1449 := TAppearanceNode.Create;;
Material1450 := TMaterialNode.Create;;
Material1450.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1449.Material := Material1450;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1448.Appearance := Appearance1449;
IndexedFaceSet1451 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1451.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1451.CreaseAngle := 0.5;
IndexedFaceSet1451.Solid := False;
ColorRGBA1452 := TColorRGBANode.Create;;
ColorRGBA1452.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1451.Color := ColorRGBA1452;
Coordinate1453 := TCoordinateNode.Create;;
Coordinate1453.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1451.Coord := Coordinate1453;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1448.Geometry := IndexedFaceSet1451;
end;

procedure InitJin20fSegmentedPart138;
begin

{ METHOD .FdChildren.Add }
HAnimSite1446.FdChildren.Add(Shape1448);
Billboard1454 := TBillboardNode.Create;;
Billboard1454.AxisOfRotation := Vector3(0,0,0);
Shape1455 := TShapeNode.Create;;
Text1456 := TTextNode.Create;;
Text1456.SetText(['l_eyebrow_tip']);
FontStyle1457 := TFontStyleNode.Create;;
FontStyle1457.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1456.FontStyle := FontStyle1457;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1455.Geometry := Text1456;
{ METHOD .FdChildren.Add }
Billboard1454.FdChildren.Add(Shape1455);
{ METHOD .FdChildren.Add }
HAnimSite1446.FdChildren.Add(Billboard1454);
{ METHOD .FdChildren.Add }
HAnimSegment1445.FdChildren.Add(HAnimSite1446);
Shape1458 := TShapeNode.Create;;
LineSet1459 := TLineSetNode.Create;;
LineSet1459.SetVertexCount([2]);
ColorRGBA1460 := TColorRGBANode.Create;;
ColorRGBA1460.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1459.Color := ColorRGBA1460;
Coordinate1461 := TCoordinateNode.Create;;
Coordinate1461.SetPoint([Vector3(0.02175,1.4139,0.1069),Vector3(0,1.3126,-0.0154)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1459.Coord := Coordinate1461;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1458.Geometry := LineSet1459;
{ METHOD .FdChildren.Add }
HAnimSegment1445.FdChildren.Add(Shape1458);
{ METHOD .FdChildren.Add }
HAnimJoint1444.FdChildren.Add(HAnimSegment1445);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1444);
HAnimJoint1462 := THAnimJointNode.Create;;
HAnimJoint1462.Center := Vector3(-0.02175,1.4139,0.10694);
HAnimSegment1463 := THAnimSegmentNode.Create;;
HAnimSite1464 := THAnimSiteNode.Create;
end;

procedure InitJin20fSegmentedPart139;
begin
;
HAnimSite1464.Translation := Vector3(0,2.84,0);
TouchSensor1465 := TTouchSensorNode.Create;;
TouchSensor1465.Description := 'HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip';
{ METHOD .FdChildren.Add }
HAnimSite1464.FdChildren.Add(TouchSensor1465);
Shape1466 := TShapeNode.Create;;
Appearance1467 := TAppearanceNode.Create;;
Material1468 := TMaterialNode.Create;;
Material1468.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1467.Material := Material1468;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1466.Appearance := Appearance1467;
IndexedFaceSet1469 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1469.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1469.CreaseAngle := 0.5;
IndexedFaceSet1469.Solid := False;
ColorRGBA1470 := TColorRGBANode.Create;;
ColorRGBA1470.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1469.Color := ColorRGBA1470;
Coordinate1471 := TCoordinateNode.Create;;
Coordinate1471.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1469.Coord := Coordinate1471;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1466.Geometry := IndexedFaceSet1469;
{ METHOD .FdChildren.Add }
HAnimSite1464.FdChildren.Add(Shape1466);
Billboard1472 := TBillboardNode.Create;;
Billboard1472.AxisOfRotation := Vector3(0,0,0);
Shape1473 := TShapeNode.Create;;
Text1474 := TTextNode.Create;;
Text1474.SetText(['r_eyebrow_tip']);
FontStyle1475 := TFontStyleNode.Create;;
end;

procedure InitJin20fSegmentedPart140;
begin

FontStyle1475.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1474.FontStyle := FontStyle1475;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1473.Geometry := Text1474;
{ METHOD .FdChildren.Add }
Billboard1472.FdChildren.Add(Shape1473);
{ METHOD .FdChildren.Add }
HAnimSite1464.FdChildren.Add(Billboard1472);
{ METHOD .FdChildren.Add }
HAnimSegment1463.FdChildren.Add(HAnimSite1464);
Shape1476 := TShapeNode.Create;;
LineSet1477 := TLineSetNode.Create;;
LineSet1477.SetVertexCount([2]);
ColorRGBA1478 := TColorRGBANode.Create;;
ColorRGBA1478.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1477.Color := ColorRGBA1478;
Coordinate1479 := TCoordinateNode.Create;;
Coordinate1479.SetPoint([Vector3(-0.02175,1.4139,0.10694),Vector3(0,1.3126,-0.0154)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1477.Coord := Coordinate1479;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1476.Geometry := LineSet1477;
{ METHOD .FdChildren.Add }
HAnimSegment1463.FdChildren.Add(Shape1476);
{ METHOD .FdChildren.Add }
HAnimJoint1462.FdChildren.Add(HAnimSegment1463);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1462);
HAnimJoint1480 := THAnimJointNode.Create;;
HAnimJoint1480.Center := Vector3(0,1.3128,0.01538);
HAnimSegment1481 := THAnimSegmentNode.Create;;
HAnimSite1482 := THAnimSiteNode.Create;;
HAnimSite1482.Translation := Vector3(0.068,1.346,0.033);
TouchSensor1483 := TTouchSensorNode.Create;;
TouchSensor1483.Description := 'HAnimSite 5 hanim_l_gonion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1482.FdChildren.Add(TouchSensor1483);
Shape1484 := TShapeNode.Create;;
Appearance1485 := TAppearanceNode.Create;;
Material1486 := TMaterialNode.Create;
end;

procedure InitJin20fSegmentedPart141;
begin
;
Material1486.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1485.Material := Material1486;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1484.Appearance := Appearance1485;
IndexedFaceSet1487 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1487.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1487.CreaseAngle := 0.5;
IndexedFaceSet1487.Solid := False;
ColorRGBA1488 := TColorRGBANode.Create;;
ColorRGBA1488.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1487.Color := ColorRGBA1488;
Coordinate1489 := TCoordinateNode.Create;;
Coordinate1489.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1487.Coord := Coordinate1489;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1484.Geometry := IndexedFaceSet1487;
{ METHOD .FdChildren.Add }
HAnimSite1482.FdChildren.Add(Shape1484);
Billboard1490 := TBillboardNode.Create;;
Billboard1490.AxisOfRotation := Vector3(0,0,0);
Shape1491 := TShapeNode.Create;;
Text1492 := TTextNode.Create;;
Text1492.SetText(['5']);
FontStyle1493 := TFontStyleNode.Create;;
FontStyle1493.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1492.FontStyle := FontStyle1493;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1491.Geometry := Text1492;
{ METHOD .FdChildren.Add }
Billboard1490.FdChildren.Add(Shape1491);
{ METHOD .FdChildren.Add }
HAnimSite1482.FdChildren.Add(Billboard1490);
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(HAnimSite1482);
HAnimSite1494 := THAnimSiteNode.Create;;
HAnimSite1494.Translation := Vector3(-0.068,1.346,0.033);
TouchSensor1495 := TTouchSensorNode.Create;;
end;

procedure InitJin20fSegmentedPart142;
begin

TouchSensor1495.Description := 'HAnimSite 8 hanim_r_gonion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1494.FdChildren.Add(TouchSensor1495);
Shape1496 := TShapeNode.Create;;
Appearance1497 := TAppearanceNode.Create;;
Material1498 := TMaterialNode.Create;;
Material1498.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1497.Material := Material1498;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1496.Appearance := Appearance1497;
IndexedFaceSet1499 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1499.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1499.CreaseAngle := 0.5;
IndexedFaceSet1499.Solid := False;
ColorRGBA1500 := TColorRGBANode.Create;;
ColorRGBA1500.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1499.Color := ColorRGBA1500;
Coordinate1501 := TCoordinateNode.Create;;
Coordinate1501.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1499.Coord := Coordinate1501;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1496.Geometry := IndexedFaceSet1499;
{ METHOD .FdChildren.Add }
HAnimSite1494.FdChildren.Add(Shape1496);
Billboard1502 := TBillboardNode.Create;;
Billboard1502.AxisOfRotation := Vector3(0,0,0);
Shape1503 := TShapeNode.Create;;
Text1504 := TTextNode.Create;;
Text1504.SetText(['8']);
FontStyle1505 := TFontStyleNode.Create;;
FontStyle1505.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1504.FontStyle := FontStyle1505;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1503.Geometry := Text1504;
{ METHOD .FdChildren.Add }
Billboard1502.FdChildren.Add(Shape1503);
end;

procedure InitJin20fSegmentedPart143;
begin

{ METHOD .FdChildren.Add }
HAnimSite1494.FdChildren.Add(Billboard1502);
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(HAnimSite1494);
HAnimSite1506 := THAnimSiteNode.Create;;
HAnimSite1506.Translation := Vector3(0,1.32,0.086);
TouchSensor1507 := TTouchSensorNode.Create;;
TouchSensor1507.Description := 'HAnimSite 9 hanim_supramenton_pt';
{ METHOD .FdChildren.Add }
HAnimSite1506.FdChildren.Add(TouchSensor1507);
Shape1508 := TShapeNode.Create;;
Appearance1509 := TAppearanceNode.Create;;
Material1510 := TMaterialNode.Create;;
Material1510.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1509.Material := Material1510;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1508.Appearance := Appearance1509;
IndexedFaceSet1511 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1511.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1511.CreaseAngle := 0.5;
IndexedFaceSet1511.Solid := False;
ColorRGBA1512 := TColorRGBANode.Create;;
ColorRGBA1512.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1511.Color := ColorRGBA1512;
Coordinate1513 := TCoordinateNode.Create;;
Coordinate1513.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1511.Coord := Coordinate1513;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1508.Geometry := IndexedFaceSet1511;
{ METHOD .FdChildren.Add }
HAnimSite1506.FdChildren.Add(Shape1508);
Billboard1514 := TBillboardNode.Create;;
Billboard1514.AxisOfRotation := Vector3(0,0,0);
Shape1515 := TShapeNode.Create;;
Text1516 := TTextNode.Create;;
end;

procedure InitJin20fSegmentedPart144;
begin

Text1516.SetText(['9']);
FontStyle1517 := TFontStyleNode.Create;;
FontStyle1517.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1516.FontStyle := FontStyle1517;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1515.Geometry := Text1516;
{ METHOD .FdChildren.Add }
Billboard1514.FdChildren.Add(Shape1515);
{ METHOD .FdChildren.Add }
HAnimSite1506.FdChildren.Add(Billboard1514);
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(HAnimSite1506);
HAnimSite1518 := THAnimSiteNode.Create;;
HAnimSite1518.Translation := Vector3(0,1.3,0.08);
TouchSensor1519 := TTouchSensorNode.Create;;
TouchSensor1519.Description := 'HAnimSite 87 hanim_menton_pt';
{ METHOD .FdChildren.Add }
HAnimSite1518.FdChildren.Add(TouchSensor1519);
Shape1520 := TShapeNode.Create;;
Appearance1521 := TAppearanceNode.Create;;
Material1522 := TMaterialNode.Create;;
Material1522.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1521.Material := Material1522;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1520.Appearance := Appearance1521;
IndexedFaceSet1523 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1523.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1523.CreaseAngle := 0.5;
IndexedFaceSet1523.Solid := False;
ColorRGBA1524 := TColorRGBANode.Create;;
ColorRGBA1524.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1523.Color := ColorRGBA1524;
Coordinate1525 := TCoordinateNode.Create;;
Coordinate1525.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1523.Coord := Coordinate1525;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1520.Geometry := IndexedFaceSet1523;
{ METHOD .FdChildren.Add }
HAnimSite1518.FdChildren.Add(Shape1520);
end;

procedure InitJin20fSegmentedPart145;
begin

Billboard1526 := TBillboardNode.Create;;
Billboard1526.AxisOfRotation := Vector3(0,0,0);
Shape1527 := TShapeNode.Create;;
Text1528 := TTextNode.Create;;
Text1528.SetText(['87']);
FontStyle1529 := TFontStyleNode.Create;;
FontStyle1529.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1528.FontStyle := FontStyle1529;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1527.Geometry := Text1528;
{ METHOD .FdChildren.Add }
Billboard1526.FdChildren.Add(Shape1527);
{ METHOD .FdChildren.Add }
HAnimSite1518.FdChildren.Add(Billboard1526);
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(HAnimSite1518);
Shape1530 := TShapeNode.Create;;
LineSet1531 := TLineSetNode.Create;;
LineSet1531.SetVertexCount([2]);
ColorRGBA1532 := TColorRGBANode.Create;;
ColorRGBA1532.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1531.Color := ColorRGBA1532;
Coordinate1533 := TCoordinateNode.Create;;
Coordinate1533.SetPoint([Vector3(0,1.3128,0.01538),Vector3(0,1.3126,-0.0154)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1531.Coord := Coordinate1533;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1530.Geometry := LineSet1531;
{ METHOD .FdChildren.Add }
HAnimSegment1481.FdChildren.Add(Shape1530);
{ METHOD .FdChildren.Add }
HAnimJoint1480.FdChildren.Add(HAnimSegment1481);
{ METHOD .FdChildren.Add }
HAnimJoint1234.FdChildren.Add(HAnimJoint1480);
{ METHOD .FdChildren.Add }
HAnimJoint1228.FdChildren.Add(HAnimJoint1234);
{ METHOD .FdChildren.Add }
HAnimJoint1210.FdChildren.Add(HAnimJoint1228);
{ METHOD .FdChildren.Add }
HAnimJoint1204.FdChildren.Add(HAnimJoint1210);
{ METHOD .FdChildren.Add }
HAnimJoint1198.FdChildren.Add(HAnimJoint1204);
{ METHOD .FdChildren.Add }
HAnimJoint1192.FdChildren.Add(HAnimJoint1198);
{ METHOD .FdChildren.Add }
HAnimJoint1186.FdChildren.Add(HAnimJoint1192);
{ METHOD .FdChildren.Add }
HAnimJoint1156.FdChildren.Add(HAnimJoint1186);
end;

procedure InitJin20fSegmentedPart146;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1126.FdChildren.Add(HAnimJoint1156);
HAnimJoint1534 := THAnimJointNode.Create;;
HAnimJoint1534.Center := Vector3(0.03847,1.2087,-0.01378);
HAnimSegment1535 := THAnimSegmentNode.Create;;
HAnimSite1536 := THAnimSiteNode.Create;;
HAnimSite1536.Translation := Vector3(0.03,1.2,0.04);
TouchSensor1537 := TTouchSensorNode.Create;;
TouchSensor1537.Description := 'HAnimSite l_clavicale hanim_l_clavicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1536.FdChildren.Add(TouchSensor1537);
Shape1538 := TShapeNode.Create;;
Appearance1539 := TAppearanceNode.Create;;
Material1540 := TMaterialNode.Create;;
Material1540.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1539.Material := Material1540;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1538.Appearance := Appearance1539;
IndexedFaceSet1541 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1541.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1541.CreaseAngle := 0.5;
IndexedFaceSet1541.Solid := False;
ColorRGBA1542 := TColorRGBANode.Create;;
ColorRGBA1542.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1541.Color := ColorRGBA1542;
Coordinate1543 := TCoordinateNode.Create;;
Coordinate1543.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1541.Coord := Coordinate1543;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1538.Geometry := IndexedFaceSet1541;
{ METHOD .FdChildren.Add }
HAnimSite1536.FdChildren.Add(Shape1538);
Billboard1544 := TBillboardNode.Create;;
Billboard1544.AxisOfRotation := Vector3(0,0,0);
end;

procedure InitJin20fSegmentedPart147;
begin

Shape1545 := TShapeNode.Create;;
Text1546 := TTextNode.Create;;
Text1546.SetText(['l_clavicale']);
FontStyle1547 := TFontStyleNode.Create;;
FontStyle1547.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1546.FontStyle := FontStyle1547;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1545.Geometry := Text1546;
{ METHOD .FdChildren.Add }
Billboard1544.FdChildren.Add(Shape1545);
{ METHOD .FdChildren.Add }
HAnimSite1536.FdChildren.Add(Billboard1544);
{ METHOD .FdChildren.Add }
HAnimSegment1535.FdChildren.Add(HAnimSite1536);
Shape1548 := TShapeNode.Create;;
LineSet1549 := TLineSetNode.Create;;
LineSet1549.SetVertexCount([2]);
ColorRGBA1550 := TColorRGBANode.Create;;
ColorRGBA1550.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1549.Color := ColorRGBA1550;
Coordinate1551 := TCoordinateNode.Create;;
Coordinate1551.SetPoint([Vector3(0.03847,1.2087,-0.01378),Vector3(0,1.22,-0.0138)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1549.Coord := Coordinate1551;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1548.Geometry := LineSet1549;
{ METHOD .FdChildren.Add }
HAnimSegment1535.FdChildren.Add(Shape1548);
{ METHOD .FdChildren.Add }
HAnimJoint1534.FdChildren.Add(HAnimSegment1535);
HAnimJoint1552 := THAnimJointNode.Create;;
HAnimJoint1552.Center := Vector3(0.12294,1.191825,-0.0129);
HAnimSegment1553 := THAnimSegmentNode.Create;;
HAnimSite1554 := THAnimSiteNode.Create;;
HAnimSite1554.Translation := Vector3(0.15,1.222,-0.02);
TouchSensor1555 := TTouchSensorNode.Create;;
TouchSensor1555.Description := 'HAnimSite 15 hanim_l_acromion_pt';
end;

procedure InitJin20fSegmentedPart148;
begin

{ METHOD .FdChildren.Add }
HAnimSite1554.FdChildren.Add(TouchSensor1555);
Shape1556 := TShapeNode.Create;;
Appearance1557 := TAppearanceNode.Create;;
Material1558 := TMaterialNode.Create;;
Material1558.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1557.Material := Material1558;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1556.Appearance := Appearance1557;
IndexedFaceSet1559 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1559.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1559.CreaseAngle := 0.5;
IndexedFaceSet1559.Solid := False;
ColorRGBA1560 := TColorRGBANode.Create;;
ColorRGBA1560.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1559.Color := ColorRGBA1560;
Coordinate1561 := TCoordinateNode.Create;;
Coordinate1561.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1559.Coord := Coordinate1561;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1556.Geometry := IndexedFaceSet1559;
{ METHOD .FdChildren.Add }
HAnimSite1554.FdChildren.Add(Shape1556);
Billboard1562 := TBillboardNode.Create;;
Billboard1562.AxisOfRotation := Vector3(0,0,0);
Shape1563 := TShapeNode.Create;;
Text1564 := TTextNode.Create;;
Text1564.SetText(['15']);
FontStyle1565 := TFontStyleNode.Create;;
FontStyle1565.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1564.FontStyle := FontStyle1565;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1563.Geometry := Text1564;
{ METHOD .FdChildren.Add }
Billboard1562.FdChildren.Add(Shape1563);
{ METHOD .FdChildren.Add }
HAnimSite1554.FdChildren.Add(Billboard1562);
end;

procedure InitJin20fSegmentedPart149;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1553.FdChildren.Add(HAnimSite1554);
HAnimSite1566 := THAnimSiteNode.Create;;
HAnimSite1566.Translation := Vector3(0.15,1.16,0.04);
TouchSensor1567 := TTouchSensorNode.Create;;
TouchSensor1567.Description := 'HAnimSite 16 hanim_l_axilla_proximal_pt';
{ METHOD .FdChildren.Add }
HAnimSite1566.FdChildren.Add(TouchSensor1567);
Shape1568 := TShapeNode.Create;;
Appearance1569 := TAppearanceNode.Create;;
Material1570 := TMaterialNode.Create;;
Material1570.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1569.Material := Material1570;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1568.Appearance := Appearance1569;
IndexedFaceSet1571 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1571.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1571.CreaseAngle := 0.5;
IndexedFaceSet1571.Solid := False;
ColorRGBA1572 := TColorRGBANode.Create;;
ColorRGBA1572.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1571.Color := ColorRGBA1572;
Coordinate1573 := TCoordinateNode.Create;;
Coordinate1573.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1571.Coord := Coordinate1573;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1568.Geometry := IndexedFaceSet1571;
{ METHOD .FdChildren.Add }
HAnimSite1566.FdChildren.Add(Shape1568);
Billboard1574 := TBillboardNode.Create;;
Billboard1574.AxisOfRotation := Vector3(0,0,0);
Shape1575 := TShapeNode.Create;;
Text1576 := TTextNode.Create;;
Text1576.SetText(['16']);
end;

procedure InitJin20fSegmentedPart150;
begin

FontStyle1577 := TFontStyleNode.Create;;
FontStyle1577.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1576.FontStyle := FontStyle1577;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1575.Geometry := Text1576;
{ METHOD .FdChildren.Add }
Billboard1574.FdChildren.Add(Shape1575);
{ METHOD .FdChildren.Add }
HAnimSite1566.FdChildren.Add(Billboard1574);
{ METHOD .FdChildren.Add }
HAnimSegment1553.FdChildren.Add(HAnimSite1566);
HAnimSite1578 := THAnimSiteNode.Create;;
HAnimSite1578.Translation := Vector3(0.17,1.14,0);
TouchSensor1579 := TTouchSensorNode.Create;;
TouchSensor1579.Description := 'HAnimSite 17 hanim_l_axilla_distal_pt';
{ METHOD .FdChildren.Add }
HAnimSite1578.FdChildren.Add(TouchSensor1579);
Shape1580 := TShapeNode.Create;;
Appearance1581 := TAppearanceNode.Create;;
Material1582 := TMaterialNode.Create;;
Material1582.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1581.Material := Material1582;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1580.Appearance := Appearance1581;
IndexedFaceSet1583 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1583.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1583.CreaseAngle := 0.5;
IndexedFaceSet1583.Solid := False;
ColorRGBA1584 := TColorRGBANode.Create;;
ColorRGBA1584.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1583.Color := ColorRGBA1584;
Coordinate1585 := TCoordinateNode.Create;;
Coordinate1585.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1583.Coord := Coordinate1585;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1580.Geometry := IndexedFaceSet1583;
{ METHOD .FdChildren.Add }
HAnimSite1578.FdChildren.Add(Shape1580);
Billboard1586 := TBillboardNode.Create;
end;

procedure InitJin20fSegmentedPart151;
begin
;
Billboard1586.AxisOfRotation := Vector3(0,0,0);
Shape1587 := TShapeNode.Create;;
Text1588 := TTextNode.Create;;
Text1588.SetText(['17']);
FontStyle1589 := TFontStyleNode.Create;;
FontStyle1589.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1588.FontStyle := FontStyle1589;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1587.Geometry := Text1588;
{ METHOD .FdChildren.Add }
Billboard1586.FdChildren.Add(Shape1587);
{ METHOD .FdChildren.Add }
HAnimSite1578.FdChildren.Add(Billboard1586);
{ METHOD .FdChildren.Add }
HAnimSegment1553.FdChildren.Add(HAnimSite1578);
HAnimSite1590 := THAnimSiteNode.Create;;
HAnimSite1590.Translation := Vector3(0.15,1.145,-0.04);
TouchSensor1591 := TTouchSensorNode.Create;;
TouchSensor1591.Description := 'HAnimSite 18 hanim_l_axilla_posterior_folds_pt';
{ METHOD .FdChildren.Add }
HAnimSite1590.FdChildren.Add(TouchSensor1591);
Shape1592 := TShapeNode.Create;;
Appearance1593 := TAppearanceNode.Create;;
Material1594 := TMaterialNode.Create;;
Material1594.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1593.Material := Material1594;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1592.Appearance := Appearance1593;
IndexedFaceSet1595 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1595.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1595.CreaseAngle := 0.5;
IndexedFaceSet1595.Solid := False;
ColorRGBA1596 := TColorRGBANode.Create;;
ColorRGBA1596.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1595.Color := ColorRGBA1596;
end;

procedure InitJin20fSegmentedPart152;
begin

Coordinate1597 := TCoordinateNode.Create;;
Coordinate1597.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1595.Coord := Coordinate1597;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1592.Geometry := IndexedFaceSet1595;
{ METHOD .FdChildren.Add }
HAnimSite1590.FdChildren.Add(Shape1592);
Billboard1598 := TBillboardNode.Create;;
Billboard1598.AxisOfRotation := Vector3(0,0,0);
Shape1599 := TShapeNode.Create;;
Text1600 := TTextNode.Create;;
Text1600.SetText(['18']);
FontStyle1601 := TFontStyleNode.Create;;
FontStyle1601.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1600.FontStyle := FontStyle1601;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1599.Geometry := Text1600;
{ METHOD .FdChildren.Add }
Billboard1598.FdChildren.Add(Shape1599);
{ METHOD .FdChildren.Add }
HAnimSite1590.FdChildren.Add(Billboard1598);
{ METHOD .FdChildren.Add }
HAnimSegment1553.FdChildren.Add(HAnimSite1590);
Shape1602 := TShapeNode.Create;;
LineSet1603 := TLineSetNode.Create;;
LineSet1603.SetVertexCount([2]);
ColorRGBA1604 := TColorRGBANode.Create;;
ColorRGBA1604.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1603.Color := ColorRGBA1604;
Coordinate1605 := TCoordinateNode.Create;;
Coordinate1605.SetPoint([Vector3(0.12294,1.191825,-0.0129),Vector3(0.03847,1.2087,-0.01378)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1603.Coord := Coordinate1605;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1602.Geometry := LineSet1603;
{ METHOD .FdChildren.Add }
HAnimSegment1553.FdChildren.Add(Shape1602);
{ METHOD .FdChildren.Add }
HAnimJoint1552.FdChildren.Add(HAnimSegment1553);
HAnimJoint1606 := THAnimJointNode.Create;;
end;

procedure InitJin20fSegmentedPart153;
begin

HAnimJoint1606.Center := Vector3(0.16506,1.17855,-0.00327);
HAnimSegment1607 := THAnimSegmentNode.Create;;
HAnimSite1608 := THAnimSiteNode.Create;;
HAnimSite1608.Translation := Vector3(0.2,0.95,-0.03);
TouchSensor1609 := TTouchSensorNode.Create;;
TouchSensor1609.Description := 'HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite1608.FdChildren.Add(TouchSensor1609);
Shape1610 := TShapeNode.Create;;
Appearance1611 := TAppearanceNode.Create;;
Material1612 := TMaterialNode.Create;;
Material1612.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1611.Material := Material1612;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1610.Appearance := Appearance1611;
IndexedFaceSet1613 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1613.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1613.CreaseAngle := 0.5;
IndexedFaceSet1613.Solid := False;
ColorRGBA1614 := TColorRGBANode.Create;;
ColorRGBA1614.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1613.Color := ColorRGBA1614;
Coordinate1615 := TCoordinateNode.Create;;
Coordinate1615.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1613.Coord := Coordinate1615;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1610.Geometry := IndexedFaceSet1613;
{ METHOD .FdChildren.Add }
HAnimSite1608.FdChildren.Add(Shape1610);
Billboard1616 := TBillboardNode.Create;;
Billboard1616.AxisOfRotation := Vector3(0,0,0);
Shape1617 := TShapeNode.Create;;
Text1618 := TTextNode.Create;
end;

procedure InitJin20fSegmentedPart154;
begin
;
Text1618.SetText(['63']);
FontStyle1619 := TFontStyleNode.Create;;
FontStyle1619.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1618.FontStyle := FontStyle1619;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1617.Geometry := Text1618;
{ METHOD .FdChildren.Add }
Billboard1616.FdChildren.Add(Shape1617);
{ METHOD .FdChildren.Add }
HAnimSite1608.FdChildren.Add(Billboard1616);
{ METHOD .FdChildren.Add }
HAnimSegment1607.FdChildren.Add(HAnimSite1608);
HAnimSite1620 := THAnimSiteNode.Create;;
HAnimSite1620.Translation := Vector3(0.18,0.93,-0.03);
TouchSensor1621 := TTouchSensorNode.Create;;
TouchSensor1621.Description := 'HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite1620.FdChildren.Add(TouchSensor1621);
Shape1622 := TShapeNode.Create;;
Appearance1623 := TAppearanceNode.Create;;
Material1624 := TMaterialNode.Create;;
Material1624.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1623.Material := Material1624;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1622.Appearance := Appearance1623;
IndexedFaceSet1625 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1625.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1625.CreaseAngle := 0.5;
IndexedFaceSet1625.Solid := False;
ColorRGBA1626 := TColorRGBANode.Create;;
ColorRGBA1626.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1625.Color := ColorRGBA1626;
Coordinate1627 := TCoordinateNode.Create;;
Coordinate1627.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1625.Coord := Coordinate1627;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1622.Geometry := IndexedFaceSet1625;
end;

procedure InitJin20fSegmentedPart155;
begin

{ METHOD .FdChildren.Add }
HAnimSite1620.FdChildren.Add(Shape1622);
Billboard1628 := TBillboardNode.Create;;
Billboard1628.AxisOfRotation := Vector3(0,0,0);
Shape1629 := TShapeNode.Create;;
Text1630 := TTextNode.Create;;
Text1630.SetText(['64']);
FontStyle1631 := TFontStyleNode.Create;;
FontStyle1631.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1630.FontStyle := FontStyle1631;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1629.Geometry := Text1630;
{ METHOD .FdChildren.Add }
Billboard1628.FdChildren.Add(Shape1629);
{ METHOD .FdChildren.Add }
HAnimSite1620.FdChildren.Add(Billboard1628);
{ METHOD .FdChildren.Add }
HAnimSegment1607.FdChildren.Add(HAnimSite1620);
HAnimSite1632 := THAnimSiteNode.Create;;
HAnimSite1632.Translation := Vector3(0.2,0.91,-0.03);
TouchSensor1633 := TTouchSensorNode.Create;;
TouchSensor1633.Description := 'HAnimSite 69 hanim_l_radiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1632.FdChildren.Add(TouchSensor1633);
Shape1634 := TShapeNode.Create;;
Appearance1635 := TAppearanceNode.Create;;
Material1636 := TMaterialNode.Create;;
Material1636.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1635.Material := Material1636;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1634.Appearance := Appearance1635;
IndexedFaceSet1637 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1637.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1637.CreaseAngle := 0.5;
IndexedFaceSet1637.Solid := False;
ColorRGBA1638 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart156;
begin

ColorRGBA1638.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1637.Color := ColorRGBA1638;
Coordinate1639 := TCoordinateNode.Create;;
Coordinate1639.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1637.Coord := Coordinate1639;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1634.Geometry := IndexedFaceSet1637;
{ METHOD .FdChildren.Add }
HAnimSite1632.FdChildren.Add(Shape1634);
Billboard1640 := TBillboardNode.Create;;
Billboard1640.AxisOfRotation := Vector3(0,0,0);
Shape1641 := TShapeNode.Create;;
Text1642 := TTextNode.Create;;
Text1642.SetText(['69']);
FontStyle1643 := TFontStyleNode.Create;;
FontStyle1643.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1642.FontStyle := FontStyle1643;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1641.Geometry := Text1642;
{ METHOD .FdChildren.Add }
Billboard1640.FdChildren.Add(Shape1641);
{ METHOD .FdChildren.Add }
HAnimSite1632.FdChildren.Add(Billboard1640);
{ METHOD .FdChildren.Add }
HAnimSegment1607.FdChildren.Add(HAnimSite1632);
HAnimSite1644 := THAnimSiteNode.Create;;
HAnimSite1644.Translation := Vector3(0.225,1.185,0);
TouchSensor1645 := TTouchSensorNode.Create;;
TouchSensor1645.Description := 'HAnimSite 96 hanim_l_bideltoid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1644.FdChildren.Add(TouchSensor1645);
Shape1646 := TShapeNode.Create;;
Appearance1647 := TAppearanceNode.Create;;
Material1648 := TMaterialNode.Create;;
Material1648.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1647.Material := Material1648;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1646.Appearance := Appearance1647;
end;

procedure InitJin20fSegmentedPart157;
begin

IndexedFaceSet1649 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1649.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1649.CreaseAngle := 0.5;
IndexedFaceSet1649.Solid := False;
ColorRGBA1650 := TColorRGBANode.Create;;
ColorRGBA1650.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1649.Color := ColorRGBA1650;
Coordinate1651 := TCoordinateNode.Create;;
Coordinate1651.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1649.Coord := Coordinate1651;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1646.Geometry := IndexedFaceSet1649;
{ METHOD .FdChildren.Add }
HAnimSite1644.FdChildren.Add(Shape1646);
Billboard1652 := TBillboardNode.Create;;
Billboard1652.AxisOfRotation := Vector3(0,0,0);
Shape1653 := TShapeNode.Create;;
Text1654 := TTextNode.Create;;
Text1654.SetText(['96']);
FontStyle1655 := TFontStyleNode.Create;;
FontStyle1655.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1654.FontStyle := FontStyle1655;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1653.Geometry := Text1654;
{ METHOD .FdChildren.Add }
Billboard1652.FdChildren.Add(Shape1653);
{ METHOD .FdChildren.Add }
HAnimSite1644.FdChildren.Add(Billboard1652);
{ METHOD .FdChildren.Add }
HAnimSegment1607.FdChildren.Add(HAnimSite1644);
Shape1656 := TShapeNode.Create;;
LineSet1657 := TLineSetNode.Create;;
LineSet1657.SetVertexCount([2]);
ColorRGBA1658 := TColorRGBANode.Create;;
ColorRGBA1658.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1657.Color := ColorRGBA1658;
end;

procedure InitJin20fSegmentedPart158;
begin

Coordinate1659 := TCoordinateNode.Create;;
Coordinate1659.SetPoint([Vector3(0.16506,1.17855,-0.00327),Vector3(0.12294,1.191825,-0.0129)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1657.Coord := Coordinate1659;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1656.Geometry := LineSet1657;
{ METHOD .FdChildren.Add }
HAnimSegment1607.FdChildren.Add(Shape1656);
{ METHOD .FdChildren.Add }
HAnimJoint1606.FdChildren.Add(HAnimSegment1607);
HAnimJoint1660 := THAnimJointNode.Create;;
HAnimJoint1660.Center := Vector3(0.18209,0.9288,-0.00563);
HAnimSegment1661 := THAnimSegmentNode.Create;;
HAnimSite1662 := THAnimSiteNode.Create;;
HAnimSite1662.Translation := Vector3(0.18,0.725,0.025);
TouchSensor1663 := TTouchSensorNode.Create;;
TouchSensor1663.Description := 'HAnimSite 71 hanim_l_radial_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1662.FdChildren.Add(TouchSensor1663);
Shape1664 := TShapeNode.Create;;
Appearance1665 := TAppearanceNode.Create;;
Material1666 := TMaterialNode.Create;;
Material1666.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1665.Material := Material1666;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1664.Appearance := Appearance1665;
IndexedFaceSet1667 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1667.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1667.CreaseAngle := 0.5;
IndexedFaceSet1667.Solid := False;
ColorRGBA1668 := TColorRGBANode.Create;;
ColorRGBA1668.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1667.Color := ColorRGBA1668;
Coordinate1669 := TCoordinateNode.Create;;
Coordinate1669.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
end;

procedure InitJin20fSegmentedPart159;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1667.Coord := Coordinate1669;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1664.Geometry := IndexedFaceSet1667;
{ METHOD .FdChildren.Add }
HAnimSite1662.FdChildren.Add(Shape1664);
Billboard1670 := TBillboardNode.Create;;
Billboard1670.AxisOfRotation := Vector3(0,0,0);
Shape1671 := TShapeNode.Create;;
Text1672 := TTextNode.Create;;
Text1672.SetText(['71']);
FontStyle1673 := TFontStyleNode.Create;;
FontStyle1673.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1672.FontStyle := FontStyle1673;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1671.Geometry := Text1672;
{ METHOD .FdChildren.Add }
Billboard1670.FdChildren.Add(Shape1671);
{ METHOD .FdChildren.Add }
HAnimSite1662.FdChildren.Add(Billboard1670);
{ METHOD .FdChildren.Add }
HAnimSegment1661.FdChildren.Add(HAnimSite1662);
HAnimSite1674 := THAnimSiteNode.Create;;
HAnimSite1674.Translation := Vector3(0.2,0.92,-0.03);
TouchSensor1675 := TTouchSensorNode.Create;;
TouchSensor1675.Description := 'HAnimSite 65 hanim_l_olecranon_pt';
{ METHOD .FdChildren.Add }
HAnimSite1674.FdChildren.Add(TouchSensor1675);
Shape1676 := TShapeNode.Create;;
Appearance1677 := TAppearanceNode.Create;;
Material1678 := TMaterialNode.Create;;
Material1678.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1677.Material := Material1678;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1676.Appearance := Appearance1677;
IndexedFaceSet1679 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1679.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1679.CreaseAngle := 0.5;
IndexedFaceSet1679.Solid := False;
end;

procedure InitJin20fSegmentedPart160;
begin

ColorRGBA1680 := TColorRGBANode.Create;;
ColorRGBA1680.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1679.Color := ColorRGBA1680;
Coordinate1681 := TCoordinateNode.Create;;
Coordinate1681.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1679.Coord := Coordinate1681;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1676.Geometry := IndexedFaceSet1679;
{ METHOD .FdChildren.Add }
HAnimSite1674.FdChildren.Add(Shape1676);
Billboard1682 := TBillboardNode.Create;;
Billboard1682.AxisOfRotation := Vector3(0,0,0);
Shape1683 := TShapeNode.Create;;
Text1684 := TTextNode.Create;;
Text1684.SetText(['65']);
FontStyle1685 := TFontStyleNode.Create;;
FontStyle1685.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1684.FontStyle := FontStyle1685;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1683.Geometry := Text1684;
{ METHOD .FdChildren.Add }
Billboard1682.FdChildren.Add(Shape1683);
{ METHOD .FdChildren.Add }
HAnimSite1674.FdChildren.Add(Billboard1682);
{ METHOD .FdChildren.Add }
HAnimSegment1661.FdChildren.Add(HAnimSite1674);
Shape1686 := TShapeNode.Create;;
LineSet1687 := TLineSetNode.Create;;
LineSet1687.SetVertexCount([2]);
ColorRGBA1688 := TColorRGBANode.Create;;
ColorRGBA1688.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1687.Color := ColorRGBA1688;
Coordinate1689 := TCoordinateNode.Create;;
Coordinate1689.SetPoint([Vector3(0.18209,0.9288,-0.00563),Vector3(0.16506,1.17855,-0.00327)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1687.Coord := Coordinate1689;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1686.Geometry := LineSet1687;
end;

procedure InitJin20fSegmentedPart161;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1661.FdChildren.Add(Shape1686);
{ METHOD .FdChildren.Add }
HAnimJoint1660.FdChildren.Add(HAnimSegment1661);
HAnimJoint1690 := THAnimJointNode.Create;;
HAnimJoint1690.Center := Vector3(0.1819,0.72427,-0.005);
HAnimSegment1691 := THAnimSegmentNode.Create;;
HAnimSite1692 := THAnimSiteNode.Create;;
HAnimSite1692.Translation := Vector3(0.2,0.725,0);
TouchSensor1693 := TTouchSensorNode.Create;;
TouchSensor1693.Description := 'HAnimSite 70 hanim_l_ulnar_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite1692.FdChildren.Add(TouchSensor1693);
Shape1694 := TShapeNode.Create;;
Appearance1695 := TAppearanceNode.Create;;
Material1696 := TMaterialNode.Create;;
Material1696.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1695.Material := Material1696;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1694.Appearance := Appearance1695;
IndexedFaceSet1697 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1697.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1697.CreaseAngle := 0.5;
IndexedFaceSet1697.Solid := False;
ColorRGBA1698 := TColorRGBANode.Create;;
ColorRGBA1698.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1697.Color := ColorRGBA1698;
Coordinate1699 := TCoordinateNode.Create;;
Coordinate1699.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1697.Coord := Coordinate1699;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1694.Geometry := IndexedFaceSet1697;
{ METHOD .FdChildren.Add }
HAnimSite1692.FdChildren.Add(Shape1694);
Billboard1700 := TBillboardNode.Create;;
end;

procedure InitJin20fSegmentedPart162;
begin

Billboard1700.AxisOfRotation := Vector3(0,0,0);
Shape1701 := TShapeNode.Create;;
Text1702 := TTextNode.Create;;
Text1702.SetText(['70']);
FontStyle1703 := TFontStyleNode.Create;;
FontStyle1703.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1702.FontStyle := FontStyle1703;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1701.Geometry := Text1702;
{ METHOD .FdChildren.Add }
Billboard1700.FdChildren.Add(Shape1701);
{ METHOD .FdChildren.Add }
HAnimSite1692.FdChildren.Add(Billboard1700);
{ METHOD .FdChildren.Add }
HAnimSegment1691.FdChildren.Add(HAnimSite1692);
Shape1704 := TShapeNode.Create;;
LineSet1705 := TLineSetNode.Create;;
LineSet1705.SetVertexCount([2]);
ColorRGBA1706 := TColorRGBANode.Create;;
ColorRGBA1706.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1705.Color := ColorRGBA1706;
Coordinate1707 := TCoordinateNode.Create;;
Coordinate1707.SetPoint([Vector3(0.1819,0.72427,-0.005),Vector3(0.18209,0.9288,-0.00563)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1705.Coord := Coordinate1707;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1704.Geometry := LineSet1705;
{ METHOD .FdChildren.Add }
HAnimSegment1691.FdChildren.Add(Shape1704);
{ METHOD .FdChildren.Add }
HAnimJoint1690.FdChildren.Add(HAnimSegment1691);
HAnimJoint1708 := THAnimJointNode.Create;;
HAnimJoint1708.Center := Vector3(0.1813,0.706,0.0193);
HAnimSegment1709 := THAnimSegmentNode.Create;;
Shape1710 := TShapeNode.Create;;
LineSet1711 := TLineSetNode.Create;;
LineSet1711.SetVertexCount([2]);
end;

procedure InitJin20fSegmentedPart163;
begin

ColorRGBA1712 := TColorRGBANode.Create;;
ColorRGBA1712.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1711.Color := ColorRGBA1712;
Coordinate1713 := TCoordinateNode.Create;;
Coordinate1713.SetPoint([Vector3(0.1813,0.706,0.0193),Vector3(0.1819,0.72427,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1711.Coord := Coordinate1713;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1710.Geometry := LineSet1711;
{ METHOD .FdChildren.Add }
HAnimSegment1709.FdChildren.Add(Shape1710);
{ METHOD .FdChildren.Add }
HAnimJoint1708.FdChildren.Add(HAnimSegment1709);
HAnimJoint1714 := THAnimJointNode.Create;;
HAnimJoint1714.Center := Vector3(0.1805,0.69255,0.026);
HAnimSegment1715 := THAnimSegmentNode.Create;;
HAnimSite1716 := THAnimSiteNode.Create;;
HAnimSite1716.Translation := Vector3(0.2,0.665,0.012);
TouchSensor1717 := TTouchSensorNode.Create;;
TouchSensor1717.Description := 'HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt';
{ METHOD .FdChildren.Add }
HAnimSite1716.FdChildren.Add(TouchSensor1717);
Shape1718 := TShapeNode.Create;;
Appearance1719 := TAppearanceNode.Create;;
Material1720 := TMaterialNode.Create;;
Material1720.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1719.Material := Material1720;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1718.Appearance := Appearance1719;
IndexedFaceSet1721 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1721.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1721.CreaseAngle := 0.5;
IndexedFaceSet1721.Solid := False;
ColorRGBA1722 := TColorRGBANode.Create;;
ColorRGBA1722.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
end;

procedure InitJin20fSegmentedPart164;
begin

{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1721.Color := ColorRGBA1722;
Coordinate1723 := TCoordinateNode.Create;;
Coordinate1723.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1721.Coord := Coordinate1723;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1718.Geometry := IndexedFaceSet1721;
{ METHOD .FdChildren.Add }
HAnimSite1716.FdChildren.Add(Shape1718);
Billboard1724 := TBillboardNode.Create;;
Billboard1724.AxisOfRotation := Vector3(0,0,0);
Shape1725 := TShapeNode.Create;;
Text1726 := TTextNode.Create;;
Text1726.SetText(['75']);
FontStyle1727 := TFontStyleNode.Create;;
FontStyle1727.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1726.FontStyle := FontStyle1727;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1725.Geometry := Text1726;
{ METHOD .FdChildren.Add }
Billboard1724.FdChildren.Add(Shape1725);
{ METHOD .FdChildren.Add }
HAnimSite1716.FdChildren.Add(Billboard1724);
{ METHOD .FdChildren.Add }
HAnimSegment1715.FdChildren.Add(HAnimSite1716);
Shape1728 := TShapeNode.Create;;
LineSet1729 := TLineSetNode.Create;;
LineSet1729.SetVertexCount([2]);
ColorRGBA1730 := TColorRGBANode.Create;;
ColorRGBA1730.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1729.Color := ColorRGBA1730;
Coordinate1731 := TCoordinateNode.Create;;
Coordinate1731.SetPoint([Vector3(0.1805,0.69255,0.026),Vector3(0.1813,0.706,0.0193)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1729.Coord := Coordinate1731;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1728.Geometry := LineSet1729;
{ METHOD .FdChildren.Add }
HAnimSegment1715.FdChildren.Add(Shape1728);
{ METHOD .FdChildren.Add }
HAnimJoint1714.FdChildren.Add(HAnimSegment1715);
HAnimJoint1732 := THAnimJointNode.Create;
end;

procedure InitJin20fSegmentedPart165;
begin
;
HAnimJoint1732.Center := Vector3(0.181,0.6727,0.03577);
HAnimSegment1733 := THAnimSegmentNode.Create;;
Shape1734 := TShapeNode.Create;;
LineSet1735 := TLineSetNode.Create;;
LineSet1735.SetVertexCount([2]);
ColorRGBA1736 := TColorRGBANode.Create;;
ColorRGBA1736.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1735.Color := ColorRGBA1736;
Coordinate1737 := TCoordinateNode.Create;;
Coordinate1737.SetPoint([Vector3(0.181,0.6727,0.03577),Vector3(0.1805,0.69255,0.026)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1735.Coord := Coordinate1737;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1734.Geometry := LineSet1735;
{ METHOD .FdChildren.Add }
HAnimSegment1733.FdChildren.Add(Shape1734);
{ METHOD .FdChildren.Add }
HAnimJoint1732.FdChildren.Add(HAnimSegment1733);
HAnimJoint1738 := THAnimJointNode.Create;;
HAnimJoint1738.Center := Vector3(0.1826,0.654,0.04966);
HAnimSegment1739 := THAnimSegmentNode.Create;;
HAnimSite1740 := THAnimSiteNode.Create;;
HAnimSite1740.Translation := Vector3(0.18,0.64,0.06);
TouchSensor1741 := TTouchSensorNode.Create;;
TouchSensor1741.Description := 'HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite1740.FdChildren.Add(TouchSensor1741);
Shape1742 := TShapeNode.Create;;
Appearance1743 := TAppearanceNode.Create;;
Material1744 := TMaterialNode.Create;;
Material1744.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1743.Material := Material1744;
end;

procedure InitJin20fSegmentedPart166;
begin

{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1742.Appearance := Appearance1743;
IndexedFaceSet1745 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1745.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1745.CreaseAngle := 0.5;
IndexedFaceSet1745.Solid := False;
ColorRGBA1746 := TColorRGBANode.Create;;
ColorRGBA1746.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1745.Color := ColorRGBA1746;
Coordinate1747 := TCoordinateNode.Create;;
Coordinate1747.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1745.Coord := Coordinate1747;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1742.Geometry := IndexedFaceSet1745;
{ METHOD .FdChildren.Add }
HAnimSite1740.FdChildren.Add(Shape1742);
Billboard1748 := TBillboardNode.Create;;
Billboard1748.AxisOfRotation := Vector3(0,0,0);
Shape1749 := TShapeNode.Create;;
Text1750 := TTextNode.Create;;
Text1750.SetText(['101']);
FontStyle1751 := TFontStyleNode.Create;;
FontStyle1751.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1750.FontStyle := FontStyle1751;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1749.Geometry := Text1750;
{ METHOD .FdChildren.Add }
Billboard1748.FdChildren.Add(Shape1749);
{ METHOD .FdChildren.Add }
HAnimSite1740.FdChildren.Add(Billboard1748);
{ METHOD .FdChildren.Add }
HAnimSegment1739.FdChildren.Add(HAnimSite1740);
Shape1752 := TShapeNode.Create;;
LineSet1753 := TLineSetNode.Create;;
LineSet1753.SetVertexCount([2]);
ColorRGBA1754 := TColorRGBANode.Create;;
ColorRGBA1754.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
end;

procedure InitJin20fSegmentedPart167;
begin

{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1753.Color := ColorRGBA1754;
Coordinate1755 := TCoordinateNode.Create;;
Coordinate1755.SetPoint([Vector3(0.1826,0.654,0.04966),Vector3(0.181,0.6727,0.03577)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1753.Coord := Coordinate1755;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1752.Geometry := LineSet1753;
{ METHOD .FdChildren.Add }
HAnimSegment1739.FdChildren.Add(Shape1752);
{ METHOD .FdChildren.Add }
HAnimJoint1738.FdChildren.Add(HAnimSegment1739);
{ METHOD .FdChildren.Add }
HAnimJoint1732.FdChildren.Add(HAnimJoint1738);
{ METHOD .FdChildren.Add }
HAnimJoint1714.FdChildren.Add(HAnimJoint1732);
{ METHOD .FdChildren.Add }
HAnimJoint1708.FdChildren.Add(HAnimJoint1714);
{ METHOD .FdChildren.Add }
HAnimJoint1690.FdChildren.Add(HAnimJoint1708);
HAnimJoint1756 := THAnimJointNode.Create;;
HAnimJoint1756.Center := Vector3(0.18128,0.70695,0.00842);
HAnimSegment1757 := THAnimSegmentNode.Create;;
Shape1758 := TShapeNode.Create;;
LineSet1759 := TLineSetNode.Create;;
LineSet1759.SetVertexCount([2]);
ColorRGBA1760 := TColorRGBANode.Create;;
ColorRGBA1760.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1759.Color := ColorRGBA1760;
Coordinate1761 := TCoordinateNode.Create;;
Coordinate1761.SetPoint([Vector3(0.18128,0.70695,0.00842),Vector3(0.1819,0.72427,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1759.Coord := Coordinate1761;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1758.Geometry := LineSet1759;
{ METHOD .FdChildren.Add }
HAnimSegment1757.FdChildren.Add(Shape1758);
{ METHOD .FdChildren.Add }
HAnimJoint1756.FdChildren.Add(HAnimSegment1757);
HAnimJoint1762 := THAnimJointNode.Create;;
HAnimJoint1762.Center := Vector3(0.18128,0.6876,0.0098);
HAnimSegment1763 := THAnimSegmentNode.Create;;
Shape1764 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart168;
begin

LineSet1765 := TLineSetNode.Create;;
LineSet1765.SetVertexCount([2]);
ColorRGBA1766 := TColorRGBANode.Create;;
ColorRGBA1766.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1765.Color := ColorRGBA1766;
Coordinate1767 := TCoordinateNode.Create;;
Coordinate1767.SetPoint([Vector3(0.18128,0.6876,0.0098),Vector3(0.18128,0.70695,0.00842)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1765.Coord := Coordinate1767;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1764.Geometry := LineSet1765;
{ METHOD .FdChildren.Add }
HAnimSegment1763.FdChildren.Add(Shape1764);
{ METHOD .FdChildren.Add }
HAnimJoint1762.FdChildren.Add(HAnimSegment1763);
HAnimJoint1768 := THAnimJointNode.Create;;
HAnimJoint1768.Center := Vector3(0.1837,0.6372,0.01507);
HAnimSegment1769 := THAnimSegmentNode.Create;;
Shape1770 := TShapeNode.Create;;
LineSet1771 := TLineSetNode.Create;;
LineSet1771.SetVertexCount([2]);
ColorRGBA1772 := TColorRGBANode.Create;;
ColorRGBA1772.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1771.Color := ColorRGBA1772;
Coordinate1773 := TCoordinateNode.Create;;
Coordinate1773.SetPoint([Vector3(0.1837,0.6372,0.01507),Vector3(0.18128,0.6876,0.0098)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1771.Coord := Coordinate1773;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1770.Geometry := LineSet1771;
{ METHOD .FdChildren.Add }
HAnimSegment1769.FdChildren.Add(Shape1770);
{ METHOD .FdChildren.Add }
HAnimJoint1768.FdChildren.Add(HAnimSegment1769);
HAnimJoint1774 := THAnimJointNode.Create;;
HAnimJoint1774.Center := Vector3(0.18171,0.6068,0.01418);
HAnimSegment1775 := THAnimSegmentNode.Create;;
end;

procedure InitJin20fSegmentedPart169;
begin

Shape1776 := TShapeNode.Create;;
LineSet1777 := TLineSetNode.Create;;
LineSet1777.SetVertexCount([2]);
ColorRGBA1778 := TColorRGBANode.Create;;
ColorRGBA1778.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1777.Color := ColorRGBA1778;
Coordinate1779 := TCoordinateNode.Create;;
Coordinate1779.SetPoint([Vector3(0.18171,0.6068,0.01418),Vector3(0.1837,0.6372,0.01507)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1777.Coord := Coordinate1779;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1776.Geometry := LineSet1777;
{ METHOD .FdChildren.Add }
HAnimSegment1775.FdChildren.Add(Shape1776);
{ METHOD .FdChildren.Add }
HAnimJoint1774.FdChildren.Add(HAnimSegment1775);
HAnimJoint1780 := THAnimJointNode.Create;;
HAnimJoint1780.Center := Vector3(0.18067,0.5816,0.01338);
HAnimSegment1781 := THAnimSegmentNode.Create;;
HAnimSite1782 := THAnimSiteNode.Create;;
HAnimSite1782.Translation := Vector3(0.17,0.558,0.017);
TouchSensor1783 := TTouchSensorNode.Create;;
TouchSensor1783.Description := 'HAnimSite 57 hanim_l_dactylion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1782.FdChildren.Add(TouchSensor1783);
Shape1784 := TShapeNode.Create;;
Appearance1785 := TAppearanceNode.Create;;
Material1786 := TMaterialNode.Create;;
Material1786.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1785.Material := Material1786;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1784.Appearance := Appearance1785;
IndexedFaceSet1787 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1787.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
end;

procedure InitJin20fSegmentedPart170;
begin

IndexedFaceSet1787.CreaseAngle := 0.5;
IndexedFaceSet1787.Solid := False;
ColorRGBA1788 := TColorRGBANode.Create;;
ColorRGBA1788.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1787.Color := ColorRGBA1788;
Coordinate1789 := TCoordinateNode.Create;;
Coordinate1789.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1787.Coord := Coordinate1789;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1784.Geometry := IndexedFaceSet1787;
{ METHOD .FdChildren.Add }
HAnimSite1782.FdChildren.Add(Shape1784);
Billboard1790 := TBillboardNode.Create;;
Billboard1790.AxisOfRotation := Vector3(0,0,0);
Shape1791 := TShapeNode.Create;;
Text1792 := TTextNode.Create;;
Text1792.SetText(['57']);
FontStyle1793 := TFontStyleNode.Create;;
FontStyle1793.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1792.FontStyle := FontStyle1793;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1791.Geometry := Text1792;
{ METHOD .FdChildren.Add }
Billboard1790.FdChildren.Add(Shape1791);
{ METHOD .FdChildren.Add }
HAnimSite1782.FdChildren.Add(Billboard1790);
{ METHOD .FdChildren.Add }
HAnimSegment1781.FdChildren.Add(HAnimSite1782);
HAnimSite1794 := THAnimSiteNode.Create;;
HAnimSite1794.Translation := Vector3(0.172,0.558,0.017);
TouchSensor1795 := TTouchSensorNode.Create;;
TouchSensor1795.Description := 'HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite1794.FdChildren.Add(TouchSensor1795);
Shape1796 := TShapeNode.Create;;
Appearance1797 := TAppearanceNode.Create;;
Material1798 := TMaterialNode.Create;
end;

procedure InitJin20fSegmentedPart171;
begin
;
Material1798.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1797.Material := Material1798;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1796.Appearance := Appearance1797;
IndexedFaceSet1799 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1799.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1799.CreaseAngle := 0.5;
IndexedFaceSet1799.Solid := False;
ColorRGBA1800 := TColorRGBANode.Create;;
ColorRGBA1800.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1799.Color := ColorRGBA1800;
Coordinate1801 := TCoordinateNode.Create;;
Coordinate1801.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1799.Coord := Coordinate1801;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1796.Geometry := IndexedFaceSet1799;
{ METHOD .FdChildren.Add }
HAnimSite1794.FdChildren.Add(Shape1796);
Billboard1802 := TBillboardNode.Create;;
Billboard1802.AxisOfRotation := Vector3(0,0,0);
Shape1803 := TShapeNode.Create;;
Text1804 := TTextNode.Create;;
Text1804.SetText(['102']);
FontStyle1805 := TFontStyleNode.Create;;
FontStyle1805.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1804.FontStyle := FontStyle1805;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1803.Geometry := Text1804;
{ METHOD .FdChildren.Add }
Billboard1802.FdChildren.Add(Shape1803);
{ METHOD .FdChildren.Add }
HAnimSite1794.FdChildren.Add(Billboard1802);
{ METHOD .FdChildren.Add }
HAnimSegment1781.FdChildren.Add(HAnimSite1794);
Shape1806 := TShapeNode.Create;;
LineSet1807 := TLineSetNode.Create;;
LineSet1807.SetVertexCount([2]);
end;

procedure InitJin20fSegmentedPart172;
begin

ColorRGBA1808 := TColorRGBANode.Create;;
ColorRGBA1808.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1807.Color := ColorRGBA1808;
Coordinate1809 := TCoordinateNode.Create;;
Coordinate1809.SetPoint([Vector3(0.18067,0.5816,0.01338),Vector3(0.18171,0.6068,0.01418)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1807.Coord := Coordinate1809;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1806.Geometry := LineSet1807;
{ METHOD .FdChildren.Add }
HAnimSegment1781.FdChildren.Add(Shape1806);
{ METHOD .FdChildren.Add }
HAnimJoint1780.FdChildren.Add(HAnimSegment1781);
{ METHOD .FdChildren.Add }
HAnimJoint1774.FdChildren.Add(HAnimJoint1780);
{ METHOD .FdChildren.Add }
HAnimJoint1768.FdChildren.Add(HAnimJoint1774);
{ METHOD .FdChildren.Add }
HAnimJoint1762.FdChildren.Add(HAnimJoint1768);
{ METHOD .FdChildren.Add }
HAnimJoint1756.FdChildren.Add(HAnimJoint1762);
{ METHOD .FdChildren.Add }
HAnimJoint1690.FdChildren.Add(HAnimJoint1756);
HAnimJoint1810 := THAnimJointNode.Create;;
HAnimJoint1810.Center := Vector3(0.18108,0.708525,-0.0048);
HAnimSegment1811 := THAnimSegmentNode.Create;;
Shape1812 := TShapeNode.Create;;
LineSet1813 := TLineSetNode.Create;;
LineSet1813.SetVertexCount([2]);
ColorRGBA1814 := TColorRGBANode.Create;;
ColorRGBA1814.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1813.Color := ColorRGBA1814;
Coordinate1815 := TCoordinateNode.Create;;
Coordinate1815.SetPoint([Vector3(0.18108,0.708525,-0.0048),Vector3(0.1819,0.72427,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1813.Coord := Coordinate1815;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1812.Geometry := LineSet1813;
{ METHOD .FdChildren.Add }
HAnimSegment1811.FdChildren.Add(Shape1812);
{ METHOD .FdChildren.Add }
HAnimJoint1810.FdChildren.Add(HAnimSegment1811);
HAnimJoint1816 := THAnimJointNode.Create;;
HAnimJoint1816.Center := Vector3(0.18108,0.6858,-0.00625);
end;

procedure InitJin20fSegmentedPart173;
begin

HAnimSegment1817 := THAnimSegmentNode.Create;;
HAnimSite1818 := THAnimSiteNode.Create;;
HAnimSite1818.Translation := Vector3(0.2,0.665,-0.039);
TouchSensor1819 := TTouchSensorNode.Create;;
TouchSensor1819.Description := 'HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt';
{ METHOD .FdChildren.Add }
HAnimSite1818.FdChildren.Add(TouchSensor1819);
Shape1820 := TShapeNode.Create;;
Appearance1821 := TAppearanceNode.Create;;
Material1822 := TMaterialNode.Create;;
Material1822.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1821.Material := Material1822;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1820.Appearance := Appearance1821;
IndexedFaceSet1823 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1823.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1823.CreaseAngle := 0.5;
IndexedFaceSet1823.Solid := False;
ColorRGBA1824 := TColorRGBANode.Create;;
ColorRGBA1824.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1823.Color := ColorRGBA1824;
Coordinate1825 := TCoordinateNode.Create;;
Coordinate1825.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1823.Coord := Coordinate1825;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1820.Geometry := IndexedFaceSet1823;
{ METHOD .FdChildren.Add }
HAnimSite1818.FdChildren.Add(Shape1820);
Billboard1826 := TBillboardNode.Create;;
Billboard1826.AxisOfRotation := Vector3(0,0,0);
Shape1827 := TShapeNode.Create;;
Text1828 := TTextNode.Create;;
end;

procedure InitJin20fSegmentedPart174;
begin

Text1828.SetText(['76']);
FontStyle1829 := TFontStyleNode.Create;;
FontStyle1829.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1828.FontStyle := FontStyle1829;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1827.Geometry := Text1828;
{ METHOD .FdChildren.Add }
Billboard1826.FdChildren.Add(Shape1827);
{ METHOD .FdChildren.Add }
HAnimSite1818.FdChildren.Add(Billboard1826);
{ METHOD .FdChildren.Add }
HAnimSegment1817.FdChildren.Add(HAnimSite1818);
Shape1830 := TShapeNode.Create;;
LineSet1831 := TLineSetNode.Create;;
LineSet1831.SetVertexCount([2]);
ColorRGBA1832 := TColorRGBANode.Create;;
ColorRGBA1832.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1831.Color := ColorRGBA1832;
Coordinate1833 := TCoordinateNode.Create;;
Coordinate1833.SetPoint([Vector3(0.18108,0.6858,-0.00625),Vector3(0.18108,0.708525,-0.0048)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1831.Coord := Coordinate1833;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1830.Geometry := LineSet1831;
{ METHOD .FdChildren.Add }
HAnimSegment1817.FdChildren.Add(Shape1830);
{ METHOD .FdChildren.Add }
HAnimJoint1816.FdChildren.Add(HAnimSegment1817);
HAnimJoint1834 := THAnimJointNode.Create;;
HAnimJoint1834.Center := Vector3(0.18369,0.6349,-0.0039);
HAnimSegment1835 := THAnimSegmentNode.Create;;
Shape1836 := TShapeNode.Create;;
LineSet1837 := TLineSetNode.Create;;
LineSet1837.SetVertexCount([2]);
ColorRGBA1838 := TColorRGBANode.Create;;
ColorRGBA1838.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1837.Color := ColorRGBA1838;
Coordinate1839 := TCoordinateNode.Create;
end;

procedure InitJin20fSegmentedPart175;
begin
;
Coordinate1839.SetPoint([Vector3(0.18369,0.6349,-0.0039),Vector3(0.18108,0.6858,-0.00625)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1837.Coord := Coordinate1839;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1836.Geometry := LineSet1837;
{ METHOD .FdChildren.Add }
HAnimSegment1835.FdChildren.Add(Shape1836);
{ METHOD .FdChildren.Add }
HAnimJoint1834.FdChildren.Add(HAnimSegment1835);
HAnimJoint1840 := THAnimJointNode.Create;;
HAnimJoint1840.Center := Vector3(0.18171,0.6032,-0.0035);
HAnimSegment1841 := THAnimSegmentNode.Create;;
Shape1842 := TShapeNode.Create;;
LineSet1843 := TLineSetNode.Create;;
LineSet1843.SetVertexCount([2]);
ColorRGBA1844 := TColorRGBANode.Create;;
ColorRGBA1844.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1843.Color := ColorRGBA1844;
Coordinate1845 := TCoordinateNode.Create;;
Coordinate1845.SetPoint([Vector3(0.18171,0.6032,-0.0035),Vector3(0.18369,0.6349,-0.0039)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1843.Coord := Coordinate1845;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1842.Geometry := LineSet1843;
{ METHOD .FdChildren.Add }
HAnimSegment1841.FdChildren.Add(Shape1842);
{ METHOD .FdChildren.Add }
HAnimJoint1840.FdChildren.Add(HAnimSegment1841);
HAnimJoint1846 := THAnimJointNode.Create;;
HAnimJoint1846.Center := Vector3(0.1807,0.5753,-0.0037);
HAnimSegment1847 := THAnimSegmentNode.Create;;
HAnimSite1848 := THAnimSiteNode.Create;;
HAnimSite1848.Translation := Vector3(0.172,0.555,-0.006);
TouchSensor1849 := TTouchSensorNode.Create;;
TouchSensor1849.Description := 'HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite1848.FdChildren.Add(TouchSensor1849);
Shape1850 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart176;
begin
;
Appearance1851 := TAppearanceNode.Create;;
Material1852 := TMaterialNode.Create;;
Material1852.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1851.Material := Material1852;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1850.Appearance := Appearance1851;
IndexedFaceSet1853 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1853.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1853.CreaseAngle := 0.5;
IndexedFaceSet1853.Solid := False;
ColorRGBA1854 := TColorRGBANode.Create;;
ColorRGBA1854.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1853.Color := ColorRGBA1854;
Coordinate1855 := TCoordinateNode.Create;;
Coordinate1855.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1853.Coord := Coordinate1855;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1850.Geometry := IndexedFaceSet1853;
{ METHOD .FdChildren.Add }
HAnimSite1848.FdChildren.Add(Shape1850);
Billboard1856 := TBillboardNode.Create;;
Billboard1856.AxisOfRotation := Vector3(0,0,0);
Shape1857 := TShapeNode.Create;;
Text1858 := TTextNode.Create;;
Text1858.SetText(['103']);
FontStyle1859 := TFontStyleNode.Create;;
FontStyle1859.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1858.FontStyle := FontStyle1859;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1857.Geometry := Text1858;
{ METHOD .FdChildren.Add }
Billboard1856.FdChildren.Add(Shape1857);
{ METHOD .FdChildren.Add }
HAnimSite1848.FdChildren.Add(Billboard1856);
{ METHOD .FdChildren.Add }
HAnimSegment1847.FdChildren.Add(HAnimSite1848);
Shape1860 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart177;
begin
;
LineSet1861 := TLineSetNode.Create;;
LineSet1861.SetVertexCount([2]);
ColorRGBA1862 := TColorRGBANode.Create;;
ColorRGBA1862.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1861.Color := ColorRGBA1862;
Coordinate1863 := TCoordinateNode.Create;;
Coordinate1863.SetPoint([Vector3(0.1807,0.5753,-0.0037),Vector3(0.18171,0.6032,-0.0035)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1861.Coord := Coordinate1863;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1860.Geometry := LineSet1861;
{ METHOD .FdChildren.Add }
HAnimSegment1847.FdChildren.Add(Shape1860);
{ METHOD .FdChildren.Add }
HAnimJoint1846.FdChildren.Add(HAnimSegment1847);
{ METHOD .FdChildren.Add }
HAnimJoint1840.FdChildren.Add(HAnimJoint1846);
{ METHOD .FdChildren.Add }
HAnimJoint1834.FdChildren.Add(HAnimJoint1840);
{ METHOD .FdChildren.Add }
HAnimJoint1816.FdChildren.Add(HAnimJoint1834);
{ METHOD .FdChildren.Add }
HAnimJoint1810.FdChildren.Add(HAnimJoint1816);
{ METHOD .FdChildren.Add }
HAnimJoint1690.FdChildren.Add(HAnimJoint1810);
HAnimJoint1864 := THAnimJointNode.Create;;
HAnimJoint1864.Center := Vector3(0.18108,0.70582,-0.02574);
HAnimSegment1865 := THAnimSegmentNode.Create;;
Shape1866 := TShapeNode.Create;;
LineSet1867 := TLineSetNode.Create;;
LineSet1867.SetVertexCount([2]);
ColorRGBA1868 := TColorRGBANode.Create;;
ColorRGBA1868.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1867.Color := ColorRGBA1868;
Coordinate1869 := TCoordinateNode.Create;;
Coordinate1869.SetPoint([Vector3(0.18108,0.70582,-0.02574),Vector3(0.1819,0.72427,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1867.Coord := Coordinate1869;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1866.Geometry := LineSet1867;
{ METHOD .FdChildren.Add }
HAnimSegment1865.FdChildren.Add(Shape1866);
end;

procedure InitJin20fSegmentedPart178;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1864.FdChildren.Add(HAnimSegment1865);
HAnimJoint1870 := THAnimJointNode.Create;;
HAnimJoint1870.Center := Vector3(0.1811,0.68625,-0.0199);
HAnimSegment1871 := THAnimSegmentNode.Create;;
Shape1872 := TShapeNode.Create;;
LineSet1873 := TLineSetNode.Create;;
LineSet1873.SetVertexCount([2]);
ColorRGBA1874 := TColorRGBANode.Create;;
ColorRGBA1874.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1873.Color := ColorRGBA1874;
Coordinate1875 := TCoordinateNode.Create;;
Coordinate1875.SetPoint([Vector3(0.1811,0.68625,-0.0199),Vector3(0.18108,0.70582,-0.02574)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1873.Coord := Coordinate1875;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1872.Geometry := LineSet1873;
{ METHOD .FdChildren.Add }
HAnimSegment1871.FdChildren.Add(Shape1872);
{ METHOD .FdChildren.Add }
HAnimJoint1870.FdChildren.Add(HAnimSegment1871);
HAnimJoint1876 := THAnimJointNode.Create;;
HAnimJoint1876.Center := Vector3(0.18369,0.63405,-0.02144);
HAnimSegment1877 := THAnimSegmentNode.Create;;
Shape1878 := TShapeNode.Create;;
LineSet1879 := TLineSetNode.Create;;
LineSet1879.SetVertexCount([2]);
ColorRGBA1880 := TColorRGBANode.Create;;
ColorRGBA1880.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1879.Color := ColorRGBA1880;
Coordinate1881 := TCoordinateNode.Create;;
Coordinate1881.SetPoint([Vector3(0.18369,0.63405,-0.02144),Vector3(0.1811,0.68625,-0.0199)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1879.Coord := Coordinate1881;
end;

procedure InitJin20fSegmentedPart179;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1878.Geometry := LineSet1879;
{ METHOD .FdChildren.Add }
HAnimSegment1877.FdChildren.Add(Shape1878);
{ METHOD .FdChildren.Add }
HAnimJoint1876.FdChildren.Add(HAnimSegment1877);
HAnimJoint1882 := THAnimJointNode.Create;;
HAnimJoint1882.Center := Vector3(0.1817,0.6066,-0.02064);
HAnimSegment1883 := THAnimSegmentNode.Create;;
Shape1884 := TShapeNode.Create;;
LineSet1885 := TLineSetNode.Create;;
LineSet1885.SetVertexCount([2]);
ColorRGBA1886 := TColorRGBANode.Create;;
ColorRGBA1886.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1885.Color := ColorRGBA1886;
Coordinate1887 := TCoordinateNode.Create;;
Coordinate1887.SetPoint([Vector3(0.1817,0.6066,-0.02064),Vector3(0.18369,0.63405,-0.02144)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1885.Coord := Coordinate1887;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1884.Geometry := LineSet1885;
{ METHOD .FdChildren.Add }
HAnimSegment1883.FdChildren.Add(Shape1884);
{ METHOD .FdChildren.Add }
HAnimJoint1882.FdChildren.Add(HAnimSegment1883);
HAnimJoint1888 := THAnimJointNode.Create;;
HAnimJoint1888.Center := Vector3(0.18067,0.580725,-0.01977);
HAnimSegment1889 := THAnimSegmentNode.Create;;
HAnimSite1890 := THAnimSiteNode.Create;;
HAnimSite1890.Translation := Vector3(0.172,0.559,-0.024);
TouchSensor1891 := TTouchSensorNode.Create;;
TouchSensor1891.Description := 'HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite1890.FdChildren.Add(TouchSensor1891);
Shape1892 := TShapeNode.Create;;
Appearance1893 := TAppearanceNode.Create;;
end;

procedure InitJin20fSegmentedPart180;
begin

Material1894 := TMaterialNode.Create;;
Material1894.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1893.Material := Material1894;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1892.Appearance := Appearance1893;
IndexedFaceSet1895 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1895.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1895.CreaseAngle := 0.5;
IndexedFaceSet1895.Solid := False;
ColorRGBA1896 := TColorRGBANode.Create;;
ColorRGBA1896.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1895.Color := ColorRGBA1896;
Coordinate1897 := TCoordinateNode.Create;;
Coordinate1897.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1895.Coord := Coordinate1897;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1892.Geometry := IndexedFaceSet1895;
{ METHOD .FdChildren.Add }
HAnimSite1890.FdChildren.Add(Shape1892);
Billboard1898 := TBillboardNode.Create;;
Billboard1898.AxisOfRotation := Vector3(0,0,0);
Shape1899 := TShapeNode.Create;;
Text1900 := TTextNode.Create;;
Text1900.SetText(['104']);
FontStyle1901 := TFontStyleNode.Create;;
FontStyle1901.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1900.FontStyle := FontStyle1901;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1899.Geometry := Text1900;
{ METHOD .FdChildren.Add }
Billboard1898.FdChildren.Add(Shape1899);
{ METHOD .FdChildren.Add }
HAnimSite1890.FdChildren.Add(Billboard1898);
{ METHOD .FdChildren.Add }
HAnimSegment1889.FdChildren.Add(HAnimSite1890);
Shape1902 := TShapeNode.Create;;
LineSet1903 := TLineSetNode.Create;;
end;

procedure InitJin20fSegmentedPart181;
begin

LineSet1903.SetVertexCount([2]);
ColorRGBA1904 := TColorRGBANode.Create;;
ColorRGBA1904.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1903.Color := ColorRGBA1904;
Coordinate1905 := TCoordinateNode.Create;;
Coordinate1905.SetPoint([Vector3(0.18067,0.580725,-0.01977),Vector3(0.1817,0.6066,-0.02064)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1903.Coord := Coordinate1905;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1902.Geometry := LineSet1903;
{ METHOD .FdChildren.Add }
HAnimSegment1889.FdChildren.Add(Shape1902);
{ METHOD .FdChildren.Add }
HAnimJoint1888.FdChildren.Add(HAnimSegment1889);
{ METHOD .FdChildren.Add }
HAnimJoint1882.FdChildren.Add(HAnimJoint1888);
{ METHOD .FdChildren.Add }
HAnimJoint1876.FdChildren.Add(HAnimJoint1882);
{ METHOD .FdChildren.Add }
HAnimJoint1870.FdChildren.Add(HAnimJoint1876);
{ METHOD .FdChildren.Add }
HAnimJoint1864.FdChildren.Add(HAnimJoint1870);
{ METHOD .FdChildren.Add }
HAnimJoint1690.FdChildren.Add(HAnimJoint1864);
HAnimJoint1906 := THAnimJointNode.Create;;
HAnimJoint1906.Center := Vector3(0.18164,0.68827,-0.03278);
HAnimSegment1907 := THAnimSegmentNode.Create;;
HAnimSite1908 := THAnimSiteNode.Create;;
HAnimSite1908.Translation := Vector3(0.2,0.665,-0.036);
TouchSensor1909 := TTouchSensorNode.Create;;
TouchSensor1909.Description := 'HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite1908.FdChildren.Add(TouchSensor1909);
Shape1910 := TShapeNode.Create;;
Appearance1911 := TAppearanceNode.Create;;
Material1912 := TMaterialNode.Create;;
Material1912.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1911.Material := Material1912;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1910.Appearance := Appearance1911;
IndexedFaceSet1913 := TIndexedFaceSetNode.Create;;
end;

procedure InitJin20fSegmentedPart182;
begin

IndexedFaceSet1913.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1913.CreaseAngle := 0.5;
IndexedFaceSet1913.Solid := False;
ColorRGBA1914 := TColorRGBANode.Create;;
ColorRGBA1914.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1913.Color := ColorRGBA1914;
Coordinate1915 := TCoordinateNode.Create;;
Coordinate1915.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1913.Coord := Coordinate1915;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1910.Geometry := IndexedFaceSet1913;
{ METHOD .FdChildren.Add }
HAnimSite1908.FdChildren.Add(Shape1910);
Billboard1916 := TBillboardNode.Create;;
Billboard1916.AxisOfRotation := Vector3(0,0,0);
Shape1917 := TShapeNode.Create;;
Text1918 := TTextNode.Create;;
Text1918.SetText(['77']);
FontStyle1919 := TFontStyleNode.Create;;
FontStyle1919.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1918.FontStyle := FontStyle1919;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1917.Geometry := Text1918;
{ METHOD .FdChildren.Add }
Billboard1916.FdChildren.Add(Shape1917);
{ METHOD .FdChildren.Add }
HAnimSite1908.FdChildren.Add(Billboard1916);
{ METHOD .FdChildren.Add }
HAnimSegment1907.FdChildren.Add(HAnimSite1908);
Shape1920 := TShapeNode.Create;;
LineSet1921 := TLineSetNode.Create;;
LineSet1921.SetVertexCount([2]);
ColorRGBA1922 := TColorRGBANode.Create;;
ColorRGBA1922.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1921.Color := ColorRGBA1922;
Coordinate1923 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart183;
begin

Coordinate1923.SetPoint([Vector3(0.18164,0.68827,-0.03278),Vector3(0.1819,0.72427,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1921.Coord := Coordinate1923;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1920.Geometry := LineSet1921;
{ METHOD .FdChildren.Add }
HAnimSegment1907.FdChildren.Add(Shape1920);
{ METHOD .FdChildren.Add }
HAnimJoint1906.FdChildren.Add(HAnimSegment1907);
HAnimJoint1924 := THAnimJointNode.Create;;
HAnimJoint1924.Center := Vector3(0.1833,0.6381,-0.037);
HAnimSegment1925 := THAnimSegmentNode.Create;;
Shape1926 := TShapeNode.Create;;
LineSet1927 := TLineSetNode.Create;;
LineSet1927.SetVertexCount([2]);
ColorRGBA1928 := TColorRGBANode.Create;;
ColorRGBA1928.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1927.Color := ColorRGBA1928;
Coordinate1929 := TCoordinateNode.Create;;
Coordinate1929.SetPoint([Vector3(0.1833,0.6381,-0.037),Vector3(0.18164,0.68827,-0.03278)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1927.Coord := Coordinate1929;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1926.Geometry := LineSet1927;
{ METHOD .FdChildren.Add }
HAnimSegment1925.FdChildren.Add(Shape1926);
{ METHOD .FdChildren.Add }
HAnimJoint1924.FdChildren.Add(HAnimSegment1925);
HAnimJoint1930 := THAnimJointNode.Create;;
HAnimJoint1930.Center := Vector3(0.18166,0.621,-0.03715);
HAnimSegment1931 := THAnimSegmentNode.Create;;
Shape1932 := TShapeNode.Create;;
LineSet1933 := TLineSetNode.Create;;
LineSet1933.SetVertexCount([2]);
ColorRGBA1934 := TColorRGBANode.Create;;
ColorRGBA1934.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1933.Color := ColorRGBA1934;
end;

procedure InitJin20fSegmentedPart184;
begin

Coordinate1935 := TCoordinateNode.Create;;
Coordinate1935.SetPoint([Vector3(0.18166,0.621,-0.03715),Vector3(0.1833,0.6381,-0.037)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1933.Coord := Coordinate1935;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1932.Geometry := LineSet1933;
{ METHOD .FdChildren.Add }
HAnimSegment1931.FdChildren.Add(Shape1932);
{ METHOD .FdChildren.Add }
HAnimJoint1930.FdChildren.Add(HAnimSegment1931);
HAnimJoint1936 := THAnimJointNode.Create;;
HAnimJoint1936.Center := Vector3(0.1808,0.6023,-0.0369);
HAnimSegment1937 := THAnimSegmentNode.Create;;
HAnimSite1938 := THAnimSiteNode.Create;;
HAnimSite1938.Translation := Vector3(0.172,0.58,-0.039);
TouchSensor1939 := TTouchSensorNode.Create;;
TouchSensor1939.Description := 'HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite1938.FdChildren.Add(TouchSensor1939);
Shape1940 := TShapeNode.Create;;
Appearance1941 := TAppearanceNode.Create;;
Material1942 := TMaterialNode.Create;;
Material1942.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1941.Material := Material1942;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1940.Appearance := Appearance1941;
IndexedFaceSet1943 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1943.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1943.CreaseAngle := 0.5;
IndexedFaceSet1943.Solid := False;
ColorRGBA1944 := TColorRGBANode.Create;;
ColorRGBA1944.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1943.Color := ColorRGBA1944;
Coordinate1945 := TCoordinateNode.Create;;
Coordinate1945.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
end;

procedure InitJin20fSegmentedPart185;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1943.Coord := Coordinate1945;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1940.Geometry := IndexedFaceSet1943;
{ METHOD .FdChildren.Add }
HAnimSite1938.FdChildren.Add(Shape1940);
Billboard1946 := TBillboardNode.Create;;
Billboard1946.AxisOfRotation := Vector3(0,0,0);
Shape1947 := TShapeNode.Create;;
Text1948 := TTextNode.Create;;
Text1948.SetText(['105']);
FontStyle1949 := TFontStyleNode.Create;;
FontStyle1949.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1948.FontStyle := FontStyle1949;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1947.Geometry := Text1948;
{ METHOD .FdChildren.Add }
Billboard1946.FdChildren.Add(Shape1947);
{ METHOD .FdChildren.Add }
HAnimSite1938.FdChildren.Add(Billboard1946);
{ METHOD .FdChildren.Add }
HAnimSegment1937.FdChildren.Add(HAnimSite1938);
Shape1950 := TShapeNode.Create;;
LineSet1951 := TLineSetNode.Create;;
LineSet1951.SetVertexCount([2]);
ColorRGBA1952 := TColorRGBANode.Create;;
ColorRGBA1952.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1951.Color := ColorRGBA1952;
Coordinate1953 := TCoordinateNode.Create;;
Coordinate1953.SetPoint([Vector3(0.1808,0.6023,-0.0369),Vector3(0.18166,0.621,-0.03715)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1951.Coord := Coordinate1953;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1950.Geometry := LineSet1951;
{ METHOD .FdChildren.Add }
HAnimSegment1937.FdChildren.Add(Shape1950);
{ METHOD .FdChildren.Add }
HAnimJoint1936.FdChildren.Add(HAnimSegment1937);
{ METHOD .FdChildren.Add }
HAnimJoint1930.FdChildren.Add(HAnimJoint1936);
{ METHOD .FdChildren.Add }
HAnimJoint1924.FdChildren.Add(HAnimJoint1930);
{ METHOD .FdChildren.Add }
HAnimJoint1906.FdChildren.Add(HAnimJoint1924);
{ METHOD .FdChildren.Add }
HAnimJoint1690.FdChildren.Add(HAnimJoint1906);
{ METHOD .FdChildren.Add }
HAnimJoint1660.FdChildren.Add(HAnimJoint1690);
end;

procedure InitJin20fSegmentedPart186;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1606.FdChildren.Add(HAnimJoint1660);
{ METHOD .FdChildren.Add }
HAnimJoint1552.FdChildren.Add(HAnimJoint1606);
{ METHOD .FdChildren.Add }
HAnimJoint1534.FdChildren.Add(HAnimJoint1552);
{ METHOD .FdChildren.Add }
HAnimJoint1126.FdChildren.Add(HAnimJoint1534);
HAnimJoint1954 := THAnimJointNode.Create;;
HAnimJoint1954.Center := Vector3(-0.03847,1.2087,-0.0138);
HAnimSegment1955 := THAnimSegmentNode.Create;;
HAnimSite1956 := THAnimSiteNode.Create;;
HAnimSite1956.Translation := Vector3(-0.03,1.2,0.04);
TouchSensor1957 := TTouchSensorNode.Create;;
TouchSensor1957.Description := 'HAnimSite r_clavicale hanim_r_clavicale_pt';
{ METHOD .FdChildren.Add }
HAnimSite1956.FdChildren.Add(TouchSensor1957);
Shape1958 := TShapeNode.Create;;
Appearance1959 := TAppearanceNode.Create;;
Material1960 := TMaterialNode.Create;;
Material1960.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1959.Material := Material1960;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1958.Appearance := Appearance1959;
IndexedFaceSet1961 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1961.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1961.CreaseAngle := 0.5;
IndexedFaceSet1961.Solid := False;
ColorRGBA1962 := TColorRGBANode.Create;;
ColorRGBA1962.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1961.Color := ColorRGBA1962;
Coordinate1963 := TCoordinateNode.Create;;
Coordinate1963.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1961.Coord := Coordinate1963;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1958.Geometry := IndexedFaceSet1961;
{ METHOD .FdChildren.Add }
HAnimSite1956.FdChildren.Add(Shape1958);
end;

procedure InitJin20fSegmentedPart187;
begin

Billboard1964 := TBillboardNode.Create;;
Billboard1964.AxisOfRotation := Vector3(0,0,0);
Shape1965 := TShapeNode.Create;;
Text1966 := TTextNode.Create;;
Text1966.SetText(['r_clavicale']);
FontStyle1967 := TFontStyleNode.Create;;
FontStyle1967.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1966.FontStyle := FontStyle1967;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1965.Geometry := Text1966;
{ METHOD .FdChildren.Add }
Billboard1964.FdChildren.Add(Shape1965);
{ METHOD .FdChildren.Add }
HAnimSite1956.FdChildren.Add(Billboard1964);
{ METHOD .FdChildren.Add }
HAnimSegment1955.FdChildren.Add(HAnimSite1956);
Shape1968 := TShapeNode.Create;;
LineSet1969 := TLineSetNode.Create;;
LineSet1969.SetVertexCount([2]);
ColorRGBA1970 := TColorRGBANode.Create;;
ColorRGBA1970.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet1969.Color := ColorRGBA1970;
Coordinate1971 := TCoordinateNode.Create;;
Coordinate1971.SetPoint([Vector3(-0.03847,1.2087,-0.0138),Vector3(0,1.22,-0.0138)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet1969.Coord := Coordinate1971;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1968.Geometry := LineSet1969;
{ METHOD .FdChildren.Add }
HAnimSegment1955.FdChildren.Add(Shape1968);
{ METHOD .FdChildren.Add }
HAnimJoint1954.FdChildren.Add(HAnimSegment1955);
HAnimJoint1972 := THAnimJointNode.Create;;
HAnimJoint1972.Center := Vector3(-0.1229,1.19182,-0.0129);
HAnimSegment1973 := THAnimSegmentNode.Create;;
HAnimSite1974 := THAnimSiteNode.Create;;
HAnimSite1974.Translation := Vector3(-0.15,1.222,-0.02);
end;

procedure InitJin20fSegmentedPart188;
begin

TouchSensor1975 := TTouchSensorNode.Create;;
TouchSensor1975.Description := 'HAnimSite 20 hanim_r_acromion_pt';
{ METHOD .FdChildren.Add }
HAnimSite1974.FdChildren.Add(TouchSensor1975);
Shape1976 := TShapeNode.Create;;
Appearance1977 := TAppearanceNode.Create;;
Material1978 := TMaterialNode.Create;;
Material1978.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1977.Material := Material1978;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1976.Appearance := Appearance1977;
IndexedFaceSet1979 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1979.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1979.CreaseAngle := 0.5;
IndexedFaceSet1979.Solid := False;
ColorRGBA1980 := TColorRGBANode.Create;;
ColorRGBA1980.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1979.Color := ColorRGBA1980;
Coordinate1981 := TCoordinateNode.Create;;
Coordinate1981.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1979.Coord := Coordinate1981;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1976.Geometry := IndexedFaceSet1979;
{ METHOD .FdChildren.Add }
HAnimSite1974.FdChildren.Add(Shape1976);
Billboard1982 := TBillboardNode.Create;;
Billboard1982.AxisOfRotation := Vector3(0,0,0);
Shape1983 := TShapeNode.Create;;
Text1984 := TTextNode.Create;;
Text1984.SetText(['20']);
FontStyle1985 := TFontStyleNode.Create;;
FontStyle1985.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1984.FontStyle := FontStyle1985;
end;

procedure InitJin20fSegmentedPart189;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1983.Geometry := Text1984;
{ METHOD .FdChildren.Add }
Billboard1982.FdChildren.Add(Shape1983);
{ METHOD .FdChildren.Add }
HAnimSite1974.FdChildren.Add(Billboard1982);
{ METHOD .FdChildren.Add }
HAnimSegment1973.FdChildren.Add(HAnimSite1974);
HAnimSite1986 := THAnimSiteNode.Create;;
HAnimSite1986.Translation := Vector3(-0.15,1.16,0.04);
TouchSensor1987 := TTouchSensorNode.Create;;
TouchSensor1987.Description := 'HAnimSite 21 hanim_r_axilla_proximal_pt';
{ METHOD .FdChildren.Add }
HAnimSite1986.FdChildren.Add(TouchSensor1987);
Shape1988 := TShapeNode.Create;;
Appearance1989 := TAppearanceNode.Create;;
Material1990 := TMaterialNode.Create;;
Material1990.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance1989.Material := Material1990;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape1988.Appearance := Appearance1989;
IndexedFaceSet1991 := TIndexedFaceSetNode.Create;;
IndexedFaceSet1991.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1991.CreaseAngle := 0.5;
IndexedFaceSet1991.Solid := False;
ColorRGBA1992 := TColorRGBANode.Create;;
ColorRGBA1992.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet1991.Color := ColorRGBA1992;
Coordinate1993 := TCoordinateNode.Create;;
Coordinate1993.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet1991.Coord := Coordinate1993;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1988.Geometry := IndexedFaceSet1991;
{ METHOD .FdChildren.Add }
HAnimSite1986.FdChildren.Add(Shape1988);
Billboard1994 := TBillboardNode.Create;;
Billboard1994.AxisOfRotation := Vector3(0,0,0);
Shape1995 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart190;
begin

Text1996 := TTextNode.Create;;
Text1996.SetText(['21']);
FontStyle1997 := TFontStyleNode.Create;;
FontStyle1997.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text1996.FontStyle := FontStyle1997;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape1995.Geometry := Text1996;
{ METHOD .FdChildren.Add }
Billboard1994.FdChildren.Add(Shape1995);
{ METHOD .FdChildren.Add }
HAnimSite1986.FdChildren.Add(Billboard1994);
{ METHOD .FdChildren.Add }
HAnimSegment1973.FdChildren.Add(HAnimSite1986);
HAnimSite1998 := THAnimSiteNode.Create;;
HAnimSite1998.Translation := Vector3(-0.17,1.14,0);
TouchSensor1999 := TTouchSensorNode.Create;;
TouchSensor1999.Description := 'HAnimSite 22 hanim_r_axilla_distal_pt';
{ METHOD .FdChildren.Add }
HAnimSite1998.FdChildren.Add(TouchSensor1999);
Shape2000 := TShapeNode.Create;;
Appearance2001 := TAppearanceNode.Create;;
Material2002 := TMaterialNode.Create;;
Material2002.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2001.Material := Material2002;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2000.Appearance := Appearance2001;
IndexedFaceSet2003 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2003.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2003.CreaseAngle := 0.5;
IndexedFaceSet2003.Solid := False;
ColorRGBA2004 := TColorRGBANode.Create;;
ColorRGBA2004.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2003.Color := ColorRGBA2004;
Coordinate2005 := TCoordinateNode.Create;;
Coordinate2005.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2003.Coord := Coordinate2005;
end;

procedure InitJin20fSegmentedPart191;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2000.Geometry := IndexedFaceSet2003;
{ METHOD .FdChildren.Add }
HAnimSite1998.FdChildren.Add(Shape2000);
Billboard2006 := TBillboardNode.Create;;
Billboard2006.AxisOfRotation := Vector3(0,0,0);
Shape2007 := TShapeNode.Create;;
Text2008 := TTextNode.Create;;
Text2008.SetText(['22']);
FontStyle2009 := TFontStyleNode.Create;;
FontStyle2009.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2008.FontStyle := FontStyle2009;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2007.Geometry := Text2008;
{ METHOD .FdChildren.Add }
Billboard2006.FdChildren.Add(Shape2007);
{ METHOD .FdChildren.Add }
HAnimSite1998.FdChildren.Add(Billboard2006);
{ METHOD .FdChildren.Add }
HAnimSegment1973.FdChildren.Add(HAnimSite1998);
HAnimSite2010 := THAnimSiteNode.Create;;
HAnimSite2010.Translation := Vector3(-0.15,1.145,-0.04);
TouchSensor2011 := TTouchSensorNode.Create;;
TouchSensor2011.Description := 'HAnimSite 23 hanim_r_axilla_posterior_folds_pt';
{ METHOD .FdChildren.Add }
HAnimSite2010.FdChildren.Add(TouchSensor2011);
Shape2012 := TShapeNode.Create;;
Appearance2013 := TAppearanceNode.Create;;
Material2014 := TMaterialNode.Create;;
Material2014.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2013.Material := Material2014;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2012.Appearance := Appearance2013;
IndexedFaceSet2015 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2015.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2015.CreaseAngle := 0.5;
IndexedFaceSet2015.Solid := False;
ColorRGBA2016 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart192;
begin
;
ColorRGBA2016.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2015.Color := ColorRGBA2016;
Coordinate2017 := TCoordinateNode.Create;;
Coordinate2017.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2015.Coord := Coordinate2017;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2012.Geometry := IndexedFaceSet2015;
{ METHOD .FdChildren.Add }
HAnimSite2010.FdChildren.Add(Shape2012);
Billboard2018 := TBillboardNode.Create;;
Billboard2018.AxisOfRotation := Vector3(0,0,0);
Shape2019 := TShapeNode.Create;;
Text2020 := TTextNode.Create;;
Text2020.SetText(['23']);
FontStyle2021 := TFontStyleNode.Create;;
FontStyle2021.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2020.FontStyle := FontStyle2021;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2019.Geometry := Text2020;
{ METHOD .FdChildren.Add }
Billboard2018.FdChildren.Add(Shape2019);
{ METHOD .FdChildren.Add }
HAnimSite2010.FdChildren.Add(Billboard2018);
{ METHOD .FdChildren.Add }
HAnimSegment1973.FdChildren.Add(HAnimSite2010);
Shape2022 := TShapeNode.Create;;
LineSet2023 := TLineSetNode.Create;;
LineSet2023.SetVertexCount([2]);
ColorRGBA2024 := TColorRGBANode.Create;;
ColorRGBA2024.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2023.Color := ColorRGBA2024;
Coordinate2025 := TCoordinateNode.Create;;
Coordinate2025.SetPoint([Vector3(-0.1229,1.19182,-0.0129),Vector3(-0.03847,1.2087,-0.0138)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2023.Coord := Coordinate2025;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2022.Geometry := LineSet2023;
{ METHOD .FdChildren.Add }
HAnimSegment1973.FdChildren.Add(Shape2022);
end;

procedure InitJin20fSegmentedPart193;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1972.FdChildren.Add(HAnimSegment1973);
HAnimJoint2026 := THAnimJointNode.Create;;
HAnimJoint2026.Center := Vector3(-0.1647,1.17855,-0.00327);
HAnimSegment2027 := THAnimSegmentNode.Create;;
HAnimSite2028 := THAnimSiteNode.Create;;
HAnimSite2028.Translation := Vector3(-0.2,0.95,-0.03);
TouchSensor2029 := TTouchSensorNode.Create;;
TouchSensor2029.Description := 'HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite2028.FdChildren.Add(TouchSensor2029);
Shape2030 := TShapeNode.Create;;
Appearance2031 := TAppearanceNode.Create;;
Material2032 := TMaterialNode.Create;;
Material2032.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2031.Material := Material2032;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2030.Appearance := Appearance2031;
IndexedFaceSet2033 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2033.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2033.CreaseAngle := 0.5;
IndexedFaceSet2033.Solid := False;
ColorRGBA2034 := TColorRGBANode.Create;;
ColorRGBA2034.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2033.Color := ColorRGBA2034;
Coordinate2035 := TCoordinateNode.Create;;
Coordinate2035.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2033.Coord := Coordinate2035;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2030.Geometry := IndexedFaceSet2033;
{ METHOD .FdChildren.Add }
HAnimSite2028.FdChildren.Add(Shape2030);
Billboard2036 := TBillboardNode.Create;;
Billboard2036.AxisOfRotation := Vector3(0,0,0);
end;

procedure InitJin20fSegmentedPart194;
begin

Shape2037 := TShapeNode.Create;;
Text2038 := TTextNode.Create;;
Text2038.SetText(['66']);
FontStyle2039 := TFontStyleNode.Create;;
FontStyle2039.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2038.FontStyle := FontStyle2039;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2037.Geometry := Text2038;
{ METHOD .FdChildren.Add }
Billboard2036.FdChildren.Add(Shape2037);
{ METHOD .FdChildren.Add }
HAnimSite2028.FdChildren.Add(Billboard2036);
{ METHOD .FdChildren.Add }
HAnimSegment2027.FdChildren.Add(HAnimSite2028);
HAnimSite2040 := THAnimSiteNode.Create;;
HAnimSite2040.Translation := Vector3(-0.18,0.93,-0.03);
TouchSensor2041 := TTouchSensorNode.Create;;
TouchSensor2041.Description := 'HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt';
{ METHOD .FdChildren.Add }
HAnimSite2040.FdChildren.Add(TouchSensor2041);
Shape2042 := TShapeNode.Create;;
Appearance2043 := TAppearanceNode.Create;;
Material2044 := TMaterialNode.Create;;
Material2044.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2043.Material := Material2044;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2042.Appearance := Appearance2043;
IndexedFaceSet2045 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2045.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2045.CreaseAngle := 0.5;
IndexedFaceSet2045.Solid := False;
ColorRGBA2046 := TColorRGBANode.Create;;
ColorRGBA2046.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2045.Color := ColorRGBA2046;
Coordinate2047 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart195;
begin

Coordinate2047.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2045.Coord := Coordinate2047;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2042.Geometry := IndexedFaceSet2045;
{ METHOD .FdChildren.Add }
HAnimSite2040.FdChildren.Add(Shape2042);
Billboard2048 := TBillboardNode.Create;;
Billboard2048.AxisOfRotation := Vector3(0,0,0);
Shape2049 := TShapeNode.Create;;
Text2050 := TTextNode.Create;;
Text2050.SetText(['67']);
FontStyle2051 := TFontStyleNode.Create;;
FontStyle2051.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2050.FontStyle := FontStyle2051;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2049.Geometry := Text2050;
{ METHOD .FdChildren.Add }
Billboard2048.FdChildren.Add(Shape2049);
{ METHOD .FdChildren.Add }
HAnimSite2040.FdChildren.Add(Billboard2048);
{ METHOD .FdChildren.Add }
HAnimSegment2027.FdChildren.Add(HAnimSite2040);
HAnimSite2052 := THAnimSiteNode.Create;;
HAnimSite2052.Translation := Vector3(-0.2,0.91,-0.03);
TouchSensor2053 := TTouchSensorNode.Create;;
TouchSensor2053.Description := 'HAnimSite 72 hanim_r_radiale_pt';
{ METHOD .FdChildren.Add }
HAnimSite2052.FdChildren.Add(TouchSensor2053);
Shape2054 := TShapeNode.Create;;
Appearance2055 := TAppearanceNode.Create;;
Material2056 := TMaterialNode.Create;;
Material2056.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2055.Material := Material2056;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2054.Appearance := Appearance2055;
IndexedFaceSet2057 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2057.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2057.CreaseAngle := 0.5;
end;

procedure InitJin20fSegmentedPart196;
begin

IndexedFaceSet2057.Solid := False;
ColorRGBA2058 := TColorRGBANode.Create;;
ColorRGBA2058.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2057.Color := ColorRGBA2058;
Coordinate2059 := TCoordinateNode.Create;;
Coordinate2059.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2057.Coord := Coordinate2059;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2054.Geometry := IndexedFaceSet2057;
{ METHOD .FdChildren.Add }
HAnimSite2052.FdChildren.Add(Shape2054);
Billboard2060 := TBillboardNode.Create;;
Billboard2060.AxisOfRotation := Vector3(0,0,0);
Shape2061 := TShapeNode.Create;;
Text2062 := TTextNode.Create;;
Text2062.SetText(['72']);
FontStyle2063 := TFontStyleNode.Create;;
FontStyle2063.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2062.FontStyle := FontStyle2063;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2061.Geometry := Text2062;
{ METHOD .FdChildren.Add }
Billboard2060.FdChildren.Add(Shape2061);
{ METHOD .FdChildren.Add }
HAnimSite2052.FdChildren.Add(Billboard2060);
{ METHOD .FdChildren.Add }
HAnimSegment2027.FdChildren.Add(HAnimSite2052);
HAnimSite2064 := THAnimSiteNode.Create;;
HAnimSite2064.Translation := Vector3(-0.225,1.185,0);
TouchSensor2065 := TTouchSensorNode.Create;;
TouchSensor2065.Description := 'HAnimSite 97 hanim_r_bideltoid_pt';
{ METHOD .FdChildren.Add }
HAnimSite2064.FdChildren.Add(TouchSensor2065);
Shape2066 := TShapeNode.Create;;
Appearance2067 := TAppearanceNode.Create;;
Material2068 := TMaterialNode.Create;;
end;

procedure InitJin20fSegmentedPart197;
begin

Material2068.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2067.Material := Material2068;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2066.Appearance := Appearance2067;
IndexedFaceSet2069 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2069.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2069.CreaseAngle := 0.5;
IndexedFaceSet2069.Solid := False;
ColorRGBA2070 := TColorRGBANode.Create;;
ColorRGBA2070.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2069.Color := ColorRGBA2070;
Coordinate2071 := TCoordinateNode.Create;;
Coordinate2071.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2069.Coord := Coordinate2071;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2066.Geometry := IndexedFaceSet2069;
{ METHOD .FdChildren.Add }
HAnimSite2064.FdChildren.Add(Shape2066);
Billboard2072 := TBillboardNode.Create;;
Billboard2072.AxisOfRotation := Vector3(0,0,0);
Shape2073 := TShapeNode.Create;;
Text2074 := TTextNode.Create;;
Text2074.SetText(['97']);
FontStyle2075 := TFontStyleNode.Create;;
FontStyle2075.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2074.FontStyle := FontStyle2075;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2073.Geometry := Text2074;
{ METHOD .FdChildren.Add }
Billboard2072.FdChildren.Add(Shape2073);
{ METHOD .FdChildren.Add }
HAnimSite2064.FdChildren.Add(Billboard2072);
{ METHOD .FdChildren.Add }
HAnimSegment2027.FdChildren.Add(HAnimSite2064);
Shape2076 := TShapeNode.Create;;
LineSet2077 := TLineSetNode.Create;;
LineSet2077.SetVertexCount([2]);
ColorRGBA2078 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart198;
begin
;
ColorRGBA2078.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2077.Color := ColorRGBA2078;
Coordinate2079 := TCoordinateNode.Create;;
Coordinate2079.SetPoint([Vector3(-0.1647,1.17855,-0.00327),Vector3(-0.1229,1.19182,-0.0129)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2077.Coord := Coordinate2079;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2076.Geometry := LineSet2077;
{ METHOD .FdChildren.Add }
HAnimSegment2027.FdChildren.Add(Shape2076);
{ METHOD .FdChildren.Add }
HAnimJoint2026.FdChildren.Add(HAnimSegment2027);
HAnimJoint2080 := THAnimJointNode.Create;;
HAnimJoint2080.Center := Vector3(-0.1817,0.9288,-0.00564);
HAnimSegment2081 := THAnimSegmentNode.Create;;
HAnimSite2082 := THAnimSiteNode.Create;;
HAnimSite2082.Translation := Vector3(-0.18,0.725,0.025);
TouchSensor2083 := TTouchSensorNode.Create;;
TouchSensor2083.Description := 'HAnimSite 74 hanim_r_radial_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite2082.FdChildren.Add(TouchSensor2083);
Shape2084 := TShapeNode.Create;;
Appearance2085 := TAppearanceNode.Create;;
Material2086 := TMaterialNode.Create;;
Material2086.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2085.Material := Material2086;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2084.Appearance := Appearance2085;
IndexedFaceSet2087 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2087.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2087.CreaseAngle := 0.5;
IndexedFaceSet2087.Solid := False;
ColorRGBA2088 := TColorRGBANode.Create;;
ColorRGBA2088.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2087.Color := ColorRGBA2088;
end;

procedure InitJin20fSegmentedPart199;
begin

Coordinate2089 := TCoordinateNode.Create;;
Coordinate2089.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2087.Coord := Coordinate2089;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2084.Geometry := IndexedFaceSet2087;
{ METHOD .FdChildren.Add }
HAnimSite2082.FdChildren.Add(Shape2084);
Billboard2090 := TBillboardNode.Create;;
Billboard2090.AxisOfRotation := Vector3(0,0,0);
Shape2091 := TShapeNode.Create;;
Text2092 := TTextNode.Create;;
Text2092.SetText(['74']);
FontStyle2093 := TFontStyleNode.Create;;
FontStyle2093.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2092.FontStyle := FontStyle2093;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2091.Geometry := Text2092;
{ METHOD .FdChildren.Add }
Billboard2090.FdChildren.Add(Shape2091);
{ METHOD .FdChildren.Add }
HAnimSite2082.FdChildren.Add(Billboard2090);
{ METHOD .FdChildren.Add }
HAnimSegment2081.FdChildren.Add(HAnimSite2082);
HAnimSite2094 := THAnimSiteNode.Create;;
HAnimSite2094.Translation := Vector3(-0.2,0.92,-0.03);
TouchSensor2095 := TTouchSensorNode.Create;;
TouchSensor2095.Description := 'HAnimSite 68 hanim_r_olecranon_pt';
{ METHOD .FdChildren.Add }
HAnimSite2094.FdChildren.Add(TouchSensor2095);
Shape2096 := TShapeNode.Create;;
Appearance2097 := TAppearanceNode.Create;;
Material2098 := TMaterialNode.Create;;
Material2098.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2097.Material := Material2098;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2096.Appearance := Appearance2097;
IndexedFaceSet2099 := TIndexedFaceSetNode.Create;;
end;

procedure InitJin20fSegmentedPart200;
begin

IndexedFaceSet2099.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2099.CreaseAngle := 0.5;
IndexedFaceSet2099.Solid := False;
ColorRGBA2100 := TColorRGBANode.Create;;
ColorRGBA2100.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2099.Color := ColorRGBA2100;
Coordinate2101 := TCoordinateNode.Create;;
Coordinate2101.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2099.Coord := Coordinate2101;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2096.Geometry := IndexedFaceSet2099;
{ METHOD .FdChildren.Add }
HAnimSite2094.FdChildren.Add(Shape2096);
Billboard2102 := TBillboardNode.Create;;
Billboard2102.AxisOfRotation := Vector3(0,0,0);
Shape2103 := TShapeNode.Create;;
Text2104 := TTextNode.Create;;
Text2104.SetText(['68']);
FontStyle2105 := TFontStyleNode.Create;;
FontStyle2105.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2104.FontStyle := FontStyle2105;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2103.Geometry := Text2104;
{ METHOD .FdChildren.Add }
Billboard2102.FdChildren.Add(Shape2103);
{ METHOD .FdChildren.Add }
HAnimSite2094.FdChildren.Add(Billboard2102);
{ METHOD .FdChildren.Add }
HAnimSegment2081.FdChildren.Add(HAnimSite2094);
Shape2106 := TShapeNode.Create;;
LineSet2107 := TLineSetNode.Create;;
LineSet2107.SetVertexCount([2]);
ColorRGBA2108 := TColorRGBANode.Create;;
ColorRGBA2108.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2107.Color := ColorRGBA2108;
Coordinate2109 := TCoordinateNode.Create;;
end;

procedure InitJin20fSegmentedPart201;
begin

Coordinate2109.SetPoint([Vector3(-0.1817,0.9288,-0.00564),Vector3(-0.1647,1.17855,-0.00327)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2107.Coord := Coordinate2109;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2106.Geometry := LineSet2107;
{ METHOD .FdChildren.Add }
HAnimSegment2081.FdChildren.Add(Shape2106);
{ METHOD .FdChildren.Add }
HAnimJoint2080.FdChildren.Add(HAnimSegment2081);
HAnimJoint2110 := THAnimJointNode.Create;;
HAnimJoint2110.Center := Vector3(-0.1816,0.7242,-0.005);
HAnimSegment2111 := THAnimSegmentNode.Create;;
HAnimSite2112 := THAnimSiteNode.Create;;
HAnimSite2112.Translation := Vector3(-0.2,0.725,0);
TouchSensor2113 := TTouchSensorNode.Create;;
TouchSensor2113.Description := 'HAnimSite 73 hanim_r_ulnar_styloid_pt';
{ METHOD .FdChildren.Add }
HAnimSite2112.FdChildren.Add(TouchSensor2113);
Shape2114 := TShapeNode.Create;;
Appearance2115 := TAppearanceNode.Create;;
Material2116 := TMaterialNode.Create;;
Material2116.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2115.Material := Material2116;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2114.Appearance := Appearance2115;
IndexedFaceSet2117 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2117.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2117.CreaseAngle := 0.5;
IndexedFaceSet2117.Solid := False;
ColorRGBA2118 := TColorRGBANode.Create;;
ColorRGBA2118.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2117.Color := ColorRGBA2118;
Coordinate2119 := TCoordinateNode.Create;;
Coordinate2119.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2117.Coord := Coordinate2119;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2114.Geometry := IndexedFaceSet2117;
end;

procedure InitJin20fSegmentedPart202;
begin

{ METHOD .FdChildren.Add }
HAnimSite2112.FdChildren.Add(Shape2114);
Billboard2120 := TBillboardNode.Create;;
Billboard2120.AxisOfRotation := Vector3(0,0,0);
Shape2121 := TShapeNode.Create;;
Text2122 := TTextNode.Create;;
Text2122.SetText(['73']);
FontStyle2123 := TFontStyleNode.Create;;
FontStyle2123.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2122.FontStyle := FontStyle2123;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2121.Geometry := Text2122;
{ METHOD .FdChildren.Add }
Billboard2120.FdChildren.Add(Shape2121);
{ METHOD .FdChildren.Add }
HAnimSite2112.FdChildren.Add(Billboard2120);
{ METHOD .FdChildren.Add }
HAnimSegment2111.FdChildren.Add(HAnimSite2112);
Shape2124 := TShapeNode.Create;;
LineSet2125 := TLineSetNode.Create;;
LineSet2125.SetVertexCount([2]);
ColorRGBA2126 := TColorRGBANode.Create;;
ColorRGBA2126.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2125.Color := ColorRGBA2126;
Coordinate2127 := TCoordinateNode.Create;;
Coordinate2127.SetPoint([Vector3(-0.1816,0.7242,-0.005),Vector3(-0.1817,0.9288,-0.00564)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2125.Coord := Coordinate2127;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2124.Geometry := LineSet2125;
{ METHOD .FdChildren.Add }
HAnimSegment2111.FdChildren.Add(Shape2124);
{ METHOD .FdChildren.Add }
HAnimJoint2110.FdChildren.Add(HAnimSegment2111);
HAnimJoint2128 := THAnimJointNode.Create;;
HAnimJoint2128.Center := Vector3(-0.18097,0.70605,0.0193);
HAnimSegment2129 := THAnimSegmentNode.Create;;
Shape2130 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart203;
begin

LineSet2131 := TLineSetNode.Create;;
LineSet2131.SetVertexCount([2]);
ColorRGBA2132 := TColorRGBANode.Create;;
ColorRGBA2132.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2131.Color := ColorRGBA2132;
Coordinate2133 := TCoordinateNode.Create;;
Coordinate2133.SetPoint([Vector3(-0.18097,0.70605,0.0193),Vector3(-0.1816,0.7242,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2131.Coord := Coordinate2133;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2130.Geometry := LineSet2131;
{ METHOD .FdChildren.Add }
HAnimSegment2129.FdChildren.Add(Shape2130);
{ METHOD .FdChildren.Add }
HAnimJoint2128.FdChildren.Add(HAnimSegment2129);
HAnimJoint2134 := THAnimJointNode.Create;;
HAnimJoint2134.Center := Vector3(-0.18,0.69255,0.02598);
HAnimSegment2135 := THAnimSegmentNode.Create;;
HAnimSite2136 := THAnimSiteNode.Create;;
HAnimSite2136.Translation := Vector3(-0.2,0.665,0.012);
TouchSensor2137 := TTouchSensorNode.Create;;
TouchSensor2137.Description := 'HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt';
{ METHOD .FdChildren.Add }
HAnimSite2136.FdChildren.Add(TouchSensor2137);
Shape2138 := TShapeNode.Create;;
Appearance2139 := TAppearanceNode.Create;;
Material2140 := TMaterialNode.Create;;
Material2140.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2139.Material := Material2140;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2138.Appearance := Appearance2139;
IndexedFaceSet2141 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2141.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2141.CreaseAngle := 0.5;
IndexedFaceSet2141.Solid := False;
end;

procedure InitJin20fSegmentedPart204;
begin

ColorRGBA2142 := TColorRGBANode.Create;;
ColorRGBA2142.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2141.Color := ColorRGBA2142;
Coordinate2143 := TCoordinateNode.Create;;
Coordinate2143.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2141.Coord := Coordinate2143;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2138.Geometry := IndexedFaceSet2141;
{ METHOD .FdChildren.Add }
HAnimSite2136.FdChildren.Add(Shape2138);
Billboard2144 := TBillboardNode.Create;;
Billboard2144.AxisOfRotation := Vector3(0,0,0);
Shape2145 := TShapeNode.Create;;
Text2146 := TTextNode.Create;;
Text2146.SetText(['78']);
FontStyle2147 := TFontStyleNode.Create;;
FontStyle2147.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2146.FontStyle := FontStyle2147;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2145.Geometry := Text2146;
{ METHOD .FdChildren.Add }
Billboard2144.FdChildren.Add(Shape2145);
{ METHOD .FdChildren.Add }
HAnimSite2136.FdChildren.Add(Billboard2144);
{ METHOD .FdChildren.Add }
HAnimSegment2135.FdChildren.Add(HAnimSite2136);
Shape2148 := TShapeNode.Create;;
LineSet2149 := TLineSetNode.Create;;
LineSet2149.SetVertexCount([2]);
ColorRGBA2150 := TColorRGBANode.Create;;
ColorRGBA2150.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2149.Color := ColorRGBA2150;
Coordinate2151 := TCoordinateNode.Create;;
Coordinate2151.SetPoint([Vector3(-0.18,0.69255,0.02598),Vector3(-0.18097,0.70605,0.0193)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2149.Coord := Coordinate2151;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2148.Geometry := LineSet2149;
end;

procedure InitJin20fSegmentedPart205;
begin

{ METHOD .FdChildren.Add }
HAnimSegment2135.FdChildren.Add(Shape2148);
{ METHOD .FdChildren.Add }
HAnimJoint2134.FdChildren.Add(HAnimSegment2135);
HAnimJoint2152 := THAnimJointNode.Create;;
HAnimJoint2152.Center := Vector3(-0.18065,0.67275,0.03577);
HAnimSegment2153 := THAnimSegmentNode.Create;;
Shape2154 := TShapeNode.Create;;
LineSet2155 := TLineSetNode.Create;;
LineSet2155.SetVertexCount([2]);
ColorRGBA2156 := TColorRGBANode.Create;;
ColorRGBA2156.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2155.Color := ColorRGBA2156;
Coordinate2157 := TCoordinateNode.Create;;
Coordinate2157.SetPoint([Vector3(-0.18065,0.67275,0.03577),Vector3(-0.18,0.69255,0.02598)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2155.Coord := Coordinate2157;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2154.Geometry := LineSet2155;
{ METHOD .FdChildren.Add }
HAnimSegment2153.FdChildren.Add(Shape2154);
{ METHOD .FdChildren.Add }
HAnimJoint2152.FdChildren.Add(HAnimSegment2153);
HAnimJoint2158 := THAnimJointNode.Create;;
HAnimJoint2158.Center := Vector3(-0.18227,0.654,0.0496);
HAnimSegment2159 := THAnimSegmentNode.Create;;
HAnimSite2160 := THAnimSiteNode.Create;;
HAnimSite2160.Translation := Vector3(-0.18,0.64,0.06);
TouchSensor2161 := TTouchSensorNode.Create;;
TouchSensor2161.Description := 'HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip';
{ METHOD .FdChildren.Add }
HAnimSite2160.FdChildren.Add(TouchSensor2161);
Shape2162 := TShapeNode.Create;;
Appearance2163 := TAppearanceNode.Create;;
Material2164 := TMaterialNode.Create;
end;

procedure InitJin20fSegmentedPart206;
begin
;
Material2164.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2163.Material := Material2164;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2162.Appearance := Appearance2163;
IndexedFaceSet2165 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2165.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2165.CreaseAngle := 0.5;
IndexedFaceSet2165.Solid := False;
ColorRGBA2166 := TColorRGBANode.Create;;
ColorRGBA2166.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2165.Color := ColorRGBA2166;
Coordinate2167 := TCoordinateNode.Create;;
Coordinate2167.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2165.Coord := Coordinate2167;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2162.Geometry := IndexedFaceSet2165;
{ METHOD .FdChildren.Add }
HAnimSite2160.FdChildren.Add(Shape2162);
Billboard2168 := TBillboardNode.Create;;
Billboard2168.AxisOfRotation := Vector3(0,0,0);
Shape2169 := TShapeNode.Create;;
Text2170 := TTextNode.Create;;
Text2170.SetText(['106']);
FontStyle2171 := TFontStyleNode.Create;;
FontStyle2171.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2170.FontStyle := FontStyle2171;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2169.Geometry := Text2170;
{ METHOD .FdChildren.Add }
Billboard2168.FdChildren.Add(Shape2169);
{ METHOD .FdChildren.Add }
HAnimSite2160.FdChildren.Add(Billboard2168);
{ METHOD .FdChildren.Add }
HAnimSegment2159.FdChildren.Add(HAnimSite2160);
Shape2172 := TShapeNode.Create;;
LineSet2173 := TLineSetNode.Create;;
LineSet2173.SetVertexCount([2]);
end;

procedure InitJin20fSegmentedPart207;
begin

ColorRGBA2174 := TColorRGBANode.Create;;
ColorRGBA2174.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2173.Color := ColorRGBA2174;
Coordinate2175 := TCoordinateNode.Create;;
Coordinate2175.SetPoint([Vector3(-0.18227,0.654,0.0496),Vector3(-0.18065,0.67275,0.03577)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2173.Coord := Coordinate2175;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2172.Geometry := LineSet2173;
{ METHOD .FdChildren.Add }
HAnimSegment2159.FdChildren.Add(Shape2172);
{ METHOD .FdChildren.Add }
HAnimJoint2158.FdChildren.Add(HAnimSegment2159);
{ METHOD .FdChildren.Add }
HAnimJoint2152.FdChildren.Add(HAnimJoint2158);
{ METHOD .FdChildren.Add }
HAnimJoint2134.FdChildren.Add(HAnimJoint2152);
{ METHOD .FdChildren.Add }
HAnimJoint2128.FdChildren.Add(HAnimJoint2134);
{ METHOD .FdChildren.Add }
HAnimJoint2110.FdChildren.Add(HAnimJoint2128);
HAnimJoint2176 := THAnimJointNode.Create;;
HAnimJoint2176.Center := Vector3(-0.18097,0.70695,0.0084);
HAnimSegment2177 := THAnimSegmentNode.Create;;
Shape2178 := TShapeNode.Create;;
LineSet2179 := TLineSetNode.Create;;
LineSet2179.SetVertexCount([2]);
ColorRGBA2180 := TColorRGBANode.Create;;
ColorRGBA2180.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2179.Color := ColorRGBA2180;
Coordinate2181 := TCoordinateNode.Create;;
Coordinate2181.SetPoint([Vector3(-0.18097,0.70695,0.0084),Vector3(-0.1816,0.7242,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2179.Coord := Coordinate2181;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2178.Geometry := LineSet2179;
{ METHOD .FdChildren.Add }
HAnimSegment2177.FdChildren.Add(Shape2178);
{ METHOD .FdChildren.Add }
HAnimJoint2176.FdChildren.Add(HAnimSegment2177);
HAnimJoint2182 := THAnimJointNode.Create;;
HAnimJoint2182.Center := Vector3(-0.1809,0.6876,0.0097);
HAnimSegment2183 := THAnimSegmentNode.Create;
end;

procedure InitJin20fSegmentedPart208;
begin
;
Shape2184 := TShapeNode.Create;;
LineSet2185 := TLineSetNode.Create;;
LineSet2185.SetVertexCount([2]);
ColorRGBA2186 := TColorRGBANode.Create;;
ColorRGBA2186.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2185.Color := ColorRGBA2186;
Coordinate2187 := TCoordinateNode.Create;;
Coordinate2187.SetPoint([Vector3(-0.1809,0.6876,0.0097),Vector3(-0.18097,0.70695,0.0084)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2185.Coord := Coordinate2187;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2184.Geometry := LineSet2185;
{ METHOD .FdChildren.Add }
HAnimSegment2183.FdChildren.Add(Shape2184);
{ METHOD .FdChildren.Add }
HAnimJoint2182.FdChildren.Add(HAnimSegment2183);
HAnimJoint2188 := THAnimJointNode.Create;;
HAnimJoint2188.Center := Vector3(-0.18335,0.6372,0.01507);
HAnimSegment2189 := THAnimSegmentNode.Create;;
Shape2190 := TShapeNode.Create;;
LineSet2191 := TLineSetNode.Create;;
LineSet2191.SetVertexCount([2]);
ColorRGBA2192 := TColorRGBANode.Create;;
ColorRGBA2192.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2191.Color := ColorRGBA2192;
Coordinate2193 := TCoordinateNode.Create;;
Coordinate2193.SetPoint([Vector3(-0.18335,0.6372,0.01507),Vector3(-0.1809,0.6876,0.0097)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2191.Coord := Coordinate2193;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2190.Geometry := LineSet2191;
{ METHOD .FdChildren.Add }
HAnimSegment2189.FdChildren.Add(Shape2190);
{ METHOD .FdChildren.Add }
HAnimJoint2188.FdChildren.Add(HAnimSegment2189);
HAnimJoint2194 := THAnimJointNode.Create;;
end;

procedure InitJin20fSegmentedPart209;
begin

HAnimJoint2194.Center := Vector3(-0.1813,0.6068,0.01418);
HAnimSegment2195 := THAnimSegmentNode.Create;;
Shape2196 := TShapeNode.Create;;
LineSet2197 := TLineSetNode.Create;;
LineSet2197.SetVertexCount([2]);
ColorRGBA2198 := TColorRGBANode.Create;;
ColorRGBA2198.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2197.Color := ColorRGBA2198;
Coordinate2199 := TCoordinateNode.Create;;
Coordinate2199.SetPoint([Vector3(-0.1813,0.6068,0.01418),Vector3(-0.18335,0.6372,0.01507)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2197.Coord := Coordinate2199;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2196.Geometry := LineSet2197;
{ METHOD .FdChildren.Add }
HAnimSegment2195.FdChildren.Add(Shape2196);
{ METHOD .FdChildren.Add }
HAnimJoint2194.FdChildren.Add(HAnimSegment2195);
HAnimJoint2200 := THAnimJointNode.Create;;
HAnimJoint2200.Center := Vector3(-0.1803,0.5816,0.01338);
HAnimSegment2201 := THAnimSegmentNode.Create;;
HAnimSite2202 := THAnimSiteNode.Create;;
HAnimSite2202.Translation := Vector3(-0.17,0.558,0.017);
TouchSensor2203 := TTouchSensorNode.Create;;
TouchSensor2203.Description := 'HAnimSite 61 hanim_r_dactylion_pt';
{ METHOD .FdChildren.Add }
HAnimSite2202.FdChildren.Add(TouchSensor2203);
Shape2204 := TShapeNode.Create;;
Appearance2205 := TAppearanceNode.Create;;
Material2206 := TMaterialNode.Create;;
Material2206.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2205.Material := Material2206;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2204.Appearance := Appearance2205;
end;

procedure InitJin20fSegmentedPart210;
begin

IndexedFaceSet2207 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2207.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2207.CreaseAngle := 0.5;
IndexedFaceSet2207.Solid := False;
ColorRGBA2208 := TColorRGBANode.Create;;
ColorRGBA2208.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2207.Color := ColorRGBA2208;
Coordinate2209 := TCoordinateNode.Create;;
Coordinate2209.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2207.Coord := Coordinate2209;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2204.Geometry := IndexedFaceSet2207;
{ METHOD .FdChildren.Add }
HAnimSite2202.FdChildren.Add(Shape2204);
Billboard2210 := TBillboardNode.Create;;
Billboard2210.AxisOfRotation := Vector3(0,0,0);
Shape2211 := TShapeNode.Create;;
Text2212 := TTextNode.Create;;
Text2212.SetText(['61']);
FontStyle2213 := TFontStyleNode.Create;;
FontStyle2213.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2212.FontStyle := FontStyle2213;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2211.Geometry := Text2212;
{ METHOD .FdChildren.Add }
Billboard2210.FdChildren.Add(Shape2211);
{ METHOD .FdChildren.Add }
HAnimSite2202.FdChildren.Add(Billboard2210);
{ METHOD .FdChildren.Add }
HAnimSegment2201.FdChildren.Add(HAnimSite2202);
HAnimSite2214 := THAnimSiteNode.Create;;
HAnimSite2214.Translation := Vector3(-0.172,0.558,0.017);
TouchSensor2215 := TTouchSensorNode.Create;;
TouchSensor2215.Description := 'HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip';
{ METHOD .FdChildren.Add }
HAnimSite2214.FdChildren.Add(TouchSensor2215);
Shape2216 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart211;
begin

Appearance2217 := TAppearanceNode.Create;;
Material2218 := TMaterialNode.Create;;
Material2218.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2217.Material := Material2218;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2216.Appearance := Appearance2217;
IndexedFaceSet2219 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2219.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2219.CreaseAngle := 0.5;
IndexedFaceSet2219.Solid := False;
ColorRGBA2220 := TColorRGBANode.Create;;
ColorRGBA2220.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2219.Color := ColorRGBA2220;
Coordinate2221 := TCoordinateNode.Create;;
Coordinate2221.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2219.Coord := Coordinate2221;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2216.Geometry := IndexedFaceSet2219;
{ METHOD .FdChildren.Add }
HAnimSite2214.FdChildren.Add(Shape2216);
Billboard2222 := TBillboardNode.Create;;
Billboard2222.AxisOfRotation := Vector3(0,0,0);
Shape2223 := TShapeNode.Create;;
Text2224 := TTextNode.Create;;
Text2224.SetText(['107']);
FontStyle2225 := TFontStyleNode.Create;;
FontStyle2225.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2224.FontStyle := FontStyle2225;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2223.Geometry := Text2224;
{ METHOD .FdChildren.Add }
Billboard2222.FdChildren.Add(Shape2223);
{ METHOD .FdChildren.Add }
HAnimSite2214.FdChildren.Add(Billboard2222);
{ METHOD .FdChildren.Add }
HAnimSegment2201.FdChildren.Add(HAnimSite2214);
Shape2226 := TShapeNode.Create;;
end;

procedure InitJin20fSegmentedPart212;
begin

LineSet2227 := TLineSetNode.Create;;
LineSet2227.SetVertexCount([2]);
ColorRGBA2228 := TColorRGBANode.Create;;
ColorRGBA2228.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2227.Color := ColorRGBA2228;
Coordinate2229 := TCoordinateNode.Create;;
Coordinate2229.SetPoint([Vector3(-0.1803,0.5816,0.01338),Vector3(-0.1813,0.6068,0.01418)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2227.Coord := Coordinate2229;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2226.Geometry := LineSet2227;
{ METHOD .FdChildren.Add }
HAnimSegment2201.FdChildren.Add(Shape2226);
{ METHOD .FdChildren.Add }
HAnimJoint2200.FdChildren.Add(HAnimSegment2201);
{ METHOD .FdChildren.Add }
HAnimJoint2194.FdChildren.Add(HAnimJoint2200);
{ METHOD .FdChildren.Add }
HAnimJoint2188.FdChildren.Add(HAnimJoint2194);
{ METHOD .FdChildren.Add }
HAnimJoint2182.FdChildren.Add(HAnimJoint2188);
{ METHOD .FdChildren.Add }
HAnimJoint2176.FdChildren.Add(HAnimJoint2182);
{ METHOD .FdChildren.Add }
HAnimJoint2110.FdChildren.Add(HAnimJoint2176);
HAnimJoint2230 := THAnimJointNode.Create;;
HAnimJoint2230.Center := Vector3(-0.18072,0.708525,-0.004797);
HAnimSegment2231 := THAnimSegmentNode.Create;;
Shape2232 := TShapeNode.Create;;
LineSet2233 := TLineSetNode.Create;;
LineSet2233.SetVertexCount([2]);
ColorRGBA2234 := TColorRGBANode.Create;;
ColorRGBA2234.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2233.Color := ColorRGBA2234;
Coordinate2235 := TCoordinateNode.Create;;
Coordinate2235.SetPoint([Vector3(-0.18072,0.708525,-0.004797),Vector3(-0.1816,0.7242,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2233.Coord := Coordinate2235;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2232.Geometry := LineSet2233;
{ METHOD .FdChildren.Add }
HAnimSegment2231.FdChildren.Add(Shape2232);
{ METHOD .FdChildren.Add }
HAnimJoint2230.FdChildren.Add(HAnimSegment2231);
end;

procedure InitJin20fSegmentedPart213;
begin

HAnimJoint2236 := THAnimJointNode.Create;;
HAnimJoint2236.Center := Vector3(-0.18072,0.6858,-0.00625);
HAnimSegment2237 := THAnimSegmentNode.Create;;
HAnimSite2238 := THAnimSiteNode.Create;;
HAnimSite2238.Translation := Vector3(-0.2,0.665,0.016);
TouchSensor2239 := TTouchSensorNode.Create;;
TouchSensor2239.Description := 'HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt';
{ METHOD .FdChildren.Add }
HAnimSite2238.FdChildren.Add(TouchSensor2239);
Shape2240 := TShapeNode.Create;;
Appearance2241 := TAppearanceNode.Create;;
Material2242 := TMaterialNode.Create;;
Material2242.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2241.Material := Material2242;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2240.Appearance := Appearance2241;
IndexedFaceSet2243 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2243.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2243.CreaseAngle := 0.5;
IndexedFaceSet2243.Solid := False;
ColorRGBA2244 := TColorRGBANode.Create;;
ColorRGBA2244.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2243.Color := ColorRGBA2244;
Coordinate2245 := TCoordinateNode.Create;;
Coordinate2245.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2243.Coord := Coordinate2245;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2240.Geometry := IndexedFaceSet2243;
{ METHOD .FdChildren.Add }
HAnimSite2238.FdChildren.Add(Shape2240);
Billboard2246 := TBillboardNode.Create;;
Billboard2246.AxisOfRotation := Vector3(0,0,0);
Shape2247 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart214;
begin
;
Text2248 := TTextNode.Create;;
Text2248.SetText(['79']);
FontStyle2249 := TFontStyleNode.Create;;
FontStyle2249.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2248.FontStyle := FontStyle2249;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2247.Geometry := Text2248;
{ METHOD .FdChildren.Add }
Billboard2246.FdChildren.Add(Shape2247);
{ METHOD .FdChildren.Add }
HAnimSite2238.FdChildren.Add(Billboard2246);
{ METHOD .FdChildren.Add }
HAnimSegment2237.FdChildren.Add(HAnimSite2238);
Shape2250 := TShapeNode.Create;;
LineSet2251 := TLineSetNode.Create;;
LineSet2251.SetVertexCount([2]);
ColorRGBA2252 := TColorRGBANode.Create;;
ColorRGBA2252.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2251.Color := ColorRGBA2252;
Coordinate2253 := TCoordinateNode.Create;;
Coordinate2253.SetPoint([Vector3(-0.18072,0.6858,-0.00625),Vector3(-0.18072,0.708525,-0.004797)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2251.Coord := Coordinate2253;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2250.Geometry := LineSet2251;
{ METHOD .FdChildren.Add }
HAnimSegment2237.FdChildren.Add(Shape2250);
{ METHOD .FdChildren.Add }
HAnimJoint2236.FdChildren.Add(HAnimSegment2237);
HAnimJoint2254 := THAnimJointNode.Create;;
HAnimJoint2254.Center := Vector3(-0.1833,0.63495,-0.0039);
HAnimSegment2255 := THAnimSegmentNode.Create;;
Shape2256 := TShapeNode.Create;;
LineSet2257 := TLineSetNode.Create;;
LineSet2257.SetVertexCount([2]);
ColorRGBA2258 := TColorRGBANode.Create;;
end;

procedure InitJin20fSegmentedPart215;
begin

ColorRGBA2258.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2257.Color := ColorRGBA2258;
Coordinate2259 := TCoordinateNode.Create;;
Coordinate2259.SetPoint([Vector3(-0.1833,0.63495,-0.0039),Vector3(-0.18072,0.6858,-0.00625)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2257.Coord := Coordinate2259;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2256.Geometry := LineSet2257;
{ METHOD .FdChildren.Add }
HAnimSegment2255.FdChildren.Add(Shape2256);
{ METHOD .FdChildren.Add }
HAnimJoint2254.FdChildren.Add(HAnimSegment2255);
HAnimJoint2260 := THAnimJointNode.Create;;
HAnimJoint2260.Center := Vector3(-0.1813,0.6032,-0.0035);
HAnimSegment2261 := THAnimSegmentNode.Create;;
Shape2262 := TShapeNode.Create;;
LineSet2263 := TLineSetNode.Create;;
LineSet2263.SetVertexCount([2]);
ColorRGBA2264 := TColorRGBANode.Create;;
ColorRGBA2264.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2263.Color := ColorRGBA2264;
Coordinate2265 := TCoordinateNode.Create;;
Coordinate2265.SetPoint([Vector3(-0.1813,0.6032,-0.0035),Vector3(-0.1833,0.63495,-0.0039)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2263.Coord := Coordinate2265;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2262.Geometry := LineSet2263;
{ METHOD .FdChildren.Add }
HAnimSegment2261.FdChildren.Add(Shape2262);
{ METHOD .FdChildren.Add }
HAnimJoint2260.FdChildren.Add(HAnimSegment2261);
HAnimJoint2266 := THAnimJointNode.Create;;
HAnimJoint2266.Center := Vector3(-0.18029,0.5753,-0.00375);
HAnimSegment2267 := THAnimSegmentNode.Create;;
HAnimSite2268 := THAnimSiteNode.Create;;
HAnimSite2268.Translation := Vector3(-0.17,0.555,-0.006);
TouchSensor2269 := TTouchSensorNode.Create;;
end;

procedure InitJin20fSegmentedPart216;
begin

TouchSensor2269.Description := 'HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip';
{ METHOD .FdChildren.Add }
HAnimSite2268.FdChildren.Add(TouchSensor2269);
Shape2270 := TShapeNode.Create;;
Appearance2271 := TAppearanceNode.Create;;
Material2272 := TMaterialNode.Create;;
Material2272.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2271.Material := Material2272;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2270.Appearance := Appearance2271;
IndexedFaceSet2273 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2273.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2273.CreaseAngle := 0.5;
IndexedFaceSet2273.Solid := False;
ColorRGBA2274 := TColorRGBANode.Create;;
ColorRGBA2274.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2273.Color := ColorRGBA2274;
Coordinate2275 := TCoordinateNode.Create;;
Coordinate2275.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2273.Coord := Coordinate2275;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2270.Geometry := IndexedFaceSet2273;
{ METHOD .FdChildren.Add }
HAnimSite2268.FdChildren.Add(Shape2270);
Billboard2276 := TBillboardNode.Create;;
Billboard2276.AxisOfRotation := Vector3(0,0,0);
Shape2277 := TShapeNode.Create;;
Text2278 := TTextNode.Create;;
Text2278.SetText(['108']);
FontStyle2279 := TFontStyleNode.Create;;
FontStyle2279.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2278.FontStyle := FontStyle2279;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2277.Geometry := Text2278;
{ METHOD .FdChildren.Add }
Billboard2276.FdChildren.Add(Shape2277);
end;

procedure InitJin20fSegmentedPart217;
begin

{ METHOD .FdChildren.Add }
HAnimSite2268.FdChildren.Add(Billboard2276);
{ METHOD .FdChildren.Add }
HAnimSegment2267.FdChildren.Add(HAnimSite2268);
Shape2280 := TShapeNode.Create;;
LineSet2281 := TLineSetNode.Create;;
LineSet2281.SetVertexCount([2]);
ColorRGBA2282 := TColorRGBANode.Create;;
ColorRGBA2282.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2281.Color := ColorRGBA2282;
Coordinate2283 := TCoordinateNode.Create;;
Coordinate2283.SetPoint([Vector3(-0.18029,0.5753,-0.00375),Vector3(-0.1813,0.6032,-0.0035)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2281.Coord := Coordinate2283;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2280.Geometry := LineSet2281;
{ METHOD .FdChildren.Add }
HAnimSegment2267.FdChildren.Add(Shape2280);
{ METHOD .FdChildren.Add }
HAnimJoint2266.FdChildren.Add(HAnimSegment2267);
{ METHOD .FdChildren.Add }
HAnimJoint2260.FdChildren.Add(HAnimJoint2266);
{ METHOD .FdChildren.Add }
HAnimJoint2254.FdChildren.Add(HAnimJoint2260);
{ METHOD .FdChildren.Add }
HAnimJoint2236.FdChildren.Add(HAnimJoint2254);
{ METHOD .FdChildren.Add }
HAnimJoint2230.FdChildren.Add(HAnimJoint2236);
{ METHOD .FdChildren.Add }
HAnimJoint2110.FdChildren.Add(HAnimJoint2230);
HAnimJoint2284 := THAnimJointNode.Create;;
HAnimJoint2284.Center := Vector3(-0.18072,0.70583,-0.02574);
HAnimSegment2285 := THAnimSegmentNode.Create;;
Shape2286 := TShapeNode.Create;;
LineSet2287 := TLineSetNode.Create;;
LineSet2287.SetVertexCount([2]);
ColorRGBA2288 := TColorRGBANode.Create;;
ColorRGBA2288.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2287.Color := ColorRGBA2288;
Coordinate2289 := TCoordinateNode.Create;;
Coordinate2289.SetPoint([Vector3(-0.18072,0.70583,-0.02574),Vector3(-0.1816,0.7242,-0.005)]);
end;

procedure InitJin20fSegmentedPart218;
begin

{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2287.Coord := Coordinate2289;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2286.Geometry := LineSet2287;
{ METHOD .FdChildren.Add }
HAnimSegment2285.FdChildren.Add(Shape2286);
{ METHOD .FdChildren.Add }
HAnimJoint2284.FdChildren.Add(HAnimSegment2285);
HAnimJoint2290 := THAnimJointNode.Create;;
HAnimJoint2290.Center := Vector3(-0.18072,0.68625,-0.01992);
HAnimSegment2291 := THAnimSegmentNode.Create;;
Shape2292 := TShapeNode.Create;;
LineSet2293 := TLineSetNode.Create;;
LineSet2293.SetVertexCount([2]);
ColorRGBA2294 := TColorRGBANode.Create;;
ColorRGBA2294.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2293.Color := ColorRGBA2294;
Coordinate2295 := TCoordinateNode.Create;;
Coordinate2295.SetPoint([Vector3(-0.18072,0.68625,-0.01992),Vector3(-0.18072,0.70583,-0.02574)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2293.Coord := Coordinate2295;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2292.Geometry := LineSet2293;
{ METHOD .FdChildren.Add }
HAnimSegment2291.FdChildren.Add(Shape2292);
{ METHOD .FdChildren.Add }
HAnimJoint2290.FdChildren.Add(HAnimSegment2291);
HAnimJoint2296 := THAnimJointNode.Create;;
HAnimJoint2296.Center := Vector3(-0.1833,0.63405,-0.02144);
HAnimSegment2297 := THAnimSegmentNode.Create;;
Shape2298 := TShapeNode.Create;;
LineSet2299 := TLineSetNode.Create;;
LineSet2299.SetVertexCount([2]);
ColorRGBA2300 := TColorRGBANode.Create;;
ColorRGBA2300.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2299.Color := ColorRGBA2300;
Coordinate2301 := TCoordinateNode.Create;
end;

procedure InitJin20fSegmentedPart219;
begin
;
Coordinate2301.SetPoint([Vector3(-0.1833,0.63405,-0.02144),Vector3(-0.18072,0.68625,-0.01992)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2299.Coord := Coordinate2301;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2298.Geometry := LineSet2299;
{ METHOD .FdChildren.Add }
HAnimSegment2297.FdChildren.Add(Shape2298);
{ METHOD .FdChildren.Add }
HAnimJoint2296.FdChildren.Add(HAnimSegment2297);
HAnimJoint2302 := THAnimJointNode.Create;;
HAnimJoint2302.Center := Vector3(-0.1813,0.6066,-0.02064);
HAnimSegment2303 := THAnimSegmentNode.Create;;
Shape2304 := TShapeNode.Create;;
LineSet2305 := TLineSetNode.Create;;
LineSet2305.SetVertexCount([2]);
ColorRGBA2306 := TColorRGBANode.Create;;
ColorRGBA2306.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2305.Color := ColorRGBA2306;
Coordinate2307 := TCoordinateNode.Create;;
Coordinate2307.SetPoint([Vector3(-0.1813,0.6066,-0.02064),Vector3(-0.1833,0.63405,-0.02144)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2305.Coord := Coordinate2307;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2304.Geometry := LineSet2305;
{ METHOD .FdChildren.Add }
HAnimSegment2303.FdChildren.Add(Shape2304);
{ METHOD .FdChildren.Add }
HAnimJoint2302.FdChildren.Add(HAnimSegment2303);
HAnimJoint2308 := THAnimJointNode.Create;;
HAnimJoint2308.Center := Vector3(-0.18029,0.5807,-0.01978);
HAnimSegment2309 := THAnimSegmentNode.Create;;
HAnimSite2310 := THAnimSiteNode.Create;;
HAnimSite2310.Translation := Vector3(-0.172,0.559,-0.024);
TouchSensor2311 := TTouchSensorNode.Create;;
TouchSensor2311.Description := 'HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip';
{ METHOD .FdChildren.Add }
HAnimSite2310.FdChildren.Add(TouchSensor2311);
Shape2312 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart220;
begin
;
Appearance2313 := TAppearanceNode.Create;;
Material2314 := TMaterialNode.Create;;
Material2314.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2313.Material := Material2314;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2312.Appearance := Appearance2313;
IndexedFaceSet2315 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2315.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2315.CreaseAngle := 0.5;
IndexedFaceSet2315.Solid := False;
ColorRGBA2316 := TColorRGBANode.Create;;
ColorRGBA2316.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2315.Color := ColorRGBA2316;
Coordinate2317 := TCoordinateNode.Create;;
Coordinate2317.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2315.Coord := Coordinate2317;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2312.Geometry := IndexedFaceSet2315;
{ METHOD .FdChildren.Add }
HAnimSite2310.FdChildren.Add(Shape2312);
Billboard2318 := TBillboardNode.Create;;
Billboard2318.AxisOfRotation := Vector3(0,0,0);
Shape2319 := TShapeNode.Create;;
Text2320 := TTextNode.Create;;
Text2320.SetText(['109']);
FontStyle2321 := TFontStyleNode.Create;;
FontStyle2321.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2320.FontStyle := FontStyle2321;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2319.Geometry := Text2320;
{ METHOD .FdChildren.Add }
Billboard2318.FdChildren.Add(Shape2319);
{ METHOD .FdChildren.Add }
HAnimSite2310.FdChildren.Add(Billboard2318);
{ METHOD .FdChildren.Add }
HAnimSegment2309.FdChildren.Add(HAnimSite2310);
Shape2322 := TShapeNode.Create;
end;

procedure InitJin20fSegmentedPart221;
begin
;
LineSet2323 := TLineSetNode.Create;;
LineSet2323.SetVertexCount([2]);
ColorRGBA2324 := TColorRGBANode.Create;;
ColorRGBA2324.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2323.Color := ColorRGBA2324;
Coordinate2325 := TCoordinateNode.Create;;
Coordinate2325.SetPoint([Vector3(-0.18029,0.5807,-0.01978),Vector3(-0.1813,0.6066,-0.02064)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2323.Coord := Coordinate2325;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2322.Geometry := LineSet2323;
{ METHOD .FdChildren.Add }
HAnimSegment2309.FdChildren.Add(Shape2322);
{ METHOD .FdChildren.Add }
HAnimJoint2308.FdChildren.Add(HAnimSegment2309);
{ METHOD .FdChildren.Add }
HAnimJoint2302.FdChildren.Add(HAnimJoint2308);
{ METHOD .FdChildren.Add }
HAnimJoint2296.FdChildren.Add(HAnimJoint2302);
{ METHOD .FdChildren.Add }
HAnimJoint2290.FdChildren.Add(HAnimJoint2296);
{ METHOD .FdChildren.Add }
HAnimJoint2284.FdChildren.Add(HAnimJoint2290);
{ METHOD .FdChildren.Add }
HAnimJoint2110.FdChildren.Add(HAnimJoint2284);
HAnimJoint2326 := THAnimJointNode.Create;;
HAnimJoint2326.Center := Vector3(-0.18126,0.68827,-0.03278);
HAnimSegment2327 := THAnimSegmentNode.Create;;
HAnimSite2328 := THAnimSiteNode.Create;;
HAnimSite2328.Translation := Vector3(-0.2,0.665,-0.036);
TouchSensor2329 := TTouchSensorNode.Create;;
TouchSensor2329.Description := 'HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt';
{ METHOD .FdChildren.Add }
HAnimSite2328.FdChildren.Add(TouchSensor2329);
Shape2330 := TShapeNode.Create;;
Appearance2331 := TAppearanceNode.Create;;
Material2332 := TMaterialNode.Create;;
Material2332.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2331.Material := Material2332;
end;

procedure InitJin20fSegmentedPart222;
begin

{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2330.Appearance := Appearance2331;
IndexedFaceSet2333 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2333.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2333.CreaseAngle := 0.5;
IndexedFaceSet2333.Solid := False;
ColorRGBA2334 := TColorRGBANode.Create;;
ColorRGBA2334.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2333.Color := ColorRGBA2334;
Coordinate2335 := TCoordinateNode.Create;;
Coordinate2335.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2333.Coord := Coordinate2335;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2330.Geometry := IndexedFaceSet2333;
{ METHOD .FdChildren.Add }
HAnimSite2328.FdChildren.Add(Shape2330);
Billboard2336 := TBillboardNode.Create;;
Billboard2336.AxisOfRotation := Vector3(0,0,0);
Shape2337 := TShapeNode.Create;;
Text2338 := TTextNode.Create;;
Text2338.SetText(['80']);
FontStyle2339 := TFontStyleNode.Create;;
FontStyle2339.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2338.FontStyle := FontStyle2339;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2337.Geometry := Text2338;
{ METHOD .FdChildren.Add }
Billboard2336.FdChildren.Add(Shape2337);
{ METHOD .FdChildren.Add }
HAnimSite2328.FdChildren.Add(Billboard2336);
{ METHOD .FdChildren.Add }
HAnimSegment2327.FdChildren.Add(HAnimSite2328);
Shape2340 := TShapeNode.Create;;
LineSet2341 := TLineSetNode.Create;;
LineSet2341.SetVertexCount([2]);
ColorRGBA2342 := TColorRGBANode.Create;;
ColorRGBA2342.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
end;

procedure InitJin20fSegmentedPart223;
begin

{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2341.Color := ColorRGBA2342;
Coordinate2343 := TCoordinateNode.Create;;
Coordinate2343.SetPoint([Vector3(-0.18126,0.68827,-0.03278),Vector3(-0.1816,0.7242,-0.005)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2341.Coord := Coordinate2343;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2340.Geometry := LineSet2341;
{ METHOD .FdChildren.Add }
HAnimSegment2327.FdChildren.Add(Shape2340);
{ METHOD .FdChildren.Add }
HAnimJoint2326.FdChildren.Add(HAnimSegment2327);
HAnimJoint2344 := THAnimJointNode.Create;;
HAnimJoint2344.Center := Vector3(-0.18297,0.6381,-0.0371);
HAnimSegment2345 := THAnimSegmentNode.Create;;
Shape2346 := TShapeNode.Create;;
LineSet2347 := TLineSetNode.Create;;
LineSet2347.SetVertexCount([2]);
ColorRGBA2348 := TColorRGBANode.Create;;
ColorRGBA2348.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2347.Color := ColorRGBA2348;
Coordinate2349 := TCoordinateNode.Create;;
Coordinate2349.SetPoint([Vector3(-0.18297,0.6381,-0.0371),Vector3(-0.18126,0.68827,-0.03278)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2347.Coord := Coordinate2349;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2346.Geometry := LineSet2347;
{ METHOD .FdChildren.Add }
HAnimSegment2345.FdChildren.Add(Shape2346);
{ METHOD .FdChildren.Add }
HAnimJoint2344.FdChildren.Add(HAnimSegment2345);
HAnimJoint2350 := THAnimJointNode.Create;;
HAnimJoint2350.Center := Vector3(-0.1813,0.621,-0.03715);
HAnimSegment2351 := THAnimSegmentNode.Create;;
Shape2352 := TShapeNode.Create;;
LineSet2353 := TLineSetNode.Create;;
LineSet2353.SetVertexCount([2]);
ColorRGBA2354 := TColorRGBANode.Create;
end;

procedure InitJin20fSegmentedPart224;
begin
;
ColorRGBA2354.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2353.Color := ColorRGBA2354;
Coordinate2355 := TCoordinateNode.Create;;
Coordinate2355.SetPoint([Vector3(-0.1813,0.621,-0.03715),Vector3(-0.18297,0.6381,-0.0371)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2353.Coord := Coordinate2355;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2352.Geometry := LineSet2353;
{ METHOD .FdChildren.Add }
HAnimSegment2351.FdChildren.Add(Shape2352);
{ METHOD .FdChildren.Add }
HAnimJoint2350.FdChildren.Add(HAnimSegment2351);
HAnimJoint2356 := THAnimJointNode.Create;;
HAnimJoint2356.Center := Vector3(-0.18045,0.602325,-0.03697);
HAnimSegment2357 := THAnimSegmentNode.Create;;
HAnimSite2358 := THAnimSiteNode.Create;;
HAnimSite2358.Translation := Vector3(-0.172,0.58,-0.039);
TouchSensor2359 := TTouchSensorNode.Create;;
TouchSensor2359.Description := 'HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip';
{ METHOD .FdChildren.Add }
HAnimSite2358.FdChildren.Add(TouchSensor2359);
Shape2360 := TShapeNode.Create;;
Appearance2361 := TAppearanceNode.Create;;
Material2362 := TMaterialNode.Create;;
Material2362.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2361.Material := Material2362;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2360.Appearance := Appearance2361;
IndexedFaceSet2363 := TIndexedFaceSetNode.Create;;
IndexedFaceSet2363.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2363.CreaseAngle := 0.5;
IndexedFaceSet2363.Solid := False;
ColorRGBA2364 := TColorRGBANode.Create;;
ColorRGBA2364.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet2363.Color := ColorRGBA2364;
end;

procedure InitJin20fSegmentedPart225;
begin

Coordinate2365 := TCoordinateNode.Create;;
Coordinate2365.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet2363.Coord := Coordinate2365;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2360.Geometry := IndexedFaceSet2363;
{ METHOD .FdChildren.Add }
HAnimSite2358.FdChildren.Add(Shape2360);
Billboard2366 := TBillboardNode.Create;;
Billboard2366.AxisOfRotation := Vector3(0,0,0);
Shape2367 := TShapeNode.Create;;
Text2368 := TTextNode.Create;;
Text2368.SetText(['110']);
FontStyle2369 := TFontStyleNode.Create;;
FontStyle2369.Size := 0.035;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text2368.FontStyle := FontStyle2369;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2367.Geometry := Text2368;
{ METHOD .FdChildren.Add }
Billboard2366.FdChildren.Add(Shape2367);
{ METHOD .FdChildren.Add }
HAnimSite2358.FdChildren.Add(Billboard2366);
{ METHOD .FdChildren.Add }
HAnimSegment2357.FdChildren.Add(HAnimSite2358);
Shape2370 := TShapeNode.Create;;
LineSet2371 := TLineSetNode.Create;;
LineSet2371.SetVertexCount([2]);
ColorRGBA2372 := TColorRGBANode.Create;;
ColorRGBA2372.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
LineSet2371.Color := ColorRGBA2372;
Coordinate2373 := TCoordinateNode.Create;;
Coordinate2373.SetPoint([Vector3(-0.18045,0.602325,-0.03697),Vector3(-0.1813,0.621,-0.03715)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
LineSet2371.Coord := Coordinate2373;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2370.Geometry := LineSet2371;
{ METHOD .FdChildren.Add }
HAnimSegment2357.FdChildren.Add(Shape2370);
{ METHOD .FdChildren.Add }
HAnimJoint2356.FdChildren.Add(HAnimSegment2357);
{ METHOD .FdChildren.Add }
HAnimJoint2350.FdChildren.Add(HAnimJoint2356);
{ METHOD .FdChildren.Add }
HAnimJoint2344.FdChildren.Add(HAnimJoint2350);
end;

procedure InitJin20fSegmentedPart226;
begin

{ METHOD .FdChildren.Add }
HAnimJoint2326.FdChildren.Add(HAnimJoint2344);
{ METHOD .FdChildren.Add }
HAnimJoint2110.FdChildren.Add(HAnimJoint2326);
{ METHOD .FdChildren.Add }
HAnimJoint2080.FdChildren.Add(HAnimJoint2110);
{ METHOD .FdChildren.Add }
HAnimJoint2026.FdChildren.Add(HAnimJoint2080);
{ METHOD .FdChildren.Add }
HAnimJoint1972.FdChildren.Add(HAnimJoint2026);
{ METHOD .FdChildren.Add }
HAnimJoint1954.FdChildren.Add(HAnimJoint1972);
{ METHOD .FdChildren.Add }
HAnimJoint1126.FdChildren.Add(HAnimJoint1954);
{ METHOD .FdChildren.Add }
HAnimJoint1120.FdChildren.Add(HAnimJoint1126);
{ METHOD .FdChildren.Add }
HAnimJoint1114.FdChildren.Add(HAnimJoint1120);
{ METHOD .FdChildren.Add }
HAnimJoint1108.FdChildren.Add(HAnimJoint1114);
{ METHOD .FdChildren.Add }
HAnimJoint1102.FdChildren.Add(HAnimJoint1108);
{ METHOD .FdChildren.Add }
HAnimJoint1096.FdChildren.Add(HAnimJoint1102);
{ METHOD .FdChildren.Add }
HAnimJoint1090.FdChildren.Add(HAnimJoint1096);
{ METHOD .FdChildren.Add }
HAnimJoint1084.FdChildren.Add(HAnimJoint1090);
{ METHOD .FdChildren.Add }
HAnimJoint1018.FdChildren.Add(HAnimJoint1084);
{ METHOD .FdChildren.Add }
HAnimJoint988.FdChildren.Add(HAnimJoint1018);
{ METHOD .FdChildren.Add }
HAnimJoint982.FdChildren.Add(HAnimJoint988);
{ METHOD .FdChildren.Add }
HAnimJoint976.FdChildren.Add(HAnimJoint982);
{ METHOD .FdChildren.Add }
HAnimJoint970.FdChildren.Add(HAnimJoint976);
{ METHOD .FdChildren.Add }
HAnimJoint940.FdChildren.Add(HAnimJoint970);
{ METHOD .FdChildren.Add }
HAnimJoint934.FdChildren.Add(HAnimJoint940);
{ METHOD .FdChildren.Add }
HAnimJoint928.FdChildren.Add(HAnimJoint934);
{ METHOD .FdChildren.Add }
HAnimJoint862.FdChildren.Add(HAnimJoint928);
{ METHOD .FdChildren.Add }
HAnimJoint12.FdChildren.Add(HAnimJoint862);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid11.FdSkeleton.Add(HAnimJoint12);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(HAnimHumanoid11);
NavigationInfo2374 := TNavigationInfoNode.Create;;
NavigationInfo2374.Headlight := False;
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(NavigationInfo2374);
Background2375 := TBackgroundNode.Create;;
Background2375.SetGroundColor([Vector3(0.5,0.5,0.5)]);
Background2375.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Background2375);
DirectionalLight2376 := TDirectionalLightNode.Create;;
DirectionalLight2376.Global := True;
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(DirectionalLight2376);
Viewpoint2377 := TViewpointNode.Create;
end;

procedure InitJin20fSegmentedPart227;
begin
;
Viewpoint2377.CenterOfRotation := Vector3(0,1,0);
Viewpoint2377.Description := 'JinLOA4';
Viewpoint2377.Position := Vector3(0,1,3);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Viewpoint2377);
Transform2378 := TTransformNode.Create;;
{ Another Parent Scene 0 0 0 landmark }
Shape2379 := TShapeNode.Create;;
Appearance2380 := TAppearanceNode.Create;;
Material2381 := TMaterialNode.Create;;
Material2381.DiffuseColor := Vector3(0,1,0);
Material2381.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance2380.Material := Material2381;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape2379.Appearance := Appearance2380;
Sphere2382 := TSphereNode.Create;;
Sphere2382.Radius := 0.01;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape2379.Geometry := Sphere2382;
{ METHOD .FdChildren.Add }
Transform2378.FdChildren.Add(Shape2379);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Transform2378);
{ METHOD .AddGroup }
X3D0.AddChildren([Group4]);
end;

function CreateJin20fSegmented: TX3DRootNode;
begin
InitJin20fSegmentedPart0;
InitJin20fSegmentedPart1;
InitJin20fSegmentedPart2;
InitJin20fSegmentedPart3;
InitJin20fSegmentedPart4;
InitJin20fSegmentedPart5;
InitJin20fSegmentedPart6;
InitJin20fSegmentedPart7;
InitJin20fSegmentedPart8;
InitJin20fSegmentedPart9;
InitJin20fSegmentedPart10;
InitJin20fSegmentedPart11;
InitJin20fSegmentedPart12;
InitJin20fSegmentedPart13;
InitJin20fSegmentedPart14;
InitJin20fSegmentedPart15;
InitJin20fSegmentedPart16;
InitJin20fSegmentedPart17;
InitJin20fSegmentedPart18;
InitJin20fSegmentedPart19;
InitJin20fSegmentedPart20;
InitJin20fSegmentedPart21;
InitJin20fSegmentedPart22;
InitJin20fSegmentedPart23;
InitJin20fSegmentedPart24;
InitJin20fSegmentedPart25;
InitJin20fSegmentedPart26;
InitJin20fSegmentedPart27;
InitJin20fSegmentedPart28;
InitJin20fSegmentedPart29;
InitJin20fSegmentedPart30;
InitJin20fSegmentedPart31;
InitJin20fSegmentedPart32;
InitJin20fSegmentedPart33;
InitJin20fSegmentedPart34;
InitJin20fSegmentedPart35;
InitJin20fSegmentedPart36;
InitJin20fSegmentedPart37;
InitJin20fSegmentedPart38;
InitJin20fSegmentedPart39;
InitJin20fSegmentedPart40;
InitJin20fSegmentedPart41;
InitJin20fSegmentedPart42;
InitJin20fSegmentedPart43;
InitJin20fSegmentedPart44;
InitJin20fSegmentedPart45;
InitJin20fSegmentedPart46;
InitJin20fSegmentedPart47;
InitJin20fSegmentedPart48;
InitJin20fSegmentedPart49;
InitJin20fSegmentedPart50;
InitJin20fSegmentedPart51;
InitJin20fSegmentedPart52;
InitJin20fSegmentedPart53;
InitJin20fSegmentedPart54;
InitJin20fSegmentedPart55;
InitJin20fSegmentedPart56;
InitJin20fSegmentedPart57;
InitJin20fSegmentedPart58;
InitJin20fSegmentedPart59;
InitJin20fSegmentedPart60;
InitJin20fSegmentedPart61;
InitJin20fSegmentedPart62;
InitJin20fSegmentedPart63;
InitJin20fSegmentedPart64;
InitJin20fSegmentedPart65;
InitJin20fSegmentedPart66;
InitJin20fSegmentedPart67;
InitJin20fSegmentedPart68;
InitJin20fSegmentedPart69;
InitJin20fSegmentedPart70;
InitJin20fSegmentedPart71;
InitJin20fSegmentedPart72;
InitJin20fSegmentedPart73;
InitJin20fSegmentedPart74;
InitJin20fSegmentedPart75;
InitJin20fSegmentedPart76;
InitJin20fSegmentedPart77;
InitJin20fSegmentedPart78;
InitJin20fSegmentedPart79;
InitJin20fSegmentedPart80;
InitJin20fSegmentedPart81;
InitJin20fSegmentedPart82;
InitJin20fSegmentedPart83;
InitJin20fSegmentedPart84;
InitJin20fSegmentedPart85;
InitJin20fSegmentedPart86;
InitJin20fSegmentedPart87;
InitJin20fSegmentedPart88;
InitJin20fSegmentedPart89;
InitJin20fSegmentedPart90;
InitJin20fSegmentedPart91;
InitJin20fSegmentedPart92;
InitJin20fSegmentedPart93;
InitJin20fSegmentedPart94;
InitJin20fSegmentedPart95;
InitJin20fSegmentedPart96;
InitJin20fSegmentedPart97;
InitJin20fSegmentedPart98;
InitJin20fSegmentedPart99;
InitJin20fSegmentedPart100;
InitJin20fSegmentedPart101;
InitJin20fSegmentedPart102;
InitJin20fSegmentedPart103;
InitJin20fSegmentedPart104;
InitJin20fSegmentedPart105;
InitJin20fSegmentedPart106;
InitJin20fSegmentedPart107;
InitJin20fSegmentedPart108;
InitJin20fSegmentedPart109;
InitJin20fSegmentedPart110;
InitJin20fSegmentedPart111;
InitJin20fSegmentedPart112;
InitJin20fSegmentedPart113;
InitJin20fSegmentedPart114;
InitJin20fSegmentedPart115;
InitJin20fSegmentedPart116;
InitJin20fSegmentedPart117;
InitJin20fSegmentedPart118;
InitJin20fSegmentedPart119;
InitJin20fSegmentedPart120;
InitJin20fSegmentedPart121;
InitJin20fSegmentedPart122;
InitJin20fSegmentedPart123;
InitJin20fSegmentedPart124;
InitJin20fSegmentedPart125;
InitJin20fSegmentedPart126;
InitJin20fSegmentedPart127;
InitJin20fSegmentedPart128;
InitJin20fSegmentedPart129;
InitJin20fSegmentedPart130;
InitJin20fSegmentedPart131;
InitJin20fSegmentedPart132;
InitJin20fSegmentedPart133;
InitJin20fSegmentedPart134;
InitJin20fSegmentedPart135;
InitJin20fSegmentedPart136;
InitJin20fSegmentedPart137;
InitJin20fSegmentedPart138;
InitJin20fSegmentedPart139;
InitJin20fSegmentedPart140;
InitJin20fSegmentedPart141;
InitJin20fSegmentedPart142;
InitJin20fSegmentedPart143;
InitJin20fSegmentedPart144;
InitJin20fSegmentedPart145;
InitJin20fSegmentedPart146;
InitJin20fSegmentedPart147;
InitJin20fSegmentedPart148;
InitJin20fSegmentedPart149;
InitJin20fSegmentedPart150;
InitJin20fSegmentedPart151;
InitJin20fSegmentedPart152;
InitJin20fSegmentedPart153;
InitJin20fSegmentedPart154;
InitJin20fSegmentedPart155;
InitJin20fSegmentedPart156;
InitJin20fSegmentedPart157;
InitJin20fSegmentedPart158;
InitJin20fSegmentedPart159;
InitJin20fSegmentedPart160;
InitJin20fSegmentedPart161;
InitJin20fSegmentedPart162;
InitJin20fSegmentedPart163;
InitJin20fSegmentedPart164;
InitJin20fSegmentedPart165;
InitJin20fSegmentedPart166;
InitJin20fSegmentedPart167;
InitJin20fSegmentedPart168;
InitJin20fSegmentedPart169;
InitJin20fSegmentedPart170;
InitJin20fSegmentedPart171;
InitJin20fSegmentedPart172;
InitJin20fSegmentedPart173;
InitJin20fSegmentedPart174;
InitJin20fSegmentedPart175;
InitJin20fSegmentedPart176;
InitJin20fSegmentedPart177;
InitJin20fSegmentedPart178;
InitJin20fSegmentedPart179;
InitJin20fSegmentedPart180;
InitJin20fSegmentedPart181;
InitJin20fSegmentedPart182;
InitJin20fSegmentedPart183;
InitJin20fSegmentedPart184;
InitJin20fSegmentedPart185;
InitJin20fSegmentedPart186;
InitJin20fSegmentedPart187;
InitJin20fSegmentedPart188;
InitJin20fSegmentedPart189;
InitJin20fSegmentedPart190;
InitJin20fSegmentedPart191;
InitJin20fSegmentedPart192;
InitJin20fSegmentedPart193;
InitJin20fSegmentedPart194;
InitJin20fSegmentedPart195;
InitJin20fSegmentedPart196;
InitJin20fSegmentedPart197;
InitJin20fSegmentedPart198;
InitJin20fSegmentedPart199;
InitJin20fSegmentedPart200;
InitJin20fSegmentedPart201;
InitJin20fSegmentedPart202;
InitJin20fSegmentedPart203;
InitJin20fSegmentedPart204;
InitJin20fSegmentedPart205;
InitJin20fSegmentedPart206;
InitJin20fSegmentedPart207;
InitJin20fSegmentedPart208;
InitJin20fSegmentedPart209;
InitJin20fSegmentedPart210;
InitJin20fSegmentedPart211;
InitJin20fSegmentedPart212;
InitJin20fSegmentedPart213;
InitJin20fSegmentedPart214;
InitJin20fSegmentedPart215;
InitJin20fSegmentedPart216;
InitJin20fSegmentedPart217;
InitJin20fSegmentedPart218;
InitJin20fSegmentedPart219;
InitJin20fSegmentedPart220;
InitJin20fSegmentedPart221;
InitJin20fSegmentedPart222;
InitJin20fSegmentedPart223;
InitJin20fSegmentedPart224;
InitJin20fSegmentedPart225;
InitJin20fSegmentedPart226;
InitJin20fSegmentedPart227;
Result := X3D0;
end;

begin
end.
