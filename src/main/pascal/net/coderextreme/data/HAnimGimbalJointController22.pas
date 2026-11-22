unit HAnimGimbalJointController22;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHAnimGimbalJointController22: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group12: TGroupNode;
NavigationInfo13: TNavigationInfoNode;
LayerSet14: TLayerSetNode;
Layer15: TLayerNode;
Viewpoint16: TViewpointNode;
Viewpoint17: TViewpointNode;
HAnimHumanoid18: THAnimHumanoidNode;
HAnimJoint19: THAnimJointNode;
HAnimSegment20: THAnimSegmentNode;
TouchSensor21: TTouchSensorNode;
Transform22: TTransformNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
Sphere27: TSphereNode;
Shape28: TShapeNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
LineProperties31: TLinePropertiesNode;
LineSet32: TLineSetNode;
Coordinate33: TCoordinateNode;
Shape34: TShapeNode;
Appearance35: TAppearanceNode;
LineSet36: TLineSetNode;
Coordinate37: TCoordinateNode;
HAnimJoint38: THAnimJointNode;
HAnimSegment39: THAnimSegmentNode;
TouchSensor40: TTouchSensorNode;
Transform41: TTransformNode;
Transform42: TTransformNode;
Shape43: TShapeNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
Sphere46: TSphereNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
LineProperties50: TLinePropertiesNode;
LineSet51: TLineSetNode;
Coordinate52: TCoordinateNode;
Shape53: TShapeNode;
Appearance54: TAppearanceNode;
LineSet55: TLineSetNode;
Coordinate56: TCoordinateNode;
HAnimJoint57: THAnimJointNode;
HAnimSegment58: THAnimSegmentNode;
TouchSensor59: TTouchSensorNode;
Transform60: TTransformNode;
Transform61: TTransformNode;
Shape62: TShapeNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
Sphere65: TSphereNode;
Shape66: TShapeNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
LineProperties69: TLinePropertiesNode;
LineSet70: TLineSetNode;
Coordinate71: TCoordinateNode;
HAnimJoint72: THAnimJointNode;
HAnimSegment73: THAnimSegmentNode;
TouchSensor74: TTouchSensorNode;
Transform75: TTransformNode;
Transform76: TTransformNode;
Shape77: TShapeNode;
Appearance78: TAppearanceNode;
Material79: TMaterialNode;
Sphere80: TSphereNode;
Shape81: TShapeNode;
Appearance82: TAppearanceNode;
Material83: TMaterialNode;
LineProperties84: TLinePropertiesNode;
LineSet85: TLineSetNode;
Coordinate86: TCoordinateNode;
HAnimJoint87: THAnimJointNode;
HAnimSegment88: THAnimSegmentNode;
TouchSensor89: TTouchSensorNode;
Transform90: TTransformNode;
Transform91: TTransformNode;
Shape92: TShapeNode;
Appearance93: TAppearanceNode;
Material94: TMaterialNode;
Sphere95: TSphereNode;
Shape96: TShapeNode;
Appearance97: TAppearanceNode;
Material98: TMaterialNode;
LineProperties99: TLinePropertiesNode;
LineSet100: TLineSetNode;
Coordinate101: TCoordinateNode;
Shape102: TShapeNode;
Appearance103: TAppearanceNode;
LineSet104: TLineSetNode;
Coordinate105: TCoordinateNode;
HAnimJoint106: THAnimJointNode;
HAnimSegment107: THAnimSegmentNode;
TouchSensor108: TTouchSensorNode;
Transform109: TTransformNode;
Transform110: TTransformNode;
Shape111: TShapeNode;
Appearance112: TAppearanceNode;
Material113: TMaterialNode;
Sphere114: TSphereNode;
Shape115: TShapeNode;
Appearance116: TAppearanceNode;
Material117: TMaterialNode;
LineProperties118: TLinePropertiesNode;
LineSet119: TLineSetNode;
Coordinate120: TCoordinateNode;
Shape121: TShapeNode;
Appearance122: TAppearanceNode;
LineSet123: TLineSetNode;
Coordinate124: TCoordinateNode;
Shape125: TShapeNode;
Appearance126: TAppearanceNode;
LineSet127: TLineSetNode;
Coordinate128: TCoordinateNode;
HAnimJoint129: THAnimJointNode;
HAnimSegment130: THAnimSegmentNode;
TouchSensor131: TTouchSensorNode;
Transform132: TTransformNode;
Transform133: TTransformNode;
Shape134: TShapeNode;
Appearance135: TAppearanceNode;
Material136: TMaterialNode;
Sphere137: TSphereNode;
Shape138: TShapeNode;
Appearance139: TAppearanceNode;
Material140: TMaterialNode;
LineProperties141: TLinePropertiesNode;
LineSet142: TLineSetNode;
Coordinate143: TCoordinateNode;
HAnimJoint144: THAnimJointNode;
HAnimSegment145: THAnimSegmentNode;
TouchSensor146: TTouchSensorNode;
Transform147: TTransformNode;
Transform148: TTransformNode;
Shape149: TShapeNode;
Appearance150: TAppearanceNode;
Material151: TMaterialNode;
Sphere152: TSphereNode;
Shape153: TShapeNode;
Appearance154: TAppearanceNode;
Material155: TMaterialNode;
LineProperties156: TLinePropertiesNode;
LineSet157: TLineSetNode;
Coordinate158: TCoordinateNode;
HAnimJoint159: THAnimJointNode;
HAnimSegment160: THAnimSegmentNode;
TouchSensor161: TTouchSensorNode;
Transform162: TTransformNode;
Transform163: TTransformNode;
Shape164: TShapeNode;
Appearance165: TAppearanceNode;
Material166: TMaterialNode;
Sphere167: TSphereNode;
Shape168: TShapeNode;
Appearance169: TAppearanceNode;
Material170: TMaterialNode;
LineProperties171: TLinePropertiesNode;
LineSet172: TLineSetNode;
Coordinate173: TCoordinateNode;
HAnimJoint174: THAnimJointNode;
HAnimSegment175: THAnimSegmentNode;
Group176: TGroupNode;
TouchSensor177: TTouchSensorNode;
Transform178: TTransformNode;
Shape179: TShapeNode;
Appearance180: TAppearanceNode;
Material181: TMaterialNode;
Sphere182: TSphereNode;
Shape183: TShapeNode;
Appearance184: TAppearanceNode;
Material185: TMaterialNode;
LineProperties186: TLinePropertiesNode;
LineSet187: TLineSetNode;
Coordinate188: TCoordinateNode;
HAnimJoint189: THAnimJointNode;
HAnimSegment190: THAnimSegmentNode;
TouchSensor191: TTouchSensorNode;
Transform192: TTransformNode;
Transform193: TTransformNode;
Shape194: TShapeNode;
Appearance195: TAppearanceNode;
Material196: TMaterialNode;
Sphere197: TSphereNode;
Shape198: TShapeNode;
Appearance199: TAppearanceNode;
Material200: TMaterialNode;
LineProperties201: TLinePropertiesNode;
LineSet202: TLineSetNode;
Coordinate203: TCoordinateNode;
HAnimJoint204: THAnimJointNode;
HAnimSegment205: THAnimSegmentNode;
TouchSensor206: TTouchSensorNode;
Transform207: TTransformNode;
Transform208: TTransformNode;
Shape209: TShapeNode;
Appearance210: TAppearanceNode;
Material211: TMaterialNode;
Sphere212: TSphereNode;
Shape213: TShapeNode;
Appearance214: TAppearanceNode;
Material215: TMaterialNode;
LineProperties216: TLinePropertiesNode;
LineSet217: TLineSetNode;
Coordinate218: TCoordinateNode;
HAnimJoint219: THAnimJointNode;
HAnimSegment220: THAnimSegmentNode;
TouchSensor221: TTouchSensorNode;
Transform222: TTransformNode;
Transform223: TTransformNode;
Shape224: TShapeNode;
Appearance225: TAppearanceNode;
Material226: TMaterialNode;
Sphere227: TSphereNode;
Shape228: TShapeNode;
Appearance229: TAppearanceNode;
Material230: TMaterialNode;
LineProperties231: TLinePropertiesNode;
LineSet232: TLineSetNode;
Coordinate233: TCoordinateNode;
HAnimJoint234: THAnimJointNode;
HAnimSegment235: THAnimSegmentNode;
TouchSensor236: TTouchSensorNode;
Transform237: TTransformNode;
Transform238: TTransformNode;
Shape239: TShapeNode;
Appearance240: TAppearanceNode;
Material241: TMaterialNode;
Sphere242: TSphereNode;
Shape243: TShapeNode;
Appearance244: TAppearanceNode;
Material245: TMaterialNode;
LineProperties246: TLinePropertiesNode;
LineSet247: TLineSetNode;
Coordinate248: TCoordinateNode;
HAnimJoint249: THAnimJointNode;
HAnimSegment250: THAnimSegmentNode;
Group251: TGroupNode;
TouchSensor252: TTouchSensorNode;
Transform253: TTransformNode;
Shape254: TShapeNode;
Appearance255: TAppearanceNode;
Material256: TMaterialNode;
Sphere257: TSphereNode;
Shape258: TShapeNode;
Appearance259: TAppearanceNode;
Material260: TMaterialNode;
LineProperties261: TLinePropertiesNode;
LineSet262: TLineSetNode;
Coordinate263: TCoordinateNode;
HAnimJoint264: THAnimJointNode;
HAnimSegment265: THAnimSegmentNode;
TouchSensor266: TTouchSensorNode;
Transform267: TTransformNode;
Transform268: TTransformNode;
Shape269: TShapeNode;
Appearance270: TAppearanceNode;
Material271: TMaterialNode;
Sphere272: TSphereNode;
Shape273: TShapeNode;
Appearance274: TAppearanceNode;
Material275: TMaterialNode;
LineProperties276: TLinePropertiesNode;
LineSet277: TLineSetNode;
Coordinate278: TCoordinateNode;
HAnimJoint279: THAnimJointNode;
HAnimSegment280: THAnimSegmentNode;
TouchSensor281: TTouchSensorNode;
Transform282: TTransformNode;
Transform283: TTransformNode;
Shape284: TShapeNode;
Appearance285: TAppearanceNode;
Material286: TMaterialNode;
Sphere287: TSphereNode;
Shape288: TShapeNode;
Appearance289: TAppearanceNode;
Material290: TMaterialNode;
LineProperties291: TLinePropertiesNode;
LineSet292: TLineSetNode;
Coordinate293: TCoordinateNode;
HAnimJoint294: THAnimJointNode;
HAnimSegment295: THAnimSegmentNode;
TouchSensor296: TTouchSensorNode;
Transform297: TTransformNode;
Transform298: TTransformNode;
Shape299: TShapeNode;
Appearance300: TAppearanceNode;
Material301: TMaterialNode;
Sphere302: TSphereNode;
Shape303: TShapeNode;
Appearance304: TAppearanceNode;
Material305: TMaterialNode;
LineProperties306: TLinePropertiesNode;
LineSet307: TLineSetNode;
Coordinate308: TCoordinateNode;
HAnimJoint309: THAnimJointNode;
HAnimSegment310: THAnimSegmentNode;
TouchSensor311: TTouchSensorNode;
Transform312: TTransformNode;
Transform313: TTransformNode;
Shape314: TShapeNode;
Appearance315: TAppearanceNode;
Material316: TMaterialNode;
Sphere317: TSphereNode;
Shape318: TShapeNode;
Appearance319: TAppearanceNode;
Material320: TMaterialNode;
LineProperties321: TLinePropertiesNode;
LineSet322: TLineSetNode;
Coordinate323: TCoordinateNode;
HAnimJoint324: THAnimJointNode;
HAnimSegment325: THAnimSegmentNode;
Group326: TGroupNode;
TouchSensor327: TTouchSensorNode;
Transform328: TTransformNode;
Shape329: TShapeNode;
Appearance330: TAppearanceNode;
Material331: TMaterialNode;
Sphere332: TSphereNode;
Shape333: TShapeNode;
Appearance334: TAppearanceNode;
Material335: TMaterialNode;
LineProperties336: TLinePropertiesNode;
LineSet337: TLineSetNode;
Coordinate338: TCoordinateNode;
HAnimJoint339: THAnimJointNode;
HAnimSegment340: THAnimSegmentNode;
TouchSensor341: TTouchSensorNode;
Transform342: TTransformNode;
Transform343: TTransformNode;
Shape344: TShapeNode;
Appearance345: TAppearanceNode;
Material346: TMaterialNode;
Sphere347: TSphereNode;
Shape348: TShapeNode;
Appearance349: TAppearanceNode;
Material350: TMaterialNode;
LineProperties351: TLinePropertiesNode;
LineSet352: TLineSetNode;
Coordinate353: TCoordinateNode;
HAnimJoint354: THAnimJointNode;
HAnimSegment355: THAnimSegmentNode;
TouchSensor356: TTouchSensorNode;
Transform357: TTransformNode;
Transform358: TTransformNode;
Shape359: TShapeNode;
Appearance360: TAppearanceNode;
Material361: TMaterialNode;
Sphere362: TSphereNode;
Shape363: TShapeNode;
Appearance364: TAppearanceNode;
Material365: TMaterialNode;
LineProperties366: TLinePropertiesNode;
LineSet367: TLineSetNode;
Coordinate368: TCoordinateNode;
Shape369: TShapeNode;
Appearance370: TAppearanceNode;
LineSet371: TLineSetNode;
Coordinate372: TCoordinateNode;
HAnimJoint373: THAnimJointNode;
HAnimSegment374: THAnimSegmentNode;
TouchSensor375: TTouchSensorNode;
Transform376: TTransformNode;
Transform377: TTransformNode;
Shape378: TShapeNode;
Appearance379: TAppearanceNode;
Material380: TMaterialNode;
Sphere381: TSphereNode;
Shape382: TShapeNode;
Appearance383: TAppearanceNode;
Material384: TMaterialNode;
LineProperties385: TLinePropertiesNode;
LineSet386: TLineSetNode;
Coordinate387: TCoordinateNode;
HAnimJoint388: THAnimJointNode;
HAnimSegment389: THAnimSegmentNode;
TouchSensor390: TTouchSensorNode;
Transform391: TTransformNode;
Transform392: TTransformNode;
Shape393: TShapeNode;
Appearance394: TAppearanceNode;
Material395: TMaterialNode;
Sphere396: TSphereNode;
Shape397: TShapeNode;
Appearance398: TAppearanceNode;
Material399: TMaterialNode;
LineProperties400: TLinePropertiesNode;
LineSet401: TLineSetNode;
Coordinate402: TCoordinateNode;
HAnimJoint403: THAnimJointNode;
HAnimSegment404: THAnimSegmentNode;
TouchSensor405: TTouchSensorNode;
Transform406: TTransformNode;
Transform407: TTransformNode;
Shape408: TShapeNode;
Appearance409: TAppearanceNode;
Material410: TMaterialNode;
Sphere411: TSphereNode;
Shape412: TShapeNode;
Appearance413: TAppearanceNode;
Material414: TMaterialNode;
LineProperties415: TLinePropertiesNode;
LineSet416: TLineSetNode;
Coordinate417: TCoordinateNode;
HAnimJoint418: THAnimJointNode;
HAnimSegment419: THAnimSegmentNode;
Group420: TGroupNode;
TouchSensor421: TTouchSensorNode;
Transform422: TTransformNode;
Shape423: TShapeNode;
Appearance424: TAppearanceNode;
Material425: TMaterialNode;
Sphere426: TSphereNode;
Shape427: TShapeNode;
Appearance428: TAppearanceNode;
Material429: TMaterialNode;
LineProperties430: TLinePropertiesNode;
LineSet431: TLineSetNode;
Coordinate432: TCoordinateNode;
HAnimJoint433: THAnimJointNode;
HAnimSegment434: THAnimSegmentNode;
TouchSensor435: TTouchSensorNode;
Transform436: TTransformNode;
Transform437: TTransformNode;
Shape438: TShapeNode;
Appearance439: TAppearanceNode;
Material440: TMaterialNode;
Sphere441: TSphereNode;
Shape442: TShapeNode;
Appearance443: TAppearanceNode;
Material444: TMaterialNode;
LineProperties445: TLinePropertiesNode;
LineSet446: TLineSetNode;
Coordinate447: TCoordinateNode;
HAnimJoint448: THAnimJointNode;
HAnimSegment449: THAnimSegmentNode;
TouchSensor450: TTouchSensorNode;
Transform451: TTransformNode;
Transform452: TTransformNode;
Shape453: TShapeNode;
Appearance454: TAppearanceNode;
Material455: TMaterialNode;
Sphere456: TSphereNode;
Shape457: TShapeNode;
Appearance458: TAppearanceNode;
Material459: TMaterialNode;
LineProperties460: TLinePropertiesNode;
LineSet461: TLineSetNode;
Coordinate462: TCoordinateNode;
HAnimJoint463: THAnimJointNode;
HAnimSegment464: THAnimSegmentNode;
TouchSensor465: TTouchSensorNode;
Transform466: TTransformNode;
Transform467: TTransformNode;
Shape468: TShapeNode;
Appearance469: TAppearanceNode;
Material470: TMaterialNode;
Sphere471: TSphereNode;
Shape472: TShapeNode;
Appearance473: TAppearanceNode;
Material474: TMaterialNode;
LineProperties475: TLinePropertiesNode;
LineSet476: TLineSetNode;
Coordinate477: TCoordinateNode;
HAnimJoint478: THAnimJointNode;
HAnimSegment479: THAnimSegmentNode;
Group480: TGroupNode;
TouchSensor481: TTouchSensorNode;
Transform482: TTransformNode;
Shape483: TShapeNode;
Appearance484: TAppearanceNode;
Material485: TMaterialNode;
Sphere486: TSphereNode;
Shape487: TShapeNode;
Appearance488: TAppearanceNode;
Material489: TMaterialNode;
LineProperties490: TLinePropertiesNode;
LineSet491: TLineSetNode;
Coordinate492: TCoordinateNode;
HAnimJoint493: THAnimJointNode;
HAnimSegment494: THAnimSegmentNode;
TouchSensor495: TTouchSensorNode;
Transform496: TTransformNode;
Transform497: TTransformNode;
Shape498: TShapeNode;
Appearance499: TAppearanceNode;
Material500: TMaterialNode;
Sphere501: TSphereNode;
Shape502: TShapeNode;
Appearance503: TAppearanceNode;
Material504: TMaterialNode;
LineProperties505: TLinePropertiesNode;
LineSet506: TLineSetNode;
Coordinate507: TCoordinateNode;
HAnimJoint508: THAnimJointNode;
HAnimSegment509: THAnimSegmentNode;
TouchSensor510: TTouchSensorNode;
Transform511: TTransformNode;
Transform512: TTransformNode;
Shape513: TShapeNode;
Appearance514: TAppearanceNode;
Material515: TMaterialNode;
Sphere516: TSphereNode;
Shape517: TShapeNode;
Appearance518: TAppearanceNode;
Material519: TMaterialNode;
LineProperties520: TLinePropertiesNode;
LineSet521: TLineSetNode;
Coordinate522: TCoordinateNode;
HAnimJoint523: THAnimJointNode;
HAnimSegment524: THAnimSegmentNode;
TouchSensor525: TTouchSensorNode;
Transform526: TTransformNode;
Transform527: TTransformNode;
Shape528: TShapeNode;
Appearance529: TAppearanceNode;
Material530: TMaterialNode;
Sphere531: TSphereNode;
Shape532: TShapeNode;
Appearance533: TAppearanceNode;
Material534: TMaterialNode;
LineProperties535: TLinePropertiesNode;
LineSet536: TLineSetNode;
Coordinate537: TCoordinateNode;
Shape538: TShapeNode;
Appearance539: TAppearanceNode;
LineSet540: TLineSetNode;
Coordinate541: TCoordinateNode;
HAnimJoint542: THAnimJointNode;
HAnimSegment543: THAnimSegmentNode;
TouchSensor544: TTouchSensorNode;
Transform545: TTransformNode;
Transform546: TTransformNode;
Shape547: TShapeNode;
Appearance548: TAppearanceNode;
Material549: TMaterialNode;
Sphere550: TSphereNode;
Shape551: TShapeNode;
Appearance552: TAppearanceNode;
Material553: TMaterialNode;
LineProperties554: TLinePropertiesNode;
LineSet555: TLineSetNode;
Coordinate556: TCoordinateNode;
Shape557: TShapeNode;
Appearance558: TAppearanceNode;
LineSet559: TLineSetNode;
Coordinate560: TCoordinateNode;
Shape561: TShapeNode;
Appearance562: TAppearanceNode;
LineSet563: TLineSetNode;
Coordinate564: TCoordinateNode;
HAnimJoint565: THAnimJointNode;
HAnimSegment566: THAnimSegmentNode;
TouchSensor567: TTouchSensorNode;
Transform568: TTransformNode;
Transform569: TTransformNode;
Shape570: TShapeNode;
Appearance571: TAppearanceNode;
Material572: TMaterialNode;
Sphere573: TSphereNode;
Shape574: TShapeNode;
Appearance575: TAppearanceNode;
Material576: TMaterialNode;
LineProperties577: TLinePropertiesNode;
LineSet578: TLineSetNode;
Coordinate579: TCoordinateNode;
HAnimJoint580: THAnimJointNode;
HAnimSegment581: THAnimSegmentNode;
TouchSensor582: TTouchSensorNode;
Transform583: TTransformNode;
Transform584: TTransformNode;
Shape585: TShapeNode;
Appearance586: TAppearanceNode;
Material587: TMaterialNode;
Sphere588: TSphereNode;
Shape589: TShapeNode;
Appearance590: TAppearanceNode;
Material591: TMaterialNode;
LineProperties592: TLinePropertiesNode;
LineSet593: TLineSetNode;
Coordinate594: TCoordinateNode;
HAnimJoint595: THAnimJointNode;
HAnimSegment596: THAnimSegmentNode;
TouchSensor597: TTouchSensorNode;
Transform598: TTransformNode;
Transform599: TTransformNode;
Shape600: TShapeNode;
Appearance601: TAppearanceNode;
Material602: TMaterialNode;
Sphere603: TSphereNode;
Shape604: TShapeNode;
Appearance605: TAppearanceNode;
Material606: TMaterialNode;
LineProperties607: TLinePropertiesNode;
LineSet608: TLineSetNode;
Coordinate609: TCoordinateNode;
HAnimJoint610: THAnimJointNode;
HAnimSegment611: THAnimSegmentNode;
Group612: TGroupNode;
TouchSensor613: TTouchSensorNode;
Transform614: TTransformNode;
Shape615: TShapeNode;
Appearance616: TAppearanceNode;
Material617: TMaterialNode;
Sphere618: TSphereNode;
Shape619: TShapeNode;
Appearance620: TAppearanceNode;
Material621: TMaterialNode;
LineProperties622: TLinePropertiesNode;
LineSet623: TLineSetNode;
Coordinate624: TCoordinateNode;
HAnimJoint625: THAnimJointNode;
HAnimSegment626: THAnimSegmentNode;
TouchSensor627: TTouchSensorNode;
Transform628: TTransformNode;
Transform629: TTransformNode;
Shape630: TShapeNode;
Appearance631: TAppearanceNode;
Material632: TMaterialNode;
Sphere633: TSphereNode;
Shape634: TShapeNode;
Appearance635: TAppearanceNode;
Material636: TMaterialNode;
LineProperties637: TLinePropertiesNode;
LineSet638: TLineSetNode;
Coordinate639: TCoordinateNode;
HAnimJoint640: THAnimJointNode;
HAnimSegment641: THAnimSegmentNode;
TouchSensor642: TTouchSensorNode;
Transform643: TTransformNode;
Transform644: TTransformNode;
Shape645: TShapeNode;
Appearance646: TAppearanceNode;
Material647: TMaterialNode;
Sphere648: TSphereNode;
Shape649: TShapeNode;
Appearance650: TAppearanceNode;
Material651: TMaterialNode;
LineProperties652: TLinePropertiesNode;
LineSet653: TLineSetNode;
Coordinate654: TCoordinateNode;
HAnimJoint655: THAnimJointNode;
HAnimSegment656: THAnimSegmentNode;
TouchSensor657: TTouchSensorNode;
Transform658: TTransformNode;
Transform659: TTransformNode;
Shape660: TShapeNode;
Appearance661: TAppearanceNode;
Material662: TMaterialNode;
Sphere663: TSphereNode;
Shape664: TShapeNode;
Appearance665: TAppearanceNode;
Material666: TMaterialNode;
LineProperties667: TLinePropertiesNode;
LineSet668: TLineSetNode;
Coordinate669: TCoordinateNode;
HAnimJoint670: THAnimJointNode;
HAnimSegment671: THAnimSegmentNode;
TouchSensor672: TTouchSensorNode;
Transform673: TTransformNode;
Transform674: TTransformNode;
Shape675: TShapeNode;
Appearance676: TAppearanceNode;
Material677: TMaterialNode;
Sphere678: TSphereNode;
Shape679: TShapeNode;
Appearance680: TAppearanceNode;
Material681: TMaterialNode;
LineProperties682: TLinePropertiesNode;
LineSet683: TLineSetNode;
Coordinate684: TCoordinateNode;
HAnimJoint685: THAnimJointNode;
HAnimSegment686: THAnimSegmentNode;
Group687: TGroupNode;
TouchSensor688: TTouchSensorNode;
Transform689: TTransformNode;
Shape690: TShapeNode;
Appearance691: TAppearanceNode;
Material692: TMaterialNode;
Sphere693: TSphereNode;
Shape694: TShapeNode;
Appearance695: TAppearanceNode;
Material696: TMaterialNode;
LineProperties697: TLinePropertiesNode;
LineSet698: TLineSetNode;
Coordinate699: TCoordinateNode;
HAnimJoint700: THAnimJointNode;
HAnimSegment701: THAnimSegmentNode;
TouchSensor702: TTouchSensorNode;
Transform703: TTransformNode;
Transform704: TTransformNode;
Shape705: TShapeNode;
Appearance706: TAppearanceNode;
Material707: TMaterialNode;
Sphere708: TSphereNode;
Shape709: TShapeNode;
Appearance710: TAppearanceNode;
Material711: TMaterialNode;
LineProperties712: TLinePropertiesNode;
LineSet713: TLineSetNode;
Coordinate714: TCoordinateNode;
HAnimJoint715: THAnimJointNode;
HAnimSegment716: THAnimSegmentNode;
TouchSensor717: TTouchSensorNode;
Transform718: TTransformNode;
Transform719: TTransformNode;
Shape720: TShapeNode;
Appearance721: TAppearanceNode;
Material722: TMaterialNode;
Sphere723: TSphereNode;
Shape724: TShapeNode;
Appearance725: TAppearanceNode;
Material726: TMaterialNode;
LineProperties727: TLinePropertiesNode;
LineSet728: TLineSetNode;
Coordinate729: TCoordinateNode;
HAnimJoint730: THAnimJointNode;
HAnimSegment731: THAnimSegmentNode;
TouchSensor732: TTouchSensorNode;
Transform733: TTransformNode;
Transform734: TTransformNode;
Shape735: TShapeNode;
Appearance736: TAppearanceNode;
Material737: TMaterialNode;
Sphere738: TSphereNode;
Shape739: TShapeNode;
Appearance740: TAppearanceNode;
Material741: TMaterialNode;
LineProperties742: TLinePropertiesNode;
LineSet743: TLineSetNode;
Coordinate744: TCoordinateNode;
HAnimJoint745: THAnimJointNode;
HAnimSegment746: THAnimSegmentNode;
TouchSensor747: TTouchSensorNode;
Transform748: TTransformNode;
Transform749: TTransformNode;
Shape750: TShapeNode;
Appearance751: TAppearanceNode;
Material752: TMaterialNode;
Sphere753: TSphereNode;
Shape754: TShapeNode;
Appearance755: TAppearanceNode;
Material756: TMaterialNode;
LineProperties757: TLinePropertiesNode;
LineSet758: TLineSetNode;
Coordinate759: TCoordinateNode;
HAnimJoint760: THAnimJointNode;
HAnimSegment761: THAnimSegmentNode;
Group762: TGroupNode;
TouchSensor763: TTouchSensorNode;
Transform764: TTransformNode;
Shape765: TShapeNode;
Appearance766: TAppearanceNode;
Material767: TMaterialNode;
Sphere768: TSphereNode;
Shape769: TShapeNode;
Appearance770: TAppearanceNode;
Material771: TMaterialNode;
LineProperties772: TLinePropertiesNode;
LineSet773: TLineSetNode;
Coordinate774: TCoordinateNode;
HAnimJoint775: THAnimJointNode;
HAnimSegment776: THAnimSegmentNode;
TouchSensor777: TTouchSensorNode;
Transform778: TTransformNode;
Transform779: TTransformNode;
Shape780: TShapeNode;
Appearance781: TAppearanceNode;
Material782: TMaterialNode;
Sphere783: TSphereNode;
Shape784: TShapeNode;
Appearance785: TAppearanceNode;
Material786: TMaterialNode;
LineProperties787: TLinePropertiesNode;
LineSet788: TLineSetNode;
Coordinate789: TCoordinateNode;
HAnimJoint790: THAnimJointNode;
HAnimSegment791: THAnimSegmentNode;
TouchSensor792: TTouchSensorNode;
Transform793: TTransformNode;
Transform794: TTransformNode;
Shape795: TShapeNode;
Appearance796: TAppearanceNode;
Material797: TMaterialNode;
Sphere798: TSphereNode;
Shape799: TShapeNode;
Appearance800: TAppearanceNode;
Material801: TMaterialNode;
LineProperties802: TLinePropertiesNode;
LineSet803: TLineSetNode;
Coordinate804: TCoordinateNode;
Shape805: TShapeNode;
Appearance806: TAppearanceNode;
LineSet807: TLineSetNode;
Coordinate808: TCoordinateNode;
HAnimJoint809: THAnimJointNode;
HAnimSegment810: THAnimSegmentNode;
TouchSensor811: TTouchSensorNode;
Transform812: TTransformNode;
Transform813: TTransformNode;
Shape814: TShapeNode;
Appearance815: TAppearanceNode;
Material816: TMaterialNode;
Sphere817: TSphereNode;
Shape818: TShapeNode;
Appearance819: TAppearanceNode;
Material820: TMaterialNode;
LineProperties821: TLinePropertiesNode;
LineSet822: TLineSetNode;
Coordinate823: TCoordinateNode;
HAnimJoint824: THAnimJointNode;
HAnimSegment825: THAnimSegmentNode;
TouchSensor826: TTouchSensorNode;
Transform827: TTransformNode;
Transform828: TTransformNode;
Shape829: TShapeNode;
Appearance830: TAppearanceNode;
Material831: TMaterialNode;
Sphere832: TSphereNode;
Shape833: TShapeNode;
Appearance834: TAppearanceNode;
Material835: TMaterialNode;
LineProperties836: TLinePropertiesNode;
LineSet837: TLineSetNode;
Coordinate838: TCoordinateNode;
HAnimJoint839: THAnimJointNode;
HAnimSegment840: THAnimSegmentNode;
TouchSensor841: TTouchSensorNode;
Transform842: TTransformNode;
Transform843: TTransformNode;
Shape844: TShapeNode;
Appearance845: TAppearanceNode;
Material846: TMaterialNode;
Sphere847: TSphereNode;
Shape848: TShapeNode;
Appearance849: TAppearanceNode;
Material850: TMaterialNode;
LineProperties851: TLinePropertiesNode;
LineSet852: TLineSetNode;
Coordinate853: TCoordinateNode;
HAnimJoint854: THAnimJointNode;
HAnimSegment855: THAnimSegmentNode;
Group856: TGroupNode;
TouchSensor857: TTouchSensorNode;
Transform858: TTransformNode;
Shape859: TShapeNode;
Appearance860: TAppearanceNode;
Material861: TMaterialNode;
Sphere862: TSphereNode;
Shape863: TShapeNode;
Appearance864: TAppearanceNode;
Material865: TMaterialNode;
LineProperties866: TLinePropertiesNode;
LineSet867: TLineSetNode;
Coordinate868: TCoordinateNode;
HAnimJoint869: THAnimJointNode;
HAnimSegment870: THAnimSegmentNode;
TouchSensor871: TTouchSensorNode;
Transform872: TTransformNode;
Transform873: TTransformNode;
Shape874: TShapeNode;
Appearance875: TAppearanceNode;
Material876: TMaterialNode;
Sphere877: TSphereNode;
Shape878: TShapeNode;
Appearance879: TAppearanceNode;
Material880: TMaterialNode;
LineProperties881: TLinePropertiesNode;
LineSet882: TLineSetNode;
Coordinate883: TCoordinateNode;
HAnimJoint884: THAnimJointNode;
HAnimSegment885: THAnimSegmentNode;
TouchSensor886: TTouchSensorNode;
Transform887: TTransformNode;
Transform888: TTransformNode;
Shape889: TShapeNode;
Appearance890: TAppearanceNode;
Material891: TMaterialNode;
Sphere892: TSphereNode;
Shape893: TShapeNode;
Appearance894: TAppearanceNode;
Material895: TMaterialNode;
LineProperties896: TLinePropertiesNode;
LineSet897: TLineSetNode;
Coordinate898: TCoordinateNode;
HAnimJoint899: THAnimJointNode;
HAnimSegment900: THAnimSegmentNode;
TouchSensor901: TTouchSensorNode;
Transform902: TTransformNode;
Transform903: TTransformNode;
Shape904: TShapeNode;
Appearance905: TAppearanceNode;
Material906: TMaterialNode;
Sphere907: TSphereNode;
Shape908: TShapeNode;
Appearance909: TAppearanceNode;
Material910: TMaterialNode;
LineProperties911: TLinePropertiesNode;
LineSet912: TLineSetNode;
Coordinate913: TCoordinateNode;
HAnimJoint914: THAnimJointNode;
HAnimSegment915: THAnimSegmentNode;
Group916: TGroupNode;
TouchSensor917: TTouchSensorNode;
Transform918: TTransformNode;
Shape919: TShapeNode;
Appearance920: TAppearanceNode;
Material921: TMaterialNode;
Sphere922: TSphereNode;
Shape923: TShapeNode;
Appearance924: TAppearanceNode;
Material925: TMaterialNode;
LineProperties926: TLinePropertiesNode;
LineSet927: TLineSetNode;
Coordinate928: TCoordinateNode;
HAnimJoint929: THAnimJointNode;
HAnimSegment930: THAnimSegmentNode;
TouchSensor931: TTouchSensorNode;
Transform932: TTransformNode;
Transform933: TTransformNode;
Shape934: TShapeNode;
Appearance935: TAppearanceNode;
Material936: TMaterialNode;
Sphere937: TSphereNode;
Shape938: TShapeNode;
Appearance939: TAppearanceNode;
Material940: TMaterialNode;
LineProperties941: TLinePropertiesNode;
LineSet942: TLineSetNode;
Coordinate943: TCoordinateNode;
HAnimJoint944: THAnimJointNode;
HAnimSegment945: THAnimSegmentNode;
TouchSensor946: TTouchSensorNode;
Transform947: TTransformNode;
Transform948: TTransformNode;
Shape949: TShapeNode;
Appearance950: TAppearanceNode;
Material951: TMaterialNode;
Sphere952: TSphereNode;
Shape953: TShapeNode;
Appearance954: TAppearanceNode;
Material955: TMaterialNode;
LineProperties956: TLinePropertiesNode;
LineSet957: TLineSetNode;
Coordinate958: TCoordinateNode;
HAnimJoint959: THAnimJointNode;
HAnimSegment960: THAnimSegmentNode;
TouchSensor961: TTouchSensorNode;
Transform962: TTransformNode;
Transform963: TTransformNode;
Shape964: TShapeNode;
Appearance965: TAppearanceNode;
Material966: TMaterialNode;
Sphere967: TSphereNode;
Shape968: TShapeNode;
Appearance969: TAppearanceNode;
Material970: TMaterialNode;
LineProperties971: TLinePropertiesNode;
LineSet972: TLineSetNode;
Coordinate973: TCoordinateNode;
HAnimJoint974: THAnimJointNode;
HAnimSegment975: THAnimSegmentNode;
TouchSensor976: TTouchSensorNode;
Transform977: TTransformNode;
Transform978: TTransformNode;
Shape979: TShapeNode;
Appearance980: TAppearanceNode;
Material981: TMaterialNode;
Sphere982: TSphereNode;
Shape983: TShapeNode;
Appearance984: TAppearanceNode;
Material985: TMaterialNode;
LineProperties986: TLinePropertiesNode;
LineSet987: TLineSetNode;
Coordinate988: TCoordinateNode;
HAnimJoint989: THAnimJointNode;
HAnimSegment990: THAnimSegmentNode;
TouchSensor991: TTouchSensorNode;
Transform992: TTransformNode;
Transform993: TTransformNode;
Shape994: TShapeNode;
Appearance995: TAppearanceNode;
Material996: TMaterialNode;
Sphere997: TSphereNode;
Shape998: TShapeNode;
Appearance999: TAppearanceNode;
Material1000: TMaterialNode;
LineProperties1001: TLinePropertiesNode;
LineSet1002: TLineSetNode;
Coordinate1003: TCoordinateNode;
HAnimJoint1004: THAnimJointNode;
HAnimSegment1005: THAnimSegmentNode;
TouchSensor1006: TTouchSensorNode;
Transform1007: TTransformNode;
Transform1008: TTransformNode;
Shape1009: TShapeNode;
Appearance1010: TAppearanceNode;
Material1011: TMaterialNode;
Sphere1012: TSphereNode;
Shape1013: TShapeNode;
Appearance1014: TAppearanceNode;
Material1015: TMaterialNode;
LineProperties1016: TLinePropertiesNode;
LineSet1017: TLineSetNode;
Coordinate1018: TCoordinateNode;
HAnimJoint1019: THAnimJointNode;
HAnimSegment1020: THAnimSegmentNode;
TouchSensor1021: TTouchSensorNode;
Transform1022: TTransformNode;
Transform1023: TTransformNode;
Shape1024: TShapeNode;
Appearance1025: TAppearanceNode;
Material1026: TMaterialNode;
Sphere1027: TSphereNode;
Shape1028: TShapeNode;
Appearance1029: TAppearanceNode;
Material1030: TMaterialNode;
LineProperties1031: TLinePropertiesNode;
LineSet1032: TLineSetNode;
Coordinate1033: TCoordinateNode;
HAnimJoint1034: THAnimJointNode;
HAnimSegment1035: THAnimSegmentNode;
TouchSensor1036: TTouchSensorNode;
Transform1037: TTransformNode;
Transform1038: TTransformNode;
Shape1039: TShapeNode;
Appearance1040: TAppearanceNode;
Material1041: TMaterialNode;
Sphere1042: TSphereNode;
Shape1043: TShapeNode;
Appearance1044: TAppearanceNode;
Material1045: TMaterialNode;
LineProperties1046: TLinePropertiesNode;
LineSet1047: TLineSetNode;
Coordinate1048: TCoordinateNode;
HAnimJoint1049: THAnimJointNode;
HAnimSegment1050: THAnimSegmentNode;
TouchSensor1051: TTouchSensorNode;
Transform1052: TTransformNode;
Transform1053: TTransformNode;
Shape1054: TShapeNode;
Appearance1055: TAppearanceNode;
Material1056: TMaterialNode;
Sphere1057: TSphereNode;
Shape1058: TShapeNode;
Appearance1059: TAppearanceNode;
Material1060: TMaterialNode;
LineProperties1061: TLinePropertiesNode;
LineSet1062: TLineSetNode;
Coordinate1063: TCoordinateNode;
HAnimJoint1064: THAnimJointNode;
HAnimSegment1065: THAnimSegmentNode;
TouchSensor1066: TTouchSensorNode;
Transform1067: TTransformNode;
Transform1068: TTransformNode;
Shape1069: TShapeNode;
Appearance1070: TAppearanceNode;
Material1071: TMaterialNode;
Sphere1072: TSphereNode;
Shape1073: TShapeNode;
Appearance1074: TAppearanceNode;
Material1075: TMaterialNode;
LineProperties1076: TLinePropertiesNode;
LineSet1077: TLineSetNode;
Coordinate1078: TCoordinateNode;
HAnimJoint1079: THAnimJointNode;
HAnimSegment1080: THAnimSegmentNode;
TouchSensor1081: TTouchSensorNode;
Transform1082: TTransformNode;
Transform1083: TTransformNode;
Shape1084: TShapeNode;
Appearance1085: TAppearanceNode;
Material1086: TMaterialNode;
Sphere1087: TSphereNode;
Shape1088: TShapeNode;
Appearance1089: TAppearanceNode;
Material1090: TMaterialNode;
LineProperties1091: TLinePropertiesNode;
LineSet1092: TLineSetNode;
Coordinate1093: TCoordinateNode;
HAnimJoint1094: THAnimJointNode;
HAnimSegment1095: THAnimSegmentNode;
TouchSensor1096: TTouchSensorNode;
Transform1097: TTransformNode;
Transform1098: TTransformNode;
Shape1099: TShapeNode;
Appearance1100: TAppearanceNode;
Material1101: TMaterialNode;
Sphere1102: TSphereNode;
Shape1103: TShapeNode;
Appearance1104: TAppearanceNode;
Material1105: TMaterialNode;
LineProperties1106: TLinePropertiesNode;
LineSet1107: TLineSetNode;
Coordinate1108: TCoordinateNode;
HAnimJoint1109: THAnimJointNode;
HAnimSegment1110: THAnimSegmentNode;
TouchSensor1111: TTouchSensorNode;
Transform1112: TTransformNode;
Transform1113: TTransformNode;
Shape1114: TShapeNode;
Appearance1115: TAppearanceNode;
Material1116: TMaterialNode;
Sphere1117: TSphereNode;
Shape1118: TShapeNode;
Appearance1119: TAppearanceNode;
Material1120: TMaterialNode;
LineProperties1121: TLinePropertiesNode;
LineSet1122: TLineSetNode;
Coordinate1123: TCoordinateNode;
HAnimJoint1124: THAnimJointNode;
HAnimSegment1125: THAnimSegmentNode;
TouchSensor1126: TTouchSensorNode;
Transform1127: TTransformNode;
Transform1128: TTransformNode;
Shape1129: TShapeNode;
Appearance1130: TAppearanceNode;
Material1131: TMaterialNode;
Sphere1132: TSphereNode;
Shape1133: TShapeNode;
Appearance1134: TAppearanceNode;
Material1135: TMaterialNode;
LineProperties1136: TLinePropertiesNode;
LineSet1137: TLineSetNode;
Coordinate1138: TCoordinateNode;
HAnimJoint1139: THAnimJointNode;
HAnimSegment1140: THAnimSegmentNode;
TouchSensor1141: TTouchSensorNode;
Transform1142: TTransformNode;
Transform1143: TTransformNode;
Shape1144: TShapeNode;
Appearance1145: TAppearanceNode;
Material1146: TMaterialNode;
Sphere1147: TSphereNode;
Shape1148: TShapeNode;
Appearance1149: TAppearanceNode;
Material1150: TMaterialNode;
LineProperties1151: TLinePropertiesNode;
LineSet1152: TLineSetNode;
Coordinate1153: TCoordinateNode;
HAnimJoint1154: THAnimJointNode;
HAnimSegment1155: THAnimSegmentNode;
TouchSensor1156: TTouchSensorNode;
Transform1157: TTransformNode;
Transform1158: TTransformNode;
Shape1159: TShapeNode;
Appearance1160: TAppearanceNode;
Material1161: TMaterialNode;
Sphere1162: TSphereNode;
Shape1163: TShapeNode;
Appearance1164: TAppearanceNode;
Material1165: TMaterialNode;
LineProperties1166: TLinePropertiesNode;
LineSet1167: TLineSetNode;
Coordinate1168: TCoordinateNode;
HAnimJoint1169: THAnimJointNode;
HAnimSegment1170: THAnimSegmentNode;
TouchSensor1171: TTouchSensorNode;
Transform1172: TTransformNode;
Transform1173: TTransformNode;
Shape1174: TShapeNode;
Appearance1175: TAppearanceNode;
Material1176: TMaterialNode;
Sphere1177: TSphereNode;
Shape1178: TShapeNode;
Appearance1179: TAppearanceNode;
Material1180: TMaterialNode;
LineProperties1181: TLinePropertiesNode;
LineSet1182: TLineSetNode;
Coordinate1183: TCoordinateNode;
Shape1184: TShapeNode;
Appearance1185: TAppearanceNode;
LineSet1186: TLineSetNode;
Coordinate1187: TCoordinateNode;
Shape1188: TShapeNode;
Appearance1189: TAppearanceNode;
LineSet1190: TLineSetNode;
Coordinate1191: TCoordinateNode;
HAnimJoint1192: THAnimJointNode;
HAnimSegment1193: THAnimSegmentNode;
TouchSensor1194: TTouchSensorNode;
Transform1195: TTransformNode;
Transform1196: TTransformNode;
Shape1197: TShapeNode;
Appearance1198: TAppearanceNode;
Material1199: TMaterialNode;
Sphere1200: TSphereNode;
Shape1201: TShapeNode;
Appearance1202: TAppearanceNode;
Material1203: TMaterialNode;
LineProperties1204: TLinePropertiesNode;
LineSet1205: TLineSetNode;
Coordinate1206: TCoordinateNode;
HAnimJoint1207: THAnimJointNode;
HAnimSegment1208: THAnimSegmentNode;
TouchSensor1209: TTouchSensorNode;
Transform1210: TTransformNode;
Transform1211: TTransformNode;
Shape1212: TShapeNode;
Appearance1213: TAppearanceNode;
Material1214: TMaterialNode;
Sphere1215: TSphereNode;
Shape1216: TShapeNode;
Appearance1217: TAppearanceNode;
Material1218: TMaterialNode;
LineProperties1219: TLinePropertiesNode;
LineSet1220: TLineSetNode;
Coordinate1221: TCoordinateNode;
HAnimJoint1222: THAnimJointNode;
HAnimSegment1223: THAnimSegmentNode;
TouchSensor1224: TTouchSensorNode;
Transform1225: TTransformNode;
Transform1226: TTransformNode;
Shape1227: TShapeNode;
Appearance1228: TAppearanceNode;
Material1229: TMaterialNode;
Sphere1230: TSphereNode;
Shape1231: TShapeNode;
Appearance1232: TAppearanceNode;
Material1233: TMaterialNode;
LineProperties1234: TLinePropertiesNode;
LineSet1235: TLineSetNode;
Coordinate1236: TCoordinateNode;
HAnimJoint1237: THAnimJointNode;
HAnimSegment1238: THAnimSegmentNode;
TouchSensor1239: TTouchSensorNode;
Transform1240: TTransformNode;
Transform1241: TTransformNode;
Shape1242: TShapeNode;
Appearance1243: TAppearanceNode;
Material1244: TMaterialNode;
Sphere1245: TSphereNode;
Shape1246: TShapeNode;
Appearance1247: TAppearanceNode;
Material1248: TMaterialNode;
LineProperties1249: TLinePropertiesNode;
LineSet1250: TLineSetNode;
Coordinate1251: TCoordinateNode;
HAnimJoint1252: THAnimJointNode;
HAnimSegment1253: THAnimSegmentNode;
TouchSensor1254: TTouchSensorNode;
Transform1255: TTransformNode;
Transform1256: TTransformNode;
Shape1257: TShapeNode;
Appearance1258: TAppearanceNode;
Material1259: TMaterialNode;
Sphere1260: TSphereNode;
Shape1261: TShapeNode;
Appearance1262: TAppearanceNode;
Material1263: TMaterialNode;
LineProperties1264: TLinePropertiesNode;
LineSet1265: TLineSetNode;
Coordinate1266: TCoordinateNode;
HAnimJoint1267: THAnimJointNode;
HAnimSegment1268: THAnimSegmentNode;
TouchSensor1269: TTouchSensorNode;
Transform1270: TTransformNode;
Transform1271: TTransformNode;
Shape1272: TShapeNode;
Appearance1273: TAppearanceNode;
Material1274: TMaterialNode;
Sphere1275: TSphereNode;
Shape1276: TShapeNode;
Appearance1277: TAppearanceNode;
Material1278: TMaterialNode;
LineProperties1279: TLinePropertiesNode;
LineSet1280: TLineSetNode;
Coordinate1281: TCoordinateNode;
HAnimJoint1282: THAnimJointNode;
HAnimSegment1283: THAnimSegmentNode;
TouchSensor1284: TTouchSensorNode;
Transform1285: TTransformNode;
Transform1286: TTransformNode;
Shape1287: TShapeNode;
Appearance1288: TAppearanceNode;
Material1289: TMaterialNode;
Sphere1290: TSphereNode;
Shape1291: TShapeNode;
Appearance1292: TAppearanceNode;
Material1293: TMaterialNode;
LineProperties1294: TLinePropertiesNode;
LineSet1295: TLineSetNode;
Coordinate1296: TCoordinateNode;
HAnimJoint1297: THAnimJointNode;
HAnimSegment1298: THAnimSegmentNode;
TouchSensor1299: TTouchSensorNode;
Transform1300: TTransformNode;
Transform1301: TTransformNode;
Shape1302: TShapeNode;
Appearance1303: TAppearanceNode;
Material1304: TMaterialNode;
Sphere1305: TSphereNode;
Shape1306: TShapeNode;
Appearance1307: TAppearanceNode;
Material1308: TMaterialNode;
LineProperties1309: TLinePropertiesNode;
LineSet1310: TLineSetNode;
Coordinate1311: TCoordinateNode;
Shape1312: TShapeNode;
Appearance1313: TAppearanceNode;
LineSet1314: TLineSetNode;
Coordinate1315: TCoordinateNode;
Shape1316: TShapeNode;
Appearance1317: TAppearanceNode;
LineSet1318: TLineSetNode;
Coordinate1319: TCoordinateNode;
Shape1320: TShapeNode;
Appearance1321: TAppearanceNode;
LineSet1322: TLineSetNode;
Coordinate1323: TCoordinateNode;
Shape1324: TShapeNode;
Appearance1325: TAppearanceNode;
LineSet1326: TLineSetNode;
Coordinate1327: TCoordinateNode;
Shape1328: TShapeNode;
Appearance1329: TAppearanceNode;
LineSet1330: TLineSetNode;
Coordinate1331: TCoordinateNode;
Shape1332: TShapeNode;
Appearance1333: TAppearanceNode;
LineSet1334: TLineSetNode;
Coordinate1335: TCoordinateNode;
HAnimJoint1336: THAnimJointNode;
HAnimSegment1337: THAnimSegmentNode;
Group1338: TGroupNode;
TouchSensor1339: TTouchSensorNode;
Transform1340: TTransformNode;
Shape1341: TShapeNode;
Appearance1342: TAppearanceNode;
Material1343: TMaterialNode;
Sphere1344: TSphereNode;
Shape1345: TShapeNode;
Appearance1346: TAppearanceNode;
Material1347: TMaterialNode;
LineProperties1348: TLinePropertiesNode;
LineSet1349: TLineSetNode;
Coordinate1350: TCoordinateNode;
HAnimJoint1351: THAnimJointNode;
HAnimSegment1352: THAnimSegmentNode;
Group1353: TGroupNode;
TouchSensor1354: TTouchSensorNode;
Transform1355: TTransformNode;
Shape1356: TShapeNode;
Appearance1357: TAppearanceNode;
Material1358: TMaterialNode;
Sphere1359: TSphereNode;
Shape1360: TShapeNode;
Appearance1361: TAppearanceNode;
Material1362: TMaterialNode;
LineProperties1363: TLinePropertiesNode;
LineSet1364: TLineSetNode;
Coordinate1365: TCoordinateNode;
HAnimJoint1366: THAnimJointNode;
HAnimSegment1367: THAnimSegmentNode;
Group1368: TGroupNode;
TouchSensor1369: TTouchSensorNode;
Transform1370: TTransformNode;
Shape1371: TShapeNode;
Appearance1372: TAppearanceNode;
Material1373: TMaterialNode;
Sphere1374: TSphereNode;
Shape1375: TShapeNode;
Appearance1376: TAppearanceNode;
Material1377: TMaterialNode;
LineProperties1378: TLinePropertiesNode;
LineSet1379: TLineSetNode;
Coordinate1380: TCoordinateNode;
HAnimJoint1381: THAnimJointNode;
HAnimSegment1382: THAnimSegmentNode;
Group1383: TGroupNode;
TouchSensor1384: TTouchSensorNode;
Transform1385: TTransformNode;
Shape1386: TShapeNode;
Appearance1387: TAppearanceNode;
Material1388: TMaterialNode;
Sphere1389: TSphereNode;
Shape1390: TShapeNode;
Appearance1391: TAppearanceNode;
Material1392: TMaterialNode;
LineProperties1393: TLinePropertiesNode;
LineSet1394: TLineSetNode;
Coordinate1395: TCoordinateNode;
HAnimJoint1396: THAnimJointNode;
HAnimSegment1397: THAnimSegmentNode;
Group1398: TGroupNode;
TouchSensor1399: TTouchSensorNode;
Transform1400: TTransformNode;
Shape1401: TShapeNode;
Appearance1402: TAppearanceNode;
Material1403: TMaterialNode;
Sphere1404: TSphereNode;
Shape1405: TShapeNode;
Appearance1406: TAppearanceNode;
Material1407: TMaterialNode;
LineProperties1408: TLinePropertiesNode;
LineSet1409: TLineSetNode;
Coordinate1410: TCoordinateNode;
HAnimJoint1411: THAnimJointNode;
HAnimSegment1412: THAnimSegmentNode;
Group1413: TGroupNode;
TouchSensor1414: TTouchSensorNode;
Transform1415: TTransformNode;
Shape1416: TShapeNode;
Appearance1417: TAppearanceNode;
Material1418: TMaterialNode;
Sphere1419: TSphereNode;
Shape1420: TShapeNode;
Appearance1421: TAppearanceNode;
Material1422: TMaterialNode;
LineProperties1423: TLinePropertiesNode;
LineSet1424: TLineSetNode;
Coordinate1425: TCoordinateNode;
HAnimJoint1426: THAnimJointNode;
HAnimSegment1427: THAnimSegmentNode;
Group1428: TGroupNode;
TouchSensor1429: TTouchSensorNode;
Transform1430: TTransformNode;
Shape1431: TShapeNode;
Appearance1432: TAppearanceNode;
Material1433: TMaterialNode;
Sphere1434: TSphereNode;
Shape1435: TShapeNode;
Appearance1436: TAppearanceNode;
Material1437: TMaterialNode;
LineProperties1438: TLinePropertiesNode;
LineSet1439: TLineSetNode;
Coordinate1440: TCoordinateNode;
HAnimJoint1441: THAnimJointNode;
HAnimSegment1442: THAnimSegmentNode;
TouchSensor1443: TTouchSensorNode;
Transform1444: TTransformNode;
Transform1445: TTransformNode;
Shape1446: TShapeNode;
Appearance1447: TAppearanceNode;
Material1448: TMaterialNode;
Sphere1449: TSphereNode;
Shape1450: TShapeNode;
Appearance1451: TAppearanceNode;
Material1452: TMaterialNode;
LineProperties1453: TLinePropertiesNode;
LineSet1454: TLineSetNode;
Coordinate1455: TCoordinateNode;
HAnimJoint1456: THAnimJointNode;
HAnimSegment1457: THAnimSegmentNode;
TouchSensor1458: TTouchSensorNode;
Transform1459: TTransformNode;
Transform1460: TTransformNode;
Shape1461: TShapeNode;
Appearance1462: TAppearanceNode;
Material1463: TMaterialNode;
Sphere1464: TSphereNode;
Shape1465: TShapeNode;
Appearance1466: TAppearanceNode;
Material1467: TMaterialNode;
LineProperties1468: TLinePropertiesNode;
LineSet1469: TLineSetNode;
Coordinate1470: TCoordinateNode;
HAnimJoint1471: THAnimJointNode;
HAnimSegment1472: THAnimSegmentNode;
TouchSensor1473: TTouchSensorNode;
Transform1474: TTransformNode;
Transform1475: TTransformNode;
Shape1476: TShapeNode;
Appearance1477: TAppearanceNode;
Material1478: TMaterialNode;
Sphere1479: TSphereNode;
Shape1480: TShapeNode;
Appearance1481: TAppearanceNode;
Material1482: TMaterialNode;
LineProperties1483: TLinePropertiesNode;
LineSet1484: TLineSetNode;
Coordinate1485: TCoordinateNode;
HAnimJoint1486: THAnimJointNode;
HAnimSegment1487: THAnimSegmentNode;
TouchSensor1488: TTouchSensorNode;
Transform1489: TTransformNode;
Transform1490: TTransformNode;
Shape1491: TShapeNode;
Appearance1492: TAppearanceNode;
Material1493: TMaterialNode;
Sphere1494: TSphereNode;
Shape1495: TShapeNode;
Appearance1496: TAppearanceNode;
Material1497: TMaterialNode;
LineProperties1498: TLinePropertiesNode;
LineSet1499: TLineSetNode;
Coordinate1500: TCoordinateNode;
HAnimJoint1501: THAnimJointNode;
HAnimSegment1502: THAnimSegmentNode;
TouchSensor1503: TTouchSensorNode;
Transform1504: TTransformNode;
Transform1505: TTransformNode;
Shape1506: TShapeNode;
Appearance1507: TAppearanceNode;
Material1508: TMaterialNode;
Sphere1509: TSphereNode;
Shape1510: TShapeNode;
Appearance1511: TAppearanceNode;
Material1512: TMaterialNode;
LineProperties1513: TLinePropertiesNode;
LineSet1514: TLineSetNode;
Coordinate1515: TCoordinateNode;
Shape1516: TShapeNode;
Appearance1517: TAppearanceNode;
LineSet1518: TLineSetNode;
Coordinate1519: TCoordinateNode;
Shape1520: TShapeNode;
Appearance1521: TAppearanceNode;
LineSet1522: TLineSetNode;
Coordinate1523: TCoordinateNode;
Shape1524: TShapeNode;
Appearance1525: TAppearanceNode;
LineSet1526: TLineSetNode;
Coordinate1527: TCoordinateNode;
HAnimJoint1528: THAnimJointNode;
HAnimSegment1529: THAnimSegmentNode;
TouchSensor1530: TTouchSensorNode;
Transform1531: TTransformNode;
Transform1532: TTransformNode;
Shape1533: TShapeNode;
Appearance1534: TAppearanceNode;
Material1535: TMaterialNode;
Sphere1536: TSphereNode;
Shape1537: TShapeNode;
Appearance1538: TAppearanceNode;
Material1539: TMaterialNode;
LineProperties1540: TLinePropertiesNode;
LineSet1541: TLineSetNode;
Coordinate1542: TCoordinateNode;
HAnimJoint1543: THAnimJointNode;
HAnimSegment1544: THAnimSegmentNode;
TouchSensor1545: TTouchSensorNode;
Transform1546: TTransformNode;
Transform1547: TTransformNode;
Shape1548: TShapeNode;
Appearance1549: TAppearanceNode;
Material1550: TMaterialNode;
Sphere1551: TSphereNode;
Shape1552: TShapeNode;
Appearance1553: TAppearanceNode;
Material1554: TMaterialNode;
LineProperties1555: TLinePropertiesNode;
LineSet1556: TLineSetNode;
Coordinate1557: TCoordinateNode;
HAnimJoint1558: THAnimJointNode;
HAnimSegment1559: THAnimSegmentNode;
TouchSensor1560: TTouchSensorNode;
Transform1561: TTransformNode;
Transform1562: TTransformNode;
Shape1563: TShapeNode;
Appearance1564: TAppearanceNode;
Material1565: TMaterialNode;
Sphere1566: TSphereNode;
Shape1567: TShapeNode;
Appearance1568: TAppearanceNode;
Material1569: TMaterialNode;
LineProperties1570: TLinePropertiesNode;
LineSet1571: TLineSetNode;
Coordinate1572: TCoordinateNode;
HAnimJoint1573: THAnimJointNode;
HAnimSegment1574: THAnimSegmentNode;
Group1575: TGroupNode;
TouchSensor1576: TTouchSensorNode;
Transform1577: TTransformNode;
Shape1578: TShapeNode;
Appearance1579: TAppearanceNode;
Material1580: TMaterialNode;
Sphere1581: TSphereNode;
Shape1582: TShapeNode;
Appearance1583: TAppearanceNode;
Material1584: TMaterialNode;
LineProperties1585: TLinePropertiesNode;
LineSet1586: TLineSetNode;
Coordinate1587: TCoordinateNode;
HAnimJoint1588: THAnimJointNode;
HAnimSegment1589: THAnimSegmentNode;
TouchSensor1590: TTouchSensorNode;
Transform1591: TTransformNode;
Transform1592: TTransformNode;
Shape1593: TShapeNode;
Appearance1594: TAppearanceNode;
Material1595: TMaterialNode;
Sphere1596: TSphereNode;
Shape1597: TShapeNode;
Appearance1598: TAppearanceNode;
Material1599: TMaterialNode;
LineProperties1600: TLinePropertiesNode;
LineSet1601: TLineSetNode;
Coordinate1602: TCoordinateNode;
HAnimJoint1603: THAnimJointNode;
HAnimSegment1604: THAnimSegmentNode;
TouchSensor1605: TTouchSensorNode;
Transform1606: TTransformNode;
Transform1607: TTransformNode;
Shape1608: TShapeNode;
Appearance1609: TAppearanceNode;
Material1610: TMaterialNode;
Sphere1611: TSphereNode;
Shape1612: TShapeNode;
Appearance1613: TAppearanceNode;
Material1614: TMaterialNode;
LineProperties1615: TLinePropertiesNode;
LineSet1616: TLineSetNode;
Coordinate1617: TCoordinateNode;
HAnimJoint1618: THAnimJointNode;
HAnimSegment1619: THAnimSegmentNode;
TouchSensor1620: TTouchSensorNode;
Transform1621: TTransformNode;
Transform1622: TTransformNode;
Shape1623: TShapeNode;
Appearance1624: TAppearanceNode;
Material1625: TMaterialNode;
Sphere1626: TSphereNode;
Shape1627: TShapeNode;
Appearance1628: TAppearanceNode;
Material1629: TMaterialNode;
LineProperties1630: TLinePropertiesNode;
LineSet1631: TLineSetNode;
Coordinate1632: TCoordinateNode;
HAnimJoint1633: THAnimJointNode;
HAnimSegment1634: THAnimSegmentNode;
TouchSensor1635: TTouchSensorNode;
Transform1636: TTransformNode;
Transform1637: TTransformNode;
Shape1638: TShapeNode;
Appearance1639: TAppearanceNode;
Material1640: TMaterialNode;
Sphere1641: TSphereNode;
Shape1642: TShapeNode;
Appearance1643: TAppearanceNode;
Material1644: TMaterialNode;
LineProperties1645: TLinePropertiesNode;
LineSet1646: TLineSetNode;
Coordinate1647: TCoordinateNode;
HAnimJoint1648: THAnimJointNode;
HAnimSegment1649: THAnimSegmentNode;
Group1650: TGroupNode;
TouchSensor1651: TTouchSensorNode;
Transform1652: TTransformNode;
Shape1653: TShapeNode;
Appearance1654: TAppearanceNode;
Material1655: TMaterialNode;
Sphere1656: TSphereNode;
Shape1657: TShapeNode;
Appearance1658: TAppearanceNode;
Material1659: TMaterialNode;
LineProperties1660: TLinePropertiesNode;
LineSet1661: TLineSetNode;
Coordinate1662: TCoordinateNode;
HAnimJoint1663: THAnimJointNode;
HAnimSegment1664: THAnimSegmentNode;
TouchSensor1665: TTouchSensorNode;
Transform1666: TTransformNode;
Transform1667: TTransformNode;
Shape1668: TShapeNode;
Appearance1669: TAppearanceNode;
Material1670: TMaterialNode;
Sphere1671: TSphereNode;
Shape1672: TShapeNode;
Appearance1673: TAppearanceNode;
Material1674: TMaterialNode;
LineProperties1675: TLinePropertiesNode;
LineSet1676: TLineSetNode;
Coordinate1677: TCoordinateNode;
HAnimJoint1678: THAnimJointNode;
HAnimSegment1679: THAnimSegmentNode;
TouchSensor1680: TTouchSensorNode;
Transform1681: TTransformNode;
Transform1682: TTransformNode;
Shape1683: TShapeNode;
Appearance1684: TAppearanceNode;
Material1685: TMaterialNode;
Sphere1686: TSphereNode;
Shape1687: TShapeNode;
Appearance1688: TAppearanceNode;
Material1689: TMaterialNode;
LineProperties1690: TLinePropertiesNode;
LineSet1691: TLineSetNode;
Coordinate1692: TCoordinateNode;
HAnimJoint1693: THAnimJointNode;
HAnimSegment1694: THAnimSegmentNode;
TouchSensor1695: TTouchSensorNode;
Transform1696: TTransformNode;
Transform1697: TTransformNode;
Shape1698: TShapeNode;
Appearance1699: TAppearanceNode;
Material1700: TMaterialNode;
Sphere1701: TSphereNode;
Shape1702: TShapeNode;
Appearance1703: TAppearanceNode;
Material1704: TMaterialNode;
LineProperties1705: TLinePropertiesNode;
LineSet1706: TLineSetNode;
Coordinate1707: TCoordinateNode;
HAnimJoint1708: THAnimJointNode;
HAnimSegment1709: THAnimSegmentNode;
TouchSensor1710: TTouchSensorNode;
Transform1711: TTransformNode;
Transform1712: TTransformNode;
Shape1713: TShapeNode;
Appearance1714: TAppearanceNode;
Material1715: TMaterialNode;
Sphere1716: TSphereNode;
Shape1717: TShapeNode;
Appearance1718: TAppearanceNode;
Material1719: TMaterialNode;
LineProperties1720: TLinePropertiesNode;
LineSet1721: TLineSetNode;
Coordinate1722: TCoordinateNode;
HAnimJoint1723: THAnimJointNode;
HAnimSegment1724: THAnimSegmentNode;
Group1725: TGroupNode;
TouchSensor1726: TTouchSensorNode;
Transform1727: TTransformNode;
Shape1728: TShapeNode;
Appearance1729: TAppearanceNode;
Material1730: TMaterialNode;
Sphere1731: TSphereNode;
Shape1732: TShapeNode;
Appearance1733: TAppearanceNode;
Material1734: TMaterialNode;
LineProperties1735: TLinePropertiesNode;
LineSet1736: TLineSetNode;
Coordinate1737: TCoordinateNode;
HAnimJoint1738: THAnimJointNode;
HAnimSegment1739: THAnimSegmentNode;
TouchSensor1740: TTouchSensorNode;
Transform1741: TTransformNode;
Transform1742: TTransformNode;
Shape1743: TShapeNode;
Appearance1744: TAppearanceNode;
Material1745: TMaterialNode;
Sphere1746: TSphereNode;
Shape1747: TShapeNode;
Appearance1748: TAppearanceNode;
Material1749: TMaterialNode;
LineProperties1750: TLinePropertiesNode;
LineSet1751: TLineSetNode;
Coordinate1752: TCoordinateNode;
Shape1753: TShapeNode;
Appearance1754: TAppearanceNode;
LineSet1755: TLineSetNode;
Coordinate1756: TCoordinateNode;
HAnimJoint1757: THAnimJointNode;
HAnimSegment1758: THAnimSegmentNode;
TouchSensor1759: TTouchSensorNode;
Transform1760: TTransformNode;
Transform1761: TTransformNode;
Shape1762: TShapeNode;
Appearance1763: TAppearanceNode;
Material1764: TMaterialNode;
Sphere1765: TSphereNode;
Shape1766: TShapeNode;
Appearance1767: TAppearanceNode;
Material1768: TMaterialNode;
LineProperties1769: TLinePropertiesNode;
LineSet1770: TLineSetNode;
Coordinate1771: TCoordinateNode;
HAnimJoint1772: THAnimJointNode;
HAnimSegment1773: THAnimSegmentNode;
TouchSensor1774: TTouchSensorNode;
Transform1775: TTransformNode;
Transform1776: TTransformNode;
Shape1777: TShapeNode;
Appearance1778: TAppearanceNode;
Material1779: TMaterialNode;
Sphere1780: TSphereNode;
Shape1781: TShapeNode;
Appearance1782: TAppearanceNode;
Material1783: TMaterialNode;
LineProperties1784: TLinePropertiesNode;
LineSet1785: TLineSetNode;
Coordinate1786: TCoordinateNode;
HAnimJoint1787: THAnimJointNode;
HAnimSegment1788: THAnimSegmentNode;
TouchSensor1789: TTouchSensorNode;
Transform1790: TTransformNode;
Transform1791: TTransformNode;
Shape1792: TShapeNode;
Appearance1793: TAppearanceNode;
Material1794: TMaterialNode;
Sphere1795: TSphereNode;
Shape1796: TShapeNode;
Appearance1797: TAppearanceNode;
Material1798: TMaterialNode;
LineProperties1799: TLinePropertiesNode;
LineSet1800: TLineSetNode;
Coordinate1801: TCoordinateNode;
HAnimJoint1802: THAnimJointNode;
HAnimSegment1803: THAnimSegmentNode;
Group1804: TGroupNode;
TouchSensor1805: TTouchSensorNode;
Transform1806: TTransformNode;
Shape1807: TShapeNode;
Appearance1808: TAppearanceNode;
Material1809: TMaterialNode;
Sphere1810: TSphereNode;
Shape1811: TShapeNode;
Appearance1812: TAppearanceNode;
Material1813: TMaterialNode;
LineProperties1814: TLinePropertiesNode;
LineSet1815: TLineSetNode;
Coordinate1816: TCoordinateNode;
HAnimJoint1817: THAnimJointNode;
HAnimSegment1818: THAnimSegmentNode;
TouchSensor1819: TTouchSensorNode;
Transform1820: TTransformNode;
Transform1821: TTransformNode;
Shape1822: TShapeNode;
Appearance1823: TAppearanceNode;
Material1824: TMaterialNode;
Sphere1825: TSphereNode;
Shape1826: TShapeNode;
Appearance1827: TAppearanceNode;
Material1828: TMaterialNode;
LineProperties1829: TLinePropertiesNode;
LineSet1830: TLineSetNode;
Coordinate1831: TCoordinateNode;
HAnimJoint1832: THAnimJointNode;
HAnimSegment1833: THAnimSegmentNode;
TouchSensor1834: TTouchSensorNode;
Transform1835: TTransformNode;
Transform1836: TTransformNode;
Shape1837: TShapeNode;
Appearance1838: TAppearanceNode;
Material1839: TMaterialNode;
Sphere1840: TSphereNode;
Shape1841: TShapeNode;
Appearance1842: TAppearanceNode;
Material1843: TMaterialNode;
LineProperties1844: TLinePropertiesNode;
LineSet1845: TLineSetNode;
Coordinate1846: TCoordinateNode;
HAnimJoint1847: THAnimJointNode;
HAnimSegment1848: THAnimSegmentNode;
TouchSensor1849: TTouchSensorNode;
Transform1850: TTransformNode;
Transform1851: TTransformNode;
Shape1852: TShapeNode;
Appearance1853: TAppearanceNode;
Material1854: TMaterialNode;
Sphere1855: TSphereNode;
Shape1856: TShapeNode;
Appearance1857: TAppearanceNode;
Material1858: TMaterialNode;
LineProperties1859: TLinePropertiesNode;
LineSet1860: TLineSetNode;
Coordinate1861: TCoordinateNode;
HAnimJoint1862: THAnimJointNode;
HAnimSegment1863: THAnimSegmentNode;
Group1864: TGroupNode;
TouchSensor1865: TTouchSensorNode;
Transform1866: TTransformNode;
Shape1867: TShapeNode;
Appearance1868: TAppearanceNode;
Material1869: TMaterialNode;
Sphere1870: TSphereNode;
Shape1871: TShapeNode;
Appearance1872: TAppearanceNode;
Material1873: TMaterialNode;
LineProperties1874: TLinePropertiesNode;
LineSet1875: TLineSetNode;
Coordinate1876: TCoordinateNode;
HAnimJoint1877: THAnimJointNode;
HAnimSegment1878: THAnimSegmentNode;
TouchSensor1879: TTouchSensorNode;
Transform1880: TTransformNode;
Transform1881: TTransformNode;
Shape1882: TShapeNode;
Appearance1883: TAppearanceNode;
Material1884: TMaterialNode;
Sphere1885: TSphereNode;
Shape1886: TShapeNode;
Appearance1887: TAppearanceNode;
Material1888: TMaterialNode;
LineProperties1889: TLinePropertiesNode;
LineSet1890: TLineSetNode;
Coordinate1891: TCoordinateNode;
HAnimJoint1892: THAnimJointNode;
HAnimSegment1893: THAnimSegmentNode;
TouchSensor1894: TTouchSensorNode;
Transform1895: TTransformNode;
Transform1896: TTransformNode;
Shape1897: TShapeNode;
Appearance1898: TAppearanceNode;
Material1899: TMaterialNode;
Sphere1900: TSphereNode;
Shape1901: TShapeNode;
Appearance1902: TAppearanceNode;
Material1903: TMaterialNode;
LineProperties1904: TLinePropertiesNode;
LineSet1905: TLineSetNode;
Coordinate1906: TCoordinateNode;
HAnimJoint1907: THAnimJointNode;
HAnimSegment1908: THAnimSegmentNode;
TouchSensor1909: TTouchSensorNode;
Transform1910: TTransformNode;
Transform1911: TTransformNode;
Shape1912: TShapeNode;
Appearance1913: TAppearanceNode;
Material1914: TMaterialNode;
Sphere1915: TSphereNode;
Shape1916: TShapeNode;
Appearance1917: TAppearanceNode;
Material1918: TMaterialNode;
LineProperties1919: TLinePropertiesNode;
LineSet1920: TLineSetNode;
Coordinate1921: TCoordinateNode;
HAnimJoint1922: THAnimJointNode;
HAnimSegment1923: THAnimSegmentNode;
TouchSensor1924: TTouchSensorNode;
Transform1925: TTransformNode;
Transform1926: TTransformNode;
Shape1927: TShapeNode;
Appearance1928: TAppearanceNode;
Material1929: TMaterialNode;
Sphere1930: TSphereNode;
Shape1931: TShapeNode;
Appearance1932: TAppearanceNode;
Material1933: TMaterialNode;
LineProperties1934: TLinePropertiesNode;
LineSet1935: TLineSetNode;
Coordinate1936: TCoordinateNode;
HAnimJoint1937: THAnimJointNode;
HAnimSegment1938: THAnimSegmentNode;
TouchSensor1939: TTouchSensorNode;
Transform1940: TTransformNode;
Transform1941: TTransformNode;
Shape1942: TShapeNode;
Appearance1943: TAppearanceNode;
Material1944: TMaterialNode;
Sphere1945: TSphereNode;
Shape1946: TShapeNode;
Appearance1947: TAppearanceNode;
Material1948: TMaterialNode;
LineProperties1949: TLinePropertiesNode;
LineSet1950: TLineSetNode;
Coordinate1951: TCoordinateNode;
Shape1952: TShapeNode;
Appearance1953: TAppearanceNode;
LineSet1954: TLineSetNode;
Coordinate1955: TCoordinateNode;
Shape1956: TShapeNode;
Appearance1957: TAppearanceNode;
LineSet1958: TLineSetNode;
Coordinate1959: TCoordinateNode;
Shape1960: TShapeNode;
Appearance1961: TAppearanceNode;
LineSet1962: TLineSetNode;
Coordinate1963: TCoordinateNode;
HAnimJoint1964: THAnimJointNode;
HAnimSegment1965: THAnimSegmentNode;
TouchSensor1966: TTouchSensorNode;
Transform1967: TTransformNode;
Transform1968: TTransformNode;
Shape1969: TShapeNode;
Appearance1970: TAppearanceNode;
Material1971: TMaterialNode;
Sphere1972: TSphereNode;
Shape1973: TShapeNode;
Appearance1974: TAppearanceNode;
Material1975: TMaterialNode;
LineProperties1976: TLinePropertiesNode;
LineSet1977: TLineSetNode;
Coordinate1978: TCoordinateNode;
HAnimJoint1979: THAnimJointNode;
HAnimSegment1980: THAnimSegmentNode;
TouchSensor1981: TTouchSensorNode;
Transform1982: TTransformNode;
Transform1983: TTransformNode;
Shape1984: TShapeNode;
Appearance1985: TAppearanceNode;
Material1986: TMaterialNode;
Sphere1987: TSphereNode;
Shape1988: TShapeNode;
Appearance1989: TAppearanceNode;
Material1990: TMaterialNode;
LineProperties1991: TLinePropertiesNode;
LineSet1992: TLineSetNode;
Coordinate1993: TCoordinateNode;
HAnimJoint1994: THAnimJointNode;
HAnimSegment1995: THAnimSegmentNode;
TouchSensor1996: TTouchSensorNode;
Transform1997: TTransformNode;
Transform1998: TTransformNode;
Shape1999: TShapeNode;
Appearance2000: TAppearanceNode;
Material2001: TMaterialNode;
Sphere2002: TSphereNode;
Shape2003: TShapeNode;
Appearance2004: TAppearanceNode;
Material2005: TMaterialNode;
LineProperties2006: TLinePropertiesNode;
LineSet2007: TLineSetNode;
Coordinate2008: TCoordinateNode;
HAnimJoint2009: THAnimJointNode;
HAnimSegment2010: THAnimSegmentNode;
Group2011: TGroupNode;
TouchSensor2012: TTouchSensorNode;
Transform2013: TTransformNode;
Shape2014: TShapeNode;
Appearance2015: TAppearanceNode;
Material2016: TMaterialNode;
Sphere2017: TSphereNode;
Shape2018: TShapeNode;
Appearance2019: TAppearanceNode;
Material2020: TMaterialNode;
LineProperties2021: TLinePropertiesNode;
LineSet2022: TLineSetNode;
Coordinate2023: TCoordinateNode;
HAnimJoint2024: THAnimJointNode;
HAnimSegment2025: THAnimSegmentNode;
TouchSensor2026: TTouchSensorNode;
Transform2027: TTransformNode;
Transform2028: TTransformNode;
Shape2029: TShapeNode;
Appearance2030: TAppearanceNode;
Material2031: TMaterialNode;
Sphere2032: TSphereNode;
Shape2033: TShapeNode;
Appearance2034: TAppearanceNode;
Material2035: TMaterialNode;
LineProperties2036: TLinePropertiesNode;
LineSet2037: TLineSetNode;
Coordinate2038: TCoordinateNode;
HAnimJoint2039: THAnimJointNode;
HAnimSegment2040: THAnimSegmentNode;
TouchSensor2041: TTouchSensorNode;
Transform2042: TTransformNode;
Transform2043: TTransformNode;
Shape2044: TShapeNode;
Appearance2045: TAppearanceNode;
Material2046: TMaterialNode;
Sphere2047: TSphereNode;
Shape2048: TShapeNode;
Appearance2049: TAppearanceNode;
Material2050: TMaterialNode;
LineProperties2051: TLinePropertiesNode;
LineSet2052: TLineSetNode;
Coordinate2053: TCoordinateNode;
HAnimJoint2054: THAnimJointNode;
HAnimSegment2055: THAnimSegmentNode;
TouchSensor2056: TTouchSensorNode;
Transform2057: TTransformNode;
Transform2058: TTransformNode;
Shape2059: TShapeNode;
Appearance2060: TAppearanceNode;
Material2061: TMaterialNode;
Sphere2062: TSphereNode;
Shape2063: TShapeNode;
Appearance2064: TAppearanceNode;
Material2065: TMaterialNode;
LineProperties2066: TLinePropertiesNode;
LineSet2067: TLineSetNode;
Coordinate2068: TCoordinateNode;
HAnimJoint2069: THAnimJointNode;
HAnimSegment2070: THAnimSegmentNode;
TouchSensor2071: TTouchSensorNode;
Transform2072: TTransformNode;
Transform2073: TTransformNode;
Shape2074: TShapeNode;
Appearance2075: TAppearanceNode;
Material2076: TMaterialNode;
Sphere2077: TSphereNode;
Shape2078: TShapeNode;
Appearance2079: TAppearanceNode;
Material2080: TMaterialNode;
LineProperties2081: TLinePropertiesNode;
LineSet2082: TLineSetNode;
Coordinate2083: TCoordinateNode;
HAnimJoint2084: THAnimJointNode;
HAnimSegment2085: THAnimSegmentNode;
Group2086: TGroupNode;
TouchSensor2087: TTouchSensorNode;
Transform2088: TTransformNode;
Shape2089: TShapeNode;
Appearance2090: TAppearanceNode;
Material2091: TMaterialNode;
Sphere2092: TSphereNode;
Shape2093: TShapeNode;
Appearance2094: TAppearanceNode;
Material2095: TMaterialNode;
LineProperties2096: TLinePropertiesNode;
LineSet2097: TLineSetNode;
Coordinate2098: TCoordinateNode;
HAnimJoint2099: THAnimJointNode;
HAnimSegment2100: THAnimSegmentNode;
TouchSensor2101: TTouchSensorNode;
Transform2102: TTransformNode;
Transform2103: TTransformNode;
Shape2104: TShapeNode;
Appearance2105: TAppearanceNode;
Material2106: TMaterialNode;
Sphere2107: TSphereNode;
Shape2108: TShapeNode;
Appearance2109: TAppearanceNode;
Material2110: TMaterialNode;
LineProperties2111: TLinePropertiesNode;
LineSet2112: TLineSetNode;
Coordinate2113: TCoordinateNode;
HAnimJoint2114: THAnimJointNode;
HAnimSegment2115: THAnimSegmentNode;
TouchSensor2116: TTouchSensorNode;
Transform2117: TTransformNode;
Transform2118: TTransformNode;
Shape2119: TShapeNode;
Appearance2120: TAppearanceNode;
Material2121: TMaterialNode;
Sphere2122: TSphereNode;
Shape2123: TShapeNode;
Appearance2124: TAppearanceNode;
Material2125: TMaterialNode;
LineProperties2126: TLinePropertiesNode;
LineSet2127: TLineSetNode;
Coordinate2128: TCoordinateNode;
HAnimJoint2129: THAnimJointNode;
HAnimSegment2130: THAnimSegmentNode;
TouchSensor2131: TTouchSensorNode;
Transform2132: TTransformNode;
Transform2133: TTransformNode;
Shape2134: TShapeNode;
Appearance2135: TAppearanceNode;
Material2136: TMaterialNode;
Sphere2137: TSphereNode;
Shape2138: TShapeNode;
Appearance2139: TAppearanceNode;
Material2140: TMaterialNode;
LineProperties2141: TLinePropertiesNode;
LineSet2142: TLineSetNode;
Coordinate2143: TCoordinateNode;
HAnimJoint2144: THAnimJointNode;
HAnimSegment2145: THAnimSegmentNode;
TouchSensor2146: TTouchSensorNode;
Transform2147: TTransformNode;
Transform2148: TTransformNode;
Shape2149: TShapeNode;
Appearance2150: TAppearanceNode;
Material2151: TMaterialNode;
Sphere2152: TSphereNode;
Shape2153: TShapeNode;
Appearance2154: TAppearanceNode;
Material2155: TMaterialNode;
LineProperties2156: TLinePropertiesNode;
LineSet2157: TLineSetNode;
Coordinate2158: TCoordinateNode;
HAnimJoint2159: THAnimJointNode;
HAnimSegment2160: THAnimSegmentNode;
Group2161: TGroupNode;
TouchSensor2162: TTouchSensorNode;
Transform2163: TTransformNode;
Shape2164: TShapeNode;
Appearance2165: TAppearanceNode;
Material2166: TMaterialNode;
Sphere2167: TSphereNode;
Shape2168: TShapeNode;
Appearance2169: TAppearanceNode;
Material2170: TMaterialNode;
LineProperties2171: TLinePropertiesNode;
LineSet2172: TLineSetNode;
Coordinate2173: TCoordinateNode;
HAnimJoint2174: THAnimJointNode;
HAnimSegment2175: THAnimSegmentNode;
TouchSensor2176: TTouchSensorNode;
Transform2177: TTransformNode;
Transform2178: TTransformNode;
Shape2179: TShapeNode;
Appearance2180: TAppearanceNode;
Material2181: TMaterialNode;
Sphere2182: TSphereNode;
Shape2183: TShapeNode;
Appearance2184: TAppearanceNode;
Material2185: TMaterialNode;
LineProperties2186: TLinePropertiesNode;
LineSet2187: TLineSetNode;
Coordinate2188: TCoordinateNode;
Shape2189: TShapeNode;
Appearance2190: TAppearanceNode;
LineSet2191: TLineSetNode;
Coordinate2192: TCoordinateNode;
HAnimJoint2193: THAnimJointNode;
HAnimSegment2194: THAnimSegmentNode;
TouchSensor2195: TTouchSensorNode;
Transform2196: TTransformNode;
Transform2197: TTransformNode;
Shape2198: TShapeNode;
Appearance2199: TAppearanceNode;
Material2200: TMaterialNode;
Sphere2201: TSphereNode;
Shape2202: TShapeNode;
Appearance2203: TAppearanceNode;
Material2204: TMaterialNode;
LineProperties2205: TLinePropertiesNode;
LineSet2206: TLineSetNode;
Coordinate2207: TCoordinateNode;
HAnimJoint2208: THAnimJointNode;
HAnimSegment2209: THAnimSegmentNode;
TouchSensor2210: TTouchSensorNode;
Transform2211: TTransformNode;
Transform2212: TTransformNode;
Shape2213: TShapeNode;
Appearance2214: TAppearanceNode;
Material2215: TMaterialNode;
Sphere2216: TSphereNode;
Shape2217: TShapeNode;
Appearance2218: TAppearanceNode;
Material2219: TMaterialNode;
LineProperties2220: TLinePropertiesNode;
LineSet2221: TLineSetNode;
Coordinate2222: TCoordinateNode;
HAnimJoint2223: THAnimJointNode;
HAnimSegment2224: THAnimSegmentNode;
TouchSensor2225: TTouchSensorNode;
Transform2226: TTransformNode;
Transform2227: TTransformNode;
Shape2228: TShapeNode;
Appearance2229: TAppearanceNode;
Material2230: TMaterialNode;
Sphere2231: TSphereNode;
Shape2232: TShapeNode;
Appearance2233: TAppearanceNode;
Material2234: TMaterialNode;
LineProperties2235: TLinePropertiesNode;
LineSet2236: TLineSetNode;
Coordinate2237: TCoordinateNode;
HAnimJoint2238: THAnimJointNode;
HAnimSegment2239: THAnimSegmentNode;
Group2240: TGroupNode;
TouchSensor2241: TTouchSensorNode;
Transform2242: TTransformNode;
Shape2243: TShapeNode;
Appearance2244: TAppearanceNode;
Material2245: TMaterialNode;
Sphere2246: TSphereNode;
Shape2247: TShapeNode;
Appearance2248: TAppearanceNode;
Material2249: TMaterialNode;
LineProperties2250: TLinePropertiesNode;
LineSet2251: TLineSetNode;
Coordinate2252: TCoordinateNode;
HAnimJoint2253: THAnimJointNode;
HAnimSegment2254: THAnimSegmentNode;
TouchSensor2255: TTouchSensorNode;
Transform2256: TTransformNode;
Transform2257: TTransformNode;
Shape2258: TShapeNode;
Appearance2259: TAppearanceNode;
Material2260: TMaterialNode;
Sphere2261: TSphereNode;
Shape2262: TShapeNode;
Appearance2263: TAppearanceNode;
Material2264: TMaterialNode;
LineProperties2265: TLinePropertiesNode;
LineSet2266: TLineSetNode;
Coordinate2267: TCoordinateNode;
HAnimJoint2268: THAnimJointNode;
HAnimSegment2269: THAnimSegmentNode;
TouchSensor2270: TTouchSensorNode;
Transform2271: TTransformNode;
Transform2272: TTransformNode;
Shape2273: TShapeNode;
Appearance2274: TAppearanceNode;
Material2275: TMaterialNode;
Sphere2276: TSphereNode;
Shape2277: TShapeNode;
Appearance2278: TAppearanceNode;
Material2279: TMaterialNode;
LineProperties2280: TLinePropertiesNode;
LineSet2281: TLineSetNode;
Coordinate2282: TCoordinateNode;
HAnimJoint2283: THAnimJointNode;
HAnimSegment2284: THAnimSegmentNode;
TouchSensor2285: TTouchSensorNode;
Transform2286: TTransformNode;
Transform2287: TTransformNode;
Shape2288: TShapeNode;
Appearance2289: TAppearanceNode;
Material2290: TMaterialNode;
Sphere2291: TSphereNode;
Shape2292: TShapeNode;
Appearance2293: TAppearanceNode;
Material2294: TMaterialNode;
LineProperties2295: TLinePropertiesNode;
LineSet2296: TLineSetNode;
Coordinate2297: TCoordinateNode;
HAnimJoint2298: THAnimJointNode;
HAnimSegment2299: THAnimSegmentNode;
Group2300: TGroupNode;
TouchSensor2301: TTouchSensorNode;
Transform2302: TTransformNode;
Shape2303: TShapeNode;
Appearance2304: TAppearanceNode;
Material2305: TMaterialNode;
Sphere2306: TSphereNode;
Shape2307: TShapeNode;
Appearance2308: TAppearanceNode;
Material2309: TMaterialNode;
LineProperties2310: TLinePropertiesNode;
LineSet2311: TLineSetNode;
Coordinate2312: TCoordinateNode;
HAnimJoint2313: THAnimJointNode;
HAnimJoint2314: THAnimJointNode;
HAnimJoint2315: THAnimJointNode;
HAnimJoint2316: THAnimJointNode;
HAnimJoint2317: THAnimJointNode;
HAnimJoint2318: THAnimJointNode;
HAnimJoint2319: THAnimJointNode;
HAnimJoint2320: THAnimJointNode;
HAnimJoint2321: THAnimJointNode;
HAnimJoint2322: THAnimJointNode;
HAnimJoint2323: THAnimJointNode;
HAnimJoint2324: THAnimJointNode;
HAnimJoint2325: THAnimJointNode;
HAnimJoint2326: THAnimJointNode;
HAnimJoint2327: THAnimJointNode;
HAnimJoint2328: THAnimJointNode;
HAnimJoint2329: THAnimJointNode;
HAnimJoint2330: THAnimJointNode;
HAnimJoint2331: THAnimJointNode;
HAnimJoint2332: THAnimJointNode;
HAnimJoint2333: THAnimJointNode;
HAnimJoint2334: THAnimJointNode;
HAnimJoint2335: THAnimJointNode;
HAnimJoint2336: THAnimJointNode;
HAnimJoint2337: THAnimJointNode;
HAnimJoint2338: THAnimJointNode;
HAnimJoint2339: THAnimJointNode;
HAnimJoint2340: THAnimJointNode;
HAnimJoint2341: THAnimJointNode;
HAnimJoint2342: THAnimJointNode;
HAnimJoint2343: THAnimJointNode;
HAnimJoint2344: THAnimJointNode;
HAnimJoint2345: THAnimJointNode;
HAnimJoint2346: THAnimJointNode;
HAnimJoint2347: THAnimJointNode;
HAnimJoint2348: THAnimJointNode;
HAnimJoint2349: THAnimJointNode;
HAnimJoint2350: THAnimJointNode;
HAnimJoint2351: THAnimJointNode;
HAnimJoint2352: THAnimJointNode;
HAnimJoint2353: THAnimJointNode;
HAnimJoint2354: THAnimJointNode;
HAnimJoint2355: THAnimJointNode;
HAnimJoint2356: THAnimJointNode;
HAnimJoint2357: THAnimJointNode;
HAnimJoint2358: THAnimJointNode;
HAnimJoint2359: THAnimJointNode;
HAnimJoint2360: THAnimJointNode;
HAnimJoint2361: THAnimJointNode;
HAnimJoint2362: THAnimJointNode;
HAnimJoint2363: THAnimJointNode;
HAnimJoint2364: THAnimJointNode;
HAnimJoint2365: THAnimJointNode;
HAnimJoint2366: THAnimJointNode;
HAnimJoint2367: THAnimJointNode;
HAnimJoint2368: THAnimJointNode;
HAnimJoint2369: THAnimJointNode;
HAnimJoint2370: THAnimJointNode;
HAnimJoint2371: THAnimJointNode;
HAnimJoint2372: THAnimJointNode;
HAnimJoint2373: THAnimJointNode;
HAnimJoint2374: THAnimJointNode;
HAnimJoint2375: THAnimJointNode;
HAnimJoint2376: THAnimJointNode;
HAnimJoint2377: THAnimJointNode;
HAnimJoint2378: THAnimJointNode;
HAnimJoint2379: THAnimJointNode;
HAnimJoint2380: THAnimJointNode;
HAnimJoint2381: THAnimJointNode;
HAnimJoint2382: THAnimJointNode;
HAnimJoint2383: THAnimJointNode;
HAnimJoint2384: THAnimJointNode;
HAnimJoint2385: THAnimJointNode;
HAnimJoint2386: THAnimJointNode;
HAnimJoint2387: THAnimJointNode;
HAnimJoint2388: THAnimJointNode;
HAnimJoint2389: THAnimJointNode;
HAnimJoint2390: THAnimJointNode;
HAnimJoint2391: THAnimJointNode;
HAnimJoint2392: THAnimJointNode;
HAnimJoint2393: THAnimJointNode;
HAnimJoint2394: THAnimJointNode;
HAnimJoint2395: THAnimJointNode;
HAnimJoint2396: THAnimJointNode;
HAnimJoint2397: THAnimJointNode;
HAnimJoint2398: THAnimJointNode;
HAnimJoint2399: THAnimJointNode;
HAnimJoint2400: THAnimJointNode;
HAnimJoint2401: THAnimJointNode;
HAnimJoint2402: THAnimJointNode;
HAnimJoint2403: THAnimJointNode;
HAnimJoint2404: THAnimJointNode;
HAnimJoint2405: THAnimJointNode;
HAnimJoint2406: THAnimJointNode;
HAnimJoint2407: THAnimJointNode;
HAnimJoint2408: THAnimJointNode;
HAnimJoint2409: THAnimJointNode;
HAnimJoint2410: THAnimJointNode;
HAnimJoint2411: THAnimJointNode;
HAnimJoint2412: THAnimJointNode;
HAnimJoint2413: THAnimJointNode;
HAnimJoint2414: THAnimJointNode;
HAnimJoint2415: THAnimJointNode;
HAnimJoint2416: THAnimJointNode;
HAnimJoint2417: THAnimJointNode;
HAnimJoint2418: THAnimJointNode;
HAnimJoint2419: THAnimJointNode;
HAnimJoint2420: THAnimJointNode;
HAnimJoint2421: THAnimJointNode;
HAnimJoint2422: THAnimJointNode;
HAnimJoint2423: THAnimJointNode;
HAnimJoint2424: THAnimJointNode;
HAnimJoint2425: THAnimJointNode;
HAnimJoint2426: THAnimJointNode;
HAnimJoint2427: THAnimJointNode;
HAnimJoint2428: THAnimJointNode;
HAnimJoint2429: THAnimJointNode;
HAnimJoint2430: THAnimJointNode;
HAnimJoint2431: THAnimJointNode;
HAnimJoint2432: THAnimJointNode;
HAnimJoint2433: THAnimJointNode;
HAnimJoint2434: THAnimJointNode;
HAnimJoint2435: THAnimJointNode;
HAnimJoint2436: THAnimJointNode;
HAnimJoint2437: THAnimJointNode;
HAnimJoint2438: THAnimJointNode;
HAnimJoint2439: THAnimJointNode;
HAnimJoint2440: THAnimJointNode;
HAnimJoint2441: THAnimJointNode;
HAnimJoint2442: THAnimJointNode;
HAnimJoint2443: THAnimJointNode;
HAnimJoint2444: THAnimJointNode;
HAnimJoint2445: THAnimJointNode;
HAnimJoint2446: THAnimJointNode;
HAnimJoint2447: THAnimJointNode;
HAnimJoint2448: THAnimJointNode;
HAnimJoint2449: THAnimJointNode;
HAnimJoint2450: THAnimJointNode;
HAnimJoint2451: THAnimJointNode;
HAnimJoint2452: THAnimJointNode;
HAnimJoint2453: THAnimJointNode;
HAnimJoint2454: THAnimJointNode;
HAnimJoint2455: THAnimJointNode;
HAnimJoint2456: THAnimJointNode;
HAnimJoint2457: THAnimJointNode;
HAnimJoint2458: THAnimJointNode;
HAnimSegment2459: THAnimSegmentNode;
HAnimSegment2460: THAnimSegmentNode;
HAnimSegment2461: THAnimSegmentNode;
HAnimSegment2462: THAnimSegmentNode;
HAnimSegment2463: THAnimSegmentNode;
HAnimSegment2464: THAnimSegmentNode;
HAnimSegment2465: THAnimSegmentNode;
HAnimSegment2466: THAnimSegmentNode;
HAnimSegment2467: THAnimSegmentNode;
HAnimSegment2468: THAnimSegmentNode;
HAnimSegment2469: THAnimSegmentNode;
HAnimSegment2470: THAnimSegmentNode;
HAnimSegment2471: THAnimSegmentNode;
HAnimSegment2472: THAnimSegmentNode;
HAnimSegment2473: THAnimSegmentNode;
HAnimSegment2474: THAnimSegmentNode;
HAnimSegment2475: THAnimSegmentNode;
HAnimSegment2476: THAnimSegmentNode;
HAnimSegment2477: THAnimSegmentNode;
HAnimSegment2478: THAnimSegmentNode;
HAnimSegment2479: THAnimSegmentNode;
HAnimSegment2480: THAnimSegmentNode;
HAnimSegment2481: THAnimSegmentNode;
HAnimSegment2482: THAnimSegmentNode;
HAnimSegment2483: THAnimSegmentNode;
HAnimSegment2484: THAnimSegmentNode;
HAnimSegment2485: THAnimSegmentNode;
HAnimSegment2486: THAnimSegmentNode;
HAnimSegment2487: THAnimSegmentNode;
HAnimSegment2488: THAnimSegmentNode;
HAnimSegment2489: THAnimSegmentNode;
HAnimSegment2490: THAnimSegmentNode;
HAnimSegment2491: THAnimSegmentNode;
HAnimSegment2492: THAnimSegmentNode;
HAnimSegment2493: THAnimSegmentNode;
HAnimSegment2494: THAnimSegmentNode;
HAnimSegment2495: THAnimSegmentNode;
HAnimSegment2496: THAnimSegmentNode;
HAnimSegment2497: THAnimSegmentNode;
HAnimSegment2498: THAnimSegmentNode;
HAnimSegment2499: THAnimSegmentNode;
HAnimSegment2500: THAnimSegmentNode;
HAnimSegment2501: THAnimSegmentNode;
HAnimSegment2502: THAnimSegmentNode;
HAnimSegment2503: THAnimSegmentNode;
HAnimSegment2504: THAnimSegmentNode;
HAnimSegment2505: THAnimSegmentNode;
HAnimSegment2506: THAnimSegmentNode;
HAnimSegment2507: THAnimSegmentNode;
HAnimSegment2508: THAnimSegmentNode;
HAnimSegment2509: THAnimSegmentNode;
HAnimSegment2510: THAnimSegmentNode;
HAnimSegment2511: THAnimSegmentNode;
HAnimSegment2512: THAnimSegmentNode;
HAnimSegment2513: THAnimSegmentNode;
HAnimSegment2514: THAnimSegmentNode;
HAnimSegment2515: THAnimSegmentNode;
HAnimSegment2516: THAnimSegmentNode;
HAnimSegment2517: THAnimSegmentNode;
HAnimSegment2518: THAnimSegmentNode;
HAnimSegment2519: THAnimSegmentNode;
HAnimSegment2520: THAnimSegmentNode;
HAnimSegment2521: THAnimSegmentNode;
HAnimSegment2522: THAnimSegmentNode;
HAnimSegment2523: THAnimSegmentNode;
HAnimSegment2524: THAnimSegmentNode;
HAnimSegment2525: THAnimSegmentNode;
HAnimSegment2526: THAnimSegmentNode;
HAnimSegment2527: THAnimSegmentNode;
HAnimSegment2528: THAnimSegmentNode;
HAnimSegment2529: THAnimSegmentNode;
HAnimSegment2530: THAnimSegmentNode;
HAnimSegment2531: THAnimSegmentNode;
HAnimSegment2532: THAnimSegmentNode;
HAnimSegment2533: THAnimSegmentNode;
HAnimSegment2534: THAnimSegmentNode;
HAnimSegment2535: THAnimSegmentNode;
HAnimSegment2536: THAnimSegmentNode;
HAnimSegment2537: THAnimSegmentNode;
HAnimSegment2538: THAnimSegmentNode;
HAnimSegment2539: THAnimSegmentNode;
HAnimSegment2540: THAnimSegmentNode;
HAnimSegment2541: THAnimSegmentNode;
HAnimSegment2542: THAnimSegmentNode;
HAnimSegment2543: THAnimSegmentNode;
HAnimSegment2544: THAnimSegmentNode;
HAnimSegment2545: THAnimSegmentNode;
HAnimSegment2546: THAnimSegmentNode;
HAnimSegment2547: THAnimSegmentNode;
HAnimSegment2548: THAnimSegmentNode;
HAnimSegment2549: THAnimSegmentNode;
HAnimSegment2550: THAnimSegmentNode;
HAnimSegment2551: THAnimSegmentNode;
HAnimSegment2552: THAnimSegmentNode;
HAnimSegment2553: THAnimSegmentNode;
HAnimSegment2554: THAnimSegmentNode;
HAnimSegment2555: THAnimSegmentNode;
HAnimSegment2556: THAnimSegmentNode;
HAnimSegment2557: THAnimSegmentNode;
HAnimSegment2558: THAnimSegmentNode;
HAnimSegment2559: THAnimSegmentNode;
HAnimSegment2560: THAnimSegmentNode;
HAnimSegment2561: THAnimSegmentNode;
HAnimSegment2562: THAnimSegmentNode;
HAnimSegment2563: THAnimSegmentNode;
HAnimSegment2564: THAnimSegmentNode;
HAnimSegment2565: THAnimSegmentNode;
HAnimSegment2566: THAnimSegmentNode;
HAnimSegment2567: THAnimSegmentNode;
HAnimSegment2568: THAnimSegmentNode;
HAnimSegment2569: THAnimSegmentNode;
HAnimSegment2570: THAnimSegmentNode;
HAnimSegment2571: THAnimSegmentNode;
HAnimSegment2572: THAnimSegmentNode;
HAnimSegment2573: THAnimSegmentNode;
HAnimSegment2574: THAnimSegmentNode;
HAnimSegment2575: THAnimSegmentNode;
HAnimSegment2576: THAnimSegmentNode;
HAnimSegment2577: THAnimSegmentNode;
HAnimSegment2578: THAnimSegmentNode;
HAnimSegment2579: THAnimSegmentNode;
HAnimSegment2580: THAnimSegmentNode;
HAnimSegment2581: THAnimSegmentNode;
HAnimSegment2582: THAnimSegmentNode;
HAnimSegment2583: THAnimSegmentNode;
HAnimSegment2584: THAnimSegmentNode;
HAnimSegment2585: THAnimSegmentNode;
HAnimSegment2586: THAnimSegmentNode;
HAnimSegment2587: THAnimSegmentNode;
HAnimSegment2588: THAnimSegmentNode;
HAnimSegment2589: THAnimSegmentNode;
HAnimSegment2590: THAnimSegmentNode;
HAnimSegment2591: THAnimSegmentNode;
HAnimSegment2592: THAnimSegmentNode;
HAnimSegment2593: THAnimSegmentNode;
HAnimSegment2594: THAnimSegmentNode;
HAnimSegment2595: THAnimSegmentNode;
HAnimSegment2596: THAnimSegmentNode;
HAnimSegment2597: THAnimSegmentNode;
HAnimSegment2598: THAnimSegmentNode;
HAnimSegment2599: THAnimSegmentNode;
HAnimSegment2600: THAnimSegmentNode;
HAnimSegment2601: THAnimSegmentNode;
HAnimSegment2602: THAnimSegmentNode;
HAnimSegment2603: THAnimSegmentNode;
HAnimSegment2604: THAnimSegmentNode;
Layer2605: TLayerNode;
Background2606: TBackgroundNode;
Transform2607: TTransformNode;
Group2608: TGroupNode;
CylinderSensor2609: TCylinderSensorNode;
Transform2610: TTransformNode;
Transform2611: TTransformNode;
Shape2612: TShapeNode;
Appearance2613: TAppearanceNode;
Material2614: TMaterialNode;
Extrusion2615: TExtrusionNode;
Group2616: TGroupNode;
CylinderSensor2617: TCylinderSensorNode;
Transform2618: TTransformNode;
Transform2619: TTransformNode;
Shape2620: TShapeNode;
Appearance2621: TAppearanceNode;
Material2622: TMaterialNode;
Extrusion2623: TExtrusionNode;
Group2624: TGroupNode;
CylinderSensor2625: TCylinderSensorNode;
Transform2626: TTransformNode;
Transform2627: TTransformNode;
Shape2628: TShapeNode;
Appearance2629: TAppearanceNode;
Material2630: TMaterialNode;
Extrusion2631: TExtrusionNode;
Transform2632: TTransformNode;
Shape2633: TShapeNode;
Appearance2634: TAppearanceNode;
Material2635: TMaterialNode;
Cylinder2636: TCylinderNode;
Transform2637: TTransformNode;
Shape2638: TShapeNode;
Appearance2639: TAppearanceNode;
Material2640: TMaterialNode;
Cylinder2641: TCylinderNode;
Transform2642: TTransformNode;
Shape2643: TShapeNode;
Appearance2644: TAppearanceNode;
Material2645: TMaterialNode;
Cylinder2646: TCylinderNode;
Shape2647: TShapeNode;
Appearance2648: TAppearanceNode;
Material2649: TMaterialNode;
Sphere2650: TSphereNode;
Transform2651: TTransformNode;
Shape2652: TShapeNode;
Appearance2653: TAppearanceNode;
Material2654: TMaterialNode;
Text2655: TTextNode;
FontStyle2656: TFontStyleNode;
Group2657: TGroupNode;
TouchSensor2658: TTouchSensorNode;
Transform2659: TTransformNode;
Shape2660: TShapeNode;
Appearance2661: TAppearanceNode;
Material2662: TMaterialNode;
Box2663: TBoxNode;
Transform2664: TTransformNode;
Shape2665: TShapeNode;
Appearance2666: TAppearanceNode;
Material2667: TMaterialNode;
Text2668: TTextNode;
FontStyle2669: TFontStyleNode;
Group2670: TGroupNode;
TouchSensor2671: TTouchSensorNode;
Transform2672: TTransformNode;
Shape2673: TShapeNode;
Appearance2674: TAppearanceNode;
Material2675: TMaterialNode;
Box2676: TBoxNode;
Transform2677: TTransformNode;
Shape2678: TShapeNode;
Appearance2679: TAppearanceNode;
Material2680: TMaterialNode;
Text2681: TTextNode;
FontStyle2682: TFontStyleNode;
Group2683: TGroupNode;
TouchSensor2684: TTouchSensorNode;
Transform2685: TTransformNode;
Shape2686: TShapeNode;
Appearance2687: TAppearanceNode;
Material2688: TMaterialNode;
Box2689: TBoxNode;
Transform2690: TTransformNode;
Shape2691: TShapeNode;
Appearance2692: TAppearanceNode;
Material2693: TMaterialNode;
Text2694: TTextNode;
FontStyle2695: TFontStyleNode;
Group2696: TGroupNode;
TouchSensor2697: TTouchSensorNode;
Transform2698: TTransformNode;
Shape2699: TShapeNode;
Appearance2700: TAppearanceNode;
Material2701: TMaterialNode;
Box2702: TBoxNode;
Transform2703: TTransformNode;
Shape2704: TShapeNode;
Appearance2705: TAppearanceNode;
Material2706: TMaterialNode;
Text2707: TTextNode;
FontStyle2708: TFontStyleNode;
Group2709: TGroupNode;
TouchSensor2710: TTouchSensorNode;
Transform2711: TTransformNode;
Shape2712: TShapeNode;
Appearance2713: TAppearanceNode;
Material2714: TMaterialNode;
Box2715: TBoxNode;
Transform2716: TTransformNode;
Shape2717: TShapeNode;
Appearance2718: TAppearanceNode;
Material2719: TMaterialNode;
Text2720: TTextNode;
FontStyle2721: TFontStyleNode;
Group2722: TGroupNode;
TouchSensor2723: TTouchSensorNode;
Transform2724: TTransformNode;
Shape2725: TShapeNode;
Appearance2726: TAppearanceNode;
Material2727: TMaterialNode;
Box2728: TBoxNode;
Transform2729: TTransformNode;
Shape2730: TShapeNode;
Appearance2731: TAppearanceNode;
Material2732: TMaterialNode;
Text2733: TTextNode;
FontStyle2734: TFontStyleNode;
Group2735: TGroupNode;
TouchSensor2736: TTouchSensorNode;
Transform2737: TTransformNode;
Shape2738: TShapeNode;
Appearance2739: TAppearanceNode;
Material2740: TMaterialNode;
Box2741: TBoxNode;
Transform2742: TTransformNode;
Shape2743: TShapeNode;
Appearance2744: TAppearanceNode;
Material2745: TMaterialNode;
Text2746: TTextNode;
FontStyle2747: TFontStyleNode;
Group2748: TGroupNode;
TouchSensor2749: TTouchSensorNode;
Transform2750: TTransformNode;
Shape2751: TShapeNode;
Appearance2752: TAppearanceNode;
Material2753: TMaterialNode;
Box2754: TBoxNode;
Transform2755: TTransformNode;
Shape2756: TShapeNode;
Appearance2757: TAppearanceNode;
Material2758: TMaterialNode;
Text2759: TTextNode;
FontStyle2760: TFontStyleNode;
Transform2761: TTransformNode;
Group2762: TGroupNode;
TouchSensor2763: TTouchSensorNode;
Transform2764: TTransformNode;
Shape2765: TShapeNode;
Appearance2766: TAppearanceNode;
Material2767: TMaterialNode;
Box2768: TBoxNode;
Transform2769: TTransformNode;
Shape2770: TShapeNode;
Appearance2771: TAppearanceNode;
Material2772: TMaterialNode;
Text2773: TTextNode;
FontStyle2774: TFontStyleNode;
Group2775: TGroupNode;
TouchSensor2776: TTouchSensorNode;
Transform2777: TTransformNode;
Shape2778: TShapeNode;
Appearance2779: TAppearanceNode;
Material2780: TMaterialNode;
Box2781: TBoxNode;
Transform2782: TTransformNode;
Shape2783: TShapeNode;
Appearance2784: TAppearanceNode;
Material2785: TMaterialNode;
Text2786: TTextNode;
FontStyle2787: TFontStyleNode;
Transform2788: TTransformNode;
Shape2789: TShapeNode;
Appearance2790: TAppearanceNode;
Material2791: TMaterialNode;
Text2792: TTextNode;
FontStyle2793: TFontStyleNode;
Transform2794: TTransformNode;
Transform2795: TTransformNode;
Shape2796: TShapeNode;
Appearance2797: TAppearanceNode;
Material2798: TMaterialNode;
Box2799: TBoxNode;
Transform2800: TTransformNode;
Shape2801: TShapeNode;
Appearance2802: TAppearanceNode;
Material2803: TMaterialNode;
Text2804: TTextNode;
FontStyle2805: TFontStyleNode;
Transform2806: TTransformNode;
Transform2807: TTransformNode;
Shape2808: TShapeNode;
Appearance2809: TAppearanceNode;
Material2810: TMaterialNode;
Text2811: TTextNode;
FontStyle2812: TFontStyleNode;
Transform2813: TTransformNode;
Shape2814: TShapeNode;
Appearance2815: TAppearanceNode;
Material2816: TMaterialNode;
Box2817: TBoxNode;
Transform2818: TTransformNode;
Shape2819: TShapeNode;
Appearance2820: TAppearanceNode;
Material2821: TMaterialNode;
Box2822: TBoxNode;
Transform2823: TTransformNode;
Shape2824: TShapeNode;
Appearance2825: TAppearanceNode;
Material2826: TMaterialNode;
Box2827: TBoxNode;
Group2828: TGroupNode;
PlaneSensor2829: TPlaneSensorNode;
Transform2830: TTransformNode;
Shape2831: TShapeNode;
Appearance2832: TAppearanceNode;
Material2833: TMaterialNode;
Box2834: TBoxNode;
Transform2835: TTransformNode;
Shape2836: TShapeNode;
Appearance2837: TAppearanceNode;
Material2838: TMaterialNode;
Text2839: TTextNode;
FontStyle2840: TFontStyleNode;
Transform2841: TTransformNode;
Shape2842: TShapeNode;
Appearance2843: TAppearanceNode;
Material2844: TMaterialNode;
Text2845: TTextNode;
FontStyle2846: TFontStyleNode;
Transform2847: TTransformNode;
Group2848: TGroupNode;
TouchSensor2849: TTouchSensorNode;
Shape2850: TShapeNode;
Appearance2851: TAppearanceNode;
Material2852: TMaterialNode;
Box2853: TBoxNode;
Transform2854: TTransformNode;
Shape2855: TShapeNode;
Appearance2856: TAppearanceNode;
Material2857: TMaterialNode;
Text2858: TTextNode;
FontStyle2859: TFontStyleNode;
Transform2860: TTransformNode;
Transform2861: TTransformNode;
Shape2862: TShapeNode;
Appearance2863: TAppearanceNode;
Material2864: TMaterialNode;
Text2865: TTextNode;
FontStyle2866: TFontStyleNode;
Transform2867: TTransformNode;
Shape2868: TShapeNode;
Appearance2869: TAppearanceNode;
Material2870: TMaterialNode;
Box2871: TBoxNode;
Transform2872: TTransformNode;
Shape2873: TShapeNode;
Appearance2874: TAppearanceNode;
Material2875: TMaterialNode;
Box2876: TBoxNode;
Transform2877: TTransformNode;
Shape2878: TShapeNode;
Appearance2879: TAppearanceNode;
Material2880: TMaterialNode;
Box2881: TBoxNode;
Group2882: TGroupNode;
PlaneSensor2883: TPlaneSensorNode;
Transform2884: TTransformNode;
Shape2885: TShapeNode;
Appearance2886: TAppearanceNode;
Material2887: TMaterialNode;
Box2888: TBoxNode;
Transform2889: TTransformNode;
Shape2890: TShapeNode;
Appearance2891: TAppearanceNode;
Material2892: TMaterialNode;
Text2893: TTextNode;
FontStyle2894: TFontStyleNode;
Transform2895: TTransformNode;
Shape2896: TShapeNode;
Appearance2897: TAppearanceNode;
Material2898: TMaterialNode;
Text2899: TTextNode;
FontStyle2900: TFontStyleNode;
Transform2901: TTransformNode;
Group2902: TGroupNode;
TouchSensor2903: TTouchSensorNode;
Shape2904: TShapeNode;
Appearance2905: TAppearanceNode;
Material2906: TMaterialNode;
Box2907: TBoxNode;
Transform2908: TTransformNode;
Shape2909: TShapeNode;
Appearance2910: TAppearanceNode;
Material2911: TMaterialNode;
Text2912: TTextNode;
FontStyle2913: TFontStyleNode;
Transform2914: TTransformNode;
Transform2915: TTransformNode;
Shape2916: TShapeNode;
Appearance2917: TAppearanceNode;
Material2918: TMaterialNode;
Text2919: TTextNode;
FontStyle2920: TFontStyleNode;
Transform2921: TTransformNode;
Shape2922: TShapeNode;
Appearance2923: TAppearanceNode;
Material2924: TMaterialNode;
Box2925: TBoxNode;
Transform2926: TTransformNode;
Shape2927: TShapeNode;
Appearance2928: TAppearanceNode;
Material2929: TMaterialNode;
Box2930: TBoxNode;
Transform2931: TTransformNode;
Shape2932: TShapeNode;
Appearance2933: TAppearanceNode;
Material2934: TMaterialNode;
Box2935: TBoxNode;
Group2936: TGroupNode;
PlaneSensor2937: TPlaneSensorNode;
Transform2938: TTransformNode;
Shape2939: TShapeNode;
Appearance2940: TAppearanceNode;
Material2941: TMaterialNode;
Box2942: TBoxNode;
Transform2943: TTransformNode;
Shape2944: TShapeNode;
Appearance2945: TAppearanceNode;
Material2946: TMaterialNode;
Text2947: TTextNode;
FontStyle2948: TFontStyleNode;
Transform2949: TTransformNode;
Shape2950: TShapeNode;
Appearance2951: TAppearanceNode;
Material2952: TMaterialNode;
Text2953: TTextNode;
FontStyle2954: TFontStyleNode;
Transform2955: TTransformNode;
Group2956: TGroupNode;
TouchSensor2957: TTouchSensorNode;
Shape2958: TShapeNode;
Appearance2959: TAppearanceNode;
Material2960: TMaterialNode;
Box2961: TBoxNode;
Transform2962: TTransformNode;
Shape2963: TShapeNode;
Appearance2964: TAppearanceNode;
Material2965: TMaterialNode;
Text2966: TTextNode;
FontStyle2967: TFontStyleNode;
Transform2968: TTransformNode;
Shape2969: TShapeNode;
Appearance2970: TAppearanceNode;
Material2971: TMaterialNode;
Text2972: TTextNode;
FontStyle2973: TFontStyleNode;
Transform2974: TTransformNode;
Shape2975: TShapeNode;
Appearance2976: TAppearanceNode;
Material2977: TMaterialNode;
Box2978: TBoxNode;
Transform2979: TTransformNode;
Shape2980: TShapeNode;
Appearance2981: TAppearanceNode;
Material2982: TMaterialNode;
Text2983: TTextNode;
FontStyle2984: TFontStyleNode;
Transform2985: TTransformNode;
Transform2986: TTransformNode;
Shape2987: TShapeNode;
Appearance2988: TAppearanceNode;
Material2989: TMaterialNode;
Box2990: TBoxNode;
Transform2991: TTransformNode;
Shape2992: TShapeNode;
Appearance2993: TAppearanceNode;
Material2994: TMaterialNode;
Text2995: TTextNode;
FontStyle2996: TFontStyleNode;
Transform2997: TTransformNode;
Transform2998: TTransformNode;
Shape2999: TShapeNode;
Appearance3000: TAppearanceNode;
Material3001: TMaterialNode;
Text3002: TTextNode;
FontStyle3003: TFontStyleNode;
Transform3004: TTransformNode;
Shape3005: TShapeNode;
Appearance3006: TAppearanceNode;
Material3007: TMaterialNode;
Box3008: TBoxNode;
Transform3009: TTransformNode;
Shape3010: TShapeNode;
Appearance3011: TAppearanceNode;
Material3012: TMaterialNode;
Box3013: TBoxNode;
Transform3014: TTransformNode;
Shape3015: TShapeNode;
Appearance3016: TAppearanceNode;
Material3017: TMaterialNode;
Box3018: TBoxNode;
Transform3019: TTransformNode;
Shape3020: TShapeNode;
Appearance3021: TAppearanceNode;
Material3022: TMaterialNode;
Box3023: TBoxNode;
Group3024: TGroupNode;
PlaneSensor3025: TPlaneSensorNode;
Transform3026: TTransformNode;
Shape3027: TShapeNode;
Appearance3028: TAppearanceNode;
Material3029: TMaterialNode;
Box3030: TBoxNode;
Transform3031: TTransformNode;
Shape3032: TShapeNode;
Appearance3033: TAppearanceNode;
Material3034: TMaterialNode;
Text3035: TTextNode;
FontStyle3036: TFontStyleNode;
Transform3037: TTransformNode;
Shape3038: TShapeNode;
Appearance3039: TAppearanceNode;
Material3040: TMaterialNode;
Text3041: TTextNode;
FontStyle3042: TFontStyleNode;
Transform3043: TTransformNode;
Group3044: TGroupNode;
TouchSensor3045: TTouchSensorNode;
Shape3046: TShapeNode;
Appearance3047: TAppearanceNode;
Material3048: TMaterialNode;
Box3049: TBoxNode;
Transform3050: TTransformNode;
Shape3051: TShapeNode;
Appearance3052: TAppearanceNode;
Material3053: TMaterialNode;
Text3054: TTextNode;
FontStyle3055: TFontStyleNode;
Transform3056: TTransformNode;
Transform3057: TTransformNode;
Shape3058: TShapeNode;
Appearance3059: TAppearanceNode;
Material3060: TMaterialNode;
Text3061: TTextNode;
FontStyle3062: TFontStyleNode;
Transform3063: TTransformNode;
Shape3064: TShapeNode;
Appearance3065: TAppearanceNode;
Material3066: TMaterialNode;
Box3067: TBoxNode;
Transform3068: TTransformNode;
Shape3069: TShapeNode;
Appearance3070: TAppearanceNode;
Material3071: TMaterialNode;
Box3072: TBoxNode;
Transform3073: TTransformNode;
Shape3074: TShapeNode;
Appearance3075: TAppearanceNode;
Material3076: TMaterialNode;
Box3077: TBoxNode;
Transform3078: TTransformNode;
Shape3079: TShapeNode;
Appearance3080: TAppearanceNode;
Material3081: TMaterialNode;
Box3082: TBoxNode;
Group3083: TGroupNode;
PlaneSensor3084: TPlaneSensorNode;
Transform3085: TTransformNode;
Shape3086: TShapeNode;
Appearance3087: TAppearanceNode;
Material3088: TMaterialNode;
Box3089: TBoxNode;
Transform3090: TTransformNode;
Shape3091: TShapeNode;
Appearance3092: TAppearanceNode;
Material3093: TMaterialNode;
Text3094: TTextNode;
FontStyle3095: TFontStyleNode;
Transform3096: TTransformNode;
Shape3097: TShapeNode;
Appearance3098: TAppearanceNode;
Material3099: TMaterialNode;
Text3100: TTextNode;
FontStyle3101: TFontStyleNode;
Transform3102: TTransformNode;
Group3103: TGroupNode;
TouchSensor3104: TTouchSensorNode;
Shape3105: TShapeNode;
Appearance3106: TAppearanceNode;
Material3107: TMaterialNode;
Box3108: TBoxNode;
Transform3109: TTransformNode;
Shape3110: TShapeNode;
Appearance3111: TAppearanceNode;
Material3112: TMaterialNode;
Text3113: TTextNode;
FontStyle3114: TFontStyleNode;
Transform3115: TTransformNode;
Transform3116: TTransformNode;
Shape3117: TShapeNode;
Appearance3118: TAppearanceNode;
Material3119: TMaterialNode;
Text3120: TTextNode;
FontStyle3121: TFontStyleNode;
Transform3122: TTransformNode;
Shape3123: TShapeNode;
Appearance3124: TAppearanceNode;
Material3125: TMaterialNode;
Box3126: TBoxNode;
Transform3127: TTransformNode;
Shape3128: TShapeNode;
Appearance3129: TAppearanceNode;
Material3130: TMaterialNode;
Box3131: TBoxNode;
Transform3132: TTransformNode;
Shape3133: TShapeNode;
Appearance3134: TAppearanceNode;
Material3135: TMaterialNode;
Box3136: TBoxNode;
Transform3137: TTransformNode;
Shape3138: TShapeNode;
Appearance3139: TAppearanceNode;
Material3140: TMaterialNode;
Box3141: TBoxNode;
Group3142: TGroupNode;
PlaneSensor3143: TPlaneSensorNode;
Transform3144: TTransformNode;
Shape3145: TShapeNode;
Appearance3146: TAppearanceNode;
Material3147: TMaterialNode;
Box3148: TBoxNode;
Transform3149: TTransformNode;
Shape3150: TShapeNode;
Appearance3151: TAppearanceNode;
Material3152: TMaterialNode;
Text3153: TTextNode;
FontStyle3154: TFontStyleNode;
Transform3155: TTransformNode;
Shape3156: TShapeNode;
Appearance3157: TAppearanceNode;
Material3158: TMaterialNode;
Text3159: TTextNode;
FontStyle3160: TFontStyleNode;
Transform3161: TTransformNode;
Group3162: TGroupNode;
TouchSensor3163: TTouchSensorNode;
Shape3164: TShapeNode;
Appearance3165: TAppearanceNode;
Material3166: TMaterialNode;
Box3167: TBoxNode;
Transform3168: TTransformNode;
Shape3169: TShapeNode;
Appearance3170: TAppearanceNode;
Material3171: TMaterialNode;
Text3172: TTextNode;
FontStyle3173: TFontStyleNode;
Group3174: TGroupNode;
TouchSensor3175: TTouchSensorNode;
Transform3176: TTransformNode;
Shape3177: TShapeNode;
Appearance3178: TAppearanceNode;
Material3179: TMaterialNode;
Box3180: TBoxNode;
Transform3181: TTransformNode;
Shape3182: TShapeNode;
Appearance3183: TAppearanceNode;
Material3184: TMaterialNode;
Text3185: TTextNode;
FontStyle3186: TFontStyleNode;
Transform3187: TTransformNode;
Shape3188: TShapeNode;
Appearance3189: TAppearanceNode;
Material3190: TMaterialNode;
Text3191: TTextNode;
FontStyle3192: TFontStyleNode;
Transform3193: TTransformNode;
Shape3194: TShapeNode;
Appearance3195: TAppearanceNode;
Material3196: TMaterialNode;
Text3197: TTextNode;
FontStyle3198: TFontStyleNode;
Switch3199: TSwitchNode;
Transform3200: TTransformNode;
Transform3201: TTransformNode;
Shape3202: TShapeNode;
Appearance3203: TAppearanceNode;
Material3204: TMaterialNode;
Box3205: TBoxNode;
Transform3206: TTransformNode;
Shape3207: TShapeNode;
Appearance3208: TAppearanceNode;
Material3209: TMaterialNode;
Text3210: TTextNode;
FontStyle3211: TFontStyleNode;
StringSensor3212: TStringSensorNode;
StringSensor3213: TStringSensorNode;
Script3214: TScriptNode;
MFNode3215: TMFNode;
HAnimJoint3216: THAnimJointNode;
HAnimJoint3217: THAnimJointNode;
HAnimJoint3218: THAnimJointNode;
HAnimJoint3219: THAnimJointNode;
HAnimJoint3220: THAnimJointNode;
HAnimJoint3221: THAnimJointNode;
HAnimJoint3222: THAnimJointNode;
HAnimJoint3223: THAnimJointNode;
HAnimJoint3224: THAnimJointNode;
HAnimJoint3225: THAnimJointNode;
HAnimJoint3226: THAnimJointNode;
HAnimJoint3227: THAnimJointNode;
HAnimJoint3228: THAnimJointNode;
HAnimJoint3229: THAnimJointNode;
HAnimJoint3230: THAnimJointNode;
HAnimJoint3231: THAnimJointNode;
HAnimJoint3232: THAnimJointNode;
HAnimJoint3233: THAnimJointNode;
HAnimJoint3234: THAnimJointNode;
HAnimJoint3235: THAnimJointNode;
HAnimJoint3236: THAnimJointNode;
HAnimJoint3237: THAnimJointNode;
HAnimJoint3238: THAnimJointNode;
HAnimJoint3239: THAnimJointNode;
HAnimJoint3240: THAnimJointNode;
HAnimJoint3241: THAnimJointNode;
HAnimJoint3242: THAnimJointNode;
HAnimJoint3243: THAnimJointNode;
HAnimJoint3244: THAnimJointNode;
HAnimJoint3245: THAnimJointNode;
HAnimJoint3246: THAnimJointNode;
HAnimJoint3247: THAnimJointNode;
HAnimJoint3248: THAnimJointNode;
HAnimJoint3249: THAnimJointNode;
HAnimJoint3250: THAnimJointNode;
HAnimJoint3251: THAnimJointNode;
HAnimJoint3252: THAnimJointNode;
HAnimJoint3253: THAnimJointNode;
HAnimJoint3254: THAnimJointNode;
HAnimJoint3255: THAnimJointNode;
HAnimJoint3256: THAnimJointNode;
HAnimJoint3257: THAnimJointNode;
HAnimJoint3258: THAnimJointNode;
HAnimJoint3259: THAnimJointNode;
HAnimJoint3260: THAnimJointNode;
HAnimJoint3261: THAnimJointNode;
HAnimJoint3262: THAnimJointNode;
HAnimJoint3263: THAnimJointNode;
HAnimJoint3264: THAnimJointNode;
HAnimJoint3265: THAnimJointNode;
HAnimJoint3266: THAnimJointNode;
HAnimJoint3267: THAnimJointNode;
HAnimJoint3268: THAnimJointNode;
HAnimJoint3269: THAnimJointNode;
HAnimJoint3270: THAnimJointNode;
HAnimJoint3271: THAnimJointNode;
HAnimJoint3272: THAnimJointNode;
HAnimJoint3273: THAnimJointNode;
HAnimJoint3274: THAnimJointNode;
HAnimJoint3275: THAnimJointNode;
HAnimJoint3276: THAnimJointNode;
HAnimJoint3277: THAnimJointNode;
HAnimJoint3278: THAnimJointNode;
HAnimJoint3279: THAnimJointNode;
HAnimJoint3280: THAnimJointNode;
HAnimJoint3281: THAnimJointNode;
HAnimJoint3282: THAnimJointNode;
HAnimJoint3283: THAnimJointNode;
HAnimJoint3284: THAnimJointNode;
HAnimJoint3285: THAnimJointNode;
HAnimJoint3286: THAnimJointNode;
HAnimJoint3287: THAnimJointNode;
HAnimJoint3288: THAnimJointNode;
HAnimJoint3289: THAnimJointNode;
HAnimJoint3290: THAnimJointNode;
HAnimJoint3291: THAnimJointNode;
HAnimJoint3292: THAnimJointNode;
HAnimJoint3293: THAnimJointNode;
HAnimJoint3294: THAnimJointNode;
HAnimJoint3295: THAnimJointNode;
HAnimJoint3296: THAnimJointNode;
HAnimJoint3297: THAnimJointNode;
HAnimJoint3298: THAnimJointNode;
HAnimJoint3299: THAnimJointNode;
HAnimJoint3300: THAnimJointNode;
HAnimJoint3301: THAnimJointNode;
HAnimJoint3302: THAnimJointNode;
HAnimJoint3303: THAnimJointNode;
HAnimJoint3304: THAnimJointNode;
HAnimJoint3305: THAnimJointNode;
HAnimJoint3306: THAnimJointNode;
HAnimJoint3307: THAnimJointNode;
HAnimJoint3308: THAnimJointNode;
HAnimJoint3309: THAnimJointNode;
HAnimJoint3310: THAnimJointNode;
HAnimJoint3311: THAnimJointNode;
HAnimJoint3312: THAnimJointNode;
HAnimJoint3313: THAnimJointNode;
HAnimJoint3314: THAnimJointNode;
HAnimJoint3315: THAnimJointNode;
HAnimJoint3316: THAnimJointNode;
HAnimJoint3317: THAnimJointNode;
HAnimJoint3318: THAnimJointNode;
HAnimJoint3319: THAnimJointNode;
HAnimJoint3320: THAnimJointNode;
HAnimJoint3321: THAnimJointNode;
HAnimJoint3322: THAnimJointNode;
HAnimJoint3323: THAnimJointNode;
HAnimJoint3324: THAnimJointNode;
HAnimJoint3325: THAnimJointNode;
HAnimJoint3326: THAnimJointNode;
HAnimJoint3327: THAnimJointNode;
HAnimJoint3328: THAnimJointNode;
HAnimJoint3329: THAnimJointNode;
HAnimJoint3330: THAnimJointNode;
HAnimJoint3331: THAnimJointNode;
HAnimJoint3332: THAnimJointNode;
HAnimJoint3333: THAnimJointNode;
HAnimJoint3334: THAnimJointNode;
HAnimJoint3335: THAnimJointNode;
HAnimJoint3336: THAnimJointNode;
HAnimJoint3337: THAnimJointNode;
HAnimJoint3338: THAnimJointNode;
HAnimJoint3339: THAnimJointNode;
HAnimJoint3340: THAnimJointNode;
HAnimJoint3341: THAnimJointNode;
HAnimJoint3342: THAnimJointNode;
HAnimJoint3343: THAnimJointNode;
HAnimJoint3344: THAnimJointNode;
HAnimJoint3345: THAnimJointNode;
HAnimJoint3346: THAnimJointNode;
HAnimJoint3347: THAnimJointNode;
HAnimJoint3348: THAnimJointNode;
HAnimJoint3349: THAnimJointNode;
HAnimJoint3350: THAnimJointNode;
HAnimJoint3351: THAnimJointNode;
HAnimJoint3352: THAnimJointNode;
HAnimJoint3353: THAnimJointNode;
HAnimJoint3354: THAnimJointNode;
HAnimJoint3355: THAnimJointNode;
HAnimJoint3356: THAnimJointNode;
HAnimJoint3357: THAnimJointNode;
HAnimJoint3358: THAnimJointNode;
HAnimJoint3359: THAnimJointNode;
HAnimJoint3360: THAnimJointNode;
HAnimJoint3361: THAnimJointNode;
MFNode3362: TMFNode;
Material3363: TMaterialNode;
Material3364: TMaterialNode;
Material3365: TMaterialNode;
Material3366: TMaterialNode;
Material3367: TMaterialNode;
Material3368: TMaterialNode;
Material3369: TMaterialNode;
Material3370: TMaterialNode;
Material3371: TMaterialNode;
Material3372: TMaterialNode;
Material3373: TMaterialNode;
Material3374: TMaterialNode;
Material3375: TMaterialNode;
Material3376: TMaterialNode;
Material3377: TMaterialNode;
Material3378: TMaterialNode;
Material3379: TMaterialNode;
Material3380: TMaterialNode;
Material3381: TMaterialNode;
Material3382: TMaterialNode;
Material3383: TMaterialNode;
Material3384: TMaterialNode;
Material3385: TMaterialNode;
Material3386: TMaterialNode;
Material3387: TMaterialNode;
Material3388: TMaterialNode;
Material3389: TMaterialNode;
Material3390: TMaterialNode;
Material3391: TMaterialNode;
Material3392: TMaterialNode;
Material3393: TMaterialNode;
Material3394: TMaterialNode;
Material3395: TMaterialNode;
Material3396: TMaterialNode;
Material3397: TMaterialNode;
Material3398: TMaterialNode;
Material3399: TMaterialNode;
Material3400: TMaterialNode;
Material3401: TMaterialNode;
Material3402: TMaterialNode;
Material3403: TMaterialNode;
Material3404: TMaterialNode;
Material3405: TMaterialNode;
Material3406: TMaterialNode;
Material3407: TMaterialNode;
Material3408: TMaterialNode;
Material3409: TMaterialNode;
Material3410: TMaterialNode;
Material3411: TMaterialNode;
Material3412: TMaterialNode;
Material3413: TMaterialNode;
Material3414: TMaterialNode;
Material3415: TMaterialNode;
Material3416: TMaterialNode;
Material3417: TMaterialNode;
Material3418: TMaterialNode;
Material3419: TMaterialNode;
Material3420: TMaterialNode;
Material3421: TMaterialNode;
Material3422: TMaterialNode;
Material3423: TMaterialNode;
Material3424: TMaterialNode;
Material3425: TMaterialNode;
Material3426: TMaterialNode;
Material3427: TMaterialNode;
Material3428: TMaterialNode;
Material3429: TMaterialNode;
Material3430: TMaterialNode;
Material3431: TMaterialNode;
Material3432: TMaterialNode;
Material3433: TMaterialNode;
Material3434: TMaterialNode;
Material3435: TMaterialNode;
Material3436: TMaterialNode;
Material3437: TMaterialNode;
Material3438: TMaterialNode;
Material3439: TMaterialNode;
Material3440: TMaterialNode;
Material3441: TMaterialNode;
Material3442: TMaterialNode;
Material3443: TMaterialNode;
Material3444: TMaterialNode;
Material3445: TMaterialNode;
Material3446: TMaterialNode;
Material3447: TMaterialNode;
Material3448: TMaterialNode;
Material3449: TMaterialNode;
Material3450: TMaterialNode;
Material3451: TMaterialNode;
Material3452: TMaterialNode;
Material3453: TMaterialNode;
Material3454: TMaterialNode;
Material3455: TMaterialNode;
Material3456: TMaterialNode;
Material3457: TMaterialNode;
Material3458: TMaterialNode;
Material3459: TMaterialNode;
Material3460: TMaterialNode;
Material3461: TMaterialNode;
Material3462: TMaterialNode;
Material3463: TMaterialNode;
Material3464: TMaterialNode;
Material3465: TMaterialNode;
Material3466: TMaterialNode;
Material3467: TMaterialNode;
Material3468: TMaterialNode;
Material3469: TMaterialNode;
Material3470: TMaterialNode;
Material3471: TMaterialNode;
Material3472: TMaterialNode;
Material3473: TMaterialNode;
Material3474: TMaterialNode;
Material3475: TMaterialNode;
Material3476: TMaterialNode;
Material3477: TMaterialNode;
Material3478: TMaterialNode;
Material3479: TMaterialNode;
Material3480: TMaterialNode;
Material3481: TMaterialNode;
Material3482: TMaterialNode;
Material3483: TMaterialNode;
Material3484: TMaterialNode;
Material3485: TMaterialNode;
Material3486: TMaterialNode;
Material3487: TMaterialNode;
Material3488: TMaterialNode;
Material3489: TMaterialNode;
Material3490: TMaterialNode;
Material3491: TMaterialNode;
Material3492: TMaterialNode;
Material3493: TMaterialNode;
Material3494: TMaterialNode;
Material3495: TMaterialNode;
Material3496: TMaterialNode;
Material3497: TMaterialNode;
Material3498: TMaterialNode;
Material3499: TMaterialNode;
Material3500: TMaterialNode;
Material3501: TMaterialNode;
Material3502: TMaterialNode;
Material3503: TMaterialNode;
Material3504: TMaterialNode;
Material3505: TMaterialNode;
Material3506: TMaterialNode;
Material3507: TMaterialNode;
Material3508: TMaterialNode;
MFNode3509: TMFNode;
Material3510: TMaterialNode;
Material3511: TMaterialNode;
Material3512: TMaterialNode;
Material3513: TMaterialNode;
Material3514: TMaterialNode;
Material3515: TMaterialNode;
Material3516: TMaterialNode;
Material3517: TMaterialNode;
Material3518: TMaterialNode;
Material3519: TMaterialNode;
Material3520: TMaterialNode;
Material3521: TMaterialNode;
Material3522: TMaterialNode;
Material3523: TMaterialNode;
Material3524: TMaterialNode;
Material3525: TMaterialNode;
Material3526: TMaterialNode;
Material3527: TMaterialNode;
Material3528: TMaterialNode;
Material3529: TMaterialNode;
Material3530: TMaterialNode;
Material3531: TMaterialNode;
Material3532: TMaterialNode;
Material3533: TMaterialNode;
Material3534: TMaterialNode;
Material3535: TMaterialNode;
Material3536: TMaterialNode;
Material3537: TMaterialNode;
Material3538: TMaterialNode;
Material3539: TMaterialNode;
Material3540: TMaterialNode;
Material3541: TMaterialNode;
Material3542: TMaterialNode;
Material3543: TMaterialNode;
Material3544: TMaterialNode;
Material3545: TMaterialNode;
Material3546: TMaterialNode;
Material3547: TMaterialNode;
Material3548: TMaterialNode;
Material3549: TMaterialNode;
Material3550: TMaterialNode;
Material3551: TMaterialNode;
Material3552: TMaterialNode;
Material3553: TMaterialNode;
Material3554: TMaterialNode;
Material3555: TMaterialNode;
Material3556: TMaterialNode;
Material3557: TMaterialNode;
Material3558: TMaterialNode;
Material3559: TMaterialNode;
Material3560: TMaterialNode;
Material3561: TMaterialNode;
Material3562: TMaterialNode;
Material3563: TMaterialNode;
Material3564: TMaterialNode;
Material3565: TMaterialNode;
Material3566: TMaterialNode;
Material3567: TMaterialNode;
Material3568: TMaterialNode;
Material3569: TMaterialNode;
Material3570: TMaterialNode;
Material3571: TMaterialNode;
Material3572: TMaterialNode;
Material3573: TMaterialNode;
Material3574: TMaterialNode;
Material3575: TMaterialNode;
Material3576: TMaterialNode;
Material3577: TMaterialNode;
Material3578: TMaterialNode;
Material3579: TMaterialNode;
Material3580: TMaterialNode;
Material3581: TMaterialNode;
Material3582: TMaterialNode;
Material3583: TMaterialNode;
Material3584: TMaterialNode;
Material3585: TMaterialNode;
Material3586: TMaterialNode;
Material3587: TMaterialNode;
Material3588: TMaterialNode;
Material3589: TMaterialNode;
Material3590: TMaterialNode;
Material3591: TMaterialNode;
Material3592: TMaterialNode;
Material3593: TMaterialNode;
Material3594: TMaterialNode;
Material3595: TMaterialNode;
Material3596: TMaterialNode;
Material3597: TMaterialNode;
Material3598: TMaterialNode;
Material3599: TMaterialNode;
Material3600: TMaterialNode;
Material3601: TMaterialNode;
Material3602: TMaterialNode;
Material3603: TMaterialNode;
Material3604: TMaterialNode;
Material3605: TMaterialNode;
Material3606: TMaterialNode;
Material3607: TMaterialNode;
Material3608: TMaterialNode;
Material3609: TMaterialNode;
Material3610: TMaterialNode;
Material3611: TMaterialNode;
Material3612: TMaterialNode;
Material3613: TMaterialNode;
Material3614: TMaterialNode;
Material3615: TMaterialNode;
Material3616: TMaterialNode;
Material3617: TMaterialNode;
Material3618: TMaterialNode;
Material3619: TMaterialNode;
Material3620: TMaterialNode;
Material3621: TMaterialNode;
Material3622: TMaterialNode;
Material3623: TMaterialNode;
Material3624: TMaterialNode;
Material3625: TMaterialNode;
Material3626: TMaterialNode;
Material3627: TMaterialNode;
Material3628: TMaterialNode;
Material3629: TMaterialNode;
Material3630: TMaterialNode;
Material3631: TMaterialNode;
Material3632: TMaterialNode;
Material3633: TMaterialNode;
Material3634: TMaterialNode;
Material3635: TMaterialNode;
Material3636: TMaterialNode;
Material3637: TMaterialNode;
Material3638: TMaterialNode;
Material3639: TMaterialNode;
Material3640: TMaterialNode;
Material3641: TMaterialNode;
Material3642: TMaterialNode;
Material3643: TMaterialNode;
Material3644: TMaterialNode;
Material3645: TMaterialNode;
Material3646: TMaterialNode;
Material3647: TMaterialNode;
Material3648: TMaterialNode;
Material3649: TMaterialNode;
Material3650: TMaterialNode;
Material3651: TMaterialNode;
Material3652: TMaterialNode;
Material3653: TMaterialNode;
Material3654: TMaterialNode;
Material3655: TMaterialNode;
MFNode3656: TMFNode;
CylinderSensor3657: TCylinderSensorNode;
CylinderSensor3658: TCylinderSensorNode;
CylinderSensor3659: TCylinderSensorNode;
MFNode3660: TMFNode;
Transform3661: TTransformNode;
Transform3662: TTransformNode;
Transform3663: TTransformNode;
MFNode3664: TMFNode;
Material3665: TMaterialNode;
Material3666: TMaterialNode;
Material3667: TMaterialNode;
SFNode3668: TSFNode;
Text3669: TTextNode;
SFNode3670: TSFNode;
HAnimHumanoid3671: THAnimHumanoidNode;
SFNode3672: TSFNode;
Text3673: TTextNode;
MFNode3674: TMFNode;
Transform3675: TTransformNode;
Transform3676: TTransformNode;
Transform3677: TTransformNode;
Transform3678: TTransformNode;
Transform3679: TTransformNode;
Transform3680: TTransformNode;
Transform3681: TTransformNode;
Transform3682: TTransformNode;
Transform3683: TTransformNode;
Transform3684: TTransformNode;
Transform3685: TTransformNode;
Transform3686: TTransformNode;
Transform3687: TTransformNode;
Transform3688: TTransformNode;
Transform3689: TTransformNode;
Transform3690: TTransformNode;
Transform3691: TTransformNode;
Transform3692: TTransformNode;
Transform3693: TTransformNode;
Transform3694: TTransformNode;
Transform3695: TTransformNode;
Transform3696: TTransformNode;
Transform3697: TTransformNode;
Transform3698: TTransformNode;
Transform3699: TTransformNode;
Transform3700: TTransformNode;
Transform3701: TTransformNode;
Transform3702: TTransformNode;
Transform3703: TTransformNode;
Transform3704: TTransformNode;
Transform3705: TTransformNode;
Transform3706: TTransformNode;
Transform3707: TTransformNode;
Transform3708: TTransformNode;
Transform3709: TTransformNode;
Transform3710: TTransformNode;
Transform3711: TTransformNode;
Transform3712: TTransformNode;
Transform3713: TTransformNode;
Transform3714: TTransformNode;
Transform3715: TTransformNode;
Transform3716: TTransformNode;
Transform3717: TTransformNode;
Transform3718: TTransformNode;
Transform3719: TTransformNode;
Transform3720: TTransformNode;
Transform3721: TTransformNode;
Transform3722: TTransformNode;
Transform3723: TTransformNode;
Transform3724: TTransformNode;
Transform3725: TTransformNode;
Transform3726: TTransformNode;
Transform3727: TTransformNode;
Transform3728: TTransformNode;
Transform3729: TTransformNode;
Transform3730: TTransformNode;
Transform3731: TTransformNode;
Transform3732: TTransformNode;
Transform3733: TTransformNode;
Transform3734: TTransformNode;
Transform3735: TTransformNode;
Transform3736: TTransformNode;
Transform3737: TTransformNode;
Transform3738: TTransformNode;
Transform3739: TTransformNode;
Transform3740: TTransformNode;
Transform3741: TTransformNode;
Transform3742: TTransformNode;
Transform3743: TTransformNode;
Transform3744: TTransformNode;
Transform3745: TTransformNode;
Transform3746: TTransformNode;
Transform3747: TTransformNode;
Transform3748: TTransformNode;
Transform3749: TTransformNode;
Transform3750: TTransformNode;
Transform3751: TTransformNode;
Transform3752: TTransformNode;
Transform3753: TTransformNode;
Transform3754: TTransformNode;
Transform3755: TTransformNode;
Transform3756: TTransformNode;
Transform3757: TTransformNode;
Transform3758: TTransformNode;
Transform3759: TTransformNode;
Transform3760: TTransformNode;
Transform3761: TTransformNode;
Transform3762: TTransformNode;
Transform3763: TTransformNode;
Transform3764: TTransformNode;
Transform3765: TTransformNode;
Transform3766: TTransformNode;
Transform3767: TTransformNode;
Transform3768: TTransformNode;
Transform3769: TTransformNode;
Transform3770: TTransformNode;
Transform3771: TTransformNode;
Transform3772: TTransformNode;
Transform3773: TTransformNode;
Transform3774: TTransformNode;
Transform3775: TTransformNode;
Transform3776: TTransformNode;
Transform3777: TTransformNode;
Transform3778: TTransformNode;
Transform3779: TTransformNode;
Transform3780: TTransformNode;
Transform3781: TTransformNode;
Transform3782: TTransformNode;
Transform3783: TTransformNode;
Transform3784: TTransformNode;
Transform3785: TTransformNode;
Transform3786: TTransformNode;
Transform3787: TTransformNode;
Transform3788: TTransformNode;
Transform3789: TTransformNode;
Transform3790: TTransformNode;
Transform3791: TTransformNode;
Transform3792: TTransformNode;
Transform3793: TTransformNode;
Transform3794: TTransformNode;
Transform3795: TTransformNode;
Transform3796: TTransformNode;
Transform3797: TTransformNode;
Transform3798: TTransformNode;
Transform3799: TTransformNode;
Transform3800: TTransformNode;
Transform3801: TTransformNode;
Transform3802: TTransformNode;
Transform3803: TTransformNode;
Transform3804: TTransformNode;
Transform3805: TTransformNode;
Transform3806: TTransformNode;
Transform3807: TTransformNode;
Transform3808: TTransformNode;
Transform3809: TTransformNode;
Transform3810: TTransformNode;
Transform3811: TTransformNode;
Transform3812: TTransformNode;
Transform3813: TTransformNode;
Transform3814: TTransformNode;
Transform3815: TTransformNode;
Transform3816: TTransformNode;
Transform3817: TTransformNode;
Transform3818: TTransformNode;
Transform3819: TTransformNode;
Transform3820: TTransformNode;
MFNode3821: TMFNode;
Coordinate3822: TCoordinateNode;
Coordinate3823: TCoordinateNode;
Coordinate3824: TCoordinateNode;
Coordinate3825: TCoordinateNode;
Coordinate3826: TCoordinateNode;
Coordinate3827: TCoordinateNode;
Coordinate3828: TCoordinateNode;
Coordinate3829: TCoordinateNode;
Coordinate3830: TCoordinateNode;
Coordinate3831: TCoordinateNode;
Coordinate3832: TCoordinateNode;
Coordinate3833: TCoordinateNode;
Coordinate3834: TCoordinateNode;
Coordinate3835: TCoordinateNode;
Coordinate3836: TCoordinateNode;
Coordinate3837: TCoordinateNode;
Coordinate3838: TCoordinateNode;
Coordinate3839: TCoordinateNode;
Coordinate3840: TCoordinateNode;
Coordinate3841: TCoordinateNode;
Coordinate3842: TCoordinateNode;
Coordinate3843: TCoordinateNode;
Coordinate3844: TCoordinateNode;
Coordinate3845: TCoordinateNode;
Coordinate3846: TCoordinateNode;
Coordinate3847: TCoordinateNode;
Coordinate3848: TCoordinateNode;
Coordinate3849: TCoordinateNode;
Coordinate3850: TCoordinateNode;
Coordinate3851: TCoordinateNode;
Coordinate3852: TCoordinateNode;
Coordinate3853: TCoordinateNode;
Coordinate3854: TCoordinateNode;
Coordinate3855: TCoordinateNode;
Coordinate3856: TCoordinateNode;
Coordinate3857: TCoordinateNode;
Coordinate3858: TCoordinateNode;
Coordinate3859: TCoordinateNode;
Coordinate3860: TCoordinateNode;
Coordinate3861: TCoordinateNode;
Coordinate3862: TCoordinateNode;
Coordinate3863: TCoordinateNode;
Coordinate3864: TCoordinateNode;
Coordinate3865: TCoordinateNode;
Coordinate3866: TCoordinateNode;
Coordinate3867: TCoordinateNode;
Coordinate3868: TCoordinateNode;
Coordinate3869: TCoordinateNode;
Coordinate3870: TCoordinateNode;
Coordinate3871: TCoordinateNode;
Coordinate3872: TCoordinateNode;
Coordinate3873: TCoordinateNode;
Coordinate3874: TCoordinateNode;
Coordinate3875: TCoordinateNode;
Coordinate3876: TCoordinateNode;
Coordinate3877: TCoordinateNode;
Coordinate3878: TCoordinateNode;
Coordinate3879: TCoordinateNode;
Coordinate3880: TCoordinateNode;
Coordinate3881: TCoordinateNode;
Coordinate3882: TCoordinateNode;
Coordinate3883: TCoordinateNode;
Coordinate3884: TCoordinateNode;
Coordinate3885: TCoordinateNode;
Coordinate3886: TCoordinateNode;
Coordinate3887: TCoordinateNode;
Coordinate3888: TCoordinateNode;
Coordinate3889: TCoordinateNode;
Coordinate3890: TCoordinateNode;
Coordinate3891: TCoordinateNode;
Coordinate3892: TCoordinateNode;
Coordinate3893: TCoordinateNode;
Coordinate3894: TCoordinateNode;
Coordinate3895: TCoordinateNode;
Coordinate3896: TCoordinateNode;
Coordinate3897: TCoordinateNode;
Coordinate3898: TCoordinateNode;
Coordinate3899: TCoordinateNode;
Coordinate3900: TCoordinateNode;
Coordinate3901: TCoordinateNode;
Coordinate3902: TCoordinateNode;
Coordinate3903: TCoordinateNode;
Coordinate3904: TCoordinateNode;
Coordinate3905: TCoordinateNode;
Coordinate3906: TCoordinateNode;
Coordinate3907: TCoordinateNode;
Coordinate3908: TCoordinateNode;
Coordinate3909: TCoordinateNode;
Coordinate3910: TCoordinateNode;
Coordinate3911: TCoordinateNode;
Coordinate3912: TCoordinateNode;
Coordinate3913: TCoordinateNode;
Coordinate3914: TCoordinateNode;
Coordinate3915: TCoordinateNode;
Coordinate3916: TCoordinateNode;
Coordinate3917: TCoordinateNode;
Coordinate3918: TCoordinateNode;
Coordinate3919: TCoordinateNode;
Coordinate3920: TCoordinateNode;
Coordinate3921: TCoordinateNode;
Coordinate3922: TCoordinateNode;
Coordinate3923: TCoordinateNode;
Coordinate3924: TCoordinateNode;
Coordinate3925: TCoordinateNode;
Coordinate3926: TCoordinateNode;
Coordinate3927: TCoordinateNode;
Coordinate3928: TCoordinateNode;
Coordinate3929: TCoordinateNode;
Coordinate3930: TCoordinateNode;
Coordinate3931: TCoordinateNode;
Coordinate3932: TCoordinateNode;
Coordinate3933: TCoordinateNode;
Coordinate3934: TCoordinateNode;
Coordinate3935: TCoordinateNode;
Coordinate3936: TCoordinateNode;
Coordinate3937: TCoordinateNode;
Coordinate3938: TCoordinateNode;
Coordinate3939: TCoordinateNode;
Coordinate3940: TCoordinateNode;
Coordinate3941: TCoordinateNode;
Coordinate3942: TCoordinateNode;
Coordinate3943: TCoordinateNode;
Coordinate3944: TCoordinateNode;
Coordinate3945: TCoordinateNode;
Coordinate3946: TCoordinateNode;
Coordinate3947: TCoordinateNode;
Coordinate3948: TCoordinateNode;
Coordinate3949: TCoordinateNode;
Coordinate3950: TCoordinateNode;
Coordinate3951: TCoordinateNode;
Coordinate3952: TCoordinateNode;
Coordinate3953: TCoordinateNode;
Coordinate3954: TCoordinateNode;
Coordinate3955: TCoordinateNode;
Coordinate3956: TCoordinateNode;
Coordinate3957: TCoordinateNode;
Coordinate3958: TCoordinateNode;
Coordinate3959: TCoordinateNode;
Coordinate3960: TCoordinateNode;
Coordinate3961: TCoordinateNode;
Coordinate3962: TCoordinateNode;
Coordinate3963: TCoordinateNode;
Coordinate3964: TCoordinateNode;
Coordinate3965: TCoordinateNode;
Coordinate3966: TCoordinateNode;
Coordinate3967: TCoordinateNode;
Coordinate3968: TCoordinateNode;
Coordinate3969: TCoordinateNode;
Coordinate3970: TCoordinateNode;
Coordinate3971: TCoordinateNode;
Coordinate3972: TCoordinateNode;
Coordinate3973: TCoordinateNode;
Coordinate3974: TCoordinateNode;
Coordinate3975: TCoordinateNode;
Coordinate3976: TCoordinateNode;
Coordinate3977: TCoordinateNode;
Coordinate3978: TCoordinateNode;
Coordinate3979: TCoordinateNode;
Coordinate3980: TCoordinateNode;
Coordinate3981: TCoordinateNode;
Coordinate3982: TCoordinateNode;
Coordinate3983: TCoordinateNode;
Coordinate3984: TCoordinateNode;
Coordinate3985: TCoordinateNode;
Coordinate3986: TCoordinateNode;
Coordinate3987: TCoordinateNode;
Coordinate3988: TCoordinateNode;
Coordinate3989: TCoordinateNode;
Coordinate3990: TCoordinateNode;
Coordinate3991: TCoordinateNode;
Coordinate3992: TCoordinateNode;
Coordinate3993: TCoordinateNode;
SFTime3994: TSFTime;
SFTime3995: TSFTime;
SFRotation3996: TSFRotation;
SFRotation3997: TSFRotation;
SFRotation3998: TSFRotation;
SFTime3999: TSFTime;
SFTime4000: TSFTime;
SFTime4001: TSFTime;
SFTime4002: TSFTime;
SFTime4003: TSFTime;
SFTime4004: TSFTime;
SFTime4005: TSFTime;
SFTime4006: TSFTime;
SFTime4007: TSFTime;
SFTime4008: TSFTime;
SFTime4009: TSFTime;
SFTime4010: TSFTime;
SFTime4011: TSFTime;
SFTime4012: TSFTime;
SFTime4013: TSFTime;
SFTime4014: TSFTime;
SFTime4015: TSFTime;
SFTime4016: TSFTime;
SFTime4017: TSFTime;
SFTime4018: TSFTime;
SFTime4019: TSFTime;
SFTime4020: TSFTime;
SFTime4021: TSFTime;
SFTime4022: TSFTime;
SFTime4023: TSFTime;
SFTime4024: TSFTime;
SFTime4025: TSFTime;
SFTime4026: TSFTime;
SFTime4027: TSFTime;
SFTime4028: TSFTime;
SFTime4029: TSFTime;
SFTime4030: TSFTime;
SFTime4031: TSFTime;
SFTime4032: TSFTime;
SFTime4033: TSFTime;
SFTime4034: TSFTime;
SFTime4035: TSFTime;
SFTime4036: TSFTime;
SFTime4037: TSFTime;
SFTime4038: TSFTime;
SFTime4039: TSFTime;
SFTime4040: TSFTime;
SFTime4041: TSFTime;
SFTime4042: TSFTime;
SFTime4043: TSFTime;
SFTime4044: TSFTime;
SFTime4045: TSFTime;
SFTime4046: TSFTime;
SFTime4047: TSFTime;
SFTime4048: TSFTime;
SFTime4049: TSFTime;
SFTime4050: TSFTime;
SFTime4051: TSFTime;
SFTime4052: TSFTime;
SFTime4053: TSFTime;
SFTime4054: TSFTime;
SFTime4055: TSFTime;
SFTime4056: TSFTime;
SFTime4057: TSFTime;
SFTime4058: TSFTime;
SFTime4059: TSFTime;
SFTime4060: TSFTime;
SFTime4061: TSFTime;
SFTime4062: TSFTime;
SFTime4063: TSFTime;
SFTime4064: TSFTime;
SFTime4065: TSFTime;
SFTime4066: TSFTime;
SFTime4067: TSFTime;
SFTime4068: TSFTime;
SFTime4069: TSFTime;
SFTime4070: TSFTime;
SFTime4071: TSFTime;
SFTime4072: TSFTime;
SFTime4073: TSFTime;
SFTime4074: TSFTime;
SFTime4075: TSFTime;
SFTime4076: TSFTime;
SFTime4077: TSFTime;
SFTime4078: TSFTime;
SFTime4079: TSFTime;
SFTime4080: TSFTime;
SFTime4081: TSFTime;
SFTime4082: TSFTime;
SFTime4083: TSFTime;
SFTime4084: TSFTime;
SFTime4085: TSFTime;
SFTime4086: TSFTime;
SFTime4087: TSFTime;
SFTime4088: TSFTime;
SFTime4089: TSFTime;
SFTime4090: TSFTime;
SFTime4091: TSFTime;
SFTime4092: TSFTime;
SFTime4093: TSFTime;
SFTime4094: TSFTime;
SFTime4095: TSFTime;
SFTime4096: TSFTime;
SFTime4097: TSFTime;
SFTime4098: TSFTime;
SFTime4099: TSFTime;
SFTime4100: TSFTime;
SFTime4101: TSFTime;
SFTime4102: TSFTime;
SFTime4103: TSFTime;
SFTime4104: TSFTime;
SFTime4105: TSFTime;
SFTime4106: TSFTime;
SFTime4107: TSFTime;
SFTime4108: TSFTime;
SFTime4109: TSFTime;
SFTime4110: TSFTime;
SFTime4111: TSFTime;
SFTime4112: TSFTime;
SFTime4113: TSFTime;
SFTime4114: TSFTime;
SFTime4115: TSFTime;
SFTime4116: TSFTime;
SFTime4117: TSFTime;
SFTime4118: TSFTime;
SFTime4119: TSFTime;
SFTime4120: TSFTime;
SFTime4121: TSFTime;
SFTime4122: TSFTime;
SFTime4123: TSFTime;
SFTime4124: TSFTime;
SFTime4125: TSFTime;
SFTime4126: TSFTime;
SFTime4127: TSFTime;
SFTime4128: TSFTime;
SFTime4129: TSFTime;
SFTime4130: TSFTime;
SFTime4131: TSFTime;
SFTime4132: TSFTime;
SFTime4133: TSFTime;
SFTime4134: TSFTime;
SFTime4135: TSFTime;
SFTime4136: TSFTime;
SFTime4137: TSFTime;
SFTime4138: TSFTime;
SFTime4139: TSFTime;
SFTime4140: TSFTime;
SFTime4141: TSFTime;
SFTime4142: TSFTime;
SFTime4143: TSFTime;
SFTime4144: TSFTime;
SFTime4145: TSFTime;
SFTime4146: TSFTime;
SFTime4147: TSFTime;
SFTime4148: TSFTime;
SFTime4149: TSFTime;
SFTime4150: TSFTime;
SFTime4151: TSFTime;
SFTime4152: TSFTime;
MFNode4153: TMFNode;
Transform4154: TTransformNode;
Transform4155: TTransformNode;
Transform4156: TTransformNode;
MFNode4157: TMFNode;
PlaneSensor4158: TPlaneSensorNode;
PlaneSensor4159: TPlaneSensorNode;
PlaneSensor4160: TPlaneSensorNode;
MFNode4161: TMFNode;
Material4162: TMaterialNode;
Material4163: TMaterialNode;
Material4164: TMaterialNode;
MFNode4165: TMFNode;
Text4166: TTextNode;
Text4167: TTextNode;
Text4168: TTextNode;
MFNode4169: TMFNode;
Text4170: TTextNode;
Text4171: TTextNode;
Text4172: TTextNode;
MFNode4173: TMFNode;
Text4174: TTextNode;
Text4175: TTextNode;
Text4176: TTextNode;
SFNode4177: TSFNode;
Text4178: TTextNode;
SFVec3f4179: TSFVec3f;
SFTime4180: TSFTime;
SFVec3f4181: TSFVec3f;
SFTime4182: TSFTime;
SFVec3f4183: TSFVec3f;
SFTime4184: TSFTime;
SFString4185: TSFString;
SFString4186: TSFString;
MFNode4187: TMFNode;
Transform4188: TTransformNode;
Transform4189: TTransformNode;
Transform4190: TTransformNode;
MFNode4191: TMFNode;
PlaneSensor4192: TPlaneSensorNode;
PlaneSensor4193: TPlaneSensorNode;
PlaneSensor4194: TPlaneSensorNode;
MFNode4195: TMFNode;
Material4196: TMaterialNode;
Material4197: TMaterialNode;
Material4198: TMaterialNode;
MFNode4199: TMFNode;
Text4200: TTextNode;
Text4201: TTextNode;
Text4202: TTextNode;
SFVec3f4203: TSFVec3f;
SFVec3f4204: TSFVec3f;
SFVec3f4205: TSFVec3f;
SFTime4206: TSFTime;
SFTime4207: TSFTime;
SFTime4208: TSFTime;
SFString4209: TSFString;
SFString4210: TSFString;
SFTime4211: TSFTime;
SFNode4212: TSFNode;
StringSensor4213: TStringSensorNode;
SFNode4214: TSFNode;
StringSensor4215: TStringSensorNode;
SFNode4216: TSFNode;
Text4217: TTextNode;
SFNode4218: TSFNode;
Switch4219: TSwitchNode;
MFNode4220: TMFNode;
Material4221: TMaterialNode;
Material4222: TMaterialNode;
Material4223: TMaterialNode;
Material4224: TMaterialNode;
Material4225: TMaterialNode;
Material4226: TMaterialNode;
Material4227: TMaterialNode;
Material4228: TMaterialNode;
Material4229: TMaterialNode;
Material4230: TMaterialNode;
Material4231: TMaterialNode;
MFNode4232: TMFNode;
Material4233: TMaterialNode;
Material4234: TMaterialNode;
Material4235: TMaterialNode;
Material4236: TMaterialNode;
Material4237: TMaterialNode;
Material4238: TMaterialNode;
SFBool4239: TSFBool;
SFBool4240: TSFBool;
SFBool4241: TSFBool;
SFBool4242: TSFBool;
SFBool4243: TSFBool;
SFBool4244: TSFBool;
SFBool4245: TSFBool;
SFBool4246: TSFBool;
SFBool4247: TSFBool;
SFBool4248: TSFBool;
SFBool4249: TSFBool;
SFBool4250: TSFBool;
SFBool4251: TSFBool;
SFBool4252: TSFBool;
SFBool4253: TSFBool;
SFBool4254: TSFBool;
SFBool4255: TSFBool;
SFBool4256: TSFBool;
SFBool4257: TSFBool;
SFBool4258: TSFBool;
SFBool4259: TSFBool;
SFBool4260: TSFBool;
SFBool4261: TSFBool;
SFBool4262: TSFBool;
SFBool4263: TSFBool;
SFBool4264: TSFBool;
SFBool4265: TSFBool;
SFBool4266: TSFBool;
SFBool4267: TSFBool;
SFBool4268: TSFBool;
SFBool4269: TSFBool;
SFBool4270: TSFBool;
SFBool4271: TSFBool;
SFBool4272: TSFBool;
SFBool4273: TSFBool;
SFBool4274: TSFBool;
SFBool4275: TSFBool;
SFBool4276: TSFBool;
SFBool4277: TSFBool;
SFBool4278: TSFBool;
SFBool4279: TSFBool;
SFBool4280: TSFBool;
SFBool4281: TSFBool;
SFBool4282: TSFBool;
SFBool4283: TSFBool;
SFBool4284: TSFBool;
SFBool4285: TSFBool;
SFBool4286: TSFBool;
SFBool4287: TSFBool;
SFBool4288: TSFBool;
SFBool4289: TSFBool;
SFBool4290: TSFBool;
SFBool4291: TSFBool;
SFBool4292: TSFBool;
SFBool4293: TSFBool;
SFBool4294: TSFBool;
SFBool4295: TSFBool;
SFBool4296: TSFBool;
SFBool4297: TSFBool;
SFBool4298: TSFBool;
SFBool4299: TSFBool;
SFBool4300: TSFBool;
SFBool4301: TSFBool;
SFBool4302: TSFBool;
SFBool4303: TSFBool;
SFBool4304: TSFBool;
SFBool4305: TSFBool;
SFBool4306: TSFBool;
SFBool4307: TSFBool;
SFBool4308: TSFBool;
SFBool4309: TSFBool;
SFBool4310: TSFBool;
SFBool4311: TSFBool;
SFBool4312: TSFBool;
SFBool4313: TSFBool;
SFBool4314: TSFBool;
SFBool4315: TSFBool;
SFBool4316: TSFBool;
SFBool4317: TSFBool;
SFBool4318: TSFBool;
SFBool4319: TSFBool;
SFBool4320: TSFBool;
SFBool4321: TSFBool;
SFBool4322: TSFBool;
SFBool4323: TSFBool;
SFBool4324: TSFBool;
SFBool4325: TSFBool;
SFBool4326: TSFBool;
SFBool4327: TSFBool;
SFBool4328: TSFBool;
SFBool4329: TSFBool;
SFBool4330: TSFBool;
SFBool4331: TSFBool;
SFBool4332: TSFBool;
SFBool4333: TSFBool;
SFBool4334: TSFBool;
SFBool4335: TSFBool;
SFBool4336: TSFBool;
SFBool4337: TSFBool;
SFBool4338: TSFBool;
SFBool4339: TSFBool;
SFBool4340: TSFBool;
SFBool4341: TSFBool;
SFBool4342: TSFBool;
SFBool4343: TSFBool;
SFBool4344: TSFBool;
SFBool4345: TSFBool;
SFBool4346: TSFBool;
SFBool4347: TSFBool;
SFBool4348: TSFBool;
SFBool4349: TSFBool;
SFBool4350: TSFBool;
SFBool4351: TSFBool;
SFBool4352: TSFBool;
SFBool4353: TSFBool;
SFBool4354: TSFBool;
SFBool4355: TSFBool;
SFBool4356: TSFBool;
SFBool4357: TSFBool;
SFBool4358: TSFBool;
SFBool4359: TSFBool;
SFBool4360: TSFBool;
SFBool4361: TSFBool;
SFBool4362: TSFBool;
SFBool4363: TSFBool;
SFBool4364: TSFBool;
SFBool4365: TSFBool;
SFBool4366: TSFBool;
SFBool4367: TSFBool;
SFBool4368: TSFBool;
SFBool4369: TSFBool;
SFBool4370: TSFBool;
SFBool4371: TSFBool;
SFBool4372: TSFBool;
SFBool4373: TSFBool;
SFBool4374: TSFBool;
SFBool4375: TSFBool;
SFBool4376: TSFBool;
SFBool4377: TSFBool;
SFBool4378: TSFBool;
SFBool4379: TSFBool;
SFBool4380: TSFBool;
SFBool4381: TSFBool;
SFBool4382: TSFBool;
SFBool4383: TSFBool;
SFBool4384: TSFBool;
SFBool4385: TSFBool;
SFBool4386: TSFBool;
SFBool4387: TSFBool;
SFBool4388: TSFBool;
SFBool4389: TSFBool;
SFBool4390: TSFBool;
SFBool4391: TSFBool;
SFBool4392: TSFBool;
SFBool4393: TSFBool;
SFBool4394: TSFBool;
SFBool4395: TSFBool;
SFBool4396: TSFBool;
SFBool4397: TSFBool;
SFBool4398: TSFBool;
SFBool4399: TSFBool;
SFBool4400: TSFBool;
SFBool4401: TSFBool;
SFBool4402: TSFBool;
SFBool4403: TSFBool;
SFBool4404: TSFBool;
SFBool4405: TSFBool;
SFBool4406: TSFBool;
SFBool4407: TSFBool;
SFBool4408: TSFBool;
SFBool4409: TSFBool;
SFBool4410: TSFBool;
SFBool4411: TSFBool;
SFBool4412: TSFBool;
SFBool4413: TSFBool;
SFBool4414: TSFBool;
SFBool4415: TSFBool;
SFBool4416: TSFBool;
SFBool4417: TSFBool;
SFBool4418: TSFBool;
SFBool4419: TSFBool;

procedure InitHAnimGimbalJointController22Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Shape'] := 2;
{ METHOD .Component }
X3D0.Components['Layering'] := 1;
{ METHOD .Component }
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'HAnimGimbalJointController22.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Humanoid with unique selectable material per joint, depth-first and hierarchy traversal, and gimbal controller aligned to HAnim Hierarchy.txt. Accessibility: hover (isOver) sounds, per-axis slider tones, spoken announcements, caption line, and keyboard joint/rotate/translate modes (press H).';
{ METHOD .Meta }
X3D0.Meta['accessibility'] := 'Keyboard modes J (joint), R (rotate), T (translate); H help; I status; M sound toggle; V speech toggle. Axis earcons: X low tone 1 pulse, Y mid tone 2 pulses, Z high tone 3 pulses.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://github.com/coderextreme/X3DJSONLD/gltf/HAnimGimbalJointController.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Claude.ai https://claude.ai/';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'ChatGPT https://chatgpt.com/';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Gemini Flash https://ai.dev/';
{ METHOD .Meta }
{ METHOD .Head }
Group12 := TGroupNode.Create;
NavigationInfo13 := TNavigationInfoNode.Create;
NavigationInfo13.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group12.FdChildren.Add(NavigationInfo13);
LayerSet14 := TLayerSetNode.Create;
LayerSet14.ActiveLayer := 1;
LayerSet14.SetOrder([2,1]);
Layer15 := TLayerNode.Create;
Layer15.Pickable := True;
Layer15.SetObjectType(['ALL']);
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Description := 'Front (wide)';
Viewpoint16.Position := Vector3(-0.3,1.3,7);
{ METHOD .FdChildren.Add }
Layer15.FdChildren.Add(Viewpoint16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Front (close)';
Viewpoint17.Position := Vector3(0.9,1.1,5.8);
{ METHOD .FdChildren.Add }
Layer15.FdChildren.Add(Viewpoint17);
HAnimHumanoid18 := THAnimHumanoidNode.Create;
HAnimHumanoid18.Version := '2.0';
HAnimHumanoid18.Loa := 4;
{ ==================== ROOT: humanoid_root / sacrum ==================== }
{ ==================== HAnimHumanoid JOINTS LIST ==================== }
{ ==================== HAnimHumanoid SEGMENTS LIST ==================== }
HAnimJoint19 := THAnimJointNode.Create;
HAnimJoint19.Center := Vector3(0,0.824,0.0277);
HAnimJoint19.SetLlimit([-0.7854,-3.1416,-0.7854]);
HAnimJoint19.SetUlimit([0.7854,3.1416,0.7854]);
HAnimSegment20 := THAnimSegmentNode.Create;
end;

procedure InitHAnimGimbalJointController22Part1;
begin

TouchSensor21 := TTouchSensorNode.Create;
TouchSensor21.Description := 'humanoid_root';
{ METHOD .FdChildren.Add }
HAnimSegment20.FdChildren.Add(TouchSensor21);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(0,0.824,0.0277);
Transform23 := TTransformNode.Create;
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
{ METHOD .Appearance }
Shape24.Appearance := Appearance25;
Sphere27 := TSphereNode.Create;
Sphere27.Radius := 0.03;
{ METHOD .Geometry }
Shape24.Geometry := Sphere27;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(Transform23);
{ METHOD .FdChildren.Add }
HAnimSegment20.FdChildren.Add(Transform22);
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(0,0,0);
Material30.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
LineProperties31 := TLinePropertiesNode.Create;
LineProperties31.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance29.LineProperties := LineProperties31;
{ METHOD .Appearance }
Shape28.Appearance := Appearance29;
LineSet32 := TLineSetNode.Create;
LineSet32.SetVertexCount([2]);
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
{ METHOD .Coord }
LineSet32.Coord := Coordinate33;
{ METHOD .Geometry }
Shape28.Geometry := LineSet32;
{ METHOD .FdChildren.Add }
HAnimSegment20.FdChildren.Add(Shape28);
Shape34 := TShapeNode.Create;
{ METHOD .Appearance }
Shape34.Appearance := Appearance29;
LineSet36 := TLineSetNode.Create;
LineSet36.SetVertexCount([2]);
Coordinate37 := TCoordinateNode.Create;
end;

procedure InitHAnimGimbalJointController22Part2;
begin

Coordinate37.SetPoint([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
{ METHOD .Coord }
LineSet36.Coord := Coordinate37;
{ METHOD .Geometry }
Shape34.Geometry := LineSet36;
{ METHOD .FdChildren.Add }
HAnimSegment20.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
HAnimJoint19.FdChildren.Add(HAnimSegment20);
{ ==================== BRANCH 1: PELVIS & LOWER BODY ==================== }
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.Center := Vector3(0,0.9149,0.0016);
HAnimJoint38.SetLlimit([-0.1745,-0.1745,-0.1745]);
HAnimJoint38.SetUlimit([0.2618,0.1745,0.1745]);
HAnimSegment39 := THAnimSegmentNode.Create;
TouchSensor40 := TTouchSensorNode.Create;
TouchSensor40.Description := 'sacroiliac';
{ METHOD .FdChildren.Add }
HAnimSegment39.FdChildren.Add(TouchSensor40);
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(0,0.9149,0.0016);
Transform42 := TTransformNode.Create;
Shape43 := TShapeNode.Create;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance44.Material := Material45;
{ METHOD .Appearance }
Shape43.Appearance := Appearance44;
Sphere46 := TSphereNode.Create;
Sphere46.Radius := 0.03;
{ METHOD .Geometry }
Shape43.Geometry := Sphere46;
{ METHOD .FdChildren.Add }
Transform42.FdChildren.Add(Shape43);
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Transform42);
{ METHOD .FdChildren.Add }
HAnimSegment39.FdChildren.Add(Transform41);
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,0,0);
Material49.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
LineProperties50 := TLinePropertiesNode.Create;
LineProperties50.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance48.LineProperties := LineProperties50;
{ METHOD .Appearance }
Shape47.Appearance := Appearance48;
LineSet51 := TLineSetNode.Create;
LineSet51.SetVertexCount([2]);
end;

procedure InitHAnimGimbalJointController22Part3;
begin

Coordinate52 := TCoordinateNode.Create;
Coordinate52.SetPoint([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
{ METHOD .Coord }
LineSet51.Coord := Coordinate52;
{ METHOD .Geometry }
Shape47.Geometry := LineSet51;
{ METHOD .FdChildren.Add }
HAnimSegment39.FdChildren.Add(Shape47);
Shape53 := TShapeNode.Create;
{ METHOD .Appearance }
Shape53.Appearance := Appearance48;
LineSet55 := TLineSetNode.Create;
LineSet55.SetVertexCount([2]);
Coordinate56 := TCoordinateNode.Create;
Coordinate56.SetPoint([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
{ METHOD .Coord }
LineSet55.Coord := Coordinate56;
{ METHOD .Geometry }
Shape53.Geometry := LineSet55;
{ METHOD .FdChildren.Add }
HAnimSegment39.FdChildren.Add(Shape53);
{ METHOD .FdChildren.Add }
HAnimJoint38.FdChildren.Add(HAnimSegment39);
{ LEFT LEG }
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimJoint57.SetLlimit([-2.0944,-0.7854,-0.5236]);
HAnimJoint57.SetUlimit([0.5236,0.7854,0.7854]);
HAnimSegment58 := THAnimSegmentNode.Create;
TouchSensor59 := TTouchSensorNode.Create;
TouchSensor59.Description := 'l_hip';
{ METHOD .FdChildren.Add }
HAnimSegment58.FdChildren.Add(TouchSensor59);
Transform60 := TTransformNode.Create;
Transform60.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform61 := TTransformNode.Create;
Shape62 := TShapeNode.Create;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance63.Material := Material64;
{ METHOD .Appearance }
Shape62.Appearance := Appearance63;
Sphere65 := TSphereNode.Create;
Sphere65.Radius := 0.03;
{ METHOD .Geometry }
Shape62.Geometry := Sphere65;
{ METHOD .FdChildren.Add }
Transform61.FdChildren.Add(Shape62);
{ METHOD .FdChildren.Add }
Transform60.FdChildren.Add(Transform61);
{ METHOD .FdChildren.Add }
HAnimSegment58.FdChildren.Add(Transform60);
Shape66 := TShapeNode.Create;
Appearance67 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part4;
begin

Material68 := TMaterialNode.Create;
Material68.DiffuseColor := Vector3(0,0,0);
Material68.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance67.Material := Material68;
LineProperties69 := TLinePropertiesNode.Create;
LineProperties69.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance67.LineProperties := LineProperties69;
{ METHOD .Appearance }
Shape66.Appearance := Appearance67;
LineSet70 := TLineSetNode.Create;
LineSet70.SetVertexCount([2]);
Coordinate71 := TCoordinateNode.Create;
Coordinate71.SetPoint([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
{ METHOD .Coord }
LineSet70.Coord := Coordinate71;
{ METHOD .Geometry }
Shape66.Geometry := LineSet70;
{ METHOD .FdChildren.Add }
HAnimSegment58.FdChildren.Add(Shape66);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimSegment58);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.Center := Vector3(0.104,0.4867,0.0308);
HAnimJoint72.SetLlimit([0,-0.0873,-0.0175]);
HAnimJoint72.SetUlimit([2.3562,0.0873,0.0175]);
HAnimSegment73 := THAnimSegmentNode.Create;
TouchSensor74 := TTouchSensorNode.Create;
TouchSensor74.Description := 'l_knee';
{ METHOD .FdChildren.Add }
HAnimSegment73.FdChildren.Add(TouchSensor74);
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(0.104,0.4867,0.0308);
Transform76 := TTransformNode.Create;
Shape77 := TShapeNode.Create;
Appearance78 := TAppearanceNode.Create;
Material79 := TMaterialNode.Create;
Material79.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance78.Material := Material79;
{ METHOD .Appearance }
Shape77.Appearance := Appearance78;
Sphere80 := TSphereNode.Create;
Sphere80.Radius := 0.03;
{ METHOD .Geometry }
Shape77.Geometry := Sphere80;
{ METHOD .FdChildren.Add }
Transform76.FdChildren.Add(Shape77);
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Transform76);
{ METHOD .FdChildren.Add }
HAnimSegment73.FdChildren.Add(Transform75);
Shape81 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part5;
begin

Appearance82 := TAppearanceNode.Create;
Material83 := TMaterialNode.Create;
Material83.DiffuseColor := Vector3(0,0,0);
Material83.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance82.Material := Material83;
LineProperties84 := TLinePropertiesNode.Create;
LineProperties84.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance82.LineProperties := LineProperties84;
{ METHOD .Appearance }
Shape81.Appearance := Appearance82;
LineSet85 := TLineSetNode.Create;
LineSet85.SetVertexCount([2]);
Coordinate86 := TCoordinateNode.Create;
Coordinate86.SetPoint([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
{ METHOD .Coord }
LineSet85.Coord := Coordinate86;
{ METHOD .Geometry }
Shape81.Geometry := LineSet85;
{ METHOD .FdChildren.Add }
HAnimSegment73.FdChildren.Add(Shape81);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimSegment73);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimJoint87.SetLlimit([-0.4363,-0.2618,-0.1745]);
HAnimJoint87.SetUlimit([0.8727,0.2618,0.1745]);
HAnimSegment88 := THAnimSegmentNode.Create;
TouchSensor89 := TTouchSensorNode.Create;
TouchSensor89.Description := 'l_talocrural';
{ METHOD .FdChildren.Add }
HAnimSegment88.FdChildren.Add(TouchSensor89);
Transform90 := TTransformNode.Create;
Transform90.Scale := Vector3(0.15,0.15,0.15);
Transform90.Translation := Vector3(0.08,0.06,-0.025);
Transform90.Rotation := Vector4(1,0,0,-1.57);
Transform91 := TTransformNode.Create;
Shape92 := TShapeNode.Create;
Appearance93 := TAppearanceNode.Create;
Material94 := TMaterialNode.Create;
Material94.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance93.Material := Material94;
{ METHOD .Appearance }
Shape92.Appearance := Appearance93;
Sphere95 := TSphereNode.Create;
Sphere95.Radius := 0.03;
{ METHOD .Geometry }
Shape92.Geometry := Sphere95;
{ METHOD .FdChildren.Add }
Transform91.FdChildren.Add(Shape92);
end;

procedure InitHAnimGimbalJointController22Part6;
begin

{ METHOD .FdChildren.Add }
Transform90.FdChildren.Add(Transform91);
{ METHOD .FdChildren.Add }
HAnimSegment88.FdChildren.Add(Transform90);
Shape96 := TShapeNode.Create;
Appearance97 := TAppearanceNode.Create;
Material98 := TMaterialNode.Create;
Material98.DiffuseColor := Vector3(0,0,0);
Material98.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance97.Material := Material98;
LineProperties99 := TLinePropertiesNode.Create;
LineProperties99.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance97.LineProperties := LineProperties99;
{ METHOD .Appearance }
Shape96.Appearance := Appearance97;
LineSet100 := TLineSetNode.Create;
LineSet100.SetVertexCount([2]);
Coordinate101 := TCoordinateNode.Create;
Coordinate101.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0781,0.0283,-0.097)]);
{ METHOD .Coord }
LineSet100.Coord := Coordinate101;
{ METHOD .Geometry }
Shape96.Geometry := LineSet100;
{ METHOD .FdChildren.Add }
HAnimSegment88.FdChildren.Add(Shape96);
Shape102 := TShapeNode.Create;
{ METHOD .Appearance }
Shape102.Appearance := Appearance97;
LineSet104 := TLineSetNode.Create;
LineSet104.SetVertexCount([2]);
Coordinate105 := TCoordinateNode.Create;
Coordinate105.SetPoint([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0889,0.0494,-0.1278)]);
{ METHOD .Coord }
LineSet104.Coord := Coordinate105;
{ METHOD .Geometry }
Shape102.Geometry := LineSet104;
{ METHOD .FdChildren.Add }
HAnimSegment88.FdChildren.Add(Shape102);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimSegment88);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.Center := Vector3(0.0781,0.0283,-0.097);
HAnimJoint106.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint106.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment107 := THAnimSegmentNode.Create;
TouchSensor108 := TTouchSensorNode.Create;
TouchSensor108.Description := 'l_talocalcaneonavicular';
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(TouchSensor108);
Transform109 := TTransformNode.Create;
Transform109.Translation := Vector3(0.0781,0.0283,-0.097);
Transform110 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part7;
begin

Shape111 := TShapeNode.Create;
Appearance112 := TAppearanceNode.Create;
Material113 := TMaterialNode.Create;
Material113.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance112.Material := Material113;
{ METHOD .Appearance }
Shape111.Appearance := Appearance112;
Sphere114 := TSphereNode.Create;
Sphere114.Radius := 0.03;
{ METHOD .Geometry }
Shape111.Geometry := Sphere114;
{ METHOD .FdChildren.Add }
Transform110.FdChildren.Add(Shape111);
{ METHOD .FdChildren.Add }
Transform109.FdChildren.Add(Transform110);
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Transform109);
Shape115 := TShapeNode.Create;
Appearance116 := TAppearanceNode.Create;
Material117 := TMaterialNode.Create;
Material117.DiffuseColor := Vector3(0,0,0);
Material117.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance116.Material := Material117;
LineProperties118 := TLinePropertiesNode.Create;
LineProperties118.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance116.LineProperties := LineProperties118;
{ METHOD .Appearance }
Shape115.Appearance := Appearance116;
LineSet119 := TLineSetNode.Create;
LineSet119.SetVertexCount([2]);
Coordinate120 := TCoordinateNode.Create;
Coordinate120.SetPoint([Vector3(0.0781,0.0283,-0.097),Vector3(0.0672,0.0235,-0.0835)]);
{ METHOD .Coord }
LineSet119.Coord := Coordinate120;
{ METHOD .Geometry }
Shape115.Geometry := LineSet119;
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Shape115);
Shape121 := TShapeNode.Create;
{ METHOD .Appearance }
Shape121.Appearance := Appearance116;
LineSet123 := TLineSetNode.Create;
LineSet123.SetVertexCount([2]);
Coordinate124 := TCoordinateNode.Create;
Coordinate124.SetPoint([Vector3(0.0781,0.0283,-0.097),Vector3(0.0812,0.025,-0.0805)]);
{ METHOD .Coord }
LineSet123.Coord := Coordinate124;
{ METHOD .Geometry }
Shape121.Geometry := LineSet123;
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Shape121);
Shape125 := TShapeNode.Create;
{ METHOD .Appearance }
Shape125.Appearance := Appearance116;
end;

procedure InitHAnimGimbalJointController22Part8;
begin

LineSet127 := TLineSetNode.Create;
LineSet127.SetVertexCount([2]);
Coordinate128 := TCoordinateNode.Create;
Coordinate128.SetPoint([Vector3(0.0781,0.0283,-0.097),Vector3(0.0928,0.0248,-0.0821)]);
{ METHOD .Coord }
LineSet127.Coord := Coordinate128;
{ METHOD .Geometry }
Shape125.Geometry := LineSet127;
{ METHOD .FdChildren.Add }
HAnimSegment107.FdChildren.Add(Shape125);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimSegment107);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.Center := Vector3(0.0672,0.0235,-0.0835);
HAnimJoint129.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint129.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment130 := THAnimSegmentNode.Create;
TouchSensor131 := TTouchSensorNode.Create;
TouchSensor131.Description := 'l_cuneonavicular_1';
{ METHOD .FdChildren.Add }
HAnimSegment130.FdChildren.Add(TouchSensor131);
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(0.0672,0.0235,-0.0835);
Transform133 := TTransformNode.Create;
Shape134 := TShapeNode.Create;
Appearance135 := TAppearanceNode.Create;
Material136 := TMaterialNode.Create;
Material136.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance135.Material := Material136;
{ METHOD .Appearance }
Shape134.Appearance := Appearance135;
Sphere137 := TSphereNode.Create;
Sphere137.Radius := 0.03;
{ METHOD .Geometry }
Shape134.Geometry := Sphere137;
{ METHOD .FdChildren.Add }
Transform133.FdChildren.Add(Shape134);
{ METHOD .FdChildren.Add }
Transform132.FdChildren.Add(Transform133);
{ METHOD .FdChildren.Add }
HAnimSegment130.FdChildren.Add(Transform132);
Shape138 := TShapeNode.Create;
Appearance139 := TAppearanceNode.Create;
Material140 := TMaterialNode.Create;
Material140.DiffuseColor := Vector3(0,0,0);
Material140.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance139.Material := Material140;
LineProperties141 := TLinePropertiesNode.Create;
LineProperties141.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance139.LineProperties := LineProperties141;
end;

procedure InitHAnimGimbalJointController22Part9;
begin

{ METHOD .Appearance }
Shape138.Appearance := Appearance139;
LineSet142 := TLineSetNode.Create;
LineSet142.SetVertexCount([2]);
Coordinate143 := TCoordinateNode.Create;
Coordinate143.SetPoint([Vector3(0.0672,0.0235,-0.0835),Vector3(0.0644,0.0147,-0.0577)]);
{ METHOD .Coord }
LineSet142.Coord := Coordinate143;
{ METHOD .Geometry }
Shape138.Geometry := LineSet142;
{ METHOD .FdChildren.Add }
HAnimSegment130.FdChildren.Add(Shape138);
{ METHOD .FdChildren.Add }
HAnimJoint129.FdChildren.Add(HAnimSegment130);
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144.Center := Vector3(0.0644,0.0147,-0.0577);
HAnimJoint144.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint144.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment145 := THAnimSegmentNode.Create;
TouchSensor146 := TTouchSensorNode.Create;
TouchSensor146.Description := 'l_tarsometatarsal_1';
{ METHOD .FdChildren.Add }
HAnimSegment145.FdChildren.Add(TouchSensor146);
Transform147 := TTransformNode.Create;
Transform147.Translation := Vector3(0.0644,0.0147,-0.0577);
Transform148 := TTransformNode.Create;
Shape149 := TShapeNode.Create;
Appearance150 := TAppearanceNode.Create;
Material151 := TMaterialNode.Create;
Material151.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance150.Material := Material151;
{ METHOD .Appearance }
Shape149.Appearance := Appearance150;
Sphere152 := TSphereNode.Create;
Sphere152.Radius := 0.03;
{ METHOD .Geometry }
Shape149.Geometry := Sphere152;
{ METHOD .FdChildren.Add }
Transform148.FdChildren.Add(Shape149);
{ METHOD .FdChildren.Add }
Transform147.FdChildren.Add(Transform148);
{ METHOD .FdChildren.Add }
HAnimSegment145.FdChildren.Add(Transform147);
Shape153 := TShapeNode.Create;
Appearance154 := TAppearanceNode.Create;
Material155 := TMaterialNode.Create;
Material155.DiffuseColor := Vector3(0,0,0);
Material155.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance154.Material := Material155;
LineProperties156 := TLinePropertiesNode.Create;
LineProperties156.LinewidthScaleFactor := 6;
end;

procedure InitHAnimGimbalJointController22Part10;
begin

{ METHOD .LineProperties }
Appearance154.LineProperties := LineProperties156;
{ METHOD .Appearance }
Shape153.Appearance := Appearance154;
LineSet157 := TLineSetNode.Create;
LineSet157.SetVertexCount([2]);
Coordinate158 := TCoordinateNode.Create;
Coordinate158.SetPoint([Vector3(0.0644,0.0147,-0.0577),Vector3(0.1086,0.0001,0.0368)]);
{ METHOD .Coord }
LineSet157.Coord := Coordinate158;
{ METHOD .Geometry }
Shape153.Geometry := LineSet157;
{ METHOD .FdChildren.Add }
HAnimSegment145.FdChildren.Add(Shape153);
{ METHOD .FdChildren.Add }
HAnimJoint144.FdChildren.Add(HAnimSegment145);
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.Center := Vector3(0.1086,0.0001,0.0368);
HAnimJoint159.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint159.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment160 := THAnimSegmentNode.Create;
TouchSensor161 := TTouchSensorNode.Create;
TouchSensor161.Description := 'l_metatarsophalangeal_1';
{ METHOD .FdChildren.Add }
HAnimSegment160.FdChildren.Add(TouchSensor161);
Transform162 := TTransformNode.Create;
Transform162.Translation := Vector3(0.1086,0.0001,0.0368);
Transform163 := TTransformNode.Create;
Shape164 := TShapeNode.Create;
Appearance165 := TAppearanceNode.Create;
Material166 := TMaterialNode.Create;
Material166.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance165.Material := Material166;
{ METHOD .Appearance }
Shape164.Appearance := Appearance165;
Sphere167 := TSphereNode.Create;
Sphere167.Radius := 0.03;
{ METHOD .Geometry }
Shape164.Geometry := Sphere167;
{ METHOD .FdChildren.Add }
Transform163.FdChildren.Add(Shape164);
{ METHOD .FdChildren.Add }
Transform162.FdChildren.Add(Transform163);
{ METHOD .FdChildren.Add }
HAnimSegment160.FdChildren.Add(Transform162);
Shape168 := TShapeNode.Create;
Appearance169 := TAppearanceNode.Create;
Material170 := TMaterialNode.Create;
Material170.DiffuseColor := Vector3(0,0,0);
Material170.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance169.Material := Material170;
LineProperties171 := TLinePropertiesNode.Create;
end;

procedure InitHAnimGimbalJointController22Part11;
begin

LineProperties171.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance169.LineProperties := LineProperties171;
{ METHOD .Appearance }
Shape168.Appearance := Appearance169;
LineSet172 := TLineSetNode.Create;
LineSet172.SetVertexCount([2]);
Coordinate173 := TCoordinateNode.Create;
Coordinate173.SetPoint([Vector3(0.1086,0.0001,0.0368),Vector3(0.1086,0,0.0762)]);
{ METHOD .Coord }
LineSet172.Coord := Coordinate173;
{ METHOD .Geometry }
Shape168.Geometry := LineSet172;
{ METHOD .FdChildren.Add }
HAnimSegment160.FdChildren.Add(Shape168);
{ METHOD .FdChildren.Add }
HAnimJoint159.FdChildren.Add(HAnimSegment160);
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174.Center := Vector3(0.1086,0,0.0762);
HAnimJoint174.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint174.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment175 := THAnimSegmentNode.Create;
Group176 := TGroupNode.Create;
TouchSensor177 := TTouchSensorNode.Create;
TouchSensor177.Description := 'l_tarsal_interphalangeal_1';
{ METHOD .FdChildren.Add }
Group176.FdChildren.Add(TouchSensor177);
Transform178 := TTransformNode.Create;
Transform178.Translation := Vector3(0.1086,0,0.0762);
Shape179 := TShapeNode.Create;
Appearance180 := TAppearanceNode.Create;
Material181 := TMaterialNode.Create;
Material181.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance180.Material := Material181;
{ METHOD .Appearance }
Shape179.Appearance := Appearance180;
Sphere182 := TSphereNode.Create;
Sphere182.Radius := 0.03;
{ METHOD .Geometry }
Shape179.Geometry := Sphere182;
{ METHOD .FdChildren.Add }
Transform178.FdChildren.Add(Shape179);
{ METHOD .FdChildren.Add }
Group176.FdChildren.Add(Transform178);
Shape183 := TShapeNode.Create;
Appearance184 := TAppearanceNode.Create;
Material185 := TMaterialNode.Create;
Material185.DiffuseColor := Vector3(0,0,0);
Material185.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance184.Material := Material185;
LineProperties186 := TLinePropertiesNode.Create;
end;

procedure InitHAnimGimbalJointController22Part12;
begin

LineProperties186.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance184.LineProperties := LineProperties186;
{ METHOD .Appearance }
Shape183.Appearance := Appearance184;
LineSet187 := TLineSetNode.Create;
LineSet187.SetVertexCount([2]);
Coordinate188 := TCoordinateNode.Create;
Coordinate188.SetPoint([Vector3(0.1086,0,0.0762),Vector3(0.1086,-0.0001,0.1156)]);
{ METHOD .Coord }
LineSet187.Coord := Coordinate188;
{ METHOD .Geometry }
Shape183.Geometry := LineSet187;
{ METHOD .FdChildren.Add }
Group176.FdChildren.Add(Shape183);
{ METHOD .FdChildren.Add }
HAnimSegment175.FdChildren.Add(Group176);
{ METHOD .FdChildren.Add }
HAnimJoint174.FdChildren.Add(HAnimSegment175);
{ METHOD .FdChildren.Add }
HAnimJoint159.FdChildren.Add(HAnimJoint174);
{ METHOD .FdChildren.Add }
HAnimJoint144.FdChildren.Add(HAnimJoint159);
{ METHOD .FdChildren.Add }
HAnimJoint129.FdChildren.Add(HAnimJoint144);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint129);
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189.Center := Vector3(0.0812,0.025,-0.0805);
HAnimJoint189.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint189.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment190 := THAnimSegmentNode.Create;
TouchSensor191 := TTouchSensorNode.Create;
TouchSensor191.Description := 'l_cuneonavicular_2';
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(TouchSensor191);
Transform192 := TTransformNode.Create;
Transform192.Translation := Vector3(0.0812,0.025,-0.0805);
Transform193 := TTransformNode.Create;
Shape194 := TShapeNode.Create;
Appearance195 := TAppearanceNode.Create;
Material196 := TMaterialNode.Create;
Material196.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance195.Material := Material196;
{ METHOD .Appearance }
Shape194.Appearance := Appearance195;
Sphere197 := TSphereNode.Create;
Sphere197.Radius := 0.03;
{ METHOD .Geometry }
Shape194.Geometry := Sphere197;
{ METHOD .FdChildren.Add }
Transform193.FdChildren.Add(Shape194);
{ METHOD .FdChildren.Add }
Transform192.FdChildren.Add(Transform193);
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(Transform192);
Shape198 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part13;
begin

Appearance199 := TAppearanceNode.Create;
Material200 := TMaterialNode.Create;
Material200.DiffuseColor := Vector3(0,0,0);
Material200.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance199.Material := Material200;
LineProperties201 := TLinePropertiesNode.Create;
LineProperties201.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance199.LineProperties := LineProperties201;
{ METHOD .Appearance }
Shape198.Appearance := Appearance199;
LineSet202 := TLineSetNode.Create;
LineSet202.SetVertexCount([2]);
Coordinate203 := TCoordinateNode.Create;
Coordinate203.SetPoint([Vector3(0.0812,0.025,-0.0805),Vector3(0.08,0.0175,-0.0608)]);
{ METHOD .Coord }
LineSet202.Coord := Coordinate203;
{ METHOD .Geometry }
Shape198.Geometry := LineSet202;
{ METHOD .FdChildren.Add }
HAnimSegment190.FdChildren.Add(Shape198);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimSegment190);
HAnimJoint204 := THAnimJointNode.Create;
HAnimJoint204.Center := Vector3(0.08,0.0175,-0.0608);
HAnimJoint204.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint204.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment205 := THAnimSegmentNode.Create;
TouchSensor206 := TTouchSensorNode.Create;
TouchSensor206.Description := 'l_tarsometatarsal_2';
{ METHOD .FdChildren.Add }
HAnimSegment205.FdChildren.Add(TouchSensor206);
Transform207 := TTransformNode.Create;
Transform207.Translation := Vector3(0.08,0.0175,-0.0608);
Transform208 := TTransformNode.Create;
Shape209 := TShapeNode.Create;
Appearance210 := TAppearanceNode.Create;
Material211 := TMaterialNode.Create;
Material211.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance210.Material := Material211;
{ METHOD .Appearance }
Shape209.Appearance := Appearance210;
Sphere212 := TSphereNode.Create;
Sphere212.Radius := 0.03;
{ METHOD .Geometry }
Shape209.Geometry := Sphere212;
{ METHOD .FdChildren.Add }
Transform208.FdChildren.Add(Shape209);
{ METHOD .FdChildren.Add }
Transform207.FdChildren.Add(Transform208);
{ METHOD .FdChildren.Add }
HAnimSegment205.FdChildren.Add(Transform207);
end;

procedure InitHAnimGimbalJointController22Part14;
begin

Shape213 := TShapeNode.Create;
Appearance214 := TAppearanceNode.Create;
Material215 := TMaterialNode.Create;
Material215.DiffuseColor := Vector3(0,0,0);
Material215.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance214.Material := Material215;
LineProperties216 := TLinePropertiesNode.Create;
LineProperties216.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance214.LineProperties := LineProperties216;
{ METHOD .Appearance }
Shape213.Appearance := Appearance214;
LineSet217 := TLineSetNode.Create;
LineSet217.SetVertexCount([2]);
Coordinate218 := TCoordinateNode.Create;
Coordinate218.SetPoint([Vector3(0.08,0.0175,-0.0608),Vector3(0.0824,0.0064,-0.004)]);
{ METHOD .Coord }
LineSet217.Coord := Coordinate218;
{ METHOD .Geometry }
Shape213.Geometry := LineSet217;
{ METHOD .FdChildren.Add }
HAnimSegment205.FdChildren.Add(Shape213);
{ METHOD .FdChildren.Add }
HAnimJoint204.FdChildren.Add(HAnimSegment205);
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219.Center := Vector3(0.0824,0.0064,-0.004);
HAnimJoint219.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint219.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment220 := THAnimSegmentNode.Create;
TouchSensor221 := TTouchSensorNode.Create;
TouchSensor221.Description := 'l_metatarsophalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment220.FdChildren.Add(TouchSensor221);
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.0824,0.0064,-0.004);
Transform223 := TTransformNode.Create;
Shape224 := TShapeNode.Create;
Appearance225 := TAppearanceNode.Create;
Material226 := TMaterialNode.Create;
Material226.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance225.Material := Material226;
{ METHOD .Appearance }
Shape224.Appearance := Appearance225;
Sphere227 := TSphereNode.Create;
Sphere227.Radius := 0.03;
{ METHOD .Geometry }
Shape224.Geometry := Sphere227;
{ METHOD .FdChildren.Add }
Transform223.FdChildren.Add(Shape224);
{ METHOD .FdChildren.Add }
Transform222.FdChildren.Add(Transform223);
end;

procedure InitHAnimGimbalJointController22Part15;
begin

{ METHOD .FdChildren.Add }
HAnimSegment220.FdChildren.Add(Transform222);
Shape228 := TShapeNode.Create;
Appearance229 := TAppearanceNode.Create;
Material230 := TMaterialNode.Create;
Material230.DiffuseColor := Vector3(0,0,0);
Material230.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance229.Material := Material230;
LineProperties231 := TLinePropertiesNode.Create;
LineProperties231.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance229.LineProperties := LineProperties231;
{ METHOD .Appearance }
Shape228.Appearance := Appearance229;
LineSet232 := TLineSetNode.Create;
LineSet232.SetVertexCount([2]);
Coordinate233 := TCoordinateNode.Create;
Coordinate233.SetPoint([Vector3(0.0824,0.0064,-0.004),Vector3(0.0841,0.0041,0.0121)]);
{ METHOD .Coord }
LineSet232.Coord := Coordinate233;
{ METHOD .Geometry }
Shape228.Geometry := LineSet232;
{ METHOD .FdChildren.Add }
HAnimSegment220.FdChildren.Add(Shape228);
{ METHOD .FdChildren.Add }
HAnimJoint219.FdChildren.Add(HAnimSegment220);
HAnimJoint234 := THAnimJointNode.Create;
HAnimJoint234.Center := Vector3(0.0841,0.0041,0.0121);
HAnimJoint234.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint234.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment235 := THAnimSegmentNode.Create;
TouchSensor236 := TTouchSensorNode.Create;
TouchSensor236.Description := 'l_tarsal_proximal_interphalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(TouchSensor236);
Transform237 := TTransformNode.Create;
Transform237.Translation := Vector3(0.0841,0.0041,0.0121);
Transform238 := TTransformNode.Create;
Shape239 := TShapeNode.Create;
Appearance240 := TAppearanceNode.Create;
Material241 := TMaterialNode.Create;
Material241.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance240.Material := Material241;
{ METHOD .Appearance }
Shape239.Appearance := Appearance240;
Sphere242 := TSphereNode.Create;
Sphere242.Radius := 0.03;
{ METHOD .Geometry }
Shape239.Geometry := Sphere242;
{ METHOD .FdChildren.Add }
Transform238.FdChildren.Add(Shape239);
end;

procedure InitHAnimGimbalJointController22Part16;
begin

{ METHOD .FdChildren.Add }
Transform237.FdChildren.Add(Transform238);
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(Transform237);
Shape243 := TShapeNode.Create;
Appearance244 := TAppearanceNode.Create;
Material245 := TMaterialNode.Create;
Material245.DiffuseColor := Vector3(0,0,0);
Material245.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance244.Material := Material245;
LineProperties246 := TLinePropertiesNode.Create;
LineProperties246.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance244.LineProperties := LineProperties246;
{ METHOD .Appearance }
Shape243.Appearance := Appearance244;
LineSet247 := TLineSetNode.Create;
LineSet247.SetVertexCount([2]);
Coordinate248 := TCoordinateNode.Create;
Coordinate248.SetPoint([Vector3(0.0841,0.0041,0.0121),Vector3(0.0841,0.0013,0.0216)]);
{ METHOD .Coord }
LineSet247.Coord := Coordinate248;
{ METHOD .Geometry }
Shape243.Geometry := LineSet247;
{ METHOD .FdChildren.Add }
HAnimSegment235.FdChildren.Add(Shape243);
{ METHOD .FdChildren.Add }
HAnimJoint234.FdChildren.Add(HAnimSegment235);
HAnimJoint249 := THAnimJointNode.Create;
HAnimJoint249.Center := Vector3(0.0841,0.0013,0.0216);
HAnimJoint249.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint249.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment250 := THAnimSegmentNode.Create;
Group251 := TGroupNode.Create;
TouchSensor252 := TTouchSensorNode.Create;
TouchSensor252.Description := 'l_tarsal_distal_interphalangeal_2';
{ METHOD .FdChildren.Add }
Group251.FdChildren.Add(TouchSensor252);
Transform253 := TTransformNode.Create;
Transform253.Translation := Vector3(0.0841,0.0013,0.0216);
Shape254 := TShapeNode.Create;
Appearance255 := TAppearanceNode.Create;
Material256 := TMaterialNode.Create;
Material256.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance255.Material := Material256;
{ METHOD .Appearance }
Shape254.Appearance := Appearance255;
Sphere257 := TSphereNode.Create;
Sphere257.Radius := 0.03;
{ METHOD .Geometry }
Shape254.Geometry := Sphere257;
end;

procedure InitHAnimGimbalJointController22Part17;
begin

{ METHOD .FdChildren.Add }
Transform253.FdChildren.Add(Shape254);
{ METHOD .FdChildren.Add }
Group251.FdChildren.Add(Transform253);
Shape258 := TShapeNode.Create;
Appearance259 := TAppearanceNode.Create;
Material260 := TMaterialNode.Create;
Material260.DiffuseColor := Vector3(0,0,0);
Material260.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance259.Material := Material260;
LineProperties261 := TLinePropertiesNode.Create;
LineProperties261.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance259.LineProperties := LineProperties261;
{ METHOD .Appearance }
Shape258.Appearance := Appearance259;
LineSet262 := TLineSetNode.Create;
LineSet262.SetVertexCount([2]);
Coordinate263 := TCoordinateNode.Create;
Coordinate263.SetPoint([Vector3(0.0841,0.0013,0.0216),Vector3(0.0841,-0.0029,0.036)]);
{ METHOD .Coord }
LineSet262.Coord := Coordinate263;
{ METHOD .Geometry }
Shape258.Geometry := LineSet262;
{ METHOD .FdChildren.Add }
Group251.FdChildren.Add(Shape258);
{ METHOD .FdChildren.Add }
HAnimSegment250.FdChildren.Add(Group251);
{ METHOD .FdChildren.Add }
HAnimJoint249.FdChildren.Add(HAnimSegment250);
{ METHOD .FdChildren.Add }
HAnimJoint234.FdChildren.Add(HAnimJoint249);
{ METHOD .FdChildren.Add }
HAnimJoint219.FdChildren.Add(HAnimJoint234);
{ METHOD .FdChildren.Add }
HAnimJoint204.FdChildren.Add(HAnimJoint219);
{ METHOD .FdChildren.Add }
HAnimJoint189.FdChildren.Add(HAnimJoint204);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint189);
HAnimJoint264 := THAnimJointNode.Create;
HAnimJoint264.Center := Vector3(0.0928,0.0248,-0.0821);
HAnimJoint264.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint264.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment265 := THAnimSegmentNode.Create;
TouchSensor266 := TTouchSensorNode.Create;
TouchSensor266.Description := 'l_cuneonavicular_3';
{ METHOD .FdChildren.Add }
HAnimSegment265.FdChildren.Add(TouchSensor266);
Transform267 := TTransformNode.Create;
Transform267.Translation := Vector3(0.0928,0.0248,-0.0821);
Transform268 := TTransformNode.Create;
Shape269 := TShapeNode.Create;
Appearance270 := TAppearanceNode.Create;
Material271 := TMaterialNode.Create;
end;

procedure InitHAnimGimbalJointController22Part18;
begin

Material271.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance270.Material := Material271;
{ METHOD .Appearance }
Shape269.Appearance := Appearance270;
Sphere272 := TSphereNode.Create;
Sphere272.Radius := 0.03;
{ METHOD .Geometry }
Shape269.Geometry := Sphere272;
{ METHOD .FdChildren.Add }
Transform268.FdChildren.Add(Shape269);
{ METHOD .FdChildren.Add }
Transform267.FdChildren.Add(Transform268);
{ METHOD .FdChildren.Add }
HAnimSegment265.FdChildren.Add(Transform267);
Shape273 := TShapeNode.Create;
Appearance274 := TAppearanceNode.Create;
Material275 := TMaterialNode.Create;
Material275.DiffuseColor := Vector3(0,0,0);
Material275.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance274.Material := Material275;
LineProperties276 := TLinePropertiesNode.Create;
LineProperties276.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance274.LineProperties := LineProperties276;
{ METHOD .Appearance }
Shape273.Appearance := Appearance274;
LineSet277 := TLineSetNode.Create;
LineSet277.SetVertexCount([2]);
Coordinate278 := TCoordinateNode.Create;
Coordinate278.SetPoint([Vector3(0.0928,0.0248,-0.0821),Vector3(0.0944,0.0175,-0.0625)]);
{ METHOD .Coord }
LineSet277.Coord := Coordinate278;
{ METHOD .Geometry }
Shape273.Geometry := LineSet277;
{ METHOD .FdChildren.Add }
HAnimSegment265.FdChildren.Add(Shape273);
{ METHOD .FdChildren.Add }
HAnimJoint264.FdChildren.Add(HAnimSegment265);
HAnimJoint279 := THAnimJointNode.Create;
HAnimJoint279.Center := Vector3(0.0944,0.0175,-0.0625);
HAnimJoint279.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint279.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment280 := THAnimSegmentNode.Create;
TouchSensor281 := TTouchSensorNode.Create;
TouchSensor281.Description := 'l_tarsometatarsal_3';
{ METHOD .FdChildren.Add }
HAnimSegment280.FdChildren.Add(TouchSensor281);
Transform282 := TTransformNode.Create;
Transform282.Translation := Vector3(0.0944,0.0175,-0.0625);
Transform283 := TTransformNode.Create;
Shape284 := TShapeNode.Create;
Appearance285 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part19;
begin

Material286 := TMaterialNode.Create;
Material286.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance285.Material := Material286;
{ METHOD .Appearance }
Shape284.Appearance := Appearance285;
Sphere287 := TSphereNode.Create;
Sphere287.Radius := 0.03;
{ METHOD .Geometry }
Shape284.Geometry := Sphere287;
{ METHOD .FdChildren.Add }
Transform283.FdChildren.Add(Shape284);
{ METHOD .FdChildren.Add }
Transform282.FdChildren.Add(Transform283);
{ METHOD .FdChildren.Add }
HAnimSegment280.FdChildren.Add(Transform282);
Shape288 := TShapeNode.Create;
Appearance289 := TAppearanceNode.Create;
Material290 := TMaterialNode.Create;
Material290.DiffuseColor := Vector3(0,0,0);
Material290.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance289.Material := Material290;
LineProperties291 := TLinePropertiesNode.Create;
LineProperties291.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance289.LineProperties := LineProperties291;
{ METHOD .Appearance }
Shape288.Appearance := Appearance289;
LineSet292 := TLineSetNode.Create;
LineSet292.SetVertexCount([2]);
Coordinate293 := TCoordinateNode.Create;
Coordinate293.SetPoint([Vector3(0.0944,0.0175,-0.0625),Vector3(0.0963,0.0065,-0.0065)]);
{ METHOD .Coord }
LineSet292.Coord := Coordinate293;
{ METHOD .Geometry }
Shape288.Geometry := LineSet292;
{ METHOD .FdChildren.Add }
HAnimSegment280.FdChildren.Add(Shape288);
{ METHOD .FdChildren.Add }
HAnimJoint279.FdChildren.Add(HAnimSegment280);
HAnimJoint294 := THAnimJointNode.Create;
HAnimJoint294.Center := Vector3(0.0963,0.0065,-0.0065);
HAnimJoint294.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint294.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment295 := THAnimSegmentNode.Create;
TouchSensor296 := TTouchSensorNode.Create;
TouchSensor296.Description := 'l_metatarsophalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment295.FdChildren.Add(TouchSensor296);
Transform297 := TTransformNode.Create;
Transform297.Translation := Vector3(0.0963,0.0065,-0.0065);
Transform298 := TTransformNode.Create;
Shape299 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part20;
begin

Appearance300 := TAppearanceNode.Create;
Material301 := TMaterialNode.Create;
Material301.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance300.Material := Material301;
{ METHOD .Appearance }
Shape299.Appearance := Appearance300;
Sphere302 := TSphereNode.Create;
Sphere302.Radius := 0.03;
{ METHOD .Geometry }
Shape299.Geometry := Sphere302;
{ METHOD .FdChildren.Add }
Transform298.FdChildren.Add(Shape299);
{ METHOD .FdChildren.Add }
Transform297.FdChildren.Add(Transform298);
{ METHOD .FdChildren.Add }
HAnimSegment295.FdChildren.Add(Transform297);
Shape303 := TShapeNode.Create;
Appearance304 := TAppearanceNode.Create;
Material305 := TMaterialNode.Create;
Material305.DiffuseColor := Vector3(0,0,0);
Material305.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance304.Material := Material305;
LineProperties306 := TLinePropertiesNode.Create;
LineProperties306.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance304.LineProperties := LineProperties306;
{ METHOD .Appearance }
Shape303.Appearance := Appearance304;
LineSet307 := TLineSetNode.Create;
LineSet307.SetVertexCount([2]);
Coordinate308 := TCoordinateNode.Create;
Coordinate308.SetPoint([Vector3(0.0963,0.0065,-0.0065),Vector3(0.0987,0.0034,0.0086)]);
{ METHOD .Coord }
LineSet307.Coord := Coordinate308;
{ METHOD .Geometry }
Shape303.Geometry := LineSet307;
{ METHOD .FdChildren.Add }
HAnimSegment295.FdChildren.Add(Shape303);
{ METHOD .FdChildren.Add }
HAnimJoint294.FdChildren.Add(HAnimSegment295);
HAnimJoint309 := THAnimJointNode.Create;
HAnimJoint309.Center := Vector3(0.0987,0.0034,0.0086);
HAnimJoint309.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint309.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment310 := THAnimSegmentNode.Create;
TouchSensor311 := TTouchSensorNode.Create;
TouchSensor311.Description := 'l_tarsal_proximal_interphalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment310.FdChildren.Add(TouchSensor311);
Transform312 := TTransformNode.Create;
Transform312.Translation := Vector3(0.0987,0.0034,0.0086);
Transform313 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part21;
begin

Shape314 := TShapeNode.Create;
Appearance315 := TAppearanceNode.Create;
Material316 := TMaterialNode.Create;
Material316.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance315.Material := Material316;
{ METHOD .Appearance }
Shape314.Appearance := Appearance315;
Sphere317 := TSphereNode.Create;
Sphere317.Radius := 0.03;
{ METHOD .Geometry }
Shape314.Geometry := Sphere317;
{ METHOD .FdChildren.Add }
Transform313.FdChildren.Add(Shape314);
{ METHOD .FdChildren.Add }
Transform312.FdChildren.Add(Transform313);
{ METHOD .FdChildren.Add }
HAnimSegment310.FdChildren.Add(Transform312);
Shape318 := TShapeNode.Create;
Appearance319 := TAppearanceNode.Create;
Material320 := TMaterialNode.Create;
Material320.DiffuseColor := Vector3(0,0,0);
Material320.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance319.Material := Material320;
LineProperties321 := TLinePropertiesNode.Create;
LineProperties321.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance319.LineProperties := LineProperties321;
{ METHOD .Appearance }
Shape318.Appearance := Appearance319;
LineSet322 := TLineSetNode.Create;
LineSet322.SetVertexCount([2]);
Coordinate323 := TCoordinateNode.Create;
Coordinate323.SetPoint([Vector3(0.0987,0.0034,0.0086),Vector3(0.1002,0.0013,0.0178)]);
{ METHOD .Coord }
LineSet322.Coord := Coordinate323;
{ METHOD .Geometry }
Shape318.Geometry := LineSet322;
{ METHOD .FdChildren.Add }
HAnimSegment310.FdChildren.Add(Shape318);
{ METHOD .FdChildren.Add }
HAnimJoint309.FdChildren.Add(HAnimSegment310);
HAnimJoint324 := THAnimJointNode.Create;
HAnimJoint324.Center := Vector3(0.1002,0.0013,0.0178);
HAnimJoint324.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint324.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment325 := THAnimSegmentNode.Create;
Group326 := TGroupNode.Create;
TouchSensor327 := TTouchSensorNode.Create;
TouchSensor327.Description := 'l_tarsal_distal_interphalangeal_3';
{ METHOD .FdChildren.Add }
Group326.FdChildren.Add(TouchSensor327);
Transform328 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part22;
begin

Transform328.Translation := Vector3(0.1002,0.0013,0.0178);
Shape329 := TShapeNode.Create;
Appearance330 := TAppearanceNode.Create;
Material331 := TMaterialNode.Create;
Material331.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance330.Material := Material331;
{ METHOD .Appearance }
Shape329.Appearance := Appearance330;
Sphere332 := TSphereNode.Create;
Sphere332.Radius := 0.03;
{ METHOD .Geometry }
Shape329.Geometry := Sphere332;
{ METHOD .FdChildren.Add }
Transform328.FdChildren.Add(Shape329);
{ METHOD .FdChildren.Add }
Group326.FdChildren.Add(Transform328);
Shape333 := TShapeNode.Create;
Appearance334 := TAppearanceNode.Create;
Material335 := TMaterialNode.Create;
Material335.DiffuseColor := Vector3(0,0,0);
Material335.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance334.Material := Material335;
LineProperties336 := TLinePropertiesNode.Create;
LineProperties336.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance334.LineProperties := LineProperties336;
{ METHOD .Appearance }
Shape333.Appearance := Appearance334;
LineSet337 := TLineSetNode.Create;
LineSet337.SetVertexCount([2]);
Coordinate338 := TCoordinateNode.Create;
Coordinate338.SetPoint([Vector3(0.1002,0.0013,0.0178),Vector3(0.1026,-0.002,0.0322)]);
{ METHOD .Coord }
LineSet337.Coord := Coordinate338;
{ METHOD .Geometry }
Shape333.Geometry := LineSet337;
{ METHOD .FdChildren.Add }
Group326.FdChildren.Add(Shape333);
{ METHOD .FdChildren.Add }
HAnimSegment325.FdChildren.Add(Group326);
{ METHOD .FdChildren.Add }
HAnimJoint324.FdChildren.Add(HAnimSegment325);
{ METHOD .FdChildren.Add }
HAnimJoint309.FdChildren.Add(HAnimJoint324);
{ METHOD .FdChildren.Add }
HAnimJoint294.FdChildren.Add(HAnimJoint309);
{ METHOD .FdChildren.Add }
HAnimJoint279.FdChildren.Add(HAnimJoint294);
{ METHOD .FdChildren.Add }
HAnimJoint264.FdChildren.Add(HAnimJoint279);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint264);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint106);
HAnimJoint339 := THAnimJointNode.Create;
HAnimJoint339.Center := Vector3(0.0889,0.0494,-0.1278);
HAnimJoint339.SetLlimit([-0.1745,-0.1396,-0.1396]);
end;

procedure InitHAnimGimbalJointController22Part23;
begin

HAnimJoint339.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment340 := THAnimSegmentNode.Create;
TouchSensor341 := TTouchSensorNode.Create;
TouchSensor341.Description := 'l_calcaneocuboid';
{ METHOD .FdChildren.Add }
HAnimSegment340.FdChildren.Add(TouchSensor341);
Transform342 := TTransformNode.Create;
Transform342.Translation := Vector3(0.0889,0.0494,-0.1278);
Transform343 := TTransformNode.Create;
Shape344 := TShapeNode.Create;
Appearance345 := TAppearanceNode.Create;
Material346 := TMaterialNode.Create;
Material346.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance345.Material := Material346;
{ METHOD .Appearance }
Shape344.Appearance := Appearance345;
Sphere347 := TSphereNode.Create;
Sphere347.Radius := 0.03;
{ METHOD .Geometry }
Shape344.Geometry := Sphere347;
{ METHOD .FdChildren.Add }
Transform343.FdChildren.Add(Shape344);
{ METHOD .FdChildren.Add }
Transform342.FdChildren.Add(Transform343);
{ METHOD .FdChildren.Add }
HAnimSegment340.FdChildren.Add(Transform342);
Shape348 := TShapeNode.Create;
Appearance349 := TAppearanceNode.Create;
Material350 := TMaterialNode.Create;
Material350.DiffuseColor := Vector3(0,0,0);
Material350.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance349.Material := Material350;
LineProperties351 := TLinePropertiesNode.Create;
LineProperties351.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance349.LineProperties := LineProperties351;
{ METHOD .Appearance }
Shape348.Appearance := Appearance349;
LineSet352 := TLineSetNode.Create;
LineSet352.SetVertexCount([2]);
Coordinate353 := TCoordinateNode.Create;
Coordinate353.SetPoint([Vector3(0.0889,0.0494,-0.1278),Vector3(0.1105,0.0267,-0.0998)]);
{ METHOD .Coord }
LineSet352.Coord := Coordinate353;
{ METHOD .Geometry }
Shape348.Geometry := LineSet352;
{ METHOD .FdChildren.Add }
HAnimSegment340.FdChildren.Add(Shape348);
{ METHOD .FdChildren.Add }
HAnimJoint339.FdChildren.Add(HAnimSegment340);
HAnimJoint354 := THAnimJointNode.Create;
HAnimJoint354.Center := Vector3(0.1105,0.0267,-0.0998);
end;

procedure InitHAnimGimbalJointController22Part24;
begin

HAnimJoint354.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint354.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment355 := THAnimSegmentNode.Create;
TouchSensor356 := TTouchSensorNode.Create;
TouchSensor356.Description := 'l_transversetarsal';
{ METHOD .FdChildren.Add }
HAnimSegment355.FdChildren.Add(TouchSensor356);
Transform357 := TTransformNode.Create;
Transform357.Translation := Vector3(0.1105,0.0267,-0.0998);
Transform358 := TTransformNode.Create;
Shape359 := TShapeNode.Create;
Appearance360 := TAppearanceNode.Create;
Material361 := TMaterialNode.Create;
Material361.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance360.Material := Material361;
{ METHOD .Appearance }
Shape359.Appearance := Appearance360;
Sphere362 := TSphereNode.Create;
Sphere362.Radius := 0.03;
{ METHOD .Geometry }
Shape359.Geometry := Sphere362;
{ METHOD .FdChildren.Add }
Transform358.FdChildren.Add(Shape359);
{ METHOD .FdChildren.Add }
Transform357.FdChildren.Add(Transform358);
{ METHOD .FdChildren.Add }
HAnimSegment355.FdChildren.Add(Transform357);
Shape363 := TShapeNode.Create;
Appearance364 := TAppearanceNode.Create;
Material365 := TMaterialNode.Create;
Material365.DiffuseColor := Vector3(0,0,0);
Material365.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance364.Material := Material365;
LineProperties366 := TLinePropertiesNode.Create;
LineProperties366.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance364.LineProperties := LineProperties366;
{ METHOD .Appearance }
Shape363.Appearance := Appearance364;
LineSet367 := TLineSetNode.Create;
LineSet367.SetVertexCount([2]);
Coordinate368 := TCoordinateNode.Create;
Coordinate368.SetPoint([Vector3(0.1105,0.0267,-0.0998),Vector3(0.1063,0.016,-0.0634)]);
{ METHOD .Coord }
LineSet367.Coord := Coordinate368;
{ METHOD .Geometry }
Shape363.Geometry := LineSet367;
{ METHOD .FdChildren.Add }
HAnimSegment355.FdChildren.Add(Shape363);
Shape369 := TShapeNode.Create;
{ METHOD .Appearance }
Shape369.Appearance := Appearance364;
end;

procedure InitHAnimGimbalJointController22Part25;
begin

LineSet371 := TLineSetNode.Create;
LineSet371.SetVertexCount([2]);
Coordinate372 := TCoordinateNode.Create;
Coordinate372.SetPoint([Vector3(0.1105,0.0267,-0.0998),Vector3(0.1206,0.0124,-0.0671)]);
{ METHOD .Coord }
LineSet371.Coord := Coordinate372;
{ METHOD .Geometry }
Shape369.Geometry := LineSet371;
{ METHOD .FdChildren.Add }
HAnimSegment355.FdChildren.Add(Shape369);
{ METHOD .FdChildren.Add }
HAnimJoint354.FdChildren.Add(HAnimSegment355);
HAnimJoint373 := THAnimJointNode.Create;
HAnimJoint373.Center := Vector3(0.1063,0.016,-0.0634);
HAnimJoint373.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint373.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment374 := THAnimSegmentNode.Create;
TouchSensor375 := TTouchSensorNode.Create;
TouchSensor375.Description := 'l_tarsometatarsal_4';
{ METHOD .FdChildren.Add }
HAnimSegment374.FdChildren.Add(TouchSensor375);
Transform376 := TTransformNode.Create;
Transform376.Translation := Vector3(0.1063,0.016,-0.0634);
Transform377 := TTransformNode.Create;
Shape378 := TShapeNode.Create;
Appearance379 := TAppearanceNode.Create;
Material380 := TMaterialNode.Create;
Material380.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance379.Material := Material380;
{ METHOD .Appearance }
Shape378.Appearance := Appearance379;
Sphere381 := TSphereNode.Create;
Sphere381.Radius := 0.03;
{ METHOD .Geometry }
Shape378.Geometry := Sphere381;
{ METHOD .FdChildren.Add }
Transform377.FdChildren.Add(Shape378);
{ METHOD .FdChildren.Add }
Transform376.FdChildren.Add(Transform377);
{ METHOD .FdChildren.Add }
HAnimSegment374.FdChildren.Add(Transform376);
Shape382 := TShapeNode.Create;
Appearance383 := TAppearanceNode.Create;
Material384 := TMaterialNode.Create;
Material384.DiffuseColor := Vector3(0,0,0);
Material384.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance383.Material := Material384;
LineProperties385 := TLinePropertiesNode.Create;
LineProperties385.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance383.LineProperties := LineProperties385;
end;

procedure InitHAnimGimbalJointController22Part26;
begin

{ METHOD .Appearance }
Shape382.Appearance := Appearance383;
LineSet386 := TLineSetNode.Create;
LineSet386.SetVertexCount([2]);
Coordinate387 := TCoordinateNode.Create;
Coordinate387.SetPoint([Vector3(0.1063,0.016,-0.0634),Vector3(0.1097,0.0058,-0.0107)]);
{ METHOD .Coord }
LineSet386.Coord := Coordinate387;
{ METHOD .Geometry }
Shape382.Geometry := LineSet386;
{ METHOD .FdChildren.Add }
HAnimSegment374.FdChildren.Add(Shape382);
{ METHOD .FdChildren.Add }
HAnimJoint373.FdChildren.Add(HAnimSegment374);
HAnimJoint388 := THAnimJointNode.Create;
HAnimJoint388.Center := Vector3(0.1097,0.0058,-0.0107);
HAnimJoint388.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint388.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment389 := THAnimSegmentNode.Create;
TouchSensor390 := TTouchSensorNode.Create;
TouchSensor390.Description := 'l_metatarsophalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment389.FdChildren.Add(TouchSensor390);
Transform391 := TTransformNode.Create;
Transform391.Translation := Vector3(0.1097,0.0058,-0.0107);
Transform392 := TTransformNode.Create;
Shape393 := TShapeNode.Create;
Appearance394 := TAppearanceNode.Create;
Material395 := TMaterialNode.Create;
Material395.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance394.Material := Material395;
{ METHOD .Appearance }
Shape393.Appearance := Appearance394;
Sphere396 := TSphereNode.Create;
Sphere396.Radius := 0.03;
{ METHOD .Geometry }
Shape393.Geometry := Sphere396;
{ METHOD .FdChildren.Add }
Transform392.FdChildren.Add(Shape393);
{ METHOD .FdChildren.Add }
Transform391.FdChildren.Add(Transform392);
{ METHOD .FdChildren.Add }
HAnimSegment389.FdChildren.Add(Transform391);
Shape397 := TShapeNode.Create;
Appearance398 := TAppearanceNode.Create;
Material399 := TMaterialNode.Create;
Material399.DiffuseColor := Vector3(0,0,0);
Material399.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance398.Material := Material399;
LineProperties400 := TLinePropertiesNode.Create;
LineProperties400.LinewidthScaleFactor := 6;
end;

procedure InitHAnimGimbalJointController22Part27;
begin

{ METHOD .LineProperties }
Appearance398.LineProperties := LineProperties400;
{ METHOD .Appearance }
Shape397.Appearance := Appearance398;
LineSet401 := TLineSetNode.Create;
LineSet401.SetVertexCount([2]);
Coordinate402 := TCoordinateNode.Create;
Coordinate402.SetPoint([Vector3(0.1097,0.0058,-0.0107),Vector3(0.114,0.0037,0.0044)]);
{ METHOD .Coord }
LineSet401.Coord := Coordinate402;
{ METHOD .Geometry }
Shape397.Geometry := LineSet401;
{ METHOD .FdChildren.Add }
HAnimSegment389.FdChildren.Add(Shape397);
{ METHOD .FdChildren.Add }
HAnimJoint388.FdChildren.Add(HAnimSegment389);
HAnimJoint403 := THAnimJointNode.Create;
HAnimJoint403.Center := Vector3(0.114,0.0037,0.0044);
HAnimJoint403.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint403.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment404 := THAnimSegmentNode.Create;
TouchSensor405 := TTouchSensorNode.Create;
TouchSensor405.Description := 'l_tarsal_proximal_interphalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment404.FdChildren.Add(TouchSensor405);
Transform406 := TTransformNode.Create;
Transform406.Translation := Vector3(0.114,0.0037,0.0044);
Transform407 := TTransformNode.Create;
Shape408 := TShapeNode.Create;
Appearance409 := TAppearanceNode.Create;
Material410 := TMaterialNode.Create;
Material410.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance409.Material := Material410;
{ METHOD .Appearance }
Shape408.Appearance := Appearance409;
Sphere411 := TSphereNode.Create;
Sphere411.Radius := 0.03;
{ METHOD .Geometry }
Shape408.Geometry := Sphere411;
{ METHOD .FdChildren.Add }
Transform407.FdChildren.Add(Shape408);
{ METHOD .FdChildren.Add }
Transform406.FdChildren.Add(Transform407);
{ METHOD .FdChildren.Add }
HAnimSegment404.FdChildren.Add(Transform406);
Shape412 := TShapeNode.Create;
Appearance413 := TAppearanceNode.Create;
Material414 := TMaterialNode.Create;
Material414.DiffuseColor := Vector3(0,0,0);
Material414.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance413.Material := Material414;
LineProperties415 := TLinePropertiesNode.Create;
end;

procedure InitHAnimGimbalJointController22Part28;
begin

LineProperties415.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance413.LineProperties := LineProperties415;
{ METHOD .Appearance }
Shape412.Appearance := Appearance413;
LineSet416 := TLineSetNode.Create;
LineSet416.SetVertexCount([2]);
Coordinate417 := TCoordinateNode.Create;
Coordinate417.SetPoint([Vector3(0.114,0.0037,0.0044),Vector3(0.1155,0.0008,0.0118)]);
{ METHOD .Coord }
LineSet416.Coord := Coordinate417;
{ METHOD .Geometry }
Shape412.Geometry := LineSet416;
{ METHOD .FdChildren.Add }
HAnimSegment404.FdChildren.Add(Shape412);
{ METHOD .FdChildren.Add }
HAnimJoint403.FdChildren.Add(HAnimSegment404);
HAnimJoint418 := THAnimJointNode.Create;
HAnimJoint418.Center := Vector3(0.1155,0.0008,0.0118);
HAnimJoint418.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint418.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment419 := THAnimSegmentNode.Create;
Group420 := TGroupNode.Create;
TouchSensor421 := TTouchSensorNode.Create;
TouchSensor421.Description := 'l_tarsal_distal_interphalangeal_4';
{ METHOD .FdChildren.Add }
Group420.FdChildren.Add(TouchSensor421);
Transform422 := TTransformNode.Create;
Transform422.Translation := Vector3(0.1155,0.0008,0.0118);
Shape423 := TShapeNode.Create;
Appearance424 := TAppearanceNode.Create;
Material425 := TMaterialNode.Create;
Material425.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance424.Material := Material425;
{ METHOD .Appearance }
Shape423.Appearance := Appearance424;
Sphere426 := TSphereNode.Create;
Sphere426.Radius := 0.03;
{ METHOD .Geometry }
Shape423.Geometry := Sphere426;
{ METHOD .FdChildren.Add }
Transform422.FdChildren.Add(Shape423);
{ METHOD .FdChildren.Add }
Group420.FdChildren.Add(Transform422);
Shape427 := TShapeNode.Create;
Appearance428 := TAppearanceNode.Create;
Material429 := TMaterialNode.Create;
Material429.DiffuseColor := Vector3(0,0,0);
Material429.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance428.Material := Material429;
LineProperties430 := TLinePropertiesNode.Create;
end;

procedure InitHAnimGimbalJointController22Part29;
begin

LineProperties430.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance428.LineProperties := LineProperties430;
{ METHOD .Appearance }
Shape427.Appearance := Appearance428;
LineSet431 := TLineSetNode.Create;
LineSet431.SetVertexCount([2]);
Coordinate432 := TCoordinateNode.Create;
Coordinate432.SetPoint([Vector3(0.1155,0.0008,0.0118),Vector3(0.1183,-0.0046,0.0255)]);
{ METHOD .Coord }
LineSet431.Coord := Coordinate432;
{ METHOD .Geometry }
Shape427.Geometry := LineSet431;
{ METHOD .FdChildren.Add }
Group420.FdChildren.Add(Shape427);
{ METHOD .FdChildren.Add }
HAnimSegment419.FdChildren.Add(Group420);
{ METHOD .FdChildren.Add }
HAnimJoint418.FdChildren.Add(HAnimSegment419);
{ METHOD .FdChildren.Add }
HAnimJoint403.FdChildren.Add(HAnimJoint418);
{ METHOD .FdChildren.Add }
HAnimJoint388.FdChildren.Add(HAnimJoint403);
{ METHOD .FdChildren.Add }
HAnimJoint373.FdChildren.Add(HAnimJoint388);
{ METHOD .FdChildren.Add }
HAnimJoint354.FdChildren.Add(HAnimJoint373);
HAnimJoint433 := THAnimJointNode.Create;
HAnimJoint433.Center := Vector3(0.1206,0.0124,-0.0671);
HAnimJoint433.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint433.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment434 := THAnimSegmentNode.Create;
TouchSensor435 := TTouchSensorNode.Create;
TouchSensor435.Description := 'l_tarsometatarsal_5';
{ METHOD .FdChildren.Add }
HAnimSegment434.FdChildren.Add(TouchSensor435);
Transform436 := TTransformNode.Create;
Transform436.Translation := Vector3(0.1206,0.0124,-0.0671);
Transform437 := TTransformNode.Create;
Shape438 := TShapeNode.Create;
Appearance439 := TAppearanceNode.Create;
Material440 := TMaterialNode.Create;
Material440.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance439.Material := Material440;
{ METHOD .Appearance }
Shape438.Appearance := Appearance439;
Sphere441 := TSphereNode.Create;
Sphere441.Radius := 0.03;
{ METHOD .Geometry }
Shape438.Geometry := Sphere441;
{ METHOD .FdChildren.Add }
Transform437.FdChildren.Add(Shape438);
{ METHOD .FdChildren.Add }
Transform436.FdChildren.Add(Transform437);
{ METHOD .FdChildren.Add }
HAnimSegment434.FdChildren.Add(Transform436);
Shape442 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part30;
begin

Appearance443 := TAppearanceNode.Create;
Material444 := TMaterialNode.Create;
Material444.DiffuseColor := Vector3(0,0,0);
Material444.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance443.Material := Material444;
LineProperties445 := TLinePropertiesNode.Create;
LineProperties445.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance443.LineProperties := LineProperties445;
{ METHOD .Appearance }
Shape442.Appearance := Appearance443;
LineSet446 := TLineSetNode.Create;
LineSet446.SetVertexCount([2]);
Coordinate447 := TCoordinateNode.Create;
Coordinate447.SetPoint([Vector3(0.1206,0.0124,-0.0671),Vector3(0.1239,0.0051,-0.0153)]);
{ METHOD .Coord }
LineSet446.Coord := Coordinate447;
{ METHOD .Geometry }
Shape442.Geometry := LineSet446;
{ METHOD .FdChildren.Add }
HAnimSegment434.FdChildren.Add(Shape442);
{ METHOD .FdChildren.Add }
HAnimJoint433.FdChildren.Add(HAnimSegment434);
HAnimJoint448 := THAnimJointNode.Create;
HAnimJoint448.Center := Vector3(0.1239,0.0051,-0.0153);
HAnimJoint448.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint448.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment449 := THAnimSegmentNode.Create;
TouchSensor450 := TTouchSensorNode.Create;
TouchSensor450.Description := 'l_metatarsophalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment449.FdChildren.Add(TouchSensor450);
Transform451 := TTransformNode.Create;
Transform451.Translation := Vector3(0.1239,0.0051,-0.0153);
Transform452 := TTransformNode.Create;
Shape453 := TShapeNode.Create;
Appearance454 := TAppearanceNode.Create;
Material455 := TMaterialNode.Create;
Material455.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance454.Material := Material455;
{ METHOD .Appearance }
Shape453.Appearance := Appearance454;
Sphere456 := TSphereNode.Create;
Sphere456.Radius := 0.03;
{ METHOD .Geometry }
Shape453.Geometry := Sphere456;
{ METHOD .FdChildren.Add }
Transform452.FdChildren.Add(Shape453);
{ METHOD .FdChildren.Add }
Transform451.FdChildren.Add(Transform452);
{ METHOD .FdChildren.Add }
HAnimSegment449.FdChildren.Add(Transform451);
end;

procedure InitHAnimGimbalJointController22Part31;
begin

Shape457 := TShapeNode.Create;
Appearance458 := TAppearanceNode.Create;
Material459 := TMaterialNode.Create;
Material459.DiffuseColor := Vector3(0,0,0);
Material459.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance458.Material := Material459;
LineProperties460 := TLinePropertiesNode.Create;
LineProperties460.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance458.LineProperties := LineProperties460;
{ METHOD .Appearance }
Shape457.Appearance := Appearance458;
LineSet461 := TLineSetNode.Create;
LineSet461.SetVertexCount([2]);
Coordinate462 := TCoordinateNode.Create;
Coordinate462.SetPoint([Vector3(0.1239,0.0051,-0.0153),Vector3(0.1262,0.0023,-0.0077)]);
{ METHOD .Coord }
LineSet461.Coord := Coordinate462;
{ METHOD .Geometry }
Shape457.Geometry := LineSet461;
{ METHOD .FdChildren.Add }
HAnimSegment449.FdChildren.Add(Shape457);
{ METHOD .FdChildren.Add }
HAnimJoint448.FdChildren.Add(HAnimSegment449);
HAnimJoint463 := THAnimJointNode.Create;
HAnimJoint463.Center := Vector3(0.1262,0.0023,-0.0077);
HAnimJoint463.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint463.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment464 := THAnimSegmentNode.Create;
TouchSensor465 := TTouchSensorNode.Create;
TouchSensor465.Description := 'l_tarsal_proximal_interphalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment464.FdChildren.Add(TouchSensor465);
Transform466 := TTransformNode.Create;
Transform466.Translation := Vector3(0.1262,0.0023,-0.0077);
Transform467 := TTransformNode.Create;
Shape468 := TShapeNode.Create;
Appearance469 := TAppearanceNode.Create;
Material470 := TMaterialNode.Create;
Material470.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance469.Material := Material470;
{ METHOD .Appearance }
Shape468.Appearance := Appearance469;
Sphere471 := TSphereNode.Create;
Sphere471.Radius := 0.03;
{ METHOD .Geometry }
Shape468.Geometry := Sphere471;
{ METHOD .FdChildren.Add }
Transform467.FdChildren.Add(Shape468);
{ METHOD .FdChildren.Add }
Transform466.FdChildren.Add(Transform467);
end;

procedure InitHAnimGimbalJointController22Part32;
begin

{ METHOD .FdChildren.Add }
HAnimSegment464.FdChildren.Add(Transform466);
Shape472 := TShapeNode.Create;
Appearance473 := TAppearanceNode.Create;
Material474 := TMaterialNode.Create;
Material474.DiffuseColor := Vector3(0,0,0);
Material474.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance473.Material := Material474;
LineProperties475 := TLinePropertiesNode.Create;
LineProperties475.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance473.LineProperties := LineProperties475;
{ METHOD .Appearance }
Shape472.Appearance := Appearance473;
LineSet476 := TLineSetNode.Create;
LineSet476.SetVertexCount([2]);
Coordinate477 := TCoordinateNode.Create;
Coordinate477.SetPoint([Vector3(0.1262,0.0023,-0.0077),Vector3(0.1271,0,0)]);
{ METHOD .Coord }
LineSet476.Coord := Coordinate477;
{ METHOD .Geometry }
Shape472.Geometry := LineSet476;
{ METHOD .FdChildren.Add }
HAnimSegment464.FdChildren.Add(Shape472);
{ METHOD .FdChildren.Add }
HAnimJoint463.FdChildren.Add(HAnimSegment464);
HAnimJoint478 := THAnimJointNode.Create;
HAnimJoint478.Center := Vector3(0.1271,0,0);
HAnimJoint478.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint478.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment479 := THAnimSegmentNode.Create;
Group480 := TGroupNode.Create;
TouchSensor481 := TTouchSensorNode.Create;
TouchSensor481.Description := 'l_tarsal_distal_interphalangeal_5';
{ METHOD .FdChildren.Add }
Group480.FdChildren.Add(TouchSensor481);
Transform482 := TTransformNode.Create;
Transform482.Translation := Vector3(0.1271,0,0);
Shape483 := TShapeNode.Create;
Appearance484 := TAppearanceNode.Create;
Material485 := TMaterialNode.Create;
Material485.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance484.Material := Material485;
{ METHOD .Appearance }
Shape483.Appearance := Appearance484;
Sphere486 := TSphereNode.Create;
Sphere486.Radius := 0.03;
{ METHOD .Geometry }
Shape483.Geometry := Sphere486;
{ METHOD .FdChildren.Add }
Transform482.FdChildren.Add(Shape483);
end;

procedure InitHAnimGimbalJointController22Part33;
begin

{ METHOD .FdChildren.Add }
Group480.FdChildren.Add(Transform482);
Shape487 := TShapeNode.Create;
Appearance488 := TAppearanceNode.Create;
Material489 := TMaterialNode.Create;
Material489.DiffuseColor := Vector3(0,0,0);
Material489.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance488.Material := Material489;
LineProperties490 := TLinePropertiesNode.Create;
LineProperties490.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance488.LineProperties := LineProperties490;
{ METHOD .Appearance }
Shape487.Appearance := Appearance488;
LineSet491 := TLineSetNode.Create;
LineSet491.SetVertexCount([2]);
Coordinate492 := TCoordinateNode.Create;
Coordinate492.SetPoint([Vector3(0.1271,0,0),Vector3(0.1288,-0.0043,0.0143)]);
{ METHOD .Coord }
LineSet491.Coord := Coordinate492;
{ METHOD .Geometry }
Shape487.Geometry := LineSet491;
{ METHOD .FdChildren.Add }
Group480.FdChildren.Add(Shape487);
{ METHOD .FdChildren.Add }
HAnimSegment479.FdChildren.Add(Group480);
{ METHOD .FdChildren.Add }
HAnimJoint478.FdChildren.Add(HAnimSegment479);
{ METHOD .FdChildren.Add }
HAnimJoint463.FdChildren.Add(HAnimJoint478);
{ METHOD .FdChildren.Add }
HAnimJoint448.FdChildren.Add(HAnimJoint463);
{ METHOD .FdChildren.Add }
HAnimJoint433.FdChildren.Add(HAnimJoint448);
{ METHOD .FdChildren.Add }
HAnimJoint354.FdChildren.Add(HAnimJoint433);
{ METHOD .FdChildren.Add }
HAnimJoint339.FdChildren.Add(HAnimJoint354);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint339);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimJoint87);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint72);
{ METHOD .FdChildren.Add }
HAnimJoint38.FdChildren.Add(HAnimJoint57);
{ RIGHT LEG }
HAnimJoint493 := THAnimJointNode.Create;
HAnimJoint493.Center := Vector3(-0.095,0.9171,0.0029);
HAnimJoint493.SetLlimit([-2.0944,-0.7854,-0.7854]);
HAnimJoint493.SetUlimit([0.5236,0.7854,0.5236]);
HAnimSegment494 := THAnimSegmentNode.Create;
TouchSensor495 := TTouchSensorNode.Create;
TouchSensor495.Description := 'r_hip';
{ METHOD .FdChildren.Add }
HAnimSegment494.FdChildren.Add(TouchSensor495);
Transform496 := TTransformNode.Create;
Transform496.Translation := Vector3(-0.095,0.9171,0.0029);
Transform497 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part34;
begin

Shape498 := TShapeNode.Create;
Appearance499 := TAppearanceNode.Create;
Material500 := TMaterialNode.Create;
Material500.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance499.Material := Material500;
{ METHOD .Appearance }
Shape498.Appearance := Appearance499;
Sphere501 := TSphereNode.Create;
Sphere501.Radius := 0.03;
{ METHOD .Geometry }
Shape498.Geometry := Sphere501;
{ METHOD .FdChildren.Add }
Transform497.FdChildren.Add(Shape498);
{ METHOD .FdChildren.Add }
Transform496.FdChildren.Add(Transform497);
{ METHOD .FdChildren.Add }
HAnimSegment494.FdChildren.Add(Transform496);
Shape502 := TShapeNode.Create;
Appearance503 := TAppearanceNode.Create;
Material504 := TMaterialNode.Create;
Material504.DiffuseColor := Vector3(0,0,0);
Material504.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance503.Material := Material504;
LineProperties505 := TLinePropertiesNode.Create;
LineProperties505.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance503.LineProperties := LineProperties505;
{ METHOD .Appearance }
Shape502.Appearance := Appearance503;
LineSet506 := TLineSetNode.Create;
LineSet506.SetVertexCount([2]);
Coordinate507 := TCoordinateNode.Create;
Coordinate507.SetPoint([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
{ METHOD .Coord }
LineSet506.Coord := Coordinate507;
{ METHOD .Geometry }
Shape502.Geometry := LineSet506;
{ METHOD .FdChildren.Add }
HAnimSegment494.FdChildren.Add(Shape502);
{ METHOD .FdChildren.Add }
HAnimJoint493.FdChildren.Add(HAnimSegment494);
HAnimJoint508 := THAnimJointNode.Create;
HAnimJoint508.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimJoint508.SetLlimit([0,-0.0873,-0.0175]);
HAnimJoint508.SetUlimit([2.3562,0.0873,0.0175]);
HAnimSegment509 := THAnimSegmentNode.Create;
TouchSensor510 := TTouchSensorNode.Create;
TouchSensor510.Description := 'r_knee';
{ METHOD .FdChildren.Add }
HAnimSegment509.FdChildren.Add(TouchSensor510);
Transform511 := TTransformNode.Create;
Transform511.Translation := Vector3(-0.0867,0.4913,0.0318);
end;

procedure InitHAnimGimbalJointController22Part35;
begin

Transform512 := TTransformNode.Create;
Shape513 := TShapeNode.Create;
Appearance514 := TAppearanceNode.Create;
Material515 := TMaterialNode.Create;
Material515.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance514.Material := Material515;
{ METHOD .Appearance }
Shape513.Appearance := Appearance514;
Sphere516 := TSphereNode.Create;
Sphere516.Radius := 0.03;
{ METHOD .Geometry }
Shape513.Geometry := Sphere516;
{ METHOD .FdChildren.Add }
Transform512.FdChildren.Add(Shape513);
{ METHOD .FdChildren.Add }
Transform511.FdChildren.Add(Transform512);
{ METHOD .FdChildren.Add }
HAnimSegment509.FdChildren.Add(Transform511);
Shape517 := TShapeNode.Create;
Appearance518 := TAppearanceNode.Create;
Material519 := TMaterialNode.Create;
Material519.DiffuseColor := Vector3(0,0,0);
Material519.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance518.Material := Material519;
LineProperties520 := TLinePropertiesNode.Create;
LineProperties520.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance518.LineProperties := LineProperties520;
{ METHOD .Appearance }
Shape517.Appearance := Appearance518;
LineSet521 := TLineSetNode.Create;
LineSet521.SetVertexCount([2]);
Coordinate522 := TCoordinateNode.Create;
Coordinate522.SetPoint([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
{ METHOD .Coord }
LineSet521.Coord := Coordinate522;
{ METHOD .Geometry }
Shape517.Geometry := LineSet521;
{ METHOD .FdChildren.Add }
HAnimSegment509.FdChildren.Add(Shape517);
{ METHOD .FdChildren.Add }
HAnimJoint508.FdChildren.Add(HAnimSegment509);
HAnimJoint523 := THAnimJointNode.Create;
HAnimJoint523.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimJoint523.SetLlimit([-0.4363,-0.2618,-0.1745]);
HAnimJoint523.SetUlimit([0.8727,0.2618,0.1745]);
HAnimSegment524 := THAnimSegmentNode.Create;
TouchSensor525 := TTouchSensorNode.Create;
TouchSensor525.Description := 'r_talocrural';
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(TouchSensor525);
Transform526 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part36;
begin

Transform526.Scale := Vector3(0.15,0.15,0.15);
Transform526.Translation := Vector3(-0.05,0.06,-0.025);
Transform526.Rotation := Vector4(1,0,0,-1.57);
Transform527 := TTransformNode.Create;
Shape528 := TShapeNode.Create;
Appearance529 := TAppearanceNode.Create;
Material530 := TMaterialNode.Create;
Material530.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance529.Material := Material530;
{ METHOD .Appearance }
Shape528.Appearance := Appearance529;
Sphere531 := TSphereNode.Create;
Sphere531.Radius := 0.03;
{ METHOD .Geometry }
Shape528.Geometry := Sphere531;
{ METHOD .FdChildren.Add }
Transform527.FdChildren.Add(Shape528);
{ METHOD .FdChildren.Add }
Transform526.FdChildren.Add(Transform527);
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(Transform526);
Shape532 := TShapeNode.Create;
Appearance533 := TAppearanceNode.Create;
Material534 := TMaterialNode.Create;
Material534.DiffuseColor := Vector3(0,0,0);
Material534.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance533.Material := Material534;
LineProperties535 := TLinePropertiesNode.Create;
LineProperties535.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance533.LineProperties := LineProperties535;
{ METHOD .Appearance }
Shape532.Appearance := Appearance533;
LineSet536 := TLineSetNode.Create;
LineSet536.SetVertexCount([2]);
Coordinate537 := TCoordinateNode.Create;
Coordinate537.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0781,0.0283,-0.097)]);
{ METHOD .Coord }
LineSet536.Coord := Coordinate537;
{ METHOD .Geometry }
Shape532.Geometry := LineSet536;
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(Shape532);
Shape538 := TShapeNode.Create;
{ METHOD .Appearance }
Shape538.Appearance := Appearance533;
LineSet540 := TLineSetNode.Create;
LineSet540.SetVertexCount([2]);
Coordinate541 := TCoordinateNode.Create;
Coordinate541.SetPoint([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0889,0.0494,-0.1278)]);
{ METHOD .Coord }
LineSet540.Coord := Coordinate541;
end;

procedure InitHAnimGimbalJointController22Part37;
begin

{ METHOD .Geometry }
Shape538.Geometry := LineSet540;
{ METHOD .FdChildren.Add }
HAnimSegment524.FdChildren.Add(Shape538);
{ METHOD .FdChildren.Add }
HAnimJoint523.FdChildren.Add(HAnimSegment524);
HAnimJoint542 := THAnimJointNode.Create;
HAnimJoint542.Center := Vector3(-0.0781,0.0283,-0.097);
HAnimJoint542.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint542.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment543 := THAnimSegmentNode.Create;
TouchSensor544 := TTouchSensorNode.Create;
TouchSensor544.Description := 'r_talocalcaneonavicular';
{ METHOD .FdChildren.Add }
HAnimSegment543.FdChildren.Add(TouchSensor544);
Transform545 := TTransformNode.Create;
Transform545.Translation := Vector3(-0.0781,0.0283,-0.097);
Transform546 := TTransformNode.Create;
Shape547 := TShapeNode.Create;
Appearance548 := TAppearanceNode.Create;
Material549 := TMaterialNode.Create;
Material549.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance548.Material := Material549;
{ METHOD .Appearance }
Shape547.Appearance := Appearance548;
Sphere550 := TSphereNode.Create;
Sphere550.Radius := 0.03;
{ METHOD .Geometry }
Shape547.Geometry := Sphere550;
{ METHOD .FdChildren.Add }
Transform546.FdChildren.Add(Shape547);
{ METHOD .FdChildren.Add }
Transform545.FdChildren.Add(Transform546);
{ METHOD .FdChildren.Add }
HAnimSegment543.FdChildren.Add(Transform545);
Shape551 := TShapeNode.Create;
Appearance552 := TAppearanceNode.Create;
Material553 := TMaterialNode.Create;
Material553.DiffuseColor := Vector3(0,0,0);
Material553.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance552.Material := Material553;
LineProperties554 := TLinePropertiesNode.Create;
LineProperties554.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance552.LineProperties := LineProperties554;
{ METHOD .Appearance }
Shape551.Appearance := Appearance552;
LineSet555 := TLineSetNode.Create;
LineSet555.SetVertexCount([2]);
Coordinate556 := TCoordinateNode.Create;
Coordinate556.SetPoint([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0672,0.0235,-0.0835)]);
end;

procedure InitHAnimGimbalJointController22Part38;
begin

{ METHOD .Coord }
LineSet555.Coord := Coordinate556;
{ METHOD .Geometry }
Shape551.Geometry := LineSet555;
{ METHOD .FdChildren.Add }
HAnimSegment543.FdChildren.Add(Shape551);
Shape557 := TShapeNode.Create;
{ METHOD .Appearance }
Shape557.Appearance := Appearance552;
LineSet559 := TLineSetNode.Create;
LineSet559.SetVertexCount([2]);
Coordinate560 := TCoordinateNode.Create;
Coordinate560.SetPoint([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0812,0.025,-0.0805)]);
{ METHOD .Coord }
LineSet559.Coord := Coordinate560;
{ METHOD .Geometry }
Shape557.Geometry := LineSet559;
{ METHOD .FdChildren.Add }
HAnimSegment543.FdChildren.Add(Shape557);
Shape561 := TShapeNode.Create;
{ METHOD .Appearance }
Shape561.Appearance := Appearance552;
LineSet563 := TLineSetNode.Create;
LineSet563.SetVertexCount([2]);
Coordinate564 := TCoordinateNode.Create;
Coordinate564.SetPoint([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0928,0.0248,-0.0821)]);
{ METHOD .Coord }
LineSet563.Coord := Coordinate564;
{ METHOD .Geometry }
Shape561.Geometry := LineSet563;
{ METHOD .FdChildren.Add }
HAnimSegment543.FdChildren.Add(Shape561);
{ METHOD .FdChildren.Add }
HAnimJoint542.FdChildren.Add(HAnimSegment543);
HAnimJoint565 := THAnimJointNode.Create;
HAnimJoint565.Center := Vector3(-0.0672,0.0235,-0.0835);
HAnimJoint565.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint565.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment566 := THAnimSegmentNode.Create;
TouchSensor567 := TTouchSensorNode.Create;
TouchSensor567.Description := 'r_cuneonavicular_1';
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(TouchSensor567);
Transform568 := TTransformNode.Create;
Transform568.Translation := Vector3(-0.0672,0.0235,-0.0835);
Transform569 := TTransformNode.Create;
Shape570 := TShapeNode.Create;
Appearance571 := TAppearanceNode.Create;
Material572 := TMaterialNode.Create;
Material572.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance571.Material := Material572;
{ METHOD .Appearance }
Shape570.Appearance := Appearance571;
Sphere573 := TSphereNode.Create;
end;

procedure InitHAnimGimbalJointController22Part39;
begin

Sphere573.Radius := 0.03;
{ METHOD .Geometry }
Shape570.Geometry := Sphere573;
{ METHOD .FdChildren.Add }
Transform569.FdChildren.Add(Shape570);
{ METHOD .FdChildren.Add }
Transform568.FdChildren.Add(Transform569);
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(Transform568);
Shape574 := TShapeNode.Create;
Appearance575 := TAppearanceNode.Create;
Material576 := TMaterialNode.Create;
Material576.DiffuseColor := Vector3(0,0,0);
Material576.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance575.Material := Material576;
LineProperties577 := TLinePropertiesNode.Create;
LineProperties577.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance575.LineProperties := LineProperties577;
{ METHOD .Appearance }
Shape574.Appearance := Appearance575;
LineSet578 := TLineSetNode.Create;
LineSet578.SetVertexCount([2]);
Coordinate579 := TCoordinateNode.Create;
Coordinate579.SetPoint([Vector3(-0.0672,0.0235,-0.0835),Vector3(-0.0644,0.0147,-0.0577)]);
{ METHOD .Coord }
LineSet578.Coord := Coordinate579;
{ METHOD .Geometry }
Shape574.Geometry := LineSet578;
{ METHOD .FdChildren.Add }
HAnimSegment566.FdChildren.Add(Shape574);
{ METHOD .FdChildren.Add }
HAnimJoint565.FdChildren.Add(HAnimSegment566);
HAnimJoint580 := THAnimJointNode.Create;
HAnimJoint580.Center := Vector3(-0.0644,0.0147,-0.0577);
HAnimJoint580.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint580.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment581 := THAnimSegmentNode.Create;
TouchSensor582 := TTouchSensorNode.Create;
TouchSensor582.Description := 'r_tarsometatarsal_1';
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(TouchSensor582);
Transform583 := TTransformNode.Create;
Transform583.Translation := Vector3(-0.0644,0.0147,-0.0577);
Transform584 := TTransformNode.Create;
Shape585 := TShapeNode.Create;
Appearance586 := TAppearanceNode.Create;
Material587 := TMaterialNode.Create;
Material587.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance586.Material := Material587;
{ METHOD .Appearance }
Shape585.Appearance := Appearance586;
end;

procedure InitHAnimGimbalJointController22Part40;
begin

Sphere588 := TSphereNode.Create;
Sphere588.Radius := 0.03;
{ METHOD .Geometry }
Shape585.Geometry := Sphere588;
{ METHOD .FdChildren.Add }
Transform584.FdChildren.Add(Shape585);
{ METHOD .FdChildren.Add }
Transform583.FdChildren.Add(Transform584);
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(Transform583);
Shape589 := TShapeNode.Create;
Appearance590 := TAppearanceNode.Create;
Material591 := TMaterialNode.Create;
Material591.DiffuseColor := Vector3(0,0,0);
Material591.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance590.Material := Material591;
LineProperties592 := TLinePropertiesNode.Create;
LineProperties592.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance590.LineProperties := LineProperties592;
{ METHOD .Appearance }
Shape589.Appearance := Appearance590;
LineSet593 := TLineSetNode.Create;
LineSet593.SetVertexCount([2]);
Coordinate594 := TCoordinateNode.Create;
Coordinate594.SetPoint([Vector3(-0.0644,0.0147,-0.0577),Vector3(-0.1086,0.0001,0.0368)]);
{ METHOD .Coord }
LineSet593.Coord := Coordinate594;
{ METHOD .Geometry }
Shape589.Geometry := LineSet593;
{ METHOD .FdChildren.Add }
HAnimSegment581.FdChildren.Add(Shape589);
{ METHOD .FdChildren.Add }
HAnimJoint580.FdChildren.Add(HAnimSegment581);
HAnimJoint595 := THAnimJointNode.Create;
HAnimJoint595.Center := Vector3(-0.1086,0.0001,0.0368);
HAnimJoint595.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint595.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment596 := THAnimSegmentNode.Create;
TouchSensor597 := TTouchSensorNode.Create;
TouchSensor597.Description := 'r_metatarsophalangeal_1';
{ METHOD .FdChildren.Add }
HAnimSegment596.FdChildren.Add(TouchSensor597);
Transform598 := TTransformNode.Create;
Transform598.Translation := Vector3(-0.1086,0.0001,0.0368);
Transform599 := TTransformNode.Create;
Shape600 := TShapeNode.Create;
Appearance601 := TAppearanceNode.Create;
Material602 := TMaterialNode.Create;
Material602.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance601.Material := Material602;
end;

procedure InitHAnimGimbalJointController22Part41;
begin

{ METHOD .Appearance }
Shape600.Appearance := Appearance601;
Sphere603 := TSphereNode.Create;
Sphere603.Radius := 0.03;
{ METHOD .Geometry }
Shape600.Geometry := Sphere603;
{ METHOD .FdChildren.Add }
Transform599.FdChildren.Add(Shape600);
{ METHOD .FdChildren.Add }
Transform598.FdChildren.Add(Transform599);
{ METHOD .FdChildren.Add }
HAnimSegment596.FdChildren.Add(Transform598);
Shape604 := TShapeNode.Create;
Appearance605 := TAppearanceNode.Create;
Material606 := TMaterialNode.Create;
Material606.DiffuseColor := Vector3(0,0,0);
Material606.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance605.Material := Material606;
LineProperties607 := TLinePropertiesNode.Create;
LineProperties607.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance605.LineProperties := LineProperties607;
{ METHOD .Appearance }
Shape604.Appearance := Appearance605;
LineSet608 := TLineSetNode.Create;
LineSet608.SetVertexCount([2]);
Coordinate609 := TCoordinateNode.Create;
Coordinate609.SetPoint([Vector3(-0.1086,0.0001,0.0368),Vector3(-0.1086,0,0.0762)]);
{ METHOD .Coord }
LineSet608.Coord := Coordinate609;
{ METHOD .Geometry }
Shape604.Geometry := LineSet608;
{ METHOD .FdChildren.Add }
HAnimSegment596.FdChildren.Add(Shape604);
{ METHOD .FdChildren.Add }
HAnimJoint595.FdChildren.Add(HAnimSegment596);
HAnimJoint610 := THAnimJointNode.Create;
HAnimJoint610.Center := Vector3(-0.1086,0,0.0762);
HAnimJoint610.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint610.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment611 := THAnimSegmentNode.Create;
Group612 := TGroupNode.Create;
TouchSensor613 := TTouchSensorNode.Create;
TouchSensor613.Description := 'r_tarsal_interphalangeal_1';
{ METHOD .FdChildren.Add }
Group612.FdChildren.Add(TouchSensor613);
Transform614 := TTransformNode.Create;
Transform614.Translation := Vector3(-0.1086,0,0.0762);
Shape615 := TShapeNode.Create;
Appearance616 := TAppearanceNode.Create;
Material617 := TMaterialNode.Create;
Material617.DiffuseColor := Vector3(0.95,0.45,0.35);
end;

procedure InitHAnimGimbalJointController22Part42;
begin

{ METHOD .SetMaterial }
Appearance616.Material := Material617;
{ METHOD .Appearance }
Shape615.Appearance := Appearance616;
Sphere618 := TSphereNode.Create;
Sphere618.Radius := 0.03;
{ METHOD .Geometry }
Shape615.Geometry := Sphere618;
{ METHOD .FdChildren.Add }
Transform614.FdChildren.Add(Shape615);
{ METHOD .FdChildren.Add }
Group612.FdChildren.Add(Transform614);
Shape619 := TShapeNode.Create;
Appearance620 := TAppearanceNode.Create;
Material621 := TMaterialNode.Create;
Material621.DiffuseColor := Vector3(0,0,0);
Material621.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance620.Material := Material621;
LineProperties622 := TLinePropertiesNode.Create;
LineProperties622.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance620.LineProperties := LineProperties622;
{ METHOD .Appearance }
Shape619.Appearance := Appearance620;
LineSet623 := TLineSetNode.Create;
LineSet623.SetVertexCount([2]);
Coordinate624 := TCoordinateNode.Create;
Coordinate624.SetPoint([Vector3(-0.1086,0,0.0762),Vector3(-0.1086,-0.0001,0.1156)]);
{ METHOD .Coord }
LineSet623.Coord := Coordinate624;
{ METHOD .Geometry }
Shape619.Geometry := LineSet623;
{ METHOD .FdChildren.Add }
Group612.FdChildren.Add(Shape619);
{ METHOD .FdChildren.Add }
HAnimSegment611.FdChildren.Add(Group612);
{ METHOD .FdChildren.Add }
HAnimJoint610.FdChildren.Add(HAnimSegment611);
{ METHOD .FdChildren.Add }
HAnimJoint595.FdChildren.Add(HAnimJoint610);
{ METHOD .FdChildren.Add }
HAnimJoint580.FdChildren.Add(HAnimJoint595);
{ METHOD .FdChildren.Add }
HAnimJoint565.FdChildren.Add(HAnimJoint580);
{ METHOD .FdChildren.Add }
HAnimJoint542.FdChildren.Add(HAnimJoint565);
HAnimJoint625 := THAnimJointNode.Create;
HAnimJoint625.Center := Vector3(-0.0812,0.025,-0.0805);
HAnimJoint625.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint625.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment626 := THAnimSegmentNode.Create;
TouchSensor627 := TTouchSensorNode.Create;
TouchSensor627.Description := 'r_cuneonavicular_2';
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(TouchSensor627);
Transform628 := TTransformNode.Create;
Transform628.Translation := Vector3(-0.0812,0.025,-0.0805);
end;

procedure InitHAnimGimbalJointController22Part43;
begin

Transform629 := TTransformNode.Create;
Shape630 := TShapeNode.Create;
Appearance631 := TAppearanceNode.Create;
Material632 := TMaterialNode.Create;
Material632.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance631.Material := Material632;
{ METHOD .Appearance }
Shape630.Appearance := Appearance631;
Sphere633 := TSphereNode.Create;
Sphere633.Radius := 0.03;
{ METHOD .Geometry }
Shape630.Geometry := Sphere633;
{ METHOD .FdChildren.Add }
Transform629.FdChildren.Add(Shape630);
{ METHOD .FdChildren.Add }
Transform628.FdChildren.Add(Transform629);
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(Transform628);
Shape634 := TShapeNode.Create;
Appearance635 := TAppearanceNode.Create;
Material636 := TMaterialNode.Create;
Material636.DiffuseColor := Vector3(0,0,0);
Material636.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance635.Material := Material636;
LineProperties637 := TLinePropertiesNode.Create;
LineProperties637.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance635.LineProperties := LineProperties637;
{ METHOD .Appearance }
Shape634.Appearance := Appearance635;
LineSet638 := TLineSetNode.Create;
LineSet638.SetVertexCount([2]);
Coordinate639 := TCoordinateNode.Create;
Coordinate639.SetPoint([Vector3(-0.0812,0.025,-0.0805),Vector3(-0.08,0.0175,-0.0608)]);
{ METHOD .Coord }
LineSet638.Coord := Coordinate639;
{ METHOD .Geometry }
Shape634.Geometry := LineSet638;
{ METHOD .FdChildren.Add }
HAnimSegment626.FdChildren.Add(Shape634);
{ METHOD .FdChildren.Add }
HAnimJoint625.FdChildren.Add(HAnimSegment626);
HAnimJoint640 := THAnimJointNode.Create;
HAnimJoint640.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimJoint640.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint640.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment641 := THAnimSegmentNode.Create;
TouchSensor642 := TTouchSensorNode.Create;
TouchSensor642.Description := 'r_tarsometatarsal_2';
{ METHOD .FdChildren.Add }
HAnimSegment641.FdChildren.Add(TouchSensor642);
Transform643 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part44;
begin

Transform643.Translation := Vector3(-0.08,0.0175,-0.0608);
Transform644 := TTransformNode.Create;
Shape645 := TShapeNode.Create;
Appearance646 := TAppearanceNode.Create;
Material647 := TMaterialNode.Create;
Material647.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance646.Material := Material647;
{ METHOD .Appearance }
Shape645.Appearance := Appearance646;
Sphere648 := TSphereNode.Create;
Sphere648.Radius := 0.03;
{ METHOD .Geometry }
Shape645.Geometry := Sphere648;
{ METHOD .FdChildren.Add }
Transform644.FdChildren.Add(Shape645);
{ METHOD .FdChildren.Add }
Transform643.FdChildren.Add(Transform644);
{ METHOD .FdChildren.Add }
HAnimSegment641.FdChildren.Add(Transform643);
Shape649 := TShapeNode.Create;
Appearance650 := TAppearanceNode.Create;
Material651 := TMaterialNode.Create;
Material651.DiffuseColor := Vector3(0,0,0);
Material651.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance650.Material := Material651;
LineProperties652 := TLinePropertiesNode.Create;
LineProperties652.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance650.LineProperties := LineProperties652;
{ METHOD .Appearance }
Shape649.Appearance := Appearance650;
LineSet653 := TLineSetNode.Create;
LineSet653.SetVertexCount([2]);
Coordinate654 := TCoordinateNode.Create;
Coordinate654.SetPoint([Vector3(-0.08,0.0175,-0.0608),Vector3(-0.0823,0.0064,-0.004)]);
{ METHOD .Coord }
LineSet653.Coord := Coordinate654;
{ METHOD .Geometry }
Shape649.Geometry := LineSet653;
{ METHOD .FdChildren.Add }
HAnimSegment641.FdChildren.Add(Shape649);
{ METHOD .FdChildren.Add }
HAnimJoint640.FdChildren.Add(HAnimSegment641);
HAnimJoint655 := THAnimJointNode.Create;
HAnimJoint655.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimJoint655.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint655.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment656 := THAnimSegmentNode.Create;
TouchSensor657 := TTouchSensorNode.Create;
TouchSensor657.Description := 'r_metatarsophalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment656.FdChildren.Add(TouchSensor657);
end;

procedure InitHAnimGimbalJointController22Part45;
begin

Transform658 := TTransformNode.Create;
Transform658.Translation := Vector3(-0.0823,0.0064,-0.004);
Transform659 := TTransformNode.Create;
Shape660 := TShapeNode.Create;
Appearance661 := TAppearanceNode.Create;
Material662 := TMaterialNode.Create;
Material662.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance661.Material := Material662;
{ METHOD .Appearance }
Shape660.Appearance := Appearance661;
Sphere663 := TSphereNode.Create;
Sphere663.Radius := 0.03;
{ METHOD .Geometry }
Shape660.Geometry := Sphere663;
{ METHOD .FdChildren.Add }
Transform659.FdChildren.Add(Shape660);
{ METHOD .FdChildren.Add }
Transform658.FdChildren.Add(Transform659);
{ METHOD .FdChildren.Add }
HAnimSegment656.FdChildren.Add(Transform658);
Shape664 := TShapeNode.Create;
Appearance665 := TAppearanceNode.Create;
Material666 := TMaterialNode.Create;
Material666.DiffuseColor := Vector3(0,0,0);
Material666.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance665.Material := Material666;
LineProperties667 := TLinePropertiesNode.Create;
LineProperties667.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance665.LineProperties := LineProperties667;
{ METHOD .Appearance }
Shape664.Appearance := Appearance665;
LineSet668 := TLineSetNode.Create;
LineSet668.SetVertexCount([2]);
Coordinate669 := TCoordinateNode.Create;
Coordinate669.SetPoint([Vector3(-0.0823,0.0064,-0.004),Vector3(-0.0841,0.0041,0.0121)]);
{ METHOD .Coord }
LineSet668.Coord := Coordinate669;
{ METHOD .Geometry }
Shape664.Geometry := LineSet668;
{ METHOD .FdChildren.Add }
HAnimSegment656.FdChildren.Add(Shape664);
{ METHOD .FdChildren.Add }
HAnimJoint655.FdChildren.Add(HAnimSegment656);
HAnimJoint670 := THAnimJointNode.Create;
HAnimJoint670.Center := Vector3(-0.0841,0.0041,0.0121);
HAnimJoint670.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint670.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment671 := THAnimSegmentNode.Create;
TouchSensor672 := TTouchSensorNode.Create;
TouchSensor672.Description := 'r_tarsal_proximal_interphalangeal_2';
end;

procedure InitHAnimGimbalJointController22Part46;
begin

{ METHOD .FdChildren.Add }
HAnimSegment671.FdChildren.Add(TouchSensor672);
Transform673 := TTransformNode.Create;
Transform673.Translation := Vector3(-0.0841,0.0041,0.0121);
Transform674 := TTransformNode.Create;
Shape675 := TShapeNode.Create;
Appearance676 := TAppearanceNode.Create;
Material677 := TMaterialNode.Create;
Material677.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance676.Material := Material677;
{ METHOD .Appearance }
Shape675.Appearance := Appearance676;
Sphere678 := TSphereNode.Create;
Sphere678.Radius := 0.03;
{ METHOD .Geometry }
Shape675.Geometry := Sphere678;
{ METHOD .FdChildren.Add }
Transform674.FdChildren.Add(Shape675);
{ METHOD .FdChildren.Add }
Transform673.FdChildren.Add(Transform674);
{ METHOD .FdChildren.Add }
HAnimSegment671.FdChildren.Add(Transform673);
Shape679 := TShapeNode.Create;
Appearance680 := TAppearanceNode.Create;
Material681 := TMaterialNode.Create;
Material681.DiffuseColor := Vector3(0,0,0);
Material681.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance680.Material := Material681;
LineProperties682 := TLinePropertiesNode.Create;
LineProperties682.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance680.LineProperties := LineProperties682;
{ METHOD .Appearance }
Shape679.Appearance := Appearance680;
LineSet683 := TLineSetNode.Create;
LineSet683.SetVertexCount([2]);
Coordinate684 := TCoordinateNode.Create;
Coordinate684.SetPoint([Vector3(-0.0841,0.0041,0.0121),Vector3(-0.0841,0.0013,0.0216)]);
{ METHOD .Coord }
LineSet683.Coord := Coordinate684;
{ METHOD .Geometry }
Shape679.Geometry := LineSet683;
{ METHOD .FdChildren.Add }
HAnimSegment671.FdChildren.Add(Shape679);
{ METHOD .FdChildren.Add }
HAnimJoint670.FdChildren.Add(HAnimSegment671);
HAnimJoint685 := THAnimJointNode.Create;
HAnimJoint685.Center := Vector3(-0.0841,0.0013,0.0216);
HAnimJoint685.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint685.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment686 := THAnimSegmentNode.Create;
Group687 := TGroupNode.Create;
end;

procedure InitHAnimGimbalJointController22Part47;
begin

TouchSensor688 := TTouchSensorNode.Create;
TouchSensor688.Description := 'r_tarsal_distal_interphalangeal_2';
{ METHOD .FdChildren.Add }
Group687.FdChildren.Add(TouchSensor688);
Transform689 := TTransformNode.Create;
Transform689.Translation := Vector3(-0.0841,0.0013,0.0216);
Shape690 := TShapeNode.Create;
Appearance691 := TAppearanceNode.Create;
Material692 := TMaterialNode.Create;
Material692.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance691.Material := Material692;
{ METHOD .Appearance }
Shape690.Appearance := Appearance691;
Sphere693 := TSphereNode.Create;
Sphere693.Radius := 0.03;
{ METHOD .Geometry }
Shape690.Geometry := Sphere693;
{ METHOD .FdChildren.Add }
Transform689.FdChildren.Add(Shape690);
{ METHOD .FdChildren.Add }
Group687.FdChildren.Add(Transform689);
Shape694 := TShapeNode.Create;
Appearance695 := TAppearanceNode.Create;
Material696 := TMaterialNode.Create;
Material696.DiffuseColor := Vector3(0,0,0);
Material696.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance695.Material := Material696;
LineProperties697 := TLinePropertiesNode.Create;
LineProperties697.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance695.LineProperties := LineProperties697;
{ METHOD .Appearance }
Shape694.Appearance := Appearance695;
LineSet698 := TLineSetNode.Create;
LineSet698.SetVertexCount([2]);
Coordinate699 := TCoordinateNode.Create;
Coordinate699.SetPoint([Vector3(-0.0841,0.0013,0.0216),Vector3(-0.0841,-0.0029,0.036)]);
{ METHOD .Coord }
LineSet698.Coord := Coordinate699;
{ METHOD .Geometry }
Shape694.Geometry := LineSet698;
{ METHOD .FdChildren.Add }
Group687.FdChildren.Add(Shape694);
{ METHOD .FdChildren.Add }
HAnimSegment686.FdChildren.Add(Group687);
{ METHOD .FdChildren.Add }
HAnimJoint685.FdChildren.Add(HAnimSegment686);
{ METHOD .FdChildren.Add }
HAnimJoint670.FdChildren.Add(HAnimJoint685);
{ METHOD .FdChildren.Add }
HAnimJoint655.FdChildren.Add(HAnimJoint670);
{ METHOD .FdChildren.Add }
HAnimJoint640.FdChildren.Add(HAnimJoint655);
{ METHOD .FdChildren.Add }
HAnimJoint625.FdChildren.Add(HAnimJoint640);
{ METHOD .FdChildren.Add }
HAnimJoint542.FdChildren.Add(HAnimJoint625);
end;

procedure InitHAnimGimbalJointController22Part48;
begin

HAnimJoint700 := THAnimJointNode.Create;
HAnimJoint700.Center := Vector3(-0.0928,0.0248,-0.0821);
HAnimJoint700.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint700.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment701 := THAnimSegmentNode.Create;
TouchSensor702 := TTouchSensorNode.Create;
TouchSensor702.Description := 'r_cuneonavicular_3';
{ METHOD .FdChildren.Add }
HAnimSegment701.FdChildren.Add(TouchSensor702);
Transform703 := TTransformNode.Create;
Transform703.Translation := Vector3(-0.0928,0.0248,-0.0821);
Transform704 := TTransformNode.Create;
Shape705 := TShapeNode.Create;
Appearance706 := TAppearanceNode.Create;
Material707 := TMaterialNode.Create;
Material707.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance706.Material := Material707;
{ METHOD .Appearance }
Shape705.Appearance := Appearance706;
Sphere708 := TSphereNode.Create;
Sphere708.Radius := 0.03;
{ METHOD .Geometry }
Shape705.Geometry := Sphere708;
{ METHOD .FdChildren.Add }
Transform704.FdChildren.Add(Shape705);
{ METHOD .FdChildren.Add }
Transform703.FdChildren.Add(Transform704);
{ METHOD .FdChildren.Add }
HAnimSegment701.FdChildren.Add(Transform703);
Shape709 := TShapeNode.Create;
Appearance710 := TAppearanceNode.Create;
Material711 := TMaterialNode.Create;
Material711.DiffuseColor := Vector3(0,0,0);
Material711.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance710.Material := Material711;
LineProperties712 := TLinePropertiesNode.Create;
LineProperties712.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance710.LineProperties := LineProperties712;
{ METHOD .Appearance }
Shape709.Appearance := Appearance710;
LineSet713 := TLineSetNode.Create;
LineSet713.SetVertexCount([2]);
Coordinate714 := TCoordinateNode.Create;
Coordinate714.SetPoint([Vector3(-0.0928,0.0248,-0.0821),Vector3(-0.0944,0.0175,-0.0625)]);
{ METHOD .Coord }
LineSet713.Coord := Coordinate714;
{ METHOD .Geometry }
Shape709.Geometry := LineSet713;
{ METHOD .FdChildren.Add }
HAnimSegment701.FdChildren.Add(Shape709);
end;

procedure InitHAnimGimbalJointController22Part49;
begin

{ METHOD .FdChildren.Add }
HAnimJoint700.FdChildren.Add(HAnimSegment701);
HAnimJoint715 := THAnimJointNode.Create;
HAnimJoint715.Center := Vector3(-0.0944,0.0175,-0.0625);
HAnimJoint715.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint715.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment716 := THAnimSegmentNode.Create;
TouchSensor717 := TTouchSensorNode.Create;
TouchSensor717.Description := 'r_tarsometatarsal_3';
{ METHOD .FdChildren.Add }
HAnimSegment716.FdChildren.Add(TouchSensor717);
Transform718 := TTransformNode.Create;
Transform718.Translation := Vector3(-0.0944,0.0175,-0.0625);
Transform719 := TTransformNode.Create;
Shape720 := TShapeNode.Create;
Appearance721 := TAppearanceNode.Create;
Material722 := TMaterialNode.Create;
Material722.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance721.Material := Material722;
{ METHOD .Appearance }
Shape720.Appearance := Appearance721;
Sphere723 := TSphereNode.Create;
Sphere723.Radius := 0.03;
{ METHOD .Geometry }
Shape720.Geometry := Sphere723;
{ METHOD .FdChildren.Add }
Transform719.FdChildren.Add(Shape720);
{ METHOD .FdChildren.Add }
Transform718.FdChildren.Add(Transform719);
{ METHOD .FdChildren.Add }
HAnimSegment716.FdChildren.Add(Transform718);
Shape724 := TShapeNode.Create;
Appearance725 := TAppearanceNode.Create;
Material726 := TMaterialNode.Create;
Material726.DiffuseColor := Vector3(0,0,0);
Material726.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance725.Material := Material726;
LineProperties727 := TLinePropertiesNode.Create;
LineProperties727.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance725.LineProperties := LineProperties727;
{ METHOD .Appearance }
Shape724.Appearance := Appearance725;
LineSet728 := TLineSetNode.Create;
LineSet728.SetVertexCount([2]);
Coordinate729 := TCoordinateNode.Create;
Coordinate729.SetPoint([Vector3(-0.0944,0.0175,-0.0625),Vector3(-0.0963,0.0065,-0.0065)]);
{ METHOD .Coord }
LineSet728.Coord := Coordinate729;
{ METHOD .Geometry }
Shape724.Geometry := LineSet728;
end;

procedure InitHAnimGimbalJointController22Part50;
begin

{ METHOD .FdChildren.Add }
HAnimSegment716.FdChildren.Add(Shape724);
{ METHOD .FdChildren.Add }
HAnimJoint715.FdChildren.Add(HAnimSegment716);
HAnimJoint730 := THAnimJointNode.Create;
HAnimJoint730.Center := Vector3(-0.0963,0.0065,-0.0065);
HAnimJoint730.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint730.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment731 := THAnimSegmentNode.Create;
TouchSensor732 := TTouchSensorNode.Create;
TouchSensor732.Description := 'r_metatarsophalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment731.FdChildren.Add(TouchSensor732);
Transform733 := TTransformNode.Create;
Transform733.Translation := Vector3(-0.0963,0.0065,-0.0065);
Transform734 := TTransformNode.Create;
Shape735 := TShapeNode.Create;
Appearance736 := TAppearanceNode.Create;
Material737 := TMaterialNode.Create;
Material737.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance736.Material := Material737;
{ METHOD .Appearance }
Shape735.Appearance := Appearance736;
Sphere738 := TSphereNode.Create;
Sphere738.Radius := 0.03;
{ METHOD .Geometry }
Shape735.Geometry := Sphere738;
{ METHOD .FdChildren.Add }
Transform734.FdChildren.Add(Shape735);
{ METHOD .FdChildren.Add }
Transform733.FdChildren.Add(Transform734);
{ METHOD .FdChildren.Add }
HAnimSegment731.FdChildren.Add(Transform733);
Shape739 := TShapeNode.Create;
Appearance740 := TAppearanceNode.Create;
Material741 := TMaterialNode.Create;
Material741.DiffuseColor := Vector3(0,0,0);
Material741.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance740.Material := Material741;
LineProperties742 := TLinePropertiesNode.Create;
LineProperties742.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance740.LineProperties := LineProperties742;
{ METHOD .Appearance }
Shape739.Appearance := Appearance740;
LineSet743 := TLineSetNode.Create;
LineSet743.SetVertexCount([2]);
Coordinate744 := TCoordinateNode.Create;
Coordinate744.SetPoint([Vector3(-0.0963,0.0065,-0.0065),Vector3(-0.0987,0.0034,0.0086)]);
{ METHOD .Coord }
LineSet743.Coord := Coordinate744;
end;

procedure InitHAnimGimbalJointController22Part51;
begin

{ METHOD .Geometry }
Shape739.Geometry := LineSet743;
{ METHOD .FdChildren.Add }
HAnimSegment731.FdChildren.Add(Shape739);
{ METHOD .FdChildren.Add }
HAnimJoint730.FdChildren.Add(HAnimSegment731);
HAnimJoint745 := THAnimJointNode.Create;
HAnimJoint745.Center := Vector3(-0.0987,0.0034,0.0086);
HAnimJoint745.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint745.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment746 := THAnimSegmentNode.Create;
TouchSensor747 := TTouchSensorNode.Create;
TouchSensor747.Description := 'r_tarsal_proximal_interphalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment746.FdChildren.Add(TouchSensor747);
Transform748 := TTransformNode.Create;
Transform748.Translation := Vector3(-0.0987,0.0034,0.0086);
Transform749 := TTransformNode.Create;
Shape750 := TShapeNode.Create;
Appearance751 := TAppearanceNode.Create;
Material752 := TMaterialNode.Create;
Material752.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance751.Material := Material752;
{ METHOD .Appearance }
Shape750.Appearance := Appearance751;
Sphere753 := TSphereNode.Create;
Sphere753.Radius := 0.03;
{ METHOD .Geometry }
Shape750.Geometry := Sphere753;
{ METHOD .FdChildren.Add }
Transform749.FdChildren.Add(Shape750);
{ METHOD .FdChildren.Add }
Transform748.FdChildren.Add(Transform749);
{ METHOD .FdChildren.Add }
HAnimSegment746.FdChildren.Add(Transform748);
Shape754 := TShapeNode.Create;
Appearance755 := TAppearanceNode.Create;
Material756 := TMaterialNode.Create;
Material756.DiffuseColor := Vector3(0,0,0);
Material756.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance755.Material := Material756;
LineProperties757 := TLinePropertiesNode.Create;
LineProperties757.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance755.LineProperties := LineProperties757;
{ METHOD .Appearance }
Shape754.Appearance := Appearance755;
LineSet758 := TLineSetNode.Create;
LineSet758.SetVertexCount([2]);
Coordinate759 := TCoordinateNode.Create;
Coordinate759.SetPoint([Vector3(-0.0987,0.0034,0.0086),Vector3(-0.1002,0.0013,0.0178)]);
end;

procedure InitHAnimGimbalJointController22Part52;
begin

{ METHOD .Coord }
LineSet758.Coord := Coordinate759;
{ METHOD .Geometry }
Shape754.Geometry := LineSet758;
{ METHOD .FdChildren.Add }
HAnimSegment746.FdChildren.Add(Shape754);
{ METHOD .FdChildren.Add }
HAnimJoint745.FdChildren.Add(HAnimSegment746);
HAnimJoint760 := THAnimJointNode.Create;
HAnimJoint760.Center := Vector3(-0.1002,0.0013,0.0178);
HAnimJoint760.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint760.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment761 := THAnimSegmentNode.Create;
Group762 := TGroupNode.Create;
TouchSensor763 := TTouchSensorNode.Create;
TouchSensor763.Description := 'r_tarsal_distal_interphalangeal_3';
{ METHOD .FdChildren.Add }
Group762.FdChildren.Add(TouchSensor763);
Transform764 := TTransformNode.Create;
Transform764.Translation := Vector3(-0.1002,0.0013,0.0178);
Shape765 := TShapeNode.Create;
Appearance766 := TAppearanceNode.Create;
Material767 := TMaterialNode.Create;
Material767.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance766.Material := Material767;
{ METHOD .Appearance }
Shape765.Appearance := Appearance766;
Sphere768 := TSphereNode.Create;
Sphere768.Radius := 0.03;
{ METHOD .Geometry }
Shape765.Geometry := Sphere768;
{ METHOD .FdChildren.Add }
Transform764.FdChildren.Add(Shape765);
{ METHOD .FdChildren.Add }
Group762.FdChildren.Add(Transform764);
Shape769 := TShapeNode.Create;
Appearance770 := TAppearanceNode.Create;
Material771 := TMaterialNode.Create;
Material771.DiffuseColor := Vector3(0,0,0);
Material771.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance770.Material := Material771;
LineProperties772 := TLinePropertiesNode.Create;
LineProperties772.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance770.LineProperties := LineProperties772;
{ METHOD .Appearance }
Shape769.Appearance := Appearance770;
LineSet773 := TLineSetNode.Create;
LineSet773.SetVertexCount([2]);
Coordinate774 := TCoordinateNode.Create;
Coordinate774.SetPoint([Vector3(-0.1002,0.0013,0.0178),Vector3(-0.1026,-0.002,0.0322)]);
end;

procedure InitHAnimGimbalJointController22Part53;
begin

{ METHOD .Coord }
LineSet773.Coord := Coordinate774;
{ METHOD .Geometry }
Shape769.Geometry := LineSet773;
{ METHOD .FdChildren.Add }
Group762.FdChildren.Add(Shape769);
{ METHOD .FdChildren.Add }
HAnimSegment761.FdChildren.Add(Group762);
{ METHOD .FdChildren.Add }
HAnimJoint760.FdChildren.Add(HAnimSegment761);
{ METHOD .FdChildren.Add }
HAnimJoint745.FdChildren.Add(HAnimJoint760);
{ METHOD .FdChildren.Add }
HAnimJoint730.FdChildren.Add(HAnimJoint745);
{ METHOD .FdChildren.Add }
HAnimJoint715.FdChildren.Add(HAnimJoint730);
{ METHOD .FdChildren.Add }
HAnimJoint700.FdChildren.Add(HAnimJoint715);
{ METHOD .FdChildren.Add }
HAnimJoint542.FdChildren.Add(HAnimJoint700);
{ METHOD .FdChildren.Add }
HAnimJoint523.FdChildren.Add(HAnimJoint542);
HAnimJoint775 := THAnimJointNode.Create;
HAnimJoint775.Center := Vector3(-0.0889,0.0494,-0.1278);
HAnimJoint775.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint775.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment776 := THAnimSegmentNode.Create;
TouchSensor777 := TTouchSensorNode.Create;
TouchSensor777.Description := 'r_calcaneocuboid';
{ METHOD .FdChildren.Add }
HAnimSegment776.FdChildren.Add(TouchSensor777);
Transform778 := TTransformNode.Create;
Transform778.Translation := Vector3(-0.0889,0.0494,-0.1278);
Transform779 := TTransformNode.Create;
Shape780 := TShapeNode.Create;
Appearance781 := TAppearanceNode.Create;
Material782 := TMaterialNode.Create;
Material782.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance781.Material := Material782;
{ METHOD .Appearance }
Shape780.Appearance := Appearance781;
Sphere783 := TSphereNode.Create;
Sphere783.Radius := 0.03;
{ METHOD .Geometry }
Shape780.Geometry := Sphere783;
{ METHOD .FdChildren.Add }
Transform779.FdChildren.Add(Shape780);
{ METHOD .FdChildren.Add }
Transform778.FdChildren.Add(Transform779);
{ METHOD .FdChildren.Add }
HAnimSegment776.FdChildren.Add(Transform778);
Shape784 := TShapeNode.Create;
Appearance785 := TAppearanceNode.Create;
Material786 := TMaterialNode.Create;
Material786.DiffuseColor := Vector3(0,0,0);
Material786.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance785.Material := Material786;
end;

procedure InitHAnimGimbalJointController22Part54;
begin

LineProperties787 := TLinePropertiesNode.Create;
LineProperties787.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance785.LineProperties := LineProperties787;
{ METHOD .Appearance }
Shape784.Appearance := Appearance785;
LineSet788 := TLineSetNode.Create;
LineSet788.SetVertexCount([2]);
Coordinate789 := TCoordinateNode.Create;
Coordinate789.SetPoint([Vector3(-0.0889,0.0494,-0.1278),Vector3(-0.1105,0.0267,-0.0998)]);
{ METHOD .Coord }
LineSet788.Coord := Coordinate789;
{ METHOD .Geometry }
Shape784.Geometry := LineSet788;
{ METHOD .FdChildren.Add }
HAnimSegment776.FdChildren.Add(Shape784);
{ METHOD .FdChildren.Add }
HAnimJoint775.FdChildren.Add(HAnimSegment776);
HAnimJoint790 := THAnimJointNode.Create;
HAnimJoint790.Center := Vector3(-0.1105,0.0267,-0.0998);
HAnimJoint790.SetLlimit([-0.1745,-0.1396,-0.1396]);
HAnimJoint790.SetUlimit([0.1745,0.1396,0.1396]);
HAnimSegment791 := THAnimSegmentNode.Create;
TouchSensor792 := TTouchSensorNode.Create;
TouchSensor792.Description := 'r_transversetarsal';
{ METHOD .FdChildren.Add }
HAnimSegment791.FdChildren.Add(TouchSensor792);
Transform793 := TTransformNode.Create;
Transform793.Translation := Vector3(-0.1105,0.0267,-0.0998);
Transform794 := TTransformNode.Create;
Shape795 := TShapeNode.Create;
Appearance796 := TAppearanceNode.Create;
Material797 := TMaterialNode.Create;
Material797.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance796.Material := Material797;
{ METHOD .Appearance }
Shape795.Appearance := Appearance796;
Sphere798 := TSphereNode.Create;
Sphere798.Radius := 0.03;
{ METHOD .Geometry }
Shape795.Geometry := Sphere798;
{ METHOD .FdChildren.Add }
Transform794.FdChildren.Add(Shape795);
{ METHOD .FdChildren.Add }
Transform793.FdChildren.Add(Transform794);
{ METHOD .FdChildren.Add }
HAnimSegment791.FdChildren.Add(Transform793);
Shape799 := TShapeNode.Create;
Appearance800 := TAppearanceNode.Create;
Material801 := TMaterialNode.Create;
Material801.DiffuseColor := Vector3(0,0,0);
Material801.EmissiveColor := Vector3(0.95,0.45,0.35);
end;

procedure InitHAnimGimbalJointController22Part55;
begin

{ METHOD .SetMaterial }
Appearance800.Material := Material801;
LineProperties802 := TLinePropertiesNode.Create;
LineProperties802.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance800.LineProperties := LineProperties802;
{ METHOD .Appearance }
Shape799.Appearance := Appearance800;
LineSet803 := TLineSetNode.Create;
LineSet803.SetVertexCount([2]);
Coordinate804 := TCoordinateNode.Create;
Coordinate804.SetPoint([Vector3(-0.1105,0.0267,-0.0998),Vector3(-0.1063,0.016,-0.0634)]);
{ METHOD .Coord }
LineSet803.Coord := Coordinate804;
{ METHOD .Geometry }
Shape799.Geometry := LineSet803;
{ METHOD .FdChildren.Add }
HAnimSegment791.FdChildren.Add(Shape799);
Shape805 := TShapeNode.Create;
{ METHOD .Appearance }
Shape805.Appearance := Appearance800;
LineSet807 := TLineSetNode.Create;
LineSet807.SetVertexCount([2]);
Coordinate808 := TCoordinateNode.Create;
Coordinate808.SetPoint([Vector3(-0.1105,0.0267,-0.0998),Vector3(-0.1206,0.0124,-0.0671)]);
{ METHOD .Coord }
LineSet807.Coord := Coordinate808;
{ METHOD .Geometry }
Shape805.Geometry := LineSet807;
{ METHOD .FdChildren.Add }
HAnimSegment791.FdChildren.Add(Shape805);
{ METHOD .FdChildren.Add }
HAnimJoint790.FdChildren.Add(HAnimSegment791);
HAnimJoint809 := THAnimJointNode.Create;
HAnimJoint809.Center := Vector3(-0.1063,0.016,-0.0634);
HAnimJoint809.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint809.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment810 := THAnimSegmentNode.Create;
TouchSensor811 := TTouchSensorNode.Create;
TouchSensor811.Description := 'r_tarsometatarsal_4';
{ METHOD .FdChildren.Add }
HAnimSegment810.FdChildren.Add(TouchSensor811);
Transform812 := TTransformNode.Create;
Transform812.Translation := Vector3(-0.1063,0.016,-0.0634);
Transform813 := TTransformNode.Create;
Shape814 := TShapeNode.Create;
Appearance815 := TAppearanceNode.Create;
Material816 := TMaterialNode.Create;
Material816.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance815.Material := Material816;
{ METHOD .Appearance }
Shape814.Appearance := Appearance815;
Sphere817 := TSphereNode.Create;
end;

procedure InitHAnimGimbalJointController22Part56;
begin

Sphere817.Radius := 0.03;
{ METHOD .Geometry }
Shape814.Geometry := Sphere817;
{ METHOD .FdChildren.Add }
Transform813.FdChildren.Add(Shape814);
{ METHOD .FdChildren.Add }
Transform812.FdChildren.Add(Transform813);
{ METHOD .FdChildren.Add }
HAnimSegment810.FdChildren.Add(Transform812);
Shape818 := TShapeNode.Create;
Appearance819 := TAppearanceNode.Create;
Material820 := TMaterialNode.Create;
Material820.DiffuseColor := Vector3(0,0,0);
Material820.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance819.Material := Material820;
LineProperties821 := TLinePropertiesNode.Create;
LineProperties821.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance819.LineProperties := LineProperties821;
{ METHOD .Appearance }
Shape818.Appearance := Appearance819;
LineSet822 := TLineSetNode.Create;
LineSet822.SetVertexCount([2]);
Coordinate823 := TCoordinateNode.Create;
Coordinate823.SetPoint([Vector3(-0.1063,0.016,-0.0634),Vector3(-0.1097,0.0058,-0.0107)]);
{ METHOD .Coord }
LineSet822.Coord := Coordinate823;
{ METHOD .Geometry }
Shape818.Geometry := LineSet822;
{ METHOD .FdChildren.Add }
HAnimSegment810.FdChildren.Add(Shape818);
{ METHOD .FdChildren.Add }
HAnimJoint809.FdChildren.Add(HAnimSegment810);
HAnimJoint824 := THAnimJointNode.Create;
HAnimJoint824.Center := Vector3(-0.1097,0.0058,-0.0107);
HAnimJoint824.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint824.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment825 := THAnimSegmentNode.Create;
TouchSensor826 := TTouchSensorNode.Create;
TouchSensor826.Description := 'r_metatarsophalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment825.FdChildren.Add(TouchSensor826);
Transform827 := TTransformNode.Create;
Transform827.Translation := Vector3(-0.1097,0.0058,-0.0107);
Transform828 := TTransformNode.Create;
Shape829 := TShapeNode.Create;
Appearance830 := TAppearanceNode.Create;
Material831 := TMaterialNode.Create;
Material831.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance830.Material := Material831;
{ METHOD .Appearance }
Shape829.Appearance := Appearance830;
end;

procedure InitHAnimGimbalJointController22Part57;
begin

Sphere832 := TSphereNode.Create;
Sphere832.Radius := 0.03;
{ METHOD .Geometry }
Shape829.Geometry := Sphere832;
{ METHOD .FdChildren.Add }
Transform828.FdChildren.Add(Shape829);
{ METHOD .FdChildren.Add }
Transform827.FdChildren.Add(Transform828);
{ METHOD .FdChildren.Add }
HAnimSegment825.FdChildren.Add(Transform827);
Shape833 := TShapeNode.Create;
Appearance834 := TAppearanceNode.Create;
Material835 := TMaterialNode.Create;
Material835.DiffuseColor := Vector3(0,0,0);
Material835.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance834.Material := Material835;
LineProperties836 := TLinePropertiesNode.Create;
LineProperties836.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance834.LineProperties := LineProperties836;
{ METHOD .Appearance }
Shape833.Appearance := Appearance834;
LineSet837 := TLineSetNode.Create;
LineSet837.SetVertexCount([2]);
Coordinate838 := TCoordinateNode.Create;
Coordinate838.SetPoint([Vector3(-0.1097,0.0058,-0.0107),Vector3(-0.114,0.0037,0.0044)]);
{ METHOD .Coord }
LineSet837.Coord := Coordinate838;
{ METHOD .Geometry }
Shape833.Geometry := LineSet837;
{ METHOD .FdChildren.Add }
HAnimSegment825.FdChildren.Add(Shape833);
{ METHOD .FdChildren.Add }
HAnimJoint824.FdChildren.Add(HAnimSegment825);
HAnimJoint839 := THAnimJointNode.Create;
HAnimJoint839.Center := Vector3(-0.114,0.0037,0.0044);
HAnimJoint839.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint839.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment840 := THAnimSegmentNode.Create;
TouchSensor841 := TTouchSensorNode.Create;
TouchSensor841.Description := 'r_tarsal_proximal_interphalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(TouchSensor841);
Transform842 := TTransformNode.Create;
Transform842.Translation := Vector3(-0.114,0.0037,0.0044);
Transform843 := TTransformNode.Create;
Shape844 := TShapeNode.Create;
Appearance845 := TAppearanceNode.Create;
Material846 := TMaterialNode.Create;
Material846.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance845.Material := Material846;
end;

procedure InitHAnimGimbalJointController22Part58;
begin

{ METHOD .Appearance }
Shape844.Appearance := Appearance845;
Sphere847 := TSphereNode.Create;
Sphere847.Radius := 0.03;
{ METHOD .Geometry }
Shape844.Geometry := Sphere847;
{ METHOD .FdChildren.Add }
Transform843.FdChildren.Add(Shape844);
{ METHOD .FdChildren.Add }
Transform842.FdChildren.Add(Transform843);
{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(Transform842);
Shape848 := TShapeNode.Create;
Appearance849 := TAppearanceNode.Create;
Material850 := TMaterialNode.Create;
Material850.DiffuseColor := Vector3(0,0,0);
Material850.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance849.Material := Material850;
LineProperties851 := TLinePropertiesNode.Create;
LineProperties851.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance849.LineProperties := LineProperties851;
{ METHOD .Appearance }
Shape848.Appearance := Appearance849;
LineSet852 := TLineSetNode.Create;
LineSet852.SetVertexCount([2]);
Coordinate853 := TCoordinateNode.Create;
Coordinate853.SetPoint([Vector3(-0.114,0.0037,0.0044),Vector3(-0.1155,0.0008,0.0118)]);
{ METHOD .Coord }
LineSet852.Coord := Coordinate853;
{ METHOD .Geometry }
Shape848.Geometry := LineSet852;
{ METHOD .FdChildren.Add }
HAnimSegment840.FdChildren.Add(Shape848);
{ METHOD .FdChildren.Add }
HAnimJoint839.FdChildren.Add(HAnimSegment840);
HAnimJoint854 := THAnimJointNode.Create;
HAnimJoint854.Center := Vector3(-0.1155,0.0008,0.0118);
HAnimJoint854.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint854.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment855 := THAnimSegmentNode.Create;
Group856 := TGroupNode.Create;
TouchSensor857 := TTouchSensorNode.Create;
TouchSensor857.Description := 'r_tarsal_distal_interphalangeal_4';
{ METHOD .FdChildren.Add }
Group856.FdChildren.Add(TouchSensor857);
Transform858 := TTransformNode.Create;
Transform858.Translation := Vector3(-0.1155,0.0008,0.0118);
Shape859 := TShapeNode.Create;
Appearance860 := TAppearanceNode.Create;
Material861 := TMaterialNode.Create;
Material861.DiffuseColor := Vector3(0.95,0.45,0.35);
end;

procedure InitHAnimGimbalJointController22Part59;
begin

{ METHOD .SetMaterial }
Appearance860.Material := Material861;
{ METHOD .Appearance }
Shape859.Appearance := Appearance860;
Sphere862 := TSphereNode.Create;
Sphere862.Radius := 0.03;
{ METHOD .Geometry }
Shape859.Geometry := Sphere862;
{ METHOD .FdChildren.Add }
Transform858.FdChildren.Add(Shape859);
{ METHOD .FdChildren.Add }
Group856.FdChildren.Add(Transform858);
Shape863 := TShapeNode.Create;
Appearance864 := TAppearanceNode.Create;
Material865 := TMaterialNode.Create;
Material865.DiffuseColor := Vector3(0,0,0);
Material865.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance864.Material := Material865;
LineProperties866 := TLinePropertiesNode.Create;
LineProperties866.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance864.LineProperties := LineProperties866;
{ METHOD .Appearance }
Shape863.Appearance := Appearance864;
LineSet867 := TLineSetNode.Create;
LineSet867.SetVertexCount([2]);
Coordinate868 := TCoordinateNode.Create;
Coordinate868.SetPoint([Vector3(-0.1155,0.0008,0.0118),Vector3(-0.1183,-0.0046,0.0255)]);
{ METHOD .Coord }
LineSet867.Coord := Coordinate868;
{ METHOD .Geometry }
Shape863.Geometry := LineSet867;
{ METHOD .FdChildren.Add }
Group856.FdChildren.Add(Shape863);
{ METHOD .FdChildren.Add }
HAnimSegment855.FdChildren.Add(Group856);
{ METHOD .FdChildren.Add }
HAnimJoint854.FdChildren.Add(HAnimSegment855);
{ METHOD .FdChildren.Add }
HAnimJoint839.FdChildren.Add(HAnimJoint854);
{ METHOD .FdChildren.Add }
HAnimJoint824.FdChildren.Add(HAnimJoint839);
{ METHOD .FdChildren.Add }
HAnimJoint809.FdChildren.Add(HAnimJoint824);
{ METHOD .FdChildren.Add }
HAnimJoint790.FdChildren.Add(HAnimJoint809);
HAnimJoint869 := THAnimJointNode.Create;
HAnimJoint869.Center := Vector3(-0.1206,0.0124,-0.0671);
HAnimJoint869.SetLlimit([-0.1396,-0.0698,-0.0175]);
HAnimJoint869.SetUlimit([0.1396,0.0698,0.0175]);
HAnimSegment870 := THAnimSegmentNode.Create;
TouchSensor871 := TTouchSensorNode.Create;
TouchSensor871.Description := 'r_tarsometatarsal_5';
{ METHOD .FdChildren.Add }
HAnimSegment870.FdChildren.Add(TouchSensor871);
Transform872 := TTransformNode.Create;
Transform872.Translation := Vector3(-0.1206,0.0124,-0.0671);
end;

procedure InitHAnimGimbalJointController22Part60;
begin

Transform873 := TTransformNode.Create;
Shape874 := TShapeNode.Create;
Appearance875 := TAppearanceNode.Create;
Material876 := TMaterialNode.Create;
Material876.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance875.Material := Material876;
{ METHOD .Appearance }
Shape874.Appearance := Appearance875;
Sphere877 := TSphereNode.Create;
Sphere877.Radius := 0.03;
{ METHOD .Geometry }
Shape874.Geometry := Sphere877;
{ METHOD .FdChildren.Add }
Transform873.FdChildren.Add(Shape874);
{ METHOD .FdChildren.Add }
Transform872.FdChildren.Add(Transform873);
{ METHOD .FdChildren.Add }
HAnimSegment870.FdChildren.Add(Transform872);
Shape878 := TShapeNode.Create;
Appearance879 := TAppearanceNode.Create;
Material880 := TMaterialNode.Create;
Material880.DiffuseColor := Vector3(0,0,0);
Material880.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance879.Material := Material880;
LineProperties881 := TLinePropertiesNode.Create;
LineProperties881.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance879.LineProperties := LineProperties881;
{ METHOD .Appearance }
Shape878.Appearance := Appearance879;
LineSet882 := TLineSetNode.Create;
LineSet882.SetVertexCount([2]);
Coordinate883 := TCoordinateNode.Create;
Coordinate883.SetPoint([Vector3(-0.1206,0.0124,-0.0671),Vector3(-0.1239,0.0051,-0.0153)]);
{ METHOD .Coord }
LineSet882.Coord := Coordinate883;
{ METHOD .Geometry }
Shape878.Geometry := LineSet882;
{ METHOD .FdChildren.Add }
HAnimSegment870.FdChildren.Add(Shape878);
{ METHOD .FdChildren.Add }
HAnimJoint869.FdChildren.Add(HAnimSegment870);
HAnimJoint884 := THAnimJointNode.Create;
HAnimJoint884.Center := Vector3(-0.1239,0.0051,-0.0153);
HAnimJoint884.SetLlimit([-1.0472,-0.1745,-0.0175]);
HAnimJoint884.SetUlimit([0.6981,0.1745,0.0175]);
HAnimSegment885 := THAnimSegmentNode.Create;
TouchSensor886 := TTouchSensorNode.Create;
TouchSensor886.Description := 'r_metatarsophalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment885.FdChildren.Add(TouchSensor886);
Transform887 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part61;
begin

Transform887.Translation := Vector3(-0.1239,0.0051,-0.0153);
Transform888 := TTransformNode.Create;
Shape889 := TShapeNode.Create;
Appearance890 := TAppearanceNode.Create;
Material891 := TMaterialNode.Create;
Material891.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance890.Material := Material891;
{ METHOD .Appearance }
Shape889.Appearance := Appearance890;
Sphere892 := TSphereNode.Create;
Sphere892.Radius := 0.03;
{ METHOD .Geometry }
Shape889.Geometry := Sphere892;
{ METHOD .FdChildren.Add }
Transform888.FdChildren.Add(Shape889);
{ METHOD .FdChildren.Add }
Transform887.FdChildren.Add(Transform888);
{ METHOD .FdChildren.Add }
HAnimSegment885.FdChildren.Add(Transform887);
Shape893 := TShapeNode.Create;
Appearance894 := TAppearanceNode.Create;
Material895 := TMaterialNode.Create;
Material895.DiffuseColor := Vector3(0,0,0);
Material895.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance894.Material := Material895;
LineProperties896 := TLinePropertiesNode.Create;
LineProperties896.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance894.LineProperties := LineProperties896;
{ METHOD .Appearance }
Shape893.Appearance := Appearance894;
LineSet897 := TLineSetNode.Create;
LineSet897.SetVertexCount([2]);
Coordinate898 := TCoordinateNode.Create;
Coordinate898.SetPoint([Vector3(-0.1239,0.0051,-0.0153),Vector3(-0.1262,0.0023,-0.0077)]);
{ METHOD .Coord }
LineSet897.Coord := Coordinate898;
{ METHOD .Geometry }
Shape893.Geometry := LineSet897;
{ METHOD .FdChildren.Add }
HAnimSegment885.FdChildren.Add(Shape893);
{ METHOD .FdChildren.Add }
HAnimJoint884.FdChildren.Add(HAnimSegment885);
HAnimJoint899 := THAnimJointNode.Create;
HAnimJoint899.Center := Vector3(-0.1262,0.0023,-0.0077);
HAnimJoint899.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint899.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment900 := THAnimSegmentNode.Create;
TouchSensor901 := TTouchSensorNode.Create;
TouchSensor901.Description := 'r_tarsal_proximal_interphalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment900.FdChildren.Add(TouchSensor901);
end;

procedure InitHAnimGimbalJointController22Part62;
begin

Transform902 := TTransformNode.Create;
Transform902.Translation := Vector3(-0.1262,0.0023,-0.0077);
Transform903 := TTransformNode.Create;
Shape904 := TShapeNode.Create;
Appearance905 := TAppearanceNode.Create;
Material906 := TMaterialNode.Create;
Material906.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance905.Material := Material906;
{ METHOD .Appearance }
Shape904.Appearance := Appearance905;
Sphere907 := TSphereNode.Create;
Sphere907.Radius := 0.03;
{ METHOD .Geometry }
Shape904.Geometry := Sphere907;
{ METHOD .FdChildren.Add }
Transform903.FdChildren.Add(Shape904);
{ METHOD .FdChildren.Add }
Transform902.FdChildren.Add(Transform903);
{ METHOD .FdChildren.Add }
HAnimSegment900.FdChildren.Add(Transform902);
Shape908 := TShapeNode.Create;
Appearance909 := TAppearanceNode.Create;
Material910 := TMaterialNode.Create;
Material910.DiffuseColor := Vector3(0,0,0);
Material910.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance909.Material := Material910;
LineProperties911 := TLinePropertiesNode.Create;
LineProperties911.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance909.LineProperties := LineProperties911;
{ METHOD .Appearance }
Shape908.Appearance := Appearance909;
LineSet912 := TLineSetNode.Create;
LineSet912.SetVertexCount([2]);
Coordinate913 := TCoordinateNode.Create;
Coordinate913.SetPoint([Vector3(-0.1262,0.0023,-0.0077),Vector3(-0.1271,0,0)]);
{ METHOD .Coord }
LineSet912.Coord := Coordinate913;
{ METHOD .Geometry }
Shape908.Geometry := LineSet912;
{ METHOD .FdChildren.Add }
HAnimSegment900.FdChildren.Add(Shape908);
{ METHOD .FdChildren.Add }
HAnimJoint899.FdChildren.Add(HAnimSegment900);
HAnimJoint914 := THAnimJointNode.Create;
HAnimJoint914.Center := Vector3(-0.1271,0,0);
HAnimJoint914.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint914.SetUlimit([1.2217,0.0175,0.0175]);
HAnimSegment915 := THAnimSegmentNode.Create;
Group916 := TGroupNode.Create;
TouchSensor917 := TTouchSensorNode.Create;
end;

procedure InitHAnimGimbalJointController22Part63;
begin

TouchSensor917.Description := 'r_tarsal_distal_interphalangeal_5';
{ METHOD .FdChildren.Add }
Group916.FdChildren.Add(TouchSensor917);
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(-0.1271,0,0);
Shape919 := TShapeNode.Create;
Appearance920 := TAppearanceNode.Create;
Material921 := TMaterialNode.Create;
Material921.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance920.Material := Material921;
{ METHOD .Appearance }
Shape919.Appearance := Appearance920;
Sphere922 := TSphereNode.Create;
Sphere922.Radius := 0.03;
{ METHOD .Geometry }
Shape919.Geometry := Sphere922;
{ METHOD .FdChildren.Add }
Transform918.FdChildren.Add(Shape919);
{ METHOD .FdChildren.Add }
Group916.FdChildren.Add(Transform918);
Shape923 := TShapeNode.Create;
Appearance924 := TAppearanceNode.Create;
Material925 := TMaterialNode.Create;
Material925.DiffuseColor := Vector3(0,0,0);
Material925.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance924.Material := Material925;
LineProperties926 := TLinePropertiesNode.Create;
LineProperties926.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance924.LineProperties := LineProperties926;
{ METHOD .Appearance }
Shape923.Appearance := Appearance924;
LineSet927 := TLineSetNode.Create;
LineSet927.SetVertexCount([2]);
Coordinate928 := TCoordinateNode.Create;
Coordinate928.SetPoint([Vector3(-0.1271,0,0),Vector3(-0.1288,-0.0043,0.0143)]);
{ METHOD .Coord }
LineSet927.Coord := Coordinate928;
{ METHOD .Geometry }
Shape923.Geometry := LineSet927;
{ METHOD .FdChildren.Add }
Group916.FdChildren.Add(Shape923);
{ METHOD .FdChildren.Add }
HAnimSegment915.FdChildren.Add(Group916);
{ METHOD .FdChildren.Add }
HAnimJoint914.FdChildren.Add(HAnimSegment915);
{ METHOD .FdChildren.Add }
HAnimJoint899.FdChildren.Add(HAnimJoint914);
{ METHOD .FdChildren.Add }
HAnimJoint884.FdChildren.Add(HAnimJoint899);
{ METHOD .FdChildren.Add }
HAnimJoint869.FdChildren.Add(HAnimJoint884);
{ METHOD .FdChildren.Add }
HAnimJoint790.FdChildren.Add(HAnimJoint869);
{ METHOD .FdChildren.Add }
HAnimJoint775.FdChildren.Add(HAnimJoint790);
{ METHOD .FdChildren.Add }
HAnimJoint523.FdChildren.Add(HAnimJoint775);
end;

procedure InitHAnimGimbalJointController22Part64;
begin

{ METHOD .FdChildren.Add }
HAnimJoint508.FdChildren.Add(HAnimJoint523);
{ METHOD .FdChildren.Add }
HAnimJoint493.FdChildren.Add(HAnimJoint508);
{ METHOD .FdChildren.Add }
HAnimJoint38.FdChildren.Add(HAnimJoint493);
{ METHOD .FdChildren.Add }
HAnimJoint19.FdChildren.Add(HAnimJoint38);
{ ==================== BRANCH 2: SPINE, NECK, HEAD & ARMS ==================== }
HAnimJoint929 := THAnimJointNode.Create;
HAnimJoint929.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimJoint929.SetLlimit([-0.1047,-0.0873,-0.0873]);
HAnimJoint929.SetUlimit([0.1745,0.0873,0.0873]);
HAnimSegment930 := THAnimSegmentNode.Create;
TouchSensor931 := TTouchSensorNode.Create;
TouchSensor931.Description := 'vl5';
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(TouchSensor931);
Transform932 := TTransformNode.Create;
Transform932.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform933 := TTransformNode.Create;
Shape934 := TShapeNode.Create;
Appearance935 := TAppearanceNode.Create;
Material936 := TMaterialNode.Create;
Material936.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance935.Material := Material936;
{ METHOD .Appearance }
Shape934.Appearance := Appearance935;
Sphere937 := TSphereNode.Create;
Sphere937.Radius := 0.03;
{ METHOD .Geometry }
Shape934.Geometry := Sphere937;
{ METHOD .FdChildren.Add }
Transform933.FdChildren.Add(Shape934);
{ METHOD .FdChildren.Add }
Transform932.FdChildren.Add(Transform933);
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(Transform932);
Shape938 := TShapeNode.Create;
Appearance939 := TAppearanceNode.Create;
Material940 := TMaterialNode.Create;
Material940.DiffuseColor := Vector3(0,0,0);
Material940.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance939.Material := Material940;
LineProperties941 := TLinePropertiesNode.Create;
LineProperties941.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance939.LineProperties := LineProperties941;
{ METHOD .Appearance }
Shape938.Appearance := Appearance939;
LineSet942 := TLineSetNode.Create;
LineSet942.SetVertexCount([2]);
Coordinate943 := TCoordinateNode.Create;
end;

procedure InitHAnimGimbalJointController22Part65;
begin

Coordinate943.SetPoint([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
{ METHOD .Coord }
LineSet942.Coord := Coordinate943;
{ METHOD .Geometry }
Shape938.Geometry := LineSet942;
{ METHOD .FdChildren.Add }
HAnimSegment930.FdChildren.Add(Shape938);
{ METHOD .FdChildren.Add }
HAnimJoint929.FdChildren.Add(HAnimSegment930);
HAnimJoint944 := THAnimJointNode.Create;
HAnimJoint944.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimJoint944.SetLlimit([-0.1047,-0.0873,-0.0873]);
HAnimJoint944.SetUlimit([0.1745,0.0873,0.0873]);
HAnimSegment945 := THAnimSegmentNode.Create;
TouchSensor946 := TTouchSensorNode.Create;
TouchSensor946.Description := 'vl4';
{ METHOD .FdChildren.Add }
HAnimSegment945.FdChildren.Add(TouchSensor946);
Transform947 := TTransformNode.Create;
Transform947.Translation := Vector3(0.0035,1.0925,-0.0787);
Transform948 := TTransformNode.Create;
Shape949 := TShapeNode.Create;
Appearance950 := TAppearanceNode.Create;
Material951 := TMaterialNode.Create;
Material951.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance950.Material := Material951;
{ METHOD .Appearance }
Shape949.Appearance := Appearance950;
Sphere952 := TSphereNode.Create;
Sphere952.Radius := 0.03;
{ METHOD .Geometry }
Shape949.Geometry := Sphere952;
{ METHOD .FdChildren.Add }
Transform948.FdChildren.Add(Shape949);
{ METHOD .FdChildren.Add }
Transform947.FdChildren.Add(Transform948);
{ METHOD .FdChildren.Add }
HAnimSegment945.FdChildren.Add(Transform947);
Shape953 := TShapeNode.Create;
Appearance954 := TAppearanceNode.Create;
Material955 := TMaterialNode.Create;
Material955.DiffuseColor := Vector3(0,0,0);
Material955.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance954.Material := Material955;
LineProperties956 := TLinePropertiesNode.Create;
LineProperties956.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance954.LineProperties := LineProperties956;
{ METHOD .Appearance }
Shape953.Appearance := Appearance954;
LineSet957 := TLineSetNode.Create;
LineSet957.SetVertexCount([2]);
end;

procedure InitHAnimGimbalJointController22Part66;
begin

Coordinate958 := TCoordinateNode.Create;
Coordinate958.SetPoint([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
{ METHOD .Coord }
LineSet957.Coord := Coordinate958;
{ METHOD .Geometry }
Shape953.Geometry := LineSet957;
{ METHOD .FdChildren.Add }
HAnimSegment945.FdChildren.Add(Shape953);
{ METHOD .FdChildren.Add }
HAnimJoint944.FdChildren.Add(HAnimSegment945);
HAnimJoint959 := THAnimJointNode.Create;
HAnimJoint959.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimJoint959.SetLlimit([-0.1047,-0.0873,-0.0873]);
HAnimJoint959.SetUlimit([0.1745,0.0873,0.0873]);
HAnimSegment960 := THAnimSegmentNode.Create;
TouchSensor961 := TTouchSensorNode.Create;
TouchSensor961.Description := 'vl3';
{ METHOD .FdChildren.Add }
HAnimSegment960.FdChildren.Add(TouchSensor961);
Transform962 := TTransformNode.Create;
Transform962.Translation := Vector3(0.0041,1.1276,-0.0796);
Transform963 := TTransformNode.Create;
Shape964 := TShapeNode.Create;
Appearance965 := TAppearanceNode.Create;
Material966 := TMaterialNode.Create;
Material966.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance965.Material := Material966;
{ METHOD .Appearance }
Shape964.Appearance := Appearance965;
Sphere967 := TSphereNode.Create;
Sphere967.Radius := 0.03;
{ METHOD .Geometry }
Shape964.Geometry := Sphere967;
{ METHOD .FdChildren.Add }
Transform963.FdChildren.Add(Shape964);
{ METHOD .FdChildren.Add }
Transform962.FdChildren.Add(Transform963);
{ METHOD .FdChildren.Add }
HAnimSegment960.FdChildren.Add(Transform962);
Shape968 := TShapeNode.Create;
Appearance969 := TAppearanceNode.Create;
Material970 := TMaterialNode.Create;
Material970.DiffuseColor := Vector3(0,0,0);
Material970.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance969.Material := Material970;
LineProperties971 := TLinePropertiesNode.Create;
LineProperties971.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance969.LineProperties := LineProperties971;
{ METHOD .Appearance }
Shape968.Appearance := Appearance969;
LineSet972 := TLineSetNode.Create;
end;

procedure InitHAnimGimbalJointController22Part67;
begin

LineSet972.SetVertexCount([2]);
Coordinate973 := TCoordinateNode.Create;
Coordinate973.SetPoint([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
{ METHOD .Coord }
LineSet972.Coord := Coordinate973;
{ METHOD .Geometry }
Shape968.Geometry := LineSet972;
{ METHOD .FdChildren.Add }
HAnimSegment960.FdChildren.Add(Shape968);
{ METHOD .FdChildren.Add }
HAnimJoint959.FdChildren.Add(HAnimSegment960);
HAnimJoint974 := THAnimJointNode.Create;
HAnimJoint974.Center := Vector3(0.0045,1.1546,-0.08);
HAnimJoint974.SetLlimit([-0.1047,-0.0873,-0.0873]);
HAnimJoint974.SetUlimit([0.1745,0.0873,0.0873]);
HAnimSegment975 := THAnimSegmentNode.Create;
TouchSensor976 := TTouchSensorNode.Create;
TouchSensor976.Description := 'vl2';
{ METHOD .FdChildren.Add }
HAnimSegment975.FdChildren.Add(TouchSensor976);
Transform977 := TTransformNode.Create;
Transform977.Translation := Vector3(0.0045,1.1546,-0.08);
Transform978 := TTransformNode.Create;
Shape979 := TShapeNode.Create;
Appearance980 := TAppearanceNode.Create;
Material981 := TMaterialNode.Create;
Material981.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance980.Material := Material981;
{ METHOD .Appearance }
Shape979.Appearance := Appearance980;
Sphere982 := TSphereNode.Create;
Sphere982.Radius := 0.03;
{ METHOD .Geometry }
Shape979.Geometry := Sphere982;
{ METHOD .FdChildren.Add }
Transform978.FdChildren.Add(Shape979);
{ METHOD .FdChildren.Add }
Transform977.FdChildren.Add(Transform978);
{ METHOD .FdChildren.Add }
HAnimSegment975.FdChildren.Add(Transform977);
Shape983 := TShapeNode.Create;
Appearance984 := TAppearanceNode.Create;
Material985 := TMaterialNode.Create;
Material985.DiffuseColor := Vector3(0,0,0);
Material985.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance984.Material := Material985;
LineProperties986 := TLinePropertiesNode.Create;
LineProperties986.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance984.LineProperties := LineProperties986;
{ METHOD .Appearance }
Shape983.Appearance := Appearance984;
end;

procedure InitHAnimGimbalJointController22Part68;
begin

LineSet987 := TLineSetNode.Create;
LineSet987.SetVertexCount([2]);
Coordinate988 := TCoordinateNode.Create;
Coordinate988.SetPoint([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
{ METHOD .Coord }
LineSet987.Coord := Coordinate988;
{ METHOD .Geometry }
Shape983.Geometry := LineSet987;
{ METHOD .FdChildren.Add }
HAnimSegment975.FdChildren.Add(Shape983);
{ METHOD .FdChildren.Add }
HAnimJoint974.FdChildren.Add(HAnimSegment975);
HAnimJoint989 := THAnimJointNode.Create;
HAnimJoint989.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimJoint989.SetLlimit([-0.1047,-0.0873,-0.0873]);
HAnimJoint989.SetUlimit([0.1745,0.0873,0.0873]);
HAnimSegment990 := THAnimSegmentNode.Create;
TouchSensor991 := TTouchSensorNode.Create;
TouchSensor991.Description := 'vl1';
{ METHOD .FdChildren.Add }
HAnimSegment990.FdChildren.Add(TouchSensor991);
Transform992 := TTransformNode.Create;
Transform992.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform993 := TTransformNode.Create;
Shape994 := TShapeNode.Create;
Appearance995 := TAppearanceNode.Create;
Material996 := TMaterialNode.Create;
Material996.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance995.Material := Material996;
{ METHOD .Appearance }
Shape994.Appearance := Appearance995;
Sphere997 := TSphereNode.Create;
Sphere997.Radius := 0.03;
{ METHOD .Geometry }
Shape994.Geometry := Sphere997;
{ METHOD .FdChildren.Add }
Transform993.FdChildren.Add(Shape994);
{ METHOD .FdChildren.Add }
Transform992.FdChildren.Add(Transform993);
{ METHOD .FdChildren.Add }
HAnimSegment990.FdChildren.Add(Transform992);
Shape998 := TShapeNode.Create;
Appearance999 := TAppearanceNode.Create;
Material1000 := TMaterialNode.Create;
Material1000.DiffuseColor := Vector3(0,0,0);
Material1000.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance999.Material := Material1000;
LineProperties1001 := TLinePropertiesNode.Create;
LineProperties1001.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance999.LineProperties := LineProperties1001;
end;

procedure InitHAnimGimbalJointController22Part69;
begin

{ METHOD .Appearance }
Shape998.Appearance := Appearance999;
LineSet1002 := TLineSetNode.Create;
LineSet1002.SetVertexCount([2]);
Coordinate1003 := TCoordinateNode.Create;
Coordinate1003.SetPoint([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
{ METHOD .Coord }
LineSet1002.Coord := Coordinate1003;
{ METHOD .Geometry }
Shape998.Geometry := LineSet1002;
{ METHOD .FdChildren.Add }
HAnimSegment990.FdChildren.Add(Shape998);
{ METHOD .FdChildren.Add }
HAnimJoint989.FdChildren.Add(HAnimSegment990);
HAnimJoint1004 := THAnimJointNode.Create;
HAnimJoint1004.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimJoint1004.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1004.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1005 := THAnimSegmentNode.Create;
TouchSensor1006 := TTouchSensorNode.Create;
TouchSensor1006.Description := 'vt12';
{ METHOD .FdChildren.Add }
HAnimSegment1005.FdChildren.Add(TouchSensor1006);
Transform1007 := TTransformNode.Create;
Transform1007.Translation := Vector3(0.0051,1.2278,-0.0808);
Transform1008 := TTransformNode.Create;
Shape1009 := TShapeNode.Create;
Appearance1010 := TAppearanceNode.Create;
Material1011 := TMaterialNode.Create;
Material1011.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1010.Material := Material1011;
{ METHOD .Appearance }
Shape1009.Appearance := Appearance1010;
Sphere1012 := TSphereNode.Create;
Sphere1012.Radius := 0.03;
{ METHOD .Geometry }
Shape1009.Geometry := Sphere1012;
{ METHOD .FdChildren.Add }
Transform1008.FdChildren.Add(Shape1009);
{ METHOD .FdChildren.Add }
Transform1007.FdChildren.Add(Transform1008);
{ METHOD .FdChildren.Add }
HAnimSegment1005.FdChildren.Add(Transform1007);
Shape1013 := TShapeNode.Create;
Appearance1014 := TAppearanceNode.Create;
Material1015 := TMaterialNode.Create;
Material1015.DiffuseColor := Vector3(0,0,0);
Material1015.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1014.Material := Material1015;
LineProperties1016 := TLinePropertiesNode.Create;
LineProperties1016.LinewidthScaleFactor := 6;
end;

procedure InitHAnimGimbalJointController22Part70;
begin

{ METHOD .LineProperties }
Appearance1014.LineProperties := LineProperties1016;
{ METHOD .Appearance }
Shape1013.Appearance := Appearance1014;
LineSet1017 := TLineSetNode.Create;
LineSet1017.SetVertexCount([2]);
Coordinate1018 := TCoordinateNode.Create;
Coordinate1018.SetPoint([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
{ METHOD .Coord }
LineSet1017.Coord := Coordinate1018;
{ METHOD .Geometry }
Shape1013.Geometry := LineSet1017;
{ METHOD .FdChildren.Add }
HAnimSegment1005.FdChildren.Add(Shape1013);
{ METHOD .FdChildren.Add }
HAnimJoint1004.FdChildren.Add(HAnimSegment1005);
HAnimJoint1019 := THAnimJointNode.Create;
HAnimJoint1019.Center := Vector3(0.0053,1.2679,-0.081);
HAnimJoint1019.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1019.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1020 := THAnimSegmentNode.Create;
TouchSensor1021 := TTouchSensorNode.Create;
TouchSensor1021.Description := 'vt11';
{ METHOD .FdChildren.Add }
HAnimSegment1020.FdChildren.Add(TouchSensor1021);
Transform1022 := TTransformNode.Create;
Transform1022.Translation := Vector3(0.0053,1.2679,-0.081);
Transform1023 := TTransformNode.Create;
Shape1024 := TShapeNode.Create;
Appearance1025 := TAppearanceNode.Create;
Material1026 := TMaterialNode.Create;
Material1026.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1025.Material := Material1026;
{ METHOD .Appearance }
Shape1024.Appearance := Appearance1025;
Sphere1027 := TSphereNode.Create;
Sphere1027.Radius := 0.03;
{ METHOD .Geometry }
Shape1024.Geometry := Sphere1027;
{ METHOD .FdChildren.Add }
Transform1023.FdChildren.Add(Shape1024);
{ METHOD .FdChildren.Add }
Transform1022.FdChildren.Add(Transform1023);
{ METHOD .FdChildren.Add }
HAnimSegment1020.FdChildren.Add(Transform1022);
Shape1028 := TShapeNode.Create;
Appearance1029 := TAppearanceNode.Create;
Material1030 := TMaterialNode.Create;
Material1030.DiffuseColor := Vector3(0,0,0);
Material1030.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1029.Material := Material1030;
LineProperties1031 := TLinePropertiesNode.Create;
end;

procedure InitHAnimGimbalJointController22Part71;
begin

LineProperties1031.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1029.LineProperties := LineProperties1031;
{ METHOD .Appearance }
Shape1028.Appearance := Appearance1029;
LineSet1032 := TLineSetNode.Create;
LineSet1032.SetVertexCount([2]);
Coordinate1033 := TCoordinateNode.Create;
Coordinate1033.SetPoint([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
{ METHOD .Coord }
LineSet1032.Coord := Coordinate1033;
{ METHOD .Geometry }
Shape1028.Geometry := LineSet1032;
{ METHOD .FdChildren.Add }
HAnimSegment1020.FdChildren.Add(Shape1028);
{ METHOD .FdChildren.Add }
HAnimJoint1019.FdChildren.Add(HAnimSegment1020);
HAnimJoint1034 := THAnimJointNode.Create;
HAnimJoint1034.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimJoint1034.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1034.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1035 := THAnimSegmentNode.Create;
TouchSensor1036 := TTouchSensorNode.Create;
TouchSensor1036.Description := 'vt10';
{ METHOD .FdChildren.Add }
HAnimSegment1035.FdChildren.Add(TouchSensor1036);
Transform1037 := TTransformNode.Create;
Transform1037.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform1038 := TTransformNode.Create;
Shape1039 := TShapeNode.Create;
Appearance1040 := TAppearanceNode.Create;
Material1041 := TMaterialNode.Create;
Material1041.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1040.Material := Material1041;
{ METHOD .Appearance }
Shape1039.Appearance := Appearance1040;
Sphere1042 := TSphereNode.Create;
Sphere1042.Radius := 0.03;
{ METHOD .Geometry }
Shape1039.Geometry := Sphere1042;
{ METHOD .FdChildren.Add }
Transform1038.FdChildren.Add(Shape1039);
{ METHOD .FdChildren.Add }
Transform1037.FdChildren.Add(Transform1038);
{ METHOD .FdChildren.Add }
HAnimSegment1035.FdChildren.Add(Transform1037);
Shape1043 := TShapeNode.Create;
Appearance1044 := TAppearanceNode.Create;
Material1045 := TMaterialNode.Create;
Material1045.DiffuseColor := Vector3(0,0,0);
Material1045.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1044.Material := Material1045;
end;

procedure InitHAnimGimbalJointController22Part72;
begin

LineProperties1046 := TLinePropertiesNode.Create;
LineProperties1046.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1044.LineProperties := LineProperties1046;
{ METHOD .Appearance }
Shape1043.Appearance := Appearance1044;
LineSet1047 := TLineSetNode.Create;
LineSet1047.SetVertexCount([2]);
Coordinate1048 := TCoordinateNode.Create;
Coordinate1048.SetPoint([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
{ METHOD .Coord }
LineSet1047.Coord := Coordinate1048;
{ METHOD .Geometry }
Shape1043.Geometry := LineSet1047;
{ METHOD .FdChildren.Add }
HAnimSegment1035.FdChildren.Add(Shape1043);
{ METHOD .FdChildren.Add }
HAnimJoint1034.FdChildren.Add(HAnimSegment1035);
HAnimJoint1049 := THAnimJointNode.Create;
HAnimJoint1049.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimJoint1049.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1049.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1050 := THAnimSegmentNode.Create;
TouchSensor1051 := TTouchSensorNode.Create;
TouchSensor1051.Description := 'vt9';
{ METHOD .FdChildren.Add }
HAnimSegment1050.FdChildren.Add(TouchSensor1051);
Transform1052 := TTransformNode.Create;
Transform1052.Translation := Vector3(0.0057,1.3126,-0.0838);
Transform1053 := TTransformNode.Create;
Shape1054 := TShapeNode.Create;
Appearance1055 := TAppearanceNode.Create;
Material1056 := TMaterialNode.Create;
Material1056.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1055.Material := Material1056;
{ METHOD .Appearance }
Shape1054.Appearance := Appearance1055;
Sphere1057 := TSphereNode.Create;
Sphere1057.Radius := 0.03;
{ METHOD .Geometry }
Shape1054.Geometry := Sphere1057;
{ METHOD .FdChildren.Add }
Transform1053.FdChildren.Add(Shape1054);
{ METHOD .FdChildren.Add }
Transform1052.FdChildren.Add(Transform1053);
{ METHOD .FdChildren.Add }
HAnimSegment1050.FdChildren.Add(Transform1052);
Shape1058 := TShapeNode.Create;
Appearance1059 := TAppearanceNode.Create;
Material1060 := TMaterialNode.Create;
Material1060.DiffuseColor := Vector3(0,0,0);
Material1060.EmissiveColor := Vector3(0.4,0.8,0.4);
end;

procedure InitHAnimGimbalJointController22Part73;
begin

{ METHOD .SetMaterial }
Appearance1059.Material := Material1060;
LineProperties1061 := TLinePropertiesNode.Create;
LineProperties1061.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1059.LineProperties := LineProperties1061;
{ METHOD .Appearance }
Shape1058.Appearance := Appearance1059;
LineSet1062 := TLineSetNode.Create;
LineSet1062.SetVertexCount([2]);
Coordinate1063 := TCoordinateNode.Create;
Coordinate1063.SetPoint([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
{ METHOD .Coord }
LineSet1062.Coord := Coordinate1063;
{ METHOD .Geometry }
Shape1058.Geometry := LineSet1062;
{ METHOD .FdChildren.Add }
HAnimSegment1050.FdChildren.Add(Shape1058);
{ METHOD .FdChildren.Add }
HAnimJoint1049.FdChildren.Add(HAnimSegment1050);
HAnimJoint1064 := THAnimJointNode.Create;
HAnimJoint1064.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimJoint1064.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1064.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1065 := THAnimSegmentNode.Create;
TouchSensor1066 := TTouchSensorNode.Create;
TouchSensor1066.Description := 'vt8';
{ METHOD .FdChildren.Add }
HAnimSegment1065.FdChildren.Add(TouchSensor1066);
Transform1067 := TTransformNode.Create;
Transform1067.Translation := Vector3(0.0057,1.3382,-0.0845);
Transform1068 := TTransformNode.Create;
Shape1069 := TShapeNode.Create;
Appearance1070 := TAppearanceNode.Create;
Material1071 := TMaterialNode.Create;
Material1071.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1070.Material := Material1071;
{ METHOD .Appearance }
Shape1069.Appearance := Appearance1070;
Sphere1072 := TSphereNode.Create;
Sphere1072.Radius := 0.03;
{ METHOD .Geometry }
Shape1069.Geometry := Sphere1072;
{ METHOD .FdChildren.Add }
Transform1068.FdChildren.Add(Shape1069);
{ METHOD .FdChildren.Add }
Transform1067.FdChildren.Add(Transform1068);
{ METHOD .FdChildren.Add }
HAnimSegment1065.FdChildren.Add(Transform1067);
Shape1073 := TShapeNode.Create;
Appearance1074 := TAppearanceNode.Create;
Material1075 := TMaterialNode.Create;
Material1075.DiffuseColor := Vector3(0,0,0);
end;

procedure InitHAnimGimbalJointController22Part74;
begin

Material1075.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1074.Material := Material1075;
LineProperties1076 := TLinePropertiesNode.Create;
LineProperties1076.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1074.LineProperties := LineProperties1076;
{ METHOD .Appearance }
Shape1073.Appearance := Appearance1074;
LineSet1077 := TLineSetNode.Create;
LineSet1077.SetVertexCount([2]);
Coordinate1078 := TCoordinateNode.Create;
Coordinate1078.SetPoint([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
{ METHOD .Coord }
LineSet1077.Coord := Coordinate1078;
{ METHOD .Geometry }
Shape1073.Geometry := LineSet1077;
{ METHOD .FdChildren.Add }
HAnimSegment1065.FdChildren.Add(Shape1073);
{ METHOD .FdChildren.Add }
HAnimJoint1064.FdChildren.Add(HAnimSegment1065);
HAnimJoint1079 := THAnimJointNode.Create;
HAnimJoint1079.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimJoint1079.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1079.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1080 := THAnimSegmentNode.Create;
TouchSensor1081 := TTouchSensorNode.Create;
TouchSensor1081.Description := 'vt7';
{ METHOD .FdChildren.Add }
HAnimSegment1080.FdChildren.Add(TouchSensor1081);
Transform1082 := TTransformNode.Create;
Transform1082.Translation := Vector3(0.0058,1.3625,-0.0833);
Transform1083 := TTransformNode.Create;
Shape1084 := TShapeNode.Create;
Appearance1085 := TAppearanceNode.Create;
Material1086 := TMaterialNode.Create;
Material1086.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1085.Material := Material1086;
{ METHOD .Appearance }
Shape1084.Appearance := Appearance1085;
Sphere1087 := TSphereNode.Create;
Sphere1087.Radius := 0.03;
{ METHOD .Geometry }
Shape1084.Geometry := Sphere1087;
{ METHOD .FdChildren.Add }
Transform1083.FdChildren.Add(Shape1084);
{ METHOD .FdChildren.Add }
Transform1082.FdChildren.Add(Transform1083);
{ METHOD .FdChildren.Add }
HAnimSegment1080.FdChildren.Add(Transform1082);
Shape1088 := TShapeNode.Create;
Appearance1089 := TAppearanceNode.Create;
Material1090 := TMaterialNode.Create;
end;

procedure InitHAnimGimbalJointController22Part75;
begin

Material1090.DiffuseColor := Vector3(0,0,0);
Material1090.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1089.Material := Material1090;
LineProperties1091 := TLinePropertiesNode.Create;
LineProperties1091.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1089.LineProperties := LineProperties1091;
{ METHOD .Appearance }
Shape1088.Appearance := Appearance1089;
LineSet1092 := TLineSetNode.Create;
LineSet1092.SetVertexCount([2]);
Coordinate1093 := TCoordinateNode.Create;
Coordinate1093.SetPoint([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
{ METHOD .Coord }
LineSet1092.Coord := Coordinate1093;
{ METHOD .Geometry }
Shape1088.Geometry := LineSet1092;
{ METHOD .FdChildren.Add }
HAnimSegment1080.FdChildren.Add(Shape1088);
{ METHOD .FdChildren.Add }
HAnimJoint1079.FdChildren.Add(HAnimSegment1080);
HAnimJoint1094 := THAnimJointNode.Create;
HAnimJoint1094.Center := Vector3(0.0059,1.3866,-0.08);
HAnimJoint1094.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1094.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1095 := THAnimSegmentNode.Create;
TouchSensor1096 := TTouchSensorNode.Create;
TouchSensor1096.Description := 'vt6';
{ METHOD .FdChildren.Add }
HAnimSegment1095.FdChildren.Add(TouchSensor1096);
Transform1097 := TTransformNode.Create;
Transform1097.Translation := Vector3(0.0059,1.3866,-0.08);
Transform1098 := TTransformNode.Create;
Shape1099 := TShapeNode.Create;
Appearance1100 := TAppearanceNode.Create;
Material1101 := TMaterialNode.Create;
Material1101.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1100.Material := Material1101;
{ METHOD .Appearance }
Shape1099.Appearance := Appearance1100;
Sphere1102 := TSphereNode.Create;
Sphere1102.Radius := 0.03;
{ METHOD .Geometry }
Shape1099.Geometry := Sphere1102;
{ METHOD .FdChildren.Add }
Transform1098.FdChildren.Add(Shape1099);
{ METHOD .FdChildren.Add }
Transform1097.FdChildren.Add(Transform1098);
{ METHOD .FdChildren.Add }
HAnimSegment1095.FdChildren.Add(Transform1097);
Shape1103 := TShapeNode.Create;
Appearance1104 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part76;
begin

Material1105 := TMaterialNode.Create;
Material1105.DiffuseColor := Vector3(0,0,0);
Material1105.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1104.Material := Material1105;
LineProperties1106 := TLinePropertiesNode.Create;
LineProperties1106.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1104.LineProperties := LineProperties1106;
{ METHOD .Appearance }
Shape1103.Appearance := Appearance1104;
LineSet1107 := TLineSetNode.Create;
LineSet1107.SetVertexCount([2]);
Coordinate1108 := TCoordinateNode.Create;
Coordinate1108.SetPoint([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
{ METHOD .Coord }
LineSet1107.Coord := Coordinate1108;
{ METHOD .Geometry }
Shape1103.Geometry := LineSet1107;
{ METHOD .FdChildren.Add }
HAnimSegment1095.FdChildren.Add(Shape1103);
{ METHOD .FdChildren.Add }
HAnimJoint1094.FdChildren.Add(HAnimSegment1095);
HAnimJoint1109 := THAnimJointNode.Create;
HAnimJoint1109.Center := Vector3(0.006,1.4102,-0.0745);
HAnimJoint1109.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1109.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1110 := THAnimSegmentNode.Create;
TouchSensor1111 := TTouchSensorNode.Create;
TouchSensor1111.Description := 'vt5';
{ METHOD .FdChildren.Add }
HAnimSegment1110.FdChildren.Add(TouchSensor1111);
Transform1112 := TTransformNode.Create;
Transform1112.Translation := Vector3(0.006,1.4102,-0.0745);
Transform1113 := TTransformNode.Create;
Shape1114 := TShapeNode.Create;
Appearance1115 := TAppearanceNode.Create;
Material1116 := TMaterialNode.Create;
Material1116.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1115.Material := Material1116;
{ METHOD .Appearance }
Shape1114.Appearance := Appearance1115;
Sphere1117 := TSphereNode.Create;
Sphere1117.Radius := 0.03;
{ METHOD .Geometry }
Shape1114.Geometry := Sphere1117;
{ METHOD .FdChildren.Add }
Transform1113.FdChildren.Add(Shape1114);
{ METHOD .FdChildren.Add }
Transform1112.FdChildren.Add(Transform1113);
{ METHOD .FdChildren.Add }
HAnimSegment1110.FdChildren.Add(Transform1112);
Shape1118 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part77;
begin

Appearance1119 := TAppearanceNode.Create;
Material1120 := TMaterialNode.Create;
Material1120.DiffuseColor := Vector3(0,0,0);
Material1120.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1119.Material := Material1120;
LineProperties1121 := TLinePropertiesNode.Create;
LineProperties1121.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1119.LineProperties := LineProperties1121;
{ METHOD .Appearance }
Shape1118.Appearance := Appearance1119;
LineSet1122 := TLineSetNode.Create;
LineSet1122.SetVertexCount([2]);
Coordinate1123 := TCoordinateNode.Create;
Coordinate1123.SetPoint([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
{ METHOD .Coord }
LineSet1122.Coord := Coordinate1123;
{ METHOD .Geometry }
Shape1118.Geometry := LineSet1122;
{ METHOD .FdChildren.Add }
HAnimSegment1110.FdChildren.Add(Shape1118);
{ METHOD .FdChildren.Add }
HAnimJoint1109.FdChildren.Add(HAnimSegment1110);
HAnimJoint1124 := THAnimJointNode.Create;
HAnimJoint1124.Center := Vector3(0.0061,1.432,-0.0675);
HAnimJoint1124.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1124.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1125 := THAnimSegmentNode.Create;
TouchSensor1126 := TTouchSensorNode.Create;
TouchSensor1126.Description := 'vt4';
{ METHOD .FdChildren.Add }
HAnimSegment1125.FdChildren.Add(TouchSensor1126);
Transform1127 := TTransformNode.Create;
Transform1127.Translation := Vector3(0.0061,1.432,-0.0675);
Transform1128 := TTransformNode.Create;
Shape1129 := TShapeNode.Create;
Appearance1130 := TAppearanceNode.Create;
Material1131 := TMaterialNode.Create;
Material1131.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1130.Material := Material1131;
{ METHOD .Appearance }
Shape1129.Appearance := Appearance1130;
Sphere1132 := TSphereNode.Create;
Sphere1132.Radius := 0.03;
{ METHOD .Geometry }
Shape1129.Geometry := Sphere1132;
{ METHOD .FdChildren.Add }
Transform1128.FdChildren.Add(Shape1129);
{ METHOD .FdChildren.Add }
Transform1127.FdChildren.Add(Transform1128);
{ METHOD .FdChildren.Add }
HAnimSegment1125.FdChildren.Add(Transform1127);
end;

procedure InitHAnimGimbalJointController22Part78;
begin

Shape1133 := TShapeNode.Create;
Appearance1134 := TAppearanceNode.Create;
Material1135 := TMaterialNode.Create;
Material1135.DiffuseColor := Vector3(0,0,0);
Material1135.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1134.Material := Material1135;
LineProperties1136 := TLinePropertiesNode.Create;
LineProperties1136.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1134.LineProperties := LineProperties1136;
{ METHOD .Appearance }
Shape1133.Appearance := Appearance1134;
LineSet1137 := TLineSetNode.Create;
LineSet1137.SetVertexCount([2]);
Coordinate1138 := TCoordinateNode.Create;
Coordinate1138.SetPoint([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
{ METHOD .Coord }
LineSet1137.Coord := Coordinate1138;
{ METHOD .Geometry }
Shape1133.Geometry := LineSet1137;
{ METHOD .FdChildren.Add }
HAnimSegment1125.FdChildren.Add(Shape1133);
{ METHOD .FdChildren.Add }
HAnimJoint1124.FdChildren.Add(HAnimSegment1125);
HAnimJoint1139 := THAnimJointNode.Create;
HAnimJoint1139.Center := Vector3(0.0062,1.4583,-0.057);
HAnimJoint1139.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1139.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1140 := THAnimSegmentNode.Create;
TouchSensor1141 := TTouchSensorNode.Create;
TouchSensor1141.Description := 'vt3';
{ METHOD .FdChildren.Add }
HAnimSegment1140.FdChildren.Add(TouchSensor1141);
Transform1142 := TTransformNode.Create;
Transform1142.Translation := Vector3(0.0062,1.4583,-0.057);
Transform1143 := TTransformNode.Create;
Shape1144 := TShapeNode.Create;
Appearance1145 := TAppearanceNode.Create;
Material1146 := TMaterialNode.Create;
Material1146.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1145.Material := Material1146;
{ METHOD .Appearance }
Shape1144.Appearance := Appearance1145;
Sphere1147 := TSphereNode.Create;
Sphere1147.Radius := 0.03;
{ METHOD .Geometry }
Shape1144.Geometry := Sphere1147;
{ METHOD .FdChildren.Add }
Transform1143.FdChildren.Add(Shape1144);
{ METHOD .FdChildren.Add }
Transform1142.FdChildren.Add(Transform1143);
end;

procedure InitHAnimGimbalJointController22Part79;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1140.FdChildren.Add(Transform1142);
Shape1148 := TShapeNode.Create;
Appearance1149 := TAppearanceNode.Create;
Material1150 := TMaterialNode.Create;
Material1150.DiffuseColor := Vector3(0,0,0);
Material1150.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1149.Material := Material1150;
LineProperties1151 := TLinePropertiesNode.Create;
LineProperties1151.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1149.LineProperties := LineProperties1151;
{ METHOD .Appearance }
Shape1148.Appearance := Appearance1149;
LineSet1152 := TLineSetNode.Create;
LineSet1152.SetVertexCount([2]);
Coordinate1153 := TCoordinateNode.Create;
Coordinate1153.SetPoint([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
{ METHOD .Coord }
LineSet1152.Coord := Coordinate1153;
{ METHOD .Geometry }
Shape1148.Geometry := LineSet1152;
{ METHOD .FdChildren.Add }
HAnimSegment1140.FdChildren.Add(Shape1148);
{ METHOD .FdChildren.Add }
HAnimJoint1139.FdChildren.Add(HAnimSegment1140);
HAnimJoint1154 := THAnimJointNode.Create;
HAnimJoint1154.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimJoint1154.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1154.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1155 := THAnimSegmentNode.Create;
TouchSensor1156 := TTouchSensorNode.Create;
TouchSensor1156.Description := 'vt2';
{ METHOD .FdChildren.Add }
HAnimSegment1155.FdChildren.Add(TouchSensor1156);
Transform1157 := TTransformNode.Create;
Transform1157.Translation := Vector3(0.0063,1.4761,-0.0484);
Transform1158 := TTransformNode.Create;
Shape1159 := TShapeNode.Create;
Appearance1160 := TAppearanceNode.Create;
Material1161 := TMaterialNode.Create;
Material1161.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1160.Material := Material1161;
{ METHOD .Appearance }
Shape1159.Appearance := Appearance1160;
Sphere1162 := TSphereNode.Create;
Sphere1162.Radius := 0.03;
{ METHOD .Geometry }
Shape1159.Geometry := Sphere1162;
{ METHOD .FdChildren.Add }
Transform1158.FdChildren.Add(Shape1159);
end;

procedure InitHAnimGimbalJointController22Part80;
begin

{ METHOD .FdChildren.Add }
Transform1157.FdChildren.Add(Transform1158);
{ METHOD .FdChildren.Add }
HAnimSegment1155.FdChildren.Add(Transform1157);
Shape1163 := TShapeNode.Create;
Appearance1164 := TAppearanceNode.Create;
Material1165 := TMaterialNode.Create;
Material1165.DiffuseColor := Vector3(0,0,0);
Material1165.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1164.Material := Material1165;
LineProperties1166 := TLinePropertiesNode.Create;
LineProperties1166.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1164.LineProperties := LineProperties1166;
{ METHOD .Appearance }
Shape1163.Appearance := Appearance1164;
LineSet1167 := TLineSetNode.Create;
LineSet1167.SetVertexCount([2]);
Coordinate1168 := TCoordinateNode.Create;
Coordinate1168.SetPoint([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
{ METHOD .Coord }
LineSet1167.Coord := Coordinate1168;
{ METHOD .Geometry }
Shape1163.Geometry := LineSet1167;
{ METHOD .FdChildren.Add }
HAnimSegment1155.FdChildren.Add(Shape1163);
{ METHOD .FdChildren.Add }
HAnimJoint1154.FdChildren.Add(HAnimSegment1155);
HAnimJoint1169 := THAnimJointNode.Create;
HAnimJoint1169.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimJoint1169.SetLlimit([-0.0524,-0.0698,-0.0698]);
HAnimJoint1169.SetUlimit([0.1047,0.0698,0.0698]);
HAnimSegment1170 := THAnimSegmentNode.Create;
TouchSensor1171 := TTouchSensorNode.Create;
TouchSensor1171.Description := 'vt1';
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(TouchSensor1171);
Transform1172 := TTransformNode.Create;
Transform1172.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform1173 := TTransformNode.Create;
Shape1174 := TShapeNode.Create;
Appearance1175 := TAppearanceNode.Create;
Material1176 := TMaterialNode.Create;
Material1176.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1175.Material := Material1176;
{ METHOD .Appearance }
Shape1174.Appearance := Appearance1175;
Sphere1177 := TSphereNode.Create;
Sphere1177.Radius := 0.03;
{ METHOD .Geometry }
Shape1174.Geometry := Sphere1177;
end;

procedure InitHAnimGimbalJointController22Part81;
begin

{ METHOD .FdChildren.Add }
Transform1173.FdChildren.Add(Shape1174);
{ METHOD .FdChildren.Add }
Transform1172.FdChildren.Add(Transform1173);
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(Transform1172);
Shape1178 := TShapeNode.Create;
Appearance1179 := TAppearanceNode.Create;
Material1180 := TMaterialNode.Create;
Material1180.DiffuseColor := Vector3(0,0,0);
Material1180.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1179.Material := Material1180;
LineProperties1181 := TLinePropertiesNode.Create;
LineProperties1181.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1179.LineProperties := LineProperties1181;
{ METHOD .Appearance }
Shape1178.Appearance := Appearance1179;
LineSet1182 := TLineSetNode.Create;
LineSet1182.SetVertexCount([2]);
Coordinate1183 := TCoordinateNode.Create;
Coordinate1183.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
{ METHOD .Coord }
LineSet1182.Coord := Coordinate1183;
{ METHOD .Geometry }
Shape1178.Geometry := LineSet1182;
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(Shape1178);
Shape1184 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1184.Appearance := Appearance1179;
LineSet1186 := TLineSetNode.Create;
LineSet1186.SetVertexCount([2]);
Coordinate1187 := TCoordinateNode.Create;
Coordinate1187.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
{ METHOD .Coord }
LineSet1186.Coord := Coordinate1187;
{ METHOD .Geometry }
Shape1184.Geometry := LineSet1186;
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(Shape1184);
Shape1188 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1188.Appearance := Appearance1179;
LineSet1190 := TLineSetNode.Create;
LineSet1190.SetVertexCount([2]);
Coordinate1191 := TCoordinateNode.Create;
Coordinate1191.SetPoint([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
{ METHOD .Coord }
LineSet1190.Coord := Coordinate1191;
{ METHOD .Geometry }
Shape1188.Geometry := LineSet1190;
{ METHOD .FdChildren.Add }
HAnimSegment1170.FdChildren.Add(Shape1188);
{ METHOD .FdChildren.Add }
HAnimJoint1169.FdChildren.Add(HAnimSegment1170);
{ CERVICAL SPINE & HEAD (Child 1 of vt1) }
HAnimJoint1192 := THAnimJointNode.Create;
end;

procedure InitHAnimGimbalJointController22Part82;
begin

HAnimJoint1192.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimJoint1192.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1192.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1193 := THAnimSegmentNode.Create;
TouchSensor1194 := TTouchSensorNode.Create;
TouchSensor1194.Description := 'vc7';
{ METHOD .FdChildren.Add }
HAnimSegment1193.FdChildren.Add(TouchSensor1194);
Transform1195 := TTransformNode.Create;
Transform1195.Translation := Vector3(0.0066,1.5132,-0.0301);
Transform1196 := TTransformNode.Create;
Shape1197 := TShapeNode.Create;
Appearance1198 := TAppearanceNode.Create;
Material1199 := TMaterialNode.Create;
Material1199.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1198.Material := Material1199;
{ METHOD .Appearance }
Shape1197.Appearance := Appearance1198;
Sphere1200 := TSphereNode.Create;
Sphere1200.Radius := 0.03;
{ METHOD .Geometry }
Shape1197.Geometry := Sphere1200;
{ METHOD .FdChildren.Add }
Transform1196.FdChildren.Add(Shape1197);
{ METHOD .FdChildren.Add }
Transform1195.FdChildren.Add(Transform1196);
{ METHOD .FdChildren.Add }
HAnimSegment1193.FdChildren.Add(Transform1195);
Shape1201 := TShapeNode.Create;
Appearance1202 := TAppearanceNode.Create;
Material1203 := TMaterialNode.Create;
Material1203.DiffuseColor := Vector3(0,0,0);
Material1203.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1202.Material := Material1203;
LineProperties1204 := TLinePropertiesNode.Create;
LineProperties1204.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1202.LineProperties := LineProperties1204;
{ METHOD .Appearance }
Shape1201.Appearance := Appearance1202;
LineSet1205 := TLineSetNode.Create;
LineSet1205.SetVertexCount([2]);
Coordinate1206 := TCoordinateNode.Create;
Coordinate1206.SetPoint([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
{ METHOD .Coord }
LineSet1205.Coord := Coordinate1206;
{ METHOD .Geometry }
Shape1201.Geometry := LineSet1205;
{ METHOD .FdChildren.Add }
HAnimSegment1193.FdChildren.Add(Shape1201);
{ METHOD .FdChildren.Add }
HAnimJoint1192.FdChildren.Add(HAnimSegment1193);
end;

procedure InitHAnimGimbalJointController22Part83;
begin

HAnimJoint1207 := THAnimJointNode.Create;
HAnimJoint1207.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimJoint1207.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1207.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1208 := THAnimSegmentNode.Create;
TouchSensor1209 := TTouchSensorNode.Create;
TouchSensor1209.Description := 'vc6';
{ METHOD .FdChildren.Add }
HAnimSegment1208.FdChildren.Add(TouchSensor1209);
Transform1210 := TTransformNode.Create;
Transform1210.Translation := Vector3(0.0066,1.5357,-0.0143);
Transform1211 := TTransformNode.Create;
Shape1212 := TShapeNode.Create;
Appearance1213 := TAppearanceNode.Create;
Material1214 := TMaterialNode.Create;
Material1214.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1213.Material := Material1214;
{ METHOD .Appearance }
Shape1212.Appearance := Appearance1213;
Sphere1215 := TSphereNode.Create;
Sphere1215.Radius := 0.03;
{ METHOD .Geometry }
Shape1212.Geometry := Sphere1215;
{ METHOD .FdChildren.Add }
Transform1211.FdChildren.Add(Shape1212);
{ METHOD .FdChildren.Add }
Transform1210.FdChildren.Add(Transform1211);
{ METHOD .FdChildren.Add }
HAnimSegment1208.FdChildren.Add(Transform1210);
Shape1216 := TShapeNode.Create;
Appearance1217 := TAppearanceNode.Create;
Material1218 := TMaterialNode.Create;
Material1218.DiffuseColor := Vector3(0,0,0);
Material1218.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1217.Material := Material1218;
LineProperties1219 := TLinePropertiesNode.Create;
LineProperties1219.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1217.LineProperties := LineProperties1219;
{ METHOD .Appearance }
Shape1216.Appearance := Appearance1217;
LineSet1220 := TLineSetNode.Create;
LineSet1220.SetVertexCount([2]);
Coordinate1221 := TCoordinateNode.Create;
Coordinate1221.SetPoint([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
{ METHOD .Coord }
LineSet1220.Coord := Coordinate1221;
{ METHOD .Geometry }
Shape1216.Geometry := LineSet1220;
{ METHOD .FdChildren.Add }
HAnimSegment1208.FdChildren.Add(Shape1216);
end;

procedure InitHAnimGimbalJointController22Part84;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1207.FdChildren.Add(HAnimSegment1208);
HAnimJoint1222 := THAnimJointNode.Create;
HAnimJoint1222.Center := Vector3(0.0066,1.552,-0.0082);
HAnimJoint1222.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1222.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1223 := THAnimSegmentNode.Create;
TouchSensor1224 := TTouchSensorNode.Create;
TouchSensor1224.Description := 'vc5';
{ METHOD .FdChildren.Add }
HAnimSegment1223.FdChildren.Add(TouchSensor1224);
Transform1225 := TTransformNode.Create;
Transform1225.Translation := Vector3(0.0066,1.552,-0.0082);
Transform1226 := TTransformNode.Create;
Shape1227 := TShapeNode.Create;
Appearance1228 := TAppearanceNode.Create;
Material1229 := TMaterialNode.Create;
Material1229.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1228.Material := Material1229;
{ METHOD .Appearance }
Shape1227.Appearance := Appearance1228;
Sphere1230 := TSphereNode.Create;
Sphere1230.Radius := 0.03;
{ METHOD .Geometry }
Shape1227.Geometry := Sphere1230;
{ METHOD .FdChildren.Add }
Transform1226.FdChildren.Add(Shape1227);
{ METHOD .FdChildren.Add }
Transform1225.FdChildren.Add(Transform1226);
{ METHOD .FdChildren.Add }
HAnimSegment1223.FdChildren.Add(Transform1225);
Shape1231 := TShapeNode.Create;
Appearance1232 := TAppearanceNode.Create;
Material1233 := TMaterialNode.Create;
Material1233.DiffuseColor := Vector3(0,0,0);
Material1233.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1232.Material := Material1233;
LineProperties1234 := TLinePropertiesNode.Create;
LineProperties1234.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1232.LineProperties := LineProperties1234;
{ METHOD .Appearance }
Shape1231.Appearance := Appearance1232;
LineSet1235 := TLineSetNode.Create;
LineSet1235.SetVertexCount([2]);
Coordinate1236 := TCoordinateNode.Create;
Coordinate1236.SetPoint([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
{ METHOD .Coord }
LineSet1235.Coord := Coordinate1236;
{ METHOD .Geometry }
Shape1231.Geometry := LineSet1235;
end;

procedure InitHAnimGimbalJointController22Part85;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1223.FdChildren.Add(Shape1231);
{ METHOD .FdChildren.Add }
HAnimJoint1222.FdChildren.Add(HAnimSegment1223);
HAnimJoint1237 := THAnimJointNode.Create;
HAnimJoint1237.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimJoint1237.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1237.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1238 := THAnimSegmentNode.Create;
TouchSensor1239 := TTouchSensorNode.Create;
TouchSensor1239.Description := 'vc4';
{ METHOD .FdChildren.Add }
HAnimSegment1238.FdChildren.Add(TouchSensor1239);
Transform1240 := TTransformNode.Create;
Transform1240.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform1241 := TTransformNode.Create;
Shape1242 := TShapeNode.Create;
Appearance1243 := TAppearanceNode.Create;
Material1244 := TMaterialNode.Create;
Material1244.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1243.Material := Material1244;
{ METHOD .Appearance }
Shape1242.Appearance := Appearance1243;
Sphere1245 := TSphereNode.Create;
Sphere1245.Radius := 0.03;
{ METHOD .Geometry }
Shape1242.Geometry := Sphere1245;
{ METHOD .FdChildren.Add }
Transform1241.FdChildren.Add(Shape1242);
{ METHOD .FdChildren.Add }
Transform1240.FdChildren.Add(Transform1241);
{ METHOD .FdChildren.Add }
HAnimSegment1238.FdChildren.Add(Transform1240);
Shape1246 := TShapeNode.Create;
Appearance1247 := TAppearanceNode.Create;
Material1248 := TMaterialNode.Create;
Material1248.DiffuseColor := Vector3(0,0,0);
Material1248.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1247.Material := Material1248;
LineProperties1249 := TLinePropertiesNode.Create;
LineProperties1249.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1247.LineProperties := LineProperties1249;
{ METHOD .Appearance }
Shape1246.Appearance := Appearance1247;
LineSet1250 := TLineSetNode.Create;
LineSet1250.SetVertexCount([2]);
Coordinate1251 := TCoordinateNode.Create;
Coordinate1251.SetPoint([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
{ METHOD .Coord }
LineSet1250.Coord := Coordinate1251;
end;

procedure InitHAnimGimbalJointController22Part86;
begin

{ METHOD .Geometry }
Shape1246.Geometry := LineSet1250;
{ METHOD .FdChildren.Add }
HAnimSegment1238.FdChildren.Add(Shape1246);
{ METHOD .FdChildren.Add }
HAnimJoint1237.FdChildren.Add(HAnimSegment1238);
HAnimJoint1252 := THAnimJointNode.Create;
HAnimJoint1252.Center := Vector3(0.0066,1.58,-0.0103);
HAnimJoint1252.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1252.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1253 := THAnimSegmentNode.Create;
TouchSensor1254 := TTouchSensorNode.Create;
TouchSensor1254.Description := 'vc3';
{ METHOD .FdChildren.Add }
HAnimSegment1253.FdChildren.Add(TouchSensor1254);
Transform1255 := TTransformNode.Create;
Transform1255.Translation := Vector3(0.0066,1.58,-0.0103);
Transform1256 := TTransformNode.Create;
Shape1257 := TShapeNode.Create;
Appearance1258 := TAppearanceNode.Create;
Material1259 := TMaterialNode.Create;
Material1259.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1258.Material := Material1259;
{ METHOD .Appearance }
Shape1257.Appearance := Appearance1258;
Sphere1260 := TSphereNode.Create;
Sphere1260.Radius := 0.03;
{ METHOD .Geometry }
Shape1257.Geometry := Sphere1260;
{ METHOD .FdChildren.Add }
Transform1256.FdChildren.Add(Shape1257);
{ METHOD .FdChildren.Add }
Transform1255.FdChildren.Add(Transform1256);
{ METHOD .FdChildren.Add }
HAnimSegment1253.FdChildren.Add(Transform1255);
Shape1261 := TShapeNode.Create;
Appearance1262 := TAppearanceNode.Create;
Material1263 := TMaterialNode.Create;
Material1263.DiffuseColor := Vector3(0,0,0);
Material1263.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1262.Material := Material1263;
LineProperties1264 := TLinePropertiesNode.Create;
LineProperties1264.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1262.LineProperties := LineProperties1264;
{ METHOD .Appearance }
Shape1261.Appearance := Appearance1262;
LineSet1265 := TLineSetNode.Create;
LineSet1265.SetVertexCount([2]);
Coordinate1266 := TCoordinateNode.Create;
Coordinate1266.SetPoint([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
end;

procedure InitHAnimGimbalJointController22Part87;
begin

{ METHOD .Coord }
LineSet1265.Coord := Coordinate1266;
{ METHOD .Geometry }
Shape1261.Geometry := LineSet1265;
{ METHOD .FdChildren.Add }
HAnimSegment1253.FdChildren.Add(Shape1261);
{ METHOD .FdChildren.Add }
HAnimJoint1252.FdChildren.Add(HAnimSegment1253);
HAnimJoint1267 := THAnimJointNode.Create;
HAnimJoint1267.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimJoint1267.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1267.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1268 := THAnimSegmentNode.Create;
TouchSensor1269 := TTouchSensorNode.Create;
TouchSensor1269.Description := 'vc2';
{ METHOD .FdChildren.Add }
HAnimSegment1268.FdChildren.Add(TouchSensor1269);
Transform1270 := TTransformNode.Create;
Transform1270.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform1271 := TTransformNode.Create;
Shape1272 := TShapeNode.Create;
Appearance1273 := TAppearanceNode.Create;
Material1274 := TMaterialNode.Create;
Material1274.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1273.Material := Material1274;
{ METHOD .Appearance }
Shape1272.Appearance := Appearance1273;
Sphere1275 := TSphereNode.Create;
Sphere1275.Radius := 0.03;
{ METHOD .Geometry }
Shape1272.Geometry := Sphere1275;
{ METHOD .FdChildren.Add }
Transform1271.FdChildren.Add(Shape1272);
{ METHOD .FdChildren.Add }
Transform1270.FdChildren.Add(Transform1271);
{ METHOD .FdChildren.Add }
HAnimSegment1268.FdChildren.Add(Transform1270);
Shape1276 := TShapeNode.Create;
Appearance1277 := TAppearanceNode.Create;
Material1278 := TMaterialNode.Create;
Material1278.DiffuseColor := Vector3(0,0,0);
Material1278.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1277.Material := Material1278;
LineProperties1279 := TLinePropertiesNode.Create;
LineProperties1279.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1277.LineProperties := LineProperties1279;
{ METHOD .Appearance }
Shape1276.Appearance := Appearance1277;
LineSet1280 := TLineSetNode.Create;
LineSet1280.SetVertexCount([2]);
Coordinate1281 := TCoordinateNode.Create;
end;

procedure InitHAnimGimbalJointController22Part88;
begin

Coordinate1281.SetPoint([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
{ METHOD .Coord }
LineSet1280.Coord := Coordinate1281;
{ METHOD .Geometry }
Shape1276.Geometry := LineSet1280;
{ METHOD .FdChildren.Add }
HAnimSegment1268.FdChildren.Add(Shape1276);
{ METHOD .FdChildren.Add }
HAnimJoint1267.FdChildren.Add(HAnimSegment1268);
HAnimJoint1282 := THAnimJointNode.Create;
HAnimJoint1282.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimJoint1282.SetLlimit([-0.1396,-0.1396,-0.1047]);
HAnimJoint1282.SetUlimit([0.1745,0.1396,0.1047]);
HAnimSegment1283 := THAnimSegmentNode.Create;
TouchSensor1284 := TTouchSensorNode.Create;
TouchSensor1284.Description := 'vc1';
{ METHOD .FdChildren.Add }
HAnimSegment1283.FdChildren.Add(TouchSensor1284);
Transform1285 := TTransformNode.Create;
Transform1285.Translation := Vector3(0.0066,1.6144,-0.0034);
Transform1286 := TTransformNode.Create;
Shape1287 := TShapeNode.Create;
Appearance1288 := TAppearanceNode.Create;
Material1289 := TMaterialNode.Create;
Material1289.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1288.Material := Material1289;
{ METHOD .Appearance }
Shape1287.Appearance := Appearance1288;
Sphere1290 := TSphereNode.Create;
Sphere1290.Radius := 0.03;
{ METHOD .Geometry }
Shape1287.Geometry := Sphere1290;
{ METHOD .FdChildren.Add }
Transform1286.FdChildren.Add(Shape1287);
{ METHOD .FdChildren.Add }
Transform1285.FdChildren.Add(Transform1286);
{ METHOD .FdChildren.Add }
HAnimSegment1283.FdChildren.Add(Transform1285);
Shape1291 := TShapeNode.Create;
Appearance1292 := TAppearanceNode.Create;
Material1293 := TMaterialNode.Create;
Material1293.DiffuseColor := Vector3(0,0,0);
Material1293.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1292.Material := Material1293;
LineProperties1294 := TLinePropertiesNode.Create;
LineProperties1294.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1292.LineProperties := LineProperties1294;
{ METHOD .Appearance }
Shape1291.Appearance := Appearance1292;
LineSet1295 := TLineSetNode.Create;
LineSet1295.SetVertexCount([2]);
end;

procedure InitHAnimGimbalJointController22Part89;
begin

Coordinate1296 := TCoordinateNode.Create;
Coordinate1296.SetPoint([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
{ METHOD .Coord }
LineSet1295.Coord := Coordinate1296;
{ METHOD .Geometry }
Shape1291.Geometry := LineSet1295;
{ METHOD .FdChildren.Add }
HAnimSegment1283.FdChildren.Add(Shape1291);
{ METHOD .FdChildren.Add }
HAnimJoint1282.FdChildren.Add(HAnimSegment1283);
HAnimJoint1297 := THAnimJointNode.Create;
HAnimJoint1297.Center := Vector3(0.0044,1.6209,0.0236);
HAnimJoint1297.SetLlimit([-0.5236,-0.6109,-0.3491]);
HAnimJoint1297.SetUlimit([0.6981,0.6109,0.3491]);
HAnimSegment1298 := THAnimSegmentNode.Create;
TouchSensor1299 := TTouchSensorNode.Create;
TouchSensor1299.Description := 'skullbase';
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(TouchSensor1299);
Transform1300 := TTransformNode.Create;
Transform1300.Translation := Vector3(0.0044,1.6209,0.0236);
Transform1301 := TTransformNode.Create;
Shape1302 := TShapeNode.Create;
Appearance1303 := TAppearanceNode.Create;
Material1304 := TMaterialNode.Create;
Material1304.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1303.Material := Material1304;
{ METHOD .Appearance }
Shape1302.Appearance := Appearance1303;
Sphere1305 := TSphereNode.Create;
Sphere1305.Radius := 0.03;
{ METHOD .Geometry }
Shape1302.Geometry := Sphere1305;
{ METHOD .FdChildren.Add }
Transform1301.FdChildren.Add(Shape1302);
{ METHOD .FdChildren.Add }
Transform1300.FdChildren.Add(Transform1301);
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Transform1300);
Shape1306 := TShapeNode.Create;
Appearance1307 := TAppearanceNode.Create;
Material1308 := TMaterialNode.Create;
Material1308.DiffuseColor := Vector3(0,0,0);
Material1308.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1307.Material := Material1308;
LineProperties1309 := TLinePropertiesNode.Create;
LineProperties1309.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1307.LineProperties := LineProperties1309;
{ METHOD .Appearance }
Shape1306.Appearance := Appearance1307;
LineSet1310 := TLineSetNode.Create;
end;

procedure InitHAnimGimbalJointController22Part90;
begin

LineSet1310.SetVertexCount([2]);
Coordinate1311 := TCoordinateNode.Create;
Coordinate1311.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ METHOD .Coord }
LineSet1310.Coord := Coordinate1311;
{ METHOD .Geometry }
Shape1306.Geometry := LineSet1310;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1306);
Shape1312 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1312.Appearance := Appearance1307;
LineSet1314 := TLineSetNode.Create;
LineSet1314.SetVertexCount([2]);
Coordinate1315 := TCoordinateNode.Create;
Coordinate1315.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0236,1.6331,0.051)]);
{ METHOD .Coord }
LineSet1314.Coord := Coordinate1315;
{ METHOD .Geometry }
Shape1312.Geometry := LineSet1314;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1312);
Shape1316 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1316.Appearance := Appearance1307;
LineSet1318 := TLineSetNode.Create;
LineSet1318.SetVertexCount([2]);
Coordinate1319 := TCoordinateNode.Create;
Coordinate1319.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ METHOD .Coord }
LineSet1318.Coord := Coordinate1319;
{ METHOD .Geometry }
Shape1316.Geometry := LineSet1318;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1316);
Shape1320 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1320.Appearance := Appearance1307;
LineSet1322 := TLineSetNode.Create;
LineSet1322.SetVertexCount([2]);
Coordinate1323 := TCoordinateNode.Create;
Coordinate1323.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0236,1.6331,0.051)]);
{ METHOD .Coord }
LineSet1322.Coord := Coordinate1323;
{ METHOD .Geometry }
Shape1320.Geometry := LineSet1322;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1320);
Shape1324 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1324.Appearance := Appearance1307;
LineSet1326 := TLineSetNode.Create;
LineSet1326.SetVertexCount([2]);
Coordinate1327 := TCoordinateNode.Create;
Coordinate1327.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(0.0336,1.6332,0.0502)]);
{ METHOD .Coord }
LineSet1326.Coord := Coordinate1327;
end;

procedure InitHAnimGimbalJointController22Part91;
begin

{ METHOD .Geometry }
Shape1324.Geometry := LineSet1326;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1324);
Shape1328 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1328.Appearance := Appearance1307;
LineSet1330 := TLineSetNode.Create;
LineSet1330.SetVertexCount([2]);
Coordinate1331 := TCoordinateNode.Create;
Coordinate1331.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0236,1.6331,0.051)]);
{ METHOD .Coord }
LineSet1330.Coord := Coordinate1331;
{ METHOD .Geometry }
Shape1328.Geometry := LineSet1330;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1328);
Shape1332 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1332.Appearance := Appearance1307;
LineSet1334 := TLineSetNode.Create;
LineSet1334.SetVertexCount([2]);
Coordinate1335 := TCoordinateNode.Create;
Coordinate1335.SetPoint([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0002,1.3043,-0.0865)]);
{ METHOD .Coord }
LineSet1334.Coord := Coordinate1335;
{ METHOD .Geometry }
Shape1332.Geometry := LineSet1334;
{ METHOD .FdChildren.Add }
HAnimSegment1298.FdChildren.Add(Shape1332);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimSegment1298);
HAnimJoint1336 := THAnimJointNode.Create;
HAnimJoint1336.Center := Vector3(0.0336,1.6332,0.0502);
HAnimJoint1336.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint1336.SetUlimit([0.6109,0.0175,0.0175]);
HAnimSegment1337 := THAnimSegmentNode.Create;
Group1338 := TGroupNode.Create;
TouchSensor1339 := TTouchSensorNode.Create;
TouchSensor1339.Description := 'l_eyelid_joint';
{ METHOD .FdChildren.Add }
Group1338.FdChildren.Add(TouchSensor1339);
Transform1340 := TTransformNode.Create;
Transform1340.Translation := Vector3(0.0336,1.6332,0.0502);
Shape1341 := TShapeNode.Create;
Appearance1342 := TAppearanceNode.Create;
Material1343 := TMaterialNode.Create;
Material1343.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1342.Material := Material1343;
{ METHOD .Appearance }
Shape1341.Appearance := Appearance1342;
Sphere1344 := TSphereNode.Create;
Sphere1344.Radius := 0.03;
end;

procedure InitHAnimGimbalJointController22Part92;
begin

{ METHOD .Geometry }
Shape1341.Geometry := Sphere1344;
{ METHOD .FdChildren.Add }
Transform1340.FdChildren.Add(Shape1341);
{ METHOD .FdChildren.Add }
Group1338.FdChildren.Add(Transform1340);
Shape1345 := TShapeNode.Create;
Appearance1346 := TAppearanceNode.Create;
Material1347 := TMaterialNode.Create;
Material1347.DiffuseColor := Vector3(0,0,0);
Material1347.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1346.Material := Material1347;
LineProperties1348 := TLinePropertiesNode.Create;
LineProperties1348.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1346.LineProperties := LineProperties1348;
{ METHOD .Appearance }
Shape1345.Appearance := Appearance1346;
LineSet1349 := TLineSetNode.Create;
LineSet1349.SetVertexCount([2]);
Coordinate1350 := TCoordinateNode.Create;
Coordinate1350.SetPoint([Vector3(0.0336,1.6332,0.0502),Vector3(0.0628,1.6455,0.0768)]);
{ METHOD .Coord }
LineSet1349.Coord := Coordinate1350;
{ METHOD .Geometry }
Shape1345.Geometry := LineSet1349;
{ METHOD .FdChildren.Add }
Group1338.FdChildren.Add(Shape1345);
{ METHOD .FdChildren.Add }
HAnimSegment1337.FdChildren.Add(Group1338);
{ METHOD .FdChildren.Add }
HAnimJoint1336.FdChildren.Add(HAnimSegment1337);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1336);
HAnimJoint1351 := THAnimJointNode.Create;
HAnimJoint1351.Center := Vector3(-0.0236,1.6331,0.051);
HAnimJoint1351.SetLlimit([-0.1745,-0.0175,-0.0175]);
HAnimJoint1351.SetUlimit([0.6109,0.0175,0.0175]);
HAnimSegment1352 := THAnimSegmentNode.Create;
Group1353 := TGroupNode.Create;
TouchSensor1354 := TTouchSensorNode.Create;
TouchSensor1354.Description := 'r_eyelid_joint';
{ METHOD .FdChildren.Add }
Group1353.FdChildren.Add(TouchSensor1354);
Transform1355 := TTransformNode.Create;
Transform1355.Translation := Vector3(-0.0236,1.6331,0.051);
Shape1356 := TShapeNode.Create;
Appearance1357 := TAppearanceNode.Create;
Material1358 := TMaterialNode.Create;
Material1358.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1357.Material := Material1358;
{ METHOD .Appearance }
Shape1356.Appearance := Appearance1357;
end;

procedure InitHAnimGimbalJointController22Part93;
begin

Sphere1359 := TSphereNode.Create;
Sphere1359.Radius := 0.03;
{ METHOD .Geometry }
Shape1356.Geometry := Sphere1359;
{ METHOD .FdChildren.Add }
Transform1355.FdChildren.Add(Shape1356);
{ METHOD .FdChildren.Add }
Group1353.FdChildren.Add(Transform1355);
Shape1360 := TShapeNode.Create;
Appearance1361 := TAppearanceNode.Create;
Material1362 := TMaterialNode.Create;
Material1362.DiffuseColor := Vector3(0,0,0);
Material1362.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1361.Material := Material1362;
LineProperties1363 := TLinePropertiesNode.Create;
LineProperties1363.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1361.LineProperties := LineProperties1363;
{ METHOD .Appearance }
Shape1360.Appearance := Appearance1361;
LineSet1364 := TLineSetNode.Create;
LineSet1364.SetVertexCount([2]);
Coordinate1365 := TCoordinateNode.Create;
Coordinate1365.SetPoint([Vector3(-0.0236,1.6331,0.051),Vector3(-0.0516,1.6453,0.0784)]);
{ METHOD .Coord }
LineSet1364.Coord := Coordinate1365;
{ METHOD .Geometry }
Shape1360.Geometry := LineSet1364;
{ METHOD .FdChildren.Add }
Group1353.FdChildren.Add(Shape1360);
{ METHOD .FdChildren.Add }
HAnimSegment1352.FdChildren.Add(Group1353);
{ METHOD .FdChildren.Add }
HAnimJoint1351.FdChildren.Add(HAnimSegment1352);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1351);
HAnimJoint1366 := THAnimJointNode.Create;
HAnimJoint1366.Center := Vector3(0.0336,1.6332,0.0502);
HAnimJoint1366.SetLlimit([-0.5236,-0.6981,-0.0175]);
HAnimJoint1366.SetUlimit([0.5236,0.6981,0.0175]);
HAnimSegment1367 := THAnimSegmentNode.Create;
Group1368 := TGroupNode.Create;
TouchSensor1369 := TTouchSensorNode.Create;
TouchSensor1369.Description := 'l_eyeball_joint';
{ METHOD .FdChildren.Add }
Group1368.FdChildren.Add(TouchSensor1369);
Transform1370 := TTransformNode.Create;
Transform1370.Translation := Vector3(0.0336,1.6332,0.0502);
Shape1371 := TShapeNode.Create;
Appearance1372 := TAppearanceNode.Create;
Material1373 := TMaterialNode.Create;
Material1373.DiffuseColor := Vector3(0.35,0.55,0.95);
end;

procedure InitHAnimGimbalJointController22Part94;
begin

{ METHOD .SetMaterial }
Appearance1372.Material := Material1373;
{ METHOD .Appearance }
Shape1371.Appearance := Appearance1372;
Sphere1374 := TSphereNode.Create;
Sphere1374.Radius := 0.03;
{ METHOD .Geometry }
Shape1371.Geometry := Sphere1374;
{ METHOD .FdChildren.Add }
Transform1370.FdChildren.Add(Shape1371);
{ METHOD .FdChildren.Add }
Group1368.FdChildren.Add(Transform1370);
Shape1375 := TShapeNode.Create;
Appearance1376 := TAppearanceNode.Create;
Material1377 := TMaterialNode.Create;
Material1377.DiffuseColor := Vector3(0,0,0);
Material1377.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1376.Material := Material1377;
LineProperties1378 := TLinePropertiesNode.Create;
LineProperties1378.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1376.LineProperties := LineProperties1378;
{ METHOD .Appearance }
Shape1375.Appearance := Appearance1376;
LineSet1379 := TLineSetNode.Create;
LineSet1379.SetVertexCount([2]);
Coordinate1380 := TCoordinateNode.Create;
Coordinate1380.SetPoint([Vector3(0.0336,1.6332,0.0502),Vector3(0.0628,1.6455,0.0768)]);
{ METHOD .Coord }
LineSet1379.Coord := Coordinate1380;
{ METHOD .Geometry }
Shape1375.Geometry := LineSet1379;
{ METHOD .FdChildren.Add }
Group1368.FdChildren.Add(Shape1375);
{ METHOD .FdChildren.Add }
HAnimSegment1367.FdChildren.Add(Group1368);
{ METHOD .FdChildren.Add }
HAnimJoint1366.FdChildren.Add(HAnimSegment1367);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1366);
HAnimJoint1381 := THAnimJointNode.Create;
HAnimJoint1381.Center := Vector3(-0.0236,1.6331,0.051);
HAnimJoint1381.SetLlimit([-0.5236,-0.6981,-0.0175]);
HAnimJoint1381.SetUlimit([0.5236,0.6981,0.0175]);
HAnimSegment1382 := THAnimSegmentNode.Create;
Group1383 := TGroupNode.Create;
TouchSensor1384 := TTouchSensorNode.Create;
TouchSensor1384.Description := 'r_eyeball_joint';
{ METHOD .FdChildren.Add }
Group1383.FdChildren.Add(TouchSensor1384);
Transform1385 := TTransformNode.Create;
Transform1385.Translation := Vector3(-0.0236,1.6331,0.051);
Shape1386 := TShapeNode.Create;
Appearance1387 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part95;
begin

Material1388 := TMaterialNode.Create;
Material1388.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1387.Material := Material1388;
{ METHOD .Appearance }
Shape1386.Appearance := Appearance1387;
Sphere1389 := TSphereNode.Create;
Sphere1389.Radius := 0.03;
{ METHOD .Geometry }
Shape1386.Geometry := Sphere1389;
{ METHOD .FdChildren.Add }
Transform1385.FdChildren.Add(Shape1386);
{ METHOD .FdChildren.Add }
Group1383.FdChildren.Add(Transform1385);
Shape1390 := TShapeNode.Create;
Appearance1391 := TAppearanceNode.Create;
Material1392 := TMaterialNode.Create;
Material1392.DiffuseColor := Vector3(0,0,0);
Material1392.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1391.Material := Material1392;
LineProperties1393 := TLinePropertiesNode.Create;
LineProperties1393.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1391.LineProperties := LineProperties1393;
{ METHOD .Appearance }
Shape1390.Appearance := Appearance1391;
LineSet1394 := TLineSetNode.Create;
LineSet1394.SetVertexCount([2]);
Coordinate1395 := TCoordinateNode.Create;
Coordinate1395.SetPoint([Vector3(-0.0236,1.6331,0.051),Vector3(-0.0516,1.6453,0.0784)]);
{ METHOD .Coord }
LineSet1394.Coord := Coordinate1395;
{ METHOD .Geometry }
Shape1390.Geometry := LineSet1394;
{ METHOD .FdChildren.Add }
Group1383.FdChildren.Add(Shape1390);
{ METHOD .FdChildren.Add }
HAnimSegment1382.FdChildren.Add(Group1383);
{ METHOD .FdChildren.Add }
HAnimJoint1381.FdChildren.Add(HAnimSegment1382);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1381);
HAnimJoint1396 := THAnimJointNode.Create;
HAnimJoint1396.Center := Vector3(0.0336,1.6332,0.0502);
HAnimJoint1396.SetLlimit([-0.1745,-0.0175,-0.1745]);
HAnimJoint1396.SetUlimit([0.1745,0.0175,0.1745]);
HAnimSegment1397 := THAnimSegmentNode.Create;
Group1398 := TGroupNode.Create;
TouchSensor1399 := TTouchSensorNode.Create;
TouchSensor1399.Description := 'l_eyebrow_joint';
{ METHOD .FdChildren.Add }
Group1398.FdChildren.Add(TouchSensor1399);
Transform1400 := TTransformNode.Create;
Transform1400.Translation := Vector3(0.0336,1.6332,0.0502);
end;

procedure InitHAnimGimbalJointController22Part96;
begin

Shape1401 := TShapeNode.Create;
Appearance1402 := TAppearanceNode.Create;
Material1403 := TMaterialNode.Create;
Material1403.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1402.Material := Material1403;
{ METHOD .Appearance }
Shape1401.Appearance := Appearance1402;
Sphere1404 := TSphereNode.Create;
Sphere1404.Radius := 0.03;
{ METHOD .Geometry }
Shape1401.Geometry := Sphere1404;
{ METHOD .FdChildren.Add }
Transform1400.FdChildren.Add(Shape1401);
{ METHOD .FdChildren.Add }
Group1398.FdChildren.Add(Transform1400);
Shape1405 := TShapeNode.Create;
Appearance1406 := TAppearanceNode.Create;
Material1407 := TMaterialNode.Create;
Material1407.DiffuseColor := Vector3(0,0,0);
Material1407.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1406.Material := Material1407;
LineProperties1408 := TLinePropertiesNode.Create;
LineProperties1408.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1406.LineProperties := LineProperties1408;
{ METHOD .Appearance }
Shape1405.Appearance := Appearance1406;
LineSet1409 := TLineSetNode.Create;
LineSet1409.SetVertexCount([2]);
Coordinate1410 := TCoordinateNode.Create;
Coordinate1410.SetPoint([Vector3(0.0336,1.6332,0.0502),Vector3(0.0628,1.6455,0.0768)]);
{ METHOD .Coord }
LineSet1409.Coord := Coordinate1410;
{ METHOD .Geometry }
Shape1405.Geometry := LineSet1409;
{ METHOD .FdChildren.Add }
Group1398.FdChildren.Add(Shape1405);
{ METHOD .FdChildren.Add }
HAnimSegment1397.FdChildren.Add(Group1398);
{ METHOD .FdChildren.Add }
HAnimJoint1396.FdChildren.Add(HAnimSegment1397);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1396);
HAnimJoint1411 := THAnimJointNode.Create;
HAnimJoint1411.Center := Vector3(-0.0236,1.6331,0.051);
HAnimJoint1411.SetLlimit([-0.1745,-0.0175,-0.1745]);
HAnimJoint1411.SetUlimit([0.1745,0.0175,0.1745]);
HAnimSegment1412 := THAnimSegmentNode.Create;
Group1413 := TGroupNode.Create;
TouchSensor1414 := TTouchSensorNode.Create;
TouchSensor1414.Description := 'r_eyebrow_joint';
{ METHOD .FdChildren.Add }
Group1413.FdChildren.Add(TouchSensor1414);
end;

procedure InitHAnimGimbalJointController22Part97;
begin

Transform1415 := TTransformNode.Create;
Transform1415.Translation := Vector3(-0.0236,1.6331,0.051);
Shape1416 := TShapeNode.Create;
Appearance1417 := TAppearanceNode.Create;
Material1418 := TMaterialNode.Create;
Material1418.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1417.Material := Material1418;
{ METHOD .Appearance }
Shape1416.Appearance := Appearance1417;
Sphere1419 := TSphereNode.Create;
Sphere1419.Radius := 0.03;
{ METHOD .Geometry }
Shape1416.Geometry := Sphere1419;
{ METHOD .FdChildren.Add }
Transform1415.FdChildren.Add(Shape1416);
{ METHOD .FdChildren.Add }
Group1413.FdChildren.Add(Transform1415);
Shape1420 := TShapeNode.Create;
Appearance1421 := TAppearanceNode.Create;
Material1422 := TMaterialNode.Create;
Material1422.DiffuseColor := Vector3(0,0,0);
Material1422.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1421.Material := Material1422;
LineProperties1423 := TLinePropertiesNode.Create;
LineProperties1423.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1421.LineProperties := LineProperties1423;
{ METHOD .Appearance }
Shape1420.Appearance := Appearance1421;
LineSet1424 := TLineSetNode.Create;
LineSet1424.SetVertexCount([2]);
Coordinate1425 := TCoordinateNode.Create;
Coordinate1425.SetPoint([Vector3(-0.0236,1.6331,0.051),Vector3(-0.0516,1.6453,0.0784)]);
{ METHOD .Coord }
LineSet1424.Coord := Coordinate1425;
{ METHOD .Geometry }
Shape1420.Geometry := LineSet1424;
{ METHOD .FdChildren.Add }
Group1413.FdChildren.Add(Shape1420);
{ METHOD .FdChildren.Add }
HAnimSegment1412.FdChildren.Add(Group1413);
{ METHOD .FdChildren.Add }
HAnimJoint1411.FdChildren.Add(HAnimSegment1412);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1411);
HAnimJoint1426 := THAnimJointNode.Create;
HAnimJoint1426.Center := Vector3(0.0086,1.6,0.0506);
HAnimJoint1426.SetLlimit([-0.0873,-0.1396,-0.0873]);
HAnimJoint1426.SetUlimit([0.5236,0.1396,0.0873]);
HAnimSegment1427 := THAnimSegmentNode.Create;
Group1428 := TGroupNode.Create;
TouchSensor1429 := TTouchSensorNode.Create;
end;

procedure InitHAnimGimbalJointController22Part98;
begin

TouchSensor1429.Description := 'temporomandibular';
{ METHOD .FdChildren.Add }
Group1428.FdChildren.Add(TouchSensor1429);
Transform1430 := TTransformNode.Create;
Transform1430.Translation := Vector3(0.0086,1.6,0.0706);
Shape1431 := TShapeNode.Create;
Appearance1432 := TAppearanceNode.Create;
Material1433 := TMaterialNode.Create;
Material1433.DiffuseColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1432.Material := Material1433;
{ METHOD .Appearance }
Shape1431.Appearance := Appearance1432;
Sphere1434 := TSphereNode.Create;
Sphere1434.Radius := 0.03;
{ METHOD .Geometry }
Shape1431.Geometry := Sphere1434;
{ METHOD .FdChildren.Add }
Transform1430.FdChildren.Add(Shape1431);
{ METHOD .FdChildren.Add }
Group1428.FdChildren.Add(Transform1430);
Shape1435 := TShapeNode.Create;
Appearance1436 := TAppearanceNode.Create;
Material1437 := TMaterialNode.Create;
Material1437.DiffuseColor := Vector3(0,0,0);
Material1437.EmissiveColor := Vector3(0.4,0.8,0.4);
{ METHOD .SetMaterial }
Appearance1436.Material := Material1437;
LineProperties1438 := TLinePropertiesNode.Create;
LineProperties1438.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1436.LineProperties := LineProperties1438;
{ METHOD .Appearance }
Shape1435.Appearance := Appearance1436;
LineSet1439 := TLineSetNode.Create;
LineSet1439.SetVertexCount([2]);
Coordinate1440 := TCoordinateNode.Create;
Coordinate1440.SetPoint([Vector3(0.0086,1.6,0.0506),Vector3(0.0056,1.58,0.0766)]);
{ METHOD .Coord }
LineSet1439.Coord := Coordinate1440;
{ METHOD .Geometry }
Shape1435.Geometry := LineSet1439;
{ METHOD .FdChildren.Add }
Group1428.FdChildren.Add(Shape1435);
{ METHOD .FdChildren.Add }
HAnimSegment1427.FdChildren.Add(Group1428);
{ METHOD .FdChildren.Add }
HAnimJoint1426.FdChildren.Add(HAnimSegment1427);
{ METHOD .FdChildren.Add }
HAnimJoint1297.FdChildren.Add(HAnimJoint1426);
{ METHOD .FdChildren.Add }
HAnimJoint1282.FdChildren.Add(HAnimJoint1297);
{ METHOD .FdChildren.Add }
HAnimJoint1267.FdChildren.Add(HAnimJoint1282);
{ METHOD .FdChildren.Add }
HAnimJoint1252.FdChildren.Add(HAnimJoint1267);
{ METHOD .FdChildren.Add }
HAnimJoint1237.FdChildren.Add(HAnimJoint1252);
{ METHOD .FdChildren.Add }
HAnimJoint1222.FdChildren.Add(HAnimJoint1237);
end;

procedure InitHAnimGimbalJointController22Part99;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1207.FdChildren.Add(HAnimJoint1222);
{ METHOD .FdChildren.Add }
HAnimJoint1192.FdChildren.Add(HAnimJoint1207);
{ METHOD .FdChildren.Add }
HAnimJoint1169.FdChildren.Add(HAnimJoint1192);
{ LEFT ARM (Child 2 of vt1) }
HAnimJoint1441 := THAnimJointNode.Create;
HAnimJoint1441.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint1441.SetLlimit([-0.3491,-0.3491,-0.1745]);
HAnimJoint1441.SetUlimit([0.3491,0.2618,0.4363]);
HAnimSegment1442 := THAnimSegmentNode.Create;
TouchSensor1443 := TTouchSensorNode.Create;
TouchSensor1443.Description := 'l_sternoclavicular';
{ METHOD .FdChildren.Add }
HAnimSegment1442.FdChildren.Add(TouchSensor1443);
Transform1444 := TTransformNode.Create;
Transform1444.Translation := Vector3(0.082,1.4488,-0.0353);
Transform1445 := TTransformNode.Create;
Shape1446 := TShapeNode.Create;
Appearance1447 := TAppearanceNode.Create;
Material1448 := TMaterialNode.Create;
Material1448.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1447.Material := Material1448;
{ METHOD .Appearance }
Shape1446.Appearance := Appearance1447;
Sphere1449 := TSphereNode.Create;
Sphere1449.Radius := 0.03;
{ METHOD .Geometry }
Shape1446.Geometry := Sphere1449;
{ METHOD .FdChildren.Add }
Transform1445.FdChildren.Add(Shape1446);
{ METHOD .FdChildren.Add }
Transform1444.FdChildren.Add(Transform1445);
{ METHOD .FdChildren.Add }
HAnimSegment1442.FdChildren.Add(Transform1444);
Shape1450 := TShapeNode.Create;
Appearance1451 := TAppearanceNode.Create;
Material1452 := TMaterialNode.Create;
Material1452.DiffuseColor := Vector3(0,0,0);
Material1452.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1451.Material := Material1452;
LineProperties1453 := TLinePropertiesNode.Create;
LineProperties1453.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1451.LineProperties := LineProperties1453;
{ METHOD .Appearance }
Shape1450.Appearance := Appearance1451;
LineSet1454 := TLineSetNode.Create;
LineSet1454.SetVertexCount([2]);
Coordinate1455 := TCoordinateNode.Create;
Coordinate1455.SetPoint([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
end;

procedure InitHAnimGimbalJointController22Part100;
begin

{ METHOD .Coord }
LineSet1454.Coord := Coordinate1455;
{ METHOD .Geometry }
Shape1450.Geometry := LineSet1454;
{ METHOD .FdChildren.Add }
HAnimSegment1442.FdChildren.Add(Shape1450);
{ METHOD .FdChildren.Add }
HAnimJoint1441.FdChildren.Add(HAnimSegment1442);
HAnimJoint1456 := THAnimJointNode.Create;
HAnimJoint1456.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint1456.SetLlimit([-0.1745,-0.1745,-0.1745]);
HAnimJoint1456.SetUlimit([0.1745,0.1745,0.1745]);
HAnimSegment1457 := THAnimSegmentNode.Create;
TouchSensor1458 := TTouchSensorNode.Create;
TouchSensor1458.Description := 'l_acromioclavicular';
{ METHOD .FdChildren.Add }
HAnimSegment1457.FdChildren.Add(TouchSensor1458);
Transform1459 := TTransformNode.Create;
Transform1459.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform1460 := TTransformNode.Create;
Shape1461 := TShapeNode.Create;
Appearance1462 := TAppearanceNode.Create;
Material1463 := TMaterialNode.Create;
Material1463.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1462.Material := Material1463;
{ METHOD .Appearance }
Shape1461.Appearance := Appearance1462;
Sphere1464 := TSphereNode.Create;
Sphere1464.Radius := 0.03;
{ METHOD .Geometry }
Shape1461.Geometry := Sphere1464;
{ METHOD .FdChildren.Add }
Transform1460.FdChildren.Add(Shape1461);
{ METHOD .FdChildren.Add }
Transform1459.FdChildren.Add(Transform1460);
{ METHOD .FdChildren.Add }
HAnimSegment1457.FdChildren.Add(Transform1459);
Shape1465 := TShapeNode.Create;
Appearance1466 := TAppearanceNode.Create;
Material1467 := TMaterialNode.Create;
Material1467.DiffuseColor := Vector3(0,0,0);
Material1467.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1466.Material := Material1467;
LineProperties1468 := TLinePropertiesNode.Create;
LineProperties1468.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1466.LineProperties := LineProperties1468;
{ METHOD .Appearance }
Shape1465.Appearance := Appearance1466;
LineSet1469 := TLineSetNode.Create;
LineSet1469.SetVertexCount([2]);
Coordinate1470 := TCoordinateNode.Create;
end;

procedure InitHAnimGimbalJointController22Part101;
begin

Coordinate1470.SetPoint([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
{ METHOD .Coord }
LineSet1469.Coord := Coordinate1470;
{ METHOD .Geometry }
Shape1465.Geometry := LineSet1469;
{ METHOD .FdChildren.Add }
HAnimSegment1457.FdChildren.Add(Shape1465);
{ METHOD .FdChildren.Add }
HAnimJoint1456.FdChildren.Add(HAnimSegment1457);
HAnimJoint1471 := THAnimJointNode.Create;
HAnimJoint1471.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimJoint1471.SetLlimit([-3.1416,-1.5708,-0.5236]);
HAnimJoint1471.SetUlimit([1.0472,1.5708,3.1416]);
HAnimSegment1472 := THAnimSegmentNode.Create;
TouchSensor1473 := TTouchSensorNode.Create;
TouchSensor1473.Description := 'l_shoulder';
{ METHOD .FdChildren.Add }
HAnimSegment1472.FdChildren.Add(TouchSensor1473);
Transform1474 := TTransformNode.Create;
Transform1474.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform1475 := TTransformNode.Create;
Shape1476 := TShapeNode.Create;
Appearance1477 := TAppearanceNode.Create;
Material1478 := TMaterialNode.Create;
Material1478.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1477.Material := Material1478;
{ METHOD .Appearance }
Shape1476.Appearance := Appearance1477;
Sphere1479 := TSphereNode.Create;
Sphere1479.Radius := 0.03;
{ METHOD .Geometry }
Shape1476.Geometry := Sphere1479;
{ METHOD .FdChildren.Add }
Transform1475.FdChildren.Add(Shape1476);
{ METHOD .FdChildren.Add }
Transform1474.FdChildren.Add(Transform1475);
{ METHOD .FdChildren.Add }
HAnimSegment1472.FdChildren.Add(Transform1474);
Shape1480 := TShapeNode.Create;
Appearance1481 := TAppearanceNode.Create;
Material1482 := TMaterialNode.Create;
Material1482.DiffuseColor := Vector3(0,0,0);
Material1482.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1481.Material := Material1482;
LineProperties1483 := TLinePropertiesNode.Create;
LineProperties1483.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1481.LineProperties := LineProperties1483;
{ METHOD .Appearance }
Shape1480.Appearance := Appearance1481;
LineSet1484 := TLineSetNode.Create;
LineSet1484.SetVertexCount([2]);
end;

procedure InitHAnimGimbalJointController22Part102;
begin

Coordinate1485 := TCoordinateNode.Create;
Coordinate1485.SetPoint([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
{ METHOD .Coord }
LineSet1484.Coord := Coordinate1485;
{ METHOD .Geometry }
Shape1480.Geometry := LineSet1484;
{ METHOD .FdChildren.Add }
HAnimSegment1472.FdChildren.Add(Shape1480);
{ METHOD .FdChildren.Add }
HAnimJoint1471.FdChildren.Add(HAnimSegment1472);
HAnimJoint1486 := THAnimJointNode.Create;
HAnimJoint1486.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimJoint1486.SetLlimit([-2.5307,-1.5708,-0.0175]);
HAnimJoint1486.SetUlimit([0,1.5708,0.0175]);
HAnimSegment1487 := THAnimSegmentNode.Create;
TouchSensor1488 := TTouchSensorNode.Create;
TouchSensor1488.Description := 'l_elbow';
{ METHOD .FdChildren.Add }
HAnimSegment1487.FdChildren.Add(TouchSensor1488);
Transform1489 := TTransformNode.Create;
Transform1489.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform1490 := TTransformNode.Create;
Shape1491 := TShapeNode.Create;
Appearance1492 := TAppearanceNode.Create;
Material1493 := TMaterialNode.Create;
Material1493.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1492.Material := Material1493;
{ METHOD .Appearance }
Shape1491.Appearance := Appearance1492;
Sphere1494 := TSphereNode.Create;
Sphere1494.Radius := 0.03;
{ METHOD .Geometry }
Shape1491.Geometry := Sphere1494;
{ METHOD .FdChildren.Add }
Transform1490.FdChildren.Add(Shape1491);
{ METHOD .FdChildren.Add }
Transform1489.FdChildren.Add(Transform1490);
{ METHOD .FdChildren.Add }
HAnimSegment1487.FdChildren.Add(Transform1489);
Shape1495 := TShapeNode.Create;
Appearance1496 := TAppearanceNode.Create;
Material1497 := TMaterialNode.Create;
Material1497.DiffuseColor := Vector3(0,0,0);
Material1497.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1496.Material := Material1497;
LineProperties1498 := TLinePropertiesNode.Create;
LineProperties1498.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1496.LineProperties := LineProperties1498;
{ METHOD .Appearance }
Shape1495.Appearance := Appearance1496;
LineSet1499 := TLineSetNode.Create;
end;

procedure InitHAnimGimbalJointController22Part103;
begin

LineSet1499.SetVertexCount([2]);
Coordinate1500 := TCoordinateNode.Create;
Coordinate1500.SetPoint([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
{ METHOD .Coord }
LineSet1499.Coord := Coordinate1500;
{ METHOD .Geometry }
Shape1495.Geometry := LineSet1499;
{ METHOD .FdChildren.Add }
HAnimSegment1487.FdChildren.Add(Shape1495);
{ METHOD .FdChildren.Add }
HAnimJoint1486.FdChildren.Add(HAnimSegment1487);
HAnimJoint1501 := THAnimJointNode.Create;
HAnimJoint1501.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimJoint1501.SetLlimit([-0.3491,-0.1745,-1.3963]);
HAnimJoint1501.SetUlimit([0.5236,0.1745,1.2217]);
HAnimSegment1502 := THAnimSegmentNode.Create;
TouchSensor1503 := TTouchSensorNode.Create;
TouchSensor1503.Description := 'l_radiocarpal';
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(TouchSensor1503);
Transform1504 := TTransformNode.Create;
Transform1504.Scale := Vector3(0.2,0.2,0.2);
Transform1504.Translation := Vector3(0.2,0.85,-0.05);
Transform1504.Rotation := Vector4(0,0,1,-3.14);
Transform1505 := TTransformNode.Create;
Transform1505.Rotation := Vector4(0,1,0,-1.57);
Shape1506 := TShapeNode.Create;
Appearance1507 := TAppearanceNode.Create;
Material1508 := TMaterialNode.Create;
Material1508.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1507.Material := Material1508;
{ METHOD .Appearance }
Shape1506.Appearance := Appearance1507;
Sphere1509 := TSphereNode.Create;
Sphere1509.Radius := 0.03;
{ METHOD .Geometry }
Shape1506.Geometry := Sphere1509;
{ METHOD .FdChildren.Add }
Transform1505.FdChildren.Add(Shape1506);
{ METHOD .FdChildren.Add }
Transform1504.FdChildren.Add(Transform1505);
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Transform1504);
Shape1510 := TShapeNode.Create;
Appearance1511 := TAppearanceNode.Create;
Material1512 := TMaterialNode.Create;
Material1512.DiffuseColor := Vector3(0,0,0);
Material1512.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1511.Material := Material1512;
LineProperties1513 := TLinePropertiesNode.Create;
end;

procedure InitHAnimGimbalJointController22Part104;
begin

LineProperties1513.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1511.LineProperties := LineProperties1513;
{ METHOD .Appearance }
Shape1510.Appearance := Appearance1511;
LineSet1514 := TLineSetNode.Create;
LineSet1514.SetVertexCount([2]);
Coordinate1515 := TCoordinateNode.Create;
Coordinate1515.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1811,0.6975,-0.0826)]);
{ METHOD .Coord }
LineSet1514.Coord := Coordinate1515;
{ METHOD .Geometry }
Shape1510.Geometry := LineSet1514;
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Shape1510);
Shape1516 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1516.Appearance := Appearance1511;
LineSet1518 := TLineSetNode.Create;
LineSet1518.SetVertexCount([2]);
Coordinate1519 := TCoordinateNode.Create;
Coordinate1519.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1811,0.6984,-0.0935)]);
{ METHOD .Coord }
LineSet1518.Coord := Coordinate1519;
{ METHOD .Geometry }
Shape1516.Geometry := LineSet1518;
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Shape1516);
Shape1520 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1520.Appearance := Appearance1511;
LineSet1522 := TLineSetNode.Create;
LineSet1522.SetVertexCount([2]);
Coordinate1523 := TCoordinateNode.Create;
Coordinate1523.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1809,0.7,-0.1067)]);
{ METHOD .Coord }
LineSet1522.Coord := Coordinate1523;
{ METHOD .Geometry }
Shape1520.Geometry := LineSet1522;
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Shape1520);
Shape1524 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1524.Appearance := Appearance1511;
LineSet1526 := TLineSetNode.Create;
LineSet1526.SetVertexCount([2]);
Coordinate1527 := TCoordinateNode.Create;
Coordinate1527.SetPoint([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1809,0.6973,-0.1276)]);
{ METHOD .Coord }
LineSet1526.Coord := Coordinate1527;
{ METHOD .Geometry }
Shape1524.Geometry := LineSet1526;
{ METHOD .FdChildren.Add }
HAnimSegment1502.FdChildren.Add(Shape1524);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimSegment1502);
HAnimJoint1528 := THAnimJointNode.Create;
HAnimJoint1528.Center := Vector3(0.1811,0.6975,-0.0826);
end;

procedure InitHAnimGimbalJointController22Part105;
begin

HAnimJoint1528.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint1528.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment1529 := THAnimSegmentNode.Create;
TouchSensor1530 := TTouchSensorNode.Create;
TouchSensor1530.Description := 'l_midcarpal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1529.FdChildren.Add(TouchSensor1530);
Transform1531 := TTransformNode.Create;
Transform1531.Translation := Vector3(0.1811,0.6975,-0.0826);
Transform1532 := TTransformNode.Create;
Shape1533 := TShapeNode.Create;
Appearance1534 := TAppearanceNode.Create;
Material1535 := TMaterialNode.Create;
Material1535.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1534.Material := Material1535;
{ METHOD .Appearance }
Shape1533.Appearance := Appearance1534;
Sphere1536 := TSphereNode.Create;
Sphere1536.Radius := 0.03;
{ METHOD .Geometry }
Shape1533.Geometry := Sphere1536;
{ METHOD .FdChildren.Add }
Transform1532.FdChildren.Add(Shape1533);
{ METHOD .FdChildren.Add }
Transform1531.FdChildren.Add(Transform1532);
{ METHOD .FdChildren.Add }
HAnimSegment1529.FdChildren.Add(Transform1531);
Shape1537 := TShapeNode.Create;
Appearance1538 := TAppearanceNode.Create;
Material1539 := TMaterialNode.Create;
Material1539.DiffuseColor := Vector3(0,0,0);
Material1539.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1538.Material := Material1539;
LineProperties1540 := TLinePropertiesNode.Create;
LineProperties1540.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1538.LineProperties := LineProperties1540;
{ METHOD .Appearance }
Shape1537.Appearance := Appearance1538;
LineSet1541 := TLineSetNode.Create;
LineSet1541.SetVertexCount([2]);
Coordinate1542 := TCoordinateNode.Create;
Coordinate1542.SetPoint([Vector3(0.1811,0.6975,-0.0826),Vector3(0.1924,0.8472,-0.0534)]);
{ METHOD .Coord }
LineSet1541.Coord := Coordinate1542;
{ METHOD .Geometry }
Shape1537.Geometry := LineSet1541;
{ METHOD .FdChildren.Add }
HAnimSegment1529.FdChildren.Add(Shape1537);
{ METHOD .FdChildren.Add }
HAnimJoint1528.FdChildren.Add(HAnimSegment1529);
HAnimJoint1543 := THAnimJointNode.Create;
end;

procedure InitHAnimGimbalJointController22Part106;
begin

HAnimJoint1543.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint1543.SetLlimit([-0.5236,-0.6981,-0.5236]);
HAnimJoint1543.SetUlimit([0.5236,0.3491,0.5236]);
HAnimSegment1544 := THAnimSegmentNode.Create;
TouchSensor1545 := TTouchSensorNode.Create;
TouchSensor1545.Description := 'l_carpometacarpal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1544.FdChildren.Add(TouchSensor1545);
Transform1546 := TTransformNode.Create;
Transform1546.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform1547 := TTransformNode.Create;
Shape1548 := TShapeNode.Create;
Appearance1549 := TAppearanceNode.Create;
Material1550 := TMaterialNode.Create;
Material1550.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1549.Material := Material1550;
{ METHOD .Appearance }
Shape1548.Appearance := Appearance1549;
Sphere1551 := TSphereNode.Create;
Sphere1551.Radius := 0.03;
{ METHOD .Geometry }
Shape1548.Geometry := Sphere1551;
{ METHOD .FdChildren.Add }
Transform1547.FdChildren.Add(Shape1548);
{ METHOD .FdChildren.Add }
Transform1546.FdChildren.Add(Transform1547);
{ METHOD .FdChildren.Add }
HAnimSegment1544.FdChildren.Add(Transform1546);
Shape1552 := TShapeNode.Create;
Appearance1553 := TAppearanceNode.Create;
Material1554 := TMaterialNode.Create;
Material1554.DiffuseColor := Vector3(0,0,0);
Material1554.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1553.Material := Material1554;
LineProperties1555 := TLinePropertiesNode.Create;
LineProperties1555.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1553.LineProperties := LineProperties1555;
{ METHOD .Appearance }
Shape1552.Appearance := Appearance1553;
LineSet1556 := TLineSetNode.Create;
LineSet1556.SetVertexCount([2]);
Coordinate1557 := TCoordinateNode.Create;
Coordinate1557.SetPoint([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
{ METHOD .Coord }
LineSet1556.Coord := Coordinate1557;
{ METHOD .Geometry }
Shape1552.Geometry := LineSet1556;
{ METHOD .FdChildren.Add }
HAnimSegment1544.FdChildren.Add(Shape1552);
{ METHOD .FdChildren.Add }
HAnimJoint1543.FdChildren.Add(HAnimSegment1544);
end;

procedure InitHAnimGimbalJointController22Part107;
begin

HAnimJoint1558 := THAnimJointNode.Create;
HAnimJoint1558.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint1558.SetLlimit([-0.3491,-1.0472,-0.0175]);
HAnimJoint1558.SetUlimit([0.3491,0.3491,0.0175]);
HAnimSegment1559 := THAnimSegmentNode.Create;
TouchSensor1560 := TTouchSensorNode.Create;
TouchSensor1560.Description := 'l_metacarpophalangeal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1559.FdChildren.Add(TouchSensor1560);
Transform1561 := TTransformNode.Create;
Transform1561.Translation := Vector3(0.1951,0.8226,0.0246);
Transform1562 := TTransformNode.Create;
Shape1563 := TShapeNode.Create;
Appearance1564 := TAppearanceNode.Create;
Material1565 := TMaterialNode.Create;
Material1565.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1564.Material := Material1565;
{ METHOD .Appearance }
Shape1563.Appearance := Appearance1564;
Sphere1566 := TSphereNode.Create;
Sphere1566.Radius := 0.03;
{ METHOD .Geometry }
Shape1563.Geometry := Sphere1566;
{ METHOD .FdChildren.Add }
Transform1562.FdChildren.Add(Shape1563);
{ METHOD .FdChildren.Add }
Transform1561.FdChildren.Add(Transform1562);
{ METHOD .FdChildren.Add }
HAnimSegment1559.FdChildren.Add(Transform1561);
Shape1567 := TShapeNode.Create;
Appearance1568 := TAppearanceNode.Create;
Material1569 := TMaterialNode.Create;
Material1569.DiffuseColor := Vector3(0,0,0);
Material1569.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1568.Material := Material1569;
LineProperties1570 := TLinePropertiesNode.Create;
LineProperties1570.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1568.LineProperties := LineProperties1570;
{ METHOD .Appearance }
Shape1567.Appearance := Appearance1568;
LineSet1571 := TLineSetNode.Create;
LineSet1571.SetVertexCount([2]);
Coordinate1572 := TCoordinateNode.Create;
Coordinate1572.SetPoint([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
{ METHOD .Coord }
LineSet1571.Coord := Coordinate1572;
{ METHOD .Geometry }
Shape1567.Geometry := LineSet1571;
{ METHOD .FdChildren.Add }
HAnimSegment1559.FdChildren.Add(Shape1567);
end;

procedure InitHAnimGimbalJointController22Part108;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1558.FdChildren.Add(HAnimSegment1559);
HAnimJoint1573 := THAnimJointNode.Create;
HAnimJoint1573.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint1573.SetLlimit([-0.0175,-1.3963,-0.0175]);
HAnimJoint1573.SetUlimit([0.0175,0.1745,0.0175]);
HAnimSegment1574 := THAnimSegmentNode.Create;
Group1575 := TGroupNode.Create;
TouchSensor1576 := TTouchSensorNode.Create;
TouchSensor1576.Description := 'l_carpal_interphalangeal_1';
{ METHOD .FdChildren.Add }
Group1575.FdChildren.Add(TouchSensor1576);
Transform1577 := TTransformNode.Create;
Transform1577.Translation := Vector3(0.1955,0.8159,0.0464);
Shape1578 := TShapeNode.Create;
Appearance1579 := TAppearanceNode.Create;
Material1580 := TMaterialNode.Create;
Material1580.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1579.Material := Material1580;
{ METHOD .Appearance }
Shape1578.Appearance := Appearance1579;
Sphere1581 := TSphereNode.Create;
Sphere1581.Radius := 0.03;
{ METHOD .Geometry }
Shape1578.Geometry := Sphere1581;
{ METHOD .FdChildren.Add }
Transform1577.FdChildren.Add(Shape1578);
{ METHOD .FdChildren.Add }
Group1575.FdChildren.Add(Transform1577);
Shape1582 := TShapeNode.Create;
Appearance1583 := TAppearanceNode.Create;
Material1584 := TMaterialNode.Create;
Material1584.DiffuseColor := Vector3(0,0,0);
Material1584.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1583.Material := Material1584;
LineProperties1585 := TLinePropertiesNode.Create;
LineProperties1585.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1583.LineProperties := LineProperties1585;
{ METHOD .Appearance }
Shape1582.Appearance := Appearance1583;
LineSet1586 := TLineSetNode.Create;
LineSet1586.SetVertexCount([2]);
Coordinate1587 := TCoordinateNode.Create;
Coordinate1587.SetPoint([Vector3(0.1955,0.8159,0.0464),Vector3(0.1959,0.8092,0.0682)]);
{ METHOD .Coord }
LineSet1586.Coord := Coordinate1587;
{ METHOD .Geometry }
Shape1582.Geometry := LineSet1586;
{ METHOD .FdChildren.Add }
Group1575.FdChildren.Add(Shape1582);
end;

procedure InitHAnimGimbalJointController22Part109;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1574.FdChildren.Add(Group1575);
{ METHOD .FdChildren.Add }
HAnimJoint1573.FdChildren.Add(HAnimSegment1574);
{ METHOD .FdChildren.Add }
HAnimJoint1558.FdChildren.Add(HAnimJoint1573);
{ METHOD .FdChildren.Add }
HAnimJoint1543.FdChildren.Add(HAnimJoint1558);
{ METHOD .FdChildren.Add }
HAnimJoint1528.FdChildren.Add(HAnimJoint1543);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimJoint1528);
HAnimJoint1588 := THAnimJointNode.Create;
HAnimJoint1588.Center := Vector3(0.1811,0.6984,-0.0935);
HAnimJoint1588.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint1588.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment1589 := THAnimSegmentNode.Create;
TouchSensor1590 := TTouchSensorNode.Create;
TouchSensor1590.Description := 'l_midcarpal_2';
{ METHOD .FdChildren.Add }
HAnimSegment1589.FdChildren.Add(TouchSensor1590);
Transform1591 := TTransformNode.Create;
Transform1591.Translation := Vector3(0.1811,0.6984,-0.0935);
Transform1592 := TTransformNode.Create;
Shape1593 := TShapeNode.Create;
Appearance1594 := TAppearanceNode.Create;
Material1595 := TMaterialNode.Create;
Material1595.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1594.Material := Material1595;
{ METHOD .Appearance }
Shape1593.Appearance := Appearance1594;
Sphere1596 := TSphereNode.Create;
Sphere1596.Radius := 0.03;
{ METHOD .Geometry }
Shape1593.Geometry := Sphere1596;
{ METHOD .FdChildren.Add }
Transform1592.FdChildren.Add(Shape1593);
{ METHOD .FdChildren.Add }
Transform1591.FdChildren.Add(Transform1592);
{ METHOD .FdChildren.Add }
HAnimSegment1589.FdChildren.Add(Transform1591);
Shape1597 := TShapeNode.Create;
Appearance1598 := TAppearanceNode.Create;
Material1599 := TMaterialNode.Create;
Material1599.DiffuseColor := Vector3(0,0,0);
Material1599.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1598.Material := Material1599;
LineProperties1600 := TLinePropertiesNode.Create;
LineProperties1600.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1598.LineProperties := LineProperties1600;
{ METHOD .Appearance }
Shape1597.Appearance := Appearance1598;
LineSet1601 := TLineSetNode.Create;
end;

procedure InitHAnimGimbalJointController22Part110;
begin

LineSet1601.SetVertexCount([2]);
Coordinate1602 := TCoordinateNode.Create;
Coordinate1602.SetPoint([Vector3(0.1811,0.6984,-0.0935),Vector3(0.1983,0.8024,-0.028)]);
{ METHOD .Coord }
LineSet1601.Coord := Coordinate1602;
{ METHOD .Geometry }
Shape1597.Geometry := LineSet1601;
{ METHOD .FdChildren.Add }
HAnimSegment1589.FdChildren.Add(Shape1597);
{ METHOD .FdChildren.Add }
HAnimJoint1588.FdChildren.Add(HAnimSegment1589);
HAnimJoint1603 := THAnimJointNode.Create;
HAnimJoint1603.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint1603.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint1603.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment1604 := THAnimSegmentNode.Create;
TouchSensor1605 := TTouchSensorNode.Create;
TouchSensor1605.Description := 'l_carpometacarpal_2';
{ METHOD .FdChildren.Add }
HAnimSegment1604.FdChildren.Add(TouchSensor1605);
Transform1606 := TTransformNode.Create;
Transform1606.Translation := Vector3(0.1983,0.8024,-0.028);
Transform1607 := TTransformNode.Create;
Shape1608 := TShapeNode.Create;
Appearance1609 := TAppearanceNode.Create;
Material1610 := TMaterialNode.Create;
Material1610.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1609.Material := Material1610;
{ METHOD .Appearance }
Shape1608.Appearance := Appearance1609;
Sphere1611 := TSphereNode.Create;
Sphere1611.Radius := 0.03;
{ METHOD .Geometry }
Shape1608.Geometry := Sphere1611;
{ METHOD .FdChildren.Add }
Transform1607.FdChildren.Add(Shape1608);
{ METHOD .FdChildren.Add }
Transform1606.FdChildren.Add(Transform1607);
{ METHOD .FdChildren.Add }
HAnimSegment1604.FdChildren.Add(Transform1606);
Shape1612 := TShapeNode.Create;
Appearance1613 := TAppearanceNode.Create;
Material1614 := TMaterialNode.Create;
Material1614.DiffuseColor := Vector3(0,0,0);
Material1614.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1613.Material := Material1614;
LineProperties1615 := TLinePropertiesNode.Create;
LineProperties1615.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1613.LineProperties := LineProperties1615;
{ METHOD .Appearance }
Shape1612.Appearance := Appearance1613;
end;

procedure InitHAnimGimbalJointController22Part111;
begin

LineSet1616 := TLineSetNode.Create;
LineSet1616.SetVertexCount([2]);
Coordinate1617 := TCoordinateNode.Create;
Coordinate1617.SetPoint([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
{ METHOD .Coord }
LineSet1616.Coord := Coordinate1617;
{ METHOD .Geometry }
Shape1612.Geometry := LineSet1616;
{ METHOD .FdChildren.Add }
HAnimSegment1604.FdChildren.Add(Shape1612);
{ METHOD .FdChildren.Add }
HAnimJoint1603.FdChildren.Add(HAnimSegment1604);
HAnimJoint1618 := THAnimJointNode.Create;
HAnimJoint1618.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint1618.SetLlimit([-0.2618,-0.0873,-1.5708]);
HAnimJoint1618.SetUlimit([0.2618,0.0873,0.5236]);
HAnimSegment1619 := THAnimSegmentNode.Create;
TouchSensor1620 := TTouchSensorNode.Create;
TouchSensor1620.Description := 'l_metacarpophalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment1619.FdChildren.Add(TouchSensor1620);
Transform1621 := TTransformNode.Create;
Transform1621.Translation := Vector3(0.1983,0.7815,-0.028);
Transform1622 := TTransformNode.Create;
Shape1623 := TShapeNode.Create;
Appearance1624 := TAppearanceNode.Create;
Material1625 := TMaterialNode.Create;
Material1625.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1624.Material := Material1625;
{ METHOD .Appearance }
Shape1623.Appearance := Appearance1624;
Sphere1626 := TSphereNode.Create;
Sphere1626.Radius := 0.03;
{ METHOD .Geometry }
Shape1623.Geometry := Sphere1626;
{ METHOD .FdChildren.Add }
Transform1622.FdChildren.Add(Shape1623);
{ METHOD .FdChildren.Add }
Transform1621.FdChildren.Add(Transform1622);
{ METHOD .FdChildren.Add }
HAnimSegment1619.FdChildren.Add(Transform1621);
Shape1627 := TShapeNode.Create;
Appearance1628 := TAppearanceNode.Create;
Material1629 := TMaterialNode.Create;
Material1629.DiffuseColor := Vector3(0,0,0);
Material1629.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1628.Material := Material1629;
LineProperties1630 := TLinePropertiesNode.Create;
LineProperties1630.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1628.LineProperties := LineProperties1630;
end;

procedure InitHAnimGimbalJointController22Part112;
begin

{ METHOD .Appearance }
Shape1627.Appearance := Appearance1628;
LineSet1631 := TLineSetNode.Create;
LineSet1631.SetVertexCount([2]);
Coordinate1632 := TCoordinateNode.Create;
Coordinate1632.SetPoint([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
{ METHOD .Coord }
LineSet1631.Coord := Coordinate1632;
{ METHOD .Geometry }
Shape1627.Geometry := LineSet1631;
{ METHOD .FdChildren.Add }
HAnimSegment1619.FdChildren.Add(Shape1627);
{ METHOD .FdChildren.Add }
HAnimJoint1618.FdChildren.Add(HAnimSegment1619);
HAnimJoint1633 := THAnimJointNode.Create;
HAnimJoint1633.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint1633.SetLlimit([-0.0175,-0.0175,-1.9199]);
HAnimJoint1633.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1634 := THAnimSegmentNode.Create;
TouchSensor1635 := TTouchSensorNode.Create;
TouchSensor1635.Description := 'l_carpal_proximal_interphalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment1634.FdChildren.Add(TouchSensor1635);
Transform1636 := TTransformNode.Create;
Transform1636.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform1637 := TTransformNode.Create;
Shape1638 := TShapeNode.Create;
Appearance1639 := TAppearanceNode.Create;
Material1640 := TMaterialNode.Create;
Material1640.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1639.Material := Material1640;
{ METHOD .Appearance }
Shape1638.Appearance := Appearance1639;
Sphere1641 := TSphereNode.Create;
Sphere1641.Radius := 0.03;
{ METHOD .Geometry }
Shape1638.Geometry := Sphere1641;
{ METHOD .FdChildren.Add }
Transform1637.FdChildren.Add(Shape1638);
{ METHOD .FdChildren.Add }
Transform1636.FdChildren.Add(Transform1637);
{ METHOD .FdChildren.Add }
HAnimSegment1634.FdChildren.Add(Transform1636);
Shape1642 := TShapeNode.Create;
Appearance1643 := TAppearanceNode.Create;
Material1644 := TMaterialNode.Create;
Material1644.DiffuseColor := Vector3(0,0,0);
Material1644.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1643.Material := Material1644;
LineProperties1645 := TLinePropertiesNode.Create;
LineProperties1645.LinewidthScaleFactor := 6;
end;

procedure InitHAnimGimbalJointController22Part113;
begin

{ METHOD .LineProperties }
Appearance1643.LineProperties := LineProperties1645;
{ METHOD .Appearance }
Shape1642.Appearance := Appearance1643;
LineSet1646 := TLineSetNode.Create;
LineSet1646.SetVertexCount([2]);
Coordinate1647 := TCoordinateNode.Create;
Coordinate1647.SetPoint([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
{ METHOD .Coord }
LineSet1646.Coord := Coordinate1647;
{ METHOD .Geometry }
Shape1642.Geometry := LineSet1646;
{ METHOD .FdChildren.Add }
HAnimSegment1634.FdChildren.Add(Shape1642);
{ METHOD .FdChildren.Add }
HAnimJoint1633.FdChildren.Add(HAnimSegment1634);
HAnimJoint1648 := THAnimJointNode.Create;
HAnimJoint1648.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint1648.SetLlimit([-0.0175,-0.0175,-1.3963]);
HAnimJoint1648.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1649 := THAnimSegmentNode.Create;
Group1650 := TGroupNode.Create;
TouchSensor1651 := TTouchSensorNode.Create;
TouchSensor1651.Description := 'l_carpal_distal_interphalangeal_2';
{ METHOD .FdChildren.Add }
Group1650.FdChildren.Add(TouchSensor1651);
Transform1652 := TTransformNode.Create;
Transform1652.Translation := Vector3(0.2028,0.7139,-0.0236);
Shape1653 := TShapeNode.Create;
Appearance1654 := TAppearanceNode.Create;
Material1655 := TMaterialNode.Create;
Material1655.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1654.Material := Material1655;
{ METHOD .Appearance }
Shape1653.Appearance := Appearance1654;
Sphere1656 := TSphereNode.Create;
Sphere1656.Radius := 0.03;
{ METHOD .Geometry }
Shape1653.Geometry := Sphere1656;
{ METHOD .FdChildren.Add }
Transform1652.FdChildren.Add(Shape1653);
{ METHOD .FdChildren.Add }
Group1650.FdChildren.Add(Transform1652);
Shape1657 := TShapeNode.Create;
Appearance1658 := TAppearanceNode.Create;
Material1659 := TMaterialNode.Create;
Material1659.DiffuseColor := Vector3(0,0,0);
Material1659.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1658.Material := Material1659;
LineProperties1660 := TLinePropertiesNode.Create;
LineProperties1660.LinewidthScaleFactor := 6;
end;

procedure InitHAnimGimbalJointController22Part114;
begin

{ METHOD .LineProperties }
Appearance1658.LineProperties := LineProperties1660;
{ METHOD .Appearance }
Shape1657.Appearance := Appearance1658;
LineSet1661 := TLineSetNode.Create;
LineSet1661.SetVertexCount([2]);
Coordinate1662 := TCoordinateNode.Create;
Coordinate1662.SetPoint([Vector3(0.2028,0.7139,-0.0236),Vector3(0.2039,0.6915,-0.0224)]);
{ METHOD .Coord }
LineSet1661.Coord := Coordinate1662;
{ METHOD .Geometry }
Shape1657.Geometry := LineSet1661;
{ METHOD .FdChildren.Add }
Group1650.FdChildren.Add(Shape1657);
{ METHOD .FdChildren.Add }
HAnimSegment1649.FdChildren.Add(Group1650);
{ METHOD .FdChildren.Add }
HAnimJoint1648.FdChildren.Add(HAnimSegment1649);
{ METHOD .FdChildren.Add }
HAnimJoint1633.FdChildren.Add(HAnimJoint1648);
{ METHOD .FdChildren.Add }
HAnimJoint1618.FdChildren.Add(HAnimJoint1633);
{ METHOD .FdChildren.Add }
HAnimJoint1603.FdChildren.Add(HAnimJoint1618);
{ METHOD .FdChildren.Add }
HAnimJoint1588.FdChildren.Add(HAnimJoint1603);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimJoint1588);
HAnimJoint1663 := THAnimJointNode.Create;
HAnimJoint1663.Center := Vector3(0.1809,0.7,-0.1067);
HAnimJoint1663.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint1663.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment1664 := THAnimSegmentNode.Create;
TouchSensor1665 := TTouchSensorNode.Create;
TouchSensor1665.Description := 'l_midcarpal_3';
{ METHOD .FdChildren.Add }
HAnimSegment1664.FdChildren.Add(TouchSensor1665);
Transform1666 := TTransformNode.Create;
Transform1666.Translation := Vector3(0.1809,0.7,-0.1067);
Transform1667 := TTransformNode.Create;
Shape1668 := TShapeNode.Create;
Appearance1669 := TAppearanceNode.Create;
Material1670 := TMaterialNode.Create;
Material1670.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1669.Material := Material1670;
{ METHOD .Appearance }
Shape1668.Appearance := Appearance1669;
Sphere1671 := TSphereNode.Create;
Sphere1671.Radius := 0.03;
{ METHOD .Geometry }
Shape1668.Geometry := Sphere1671;
{ METHOD .FdChildren.Add }
Transform1667.FdChildren.Add(Shape1668);
{ METHOD .FdChildren.Add }
Transform1666.FdChildren.Add(Transform1667);
{ METHOD .FdChildren.Add }
HAnimSegment1664.FdChildren.Add(Transform1666);
Shape1672 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part115;
begin

Appearance1673 := TAppearanceNode.Create;
Material1674 := TMaterialNode.Create;
Material1674.DiffuseColor := Vector3(0,0,0);
Material1674.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1673.Material := Material1674;
LineProperties1675 := TLinePropertiesNode.Create;
LineProperties1675.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1673.LineProperties := LineProperties1675;
{ METHOD .Appearance }
Shape1672.Appearance := Appearance1673;
LineSet1676 := TLineSetNode.Create;
LineSet1676.SetVertexCount([2]);
Coordinate1677 := TCoordinateNode.Create;
Coordinate1677.SetPoint([Vector3(0.1809,0.7,-0.1067),Vector3(0.1987,0.8029,-0.053)]);
{ METHOD .Coord }
LineSet1676.Coord := Coordinate1677;
{ METHOD .Geometry }
Shape1672.Geometry := LineSet1676;
{ METHOD .FdChildren.Add }
HAnimSegment1664.FdChildren.Add(Shape1672);
{ METHOD .FdChildren.Add }
HAnimJoint1663.FdChildren.Add(HAnimSegment1664);
HAnimJoint1678 := THAnimJointNode.Create;
HAnimJoint1678.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint1678.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint1678.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment1679 := THAnimSegmentNode.Create;
TouchSensor1680 := TTouchSensorNode.Create;
TouchSensor1680.Description := 'l_carpometacarpal_3';
{ METHOD .FdChildren.Add }
HAnimSegment1679.FdChildren.Add(TouchSensor1680);
Transform1681 := TTransformNode.Create;
Transform1681.Translation := Vector3(0.1987,0.8029,-0.053);
Transform1682 := TTransformNode.Create;
Shape1683 := TShapeNode.Create;
Appearance1684 := TAppearanceNode.Create;
Material1685 := TMaterialNode.Create;
Material1685.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1684.Material := Material1685;
{ METHOD .Appearance }
Shape1683.Appearance := Appearance1684;
Sphere1686 := TSphereNode.Create;
Sphere1686.Radius := 0.03;
{ METHOD .Geometry }
Shape1683.Geometry := Sphere1686;
{ METHOD .FdChildren.Add }
Transform1682.FdChildren.Add(Shape1683);
{ METHOD .FdChildren.Add }
Transform1681.FdChildren.Add(Transform1682);
{ METHOD .FdChildren.Add }
HAnimSegment1679.FdChildren.Add(Transform1681);
end;

procedure InitHAnimGimbalJointController22Part116;
begin

Shape1687 := TShapeNode.Create;
Appearance1688 := TAppearanceNode.Create;
Material1689 := TMaterialNode.Create;
Material1689.DiffuseColor := Vector3(0,0,0);
Material1689.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1688.Material := Material1689;
LineProperties1690 := TLinePropertiesNode.Create;
LineProperties1690.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1688.LineProperties := LineProperties1690;
{ METHOD .Appearance }
Shape1687.Appearance := Appearance1688;
LineSet1691 := TLineSetNode.Create;
LineSet1691.SetVertexCount([2]);
Coordinate1692 := TCoordinateNode.Create;
Coordinate1692.SetPoint([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
{ METHOD .Coord }
LineSet1691.Coord := Coordinate1692;
{ METHOD .Geometry }
Shape1687.Geometry := LineSet1691;
{ METHOD .FdChildren.Add }
HAnimSegment1679.FdChildren.Add(Shape1687);
{ METHOD .FdChildren.Add }
HAnimJoint1678.FdChildren.Add(HAnimSegment1679);
HAnimJoint1693 := THAnimJointNode.Create;
HAnimJoint1693.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint1693.SetLlimit([-0.2618,-0.0873,-1.5708]);
HAnimJoint1693.SetUlimit([0.2618,0.0873,0.5236]);
HAnimSegment1694 := THAnimSegmentNode.Create;
TouchSensor1695 := TTouchSensorNode.Create;
TouchSensor1695.Description := 'l_metacarpophalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment1694.FdChildren.Add(TouchSensor1695);
Transform1696 := TTransformNode.Create;
Transform1696.Translation := Vector3(0.1987,0.7818,-0.053);
Transform1697 := TTransformNode.Create;
Shape1698 := TShapeNode.Create;
Appearance1699 := TAppearanceNode.Create;
Material1700 := TMaterialNode.Create;
Material1700.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1699.Material := Material1700;
{ METHOD .Appearance }
Shape1698.Appearance := Appearance1699;
Sphere1701 := TSphereNode.Create;
Sphere1701.Radius := 0.03;
{ METHOD .Geometry }
Shape1698.Geometry := Sphere1701;
{ METHOD .FdChildren.Add }
Transform1697.FdChildren.Add(Shape1698);
{ METHOD .FdChildren.Add }
Transform1696.FdChildren.Add(Transform1697);
end;

procedure InitHAnimGimbalJointController22Part117;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1694.FdChildren.Add(Transform1696);
Shape1702 := TShapeNode.Create;
Appearance1703 := TAppearanceNode.Create;
Material1704 := TMaterialNode.Create;
Material1704.DiffuseColor := Vector3(0,0,0);
Material1704.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1703.Material := Material1704;
LineProperties1705 := TLinePropertiesNode.Create;
LineProperties1705.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1703.LineProperties := LineProperties1705;
{ METHOD .Appearance }
Shape1702.Appearance := Appearance1703;
LineSet1706 := TLineSetNode.Create;
LineSet1706.SetVertexCount([2]);
Coordinate1707 := TCoordinateNode.Create;
Coordinate1707.SetPoint([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
{ METHOD .Coord }
LineSet1706.Coord := Coordinate1707;
{ METHOD .Geometry }
Shape1702.Geometry := LineSet1706;
{ METHOD .FdChildren.Add }
HAnimSegment1694.FdChildren.Add(Shape1702);
{ METHOD .FdChildren.Add }
HAnimJoint1693.FdChildren.Add(HAnimSegment1694);
HAnimJoint1708 := THAnimJointNode.Create;
HAnimJoint1708.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint1708.SetLlimit([-0.0175,-0.0175,-1.9199]);
HAnimJoint1708.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1709 := THAnimSegmentNode.Create;
TouchSensor1710 := TTouchSensorNode.Create;
TouchSensor1710.Description := 'l_carpal_proximal_interphalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment1709.FdChildren.Add(TouchSensor1710);
Transform1711 := TTransformNode.Create;
Transform1711.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform1712 := TTransformNode.Create;
Shape1713 := TShapeNode.Create;
Appearance1714 := TAppearanceNode.Create;
Material1715 := TMaterialNode.Create;
Material1715.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1714.Material := Material1715;
{ METHOD .Appearance }
Shape1713.Appearance := Appearance1714;
Sphere1716 := TSphereNode.Create;
Sphere1716.Radius := 0.03;
{ METHOD .Geometry }
Shape1713.Geometry := Sphere1716;
{ METHOD .FdChildren.Add }
Transform1712.FdChildren.Add(Shape1713);
end;

procedure InitHAnimGimbalJointController22Part118;
begin

{ METHOD .FdChildren.Add }
Transform1711.FdChildren.Add(Transform1712);
{ METHOD .FdChildren.Add }
HAnimSegment1709.FdChildren.Add(Transform1711);
Shape1717 := TShapeNode.Create;
Appearance1718 := TAppearanceNode.Create;
Material1719 := TMaterialNode.Create;
Material1719.DiffuseColor := Vector3(0,0,0);
Material1719.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1718.Material := Material1719;
LineProperties1720 := TLinePropertiesNode.Create;
LineProperties1720.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1718.LineProperties := LineProperties1720;
{ METHOD .Appearance }
Shape1717.Appearance := Appearance1718;
LineSet1721 := TLineSetNode.Create;
LineSet1721.SetVertexCount([2]);
Coordinate1722 := TCoordinateNode.Create;
Coordinate1722.SetPoint([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
{ METHOD .Coord }
LineSet1721.Coord := Coordinate1722;
{ METHOD .Geometry }
Shape1717.Geometry := LineSet1721;
{ METHOD .FdChildren.Add }
HAnimSegment1709.FdChildren.Add(Shape1717);
{ METHOD .FdChildren.Add }
HAnimJoint1708.FdChildren.Add(HAnimSegment1709);
HAnimJoint1723 := THAnimJointNode.Create;
HAnimJoint1723.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint1723.SetLlimit([-0.0175,-0.0175,-1.3963]);
HAnimJoint1723.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1724 := THAnimSegmentNode.Create;
Group1725 := TGroupNode.Create;
TouchSensor1726 := TTouchSensorNode.Create;
TouchSensor1726.Description := 'l_carpal_distal_interphalangeal_3';
{ METHOD .FdChildren.Add }
Group1725.FdChildren.Add(TouchSensor1726);
Transform1727 := TTransformNode.Create;
Transform1727.Translation := Vector3(0.2026,0.7011,-0.0494);
Shape1728 := TShapeNode.Create;
Appearance1729 := TAppearanceNode.Create;
Material1730 := TMaterialNode.Create;
Material1730.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1729.Material := Material1730;
{ METHOD .Appearance }
Shape1728.Appearance := Appearance1729;
Sphere1731 := TSphereNode.Create;
Sphere1731.Radius := 0.03;
{ METHOD .Geometry }
Shape1728.Geometry := Sphere1731;
end;

procedure InitHAnimGimbalJointController22Part119;
begin

{ METHOD .FdChildren.Add }
Transform1727.FdChildren.Add(Shape1728);
{ METHOD .FdChildren.Add }
Group1725.FdChildren.Add(Transform1727);
Shape1732 := TShapeNode.Create;
Appearance1733 := TAppearanceNode.Create;
Material1734 := TMaterialNode.Create;
Material1734.DiffuseColor := Vector3(0,0,0);
Material1734.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1733.Material := Material1734;
LineProperties1735 := TLinePropertiesNode.Create;
LineProperties1735.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1733.LineProperties := LineProperties1735;
{ METHOD .Appearance }
Shape1732.Appearance := Appearance1733;
LineSet1736 := TLineSetNode.Create;
LineSet1736.SetVertexCount([2]);
Coordinate1737 := TCoordinateNode.Create;
Coordinate1737.SetPoint([Vector3(0.2026,0.7011,-0.0494),Vector3(0.2039,0.6749,-0.0485)]);
{ METHOD .Coord }
LineSet1736.Coord := Coordinate1737;
{ METHOD .Geometry }
Shape1732.Geometry := LineSet1736;
{ METHOD .FdChildren.Add }
Group1725.FdChildren.Add(Shape1732);
{ METHOD .FdChildren.Add }
HAnimSegment1724.FdChildren.Add(Group1725);
{ METHOD .FdChildren.Add }
HAnimJoint1723.FdChildren.Add(HAnimSegment1724);
{ METHOD .FdChildren.Add }
HAnimJoint1708.FdChildren.Add(HAnimJoint1723);
{ METHOD .FdChildren.Add }
HAnimJoint1693.FdChildren.Add(HAnimJoint1708);
{ METHOD .FdChildren.Add }
HAnimJoint1678.FdChildren.Add(HAnimJoint1693);
{ METHOD .FdChildren.Add }
HAnimJoint1663.FdChildren.Add(HAnimJoint1678);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimJoint1663);
HAnimJoint1738 := THAnimJointNode.Create;
HAnimJoint1738.Center := Vector3(0.1809,0.6973,-0.1276);
HAnimJoint1738.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint1738.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment1739 := THAnimSegmentNode.Create;
TouchSensor1740 := TTouchSensorNode.Create;
TouchSensor1740.Description := 'l_midcarpal_4_5';
{ METHOD .FdChildren.Add }
HAnimSegment1739.FdChildren.Add(TouchSensor1740);
Transform1741 := TTransformNode.Create;
Transform1741.Translation := Vector3(0.1809,0.6973,-0.1276);
Transform1742 := TTransformNode.Create;
Shape1743 := TShapeNode.Create;
Appearance1744 := TAppearanceNode.Create;
Material1745 := TMaterialNode.Create;
end;

procedure InitHAnimGimbalJointController22Part120;
begin

Material1745.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1744.Material := Material1745;
{ METHOD .Appearance }
Shape1743.Appearance := Appearance1744;
Sphere1746 := TSphereNode.Create;
Sphere1746.Radius := 0.03;
{ METHOD .Geometry }
Shape1743.Geometry := Sphere1746;
{ METHOD .FdChildren.Add }
Transform1742.FdChildren.Add(Shape1743);
{ METHOD .FdChildren.Add }
Transform1741.FdChildren.Add(Transform1742);
{ METHOD .FdChildren.Add }
HAnimSegment1739.FdChildren.Add(Transform1741);
Shape1747 := TShapeNode.Create;
Appearance1748 := TAppearanceNode.Create;
Material1749 := TMaterialNode.Create;
Material1749.DiffuseColor := Vector3(0,0,0);
Material1749.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1748.Material := Material1749;
LineProperties1750 := TLinePropertiesNode.Create;
LineProperties1750.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1748.LineProperties := LineProperties1750;
{ METHOD .Appearance }
Shape1747.Appearance := Appearance1748;
LineSet1751 := TLineSetNode.Create;
LineSet1751.SetVertexCount([2]);
Coordinate1752 := TCoordinateNode.Create;
Coordinate1752.SetPoint([Vector3(0.1809,0.6973,-0.1276),Vector3(0.1956,0.8019,-0.0794)]);
{ METHOD .Coord }
LineSet1751.Coord := Coordinate1752;
{ METHOD .Geometry }
Shape1747.Geometry := LineSet1751;
{ METHOD .FdChildren.Add }
HAnimSegment1739.FdChildren.Add(Shape1747);
Shape1753 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1753.Appearance := Appearance1748;
LineSet1755 := TLineSetNode.Create;
LineSet1755.SetVertexCount([2]);
Coordinate1756 := TCoordinateNode.Create;
Coordinate1756.SetPoint([Vector3(0.1809,0.6973,-0.1276),Vector3(0.1925,0.8066,-0.1036)]);
{ METHOD .Coord }
LineSet1755.Coord := Coordinate1756;
{ METHOD .Geometry }
Shape1753.Geometry := LineSet1755;
{ METHOD .FdChildren.Add }
HAnimSegment1739.FdChildren.Add(Shape1753);
{ METHOD .FdChildren.Add }
HAnimJoint1738.FdChildren.Add(HAnimSegment1739);
HAnimJoint1757 := THAnimJointNode.Create;
HAnimJoint1757.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint1757.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint1757.SetUlimit([0.0873,0.0175,0.1396]);
end;

procedure InitHAnimGimbalJointController22Part121;
begin

HAnimSegment1758 := THAnimSegmentNode.Create;
TouchSensor1759 := TTouchSensorNode.Create;
TouchSensor1759.Description := 'l_carpometacarpal_4';
{ METHOD .FdChildren.Add }
HAnimSegment1758.FdChildren.Add(TouchSensor1759);
Transform1760 := TTransformNode.Create;
Transform1760.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform1761 := TTransformNode.Create;
Shape1762 := TShapeNode.Create;
Appearance1763 := TAppearanceNode.Create;
Material1764 := TMaterialNode.Create;
Material1764.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1763.Material := Material1764;
{ METHOD .Appearance }
Shape1762.Appearance := Appearance1763;
Sphere1765 := TSphereNode.Create;
Sphere1765.Radius := 0.03;
{ METHOD .Geometry }
Shape1762.Geometry := Sphere1765;
{ METHOD .FdChildren.Add }
Transform1761.FdChildren.Add(Shape1762);
{ METHOD .FdChildren.Add }
Transform1760.FdChildren.Add(Transform1761);
{ METHOD .FdChildren.Add }
HAnimSegment1758.FdChildren.Add(Transform1760);
Shape1766 := TShapeNode.Create;
Appearance1767 := TAppearanceNode.Create;
Material1768 := TMaterialNode.Create;
Material1768.DiffuseColor := Vector3(0,0,0);
Material1768.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1767.Material := Material1768;
LineProperties1769 := TLinePropertiesNode.Create;
LineProperties1769.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1767.LineProperties := LineProperties1769;
{ METHOD .Appearance }
Shape1766.Appearance := Appearance1767;
LineSet1770 := TLineSetNode.Create;
LineSet1770.SetVertexCount([2]);
Coordinate1771 := TCoordinateNode.Create;
Coordinate1771.SetPoint([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
{ METHOD .Coord }
LineSet1770.Coord := Coordinate1771;
{ METHOD .Geometry }
Shape1766.Geometry := LineSet1770;
{ METHOD .FdChildren.Add }
HAnimSegment1758.FdChildren.Add(Shape1766);
{ METHOD .FdChildren.Add }
HAnimJoint1757.FdChildren.Add(HAnimSegment1758);
HAnimJoint1772 := THAnimJointNode.Create;
HAnimJoint1772.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint1772.SetLlimit([-0.2618,-0.0873,-1.5708]);
end;

procedure InitHAnimGimbalJointController22Part122;
begin

HAnimJoint1772.SetUlimit([0.2618,0.0873,0.5236]);
HAnimSegment1773 := THAnimSegmentNode.Create;
TouchSensor1774 := TTouchSensorNode.Create;
TouchSensor1774.Description := 'l_metacarpophalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment1773.FdChildren.Add(TouchSensor1774);
Transform1775 := TTransformNode.Create;
Transform1775.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform1776 := TTransformNode.Create;
Shape1777 := TShapeNode.Create;
Appearance1778 := TAppearanceNode.Create;
Material1779 := TMaterialNode.Create;
Material1779.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1778.Material := Material1779;
{ METHOD .Appearance }
Shape1777.Appearance := Appearance1778;
Sphere1780 := TSphereNode.Create;
Sphere1780.Radius := 0.03;
{ METHOD .Geometry }
Shape1777.Geometry := Sphere1780;
{ METHOD .FdChildren.Add }
Transform1776.FdChildren.Add(Shape1777);
{ METHOD .FdChildren.Add }
Transform1775.FdChildren.Add(Transform1776);
{ METHOD .FdChildren.Add }
HAnimSegment1773.FdChildren.Add(Transform1775);
Shape1781 := TShapeNode.Create;
Appearance1782 := TAppearanceNode.Create;
Material1783 := TMaterialNode.Create;
Material1783.DiffuseColor := Vector3(0,0,0);
Material1783.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1782.Material := Material1783;
LineProperties1784 := TLinePropertiesNode.Create;
LineProperties1784.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1782.LineProperties := LineProperties1784;
{ METHOD .Appearance }
Shape1781.Appearance := Appearance1782;
LineSet1785 := TLineSetNode.Create;
LineSet1785.SetVertexCount([2]);
Coordinate1786 := TCoordinateNode.Create;
Coordinate1786.SetPoint([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
{ METHOD .Coord }
LineSet1785.Coord := Coordinate1786;
{ METHOD .Geometry }
Shape1781.Geometry := LineSet1785;
{ METHOD .FdChildren.Add }
HAnimSegment1773.FdChildren.Add(Shape1781);
{ METHOD .FdChildren.Add }
HAnimJoint1772.FdChildren.Add(HAnimSegment1773);
HAnimJoint1787 := THAnimJointNode.Create;
HAnimJoint1787.Center := Vector3(0.1973,0.7287,-0.0777);
end;

procedure InitHAnimGimbalJointController22Part123;
begin

HAnimJoint1787.SetLlimit([-0.0175,-0.0175,-1.9199]);
HAnimJoint1787.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1788 := THAnimSegmentNode.Create;
TouchSensor1789 := TTouchSensorNode.Create;
TouchSensor1789.Description := 'l_carpal_proximal_interphalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment1788.FdChildren.Add(TouchSensor1789);
Transform1790 := TTransformNode.Create;
Transform1790.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform1791 := TTransformNode.Create;
Shape1792 := TShapeNode.Create;
Appearance1793 := TAppearanceNode.Create;
Material1794 := TMaterialNode.Create;
Material1794.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1793.Material := Material1794;
{ METHOD .Appearance }
Shape1792.Appearance := Appearance1793;
Sphere1795 := TSphereNode.Create;
Sphere1795.Radius := 0.03;
{ METHOD .Geometry }
Shape1792.Geometry := Sphere1795;
{ METHOD .FdChildren.Add }
Transform1791.FdChildren.Add(Shape1792);
{ METHOD .FdChildren.Add }
Transform1790.FdChildren.Add(Transform1791);
{ METHOD .FdChildren.Add }
HAnimSegment1788.FdChildren.Add(Transform1790);
Shape1796 := TShapeNode.Create;
Appearance1797 := TAppearanceNode.Create;
Material1798 := TMaterialNode.Create;
Material1798.DiffuseColor := Vector3(0,0,0);
Material1798.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1797.Material := Material1798;
LineProperties1799 := TLinePropertiesNode.Create;
LineProperties1799.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1797.LineProperties := LineProperties1799;
{ METHOD .Appearance }
Shape1796.Appearance := Appearance1797;
LineSet1800 := TLineSetNode.Create;
LineSet1800.SetVertexCount([2]);
Coordinate1801 := TCoordinateNode.Create;
Coordinate1801.SetPoint([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
{ METHOD .Coord }
LineSet1800.Coord := Coordinate1801;
{ METHOD .Geometry }
Shape1796.Geometry := LineSet1800;
{ METHOD .FdChildren.Add }
HAnimSegment1788.FdChildren.Add(Shape1796);
{ METHOD .FdChildren.Add }
HAnimJoint1787.FdChildren.Add(HAnimSegment1788);
HAnimJoint1802 := THAnimJointNode.Create;
end;

procedure InitHAnimGimbalJointController22Part124;
begin

HAnimJoint1802.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint1802.SetLlimit([-0.0175,-0.0175,-1.3963]);
HAnimJoint1802.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1803 := THAnimSegmentNode.Create;
Group1804 := TGroupNode.Create;
TouchSensor1805 := TTouchSensorNode.Create;
TouchSensor1805.Description := 'l_carpal_distal_interphalangeal_4';
{ METHOD .FdChildren.Add }
Group1804.FdChildren.Add(TouchSensor1805);
Transform1806 := TTransformNode.Create;
Transform1806.Translation := Vector3(0.1983,0.7045,-0.0767);
Shape1807 := TShapeNode.Create;
Appearance1808 := TAppearanceNode.Create;
Material1809 := TMaterialNode.Create;
Material1809.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1808.Material := Material1809;
{ METHOD .Appearance }
Shape1807.Appearance := Appearance1808;
Sphere1810 := TSphereNode.Create;
Sphere1810.Radius := 0.03;
{ METHOD .Geometry }
Shape1807.Geometry := Sphere1810;
{ METHOD .FdChildren.Add }
Transform1806.FdChildren.Add(Shape1807);
{ METHOD .FdChildren.Add }
Group1804.FdChildren.Add(Transform1806);
Shape1811 := TShapeNode.Create;
Appearance1812 := TAppearanceNode.Create;
Material1813 := TMaterialNode.Create;
Material1813.DiffuseColor := Vector3(0,0,0);
Material1813.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1812.Material := Material1813;
LineProperties1814 := TLinePropertiesNode.Create;
LineProperties1814.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1812.LineProperties := LineProperties1814;
{ METHOD .Appearance }
Shape1811.Appearance := Appearance1812;
LineSet1815 := TLineSetNode.Create;
LineSet1815.SetVertexCount([2]);
Coordinate1816 := TCoordinateNode.Create;
Coordinate1816.SetPoint([Vector3(0.1983,0.7045,-0.0767),Vector3(0.1993,0.6803,-0.0757)]);
{ METHOD .Coord }
LineSet1815.Coord := Coordinate1816;
{ METHOD .Geometry }
Shape1811.Geometry := LineSet1815;
{ METHOD .FdChildren.Add }
Group1804.FdChildren.Add(Shape1811);
{ METHOD .FdChildren.Add }
HAnimSegment1803.FdChildren.Add(Group1804);
{ METHOD .FdChildren.Add }
HAnimJoint1802.FdChildren.Add(HAnimSegment1803);
end;

procedure InitHAnimGimbalJointController22Part125;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1787.FdChildren.Add(HAnimJoint1802);
{ METHOD .FdChildren.Add }
HAnimJoint1772.FdChildren.Add(HAnimJoint1787);
{ METHOD .FdChildren.Add }
HAnimJoint1757.FdChildren.Add(HAnimJoint1772);
{ METHOD .FdChildren.Add }
HAnimJoint1738.FdChildren.Add(HAnimJoint1757);
HAnimJoint1817 := THAnimJointNode.Create;
HAnimJoint1817.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint1817.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint1817.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment1818 := THAnimSegmentNode.Create;
TouchSensor1819 := TTouchSensorNode.Create;
TouchSensor1819.Description := 'l_carpometacarpal_5';
{ METHOD .FdChildren.Add }
HAnimSegment1818.FdChildren.Add(TouchSensor1819);
Transform1820 := TTransformNode.Create;
Transform1820.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform1821 := TTransformNode.Create;
Shape1822 := TShapeNode.Create;
Appearance1823 := TAppearanceNode.Create;
Material1824 := TMaterialNode.Create;
Material1824.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1823.Material := Material1824;
{ METHOD .Appearance }
Shape1822.Appearance := Appearance1823;
Sphere1825 := TSphereNode.Create;
Sphere1825.Radius := 0.03;
{ METHOD .Geometry }
Shape1822.Geometry := Sphere1825;
{ METHOD .FdChildren.Add }
Transform1821.FdChildren.Add(Shape1822);
{ METHOD .FdChildren.Add }
Transform1820.FdChildren.Add(Transform1821);
{ METHOD .FdChildren.Add }
HAnimSegment1818.FdChildren.Add(Transform1820);
Shape1826 := TShapeNode.Create;
Appearance1827 := TAppearanceNode.Create;
Material1828 := TMaterialNode.Create;
Material1828.DiffuseColor := Vector3(0,0,0);
Material1828.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1827.Material := Material1828;
LineProperties1829 := TLinePropertiesNode.Create;
LineProperties1829.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1827.LineProperties := LineProperties1829;
{ METHOD .Appearance }
Shape1826.Appearance := Appearance1827;
LineSet1830 := TLineSetNode.Create;
LineSet1830.SetVertexCount([2]);
Coordinate1831 := TCoordinateNode.Create;
end;

procedure InitHAnimGimbalJointController22Part126;
begin

Coordinate1831.SetPoint([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
{ METHOD .Coord }
LineSet1830.Coord := Coordinate1831;
{ METHOD .Geometry }
Shape1826.Geometry := LineSet1830;
{ METHOD .FdChildren.Add }
HAnimSegment1818.FdChildren.Add(Shape1826);
{ METHOD .FdChildren.Add }
HAnimJoint1817.FdChildren.Add(HAnimSegment1818);
HAnimJoint1832 := THAnimJointNode.Create;
HAnimJoint1832.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint1832.SetLlimit([-0.2618,-0.0873,-1.5708]);
HAnimJoint1832.SetUlimit([0.2618,0.0873,0.5236]);
HAnimSegment1833 := THAnimSegmentNode.Create;
TouchSensor1834 := TTouchSensorNode.Create;
TouchSensor1834.Description := 'l_metacarpophalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment1833.FdChildren.Add(TouchSensor1834);
Transform1835 := TTransformNode.Create;
Transform1835.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform1836 := TTransformNode.Create;
Shape1837 := TShapeNode.Create;
Appearance1838 := TAppearanceNode.Create;
Material1839 := TMaterialNode.Create;
Material1839.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1838.Material := Material1839;
{ METHOD .Appearance }
Shape1837.Appearance := Appearance1838;
Sphere1840 := TSphereNode.Create;
Sphere1840.Radius := 0.03;
{ METHOD .Geometry }
Shape1837.Geometry := Sphere1840;
{ METHOD .FdChildren.Add }
Transform1836.FdChildren.Add(Shape1837);
{ METHOD .FdChildren.Add }
Transform1835.FdChildren.Add(Transform1836);
{ METHOD .FdChildren.Add }
HAnimSegment1833.FdChildren.Add(Transform1835);
Shape1841 := TShapeNode.Create;
Appearance1842 := TAppearanceNode.Create;
Material1843 := TMaterialNode.Create;
Material1843.DiffuseColor := Vector3(0,0,0);
Material1843.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1842.Material := Material1843;
LineProperties1844 := TLinePropertiesNode.Create;
LineProperties1844.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1842.LineProperties := LineProperties1844;
{ METHOD .Appearance }
Shape1841.Appearance := Appearance1842;
LineSet1845 := TLineSetNode.Create;
LineSet1845.SetVertexCount([2]);
end;

procedure InitHAnimGimbalJointController22Part127;
begin

Coordinate1846 := TCoordinateNode.Create;
Coordinate1846.SetPoint([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
{ METHOD .Coord }
LineSet1845.Coord := Coordinate1846;
{ METHOD .Geometry }
Shape1841.Geometry := LineSet1845;
{ METHOD .FdChildren.Add }
HAnimSegment1833.FdChildren.Add(Shape1841);
{ METHOD .FdChildren.Add }
HAnimJoint1832.FdChildren.Add(HAnimSegment1833);
HAnimJoint1847 := THAnimJointNode.Create;
HAnimJoint1847.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint1847.SetLlimit([-0.0175,-0.0175,-1.9199]);
HAnimJoint1847.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1848 := THAnimSegmentNode.Create;
TouchSensor1849 := TTouchSensorNode.Create;
TouchSensor1849.Description := 'l_carpal_proximal_interphalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment1848.FdChildren.Add(TouchSensor1849);
Transform1850 := TTransformNode.Create;
Transform1850.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform1851 := TTransformNode.Create;
Shape1852 := TShapeNode.Create;
Appearance1853 := TAppearanceNode.Create;
Material1854 := TMaterialNode.Create;
Material1854.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1853.Material := Material1854;
{ METHOD .Appearance }
Shape1852.Appearance := Appearance1853;
Sphere1855 := TSphereNode.Create;
Sphere1855.Radius := 0.03;
{ METHOD .Geometry }
Shape1852.Geometry := Sphere1855;
{ METHOD .FdChildren.Add }
Transform1851.FdChildren.Add(Shape1852);
{ METHOD .FdChildren.Add }
Transform1850.FdChildren.Add(Transform1851);
{ METHOD .FdChildren.Add }
HAnimSegment1848.FdChildren.Add(Transform1850);
Shape1856 := TShapeNode.Create;
Appearance1857 := TAppearanceNode.Create;
Material1858 := TMaterialNode.Create;
Material1858.DiffuseColor := Vector3(0,0,0);
Material1858.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1857.Material := Material1858;
LineProperties1859 := TLinePropertiesNode.Create;
LineProperties1859.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1857.LineProperties := LineProperties1859;
{ METHOD .Appearance }
Shape1856.Appearance := Appearance1857;
LineSet1860 := TLineSetNode.Create;
end;

procedure InitHAnimGimbalJointController22Part128;
begin

LineSet1860.SetVertexCount([2]);
Coordinate1861 := TCoordinateNode.Create;
Coordinate1861.SetPoint([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
{ METHOD .Coord }
LineSet1860.Coord := Coordinate1861;
{ METHOD .Geometry }
Shape1856.Geometry := LineSet1860;
{ METHOD .FdChildren.Add }
HAnimSegment1848.FdChildren.Add(Shape1856);
{ METHOD .FdChildren.Add }
HAnimJoint1847.FdChildren.Add(HAnimSegment1848);
HAnimJoint1862 := THAnimJointNode.Create;
HAnimJoint1862.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint1862.SetLlimit([-0.0175,-0.0175,-1.3963]);
HAnimJoint1862.SetUlimit([0.0175,0.0175,0]);
HAnimSegment1863 := THAnimSegmentNode.Create;
Group1864 := TGroupNode.Create;
TouchSensor1865 := TTouchSensorNode.Create;
TouchSensor1865.Description := 'l_carpal_distal_interphalangeal_5';
{ METHOD .FdChildren.Add }
Group1864.FdChildren.Add(TouchSensor1865);
Transform1866 := TTransformNode.Create;
Transform1866.Translation := Vector3(0.1948,0.7277,-0.1017);
Shape1867 := TShapeNode.Create;
Appearance1868 := TAppearanceNode.Create;
Material1869 := TMaterialNode.Create;
Material1869.DiffuseColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1868.Material := Material1869;
{ METHOD .Appearance }
Shape1867.Appearance := Appearance1868;
Sphere1870 := TSphereNode.Create;
Sphere1870.Radius := 0.03;
{ METHOD .Geometry }
Shape1867.Geometry := Sphere1870;
{ METHOD .FdChildren.Add }
Transform1866.FdChildren.Add(Shape1867);
{ METHOD .FdChildren.Add }
Group1864.FdChildren.Add(Transform1866);
Shape1871 := TShapeNode.Create;
Appearance1872 := TAppearanceNode.Create;
Material1873 := TMaterialNode.Create;
Material1873.DiffuseColor := Vector3(0,0,0);
Material1873.EmissiveColor := Vector3(0.35,0.55,0.95);
{ METHOD .SetMaterial }
Appearance1872.Material := Material1873;
LineProperties1874 := TLinePropertiesNode.Create;
LineProperties1874.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1872.LineProperties := LineProperties1874;
{ METHOD .Appearance }
Shape1871.Appearance := Appearance1872;
LineSet1875 := TLineSetNode.Create;
end;

procedure InitHAnimGimbalJointController22Part129;
begin

LineSet1875.SetVertexCount([2]);
Coordinate1876 := TCoordinateNode.Create;
Coordinate1876.SetPoint([Vector3(0.1948,0.7277,-0.1017),Vector3(0.1958,0.7102,-0.101)]);
{ METHOD .Coord }
LineSet1875.Coord := Coordinate1876;
{ METHOD .Geometry }
Shape1871.Geometry := LineSet1875;
{ METHOD .FdChildren.Add }
Group1864.FdChildren.Add(Shape1871);
{ METHOD .FdChildren.Add }
HAnimSegment1863.FdChildren.Add(Group1864);
{ METHOD .FdChildren.Add }
HAnimJoint1862.FdChildren.Add(HAnimSegment1863);
{ METHOD .FdChildren.Add }
HAnimJoint1847.FdChildren.Add(HAnimJoint1862);
{ METHOD .FdChildren.Add }
HAnimJoint1832.FdChildren.Add(HAnimJoint1847);
{ METHOD .FdChildren.Add }
HAnimJoint1817.FdChildren.Add(HAnimJoint1832);
{ METHOD .FdChildren.Add }
HAnimJoint1738.FdChildren.Add(HAnimJoint1817);
{ METHOD .FdChildren.Add }
HAnimJoint1501.FdChildren.Add(HAnimJoint1738);
{ METHOD .FdChildren.Add }
HAnimJoint1486.FdChildren.Add(HAnimJoint1501);
{ METHOD .FdChildren.Add }
HAnimJoint1471.FdChildren.Add(HAnimJoint1486);
{ METHOD .FdChildren.Add }
HAnimJoint1456.FdChildren.Add(HAnimJoint1471);
{ METHOD .FdChildren.Add }
HAnimJoint1441.FdChildren.Add(HAnimJoint1456);
{ METHOD .FdChildren.Add }
HAnimJoint1169.FdChildren.Add(HAnimJoint1441);
{ RIGHT ARM (Child 3 of vt1) }
HAnimJoint1877 := THAnimJointNode.Create;
HAnimJoint1877.Center := Vector3(-0.0694,1.46,-0.033);
HAnimJoint1877.SetLlimit([-0.3491,-0.2618,-0.4363]);
HAnimJoint1877.SetUlimit([0.3491,0.3491,0.1745]);
HAnimSegment1878 := THAnimSegmentNode.Create;
TouchSensor1879 := TTouchSensorNode.Create;
TouchSensor1879.Description := 'r_sternoclavicular';
{ METHOD .FdChildren.Add }
HAnimSegment1878.FdChildren.Add(TouchSensor1879);
Transform1880 := TTransformNode.Create;
Transform1880.Translation := Vector3(-0.0694,1.46,-0.033);
Transform1881 := TTransformNode.Create;
Shape1882 := TShapeNode.Create;
Appearance1883 := TAppearanceNode.Create;
Material1884 := TMaterialNode.Create;
Material1884.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1883.Material := Material1884;
{ METHOD .Appearance }
Shape1882.Appearance := Appearance1883;
Sphere1885 := TSphereNode.Create;
Sphere1885.Radius := 0.03;
{ METHOD .Geometry }
Shape1882.Geometry := Sphere1885;
{ METHOD .FdChildren.Add }
Transform1881.FdChildren.Add(Shape1882);
{ METHOD .FdChildren.Add }
Transform1880.FdChildren.Add(Transform1881);
end;

procedure InitHAnimGimbalJointController22Part130;
begin

{ METHOD .FdChildren.Add }
HAnimSegment1878.FdChildren.Add(Transform1880);
Shape1886 := TShapeNode.Create;
Appearance1887 := TAppearanceNode.Create;
Material1888 := TMaterialNode.Create;
Material1888.DiffuseColor := Vector3(0,0,0);
Material1888.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1887.Material := Material1888;
LineProperties1889 := TLinePropertiesNode.Create;
LineProperties1889.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1887.LineProperties := LineProperties1889;
{ METHOD .Appearance }
Shape1886.Appearance := Appearance1887;
LineSet1890 := TLineSetNode.Create;
LineSet1890.SetVertexCount([2]);
Coordinate1891 := TCoordinateNode.Create;
Coordinate1891.SetPoint([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
{ METHOD .Coord }
LineSet1890.Coord := Coordinate1891;
{ METHOD .Geometry }
Shape1886.Geometry := LineSet1890;
{ METHOD .FdChildren.Add }
HAnimSegment1878.FdChildren.Add(Shape1886);
{ METHOD .FdChildren.Add }
HAnimJoint1877.FdChildren.Add(HAnimSegment1878);
HAnimJoint1892 := THAnimJointNode.Create;
HAnimJoint1892.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimJoint1892.SetLlimit([-0.1745,-0.1745,-0.1745]);
HAnimJoint1892.SetUlimit([0.1745,0.1745,0.1745]);
HAnimSegment1893 := THAnimSegmentNode.Create;
TouchSensor1894 := TTouchSensorNode.Create;
TouchSensor1894.Description := 'r_acromioclavicular';
{ METHOD .FdChildren.Add }
HAnimSegment1893.FdChildren.Add(TouchSensor1894);
Transform1895 := TTransformNode.Create;
Transform1895.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1896 := TTransformNode.Create;
Shape1897 := TShapeNode.Create;
Appearance1898 := TAppearanceNode.Create;
Material1899 := TMaterialNode.Create;
Material1899.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1898.Material := Material1899;
{ METHOD .Appearance }
Shape1897.Appearance := Appearance1898;
Sphere1900 := TSphereNode.Create;
Sphere1900.Radius := 0.03;
{ METHOD .Geometry }
Shape1897.Geometry := Sphere1900;
{ METHOD .FdChildren.Add }
Transform1896.FdChildren.Add(Shape1897);
end;

procedure InitHAnimGimbalJointController22Part131;
begin

{ METHOD .FdChildren.Add }
Transform1895.FdChildren.Add(Transform1896);
{ METHOD .FdChildren.Add }
HAnimSegment1893.FdChildren.Add(Transform1895);
Shape1901 := TShapeNode.Create;
Appearance1902 := TAppearanceNode.Create;
Material1903 := TMaterialNode.Create;
Material1903.DiffuseColor := Vector3(0,0,0);
Material1903.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1902.Material := Material1903;
LineProperties1904 := TLinePropertiesNode.Create;
LineProperties1904.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1902.LineProperties := LineProperties1904;
{ METHOD .Appearance }
Shape1901.Appearance := Appearance1902;
LineSet1905 := TLineSetNode.Create;
LineSet1905.SetVertexCount([2]);
Coordinate1906 := TCoordinateNode.Create;
Coordinate1906.SetPoint([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
{ METHOD .Coord }
LineSet1905.Coord := Coordinate1906;
{ METHOD .Geometry }
Shape1901.Geometry := LineSet1905;
{ METHOD .FdChildren.Add }
HAnimSegment1893.FdChildren.Add(Shape1901);
{ METHOD .FdChildren.Add }
HAnimJoint1892.FdChildren.Add(HAnimSegment1893);
HAnimJoint1907 := THAnimJointNode.Create;
HAnimJoint1907.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimJoint1907.SetLlimit([-3.1416,-1.5708,-3.1416]);
HAnimJoint1907.SetUlimit([1.0472,1.5708,0.5236]);
HAnimSegment1908 := THAnimSegmentNode.Create;
TouchSensor1909 := TTouchSensorNode.Create;
TouchSensor1909.Description := 'r_shoulder';
{ METHOD .FdChildren.Add }
HAnimSegment1908.FdChildren.Add(TouchSensor1909);
Transform1910 := TTransformNode.Create;
Transform1910.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1911 := TTransformNode.Create;
Shape1912 := TShapeNode.Create;
Appearance1913 := TAppearanceNode.Create;
Material1914 := TMaterialNode.Create;
Material1914.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1913.Material := Material1914;
{ METHOD .Appearance }
Shape1912.Appearance := Appearance1913;
Sphere1915 := TSphereNode.Create;
Sphere1915.Radius := 0.03;
{ METHOD .Geometry }
Shape1912.Geometry := Sphere1915;
end;

procedure InitHAnimGimbalJointController22Part132;
begin

{ METHOD .FdChildren.Add }
Transform1911.FdChildren.Add(Shape1912);
{ METHOD .FdChildren.Add }
Transform1910.FdChildren.Add(Transform1911);
{ METHOD .FdChildren.Add }
HAnimSegment1908.FdChildren.Add(Transform1910);
Shape1916 := TShapeNode.Create;
Appearance1917 := TAppearanceNode.Create;
Material1918 := TMaterialNode.Create;
Material1918.DiffuseColor := Vector3(0,0,0);
Material1918.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1917.Material := Material1918;
LineProperties1919 := TLinePropertiesNode.Create;
LineProperties1919.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1917.LineProperties := LineProperties1919;
{ METHOD .Appearance }
Shape1916.Appearance := Appearance1917;
LineSet1920 := TLineSetNode.Create;
LineSet1920.SetVertexCount([2]);
Coordinate1921 := TCoordinateNode.Create;
Coordinate1921.SetPoint([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
{ METHOD .Coord }
LineSet1920.Coord := Coordinate1921;
{ METHOD .Geometry }
Shape1916.Geometry := LineSet1920;
{ METHOD .FdChildren.Add }
HAnimSegment1908.FdChildren.Add(Shape1916);
{ METHOD .FdChildren.Add }
HAnimJoint1907.FdChildren.Add(HAnimSegment1908);
HAnimJoint1922 := THAnimJointNode.Create;
HAnimJoint1922.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimJoint1922.SetLlimit([-2.5307,-1.5708,-0.0175]);
HAnimJoint1922.SetUlimit([0,1.5708,0.0175]);
HAnimSegment1923 := THAnimSegmentNode.Create;
TouchSensor1924 := TTouchSensorNode.Create;
TouchSensor1924.Description := 'r_elbow';
{ METHOD .FdChildren.Add }
HAnimSegment1923.FdChildren.Add(TouchSensor1924);
Transform1925 := TTransformNode.Create;
Transform1925.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1926 := TTransformNode.Create;
Shape1927 := TShapeNode.Create;
Appearance1928 := TAppearanceNode.Create;
Material1929 := TMaterialNode.Create;
Material1929.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1928.Material := Material1929;
{ METHOD .Appearance }
Shape1927.Appearance := Appearance1928;
Sphere1930 := TSphereNode.Create;
Sphere1930.Radius := 0.03;
end;

procedure InitHAnimGimbalJointController22Part133;
begin

{ METHOD .Geometry }
Shape1927.Geometry := Sphere1930;
{ METHOD .FdChildren.Add }
Transform1926.FdChildren.Add(Shape1927);
{ METHOD .FdChildren.Add }
Transform1925.FdChildren.Add(Transform1926);
{ METHOD .FdChildren.Add }
HAnimSegment1923.FdChildren.Add(Transform1925);
Shape1931 := TShapeNode.Create;
Appearance1932 := TAppearanceNode.Create;
Material1933 := TMaterialNode.Create;
Material1933.DiffuseColor := Vector3(0,0,0);
Material1933.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1932.Material := Material1933;
LineProperties1934 := TLinePropertiesNode.Create;
LineProperties1934.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1932.LineProperties := LineProperties1934;
{ METHOD .Appearance }
Shape1931.Appearance := Appearance1932;
LineSet1935 := TLineSetNode.Create;
LineSet1935.SetVertexCount([2]);
Coordinate1936 := TCoordinateNode.Create;
Coordinate1936.SetPoint([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
{ METHOD .Coord }
LineSet1935.Coord := Coordinate1936;
{ METHOD .Geometry }
Shape1931.Geometry := LineSet1935;
{ METHOD .FdChildren.Add }
HAnimSegment1923.FdChildren.Add(Shape1931);
{ METHOD .FdChildren.Add }
HAnimJoint1922.FdChildren.Add(HAnimSegment1923);
HAnimJoint1937 := THAnimJointNode.Create;
HAnimJoint1937.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimJoint1937.SetLlimit([-0.3491,-0.1745,-1.2217]);
HAnimJoint1937.SetUlimit([0.5236,0.1745,1.3963]);
HAnimSegment1938 := THAnimSegmentNode.Create;
TouchSensor1939 := TTouchSensorNode.Create;
TouchSensor1939.Description := 'r_radiocarpal';
{ METHOD .FdChildren.Add }
HAnimSegment1938.FdChildren.Add(TouchSensor1939);
Transform1940 := TTransformNode.Create;
Transform1940.Scale := Vector3(0.2,0.2,0.2);
Transform1940.Translation := Vector3(-0.2,0.85,-0.05);
Transform1940.Rotation := Vector4(0,0,1,-3.14);
Transform1941 := TTransformNode.Create;
Transform1941.Rotation := Vector4(0,1,0,1.57);
Shape1942 := TShapeNode.Create;
Appearance1943 := TAppearanceNode.Create;
Material1944 := TMaterialNode.Create;
Material1944.DiffuseColor := Vector3(0.95,0.45,0.35);
end;

procedure InitHAnimGimbalJointController22Part134;
begin

{ METHOD .SetMaterial }
Appearance1943.Material := Material1944;
{ METHOD .Appearance }
Shape1942.Appearance := Appearance1943;
Sphere1945 := TSphereNode.Create;
Sphere1945.Radius := 0.03;
{ METHOD .Geometry }
Shape1942.Geometry := Sphere1945;
{ METHOD .FdChildren.Add }
Transform1941.FdChildren.Add(Shape1942);
{ METHOD .FdChildren.Add }
Transform1940.FdChildren.Add(Transform1941);
{ METHOD .FdChildren.Add }
HAnimSegment1938.FdChildren.Add(Transform1940);
Shape1946 := TShapeNode.Create;
Appearance1947 := TAppearanceNode.Create;
Material1948 := TMaterialNode.Create;
Material1948.DiffuseColor := Vector3(0,0,0);
Material1948.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1947.Material := Material1948;
LineProperties1949 := TLinePropertiesNode.Create;
LineProperties1949.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1947.LineProperties := LineProperties1949;
{ METHOD .Appearance }
Shape1946.Appearance := Appearance1947;
LineSet1950 := TLineSetNode.Create;
LineSet1950.SetVertexCount([2]);
Coordinate1951 := TCoordinateNode.Create;
Coordinate1951.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1811,0.6975,-0.0826)]);
{ METHOD .Coord }
LineSet1950.Coord := Coordinate1951;
{ METHOD .Geometry }
Shape1946.Geometry := LineSet1950;
{ METHOD .FdChildren.Add }
HAnimSegment1938.FdChildren.Add(Shape1946);
Shape1952 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1952.Appearance := Appearance1947;
LineSet1954 := TLineSetNode.Create;
LineSet1954.SetVertexCount([2]);
Coordinate1955 := TCoordinateNode.Create;
Coordinate1955.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1811,0.6984,-0.0935)]);
{ METHOD .Coord }
LineSet1954.Coord := Coordinate1955;
{ METHOD .Geometry }
Shape1952.Geometry := LineSet1954;
{ METHOD .FdChildren.Add }
HAnimSegment1938.FdChildren.Add(Shape1952);
Shape1956 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1956.Appearance := Appearance1947;
LineSet1958 := TLineSetNode.Create;
LineSet1958.SetVertexCount([2]);
Coordinate1959 := TCoordinateNode.Create;
Coordinate1959.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1809,0.7,-0.1067)]);
end;

procedure InitHAnimGimbalJointController22Part135;
begin

{ METHOD .Coord }
LineSet1958.Coord := Coordinate1959;
{ METHOD .Geometry }
Shape1956.Geometry := LineSet1958;
{ METHOD .FdChildren.Add }
HAnimSegment1938.FdChildren.Add(Shape1956);
Shape1960 := TShapeNode.Create;
{ METHOD .Appearance }
Shape1960.Appearance := Appearance1947;
LineSet1962 := TLineSetNode.Create;
LineSet1962.SetVertexCount([2]);
Coordinate1963 := TCoordinateNode.Create;
Coordinate1963.SetPoint([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1809,0.6973,-0.1276)]);
{ METHOD .Coord }
LineSet1962.Coord := Coordinate1963;
{ METHOD .Geometry }
Shape1960.Geometry := LineSet1962;
{ METHOD .FdChildren.Add }
HAnimSegment1938.FdChildren.Add(Shape1960);
{ METHOD .FdChildren.Add }
HAnimJoint1937.FdChildren.Add(HAnimSegment1938);
HAnimJoint1964 := THAnimJointNode.Create;
HAnimJoint1964.Center := Vector3(-0.1811,0.6975,-0.0826);
HAnimJoint1964.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint1964.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment1965 := THAnimSegmentNode.Create;
TouchSensor1966 := TTouchSensorNode.Create;
TouchSensor1966.Description := 'r_midcarpal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1965.FdChildren.Add(TouchSensor1966);
Transform1967 := TTransformNode.Create;
Transform1967.Translation := Vector3(-0.1811,0.6975,-0.0826);
Transform1968 := TTransformNode.Create;
Shape1969 := TShapeNode.Create;
Appearance1970 := TAppearanceNode.Create;
Material1971 := TMaterialNode.Create;
Material1971.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1970.Material := Material1971;
{ METHOD .Appearance }
Shape1969.Appearance := Appearance1970;
Sphere1972 := TSphereNode.Create;
Sphere1972.Radius := 0.03;
{ METHOD .Geometry }
Shape1969.Geometry := Sphere1972;
{ METHOD .FdChildren.Add }
Transform1968.FdChildren.Add(Shape1969);
{ METHOD .FdChildren.Add }
Transform1967.FdChildren.Add(Transform1968);
{ METHOD .FdChildren.Add }
HAnimSegment1965.FdChildren.Add(Transform1967);
Shape1973 := TShapeNode.Create;
Appearance1974 := TAppearanceNode.Create;
Material1975 := TMaterialNode.Create;
Material1975.DiffuseColor := Vector3(0,0,0);
end;

procedure InitHAnimGimbalJointController22Part136;
begin

Material1975.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1974.Material := Material1975;
LineProperties1976 := TLinePropertiesNode.Create;
LineProperties1976.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1974.LineProperties := LineProperties1976;
{ METHOD .Appearance }
Shape1973.Appearance := Appearance1974;
LineSet1977 := TLineSetNode.Create;
LineSet1977.SetVertexCount([2]);
Coordinate1978 := TCoordinateNode.Create;
Coordinate1978.SetPoint([Vector3(-0.1811,0.6975,-0.0826),Vector3(-0.1899,0.8502,-0.0473)]);
{ METHOD .Coord }
LineSet1977.Coord := Coordinate1978;
{ METHOD .Geometry }
Shape1973.Geometry := LineSet1977;
{ METHOD .FdChildren.Add }
HAnimSegment1965.FdChildren.Add(Shape1973);
{ METHOD .FdChildren.Add }
HAnimJoint1964.FdChildren.Add(HAnimSegment1965);
HAnimJoint1979 := THAnimJointNode.Create;
HAnimJoint1979.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimJoint1979.SetLlimit([-0.5236,-0.3491,-0.5236]);
HAnimJoint1979.SetUlimit([0.5236,0.6981,0.5236]);
HAnimSegment1980 := THAnimSegmentNode.Create;
TouchSensor1981 := TTouchSensorNode.Create;
TouchSensor1981.Description := 'r_carpometacarpal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1980.FdChildren.Add(TouchSensor1981);
Transform1982 := TTransformNode.Create;
Transform1982.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1983 := TTransformNode.Create;
Shape1984 := TShapeNode.Create;
Appearance1985 := TAppearanceNode.Create;
Material1986 := TMaterialNode.Create;
Material1986.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1985.Material := Material1986;
{ METHOD .Appearance }
Shape1984.Appearance := Appearance1985;
Sphere1987 := TSphereNode.Create;
Sphere1987.Radius := 0.03;
{ METHOD .Geometry }
Shape1984.Geometry := Sphere1987;
{ METHOD .FdChildren.Add }
Transform1983.FdChildren.Add(Shape1984);
{ METHOD .FdChildren.Add }
Transform1982.FdChildren.Add(Transform1983);
{ METHOD .FdChildren.Add }
HAnimSegment1980.FdChildren.Add(Transform1982);
Shape1988 := TShapeNode.Create;
Appearance1989 := TAppearanceNode.Create;
Material1990 := TMaterialNode.Create;
end;

procedure InitHAnimGimbalJointController22Part137;
begin

Material1990.DiffuseColor := Vector3(0,0,0);
Material1990.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance1989.Material := Material1990;
LineProperties1991 := TLinePropertiesNode.Create;
LineProperties1991.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance1989.LineProperties := LineProperties1991;
{ METHOD .Appearance }
Shape1988.Appearance := Appearance1989;
LineSet1992 := TLineSetNode.Create;
LineSet1992.SetVertexCount([2]);
Coordinate1993 := TCoordinateNode.Create;
Coordinate1993.SetPoint([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
{ METHOD .Coord }
LineSet1992.Coord := Coordinate1993;
{ METHOD .Geometry }
Shape1988.Geometry := LineSet1992;
{ METHOD .FdChildren.Add }
HAnimSegment1980.FdChildren.Add(Shape1988);
{ METHOD .FdChildren.Add }
HAnimJoint1979.FdChildren.Add(HAnimSegment1980);
HAnimJoint1994 := THAnimJointNode.Create;
HAnimJoint1994.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimJoint1994.SetLlimit([-0.3491,-0.3491,-0.0175]);
HAnimJoint1994.SetUlimit([0.3491,1.0472,0.0175]);
HAnimSegment1995 := THAnimSegmentNode.Create;
TouchSensor1996 := TTouchSensorNode.Create;
TouchSensor1996.Description := 'r_metacarpophalangeal_1';
{ METHOD .FdChildren.Add }
HAnimSegment1995.FdChildren.Add(TouchSensor1996);
Transform1997 := TTransformNode.Create;
Transform1997.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1998 := TTransformNode.Create;
Shape1999 := TShapeNode.Create;
Appearance2000 := TAppearanceNode.Create;
Material2001 := TMaterialNode.Create;
Material2001.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2000.Material := Material2001;
{ METHOD .Appearance }
Shape1999.Appearance := Appearance2000;
Sphere2002 := TSphereNode.Create;
Sphere2002.Radius := 0.03;
{ METHOD .Geometry }
Shape1999.Geometry := Sphere2002;
{ METHOD .FdChildren.Add }
Transform1998.FdChildren.Add(Shape1999);
{ METHOD .FdChildren.Add }
Transform1997.FdChildren.Add(Transform1998);
{ METHOD .FdChildren.Add }
HAnimSegment1995.FdChildren.Add(Transform1997);
Shape2003 := TShapeNode.Create;
Appearance2004 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part138;
begin

Material2005 := TMaterialNode.Create;
Material2005.DiffuseColor := Vector3(0,0,0);
Material2005.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2004.Material := Material2005;
LineProperties2006 := TLinePropertiesNode.Create;
LineProperties2006.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2004.LineProperties := LineProperties2006;
{ METHOD .Appearance }
Shape2003.Appearance := Appearance2004;
LineSet2007 := TLineSetNode.Create;
LineSet2007.SetVertexCount([2]);
Coordinate2008 := TCoordinateNode.Create;
Coordinate2008.SetPoint([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
{ METHOD .Coord }
LineSet2007.Coord := Coordinate2008;
{ METHOD .Geometry }
Shape2003.Geometry := LineSet2007;
{ METHOD .FdChildren.Add }
HAnimSegment1995.FdChildren.Add(Shape2003);
{ METHOD .FdChildren.Add }
HAnimJoint1994.FdChildren.Add(HAnimSegment1995);
HAnimJoint2009 := THAnimJointNode.Create;
HAnimJoint2009.Center := Vector3(-0.1864,0.819,0.0506);
HAnimJoint2009.SetLlimit([-0.0175,-0.1745,-0.0175]);
HAnimJoint2009.SetUlimit([0.0175,1.3963,0.0175]);
HAnimSegment2010 := THAnimSegmentNode.Create;
Group2011 := TGroupNode.Create;
TouchSensor2012 := TTouchSensorNode.Create;
TouchSensor2012.Description := 'r_carpal_interphalangeal_1';
{ METHOD .FdChildren.Add }
Group2011.FdChildren.Add(TouchSensor2012);
Transform2013 := TTransformNode.Create;
Transform2013.Translation := Vector3(-0.1864,0.819,0.0506);
Shape2014 := TShapeNode.Create;
Appearance2015 := TAppearanceNode.Create;
Material2016 := TMaterialNode.Create;
Material2016.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2015.Material := Material2016;
{ METHOD .Appearance }
Shape2014.Appearance := Appearance2015;
Sphere2017 := TSphereNode.Create;
Sphere2017.Radius := 0.03;
{ METHOD .Geometry }
Shape2014.Geometry := Sphere2017;
{ METHOD .FdChildren.Add }
Transform2013.FdChildren.Add(Shape2014);
{ METHOD .FdChildren.Add }
Group2011.FdChildren.Add(Transform2013);
Shape2018 := TShapeNode.Create;
Appearance2019 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part139;
begin

Material2020 := TMaterialNode.Create;
Material2020.DiffuseColor := Vector3(0,0,0);
Material2020.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2019.Material := Material2020;
LineProperties2021 := TLinePropertiesNode.Create;
LineProperties2021.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2019.LineProperties := LineProperties2021;
{ METHOD .Appearance }
Shape2018.Appearance := Appearance2019;
LineSet2022 := TLineSetNode.Create;
LineSet2022.SetVertexCount([2]);
Coordinate2023 := TCoordinateNode.Create;
Coordinate2023.SetPoint([Vector3(-0.1864,0.819,0.0506),Vector3(-0.1854,0.8124,0.0706)]);
{ METHOD .Coord }
LineSet2022.Coord := Coordinate2023;
{ METHOD .Geometry }
Shape2018.Geometry := LineSet2022;
{ METHOD .FdChildren.Add }
Group2011.FdChildren.Add(Shape2018);
{ METHOD .FdChildren.Add }
HAnimSegment2010.FdChildren.Add(Group2011);
{ METHOD .FdChildren.Add }
HAnimJoint2009.FdChildren.Add(HAnimSegment2010);
{ METHOD .FdChildren.Add }
HAnimJoint1994.FdChildren.Add(HAnimJoint2009);
{ METHOD .FdChildren.Add }
HAnimJoint1979.FdChildren.Add(HAnimJoint1994);
{ METHOD .FdChildren.Add }
HAnimJoint1964.FdChildren.Add(HAnimJoint1979);
{ METHOD .FdChildren.Add }
HAnimJoint1937.FdChildren.Add(HAnimJoint1964);
HAnimJoint2024 := THAnimJointNode.Create;
HAnimJoint2024.Center := Vector3(-0.1811,0.6984,-0.0935);
HAnimJoint2024.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint2024.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment2025 := THAnimSegmentNode.Create;
TouchSensor2026 := TTouchSensorNode.Create;
TouchSensor2026.Description := 'r_midcarpal_2';
{ METHOD .FdChildren.Add }
HAnimSegment2025.FdChildren.Add(TouchSensor2026);
Transform2027 := TTransformNode.Create;
Transform2027.Translation := Vector3(-0.1811,0.6984,-0.0935);
Transform2028 := TTransformNode.Create;
Shape2029 := TShapeNode.Create;
Appearance2030 := TAppearanceNode.Create;
Material2031 := TMaterialNode.Create;
Material2031.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2030.Material := Material2031;
{ METHOD .Appearance }
Shape2029.Appearance := Appearance2030;
Sphere2032 := TSphereNode.Create;
Sphere2032.Radius := 0.03;
end;

procedure InitHAnimGimbalJointController22Part140;
begin

{ METHOD .Geometry }
Shape2029.Geometry := Sphere2032;
{ METHOD .FdChildren.Add }
Transform2028.FdChildren.Add(Shape2029);
{ METHOD .FdChildren.Add }
Transform2027.FdChildren.Add(Transform2028);
{ METHOD .FdChildren.Add }
HAnimSegment2025.FdChildren.Add(Transform2027);
Shape2033 := TShapeNode.Create;
Appearance2034 := TAppearanceNode.Create;
Material2035 := TMaterialNode.Create;
Material2035.DiffuseColor := Vector3(0,0,0);
Material2035.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2034.Material := Material2035;
LineProperties2036 := TLinePropertiesNode.Create;
LineProperties2036.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2034.LineProperties := LineProperties2036;
{ METHOD .Appearance }
Shape2033.Appearance := Appearance2034;
LineSet2037 := TLineSetNode.Create;
LineSet2037.SetVertexCount([2]);
Coordinate2038 := TCoordinateNode.Create;
Coordinate2038.SetPoint([Vector3(-0.1811,0.6984,-0.0935),Vector3(-0.1961,0.8055,-0.0218)]);
{ METHOD .Coord }
LineSet2037.Coord := Coordinate2038;
{ METHOD .Geometry }
Shape2033.Geometry := LineSet2037;
{ METHOD .FdChildren.Add }
HAnimSegment2025.FdChildren.Add(Shape2033);
{ METHOD .FdChildren.Add }
HAnimJoint2024.FdChildren.Add(HAnimSegment2025);
HAnimJoint2039 := THAnimJointNode.Create;
HAnimJoint2039.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimJoint2039.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint2039.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment2040 := THAnimSegmentNode.Create;
TouchSensor2041 := TTouchSensorNode.Create;
TouchSensor2041.Description := 'r_carpometacarpal_2';
{ METHOD .FdChildren.Add }
HAnimSegment2040.FdChildren.Add(TouchSensor2041);
Transform2042 := TTransformNode.Create;
Transform2042.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform2043 := TTransformNode.Create;
Shape2044 := TShapeNode.Create;
Appearance2045 := TAppearanceNode.Create;
Material2046 := TMaterialNode.Create;
Material2046.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2045.Material := Material2046;
{ METHOD .Appearance }
Shape2044.Appearance := Appearance2045;
Sphere2047 := TSphereNode.Create;
end;

procedure InitHAnimGimbalJointController22Part141;
begin

Sphere2047.Radius := 0.03;
{ METHOD .Geometry }
Shape2044.Geometry := Sphere2047;
{ METHOD .FdChildren.Add }
Transform2043.FdChildren.Add(Shape2044);
{ METHOD .FdChildren.Add }
Transform2042.FdChildren.Add(Transform2043);
{ METHOD .FdChildren.Add }
HAnimSegment2040.FdChildren.Add(Transform2042);
Shape2048 := TShapeNode.Create;
Appearance2049 := TAppearanceNode.Create;
Material2050 := TMaterialNode.Create;
Material2050.DiffuseColor := Vector3(0,0,0);
Material2050.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2049.Material := Material2050;
LineProperties2051 := TLinePropertiesNode.Create;
LineProperties2051.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2049.LineProperties := LineProperties2051;
{ METHOD .Appearance }
Shape2048.Appearance := Appearance2049;
LineSet2052 := TLineSetNode.Create;
LineSet2052.SetVertexCount([2]);
Coordinate2053 := TCoordinateNode.Create;
Coordinate2053.SetPoint([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
{ METHOD .Coord }
LineSet2052.Coord := Coordinate2053;
{ METHOD .Geometry }
Shape2048.Geometry := LineSet2052;
{ METHOD .FdChildren.Add }
HAnimSegment2040.FdChildren.Add(Shape2048);
{ METHOD .FdChildren.Add }
HAnimJoint2039.FdChildren.Add(HAnimSegment2040);
HAnimJoint2054 := THAnimJointNode.Create;
HAnimJoint2054.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimJoint2054.SetLlimit([-0.2618,-0.0873,-0.5236]);
HAnimJoint2054.SetUlimit([0.2618,0.0873,1.5708]);
HAnimSegment2055 := THAnimSegmentNode.Create;
TouchSensor2056 := TTouchSensorNode.Create;
TouchSensor2056.Description := 'r_metacarpophalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment2055.FdChildren.Add(TouchSensor2056);
Transform2057 := TTransformNode.Create;
Transform2057.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform2058 := TTransformNode.Create;
Shape2059 := TShapeNode.Create;
Appearance2060 := TAppearanceNode.Create;
Material2061 := TMaterialNode.Create;
Material2061.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2060.Material := Material2061;
{ METHOD .Appearance }
Shape2059.Appearance := Appearance2060;
end;

procedure InitHAnimGimbalJointController22Part142;
begin

Sphere2062 := TSphereNode.Create;
Sphere2062.Radius := 0.03;
{ METHOD .Geometry }
Shape2059.Geometry := Sphere2062;
{ METHOD .FdChildren.Add }
Transform2058.FdChildren.Add(Shape2059);
{ METHOD .FdChildren.Add }
Transform2057.FdChildren.Add(Transform2058);
{ METHOD .FdChildren.Add }
HAnimSegment2055.FdChildren.Add(Transform2057);
Shape2063 := TShapeNode.Create;
Appearance2064 := TAppearanceNode.Create;
Material2065 := TMaterialNode.Create;
Material2065.DiffuseColor := Vector3(0,0,0);
Material2065.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2064.Material := Material2065;
LineProperties2066 := TLinePropertiesNode.Create;
LineProperties2066.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2064.LineProperties := LineProperties2066;
{ METHOD .Appearance }
Shape2063.Appearance := Appearance2064;
LineSet2067 := TLineSetNode.Create;
LineSet2067.SetVertexCount([2]);
Coordinate2068 := TCoordinateNode.Create;
Coordinate2068.SetPoint([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
{ METHOD .Coord }
LineSet2067.Coord := Coordinate2068;
{ METHOD .Geometry }
Shape2063.Geometry := LineSet2067;
{ METHOD .FdChildren.Add }
HAnimSegment2055.FdChildren.Add(Shape2063);
{ METHOD .FdChildren.Add }
HAnimJoint2054.FdChildren.Add(HAnimSegment2055);
HAnimJoint2069 := THAnimJointNode.Create;
HAnimJoint2069.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimJoint2069.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2069.SetUlimit([0.0175,0.0175,1.9199]);
HAnimSegment2070 := THAnimSegmentNode.Create;
TouchSensor2071 := TTouchSensorNode.Create;
TouchSensor2071.Description := 'r_carpal_proximal_interphalangeal_2';
{ METHOD .FdChildren.Add }
HAnimSegment2070.FdChildren.Add(TouchSensor2071);
Transform2072 := TTransformNode.Create;
Transform2072.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform2073 := TTransformNode.Create;
Shape2074 := TShapeNode.Create;
Appearance2075 := TAppearanceNode.Create;
Material2076 := TMaterialNode.Create;
Material2076.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2075.Material := Material2076;
end;

procedure InitHAnimGimbalJointController22Part143;
begin

{ METHOD .Appearance }
Shape2074.Appearance := Appearance2075;
Sphere2077 := TSphereNode.Create;
Sphere2077.Radius := 0.03;
{ METHOD .Geometry }
Shape2074.Geometry := Sphere2077;
{ METHOD .FdChildren.Add }
Transform2073.FdChildren.Add(Shape2074);
{ METHOD .FdChildren.Add }
Transform2072.FdChildren.Add(Transform2073);
{ METHOD .FdChildren.Add }
HAnimSegment2070.FdChildren.Add(Transform2072);
Shape2078 := TShapeNode.Create;
Appearance2079 := TAppearanceNode.Create;
Material2080 := TMaterialNode.Create;
Material2080.DiffuseColor := Vector3(0,0,0);
Material2080.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2079.Material := Material2080;
LineProperties2081 := TLinePropertiesNode.Create;
LineProperties2081.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2079.LineProperties := LineProperties2081;
{ METHOD .Appearance }
Shape2078.Appearance := Appearance2079;
LineSet2082 := TLineSetNode.Create;
LineSet2082.SetVertexCount([2]);
Coordinate2083 := TCoordinateNode.Create;
Coordinate2083.SetPoint([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
{ METHOD .Coord }
LineSet2082.Coord := Coordinate2083;
{ METHOD .Geometry }
Shape2078.Geometry := LineSet2082;
{ METHOD .FdChildren.Add }
HAnimSegment2070.FdChildren.Add(Shape2078);
{ METHOD .FdChildren.Add }
HAnimJoint2069.FdChildren.Add(HAnimSegment2070);
HAnimJoint2084 := THAnimJointNode.Create;
HAnimJoint2084.Center := Vector3(-0.1945,0.7169,-0.0173);
HAnimJoint2084.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2084.SetUlimit([0.0175,0.0175,1.3963]);
HAnimSegment2085 := THAnimSegmentNode.Create;
Group2086 := TGroupNode.Create;
TouchSensor2087 := TTouchSensorNode.Create;
TouchSensor2087.Description := 'r_carpal_distal_interphalangeal_2';
{ METHOD .FdChildren.Add }
Group2086.FdChildren.Add(TouchSensor2087);
Transform2088 := TTransformNode.Create;
Transform2088.Translation := Vector3(-0.1945,0.7169,-0.0173);
Shape2089 := TShapeNode.Create;
Appearance2090 := TAppearanceNode.Create;
Material2091 := TMaterialNode.Create;
Material2091.DiffuseColor := Vector3(0.95,0.45,0.35);
end;

procedure InitHAnimGimbalJointController22Part144;
begin

{ METHOD .SetMaterial }
Appearance2090.Material := Material2091;
{ METHOD .Appearance }
Shape2089.Appearance := Appearance2090;
Sphere2092 := TSphereNode.Create;
Sphere2092.Radius := 0.03;
{ METHOD .Geometry }
Shape2089.Geometry := Sphere2092;
{ METHOD .FdChildren.Add }
Transform2088.FdChildren.Add(Shape2089);
{ METHOD .FdChildren.Add }
Group2086.FdChildren.Add(Transform2088);
Shape2093 := TShapeNode.Create;
Appearance2094 := TAppearanceNode.Create;
Material2095 := TMaterialNode.Create;
Material2095.DiffuseColor := Vector3(0,0,0);
Material2095.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2094.Material := Material2095;
LineProperties2096 := TLinePropertiesNode.Create;
LineProperties2096.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2094.LineProperties := LineProperties2096;
{ METHOD .Appearance }
Shape2093.Appearance := Appearance2094;
LineSet2097 := TLineSetNode.Create;
LineSet2097.SetVertexCount([2]);
Coordinate2098 := TCoordinateNode.Create;
Coordinate2098.SetPoint([Vector3(-0.1945,0.7169,-0.0173),Vector3(-0.1936,0.6945,-0.0161)]);
{ METHOD .Coord }
LineSet2097.Coord := Coordinate2098;
{ METHOD .Geometry }
Shape2093.Geometry := LineSet2097;
{ METHOD .FdChildren.Add }
Group2086.FdChildren.Add(Shape2093);
{ METHOD .FdChildren.Add }
HAnimSegment2085.FdChildren.Add(Group2086);
{ METHOD .FdChildren.Add }
HAnimJoint2084.FdChildren.Add(HAnimSegment2085);
{ METHOD .FdChildren.Add }
HAnimJoint2069.FdChildren.Add(HAnimJoint2084);
{ METHOD .FdChildren.Add }
HAnimJoint2054.FdChildren.Add(HAnimJoint2069);
{ METHOD .FdChildren.Add }
HAnimJoint2039.FdChildren.Add(HAnimJoint2054);
{ METHOD .FdChildren.Add }
HAnimJoint2024.FdChildren.Add(HAnimJoint2039);
{ METHOD .FdChildren.Add }
HAnimJoint1937.FdChildren.Add(HAnimJoint2024);
HAnimJoint2099 := THAnimJointNode.Create;
HAnimJoint2099.Center := Vector3(-0.1809,0.7,-0.1067);
HAnimJoint2099.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint2099.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment2100 := THAnimSegmentNode.Create;
TouchSensor2101 := TTouchSensorNode.Create;
TouchSensor2101.Description := 'r_midcarpal_3';
{ METHOD .FdChildren.Add }
HAnimSegment2100.FdChildren.Add(TouchSensor2101);
Transform2102 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part145;
begin

Transform2102.Translation := Vector3(-0.1809,0.7,-0.1067);
Transform2103 := TTransformNode.Create;
Shape2104 := TShapeNode.Create;
Appearance2105 := TAppearanceNode.Create;
Material2106 := TMaterialNode.Create;
Material2106.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2105.Material := Material2106;
{ METHOD .Appearance }
Shape2104.Appearance := Appearance2105;
Sphere2107 := TSphereNode.Create;
Sphere2107.Radius := 0.03;
{ METHOD .Geometry }
Shape2104.Geometry := Sphere2107;
{ METHOD .FdChildren.Add }
Transform2103.FdChildren.Add(Shape2104);
{ METHOD .FdChildren.Add }
Transform2102.FdChildren.Add(Transform2103);
{ METHOD .FdChildren.Add }
HAnimSegment2100.FdChildren.Add(Transform2102);
Shape2108 := TShapeNode.Create;
Appearance2109 := TAppearanceNode.Create;
Material2110 := TMaterialNode.Create;
Material2110.DiffuseColor := Vector3(0,0,0);
Material2110.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2109.Material := Material2110;
LineProperties2111 := TLinePropertiesNode.Create;
LineProperties2111.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2109.LineProperties := LineProperties2111;
{ METHOD .Appearance }
Shape2108.Appearance := Appearance2109;
LineSet2112 := TLineSetNode.Create;
LineSet2112.SetVertexCount([2]);
Coordinate2113 := TCoordinateNode.Create;
Coordinate2113.SetPoint([Vector3(-0.1809,0.7,-0.1067),Vector3(-0.1972,0.806,-0.0468)]);
{ METHOD .Coord }
LineSet2112.Coord := Coordinate2113;
{ METHOD .Geometry }
Shape2108.Geometry := LineSet2112;
{ METHOD .FdChildren.Add }
HAnimSegment2100.FdChildren.Add(Shape2108);
{ METHOD .FdChildren.Add }
HAnimJoint2099.FdChildren.Add(HAnimSegment2100);
HAnimJoint2114 := THAnimJointNode.Create;
HAnimJoint2114.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimJoint2114.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint2114.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment2115 := THAnimSegmentNode.Create;
TouchSensor2116 := TTouchSensorNode.Create;
TouchSensor2116.Description := 'r_carpometacarpal_3';
{ METHOD .FdChildren.Add }
HAnimSegment2115.FdChildren.Add(TouchSensor2116);
end;

procedure InitHAnimGimbalJointController22Part146;
begin

Transform2117 := TTransformNode.Create;
Transform2117.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform2118 := TTransformNode.Create;
Shape2119 := TShapeNode.Create;
Appearance2120 := TAppearanceNode.Create;
Material2121 := TMaterialNode.Create;
Material2121.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2120.Material := Material2121;
{ METHOD .Appearance }
Shape2119.Appearance := Appearance2120;
Sphere2122 := TSphereNode.Create;
Sphere2122.Radius := 0.03;
{ METHOD .Geometry }
Shape2119.Geometry := Sphere2122;
{ METHOD .FdChildren.Add }
Transform2118.FdChildren.Add(Shape2119);
{ METHOD .FdChildren.Add }
Transform2117.FdChildren.Add(Transform2118);
{ METHOD .FdChildren.Add }
HAnimSegment2115.FdChildren.Add(Transform2117);
Shape2123 := TShapeNode.Create;
Appearance2124 := TAppearanceNode.Create;
Material2125 := TMaterialNode.Create;
Material2125.DiffuseColor := Vector3(0,0,0);
Material2125.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2124.Material := Material2125;
LineProperties2126 := TLinePropertiesNode.Create;
LineProperties2126.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2124.LineProperties := LineProperties2126;
{ METHOD .Appearance }
Shape2123.Appearance := Appearance2124;
LineSet2127 := TLineSetNode.Create;
LineSet2127.SetVertexCount([2]);
Coordinate2128 := TCoordinateNode.Create;
Coordinate2128.SetPoint([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
{ METHOD .Coord }
LineSet2127.Coord := Coordinate2128;
{ METHOD .Geometry }
Shape2123.Geometry := LineSet2127;
{ METHOD .FdChildren.Add }
HAnimSegment2115.FdChildren.Add(Shape2123);
{ METHOD .FdChildren.Add }
HAnimJoint2114.FdChildren.Add(HAnimSegment2115);
HAnimJoint2129 := THAnimJointNode.Create;
HAnimJoint2129.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimJoint2129.SetLlimit([-0.2618,-0.0873,-0.5236]);
HAnimJoint2129.SetUlimit([0.2618,0.0873,1.5708]);
HAnimSegment2130 := THAnimSegmentNode.Create;
TouchSensor2131 := TTouchSensorNode.Create;
TouchSensor2131.Description := 'r_metacarpophalangeal_3';
end;

procedure InitHAnimGimbalJointController22Part147;
begin

{ METHOD .FdChildren.Add }
HAnimSegment2130.FdChildren.Add(TouchSensor2131);
Transform2132 := TTransformNode.Create;
Transform2132.Translation := Vector3(-0.1972,0.7849,-0.0468);
Transform2133 := TTransformNode.Create;
Shape2134 := TShapeNode.Create;
Appearance2135 := TAppearanceNode.Create;
Material2136 := TMaterialNode.Create;
Material2136.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2135.Material := Material2136;
{ METHOD .Appearance }
Shape2134.Appearance := Appearance2135;
Sphere2137 := TSphereNode.Create;
Sphere2137.Radius := 0.03;
{ METHOD .Geometry }
Shape2134.Geometry := Sphere2137;
{ METHOD .FdChildren.Add }
Transform2133.FdChildren.Add(Shape2134);
{ METHOD .FdChildren.Add }
Transform2132.FdChildren.Add(Transform2133);
{ METHOD .FdChildren.Add }
HAnimSegment2130.FdChildren.Add(Transform2132);
Shape2138 := TShapeNode.Create;
Appearance2139 := TAppearanceNode.Create;
Material2140 := TMaterialNode.Create;
Material2140.DiffuseColor := Vector3(0,0,0);
Material2140.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2139.Material := Material2140;
LineProperties2141 := TLinePropertiesNode.Create;
LineProperties2141.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2139.LineProperties := LineProperties2141;
{ METHOD .Appearance }
Shape2138.Appearance := Appearance2139;
LineSet2142 := TLineSetNode.Create;
LineSet2142.SetVertexCount([2]);
Coordinate2143 := TCoordinateNode.Create;
Coordinate2143.SetPoint([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
{ METHOD .Coord }
LineSet2142.Coord := Coordinate2143;
{ METHOD .Geometry }
Shape2138.Geometry := LineSet2142;
{ METHOD .FdChildren.Add }
HAnimSegment2130.FdChildren.Add(Shape2138);
{ METHOD .FdChildren.Add }
HAnimJoint2129.FdChildren.Add(HAnimSegment2130);
HAnimJoint2144 := THAnimJointNode.Create;
HAnimJoint2144.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimJoint2144.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2144.SetUlimit([0.0175,0.0175,1.9199]);
HAnimSegment2145 := THAnimSegmentNode.Create;
TouchSensor2146 := TTouchSensorNode.Create;
end;

procedure InitHAnimGimbalJointController22Part148;
begin

TouchSensor2146.Description := 'r_carpal_proximal_interphalangeal_3';
{ METHOD .FdChildren.Add }
HAnimSegment2145.FdChildren.Add(TouchSensor2146);
Transform2147 := TTransformNode.Create;
Transform2147.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform2148 := TTransformNode.Create;
Shape2149 := TShapeNode.Create;
Appearance2150 := TAppearanceNode.Create;
Material2151 := TMaterialNode.Create;
Material2151.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2150.Material := Material2151;
{ METHOD .Appearance }
Shape2149.Appearance := Appearance2150;
Sphere2152 := TSphereNode.Create;
Sphere2152.Radius := 0.03;
{ METHOD .Geometry }
Shape2149.Geometry := Sphere2152;
{ METHOD .FdChildren.Add }
Transform2148.FdChildren.Add(Shape2149);
{ METHOD .FdChildren.Add }
Transform2147.FdChildren.Add(Transform2148);
{ METHOD .FdChildren.Add }
HAnimSegment2145.FdChildren.Add(Transform2147);
Shape2153 := TShapeNode.Create;
Appearance2154 := TAppearanceNode.Create;
Material2155 := TMaterialNode.Create;
Material2155.DiffuseColor := Vector3(0,0,0);
Material2155.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2154.Material := Material2155;
LineProperties2156 := TLinePropertiesNode.Create;
LineProperties2156.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2154.LineProperties := LineProperties2156;
{ METHOD .Appearance }
Shape2153.Appearance := Appearance2154;
LineSet2157 := TLineSetNode.Create;
LineSet2157.SetVertexCount([2]);
Coordinate2158 := TCoordinateNode.Create;
Coordinate2158.SetPoint([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
{ METHOD .Coord }
LineSet2157.Coord := Coordinate2158;
{ METHOD .Geometry }
Shape2153.Geometry := LineSet2157;
{ METHOD .FdChildren.Add }
HAnimSegment2145.FdChildren.Add(Shape2153);
{ METHOD .FdChildren.Add }
HAnimJoint2144.FdChildren.Add(HAnimSegment2145);
HAnimJoint2159 := THAnimJointNode.Create;
HAnimJoint2159.Center := Vector3(-0.1939,0.7042,-0.0432);
HAnimJoint2159.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2159.SetUlimit([0.0175,0.0175,1.3963]);
HAnimSegment2160 := THAnimSegmentNode.Create;
end;

procedure InitHAnimGimbalJointController22Part149;
begin

Group2161 := TGroupNode.Create;
TouchSensor2162 := TTouchSensorNode.Create;
TouchSensor2162.Description := 'r_carpal_distal_interphalangeal_3';
{ METHOD .FdChildren.Add }
Group2161.FdChildren.Add(TouchSensor2162);
Transform2163 := TTransformNode.Create;
Transform2163.Translation := Vector3(-0.1939,0.7042,-0.0432);
Shape2164 := TShapeNode.Create;
Appearance2165 := TAppearanceNode.Create;
Material2166 := TMaterialNode.Create;
Material2166.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2165.Material := Material2166;
{ METHOD .Appearance }
Shape2164.Appearance := Appearance2165;
Sphere2167 := TSphereNode.Create;
Sphere2167.Radius := 0.03;
{ METHOD .Geometry }
Shape2164.Geometry := Sphere2167;
{ METHOD .FdChildren.Add }
Transform2163.FdChildren.Add(Shape2164);
{ METHOD .FdChildren.Add }
Group2161.FdChildren.Add(Transform2163);
Shape2168 := TShapeNode.Create;
Appearance2169 := TAppearanceNode.Create;
Material2170 := TMaterialNode.Create;
Material2170.DiffuseColor := Vector3(0,0,0);
Material2170.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2169.Material := Material2170;
LineProperties2171 := TLinePropertiesNode.Create;
LineProperties2171.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2169.LineProperties := LineProperties2171;
{ METHOD .Appearance }
Shape2168.Appearance := Appearance2169;
LineSet2172 := TLineSetNode.Create;
LineSet2172.SetVertexCount([2]);
Coordinate2173 := TCoordinateNode.Create;
Coordinate2173.SetPoint([Vector3(-0.1939,0.7042,-0.0432),Vector3(-0.1928,0.678,-0.0423)]);
{ METHOD .Coord }
LineSet2172.Coord := Coordinate2173;
{ METHOD .Geometry }
Shape2168.Geometry := LineSet2172;
{ METHOD .FdChildren.Add }
Group2161.FdChildren.Add(Shape2168);
{ METHOD .FdChildren.Add }
HAnimSegment2160.FdChildren.Add(Group2161);
{ METHOD .FdChildren.Add }
HAnimJoint2159.FdChildren.Add(HAnimSegment2160);
{ METHOD .FdChildren.Add }
HAnimJoint2144.FdChildren.Add(HAnimJoint2159);
{ METHOD .FdChildren.Add }
HAnimJoint2129.FdChildren.Add(HAnimJoint2144);
{ METHOD .FdChildren.Add }
HAnimJoint2114.FdChildren.Add(HAnimJoint2129);
{ METHOD .FdChildren.Add }
HAnimJoint2099.FdChildren.Add(HAnimJoint2114);
end;

procedure InitHAnimGimbalJointController22Part150;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1937.FdChildren.Add(HAnimJoint2099);
HAnimJoint2174 := THAnimJointNode.Create;
HAnimJoint2174.Center := Vector3(-0.1809,0.6973,-0.1276);
HAnimJoint2174.SetLlimit([-0.1396,-0.0873,-0.1396]);
HAnimJoint2174.SetUlimit([0.1396,0.0873,0.1396]);
HAnimSegment2175 := THAnimSegmentNode.Create;
TouchSensor2176 := TTouchSensorNode.Create;
TouchSensor2176.Description := 'r_midcarpal_4_5';
{ METHOD .FdChildren.Add }
HAnimSegment2175.FdChildren.Add(TouchSensor2176);
Transform2177 := TTransformNode.Create;
Transform2177.Translation := Vector3(-0.1809,0.6973,-0.1276);
Transform2178 := TTransformNode.Create;
Shape2179 := TShapeNode.Create;
Appearance2180 := TAppearanceNode.Create;
Material2181 := TMaterialNode.Create;
Material2181.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2180.Material := Material2181;
{ METHOD .Appearance }
Shape2179.Appearance := Appearance2180;
Sphere2182 := TSphereNode.Create;
Sphere2182.Radius := 0.03;
{ METHOD .Geometry }
Shape2179.Geometry := Sphere2182;
{ METHOD .FdChildren.Add }
Transform2178.FdChildren.Add(Shape2179);
{ METHOD .FdChildren.Add }
Transform2177.FdChildren.Add(Transform2178);
{ METHOD .FdChildren.Add }
HAnimSegment2175.FdChildren.Add(Transform2177);
Shape2183 := TShapeNode.Create;
Appearance2184 := TAppearanceNode.Create;
Material2185 := TMaterialNode.Create;
Material2185.DiffuseColor := Vector3(0,0,0);
Material2185.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2184.Material := Material2185;
LineProperties2186 := TLinePropertiesNode.Create;
LineProperties2186.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2184.LineProperties := LineProperties2186;
{ METHOD .Appearance }
Shape2183.Appearance := Appearance2184;
LineSet2187 := TLineSetNode.Create;
LineSet2187.SetVertexCount([2]);
Coordinate2188 := TCoordinateNode.Create;
Coordinate2188.SetPoint([Vector3(-0.1809,0.6973,-0.1276),Vector3(-0.1951,0.8049,-0.0732)]);
{ METHOD .Coord }
LineSet2187.Coord := Coordinate2188;
{ METHOD .Geometry }
Shape2183.Geometry := LineSet2187;
end;

procedure InitHAnimGimbalJointController22Part151;
begin

{ METHOD .FdChildren.Add }
HAnimSegment2175.FdChildren.Add(Shape2183);
Shape2189 := TShapeNode.Create;
{ METHOD .Appearance }
Shape2189.Appearance := Appearance2184;
LineSet2191 := TLineSetNode.Create;
LineSet2191.SetVertexCount([2]);
Coordinate2192 := TCoordinateNode.Create;
Coordinate2192.SetPoint([Vector3(-0.1809,0.6973,-0.1276),Vector3(-0.1926,0.8096,-0.0975)]);
{ METHOD .Coord }
LineSet2191.Coord := Coordinate2192;
{ METHOD .Geometry }
Shape2189.Geometry := LineSet2191;
{ METHOD .FdChildren.Add }
HAnimSegment2175.FdChildren.Add(Shape2189);
{ METHOD .FdChildren.Add }
HAnimJoint2174.FdChildren.Add(HAnimSegment2175);
HAnimJoint2193 := THAnimJointNode.Create;
HAnimJoint2193.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimJoint2193.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint2193.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment2194 := THAnimSegmentNode.Create;
TouchSensor2195 := TTouchSensorNode.Create;
TouchSensor2195.Description := 'r_carpometacarpal_4';
{ METHOD .FdChildren.Add }
HAnimSegment2194.FdChildren.Add(TouchSensor2195);
Transform2196 := TTransformNode.Create;
Transform2196.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform2197 := TTransformNode.Create;
Shape2198 := TShapeNode.Create;
Appearance2199 := TAppearanceNode.Create;
Material2200 := TMaterialNode.Create;
Material2200.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2199.Material := Material2200;
{ METHOD .Appearance }
Shape2198.Appearance := Appearance2199;
Sphere2201 := TSphereNode.Create;
Sphere2201.Radius := 0.03;
{ METHOD .Geometry }
Shape2198.Geometry := Sphere2201;
{ METHOD .FdChildren.Add }
Transform2197.FdChildren.Add(Shape2198);
{ METHOD .FdChildren.Add }
Transform2196.FdChildren.Add(Transform2197);
{ METHOD .FdChildren.Add }
HAnimSegment2194.FdChildren.Add(Transform2196);
Shape2202 := TShapeNode.Create;
Appearance2203 := TAppearanceNode.Create;
Material2204 := TMaterialNode.Create;
Material2204.DiffuseColor := Vector3(0,0,0);
Material2204.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2203.Material := Material2204;
end;

procedure InitHAnimGimbalJointController22Part152;
begin

LineProperties2205 := TLinePropertiesNode.Create;
LineProperties2205.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2203.LineProperties := LineProperties2205;
{ METHOD .Appearance }
Shape2202.Appearance := Appearance2203;
LineSet2206 := TLineSetNode.Create;
LineSet2206.SetVertexCount([2]);
Coordinate2207 := TCoordinateNode.Create;
Coordinate2207.SetPoint([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
{ METHOD .Coord }
LineSet2206.Coord := Coordinate2207;
{ METHOD .Geometry }
Shape2202.Geometry := LineSet2206;
{ METHOD .FdChildren.Add }
HAnimSegment2194.FdChildren.Add(Shape2202);
{ METHOD .FdChildren.Add }
HAnimJoint2193.FdChildren.Add(HAnimSegment2194);
HAnimJoint2208 := THAnimJointNode.Create;
HAnimJoint2208.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimJoint2208.SetLlimit([-0.2618,-0.0873,-0.5236]);
HAnimJoint2208.SetUlimit([0.2618,0.0873,1.5708]);
HAnimSegment2209 := THAnimSegmentNode.Create;
TouchSensor2210 := TTouchSensorNode.Create;
TouchSensor2210.Description := 'r_metacarpophalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment2209.FdChildren.Add(TouchSensor2210);
Transform2211 := TTransformNode.Create;
Transform2211.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform2212 := TTransformNode.Create;
Shape2213 := TShapeNode.Create;
Appearance2214 := TAppearanceNode.Create;
Material2215 := TMaterialNode.Create;
Material2215.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2214.Material := Material2215;
{ METHOD .Appearance }
Shape2213.Appearance := Appearance2214;
Sphere2216 := TSphereNode.Create;
Sphere2216.Radius := 0.03;
{ METHOD .Geometry }
Shape2213.Geometry := Sphere2216;
{ METHOD .FdChildren.Add }
Transform2212.FdChildren.Add(Shape2213);
{ METHOD .FdChildren.Add }
Transform2211.FdChildren.Add(Transform2212);
{ METHOD .FdChildren.Add }
HAnimSegment2209.FdChildren.Add(Transform2211);
Shape2217 := TShapeNode.Create;
Appearance2218 := TAppearanceNode.Create;
Material2219 := TMaterialNode.Create;
Material2219.DiffuseColor := Vector3(0,0,0);
Material2219.EmissiveColor := Vector3(0.95,0.45,0.35);
end;

procedure InitHAnimGimbalJointController22Part153;
begin

{ METHOD .SetMaterial }
Appearance2218.Material := Material2219;
LineProperties2220 := TLinePropertiesNode.Create;
LineProperties2220.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2218.LineProperties := LineProperties2220;
{ METHOD .Appearance }
Shape2217.Appearance := Appearance2218;
LineSet2221 := TLineSetNode.Create;
LineSet2221.SetVertexCount([2]);
Coordinate2222 := TCoordinateNode.Create;
Coordinate2222.SetPoint([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
{ METHOD .Coord }
LineSet2221.Coord := Coordinate2222;
{ METHOD .Geometry }
Shape2217.Geometry := LineSet2221;
{ METHOD .FdChildren.Add }
HAnimSegment2209.FdChildren.Add(Shape2217);
{ METHOD .FdChildren.Add }
HAnimJoint2208.FdChildren.Add(HAnimSegment2209);
HAnimJoint2223 := THAnimJointNode.Create;
HAnimJoint2223.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimJoint2223.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2223.SetUlimit([0.0175,0.0175,1.9199]);
HAnimSegment2224 := THAnimSegmentNode.Create;
TouchSensor2225 := TTouchSensorNode.Create;
TouchSensor2225.Description := 'r_carpal_proximal_interphalangeal_4';
{ METHOD .FdChildren.Add }
HAnimSegment2224.FdChildren.Add(TouchSensor2225);
Transform2226 := TTransformNode.Create;
Transform2226.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform2227 := TTransformNode.Create;
Shape2228 := TShapeNode.Create;
Appearance2229 := TAppearanceNode.Create;
Material2230 := TMaterialNode.Create;
Material2230.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2229.Material := Material2230;
{ METHOD .Appearance }
Shape2228.Appearance := Appearance2229;
Sphere2231 := TSphereNode.Create;
Sphere2231.Radius := 0.03;
{ METHOD .Geometry }
Shape2228.Geometry := Sphere2231;
{ METHOD .FdChildren.Add }
Transform2227.FdChildren.Add(Shape2228);
{ METHOD .FdChildren.Add }
Transform2226.FdChildren.Add(Transform2227);
{ METHOD .FdChildren.Add }
HAnimSegment2224.FdChildren.Add(Transform2226);
Shape2232 := TShapeNode.Create;
Appearance2233 := TAppearanceNode.Create;
Material2234 := TMaterialNode.Create;
Material2234.DiffuseColor := Vector3(0,0,0);
end;

procedure InitHAnimGimbalJointController22Part154;
begin

Material2234.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2233.Material := Material2234;
LineProperties2235 := TLinePropertiesNode.Create;
LineProperties2235.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2233.LineProperties := LineProperties2235;
{ METHOD .Appearance }
Shape2232.Appearance := Appearance2233;
LineSet2236 := TLineSetNode.Create;
LineSet2236.SetVertexCount([2]);
Coordinate2237 := TCoordinateNode.Create;
Coordinate2237.SetPoint([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
{ METHOD .Coord }
LineSet2236.Coord := Coordinate2237;
{ METHOD .Geometry }
Shape2232.Geometry := LineSet2236;
{ METHOD .FdChildren.Add }
HAnimSegment2224.FdChildren.Add(Shape2232);
{ METHOD .FdChildren.Add }
HAnimJoint2223.FdChildren.Add(HAnimSegment2224);
HAnimJoint2238 := THAnimJointNode.Create;
HAnimJoint2238.Center := Vector3(-0.1908,0.7077,-0.0706);
HAnimJoint2238.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2238.SetUlimit([0.0175,0.0175,1.3963]);
HAnimSegment2239 := THAnimSegmentNode.Create;
Group2240 := TGroupNode.Create;
TouchSensor2241 := TTouchSensorNode.Create;
TouchSensor2241.Description := 'r_carpal_distal_interphalangeal_4';
{ METHOD .FdChildren.Add }
Group2240.FdChildren.Add(TouchSensor2241);
Transform2242 := TTransformNode.Create;
Transform2242.Translation := Vector3(-0.1908,0.7077,-0.0706);
Shape2243 := TShapeNode.Create;
Appearance2244 := TAppearanceNode.Create;
Material2245 := TMaterialNode.Create;
Material2245.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2244.Material := Material2245;
{ METHOD .Appearance }
Shape2243.Appearance := Appearance2244;
Sphere2246 := TSphereNode.Create;
Sphere2246.Radius := 0.03;
{ METHOD .Geometry }
Shape2243.Geometry := Sphere2246;
{ METHOD .FdChildren.Add }
Transform2242.FdChildren.Add(Shape2243);
{ METHOD .FdChildren.Add }
Group2240.FdChildren.Add(Transform2242);
Shape2247 := TShapeNode.Create;
Appearance2248 := TAppearanceNode.Create;
Material2249 := TMaterialNode.Create;
Material2249.DiffuseColor := Vector3(0,0,0);
end;

procedure InitHAnimGimbalJointController22Part155;
begin

Material2249.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2248.Material := Material2249;
LineProperties2250 := TLinePropertiesNode.Create;
LineProperties2250.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2248.LineProperties := LineProperties2250;
{ METHOD .Appearance }
Shape2247.Appearance := Appearance2248;
LineSet2251 := TLineSetNode.Create;
LineSet2251.SetVertexCount([2]);
Coordinate2252 := TCoordinateNode.Create;
Coordinate2252.SetPoint([Vector3(-0.1908,0.7077,-0.0706),Vector3(-0.1896,0.6836,-0.0696)]);
{ METHOD .Coord }
LineSet2251.Coord := Coordinate2252;
{ METHOD .Geometry }
Shape2247.Geometry := LineSet2251;
{ METHOD .FdChildren.Add }
Group2240.FdChildren.Add(Shape2247);
{ METHOD .FdChildren.Add }
HAnimSegment2239.FdChildren.Add(Group2240);
{ METHOD .FdChildren.Add }
HAnimJoint2238.FdChildren.Add(HAnimSegment2239);
{ METHOD .FdChildren.Add }
HAnimJoint2223.FdChildren.Add(HAnimJoint2238);
{ METHOD .FdChildren.Add }
HAnimJoint2208.FdChildren.Add(HAnimJoint2223);
{ METHOD .FdChildren.Add }
HAnimJoint2193.FdChildren.Add(HAnimJoint2208);
{ METHOD .FdChildren.Add }
HAnimJoint2174.FdChildren.Add(HAnimJoint2193);
HAnimJoint2253 := THAnimJointNode.Create;
HAnimJoint2253.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimJoint2253.SetLlimit([-0.0873,-0.0175,-0.1396]);
HAnimJoint2253.SetUlimit([0.0873,0.0175,0.1396]);
HAnimSegment2254 := THAnimSegmentNode.Create;
TouchSensor2255 := TTouchSensorNode.Create;
TouchSensor2255.Description := 'r_carpometacarpal_5';
{ METHOD .FdChildren.Add }
HAnimSegment2254.FdChildren.Add(TouchSensor2255);
Transform2256 := TTransformNode.Create;
Transform2256.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform2257 := TTransformNode.Create;
Shape2258 := TShapeNode.Create;
Appearance2259 := TAppearanceNode.Create;
Material2260 := TMaterialNode.Create;
Material2260.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2259.Material := Material2260;
{ METHOD .Appearance }
Shape2258.Appearance := Appearance2259;
Sphere2261 := TSphereNode.Create;
Sphere2261.Radius := 0.03;
{ METHOD .Geometry }
Shape2258.Geometry := Sphere2261;
{ METHOD .FdChildren.Add }
Transform2257.FdChildren.Add(Shape2258);
end;

procedure InitHAnimGimbalJointController22Part156;
begin

{ METHOD .FdChildren.Add }
Transform2256.FdChildren.Add(Transform2257);
{ METHOD .FdChildren.Add }
HAnimSegment2254.FdChildren.Add(Transform2256);
Shape2262 := TShapeNode.Create;
Appearance2263 := TAppearanceNode.Create;
Material2264 := TMaterialNode.Create;
Material2264.DiffuseColor := Vector3(0,0,0);
Material2264.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2263.Material := Material2264;
LineProperties2265 := TLinePropertiesNode.Create;
LineProperties2265.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2263.LineProperties := LineProperties2265;
{ METHOD .Appearance }
Shape2262.Appearance := Appearance2263;
LineSet2266 := TLineSetNode.Create;
LineSet2266.SetVertexCount([2]);
Coordinate2267 := TCoordinateNode.Create;
Coordinate2267.SetPoint([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
{ METHOD .Coord }
LineSet2266.Coord := Coordinate2267;
{ METHOD .Geometry }
Shape2262.Geometry := LineSet2266;
{ METHOD .FdChildren.Add }
HAnimSegment2254.FdChildren.Add(Shape2262);
{ METHOD .FdChildren.Add }
HAnimJoint2253.FdChildren.Add(HAnimSegment2254);
HAnimJoint2268 := THAnimJointNode.Create;
HAnimJoint2268.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimJoint2268.SetLlimit([-0.2618,-0.0873,-0.5236]);
HAnimJoint2268.SetUlimit([0.2618,0.0873,1.5708]);
HAnimSegment2269 := THAnimSegmentNode.Create;
TouchSensor2270 := TTouchSensorNode.Create;
TouchSensor2270.Description := 'r_metacarpophalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment2269.FdChildren.Add(TouchSensor2270);
Transform2271 := TTransformNode.Create;
Transform2271.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform2272 := TTransformNode.Create;
Shape2273 := TShapeNode.Create;
Appearance2274 := TAppearanceNode.Create;
Material2275 := TMaterialNode.Create;
Material2275.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2274.Material := Material2275;
{ METHOD .Appearance }
Shape2273.Appearance := Appearance2274;
Sphere2276 := TSphereNode.Create;
Sphere2276.Radius := 0.03;
{ METHOD .Geometry }
Shape2273.Geometry := Sphere2276;
end;

procedure InitHAnimGimbalJointController22Part157;
begin

{ METHOD .FdChildren.Add }
Transform2272.FdChildren.Add(Shape2273);
{ METHOD .FdChildren.Add }
Transform2271.FdChildren.Add(Transform2272);
{ METHOD .FdChildren.Add }
HAnimSegment2269.FdChildren.Add(Transform2271);
Shape2277 := TShapeNode.Create;
Appearance2278 := TAppearanceNode.Create;
Material2279 := TMaterialNode.Create;
Material2279.DiffuseColor := Vector3(0,0,0);
Material2279.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2278.Material := Material2279;
LineProperties2280 := TLinePropertiesNode.Create;
LineProperties2280.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2278.LineProperties := LineProperties2280;
{ METHOD .Appearance }
Shape2277.Appearance := Appearance2278;
LineSet2281 := TLineSetNode.Create;
LineSet2281.SetVertexCount([2]);
Coordinate2282 := TCoordinateNode.Create;
Coordinate2282.SetPoint([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
{ METHOD .Coord }
LineSet2281.Coord := Coordinate2282;
{ METHOD .Geometry }
Shape2277.Geometry := LineSet2281;
{ METHOD .FdChildren.Add }
HAnimSegment2269.FdChildren.Add(Shape2277);
{ METHOD .FdChildren.Add }
HAnimJoint2268.FdChildren.Add(HAnimSegment2269);
HAnimJoint2283 := THAnimJointNode.Create;
HAnimJoint2283.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimJoint2283.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2283.SetUlimit([0.0175,0.0175,1.9199]);
HAnimSegment2284 := THAnimSegmentNode.Create;
TouchSensor2285 := TTouchSensorNode.Create;
TouchSensor2285.Description := 'r_carpal_proximal_interphalangeal_5';
{ METHOD .FdChildren.Add }
HAnimSegment2284.FdChildren.Add(TouchSensor2285);
Transform2286 := TTransformNode.Create;
Transform2286.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform2287 := TTransformNode.Create;
Shape2288 := TShapeNode.Create;
Appearance2289 := TAppearanceNode.Create;
Material2290 := TMaterialNode.Create;
Material2290.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2289.Material := Material2290;
{ METHOD .Appearance }
Shape2288.Appearance := Appearance2289;
Sphere2291 := TSphereNode.Create;
Sphere2291.Radius := 0.03;
end;

procedure InitHAnimGimbalJointController22Part158;
begin

{ METHOD .Geometry }
Shape2288.Geometry := Sphere2291;
{ METHOD .FdChildren.Add }
Transform2287.FdChildren.Add(Shape2288);
{ METHOD .FdChildren.Add }
Transform2286.FdChildren.Add(Transform2287);
{ METHOD .FdChildren.Add }
HAnimSegment2284.FdChildren.Add(Transform2286);
Shape2292 := TShapeNode.Create;
Appearance2293 := TAppearanceNode.Create;
Material2294 := TMaterialNode.Create;
Material2294.DiffuseColor := Vector3(0,0,0);
Material2294.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2293.Material := Material2294;
LineProperties2295 := TLinePropertiesNode.Create;
LineProperties2295.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2293.LineProperties := LineProperties2295;
{ METHOD .Appearance }
Shape2292.Appearance := Appearance2293;
LineSet2296 := TLineSetNode.Create;
LineSet2296.SetVertexCount([2]);
Coordinate2297 := TCoordinateNode.Create;
Coordinate2297.SetPoint([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
{ METHOD .Coord }
LineSet2296.Coord := Coordinate2297;
{ METHOD .Geometry }
Shape2292.Geometry := LineSet2296;
{ METHOD .FdChildren.Add }
HAnimSegment2284.FdChildren.Add(Shape2292);
{ METHOD .FdChildren.Add }
HAnimJoint2283.FdChildren.Add(HAnimSegment2284);
HAnimJoint2298 := THAnimJointNode.Create;
HAnimJoint2298.Center := Vector3(-0.1908,0.754,-0.096);
HAnimJoint2298.SetLlimit([-0.0175,-0.0175,0]);
HAnimJoint2298.SetUlimit([0.0175,0.0175,1.3963]);
HAnimSegment2299 := THAnimSegmentNode.Create;
Group2300 := TGroupNode.Create;
TouchSensor2301 := TTouchSensorNode.Create;
TouchSensor2301.Description := 'r_carpal_distal_interphalangeal_5';
{ METHOD .FdChildren.Add }
Group2300.FdChildren.Add(TouchSensor2301);
Transform2302 := TTransformNode.Create;
Transform2302.Translation := Vector3(-0.1908,0.754,-0.096);
Shape2303 := TShapeNode.Create;
Appearance2304 := TAppearanceNode.Create;
Material2305 := TMaterialNode.Create;
Material2305.DiffuseColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2304.Material := Material2305;
{ METHOD .Appearance }
Shape2303.Appearance := Appearance2304;
Sphere2306 := TSphereNode.Create;
end;

procedure InitHAnimGimbalJointController22Part159;
begin

Sphere2306.Radius := 0.03;
{ METHOD .Geometry }
Shape2303.Geometry := Sphere2306;
{ METHOD .FdChildren.Add }
Transform2302.FdChildren.Add(Shape2303);
{ METHOD .FdChildren.Add }
Group2300.FdChildren.Add(Transform2302);
Shape2307 := TShapeNode.Create;
Appearance2308 := TAppearanceNode.Create;
Material2309 := TMaterialNode.Create;
Material2309.DiffuseColor := Vector3(0,0,0);
Material2309.EmissiveColor := Vector3(0.95,0.45,0.35);
{ METHOD .SetMaterial }
Appearance2308.Material := Material2309;
LineProperties2310 := TLinePropertiesNode.Create;
LineProperties2310.LinewidthScaleFactor := 6;
{ METHOD .LineProperties }
Appearance2308.LineProperties := LineProperties2310;
{ METHOD .Appearance }
Shape2307.Appearance := Appearance2308;
LineSet2311 := TLineSetNode.Create;
LineSet2311.SetVertexCount([2]);
Coordinate2312 := TCoordinateNode.Create;
Coordinate2312.SetPoint([Vector3(-0.1908,0.754,-0.096),Vector3(-0.1924,0.7689,-0.0952)]);
{ METHOD .Coord }
LineSet2311.Coord := Coordinate2312;
{ METHOD .Geometry }
Shape2307.Geometry := LineSet2311;
{ METHOD .FdChildren.Add }
Group2300.FdChildren.Add(Shape2307);
{ METHOD .FdChildren.Add }
HAnimSegment2299.FdChildren.Add(Group2300);
{ METHOD .FdChildren.Add }
HAnimJoint2298.FdChildren.Add(HAnimSegment2299);
{ METHOD .FdChildren.Add }
HAnimJoint2283.FdChildren.Add(HAnimJoint2298);
{ METHOD .FdChildren.Add }
HAnimJoint2268.FdChildren.Add(HAnimJoint2283);
{ METHOD .FdChildren.Add }
HAnimJoint2253.FdChildren.Add(HAnimJoint2268);
{ METHOD .FdChildren.Add }
HAnimJoint2174.FdChildren.Add(HAnimJoint2253);
{ METHOD .FdChildren.Add }
HAnimJoint1937.FdChildren.Add(HAnimJoint2174);
{ METHOD .FdChildren.Add }
HAnimJoint1922.FdChildren.Add(HAnimJoint1937);
{ METHOD .FdChildren.Add }
HAnimJoint1907.FdChildren.Add(HAnimJoint1922);
{ METHOD .FdChildren.Add }
HAnimJoint1892.FdChildren.Add(HAnimJoint1907);
{ METHOD .FdChildren.Add }
HAnimJoint1877.FdChildren.Add(HAnimJoint1892);
{ METHOD .FdChildren.Add }
HAnimJoint1169.FdChildren.Add(HAnimJoint1877);
{ METHOD .FdChildren.Add }
HAnimJoint1154.FdChildren.Add(HAnimJoint1169);
{ METHOD .FdChildren.Add }
HAnimJoint1139.FdChildren.Add(HAnimJoint1154);
{ METHOD .FdChildren.Add }
HAnimJoint1124.FdChildren.Add(HAnimJoint1139);
{ METHOD .FdChildren.Add }
HAnimJoint1109.FdChildren.Add(HAnimJoint1124);
{ METHOD .FdChildren.Add }
HAnimJoint1094.FdChildren.Add(HAnimJoint1109);
{ METHOD .FdChildren.Add }
HAnimJoint1079.FdChildren.Add(HAnimJoint1094);
{ METHOD .FdChildren.Add }
HAnimJoint1064.FdChildren.Add(HAnimJoint1079);
end;

procedure InitHAnimGimbalJointController22Part160;
begin

{ METHOD .FdChildren.Add }
HAnimJoint1049.FdChildren.Add(HAnimJoint1064);
{ METHOD .FdChildren.Add }
HAnimJoint1034.FdChildren.Add(HAnimJoint1049);
{ METHOD .FdChildren.Add }
HAnimJoint1019.FdChildren.Add(HAnimJoint1034);
{ METHOD .FdChildren.Add }
HAnimJoint1004.FdChildren.Add(HAnimJoint1019);
{ METHOD .FdChildren.Add }
HAnimJoint989.FdChildren.Add(HAnimJoint1004);
{ METHOD .FdChildren.Add }
HAnimJoint974.FdChildren.Add(HAnimJoint989);
{ METHOD .FdChildren.Add }
HAnimJoint959.FdChildren.Add(HAnimJoint974);
{ METHOD .FdChildren.Add }
HAnimJoint944.FdChildren.Add(HAnimJoint959);
{ METHOD .FdChildren.Add }
HAnimJoint929.FdChildren.Add(HAnimJoint944);
{ METHOD .FdChildren.Add }
HAnimJoint19.FdChildren.Add(HAnimJoint929);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid18.FdSkeleton.Add(HAnimJoint19);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint19);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint38);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint57);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint72);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint87);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint106);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint129);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint144);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint159);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint174);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint189);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint204);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint219);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint234);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint249);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint264);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint279);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint294);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint309);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint324);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint339);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint354);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint373);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint388);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint403);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint418);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint433);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint448);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint463);
end;

procedure InitHAnimGimbalJointController22Part161;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint478);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint493);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint508);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint523);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint542);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint565);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint580);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint595);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint610);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint625);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint640);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint655);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint670);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint685);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint700);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint715);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint730);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint745);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint760);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint775);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint790);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint809);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint824);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint839);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint854);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint869);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint884);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint899);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint914);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint929);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint944);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint959);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint974);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint989);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1004);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1019);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1034);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1049);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1064);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1079);
end;

procedure InitHAnimGimbalJointController22Part162;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1094);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1109);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1124);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1139);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1154);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1169);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1192);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1207);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1222);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1237);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1252);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1267);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1282);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1297);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1336);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1351);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1366);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1381);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1396);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1411);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1426);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1441);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1456);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1471);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1486);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1501);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1528);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1543);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1558);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1573);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1588);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1603);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1618);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1633);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1648);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1663);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1678);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1693);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1708);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1723);
end;

procedure InitHAnimGimbalJointController22Part163;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1738);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1757);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1772);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1787);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1802);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1817);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1832);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1847);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1862);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1877);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1892);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1907);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1922);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1937);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1964);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1979);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint1994);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2009);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2024);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2039);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2054);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2069);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2084);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2099);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2114);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2129);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2144);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2159);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2174);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2193);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2208);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2223);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2238);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2253);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2268);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2283);
{ METHOD .FdJoints.Add }
HAnimHumanoid18.FdJoints.Add(HAnimJoint2298);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment20);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment39);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment58);
end;

procedure InitHAnimGimbalJointController22Part164;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment73);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment88);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment107);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment130);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment145);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment160);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment175);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment190);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment205);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment220);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment235);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment250);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment265);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment280);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment295);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment310);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment325);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment340);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment355);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment374);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment389);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment404);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment419);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment434);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment449);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment464);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment479);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment494);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment509);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment524);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment543);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment566);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment581);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment596);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment611);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment626);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment641);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment656);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment671);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment686);
end;

procedure InitHAnimGimbalJointController22Part165;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment701);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment716);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment731);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment746);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment761);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment776);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment791);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment810);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment825);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment840);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment855);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment870);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment885);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment900);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment915);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment930);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment945);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment960);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment975);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment990);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1005);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1020);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1035);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1050);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1065);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1080);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1095);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1110);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1125);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1140);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1155);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1170);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1193);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1208);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1223);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1238);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1253);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1268);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1283);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1298);
end;

procedure InitHAnimGimbalJointController22Part166;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1337);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1352);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1367);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1382);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1397);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1412);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1427);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1442);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1457);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1472);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1487);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1502);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1529);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1544);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1559);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1574);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1589);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1604);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1619);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1634);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1649);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1664);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1679);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1694);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1709);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1724);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1739);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1758);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1773);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1788);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1803);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1818);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1833);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1848);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1863);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1878);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1893);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1908);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1923);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1938);
end;

procedure InitHAnimGimbalJointController22Part167;
begin

{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1965);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1980);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment1995);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2010);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2025);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2040);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2055);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2070);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2085);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2100);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2115);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2130);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2145);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2160);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2175);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2194);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2209);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2224);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2239);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2254);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2269);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2284);
{ METHOD .FdSegments.Add }
HAnimHumanoid18.FdSegments.Add(HAnimSegment2299);
{ METHOD .FdChildren.Add }
Layer15.FdChildren.Add(HAnimHumanoid18);
{ METHOD .FdLayers.Add }
LayerSet14.FdLayers.Add(Layer15);
Layer2605 := TLayerNode.Create;
Layer2605.Pickable := True;
Layer2605.SetObjectType(['ALL']);
Background2606 := TBackgroundNode.Create;
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Background2606);
{ ==================== GIMBAL CONTROLLER DISPLAY ==================== }
Transform2607 := TTransformNode.Create;
Transform2607.Translation := Vector3(4.1,1.1,0);
Transform2607.Scale := Vector3(2.9,2.9,1);
Group2608 := TGroupNode.Create;
CylinderSensor2609 := TCylinderSensorNode.Create;
CylinderSensor2609.AxisRotation := Vector4(0,0,1,-1.5708);
CylinderSensor2609.Description := 'X ring';
{ METHOD .FdChildren.Add }
Group2608.FdChildren.Add(CylinderSensor2609);
Transform2610 := TTransformNode.Create;
Transform2611 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part168;
begin

Transform2611.Rotation := Vector4(0,0,1,1.5708);
Shape2612 := TShapeNode.Create;
Appearance2613 := TAppearanceNode.Create;
Material2614 := TMaterialNode.Create;
Material2614.DiffuseColor := Vector3(1,0.2,0.2);
Material2614.EmissiveColor := Vector3(0.3,0.06,0.06);
{ METHOD .SetMaterial }
Appearance2613.Material := Material2614;
{ METHOD .Appearance }
Shape2612.Appearance := Appearance2613;
Extrusion2615 := TExtrusionNode.Create;
Extrusion2615.BeginCap := False;
Extrusion2615.EndCap := False;
Extrusion2615.Solid := False;
Extrusion2615.CreaseAngle := 1.57;
Extrusion2615.SetCrossSection([Vector2(0.045,0),Vector2(0.0318,0.0318),Vector2(0,0.045),Vector2(-0.0318,0.0318),Vector2(-0.045,0),Vector2(-0.0318,-0.0318),Vector2(0,-0.045),Vector2(0.0318,-0.0318),Vector2(0.045,0)]);
Extrusion2615.SetSpine([Vector3(0.6,0,0),Vector3(0.5949,0,0.0783),Vector3(0.5796,0,0.1553),Vector3(0.5543,0,0.2296),Vector3(0.5196,0,0.3),Vector3(0.476,0,0.3653),Vector3(0.4243,0,0.4243),Vector3(0.3653,0,0.476),Vector3(0.3,0,0.5196),Vector3(0.2296,0,0.5543),Vector3(0.1553,0,0.5796),Vector3(0.0783,0,0.5949),Vector3(0,0,0.6),Vector3(-0.0783,0,0.5949),Vector3(-0.1553,0,0.5796),Vector3(-0.2296,0,0.5543),Vector3(-0.3,0,0.5196),Vector3(-0.3653,0,0.476),Vector3(-0.4243,0,0.4243),Vector3(-0.476,0,0.3653),Vector3(-0.5196,0,0.3),Vector3(-0.5543,0,0.2296),Vector3(-0.5796,0,0.1553),Vector3(-0.5949,0,0.0783),Vector3(-0.6,0,0),Vector3(-0.5949,0,-0.0783),Vector3(-0.5796,0,-0.1553),Vector3(-0.5543,0,-0.2296),Vector3(-0.5196,0,-0.3),Vector3(-0.476,0,-0.3653),Vector3(-0.4243,0,-0.4243),Vector3(-0.3653,0,-0.476),Vector3(-0.3,0,-0.5196),Vector3(-0.2296,0,-0.5543),Vector3(-0.1553,0,-0.5796),Vector3(-0.0783,0,-0.5949),Vector3(0,0,-0.6),Vector3(0.0783,0,-0.5949),Vector3(0.1553,0,-0.5796),Vector3(0.2296,0,-0.5543),Vector3(0.3,0,-0.5196),Vector3(0.3653,0,-0.476),Vector3(0.4243,0,-0.4243),Vector3(0.476,0,-0.3653),Vector3(0.5196,0,-0.3),Vector3(0.5543,0,-0.2296),Vector3(0.5796,0,-0.1553),Vector3(0.5949,0,-0.0783),Vector3(0.6,0,0)]);
{ METHOD .Geometry }
Shape2612.Geometry := Extrusion2615;
{ METHOD .FdChildren.Add }
Transform2611.FdChildren.Add(Shape2612);
{ METHOD .FdChildren.Add }
Transform2610.FdChildren.Add(Transform2611);
Group2616 := TGroupNode.Create;
CylinderSensor2617 := TCylinderSensorNode.Create;
CylinderSensor2617.Description := 'Y ring';
{ METHOD .FdChildren.Add }
Group2616.FdChildren.Add(CylinderSensor2617);
Transform2618 := TTransformNode.Create;
Transform2619 := TTransformNode.Create;
Shape2620 := TShapeNode.Create;
Appearance2621 := TAppearanceNode.Create;
Material2622 := TMaterialNode.Create;
Material2622.DiffuseColor := Vector3(0.2,0.9,0.2);
Material2622.EmissiveColor := Vector3(0.06,0.27,0.06);
{ METHOD .SetMaterial }
Appearance2621.Material := Material2622;
{ METHOD .Appearance }
Shape2620.Appearance := Appearance2621;
Extrusion2623 := TExtrusionNode.Create;
Extrusion2623.BeginCap := False;
Extrusion2623.EndCap := False;
Extrusion2623.Solid := False;
Extrusion2623.CreaseAngle := 1.57;
Extrusion2623.SetCrossSection([Vector2(0.045,0),Vector2(0.0318,0.0318),Vector2(0,0.045),Vector2(-0.0318,0.0318),Vector2(-0.045,0),Vector2(-0.0318,-0.0318),Vector2(0,-0.045),Vector2(0.0318,-0.0318),Vector2(0.045,0)]);
Extrusion2623.SetSpine([Vector3(0.48,0,0),Vector3(0.4759,0,0.0627),Vector3(0.4636,0,0.1242),Vector3(0.4435,0,0.1837),Vector3(0.4157,0,0.24),Vector3(0.3808,0,0.2922),Vector3(0.3394,0,0.3394),Vector3(0.2922,0,0.3808),Vector3(0.24,0,0.4157),Vector3(0.1837,0,0.4435),Vector3(0.1242,0,0.4636),Vector3(0.0627,0,0.4759),Vector3(0,0,0.48),Vector3(-0.0627,0,0.4759),Vector3(-0.1242,0,0.4636),Vector3(-0.1837,0,0.4435),Vector3(-0.24,0,0.4157),Vector3(-0.2922,0,0.3808),Vector3(-0.3394,0,0.3394),Vector3(-0.3808,0,0.2922),Vector3(-0.4157,0,0.24),Vector3(-0.4435,0,0.1837),Vector3(-0.4636,0,0.1242),Vector3(-0.4759,0,0.0627),Vector3(-0.48,0,0),Vector3(-0.4759,0,-0.0627),Vector3(-0.4636,0,-0.1242),Vector3(-0.4435,0,-0.1837),Vector3(-0.4157,0,-0.24),Vector3(-0.3808,0,-0.2922),Vector3(-0.3394,0,-0.3394),Vector3(-0.2922,0,-0.3808),Vector3(-0.24,0,-0.4157),Vector3(-0.1837,0,-0.4435),Vector3(-0.1242,0,-0.4636),Vector3(-0.0627,0,-0.4759),Vector3(0,0,-0.48),Vector3(0.0627,0,-0.4759),Vector3(0.1242,0,-0.4636),Vector3(0.1837,0,-0.4435),Vector3(0.24,0,-0.4157),Vector3(0.2922,0,-0.3808),Vector3(0.3394,0,-0.3394),Vector3(0.3808,0,-0.2922),Vector3(0.4157,0,-0.24),Vector3(0.4435,0,-0.1837),Vector3(0.4636,0,-0.1242),Vector3(0.4759,0,-0.0627),Vector3(0.48,0,0)]);
{ METHOD .Geometry }
Shape2620.Geometry := Extrusion2623;
{ METHOD .FdChildren.Add }
Transform2619.FdChildren.Add(Shape2620);
end;

procedure InitHAnimGimbalJointController22Part169;
begin

{ METHOD .FdChildren.Add }
Transform2618.FdChildren.Add(Transform2619);
Group2624 := TGroupNode.Create;
CylinderSensor2625 := TCylinderSensorNode.Create;
CylinderSensor2625.AxisRotation := Vector4(1,0,0,1.5708);
CylinderSensor2625.Description := 'Z ring';
{ METHOD .FdChildren.Add }
Group2624.FdChildren.Add(CylinderSensor2625);
Transform2626 := TTransformNode.Create;
Transform2627 := TTransformNode.Create;
Transform2627.Rotation := Vector4(1,0,0,1.5708);
Shape2628 := TShapeNode.Create;
Appearance2629 := TAppearanceNode.Create;
Material2630 := TMaterialNode.Create;
Material2630.DiffuseColor := Vector3(0.3,0.5,1);
Material2630.EmissiveColor := Vector3(0.09,0.15,0.3);
{ METHOD .SetMaterial }
Appearance2629.Material := Material2630;
{ METHOD .Appearance }
Shape2628.Appearance := Appearance2629;
Extrusion2631 := TExtrusionNode.Create;
Extrusion2631.BeginCap := False;
Extrusion2631.EndCap := False;
Extrusion2631.Solid := False;
Extrusion2631.CreaseAngle := 1.57;
Extrusion2631.SetCrossSection([Vector2(0.045,0),Vector2(0.0318,0.0318),Vector2(0,0.045),Vector2(-0.0318,0.0318),Vector2(-0.045,0),Vector2(-0.0318,-0.0318),Vector2(0,-0.045),Vector2(0.0318,-0.0318),Vector2(0.045,0)]);
Extrusion2631.SetSpine([Vector3(0.36,0,0),Vector3(0.3569,0,0.047),Vector3(0.3477,0,0.0932),Vector3(0.3326,0,0.1378),Vector3(0.3118,0,0.18),Vector3(0.2856,0,0.2192),Vector3(0.2546,0,0.2546),Vector3(0.2192,0,0.2856),Vector3(0.18,0,0.3118),Vector3(0.1378,0,0.3326),Vector3(0.0932,0,0.3477),Vector3(0.047,0,0.3569),Vector3(0,0,0.36),Vector3(-0.047,0,0.3569),Vector3(-0.0932,0,0.3477),Vector3(-0.1378,0,0.3326),Vector3(-0.18,0,0.3118),Vector3(-0.2192,0,0.2856),Vector3(-0.2546,0,0.2546),Vector3(-0.2856,0,0.2192),Vector3(-0.3118,0,0.18),Vector3(-0.3326,0,0.1378),Vector3(-0.3477,0,0.0932),Vector3(-0.3569,0,0.047),Vector3(-0.36,0,0),Vector3(-0.3569,0,-0.047),Vector3(-0.3477,0,-0.0932),Vector3(-0.3326,0,-0.1378),Vector3(-0.3118,0,-0.18),Vector3(-0.2856,0,-0.2192),Vector3(-0.2546,0,-0.2546),Vector3(-0.2192,0,-0.2856),Vector3(-0.18,0,-0.3118),Vector3(-0.1378,0,-0.3326),Vector3(-0.0932,0,-0.3477),Vector3(-0.047,0,-0.3569),Vector3(0,0,-0.36),Vector3(0.047,0,-0.3569),Vector3(0.0932,0,-0.3477),Vector3(0.1378,0,-0.3326),Vector3(0.18,0,-0.3118),Vector3(0.2192,0,-0.2856),Vector3(0.2546,0,-0.2546),Vector3(0.2856,0,-0.2192),Vector3(0.3118,0,-0.18),Vector3(0.3326,0,-0.1378),Vector3(0.3477,0,-0.0932),Vector3(0.3569,0,-0.047),Vector3(0.36,0,0)]);
{ METHOD .Geometry }
Shape2628.Geometry := Extrusion2631;
{ METHOD .FdChildren.Add }
Transform2627.FdChildren.Add(Shape2628);
{ METHOD .FdChildren.Add }
Transform2626.FdChildren.Add(Transform2627);
Transform2632 := TTransformNode.Create;
Transform2632.Translation := Vector3(0.15,0,0);
Transform2632.Rotation := Vector4(0,0,1,-1.5708);
Shape2633 := TShapeNode.Create;
Appearance2634 := TAppearanceNode.Create;
Material2635 := TMaterialNode.Create;
Material2635.DiffuseColor := Vector3(1,0,0);
Material2635.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance2634.Material := Material2635;
{ METHOD .Appearance }
Shape2633.Appearance := Appearance2634;
Cylinder2636 := TCylinderNode.Create;
Cylinder2636.Height := 0.3;
Cylinder2636.Radius := 0.015;
{ METHOD .Geometry }
Shape2633.Geometry := Cylinder2636;
end;

procedure InitHAnimGimbalJointController22Part170;
begin

{ METHOD .FdChildren.Add }
Transform2632.FdChildren.Add(Shape2633);
{ METHOD .FdChildren.Add }
Transform2626.FdChildren.Add(Transform2632);
Transform2637 := TTransformNode.Create;
Transform2637.Translation := Vector3(0,0.15,0);
Shape2638 := TShapeNode.Create;
Appearance2639 := TAppearanceNode.Create;
Material2640 := TMaterialNode.Create;
Material2640.DiffuseColor := Vector3(0,1,0);
Material2640.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance2639.Material := Material2640;
{ METHOD .Appearance }
Shape2638.Appearance := Appearance2639;
Cylinder2641 := TCylinderNode.Create;
Cylinder2641.Height := 0.3;
Cylinder2641.Radius := 0.015;
{ METHOD .Geometry }
Shape2638.Geometry := Cylinder2641;
{ METHOD .FdChildren.Add }
Transform2637.FdChildren.Add(Shape2638);
{ METHOD .FdChildren.Add }
Transform2626.FdChildren.Add(Transform2637);
Transform2642 := TTransformNode.Create;
Transform2642.Translation := Vector3(0,0,0.15);
Transform2642.Rotation := Vector4(1,0,0,1.5708);
Shape2643 := TShapeNode.Create;
Appearance2644 := TAppearanceNode.Create;
Material2645 := TMaterialNode.Create;
Material2645.DiffuseColor := Vector3(0,0,1);
Material2645.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance2644.Material := Material2645;
{ METHOD .Appearance }
Shape2643.Appearance := Appearance2644;
Cylinder2646 := TCylinderNode.Create;
Cylinder2646.Height := 0.3;
Cylinder2646.Radius := 0.015;
{ METHOD .Geometry }
Shape2643.Geometry := Cylinder2646;
{ METHOD .FdChildren.Add }
Transform2642.FdChildren.Add(Shape2643);
{ METHOD .FdChildren.Add }
Transform2626.FdChildren.Add(Transform2642);
{ METHOD .FdChildren.Add }
Group2624.FdChildren.Add(Transform2626);
{ METHOD .FdChildren.Add }
Transform2618.FdChildren.Add(Group2624);
{ METHOD .FdChildren.Add }
Group2616.FdChildren.Add(Transform2618);
{ METHOD .FdChildren.Add }
Transform2610.FdChildren.Add(Group2616);
{ METHOD .FdChildren.Add }
Group2608.FdChildren.Add(Transform2610);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2608);
Shape2647 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part171;
begin

Appearance2648 := TAppearanceNode.Create;
Material2649 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2648.Material := Material2649;
{ METHOD .Appearance }
Shape2647.Appearance := Appearance2648;
Sphere2650 := TSphereNode.Create;
Sphere2650.Radius := 0.05;
{ METHOD .Geometry }
Shape2647.Geometry := Sphere2650;
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Shape2647);
Transform2651 := TTransformNode.Create;
Transform2651.Translation := Vector3(0,-0.85,0);
Shape2652 := TShapeNode.Create;
Appearance2653 := TAppearanceNode.Create;
Material2654 := TMaterialNode.Create;
Material2654.DiffuseColor := Vector3(1,1,1);
Material2654.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2653.Material := Material2654;
{ METHOD .Appearance }
Shape2652.Appearance := Appearance2653;
Text2655 := TTextNode.Create;
Text2655.SetText(['GIMBAL']);
FontStyle2656 := TFontStyleNode.Create;
FontStyle2656.Justify := fjMIDDLE;
FontStyle2656.JustifyMinor := fjFIRST;
FontStyle2656.Size := 0.075;
FontStyle2656.Spacing := 1.2;
{ METHOD .FontStyle }
Text2655.FontStyle := FontStyle2656;
{ METHOD .Geometry }
Shape2652.Geometry := Text2655;
{ METHOD .FdChildren.Add }
Transform2651.FdChildren.Add(Shape2652);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Transform2651);
Group2657 := TGroupNode.Create;
TouchSensor2658 := TTouchSensorNode.Create;
TouchSensor2658.Description := 'previous joint (depth-first)';
{ METHOD .FdChildren.Add }
Group2657.FdChildren.Add(TouchSensor2658);
Transform2659 := TTransformNode.Create;
Transform2659.Translation := Vector3(-0.69,-1.5,0);
Shape2660 := TShapeNode.Create;
Appearance2661 := TAppearanceNode.Create;
Material2662 := TMaterialNode.Create;
Material2662.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2662.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2661.Material := Material2662;
end;

procedure InitHAnimGimbalJointController22Part172;
begin

{ METHOD .Appearance }
Shape2660.Appearance := Appearance2661;
Box2663 := TBoxNode.Create;
Box2663.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2660.Geometry := Box2663;
{ METHOD .FdChildren.Add }
Transform2659.FdChildren.Add(Shape2660);
Transform2664 := TTransformNode.Create;
Transform2664.Translation := Vector3(0,0,0.03);
Shape2665 := TShapeNode.Create;
Appearance2666 := TAppearanceNode.Create;
Material2667 := TMaterialNode.Create;
Material2667.DiffuseColor := Vector3(1,1,1);
Material2667.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2666.Material := Material2667;
{ METHOD .Appearance }
Shape2665.Appearance := Appearance2666;
Text2668 := TTextNode.Create;
Text2668.SetText(['PREV']);
FontStyle2669 := TFontStyleNode.Create;
FontStyle2669.Justify := fjMIDDLE;
FontStyle2669.JustifyMinor := fjMIDDLE;
FontStyle2669.Size := 0.06;
{ METHOD .FontStyle }
Text2668.FontStyle := FontStyle2669;
{ METHOD .Geometry }
Shape2665.Geometry := Text2668;
{ METHOD .FdChildren.Add }
Transform2664.FdChildren.Add(Shape2665);
{ METHOD .FdChildren.Add }
Transform2659.FdChildren.Add(Transform2664);
{ METHOD .FdChildren.Add }
Group2657.FdChildren.Add(Transform2659);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2657);
Group2670 := TGroupNode.Create;
TouchSensor2671 := TTouchSensorNode.Create;
TouchSensor2671.Description := 'next joint (depth-first)';
{ METHOD .FdChildren.Add }
Group2670.FdChildren.Add(TouchSensor2671);
Transform2672 := TTransformNode.Create;
Transform2672.Translation := Vector3(-0.23,-1.5,0);
Shape2673 := TShapeNode.Create;
Appearance2674 := TAppearanceNode.Create;
Material2675 := TMaterialNode.Create;
Material2675.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2675.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2674.Material := Material2675;
{ METHOD .Appearance }
Shape2673.Appearance := Appearance2674;
Box2676 := TBoxNode.Create;
end;

procedure InitHAnimGimbalJointController22Part173;
begin

Box2676.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2673.Geometry := Box2676;
{ METHOD .FdChildren.Add }
Transform2672.FdChildren.Add(Shape2673);
Transform2677 := TTransformNode.Create;
Transform2677.Translation := Vector3(0,0,0.03);
Shape2678 := TShapeNode.Create;
Appearance2679 := TAppearanceNode.Create;
Material2680 := TMaterialNode.Create;
Material2680.DiffuseColor := Vector3(1,1,1);
Material2680.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2679.Material := Material2680;
{ METHOD .Appearance }
Shape2678.Appearance := Appearance2679;
Text2681 := TTextNode.Create;
Text2681.SetText(['NEXT']);
FontStyle2682 := TFontStyleNode.Create;
FontStyle2682.Justify := fjMIDDLE;
FontStyle2682.JustifyMinor := fjMIDDLE;
FontStyle2682.Size := 0.06;
{ METHOD .FontStyle }
Text2681.FontStyle := FontStyle2682;
{ METHOD .Geometry }
Shape2678.Geometry := Text2681;
{ METHOD .FdChildren.Add }
Transform2677.FdChildren.Add(Shape2678);
{ METHOD .FdChildren.Add }
Transform2672.FdChildren.Add(Transform2677);
{ METHOD .FdChildren.Add }
Group2670.FdChildren.Add(Transform2672);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2670);
Group2683 := TGroupNode.Create;
TouchSensor2684 := TTouchSensorNode.Create;
TouchSensor2684.Description := 'up: parent joint';
{ METHOD .FdChildren.Add }
Group2683.FdChildren.Add(TouchSensor2684);
Transform2685 := TTransformNode.Create;
Transform2685.Translation := Vector3(0.23,-1.5,0);
Shape2686 := TShapeNode.Create;
Appearance2687 := TAppearanceNode.Create;
Material2688 := TMaterialNode.Create;
Material2688.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2688.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2687.Material := Material2688;
{ METHOD .Appearance }
Shape2686.Appearance := Appearance2687;
Box2689 := TBoxNode.Create;
Box2689.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2686.Geometry := Box2689;
end;

procedure InitHAnimGimbalJointController22Part174;
begin

{ METHOD .FdChildren.Add }
Transform2685.FdChildren.Add(Shape2686);
Transform2690 := TTransformNode.Create;
Transform2690.Translation := Vector3(0,0,0.03);
Shape2691 := TShapeNode.Create;
Appearance2692 := TAppearanceNode.Create;
Material2693 := TMaterialNode.Create;
Material2693.DiffuseColor := Vector3(1,1,1);
Material2693.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2692.Material := Material2693;
{ METHOD .Appearance }
Shape2691.Appearance := Appearance2692;
Text2694 := TTextNode.Create;
Text2694.SetText(['PARENT']);
FontStyle2695 := TFontStyleNode.Create;
FontStyle2695.Justify := fjMIDDLE;
FontStyle2695.JustifyMinor := fjMIDDLE;
FontStyle2695.Size := 0.06;
{ METHOD .FontStyle }
Text2694.FontStyle := FontStyle2695;
{ METHOD .Geometry }
Shape2691.Geometry := Text2694;
{ METHOD .FdChildren.Add }
Transform2690.FdChildren.Add(Shape2691);
{ METHOD .FdChildren.Add }
Transform2685.FdChildren.Add(Transform2690);
{ METHOD .FdChildren.Add }
Group2683.FdChildren.Add(Transform2685);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2683);
Group2696 := TGroupNode.Create;
TouchSensor2697 := TTouchSensorNode.Create;
TouchSensor2697.Description := 'down: first child joint';
{ METHOD .FdChildren.Add }
Group2696.FdChildren.Add(TouchSensor2697);
Transform2698 := TTransformNode.Create;
Transform2698.Translation := Vector3(0.69,-1.5,0);
Shape2699 := TShapeNode.Create;
Appearance2700 := TAppearanceNode.Create;
Material2701 := TMaterialNode.Create;
Material2701.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2701.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2700.Material := Material2701;
{ METHOD .Appearance }
Shape2699.Appearance := Appearance2700;
Box2702 := TBoxNode.Create;
Box2702.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2699.Geometry := Box2702;
{ METHOD .FdChildren.Add }
Transform2698.FdChildren.Add(Shape2699);
Transform2703 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part175;
begin

Transform2703.Translation := Vector3(0,0,0.03);
Shape2704 := TShapeNode.Create;
Appearance2705 := TAppearanceNode.Create;
Material2706 := TMaterialNode.Create;
Material2706.DiffuseColor := Vector3(1,1,1);
Material2706.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2705.Material := Material2706;
{ METHOD .Appearance }
Shape2704.Appearance := Appearance2705;
Text2707 := TTextNode.Create;
Text2707.SetText(['CHILD']);
FontStyle2708 := TFontStyleNode.Create;
FontStyle2708.Justify := fjMIDDLE;
FontStyle2708.JustifyMinor := fjMIDDLE;
FontStyle2708.Size := 0.06;
{ METHOD .FontStyle }
Text2707.FontStyle := FontStyle2708;
{ METHOD .Geometry }
Shape2704.Geometry := Text2707;
{ METHOD .FdChildren.Add }
Transform2703.FdChildren.Add(Shape2704);
{ METHOD .FdChildren.Add }
Transform2698.FdChildren.Add(Transform2703);
{ METHOD .FdChildren.Add }
Group2696.FdChildren.Add(Transform2698);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2696);
Group2709 := TGroupNode.Create;
TouchSensor2710 := TTouchSensorNode.Create;
TouchSensor2710.Description := 'previous sibling joint';
{ METHOD .FdChildren.Add }
Group2709.FdChildren.Add(TouchSensor2710);
Transform2711 := TTransformNode.Create;
Transform2711.Translation := Vector3(-0.69,-1.72,0);
Shape2712 := TShapeNode.Create;
Appearance2713 := TAppearanceNode.Create;
Material2714 := TMaterialNode.Create;
Material2714.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2714.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2713.Material := Material2714;
{ METHOD .Appearance }
Shape2712.Appearance := Appearance2713;
Box2715 := TBoxNode.Create;
Box2715.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2712.Geometry := Box2715;
{ METHOD .FdChildren.Add }
Transform2711.FdChildren.Add(Shape2712);
Transform2716 := TTransformNode.Create;
Transform2716.Translation := Vector3(0,0,0.03);
Shape2717 := TShapeNode.Create;
end;

procedure InitHAnimGimbalJointController22Part176;
begin

Appearance2718 := TAppearanceNode.Create;
Material2719 := TMaterialNode.Create;
Material2719.DiffuseColor := Vector3(1,1,1);
Material2719.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2718.Material := Material2719;
{ METHOD .Appearance }
Shape2717.Appearance := Appearance2718;
Text2720 := TTextNode.Create;
Text2720.SetText(['SIB -']);
FontStyle2721 := TFontStyleNode.Create;
FontStyle2721.Justify := fjMIDDLE;
FontStyle2721.JustifyMinor := fjMIDDLE;
FontStyle2721.Size := 0.06;
{ METHOD .FontStyle }
Text2720.FontStyle := FontStyle2721;
{ METHOD .Geometry }
Shape2717.Geometry := Text2720;
{ METHOD .FdChildren.Add }
Transform2716.FdChildren.Add(Shape2717);
{ METHOD .FdChildren.Add }
Transform2711.FdChildren.Add(Transform2716);
{ METHOD .FdChildren.Add }
Group2709.FdChildren.Add(Transform2711);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2709);
Group2722 := TGroupNode.Create;
TouchSensor2723 := TTouchSensorNode.Create;
TouchSensor2723.Description := 'next sibling joint';
{ METHOD .FdChildren.Add }
Group2722.FdChildren.Add(TouchSensor2723);
Transform2724 := TTransformNode.Create;
Transform2724.Translation := Vector3(-0.23,-1.72,0);
Shape2725 := TShapeNode.Create;
Appearance2726 := TAppearanceNode.Create;
Material2727 := TMaterialNode.Create;
Material2727.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2727.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2726.Material := Material2727;
{ METHOD .Appearance }
Shape2725.Appearance := Appearance2726;
Box2728 := TBoxNode.Create;
Box2728.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2725.Geometry := Box2728;
{ METHOD .FdChildren.Add }
Transform2724.FdChildren.Add(Shape2725);
Transform2729 := TTransformNode.Create;
Transform2729.Translation := Vector3(0,0,0.03);
Shape2730 := TShapeNode.Create;
Appearance2731 := TAppearanceNode.Create;
Material2732 := TMaterialNode.Create;
end;

procedure InitHAnimGimbalJointController22Part177;
begin

Material2732.DiffuseColor := Vector3(1,1,1);
Material2732.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2731.Material := Material2732;
{ METHOD .Appearance }
Shape2730.Appearance := Appearance2731;
Text2733 := TTextNode.Create;
Text2733.SetText(['SIB +']);
FontStyle2734 := TFontStyleNode.Create;
FontStyle2734.Justify := fjMIDDLE;
FontStyle2734.JustifyMinor := fjMIDDLE;
FontStyle2734.Size := 0.06;
{ METHOD .FontStyle }
Text2733.FontStyle := FontStyle2734;
{ METHOD .Geometry }
Shape2730.Geometry := Text2733;
{ METHOD .FdChildren.Add }
Transform2729.FdChildren.Add(Shape2730);
{ METHOD .FdChildren.Add }
Transform2724.FdChildren.Add(Transform2729);
{ METHOD .FdChildren.Add }
Group2722.FdChildren.Add(Transform2724);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2722);
Group2735 := TGroupNode.Create;
TouchSensor2736 := TTouchSensorNode.Create;
TouchSensor2736.Description := 'reset selected joint';
{ METHOD .FdChildren.Add }
Group2735.FdChildren.Add(TouchSensor2736);
Transform2737 := TTransformNode.Create;
Transform2737.Translation := Vector3(0.23,-1.72,0);
Shape2738 := TShapeNode.Create;
Appearance2739 := TAppearanceNode.Create;
Material2740 := TMaterialNode.Create;
Material2740.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2740.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2739.Material := Material2740;
{ METHOD .Appearance }
Shape2738.Appearance := Appearance2739;
Box2741 := TBoxNode.Create;
Box2741.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2738.Geometry := Box2741;
{ METHOD .FdChildren.Add }
Transform2737.FdChildren.Add(Shape2738);
Transform2742 := TTransformNode.Create;
Transform2742.Translation := Vector3(0,0,0.03);
Shape2743 := TShapeNode.Create;
Appearance2744 := TAppearanceNode.Create;
Material2745 := TMaterialNode.Create;
Material2745.DiffuseColor := Vector3(1,1,1);
Material2745.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimGimbalJointController22Part178;
begin

{ METHOD .SetMaterial }
Appearance2744.Material := Material2745;
{ METHOD .Appearance }
Shape2743.Appearance := Appearance2744;
Text2746 := TTextNode.Create;
Text2746.SetText(['RESET']);
FontStyle2747 := TFontStyleNode.Create;
FontStyle2747.Justify := fjMIDDLE;
FontStyle2747.JustifyMinor := fjMIDDLE;
FontStyle2747.Size := 0.06;
{ METHOD .FontStyle }
Text2746.FontStyle := FontStyle2747;
{ METHOD .Geometry }
Shape2743.Geometry := Text2746;
{ METHOD .FdChildren.Add }
Transform2742.FdChildren.Add(Shape2743);
{ METHOD .FdChildren.Add }
Transform2737.FdChildren.Add(Transform2742);
{ METHOD .FdChildren.Add }
Group2735.FdChildren.Add(Transform2737);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2735);
Group2748 := TGroupNode.Create;
TouchSensor2749 := TTouchSensorNode.Create;
TouchSensor2749.Description := 'deselect joint';
{ METHOD .FdChildren.Add }
Group2748.FdChildren.Add(TouchSensor2749);
Transform2750 := TTransformNode.Create;
Transform2750.Translation := Vector3(0.69,-1.72,0);
Shape2751 := TShapeNode.Create;
Appearance2752 := TAppearanceNode.Create;
Material2753 := TMaterialNode.Create;
Material2753.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2753.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2752.Material := Material2753;
{ METHOD .Appearance }
Shape2751.Appearance := Appearance2752;
Box2754 := TBoxNode.Create;
Box2754.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2751.Geometry := Box2754;
{ METHOD .FdChildren.Add }
Transform2750.FdChildren.Add(Shape2751);
Transform2755 := TTransformNode.Create;
Transform2755.Translation := Vector3(0,0,0.03);
Shape2756 := TShapeNode.Create;
Appearance2757 := TAppearanceNode.Create;
Material2758 := TMaterialNode.Create;
Material2758.DiffuseColor := Vector3(1,1,1);
Material2758.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2757.Material := Material2758;
{ METHOD .Appearance }
Shape2756.Appearance := Appearance2757;
end;

procedure InitHAnimGimbalJointController22Part179;
begin

Text2759 := TTextNode.Create;
Text2759.SetText(['DESELECT']);
FontStyle2760 := TFontStyleNode.Create;
FontStyle2760.Justify := fjMIDDLE;
FontStyle2760.JustifyMinor := fjMIDDLE;
FontStyle2760.Size := 0.06;
{ METHOD .FontStyle }
Text2759.FontStyle := FontStyle2760;
{ METHOD .Geometry }
Shape2756.Geometry := Text2759;
{ METHOD .FdChildren.Add }
Transform2755.FdChildren.Add(Shape2756);
{ METHOD .FdChildren.Add }
Transform2750.FdChildren.Add(Transform2755);
{ METHOD .FdChildren.Add }
Group2748.FdChildren.Add(Transform2750);
{ METHOD .FdChildren.Add }
Transform2607.FdChildren.Add(Group2748);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Transform2607);
{ ==================== HUMANOID IMPORT / EXPORT BUTTONS ==================== }
Transform2761 := TTransformNode.Create;
Transform2761.Translation := Vector3(4.1,3.5,0);
Transform2761.Scale := Vector3(2.9,2.9,1);
Group2762 := TGroupNode.Create;
TouchSensor2763 := TTouchSensorNode.Create;
TouchSensor2763.Description := 'export entire humanoid as X3D scene';
{ METHOD .FdChildren.Add }
Group2762.FdChildren.Add(TouchSensor2763);
Transform2764 := TTransformNode.Create;
Transform2764.Translation := Vector3(0.23,0,0);
Shape2765 := TShapeNode.Create;
Appearance2766 := TAppearanceNode.Create;
Material2767 := TMaterialNode.Create;
Material2767.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2767.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2766.Material := Material2767;
{ METHOD .Appearance }
Shape2765.Appearance := Appearance2766;
Box2768 := TBoxNode.Create;
Box2768.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2765.Geometry := Box2768;
{ METHOD .FdChildren.Add }
Transform2764.FdChildren.Add(Shape2765);
Transform2769 := TTransformNode.Create;
Transform2769.Translation := Vector3(0,0,0.03);
Shape2770 := TShapeNode.Create;
Appearance2771 := TAppearanceNode.Create;
Material2772 := TMaterialNode.Create;
Material2772.DiffuseColor := Vector3(1,1,1);
Material2772.EmissiveColor := Vector3(1,1,1);
end;

procedure InitHAnimGimbalJointController22Part180;
begin

{ METHOD .SetMaterial }
Appearance2771.Material := Material2772;
{ METHOD .Appearance }
Shape2770.Appearance := Appearance2771;
Text2773 := TTextNode.Create;
Text2773.SetText(['EXPORT']);
FontStyle2774 := TFontStyleNode.Create;
FontStyle2774.Justify := fjMIDDLE;
FontStyle2774.JustifyMinor := fjMIDDLE;
FontStyle2774.Size := 0.06;
{ METHOD .FontStyle }
Text2773.FontStyle := FontStyle2774;
{ METHOD .Geometry }
Shape2770.Geometry := Text2773;
{ METHOD .FdChildren.Add }
Transform2769.FdChildren.Add(Shape2770);
{ METHOD .FdChildren.Add }
Transform2764.FdChildren.Add(Transform2769);
{ METHOD .FdChildren.Add }
Group2762.FdChildren.Add(Transform2764);
{ METHOD .FdChildren.Add }
Transform2761.FdChildren.Add(Group2762);
Group2775 := TGroupNode.Create;
TouchSensor2776 := TTouchSensorNode.Create;
TouchSensor2776.Description := 'import humanoid pose from X3D scene';
{ METHOD .FdChildren.Add }
Group2775.FdChildren.Add(TouchSensor2776);
Transform2777 := TTransformNode.Create;
Transform2777.Translation := Vector3(-0.23,0,0);
Shape2778 := TShapeNode.Create;
Appearance2779 := TAppearanceNode.Create;
Material2780 := TMaterialNode.Create;
Material2780.DiffuseColor := Vector3(0.2,0.2,0.28);
Material2780.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance2779.Material := Material2780;
{ METHOD .Appearance }
Shape2778.Appearance := Appearance2779;
Box2781 := TBoxNode.Create;
Box2781.Size := Vector3(0.42,0.14,0.04);
{ METHOD .Geometry }
Shape2778.Geometry := Box2781;
{ METHOD .FdChildren.Add }
Transform2777.FdChildren.Add(Shape2778);
Transform2782 := TTransformNode.Create;
Transform2782.Translation := Vector3(0,0,0.03);
Shape2783 := TShapeNode.Create;
Appearance2784 := TAppearanceNode.Create;
Material2785 := TMaterialNode.Create;
Material2785.DiffuseColor := Vector3(1,1,1);
Material2785.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2784.Material := Material2785;
{ METHOD .Appearance }
Shape2783.Appearance := Appearance2784;
end;

procedure InitHAnimGimbalJointController22Part181;
begin

Text2786 := TTextNode.Create;
Text2786.SetText(['IMPORT']);
FontStyle2787 := TFontStyleNode.Create;
FontStyle2787.Justify := fjMIDDLE;
FontStyle2787.JustifyMinor := fjMIDDLE;
FontStyle2787.Size := 0.06;
{ METHOD .FontStyle }
Text2786.FontStyle := FontStyle2787;
{ METHOD .Geometry }
Shape2783.Geometry := Text2786;
{ METHOD .FdChildren.Add }
Transform2782.FdChildren.Add(Shape2783);
{ METHOD .FdChildren.Add }
Transform2777.FdChildren.Add(Transform2782);
{ METHOD .FdChildren.Add }
Group2775.FdChildren.Add(Transform2777);
{ METHOD .FdChildren.Add }
Transform2761.FdChildren.Add(Group2775);
Transform2788 := TTransformNode.Create;
Transform2788.Translation := Vector3(0,-0.14,0);
Shape2789 := TShapeNode.Create;
Appearance2790 := TAppearanceNode.Create;
Material2791 := TMaterialNode.Create;
Material2791.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2790.Material := Material2791;
{ METHOD .Appearance }
Shape2789.Appearance := Appearance2790;
Text2792 := TTextNode.Create;
Text2792.SetText(['humanoid X3D import / export']);
FontStyle2793 := TFontStyleNode.Create;
FontStyle2793.Justify := fjMIDDLE;
FontStyle2793.JustifyMinor := fjMIDDLE;
FontStyle2793.Size := 0.045;
{ METHOD .FontStyle }
Text2792.FontStyle := FontStyle2793;
{ METHOD .Geometry }
Shape2789.Geometry := Text2792;
{ METHOD .FdChildren.Add }
Transform2788.FdChildren.Add(Shape2789);
{ METHOD .FdChildren.Add }
Transform2761.FdChildren.Add(Transform2788);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Transform2761);
{ ==================== SLIDER / INPUT / OUTPUT PANEL ==================== }
Transform2794 := TTransformNode.Create;
Transform2794.Translation := Vector3(-4.6,3.2,0);
Transform2794.Scale := Vector3(1.6,1.6,0.8);
Transform2795 := TTransformNode.Create;
Transform2795.Translation := Vector3(0,-2.2,-0.03);
Shape2796 := TShapeNode.Create;
Appearance2797 := TAppearanceNode.Create;
Material2798 := TMaterialNode.Create;
Material2798.DiffuseColor := Vector3(0.05,0.06,0.1);
end;

procedure InitHAnimGimbalJointController22Part182;
begin

Material2798.Transparency := 0.25;
{ METHOD .SetMaterial }
Appearance2797.Material := Material2798;
{ METHOD .Appearance }
Shape2796.Appearance := Appearance2797;
Box2799 := TBoxNode.Create;
Box2799.Size := Vector3(3.2,4.5,0.01);
{ METHOD .Geometry }
Shape2796.Geometry := Box2799;
{ METHOD .FdChildren.Add }
Transform2795.FdChildren.Add(Shape2796);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2795);
Transform2800 := TTransformNode.Create;
Transform2800.Translation := Vector3(0,-0.22,0.01);
Shape2801 := TShapeNode.Create;
Appearance2802 := TAppearanceNode.Create;
Material2803 := TMaterialNode.Create;
Material2803.DiffuseColor := Vector3(1,1,1);
Material2803.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2802.Material := Material2803;
{ METHOD .Appearance }
Shape2801.Appearance := Appearance2802;
Text2804 := TTextNode.Create;
Text2804.SetText(['JOINT ROTATION (degrees)']);
FontStyle2805 := TFontStyleNode.Create;
FontStyle2805.Justify := fjMIDDLE;
FontStyle2805.JustifyMinor := fjMIDDLE;
FontStyle2805.Size := 0.16;
{ METHOD .FontStyle }
Text2804.FontStyle := FontStyle2805;
{ METHOD .Geometry }
Shape2801.Geometry := Text2804;
{ METHOD .FdChildren.Add }
Transform2800.FdChildren.Add(Shape2801);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2800);
{ ===== axis X ===== }
Transform2806 := TTransformNode.Create;
Transform2806.Translation := Vector3(0,-0.8,0);
Transform2807 := TTransformNode.Create;
Transform2807.Translation := Vector3(-1.25,0,0.01);
Shape2808 := TShapeNode.Create;
Appearance2809 := TAppearanceNode.Create;
Material2810 := TMaterialNode.Create;
Material2810.DiffuseColor := Vector3(1,0.2,0.2);
Material2810.EmissiveColor := Vector3(1,0.2,0.2);
{ METHOD .SetMaterial }
Appearance2809.Material := Material2810;
{ METHOD .Appearance }
Shape2808.Appearance := Appearance2809;
Text2811 := TTextNode.Create;
Text2811.SetText(['X']);
end;

procedure InitHAnimGimbalJointController22Part183;
begin

FontStyle2812 := TFontStyleNode.Create;
FontStyle2812.Justify := fjMIDDLE;
FontStyle2812.JustifyMinor := fjMIDDLE;
FontStyle2812.Size := 0.26;
{ METHOD .FontStyle }
Text2811.FontStyle := FontStyle2812;
{ METHOD .Geometry }
Shape2808.Geometry := Text2811;
{ METHOD .FdChildren.Add }
Transform2807.FdChildren.Add(Shape2808);
{ METHOD .FdChildren.Add }
Transform2806.FdChildren.Add(Transform2807);
Transform2813 := TTransformNode.Create;
Transform2813.Translation := Vector3(-0.1,0,0);
Shape2814 := TShapeNode.Create;
Appearance2815 := TAppearanceNode.Create;
Material2816 := TMaterialNode.Create;
Material2816.DiffuseColor := Vector3(0.55,0.55,0.6);
Material2816.EmissiveColor := Vector3(0.15,0.15,0.2);
{ METHOD .SetMaterial }
Appearance2815.Material := Material2816;
{ METHOD .Appearance }
Shape2814.Appearance := Appearance2815;
Box2817 := TBoxNode.Create;
Box2817.Size := Vector3(1.5,0.04,0.03);
{ METHOD .Geometry }
Shape2814.Geometry := Box2817;
{ METHOD .FdChildren.Add }
Transform2813.FdChildren.Add(Shape2814);
Transform2818 := TTransformNode.Create;
Transform2818.Translation := Vector3(-0.75,0,0);
Shape2819 := TShapeNode.Create;
Appearance2820 := TAppearanceNode.Create;
Material2821 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2820.Material := Material2821;
{ METHOD .Appearance }
Shape2819.Appearance := Appearance2820;
Box2822 := TBoxNode.Create;
Box2822.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape2819.Geometry := Box2822;
{ METHOD .FdChildren.Add }
Transform2818.FdChildren.Add(Shape2819);
{ METHOD .FdChildren.Add }
Transform2813.FdChildren.Add(Transform2818);
Transform2823 := TTransformNode.Create;
Transform2823.Translation := Vector3(0.75,0,0);
Shape2824 := TShapeNode.Create;
Appearance2825 := TAppearanceNode.Create;
Material2826 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2825.Material := Material2826;
{ METHOD .Appearance }
Shape2824.Appearance := Appearance2825;
end;

procedure InitHAnimGimbalJointController22Part184;
begin

Box2827 := TBoxNode.Create;
Box2827.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape2824.Geometry := Box2827;
{ METHOD .FdChildren.Add }
Transform2823.FdChildren.Add(Shape2824);
{ METHOD .FdChildren.Add }
Transform2813.FdChildren.Add(Transform2823);
Group2828 := TGroupNode.Create;
PlaneSensor2829 := TPlaneSensorNode.Create;
PlaneSensor2829.Description := 'X rotation slider';
PlaneSensor2829.MinPosition := Vector2(-0.75,0);
PlaneSensor2829.MaxPosition := Vector2(0.75,0);
{ METHOD .FdChildren.Add }
Group2828.FdChildren.Add(PlaneSensor2829);
Transform2830 := TTransformNode.Create;
Shape2831 := TShapeNode.Create;
Appearance2832 := TAppearanceNode.Create;
Material2833 := TMaterialNode.Create;
Material2833.DiffuseColor := Vector3(1,0.2,0.2);
Material2833.EmissiveColor := Vector3(0.5,0.1,0.1);
{ METHOD .SetMaterial }
Appearance2832.Material := Material2833;
{ METHOD .Appearance }
Shape2831.Appearance := Appearance2832;
Box2834 := TBoxNode.Create;
Box2834.Size := Vector3(0.12,0.3,0.08);
{ METHOD .Geometry }
Shape2831.Geometry := Box2834;
{ METHOD .FdChildren.Add }
Transform2830.FdChildren.Add(Shape2831);
{ METHOD .FdChildren.Add }
Group2828.FdChildren.Add(Transform2830);
{ METHOD .FdChildren.Add }
Transform2813.FdChildren.Add(Group2828);
Transform2835 := TTransformNode.Create;
Transform2835.Translation := Vector3(-0.75,-0.26,0.01);
Shape2836 := TShapeNode.Create;
Appearance2837 := TAppearanceNode.Create;
Material2838 := TMaterialNode.Create;
Material2838.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2837.Material := Material2838;
{ METHOD .Appearance }
Shape2836.Appearance := Appearance2837;
Text2839 := TTextNode.Create;
Text2839.SetText(['-']);
FontStyle2840 := TFontStyleNode.Create;
FontStyle2840.Justify := fjMIDDLE;
FontStyle2840.JustifyMinor := fjMIDDLE;
FontStyle2840.Size := 0.1;
{ METHOD .FontStyle }
Text2839.FontStyle := FontStyle2840;
end;

procedure InitHAnimGimbalJointController22Part185;
begin

{ METHOD .Geometry }
Shape2836.Geometry := Text2839;
{ METHOD .FdChildren.Add }
Transform2835.FdChildren.Add(Shape2836);
{ METHOD .FdChildren.Add }
Transform2813.FdChildren.Add(Transform2835);
Transform2841 := TTransformNode.Create;
Transform2841.Translation := Vector3(0.75,-0.26,0.01);
Shape2842 := TShapeNode.Create;
Appearance2843 := TAppearanceNode.Create;
Material2844 := TMaterialNode.Create;
Material2844.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2843.Material := Material2844;
{ METHOD .Appearance }
Shape2842.Appearance := Appearance2843;
Text2845 := TTextNode.Create;
Text2845.SetText(['-']);
FontStyle2846 := TFontStyleNode.Create;
FontStyle2846.Justify := fjMIDDLE;
FontStyle2846.JustifyMinor := fjMIDDLE;
FontStyle2846.Size := 0.1;
{ METHOD .FontStyle }
Text2845.FontStyle := FontStyle2846;
{ METHOD .Geometry }
Shape2842.Geometry := Text2845;
{ METHOD .FdChildren.Add }
Transform2841.FdChildren.Add(Shape2842);
{ METHOD .FdChildren.Add }
Transform2813.FdChildren.Add(Transform2841);
{ METHOD .FdChildren.Add }
Transform2806.FdChildren.Add(Transform2813);
Transform2847 := TTransformNode.Create;
Transform2847.Translation := Vector3(1.1,0,0);
Group2848 := TGroupNode.Create;
TouchSensor2849 := TTouchSensorNode.Create;
TouchSensor2849.Description := 'click, type degrees, press Enter';
{ METHOD .FdChildren.Add }
Group2848.FdChildren.Add(TouchSensor2849);
Shape2850 := TShapeNode.Create;
Appearance2851 := TAppearanceNode.Create;
Material2852 := TMaterialNode.Create;
Material2852.DiffuseColor := Vector3(0.12,0.12,0.18);
{ METHOD .SetMaterial }
Appearance2851.Material := Material2852;
{ METHOD .Appearance }
Shape2850.Appearance := Appearance2851;
Box2853 := TBoxNode.Create;
Box2853.Size := Vector3(0.8,0.34,0.02);
{ METHOD .Geometry }
Shape2850.Geometry := Box2853;
{ METHOD .FdChildren.Add }
Group2848.FdChildren.Add(Shape2850);
{ METHOD .FdChildren.Add }
Transform2847.FdChildren.Add(Group2848);
Transform2854 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part186;
begin

Transform2854.Translation := Vector3(0,0,0.02);
Shape2855 := TShapeNode.Create;
Appearance2856 := TAppearanceNode.Create;
Material2857 := TMaterialNode.Create;
Material2857.DiffuseColor := Vector3(1,1,0.8);
Material2857.EmissiveColor := Vector3(1,1,0.8);
{ METHOD .SetMaterial }
Appearance2856.Material := Material2857;
{ METHOD .Appearance }
Shape2855.Appearance := Appearance2856;
Text2858 := TTextNode.Create;
Text2858.SetText(['-']);
FontStyle2859 := TFontStyleNode.Create;
FontStyle2859.Justify := fjMIDDLE;
FontStyle2859.JustifyMinor := fjMIDDLE;
FontStyle2859.Size := 0.14;
{ METHOD .FontStyle }
Text2858.FontStyle := FontStyle2859;
{ METHOD .Geometry }
Shape2855.Geometry := Text2858;
{ METHOD .FdChildren.Add }
Transform2854.FdChildren.Add(Shape2855);
{ METHOD .FdChildren.Add }
Transform2847.FdChildren.Add(Transform2854);
{ METHOD .FdChildren.Add }
Transform2806.FdChildren.Add(Transform2847);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2806);
{ ===== axis Y ===== }
Transform2860 := TTransformNode.Create;
Transform2860.Translation := Vector3(0,-1.55,0);
Transform2861 := TTransformNode.Create;
Transform2861.Translation := Vector3(-1.25,0,0.01);
Shape2862 := TShapeNode.Create;
Appearance2863 := TAppearanceNode.Create;
Material2864 := TMaterialNode.Create;
Material2864.DiffuseColor := Vector3(0.2,0.9,0.2);
Material2864.EmissiveColor := Vector3(0.2,0.9,0.2);
{ METHOD .SetMaterial }
Appearance2863.Material := Material2864;
{ METHOD .Appearance }
Shape2862.Appearance := Appearance2863;
Text2865 := TTextNode.Create;
Text2865.SetText(['Y']);
FontStyle2866 := TFontStyleNode.Create;
FontStyle2866.Justify := fjMIDDLE;
FontStyle2866.JustifyMinor := fjMIDDLE;
FontStyle2866.Size := 0.26;
{ METHOD .FontStyle }
Text2865.FontStyle := FontStyle2866;
{ METHOD .Geometry }
Shape2862.Geometry := Text2865;
{ METHOD .FdChildren.Add }
Transform2861.FdChildren.Add(Shape2862);
end;

procedure InitHAnimGimbalJointController22Part187;
begin

{ METHOD .FdChildren.Add }
Transform2860.FdChildren.Add(Transform2861);
Transform2867 := TTransformNode.Create;
Transform2867.Translation := Vector3(-0.1,0,0);
Shape2868 := TShapeNode.Create;
Appearance2869 := TAppearanceNode.Create;
Material2870 := TMaterialNode.Create;
Material2870.DiffuseColor := Vector3(0.55,0.55,0.6);
Material2870.EmissiveColor := Vector3(0.15,0.15,0.2);
{ METHOD .SetMaterial }
Appearance2869.Material := Material2870;
{ METHOD .Appearance }
Shape2868.Appearance := Appearance2869;
Box2871 := TBoxNode.Create;
Box2871.Size := Vector3(1.5,0.04,0.03);
{ METHOD .Geometry }
Shape2868.Geometry := Box2871;
{ METHOD .FdChildren.Add }
Transform2867.FdChildren.Add(Shape2868);
Transform2872 := TTransformNode.Create;
Transform2872.Translation := Vector3(-0.75,0,0);
Shape2873 := TShapeNode.Create;
Appearance2874 := TAppearanceNode.Create;
Material2875 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2874.Material := Material2875;
{ METHOD .Appearance }
Shape2873.Appearance := Appearance2874;
Box2876 := TBoxNode.Create;
Box2876.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape2873.Geometry := Box2876;
{ METHOD .FdChildren.Add }
Transform2872.FdChildren.Add(Shape2873);
{ METHOD .FdChildren.Add }
Transform2867.FdChildren.Add(Transform2872);
Transform2877 := TTransformNode.Create;
Transform2877.Translation := Vector3(0.75,0,0);
Shape2878 := TShapeNode.Create;
Appearance2879 := TAppearanceNode.Create;
Material2880 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2879.Material := Material2880;
{ METHOD .Appearance }
Shape2878.Appearance := Appearance2879;
Box2881 := TBoxNode.Create;
Box2881.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape2878.Geometry := Box2881;
{ METHOD .FdChildren.Add }
Transform2877.FdChildren.Add(Shape2878);
{ METHOD .FdChildren.Add }
Transform2867.FdChildren.Add(Transform2877);
Group2882 := TGroupNode.Create;
PlaneSensor2883 := TPlaneSensorNode.Create;
end;

procedure InitHAnimGimbalJointController22Part188;
begin

PlaneSensor2883.Description := 'Y rotation slider';
PlaneSensor2883.MinPosition := Vector2(-0.75,0);
PlaneSensor2883.MaxPosition := Vector2(0.75,0);
{ METHOD .FdChildren.Add }
Group2882.FdChildren.Add(PlaneSensor2883);
Transform2884 := TTransformNode.Create;
Shape2885 := TShapeNode.Create;
Appearance2886 := TAppearanceNode.Create;
Material2887 := TMaterialNode.Create;
Material2887.DiffuseColor := Vector3(0.2,0.9,0.2);
Material2887.EmissiveColor := Vector3(0.1,0.45,0.1);
{ METHOD .SetMaterial }
Appearance2886.Material := Material2887;
{ METHOD .Appearance }
Shape2885.Appearance := Appearance2886;
Box2888 := TBoxNode.Create;
Box2888.Size := Vector3(0.12,0.3,0.08);
{ METHOD .Geometry }
Shape2885.Geometry := Box2888;
{ METHOD .FdChildren.Add }
Transform2884.FdChildren.Add(Shape2885);
{ METHOD .FdChildren.Add }
Group2882.FdChildren.Add(Transform2884);
{ METHOD .FdChildren.Add }
Transform2867.FdChildren.Add(Group2882);
Transform2889 := TTransformNode.Create;
Transform2889.Translation := Vector3(-0.75,-0.26,0.01);
Shape2890 := TShapeNode.Create;
Appearance2891 := TAppearanceNode.Create;
Material2892 := TMaterialNode.Create;
Material2892.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2891.Material := Material2892;
{ METHOD .Appearance }
Shape2890.Appearance := Appearance2891;
Text2893 := TTextNode.Create;
Text2893.SetText(['-']);
FontStyle2894 := TFontStyleNode.Create;
FontStyle2894.Justify := fjMIDDLE;
FontStyle2894.JustifyMinor := fjMIDDLE;
FontStyle2894.Size := 0.1;
{ METHOD .FontStyle }
Text2893.FontStyle := FontStyle2894;
{ METHOD .Geometry }
Shape2890.Geometry := Text2893;
{ METHOD .FdChildren.Add }
Transform2889.FdChildren.Add(Shape2890);
{ METHOD .FdChildren.Add }
Transform2867.FdChildren.Add(Transform2889);
Transform2895 := TTransformNode.Create;
Transform2895.Translation := Vector3(0.75,-0.26,0.01);
Shape2896 := TShapeNode.Create;
Appearance2897 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part189;
begin

Material2898 := TMaterialNode.Create;
Material2898.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2897.Material := Material2898;
{ METHOD .Appearance }
Shape2896.Appearance := Appearance2897;
Text2899 := TTextNode.Create;
Text2899.SetText(['-']);
FontStyle2900 := TFontStyleNode.Create;
FontStyle2900.Justify := fjMIDDLE;
FontStyle2900.JustifyMinor := fjMIDDLE;
FontStyle2900.Size := 0.1;
{ METHOD .FontStyle }
Text2899.FontStyle := FontStyle2900;
{ METHOD .Geometry }
Shape2896.Geometry := Text2899;
{ METHOD .FdChildren.Add }
Transform2895.FdChildren.Add(Shape2896);
{ METHOD .FdChildren.Add }
Transform2867.FdChildren.Add(Transform2895);
{ METHOD .FdChildren.Add }
Transform2860.FdChildren.Add(Transform2867);
Transform2901 := TTransformNode.Create;
Transform2901.Translation := Vector3(1.1,0,0);
Group2902 := TGroupNode.Create;
TouchSensor2903 := TTouchSensorNode.Create;
TouchSensor2903.Description := 'click, type degrees, press Enter';
{ METHOD .FdChildren.Add }
Group2902.FdChildren.Add(TouchSensor2903);
Shape2904 := TShapeNode.Create;
Appearance2905 := TAppearanceNode.Create;
Material2906 := TMaterialNode.Create;
Material2906.DiffuseColor := Vector3(0.12,0.12,0.18);
{ METHOD .SetMaterial }
Appearance2905.Material := Material2906;
{ METHOD .Appearance }
Shape2904.Appearance := Appearance2905;
Box2907 := TBoxNode.Create;
Box2907.Size := Vector3(0.8,0.34,0.02);
{ METHOD .Geometry }
Shape2904.Geometry := Box2907;
{ METHOD .FdChildren.Add }
Group2902.FdChildren.Add(Shape2904);
{ METHOD .FdChildren.Add }
Transform2901.FdChildren.Add(Group2902);
Transform2908 := TTransformNode.Create;
Transform2908.Translation := Vector3(0,0,0.02);
Shape2909 := TShapeNode.Create;
Appearance2910 := TAppearanceNode.Create;
Material2911 := TMaterialNode.Create;
Material2911.DiffuseColor := Vector3(1,1,0.8);
Material2911.EmissiveColor := Vector3(1,1,0.8);
{ METHOD .SetMaterial }
Appearance2910.Material := Material2911;
end;

procedure InitHAnimGimbalJointController22Part190;
begin

{ METHOD .Appearance }
Shape2909.Appearance := Appearance2910;
Text2912 := TTextNode.Create;
Text2912.SetText(['-']);
FontStyle2913 := TFontStyleNode.Create;
FontStyle2913.Justify := fjMIDDLE;
FontStyle2913.JustifyMinor := fjMIDDLE;
FontStyle2913.Size := 0.14;
{ METHOD .FontStyle }
Text2912.FontStyle := FontStyle2913;
{ METHOD .Geometry }
Shape2909.Geometry := Text2912;
{ METHOD .FdChildren.Add }
Transform2908.FdChildren.Add(Shape2909);
{ METHOD .FdChildren.Add }
Transform2901.FdChildren.Add(Transform2908);
{ METHOD .FdChildren.Add }
Transform2860.FdChildren.Add(Transform2901);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2860);
{ ===== axis Z ===== }
Transform2914 := TTransformNode.Create;
Transform2914.Translation := Vector3(0,-2.3,0);
Transform2915 := TTransformNode.Create;
Transform2915.Translation := Vector3(-1.25,0,0.01);
Shape2916 := TShapeNode.Create;
Appearance2917 := TAppearanceNode.Create;
Material2918 := TMaterialNode.Create;
Material2918.DiffuseColor := Vector3(0.3,0.5,1);
Material2918.EmissiveColor := Vector3(0.3,0.5,1);
{ METHOD .SetMaterial }
Appearance2917.Material := Material2918;
{ METHOD .Appearance }
Shape2916.Appearance := Appearance2917;
Text2919 := TTextNode.Create;
Text2919.SetText(['Z']);
FontStyle2920 := TFontStyleNode.Create;
FontStyle2920.Justify := fjMIDDLE;
FontStyle2920.JustifyMinor := fjMIDDLE;
FontStyle2920.Size := 0.26;
{ METHOD .FontStyle }
Text2919.FontStyle := FontStyle2920;
{ METHOD .Geometry }
Shape2916.Geometry := Text2919;
{ METHOD .FdChildren.Add }
Transform2915.FdChildren.Add(Shape2916);
{ METHOD .FdChildren.Add }
Transform2914.FdChildren.Add(Transform2915);
Transform2921 := TTransformNode.Create;
Transform2921.Translation := Vector3(-0.1,0,0);
Shape2922 := TShapeNode.Create;
Appearance2923 := TAppearanceNode.Create;
Material2924 := TMaterialNode.Create;
Material2924.DiffuseColor := Vector3(0.55,0.55,0.6);
end;

procedure InitHAnimGimbalJointController22Part191;
begin

Material2924.EmissiveColor := Vector3(0.15,0.15,0.2);
{ METHOD .SetMaterial }
Appearance2923.Material := Material2924;
{ METHOD .Appearance }
Shape2922.Appearance := Appearance2923;
Box2925 := TBoxNode.Create;
Box2925.Size := Vector3(1.5,0.04,0.03);
{ METHOD .Geometry }
Shape2922.Geometry := Box2925;
{ METHOD .FdChildren.Add }
Transform2921.FdChildren.Add(Shape2922);
Transform2926 := TTransformNode.Create;
Transform2926.Translation := Vector3(-0.75,0,0);
Shape2927 := TShapeNode.Create;
Appearance2928 := TAppearanceNode.Create;
Material2929 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2928.Material := Material2929;
{ METHOD .Appearance }
Shape2927.Appearance := Appearance2928;
Box2930 := TBoxNode.Create;
Box2930.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape2927.Geometry := Box2930;
{ METHOD .FdChildren.Add }
Transform2926.FdChildren.Add(Shape2927);
{ METHOD .FdChildren.Add }
Transform2921.FdChildren.Add(Transform2926);
Transform2931 := TTransformNode.Create;
Transform2931.Translation := Vector3(0.75,0,0);
Shape2932 := TShapeNode.Create;
Appearance2933 := TAppearanceNode.Create;
Material2934 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance2933.Material := Material2934;
{ METHOD .Appearance }
Shape2932.Appearance := Appearance2933;
Box2935 := TBoxNode.Create;
Box2935.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape2932.Geometry := Box2935;
{ METHOD .FdChildren.Add }
Transform2931.FdChildren.Add(Shape2932);
{ METHOD .FdChildren.Add }
Transform2921.FdChildren.Add(Transform2931);
Group2936 := TGroupNode.Create;
PlaneSensor2937 := TPlaneSensorNode.Create;
PlaneSensor2937.Description := 'Z rotation slider';
PlaneSensor2937.MinPosition := Vector2(-0.75,0);
PlaneSensor2937.MaxPosition := Vector2(0.75,0);
{ METHOD .FdChildren.Add }
Group2936.FdChildren.Add(PlaneSensor2937);
Transform2938 := TTransformNode.Create;
Shape2939 := TShapeNode.Create;
Appearance2940 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part192;
begin

Material2941 := TMaterialNode.Create;
Material2941.DiffuseColor := Vector3(0.3,0.5,1);
Material2941.EmissiveColor := Vector3(0.15,0.25,0.5);
{ METHOD .SetMaterial }
Appearance2940.Material := Material2941;
{ METHOD .Appearance }
Shape2939.Appearance := Appearance2940;
Box2942 := TBoxNode.Create;
Box2942.Size := Vector3(0.12,0.3,0.08);
{ METHOD .Geometry }
Shape2939.Geometry := Box2942;
{ METHOD .FdChildren.Add }
Transform2938.FdChildren.Add(Shape2939);
{ METHOD .FdChildren.Add }
Group2936.FdChildren.Add(Transform2938);
{ METHOD .FdChildren.Add }
Transform2921.FdChildren.Add(Group2936);
Transform2943 := TTransformNode.Create;
Transform2943.Translation := Vector3(-0.75,-0.26,0.01);
Shape2944 := TShapeNode.Create;
Appearance2945 := TAppearanceNode.Create;
Material2946 := TMaterialNode.Create;
Material2946.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2945.Material := Material2946;
{ METHOD .Appearance }
Shape2944.Appearance := Appearance2945;
Text2947 := TTextNode.Create;
Text2947.SetText(['-']);
FontStyle2948 := TFontStyleNode.Create;
FontStyle2948.Justify := fjMIDDLE;
FontStyle2948.JustifyMinor := fjMIDDLE;
FontStyle2948.Size := 0.1;
{ METHOD .FontStyle }
Text2947.FontStyle := FontStyle2948;
{ METHOD .Geometry }
Shape2944.Geometry := Text2947;
{ METHOD .FdChildren.Add }
Transform2943.FdChildren.Add(Shape2944);
{ METHOD .FdChildren.Add }
Transform2921.FdChildren.Add(Transform2943);
Transform2949 := TTransformNode.Create;
Transform2949.Translation := Vector3(0.75,-0.26,0.01);
Shape2950 := TShapeNode.Create;
Appearance2951 := TAppearanceNode.Create;
Material2952 := TMaterialNode.Create;
Material2952.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance2951.Material := Material2952;
{ METHOD .Appearance }
Shape2950.Appearance := Appearance2951;
Text2953 := TTextNode.Create;
Text2953.SetText(['-']);
FontStyle2954 := TFontStyleNode.Create;
end;

procedure InitHAnimGimbalJointController22Part193;
begin

FontStyle2954.Justify := fjMIDDLE;
FontStyle2954.JustifyMinor := fjMIDDLE;
FontStyle2954.Size := 0.1;
{ METHOD .FontStyle }
Text2953.FontStyle := FontStyle2954;
{ METHOD .Geometry }
Shape2950.Geometry := Text2953;
{ METHOD .FdChildren.Add }
Transform2949.FdChildren.Add(Shape2950);
{ METHOD .FdChildren.Add }
Transform2921.FdChildren.Add(Transform2949);
{ METHOD .FdChildren.Add }
Transform2914.FdChildren.Add(Transform2921);
Transform2955 := TTransformNode.Create;
Transform2955.Translation := Vector3(1.1,0,0);
Group2956 := TGroupNode.Create;
TouchSensor2957 := TTouchSensorNode.Create;
TouchSensor2957.Description := 'click, type degrees, press Enter';
{ METHOD .FdChildren.Add }
Group2956.FdChildren.Add(TouchSensor2957);
Shape2958 := TShapeNode.Create;
Appearance2959 := TAppearanceNode.Create;
Material2960 := TMaterialNode.Create;
Material2960.DiffuseColor := Vector3(0.12,0.12,0.18);
{ METHOD .SetMaterial }
Appearance2959.Material := Material2960;
{ METHOD .Appearance }
Shape2958.Appearance := Appearance2959;
Box2961 := TBoxNode.Create;
Box2961.Size := Vector3(0.8,0.34,0.02);
{ METHOD .Geometry }
Shape2958.Geometry := Box2961;
{ METHOD .FdChildren.Add }
Group2956.FdChildren.Add(Shape2958);
{ METHOD .FdChildren.Add }
Transform2955.FdChildren.Add(Group2956);
Transform2962 := TTransformNode.Create;
Transform2962.Translation := Vector3(0,0,0.02);
Shape2963 := TShapeNode.Create;
Appearance2964 := TAppearanceNode.Create;
Material2965 := TMaterialNode.Create;
Material2965.DiffuseColor := Vector3(1,1,0.8);
Material2965.EmissiveColor := Vector3(1,1,0.8);
{ METHOD .SetMaterial }
Appearance2964.Material := Material2965;
{ METHOD .Appearance }
Shape2963.Appearance := Appearance2964;
Text2966 := TTextNode.Create;
Text2966.SetText(['-']);
FontStyle2967 := TFontStyleNode.Create;
FontStyle2967.Justify := fjMIDDLE;
FontStyle2967.JustifyMinor := fjMIDDLE;
FontStyle2967.Size := 0.14;
end;

procedure InitHAnimGimbalJointController22Part194;
begin

{ METHOD .FontStyle }
Text2966.FontStyle := FontStyle2967;
{ METHOD .Geometry }
Shape2963.Geometry := Text2966;
{ METHOD .FdChildren.Add }
Transform2962.FdChildren.Add(Shape2963);
{ METHOD .FdChildren.Add }
Transform2955.FdChildren.Add(Transform2962);
{ METHOD .FdChildren.Add }
Transform2914.FdChildren.Add(Transform2955);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2914);
Transform2968 := TTransformNode.Create;
Transform2968.Translation := Vector3(0,-2.9,0.01);
Shape2969 := TShapeNode.Create;
Appearance2970 := TAppearanceNode.Create;
Material2971 := TMaterialNode.Create;
Material2971.DiffuseColor := Vector3(0.7,0.7,0.7);
Material2971.EmissiveColor := Vector3(0.7,0.7,0.7);
{ METHOD .SetMaterial }
Appearance2970.Material := Material2971;
{ METHOD .Appearance }
Shape2969.Appearance := Appearance2970;
Text2972 := TTextNode.Create;
Text2972.SetText(['INPUT: click a box, type degrees, Enter','(45r = radians, or type: x y z)']);
FontStyle2973 := TFontStyleNode.Create;
FontStyle2973.Justify := fjMIDDLE;
FontStyle2973.JustifyMinor := fjMIDDLE;
FontStyle2973.Size := 0.08;
FontStyle2973.Spacing := 1.4;
{ METHOD .FontStyle }
Text2972.FontStyle := FontStyle2973;
{ METHOD .Geometry }
Shape2969.Geometry := Text2972;
{ METHOD .FdChildren.Add }
Transform2968.FdChildren.Add(Shape2969);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2968);
Transform2974 := TTransformNode.Create;
Transform2974.Translation := Vector3(0,-3.82,-0.01);
Shape2975 := TShapeNode.Create;
Appearance2976 := TAppearanceNode.Create;
Material2977 := TMaterialNode.Create;
Material2977.DiffuseColor := Vector3(0.02,0.03,0.06);
{ METHOD .SetMaterial }
Appearance2976.Material := Material2977;
{ METHOD .Appearance }
Shape2975.Appearance := Appearance2976;
Box2978 := TBoxNode.Create;
Box2978.Size := Vector3(3,1.1,0.01);
{ METHOD .Geometry }
Shape2975.Geometry := Box2978;
{ METHOD .FdChildren.Add }
Transform2974.FdChildren.Add(Shape2975);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2974);
Transform2979 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part195;
begin

Transform2979.Translation := Vector3(-1.43,-3.4,0.01);
Shape2980 := TShapeNode.Create;
Appearance2981 := TAppearanceNode.Create;
Material2982 := TMaterialNode.Create;
Material2982.DiffuseColor := Vector3(0.6,1,0.6);
Material2982.EmissiveColor := Vector3(0.6,1,0.6);
{ METHOD .SetMaterial }
Appearance2981.Material := Material2982;
{ METHOD .Appearance }
Shape2980.Appearance := Appearance2981;
Text2983 := TTextNode.Create;
Text2983.SetText(['OUTPUT']);
FontStyle2984 := TFontStyleNode.Create;
FontStyle2984.Justify := fjBEGIN;
FontStyle2984.JustifyMinor := fjFIRST;
FontStyle2984.Size := 0.104;
FontStyle2984.Spacing := 1.3;
{ METHOD .FontStyle }
Text2983.FontStyle := FontStyle2984;
{ METHOD .Geometry }
Shape2980.Geometry := Text2983;
{ METHOD .FdChildren.Add }
Transform2979.FdChildren.Add(Shape2980);
{ METHOD .FdChildren.Add }
Transform2794.FdChildren.Add(Transform2979);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Transform2794);
{ ==================== ROOT TRANSLATION PANEL (hanim_humanoid_root) ==================== }
Transform2985 := TTransformNode.Create;
Transform2985.Translation := Vector3(0.2,3.9,0);
Transform2986 := TTransformNode.Create;
Transform2986.Translation := Vector3(0,-1.5,-0.03);
Shape2987 := TShapeNode.Create;
Appearance2988 := TAppearanceNode.Create;
Material2989 := TMaterialNode.Create;
Material2989.DiffuseColor := Vector3(0.05,0.06,0.1);
Material2989.Transparency := 0.25;
{ METHOD .SetMaterial }
Appearance2988.Material := Material2989;
{ METHOD .Appearance }
Shape2987.Appearance := Appearance2988;
Box2990 := TBoxNode.Create;
Box2990.Size := Vector3(3.2,3.2,0.01);
{ METHOD .Geometry }
Shape2987.Geometry := Box2990;
{ METHOD .FdChildren.Add }
Transform2986.FdChildren.Add(Shape2987);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Transform2986);
Transform2991 := TTransformNode.Create;
Transform2991.Translation := Vector3(0,-0.25,0.01);
Shape2992 := TShapeNode.Create;
Appearance2993 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part196;
begin

Material2994 := TMaterialNode.Create;
Material2994.DiffuseColor := Vector3(1,1,1);
Material2994.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance2993.Material := Material2994;
{ METHOD .Appearance }
Shape2992.Appearance := Appearance2993;
Text2995 := TTextNode.Create;
Text2995.SetText(['ROOT TRANSLATION (meters)']);
FontStyle2996 := TFontStyleNode.Create;
FontStyle2996.Justify := fjMIDDLE;
FontStyle2996.JustifyMinor := fjMIDDLE;
FontStyle2996.Size := 0.17;
{ METHOD .FontStyle }
Text2995.FontStyle := FontStyle2996;
{ METHOD .Geometry }
Shape2992.Geometry := Text2995;
{ METHOD .FdChildren.Add }
Transform2991.FdChildren.Add(Shape2992);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Transform2991);
{ ===== translate axis X ===== }
Transform2997 := TTransformNode.Create;
Transform2997.Translation := Vector3(0,-0.75,0);
Transform2998 := TTransformNode.Create;
Transform2998.Translation := Vector3(-1.25,0,0.01);
Shape2999 := TShapeNode.Create;
Appearance3000 := TAppearanceNode.Create;
Material3001 := TMaterialNode.Create;
Material3001.DiffuseColor := Vector3(1,0.2,0.2);
Material3001.EmissiveColor := Vector3(1,0.2,0.2);
{ METHOD .SetMaterial }
Appearance3000.Material := Material3001;
{ METHOD .Appearance }
Shape2999.Appearance := Appearance3000;
Text3002 := TTextNode.Create;
Text3002.SetText(['X']);
FontStyle3003 := TFontStyleNode.Create;
FontStyle3003.Justify := fjMIDDLE;
FontStyle3003.JustifyMinor := fjMIDDLE;
FontStyle3003.Size := 0.26;
{ METHOD .FontStyle }
Text3002.FontStyle := FontStyle3003;
{ METHOD .Geometry }
Shape2999.Geometry := Text3002;
{ METHOD .FdChildren.Add }
Transform2998.FdChildren.Add(Shape2999);
{ METHOD .FdChildren.Add }
Transform2997.FdChildren.Add(Transform2998);
Transform3004 := TTransformNode.Create;
Transform3004.Translation := Vector3(-0.1,0,0);
Shape3005 := TShapeNode.Create;
Appearance3006 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part197;
begin

Material3007 := TMaterialNode.Create;
Material3007.DiffuseColor := Vector3(0.55,0.55,0.6);
Material3007.EmissiveColor := Vector3(0.15,0.15,0.2);
{ METHOD .SetMaterial }
Appearance3006.Material := Material3007;
{ METHOD .Appearance }
Shape3005.Appearance := Appearance3006;
Box3008 := TBoxNode.Create;
Box3008.Size := Vector3(1.5,0.04,0.03);
{ METHOD .Geometry }
Shape3005.Geometry := Box3008;
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Shape3005);
Transform3009 := TTransformNode.Create;
Transform3009.Translation := Vector3(-0.75,0,0);
Shape3010 := TShapeNode.Create;
Appearance3011 := TAppearanceNode.Create;
Material3012 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance3011.Material := Material3012;
{ METHOD .Appearance }
Shape3010.Appearance := Appearance3011;
Box3013 := TBoxNode.Create;
Box3013.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape3010.Geometry := Box3013;
{ METHOD .FdChildren.Add }
Transform3009.FdChildren.Add(Shape3010);
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Transform3009);
Transform3014 := TTransformNode.Create;
Shape3015 := TShapeNode.Create;
Appearance3016 := TAppearanceNode.Create;
Material3017 := TMaterialNode.Create;
Material3017.DiffuseColor := Vector3(0.6,0.6,0.6);
{ METHOD .SetMaterial }
Appearance3016.Material := Material3017;
{ METHOD .Appearance }
Shape3015.Appearance := Appearance3016;
Box3018 := TBoxNode.Create;
Box3018.Size := Vector3(0.015,0.14,0.03);
{ METHOD .Geometry }
Shape3015.Geometry := Box3018;
{ METHOD .FdChildren.Add }
Transform3014.FdChildren.Add(Shape3015);
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Transform3014);
Transform3019 := TTransformNode.Create;
Transform3019.Translation := Vector3(0.75,0,0);
Shape3020 := TShapeNode.Create;
Appearance3021 := TAppearanceNode.Create;
Material3022 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance3021.Material := Material3022;
{ METHOD .Appearance }
Shape3020.Appearance := Appearance3021;
end;

procedure InitHAnimGimbalJointController22Part198;
begin

Box3023 := TBoxNode.Create;
Box3023.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape3020.Geometry := Box3023;
{ METHOD .FdChildren.Add }
Transform3019.FdChildren.Add(Shape3020);
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Transform3019);
Group3024 := TGroupNode.Create;
PlaneSensor3025 := TPlaneSensorNode.Create;
PlaneSensor3025.Description := 'X translation slider';
PlaneSensor3025.MinPosition := Vector2(-0.75,0);
PlaneSensor3025.MaxPosition := Vector2(0.75,0);
{ METHOD .FdChildren.Add }
Group3024.FdChildren.Add(PlaneSensor3025);
Transform3026 := TTransformNode.Create;
Shape3027 := TShapeNode.Create;
Appearance3028 := TAppearanceNode.Create;
Material3029 := TMaterialNode.Create;
Material3029.DiffuseColor := Vector3(1,0.2,0.2);
Material3029.EmissiveColor := Vector3(0.5,0.1,0.1);
{ METHOD .SetMaterial }
Appearance3028.Material := Material3029;
{ METHOD .Appearance }
Shape3027.Appearance := Appearance3028;
Box3030 := TBoxNode.Create;
Box3030.Size := Vector3(0.12,0.3,0.08);
{ METHOD .Geometry }
Shape3027.Geometry := Box3030;
{ METHOD .FdChildren.Add }
Transform3026.FdChildren.Add(Shape3027);
{ METHOD .FdChildren.Add }
Group3024.FdChildren.Add(Transform3026);
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Group3024);
Transform3031 := TTransformNode.Create;
Transform3031.Translation := Vector3(-0.75,-0.22,0.01);
Shape3032 := TShapeNode.Create;
Appearance3033 := TAppearanceNode.Create;
Material3034 := TMaterialNode.Create;
Material3034.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance3033.Material := Material3034;
{ METHOD .Appearance }
Shape3032.Appearance := Appearance3033;
Text3035 := TTextNode.Create;
Text3035.SetText(['-6']);
FontStyle3036 := TFontStyleNode.Create;
FontStyle3036.Justify := fjMIDDLE;
FontStyle3036.JustifyMinor := fjMIDDLE;
FontStyle3036.Size := 0.1;
{ METHOD .FontStyle }
Text3035.FontStyle := FontStyle3036;
end;

procedure InitHAnimGimbalJointController22Part199;
begin

{ METHOD .Geometry }
Shape3032.Geometry := Text3035;
{ METHOD .FdChildren.Add }
Transform3031.FdChildren.Add(Shape3032);
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Transform3031);
Transform3037 := TTransformNode.Create;
Transform3037.Translation := Vector3(0.75,-0.22,0.01);
Shape3038 := TShapeNode.Create;
Appearance3039 := TAppearanceNode.Create;
Material3040 := TMaterialNode.Create;
Material3040.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance3039.Material := Material3040;
{ METHOD .Appearance }
Shape3038.Appearance := Appearance3039;
Text3041 := TTextNode.Create;
Text3041.SetText(['+6']);
FontStyle3042 := TFontStyleNode.Create;
FontStyle3042.Justify := fjMIDDLE;
FontStyle3042.JustifyMinor := fjMIDDLE;
FontStyle3042.Size := 0.1;
{ METHOD .FontStyle }
Text3041.FontStyle := FontStyle3042;
{ METHOD .Geometry }
Shape3038.Geometry := Text3041;
{ METHOD .FdChildren.Add }
Transform3037.FdChildren.Add(Shape3038);
{ METHOD .FdChildren.Add }
Transform3004.FdChildren.Add(Transform3037);
{ METHOD .FdChildren.Add }
Transform2997.FdChildren.Add(Transform3004);
Transform3043 := TTransformNode.Create;
Transform3043.Translation := Vector3(1.1,0,0);
Group3044 := TGroupNode.Create;
TouchSensor3045 := TTouchSensorNode.Create;
TouchSensor3045.Description := 'click, type meters, press Enter';
{ METHOD .FdChildren.Add }
Group3044.FdChildren.Add(TouchSensor3045);
Shape3046 := TShapeNode.Create;
Appearance3047 := TAppearanceNode.Create;
Material3048 := TMaterialNode.Create;
Material3048.DiffuseColor := Vector3(0.12,0.12,0.18);
{ METHOD .SetMaterial }
Appearance3047.Material := Material3048;
{ METHOD .Appearance }
Shape3046.Appearance := Appearance3047;
Box3049 := TBoxNode.Create;
Box3049.Size := Vector3(0.8,0.34,0.02);
{ METHOD .Geometry }
Shape3046.Geometry := Box3049;
{ METHOD .FdChildren.Add }
Group3044.FdChildren.Add(Shape3046);
{ METHOD .FdChildren.Add }
Transform3043.FdChildren.Add(Group3044);
Transform3050 := TTransformNode.Create;
end;

procedure InitHAnimGimbalJointController22Part200;
begin

Transform3050.Translation := Vector3(0,0,0.02);
Shape3051 := TShapeNode.Create;
Appearance3052 := TAppearanceNode.Create;
Material3053 := TMaterialNode.Create;
Material3053.DiffuseColor := Vector3(1,1,0.8);
Material3053.EmissiveColor := Vector3(1,1,0.8);
{ METHOD .SetMaterial }
Appearance3052.Material := Material3053;
{ METHOD .Appearance }
Shape3051.Appearance := Appearance3052;
Text3054 := TTextNode.Create;
Text3054.SetText(['0.000']);
FontStyle3055 := TFontStyleNode.Create;
FontStyle3055.Justify := fjMIDDLE;
FontStyle3055.JustifyMinor := fjMIDDLE;
FontStyle3055.Size := 0.14;
{ METHOD .FontStyle }
Text3054.FontStyle := FontStyle3055;
{ METHOD .Geometry }
Shape3051.Geometry := Text3054;
{ METHOD .FdChildren.Add }
Transform3050.FdChildren.Add(Shape3051);
{ METHOD .FdChildren.Add }
Transform3043.FdChildren.Add(Transform3050);
{ METHOD .FdChildren.Add }
Transform2997.FdChildren.Add(Transform3043);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Transform2997);
{ ===== translate axis Y ===== }
Transform3056 := TTransformNode.Create;
Transform3056.Translation := Vector3(0,-1.3,0);
Transform3057 := TTransformNode.Create;
Transform3057.Translation := Vector3(-1.25,0,0.01);
Shape3058 := TShapeNode.Create;
Appearance3059 := TAppearanceNode.Create;
Material3060 := TMaterialNode.Create;
Material3060.DiffuseColor := Vector3(0.2,0.9,0.2);
Material3060.EmissiveColor := Vector3(0.2,0.9,0.2);
{ METHOD .SetMaterial }
Appearance3059.Material := Material3060;
{ METHOD .Appearance }
Shape3058.Appearance := Appearance3059;
Text3061 := TTextNode.Create;
Text3061.SetText(['Y']);
FontStyle3062 := TFontStyleNode.Create;
FontStyle3062.Justify := fjMIDDLE;
FontStyle3062.JustifyMinor := fjMIDDLE;
FontStyle3062.Size := 0.26;
{ METHOD .FontStyle }
Text3061.FontStyle := FontStyle3062;
{ METHOD .Geometry }
Shape3058.Geometry := Text3061;
{ METHOD .FdChildren.Add }
Transform3057.FdChildren.Add(Shape3058);
end;

procedure InitHAnimGimbalJointController22Part201;
begin

{ METHOD .FdChildren.Add }
Transform3056.FdChildren.Add(Transform3057);
Transform3063 := TTransformNode.Create;
Transform3063.Translation := Vector3(-0.1,0,0);
Shape3064 := TShapeNode.Create;
Appearance3065 := TAppearanceNode.Create;
Material3066 := TMaterialNode.Create;
Material3066.DiffuseColor := Vector3(0.55,0.55,0.6);
Material3066.EmissiveColor := Vector3(0.15,0.15,0.2);
{ METHOD .SetMaterial }
Appearance3065.Material := Material3066;
{ METHOD .Appearance }
Shape3064.Appearance := Appearance3065;
Box3067 := TBoxNode.Create;
Box3067.Size := Vector3(1.5,0.04,0.03);
{ METHOD .Geometry }
Shape3064.Geometry := Box3067;
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Shape3064);
Transform3068 := TTransformNode.Create;
Transform3068.Translation := Vector3(-0.75,0,0);
Shape3069 := TShapeNode.Create;
Appearance3070 := TAppearanceNode.Create;
Material3071 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance3070.Material := Material3071;
{ METHOD .Appearance }
Shape3069.Appearance := Appearance3070;
Box3072 := TBoxNode.Create;
Box3072.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape3069.Geometry := Box3072;
{ METHOD .FdChildren.Add }
Transform3068.FdChildren.Add(Shape3069);
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Transform3068);
Transform3073 := TTransformNode.Create;
Shape3074 := TShapeNode.Create;
Appearance3075 := TAppearanceNode.Create;
Material3076 := TMaterialNode.Create;
Material3076.DiffuseColor := Vector3(0.6,0.6,0.6);
{ METHOD .SetMaterial }
Appearance3075.Material := Material3076;
{ METHOD .Appearance }
Shape3074.Appearance := Appearance3075;
Box3077 := TBoxNode.Create;
Box3077.Size := Vector3(0.015,0.14,0.03);
{ METHOD .Geometry }
Shape3074.Geometry := Box3077;
{ METHOD .FdChildren.Add }
Transform3073.FdChildren.Add(Shape3074);
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Transform3073);
Transform3078 := TTransformNode.Create;
Transform3078.Translation := Vector3(0.75,0,0);
end;

procedure InitHAnimGimbalJointController22Part202;
begin

Shape3079 := TShapeNode.Create;
Appearance3080 := TAppearanceNode.Create;
Material3081 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance3080.Material := Material3081;
{ METHOD .Appearance }
Shape3079.Appearance := Appearance3080;
Box3082 := TBoxNode.Create;
Box3082.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape3079.Geometry := Box3082;
{ METHOD .FdChildren.Add }
Transform3078.FdChildren.Add(Shape3079);
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Transform3078);
Group3083 := TGroupNode.Create;
PlaneSensor3084 := TPlaneSensorNode.Create;
PlaneSensor3084.Description := 'Y translation slider';
PlaneSensor3084.MinPosition := Vector2(-0.75,0);
PlaneSensor3084.MaxPosition := Vector2(0.75,0);
{ METHOD .FdChildren.Add }
Group3083.FdChildren.Add(PlaneSensor3084);
Transform3085 := TTransformNode.Create;
Shape3086 := TShapeNode.Create;
Appearance3087 := TAppearanceNode.Create;
Material3088 := TMaterialNode.Create;
Material3088.DiffuseColor := Vector3(0.2,0.9,0.2);
Material3088.EmissiveColor := Vector3(0.1,0.45,0.1);
{ METHOD .SetMaterial }
Appearance3087.Material := Material3088;
{ METHOD .Appearance }
Shape3086.Appearance := Appearance3087;
Box3089 := TBoxNode.Create;
Box3089.Size := Vector3(0.12,0.3,0.08);
{ METHOD .Geometry }
Shape3086.Geometry := Box3089;
{ METHOD .FdChildren.Add }
Transform3085.FdChildren.Add(Shape3086);
{ METHOD .FdChildren.Add }
Group3083.FdChildren.Add(Transform3085);
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Group3083);
Transform3090 := TTransformNode.Create;
Transform3090.Translation := Vector3(-0.75,-0.22,0.01);
Shape3091 := TShapeNode.Create;
Appearance3092 := TAppearanceNode.Create;
Material3093 := TMaterialNode.Create;
Material3093.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance3092.Material := Material3093;
{ METHOD .Appearance }
Shape3091.Appearance := Appearance3092;
Text3094 := TTextNode.Create;
Text3094.SetText(['-6']);
end;

procedure InitHAnimGimbalJointController22Part203;
begin

FontStyle3095 := TFontStyleNode.Create;
FontStyle3095.Justify := fjMIDDLE;
FontStyle3095.JustifyMinor := fjMIDDLE;
FontStyle3095.Size := 0.1;
{ METHOD .FontStyle }
Text3094.FontStyle := FontStyle3095;
{ METHOD .Geometry }
Shape3091.Geometry := Text3094;
{ METHOD .FdChildren.Add }
Transform3090.FdChildren.Add(Shape3091);
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Transform3090);
Transform3096 := TTransformNode.Create;
Transform3096.Translation := Vector3(0.75,-0.22,0.01);
Shape3097 := TShapeNode.Create;
Appearance3098 := TAppearanceNode.Create;
Material3099 := TMaterialNode.Create;
Material3099.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance3098.Material := Material3099;
{ METHOD .Appearance }
Shape3097.Appearance := Appearance3098;
Text3100 := TTextNode.Create;
Text3100.SetText(['+6']);
FontStyle3101 := TFontStyleNode.Create;
FontStyle3101.Justify := fjMIDDLE;
FontStyle3101.JustifyMinor := fjMIDDLE;
FontStyle3101.Size := 0.1;
{ METHOD .FontStyle }
Text3100.FontStyle := FontStyle3101;
{ METHOD .Geometry }
Shape3097.Geometry := Text3100;
{ METHOD .FdChildren.Add }
Transform3096.FdChildren.Add(Shape3097);
{ METHOD .FdChildren.Add }
Transform3063.FdChildren.Add(Transform3096);
{ METHOD .FdChildren.Add }
Transform3056.FdChildren.Add(Transform3063);
Transform3102 := TTransformNode.Create;
Transform3102.Translation := Vector3(1.1,0,0);
Group3103 := TGroupNode.Create;
TouchSensor3104 := TTouchSensorNode.Create;
TouchSensor3104.Description := 'click, type meters, press Enter';
{ METHOD .FdChildren.Add }
Group3103.FdChildren.Add(TouchSensor3104);
Shape3105 := TShapeNode.Create;
Appearance3106 := TAppearanceNode.Create;
Material3107 := TMaterialNode.Create;
Material3107.DiffuseColor := Vector3(0.12,0.12,0.18);
{ METHOD .SetMaterial }
Appearance3106.Material := Material3107;
{ METHOD .Appearance }
Shape3105.Appearance := Appearance3106;
Box3108 := TBoxNode.Create;
end;

procedure InitHAnimGimbalJointController22Part204;
begin

Box3108.Size := Vector3(0.8,0.34,0.02);
{ METHOD .Geometry }
Shape3105.Geometry := Box3108;
{ METHOD .FdChildren.Add }
Group3103.FdChildren.Add(Shape3105);
{ METHOD .FdChildren.Add }
Transform3102.FdChildren.Add(Group3103);
Transform3109 := TTransformNode.Create;
Transform3109.Translation := Vector3(0,0,0.02);
Shape3110 := TShapeNode.Create;
Appearance3111 := TAppearanceNode.Create;
Material3112 := TMaterialNode.Create;
Material3112.DiffuseColor := Vector3(1,1,0.8);
Material3112.EmissiveColor := Vector3(1,1,0.8);
{ METHOD .SetMaterial }
Appearance3111.Material := Material3112;
{ METHOD .Appearance }
Shape3110.Appearance := Appearance3111;
Text3113 := TTextNode.Create;
Text3113.SetText(['0.000']);
FontStyle3114 := TFontStyleNode.Create;
FontStyle3114.Justify := fjMIDDLE;
FontStyle3114.JustifyMinor := fjMIDDLE;
FontStyle3114.Size := 0.14;
{ METHOD .FontStyle }
Text3113.FontStyle := FontStyle3114;
{ METHOD .Geometry }
Shape3110.Geometry := Text3113;
{ METHOD .FdChildren.Add }
Transform3109.FdChildren.Add(Shape3110);
{ METHOD .FdChildren.Add }
Transform3102.FdChildren.Add(Transform3109);
{ METHOD .FdChildren.Add }
Transform3056.FdChildren.Add(Transform3102);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Transform3056);
{ ===== translate axis Z ===== }
Transform3115 := TTransformNode.Create;
Transform3115.Translation := Vector3(0,-1.85,0);
Transform3116 := TTransformNode.Create;
Transform3116.Translation := Vector3(-1.25,0,0.01);
Shape3117 := TShapeNode.Create;
Appearance3118 := TAppearanceNode.Create;
Material3119 := TMaterialNode.Create;
Material3119.DiffuseColor := Vector3(0.3,0.5,1);
Material3119.EmissiveColor := Vector3(0.3,0.5,1);
{ METHOD .SetMaterial }
Appearance3118.Material := Material3119;
{ METHOD .Appearance }
Shape3117.Appearance := Appearance3118;
Text3120 := TTextNode.Create;
Text3120.SetText(['Z']);
FontStyle3121 := TFontStyleNode.Create;
FontStyle3121.Justify := fjMIDDLE;
end;

procedure InitHAnimGimbalJointController22Part205;
begin

FontStyle3121.JustifyMinor := fjMIDDLE;
FontStyle3121.Size := 0.26;
{ METHOD .FontStyle }
Text3120.FontStyle := FontStyle3121;
{ METHOD .Geometry }
Shape3117.Geometry := Text3120;
{ METHOD .FdChildren.Add }
Transform3116.FdChildren.Add(Shape3117);
{ METHOD .FdChildren.Add }
Transform3115.FdChildren.Add(Transform3116);
Transform3122 := TTransformNode.Create;
Transform3122.Translation := Vector3(-0.1,0,0);
Shape3123 := TShapeNode.Create;
Appearance3124 := TAppearanceNode.Create;
Material3125 := TMaterialNode.Create;
Material3125.DiffuseColor := Vector3(0.55,0.55,0.6);
Material3125.EmissiveColor := Vector3(0.15,0.15,0.2);
{ METHOD .SetMaterial }
Appearance3124.Material := Material3125;
{ METHOD .Appearance }
Shape3123.Appearance := Appearance3124;
Box3126 := TBoxNode.Create;
Box3126.Size := Vector3(1.5,0.04,0.03);
{ METHOD .Geometry }
Shape3123.Geometry := Box3126;
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Shape3123);
Transform3127 := TTransformNode.Create;
Transform3127.Translation := Vector3(-0.75,0,0);
Shape3128 := TShapeNode.Create;
Appearance3129 := TAppearanceNode.Create;
Material3130 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance3129.Material := Material3130;
{ METHOD .Appearance }
Shape3128.Appearance := Appearance3129;
Box3131 := TBoxNode.Create;
Box3131.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape3128.Geometry := Box3131;
{ METHOD .FdChildren.Add }
Transform3127.FdChildren.Add(Shape3128);
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Transform3127);
Transform3132 := TTransformNode.Create;
Shape3133 := TShapeNode.Create;
Appearance3134 := TAppearanceNode.Create;
Material3135 := TMaterialNode.Create;
Material3135.DiffuseColor := Vector3(0.6,0.6,0.6);
{ METHOD .SetMaterial }
Appearance3134.Material := Material3135;
{ METHOD .Appearance }
Shape3133.Appearance := Appearance3134;
Box3136 := TBoxNode.Create;
Box3136.Size := Vector3(0.015,0.14,0.03);
end;

procedure InitHAnimGimbalJointController22Part206;
begin

{ METHOD .Geometry }
Shape3133.Geometry := Box3136;
{ METHOD .FdChildren.Add }
Transform3132.FdChildren.Add(Shape3133);
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Transform3132);
Transform3137 := TTransformNode.Create;
Transform3137.Translation := Vector3(0.75,0,0);
Shape3138 := TShapeNode.Create;
Appearance3139 := TAppearanceNode.Create;
Material3140 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance3139.Material := Material3140;
{ METHOD .Appearance }
Shape3138.Appearance := Appearance3139;
Box3141 := TBoxNode.Create;
Box3141.Size := Vector3(0.02,0.2,0.03);
{ METHOD .Geometry }
Shape3138.Geometry := Box3141;
{ METHOD .FdChildren.Add }
Transform3137.FdChildren.Add(Shape3138);
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Transform3137);
Group3142 := TGroupNode.Create;
PlaneSensor3143 := TPlaneSensorNode.Create;
PlaneSensor3143.Description := 'Z translation slider';
PlaneSensor3143.MinPosition := Vector2(-0.75,0);
PlaneSensor3143.MaxPosition := Vector2(0.75,0);
{ METHOD .FdChildren.Add }
Group3142.FdChildren.Add(PlaneSensor3143);
Transform3144 := TTransformNode.Create;
Shape3145 := TShapeNode.Create;
Appearance3146 := TAppearanceNode.Create;
Material3147 := TMaterialNode.Create;
Material3147.DiffuseColor := Vector3(0.3,0.5,1);
Material3147.EmissiveColor := Vector3(0.15,0.25,0.5);
{ METHOD .SetMaterial }
Appearance3146.Material := Material3147;
{ METHOD .Appearance }
Shape3145.Appearance := Appearance3146;
Box3148 := TBoxNode.Create;
Box3148.Size := Vector3(0.12,0.3,0.08);
{ METHOD .Geometry }
Shape3145.Geometry := Box3148;
{ METHOD .FdChildren.Add }
Transform3144.FdChildren.Add(Shape3145);
{ METHOD .FdChildren.Add }
Group3142.FdChildren.Add(Transform3144);
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Group3142);
Transform3149 := TTransformNode.Create;
Transform3149.Translation := Vector3(-0.75,-0.22,0.01);
Shape3150 := TShapeNode.Create;
Appearance3151 := TAppearanceNode.Create;
Material3152 := TMaterialNode.Create;
end;

procedure InitHAnimGimbalJointController22Part207;
begin

Material3152.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance3151.Material := Material3152;
{ METHOD .Appearance }
Shape3150.Appearance := Appearance3151;
Text3153 := TTextNode.Create;
Text3153.SetText(['-6']);
FontStyle3154 := TFontStyleNode.Create;
FontStyle3154.Justify := fjMIDDLE;
FontStyle3154.JustifyMinor := fjMIDDLE;
FontStyle3154.Size := 0.1;
{ METHOD .FontStyle }
Text3153.FontStyle := FontStyle3154;
{ METHOD .Geometry }
Shape3150.Geometry := Text3153;
{ METHOD .FdChildren.Add }
Transform3149.FdChildren.Add(Shape3150);
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Transform3149);
Transform3155 := TTransformNode.Create;
Transform3155.Translation := Vector3(0.75,-0.22,0.01);
Shape3156 := TShapeNode.Create;
Appearance3157 := TAppearanceNode.Create;
Material3158 := TMaterialNode.Create;
Material3158.EmissiveColor := Vector3(0.8,0.8,0.8);
{ METHOD .SetMaterial }
Appearance3157.Material := Material3158;
{ METHOD .Appearance }
Shape3156.Appearance := Appearance3157;
Text3159 := TTextNode.Create;
Text3159.SetText(['+6']);
FontStyle3160 := TFontStyleNode.Create;
FontStyle3160.Justify := fjMIDDLE;
FontStyle3160.JustifyMinor := fjMIDDLE;
FontStyle3160.Size := 0.1;
{ METHOD .FontStyle }
Text3159.FontStyle := FontStyle3160;
{ METHOD .Geometry }
Shape3156.Geometry := Text3159;
{ METHOD .FdChildren.Add }
Transform3155.FdChildren.Add(Shape3156);
{ METHOD .FdChildren.Add }
Transform3122.FdChildren.Add(Transform3155);
{ METHOD .FdChildren.Add }
Transform3115.FdChildren.Add(Transform3122);
Transform3161 := TTransformNode.Create;
Transform3161.Translation := Vector3(1.1,0,0);
Group3162 := TGroupNode.Create;
TouchSensor3163 := TTouchSensorNode.Create;
TouchSensor3163.Description := 'click, type meters, press Enter';
{ METHOD .FdChildren.Add }
Group3162.FdChildren.Add(TouchSensor3163);
Shape3164 := TShapeNode.Create;
Appearance3165 := TAppearanceNode.Create;
end;

procedure InitHAnimGimbalJointController22Part208;
begin

Material3166 := TMaterialNode.Create;
Material3166.DiffuseColor := Vector3(0.12,0.12,0.18);
{ METHOD .SetMaterial }
Appearance3165.Material := Material3166;
{ METHOD .Appearance }
Shape3164.Appearance := Appearance3165;
Box3167 := TBoxNode.Create;
Box3167.Size := Vector3(0.8,0.34,0.02);
{ METHOD .Geometry }
Shape3164.Geometry := Box3167;
{ METHOD .FdChildren.Add }
Group3162.FdChildren.Add(Shape3164);
{ METHOD .FdChildren.Add }
Transform3161.FdChildren.Add(Group3162);
Transform3168 := TTransformNode.Create;
Transform3168.Translation := Vector3(0,0,0.02);
Shape3169 := TShapeNode.Create;
Appearance3170 := TAppearanceNode.Create;
Material3171 := TMaterialNode.Create;
Material3171.DiffuseColor := Vector3(1,1,0.8);
Material3171.EmissiveColor := Vector3(1,1,0.8);
{ METHOD .SetMaterial }
Appearance3170.Material := Material3171;
{ METHOD .Appearance }
Shape3169.Appearance := Appearance3170;
Text3172 := TTextNode.Create;
Text3172.SetText(['0.000']);
FontStyle3173 := TFontStyleNode.Create;
FontStyle3173.Justify := fjMIDDLE;
FontStyle3173.JustifyMinor := fjMIDDLE;
FontStyle3173.Size := 0.14;
{ METHOD .FontStyle }
Text3172.FontStyle := FontStyle3173;
{ METHOD .Geometry }
Shape3169.Geometry := Text3172;
{ METHOD .FdChildren.Add }
Transform3168.FdChildren.Add(Shape3169);
{ METHOD .FdChildren.Add }
Transform3161.FdChildren.Add(Transform3168);
{ METHOD .FdChildren.Add }
Transform3115.FdChildren.Add(Transform3161);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Transform3115);
{ ===== reset translation button ===== }
Group3174 := TGroupNode.Create;
TouchSensor3175 := TTouchSensorNode.Create;
TouchSensor3175.Description := 'reset humanoid_root translation to original position';
{ METHOD .FdChildren.Add }
Group3174.FdChildren.Add(TouchSensor3175);
Transform3176 := TTransformNode.Create;
Transform3176.Translation := Vector3(0,-2.4,0);
Shape3177 := TShapeNode.Create;
Appearance3178 := TAppearanceNode.Create;
Material3179 := TMaterialNode.Create;
Material3179.DiffuseColor := Vector3(0.2,0.2,0.28);
end;

procedure InitHAnimGimbalJointController22Part209;
begin

Material3179.EmissiveColor := Vector3(0.08,0.08,0.14);
{ METHOD .SetMaterial }
Appearance3178.Material := Material3179;
{ METHOD .Appearance }
Shape3177.Appearance := Appearance3178;
Box3180 := TBoxNode.Create;
Box3180.Size := Vector3(1.6,0.3,0.04);
{ METHOD .Geometry }
Shape3177.Geometry := Box3180;
{ METHOD .FdChildren.Add }
Transform3176.FdChildren.Add(Shape3177);
Transform3181 := TTransformNode.Create;
Transform3181.Translation := Vector3(0,0,0.03);
Shape3182 := TShapeNode.Create;
Appearance3183 := TAppearanceNode.Create;
Material3184 := TMaterialNode.Create;
Material3184.DiffuseColor := Vector3(1,1,1);
Material3184.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance3183.Material := Material3184;
{ METHOD .Appearance }
Shape3182.Appearance := Appearance3183;
Text3185 := TTextNode.Create;
Text3185.SetText(['RESET POSITION']);
FontStyle3186 := TFontStyleNode.Create;
FontStyle3186.Justify := fjMIDDLE;
FontStyle3186.JustifyMinor := fjMIDDLE;
FontStyle3186.Size := 0.12;
{ METHOD .FontStyle }
Text3185.FontStyle := FontStyle3186;
{ METHOD .Geometry }
Shape3182.Geometry := Text3185;
{ METHOD .FdChildren.Add }
Transform3181.FdChildren.Add(Shape3182);
{ METHOD .FdChildren.Add }
Transform3176.FdChildren.Add(Transform3181);
{ METHOD .FdChildren.Add }
Group3174.FdChildren.Add(Transform3176);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Group3174);
Transform3187 := TTransformNode.Create;
Transform3187.Translation := Vector3(0,-2.85,0.01);
Shape3188 := TShapeNode.Create;
Appearance3189 := TAppearanceNode.Create;
Material3190 := TMaterialNode.Create;
Material3190.DiffuseColor := Vector3(0.7,0.7,0.7);
Material3190.EmissiveColor := Vector3(0.7,0.7,0.7);
{ METHOD .SetMaterial }
Appearance3189.Material := Material3190;
{ METHOD .Appearance }
Shape3188.Appearance := Appearance3189;
Text3191 := TTextNode.Create;
Text3191.SetText(['INPUT: click a box, type meters, Enter','(or type: x y z) range -6 to +6']);
FontStyle3192 := TFontStyleNode.Create;
end;

procedure InitHAnimGimbalJointController22Part210;
begin

FontStyle3192.Justify := fjMIDDLE;
FontStyle3192.JustifyMinor := fjMIDDLE;
FontStyle3192.Size := 0.08;
FontStyle3192.Spacing := 1.4;
{ METHOD .FontStyle }
Text3191.FontStyle := FontStyle3192;
{ METHOD .Geometry }
Shape3188.Geometry := Text3191;
{ METHOD .FdChildren.Add }
Transform3187.FdChildren.Add(Shape3188);
{ METHOD .FdChildren.Add }
Transform2985.FdChildren.Add(Transform3187);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Transform2985);
{ ==================== ACCESSIBILITY: caption line + keyboard help ==================== }
Transform3193 := TTransformNode.Create;
Transform3193.Translation := Vector3(0.15,-2.45,0.05);
Shape3194 := TShapeNode.Create;
Appearance3195 := TAppearanceNode.Create;
Material3196 := TMaterialNode.Create;
Material3196.DiffuseColor := Vector3(1,1,1);
Material3196.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance3195.Material := Material3196;
{ METHOD .Appearance }
Shape3194.Appearance := Appearance3195;
Text3197 := TTextNode.Create;
Text3197.SetText(['MODE JOINT | H keys']);
FontStyle3198 := TFontStyleNode.Create;
FontStyle3198.Justify := fjMIDDLE;
FontStyle3198.JustifyMinor := fjFIRST;
FontStyle3198.Size := 0.12;
FontStyle3198.Spacing := 1.25;
{ METHOD .FontStyle }
Text3197.FontStyle := FontStyle3198;
{ METHOD .Geometry }
Shape3194.Geometry := Text3197;
{ METHOD .FdChildren.Add }
Transform3193.FdChildren.Add(Shape3194);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Transform3193);
Switch3199 := TSwitchNode.Create;
Switch3199.WhichChoice := -1;
Transform3200 := TTransformNode.Create;
Transform3201 := TTransformNode.Create;
Transform3201.Translation := Vector3(0.15,-3.4,0.02);
Shape3202 := TShapeNode.Create;
Appearance3203 := TAppearanceNode.Create;
Material3204 := TMaterialNode.Create;
Material3204.DiffuseColor := Vector3(0.02,0.03,0.08);
Material3204.Transparency := 0.1;
{ METHOD .SetMaterial }
Appearance3203.Material := Material3204;
end;

procedure InitHAnimGimbalJointController22Part211;
begin

{ METHOD .Appearance }
Shape3202.Appearance := Appearance3203;
Box3205 := TBoxNode.Create;
Box3205.Size := Vector3(4.5,1.3,0.01);
{ METHOD .Geometry }
Shape3202.Geometry := Box3205;
{ METHOD .FdChildren.Add }
Transform3201.FdChildren.Add(Shape3202);
{ METHOD .FdChildren.Add }
Transform3200.FdChildren.Add(Transform3201);
Transform3206 := TTransformNode.Create;
Transform3206.Translation := Vector3(-2.05,-2.82,0.06);
Shape3207 := TShapeNode.Create;
Appearance3208 := TAppearanceNode.Create;
Material3209 := TMaterialNode.Create;
Material3209.DiffuseColor := Vector3(1,1,1);
Material3209.EmissiveColor := Vector3(0.95,0.95,0.85);
{ METHOD .SetMaterial }
Appearance3208.Material := Material3209;
{ METHOD .Appearance }
Shape3207.Appearance := Appearance3208;
Text3210 := TTextNode.Create;
Text3210.SetText(['KEYBOARD H closes help, I says where you are, Esc = joint mode','J joint mode: Up parent, Down child, Left/Right sibling,',' PgUp/PgDn or P/N previous/next joint, Home/End first/last','R rotate mode: X Y Z or Up/Down choose axis, Left/Right adjust',' Shift = 10 degrees, Alt = 0.1, Home/End = limits, 0 = zero axis',' Delete = reset joint, Enter = type a value (Enter again applies)','T translate mode: same keys, moves the humanoid root in meters','D deselect E export L import M sound on/off V voice on/off','Mouse: hover gives sounds. Axis tones: X low, Y mid, Z high.',' X = 1 pulse, Y = 2 pulses, Z = 3 pulses. Pitch rises with value.']);
FontStyle3211 := TFontStyleNode.Create;
FontStyle3211.Justify := fjBEGIN;
FontStyle3211.JustifyMinor := fjFIRST;
FontStyle3211.Size := 0.085;
FontStyle3211.Spacing := 1.2;
{ METHOD .FontStyle }
Text3210.FontStyle := FontStyle3211;
{ METHOD .Geometry }
Shape3207.Geometry := Text3210;
{ METHOD .FdChildren.Add }
Transform3206.FdChildren.Add(Shape3207);
{ METHOD .FdChildren.Add }
Transform3200.FdChildren.Add(Transform3206);
{ METHOD .FdChildren.Add }
Switch3199.FdChildren.Add(Transform3200);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Switch3199);
StringSensor3212 := TStringSensorNode.Create;
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(StringSensor3212);
StringSensor3213 := TStringSensorNode.Create;
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(StringSensor3213);
{ ==================== SCRIPT CONTROLLER ==================== }
Script3214 := TScriptNode.Create;
Script3214.DirectOutput := True;
Script3214.SetUrl(['ecmascript: var names = [ ''humanoid_root'', ''sacroiliac'', ''l_hip'', ''l_knee'', ''l_talocrural'', ''l_talocalcaneonavicular'', ''l_cuneonavicular_1'', ''l_tarsometatarsal_1'', ''l_metatarsophalangeal_1'', ''l_tarsal_interphalangeal_1'', ''l_cuneonavicular_2'', ''l_tarsometatarsal_2'', ''l_metatarsophalangeal_2'', ''l_tarsal_proximal_interphalangeal_2'', ''l_tarsal_distal_interphalangeal_2'', ''l_cuneonavicular_3'', ''l_tarsometatarsal_3'', ''l_metatarsophalangeal_3'', ''l_tarsal_proximal_interphalangeal_3'', ''l_tarsal_distal_interphalangeal_3'', ''l_calcaneocuboid'', ''l_transversetarsal'', ''l_tarsometatarsal_4'', ''l_metatarsophalangeal_4'', ''l_tarsal_proximal_interphalangeal_4'', ''l_tarsal_distal_interphalangeal_4'', ''l_tarsometatarsal_5'', ''l_metatarsophalangeal_5'', ''l_tarsal_proximal_interphalangeal_5'', ''l_tarsal_distal_interphalangeal_5'', ''r_hip'', ''r_knee'', ''r_talocrural'', ''r_talocalcaneonavicular'', ''r_cuneonavicular_1'', ''r_tarsometatarsal_1'', ''r_metatarsophalangeal_1'', ''r_tarsal_interphalangeal_1'', ''r_cuneonavicular_2'', ''r_tarsometatarsal_2'', ''r_metatarsophalangeal_2'', ''r_tarsal_proximal_interphalangeal_2'', ''r_tarsal_distal_interphalangeal_2'', ''r_cuneonavicular_3'', ''r_tarsometatarsal_3'', ''r_metatarsophalangeal_3'', ''r_tarsal_proximal_interphalangeal_3'', ''r_tarsal_distal_interphalangeal_3'', ''r_calcaneocuboid'', ''r_transversetarsal'', ''r_tarsometatarsal_4'', ''r_metatarsophalangeal_4'', ''r_tarsal_proximal_interphalangeal_4'', ''r_tarsal_distal_interphalangeal_4'', ''r_tarsometatarsal_5'', ''r_metatarsophalangeal_5'', ''r_tarsal_proximal_interphalangeal_5'', ''r_tarsal_distal_interphalangeal_5'', ''vl5'', ''vl4'', ''vl3'', ''vl2'', ''vl1'', ''vt12'', ''vt11'', ''vt10'', ''vt9'', ''vt8'', ''vt7'', ''vt6'', ''vt5'', ''vt4'', ''vt3'', ''vt2'', ''vt1'', ''vc7'', ''vc6'', ''vc5'', ''vc4'', ''vc3'', ''vc2'', ''vc1'', ''skullbase'', ''l_eyelid_joint'', ''r_eyelid_joint'', ''l_eyeball_joint'', ''r_eyeball_joint'', ''l_eyebrow_joint'', ''r_eyebrow_joint'', ''temporomandibular'', ''l_sternoclavicular'', ''l_acromioclavicular'', ''l_shoulder'', ''l_elbow'', ''l_radiocarpal'', ''l_midcarpal_1'', ''l_carpometacarpal_1'', ''l_metacarpophalangeal_1'', ''l_carpal_interphalangeal_1'', ''l_midcarpal_2'', ''l_carpometacarpal_2'', ''l_metacarpophalangeal_2'', ''l_carpal_proximal_interphalangeal_2'', ''l_carpal_distal_interphalangeal_2'', ''l_midcarpal_3'', ''l_carpometacarpal_3'', ''l_metacarpophalangeal_3'', ''l_carpal_proximal_interphalangeal_3'', ''l_carpal_distal_interphalangeal_3'', ''l_midcarpal_4_5'', ''l_carpometacarpal_4'', ''l_metacarpophalangeal_4'', ''l_carpal_proximal_interphalangeal_4'', ''l_carpal_distal_interphalangeal_4'', ''l_carpometacarpal_5'', ''l_metacarpophalangeal_5'', ''l_carpal_proximal_interphalangeal_5'', ''l_carpal_distal_interphalangeal_5'', ''r_sternoclavicular'', ''r_acromioclavicular'', ''r_shoulder'', ''r_elbow'', ''r_radiocarpal'', ''r_midcarpal_1'', ''r_carpometacarpal_1'', ''r_metacarpophalangeal_1'', ''r_carpal_interphalangeal_1'', ''r_midcarpal_2'', ''r_carpometacarpal_2'', ''r_metacarpophalangeal_2'', ''r_carpal_proximal_interphalangeal_2'', ''r_carpal_distal_interphalangeal_2'', ''r_midcarpal_3'', ''r_carpometacarpal_3'', ''r_metacarpophalangeal_3'', ''r_carpal_proximal_interphalangeal_3'', ''r_carpal_distal_interphalangeal_3'', ''r_midcarpal_4_5'', ''r_carpometacarpal_4'', ''r_metacarpophalangeal_4'', ''r_carpal_proximal_interphalangeal_4'', ''r_carpal_distal_interphalangeal_4'', ''r_carpometacarpal_5'', ''r_metacarpophalangeal_5'', ''r_carpal_proximal_interphalangeal_5'', ''r_carpal_distal_interphalangeal_5'' ]; var parentName = [ null, ''humanoid_root'', ''sacroiliac'', ''l_hip'', ''l_knee'', ''l_talocrural'', ''l_talocalcaneonavicular'', ''l_cuneonavicular_1'', ''l_tarsometatarsal_1'', ''l_metatarsophalangeal_1'', ''l_talocalcaneonavicular'', ''l_cuneonavicular_2'', ''l_tarsometatarsal_2'', ''l_metatarsophalangeal_2'', ''l_tarsal_proximal_interphalangeal_2'', ''l_talocalcaneonavicular'', ''l_cuneonavicular_3'', ''l_tarsometatarsal_3'', ''l_metatarsophalangeal_3'', ''l_tarsal_proximal_interphalangeal_3'', ''l_talocrural'', ''l_calcaneocuboid'', ''l_transversetarsal'', ''l_tarsometatarsal_4'', ''l_metatarsophalangeal_4'', ''l_tarsal_proximal_interphalangeal_4'', ''l_transversetarsal'', ''l_tarsometatarsal_5'', ''l_metatarsophalangeal_5'', ''l_tarsal_proximal_interphalangeal_5'', ''sacroiliac'', ''r_hip'', ''r_knee'', ''r_talocrural'', ''r_talocalcaneonavicular'', ''r_cuneonavicular_1'', ''r_tarsometatarsal_1'', ''r_metatarsophalangeal_1'', ''r_talocalcaneonavicular'', ''r_cuneonavicular_2'', ''r_tarsometatarsal_2'', ''r_metatarsophalangeal_2'', ''r_tarsal_proximal_interphalangeal_2'', ''r_talocalcaneonavicular'', ''r_cuneonavicular_3'', ''r_tarsometatarsal_3'', ''r_metatarsophalangeal_3'', ''r_tarsal_proximal_interphalangeal_3'', ''r_talocrural'', ''r_calcaneocuboid'', ''r_transversetarsal'', ''r_tarsometatarsal_4'', ''r_metatarsophalangeal_4'', ''r_tarsal_proximal_interphalangeal_4'', ''r_transversetarsal'', ''r_tarsometatarsal_5'', ''r_metatarsophalangeal_5'', ''r_tarsal_proximal_interphalangeal_5'', ''humanoid_root'', ''vl5'', ''vl4'', ''vl3'', ''vl2'', ''vl1'', ''vt12'', ''vt11'', ''vt10'', ''vt9'', ''vt8'', ''vt7'', ''vt6'', ''vt5'', ''vt4'', ''vt3'', ''vt2'', ''vt1'', ''vc7'', ''vc6'', ''vc5'', ''vc4'', ''vc3'', ''vc2'', ''vc1'', ''skullbase'', ''skullbase'', ''skullbase'', ''skullbase'', ''skullbase'', ''skullbase'', ''skullbase'', ''vt1'', ''l_sternoclavicular'', ''l_acromioclavicular'', ''l_shoulder'', ''l_elbow'', ''l_radiocarpal'', ''l_midcarpal_1'', ''l_carpometacarpal_1'', ''l_metacarpophalangeal_1'', ''l_radiocarpal'', ''l_midcarpal_2'', ''l_carpometacarpal_2'', ''l_metacarpophalangeal_2'', ''l_carpal_proximal_interphalangeal_2'', ''l_radiocarpal'', ''l_midcarpal_3'', ''l_carpometacarpal_3'', ''l_metacarpophalangeal_3'', ''l_carpal_proximal_interphalangeal_3'', ''l_radiocarpal'', ''l_midcarpal_4_5'', ''l_carpometacarpal_4'', ''l_metacarpophalangeal_4'', ''l_carpal_proximal_interphalangeal_4'', ''l_midcarpal_4_5'', ''l_carpometacarpal_5'', ''l_metacarpophalangeal_5'', ''l_carpal_proximal_interphalangeal_5'', ''vt1'', ''r_sternoclavicular'', ''r_acromioclavicular'', ''r_shoulder'', ''r_elbow'', ''r_radiocarpal'', ''r_midcarpal_1'', ''r_carpometacarpal_1'', ''r_metacarpophalangeal_1'', ''r_radiocarpal'', ''r_midcarpal_2'', ''r_carpometacarpal_2'', ''r_metacarpophalangeal_2'', ''r_carpal_proximal_interphalangeal_2'', ''r_radiocarpal'', ''r_midcarpal_3'', ''r_carpometacarpal_3'', ''r_metacarpophalangeal_3'', ''r_carpal_proximal_interphalangeal_3'', ''r_radiocarpal'', ''r_midcarpal_4_5'', ''r_carpometacarpal_4'', ''r_metacarpophalangeal_4'', ''r_carpal_proximal_interphalangeal_4'', ''r_midcarpal_4_5'', ''r_carpometacarpal_5'', ''r_metacarpophalangeal_5'', ''r_carpal_proximal_interphalangeal_5'' ]; var side = []; var parentOf = []; var firstChild = []; var nKids = []; var prevSib = []; var nextSib = []; var title = [''LEFT'',''RIGHT'',''CENTER'']; var base = [[0.35,0.55,0.95],[0.95,0.45,0.35],[0.4,0.8,0.4]]; var sel = -1; var ang = []; var FREE = 6.28; var dragLogged = false; function log(m) { try { Browser.println(''[gimbal] '' + m); } catch (e) {} } function rotAbout(k, a, name) { log(name+''.rotation = SFRotation(''+(k==0?1:0)+'' ''+(k==1?1:0)+'' ''+(k==2?1:0)+'' ''+a+'');''); return new SFRotation(k==0?1:0, k==1?1:0, k==2?1:0, a); } function clamp(v, lo, hi) { return Math.max(lo, Math.min(hi, v)); } function deg(r) { return Math.round(r*180/Math.PI); } function lim(joint, k) { var l = joint.llimit, u = joint.ulimit; if (!l || !u || l.length < 3 || u.length < 3) return null; if (l[k] == u[k]) return null; return [l[k], u[k]]; } var lnames = [''humanoid_root'', ''sacroiliac'', ''l_hip'', ''l_knee'', ''l_talocrural'', ''l_talocalcaneonavicular'', ''l_cuneonavicular_1'', ''l_tarsometatarsal_1'', ''l_metatarsophalangeal_1'', ''l_tarsal_interphalangeal_1'', ''l_cuneonavicular_2'', ''l_tarsometatarsal_2'', ''l_metatarsophalangeal_2'', ''l_tarsal_proximal_interphalangeal_2'', ''l_tarsal_distal_interphalangeal_2'', ''l_cuneonavicular_3'', ''l_tarsometatarsal_3'', ''l_metatarsophalangeal_3'', ''l_tarsal_proximal_interphalangeal_3'', ''l_tarsal_distal_interphalangeal_3'', ''l_calcaneocuboid'', ''l_transversetarsal'', ''l_tarsometatarsal_4'', ''l_metatarsophalangeal_4'', ''l_tarsal_proximal_interphalangeal_4'', ''l_tarsal_distal_interphalangeal_4'', ''l_tarsometatarsal_5'', ''l_metatarsophalangeal_5'', ''l_tarsal_proximal_interphalangeal_5'', ''l_tarsal_distal_interphalangeal_5'', ''r_hip'', ''r_knee'', ''r_talocrural'', ''r_talocalcaneonavicular'', ''r_cuneonavicular_1'', ''r_tarsometatarsal_1'', ''r_metatarsophalangeal_1'', ''r_tarsal_interphalangeal_1'', ''r_cuneonavicular_2'', ''r_tarsometatarsal_2'', ''r_metatarsophalangeal_2'', ''r_tarsal_proximal_interphalangeal_2'', ''r_tarsal_distal_interphalangeal_2'', ''r_cuneonavicular_3'', ''r_tarsometatarsal_3'', ''r_metatarsophalangeal_3'', ''r_tarsal_proximal_interphalangeal_3'', ''r_tarsal_distal_interphalangeal_3'', ''r_calcaneocuboid'', ''r_transversetarsal'', ''r_tarsometatarsal_4'', ''r_metatarsophalangeal_4'', ''r_tarsal_proximal_interphalangeal_4'', ''r_tarsal_distal_interphalangeal_4'', ''r_tarsometatarsal_5'', ''r_metatarsophalangeal_5'', ''r_tarsal_proximal_interphalangeal_5'', ''r_tarsal_distal_interphalangeal_5'', ''vl5'', ''vl4'', ''vl3'', ''vl2'', ''vl1'', ''vt12'', ''vt11'', ''vt10'', ''vt9'', ''vt8'', ''vt7'', ''vt6'', ''vt5'', ''vt4'', ''vt3'', ''vt2'', ''vt1'', ''vc7'', ''vc6'', ''vc5'', ''vc4'', ''vc3'', ''vc2'', ''vc1'', ''skullbase'', ''l_eyelid_joint'', ''r_eyelid_joint'', ''l_eyeball_joint'', ''r_eyeball_joint'', ''l_eyebrow_joint'', ''r_eyebrow_joint'', ''temporomandibular'', ''l_sternoclavicular'', ''l_acromioclavicular'', ''l_shoulder'', ''l_elbow'', ''l_radiocarpal'', ''l_midcarpal_1'', ''l_carpometacarpal_1'', ''l_metacarpophalangeal_1'', ''l_carpal_interphalangeal_1'', ''l_midcarpal_2'', ''l_carpometacarpal_2'', ''l_metacarpophalangeal_2'', ''l_carpal_proximal_interphalangeal_2'', ''l_carpal_distal_interphalangeal_2'', ''l_midcarpal_3'', ''l_carpometacarpal_3'', ''l_metacarpophalangeal_3'', ''l_carpal_proximal_interphalangeal_3'', ''l_carpal_distal_interphalangeal_3'', ''l_midcarpal_4_5'', ''l_carpometacarpal_4'', ''l_metacarpophalangeal_4'', ''l_carpal_proximal_interphalangeal_4'', ''l_carpal_distal_interphalangeal_4'', ''l_carpometacarpal_5'', ''l_metacarpophalangeal_5'', ''l_carpal_proximal_interphalangeal_5'', ''l_carpal_distal_interphalangeal_5'', ''r_sternoclavicular'', ''r_acromioclavicular'', ''r_shoulder'', ''r_elbow'', ''r_radiocarpal'', ''r_midcarpal_1'', ''r_carpometacarpal_1'', ''r_metacarpophalangeal_1'', ''r_carpal_interphalangeal_1'', ''r_midcarpal_2'', ''r_carpometacarpal_2'', ''r_metacarpophalangeal_2'', ''r_carpal_proximal_interphalangeal_2'', ''r_carpal_distal_interphalangeal_2'', ''r_midcarpal_3'', ''r_carpometacarpal_3'', ''r_metacarpophalangeal_3'', ''r_carpal_proximal_interphalangeal_3'', ''r_carpal_distal_interphalangeal_3'', ''r_midcarpal_4_5'', ''r_carpometacarpal_4'', ''r_metacarpophalangeal_4'', ''r_carpal_proximal_interphalangeal_4'', ''r_carpal_distal_interphalangeal_4'', ''r_carpometacarpal_5'', ''r_metacarpophalangeal_5'', ''r_carpal_proximal_interphalangeal_5'', ''r_carpal_distal_interphalangeal_5'']; var lmatOf = {}; for (var li = 0; li < lnames.length; li++) { lmatOf[lnames[li]] = lmats[li]; } function paint(j, on) { var m = mats[j], c = base[side[j]], lm = lmatOf[names[j]]; if (on) { m.diffuseColor = new SFColor(1,0.85,0.1); m.emissiveColor = new SFColor(0.45,0.38,0); if (lm) lm.emissiveColor = new SFColor(1,0.85,0.1); } else { m.diffuseColor = new SFColor(c[0],c[1],c[2]); m.emissiveColor = new SFColor(0,0,0); if (lm) lm.emissiveColor = new SFColor(c[0],c[1],c[2]); } } function showLabel() { if (sel < 0) { label.string = new MFString(''GIMBAL'', ''no joint selected'', ''click a joint, or use NEXT''); syncUI(); return; } var a = ang[sel], s2 = '''', s3 = ''''; for (var k = 0; k < 3; k++) { var r = lim(joints[sel], k), n = ''XYZ''.charAt(k); s2 += n + '' '' + deg(a[k]) + '' ''; s3 += n + (r ? ''['' + deg(r[0]) + '','' + deg(r[1]) + '']'' : ''[free]'') + '' ''; } var s4 = ''parent '' + (parentOf[sel] >= 0 ? names[parentOf[sel]] : ''-'') + '' children '' + nKids[sel]; label.string = new MFString(title[side[sel]] + '': '' + names[sel] + '' ('' + (sel + 1) + ''/'' + names.length + '')'', s2, ''limits '' + s3, s4); syncUI(); } function applyJoint() { var a = ang[sel]; lastRot = rotAbout(0,a[0],names[sel]).multiply(rotAbout(1,a[1], names[sel])).multiply(rotAbout(2,a[2], names[sel])); joints[sel].rotation = lastRot; showLabel(); } function loadGimbal() { var joint = joints[sel], info = ''''; for (var k = 0; k < 3; k++) { try { var s = sensors[k], r = lim(joint, k), locked = false; if (r) { ang[sel][k] = clamp(ang[sel][k], r[0], r[1]); locked = (r[1] - r[0]) < 0.04; s.minAngle = r[0]; s.maxAngle = r[1]; } else { s.minAngle = -FREE; s.maxAngle = FREE; } s.offset = ang[sel][k]; s.enabled = true; ringMat[k].transparency = locked ? 0.65 : 0; ringXf[k].rotation = rotAbout(k, ang[sel][k], names[sel]); info += ''XYZ''.charAt(k) + ''['' + s.minAngle.toFixed(2) + '','' + s.maxAngle.toFixed(2) + '']'' + (locked ? ''L '' : '' ''); } catch (e) { log(''loadGimbal axis '' + k + '' error: '' + e); } } log(''rings '' + info); dragLogged = false; applyJoint(); } function select(j) { if (sel >= 0) paint(sel, false); sel = j; log(''selected '' + names[j]); paint(j, true); loadGimbal(); earSelect(j); } function clearSel() { if (sel >= 0) paint(sel, false); sel = -1; log(''deselected''); for (var k = 0; k < 3; k++) { try { sensors[k].enabled = true; ringMat[k].transparency = 0.65; ringXf[k].rotation = rotAbout(k, 0, ''''); } catch (e) { log(''clearSel axis '' + k + '' error: '' + e); } } earDeselect(); showLabel(); } function toggle(j) { if (j == sel) clearSel(); else select(j); } function drag(k, v) { if (sel < 0) return; if (!dragLogged) { dragLogged = true; log(''drag '' + ''XYZ''.charAt(k) + '' on '' + names[sel] + '' angle '' + v.angle); } var a = ((v.x + v.y + v.z) < 0 ? -1 : 1) * v.angle; var r = lim(joints[sel], k); if (r) a = clamp(a, r[0], r[1]); earMoveR(k, ang[sel][k], a, ''drag''); ang[sel][k] = a; ringXf[k].rotation = rotAbout(k, a, names[sel]); applyJoint(); } var lastRot = null; var uiSrc = -1; var activeIn = -1; var typedBuf = ''''; var SL = 0.75; function fl(v) { var o = ''''; for (var i = 0; i < 3; i++) o += (i ? '' '' : '''') + v[i].toFixed(4); return o; } function degf(r) { return r * 180 / Math.PI; } function fmt1(v) { return (Math.round(v * 10) / 10).toFixed(1); } function range(k) { var r = lim(joints[sel], k); return r ? r : [-FREE, FREE]; } function trim(s) { s = '''' + s; while (s.length > 0 && s.charAt(0) == '' '') s = s.substring(1); while (s.length > 0 && s.charAt(s.length - 1) == '' '') s = s.substring(0, s.length - 1); return s; } function setAxis(k, a) { var rg = range(k); a = clamp(a, rg[0], rg[1]); ang[sel][k] = a; sensors[k].offset = a; ringXf[k].rotation = rotAbout(k, a, names[sel]); } function syncUI() { var k; a11ySync(); if (sel < 0) { for (k = 0; k < 3; k++) { knobXf[k].translation = new SFVec3f(0, 0, 0); planeSens[k].offset = new SFVec3f(0, 0, 0); minTxt[k].string = new MFString(''-''); maxTxt[k].string = new MFString(''-''); inTxt[k].string = new MFString(''-''); inMat[k].diffuseColor = new SFColor(0.12, 0.12, 0.18); } outTxt.string = new MFString(''OUTPUT'', ''no joint selected'', ''click a joint, or use NEXT''); return; } var a = ang[sel], lines = []; for (k = 0; k < 3; k++) { var r = lim(joints[sel], k), rg = range(k); var t = clamp((a[k] - rg[0]) / (rg[1] - rg[0]), 0, 1); var x = -SL + 2 * SL * t; knobXf[k].translation = new SFVec3f(x, 0, 0); if (k != uiSrc) planeSens[k].offset = new SFVec3f(x, 0, 0); minTxt[k].string = new MFString(r ? '''' + deg(rg[0]) : ''-360''); maxTxt[k].string = new MFString(r ? '''' + deg(rg[1]) : ''360''); if (k == activeIn) { inTxt[k].string = new MFString(typedBuf + ''_''); inMat[k].diffuseColor = new SFColor(0.5, 0.45, 0.1); } else { inTxt[k].string = new MFString(fmt1(degf(a[k]))); inMat[k].diffuseColor = new SFColor(0.12, 0.12, 0.18); } } var q = lastRot; var rotStr = q ? (q.x.toFixed(4) + '' '' + q.y.toFixed(4) + '' '' + q.z.toFixed(4) + '' '' + q.angle.toFixed(4)) : ''-''; outTxt.string = new MFString( ''OUTPUT '' + title[side[sel]] + '': '' + names[sel], ''deg X '' + fmt1(degf(a[0])) + '' Y '' + fmt1(degf(a[1])) + '' Z '' + fmt1(degf(a[2])), ''rad X '' + a[0].toFixed(3) + '' Y '' + a[1].toFixed(3) + '' Z '' + a[2].toFixed(3), ''rotation '' + rotStr, ''llimit '' + fl(joints[sel].llimit), ''ulimit '' + fl(joints[sel].ulimit)); } function slide(k, v) { if (sel < 0) { syncUI(); return; } var rg = range(k); var t = clamp((v.x + SL) / (2 * SL), 0, 1); var a = rg[0] + t * (rg[1] - rg[0]); if (Math.abs(a - ang[sel][k]) < 0.0001) return; earMoveR(k, ang[sel][k], a, ''slide''); setAxis(k, a); uiSrc = k; applyJoint(); uiSrc = -1; } function pickIn(k) { if (activeT >= 0) { activeT = -1; typedBufT = ''''; syncT(); } if (sel < 0) return; activeIn = k; typedBuf = ''''; syncUI(); earTypeStart(k, 0); } function typedIn(str) { if (activeIn < 0 || sel < 0) return; typedBuf = '''' + str; syncUI(); earTypedKey(str); } function parseAngle(tok) { tok = trim(tok); if (tok.length == 0) return NaN; var last = tok.charAt(tok.length - 1); var isRad = (last == ''r'' || last == ''R''); var v = parseFloat(tok); if (isNaN(v)) return NaN; return isRad ? v : v * Math.PI / 180; } function typedFinalIn(str) { if (activeIn < 0 || sel < 0) return; var s = trim(str).split('','').join('' ''); var raw = s.split('' ''), toks = []; for (var i = 0; i < raw.length; i++) if (raw[i].length > 0) toks.push(raw[i]); typedBuf = ''''; var k = activeIn; if (toks.length == 3) { var v = [parseAngle(toks[0]), parseAngle(toks[1]), parseAngle(toks[2])]; if (!isNaN(v[0]) && !isNaN(v[1]) && !isNaN(v[2])) { for (var j = 0; j < 3; j++) setAxis(j, v[j]); activeIn = -1; applyJoint(); earCommit(0); return; } } else if (toks.length == 1) { var a = parseAngle(toks[0]); if (!isNaN(a)) { setAxis(k, a); activeIn = (k + 1) % 3; applyJoint(); earCommit(0); return; } } earBad(); syncUI(); } function slideX(v){ try { slide(0, v); } catch (e) { log(''slide X error: '' + e); } } function slideY(v){ try { slide(1, v); } catch (e) { log(''slide Y error: '' + e); } } function slideZ(v){ try { slide(2, v); } catch (e) { log(''slide Z error: '' + e); } } function pickInX(t){ try { pickIn(0); } catch (e) { log(''pickIn X error: '' + e); } } function pickInY(t){ try { pickIn(1); } catch (e) { log(''pickIn Y error: '' + e); } } function pickInZ(t){ try { pickIn(2); } catch (e) { log(''pickIn Z error: '' + e); } } function typed(v){ try { typedIn(v); } catch (e) { log(''typed error: '' + e); } } function typedFinal(v){ try { typedFinalIn(v); } catch (e) { log(''typedFinal error: '' + e); } } var fileInput = null; function setIO(m) { try { ioText.string = new MFString(m); } catch (e) {} log(m); } function numsOf(str, def, n) { if (!str) return def; var raw = ('''' + str).split('','').join('' '').split('' ''), out = []; for (var i = 0; i < raw.length; i++) { if (raw[i].length > 0) { var v = parseFloat(raw[i]); if (isNaN(v)) return def; out.push(v); } } return out.length == n ? out : def; } function eulerOf(r) { var x = r[0], y = r[1], z = r[2], an = r[3]; var len = Math.sqrt(x*x + y*y + z*z); if (len < 1e-9 || Math.abs(an) < 1e-9) return [0, 0, 0]; x /= len; y /= len; z /= len; var c = Math.cos(an), s = Math.sin(an), t = 1 - c; var r01 = t*x*y - s*z, r02 = t*x*z + s*y, r00 = t*x*x + c; var r11 = t*y*y + c, r12 = t*y*z - s*x, r21 = t*y*z + s*x, r22 = t*z*z + c; var b = Math.asin(clamp(r02, -1, 1)); if (Math.abs(Math.cos(b)) > 1e-6) return [Math.atan2(-r12, r22), b, Math.atan2(-r01, r00)]; return [Math.atan2(r21, r11), b, 0]; } function v3s(v) { function q(a) { return '''' + parseFloat(a.toFixed(6)); } return q(v.x) + '' '' + q(v.y) + '' '' + q(v.z); } function cenOf(i) { var c = joints[i].center; return [c.x, c.y, c.z]; } function dist3(a, b) { return Math.sqrt((a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]) + (a[2]-b[2])*(a[2]-b[2])); } function setLine(coord, a, b) { coord.point = new MFVec3f(new SFVec3f(a[0], a[1], a[2]), new SFVec3f(b[0], b[1], b[2])); } function leafEnd(i) { var c = cenOf(i), a = parentOf[i]; while (a >= 0 && dist3(cenOf(a), c) < 1e-4) a = parentOf[a]; if (a < 0) return [c[0], c[1] + 0.03, c[2]]; var pc = cenOf(a), L = dist3(pc, c), ext = Math.min(Math.max(L, 0.015), 0.05); return [c[0] + (c[0]-pc[0])/L*ext, c[1] + (c[1]-pc[1])/L*ext, c[2] + (c[2]-pc[2])/L*ext]; } var lcStart = null; function updateLines(i) { if (!lcStart) { lcStart = []; var n = 0; for (var q = 0; q < names.length; q++) { lcStart[q] = n; n += Math.max(1, nKids[q]); } } var c = cenOf(i), k = firstChild[i], m = 0; if (k < 0) { setLine(lcoords[lcStart[i]], c, leafEnd(i)); return; } while (k >= 0) { setLine(lcoords[lcStart[i] + m], c, cenOf(k)); m++; k = nextSib[k]; } } function updateGeom(changed) { var todo = {}, order = []; function add(i) { if (i >= 0 && !todo[i]) { todo[i] = true; order.push(i); } } for (var a = 0; a < changed.length; a++) { var i = changed[a], c = cenOf(i); jxf[i].translation = new SFVec3f(c[0], c[1], c[2]); add(i); add(parentOf[i]); var k = firstChild[i]; while (k >= 0) { add(k); k = nextSib[k]; } } for (var b = 0; b < order.length; b++) updateLines(order[b]); } function saveText(fname, text) { var blob = new Blob([text], { type: ''model/x3d+xml'' }); var url = URL.createObjectURL(blob); var a = document.createElement(''a''); a.href = url; a.download = fname; a.style.display = ''none''; document.body.appendChild(a); a.click(); setTimeout(function () { document.body.removeChild(a); URL.revokeObjectURL(url); }, 1000); } function normalizeBody(body) { try { var d = new DOMParser().parseFromString(body, ''text/xml''); if (d.getElementsByTagName(''parsererror'').length > 0) return body; var idx = {}, i; for (i = 0; i < names.length; i++) idx[names[i]] = i; var els = d.getElementsByTagName(''HAnimJoint''); for (var e = 0; e < els.length; e++) { var el = els[e], nm = el.getAttribute(''name''); if (el.getAttribute(''USE'') || !nm || idx[nm] === undefined) continue; var j = joints[idx[nm]]; if (!el.hasAttribute(''center'')) el.setAttribute(''center'', v3s(j.center)); if (!el.hasAttribute(''translation'')) el.setAttribute(''translation'', v3s(j.translation)); } var r = d.documentElement; if (r.tagName == ''HAnimHumanoid'') { if (!r.hasAttribute(''center'')) r.setAttribute(''center'', v3s(humanoid.center)); if (!r.hasAttribute(''translation'')) r.setAttribute(''translation'', v3s(humanoid.translation)); } return new XMLSerializer().serializeToString(r); } catch (ex) { log(''export normalize skipped: '' + ex); return body; } } function exportNow() { var wasSel = sel, body = null; if (wasSel >= 0) paint(wasSel, false); try { body = humanoid.toXMLString(); } finally { if (wasSel >= 0) paint(wasSel, true); } if (!body) { setIO(''export failed: toXMLString not available''); return; } body = normalizeBody(body); var NL = String.fromCharCode(10), DQ = String.fromCharCode(34); var doc = ''<?xml version=~1.0~ encoding=~UTF-8~?>'' + NL + ''<!DOCTYPE X3D PUBLIC ~ISO//Web3D//DTD X3D 4.0//EN~ ~https://www.web3d.org/specifications/x3d-4.0.dtd~>'' + NL + ''<X3D profile=~Immersive~ version=~4.0~ xmlns:xsd=~http://www.w3.org/2001/XMLSchema-instance~ xsd:noNamespaceSchemaLocation=~https://www.web3d.org/specifications/x3d-4.0.xsd~>'' + NL + '' <head>'' + NL + '' <component name=~HAnim~ level=~1~/>'' + NL + '' <meta name=~title~ content=~HAnimHumanoid.x3d~/>'' + NL + '' <meta name=~description~ content=~Humanoid exported from HAnimGimbalJointController18~/>'' + NL + '' </head>'' + NL + '' <Scene>'' + NL + '' <Viewpoint description=~Front~ position=~-0.3 1.3 7.0~/>'' + NL; doc = doc.split(''~'').join(DQ) + body + NL + '' </Scene>'' + NL + ''</X3D>'' + NL; saveText(''HAnimHumanoid.x3d'', doc); setIO(''exported humanoid ('' + doc.length + '' chars, centers + translations) to HAnimHumanoid.x3d''); } function applyImport(text, fname) { var doc = new DOMParser().parseFromString(text, ''text/xml''); if (doc.getElementsByTagName(''parsererror'').length > 0) { setIO(''import failed: '' + fname + '' is not well-formed X3D XML''); return; } var els = doc.getElementsByTagName(''HAnimJoint''), byName = {}; for (var e = 0; e < els.length; e++) { var nm = els[e].getAttribute(''name''); if (nm && !els[e].getAttribute(''USE'')) byName[nm] = els[e]; } var count = 0, missing = 0, moved = []; for (var i = 0; i < names.length; i++) { var el = byName[names[i]]; if (!el) { missing++; continue; } var j = joints[i]; var rot = numsOf(el.getAttribute(''rotation''), [0, 0, 1, 0], 4); var tr = numsOf(el.getAttribute(''translation''), [0, 0, 0], 3); var sc = numsOf(el.getAttribute(''scale''), [1, 1, 1], 3); var so = numsOf(el.getAttribute(''scaleOrientation''), [0, 0, 1, 0], 4); var ce = numsOf(el.getAttribute(''center''), null, 3); if (ce) { var oc = j.center; if (Math.abs(oc.x - ce[0]) > 1e-6 || Math.abs(oc.y - ce[1]) > 1e-6 || Math.abs(oc.z - ce[2]) > 1e-6) { j.center = new SFVec3f(ce[0], ce[1], ce[2]); moved.push(i); } } j.rotation = new SFRotation(rot[0], rot[1], rot[2], rot[3]); j.translation = new SFVec3f(tr[0], tr[1], tr[2]); j.scale = new SFVec3f(sc[0], sc[1], sc[2]); j.scaleOrientation = new SFRotation(so[0], so[1], so[2], so[3]); ang[i] = eulerOf(rot); count++; } if (count == 0) { setIO(''import: no matching HAnimJoint names in '' + fname); return; } if (moved.length > 0) updateGeom(moved); syncT(); if (sel >= 0) loadGimbal(); else showLabel(); setIO(''imported '' + count + ''/'' + names.length + '' joints from '' + fname + '' ('' + moved.length + '' centers changed'' + (missing > 0 ? '', '' + missing + '' joints not found'' : '''') + '')''); } function importNow() { fileInput = document.createElement(''input''); fileInput.type = ''file''; fileInput.accept = ''.x3d,.xml''; fileInput.onchange = function () { var f = fileInput.files[0]; if (!f) return; var rd = new FileReader(); rd.onload = function () { try { applyImport('''' + rd.result, f.name); } catch (e) { setIO(''import error: '' + e); } }; rd.readAsText(f); }; fileInput.click(); } function exportHumanoid(t){ try { earPress(); exportNow(); } catch (e) { setIO(''export error: '' + e); } } function importHumanoid(t){ try { earPress(); importNow(); } catch (e) { setIO(''import error: '' + e); } } var TR = 6.0; var origT = [0, 0, 0]; var activeT = -1; var typedBufT = ''''; var uiSrcT = -1; function rootJ() { return joints[0]; } function getT() { var t = rootJ().translation; return [t.x, t.y, t.z]; } function fmt3(v) { return (Math.round(v * 1000) / 1000).toFixed(3); } function setT(k, v) { v = clamp(v, -TR, TR); var t = getT(); t[k] = v; rootJ().translation = new SFVec3f(t[0], t[1], t[2]); } function syncT() { a11ySync(); var t = getT(); for (var k = 0; k < 3; k++) { var x = clamp(t[k] / TR, -1, 1) * SL; tknobXf[k].translation = new SFVec3f(x, 0, 0); if (k != uiSrcT) tplaneSens[k].offset = new SFVec3f(x, 0, 0); if (k == activeT) { tinTxt[k].string = new MFString(typedBufT + ''_''); tinMat[k].diffuseColor = new SFColor(0.5, 0.45, 0.1); } else { tinTxt[k].string = new MFString(fmt3(t[k])); tinMat[k].diffuseColor = new SFColor(0.12, 0.12, 0.18); } } } function initT() { origT = getT(); log(''root original translation '' + origT[0] + '' '' + origT[1] + '' '' + origT[2]); syncT(); } function slideT(k, v) { var a = clamp(v.x / SL, -1, 1) * TR; if (Math.abs(a - getT()[k]) < 0.00005) return; earMoveT(k, getT()[k], a, ''slide''); setT(k, a); uiSrcT = k; syncT(); uiSrcT = -1; } function pickT(k) { if (activeIn >= 0) { activeIn = -1; typedBuf = ''''; if (sel >= 0) syncUI(); } activeT = k; typedBufT = ''''; syncT(); earTypeStart(k, 1); } function typedT_(str) { if (activeT < 0) return; typedBufT = '''' + str; syncT(); earTypedKey(str); } function parseMeters(tok) { tok = trim(tok); if (tok.length == 0) return NaN; return parseFloat(tok); } function typedFinalT_(str) { if (activeT < 0) return; var s = trim(str).split('','').join('' ''); var raw = s.split('' ''), toks = []; for (var i = 0; i < raw.length; i++) if (raw[i].length > 0) toks.push(raw[i]); typedBufT = ''''; var k = activeT; if (toks.length == 3) { var v = [parseMeters(toks[0]), parseMeters(toks[1]), parseMeters(toks[2])]; if (!isNaN(v[0]) && !isNaN(v[1]) && !isNaN(v[2])) { for (var j = 0; j < 3; j++) setT(j, v[j]); activeT = -1; syncT(); earCommit(1); return; } } else if (toks.length == 1) { var a = parseMeters(toks[0]); if (!isNaN(a)) { setT(k, a); activeT = (k + 1) % 3; syncT(); earCommit(1); return; } } earBad(); syncT(); } function resetTranslation() { rootJ().translation = new SFVec3f(0, 0, 0); activeT = -1; typedBufT = ''''; syncT(); log(''root translation reset to 0 0 0''); earSay(''Root position reset to zero''); } function slideTX(v){ try { slideT(0, v); } catch (e) { log(''slide TX error: '' + e); } } function slideTY(v){ try { slideT(1, v); } catch (e) { log(''slide TY error: '' + e); } } function slideTZ(v){ try { slideT(2, v); } catch (e) { log(''slide TZ error: '' + e); } } function pickTInX(t){ try { pickT(0); } catch (e) { log(''pickT X error: '' + e); } } function pickTInY(t){ try { pickT(1); } catch (e) { log(''pickT Y error: '' + e); } } function pickTInZ(t){ try { pickT(2); } catch (e) { log(''pickT Z error: '' + e); } } function typedT(v){ try { typedT_(v); } catch (e) { log(''typedT error: '' + e); } } function typedFinalT(v){ try { typedFinalT_(v); } catch (e) { log(''typedFinalT error: '' + e); } } function resetT(t){ try { earPress(); resetTranslation(); } catch (e) { log(''resetT error: '' + e); } } /* ACCESSIBILITY LAYER (v22): sounds, speech, aria-live, keyboard modes J/R/T, hover and focus highlights. Axis tones: X low 1 pulse, Y mid 2 pulses, Z high 3 pulses; pitch and pan follow the value. */ var AXN = [''X'', ''Y'', ''Z'']; var AXF = [165, 415, 1040]; var AXW = [''triangle'', ''sine'', ''sine'']; var AXV = [0.26, 0.2, 0.12]; var BTN = [''previous joint'', ''next joint'', ''parent joint'', ''first child joint'', ''previous sibling'', ''next sibling'', ''reset selected joint'', ''deselect joint'', ''export humanoid'', ''import humanoid'', ''reset root position'']; var snd = true, vox = true, helpOn = false, a11yReady = false, domKeys = false; var mode = ''J'', kAx = 0; var actx_ = null, master = null, live = null; var lastSay = '''', lastMoveSnd = 0, sayTimer = null, hoverJ = -1, lastTypedLen = 0; var depthOf = []; function actx() { try { if (!actx_) { var C = window.AudioContext || window.webkitAudioContext; if (!C) return null; actx_ = new C(); master = actx_.createGain(); master.gain.value = 0.6; master.connect(actx_.destination); } if (actx_.state == ''suspended'') { var pr = actx_.resume(); if (pr && pr.catch) pr.catch(function () {}); } return actx_; } catch (e) { return null; } } function unlock() { actx(); } function beep(f, d, type, v, pan, delay) { if (!snd) return; var ac = actx(); if (!ac) return; try { var t0 = ac.currentTime + (delay || 0); var o = ac.createOscillator(), g = ac.createGain(); o.type = type || ''sine''; o.frequency.setValueAtTime(f, t0); g.gain.setValueAtTime(0.0001, t0); g.gain.exponentialRampToValueAtTime(Math.max(0.0002, v || 0.2), t0 + 0.008); g.gain.exponentialRampToValueAtTime(0.0001, t0 + d); o.connect(g); if (ac.createStereoPanner) { var p = ac.createStereoPanner(); p.pan.value = clamp(pan || 0, -1, 1); g.connect(p); p.connect(master); } else { g.connect(master); } o.start(t0); o.stop(t0 + d + 0.03); } catch (e) {} } function seq(freqs, step, type, vol, pan) { for (var i = 0; i < freqs.length; i++) beep(freqs[i], step * 1.4, type, vol, pan, i * step); } function pulses(n, f, type, vol, pan, delay) { for (var i = 0; i < n; i++) beep(f, 0.07, type, vol, pan, (delay || 0) + i * 0.13); } function thud(dir) { beep(70, 0.22, ''sine'', 0.6, dir * 0.8); beep(140, 0.06, ''square'', 0.12, dir * 0.8); } function errTone() { beep(150, 0.2, ''sawtooth'', 0.15, 0); beep(110, 0.2, ''sawtooth'', 0.15, 0, 0.12); } function trunc(s, n) { s = '''' + s; return s.length > n ? s.substring(0, n - 1) + ''...'' : s; } function speak(msg) { try { var ss = window.speechSynthesis; if (!ss) return; ss.cancel(); var u = new SpeechSynthesisUtterance(msg); u.rate = 1.15; ss.speak(u); } catch (e) {} } function say(msg) { lastSay = '''' + msg; showStatus(); try { if (live) { live.textContent = ''''; setTimeout(function () { try { live.textContent = lastSay; } catch (e2) {} }, 40); } } catch (e) {} if (vox) speak(msg); } function clearSayTimer() { if (sayTimer) { clearTimeout(sayTimer); sayTimer = null; } } function sayLater(msg, ms) { clearSayTimer(); sayTimer = setTimeout(function () { sayTimer = null; say(msg); }, ms); } function earSay(msg) { if (a11yReady) say(msg); } function earBlocked(msg) { errTone(); say(msg); } function earPress() { if (a11yReady) beep(780, 0.05, ''square'', 0.09, 0); } function showStatus() { try { var m = mode == ''J'' ? ''JOINT'' : (mode == ''R'' ? ''ROTATE '' + AXN[kAx] : ''TRANSLATE '' + AXN[kAx]); statusText.string = new MFString(''MODE '' + m + '' | H keys | sound '' + (snd ? ''on'' : ''off'') + '' voice '' + (vox ? ''on'' : ''off''), trunc(lastSay, 62)); } catch (e) {} } function pretty(n) { var s = '''' + n, m; if (s.indexOf(''l_'') == 0) s = ''left '' + s.substring(2); else if (s.indexOf(''r_'') == 0) s = ''right '' + s.substring(2); m = /^v([ctl])([0-9]+)$/.exec(s); if (m) return (m[1] == ''c'' ? ''cervical'' : (m[1] == ''t'' ? ''thoracic'' : ''lumbar'')) + '' vertebra '' + m[2]; return s.split(''_'').join('' ''); } function sidePan(j) { return side[j] == 0 ? -0.8 : (side[j] == 1 ? 0.8 : 0); } function jointFreq(j) { return 262 * Math.pow(2, Math.min(depthOf[j] || 0, 18) / 9); } function jointPhrase(j) { var s = pretty(names[j]) + '', '' + (j + 1) + '' of '' + names.length; s += parentOf[j] >= 0 ? '', parent '' + pretty(names[parentOf[j]]) : '', root joint''; s += '', '' + nKids[j] + (nKids[j] == 1 ? '' child'' : '' children''); return s; } function limitsPhrase(j) { var o = []; for (var k = 0; k < 3; k++) { var r = lim(joints[j], k); o.push(AXN[k] + (r ? '' '' + deg(r[0]) + '' to '' + deg(r[1]) : '' free'')); } return ''limits in degrees: '' + o.join('', ''); } function axisPhrase(k) { if (sel < 0) return ''no joint selected''; var r = lim(joints[sel], k); return fmt1(degf(ang[sel][k])) + '' degrees, '' + (r ? ''limits '' + deg(r[0]) + '' to '' + deg(r[1]) : ''free''); } function transPhrase(k) { return fmt3(getT()[k]) + '' meters''; } function axisSpeech() { return mode == ''T'' ? AXN[kAx] + '' translation, '' + transPhrase(kAx) : AXN[kAx] + '' rotation, '' + axisPhrase(kAx); } function valueSpeech() { if (mode == ''T'') return AXN[kAx] + '' '' + fmt3(getT()[kAx]) + '' meters''; return AXN[kAx] + '' '' + fmt1(degf(ang[sel][kAx])) + '' degrees''; } function hoverPaint(j, on) { try { if (on) { if (j == sel) return; mats[j].diffuseColor = new SFColor(1, 1, 1); mats[j].emissiveColor = new SFColor(0.75, 0.75, 0.75); var lm = lmatOf[names[j]]; if (lm) lm.emissiveColor = new SFColor(1, 1, 1); } else { paint(j, j == sel); } } catch (e) {} } function paintFocus() { try { for (var k = 0; k < 3; k++) { inMat[k].emissiveColor = (mode == ''R'' && k == kAx && sel >= 0) ? new SFColor(0, 0.22, 0.35) : new SFColor(0, 0, 0); tinMat[k].emissiveColor = (mode == ''T'' && k == kAx) ? new SFColor(0, 0.22, 0.35) : new SFColor(0, 0, 0); } } catch (e) {} } function a11ySync() { try { var typR = activeIn >= 0, typT = activeT >= 0; var wantR = domKeys ? false : typR, wantT = domKeys ? false : typT; if (strSens.enabled != wantR) strSens.enabled = wantR; if (strSensT.enabled != wantT) strSensT.enabled = wantT; } catch (e) {} paintFocus(); } function earSelect(j) { if (!a11yReady) return; var f = jointFreq(j), p = sidePan(j); beep(f, 0.09, ''triangle'', 0.2, p); beep(f * 1.5, 0.12, ''triangle'', 0.2, p, 0.09); say(jointPhrase(j) + '', selected''); } function earDeselect() { if (!a11yReady) return; beep(520, 0.08, ''triangle'', 0.18, 0); beep(390, 0.12, ''triangle'', 0.18, 0, 0.08); say(''Joint deselected''); } function overJoint(j, b) { if (j < 0 || !a11yReady) return; if (b) { hoverJ = j; hoverPaint(j, true); var f = jointFreq(j), p = sidePan(j); beep(f, 0.06, ''sine'', 0.15, p); if (j == sel) beep(f * 2, 0.05, ''sine'', 0.1, p, 0.07); sayLater(pretty(names[j]) + (j == sel ? '', selected'' : ''''), 220); } else { if (hoverJ == j) hoverJ = -1; hoverPaint(j, false); clearSayTimer(); } } function overBtn(i, b) { if (!a11yReady) return; try { var m = btnMats[i]; if (b) { m.emissiveColor = new SFColor(0.35, 0.35, 0.65); m.diffuseColor = new SFColor(0.32, 0.32, 0.45); beep(540 + i * 14, 0.045, ''sine'', 0.13, 0); sayLater(BTN[i] + '' button'', 200); } else { m.emissiveColor = new SFColor(0.08, 0.08, 0.14); m.diffuseColor = new SFColor(0.2, 0.2, 0.28); clearSayTimer(); } } catch (e) {} } function knobGlow(idx, on) { try { var m = knobMats[idx]; m.emissiveColor = on ? new SFColor(0.95, 0.95, 0.95) : new SFColor(0.5, 0.1, 0.1); if (!on) { var k = idx % 3; if (k == 1) m.emissiveColor = new SFColor(0.1, 0.5, 0.1); if (k == 2) m.emissiveColor = new SFColor(0.15, 0.25, 0.5); } } catch (e) {} } function overSlider(k, grp, ring, b) { if (!a11yReady) return; if (b) { var d0 = grp == 1 ? 0.14 : 0; if (grp == 1) beep(82, 0.09, ''sine'', 0.3, 0); pulses(k + 1, AXF[k], AXW[k], AXV[k], 0, d0); if (ring) pulses(k + 1, AXF[k] * 1.012, AXW[k], AXV[k] * 0.8, 0, d0); if (!ring) knobGlow(grp * 3 + k, true); var what = grp == 1 ? '' translation slider, '' + transPhrase(k) : (ring ? '' rotation ring, '' + axisPhrase(k) : '' rotation slider, '' + axisPhrase(k)); sayLater(AXN[k] + what, 200 + 130 * (k + 1) + d0 * 1000); } else { if (!ring) knobGlow(grp * 3 + k, false); clearSayTimer(); } } function overBox(k, grp, b) { if (!a11yReady) return; if (b) { beep(AXF[k] * 2, 0.05, ''sine'', 0.1, 0); sayLater(AXN[k] + (grp == 1 ? '' translation input box, '' + transPhrase(k) : '' rotation input box, '' + (sel < 0 ? ''no joint selected'' : fmt1(degf(ang[sel][k])) + '' degrees'')) + ''. Click to type a value'', 260); } else { clearSayTimer(); } } function actCtl(k, b) { if (!a11yReady) return; if (b) beep(AXF[k] * 2, 0.03, ''square'', 0.1, 0); else beep(AXF[k], 0.05, ''sine'', 0.12, 0); } function moveCue(k, grp, old, a, lo, hi, src) { if (!a11yReady) return 0; var span = hi - lo, t = span > 0 ? clamp((a - lo) / span, 0, 1) : 0.5; var atMax = a >= hi - 0.000001, atMin = a <= lo + 0.000001; var wasMax = old >= hi - 0.000001, wasMin = old <= lo + 0.000001; var hit = atMax ? 1 : (atMin ? -1 : 0); if (hit != 0) { if (src == ''key'' || (atMax && !wasMax) || (atMin && !wasMin)) thud(hit); return hit; } if ((old < 0 && a >= 0) || (old > 0 && a <= 0)) beep(1320, 0.04, ''square'', 0.12, 2 * t - 1); var now = (new Date()).getTime(); if (now - lastMoveSnd > 45) { lastMoveSnd = now; beep(AXF[k] * Math.pow(2, t), 0.07, AXW[k], AXV[k], 2 * t - 1); } return 0; } function earMoveR(k, old, a, src) { var rg = range(k); return moveCue(k, 0, old, a, rg[0], rg[1], src); } function earMoveT(k, old, a, src) { return moveCue(k, 1, old, a, -TR, TR, src); } function charName(c) { if (c == ''.'') return ''point''; if (c == ''-'') return ''minus''; if (c == ''+'') return ''plus''; if (c == '' '') return ''space''; if (c == '','') return ''comma''; return c; } function earTypeStart(k, grp) { kAx = k; mode = grp == 0 ? ''R'' : ''T''; lastTypedLen = 0; paintFocus(); if (!a11yReady) return; beep(900, 0.04, ''sine'', 0.15, 0); beep(1200, 0.05, ''sine'', 0.15, 0, 0.06); say(''Typing '' + AXN[k] + (grp == 0 ? '' rotation in degrees'' : '' translation in meters'') + ''. Type a number, then Enter. Enter on an empty box finishes. Escape cancels.''); } function earTypedKey(str) { if (!a11yReady) return; var s = '''' + str, n = s.length; if (n > lastTypedLen) { beep(700 + n * 20, 0.025, ''square'', 0.07, 0); speak(charName(s.charAt(n - 1))); } else { beep(300, 0.04, ''square'', 0.08, 0); speak(''deleted''); } lastTypedLen = n; } function earCommit(grp) { lastTypedLen = 0; if (!a11yReady) return; beep(660, 0.06, ''triangle'', 0.18, 0); beep(990, 0.09, ''triangle'', 0.18, 0, 0.07); var s = ''Applied. '', k; if (grp == 0) { var a = ang[sel]; s += ''X '' + fmt1(degf(a[0])) + '', Y '' + fmt1(degf(a[1])) + '', Z '' + fmt1(degf(a[2])) + '' degrees.''; k = activeIn; } else { var t = getT(); s += ''X '' + fmt3(t[0]) + '', Y '' + fmt3(t[1]) + '', Z '' + fmt3(t[2]) + '' meters.''; k = activeT; } if (k >= 0) { kAx = k; s += '' Now typing '' + AXN[k] + ''.''; } say(s); } function earBad() { lastTypedLen = 0; if (!a11yReady) return; errTone(); say(''That is not a number. Try again, or press Escape.''); } function consume(e) { try { e.preventDefault(); e.stopPropagation(); } catch (x) {} } function setMode(m) { if (m == ''R'' && sel < 0) { earBlocked(''Rotate mode needs a joint. Press N to select the first joint.''); return; } mode = m; if (m == ''J'') seq([392, 523], 0.09, ''triangle'', 0.2, 0); else if (m == ''R'') seq([330, 415, 523], 0.08, ''triangle'', 0.2, 0); else seq([523, 415, 330], 0.08, ''triangle'', 0.2, 0); a11ySync(); if (m == ''J'') say(''Joint mode. Up arrow parent, down arrow child, left and right arrows siblings. N and P next and previous joint.''); else if (m == ''R'') say(''Rotate mode. '' + pretty(names[sel]) + ''. Axis '' + axisSpeech() + ''. Left and right arrows adjust.''); else say(''Translate mode, humanoid root. Axis '' + axisSpeech() + ''. Left and right arrows adjust.''); } function focusAxis(k) { kAx = (k + 3) % 3; a11ySync(); pulses(kAx + 1, AXF[kAx], AXW[kAx], AXV[kAx], 0); sayLater(axisSpeech(), 200 + 130 * (kAx + 1)); } function afterMove(hit) { sayLater(valueSpeech() + (hit > 0 ? '', maximum'' : (hit < 0 ? '', minimum'' : '''')), 110); } function nudge(dir, mult) { var k = kAx, old, a, rg, hit; if (mode == ''R'') { if (sel < 0) { earBlocked(''No joint selected. Press N to select the first joint.''); return; } rg = range(k); old = ang[sel][k]; a = clamp(old + dir * (mult == 2 ? 10 : (mult == 0 ? 0.1 : 1)) * Math.PI / 180, rg[0], rg[1]); hit = earMoveR(k, old, a, ''key''); setAxis(k, a); applyJoint(); } else { old = getT()[k]; a = clamp(old + dir * (mult == 2 ? 0.1 : (mult == 0 ? 0.001 : 0.01)), -TR, TR); hit = earMoveT(k, old, a, ''key''); setT(k, a); syncT(); } afterMove(hit); } function jump(which) { var k = kAx, old, a, lo, hi, hit, rg; if (mode == ''R'') { if (sel < 0) { earBlocked(''No joint selected. Press N to select the first joint.''); return; } rg = range(k); lo = rg[0]; hi = rg[1]; old = ang[sel][k]; } else { lo = -TR; hi = TR; old = getT()[k]; } a = which == ''min'' ? lo : (which == ''max'' ? hi : clamp(0, lo, hi)); hit = mode == ''R'' ? earMoveR(k, old, a, ''key'') : earMoveT(k, old, a, ''key''); if (which == ''zero'') beep(1320, 0.05, ''square'', 0.12, 0); if (mode == ''R'') { setAxis(k, a); applyJoint(); } else { setT(k, a); syncT(); } afterMove(hit); } function describe() { var s = ''Mode '' + (mode == ''J'' ? ''joint'' : (mode == ''R'' ? ''rotate, axis '' + AXN[kAx] : ''translate, axis '' + AXN[kAx])) + ''. ''; if (sel < 0) s += ''No joint selected. ''; else { var a = ang[sel]; s += jointPhrase(sel) + ''. X '' + fmt1(degf(a[0])) + '', Y '' + fmt1(degf(a[1])) + '', Z '' + fmt1(degf(a[2])) + '' degrees. '' + limitsPhrase(sel) + ''. ''; } var t = getT(); s += ''Root position X '' + fmt3(t[0]) + '', Y '' + fmt3(t[1]) + '', Z '' + fmt3(t[2]) + '' meters.''; say(s); } function toggleHelp() { helpOn = !helpOn; try { helpSwitch.whichChoice = helpOn ? 0 : -1; } catch (e) {} if (helpOn) say(''Keyboard help shown. J joint mode: arrows move to the parent, child and siblings. R rotate mode: X Y Z or up and down choose the axis, left and right adjust, shift for ten degrees, alt for a tenth, Home and End jump to the limits, zero zeroes the axis, Enter types a value. T translate mode moves the root. N and P select the next and previous joint. D deselects. E exports, L imports. M toggles sound, V toggles speech, I says where you are, Escape returns to joint mode.''); else say(''Keyboard help hidden''); } function typingKey(e, key) { var r = activeIn >= 0; var buf = r ? typedBuf : typedBufT; if (key == ''Escape'') { activeIn = -1; activeT = -1; typedBuf = ''''; typedBufT = ''''; lastTypedLen = 0; if (sel >= 0) syncUI(); syncT(); beep(300, 0.08, ''sine'', 0.15, 0); say(''Typing cancelled''); consume(e); return; } if (key == ''Enter'') { consume(e); if (buf.length == 0) { activeIn = -1; activeT = -1; lastTypedLen = 0; if (sel >= 0) syncUI(); syncT(); beep(660, 0.06, ''triangle'', 0.15, 0); say(''Finished typing''); return; } if (r) typedFinalIn(buf); else typedFinalT_(buf); return; } if (key == ''Backspace'') { buf = buf.substring(0, buf.length - 1); } else if (key.length == 1 && ''0123456789.+-, rR''.indexOf(key) >= 0) { buf += key; } else { if (key.length == 1) consume(e); return; } consume(e); if (r) typedIn(buf); else typedT_(buf); } function onKey(e) { try { var tg = e.target, tn = (tg && tg.tagName) ? ('''' + tg.tagName).toLowerCase() : ''''; if (tn == ''input'' || tn == ''textarea'' || tn == ''select'' || (tg && tg.isContentEditable)) return; if (e.ctrlKey || e.metaKey) return; actx(); var key = e.key; if (!key) return; if (activeIn >= 0 || activeT >= 0) { typingKey(e, key); return; } var mult = e.shiftKey ? 2 : (e.altKey ? 0 : 1); var low = key.length == 1 ? key.toLowerCase() : key; var axisMode = (mode == ''R'' || mode == ''T''); switch (low) { case ''h'': case ''?'': toggleHelp(); break; case ''i'': describe(); break; case ''m'': snd = !snd; if (snd) beep(660, 0.08, ''triangle'', 0.2, 0); say(snd ? ''Sound on'' : ''Sound off''); break; case ''v'': if (vox) { say(''Speech off''); vox = false; } else { vox = true; say(''Speech on''); } showStatus(); break; case ''j'': setMode(''J''); break; case ''r'': setMode(''R''); break; case ''t'': setMode(''T''); break; case ''Escape'': if (helpOn) toggleHelp(); setMode(''J''); break; case ''d'': if (sel >= 0) clearSel(); else earBlocked(''No joint selected''); break; case ''e'': exportHumanoid(0); break; case ''l'': importHumanoid(0); break; case ''n'': case ''PageDown'': next(0); break; case ''p'': case ''PageUp'': prev(0); break; case ''x'': case ''y'': case ''z'': if (axisMode) focusAxis(low == ''x'' ? 0 : (low == ''y'' ? 1 : 2)); else earBlocked(''Press R for rotate mode or T for translate mode first''); break; case ''ArrowUp'': if (axisMode) focusAxis(kAx - 1); else up(0); break; case ''ArrowDown'': if (axisMode) focusAxis(kAx + 1); else down(0); break; case ''ArrowLeft'': if (axisMode) nudge(-1, mult); else sibPrev(0); break; case ''ArrowRight'': if (axisMode) nudge(1, mult); else sibNext(0); break; case ''Home'': if (axisMode) jump(''min''); else select(0); break; case ''End'': if (axisMode) jump(''max''); else select(names.length - 1); break; case ''0'': if (axisMode) jump(''zero''); else return; break; case ''Delete'': case ''Backspace'': if (mode == ''R'') reset(0); else if (mode == ''T'') resetT(0); else return; break; case ''Enter'': case '' '': if (mode == ''R'') { if (sel < 0) earBlocked(''No joint selected''); else pickIn(kAx); } else if (mode == ''T'') pickT(kAx); else describe(); break; default: return; } consume(e); } catch (x) { log(''key error: '' + x); } } function a11yInit() { var i, d, p; for (i = 0; i < names.length; i++) { d = 0; p = parentOf[i]; while (p >= 0) { d++; p = parentOf[p]; } depthOf[i] = d; } try { live = document.createElement(''div''); live.setAttribute(''role'', ''status''); live.setAttribute(''aria-live'', ''polite''); live.setAttribute(''aria-atomic'', ''true''); live.style.cssText = ''position:absolute;left:-9999px;width:1px;height:1px;overflow:hidden;''; document.body.appendChild(live); } catch (e) { log(''live region unavailable: '' + e); } try { if (window.gimbalKeyHandler) document.removeEventListener(''keydown'', window.gimbalKeyHandler, true); if (window.gimbalPtrHandler) document.removeEventListener(''pointerdown'', window.gimbalPtrHandler, true); window.gimbalKeyHandler = onKey; window.gimbalPtrHandler = unlock; document.addEventListener(''keydown'', onKey, true); document.addEventListener(''pointerdown'', unlock, true); domKeys = true; } catch (e) { domKeys = false; log(''keyboard modes unavailable: '' + e); } a11yReady = true; a11ySync(); showStatus(); say(''Accessibility on. Press H for keyboard help. Press any key or click once to enable sound.''); } function ovJ_humanoid_root(b){ try { overJoint(names.indexOf(''humanoid_root''), b); } catch(e){} } function ovJ_sacroiliac(b){ try { overJoint(names.indexOf(''sacroiliac''), b); } catch(e){} } function ovJ_l_hip(b){ try { overJoint(names.indexOf(''l_hip''), b); } catch(e){} } function ovJ_l_knee(b){ try { overJoint(names.indexOf(''l_knee''), b); } catch(e){} } function ovJ_l_talocrural(b){ try { overJoint(names.indexOf(''l_talocrural''), b); } catch(e){} } function ovJ_l_talocalcaneonavicular(b){ try { overJoint(names.indexOf(''l_talocalcaneonavicular''), b); } catch(e){} } function ovJ_l_cuneonavicular_1(b){ try { overJoint(names.indexOf(''l_cuneonavicular_1''), b); } catch(e){} } function ovJ_l_tarsometatarsal_1(b){ try { overJoint(names.indexOf(''l_tarsometatarsal_1''), b); } catch(e){} } function ovJ_l_metatarsophalangeal_1(b){ try { overJoint(names.indexOf(''l_metatarsophalangeal_1''), b); } catch(e){} } function ovJ_l_tarsal_interphalangeal_1(b){ try { overJoint(names.indexOf(''l_tarsal_interphalangeal_1''), b); } catch(e){} } function ovJ_l_cuneonavicular_2(b){ try { overJoint(names.indexOf(''l_cuneonavicular_2''), b); } catch(e){} } function ovJ_l_tarsometatarsal_2(b){ try { overJoint(names.indexOf(''l_tarsometatarsal_2''), b); } catch(e){} } function ovJ_l_metatarsophalangeal_2(b){ try { overJoint(names.indexOf(''l_metatarsophalangeal_2''), b); } catch(e){} } function ovJ_l_tarsal_proximal_interphalangeal_2(b){ try { overJoint(names.indexOf(''l_tarsal_proximal_interphalangeal_2''), b); } catch(e){} } function ovJ_l_tarsal_distal_interphalangeal_2(b){ try { overJoint(names.indexOf(''l_tarsal_distal_interphalangeal_2''), b); } catch(e){} } function ovJ_l_cuneonavicular_3(b){ try { overJoint(names.indexOf(''l_cuneonavicular_3''), b); } catch(e){} } function ovJ_l_tarsometatarsal_3(b){ try { overJoint(names.indexOf(''l_tarsometatarsal_3''), b); } catch(e){} } function ovJ_l_metatarsophalangeal_3(b){ try { overJoint(names.indexOf(''l_metatarsophalangeal_3''), b); } catch(e){} } function ovJ_l_tarsal_proximal_interphalangeal_3(b){ try { overJoint(names.indexOf(''l_tarsal_proximal_interphalangeal_3''), b); } catch(e){} } function ovJ_l_tarsal_distal_interphalangeal_3(b){ try { overJoint(names.indexOf(''l_tarsal_distal_interphalangeal_3''), b); } catch(e){} } function ovJ_l_calcaneocuboid(b){ try { overJoint(names.indexOf(''l_calcaneocuboid''), b); } catch(e){} } function ovJ_l_transversetarsal(b){ try { overJoint(names.indexOf(''l_transversetarsal''), b); } catch(e){} } function ovJ_l_tarsometatarsal_4(b){ try { overJoint(names.indexOf(''l_tarsometatarsal_4''), b); } catch(e){} } function ovJ_l_metatarsophalangeal_4(b){ try { overJoint(names.indexOf(''l_metatarsophalangeal_4''), b); } catch(e){} } function ovJ_l_tarsal_proximal_interphalangeal_4(b){ try { overJoint(names.indexOf(''l_tarsal_proximal_interphalangeal_4''), b); } catch(e){} } function ovJ_l_tarsal_distal_interphalangeal_4(b){ try { overJoint(names.indexOf(''l_tarsal_distal_interphalangeal_4''), b); } catch(e){} } function ovJ_l_tarsometatarsal_5(b){ try { overJoint(names.indexOf(''l_tarsometatarsal_5''), b); } catch(e){} } function ovJ_l_metatarsophalangeal_5(b){ try { overJoint(names.indexOf(''l_metatarsophalangeal_5''), b); } catch(e){} } function ovJ_l_tarsal_proximal_interphalangeal_5(b){ try { overJoint(names.indexOf(''l_tarsal_proximal_interphalangeal_5''), b); } catch(e){} } function ovJ_l_tarsal_distal_interphalangeal_5(b){ try { overJoint(names.indexOf(''l_tarsal_distal_interphalangeal_5''), b); } catch(e){} } function ovJ_r_hip(b){ try { overJoint(names.indexOf(''r_hip''), b); } catch(e){} } function ovJ_r_knee(b){ try { overJoint(names.indexOf(''r_knee''), b); } catch(e){} } function ovJ_r_talocrural(b){ try { overJoint(names.indexOf(''r_talocrural''), b); } catch(e){} } function ovJ_r_talocalcaneonavicular(b){ try { overJoint(names.indexOf(''r_talocalcaneonavicular''), b); } catch(e){} } function ovJ_r_cuneonavicular_1(b){ try { overJoint(names.indexOf(''r_cuneonavicular_1''), b); } catch(e){} } function ovJ_r_tarsometatarsal_1(b){ try { overJoint(names.indexOf(''r_tarsometatarsal_1''), b); } catch(e){} } function ovJ_r_metatarsophalangeal_1(b){ try { overJoint(names.indexOf(''r_metatarsophalangeal_1''), b); } catch(e){} } function ovJ_r_tarsal_interphalangeal_1(b){ try { overJoint(names.indexOf(''r_tarsal_interphalangeal_1''), b); } catch(e){} } function ovJ_r_cuneonavicular_2(b){ try { overJoint(names.indexOf(''r_cuneonavicular_2''), b); } catch(e){} } function ovJ_r_tarsometatarsal_2(b){ try { overJoint(names.indexOf(''r_tarsometatarsal_2''), b); } catch(e){} } function ovJ_r_metatarsophalangeal_2(b){ try { overJoint(names.indexOf(''r_metatarsophalangeal_2''), b); } catch(e){} } function ovJ_r_tarsal_proximal_interphalangeal_2(b){ try { overJoint(names.indexOf(''r_tarsal_proximal_interphalangeal_2''), b); } catch(e){} } function ovJ_r_tarsal_distal_interphalangeal_2(b){ try { overJoint(names.indexOf(''r_tarsal_distal_interphalangeal_2''), b); } catch(e){} } function ovJ_r_cuneonavicular_3(b){ try { overJoint(names.indexOf(''r_cuneonavicular_3''), b); } catch(e){} } function ovJ_r_tarsometatarsal_3(b){ try { overJoint(names.indexOf(''r_tarsometatarsal_3''), b); } catch(e){} } function ovJ_r_metatarsophalangeal_3(b){ try { overJoint(names.indexOf(''r_metatarsophalangeal_3''), b); } catch(e){} } function ovJ_r_tarsal_proximal_interphalangeal_3(b){ try { overJoint(names.indexOf(''r_tarsal_proximal_interphalangeal_3''), b); } catch(e){} } function ovJ_r_tarsal_distal_interphalangeal_3(b){ try { overJoint(names.indexOf(''r_tarsal_distal_interphalangeal_3''), b); } catch(e){} } function ovJ_r_calcaneocuboid(b){ try { overJoint(names.indexOf(''r_calcaneocuboid''), b); } catch(e){} } function ovJ_r_transversetarsal(b){ try { overJoint(names.indexOf(''r_transversetarsal''), b); } catch(e){} } function ovJ_r_tarsometatarsal_4(b){ try { overJoint(names.indexOf(''r_tarsometatarsal_4''), b); } catch(e){} } function ovJ_r_metatarsophalangeal_4(b){ try { overJoint(names.indexOf(''r_metatarsophalangeal_4''), b); } catch(e){} } function ovJ_r_tarsal_proximal_interphalangeal_4(b){ try { overJoint(names.indexOf(''r_tarsal_proximal_interphalangeal_4''), b); } catch(e){} } function ovJ_r_tarsal_distal_interphalangeal_4(b){ try { overJoint(names.indexOf(''r_tarsal_distal_interphalangeal_4''), b); } catch(e){} } function ovJ_r_tarsometatarsal_5(b){ try { overJoint(names.indexOf(''r_tarsometatarsal_5''), b); } catch(e){} } function ovJ_r_metatarsophalangeal_5(b){ try { overJoint(names.indexOf(''r_metatarsophalangeal_5''), b); } catch(e){} } function ovJ_r_tarsal_proximal_interphalangeal_5(b){ try { overJoint(names.indexOf(''r_tarsal_proximal_interphalangeal_5''), b); } catch(e){} } function ovJ_r_tarsal_distal_interphalangeal_5(b){ try { overJoint(names.indexOf(''r_tarsal_distal_interphalangeal_5''), b); } catch(e){} } function ovJ_vl5(b){ try { overJoint(names.indexOf(''vl5''), b); } catch(e){} } function ovJ_vl4(b){ try { overJoint(names.indexOf(''vl4''), b); } catch(e){} } function ovJ_vl3(b){ try { overJoint(names.indexOf(''vl3''), b); } catch(e){} } function ovJ_vl2(b){ try { overJoint(names.indexOf(''vl2''), b); } catch(e){} } function ovJ_vl1(b){ try { overJoint(names.indexOf(''vl1''), b); } catch(e){} } function ovJ_vt12(b){ try { overJoint(names.indexOf(''vt12''), b); } catch(e){} } function ovJ_vt11(b){ try { overJoint(names.indexOf(''vt11''), b); } catch(e){} } function ovJ_vt10(b){ try { overJoint(names.indexOf(''vt10''), b); } catch(e){} } function ovJ_vt9(b){ try { overJoint(names.indexOf(''vt9''), b); } catch(e){} } function ovJ_vt8(b){ try { overJoint(names.indexOf(''vt8''), b); } catch(e){} } function ovJ_vt7(b){ try { overJoint(names.indexOf(''vt7''), b); } catch(e){} } function ovJ_vt6(b){ try { overJoint(names.indexOf(''vt6''), b); } catch(e){} } function ovJ_vt5(b){ try { overJoint(names.indexOf(''vt5''), b); } catch(e){} } function ovJ_vt4(b){ try { overJoint(names.indexOf(''vt4''), b); } catch(e){} } function ovJ_vt3(b){ try { overJoint(names.indexOf(''vt3''), b); } catch(e){} } function ovJ_vt2(b){ try { overJoint(names.indexOf(''vt2''), b); } catch(e){} } function ovJ_vt1(b){ try { overJoint(names.indexOf(''vt1''), b); } catch(e){} } function ovJ_vc7(b){ try { overJoint(names.indexOf(''vc7''), b); } catch(e){} } function ovJ_vc6(b){ try { overJoint(names.indexOf(''vc6''), b); } catch(e){} } function ovJ_vc5(b){ try { overJoint(names.indexOf(''vc5''), b); } catch(e){} } function ovJ_vc4(b){ try { overJoint(names.indexOf(''vc4''), b); } catch(e){} } function ovJ_vc3(b){ try { overJoint(names.indexOf(''vc3''), b); } catch(e){} } function ovJ_vc2(b){ try { overJoint(names.indexOf(''vc2''), b); } catch(e){} } function ovJ_vc1(b){ try { overJoint(names.indexOf(''vc1''), b); } catch(e){} } function ovJ_skullbase(b){ try { overJoint(names.indexOf(''skullbase''), b); } catch(e){} } function ovJ_l_eyelid_joint(b){ try { overJoint(names.indexOf(''l_eyelid_joint''), b); } catch(e){} } function ovJ_r_eyelid_joint(b){ try { overJoint(names.indexOf(''r_eyelid_joint''), b); } catch(e){} } function ovJ_l_eyeball_joint(b){ try { overJoint(names.indexOf(''l_eyeball_joint''), b); } catch(e){} } function ovJ_r_eyeball_joint(b){ try { overJoint(names.indexOf(''r_eyeball_joint''), b); } catch(e){} } function ovJ_l_eyebrow_joint(b){ try { overJoint(names.indexOf(''l_eyebrow_joint''), b); } catch(e){} } function ovJ_r_eyebrow_joint(b){ try { overJoint(names.indexOf(''r_eyebrow_joint''), b); } catch(e){} } function ovJ_temporomandibular(b){ try { overJoint(names.indexOf(''temporomandibular''), b); } catch(e){} } function ovJ_l_sternoclavicular(b){ try { overJoint(names.indexOf(''l_sternoclavicular''), b); } catch(e){} } function ovJ_l_acromioclavicular(b){ try { overJoint(names.indexOf(''l_acromioclavicular''), b); } catch(e){} } function ovJ_l_shoulder(b){ try { overJoint(names.indexOf(''l_shoulder''), b); } catch(e){} } function ovJ_l_elbow(b){ try { overJoint(names.indexOf(''l_elbow''), b); } catch(e){} } function ovJ_l_radiocarpal(b){ try { overJoint(names.indexOf(''l_radiocarpal''), b); } catch(e){} } function ovJ_l_midcarpal_1(b){ try { overJoint(names.indexOf(''l_midcarpal_1''), b); } catch(e){} } function ovJ_l_carpometacarpal_1(b){ try { overJoint(names.indexOf(''l_carpometacarpal_1''), b); } catch(e){} } function ovJ_l_metacarpophalangeal_1(b){ try { overJoint(names.indexOf(''l_metacarpophalangeal_1''), b); } catch(e){} } function ovJ_l_carpal_interphalangeal_1(b){ try { overJoint(names.indexOf(''l_carpal_interphalangeal_1''), b); } catch(e){} } function ovJ_l_midcarpal_2(b){ try { overJoint(names.indexOf(''l_midcarpal_2''), b); } catch(e){} } function ovJ_l_carpometacarpal_2(b){ try { overJoint(names.indexOf(''l_carpometacarpal_2''), b); } catch(e){} } function ovJ_l_metacarpophalangeal_2(b){ try { overJoint(names.indexOf(''l_metacarpophalangeal_2''), b); } catch(e){} } function ovJ_l_carpal_proximal_interphalangeal_2(b){ try { overJoint(names.indexOf(''l_carpal_proximal_interphalangeal_2''), b); } catch(e){} } function ovJ_l_carpal_distal_interphalangeal_2(b){ try { overJoint(names.indexOf(''l_carpal_distal_interphalangeal_2''), b); } catch(e){} } function ovJ_l_midcarpal_3(b){ try { overJoint(names.indexOf(''l_midcarpal_3''), b); } catch(e){} } function ovJ_l_carpometacarpal_3(b){ try { overJoint(names.indexOf(''l_carpometacarpal_3''), b); } catch(e){} } function ovJ_l_metacarpophalangeal_3(b){ try { overJoint(names.indexOf(''l_metacarpophalangeal_3''), b); } catch(e){} } function ovJ_l_carpal_proximal_interphalangeal_3(b){ try { overJoint(names.indexOf(''l_carpal_proximal_interphalangeal_3''), b); } catch(e){} } function ovJ_l_carpal_distal_interphalangeal_3(b){ try { overJoint(names.indexOf(''l_carpal_distal_interphalangeal_3''), b); } catch(e){} } function ovJ_l_midcarpal_4_5(b){ try { overJoint(names.indexOf(''l_midcarpal_4_5''), b); } catch(e){} } function ovJ_l_carpometacarpal_4(b){ try { overJoint(names.indexOf(''l_carpometacarpal_4''), b); } catch(e){} } function ovJ_l_metacarpophalangeal_4(b){ try { overJoint(names.indexOf(''l_metacarpophalangeal_4''), b); } catch(e){} } function ovJ_l_carpal_proximal_interphalangeal_4(b){ try { overJoint(names.indexOf(''l_carpal_proximal_interphalangeal_4''), b); } catch(e){} } function ovJ_l_carpal_distal_interphalangeal_4(b){ try { overJoint(names.indexOf(''l_carpal_distal_interphalangeal_4''), b); } catch(e){} } function ovJ_l_carpometacarpal_5(b){ try { overJoint(names.indexOf(''l_carpometacarpal_5''), b); } catch(e){} } function ovJ_l_metacarpophalangeal_5(b){ try { overJoint(names.indexOf(''l_metacarpophalangeal_5''), b); } catch(e){} } function ovJ_l_carpal_proximal_interphalangeal_5(b){ try { overJoint(names.indexOf(''l_carpal_proximal_interphalangeal_5''), b); } catch(e){} } function ovJ_l_carpal_distal_interphalangeal_5(b){ try { overJoint(names.indexOf(''l_carpal_distal_interphalangeal_5''), b); } catch(e){} } function ovJ_r_sternoclavicular(b){ try { overJoint(names.indexOf(''r_sternoclavicular''), b); } catch(e){} } function ovJ_r_acromioclavicular(b){ try { overJoint(names.indexOf(''r_acromioclavicular''), b); } catch(e){} } function ovJ_r_shoulder(b){ try { overJoint(names.indexOf(''r_shoulder''), b); } catch(e){} } function ovJ_r_elbow(b){ try { overJoint(names.indexOf(''r_elbow''), b); } catch(e){} } function ovJ_r_radiocarpal(b){ try { overJoint(names.indexOf(''r_radiocarpal''), b); } catch(e){} } function ovJ_r_midcarpal_1(b){ try { overJoint(names.indexOf(''r_midcarpal_1''), b); } catch(e){} } function ovJ_r_carpometacarpal_1(b){ try { overJoint(names.indexOf(''r_carpometacarpal_1''), b); } catch(e){} } function ovJ_r_metacarpophalangeal_1(b){ try { overJoint(names.indexOf(''r_metacarpophalangeal_1''), b); } catch(e){} } function ovJ_r_carpal_interphalangeal_1(b){ try { overJoint(names.indexOf(''r_carpal_interphalangeal_1''), b); } catch(e){} } function ovJ_r_midcarpal_2(b){ try { overJoint(names.indexOf(''r_midcarpal_2''), b); } catch(e){} } function ovJ_r_carpometacarpal_2(b){ try { overJoint(names.indexOf(''r_carpometacarpal_2''), b); } catch(e){} } function ovJ_r_metacarpophalangeal_2(b){ try { overJoint(names.indexOf(''r_metacarpophalangeal_2''), b); } catch(e){} } function ovJ_r_carpal_proximal_interphalangeal_2(b){ try { overJoint(names.indexOf(''r_carpal_proximal_interphalangeal_2''), b); } catch(e){} } function ovJ_r_carpal_distal_interphalangeal_2(b){ try { overJoint(names.indexOf(''r_carpal_distal_interphalangeal_2''), b); } catch(e){} } function ovJ_r_midcarpal_3(b){ try { overJoint(names.indexOf(''r_midcarpal_3''), b); } catch(e){} } function ovJ_r_carpometacarpal_3(b){ try { overJoint(names.indexOf(''r_carpometacarpal_3''), b); } catch(e){} } function ovJ_r_metacarpophalangeal_3(b){ try { overJoint(names.indexOf(''r_metacarpophalangeal_3''), b); } catch(e){} } function ovJ_r_carpal_proximal_interphalangeal_3(b){ try { overJoint(names.indexOf(''r_carpal_proximal_interphalangeal_3''), b); } catch(e){} } function ovJ_r_carpal_distal_interphalangeal_3(b){ try { overJoint(names.indexOf(''r_carpal_distal_interphalangeal_3''), b); } catch(e){} } function ovJ_r_midcarpal_4_5(b){ try { overJoint(names.indexOf(''r_midcarpal_4_5''), b); } catch(e){} } function ovJ_r_carpometacarpal_4(b){ try { overJoint(names.indexOf(''r_carpometacarpal_4''), b); } catch(e){} } function ovJ_r_metacarpophalangeal_4(b){ try { overJoint(names.indexOf(''r_metacarpophalangeal_4''), b); } catch(e){} } function ovJ_r_carpal_proximal_interphalangeal_4(b){ try { overJoint(names.indexOf(''r_carpal_proximal_interphalangeal_4''), b); } catch(e){} } function ovJ_r_carpal_distal_interphalangeal_4(b){ try { overJoint(names.indexOf(''r_carpal_distal_interphalangeal_4''), b); } catch(e){} } function ovJ_r_carpometacarpal_5(b){ try { overJoint(names.indexOf(''r_carpometacarpal_5''), b); } catch(e){} } function ovJ_r_metacarpophalangeal_5(b){ try { overJoint(names.indexOf(''r_metacarpophalangeal_5''), b); } catch(e){} } function ovJ_r_carpal_proximal_interphalangeal_5(b){ try { overJoint(names.indexOf(''r_carpal_proximal_interphalangeal_5''), b); } catch(e){} } function ovJ_r_carpal_distal_interphalangeal_5(b){ try { overJoint(names.indexOf(''r_carpal_distal_interphalangeal_5''), b); } catch(e){} } function ovB0(b){ overBtn(0,b); } function ovB1(b){ overBtn(1,b); } function ovB2(b){ overBtn(2,b); } function ovB3(b){ overBtn(3,b); } function ovB4(b){ overBtn(4,b); } function ovB5(b){ overBtn(5,b); } function ovB6(b){ overBtn(6,b); } function ovB7(b){ overBtn(7,b); } function ovB8(b){ overBtn(8,b); } function ovB9(b){ overBtn(9,b); } function ovB10(b){ overBtn(10,b); } function ovSl0(b){ overSlider(0, 0, false, b); } function ovTSl0(b){ overSlider(0, 1, false, b); } function ovRg0(b){ overSlider(0, 0, true, b); } function ovIn0(b){ overBox(0, 0, b); } function ovTIn0(b){ overBox(0, 1, b); } function acSl0(b){ actCtl(0, b); } function acTSl0(b){ actCtl(0, b); } function acRg0(b){ actCtl(0, b); } function ovSl1(b){ overSlider(1, 0, false, b); } function ovTSl1(b){ overSlider(1, 1, false, b); } function ovRg1(b){ overSlider(1, 0, true, b); } function ovIn1(b){ overBox(1, 0, b); } function ovTIn1(b){ overBox(1, 1, b); } function acSl1(b){ actCtl(1, b); } function acTSl1(b){ actCtl(1, b); } function acRg1(b){ actCtl(1, b); } function ovSl2(b){ overSlider(2, 0, false, b); } function ovTSl2(b){ overSlider(2, 1, false, b); } function ovRg2(b){ overSlider(2, 0, true, b); } function ovIn2(b){ overBox(2, 0, b); } function ovTIn2(b){ overBox(2, 1, b); } function acSl2(b){ actCtl(2, b); } function acTSl2(b){ actCtl(2, b); } function acRg2(b){ actCtl(2, b); } function initialize() { log(''controller initialize''); var children = []; for (var i = 0; i < names.length; i++) { ang[i] = [0,0,0]; children[i] = []; var p = parentName[i]; parentOf[i] = p ? names.indexOf(p) : -1; side[i] = names[i].indexOf(''l_'') == 0 ? 0 : (names[i].indexOf(''r_'') == 0 ? 1 : 2); } for (var i = 0; i < names.length; i++) { var p = parentOf[i]; if (p >= 0) children[p].push(i); } for (var i = 0; i < names.length; i++) { var kids = children[i]; nKids[i] = kids.length; firstChild[i] = kids.length > 0 ? kids[0] : -1; prevSib[i] = -1; nextSib[i] = -1; } for (var i = 0; i < names.length; i++) { var kids = children[i]; for (var k = 0; k < kids.length; k++) { var c = kids[k]; if (k > 0) prevSib[c] = kids[k - 1]; if (k < kids.length - 1) nextSib[c] = kids[k + 1]; } } try { initT(); } catch (e) { log(''initT error: '' + e); } try { select(names.indexOf(''l_shoulder'')); } catch (e) { log(''initialize error: '' + e); } try { a11yInit(); } catch (e) { log(''a11y init error: '' + e); } } function rotX(v){ try { drag(0, v); } catch (e) { log(''drag X error: '' + e); } } function rotY(v){ try { drag(1, v); } catch (e) { log(''drag Y error: '' + e); } } function rotZ(v){ try { drag(2, v); } catch (e) { log(''drag Z error: '' + e); } } function next(t){ try { earPress(); select(sel < 0 ? 0 : (sel + 1) % names.length); } catch (e) { log(''next error: '' + e); } } function prev(t){ try { earPress(); select(sel < 0 ? names.length - 1 : (sel + names.length - 1) % names.length); } catch (e) { log(''prev error: '' + e); } } function up(t){ try { earPress(); if (sel >= 0 && parentOf[sel] >= 0) select(parentOf[sel]); else earBlocked(sel < 0 ? ''No joint selected'' : ''No parent, this is the root joint''); } catch (e) { log(''up error: '' + e); } } function down(t){ try { earPress(); if (sel >= 0 && firstChild[sel] >= 0) select(firstChild[sel]); else earBlocked(sel < 0 ? ''No joint selected'' : ''No child, this joint is a leaf''); } catch (e) { log(''down error: '' + e); } } function sibPrev(t){ try { earPress(); if (sel >= 0 && prevSib[sel] >= 0) select(prevSib[sel]); else earBlocked(sel < 0 ? ''No joint selected'' : ''No previous sibling''); } catch (e) { log(''sibPrev error: '' + e); } } function sibNext(t){ try { earPress(); if (sel >= 0 && nextSib[sel] >= 0) select(nextSib[sel]); else earBlocked(sel < 0 ? ''No joint selected'' : ''No next sibling''); } catch (e) { log(''sibNext error: '' + e); } } function reset(t){ try { earPress(); if (sel >= 0) { ang[sel] = [0,0,0]; loadGimbal(); earSay(''Joint reset to zero''); }; } catch (e) { log(''reset error: '' + e); } } function deselect(t){ try { earPress(); clearSel(); } catch (e) { log(''deselect error: '' + e); } } function pick_humanoid_root(t){ try { toggle(names.indexOf(''humanoid_root'')); } catch(e){} } function pick_sacroiliac(t){ try { toggle(names.indexOf(''sacroiliac'')); } catch(e){} } function pick_l_hip(t){ try { toggle(names.indexOf(''l_hip'')); } catch(e){} } function pick_l_knee(t){ try { toggle(names.indexOf(''l_knee'')); } catch(e){} } function pick_l_talocrural(t){ try { toggle(names.indexOf(''l_talocrural'')); } catch(e){} } function pick_l_talocalcaneonavicular(t){ try { toggle(names.indexOf(''l_talocalcaneonavicular'')); } catch(e){} } function pick_l_cuneonavicular_1(t){ try { toggle(names.indexOf(''l_cuneonavicular_1'')); } catch(e){} } function pick_l_tarsometatarsal_1(t){ try { toggle(names.indexOf(''l_tarsometatarsal_1'')); } catch(e){} } function pick_l_metatarsophalangeal_1(t){ try { toggle(names.indexOf(''l_metatarsophalangeal_1'')); } catch(e){} } function pick_l_tarsal_interphalangeal_1(t){ try { toggle(names.indexOf(''l_tarsal_interphalangeal_1'')); } catch(e){} } function pick_l_cuneonavicular_2(t){ try { toggle(names.indexOf(''l_cuneonavicular_2'')); } catch(e){} } function pick_l_tarsometatarsal_2(t){ try { toggle(names.indexOf(''l_tarsometatarsal_2'')); } catch(e){} } function pick_l_metatarsophalangeal_2(t){ try { toggle(names.indexOf(''l_metatarsophalangeal_2'')); } catch(e){} } function pick_l_tarsal_proximal_interphalangeal_2(t){ try { toggle(names.indexOf(''l_tarsal_proximal_interphalangeal_2'')); } catch(e){} } function pick_l_tarsal_distal_interphalangeal_2(t){ try { toggle(names.indexOf(''l_tarsal_distal_interphalangeal_2'')); } catch(e){} } function pick_l_cuneonavicular_3(t){ try { toggle(names.indexOf(''l_cuneonavicular_3'')); } catch(e){} } function pick_l_tarsometatarsal_3(t){ try { toggle(names.indexOf(''l_tarsometatarsal_3'')); } catch(e){} } function pick_l_metatarsophalangeal_3(t){ try { toggle(names.indexOf(''l_metatarsophalangeal_3'')); } catch(e){} } function pick_l_tarsal_proximal_interphalangeal_3(t){ try { toggle(names.indexOf(''l_tarsal_proximal_interphalangeal_3'')); } catch(e){} } function pick_l_tarsal_distal_interphalangeal_3(t){ try { toggle(names.indexOf(''l_tarsal_distal_interphalangeal_3'')); } catch(e){} } function pick_l_calcaneocuboid(t){ try { toggle(names.indexOf(''l_calcaneocuboid'')); } catch(e){} } function pick_l_transversetarsal(t){ try { toggle(names.indexOf(''l_transversetarsal'')); } catch(e){} } function pick_l_tarsometatarsal_4(t){ try { toggle(names.indexOf(''l_tarsometatarsal_4'')); } catch(e){} } function pick_l_metatarsophalangeal_4(t){ try { toggle(names.indexOf(''l_metatarsophalangeal_4'')); } catch(e){} } function pick_l_tarsal_proximal_interphalangeal_4(t){ try { toggle(names.indexOf(''l_tarsal_proximal_interphalangeal_4'')); } catch(e){} } function pick_l_tarsal_distal_interphalangeal_4(t){ try { toggle(names.indexOf(''l_tarsal_distal_interphalangeal_4'')); } catch(e){} } function pick_l_tarsometatarsal_5(t){ try { toggle(names.indexOf(''l_tarsometatarsal_5'')); } catch(e){} } function pick_l_metatarsophalangeal_5(t){ try { toggle(names.indexOf(''l_metatarsophalangeal_5'')); } catch(e){} } function pick_l_tarsal_proximal_interphalangeal_5(t){ try { toggle(names.indexOf(''l_tarsal_proximal_interphalangeal_5'')); } catch(e){} } function pick_l_tarsal_distal_interphalangeal_5(t){ try { toggle(names.indexOf(''l_tarsal_distal_interphalangeal_5'')); } catch(e){} } function pick_r_hip(t){ try { toggle(names.indexOf(''r_hip'')); } catch(e){} } function pick_r_knee(t){ try { toggle(names.indexOf(''r_knee'')); } catch(e){} } function pick_r_talocrural(t){ try { toggle(names.indexOf(''r_talocrural'')); } catch(e){} } function pick_r_talocalcaneonavicular(t){ try { toggle(names.indexOf(''r_talocalcaneonavicular'')); } catch(e){} } function pick_r_cuneonavicular_1(t){ try { toggle(names.indexOf(''r_cuneonavicular_1'')); } catch(e){} } function pick_r_tarsometatarsal_1(t){ try { toggle(names.indexOf(''r_tarsometatarsal_1'')); } catch(e){} } function pick_r_metatarsophalangeal_1(t){ try { toggle(names.indexOf(''r_metatarsophalangeal_1'')); } catch(e){} } function pick_r_tarsal_interphalangeal_1(t){ try { toggle(names.indexOf(''r_tarsal_interphalangeal_1'')); } catch(e){} } function pick_r_cuneonavicular_2(t){ try { toggle(names.indexOf(''r_cuneonavicular_2'')); } catch(e){} } function pick_r_tarsometatarsal_2(t){ try { toggle(names.indexOf(''r_tarsometatarsal_2'')); } catch(e){} } function pick_r_metatarsophalangeal_2(t){ try { toggle(names.indexOf(''r_metatarsophalangeal_2'')); } catch(e){} } function pick_r_tarsal_proximal_interphalangeal_2(t){ try { toggle(names.indexOf(''r_tarsal_proximal_interphalangeal_2'')); } catch(e){} } function pick_r_tarsal_distal_interphalangeal_2(t){ try { toggle(names.indexOf(''r_tarsal_distal_interphalangeal_2'')); } catch(e){} } function pick_r_cuneonavicular_3(t){ try { toggle(names.indexOf(''r_cuneonavicular_3'')); } catch(e){} } function pick_r_tarsometatarsal_3(t){ try { toggle(names.indexOf(''r_tarsometatarsal_3'')); } catch(e){} } function pick_r_metatarsophalangeal_3(t){ try { toggle(names.indexOf(''r_metatarsophalangeal_3'')); } catch(e){} } function pick_r_tarsal_proximal_interphalangeal_3(t){ try { toggle(names.indexOf(''r_tarsal_proximal_interphalangeal_3'')); } catch(e){} } function pick_r_tarsal_distal_interphalangeal_3(t){ try { toggle(names.indexOf(''r_tarsal_distal_interphalangeal_3'')); } catch(e){} } function pick_r_calcaneocuboid(t){ try { toggle(names.indexOf(''r_calcaneocuboid'')); } catch(e){} } function pick_r_transversetarsal(t){ try { toggle(names.indexOf(''r_transversetarsal'')); } catch(e){} } function pick_r_tarsometatarsal_4(t){ try { toggle(names.indexOf(''r_tarsometatarsal_4'')); } catch(e){} } function pick_r_metatarsophalangeal_4(t){ try { toggle(names.indexOf(''r_metatarsophalangeal_4'')); } catch(e){} } function pick_r_tarsal_proximal_interphalangeal_4(t){ try { toggle(names.indexOf(''r_tarsal_proximal_interphalangeal_4'')); } catch(e){} } function pick_r_tarsal_distal_interphalangeal_4(t){ try { toggle(names.indexOf(''r_tarsal_distal_interphalangeal_4'')); } catch(e){} } function pick_r_tarsometatarsal_5(t){ try { toggle(names.indexOf(''r_tarsometatarsal_5'')); } catch(e){} } function pick_r_metatarsophalangeal_5(t){ try { toggle(names.indexOf(''r_metatarsophalangeal_5'')); } catch(e){} } function pick_r_tarsal_proximal_interphalangeal_5(t){ try { toggle(names.indexOf(''r_tarsal_proximal_interphalangeal_5'')); } catch(e){} } function pick_r_tarsal_distal_interphalangeal_5(t){ try { toggle(names.indexOf(''r_tarsal_distal_interphalangeal_5'')); } catch(e){} } function pick_vl5(t){ try { toggle(names.indexOf(''vl5'')); } catch(e){} } function pick_vl4(t){ try { toggle(names.indexOf(''vl4'')); } catch(e){} } function pick_vl3(t){ try { toggle(names.indexOf(''vl3'')); } catch(e){} } function pick_vl2(t){ try { toggle(names.indexOf(''vl2'')); } catch(e){} } function pick_vl1(t){ try { toggle(names.indexOf(''vl1'')); } catch(e){} } function pick_vt12(t){ try { toggle(names.indexOf(''vt12'')); } catch(e){} } function pick_vt11(t){ try { toggle(names.indexOf(''vt11'')); } catch(e){} } function pick_vt10(t){ try { toggle(names.indexOf(''vt10'')); } catch(e){} } function pick_vt9(t){ try { toggle(names.indexOf(''vt9'')); } catch(e){} } function pick_vt8(t){ try { toggle(names.indexOf(''vt8'')); } catch(e){} } function pick_vt7(t){ try { toggle(names.indexOf(''vt7'')); } catch(e){} } function pick_vt6(t){ try { toggle(names.indexOf(''vt6'')); } catch(e){} } function pick_vt5(t){ try { toggle(names.indexOf(''vt5'')); } catch(e){} } function pick_vt4(t){ try { toggle(names.indexOf(''vt4'')); } catch(e){} } function pick_vt3(t){ try { toggle(names.indexOf(''vt3'')); } catch(e){} } function pick_vt2(t){ try { toggle(names.indexOf(''vt2'')); } catch(e){} } function pick_vt1(t){ try { toggle(names.indexOf(''vt1'')); } catch(e){} } function pick_vc7(t){ try { toggle(names.indexOf(''vc7'')); } catch(e){} } function pick_vc6(t){ try { toggle(names.indexOf(''vc6'')); } catch(e){} } function pick_vc5(t){ try { toggle(names.indexOf(''vc5'')); } catch(e){} } function pick_vc4(t){ try { toggle(names.indexOf(''vc4'')); } catch(e){} } function pick_vc3(t){ try { toggle(names.indexOf(''vc3'')); } catch(e){} } function pick_vc2(t){ try { toggle(names.indexOf(''vc2'')); } catch(e){} } function pick_vc1(t){ try { toggle(names.indexOf(''vc1'')); } catch(e){} } function pick_skullbase(t){ try { toggle(names.indexOf(''skullbase'')); } catch(e){} } function pick_l_eyelid_joint(t){ try { toggle(names.indexOf(''l_eyelid_joint'')); } catch(e){} } function pick_r_eyelid_joint(t){ try { toggle(names.indexOf(''r_eyelid_joint'')); } catch(e){} } function pick_l_eyeball_joint(t){ try { toggle(names.indexOf(''l_eyeball_joint'')); } catch(e){} } function pick_r_eyeball_joint(t){ try { toggle(names.indexOf(''r_eyeball_joint'')); } catch(e){} } function pick_l_eyebrow_joint(t){ try { toggle(names.indexOf(''l_eyebrow_joint'')); } catch(e){} } function pick_r_eyebrow_joint(t){ try { toggle(names.indexOf(''r_eyebrow_joint'')); } catch(e){} } function pick_temporomandibular(t){ try { toggle(names.indexOf(''temporomandibular'')); } catch(e){} } function pick_l_sternoclavicular(t){ try { toggle(names.indexOf(''l_sternoclavicular'')); } catch(e){} } function pick_l_acromioclavicular(t){ try { toggle(names.indexOf(''l_acromioclavicular'')); } catch(e){} } function pick_l_shoulder(t){ try { toggle(names.indexOf(''l_shoulder'')); } catch(e){} } function pick_l_elbow(t){ try { toggle(names.indexOf(''l_elbow'')); } catch(e){} } function pick_l_radiocarpal(t){ try { toggle(names.indexOf(''l_radiocarpal'')); } catch(e){} } function pick_l_midcarpal_1(t){ try { toggle(names.indexOf(''l_midcarpal_1'')); } catch(e){} } function pick_l_carpometacarpal_1(t){ try { toggle(names.indexOf(''l_carpometacarpal_1'')); } catch(e){} } function pick_l_metacarpophalangeal_1(t){ try { toggle(names.indexOf(''l_metacarpophalangeal_1'')); } catch(e){} } function pick_l_carpal_interphalangeal_1(t){ try { toggle(names.indexOf(''l_carpal_interphalangeal_1'')); } catch(e){} } function pick_l_midcarpal_2(t){ try { toggle(names.indexOf(''l_midcarpal_2'')); } catch(e){} } function pick_l_carpometacarpal_2(t){ try { toggle(names.indexOf(''l_carpometacarpal_2'')); } catch(e){} } function pick_l_metacarpophalangeal_2(t){ try { toggle(names.indexOf(''l_metacarpophalangeal_2'')); } catch(e){} } function pick_l_carpal_proximal_interphalangeal_2(t){ try { toggle(names.indexOf(''l_carpal_proximal_interphalangeal_2'')); } catch(e){} } function pick_l_carpal_distal_interphalangeal_2(t){ try { toggle(names.indexOf(''l_carpal_distal_interphalangeal_2'')); } catch(e){} } function pick_l_midcarpal_3(t){ try { toggle(names.indexOf(''l_midcarpal_3'')); } catch(e){} } function pick_l_carpometacarpal_3(t){ try { toggle(names.indexOf(''l_carpometacarpal_3'')); } catch(e){} } function pick_l_metacarpophalangeal_3(t){ try { toggle(names.indexOf(''l_metacarpophalangeal_3'')); } catch(e){} } function pick_l_carpal_proximal_interphalangeal_3(t){ try { toggle(names.indexOf(''l_carpal_proximal_interphalangeal_3'')); } catch(e){} } function pick_l_carpal_distal_interphalangeal_3(t){ try { toggle(names.indexOf(''l_carpal_distal_interphalangeal_3'')); } catch(e){} } function pick_l_midcarpal_4_5(t){ try { toggle(names.indexOf(''l_midcarpal_4_5'')); } catch(e){} } function pick_l_carpometacarpal_4(t){ try { toggle(names.indexOf(''l_carpometacarpal_4'')); } catch(e){} } function pick_l_metacarpophalangeal_4(t){ try { toggle(names.indexOf(''l_metacarpophalangeal_4'')); } catch(e){} } function pick_l_carpal_proximal_interphalangeal_4(t){ try { toggle(names.indexOf(''l_carpal_proximal_interphalangeal_4'')); } catch(e){} } function pick_l_carpal_distal_interphalangeal_4(t){ try { toggle(names.indexOf(''l_carpal_distal_interphalangeal_4'')); } catch(e){} } function pick_l_carpometacarpal_5(t){ try { toggle(names.indexOf(''l_carpometacarpal_5'')); } catch(e){} } function pick_l_metacarpophalangeal_5(t){ try { toggle(names.indexOf(''l_metacarpophalangeal_5'')); } catch(e){} } function pick_l_carpal_proximal_interphalangeal_5(t){ try { toggle(names.indexOf(''l_carpal_proximal_interphalangeal_5'')); } catch(e){} } function pick_l_carpal_distal_interphalangeal_5(t){ try { toggle(names.indexOf(''l_carpal_distal_interphalangeal_5'')); } catch(e){} } function pick_r_sternoclavicular(t){ try { toggle(names.indexOf(''r_sternoclavicular'')); } catch(e){} } function pick_r_acromioclavicular(t){ try { toggle(names.indexOf(''r_acromioclavicular'')); } catch(e){} } function pick_r_shoulder(t){ try { toggle(names.indexOf(''r_shoulder'')); } catch(e){} } function pick_r_elbow(t){ try { toggle(names.indexOf(''r_elbow'')); } catch(e){} } function pick_r_radiocarpal(t){ try { toggle(names.indexOf(''r_radiocarpal'')); } catch(e){} } function pick_r_midcarpal_1(t){ try { toggle(names.indexOf(''r_midcarpal_1'')); } catch(e){} } function pick_r_carpometacarpal_1(t){ try { toggle(names.indexOf(''r_carpometacarpal_1'')); } catch(e){} } function pick_r_metacarpophalangeal_1(t){ try { toggle(names.indexOf(''r_metacarpophalangeal_1'')); } catch(e){} } function pick_r_carpal_interphalangeal_1(t){ try { toggle(names.indexOf(''r_carpal_interphalangeal_1'')); } catch(e){} } function pick_r_midcarpal_2(t){ try { toggle(names.indexOf(''r_midcarpal_2'')); } catch(e){} } function pick_r_carpometacarpal_2(t){ try { toggle(names.indexOf(''r_carpometacarpal_2'')); } catch(e){} } function pick_r_metacarpophalangeal_2(t){ try { toggle(names.indexOf(''r_metacarpophalangeal_2'')); } catch(e){} } function pick_r_carpal_proximal_interphalangeal_2(t){ try { toggle(names.indexOf(''r_carpal_proximal_interphalangeal_2'')); } catch(e){} } function pick_r_carpal_distal_interphalangeal_2(t){ try { toggle(names.indexOf(''r_carpal_distal_interphalangeal_2'')); } catch(e){} } function pick_r_midcarpal_3(t){ try { toggle(names.indexOf(''r_midcarpal_3'')); } catch(e){} } function pick_r_carpometacarpal_3(t){ try { toggle(names.indexOf(''r_carpometacarpal_3'')); } catch(e){} } function pick_r_metacarpophalangeal_3(t){ try { toggle(names.indexOf(''r_metacarpophalangeal_3'')); } catch(e){} } function pick_r_carpal_proximal_interphalangeal_3(t){ try { toggle(names.indexOf(''r_carpal_proximal_interphalangeal_3'')); } catch(e){} } function pick_r_carpal_distal_interphalangeal_3(t){ try { toggle(names.indexOf(''r_carpal_distal_interphalangeal_3'')); } catch(e){} } function pick_r_midcarpal_4_5(t){ try { toggle(names.indexOf(''r_midcarpal_4_5'')); } catch(e){} } function pick_r_carpometacarpal_4(t){ try { toggle(names.indexOf(''r_carpometacarpal_4'')); } catch(e){} } function pick_r_metacarpophalangeal_4(t){ try { toggle(names.indexOf(''r_metacarpophalangeal_4'')); } catch(e){} } function pick_r_carpal_proximal_interphalangeal_4(t){ try { toggle(names.indexOf(''r_carpal_proximal_interphalangeal_4'')); } catch(e){} } function pick_r_carpal_distal_interphalangeal_4(t){ try { toggle(names.indexOf(''r_carpal_distal_interphalangeal_4'')); } catch(e){} } function pick_r_carpometacarpal_5(t){ try { toggle(names.indexOf(''r_carpometacarpal_5'')); } catch(e){} } function pick_r_metacarpophalangeal_5(t){ try { toggle(names.indexOf(''r_metacarpophalangeal_5'')); } catch(e){} } function pick_r_carpal_proximal_interphalangeal_5(t){ try { toggle(names.indexOf(''r_carpal_proximal_interphalangeal_5'')); } catch(e){} } function pick_r_carpal_distal_interphalangeal_5(t){ try { toggle(names.indexOf(''r_carpal_distal_interphalangeal_5'')); } catch(e){} } ']);
end;

procedure InitHAnimGimbalJointController22Part212;
begin

MFNode3215 := TMFNode.CreateUndefined(Script3214, false, 'joints');
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint19);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint38);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint57);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint72);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint87);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint106);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint129);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint144);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint159);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint174);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint189);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint204);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint219);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint234);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint249);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint264);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint279);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint294);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint309);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint324);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint339);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint354);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint373);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint388);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint403);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint418);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint433);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint448);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint463);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint478);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint493);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint508);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint523);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint542);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint565);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint580);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint595);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint610);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint625);
end;

procedure InitHAnimGimbalJointController22Part213;
begin

{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint640);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint655);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint670);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint685);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint700);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint715);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint730);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint745);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint760);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint775);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint790);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint809);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint824);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint839);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint854);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint869);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint884);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint899);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint914);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint929);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint944);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint959);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint974);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint989);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1004);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1019);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1034);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1049);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1064);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1079);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1094);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1109);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1124);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1139);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1154);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1169);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1192);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1207);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1222);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1237);
end;

procedure InitHAnimGimbalJointController22Part214;
begin

{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1252);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1267);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1282);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1297);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1336);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1351);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1366);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1381);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1396);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1411);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1426);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1441);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1456);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1471);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1486);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1501);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1528);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1543);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1558);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1573);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1588);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1603);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1618);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1633);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1648);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1663);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1678);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1693);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1708);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1723);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1738);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1757);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1772);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1787);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1802);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1817);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1832);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1847);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1862);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1877);
end;

procedure InitHAnimGimbalJointController22Part215;
begin

{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1892);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1907);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1922);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1937);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1964);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1979);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint1994);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2009);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2024);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2039);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2054);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2069);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2084);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2099);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2114);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2129);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2144);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2159);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2174);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2193);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2208);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2223);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2238);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2253);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2268);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2283);
{ METHOD .Fd.Add }
MFNode3215.Add(HAnimJoint2298);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3215);
MFNode3362 := TMFNode.CreateUndefined(Script3214, false, 'lmats');
{ METHOD .Fd.Add }
MFNode3362.Add(Material30);
{ METHOD .Fd.Add }
MFNode3362.Add(Material49);
{ METHOD .Fd.Add }
MFNode3362.Add(Material68);
{ METHOD .Fd.Add }
MFNode3362.Add(Material83);
{ METHOD .Fd.Add }
MFNode3362.Add(Material98);
{ METHOD .Fd.Add }
MFNode3362.Add(Material117);
{ METHOD .Fd.Add }
MFNode3362.Add(Material140);
{ METHOD .Fd.Add }
MFNode3362.Add(Material155);
{ METHOD .Fd.Add }
MFNode3362.Add(Material170);
{ METHOD .Fd.Add }
MFNode3362.Add(Material185);
{ METHOD .Fd.Add }
MFNode3362.Add(Material200);
end;

procedure InitHAnimGimbalJointController22Part216;
begin

{ METHOD .Fd.Add }
MFNode3362.Add(Material215);
{ METHOD .Fd.Add }
MFNode3362.Add(Material230);
{ METHOD .Fd.Add }
MFNode3362.Add(Material245);
{ METHOD .Fd.Add }
MFNode3362.Add(Material260);
{ METHOD .Fd.Add }
MFNode3362.Add(Material275);
{ METHOD .Fd.Add }
MFNode3362.Add(Material290);
{ METHOD .Fd.Add }
MFNode3362.Add(Material305);
{ METHOD .Fd.Add }
MFNode3362.Add(Material320);
{ METHOD .Fd.Add }
MFNode3362.Add(Material335);
{ METHOD .Fd.Add }
MFNode3362.Add(Material350);
{ METHOD .Fd.Add }
MFNode3362.Add(Material365);
{ METHOD .Fd.Add }
MFNode3362.Add(Material384);
{ METHOD .Fd.Add }
MFNode3362.Add(Material399);
{ METHOD .Fd.Add }
MFNode3362.Add(Material414);
{ METHOD .Fd.Add }
MFNode3362.Add(Material429);
{ METHOD .Fd.Add }
MFNode3362.Add(Material444);
{ METHOD .Fd.Add }
MFNode3362.Add(Material459);
{ METHOD .Fd.Add }
MFNode3362.Add(Material474);
{ METHOD .Fd.Add }
MFNode3362.Add(Material489);
{ METHOD .Fd.Add }
MFNode3362.Add(Material504);
{ METHOD .Fd.Add }
MFNode3362.Add(Material519);
{ METHOD .Fd.Add }
MFNode3362.Add(Material534);
{ METHOD .Fd.Add }
MFNode3362.Add(Material553);
{ METHOD .Fd.Add }
MFNode3362.Add(Material576);
{ METHOD .Fd.Add }
MFNode3362.Add(Material591);
{ METHOD .Fd.Add }
MFNode3362.Add(Material606);
{ METHOD .Fd.Add }
MFNode3362.Add(Material621);
{ METHOD .Fd.Add }
MFNode3362.Add(Material636);
{ METHOD .Fd.Add }
MFNode3362.Add(Material651);
{ METHOD .Fd.Add }
MFNode3362.Add(Material666);
{ METHOD .Fd.Add }
MFNode3362.Add(Material681);
{ METHOD .Fd.Add }
MFNode3362.Add(Material696);
{ METHOD .Fd.Add }
MFNode3362.Add(Material711);
{ METHOD .Fd.Add }
MFNode3362.Add(Material726);
{ METHOD .Fd.Add }
MFNode3362.Add(Material741);
{ METHOD .Fd.Add }
MFNode3362.Add(Material756);
{ METHOD .Fd.Add }
MFNode3362.Add(Material771);
{ METHOD .Fd.Add }
MFNode3362.Add(Material786);
{ METHOD .Fd.Add }
MFNode3362.Add(Material801);
{ METHOD .Fd.Add }
MFNode3362.Add(Material820);
end;

procedure InitHAnimGimbalJointController22Part217;
begin

{ METHOD .Fd.Add }
MFNode3362.Add(Material835);
{ METHOD .Fd.Add }
MFNode3362.Add(Material850);
{ METHOD .Fd.Add }
MFNode3362.Add(Material865);
{ METHOD .Fd.Add }
MFNode3362.Add(Material880);
{ METHOD .Fd.Add }
MFNode3362.Add(Material895);
{ METHOD .Fd.Add }
MFNode3362.Add(Material910);
{ METHOD .Fd.Add }
MFNode3362.Add(Material925);
{ METHOD .Fd.Add }
MFNode3362.Add(Material940);
{ METHOD .Fd.Add }
MFNode3362.Add(Material955);
{ METHOD .Fd.Add }
MFNode3362.Add(Material970);
{ METHOD .Fd.Add }
MFNode3362.Add(Material985);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1000);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1015);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1030);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1045);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1060);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1075);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1090);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1105);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1120);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1135);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1150);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1165);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1180);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1203);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1218);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1233);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1248);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1263);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1278);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1293);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1308);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1347);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1362);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1377);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1392);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1407);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1422);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1437);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1452);
end;

procedure InitHAnimGimbalJointController22Part218;
begin

{ METHOD .Fd.Add }
MFNode3362.Add(Material1467);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1482);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1497);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1512);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1539);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1554);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1569);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1584);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1599);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1614);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1629);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1644);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1659);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1674);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1689);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1704);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1719);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1734);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1749);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1768);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1783);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1798);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1813);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1828);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1843);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1858);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1873);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1888);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1903);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1918);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1933);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1948);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1975);
{ METHOD .Fd.Add }
MFNode3362.Add(Material1990);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2005);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2020);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2035);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2050);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2065);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2080);
end;

procedure InitHAnimGimbalJointController22Part219;
begin

{ METHOD .Fd.Add }
MFNode3362.Add(Material2095);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2110);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2125);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2140);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2155);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2170);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2185);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2204);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2219);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2234);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2249);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2264);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2279);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2294);
{ METHOD .Fd.Add }
MFNode3362.Add(Material2309);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3362);
MFNode3509 := TMFNode.CreateUndefined(Script3214, false, 'mats');
{ METHOD .Fd.Add }
MFNode3509.Add(Material26);
{ METHOD .Fd.Add }
MFNode3509.Add(Material45);
{ METHOD .Fd.Add }
MFNode3509.Add(Material64);
{ METHOD .Fd.Add }
MFNode3509.Add(Material79);
{ METHOD .Fd.Add }
MFNode3509.Add(Material94);
{ METHOD .Fd.Add }
MFNode3509.Add(Material113);
{ METHOD .Fd.Add }
MFNode3509.Add(Material136);
{ METHOD .Fd.Add }
MFNode3509.Add(Material151);
{ METHOD .Fd.Add }
MFNode3509.Add(Material166);
{ METHOD .Fd.Add }
MFNode3509.Add(Material181);
{ METHOD .Fd.Add }
MFNode3509.Add(Material196);
{ METHOD .Fd.Add }
MFNode3509.Add(Material211);
{ METHOD .Fd.Add }
MFNode3509.Add(Material226);
{ METHOD .Fd.Add }
MFNode3509.Add(Material241);
{ METHOD .Fd.Add }
MFNode3509.Add(Material256);
{ METHOD .Fd.Add }
MFNode3509.Add(Material271);
{ METHOD .Fd.Add }
MFNode3509.Add(Material286);
{ METHOD .Fd.Add }
MFNode3509.Add(Material301);
{ METHOD .Fd.Add }
MFNode3509.Add(Material316);
{ METHOD .Fd.Add }
MFNode3509.Add(Material331);
{ METHOD .Fd.Add }
MFNode3509.Add(Material346);
{ METHOD .Fd.Add }
MFNode3509.Add(Material361);
{ METHOD .Fd.Add }
MFNode3509.Add(Material380);
end;

procedure InitHAnimGimbalJointController22Part220;
begin

{ METHOD .Fd.Add }
MFNode3509.Add(Material395);
{ METHOD .Fd.Add }
MFNode3509.Add(Material410);
{ METHOD .Fd.Add }
MFNode3509.Add(Material425);
{ METHOD .Fd.Add }
MFNode3509.Add(Material440);
{ METHOD .Fd.Add }
MFNode3509.Add(Material455);
{ METHOD .Fd.Add }
MFNode3509.Add(Material470);
{ METHOD .Fd.Add }
MFNode3509.Add(Material485);
{ METHOD .Fd.Add }
MFNode3509.Add(Material500);
{ METHOD .Fd.Add }
MFNode3509.Add(Material515);
{ METHOD .Fd.Add }
MFNode3509.Add(Material530);
{ METHOD .Fd.Add }
MFNode3509.Add(Material549);
{ METHOD .Fd.Add }
MFNode3509.Add(Material572);
{ METHOD .Fd.Add }
MFNode3509.Add(Material587);
{ METHOD .Fd.Add }
MFNode3509.Add(Material602);
{ METHOD .Fd.Add }
MFNode3509.Add(Material617);
{ METHOD .Fd.Add }
MFNode3509.Add(Material632);
{ METHOD .Fd.Add }
MFNode3509.Add(Material647);
{ METHOD .Fd.Add }
MFNode3509.Add(Material662);
{ METHOD .Fd.Add }
MFNode3509.Add(Material677);
{ METHOD .Fd.Add }
MFNode3509.Add(Material692);
{ METHOD .Fd.Add }
MFNode3509.Add(Material707);
{ METHOD .Fd.Add }
MFNode3509.Add(Material722);
{ METHOD .Fd.Add }
MFNode3509.Add(Material737);
{ METHOD .Fd.Add }
MFNode3509.Add(Material752);
{ METHOD .Fd.Add }
MFNode3509.Add(Material767);
{ METHOD .Fd.Add }
MFNode3509.Add(Material782);
{ METHOD .Fd.Add }
MFNode3509.Add(Material797);
{ METHOD .Fd.Add }
MFNode3509.Add(Material816);
{ METHOD .Fd.Add }
MFNode3509.Add(Material831);
{ METHOD .Fd.Add }
MFNode3509.Add(Material846);
{ METHOD .Fd.Add }
MFNode3509.Add(Material861);
{ METHOD .Fd.Add }
MFNode3509.Add(Material876);
{ METHOD .Fd.Add }
MFNode3509.Add(Material891);
{ METHOD .Fd.Add }
MFNode3509.Add(Material906);
{ METHOD .Fd.Add }
MFNode3509.Add(Material921);
{ METHOD .Fd.Add }
MFNode3509.Add(Material936);
{ METHOD .Fd.Add }
MFNode3509.Add(Material951);
{ METHOD .Fd.Add }
MFNode3509.Add(Material966);
{ METHOD .Fd.Add }
MFNode3509.Add(Material981);
{ METHOD .Fd.Add }
MFNode3509.Add(Material996);
end;

procedure InitHAnimGimbalJointController22Part221;
begin

{ METHOD .Fd.Add }
MFNode3509.Add(Material1011);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1026);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1041);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1056);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1071);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1086);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1101);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1116);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1131);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1146);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1161);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1176);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1199);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1214);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1229);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1244);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1259);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1274);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1289);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1304);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1343);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1358);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1373);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1388);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1403);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1418);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1433);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1448);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1463);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1478);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1493);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1508);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1535);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1550);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1565);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1580);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1595);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1610);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1625);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1640);
end;

procedure InitHAnimGimbalJointController22Part222;
begin

{ METHOD .Fd.Add }
MFNode3509.Add(Material1655);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1670);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1685);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1700);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1715);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1730);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1745);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1764);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1779);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1794);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1809);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1824);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1839);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1854);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1869);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1884);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1899);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1914);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1929);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1944);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1971);
{ METHOD .Fd.Add }
MFNode3509.Add(Material1986);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2001);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2016);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2031);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2046);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2061);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2076);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2091);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2106);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2121);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2136);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2151);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2166);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2181);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2200);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2215);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2230);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2245);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2260);
end;

procedure InitHAnimGimbalJointController22Part223;
begin

{ METHOD .Fd.Add }
MFNode3509.Add(Material2275);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2290);
{ METHOD .Fd.Add }
MFNode3509.Add(Material2305);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3509);
MFNode3656 := TMFNode.CreateUndefined(Script3214, false, 'sensors');
{ METHOD .Fd.Add }
MFNode3656.Add(CylinderSensor2609);
{ METHOD .Fd.Add }
MFNode3656.Add(CylinderSensor2617);
{ METHOD .Fd.Add }
MFNode3656.Add(CylinderSensor2625);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3656);
MFNode3660 := TMFNode.CreateUndefined(Script3214, false, 'ringXf');
{ METHOD .Fd.Add }
MFNode3660.Add(Transform2610);
{ METHOD .Fd.Add }
MFNode3660.Add(Transform2618);
{ METHOD .Fd.Add }
MFNode3660.Add(Transform2626);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3660);
MFNode3664 := TMFNode.CreateUndefined(Script3214, false, 'ringMat');
{ METHOD .Fd.Add }
MFNode3664.Add(Material2614);
{ METHOD .Fd.Add }
MFNode3664.Add(Material2622);
{ METHOD .Fd.Add }
MFNode3664.Add(Material2630);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3664);
SFNode3668 := TSFNode.CreateUndefined(Script3214, false, 'label');
{ METHOD .Fd.Value }
SFNode3668.Value := Text2655;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode3668);
SFNode3670 := TSFNode.CreateUndefined(Script3214, false, 'humanoid');
{ METHOD .Fd.Value }
SFNode3670.Value := HAnimHumanoid18;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode3670);
SFNode3672 := TSFNode.CreateUndefined(Script3214, false, 'ioText');
{ METHOD .Fd.Value }
SFNode3672.Value := Text2792;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode3672);
MFNode3674 := TMFNode.CreateUndefined(Script3214, false, 'jxf');
{ METHOD .Fd.Add }
MFNode3674.Add(Transform22);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform41);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform60);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform75);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform90);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform109);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform132);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform147);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform162);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform178);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform192);
end;

procedure InitHAnimGimbalJointController22Part224;
begin

{ METHOD .Fd.Add }
MFNode3674.Add(Transform207);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform222);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform237);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform253);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform267);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform282);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform297);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform312);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform328);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform342);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform357);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform376);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform391);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform406);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform422);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform436);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform451);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform466);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform482);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform496);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform511);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform526);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform545);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform568);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform583);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform598);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform614);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform628);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform643);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform658);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform673);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform689);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform703);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform718);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform733);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform748);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform764);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform778);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform793);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform812);
end;

procedure InitHAnimGimbalJointController22Part225;
begin

{ METHOD .Fd.Add }
MFNode3674.Add(Transform827);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform842);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform858);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform872);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform887);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform902);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform918);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform932);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform947);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform962);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform977);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform992);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1007);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1022);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1037);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1052);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1067);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1082);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1097);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1112);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1127);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1142);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1157);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1172);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1195);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1210);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1225);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1240);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1255);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1270);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1285);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1300);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1340);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1355);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1370);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1385);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1400);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1415);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1430);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1444);
end;

procedure InitHAnimGimbalJointController22Part226;
begin

{ METHOD .Fd.Add }
MFNode3674.Add(Transform1459);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1474);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1489);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1504);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1531);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1546);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1561);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1577);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1591);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1606);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1621);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1636);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1652);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1666);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1681);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1696);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1711);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1727);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1741);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1760);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1775);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1790);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1806);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1820);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1835);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1850);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1866);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1880);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1895);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1910);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1925);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1940);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1967);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1982);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform1997);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2013);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2027);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2042);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2057);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2072);
end;

procedure InitHAnimGimbalJointController22Part227;
begin

{ METHOD .Fd.Add }
MFNode3674.Add(Transform2088);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2102);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2117);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2132);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2147);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2163);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2177);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2196);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2211);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2226);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2242);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2256);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2271);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2286);
{ METHOD .Fd.Add }
MFNode3674.Add(Transform2302);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3674);
MFNode3821 := TMFNode.CreateUndefined(Script3214, false, 'lcoords');
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate33);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate37);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate52);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate56);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate71);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate86);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate101);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate105);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate120);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate124);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate128);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate143);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate158);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate173);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate188);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate203);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate218);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate233);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate248);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate263);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate278);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate293);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate308);
end;

procedure InitHAnimGimbalJointController22Part228;
begin

{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate323);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate338);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate353);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate368);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate372);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate387);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate402);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate417);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate432);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate447);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate462);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate477);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate492);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate507);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate522);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate537);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate541);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate556);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate560);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate564);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate579);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate594);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate609);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate624);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate639);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate654);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate669);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate684);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate699);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate714);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate729);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate744);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate759);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate774);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate789);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate804);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate808);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate823);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate838);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate853);
end;

procedure InitHAnimGimbalJointController22Part229;
begin

{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate868);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate883);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate898);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate913);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate928);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate943);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate958);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate973);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate988);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1003);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1018);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1033);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1048);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1063);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1078);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1093);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1108);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1123);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1138);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1153);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1168);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1183);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1187);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1191);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1206);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1221);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1236);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1251);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1266);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1281);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1296);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1311);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1315);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1319);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1323);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1327);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1331);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1335);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1350);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1365);
end;

procedure InitHAnimGimbalJointController22Part230;
begin

{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1380);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1395);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1410);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1425);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1440);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1455);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1470);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1485);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1500);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1515);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1519);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1523);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1527);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1542);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1557);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1572);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1587);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1602);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1617);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1632);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1647);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1662);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1677);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1692);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1707);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1722);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1737);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1752);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1756);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1771);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1786);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1801);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1816);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1831);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1846);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1861);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1876);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1891);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1906);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1921);
end;

procedure InitHAnimGimbalJointController22Part231;
begin

{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1936);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1951);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1955);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1959);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1963);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1978);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate1993);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2008);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2023);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2038);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2053);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2068);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2083);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2098);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2113);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2128);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2143);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2158);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2173);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2188);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2192);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2207);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2222);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2237);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2252);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2267);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2282);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2297);
{ METHOD .Fd.Add }
MFNode3821.Add(Coordinate2312);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode3821);
SFTime3994 := TSFTime.CreateUndefined(Script3214, false, 'exportHumanoid');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime3994);
SFTime3995 := TSFTime.CreateUndefined(Script3214, false, 'importHumanoid');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime3995);
SFRotation3996 := TSFRotation.CreateUndefined(Script3214, false, 'rotX');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFRotation3996);
SFRotation3997 := TSFRotation.CreateUndefined(Script3214, false, 'rotY');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFRotation3997);
SFRotation3998 := TSFRotation.CreateUndefined(Script3214, false, 'rotZ');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFRotation3998);
end;

procedure InitHAnimGimbalJointController22Part232;
begin

SFTime3999 := TSFTime.CreateUndefined(Script3214, false, 'next');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime3999);
SFTime4000 := TSFTime.CreateUndefined(Script3214, false, 'prev');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4000);
SFTime4001 := TSFTime.CreateUndefined(Script3214, false, 'up');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4001);
SFTime4002 := TSFTime.CreateUndefined(Script3214, false, 'down');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4002);
SFTime4003 := TSFTime.CreateUndefined(Script3214, false, 'sibPrev');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4003);
SFTime4004 := TSFTime.CreateUndefined(Script3214, false, 'sibNext');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4004);
SFTime4005 := TSFTime.CreateUndefined(Script3214, false, 'reset');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4005);
SFTime4006 := TSFTime.CreateUndefined(Script3214, false, 'deselect');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4006);
SFTime4007 := TSFTime.CreateUndefined(Script3214, false, 'pick_humanoid_root');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4007);
SFTime4008 := TSFTime.CreateUndefined(Script3214, false, 'pick_sacroiliac');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4008);
SFTime4009 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_hip');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4009);
SFTime4010 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_knee');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4010);
SFTime4011 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_talocrural');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4011);
SFTime4012 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_talocalcaneonavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4012);
SFTime4013 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_cuneonavicular_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4013);
SFTime4014 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsometatarsal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4014);
SFTime4015 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metatarsophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4015);
SFTime4016 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4016);
SFTime4017 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_cuneonavicular_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4017);
SFTime4018 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsometatarsal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4018);
end;

procedure InitHAnimGimbalJointController22Part233;
begin

SFTime4019 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metatarsophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4019);
SFTime4020 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4020);
SFTime4021 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4021);
SFTime4022 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_cuneonavicular_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4022);
SFTime4023 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsometatarsal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4023);
SFTime4024 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metatarsophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4024);
SFTime4025 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4025);
SFTime4026 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4026);
SFTime4027 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_calcaneocuboid');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4027);
SFTime4028 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_transversetarsal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4028);
SFTime4029 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsometatarsal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4029);
SFTime4030 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metatarsophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4030);
SFTime4031 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4031);
SFTime4032 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4032);
SFTime4033 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsometatarsal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4033);
SFTime4034 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metatarsophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4034);
SFTime4035 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4035);
SFTime4036 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_tarsal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4036);
SFTime4037 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_hip');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4037);
SFTime4038 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_knee');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4038);
end;

procedure InitHAnimGimbalJointController22Part234;
begin

SFTime4039 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_talocrural');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4039);
SFTime4040 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_talocalcaneonavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4040);
SFTime4041 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_cuneonavicular_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4041);
SFTime4042 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsometatarsal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4042);
SFTime4043 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metatarsophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4043);
SFTime4044 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4044);
SFTime4045 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_cuneonavicular_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4045);
SFTime4046 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsometatarsal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4046);
SFTime4047 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metatarsophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4047);
SFTime4048 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4048);
SFTime4049 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4049);
SFTime4050 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_cuneonavicular_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4050);
SFTime4051 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsometatarsal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4051);
SFTime4052 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metatarsophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4052);
SFTime4053 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4053);
SFTime4054 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4054);
SFTime4055 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_calcaneocuboid');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4055);
SFTime4056 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_transversetarsal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4056);
SFTime4057 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsometatarsal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4057);
SFTime4058 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metatarsophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4058);
end;

procedure InitHAnimGimbalJointController22Part235;
begin

SFTime4059 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4059);
SFTime4060 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4060);
SFTime4061 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsometatarsal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4061);
SFTime4062 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metatarsophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4062);
SFTime4063 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4063);
SFTime4064 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_tarsal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4064);
SFTime4065 := TSFTime.CreateUndefined(Script3214, false, 'pick_vl5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4065);
SFTime4066 := TSFTime.CreateUndefined(Script3214, false, 'pick_vl4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4066);
SFTime4067 := TSFTime.CreateUndefined(Script3214, false, 'pick_vl3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4067);
SFTime4068 := TSFTime.CreateUndefined(Script3214, false, 'pick_vl2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4068);
SFTime4069 := TSFTime.CreateUndefined(Script3214, false, 'pick_vl1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4069);
SFTime4070 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt12');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4070);
SFTime4071 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt11');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4071);
SFTime4072 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt10');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4072);
SFTime4073 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt9');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4073);
SFTime4074 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt8');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4074);
SFTime4075 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt7');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4075);
SFTime4076 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt6');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4076);
SFTime4077 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4077);
SFTime4078 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4078);
end;

procedure InitHAnimGimbalJointController22Part236;
begin

SFTime4079 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4079);
SFTime4080 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4080);
SFTime4081 := TSFTime.CreateUndefined(Script3214, false, 'pick_vt1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4081);
SFTime4082 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc7');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4082);
SFTime4083 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc6');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4083);
SFTime4084 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4084);
SFTime4085 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4085);
SFTime4086 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4086);
SFTime4087 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4087);
SFTime4088 := TSFTime.CreateUndefined(Script3214, false, 'pick_vc1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4088);
SFTime4089 := TSFTime.CreateUndefined(Script3214, false, 'pick_skullbase');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4089);
SFTime4090 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_eyelid_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4090);
SFTime4091 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_eyelid_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4091);
SFTime4092 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_eyeball_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4092);
SFTime4093 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_eyeball_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4093);
SFTime4094 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_eyebrow_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4094);
SFTime4095 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_eyebrow_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4095);
SFTime4096 := TSFTime.CreateUndefined(Script3214, false, 'pick_temporomandibular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4096);
SFTime4097 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_sternoclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4097);
SFTime4098 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_acromioclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4098);
end;

procedure InitHAnimGimbalJointController22Part237;
begin

SFTime4099 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_shoulder');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4099);
SFTime4100 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_elbow');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4100);
SFTime4101 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_radiocarpal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4101);
SFTime4102 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_midcarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4102);
SFTime4103 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpometacarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4103);
SFTime4104 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metacarpophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4104);
SFTime4105 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4105);
SFTime4106 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_midcarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4106);
SFTime4107 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpometacarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4107);
SFTime4108 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metacarpophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4108);
SFTime4109 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4109);
SFTime4110 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4110);
SFTime4111 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_midcarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4111);
SFTime4112 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpometacarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4112);
SFTime4113 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metacarpophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4113);
SFTime4114 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4114);
SFTime4115 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4115);
SFTime4116 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_midcarpal_4_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4116);
SFTime4117 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpometacarpal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4117);
SFTime4118 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metacarpophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4118);
end;

procedure InitHAnimGimbalJointController22Part238;
begin

SFTime4119 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4119);
SFTime4120 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4120);
SFTime4121 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpometacarpal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4121);
SFTime4122 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_metacarpophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4122);
SFTime4123 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4123);
SFTime4124 := TSFTime.CreateUndefined(Script3214, false, 'pick_l_carpal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4124);
SFTime4125 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_sternoclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4125);
SFTime4126 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_acromioclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4126);
SFTime4127 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_shoulder');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4127);
SFTime4128 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_elbow');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4128);
SFTime4129 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_radiocarpal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4129);
SFTime4130 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_midcarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4130);
SFTime4131 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpometacarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4131);
SFTime4132 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metacarpophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4132);
SFTime4133 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4133);
SFTime4134 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_midcarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4134);
SFTime4135 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpometacarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4135);
SFTime4136 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metacarpophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4136);
SFTime4137 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4137);
SFTime4138 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4138);
end;

procedure InitHAnimGimbalJointController22Part239;
begin

SFTime4139 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_midcarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4139);
SFTime4140 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpometacarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4140);
SFTime4141 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metacarpophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4141);
SFTime4142 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4142);
SFTime4143 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4143);
SFTime4144 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_midcarpal_4_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4144);
SFTime4145 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpometacarpal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4145);
SFTime4146 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metacarpophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4146);
SFTime4147 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4147);
SFTime4148 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4148);
SFTime4149 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpometacarpal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4149);
SFTime4150 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_metacarpophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4150);
SFTime4151 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4151);
SFTime4152 := TSFTime.CreateUndefined(Script3214, false, 'pick_r_carpal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4152);
MFNode4153 := TMFNode.CreateUndefined(Script3214, false, 'knobXf');
{ METHOD .Fd.Add }
MFNode4153.Add(Transform2830);
{ METHOD .Fd.Add }
MFNode4153.Add(Transform2884);
{ METHOD .Fd.Add }
MFNode4153.Add(Transform2938);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4153);
MFNode4157 := TMFNode.CreateUndefined(Script3214, false, 'planeSens');
{ METHOD .Fd.Add }
MFNode4157.Add(PlaneSensor2829);
{ METHOD .Fd.Add }
MFNode4157.Add(PlaneSensor2883);
{ METHOD .Fd.Add }
MFNode4157.Add(PlaneSensor2937);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4157);
MFNode4161 := TMFNode.CreateUndefined(Script3214, false, 'inMat');
{ METHOD .Fd.Add }
MFNode4161.Add(Material2852);
end;

procedure InitHAnimGimbalJointController22Part240;
begin

{ METHOD .Fd.Add }
MFNode4161.Add(Material2906);
{ METHOD .Fd.Add }
MFNode4161.Add(Material2960);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4161);
MFNode4165 := TMFNode.CreateUndefined(Script3214, false, 'inTxt');
{ METHOD .Fd.Add }
MFNode4165.Add(Text2858);
{ METHOD .Fd.Add }
MFNode4165.Add(Text2912);
{ METHOD .Fd.Add }
MFNode4165.Add(Text2966);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4165);
MFNode4169 := TMFNode.CreateUndefined(Script3214, false, 'minTxt');
{ METHOD .Fd.Add }
MFNode4169.Add(Text2839);
{ METHOD .Fd.Add }
MFNode4169.Add(Text2893);
{ METHOD .Fd.Add }
MFNode4169.Add(Text2947);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4169);
MFNode4173 := TMFNode.CreateUndefined(Script3214, false, 'maxTxt');
{ METHOD .Fd.Add }
MFNode4173.Add(Text2845);
{ METHOD .Fd.Add }
MFNode4173.Add(Text2899);
{ METHOD .Fd.Add }
MFNode4173.Add(Text2953);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4173);
SFNode4177 := TSFNode.CreateUndefined(Script3214, false, 'outTxt');
{ METHOD .Fd.Value }
SFNode4177.Value := Text2983;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode4177);
SFVec3f4179 := TSFVec3f.CreateUndefined(Script3214, false, 'slideX');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFVec3f4179);
SFTime4180 := TSFTime.CreateUndefined(Script3214, false, 'pickInX');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4180);
SFVec3f4181 := TSFVec3f.CreateUndefined(Script3214, false, 'slideY');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFVec3f4181);
SFTime4182 := TSFTime.CreateUndefined(Script3214, false, 'pickInY');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4182);
SFVec3f4183 := TSFVec3f.CreateUndefined(Script3214, false, 'slideZ');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFVec3f4183);
SFTime4184 := TSFTime.CreateUndefined(Script3214, false, 'pickInZ');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4184);
SFString4185 := TSFString.CreateUndefined(Script3214, false, 'typed');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFString4185);
SFString4186 := TSFString.CreateUndefined(Script3214, false, 'typedFinal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFString4186);
MFNode4187 := TMFNode.CreateUndefined(Script3214, false, 'tknobXf');
{ METHOD .Fd.Add }
MFNode4187.Add(Transform3026);
{ METHOD .Fd.Add }
MFNode4187.Add(Transform3085);
end;

procedure InitHAnimGimbalJointController22Part241;
begin

{ METHOD .Fd.Add }
MFNode4187.Add(Transform3144);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4187);
MFNode4191 := TMFNode.CreateUndefined(Script3214, false, 'tplaneSens');
{ METHOD .Fd.Add }
MFNode4191.Add(PlaneSensor3025);
{ METHOD .Fd.Add }
MFNode4191.Add(PlaneSensor3084);
{ METHOD .Fd.Add }
MFNode4191.Add(PlaneSensor3143);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4191);
MFNode4195 := TMFNode.CreateUndefined(Script3214, false, 'tinMat');
{ METHOD .Fd.Add }
MFNode4195.Add(Material3048);
{ METHOD .Fd.Add }
MFNode4195.Add(Material3107);
{ METHOD .Fd.Add }
MFNode4195.Add(Material3166);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4195);
MFNode4199 := TMFNode.CreateUndefined(Script3214, false, 'tinTxt');
{ METHOD .Fd.Add }
MFNode4199.Add(Text3054);
{ METHOD .Fd.Add }
MFNode4199.Add(Text3113);
{ METHOD .Fd.Add }
MFNode4199.Add(Text3172);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4199);
SFVec3f4203 := TSFVec3f.CreateUndefined(Script3214, false, 'slideTX');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFVec3f4203);
SFVec3f4204 := TSFVec3f.CreateUndefined(Script3214, false, 'slideTY');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFVec3f4204);
SFVec3f4205 := TSFVec3f.CreateUndefined(Script3214, false, 'slideTZ');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFVec3f4205);
SFTime4206 := TSFTime.CreateUndefined(Script3214, false, 'pickTInX');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4206);
SFTime4207 := TSFTime.CreateUndefined(Script3214, false, 'pickTInY');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4207);
SFTime4208 := TSFTime.CreateUndefined(Script3214, false, 'pickTInZ');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4208);
SFString4209 := TSFString.CreateUndefined(Script3214, false, 'typedT');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFString4209);
SFString4210 := TSFString.CreateUndefined(Script3214, false, 'typedFinalT');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFString4210);
SFTime4211 := TSFTime.CreateUndefined(Script3214, false, 'resetT');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFTime4211);
SFNode4212 := TSFNode.CreateUndefined(Script3214, false, 'strSens');
{ METHOD .Fd.Value }
SFNode4212.Value := StringSensor3212;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode4212);
SFNode4214 := TSFNode.CreateUndefined(Script3214, false, 'strSensT');
{ METHOD .Fd.Value }
SFNode4214.Value := StringSensor3213;
end;

procedure InitHAnimGimbalJointController22Part242;
begin

{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode4214);
SFNode4216 := TSFNode.CreateUndefined(Script3214, false, 'statusText');
{ METHOD .Fd.Value }
SFNode4216.Value := Text3197;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode4216);
SFNode4218 := TSFNode.CreateUndefined(Script3214, false, 'helpSwitch');
{ METHOD .Fd.Value }
SFNode4218.Value := Switch3199;
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFNode4218);
MFNode4220 := TMFNode.CreateUndefined(Script3214, false, 'btnMats');
{ METHOD .Fd.Add }
MFNode4220.Add(Material2662);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2675);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2688);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2701);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2714);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2727);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2740);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2753);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2767);
{ METHOD .Fd.Add }
MFNode4220.Add(Material2780);
{ METHOD .Fd.Add }
MFNode4220.Add(Material3179);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4220);
MFNode4232 := TMFNode.CreateUndefined(Script3214, false, 'knobMats');
{ METHOD .Fd.Add }
MFNode4232.Add(Material2833);
{ METHOD .Fd.Add }
MFNode4232.Add(Material2887);
{ METHOD .Fd.Add }
MFNode4232.Add(Material2941);
{ METHOD .Fd.Add }
MFNode4232.Add(Material3029);
{ METHOD .Fd.Add }
MFNode4232.Add(Material3088);
{ METHOD .Fd.Add }
MFNode4232.Add(Material3147);
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(MFNode4232);
SFBool4239 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_humanoid_root');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4239);
SFBool4240 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_sacroiliac');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4240);
SFBool4241 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_hip');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4241);
SFBool4242 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_knee');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4242);
SFBool4243 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_talocrural');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4243);
SFBool4244 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_talocalcaneonavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4244);
end;

procedure InitHAnimGimbalJointController22Part243;
begin

SFBool4245 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_cuneonavicular_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4245);
SFBool4246 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsometatarsal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4246);
SFBool4247 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metatarsophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4247);
SFBool4248 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4248);
SFBool4249 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_cuneonavicular_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4249);
SFBool4250 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsometatarsal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4250);
SFBool4251 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metatarsophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4251);
SFBool4252 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4252);
SFBool4253 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4253);
SFBool4254 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_cuneonavicular_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4254);
SFBool4255 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsometatarsal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4255);
SFBool4256 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metatarsophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4256);
SFBool4257 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4257);
SFBool4258 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4258);
SFBool4259 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_calcaneocuboid');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4259);
SFBool4260 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_transversetarsal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4260);
SFBool4261 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsometatarsal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4261);
SFBool4262 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metatarsophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4262);
SFBool4263 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4263);
SFBool4264 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4264);
end;

procedure InitHAnimGimbalJointController22Part244;
begin

SFBool4265 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsometatarsal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4265);
SFBool4266 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metatarsophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4266);
SFBool4267 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4267);
SFBool4268 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_tarsal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4268);
SFBool4269 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_hip');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4269);
SFBool4270 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_knee');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4270);
SFBool4271 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_talocrural');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4271);
SFBool4272 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_talocalcaneonavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4272);
SFBool4273 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_cuneonavicular_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4273);
SFBool4274 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsometatarsal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4274);
SFBool4275 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metatarsophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4275);
SFBool4276 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4276);
SFBool4277 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_cuneonavicular_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4277);
SFBool4278 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsometatarsal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4278);
SFBool4279 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metatarsophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4279);
SFBool4280 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4280);
SFBool4281 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4281);
SFBool4282 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_cuneonavicular_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4282);
SFBool4283 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsometatarsal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4283);
SFBool4284 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metatarsophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4284);
end;

procedure InitHAnimGimbalJointController22Part245;
begin

SFBool4285 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4285);
SFBool4286 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4286);
SFBool4287 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_calcaneocuboid');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4287);
SFBool4288 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_transversetarsal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4288);
SFBool4289 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsometatarsal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4289);
SFBool4290 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metatarsophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4290);
SFBool4291 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4291);
SFBool4292 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4292);
SFBool4293 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsometatarsal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4293);
SFBool4294 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metatarsophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4294);
SFBool4295 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4295);
SFBool4296 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_tarsal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4296);
SFBool4297 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vl5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4297);
SFBool4298 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vl4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4298);
SFBool4299 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vl3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4299);
SFBool4300 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vl2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4300);
SFBool4301 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vl1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4301);
SFBool4302 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt12');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4302);
SFBool4303 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt11');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4303);
SFBool4304 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt10');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4304);
end;

procedure InitHAnimGimbalJointController22Part246;
begin

SFBool4305 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt9');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4305);
SFBool4306 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt8');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4306);
SFBool4307 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt7');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4307);
SFBool4308 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt6');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4308);
SFBool4309 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4309);
SFBool4310 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4310);
SFBool4311 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4311);
SFBool4312 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4312);
SFBool4313 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vt1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4313);
SFBool4314 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc7');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4314);
SFBool4315 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc6');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4315);
SFBool4316 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4316);
SFBool4317 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4317);
SFBool4318 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4318);
SFBool4319 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4319);
SFBool4320 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_vc1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4320);
SFBool4321 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_skullbase');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4321);
SFBool4322 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_eyelid_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4322);
SFBool4323 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_eyelid_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4323);
SFBool4324 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_eyeball_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4324);
end;

procedure InitHAnimGimbalJointController22Part247;
begin

SFBool4325 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_eyeball_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4325);
SFBool4326 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_eyebrow_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4326);
SFBool4327 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_eyebrow_joint');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4327);
SFBool4328 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_temporomandibular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4328);
SFBool4329 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_sternoclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4329);
SFBool4330 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_acromioclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4330);
SFBool4331 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_shoulder');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4331);
SFBool4332 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_elbow');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4332);
SFBool4333 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_radiocarpal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4333);
SFBool4334 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_midcarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4334);
SFBool4335 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpometacarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4335);
SFBool4336 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metacarpophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4336);
SFBool4337 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4337);
SFBool4338 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_midcarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4338);
SFBool4339 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpometacarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4339);
SFBool4340 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metacarpophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4340);
SFBool4341 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4341);
SFBool4342 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4342);
SFBool4343 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_midcarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4343);
SFBool4344 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpometacarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4344);
end;

procedure InitHAnimGimbalJointController22Part248;
begin

SFBool4345 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metacarpophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4345);
SFBool4346 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4346);
SFBool4347 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4347);
SFBool4348 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_midcarpal_4_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4348);
SFBool4349 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpometacarpal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4349);
SFBool4350 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metacarpophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4350);
SFBool4351 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4351);
SFBool4352 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4352);
SFBool4353 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpometacarpal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4353);
SFBool4354 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_metacarpophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4354);
SFBool4355 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4355);
SFBool4356 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_l_carpal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4356);
SFBool4357 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_sternoclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4357);
SFBool4358 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_acromioclavicular');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4358);
SFBool4359 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_shoulder');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4359);
SFBool4360 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_elbow');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4360);
SFBool4361 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_radiocarpal');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4361);
SFBool4362 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_midcarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4362);
SFBool4363 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpometacarpal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4363);
SFBool4364 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metacarpophalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4364);
end;

procedure InitHAnimGimbalJointController22Part249;
begin

SFBool4365 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_interphalangeal_1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4365);
SFBool4366 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_midcarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4366);
SFBool4367 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpometacarpal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4367);
SFBool4368 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metacarpophalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4368);
SFBool4369 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_proximal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4369);
SFBool4370 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_distal_interphalangeal_2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4370);
SFBool4371 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_midcarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4371);
SFBool4372 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpometacarpal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4372);
SFBool4373 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metacarpophalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4373);
SFBool4374 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_proximal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4374);
SFBool4375 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_distal_interphalangeal_3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4375);
SFBool4376 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_midcarpal_4_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4376);
SFBool4377 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpometacarpal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4377);
SFBool4378 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metacarpophalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4378);
SFBool4379 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_proximal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4379);
SFBool4380 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_distal_interphalangeal_4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4380);
SFBool4381 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpometacarpal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4381);
SFBool4382 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_metacarpophalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4382);
SFBool4383 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_proximal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4383);
SFBool4384 := TSFBool.CreateUndefined(Script3214, false, 'ovJ_r_carpal_distal_interphalangeal_5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4384);
end;

procedure InitHAnimGimbalJointController22Part250;
begin

SFBool4385 := TSFBool.CreateUndefined(Script3214, false, 'ovB0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4385);
SFBool4386 := TSFBool.CreateUndefined(Script3214, false, 'ovB1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4386);
SFBool4387 := TSFBool.CreateUndefined(Script3214, false, 'ovB2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4387);
SFBool4388 := TSFBool.CreateUndefined(Script3214, false, 'ovB3');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4388);
SFBool4389 := TSFBool.CreateUndefined(Script3214, false, 'ovB4');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4389);
SFBool4390 := TSFBool.CreateUndefined(Script3214, false, 'ovB5');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4390);
SFBool4391 := TSFBool.CreateUndefined(Script3214, false, 'ovB6');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4391);
SFBool4392 := TSFBool.CreateUndefined(Script3214, false, 'ovB7');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4392);
SFBool4393 := TSFBool.CreateUndefined(Script3214, false, 'ovB8');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4393);
SFBool4394 := TSFBool.CreateUndefined(Script3214, false, 'ovB9');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4394);
SFBool4395 := TSFBool.CreateUndefined(Script3214, false, 'ovB10');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4395);
SFBool4396 := TSFBool.CreateUndefined(Script3214, false, 'ovSl0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4396);
SFBool4397 := TSFBool.CreateUndefined(Script3214, false, 'ovTSl0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4397);
SFBool4398 := TSFBool.CreateUndefined(Script3214, false, 'ovRg0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4398);
SFBool4399 := TSFBool.CreateUndefined(Script3214, false, 'ovIn0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4399);
SFBool4400 := TSFBool.CreateUndefined(Script3214, false, 'ovTIn0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4400);
SFBool4401 := TSFBool.CreateUndefined(Script3214, false, 'acSl0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4401);
SFBool4402 := TSFBool.CreateUndefined(Script3214, false, 'acTSl0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4402);
SFBool4403 := TSFBool.CreateUndefined(Script3214, false, 'acRg0');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4403);
SFBool4404 := TSFBool.CreateUndefined(Script3214, false, 'ovSl1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4404);
end;

procedure InitHAnimGimbalJointController22Part251;
begin

SFBool4405 := TSFBool.CreateUndefined(Script3214, false, 'ovTSl1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4405);
SFBool4406 := TSFBool.CreateUndefined(Script3214, false, 'ovRg1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4406);
SFBool4407 := TSFBool.CreateUndefined(Script3214, false, 'ovIn1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4407);
SFBool4408 := TSFBool.CreateUndefined(Script3214, false, 'ovTIn1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4408);
SFBool4409 := TSFBool.CreateUndefined(Script3214, false, 'acSl1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4409);
SFBool4410 := TSFBool.CreateUndefined(Script3214, false, 'acTSl1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4410);
SFBool4411 := TSFBool.CreateUndefined(Script3214, false, 'acRg1');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4411);
SFBool4412 := TSFBool.CreateUndefined(Script3214, false, 'ovSl2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4412);
SFBool4413 := TSFBool.CreateUndefined(Script3214, false, 'ovTSl2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4413);
SFBool4414 := TSFBool.CreateUndefined(Script3214, false, 'ovRg2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4414);
SFBool4415 := TSFBool.CreateUndefined(Script3214, false, 'ovIn2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4415);
SFBool4416 := TSFBool.CreateUndefined(Script3214, false, 'ovTIn2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4416);
SFBool4417 := TSFBool.CreateUndefined(Script3214, false, 'acSl2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4417);
SFBool4418 := TSFBool.CreateUndefined(Script3214, false, 'acTSl2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4418);
SFBool4419 := TSFBool.CreateUndefined(Script3214, false, 'acRg2');
{ METHOD .Fd.AddCustomField }
Script3214.AddCustomField(SFBool4419);
{ METHOD .FdChildren.Add }
Layer2605.FdChildren.Add(Script3214);
{ METHOD .FdLayers.Add }
LayerSet14.FdLayers.Add(Layer2605);
{ METHOD .FdChildren.Add }
Group12.FdChildren.Add(LayerSet14);
{ ==================== GIMBAL SENSOR & BUTTON ROUTES ==================== }
{ Original "csGX.EventRotation_changed TO controller.rotX }
{ Sample csGX.EventRotation_changed TO controller.rotX}
Group12.AddRoute(CylinderSensor2609.EventRotation_changed, SFRotation3996);
{ METHOD .AddX3DROUTE }
{ Original "csGY.EventRotation_changed TO controller.rotY }
{ Sample csGY.EventRotation_changed TO controller.rotY}
Group12.AddRoute(CylinderSensor2617.EventRotation_changed, SFRotation3997);
{ METHOD .AddX3DROUTE }
{ Original "csGZ.EventRotation_changed TO controller.rotZ }
{ Sample csGZ.EventRotation_changed TO controller.rotZ}
Group12.AddRoute(CylinderSensor2625.EventRotation_changed, SFRotation3998);
{ METHOD .AddX3DROUTE }
{ Original "tsNext.EventTouchTime TO controller.next }
{ Sample tsNext.EventTouchTime TO controller.next}
Group12.AddRoute(TouchSensor2671.EventTouchTime, SFTime3999);
{ METHOD .AddX3DROUTE }
{ Original "tsPrev.EventTouchTime TO controller.prev }
{ Sample tsPrev.EventTouchTime TO controller.prev}
Group12.AddRoute(TouchSensor2658.EventTouchTime, SFTime4000);
{ METHOD .AddX3DROUTE }
{ Original "tsUp.EventTouchTime TO controller.up }
{ Sample tsUp.EventTouchTime TO controller.up}
Group12.AddRoute(TouchSensor2684.EventTouchTime, SFTime4001);
{ METHOD .AddX3DROUTE }
{ Original "tsDown.EventTouchTime TO controller.down }
{ Sample tsDown.EventTouchTime TO controller.down}
Group12.AddRoute(TouchSensor2697.EventTouchTime, SFTime4002);
end;

procedure InitHAnimGimbalJointController22Part252;
begin

{ METHOD .AddX3DROUTE }
{ Original "tsSibPrev.EventTouchTime TO controller.sibPrev }
{ Sample tsSibPrev.EventTouchTime TO controller.sibPrev}
Group12.AddRoute(TouchSensor2710.EventTouchTime, SFTime4003);
{ METHOD .AddX3DROUTE }
{ Original "tsSibNext.EventTouchTime TO controller.sibNext }
{ Sample tsSibNext.EventTouchTime TO controller.sibNext}
Group12.AddRoute(TouchSensor2723.EventTouchTime, SFTime4004);
{ METHOD .AddX3DROUTE }
{ Original "tsReset.EventTouchTime TO controller.reset }
{ Sample tsReset.EventTouchTime TO controller.reset}
Group12.AddRoute(TouchSensor2736.EventTouchTime, SFTime4005);
{ METHOD .AddX3DROUTE }
{ Original "tsDeselect.EventTouchTime TO controller.deselect }
{ Sample tsDeselect.EventTouchTime TO controller.deselect}
Group12.AddRoute(TouchSensor2749.EventTouchTime, SFTime4006);
{ METHOD .AddX3DROUTE }
{ Original "tsExport.EventTouchTime TO controller.exportHumanoid }
{ Sample tsExport.EventTouchTime TO controller.exportHumanoid}
Group12.AddRoute(TouchSensor2763.EventTouchTime, SFTime3994);
{ METHOD .AddX3DROUTE }
{ Original "tsImport.EventTouchTime TO controller.importHumanoid }
{ Sample tsImport.EventTouchTime TO controller.importHumanoid}
Group12.AddRoute(TouchSensor2776.EventTouchTime, SFTime3995);
{ METHOD .AddX3DROUTE }
{ ==================== JOINT PICK ROUTES ==================== }
{ Original "ts_humanoid_root.EventTouchTime TO controller.pick_humanoid_root }
{ Sample ts_humanoid_root.EventTouchTime TO controller.pick_humanoid_root}
Group12.AddRoute(TouchSensor21.EventTouchTime, SFTime4007);
{ METHOD .AddX3DROUTE }
{ Original "ts_sacroiliac.EventTouchTime TO controller.pick_sacroiliac }
{ Sample ts_sacroiliac.EventTouchTime TO controller.pick_sacroiliac}
Group12.AddRoute(TouchSensor40.EventTouchTime, SFTime4008);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_hip.EventTouchTime TO controller.pick_l_hip }
{ Sample ts_l_hip.EventTouchTime TO controller.pick_l_hip}
Group12.AddRoute(TouchSensor59.EventTouchTime, SFTime4009);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_knee.EventTouchTime TO controller.pick_l_knee }
{ Sample ts_l_knee.EventTouchTime TO controller.pick_l_knee}
Group12.AddRoute(TouchSensor74.EventTouchTime, SFTime4010);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_talocrural.EventTouchTime TO controller.pick_l_talocrural }
{ Sample ts_l_talocrural.EventTouchTime TO controller.pick_l_talocrural}
Group12.AddRoute(TouchSensor89.EventTouchTime, SFTime4011);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_talocalcaneonavicular.EventTouchTime TO controller.pick_l_talocalcaneonavicular }
{ Sample ts_l_talocalcaneonavicular.EventTouchTime TO controller.pick_l_talocalcaneonavicular}
Group12.AddRoute(TouchSensor108.EventTouchTime, SFTime4012);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_cuneonavicular_1.EventTouchTime TO controller.pick_l_cuneonavicular_1 }
{ Sample ts_l_cuneonavicular_1.EventTouchTime TO controller.pick_l_cuneonavicular_1}
Group12.AddRoute(TouchSensor131.EventTouchTime, SFTime4013);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_1.EventTouchTime TO controller.pick_l_tarsometatarsal_1 }
{ Sample ts_l_tarsometatarsal_1.EventTouchTime TO controller.pick_l_tarsometatarsal_1}
Group12.AddRoute(TouchSensor146.EventTouchTime, SFTime4014);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_1.EventTouchTime TO controller.pick_l_metatarsophalangeal_1 }
{ Sample ts_l_metatarsophalangeal_1.EventTouchTime TO controller.pick_l_metatarsophalangeal_1}
Group12.AddRoute(TouchSensor161.EventTouchTime, SFTime4015);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_interphalangeal_1.EventTouchTime TO controller.pick_l_tarsal_interphalangeal_1 }
{ Sample ts_l_tarsal_interphalangeal_1.EventTouchTime TO controller.pick_l_tarsal_interphalangeal_1}
Group12.AddRoute(TouchSensor177.EventTouchTime, SFTime4016);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_cuneonavicular_2.EventTouchTime TO controller.pick_l_cuneonavicular_2 }
{ Sample ts_l_cuneonavicular_2.EventTouchTime TO controller.pick_l_cuneonavicular_2}
Group12.AddRoute(TouchSensor191.EventTouchTime, SFTime4017);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_2.EventTouchTime TO controller.pick_l_tarsometatarsal_2 }
{ Sample ts_l_tarsometatarsal_2.EventTouchTime TO controller.pick_l_tarsometatarsal_2}
Group12.AddRoute(TouchSensor206.EventTouchTime, SFTime4018);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_2.EventTouchTime TO controller.pick_l_metatarsophalangeal_2 }
{ Sample ts_l_metatarsophalangeal_2.EventTouchTime TO controller.pick_l_metatarsophalangeal_2}
Group12.AddRoute(TouchSensor221.EventTouchTime, SFTime4019);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_2 }
{ Sample ts_l_tarsal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor236.EventTouchTime, SFTime4020);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_2.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_2 }
{ Sample ts_l_tarsal_distal_interphalangeal_2.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor252.EventTouchTime, SFTime4021);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_cuneonavicular_3.EventTouchTime TO controller.pick_l_cuneonavicular_3 }
{ Sample ts_l_cuneonavicular_3.EventTouchTime TO controller.pick_l_cuneonavicular_3}
Group12.AddRoute(TouchSensor266.EventTouchTime, SFTime4022);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_3.EventTouchTime TO controller.pick_l_tarsometatarsal_3 }
{ Sample ts_l_tarsometatarsal_3.EventTouchTime TO controller.pick_l_tarsometatarsal_3}
Group12.AddRoute(TouchSensor281.EventTouchTime, SFTime4023);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_3.EventTouchTime TO controller.pick_l_metatarsophalangeal_3 }
{ Sample ts_l_metatarsophalangeal_3.EventTouchTime TO controller.pick_l_metatarsophalangeal_3}
Group12.AddRoute(TouchSensor296.EventTouchTime, SFTime4024);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_3 }
{ Sample ts_l_tarsal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor311.EventTouchTime, SFTime4025);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_3.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_3 }
{ Sample ts_l_tarsal_distal_interphalangeal_3.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor327.EventTouchTime, SFTime4026);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_calcaneocuboid.EventTouchTime TO controller.pick_l_calcaneocuboid }
{ Sample ts_l_calcaneocuboid.EventTouchTime TO controller.pick_l_calcaneocuboid}
Group12.AddRoute(TouchSensor341.EventTouchTime, SFTime4027);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_transversetarsal.EventTouchTime TO controller.pick_l_transversetarsal }
{ Sample ts_l_transversetarsal.EventTouchTime TO controller.pick_l_transversetarsal}
Group12.AddRoute(TouchSensor356.EventTouchTime, SFTime4028);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_4.EventTouchTime TO controller.pick_l_tarsometatarsal_4 }
{ Sample ts_l_tarsometatarsal_4.EventTouchTime TO controller.pick_l_tarsometatarsal_4}
Group12.AddRoute(TouchSensor375.EventTouchTime, SFTime4029);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_4.EventTouchTime TO controller.pick_l_metatarsophalangeal_4 }
{ Sample ts_l_metatarsophalangeal_4.EventTouchTime TO controller.pick_l_metatarsophalangeal_4}
Group12.AddRoute(TouchSensor390.EventTouchTime, SFTime4030);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_4 }
{ Sample ts_l_tarsal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor405.EventTouchTime, SFTime4031);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_4.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_4 }
{ Sample ts_l_tarsal_distal_interphalangeal_4.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor421.EventTouchTime, SFTime4032);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_5.EventTouchTime TO controller.pick_l_tarsometatarsal_5 }
{ Sample ts_l_tarsometatarsal_5.EventTouchTime TO controller.pick_l_tarsometatarsal_5}
Group12.AddRoute(TouchSensor435.EventTouchTime, SFTime4033);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_5.EventTouchTime TO controller.pick_l_metatarsophalangeal_5 }
{ Sample ts_l_metatarsophalangeal_5.EventTouchTime TO controller.pick_l_metatarsophalangeal_5}
Group12.AddRoute(TouchSensor450.EventTouchTime, SFTime4034);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_5 }
{ Sample ts_l_tarsal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_l_tarsal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor465.EventTouchTime, SFTime4035);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_5.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_5 }
{ Sample ts_l_tarsal_distal_interphalangeal_5.EventTouchTime TO controller.pick_l_tarsal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor481.EventTouchTime, SFTime4036);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_hip.EventTouchTime TO controller.pick_r_hip }
{ Sample ts_r_hip.EventTouchTime TO controller.pick_r_hip}
Group12.AddRoute(TouchSensor495.EventTouchTime, SFTime4037);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_knee.EventTouchTime TO controller.pick_r_knee }
{ Sample ts_r_knee.EventTouchTime TO controller.pick_r_knee}
Group12.AddRoute(TouchSensor510.EventTouchTime, SFTime4038);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_talocrural.EventTouchTime TO controller.pick_r_talocrural }
{ Sample ts_r_talocrural.EventTouchTime TO controller.pick_r_talocrural}
Group12.AddRoute(TouchSensor525.EventTouchTime, SFTime4039);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_talocalcaneonavicular.EventTouchTime TO controller.pick_r_talocalcaneonavicular }
{ Sample ts_r_talocalcaneonavicular.EventTouchTime TO controller.pick_r_talocalcaneonavicular}
Group12.AddRoute(TouchSensor544.EventTouchTime, SFTime4040);
end;

procedure InitHAnimGimbalJointController22Part253;
begin

{ METHOD .AddX3DROUTE }
{ Original "ts_r_cuneonavicular_1.EventTouchTime TO controller.pick_r_cuneonavicular_1 }
{ Sample ts_r_cuneonavicular_1.EventTouchTime TO controller.pick_r_cuneonavicular_1}
Group12.AddRoute(TouchSensor567.EventTouchTime, SFTime4041);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_1.EventTouchTime TO controller.pick_r_tarsometatarsal_1 }
{ Sample ts_r_tarsometatarsal_1.EventTouchTime TO controller.pick_r_tarsometatarsal_1}
Group12.AddRoute(TouchSensor582.EventTouchTime, SFTime4042);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_1.EventTouchTime TO controller.pick_r_metatarsophalangeal_1 }
{ Sample ts_r_metatarsophalangeal_1.EventTouchTime TO controller.pick_r_metatarsophalangeal_1}
Group12.AddRoute(TouchSensor597.EventTouchTime, SFTime4043);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_interphalangeal_1.EventTouchTime TO controller.pick_r_tarsal_interphalangeal_1 }
{ Sample ts_r_tarsal_interphalangeal_1.EventTouchTime TO controller.pick_r_tarsal_interphalangeal_1}
Group12.AddRoute(TouchSensor613.EventTouchTime, SFTime4044);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_cuneonavicular_2.EventTouchTime TO controller.pick_r_cuneonavicular_2 }
{ Sample ts_r_cuneonavicular_2.EventTouchTime TO controller.pick_r_cuneonavicular_2}
Group12.AddRoute(TouchSensor627.EventTouchTime, SFTime4045);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_2.EventTouchTime TO controller.pick_r_tarsometatarsal_2 }
{ Sample ts_r_tarsometatarsal_2.EventTouchTime TO controller.pick_r_tarsometatarsal_2}
Group12.AddRoute(TouchSensor642.EventTouchTime, SFTime4046);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_2.EventTouchTime TO controller.pick_r_metatarsophalangeal_2 }
{ Sample ts_r_metatarsophalangeal_2.EventTouchTime TO controller.pick_r_metatarsophalangeal_2}
Group12.AddRoute(TouchSensor657.EventTouchTime, SFTime4047);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_2 }
{ Sample ts_r_tarsal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor672.EventTouchTime, SFTime4048);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_2.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_2 }
{ Sample ts_r_tarsal_distal_interphalangeal_2.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor688.EventTouchTime, SFTime4049);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_cuneonavicular_3.EventTouchTime TO controller.pick_r_cuneonavicular_3 }
{ Sample ts_r_cuneonavicular_3.EventTouchTime TO controller.pick_r_cuneonavicular_3}
Group12.AddRoute(TouchSensor702.EventTouchTime, SFTime4050);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_3.EventTouchTime TO controller.pick_r_tarsometatarsal_3 }
{ Sample ts_r_tarsometatarsal_3.EventTouchTime TO controller.pick_r_tarsometatarsal_3}
Group12.AddRoute(TouchSensor717.EventTouchTime, SFTime4051);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_3.EventTouchTime TO controller.pick_r_metatarsophalangeal_3 }
{ Sample ts_r_metatarsophalangeal_3.EventTouchTime TO controller.pick_r_metatarsophalangeal_3}
Group12.AddRoute(TouchSensor732.EventTouchTime, SFTime4052);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_3 }
{ Sample ts_r_tarsal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor747.EventTouchTime, SFTime4053);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_3.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_3 }
{ Sample ts_r_tarsal_distal_interphalangeal_3.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor763.EventTouchTime, SFTime4054);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_calcaneocuboid.EventTouchTime TO controller.pick_r_calcaneocuboid }
{ Sample ts_r_calcaneocuboid.EventTouchTime TO controller.pick_r_calcaneocuboid}
Group12.AddRoute(TouchSensor777.EventTouchTime, SFTime4055);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_transversetarsal.EventTouchTime TO controller.pick_r_transversetarsal }
{ Sample ts_r_transversetarsal.EventTouchTime TO controller.pick_r_transversetarsal}
Group12.AddRoute(TouchSensor792.EventTouchTime, SFTime4056);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_4.EventTouchTime TO controller.pick_r_tarsometatarsal_4 }
{ Sample ts_r_tarsometatarsal_4.EventTouchTime TO controller.pick_r_tarsometatarsal_4}
Group12.AddRoute(TouchSensor811.EventTouchTime, SFTime4057);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_4.EventTouchTime TO controller.pick_r_metatarsophalangeal_4 }
{ Sample ts_r_metatarsophalangeal_4.EventTouchTime TO controller.pick_r_metatarsophalangeal_4}
Group12.AddRoute(TouchSensor826.EventTouchTime, SFTime4058);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_4 }
{ Sample ts_r_tarsal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor841.EventTouchTime, SFTime4059);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_4.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_4 }
{ Sample ts_r_tarsal_distal_interphalangeal_4.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor857.EventTouchTime, SFTime4060);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_5.EventTouchTime TO controller.pick_r_tarsometatarsal_5 }
{ Sample ts_r_tarsometatarsal_5.EventTouchTime TO controller.pick_r_tarsometatarsal_5}
Group12.AddRoute(TouchSensor871.EventTouchTime, SFTime4061);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_5.EventTouchTime TO controller.pick_r_metatarsophalangeal_5 }
{ Sample ts_r_metatarsophalangeal_5.EventTouchTime TO controller.pick_r_metatarsophalangeal_5}
Group12.AddRoute(TouchSensor886.EventTouchTime, SFTime4062);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_5 }
{ Sample ts_r_tarsal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_r_tarsal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor901.EventTouchTime, SFTime4063);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_5.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_5 }
{ Sample ts_r_tarsal_distal_interphalangeal_5.EventTouchTime TO controller.pick_r_tarsal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor917.EventTouchTime, SFTime4064);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl5.EventTouchTime TO controller.pick_vl5 }
{ Sample ts_vl5.EventTouchTime TO controller.pick_vl5}
Group12.AddRoute(TouchSensor931.EventTouchTime, SFTime4065);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl4.EventTouchTime TO controller.pick_vl4 }
{ Sample ts_vl4.EventTouchTime TO controller.pick_vl4}
Group12.AddRoute(TouchSensor946.EventTouchTime, SFTime4066);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl3.EventTouchTime TO controller.pick_vl3 }
{ Sample ts_vl3.EventTouchTime TO controller.pick_vl3}
Group12.AddRoute(TouchSensor961.EventTouchTime, SFTime4067);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl2.EventTouchTime TO controller.pick_vl2 }
{ Sample ts_vl2.EventTouchTime TO controller.pick_vl2}
Group12.AddRoute(TouchSensor976.EventTouchTime, SFTime4068);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl1.EventTouchTime TO controller.pick_vl1 }
{ Sample ts_vl1.EventTouchTime TO controller.pick_vl1}
Group12.AddRoute(TouchSensor991.EventTouchTime, SFTime4069);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt12.EventTouchTime TO controller.pick_vt12 }
{ Sample ts_vt12.EventTouchTime TO controller.pick_vt12}
Group12.AddRoute(TouchSensor1006.EventTouchTime, SFTime4070);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt11.EventTouchTime TO controller.pick_vt11 }
{ Sample ts_vt11.EventTouchTime TO controller.pick_vt11}
Group12.AddRoute(TouchSensor1021.EventTouchTime, SFTime4071);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt10.EventTouchTime TO controller.pick_vt10 }
{ Sample ts_vt10.EventTouchTime TO controller.pick_vt10}
Group12.AddRoute(TouchSensor1036.EventTouchTime, SFTime4072);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt9.EventTouchTime TO controller.pick_vt9 }
{ Sample ts_vt9.EventTouchTime TO controller.pick_vt9}
Group12.AddRoute(TouchSensor1051.EventTouchTime, SFTime4073);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt8.EventTouchTime TO controller.pick_vt8 }
{ Sample ts_vt8.EventTouchTime TO controller.pick_vt8}
Group12.AddRoute(TouchSensor1066.EventTouchTime, SFTime4074);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt7.EventTouchTime TO controller.pick_vt7 }
{ Sample ts_vt7.EventTouchTime TO controller.pick_vt7}
Group12.AddRoute(TouchSensor1081.EventTouchTime, SFTime4075);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt6.EventTouchTime TO controller.pick_vt6 }
{ Sample ts_vt6.EventTouchTime TO controller.pick_vt6}
Group12.AddRoute(TouchSensor1096.EventTouchTime, SFTime4076);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt5.EventTouchTime TO controller.pick_vt5 }
{ Sample ts_vt5.EventTouchTime TO controller.pick_vt5}
Group12.AddRoute(TouchSensor1111.EventTouchTime, SFTime4077);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt4.EventTouchTime TO controller.pick_vt4 }
{ Sample ts_vt4.EventTouchTime TO controller.pick_vt4}
Group12.AddRoute(TouchSensor1126.EventTouchTime, SFTime4078);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt3.EventTouchTime TO controller.pick_vt3 }
{ Sample ts_vt3.EventTouchTime TO controller.pick_vt3}
Group12.AddRoute(TouchSensor1141.EventTouchTime, SFTime4079);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt2.EventTouchTime TO controller.pick_vt2 }
{ Sample ts_vt2.EventTouchTime TO controller.pick_vt2}
Group12.AddRoute(TouchSensor1156.EventTouchTime, SFTime4080);
end;

procedure InitHAnimGimbalJointController22Part254;
begin

{ METHOD .AddX3DROUTE }
{ Original "ts_vt1.EventTouchTime TO controller.pick_vt1 }
{ Sample ts_vt1.EventTouchTime TO controller.pick_vt1}
Group12.AddRoute(TouchSensor1171.EventTouchTime, SFTime4081);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc7.EventTouchTime TO controller.pick_vc7 }
{ Sample ts_vc7.EventTouchTime TO controller.pick_vc7}
Group12.AddRoute(TouchSensor1194.EventTouchTime, SFTime4082);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc6.EventTouchTime TO controller.pick_vc6 }
{ Sample ts_vc6.EventTouchTime TO controller.pick_vc6}
Group12.AddRoute(TouchSensor1209.EventTouchTime, SFTime4083);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc5.EventTouchTime TO controller.pick_vc5 }
{ Sample ts_vc5.EventTouchTime TO controller.pick_vc5}
Group12.AddRoute(TouchSensor1224.EventTouchTime, SFTime4084);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc4.EventTouchTime TO controller.pick_vc4 }
{ Sample ts_vc4.EventTouchTime TO controller.pick_vc4}
Group12.AddRoute(TouchSensor1239.EventTouchTime, SFTime4085);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc3.EventTouchTime TO controller.pick_vc3 }
{ Sample ts_vc3.EventTouchTime TO controller.pick_vc3}
Group12.AddRoute(TouchSensor1254.EventTouchTime, SFTime4086);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc2.EventTouchTime TO controller.pick_vc2 }
{ Sample ts_vc2.EventTouchTime TO controller.pick_vc2}
Group12.AddRoute(TouchSensor1269.EventTouchTime, SFTime4087);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc1.EventTouchTime TO controller.pick_vc1 }
{ Sample ts_vc1.EventTouchTime TO controller.pick_vc1}
Group12.AddRoute(TouchSensor1284.EventTouchTime, SFTime4088);
{ METHOD .AddX3DROUTE }
{ Original "ts_skullbase.EventTouchTime TO controller.pick_skullbase }
{ Sample ts_skullbase.EventTouchTime TO controller.pick_skullbase}
Group12.AddRoute(TouchSensor1299.EventTouchTime, SFTime4089);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_eyelid_joint.EventTouchTime TO controller.pick_l_eyelid_joint }
{ Sample ts_l_eyelid_joint.EventTouchTime TO controller.pick_l_eyelid_joint}
Group12.AddRoute(TouchSensor1339.EventTouchTime, SFTime4090);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_eyelid_joint.EventTouchTime TO controller.pick_r_eyelid_joint }
{ Sample ts_r_eyelid_joint.EventTouchTime TO controller.pick_r_eyelid_joint}
Group12.AddRoute(TouchSensor1354.EventTouchTime, SFTime4091);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_eyeball_joint.EventTouchTime TO controller.pick_l_eyeball_joint }
{ Sample ts_l_eyeball_joint.EventTouchTime TO controller.pick_l_eyeball_joint}
Group12.AddRoute(TouchSensor1369.EventTouchTime, SFTime4092);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_eyeball_joint.EventTouchTime TO controller.pick_r_eyeball_joint }
{ Sample ts_r_eyeball_joint.EventTouchTime TO controller.pick_r_eyeball_joint}
Group12.AddRoute(TouchSensor1384.EventTouchTime, SFTime4093);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_eyebrow_joint.EventTouchTime TO controller.pick_l_eyebrow_joint }
{ Sample ts_l_eyebrow_joint.EventTouchTime TO controller.pick_l_eyebrow_joint}
Group12.AddRoute(TouchSensor1399.EventTouchTime, SFTime4094);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_eyebrow_joint.EventTouchTime TO controller.pick_r_eyebrow_joint }
{ Sample ts_r_eyebrow_joint.EventTouchTime TO controller.pick_r_eyebrow_joint}
Group12.AddRoute(TouchSensor1414.EventTouchTime, SFTime4095);
{ METHOD .AddX3DROUTE }
{ Original "ts_temporomandibular.EventTouchTime TO controller.pick_temporomandibular }
{ Sample ts_temporomandibular.EventTouchTime TO controller.pick_temporomandibular}
Group12.AddRoute(TouchSensor1429.EventTouchTime, SFTime4096);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_sternoclavicular.EventTouchTime TO controller.pick_l_sternoclavicular }
{ Sample ts_l_sternoclavicular.EventTouchTime TO controller.pick_l_sternoclavicular}
Group12.AddRoute(TouchSensor1443.EventTouchTime, SFTime4097);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_acromioclavicular.EventTouchTime TO controller.pick_l_acromioclavicular }
{ Sample ts_l_acromioclavicular.EventTouchTime TO controller.pick_l_acromioclavicular}
Group12.AddRoute(TouchSensor1458.EventTouchTime, SFTime4098);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_shoulder.EventTouchTime TO controller.pick_l_shoulder }
{ Sample ts_l_shoulder.EventTouchTime TO controller.pick_l_shoulder}
Group12.AddRoute(TouchSensor1473.EventTouchTime, SFTime4099);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_elbow.EventTouchTime TO controller.pick_l_elbow }
{ Sample ts_l_elbow.EventTouchTime TO controller.pick_l_elbow}
Group12.AddRoute(TouchSensor1488.EventTouchTime, SFTime4100);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_radiocarpal.EventTouchTime TO controller.pick_l_radiocarpal }
{ Sample ts_l_radiocarpal.EventTouchTime TO controller.pick_l_radiocarpal}
Group12.AddRoute(TouchSensor1503.EventTouchTime, SFTime4101);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_1.EventTouchTime TO controller.pick_l_midcarpal_1 }
{ Sample ts_l_midcarpal_1.EventTouchTime TO controller.pick_l_midcarpal_1}
Group12.AddRoute(TouchSensor1530.EventTouchTime, SFTime4102);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_1.EventTouchTime TO controller.pick_l_carpometacarpal_1 }
{ Sample ts_l_carpometacarpal_1.EventTouchTime TO controller.pick_l_carpometacarpal_1}
Group12.AddRoute(TouchSensor1545.EventTouchTime, SFTime4103);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_1.EventTouchTime TO controller.pick_l_metacarpophalangeal_1 }
{ Sample ts_l_metacarpophalangeal_1.EventTouchTime TO controller.pick_l_metacarpophalangeal_1}
Group12.AddRoute(TouchSensor1560.EventTouchTime, SFTime4104);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_interphalangeal_1.EventTouchTime TO controller.pick_l_carpal_interphalangeal_1 }
{ Sample ts_l_carpal_interphalangeal_1.EventTouchTime TO controller.pick_l_carpal_interphalangeal_1}
Group12.AddRoute(TouchSensor1576.EventTouchTime, SFTime4105);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_2.EventTouchTime TO controller.pick_l_midcarpal_2 }
{ Sample ts_l_midcarpal_2.EventTouchTime TO controller.pick_l_midcarpal_2}
Group12.AddRoute(TouchSensor1590.EventTouchTime, SFTime4106);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_2.EventTouchTime TO controller.pick_l_carpometacarpal_2 }
{ Sample ts_l_carpometacarpal_2.EventTouchTime TO controller.pick_l_carpometacarpal_2}
Group12.AddRoute(TouchSensor1605.EventTouchTime, SFTime4107);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_2.EventTouchTime TO controller.pick_l_metacarpophalangeal_2 }
{ Sample ts_l_metacarpophalangeal_2.EventTouchTime TO controller.pick_l_metacarpophalangeal_2}
Group12.AddRoute(TouchSensor1620.EventTouchTime, SFTime4108);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_2 }
{ Sample ts_l_carpal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor1635.EventTouchTime, SFTime4109);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_2.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_2 }
{ Sample ts_l_carpal_distal_interphalangeal_2.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor1651.EventTouchTime, SFTime4110);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_3.EventTouchTime TO controller.pick_l_midcarpal_3 }
{ Sample ts_l_midcarpal_3.EventTouchTime TO controller.pick_l_midcarpal_3}
Group12.AddRoute(TouchSensor1665.EventTouchTime, SFTime4111);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_3.EventTouchTime TO controller.pick_l_carpometacarpal_3 }
{ Sample ts_l_carpometacarpal_3.EventTouchTime TO controller.pick_l_carpometacarpal_3}
Group12.AddRoute(TouchSensor1680.EventTouchTime, SFTime4112);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_3.EventTouchTime TO controller.pick_l_metacarpophalangeal_3 }
{ Sample ts_l_metacarpophalangeal_3.EventTouchTime TO controller.pick_l_metacarpophalangeal_3}
Group12.AddRoute(TouchSensor1695.EventTouchTime, SFTime4113);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_3 }
{ Sample ts_l_carpal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor1710.EventTouchTime, SFTime4114);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_3.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_3 }
{ Sample ts_l_carpal_distal_interphalangeal_3.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor1726.EventTouchTime, SFTime4115);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_4_5.EventTouchTime TO controller.pick_l_midcarpal_4_5 }
{ Sample ts_l_midcarpal_4_5.EventTouchTime TO controller.pick_l_midcarpal_4_5}
Group12.AddRoute(TouchSensor1740.EventTouchTime, SFTime4116);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_4.EventTouchTime TO controller.pick_l_carpometacarpal_4 }
{ Sample ts_l_carpometacarpal_4.EventTouchTime TO controller.pick_l_carpometacarpal_4}
Group12.AddRoute(TouchSensor1759.EventTouchTime, SFTime4117);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_4.EventTouchTime TO controller.pick_l_metacarpophalangeal_4 }
{ Sample ts_l_metacarpophalangeal_4.EventTouchTime TO controller.pick_l_metacarpophalangeal_4}
Group12.AddRoute(TouchSensor1774.EventTouchTime, SFTime4118);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_4 }
{ Sample ts_l_carpal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor1789.EventTouchTime, SFTime4119);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_4.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_4 }
{ Sample ts_l_carpal_distal_interphalangeal_4.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor1805.EventTouchTime, SFTime4120);
end;

procedure InitHAnimGimbalJointController22Part255;
begin

{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_5.EventTouchTime TO controller.pick_l_carpometacarpal_5 }
{ Sample ts_l_carpometacarpal_5.EventTouchTime TO controller.pick_l_carpometacarpal_5}
Group12.AddRoute(TouchSensor1819.EventTouchTime, SFTime4121);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_5.EventTouchTime TO controller.pick_l_metacarpophalangeal_5 }
{ Sample ts_l_metacarpophalangeal_5.EventTouchTime TO controller.pick_l_metacarpophalangeal_5}
Group12.AddRoute(TouchSensor1834.EventTouchTime, SFTime4122);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_5 }
{ Sample ts_l_carpal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_l_carpal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor1849.EventTouchTime, SFTime4123);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_5.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_5 }
{ Sample ts_l_carpal_distal_interphalangeal_5.EventTouchTime TO controller.pick_l_carpal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor1865.EventTouchTime, SFTime4124);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_sternoclavicular.EventTouchTime TO controller.pick_r_sternoclavicular }
{ Sample ts_r_sternoclavicular.EventTouchTime TO controller.pick_r_sternoclavicular}
Group12.AddRoute(TouchSensor1879.EventTouchTime, SFTime4125);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_acromioclavicular.EventTouchTime TO controller.pick_r_acromioclavicular }
{ Sample ts_r_acromioclavicular.EventTouchTime TO controller.pick_r_acromioclavicular}
Group12.AddRoute(TouchSensor1894.EventTouchTime, SFTime4126);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_shoulder.EventTouchTime TO controller.pick_r_shoulder }
{ Sample ts_r_shoulder.EventTouchTime TO controller.pick_r_shoulder}
Group12.AddRoute(TouchSensor1909.EventTouchTime, SFTime4127);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_elbow.EventTouchTime TO controller.pick_r_elbow }
{ Sample ts_r_elbow.EventTouchTime TO controller.pick_r_elbow}
Group12.AddRoute(TouchSensor1924.EventTouchTime, SFTime4128);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_radiocarpal.EventTouchTime TO controller.pick_r_radiocarpal }
{ Sample ts_r_radiocarpal.EventTouchTime TO controller.pick_r_radiocarpal}
Group12.AddRoute(TouchSensor1939.EventTouchTime, SFTime4129);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_1.EventTouchTime TO controller.pick_r_midcarpal_1 }
{ Sample ts_r_midcarpal_1.EventTouchTime TO controller.pick_r_midcarpal_1}
Group12.AddRoute(TouchSensor1966.EventTouchTime, SFTime4130);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_1.EventTouchTime TO controller.pick_r_carpometacarpal_1 }
{ Sample ts_r_carpometacarpal_1.EventTouchTime TO controller.pick_r_carpometacarpal_1}
Group12.AddRoute(TouchSensor1981.EventTouchTime, SFTime4131);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_1.EventTouchTime TO controller.pick_r_metacarpophalangeal_1 }
{ Sample ts_r_metacarpophalangeal_1.EventTouchTime TO controller.pick_r_metacarpophalangeal_1}
Group12.AddRoute(TouchSensor1996.EventTouchTime, SFTime4132);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_interphalangeal_1.EventTouchTime TO controller.pick_r_carpal_interphalangeal_1 }
{ Sample ts_r_carpal_interphalangeal_1.EventTouchTime TO controller.pick_r_carpal_interphalangeal_1}
Group12.AddRoute(TouchSensor2012.EventTouchTime, SFTime4133);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_2.EventTouchTime TO controller.pick_r_midcarpal_2 }
{ Sample ts_r_midcarpal_2.EventTouchTime TO controller.pick_r_midcarpal_2}
Group12.AddRoute(TouchSensor2026.EventTouchTime, SFTime4134);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_2.EventTouchTime TO controller.pick_r_carpometacarpal_2 }
{ Sample ts_r_carpometacarpal_2.EventTouchTime TO controller.pick_r_carpometacarpal_2}
Group12.AddRoute(TouchSensor2041.EventTouchTime, SFTime4135);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_2.EventTouchTime TO controller.pick_r_metacarpophalangeal_2 }
{ Sample ts_r_metacarpophalangeal_2.EventTouchTime TO controller.pick_r_metacarpophalangeal_2}
Group12.AddRoute(TouchSensor2056.EventTouchTime, SFTime4136);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_2 }
{ Sample ts_r_carpal_proximal_interphalangeal_2.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor2071.EventTouchTime, SFTime4137);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_2.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_2 }
{ Sample ts_r_carpal_distal_interphalangeal_2.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor2087.EventTouchTime, SFTime4138);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_3.EventTouchTime TO controller.pick_r_midcarpal_3 }
{ Sample ts_r_midcarpal_3.EventTouchTime TO controller.pick_r_midcarpal_3}
Group12.AddRoute(TouchSensor2101.EventTouchTime, SFTime4139);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_3.EventTouchTime TO controller.pick_r_carpometacarpal_3 }
{ Sample ts_r_carpometacarpal_3.EventTouchTime TO controller.pick_r_carpometacarpal_3}
Group12.AddRoute(TouchSensor2116.EventTouchTime, SFTime4140);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_3.EventTouchTime TO controller.pick_r_metacarpophalangeal_3 }
{ Sample ts_r_metacarpophalangeal_3.EventTouchTime TO controller.pick_r_metacarpophalangeal_3}
Group12.AddRoute(TouchSensor2131.EventTouchTime, SFTime4141);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_3 }
{ Sample ts_r_carpal_proximal_interphalangeal_3.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor2146.EventTouchTime, SFTime4142);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_3.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_3 }
{ Sample ts_r_carpal_distal_interphalangeal_3.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor2162.EventTouchTime, SFTime4143);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_4_5.EventTouchTime TO controller.pick_r_midcarpal_4_5 }
{ Sample ts_r_midcarpal_4_5.EventTouchTime TO controller.pick_r_midcarpal_4_5}
Group12.AddRoute(TouchSensor2176.EventTouchTime, SFTime4144);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_4.EventTouchTime TO controller.pick_r_carpometacarpal_4 }
{ Sample ts_r_carpometacarpal_4.EventTouchTime TO controller.pick_r_carpometacarpal_4}
Group12.AddRoute(TouchSensor2195.EventTouchTime, SFTime4145);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_4.EventTouchTime TO controller.pick_r_metacarpophalangeal_4 }
{ Sample ts_r_metacarpophalangeal_4.EventTouchTime TO controller.pick_r_metacarpophalangeal_4}
Group12.AddRoute(TouchSensor2210.EventTouchTime, SFTime4146);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_4 }
{ Sample ts_r_carpal_proximal_interphalangeal_4.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor2225.EventTouchTime, SFTime4147);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_4.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_4 }
{ Sample ts_r_carpal_distal_interphalangeal_4.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor2241.EventTouchTime, SFTime4148);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_5.EventTouchTime TO controller.pick_r_carpometacarpal_5 }
{ Sample ts_r_carpometacarpal_5.EventTouchTime TO controller.pick_r_carpometacarpal_5}
Group12.AddRoute(TouchSensor2255.EventTouchTime, SFTime4149);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_5.EventTouchTime TO controller.pick_r_metacarpophalangeal_5 }
{ Sample ts_r_metacarpophalangeal_5.EventTouchTime TO controller.pick_r_metacarpophalangeal_5}
Group12.AddRoute(TouchSensor2270.EventTouchTime, SFTime4150);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_5 }
{ Sample ts_r_carpal_proximal_interphalangeal_5.EventTouchTime TO controller.pick_r_carpal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor2285.EventTouchTime, SFTime4151);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_5.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_5 }
{ Sample ts_r_carpal_distal_interphalangeal_5.EventTouchTime TO controller.pick_r_carpal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor2301.EventTouchTime, SFTime4152);
{ METHOD .AddX3DROUTE }
{ ==================== SLIDER / INPUT ROUTES ==================== }
{ Original "psX.EventTranslation_changed TO controller.slideX }
{ Sample psX.EventTranslation_changed TO controller.slideX}
Group12.AddRoute(PlaneSensor2829.EventTranslation_changed, SFVec3f4179);
{ METHOD .AddX3DROUTE }
{ Original "tsInX.EventTouchTime TO controller.pickInX }
{ Sample tsInX.EventTouchTime TO controller.pickInX}
Group12.AddRoute(TouchSensor2849.EventTouchTime, SFTime4180);
{ METHOD .AddX3DROUTE }
{ Original "psY.EventTranslation_changed TO controller.slideY }
{ Sample psY.EventTranslation_changed TO controller.slideY}
Group12.AddRoute(PlaneSensor2883.EventTranslation_changed, SFVec3f4181);
{ METHOD .AddX3DROUTE }
{ Original "tsInY.EventTouchTime TO controller.pickInY }
{ Sample tsInY.EventTouchTime TO controller.pickInY}
Group12.AddRoute(TouchSensor2903.EventTouchTime, SFTime4182);
{ METHOD .AddX3DROUTE }
{ Original "psZ.EventTranslation_changed TO controller.slideZ }
{ Sample psZ.EventTranslation_changed TO controller.slideZ}
Group12.AddRoute(PlaneSensor2937.EventTranslation_changed, SFVec3f4183);
{ METHOD .AddX3DROUTE }
{ Original "tsInZ.EventTouchTime TO controller.pickInZ }
{ Sample tsInZ.EventTouchTime TO controller.pickInZ}
Group12.AddRoute(TouchSensor2957.EventTouchTime, SFTime4184);
{ METHOD .AddX3DROUTE }
{ Original "strSens.EventEnteredText TO controller.typed }
{ Sample strSens.EventEnteredText TO controller.typed}
Group12.AddRoute(StringSensor3212.EventEnteredText, SFString4185);
{ METHOD .AddX3DROUTE }
{ Original "strSens.EventFinalText TO controller.typedFinal }
{ Sample strSens.EventFinalText TO controller.typedFinal}
Group12.AddRoute(StringSensor3212.EventFinalText, SFString4186);
end;

procedure InitHAnimGimbalJointController22Part256;
begin

{ METHOD .AddX3DROUTE }
{ ==================== ROOT TRANSLATION ROUTES ==================== }
{ Original "psTX.EventTranslation_changed TO controller.slideTX }
{ Sample psTX.EventTranslation_changed TO controller.slideTX}
Group12.AddRoute(PlaneSensor3025.EventTranslation_changed, SFVec3f4203);
{ METHOD .AddX3DROUTE }
{ Original "psTY.EventTranslation_changed TO controller.slideTY }
{ Sample psTY.EventTranslation_changed TO controller.slideTY}
Group12.AddRoute(PlaneSensor3084.EventTranslation_changed, SFVec3f4204);
{ METHOD .AddX3DROUTE }
{ Original "psTZ.EventTranslation_changed TO controller.slideTZ }
{ Sample psTZ.EventTranslation_changed TO controller.slideTZ}
Group12.AddRoute(PlaneSensor3143.EventTranslation_changed, SFVec3f4205);
{ METHOD .AddX3DROUTE }
{ Original "tsTInX.EventTouchTime TO controller.pickTInX }
{ Sample tsTInX.EventTouchTime TO controller.pickTInX}
Group12.AddRoute(TouchSensor3045.EventTouchTime, SFTime4206);
{ METHOD .AddX3DROUTE }
{ Original "tsTInY.EventTouchTime TO controller.pickTInY }
{ Sample tsTInY.EventTouchTime TO controller.pickTInY}
Group12.AddRoute(TouchSensor3104.EventTouchTime, SFTime4207);
{ METHOD .AddX3DROUTE }
{ Original "tsTInZ.EventTouchTime TO controller.pickTInZ }
{ Sample tsTInZ.EventTouchTime TO controller.pickTInZ}
Group12.AddRoute(TouchSensor3163.EventTouchTime, SFTime4208);
{ METHOD .AddX3DROUTE }
{ Original "strSensT.EventEnteredText TO controller.typedT }
{ Sample strSensT.EventEnteredText TO controller.typedT}
Group12.AddRoute(StringSensor3213.EventEnteredText, SFString4209);
{ METHOD .AddX3DROUTE }
{ Original "strSensT.EventFinalText TO controller.typedFinalT }
{ Sample strSensT.EventFinalText TO controller.typedFinalT}
Group12.AddRoute(StringSensor3213.EventFinalText, SFString4210);
{ METHOD .AddX3DROUTE }
{ Original "tsTReset.EventTouchTime TO controller.resetT }
{ Sample tsTReset.EventTouchTime TO controller.resetT}
Group12.AddRoute(TouchSensor3175.EventTouchTime, SFTime4211);
{ METHOD .AddX3DROUTE }
{ ==================== ACCESSIBILITY ROUTES (isOver / isActive -> sounds, speech, highlights) ==================== }
{ Original "ts_humanoid_root.EventIsOver TO controller.ovJ_humanoid_root }
{ Sample ts_humanoid_root.EventIsOver TO controller.ovJ_humanoid_root}
Group12.AddRoute(TouchSensor21.EventIsOver, SFBool4239);
{ METHOD .AddX3DROUTE }
{ Original "ts_sacroiliac.EventIsOver TO controller.ovJ_sacroiliac }
{ Sample ts_sacroiliac.EventIsOver TO controller.ovJ_sacroiliac}
Group12.AddRoute(TouchSensor40.EventIsOver, SFBool4240);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_hip.EventIsOver TO controller.ovJ_l_hip }
{ Sample ts_l_hip.EventIsOver TO controller.ovJ_l_hip}
Group12.AddRoute(TouchSensor59.EventIsOver, SFBool4241);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_knee.EventIsOver TO controller.ovJ_l_knee }
{ Sample ts_l_knee.EventIsOver TO controller.ovJ_l_knee}
Group12.AddRoute(TouchSensor74.EventIsOver, SFBool4242);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_talocrural.EventIsOver TO controller.ovJ_l_talocrural }
{ Sample ts_l_talocrural.EventIsOver TO controller.ovJ_l_talocrural}
Group12.AddRoute(TouchSensor89.EventIsOver, SFBool4243);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_talocalcaneonavicular.EventIsOver TO controller.ovJ_l_talocalcaneonavicular }
{ Sample ts_l_talocalcaneonavicular.EventIsOver TO controller.ovJ_l_talocalcaneonavicular}
Group12.AddRoute(TouchSensor108.EventIsOver, SFBool4244);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_cuneonavicular_1.EventIsOver TO controller.ovJ_l_cuneonavicular_1 }
{ Sample ts_l_cuneonavicular_1.EventIsOver TO controller.ovJ_l_cuneonavicular_1}
Group12.AddRoute(TouchSensor131.EventIsOver, SFBool4245);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_1.EventIsOver TO controller.ovJ_l_tarsometatarsal_1 }
{ Sample ts_l_tarsometatarsal_1.EventIsOver TO controller.ovJ_l_tarsometatarsal_1}
Group12.AddRoute(TouchSensor146.EventIsOver, SFBool4246);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_1.EventIsOver TO controller.ovJ_l_metatarsophalangeal_1 }
{ Sample ts_l_metatarsophalangeal_1.EventIsOver TO controller.ovJ_l_metatarsophalangeal_1}
Group12.AddRoute(TouchSensor161.EventIsOver, SFBool4247);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_interphalangeal_1.EventIsOver TO controller.ovJ_l_tarsal_interphalangeal_1 }
{ Sample ts_l_tarsal_interphalangeal_1.EventIsOver TO controller.ovJ_l_tarsal_interphalangeal_1}
Group12.AddRoute(TouchSensor177.EventIsOver, SFBool4248);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_cuneonavicular_2.EventIsOver TO controller.ovJ_l_cuneonavicular_2 }
{ Sample ts_l_cuneonavicular_2.EventIsOver TO controller.ovJ_l_cuneonavicular_2}
Group12.AddRoute(TouchSensor191.EventIsOver, SFBool4249);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_2.EventIsOver TO controller.ovJ_l_tarsometatarsal_2 }
{ Sample ts_l_tarsometatarsal_2.EventIsOver TO controller.ovJ_l_tarsometatarsal_2}
Group12.AddRoute(TouchSensor206.EventIsOver, SFBool4250);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_2.EventIsOver TO controller.ovJ_l_metatarsophalangeal_2 }
{ Sample ts_l_metatarsophalangeal_2.EventIsOver TO controller.ovJ_l_metatarsophalangeal_2}
Group12.AddRoute(TouchSensor221.EventIsOver, SFBool4251);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_2 }
{ Sample ts_l_tarsal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor236.EventIsOver, SFBool4252);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_2 }
{ Sample ts_l_tarsal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor252.EventIsOver, SFBool4253);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_cuneonavicular_3.EventIsOver TO controller.ovJ_l_cuneonavicular_3 }
{ Sample ts_l_cuneonavicular_3.EventIsOver TO controller.ovJ_l_cuneonavicular_3}
Group12.AddRoute(TouchSensor266.EventIsOver, SFBool4254);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_3.EventIsOver TO controller.ovJ_l_tarsometatarsal_3 }
{ Sample ts_l_tarsometatarsal_3.EventIsOver TO controller.ovJ_l_tarsometatarsal_3}
Group12.AddRoute(TouchSensor281.EventIsOver, SFBool4255);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_3.EventIsOver TO controller.ovJ_l_metatarsophalangeal_3 }
{ Sample ts_l_metatarsophalangeal_3.EventIsOver TO controller.ovJ_l_metatarsophalangeal_3}
Group12.AddRoute(TouchSensor296.EventIsOver, SFBool4256);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_3 }
{ Sample ts_l_tarsal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor311.EventIsOver, SFBool4257);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_3 }
{ Sample ts_l_tarsal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor327.EventIsOver, SFBool4258);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_calcaneocuboid.EventIsOver TO controller.ovJ_l_calcaneocuboid }
{ Sample ts_l_calcaneocuboid.EventIsOver TO controller.ovJ_l_calcaneocuboid}
Group12.AddRoute(TouchSensor341.EventIsOver, SFBool4259);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_transversetarsal.EventIsOver TO controller.ovJ_l_transversetarsal }
{ Sample ts_l_transversetarsal.EventIsOver TO controller.ovJ_l_transversetarsal}
Group12.AddRoute(TouchSensor356.EventIsOver, SFBool4260);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_4.EventIsOver TO controller.ovJ_l_tarsometatarsal_4 }
{ Sample ts_l_tarsometatarsal_4.EventIsOver TO controller.ovJ_l_tarsometatarsal_4}
Group12.AddRoute(TouchSensor375.EventIsOver, SFBool4261);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_4.EventIsOver TO controller.ovJ_l_metatarsophalangeal_4 }
{ Sample ts_l_metatarsophalangeal_4.EventIsOver TO controller.ovJ_l_metatarsophalangeal_4}
Group12.AddRoute(TouchSensor390.EventIsOver, SFBool4262);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_4 }
{ Sample ts_l_tarsal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor405.EventIsOver, SFBool4263);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_4 }
{ Sample ts_l_tarsal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor421.EventIsOver, SFBool4264);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsometatarsal_5.EventIsOver TO controller.ovJ_l_tarsometatarsal_5 }
{ Sample ts_l_tarsometatarsal_5.EventIsOver TO controller.ovJ_l_tarsometatarsal_5}
Group12.AddRoute(TouchSensor435.EventIsOver, SFBool4265);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metatarsophalangeal_5.EventIsOver TO controller.ovJ_l_metatarsophalangeal_5 }
{ Sample ts_l_metatarsophalangeal_5.EventIsOver TO controller.ovJ_l_metatarsophalangeal_5}
Group12.AddRoute(TouchSensor450.EventIsOver, SFBool4266);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_5 }
{ Sample ts_l_tarsal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_l_tarsal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor465.EventIsOver, SFBool4267);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_tarsal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_5 }
{ Sample ts_l_tarsal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_l_tarsal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor481.EventIsOver, SFBool4268);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_hip.EventIsOver TO controller.ovJ_r_hip }
{ Sample ts_r_hip.EventIsOver TO controller.ovJ_r_hip}
Group12.AddRoute(TouchSensor495.EventIsOver, SFBool4269);
end;

procedure InitHAnimGimbalJointController22Part257;
begin

{ METHOD .AddX3DROUTE }
{ Original "ts_r_knee.EventIsOver TO controller.ovJ_r_knee }
{ Sample ts_r_knee.EventIsOver TO controller.ovJ_r_knee}
Group12.AddRoute(TouchSensor510.EventIsOver, SFBool4270);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_talocrural.EventIsOver TO controller.ovJ_r_talocrural }
{ Sample ts_r_talocrural.EventIsOver TO controller.ovJ_r_talocrural}
Group12.AddRoute(TouchSensor525.EventIsOver, SFBool4271);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_talocalcaneonavicular.EventIsOver TO controller.ovJ_r_talocalcaneonavicular }
{ Sample ts_r_talocalcaneonavicular.EventIsOver TO controller.ovJ_r_talocalcaneonavicular}
Group12.AddRoute(TouchSensor544.EventIsOver, SFBool4272);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_cuneonavicular_1.EventIsOver TO controller.ovJ_r_cuneonavicular_1 }
{ Sample ts_r_cuneonavicular_1.EventIsOver TO controller.ovJ_r_cuneonavicular_1}
Group12.AddRoute(TouchSensor567.EventIsOver, SFBool4273);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_1.EventIsOver TO controller.ovJ_r_tarsometatarsal_1 }
{ Sample ts_r_tarsometatarsal_1.EventIsOver TO controller.ovJ_r_tarsometatarsal_1}
Group12.AddRoute(TouchSensor582.EventIsOver, SFBool4274);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_1.EventIsOver TO controller.ovJ_r_metatarsophalangeal_1 }
{ Sample ts_r_metatarsophalangeal_1.EventIsOver TO controller.ovJ_r_metatarsophalangeal_1}
Group12.AddRoute(TouchSensor597.EventIsOver, SFBool4275);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_interphalangeal_1.EventIsOver TO controller.ovJ_r_tarsal_interphalangeal_1 }
{ Sample ts_r_tarsal_interphalangeal_1.EventIsOver TO controller.ovJ_r_tarsal_interphalangeal_1}
Group12.AddRoute(TouchSensor613.EventIsOver, SFBool4276);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_cuneonavicular_2.EventIsOver TO controller.ovJ_r_cuneonavicular_2 }
{ Sample ts_r_cuneonavicular_2.EventIsOver TO controller.ovJ_r_cuneonavicular_2}
Group12.AddRoute(TouchSensor627.EventIsOver, SFBool4277);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_2.EventIsOver TO controller.ovJ_r_tarsometatarsal_2 }
{ Sample ts_r_tarsometatarsal_2.EventIsOver TO controller.ovJ_r_tarsometatarsal_2}
Group12.AddRoute(TouchSensor642.EventIsOver, SFBool4278);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_2.EventIsOver TO controller.ovJ_r_metatarsophalangeal_2 }
{ Sample ts_r_metatarsophalangeal_2.EventIsOver TO controller.ovJ_r_metatarsophalangeal_2}
Group12.AddRoute(TouchSensor657.EventIsOver, SFBool4279);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_2 }
{ Sample ts_r_tarsal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor672.EventIsOver, SFBool4280);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_2 }
{ Sample ts_r_tarsal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor688.EventIsOver, SFBool4281);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_cuneonavicular_3.EventIsOver TO controller.ovJ_r_cuneonavicular_3 }
{ Sample ts_r_cuneonavicular_3.EventIsOver TO controller.ovJ_r_cuneonavicular_3}
Group12.AddRoute(TouchSensor702.EventIsOver, SFBool4282);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_3.EventIsOver TO controller.ovJ_r_tarsometatarsal_3 }
{ Sample ts_r_tarsometatarsal_3.EventIsOver TO controller.ovJ_r_tarsometatarsal_3}
Group12.AddRoute(TouchSensor717.EventIsOver, SFBool4283);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_3.EventIsOver TO controller.ovJ_r_metatarsophalangeal_3 }
{ Sample ts_r_metatarsophalangeal_3.EventIsOver TO controller.ovJ_r_metatarsophalangeal_3}
Group12.AddRoute(TouchSensor732.EventIsOver, SFBool4284);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_3 }
{ Sample ts_r_tarsal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor747.EventIsOver, SFBool4285);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_3 }
{ Sample ts_r_tarsal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor763.EventIsOver, SFBool4286);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_calcaneocuboid.EventIsOver TO controller.ovJ_r_calcaneocuboid }
{ Sample ts_r_calcaneocuboid.EventIsOver TO controller.ovJ_r_calcaneocuboid}
Group12.AddRoute(TouchSensor777.EventIsOver, SFBool4287);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_transversetarsal.EventIsOver TO controller.ovJ_r_transversetarsal }
{ Sample ts_r_transversetarsal.EventIsOver TO controller.ovJ_r_transversetarsal}
Group12.AddRoute(TouchSensor792.EventIsOver, SFBool4288);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_4.EventIsOver TO controller.ovJ_r_tarsometatarsal_4 }
{ Sample ts_r_tarsometatarsal_4.EventIsOver TO controller.ovJ_r_tarsometatarsal_4}
Group12.AddRoute(TouchSensor811.EventIsOver, SFBool4289);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_4.EventIsOver TO controller.ovJ_r_metatarsophalangeal_4 }
{ Sample ts_r_metatarsophalangeal_4.EventIsOver TO controller.ovJ_r_metatarsophalangeal_4}
Group12.AddRoute(TouchSensor826.EventIsOver, SFBool4290);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_4 }
{ Sample ts_r_tarsal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor841.EventIsOver, SFBool4291);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_4 }
{ Sample ts_r_tarsal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor857.EventIsOver, SFBool4292);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsometatarsal_5.EventIsOver TO controller.ovJ_r_tarsometatarsal_5 }
{ Sample ts_r_tarsometatarsal_5.EventIsOver TO controller.ovJ_r_tarsometatarsal_5}
Group12.AddRoute(TouchSensor871.EventIsOver, SFBool4293);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metatarsophalangeal_5.EventIsOver TO controller.ovJ_r_metatarsophalangeal_5 }
{ Sample ts_r_metatarsophalangeal_5.EventIsOver TO controller.ovJ_r_metatarsophalangeal_5}
Group12.AddRoute(TouchSensor886.EventIsOver, SFBool4294);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_5 }
{ Sample ts_r_tarsal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_r_tarsal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor901.EventIsOver, SFBool4295);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_tarsal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_5 }
{ Sample ts_r_tarsal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_r_tarsal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor917.EventIsOver, SFBool4296);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl5.EventIsOver TO controller.ovJ_vl5 }
{ Sample ts_vl5.EventIsOver TO controller.ovJ_vl5}
Group12.AddRoute(TouchSensor931.EventIsOver, SFBool4297);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl4.EventIsOver TO controller.ovJ_vl4 }
{ Sample ts_vl4.EventIsOver TO controller.ovJ_vl4}
Group12.AddRoute(TouchSensor946.EventIsOver, SFBool4298);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl3.EventIsOver TO controller.ovJ_vl3 }
{ Sample ts_vl3.EventIsOver TO controller.ovJ_vl3}
Group12.AddRoute(TouchSensor961.EventIsOver, SFBool4299);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl2.EventIsOver TO controller.ovJ_vl2 }
{ Sample ts_vl2.EventIsOver TO controller.ovJ_vl2}
Group12.AddRoute(TouchSensor976.EventIsOver, SFBool4300);
{ METHOD .AddX3DROUTE }
{ Original "ts_vl1.EventIsOver TO controller.ovJ_vl1 }
{ Sample ts_vl1.EventIsOver TO controller.ovJ_vl1}
Group12.AddRoute(TouchSensor991.EventIsOver, SFBool4301);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt12.EventIsOver TO controller.ovJ_vt12 }
{ Sample ts_vt12.EventIsOver TO controller.ovJ_vt12}
Group12.AddRoute(TouchSensor1006.EventIsOver, SFBool4302);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt11.EventIsOver TO controller.ovJ_vt11 }
{ Sample ts_vt11.EventIsOver TO controller.ovJ_vt11}
Group12.AddRoute(TouchSensor1021.EventIsOver, SFBool4303);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt10.EventIsOver TO controller.ovJ_vt10 }
{ Sample ts_vt10.EventIsOver TO controller.ovJ_vt10}
Group12.AddRoute(TouchSensor1036.EventIsOver, SFBool4304);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt9.EventIsOver TO controller.ovJ_vt9 }
{ Sample ts_vt9.EventIsOver TO controller.ovJ_vt9}
Group12.AddRoute(TouchSensor1051.EventIsOver, SFBool4305);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt8.EventIsOver TO controller.ovJ_vt8 }
{ Sample ts_vt8.EventIsOver TO controller.ovJ_vt8}
Group12.AddRoute(TouchSensor1066.EventIsOver, SFBool4306);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt7.EventIsOver TO controller.ovJ_vt7 }
{ Sample ts_vt7.EventIsOver TO controller.ovJ_vt7}
Group12.AddRoute(TouchSensor1081.EventIsOver, SFBool4307);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt6.EventIsOver TO controller.ovJ_vt6 }
{ Sample ts_vt6.EventIsOver TO controller.ovJ_vt6}
Group12.AddRoute(TouchSensor1096.EventIsOver, SFBool4308);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt5.EventIsOver TO controller.ovJ_vt5 }
{ Sample ts_vt5.EventIsOver TO controller.ovJ_vt5}
Group12.AddRoute(TouchSensor1111.EventIsOver, SFBool4309);
end;

procedure InitHAnimGimbalJointController22Part258;
begin

{ METHOD .AddX3DROUTE }
{ Original "ts_vt4.EventIsOver TO controller.ovJ_vt4 }
{ Sample ts_vt4.EventIsOver TO controller.ovJ_vt4}
Group12.AddRoute(TouchSensor1126.EventIsOver, SFBool4310);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt3.EventIsOver TO controller.ovJ_vt3 }
{ Sample ts_vt3.EventIsOver TO controller.ovJ_vt3}
Group12.AddRoute(TouchSensor1141.EventIsOver, SFBool4311);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt2.EventIsOver TO controller.ovJ_vt2 }
{ Sample ts_vt2.EventIsOver TO controller.ovJ_vt2}
Group12.AddRoute(TouchSensor1156.EventIsOver, SFBool4312);
{ METHOD .AddX3DROUTE }
{ Original "ts_vt1.EventIsOver TO controller.ovJ_vt1 }
{ Sample ts_vt1.EventIsOver TO controller.ovJ_vt1}
Group12.AddRoute(TouchSensor1171.EventIsOver, SFBool4313);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc7.EventIsOver TO controller.ovJ_vc7 }
{ Sample ts_vc7.EventIsOver TO controller.ovJ_vc7}
Group12.AddRoute(TouchSensor1194.EventIsOver, SFBool4314);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc6.EventIsOver TO controller.ovJ_vc6 }
{ Sample ts_vc6.EventIsOver TO controller.ovJ_vc6}
Group12.AddRoute(TouchSensor1209.EventIsOver, SFBool4315);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc5.EventIsOver TO controller.ovJ_vc5 }
{ Sample ts_vc5.EventIsOver TO controller.ovJ_vc5}
Group12.AddRoute(TouchSensor1224.EventIsOver, SFBool4316);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc4.EventIsOver TO controller.ovJ_vc4 }
{ Sample ts_vc4.EventIsOver TO controller.ovJ_vc4}
Group12.AddRoute(TouchSensor1239.EventIsOver, SFBool4317);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc3.EventIsOver TO controller.ovJ_vc3 }
{ Sample ts_vc3.EventIsOver TO controller.ovJ_vc3}
Group12.AddRoute(TouchSensor1254.EventIsOver, SFBool4318);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc2.EventIsOver TO controller.ovJ_vc2 }
{ Sample ts_vc2.EventIsOver TO controller.ovJ_vc2}
Group12.AddRoute(TouchSensor1269.EventIsOver, SFBool4319);
{ METHOD .AddX3DROUTE }
{ Original "ts_vc1.EventIsOver TO controller.ovJ_vc1 }
{ Sample ts_vc1.EventIsOver TO controller.ovJ_vc1}
Group12.AddRoute(TouchSensor1284.EventIsOver, SFBool4320);
{ METHOD .AddX3DROUTE }
{ Original "ts_skullbase.EventIsOver TO controller.ovJ_skullbase }
{ Sample ts_skullbase.EventIsOver TO controller.ovJ_skullbase}
Group12.AddRoute(TouchSensor1299.EventIsOver, SFBool4321);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_eyelid_joint.EventIsOver TO controller.ovJ_l_eyelid_joint }
{ Sample ts_l_eyelid_joint.EventIsOver TO controller.ovJ_l_eyelid_joint}
Group12.AddRoute(TouchSensor1339.EventIsOver, SFBool4322);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_eyelid_joint.EventIsOver TO controller.ovJ_r_eyelid_joint }
{ Sample ts_r_eyelid_joint.EventIsOver TO controller.ovJ_r_eyelid_joint}
Group12.AddRoute(TouchSensor1354.EventIsOver, SFBool4323);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_eyeball_joint.EventIsOver TO controller.ovJ_l_eyeball_joint }
{ Sample ts_l_eyeball_joint.EventIsOver TO controller.ovJ_l_eyeball_joint}
Group12.AddRoute(TouchSensor1369.EventIsOver, SFBool4324);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_eyeball_joint.EventIsOver TO controller.ovJ_r_eyeball_joint }
{ Sample ts_r_eyeball_joint.EventIsOver TO controller.ovJ_r_eyeball_joint}
Group12.AddRoute(TouchSensor1384.EventIsOver, SFBool4325);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_eyebrow_joint.EventIsOver TO controller.ovJ_l_eyebrow_joint }
{ Sample ts_l_eyebrow_joint.EventIsOver TO controller.ovJ_l_eyebrow_joint}
Group12.AddRoute(TouchSensor1399.EventIsOver, SFBool4326);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_eyebrow_joint.EventIsOver TO controller.ovJ_r_eyebrow_joint }
{ Sample ts_r_eyebrow_joint.EventIsOver TO controller.ovJ_r_eyebrow_joint}
Group12.AddRoute(TouchSensor1414.EventIsOver, SFBool4327);
{ METHOD .AddX3DROUTE }
{ Original "ts_temporomandibular.EventIsOver TO controller.ovJ_temporomandibular }
{ Sample ts_temporomandibular.EventIsOver TO controller.ovJ_temporomandibular}
Group12.AddRoute(TouchSensor1429.EventIsOver, SFBool4328);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_sternoclavicular.EventIsOver TO controller.ovJ_l_sternoclavicular }
{ Sample ts_l_sternoclavicular.EventIsOver TO controller.ovJ_l_sternoclavicular}
Group12.AddRoute(TouchSensor1443.EventIsOver, SFBool4329);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_acromioclavicular.EventIsOver TO controller.ovJ_l_acromioclavicular }
{ Sample ts_l_acromioclavicular.EventIsOver TO controller.ovJ_l_acromioclavicular}
Group12.AddRoute(TouchSensor1458.EventIsOver, SFBool4330);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_shoulder.EventIsOver TO controller.ovJ_l_shoulder }
{ Sample ts_l_shoulder.EventIsOver TO controller.ovJ_l_shoulder}
Group12.AddRoute(TouchSensor1473.EventIsOver, SFBool4331);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_elbow.EventIsOver TO controller.ovJ_l_elbow }
{ Sample ts_l_elbow.EventIsOver TO controller.ovJ_l_elbow}
Group12.AddRoute(TouchSensor1488.EventIsOver, SFBool4332);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_radiocarpal.EventIsOver TO controller.ovJ_l_radiocarpal }
{ Sample ts_l_radiocarpal.EventIsOver TO controller.ovJ_l_radiocarpal}
Group12.AddRoute(TouchSensor1503.EventIsOver, SFBool4333);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_1.EventIsOver TO controller.ovJ_l_midcarpal_1 }
{ Sample ts_l_midcarpal_1.EventIsOver TO controller.ovJ_l_midcarpal_1}
Group12.AddRoute(TouchSensor1530.EventIsOver, SFBool4334);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_1.EventIsOver TO controller.ovJ_l_carpometacarpal_1 }
{ Sample ts_l_carpometacarpal_1.EventIsOver TO controller.ovJ_l_carpometacarpal_1}
Group12.AddRoute(TouchSensor1545.EventIsOver, SFBool4335);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_1.EventIsOver TO controller.ovJ_l_metacarpophalangeal_1 }
{ Sample ts_l_metacarpophalangeal_1.EventIsOver TO controller.ovJ_l_metacarpophalangeal_1}
Group12.AddRoute(TouchSensor1560.EventIsOver, SFBool4336);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_interphalangeal_1.EventIsOver TO controller.ovJ_l_carpal_interphalangeal_1 }
{ Sample ts_l_carpal_interphalangeal_1.EventIsOver TO controller.ovJ_l_carpal_interphalangeal_1}
Group12.AddRoute(TouchSensor1576.EventIsOver, SFBool4337);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_2.EventIsOver TO controller.ovJ_l_midcarpal_2 }
{ Sample ts_l_midcarpal_2.EventIsOver TO controller.ovJ_l_midcarpal_2}
Group12.AddRoute(TouchSensor1590.EventIsOver, SFBool4338);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_2.EventIsOver TO controller.ovJ_l_carpometacarpal_2 }
{ Sample ts_l_carpometacarpal_2.EventIsOver TO controller.ovJ_l_carpometacarpal_2}
Group12.AddRoute(TouchSensor1605.EventIsOver, SFBool4339);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_2.EventIsOver TO controller.ovJ_l_metacarpophalangeal_2 }
{ Sample ts_l_metacarpophalangeal_2.EventIsOver TO controller.ovJ_l_metacarpophalangeal_2}
Group12.AddRoute(TouchSensor1620.EventIsOver, SFBool4340);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_2 }
{ Sample ts_l_carpal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor1635.EventIsOver, SFBool4341);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_2 }
{ Sample ts_l_carpal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor1651.EventIsOver, SFBool4342);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_3.EventIsOver TO controller.ovJ_l_midcarpal_3 }
{ Sample ts_l_midcarpal_3.EventIsOver TO controller.ovJ_l_midcarpal_3}
Group12.AddRoute(TouchSensor1665.EventIsOver, SFBool4343);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_3.EventIsOver TO controller.ovJ_l_carpometacarpal_3 }
{ Sample ts_l_carpometacarpal_3.EventIsOver TO controller.ovJ_l_carpometacarpal_3}
Group12.AddRoute(TouchSensor1680.EventIsOver, SFBool4344);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_3.EventIsOver TO controller.ovJ_l_metacarpophalangeal_3 }
{ Sample ts_l_metacarpophalangeal_3.EventIsOver TO controller.ovJ_l_metacarpophalangeal_3}
Group12.AddRoute(TouchSensor1695.EventIsOver, SFBool4345);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_3 }
{ Sample ts_l_carpal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor1710.EventIsOver, SFBool4346);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_3 }
{ Sample ts_l_carpal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor1726.EventIsOver, SFBool4347);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_midcarpal_4_5.EventIsOver TO controller.ovJ_l_midcarpal_4_5 }
{ Sample ts_l_midcarpal_4_5.EventIsOver TO controller.ovJ_l_midcarpal_4_5}
Group12.AddRoute(TouchSensor1740.EventIsOver, SFBool4348);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_4.EventIsOver TO controller.ovJ_l_carpometacarpal_4 }
{ Sample ts_l_carpometacarpal_4.EventIsOver TO controller.ovJ_l_carpometacarpal_4}
Group12.AddRoute(TouchSensor1759.EventIsOver, SFBool4349);
end;

procedure InitHAnimGimbalJointController22Part259;
begin

{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_4.EventIsOver TO controller.ovJ_l_metacarpophalangeal_4 }
{ Sample ts_l_metacarpophalangeal_4.EventIsOver TO controller.ovJ_l_metacarpophalangeal_4}
Group12.AddRoute(TouchSensor1774.EventIsOver, SFBool4350);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_4 }
{ Sample ts_l_carpal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor1789.EventIsOver, SFBool4351);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_4 }
{ Sample ts_l_carpal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor1805.EventIsOver, SFBool4352);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpometacarpal_5.EventIsOver TO controller.ovJ_l_carpometacarpal_5 }
{ Sample ts_l_carpometacarpal_5.EventIsOver TO controller.ovJ_l_carpometacarpal_5}
Group12.AddRoute(TouchSensor1819.EventIsOver, SFBool4353);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_metacarpophalangeal_5.EventIsOver TO controller.ovJ_l_metacarpophalangeal_5 }
{ Sample ts_l_metacarpophalangeal_5.EventIsOver TO controller.ovJ_l_metacarpophalangeal_5}
Group12.AddRoute(TouchSensor1834.EventIsOver, SFBool4354);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_5 }
{ Sample ts_l_carpal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_l_carpal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor1849.EventIsOver, SFBool4355);
{ METHOD .AddX3DROUTE }
{ Original "ts_l_carpal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_5 }
{ Sample ts_l_carpal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_l_carpal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor1865.EventIsOver, SFBool4356);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_sternoclavicular.EventIsOver TO controller.ovJ_r_sternoclavicular }
{ Sample ts_r_sternoclavicular.EventIsOver TO controller.ovJ_r_sternoclavicular}
Group12.AddRoute(TouchSensor1879.EventIsOver, SFBool4357);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_acromioclavicular.EventIsOver TO controller.ovJ_r_acromioclavicular }
{ Sample ts_r_acromioclavicular.EventIsOver TO controller.ovJ_r_acromioclavicular}
Group12.AddRoute(TouchSensor1894.EventIsOver, SFBool4358);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_shoulder.EventIsOver TO controller.ovJ_r_shoulder }
{ Sample ts_r_shoulder.EventIsOver TO controller.ovJ_r_shoulder}
Group12.AddRoute(TouchSensor1909.EventIsOver, SFBool4359);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_elbow.EventIsOver TO controller.ovJ_r_elbow }
{ Sample ts_r_elbow.EventIsOver TO controller.ovJ_r_elbow}
Group12.AddRoute(TouchSensor1924.EventIsOver, SFBool4360);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_radiocarpal.EventIsOver TO controller.ovJ_r_radiocarpal }
{ Sample ts_r_radiocarpal.EventIsOver TO controller.ovJ_r_radiocarpal}
Group12.AddRoute(TouchSensor1939.EventIsOver, SFBool4361);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_1.EventIsOver TO controller.ovJ_r_midcarpal_1 }
{ Sample ts_r_midcarpal_1.EventIsOver TO controller.ovJ_r_midcarpal_1}
Group12.AddRoute(TouchSensor1966.EventIsOver, SFBool4362);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_1.EventIsOver TO controller.ovJ_r_carpometacarpal_1 }
{ Sample ts_r_carpometacarpal_1.EventIsOver TO controller.ovJ_r_carpometacarpal_1}
Group12.AddRoute(TouchSensor1981.EventIsOver, SFBool4363);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_1.EventIsOver TO controller.ovJ_r_metacarpophalangeal_1 }
{ Sample ts_r_metacarpophalangeal_1.EventIsOver TO controller.ovJ_r_metacarpophalangeal_1}
Group12.AddRoute(TouchSensor1996.EventIsOver, SFBool4364);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_interphalangeal_1.EventIsOver TO controller.ovJ_r_carpal_interphalangeal_1 }
{ Sample ts_r_carpal_interphalangeal_1.EventIsOver TO controller.ovJ_r_carpal_interphalangeal_1}
Group12.AddRoute(TouchSensor2012.EventIsOver, SFBool4365);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_2.EventIsOver TO controller.ovJ_r_midcarpal_2 }
{ Sample ts_r_midcarpal_2.EventIsOver TO controller.ovJ_r_midcarpal_2}
Group12.AddRoute(TouchSensor2026.EventIsOver, SFBool4366);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_2.EventIsOver TO controller.ovJ_r_carpometacarpal_2 }
{ Sample ts_r_carpometacarpal_2.EventIsOver TO controller.ovJ_r_carpometacarpal_2}
Group12.AddRoute(TouchSensor2041.EventIsOver, SFBool4367);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_2.EventIsOver TO controller.ovJ_r_metacarpophalangeal_2 }
{ Sample ts_r_metacarpophalangeal_2.EventIsOver TO controller.ovJ_r_metacarpophalangeal_2}
Group12.AddRoute(TouchSensor2056.EventIsOver, SFBool4368);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_2 }
{ Sample ts_r_carpal_proximal_interphalangeal_2.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_2}
Group12.AddRoute(TouchSensor2071.EventIsOver, SFBool4369);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_2 }
{ Sample ts_r_carpal_distal_interphalangeal_2.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_2}
Group12.AddRoute(TouchSensor2087.EventIsOver, SFBool4370);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_3.EventIsOver TO controller.ovJ_r_midcarpal_3 }
{ Sample ts_r_midcarpal_3.EventIsOver TO controller.ovJ_r_midcarpal_3}
Group12.AddRoute(TouchSensor2101.EventIsOver, SFBool4371);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_3.EventIsOver TO controller.ovJ_r_carpometacarpal_3 }
{ Sample ts_r_carpometacarpal_3.EventIsOver TO controller.ovJ_r_carpometacarpal_3}
Group12.AddRoute(TouchSensor2116.EventIsOver, SFBool4372);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_3.EventIsOver TO controller.ovJ_r_metacarpophalangeal_3 }
{ Sample ts_r_metacarpophalangeal_3.EventIsOver TO controller.ovJ_r_metacarpophalangeal_3}
Group12.AddRoute(TouchSensor2131.EventIsOver, SFBool4373);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_3 }
{ Sample ts_r_carpal_proximal_interphalangeal_3.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_3}
Group12.AddRoute(TouchSensor2146.EventIsOver, SFBool4374);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_3 }
{ Sample ts_r_carpal_distal_interphalangeal_3.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_3}
Group12.AddRoute(TouchSensor2162.EventIsOver, SFBool4375);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_midcarpal_4_5.EventIsOver TO controller.ovJ_r_midcarpal_4_5 }
{ Sample ts_r_midcarpal_4_5.EventIsOver TO controller.ovJ_r_midcarpal_4_5}
Group12.AddRoute(TouchSensor2176.EventIsOver, SFBool4376);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_4.EventIsOver TO controller.ovJ_r_carpometacarpal_4 }
{ Sample ts_r_carpometacarpal_4.EventIsOver TO controller.ovJ_r_carpometacarpal_4}
Group12.AddRoute(TouchSensor2195.EventIsOver, SFBool4377);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_4.EventIsOver TO controller.ovJ_r_metacarpophalangeal_4 }
{ Sample ts_r_metacarpophalangeal_4.EventIsOver TO controller.ovJ_r_metacarpophalangeal_4}
Group12.AddRoute(TouchSensor2210.EventIsOver, SFBool4378);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_4 }
{ Sample ts_r_carpal_proximal_interphalangeal_4.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_4}
Group12.AddRoute(TouchSensor2225.EventIsOver, SFBool4379);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_4 }
{ Sample ts_r_carpal_distal_interphalangeal_4.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_4}
Group12.AddRoute(TouchSensor2241.EventIsOver, SFBool4380);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpometacarpal_5.EventIsOver TO controller.ovJ_r_carpometacarpal_5 }
{ Sample ts_r_carpometacarpal_5.EventIsOver TO controller.ovJ_r_carpometacarpal_5}
Group12.AddRoute(TouchSensor2255.EventIsOver, SFBool4381);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_metacarpophalangeal_5.EventIsOver TO controller.ovJ_r_metacarpophalangeal_5 }
{ Sample ts_r_metacarpophalangeal_5.EventIsOver TO controller.ovJ_r_metacarpophalangeal_5}
Group12.AddRoute(TouchSensor2270.EventIsOver, SFBool4382);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_5 }
{ Sample ts_r_carpal_proximal_interphalangeal_5.EventIsOver TO controller.ovJ_r_carpal_proximal_interphalangeal_5}
Group12.AddRoute(TouchSensor2285.EventIsOver, SFBool4383);
{ METHOD .AddX3DROUTE }
{ Original "ts_r_carpal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_5 }
{ Sample ts_r_carpal_distal_interphalangeal_5.EventIsOver TO controller.ovJ_r_carpal_distal_interphalangeal_5}
Group12.AddRoute(TouchSensor2301.EventIsOver, SFBool4384);
{ METHOD .AddX3DROUTE }
{ Original "tsPrev.EventIsOver TO controller.ovB0 }
{ Sample tsPrev.EventIsOver TO controller.ovB0}
Group12.AddRoute(TouchSensor2658.EventIsOver, SFBool4385);
{ METHOD .AddX3DROUTE }
{ Original "tsNext.EventIsOver TO controller.ovB1 }
{ Sample tsNext.EventIsOver TO controller.ovB1}
Group12.AddRoute(TouchSensor2671.EventIsOver, SFBool4386);
{ METHOD .AddX3DROUTE }
{ Original "tsUp.EventIsOver TO controller.ovB2 }
{ Sample tsUp.EventIsOver TO controller.ovB2}
Group12.AddRoute(TouchSensor2684.EventIsOver, SFBool4387);
{ METHOD .AddX3DROUTE }
{ Original "tsDown.EventIsOver TO controller.ovB3 }
{ Sample tsDown.EventIsOver TO controller.ovB3}
Group12.AddRoute(TouchSensor2697.EventIsOver, SFBool4388);
{ METHOD .AddX3DROUTE }
{ Original "tsSibPrev.EventIsOver TO controller.ovB4 }
{ Sample tsSibPrev.EventIsOver TO controller.ovB4}
Group12.AddRoute(TouchSensor2710.EventIsOver, SFBool4389);
end;

procedure InitHAnimGimbalJointController22Part260;
begin

{ METHOD .AddX3DROUTE }
{ Original "tsSibNext.EventIsOver TO controller.ovB5 }
{ Sample tsSibNext.EventIsOver TO controller.ovB5}
Group12.AddRoute(TouchSensor2723.EventIsOver, SFBool4390);
{ METHOD .AddX3DROUTE }
{ Original "tsReset.EventIsOver TO controller.ovB6 }
{ Sample tsReset.EventIsOver TO controller.ovB6}
Group12.AddRoute(TouchSensor2736.EventIsOver, SFBool4391);
{ METHOD .AddX3DROUTE }
{ Original "tsDeselect.EventIsOver TO controller.ovB7 }
{ Sample tsDeselect.EventIsOver TO controller.ovB7}
Group12.AddRoute(TouchSensor2749.EventIsOver, SFBool4392);
{ METHOD .AddX3DROUTE }
{ Original "tsExport.EventIsOver TO controller.ovB8 }
{ Sample tsExport.EventIsOver TO controller.ovB8}
Group12.AddRoute(TouchSensor2763.EventIsOver, SFBool4393);
{ METHOD .AddX3DROUTE }
{ Original "tsImport.EventIsOver TO controller.ovB9 }
{ Sample tsImport.EventIsOver TO controller.ovB9}
Group12.AddRoute(TouchSensor2776.EventIsOver, SFBool4394);
{ METHOD .AddX3DROUTE }
{ Original "tsTReset.EventIsOver TO controller.ovB10 }
{ Sample tsTReset.EventIsOver TO controller.ovB10}
Group12.AddRoute(TouchSensor3175.EventIsOver, SFBool4395);
{ METHOD .AddX3DROUTE }
{ Original "psX.EventIsOver TO controller.ovSl0 }
{ Sample psX.EventIsOver TO controller.ovSl0}
Group12.AddRoute(PlaneSensor2829.EventIsOver, SFBool4396);
{ METHOD .AddX3DROUTE }
{ Original "psX.EventIsActive TO controller.acSl0 }
{ Sample psX.EventIsActive TO controller.acSl0}
Group12.AddRoute(PlaneSensor2829.EventIsActive, SFBool4401);
{ METHOD .AddX3DROUTE }
{ Original "psTX.EventIsOver TO controller.ovTSl0 }
{ Sample psTX.EventIsOver TO controller.ovTSl0}
Group12.AddRoute(PlaneSensor3025.EventIsOver, SFBool4397);
{ METHOD .AddX3DROUTE }
{ Original "psTX.EventIsActive TO controller.acTSl0 }
{ Sample psTX.EventIsActive TO controller.acTSl0}
Group12.AddRoute(PlaneSensor3025.EventIsActive, SFBool4402);
{ METHOD .AddX3DROUTE }
{ Original "csGX.EventIsOver TO controller.ovRg0 }
{ Sample csGX.EventIsOver TO controller.ovRg0}
Group12.AddRoute(CylinderSensor2609.EventIsOver, SFBool4398);
{ METHOD .AddX3DROUTE }
{ Original "csGX.EventIsActive TO controller.acRg0 }
{ Sample csGX.EventIsActive TO controller.acRg0}
Group12.AddRoute(CylinderSensor2609.EventIsActive, SFBool4403);
{ METHOD .AddX3DROUTE }
{ Original "tsInX.EventIsOver TO controller.ovIn0 }
{ Sample tsInX.EventIsOver TO controller.ovIn0}
Group12.AddRoute(TouchSensor2849.EventIsOver, SFBool4399);
{ METHOD .AddX3DROUTE }
{ Original "tsTInX.EventIsOver TO controller.ovTIn0 }
{ Sample tsTInX.EventIsOver TO controller.ovTIn0}
Group12.AddRoute(TouchSensor3045.EventIsOver, SFBool4400);
{ METHOD .AddX3DROUTE }
{ Original "psY.EventIsOver TO controller.ovSl1 }
{ Sample psY.EventIsOver TO controller.ovSl1}
Group12.AddRoute(PlaneSensor2883.EventIsOver, SFBool4404);
{ METHOD .AddX3DROUTE }
{ Original "psY.EventIsActive TO controller.acSl1 }
{ Sample psY.EventIsActive TO controller.acSl1}
Group12.AddRoute(PlaneSensor2883.EventIsActive, SFBool4409);
{ METHOD .AddX3DROUTE }
{ Original "psTY.EventIsOver TO controller.ovTSl1 }
{ Sample psTY.EventIsOver TO controller.ovTSl1}
Group12.AddRoute(PlaneSensor3084.EventIsOver, SFBool4405);
{ METHOD .AddX3DROUTE }
{ Original "psTY.EventIsActive TO controller.acTSl1 }
{ Sample psTY.EventIsActive TO controller.acTSl1}
Group12.AddRoute(PlaneSensor3084.EventIsActive, SFBool4410);
{ METHOD .AddX3DROUTE }
{ Original "csGY.EventIsOver TO controller.ovRg1 }
{ Sample csGY.EventIsOver TO controller.ovRg1}
Group12.AddRoute(CylinderSensor2617.EventIsOver, SFBool4406);
{ METHOD .AddX3DROUTE }
{ Original "csGY.EventIsActive TO controller.acRg1 }
{ Sample csGY.EventIsActive TO controller.acRg1}
Group12.AddRoute(CylinderSensor2617.EventIsActive, SFBool4411);
{ METHOD .AddX3DROUTE }
{ Original "tsInY.EventIsOver TO controller.ovIn1 }
{ Sample tsInY.EventIsOver TO controller.ovIn1}
Group12.AddRoute(TouchSensor2903.EventIsOver, SFBool4407);
{ METHOD .AddX3DROUTE }
{ Original "tsTInY.EventIsOver TO controller.ovTIn1 }
{ Sample tsTInY.EventIsOver TO controller.ovTIn1}
Group12.AddRoute(TouchSensor3104.EventIsOver, SFBool4408);
{ METHOD .AddX3DROUTE }
{ Original "psZ.EventIsOver TO controller.ovSl2 }
{ Sample psZ.EventIsOver TO controller.ovSl2}
Group12.AddRoute(PlaneSensor2937.EventIsOver, SFBool4412);
{ METHOD .AddX3DROUTE }
{ Original "psZ.EventIsActive TO controller.acSl2 }
{ Sample psZ.EventIsActive TO controller.acSl2}
Group12.AddRoute(PlaneSensor2937.EventIsActive, SFBool4417);
{ METHOD .AddX3DROUTE }
{ Original "psTZ.EventIsOver TO controller.ovTSl2 }
{ Sample psTZ.EventIsOver TO controller.ovTSl2}
Group12.AddRoute(PlaneSensor3143.EventIsOver, SFBool4413);
{ METHOD .AddX3DROUTE }
{ Original "psTZ.EventIsActive TO controller.acTSl2 }
{ Sample psTZ.EventIsActive TO controller.acTSl2}
Group12.AddRoute(PlaneSensor3143.EventIsActive, SFBool4418);
{ METHOD .AddX3DROUTE }
{ Original "csGZ.EventIsOver TO controller.ovRg2 }
{ Sample csGZ.EventIsOver TO controller.ovRg2}
Group12.AddRoute(CylinderSensor2625.EventIsOver, SFBool4414);
{ METHOD .AddX3DROUTE }
{ Original "csGZ.EventIsActive TO controller.acRg2 }
{ Sample csGZ.EventIsActive TO controller.acRg2}
Group12.AddRoute(CylinderSensor2625.EventIsActive, SFBool4419);
{ METHOD .AddX3DROUTE }
{ Original "tsInZ.EventIsOver TO controller.ovIn2 }
{ Sample tsInZ.EventIsOver TO controller.ovIn2}
Group12.AddRoute(TouchSensor2957.EventIsOver, SFBool4415);
{ METHOD .AddX3DROUTE }
{ Original "tsTInZ.EventIsOver TO controller.ovTIn2 }
{ Sample tsTInZ.EventIsOver TO controller.ovTIn2}
Group12.AddRoute(TouchSensor3163.EventIsOver, SFBool4416);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group12]);
end;

function CreateHAnimGimbalJointController22: TX3DRootNode;
begin
InitHAnimGimbalJointController22Part0;
InitHAnimGimbalJointController22Part1;
InitHAnimGimbalJointController22Part2;
InitHAnimGimbalJointController22Part3;
InitHAnimGimbalJointController22Part4;
InitHAnimGimbalJointController22Part5;
InitHAnimGimbalJointController22Part6;
InitHAnimGimbalJointController22Part7;
InitHAnimGimbalJointController22Part8;
InitHAnimGimbalJointController22Part9;
InitHAnimGimbalJointController22Part10;
InitHAnimGimbalJointController22Part11;
InitHAnimGimbalJointController22Part12;
InitHAnimGimbalJointController22Part13;
InitHAnimGimbalJointController22Part14;
InitHAnimGimbalJointController22Part15;
InitHAnimGimbalJointController22Part16;
InitHAnimGimbalJointController22Part17;
InitHAnimGimbalJointController22Part18;
InitHAnimGimbalJointController22Part19;
InitHAnimGimbalJointController22Part20;
InitHAnimGimbalJointController22Part21;
InitHAnimGimbalJointController22Part22;
InitHAnimGimbalJointController22Part23;
InitHAnimGimbalJointController22Part24;
InitHAnimGimbalJointController22Part25;
InitHAnimGimbalJointController22Part26;
InitHAnimGimbalJointController22Part27;
InitHAnimGimbalJointController22Part28;
InitHAnimGimbalJointController22Part29;
InitHAnimGimbalJointController22Part30;
InitHAnimGimbalJointController22Part31;
InitHAnimGimbalJointController22Part32;
InitHAnimGimbalJointController22Part33;
InitHAnimGimbalJointController22Part34;
InitHAnimGimbalJointController22Part35;
InitHAnimGimbalJointController22Part36;
InitHAnimGimbalJointController22Part37;
InitHAnimGimbalJointController22Part38;
InitHAnimGimbalJointController22Part39;
InitHAnimGimbalJointController22Part40;
InitHAnimGimbalJointController22Part41;
InitHAnimGimbalJointController22Part42;
InitHAnimGimbalJointController22Part43;
InitHAnimGimbalJointController22Part44;
InitHAnimGimbalJointController22Part45;
InitHAnimGimbalJointController22Part46;
InitHAnimGimbalJointController22Part47;
InitHAnimGimbalJointController22Part48;
InitHAnimGimbalJointController22Part49;
InitHAnimGimbalJointController22Part50;
InitHAnimGimbalJointController22Part51;
InitHAnimGimbalJointController22Part52;
InitHAnimGimbalJointController22Part53;
InitHAnimGimbalJointController22Part54;
InitHAnimGimbalJointController22Part55;
InitHAnimGimbalJointController22Part56;
InitHAnimGimbalJointController22Part57;
InitHAnimGimbalJointController22Part58;
InitHAnimGimbalJointController22Part59;
InitHAnimGimbalJointController22Part60;
InitHAnimGimbalJointController22Part61;
InitHAnimGimbalJointController22Part62;
InitHAnimGimbalJointController22Part63;
InitHAnimGimbalJointController22Part64;
InitHAnimGimbalJointController22Part65;
InitHAnimGimbalJointController22Part66;
InitHAnimGimbalJointController22Part67;
InitHAnimGimbalJointController22Part68;
InitHAnimGimbalJointController22Part69;
InitHAnimGimbalJointController22Part70;
InitHAnimGimbalJointController22Part71;
InitHAnimGimbalJointController22Part72;
InitHAnimGimbalJointController22Part73;
InitHAnimGimbalJointController22Part74;
InitHAnimGimbalJointController22Part75;
InitHAnimGimbalJointController22Part76;
InitHAnimGimbalJointController22Part77;
InitHAnimGimbalJointController22Part78;
InitHAnimGimbalJointController22Part79;
InitHAnimGimbalJointController22Part80;
InitHAnimGimbalJointController22Part81;
InitHAnimGimbalJointController22Part82;
InitHAnimGimbalJointController22Part83;
InitHAnimGimbalJointController22Part84;
InitHAnimGimbalJointController22Part85;
InitHAnimGimbalJointController22Part86;
InitHAnimGimbalJointController22Part87;
InitHAnimGimbalJointController22Part88;
InitHAnimGimbalJointController22Part89;
InitHAnimGimbalJointController22Part90;
InitHAnimGimbalJointController22Part91;
InitHAnimGimbalJointController22Part92;
InitHAnimGimbalJointController22Part93;
InitHAnimGimbalJointController22Part94;
InitHAnimGimbalJointController22Part95;
InitHAnimGimbalJointController22Part96;
InitHAnimGimbalJointController22Part97;
InitHAnimGimbalJointController22Part98;
InitHAnimGimbalJointController22Part99;
InitHAnimGimbalJointController22Part100;
InitHAnimGimbalJointController22Part101;
InitHAnimGimbalJointController22Part102;
InitHAnimGimbalJointController22Part103;
InitHAnimGimbalJointController22Part104;
InitHAnimGimbalJointController22Part105;
InitHAnimGimbalJointController22Part106;
InitHAnimGimbalJointController22Part107;
InitHAnimGimbalJointController22Part108;
InitHAnimGimbalJointController22Part109;
InitHAnimGimbalJointController22Part110;
InitHAnimGimbalJointController22Part111;
InitHAnimGimbalJointController22Part112;
InitHAnimGimbalJointController22Part113;
InitHAnimGimbalJointController22Part114;
InitHAnimGimbalJointController22Part115;
InitHAnimGimbalJointController22Part116;
InitHAnimGimbalJointController22Part117;
InitHAnimGimbalJointController22Part118;
InitHAnimGimbalJointController22Part119;
InitHAnimGimbalJointController22Part120;
InitHAnimGimbalJointController22Part121;
InitHAnimGimbalJointController22Part122;
InitHAnimGimbalJointController22Part123;
InitHAnimGimbalJointController22Part124;
InitHAnimGimbalJointController22Part125;
InitHAnimGimbalJointController22Part126;
InitHAnimGimbalJointController22Part127;
InitHAnimGimbalJointController22Part128;
InitHAnimGimbalJointController22Part129;
InitHAnimGimbalJointController22Part130;
InitHAnimGimbalJointController22Part131;
InitHAnimGimbalJointController22Part132;
InitHAnimGimbalJointController22Part133;
InitHAnimGimbalJointController22Part134;
InitHAnimGimbalJointController22Part135;
InitHAnimGimbalJointController22Part136;
InitHAnimGimbalJointController22Part137;
InitHAnimGimbalJointController22Part138;
InitHAnimGimbalJointController22Part139;
InitHAnimGimbalJointController22Part140;
InitHAnimGimbalJointController22Part141;
InitHAnimGimbalJointController22Part142;
InitHAnimGimbalJointController22Part143;
InitHAnimGimbalJointController22Part144;
InitHAnimGimbalJointController22Part145;
InitHAnimGimbalJointController22Part146;
InitHAnimGimbalJointController22Part147;
InitHAnimGimbalJointController22Part148;
InitHAnimGimbalJointController22Part149;
InitHAnimGimbalJointController22Part150;
InitHAnimGimbalJointController22Part151;
InitHAnimGimbalJointController22Part152;
InitHAnimGimbalJointController22Part153;
InitHAnimGimbalJointController22Part154;
InitHAnimGimbalJointController22Part155;
InitHAnimGimbalJointController22Part156;
InitHAnimGimbalJointController22Part157;
InitHAnimGimbalJointController22Part158;
InitHAnimGimbalJointController22Part159;
InitHAnimGimbalJointController22Part160;
InitHAnimGimbalJointController22Part161;
InitHAnimGimbalJointController22Part162;
InitHAnimGimbalJointController22Part163;
InitHAnimGimbalJointController22Part164;
InitHAnimGimbalJointController22Part165;
InitHAnimGimbalJointController22Part166;
InitHAnimGimbalJointController22Part167;
InitHAnimGimbalJointController22Part168;
InitHAnimGimbalJointController22Part169;
InitHAnimGimbalJointController22Part170;
InitHAnimGimbalJointController22Part171;
InitHAnimGimbalJointController22Part172;
InitHAnimGimbalJointController22Part173;
InitHAnimGimbalJointController22Part174;
InitHAnimGimbalJointController22Part175;
InitHAnimGimbalJointController22Part176;
InitHAnimGimbalJointController22Part177;
InitHAnimGimbalJointController22Part178;
InitHAnimGimbalJointController22Part179;
InitHAnimGimbalJointController22Part180;
InitHAnimGimbalJointController22Part181;
InitHAnimGimbalJointController22Part182;
InitHAnimGimbalJointController22Part183;
InitHAnimGimbalJointController22Part184;
InitHAnimGimbalJointController22Part185;
InitHAnimGimbalJointController22Part186;
InitHAnimGimbalJointController22Part187;
InitHAnimGimbalJointController22Part188;
InitHAnimGimbalJointController22Part189;
InitHAnimGimbalJointController22Part190;
InitHAnimGimbalJointController22Part191;
InitHAnimGimbalJointController22Part192;
InitHAnimGimbalJointController22Part193;
InitHAnimGimbalJointController22Part194;
InitHAnimGimbalJointController22Part195;
InitHAnimGimbalJointController22Part196;
InitHAnimGimbalJointController22Part197;
InitHAnimGimbalJointController22Part198;
InitHAnimGimbalJointController22Part199;
InitHAnimGimbalJointController22Part200;
InitHAnimGimbalJointController22Part201;
InitHAnimGimbalJointController22Part202;
InitHAnimGimbalJointController22Part203;
InitHAnimGimbalJointController22Part204;
InitHAnimGimbalJointController22Part205;
InitHAnimGimbalJointController22Part206;
InitHAnimGimbalJointController22Part207;
InitHAnimGimbalJointController22Part208;
InitHAnimGimbalJointController22Part209;
InitHAnimGimbalJointController22Part210;
InitHAnimGimbalJointController22Part211;
InitHAnimGimbalJointController22Part212;
InitHAnimGimbalJointController22Part213;
InitHAnimGimbalJointController22Part214;
InitHAnimGimbalJointController22Part215;
InitHAnimGimbalJointController22Part216;
InitHAnimGimbalJointController22Part217;
InitHAnimGimbalJointController22Part218;
InitHAnimGimbalJointController22Part219;
InitHAnimGimbalJointController22Part220;
InitHAnimGimbalJointController22Part221;
InitHAnimGimbalJointController22Part222;
InitHAnimGimbalJointController22Part223;
InitHAnimGimbalJointController22Part224;
InitHAnimGimbalJointController22Part225;
InitHAnimGimbalJointController22Part226;
InitHAnimGimbalJointController22Part227;
InitHAnimGimbalJointController22Part228;
InitHAnimGimbalJointController22Part229;
InitHAnimGimbalJointController22Part230;
InitHAnimGimbalJointController22Part231;
InitHAnimGimbalJointController22Part232;
InitHAnimGimbalJointController22Part233;
InitHAnimGimbalJointController22Part234;
InitHAnimGimbalJointController22Part235;
InitHAnimGimbalJointController22Part236;
InitHAnimGimbalJointController22Part237;
InitHAnimGimbalJointController22Part238;
InitHAnimGimbalJointController22Part239;
InitHAnimGimbalJointController22Part240;
InitHAnimGimbalJointController22Part241;
InitHAnimGimbalJointController22Part242;
InitHAnimGimbalJointController22Part243;
InitHAnimGimbalJointController22Part244;
InitHAnimGimbalJointController22Part245;
InitHAnimGimbalJointController22Part246;
InitHAnimGimbalJointController22Part247;
InitHAnimGimbalJointController22Part248;
InitHAnimGimbalJointController22Part249;
InitHAnimGimbalJointController22Part250;
InitHAnimGimbalJointController22Part251;
InitHAnimGimbalJointController22Part252;
InitHAnimGimbalJointController22Part253;
InitHAnimGimbalJointController22Part254;
InitHAnimGimbalJointController22Part255;
InitHAnimGimbalJointController22Part256;
InitHAnimGimbalJointController22Part257;
InitHAnimGimbalJointController22Part258;
InitHAnimGimbalJointController22Part259;
InitHAnimGimbalJointController22Part260;
Result := X3D0;
end;

begin
end.
