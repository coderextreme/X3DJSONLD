unit blenderSkeleton;

interface

uses X3DNodes;

function CreateblenderSkeleton: TX3DRootNode;

implementation

uses CastleVectors;

function CreateblenderSkeleton: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group8: TGroupNode;
NavigationInfo9: TNavigationInfoNode;
Background10: TBackgroundNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Box13: TBoxNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
Transform16: TTransformNode;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Transform21: TTransformNode;
PointLight22: TPointLightNode;
Transform23: TTransformNode;
Viewpoint24: TViewpointNode;
Transform25: TTransformNode;
HAnimHumanoid26: THAnimHumanoidNode;
HAnimJoint27: THAnimJointNode;
HAnimSegment28: THAnimSegmentNode;
TouchSensor29: TTouchSensorNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
HAnimSite32: THAnimSiteNode;
Transform33: TTransformNode;
Shape34: TShapeNode;
HAnimJoint35: THAnimJointNode;
HAnimSegment36: THAnimSegmentNode;
TouchSensor37: TTouchSensorNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
HAnimSite40: THAnimSiteNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
HAnimJoint43: THAnimJointNode;
HAnimSegment44: THAnimSegmentNode;
TouchSensor45: TTouchSensorNode;
Transform46: TTransformNode;
Shape47: TShapeNode;
HAnimSite48: THAnimSiteNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
HAnimJoint51: THAnimJointNode;
HAnimSegment52: THAnimSegmentNode;
TouchSensor53: TTouchSensorNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
HAnimSite56: THAnimSiteNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
HAnimJoint59: THAnimJointNode;
HAnimSegment60: THAnimSegmentNode;
TouchSensor61: TTouchSensorNode;
Transform62: TTransformNode;
Shape63: TShapeNode;
HAnimSite64: THAnimSiteNode;
Transform65: TTransformNode;
Shape66: TShapeNode;
HAnimJoint67: THAnimJointNode;
HAnimSegment68: THAnimSegmentNode;
TouchSensor69: TTouchSensorNode;
Transform70: TTransformNode;
Shape71: TShapeNode;
HAnimSite72: THAnimSiteNode;
Transform73: TTransformNode;
Shape74: TShapeNode;
HAnimJoint75: THAnimJointNode;
HAnimSegment76: THAnimSegmentNode;
TouchSensor77: TTouchSensorNode;
Transform78: TTransformNode;
Shape79: TShapeNode;
HAnimSite80: THAnimSiteNode;
Transform81: TTransformNode;
Shape82: TShapeNode;
HAnimJoint83: THAnimJointNode;
HAnimSegment84: THAnimSegmentNode;
TouchSensor85: TTouchSensorNode;
Transform86: TTransformNode;
Shape87: TShapeNode;
HAnimSite88: THAnimSiteNode;
Transform89: TTransformNode;
Shape90: TShapeNode;
HAnimJoint91: THAnimJointNode;
HAnimSegment92: THAnimSegmentNode;
TouchSensor93: TTouchSensorNode;
Transform94: TTransformNode;
Shape95: TShapeNode;
HAnimSite96: THAnimSiteNode;
Transform97: TTransformNode;
Shape98: TShapeNode;
HAnimJoint99: THAnimJointNode;
HAnimSegment100: THAnimSegmentNode;
TouchSensor101: TTouchSensorNode;
Transform102: TTransformNode;
Shape103: TShapeNode;
HAnimSite104: THAnimSiteNode;
Transform105: TTransformNode;
Shape106: TShapeNode;
HAnimJoint107: THAnimJointNode;
HAnimSegment108: THAnimSegmentNode;
TouchSensor109: TTouchSensorNode;
Transform110: TTransformNode;
Shape111: TShapeNode;
HAnimSite112: THAnimSiteNode;
Transform113: TTransformNode;
Shape114: TShapeNode;
HAnimJoint115: THAnimJointNode;
HAnimSegment116: THAnimSegmentNode;
TouchSensor117: TTouchSensorNode;
Transform118: TTransformNode;
Shape119: TShapeNode;
HAnimSite120: THAnimSiteNode;
Transform121: TTransformNode;
Shape122: TShapeNode;
HAnimJoint123: THAnimJointNode;
HAnimSegment124: THAnimSegmentNode;
TouchSensor125: TTouchSensorNode;
Transform126: TTransformNode;
Shape127: TShapeNode;
HAnimSite128: THAnimSiteNode;
Transform129: TTransformNode;
Shape130: TShapeNode;
HAnimJoint131: THAnimJointNode;
HAnimSegment132: THAnimSegmentNode;
TouchSensor133: TTouchSensorNode;
Transform134: TTransformNode;
Shape135: TShapeNode;
HAnimSite136: THAnimSiteNode;
Transform137: TTransformNode;
Shape138: TShapeNode;
HAnimJoint139: THAnimJointNode;
HAnimSegment140: THAnimSegmentNode;
TouchSensor141: TTouchSensorNode;
Transform142: TTransformNode;
Shape143: TShapeNode;
HAnimSite144: THAnimSiteNode;
Transform145: TTransformNode;
Shape146: TShapeNode;
HAnimJoint147: THAnimJointNode;
HAnimSegment148: THAnimSegmentNode;
TouchSensor149: TTouchSensorNode;
Transform150: TTransformNode;
Shape151: TShapeNode;
HAnimSite152: THAnimSiteNode;
Transform153: TTransformNode;
Shape154: TShapeNode;
HAnimJoint155: THAnimJointNode;
HAnimSegment156: THAnimSegmentNode;
TouchSensor157: TTouchSensorNode;
Transform158: TTransformNode;
Shape159: TShapeNode;
HAnimSite160: THAnimSiteNode;
Transform161: TTransformNode;
Shape162: TShapeNode;
HAnimJoint163: THAnimJointNode;
HAnimSegment164: THAnimSegmentNode;
TouchSensor165: TTouchSensorNode;
Transform166: TTransformNode;
Shape167: TShapeNode;
HAnimSite168: THAnimSiteNode;
Transform169: TTransformNode;
Shape170: TShapeNode;
HAnimJoint171: THAnimJointNode;
HAnimSegment172: THAnimSegmentNode;
TouchSensor173: TTouchSensorNode;
Transform174: TTransformNode;
Shape175: TShapeNode;
HAnimSite176: THAnimSiteNode;
Transform177: TTransformNode;
Shape178: TShapeNode;
HAnimJoint179: THAnimJointNode;
HAnimSegment180: THAnimSegmentNode;
TouchSensor181: TTouchSensorNode;
Transform182: TTransformNode;
Shape183: TShapeNode;
HAnimSite184: THAnimSiteNode;
Transform185: TTransformNode;
Shape186: TShapeNode;
HAnimJoint187: THAnimJointNode;
HAnimSegment188: THAnimSegmentNode;
TouchSensor189: TTouchSensorNode;
Transform190: TTransformNode;
Shape191: TShapeNode;
HAnimSite192: THAnimSiteNode;
Transform193: TTransformNode;
Shape194: TShapeNode;
HAnimJoint195: THAnimJointNode;
HAnimSegment196: THAnimSegmentNode;
TouchSensor197: TTouchSensorNode;
Transform198: TTransformNode;
Shape199: TShapeNode;
HAnimSite200: THAnimSiteNode;
Transform201: TTransformNode;
Shape202: TShapeNode;
HAnimJoint203: THAnimJointNode;
HAnimSegment204: THAnimSegmentNode;
TouchSensor205: TTouchSensorNode;
Transform206: TTransformNode;
Shape207: TShapeNode;
HAnimSite208: THAnimSiteNode;
Transform209: TTransformNode;
Shape210: TShapeNode;
HAnimJoint211: THAnimJointNode;
HAnimSegment212: THAnimSegmentNode;
TouchSensor213: TTouchSensorNode;
Transform214: TTransformNode;
Shape215: TShapeNode;
HAnimSite216: THAnimSiteNode;
Transform217: TTransformNode;
Shape218: TShapeNode;
HAnimJoint219: THAnimJointNode;
HAnimSegment220: THAnimSegmentNode;
TouchSensor221: TTouchSensorNode;
Transform222: TTransformNode;
Shape223: TShapeNode;
HAnimSite224: THAnimSiteNode;
Transform225: TTransformNode;
Shape226: TShapeNode;
HAnimJoint227: THAnimJointNode;
HAnimSegment228: THAnimSegmentNode;
TouchSensor229: TTouchSensorNode;
Transform230: TTransformNode;
Shape231: TShapeNode;
HAnimSite232: THAnimSiteNode;
Transform233: TTransformNode;
Shape234: TShapeNode;
HAnimJoint235: THAnimJointNode;
HAnimSegment236: THAnimSegmentNode;
TouchSensor237: TTouchSensorNode;
Transform238: TTransformNode;
Shape239: TShapeNode;
HAnimSite240: THAnimSiteNode;
Transform241: TTransformNode;
Shape242: TShapeNode;
HAnimJoint243: THAnimJointNode;
HAnimSegment244: THAnimSegmentNode;
TouchSensor245: TTouchSensorNode;
Transform246: TTransformNode;
Shape247: TShapeNode;
HAnimSite248: THAnimSiteNode;
Transform249: TTransformNode;
Shape250: TShapeNode;
HAnimJoint251: THAnimJointNode;
HAnimSegment252: THAnimSegmentNode;
TouchSensor253: TTouchSensorNode;
Transform254: TTransformNode;
Shape255: TShapeNode;
HAnimSite256: THAnimSiteNode;
Transform257: TTransformNode;
Shape258: TShapeNode;
HAnimJoint259: THAnimJointNode;
HAnimSegment260: THAnimSegmentNode;
TouchSensor261: TTouchSensorNode;
Transform262: TTransformNode;
Shape263: TShapeNode;
HAnimSite264: THAnimSiteNode;
Transform265: TTransformNode;
Shape266: TShapeNode;
HAnimJoint267: THAnimJointNode;
HAnimSegment268: THAnimSegmentNode;
TouchSensor269: TTouchSensorNode;
Transform270: TTransformNode;
Shape271: TShapeNode;
HAnimSite272: THAnimSiteNode;
Transform273: TTransformNode;
Shape274: TShapeNode;
HAnimJoint275: THAnimJointNode;
HAnimSegment276: THAnimSegmentNode;
TouchSensor277: TTouchSensorNode;
Transform278: TTransformNode;
Shape279: TShapeNode;
HAnimSite280: THAnimSiteNode;
Transform281: TTransformNode;
Shape282: TShapeNode;
HAnimJoint283: THAnimJointNode;
HAnimSegment284: THAnimSegmentNode;
TouchSensor285: TTouchSensorNode;
Transform286: TTransformNode;
Shape287: TShapeNode;
HAnimSite288: THAnimSiteNode;
Transform289: TTransformNode;
Shape290: TShapeNode;
HAnimJoint291: THAnimJointNode;
HAnimSegment292: THAnimSegmentNode;
TouchSensor293: TTouchSensorNode;
Transform294: TTransformNode;
Shape295: TShapeNode;
HAnimSite296: THAnimSiteNode;
Transform297: TTransformNode;
Shape298: TShapeNode;
HAnimJoint299: THAnimJointNode;
HAnimSegment300: THAnimSegmentNode;
TouchSensor301: TTouchSensorNode;
Transform302: TTransformNode;
Shape303: TShapeNode;
HAnimSite304: THAnimSiteNode;
Transform305: TTransformNode;
Shape306: TShapeNode;
HAnimJoint307: THAnimJointNode;
HAnimSegment308: THAnimSegmentNode;
TouchSensor309: TTouchSensorNode;
Transform310: TTransformNode;
Shape311: TShapeNode;
HAnimSite312: THAnimSiteNode;
Transform313: TTransformNode;
Shape314: TShapeNode;
HAnimJoint315: THAnimJointNode;
HAnimSegment316: THAnimSegmentNode;
TouchSensor317: TTouchSensorNode;
Transform318: TTransformNode;
Shape319: TShapeNode;
HAnimSite320: THAnimSiteNode;
Transform321: TTransformNode;
Shape322: TShapeNode;
HAnimJoint323: THAnimJointNode;
HAnimSegment324: THAnimSegmentNode;
TouchSensor325: TTouchSensorNode;
Transform326: TTransformNode;
Shape327: TShapeNode;
HAnimSite328: THAnimSiteNode;
Transform329: TTransformNode;
Shape330: TShapeNode;
HAnimJoint331: THAnimJointNode;
HAnimSegment332: THAnimSegmentNode;
TouchSensor333: TTouchSensorNode;
Transform334: TTransformNode;
Shape335: TShapeNode;
HAnimSite336: THAnimSiteNode;
Transform337: TTransformNode;
Shape338: TShapeNode;
HAnimJoint339: THAnimJointNode;
HAnimSegment340: THAnimSegmentNode;
TouchSensor341: TTouchSensorNode;
Transform342: TTransformNode;
Shape343: TShapeNode;
HAnimSite344: THAnimSiteNode;
Transform345: TTransformNode;
Shape346: TShapeNode;
HAnimJoint347: THAnimJointNode;
HAnimSegment348: THAnimSegmentNode;
TouchSensor349: TTouchSensorNode;
Transform350: TTransformNode;
Shape351: TShapeNode;
HAnimSite352: THAnimSiteNode;
Transform353: TTransformNode;
Shape354: TShapeNode;
HAnimJoint355: THAnimJointNode;
HAnimSegment356: THAnimSegmentNode;
TouchSensor357: TTouchSensorNode;
Transform358: TTransformNode;
Shape359: TShapeNode;
HAnimSite360: THAnimSiteNode;
Transform361: TTransformNode;
Shape362: TShapeNode;
HAnimJoint363: THAnimJointNode;
HAnimSegment364: THAnimSegmentNode;
TouchSensor365: TTouchSensorNode;
Transform366: TTransformNode;
Shape367: TShapeNode;
HAnimSite368: THAnimSiteNode;
Transform369: TTransformNode;
Shape370: TShapeNode;
HAnimJoint371: THAnimJointNode;
HAnimSegment372: THAnimSegmentNode;
TouchSensor373: TTouchSensorNode;
Transform374: TTransformNode;
Shape375: TShapeNode;
HAnimSite376: THAnimSiteNode;
Transform377: TTransformNode;
Shape378: TShapeNode;
HAnimJoint379: THAnimJointNode;
HAnimSegment380: THAnimSegmentNode;
TouchSensor381: TTouchSensorNode;
Transform382: TTransformNode;
Shape383: TShapeNode;
HAnimSite384: THAnimSiteNode;
Transform385: TTransformNode;
Shape386: TShapeNode;
HAnimJoint387: THAnimJointNode;
HAnimSegment388: THAnimSegmentNode;
TouchSensor389: TTouchSensorNode;
Transform390: TTransformNode;
Shape391: TShapeNode;
HAnimSite392: THAnimSiteNode;
Transform393: TTransformNode;
Shape394: TShapeNode;
HAnimJoint395: THAnimJointNode;
HAnimSegment396: THAnimSegmentNode;
TouchSensor397: TTouchSensorNode;
Transform398: TTransformNode;
Shape399: TShapeNode;
HAnimSite400: THAnimSiteNode;
Transform401: TTransformNode;
Shape402: TShapeNode;
HAnimJoint403: THAnimJointNode;
HAnimSegment404: THAnimSegmentNode;
TouchSensor405: TTouchSensorNode;
Transform406: TTransformNode;
Shape407: TShapeNode;
HAnimSite408: THAnimSiteNode;
Transform409: TTransformNode;
Shape410: TShapeNode;
HAnimJoint411: THAnimJointNode;
HAnimSegment412: THAnimSegmentNode;
TouchSensor413: TTouchSensorNode;
Transform414: TTransformNode;
Shape415: TShapeNode;
HAnimSite416: THAnimSiteNode;
Transform417: TTransformNode;
Shape418: TShapeNode;
HAnimJoint419: THAnimJointNode;
HAnimSegment420: THAnimSegmentNode;
TouchSensor421: TTouchSensorNode;
Transform422: TTransformNode;
Shape423: TShapeNode;
HAnimSite424: THAnimSiteNode;
Transform425: TTransformNode;
Shape426: TShapeNode;
HAnimJoint427: THAnimJointNode;
HAnimSegment428: THAnimSegmentNode;
TouchSensor429: TTouchSensorNode;
Transform430: TTransformNode;
Shape431: TShapeNode;
HAnimSite432: THAnimSiteNode;
Transform433: TTransformNode;
Shape434: TShapeNode;
HAnimJoint435: THAnimJointNode;
HAnimSegment436: THAnimSegmentNode;
TouchSensor437: TTouchSensorNode;
Transform438: TTransformNode;
Shape439: TShapeNode;
HAnimSite440: THAnimSiteNode;
Transform441: TTransformNode;
Shape442: TShapeNode;
HAnimJoint443: THAnimJointNode;
HAnimSegment444: THAnimSegmentNode;
TouchSensor445: TTouchSensorNode;
Transform446: TTransformNode;
Shape447: TShapeNode;
HAnimSite448: THAnimSiteNode;
Transform449: TTransformNode;
Shape450: TShapeNode;
HAnimJoint451: THAnimJointNode;
HAnimSegment452: THAnimSegmentNode;
TouchSensor453: TTouchSensorNode;
Transform454: TTransformNode;
Shape455: TShapeNode;
HAnimSite456: THAnimSiteNode;
Transform457: TTransformNode;
Shape458: TShapeNode;
HAnimJoint459: THAnimJointNode;
HAnimSegment460: THAnimSegmentNode;
TouchSensor461: TTouchSensorNode;
Transform462: TTransformNode;
Shape463: TShapeNode;
HAnimSite464: THAnimSiteNode;
Transform465: TTransformNode;
Shape466: TShapeNode;
HAnimJoint467: THAnimJointNode;
HAnimSegment468: THAnimSegmentNode;
TouchSensor469: TTouchSensorNode;
Transform470: TTransformNode;
Shape471: TShapeNode;
HAnimSite472: THAnimSiteNode;
Transform473: TTransformNode;
Shape474: TShapeNode;
HAnimJoint475: THAnimJointNode;
HAnimSegment476: THAnimSegmentNode;
TouchSensor477: TTouchSensorNode;
Transform478: TTransformNode;
Shape479: TShapeNode;
HAnimSite480: THAnimSiteNode;
Transform481: TTransformNode;
Shape482: TShapeNode;
HAnimJoint483: THAnimJointNode;
HAnimSegment484: THAnimSegmentNode;
TouchSensor485: TTouchSensorNode;
Transform486: TTransformNode;
Shape487: TShapeNode;
HAnimSite488: THAnimSiteNode;
Transform489: TTransformNode;
Shape490: TShapeNode;
HAnimJoint491: THAnimJointNode;
HAnimSegment492: THAnimSegmentNode;
TouchSensor493: TTouchSensorNode;
Transform494: TTransformNode;
Shape495: TShapeNode;
HAnimSite496: THAnimSiteNode;
Transform497: TTransformNode;
Shape498: TShapeNode;
HAnimJoint499: THAnimJointNode;
HAnimSegment500: THAnimSegmentNode;
TouchSensor501: TTouchSensorNode;
Transform502: TTransformNode;
Shape503: TShapeNode;
HAnimSite504: THAnimSiteNode;
Transform505: TTransformNode;
Shape506: TShapeNode;
HAnimJoint507: THAnimJointNode;
HAnimSegment508: THAnimSegmentNode;
TouchSensor509: TTouchSensorNode;
Transform510: TTransformNode;
Shape511: TShapeNode;
HAnimSite512: THAnimSiteNode;
Transform513: TTransformNode;
Shape514: TShapeNode;
HAnimJoint515: THAnimJointNode;
HAnimSegment516: THAnimSegmentNode;
TouchSensor517: TTouchSensorNode;
Transform518: TTransformNode;
Shape519: TShapeNode;
HAnimSite520: THAnimSiteNode;
Transform521: TTransformNode;
Shape522: TShapeNode;
HAnimJoint523: THAnimJointNode;
HAnimSegment524: THAnimSegmentNode;
TouchSensor525: TTouchSensorNode;
Transform526: TTransformNode;
Shape527: TShapeNode;
HAnimSite528: THAnimSiteNode;
Transform529: TTransformNode;
Shape530: TShapeNode;
HAnimJoint531: THAnimJointNode;
HAnimSegment532: THAnimSegmentNode;
TouchSensor533: TTouchSensorNode;
Transform534: TTransformNode;
Shape535: TShapeNode;
HAnimSite536: THAnimSiteNode;
Transform537: TTransformNode;
Shape538: TShapeNode;
HAnimJoint539: THAnimJointNode;
HAnimSegment540: THAnimSegmentNode;
TouchSensor541: TTouchSensorNode;
Transform542: TTransformNode;
Shape543: TShapeNode;
HAnimSite544: THAnimSiteNode;
Transform545: TTransformNode;
Shape546: TShapeNode;
HAnimJoint547: THAnimJointNode;
HAnimSegment548: THAnimSegmentNode;
TouchSensor549: TTouchSensorNode;
Transform550: TTransformNode;
Shape551: TShapeNode;
HAnimSite552: THAnimSiteNode;
Transform553: TTransformNode;
Shape554: TShapeNode;
HAnimJoint555: THAnimJointNode;
HAnimSegment556: THAnimSegmentNode;
TouchSensor557: TTouchSensorNode;
Transform558: TTransformNode;
Shape559: TShapeNode;
HAnimSite560: THAnimSiteNode;
Transform561: TTransformNode;
Shape562: TShapeNode;
HAnimJoint563: THAnimJointNode;
HAnimSegment564: THAnimSegmentNode;
TouchSensor565: TTouchSensorNode;
Transform566: TTransformNode;
Shape567: TShapeNode;
HAnimSite568: THAnimSiteNode;
Transform569: TTransformNode;
Shape570: TShapeNode;
HAnimJoint571: THAnimJointNode;
HAnimSegment572: THAnimSegmentNode;
TouchSensor573: TTouchSensorNode;
Transform574: TTransformNode;
Shape575: TShapeNode;
HAnimSite576: THAnimSiteNode;
Transform577: TTransformNode;
Shape578: TShapeNode;
HAnimJoint579: THAnimJointNode;
HAnimSegment580: THAnimSegmentNode;
TouchSensor581: TTouchSensorNode;
Transform582: TTransformNode;
Shape583: TShapeNode;
HAnimSite584: THAnimSiteNode;
Transform585: TTransformNode;
Shape586: TShapeNode;
HAnimJoint587: THAnimJointNode;
HAnimSegment588: THAnimSegmentNode;
TouchSensor589: TTouchSensorNode;
Transform590: TTransformNode;
Shape591: TShapeNode;
HAnimSite592: THAnimSiteNode;
Transform593: TTransformNode;
Shape594: TShapeNode;
HAnimJoint595: THAnimJointNode;
HAnimSegment596: THAnimSegmentNode;
TouchSensor597: TTouchSensorNode;
Transform598: TTransformNode;
Shape599: TShapeNode;
HAnimSite600: THAnimSiteNode;
Transform601: TTransformNode;
Shape602: TShapeNode;
HAnimJoint603: THAnimJointNode;
HAnimSegment604: THAnimSegmentNode;
TouchSensor605: TTouchSensorNode;
Transform606: TTransformNode;
Shape607: TShapeNode;
HAnimSite608: THAnimSiteNode;
Transform609: TTransformNode;
Shape610: TShapeNode;
HAnimJoint611: THAnimJointNode;
HAnimSegment612: THAnimSegmentNode;
TouchSensor613: TTouchSensorNode;
Transform614: TTransformNode;
Shape615: TShapeNode;
HAnimSite616: THAnimSiteNode;
Transform617: TTransformNode;
Shape618: TShapeNode;
HAnimJoint619: THAnimJointNode;
HAnimSegment620: THAnimSegmentNode;
TouchSensor621: TTouchSensorNode;
Transform622: TTransformNode;
Shape623: TShapeNode;
HAnimSite624: THAnimSiteNode;
Transform625: TTransformNode;
Shape626: TShapeNode;
HAnimJoint627: THAnimJointNode;
HAnimSegment628: THAnimSegmentNode;
TouchSensor629: TTouchSensorNode;
Transform630: TTransformNode;
Shape631: TShapeNode;
HAnimSite632: THAnimSiteNode;
Transform633: TTransformNode;
Shape634: TShapeNode;
HAnimJoint635: THAnimJointNode;
HAnimSegment636: THAnimSegmentNode;
TouchSensor637: TTouchSensorNode;
Transform638: TTransformNode;
Shape639: TShapeNode;
HAnimSite640: THAnimSiteNode;
Transform641: TTransformNode;
Shape642: TShapeNode;
HAnimJoint643: THAnimJointNode;
HAnimSegment644: THAnimSegmentNode;
TouchSensor645: TTouchSensorNode;
Transform646: TTransformNode;
Shape647: TShapeNode;
HAnimSite648: THAnimSiteNode;
Transform649: TTransformNode;
Shape650: TShapeNode;
HAnimJoint651: THAnimJointNode;
HAnimSegment652: THAnimSegmentNode;
TouchSensor653: TTouchSensorNode;
Transform654: TTransformNode;
Shape655: TShapeNode;
HAnimSite656: THAnimSiteNode;
Transform657: TTransformNode;
Shape658: TShapeNode;
HAnimJoint659: THAnimJointNode;
HAnimSegment660: THAnimSegmentNode;
TouchSensor661: TTouchSensorNode;
Transform662: TTransformNode;
Shape663: TShapeNode;
HAnimSite664: THAnimSiteNode;
Transform665: TTransformNode;
Shape666: TShapeNode;
HAnimJoint667: THAnimJointNode;
HAnimSegment668: THAnimSegmentNode;
TouchSensor669: TTouchSensorNode;
Transform670: TTransformNode;
Shape671: TShapeNode;
HAnimSite672: THAnimSiteNode;
Transform673: TTransformNode;
Shape674: TShapeNode;
HAnimJoint675: THAnimJointNode;
HAnimSegment676: THAnimSegmentNode;
TouchSensor677: TTouchSensorNode;
Transform678: TTransformNode;
Shape679: TShapeNode;
HAnimSite680: THAnimSiteNode;
Transform681: TTransformNode;
Shape682: TShapeNode;
HAnimJoint683: THAnimJointNode;
HAnimSegment684: THAnimSegmentNode;
TouchSensor685: TTouchSensorNode;
Transform686: TTransformNode;
Shape687: TShapeNode;
HAnimSite688: THAnimSiteNode;
Transform689: TTransformNode;
Shape690: TShapeNode;
HAnimJoint691: THAnimJointNode;
HAnimSegment692: THAnimSegmentNode;
TouchSensor693: TTouchSensorNode;
Transform694: TTransformNode;
Shape695: TShapeNode;
HAnimSite696: THAnimSiteNode;
Transform697: TTransformNode;
Shape698: TShapeNode;
HAnimJoint699: THAnimJointNode;
HAnimSegment700: THAnimSegmentNode;
TouchSensor701: TTouchSensorNode;
Transform702: TTransformNode;
Shape703: TShapeNode;
HAnimSite704: THAnimSiteNode;
Transform705: TTransformNode;
Shape706: TShapeNode;
HAnimJoint707: THAnimJointNode;
HAnimSegment708: THAnimSegmentNode;
TouchSensor709: TTouchSensorNode;
Transform710: TTransformNode;
Shape711: TShapeNode;
HAnimSite712: THAnimSiteNode;
Transform713: TTransformNode;
Shape714: TShapeNode;
HAnimJoint715: THAnimJointNode;
HAnimSegment716: THAnimSegmentNode;
TouchSensor717: TTouchSensorNode;
Transform718: TTransformNode;
Shape719: TShapeNode;
HAnimSite720: THAnimSiteNode;
Transform721: TTransformNode;
Shape722: TShapeNode;
HAnimJoint723: THAnimJointNode;
HAnimSegment724: THAnimSegmentNode;
TouchSensor725: TTouchSensorNode;
Transform726: TTransformNode;
Shape727: TShapeNode;
HAnimSite728: THAnimSiteNode;
Transform729: TTransformNode;
Shape730: TShapeNode;
HAnimJoint731: THAnimJointNode;
HAnimSegment732: THAnimSegmentNode;
TouchSensor733: TTouchSensorNode;
Transform734: TTransformNode;
Shape735: TShapeNode;
HAnimSite736: THAnimSiteNode;
Transform737: TTransformNode;
Shape738: TShapeNode;
HAnimJoint739: THAnimJointNode;
HAnimSegment740: THAnimSegmentNode;
TouchSensor741: TTouchSensorNode;
Transform742: TTransformNode;
Shape743: TShapeNode;
HAnimSite744: THAnimSiteNode;
Transform745: TTransformNode;
Shape746: TShapeNode;
HAnimJoint747: THAnimJointNode;
HAnimSegment748: THAnimSegmentNode;
TouchSensor749: TTouchSensorNode;
Transform750: TTransformNode;
Shape751: TShapeNode;
HAnimSite752: THAnimSiteNode;
Transform753: TTransformNode;
Shape754: TShapeNode;
HAnimJoint755: THAnimJointNode;
HAnimSegment756: THAnimSegmentNode;
TouchSensor757: TTouchSensorNode;
Transform758: TTransformNode;
Shape759: TShapeNode;
HAnimSite760: THAnimSiteNode;
Transform761: TTransformNode;
Shape762: TShapeNode;
HAnimJoint763: THAnimJointNode;
HAnimSegment764: THAnimSegmentNode;
TouchSensor765: TTouchSensorNode;
Transform766: TTransformNode;
Shape767: TShapeNode;
HAnimSite768: THAnimSiteNode;
Transform769: TTransformNode;
Shape770: TShapeNode;
HAnimJoint771: THAnimJointNode;
HAnimSegment772: THAnimSegmentNode;
TouchSensor773: TTouchSensorNode;
Transform774: TTransformNode;
Shape775: TShapeNode;
HAnimSite776: THAnimSiteNode;
Transform777: TTransformNode;
Shape778: TShapeNode;
HAnimJoint779: THAnimJointNode;
HAnimSegment780: THAnimSegmentNode;
TouchSensor781: TTouchSensorNode;
Transform782: TTransformNode;
Shape783: TShapeNode;
HAnimSite784: THAnimSiteNode;
Transform785: TTransformNode;
Shape786: TShapeNode;
HAnimJoint787: THAnimJointNode;
HAnimSegment788: THAnimSegmentNode;
TouchSensor789: TTouchSensorNode;
Transform790: TTransformNode;
Shape791: TShapeNode;
HAnimSite792: THAnimSiteNode;
Transform793: TTransformNode;
Shape794: TShapeNode;
HAnimJoint795: THAnimJointNode;
HAnimSegment796: THAnimSegmentNode;
TouchSensor797: TTouchSensorNode;
Transform798: TTransformNode;
Shape799: TShapeNode;
HAnimSite800: THAnimSiteNode;
Transform801: TTransformNode;
Shape802: TShapeNode;
HAnimJoint803: THAnimJointNode;
HAnimSegment804: THAnimSegmentNode;
TouchSensor805: TTouchSensorNode;
Transform806: TTransformNode;
Shape807: TShapeNode;
HAnimSite808: THAnimSiteNode;
Transform809: TTransformNode;
Shape810: TShapeNode;
HAnimJoint811: THAnimJointNode;
HAnimSegment812: THAnimSegmentNode;
TouchSensor813: TTouchSensorNode;
Transform814: TTransformNode;
Shape815: TShapeNode;
HAnimSite816: THAnimSiteNode;
Transform817: TTransformNode;
Shape818: TShapeNode;
HAnimJoint819: THAnimJointNode;
HAnimSegment820: THAnimSegmentNode;
TouchSensor821: TTouchSensorNode;
Transform822: TTransformNode;
Shape823: TShapeNode;
HAnimSite824: THAnimSiteNode;
Transform825: TTransformNode;
Shape826: TShapeNode;
HAnimJoint827: THAnimJointNode;
HAnimSegment828: THAnimSegmentNode;
TouchSensor829: TTouchSensorNode;
Transform830: TTransformNode;
Shape831: TShapeNode;
HAnimSite832: THAnimSiteNode;
Transform833: TTransformNode;
Shape834: TShapeNode;
HAnimJoint835: THAnimJointNode;
HAnimSegment836: THAnimSegmentNode;
TouchSensor837: TTouchSensorNode;
Transform838: TTransformNode;
Shape839: TShapeNode;
HAnimSite840: THAnimSiteNode;
Transform841: TTransformNode;
Shape842: TShapeNode;
HAnimJoint843: THAnimJointNode;
HAnimSegment844: THAnimSegmentNode;
TouchSensor845: TTouchSensorNode;
Transform846: TTransformNode;
Shape847: TShapeNode;
HAnimSite848: THAnimSiteNode;
Transform849: TTransformNode;
Shape850: TShapeNode;
HAnimJoint851: THAnimJointNode;
HAnimSegment852: THAnimSegmentNode;
TouchSensor853: TTouchSensorNode;
Transform854: TTransformNode;
Shape855: TShapeNode;
HAnimSite856: THAnimSiteNode;
Transform857: TTransformNode;
Shape858: TShapeNode;
HAnimJoint859: THAnimJointNode;
HAnimSegment860: THAnimSegmentNode;
TouchSensor861: TTouchSensorNode;
Transform862: TTransformNode;
Shape863: TShapeNode;
HAnimSite864: THAnimSiteNode;
Transform865: TTransformNode;
Shape866: TShapeNode;
HAnimJoint867: THAnimJointNode;
HAnimSegment868: THAnimSegmentNode;
TouchSensor869: TTouchSensorNode;
Transform870: TTransformNode;
Shape871: TShapeNode;
HAnimSite872: THAnimSiteNode;
Transform873: TTransformNode;
Shape874: TShapeNode;
HAnimJoint875: THAnimJointNode;
HAnimSegment876: THAnimSegmentNode;
TouchSensor877: TTouchSensorNode;
Transform878: TTransformNode;
Shape879: TShapeNode;
HAnimSite880: THAnimSiteNode;
Transform881: TTransformNode;
Shape882: TShapeNode;
HAnimJoint883: THAnimJointNode;
HAnimSegment884: THAnimSegmentNode;
TouchSensor885: TTouchSensorNode;
Transform886: TTransformNode;
Shape887: TShapeNode;
HAnimSite888: THAnimSiteNode;
Transform889: TTransformNode;
Shape890: TShapeNode;
HAnimJoint891: THAnimJointNode;
HAnimSegment892: THAnimSegmentNode;
TouchSensor893: TTouchSensorNode;
Transform894: TTransformNode;
Shape895: TShapeNode;
HAnimSite896: THAnimSiteNode;
Transform897: TTransformNode;
Shape898: TShapeNode;
HAnimJoint899: THAnimJointNode;
HAnimSegment900: THAnimSegmentNode;
TouchSensor901: TTouchSensorNode;
Transform902: TTransformNode;
Shape903: TShapeNode;
HAnimSite904: THAnimSiteNode;
Transform905: TTransformNode;
Shape906: TShapeNode;
HAnimJoint907: THAnimJointNode;
HAnimSegment908: THAnimSegmentNode;
TouchSensor909: TTouchSensorNode;
Transform910: TTransformNode;
Shape911: TShapeNode;
HAnimSite912: THAnimSiteNode;
Transform913: TTransformNode;
Shape914: TShapeNode;
HAnimJoint915: THAnimJointNode;
HAnimSegment916: THAnimSegmentNode;
TouchSensor917: TTouchSensorNode;
Transform918: TTransformNode;
Shape919: TShapeNode;
HAnimSite920: THAnimSiteNode;
Transform921: TTransformNode;
Shape922: TShapeNode;
HAnimJoint923: THAnimJointNode;
HAnimSegment924: THAnimSegmentNode;
TouchSensor925: TTouchSensorNode;
Transform926: TTransformNode;
Shape927: TShapeNode;
HAnimSite928: THAnimSiteNode;
Transform929: TTransformNode;
Shape930: TShapeNode;
HAnimJoint931: THAnimJointNode;
HAnimSegment932: THAnimSegmentNode;
TouchSensor933: TTouchSensorNode;
Transform934: TTransformNode;
Shape935: TShapeNode;
HAnimSite936: THAnimSiteNode;
Transform937: TTransformNode;
Shape938: TShapeNode;
HAnimJoint939: THAnimJointNode;
HAnimSegment940: THAnimSegmentNode;
TouchSensor941: TTouchSensorNode;
Transform942: TTransformNode;
Shape943: TShapeNode;
HAnimSite944: THAnimSiteNode;
Transform945: TTransformNode;
Shape946: TShapeNode;
HAnimJoint947: THAnimJointNode;
HAnimSegment948: THAnimSegmentNode;
TouchSensor949: TTouchSensorNode;
Transform950: TTransformNode;
Shape951: TShapeNode;
HAnimSite952: THAnimSiteNode;
Transform953: TTransformNode;
Shape954: TShapeNode;
HAnimJoint955: THAnimJointNode;
HAnimSegment956: THAnimSegmentNode;
TouchSensor957: TTouchSensorNode;
Transform958: TTransformNode;
Shape959: TShapeNode;
HAnimSite960: THAnimSiteNode;
Transform961: TTransformNode;
Shape962: TShapeNode;
HAnimJoint963: THAnimJointNode;
HAnimSegment964: THAnimSegmentNode;
TouchSensor965: TTouchSensorNode;
Transform966: TTransformNode;
Shape967: TShapeNode;
HAnimSite968: THAnimSiteNode;
Transform969: TTransformNode;
Shape970: TShapeNode;
HAnimJoint971: THAnimJointNode;
HAnimSegment972: THAnimSegmentNode;
TouchSensor973: TTouchSensorNode;
Transform974: TTransformNode;
Shape975: TShapeNode;
HAnimSite976: THAnimSiteNode;
Transform977: TTransformNode;
Shape978: TShapeNode;
HAnimJoint979: THAnimJointNode;
HAnimSegment980: THAnimSegmentNode;
TouchSensor981: TTouchSensorNode;
Transform982: TTransformNode;
Shape983: TShapeNode;
HAnimSite984: THAnimSiteNode;
Transform985: TTransformNode;
Shape986: TShapeNode;
HAnimJoint987: THAnimJointNode;
HAnimSegment988: THAnimSegmentNode;
TouchSensor989: TTouchSensorNode;
Transform990: TTransformNode;
Shape991: TShapeNode;
HAnimSite992: THAnimSiteNode;
Transform993: TTransformNode;
Shape994: TShapeNode;
HAnimJoint995: THAnimJointNode;
HAnimSegment996: THAnimSegmentNode;
TouchSensor997: TTouchSensorNode;
Transform998: TTransformNode;
Shape999: TShapeNode;
HAnimSite1000: THAnimSiteNode;
Transform1001: TTransformNode;
Shape1002: TShapeNode;
HAnimJoint1003: THAnimJointNode;
HAnimSegment1004: THAnimSegmentNode;
TouchSensor1005: TTouchSensorNode;
Transform1006: TTransformNode;
Shape1007: TShapeNode;
HAnimSite1008: THAnimSiteNode;
Transform1009: TTransformNode;
Shape1010: TShapeNode;
HAnimJoint1011: THAnimJointNode;
HAnimSegment1012: THAnimSegmentNode;
TouchSensor1013: TTouchSensorNode;
Transform1014: TTransformNode;
Shape1015: TShapeNode;
HAnimSite1016: THAnimSiteNode;
Transform1017: TTransformNode;
Shape1018: TShapeNode;
HAnimJoint1019: THAnimJointNode;
HAnimSegment1020: THAnimSegmentNode;
TouchSensor1021: TTouchSensorNode;
Transform1022: TTransformNode;
Shape1023: TShapeNode;
HAnimSite1024: THAnimSiteNode;
Transform1025: TTransformNode;
Shape1026: TShapeNode;
HAnimJoint1027: THAnimJointNode;
HAnimSegment1028: THAnimSegmentNode;
TouchSensor1029: TTouchSensorNode;
Transform1030: TTransformNode;
Shape1031: TShapeNode;
HAnimSite1032: THAnimSiteNode;
Transform1033: TTransformNode;
Shape1034: TShapeNode;
HAnimJoint1035: THAnimJointNode;
HAnimSegment1036: THAnimSegmentNode;
TouchSensor1037: TTouchSensorNode;
Transform1038: TTransformNode;
Shape1039: TShapeNode;
HAnimSite1040: THAnimSiteNode;
Transform1041: TTransformNode;
Shape1042: TShapeNode;
HAnimJoint1043: THAnimJointNode;
HAnimSegment1044: THAnimSegmentNode;
TouchSensor1045: TTouchSensorNode;
Transform1046: TTransformNode;
Shape1047: TShapeNode;
HAnimSite1048: THAnimSiteNode;
Transform1049: TTransformNode;
Shape1050: TShapeNode;
HAnimJoint1051: THAnimJointNode;
HAnimSegment1052: THAnimSegmentNode;
TouchSensor1053: TTouchSensorNode;
Transform1054: TTransformNode;
Shape1055: TShapeNode;
HAnimSite1056: THAnimSiteNode;
Transform1057: TTransformNode;
Shape1058: TShapeNode;
HAnimJoint1059: THAnimJointNode;
HAnimSegment1060: THAnimSegmentNode;
TouchSensor1061: TTouchSensorNode;
Transform1062: TTransformNode;
Shape1063: TShapeNode;
HAnimSite1064: THAnimSiteNode;
Transform1065: TTransformNode;
Shape1066: TShapeNode;
HAnimJoint1067: THAnimJointNode;
HAnimSegment1068: THAnimSegmentNode;
TouchSensor1069: TTouchSensorNode;
Transform1070: TTransformNode;
Shape1071: TShapeNode;
HAnimSite1072: THAnimSiteNode;
Transform1073: TTransformNode;
Shape1074: TShapeNode;
HAnimJoint1075: THAnimJointNode;
HAnimSegment1076: THAnimSegmentNode;
TouchSensor1077: TTouchSensorNode;
Transform1078: TTransformNode;
Shape1079: TShapeNode;
HAnimSite1080: THAnimSiteNode;
Transform1081: TTransformNode;
Shape1082: TShapeNode;
HAnimJoint1083: THAnimJointNode;
HAnimSegment1084: THAnimSegmentNode;
TouchSensor1085: TTouchSensorNode;
Transform1086: TTransformNode;
Shape1087: TShapeNode;
HAnimSite1088: THAnimSiteNode;
Transform1089: TTransformNode;
Shape1090: TShapeNode;
HAnimJoint1091: THAnimJointNode;
HAnimSegment1092: THAnimSegmentNode;
TouchSensor1093: TTouchSensorNode;
Transform1094: TTransformNode;
Shape1095: TShapeNode;
HAnimSite1096: THAnimSiteNode;
Transform1097: TTransformNode;
Shape1098: TShapeNode;
HAnimJoint1099: THAnimJointNode;
HAnimSegment1100: THAnimSegmentNode;
TouchSensor1101: TTouchSensorNode;
Transform1102: TTransformNode;
Shape1103: TShapeNode;
HAnimSite1104: THAnimSiteNode;
Transform1105: TTransformNode;
Shape1106: TShapeNode;
HAnimJoint1107: THAnimJointNode;
HAnimSegment1108: THAnimSegmentNode;
TouchSensor1109: TTouchSensorNode;
Transform1110: TTransformNode;
Shape1111: TShapeNode;
HAnimSite1112: THAnimSiteNode;
Transform1113: TTransformNode;
Shape1114: TShapeNode;
HAnimJoint1115: THAnimJointNode;
HAnimSegment1116: THAnimSegmentNode;
TouchSensor1117: TTouchSensorNode;
Transform1118: TTransformNode;
Shape1119: TShapeNode;
HAnimSite1120: THAnimSiteNode;
Transform1121: TTransformNode;
Shape1122: TShapeNode;
HAnimJoint1123: THAnimJointNode;
HAnimSegment1124: THAnimSegmentNode;
TouchSensor1125: TTouchSensorNode;
Transform1126: TTransformNode;
Shape1127: TShapeNode;
HAnimSite1128: THAnimSiteNode;
Transform1129: TTransformNode;
Shape1130: TShapeNode;
HAnimJoint1131: THAnimJointNode;
HAnimSegment1132: THAnimSegmentNode;
TouchSensor1133: TTouchSensorNode;
Transform1134: TTransformNode;
Shape1135: TShapeNode;
HAnimSite1136: THAnimSiteNode;
Transform1137: TTransformNode;
Shape1138: TShapeNode;
HAnimJoint1139: THAnimJointNode;
HAnimSegment1140: THAnimSegmentNode;
TouchSensor1141: TTouchSensorNode;
Transform1142: TTransformNode;
Shape1143: TShapeNode;
HAnimSite1144: THAnimSiteNode;
Transform1145: TTransformNode;
Shape1146: TShapeNode;
HAnimJoint1147: THAnimJointNode;
HAnimSegment1148: THAnimSegmentNode;
TouchSensor1149: TTouchSensorNode;
Transform1150: TTransformNode;
Shape1151: TShapeNode;
HAnimSite1152: THAnimSiteNode;
Transform1153: TTransformNode;
Shape1154: TShapeNode;
HAnimJoint1155: THAnimJointNode;
HAnimSegment1156: THAnimSegmentNode;
TouchSensor1157: TTouchSensorNode;
Transform1158: TTransformNode;
Shape1159: TShapeNode;
HAnimSite1160: THAnimSiteNode;
Transform1161: TTransformNode;
Shape1162: TShapeNode;
HAnimJoint1163: THAnimJointNode;
HAnimSegment1164: THAnimSegmentNode;
TouchSensor1165: TTouchSensorNode;
Transform1166: TTransformNode;
Shape1167: TShapeNode;
HAnimSite1168: THAnimSiteNode;
Transform1169: TTransformNode;
Shape1170: TShapeNode;
HAnimJoint1171: THAnimJointNode;
HAnimSegment1172: THAnimSegmentNode;
TouchSensor1173: TTouchSensorNode;
Transform1174: TTransformNode;
Shape1175: TShapeNode;
HAnimSite1176: THAnimSiteNode;
Transform1177: TTransformNode;
Shape1178: TShapeNode;
HAnimJoint1179: THAnimJointNode;
HAnimSegment1180: THAnimSegmentNode;
TouchSensor1181: TTouchSensorNode;
Transform1182: TTransformNode;
Shape1183: TShapeNode;
HAnimSite1184: THAnimSiteNode;
Transform1185: TTransformNode;
Shape1186: TShapeNode;
HAnimJoint1187: THAnimJointNode;
HAnimSegment1188: THAnimSegmentNode;
TouchSensor1189: TTouchSensorNode;
Transform1190: TTransformNode;
Shape1191: TShapeNode;
HAnimSite1192: THAnimSiteNode;
Transform1193: TTransformNode;
Shape1194: TShapeNode;
HAnimJoint1195: THAnimJointNode;
HAnimSegment1196: THAnimSegmentNode;
TouchSensor1197: TTouchSensorNode;
Transform1198: TTransformNode;
Shape1199: TShapeNode;
HAnimSite1200: THAnimSiteNode;
Transform1201: TTransformNode;
Shape1202: TShapeNode;
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
HAnimJoint1338: THAnimJointNode;
HAnimJoint1339: THAnimJointNode;
HAnimJoint1340: THAnimJointNode;
HAnimJoint1341: THAnimJointNode;
HAnimJoint1342: THAnimJointNode;
HAnimJoint1343: THAnimJointNode;
HAnimJoint1344: THAnimJointNode;
HAnimJoint1345: THAnimJointNode;
HAnimJoint1346: THAnimJointNode;
HAnimJoint1347: THAnimJointNode;
HAnimJoint1348: THAnimJointNode;
TimeSensor1349: TTimeSensorNode;
ProximitySensor1350: TProximitySensorNode;
OrientationInterpolator1352: TOrientationInterpolatorNode;
OrientationInterpolator1353: TOrientationInterpolatorNode;
OrientationInterpolator1354: TOrientationInterpolatorNode;
OrientationInterpolator1355: TOrientationInterpolatorNode;
OrientationInterpolator1356: TOrientationInterpolatorNode;
OrientationInterpolator1357: TOrientationInterpolatorNode;
OrientationInterpolator1358: TOrientationInterpolatorNode;
OrientationInterpolator1359: TOrientationInterpolatorNode;
OrientationInterpolator1360: TOrientationInterpolatorNode;
OrientationInterpolator1361: TOrientationInterpolatorNode;
OrientationInterpolator1362: TOrientationInterpolatorNode;
OrientationInterpolator1363: TOrientationInterpolatorNode;
OrientationInterpolator1364: TOrientationInterpolatorNode;
OrientationInterpolator1365: TOrientationInterpolatorNode;
OrientationInterpolator1366: TOrientationInterpolatorNode;
OrientationInterpolator1367: TOrientationInterpolatorNode;
OrientationInterpolator1368: TOrientationInterpolatorNode;
OrientationInterpolator1369: TOrientationInterpolatorNode;
OrientationInterpolator1370: TOrientationInterpolatorNode;
OrientationInterpolator1371: TOrientationInterpolatorNode;
OrientationInterpolator1372: TOrientationInterpolatorNode;
OrientationInterpolator1373: TOrientationInterpolatorNode;
OrientationInterpolator1374: TOrientationInterpolatorNode;
OrientationInterpolator1375: TOrientationInterpolatorNode;
OrientationInterpolator1376: TOrientationInterpolatorNode;
OrientationInterpolator1377: TOrientationInterpolatorNode;
OrientationInterpolator1378: TOrientationInterpolatorNode;
OrientationInterpolator1379: TOrientationInterpolatorNode;
OrientationInterpolator1380: TOrientationInterpolatorNode;
OrientationInterpolator1381: TOrientationInterpolatorNode;
OrientationInterpolator1382: TOrientationInterpolatorNode;
OrientationInterpolator1383: TOrientationInterpolatorNode;
OrientationInterpolator1384: TOrientationInterpolatorNode;
OrientationInterpolator1385: TOrientationInterpolatorNode;
OrientationInterpolator1386: TOrientationInterpolatorNode;
OrientationInterpolator1387: TOrientationInterpolatorNode;
OrientationInterpolator1388: TOrientationInterpolatorNode;
OrientationInterpolator1389: TOrientationInterpolatorNode;
OrientationInterpolator1390: TOrientationInterpolatorNode;
OrientationInterpolator1391: TOrientationInterpolatorNode;
OrientationInterpolator1392: TOrientationInterpolatorNode;
OrientationInterpolator1393: TOrientationInterpolatorNode;
OrientationInterpolator1394: TOrientationInterpolatorNode;
OrientationInterpolator1395: TOrientationInterpolatorNode;
OrientationInterpolator1396: TOrientationInterpolatorNode;
OrientationInterpolator1397: TOrientationInterpolatorNode;
OrientationInterpolator1398: TOrientationInterpolatorNode;
OrientationInterpolator1399: TOrientationInterpolatorNode;
OrientationInterpolator1400: TOrientationInterpolatorNode;
OrientationInterpolator1401: TOrientationInterpolatorNode;
OrientationInterpolator1402: TOrientationInterpolatorNode;
OrientationInterpolator1403: TOrientationInterpolatorNode;
OrientationInterpolator1404: TOrientationInterpolatorNode;
OrientationInterpolator1405: TOrientationInterpolatorNode;
OrientationInterpolator1406: TOrientationInterpolatorNode;
OrientationInterpolator1407: TOrientationInterpolatorNode;
OrientationInterpolator1408: TOrientationInterpolatorNode;
OrientationInterpolator1409: TOrientationInterpolatorNode;
OrientationInterpolator1410: TOrientationInterpolatorNode;
OrientationInterpolator1411: TOrientationInterpolatorNode;
OrientationInterpolator1412: TOrientationInterpolatorNode;
OrientationInterpolator1413: TOrientationInterpolatorNode;
OrientationInterpolator1414: TOrientationInterpolatorNode;
OrientationInterpolator1415: TOrientationInterpolatorNode;
OrientationInterpolator1416: TOrientationInterpolatorNode;
OrientationInterpolator1417: TOrientationInterpolatorNode;
OrientationInterpolator1418: TOrientationInterpolatorNode;
OrientationInterpolator1419: TOrientationInterpolatorNode;
OrientationInterpolator1420: TOrientationInterpolatorNode;
OrientationInterpolator1421: TOrientationInterpolatorNode;
OrientationInterpolator1422: TOrientationInterpolatorNode;
OrientationInterpolator1423: TOrientationInterpolatorNode;
OrientationInterpolator1424: TOrientationInterpolatorNode;
OrientationInterpolator1425: TOrientationInterpolatorNode;
OrientationInterpolator1426: TOrientationInterpolatorNode;
OrientationInterpolator1427: TOrientationInterpolatorNode;
OrientationInterpolator1428: TOrientationInterpolatorNode;
OrientationInterpolator1429: TOrientationInterpolatorNode;
OrientationInterpolator1430: TOrientationInterpolatorNode;
OrientationInterpolator1431: TOrientationInterpolatorNode;
OrientationInterpolator1432: TOrientationInterpolatorNode;
OrientationInterpolator1433: TOrientationInterpolatorNode;
OrientationInterpolator1434: TOrientationInterpolatorNode;
OrientationInterpolator1435: TOrientationInterpolatorNode;
OrientationInterpolator1436: TOrientationInterpolatorNode;
OrientationInterpolator1437: TOrientationInterpolatorNode;
OrientationInterpolator1438: TOrientationInterpolatorNode;
OrientationInterpolator1439: TOrientationInterpolatorNode;
OrientationInterpolator1440: TOrientationInterpolatorNode;
OrientationInterpolator1441: TOrientationInterpolatorNode;
OrientationInterpolator1442: TOrientationInterpolatorNode;
OrientationInterpolator1443: TOrientationInterpolatorNode;
OrientationInterpolator1444: TOrientationInterpolatorNode;
OrientationInterpolator1445: TOrientationInterpolatorNode;
OrientationInterpolator1446: TOrientationInterpolatorNode;
OrientationInterpolator1447: TOrientationInterpolatorNode;
OrientationInterpolator1448: TOrientationInterpolatorNode;
OrientationInterpolator1449: TOrientationInterpolatorNode;
OrientationInterpolator1450: TOrientationInterpolatorNode;
OrientationInterpolator1451: TOrientationInterpolatorNode;
OrientationInterpolator1452: TOrientationInterpolatorNode;
OrientationInterpolator1453: TOrientationInterpolatorNode;
OrientationInterpolator1454: TOrientationInterpolatorNode;
OrientationInterpolator1455: TOrientationInterpolatorNode;
OrientationInterpolator1456: TOrientationInterpolatorNode;
OrientationInterpolator1457: TOrientationInterpolatorNode;
OrientationInterpolator1458: TOrientationInterpolatorNode;
OrientationInterpolator1459: TOrientationInterpolatorNode;
OrientationInterpolator1460: TOrientationInterpolatorNode;
OrientationInterpolator1461: TOrientationInterpolatorNode;
OrientationInterpolator1462: TOrientationInterpolatorNode;
OrientationInterpolator1463: TOrientationInterpolatorNode;
OrientationInterpolator1464: TOrientationInterpolatorNode;
OrientationInterpolator1465: TOrientationInterpolatorNode;
OrientationInterpolator1466: TOrientationInterpolatorNode;
OrientationInterpolator1467: TOrientationInterpolatorNode;
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
OrientationInterpolator1486: TOrientationInterpolatorNode;
OrientationInterpolator1487: TOrientationInterpolatorNode;
OrientationInterpolator1488: TOrientationInterpolatorNode;
OrientationInterpolator1489: TOrientationInterpolatorNode;
OrientationInterpolator1490: TOrientationInterpolatorNode;
OrientationInterpolator1491: TOrientationInterpolatorNode;
OrientationInterpolator1492: TOrientationInterpolatorNode;
OrientationInterpolator1493: TOrientationInterpolatorNode;
OrientationInterpolator1494: TOrientationInterpolatorNode;
OrientationInterpolator1495: TOrientationInterpolatorNode;
OrientationInterpolator1496: TOrientationInterpolatorNode;
OrientationInterpolator1497: TOrientationInterpolatorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 3;
X3D0.Meta['title'] := 'blenderSkeleton.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['copyright'] := '2023';
X3D0.Meta['reference'] := 'http://www.web3D.org';
X3D0.Meta['generator'] := 'Blender 4.0.1';
Group8 := TGroupNode.Create;
NavigationInfo9 := TNavigationInfoNode.Create;
{ .AddChildren }
Group8.AddChildren([NavigationInfo9]);
Background10 := TBackgroundNode.Create;
Background10.SetGroundColor([Vector3(0.05087608844041824,0.05087608844041824,0.05087608844041824)]);
Background10.SetSkyColor([Vector3(0.05087608844041824,0.05087608844041824,0.05087608844041824)]);
{ .AddChildren }
Group8.AddChildren([Background10]);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Box13 := TBoxNode.Create;
Box13.Size := Vector3(0.05,0.05,0.05);
{ .SetGeometry }
Shape12.Geometry := Box13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape12.Appearance := Appearance14;
{ .AddChild }
Transform11.AddChildren([Shape12]);
{ .AddChildren }
Group8.AddChildren([Transform11]);
Transform16 := TTransformNode.Create;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.06;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0.5,0);
Material20.Transparency := 0.5;
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform16.AddChildren([Shape17]);
{ .AddChildren }
Group8.AddChildren([Transform16]);
Transform21 := TTransformNode.Create;
Transform21.Rotation := Vector4(0.20594,0.33152,0.9207,1.92627);
Transform21.Translation := Vector3(4.07625,1.00545,5.90386);
PointLight22 := TPointLightNode.Create;
PointLight22.Location := Vector3(-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7);
PointLight22.Radius := 40;
{ .AddChildren }
Transform21.AddChildren([PointLight22]);
{ .AddChildren }
Group8.AddChildren([Transform21]);
Transform23 := TTransformNode.Create;
Transform23.Rotation := Vector4(0.77344,0.33383,0.53884,1.35072);
Transform23.Translation := Vector3(7.35889,-6.92579,4.95831);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.FieldOfView := 0.6911112070083618;
Viewpoint24.Orientation := Vector4(-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0);
Viewpoint24.Position := Vector3(-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7);
{ .AddChildren }
Transform23.AddChildren([Viewpoint24]);
{ .AddChildren }
Group8.AddChildren([Transform23]);
Transform25 := TTransformNode.Create;
HAnimHumanoid26 := THAnimHumanoidNode.Create;
HAnimHumanoid26.NameField := 'humanoid';
HAnimHumanoid26.Version := '2.0';
HAnimJoint27 := THAnimJointNode.Create;
HAnimJoint27.NameField := 'Armature';
HAnimSegment28 := THAnimSegmentNode.Create;
HAnimSegment28.NameField := 'SEGMENT_FOR_Armature';
TouchSensor29 := TTouchSensorNode.Create;
TouchSensor29.Description := 'joint Armature segment SEGMENT_FOR_Armature';
{ .AddChildren }
HAnimSegment28.AddChildren([TouchSensor29]);
Transform30 := TTransformNode.Create;
Shape31 := Shape17;
{ .AddChild }
Transform30.AddChildren([Shape31]);
{ .AddChildren }
HAnimSegment28.AddChildren([Transform30]);
HAnimSite32 := THAnimSiteNode.Create;
HAnimSite32.NameField := 'SEGMENT_FOR_Armature_tip';
Transform33 := TTransformNode.Create;
Shape34 := Shape12;
{ .AddChild }
Transform33.AddChildren([Shape34]);
{ .AddChildren }
HAnimSite32.AddChildren([Transform33]);
{ .AddChildren }
HAnimSegment28.AddChildren([HAnimSite32]);
{ .AddChildren }
HAnimJoint27.AddChildren([HAnimSegment28]);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.NameField := 'sacrum';
HAnimJoint35.Center := Vector3(-0.0002,-0.1178,0.8174);
HAnimSegment36 := THAnimSegmentNode.Create;
HAnimSegment36.NameField := 'SEGMENT_FOR_sacrum';
TouchSensor37 := TTouchSensorNode.Create;
TouchSensor37.Description := 'joint sacrum segment SEGMENT_FOR_sacrum';
{ .AddChildren }
HAnimSegment36.AddChildren([TouchSensor37]);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(-0.0002,-0.1178,0.8174);
Shape39 := Shape17;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
HAnimSegment36.AddChildren([Transform38]);
HAnimSite40 := THAnimSiteNode.Create;
HAnimSite40.NameField := 'SEGMENT_FOR_sacrum_tip';
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(-0.0002,-0.1178,0.8174);
Shape42 := Shape12;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
HAnimSite40.AddChildren([Transform41]);
{ .AddChildren }
HAnimSegment36.AddChildren([HAnimSite40]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimSegment36]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'pelvis';
HAnimJoint43.Center := Vector3(-0.0002,-0.1178,0.6986);
HAnimSegment44 := THAnimSegmentNode.Create;
HAnimSegment44.NameField := 'SEGMENT_FOR_pelvis';
TouchSensor45 := TTouchSensorNode.Create;
TouchSensor45.Description := 'joint pelvis segment SEGMENT_FOR_pelvis';
{ .AddChildren }
HAnimSegment44.AddChildren([TouchSensor45]);
Transform46 := TTransformNode.Create;
Transform46.Translation := Vector3(-0.0002,-0.1178,0.6986);
Shape47 := Shape17;
{ .AddChild }
Transform46.AddChildren([Shape47]);
{ .AddChildren }
HAnimSegment44.AddChildren([Transform46]);
HAnimSite48 := THAnimSiteNode.Create;
HAnimSite48.NameField := 'SEGMENT_FOR_pelvis_tip';
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(-0.0002,-0.1178,0.6986);
Shape50 := Shape12;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
HAnimSite48.AddChildren([Transform49]);
{ .AddChildren }
HAnimSegment44.AddChildren([HAnimSite48]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimSegment44]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'l_thigh';
HAnimJoint51.Center := Vector3(0.0945,-0.1202,0.8181);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'SEGMENT_FOR_l_thigh';
TouchSensor53 := TTouchSensorNode.Create;
TouchSensor53.Description := 'joint l_thigh segment SEGMENT_FOR_l_thigh';
{ .AddChildren }
HAnimSegment52.AddChildren([TouchSensor53]);
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0.0945,-0.1202,0.8181);
Shape55 := Shape17;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
HAnimSegment52.AddChildren([Transform54]);
HAnimSite56 := THAnimSiteNode.Create;
HAnimSite56.NameField := 'SEGMENT_FOR_l_thigh_tip';
Transform57 := TTransformNode.Create;
Transform57.Translation := Vector3(0.0945,-0.1202,0.8181);
Shape58 := Shape12;
{ .AddChild }
Transform57.AddChildren([Shape58]);
{ .AddChildren }
HAnimSite56.AddChildren([Transform57]);
{ .AddChildren }
HAnimSegment52.AddChildren([HAnimSite56]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimSegment52]);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.NameField := 'l_calf';
HAnimJoint59.Center := Vector3(0.0924,-0.1213,0.4003);
HAnimSegment60 := THAnimSegmentNode.Create;
HAnimSegment60.NameField := 'SEGMENT_FOR_l_calf';
TouchSensor61 := TTouchSensorNode.Create;
TouchSensor61.Description := 'joint l_calf segment SEGMENT_FOR_l_calf';
{ .AddChildren }
HAnimSegment60.AddChildren([TouchSensor61]);
Transform62 := TTransformNode.Create;
Transform62.Translation := Vector3(0.0924,-0.1213,0.4003);
Shape63 := Shape17;
{ .AddChild }
Transform62.AddChildren([Shape63]);
{ .AddChildren }
HAnimSegment60.AddChildren([Transform62]);
HAnimSite64 := THAnimSiteNode.Create;
HAnimSite64.NameField := 'SEGMENT_FOR_l_calf_tip';
Transform65 := TTransformNode.Create;
Transform65.Translation := Vector3(0.0924,-0.1213,0.4003);
Shape66 := Shape12;
{ .AddChild }
Transform65.AddChildren([Shape66]);
{ .AddChildren }
HAnimSite64.AddChildren([Transform65]);
{ .AddChildren }
HAnimSegment60.AddChildren([HAnimSite64]);
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimSegment60]);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.NameField := 'l_talus';
HAnimJoint67.Center := Vector3(0.0886,-0.1123,0.0869);
HAnimSegment68 := THAnimSegmentNode.Create;
HAnimSegment68.NameField := 'SEGMENT_FOR_l_talus';
TouchSensor69 := TTouchSensorNode.Create;
TouchSensor69.Description := 'joint l_talus segment SEGMENT_FOR_l_talus';
{ .AddChildren }
HAnimSegment68.AddChildren([TouchSensor69]);
Transform70 := TTransformNode.Create;
Transform70.Translation := Vector3(0.0886,-0.1123,0.0869);
Shape71 := Shape17;
{ .AddChild }
Transform70.AddChildren([Shape71]);
{ .AddChildren }
HAnimSegment68.AddChildren([Transform70]);
HAnimSite72 := THAnimSiteNode.Create;
HAnimSite72.NameField := 'SEGMENT_FOR_l_talus_tip';
Transform73 := TTransformNode.Create;
Transform73.Translation := Vector3(0.0886,-0.1123,0.0869);
Shape74 := Shape12;
{ .AddChild }
Transform73.AddChildren([Shape74]);
{ .AddChildren }
HAnimSite72.AddChildren([Transform73]);
{ .AddChildren }
HAnimSegment68.AddChildren([HAnimSite72]);
{ .AddChildren }
HAnimJoint67.AddChildren([HAnimSegment68]);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.NameField := 'l_navicular';
HAnimJoint75.Center := Vector3(0.0781,-0.097,0.0283);
HAnimSegment76 := THAnimSegmentNode.Create;
HAnimSegment76.NameField := 'SEGMENT_FOR_l_navicular';
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'joint l_navicular segment SEGMENT_FOR_l_navicular';
{ .AddChildren }
HAnimSegment76.AddChildren([TouchSensor77]);
Transform78 := TTransformNode.Create;
Transform78.Translation := Vector3(0.0781,-0.097,0.0283);
Shape79 := Shape17;
{ .AddChild }
Transform78.AddChildren([Shape79]);
{ .AddChildren }
HAnimSegment76.AddChildren([Transform78]);
HAnimSite80 := THAnimSiteNode.Create;
HAnimSite80.NameField := 'SEGMENT_FOR_l_navicular_tip';
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(0.0781,-0.097,0.0283);
Shape82 := Shape12;
{ .AddChild }
Transform81.AddChildren([Shape82]);
{ .AddChildren }
HAnimSite80.AddChildren([Transform81]);
{ .AddChildren }
HAnimSegment76.AddChildren([HAnimSite80]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimSegment76]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'l_cuneiform_1';
HAnimJoint83.Center := Vector3(0.0672,-0.0835,0.0235);
HAnimSegment84 := THAnimSegmentNode.Create;
HAnimSegment84.NameField := 'SEGMENT_FOR_l_cuneiform_1';
TouchSensor85 := TTouchSensorNode.Create;
TouchSensor85.Description := 'joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1';
{ .AddChildren }
HAnimSegment84.AddChildren([TouchSensor85]);
Transform86 := TTransformNode.Create;
Transform86.Translation := Vector3(0.0672,-0.0835,0.0235);
Shape87 := Shape17;
{ .AddChild }
Transform86.AddChildren([Shape87]);
{ .AddChildren }
HAnimSegment84.AddChildren([Transform86]);
HAnimSite88 := THAnimSiteNode.Create;
HAnimSite88.NameField := 'SEGMENT_FOR_l_cuneiform_1_tip';
Transform89 := TTransformNode.Create;
Transform89.Translation := Vector3(0.0672,-0.0835,0.0235);
Shape90 := Shape12;
{ .AddChild }
Transform89.AddChildren([Shape90]);
{ .AddChildren }
HAnimSite88.AddChildren([Transform89]);
{ .AddChildren }
HAnimSegment84.AddChildren([HAnimSite88]);
{ .AddChildren }
HAnimJoint83.AddChildren([HAnimSegment84]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'l_metatarsal_1';
HAnimJoint91.Center := Vector3(0.0644,-0.0577,0.0147);
HAnimSegment92 := THAnimSegmentNode.Create;
HAnimSegment92.NameField := 'SEGMENT_FOR_l_metatarsal_1';
TouchSensor93 := TTouchSensorNode.Create;
TouchSensor93.Description := 'joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1';
{ .AddChildren }
HAnimSegment92.AddChildren([TouchSensor93]);
Transform94 := TTransformNode.Create;
Transform94.Translation := Vector3(0.0644,-0.0577,0.0147);
Shape95 := Shape17;
{ .AddChild }
Transform94.AddChildren([Shape95]);
{ .AddChildren }
HAnimSegment92.AddChildren([Transform94]);
HAnimSite96 := THAnimSiteNode.Create;
HAnimSite96.NameField := 'SEGMENT_FOR_l_metatarsal_1_tip';
Transform97 := TTransformNode.Create;
Transform97.Translation := Vector3(0.0644,-0.0577,0.0147);
Shape98 := Shape12;
{ .AddChild }
Transform97.AddChildren([Shape98]);
{ .AddChildren }
HAnimSite96.AddChildren([Transform97]);
{ .AddChildren }
HAnimSegment92.AddChildren([HAnimSite96]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimSegment92]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'l_tarsal_proximal_phalanx_1';
HAnimJoint99.Center := Vector3(0.0619,-0.0083,0.0059);
HAnimSegment100 := THAnimSegmentNode.Create;
HAnimSegment100.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_1';
TouchSensor101 := TTouchSensorNode.Create;
TouchSensor101.Description := 'joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment100.AddChildren([TouchSensor101]);
Transform102 := TTransformNode.Create;
Transform102.Translation := Vector3(0.0619,-0.0083,0.0059);
Shape103 := Shape17;
{ .AddChild }
Transform102.AddChildren([Shape103]);
{ .AddChildren }
HAnimSegment100.AddChildren([Transform102]);
HAnimSite104 := THAnimSiteNode.Create;
HAnimSite104.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip';
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(0.0619,-0.0083,0.0059);
Shape106 := Shape12;
{ .AddChild }
Transform105.AddChildren([Shape106]);
{ .AddChildren }
HAnimSite104.AddChildren([Transform105]);
{ .AddChildren }
HAnimSegment100.AddChildren([HAnimSite104]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimSegment100]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.NameField := 'l_tarsal_distal_phalanx_1';
HAnimSegment108 := THAnimSegmentNode.Create;
HAnimSegment108.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_1';
TouchSensor109 := TTouchSensorNode.Create;
TouchSensor109.Description := 'joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment108.AddChildren([TouchSensor109]);
Transform110 := TTransformNode.Create;
Shape111 := Shape17;
{ .AddChild }
Transform110.AddChildren([Shape111]);
{ .AddChildren }
HAnimSegment108.AddChildren([Transform110]);
HAnimSite112 := THAnimSiteNode.Create;
HAnimSite112.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip';
Transform113 := TTransformNode.Create;
Shape114 := Shape12;
{ .AddChild }
Transform113.AddChildren([Shape114]);
{ .AddChildren }
HAnimSite112.AddChildren([Transform113]);
{ .AddChildren }
HAnimSegment108.AddChildren([HAnimSite112]);
{ .AddChildren }
HAnimJoint107.AddChildren([HAnimSegment108]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimJoint107]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint99]);
{ .AddChildren }
HAnimJoint83.AddChildren([HAnimJoint91]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint83]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'l_cuneiform_2';
HAnimJoint115.Center := Vector3(0.0812,-0.0805,0.025);
HAnimSegment116 := THAnimSegmentNode.Create;
HAnimSegment116.NameField := 'SEGMENT_FOR_l_cuneiform_2';
TouchSensor117 := TTouchSensorNode.Create;
TouchSensor117.Description := 'joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2';
{ .AddChildren }
HAnimSegment116.AddChildren([TouchSensor117]);
Transform118 := TTransformNode.Create;
Transform118.Translation := Vector3(0.0812,-0.0805,0.025);
Shape119 := Shape17;
{ .AddChild }
Transform118.AddChildren([Shape119]);
{ .AddChildren }
HAnimSegment116.AddChildren([Transform118]);
HAnimSite120 := THAnimSiteNode.Create;
HAnimSite120.NameField := 'SEGMENT_FOR_l_cuneiform_2_tip';
Transform121 := TTransformNode.Create;
Transform121.Translation := Vector3(0.0812,-0.0805,0.025);
Shape122 := Shape12;
{ .AddChild }
Transform121.AddChildren([Shape122]);
{ .AddChildren }
HAnimSite120.AddChildren([Transform121]);
{ .AddChildren }
HAnimSegment116.AddChildren([HAnimSite120]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimSegment116]);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'l_metatarsal_2';
HAnimJoint123.Center := Vector3(0.08,-0.0608,0.0175);
HAnimSegment124 := THAnimSegmentNode.Create;
HAnimSegment124.NameField := 'SEGMENT_FOR_l_metatarsal_2';
TouchSensor125 := TTouchSensorNode.Create;
TouchSensor125.Description := 'joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2';
{ .AddChildren }
HAnimSegment124.AddChildren([TouchSensor125]);
Transform126 := TTransformNode.Create;
Transform126.Translation := Vector3(0.08,-0.0608,0.0175);
Shape127 := Shape17;
{ .AddChild }
Transform126.AddChildren([Shape127]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform126]);
HAnimSite128 := THAnimSiteNode.Create;
HAnimSite128.NameField := 'SEGMENT_FOR_l_metatarsal_2_tip';
Transform129 := TTransformNode.Create;
Transform129.Translation := Vector3(0.08,-0.0608,0.0175);
Shape130 := Shape12;
{ .AddChild }
Transform129.AddChildren([Shape130]);
{ .AddChildren }
HAnimSite128.AddChildren([Transform129]);
{ .AddChildren }
HAnimSegment124.AddChildren([HAnimSite128]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimSegment124]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.NameField := 'l_tarsal_proximal_phalanx_2';
HAnimJoint131.Center := Vector3(0.0824,-0.004,0.0064);
HAnimSegment132 := THAnimSegmentNode.Create;
HAnimSegment132.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_2';
TouchSensor133 := TTouchSensorNode.Create;
TouchSensor133.Description := 'joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment132.AddChildren([TouchSensor133]);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(0.0824,-0.004,0.0064);
Shape135 := Shape17;
{ .AddChild }
Transform134.AddChildren([Shape135]);
{ .AddChildren }
HAnimSegment132.AddChildren([Transform134]);
HAnimSite136 := THAnimSiteNode.Create;
HAnimSite136.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip';
Transform137 := TTransformNode.Create;
Transform137.Translation := Vector3(0.0824,-0.004,0.0064);
Shape138 := Shape12;
{ .AddChild }
Transform137.AddChildren([Shape138]);
{ .AddChildren }
HAnimSite136.AddChildren([Transform137]);
{ .AddChildren }
HAnimSegment132.AddChildren([HAnimSite136]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimSegment132]);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.NameField := 'l_tarsal_middle_phalanx_2';
HAnimJoint139.Center := Vector3(0.0841,0.0121,0.0041);
HAnimSegment140 := THAnimSegmentNode.Create;
HAnimSegment140.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_2';
TouchSensor141 := TTouchSensorNode.Create;
TouchSensor141.Description := 'joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment140.AddChildren([TouchSensor141]);
Transform142 := TTransformNode.Create;
Transform142.Translation := Vector3(0.0841,0.0121,0.0041);
Shape143 := Shape17;
{ .AddChild }
Transform142.AddChildren([Shape143]);
{ .AddChildren }
HAnimSegment140.AddChildren([Transform142]);
HAnimSite144 := THAnimSiteNode.Create;
HAnimSite144.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip';
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0.0841,0.0121,0.0041);
Shape146 := Shape12;
{ .AddChild }
Transform145.AddChildren([Shape146]);
{ .AddChildren }
HAnimSite144.AddChildren([Transform145]);
{ .AddChildren }
HAnimSegment140.AddChildren([HAnimSite144]);
{ .AddChildren }
HAnimJoint139.AddChildren([HAnimSegment140]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'l_tarsal_distal_phalanx_2';
HAnimJoint147.Center := Vector3(0.0841,0.0216,0.0013);
HAnimSegment148 := THAnimSegmentNode.Create;
HAnimSegment148.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_2';
TouchSensor149 := TTouchSensorNode.Create;
TouchSensor149.Description := 'joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment148.AddChildren([TouchSensor149]);
Transform150 := TTransformNode.Create;
Transform150.Translation := Vector3(0.0841,0.0216,0.0013);
Shape151 := Shape17;
{ .AddChild }
Transform150.AddChildren([Shape151]);
{ .AddChildren }
HAnimSegment148.AddChildren([Transform150]);
HAnimSite152 := THAnimSiteNode.Create;
HAnimSite152.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip';
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(0.0841,0.0216,0.0013);
Shape154 := Shape12;
{ .AddChild }
Transform153.AddChildren([Shape154]);
{ .AddChildren }
HAnimSite152.AddChildren([Transform153]);
{ .AddChildren }
HAnimSegment148.AddChildren([HAnimSite152]);
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimSegment148]);
{ .AddChildren }
HAnimJoint139.AddChildren([HAnimJoint147]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimJoint139]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimJoint131]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimJoint123]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint115]);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.NameField := 'l_cuneiform_3';
HAnimJoint155.Center := Vector3(0.0928,-0.0821,0.0248);
HAnimSegment156 := THAnimSegmentNode.Create;
HAnimSegment156.NameField := 'SEGMENT_FOR_l_cuneiform_3';
TouchSensor157 := TTouchSensorNode.Create;
TouchSensor157.Description := 'joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3';
{ .AddChildren }
HAnimSegment156.AddChildren([TouchSensor157]);
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(0.0928,-0.0821,0.0248);
Shape159 := Shape17;
{ .AddChild }
Transform158.AddChildren([Shape159]);
{ .AddChildren }
HAnimSegment156.AddChildren([Transform158]);
HAnimSite160 := THAnimSiteNode.Create;
HAnimSite160.NameField := 'SEGMENT_FOR_l_cuneiform_3_tip';
Transform161 := TTransformNode.Create;
Transform161.Translation := Vector3(0.0928,-0.0821,0.0248);
Shape162 := Shape12;
{ .AddChild }
Transform161.AddChildren([Shape162]);
{ .AddChildren }
HAnimSite160.AddChildren([Transform161]);
{ .AddChildren }
HAnimSegment156.AddChildren([HAnimSite160]);
{ .AddChildren }
HAnimJoint155.AddChildren([HAnimSegment156]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.NameField := 'l_metatarsal_3';
HAnimJoint163.Center := Vector3(0.0944,-0.0625,0.0175);
HAnimSegment164 := THAnimSegmentNode.Create;
HAnimSegment164.NameField := 'SEGMENT_FOR_l_metatarsal_3';
TouchSensor165 := TTouchSensorNode.Create;
TouchSensor165.Description := 'joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3';
{ .AddChildren }
HAnimSegment164.AddChildren([TouchSensor165]);
Transform166 := TTransformNode.Create;
Transform166.Translation := Vector3(0.0944,-0.0625,0.0175);
Shape167 := Shape17;
{ .AddChild }
Transform166.AddChildren([Shape167]);
{ .AddChildren }
HAnimSegment164.AddChildren([Transform166]);
HAnimSite168 := THAnimSiteNode.Create;
HAnimSite168.NameField := 'SEGMENT_FOR_l_metatarsal_3_tip';
Transform169 := TTransformNode.Create;
Transform169.Translation := Vector3(0.0944,-0.0625,0.0175);
Shape170 := Shape12;
{ .AddChild }
Transform169.AddChildren([Shape170]);
{ .AddChildren }
HAnimSite168.AddChildren([Transform169]);
{ .AddChildren }
HAnimSegment164.AddChildren([HAnimSite168]);
{ .AddChildren }
HAnimJoint163.AddChildren([HAnimSegment164]);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.NameField := 'l_tarsal_proximal_phalanx_3';
HAnimJoint171.Center := Vector3(0.0963,-0.0065,0.0065);
HAnimSegment172 := THAnimSegmentNode.Create;
HAnimSegment172.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_3';
TouchSensor173 := TTouchSensorNode.Create;
TouchSensor173.Description := 'joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment172.AddChildren([TouchSensor173]);
Transform174 := TTransformNode.Create;
Transform174.Translation := Vector3(0.0963,-0.0065,0.0065);
Shape175 := Shape17;
{ .AddChild }
Transform174.AddChildren([Shape175]);
{ .AddChildren }
HAnimSegment172.AddChildren([Transform174]);
HAnimSite176 := THAnimSiteNode.Create;
HAnimSite176.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip';
Transform177 := TTransformNode.Create;
Transform177.Translation := Vector3(0.0963,-0.0065,0.0065);
Shape178 := Shape12;
{ .AddChild }
Transform177.AddChildren([Shape178]);
{ .AddChildren }
HAnimSite176.AddChildren([Transform177]);
{ .AddChildren }
HAnimSegment172.AddChildren([HAnimSite176]);
{ .AddChildren }
HAnimJoint171.AddChildren([HAnimSegment172]);
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179.NameField := 'l_tarsal_middle_phalanx_3';
HAnimJoint179.Center := Vector3(0.0987,0.0086,0.0034);
HAnimSegment180 := THAnimSegmentNode.Create;
HAnimSegment180.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_3';
TouchSensor181 := TTouchSensorNode.Create;
TouchSensor181.Description := 'joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment180.AddChildren([TouchSensor181]);
Transform182 := TTransformNode.Create;
Transform182.Translation := Vector3(0.0987,0.0086,0.0034);
Shape183 := Shape17;
{ .AddChild }
Transform182.AddChildren([Shape183]);
{ .AddChildren }
HAnimSegment180.AddChildren([Transform182]);
HAnimSite184 := THAnimSiteNode.Create;
HAnimSite184.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip';
Transform185 := TTransformNode.Create;
Transform185.Translation := Vector3(0.0987,0.0086,0.0034);
Shape186 := Shape12;
{ .AddChild }
Transform185.AddChildren([Shape186]);
{ .AddChildren }
HAnimSite184.AddChildren([Transform185]);
{ .AddChildren }
HAnimSegment180.AddChildren([HAnimSite184]);
{ .AddChildren }
HAnimJoint179.AddChildren([HAnimSegment180]);
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187.NameField := 'l_tarsal_distal_phalanx_3';
HAnimJoint187.Center := Vector3(0.1002,0.0178,0.0013);
HAnimSegment188 := THAnimSegmentNode.Create;
HAnimSegment188.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_3';
TouchSensor189 := TTouchSensorNode.Create;
TouchSensor189.Description := 'joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment188.AddChildren([TouchSensor189]);
Transform190 := TTransformNode.Create;
Transform190.Translation := Vector3(0.1002,0.0178,0.0013);
Shape191 := Shape17;
{ .AddChild }
Transform190.AddChildren([Shape191]);
{ .AddChildren }
HAnimSegment188.AddChildren([Transform190]);
HAnimSite192 := THAnimSiteNode.Create;
HAnimSite192.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip';
Transform193 := TTransformNode.Create;
Transform193.Translation := Vector3(0.1002,0.0178,0.0013);
Shape194 := Shape12;
{ .AddChild }
Transform193.AddChildren([Shape194]);
{ .AddChildren }
HAnimSite192.AddChildren([Transform193]);
{ .AddChildren }
HAnimSegment188.AddChildren([HAnimSite192]);
{ .AddChildren }
HAnimJoint187.AddChildren([HAnimSegment188]);
{ .AddChildren }
HAnimJoint179.AddChildren([HAnimJoint187]);
{ .AddChildren }
HAnimJoint171.AddChildren([HAnimJoint179]);
{ .AddChildren }
HAnimJoint163.AddChildren([HAnimJoint171]);
{ .AddChildren }
HAnimJoint155.AddChildren([HAnimJoint163]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint155]);
{ .AddChildren }
HAnimJoint67.AddChildren([HAnimJoint75]);
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195.NameField := 'l_calcaneus';
HAnimJoint195.Center := Vector3(0.0889,-0.1278,0.0494);
HAnimSegment196 := THAnimSegmentNode.Create;
HAnimSegment196.NameField := 'SEGMENT_FOR_l_calcaneus';
TouchSensor197 := TTouchSensorNode.Create;
TouchSensor197.Description := 'joint l_calcaneus segment SEGMENT_FOR_l_calcaneus';
{ .AddChildren }
HAnimSegment196.AddChildren([TouchSensor197]);
Transform198 := TTransformNode.Create;
Transform198.Translation := Vector3(0.0889,-0.1278,0.0494);
Shape199 := Shape17;
{ .AddChild }
Transform198.AddChildren([Shape199]);
{ .AddChildren }
HAnimSegment196.AddChildren([Transform198]);
HAnimSite200 := THAnimSiteNode.Create;
HAnimSite200.NameField := 'SEGMENT_FOR_l_calcaneus_tip';
Transform201 := TTransformNode.Create;
Transform201.Translation := Vector3(0.0889,-0.1278,0.0494);
Shape202 := Shape12;
{ .AddChild }
Transform201.AddChildren([Shape202]);
{ .AddChildren }
HAnimSite200.AddChildren([Transform201]);
{ .AddChildren }
HAnimSegment196.AddChildren([HAnimSite200]);
{ .AddChildren }
HAnimJoint195.AddChildren([HAnimSegment196]);
HAnimJoint203 := THAnimJointNode.Create;
HAnimJoint203.NameField := 'l_cuboid';
HAnimJoint203.Center := Vector3(0.1105,-0.0998,0.0267);
HAnimSegment204 := THAnimSegmentNode.Create;
HAnimSegment204.NameField := 'SEGMENT_FOR_l_cuboid';
TouchSensor205 := TTouchSensorNode.Create;
TouchSensor205.Description := 'joint l_cuboid segment SEGMENT_FOR_l_cuboid';
{ .AddChildren }
HAnimSegment204.AddChildren([TouchSensor205]);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(0.1105,-0.0998,0.0267);
Shape207 := Shape17;
{ .AddChild }
Transform206.AddChildren([Shape207]);
{ .AddChildren }
HAnimSegment204.AddChildren([Transform206]);
HAnimSite208 := THAnimSiteNode.Create;
HAnimSite208.NameField := 'SEGMENT_FOR_l_cuboid_tip';
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(0.1105,-0.0998,0.0267);
Shape210 := Shape12;
{ .AddChild }
Transform209.AddChildren([Shape210]);
{ .AddChildren }
HAnimSite208.AddChildren([Transform209]);
{ .AddChildren }
HAnimSegment204.AddChildren([HAnimSite208]);
{ .AddChildren }
HAnimJoint203.AddChildren([HAnimSegment204]);
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211.NameField := 'l_metatarsal_4';
HAnimJoint211.Center := Vector3(0.1063,-0.0634,0.016);
HAnimSegment212 := THAnimSegmentNode.Create;
HAnimSegment212.NameField := 'SEGMENT_FOR_l_metatarsal_4';
TouchSensor213 := TTouchSensorNode.Create;
TouchSensor213.Description := 'joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4';
{ .AddChildren }
HAnimSegment212.AddChildren([TouchSensor213]);
Transform214 := TTransformNode.Create;
Transform214.Translation := Vector3(0.1063,-0.0634,0.016);
Shape215 := Shape17;
{ .AddChild }
Transform214.AddChildren([Shape215]);
{ .AddChildren }
HAnimSegment212.AddChildren([Transform214]);
HAnimSite216 := THAnimSiteNode.Create;
HAnimSite216.NameField := 'SEGMENT_FOR_l_metatarsal_4_tip';
Transform217 := TTransformNode.Create;
Transform217.Translation := Vector3(0.1063,-0.0634,0.016);
Shape218 := Shape12;
{ .AddChild }
Transform217.AddChildren([Shape218]);
{ .AddChildren }
HAnimSite216.AddChildren([Transform217]);
{ .AddChildren }
HAnimSegment212.AddChildren([HAnimSite216]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimSegment212]);
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219.NameField := 'l_tarsal_proximal_phalanx_4';
HAnimJoint219.Center := Vector3(0.1097,-0.0107,0.0058);
HAnimSegment220 := THAnimSegmentNode.Create;
HAnimSegment220.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_4';
TouchSensor221 := TTouchSensorNode.Create;
TouchSensor221.Description := 'joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment220.AddChildren([TouchSensor221]);
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.1097,-0.0107,0.0058);
Shape223 := Shape17;
{ .AddChild }
Transform222.AddChildren([Shape223]);
{ .AddChildren }
HAnimSegment220.AddChildren([Transform222]);
HAnimSite224 := THAnimSiteNode.Create;
HAnimSite224.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip';
Transform225 := TTransformNode.Create;
Transform225.Translation := Vector3(0.1097,-0.0107,0.0058);
Shape226 := Shape12;
{ .AddChild }
Transform225.AddChildren([Shape226]);
{ .AddChildren }
HAnimSite224.AddChildren([Transform225]);
{ .AddChildren }
HAnimSegment220.AddChildren([HAnimSite224]);
{ .AddChildren }
HAnimJoint219.AddChildren([HAnimSegment220]);
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227.NameField := 'l_tarsal_middle_phalanx_4';
HAnimJoint227.Center := Vector3(0.114,0.0044,0.0037);
HAnimSegment228 := THAnimSegmentNode.Create;
HAnimSegment228.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_4';
TouchSensor229 := TTouchSensorNode.Create;
TouchSensor229.Description := 'joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment228.AddChildren([TouchSensor229]);
Transform230 := TTransformNode.Create;
Transform230.Translation := Vector3(0.114,0.0044,0.0037);
Shape231 := Shape17;
{ .AddChild }
Transform230.AddChildren([Shape231]);
{ .AddChildren }
HAnimSegment228.AddChildren([Transform230]);
HAnimSite232 := THAnimSiteNode.Create;
HAnimSite232.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip';
Transform233 := TTransformNode.Create;
Transform233.Translation := Vector3(0.114,0.0044,0.0037);
Shape234 := Shape12;
{ .AddChild }
Transform233.AddChildren([Shape234]);
{ .AddChildren }
HAnimSite232.AddChildren([Transform233]);
{ .AddChildren }
HAnimSegment228.AddChildren([HAnimSite232]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimSegment228]);
HAnimJoint235 := THAnimJointNode.Create;
HAnimJoint235.NameField := 'l_tarsal_distal_phalanx_4';
HAnimJoint235.Center := Vector3(0.1155,0.0118,0.0008);
HAnimSegment236 := THAnimSegmentNode.Create;
HAnimSegment236.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_4';
TouchSensor237 := TTouchSensorNode.Create;
TouchSensor237.Description := 'joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment236.AddChildren([TouchSensor237]);
Transform238 := TTransformNode.Create;
Transform238.Translation := Vector3(0.1155,0.0118,0.0008);
Shape239 := Shape17;
{ .AddChild }
Transform238.AddChildren([Shape239]);
{ .AddChildren }
HAnimSegment236.AddChildren([Transform238]);
HAnimSite240 := THAnimSiteNode.Create;
HAnimSite240.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip';
Transform241 := TTransformNode.Create;
Transform241.Translation := Vector3(0.1155,0.0118,0.0008);
Shape242 := Shape12;
{ .AddChild }
Transform241.AddChildren([Shape242]);
{ .AddChildren }
HAnimSite240.AddChildren([Transform241]);
{ .AddChildren }
HAnimSegment236.AddChildren([HAnimSite240]);
{ .AddChildren }
HAnimJoint235.AddChildren([HAnimSegment236]);
{ .AddChildren }
HAnimJoint227.AddChildren([HAnimJoint235]);
{ .AddChildren }
HAnimJoint219.AddChildren([HAnimJoint227]);
{ .AddChildren }
HAnimJoint211.AddChildren([HAnimJoint219]);
{ .AddChildren }
HAnimJoint203.AddChildren([HAnimJoint211]);
HAnimJoint243 := THAnimJointNode.Create;
HAnimJoint243.NameField := 'l_metatarsal_5';
HAnimJoint243.Center := Vector3(0.1206,-0.0671,0.0124);
HAnimSegment244 := THAnimSegmentNode.Create;
HAnimSegment244.NameField := 'SEGMENT_FOR_l_metatarsal_5';
TouchSensor245 := TTouchSensorNode.Create;
TouchSensor245.Description := 'joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5';
{ .AddChildren }
HAnimSegment244.AddChildren([TouchSensor245]);
Transform246 := TTransformNode.Create;
Transform246.Translation := Vector3(0.1206,-0.0671,0.0124);
Shape247 := Shape17;
{ .AddChild }
Transform246.AddChildren([Shape247]);
{ .AddChildren }
HAnimSegment244.AddChildren([Transform246]);
HAnimSite248 := THAnimSiteNode.Create;
HAnimSite248.NameField := 'SEGMENT_FOR_l_metatarsal_5_tip';
Transform249 := TTransformNode.Create;
Transform249.Translation := Vector3(0.1206,-0.0671,0.0124);
Shape250 := Shape12;
{ .AddChild }
Transform249.AddChildren([Shape250]);
{ .AddChildren }
HAnimSite248.AddChildren([Transform249]);
{ .AddChildren }
HAnimSegment244.AddChildren([HAnimSite248]);
{ .AddChildren }
HAnimJoint243.AddChildren([HAnimSegment244]);
HAnimJoint251 := THAnimJointNode.Create;
HAnimJoint251.NameField := 'l_tarsal_proximal_phalanx_5';
HAnimJoint251.Center := Vector3(0.1239,-0.0153,0.0051);
HAnimSegment252 := THAnimSegmentNode.Create;
HAnimSegment252.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_5';
TouchSensor253 := TTouchSensorNode.Create;
TouchSensor253.Description := 'joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment252.AddChildren([TouchSensor253]);
Transform254 := TTransformNode.Create;
Transform254.Translation := Vector3(0.1239,-0.0153,0.0051);
Shape255 := Shape17;
{ .AddChild }
Transform254.AddChildren([Shape255]);
{ .AddChildren }
HAnimSegment252.AddChildren([Transform254]);
HAnimSite256 := THAnimSiteNode.Create;
HAnimSite256.NameField := 'SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip';
Transform257 := TTransformNode.Create;
Transform257.Translation := Vector3(0.1239,-0.0153,0.0051);
Shape258 := Shape12;
{ .AddChild }
Transform257.AddChildren([Shape258]);
{ .AddChildren }
HAnimSite256.AddChildren([Transform257]);
{ .AddChildren }
HAnimSegment252.AddChildren([HAnimSite256]);
{ .AddChildren }
HAnimJoint251.AddChildren([HAnimSegment252]);
HAnimJoint259 := THAnimJointNode.Create;
HAnimJoint259.NameField := 'l_tarsal_middle_phalanx_5';
HAnimJoint259.Center := Vector3(0.1262,-0.0077,0.0023);
HAnimSegment260 := THAnimSegmentNode.Create;
HAnimSegment260.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_5';
TouchSensor261 := TTouchSensorNode.Create;
TouchSensor261.Description := 'joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment260.AddChildren([TouchSensor261]);
Transform262 := TTransformNode.Create;
Transform262.Translation := Vector3(0.1262,-0.0077,0.0023);
Shape263 := Shape17;
{ .AddChild }
Transform262.AddChildren([Shape263]);
{ .AddChildren }
HAnimSegment260.AddChildren([Transform262]);
HAnimSite264 := THAnimSiteNode.Create;
HAnimSite264.NameField := 'SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip';
Transform265 := TTransformNode.Create;
Transform265.Translation := Vector3(0.1262,-0.0077,0.0023);
Shape266 := Shape12;
{ .AddChild }
Transform265.AddChildren([Shape266]);
{ .AddChildren }
HAnimSite264.AddChildren([Transform265]);
{ .AddChildren }
HAnimSegment260.AddChildren([HAnimSite264]);
{ .AddChildren }
HAnimJoint259.AddChildren([HAnimSegment260]);
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267.NameField := 'l_tarsal_distal_phalanx_5';
HAnimJoint267.Center := Vector3(0.1271,0,0);
HAnimSegment268 := THAnimSegmentNode.Create;
HAnimSegment268.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_5';
TouchSensor269 := TTouchSensorNode.Create;
TouchSensor269.Description := 'joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment268.AddChildren([TouchSensor269]);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(0.1271,0,0);
Shape271 := Shape17;
{ .AddChild }
Transform270.AddChildren([Shape271]);
{ .AddChildren }
HAnimSegment268.AddChildren([Transform270]);
HAnimSite272 := THAnimSiteNode.Create;
HAnimSite272.NameField := 'SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip';
Transform273 := TTransformNode.Create;
Transform273.Translation := Vector3(0.1271,0,0);
Shape274 := Shape12;
{ .AddChild }
Transform273.AddChildren([Shape274]);
{ .AddChildren }
HAnimSite272.AddChildren([Transform273]);
{ .AddChildren }
HAnimSegment268.AddChildren([HAnimSite272]);
{ .AddChildren }
HAnimJoint267.AddChildren([HAnimSegment268]);
{ .AddChildren }
HAnimJoint259.AddChildren([HAnimJoint267]);
{ .AddChildren }
HAnimJoint251.AddChildren([HAnimJoint259]);
{ .AddChildren }
HAnimJoint243.AddChildren([HAnimJoint251]);
{ .AddChildren }
HAnimJoint203.AddChildren([HAnimJoint243]);
{ .AddChildren }
HAnimJoint195.AddChildren([HAnimJoint203]);
{ .AddChildren }
HAnimJoint67.AddChildren([HAnimJoint195]);
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimJoint67]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimJoint59]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint51]);
HAnimJoint275 := THAnimJointNode.Create;
HAnimJoint275.NameField := 'r_thigh';
HAnimJoint275.Center := Vector3(-0.0948,-0.1202,0.8181);
HAnimSegment276 := THAnimSegmentNode.Create;
HAnimSegment276.NameField := 'SEGMENT_FOR_r_thigh';
TouchSensor277 := TTouchSensorNode.Create;
TouchSensor277.Description := 'joint r_thigh segment SEGMENT_FOR_r_thigh';
{ .AddChildren }
HAnimSegment276.AddChildren([TouchSensor277]);
Transform278 := TTransformNode.Create;
Transform278.Translation := Vector3(-0.0948,-0.1202,0.8181);
Shape279 := Shape17;
{ .AddChild }
Transform278.AddChildren([Shape279]);
{ .AddChildren }
HAnimSegment276.AddChildren([Transform278]);
HAnimSite280 := THAnimSiteNode.Create;
HAnimSite280.NameField := 'SEGMENT_FOR_r_thigh_tip';
Transform281 := TTransformNode.Create;
Transform281.Translation := Vector3(-0.0948,-0.1202,0.8181);
Shape282 := Shape12;
{ .AddChild }
Transform281.AddChildren([Shape282]);
{ .AddChildren }
HAnimSite280.AddChildren([Transform281]);
{ .AddChildren }
HAnimSegment276.AddChildren([HAnimSite280]);
{ .AddChildren }
HAnimJoint275.AddChildren([HAnimSegment276]);
HAnimJoint283 := THAnimJointNode.Create;
HAnimJoint283.NameField := 'r_calf';
HAnimJoint283.Center := Vector3(-0.0928,-0.1213,0.4003);
HAnimSegment284 := THAnimSegmentNode.Create;
HAnimSegment284.NameField := 'SEGMENT_FOR_r_calf';
TouchSensor285 := TTouchSensorNode.Create;
TouchSensor285.Description := 'joint r_calf segment SEGMENT_FOR_r_calf';
{ .AddChildren }
HAnimSegment284.AddChildren([TouchSensor285]);
Transform286 := TTransformNode.Create;
Transform286.Translation := Vector3(-0.0928,-0.1213,0.4003);
Shape287 := Shape17;
{ .AddChild }
Transform286.AddChildren([Shape287]);
{ .AddChildren }
HAnimSegment284.AddChildren([Transform286]);
HAnimSite288 := THAnimSiteNode.Create;
HAnimSite288.NameField := 'SEGMENT_FOR_r_calf_tip';
Transform289 := TTransformNode.Create;
Transform289.Translation := Vector3(-0.0928,-0.1213,0.4003);
Shape290 := Shape12;
{ .AddChild }
Transform289.AddChildren([Shape290]);
{ .AddChildren }
HAnimSite288.AddChildren([Transform289]);
{ .AddChildren }
HAnimSegment284.AddChildren([HAnimSite288]);
{ .AddChildren }
HAnimJoint283.AddChildren([HAnimSegment284]);
HAnimJoint291 := THAnimJointNode.Create;
HAnimJoint291.NameField := 'r_talus';
HAnimJoint291.Center := Vector3(-0.0886,-0.1123,0.0869);
HAnimSegment292 := THAnimSegmentNode.Create;
HAnimSegment292.NameField := 'SEGMENT_FOR_r_talus';
TouchSensor293 := TTouchSensorNode.Create;
TouchSensor293.Description := 'joint r_talus segment SEGMENT_FOR_r_talus';
{ .AddChildren }
HAnimSegment292.AddChildren([TouchSensor293]);
Transform294 := TTransformNode.Create;
Transform294.Translation := Vector3(-0.0886,-0.1123,0.0869);
Shape295 := Shape17;
{ .AddChild }
Transform294.AddChildren([Shape295]);
{ .AddChildren }
HAnimSegment292.AddChildren([Transform294]);
HAnimSite296 := THAnimSiteNode.Create;
HAnimSite296.NameField := 'SEGMENT_FOR_r_talus_tip';
Transform297 := TTransformNode.Create;
Transform297.Translation := Vector3(-0.0886,-0.1123,0.0869);
Shape298 := Shape12;
{ .AddChild }
Transform297.AddChildren([Shape298]);
{ .AddChildren }
HAnimSite296.AddChildren([Transform297]);
{ .AddChildren }
HAnimSegment292.AddChildren([HAnimSite296]);
{ .AddChildren }
HAnimJoint291.AddChildren([HAnimSegment292]);
HAnimJoint299 := THAnimJointNode.Create;
HAnimJoint299.NameField := 'r_navicular';
HAnimJoint299.Center := Vector3(-0.0781,-0.097,0.0283);
HAnimSegment300 := THAnimSegmentNode.Create;
HAnimSegment300.NameField := 'SEGMENT_FOR_r_navicular';
TouchSensor301 := TTouchSensorNode.Create;
TouchSensor301.Description := 'joint r_navicular segment SEGMENT_FOR_r_navicular';
{ .AddChildren }
HAnimSegment300.AddChildren([TouchSensor301]);
Transform302 := TTransformNode.Create;
Transform302.Translation := Vector3(-0.0781,-0.097,0.0283);
Shape303 := Shape17;
{ .AddChild }
Transform302.AddChildren([Shape303]);
{ .AddChildren }
HAnimSegment300.AddChildren([Transform302]);
HAnimSite304 := THAnimSiteNode.Create;
HAnimSite304.NameField := 'SEGMENT_FOR_r_navicular_tip';
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(-0.0781,-0.097,0.0283);
Shape306 := Shape12;
{ .AddChild }
Transform305.AddChildren([Shape306]);
{ .AddChildren }
HAnimSite304.AddChildren([Transform305]);
{ .AddChildren }
HAnimSegment300.AddChildren([HAnimSite304]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimSegment300]);
HAnimJoint307 := THAnimJointNode.Create;
HAnimJoint307.NameField := 'r_cuneiform_1';
HAnimJoint307.Center := Vector3(-0.0672,-0.0835,0.0235);
HAnimSegment308 := THAnimSegmentNode.Create;
HAnimSegment308.NameField := 'SEGMENT_FOR_r_cuneiform_1';
TouchSensor309 := TTouchSensorNode.Create;
TouchSensor309.Description := 'joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1';
{ .AddChildren }
HAnimSegment308.AddChildren([TouchSensor309]);
Transform310 := TTransformNode.Create;
Transform310.Translation := Vector3(-0.0672,-0.0835,0.0235);
Shape311 := Shape17;
{ .AddChild }
Transform310.AddChildren([Shape311]);
{ .AddChildren }
HAnimSegment308.AddChildren([Transform310]);
HAnimSite312 := THAnimSiteNode.Create;
HAnimSite312.NameField := 'SEGMENT_FOR_r_cuneiform_1_tip';
Transform313 := TTransformNode.Create;
Transform313.Translation := Vector3(-0.0672,-0.0835,0.0235);
Shape314 := Shape12;
{ .AddChild }
Transform313.AddChildren([Shape314]);
{ .AddChildren }
HAnimSite312.AddChildren([Transform313]);
{ .AddChildren }
HAnimSegment308.AddChildren([HAnimSite312]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimSegment308]);
HAnimJoint315 := THAnimJointNode.Create;
HAnimJoint315.NameField := 'r_metatarsal_1';
HAnimJoint315.Center := Vector3(-0.0644,-0.0577,0.0147);
HAnimSegment316 := THAnimSegmentNode.Create;
HAnimSegment316.NameField := 'SEGMENT_FOR_r_metatarsal_1';
TouchSensor317 := TTouchSensorNode.Create;
TouchSensor317.Description := 'joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1';
{ .AddChildren }
HAnimSegment316.AddChildren([TouchSensor317]);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(-0.0644,-0.0577,0.0147);
Shape319 := Shape17;
{ .AddChild }
Transform318.AddChildren([Shape319]);
{ .AddChildren }
HAnimSegment316.AddChildren([Transform318]);
HAnimSite320 := THAnimSiteNode.Create;
HAnimSite320.NameField := 'SEGMENT_FOR_r_metatarsal_1_tip';
Transform321 := TTransformNode.Create;
Transform321.Translation := Vector3(-0.0644,-0.0577,0.0147);
Shape322 := Shape12;
{ .AddChild }
Transform321.AddChildren([Shape322]);
{ .AddChildren }
HAnimSite320.AddChildren([Transform321]);
{ .AddChildren }
HAnimSegment316.AddChildren([HAnimSite320]);
{ .AddChildren }
HAnimJoint315.AddChildren([HAnimSegment316]);
HAnimJoint323 := THAnimJointNode.Create;
HAnimJoint323.NameField := 'r_tarsal_proximal_phalanx_1';
HAnimJoint323.Center := Vector3(-0.0619,-0.0083,0.0059);
HAnimSegment324 := THAnimSegmentNode.Create;
HAnimSegment324.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_1';
TouchSensor325 := TTouchSensorNode.Create;
TouchSensor325.Description := 'joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment324.AddChildren([TouchSensor325]);
Transform326 := TTransformNode.Create;
Transform326.Translation := Vector3(-0.0619,-0.0083,0.0059);
Shape327 := Shape17;
{ .AddChild }
Transform326.AddChildren([Shape327]);
{ .AddChildren }
HAnimSegment324.AddChildren([Transform326]);
HAnimSite328 := THAnimSiteNode.Create;
HAnimSite328.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip';
Transform329 := TTransformNode.Create;
Transform329.Translation := Vector3(-0.0619,-0.0083,0.0059);
Shape330 := Shape12;
{ .AddChild }
Transform329.AddChildren([Shape330]);
{ .AddChildren }
HAnimSite328.AddChildren([Transform329]);
{ .AddChildren }
HAnimSegment324.AddChildren([HAnimSite328]);
{ .AddChildren }
HAnimJoint323.AddChildren([HAnimSegment324]);
HAnimJoint331 := THAnimJointNode.Create;
HAnimJoint331.NameField := 'r_tarsal_distal_phalanx_1';
HAnimSegment332 := THAnimSegmentNode.Create;
HAnimSegment332.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_1';
TouchSensor333 := TTouchSensorNode.Create;
TouchSensor333.Description := 'joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment332.AddChildren([TouchSensor333]);
Transform334 := TTransformNode.Create;
Shape335 := Shape17;
{ .AddChild }
Transform334.AddChildren([Shape335]);
{ .AddChildren }
HAnimSegment332.AddChildren([Transform334]);
HAnimSite336 := THAnimSiteNode.Create;
HAnimSite336.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip';
Transform337 := TTransformNode.Create;
Shape338 := Shape12;
{ .AddChild }
Transform337.AddChildren([Shape338]);
{ .AddChildren }
HAnimSite336.AddChildren([Transform337]);
{ .AddChildren }
HAnimSegment332.AddChildren([HAnimSite336]);
{ .AddChildren }
HAnimJoint331.AddChildren([HAnimSegment332]);
{ .AddChildren }
HAnimJoint323.AddChildren([HAnimJoint331]);
{ .AddChildren }
HAnimJoint315.AddChildren([HAnimJoint323]);
{ .AddChildren }
HAnimJoint307.AddChildren([HAnimJoint315]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimJoint307]);
HAnimJoint339 := THAnimJointNode.Create;
HAnimJoint339.NameField := 'r_cuneiform_2';
HAnimJoint339.Center := Vector3(-0.0812,-0.0805,0.025);
HAnimSegment340 := THAnimSegmentNode.Create;
HAnimSegment340.NameField := 'SEGMENT_FOR_r_cuneiform_2';
TouchSensor341 := TTouchSensorNode.Create;
TouchSensor341.Description := 'joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2';
{ .AddChildren }
HAnimSegment340.AddChildren([TouchSensor341]);
Transform342 := TTransformNode.Create;
Transform342.Translation := Vector3(-0.0812,-0.0805,0.025);
Shape343 := Shape17;
{ .AddChild }
Transform342.AddChildren([Shape343]);
{ .AddChildren }
HAnimSegment340.AddChildren([Transform342]);
HAnimSite344 := THAnimSiteNode.Create;
HAnimSite344.NameField := 'SEGMENT_FOR_r_cuneiform_2_tip';
Transform345 := TTransformNode.Create;
Transform345.Translation := Vector3(-0.0812,-0.0805,0.025);
Shape346 := Shape12;
{ .AddChild }
Transform345.AddChildren([Shape346]);
{ .AddChildren }
HAnimSite344.AddChildren([Transform345]);
{ .AddChildren }
HAnimSegment340.AddChildren([HAnimSite344]);
{ .AddChildren }
HAnimJoint339.AddChildren([HAnimSegment340]);
HAnimJoint347 := THAnimJointNode.Create;
HAnimJoint347.NameField := 'r_metatarsal_2';
HAnimJoint347.Center := Vector3(-0.08,-0.0608,0.0175);
HAnimSegment348 := THAnimSegmentNode.Create;
HAnimSegment348.NameField := 'SEGMENT_FOR_r_metatarsal_2';
TouchSensor349 := TTouchSensorNode.Create;
TouchSensor349.Description := 'joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2';
{ .AddChildren }
HAnimSegment348.AddChildren([TouchSensor349]);
Transform350 := TTransformNode.Create;
Transform350.Translation := Vector3(-0.08,-0.0608,0.0175);
Shape351 := Shape17;
{ .AddChild }
Transform350.AddChildren([Shape351]);
{ .AddChildren }
HAnimSegment348.AddChildren([Transform350]);
HAnimSite352 := THAnimSiteNode.Create;
HAnimSite352.NameField := 'SEGMENT_FOR_r_metatarsal_2_tip';
Transform353 := TTransformNode.Create;
Transform353.Translation := Vector3(-0.08,-0.0608,0.0175);
Shape354 := Shape12;
{ .AddChild }
Transform353.AddChildren([Shape354]);
{ .AddChildren }
HAnimSite352.AddChildren([Transform353]);
{ .AddChildren }
HAnimSegment348.AddChildren([HAnimSite352]);
{ .AddChildren }
HAnimJoint347.AddChildren([HAnimSegment348]);
HAnimJoint355 := THAnimJointNode.Create;
HAnimJoint355.NameField := 'r_tarsal_proximal_phalanx_2';
HAnimJoint355.Center := Vector3(-0.0823,-0.004,0.0064);
HAnimSegment356 := THAnimSegmentNode.Create;
HAnimSegment356.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_2';
TouchSensor357 := TTouchSensorNode.Create;
TouchSensor357.Description := 'joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment356.AddChildren([TouchSensor357]);
Transform358 := TTransformNode.Create;
Transform358.Translation := Vector3(-0.0823,-0.004,0.0064);
Shape359 := Shape17;
{ .AddChild }
Transform358.AddChildren([Shape359]);
{ .AddChildren }
HAnimSegment356.AddChildren([Transform358]);
HAnimSite360 := THAnimSiteNode.Create;
HAnimSite360.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip';
Transform361 := TTransformNode.Create;
Transform361.Translation := Vector3(-0.0823,-0.004,0.0064);
Shape362 := Shape12;
{ .AddChild }
Transform361.AddChildren([Shape362]);
{ .AddChildren }
HAnimSite360.AddChildren([Transform361]);
{ .AddChildren }
HAnimSegment356.AddChildren([HAnimSite360]);
{ .AddChildren }
HAnimJoint355.AddChildren([HAnimSegment356]);
HAnimJoint363 := THAnimJointNode.Create;
HAnimJoint363.NameField := 'r_tarsal_middle_phalanx_2';
HAnimJoint363.Center := Vector3(-0.0841,0.0121,0.0041);
HAnimSegment364 := THAnimSegmentNode.Create;
HAnimSegment364.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_2';
TouchSensor365 := TTouchSensorNode.Create;
TouchSensor365.Description := 'joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment364.AddChildren([TouchSensor365]);
Transform366 := TTransformNode.Create;
Transform366.Translation := Vector3(-0.0841,0.0121,0.0041);
Shape367 := Shape17;
{ .AddChild }
Transform366.AddChildren([Shape367]);
{ .AddChildren }
HAnimSegment364.AddChildren([Transform366]);
HAnimSite368 := THAnimSiteNode.Create;
HAnimSite368.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip';
Transform369 := TTransformNode.Create;
Transform369.Translation := Vector3(-0.0841,0.0121,0.0041);
Shape370 := Shape12;
{ .AddChild }
Transform369.AddChildren([Shape370]);
{ .AddChildren }
HAnimSite368.AddChildren([Transform369]);
{ .AddChildren }
HAnimSegment364.AddChildren([HAnimSite368]);
{ .AddChildren }
HAnimJoint363.AddChildren([HAnimSegment364]);
HAnimJoint371 := THAnimJointNode.Create;
HAnimJoint371.NameField := 'r_tarsal_distal_phalanx_2';
HAnimJoint371.Center := Vector3(-0.0841,0.0216,0.0013);
HAnimSegment372 := THAnimSegmentNode.Create;
HAnimSegment372.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_2';
TouchSensor373 := TTouchSensorNode.Create;
TouchSensor373.Description := 'joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment372.AddChildren([TouchSensor373]);
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(-0.0841,0.0216,0.0013);
Shape375 := Shape17;
{ .AddChild }
Transform374.AddChildren([Shape375]);
{ .AddChildren }
HAnimSegment372.AddChildren([Transform374]);
HAnimSite376 := THAnimSiteNode.Create;
HAnimSite376.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip';
Transform377 := TTransformNode.Create;
Transform377.Translation := Vector3(-0.0841,0.0216,0.0013);
Shape378 := Shape12;
{ .AddChild }
Transform377.AddChildren([Shape378]);
{ .AddChildren }
HAnimSite376.AddChildren([Transform377]);
{ .AddChildren }
HAnimSegment372.AddChildren([HAnimSite376]);
{ .AddChildren }
HAnimJoint371.AddChildren([HAnimSegment372]);
{ .AddChildren }
HAnimJoint363.AddChildren([HAnimJoint371]);
{ .AddChildren }
HAnimJoint355.AddChildren([HAnimJoint363]);
{ .AddChildren }
HAnimJoint347.AddChildren([HAnimJoint355]);
{ .AddChildren }
HAnimJoint339.AddChildren([HAnimJoint347]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimJoint339]);
HAnimJoint379 := THAnimJointNode.Create;
HAnimJoint379.NameField := 'r_cuneiform_3';
HAnimJoint379.Center := Vector3(-0.0928,-0.0821,0.0248);
HAnimSegment380 := THAnimSegmentNode.Create;
HAnimSegment380.NameField := 'SEGMENT_FOR_r_cuneiform_3';
TouchSensor381 := TTouchSensorNode.Create;
TouchSensor381.Description := 'joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3';
{ .AddChildren }
HAnimSegment380.AddChildren([TouchSensor381]);
Transform382 := TTransformNode.Create;
Transform382.Translation := Vector3(-0.0928,-0.0821,0.0248);
Shape383 := Shape17;
{ .AddChild }
Transform382.AddChildren([Shape383]);
{ .AddChildren }
HAnimSegment380.AddChildren([Transform382]);
HAnimSite384 := THAnimSiteNode.Create;
HAnimSite384.NameField := 'SEGMENT_FOR_r_cuneiform_3_tip';
Transform385 := TTransformNode.Create;
Transform385.Translation := Vector3(-0.0928,-0.0821,0.0248);
Shape386 := Shape12;
{ .AddChild }
Transform385.AddChildren([Shape386]);
{ .AddChildren }
HAnimSite384.AddChildren([Transform385]);
{ .AddChildren }
HAnimSegment380.AddChildren([HAnimSite384]);
{ .AddChildren }
HAnimJoint379.AddChildren([HAnimSegment380]);
HAnimJoint387 := THAnimJointNode.Create;
HAnimJoint387.NameField := 'r_metatarsal_3';
HAnimJoint387.Center := Vector3(-0.0944,-0.0625,0.0175);
HAnimSegment388 := THAnimSegmentNode.Create;
HAnimSegment388.NameField := 'SEGMENT_FOR_r_metatarsal_3';
TouchSensor389 := TTouchSensorNode.Create;
TouchSensor389.Description := 'joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3';
{ .AddChildren }
HAnimSegment388.AddChildren([TouchSensor389]);
Transform390 := TTransformNode.Create;
Transform390.Translation := Vector3(-0.0944,-0.0625,0.0175);
Shape391 := Shape17;
{ .AddChild }
Transform390.AddChildren([Shape391]);
{ .AddChildren }
HAnimSegment388.AddChildren([Transform390]);
HAnimSite392 := THAnimSiteNode.Create;
HAnimSite392.NameField := 'SEGMENT_FOR_r_metatarsal_3_tip';
Transform393 := TTransformNode.Create;
Transform393.Translation := Vector3(-0.0944,-0.0625,0.0175);
Shape394 := Shape12;
{ .AddChild }
Transform393.AddChildren([Shape394]);
{ .AddChildren }
HAnimSite392.AddChildren([Transform393]);
{ .AddChildren }
HAnimSegment388.AddChildren([HAnimSite392]);
{ .AddChildren }
HAnimJoint387.AddChildren([HAnimSegment388]);
HAnimJoint395 := THAnimJointNode.Create;
HAnimJoint395.NameField := 'r_tarsal_proximal_phalanx_3';
HAnimJoint395.Center := Vector3(-0.0963,-0.0065,0.0065);
HAnimSegment396 := THAnimSegmentNode.Create;
HAnimSegment396.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_3';
TouchSensor397 := TTouchSensorNode.Create;
TouchSensor397.Description := 'joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment396.AddChildren([TouchSensor397]);
Transform398 := TTransformNode.Create;
Transform398.Translation := Vector3(-0.0963,-0.0065,0.0065);
Shape399 := Shape17;
{ .AddChild }
Transform398.AddChildren([Shape399]);
{ .AddChildren }
HAnimSegment396.AddChildren([Transform398]);
HAnimSite400 := THAnimSiteNode.Create;
HAnimSite400.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip';
Transform401 := TTransformNode.Create;
Transform401.Translation := Vector3(-0.0963,-0.0065,0.0065);
Shape402 := Shape12;
{ .AddChild }
Transform401.AddChildren([Shape402]);
{ .AddChildren }
HAnimSite400.AddChildren([Transform401]);
{ .AddChildren }
HAnimSegment396.AddChildren([HAnimSite400]);
{ .AddChildren }
HAnimJoint395.AddChildren([HAnimSegment396]);
HAnimJoint403 := THAnimJointNode.Create;
HAnimJoint403.NameField := 'r_tarsal_middle_phalanx_3';
HAnimJoint403.Center := Vector3(-0.0987,0.0086,0.0034);
HAnimSegment404 := THAnimSegmentNode.Create;
HAnimSegment404.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_3';
TouchSensor405 := TTouchSensorNode.Create;
TouchSensor405.Description := 'joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment404.AddChildren([TouchSensor405]);
Transform406 := TTransformNode.Create;
Transform406.Translation := Vector3(-0.0987,0.0086,0.0034);
Shape407 := Shape17;
{ .AddChild }
Transform406.AddChildren([Shape407]);
{ .AddChildren }
HAnimSegment404.AddChildren([Transform406]);
HAnimSite408 := THAnimSiteNode.Create;
HAnimSite408.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip';
Transform409 := TTransformNode.Create;
Transform409.Translation := Vector3(-0.0987,0.0086,0.0034);
Shape410 := Shape12;
{ .AddChild }
Transform409.AddChildren([Shape410]);
{ .AddChildren }
HAnimSite408.AddChildren([Transform409]);
{ .AddChildren }
HAnimSegment404.AddChildren([HAnimSite408]);
{ .AddChildren }
HAnimJoint403.AddChildren([HAnimSegment404]);
HAnimJoint411 := THAnimJointNode.Create;
HAnimJoint411.NameField := 'r_tarsal_distal_phalanx_3';
HAnimJoint411.Center := Vector3(-0.1002,0.0178,0.0013);
HAnimSegment412 := THAnimSegmentNode.Create;
HAnimSegment412.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_3';
TouchSensor413 := TTouchSensorNode.Create;
TouchSensor413.Description := 'joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment412.AddChildren([TouchSensor413]);
Transform414 := TTransformNode.Create;
Transform414.Translation := Vector3(-0.1002,0.0178,0.0013);
Shape415 := Shape17;
{ .AddChild }
Transform414.AddChildren([Shape415]);
{ .AddChildren }
HAnimSegment412.AddChildren([Transform414]);
HAnimSite416 := THAnimSiteNode.Create;
HAnimSite416.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip';
Transform417 := TTransformNode.Create;
Transform417.Translation := Vector3(-0.1002,0.0178,0.0013);
Shape418 := Shape12;
{ .AddChild }
Transform417.AddChildren([Shape418]);
{ .AddChildren }
HAnimSite416.AddChildren([Transform417]);
{ .AddChildren }
HAnimSegment412.AddChildren([HAnimSite416]);
{ .AddChildren }
HAnimJoint411.AddChildren([HAnimSegment412]);
{ .AddChildren }
HAnimJoint403.AddChildren([HAnimJoint411]);
{ .AddChildren }
HAnimJoint395.AddChildren([HAnimJoint403]);
{ .AddChildren }
HAnimJoint387.AddChildren([HAnimJoint395]);
{ .AddChildren }
HAnimJoint379.AddChildren([HAnimJoint387]);
{ .AddChildren }
HAnimJoint299.AddChildren([HAnimJoint379]);
{ .AddChildren }
HAnimJoint291.AddChildren([HAnimJoint299]);
HAnimJoint419 := THAnimJointNode.Create;
HAnimJoint419.NameField := 'r_calcaneus';
HAnimJoint419.Center := Vector3(-0.0889,-0.1278,0.0494);
HAnimSegment420 := THAnimSegmentNode.Create;
HAnimSegment420.NameField := 'SEGMENT_FOR_r_calcaneus';
TouchSensor421 := TTouchSensorNode.Create;
TouchSensor421.Description := 'joint r_calcaneus segment SEGMENT_FOR_r_calcaneus';
{ .AddChildren }
HAnimSegment420.AddChildren([TouchSensor421]);
Transform422 := TTransformNode.Create;
Transform422.Translation := Vector3(-0.0889,-0.1278,0.0494);
Shape423 := Shape17;
{ .AddChild }
Transform422.AddChildren([Shape423]);
{ .AddChildren }
HAnimSegment420.AddChildren([Transform422]);
HAnimSite424 := THAnimSiteNode.Create;
HAnimSite424.NameField := 'SEGMENT_FOR_r_calcaneus_tip';
Transform425 := TTransformNode.Create;
Transform425.Translation := Vector3(-0.0889,-0.1278,0.0494);
Shape426 := Shape12;
{ .AddChild }
Transform425.AddChildren([Shape426]);
{ .AddChildren }
HAnimSite424.AddChildren([Transform425]);
{ .AddChildren }
HAnimSegment420.AddChildren([HAnimSite424]);
{ .AddChildren }
HAnimJoint419.AddChildren([HAnimSegment420]);
HAnimJoint427 := THAnimJointNode.Create;
HAnimJoint427.NameField := 'r_cuboid';
HAnimJoint427.Center := Vector3(-0.1105,-0.0998,0.0267);
HAnimSegment428 := THAnimSegmentNode.Create;
HAnimSegment428.NameField := 'SEGMENT_FOR_r_cuboid';
TouchSensor429 := TTouchSensorNode.Create;
TouchSensor429.Description := 'joint r_cuboid segment SEGMENT_FOR_r_cuboid';
{ .AddChildren }
HAnimSegment428.AddChildren([TouchSensor429]);
Transform430 := TTransformNode.Create;
Transform430.Translation := Vector3(-0.1105,-0.0998,0.0267);
Shape431 := Shape17;
{ .AddChild }
Transform430.AddChildren([Shape431]);
{ .AddChildren }
HAnimSegment428.AddChildren([Transform430]);
HAnimSite432 := THAnimSiteNode.Create;
HAnimSite432.NameField := 'SEGMENT_FOR_r_cuboid_tip';
Transform433 := TTransformNode.Create;
Transform433.Translation := Vector3(-0.1105,-0.0998,0.0267);
Shape434 := Shape12;
{ .AddChild }
Transform433.AddChildren([Shape434]);
{ .AddChildren }
HAnimSite432.AddChildren([Transform433]);
{ .AddChildren }
HAnimSegment428.AddChildren([HAnimSite432]);
{ .AddChildren }
HAnimJoint427.AddChildren([HAnimSegment428]);
HAnimJoint435 := THAnimJointNode.Create;
HAnimJoint435.NameField := 'r_metatarsal_4';
HAnimJoint435.Center := Vector3(-0.1063,-0.0634,0.016);
HAnimSegment436 := THAnimSegmentNode.Create;
HAnimSegment436.NameField := 'SEGMENT_FOR_r_metatarsal_4';
TouchSensor437 := TTouchSensorNode.Create;
TouchSensor437.Description := 'joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4';
{ .AddChildren }
HAnimSegment436.AddChildren([TouchSensor437]);
Transform438 := TTransformNode.Create;
Transform438.Translation := Vector3(-0.1063,-0.0634,0.016);
Shape439 := Shape17;
{ .AddChild }
Transform438.AddChildren([Shape439]);
{ .AddChildren }
HAnimSegment436.AddChildren([Transform438]);
HAnimSite440 := THAnimSiteNode.Create;
HAnimSite440.NameField := 'SEGMENT_FOR_r_metatarsal_4_tip';
Transform441 := TTransformNode.Create;
Transform441.Translation := Vector3(-0.1063,-0.0634,0.016);
Shape442 := Shape12;
{ .AddChild }
Transform441.AddChildren([Shape442]);
{ .AddChildren }
HAnimSite440.AddChildren([Transform441]);
{ .AddChildren }
HAnimSegment436.AddChildren([HAnimSite440]);
{ .AddChildren }
HAnimJoint435.AddChildren([HAnimSegment436]);
HAnimJoint443 := THAnimJointNode.Create;
HAnimJoint443.NameField := 'r_tarsal_proximal_phalanx_4';
HAnimJoint443.Center := Vector3(-0.1097,-0.0107,0.0058);
HAnimSegment444 := THAnimSegmentNode.Create;
HAnimSegment444.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_4';
TouchSensor445 := TTouchSensorNode.Create;
TouchSensor445.Description := 'joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment444.AddChildren([TouchSensor445]);
Transform446 := TTransformNode.Create;
Transform446.Translation := Vector3(-0.1097,-0.0107,0.0058);
Shape447 := Shape17;
{ .AddChild }
Transform446.AddChildren([Shape447]);
{ .AddChildren }
HAnimSegment444.AddChildren([Transform446]);
HAnimSite448 := THAnimSiteNode.Create;
HAnimSite448.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip';
Transform449 := TTransformNode.Create;
Transform449.Translation := Vector3(-0.1097,-0.0107,0.0058);
Shape450 := Shape12;
{ .AddChild }
Transform449.AddChildren([Shape450]);
{ .AddChildren }
HAnimSite448.AddChildren([Transform449]);
{ .AddChildren }
HAnimSegment444.AddChildren([HAnimSite448]);
{ .AddChildren }
HAnimJoint443.AddChildren([HAnimSegment444]);
HAnimJoint451 := THAnimJointNode.Create;
HAnimJoint451.NameField := 'r_tarsal_middle_phalanx_4';
HAnimJoint451.Center := Vector3(-0.114,0.0044,0.0037);
HAnimSegment452 := THAnimSegmentNode.Create;
HAnimSegment452.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_4';
TouchSensor453 := TTouchSensorNode.Create;
TouchSensor453.Description := 'joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment452.AddChildren([TouchSensor453]);
Transform454 := TTransformNode.Create;
Transform454.Translation := Vector3(-0.114,0.0044,0.0037);
Shape455 := Shape17;
{ .AddChild }
Transform454.AddChildren([Shape455]);
{ .AddChildren }
HAnimSegment452.AddChildren([Transform454]);
HAnimSite456 := THAnimSiteNode.Create;
HAnimSite456.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip';
Transform457 := TTransformNode.Create;
Transform457.Translation := Vector3(-0.114,0.0044,0.0037);
Shape458 := Shape12;
{ .AddChild }
Transform457.AddChildren([Shape458]);
{ .AddChildren }
HAnimSite456.AddChildren([Transform457]);
{ .AddChildren }
HAnimSegment452.AddChildren([HAnimSite456]);
{ .AddChildren }
HAnimJoint451.AddChildren([HAnimSegment452]);
HAnimJoint459 := THAnimJointNode.Create;
HAnimJoint459.NameField := 'r_tarsal_distal_phalanx_4';
HAnimJoint459.Center := Vector3(-0.1155,0.0118,0.0008);
HAnimSegment460 := THAnimSegmentNode.Create;
HAnimSegment460.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_4';
TouchSensor461 := TTouchSensorNode.Create;
TouchSensor461.Description := 'joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment460.AddChildren([TouchSensor461]);
Transform462 := TTransformNode.Create;
Transform462.Translation := Vector3(-0.1155,0.0118,0.0008);
Shape463 := Shape17;
{ .AddChild }
Transform462.AddChildren([Shape463]);
{ .AddChildren }
HAnimSegment460.AddChildren([Transform462]);
HAnimSite464 := THAnimSiteNode.Create;
HAnimSite464.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip';
Transform465 := TTransformNode.Create;
Transform465.Translation := Vector3(-0.1155,0.0118,0.0008);
Shape466 := Shape12;
{ .AddChild }
Transform465.AddChildren([Shape466]);
{ .AddChildren }
HAnimSite464.AddChildren([Transform465]);
{ .AddChildren }
HAnimSegment460.AddChildren([HAnimSite464]);
{ .AddChildren }
HAnimJoint459.AddChildren([HAnimSegment460]);
{ .AddChildren }
HAnimJoint451.AddChildren([HAnimJoint459]);
{ .AddChildren }
HAnimJoint443.AddChildren([HAnimJoint451]);
{ .AddChildren }
HAnimJoint435.AddChildren([HAnimJoint443]);
{ .AddChildren }
HAnimJoint427.AddChildren([HAnimJoint435]);
HAnimJoint467 := THAnimJointNode.Create;
HAnimJoint467.NameField := 'r_metatarsal_5';
HAnimJoint467.Center := Vector3(-0.1206,-0.0671,0.0124);
HAnimSegment468 := THAnimSegmentNode.Create;
HAnimSegment468.NameField := 'SEGMENT_FOR_r_metatarsal_5';
TouchSensor469 := TTouchSensorNode.Create;
TouchSensor469.Description := 'joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5';
{ .AddChildren }
HAnimSegment468.AddChildren([TouchSensor469]);
Transform470 := TTransformNode.Create;
Transform470.Translation := Vector3(-0.1206,-0.0671,0.0124);
Shape471 := Shape17;
{ .AddChild }
Transform470.AddChildren([Shape471]);
{ .AddChildren }
HAnimSegment468.AddChildren([Transform470]);
HAnimSite472 := THAnimSiteNode.Create;
HAnimSite472.NameField := 'SEGMENT_FOR_r_metatarsal_5_tip';
Transform473 := TTransformNode.Create;
Transform473.Translation := Vector3(-0.1206,-0.0671,0.0124);
Shape474 := Shape12;
{ .AddChild }
Transform473.AddChildren([Shape474]);
{ .AddChildren }
HAnimSite472.AddChildren([Transform473]);
{ .AddChildren }
HAnimSegment468.AddChildren([HAnimSite472]);
{ .AddChildren }
HAnimJoint467.AddChildren([HAnimSegment468]);
HAnimJoint475 := THAnimJointNode.Create;
HAnimJoint475.NameField := 'r_tarsal_proximal_phalanx_5';
HAnimJoint475.Center := Vector3(-0.1239,-0.0153,0.0051);
HAnimSegment476 := THAnimSegmentNode.Create;
HAnimSegment476.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_5';
TouchSensor477 := TTouchSensorNode.Create;
TouchSensor477.Description := 'joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment476.AddChildren([TouchSensor477]);
Transform478 := TTransformNode.Create;
Transform478.Translation := Vector3(-0.1239,-0.0153,0.0051);
Shape479 := Shape17;
{ .AddChild }
Transform478.AddChildren([Shape479]);
{ .AddChildren }
HAnimSegment476.AddChildren([Transform478]);
HAnimSite480 := THAnimSiteNode.Create;
HAnimSite480.NameField := 'SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip';
Transform481 := TTransformNode.Create;
Transform481.Translation := Vector3(-0.1239,-0.0153,0.0051);
Shape482 := Shape12;
{ .AddChild }
Transform481.AddChildren([Shape482]);
{ .AddChildren }
HAnimSite480.AddChildren([Transform481]);
{ .AddChildren }
HAnimSegment476.AddChildren([HAnimSite480]);
{ .AddChildren }
HAnimJoint475.AddChildren([HAnimSegment476]);
HAnimJoint483 := THAnimJointNode.Create;
HAnimJoint483.NameField := 'r_tarsal_middle_phalanx_5';
HAnimJoint483.Center := Vector3(-0.1262,-0.0077,0.0023);
HAnimSegment484 := THAnimSegmentNode.Create;
HAnimSegment484.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_5';
TouchSensor485 := TTouchSensorNode.Create;
TouchSensor485.Description := 'joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment484.AddChildren([TouchSensor485]);
Transform486 := TTransformNode.Create;
Transform486.Translation := Vector3(-0.1262,-0.0077,0.0023);
Shape487 := Shape17;
{ .AddChild }
Transform486.AddChildren([Shape487]);
{ .AddChildren }
HAnimSegment484.AddChildren([Transform486]);
HAnimSite488 := THAnimSiteNode.Create;
HAnimSite488.NameField := 'SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip';
Transform489 := TTransformNode.Create;
Transform489.Translation := Vector3(-0.1262,-0.0077,0.0023);
Shape490 := Shape12;
{ .AddChild }
Transform489.AddChildren([Shape490]);
{ .AddChildren }
HAnimSite488.AddChildren([Transform489]);
{ .AddChildren }
HAnimSegment484.AddChildren([HAnimSite488]);
{ .AddChildren }
HAnimJoint483.AddChildren([HAnimSegment484]);
HAnimJoint491 := THAnimJointNode.Create;
HAnimJoint491.NameField := 'r_tarsal_distal_phalanx_5';
HAnimJoint491.Center := Vector3(-0.1271,0,0);
HAnimSegment492 := THAnimSegmentNode.Create;
HAnimSegment492.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_5';
TouchSensor493 := TTouchSensorNode.Create;
TouchSensor493.Description := 'joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment492.AddChildren([TouchSensor493]);
Transform494 := TTransformNode.Create;
Transform494.Translation := Vector3(-0.1271,0,0);
Shape495 := Shape17;
{ .AddChild }
Transform494.AddChildren([Shape495]);
{ .AddChildren }
HAnimSegment492.AddChildren([Transform494]);
HAnimSite496 := THAnimSiteNode.Create;
HAnimSite496.NameField := 'SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip';
Transform497 := TTransformNode.Create;
Transform497.Translation := Vector3(-0.1271,0,0);
Shape498 := Shape12;
{ .AddChild }
Transform497.AddChildren([Shape498]);
{ .AddChildren }
HAnimSite496.AddChildren([Transform497]);
{ .AddChildren }
HAnimSegment492.AddChildren([HAnimSite496]);
{ .AddChildren }
HAnimJoint491.AddChildren([HAnimSegment492]);
{ .AddChildren }
HAnimJoint483.AddChildren([HAnimJoint491]);
{ .AddChildren }
HAnimJoint475.AddChildren([HAnimJoint483]);
{ .AddChildren }
HAnimJoint467.AddChildren([HAnimJoint475]);
{ .AddChildren }
HAnimJoint427.AddChildren([HAnimJoint467]);
{ .AddChildren }
HAnimJoint419.AddChildren([HAnimJoint427]);
{ .AddChildren }
HAnimJoint291.AddChildren([HAnimJoint419]);
{ .AddChildren }
HAnimJoint283.AddChildren([HAnimJoint291]);
{ .AddChildren }
HAnimJoint275.AddChildren([HAnimJoint283]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint275]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint43]);
HAnimJoint499 := THAnimJointNode.Create;
HAnimJoint499.NameField := 'l5';
HAnimJoint499.Center := Vector3(-0.0002,-0.1156,0.9169);
HAnimSegment500 := THAnimSegmentNode.Create;
HAnimSegment500.NameField := 'SEGMENT_FOR_l5';
TouchSensor501 := TTouchSensorNode.Create;
TouchSensor501.Description := 'joint l5 segment SEGMENT_FOR_l5';
{ .AddChildren }
HAnimSegment500.AddChildren([TouchSensor501]);
Transform502 := TTransformNode.Create;
Transform502.Translation := Vector3(-0.0002,-0.1156,0.9169);
Shape503 := Shape17;
{ .AddChild }
Transform502.AddChildren([Shape503]);
{ .AddChildren }
HAnimSegment500.AddChildren([Transform502]);
HAnimSite504 := THAnimSiteNode.Create;
HAnimSite504.NameField := 'SEGMENT_FOR_l5_tip';
Transform505 := TTransformNode.Create;
Transform505.Translation := Vector3(-0.0002,-0.1156,0.9169);
Shape506 := Shape12;
{ .AddChild }
Transform505.AddChildren([Shape506]);
{ .AddChildren }
HAnimSite504.AddChildren([Transform505]);
{ .AddChildren }
HAnimSegment500.AddChildren([HAnimSite504]);
{ .AddChildren }
HAnimJoint499.AddChildren([HAnimSegment500]);
HAnimJoint507 := THAnimJointNode.Create;
HAnimJoint507.NameField := 'l4';
HAnimJoint507.Center := Vector3(-0.0002,-0.1156,0.9412);
HAnimSegment508 := THAnimSegmentNode.Create;
HAnimSegment508.NameField := 'SEGMENT_FOR_l4';
TouchSensor509 := TTouchSensorNode.Create;
TouchSensor509.Description := 'joint l4 segment SEGMENT_FOR_l4';
{ .AddChildren }
HAnimSegment508.AddChildren([TouchSensor509]);
Transform510 := TTransformNode.Create;
Transform510.Translation := Vector3(-0.0002,-0.1156,0.9412);
Shape511 := Shape17;
{ .AddChild }
Transform510.AddChildren([Shape511]);
{ .AddChildren }
HAnimSegment508.AddChildren([Transform510]);
HAnimSite512 := THAnimSiteNode.Create;
HAnimSite512.NameField := 'SEGMENT_FOR_l4_tip';
Transform513 := TTransformNode.Create;
Transform513.Translation := Vector3(-0.0002,-0.1156,0.9412);
Shape514 := Shape12;
{ .AddChild }
Transform513.AddChildren([Shape514]);
{ .AddChildren }
HAnimSite512.AddChildren([Transform513]);
{ .AddChildren }
HAnimSegment508.AddChildren([HAnimSite512]);
{ .AddChildren }
HAnimJoint507.AddChildren([HAnimSegment508]);
HAnimJoint515 := THAnimJointNode.Create;
HAnimJoint515.NameField := 'l3';
HAnimJoint515.Center := Vector3(-0.0002,-0.1156,0.9574);
HAnimSegment516 := THAnimSegmentNode.Create;
HAnimSegment516.NameField := 'SEGMENT_FOR_l3';
TouchSensor517 := TTouchSensorNode.Create;
TouchSensor517.Description := 'joint l3 segment SEGMENT_FOR_l3';
{ .AddChildren }
HAnimSegment516.AddChildren([TouchSensor517]);
Transform518 := TTransformNode.Create;
Transform518.Translation := Vector3(-0.0002,-0.1156,0.9574);
Shape519 := Shape17;
{ .AddChild }
Transform518.AddChildren([Shape519]);
{ .AddChildren }
HAnimSegment516.AddChildren([Transform518]);
HAnimSite520 := THAnimSiteNode.Create;
HAnimSite520.NameField := 'SEGMENT_FOR_l3_tip';
Transform521 := TTransformNode.Create;
Transform521.Translation := Vector3(-0.0002,-0.1156,0.9574);
Shape522 := Shape12;
{ .AddChild }
Transform521.AddChildren([Shape522]);
{ .AddChildren }
HAnimSite520.AddChildren([Transform521]);
{ .AddChildren }
HAnimSegment516.AddChildren([HAnimSite520]);
{ .AddChildren }
HAnimJoint515.AddChildren([HAnimSegment516]);
HAnimJoint523 := THAnimJointNode.Create;
HAnimJoint523.NameField := 'l2';
HAnimJoint523.Center := Vector3(-0.0002,-0.1156,0.9738);
HAnimSegment524 := THAnimSegmentNode.Create;
HAnimSegment524.NameField := 'SEGMENT_FOR_l2';
TouchSensor525 := TTouchSensorNode.Create;
TouchSensor525.Description := 'joint l2 segment SEGMENT_FOR_l2';
{ .AddChildren }
HAnimSegment524.AddChildren([TouchSensor525]);
Transform526 := TTransformNode.Create;
Transform526.Translation := Vector3(-0.0002,-0.1156,0.9738);
Shape527 := Shape17;
{ .AddChild }
Transform526.AddChildren([Shape527]);
{ .AddChildren }
HAnimSegment524.AddChildren([Transform526]);
HAnimSite528 := THAnimSiteNode.Create;
HAnimSite528.NameField := 'SEGMENT_FOR_l2_tip';
Transform529 := TTransformNode.Create;
Transform529.Translation := Vector3(-0.0002,-0.1156,0.9738);
Shape530 := Shape12;
{ .AddChild }
Transform529.AddChildren([Shape530]);
{ .AddChildren }
HAnimSite528.AddChildren([Transform529]);
{ .AddChildren }
HAnimSegment524.AddChildren([HAnimSite528]);
{ .AddChildren }
HAnimJoint523.AddChildren([HAnimSegment524]);
HAnimJoint531 := THAnimJointNode.Create;
HAnimJoint531.NameField := 'l1';
HAnimJoint531.Center := Vector3(-0.0002,-0.1156,0.9911);
HAnimSegment532 := THAnimSegmentNode.Create;
HAnimSegment532.NameField := 'SEGMENT_FOR_l1';
TouchSensor533 := TTouchSensorNode.Create;
TouchSensor533.Description := 'joint l1 segment SEGMENT_FOR_l1';
{ .AddChildren }
HAnimSegment532.AddChildren([TouchSensor533]);
Transform534 := TTransformNode.Create;
Transform534.Translation := Vector3(-0.0002,-0.1156,0.9911);
Shape535 := Shape17;
{ .AddChild }
Transform534.AddChildren([Shape535]);
{ .AddChildren }
HAnimSegment532.AddChildren([Transform534]);
HAnimSite536 := THAnimSiteNode.Create;
HAnimSite536.NameField := 'SEGMENT_FOR_l1_tip';
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(-0.0002,-0.1156,0.9911);
Shape538 := Shape12;
{ .AddChild }
Transform537.AddChildren([Shape538]);
{ .AddChildren }
HAnimSite536.AddChildren([Transform537]);
{ .AddChildren }
HAnimSegment532.AddChildren([HAnimSite536]);
{ .AddChildren }
HAnimJoint531.AddChildren([HAnimSegment532]);
HAnimJoint539 := THAnimJointNode.Create;
HAnimJoint539.NameField := 't12';
HAnimJoint539.Center := Vector3(-0.0002,-0.1156,1.0145);
HAnimSegment540 := THAnimSegmentNode.Create;
HAnimSegment540.NameField := 'SEGMENT_FOR_t12';
TouchSensor541 := TTouchSensorNode.Create;
TouchSensor541.Description := 'joint t12 segment SEGMENT_FOR_t12';
{ .AddChildren }
HAnimSegment540.AddChildren([TouchSensor541]);
Transform542 := TTransformNode.Create;
Transform542.Translation := Vector3(-0.0002,-0.1156,1.0145);
Shape543 := Shape17;
{ .AddChild }
Transform542.AddChildren([Shape543]);
{ .AddChildren }
HAnimSegment540.AddChildren([Transform542]);
HAnimSite544 := THAnimSiteNode.Create;
HAnimSite544.NameField := 'SEGMENT_FOR_t12_tip';
Transform545 := TTransformNode.Create;
Transform545.Translation := Vector3(-0.0002,-0.1156,1.0145);
Shape546 := Shape12;
{ .AddChild }
Transform545.AddChildren([Shape546]);
{ .AddChildren }
HAnimSite544.AddChildren([Transform545]);
{ .AddChildren }
HAnimSegment540.AddChildren([HAnimSite544]);
{ .AddChildren }
HAnimJoint539.AddChildren([HAnimSegment540]);
HAnimJoint547 := THAnimJointNode.Create;
HAnimJoint547.NameField := 't11';
HAnimJoint547.Center := Vector3(-0.0002,-0.1156,1.0381);
HAnimSegment548 := THAnimSegmentNode.Create;
HAnimSegment548.NameField := 'SEGMENT_FOR_t11';
TouchSensor549 := TTouchSensorNode.Create;
TouchSensor549.Description := 'joint t11 segment SEGMENT_FOR_t11';
{ .AddChildren }
HAnimSegment548.AddChildren([TouchSensor549]);
Transform550 := TTransformNode.Create;
Transform550.Translation := Vector3(-0.0002,-0.1156,1.0381);
Shape551 := Shape17;
{ .AddChild }
Transform550.AddChildren([Shape551]);
{ .AddChildren }
HAnimSegment548.AddChildren([Transform550]);
HAnimSite552 := THAnimSiteNode.Create;
HAnimSite552.NameField := 'SEGMENT_FOR_t11_tip';
Transform553 := TTransformNode.Create;
Transform553.Translation := Vector3(-0.0002,-0.1156,1.0381);
Shape554 := Shape12;
{ .AddChild }
Transform553.AddChildren([Shape554]);
{ .AddChildren }
HAnimSite552.AddChildren([Transform553]);
{ .AddChildren }
HAnimSegment548.AddChildren([HAnimSite552]);
{ .AddChildren }
HAnimJoint547.AddChildren([HAnimSegment548]);
HAnimJoint555 := THAnimJointNode.Create;
HAnimJoint555.NameField := 't10';
HAnimJoint555.Center := Vector3(-0.0002,-0.1157,1.0552);
HAnimSegment556 := THAnimSegmentNode.Create;
HAnimSegment556.NameField := 'SEGMENT_FOR_t10';
TouchSensor557 := TTouchSensorNode.Create;
TouchSensor557.Description := 'joint t10 segment SEGMENT_FOR_t10';
{ .AddChildren }
HAnimSegment556.AddChildren([TouchSensor557]);
Transform558 := TTransformNode.Create;
Transform558.Translation := Vector3(-0.0002,-0.1157,1.0552);
Shape559 := Shape17;
{ .AddChild }
Transform558.AddChildren([Shape559]);
{ .AddChildren }
HAnimSegment556.AddChildren([Transform558]);
HAnimSite560 := THAnimSiteNode.Create;
HAnimSite560.NameField := 'SEGMENT_FOR_t10_tip';
Transform561 := TTransformNode.Create;
Transform561.Translation := Vector3(-0.0002,-0.1157,1.0552);
Shape562 := Shape12;
{ .AddChild }
Transform561.AddChildren([Shape562]);
{ .AddChildren }
HAnimSite560.AddChildren([Transform561]);
{ .AddChildren }
HAnimSegment556.AddChildren([HAnimSite560]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimSegment556]);
HAnimJoint563 := THAnimJointNode.Create;
HAnimJoint563.NameField := 't9';
HAnimJoint563.Center := Vector3(-0.0002,-0.1156,1.0699);
HAnimSegment564 := THAnimSegmentNode.Create;
HAnimSegment564.NameField := 'SEGMENT_FOR_t9';
TouchSensor565 := TTouchSensorNode.Create;
TouchSensor565.Description := 'joint t9 segment SEGMENT_FOR_t9';
{ .AddChildren }
HAnimSegment564.AddChildren([TouchSensor565]);
Transform566 := TTransformNode.Create;
Transform566.Translation := Vector3(-0.0002,-0.1156,1.0699);
Shape567 := Shape17;
{ .AddChild }
Transform566.AddChildren([Shape567]);
{ .AddChildren }
HAnimSegment564.AddChildren([Transform566]);
HAnimSite568 := THAnimSiteNode.Create;
HAnimSite568.NameField := 'SEGMENT_FOR_t9_tip';
Transform569 := TTransformNode.Create;
Transform569.Translation := Vector3(-0.0002,-0.1156,1.0699);
Shape570 := Shape12;
{ .AddChild }
Transform569.AddChildren([Shape570]);
{ .AddChildren }
HAnimSite568.AddChildren([Transform569]);
{ .AddChildren }
HAnimSegment564.AddChildren([HAnimSite568]);
{ .AddChildren }
HAnimJoint563.AddChildren([HAnimSegment564]);
HAnimJoint571 := THAnimJointNode.Create;
HAnimJoint571.NameField := 't8';
HAnimJoint571.Center := Vector3(-0.0002,-0.1156,1.0845);
HAnimSegment572 := THAnimSegmentNode.Create;
HAnimSegment572.NameField := 'SEGMENT_FOR_t8';
TouchSensor573 := TTouchSensorNode.Create;
TouchSensor573.Description := 'joint t8 segment SEGMENT_FOR_t8';
{ .AddChildren }
HAnimSegment572.AddChildren([TouchSensor573]);
Transform574 := TTransformNode.Create;
Transform574.Translation := Vector3(-0.0002,-0.1156,1.0845);
Shape575 := Shape17;
{ .AddChild }
Transform574.AddChildren([Shape575]);
{ .AddChildren }
HAnimSegment572.AddChildren([Transform574]);
HAnimSite576 := THAnimSiteNode.Create;
HAnimSite576.NameField := 'SEGMENT_FOR_t8_tip';
Transform577 := TTransformNode.Create;
Transform577.Translation := Vector3(-0.0002,-0.1156,1.0845);
Shape578 := Shape12;
{ .AddChild }
Transform577.AddChildren([Shape578]);
{ .AddChildren }
HAnimSite576.AddChildren([Transform577]);
{ .AddChildren }
HAnimSegment572.AddChildren([HAnimSite576]);
{ .AddChildren }
HAnimJoint571.AddChildren([HAnimSegment572]);
HAnimJoint579 := THAnimJointNode.Create;
HAnimJoint579.NameField := 't7';
HAnimJoint579.Center := Vector3(-0.0002,-0.1156,1.1002);
HAnimSegment580 := THAnimSegmentNode.Create;
HAnimSegment580.NameField := 'SEGMENT_FOR_t7';
TouchSensor581 := TTouchSensorNode.Create;
TouchSensor581.Description := 'joint t7 segment SEGMENT_FOR_t7';
{ .AddChildren }
HAnimSegment580.AddChildren([TouchSensor581]);
Transform582 := TTransformNode.Create;
Transform582.Translation := Vector3(-0.0002,-0.1156,1.1002);
Shape583 := Shape17;
{ .AddChild }
Transform582.AddChildren([Shape583]);
{ .AddChildren }
HAnimSegment580.AddChildren([Transform582]);
HAnimSite584 := THAnimSiteNode.Create;
HAnimSite584.NameField := 'SEGMENT_FOR_t7_tip';
Transform585 := TTransformNode.Create;
Transform585.Translation := Vector3(-0.0002,-0.1156,1.1002);
Shape586 := Shape12;
{ .AddChild }
Transform585.AddChildren([Shape586]);
{ .AddChildren }
HAnimSite584.AddChildren([Transform585]);
{ .AddChildren }
HAnimSegment580.AddChildren([HAnimSite584]);
{ .AddChildren }
HAnimJoint579.AddChildren([HAnimSegment580]);
HAnimJoint587 := THAnimJointNode.Create;
HAnimJoint587.NameField := 't6';
HAnimJoint587.Center := Vector3(-0.0002,-0.1156,1.1131);
HAnimSegment588 := THAnimSegmentNode.Create;
HAnimSegment588.NameField := 'SEGMENT_FOR_t6';
TouchSensor589 := TTouchSensorNode.Create;
TouchSensor589.Description := 'joint t6 segment SEGMENT_FOR_t6';
{ .AddChildren }
HAnimSegment588.AddChildren([TouchSensor589]);
Transform590 := TTransformNode.Create;
Transform590.Translation := Vector3(-0.0002,-0.1156,1.1131);
Shape591 := Shape17;
{ .AddChild }
Transform590.AddChildren([Shape591]);
{ .AddChildren }
HAnimSegment588.AddChildren([Transform590]);
HAnimSite592 := THAnimSiteNode.Create;
HAnimSite592.NameField := 'SEGMENT_FOR_t6_tip';
Transform593 := TTransformNode.Create;
Transform593.Translation := Vector3(-0.0002,-0.1156,1.1131);
Shape594 := Shape12;
{ .AddChild }
Transform593.AddChildren([Shape594]);
{ .AddChildren }
HAnimSite592.AddChildren([Transform593]);
{ .AddChildren }
HAnimSegment588.AddChildren([HAnimSite592]);
{ .AddChildren }
HAnimJoint587.AddChildren([HAnimSegment588]);
HAnimJoint595 := THAnimJointNode.Create;
HAnimJoint595.NameField := 't5';
HAnimJoint595.Center := Vector3(-0.0002,-0.1156,1.1286);
HAnimSegment596 := THAnimSegmentNode.Create;
HAnimSegment596.NameField := 'SEGMENT_FOR_t5';
TouchSensor597 := TTouchSensorNode.Create;
TouchSensor597.Description := 'joint t5 segment SEGMENT_FOR_t5';
{ .AddChildren }
HAnimSegment596.AddChildren([TouchSensor597]);
Transform598 := TTransformNode.Create;
Transform598.Translation := Vector3(-0.0002,-0.1156,1.1286);
Shape599 := Shape17;
{ .AddChild }
Transform598.AddChildren([Shape599]);
{ .AddChildren }
HAnimSegment596.AddChildren([Transform598]);
HAnimSite600 := THAnimSiteNode.Create;
HAnimSite600.NameField := 'SEGMENT_FOR_t5_tip';
Transform601 := TTransformNode.Create;
Transform601.Translation := Vector3(-0.0002,-0.1156,1.1286);
Shape602 := Shape12;
{ .AddChild }
Transform601.AddChildren([Shape602]);
{ .AddChildren }
HAnimSite600.AddChildren([Transform601]);
{ .AddChildren }
HAnimSegment596.AddChildren([HAnimSite600]);
{ .AddChildren }
HAnimJoint595.AddChildren([HAnimSegment596]);
HAnimJoint603 := THAnimJointNode.Create;
HAnimJoint603.NameField := 't4';
HAnimJoint603.Center := Vector3(-0.0002,-0.1156,1.1439);
HAnimSegment604 := THAnimSegmentNode.Create;
HAnimSegment604.NameField := 'SEGMENT_FOR_t4';
TouchSensor605 := TTouchSensorNode.Create;
TouchSensor605.Description := 'joint t4 segment SEGMENT_FOR_t4';
{ .AddChildren }
HAnimSegment604.AddChildren([TouchSensor605]);
Transform606 := TTransformNode.Create;
Transform606.Translation := Vector3(-0.0002,-0.1156,1.1439);
Shape607 := Shape17;
{ .AddChild }
Transform606.AddChildren([Shape607]);
{ .AddChildren }
HAnimSegment604.AddChildren([Transform606]);
HAnimSite608 := THAnimSiteNode.Create;
HAnimSite608.NameField := 'SEGMENT_FOR_t4_tip';
Transform609 := TTransformNode.Create;
Transform609.Translation := Vector3(-0.0002,-0.1156,1.1439);
Shape610 := Shape12;
{ .AddChild }
Transform609.AddChildren([Shape610]);
{ .AddChildren }
HAnimSite608.AddChildren([Transform609]);
{ .AddChildren }
HAnimSegment604.AddChildren([HAnimSite608]);
{ .AddChildren }
HAnimJoint603.AddChildren([HAnimSegment604]);
HAnimJoint611 := THAnimJointNode.Create;
HAnimJoint611.NameField := 't3';
HAnimJoint611.Center := Vector3(-0.0002,-0.1156,1.1623);
HAnimSegment612 := THAnimSegmentNode.Create;
HAnimSegment612.NameField := 'SEGMENT_FOR_t3';
TouchSensor613 := TTouchSensorNode.Create;
TouchSensor613.Description := 'joint t3 segment SEGMENT_FOR_t3';
{ .AddChildren }
HAnimSegment612.AddChildren([TouchSensor613]);
Transform614 := TTransformNode.Create;
Transform614.Translation := Vector3(-0.0002,-0.1156,1.1623);
Shape615 := Shape17;
{ .AddChild }
Transform614.AddChildren([Shape615]);
{ .AddChildren }
HAnimSegment612.AddChildren([Transform614]);
HAnimSite616 := THAnimSiteNode.Create;
HAnimSite616.NameField := 'SEGMENT_FOR_t3_tip';
Transform617 := TTransformNode.Create;
Transform617.Translation := Vector3(-0.0002,-0.1156,1.1623);
Shape618 := Shape12;
{ .AddChild }
Transform617.AddChildren([Shape618]);
{ .AddChildren }
HAnimSite616.AddChildren([Transform617]);
{ .AddChildren }
HAnimSegment612.AddChildren([HAnimSite616]);
{ .AddChildren }
HAnimJoint611.AddChildren([HAnimSegment612]);
HAnimJoint619 := THAnimJointNode.Create;
HAnimJoint619.NameField := 't2';
HAnimJoint619.Center := Vector3(-0.0002,-0.1157,1.1871);
HAnimSegment620 := THAnimSegmentNode.Create;
HAnimSegment620.NameField := 'SEGMENT_FOR_t2';
TouchSensor621 := TTouchSensorNode.Create;
TouchSensor621.Description := 'joint t2 segment SEGMENT_FOR_t2';
{ .AddChildren }
HAnimSegment620.AddChildren([TouchSensor621]);
Transform622 := TTransformNode.Create;
Transform622.Translation := Vector3(-0.0002,-0.1157,1.1871);
Shape623 := Shape17;
{ .AddChild }
Transform622.AddChildren([Shape623]);
{ .AddChildren }
HAnimSegment620.AddChildren([Transform622]);
HAnimSite624 := THAnimSiteNode.Create;
HAnimSite624.NameField := 'SEGMENT_FOR_t2_tip';
Transform625 := TTransformNode.Create;
Transform625.Translation := Vector3(-0.0002,-0.1157,1.1871);
Shape626 := Shape12;
{ .AddChild }
Transform625.AddChildren([Shape626]);
{ .AddChildren }
HAnimSite624.AddChildren([Transform625]);
{ .AddChildren }
HAnimSegment620.AddChildren([HAnimSite624]);
{ .AddChildren }
HAnimJoint619.AddChildren([HAnimSegment620]);
HAnimJoint627 := THAnimJointNode.Create;
HAnimJoint627.NameField := 't1';
HAnimJoint627.Center := Vector3(-0.0002,-0.1156,1.2109);
HAnimSegment628 := THAnimSegmentNode.Create;
HAnimSegment628.NameField := 'SEGMENT_FOR_t1';
TouchSensor629 := TTouchSensorNode.Create;
TouchSensor629.Description := 'joint t1 segment SEGMENT_FOR_t1';
{ .AddChildren }
HAnimSegment628.AddChildren([TouchSensor629]);
Transform630 := TTransformNode.Create;
Transform630.Translation := Vector3(-0.0002,-0.1156,1.2109);
Shape631 := Shape17;
{ .AddChild }
Transform630.AddChildren([Shape631]);
{ .AddChildren }
HAnimSegment628.AddChildren([Transform630]);
HAnimSite632 := THAnimSiteNode.Create;
HAnimSite632.NameField := 'SEGMENT_FOR_t1_tip';
Transform633 := TTransformNode.Create;
Transform633.Translation := Vector3(-0.0002,-0.1156,1.2109);
Shape634 := Shape12;
{ .AddChild }
Transform633.AddChildren([Shape634]);
{ .AddChildren }
HAnimSite632.AddChildren([Transform633]);
{ .AddChildren }
HAnimSegment628.AddChildren([HAnimSite632]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimSegment628]);
HAnimJoint635 := THAnimJointNode.Create;
HAnimJoint635.NameField := 'c7';
HAnimJoint635.Center := Vector3(-0.0002,-0.1169,1.2368);
HAnimSegment636 := THAnimSegmentNode.Create;
HAnimSegment636.NameField := 'SEGMENT_FOR_c7';
TouchSensor637 := TTouchSensorNode.Create;
TouchSensor637.Description := 'joint c7 segment SEGMENT_FOR_c7';
{ .AddChildren }
HAnimSegment636.AddChildren([TouchSensor637]);
Transform638 := TTransformNode.Create;
Transform638.Translation := Vector3(-0.0002,-0.1169,1.2368);
Shape639 := Shape17;
{ .AddChild }
Transform638.AddChildren([Shape639]);
{ .AddChildren }
HAnimSegment636.AddChildren([Transform638]);
HAnimSite640 := THAnimSiteNode.Create;
HAnimSite640.NameField := 'SEGMENT_FOR_c7_tip';
Transform641 := TTransformNode.Create;
Transform641.Translation := Vector3(-0.0002,-0.1169,1.2368);
Shape642 := Shape12;
{ .AddChild }
Transform641.AddChildren([Shape642]);
{ .AddChildren }
HAnimSite640.AddChildren([Transform641]);
{ .AddChildren }
HAnimSegment636.AddChildren([HAnimSite640]);
{ .AddChildren }
HAnimJoint635.AddChildren([HAnimSegment636]);
HAnimJoint643 := THAnimJointNode.Create;
HAnimJoint643.NameField := 'c6';
HAnimJoint643.Center := Vector3(-0.0002,-0.1169,1.249);
HAnimSegment644 := THAnimSegmentNode.Create;
HAnimSegment644.NameField := 'SEGMENT_FOR_c6';
TouchSensor645 := TTouchSensorNode.Create;
TouchSensor645.Description := 'joint c6 segment SEGMENT_FOR_c6';
{ .AddChildren }
HAnimSegment644.AddChildren([TouchSensor645]);
Transform646 := TTransformNode.Create;
Transform646.Translation := Vector3(-0.0002,-0.1169,1.249);
Shape647 := Shape17;
{ .AddChild }
Transform646.AddChildren([Shape647]);
{ .AddChildren }
HAnimSegment644.AddChildren([Transform646]);
HAnimSite648 := THAnimSiteNode.Create;
HAnimSite648.NameField := 'SEGMENT_FOR_c6_tip';
Transform649 := TTransformNode.Create;
Transform649.Translation := Vector3(-0.0002,-0.1169,1.249);
Shape650 := Shape12;
{ .AddChild }
Transform649.AddChildren([Shape650]);
{ .AddChildren }
HAnimSite648.AddChildren([Transform649]);
{ .AddChildren }
HAnimSegment644.AddChildren([HAnimSite648]);
{ .AddChildren }
HAnimJoint643.AddChildren([HAnimSegment644]);
HAnimJoint651 := THAnimJointNode.Create;
HAnimJoint651.NameField := 'c5';
HAnimJoint651.Center := Vector3(-0.0002,-0.1169,1.2613);
HAnimSegment652 := THAnimSegmentNode.Create;
HAnimSegment652.NameField := 'SEGMENT_FOR_c5';
TouchSensor653 := TTouchSensorNode.Create;
TouchSensor653.Description := 'joint c5 segment SEGMENT_FOR_c5';
{ .AddChildren }
HAnimSegment652.AddChildren([TouchSensor653]);
Transform654 := TTransformNode.Create;
Transform654.Translation := Vector3(-0.0002,-0.1169,1.2613);
Shape655 := Shape17;
{ .AddChild }
Transform654.AddChildren([Shape655]);
{ .AddChildren }
HAnimSegment652.AddChildren([Transform654]);
HAnimSite656 := THAnimSiteNode.Create;
HAnimSite656.NameField := 'SEGMENT_FOR_c5_tip';
Transform657 := TTransformNode.Create;
Transform657.Translation := Vector3(-0.0002,-0.1169,1.2613);
Shape658 := Shape12;
{ .AddChild }
Transform657.AddChildren([Shape658]);
{ .AddChildren }
HAnimSite656.AddChildren([Transform657]);
{ .AddChildren }
HAnimSegment652.AddChildren([HAnimSite656]);
{ .AddChildren }
HAnimJoint651.AddChildren([HAnimSegment652]);
HAnimJoint659 := THAnimJointNode.Create;
HAnimJoint659.NameField := 'c4';
HAnimJoint659.Center := Vector3(-0.0002,-0.1169,1.2737);
HAnimSegment660 := THAnimSegmentNode.Create;
HAnimSegment660.NameField := 'SEGMENT_FOR_c4';
TouchSensor661 := TTouchSensorNode.Create;
TouchSensor661.Description := 'joint c4 segment SEGMENT_FOR_c4';
{ .AddChildren }
HAnimSegment660.AddChildren([TouchSensor661]);
Transform662 := TTransformNode.Create;
Transform662.Translation := Vector3(-0.0002,-0.1169,1.2737);
Shape663 := Shape17;
{ .AddChild }
Transform662.AddChildren([Shape663]);
{ .AddChildren }
HAnimSegment660.AddChildren([Transform662]);
HAnimSite664 := THAnimSiteNode.Create;
HAnimSite664.NameField := 'SEGMENT_FOR_c4_tip';
Transform665 := TTransformNode.Create;
Transform665.Translation := Vector3(-0.0002,-0.1169,1.2737);
Shape666 := Shape12;
{ .AddChild }
Transform665.AddChildren([Shape666]);
{ .AddChildren }
HAnimSite664.AddChildren([Transform665]);
{ .AddChildren }
HAnimSegment660.AddChildren([HAnimSite664]);
{ .AddChildren }
HAnimJoint659.AddChildren([HAnimSegment660]);
HAnimJoint667 := THAnimJointNode.Create;
HAnimJoint667.NameField := 'c3';
HAnimJoint667.Center := Vector3(-0.0002,-0.1169,1.2865);
HAnimSegment668 := THAnimSegmentNode.Create;
HAnimSegment668.NameField := 'SEGMENT_FOR_c3';
TouchSensor669 := TTouchSensorNode.Create;
TouchSensor669.Description := 'joint c3 segment SEGMENT_FOR_c3';
{ .AddChildren }
HAnimSegment668.AddChildren([TouchSensor669]);
Transform670 := TTransformNode.Create;
Transform670.Translation := Vector3(-0.0002,-0.1169,1.2865);
Shape671 := Shape17;
{ .AddChild }
Transform670.AddChildren([Shape671]);
{ .AddChildren }
HAnimSegment668.AddChildren([Transform670]);
HAnimSite672 := THAnimSiteNode.Create;
HAnimSite672.NameField := 'SEGMENT_FOR_c3_tip';
Transform673 := TTransformNode.Create;
Transform673.Translation := Vector3(-0.0002,-0.1169,1.2865);
Shape674 := Shape12;
{ .AddChild }
Transform673.AddChildren([Shape674]);
{ .AddChildren }
HAnimSite672.AddChildren([Transform673]);
{ .AddChildren }
HAnimSegment668.AddChildren([HAnimSite672]);
{ .AddChildren }
HAnimJoint667.AddChildren([HAnimSegment668]);
HAnimJoint675 := THAnimJointNode.Create;
HAnimJoint675.NameField := 'c2';
HAnimJoint675.Center := Vector3(-0.0002,-0.1169,1.2982);
HAnimSegment676 := THAnimSegmentNode.Create;
HAnimSegment676.NameField := 'SEGMENT_FOR_c2';
TouchSensor677 := TTouchSensorNode.Create;
TouchSensor677.Description := 'joint c2 segment SEGMENT_FOR_c2';
{ .AddChildren }
HAnimSegment676.AddChildren([TouchSensor677]);
Transform678 := TTransformNode.Create;
Transform678.Translation := Vector3(-0.0002,-0.1169,1.2982);
Shape679 := Shape17;
{ .AddChild }
Transform678.AddChildren([Shape679]);
{ .AddChildren }
HAnimSegment676.AddChildren([Transform678]);
HAnimSite680 := THAnimSiteNode.Create;
HAnimSite680.NameField := 'SEGMENT_FOR_c2_tip';
Transform681 := TTransformNode.Create;
Transform681.Translation := Vector3(-0.0002,-0.1169,1.2982);
Shape682 := Shape12;
{ .AddChild }
Transform681.AddChildren([Shape682]);
{ .AddChildren }
HAnimSite680.AddChildren([Transform681]);
{ .AddChildren }
HAnimSegment676.AddChildren([HAnimSite680]);
{ .AddChildren }
HAnimJoint675.AddChildren([HAnimSegment676]);
HAnimJoint683 := THAnimJointNode.Create;
HAnimJoint683.NameField := 'c1';
HAnimJoint683.Center := Vector3(-0.0002,-0.1169,1.3099);
HAnimSegment684 := THAnimSegmentNode.Create;
HAnimSegment684.NameField := 'SEGMENT_FOR_c1';
TouchSensor685 := TTouchSensorNode.Create;
TouchSensor685.Description := 'joint c1 segment SEGMENT_FOR_c1';
{ .AddChildren }
HAnimSegment684.AddChildren([TouchSensor685]);
Transform686 := TTransformNode.Create;
Transform686.Translation := Vector3(-0.0002,-0.1169,1.3099);
Shape687 := Shape17;
{ .AddChild }
Transform686.AddChildren([Shape687]);
{ .AddChildren }
HAnimSegment684.AddChildren([Transform686]);
HAnimSite688 := THAnimSiteNode.Create;
HAnimSite688.NameField := 'SEGMENT_FOR_c1_tip';
Transform689 := TTransformNode.Create;
Transform689.Translation := Vector3(-0.0002,-0.1169,1.3099);
Shape690 := Shape12;
{ .AddChild }
Transform689.AddChildren([Shape690]);
{ .AddChildren }
HAnimSite688.AddChildren([Transform689]);
{ .AddChildren }
HAnimSegment684.AddChildren([HAnimSite688]);
{ .AddChildren }
HAnimJoint683.AddChildren([HAnimSegment684]);
HAnimJoint691 := THAnimJointNode.Create;
HAnimJoint691.NameField := 'skull';
HAnimJoint691.Center := Vector3(-0.0002,-0.1173,1.3041);
HAnimSegment692 := THAnimSegmentNode.Create;
HAnimSegment692.NameField := 'SEGMENT_FOR_skull';
TouchSensor693 := TTouchSensorNode.Create;
TouchSensor693.Description := 'joint skull segment SEGMENT_FOR_skull';
{ .AddChildren }
HAnimSegment692.AddChildren([TouchSensor693]);
Transform694 := TTransformNode.Create;
Transform694.Translation := Vector3(-0.0002,-0.1173,1.3041);
Shape695 := Shape17;
{ .AddChild }
Transform694.AddChildren([Shape695]);
{ .AddChildren }
HAnimSegment692.AddChildren([Transform694]);
HAnimSite696 := THAnimSiteNode.Create;
HAnimSite696.NameField := 'SEGMENT_FOR_skull_tip';
Transform697 := TTransformNode.Create;
Transform697.Translation := Vector3(-0.0002,-0.1173,1.3041);
Shape698 := Shape12;
{ .AddChild }
Transform697.AddChildren([Shape698]);
{ .AddChildren }
HAnimSite696.AddChildren([Transform697]);
{ .AddChildren }
HAnimSegment692.AddChildren([HAnimSite696]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimSegment692]);
HAnimJoint699 := THAnimJointNode.Create;
HAnimJoint699.NameField := 'l_eyelid';
HAnimJoint699.Center := Vector3(0.0503,-0.0689,1.4157);
HAnimSegment700 := THAnimSegmentNode.Create;
HAnimSegment700.NameField := 'SEGMENT_FOR_l_eyelid';
TouchSensor701 := TTouchSensorNode.Create;
TouchSensor701.Description := 'joint l_eyelid segment SEGMENT_FOR_l_eyelid';
{ .AddChildren }
HAnimSegment700.AddChildren([TouchSensor701]);
Transform702 := TTransformNode.Create;
Transform702.Translation := Vector3(0.0503,-0.0689,1.4157);
Shape703 := Shape17;
{ .AddChild }
Transform702.AddChildren([Shape703]);
{ .AddChildren }
HAnimSegment700.AddChildren([Transform702]);
HAnimSite704 := THAnimSiteNode.Create;
HAnimSite704.NameField := 'SEGMENT_FOR_l_eyelid_tip';
Transform705 := TTransformNode.Create;
Transform705.Translation := Vector3(0.0503,-0.0689,1.4157);
Shape706 := Shape12;
{ .AddChild }
Transform705.AddChildren([Shape706]);
{ .AddChildren }
HAnimSite704.AddChildren([Transform705]);
{ .AddChildren }
HAnimSegment700.AddChildren([HAnimSite704]);
{ .AddChildren }
HAnimJoint699.AddChildren([HAnimSegment700]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint699]);
HAnimJoint707 := THAnimJointNode.Create;
HAnimJoint707.NameField := 'r_eyelid';
HAnimJoint707.Center := Vector3(-0.0507,-0.0689,1.4157);
HAnimSegment708 := THAnimSegmentNode.Create;
HAnimSegment708.NameField := 'SEGMENT_FOR_r_eyelid';
TouchSensor709 := TTouchSensorNode.Create;
TouchSensor709.Description := 'joint r_eyelid segment SEGMENT_FOR_r_eyelid';
{ .AddChildren }
HAnimSegment708.AddChildren([TouchSensor709]);
Transform710 := TTransformNode.Create;
Transform710.Translation := Vector3(-0.0507,-0.0689,1.4157);
Shape711 := Shape17;
{ .AddChild }
Transform710.AddChildren([Shape711]);
{ .AddChildren }
HAnimSegment708.AddChildren([Transform710]);
HAnimSite712 := THAnimSiteNode.Create;
HAnimSite712.NameField := 'SEGMENT_FOR_r_eyelid_tip';
Transform713 := TTransformNode.Create;
Transform713.Translation := Vector3(-0.0507,-0.0689,1.4157);
Shape714 := Shape12;
{ .AddChild }
Transform713.AddChildren([Shape714]);
{ .AddChildren }
HAnimSite712.AddChildren([Transform713]);
{ .AddChildren }
HAnimSegment708.AddChildren([HAnimSite712]);
{ .AddChildren }
HAnimJoint707.AddChildren([HAnimSegment708]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint707]);
HAnimJoint715 := THAnimJointNode.Create;
HAnimJoint715.NameField := 'l_eyeball';
HAnimJoint715.Center := Vector3(0.0479,-0.0188,1.3963);
HAnimSegment716 := THAnimSegmentNode.Create;
HAnimSegment716.NameField := 'SEGMENT_FOR_l_eyeball';
TouchSensor717 := TTouchSensorNode.Create;
TouchSensor717.Description := 'joint l_eyeball segment SEGMENT_FOR_l_eyeball';
{ .AddChildren }
HAnimSegment716.AddChildren([TouchSensor717]);
Transform718 := TTransformNode.Create;
Transform718.Translation := Vector3(0.0479,-0.0188,1.3963);
Shape719 := Shape17;
{ .AddChild }
Transform718.AddChildren([Shape719]);
{ .AddChildren }
HAnimSegment716.AddChildren([Transform718]);
HAnimSite720 := THAnimSiteNode.Create;
HAnimSite720.NameField := 'SEGMENT_FOR_l_eyeball_tip';
Transform721 := TTransformNode.Create;
Transform721.Translation := Vector3(0.0479,-0.0188,1.3963);
Shape722 := Shape12;
{ .AddChild }
Transform721.AddChildren([Shape722]);
{ .AddChildren }
HAnimSite720.AddChildren([Transform721]);
{ .AddChildren }
HAnimSegment716.AddChildren([HAnimSite720]);
{ .AddChildren }
HAnimJoint715.AddChildren([HAnimSegment716]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint715]);
HAnimJoint723 := THAnimJointNode.Create;
HAnimJoint723.NameField := 'r_eyeball';
HAnimJoint723.Center := Vector3(-0.0483,-0.0188,1.3963);
HAnimSegment724 := THAnimSegmentNode.Create;
HAnimSegment724.NameField := 'SEGMENT_FOR_r_eyeball';
TouchSensor725 := TTouchSensorNode.Create;
TouchSensor725.Description := 'joint r_eyeball segment SEGMENT_FOR_r_eyeball';
{ .AddChildren }
HAnimSegment724.AddChildren([TouchSensor725]);
Transform726 := TTransformNode.Create;
Transform726.Translation := Vector3(-0.0483,-0.0188,1.3963);
Shape727 := Shape17;
{ .AddChild }
Transform726.AddChildren([Shape727]);
{ .AddChildren }
HAnimSegment724.AddChildren([Transform726]);
HAnimSite728 := THAnimSiteNode.Create;
HAnimSite728.NameField := 'SEGMENT_FOR_r_eyeball_tip';
Transform729 := TTransformNode.Create;
Transform729.Translation := Vector3(-0.0483,-0.0188,1.3963);
Shape730 := Shape12;
{ .AddChild }
Transform729.AddChildren([Shape730]);
{ .AddChildren }
HAnimSite728.AddChildren([Transform729]);
{ .AddChildren }
HAnimSegment724.AddChildren([HAnimSite728]);
{ .AddChildren }
HAnimJoint723.AddChildren([HAnimSegment724]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint723]);
HAnimJoint731 := THAnimJointNode.Create;
HAnimJoint731.NameField := 'l_eyebrow';
HAnimJoint731.Center := Vector3(0.0216,0.0051,1.4053);
HAnimSegment732 := THAnimSegmentNode.Create;
HAnimSegment732.NameField := 'SEGMENT_FOR_l_eyebrow';
TouchSensor733 := TTouchSensorNode.Create;
TouchSensor733.Description := 'joint l_eyebrow segment SEGMENT_FOR_l_eyebrow';
{ .AddChildren }
HAnimSegment732.AddChildren([TouchSensor733]);
Transform734 := TTransformNode.Create;
Transform734.Translation := Vector3(0.0216,0.0051,1.4053);
Shape735 := Shape17;
{ .AddChild }
Transform734.AddChildren([Shape735]);
{ .AddChildren }
HAnimSegment732.AddChildren([Transform734]);
HAnimSite736 := THAnimSiteNode.Create;
HAnimSite736.NameField := 'SEGMENT_FOR_l_eyebrow_tip';
Transform737 := TTransformNode.Create;
Transform737.Translation := Vector3(0.0216,0.0051,1.4053);
Shape738 := Shape12;
{ .AddChild }
Transform737.AddChildren([Shape738]);
{ .AddChildren }
HAnimSite736.AddChildren([Transform737]);
{ .AddChildren }
HAnimSegment732.AddChildren([HAnimSite736]);
{ .AddChildren }
HAnimJoint731.AddChildren([HAnimSegment732]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint731]);
HAnimJoint739 := THAnimJointNode.Create;
HAnimJoint739.NameField := 'r_eyebrow';
HAnimJoint739.Center := Vector3(-0.0219,0.0051,1.4053);
HAnimSegment740 := THAnimSegmentNode.Create;
HAnimSegment740.NameField := 'SEGMENT_FOR_r_eyebrow';
TouchSensor741 := TTouchSensorNode.Create;
TouchSensor741.Description := 'joint r_eyebrow segment SEGMENT_FOR_r_eyebrow';
{ .AddChildren }
HAnimSegment740.AddChildren([TouchSensor741]);
Transform742 := TTransformNode.Create;
Transform742.Translation := Vector3(-0.0219,0.0051,1.4053);
Shape743 := Shape17;
{ .AddChild }
Transform742.AddChildren([Shape743]);
{ .AddChildren }
HAnimSegment740.AddChildren([Transform742]);
HAnimSite744 := THAnimSiteNode.Create;
HAnimSite744.NameField := 'SEGMENT_FOR_r_eyebrow_tip';
Transform745 := TTransformNode.Create;
Transform745.Translation := Vector3(-0.0219,0.0051,1.4053);
Shape746 := Shape12;
{ .AddChild }
Transform745.AddChildren([Shape746]);
{ .AddChildren }
HAnimSite744.AddChildren([Transform745]);
{ .AddChildren }
HAnimSegment740.AddChildren([HAnimSite744]);
{ .AddChildren }
HAnimJoint739.AddChildren([HAnimSegment740]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint739]);
HAnimJoint747 := THAnimJointNode.Create;
HAnimJoint747.NameField := 'jaw';
HAnimJoint747.Center := Vector3(-0.0002,-0.0865,1.3043);
HAnimSegment748 := THAnimSegmentNode.Create;
HAnimSegment748.NameField := 'SEGMENT_FOR_jaw';
TouchSensor749 := TTouchSensorNode.Create;
TouchSensor749.Description := 'joint jaw segment SEGMENT_FOR_jaw';
{ .AddChildren }
HAnimSegment748.AddChildren([TouchSensor749]);
Transform750 := TTransformNode.Create;
Transform750.Translation := Vector3(-0.0002,-0.0865,1.3043);
Shape751 := Shape17;
{ .AddChild }
Transform750.AddChildren([Shape751]);
{ .AddChildren }
HAnimSegment748.AddChildren([Transform750]);
HAnimSite752 := THAnimSiteNode.Create;
HAnimSite752.NameField := 'SEGMENT_FOR_jaw_tip';
Transform753 := TTransformNode.Create;
Transform753.Translation := Vector3(-0.0002,-0.0865,1.3043);
Shape754 := Shape12;
{ .AddChild }
Transform753.AddChildren([Shape754]);
{ .AddChildren }
HAnimSite752.AddChildren([Transform753]);
{ .AddChildren }
HAnimSegment748.AddChildren([HAnimSite752]);
{ .AddChildren }
HAnimJoint747.AddChildren([HAnimSegment748]);
{ .AddChildren }
HAnimJoint691.AddChildren([HAnimJoint747]);
{ .AddChildren }
HAnimJoint683.AddChildren([HAnimJoint691]);
{ .AddChildren }
HAnimJoint675.AddChildren([HAnimJoint683]);
{ .AddChildren }
HAnimJoint667.AddChildren([HAnimJoint675]);
{ .AddChildren }
HAnimJoint659.AddChildren([HAnimJoint667]);
{ .AddChildren }
HAnimJoint651.AddChildren([HAnimJoint659]);
{ .AddChildren }
HAnimJoint643.AddChildren([HAnimJoint651]);
{ .AddChildren }
HAnimJoint635.AddChildren([HAnimJoint643]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint635]);
HAnimJoint755 := THAnimJointNode.Create;
HAnimJoint755.NameField := 'l_clavicle';
HAnimJoint755.Center := Vector3(0.1228,-0.1148,1.1833);
HAnimSegment756 := THAnimSegmentNode.Create;
HAnimSegment756.NameField := 'SEGMENT_FOR_l_clavicle';
TouchSensor757 := TTouchSensorNode.Create;
TouchSensor757.Description := 'joint l_clavicle segment SEGMENT_FOR_l_clavicle';
{ .AddChildren }
HAnimSegment756.AddChildren([TouchSensor757]);
Transform758 := TTransformNode.Create;
Transform758.Translation := Vector3(0.1228,-0.1148,1.1833);
Shape759 := Shape17;
{ .AddChild }
Transform758.AddChildren([Shape759]);
{ .AddChildren }
HAnimSegment756.AddChildren([Transform758]);
HAnimSite760 := THAnimSiteNode.Create;
HAnimSite760.NameField := 'SEGMENT_FOR_l_clavicle_tip';
Transform761 := TTransformNode.Create;
Transform761.Translation := Vector3(0.1228,-0.1148,1.1833);
Shape762 := Shape12;
{ .AddChild }
Transform761.AddChildren([Shape762]);
{ .AddChildren }
HAnimSite760.AddChildren([Transform761]);
{ .AddChildren }
HAnimSegment756.AddChildren([HAnimSite760]);
{ .AddChildren }
HAnimJoint755.AddChildren([HAnimSegment756]);
HAnimJoint763 := THAnimJointNode.Create;
HAnimJoint763.NameField := 'l_scapula';
HAnimJoint763.Center := Vector3(0.0383,-0.1157,1.2001);
HAnimSegment764 := THAnimSegmentNode.Create;
HAnimSegment764.NameField := 'SEGMENT_FOR_l_scapula';
TouchSensor765 := TTouchSensorNode.Create;
TouchSensor765.Description := 'joint l_scapula segment SEGMENT_FOR_l_scapula';
{ .AddChildren }
HAnimSegment764.AddChildren([TouchSensor765]);
Transform766 := TTransformNode.Create;
Transform766.Translation := Vector3(0.0383,-0.1157,1.2001);
Shape767 := Shape17;
{ .AddChild }
Transform766.AddChildren([Shape767]);
{ .AddChildren }
HAnimSegment764.AddChildren([Transform766]);
HAnimSite768 := THAnimSiteNode.Create;
HAnimSite768.NameField := 'SEGMENT_FOR_l_scapula_tip';
Transform769 := TTransformNode.Create;
Transform769.Translation := Vector3(0.0383,-0.1157,1.2001);
Shape770 := Shape12;
{ .AddChild }
Transform769.AddChildren([Shape770]);
{ .AddChildren }
HAnimSite768.AddChildren([Transform769]);
{ .AddChildren }
HAnimSegment764.AddChildren([HAnimSite768]);
{ .AddChildren }
HAnimJoint763.AddChildren([HAnimSegment764]);
HAnimJoint771 := THAnimJointNode.Create;
HAnimJoint771.NameField := 'l_upperarm';
HAnimJoint771.Center := Vector3(0.1649,-0.1051,1.17);
HAnimSegment772 := THAnimSegmentNode.Create;
HAnimSegment772.NameField := 'SEGMENT_FOR_l_upperarm';
TouchSensor773 := TTouchSensorNode.Create;
TouchSensor773.Description := 'joint l_upperarm segment SEGMENT_FOR_l_upperarm';
{ .AddChildren }
HAnimSegment772.AddChildren([TouchSensor773]);
Transform774 := TTransformNode.Create;
Transform774.Translation := Vector3(0.1649,-0.1051,1.17);
Shape775 := Shape17;
{ .AddChild }
Transform774.AddChildren([Shape775]);
{ .AddChildren }
HAnimSegment772.AddChildren([Transform774]);
HAnimSite776 := THAnimSiteNode.Create;
HAnimSite776.NameField := 'SEGMENT_FOR_l_upperarm_tip';
Transform777 := TTransformNode.Create;
Transform777.Translation := Vector3(0.1649,-0.1051,1.17);
Shape778 := Shape12;
{ .AddChild }
Transform777.AddChildren([Shape778]);
{ .AddChildren }
HAnimSite776.AddChildren([Transform777]);
{ .AddChildren }
HAnimSegment772.AddChildren([HAnimSite776]);
{ .AddChildren }
HAnimJoint771.AddChildren([HAnimSegment772]);
HAnimJoint779 := THAnimJointNode.Create;
HAnimJoint779.NameField := 'l_forearm';
HAnimJoint779.Center := Vector3(0.1819,-0.1075,0.9202);
HAnimSegment780 := THAnimSegmentNode.Create;
HAnimSegment780.NameField := 'SEGMENT_FOR_l_forearm';
TouchSensor781 := TTouchSensorNode.Create;
TouchSensor781.Description := 'joint l_forearm segment SEGMENT_FOR_l_forearm';
{ .AddChildren }
HAnimSegment780.AddChildren([TouchSensor781]);
Transform782 := TTransformNode.Create;
Transform782.Translation := Vector3(0.1819,-0.1075,0.9202);
Shape783 := Shape17;
{ .AddChild }
Transform782.AddChildren([Shape783]);
{ .AddChildren }
HAnimSegment780.AddChildren([Transform782]);
HAnimSite784 := THAnimSiteNode.Create;
HAnimSite784.NameField := 'SEGMENT_FOR_l_forearm_tip';
Transform785 := TTransformNode.Create;
Transform785.Translation := Vector3(0.1819,-0.1075,0.9202);
Shape786 := Shape12;
{ .AddChild }
Transform785.AddChildren([Shape786]);
{ .AddChildren }
HAnimSite784.AddChildren([Transform785]);
{ .AddChildren }
HAnimSegment780.AddChildren([HAnimSite784]);
{ .AddChildren }
HAnimJoint779.AddChildren([HAnimSegment780]);
HAnimJoint787 := THAnimJointNode.Create;
HAnimJoint787.NameField := 'l_carpal';
HAnimJoint787.Center := Vector3(0.1818,-0.1069,0.7157);
HAnimSegment788 := THAnimSegmentNode.Create;
HAnimSegment788.NameField := 'SEGMENT_FOR_l_carpal';
TouchSensor789 := TTouchSensorNode.Create;
TouchSensor789.Description := 'joint l_carpal segment SEGMENT_FOR_l_carpal';
{ .AddChildren }
HAnimSegment788.AddChildren([TouchSensor789]);
Transform790 := TTransformNode.Create;
Transform790.Translation := Vector3(0.1818,-0.1069,0.7157);
Shape791 := Shape17;
{ .AddChild }
Transform790.AddChildren([Shape791]);
{ .AddChildren }
HAnimSegment788.AddChildren([Transform790]);
HAnimSite792 := THAnimSiteNode.Create;
HAnimSite792.NameField := 'SEGMENT_FOR_l_carpal_tip';
Transform793 := TTransformNode.Create;
Transform793.Translation := Vector3(0.1818,-0.1069,0.7157);
Shape794 := Shape12;
{ .AddChild }
Transform793.AddChildren([Shape794]);
{ .AddChildren }
HAnimSite792.AddChildren([Transform793]);
{ .AddChildren }
HAnimSegment788.AddChildren([HAnimSite792]);
{ .AddChildren }
HAnimJoint787.AddChildren([HAnimSegment788]);
HAnimJoint795 := THAnimJointNode.Create;
HAnimJoint795.NameField := 'l_trapezium';
HAnimJoint795.Center := Vector3(0.1811,-0.0826,0.6975);
HAnimSegment796 := THAnimSegmentNode.Create;
HAnimSegment796.NameField := 'SEGMENT_FOR_l_trapezium';
TouchSensor797 := TTouchSensorNode.Create;
TouchSensor797.Description := 'joint l_trapezium segment SEGMENT_FOR_l_trapezium';
{ .AddChildren }
HAnimSegment796.AddChildren([TouchSensor797]);
Transform798 := TTransformNode.Create;
Transform798.Translation := Vector3(0.1811,-0.0826,0.6975);
Shape799 := Shape17;
{ .AddChild }
Transform798.AddChildren([Shape799]);
{ .AddChildren }
HAnimSegment796.AddChildren([Transform798]);
HAnimSite800 := THAnimSiteNode.Create;
HAnimSite800.NameField := 'SEGMENT_FOR_l_trapezium_tip';
Transform801 := TTransformNode.Create;
Transform801.Translation := Vector3(0.1811,-0.0826,0.6975);
Shape802 := Shape12;
{ .AddChild }
Transform801.AddChildren([Shape802]);
{ .AddChildren }
HAnimSite800.AddChildren([Transform801]);
{ .AddChildren }
HAnimSegment796.AddChildren([HAnimSite800]);
{ .AddChildren }
HAnimJoint795.AddChildren([HAnimSegment796]);
HAnimJoint803 := THAnimJointNode.Create;
HAnimJoint803.NameField := 'l_metacarpal_1';
HAnimJoint803.Center := Vector3(0.1803,-0.0759,0.684);
HAnimSegment804 := THAnimSegmentNode.Create;
HAnimSegment804.NameField := 'SEGMENT_FOR_l_metacarpal_1';
TouchSensor805 := TTouchSensorNode.Create;
TouchSensor805.Description := 'joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1';
{ .AddChildren }
HAnimSegment804.AddChildren([TouchSensor805]);
Transform806 := TTransformNode.Create;
Transform806.Translation := Vector3(0.1803,-0.0759,0.684);
Shape807 := Shape17;
{ .AddChild }
Transform806.AddChildren([Shape807]);
{ .AddChildren }
HAnimSegment804.AddChildren([Transform806]);
HAnimSite808 := THAnimSiteNode.Create;
HAnimSite808.NameField := 'SEGMENT_FOR_l_metacarpal_1_tip';
Transform809 := TTransformNode.Create;
Transform809.Translation := Vector3(0.1803,-0.0759,0.684);
Shape810 := Shape12;
{ .AddChild }
Transform809.AddChildren([Shape810]);
{ .AddChildren }
HAnimSite808.AddChildren([Transform809]);
{ .AddChildren }
HAnimSegment804.AddChildren([HAnimSite808]);
{ .AddChildren }
HAnimJoint803.AddChildren([HAnimSegment804]);
HAnimJoint811 := THAnimJointNode.Create;
HAnimJoint811.NameField := 'l_carpal_proximal_phalanx_1';
HAnimJoint811.Center := Vector3(0.1809,-0.0661,0.6642);
HAnimSegment812 := THAnimSegmentNode.Create;
HAnimSegment812.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_1';
TouchSensor813 := TTouchSensorNode.Create;
TouchSensor813.Description := 'joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment812.AddChildren([TouchSensor813]);
Transform814 := TTransformNode.Create;
Transform814.Translation := Vector3(0.1809,-0.0661,0.6642);
Shape815 := Shape17;
{ .AddChild }
Transform814.AddChildren([Shape815]);
{ .AddChildren }
HAnimSegment812.AddChildren([Transform814]);
HAnimSite816 := THAnimSiteNode.Create;
HAnimSite816.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip';
Transform817 := TTransformNode.Create;
Transform817.Translation := Vector3(0.1809,-0.0661,0.6642);
Shape818 := Shape12;
{ .AddChild }
Transform817.AddChildren([Shape818]);
{ .AddChildren }
HAnimSite816.AddChildren([Transform817]);
{ .AddChildren }
HAnimSegment812.AddChildren([HAnimSite816]);
{ .AddChildren }
HAnimJoint811.AddChildren([HAnimSegment812]);
HAnimJoint819 := THAnimJointNode.Create;
HAnimJoint819.NameField := 'l_carpal_distal_phalanx_1';
HAnimJoint819.Center := Vector3(0.1825,-0.0522,0.6455);
HAnimSegment820 := THAnimSegmentNode.Create;
HAnimSegment820.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_1';
TouchSensor821 := TTouchSensorNode.Create;
TouchSensor821.Description := 'joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment820.AddChildren([TouchSensor821]);
Transform822 := TTransformNode.Create;
Transform822.Translation := Vector3(0.1825,-0.0522,0.6455);
Shape823 := Shape17;
{ .AddChild }
Transform822.AddChildren([Shape823]);
{ .AddChildren }
HAnimSegment820.AddChildren([Transform822]);
HAnimSite824 := THAnimSiteNode.Create;
HAnimSite824.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_1_tip';
Transform825 := TTransformNode.Create;
Transform825.Translation := Vector3(0.1825,-0.0522,0.6455);
Shape826 := Shape12;
{ .AddChild }
Transform825.AddChildren([Shape826]);
{ .AddChildren }
HAnimSite824.AddChildren([Transform825]);
{ .AddChildren }
HAnimSegment820.AddChildren([HAnimSite824]);
{ .AddChildren }
HAnimJoint819.AddChildren([HAnimSegment820]);
{ .AddChildren }
HAnimJoint811.AddChildren([HAnimJoint819]);
{ .AddChildren }
HAnimJoint803.AddChildren([HAnimJoint811]);
{ .AddChildren }
HAnimJoint795.AddChildren([HAnimJoint803]);
{ .AddChildren }
HAnimJoint787.AddChildren([HAnimJoint795]);
HAnimJoint827 := THAnimJointNode.Create;
HAnimJoint827.NameField := 'l_trapezoid';
HAnimJoint827.Center := Vector3(0.1811,-0.0935,0.6984);
HAnimSegment828 := THAnimSegmentNode.Create;
HAnimSegment828.NameField := 'SEGMENT_FOR_l_trapezoid';
TouchSensor829 := TTouchSensorNode.Create;
TouchSensor829.Description := 'joint l_trapezoid segment SEGMENT_FOR_l_trapezoid';
{ .AddChildren }
HAnimSegment828.AddChildren([TouchSensor829]);
Transform830 := TTransformNode.Create;
Transform830.Translation := Vector3(0.1811,-0.0935,0.6984);
Shape831 := Shape17;
{ .AddChild }
Transform830.AddChildren([Shape831]);
{ .AddChildren }
HAnimSegment828.AddChildren([Transform830]);
HAnimSite832 := THAnimSiteNode.Create;
HAnimSite832.NameField := 'SEGMENT_FOR_l_trapezoid_tip';
Transform833 := TTransformNode.Create;
Transform833.Translation := Vector3(0.1811,-0.0935,0.6984);
Shape834 := Shape12;
{ .AddChild }
Transform833.AddChildren([Shape834]);
{ .AddChildren }
HAnimSite832.AddChildren([Transform833]);
{ .AddChildren }
HAnimSegment828.AddChildren([HAnimSite832]);
{ .AddChildren }
HAnimJoint827.AddChildren([HAnimSegment828]);
HAnimJoint835 := THAnimJointNode.Create;
HAnimJoint835.NameField := 'l_metacarpal_2';
HAnimJoint835.Center := Vector3(0.1811,-0.0922,0.679);
HAnimSegment836 := THAnimSegmentNode.Create;
HAnimSegment836.NameField := 'SEGMENT_FOR_l_metacarpal_2';
TouchSensor837 := TTouchSensorNode.Create;
TouchSensor837.Description := 'joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2';
{ .AddChildren }
HAnimSegment836.AddChildren([TouchSensor837]);
Transform838 := TTransformNode.Create;
Transform838.Translation := Vector3(0.1811,-0.0922,0.679);
Shape839 := Shape17;
{ .AddChild }
Transform838.AddChildren([Shape839]);
{ .AddChildren }
HAnimSegment836.AddChildren([Transform838]);
HAnimSite840 := THAnimSiteNode.Create;
HAnimSite840.NameField := 'SEGMENT_FOR_l_metacarpal_2_tip';
Transform841 := TTransformNode.Create;
Transform841.Translation := Vector3(0.1811,-0.0922,0.679);
Shape842 := Shape12;
{ .AddChild }
Transform841.AddChildren([Shape842]);
{ .AddChildren }
HAnimSite840.AddChildren([Transform841]);
{ .AddChildren }
HAnimSegment836.AddChildren([HAnimSite840]);
{ .AddChildren }
HAnimJoint835.AddChildren([HAnimSegment836]);
HAnimJoint843 := THAnimJointNode.Create;
HAnimJoint843.NameField := 'l_carpal_proximal_phalanx_2';
HAnimJoint843.Center := Vector3(0.1836,-0.0868,0.6286);
HAnimSegment844 := THAnimSegmentNode.Create;
HAnimSegment844.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_2';
TouchSensor845 := TTouchSensorNode.Create;
TouchSensor845.Description := 'joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment844.AddChildren([TouchSensor845]);
Transform846 := TTransformNode.Create;
Transform846.Translation := Vector3(0.1836,-0.0868,0.6286);
Shape847 := Shape17;
{ .AddChild }
Transform846.AddChildren([Shape847]);
{ .AddChildren }
HAnimSegment844.AddChildren([Transform846]);
HAnimSite848 := THAnimSiteNode.Create;
HAnimSite848.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip';
Transform849 := TTransformNode.Create;
Transform849.Translation := Vector3(0.1836,-0.0868,0.6286);
Shape850 := Shape12;
{ .AddChild }
Transform849.AddChildren([Shape850]);
{ .AddChildren }
HAnimSite848.AddChildren([Transform849]);
{ .AddChildren }
HAnimSegment844.AddChildren([HAnimSite848]);
{ .AddChildren }
HAnimJoint843.AddChildren([HAnimSegment844]);
HAnimJoint851 := THAnimJointNode.Create;
HAnimJoint851.NameField := 'l_carpal_middle_phalanx_2';
HAnimJoint851.Center := Vector3(0.1815,-0.0877,0.5983);
HAnimSegment852 := THAnimSegmentNode.Create;
HAnimSegment852.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_2';
TouchSensor853 := TTouchSensorNode.Create;
TouchSensor853.Description := 'joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment852.AddChildren([TouchSensor853]);
Transform854 := TTransformNode.Create;
Transform854.Translation := Vector3(0.1815,-0.0877,0.5983);
Shape855 := Shape17;
{ .AddChild }
Transform854.AddChildren([Shape855]);
{ .AddChildren }
HAnimSegment852.AddChildren([Transform854]);
HAnimSite856 := THAnimSiteNode.Create;
HAnimSite856.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_2_tip';
Transform857 := TTransformNode.Create;
Transform857.Translation := Vector3(0.1815,-0.0877,0.5983);
Shape858 := Shape12;
{ .AddChild }
Transform857.AddChildren([Shape858]);
{ .AddChildren }
HAnimSite856.AddChildren([Transform857]);
{ .AddChildren }
HAnimSegment852.AddChildren([HAnimSite856]);
{ .AddChildren }
HAnimJoint851.AddChildren([HAnimSegment852]);
HAnimJoint859 := THAnimJointNode.Create;
HAnimJoint859.NameField := 'l_carpal_distal_phalanx_2';
HAnimJoint859.Center := Vector3(0.1805,-0.0885,0.5731);
HAnimSegment860 := THAnimSegmentNode.Create;
HAnimSegment860.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_2';
TouchSensor861 := TTouchSensorNode.Create;
TouchSensor861.Description := 'joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment860.AddChildren([TouchSensor861]);
Transform862 := TTransformNode.Create;
Transform862.Translation := Vector3(0.1805,-0.0885,0.5731);
Shape863 := Shape17;
{ .AddChild }
Transform862.AddChildren([Shape863]);
{ .AddChildren }
HAnimSegment860.AddChildren([Transform862]);
HAnimSite864 := THAnimSiteNode.Create;
HAnimSite864.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_2_tip';
Transform865 := TTransformNode.Create;
Transform865.Translation := Vector3(0.1805,-0.0885,0.5731);
Shape866 := Shape12;
{ .AddChild }
Transform865.AddChildren([Shape866]);
{ .AddChildren }
HAnimSite864.AddChildren([Transform865]);
{ .AddChildren }
HAnimSegment860.AddChildren([HAnimSite864]);
{ .AddChildren }
HAnimJoint859.AddChildren([HAnimSegment860]);
{ .AddChildren }
HAnimJoint851.AddChildren([HAnimJoint859]);
{ .AddChildren }
HAnimJoint843.AddChildren([HAnimJoint851]);
{ .AddChildren }
HAnimJoint835.AddChildren([HAnimJoint843]);
{ .AddChildren }
HAnimJoint827.AddChildren([HAnimJoint835]);
{ .AddChildren }
HAnimJoint787.AddChildren([HAnimJoint827]);
HAnimJoint867 := THAnimJointNode.Create;
HAnimJoint867.NameField := 'l_capitate';
HAnimJoint867.Center := Vector3(0.1809,-0.1067,0.7);
HAnimSegment868 := THAnimSegmentNode.Create;
HAnimSegment868.NameField := 'SEGMENT_FOR_l_capitate';
TouchSensor869 := TTouchSensorNode.Create;
TouchSensor869.Description := 'joint l_capitate segment SEGMENT_FOR_l_capitate';
{ .AddChildren }
HAnimSegment868.AddChildren([TouchSensor869]);
Transform870 := TTransformNode.Create;
Transform870.Translation := Vector3(0.1809,-0.1067,0.7);
Shape871 := Shape17;
{ .AddChild }
Transform870.AddChildren([Shape871]);
{ .AddChildren }
HAnimSegment868.AddChildren([Transform870]);
HAnimSite872 := THAnimSiteNode.Create;
HAnimSite872.NameField := 'SEGMENT_FOR_l_capitate_tip';
Transform873 := TTransformNode.Create;
Transform873.Translation := Vector3(0.1809,-0.1067,0.7);
Shape874 := Shape12;
{ .AddChild }
Transform873.AddChildren([Shape874]);
{ .AddChildren }
HAnimSite872.AddChildren([Transform873]);
{ .AddChildren }
HAnimSegment868.AddChildren([HAnimSite872]);
{ .AddChildren }
HAnimJoint867.AddChildren([HAnimSegment868]);
HAnimJoint875 := THAnimJointNode.Create;
HAnimJoint875.NameField := 'l_metacarpal_3';
HAnimJoint875.Center := Vector3(0.1809,-0.1081,0.6772);
HAnimSegment876 := THAnimSegmentNode.Create;
HAnimSegment876.NameField := 'SEGMENT_FOR_l_metacarpal_3';
TouchSensor877 := TTouchSensorNode.Create;
TouchSensor877.Description := 'joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3';
{ .AddChildren }
HAnimSegment876.AddChildren([TouchSensor877]);
Transform878 := TTransformNode.Create;
Transform878.Translation := Vector3(0.1809,-0.1081,0.6772);
Shape879 := Shape17;
{ .AddChild }
Transform878.AddChildren([Shape879]);
{ .AddChildren }
HAnimSegment876.AddChildren([Transform878]);
HAnimSite880 := THAnimSiteNode.Create;
HAnimSite880.NameField := 'SEGMENT_FOR_l_metacarpal_3_tip';
Transform881 := TTransformNode.Create;
Transform881.Translation := Vector3(0.1809,-0.1081,0.6772);
Shape882 := Shape12;
{ .AddChild }
Transform881.AddChildren([Shape882]);
{ .AddChildren }
HAnimSite880.AddChildren([Transform881]);
{ .AddChildren }
HAnimSegment876.AddChildren([HAnimSite880]);
{ .AddChildren }
HAnimJoint875.AddChildren([HAnimSegment876]);
HAnimJoint883 := THAnimJointNode.Create;
HAnimJoint883.NameField := 'l_carpal_proximal_phalanx_3';
HAnimJoint883.Center := Vector3(0.1835,-0.1058,0.6264);
HAnimSegment884 := THAnimSegmentNode.Create;
HAnimSegment884.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_3';
TouchSensor885 := TTouchSensorNode.Create;
TouchSensor885.Description := 'joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment884.AddChildren([TouchSensor885]);
Transform886 := TTransformNode.Create;
Transform886.Translation := Vector3(0.1835,-0.1058,0.6264);
Shape887 := Shape17;
{ .AddChild }
Transform886.AddChildren([Shape887]);
{ .AddChildren }
HAnimSegment884.AddChildren([Transform886]);
HAnimSite888 := THAnimSiteNode.Create;
HAnimSite888.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip';
Transform889 := TTransformNode.Create;
Transform889.Translation := Vector3(0.1835,-0.1058,0.6264);
Shape890 := Shape12;
{ .AddChild }
Transform889.AddChildren([Shape890]);
{ .AddChildren }
HAnimSite888.AddChildren([Transform889]);
{ .AddChildren }
HAnimSegment884.AddChildren([HAnimSite888]);
{ .AddChildren }
HAnimJoint883.AddChildren([HAnimSegment884]);
HAnimJoint891 := THAnimJointNode.Create;
HAnimJoint891.NameField := 'l_carpal_middle_phalanx_3';
HAnimJoint891.Center := Vector3(0.1815,-0.1054,0.5947);
HAnimSegment892 := THAnimSegmentNode.Create;
HAnimSegment892.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_3';
TouchSensor893 := TTouchSensorNode.Create;
TouchSensor893.Description := 'joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment892.AddChildren([TouchSensor893]);
Transform894 := TTransformNode.Create;
Transform894.Translation := Vector3(0.1815,-0.1054,0.5947);
Shape895 := Shape17;
{ .AddChild }
Transform894.AddChildren([Shape895]);
{ .AddChildren }
HAnimSegment892.AddChildren([Transform894]);
HAnimSite896 := THAnimSiteNode.Create;
HAnimSite896.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_3_tip';
Transform897 := TTransformNode.Create;
Transform897.Translation := Vector3(0.1815,-0.1054,0.5947);
Shape898 := Shape12;
{ .AddChild }
Transform897.AddChildren([Shape898]);
{ .AddChildren }
HAnimSite896.AddChildren([Transform897]);
{ .AddChildren }
HAnimSegment892.AddChildren([HAnimSite896]);
{ .AddChildren }
HAnimJoint891.AddChildren([HAnimSegment892]);
HAnimJoint899 := THAnimJointNode.Create;
HAnimJoint899.NameField := 'l_carpal_distal_phalanx_3';
HAnimJoint899.Center := Vector3(0.1805,-0.1056,0.5668);
HAnimSegment900 := THAnimSegmentNode.Create;
HAnimSegment900.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_3';
TouchSensor901 := TTouchSensorNode.Create;
TouchSensor901.Description := 'joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment900.AddChildren([TouchSensor901]);
Transform902 := TTransformNode.Create;
Transform902.Translation := Vector3(0.1805,-0.1056,0.5668);
Shape903 := Shape17;
{ .AddChild }
Transform902.AddChildren([Shape903]);
{ .AddChildren }
HAnimSegment900.AddChildren([Transform902]);
HAnimSite904 := THAnimSiteNode.Create;
HAnimSite904.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_3_tip';
Transform905 := TTransformNode.Create;
Transform905.Translation := Vector3(0.1805,-0.1056,0.5668);
Shape906 := Shape12;
{ .AddChild }
Transform905.AddChildren([Shape906]);
{ .AddChildren }
HAnimSite904.AddChildren([Transform905]);
{ .AddChildren }
HAnimSegment900.AddChildren([HAnimSite904]);
{ .AddChildren }
HAnimJoint899.AddChildren([HAnimSegment900]);
{ .AddChildren }
HAnimJoint891.AddChildren([HAnimJoint899]);
{ .AddChildren }
HAnimJoint883.AddChildren([HAnimJoint891]);
{ .AddChildren }
HAnimJoint875.AddChildren([HAnimJoint883]);
{ .AddChildren }
HAnimJoint867.AddChildren([HAnimJoint875]);
{ .AddChildren }
HAnimJoint787.AddChildren([HAnimJoint867]);
HAnimJoint907 := THAnimJointNode.Create;
HAnimJoint907.NameField := 'l_hamate';
HAnimJoint907.Center := Vector3(0.1809,-0.1276,0.6973);
HAnimSegment908 := THAnimSegmentNode.Create;
HAnimSegment908.NameField := 'SEGMENT_FOR_l_hamate';
TouchSensor909 := TTouchSensorNode.Create;
TouchSensor909.Description := 'joint l_hamate segment SEGMENT_FOR_l_hamate';
{ .AddChildren }
HAnimSegment908.AddChildren([TouchSensor909]);
Transform910 := TTransformNode.Create;
Transform910.Translation := Vector3(0.1809,-0.1276,0.6973);
Shape911 := Shape17;
{ .AddChild }
Transform910.AddChildren([Shape911]);
{ .AddChildren }
HAnimSegment908.AddChildren([Transform910]);
HAnimSite912 := THAnimSiteNode.Create;
HAnimSite912.NameField := 'SEGMENT_FOR_l_hamate_tip';
Transform913 := TTransformNode.Create;
Transform913.Translation := Vector3(0.1809,-0.1276,0.6973);
Shape914 := Shape12;
{ .AddChild }
Transform913.AddChildren([Shape914]);
{ .AddChildren }
HAnimSite912.AddChildren([Transform913]);
{ .AddChildren }
HAnimSegment908.AddChildren([HAnimSite912]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimSegment908]);
HAnimJoint915 := THAnimJointNode.Create;
HAnimJoint915.NameField := 'l_metacarpal_4';
HAnimJoint915.Center := Vector3(0.1809,-0.1218,0.6777);
HAnimSegment916 := THAnimSegmentNode.Create;
HAnimSegment916.NameField := 'SEGMENT_FOR_l_metacarpal_4';
TouchSensor917 := TTouchSensorNode.Create;
TouchSensor917.Description := 'joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4';
{ .AddChildren }
HAnimSegment916.AddChildren([TouchSensor917]);
Transform918 := TTransformNode.Create;
Transform918.Translation := Vector3(0.1809,-0.1218,0.6777);
Shape919 := Shape17;
{ .AddChild }
Transform918.AddChildren([Shape919]);
{ .AddChildren }
HAnimSegment916.AddChildren([Transform918]);
HAnimSite920 := THAnimSiteNode.Create;
HAnimSite920.NameField := 'SEGMENT_FOR_l_metacarpal_4_tip';
Transform921 := TTransformNode.Create;
Transform921.Translation := Vector3(0.1809,-0.1218,0.6777);
Shape922 := Shape12;
{ .AddChild }
Transform921.AddChildren([Shape922]);
{ .AddChildren }
HAnimSite920.AddChildren([Transform921]);
{ .AddChildren }
HAnimSegment916.AddChildren([HAnimSite920]);
{ .AddChildren }
HAnimJoint915.AddChildren([HAnimSegment916]);
HAnimJoint923 := THAnimJointNode.Create;
HAnimJoint923.NameField := 'l_carpal_proximal_phalanx_4';
HAnimJoint923.Center := Vector3(0.1835,-0.1233,0.6255);
HAnimSegment924 := THAnimSegmentNode.Create;
HAnimSegment924.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_4';
TouchSensor925 := TTouchSensorNode.Create;
TouchSensor925.Description := 'joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment924.AddChildren([TouchSensor925]);
Transform926 := TTransformNode.Create;
Transform926.Translation := Vector3(0.1835,-0.1233,0.6255);
Shape927 := Shape17;
{ .AddChild }
Transform926.AddChildren([Shape927]);
{ .AddChildren }
HAnimSegment924.AddChildren([Transform926]);
HAnimSite928 := THAnimSiteNode.Create;
HAnimSite928.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip';
Transform929 := TTransformNode.Create;
Transform929.Translation := Vector3(0.1835,-0.1233,0.6255);
Shape930 := Shape12;
{ .AddChild }
Transform929.AddChildren([Shape930]);
{ .AddChildren }
HAnimSite928.AddChildren([Transform929]);
{ .AddChildren }
HAnimSegment924.AddChildren([HAnimSite928]);
{ .AddChildren }
HAnimJoint923.AddChildren([HAnimSegment924]);
HAnimJoint931 := THAnimJointNode.Create;
HAnimJoint931.NameField := 'l_carpal_middle_phalanx_4';
HAnimJoint931.Center := Vector3(0.1815,-0.1225,0.598);
HAnimSegment932 := THAnimSegmentNode.Create;
HAnimSegment932.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_4';
TouchSensor933 := TTouchSensorNode.Create;
TouchSensor933.Description := 'joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment932.AddChildren([TouchSensor933]);
Transform934 := TTransformNode.Create;
Transform934.Translation := Vector3(0.1815,-0.1225,0.598);
Shape935 := Shape17;
{ .AddChild }
Transform934.AddChildren([Shape935]);
{ .AddChildren }
HAnimSegment932.AddChildren([Transform934]);
HAnimSite936 := THAnimSiteNode.Create;
HAnimSite936.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_4_tip';
Transform937 := TTransformNode.Create;
Transform937.Translation := Vector3(0.1815,-0.1225,0.598);
Shape938 := Shape12;
{ .AddChild }
Transform937.AddChildren([Shape938]);
{ .AddChildren }
HAnimSite936.AddChildren([Transform937]);
{ .AddChildren }
HAnimSegment932.AddChildren([HAnimSite936]);
{ .AddChildren }
HAnimJoint931.AddChildren([HAnimSegment932]);
HAnimJoint939 := THAnimJointNode.Create;
HAnimJoint939.NameField := 'l_carpal_distal_phalanx_4';
HAnimJoint939.Center := Vector3(0.1805,-0.1217,0.5722);
HAnimSegment940 := THAnimSegmentNode.Create;
HAnimSegment940.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_4';
TouchSensor941 := TTouchSensorNode.Create;
TouchSensor941.Description := 'joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment940.AddChildren([TouchSensor941]);
Transform942 := TTransformNode.Create;
Transform942.Translation := Vector3(0.1805,-0.1217,0.5722);
Shape943 := Shape17;
{ .AddChild }
Transform942.AddChildren([Shape943]);
{ .AddChildren }
HAnimSegment940.AddChildren([Transform942]);
HAnimSite944 := THAnimSiteNode.Create;
HAnimSite944.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_4_tip';
Transform945 := TTransformNode.Create;
Transform945.Translation := Vector3(0.1805,-0.1217,0.5722);
Shape946 := Shape12;
{ .AddChild }
Transform945.AddChildren([Shape946]);
{ .AddChildren }
HAnimSite944.AddChildren([Transform945]);
{ .AddChildren }
HAnimSegment940.AddChildren([HAnimSite944]);
{ .AddChildren }
HAnimJoint939.AddChildren([HAnimSegment940]);
{ .AddChildren }
HAnimJoint931.AddChildren([HAnimJoint939]);
{ .AddChildren }
HAnimJoint923.AddChildren([HAnimJoint931]);
{ .AddChildren }
HAnimJoint915.AddChildren([HAnimJoint923]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimJoint915]);
HAnimJoint947 := THAnimJointNode.Create;
HAnimJoint947.NameField := 'l_metacarpal_5';
HAnimJoint947.Center := Vector3(0.1815,-0.1347,0.6797);
HAnimSegment948 := THAnimSegmentNode.Create;
HAnimSegment948.NameField := 'SEGMENT_FOR_l_metacarpal_5';
TouchSensor949 := TTouchSensorNode.Create;
TouchSensor949.Description := 'joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5';
{ .AddChildren }
HAnimSegment948.AddChildren([TouchSensor949]);
Transform950 := TTransformNode.Create;
Transform950.Translation := Vector3(0.1815,-0.1347,0.6797);
Shape951 := Shape17;
{ .AddChild }
Transform950.AddChildren([Shape951]);
{ .AddChildren }
HAnimSegment948.AddChildren([Transform950]);
HAnimSite952 := THAnimSiteNode.Create;
HAnimSite952.NameField := 'SEGMENT_FOR_l_metacarpal_5_tip';
Transform953 := TTransformNode.Create;
Transform953.Translation := Vector3(0.1815,-0.1347,0.6797);
Shape954 := Shape12;
{ .AddChild }
Transform953.AddChildren([Shape954]);
{ .AddChildren }
HAnimSite952.AddChildren([Transform953]);
{ .AddChildren }
HAnimSegment948.AddChildren([HAnimSite952]);
{ .AddChildren }
HAnimJoint947.AddChildren([HAnimSegment948]);
HAnimJoint955 := THAnimJointNode.Create;
HAnimJoint955.NameField := 'l_carpal_proximal_phalanx_5';
HAnimJoint955.Center := Vector3(0.1832,-0.1389,0.6295);
HAnimSegment956 := THAnimSegmentNode.Create;
HAnimSegment956.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_5';
TouchSensor957 := TTouchSensorNode.Create;
TouchSensor957.Description := 'joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment956.AddChildren([TouchSensor957]);
Transform958 := TTransformNode.Create;
Transform958.Translation := Vector3(0.1832,-0.1389,0.6295);
Shape959 := Shape17;
{ .AddChild }
Transform958.AddChildren([Shape959]);
{ .AddChildren }
HAnimSegment956.AddChildren([Transform958]);
HAnimSite960 := THAnimSiteNode.Create;
HAnimSite960.NameField := 'SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip';
Transform961 := TTransformNode.Create;
Transform961.Translation := Vector3(0.1832,-0.1389,0.6295);
Shape962 := Shape12;
{ .AddChild }
Transform961.AddChildren([Shape962]);
{ .AddChildren }
HAnimSite960.AddChildren([Transform961]);
{ .AddChildren }
HAnimSegment956.AddChildren([HAnimSite960]);
{ .AddChildren }
HAnimJoint955.AddChildren([HAnimSegment956]);
HAnimJoint963 := THAnimJointNode.Create;
HAnimJoint963.NameField := 'l_carpal_middle_phalanx_5';
HAnimJoint963.Center := Vector3(0.1815,-0.139,0.6124);
HAnimSegment964 := THAnimSegmentNode.Create;
HAnimSegment964.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_5';
TouchSensor965 := TTouchSensorNode.Create;
TouchSensor965.Description := 'joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment964.AddChildren([TouchSensor965]);
Transform966 := TTransformNode.Create;
Transform966.Translation := Vector3(0.1815,-0.139,0.6124);
Shape967 := Shape17;
{ .AddChild }
Transform966.AddChildren([Shape967]);
{ .AddChildren }
HAnimSegment964.AddChildren([Transform966]);
HAnimSite968 := THAnimSiteNode.Create;
HAnimSite968.NameField := 'SEGMENT_FOR_l_carpal_middle_phalanx_5_tip';
Transform969 := TTransformNode.Create;
Transform969.Translation := Vector3(0.1815,-0.139,0.6124);
Shape970 := Shape12;
{ .AddChild }
Transform969.AddChildren([Shape970]);
{ .AddChildren }
HAnimSite968.AddChildren([Transform969]);
{ .AddChildren }
HAnimSegment964.AddChildren([HAnimSite968]);
{ .AddChildren }
HAnimJoint963.AddChildren([HAnimSegment964]);
HAnimJoint971 := THAnimJointNode.Create;
HAnimJoint971.NameField := 'l_carpal_distal_phalanx_5';
HAnimJoint971.Center := Vector3(0.1806,-0.1388,0.5938);
HAnimSegment972 := THAnimSegmentNode.Create;
HAnimSegment972.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_5';
TouchSensor973 := TTouchSensorNode.Create;
TouchSensor973.Description := 'joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment972.AddChildren([TouchSensor973]);
Transform974 := TTransformNode.Create;
Transform974.Translation := Vector3(0.1806,-0.1388,0.5938);
Shape975 := Shape17;
{ .AddChild }
Transform974.AddChildren([Shape975]);
{ .AddChildren }
HAnimSegment972.AddChildren([Transform974]);
HAnimSite976 := THAnimSiteNode.Create;
HAnimSite976.NameField := 'SEGMENT_FOR_l_carpal_distal_phalanx_5_tip';
Transform977 := TTransformNode.Create;
Transform977.Translation := Vector3(0.1806,-0.1388,0.5938);
Shape978 := Shape12;
{ .AddChild }
Transform977.AddChildren([Shape978]);
{ .AddChildren }
HAnimSite976.AddChildren([Transform977]);
{ .AddChildren }
HAnimSegment972.AddChildren([HAnimSite976]);
{ .AddChildren }
HAnimJoint971.AddChildren([HAnimSegment972]);
{ .AddChildren }
HAnimJoint963.AddChildren([HAnimJoint971]);
{ .AddChildren }
HAnimJoint955.AddChildren([HAnimJoint963]);
{ .AddChildren }
HAnimJoint947.AddChildren([HAnimJoint955]);
{ .AddChildren }
HAnimJoint907.AddChildren([HAnimJoint947]);
{ .AddChildren }
HAnimJoint787.AddChildren([HAnimJoint907]);
{ .AddChildren }
HAnimJoint779.AddChildren([HAnimJoint787]);
{ .AddChildren }
HAnimJoint771.AddChildren([HAnimJoint779]);
{ .AddChildren }
HAnimJoint763.AddChildren([HAnimJoint771]);
{ .AddChildren }
HAnimJoint755.AddChildren([HAnimJoint763]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint755]);
HAnimJoint979 := THAnimJointNode.Create;
HAnimJoint979.NameField := 'r_clavicle';
HAnimJoint979.Center := Vector3(-0.1231,-0.1148,1.1833);
HAnimSegment980 := THAnimSegmentNode.Create;
HAnimSegment980.NameField := 'SEGMENT_FOR_r_clavicle';
TouchSensor981 := TTouchSensorNode.Create;
TouchSensor981.Description := 'joint r_clavicle segment SEGMENT_FOR_r_clavicle';
{ .AddChildren }
HAnimSegment980.AddChildren([TouchSensor981]);
Transform982 := TTransformNode.Create;
Transform982.Translation := Vector3(-0.1231,-0.1148,1.1833);
Shape983 := Shape17;
{ .AddChild }
Transform982.AddChildren([Shape983]);
{ .AddChildren }
HAnimSegment980.AddChildren([Transform982]);
HAnimSite984 := THAnimSiteNode.Create;
HAnimSite984.NameField := 'SEGMENT_FOR_r_clavicle_tip';
Transform985 := TTransformNode.Create;
Transform985.Translation := Vector3(-0.1231,-0.1148,1.1833);
Shape986 := Shape12;
{ .AddChild }
Transform985.AddChildren([Shape986]);
{ .AddChildren }
HAnimSite984.AddChildren([Transform985]);
{ .AddChildren }
HAnimSegment980.AddChildren([HAnimSite984]);
{ .AddChildren }
HAnimJoint979.AddChildren([HAnimSegment980]);
HAnimJoint987 := THAnimJointNode.Create;
HAnimJoint987.NameField := 'r_scapula';
HAnimJoint987.Center := Vector3(-0.0387,-0.1157,1.2001);
HAnimSegment988 := THAnimSegmentNode.Create;
HAnimSegment988.NameField := 'SEGMENT_FOR_r_scapula';
TouchSensor989 := TTouchSensorNode.Create;
TouchSensor989.Description := 'joint r_scapula segment SEGMENT_FOR_r_scapula';
{ .AddChildren }
HAnimSegment988.AddChildren([TouchSensor989]);
Transform990 := TTransformNode.Create;
Transform990.Translation := Vector3(-0.0387,-0.1157,1.2001);
Shape991 := Shape17;
{ .AddChild }
Transform990.AddChildren([Shape991]);
{ .AddChildren }
HAnimSegment988.AddChildren([Transform990]);
HAnimSite992 := THAnimSiteNode.Create;
HAnimSite992.NameField := 'SEGMENT_FOR_r_scapula_tip';
Transform993 := TTransformNode.Create;
Transform993.Translation := Vector3(-0.0387,-0.1157,1.2001);
Shape994 := Shape12;
{ .AddChild }
Transform993.AddChildren([Shape994]);
{ .AddChildren }
HAnimSite992.AddChildren([Transform993]);
{ .AddChildren }
HAnimSegment988.AddChildren([HAnimSite992]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimSegment988]);
HAnimJoint995 := THAnimJointNode.Create;
HAnimJoint995.NameField := 'r_upperarm';
HAnimJoint995.Center := Vector3(-0.1649,-0.1051,1.17);
HAnimSegment996 := THAnimSegmentNode.Create;
HAnimSegment996.NameField := 'SEGMENT_FOR_r_upperarm';
TouchSensor997 := TTouchSensorNode.Create;
TouchSensor997.Description := 'joint r_upperarm segment SEGMENT_FOR_r_upperarm';
{ .AddChildren }
HAnimSegment996.AddChildren([TouchSensor997]);
Transform998 := TTransformNode.Create;
Transform998.Translation := Vector3(-0.1649,-0.1051,1.17);
Shape999 := Shape17;
{ .AddChild }
Transform998.AddChildren([Shape999]);
{ .AddChildren }
HAnimSegment996.AddChildren([Transform998]);
HAnimSite1000 := THAnimSiteNode.Create;
HAnimSite1000.NameField := 'SEGMENT_FOR_r_upperarm_tip';
Transform1001 := TTransformNode.Create;
Transform1001.Translation := Vector3(-0.1649,-0.1051,1.17);
Shape1002 := Shape12;
{ .AddChild }
Transform1001.AddChildren([Shape1002]);
{ .AddChildren }
HAnimSite1000.AddChildren([Transform1001]);
{ .AddChildren }
HAnimSegment996.AddChildren([HAnimSite1000]);
{ .AddChildren }
HAnimJoint995.AddChildren([HAnimSegment996]);
HAnimJoint1003 := THAnimJointNode.Create;
HAnimJoint1003.NameField := 'r_forearm';
HAnimJoint1003.Center := Vector3(-0.1819,-0.1075,0.9202);
HAnimSegment1004 := THAnimSegmentNode.Create;
HAnimSegment1004.NameField := 'SEGMENT_FOR_r_forearm';
TouchSensor1005 := TTouchSensorNode.Create;
TouchSensor1005.Description := 'joint r_forearm segment SEGMENT_FOR_r_forearm';
{ .AddChildren }
HAnimSegment1004.AddChildren([TouchSensor1005]);
Transform1006 := TTransformNode.Create;
Transform1006.Translation := Vector3(-0.1819,-0.1075,0.9202);
Shape1007 := Shape17;
{ .AddChild }
Transform1006.AddChildren([Shape1007]);
{ .AddChildren }
HAnimSegment1004.AddChildren([Transform1006]);
HAnimSite1008 := THAnimSiteNode.Create;
HAnimSite1008.NameField := 'SEGMENT_FOR_r_forearm_tip';
Transform1009 := TTransformNode.Create;
Transform1009.Translation := Vector3(-0.1819,-0.1075,0.9202);
Shape1010 := Shape12;
{ .AddChild }
Transform1009.AddChildren([Shape1010]);
{ .AddChildren }
HAnimSite1008.AddChildren([Transform1009]);
{ .AddChildren }
HAnimSegment1004.AddChildren([HAnimSite1008]);
{ .AddChildren }
HAnimJoint1003.AddChildren([HAnimSegment1004]);
HAnimJoint1011 := THAnimJointNode.Create;
HAnimJoint1011.NameField := 'r_carpal';
HAnimJoint1011.Center := Vector3(-0.1818,-0.1069,0.7157);
HAnimSegment1012 := THAnimSegmentNode.Create;
HAnimSegment1012.NameField := 'SEGMENT_FOR_r_carpal';
TouchSensor1013 := TTouchSensorNode.Create;
TouchSensor1013.Description := 'joint r_carpal segment SEGMENT_FOR_r_carpal';
{ .AddChildren }
HAnimSegment1012.AddChildren([TouchSensor1013]);
Transform1014 := TTransformNode.Create;
Transform1014.Translation := Vector3(-0.1818,-0.1069,0.7157);
Shape1015 := Shape17;
{ .AddChild }
Transform1014.AddChildren([Shape1015]);
{ .AddChildren }
HAnimSegment1012.AddChildren([Transform1014]);
HAnimSite1016 := THAnimSiteNode.Create;
HAnimSite1016.NameField := 'SEGMENT_FOR_r_carpal_tip';
Transform1017 := TTransformNode.Create;
Transform1017.Translation := Vector3(-0.1818,-0.1069,0.7157);
Shape1018 := Shape12;
{ .AddChild }
Transform1017.AddChildren([Shape1018]);
{ .AddChildren }
HAnimSite1016.AddChildren([Transform1017]);
{ .AddChildren }
HAnimSegment1012.AddChildren([HAnimSite1016]);
{ .AddChildren }
HAnimJoint1011.AddChildren([HAnimSegment1012]);
HAnimJoint1019 := THAnimJointNode.Create;
HAnimJoint1019.NameField := 'r_trapezium';
HAnimJoint1019.Center := Vector3(-0.1811,-0.0826,0.6975);
HAnimSegment1020 := THAnimSegmentNode.Create;
HAnimSegment1020.NameField := 'SEGMENT_FOR_r_trapezium';
TouchSensor1021 := TTouchSensorNode.Create;
TouchSensor1021.Description := 'joint r_trapezium segment SEGMENT_FOR_r_trapezium';
{ .AddChildren }
HAnimSegment1020.AddChildren([TouchSensor1021]);
Transform1022 := TTransformNode.Create;
Transform1022.Translation := Vector3(-0.1811,-0.0826,0.6975);
Shape1023 := Shape17;
{ .AddChild }
Transform1022.AddChildren([Shape1023]);
{ .AddChildren }
HAnimSegment1020.AddChildren([Transform1022]);
HAnimSite1024 := THAnimSiteNode.Create;
HAnimSite1024.NameField := 'SEGMENT_FOR_r_trapezium_tip';
Transform1025 := TTransformNode.Create;
Transform1025.Translation := Vector3(-0.1811,-0.0826,0.6975);
Shape1026 := Shape12;
{ .AddChild }
Transform1025.AddChildren([Shape1026]);
{ .AddChildren }
HAnimSite1024.AddChildren([Transform1025]);
{ .AddChildren }
HAnimSegment1020.AddChildren([HAnimSite1024]);
{ .AddChildren }
HAnimJoint1019.AddChildren([HAnimSegment1020]);
HAnimJoint1027 := THAnimJointNode.Create;
HAnimJoint1027.NameField := 'r_metacarpal_1';
HAnimJoint1027.Center := Vector3(-0.1803,-0.0759,0.684);
HAnimSegment1028 := THAnimSegmentNode.Create;
HAnimSegment1028.NameField := 'SEGMENT_FOR_r_metacarpal_1';
TouchSensor1029 := TTouchSensorNode.Create;
TouchSensor1029.Description := 'joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1';
{ .AddChildren }
HAnimSegment1028.AddChildren([TouchSensor1029]);
Transform1030 := TTransformNode.Create;
Transform1030.Translation := Vector3(-0.1803,-0.0759,0.684);
Shape1031 := Shape17;
{ .AddChild }
Transform1030.AddChildren([Shape1031]);
{ .AddChildren }
HAnimSegment1028.AddChildren([Transform1030]);
HAnimSite1032 := THAnimSiteNode.Create;
HAnimSite1032.NameField := 'SEGMENT_FOR_r_metacarpal_1_tip';
Transform1033 := TTransformNode.Create;
Transform1033.Translation := Vector3(-0.1803,-0.0759,0.684);
Shape1034 := Shape12;
{ .AddChild }
Transform1033.AddChildren([Shape1034]);
{ .AddChildren }
HAnimSite1032.AddChildren([Transform1033]);
{ .AddChildren }
HAnimSegment1028.AddChildren([HAnimSite1032]);
{ .AddChildren }
HAnimJoint1027.AddChildren([HAnimSegment1028]);
HAnimJoint1035 := THAnimJointNode.Create;
HAnimJoint1035.NameField := 'r_carpal_proximal_phalanx_1';
HAnimJoint1035.Center := Vector3(-0.1808,-0.0661,0.6642);
HAnimSegment1036 := THAnimSegmentNode.Create;
HAnimSegment1036.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_1';
TouchSensor1037 := TTouchSensorNode.Create;
TouchSensor1037.Description := 'joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment1036.AddChildren([TouchSensor1037]);
Transform1038 := TTransformNode.Create;
Transform1038.Translation := Vector3(-0.1808,-0.0661,0.6642);
Shape1039 := Shape17;
{ .AddChild }
Transform1038.AddChildren([Shape1039]);
{ .AddChildren }
HAnimSegment1036.AddChildren([Transform1038]);
HAnimSite1040 := THAnimSiteNode.Create;
HAnimSite1040.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip';
Transform1041 := TTransformNode.Create;
Transform1041.Translation := Vector3(-0.1808,-0.0661,0.6642);
Shape1042 := Shape12;
{ .AddChild }
Transform1041.AddChildren([Shape1042]);
{ .AddChildren }
HAnimSite1040.AddChildren([Transform1041]);
{ .AddChildren }
HAnimSegment1036.AddChildren([HAnimSite1040]);
{ .AddChildren }
HAnimJoint1035.AddChildren([HAnimSegment1036]);
HAnimJoint1043 := THAnimJointNode.Create;
HAnimJoint1043.NameField := 'r_carpal_distal_phalanx_1';
HAnimJoint1043.Center := Vector3(-0.1825,-0.0522,0.6455);
HAnimSegment1044 := THAnimSegmentNode.Create;
HAnimSegment1044.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_1';
TouchSensor1045 := TTouchSensorNode.Create;
TouchSensor1045.Description := 'joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1';
{ .AddChildren }
HAnimSegment1044.AddChildren([TouchSensor1045]);
Transform1046 := TTransformNode.Create;
Transform1046.Translation := Vector3(-0.1825,-0.0522,0.6455);
Shape1047 := Shape17;
{ .AddChild }
Transform1046.AddChildren([Shape1047]);
{ .AddChildren }
HAnimSegment1044.AddChildren([Transform1046]);
HAnimSite1048 := THAnimSiteNode.Create;
HAnimSite1048.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_1_tip';
Transform1049 := TTransformNode.Create;
Transform1049.Translation := Vector3(-0.1825,-0.0522,0.6455);
Shape1050 := Shape12;
{ .AddChild }
Transform1049.AddChildren([Shape1050]);
{ .AddChildren }
HAnimSite1048.AddChildren([Transform1049]);
{ .AddChildren }
HAnimSegment1044.AddChildren([HAnimSite1048]);
{ .AddChildren }
HAnimJoint1043.AddChildren([HAnimSegment1044]);
{ .AddChildren }
HAnimJoint1035.AddChildren([HAnimJoint1043]);
{ .AddChildren }
HAnimJoint1027.AddChildren([HAnimJoint1035]);
{ .AddChildren }
HAnimJoint1019.AddChildren([HAnimJoint1027]);
{ .AddChildren }
HAnimJoint1011.AddChildren([HAnimJoint1019]);
HAnimJoint1051 := THAnimJointNode.Create;
HAnimJoint1051.NameField := 'r_trapezoid';
HAnimJoint1051.Center := Vector3(-0.1811,-0.0935,0.6984);
HAnimSegment1052 := THAnimSegmentNode.Create;
HAnimSegment1052.NameField := 'SEGMENT_FOR_r_trapezoid';
TouchSensor1053 := TTouchSensorNode.Create;
TouchSensor1053.Description := 'joint r_trapezoid segment SEGMENT_FOR_r_trapezoid';
{ .AddChildren }
HAnimSegment1052.AddChildren([TouchSensor1053]);
Transform1054 := TTransformNode.Create;
Transform1054.Translation := Vector3(-0.1811,-0.0935,0.6984);
Shape1055 := Shape17;
{ .AddChild }
Transform1054.AddChildren([Shape1055]);
{ .AddChildren }
HAnimSegment1052.AddChildren([Transform1054]);
HAnimSite1056 := THAnimSiteNode.Create;
HAnimSite1056.NameField := 'SEGMENT_FOR_r_trapezoid_tip';
Transform1057 := TTransformNode.Create;
Transform1057.Translation := Vector3(-0.1811,-0.0935,0.6984);
Shape1058 := Shape12;
{ .AddChild }
Transform1057.AddChildren([Shape1058]);
{ .AddChildren }
HAnimSite1056.AddChildren([Transform1057]);
{ .AddChildren }
HAnimSegment1052.AddChildren([HAnimSite1056]);
{ .AddChildren }
HAnimJoint1051.AddChildren([HAnimSegment1052]);
HAnimJoint1059 := THAnimJointNode.Create;
HAnimJoint1059.NameField := 'r_metacarpal_2';
HAnimJoint1059.Center := Vector3(-0.1811,-0.0922,0.679);
HAnimSegment1060 := THAnimSegmentNode.Create;
HAnimSegment1060.NameField := 'SEGMENT_FOR_r_metacarpal_2';
TouchSensor1061 := TTouchSensorNode.Create;
TouchSensor1061.Description := 'joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2';
{ .AddChildren }
HAnimSegment1060.AddChildren([TouchSensor1061]);
Transform1062 := TTransformNode.Create;
Transform1062.Translation := Vector3(-0.1811,-0.0922,0.679);
Shape1063 := Shape17;
{ .AddChild }
Transform1062.AddChildren([Shape1063]);
{ .AddChildren }
HAnimSegment1060.AddChildren([Transform1062]);
HAnimSite1064 := THAnimSiteNode.Create;
HAnimSite1064.NameField := 'SEGMENT_FOR_r_metacarpal_2_tip';
Transform1065 := TTransformNode.Create;
Transform1065.Translation := Vector3(-0.1811,-0.0922,0.679);
Shape1066 := Shape12;
{ .AddChild }
Transform1065.AddChildren([Shape1066]);
{ .AddChildren }
HAnimSite1064.AddChildren([Transform1065]);
{ .AddChildren }
HAnimSegment1060.AddChildren([HAnimSite1064]);
{ .AddChildren }
HAnimJoint1059.AddChildren([HAnimSegment1060]);
HAnimJoint1067 := THAnimJointNode.Create;
HAnimJoint1067.NameField := 'r_carpal_proximal_phalanx_2';
HAnimJoint1067.Center := Vector3(-0.1835,-0.0868,0.6286);
HAnimSegment1068 := THAnimSegmentNode.Create;
HAnimSegment1068.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_2';
TouchSensor1069 := TTouchSensorNode.Create;
TouchSensor1069.Description := 'joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment1068.AddChildren([TouchSensor1069]);
Transform1070 := TTransformNode.Create;
Transform1070.Translation := Vector3(-0.1835,-0.0868,0.6286);
Shape1071 := Shape17;
{ .AddChild }
Transform1070.AddChildren([Shape1071]);
{ .AddChildren }
HAnimSegment1068.AddChildren([Transform1070]);
HAnimSite1072 := THAnimSiteNode.Create;
HAnimSite1072.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip';
Transform1073 := TTransformNode.Create;
Transform1073.Translation := Vector3(-0.1835,-0.0868,0.6286);
Shape1074 := Shape12;
{ .AddChild }
Transform1073.AddChildren([Shape1074]);
{ .AddChildren }
HAnimSite1072.AddChildren([Transform1073]);
{ .AddChildren }
HAnimSegment1068.AddChildren([HAnimSite1072]);
{ .AddChildren }
HAnimJoint1067.AddChildren([HAnimSegment1068]);
HAnimJoint1075 := THAnimJointNode.Create;
HAnimJoint1075.NameField := 'r_carpal_middle_phalanx_2';
HAnimJoint1075.Center := Vector3(-0.1815,-0.0877,0.5983);
HAnimSegment1076 := THAnimSegmentNode.Create;
HAnimSegment1076.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_2';
TouchSensor1077 := TTouchSensorNode.Create;
TouchSensor1077.Description := 'joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment1076.AddChildren([TouchSensor1077]);
Transform1078 := TTransformNode.Create;
Transform1078.Translation := Vector3(-0.1815,-0.0877,0.5983);
Shape1079 := Shape17;
{ .AddChild }
Transform1078.AddChildren([Shape1079]);
{ .AddChildren }
HAnimSegment1076.AddChildren([Transform1078]);
HAnimSite1080 := THAnimSiteNode.Create;
HAnimSite1080.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_2_tip';
Transform1081 := TTransformNode.Create;
Transform1081.Translation := Vector3(-0.1815,-0.0877,0.5983);
Shape1082 := Shape12;
{ .AddChild }
Transform1081.AddChildren([Shape1082]);
{ .AddChildren }
HAnimSite1080.AddChildren([Transform1081]);
{ .AddChildren }
HAnimSegment1076.AddChildren([HAnimSite1080]);
{ .AddChildren }
HAnimJoint1075.AddChildren([HAnimSegment1076]);
HAnimJoint1083 := THAnimJointNode.Create;
HAnimJoint1083.NameField := 'r_carpal_distal_phalanx_2';
HAnimJoint1083.Center := Vector3(-0.1805,-0.0885,0.5731);
HAnimSegment1084 := THAnimSegmentNode.Create;
HAnimSegment1084.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_2';
TouchSensor1085 := TTouchSensorNode.Create;
TouchSensor1085.Description := 'joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2';
{ .AddChildren }
HAnimSegment1084.AddChildren([TouchSensor1085]);
Transform1086 := TTransformNode.Create;
Transform1086.Translation := Vector3(-0.1805,-0.0885,0.5731);
Shape1087 := Shape17;
{ .AddChild }
Transform1086.AddChildren([Shape1087]);
{ .AddChildren }
HAnimSegment1084.AddChildren([Transform1086]);
HAnimSite1088 := THAnimSiteNode.Create;
HAnimSite1088.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_2_tip';
Transform1089 := TTransformNode.Create;
Transform1089.Translation := Vector3(-0.1805,-0.0885,0.5731);
Shape1090 := Shape12;
{ .AddChild }
Transform1089.AddChildren([Shape1090]);
{ .AddChildren }
HAnimSite1088.AddChildren([Transform1089]);
{ .AddChildren }
HAnimSegment1084.AddChildren([HAnimSite1088]);
{ .AddChildren }
HAnimJoint1083.AddChildren([HAnimSegment1084]);
{ .AddChildren }
HAnimJoint1075.AddChildren([HAnimJoint1083]);
{ .AddChildren }
HAnimJoint1067.AddChildren([HAnimJoint1075]);
{ .AddChildren }
HAnimJoint1059.AddChildren([HAnimJoint1067]);
{ .AddChildren }
HAnimJoint1051.AddChildren([HAnimJoint1059]);
{ .AddChildren }
HAnimJoint1011.AddChildren([HAnimJoint1051]);
HAnimJoint1091 := THAnimJointNode.Create;
HAnimJoint1091.NameField := 'r_capitate';
HAnimJoint1091.Center := Vector3(-0.1809,-0.1067,0.7);
HAnimSegment1092 := THAnimSegmentNode.Create;
HAnimSegment1092.NameField := 'SEGMENT_FOR_r_capitate';
TouchSensor1093 := TTouchSensorNode.Create;
TouchSensor1093.Description := 'joint r_capitate segment SEGMENT_FOR_r_capitate';
{ .AddChildren }
HAnimSegment1092.AddChildren([TouchSensor1093]);
Transform1094 := TTransformNode.Create;
Transform1094.Translation := Vector3(-0.1809,-0.1067,0.7);
Shape1095 := Shape17;
{ .AddChild }
Transform1094.AddChildren([Shape1095]);
{ .AddChildren }
HAnimSegment1092.AddChildren([Transform1094]);
HAnimSite1096 := THAnimSiteNode.Create;
HAnimSite1096.NameField := 'SEGMENT_FOR_r_capitate_tip';
Transform1097 := TTransformNode.Create;
Transform1097.Translation := Vector3(-0.1809,-0.1067,0.7);
Shape1098 := Shape12;
{ .AddChild }
Transform1097.AddChildren([Shape1098]);
{ .AddChildren }
HAnimSite1096.AddChildren([Transform1097]);
{ .AddChildren }
HAnimSegment1092.AddChildren([HAnimSite1096]);
{ .AddChildren }
HAnimJoint1091.AddChildren([HAnimSegment1092]);
HAnimJoint1099 := THAnimJointNode.Create;
HAnimJoint1099.NameField := 'r_metacarpal_3';
HAnimJoint1099.Center := Vector3(-0.1809,-0.1081,0.6772);
HAnimSegment1100 := THAnimSegmentNode.Create;
HAnimSegment1100.NameField := 'SEGMENT_FOR_r_metacarpal_3';
TouchSensor1101 := TTouchSensorNode.Create;
TouchSensor1101.Description := 'joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3';
{ .AddChildren }
HAnimSegment1100.AddChildren([TouchSensor1101]);
Transform1102 := TTransformNode.Create;
Transform1102.Translation := Vector3(-0.1809,-0.1081,0.6772);
Shape1103 := Shape17;
{ .AddChild }
Transform1102.AddChildren([Shape1103]);
{ .AddChildren }
HAnimSegment1100.AddChildren([Transform1102]);
HAnimSite1104 := THAnimSiteNode.Create;
HAnimSite1104.NameField := 'SEGMENT_FOR_r_metacarpal_3_tip';
Transform1105 := TTransformNode.Create;
Transform1105.Translation := Vector3(-0.1809,-0.1081,0.6772);
Shape1106 := Shape12;
{ .AddChild }
Transform1105.AddChildren([Shape1106]);
{ .AddChildren }
HAnimSite1104.AddChildren([Transform1105]);
{ .AddChildren }
HAnimSegment1100.AddChildren([HAnimSite1104]);
{ .AddChildren }
HAnimJoint1099.AddChildren([HAnimSegment1100]);
HAnimJoint1107 := THAnimJointNode.Create;
HAnimJoint1107.NameField := 'r_carpal_proximal_phalanx_3';
HAnimJoint1107.Center := Vector3(-0.1835,-0.1058,0.6264);
HAnimSegment1108 := THAnimSegmentNode.Create;
HAnimSegment1108.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_3';
TouchSensor1109 := TTouchSensorNode.Create;
TouchSensor1109.Description := 'joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment1108.AddChildren([TouchSensor1109]);
Transform1110 := TTransformNode.Create;
Transform1110.Translation := Vector3(-0.1835,-0.1058,0.6264);
Shape1111 := Shape17;
{ .AddChild }
Transform1110.AddChildren([Shape1111]);
{ .AddChildren }
HAnimSegment1108.AddChildren([Transform1110]);
HAnimSite1112 := THAnimSiteNode.Create;
HAnimSite1112.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip';
Transform1113 := TTransformNode.Create;
Transform1113.Translation := Vector3(-0.1835,-0.1058,0.6264);
Shape1114 := Shape12;
{ .AddChild }
Transform1113.AddChildren([Shape1114]);
{ .AddChildren }
HAnimSite1112.AddChildren([Transform1113]);
{ .AddChildren }
HAnimSegment1108.AddChildren([HAnimSite1112]);
{ .AddChildren }
HAnimJoint1107.AddChildren([HAnimSegment1108]);
HAnimJoint1115 := THAnimJointNode.Create;
HAnimJoint1115.NameField := 'r_carpal_middle_phalanx_3';
HAnimJoint1115.Center := Vector3(-0.1815,-0.1054,0.5947);
HAnimSegment1116 := THAnimSegmentNode.Create;
HAnimSegment1116.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_3';
TouchSensor1117 := TTouchSensorNode.Create;
TouchSensor1117.Description := 'joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment1116.AddChildren([TouchSensor1117]);
Transform1118 := TTransformNode.Create;
Transform1118.Translation := Vector3(-0.1815,-0.1054,0.5947);
Shape1119 := Shape17;
{ .AddChild }
Transform1118.AddChildren([Shape1119]);
{ .AddChildren }
HAnimSegment1116.AddChildren([Transform1118]);
HAnimSite1120 := THAnimSiteNode.Create;
HAnimSite1120.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_3_tip';
Transform1121 := TTransformNode.Create;
Transform1121.Translation := Vector3(-0.1815,-0.1054,0.5947);
Shape1122 := Shape12;
{ .AddChild }
Transform1121.AddChildren([Shape1122]);
{ .AddChildren }
HAnimSite1120.AddChildren([Transform1121]);
{ .AddChildren }
HAnimSegment1116.AddChildren([HAnimSite1120]);
{ .AddChildren }
HAnimJoint1115.AddChildren([HAnimSegment1116]);
HAnimJoint1123 := THAnimJointNode.Create;
HAnimJoint1123.NameField := 'r_carpal_distal_phalanx_3';
HAnimJoint1123.Center := Vector3(-0.1805,-0.1056,0.5668);
HAnimSegment1124 := THAnimSegmentNode.Create;
HAnimSegment1124.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_3';
TouchSensor1125 := TTouchSensorNode.Create;
TouchSensor1125.Description := 'joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3';
{ .AddChildren }
HAnimSegment1124.AddChildren([TouchSensor1125]);
Transform1126 := TTransformNode.Create;
Transform1126.Translation := Vector3(-0.1805,-0.1056,0.5668);
Shape1127 := Shape17;
{ .AddChild }
Transform1126.AddChildren([Shape1127]);
{ .AddChildren }
HAnimSegment1124.AddChildren([Transform1126]);
HAnimSite1128 := THAnimSiteNode.Create;
HAnimSite1128.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_3_tip';
Transform1129 := TTransformNode.Create;
Transform1129.Translation := Vector3(-0.1805,-0.1056,0.5668);
Shape1130 := Shape12;
{ .AddChild }
Transform1129.AddChildren([Shape1130]);
{ .AddChildren }
HAnimSite1128.AddChildren([Transform1129]);
{ .AddChildren }
HAnimSegment1124.AddChildren([HAnimSite1128]);
{ .AddChildren }
HAnimJoint1123.AddChildren([HAnimSegment1124]);
{ .AddChildren }
HAnimJoint1115.AddChildren([HAnimJoint1123]);
{ .AddChildren }
HAnimJoint1107.AddChildren([HAnimJoint1115]);
{ .AddChildren }
HAnimJoint1099.AddChildren([HAnimJoint1107]);
{ .AddChildren }
HAnimJoint1091.AddChildren([HAnimJoint1099]);
{ .AddChildren }
HAnimJoint1011.AddChildren([HAnimJoint1091]);
HAnimJoint1131 := THAnimJointNode.Create;
HAnimJoint1131.NameField := 'r_hamate';
HAnimJoint1131.Center := Vector3(-0.1809,-0.1276,0.6973);
HAnimSegment1132 := THAnimSegmentNode.Create;
HAnimSegment1132.NameField := 'SEGMENT_FOR_r_hamate';
TouchSensor1133 := TTouchSensorNode.Create;
TouchSensor1133.Description := 'joint r_hamate segment SEGMENT_FOR_r_hamate';
{ .AddChildren }
HAnimSegment1132.AddChildren([TouchSensor1133]);
Transform1134 := TTransformNode.Create;
Transform1134.Translation := Vector3(-0.1809,-0.1276,0.6973);
Shape1135 := Shape17;
{ .AddChild }
Transform1134.AddChildren([Shape1135]);
{ .AddChildren }
HAnimSegment1132.AddChildren([Transform1134]);
HAnimSite1136 := THAnimSiteNode.Create;
HAnimSite1136.NameField := 'SEGMENT_FOR_r_hamate_tip';
Transform1137 := TTransformNode.Create;
Transform1137.Translation := Vector3(-0.1809,-0.1276,0.6973);
Shape1138 := Shape12;
{ .AddChild }
Transform1137.AddChildren([Shape1138]);
{ .AddChildren }
HAnimSite1136.AddChildren([Transform1137]);
{ .AddChildren }
HAnimSegment1132.AddChildren([HAnimSite1136]);
{ .AddChildren }
HAnimJoint1131.AddChildren([HAnimSegment1132]);
HAnimJoint1139 := THAnimJointNode.Create;
HAnimJoint1139.NameField := 'r_metacarpal_4';
HAnimJoint1139.Center := Vector3(-0.1809,-0.1218,0.6777);
HAnimSegment1140 := THAnimSegmentNode.Create;
HAnimSegment1140.NameField := 'SEGMENT_FOR_r_metacarpal_4';
TouchSensor1141 := TTouchSensorNode.Create;
TouchSensor1141.Description := 'joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4';
{ .AddChildren }
HAnimSegment1140.AddChildren([TouchSensor1141]);
Transform1142 := TTransformNode.Create;
Transform1142.Translation := Vector3(-0.1809,-0.1218,0.6777);
Shape1143 := Shape17;
{ .AddChild }
Transform1142.AddChildren([Shape1143]);
{ .AddChildren }
HAnimSegment1140.AddChildren([Transform1142]);
HAnimSite1144 := THAnimSiteNode.Create;
HAnimSite1144.NameField := 'SEGMENT_FOR_r_metacarpal_4_tip';
Transform1145 := TTransformNode.Create;
Transform1145.Translation := Vector3(-0.1809,-0.1218,0.6777);
Shape1146 := Shape12;
{ .AddChild }
Transform1145.AddChildren([Shape1146]);
{ .AddChildren }
HAnimSite1144.AddChildren([Transform1145]);
{ .AddChildren }
HAnimSegment1140.AddChildren([HAnimSite1144]);
{ .AddChildren }
HAnimJoint1139.AddChildren([HAnimSegment1140]);
HAnimJoint1147 := THAnimJointNode.Create;
HAnimJoint1147.NameField := 'r_carpal_proximal_phalanx_4';
HAnimJoint1147.Center := Vector3(-0.1835,-0.1233,0.6255);
HAnimSegment1148 := THAnimSegmentNode.Create;
HAnimSegment1148.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_4';
TouchSensor1149 := TTouchSensorNode.Create;
TouchSensor1149.Description := 'joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment1148.AddChildren([TouchSensor1149]);
Transform1150 := TTransformNode.Create;
Transform1150.Translation := Vector3(-0.1835,-0.1233,0.6255);
Shape1151 := Shape17;
{ .AddChild }
Transform1150.AddChildren([Shape1151]);
{ .AddChildren }
HAnimSegment1148.AddChildren([Transform1150]);
HAnimSite1152 := THAnimSiteNode.Create;
HAnimSite1152.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip';
Transform1153 := TTransformNode.Create;
Transform1153.Translation := Vector3(-0.1835,-0.1233,0.6255);
Shape1154 := Shape12;
{ .AddChild }
Transform1153.AddChildren([Shape1154]);
{ .AddChildren }
HAnimSite1152.AddChildren([Transform1153]);
{ .AddChildren }
HAnimSegment1148.AddChildren([HAnimSite1152]);
{ .AddChildren }
HAnimJoint1147.AddChildren([HAnimSegment1148]);
HAnimJoint1155 := THAnimJointNode.Create;
HAnimJoint1155.NameField := 'r_carpal_middle_phalanx_4';
HAnimJoint1155.Center := Vector3(-0.1815,-0.1225,0.598);
HAnimSegment1156 := THAnimSegmentNode.Create;
HAnimSegment1156.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_4';
TouchSensor1157 := TTouchSensorNode.Create;
TouchSensor1157.Description := 'joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment1156.AddChildren([TouchSensor1157]);
Transform1158 := TTransformNode.Create;
Transform1158.Translation := Vector3(-0.1815,-0.1225,0.598);
Shape1159 := Shape17;
{ .AddChild }
Transform1158.AddChildren([Shape1159]);
{ .AddChildren }
HAnimSegment1156.AddChildren([Transform1158]);
HAnimSite1160 := THAnimSiteNode.Create;
HAnimSite1160.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_4_tip';
Transform1161 := TTransformNode.Create;
Transform1161.Translation := Vector3(-0.1815,-0.1225,0.598);
Shape1162 := Shape12;
{ .AddChild }
Transform1161.AddChildren([Shape1162]);
{ .AddChildren }
HAnimSite1160.AddChildren([Transform1161]);
{ .AddChildren }
HAnimSegment1156.AddChildren([HAnimSite1160]);
{ .AddChildren }
HAnimJoint1155.AddChildren([HAnimSegment1156]);
HAnimJoint1163 := THAnimJointNode.Create;
HAnimJoint1163.NameField := 'r_carpal_distal_phalanx_4';
HAnimJoint1163.Center := Vector3(-0.1805,-0.1217,0.5722);
HAnimSegment1164 := THAnimSegmentNode.Create;
HAnimSegment1164.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_4';
TouchSensor1165 := TTouchSensorNode.Create;
TouchSensor1165.Description := 'joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4';
{ .AddChildren }
HAnimSegment1164.AddChildren([TouchSensor1165]);
Transform1166 := TTransformNode.Create;
Transform1166.Translation := Vector3(-0.1805,-0.1217,0.5722);
Shape1167 := Shape17;
{ .AddChild }
Transform1166.AddChildren([Shape1167]);
{ .AddChildren }
HAnimSegment1164.AddChildren([Transform1166]);
HAnimSite1168 := THAnimSiteNode.Create;
HAnimSite1168.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_4_tip';
Transform1169 := TTransformNode.Create;
Transform1169.Translation := Vector3(-0.1805,-0.1217,0.5722);
Shape1170 := Shape12;
{ .AddChild }
Transform1169.AddChildren([Shape1170]);
{ .AddChildren }
HAnimSite1168.AddChildren([Transform1169]);
{ .AddChildren }
HAnimSegment1164.AddChildren([HAnimSite1168]);
{ .AddChildren }
HAnimJoint1163.AddChildren([HAnimSegment1164]);
{ .AddChildren }
HAnimJoint1155.AddChildren([HAnimJoint1163]);
{ .AddChildren }
HAnimJoint1147.AddChildren([HAnimJoint1155]);
{ .AddChildren }
HAnimJoint1139.AddChildren([HAnimJoint1147]);
{ .AddChildren }
HAnimJoint1131.AddChildren([HAnimJoint1139]);
HAnimJoint1171 := THAnimJointNode.Create;
HAnimJoint1171.NameField := 'r_metacarpal_5';
HAnimJoint1171.Center := Vector3(-0.1814,-0.1347,0.6797);
HAnimSegment1172 := THAnimSegmentNode.Create;
HAnimSegment1172.NameField := 'SEGMENT_FOR_r_metacarpal_5';
TouchSensor1173 := TTouchSensorNode.Create;
TouchSensor1173.Description := 'joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5';
{ .AddChildren }
HAnimSegment1172.AddChildren([TouchSensor1173]);
Transform1174 := TTransformNode.Create;
Transform1174.Translation := Vector3(-0.1814,-0.1347,0.6797);
Shape1175 := Shape17;
{ .AddChild }
Transform1174.AddChildren([Shape1175]);
{ .AddChildren }
HAnimSegment1172.AddChildren([Transform1174]);
HAnimSite1176 := THAnimSiteNode.Create;
HAnimSite1176.NameField := 'SEGMENT_FOR_r_metacarpal_5_tip';
Transform1177 := TTransformNode.Create;
Transform1177.Translation := Vector3(-0.1814,-0.1347,0.6797);
Shape1178 := Shape12;
{ .AddChild }
Transform1177.AddChildren([Shape1178]);
{ .AddChildren }
HAnimSite1176.AddChildren([Transform1177]);
{ .AddChildren }
HAnimSegment1172.AddChildren([HAnimSite1176]);
{ .AddChildren }
HAnimJoint1171.AddChildren([HAnimSegment1172]);
HAnimJoint1179 := THAnimJointNode.Create;
HAnimJoint1179.NameField := 'r_carpal_proximal_phalanx_5';
HAnimJoint1179.Center := Vector3(-0.1832,-0.1389,0.6295);
HAnimSegment1180 := THAnimSegmentNode.Create;
HAnimSegment1180.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_5';
TouchSensor1181 := TTouchSensorNode.Create;
TouchSensor1181.Description := 'joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment1180.AddChildren([TouchSensor1181]);
Transform1182 := TTransformNode.Create;
Transform1182.Translation := Vector3(-0.1832,-0.1389,0.6295);
Shape1183 := Shape17;
{ .AddChild }
Transform1182.AddChildren([Shape1183]);
{ .AddChildren }
HAnimSegment1180.AddChildren([Transform1182]);
HAnimSite1184 := THAnimSiteNode.Create;
HAnimSite1184.NameField := 'SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip';
Transform1185 := TTransformNode.Create;
Transform1185.Translation := Vector3(-0.1832,-0.1389,0.6295);
Shape1186 := Shape12;
{ .AddChild }
Transform1185.AddChildren([Shape1186]);
{ .AddChildren }
HAnimSite1184.AddChildren([Transform1185]);
{ .AddChildren }
HAnimSegment1180.AddChildren([HAnimSite1184]);
{ .AddChildren }
HAnimJoint1179.AddChildren([HAnimSegment1180]);
HAnimJoint1187 := THAnimJointNode.Create;
HAnimJoint1187.NameField := 'r_carpal_middle_phalanx_5';
HAnimJoint1187.Center := Vector3(-0.1815,-0.139,0.6124);
HAnimSegment1188 := THAnimSegmentNode.Create;
HAnimSegment1188.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_5';
TouchSensor1189 := TTouchSensorNode.Create;
TouchSensor1189.Description := 'joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment1188.AddChildren([TouchSensor1189]);
Transform1190 := TTransformNode.Create;
Transform1190.Translation := Vector3(-0.1815,-0.139,0.6124);
Shape1191 := Shape17;
{ .AddChild }
Transform1190.AddChildren([Shape1191]);
{ .AddChildren }
HAnimSegment1188.AddChildren([Transform1190]);
HAnimSite1192 := THAnimSiteNode.Create;
HAnimSite1192.NameField := 'SEGMENT_FOR_r_carpal_middle_phalanx_5_tip';
Transform1193 := TTransformNode.Create;
Transform1193.Translation := Vector3(-0.1815,-0.139,0.6124);
Shape1194 := Shape12;
{ .AddChild }
Transform1193.AddChildren([Shape1194]);
{ .AddChildren }
HAnimSite1192.AddChildren([Transform1193]);
{ .AddChildren }
HAnimSegment1188.AddChildren([HAnimSite1192]);
{ .AddChildren }
HAnimJoint1187.AddChildren([HAnimSegment1188]);
HAnimJoint1195 := THAnimJointNode.Create;
HAnimJoint1195.NameField := 'r_carpal_distal_phalanx_5';
HAnimJoint1195.Center := Vector3(-0.1806,-0.1388,0.5938);
HAnimSegment1196 := THAnimSegmentNode.Create;
HAnimSegment1196.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_5';
TouchSensor1197 := TTouchSensorNode.Create;
TouchSensor1197.Description := 'joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5';
{ .AddChildren }
HAnimSegment1196.AddChildren([TouchSensor1197]);
Transform1198 := TTransformNode.Create;
Transform1198.Translation := Vector3(-0.1806,-0.1388,0.5938);
Shape1199 := Shape17;
{ .AddChild }
Transform1198.AddChildren([Shape1199]);
{ .AddChildren }
HAnimSegment1196.AddChildren([Transform1198]);
HAnimSite1200 := THAnimSiteNode.Create;
HAnimSite1200.NameField := 'SEGMENT_FOR_r_carpal_distal_phalanx_5_tip';
Transform1201 := TTransformNode.Create;
Transform1201.Translation := Vector3(-0.1806,-0.1388,0.5938);
Shape1202 := Shape12;
{ .AddChild }
Transform1201.AddChildren([Shape1202]);
{ .AddChildren }
HAnimSite1200.AddChildren([Transform1201]);
{ .AddChildren }
HAnimSegment1196.AddChildren([HAnimSite1200]);
{ .AddChildren }
HAnimJoint1195.AddChildren([HAnimSegment1196]);
{ .AddChildren }
HAnimJoint1187.AddChildren([HAnimJoint1195]);
{ .AddChildren }
HAnimJoint1179.AddChildren([HAnimJoint1187]);
{ .AddChildren }
HAnimJoint1171.AddChildren([HAnimJoint1179]);
{ .AddChildren }
HAnimJoint1131.AddChildren([HAnimJoint1171]);
{ .AddChildren }
HAnimJoint1011.AddChildren([HAnimJoint1131]);
{ .AddChildren }
HAnimJoint1003.AddChildren([HAnimJoint1011]);
{ .AddChildren }
HAnimJoint995.AddChildren([HAnimJoint1003]);
{ .AddChildren }
HAnimJoint987.AddChildren([HAnimJoint995]);
{ .AddChildren }
HAnimJoint979.AddChildren([HAnimJoint987]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint979]);
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
HAnimJoint571.AddChildren([HAnimJoint579]);
{ .AddChildren }
HAnimJoint563.AddChildren([HAnimJoint571]);
{ .AddChildren }
HAnimJoint555.AddChildren([HAnimJoint563]);
{ .AddChildren }
HAnimJoint547.AddChildren([HAnimJoint555]);
{ .AddChildren }
HAnimJoint539.AddChildren([HAnimJoint547]);
{ .AddChildren }
HAnimJoint531.AddChildren([HAnimJoint539]);
{ .AddChildren }
HAnimJoint523.AddChildren([HAnimJoint531]);
{ .AddChildren }
HAnimJoint515.AddChildren([HAnimJoint523]);
{ .AddChildren }
HAnimJoint507.AddChildren([HAnimJoint515]);
{ .AddChildren }
HAnimJoint499.AddChildren([HAnimJoint507]);
{ .AddChildren }
HAnimJoint35.AddChildren([HAnimJoint499]);
{ .AddChildren }
HAnimJoint27.AddChildren([HAnimJoint35]);
{ .AddSkeleton }
HAnimHumanoid26.SetSkeleton([HAnimJoint27]);
HAnimJoint1203 := HAnimJoint35;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1203);
HAnimJoint1204 := HAnimJoint43;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1204);
HAnimJoint1205 := HAnimJoint51;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1205);
HAnimJoint1206 := HAnimJoint59;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1206);
HAnimJoint1207 := HAnimJoint67;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1207);
HAnimJoint1208 := HAnimJoint75;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1208);
HAnimJoint1209 := HAnimJoint83;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1209);
HAnimJoint1210 := HAnimJoint91;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1210);
HAnimJoint1211 := HAnimJoint99;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1211);
HAnimJoint1212 := HAnimJoint107;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1212);
HAnimJoint1213 := HAnimJoint115;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1213);
HAnimJoint1214 := HAnimJoint123;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1214);
HAnimJoint1215 := HAnimJoint131;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1215);
HAnimJoint1216 := HAnimJoint139;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1216);
HAnimJoint1217 := HAnimJoint147;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1217);
HAnimJoint1218 := HAnimJoint155;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1218);
HAnimJoint1219 := HAnimJoint163;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1219);
HAnimJoint1220 := HAnimJoint171;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1220);
HAnimJoint1221 := HAnimJoint179;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1221);
HAnimJoint1222 := HAnimJoint187;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1222);
HAnimJoint1223 := HAnimJoint195;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1223);
HAnimJoint1224 := HAnimJoint203;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1224);
HAnimJoint1225 := HAnimJoint211;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1225);
HAnimJoint1226 := HAnimJoint219;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1226);
HAnimJoint1227 := HAnimJoint227;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1227);
HAnimJoint1228 := HAnimJoint235;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1228);
HAnimJoint1229 := HAnimJoint243;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1229);
HAnimJoint1230 := HAnimJoint251;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1230);
HAnimJoint1231 := HAnimJoint259;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1231);
HAnimJoint1232 := HAnimJoint267;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1232);
HAnimJoint1233 := HAnimJoint275;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1233);
HAnimJoint1234 := HAnimJoint283;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1234);
HAnimJoint1235 := HAnimJoint291;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1235);
HAnimJoint1236 := HAnimJoint299;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1236);
HAnimJoint1237 := HAnimJoint307;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1237);
HAnimJoint1238 := HAnimJoint315;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1238);
HAnimJoint1239 := HAnimJoint323;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1239);
HAnimJoint1240 := HAnimJoint331;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1240);
HAnimJoint1241 := HAnimJoint339;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1241);
HAnimJoint1242 := HAnimJoint347;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1242);
HAnimJoint1243 := HAnimJoint355;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1243);
HAnimJoint1244 := HAnimJoint363;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1244);
HAnimJoint1245 := HAnimJoint371;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1245);
HAnimJoint1246 := HAnimJoint379;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1246);
HAnimJoint1247 := HAnimJoint387;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1247);
HAnimJoint1248 := HAnimJoint395;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1248);
HAnimJoint1249 := HAnimJoint403;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1249);
HAnimJoint1250 := HAnimJoint411;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1250);
HAnimJoint1251 := HAnimJoint419;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1251);
HAnimJoint1252 := HAnimJoint427;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1252);
HAnimJoint1253 := HAnimJoint435;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1253);
HAnimJoint1254 := HAnimJoint443;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1254);
HAnimJoint1255 := HAnimJoint451;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1255);
HAnimJoint1256 := HAnimJoint459;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1256);
HAnimJoint1257 := HAnimJoint467;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1257);
HAnimJoint1258 := HAnimJoint475;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1258);
HAnimJoint1259 := HAnimJoint483;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1259);
HAnimJoint1260 := HAnimJoint491;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1260);
HAnimJoint1261 := HAnimJoint499;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1261);
HAnimJoint1262 := HAnimJoint507;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1262);
HAnimJoint1263 := HAnimJoint515;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1263);
HAnimJoint1264 := HAnimJoint523;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1264);
HAnimJoint1265 := HAnimJoint531;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1265);
HAnimJoint1266 := HAnimJoint539;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1266);
HAnimJoint1267 := HAnimJoint547;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1267);
HAnimJoint1268 := HAnimJoint555;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1268);
HAnimJoint1269 := HAnimJoint563;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1269);
HAnimJoint1270 := HAnimJoint571;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1270);
HAnimJoint1271 := HAnimJoint579;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1271);
HAnimJoint1272 := HAnimJoint587;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1272);
HAnimJoint1273 := HAnimJoint595;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1273);
HAnimJoint1274 := HAnimJoint603;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1274);
HAnimJoint1275 := HAnimJoint611;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1275);
HAnimJoint1276 := HAnimJoint619;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1276);
HAnimJoint1277 := HAnimJoint627;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1277);
HAnimJoint1278 := HAnimJoint635;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1278);
HAnimJoint1279 := HAnimJoint643;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1279);
HAnimJoint1280 := HAnimJoint651;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1280);
HAnimJoint1281 := HAnimJoint659;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1281);
HAnimJoint1282 := HAnimJoint667;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1282);
HAnimJoint1283 := HAnimJoint675;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1283);
HAnimJoint1284 := HAnimJoint683;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1284);
HAnimJoint1285 := HAnimJoint691;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1285);
HAnimJoint1286 := HAnimJoint699;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1286);
HAnimJoint1287 := HAnimJoint707;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1287);
HAnimJoint1288 := HAnimJoint715;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1288);
HAnimJoint1289 := HAnimJoint723;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1289);
HAnimJoint1290 := HAnimJoint731;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1290);
HAnimJoint1291 := HAnimJoint739;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1291);
HAnimJoint1292 := HAnimJoint747;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1292);
HAnimJoint1293 := HAnimJoint755;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1293);
HAnimJoint1294 := HAnimJoint763;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1294);
HAnimJoint1295 := HAnimJoint771;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1295);
HAnimJoint1296 := HAnimJoint779;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1296);
HAnimJoint1297 := HAnimJoint787;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1297);
HAnimJoint1298 := HAnimJoint795;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1298);
HAnimJoint1299 := HAnimJoint803;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1299);
HAnimJoint1300 := HAnimJoint811;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1300);
HAnimJoint1301 := HAnimJoint819;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1301);
HAnimJoint1302 := HAnimJoint827;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1302);
HAnimJoint1303 := HAnimJoint835;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1303);
HAnimJoint1304 := HAnimJoint843;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1304);
HAnimJoint1305 := HAnimJoint851;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1305);
HAnimJoint1306 := HAnimJoint859;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1306);
HAnimJoint1307 := HAnimJoint867;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1307);
HAnimJoint1308 := HAnimJoint875;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1308);
HAnimJoint1309 := HAnimJoint883;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1309);
HAnimJoint1310 := HAnimJoint891;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1310);
HAnimJoint1311 := HAnimJoint899;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1311);
HAnimJoint1312 := HAnimJoint907;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1312);
HAnimJoint1313 := HAnimJoint915;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1313);
HAnimJoint1314 := HAnimJoint923;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1314);
HAnimJoint1315 := HAnimJoint931;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1315);
HAnimJoint1316 := HAnimJoint939;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1316);
HAnimJoint1317 := HAnimJoint947;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1317);
HAnimJoint1318 := HAnimJoint955;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1318);
HAnimJoint1319 := HAnimJoint963;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1319);
HAnimJoint1320 := HAnimJoint971;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1320);
HAnimJoint1321 := HAnimJoint979;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1321);
HAnimJoint1322 := HAnimJoint987;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1322);
HAnimJoint1323 := HAnimJoint995;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1323);
HAnimJoint1324 := HAnimJoint1003;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1324);
HAnimJoint1325 := HAnimJoint1011;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1325);
HAnimJoint1326 := HAnimJoint1019;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1326);
HAnimJoint1327 := HAnimJoint1027;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1327);
HAnimJoint1328 := HAnimJoint1035;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1328);
HAnimJoint1329 := HAnimJoint1043;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1329);
HAnimJoint1330 := HAnimJoint1051;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1330);
HAnimJoint1331 := HAnimJoint1059;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1331);
HAnimJoint1332 := HAnimJoint1067;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1332);
HAnimJoint1333 := HAnimJoint1075;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1333);
HAnimJoint1334 := HAnimJoint1083;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1334);
HAnimJoint1335 := HAnimJoint1091;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1335);
HAnimJoint1336 := HAnimJoint1099;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1336);
HAnimJoint1337 := HAnimJoint1107;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1337);
HAnimJoint1338 := HAnimJoint1115;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1338);
HAnimJoint1339 := HAnimJoint1123;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1339);
HAnimJoint1340 := HAnimJoint1131;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1340);
HAnimJoint1341 := HAnimJoint1139;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1341);
HAnimJoint1342 := HAnimJoint1147;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1342);
HAnimJoint1343 := HAnimJoint1155;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1343);
HAnimJoint1344 := HAnimJoint1163;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1344);
HAnimJoint1345 := HAnimJoint1171;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1345);
HAnimJoint1346 := HAnimJoint1179;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1346);
HAnimJoint1347 := HAnimJoint1187;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1347);
HAnimJoint1348 := HAnimJoint1195;
{ .FdJoints.Add }
HAnimHumanoid26.FdJoints.Add(HAnimJoint1348);
{ .AddChildren }
Transform25.AddChildren([HAnimHumanoid26]);
{ .AddChildren }
Group8.AddChildren([Transform25]);
TimeSensor1349 := TTimeSensorNode.Create;
TimeSensor1349.CycleInterval := 10.416666666666666;
TimeSensor1349.Loop := True;
{ .AddChildren }
Group8.AddChildren([TimeSensor1349]);
ProximitySensor1350 := TProximitySensorNode.Create;
ProximitySensor1350.Size := Vector3(1000000,1000000,1000000);
{ .AddChildren }
Group8.AddChildren([ProximitySensor1350]);
Group8.AddRoute(ProximitySensor1350.FdEntertime, TimeSensor1349.FdStarttime);
{ .AddX3DRoute }
OrientationInterpolator1352 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1352.SetKey([0,1]);
OrientationInterpolator1352.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1352]);
OrientationInterpolator1353 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1353.SetKey([0,1]);
OrientationInterpolator1353.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1353]);
OrientationInterpolator1354 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1354.SetKey([0,1]);
OrientationInterpolator1354.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1354]);
OrientationInterpolator1355 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1355.SetKey([0,1]);
OrientationInterpolator1355.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1355]);
OrientationInterpolator1356 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1356.SetKey([0,1]);
OrientationInterpolator1356.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1356]);
OrientationInterpolator1357 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1357.SetKey([0,1]);
OrientationInterpolator1357.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1357]);
OrientationInterpolator1358 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1358.SetKey([0,1]);
OrientationInterpolator1358.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1358]);
OrientationInterpolator1359 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1359.SetKey([0,1]);
OrientationInterpolator1359.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1359]);
OrientationInterpolator1360 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1360.SetKey([0,1]);
OrientationInterpolator1360.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1360]);
OrientationInterpolator1361 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1361.SetKey([0,1]);
OrientationInterpolator1361.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1361]);
OrientationInterpolator1362 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1362.SetKey([0,1]);
OrientationInterpolator1362.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1362]);
OrientationInterpolator1363 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1363.SetKey([0,1]);
OrientationInterpolator1363.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1363]);
OrientationInterpolator1364 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1364.SetKey([0,1]);
OrientationInterpolator1364.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1364]);
OrientationInterpolator1365 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1365.SetKey([0,1]);
OrientationInterpolator1365.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1365]);
OrientationInterpolator1366 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1366.SetKey([0,1]);
OrientationInterpolator1366.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1366]);
OrientationInterpolator1367 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1367.SetKey([0,1]);
OrientationInterpolator1367.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1367]);
OrientationInterpolator1368 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1368.SetKey([0,1]);
OrientationInterpolator1368.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1368]);
OrientationInterpolator1369 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1369.SetKey([0,1]);
OrientationInterpolator1369.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1369]);
OrientationInterpolator1370 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1370.SetKey([0,1]);
OrientationInterpolator1370.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1370]);
OrientationInterpolator1371 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1371.SetKey([0,1]);
OrientationInterpolator1371.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1371]);
OrientationInterpolator1372 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1372.SetKey([0,1]);
OrientationInterpolator1372.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1372]);
OrientationInterpolator1373 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1373.SetKey([0,1]);
OrientationInterpolator1373.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1373]);
OrientationInterpolator1374 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1374.SetKey([0,1]);
OrientationInterpolator1374.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1374]);
OrientationInterpolator1375 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1375.SetKey([0,1]);
OrientationInterpolator1375.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1375]);
OrientationInterpolator1376 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1376.SetKey([0,1]);
OrientationInterpolator1376.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1376]);
OrientationInterpolator1377 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1377.SetKey([0,1]);
OrientationInterpolator1377.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1377]);
OrientationInterpolator1378 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1378.SetKey([0,1]);
OrientationInterpolator1378.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1378]);
OrientationInterpolator1379 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1379.SetKey([0,1]);
OrientationInterpolator1379.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1379]);
OrientationInterpolator1380 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1380.SetKey([0,1]);
OrientationInterpolator1380.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1380]);
OrientationInterpolator1381 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1381.SetKey([0,1]);
OrientationInterpolator1381.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1381]);
OrientationInterpolator1382 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1382.SetKey([0,1]);
OrientationInterpolator1382.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1382]);
OrientationInterpolator1383 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1383.SetKey([0,1]);
OrientationInterpolator1383.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1383]);
OrientationInterpolator1384 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1384.SetKey([0,1]);
OrientationInterpolator1384.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1384]);
OrientationInterpolator1385 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1385.SetKey([0,1]);
OrientationInterpolator1385.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1385]);
OrientationInterpolator1386 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1386.SetKey([0,1]);
OrientationInterpolator1386.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1386]);
OrientationInterpolator1387 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1387.SetKey([0,1]);
OrientationInterpolator1387.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1387]);
OrientationInterpolator1388 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1388.SetKey([0,1]);
OrientationInterpolator1388.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1388]);
OrientationInterpolator1389 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1389.SetKey([0,1]);
OrientationInterpolator1389.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1389]);
OrientationInterpolator1390 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1390.SetKey([0,1]);
OrientationInterpolator1390.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1390]);
OrientationInterpolator1391 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1391.SetKey([0,1]);
OrientationInterpolator1391.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1391]);
OrientationInterpolator1392 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1392.SetKey([0,1]);
OrientationInterpolator1392.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1392]);
OrientationInterpolator1393 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1393.SetKey([0,1]);
OrientationInterpolator1393.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1393]);
OrientationInterpolator1394 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1394.SetKey([0,1]);
OrientationInterpolator1394.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1394]);
OrientationInterpolator1395 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1395.SetKey([0,1]);
OrientationInterpolator1395.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1395]);
OrientationInterpolator1396 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1396.SetKey([0,1]);
OrientationInterpolator1396.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1396]);
OrientationInterpolator1397 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1397.SetKey([0,1]);
OrientationInterpolator1397.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1397]);
OrientationInterpolator1398 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1398.SetKey([0,1]);
OrientationInterpolator1398.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1398]);
OrientationInterpolator1399 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1399.SetKey([0,1]);
OrientationInterpolator1399.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1399]);
OrientationInterpolator1400 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1400.SetKey([0,1]);
OrientationInterpolator1400.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1400]);
OrientationInterpolator1401 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1401.SetKey([0,1]);
OrientationInterpolator1401.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1401]);
OrientationInterpolator1402 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1402.SetKey([0,1]);
OrientationInterpolator1402.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1402]);
OrientationInterpolator1403 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1403.SetKey([0,1]);
OrientationInterpolator1403.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1403]);
OrientationInterpolator1404 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1404.SetKey([0,1]);
OrientationInterpolator1404.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1404]);
OrientationInterpolator1405 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1405.SetKey([0,1]);
OrientationInterpolator1405.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1405]);
OrientationInterpolator1406 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1406.SetKey([0,1]);
OrientationInterpolator1406.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1406]);
OrientationInterpolator1407 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1407.SetKey([0,1]);
OrientationInterpolator1407.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1407]);
OrientationInterpolator1408 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1408.SetKey([0,1]);
OrientationInterpolator1408.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1408]);
OrientationInterpolator1409 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1409.SetKey([0,1]);
OrientationInterpolator1409.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1409]);
OrientationInterpolator1410 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1410.SetKey([0,1]);
OrientationInterpolator1410.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1410]);
OrientationInterpolator1411 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1411.SetKey([0,1]);
OrientationInterpolator1411.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1411]);
OrientationInterpolator1412 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1412.SetKey([0,1]);
OrientationInterpolator1412.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1412]);
OrientationInterpolator1413 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1413.SetKey([0,1]);
OrientationInterpolator1413.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1413]);
OrientationInterpolator1414 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1414.SetKey([0,1]);
OrientationInterpolator1414.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1414]);
OrientationInterpolator1415 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1415.SetKey([0,1]);
OrientationInterpolator1415.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1415]);
OrientationInterpolator1416 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1416.SetKey([0,1]);
OrientationInterpolator1416.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1416]);
OrientationInterpolator1417 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1417.SetKey([0,1]);
OrientationInterpolator1417.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1417]);
OrientationInterpolator1418 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1418.SetKey([0,1]);
OrientationInterpolator1418.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1418]);
OrientationInterpolator1419 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1419.SetKey([0,1]);
OrientationInterpolator1419.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1419]);
OrientationInterpolator1420 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1420.SetKey([0,1]);
OrientationInterpolator1420.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1420]);
OrientationInterpolator1421 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1421.SetKey([0,1]);
OrientationInterpolator1421.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1421]);
OrientationInterpolator1422 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1422.SetKey([0,1]);
OrientationInterpolator1422.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1422]);
OrientationInterpolator1423 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1423.SetKey([0,1]);
OrientationInterpolator1423.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1423]);
OrientationInterpolator1424 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1424.SetKey([0,1]);
OrientationInterpolator1424.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1424]);
OrientationInterpolator1425 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1425.SetKey([0,1]);
OrientationInterpolator1425.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1425]);
OrientationInterpolator1426 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1426.SetKey([0,1]);
OrientationInterpolator1426.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1426]);
OrientationInterpolator1427 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1427.SetKey([0,1]);
OrientationInterpolator1427.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1427]);
OrientationInterpolator1428 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1428.SetKey([0,1]);
OrientationInterpolator1428.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1428]);
OrientationInterpolator1429 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1429.SetKey([0,1]);
OrientationInterpolator1429.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1429]);
OrientationInterpolator1430 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1430.SetKey([0,1]);
OrientationInterpolator1430.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1430]);
OrientationInterpolator1431 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1431.SetKey([0,1]);
OrientationInterpolator1431.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1431]);
OrientationInterpolator1432 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1432.SetKey([0,1]);
OrientationInterpolator1432.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1432]);
OrientationInterpolator1433 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1433.SetKey([0,1]);
OrientationInterpolator1433.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1433]);
OrientationInterpolator1434 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1434.SetKey([0,1]);
OrientationInterpolator1434.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1434]);
OrientationInterpolator1435 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1435.SetKey([0,1]);
OrientationInterpolator1435.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1435]);
OrientationInterpolator1436 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1436.SetKey([0,1]);
OrientationInterpolator1436.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1436]);
OrientationInterpolator1437 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1437.SetKey([0,1]);
OrientationInterpolator1437.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1437]);
OrientationInterpolator1438 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1438.SetKey([0,1]);
OrientationInterpolator1438.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1438]);
OrientationInterpolator1439 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1439.SetKey([0,1]);
OrientationInterpolator1439.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1439]);
OrientationInterpolator1440 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1440.SetKey([0,1]);
OrientationInterpolator1440.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1440]);
OrientationInterpolator1441 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1441.SetKey([0,1]);
OrientationInterpolator1441.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1441]);
OrientationInterpolator1442 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1442.SetKey([0,1]);
OrientationInterpolator1442.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1442]);
OrientationInterpolator1443 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1443.SetKey([0,1]);
OrientationInterpolator1443.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1443]);
OrientationInterpolator1444 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1444.SetKey([0,1]);
OrientationInterpolator1444.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1444]);
OrientationInterpolator1445 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1445.SetKey([0,1]);
OrientationInterpolator1445.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1445]);
OrientationInterpolator1446 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1446.SetKey([0,1]);
OrientationInterpolator1446.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1446]);
OrientationInterpolator1447 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1447.SetKey([0,1]);
OrientationInterpolator1447.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1447]);
OrientationInterpolator1448 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1448.SetKey([0,1]);
OrientationInterpolator1448.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1448]);
OrientationInterpolator1449 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1449.SetKey([0,1]);
OrientationInterpolator1449.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1449]);
OrientationInterpolator1450 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1450.SetKey([0,1]);
OrientationInterpolator1450.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1450]);
OrientationInterpolator1451 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1451.SetKey([0,1]);
OrientationInterpolator1451.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1451]);
OrientationInterpolator1452 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1452.SetKey([0,1]);
OrientationInterpolator1452.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1452]);
OrientationInterpolator1453 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1453.SetKey([0,1]);
OrientationInterpolator1453.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1453]);
OrientationInterpolator1454 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1454.SetKey([0,1]);
OrientationInterpolator1454.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1454]);
OrientationInterpolator1455 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1455.SetKey([0,1]);
OrientationInterpolator1455.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1455]);
OrientationInterpolator1456 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1456.SetKey([0,1]);
OrientationInterpolator1456.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1456]);
OrientationInterpolator1457 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1457.SetKey([0,1]);
OrientationInterpolator1457.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1457]);
OrientationInterpolator1458 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1458.SetKey([0,1]);
OrientationInterpolator1458.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1458]);
OrientationInterpolator1459 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1459.SetKey([0,1]);
OrientationInterpolator1459.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1459]);
OrientationInterpolator1460 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1460.SetKey([0,1]);
OrientationInterpolator1460.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1460]);
OrientationInterpolator1461 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1461.SetKey([0,1]);
OrientationInterpolator1461.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1461]);
OrientationInterpolator1462 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1462.SetKey([0,1]);
OrientationInterpolator1462.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1462]);
OrientationInterpolator1463 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1463.SetKey([0,1]);
OrientationInterpolator1463.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1463]);
OrientationInterpolator1464 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1464.SetKey([0,1]);
OrientationInterpolator1464.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1464]);
OrientationInterpolator1465 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1465.SetKey([0,1]);
OrientationInterpolator1465.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1465]);
OrientationInterpolator1466 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1466.SetKey([0,1]);
OrientationInterpolator1466.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1466]);
OrientationInterpolator1467 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1467.SetKey([0,1]);
OrientationInterpolator1467.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1467]);
OrientationInterpolator1468 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1468.SetKey([0,1]);
OrientationInterpolator1468.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1468]);
OrientationInterpolator1469 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1469.SetKey([0,1]);
OrientationInterpolator1469.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1469]);
OrientationInterpolator1470 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1470.SetKey([0,1]);
OrientationInterpolator1470.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1470]);
OrientationInterpolator1471 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1471.SetKey([0,1]);
OrientationInterpolator1471.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1471]);
OrientationInterpolator1472 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1472.SetKey([0,1]);
OrientationInterpolator1472.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1472]);
OrientationInterpolator1473 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1473.SetKey([0,1]);
OrientationInterpolator1473.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1473]);
OrientationInterpolator1474 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1474.SetKey([0,1]);
OrientationInterpolator1474.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1474]);
OrientationInterpolator1475 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1475.SetKey([0,1]);
OrientationInterpolator1475.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1475]);
OrientationInterpolator1476 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1476.SetKey([0,1]);
OrientationInterpolator1476.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1476]);
OrientationInterpolator1477 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1477.SetKey([0,1]);
OrientationInterpolator1477.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1477]);
OrientationInterpolator1478 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1478.SetKey([0,1]);
OrientationInterpolator1478.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1478]);
OrientationInterpolator1479 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1479.SetKey([0,1]);
OrientationInterpolator1479.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1479]);
OrientationInterpolator1480 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1480.SetKey([0,1]);
OrientationInterpolator1480.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1480]);
OrientationInterpolator1481 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1481.SetKey([0,1]);
OrientationInterpolator1481.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1481]);
OrientationInterpolator1482 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1482.SetKey([0,1]);
OrientationInterpolator1482.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1482]);
OrientationInterpolator1483 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1483.SetKey([0,1]);
OrientationInterpolator1483.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1483]);
OrientationInterpolator1484 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1484.SetKey([0,1]);
OrientationInterpolator1484.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1484]);
OrientationInterpolator1485 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1485.SetKey([0,1]);
OrientationInterpolator1485.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1485]);
OrientationInterpolator1486 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1486.SetKey([0,1]);
OrientationInterpolator1486.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1486]);
OrientationInterpolator1487 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1487.SetKey([0,1]);
OrientationInterpolator1487.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1487]);
OrientationInterpolator1488 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1488.SetKey([0,1]);
OrientationInterpolator1488.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1488]);
OrientationInterpolator1489 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1489.SetKey([0,1]);
OrientationInterpolator1489.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1489]);
OrientationInterpolator1490 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1490.SetKey([0,1]);
OrientationInterpolator1490.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1490]);
OrientationInterpolator1491 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1491.SetKey([0,1]);
OrientationInterpolator1491.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1491]);
OrientationInterpolator1492 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1492.SetKey([0,1]);
OrientationInterpolator1492.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1492]);
OrientationInterpolator1493 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1493.SetKey([0,1]);
OrientationInterpolator1493.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1493]);
OrientationInterpolator1494 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1494.SetKey([0,1]);
OrientationInterpolator1494.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1494]);
OrientationInterpolator1495 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1495.SetKey([0,1]);
OrientationInterpolator1495.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1495]);
OrientationInterpolator1496 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1496.SetKey([0,1]);
OrientationInterpolator1496.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1496]);
OrientationInterpolator1497 := TOrientationInterpolatorNode.Create;
OrientationInterpolator1497.SetKey([0,1]);
OrientationInterpolator1497.SetKeyValue([Vector4(0,0,0,0),Vector4(0,0,0,0)]);
{ .AddChildren }
Group8.AddChildren([OrientationInterpolator1497]);
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1352.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1352.EventValue_changed, HAnimJoint35.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1353.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1353.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1354.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1354.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1355.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1355.EventValue_changed, HAnimJoint59.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1356.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1356.EventValue_changed, HAnimJoint67.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1357.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1357.EventValue_changed, HAnimJoint75.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1358.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1358.EventValue_changed, HAnimJoint83.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1359.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1359.EventValue_changed, HAnimJoint91.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1360.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1360.EventValue_changed, HAnimJoint99.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1361.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1361.EventValue_changed, HAnimJoint107.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1362.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1362.EventValue_changed, HAnimJoint115.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1363.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1363.EventValue_changed, HAnimJoint123.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1364.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1364.EventValue_changed, HAnimJoint131.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1365.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1365.EventValue_changed, HAnimJoint139.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1366.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1366.EventValue_changed, HAnimJoint147.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1367.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1367.EventValue_changed, HAnimJoint155.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1368.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1368.EventValue_changed, HAnimJoint163.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1369.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1369.EventValue_changed, HAnimJoint171.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1370.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1370.EventValue_changed, HAnimJoint179.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1371.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1371.EventValue_changed, HAnimJoint187.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1372.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1372.EventValue_changed, HAnimJoint195.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1373.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1373.EventValue_changed, HAnimJoint203.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1374.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1374.EventValue_changed, HAnimJoint211.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1375.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1375.EventValue_changed, HAnimJoint219.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1376.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1376.EventValue_changed, HAnimJoint227.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1377.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1377.EventValue_changed, HAnimJoint235.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1378.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1378.EventValue_changed, HAnimJoint243.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1379.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1379.EventValue_changed, HAnimJoint251.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1380.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1380.EventValue_changed, HAnimJoint259.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1381.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1381.EventValue_changed, HAnimJoint267.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1382.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1382.EventValue_changed, HAnimJoint275.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1383.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1383.EventValue_changed, HAnimJoint283.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1384.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1384.EventValue_changed, HAnimJoint291.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1385.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1385.EventValue_changed, HAnimJoint299.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1386.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1386.EventValue_changed, HAnimJoint307.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1387.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1387.EventValue_changed, HAnimJoint315.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1388.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1388.EventValue_changed, HAnimJoint323.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1389.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1389.EventValue_changed, HAnimJoint331.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1390.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1390.EventValue_changed, HAnimJoint339.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1391.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1391.EventValue_changed, HAnimJoint347.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1392.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1392.EventValue_changed, HAnimJoint355.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1393.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1393.EventValue_changed, HAnimJoint363.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1394.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1394.EventValue_changed, HAnimJoint371.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1395.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1395.EventValue_changed, HAnimJoint379.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1396.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1396.EventValue_changed, HAnimJoint387.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1397.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1397.EventValue_changed, HAnimJoint395.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1398.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1398.EventValue_changed, HAnimJoint403.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1399.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1399.EventValue_changed, HAnimJoint411.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1400.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1400.EventValue_changed, HAnimJoint419.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1401.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1401.EventValue_changed, HAnimJoint427.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1402.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1402.EventValue_changed, HAnimJoint435.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1403.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1403.EventValue_changed, HAnimJoint443.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1404.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1404.EventValue_changed, HAnimJoint451.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1405.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1405.EventValue_changed, HAnimJoint459.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1406.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1406.EventValue_changed, HAnimJoint467.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1407.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1407.EventValue_changed, HAnimJoint475.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1408.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1408.EventValue_changed, HAnimJoint483.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1409.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1409.EventValue_changed, HAnimJoint491.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1410.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1410.EventValue_changed, HAnimJoint499.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1411.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1411.EventValue_changed, HAnimJoint507.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1412.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1412.EventValue_changed, HAnimJoint515.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1413.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1413.EventValue_changed, HAnimJoint523.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1414.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1414.EventValue_changed, HAnimJoint531.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1415.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1415.EventValue_changed, HAnimJoint539.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1416.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1416.EventValue_changed, HAnimJoint547.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1417.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1417.EventValue_changed, HAnimJoint555.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1418.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1418.EventValue_changed, HAnimJoint563.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1419.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1419.EventValue_changed, HAnimJoint571.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1420.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1420.EventValue_changed, HAnimJoint579.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1421.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1421.EventValue_changed, HAnimJoint587.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1422.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1422.EventValue_changed, HAnimJoint595.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1423.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1423.EventValue_changed, HAnimJoint603.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1424.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1424.EventValue_changed, HAnimJoint611.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1425.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1425.EventValue_changed, HAnimJoint619.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1426.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1426.EventValue_changed, HAnimJoint627.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1427.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1427.EventValue_changed, HAnimJoint635.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1428.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1428.EventValue_changed, HAnimJoint643.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1429.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1429.EventValue_changed, HAnimJoint651.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1430.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1430.EventValue_changed, HAnimJoint659.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1431.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1431.EventValue_changed, HAnimJoint667.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1432.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1432.EventValue_changed, HAnimJoint675.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1433.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1433.EventValue_changed, HAnimJoint683.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1434.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1434.EventValue_changed, HAnimJoint691.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1435.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1435.EventValue_changed, HAnimJoint699.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1436.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1436.EventValue_changed, HAnimJoint707.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1437.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1437.EventValue_changed, HAnimJoint715.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1438.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1438.EventValue_changed, HAnimJoint723.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1439.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1439.EventValue_changed, HAnimJoint731.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1440.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1440.EventValue_changed, HAnimJoint739.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1441.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1441.EventValue_changed, HAnimJoint747.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1442.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1442.EventValue_changed, HAnimJoint755.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1443.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1443.EventValue_changed, HAnimJoint763.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1444.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1444.EventValue_changed, HAnimJoint771.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1445.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1445.EventValue_changed, HAnimJoint779.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1446.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1446.EventValue_changed, HAnimJoint787.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1447.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1447.EventValue_changed, HAnimJoint795.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1448.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1448.EventValue_changed, HAnimJoint803.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1449.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1449.EventValue_changed, HAnimJoint811.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1450.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1450.EventValue_changed, HAnimJoint819.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1451.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1451.EventValue_changed, HAnimJoint827.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1452.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1452.EventValue_changed, HAnimJoint835.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1453.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1453.EventValue_changed, HAnimJoint843.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1454.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1454.EventValue_changed, HAnimJoint851.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1455.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1455.EventValue_changed, HAnimJoint859.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1456.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1456.EventValue_changed, HAnimJoint867.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1457.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1457.EventValue_changed, HAnimJoint875.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1458.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1458.EventValue_changed, HAnimJoint883.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1459.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1459.EventValue_changed, HAnimJoint891.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1460.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1460.EventValue_changed, HAnimJoint899.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1461.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1461.EventValue_changed, HAnimJoint907.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1462.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1462.EventValue_changed, HAnimJoint915.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1463.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1463.EventValue_changed, HAnimJoint923.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1464.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1464.EventValue_changed, HAnimJoint931.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1465.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1465.EventValue_changed, HAnimJoint939.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1466.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1466.EventValue_changed, HAnimJoint947.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1467.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1467.EventValue_changed, HAnimJoint955.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1468.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1468.EventValue_changed, HAnimJoint963.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1469.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1469.EventValue_changed, HAnimJoint971.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1470.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1470.EventValue_changed, HAnimJoint979.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1471.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1471.EventValue_changed, HAnimJoint987.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1472.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1472.EventValue_changed, HAnimJoint995.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1473.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1473.EventValue_changed, HAnimJoint1003.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1474.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1474.EventValue_changed, HAnimJoint1011.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1475.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1475.EventValue_changed, HAnimJoint1019.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1476.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1476.EventValue_changed, HAnimJoint1027.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1477.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1477.EventValue_changed, HAnimJoint1035.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1478.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1478.EventValue_changed, HAnimJoint1043.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1479.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1479.EventValue_changed, HAnimJoint1051.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1480.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1480.EventValue_changed, HAnimJoint1059.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1481.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1481.EventValue_changed, HAnimJoint1067.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1482.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1482.EventValue_changed, HAnimJoint1075.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1483.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1483.EventValue_changed, HAnimJoint1083.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1484.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1484.EventValue_changed, HAnimJoint1091.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1485.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1485.EventValue_changed, HAnimJoint1099.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1486.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1486.EventValue_changed, HAnimJoint1107.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1487.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1487.EventValue_changed, HAnimJoint1115.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1488.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1488.EventValue_changed, HAnimJoint1123.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1489.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1489.EventValue_changed, HAnimJoint1131.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1490.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1490.EventValue_changed, HAnimJoint1139.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1491.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1491.EventValue_changed, HAnimJoint1147.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1492.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1492.EventValue_changed, HAnimJoint1155.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1493.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1493.EventValue_changed, HAnimJoint1163.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1494.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1494.EventValue_changed, HAnimJoint1171.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1495.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1495.EventValue_changed, HAnimJoint1179.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1496.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1496.EventValue_changed, HAnimJoint1187.FdRotation);
{ .AddX3DRoute }
Group8.AddRoute(TimeSensor1349.EventFraction_changed, OrientationInterpolator1497.EventSet_fraction);
{ .AddX3DRoute }
Group8.AddRoute(OrientationInterpolator1497.EventValue_changed, HAnimJoint1195.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;

begin
end.
